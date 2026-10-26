#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: Client::LayoutEngine::IManagerBase::vf4 */
byte F_00606eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x606eb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xc) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Client::LayoutEngine::IManagerBase::vf5 */
byte F_00606ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x606ec0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0xc);
}

/* ref: FUN_00606f10 */
unsigned int F_00606f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x606f10u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00606f40 */
unsigned int F_00606f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x606f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  short sVar2;
  
  sVar2 = 0;
  *(undefined4 *)this = 0;
  *(short *)((int)this + 4) = (short)param_3;
  *(undefined2 *)((int)this + 6) = 0;
  uVar1 = param_3;
  if (1 < param_3) {
    do {
      uVar1 = uVar1 >> 1;
      sVar2 = sVar2 + 1;
    } while (1 < uVar1);
    *(short *)((int)this + 6) = sVar2;
  }
  *(undefined2 *)this = (undefined2)param_1;
  *(undefined2 *)((int)this + 2) = (undefined2)param_2;
  return 0;
}

/* ref: FUN_00606f90 */
uint F_00606f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x606f90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 4) + param_2 * 4)));
}

/* ref: FUN_00606fa0 */
uint F_00606fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x606fa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 4) + param_2 * 4)));
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf13 */
uint F_00606ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x606ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x104))(this,((undefined1 *)(gen_frame + 0x0)))));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[3] = puVar1[3];
  return (uint)param_1;
}

/* ref: FUN_00607080 */
uint F_00607080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607080u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 8) + param_2 * 4)));
}

/* ref: FUN_00607090 */
uint F_00607090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607090u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 8) + param_2 * 4)));
}

/* ref: FUN_006070a0 */
uint F_006070a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6070a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)((int)this + 0x20);
  param_1[1] = *(undefined4 *)((int)this + 0x24);
  param_1[2] = *(undefined4 *)((int)this + 0x28);
  param_1[4] = *(undefined4 *)((int)this + 0x30);
  param_1[5] = *(undefined4 *)((int)this + 0x34);
  param_1[6] = *(undefined4 *)((int)this + 0x38);
  param_1[7] = *(undefined4 *)((int)this + 0x3c);
  param_1[8] = *(undefined4 *)((int)this + 0x40);
  param_1[9] = *(undefined4 *)((int)this + 0x44);
  param_1[10] = *(undefined4 *)((int)this + 0x48);
  return (uint)param_1;
}

/* ref: FUN_006070f0 */
uint F_006070f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6070f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
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
  return (uint)param_1;
}

/* ref: FUN_00607150 */
uint F_00607150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607150u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x78) + param_2 * 4)));
}

/* ref: FUN_00607160 */
uint F_00607160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  return (uint)this;
}

/* ref: FUN_006071b0 */
uint F_006071b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6071b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = param_2;
  in_ecx[2] = param_2;
  in_ecx[3] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006071e0 */
uint F_006071e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6071e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x11c))(this);
  if (uVar1 != 0xffffffff) {
    return *((uint *)GEN_TOP((*(int *)((int)this + 0x30) + 0xf0)));
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf57 */
uint F_00607220(unsigned int gen_a0)
{
  GEN_ENTER(0x607220u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x30;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf58 */
uint F_00607230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607230u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x30) = *param_2;
  *(undefined4 *)(in_ecx + 0x34) = param_2[1];
  *(undefined4 *)(in_ecx + 0x38) = param_2[2];
  return (uint)param_2;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf59 */
uint F_00607250(unsigned int gen_a0)
{
  GEN_ENTER(0x607250u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x40;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf60 */
uint F_00607260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)(this + 0x40) = *param_1;
  *(undefined4 *)(this + 0x44) = param_1[1];
  *(undefined4 *)(this + 0x48) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)(this + 0x4c) = uVar1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf61 */
uint F_00607290(unsigned int gen_a0)
{
  GEN_ENTER(0x607290u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x50;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf64 */
uint F_006072a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6072a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(this + 0x30) = *param_1;
  *(undefined4 *)(this + 0x34) = param_1[1];
  *(undefined4 *)(this + 0x38) = param_1[2];
  *(undefined4 *)(this + 0x40) = param_1[4];
  *(undefined4 *)(this + 0x44) = param_1[5];
  *(undefined4 *)(this + 0x48) = param_1[6];
  *(undefined4 *)(this + 0x4c) = param_1[7];
  *(undefined4 *)(this + 0x50) = param_1[8];
  *(undefined4 *)(this + 0x54) = param_1[9];
  *(undefined4 *)(this + 0x58) = param_1[10];
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::LineVfxLayoutInstance::vf14 */
uint F_006072f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6072f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this)));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::LineVfxLayoutInstance::vf16 */
uint F_00607320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xf4))(this)));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::LineVfxLayoutInstance::vf17 */
uint F_00607350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this)));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[4] = puVar1[4];
  param_1[5] = puVar1[5];
  param_1[6] = puVar1[6];
  param_1[7] = puVar1[7];
  param_1[8] = puVar1[8];
  param_1[9] = puVar1[9];
  param_1[10] = puVar1[10];
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf58 */
uint F_006073a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6073a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf63 */
uint F_006073d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6073d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this)));
  *(undefined4 *)&REFG(undefined, 0x1379cd0) = *puVar1;
  *(undefined4 *)&REFG(undefined, 0x1379cd4) = puVar1[1];
  *(undefined4 *)&REFG(undefined, 0x1379cd8) = puVar1[2];
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xec))(this)));
  *(undefined4 *)&REFG(undefined, 0x1379ce0) = *puVar1;
  *(undefined4 *)&REFG(undefined, 0x1379ce4) = puVar1[1];
  *(undefined4 *)&REFG(undefined, 0x1379ce8) = puVar1[2];
  *(undefined4 *)&REFG(undefined, 0x1379cec) = puVar1[3];
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xf4))(this)));
  *(undefined4 *)&REFG(undefined, 0x1379cf0) = *puVar1;
  *(undefined4 *)&REFG(undefined, 0x1379cf4) = puVar1[1];
  *(undefined4 *)&REFG(undefined, 0x1379cf8) = puVar1[2];
  return 0x1379cd0;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf64 */
uint F_00607470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0xe8))(this,param_1);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xf0))(this,param_1 + 0x10);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf13 */
uint F_006074a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6074a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this)));
  uVar2 = REFG(float, 0x10a27e4);
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  uVar1 = puVar3[2];
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf14 */
uint F_006074e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6074e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this)));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf16 */
uint F_00607510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xf4))(this)));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf17 */
uint F_00607540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this)));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[4] = puVar1[4];
  param_1[5] = puVar1[5];
  param_1[6] = puVar1[6];
  param_1[7] = puVar1[7];
  param_1[8] = puVar1[8];
  param_1[9] = puVar1[9];
  param_1[10] = puVar1[10];
  return (uint)param_1;
}

/* ref: FUN_00607590 */
uint F_00607590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607590u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xa0) + param_2 * 4)));
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf57 */
uint F_006075b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6075b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x30;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf58 */
uint F_006075c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6075c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x30) = *param_2;
  *(undefined4 *)(in_ecx + 0x34) = param_2[1];
  *(undefined4 *)(in_ecx + 0x38) = param_2[2];
  return (uint)param_2;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf59 */
uint F_006075e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6075e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x40;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf60 */
uint F_006075f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6075f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)(this + 0x40) = *param_1;
  *(undefined4 *)(this + 0x44) = param_1[1];
  *(undefined4 *)(this + 0x48) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)(this + 0x4c) = uVar1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf61 */
uint F_00607620(unsigned int gen_a0)
{
  GEN_ENTER(0x607620u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x50;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf62 */
uint F_00607630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607630u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x50) = *param_2;
  *(undefined4 *)(in_ecx + 0x54) = param_2[1];
  *(undefined4 *)(in_ecx + 0x58) = param_2[2];
  return (uint)param_2;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf64 */
uint F_00607650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(this + 0x30) = *param_1;
  *(undefined4 *)(this + 0x34) = param_1[1];
  *(undefined4 *)(this + 0x38) = param_1[2];
  *(undefined4 *)(this + 0x40) = param_1[4];
  *(undefined4 *)(this + 0x44) = param_1[5];
  *(undefined4 *)(this + 0x48) = param_1[6];
  *(undefined4 *)(this + 0x4c) = param_1[7];
  *(undefined4 *)(this + 0x50) = param_1[8];
  *(undefined4 *)(this + 0x54) = param_1[9];
  *(undefined4 *)(this + 0x58) = param_1[10];
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf0 */
uint F_006076a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6076a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006076d0 */
uint F_006076d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6076d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_005fe8d0(this,param_1);
  return (uint)this;
}

/* ref: FUN_006076f0 */
uint F_006076f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6076f0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float * pfVar6;
  float * pfVar7;
  
  pfVar6 = param_1;
  if (!((float10)*param_1 < (float10)*(float *)param_2)) {
    pfVar6 = (float *)param_2;
  }
  pfVar7 = param_1 + 1;
  if (!((float10)param_1[1] < (float10)*(float *)(param_2 + 4))) {
    pfVar7 = (float *)(param_2 + 4);
  }
  fVar1 = *pfVar7;
  pfVar7 = (float *)(param_2 + 8);
  if ((float10)param_1[2] < (float10)*(float *)(param_2 + 8)) {
    pfVar7 = param_1 + 2;
  }
  fVar2 = *pfVar7;
  pfVar7 = (float *)param_2;
  if ((float10)*(float *)param_2 < (float10)param_1[4]) {
    pfVar7 = param_1 + 4;
  }
  fVar3 = *pfVar7;
  pfVar7 = param_1 + 5;
  if (!((float10)*(float *)(param_2 + 4) < (float10)param_1[5])) {
    pfVar7 = (float *)(param_2 + 4);
  }
  fVar4 = *pfVar7;
  pfVar7 = param_1 + 6;
  if (!((float10)*(float *)(param_2 + 8) < (float10)param_1[6])) {
    pfVar7 = (float *)(param_2 + 8);
  }
  fVar5 = *pfVar7;
  *param_1 = *pfVar6;
  param_1[1] = fVar1;
  param_1[2] = fVar2;
  param_1[4] = fVar3;
  param_1[5] = fVar4;
  param_1[6] = fVar5;
  return (uint)param_1;
}

/* ref: FUN_006077b0 */
uint F_006077b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6077b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)((int)this + 0xc);
  fVar2 = *(float *)((int)this + 4);
  fVar3 = *(float *)((int)this + 8);
  *param_1 = (float)((float10)*(float *)((int)(uintptr_t)this) * (float10)*(float *)this);
  param_1[1] = (float)((float10)fVar2 * (float10)fVar2);
  param_1[2] = (float)((float10)fVar3 * (float10)fVar3);
  param_1[3] = fVar1;
  return (uint)param_1;
}

/* ref: FUN_00607800 */
uint F_00607800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)((int)this + 4);
  fVar3 = *(float *)((int)this + 8);
  fVar1 = *(float *)((int)this + 0xc);
  *param_1 = ((float)GEN_TOF(SQRT((float10)*(float *)this)));
  param_1[1] = ((float)GEN_TOF(SQRT((float10)fVar2)));
  param_1[2] = ((float)GEN_TOF(SQRT((float10)fVar3)));
  param_1[3] = fVar1;
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Environment::LayoutEnvironment::vf0 */
uint F_00607870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a2ba4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Node::ChildNodeInstance::vf0 */
uint F_006078a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6078a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a2bac));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 8))))(*(int * PTR32 *)(this + 0x10));
  puVar1 = *(undefined4 * PTR32 *)(this + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0x10) = 0;
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf6 */
uint F_006078f0(void)
{
  GEN_ENTER(0x6078f0u, 0u, 0u, 0u, 0u);
  return 0x70;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf21 */
byte F_00607900(void)
{
  GEN_ENTER(0x607900u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf22 */
byte F_00607910(void)
{
  GEN_ENTER(0x607910u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf24 */
uint F_00607920(void)
{
  GEN_ENTER(0x607920u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf23 */
uint F_00607930(void)
{
  GEN_ENTER(0x607930u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf25 */
unsigned int F_00607940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x607940u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf57 */
uint F_00607950(unsigned int gen_a0)
{
  GEN_ENTER(0x607950u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x30;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf58 */
uint F_00607960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607960u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x30) = *param_2;
  *(undefined4 *)(in_ecx + 0x34) = param_2[1];
  *(undefined4 *)(in_ecx + 0x38) = param_2[2];
  return (uint)param_2;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf59 */
uint F_00607980(unsigned int gen_a0)
{
  GEN_ENTER(0x607980u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x40;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf60 */
uint F_00607990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)(this + 0x40) = *param_1;
  *(undefined4 *)(this + 0x44) = param_1[1];
  *(undefined4 *)(this + 0x48) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)(this + 0x4c) = uVar1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf61 */
uint F_006079c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6079c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x50;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf62 */
uint F_006079d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6079d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x50) = *param_2;
  *(undefined4 *)(in_ecx + 0x54) = param_2[1];
  *(undefined4 *)(in_ecx + 0x58) = param_2[2];
  return (uint)param_2;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf63 */
uint F_006079f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6079f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x30;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf64 */
uint F_00607a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(this + 0x30) = *param_1;
  *(undefined4 *)(this + 0x34) = param_1[1];
  *(undefined4 *)(this + 0x38) = param_1[2];
  *(undefined4 *)(this + 0x40) = param_1[4];
  *(undefined4 *)(this + 0x44) = param_1[5];
  *(undefined4 *)(this + 0x48) = param_1[6];
  *(undefined4 *)(this + 0x4c) = param_1[7];
  *(undefined4 *)(this + 0x50) = param_1[8];
  *(undefined4 *)(this + 0x54) = param_1[9];
  *(undefined4 *)(this + 0x58) = param_1[10];
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf0 */
uint F_00607a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00607a80 */
uint F_00607a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0x40) = *param_1;
  *(undefined4 *)((int)this + 0x44) = param_1[1];
  *(undefined4 *)((int)this + 0x48) = param_1[2];
  *(undefined4 *)((int)this + 0x50) = param_1[4];
  *(undefined4 *)((int)this + 0x54) = param_1[5];
  *(undefined4 *)((int)this + 0x58) = param_1[6];
  *(undefined4 *)((int)this + 0x5c) = param_1[7];
  *(undefined4 *)((int)this + 0x60) = param_1[8];
  *(undefined4 *)((int)this + 100) = param_1[9];
  *(undefined4 *)((int)this + 0x68) = param_1[10];
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Group::TimeLineLayoutInstance::vf6 */
uint F_00607ad0(void)
{
  GEN_ENTER(0x607ad0u, 0u, 0u, 0u, 0u);
  return 0x60;
}

/* ref: Client::LayoutEngine::Group::TimeLineLayoutInstance::vf24 */
uint F_00607ae0(void)
{
  GEN_ENTER(0x607ae0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Group::TimeLineLayoutInstance::vf23 */
uint F_00607af0(void)
{
  GEN_ENTER(0x607af0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Group::TimeLineLayoutInstance::vf25 */
unsigned int F_00607b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x607b00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::LayoutEngine::Group::TimeLineLayoutInstance::vf0 */
uint F_00607b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Group::SGActionController::vf0 */
uint F_00607b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10a2bb4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Group::SGDoorActionController::vf3 */
uint F_00607b70(void)
{
  GEN_ENTER(0x607b70u, 0u, 0u, 0u, 0u);
  return 0xb4;
}

/* ref: Client::LayoutEngine::Group::SGDoorActionController::vf4 */
byte F_00607b80(void)
{
  GEN_ENTER(0x607b80u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Group::SGDoorActionController::vf0 */
uint F_00607b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10a2bb4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Group::SGRotationActionController::vf0 */
uint F_00607bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10a2bb4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Group::SGRandomActionController::vf0 */
uint F_00607bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10a2bb4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Group::SGMovePathActionController::vf3 */
uint F_00607c20(void)
{
  GEN_ENTER(0x607c20u, 0u, 0u, 0u, 0u);
  return 0xd0;
}

/* ref: Client::LayoutEngine::Group::SGMovePathActionController::vf7 */
byte F_00607c30(void)
{
  GEN_ENTER(0x607c30u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Group::SGMovePathActionController::vf0 */
uint F_00607c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10a2bb4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf10 */
byte F_00607c70(void)
{
  GEN_ENTER(0x607c70u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf68 */
uint F_00607c80(unsigned int gen_a0)
{
  GEN_ENTER(0x607c80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x34;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf69 */
uint F_00607c90(unsigned int gen_a0)
{
  GEN_ENTER(0x607c90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x70);
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf70 */
uint F_00607ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x607ca0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x74);
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf73 */
uint F_00607cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x607cb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf72 */
uint F_00607cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x607cc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf63 */
uint F_00607cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x607cd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x40;
}

/* ref: FUN_00607ce0 */
unsigned int F_00607ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10a3960);
  fVar2 = (float10)*(double *)&REFG(undefined, 0x10928e8);
  fVar3 = (float10)*(double *)&REFG(undefined, 0x10912a8);
  *param_1 = ((float)GEN_TOF((((float10)*(ushort *)((int)(uintptr_t)this) * fVar1) * fVar2 - fVar3)));
  param_1[1] = ((float)GEN_TOF((((float10)*(ushort *)((int)this + 2) * fVar1) * fVar2 - fVar3)));
  param_1[2] = ((float)GEN_TOF((fVar2 * ((float10)*(ushort *)((int)this + 4) * fVar1) - fVar3)));
  return 0;
}

/* ref: FUN_00607d40 */
uint F_00607d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a1e180(param_1,((float)GEN_TOF((((float10)*(ushort *)((int)this + 6) *
                               (float10)*(double *)&REFG(undefined, 0x10a3968)) *
                               (float10)*(double *)&REFG(undefined, 0x10928e8) - (float10)*(double *)&REFG(undefined, 0x1080228)
                              ))));
  return param_1;
}

/* ref: FUN_00607d80 */
uint F_00607d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  uVar4 = *(ushort *)((int)this + 2);
  (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)*(ushort *)this);
  uVar5 = *(ushort *)((int)this + 4);
  fVar6 = (float10)*(double *)&REFG(undefined, 0x10a3960);
  (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)uVar4);
  fVar7 = (float10)*(double *)&REFG(undefined, 0x10928e8);
  fVar8 = (float10)*(double *)&REFG(undefined, 0x10912a8);
  fVar1 = ((float)GEN_TOF((((float10)*(ushort *)((int)(uintptr_t)this) * fVar6) * fVar7 - fVar8)));
  (*(float *)(gen_frame + 0x0)) = fVar1;
  (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)uVar5);
  fVar2 = ((float)GEN_TOF((((float10)uVar4 * fVar6) * fVar7 - fVar8)));
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar3 = ((float)GEN_TOF((((float10)uVar5 * fVar6) * fVar7 - fVar8)));
  (*(float *)(gen_frame + 0x8)) = fVar3;
  *param_1 = fVar1;
  param_1[1] = fVar2;
  param_1[2] = fVar3;
  (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)*(ushort *)((int)this + 6));
  fVar1 = ((float)GEN_TOF((((float10)*(ushort *)((int)this + 6) * (float10)*(double *)&REFG(undefined, 0x10a3968)) * fVar7
                 - (float10)*(double *)&REFG(undefined, 0x1080228))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  F_00a1e180((uint)&(*(float *)(gen_frame + 0x0)),fVar1);
  param_1[4] = (*(float *)(gen_frame + 0x0));
  param_1[5] = (*(float *)(gen_frame + 0x4));
  param_1[6] = (*(float *)(gen_frame + 0x8));
  param_1[7] = (*(float *)(gen_frame + 0xc));
  param_1[8] = GEN_FLT_TO(param_1[8], REFG(float, 0x1302c60));
  param_1[9] = GEN_FLT_TO(param_1[9], REFG(float, 0x1302c64));
  param_1[10] = GEN_FLT_TO(param_1[10], REFG(float, 0x1302c68));
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf14 */
unsigned int F_00607e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10a3960);
  fVar2 = (float10)*(double *)&REFG(undefined, 0x10928e8);
  fVar3 = (float10)*(double *)&REFG(undefined, 0x10912a8);
  *param_1 = ((float)GEN_TOF((((float10)*(ushort *)(this + 0x34) * fVar1) * fVar2 - fVar3)));
  param_1[1] = ((float)GEN_TOF((((float10)*(ushort *)(this + 0x36) * fVar1) * fVar2 - fVar3)));
  param_1[2] = ((float)GEN_TOF((fVar2 * ((float10)*(ushort *)(this + 0x38) * fVar1) - fVar3)));
  return 0;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf15 */
uint F_00607ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a1e180(param_1,((float)GEN_TOF((((float10)*(ushort *)(this + 0x3a) *
                               (float10)*(double *)&REFG(undefined, 0x10a3968)) *
                               (float10)*(double *)&REFG(undefined, 0x10928e8) - (float10)*(double *)&REFG(undefined, 0x1080228)
                              ))));
  return param_1;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf16 */
uint F_00607f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1302c60));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1302c64));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1302c68));
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf17 */
uint F_00607f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00607d80(this + 0x34,param_1);
  return param_1;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf57 */
uint F_00607f70(unsigned int gen_a0)
{
  GEN_ENTER(0x607f70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x40;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf59 */
uint F_00607f80(unsigned int gen_a0)
{
  GEN_ENTER(0x607f80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x50;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf61 */
uint F_00607f90(unsigned int gen_a0)
{
  GEN_ENTER(0x607f90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x60;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf0 */
uint F_00607fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::EventNpcLayoutInstance::vf6 */
uint F_00607fd0(void)
{
  GEN_ENTER(0x607fd0u, 0u, 0u, 0u, 0u);
  return 0x80;
}

/* ref: Client::LayoutEngine::Layer::EventNpcLayoutInstance::vf0 */
uint F_00607fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x607fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::BattleNpcLayoutInstance::vf6 */
uint F_00608010(void)
{
  GEN_ENTER(0x608010u, 0u, 0u, 0u, 0u);
  return 0x80;
}

/* ref: Client::LayoutEngine::Layer::BattleNpcLayoutInstance::vf0 */
uint F_00608020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf10 */
byte F_00608050(void)
{
  GEN_ENTER(0x608050u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf68 */
uint F_00608060(unsigned int gen_a0)
{
  GEN_ENTER(0x608060u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x3c;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf63 */
uint F_00608070(unsigned int gen_a0)
{
  GEN_ENTER(0x608070u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x50;
}

/* ref: FUN_00608080 */
uint F_00608080(unsigned int gen_a0)
{
  GEN_ENTER(0x608080u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 & 0xffff;
}

/* ref: FUN_006080b0 */
unsigned int F_006080b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6080b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10a3960);
  fVar2 = (float10)*(double *)&REFG(undefined, 0x10928e8);
  fVar3 = (float10)*(double *)&REFG(undefined, 0x10912a8);
  *param_1 = ((float)GEN_TOF((((float10)*(ushort *)((int)this + 0xc) * fVar1) * fVar2 - fVar3)));
  param_1[1] = ((float)GEN_TOF((((float10)*(ushort *)((int)this + 0xe) * fVar1) * fVar2 - fVar3)));
  param_1[2] = ((float)GEN_TOF((fVar2 * ((float10)*(ushort *)((int)this + 0x10) * fVar1) - fVar3)));
  return 0;
}

/* ref: FUN_00608110 */
float * F_00608110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  uVar4 = *(ushort *)((int)this + 2);
  uVar5 = *(ushort *)((int)this + 4);
  (*(uint *)(gen_frame + 0x2c)) = (uint)*(ushort *)this;
  (*(uint *)(gen_frame + 0x2c)) = (uint)uVar4;
  fVar6 = (float10)*(double *)&REFG(undefined, 0x10a3960);
  fVar7 = (float10)*(double *)&REFG(undefined, 0x10928e8);
  fVar8 = (float10)*(double *)&REFG(undefined, 0x10912a8);
  fVar1 = ((float)GEN_TOF((((float10)*(ushort *)((int)(uintptr_t)this) * fVar6) * fVar7 - fVar8)));
  (*(float *)(gen_frame + 0x10)) = fVar1;
  (*(uint *)(gen_frame + 0x2c)) = (uint)uVar5;
  fVar2 = ((float)GEN_TOF((((float10)uVar4 * fVar6) * fVar7 - fVar8)));
  (*(float *)(gen_frame + 0x14)) = fVar2;
  fVar3 = ((float)GEN_TOF((((float10)uVar5 * fVar6) * fVar7 - fVar8)));
  (*(float *)(gen_frame + 0x18)) = fVar3;
  *param_1 = fVar1;
  param_1[1] = fVar2;
  param_1[2] = fVar3;
  uVar4 = *(ushort *)((int)this + 8);
  (*(uint *)(gen_frame + 0x2c)) = (uint)*(ushort *)((int)this + 6);
  uVar5 = *(ushort *)((int)this + 10);
  fVar6 = (float10)*(double *)&REFG(undefined, 0x10a3968);
  (*(uint *)(gen_frame + 0x2c)) = (uint)uVar4;
  fVar8 = (float10)*(double *)&REFG(undefined, 0x1080228);
  (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF((((float10)*(ushort *)((int)this + 6) * fVar6) * fVar7 - fVar8)));
  (*(uint *)(gen_frame + 0x2c)) = (uint)uVar5;
  (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF((((float10)uVar4 * fVar6) * fVar7 - fVar8)));
  (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF((((float10)uVar5 * fVar6) * fVar7 - fVar8)));
  F_00a1e0d0(&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x0)));
  param_1[4] = (*(float *)(gen_frame + 0x10));
  param_1[5] = (*(float *)(gen_frame + 0x14));
  param_1[6] = (*(float *)(gen_frame + 0x18));
  param_1[7] = (*(float *)(gen_frame + 0x1c));
  (*(uint *)(gen_frame + 0x2c)) = (uint)*(ushort *)((int)this + 0xc);
  fVar6 = (float10)*(double *)&REFG(undefined, 0x10a3960);
  uVar4 = *(ushort *)((int)this + 0xe);
  fVar7 = (float10)*(double *)&REFG(undefined, 0x10928e8);
  uVar5 = *(ushort *)((int)this + 0x10);
  fVar8 = (float10)*(double *)&REFG(undefined, 0x10912a8);
  (*(uint *)(gen_frame + 0x2c)) = (uint)uVar4;
  fVar1 = ((float)GEN_TOF((((float10)*(ushort *)((int)this + 0xc) * fVar6) * fVar7 - fVar8)));
  (*(float *)(gen_frame + 0x10)) = fVar1;
  (*(uint *)(gen_frame + 0x2c)) = (uint)uVar5;
  fVar2 = ((float)GEN_TOF((((float10)uVar4 * fVar6) * fVar7 - fVar8)));
  (*(float *)(gen_frame + 0x14)) = fVar2;
  fVar3 = ((float)GEN_TOF((fVar7 * ((float10)uVar5 * fVar6) - fVar8)));
  (*(float *)(gen_frame + 0x18)) = fVar3;
  param_1[8] = fVar1;
  param_1[9] = fVar2;
  param_1[10] = fVar3;
  return param_1;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf14 */
unsigned int F_00608270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10a3960);
  fVar2 = (float10)*(double *)&REFG(undefined, 0x10928e8);
  fVar3 = (float10)*(double *)&REFG(undefined, 0x10912a8);
  *param_1 = ((float)GEN_TOF((((float10)*(ushort *)(this + 0x3c) * fVar1) * fVar2 - fVar3)));
  param_1[1] = ((float)GEN_TOF((((float10)*(ushort *)(this + 0x3e) * fVar1) * fVar2 - fVar3)));
  param_1[2] = ((float)GEN_TOF((fVar2 * ((float10)*(ushort *)(this + 0x40) * fVar1) - fVar3)));
  return 0;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf15 */
uint F_006082d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6082d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  ushort uVar1;
  ushort uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  uVar1 = *(ushort *)(this + 0x44);
  (*(uint *)(gen_frame + 0x1c)) = (uint)*(ushort *)(this + 0x42);
  uVar2 = *(ushort *)(this + 0x46);
  fVar3 = (float10)*(double *)&REFG(undefined, 0x10a3968);
  (*(uint *)(gen_frame + 0x1c)) = (uint)uVar1;
  fVar4 = (float10)*(double *)&REFG(undefined, 0x10928e8);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1080228);
  (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF((((float10)*(ushort *)(this + 0x42) * fVar3) * fVar4 - fVar5)));
  (*(uint *)(gen_frame + 0x1c)) = (uint)uVar2;
  (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF((((float10)uVar1 * fVar3) * fVar4 - fVar5)));
  (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF((fVar4 * ((float10)uVar2 * fVar3) - fVar5)));
  F_00a1e0d0(param_1,&(*(float *)(gen_frame + 0x0)));
  return param_1;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf16 */
unsigned int F_00608360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10a3960);
  fVar2 = (float10)*(double *)&REFG(undefined, 0x10928e8);
  fVar3 = (float10)*(double *)&REFG(undefined, 0x10912a8);
  *param_1 = ((float)GEN_TOF((((float10)*(ushort *)(this + 0x48) * fVar1) * fVar2 - fVar3)));
  param_1[1] = ((float)GEN_TOF((((float10)*(ushort *)(this + 0x4a) * fVar1) * fVar2 - fVar3)));
  param_1[2] = ((float)GEN_TOF((fVar2 * ((float10)*(ushort *)(this + 0x4c) * fVar1) - fVar3)));
  return 0;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf17 */
uint F_006083c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6083c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00608110(this + 0x3c,param_1);
  return param_1;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf57 */
uint F_006083e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6083e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x50;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf59 */
uint F_006083f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6083f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x60;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf61 */
uint F_00608400(unsigned int gen_a0)
{
  GEN_ENTER(0x608400u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x70;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf0 */
uint F_00608410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::AetheryteLayoutInstance::vf6 */
uint F_00608440(void)
{
  GEN_ENTER(0x608440u, 0u, 0u, 0u, 0u);
  return 0x80;
}

/* ref: Client::LayoutEngine::Layer::AetheryteLayoutInstance::vf0 */
uint F_00608450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::GatheringLayoutInstance::vf6 */
uint F_00608480(void)
{
  GEN_ENTER(0x608480u, 0u, 0u, 0u, 0u);
  return 0x80;
}

/* ref: Client::LayoutEngine::Layer::GatheringLayoutInstance::vf0 */
uint F_00608490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::TreasureLayoutInstance::vf6 */
uint F_006084c0(void)
{
  GEN_ENTER(0x6084c0u, 0u, 0u, 0u, 0u);
  return 0x80;
}

/* ref: Client::LayoutEngine::Layer::TreasureLayoutInstance::vf0 */
uint F_006084d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6084d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::EventObjectLayoutInstance::vf6 */
uint F_00608500(void)
{
  GEN_ENTER(0x608500u, 0u, 0u, 0u, 0u);
  return 0x80;
}

/* ref: Client::LayoutEngine::Layer::EventObjectLayoutInstance::vf0 */
uint F_00608510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf6 */
uint F_00608540(void)
{
  GEN_ENTER(0x608540u, 0u, 0u, 0u, 0u);
  return 0x48;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf15 */
uint F_00608550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xec))(this)));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[3] = puVar1[3];
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf24 */
uint F_00608580(unsigned int gen_a0)
{
  GEN_ENTER(0x608580u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf23 */
uint F_00608590(unsigned int gen_a0)
{
  GEN_ENTER(0x608590u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf34 */
uint F_006085a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6085a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x34);
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf33 */
uint F_006085b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6085b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x34);
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf35 */
byte F_006085c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6085c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x34) != 0) {
    return *((byte *)GEN_TOP((*(int *)(in_ecx + 0x34) + 0x54)));
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf14 */
uint F_006085d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6085d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this)));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf16 */
uint F_00608600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xf4))(this)));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf17 */
uint F_00608630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this)));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[4] = puVar1[4];
  param_1[5] = puVar1[5];
  param_1[6] = puVar1[6];
  param_1[7] = puVar1[7];
  param_1[8] = puVar1[8];
  param_1[9] = puVar1[9];
  param_1[10] = puVar1[10];
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf0 */
uint F_00608680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::EnvSpaceLayoutInstance::vf0 */
uint F_006086b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6086b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::EnvLocationLayoutInstance::vf0 */
uint F_006086e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6086e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::LightLayoutInstance::vf0 */
uint F_00608710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00608740 */
uint F_00608740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf6 */
uint F_00608770(void)
{
  GEN_ENTER(0x608770u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf24 */
uint F_00608780(unsigned int gen_a0)
{
  GEN_ENTER(0x608780u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf23 */
uint F_00608790(unsigned int gen_a0)
{
  GEN_ENTER(0x608790u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf49 */
byte F_006087a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6087a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x8c) & 1;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf40 */
byte F_006087b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6087b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (*(byte *)(in_ecx + 0x8c) ^ (byte)param_2) & 1;
  *(byte *)(in_ecx + 0x8c) = *(byte *)(in_ecx + 0x8c) ^ bVar1;
  return bVar1;
}

/* ref: FUN_006087d0 */
uint F_006087d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6087d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x1088100);
  *(float *)this = ((float)GEN_TOF(((float10)(param_1 & 0xff) / fVar1)));
  *(float *)((int)this + 4) = ((float)GEN_TOF(((float10)(param_1 >> 8 & 0xff) / fVar1)));
  *(float *)((int)this + 8) = ((float)GEN_TOF(((float10)(param_1 >> 0x10 & 0xff) / fVar1)));
  *(float *)((int)this + 0xc) = ((float)GEN_TOF(((float10)(param_1 >> 0x18) / fVar1)));
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf13 */
uint F_00608840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this)));
  uVar2 = REFG(float, 0x10a27e4);
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  uVar1 = puVar3[2];
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf14 */
uint F_00608880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608880u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x40);
  param_2[1] = *(undefined4 *)(in_ecx + 0x44);
  param_2[2] = *(undefined4 *)(in_ecx + 0x48);
  return (uint)param_2;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf15 */
uint F_006088a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6088a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)(this + 0x50);
  param_1[1] = *(undefined4 *)(this + 0x54);
  param_1[2] = *(undefined4 *)(this + 0x58);
  param_1[3] = *(undefined4 *)(this + 0x5c);
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf16 */
uint F_006088d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6088d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x60);
  param_2[1] = *(undefined4 *)(in_ecx + 100);
  param_2[2] = *(undefined4 *)(in_ecx + 0x68);
  return (uint)param_2;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf17 */
uint F_006088f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6088f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)(this + 0x40);
  param_1[1] = *(undefined4 *)(this + 0x44);
  param_1[2] = *(undefined4 *)(this + 0x48);
  param_1[4] = *(undefined4 *)(this + 0x50);
  param_1[5] = *(undefined4 *)(this + 0x54);
  param_1[6] = *(undefined4 *)(this + 0x58);
  param_1[7] = *(undefined4 *)(this + 0x5c);
  param_1[8] = *(undefined4 *)(this + 0x60);
  param_1[9] = *(undefined4 *)(this + 100);
  param_1[10] = *(undefined4 *)(this + 0x68);
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf43 */
uint F_00608940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  uint uVar1;
  float10 fVar2;
  
  uVar1 = *(uint *)(this + 0x88);
  fVar2 = (float10)*(double *)&REFG(undefined, 0x1088100);
  *param_1 = ((float)GEN_TOF(((float10)(uVar1 & 0xff) / fVar2)));
  param_1[1] = ((float)GEN_TOF(((float10)(uVar1 >> 8 & 0xff) / fVar2)));
  param_1[2] = ((float)GEN_TOF(((float10)(uVar1 >> 0x10 & 0xff) / fVar2)));
  param_1[3] = ((float)GEN_TOF(((float10)(uVar1 >> 0x18) / fVar2)));
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf0 */
uint F_006089d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6089d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::WeaponLayoutInstance::vf0 */
uint F_00608a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf21 */
byte F_00608a30(unsigned int gen_a0)
{
  GEN_ENTER(0x608a30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x30) != 0;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf22 */
byte F_00608a40(void)
{
  GEN_ENTER(0x608a40u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf24 */
uint F_00608a50(void)
{
  GEN_ENTER(0x608a50u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf23 */
uint F_00608a60(void)
{
  GEN_ENTER(0x608a60u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf25 */
unsigned int F_00608a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x608a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf34 */
uint F_00608a80(unsigned int gen_a0)
{
  GEN_ENTER(0x608a80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf33 */
uint F_00608a90(unsigned int gen_a0)
{
  GEN_ENTER(0x608a90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf63 */
uint F_00608aa0(unsigned int gen_a0)
{
  GEN_ENTER(0x608aa0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x40;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf57 */
uint F_00608ab0(unsigned int gen_a0)
{
  GEN_ENTER(0x608ab0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x40;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf59 */
uint F_00608ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x608ac0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x50;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf61 */
uint F_00608ad0(unsigned int gen_a0)
{
  GEN_ENTER(0x608ad0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x60;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf0 */
uint F_00608ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::ExitRangeLayoutInstance::vf6 */
uint F_00608b10(void)
{
  GEN_ENTER(0x608b10u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::LayoutEngine::Layer::ExitRangeLayoutInstance::vf0 */
uint F_00608b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::PrefetchRangeLayoutInstance::vf6 */
uint F_00608b50(void)
{
  GEN_ENTER(0x608b50u, 0u, 0u, 0u, 0u);
  return 0x90;
}

/* ref: Client::LayoutEngine::Layer::PrefetchRangeLayoutInstance::vf0 */
uint F_00608b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::MapRangeLayoutInstance::vf6 */
uint F_00608b90(void)
{
  GEN_ENTER(0x608b90u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::LayoutEngine::Layer::MapRangeLayoutInstance::vf0 */
uint F_00608ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::EventRangeLayoutInstance::vf6 */
uint F_00608bd0(void)
{
  GEN_ENTER(0x608bd0u, 0u, 0u, 0u, 0u);
  return 0x80;
}

/* ref: Client::LayoutEngine::Layer::EventRangeLayoutInstance::vf0 */
uint F_00608be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::CollisionBoxLayoutInstance::vf6 */
uint F_00608c10(void)
{
  GEN_ENTER(0x608c10u, 0u, 0u, 0u, 0u);
  return 0x90;
}

/* ref: Client::LayoutEngine::Layer::CollisionBoxLayoutInstance::vf0 */
uint F_00608c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf0 */
uint F_00608c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::NaviMeshRangeLayoutInstance::vf6 */
uint F_00608c80(void)
{
  GEN_ENTER(0x608c80u, 0u, 0u, 0u, 0u);
  return 0x70;
}

/* ref: Client::LayoutEngine::Layer::NaviMeshRangeLayoutInstance::vf0 */
uint F_00608c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::LineVfxLayoutInstance::vf0 */
uint F_00608cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a31b4));
  F_009945a0(this + 0x74);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::DoorRangeLayoutInstance::vf6 */
uint F_00608cf0(void)
{
  GEN_ENTER(0x608cf0u, 0u, 0u, 0u, 0u);
  return 0x70;
}

/* ref: Client::LayoutEngine::Layer::DoorRangeLayoutInstance::vf0 */
uint F_00608d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::GimmickRangeLayoutInstance::vf6 */
uint F_00608d30(void)
{
  GEN_ENTER(0x608d30u, 0u, 0u, 0u, 0u);
  return 0x90;
}

/* ref: Client::LayoutEngine::Layer::GimmickRangeLayoutInstance::vf0 */
uint F_00608d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::ClickableRangeLayoutInstance::vf6 */
uint F_00608d70(void)
{
  GEN_ENTER(0x608d70u, 0u, 0u, 0u, 0u);
  return 0x70;
}

/* ref: Client::LayoutEngine::Layer::ClickableRangeLayoutInstance::vf0 */
uint F_00608d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::FateRangeLayoutInstance::vf6 */
uint F_00608db0(void)
{
  GEN_ENTER(0x608db0u, 0u, 0u, 0u, 0u);
  return 0x80;
}

/* ref: Client::LayoutEngine::Layer::FateRangeLayoutInstance::vf0 */
uint F_00608dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf0 */
uint F_00608df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::PositionMarkerLayoutInstance::vf0 */
uint F_00608e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::QuestMarkerLayoutInstance::vf0 */
uint F_00608e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::TargetMarkerLayoutInstance::vf0 */
uint F_00608e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf0 */
uint F_00608eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::SoundPointLayoutInstance::vf6 */
uint F_00608ee0(void)
{
  GEN_ENTER(0x608ee0u, 0u, 0u, 0u, 0u);
  return 0x80;
}

/* ref: Client::LayoutEngine::Layer::SoundPointLayoutInstance::vf7 */
uint F_00608ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x608ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x70) + 0x1c))))
                    (*(int * PTR32 *)(this + 0x70),param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::SoundPointLayoutInstance::vf55 */
uint F_00608f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x608f00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x70) + 0xdc))))
                    (*(int * PTR32 *)(this + 0x70),param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::SoundPointLayoutInstance::vf57 */
uint F_00608f10(unsigned int gen_a0)
{
  GEN_ENTER(0x608f10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x30;
}

/* ref: Client::LayoutEngine::Layer::SoundPointLayoutInstance::vf59 */
uint F_00608f20(void)
{
  GEN_ENTER(0x608f20u, 0u, 0u, 0u, 0u);
  return 0x1302cf0;
}

/* ref: Client::LayoutEngine::Layer::SoundPointLayoutInstance::vf60 */
unsigned int F_00608f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::SoundPointLayoutInstance::vf61 */
uint F_00608f40(void)
{
  GEN_ENTER(0x608f40u, 0u, 0u, 0u, 0u);
  return 0x1302c60;
}

/* ref: Client::LayoutEngine::Layer::SoundPointLayoutInstance::vf62 */
unsigned int F_00608f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::SoundPointLayoutInstance::vf63 */
uint F_00608f60(unsigned int gen_a0)
{
  GEN_ENTER(0x608f60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x30;
}

/* ref: Client::LayoutEngine::Layer::SoundPointLayoutInstance::vf64 */
uint F_00608f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x608f70u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xe8))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::SoundPointLayoutInstance::vf0 */
uint F_00608f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf0 */
uint F_00608fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x608fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 0x60);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a3844));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0x60) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::ClientPathLayoutInstance::vf6 */
uint F_00608ff0(void)
{
  GEN_ENTER(0x608ff0u, 0u, 0u, 0u, 0u);
  return 0x70;
}

/* ref: Client::LayoutEngine::Layer::ClientPathLayoutInstance::vf0 */
uint F_00609000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x609000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 0x60);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a3844));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0x60) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::ServerPathLayoutInstance::vf6 */
uint F_00609040(void)
{
  GEN_ENTER(0x609040u, 0u, 0u, 0u, 0u);
  return 0x70;
}

/* ref: Client::LayoutEngine::Layer::ServerPathLayoutInstance::vf0 */
uint F_00609050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x609050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 0x60);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a3844));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0x60) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::LayoutEngine::Streaming::BoundingBoxQuadTree::vf0 */
uint F_00609090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x609090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a395c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006090e0 */
uint F_006090e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6090e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x30) = *param_2;
  *(undefined4 *)(in_ecx + 0x34) = param_2[1];
  *(undefined4 *)(in_ecx + 0x38) = param_2[2];
  *(undefined4 *)(in_ecx + 0x40) = param_2[4];
  *(undefined4 *)(in_ecx + 0x44) = param_2[5];
  *(undefined4 *)(in_ecx + 0x48) = param_2[6];
  return (uint)param_2;
}

/* ref: FUN_00609110 */
uint F_00609110(float gen_a0, float gen_a1)
{
  GEN_ENTER(0x609110u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  
  (*(float *)(gen_frame + 0x8)) = (*(float *)&gen_args[0]);
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1094884);
  pfVar1 = &(*(float *)&gen_args[1]);
  if (!(REFG(double, 0x1094800) < (double)(*(float *)&gen_args[1]))) {
    pfVar1 = &(*(float *)(gen_frame + 0x8));
  }
  *(float *)((int)gen_fl2bits((*(float *)&gen_args[0])) + 0x50) = *pfVar1;
  return (uint)pfVar1;
}

/* ref: FUN_00609150 */
uint F_00609150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x609150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(ushort *)((int)this + 8) =
       (ushort)((char)param_2 != '\0') << ((byte)param_1 & 0x1f) |
       ~(1 << ((byte)param_1 & 0x1f)) & *(ushort *)((int)this + 8);
  return (uint)this;
}

/* ref: FUN_00609190 */
uint F_00609190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x609190u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(ushort *)(in_ecx + 8) >> ((byte)param_2 & 0x1f) & 1;
}

/* ref: FUN_006091f0 */
uint F_006091f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6091f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006011a0(this);
  return (uint)this;
}

/* ref: FUN_00609220 */
uint F_00609220(unsigned int gen_a0)
{
  GEN_ENTER(0x609220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00601220(this);
  return (uint)this;
}

/* ref: FUN_00609250 */
uint F_00609250(unsigned int gen_a0)
{
  GEN_ENTER(0x609250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006012a0(this);
  return (uint)this;
}

/* ref: FUN_006092c0 */
byte F_006092c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6092c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00609330 */
uint F_00609330(unsigned int gen_a0)
{
  GEN_ENTER(0x609330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00601640(this);
  return (uint)this;
}

/* ref: FUN_00609350 */
byte F_00609350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x609350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_006093a0 */
uint F_006093a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6093a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00601220(this);
  return (uint)this;
}

/* ref: FUN_006093f0 */
uint F_006093f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6093f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00601850(this);
  return (uint)this;
}

/* ref: FUN_00609410 */
uint F_00609410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x609410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *(undefined1 *)(param_1 + 1);
  return (uint)this;
}

/* ref: FUN_00609450 */
uint F_00609450(unsigned int gen_a0)
{
  GEN_ENTER(0x609450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006019b0(this);
  return (uint)this;
}

/* ref: FUN_006094a0 */
uint F_006094a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6094a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x21))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00609500 */
uint F_00609500(unsigned int gen_a0)
{
  GEN_ENTER(0x609500u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00609540 */
uint F_00609540(unsigned int gen_a0)
{
  GEN_ENTER(0x609540u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00609580 */
uint F_00609580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x609580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x91))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_006095e0 */
unsigned int F_006095e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6095e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = REFG(float, 0x10a0d00);
  uVar2 = REFG(float, 0x1094880);
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 4) = 4;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = uVar1;
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = uVar1;
  *(undefined4 *)((int)this + 0x1c) = uVar1;
  *(undefined1 *)((int)this + 0xd) = 0;
  *(undefined2 *)((int)this + 0xe) = 0;
  *(undefined4 *)this = 0x1030080;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = uVar1;
  *(undefined4 *)((int)this + 0x30) = uVar2;
  *(undefined4 *)((int)this + 0x34) = uVar3;
  *(undefined4 *)((int)this + 0x38) = uVar2;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = uVar1;
  *(undefined4 *)((int)this + 0x44) = uVar1;
  *(undefined4 *)((int)this + 0x48) = uVar1;
  *(undefined4 *)((int)this + 0x4c) = uVar1;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = uVar1;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined2 *)((int)this + 0x74) = 0;
  *(undefined2 *)((int)this + 0x76) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  return 0;
}

/* ref: FUN_006096b0 */
uint F_006096b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6096b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00609710 */
unsigned int F_00609710(unsigned int gen_a0)
{
  GEN_ENTER(0x609710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1087f04);
  *(undefined2 *)((int)this + 3) = 0x400;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 5) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 0x10) = uVar1;
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = uVar1;
  *(undefined4 *)((int)this + 0x1c) = uVar1;
  *(undefined2 *)((int)this + 0xe) = 0;
  *(undefined1 *)((int)this + 0xd) = 0;
  *(undefined1 *)((int)this + 2) = 8;
  *(undefined2 *)this = 0x70;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = uVar1;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = uVar1;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = uVar1;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = uVar1;
  *(undefined4 *)((int)this + 0x60) = uVar1;
  *(undefined4 *)((int)this + 100) = uVar1;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  return 0;
}

/* ref: FUN_006097c0 */
uint F_006097c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6097c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00609800 */
uint F_00609800(unsigned int gen_a0)
{
  GEN_ENTER(0x609800u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00609810 */
uint F_00609810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x609810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00609830 */
unsigned int F_00609830(unsigned int gen_a0)
{
  GEN_ENTER(0x609830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_006098f0 */
uint F_006098f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6098f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00609950 */
uint F_00609950(unsigned int gen_a0)
{
  GEN_ENTER(0x609950u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00609990 */
uint F_00609990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x609990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_006099f0 */
uint F_006099f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6099f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00609a50 */
byte F_00609a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x609a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float * pfVar1;
  byte bVar2;
  
  bVar2 = *(byte *)((int)this + 2);
  if (((*(uint *)((int)this + 0x78) >> 2 & 1) != 0) &&
     (pfVar1 = (float *)((int)this + 0x6c), !GEN_ISNAN(*pfVar1) && (!(0.0 < *pfVar1) && *pfVar1 != 0.0)))
  {
    bVar2 = 0;
  }
  pfVar1 = (float *)((int)this + 4);
  if ((!GEN_ISNAN(REFG(float, 0x1088068)) && !GEN_ISNAN(*pfVar1)) &&
      (!(REFG(float, 0x1088068) < *pfVar1) && REFG(uint, 0x1088068) != *pfVar1)) {
    bVar2 = (byte)param_1;
  }
  return bVar2;
}

/* ref: FUN_00609a90 */
float10 F_00609a90(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x609a90u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float local_8;
  
  local_8 = *(float *)(in_ecx + 8);
  if ((*(uint *)(in_ecx + 0x78) >> 3 & 1) != 0) {
    local_8 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x70) * (float10)local_8)));
  }
  return (float10)((float)GEN_TOF((((float10)1 - (float10)*(float *)(in_ecx + 0xc)) * (float10)param_2 +
                         (float10)local_8 * (float10)*(float *)(in_ecx + 0xc))));
}

/* ref: FUN_00609ae0 */
uint F_00609ae0(unsigned int gen_a0)
{
  GEN_ENTER(0x609ae0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00609af0 */
float10 F_00609af0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x609af0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float local_8;
  
  local_8 = *(float *)(in_ecx + 0x10);
  if ((*(uint *)(in_ecx + 0x78) >> 4 & 1) != 0) {
    local_8 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x70) * (float10)local_8)));
  }
  return (float10)((float)GEN_TOF((((float10)1 - (float10)*(float *)(in_ecx + 0x14)) * (float10)param_2 +
                         (float10)local_8 * (float10)*(float *)(in_ecx + 0x14))));
}

/* ref: FUN_00609b40 */
uint F_00609b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x609b40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float local_2c;
  float local_28;
  
  uVar3 = *(uint *)((int)this + 0x78);
  if ((uVar3 >> 9 & 1) == 0) {
    fVar1 = *(float *)((int)this + 0x28);
    *param_1 = *(float *)((int)this + 0x24);
    fVar2 = *(float *)((int)this + 0x2c);
    param_1[1] = fVar1;
    param_1[2] = fVar2;
    if ((uVar3 >> 5 & 1) != 0) {
      fVar6 = (float10)*(float *)((int)this + 0x74);
      *param_1 = (float)(fVar6 * (float10)*param_1);
      param_1[1] = (float)((float10)param_1[1] * fVar6);
      param_1[2] = (float)(fVar6 * (float10)param_1[2]);
    }
    fVar6 = (float10)*(float *)((int)this + 0x30);
    fVar7 = (float10)((float)GEN_TOF(((float10)1 - (float10)*(float *)((int)this + 0x30))));
    fVar4 = (float10)(float)(fVar7 * (float10)*param_2) +
            (float10)(float)(fVar6 * (float10)*param_1);
    fVar5 = (float10)(float)((float10)param_2[1] * fVar7) +
            (float10)(float)((float10)param_1[1] * fVar6);
    fVar6 = (float10)(float)(fVar7 * (float10)param_2[2]) +
            (float10)(float)(fVar6 * (float10)param_1[2]);
  }
  else {
    fVar1 = *(float *)((int)this + 0x28);
    fVar2 = *(float *)((int)this + 0x2c);
    fVar4 = (float10)*(float *)((int)this + 0x30);
    fVar5 = (float10)((float)GEN_TOF(((float10)1 - (float10)*(float *)((int)this + 0x30))));
    fVar6 = (float10)REFG(float, 0x1302c10);
    fVar7 = (float10)REFG(float, 0x1302c14);
    *param_1 = ((float)GEN_TOF(((float10)(float)(fVar5 * (float10)REFG(float, 0x1302c0c)) +
                      (float10)((float)GEN_TOF((fVar4 * (float10)*(float *)((int)this + 0x24)))))));
    param_1[1] = ((float)GEN_TOF(((float10)(float)(fVar5 * fVar6) + (float10)(float)((float10)fVar1 * fVar4))))
    ;
    param_1[2] = ((float)GEN_TOF(((float10)(float)(fVar5 * fVar7) + (float10)(float)(fVar4 * (float10)fVar2))))
    ;
    if ((uVar3 >> 5 & 1) != 0) {
      fVar6 = (float10)*(float *)((int)this + 0x74);
      *param_1 = (float)(fVar6 * (float10)*param_1);
      param_1[1] = (float)((float10)param_1[1] * fVar6);
      param_1[2] = (float)(fVar6 * (float10)param_1[2]);
    }
    fVar4 = (float10)*param_2 * (float10)*param_1;
    fVar5 = (float10)param_2[1] * (float10)param_1[1];
    fVar6 = (float10)param_2[2] * (float10)param_1[2];
  }
  local_28 = (float)fVar5;
  local_2c = (float)fVar4;
  *param_1 = local_2c;
  param_1[1] = local_28;
  param_1[2] = (float)fVar6;
  return (uint)param_1;
}

/* ref: FUN_00609e50 */
uint F_00609e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x609e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  fVar2 = *(float *)((int)this + 0x34);
  uVar6 = *(uint *)((int)this + 0x78);
  if ((uVar6 >> 10 & 1) == 0) {
    fVar1 = *(float *)((int)this + 0x3c);
    fVar5 = *(float *)((int)this + 0x38);
    fVar3 = param_2[1];
    fVar4 = param_2[2];
    fVar10 = (float10)*(float *)((int)this + 0x4c);
    fVar7 = (float10)((float)GEN_TOF(((float10)1 - (float10)*(float *)((int)this + 0x4c))));
    *param_1 = ((float)GEN_TOF(((float10)(float)(fVar7 * (float10)*param_2) +
                      (float10)(float)(fVar10 * (float10)fVar2))));
    param_1[1] = ((float)GEN_TOF(((float10)(float)((float10)fVar3 * fVar7) +
                        (float10)(float)((float10)fVar5 * fVar10))));
    fVar2 = *(float *)((int)this + 0x4c);
    param_1[2] = ((float)GEN_TOF(((float10)(float)(fVar7 * (float10)fVar4) +
                        (float10)(float)(fVar10 * (float10)fVar1))));
    param_1[3] = fVar2;
  }
  else {
    fVar1 = *(float *)((int)this + 0x4c);
    fVar3 = *(float *)((int)this + 0x38);
    fVar4 = *(float *)((int)this + 0x3c);
    param_1[3] = GEN_FLT_TO(param_1[3], REFG(float, 0x1090708));
    fVar7 = (float10)fVar1;
    fVar8 = (float10)(float)((float10)1 - (float10)fVar1);
    fVar9 = (float10)REFG(float, 0x1302c10);
    fVar10 = (float10)REFG(float, 0x1302c14);
    *param_1 = ((float)GEN_TOF(((float10)(float)(fVar8 * (float10)REFG(float, 0x1302c0c)) +
                      (float10)(float)(fVar7 * (float10)fVar2))));
    param_1[1] = ((float)GEN_TOF(((float10)(float)(fVar9 * fVar8) + (float10)(float)((float10)fVar3 * fVar7))))
    ;
    param_1[2] = ((float)GEN_TOF(((float10)(float)(fVar8 * fVar10) + (float10)(float)(fVar7 * (float10)fVar4)
                        )));
  }
  if ((uVar6 >> 6 & 1) != 0) {
    fVar10 = (float10)*(float *)((int)this + 0x74);
    *param_1 = (float)(fVar10 * (float10)*param_1);
    param_1[1] = (float)((float10)param_1[1] * fVar10);
    param_1[2] = (float)((float10)param_1[2] * fVar10);
    param_1[3] = (float)(fVar10 * (float10)param_1[3]);
  }
  return (uint)param_1;
}

/* ref: FUN_0060a0a0 */
uint F_0060a0a0(unsigned int gen_a0)
{
  GEN_ENTER(0x60a0a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0060a2d0 */
uint F_0060a2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60a2d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x5c);
  if ((*(uint *)(param_1 + 0x78) >> 8 & 1) != 0) {
    *(float *)param_2 = ((float)GEN_TOF(((float10)*(float *)param_2 * (float10)*(float *)(param_1 + 0x74))));
    *(float *)(param_2 + 4) =
         ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) * (float10)*(float *)(param_1 + 0x74))));
    *(float *)(param_2 + 8) =
         ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x74) * (float10)*(float *)(param_2 + 8))));
  }
  F_004a3b40(param_2,((float)GEN_TOF(((float10)1 - (float10)*(float *)(param_1 + 0x60)))),param_3,
               *(float *)(param_1 + 0x60),param_2);
  return param_2;
}

/* ref: FUN_0060a370 */
float10 F_0060a370(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x60a370u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float local_8;
  
  local_8 = *(float *)(in_ecx + 100);
  if ((*(uint *)(in_ecx + 0x78) >> 2 & 1) != 0) {
    local_8 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x74) * (float10)local_8)));
  }
  return (float10)((float)GEN_TOF((((float10)1 - (float10)*(float *)(in_ecx + 4)) * (float10)param_2 +
                         (float10)local_8 * (float10)*(float *)(in_ecx + 4))));
}

/* ref: FUN_0060a3c0 */
uint F_0060a3c0(unsigned int gen_a0)
{
  GEN_ENTER(0x60a3c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0060a420 */
uint F_0060a420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60a420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x11))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_0060a4b0 */
uint F_0060a4b0(unsigned int gen_a0)
{
  GEN_ENTER(0x60a4b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0060a510 */
uint F_0060a510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60a510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_0060a570 */
uint F_0060a570(unsigned int gen_a0)
{
  GEN_ENTER(0x60a570u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0060a5c0 */
uint F_0060a5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60a5c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060a5d0 */
uint F_0060a5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60a5d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060a610 */
uint F_0060a610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60a610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060a620 */
unsigned int F_0060a620(unsigned int gen_a0)
{
  GEN_ENTER(0x60a620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x11) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x11) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x11);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x11);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x11);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x11);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_0060a6a0 */
uint F_0060a6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60a6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x21))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_0060a700 */
uint F_0060a700(unsigned int gen_a0)
{
  GEN_ENTER(0x60a700u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_0060a730 */
uint F_0060a730(unsigned int gen_a0)
{
  GEN_ENTER(0x60a730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006022d0(this);
  return (uint)this;
}

/* ref: FUN_0060a770 */
uint F_0060a770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60a770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_0060a7d0 */
uint F_0060a7d0(unsigned int gen_a0)
{
  GEN_ENTER(0x60a7d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0060a800 */
uint F_0060a800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60a800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060a820 */
unsigned int F_0060a820(unsigned int gen_a0)
{
  GEN_ENTER(0x60a820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x19) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x19) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x19);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x19);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x19);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x19);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_0060a870 */
uint F_0060a870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60a870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060a8b0 */
uint F_0060a8b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60a8b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060a8f0 */
uint F_0060a8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60a8f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060a900 */
uint F_0060a900(unsigned int gen_a0)
{
  GEN_ENTER(0x60a900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00602450(this);
  return (uint)this;
}

/* ref: FUN_0060a920 */
uint F_0060a920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60a920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060a940 */
uint F_0060a940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60a940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060a960 */
uint F_0060a960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60a960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060a970 */
byte F_0060a970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60a970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0060a990 */
uint F_0060a990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60a990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060a9a0 */
uint F_0060a9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60a9a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060a9c0 */
unsigned int F_0060a9c0(unsigned int gen_a0)
{
  GEN_ENTER(0x60a9c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_0060aa10 */
uint F_0060aa10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60aa10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060aa40 */
uint F_0060aa40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60aa40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060aa50 */
uint F_0060aa50(unsigned int gen_a0)
{
  GEN_ENTER(0x60aa50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00602540(this);
  return (uint)this;
}

/* ref: FUN_0060aa60 */
uint F_0060aa60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60aa60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x30) = *param_2;
  *(undefined4 *)(in_ecx + 0x34) = param_2[1];
  *(undefined4 *)(in_ecx + 0x38) = param_2[2];
  *(uint *)(in_ecx + 0x24) = *(uint *)(in_ecx + 0x24) | 2;
  return (uint)param_2;
}

/* ref: FUN_0060aa80 */
uint F_0060aa80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60aa80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x40) = *param_1;
  *(undefined4 *)((int)this + 0x44) = param_1[1];
  *(undefined4 *)((int)this + 0x48) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 2;
  *(uint *)((int)this + 0x4c) = uVar1;
  return uVar1;
}

/* ref: FUN_0060aab0 */
uint F_0060aab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60aab0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x50) = *param_2;
  *(undefined4 *)(in_ecx + 0x54) = param_2[1];
  *(undefined4 *)(in_ecx + 0x58) = param_2[2];
  *(uint *)(in_ecx + 0x24) = *(uint *)(in_ecx + 0x24) | 2;
  return (uint)param_2;
}

/* ref: FUN_0060aad0 */
uint F_0060aad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60aad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0x30) = *param_1;
  *(undefined4 *)((int)this + 0x34) = param_1[1];
  *(undefined4 *)((int)this + 0x38) = param_1[2];
  *(undefined4 *)((int)this + 0x40) = param_1[4];
  *(undefined4 *)((int)this + 0x44) = param_1[5];
  *(undefined4 *)((int)this + 0x48) = param_1[6];
  *(undefined4 *)((int)this + 0x4c) = param_1[7];
  *(undefined4 *)((int)this + 0x50) = param_1[8];
  *(undefined4 *)((int)this + 0x54) = param_1[9];
  *(undefined4 *)((int)this + 0x58) = param_1[10];
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 2;
  return (uint)param_1;
}

/* ref: FUN_0060ab20 */
uint F_0060ab20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60ab20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(byte *)(in_ecx + 100) >> ((byte)param_2 & 0x1f) & 1;
}

/* ref: FUN_0060ab40 */
byte F_0060ab40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60ab40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = ((char)param_2 != '\0') << ((byte)param_1 & 0x1f) |
          ~('\x01' << ((byte)param_1 & 0x1f)) & *(byte *)((int)this + 100);
  *(byte *)((int)this + 100) = bVar1;
  return bVar1;
}

/* ref: FUN_0060ab70 */
uint F_0060ab70(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x60ab70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  float * pfVar2;
  
  iVar1 = *(int *)(in_ecx + 0x70);
  (*(float *)(gen_frame + 0x8)) = param_2;
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1094884);
  pfVar2 = &(*(float *)(gen_frame + 0x8));
  if (!(REFG(double, 0x1094800) < (double)param_2)) {
    pfVar2 = &(*(float *)(gen_frame + 0x4));
  }
  *(float *)(iVar1 + 0x50) = *pfVar2;
  return (uint)pfVar2;
}

/* ref: FUN_0060abb0 */
uint F_0060abb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60abb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060abd0 */
uint F_0060abd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60abd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060abe0 */
byte F_0060abe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60abe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0060ac10 */
uint F_0060ac10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60ac10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060ac20 */
uint F_0060ac20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60ac20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort * puVar1;
  
  puVar1 = ((ushort *)GEN_TOP(((int)this + (param_1 >> 4) * 2)));
  *puVar1 = *puVar1 | 1 << ((byte)param_1 & 0xf);
  return (uint)this;
}

/* ref: FUN_0060ac50 */
uint F_0060ac50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60ac50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort * puVar1;
  
  puVar1 = ((ushort *)GEN_TOP(((int)this + (param_1 >> 4) * 2)));
  *puVar1 = *puVar1 & ~(1 << ((byte)param_1 & 0xf));
  return (uint)this;
}

/* ref: FUN_0060ac80 */
uint F_0060ac80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60ac80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060acd0 */
uint F_0060acd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60acd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x11))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_0060ad30 */
uint F_0060ad30(unsigned int gen_a0)
{
  GEN_ENTER(0x60ad30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0060ad50 */
uint F_0060ad50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60ad50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060ad80 */
uint F_0060ad80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60ad80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060aeb0 */
uint F_0060aeb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60aeb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x21) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((param_1[1] < (uint)puVar2[5]) ||
         ((param_1[1] <= (uint)puVar2[5] && (*param_1 <= (uint)puVar2[4])))) {
        puVar3 = (undefined4 *)*puVar2;
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x21) == '\0');
  }
  return (uint)puVar2;
}

/* ref: FUN_0060af00 */
undefined4 * F_0060af00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60af00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x11) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x11) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0060af30 */
undefined4 * F_0060af30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60af30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x91) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[4] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x91) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0060af70 */
undefined4 * F_0060af70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60af70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x91) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[4] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x91) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0060afb0 */
uint F_0060afb0(unsigned int gen_a0)
{
  GEN_ENTER(0x60afb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0060afc0 */
undefined4 * F_0060afc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60afc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x25) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x25) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0060aff0 */
undefined4 * F_0060aff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60aff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if (*(byte *)(puVar2 + 3) < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0060b020 */
undefined4 * F_0060b020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if (*(byte *)(puVar2 + 3) < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0060b050 */
uint F_0060b050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_0060b090 */
uint F_0060b090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_0060b0c0 */
undefined4 * F_0060b0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((int)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0060b0f0 */
undefined4 * F_0060b0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if (*(ushort *)(puVar2 + 3) < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0060b120 */
undefined4 * F_0060b120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if (*(ushort *)(puVar2 + 3) < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0060b160 */
uint F_0060b160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_0060b190 */
undefined4 * F_0060b190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if (*(byte *)(puVar2 + 3) < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0060b1c0 */
undefined4 * F_0060b1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if (*(byte *)(puVar2 + 3) < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0060b1f0 */
undefined4 * F_0060b1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0060b220 */
undefined4 * F_0060b220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0060b250 */
undefined4 * F_0060b250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x19) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x19) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0060b280 */
undefined4 * F_0060b280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x19) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x19) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0060b2c0 */
uint F_0060b2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_0060b2f0 */
uint F_0060b2f0(unsigned int gen_a0)
{
  GEN_ENTER(0x60b2f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0060b300 */
undefined4 * F_0060b300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0060b340 */
uint F_0060b340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_0060b370 */
undefined4 * F_0060b370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0060b3a0 */
undefined4 * F_0060b3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0060b3d0 */
uint F_0060b3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_0060b400 */
uint F_0060b400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60b400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060b410 */
uint F_0060b410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x21) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((param_1[1] < (uint)puVar2[5]) ||
         ((param_1[1] <= (uint)puVar2[5] && (*param_1 <= (uint)puVar2[4])))) {
        puVar3 = (undefined4 *)*puVar2;
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x21) == '\0');
  }
  return (uint)puVar2;
}

/* ref: FUN_0060b460 */
uint F_0060b460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60b460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060b470 */
undefined4 * F_0060b470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0060b4b0 */
uint F_0060b4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xc;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_0060b4f0 */
unsigned int F_0060b4f0(unsigned int gen_a0)
{
  GEN_ENTER(0x60b4f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_0060b540 */
unsigned int F_0060b540(unsigned int gen_a0)
{
  GEN_ENTER(0x60b540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_0060b590 */
uint F_0060b590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60b590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00601640(this);
  return (uint)param_1;
}

/* ref: FUN_0060b5b0 */
undefined4 * F_0060b5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x11) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x11) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0060b5e0 */
uint F_0060b5e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60b5e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060b5f0 */
unsigned int F_0060b5f0(unsigned int gen_a0)
{
  GEN_ENTER(0x60b5f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x25) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x25) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x25);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x25);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x25);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x25);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_0060b640 */
uint F_0060b640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60b640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060b650 */
uint F_0060b650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60b650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060b660 */
uint F_0060b660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60b660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060b670 */
uint F_0060b670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60b670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060b680 */
uint F_0060b680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60b680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060b6a0 */
byte F_0060b6a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x60b6a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  int iVar1;
  double dVar2;
  float10 fVar3;
  
  dVar2 = (double)(float)((float10)(*(float *)&gen_args[1]) * (float10)*(double *)&REFG(undefined, 0x1088100) +
                         (float10)REFG(double, 0x1088108));
  fVar3 = F_00c4d2a0((uint)(ulonglong)gen_d2bits(dVar2),
                       (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
  iVar1 = (int)fVar3;
  if (0xfe < iVar1) {
    *(undefined1 *)((*(int *)&gen_args[0]) + 0x8b) = 0xff;
    return 0xff;
  }
  if (0 < iVar1) {
    (*(undefined1 *)((char *)&(*(float *)&gen_args[1]) + 0)) = (byte)iVar1;
    *(byte *)((*(int *)&gen_args[0]) + 0x8b) = (*(undefined1 *)((char *)&(*(float *)&gen_args[1]) + 0));
    return (*(undefined1 *)((char *)&(*(float *)&gen_args[1]) + 0));
  }
  *(undefined1 *)((*(int *)&gen_args[0]) + 0x8b) = 0;
  return 0xf4;
}

/* ref: FUN_0060b730 */
uint F_0060b730(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x60b730u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  double dVar2;
  float10 fVar3;
  
  (*(undefined4 *)(gen_frame + 0x8)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  dVar2 = (double)(float)((float10)(*(float *)&gen_args[1]) * (float10)*(double *)&REFG(undefined, 0x1088100) +
                         (float10)REFG(double, 0x1088108));
  fVar3 = F_00c4d2a0((uint)(ulonglong)gen_d2bits(dVar2),
                       (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
  uVar1 = (uint)fVar3;
  if (0xfe < (int)uVar1) {
    *(undefined1 *)((*(int *)&gen_args[0]) + 0x8c) = (undefined1)(*(undefined4 *)(gen_frame + 0x8));
    return CONCAT31((int3)(uVar1 >> 8),(undefined1)(*(undefined4 *)(gen_frame + 0x8)));
  }
  if (0 < (int)uVar1) {
    (*(undefined1 *)((char *)&(*(float *)&gen_args[1]) + 0)) = (undefined1)uVar1;
    *(undefined1 *)((*(int *)&gen_args[0]) + 0x8c) = (*(undefined1 *)((char *)&(*(float *)&gen_args[1]) + 0));
    return uVar1;
  }
  *(undefined1 *)((*(int *)&gen_args[0]) + 0x8c) = (undefined1)(*(undefined4 *)(gen_frame + 0x4));
  return (uint)&(*(undefined4 *)(gen_frame + 0x4));
}

/* ref: FUN_0060b7c0 */
uint F_0060b7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b7c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  float * pfVar6;
  float * pfVar7;
  float10 fVar8;
  
  uVar4 = (*(uint *)&gen_args[1]);
  fVar1 = *(float *)((*(uint *)&gen_args[1]) + 8);
  pfVar6 = (float *)((*(uint *)&gen_args[1]) + 8);
  (*(float *)(gen_frame + 0x4)) = 3.57331e-43;
  (*(float *)(gen_frame + 0x0)) = 0.0;
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  if (!(REFG(float, 0x1087f04) < fVar1)) {
    pfVar6 = &(*(float *)(gen_frame + 0x8));
  }
  pfVar7 = (float *)(*(uint *)&gen_args[1]);
  if (!((float10)*(float *)((*(uint *)&gen_args[1]) + 4) < (float10)*(float *)(*(uint *)&gen_args[1]))) {
    pfVar7 = (float *)((*(uint *)&gen_args[1]) + 4);
  }
  if (!((float10)*pfVar6 < (float10)*pfVar7)) {
    pfVar7 = pfVar6;
  }
  (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(*pfVar7);
  fVar8 = F_00c4ed10((uint)(ulonglong)gen_d2bits(((double)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1]))))),
                       (int)((ulonglong)gen_d2bits(((double)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1]))))) >> 0x20));
  uVar3 = (uint)fVar8;
  (*(uint *)&gen_args[1]) = uVar3;
  if ((int)uVar3 < 0xff) {
    pfVar6 = (float *)&(*(uint *)&gen_args[1]);
    if ((int)uVar3 < 1) {
      pfVar6 = &(*(float *)(gen_frame + 0x0));
    }
  }
  else {
    pfVar6 = &(*(float *)(gen_frame + 0x4));
  }
  bVar2 = *(byte *)pfVar6;
  *(byte *)((*(int *)&gen_args[0]) + 0x8d) = bVar2;
  (*(float *)(gen_frame + 0x4)) = 3.57331e-43;
  (*(float *)(gen_frame + 0x8)) = 0.0;
  (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)((float10)*(double *)&REFG(undefined, 0x1088100) / (float10)bVar2));
  fVar1 = (float)((float10)*(float *)uVar4 * ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1])))) + (float10)REFG(double, 0x1088108));
  (*(float *)(gen_frame + 0x0)) = fVar1;
  dVar5 = (double)fVar1;
  fVar8 = F_00c4d2a0((uint)(ulonglong)gen_d2bits(dVar5),
                       (int)((ulonglong)gen_d2bits(dVar5) >> 0x20));
  (*(float *)(gen_frame + 0x0)) = (float)fVar8;
  fVar1 = gen_bits2f((int)fVar8);
  (*(float *)(gen_frame + 0x0)) = fVar1;
  if ((int)gen_fl2bits(fVar1) < 0xff) {
    pfVar6 = &(*(float *)(gen_frame + 0x0));
    if ((int)gen_fl2bits(fVar1) < 1) {
      pfVar6 = &(*(float *)(gen_frame + 0x8));
    }
  }
  else {
    pfVar6 = &(*(float *)(gen_frame + 0x4));
  }
  *(undefined1 *)((*(int *)&gen_args[0]) + 0x90) = *(undefined1 *)pfVar6;
  fVar1 = *(float *)(uVar4 + 4);
  (*(float *)(gen_frame + 0x4)) = 3.57331e-43;
  (*(float *)(gen_frame + 0x8)) = 0.0;
  fVar1 = (float)((float10)fVar1 * ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1])))) + (float10)REFG(double, 0x1088108));
  (*(float *)(gen_frame + 0x0)) = fVar1;
  dVar5 = (double)fVar1;
  fVar8 = F_00c4d2a0((uint)(ulonglong)gen_d2bits(dVar5),
                       (int)((ulonglong)gen_d2bits(dVar5) >> 0x20));
  (*(float *)(gen_frame + 0x0)) = (float)fVar8;
  fVar1 = gen_bits2f((int)fVar8);
  (*(float *)(gen_frame + 0x0)) = fVar1;
  if ((int)gen_fl2bits(fVar1) < 0xff) {
    pfVar6 = &(*(float *)(gen_frame + 0x0));
    if ((int)gen_fl2bits(fVar1) < 1) {
      pfVar6 = &(*(float *)(gen_frame + 0x8));
    }
  }
  else {
    pfVar6 = &(*(float *)(gen_frame + 0x4));
  }
  *(undefined1 *)((*(int *)&gen_args[0]) + 0x91) = *(undefined1 *)pfVar6;
  fVar1 = *(float *)(uVar4 + 8);
  (*(float *)(gen_frame + 0x0)) = 3.57331e-43;
  (*(float *)(gen_frame + 0x4)) = 0.0;
  (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1])))) * (float10)fVar1 +
                                     (float10)REFG(double, 0x1088108)));
  fVar8 = F_00c4d2a0((uint)(ulonglong)gen_d2bits(((double)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1]))))),
                       (int)((ulonglong)gen_d2bits(((double)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1]))))) >> 0x20));
  uVar3 = (uint)fVar8;
  (*(uint *)&gen_args[1]) = uVar3;
  if ((int)uVar3 < 0xff) {
    pfVar6 = (float *)&(*(uint *)&gen_args[1]);
    if ((int)uVar3 < 1) {
      pfVar6 = &(*(float *)(gen_frame + 0x4));
    }
  }
  else {
    pfVar6 = &(*(float *)(gen_frame + 0x0));
  }
  *(undefined1 *)((*(int *)&gen_args[0]) + 0x92) = *(undefined1 *)pfVar6;
  fVar1 = *(float *)(uVar4 + 0xc);
  (*(float *)(gen_frame + 0x0)) = 3.57331e-43;
  (*(float *)(gen_frame + 0x4)) = 0.0;
  (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)((float10)fVar1 * (float10)*(double *)&REFG(undefined, 0x1088100) +
                                     (float10)REFG(double, 0x1088108)));
  fVar8 = F_00c4d2a0((uint)(ulonglong)gen_d2bits(((double)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1]))))),
                       (int)((ulonglong)gen_d2bits(((double)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1]))))) >> 0x20));
  uVar4 = (uint)fVar8;
  if (0xfe < (int)uVar4) {
    *(undefined1 *)((*(int *)&gen_args[0]) + 0x93) = (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x0)) + 0));
    return uVar4;
  }
  if ((int)uVar4 < 1) {
    *(undefined1 *)((*(int *)&gen_args[0]) + 0x93) = (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x4)) + 0));
    return (uint)&(*(float *)(gen_frame + 0x4));
  }
  (*(undefined1 *)((char *)&(*(uint *)&gen_args[1]) + 0)) = (undefined1)uVar4;
  *(undefined1 *)((*(int *)&gen_args[0]) + 0x93) = (undefined1)(*(uint *)&gen_args[1]);
  return uVar4;
}

/* ref: FUN_0060bab0 */
uint F_0060bab0(unsigned int gen_a0)
{
  GEN_ENTER(0x60bab0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0060baf0 */
uint F_0060baf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60baf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_006011a0(this);
  return (uint)param_1;
}

/* ref: FUN_0060bb10 */
uint F_0060bb10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60bb10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00601220(this);
  return (uint)param_1;
}

/* ref: FUN_0060bb30 */
uint F_0060bb30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60bb30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_006012a0(this);
  return (uint)param_1;
}

/* ref: FUN_0060bb60 */
uint F_0060bb60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60bb60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_006022d0(this);
  return (uint)param_1;
}

/* ref: FUN_0060bb90 */
uint F_0060bb90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60bb90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00602450(this);
  return (uint)param_1;
}

/* ref: FUN_0060bbb0 */
uint F_0060bbb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60bbb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00602540(this);
  return (uint)param_1;
}

/* ref: FUN_0060bbd0 */
uint F_0060bbd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60bbd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00601850(this);
  return (uint)param_1;
}

/* ref: FUN_0060bc00 */
uint F_0060bc00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60bc00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_006019b0(this);
  return (uint)param_1;
}

/* ref: FUN_0060bc20 */
uint F_0060bc20(unsigned int gen_a0)
{
  GEN_ENTER(0x60bc20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x15) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x15) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x15);
    }
    if (*(char *)(*(int *)this + 0x15) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_0060bc80 */
byte F_0060bc80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60bc80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0060bca0 */
byte F_0060bca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60bca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0060bcc0 */
byte F_0060bcc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60bcc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0060bce0 */
byte F_0060bce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60bce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0060bd00 */
byte F_0060bd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60bd00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0060bd20 */
uint F_0060bd20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60bd20u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060bd80 */
uint F_0060bd80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60bd80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x11))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_0060bde0 */
uint F_0060bde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60bde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x15) == '\0') {
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

/* ref: FUN_0060be40 */
uint F_0060be40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60be40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_0060bea0 */
uint F_0060bea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60bea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x25) == '\0') {
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

/* ref: FUN_0060bf00 */
uint F_0060bf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60bf00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x25))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_0060bf60 */
uint F_0060bf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60bf60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x15) == '\0') {
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

/* ref: FUN_0060bfc0 */
uint F_0060bfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60bfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_0060c020 */
uint F_0060c020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60c020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x15) == '\0') {
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

/* ref: FUN_0060c080 */
uint F_0060c080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60c080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_0060c0e0 */
uint F_0060c0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60c0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x15) == '\0') {
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

/* ref: FUN_0060c140 */
uint F_0060c140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60c140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_0060c1a0 */
uint F_0060c1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60c1a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060c200 */
uint F_0060c200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60c200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x19))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_0060c260 */
uint F_0060c260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60c260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x15) == '\0') {
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

/* ref: FUN_0060c2c0 */
uint F_0060c2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60c2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_0060c320 */
uint F_0060c320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60c320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060c350 */
uint F_0060c350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60c350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  return (uint)this;
}

/* ref: FUN_0060c370 */
uint F_0060c370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60c370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060c390 */
uint F_0060c390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60c390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060c3b0 */
uint F_0060c3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60c3b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060c3d0 */
uint F_0060c3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60c3d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060c3f0 */
uint F_0060c3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60c3f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060c410 */
uint F_0060c410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60c410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined1 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060c430 */
uint F_0060c430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60c430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060c450 */
uint F_0060c450(unsigned int gen_a0)
{
  GEN_ENTER(0x60c450u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  int local_8;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x48,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x48,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  if (param_1 != 0) {
    puVar3 = (undefined4 *)(uVar2 + 0x18);
    local_8 = param_1;
    do {
      if (puVar3 != (undefined4 *)0x18) {
        *(byte *)(puVar3 + 2) = *(byte *)(puVar3 + 2) | 7;
        puVar3[3] = puVar3[3] & 0xfffffffd | 1;
        *(byte *)((int)puVar3 + 0x11) = *(byte *)((int)puVar3 + 0x11) & 0xf8 | 8;
        puVar3[-4] = 0;
        *puVar3 = 0;
        puVar3[1] = 0xffffffff;
        *(undefined1 *)(puVar3 + 4) = 0;
        *(undefined1 *)((int)puVar3 + 0x12) = 0xff;
        *(byte *)((int)puVar3 + 0x13) = *(byte *)((int)puVar3 + 0x13) & 0xfa | 0x7a;
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        puVar3[-6] = (*(undefined * PTR32 (*)[68])REFP(0x10a45b4));
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xb] = 0xffffffff;
      }
      puVar3 = puVar3 + 0x12;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return (uint)piVar1;
}

/* ref: FUN_0060c530 */
uint F_0060c530(unsigned int gen_a0)
{
  GEN_ENTER(0x60c530u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005dd1f0(this);
      *this = (*(undefined * PTR32 (*)[74])REFP(0x10a3db4));
    }
    this = this + 0x20;
  }
  return (uint)piVar1;
}

/* ref: FUN_0060c5b0 */
uint F_0060c5b0(unsigned int gen_a0)
{
  GEN_ENTER(0x60c5b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005dd1f0(this);
      *this = (*(undefined * PTR32 (*)[74])REFP(0x10a3ee4));
    }
    this = this + 0x20;
  }
  return (uint)piVar1;
}

/* ref: FUN_0060c630 */
uint F_0060c630(unsigned int gen_a0)
{
  GEN_ENTER(0x60c630u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  undefined4 * puVar5;
  int local_8;
  
  piVar3 = (int *)F_00404310();
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3,param_1 * 0xa0,0x10)));
  if (piVar3 == (int *)0x0) {
    F_00510db0();
    piVar3 = (int *)F_00404310();
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3,param_1 * 0xa0,0x10)));
    if (piVar3 == (int *)0x0) {
      return 0;
    }
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  uVar1 = REFG(float, 0x1090708);
  if (param_1 != 0) {
    local_8 = param_1;
    puVar5 = (undefined4 *)(uVar4 + 0x68);
    do {
      if (puVar5 != (undefined4 *)0x68) {
        *(byte *)(puVar5 + -0x12) = *(byte *)(puVar5 + -0x12) | 7;
        puVar5[-0x11] = puVar5[-0x11] & 0xfffffffd | 1;
        *(byte *)((int)puVar5 + -0x3f) = *(byte *)((int)puVar5 + -0x3f) & 0xf8 | 8;
        puVar5[-0x18] = 0;
        puVar5[-0x14] = 0;
        puVar5[-0x13] = 0xffffffff;
        *(undefined1 *)(puVar5 + -0x10) = 0;
        *(undefined1 *)((int)puVar5 + -0x3e) = 0xff;
        puVar5[-0x16] = 0;
        puVar5[-0x15] = 0;
        puVar5[-0x1a] = (*(undefined * PTR32 (*)[68])REFP(0x10a46cc));
        puVar5[-0xe] = 0;
        *(byte *)((int)puVar5 + -0x3d) = *(byte *)((int)puVar5 + -0x3d) & 0xfa | 0x7a;
        puVar5[-10] = GEN_FLT_TO(puVar5[-10], REFG(float, 0x1302df0));
        puVar5[-9] = GEN_FLT_TO(puVar5[-9], REFG(float, 0x1302df4));
        puVar5[-8] = GEN_FLT_TO(puVar5[-8], REFG(float, 0x1302df8));
        puVar5[-6] = REFG(undefined4, 0x1302e00);
        puVar5[-5] = REFG(undefined4, 0x1302e04);
        puVar5[-4] = REFG(undefined4, 0x1302e08);
        puVar5[-3] = REFG(undefined4, 0x1302e0c);
        puVar5[-2] = GEN_FLT_TO(puVar5[-2], REFG(float, 0x1302e10));
        puVar5[-1] = GEN_FLT_TO(puVar5[-1], REFG(float, 0x1302e14));
        *puVar5 = GEN_FLT_TO(*puVar5, REFG(float, 0x1302e18));
        puVar5[2] = 0;
        *(undefined2 *)(puVar5 + 3) = 0;
        *(undefined2 *)((int)puVar5 + 0xe) = 0;
        *(undefined2 *)(puVar5 + 4) = 0;
        *(undefined2 *)((int)puVar5 + 0x12) = 0;
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[7] = uVar1;
        uVar2 = REFG(undefined4, 0x1302e24);
        *(byte *)(puVar5 + 9) = *(byte *)(puVar5 + 9) & 0xf0;
        puVar5[8] = uVar2;
        puVar5[10] = puVar5[10] & 0xfffffe00;
        *(undefined2 *)((int)puVar5 + 0x26) = 0xffff;
      }
      puVar5 = puVar5 + 0x28;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return (uint)piVar3;
}

/* ref: FUN_0060c7d0 */
uint F_0060c7d0(unsigned int gen_a0)
{
  GEN_ENTER(0x60c7d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005dd660(this);
      *this = (*(undefined * PTR32 (*)[70])REFP(0x10a4134));
    }
    this = this + 0x20;
  }
  return (uint)piVar1;
}

/* ref: FUN_0060c850 */
uint F_0060c850(unsigned int gen_a0)
{
  GEN_ENTER(0x60c850u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005dd660(this);
      *this = (*(undefined * PTR32 (*)[70])REFP(0x10a4374));
    }
    this = this + 0x20;
  }
  return (uint)piVar1;
}

/* ref: FUN_0060c8d0 */
uint F_0060c8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x60c8d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005dd660(this);
      *this = (*(undefined * PTR32 (*)[70])REFP(0x10a4254));
    }
    this = this + 0x20;
  }
  return (uint)piVar1;
}

/* ref: FUN_0060c950 */
uint F_0060c950(unsigned int gen_a0)
{
  GEN_ENTER(0x60c950u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005dd660(this);
      *this = (*(undefined * PTR32 (*)[70])REFP(0x10a4494));
    }
    this = this + 0x20;
  }
  return (uint)piVar1;
}

/* ref: FUN_0060c9d0 */
uint F_0060c9d0(unsigned int gen_a0)
{
  GEN_ENTER(0x60c9d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0xa0,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0xa0,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  if (param_1 != 0) {
    uVar4 = 0;
    puVar3 = (undefined4 *)(uVar2 + 0x84);
    do {
      if (puVar3 != (undefined4 *)0x84) {
        F_005dea10(puVar3 + -0x21);
        puVar3[-0x21] = (*(undefined * PTR32 (*)[69])REFP(0x10a48fc));
        puVar3[-1] = 1;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = uVar4;
      }
      puVar3 = puVar3 + 0x28;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return (uint)piVar1;
}

/* ref: FUN_0060ca80 */
uint F_0060ca80(unsigned int gen_a0)
{
  GEN_ENTER(0x60ca80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x90,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x90,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005dea10(this);
      *this = (*(undefined * PTR32 (*)[69])REFP(0x10a4a14));
    }
    this = this + 0x24;
  }
  return (uint)piVar1;
}

/* ref: FUN_0060cb00 */
uint F_0060cb00(unsigned int gen_a0)
{
  GEN_ENTER(0x60cb00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  int local_8;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0xa0,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0xa0,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  if (param_1 != 0) {
    puVar3 = (undefined4 *)(uVar2 + 0x84);
    local_8 = param_1;
    do {
      if (puVar3 != (undefined4 *)0x84) {
        F_005dea10(puVar3 + -0x21);
        *(byte *)((int)puVar3 + 0x12) = *(byte *)((int)puVar3 + 0x12) & 0xfe;
        puVar3[5] = puVar3[5] & 0xffff8000;
        puVar3[-0x21] = (*(undefined * PTR32 (*)[69])REFP(0x10a4b2c));
        puVar3[-1] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        *(undefined2 *)(puVar3 + 4) = 0;
      }
      puVar3 = puVar3 + 0x28;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return (uint)piVar1;
}

/* ref: FUN_0060cbc0 */
uint F_0060cbc0(unsigned int gen_a0)
{
  GEN_ENTER(0x60cbc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x70,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x70,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005df720(this);
      *this = (*(undefined * PTR32 (*)[68])REFP(0x10a4f8c));
    }
    this = this + 0x1c;
  }
  return (uint)piVar1;
}

/* ref: FUN_0060cc40 */
uint F_0060cc40(unsigned int gen_a0)
{
  GEN_ENTER(0x60cc40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005dea10(this);
      *this = (*(undefined * PTR32 (*)[69])REFP(0x10a4c44));
    }
    this = this + 0x20;
  }
  return (uint)piVar1;
}

/* ref: FUN_0060ccc0 */
uint F_0060ccc0(unsigned int gen_a0)
{
  GEN_ENTER(0x60ccc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x90,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x90,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005df720(this);
      *this = (*(undefined * PTR32 (*)[68])REFP(0x10a31b4));
      this[0x1c] = 0;
      F_00994550(this + 0x1d,this);
    }
    this = this + 0x24;
  }
  return (uint)piVar1;
}

/* ref: FUN_0060cd50 */
uint F_0060cd50(unsigned int gen_a0)
{
  GEN_ENTER(0x60cd50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x90,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x90,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  if (param_1 != 0) {
    puVar3 = (undefined4 *)(uVar2 + 0x84);
    do {
      if (puVar3 != (undefined4 *)0x84) {
        F_005dea10(puVar3 + -0x21);
        puVar3[-0x21] = (*(undefined * PTR32 (*)[69])REFP(0x10a4d5c));
        puVar3[-1] = 0;
        *puVar3 = 0xffffffff;
        puVar3[1] = 0;
        *(undefined1 *)(puVar3 + 2) = 0;
      }
      puVar3 = puVar3 + 0x24;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return (uint)piVar1;
}

/* ref: FUN_0060ce00 */
uint F_0060ce00(unsigned int gen_a0)
{
  GEN_ENTER(0x60ce00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x70,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x70,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005df720(this);
      *this = (*(undefined * PTR32 (*)[68])REFP(0x10a50a4));
    }
    this = this + 0x1c;
  }
  return (uint)piVar1;
}

/* ref: FUN_0060ce80 */
uint F_0060ce80(unsigned int gen_a0)
{
  GEN_ENTER(0x60ce80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  byte * pbVar3;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x90,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x90,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  if (param_1 != 0) {
    pbVar3 = (byte *)(uVar2 + 0x74);
    do {
      if (pbVar3 != &REFG(undefined, 0x74)) {
        F_005df720(pbVar3 + -0x74);
        *pbVar3 = *pbVar3 & 0xfe;
        *(uint *)(pbVar3 + 4) = *(uint *)(pbVar3 + 4) & 0xfffffff0;
        *(uint *)(pbVar3 + 0xc) = *(uint *)(pbVar3 + 0xc) & 0xfffff800;
        *(undefined * PTR32 * PTR32 *)(pbVar3 + -0x74) =
             (*(undefined * PTR32 (*)[68])REFP(0x10a51bc));
        pbVar3[-0xffffffff00000004] = 0;
        pbVar3[-0xffffffff00000003] = 0;
        pbVar3[-0xffffffff00000002] = 0;
        pbVar3[-0xffffffff00000001] = 0;
        pbVar3[8] = 0;
        pbVar3[9] = 0;
      }
      pbVar3 = pbVar3 + 0x90;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return (uint)piVar1;
}

/* ref: FUN_0060cf30 */
uint F_0060cf30(unsigned int gen_a0)
{
  GEN_ENTER(0x60cf30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x70,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x70,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005df720(this);
      *this = (*(undefined * PTR32 (*)[68])REFP(0x10a52d4));
    }
    this = this + 0x1c;
  }
  return (uint)piVar1;
}

/* ref: FUN_0060cfb0 */
uint F_0060cfb0(unsigned int gen_a0)
{
  GEN_ENTER(0x60cfb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005df720(this);
      *this = (*(undefined * PTR32 (*)[68])REFP(0x10a53ec));
      this[0x1c] = 0;
    }
    this = this + 0x20;
  }
  return (uint)piVar1;
}

/* ref: FUN_0060d030 */
uint F_0060d030(unsigned int gen_a0)
{
  GEN_ENTER(0x60d030u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x70,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x70,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005e10e0(this);
      *this = (*(undefined * PTR32 (*)[69])REFP(0x10a5624));
    }
    this = this + 0x1c;
  }
  return (uint)piVar1;
}

/* ref: FUN_0060d0b0 */
uint F_0060d0b0(unsigned int gen_a0)
{
  GEN_ENTER(0x60d0b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x70,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x70,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005e10e0(this);
      *this = (*(undefined * PTR32 (*)[69])REFP(0x10a573c));
    }
    this = this + 0x1c;
  }
  return (uint)piVar1;
}

/* ref: FUN_0060d130 */
uint F_0060d130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60d130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060d150 */
uint F_0060d150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60d150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

