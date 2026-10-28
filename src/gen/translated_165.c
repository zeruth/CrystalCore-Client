#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00d299e0 */
GEN_FRAME unsigned int GEN_THISCALL F_00d299e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd299e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  *param_1 = *(undefined2 *)this;
  param_1[1] = *(undefined2 *)((int)this + 2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((int)this + 0x28);
  param_1[0x18] = *(undefined2 *)((int)this + 0x30);
  param_1[0x19] = *(undefined2 *)((int)this + 0x32);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)((int)this + 0x34);
  iVar2 = 0x20;
  puVar1 = (undefined4 *)(param_1 + 0x1c);
  puVar3 = (undefined4 *)((int)this + 0x40);
  do {
    *puVar1 = *((undefined4 *)GEN_TOP((((int)this - (int)param_1) + (int)puVar1)));
    iVar2 = iVar2 - 1;
    puVar1[1] = puVar3[-1];
    puVar1[2] = *puVar3;
    puVar1 = puVar1 + 3;
    puVar3 = puVar3 + 3;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)((int)this + 0x1b8);
  *(undefined4 *)(param_1 + 0xde) = *(undefined4 *)((int)this + 0x1bc);
  *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)((int)this + 0x1c0);
  return 0;
}

/* ref: FUN_00d29aa0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00d29aa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd29aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  int iVar6;
  
  fVar1 = (float10)1;
  *(undefined4 *)((int)this + 4) = 4;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(float *)((int)this + 0x10) = (float)fVar1;
  *(float *)((int)this + 0x14) = (float)fVar1;
  *(float *)((int)this + 0x18) = (float)fVar1;
  *(float *)((int)this + 0x1c) = (float)fVar1;
  *(undefined2 *)((int)this + 0xe) = 0;
  *(undefined1 *)((int)this + 0xd) = 0;
  *(undefined4 *)this = 0xb0260;
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1097254);
  iVar6 = 0x20;
  puVar5 = (undefined4 *)((int)this + 0x68);
  do {
    puVar5[-2] = uVar3;
    iVar6 = iVar6 - 1;
    puVar5[-1] = uVar3;
    *puVar5 = uVar3;
    puVar5[1] = uVar3;
    puVar5[1] = (undefined4)gen_fl2bits((float)fVar1);
    uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094880)));
    puVar5 = puVar5 + 4;
  } while (iVar6 != 0);
  *(byte *)((int)this + 0x4d) = *(byte *)((int)this + 0x4d) & 0xfe;
  *(undefined4 *)((int)this + 0x20) = uVar2;
  *(undefined1 *)((int)this + 0x4c) = 0;
  uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10a0d00)));
  *(undefined2 *)((int)this + 0x4e) = 0;
  *(undefined4 *)((int)this + 0x24) = uVar4;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x28) = uVar2;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x2c) = uVar3;
  *(undefined4 *)((int)this + 0x40) = uVar3;
  *(undefined4 *)((int)this + 0x48) = uVar3;
  *(float *)((int)this + 0x30) = (float)fVar1;
  *(float *)((int)this + 0x34) = (float)fVar1;
  *(float *)((int)this + 0x38) = (float)fVar1;
  *(float *)((int)this + 0x3c) = (float)fVar1;
  *(float *)((int)this + 0x44) = (float)fVar1;
  *(undefined4 *)((int)this + 0x50) = uVar3;
  return 0;
}

/* ref: FUN_00d29b40 */
GEN_FRAME uint GEN_THISCALL F_00d29b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd29b40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint * puVar2;
  uint * puVar3;
  int local_8;
  
  F_00d0c080(param_1 GEN_EDX_FWD,param_2);
  puVar3 = (uint *)(param_1 + 0x68);
  local_8 = 0x20;
  puVar2 = (uint *)(param_2 + 0x60);
  do {
    uVar1 = *((uint *)GEN_TOP(((param_1 - param_2) + (int)puVar2)));
    *puVar2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar3[-1];
    puVar2[1] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *puVar3;
    puVar2[2] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar3[1];
    puVar2[3] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    puVar3 = puVar3 + 4;
    local_8 = local_8 - 1;
    puVar2 = puVar2 + 4;
  } while (local_8 != 0);
  uVar1 = *(uint *)(param_1 + 0x20);
  *(uint *)(param_2 + 0x20) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x24);
  *(uint *)(param_2 + 0x24) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_2 + 0x28) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x2c);
  *(uint *)(param_2 + 0x2c) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x30);
  *(uint *)(param_2 + 0x30) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x34);
  *(uint *)(param_2 + 0x34) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x38);
  *(uint *)(param_2 + 0x38) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x3c);
  *(uint *)(param_2 + 0x3c) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x40);
  *(uint *)(param_2 + 0x40) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x44);
  *(uint *)(param_2 + 0x44) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x48);
  *(uint *)(param_2 + 0x48) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *(undefined1 *)(param_2 + 0x4c) = *(undefined1 *)(param_1 + 0x4c);
  *(byte *)(param_2 + 0x4d) =
       *(byte *)(param_2 + 0x4d) ^ (*(byte *)(param_1 + 0x4d) ^ *(byte *)(param_2 + 0x4d)) & 1;
  *(undefined1 *)(param_2 + 0x4e) = *(undefined1 *)(param_1 + 0x4e);
  *(undefined1 *)(param_2 + 0x4f) = 0;
  uVar1 = *(uint *)(param_1 + 0x50);
  uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *(uint *)(param_2 + 0x50) = uVar1;
  *(undefined4 *)(param_2 + 0x54) = 0;
  *(undefined4 *)(param_2 + 0x58) = 0;
  *(undefined4 *)(param_2 + 0x5c) = 0;
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolygonSound::vf0 */
GEN_FRAME uint GEN_THISCALL F_00d29ce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd29ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x11343dc));
  F_00d23680(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00d29d10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd29d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auVar9 [16];
  
  iVar6 = *(int *)(this + 0x128);
  *(undefined4 *)(this + 300) = *(undefined4 *)(iVar6 + 0x20);
  *(undefined4 *)(this + 0x130) = *(undefined4 *)(iVar6 + 0x24);
  *(undefined4 *)(this + 0x134) = *(undefined4 *)(iVar6 + 0x28);
  *(undefined4 *)(this + 0x138) = *(undefined4 *)(iVar6 + 0x2c);
  iVar6 = *(int *)(this + 0x128);
  *(undefined4 *)(this + 0x13c) = *(undefined4 *)(iVar6 + 0x20);
  *(undefined4 *)(this + 0x140) = *(undefined4 *)(iVar6 + 0x24);
  *(undefined4 *)(this + 0x144) = *(undefined4 *)(iVar6 + 0x28);
  *(undefined4 *)(this + 0x148) = *(undefined4 *)(iVar6 + 0x2c);
  iVar6 = 0x30;
  do {
    iVar5 = *(int *)(this + 0x128);
    uVar4 = *(undefined4 *)(iVar5 + 8 + iVar6);
    (*(undefined4 *)((char *)&auVar7 + 4)) = uVar4;
    (*(undefined4 *)((char *)&auVar7 + 0)) = *(undefined4 *)(iVar5 + iVar6);
    (*(undefined4 *)((char *)&auVar7 + 8)) = uVar4;
    (*(undefined4 *)((char *)&auVar7 + 12)) = *(undefined4 *)(iVar5 + 0xc + iVar6);
    (*(undefined8 *)((char *)&auVar8 + 8)) = (*(undefined8 *)((char *)&auVar7 + 8));
    (*(undefined4 *)((char *)&auVar8 + 4)) = *(undefined4 *)(iVar5 + 4 + iVar6);
    (*(undefined4 *)((char *)&auVar8 + 0)) = *(undefined4 *)(iVar5 + iVar6);
    gen_minps(&(auVar8), &(auVar8), (this + 300));
    local_40 = (*(undefined4 *)((char *)&auVar8 + 0));
    uStack_3c = (*(undefined4 *)((char *)&auVar8 + 4));
    *(undefined4 *)(this + 300) = local_40;
    uStack_38 = (*(undefined4 *)((char *)&auVar8 + 8));
    *(undefined4 *)(this + 0x130) = uStack_3c;
    uStack_34 = (*(undefined4 *)((char *)&auVar8 + 12));
    *(undefined4 *)(this + 0x134) = uStack_38;
    *(undefined4 *)(this + 0x138) = uStack_34;
    iVar5 = *(int *)(this + 0x128);
    uVar4 = *(undefined4 *)(iVar5 + 8 + iVar6);
    puVar2 = (undefined4 *)(iVar5 + 0xc + iVar6);
    puVar1 = (undefined4 *)(iVar5 + iVar6);
    puVar3 = (undefined4 *)(iVar5 + 4 + iVar6);
    iVar6 = iVar6 + 0x10;
    (*(undefined4 *)((char *)&auVar10 + 4)) = uVar4;
    (*(undefined4 *)((char *)&auVar10 + 0)) = *puVar1;
    (*(undefined4 *)((char *)&auVar10 + 8)) = uVar4;
    (*(undefined4 *)((char *)&auVar10 + 12)) = *puVar2;
    (*(undefined8 *)((char *)&auVar9 + 8)) = (*(undefined8 *)((char *)&auVar10 + 8));
    (*(undefined4 *)((char *)&auVar9 + 4)) = *puVar3;
    (*(undefined4 *)((char *)&auVar9 + 0)) = *puVar1;
    gen_maxps(&(auVar8), &(auVar9), (this + 0x13c));
    local_40 = (*(undefined4 *)((char *)&auVar8 + 0));
    uStack_3c = (*(undefined4 *)((char *)&auVar8 + 4));
    *(undefined4 *)(this + 0x13c) = local_40;
    uStack_38 = (*(undefined4 *)((char *)&auVar8 + 8));
    *(undefined4 *)(this + 0x140) = uStack_3c;
    uStack_34 = (*(undefined4 *)((char *)&auVar8 + 12));
    *(undefined4 *)(this + 0x144) = uStack_38;
    *(undefined4 *)(this + 0x148) = uStack_34;
  } while (iVar6 < 0x120);
  *(float *)(this + 300) =
       ((float)GEN_TOF(((float10)*(float *)(this + 300) - (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x134)))
              )));
  *(float *)(this + 0x130) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0x130) -
              (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x134))))));
  *(float *)(this + 0x134) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0x134) -
              (float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x134))))));
  *(float *)(this + 0x13c) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x134))) +
              (float10)*(float *)(this + 0x13c))));
  *(float *)(this + 0x140) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x134))) +
              (float10)*(float *)(this + 0x140))));
  *(float *)(this + 0x144) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(uint *)(this + 0x128) + 0x134))) +
              (float10)*(float *)(this + 0x144))));
  return *(uint *)(this + 0x128);
}

/* ref: FUN_00d29f50 */
GEN_NOFRAME uint GEN_THISCALL F_00d29f50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd29f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x11345ec));
  F_00cccb40((int)this + 0x14c GEN_EDX_FWD);
  uVar1 = F_00d23680(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf2 */
GEN_FRAME uint GEN_THISCALL F_00d29f70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xd29f70u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  F_00d211a0(param_1 GEN_EDX_FWD,param_2,param_3,param_4);
  F_00cccbd0(param_1 + 0x14c GEN_EDX_ARG,param_4);
  F_00cccd90(param_1 + 0x14c GEN_EDX_ARG,param_3,param_2);
  return REFG(undefined4, 0x11299e4);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf4 */
GEN_FRAME uint GEN_THISCALL F_00d29fc0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd29fc0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cccd90(param_1 + 0x14c GEN_EDX_FWD,param_2,param_3);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00d29fe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd29fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float * pfVar1;
  float * pfVar2;
  float * pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  
  F_00d213b0(this GEN_EDX_FWD,param_1,param_2);
  iVar10 = 0;
  do {
    iVar9 = *(int *)(this + 0x128);
    fVar4 = *(float *)(iVar9 + 0x28 + iVar10);
    fVar5 = *(float *)(iVar9 + 0x2c + iVar10);
    pfVar1 = (float *)(iVar9 + 0x20 + iVar10);
    pfVar2 = (float *)(iVar9 + 0x24 + iVar10);
    fVar6 = param_1[3];
    pfVar3 = (float *)(iVar9 + 0x20 + iVar10);
    iVar10 = iVar10 + 0x10;
    fVar7 = param_1[1];
    fVar8 = param_1[2];
    *pfVar3 = *pfVar1 + *param_1;
    pfVar3[1] = *pfVar2 + fVar7;
    pfVar3[2] = fVar4 + fVar8;
    pfVar3[3] = fVar5 + fVar6;
    *((float *)GEN_TOP((*(int *)(this + 0x128) + 0x1c + iVar10))) = (float)(float10)1;
  } while (iVar10 < 0x100);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf14 */
GEN_FRAME byte GEN_THISCALL F_00d2a0c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2a0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x70))(this GEN_EDX_FWD,0x406);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0x10))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG);
  if ((char)uVar1 == '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x14c) + 8))))(this + 0x14c GEN_EDX_ARG,param_1);
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf15 */
GEN_NOFRAME byte F_00d2a100(void)
{
  GEN_ENTER(0xd2a100u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf21 */
GEN_FRAME byte GEN_THISCALL F_00d2a110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2a110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  if (((((float10)*param_1 <= (float10)*(float *)(this + 0x13c)) &&
       ((float10)*(float *)(this + 300) <= (float10)*param_2)) &&
      ((float10)param_1[1] <= (float10)*(float *)(this + 0x140))) &&
     ((((float10)*(float *)(this + 0x130) <= (float10)param_2[1] &&
       ((float10)param_1[2] <= (float10)*(float *)(this + 0x144))) &&
      ((float10)*(float *)(this + 0x134) <= (float10)param_2[2])))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00d2a1a0 */
GEN_NOFRAME uint GEN_THISCALL F_00d2a1a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2a1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float * pfVar9;
  uint uVar10;
  float * pfVar11;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  float fVar15;
  
  (*(uint *)(gen_frame + 0x12c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x130);
  iVar8 = *(int *)((int)this + 0x128);
  (*(int *)(gen_frame + 0xc)) = 0;
  if (*(char *)(iVar8 + 0x131) != '\0') {
    fVar15 = *param_1;
    fVar1 = param_1[1];
    fVar2 = param_1[2];
    fVar3 = param_1[3];
    pfVar9 = (float *)(iVar8 + 0x20);
    pfVar11 = ((float *)(gen_frame + 0x28));
    do {
      fVar4 = *pfVar9;
      fVar5 = pfVar9[1];
      fVar6 = pfVar9[2];
      fVar7 = pfVar9[3];
      (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
      pfVar9 = pfVar9 + 4;
      (*(float *)(gen_frame + 0x10)) = fVar4 - fVar15;
      (*(float *)(gen_frame + 0x14)) = fVar5 - fVar1;
      (*(float *)(gen_frame + 0x18)) = fVar6 - fVar2;
      (*(float *)(gen_frame + 0x1c)) = fVar7 - fVar3;
      *pfVar11 = fVar4 - fVar15;
      pfVar11[1] = fVar5 - fVar1;
      pfVar11[2] = fVar6 - fVar2;
      pfVar11[3] = fVar7 - fVar3;
      pfVar11 = pfVar11 + 4;
    } while ((*(int *)(gen_frame + 0xc)) < (int)(uint)*(byte *)(iVar8 + 0x131));
  }
  iVar12 = 0;
  if (*(byte *)(iVar8 + 0x131) != 1 && -1 < (int)(*(byte *)(iVar8 + 0x131) - 1)) {
    pfVar9 = ((float *)(gen_frame + 0x28));
    do {
      fVar15 = F_010536a0(pfVar9,pfVar9 + 4,&(*(float *)(gen_frame + 0x10)));
      fVar13 = (float10)fVar15;
      fVar14 = (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x134)));
      if (fVar13 <= fVar14 && ((!GEN_ISNAN(fVar14) && !GEN_ISNAN(fVar13)) && fVar14 != fVar13)) {
        uVar10 = 1;
        goto LAB_00d2a30d;
      }
      iVar12 = iVar12 + 1;
      pfVar9 = pfVar9 + 4;
    } while (iVar12 < (int)(*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0x131))) - 1));
  }
  uVar10 = 0;
LAB_00d2a30d: ;
  F_00c47745((*(uint *)(gen_frame + 0x12c)) ^ (uint)(uint)(gen_frame + 0x130) GEN_EDX_ARG);
  return uVar10;
}

/* ref: FUN_00d2a330 */
GEN_NOFRAME uint GEN_THISCALL F_00d2a330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd2a330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float * pfVar8;
  float * pfVar9;
  int iVar10;
  bool bVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  float fVar15;
  
  (*(uint *)(gen_frame + 0x12c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x130);
  iVar7 = *(int *)((int)this + 0x128);
  (*(float *)(gen_frame + 0x14)) = 0.0;
  if (*(char *)(iVar7 + 0x131) != '\0') {
    fVar15 = *param_1;
    fVar1 = param_1[1];
    fVar2 = param_1[2];
    fVar3 = param_1[3];
    pfVar8 = (float *)(iVar7 + 0x20);
    pfVar9 = ((float *)(gen_frame + 0x28));
    do {
      fVar4 = *pfVar8;
      fVar5 = pfVar8[1];
      fVar14 = pfVar8[2];
      fVar6 = pfVar8[3];
      (*(float *)(gen_frame + 0x14)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) + 1);
      pfVar8 = pfVar8 + 4;
      (*(float *)(gen_frame + 0x18)) = fVar4 - fVar15;
      *pfVar9 = fVar4 - fVar15;
      (*(float *)(gen_frame + 0x1c)) = fVar5 - fVar1;
      pfVar9[1] = fVar5 - fVar1;
      (*(float *)(gen_frame + 0x20)) = fVar14 - fVar2;
      pfVar9[2] = fVar14 - fVar2;
      (*(float *)(gen_frame + 0x24)) = fVar6 - fVar3;
      pfVar9[3] = fVar6 - fVar3;
      pfVar9 = pfVar9 + 4;
    } while ((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) < (int)(uint)*(byte *)(iVar7 + 0x131));
  }
  (*(float *)(gen_frame + 0x14)) = (float)(float10)0;
  iVar10 = 0;
  (*(float *)(gen_frame + 0x8)) = (float)(float10)0;
  if (*(byte *)(iVar7 + 0x131) != 1 && -1 < (int)(*(byte *)(iVar7 + 0x131) - 1)) {
    do {
      fVar15 = F_010536a0(((float *)(gen_frame + 0x28)) + iVar10 * 4,((undefined1 *)(gen_frame + 0x38)) + iVar10 * 0x10,&(*(float *)(gen_frame + 0x18)));
      fVar12 = (float10)fVar15;
      iVar7 = *(int *)((int)this + 0x128);
      fVar13 = (float10)*(float *)(iVar7 + 0x134);
      if (!(fVar12 <= fVar13) || ((GEN_ISNAN(fVar13) || GEN_ISNAN(fVar12)) || fVar13 == fVar12)) {
        bVar11 = GEN_ISNAN((float10)*(float *)(iVar7 + 0x134)) || GEN_ISNAN(fVar12);
        if (bVar11 == (bVar11 || (float10)*(float *)(iVar7 + 0x134) == fVar12)) {
          fVar12 = fVar12 - (float10)*(float *)(iVar7 + 0x134);
        }
        else {
          fVar12 = (float10)0;
        }
      }
      else {
        fVar12 = (float10)*(float *)(iVar7 + 0x134) - fVar12;
      }
      fVar1 = (float)fVar12;
      fVar12 = (float10)fVar1;
      if (iVar10 == 0) {
        *param_3 = (*(float *)(gen_frame + 0x18));
        param_3[1] = (*(float *)(gen_frame + 0x1c));
        param_3[2] = (*(float *)(gen_frame + 0x20));
        param_3[3] = (*(float *)(gen_frame + 0x24));
        (*(float *)(gen_frame + 0x8)) = fVar15;
        (*(float *)(gen_frame + 0x14)) = fVar1;
      }
      else {
        fVar13 = (float10)(*(float *)(gen_frame + 0x14));
        if (fVar12 <= fVar13 && ((!GEN_ISNAN(fVar13) && !GEN_ISNAN(fVar12)) && fVar13 != fVar12)) {
          *param_3 = (*(float *)(gen_frame + 0x18));
          param_3[1] = (*(float *)(gen_frame + 0x1c));
          param_3[2] = (*(float *)(gen_frame + 0x20));
          param_3[3] = (*(float *)(gen_frame + 0x24));
          (*(float *)(gen_frame + 0x8)) = fVar15;
          (*(float *)(gen_frame + 0x14)) = fVar1;
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)(*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0x131))) - 1));
    fVar12 = (float10)(*(float *)(gen_frame + 0x8));
    bVar11 = GEN_ISNAN((float10)0) || GEN_ISNAN(fVar12);
    if (bVar11 == (bVar11 || (float10)0 == fVar12)) {
      fVar15 = *param_3;
      fVar1 = param_3[1];
      fVar2 = param_3[2];
      fVar3 = param_3[3];
      fVar4 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)((int)this + 0x128) + 0x134))) / fVar12)));
      (*(float *)(gen_frame + 0x18)) = fVar15 * fVar4;
      *param_3 = fVar15 * fVar4;
      (*(float *)(gen_frame + 0x1c)) = fVar1 * fVar4;
      param_3[1] = fVar1 * fVar4;
      (*(float *)(gen_frame + 0x20)) = fVar2 * fVar4;
      param_3[2] = fVar2 * fVar4;
      (*(float *)(gen_frame + 0x24)) = fVar3 * fVar4;
      param_3[3] = fVar3 * fVar4;
    }
  }
  fVar15 = param_3[2];
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  fVar5 = *param_1;
  fVar14 = param_3[3] + param_1[3];
  (*(float *)(gen_frame + 0x18)) = fVar1 + fVar5;
  *param_3 = fVar1 + fVar5;
  (*(float *)(gen_frame + 0x1c)) = fVar2 + fVar3;
  param_3[1] = fVar2 + fVar3;
  (*(float *)(gen_frame + 0x20)) = fVar15 + fVar4;
  (*(float *)(gen_frame + 0x24)) = fVar14;
  param_3[2] = fVar15 + fVar4;
  param_3[3] = fVar14;
  F_00c47745((*(uint *)(gen_frame + 0x12c)) ^ (uint)(uint)(gen_frame + 0x130) GEN_EDX_ARG);
  return (uint)gen_fl2bits(fVar14);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf22 */
GEN_NOFRAME uint GEN_THISCALL F_00d2a6f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd2a6f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  
  *param_4 = 0;
  fVar1 = param_2[3];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_1[1];
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  (*(float *)(gen_frame + 0x10)) = *param_1 + *param_2;
  (*(float *)(gen_frame + 0x14)) = fVar4 + fVar5;
  (*(float *)(gen_frame + 0x18)) = fVar2 + fVar6;
  (*(float *)(gen_frame + 0x1c)) = fVar3 + fVar1;
  (*(float *)(gen_frame + 0x0)) = *param_1 + *param_2;
  (*(float *)(gen_frame + 0x4)) = fVar4 + fVar5;
  (*(float *)(gen_frame + 0x8)) = fVar2 + fVar6;
  (*(float *)(gen_frame + 0xc)) = fVar3 + fVar1;
  uVar7 = F_00d2a1a0(this GEN_EDX_FWD,param_1);
  *(uint *)(this + 0x170) = uVar7;
  uVar7 = F_00d2a1a0(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)));
  *(uint *)(this + 0x174) = uVar7;
  if (*(int *)(this + 0x170) != 0) {
    if (uVar7 != 0) {
      return uVar7;
    }
    if (*(int *)(this + 0x170) != 0) goto LAB_00d2a7b7;
  }
  if (uVar7 == 0) {
    return 0;
  }
LAB_00d2a7b7: ;
  uVar7 = F_00d2a330(this GEN_EDX_ARG,param_1,param_2,param_3);
  return uVar7;
}

/* ref: FUN_00d2a7e0 */
GEN_NOFRAME float GEN_THISCALL F_00d2a7e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2a7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  bool bVar9;
  float * pfVar10;
  float * pfVar11;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  float fVar15;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  iVar8 = *(int *)((int)this + 0x128);
  (*(float *)(gen_frame + 0xc)) = 0.0;
  if (*(char *)(iVar8 + 0x131) != '\0') {
    fVar15 = *param_1;
    fVar1 = param_1[1];
    fVar2 = param_1[2];
    fVar3 = param_1[3];
    pfVar10 = (float *)(iVar8 + 0x20);
    pfVar11 = ((float *)(gen_frame + 0x28));
    do {
      fVar4 = *pfVar10;
      fVar5 = pfVar10[1];
      fVar6 = pfVar10[2];
      fVar7 = pfVar10[3];
      (*(float *)(gen_frame + 0xc)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) + 1);
      pfVar10 = pfVar10 + 4;
      (*(float *)(gen_frame + 0x10)) = fVar4 - fVar15;
      (*(float *)(gen_frame + 0x14)) = fVar5 - fVar1;
      (*(float *)(gen_frame + 0x18)) = fVar6 - fVar2;
      (*(float *)(gen_frame + 0x1c)) = fVar7 - fVar3;
      *pfVar11 = fVar4 - fVar15;
      pfVar11[1] = fVar5 - fVar1;
      pfVar11[2] = fVar6 - fVar2;
      pfVar11[3] = fVar7 - fVar3;
      pfVar11 = pfVar11 + 4;
    } while ((int)gen_fl2bits((*(float *)(gen_frame + 0xc))) < (int)(uint)*(byte *)(iVar8 + 0x131));
  }
  iVar12 = 0;
  (*(float *)(gen_frame + 0xc)) = (float)(float10)0;
  bVar9 = false;
  if (*(byte *)(iVar8 + 0x131) != 1 && -1 < (int)(*(byte *)(iVar8 + 0x131) - 1)) {
    pfVar10 = ((float *)(gen_frame + 0x28));
    do {
      fVar15 = F_010536a0(pfVar10,pfVar10 + 4,&(*(float *)(gen_frame + 0x10)));
      fVar13 = (float10)fVar15;
      if (bVar9) {
        fVar14 = (float10)(*(float *)(gen_frame + 0xc));
        if (fVar13 <= fVar14 && ((!GEN_ISNAN(fVar14) && !GEN_ISNAN(fVar13)) && fVar14 != fVar13)) {
          (*(float *)(gen_frame + 0xc)) = fVar15;
        }
      }
      else {
        bVar9 = true;
        (*(float *)(gen_frame + 0xc)) = fVar15;
      }
      iVar12 = iVar12 + 1;
      pfVar10 = pfVar10 + 4;
    } while (iVar12 < (int)(*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 0x131))) - 1));
  }
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70) GEN_EDX_ARG);
  return (*(float *)(gen_frame + 0xc));
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf18 */
GEN_FRAME uint GEN_THISCALL F_00d2a940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2a940u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_3 < 0x140) {
    return 0;
  }
  puVar2 = *(undefined4 * PTR32 *)(in_ecx + 0x128);
  puVar3 = param_2;
  for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0x140;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf19 */
GEN_NOFRAME byte GEN_THISCALL F_00d2a980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd2a980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf20 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00d2a990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2a990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf23 */
GEN_NOFRAME byte GEN_THISCALL F_00d2a9a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd2a9a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf24 */
GEN_FRAME uint GEN_THISCALL F_00d2a9b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xd2a9b0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float fVar1;
  uint uVar2;
  float10 fVar3;
  bool bVar4;
  float10 fVar5;
  float10 extraout_ST0;
  float local_8;
  
  fVar3 = (float10)0;
  local_8 = (float)fVar3;
  fVar5 = (float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x138)));
  bVar4 = GEN_ISNAN(fVar3) || GEN_ISNAN(fVar5);
  if (bVar4 == (bVar4 || fVar3 == fVar5)) {
    if (param_5 == 0.0) {
      fVar5 = (float10)param_4;
      if ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar3)) == ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar3)) || fVar5 == fVar3)) {
        local_8 = ((float)GEN_TOF((fVar5 / (float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x138))))));
        fVar3 = (float10)1;
        if (!((float10)local_8 <= fVar3) != (GEN_ISNAN(fVar3) || GEN_ISNAN((float10)local_8))) {
          local_8 = (float)fVar3;
        }
      }
    }
    else {
      local_8 = (float)(float10)1;
    }
  }
  else {
    local_8 = (float)(float10)1;
  }
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x14c) + 0x10))))(param_1 + 0x14c);
  uVar2 = *(uint *)(param_1 + 0x128);
  fVar1 = ((float)GEN_TOF(((float10)1 -
                 (float10)(float)(extraout_ST0 * (float10)local_8) *
                 (float10)*(float *)(uVar2 + 0x128))));
  *param_2 = fVar1;
  if ((*(byte *)(uVar2 + 0x130) & 0x10) == 0) {
    *param_3 = fVar1;
    return uVar2;
  }
  *param_3 = ((float)GEN_TOF(((float10)1 -
                    (float10)(float)(extraout_ST0 * (float10)local_8) *
                    (float10)*(float *)(uVar2 + 300))));
  return (uint)param_3;
}

/* ref: FUN_00d2aa90 */
GEN_FRAME uint GEN_THISCALL F_00d2aa90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2aa90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  ushort uVar1;
  uint uVar2;
  float10 fVar3;
  
  if (param_1 == 0) {
    uVar1 = *((ushort *)GEN_TOP((*(int *)((int)this + 0x128) + 0x13e)));
    fVar3 = (float10)1;
  }
  else {
    uVar1 = *((ushort *)GEN_TOP((*(int *)((int)this + 0x128) + 0x13c)));
    fVar3 = (float10)0;
  }
  uVar2 = F_00cccd90((int)this + 0x14c GEN_EDX_FWD,(float)fVar3,(uint)uVar1 * 1000 >> 4);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf25 */
GEN_NOFRAME uint GEN_THISCALL F_00d2aad0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2aad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x15c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x160);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc)));
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0xe4))(this_00 GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x68))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x150);
  }
  F_00c47745((*(uint *)(gen_frame + 0x15c)) ^ (uint)(uint)(gen_frame + 0x160) GEN_EDX_ARG);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf27 */
GEN_FRAME unsigned int GEN_THISCALL F_00d2ab50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2ab50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = *(undefined4 * PTR32 *)(in_ecx + 0x128);
  for (iVar1 = 0x50; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf29 */
GEN_FRAME uint GEN_THISCALL F_00d2ab70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2ab70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HWND param_1 = (HWND)gen_a1;
  HDC param_2 = (HDC)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x1e0];
  char cVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined * pPVar6;
  HGDIOBJ pvVar7;
  undefined * h;
  int * piVar8;
  uint uVar9;
  float * pfVar10;
  char * pcVar11;
  int iVar12;
  float * pfVar13;
  HDC hdc;
  int iVar14;
  
  (*(uint *)(gen_frame + 0x1d8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1dc);
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  (*(HDC *)(gen_frame + 0x40)) = param_2;
  pvVar7 = gen_imp_GetStockObject(5);
  (*(HGDIOBJ *)(gen_frame + 0x2c)) = pvVar7;
  pvVar7 = gen_imp_SelectObject(param_2,pvVar7);
  (*(HGDIOBJ *)(gen_frame + 0x20)) = pvVar7;
  h = gen_imp_CreatePen(0,2,0x8000);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = h;
  pvVar7 = gen_imp_SelectObject(param_2,h);
  (*(HGDIOBJ *)(gen_frame + 0x34)) = pvVar7;
  gen_imp_GetClientRect(param_1,&(*(tagRECT *)(gen_frame + 0xa8)));
  (*(int *)(gen_frame + 0x38)) = (*(tagRECT *)(gen_frame + 0xa8)).bottom / 2;
  (*(int *)(gen_frame + 0x28)) = (*(tagRECT *)(gen_frame + 0xa8)).right / 2;
  piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0x98))))
                            (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG)));
  (*(int * PTR32 *)(gen_frame + 0x44)) = piVar8;
  uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x5c))(piVar8 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x58)));
  if ((char)uVar9 != '\0') {
    iVar2 = *(int *)(this + 0x128);
    if (*(byte *)(iVar2 + 0x131) != 0) {
      (*(byte *)(gen_frame + 0x53)) = *(byte *)(iVar2 + 4) >> 2 & 1;
      pfVar13 = ((float *)(gen_frame + 0xb8)) + 1;
      (*(float * PTR32 *)(gen_frame + 0x54)) = (float *)(iVar2 + 0x20);
      (*(uint *)(gen_frame + 0x4c)) = (uint)*(byte *)(iVar2 + 0x131);
      do {
        pfVar10 = (float *)F_00c34320(((undefined1 *)(gen_frame + 0x58)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(float * PTR32 *)(gen_frame + 0x54)));
        fVar3 = pfVar10[1];
        pfVar13[-1] = *pfVar10;
        fVar4 = pfVar10[2];
        fVar5 = pfVar10[3];
        *pfVar13 = fVar3;
        pfVar13[1] = fVar4;
        pfVar13[2] = fVar5;
        if ((*(byte *)(gen_frame + 0x53)) == 0) {
          *pfVar13 = (float)(float10)0;
        }
        (*(float * PTR32 *)(gen_frame + 0x54)) = (*(float * PTR32 *)(gen_frame + 0x54)) + 4;
        pfVar13 = pfVar13 + 4;
        uVar9 = (*(uint *)(gen_frame + 0x4c)) - 1;
        (*(uint *)(gen_frame + 0x4c)) = uVar9;
      } while (uVar9 != 0);
    }
    iVar14 = (*(tagRECT *)(gen_frame + 0xa8)).right / 2 - (int)((double)((float *)(gen_frame + 0xb8))[0] * *(double *)&REFG(double, 0x1132488));
    (*(int *)(gen_frame + 0x1c)) = iVar14;
    iVar12 = (*(int *)(gen_frame + 0x38)) - (int)(*(double *)&REFG(double, 0x1132488) * (double)((float *)(gen_frame + 0xb8))[2]);
    (*(uint *)(gen_frame + 0x4c)) = iVar12;
    iVar2 = (int)((double)*((float *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x48)) + 0x128) + 0x134))) * *(double *)&REFG(undefined, 0x10947f0)
                 );
    gen_imp_MoveToEx(param_2,iVar14,iVar12,(LPPOINT)0x0);
    gen_imp_Ellipse(param_2,iVar14 - iVar2,(*(uint *)(gen_frame + 0x4c)) - iVar2,iVar2 + iVar14,iVar2 + (*(uint *)(gen_frame + 0x4c)));
    (*(int *)(gen_frame + 0x3c)) = 1;
    hdc = param_2;
    if (1 < *((byte *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x48)) + 0x128) + 0x131)))) {
      (*(float * PTR32 *)(gen_frame + 0x54)) = ((float *)(gen_frame + 0xb8)) + 6;
      do {
        iVar14 = (*(int *)(gen_frame + 0x28)) - (int)((double)(*(float * PTR32 *)(gen_frame + 0x54))[-2] * *(double *)&REFG(double, 0x1132488));
        iVar12 = (*(int *)(gen_frame + 0x38)) - (int)(*(double *)&REFG(double, 0x1132488) * (double)*(*(float * PTR32 *)(gen_frame + 0x54)));
        gen_imp_LineTo((*(HDC *)(gen_frame + 0x40)),iVar14,iVar12);
        gen_imp_Ellipse((*(HDC *)(gen_frame + 0x40)),iVar14 - iVar2,iVar12 - iVar2,iVar2 + iVar14,iVar2 + iVar12);
        (*(float * PTR32 *)(gen_frame + 0x54)) = (*(float * PTR32 *)(gen_frame + 0x54)) + 4;
        iVar12 = (*(int *)(gen_frame + 0x3c)) + 1;
        (*(int *)(gen_frame + 0x3c)) = iVar12;
        hdc = (*(HDC *)(gen_frame + 0x40));
        iVar14 = (*(int *)(gen_frame + 0x1c));
      } while (iVar12 < (int)(uint)*((byte *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x48)) + 0x128) + 0x131))));
    }
    ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x44)) + 0x30))((*(int * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x98)));
    pPVar6 = (*(undefined * PTR32 *)(gen_frame + 0x48));
    piVar8 = ((int *)(uintptr_t)gen_fl2bits((float)(F_00d2a7e0((*(undefined * PTR32 *)(gen_frame + 0x48)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x98))))));
    (*(int * PTR32 *)(gen_frame + 0x44)) = piVar8;
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)pPVar6 + 0x60))(pPVar6 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0x18)),piVar8,0);
    F_00c472af(((char *)(gen_frame + 0x1b8)),0x20,&REFG(undefined, 0x1134470),(int)(ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x30))),
               (int)((ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x30))) >> 0x20));
    pcVar11 = ((char *)(gen_frame + 0x1b8));
    do {
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    gen_imp_GetTextExtentPoint32A(hdc,((char *)(gen_frame + 0x1b8)),(int)pcVar11 - (int)(((char *)(gen_frame + 0x1b8)) + 1),&(*(undefined8 *)(gen_frame + 0x10)));
    gen_imp_TextOutA(hdc,iVar14,(*(uint *)(gen_frame + 0x4c)),((char *)(gen_frame + 0x1b8)),(int)pcVar11 - (int)(((char *)(gen_frame + 0x1b8)) + 1));
    gen_imp_SelectObject(hdc,(*(HGDIOBJ *)(gen_frame + 0x34)));
    gen_imp_SelectObject(hdc,(*(HGDIOBJ *)(gen_frame + 0x20)));
    gen_imp_DeleteObject((*(undefined * PTR32 *)(gen_frame + 0x24)));
    uVar9 = gen_imp_DeleteObject((*(HGDIOBJ *)(gen_frame + 0x2c)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x1d8)) ^ (uint)(uint)(gen_frame + 0x1dc) GEN_EDX_ARG);
  return uVar9;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf30 */
GEN_FRAME byte GEN_THISCALL F_00d2af10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2af10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined * _File;
  byte bVar5;
  int iVar6;
  
  _File = param_1;
  bVar5 = F_00d21f00((undefined *)this GEN_EDX_FWD,param_1);
  if (bVar5 == 0) {
    return 0;
  }
  iVar6 = 0;
  param_1 = (undefined *)0x0;
  do {
    iVar1 = *(int *)(this + 0x128);
    dVar2 = (double)*(float *)(iVar6 + 0x28 + iVar1);
    dVar3 = (double)*(float *)(iVar6 + 0x24 + iVar1);
    dVar4 = (double)*(float *)(iVar6 + 0x20 + iVar1);
    F_00c49386(_File,"Position[%d] = %f %f %f\n",param_1,(int)(ulonglong)gen_d2bits(dVar4),
             (int)((ulonglong)gen_d2bits(dVar4) >> 0x20),(int)(ulonglong)gen_d2bits(dVar3),
             (int)((ulonglong)gen_d2bits(dVar3) >> 0x20),(int)(ulonglong)gen_d2bits(dVar2),
             (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
    param_1 = (undefined *)((int)param_1 + (1) * 32);
    iVar6 = iVar6 + 0x10;
  } while (iVar6 < 0x100);
  param_1 = (undefined *)0x0;
  iVar6 = 0x120;
  do {
    F_00c49386(_File,"Height[%d] = %f\n",param_1,
             (int)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + iVar6)))),
             (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + iVar6)))) >> 0x20
                  ));
    param_1 = (undefined *)((int)param_1 + (1) * 32);
    iVar6 = iVar6 + 4;
  } while (iVar6 < 0x128);
  F_00c49386(_File,"ObstacleFac = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x128))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x128))))));
  F_00c49386(_File,"HicutFac = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 300))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 300))))));
  F_00c49386(_File,"BlockadeFlag = %d\n",*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x130))) & 0xf);
  F_00c49386(_File,"fUseHicutFac = %d\n",*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x130))) >> 4 & 1);
  F_00c49386(_File,"FadeRange = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x138))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x138))))));
  F_00c49386(_File,"VetexCount = %d\n",(uint)*((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x131))));
  F_00c49386(_File,"Width = %f\n",GEN_LO32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x134))))),GEN_HI32((undefined8)gen_d2bits((double)*((float *)GEN_TOP((*(int *)(this + 0x128) + 0x134))))));
  F_00c49386(_File,"[EndOfSoundObject]\n\n");
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf31 */
GEN_FRAME byte GEN_THISCALL F_00d2b090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2b090u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  bool bVar6;
  double dVar7;
  
  pcVar2 = "Position";
  pbVar5 = (byte *)param_2;
  do {
    bVar1 = *pcVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00d2b0c1: ;
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00d2b0c6;
    }
    if (bVar1 == 0) break;
    bVar1 = pcVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00d2b0c1;
    pcVar2 = pcVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00d2b0c6: ;
  if (iVar3 == 0) {
    uVar4 = F_00d00d00(0,0);
    if (uVar4 != 0) {
      uVar4 = F_00c4c74c(uVar4);
      pcVar2 = (char *)F_00d00d00(0,0);
      if (pcVar2 != (char *)0x0) {
        dVar7 = F_00c4acaa(pcVar2);
        *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + (uVar4 + 2) * 0x10))) = (float)dVar7;
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x24 + uVar4 * 0x10))) = (float)dVar7;
          pcVar2 = (char *)F_00d00d00(0,0);
          if (pcVar2 != (char *)0x0) {
            dVar7 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x28 + uVar4 * 0x10))) = (float)dVar7;
            return 1;
          }
        }
      }
    }
  }
  else {
    pcVar2 = "Height";
    pbVar5 = (byte *)param_2;
    do {
      bVar1 = *pcVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00d2b196: ;
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00d2b19b;
      }
      if (bVar1 == 0) break;
      bVar1 = pcVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00d2b196;
      pcVar2 = pcVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_00d2b19b: ;
    if (iVar3 == 0) {
      uVar4 = F_00d00d00(0,0);
      if (uVar4 != 0) {
        uVar4 = F_00c4c74c(uVar4);
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x120 + uVar4 * 4))) = (float)dVar7;
          return 1;
        }
      }
    }
    else {
      pcVar2 = "ObstacleFac";
      pbVar5 = (byte *)param_2;
      do {
        bVar1 = *pcVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_00d2b218: ;
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_00d2b21d;
        }
        if (bVar1 == 0) break;
        bVar1 = pcVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_00d2b218;
        pcVar2 = pcVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00d2b21d: ;
      if (iVar3 == 0) {
        pcVar2 = (char *)F_00d00d00(0,0);
        if (pcVar2 != (char *)0x0) {
          dVar7 = F_00c4acaa(pcVar2);
          *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x128))) = (float)dVar7;
          return 1;
        }
      }
      else {
        pcVar2 = "HicutFac";
        pbVar5 = (byte *)param_2;
        do {
          bVar1 = *pcVar2;
          bVar6 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_00d2b280: ;
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_00d2b285;
          }
          if (bVar1 == 0) break;
          bVar1 = pcVar2[1];
          bVar6 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00d2b280;
          pcVar2 = pcVar2 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00d2b285: ;
        if (iVar3 == 0) {
          pcVar2 = (char *)F_00d00d00(0,0);
          if (pcVar2 != (char *)0x0) {
            dVar7 = F_00c4acaa(pcVar2);
            *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 300))) = (float)dVar7;
            return 1;
          }
        }
        else {
          pcVar2 = "BlockadeFlag";
          pbVar5 = (byte *)param_2;
          do {
            bVar1 = *pcVar2;
            bVar6 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00d2b2e5: ;
              iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
              goto LAB_00d2b2ea;
            }
            if (bVar1 == 0) break;
            bVar1 = pcVar2[1];
            bVar6 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00d2b2e5;
            pcVar2 = pcVar2 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar3 = 0;
LAB_00d2b2ea: ;
          if (iVar3 == 0) {
            uVar4 = F_00d00d00(0,0);
            if (uVar4 != 0) {
              uVar4 = F_00c4c74c(uVar4);
              pbVar5 = ((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x130)));
              *pbVar5 = *pbVar5 ^ (*((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x130))) ^ (byte)uVar4) & 0xf
              ;
              return 1;
            }
          }
          else {
            pcVar2 = "fUseHicutFac";
            pbVar5 = (byte *)param_2;
            do {
              bVar1 = *pcVar2;
              bVar6 = bVar1 < *pbVar5;
              if (bVar1 != *pbVar5) {
LAB_00d2b350: ;
                iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                goto LAB_00d2b355;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar2[1];
              bVar6 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_00d2b350;
              pcVar2 = pcVar2 + 2;
              pbVar5 = pbVar5 + 2;
            } while (bVar1 != 0);
            iVar3 = 0;
LAB_00d2b355: ;
            if (iVar3 == 0) {
              uVar4 = F_00d00d00(0,0);
              if (uVar4 != 0) {
                uVar4 = F_00c4c74c(uVar4);
                pbVar5 = ((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x130)));
                *pbVar5 = *pbVar5 ^ ((char)uVar4 << 4 ^ *((byte *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x130)))
                                    ) & 0x10;
                return 1;
              }
            }
            else {
              pcVar2 = "FadeRange";
              pbVar5 = (byte *)param_2;
              do {
                bVar1 = *pcVar2;
                bVar6 = bVar1 < *pbVar5;
                if (bVar1 != *pbVar5) {
LAB_00d2b3c0: ;
                  iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                  goto LAB_00d2b3c5;
                }
                if (bVar1 == 0) break;
                bVar1 = pcVar2[1];
                bVar6 = bVar1 < pbVar5[1];
                if (bVar1 != pbVar5[1]) goto LAB_00d2b3c0;
                pcVar2 = pcVar2 + 2;
                pbVar5 = pbVar5 + 2;
              } while (bVar1 != 0);
              iVar3 = 0;
LAB_00d2b3c5: ;
              if (iVar3 == 0) {
                pcVar2 = (char *)F_00d00d00(0,0);
                if (pcVar2 != (char *)0x0) {
                  dVar7 = F_00c4acaa(pcVar2);
                  *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x138))) = (float)dVar7;
                  return 1;
                }
              }
              else {
                pcVar2 = "VertexCount";
                pbVar5 = (byte *)param_2;
                do {
                  bVar1 = *pcVar2;
                  bVar6 = bVar1 < *pbVar5;
                  if (bVar1 != *pbVar5) {
LAB_00d2b425: ;
                    iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                    goto LAB_00d2b42a;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pcVar2[1];
                  bVar6 = bVar1 < pbVar5[1];
                  if (bVar1 != pbVar5[1]) goto LAB_00d2b425;
                  pcVar2 = pcVar2 + 2;
                  pbVar5 = pbVar5 + 2;
                } while (bVar1 != 0);
                iVar3 = 0;
LAB_00d2b42a: ;
                if (iVar3 == 0) {
                  uVar4 = F_00d00d00(0,0);
                  if (uVar4 != 0) {
                    uVar4 = F_00c4c74c(uVar4);
                    *((char *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x131))) = (char)uVar4;
                    return 1;
                  }
                }
                else {
                  pcVar2 = "Width";
                  pbVar5 = (byte *)param_2;
                  do {
                    bVar1 = *pcVar2;
                    bVar6 = bVar1 < *pbVar5;
                    if (bVar1 != *pbVar5) {
LAB_00d2b484: ;
                      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
                      goto LAB_00d2b489;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pcVar2[1];
                    bVar6 = bVar1 < pbVar5[1];
                    if (bVar1 != pbVar5[1]) goto LAB_00d2b484;
                    pcVar2 = pcVar2 + 2;
                    pbVar5 = pbVar5 + 2;
                  } while (bVar1 != 0);
                  iVar3 = 0;
LAB_00d2b489: ;
                  if (iVar3 != 0) {
                    bVar1 = F_00d22040(param_1 GEN_EDX_ARG,param_2);
                    return bVar1;
                  }
                  pcVar2 = (char *)F_00d00d00(0,0);
                  if (pcVar2 != (char *)0x0) {
                    dVar7 = F_00c4acaa(pcVar2);
                    *((float *)GEN_TOP((*(int *)(param_1 + 0x128) + 0x134))) = (float)dVar7;
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf26 */
GEN_FRAME uint GEN_THISCALL F_00d2b4d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2b4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = (undefined4 *)F_00d22da0(this GEN_EDX_FWD,param_1,0x140);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) + 0xf4))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG);
  if (uVar2 != 0) {
    puVar4 = *(undefined4 * PTR32 *)(this + 0x128);
    puVar5 = puVar1;
    for (iVar3 = 0x50; iVar3 != 0; iVar3 = iVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return (uint)(puVar1 + 0x50);
  }
  F_00d2b9a0(*(undefined4 *)(this + 0x128) GEN_EDX_ARG,(uint)puVar1);
  return (uint)(puVar1 + 0x50);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf28 */
GEN_FRAME uint GEN_THISCALL F_00d2b530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2b530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  byte bVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  ulonglong uVar6;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  uVar3 = *(uint *)(this + 0x1c);
  if (*((int *)GEN_TOP((*(int *)(uVar3 + 0xc) + 0x2f8))) != 0) {
    F_00d22b20(this GEN_EDX_FWD,&(*(undefined2 *)(gen_frame + 0x8)));
    (*(undefined2 *)(gen_frame + 0x8)) = (undefined2)param_1;
    (*(undefined2 *)(gen_frame + 0xa)) = 0x100;
    uVar6 = F_00427d90();
    (*(ulonglong *)(gen_frame + 0x10)) = uVar6;
    bVar1 = *((byte *)GEN_TOP((*(int *)(this + 0x128) + 0x131)));
    iVar5 = 0;
    (*(byte *)(gen_frame + 0x100)) = bVar1;
    if (bVar1 != 0) {
      puVar2 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x128) + 0x24)));
      puVar4 = ((undefined4 *)(gen_frame + 0x44));
      do {
        iVar5 = iVar5 + 1;
        puVar4[-1] = puVar2[-1];
        *puVar4 = *puVar2;
        puVar4[1] = puVar2[1];
        puVar2 = puVar2 + 4;
        puVar4 = puVar4 + 3;
      } while (iVar5 < (int)(uint)(*(byte *)(gen_frame + 0x100)));
    }
    F_00d2b860(&(*(undefined2 *)(gen_frame + 0x8)) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x8)));
    uVar3 = F_00d00b10(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c) + 0xc))) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x8)),0x100);
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00d2b610 */
GEN_NOFRAME uint GEN_THISCALL F_00d2b610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd2b610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  int * this_00;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0x15c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x160);
  F_00d22580(this GEN_EDX_FWD,param_1,param_2,param_3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x11345ec));
  F_00cccb10((int)this + 0x14c GEN_EDX_ARG,(float)(float10)1);
  *(uint *)((int)this + 0xb0) =
       *(uint *)((int)this + 0xb0) ^ ((param_4 & 0xff) << 4 ^ *(uint *)((int)this + 0xb0)) & 0x10;
  if ((char)param_4 == '\0') {
    *(undefined4 * PTR32 *)((int)this + 0x128) = param_1;
  }
  else {
    *(undefined4 * PTR32 *)((int)this + 0x128) = (undefined4 *)((int)this + 0x180);
    puVar3 = param_1;
    puVar4 = (undefined4 *)((int)this + 0x180);
    for (iVar2 = 0x50; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x128);
  F_00d29d10(this GEN_EDX_ARG);
  F_00d20fe0(this GEN_EDX_ARG,(uint)(~(*((byte *)GEN_TOP((*(int *)((int)this + 0x128) + 4))) >> 5) & 1));
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0xe4))(this_00 GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x68))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x150);
  }
  F_00d2b530(this GEN_EDX_ARG,0x401);
  F_00c47745((*(uint *)(gen_frame + 0x15c)) ^ (uint)(uint)(gen_frame + 0x160) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00d2b740 */
GEN_NOFRAME uint GEN_THISCALL F_00d2b740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2b740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x15c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x160);
  F_00d22720(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x11345ec));
  F_00cccb10((int)this + 0x14c GEN_EDX_ARG,(float)(float10)1);
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) | 0x10;
  *(undefined * PTR32 *)((int)this + 0x128) = (undefined *)((int)this + 0x180);
  F_00d2b900((undefined *)((int)this + 0x180) GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x128);
  this_00 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0xc)));
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0xe4))(this_00 GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x68))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x150);
  }
  F_00d2b530(this GEN_EDX_ARG,0x401);
  F_00c47745((*(uint *)(gen_frame + 0x15c)) ^ (uint)(uint)(gen_frame + 0x160) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf3 */
GEN_FRAME uint GEN_THISCALL F_00d2b810(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2b810u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_3 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2),local_c);
  return uVar1;
}

/* ref: FUN_00d2b860 */
GEN_FRAME unsigned int GEN_THISCALL F_00d2b860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2b860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *param_1 = *(undefined2 *)this;
  param_1[1] = *(undefined2 *)((int)this + 2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((int)this + 0x28);
  param_1[0x18] = *(undefined2 *)((int)this + 0x30);
  param_1[0x19] = *(undefined2 *)((int)this + 0x32);
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)((int)this + 0x34);
  *(undefined1 *)(param_1 + 0x7c) = *(undefined1 *)((int)this + 0xf8);
  iVar1 = 0x10;
  puVar2 = (undefined4 *)(param_1 + 0x1c);
  puVar3 = (undefined4 *)((int)this + 0x40);
  do {
    *puVar2 = *((undefined4 *)GEN_TOP((((int)this - (int)param_1) + (int)puVar2)));
    iVar1 = iVar1 - 1;
    puVar2[1] = puVar3[-1];
    puVar2[2] = *puVar3;
    puVar2 = puVar2 + 3;
    puVar3 = puVar3 + 3;
  } while (iVar1 != 0);
  return 0;
}

/* ref: FUN_00d2b900 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00d2b900(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2b900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  float10 fVar2;
  undefined4 uVar3;
  float * pfVar4;
  int iVar5;
  
  fVar1 = (float10)1;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined2 *)((int)this + 3) = 0x400;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 5) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(float *)((int)this + 0x10) = (float)fVar1;
  *(float *)((int)this + 0x14) = (float)fVar1;
  *(float *)((int)this + 0x18) = (float)fVar1;
  *(float *)((int)this + 0x1c) = (float)fVar1;
  *(undefined2 *)((int)this + 0xe) = 0;
  fVar2 = (float10)0;
  *(undefined2 *)this = 0x140;
  *(undefined1 *)((int)this + 0xd) = 0;
  *(undefined1 *)((int)this + 2) = 10;
  iVar5 = 0x10;
  pfVar4 = (float *)((int)this + 0x28);
  do {
    pfVar4[-2] = (float)fVar2;
    iVar5 = iVar5 - 1;
    pfVar4[-1] = (float)fVar2;
    *pfVar4 = (float)fVar2;
    pfVar4[1] = (float)fVar2;
    pfVar4[1] = (float)fVar1;
    uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094880)));
    pfVar4 = pfVar4 + 4;
  } while (iVar5 != 0);
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x120) = uVar3;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(float *)((int)this + 0x124) = (float)fVar2;
  *(float *)((int)this + 0x128) = (float)fVar1;
  *(float *)((int)this + 300) = (float)fVar1;
  *(float *)((int)this + 0x134) = (float)fVar2;
  *(float *)((int)this + 0x138) = (float)fVar2;
  return 0;
}

/* ref: FUN_00d2b9a0 */
GEN_FRAME ushort GEN_THISCALL F_00d2b9a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2b9a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  ushort uVar2;
  uint * puVar3;
  uint * puVar4;
  int local_8;
  
  F_00d0c080(param_1 GEN_EDX_FWD,param_2);
  puVar4 = (uint *)(param_1 + 0x28);
  local_8 = 0x10;
  puVar3 = (uint *)(param_2 + 0x20);
  do {
    uVar1 = *((uint *)GEN_TOP(((param_1 - param_2) + (int)puVar3)));
    *puVar3 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar4[-1];
    puVar3[1] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *puVar4;
    puVar3[2] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar4[1];
    puVar3[3] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    puVar4 = puVar4 + 4;
    local_8 = local_8 - 1;
    puVar3 = puVar3 + 4;
  } while (local_8 != 0);
  uVar1 = *(uint *)(param_1 + 0x120);
  *(uint *)(param_2 + 0x120) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x124);
  *(uint *)(param_2 + 0x124) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x128);
  *(uint *)(param_2 + 0x128) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 300);
  *(uint *)(param_2 + 300) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *(undefined1 *)(param_2 + 0x131) = *(undefined1 *)(param_1 + 0x131);
  *(byte *)(param_2 + 0x130) =
       *(byte *)(param_2 + 0x130) ^ (*(byte *)(param_2 + 0x130) ^ *(byte *)(param_1 + 0x130)) & 0xf;
  *(byte *)(param_2 + 0x130) =
       (*(byte *)(param_1 + 0x130) ^ *(byte *)(param_2 + 0x130)) & 0x10 ^ *(byte *)(param_2 + 0x130)
  ;
  uVar1 = *(uint *)(param_1 + 0x134);
  *(uint *)(param_2 + 0x134) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x138);
  *(byte *)(param_2 + 0x130) = *(byte *)(param_2 + 0x130) & 0x1f;
  *(uint *)(param_2 + 0x138) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *(undefined2 *)(param_2 + 0x132) = 0;
  *(ushort *)(param_2 + 0x13c) =
       *(ushort *)(param_1 + 0x13c) << 8 | *(ushort *)(param_1 + 0x13c) >> 8;
  uVar2 = *(ushort *)(param_1 + 0x13e) << 8 | *(ushort *)(param_1 + 0x13e) >> 8;
  *(ushort *)(param_2 + 0x13e) = uVar2;
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PolyLineObstruction::vf0 */
GEN_FRAME uint GEN_THISCALL F_00d2bb50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2bb50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[33])REFP(0x11345ec));
  F_00cccb40(this + 0x14c GEN_EDX_FWD);
  F_00d23680(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00d2bb90 */
GEN_FRAME uint GEN_THISCALL F_00d2bb90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2bb90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float10 fVar1;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  F_010538c0(this GEN_EDX_FWD);
  F_010538c0((int)this + 0x48 GEN_EDX_ARG);
  (*(float *)(gen_frame + 0x28)) = (float)(float10)0;
  fVar1 = (float10)1;
  (*(float *)(gen_frame + 0x2c)) = (float)fVar1;
  (*(undefined4 *)(gen_frame + 0x30)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10abe50)));
  (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)&REFG(undefined, 0x113467c);
  (*(undefined4 *)(gen_frame + 0x38)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ac1a8)));
  (*(undefined4 *)(gen_frame + 0x3c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ac1a8)));
  (*(float *)(gen_frame + 0x40)) = (float)fVar1;
  (*(undefined4 *)(gen_frame + 0x44)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  (*(float *)(gen_frame + 0x8)) = (float)(float10)0;
  (*(float *)(gen_frame + 0xc)) = (float)fVar1;
  (*(float *)(gen_frame + 0x14)) = (float)fVar1;
  (*(float *)(gen_frame + 0x1c)) = (float)fVar1;
  (*(float *)(gen_frame + 0x20)) = (float)fVar1;
  (*(float *)(gen_frame + 0x24)) = (float)fVar1;
  (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10abe50)));
  (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ac1a8)));
  F_010538e0(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x28)),4,1);
  F_010538e0((undefined *)((int)this + 0x48) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x8)),4,1);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00d2bc40 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00d2bc40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2bc40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  F_010538d0(in_ecx + 0x48 GEN_EDX_FWD);
  F_010538d0(in_ecx GEN_EDX_ARG);
  return;
}

/* ref: FUN_00d2bc60 */
GEN_FRAME float10 GEN_THISCALL F_00d2bc60(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xd2bc60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = F_01053e40(param_1 GEN_EDX_FWD,param_2);
  return fVar1;
}

/* ref: FUN_00d2bc80 */
GEN_FRAME float10 GEN_THISCALL F_00d2bc80(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xd2bc80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = F_01053e40(param_1 + 0x48 GEN_EDX_FWD,param_2);
  return fVar1;
}

/* ref: FUN_00d2bca0 */
GEN_FRAME unsigned int GEN_THISCALL F_00d2bca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2bca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_010538e0(this GEN_EDX_FWD,param_1,param_2,1);
  return;
}

/* ref: FUN_00d2bcc0 */
GEN_FRAME unsigned int GEN_THISCALL F_00d2bcc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2bcc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_010538e0((undefined *)((int)this + 0x48) GEN_EDX_FWD,param_1,param_2,1);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf5 */
GEN_FRAME byte GEN_THISCALL F_00d2bcf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2bcf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00d2c710((undefined *)this GEN_EDX_FWD,param_1);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_ARG);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf6 */
GEN_FRAME byte GEN_THISCALL F_00d2bd10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2bd10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00d2c730((undefined *)this GEN_EDX_FWD,param_1);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_ARG);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf8 */
GEN_FRAME byte GEN_THISCALL F_00d2bd30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2bd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)(this + 0x70) = param_1;
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_FWD);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf14 */
GEN_FRAME byte GEN_THISCALL F_00d2bd50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2bd50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  
  if (1 < param_2) {
    return 0;
  }
  piVar1 = (int *)F_00d1d1f0(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  if ((uVar2 == 3) &&
     (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 8)), (char)uVar2 == '\x01'
     )) {
    return 0;
  }
  *(undefined4 *)(this + param_2 * 4 + 0xa0) = param_1;
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf18 */
GEN_FRAME byte GEN_THISCALL F_00d2bdc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2bdc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined * pLVar4;
  int iVar5;
  
  iVar5 = 0;
  pLVar4 = this + 0xa0;
  while ((iVar1 = *(int *)pLVar4, iVar1 == 0 ||
         ((iVar1 != param_1 &&
          (((piVar2 = (int *)F_00d1d1f0(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,iVar1), piVar2 == (int *)0x0 ||
            (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG), uVar3 != 3)) ||
           (uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2 GEN_EDX_ARG,param_1), (char)uVar3 != '\x01'))))))) {
    iVar5 = iVar5 + 1;
    pLVar4 = pLVar4 + 4;
    if (1 < iVar5) {
      return 0;
    }
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf15 */
GEN_FRAME uint GEN_THISCALL F_00d2be30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2be30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (1 < param_2) {
    return 0;
  }
  return *(uint *)(in_ecx + 0xa0 + param_2 * 4);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf16 */
GEN_FRAME byte GEN_THISCALL F_00d2be50(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xd2be50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xa8) = param_2;
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf17 */
GEN_FRAME byte GEN_THISCALL F_00d2be70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2be70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0xa8);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf20 */
GEN_NOFRAME uint GEN_THISCALL F_00d2be90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2be90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  this_00 = (int *)F_00d1b7a0(*(undefined4 *)(this + 0xc) GEN_EDX_FWD);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0xe4))(this_00 GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x54))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x40);
  }
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50) GEN_EDX_ARG);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf22 */
GEN_FRAME uint GEN_THISCALL F_00d2bf00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2bf00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00d2c890((undefined *)this GEN_EDX_FWD,param_1);
  *(undefined4 *)(this + 0x80) = *puVar1;
  *(undefined4 *)(this + 0x84) = puVar1[1];
  *(undefined4 *)(this + 0x88) = puVar1[2];
  *(undefined4 *)(this + 0x8c) = puVar1[3];
  *(undefined4 *)(this + 0x90) = puVar1[4];
  *(undefined4 *)(this + 0x94) = puVar1[5];
  *(undefined4 *)(this + 0x98) = puVar1[6];
  *(undefined4 *)(this + 0x9c) = puVar1[7];
  *(undefined4 *)(this + 0xa0) = puVar1[8];
  *(undefined4 *)(this + 0xa4) = puVar1[9];
  *(undefined4 *)(this + 0xa8) = puVar1[10];
  this[0xac] = (undefined1)((byte)this[0xac] ^ (*(byte *)(puVar1 + 0xb) ^ (byte)this[0xac]) & 1);
  return (uint)(puVar1 + 0xc);
}

/* ref: FUN_00d2bf90 */
GEN_NOFRAME uint GEN_THISCALL F_00d2bf90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2bf90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float10 fVar1;
  int * this_00;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  F_00d2c8e0(this GEN_EDX_FWD,param_1,param_2);
  fVar1 = (float10)0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x1134694));
  *(undefined1 *)((int)this + 4) = 3;
  *(float *)((int)this + 0x80) = (float)fVar1;
  *(float *)((int)this + 0x84) = (float)fVar1;
  *(float *)((int)this + 0x88) = (float)fVar1;
  *(float *)((int)this + 0x8c) = (float)fVar1;
  *(float *)((int)this + 0x90) = (float)fVar1;
  *(float *)((int)this + 0x94) = (float)fVar1;
  *(float *)((int)this + 0x98) = (float)fVar1;
  *(float *)((int)this + 0x9c) = (float)fVar1;
  *(byte *)((int)this + 0xac) = *(byte *)((int)this + 0xac) | 1;
  *(float *)((int)this + 0xa8) = (float)fVar1;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  this_00 = (int *)F_00d1b7a0(*(undefined4 *)((int)this + 0xc) GEN_EDX_ARG);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0xe4))(this_00 GEN_EDX_ARG);
  if ((char)uVar2 != '\0') {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x54))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x40);
  }
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf19 */
GEN_NOFRAME byte GEN_THISCALL F_00d2c070(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2c070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  int * piVar6;
  uint uVar7;
  undefined * pLVar8;
  float10 fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  bVar5 = F_00d2c820(this GEN_EDX_FWD);
  if (bVar5 != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = this + 0xa0;
    pLVar8 = this + 0x80;
    (*(int *)(gen_frame + 0x8)) = 0;
    do {
      fVar9 = (float10)0;
      uVar2 = *(undefined4 *)pLVar8;
      *(float *)((int)((float *)(gen_frame + 0x2c)) + (*(int *)(gen_frame + 0x8))) = (float)fVar9;
      uVar3 = *(undefined4 *)(pLVar8 + 4);
      *(float *)((int)((float *)(gen_frame + 0x2c)) + (*(int *)(gen_frame + 0x8)) + 4) = (float)fVar9;
      *(float *)((int)((float *)(gen_frame + 0x2c)) + (*(int *)(gen_frame + 0x8)) + 8) = (float)fVar9;
      *(undefined4 *)((int)((float *)(gen_frame + 0x4c)) + (*(int *)(gen_frame + 0x8))) = uVar2;
      *(float *)((int)((float *)(gen_frame + 0x2c)) + (*(int *)(gen_frame + 0x8)) + 0xc) = (float)fVar9;
      uVar2 = *(undefined4 *)(pLVar8 + 8);
      *(undefined4 *)((int)((float *)(gen_frame + 0x4c)) + (*(int *)(gen_frame + 0x8)) + 4) = uVar3;
      *(float *)((int)((float *)(gen_frame + 0x2c)) + (*(int *)(gen_frame + 0x8))) = (float)(float10)1;
      uVar3 = *(undefined4 *)(pLVar8 + 0xc);
      *(undefined4 *)((int)((float *)(gen_frame + 0x4c)) + (*(int *)(gen_frame + 0x8)) + 8) = uVar2;
      iVar4 = *(int *)(*(undefined * PTR32 *)(gen_frame + 0xc));
      *(undefined4 *)((int)((float *)(gen_frame + 0x4c)) + (*(int *)(gen_frame + 0x8)) + 0xc) = uVar3;
      if ((iVar4 != 0) &&
         (piVar6 = (int *)F_00d1d1f0(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_ARG,iVar4), piVar6 != (int *)0x0)) {
        uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 4))(piVar6 GEN_EDX_ARG);
        if (uVar7 == 3) {
          ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x4c))(piVar6 GEN_EDX_ARG);
        }
        uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x10))(piVar6 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x10)));
        if ((char)uVar7 == '\x01') {
          F_00c34180((undefined4 *)((int)((float *)(gen_frame + 0x4c)) + (*(int *)(gen_frame + 0x8))) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x10)));
        }
      }
      (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)(gen_frame + 0xc)) + 4;
      (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 0x10;
      pLVar8 = pLVar8 + 0x10;
    } while ((*(int *)(gen_frame + 0x8)) < 0x20);
    fVar10 = ((float *)(gen_frame + 0x4c))[4] - ((float *)(gen_frame + 0x4c))[0];
    fVar11 = ((float *)(gen_frame + 0x4c))[5] - ((float *)(gen_frame + 0x4c))[1];
    fVar12 = ((float *)(gen_frame + 0x4c))[6] - ((float *)(gen_frame + 0x4c))[2];
    fVar13 = (*(float *)(gen_frame + 0x68)) - ((float *)(gen_frame + 0x4c))[3];
    (*(float *)(gen_frame + 0x10)) = fVar10;
    (*(float *)(gen_frame + 0x14)) = fVar11;
    (*(float *)(gen_frame + 0x18)) = fVar12;
    (*(float *)(gen_frame + 0x1c)) = fVar13;
    ((float *)(gen_frame + 0x4c))[4] = fVar10;
    ((float *)(gen_frame + 0x4c))[5] = fVar11;
    ((float *)(gen_frame + 0x4c))[6] = fVar12;
    (*(float *)(gen_frame + 0x68)) = fVar13;
    fVar1 = *(float *)(this + 0xa8);
    fVar10 = fVar10 * fVar1;
    fVar11 = fVar11 * fVar1;
    fVar12 = fVar12 * fVar1;
    fVar13 = fVar13 * fVar1;
    (*(float *)(gen_frame + 0x10)) = fVar10;
    (*(float *)(gen_frame + 0x14)) = fVar11;
    (*(float *)(gen_frame + 0x18)) = fVar12;
    (*(float *)(gen_frame + 0x1c)) = fVar13;
    ((float *)(gen_frame + 0x4c))[4] = fVar10;
    ((float *)(gen_frame + 0x4c))[5] = fVar11;
    ((float *)(gen_frame + 0x4c))[6] = fVar12;
    (*(float *)(gen_frame + 0x68)) = fVar13;
    fVar10 = fVar10 + ((float *)(gen_frame + 0x4c))[0];
    fVar11 = fVar11 + ((float *)(gen_frame + 0x4c))[1];
    fVar12 = fVar12 + ((float *)(gen_frame + 0x4c))[2];
    fVar13 = fVar13 + ((float *)(gen_frame + 0x4c))[3];
    (*(float *)(gen_frame + 0x10)) = fVar10;
    (*(float *)(gen_frame + 0x14)) = fVar11;
    (*(float *)(gen_frame + 0x18)) = fVar12;
    (*(float *)(gen_frame + 0x1c)) = fVar13;
    ((float *)(gen_frame + 0x4c))[4] = fVar10;
    *(float *)(this + 0x10) = fVar10;
    ((float *)(gen_frame + 0x4c))[5] = fVar11;
    *(float *)(this + 0x14) = fVar11;
    ((float *)(gen_frame + 0x4c))[6] = fVar12;
    *(float *)(this + 0x18) = fVar12;
    (*(float *)(gen_frame + 0x68)) = fVar13;
    *(float *)(this + 0x1c) = fVar13;
    F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70) GEN_EDX_ARG);
    return 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70) GEN_EDX_ARG);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf21 */
GEN_FRAME uint GEN_THISCALL F_00d2c280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  
  puVar1 = (undefined4 *)F_00d2ca20(this GEN_EDX_FWD,param_1,0x30);
  *puVar1 = *(undefined4 *)(this + 0x80);
  puVar1[1] = *(undefined4 *)(this + 0x84);
  puVar1[2] = *(undefined4 *)(this + 0x88);
  puVar1[3] = *(undefined4 *)(this + 0x8c);
  puVar1[4] = *(undefined4 *)(this + 0x90);
  puVar1[5] = *(undefined4 *)(this + 0x94);
  puVar1[6] = *(undefined4 *)(this + 0x98);
  puVar1[7] = *(undefined4 *)(this + 0x9c);
  puVar1[8] = *(undefined4 *)(this + 0xa0);
  puVar1[10] = *(undefined4 *)(this + 0xa8);
  *(byte *)(puVar1 + 0xb) = (byte)this[0xac] & 1;
  piVar2 = (int *)F_00d1b7a0(*(undefined4 *)(this + 0xc) GEN_EDX_ARG);
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xf4))(piVar2 GEN_EDX_ARG);
  if (uVar3 == 0) {
    F_00d2c340(puVar1 GEN_EDX_ARG,(uint)puVar1);
  }
  return (uint)(puVar1 + 0xc);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf1 */
GEN_NOFRAME uint F_00d2c330(void)
{
  GEN_ENTER(0xd2c330u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: FUN_00d2c340 */
GEN_FRAME byte GEN_THISCALL F_00d2c340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c340u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint * puVar2;
  uint * puVar3;
  uint * puVar4;
  int local_8;
  
  puVar3 = (uint *)(param_1 + 0xc);
  puVar4 = (uint *)(param_2 + 0x20);
  puVar2 = (uint *)(param_2 + 4);
  local_8 = 2;
  do {
    uVar1 = puVar3[-3];
    puVar2[-1] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *((uint *)GEN_TOP(((param_1 - param_2) + (int)puVar2)));
    *puVar2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = puVar3[-1];
    puVar2[1] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *puVar3;
    puVar2[2] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = *((uint *)GEN_TOP(((param_1 - param_2) + (int)puVar4)));
    *puVar4 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 4;
    puVar2 = puVar2 + 4;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  *(undefined1 *)(param_2 + 0x2c) = *(undefined1 *)(param_1 + 0x2c);
  *(undefined2 *)(param_2 + 0x2d) = 0;
  *(undefined1 *)(param_2 + 0x2f) = 0;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::LineListener::vf0 */
GEN_FRAME uint GEN_THISCALL F_00d2c3f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x1134694));
  F_00d2c6d0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointListener::vf5 */
GEN_FRAME byte GEN_THISCALL F_00d2c430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00d2c710((undefined *)this GEN_EDX_FWD,param_1);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_ARG);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointListener::vf6 */
GEN_FRAME byte GEN_THISCALL F_00d2c450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00d2c730((undefined *)this GEN_EDX_FWD,param_1);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_ARG);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointListener::vf8 */
GEN_FRAME byte GEN_THISCALL F_00d2c470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)(this + 0x70) = param_1;
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_FWD);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointListener::vf20 */
GEN_NOFRAME uint GEN_THISCALL F_00d2c4a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2c4a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  this_00 = (int *)F_00d1b7a0(*(undefined4 *)(this + 0xc) GEN_EDX_FWD);
  uVar1 = 0;
  if (this_00 != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0xe4))(this_00 GEN_EDX_ARG);
    if ((char)uVar1 != '\0') {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x54))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      uVar1 = F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x40);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50) GEN_EDX_ARG);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointListener::vf21 */
GEN_FRAME uint GEN_THISCALL F_00d2c520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d2ca20(this GEN_EDX_FWD,param_1,0x30);
  uVar1 = F_00d2c9a0((undefined *)this GEN_EDX_ARG,uVar1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointListener::vf22 */
GEN_FRAME uint GEN_THISCALL F_00d2c540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d2c890((undefined *)this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00d2c550 */
GEN_NOFRAME uint GEN_THISCALL F_00d2c550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2c550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  F_00d2c8e0(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x1134704));
  *(undefined1 *)((int)this + 4) = 2;
  this_00 = (int *)F_00d1b7a0(*(undefined4 *)((int)this + 0xc) GEN_EDX_ARG);
  if (this_00 != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0xe4))(this_00 GEN_EDX_ARG);
    if ((char)uVar1 != '\0') {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x54))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x40);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointListener::vf1 */
GEN_NOFRAME uint F_00d2c5e0(void)
{
  GEN_ENTER(0xd2c5e0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::PointListener::vf0 */
GEN_FRAME uint GEN_THISCALL F_00d2c5f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x1134704));
  F_00d2c6d0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00d2c6d0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00d2c6d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2c6d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[18])REFP(0x1134784));
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf2 */
GEN_FRAME byte GEN_THISCALL F_00d2c6e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c6e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (*(byte *)(in_ecx + 0x7c) ^ (byte)param_2) & 1;
  *(byte *)(in_ecx + 0x7c) = *(byte *)(in_ecx + 0x7c) ^ bVar1;
  return bVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf3 */
GEN_NOFRAME byte GEN_THISCALL F_00d2c700(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2c700u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x7c) & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf5 */
GEN_FRAME byte GEN_THISCALL F_00d2c710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  this[0x7c] = (undefined1)((byte)this[0x7c] | 2);
  F_004eb4e0(this + 0x30 GEN_EDX_FWD,param_1);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf6 */
GEN_FRAME byte GEN_THISCALL F_00d2c730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004eb4e0(this + 0x30 GEN_EDX_FWD,param_1);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf7 */
GEN_FRAME byte GEN_THISCALL F_00d2c750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_004eb4e0(param_1 GEN_EDX_FWD,this + 0x30);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf8 */
GEN_FRAME byte GEN_THISCALL F_00d2c770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c770u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(in_ecx + 0x70) = param_2;
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf9 */
GEN_NOFRAME uint GEN_THISCALL F_00d2c780(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2c780u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x70);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf10 */
GEN_FRAME uint GEN_THISCALL F_00d2c790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c790u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x74) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_00d2c7a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2c7a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x74);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf12 */
GEN_FRAME unsigned int GEN_THISCALL F_00d2c7b0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xd2c7b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x78) = param_2;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf13 */
GEN_NOFRAME float10 GEN_THISCALL F_00d2c7c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2c7c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x78);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf14 */
GEN_NOFRAME byte GEN_THISCALL F_00d2c7d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2c7d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf15 */
GEN_NOFRAME uint GEN_THISCALL F_00d2c7e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf16 */
GEN_NOFRAME byte GEN_THISCALL F_00d2c7f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf17 */
GEN_NOFRAME byte GEN_THISCALL F_00d2c800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf18 */
GEN_NOFRAME byte GEN_THISCALL F_00d2c810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf19 */
GEN_NOFRAME byte GEN_THISCALL F_00d2c820(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2c820u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x7c) & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf20 */
GEN_NOFRAME uint GEN_THISCALL F_00d2c830(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2c830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x54))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
  this_00 = (undefined *)F_00d1b7a0(*(undefined4 *)(this + 0xc) GEN_EDX_ARG);
  uVar1 = F_00d00af0(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x40);
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50) GEN_EDX_ARG);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf22 */
GEN_FRAME uint GEN_THISCALL F_00d2c890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  this[0x7c] = (undefined1)((byte)this[0x7c] ^ (*(byte *)(param_1 + 1) ^ (byte)this[0x7c]) & 1);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  return param_1 + 0x30;
}

/* ref: FUN_00d2c8e0 */
GEN_FRAME uint GEN_THISCALL F_00d2c8e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2c8e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 uVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x11347d4));
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(byte *)((int)this + 0x7c) = *(byte *)((int)this + 0x7c) | 1;
  *(undefined1 *)((int)this + 4) = 1;
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1097254);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)&REFG(undefined, 0x1097254);
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = uVar1;
  *(undefined4 *)((int)this + 0x1c) = uVar1;
  *(undefined4 *)((int)this + 0x20) = uVar1;
  *(undefined4 *)((int)this + 0x24) = uVar1;
  *(undefined4 *)((int)this + 0x28) = uVar1;
  *(undefined4 *)((int)this + 0x2c) = uVar1;
  uVar2 = F_004ec420(((undefined1 *)(gen_frame + 0xc)));
  F_004eb4e0((undefined *)((int)this + 0x30) GEN_EDX_ARG,uVar2);
  *(byte *)((int)this + 0x7c) = *(byte *)((int)this + 0x7c) | 2;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = *(undefined4 *)&REFG(undefined, 0x1097254);
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf4 */
GEN_FRAME byte GEN_THISCALL F_00d2c960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  
  F_004eb600(this + 0x30 GEN_EDX_FWD,((byte *)(gen_frame + 0xc)));
  *(undefined4 *)param_1 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 48));
  *(undefined4 *)(param_1 + 4) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 52));
  *(undefined4 *)(param_1 + 8) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 56));
  *(undefined4 *)(param_1 + 0xc) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 60));
  *(undefined4 *)(param_1 + 0xc) = GEN_FLT_TO(*(undefined4 *)(param_1 + 0xc), REFG(float, 0x1097250));
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf21 */
GEN_FRAME uint GEN_THISCALL F_00d2c9a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2c9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  
  *param_1 = this[4];
  param_1[1] = (undefined1)((byte)this[0x7c] & 1);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x70);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(this + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(this + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(this + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(this + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(this + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(this + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(this + 0x2c);
  piVar1 = (int *)F_00d1b7a0(*(undefined4 *)(this + 0xc) GEN_EDX_FWD);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xf4))(piVar1 GEN_EDX_ARG);
  if (uVar2 == 0) {
    F_00d2cb60(param_1 GEN_EDX_ARG,(uint)param_1);
  }
  return (uint)(param_1 + 0x30);
}

/* ref: FUN_00d2ca20 */
GEN_FRAME uint GEN_THISCALL F_00d2ca20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2ca20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort * puVar1;
  int * piVar2;
  uint uVar3;
  
  *param_1 = 5;
  param_1[1] = (short)param_2 + 0x10;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)((int)this + 8);
  piVar2 = (int *)F_00d1b7a0(*(undefined4 *)((int)this + 0xc) GEN_EDX_FWD);
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xf4))(piVar2 GEN_EDX_ARG);
  if (uVar3 == 0) {
    *param_1 = *param_1 << 8 | *param_1 >> 8;
    uVar3 = *(uint *)(param_1 + 2);
    param_1[1] = param_1[1] << 8 | param_1[1] >> 8;
    *(uint *)(param_1 + 2) =
         uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    puVar1 = param_1;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  return (uint)(param_1 + 8);
}

/* ref: SQEX::CDev::Engine::Sd::Layout::IListener::vf0 */
GEN_FRAME uint GEN_THISCALL F_00d2cac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2cac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x1134784));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00d2cb00 */
GEN_FRAME uint GEN_THISCALL F_00d2cb00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2cb00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  uint uVar1;
  ushort * puVar2;
  
  *param_1 = *(ushort *)((int)(uintptr_t)this) << 8 | *(ushort *)((int)(uintptr_t)this) >> 8;
  param_1[1] = *(ushort *)((int)this + 2) << 8 | *(ushort *)((int)this + 2) >> 8;
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(param_1 + 2) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  puVar2 = param_1;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  return 0;
}

/* ref: FUN_00d2cb60 */
GEN_FRAME uint GEN_THISCALL F_00d2cb60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2cb60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_2 + 0x10) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x14);
  *(uint *)(param_2 + 0x14) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x18);
  *(uint *)(param_2 + 0x18) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x1c);
  *(uint *)(param_2 + 0x1c) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x20);
  *(uint *)(param_2 + 0x20) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x24);
  *(uint *)(param_2 + 0x24) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_2 + 0x28) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 0x2c);
  *(uint *)(param_2 + 0x2c) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = *(uint *)(param_1 + 4);
  *(uint *)(param_2 + 4) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 1);
  *(undefined2 *)(param_2 + 2) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf1 */
GEN_NOFRAME uint F_00d2cc40(void)
{
  GEN_ENTER(0xd2cc40u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Layout::Listener::vf0 */
GEN_FRAME uint GEN_THISCALL F_00d2cc50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2cc50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x1134784));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00d2cc80 */
GEN_FRAME unsigned int F_00d2cc80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2cc80u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00d2cca0 */
GEN_NOFRAME byte F_00d2cca0(void)
{
  GEN_ENTER(0xd2cca0u, 0u, 0u, 0u, 0u);
  return REFG(undefined1, 0x15d9349);
}

/* ref: FUN_00d2ccc0 */
GEN_FRAME uint F_00d2ccc0(unsigned int gen_a0)
{
  GEN_ENTER(0xd2ccc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x15d938c) = param_1;
  return param_1;
}

/* ref: FUN_00d2ccd0 */
GEN_NOFRAME uint F_00d2ccd0(void)
{
  GEN_ENTER(0xd2ccd0u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d934c);
}

/* ref: FUN_00d2cce0 */
GEN_NOFRAME uint F_00d2cce0(void)
{
  GEN_ENTER(0xd2cce0u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d9350);
}

/* ref: FUN_00d2ccf0 */
GEN_NOFRAME uint F_00d2ccf0(void)
{
  GEN_ENTER(0xd2ccf0u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d9358);
}

/* ref: FUN_00d2cd00 */
GEN_NOFRAME uint F_00d2cd00(void)
{
  GEN_ENTER(0xd2cd00u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d9354);
}

/* ref: FUN_00d2cd10 */
GEN_FRAME byte F_00d2cd10(unsigned int gen_a0)
{
  GEN_ENTER(0xd2cd10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  REFG(undefined1, 0x15d934a) = (byte)param_1;
  return (byte)param_1;
}

/* ref: FUN_00d2cd50 */
GEN_FRAME unsigned int F_00d2cd50(unsigned int gen_a0)
{
  GEN_ENTER(0xd2cd50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xd0))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00d2cd90 */
GEN_FRAME unsigned int F_00d2cd90(unsigned int gen_a0)
{
  GEN_ENTER(0xd2cd90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    if (((char)param_1 != '\0') &&
       (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x124))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG), (int)uVar1 < 8)) {
      return;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xd8))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
  }
  if (REFG(int * PTR32, 0x15d9350) != (int *)0x0) {
    if ((char)param_1 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0x38))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,2);
      return;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0x38))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,1);
  }
  return;
}

/* ref: FUN_00d2cdf0 */
GEN_NOFRAME byte F_00d2cdf0(void)
{
  GEN_ENTER(0xd2cdf0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xdc))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG);
    return (byte)uVar1;
  }
  return 0;
}

/* ref: FUN_00d2ce10 */
GEN_FRAME unsigned int F_00d2ce10(unsigned int gen_a0)
{
  GEN_ENTER(0xd2ce10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xe0))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00d2cea0 */
GEN_FRAME unsigned int F_00d2cea0(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2cea0u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (REFG(int * PTR32, 0x15d9358) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9358) + 0xbc))))(REFG(int * PTR32, 0x15d9358) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_1),param_2);
  }
  return;
}

/* ref: FUN_00d2ced0 */
GEN_FRAME unsigned int F_00d2ced0(float gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2ced0u, gen_trace_f(gen_a0), gen_a1, gen_a2, 0u);
  float param_1 = (float)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (REFG(int * PTR32, 0x15d9358) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9358) + 0xc4))))
              (REFG(int * PTR32, 0x15d9358) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_1),param_2,param_3);
  }
  return;
}

/* ref: FUN_00d2cf00 */
GEN_FRAME unsigned int F_00d2cf00(float gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd2cf00u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  if (REFG(int * PTR32, 0x15d9358) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9358) + 0xc0))))
              (REFG(int * PTR32, 0x15d9358) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_1),(undefined4)gen_fl2bits(param_2),
               (undefined4)gen_fl2bits(param_3),param_4,param_5);
  }
  return;
}

/* ref: FUN_00d2cf40 */
GEN_FRAME uint F_00d2cf40(unsigned int gen_a0)
{
  GEN_ENTER(0xd2cf40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x15d935c) = param_1;
  return param_1;
}

/* ref: FUN_00d2cf50 */
GEN_FRAME uint F_00d2cf50(unsigned int gen_a0)
{
  GEN_ENTER(0xd2cf50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x15d9360) = param_1;
  return param_1;
}

/* ref: FUN_00d2cf60 */
GEN_FRAME uint F_00d2cf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2cf60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if (REFG(undefined * PTR32, 0x15d935c) != (code *)0x0) {
    uVar1 = ((code *)REFG(gen_code32, 0x15d935c))(param_1,param_2);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00d2cf80 */
GEN_FRAME uint F_00d2cf80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xd2cf80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  uint uVar1;
  
  if (REFG(undefined * PTR32, 0x15d9360) != (code *)0x0) {
    uVar1 = ((code *)REFG(gen_code32, 0x15d9360))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00d2cff0 */
GEN_NOFRAME double F_00d2cff0(void)
{
  GEN_ENTER(0xd2cff0u, 0u, 0u, 0u, 0u);
  return (double)*(float *)&REFG(undefined, 0x1134834);
}

/* ref: FUN_00d2d020 */
GEN_FRAME uint F_00d2d020(void)
{
  GEN_ENTER(0xd2d020u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x50050];
  char cVar1;
  undefined * pFVar2;
  char * pcVar3;
  uint uVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x50048)) = 0xd2d02d;
  (*(uint *)(gen_frame + 0x50048)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  F_00c48350(((char *)(gen_frame + 0x1000c)),0,0x3fffc);
  if (REFG(int * PTR32, 0x15d934c) == (int *)0x0) {
    F_00c4720f(((char *)(gen_frame + 0x1000c)),"Error:LostSoundDriver");
  }
  else {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x128))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,((char *)(gen_frame + 0x1000c)));
  }
  iVar5 = 0;
  F_00c4720f(((char *)(gen_frame + 0x50008)),"c:\\CdevSoundDebugLog%d.txt",0);
  pFVar2 = F_00c495d8(((char *)(gen_frame + 0x50008)),"r");
  while (pFVar2 != (undefined *)0x0) {
    F_00c49312(pFVar2);
    iVar5 = iVar5 + 1;
    F_00c4720f(((char *)(gen_frame + 0x50008)),"c:\\CdevSoundDebugLog%d.txt",iVar5);
    pFVar2 = F_00c495d8(((char *)(gen_frame + 0x50008)),"r");
  }
  pFVar2 = F_00c495d8(((char *)(gen_frame + 0x50008)),"wb");
  pcVar3 = ((char *)(gen_frame + 0x1000c));
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  F_00c4922b(((char *)(gen_frame + 0x1000c)),1,(int)pcVar3 - (int)(((char *)(gen_frame + 0x1000c)) + 1),pFVar2);
  uVar4 = F_00c49312(pFVar2);
  F_00c47745((*(uint *)(gen_frame + 0x50048)) ^ (uint)(uint)(gen_frame + 0x0) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00d2d180 */
GEN_FRAME uint F_00d2d180(unsigned int gen_a0)
{
  GEN_ENTER(0xd2d180u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  uint extraout_EAX = 0;
  int iVar2;
  ulonglong uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar3 = F_00427d90();
  iVar1 = (int)uVar3;
  iVar2 = param_1;
  if (param_1 < 0) {
    iVar2 = iVar1 - *(int *)&REFG(undefined, 0x15d9368);
  }
  if (REFG(char, 0x15d934a) != '\0') {
    *(int *)&REFG(undefined, 0x15d937c) = iVar2 >> 0x1f;
    *(int *)&REFG(undefined, 0x15d9378) = iVar2;
  }
  if ((REFG(int * PTR32, 0x15d9358) != (int *)0x0) && (REFG(int * PTR32, 0x15d9350) != (int *)0x0)) {
    *(ulonglong *)&REFG(undefined, 0x15d9368) = uVar3;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9358) + 4))))(REFG(int * PTR32, 0x15d9358) GEN_EDX_ARG,iVar2);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0x84))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,iVar2);
    F_00d1ba20(REFG(int * PTR32, 0x15d9358) GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0x88))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG);
    uVar3 = *(ulonglong *)&REFG(undefined, 0x15d9368);
    if (REFG(int * PTR32, 0x15d9354) != (int *)0x0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9354) + 0x18))))(REFG(int * PTR32, 0x15d9354) GEN_EDX_ARG,iVar1);
      uVar3 = *(ulonglong *)&REFG(undefined, 0x15d9368);
    }
  }
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    *(ulonglong *)&REFG(undefined, 0x15d9368) = uVar3;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x24))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,iVar2);
    uVar3 = *(ulonglong *)&REFG(undefined, 0x15d9368);
  }
  *(ulonglong *)&REFG(undefined, 0x15d9368) = uVar3;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX;
}

/* ref: FUN_00d2d250 */
GEN_NOFRAME unsigned int F_00d2d250(void)
{
  GEN_ENTER(0xd2d250u, 0u, 0u, 0u, 0u);
  ulonglong uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = CONCAT44(*(undefined4 *)&REFG(undefined, 0x15d9374),*(int *)&REFG(undefined, 0x15d9370));
  if (REFG(char, 0x15d934a) != '\0') {
    uVar1 = F_00427d90();
    *(int *)&REFG(undefined, 0x15d9380) = (int)uVar1 - *(int *)&REFG(undefined, 0x15d9370);
    *(int *)&REFG(undefined, 0x15d9384) = *(int *)&REFG(undefined, 0x15d9380) >> 0x1f;
  }
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    *(ulonglong *)&REFG(undefined, 0x15d9370) = uVar1;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x28))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG);
    uVar1 = *(ulonglong *)&REFG(undefined, 0x15d9370);
  }
  *(ulonglong *)&REFG(undefined, 0x15d9370) = uVar1;
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2d340 */
GEN_FRAME uint F_00d2d340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2d340u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x10))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00d2d390 */
GEN_FRAME uint F_00d2d390(unsigned int gen_a0)
{
  GEN_ENTER(0xd2d390u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xc))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00d2d3e0 */
GEN_FRAME uint F_00d2d3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2d3e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 8))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00d2d430 */
GEN_FRAME uint F_00d2d430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd2d430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x14))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00d2d480 */
GEN_FRAME uint F_00d2d480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd2d480u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  uint param_5 = (uint)gen_a4;
  uint uVar1;
  int iVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    iVar2 = param_4;
    if (param_4 == 0) {
      iVar2 = param_3;
    }
    uVar1 = param_5;
    if (param_5 < 2) {
      uVar1 = 2;
    }
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x14))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2,param_3,iVar2,uVar1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00d2d4f0 */
GEN_FRAME uint F_00d2d4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2d4f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x18))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2,param_3);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00d2d530 */
GEN_FRAME byte F_00d2d530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2d530u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (((char)param_2 == '\0') && (REFG(int * PTR32, 0x15d9350) != (int *)0x0)) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0xc0))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,param_1);
    if ((char)uVar1 == '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
      return 0;
    }
  }
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x1c))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (byte)uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 1;
}

/* ref: FUN_00d2d5b0 */
GEN_FRAME byte F_00d2d5b0(unsigned int gen_a0)
{
  GEN_ENTER(0xd2d5b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if ((REFG(int * PTR32, 0x15d934c) != (int *)0x0) && (REFG(int * PTR32, 0x15d9350) != (int *)0x0)) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x20))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
    if ((char)uVar1 != '\0') {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0xc0))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,param_1);
      if ((char)uVar1 != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
        return 1;
      }
    }
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 1;
}

/* ref: FUN_00d2d630 */
GEN_FRAME uint F_00d2d630(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd2d630u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  code * pcVar1;
  double dVar2;
  uint uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    pcVar1 = *((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x3c)));
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)&REFG(undefined, 0x1097254);
    (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)&REFG(undefined, 0x1097254);
    (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)&REFG(undefined, 0x1097254);
    (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097250)));
    (*pcVar1)(REFG(int * PTR32, 0x15d934c),((undefined1 *)(gen_frame + 0x18)),param_1,param_2,&(*(undefined4 *)(gen_frame + 0x8)),0,0,1);
    dVar2 = *(double *)&REFG(undefined, 0x1097260) * 0.0;
    (*(int *)(gen_frame + 0x28)) = (int)dVar2;
    F_00cbddc0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,param_3,(uint)&(*(int *)(gen_frame + 0x28)));
    F_00cbc4e0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,param_4);
    (*(int *)(gen_frame + 0x28)) = (int)dVar2;
    F_00cbdf90(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,(uint)&(*(int *)(gen_frame + 0x28)),0);
    uVar3 = F_00cbbff0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
    F_00cbbdb0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar3;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00d2d700 */
GEN_FRAME uint F_00d2d700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd2d700u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),(undefined1)param_4);
  (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),(undefined1)param_5);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) == (int *)0x0) {
    F_00cbbd70(param_1 GEN_EDX_ARG);
  }
  else {
    iVar1 = *REFG(int * PTR32, 0x15d934c);
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)&REFG(undefined, 0x1097254);
    (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)&REFG(undefined, 0x1097254);
    (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)&REFG(undefined, 0x1097254);
    (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097250)));
    ((code *)*(gen_code32 *)(iVar1 + 0x34))
              (REFG(int * PTR32, 0x15d934c),param_1,param_2,param_3,&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),0,0,(*(undefined4 *)(gen_frame + 0x0)));
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return param_1;
}

/* ref: FUN_00d2d7a0 */
GEN_FRAME uint F_00d2d7a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd2d7a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),(undefined1)param_3);
  (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),(undefined1)param_4);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) == (int *)0x0) {
    F_00cbbd70(param_1 GEN_EDX_ARG);
  }
  else {
    iVar1 = *REFG(int * PTR32, 0x15d934c);
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)&REFG(undefined, 0x1097254);
    (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)&REFG(undefined, 0x1097254);
    (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)&REFG(undefined, 0x1097254);
    (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097250)));
    ((code *)*(gen_code32 *)(iVar1 + 0x30))(REFG(int * PTR32, 0x15d934c),param_1,param_2,&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),0,0,(*(undefined4 *)(gen_frame + 0x0)));
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return param_1;
}

/* ref: FUN_00d2d830 */
GEN_FRAME uint F_00d2d830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd2d830u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x34))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,0,0,1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return param_1;
  }
  F_00cbbd70(param_1 GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00d2d8a0 */
GEN_FRAME uint F_00d2d8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd2d8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0xc)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0xc)), 1, 3),(undefined1)param_6);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) == (int *)0x0) {
    F_00cbbd70(param_1 GEN_EDX_ARG);
  }
  else {
    iVar1 = *REFG(int * PTR32, 0x15d934c);
    (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)&REFG(undefined, 0x1097254);
    (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)&REFG(undefined, 0x1097254);
    (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)&REFG(undefined, 0x1097254);
    (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097250)));
    ((code *)*(gen_code32 *)(iVar1 + 0x34))
              (REFG(int * PTR32, 0x15d934c),param_1,param_2,param_3,&(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0xc)),param_4,param_5,1);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return param_1;
}

/* ref: FUN_00d2d940 */
GEN_FRAME uint F_00d2d940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd2d940u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),(undefined1)param_5);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) == (int *)0x0) {
    F_00cbbd70(param_1 GEN_EDX_ARG);
  }
  else {
    iVar1 = *REFG(int * PTR32, 0x15d934c);
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)&REFG(undefined, 0x1097254);
    (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)&REFG(undefined, 0x1097254);
    (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)&REFG(undefined, 0x1097254);
    (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097250)));
    ((code *)*(gen_code32 *)(iVar1 + 0x30))(REFG(int * PTR32, 0x15d934c),param_1,param_2,&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),param_3,param_4,1);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c) GEN_EDX_ARG);
  return param_1;
}

/* ref: FUN_00d2d9e0 */
GEN_FRAME byte F_00d2d9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2d9e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x6c))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2,param_3);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (byte)uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00d2da30 */
GEN_FRAME unsigned int F_00d2da30(unsigned int gen_a0)
{
  GEN_ENTER(0xd2da30u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 local_10;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d9350) != (int *)0x0) {
    local_10 = (undefined4)
               (longlong)
               TRUNC((double)(float)((float10)*param_1 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                     *(double *)&REFG(undefined, 0x10912a8));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0xb4))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,local_10);
  }
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    local_10 = (undefined4)
               (longlong)
               TRUNC((double)(float)((float10)*param_1 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                     *(double *)&REFG(undefined, 0x10912a8));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x70))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,local_10);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2dae0 */
GEN_FRAME unsigned int F_00d2dae0(unsigned int gen_a0)
{
  GEN_ENTER(0xd2dae0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d9350) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0xb4))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,param_1);
  }
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x70))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2db30 */
GEN_NOFRAME byte F_00d2db30(void)
{
  GEN_ENTER(0xd2db30u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x74))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (byte)uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 1;
}

/* ref: FUN_00d2db70 */
GEN_FRAME unsigned int F_00d2db70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2db70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 local_10;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d9350) != (int *)0x0) {
    local_10 = (undefined4)
               (longlong)
               TRUNC((double)(float)((float10)*param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                     *(double *)&REFG(undefined, 0x10912a8));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0xbc))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,param_1,local_10);
  }
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    local_10 = (undefined4)
               (longlong)
               TRUNC((double)(float)((float10)*param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                     *(double *)&REFG(undefined, 0x10912a8));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x78))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,local_10);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2dc30 */
GEN_FRAME unsigned int F_00d2dc30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2dc30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0xbc))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,param_1,param_2);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x78))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2dc80 */
GEN_FRAME unsigned int F_00d2dc80(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2dc80u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 local_10;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    local_10 = (undefined4)
               (longlong)
               TRUNC((double)(float)((float10)*param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                     *(double *)&REFG(undefined, 0x10912a8));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x7c))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_1),local_10);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2dcf0 */
GEN_FRAME uint F_00d2dcf0(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2dcf0u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint extraout_EAX = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x7c))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_1),param_2);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX;
}

/* ref: FUN_00d2dd30 */
GEN_FRAME uint F_00d2dd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2dd30u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x40))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return param_1;
  }
  F_00cbbd70(param_1 GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00d2dd80 */
GEN_FRAME uint F_00d2dd80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2dd80u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x48))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return param_1;
  }
  F_00cbe380(param_1 GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00d2ddd0 */
GEN_FRAME uint F_00d2ddd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2ddd0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x4c))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return param_1;
  }
  F_00cbaed0(param_1 GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00d2de20 */
GEN_FRAME uint F_00d2de20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2de20u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x50))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return param_1;
  }
  F_00cbb8a0(param_1 GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00d2de70 */
GEN_FRAME uint F_00d2de70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2de70u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x54))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return param_1;
  }
  F_00cc6a90(param_1 GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00d2dec0 */
GEN_FRAME uint F_00d2dec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2dec0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x58))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return param_1;
  }
  F_00cc6a90(param_1 GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00d2df10 */
GEN_FRAME uint F_00d2df10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2df10u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x5c))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return param_1;
  }
  F_00cc6a90(param_1 GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00d2df60 */
GEN_FRAME uint F_00d2df60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2df60u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x60))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return param_1;
  }
  F_00cc6a90(param_1 GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00d2dfb0 */
GEN_FRAME uint F_00d2dfb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2dfb0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 100))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return param_1;
  }
  F_00cc6a90(param_1 GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00d2e000 */
GEN_FRAME uint F_00d2e000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2e000u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x68))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2,param_3);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return param_1;
  }
  F_00cc6a90(param_1 GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00d2e060 */
GEN_FRAME unsigned int F_00d2e060(unsigned int gen_a0)
{
  GEN_ENTER(0xd2e060u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x94))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2e0a0 */
GEN_FRAME unsigned int F_00d2e0a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd2e0a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x98))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2e0e0 */
GEN_FRAME unsigned int F_00d2e0e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd2e0e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x9c))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2e120 */
GEN_FRAME uint F_00d2e120(unsigned int gen_a0)
{
  GEN_ENTER(0xd2e120u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xac))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00d2e170 */
GEN_FRAME uint F_00d2e170(unsigned int gen_a0)
{
  GEN_ENTER(0xd2e170u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xb0))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00d2e1c0 */
GEN_FRAME uint F_00d2e1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2e1c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if ((REFG(int * PTR32, 0x15d934c) != (int *)0x0) && ((*(int *)&gen_a0) != 0)) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xb4))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,(*(int *)&gen_a0),param_2,param_3);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00d2e220 */
GEN_FRAME unsigned int F_00d2e220(unsigned int gen_a0)
{
  GEN_ENTER(0xd2e220u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 200))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2e2a0 */
GEN_FRAME unsigned int F_00d2e2a0(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2e2a0u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xf0))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_1),param_2);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2e2e0 */
GEN_FRAME float F_00d2e2e0(void)
{
  GEN_ENTER(0xd2e2e0u, 0u, 0u, 0u, 0u);
  float10 extraout_ST0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xf4))))(REFG(int * PTR32, 0x15d934c));
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (float)extraout_ST0;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return REFG(float, 0x1097250);
}

/* ref: FUN_00d2e330 */
GEN_FRAME unsigned int F_00d2e330(unsigned int gen_a0)
{
  GEN_ENTER(0xd2e330u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xf8))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2e370 */
GEN_FRAME unsigned int F_00d2e370(unsigned int gen_a0)
{
  GEN_ENTER(0xd2e370u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xe8))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2e3f0 */
GEN_FRAME uint F_00d2e3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2e3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x84))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00d2e4c0 */
GEN_FRAME unsigned int F_00d2e4c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd2e4c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  REFG(undefined4, 0x1350728) = param_1;
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2e4f0 */
GEN_NOFRAME uint F_00d2e4f0(void)
{
  GEN_ENTER(0xd2e4f0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = REFG(undefined4, 0x1350728);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00d2e560 */
GEN_FRAME unsigned int F_00d2e560(unsigned int gen_a0)
{
  GEN_ENTER(0xd2e560u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x108))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2e5a0 */
GEN_NOFRAME uint F_00d2e5a0(void)
{
  GEN_ENTER(0xd2e5a0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x10c))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 1;
}

/* ref: FUN_00d2e5f0 */
GEN_FRAME uint F_00d2e5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2e5f0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  ushort uVar1;
  ushort uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (*param_1 == 0x42444553) {
    uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP((*(ushort *)((int)param_1 + 0xe) + 0x20 + param_2 * 4 + (int)param_1))) + 0xc +
             (int)param_1)));
    uVar2 = *((ushort *)GEN_TOP((*(ushort *)((int)param_1 + 0xe) + 6 + (int)param_1)));
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (uint)uVar1 + (uint)uVar2 * 1000;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0xffffffff;
}

/* ref: FUN_00d2e650 */
GEN_FRAME uint F_00d2e650(unsigned int gen_a0)
{
  GEN_ENTER(0xd2e650u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  ushort uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (*param_1 == 0x42444553) {
    uVar1 = *((ushort *)GEN_TOP(((uint)*(ushort *)((int)param_1 + 0xe) + (int)param_1)));
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (uint)uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0xffffffff;
}

/* ref: FUN_00d2e6a0 */
GEN_FRAME unsigned int F_00d2e6a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd2e6a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xc0))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2e6e0 */
GEN_FRAME byte F_00d2e6e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd2e6e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xc4))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (byte)uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00d2e740 */
GEN_NOFRAME uint F_00d2e740(void)
{
  GEN_ENTER(0xd2e740u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00d2d180(0xffffffff);
  return uVar1;
}

/* ref: FUN_00d2e750 */
GEN_NOFRAME unsigned int F_00d2e750(void)
{
  GEN_ENTER(0xd2e750u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  
  puVar1 = REFG(undefined4 * PTR32, 0x15d9398);
  if (REFG(char, 0x15d9394) != '\0') {
    if (REFG(undefined4 * PTR32, 0x15d9398)[10] != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined4 * PTR32, 0x15d9398)[4] + 4))))(REFG(undefined4 * PTR32, 0x15d9398) + 4);
      *(undefined1 *)(puVar1 + 0x10) = 1;
      ((code *)*(gen_code32 *)(puVar1[4] + 4))(puVar1 + 4);
      F_004cf020(puVar1 + 4 GEN_EDX_ARG);
      puVar1[10] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined1 *)(puVar1 + 0x10) = 0;
    }
    puVar1 = REFG(undefined4 * PTR32, 0x15d9398);
    if (REFG(undefined4 * PTR32, 0x15d9398) != (undefined4 *)0x0) {
      if (REFG(undefined4 * PTR32, 0x15d9398)[10] != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined4 * PTR32, 0x15d9398)[4] + 4))))(REFG(undefined4 * PTR32, 0x15d9398) + 4);
        *(undefined1 *)(puVar1 + 0x10) = 1;
        ((code *)*(gen_code32 *)(puVar1[4] + 4))(puVar1 + 4);
        F_004cf020(puVar1 + 4 GEN_EDX_ARG);
        puVar1[10] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *(undefined1 *)(puVar1 + 0x10) = 0;
      }
      puVar1[4] = (*(undefined * PTR32 (*)[6])REFP(0x112f680));
      F_004cf880(puVar1 + 4 GEN_EDX_ARG);
      F_00406ad0(puVar1);
    }
    REFG(undefined4 * PTR32, 0x15d9398) = (undefined4 *)0x0;
    REFG(char, 0x15d9394) = '\0';
  }
  return;
}

/* ref: FUN_00d2e810 */
GEN_FRAME float F_00d2e810(unsigned int gen_a0)
{
  GEN_ENTER(0xd2e810u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  float fVar2;
  
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
  uVar1 = F_00cbced0(param_1 GEN_EDX_ARG);
  if (uVar1 != 0) {
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
    if (REFG(int * PTR32, 0x15d934c) == (int *)0x0) {
      F_00cbe380(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    }
    else {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x48))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),uVar1);
    }
    gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
    fVar2 = F_00cbeb40(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    (*(float *)(gen_frame + 0x18)) = fVar2;
    F_00cbe3b0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
    gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
    return (*(float *)(gen_frame + 0x18));
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return REFG(float, 0x1090708);
}

/* ref: FUN_00d2e8a0 */
GEN_FRAME uint F_00d2e8a0(void)
{
  GEN_ENTER(0xd2e8a0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int * piVar1;
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if ((REFG(int * PTR32, 0x15d9358) != (int *)0x0) && (REFG(undefined4, 0x15d9364) == 0)) {
    REFG(undefined4, 0x15d9364) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9358) + 8))))(REFG(int * PTR32, 0x15d9358) GEN_EDX_ARG,2,0xffffffff);
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9358) + 0x14))))(REFG(int * PTR32, 0x15d9358) GEN_EDX_ARG,REFG(undefined4, 0x15d9364))));
    if (piVar1 != (int *)0x0) {
      F_004ec420(((undefined1 *)(gen_frame + 0x8)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1 GEN_EDX_ARG,100);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG,1);
    }
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return extraout_EAX;
}

/* ref: FUN_00d2e940 */
GEN_FRAME unsigned int F_00d2e940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2e940u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if ((REFG(int * PTR32, 0x15d9358) != (int *)0x0) && (REFG(int, 0x15d9364) != 0)) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9358) + 0x14))))(REFG(int * PTR32, 0x15d9358) GEN_EDX_ARG,REFG(int, 0x15d9364))));
    if (piVar1 != (int *)0x0) {
      if ((char)param_2 != '\0') {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG,param_1);
        return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
      }
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_ARG,param_1);
    }
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2e9b0 */
GEN_FRAME uint F_00d2e9b0(unsigned int gen_a0)
{
  GEN_ENTER(0xd2e9b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = param_1;
  if (param_1 < 0) {
    iVar1 = REFG(int, 0x1350724);
    REFG(int, 0x1350724) = REFG(int, 0x1350724) + 1;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0x9c))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,iVar1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar2;
}

/* ref: FUN_00d2ea00 */
GEN_FRAME unsigned int F_00d2ea00(unsigned int gen_a0)
{
  GEN_ENTER(0xd2ea00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0xa8))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,param_1);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2ea30 */
GEN_FRAME unsigned int F_00d2ea30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2ea30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined * this;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0xa0))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,param_1)));
  if (this != (undefined *)0x0) {
    F_00d05170(this GEN_EDX_ARG,param_2 & 0xff,0xffffffff);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2ea80 */
GEN_FRAME uint F_00d2ea80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2ea80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined * this;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0xa0))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,param_1)));
  if (this != (undefined *)0x0) {
    uVar1 = F_00d07c70(this GEN_EDX_ARG,param_2,param_3,0,0,0,1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_3;
}

/* ref: FUN_00d2eaf0 */
GEN_FRAME uint F_00d2eaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2eaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * this;
  uint extraout_EAX = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0xa0))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,param_1)));
  if (this != (undefined *)0x0) {
    F_00d055c0(this GEN_EDX_ARG,param_2,1);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX;
}

/* ref: FUN_00d2eb30 */
GEN_FRAME unsigned int F_00d2eb30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2eb30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined * this;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (param_1 < 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0x7c))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,param_2,param_3);
    return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
  }
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0xa0))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,param_1)));
  if (this != (undefined *)0x0) {
    F_00d07430(this GEN_EDX_ARG,param_2,param_3);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2eba0 */
GEN_FRAME uint F_00d2eba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2eba0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0xa4))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,param_1,param_2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00d2ebf0 */
GEN_FRAME unsigned int F_00d2ebf0(unsigned int gen_a0)
{
  GEN_ENTER(0xd2ebf0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cc42f0(param_1);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2ec20 */
GEN_FRAME uint F_00d2ec20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2ec20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc2770(param_1,param_2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00d2ec60 */
GEN_FRAME byte F_00d2ec60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2ec60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = F_00cc58a0(param_1,param_2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00d2eca0 */
GEN_FRAME uint F_00d2eca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd2eca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c) GEN_EDX_ARG);
  return extraout_EAX;
}

/* ref: FUN_00d2ed40 */
GEN_FRAME unsigned int F_00d2ed40(void)
{
  GEN_ENTER(0xd2ed40u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x98))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,0);
  }
  gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
  (*(int *)(gen_frame + 0x8)) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
  F_00d2da30(&(*(int *)(gen_frame + 0x8)));
  F_00ce3b10(0);
  return (uint)(gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00d2edb0 */
GEN_FRAME float10 F_00d2edb0(float gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2edb0u, gen_trace_f(gen_a0), gen_a1, gen_a2, 0u);
  float param_1 = (float)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  uVar7 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(uint *)(gen_frame + 0x38)) = uVar7;
  fVar8 = (float10)REFG(float, 0x1097250);
  if (fVar8 <= (float10)param_1) {
    F_00c47745(uVar7 ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
    return fVar8;
  }
  fVar9 = (float10)*(float *)&REFG(undefined, 0x1097254);
  if ((float10)param_1 <= fVar9) {
    F_00c47745(uVar7 ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
    return fVar9;
  }
  uVar7 = param_3;
  if (param_3 == 0) {
    uVar7 = F_00d2e5a0();
    fVar9 = (float10)*(float *)&REFG(undefined, 0x1097254);
    fVar8 = (float10)REFG(float, 0x1097250);
  }
  fVar10 = (float10)param_1;
  switch((unsigned int)(uintptr_t)(uVar7)) {
  case 1: ;
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
    return (float10)(float)(fVar10 * fVar10);
  case 2: ;
switchD_00d2ee31_caseD_2: ;
    ((float *)(gen_frame + 0xc))[0] = (float)fVar8;
    ((float *)(gen_frame + 0xc))[1] = gen_bits2f(*(undefined4 *)&REFG(undefined, 0x1134a70));
    ((float *)(gen_frame + 0xc))[2] = gen_bits2f(REFG(float, 0x10ac168));
    ((float *)(gen_frame + 0xc))[3] = gen_bits2f(REFG(float, 0x1094808));
    (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)&REFG(undefined, 0x1134a6c);
    (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094884)));
    (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10add7c)));
    (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b2cbc)));
    (*(undefined4 *)(gen_frame + 0x2c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10add80)));
    (*(undefined4 *)(gen_frame + 0x30)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x110e278)));
    (*(float *)(gen_frame + 0x34)) = (float)fVar9;
    fVar8 = (float10)REFG(double, 0x10944b8);
    iVar5 = (int)(fVar10 * fVar8);
    iVar6 = -iVar5;
    fVar1 = ((float *)(gen_frame + 0xc))[(int)(iVar6 + 9)];
    fVar2 = ((float *)(gen_frame + 0xc))[(int)(iVar6 + 10)];
    fVar3 = ((float *)(gen_frame + 0xc))[(int)(iVar6 + 10)];
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
    return (float10)((float)GEN_TOF((((float10)fVar1 - (float10)fVar2) * (fVar10 * fVar8 - (float10)iVar5) +
                           (float10)fVar3)));
  case 4: ;
    fVar8 = ((float10)GEN_TOD(GEN_X87MATH(fVar10,3)));
    fVar8 = ((float10)GEN_TOD(pow((float10)REFG(double, 0x10944b8),
                                 (float10)((float)GEN_TOF(((float10)(float)((float10)(float)fVar8 *
                                                                  (float10)*(double *)&REFG(undefined, 0x1134a78))
                                                 / (float10)*(double *)&REFG(undefined, 0x1088120)))))));
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
    return (float10)(float)fVar8;
  case 5: ;
    if ((char)param_2 != '\0') goto switchD_00d2ee31_caseD_2;
  default: ;
    break;
  case 6: ;
    if ((char)param_2 == '\0') {
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
      return (float10)((float)GEN_TOF(((fVar10 + fVar10) - fVar10 * fVar10)));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return fVar10;
}

/* ref: FUN_00d2efa0 */
GEN_NOFRAME unsigned int F_00d2efa0(void)
{
  GEN_ENTER(0xd2efa0u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  
  puVar1 = REFG(undefined4 * PTR32, 0x15d9390);
  if (REFG(char, 0x15d934b) != '\0') {
    if (REFG(undefined4 * PTR32, 0x15d9390)[10] != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined4 * PTR32, 0x15d9390)[4] + 4))))(REFG(undefined4 * PTR32, 0x15d9390) + 4);
      *(undefined1 *)(puVar1 + 0x10) = 1;
      ((code *)*(gen_code32 *)(puVar1[4] + 4))(puVar1 + 4);
      F_004cf020(puVar1 + 4 GEN_EDX_ARG);
      puVar1[10] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined1 *)(puVar1 + 0x10) = 0;
    }
    puVar1 = REFG(undefined4 * PTR32, 0x15d9390);
    if (REFG(undefined4 * PTR32, 0x15d9390) != (undefined4 *)0x0) {
      if (REFG(undefined4 * PTR32, 0x15d9390)[10] != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined4 * PTR32, 0x15d9390)[4] + 4))))(REFG(undefined4 * PTR32, 0x15d9390) + 4);
        *(undefined1 *)(puVar1 + 0x10) = 1;
        ((code *)*(gen_code32 *)(puVar1[4] + 4))(puVar1 + 4);
        F_004cf020(puVar1 + 4 GEN_EDX_ARG);
        puVar1[10] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        *(undefined1 *)(puVar1 + 0x10) = 0;
      }
      puVar1[4] = (*(undefined * PTR32 (*)[6])REFP(0x112f680));
      F_004cf880(puVar1 + 4 GEN_EDX_ARG);
      F_00406ad0(puVar1);
    }
    REFG(undefined4 * PTR32, 0x15d9390) = (undefined4 *)0x0;
    REFG(char, 0x15d934b) = '\0';
  }
  return;
}

/* ref: FUN_00d2f060 */
GEN_FRAME uint F_00d2f060(unsigned int gen_a0)
{
  GEN_ENTER(0xd2f060u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  F_00d2e750();
  F_00d2efa0();
  if ((char)param_1 != '\0') {
    uVar1 = F_00ce3530();
    return uVar1;
  }
  if (REFG(undefined4 * PTR32, 0x15d9358) != (undefined4 *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d9358))))(REFG(undefined4 * PTR32, 0x15d9358) GEN_EDX_ARG,1);
    REFG(undefined4 * PTR32, 0x15d9358) = (undefined4 *)0x0;
    REFG(undefined4, 0x15d9364) = 0;
  }
  if (REFG(undefined4 * PTR32, 0x15d9354) != (undefined4 *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d9354))))(REFG(undefined4 * PTR32, 0x15d9354) GEN_EDX_ARG,1);
    REFG(undefined4 * PTR32, 0x15d9354) = (undefined4 *)0x0;
  }
  if (REFG(undefined4 * PTR32, 0x15d9350) != (undefined4 *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d9350))))(REFG(undefined4 * PTR32, 0x15d9350) GEN_EDX_ARG,1);
    REFG(undefined4 * PTR32, 0x15d9350) = (undefined4 *)0x0;
  }
  if (REFG(undefined4 * PTR32, 0x15d934c) != (undefined4 *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d934c))))(REFG(undefined4 * PTR32, 0x15d934c) GEN_EDX_ARG,1);
    REFG(undefined4 * PTR32, 0x15d934c) = (undefined4 *)0x0;
  }
  F_00ccbb70();
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(undefined1, 0x15d7798) GEN_EDX_ARG);
  }
  uVar1 = F_00cca6f0(&REFG(undefined1, 0x15d7798) GEN_EDX_ARG);
  if (REFG(int, 0x15d9388) != 0) {
    REFG(int, 0x15d9388) = 0;
  }
  return uVar1;
}

/* ref: FUN_00d2f120 */
GEN_NOFRAME uint F_00d2f120(void)
{
  GEN_ENTER(0xd2f120u, 0u, 0u, 0u, 0u);
  uint uVar1;
  ulonglong uVar2;
  
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x98))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,0);
  }
  gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d9350) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0xb4))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,0);
  }
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x70))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,0);
  }
  gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
  F_00ce3b10(0);
  F_00d2e750();
  F_00d2efa0();
  while( true ) {
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
    if (REFG(int * PTR32, 0x15d934c) == (int *)0x0) break;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x74))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG);
    gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
    if ((char)uVar1 != '\0') goto LAB_00d2f270;
    F_00d2d180(0xffffffff);
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
    uVar2 = *(ulonglong *)&REFG(undefined, 0x15d9370);
    if (REFG(char, 0x15d934a) != '\0') {
      uVar2 = F_00427d90();
      *(int *)&REFG(undefined, 0x15d9380) = (int)uVar2 - *(int *)&REFG(undefined, 0x15d9370);
      *(int *)&REFG(undefined, 0x15d9384) = *(int *)&REFG(undefined, 0x15d9380) >> 0x1f;
    }
    if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
      *(ulonglong *)&REFG(undefined, 0x15d9370) = uVar2;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x28))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG);
      uVar2 = *(ulonglong *)&REFG(undefined, 0x15d9370);
    }
    *(ulonglong *)&REFG(undefined, 0x15d9370) = uVar2;
    gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
    if (REFG(int * PTR32, 0x15d9350) != (int *)0x0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0xb4))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,0);
    }
    if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x70))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,0);
    }
    gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
    F_004cee60(1);
  }
  gen_imp_LeaveCriticalSection(0,&REFG(undefined, 0x15d939c));
LAB_00d2f270: ;
  uVar1 = F_00d2f060(0);
  return uVar1;
}

/* ref: FUN_00d2f280 */
GEN_FRAME unsigned int F_00d2f280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2f280u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (REFG(char, 0x15d934b) == '\0') {
    piVar1 = (int *)F_004042b0();
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,0x48,0)));
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      F_004cefe0(puVar2 + 4 GEN_EDX_ARG);
      puVar2[10] = 0;
      puVar2[4] = (*(undefined * PTR32 (*)[6])REFP(0x112f680));
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      *(undefined1 *)(puVar2 + 0x10) = 0;
    }
    *puVar2 = (*(undefined4 *)&gen_args[0]);
    puVar2[2] = 0;
    puVar2[1] = ((code *)REFP(0xd2d250));
    puVar2[0xc] = ((code *)REFP(0xd2fb80));
    puVar2[0xd] = puVar2;
    puVar2[0xe] = ((code *)REFP(0xd2fae0));
    REFG(undefined4 * PTR32, 0x15d9390) = puVar2;
    puVar2[0xf] = 0;
    uVar3 = F_004cf9e0(puVar2 + 4 GEN_EDX_ARG,0,-(uint)((*(uint *)&gen_args[1]) != 0xffff) & (*(uint *)&gen_args[1]),0x10000,
                         "CDevSd MSECHandler");
    puVar2[10] = uVar3;
    REFG(char, 0x15d934b) = '\x01';
  }
  return;
}

/* ref: FUN_00d2f350 */
GEN_FRAME unsigned int F_00d2f350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2f350u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (REFG(char, 0x15d9394) == '\0') {
    piVar1 = (int *)F_004042b0();
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,0x48,0)));
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      F_004cefe0(puVar2 + 4 GEN_EDX_ARG);
      puVar2[10] = 0;
      puVar2[4] = (*(undefined * PTR32 (*)[6])REFP(0x112f680));
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      *(undefined1 *)(puVar2 + 0x10) = 0;
    }
    *puVar2 = (*(undefined4 *)&gen_args[0]);
    puVar2[2] = 0;
    puVar2[1] = ((code *)REFP(0xd2e740));
    puVar2[0xc] = ((code *)REFP(0xd2fb80));
    puVar2[0xd] = puVar2;
    puVar2[0xe] = ((code *)REFP(0xd2fae0));
    REFG(undefined4 * PTR32, 0x15d9398) = puVar2;
    puVar2[0xf] = 0;
    uVar3 = F_004cf9e0(puVar2 + 4 GEN_EDX_ARG,0,-(uint)((*(uint *)&gen_args[1]) != 0xffff) & (*(uint *)&gen_args[1]),0x10000,
                         "CDevSd VSYNCHandler");
    puVar2[10] = uVar3;
    REFG(char, 0x15d9394) = '\x01';
  }
  return;
}

/* ref: FUN_00d2f420 */
GEN_FRAME uint F_00d2f420(unsigned int gen_a0)
{
  GEN_ENTER(0xd2f420u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  byte bVar1;
  undefined * pvVar2;
  undefined4 uVar3;
  
  if (0x20 < *(int *)(param_1 + 0x38) + 1) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xd2eca0));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x11348b8),&REFG(undefined, 0x11348b0),"SoundSystem.cpp",0x144,
                    "SQEX::CDev::Engine::Sd::SoundSystem::CreateCore");
  }
  if (REFG(int * PTR32, 0x15d934c) == (int *)0x0) {
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x50,"CDev.Engine.Sd.SoundSystem",0,0,0x10)));
    if (pvVar2 == (undefined *)0x0) {
      REFG(int * PTR32, 0x15d934c) = (int *)0x0;
    }
    else {
      REFG(int * PTR32, 0x15d934c) = (int *)F_01054f70(pvVar2 GEN_EDX_ARG,param_1);
    }
    *(ulonglong *)&REFG(undefined, 0x15d9368) = F_00427d90();
  }
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
  }
  if (REFG(char, 0x15d7798) == '\0') {
    uVar3 = *(undefined4 *)(param_1 + 0x30);
  }
  else {
    uVar3 = REFG(undefined4, 0x15d8614);
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
      uVar3 = REFG(undefined4, 0x15d8614);
    }
  }
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d934c) != (int *)0x0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 0x108))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG,uVar3);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (REFG(int * PTR32, 0x15d9350) == (int *)0x0) {
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x328,"CDev.Engine.Sd.SoundSystem",0,0,0x10)));
    if (pvVar2 == (undefined *)0x0) {
      REFG(int * PTR32, 0x15d9350) = (int *)0x0;
    }
    else {
      REFG(int * PTR32, 0x15d9350) = (int *)F_00d02ee0(pvVar2 GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x20),
                                         *(undefined4 *)(param_1 + 0x24),
                                         *(undefined4 *)(param_1 + 0x28));
    }
  }
  if (REFG(int * PTR32, 0x15d9354) == (int *)0x0) {
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x3c,"CDev.Engine.Sd.SoundSystem",0,0,0x10)));
    if (pvVar2 == (undefined *)0x0) {
      REFG(int * PTR32, 0x15d9354) = (int *)0x0;
    }
    else {
      REFG(int * PTR32, 0x15d9354) = (int *)F_01056680(pvVar2 GEN_EDX_ARG);
    }
  }
  if (REFG(int * PTR32, 0x15d9358) == (int *)0x0) {
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x3b4,"CDev.Engine.Sd.SoundSystem",0,0,0x10)));
    if (pvVar2 == (undefined *)0x0) {
      REFG(int * PTR32, 0x15d9358) = (int *)0x0;
    }
    else {
      REFG(int * PTR32, 0x15d9358) = (int *)F_00d1e280(pvVar2 GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x2c));
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0x8c))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,REFG(int * PTR32, 0x15d934c));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0x94))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,REFG(int * PTR32, 0x15d9358));
  F_00d1b7b0(REFG(int * PTR32, 0x15d9358) GEN_EDX_ARG,REFG(int * PTR32, 0x15d9350));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d934c) + 4))))(REFG(int * PTR32, 0x15d934c) GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9354) + 8))))(REFG(int * PTR32, 0x15d9354) GEN_EDX_ARG,REFG(int * PTR32, 0x15d9358));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9354) + 4))))(REFG(int * PTR32, 0x15d9354) GEN_EDX_ARG,REFG(int * PTR32, 0x15d934c));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0x1c))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,2);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9358) + 0x6c))))(REFG(int * PTR32, 0x15d9358) GEN_EDX_ARG,2);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0x28))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d9350) + 0x38))))(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x34));
  bVar1 = *(byte *)(param_1 + 0x1bd);
  F_00d00980(REFG(int * PTR32, 0x15d9350) GEN_EDX_ARG,(uint)bVar1);
  *(undefined4 *)&REFG(undefined, 0x135071c) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)&REFG(undefined, 0x1350720) = *(undefined4 *)(param_1 + 0x1c);
  return (uint)bVar1;
}

/* ref: FUN_00d2f740 */
GEN_FRAME uint F_00d2f740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2f740u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x1d0];
  byte bVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x1c8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1cc);
  F_00ccff00(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,param_2);
  bVar1 = F_00ccbd20(((undefined1 *)(gen_frame + 0x4)));
  if (bVar1 == 1) {
    uVar2 = F_00d2f420(((undefined1 *)(gen_frame + 0x4)));
  }
  else {
    uVar2 = F_00d2f420(((undefined1 *)(gen_frame + 0x4)));
    REFG(undefined1, 0x15d8bd9) = 1;
    REFG(undefined1, 0x15d9349) = 1;
  }
  F_00ccf610(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x1c8)) ^ (uint)(uint)(gen_frame + 0x1cc) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00d2f7c0 */
GEN_FRAME byte F_00d2f7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2f7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d2f740(param_1,param_2);
  REFG(undefined1, 0x15d8bd9) = 1;
  REFG(undefined1, 0x15d9349) = 1;
  return 1;
}

/* ref: FUN_00d2f7f0 */
GEN_FRAME uint F_00d2f7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2f7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x1d0];
  byte bVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x1c8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1cc);
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(undefined1, 0x15d7798) GEN_EDX_ARG);
  }
  uVar2 = F_00cca6d0(&REFG(undefined1, 0x15d7798) GEN_EDX_ARG,param_1);
  if (uVar2 != 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(undefined1, 0x15d7798) GEN_EDX_ARG);
    }
    F_00cca900(&REFG(undefined1, 0x15d7798) GEN_EDX_ARG);
  }
  if (param_2 != 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(undefined1, 0x15d7798) GEN_EDX_ARG);
    }
    uVar2 = F_00cca910(&REFG(undefined1, 0x15d7798) GEN_EDX_ARG,param_2);
    if (uVar2 != 0) {
      if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
        F_00ccaf80(&REFG(undefined1, 0x15d7798) GEN_EDX_ARG);
      }
      F_00cca790(&REFG(undefined1, 0x15d7798) GEN_EDX_ARG);
    }
  }
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(undefined1, 0x15d7798) GEN_EDX_ARG);
  }
  REFG(undefined1, 0x15d7798) = 1;
  F_00ccff00(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,0);
  bVar1 = F_00ccbd20(((undefined1 *)(gen_frame + 0x4)));
  if (bVar1 == 1) {
    uVar2 = F_00d2f420(((undefined1 *)(gen_frame + 0x4)));
  }
  else {
    uVar2 = F_00d2f420(((undefined1 *)(gen_frame + 0x4)));
    REFG(undefined1, 0x15d8bd9) = 1;
    REFG(undefined1, 0x15d9349) = 1;
  }
  F_00ccf610(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x1c8)) ^ (uint)(uint)(gen_frame + 0x1cc) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00d2f930 */
GEN_FRAME byte GEN_THISCALL F_00d2f930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2f930u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00d2fa60 */
GEN_FRAME uint F_00d2fa60(unsigned int gen_a0)
{
  GEN_ENTER(0xd2fa60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_004042b0();
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,param_1,0);
  return uVar2;
}

/* ref: FUN_00d2fa80 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00d2fa80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2fa80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 0x28) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x10) + 4))))((int)this + 0x10);
    *(undefined1 *)((int)this + 0x40) = 1;
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x10) + 4))))((int)this + 0x10);
    F_004cf020((undefined *)((int)this + 0x10) GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined1 *)((int)this + 0x40) = 0;
  }
  return;
}

/* ref: FUN_00d2fac0 */
GEN_FRAME unsigned int GEN_STDCALL F_00d2fac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd2fac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  return (uint)(gen_imp_SetEvent((HANDLE)*param_3));
}

/* ref: FUN_00d2fae0 */
GEN_FRAME unsigned int GEN_THISCALL F_00d2fae0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2fae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  HANDLE pvVar2;
  uint MVar3;
  
  pvVar2 = gen_imp_CreateEventA((GEN_LPANY)0x0,0,0,(LPCSTR)0x0);
  (*(HANDLE *)(gen_frame + 0x18)) = pvVar2;
  gen_imp_timeGetDevCaps(&(*(undefined8 *)(gen_frame + 0xc)),8);
  gen_imp_timeBeginPeriod((*(UINT *)((char *)&((*(undefined8 *)(gen_frame + 0xc))))));
  MVar3 = gen_imp_timeSetEvent(*(UINT *)this,0,((code *)REFP(0xd2fac0)),(DWORD_PTR)&(*(HANDLE *)(gen_frame + 0x18)),1);
  (*(UINT *)(gen_frame + 0x14)) = MVar3;
  cVar1 = *(char *)((int)this + 0x40);
  while (cVar1 == '\0') {
    gen_imp_WaitForSingleObject((*(HANDLE *)(gen_frame + 0x18)),0xffffffff);
    ((code *)*(gen_code32 *)((int)this + 4))(*(undefined4 *)((int)this + 8));
    cVar1 = *(char *)((int)this + 0x40);
  }
  gen_imp_timeKillEvent((*(UINT *)(gen_frame + 0x14)));
  gen_imp_timeEndPeriod((*(UINT *)((char *)&((*(undefined8 *)(gen_frame + 0xc))))));
  return (uint)(gen_imp_CloseHandle((*(HANDLE *)(gen_frame + 0x18))));
}

/* ref: FUN_00d2fb80 */
GEN_FRAME uint F_00d2fb80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xd2fb80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8);
  return uVar1;
}

/* ref: FUN_00d2fb90 */
GEN_FRAME uint F_00d2fb90(unsigned int gen_a0)
{
  GEN_ENTER(0xd2fb90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(undefined4, 0x15d778c) = F_004042b0();
  }
  if (param_1 != 0) {
    REFG(undefined4, 0x15d778c) = param_1;
  }
  return param_1;
}

/* ref: FUN_00d2fbc0 */
GEN_NOFRAME uint GEN_THISCALL F_00d2fbc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2fbc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  F_004cefe0((undefined *)((int)this + 0x10) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x112f680));
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined1 *)((int)this + 0x40) = 0;
  return (uint)this;
}

/* ref: FUN_00d2fc00 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00d2fc00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd2fc00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 0x28) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x10) + 4))))((int)this + 0x10);
    *(undefined1 *)((int)this + 0x40) = 1;
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x10) + 4))))((int)this + 0x10);
    F_004cf020((undefined *)((int)this + 0x10) GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined1 *)((int)this + 0x40) = 0;
  }
  *(undefined4 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x112f680));
  F_004cf880((undefined4 *)((int)this + 0x10) GEN_EDX_ARG);
  return;
}

/* ref: FUN_00d2fc50 */
GEN_FRAME uint GEN_THISCALL F_00d2fc50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2fc50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0xd2fb80));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00d2fc70 */
GEN_FRAME uint GEN_THISCALL F_00d2fc70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2fc70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (*(int *)((int)this + 0x28) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x10) + 4))))((int)this + 0x10);
    *(undefined1 *)((int)this + 0x40) = 1;
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x10) + 4))))((int)this + 0x10);
    F_004cf020((undefined *)((int)this + 0x10) GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined1 *)((int)this + 0x40) = 0;
  }
  *(undefined4 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x112f680));
  F_004cf880((undefined4 *)((int)this + 0x10) GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00d2fce0 */
GEN_FRAME uint GEN_THISCALL F_00d2fce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd2fce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  char * pcVar1;
  uint uVar2;
  
  *(gen_code32 *)((int)this + 0x20) = ((code *)REFP(0xd2fb80));
  *(undefined4 *)((int)this + 0x24) = param_1;
  *(undefined4 *)((int)this + 0x28) = param_2;
  *(undefined4 *)((int)this + 0x2c) = 0;
  pcVar1 = (char *)*param_3;
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "sound";
  }
  uVar2 = F_004cf9e0(this GEN_EDX_ARG,0,param_3[2],param_3[1],pcVar1);
  *(uint *)((int)this + 0x18) = uVar2;
  return uVar2;
}

/* ref: FUN_00d2fd30 */
GEN_FRAME uint GEN_THISCALL F_00d2fd30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd2fd30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char * pcVar1;
  uint uVar2;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 4) = param_2;
  *(gen_code32 *)((int)this + 0x30) = ((code *)REFP(0xd2fb80));
  *(undefined * PTR32 *)((int)this + 0x34) = this;
  *(gen_code32 *)((int)this + 0x38) = ((code *)REFP(0xd2fae0));
  *(undefined4 *)((int)this + 0x3c) = 0;
  pcVar1 = (char *)*param_4;
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "sound";
  }
  uVar2 = F_004cf9e0((undefined *)((int)this + 0x10) GEN_EDX_ARG,0,param_4[2],param_4[1],pcVar1);
  *(uint *)((int)this + 0x28) = uVar2;
  return uVar2;
}

/* ref: FUN_00d2fda0 */
GEN_FRAME uint GEN_THISCALL F_00d2fda0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2fda0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0xc) + param_2;
}

/* ref: FUN_00d2fdb0 */
GEN_FRAME uint GEN_THISCALL F_00d2fdb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2fdb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = param_2;
  return param_2;
}

/* ref: FUN_00d2fdd0 */
GEN_FRAME uint GEN_THISCALL F_00d2fdd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2fdd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0xc);
  *(undefined4 *)(uVar1 + 4 + param_1) = 0;
  *(undefined4 *)(uVar1 + param_1) = 0;
  *(undefined * PTR32 *)(uVar1 + 8 + param_1) = this;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  *(int *)this = param_1;
  *(int *)((int)this + 4) = param_1;
  return uVar1;
}

/* ref: FUN_00d2fe00 */
GEN_FRAME uint GEN_THISCALL F_00d2fe00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2fe00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)((int)this + 0xc);
  iVar2 = *(int *)((int)this + 4);
  *(undefined4 *)(uVar1 + 4 + param_1) = 0;
  *(undefined * PTR32 *)(uVar1 + 8 + param_1) = this;
  if (iVar2 != 0) {
    *(int *)(uVar1 + param_1) = iVar2;
    uVar1 = *(uint *)((int)this + 0xc);
    *((int *)GEN_TOP((uVar1 + 4 + *(int *)((int)this + 4)))) = param_1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(int *)((int)this + 4) = param_1;
    return uVar1;
  }
  *(undefined4 *)(uVar1 + param_1) = 0;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  *(int *)this = param_1;
  *(int *)((int)this + 4) = param_1;
  return uVar1;
}

/* ref: FUN_00d2fe50 */
GEN_FRAME uint GEN_THISCALL F_00d2fe50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2fe50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)((int)this + 0xc);
  iVar2 = *(int *)this;
  *(undefined4 *)(uVar1 + param_1) = 0;
  if (iVar2 != 0) {
    *(undefined4 *)(uVar1 + 4 + param_1) = *(undefined4 *)this;
    *(undefined * PTR32 *)(uVar1 + 8 + param_1) = this;
    uVar1 = *(uint *)((int)this + 0xc);
    *(int *)(uVar1 + *(int *)this) = param_1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(int *)this = param_1;
    return uVar1;
  }
  *(undefined4 *)(uVar1 + 4 + param_1) = 0;
  *(undefined * PTR32 *)(uVar1 + 8 + param_1) = this;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  *(int *)((int)this + 4) = param_1;
  *(int *)this = param_1;
  return uVar1;
}

/* ref: FUN_00d2fea0 */
GEN_FRAME uint GEN_THISCALL F_00d2fea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd2fea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    if (*(int *)this == param_1) {
      uVar3 = F_00d2fe50(this GEN_EDX_FWD,param_2);
      return uVar3;
    }
    iVar1 = *(int *)((int)this + 0xc);
    iVar2 = *(int *)(iVar1 + param_1);
    *(int *)(iVar1 + param_2) = iVar2;
    *(int *)(iVar1 + 4 + param_2) = param_1;
    *(undefined * PTR32 *)(iVar1 + 8 + param_2) = this;
    *(int *)(iVar1 + 4 + iVar2) = param_2;
    uVar3 = *(uint *)((int)this + 0xc);
    *(int *)(param_1 + uVar3) = param_2;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    return uVar3;
  }
  iVar1 = *(int *)((int)this + 4);
  uVar3 = *(uint *)((int)this + 0xc);
  *(undefined4 *)(uVar3 + 4 + param_2) = 0;
  *(undefined * PTR32 *)(uVar3 + 8 + param_2) = this;
  if (iVar1 != 0) {
    *(int *)(uVar3 + param_2) = iVar1;
    uVar3 = *(uint *)((int)this + 0xc);
    *((int *)GEN_TOP((uVar3 + 4 + *(int *)((int)this + 4)))) = param_2;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(int *)((int)this + 4) = param_2;
    return uVar3;
  }
  *(undefined4 *)(uVar3 + param_2) = 0;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  *(int *)this = param_2;
  *(int *)((int)this + 4) = param_2;
  return uVar3;
}

/* ref: FUN_00d2ff30 */
GEN_FRAME uint GEN_THISCALL F_00d2ff30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2ff30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 0xc);
  uVar2 = *(uint *)(iVar1 + 4 + param_1);
  if (*(int *)(iVar1 + param_1) == 0) {
    *(uint *)this = uVar2;
  }
  else {
    *((uint *)GEN_TOP((*(int *)(iVar1 + param_1) + 4 + iVar1))) = uVar2;
  }
  iVar3 = *(int *)(iVar1 + 4 + param_1);
  if (iVar3 == 0) {
    *(undefined4 *)((int)this + 4) = *(undefined4 *)(iVar1 + param_1);
  }
  else {
    *((undefined4 *)GEN_TOP((iVar3 + *(int *)((int)this + 0xc)))) = *(undefined4 *)(iVar1 + param_1);
  }
  *(undefined4 *)(iVar1 + param_1) = 0;
  *(undefined4 *)(iVar1 + 4 + param_1) = 0;
  *(undefined4 *)(iVar1 + 8 + param_1) = 0;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) - 1;
  return uVar2;
}

/* ref: FUN_00d2ff90 */
GEN_FRAME uint GEN_THISCALL F_00d2ff90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2ff90u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 0) {
    return *(uint *)(in_ecx[3] + 4 + param_2);
  }
  return *in_ecx;
}

/* ref: FUN_00d2ffb0 */
GEN_FRAME uint GEN_THISCALL F_00d2ffb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2ffb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 0) {
    return *((uint *)GEN_TOP((param_2 + *(int *)(in_ecx + 0xc))));
  }
  return *(uint *)(in_ecx + 4);
}

/* ref: FUN_00d2ffd0 */
GEN_FRAME uint GEN_THISCALL F_00d2ffd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd2ffd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  if (param_1 < 0) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 8);
  if (param_1 < iVar1) {
    uVar2 = 0;
    if (param_1 < iVar1 / 2) {
      iVar1 = 0;
      while( true ) {
        if (uVar2 == 0) {
          uVar2 = *(uint *)this;
        }
        else {
          uVar2 = *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + 4 + uVar2)));
        }
        if (uVar2 == 0) {
          return 0;
        }
        if (param_1 == iVar1) break;
        iVar1 = iVar1 + 1;
      }
    }
    else {
      do {
        iVar1 = iVar1 - 1;
        if (uVar2 == 0) {
          uVar2 = *(uint *)((int)this + 4);
        }
        else {
          uVar2 = *((uint *)GEN_TOP((uVar2 + *(int *)((int)this + 0xc))));
        }
        if (uVar2 == 0) {
          return 0;
        }
      } while (param_1 != iVar1);
    }
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00d30050 */
GEN_FRAME byte GEN_THISCALL F_00d30050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd30050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 8 + param_1))) == this;
}

/* ref: FUN_00d30070 */
GEN_FRAME unsigned int GEN_THISCALL F_00d30070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd30070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar2 = *(int *)((int)this + 0xc);
  if (param_1 != param_2) {
    piVar1 = (int *)(iVar2 + 4 + param_1);
    iVar3 = *(int *)(iVar2 + param_1);
    if (*piVar1 == param_2) {
      if (iVar3 == 0) {
        *(int *)this = param_2;
      }
      else {
        *(int *)(iVar3 + 4 + iVar2) = param_2;
      }
      iVar3 = *(int *)(iVar2 + 4 + param_2);
      piVar1 = (int *)(iVar2 + 4 + param_2);
      if (iVar3 == 0) {
        *(int *)((int)this + 4) = param_1;
      }
      else {
        *((int *)GEN_TOP((iVar3 + *(int *)((int)this + 0xc)))) = param_1;
      }
      *(undefined4 *)(iVar2 + param_2) = *(undefined4 *)(iVar2 + param_1);
      *(int *)(iVar2 + 4 + param_1) = *piVar1;
      *(int *)(iVar2 + param_1) = param_2;
      *piVar1 = param_1;
      return 0;
    }
    if (iVar3 == param_2) {
      if (*(int *)(iVar2 + param_2) == 0) {
        *(int *)this = param_1;
      }
      else {
        *((int *)GEN_TOP((*(int *)(iVar2 + param_2) + 4 + iVar2))) = param_1;
      }
      if (*piVar1 == 0) {
        *(int *)((int)this + 4) = param_2;
      }
      else {
        *((int *)GEN_TOP((*piVar1 + *(int *)((int)this + 0xc)))) = param_2;
      }
      *(undefined4 *)(iVar2 + param_1) = *(undefined4 *)(iVar2 + param_2);
      iVar3 = *piVar1;
      *(int *)(iVar2 + param_2) = param_1;
      *(int *)(iVar2 + 4 + param_2) = iVar3;
      *piVar1 = param_2;
      return 0;
    }
    if (iVar3 == 0) {
      *(int *)this = param_2;
    }
    else {
      *(int *)(iVar3 + 4 + iVar2) = param_2;
    }
    if (*piVar1 == 0) {
      *(int *)((int)this + 4) = param_2;
    }
    else {
      *((int *)GEN_TOP((*piVar1 + *(int *)((int)this + 0xc)))) = param_2;
    }
    if (*(int *)(iVar2 + param_2) == 0) {
      *(int *)this = param_1;
    }
    else {
      *((int *)GEN_TOP((*(int *)(iVar2 + param_2) + 4 + *(int *)((int)this + 0xc)))) = param_1;
    }
    iVar3 = *(int *)(iVar2 + 4 + param_2);
    if (iVar3 == 0) {
      *(int *)((int)this + 4) = param_1;
    }
    else {
      *((int *)GEN_TOP((iVar3 + *(int *)((int)this + 0xc)))) = param_1;
    }
    uVar4 = *(undefined4 *)(iVar2 + 4 + param_1);
    uVar5 = *(undefined4 *)(iVar2 + param_1);
    *(undefined4 *)(iVar2 + 4 + param_1) = *(undefined4 *)(iVar2 + 4 + param_2);
    *(undefined4 *)(iVar2 + param_1) = *(undefined4 *)(iVar2 + param_2);
    *(undefined4 *)(iVar2 + param_2) = uVar5;
    *(undefined4 *)(iVar2 + 4 + param_2) = uVar4;
  }
  return 0;
}

/* ref: FUN_00d30170 */
GEN_FRAME unsigned int GEN_THISCALL F_00d30170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd30170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * param_1 = (code *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint local_14;
  int local_10;
  int local_8;
  
  iVar8 = param_2;
  do {
    if (param_3 < iVar8) {
      return 0;
    }
    local_8 = param_3;
    uVar3 = F_00d2ffd0(this GEN_EDX_FWD,iVar8);
    uVar4 = F_00d2ffd0(((undefined *)(uint)(this)) GEN_EDX_ARG,param_3);
    uVar5 = F_00d2ffd0(((undefined *)(uint)((this))) GEN_EDX_ARG,iVar8 + param_3 >> 1);
    local_10 = iVar8;
    while( true ) {
      uVar6 = (*param_1)(uVar3,uVar5);
      iVar1 = local_10;
      while ((int)uVar6 < 0) {
        iVar1 = iVar1 + 1;
        if (uVar3 == 0) {
          uVar3 = *(uint *)this;
        }
        else {
          uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + 4 + uVar3)));
        }
        uVar6 = (*param_1)(uVar3,uVar5);
      }
      uVar7 = (*param_1)(uVar4,uVar5);
      uVar6 = uVar4;
      iVar2 = local_8;
      while (0 < (int)uVar7) {
        iVar2 = iVar2 - 1;
        if (uVar6 == 0) {
          uVar6 = *(uint *)((int)this + 4);
        }
        else {
          uVar6 = *((uint *)GEN_TOP((uVar6 + *(int *)((int)this + 0xc))));
        }
        uVar7 = (*param_1)(uVar6,uVar5);
      }
      if (iVar2 <= iVar1) break;
      local_8 = iVar2 - 1;
      local_10 = iVar1 + 1;
      if (uVar3 == 0) {
        local_14 = *(uint *)this;
      }
      else {
        local_14 = *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + 4 + uVar3)));
      }
      if (uVar6 == 0) {
        uVar4 = *(uint *)((int)this + 4);
        F_00d30070(this GEN_EDX_ARG,uVar3,0);
        uVar3 = local_14;
      }
      else {
        uVar4 = *((uint *)GEN_TOP((uVar6 + *(int *)((int)this + 0xc))));
        F_00d30070(this GEN_EDX_ARG,uVar3,uVar6);
        uVar3 = local_14;
      }
    }
    if (iVar8 < iVar1 - 1) {
      F_00d30170(this GEN_EDX_ARG,param_1,iVar8,iVar1 - 1);
    }
    iVar8 = iVar2 + 1;
  } while (iVar8 < param_3);
  return 0;
}

/* ref: FUN_00d302c0 */
GEN_FRAME unsigned int GEN_THISCALL F_00d302c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd302c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00d30170(this GEN_EDX_FWD,param_1,0,*(int *)((int)this + 8) - 1);
  return;
}

/* ref: FUN_00d302f0 */
GEN_FRAME uint GEN_THISCALL F_00d302f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd302f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined4 *)((int)this + 0x14) = param_6;
  return (uint)this;
}

/* ref: FUN_00d30330 */
GEN_FRAME uint F_00d30330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd30330u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d30350 */
GEN_FRAME uint F_00d30350(unsigned int gen_a0)
{
  GEN_ENTER(0xd30350u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00d30360 */
GEN_FRAME uint F_00d30360(unsigned int gen_a0)
{
  GEN_ENTER(0xd30360u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1134b34));
  }
  return (uint)param_1;
}

/* ref: FUN_00d30380 */
GEN_NOFRAME uint F_00d30380(void)
{
  GEN_ENTER(0xd30380u, 0u, 0u, 0u, 0u);
  return 0x1134b34;
}

/* ref: FUN_00d303e0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00d303e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd303e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00d30460 */
GEN_FRAME uint GEN_THISCALL F_00d30460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd30460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d30490 */
GEN_FRAME uint GEN_THISCALL F_00d30490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd30490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d304c0 */
GEN_FRAME uint GEN_THISCALL F_00d304c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd304c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d304f0 */
GEN_FRAME uint GEN_THISCALL F_00d304f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd304f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d30520 */
GEN_FRAME uint GEN_THISCALL F_00d30520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd30520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d30540 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00d30540(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd30540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00d30560 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00d30560(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd30560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00d30580 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00d30580(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd30580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00d305a0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00d305a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd305a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00d30610 */
GEN_FRAME unsigned int F_00d30610(unsigned int gen_a0)
{
  GEN_ENTER(0xd30610u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00d30640 */
GEN_FRAME unsigned int F_00d30640(unsigned int gen_a0)
{
  GEN_ENTER(0xd30640u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00d30670 */
GEN_FRAME unsigned int F_00d30670(unsigned int gen_a0)
{
  GEN_ENTER(0xd30670u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00d306a0 */
GEN_FRAME unsigned int F_00d306a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd306a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00d306d0 */
GEN_FRAME unsigned int F_00d306d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd306d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00d30700 */
GEN_FRAME uint GEN_THISCALL F_00d30700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd30700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,4);
  }
  return (uint)this;
}

/* ref: FUN_00d30740 */
GEN_FRAME uint GEN_THISCALL F_00d30740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd30740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,4);
  }
  return (uint)this;
}

/* ref: FUN_00d30780 */
GEN_FRAME uint GEN_THISCALL F_00d30780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd30780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,4);
  }
  return (uint)this;
}

/* ref: FUN_00d307c0 */
GEN_FRAME uint GEN_THISCALL F_00d307c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd307c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,4);
  }
  return (uint)this;
}

/* ref: FUN_00d30800 */
GEN_FRAME uint GEN_THISCALL F_00d30800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd30800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,4);
  }
  return (uint)this;
}

/* ref: FUN_00d30840 */
GEN_FRAME unsigned int F_00d30840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd30840u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return;
}

/* ref: FUN_00d30870 */
GEN_FRAME unsigned int F_00d30870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd30870u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return;
}

/* ref: FUN_00d308a0 */
GEN_FRAME unsigned int F_00d308a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd308a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return;
}

/* ref: FUN_00d308d0 */
GEN_FRAME unsigned int F_00d308d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd308d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return;
}

/* ref: FUN_00d30900 */
GEN_FRAME unsigned int F_00d30900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd30900u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 4);
    if (this != (undefined *)0x0) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *(undefined4 *)(param_1 + 4 + iVar1 * 4) = 0;
  }
  return;
}

/* ref: FUN_00d30a70 */
GEN_FRAME uint GEN_THISCALL F_00d30a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd30a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d30ae0 */
GEN_FRAME uint GEN_THISCALL F_00d30ae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd30ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d30b50 */
GEN_FRAME uint GEN_THISCALL F_00d30b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd30b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d30bc0 */
GEN_FRAME uint GEN_THISCALL F_00d30bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd30bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d30c30 */
GEN_FRAME uint GEN_THISCALL F_00d30c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd30c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d30ca0 */
GEN_NOFRAME uint GEN_THISCALL F_00d30ca0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd30ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d30d10 */
GEN_NOFRAME uint GEN_THISCALL F_00d30d10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd30d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d30d80 */
GEN_NOFRAME uint GEN_THISCALL F_00d30d80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd30d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d30df0 */
GEN_NOFRAME uint GEN_THISCALL F_00d30df0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd30df0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d30e60 */
GEN_NOFRAME uint GEN_THISCALL F_00d30e60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd30e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d30ed0 */
GEN_NOFRAME uint GEN_THISCALL F_00d30ed0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd30ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d30f40 */
GEN_NOFRAME uint GEN_THISCALL F_00d30f40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd30f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d30fb0 */
GEN_NOFRAME uint GEN_THISCALL F_00d30fb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd30fb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d31020 */
GEN_NOFRAME uint GEN_THISCALL F_00d31020(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd31020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d31090 */
GEN_NOFRAME uint GEN_THISCALL F_00d31090(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd31090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d31110 */
GEN_FRAME uint F_00d31110(unsigned int gen_a0)
{
  GEN_ENTER(0xd31110u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00d31140 */
GEN_NOFRAME uint GEN_THISCALL F_00d31140(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd31140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 0x38);
  iVar4 = *(int *)((int)this + 0x3c) - 1;
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2 GEN_EDX_FWD);
    }
    iVar4 = iVar4 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  iVar1 = *(int *)((int)this + 0x40);
  *(undefined4 *)((int)this + 0x3c) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x38),iVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = 0x80000000;
  iVar4 = *(int *)((int)this + 0x30) - 1;
  iVar1 = *(int *)((int)this + 0x2c);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2 GEN_EDX_ARG);
    }
    iVar4 = iVar4 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  iVar1 = *(int *)((int)this + 0x34);
  *(undefined4 *)((int)this + 0x30) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x2c),iVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0x80000000;
  iVar4 = *(int *)((int)this + 0x24) - 1;
  iVar1 = *(int *)((int)this + 0x20);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2 GEN_EDX_ARG);
    }
    iVar4 = iVar4 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  iVar1 = *(int *)((int)this + 0x28);
  *(undefined4 *)((int)this + 0x24) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x20),iVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0x80000000;
  iVar4 = *(int *)((int)this + 0x18) - 1;
  iVar1 = *(int *)((int)this + 0x14);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2 GEN_EDX_ARG);
    }
    iVar4 = iVar4 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  iVar1 = *(int *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x18) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x14),iVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  iVar4 = *(int *)((int)this + 0xc) - 1;
  iVar1 = *(int *)((int)this + 8);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2 GEN_EDX_ARG);
    }
    iVar4 = iVar4 - 1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  uVar3 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar3) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar3 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar3;
}

/* ref: hkaAnimationContainer::vf0 */
GEN_FRAME uint GEN_THISCALL F_00d31330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd31330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d31140(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d31370 */
GEN_FRAME uint F_00d31370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd31370u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d31380 */
GEN_FRAME uint GEN_THISCALL F_00d31380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd31380u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1134c04));
  F_00d64fd0(in_ecx + 4 GEN_EDX_FWD,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00d313b0 */
GEN_FRAME uint F_00d313b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd313b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1134c04));
    uVar1 = F_00d64fd0(param_1 + 4 GEN_EDX_ARG,param_2);
  }
  return uVar1;
}

/* ref: FUN_00d313d0 */
GEN_FRAME uint F_00d313d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd313d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00d313e0 */
GEN_NOFRAME uint F_00d313e0(void)
{
  GEN_ENTER(0xd313e0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x80];
  
  F_00d64fd0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  return 0x1134c04;
}

/* ref: FUN_00d31420 */
GEN_FRAME uint F_00d31420(unsigned int gen_a0)
{
  GEN_ENTER(0xd31420u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkaSkeletonMapper::vf0 */
GEN_FRAME uint GEN_THISCALL F_00d31450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd31450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d65100(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d314b0 */
GEN_FRAME uint GEN_STDCALL F_00d314b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd314b0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00d314f0 */
GEN_NOFRAME uint GEN_THISCALL F_00d314f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd314f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0x2c);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar2 * 4))) = 2;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  *(undefined2 *)((int)this + 0x28) = 0x100;
  return (int)this + 4;
}

/* ref: FUN_00d31520 */
GEN_NOFRAME uint GEN_THISCALL F_00d31520(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd31520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0x2c);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar2 * 4))) = 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  *(undefined2 *)((int)this + 0x28) = 1;
  return (int)this + 0x10;
}

/* ref: FUN_00d31550 */
GEN_FRAME uint GEN_THISCALL F_00d31550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd31550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  uint * puVar3;
  byte * pbVar4;
  
  iVar1 = *(int *)((int)this + 0x2c);
  iVar2 = 0;
  if (0 < iVar1) {
    puVar3 = *(uint * PTR32 *)((int)this + 0x1c);
    do {
      if (((*puVar3 & 1) != 0) && ((*puVar3 & 2) != 0)) goto LAB_00d315b9;
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < iVar1);
  }
  if ((*(char *)((int)this + 0x29) != '\0') && (iVar2 = 0, 0 < iVar1)) {
    pbVar4 = *(byte * PTR32 *)((int)this + 0x1c);
    do {
      if ((*pbVar4 & 1) != 0) goto LAB_00d315b9;
      iVar2 = iVar2 + 1;
      pbVar4 = pbVar4 + 4;
    } while (iVar2 < iVar1);
  }
  if ((*(char *)((int)this + 0x28) != '\0') && (iVar2 = 0, 0 < iVar1)) {
    pbVar4 = *(byte * PTR32 *)((int)this + 0x1c);
    do {
      if ((*pbVar4 & 2) != 0) {
LAB_00d315b9: ;
        *param_1 = 0;
        return (uint)param_1;
      }
      iVar2 = iVar2 + 1;
      pbVar4 = pbVar4 + 4;
    } while (iVar2 < iVar1);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00d315d0 */
GEN_FRAME uint GEN_THISCALL F_00d315d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd315d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)((int)this + 0x2c);
  iVar6 = 0;
  if (0 < iVar1) {
    iVar5 = 0;
    do {
      uVar2 = *((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar6 * 4)));
      uVar4 = uVar2 & 2;
      if ((uVar4 != 0) && ((uVar2 & 1) != 0)) {
LAB_00d31639: ;
        *param_1 = 0;
        return (uint)param_1;
      }
      if (uVar4 == 0) {
        bVar3 = F_00d938f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + iVar5))) GEN_EDX_FWD);
        if (bVar3 == 0) goto LAB_00d31639;
      }
      if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar6 * 4))) & 1) == 0) {
        bVar3 = F_00d938f0(((undefined *)GEN_TOP((*(int *)((int)this + 4) + iVar5))) GEN_EDX_ARG);
        if (bVar3 == 0) goto LAB_00d31639;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x30;
    } while (iVar6 < iVar1);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00d31650 */
GEN_FRAME unsigned int GEN_THISCALL F_00d31650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd31650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined4 * puVar7;
  
  iVar6 = *param_1;
  iVar1 = *(int *)((int)this + 0x2c);
  if (0 < iVar1) {
    puVar7 = (undefined4 *)(iVar6 + 0x20);
    param_1 = (int *)iVar1;
    do {
      uVar2 = puVar7[-7];
      uVar3 = puVar7[-6];
      uVar4 = puVar7[-5];
      puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 4) + (-0x20 - iVar6))));
      param_1 = (int *)((int)param_1 - 1);
      *puVar5 = puVar7[-8];
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      uVar2 = puVar7[-3];
      uVar3 = puVar7[-2];
      uVar4 = puVar7[-1];
      puVar5[4] = puVar7[-4];
      puVar5[5] = uVar2;
      puVar5[6] = uVar3;
      puVar5[7] = uVar4;
      uVar2 = puVar7[1];
      uVar3 = puVar7[2];
      uVar4 = puVar7[3];
      puVar5[8] = *puVar7;
      puVar5[9] = uVar2;
      puVar5[10] = uVar3;
      puVar5[0xb] = uVar4;
      puVar7 = puVar7 + 0xc;
    } while (param_1 != (int *)0x0);
  }
  iVar6 = 0;
  if (0 < iVar1) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar6 * 4))) = 2;
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  *(undefined2 *)((int)this + 0x28) = 0x100;
  return 0;
}

/* ref: FUN_00d316c0 */
GEN_FRAME unsigned int GEN_THISCALL F_00d316c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd316c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  int iVar6;
  int iVar7;
  undefined4 * puVar8;
  
  iVar6 = *param_1;
  iVar1 = *(int *)((int)this + 0x2c);
  if (0 < iVar1) {
    iVar7 = iVar1;
    puVar8 = (undefined4 *)(iVar6 + 0x20);
    do {
      uVar2 = puVar8[-7];
      uVar3 = puVar8[-6];
      uVar4 = puVar8[-5];
      puVar5 = ((undefined4 *)GEN_TOP(((int)puVar8 + *(int *)((int)this + 0x10) + (-0x20 - iVar6))));
      iVar7 = iVar7 - 1;
      *puVar5 = puVar8[-8];
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      uVar2 = puVar8[-3];
      uVar3 = puVar8[-2];
      uVar4 = puVar8[-1];
      puVar5[4] = puVar8[-4];
      puVar5[5] = uVar2;
      puVar5[6] = uVar3;
      puVar5[7] = uVar4;
      uVar2 = puVar8[1];
      uVar3 = puVar8[2];
      uVar4 = puVar8[3];
      puVar5[8] = *puVar8;
      puVar5[9] = uVar2;
      puVar5[10] = uVar3;
      puVar5[0xb] = uVar4;
      puVar8 = puVar8 + 0xc;
    } while (iVar7 != 0);
  }
  iVar6 = 0;
  if (0 < iVar1) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar6 * 4))) = 1;
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  *(undefined2 *)((int)this + 0x28) = 1;
  return 0;
}

/* ref: FUN_00d31730 */
GEN_FRAME uint GEN_THISCALL F_00d31730(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd31730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 * puVar10;
  int local_8;
  
  iVar2 = *(int *)(*(int *)this + 0x40);
  iVar8 = *(int *)(*(int *)this + 0x24);
  iVar3 = *(int *)((int)this + 0x2c);
  if (0 < iVar3) {
    puVar10 = (undefined4 *)(iVar8 + 0x20);
    local_8 = iVar3;
    do {
      uVar4 = puVar10[-7];
      uVar5 = puVar10[-6];
      uVar6 = puVar10[-5];
      iVar7 = *(int *)((int)this + 4) + (-0x20 - iVar8);
      puVar1 = (undefined4 *)(iVar7 + (int)puVar10);
      *puVar1 = puVar10[-8];
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      uVar4 = puVar10[-3];
      uVar5 = puVar10[-2];
      uVar6 = puVar10[-1];
      puVar1 = (undefined4 *)(iVar7 + 0x10 + (int)puVar10);
      *puVar1 = puVar10[-4];
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      uVar4 = puVar10[1];
      uVar5 = puVar10[2];
      uVar6 = puVar10[3];
      puVar1 = (undefined4 *)(iVar7 + 0x20 + (int)puVar10);
      *puVar1 = *puVar10;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      puVar10 = puVar10 + 0xc;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  iVar8 = 0;
  if (0 < iVar3) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar8 * 4))) = 2;
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar3);
  }
  uVar9 = 0;
  *(undefined2 *)((int)this + 0x28) = 0x100;
  if (3 < iVar2) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x30) + uVar9 * 4))) = 0;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x30) + 4 + uVar9 * 4))) = 0;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x30) + 8 + uVar9 * 4))) = 0;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x30) + 0xc + uVar9 * 4))) = 0;
      uVar9 = uVar9 + 4;
    } while ((int)uVar9 < iVar2 - 3);
  }
  for (; (int)uVar9 < iVar2; uVar9 = uVar9 + 1) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x30) + uVar9 * 4))) = 0;
  }
  return uVar9;
}

/* ref: FUN_00d31800 */
GEN_FRAME uint GEN_THISCALL F_00d31800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd31800u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 * puVar6;
  
  iVar2 = *(int *)(*(int *)this + 0x1c);
  *(int *)((int)this + 0x2c) = iVar2;
  uVar3 = *(uint *)((int)this + 0x18) & 0x3fffffff;
  if ((int)uVar3 < iVar2) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar2) {
      iVar4 = iVar2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x10,iVar4,0x30);
  }
  *(int *)((int)this + 0x14) = iVar2;
  uVar3 = *(uint *)((int)this + 0xc) & 0x3fffffff;
  if ((int)uVar3 < iVar2) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar2) {
      iVar4 = iVar2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 4,iVar4,0x30);
  }
  *(int *)((int)this + 8) = iVar2;
  uVar3 = *(uint *)((int)this + 0x24) & 0x3fffffff;
  if ((int)uVar3 < iVar2) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar2) {
      iVar4 = iVar2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x1c,iVar4,4);
  }
  *(int *)((int)this + 0x20) = iVar2;
  if (param_1 == 1) {
    F_00d31650(this GEN_EDX_ARG,param_3);
  }
  else {
    F_00d316c0(this GEN_EDX_ARG,param_3);
  }
  piVar1 = (int *)((int)this + 0x30);
  uVar3 = *(int *)(*(int *)this + 0x40) + 3U & 0xfffffffc;
  if ((int)(*(uint *)((int)this + 0x38) & 0x3fffffff) < (int)uVar3) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar1,uVar3,4);
  }
  iVar2 = *(int *)(*(int *)this + 0x40);
  uVar3 = *(uint *)((int)this + 0x38) & 0x3fffffff;
  if ((int)uVar3 < iVar2) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar2) {
      iVar4 = iVar2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar1,iVar4,4);
  }
  uVar3 = *(uint *)((int)this + 0x34);
  iVar5 = iVar2 - uVar3;
  iVar4 = uVar3 * 4;
  if (0 < iVar5) {
    uVar3 = 0;
    puVar6 = (undefined4 *)(*piVar1 + iVar4);
    for (; iVar5 != 0; iVar5 = iVar5 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
  }
  *(int *)((int)this + 0x34) = iVar2;
  return uVar3;
}

/* ref: FUN_00d31930 */
GEN_NOFRAME uint GEN_THISCALL F_00d31930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd31930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  float * pfVar3;
  uint * puVar4;
  byte bVar5;
  short sVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  float * pfVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  
  iVar7 = *(int *)((int)this + 0x1c);
  iVar21 = param_1 * 4;
  bVar5 = *(byte *)(iVar21 + iVar7);
  iVar20 = param_1;
  do {
    if ((bVar5 & 2) == 0) {
LAB_00d319bc: ;
      iVar20 = iVar20 + 1;
      if (iVar20 <= param_1) {
        iVar21 = iVar20 * 0x30;
        do {
          if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar20 * 4))) & 8) != 0) {
            iVar7 = *(int *)((int)this + 0x10);
            pfVar3 = ((float *)GEN_TOP((*(int *)((int)this + 4) + iVar21)));
            fVar8 = *pfVar3;
            fVar9 = pfVar3[1];
            fVar10 = pfVar3[2];
            fVar28 = pfVar3[3];
            iVar19 = *(int *)((int)this + 4) + iVar21;
            iVar17 = *((short *)GEN_TOP((*(int *)(*(int *)this + 0xc) + iVar20 * 2))) * 0x30;
            pfVar3 = (float *)(iVar17 + 0x10 + iVar7);
            fVar27 = *pfVar3;
            fVar11 = pfVar3[1];
            fVar12 = pfVar3[2];
            fVar13 = pfVar3[3];
            fVar22 = fVar27 * fVar8;
            fVar23 = fVar11 * fVar9;
            fVar24 = fVar12 * fVar10;
            pfVar18 = (float *)(iVar17 + iVar7);
            fVar25 = (((fVar23 + fVar22) + fVar24) * fVar27 +
                     (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) + fVar13 * fVar13)
                     * fVar8) + (fVar10 * fVar11 - fVar9 * fVar12) * fVar13;
            fVar26 = (((fVar23 + fVar22) + fVar24) * fVar11 +
                     (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4)) + fVar13 * fVar13)
                     * fVar9) + (fVar8 * fVar12 - fVar10 * fVar27) * fVar13;
            fVar27 = (((fVar23 + fVar22) + fVar24) * fVar12 +
                     (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8)) + fVar13 * fVar13)
                     * fVar10) + (fVar9 * fVar27 - fVar8 * fVar11) * fVar13;
            fVar28 = (((fVar23 + fVar22) + fVar24) * fVar13 +
                     (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc)) + fVar13 * fVar13)
                     * fVar28) + (fVar28 * fVar13 - fVar28 * fVar13) * fVar13;
            fVar8 = pfVar18[1];
            fVar9 = pfVar18[2];
            fVar10 = pfVar18[3];
            pfVar3 = (float *)(iVar21 + iVar7);
            *pfVar3 = (fVar25 + fVar25) + *pfVar18;
            pfVar3[1] = (fVar26 + fVar26) + fVar8;
            pfVar3[2] = (fVar27 + fVar27) + fVar9;
            pfVar3[3] = (fVar28 + fVar28) + fVar10;
            fVar8 = *(float *)(iVar19 + 0x1c);
            local_30 = gen_bits2f((uint)*(undefined8 *)(pfVar18 + 4));
            fStack_2c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar18 + 4) >> 0x20));
            fStack_28 = gen_bits2f((uint)*(undefined8 *)(pfVar18 + 6));
            local_40 = gen_bits2f((uint)*(undefined8 *)(iVar19 + 0x10));
            fStack_3c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(iVar19 + 0x10) >> 0x20));
            fStack_38 = gen_bits2f((uint)*(undefined8 *)(iVar19 + 0x18));
            fVar9 = pfVar18[7];
            pfVar3 = (float *)(iVar21 + 0x10 + iVar7);
            *pfVar3 = ((fStack_2c * fStack_38 - fStack_28 * fStack_3c) + local_40 * fVar9) +
                      local_30 * fVar8;
            pfVar3[1] = ((fStack_28 * local_40 - local_30 * fStack_38) + fStack_3c * fVar9) +
                        fStack_2c * fVar8;
            pfVar3[2] = ((local_30 * fStack_3c - fStack_2c * local_40) + fStack_38 * fVar9) +
                        fStack_28 * fVar8;
            pfVar3[3] = fVar8 * fVar9 -
                        ((fStack_2c * fStack_3c + local_30 * local_40) + fStack_28 * fStack_38);
            fVar8 = pfVar18[9];
            fVar9 = pfVar18[10];
            fVar10 = pfVar18[0xb];
            fVar28 = *(float *)(iVar19 + 0x24);
            fVar27 = *(float *)(iVar19 + 0x28);
            fVar11 = *(float *)(iVar19 + 0x2c);
            pfVar3 = (float *)(iVar21 + 0x20 + iVar7);
            *pfVar3 = pfVar18[8] * *(float *)(iVar19 + 0x20);
            pfVar3[1] = fVar8 * fVar28;
            pfVar3[2] = fVar9 * fVar27;
            pfVar3[3] = fVar10 * fVar11;
            puVar4 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar20 * 4)));
            *puVar4 = *puVar4 & 0xfffffff5;
          }
          iVar20 = iVar20 + 1;
          iVar21 = iVar21 + 0x30;
        } while (iVar20 <= param_1);
      }
      return param_1 * 0x30 + *(int *)((int)this + 0x10);
    }
    sVar6 = *((short *)GEN_TOP((*(int *)(*(int *)this + 0xc) + iVar20 * 2)));
    if (sVar6 == -1) {
      iVar21 = *(int *)((int)this + 4);
      iVar7 = *(int *)((int)this + 0x10);
      puVar1 = (undefined4 *)(iVar21 + iVar20 * 0x30);
      uVar14 = puVar1[1];
      uVar15 = puVar1[2];
      uVar16 = puVar1[3];
      puVar2 = (undefined4 *)(iVar7 + iVar20 * 0x30);
      *puVar2 = *puVar1;
      puVar2[1] = uVar14;
      puVar2[2] = uVar15;
      puVar2[3] = uVar16;
      puVar1 = (undefined4 *)(iVar21 + 0x10 + iVar20 * 0x30);
      uVar14 = puVar1[1];
      uVar15 = puVar1[2];
      uVar16 = puVar1[3];
      puVar2 = (undefined4 *)(iVar7 + 0x10 + iVar20 * 0x30);
      *puVar2 = *puVar1;
      puVar2[1] = uVar14;
      puVar2[2] = uVar15;
      puVar2[3] = uVar16;
      puVar1 = (undefined4 *)(iVar21 + 0x20 + iVar20 * 0x30);
      uVar14 = puVar1[1];
      uVar15 = puVar1[2];
      uVar16 = puVar1[3];
      puVar2 = (undefined4 *)(iVar7 + 0x20 + iVar20 * 0x30);
      *puVar2 = *puVar1;
      puVar2[1] = uVar14;
      puVar2[2] = uVar15;
      puVar2[3] = uVar16;
      puVar4 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar20 * 4)));
      *puVar4 = *puVar4 & 0xfffffffd;
      goto LAB_00d319bc;
    }
    *(uint *)(iVar7 + iVar21) = *(uint *)(iVar7 + iVar21) | 8;
    iVar7 = *(int *)((int)this + 0x1c);
    iVar20 = (int)sVar6;
    bVar5 = *(byte *)(iVar7 + iVar20 * 4);
    iVar21 = iVar20 * 4;
  } while( true );
}

/* ref: FUN_00d31b70 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00d31b70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd31b70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  float * pfVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  float * pfVar13;
  float * pfVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  int local_14;
  
  if (*(char *)((int)this + 0x28) == '\0') {
    iVar4 = *(int *)((int)this + 0x2c);
    local_14 = 0;
    if (0 < iVar4) {
      iVar15 = 0;
      do {
        if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x1c) + local_14 * 4))) & 2) != 0) {
          sVar3 = *((short *)GEN_TOP((*(int *)(*(int *)this + 0xc) + local_14 * 2)));
          pfVar14 = ((float *)GEN_TOP((*(int *)((int)this + 4) + iVar15)));
          if (sVar3 == -1) {
            iVar5 = *(int *)((int)this + 0x10);
            fVar6 = pfVar14[1];
            fVar7 = pfVar14[2];
            fVar8 = pfVar14[3];
            pfVar2 = (float *)(iVar5 + iVar15);
            *pfVar2 = *pfVar14;
            pfVar2[1] = fVar6;
            pfVar2[2] = fVar7;
            pfVar2[3] = fVar8;
            fVar6 = pfVar14[5];
            fVar7 = pfVar14[6];
            fVar8 = pfVar14[7];
            pfVar2 = (float *)(iVar5 + 0x10 + iVar15);
            *pfVar2 = pfVar14[4];
            pfVar2[1] = fVar6;
            pfVar2[2] = fVar7;
            pfVar2[3] = fVar8;
            fVar6 = pfVar14[9];
            fVar7 = pfVar14[10];
            fVar8 = pfVar14[0xb];
            pfVar2 = (float *)(iVar5 + 0x20 + iVar15);
            *pfVar2 = pfVar14[8];
            pfVar2[1] = fVar6;
            pfVar2[2] = fVar7;
            pfVar2[3] = fVar8;
          }
          else {
            iVar5 = *(int *)((int)this + 0x10);
            fVar6 = *pfVar14;
            fVar7 = pfVar14[1];
            fVar8 = pfVar14[2];
            fVar22 = pfVar14[3];
            iVar12 = sVar3 * 0x30;
            pfVar2 = (float *)(iVar12 + 0x10 + iVar5);
            fVar21 = *pfVar2;
            fVar9 = pfVar2[1];
            fVar10 = pfVar2[2];
            fVar11 = pfVar2[3];
            pfVar13 = (float *)(iVar12 + iVar5);
            fVar16 = fVar21 * fVar6;
            fVar17 = fVar9 * fVar7;
            fVar18 = fVar10 * fVar8;
            fVar19 = (((fVar17 + fVar16) + fVar18) * fVar21 +
                     (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) + fVar11 * fVar11)
                     * fVar6) + (fVar9 * fVar8 - fVar10 * fVar7) * fVar11;
            fVar20 = (((fVar17 + fVar16) + fVar18) * fVar9 +
                     (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4)) + fVar11 * fVar11)
                     * fVar7) + (fVar10 * fVar6 - fVar21 * fVar8) * fVar11;
            fVar21 = (((fVar17 + fVar16) + fVar18) * fVar10 +
                     (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8)) + fVar11 * fVar11)
                     * fVar8) + (fVar21 * fVar7 - fVar9 * fVar6) * fVar11;
            fVar22 = (((fVar17 + fVar16) + fVar18) * fVar11 +
                     (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc)) + fVar11 * fVar11)
                     * fVar22) + (fVar11 * fVar22 - fVar11 * fVar22) * fVar11;
            fVar6 = pfVar13[1];
            fVar7 = pfVar13[2];
            fVar8 = pfVar13[3];
            pfVar2 = (float *)(iVar15 + iVar5);
            *pfVar2 = (fVar19 + fVar19) + *pfVar13;
            pfVar2[1] = (fVar20 + fVar20) + fVar6;
            pfVar2[2] = (fVar21 + fVar21) + fVar7;
            pfVar2[3] = (fVar22 + fVar22) + fVar8;
            fVar6 = pfVar14[7];
            local_30 = gen_bits2f((uint)*(undefined8 *)(pfVar13 + 4));
            fStack_2c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar13 + 4) >> 0x20));
            fStack_28 = gen_bits2f((uint)*(undefined8 *)(pfVar13 + 6));
            local_40 = gen_bits2f((uint)*(undefined8 *)(pfVar14 + 4));
            fStack_3c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar14 + 4) >> 0x20));
            fStack_38 = gen_bits2f((uint)*(undefined8 *)(pfVar14 + 6));
            fVar7 = pfVar13[7];
            pfVar2 = (float *)(iVar15 + 0x10 + iVar5);
            *pfVar2 = ((fStack_2c * fStack_38 - fStack_28 * fStack_3c) + local_40 * fVar7) +
                      local_30 * fVar6;
            pfVar2[1] = ((fStack_28 * local_40 - local_30 * fStack_38) + fStack_3c * fVar7) +
                        fStack_2c * fVar6;
            pfVar2[2] = ((local_30 * fStack_3c - fStack_2c * local_40) + fStack_38 * fVar7) +
                        fStack_28 * fVar6;
            pfVar2[3] = fVar6 * fVar7 -
                        ((fStack_2c * fStack_3c + local_30 * local_40) + fStack_28 * fStack_38);
            fVar6 = pfVar13[9];
            fVar7 = pfVar13[10];
            fVar8 = pfVar13[0xb];
            fVar22 = pfVar14[9];
            fVar21 = pfVar14[10];
            fVar9 = pfVar14[0xb];
            pfVar2 = (float *)(iVar15 + 0x20 + iVar5);
            *pfVar2 = pfVar13[8] * pfVar14[8];
            pfVar2[1] = fVar6 * fVar22;
            pfVar2[2] = fVar7 * fVar21;
            pfVar2[3] = fVar8 * fVar9;
          }
          puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + local_14 * 4)));
          *puVar1 = *puVar1 & 0xfffffffd;
        }
        local_14 = local_14 + 1;
        iVar15 = iVar15 + 0x30;
      } while (local_14 < iVar4);
    }
    *(undefined1 *)((int)this + 0x28) = 1;
  }
  return;
}

/* ref: FUN_00d31d60 */
GEN_NOFRAME uint GEN_THISCALL F_00d31d60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd31d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00d31b70(this GEN_EDX_FWD);
  uVar1 = F_00d31520(((undefined *)(uint)(this)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00d31d70 */
GEN_FRAME unsigned int GEN_THISCALL F_00d31d70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd31d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint * puVar2;
  short sVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float * pfVar11;
  int iVar12;
  undefined4 * puVar13;
  float * pfVar14;
  int local_c;
  int local_8;
  
  iVar4 = *(int *)((int)this + 0x2c);
  F_00d31b70(this GEN_EDX_FWD);
  local_c = 0;
  if (0 < iVar4) {
    local_8 = 0;
    do {
      iVar12 = *(int *)this;
      sVar3 = *((short *)GEN_TOP((*(int *)(iVar12 + 0xc) + local_c * 2)));
      if (*((char *)GEN_TOP((*(int *)(iVar12 + 0x18) + 4 + local_c * 8))) == '\0') {
        if ((sVar3 != -1) && ((*((byte *)GEN_TOP((*(int *)((int)this + 0x1c) + sVar3 * 4))) & 4) != 0)) {
          puVar2 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + local_c * 4)));
          *puVar2 = *puVar2 | 1;
        }
      }
      else {
        puVar13 = ((undefined4 *)GEN_TOP((*(int *)(iVar12 + 0x24) + local_8)));
        if (sVar3 == -1) {
          uVar8 = puVar13[1];
          uVar9 = puVar13[2];
          uVar10 = puVar13[3];
          puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + local_8)));
          *puVar1 = *puVar13;
          puVar1[1] = uVar8;
          puVar1[2] = uVar9;
          puVar1[3] = uVar10;
        }
        else {
          pfVar14 = ((float *)GEN_TOP((sVar3 * 0x30 + *(int *)((int)this + 0x10))));
          F_00d950d0(((undefined *)GEN_TOP((local_8 + *(int *)((int)this + 0x10)))) GEN_EDX_ARG,pfVar14 + 4,puVar13);
          pfVar11 = ((float *)GEN_TOP((*(int *)((int)this + 0x10) + local_8)));
          fVar5 = pfVar14[1];
          fVar6 = pfVar14[2];
          fVar7 = pfVar14[3];
          *pfVar11 = *pfVar14 + *pfVar11;
          pfVar11[1] = fVar5 + pfVar11[1];
          pfVar11[2] = fVar6 + pfVar11[2];
          pfVar11[3] = fVar7 + pfVar11[3];
        }
        puVar2 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + local_c * 4)));
        *puVar2 = *puVar2 | 1;
        puVar2 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + local_c * 4)));
        *puVar2 = *puVar2 | 4;
      }
      local_8 = local_8 + 0x30;
      local_c = local_c + 1;
    } while (local_c < iVar4);
  }
  iVar4 = *(int *)((int)this + 0x20);
  iVar12 = 0;
  if (0 < iVar4) {
    do {
      puVar2 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar12 * 4)));
      *puVar2 = *puVar2 & 0xffffffe3;
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar4);
  }
  return 0;
}

/* ref: FUN_00d31e50 */
GEN_FRAME unsigned int GEN_THISCALL F_00d31e50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd31e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar7 [16];
  undefined1 auVar11 [16];
  
  uVar4 = *(undefined4 *)&REFG(undefined, 0x1138cbc);
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138cb8);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138cb4);
  *(undefined4 *)*param_1 = *(undefined4 *)&REFG(undefined, 0x1138cb0);
  *(undefined4 *)(*param_1 + 4) = uVar2;
  *(undefined4 *)(*param_1 + 8) = uVar3;
  *(undefined4 *)(*param_1 + 0xc) = uVar4;
  uVar8 = *(uint *)(*param_1 + 4) ^ *(uint *)&REFG(undefined, 0x10ab9c4);
  uVar9 = *(uint *)(*param_1 + 8) ^ *(uint *)&REFG(undefined, 0x10ab9c8);
  uVar10 = *(uint *)(*param_1 + 0xc) ^ *(uint *)&REFG(undefined, 0x10ab9cc);
  *(uint *)param_1[1] = *(uint *)*param_1 ^ *(uint *)&REFG(undefined, 0x10ab9c0);
  *(uint *)(param_1[1] + 4) = uVar8;
  *(uint *)(param_1[1] + 8) = uVar9;
  *(uint *)(param_1[1] + 0xc) = uVar10;
  iVar6 = *(int *)((int)this + 0x2c);
  F_00d31b70(this GEN_EDX_FWD);
  if (0 < iVar6) {
    memcpy(&(auVar7), &(param_1[1]), sizeof(param_1[1]) < sizeof(auVar7) ? sizeof(param_1[1]) : sizeof(auVar7));
    iVar5 = 0;
    do {
      iVar1 = *(int *)(((int)(uint)(this)) + 0x10);
      gen_minps(&(auVar11), &(*param_1), (iVar1 + iVar5));
      memcpy(&(*param_1), &(auVar11), sizeof(auVar11) < sizeof(*param_1) ? sizeof(auVar11) : sizeof(*param_1));
      gen_maxps(&(auVar7), &(auVar7), (iVar1 + iVar5));
      iVar5 = iVar5 + 0x30;
      iVar6 = iVar6 - 1;
      memcpy(&(param_1[1]), &(auVar7), sizeof(auVar7) < sizeof(param_1[1]) ? sizeof(auVar7) : sizeof(param_1[1]));
    } while (iVar6 != 0);
  }
  return;
}

/* ref: FUN_00d31eb0 */
GEN_FRAME uint GEN_THISCALL F_00d31eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd31eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x80000000;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0x80000000;
  F_00d31800(this GEN_EDX_FWD,param_1,param_2,param_3);
  return (uint)this;
}

/* ref: FUN_00d31f00 */
GEN_FRAME uint GEN_THISCALL F_00d31f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd31f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x80000000;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = param_3;
  (*(uint *)(gen_frame + 0x4)) = param_4;
  *(undefined4 *)((int)this + 0x38) = 0x80000000;
  (*(uint *)(gen_frame + 0x8)) = param_4 | 0x80000000;
  F_00d31800(this GEN_EDX_FWD,param_1,param_2,&(*(undefined4 *)(gen_frame + 0x0)));
  return (uint)this;
}

/* ref: FUN_00d31f70 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00d31f70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd31f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float * pfVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint * puVar4;
  float * pfVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  short sVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar37 [16];
  
  (*(int * PTR32 *)(gen_frame + 0x60)) = this;
  if (*(char *)((int)this + 0x29) == '\0') {
    iVar16 = *(int *)((int)this + 0x2c);
    (*(int *)(gen_frame + 0x5c)) = iVar16;
    (*(int *)(gen_frame + 0x68)) = 0;
    if (0 < iVar16) {
      iVar17 = 0;
      do {
        iVar15 = (*(int *)(gen_frame + 0x68));
        if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x1c) + (*(int *)(gen_frame + 0x68)) * 4))) & 1) != 0) {
          sVar9 = *((short *)GEN_TOP((*(int *)(*(int *)this + 0xc) + (*(int *)(gen_frame + 0x68)) * 2)));
          iVar16 = *(int *)((int)this + 0x10);
          (*(int *)(gen_frame + 0x64)) = iVar16;
          if (sVar9 == -1) {
            iVar15 = *(int *)((int)this + 4);
            puVar2 = (undefined4 *)(iVar17 + iVar16);
            uVar12 = puVar2[1];
            uVar13 = puVar2[2];
            uVar14 = puVar2[3];
            puVar3 = (undefined4 *)(iVar15 + iVar17);
            *puVar3 = *puVar2;
            puVar3[1] = uVar12;
            puVar3[2] = uVar13;
            puVar3[3] = uVar14;
            puVar2 = (undefined4 *)(iVar17 + 0x10 + iVar16);
            uVar12 = puVar2[1];
            uVar13 = puVar2[2];
            uVar14 = puVar2[3];
            puVar3 = (undefined4 *)(iVar15 + 0x10 + iVar17);
            *puVar3 = *puVar2;
            puVar3[1] = uVar12;
            puVar3[2] = uVar13;
            puVar3[3] = uVar14;
            puVar2 = (undefined4 *)(iVar17 + 0x20 + iVar16);
            uVar12 = puVar2[1];
            uVar13 = puVar2[2];
            uVar14 = puVar2[3];
            puVar3 = (undefined4 *)(iVar15 + 0x20 + iVar17);
            *puVar3 = *puVar2;
            puVar3[1] = uVar12;
            puVar3[2] = uVar13;
            puVar3[3] = uVar14;
          }
          else {
            iVar15 = (int)sVar9;
            if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar15 * 4))) & 2) == 0) {
              (*(uint *)(gen_frame + 0x6c)) = iVar15 * 0x30 + iVar16;
            }
            else {
              (*(uint *)(gen_frame + 0x6c)) = F_00d31930(this GEN_EDX_FWD,iVar15);
              this = ((int *)(uint)(this));
            }
            iVar16 = *(int *)((int)this + 4);
            F_00d95160(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x6c)) + 0x10,(*(uint *)(gen_frame + 0x6c)));
            memcpy(&(auVar8), &(*(gen_v16 *)((*(uint *)(gen_frame + 0x6c)) + 0x20)), sizeof(*(gen_v16 *)((*(uint *)(gen_frame + 0x6c)) + 0x20)) < sizeof(auVar8) ? sizeof(*(gen_v16 *)((*(uint *)(gen_frame + 0x6c)) + 0x20)) : sizeof(auVar8));
            gen_rcpps(&(auVar37), &(in_XMM3), &(auVar8));
            fVar26 = gen_bits2f(*(uint *)&REFG(undefined, 0x10abc20) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1134c40) - (*(float *)((char *)&auVar8 + 0)) * (*(float *)((char *)&auVar37 + 0))) * (*(float *)((char *)&auVar37 + 0)))) ;
            fVar28 = gen_bits2f(*(uint *)&REFG(undefined, 0x10abc24) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1134c44) - (*(float *)((char *)&auVar8 + 4)) * (*(float *)((char *)&auVar37 + 4))) * (*(float *)((char *)&auVar37 + 4)))) ;
            fVar30 = gen_bits2f(*(uint *)&REFG(undefined, 0x10abc28) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1134c48) - (*(float *)((char *)&auVar8 + 8)) * (*(float *)((char *)&auVar37 + 8))) * (*(float *)((char *)&auVar37 + 8)))) ;
            fVar32 = gen_bits2f(*(uint *)&REFG(undefined, 0x10abc2c) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1134c4c) - (*(float *)((char *)&auVar8 + 12)) * (*(float *)((char *)&auVar37 + 12))) * (*(float *)((char *)&auVar37 + 12))));
            fVar18 = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9c0) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0x0))));
            fVar20 = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9c4) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0x4))));
            fVar22 = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9c8) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0x8))));
            fVar24 = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9cc) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0xc))));
            (*(float *)(gen_frame + 0x20)) = fVar26;
            (*(float *)(gen_frame + 0x24)) = fVar28;
            (*(float *)(gen_frame + 0x28)) = fVar30;
            (*(float *)(gen_frame + 0x2c)) = fVar32;
            (*(float *)(gen_frame + 0x0)) = fVar18;
            (*(float *)(gen_frame + 0x4)) = fVar20;
            (*(float *)(gen_frame + 0x8)) = fVar22;
            (*(float *)(gen_frame + 0xc)) = fVar24;
            fVar19 = gen_bits2f(*(uint *)((*(uint *)(gen_frame + 0x6c)) + 0x10) ^ *(uint *)&REFG(undefined, 0x10ab9b0));
            fVar21 = gen_bits2f(*(uint *)((*(uint *)(gen_frame + 0x6c)) + 0x14) ^ *(uint *)&REFG(undefined, 0x10ab9b4));
            fVar23 = gen_bits2f(*(uint *)((*(uint *)(gen_frame + 0x6c)) + 0x18) ^ *(uint *)&REFG(undefined, 0x10ab9b8));
            fVar25 = gen_bits2f(*(uint *)((*(uint *)(gen_frame + 0x6c)) + 0x1c) ^ *(uint *)&REFG(undefined, 0x10ab9bc));
            pfVar1 = (float *)(iVar17 + (*(int *)(gen_frame + 0x64)));
            fVar35 = *pfVar1;
            fVar36 = pfVar1[1];
            fVar10 = pfVar1[2];
            fVar11 = pfVar1[3];
            fVar27 = fVar35 * fVar19;
            fVar29 = fVar36 * fVar21;
            fVar31 = fVar10 * fVar23;
            (*(float *)(gen_frame + 0x30)) = fVar23;
            (*(float *)(gen_frame + 0x34)) = fVar19;
            (*(float *)(gen_frame + 0x38)) = fVar21;
            (*(float *)(gen_frame + 0x3c)) = fVar25;
            (*(undefined4 *)((char *)&in_XMM3 + 4)) = (undefined4)gen_fl2bits(fVar25);
            (*(undefined4 *)((char *)&in_XMM3 + 0)) = (undefined4)gen_fl2bits(fVar25);
            (*(undefined4 *)((char *)&in_XMM3 + 8)) = (undefined4)gen_fl2bits(fVar25);
            (*(undefined4 *)((char *)&in_XMM3 + 12)) = (undefined4)gen_fl2bits(fVar25);
            fVar33 = (((fVar29 + fVar27) + fVar31) * fVar19 + (fVar25 * fVar25 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) * fVar35) + (fVar10 * fVar21 - fVar36 * fVar23) * fVar25;
            fVar34 = (((fVar29 + fVar27) + fVar31) * fVar21 + (fVar25 * fVar25 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) * fVar36) + (fVar35 * fVar23 - fVar10 * fVar19) * fVar25;
            fVar35 = (((fVar29 + fVar27) + fVar31) * fVar23 + (fVar25 * fVar25 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) * fVar10) + (fVar36 * fVar19 - fVar35 * fVar21) * fVar25;
            fVar36 = (((fVar29 + fVar27) + fVar31) * fVar25 + (fVar25 * fVar25 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) * fVar11) + (fVar11 * fVar25 - fVar11 * fVar25) * fVar25;
            pfVar1 = (float *)(iVar16 + iVar17);
            *pfVar1 = (fVar33 + fVar33) + fVar18;
            pfVar1[1] = (fVar34 + fVar34) + fVar20;
            pfVar1[2] = (fVar35 + fVar35) + fVar22;
            pfVar1[3] = (fVar36 + fVar36) + fVar24;
            uVar6 = *(undefined8 *)(iVar17 + 0x10 + (*(int *)(gen_frame + 0x64)));
            fVar35 = *(float *)(iVar17 + (*(int *)(gen_frame + 0x64)) + 0x1c);
            (*(undefined8 *)(gen_frame + 0x40)) = uVar6;
            uVar6 = (*(undefined8 *)(gen_frame + 0x40));
            uVar7 = *(undefined8 *)(iVar17 + 0x18 + (*(int *)(gen_frame + 0x64)));
            (*(undefined8 *)(gen_frame + 0x48)) = uVar7;
            uVar7 = (*(undefined8 *)(gen_frame + 0x48));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 0)) = gen_bits2f((uint)uVar6);
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 4)) = gen_bits2f((uint)((ulonglong)uVar6 >> 0x20));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x48)) + 0)) = gen_bits2f((uint)uVar7);
            pfVar1 = (float *)(iVar16 + 0x10 + iVar17);
            *pfVar1 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x48)) + 0)) * fVar21 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 4)) * fVar23) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 0)) * fVar25) + fVar35 * fVar19;
            pfVar1[1] = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 0)) * fVar23 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x48)) + 0)) * fVar19) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 4)) * fVar25) + fVar35 * fVar21;
            pfVar1[2] = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 4)) * fVar19 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 0)) * fVar21) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x48)) + 0)) * fVar25) + fVar35 * fVar23;
            pfVar1[3] = fVar35 * fVar25 - ((fVar21 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 4)) + fVar19 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 0))) + fVar23 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x48)) + 0)));
            pfVar1 = (float *)(iVar17 + 0x20 + (*(int *)(gen_frame + 0x64)));
            fVar35 = pfVar1[1];
            fVar36 = pfVar1[2];
            fVar10 = pfVar1[3];
            pfVar5 = (float *)(iVar16 + 0x20 + iVar17);
            *pfVar5 = *pfVar1 * fVar26;
            pfVar5[1] = fVar35 * fVar28;
            pfVar5[2] = fVar36 * fVar30;
            pfVar5[3] = fVar10 * fVar32;
            this = (*(int * PTR32 *)(gen_frame + 0x60));
            (*(undefined8 *)(gen_frame + 0x40)) = uVar6;
            (*(undefined8 *)(gen_frame + 0x48)) = uVar7;
          }
          puVar4 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + (*(int *)(gen_frame + 0x68)) * 4)));
          *puVar4 = *puVar4 & 0xfffffffe;
          iVar15 = (*(int *)(gen_frame + 0x68));
          iVar16 = (*(int *)(gen_frame + 0x5c));
        }
        iVar17 = iVar17 + 0x30;
        (*(int *)(gen_frame + 0x68)) = iVar15 + 1;
      } while (iVar15 + 1 < iVar16);
    }
    *(undefined1 *)((int)this + 0x29) = 1;
  }
  return;
}

/* ref: FUN_00d321b0 */
GEN_NOFRAME uint GEN_THISCALL F_00d321b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd321b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  
  F_00d31b70(this GEN_EDX_FWD);
  return ((int)(uint)(this)) + 0x10;
}

/* ref: FUN_00d32670 */
GEN_NOFRAME uint GEN_THISCALL F_00d32670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd32670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  uint * puVar1;
  float * pfVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  ushort uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 * puVar16;
  int iVar17;
  int iVar18;
  float * pfVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar39 [16];
  
  if (param_2 == 0) {
    iVar17 = *(int *)(*(int *)this + 0x1c);
    iVar18 = param_1 + 1;
    (*(int *)(gen_frame + 0x64)) = iVar17;
    if (iVar18 < iVar17) {
      do {
        if (*((short *)GEN_TOP((*(int *)(*(int *)this + 0xc) + iVar18 * 2))) == param_1) {
          if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar18 * 4))) & 2) != 0) {
            F_00d31930(this GEN_EDX_FWD,iVar18);
            iVar17 = (*(int *)(gen_frame + 0x64));
          }
          *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar18 * 4))) = 1;
          *(undefined1 *)((int)this + 0x29) = 0;
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 < iVar17);
    }
  }
  else {
    iVar18 = *(int *)(*(int *)this + 0x1c);
    puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 4)));
    *puVar1 = *puVar1 | 4;
    (*(int *)(gen_frame + 0x64)) = param_1 + 1;
    (*(int *)(gen_frame + 0x5c)) = iVar18;
    iVar17 = param_1;
    if ((*(int *)(gen_frame + 0x64)) < iVar18) {
      (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x64)) * 0x30;
      do {
        uVar8 = *((ushort *)GEN_TOP((*(int *)(*(int *)this + 0xc) + (*(int *)(gen_frame + 0x64)) * 2)));
        (*(uint *)(gen_frame + 0x68)) = (uint)uVar8;
        if ((uVar8 != 0xffff) &&
           ((*((byte *)GEN_TOP((*(int *)((int)this + 0x1c) + (short)uVar8 * 4))) & 4) != 0)) {
          if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x1c) + (*(int *)(gen_frame + 0x64)) * 4))) & 1) != 0) {
            iVar18 = *(int *)((int)this + 0x10);
            (*(int *)(gen_frame + 0x60)) = iVar18;
            if (uVar8 == 0xffff) {
              puVar3 = (undefined4 *)(iVar18 + (*(int *)(gen_frame + 0x6c)));
              uVar12 = puVar3[1];
              uVar13 = puVar3[2];
              uVar14 = puVar3[3];
              puVar16 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + (*(int *)(gen_frame + 0x6c)))));
              puVar4 = (undefined4 *)(iVar18 + 0x10 + (*(int *)(gen_frame + 0x6c)));
              *puVar16 = *puVar3;
              puVar16[1] = uVar12;
              puVar16[2] = uVar13;
              puVar16[3] = uVar14;
              uVar12 = puVar4[1];
              uVar13 = puVar4[2];
              uVar14 = puVar4[3];
              puVar16[4] = *puVar4;
              puVar16[5] = uVar12;
              puVar16[6] = uVar13;
              puVar16[7] = uVar14;
              puVar3 = (undefined4 *)(iVar18 + 0x20 + (*(int *)(gen_frame + 0x6c)));
              uVar12 = puVar3[1];
              uVar13 = puVar3[2];
              uVar14 = puVar3[3];
              puVar16[8] = *puVar3;
              puVar16[9] = uVar12;
              puVar16[10] = uVar13;
              puVar16[0xb] = uVar14;
            }
            else {
              iVar15 = (int)(short)uVar8;
              if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar15 * 4))) & 2) == 0) {
                (*(uint *)(gen_frame + 0x68)) = iVar15 * 0x30 + iVar18;
              }
              else {
                (*(uint *)(gen_frame + 0x68)) = F_00d31930(this GEN_EDX_ARG,iVar15);
              }
              pfVar19 = ((float *)GEN_TOP((*(int *)((int)this + 4) + (*(int *)(gen_frame + 0x6c)))));
              F_00d95160(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x68)) + 0x10,(*(uint *)(gen_frame + 0x68)));
              memcpy(&(auVar7), &(*(gen_v16 *)((*(uint *)(gen_frame + 0x68)) + 0x20)), sizeof(*(gen_v16 *)((*(uint *)(gen_frame + 0x68)) + 0x20)) < sizeof(auVar7) ? sizeof(*(gen_v16 *)((*(uint *)(gen_frame + 0x68)) + 0x20)) : sizeof(auVar7));
              gen_rcpps(&(auVar39), &(in_XMM3), &(auVar7));
              fVar28 = gen_bits2f(*(uint *)&REFG(undefined, 0x10abc20) &
                                  (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1134c40) -
                                                    (*(float *)((char *)&auVar7 + 0)) * (*(float *)((char *)&auVar39 + 0))) * (*(float *)((char *)&auVar39 + 0))
                                                   ));
              fVar30 = gen_bits2f(*(uint *)&REFG(undefined, 0x10abc24) &
                                  (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1134c44) -
                                                    (*(float *)((char *)&auVar7 + 4)) * (*(float *)((char *)&auVar39 + 4))) * (*(float *)((char *)&auVar39 + 4))
                                                   ));
              fVar32 = gen_bits2f(*(uint *)&REFG(undefined, 0x10abc28) &
                                  (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1134c48) -
                                                    (*(float *)((char *)&auVar7 + 8)) * (*(float *)((char *)&auVar39 + 8))) * (*(float *)((char *)&auVar39 + 8))
                                                   ));
              fVar34 = gen_bits2f(*(uint *)&REFG(undefined, 0x10abc2c) &
                                  (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1134c4c) -
                                                    (*(float *)((char *)&auVar7 + 12)) * (*(float *)((char *)&auVar39 + 12))) *
                                                    (*(float *)((char *)&auVar39 + 12))));
              (*(float *)(gen_frame + 0x20)) = fVar28;
              (*(float *)(gen_frame + 0x24)) = fVar30;
              (*(float *)(gen_frame + 0x28)) = fVar32;
              (*(float *)(gen_frame + 0x2c)) = fVar34;
              fVar20 = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9c0) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0x0))));
              fVar22 = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9c4) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0x4))));
              fVar24 = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9c8) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0x8))));
              fVar26 = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9cc) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0xc))));
              (*(float *)(gen_frame + 0x0)) = fVar20;
              (*(float *)(gen_frame + 0x4)) = fVar22;
              (*(float *)(gen_frame + 0x8)) = fVar24;
              (*(float *)(gen_frame + 0xc)) = fVar26;
              fVar21 = gen_bits2f(*(uint *)((*(uint *)(gen_frame + 0x68)) + 0x10) ^ *(uint *)&REFG(undefined, 0x10ab9b0));
              fVar23 = gen_bits2f(*(uint *)((*(uint *)(gen_frame + 0x68)) + 0x14) ^ *(uint *)&REFG(undefined, 0x10ab9b4));
              fVar25 = gen_bits2f(*(uint *)((*(uint *)(gen_frame + 0x68)) + 0x18) ^ *(uint *)&REFG(undefined, 0x10ab9b8));
              fVar27 = gen_bits2f(*(uint *)((*(uint *)(gen_frame + 0x68)) + 0x1c) ^ *(uint *)&REFG(undefined, 0x10ab9bc));
              pfVar2 = (float *)((*(int *)(gen_frame + 0x60)) + (*(int *)(gen_frame + 0x6c)));
              fVar37 = *pfVar2;
              fVar38 = pfVar2[1];
              fVar10 = pfVar2[2];
              fVar11 = pfVar2[3];
              fVar29 = fVar37 * fVar21;
              fVar31 = fVar38 * fVar23;
              fVar33 = fVar10 * fVar25;
              (*(float *)(gen_frame + 0x30)) = fVar25;
              (*(float *)(gen_frame + 0x34)) = fVar21;
              (*(float *)(gen_frame + 0x38)) = fVar23;
              (*(float *)(gen_frame + 0x3c)) = fVar27;
              (*(undefined4 *)((char *)&in_XMM3 + 4)) = (undefined4)gen_fl2bits(fVar27);
              (*(undefined4 *)((char *)&in_XMM3 + 0)) = (undefined4)gen_fl2bits(fVar27);
              (*(undefined4 *)((char *)&in_XMM3 + 8)) = (undefined4)gen_fl2bits(fVar27);
              (*(undefined4 *)((char *)&in_XMM3 + 12)) = (undefined4)gen_fl2bits(fVar27);
              fVar35 = (((fVar31 + fVar29) + fVar33) * fVar21 +
                       (fVar27 * fVar27 +
                       gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) * fVar37) +
                       (fVar10 * fVar23 - fVar38 * fVar25) * fVar27;
              fVar36 = (((fVar31 + fVar29) + fVar33) * fVar23 +
                       (fVar27 * fVar27 +
                       gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) * fVar38) +
                       (fVar37 * fVar25 - fVar10 * fVar21) * fVar27;
              fVar37 = (((fVar31 + fVar29) + fVar33) * fVar25 +
                       (fVar27 * fVar27 +
                       gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) * fVar10) +
                       (fVar38 * fVar21 - fVar37 * fVar23) * fVar27;
              fVar38 = (((fVar31 + fVar29) + fVar33) * fVar27 +
                       (fVar27 * fVar27 +
                       gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) * fVar11) +
                       (fVar11 * fVar27 - fVar11 * fVar27) * fVar27;
              *pfVar19 = (fVar35 + fVar35) + fVar20;
              pfVar19[1] = (fVar36 + fVar36) + fVar22;
              pfVar19[2] = (fVar37 + fVar37) + fVar24;
              pfVar19[3] = (fVar38 + fVar38) + fVar26;
              uVar5 = *(undefined8 *)((*(int *)(gen_frame + 0x60)) + 0x10 + (*(int *)(gen_frame + 0x6c)));
              fVar37 = *(float *)((*(int *)(gen_frame + 0x60)) + (*(int *)(gen_frame + 0x6c)) + 0x1c);
              (*(undefined8 *)(gen_frame + 0x40)) = uVar5;
              uVar5 = (*(undefined8 *)(gen_frame + 0x40));
              uVar6 = *(undefined8 *)((*(int *)(gen_frame + 0x60)) + 0x18 + (*(int *)(gen_frame + 0x6c)));
              (*(undefined8 *)(gen_frame + 0x48)) = uVar6;
              uVar6 = (*(undefined8 *)(gen_frame + 0x48));
              (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 0)) = gen_bits2f((uint)uVar5);
              (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 4)) = gen_bits2f((uint)((ulonglong)uVar5 >> 0x20));
              (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x48)) + 0)) = gen_bits2f((uint)uVar6);
              pfVar19[4] = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x48)) + 0)) * fVar23 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 4)) * fVar25) +
                           (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 0)) * fVar27) + fVar37 * fVar21;
              pfVar19[5] = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 0)) * fVar25 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x48)) + 0)) * fVar21) +
                           (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 4)) * fVar27) + fVar37 * fVar23;
              pfVar19[6] = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 4)) * fVar21 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 0)) * fVar23) +
                           (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x48)) + 0)) * fVar27) + fVar37 * fVar25;
              pfVar19[7] = fVar37 * fVar27 -
                           ((fVar23 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 4)) + fVar21 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 0))) +
                           fVar25 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x48)) + 0)));
              pfVar2 = (float *)((*(int *)(gen_frame + 0x60)) + 0x20 + (*(int *)(gen_frame + 0x6c)));
              fVar37 = pfVar2[1];
              fVar38 = pfVar2[2];
              fVar10 = pfVar2[3];
              pfVar19[8] = *pfVar2 * fVar28;
              pfVar19[9] = fVar37 * fVar30;
              pfVar19[10] = fVar38 * fVar32;
              pfVar19[0xb] = fVar10 * fVar34;
              (*(undefined8 *)(gen_frame + 0x40)) = uVar5;
              (*(undefined8 *)(gen_frame + 0x48)) = uVar6;
            }
            puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + (*(int *)(gen_frame + 0x64)) * 4)));
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + (*(int *)(gen_frame + 0x64)) * 4)));
          *puVar1 = *puVar1 | 4;
          *(undefined1 *)((int)this + 0x28) = 0;
        }
        (*(int *)(gen_frame + 0x64)) = (*(int *)(gen_frame + 0x64)) + 1;
        (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + 0x30;
      } while ((*(int *)(gen_frame + 0x64)) < (*(int *)(gen_frame + 0x5c)));
    }
    while (iVar17 = iVar17 + 1, iVar17 < (*(int *)(gen_frame + 0x5c))) {
      uVar9 = *((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar17 * 4)));
      if ((uVar9 & 4) != 0) {
        *((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar17 * 4))) = uVar9 & 0xfffffffb | 2;
      }
    }
  }
  if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 4))) & 2) != 0) {
    F_00d31930(this GEN_EDX_ARG,param_1);
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 4))) = 1;
  *(undefined1 *)((int)this + 0x29) = 0;
  return param_1 * 0x30 + *(int *)((int)this + 0x10);
}

/* ref: FUN_00d329a0 */
GEN_NOFRAME uint GEN_THISCALL F_00d329a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd329a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00d31f70(this GEN_EDX_FWD);
  uVar1 = F_00d314f0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00d329b0 */
GEN_FRAME unsigned int GEN_THISCALL F_00d329b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd329b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint * puVar10;
  int iVar11;
  
  iVar4 = *(int *)((int)this + 0x2c);
  F_00d31f70(this GEN_EDX_FWD);
  iVar9 = 0;
  if (0 < iVar4) {
    iVar11 = 0;
    do {
      iVar5 = *(int *)this;
      if (*((char *)GEN_TOP((*(int *)(iVar5 + 0x18) + 4 + iVar9 * 8))) == '\0') {
        sVar3 = *((short *)GEN_TOP((*(int *)(iVar5 + 0xc) + iVar9 * 2)));
        if ((sVar3 != -1) && ((*((byte *)GEN_TOP((*(int *)((int)this + 0x1c) + sVar3 * 4))) & 4) != 0)) {
          puVar10 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar9 * 4)));
          goto LAB_00d32a0e;
        }
      }
      else {
        puVar1 = ((undefined4 *)GEN_TOP((*(int *)(iVar5 + 0x24) + iVar11)));
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar11)));
        *puVar2 = *puVar1;
        puVar2[1] = uVar6;
        puVar2[2] = uVar7;
        puVar2[3] = uVar8;
        puVar10 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar9 * 4)));
LAB_00d32a0e: ;
        *puVar10 = *puVar10 | 2;
        puVar10 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar9 * 4)));
        *puVar10 = *puVar10 | 4;
      }
      iVar9 = iVar9 + 1;
      iVar11 = iVar11 + 0x30;
    } while (iVar9 < iVar4);
  }
  iVar4 = *(int *)((int)this + 0x20);
  iVar9 = 0;
  if (0 < iVar4) {
    do {
      puVar10 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar9 * 4)));
      *puVar10 = *puVar10 & 0xffffffe3;
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar4);
  }
  return 0;
}

/* ref: FUN_00d32a50 */
GEN_NOFRAME uint GEN_THISCALL F_00d32a50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd32a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00d31f70(this GEN_EDX_FWD);
  return (int)this + 4;
}

/* ref: FUN_00d32a60 */
GEN_FRAME uint GEN_THISCALL F_00d32a60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd32a60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00d32a90 */
GEN_FRAME uint GEN_THISCALL F_00d32a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd32a90u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d32ab0 */
GEN_FRAME uint GEN_THISCALL F_00d32ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd32ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d32ad0 */
GEN_FRAME uint GEN_THISCALL F_00d32ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd32ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a1;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  
  gen_minps(&(auVar1), &(*param_1), &(*param_2));
  memcpy(&(*(gen_v16 *)this), &(auVar1), sizeof(auVar1) < sizeof(*(gen_v16 *)this) ? sizeof(auVar1) : sizeof(*(gen_v16 *)this));
  return (uint)param_1;
}

/* ref: FUN_00d32af0 */
GEN_FRAME uint GEN_THISCALL F_00d32af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd32af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a1;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  
  gen_maxps(&(auVar1), &(*param_1), &(*param_2));
  memcpy(&(*(gen_v16 *)this), &(auVar1), sizeof(auVar1) < sizeof(*(gen_v16 *)this) ? sizeof(auVar1) : sizeof(*(gen_v16 *)this));
  return (uint)param_1;
}

/* ref: FUN_00d32b10 */
GEN_FRAME uint GEN_THISCALL F_00d32b10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd32b10u, gen_a0, gen_a1, 0u, 0u);
  gen_v16 * in_ecx = (gen_v16 *)(uintptr_t)gen_a0;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  
  gen_minps(&(auVar1), &(*in_ecx), &(*param_2));
  memcpy(&(*in_ecx), &(auVar1), sizeof(auVar1) < sizeof(*in_ecx) ? sizeof(auVar1) : sizeof(*in_ecx));
  gen_maxps(&(auVar1), &(in_ecx[1]), &(*param_2));
  memcpy(&(in_ecx[1]), &(auVar1), sizeof(auVar1) < sizeof(in_ecx[1]) ? sizeof(auVar1) : sizeof(in_ecx[1]));
  return (uint)param_2;
}

/* ref: FUN_00d32b30 */
GEN_FRAME uint GEN_THISCALL F_00d32b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd32b30u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *in_ecx = *param_2 + *in_ecx;
  in_ecx[1] = fVar1 + in_ecx[1];
  in_ecx[2] = fVar2 + in_ecx[2];
  in_ecx[3] = fVar3 + in_ecx[3];
  return (uint)param_2;
}

/* ref: FUN_00d32b90 */
GEN_FRAME unsigned int F_00d32b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd32b90u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int iVar6;
  
  if (0 < param_3) {
    puVar5 = (undefined4 *)(param_2 + 0x20);
    iVar6 = param_3;
    do {
      uVar1 = puVar5[-7];
      uVar2 = puVar5[-6];
      uVar3 = puVar5[-5];
      puVar4 = ((undefined4 *)GEN_TOP(((int)puVar5 + *param_1 + (-0x20 - param_2))));
      iVar6 = iVar6 - 1;
      *puVar4 = puVar5[-8];
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      uVar1 = puVar5[-3];
      uVar2 = puVar5[-2];
      uVar3 = puVar5[-1];
      puVar4[4] = puVar5[-4];
      puVar4[5] = uVar1;
      puVar4[6] = uVar2;
      puVar4[7] = uVar3;
      uVar1 = puVar5[1];
      uVar2 = puVar5[2];
      uVar3 = puVar5[3];
      puVar4[8] = *puVar5;
      puVar4[9] = uVar1;
      puVar4[10] = uVar2;
      puVar4[0xb] = uVar3;
      puVar5 = puVar5 + 0xc;
    } while (iVar6 != 0);
  }
  return;
}

/* ref: FUN_00d32be0 */
GEN_FRAME uint GEN_THISCALL F_00d32be0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd32be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d32c20 */
GEN_FRAME uint GEN_THISCALL F_00d32c20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd32c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return param_3 | 0x80000000;
}

/* ref: FUN_00d32ca0 */
GEN_FRAME unsigned int F_00d32ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd32ca0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar7 = 0;
  if (0 < iVar3) {
    iVar8 = 0;
    do {
      if (*((char *)GEN_TOP((*(int *)(param_1 + 0x18) + 4 + iVar7 * 8))) != '\0') {
        puVar1 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x24) + iVar8)));
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        puVar2 = (undefined4 *)(iVar8 + param_2);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0x30;
    } while (iVar7 < iVar3);
  }
  return 0;
}

/* ref: FUN_00d32ce0 */
GEN_FRAME unsigned int F_00d32ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd32ce0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 * puVar7;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar6 = 0;
  if (0 < iVar2) {
    puVar7 = param_3;
    do {
      if (*((char *)GEN_TOP((*(int *)(param_1 + 0x18) + 4 + iVar6 * 8))) != '\0') {
        puVar1 = ((undefined4 *)GEN_TOP(((param_2 - (int)param_3) + (int)puVar7)));
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *puVar7 = *puVar1;
        puVar7[1] = uVar3;
        puVar7[2] = uVar4;
        puVar7[3] = uVar5;
      }
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 0xc;
    } while (iVar6 < iVar2);
  }
  return 0;
}

/* ref: FUN_00d32d20 */
GEN_FRAME unsigned int F_00d32d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd32d20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  short sVar1;
  int iVar2;
  float * pfVar3;
  float * pfVar4;
  float * this;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int local_c;
  int local_8;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  local_c = 0;
  if (0 < iVar2) {
    local_8 = 0;
    this = param_2;
    do {
      sVar1 = *((short *)GEN_TOP((*(int *)(param_1 + 0xc) + local_c * 2)));
      if (*((char *)GEN_TOP((*(int *)(param_1 + 0x18) + 4 + local_c * 8))) != '\0') {
        pfVar3 = ((float *)GEN_TOP((*(int *)(param_1 + 0x24) + local_8)));
        if (sVar1 == -1) {
          fVar5 = *pfVar3;
          fVar6 = pfVar3[1];
          fVar7 = pfVar3[2];
          fVar8 = pfVar3[3];
        }
        else {
          pfVar4 = param_2 + sVar1 * 0xc;
          F_00d950d0(this GEN_EDX_ARG,pfVar4 + 4,pfVar3);
          fVar5 = *this + *pfVar4;
          fVar6 = this[1] + pfVar4[1];
          fVar7 = this[2] + pfVar4[2];
          fVar8 = this[3] + pfVar4[3];
        }
        *this = fVar5;
        this[1] = fVar6;
        this[2] = fVar7;
        this[3] = fVar8;
      }
      local_8 = local_8 + 0x30;
      local_c = local_c + 1;
      this = this + 0xc;
    } while (local_c < iVar2);
  }
  return 0;
}

/* ref: FUN_00d32da0 */
GEN_NOFRAME unsigned int F_00d32da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd32da0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  short sVar1;
  int iVar2;
  int iVar3;
  float * pfVar4;
  float * pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  (*(int *)(gen_frame + 0x14)) = *(int *)(param_1 + 0x1c);
  (*(int *)(gen_frame + 0x1c)) = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    iVar3 = param_2 - (int)param_3;
    (*(int *)(gen_frame + 0x18)) = iVar3;
    pfVar5 = param_3;
    do {
      sVar1 = *((short *)GEN_TOP((*(int *)(param_1 + 0xc) + (*(int *)(gen_frame + 0x1c)) * 2)));
      iVar2 = (*(int *)(gen_frame + 0x1c));
      if (*((char *)GEN_TOP((*(int *)(param_1 + 0x18) + 4 + (*(int *)(gen_frame + 0x1c)) * 8))) != '\0') {
        if (sVar1 == -1) {
          pfVar4 = (float *)(iVar3 + (int)pfVar5);
          fVar6 = *pfVar4;
          fVar7 = pfVar4[1];
          fVar8 = pfVar4[2];
          fVar9 = pfVar4[3];
        }
        else {
          pfVar4 = param_3 + sVar1 * 0xc;
          F_00d950d0(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG,pfVar4 + 4,iVar3 + (int)pfVar5);
          fVar6 = *pfVar4 + (*(float *)(gen_frame + 0x0));
          fVar7 = pfVar4[1] + (*(float *)(gen_frame + 0x4));
          fVar8 = pfVar4[2] + (*(float *)(gen_frame + 0x8));
          fVar9 = pfVar4[3] + (*(float *)(gen_frame + 0xc));
          iVar2 = (*(int *)(gen_frame + 0x1c));
          iVar3 = (*(int *)(gen_frame + 0x18));
        }
        *pfVar5 = fVar6;
        pfVar5[1] = fVar7;
        pfVar5[2] = fVar8;
        pfVar5[3] = fVar9;
      }
      pfVar5 = pfVar5 + 0xc;
      (*(int *)(gen_frame + 0x1c)) = iVar2 + 1;
    } while (iVar2 + 1 < (*(int *)(gen_frame + 0x14)));
  }
  return 0;
}

/* ref: FUN_00d32e40 */
GEN_FRAME unsigned int F_00d32e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd32e40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if ((0 < *((short *)GEN_TOP((*(int *)(param_1 + 0xc) + iVar2 * 2)))) || ((char)param_2 == '\0')) {
        *((undefined1 *)GEN_TOP((*(int *)(param_1 + 0x18) + 4 + iVar2 * 8))) = 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}

/* ref: FUN_00d32e80 */
GEN_FRAME uint F_00d32e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd32e80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  code * pcVar5;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  pcVar5 = param_3;
  if (param_3 == (code *)0x0) {
    pcVar5 = ((code *)REFP(0xda0d70));
  }
  uVar4 = 0;
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      uVar3 = (*pcVar5)(param_2,*((uint *)GEN_TOP((*(int *)(param_1 + 0x18) + iVar2 * 8))) & 0xfffffffe);
      if (uVar3 == 0) {
        return (uint)uVar4;
      }
      uVar4 = uVar4 + 1;
      iVar2 = (int)(short)uVar4;
    } while (iVar2 < iVar1);
  }
  return 0xffffffff;
}

/* ref: FUN_00d32ee0 */
GEN_FRAME unsigned int F_00d32ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xd32ee0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      *((undefined1 *)GEN_TOP((*(int *)(param_1 + 0x18) + 4 + iVar2 * 8))) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}

/* ref: FUN_00d32f00 */
GEN_FRAME byte F_00d32f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd32f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  gen_size32 param_2 = (gen_size32)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  short sVar1;
  int iVar2;
  undefined1 uVar3;
  
  if (0 < (int)param_2) {
    F_00c48350(param_3,0,param_2);
  }
  iVar2 = param_2 + 1;
  *(undefined1 *)(param_2 + (int)param_3) = 1;
  if (*(int *)(param_1 + 0x1c) <= iVar2) {
    *(byte *)(param_2 + (int)param_3) = (byte)param_4;
    return (byte)param_4;
  }
  do {
    sVar1 = *((short *)GEN_TOP((*(int *)(param_1 + 0xc) + iVar2 * 2)));
    if ((sVar1 < 0) || (*(char *)((int)sVar1 + (int)param_3) == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    *(undefined1 *)(iVar2 + (int)param_3) = uVar3;
    iVar2 = iVar2 + 1;
  } while (iVar2 < *(int *)(param_1 + 0x1c));
  *(byte *)(param_2 + (int)param_3) = (byte)param_4;
  return (byte)iVar2;
}

/* ref: FUN_00d32f70 */
GEN_FRAME uint F_00d32f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd32f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  short * psVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_3 + 0x14)) {
    psVar2 = *(short * PTR32 *)(param_3 + 0x10);
    do {
      if ((*psVar2 < 0) || (*(int *)(param_2 + 0x1c) <= (int)*psVar2)) {
        *param_1 = 0;
        return (uint)param_1;
      }
      iVar1 = iVar1 + 1;
      psVar2 = psVar2 + 1;
    } while (iVar1 < *(int *)(param_3 + 0x14));
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00d32fc0 */
GEN_FRAME uint F_00d32fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd32fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * pfVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = *(float *)&REFG(undefined, 0x1138afc);
  fVar5 = *(float *)&REFG(undefined, 0x1138af8);
  fVar4 = *(float *)&REFG(undefined, 0x1138af4);
  if (param_3 != -1) {
    iVar2 = param_3;
    fVar4 = *(float *)&REFG(undefined, 0x1138af0);
    fVar5 = *(float *)&REFG(undefined, 0x1138af4);
    fVar6 = *(float *)&REFG(undefined, 0x1138af8);
    fVar7 = *(float *)&REFG(undefined, 0x1138afc);
    do {
      iVar3 = (int)*((short *)GEN_TOP((*(int *)(param_1 + 0xc) + iVar2 * 2)));
      pfVar1 = (float *)(param_2 + 0x20 + iVar2 * 0x30);
      fVar4 = fVar4 * *pfVar1;
      fVar5 = fVar5 * pfVar1[1];
      fVar6 = fVar6 * pfVar1[2];
      fVar7 = fVar7 * pfVar1[3];
      iVar2 = iVar3;
    } while (iVar3 != -1);
    *param_4 = fVar4;
    param_4[1] = fVar5;
    param_4[2] = fVar6;
    param_4[3] = fVar7;
    return 0xffffffff;
  }
  *param_4 = *(float *)&REFG(undefined, 0x1138af0);
  param_4[1] = fVar4;
  param_4[2] = fVar5;
  param_4[3] = fVar6;
  return (uint)param_4;
}

/* ref: FUN_00d33010 */
GEN_FRAME uint F_00d33010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd33010u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  uint * puVar1;
  int iVar2;
  uint uVar3;
  undefined * pvVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (*(int *)(param_4 + 0x14) != 0) {
    iVar2 = *(int *)(param_2 + 0x10);
    if (*(int *)(param_4 + 0x14) == iVar2) {
      if (*(int *)(param_2 + 0x20) != iVar2) {
        F_00da0a80(((undefined1 *)(gen_frame + 0x208)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),0x200);
        F_00d9fe80(((undefined1 *)(gen_frame + 0x208)) GEN_EDX_ARG,"No track names present in animation");
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                  (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0x654e3437,((undefined1 *)(gen_frame + 0x4)),"Rig\\hkaSkeletonUtils.cpp",0x1d7);
        F_00d9fda0(((undefined1 *)(gen_frame + 0x208)) GEN_EDX_ARG);
        return 1;
      }
      iVar5 = *(int *)(param_1 + 0x1c);
      iVar7 = 0;
      if (0 < iVar5) {
        puVar1 = *(uint * PTR32 *)(param_1 + 0x18);
        do {
          if ((*puVar1 & 0xfffffffe) == 0) {
            F_00da0a80(((undefined1 *)(gen_frame + 0x208)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),0x200);
            pvVar4 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x208)) GEN_EDX_ARG,"No bone name for bone ");
            F_00d9ff40(pvVar4 GEN_EDX_ARG,iVar7);
            iVar2 = *REFG(int * PTR32, 0x15dff78);
            uVar10 = 0x1e1;
            uVar9 = 0x654e3437;
            goto LAB_00d3317e;
          }
          iVar7 = iVar7 + 1;
          puVar1 = puVar1 + 2;
        } while (iVar7 < iVar5);
      }
      (*(int *)(gen_frame + 0x204)) = 0;
      if (0 < iVar2) {
        (*(int *)(gen_frame + 0x214)) = 0;
        do {
          uVar8 = *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x214)) + *(int *)(param_2 + 0x1c)))) & 0xfffffffe;
          sVar6 = 0;
          (*(char *)(gen_frame + 0x21b)) = '\0';
          if (iVar5 < 1) {
LAB_00d33199: ;
            F_00da0a80(((undefined1 *)(gen_frame + 0x208)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),0x200);
            pvVar4 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x208)) GEN_EDX_ARG,"No match for track ");
            F_00d9fe80(pvVar4 GEN_EDX_ARG,uVar8);
            iVar2 = *REFG(int * PTR32, 0x15dff78);
            uVar10 = 0x1f7;
            uVar9 = 0x654e3438;
LAB_00d3317e: ;
            ((code *)*(gen_code32 *)(iVar2 + 0xc))
                      (REFG(int * PTR32, 0x15dff78),1,uVar9,((undefined1 *)(gen_frame + 0x4)),"Rig\\hkaSkeletonUtils.cpp",uVar10);
            F_00d9fda0(((undefined1 *)(gen_frame + 0x208)) GEN_EDX_ARG);
            return 1;
          }
          iVar2 = 0;
          do {
            uVar3 = (*param_3)(*((uint *)GEN_TOP((*(int *)(param_1 + 0x18) + iVar2 * 8))) & 0xfffffffe,uVar8);
            if (uVar3 == 0) {
              (*(char *)(gen_frame + 0x21b)) = '\x01';
              *((short *)GEN_TOP((*(int *)(param_4 + 0x10) + (*(int *)(gen_frame + 0x204)) * 2))) = sVar6;
            }
            iVar5 = *(int *)(param_1 + 0x1c);
            sVar6 = sVar6 + 1;
            iVar2 = (int)sVar6;
          } while (iVar2 < iVar5);
          if ((*(char *)(gen_frame + 0x21b)) == '\0') goto LAB_00d33199;
          (*(int *)(gen_frame + 0x214)) = (*(int *)(gen_frame + 0x214)) + 0x10;
          iVar2 = (*(int *)(gen_frame + 0x204)) + 1;
          (*(int *)(gen_frame + 0x204)) = iVar2;
        } while (iVar2 < *(int *)(param_2 + 0x10));
      }
      return 0;
    }
  }
  F_00da0a80(((undefined1 *)(gen_frame + 0x208)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),0x200);
  F_00d9fe80(((undefined1 *)(gen_frame + 0x208)) GEN_EDX_ARG,"Binding is not initiialized");
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0x654e3435,((undefined1 *)(gen_frame + 0x4)),"Rig\\hkaSkeletonUtils.cpp",0x1d0);
  F_00d9fda0(((undefined1 *)(gen_frame + 0x208)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00d33240 */
GEN_NOFRAME unsigned int F_00d33240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd33240u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  float * pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float * pfVar12;
  int iVar13;
  float * pfVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  iVar16 = 0;
  if (0 < param_1) {
    iVar15 = param_5 - (int)param_4;
    pfVar12 = param_4;
    do {
      iVar13 = (int)*(short *)(param_2 + iVar16 * 2);
      pfVar14 = param_3;
      if (iVar13 != -1) {
        pfVar14 = (float *)(iVar13 * 0x30 + param_5);
      }
      fVar2 = pfVar14[4];
      fVar3 = pfVar14[5];
      fVar4 = pfVar14[6];
      fVar5 = pfVar14[7];
      fVar6 = *pfVar12;
      fVar7 = pfVar12[1];
      fVar8 = pfVar12[2];
      fVar9 = pfVar12[3];
      fVar17 = fVar6 * fVar2;
      fVar18 = fVar7 * fVar3;
      fVar19 = fVar8 * fVar4;
      fVar10 = pfVar14[7];
      local_20 = gen_bits2f((uint)*(undefined8 *)(pfVar14 + 4));
      fStack_1c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar14 + 4) >> 0x20));
      fStack_18 = gen_bits2f((uint)*(undefined8 *)(pfVar14 + 6));
      fVar20 = (((fVar18 + fVar17) + fVar19) * fVar2 +
               (fVar5 * fVar5 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) * fVar6
               ) + (fVar8 * fVar3 - fVar7 * fVar4) * fVar5;
      fVar21 = (((fVar18 + fVar17) + fVar19) * fVar3 +
               (fVar5 * fVar5 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) * fVar7
               ) + (fVar6 * fVar4 - fVar8 * fVar2) * fVar5;
      fVar22 = (((fVar18 + fVar17) + fVar19) * fVar4 +
               (fVar5 * fVar5 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) * fVar8
               ) + (fVar7 * fVar2 - fVar6 * fVar3) * fVar5;
      fVar23 = (((fVar18 + fVar17) + fVar19) * fVar5 +
               (fVar5 * fVar5 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) * fVar9
               ) + (fVar9 * fVar5 - fVar9 * fVar5) * fVar5;
      local_30 = gen_bits2f((uint)*(undefined8 *)(pfVar12 + 4));
      fStack_2c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar12 + 4) >> 0x20));
      fStack_28 = gen_bits2f((uint)*(undefined8 *)(pfVar12 + 6));
      fVar2 = pfVar12[7];
      fVar3 = pfVar14[1];
      fVar4 = pfVar14[2];
      fVar5 = pfVar14[3];
      fVar6 = pfVar12[8];
      fVar7 = pfVar12[9];
      fVar8 = pfVar12[10];
      fVar9 = pfVar12[0xb];
      fVar17 = pfVar14[8];
      fVar18 = pfVar14[9];
      fVar19 = pfVar14[10];
      fVar11 = pfVar14[0xb];
      pfVar1 = (float *)(iVar15 + (int)pfVar12);
      *pfVar1 = (fVar20 + fVar20) + *pfVar14;
      pfVar1[1] = (fVar21 + fVar21) + fVar3;
      pfVar1[2] = (fVar22 + fVar22) + fVar4;
      pfVar1[3] = (fVar23 + fVar23) + fVar5;
      pfVar14 = (float *)(iVar15 + 0x10 + (int)pfVar12);
      *pfVar14 = ((fStack_1c * fStack_28 - fStack_18 * fStack_2c) + local_30 * fVar10) +
                 local_20 * fVar2;
      pfVar14[1] = ((fStack_18 * local_30 - local_20 * fStack_28) + fStack_2c * fVar10) +
                   fStack_1c * fVar2;
      pfVar14[2] = ((local_20 * fStack_2c - fStack_1c * local_30) + fStack_28 * fVar10) +
                   fStack_18 * fVar2;
      pfVar14[3] = fVar2 * fVar10 -
                   ((fStack_1c * fStack_2c + local_20 * local_30) + fStack_18 * fStack_28);
      pfVar14 = (float *)(iVar15 + 0x20 + (int)pfVar12);
      *pfVar14 = fVar6 * fVar17;
      pfVar14[1] = fVar7 * fVar18;
      pfVar14[2] = fVar8 * fVar19;
      pfVar14[3] = fVar9 * fVar11;
      iVar16 = iVar16 + 1;
      pfVar12 = pfVar12 + 0xc;
    } while (iVar16 < param_1);
  }
  return;
}

/* ref: FUN_00d33580 */
GEN_FRAME unsigned int F_00d33580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd33580u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_00d33240(param_1,param_2,&REFG(undefined, 0x1351770),param_3,param_4);
  return;
}

/* ref: FUN_00d335b0 */
GEN_NOFRAME unsigned int F_00d335b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd335b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined8 uVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float * pfVar6;
  int iVar7;
  float * pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar28 [16];
  
  (*(int *)(gen_frame + 0x6c)) = 0;
  if (0 < param_1) {
    (*(float *)(gen_frame + 0x40)) = *(float *)&REFG(undefined, 0x1134c50);
    (*(float *)(gen_frame + 0x44)) = *(float *)&REFG(undefined, 0x1134c54);
    (*(float *)(gen_frame + 0x48)) = *(float *)&REFG(undefined, 0x1134c58);
    (*(float *)(gen_frame + 0x4c)) = *(float *)&REFG(undefined, 0x1134c5c);
    (*(int *)(gen_frame + 0x68)) = param_5 - (int)param_4;
    pfVar6 = param_4;
    do {
      iVar7 = (int)*(short *)(param_2 + (*(int *)(gen_frame + 0x6c)) * 2);
      pfVar8 = param_3;
      if (iVar7 != -1) {
        pfVar8 = param_4 + iVar7 * 0xc;
      }
      F_00d95160(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG,pfVar8 + 4,pfVar8);
      memcpy(&(auVar2), &(*(gen_v16 *)(pfVar8 + 8)), sizeof(*(gen_v16 *)(pfVar8 + 8)) < sizeof(auVar2) ? sizeof(*(gen_v16 *)(pfVar8 + 8)) : sizeof(auVar2));
      fVar26 = *pfVar6;
      fVar27 = pfVar6[1];
      fVar3 = pfVar6[2];
      fVar4 = pfVar6[3];
      gen_rcpps(&(auVar28), &(in_XMM3), &(auVar2));
      fVar17 = gen_bits2f(*(uint *)&REFG(undefined, 0x10abc20) &
                          (uint)gen_fl2bits(((*(float *)(gen_frame + 0x40)) - (*(float *)((char *)&auVar2 + 0)) * (*(float *)((char *)&auVar28 + 0))) *
                                            (*(float *)((char *)&auVar28 + 0))));
      fVar19 = gen_bits2f(*(uint *)&REFG(undefined, 0x10abc24) &
                          (uint)gen_fl2bits(((*(float *)(gen_frame + 0x44)) - (*(float *)((char *)&auVar2 + 4)) * (*(float *)((char *)&auVar28 + 4))) *
                                            (*(float *)((char *)&auVar28 + 4))));
      fVar21 = gen_bits2f(*(uint *)&REFG(undefined, 0x10abc28) &
                          (uint)gen_fl2bits(((*(float *)(gen_frame + 0x48)) - (*(float *)((char *)&auVar2 + 8)) * (*(float *)((char *)&auVar28 + 8))) *
                                            (*(float *)((char *)&auVar28 + 8))));
      fVar23 = gen_bits2f(*(uint *)&REFG(undefined, 0x10abc2c) &
                          (uint)gen_fl2bits(((*(float *)(gen_frame + 0x4c)) - (*(float *)((char *)&auVar2 + 12)) * (*(float *)((char *)&auVar28 + 12))) *
                                            (*(float *)((char *)&auVar28 + 12))));
      (*(float *)(gen_frame + 0x20)) = fVar17;
      (*(float *)(gen_frame + 0x24)) = fVar19;
      (*(float *)(gen_frame + 0x28)) = fVar21;
      (*(float *)(gen_frame + 0x2c)) = fVar23;
      fVar9 = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9c0) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0x0))));
      fVar11 = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9c4) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0x4))));
      fVar13 = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9c8) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0x8))));
      fVar15 = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9cc) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0xc))));
      (*(float *)(gen_frame + 0x0)) = fVar9;
      (*(float *)(gen_frame + 0x4)) = fVar11;
      (*(float *)(gen_frame + 0x8)) = fVar13;
      (*(float *)(gen_frame + 0xc)) = fVar15;
      fVar10 = gen_bits2f((uint)gen_fl2bits(pfVar8[4]) ^ *(uint *)&REFG(undefined, 0x10ab9b0));
      fVar12 = gen_bits2f((uint)gen_fl2bits(pfVar8[5]) ^ *(uint *)&REFG(undefined, 0x10ab9b4));
      fVar14 = gen_bits2f((uint)gen_fl2bits(pfVar8[6]) ^ *(uint *)&REFG(undefined, 0x10ab9b8));
      fVar16 = gen_bits2f((uint)gen_fl2bits(pfVar8[7]) ^ *(uint *)&REFG(undefined, 0x10ab9bc));
      fVar18 = fVar26 * fVar10;
      fVar20 = fVar27 * fVar12;
      fVar22 = fVar3 * fVar14;
      (*(float *)(gen_frame + 0x30)) = fVar14;
      (*(float *)(gen_frame + 0x34)) = fVar10;
      (*(float *)(gen_frame + 0x38)) = fVar12;
      (*(float *)(gen_frame + 0x3c)) = fVar16;
      (*(undefined4 *)((char *)&in_XMM3 + 4)) = (undefined4)gen_fl2bits(fVar16);
      (*(undefined4 *)((char *)&in_XMM3 + 0)) = (undefined4)gen_fl2bits(fVar16);
      (*(undefined4 *)((char *)&in_XMM3 + 8)) = (undefined4)gen_fl2bits(fVar16);
      (*(undefined4 *)((char *)&in_XMM3 + 12)) = (undefined4)gen_fl2bits(fVar16);
      fVar24 = (((fVar20 + fVar18) + fVar22) * fVar10 +
               (fVar16 * fVar16 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) *
               fVar26) + (fVar3 * fVar12 - fVar27 * fVar14) * fVar16;
      fVar25 = (((fVar20 + fVar18) + fVar22) * fVar12 +
               (fVar16 * fVar16 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) *
               fVar27) + (fVar26 * fVar14 - fVar3 * fVar10) * fVar16;
      fVar26 = (((fVar20 + fVar18) + fVar22) * fVar14 +
               (fVar16 * fVar16 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) *
               fVar3) + (fVar27 * fVar10 - fVar26 * fVar12) * fVar16;
      fVar27 = (((fVar20 + fVar18) + fVar22) * fVar16 +
               (fVar16 * fVar16 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) *
               fVar4) + (fVar4 * fVar16 - fVar4 * fVar16) * fVar16;
      pfVar8 = (float *)((*(int *)(gen_frame + 0x68)) + (int)pfVar6);
      *pfVar8 = (fVar24 + fVar24) + fVar9;
      pfVar8[1] = (fVar25 + fVar25) + fVar11;
      pfVar8[2] = (fVar26 + fVar26) + fVar13;
      pfVar8[3] = (fVar27 + fVar27) + fVar15;
      uVar1 = *(undefined8 *)(pfVar6 + 4);
      fVar26 = pfVar6[7];
      (*(undefined8 *)(gen_frame + 0x50)) = uVar1;
      uVar1 = (*(undefined8 *)(gen_frame + 0x50));
      (*(undefined8 *)(gen_frame + 0x58)) = *(undefined8 *)(pfVar6 + 6);
      uVar5 = (*(undefined8 *)(gen_frame + 0x58));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 0)) = gen_bits2f((uint)uVar1);
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x58)) + 0)) = gen_bits2f((uint)*(undefined8 *)(pfVar6 + 6));
      pfVar8 = (float *)((*(int *)(gen_frame + 0x68)) + 0x10 + (int)pfVar6);
      *pfVar8 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x58)) + 0)) * fVar12 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 4)) * fVar14) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 0)) * fVar16)
                + fVar26 * fVar10;
      pfVar8[1] = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 0)) * fVar14 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x58)) + 0)) * fVar10) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 4)) * fVar16
                  ) + fVar26 * fVar12;
      pfVar8[2] = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 4)) * fVar10 - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 0)) * fVar12) + (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x58)) + 0)) * fVar16
                  ) + fVar26 * fVar14;
      pfVar8[3] = fVar26 * fVar16 -
                  ((fVar12 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 4)) + fVar10 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 0))) + fVar14 * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x58)) + 0))
                  );
      fVar26 = pfVar6[9];
      fVar27 = pfVar6[10];
      fVar3 = pfVar6[0xb];
      pfVar8 = (float *)((*(int *)(gen_frame + 0x68)) + 0x20 + (int)pfVar6);
      *pfVar8 = pfVar6[8] * fVar17;
      pfVar8[1] = fVar26 * fVar19;
      pfVar8[2] = fVar27 * fVar21;
      pfVar8[3] = fVar3 * fVar23;
      iVar7 = (*(int *)(gen_frame + 0x6c)) + 1;
      pfVar6 = pfVar6 + 0xc;
      (*(int *)(gen_frame + 0x6c)) = iVar7;
      (*(undefined8 *)(gen_frame + 0x50)) = uVar1;
      (*(undefined8 *)(gen_frame + 0x58)) = uVar5;
    } while (iVar7 < param_1);
  }
  return;
}

/* ref: FUN_00d33790 */
GEN_FRAME unsigned int F_00d33790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd33790u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_00d335b0(param_1,param_2,&REFG(undefined, 0x1351770),param_3,param_4);
  return;
}

/* ref: FUN_00d33af0 */
GEN_FRAME unsigned int F_00d33af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd33af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  float * pfVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float * pfVar8;
  float * pfVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  float fVar24;
  float fVar25;
  undefined1 auVar23 [16];
  
  fVar7 = REFG(float, 0x10905c4);
  uVar11 = 0;
  if (param_1 != 0) {
    iVar10 = (int)param_2 - param_5;
    pfVar8 = (float *)(param_5 + 0x10);
    pfVar9 = param_2;
    do {
      fVar2 = *(float *)(param_4 + uVar11 * 4);
      pfVar1 = ((float *)GEN_TOP(((param_3 - (int)param_2) + (int)pfVar9)));
      fVar3 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      fVar13 = pfVar9[1];
      fVar12 = pfVar9[2];
      fVar14 = pfVar9[3];
      fVar15 = pfVar9[1];
      fVar16 = pfVar9[2];
      fVar18 = pfVar9[3];
      pfVar8[-4] = (*pfVar1 - *pfVar9) * fVar2 + *pfVar9;
      pfVar8[-3] = (fVar3 - fVar13) * fVar2 + fVar15;
      pfVar8[-2] = (fVar5 - fVar12) * fVar2 + fVar16;
      pfVar8[-1] = (fVar6 - fVar14) * fVar2 + fVar18;
      memcpy(&(auVar23), &(*(gen_v16 *)(iVar10 + (int)pfVar8)), sizeof(*(gen_v16 *)(iVar10 + (int)pfVar8)) < sizeof(auVar23) ? sizeof(*(gen_v16 *)(iVar10 + (int)pfVar8)) : sizeof(auVar23));
      fVar3 = (*(float *)((char *)&auVar23 + 12));
      pfVar1 = ((float *)GEN_TOP(((int)pfVar8 + (param_3 - (int)param_2) + iVar10)));
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar13 = pfVar1[3];
      fVar22 = (*(float *)((char *)&auVar23 + 0));
      fVar15 = *pfVar1 * fVar22;
      fVar24 = (*(float *)((char *)&auVar23 + 4));
      fVar16 = fVar5 * fVar24;
      fVar25 = (*(float *)((char *)&auVar23 + 8));
      fVar18 = fVar6 * fVar25;
      fVar20 = fVar13 * fVar3;
      fVar12 = fVar18 + fVar15;
      fVar14 = fVar20 + fVar16;
      fVar15 = fVar15 + fVar18;
      fVar16 = fVar16 + fVar20;
      uVar17 = (uint)gen_fl2bits(fVar12 + fVar14) & *(uint *)&REFG(undefined, 0x1134c84);
      uVar19 = (uint)gen_fl2bits(fVar16 + fVar15) & *(uint *)&REFG(undefined, 0x1134c88);
      uVar21 = (uint)gen_fl2bits(fVar15 + fVar16) & *(uint *)&REFG(undefined, 0x1134c8c);
      *pfVar8 = (gen_bits2f((uint)gen_fl2bits(fVar14 + fVar12) & *(uint *)&REFG(undefined, 0x1134c80) ^
                            (uint)gen_fl2bits(*pfVar1)) - fVar22) * fVar2 + fVar22;
      pfVar8[1] = (gen_bits2f(uVar17 ^ (uint)gen_fl2bits(fVar5)) - fVar24) * fVar2 + fVar24;
      pfVar8[2] = (gen_bits2f(uVar19 ^ (uint)gen_fl2bits(fVar6)) - fVar25) * fVar2 + fVar25;
      pfVar8[3] = (gen_bits2f(uVar21 ^ (uint)gen_fl2bits(fVar13)) - fVar3) * fVar2 + fVar3;
      fVar3 = *(float *)((int)pfVar8 + iVar10 + 0x10);
      fVar5 = *(float *)((int)pfVar8 + iVar10 + 0x14);
      fVar6 = *(float *)((int)pfVar8 + iVar10 + 0x18);
      fVar13 = *(float *)((int)pfVar8 + iVar10 + 0x1c);
      pfVar1 = ((float *)GEN_TOP(((int)pfVar8 + (param_3 - param_5) + 0x10)));
      fVar12 = pfVar1[1];
      fVar14 = pfVar1[2];
      fVar15 = pfVar1[3];
      pfVar8[4] = (*pfVar1 - fVar3) * fVar2 + fVar3;
      pfVar8[5] = (fVar12 - fVar5) * fVar2 + fVar5;
      pfVar8[6] = (fVar14 - fVar6) * fVar2 + fVar6;
      pfVar8[7] = (fVar15 - fVar13) * fVar2 + fVar13;
      fVar5 = *(float *)&REFG(undefined, 0x1138cac);
      fVar3 = *(float *)&REFG(undefined, 0x1138ca8);
      fVar2 = *(float *)&REFG(undefined, 0x1138ca4);
      if ((pfVar8[2] * pfVar8[2] + *pfVar8 * *pfVar8) +
          (pfVar8[3] * pfVar8[3] + pfVar8[1] * pfVar8[1]) < fVar7) {
        *pfVar8 = *(float *)&REFG(undefined, 0x1138ca0);
        pfVar8[1] = fVar2;
        pfVar8[2] = fVar3;
        pfVar8[3] = fVar5;
      }
      else {
        fVar2 = *pfVar8;
        fVar3 = pfVar8[1];
        fVar5 = pfVar8[2];
        fVar6 = pfVar8[3];
        fVar13 = fVar5 * fVar5 + fVar2 * fVar2;
        fVar12 = fVar6 * fVar6 + fVar3 * fVar3;
        fVar14 = fVar2 * fVar2 + fVar5 * fVar5;
        fVar15 = fVar3 * fVar3 + fVar6 * fVar6;
        fVar16 = fVar12 + fVar13;
        fVar13 = fVar13 + fVar12;
        fVar12 = fVar15 + fVar14;
        fVar14 = fVar14 + fVar15;
        (*(undefined4 *)((char *)&auVar4 + 4)) = (undefined4)gen_fl2bits(fVar13);
        (*(undefined4 *)((char *)&auVar4 + 0)) = (undefined4)gen_fl2bits(fVar16);
        (*(undefined4 *)((char *)&auVar4 + 8)) = (undefined4)gen_fl2bits(fVar12);
        (*(undefined4 *)((char *)&auVar4 + 12)) = (undefined4)gen_fl2bits(fVar14);
        gen_rsqrtps(&(auVar23), &(auVar23), &(auVar4));
        fVar22 = (*(float *)((char *)&auVar23 + 0));
        fVar15 = (*(float *)((char *)&auVar23 + 4));
        fVar18 = (*(float *)((char *)&auVar23 + 8));
        fVar20 = (*(float *)((char *)&auVar23 + 12));
        fVar13 = *(float *)&REFG(undefined, 0x1134c64) - (fVar15 * fVar13) * fVar15;
        fVar12 = *(float *)&REFG(undefined, 0x1134c68) - (fVar18 * fVar12) * fVar18;
        fVar14 = *(float *)&REFG(undefined, 0x1134c6c) - (fVar20 * fVar14) * fVar20;
        fVar15 = *(float *)&REFG(undefined, 0x1134c74) * fVar15;
        fVar18 = *(float *)&REFG(undefined, 0x1134c78) * fVar18;
        fVar20 = *(float *)&REFG(undefined, 0x1134c7c) * fVar20;
        *pfVar8 = fVar2 * ((*(float *)&REFG(undefined, 0x1134c60) - (fVar22 * fVar16) * fVar22) *
                          (*(float *)&REFG(undefined, 0x1134c70) * fVar22));
        pfVar8[1] = fVar3 * (fVar13 * fVar15);
        pfVar8[2] = fVar5 * (fVar12 * fVar18);
        pfVar8[3] = fVar6 * (fVar14 * fVar20);
      }
      uVar11 = uVar11 + 1;
      pfVar8 = pfVar8 + 0xc;
      pfVar9 = pfVar9 + 0xc;
    } while (uVar11 < param_1);
  }
  return;
}

/* ref: FUN_00d33c30 */
GEN_FRAME unsigned int F_00d33c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd33c30u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  float param_4 = (float)gen_a3;
  int param_5 = (int)gen_a4;
  float * pfVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float * pfVar8;
  float * pfVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  
  fVar7 = REFG(float, 0x10905c4);
  if (param_1 != 0) {
    iVar10 = (int)param_2 - param_5;
    pfVar8 = (float *)(param_5 + 0x10);
    pfVar9 = param_2;
    do {
      pfVar1 = ((float *)GEN_TOP(((param_3 - (int)param_2) + (int)pfVar9)));
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      fVar6 = pfVar9[1];
      fVar11 = pfVar9[2];
      fVar12 = pfVar9[3];
      fVar13 = pfVar9[1];
      fVar14 = pfVar9[2];
      fVar16 = pfVar9[3];
      pfVar8[-4] = (*pfVar1 - *pfVar9) * param_4 + *pfVar9;
      pfVar8[-3] = (fVar3 - fVar6) * param_4 + fVar13;
      pfVar8[-2] = (fVar4 - fVar11) * param_4 + fVar14;
      pfVar8[-1] = (fVar5 - fVar12) * param_4 + fVar16;
      pfVar1 = (float *)(iVar10 + (int)pfVar8);
      fVar3 = *pfVar1;
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      memcpy(&(auVar22), &(*((gen_v16 *)GEN_TOP(((int)pfVar8 + (param_3 - (int)param_2) + iVar10)))), sizeof(*((gen_v16 *)GEN_TOP(((int)pfVar8 + (param_3 - (int)param_2) + iVar10)))) < sizeof(auVar22) ? sizeof(*((gen_v16 *)GEN_TOP(((int)pfVar8 + (param_3 - (int)param_2) + iVar10)))) : sizeof(auVar22));
      fVar13 = (*(float *)((char *)&auVar22 + 0)) * fVar3;
      fVar14 = (*(float *)((char *)&auVar22 + 4)) * fVar4;
      fVar16 = (*(float *)((char *)&auVar22 + 8)) * fVar5;
      fVar18 = (*(float *)((char *)&auVar22 + 12)) * fVar6;
      fVar11 = fVar16 + fVar13;
      fVar12 = fVar18 + fVar14;
      fVar13 = fVar13 + fVar16;
      fVar14 = fVar14 + fVar18;
      uVar15 = (uint)gen_fl2bits(fVar11 + fVar12) & *(uint *)&REFG(undefined, 0x1134c84);
      uVar17 = (uint)gen_fl2bits(fVar14 + fVar13) & *(uint *)&REFG(undefined, 0x1134c88);
      uVar19 = (uint)gen_fl2bits(fVar13 + fVar14) & *(uint *)&REFG(undefined, 0x1134c8c);
      *pfVar8 = (gen_bits2f((uint)gen_fl2bits(fVar12 + fVar11) & *(uint *)&REFG(undefined, 0x1134c80) ^
                            (uint)gen_fl2bits((*(float *)((char *)&auVar22 + 0)))) - fVar3) * param_4 + fVar3;
      pfVar8[1] = (gen_bits2f(uVar15 ^ (uint)gen_fl2bits((*(float *)((char *)&auVar22 + 4)))) - fVar4) * param_4 + fVar4
      ;
      pfVar8[2] = (gen_bits2f(uVar17 ^ (uint)gen_fl2bits((*(float *)((char *)&auVar22 + 8)))) - fVar5) * param_4 + fVar5
      ;
      pfVar8[3] = (gen_bits2f(uVar19 ^ (uint)gen_fl2bits((*(float *)((char *)&auVar22 + 12)))) - fVar6) * param_4 +
                  fVar6;
      pfVar1 = ((float *)GEN_TOP(((int)pfVar8 + (param_3 - param_5) + 0x10)));
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      fVar6 = *(float *)((int)pfVar8 + iVar10 + 0x14);
      fVar11 = *(float *)((int)pfVar8 + iVar10 + 0x18);
      fVar12 = *(float *)((int)pfVar8 + iVar10 + 0x1c);
      fVar13 = *(float *)((int)pfVar8 + iVar10 + 0x14);
      fVar14 = *(float *)((int)pfVar8 + iVar10 + 0x18);
      fVar16 = *(float *)((int)pfVar8 + iVar10 + 0x1c);
      pfVar8[4] = (*pfVar1 - *(float *)((int)pfVar8 + iVar10 + 0x10)) * param_4 +
                  *(float *)((int)pfVar8 + iVar10 + 0x10);
      pfVar8[5] = (fVar3 - fVar6) * param_4 + fVar13;
      pfVar8[6] = (fVar4 - fVar11) * param_4 + fVar14;
      pfVar8[7] = (fVar5 - fVar12) * param_4 + fVar16;
      fVar5 = *(float *)&REFG(undefined, 0x1138cac);
      fVar4 = *(float *)&REFG(undefined, 0x1138ca8);
      fVar3 = *(float *)&REFG(undefined, 0x1138ca4);
      if ((pfVar8[2] * pfVar8[2] + *pfVar8 * *pfVar8) +
          (pfVar8[3] * pfVar8[3] + pfVar8[1] * pfVar8[1]) < fVar7) {
        *pfVar8 = *(float *)&REFG(undefined, 0x1138ca0);
        pfVar8[1] = fVar3;
        pfVar8[2] = fVar4;
        pfVar8[3] = fVar5;
      }
      else {
        fVar3 = *pfVar8;
        fVar4 = pfVar8[1];
        fVar5 = pfVar8[2];
        fVar6 = pfVar8[3];
        fVar11 = fVar5 * fVar5 + fVar3 * fVar3;
        fVar12 = fVar6 * fVar6 + fVar4 * fVar4;
        fVar13 = fVar3 * fVar3 + fVar5 * fVar5;
        fVar14 = fVar4 * fVar4 + fVar6 * fVar6;
        fVar16 = fVar12 + fVar11;
        fVar11 = fVar11 + fVar12;
        fVar12 = fVar14 + fVar13;
        fVar13 = fVar13 + fVar14;
        (*(undefined4 *)((char *)&auVar2 + 4)) = (undefined4)gen_fl2bits(fVar11);
        (*(undefined4 *)((char *)&auVar2 + 0)) = (undefined4)gen_fl2bits(fVar16);
        (*(undefined4 *)((char *)&auVar2 + 8)) = (undefined4)gen_fl2bits(fVar12);
        (*(undefined4 *)((char *)&auVar2 + 12)) = (undefined4)gen_fl2bits(fVar13);
        gen_rsqrtps(&(auVar22), &(auVar22), &(auVar2));
        fVar21 = (*(float *)((char *)&auVar22 + 0));
        fVar14 = (*(float *)((char *)&auVar22 + 4));
        fVar18 = (*(float *)((char *)&auVar22 + 8));
        fVar20 = (*(float *)((char *)&auVar22 + 12));
        fVar11 = *(float *)&REFG(undefined, 0x1134c64) - (fVar14 * fVar11) * fVar14;
        fVar12 = *(float *)&REFG(undefined, 0x1134c68) - (fVar18 * fVar12) * fVar18;
        fVar13 = *(float *)&REFG(undefined, 0x1134c6c) - (fVar20 * fVar13) * fVar20;
        fVar14 = *(float *)&REFG(undefined, 0x1134c74) * fVar14;
        fVar18 = *(float *)&REFG(undefined, 0x1134c78) * fVar18;
        fVar20 = *(float *)&REFG(undefined, 0x1134c7c) * fVar20;
        *pfVar8 = fVar3 * ((*(float *)&REFG(undefined, 0x1134c60) - (fVar21 * fVar16) * fVar21) *
                          (*(float *)&REFG(undefined, 0x1134c70) * fVar21));
        pfVar8[1] = fVar4 * (fVar11 * fVar14);
        pfVar8[2] = fVar5 * (fVar12 * fVar18);
        pfVar8[3] = fVar6 * (fVar13 * fVar20);
      }
      pfVar8 = pfVar8 + 0xc;
      pfVar9 = pfVar9 + 0xc;
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  return;
}

/* ref: FUN_00d33d60 */
GEN_FRAME unsigned int F_00d33d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd33d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  float param_5 = (float)gen_a4;
  int param_6 = (int)gen_a5;
  float * pfVar1;
  float * pfVar2;
  float * pfVar3;
  float * pfVar4;
  float * pfVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  uint local_8;
  
  fVar11 = REFG(float, 0x10905c4);
  local_8 = 0;
  if (param_1 != 0) {
    do {
      iVar12 = (int)*(short *)(param_2 + local_8 * 2);
      pfVar1 = (float *)(param_4 + iVar12 * 0x30);
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      pfVar2 = (float *)(param_3 + iVar12 * 0x30);
      fVar10 = pfVar2[1];
      fVar13 = pfVar2[2];
      fVar14 = pfVar2[3];
      pfVar3 = (float *)(param_3 + iVar12 * 0x30);
      fVar15 = pfVar3[1];
      fVar16 = pfVar3[2];
      fVar18 = pfVar3[3];
      pfVar4 = (float *)(param_6 + iVar12 * 0x30);
      *pfVar4 = (*pfVar1 - *pfVar2) * param_5 + *pfVar3;
      pfVar4[1] = (fVar7 - fVar10) * param_5 + fVar15;
      pfVar4[2] = (fVar8 - fVar13) * param_5 + fVar16;
      pfVar4[3] = (fVar9 - fVar14) * param_5 + fVar18;
      pfVar1 = (float *)(param_3 + 0x10 + iVar12 * 0x30);
      fVar7 = *pfVar1;
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      memcpy(&(auVar24), &(*(gen_v16 *)(param_4 + 0x10 + iVar12 * 0x30)), sizeof(*(gen_v16 *)(param_4 + 0x10 + iVar12 * 0x30)) < sizeof(auVar24) ? sizeof(*(gen_v16 *)(param_4 + 0x10 + iVar12 * 0x30)) : sizeof(auVar24));
      fVar15 = (*(float *)((char *)&auVar24 + 0)) * fVar7;
      fVar16 = (*(float *)((char *)&auVar24 + 4)) * fVar8;
      fVar18 = (*(float *)((char *)&auVar24 + 8)) * fVar9;
      fVar20 = (*(float *)((char *)&auVar24 + 12)) * fVar10;
      fVar13 = fVar18 + fVar15;
      fVar14 = fVar20 + fVar16;
      fVar15 = fVar15 + fVar18;
      fVar16 = fVar16 + fVar20;
      uVar17 = (uint)gen_fl2bits(fVar13 + fVar14) & *(uint *)&REFG(undefined, 0x1134c84);
      uVar19 = (uint)gen_fl2bits(fVar16 + fVar15) & *(uint *)&REFG(undefined, 0x1134c88);
      uVar21 = (uint)gen_fl2bits(fVar15 + fVar16) & *(uint *)&REFG(undefined, 0x1134c8c);
      pfVar1 = (float *)(param_6 + 0x10 + iVar12 * 0x30);
      *pfVar1 = (gen_bits2f((uint)gen_fl2bits(fVar14 + fVar13) & *(uint *)&REFG(undefined, 0x1134c80) ^
                            (uint)gen_fl2bits((*(float *)((char *)&auVar24 + 0)))) - fVar7) * param_5 + fVar7;
      pfVar1[1] = (gen_bits2f(uVar17 ^ (uint)gen_fl2bits((*(float *)((char *)&auVar24 + 4)))) - fVar8) * param_5 + fVar8
      ;
      pfVar1[2] = (gen_bits2f(uVar19 ^ (uint)gen_fl2bits((*(float *)((char *)&auVar24 + 8)))) - fVar9) * param_5 + fVar9
      ;
      pfVar1[3] = (gen_bits2f(uVar21 ^ (uint)gen_fl2bits((*(float *)((char *)&auVar24 + 12)))) - fVar10) * param_5 +
                  fVar10;
      pfVar1 = (float *)(param_4 + 0x20 + iVar12 * 0x30);
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      pfVar2 = (float *)(param_3 + 0x20 + iVar12 * 0x30);
      fVar10 = pfVar2[1];
      fVar13 = pfVar2[2];
      fVar14 = pfVar2[3];
      pfVar3 = (float *)(param_6 + 0x10 + iVar12 * 0x30);
      pfVar4 = (float *)(param_3 + 0x20 + iVar12 * 0x30);
      fVar15 = pfVar4[1];
      fVar16 = pfVar4[2];
      fVar18 = pfVar4[3];
      pfVar5 = (float *)(param_6 + 0x20 + iVar12 * 0x30);
      *pfVar5 = (*pfVar1 - *pfVar2) * param_5 + *pfVar4;
      pfVar5[1] = (fVar7 - fVar10) * param_5 + fVar15;
      pfVar5[2] = (fVar8 - fVar13) * param_5 + fVar16;
      pfVar5[3] = (fVar9 - fVar14) * param_5 + fVar18;
      fVar9 = *(float *)&REFG(undefined, 0x1138cac);
      fVar8 = *(float *)&REFG(undefined, 0x1138ca8);
      fVar7 = *(float *)&REFG(undefined, 0x1138ca4);
      if ((pfVar3[2] * pfVar3[2] + *pfVar3 * *pfVar3) +
          (pfVar3[3] * pfVar3[3] + pfVar3[1] * pfVar3[1]) < fVar11) {
        *pfVar3 = *(float *)&REFG(undefined, 0x1138ca0);
        pfVar3[1] = fVar7;
        pfVar3[2] = fVar8;
        pfVar3[3] = fVar9;
      }
      else {
        fVar7 = *pfVar3;
        fVar8 = pfVar3[1];
        fVar9 = pfVar3[2];
        fVar10 = pfVar3[3];
        fVar13 = fVar9 * fVar9 + fVar7 * fVar7;
        fVar14 = fVar10 * fVar10 + fVar8 * fVar8;
        fVar15 = fVar7 * fVar7 + fVar9 * fVar9;
        fVar16 = fVar8 * fVar8 + fVar10 * fVar10;
        fVar18 = fVar14 + fVar13;
        fVar13 = fVar13 + fVar14;
        fVar14 = fVar16 + fVar15;
        fVar15 = fVar15 + fVar16;
        (*(undefined4 *)((char *)&auVar6 + 4)) = (undefined4)gen_fl2bits(fVar13);
        (*(undefined4 *)((char *)&auVar6 + 0)) = (undefined4)gen_fl2bits(fVar18);
        (*(undefined4 *)((char *)&auVar6 + 8)) = (undefined4)gen_fl2bits(fVar14);
        (*(undefined4 *)((char *)&auVar6 + 12)) = (undefined4)gen_fl2bits(fVar15);
        gen_rsqrtps(&(auVar24), &(auVar24), &(auVar6));
        fVar23 = (*(float *)((char *)&auVar24 + 0));
        fVar16 = (*(float *)((char *)&auVar24 + 4));
        fVar20 = (*(float *)((char *)&auVar24 + 8));
        fVar22 = (*(float *)((char *)&auVar24 + 12));
        fVar13 = *(float *)&REFG(undefined, 0x1134c64) - (fVar16 * fVar13) * fVar16;
        fVar14 = *(float *)&REFG(undefined, 0x1134c68) - (fVar20 * fVar14) * fVar20;
        fVar15 = *(float *)&REFG(undefined, 0x1134c6c) - (fVar22 * fVar15) * fVar22;
        fVar16 = *(float *)&REFG(undefined, 0x1134c74) * fVar16;
        fVar20 = *(float *)&REFG(undefined, 0x1134c78) * fVar20;
        fVar22 = *(float *)&REFG(undefined, 0x1134c7c) * fVar22;
        *pfVar3 = fVar7 * ((*(float *)&REFG(undefined, 0x1134c60) - (fVar23 * fVar18) * fVar23) *
                          (*(float *)&REFG(undefined, 0x1134c70) * fVar23));
        pfVar3[1] = fVar8 * (fVar13 * fVar16);
        pfVar3[2] = fVar9 * (fVar14 * fVar20);
        pfVar3[3] = fVar10 * (fVar15 * fVar22);
      }
      local_8 = local_8 + 1;
    } while (local_8 < param_1);
  }
  return 0;
}

/* ref: FUN_00d33ea0 */
GEN_FRAME unsigned int F_00d33ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd33ea0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float * pfVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar22;
  uint uVar23;
  undefined1 auVar21 [16];
  uint uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 in_XMM3 [16] = {0};
  
  fVar20 = *(float *)&REFG(undefined, 0x1134c7c);
  fVar18 = *(float *)&REFG(undefined, 0x1134c78);
  fVar16 = *(float *)&REFG(undefined, 0x1134c74);
  fVar14 = *(float *)&REFG(undefined, 0x1134c70);
  fVar4 = *(float *)&REFG(undefined, 0x1134c6c);
  fVar3 = *(float *)&REFG(undefined, 0x1134c68);
  fVar2 = *(float *)&REFG(undefined, 0x1134c64);
  fVar1 = *(float *)&REFG(undefined, 0x1134c60);
  iVar11 = param_1;
  fVar13 = *(float *)&REFG(undefined, 0x1134c7c);
  fVar15 = *(float *)&REFG(undefined, 0x1134c78);
  fVar17 = *(float *)&REFG(undefined, 0x1134c74);
  fVar19 = *(float *)&REFG(undefined, 0x1134c70);
  fVar5 = *(float *)&REFG(undefined, 0x1134c6c);
  fVar6 = *(float *)&REFG(undefined, 0x1134c68);
  fVar7 = *(float *)&REFG(undefined, 0x1134c64);
  fVar8 = *(float *)&REFG(undefined, 0x1134c60);
  for (iVar9 = (int)(param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2; *(float *)&REFG(undefined, 0x1134c60) = fVar8,
      *(float *)&REFG(undefined, 0x1134c64) = fVar7, *(float *)&REFG(undefined, 0x1134c68) = fVar6,
      *(float *)&REFG(undefined, 0x1134c6c) = fVar5, *(float *)&REFG(undefined, 0x1134c70) = fVar19,
      *(float *)&REFG(undefined, 0x1134c74) = fVar17, *(float *)&REFG(undefined, 0x1134c78) = fVar15,
      *(float *)&REFG(undefined, 0x1134c7c) = fVar13, iVar9 != 0; iVar9 = iVar9 - 1) {
    (*(float *)((char *)&auVar25 + 0)) =
         *(float *)(iVar11 + 0x14) * *(float *)(iVar11 + 0x14) +
         *(float *)(iVar11 + 0x10) * *(float *)(iVar11 + 0x10);
    (*(float *)((char *)&auVar25 + 4)) =
         *(float *)(iVar11 + 0x44) * *(float *)(iVar11 + 0x44) +
         *(float *)(iVar11 + 0x40) * *(float *)(iVar11 + 0x40);
    (*(float *)((char *)&auVar25 + 8)) =
         *(float *)(iVar11 + 0x74) * *(float *)(iVar11 + 0x74) +
         *(float *)(iVar11 + 0x70) * *(float *)(iVar11 + 0x70);
    (*(float *)((char *)&auVar25 + 12)) =
         *(float *)(iVar11 + 0xa4) * *(float *)(iVar11 + 0xa4) +
         *(float *)(iVar11 + 0xa0) * *(float *)(iVar11 + 0xa0);
    (*(float *)((char *)&auVar21 + 0)) =
         (*(float *)(iVar11 + 0x1c) * *(float *)(iVar11 + 0x1c) +
         *(float *)(iVar11 + 0x18) * *(float *)(iVar11 + 0x18)) + (*(float *)((char *)&auVar25 + 0));
    (*(float *)((char *)&auVar21 + 4)) =
         (*(float *)(iVar11 + 0x4c) * *(float *)(iVar11 + 0x4c) +
         *(float *)(iVar11 + 0x48) * *(float *)(iVar11 + 0x48)) + (*(float *)((char *)&auVar25 + 4));
    (*(float *)((char *)&auVar21 + 8)) =
         (*(float *)(iVar11 + 0x7c) * *(float *)(iVar11 + 0x7c) +
         *(float *)(iVar11 + 0x78) * *(float *)(iVar11 + 0x78)) + (*(float *)((char *)&auVar25 + 8));
    (*(float *)((char *)&auVar21 + 12)) =
         (*(float *)(iVar11 + 0xac) * *(float *)(iVar11 + 0xac) +
         *(float *)(iVar11 + 0xa8) * *(float *)(iVar11 + 0xa8)) + (*(float *)((char *)&auVar25 + 12));
    gen_rsqrtps(&(auVar25), &(auVar25), &(auVar21));
    fVar13 = (*(float *)((char *)&auVar25 + 0));
    fVar15 = (*(float *)((char *)&auVar25 + 4));
    fVar17 = (*(float *)((char *)&auVar25 + 8));
    fVar19 = (*(float *)((char *)&auVar25 + 12));
    (*(float *)((char *)&in_XMM3 + 0)) = (fVar13 * (*(float *)((char *)&auVar21 + 0))) * fVar13;
    (*(float *)((char *)&in_XMM3 + 4)) = (fVar15 * (*(float *)((char *)&auVar21 + 4))) * fVar15;
    (*(float *)((char *)&in_XMM3 + 8)) = (fVar17 * (*(float *)((char *)&auVar21 + 8))) * fVar17;
    (*(float *)((char *)&in_XMM3 + 12)) = (fVar19 * (*(float *)((char *)&auVar21 + 12))) * fVar19;
    fVar13 = (fVar1 - (*(float *)((char *)&in_XMM3 + 0))) * (fVar14 * fVar13);
    fVar15 = (fVar2 - (*(float *)((char *)&in_XMM3 + 4))) * (fVar16 * fVar15);
    fVar17 = (fVar3 - (*(float *)((char *)&in_XMM3 + 8))) * (fVar18 * fVar17);
    fVar19 = (fVar4 - (*(float *)((char *)&in_XMM3 + 12))) * (fVar20 * fVar19);
    uVar12 = (uint)gen_fl2bits(fVar17) & *(uint *)&REFG(undefined, 0x1134d28) |
             (uint)gen_fl2bits(fVar13) & *(uint *)&REFG(undefined, 0x1134d20);
    uVar22 = (uint)gen_fl2bits(fVar19) & *(uint *)&REFG(undefined, 0x1134d2c) |
             (uint)gen_fl2bits(fVar15) & *(uint *)&REFG(undefined, 0x1134d24);
    uVar23 = (uint)gen_fl2bits(fVar13) & *(uint *)&REFG(undefined, 0x1134d20) |
             (uint)gen_fl2bits(fVar17) & *(uint *)&REFG(undefined, 0x1134d28);
    uVar24 = (uint)gen_fl2bits(fVar15) & *(uint *)&REFG(undefined, 0x1134d24) |
             (uint)gen_fl2bits(fVar19) & *(uint *)&REFG(undefined, 0x1134d2c);
    *(float *)(iVar11 + 0x10) = gen_bits2f(uVar22 | uVar12) * *(float *)(iVar11 + 0x10);
    *(float *)(iVar11 + 0x14) = gen_bits2f(uVar12 | uVar22) * *(float *)(iVar11 + 0x14);
    *(float *)(iVar11 + 0x18) = gen_bits2f(uVar24 | uVar23) * *(float *)(iVar11 + 0x18);
    *(float *)(iVar11 + 0x1c) = gen_bits2f(uVar23 | uVar24) * *(float *)(iVar11 + 0x1c);
    uVar12 = (uint)gen_fl2bits(fVar17) & *(uint *)&REFG(undefined, 0x1134d38) |
             (uint)gen_fl2bits(fVar13) & *(uint *)&REFG(undefined, 0x1134d30);
    uVar22 = (uint)gen_fl2bits(fVar19) & *(uint *)&REFG(undefined, 0x1134d3c) |
             (uint)gen_fl2bits(fVar15) & *(uint *)&REFG(undefined, 0x1134d34);
    uVar23 = (uint)gen_fl2bits(fVar13) & *(uint *)&REFG(undefined, 0x1134d30) |
             (uint)gen_fl2bits(fVar17) & *(uint *)&REFG(undefined, 0x1134d38);
    uVar24 = (uint)gen_fl2bits(fVar15) & *(uint *)&REFG(undefined, 0x1134d34) |
             (uint)gen_fl2bits(fVar19) & *(uint *)&REFG(undefined, 0x1134d3c);
    *(float *)(iVar11 + 0x40) = gen_bits2f(uVar22 | uVar12) * *(float *)(iVar11 + 0x40);
    *(float *)(iVar11 + 0x44) = gen_bits2f(uVar12 | uVar22) * *(float *)(iVar11 + 0x44);
    *(float *)(iVar11 + 0x48) = gen_bits2f(uVar24 | uVar23) * *(float *)(iVar11 + 0x48);
    *(float *)(iVar11 + 0x4c) = gen_bits2f(uVar23 | uVar24) * *(float *)(iVar11 + 0x4c);
    uVar12 = (uint)gen_fl2bits(fVar17) & *(uint *)&REFG(undefined, 0x1134d48) |
             (uint)gen_fl2bits(fVar13) & *(uint *)&REFG(undefined, 0x1134d40);
    uVar22 = (uint)gen_fl2bits(fVar19) & *(uint *)&REFG(undefined, 0x1134d4c) |
             (uint)gen_fl2bits(fVar15) & *(uint *)&REFG(undefined, 0x1134d44);
    uVar23 = (uint)gen_fl2bits(fVar13) & *(uint *)&REFG(undefined, 0x1134d40) |
             (uint)gen_fl2bits(fVar17) & *(uint *)&REFG(undefined, 0x1134d48);
    uVar24 = (uint)gen_fl2bits(fVar15) & *(uint *)&REFG(undefined, 0x1134d44) |
             (uint)gen_fl2bits(fVar19) & *(uint *)&REFG(undefined, 0x1134d4c);
    *(float *)(iVar11 + 0x70) = gen_bits2f(uVar22 | uVar12) * *(float *)(iVar11 + 0x70);
    *(float *)(iVar11 + 0x74) = gen_bits2f(uVar12 | uVar22) * *(float *)(iVar11 + 0x74);
    *(float *)(iVar11 + 0x78) = gen_bits2f(uVar24 | uVar23) * *(float *)(iVar11 + 0x78);
    *(float *)(iVar11 + 0x7c) = gen_bits2f(uVar23 | uVar24) * *(float *)(iVar11 + 0x7c);
    uVar12 = (uint)gen_fl2bits(fVar17) & *(uint *)&REFG(undefined, 0x1134d58) |
             (uint)gen_fl2bits(fVar13) & *(uint *)&REFG(undefined, 0x1134d50);
    uVar22 = (uint)gen_fl2bits(fVar19) & *(uint *)&REFG(undefined, 0x1134d5c) |
             (uint)gen_fl2bits(fVar15) & *(uint *)&REFG(undefined, 0x1134d54);
    uVar23 = (uint)gen_fl2bits(fVar13) & *(uint *)&REFG(undefined, 0x1134d50) |
             (uint)gen_fl2bits(fVar17) & *(uint *)&REFG(undefined, 0x1134d58);
    uVar24 = (uint)gen_fl2bits(fVar15) & *(uint *)&REFG(undefined, 0x1134d54) |
             (uint)gen_fl2bits(fVar19) & *(uint *)&REFG(undefined, 0x1134d5c);
    *(float *)(iVar11 + 0xa0) = gen_bits2f(uVar22 | uVar12) * *(float *)(iVar11 + 0xa0);
    *(float *)(iVar11 + 0xa4) = gen_bits2f(uVar12 | uVar22) * *(float *)(iVar11 + 0xa4);
    *(float *)(iVar11 + 0xa8) = gen_bits2f(uVar24 | uVar23) * *(float *)(iVar11 + 0xa8);
    *(float *)(iVar11 + 0xac) = gen_bits2f(uVar23 | uVar24) * *(float *)(iVar11 + 0xac);
    iVar11 = iVar11 + 0xc0;
    fVar13 = *(float *)&REFG(undefined, 0x1134c7c);
    fVar15 = *(float *)&REFG(undefined, 0x1134c78);
    fVar17 = *(float *)&REFG(undefined, 0x1134c74);
    fVar19 = *(float *)&REFG(undefined, 0x1134c70);
    fVar5 = *(float *)&REFG(undefined, 0x1134c6c);
    fVar6 = *(float *)&REFG(undefined, 0x1134c68);
    fVar7 = *(float *)&REFG(undefined, 0x1134c64);
    fVar8 = *(float *)&REFG(undefined, 0x1134c60);
  }
  uVar12 = param_2 & 0x80000003;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xfffffffc) + 1;
  }
  if (uVar12 != 0) {
    pfVar10 = (float *)(iVar11 + 0x10);
    do {
      fVar1 = *pfVar10;
      fVar2 = pfVar10[1];
      fVar3 = pfVar10[2];
      fVar4 = pfVar10[3];
      fVar14 = fVar3 * fVar3 + fVar1 * fVar1;
      fVar16 = fVar4 * fVar4 + fVar2 * fVar2;
      fVar18 = fVar1 * fVar1 + fVar3 * fVar3;
      fVar20 = fVar2 * fVar2 + fVar4 * fVar4;
      (*(float *)((char *)&auVar26 + 0)) = fVar16 + fVar14;
      (*(float *)((char *)&auVar26 + 4)) = fVar14 + fVar16;
      (*(float *)((char *)&auVar26 + 8)) = fVar20 + fVar18;
      (*(float *)((char *)&auVar26 + 12)) = fVar18 + fVar20;
      gen_rsqrtps(&(in_XMM3), &(in_XMM3), &(auVar26));
      fVar14 = (*(float *)((char *)&in_XMM3 + 0));
      fVar16 = (*(float *)((char *)&in_XMM3 + 4));
      fVar18 = (*(float *)((char *)&in_XMM3 + 8));
      fVar20 = (*(float *)((char *)&in_XMM3 + 12));
      *pfVar10 = fVar1 * ((fVar8 - (fVar14 * (*(float *)((char *)&auVar26 + 0))) * fVar14) * (fVar19 * fVar14));
      pfVar10[1] = fVar2 * ((fVar7 - (fVar16 * (*(float *)((char *)&auVar26 + 4))) * fVar16) * (fVar17 * fVar16));
      pfVar10[2] = fVar3 * ((fVar6 - (fVar18 * (*(float *)((char *)&auVar26 + 8))) * fVar18) * (fVar15 * fVar18));
      pfVar10[3] = fVar4 * ((fVar5 - (fVar20 * (*(float *)((char *)&auVar26 + 12))) * fVar20) * (fVar13 * fVar20));
      pfVar10 = pfVar10 + 0xc;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return 0;
}

/* ref: FUN_00d34070 */
GEN_FRAME uint F_00d34070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd34070u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  gen_v16 * pauVar4;
  gen_v16 * pauVar5;
  int iVar6;
  int iVar7;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar8 [16];
  undefined1 auVar12 [16];
  
  pauVar4 = (*(gen_v16 * PTR32 *)&gen_args[4]);
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138cbc);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138cb8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138cb4);
  pauVar5 = (gen_v16 *)0x0;
  *((undefined4 *)GEN_TOP(*(*(gen_v16 * PTR32 *)&gen_args[4]))) = *(undefined4 *)&REFG(undefined, 0x1138cb0);
  *((undefined4 *)GEN_TOP((*(*(gen_v16 * PTR32 *)&gen_args[4]) + 4))) = uVar1;
  *((undefined4 *)GEN_TOP((*(*(gen_v16 * PTR32 *)&gen_args[4]) + 8))) = uVar2;
  *((undefined4 *)GEN_TOP((*(*(gen_v16 * PTR32 *)&gen_args[4]) + 0xc))) = uVar3;
  uVar9 = *((uint *)GEN_TOP((*(*(gen_v16 * PTR32 *)&gen_args[4]) + 4))) ^ *(uint *)&REFG(undefined, 0x10ab9c4);
  uVar10 = *((uint *)GEN_TOP((*(*(gen_v16 * PTR32 *)&gen_args[4]) + 8))) ^ *(uint *)&REFG(undefined, 0x10ab9c8);
  uVar11 = *((uint *)GEN_TOP((*(*(gen_v16 * PTR32 *)&gen_args[4]) + 0xc))) ^ *(uint *)&REFG(undefined, 0x10ab9cc);
  *((uint *)GEN_TOP((*(gen_v16 * PTR32 *)&gen_args[4])[1])) = *((uint *)GEN_TOP(*(*(gen_v16 * PTR32 *)&gen_args[4]))) ^ *(uint *)&REFG(undefined, 0x10ab9c0);
  *((uint *)GEN_TOP(((*(gen_v16 * PTR32 *)&gen_args[4])[1] + 4))) = uVar9;
  *((uint *)GEN_TOP(((*(gen_v16 * PTR32 *)&gen_args[4])[1] + 8))) = uVar10;
  *((uint *)GEN_TOP(((*(gen_v16 * PTR32 *)&gen_args[4])[1] + 0xc))) = uVar11;
  (*(gen_v16 * PTR32 *)(gen_frame + 0x0)) = (gen_v16 *)0x0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  if ((*(int *)&gen_args[0]) != 0) {
    (*(gen_v16 * PTR32 *)&gen_args[4]) = (gen_v16 *)((*(int *)&gen_args[0]) * 0x30);
    pauVar5 = ((gen_v16 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(gen_v16 * PTR32 *)&gen_args[4]))));
    uVar9 = (int)(*(gen_v16 * PTR32 *)&gen_args[4]) / 0x30;
    if (uVar9 != 0) goto LAB_00d340e3;
  }
  uVar9 = 0x80000000;
LAB_00d340e3: ;
  (*(uint *)(gen_frame + 0x8)) = uVar9;
  (*(gen_v16 * PTR32 *)(gen_frame + 0x0)) = pauVar5;
  (*(int *)(gen_frame + 0x4)) = (*(int *)&gen_args[0]);
  iVar7 = (*(int *)&gen_args[0]);
  if ((int)(uVar9 & 0x3fffffff) < (*(int *)&gen_args[0])) {
    iVar7 = (uVar9 & 0x3fffffff) * 2;
    if (iVar7 <= (*(int *)&gen_args[0])) {
      iVar7 = (*(int *)&gen_args[0]);
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(gen_v16 * PTR32 *)(gen_frame + 0x0)),iVar7,0x30);
    iVar7 = (*(int *)(gen_frame + 0x4));
  }
  iVar6 = (*(int *)&gen_args[0]) - iVar7;
  if (0 < iVar6) {
    pauVar5 = (*(gen_v16 * PTR32 *)(gen_frame + 0x0)) + iVar7 * 3 + 2;
    do {
      uVar3 = REFG(uint, 0x0135177c);
      uVar2 = REFG(uint, 0x01351778);
      uVar1 = REFG(uint, 0x01351774);
      *(undefined4 *)pauVar5[-2] = *(undefined4 *)&REFG(undefined, 0x1351770);
      *(undefined4 *)(pauVar5[-2] + 4) = uVar1;
      *(undefined4 *)(pauVar5[-2] + 8) = uVar2;
      *(undefined4 *)(pauVar5[-2] + 0xc) = uVar3;
      uVar3 = REFG(uint, 0x0135178c);
      uVar2 = REFG(uint, 0x01351788);
      uVar1 = REFG(uint, 0x01351784);
      *(undefined4 *)pauVar5[-1] = *(undefined4 *)&REFG(undefined, 0x1351780);
      *(undefined4 *)(pauVar5[-1] + 4) = uVar1;
      *(undefined4 *)(pauVar5[-1] + 8) = uVar2;
      *(undefined4 *)(pauVar5[-1] + 0xc) = uVar3;
      uVar3 = REFG(uint, 0x0135179c);
      uVar2 = REFG(uint, 0x01351798);
      uVar1 = REFG(uint, 0x01351794);
      *(undefined4 *)*pauVar5 = *(undefined4 *)&REFG(undefined, 0x1351790);
      *(undefined4 *)(*pauVar5 + 4) = uVar1;
      *(undefined4 *)(*pauVar5 + 8) = uVar2;
      *(undefined4 *)(*pauVar5 + 0xc) = uVar3;
      pauVar5 = pauVar5 + 3;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  (*(int *)(gen_frame + 0x4)) = (*(int *)&gen_args[0]);
  F_00d33240((*(int *)&gen_args[0]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[1]),(*(gen_v16 * PTR32 *)(gen_frame + 0x0)));
  if ((*(int *)&gen_args[0]) != 0) {
    memcpy(&(auVar8), &(pauVar4[1]), sizeof(pauVar4[1]) < sizeof(auVar8) ? sizeof(pauVar4[1]) : sizeof(auVar8));
    pauVar5 = (*(gen_v16 * PTR32 *)(gen_frame + 0x0));
    iVar7 = (*(int *)&gen_args[0]);
    do {
      gen_minps(&(auVar12), &(*pauVar4), &(*pauVar5));
      memcpy(&(*pauVar4), &(auVar12), sizeof(auVar12) < sizeof(*pauVar4) ? sizeof(auVar12) : sizeof(*pauVar4));
      gen_maxps(&(auVar8), &(auVar8), &(*pauVar5));
      pauVar5 = pauVar5 + 3;
      iVar7 = iVar7 - 1;
      memcpy(&(pauVar4[1]), &(auVar8), sizeof(auVar8) < sizeof(pauVar4[1]) ? sizeof(auVar8) : sizeof(pauVar4[1]));
    } while (iVar7 != 0);
  }
  (*(int *)(gen_frame + 0x4)) = 0;
  uVar9 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar9 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),(*(gen_v16 * PTR32 *)(gen_frame + 0x0)),((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 0x30);
  }
  return uVar9;
}

/* ref: FUN_00d341d0 */
GEN_FRAME uint F_00d341d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd341d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  short sVar1;
  uint uVar2;
  LPVOID pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar5 = *(uint *)(param_2 + 0x1c);
  uVar2 = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0x80000000;
  (*(uint *)(gen_frame + 0x18)) = uVar5;
  if (uVar5 != 0) {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar2 = *(uint *)((int)pvVar3 + 0xc);
    uVar7 = uVar5 * 2 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar3 + 8) < (int)uVar7) || (*(uint *)((int)pvVar3 + 0x10) < uVar2 + uVar7))
    {
      uVar2 = F_00d94390(pvVar3 GEN_EDX_ARG,uVar7);
    }
    else {
      *(uint *)((int)pvVar3 + 0xc) = uVar2 + uVar7;
    }
  }
  (*(uint *)(gen_frame + 0x8)) = uVar2;
  (*(uint *)(gen_frame + 0x14)) = uVar2;
  (*(uint *)(gen_frame + 0x10)) = uVar5 | 0x80000000;
  for (sVar1 = (short)param_4; (0 < sVar1 && (sVar1 != (short)param_3));
      sVar1 = *((short *)GEN_TOP((*(int *)(param_2 + 0xc) + sVar1 * 2)))) {
    if ((*(uint *)(gen_frame + 0xc)) == ((*(uint *)(gen_frame + 0x10)) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x8)),2);
    }
    *(short *)((*(uint *)(gen_frame + 0x8)) + (*(uint *)(gen_frame + 0xc)) * 2) = sVar1;
    (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
  }
  if (-1 < sVar1) {
    if ((*(uint *)(gen_frame + 0xc)) == ((*(uint *)(gen_frame + 0x10)) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x8)),2);
    }
    *(short *)((*(uint *)(gen_frame + 0x8)) + (*(uint *)(gen_frame + 0xc)) * 2) = (short)param_3;
    uVar5 = (*(uint *)(gen_frame + 0xc)) + 1;
    (*(uint *)(gen_frame + 0xc)) = uVar5;
    if ((int)(param_5[2] & 0x3fffffffU) < (int)uVar5) {
      uVar2 = (param_5[2] & 0x3fffffffU) * 2;
      uVar7 = uVar5;
      if ((int)uVar5 < (int)uVar2) {
        uVar7 = uVar2;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_5,uVar7,2);
    }
    iVar4 = 0;
    param_5[1] = uVar5;
    if (0 < (int)uVar5) {
      iVar6 = uVar5 * 2;
      do {
        *(undefined2 *)(*param_5 + iVar4 * 2) = *(undefined2 *)(iVar6 - 2 + (*(uint *)(gen_frame + 0x8)));
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 - 2;
      } while (iVar4 < (int)uVar5);
    }
  }
  uVar2 = (*(uint *)(gen_frame + 0x18));
  uVar5 = (*(uint *)(gen_frame + 0x14));
  *(bool *)param_1 = -1 < sVar1;
  if ((*(uint *)(gen_frame + 0x14)) == (*(uint *)(gen_frame + 0x8))) {
    (*(uint *)(gen_frame + 0xc)) = 0;
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = uVar2 * 2 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar2) || (uVar2 + uVar5 != *(int *)((int)pvVar3 + 0xc)))
     || (*(uint *)((int)pvVar3 + 0x14) == uVar5)) {
    F_00d945c0(pvVar3 GEN_EDX_ARG,uVar5,uVar2);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = uVar5;
  }
  (*(uint *)(gen_frame + 0xc)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x10))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x8)),((*(uint *)(gen_frame + 0x10)) & 0x3fffffff) * 2);
  }
  return param_1;
}

/* ref: FUN_00d343a0 */
GEN_FRAME uint F_00d343a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd343a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  short sVar1;
  uint uVar2;
  LPVOID pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  
  uVar7 = *(uint *)(param_1 + 0x1c);
  uVar2 = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0x80000000;
  (*(uint *)(gen_frame + 0x18)) = uVar7;
  if (uVar7 != 0) {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar2 = *(uint *)((int)pvVar3 + 0xc);
    uVar6 = uVar7 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar3 + 8) < (int)uVar6) || (*(uint *)((int)pvVar3 + 0x10) < uVar2 + uVar6))
    {
      uVar2 = F_00d94390(pvVar3 GEN_EDX_ARG,uVar6);
    }
    else {
      *(uint *)((int)pvVar3 + 0xc) = uVar2 + uVar6;
    }
  }
  iVar5 = *(int *)(param_1 + 0x1c);
  (*(uint *)(gen_frame + 0x10)) = uVar7 | 0x80000000;
  (*(uint *)(gen_frame + 0x8)) = uVar2;
  (*(uint *)(gen_frame + 0x14)) = uVar2;
  if ((int)(uVar7 & 0x3fffffff) < iVar5) {
    iVar4 = (uVar7 & 0x3fffffff) * 2;
    if (iVar4 <= iVar5) {
      iVar4 = iVar5;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x8)),iVar4,1);
  }
  if (0 < iVar5 - (*(int *)(gen_frame + 0xc))) {
    F_00c48350((undefined *)((*(int *)(gen_frame + 0xc)) + (*(uint *)(gen_frame + 0x8))),0,iVar5 - (*(int *)(gen_frame + 0xc)));
  }
  (*(int *)(gen_frame + 0xc)) = iVar5;
  if ((char)param_4 != '\0') {
    if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_3,2);
    }
    *(short *)(*param_3 + param_3[1] * 2) = (short)param_2;
    param_3[1] = param_3[1] + 1;
  }
  sVar8 = (short)param_2 + 1;
  *(undefined1 *)((int)(short)param_2 + (*(uint *)(gen_frame + 0x8))) = 1;
  iVar5 = (int)sVar8;
  uVar7 = (*(uint *)(gen_frame + 0x8));
  if (iVar5 < *(int *)(param_1 + 0x1c)) {
    do {
      sVar1 = *((short *)GEN_TOP((*(int *)(param_1 + 0xc) + iVar5 * 2)));
      if ((sVar1 != -1) && (*(char *)((int)sVar1 + uVar7) != '\0')) {
        *(undefined1 *)(iVar5 + uVar7) = 1;
        if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_3,2);
        }
        *(short *)(*param_3 + param_3[1] * 2) = sVar8;
        param_3[1] = param_3[1] + 1;
        uVar7 = (*(uint *)(gen_frame + 0x8));
      }
      sVar8 = sVar8 + 1;
      iVar5 = (int)sVar8;
    } while (iVar5 < *(int *)(param_1 + 0x1c));
  }
  uVar6 = (*(uint *)(gen_frame + 0x18));
  uVar2 = (*(uint *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0x14)) == uVar7) {
    (*(int *)(gen_frame + 0xc)) = 0;
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar7 = uVar6 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar7) || (uVar7 + uVar2 != *(int *)((int)pvVar3 + 0xc)))
     || (*(uint *)((int)pvVar3 + 0x14) == uVar2)) {
    F_00d945c0(pvVar3 GEN_EDX_ARG,uVar2,uVar7);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = uVar2;
  }
  (*(int *)(gen_frame + 0xc)) = 0;
  uVar7 = (*(uint *)(gen_frame + 0x10));
  if (-1 < (int)(*(uint *)(gen_frame + 0x10))) {
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0x10)) & 0x3fffffff);
  }
  return uVar7;
}

/* ref: FUN_00d34570 */
GEN_FRAME uint F_00d34570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34570u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  LPVOID pvVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  
  uVar6 = *(uint *)(param_1 + 0x1c);
  uVar4 = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0x80000000;
  (*(uint *)(gen_frame + 0x18)) = uVar6;
  if (uVar6 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar4 = *(uint *)((int)pvVar1 + 0xc);
    uVar5 = uVar6 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar1 + 8) < (int)uVar5) || (*(uint *)((int)pvVar1 + 0x10) < uVar4 + uVar5))
    {
      uVar4 = F_00d94390(pvVar1 GEN_EDX_ARG,uVar5);
    }
    else {
      *(uint *)((int)pvVar1 + 0xc) = uVar4 + uVar5;
    }
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  (*(uint *)(gen_frame + 0x10)) = uVar6 | 0x80000000;
  (*(uint *)(gen_frame + 0x8)) = uVar4;
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  if ((int)(uVar6 & 0x3fffffff) < iVar2) {
    iVar3 = (uVar6 & 0x3fffffff) * 2;
    if (iVar3 <= iVar2) {
      iVar3 = iVar2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x8)),iVar3,1);
  }
  if (0 < iVar2 - (*(int *)(gen_frame + 0xc))) {
    F_00c48350((undefined *)((*(int *)(gen_frame + 0xc)) + (*(uint *)(gen_frame + 0x8))),0,iVar2 - (*(int *)(gen_frame + 0xc)));
  }
  iVar3 = 0;
  (*(int *)(gen_frame + 0xc)) = iVar2;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      sVar7 = *((short *)GEN_TOP((*(int *)(param_1 + 0xc) + iVar3 * 2)));
      if (sVar7 != -1) {
        *(undefined1 *)((int)sVar7 + (*(uint *)(gen_frame + 0x8))) = 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x10));
  }
  sVar7 = 0;
  uVar6 = (*(uint *)(gen_frame + 0x8));
  if (0 < *(int *)(param_1 + 0x1c)) {
    iVar2 = 0;
    do {
      if (*(char *)(iVar2 + uVar6) == '\0') {
        if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,2);
        }
        *(short *)(*param_2 + param_2[1] * 2) = sVar7;
        param_2[1] = param_2[1] + 1;
        uVar6 = (*(uint *)(gen_frame + 0x8));
      }
      sVar7 = sVar7 + 1;
      iVar2 = (int)sVar7;
    } while (iVar2 < *(int *)(param_1 + 0x1c));
  }
  uVar5 = (*(uint *)(gen_frame + 0x18));
  uVar4 = (*(uint *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0x14)) == uVar6) {
    (*(int *)(gen_frame + 0xc)) = 0;
  }
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar6 = uVar5 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar1 + 8) < (int)uVar6) || (uVar6 + uVar4 != *(int *)((int)pvVar1 + 0xc)))
     || (*(uint *)((int)pvVar1 + 0x14) == uVar4)) {
    F_00d945c0(pvVar1 GEN_EDX_ARG,uVar4,uVar6);
  }
  else {
    *(uint *)((int)pvVar1 + 0xc) = uVar4;
  }
  (*(int *)(gen_frame + 0xc)) = 0;
  uVar6 = (*(uint *)(gen_frame + 0x10));
  if (-1 < (int)(*(uint *)(gen_frame + 0x10))) {
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0x10)) & 0x3fffffff);
  }
  return uVar6;
}

/* ref: FUN_00d34710 */
GEN_FRAME uint GEN_THISCALL F_00d34710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd34710u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00d34730 */
GEN_FRAME uint GEN_THISCALL F_00d34730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd34730u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00d347b0 */
GEN_FRAME uint GEN_THISCALL F_00d347b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd347b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_00d347c0 */
GEN_FRAME uint GEN_THISCALL F_00d347c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd347c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00d347f0 */
GEN_FRAME uint GEN_THISCALL F_00d347f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd347f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,2);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00d34840 */
GEN_FRAME unsigned int F_00d34840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34840u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined2 *)(param_1 + iVar1 * 2) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00d34880 */
GEN_FRAME uint GEN_THISCALL F_00d34880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd34880u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 0x30)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)(*(int * PTR32 *)&gen_args[1]) / 0x30;
  return uVar2;
}

/* ref: FUN_00d348d0 */
GEN_FRAME unsigned int F_00d348d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd348d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined1 *)(iVar1 + param_1) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00d34900 */
GEN_FRAME uint GEN_THISCALL F_00d34900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 2);
  return uVar1;
}

/* ref: FUN_00d34930 */
GEN_FRAME uint GEN_THISCALL F_00d34930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd34930u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00d34940 */
GEN_FRAME uint GEN_THISCALL F_00d34940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = param_2[1] & *(uint *)&REFG(undefined, 0x1134c84);
  uVar5 = param_2[2] & *(uint *)&REFG(undefined, 0x1134c88);
  uVar6 = param_2[3] & *(uint *)&REFG(undefined, 0x1134c8c);
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(uint *)this = *param_2 & *(uint *)&REFG(undefined, 0x1134c80) ^ *param_1;
  *(uint *)((int)this + 4) = uVar4 ^ uVar1;
  *(uint *)((int)this + 8) = uVar5 ^ uVar2;
  *(uint *)((int)this + 0xc) = uVar6 ^ uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d34960 */
GEN_FRAME uint GEN_THISCALL F_00d34960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd34960u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *in_ecx = uVar1;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar1;
  in_ecx[3] = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_00d34980 */
GEN_FRAME uint F_00d34980(unsigned int gen_a0)
{
  GEN_ENTER(0xd34980u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)(&REFG(undefined, 0x1138ad0) + param_1 * 0x10);
}

/* ref: FUN_00d34990 */
GEN_FRAME uint GEN_THISCALL F_00d34990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd34990u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *in_ecx = *param_2 * *in_ecx;
  in_ecx[1] = fVar1 * in_ecx[1];
  in_ecx[2] = fVar2 * in_ecx[2];
  in_ecx[3] = fVar3 * in_ecx[3];
  return (uint)param_2;
}

/* ref: FUN_00d349b0 */
GEN_FRAME uint GEN_THISCALL F_00d349b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd349b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  fVar7 = param_3[1];
  fVar8 = param_3[2];
  fVar9 = param_3[3];
  *(float *)this = (*param_2 - *param_1) * *param_3 + *param_1;
  *(float *)((int)this + 4) = (fVar4 - fVar1) * fVar7 + fVar1;
  *(float *)((int)this + 8) = (fVar5 - fVar2) * fVar8 + fVar2;
  *(float *)((int)this + 0xc) = (fVar6 - fVar3) * fVar9 + fVar3;
  return (uint)param_3;
}

/* ref: FUN_00d349e0 */
GEN_FRAME uint F_00d349e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd349e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  float * param_8 = (float *)(uintptr_t)gen_a7;
  float * param_9 = (float *)(uintptr_t)gen_a8;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  fVar5 = *param_4;
  fVar6 = param_4[1];
  fVar7 = param_4[2];
  fVar8 = param_4[3];
  fVar9 = *param_5;
  fVar10 = param_5[1];
  fVar11 = param_5[2];
  fVar12 = param_5[3];
  fVar13 = *param_6;
  fVar14 = param_6[1];
  fVar15 = param_6[2];
  fVar16 = param_6[3];
  fVar17 = *param_7;
  fVar18 = param_7[1];
  fVar19 = param_7[2];
  fVar20 = param_7[3];
  fVar21 = *param_8;
  fVar22 = param_8[1];
  fVar23 = param_8[2];
  fVar24 = param_8[3];
  *param_9 = (param_1[3] * param_2[3] + param_1[2] * param_2[2]) +
             (param_1[1] * param_2[1] + *param_1 * *param_2);
  param_9[1] = (fVar4 * fVar8 + fVar3 * fVar7) + (fVar2 * fVar6 + fVar1 * fVar5);
  param_9[2] = (fVar12 * fVar16 + fVar11 * fVar15) + (fVar10 * fVar14 + fVar9 * fVar13);
  param_9[3] = (fVar20 * fVar24 + fVar19 * fVar23) + (fVar18 * fVar22 + fVar17 * fVar21);
  return (uint)param_7;
}

/* ref: FUN_00d34a50 */
GEN_FRAME uint GEN_THISCALL F_00d34a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd34a50u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *in_ecx = *param_2 * *in_ecx;
  in_ecx[1] = fVar1 * in_ecx[1];
  in_ecx[2] = fVar2 * in_ecx[2];
  in_ecx[3] = fVar3 * in_ecx[3];
  return (uint)param_2;
}

/* ref: FUN_00d34a70 */
GEN_FRAME uint GEN_THISCALL F_00d34a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd34a70u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *in_ecx = *param_2 * *in_ecx;
  in_ecx[1] = fVar1 * in_ecx[1];
  in_ecx[2] = fVar2 * in_ecx[2];
  in_ecx[3] = fVar3 * in_ecx[3];
  return (uint)param_2;
}

/* ref: FUN_00d34a90 */
GEN_FRAME uint GEN_THISCALL F_00d34a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *(float *)this = *param_1 + *param_2;
  *(float *)((int)this + 4) = fVar1 + fVar4;
  *(float *)((int)this + 8) = fVar2 + fVar5;
  *(float *)((int)this + 0xc) = fVar3 + fVar6;
  return (uint)param_1;
}

/* ref: FUN_00d34ab0 */
GEN_FRAME uint GEN_THISCALL F_00d34ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd34ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  fVar7 = param_3[1];
  fVar8 = param_3[2];
  fVar9 = param_3[3];
  *(float *)this = (*param_2 - *param_1) * *param_3 + *param_1;
  *(float *)((int)this + 4) = (fVar4 - fVar1) * fVar7 + fVar1;
  *(float *)((int)this + 8) = (fVar5 - fVar2) * fVar8 + fVar2;
  *(float *)((int)this + 0xc) = (fVar6 - fVar3) * fVar9 + fVar3;
  return (uint)param_3;
}

/* ref: FUN_00d34b00 */
GEN_FRAME uint F_00d34b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34b00u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  gen_rsqrtps(&(auVar6), &(in_XMM1), &(auVar1));
  fVar5 = (*(float *)((char *)&auVar6 + 0));
  fVar2 = (*(float *)((char *)&auVar6 + 4));
  fVar3 = (*(float *)((char *)&auVar6 + 8));
  fVar4 = (*(float *)((char *)&auVar6 + 12));
  fVar7 = *(float *)&REFG(undefined, 0x1134c64) - ((*(float *)((char *)&auVar1 + 4)) * fVar2) * fVar2;
  fVar8 = *(float *)&REFG(undefined, 0x1134c68) - ((*(float *)((char *)&auVar1 + 8)) * fVar3) * fVar3;
  fVar9 = *(float *)&REFG(undefined, 0x1134c6c) - ((*(float *)((char *)&auVar1 + 12)) * fVar4) * fVar4;
  fVar2 = *(float *)&REFG(undefined, 0x1134c74) * fVar2;
  fVar3 = *(float *)&REFG(undefined, 0x1134c78) * fVar3;
  fVar4 = *(float *)&REFG(undefined, 0x1134c7c) * fVar4;
  *param_1 = (*(float *)&REFG(undefined, 0x1134c60) - ((*(float *)((char *)&auVar1 + 0)) * fVar5) * fVar5) *
             (*(float *)&REFG(undefined, 0x1134c70) * fVar5);
  param_1[1] = fVar7 * fVar2;
  param_1[2] = fVar8 * fVar3;
  param_1[3] = fVar9 * fVar4;
  return (uint)param_2;
}

/* ref: FUN_00d34b40 */
GEN_FRAME uint GEN_THISCALL F_00d34b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd34b40u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  gen_rsqrtps(&(auVar6), &(in_XMM1), &(auVar1));
  fVar5 = (*(float *)((char *)&auVar6 + 0));
  fVar2 = (*(float *)((char *)&auVar6 + 4));
  fVar3 = (*(float *)((char *)&auVar6 + 8));
  fVar4 = (*(float *)((char *)&auVar6 + 12));
  fVar7 = *(float *)&REFG(undefined, 0x1134c64) - ((*(float *)((char *)&auVar1 + 4)) * fVar2) * fVar2;
  fVar8 = *(float *)&REFG(undefined, 0x1134c68) - ((*(float *)((char *)&auVar1 + 8)) * fVar3) * fVar3;
  fVar9 = *(float *)&REFG(undefined, 0x1134c6c) - ((*(float *)((char *)&auVar1 + 12)) * fVar4) * fVar4;
  fVar2 = *(float *)&REFG(undefined, 0x1134c74) * fVar2;
  fVar3 = *(float *)&REFG(undefined, 0x1134c78) * fVar3;
  fVar4 = *(float *)&REFG(undefined, 0x1134c7c) * fVar4;
  *in_ecx = (*(float *)&REFG(undefined, 0x1134c60) - ((*(float *)((char *)&auVar1 + 0)) * fVar5) * fVar5) *
            (*(float *)&REFG(undefined, 0x1134c70) * fVar5);
  in_ecx[1] = fVar7 * fVar2;
  in_ecx[2] = fVar8 * fVar3;
  in_ecx[3] = fVar9 * fVar4;
  return (uint)param_2;
}

/* ref: FUN_00d34bc0 */
GEN_FRAME uint GEN_THISCALL F_00d34bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  undefined2 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,2);
  }
  puVar1 = ((undefined2 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 2)));
  *puVar1 = *param_2;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d34c00 */
GEN_FRAME uint GEN_THISCALL F_00d34c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34c00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,2);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00d34c40 */
GEN_FRAME uint GEN_THISCALL F_00d34c40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd34c40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = (*(int *)&gen_args[1]);
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0x80000000;
  if ((*(int *)&gen_args[1]) == 0) {
    uVar2 = 0;
  }
  else {
    (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) * 0x30;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]));
    iVar3 = (*(int *)&gen_args[1]) / 0x30;
    if (iVar3 != 0) goto LAB_00d34c9e;
  }
  iVar3 = ((int)0x80000000);
LAB_00d34c9e: ;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar1;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = iVar3;
  *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d34cd0 */
GEN_FRAME uint F_00d34cd0(unsigned int gen_a0)
{
  GEN_ENTER(0xd34cd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 * 2 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this GEN_EDX_ARG,uVar3);
  return uVar2;
}

/* ref: FUN_00d34d10 */
GEN_FRAME uint F_00d34d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34d10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 2 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this GEN_EDX_ARG,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00d34d60 */
GEN_FRAME uint F_00d34d60(unsigned int gen_a0)
{
  GEN_ENTER(0xd34d60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this GEN_EDX_ARG,uVar3);
  return uVar2;
}

/* ref: FUN_00d34da0 */
GEN_FRAME uint F_00d34da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34da0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this GEN_EDX_ARG,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00d34df0 */
GEN_FRAME uint GEN_THISCALL F_00d34df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd34df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d34e30 */
GEN_FRAME unsigned int F_00d34e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34e30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  if (0 < param_2) {
    puVar4 = (undefined4 *)(param_1 + 0x20);
    iVar5 = param_2;
    do {
      uVar1 = param_3[1];
      uVar2 = param_3[2];
      uVar3 = param_3[3];
      puVar4[-8] = *param_3;
      puVar4[-7] = uVar1;
      puVar4[-6] = uVar2;
      puVar4[-5] = uVar3;
      uVar1 = param_3[5];
      uVar2 = param_3[6];
      uVar3 = param_3[7];
      puVar4[-4] = param_3[4];
      puVar4[-3] = uVar1;
      puVar4[-2] = uVar2;
      puVar4[-1] = uVar3;
      uVar1 = param_3[9];
      uVar2 = param_3[10];
      uVar3 = param_3[0xb];
      *puVar4 = param_3[8];
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      puVar4 = puVar4 + 0xc;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  return;
}

/* ref: FUN_00d34e70 */
GEN_FRAME uint GEN_THISCALL F_00d34e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd34e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d34eb0 */
GEN_FRAME uint GEN_THISCALL F_00d34eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34eb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,1);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00d34ef0 */
GEN_FRAME uint GEN_THISCALL F_00d34ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34ef0u, gen_a0, gen_a1, gen_a2, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = param_3 * 0x10;
  uVar2 = *(uint *)(&REFG(undefined, 0x1134d28) + iVar1) & in_ecx[2] | *(uint *)(&REFG(undefined, 0x1134d20) + iVar1) & *in_ecx;
  uVar3 = *(uint *)(&REFG(undefined, 0x1134d2c) + iVar1) & in_ecx[3] |
          *(uint *)(&REFG(undefined, 0x1134d24) + iVar1) & in_ecx[1];
  uVar4 = *(uint *)(&REFG(undefined, 0x1134d20) + iVar1) & *in_ecx | *(uint *)(&REFG(undefined, 0x1134d28) + iVar1) & in_ecx[2];
  uVar5 = *(uint *)(&REFG(undefined, 0x1134d24) + iVar1) & in_ecx[1] |
          *(uint *)(&REFG(undefined, 0x1134d2c) + iVar1) & in_ecx[3];
  *param_2 = uVar3 | uVar2;
  param_2[1] = uVar2 | uVar3;
  param_2[2] = uVar5 | uVar4;
  param_2[3] = uVar4 | uVar5;
  return (uint)param_2;
}

/* ref: FUN_00d34f30 */
GEN_FRAME uint GEN_THISCALL F_00d34f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34f30u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_3[2] * in_ecx[2] + *param_3 * *in_ecx;
  fVar2 = param_3[3] * in_ecx[3] + param_3[1] * in_ecx[1];
  fVar3 = *param_3 * *in_ecx + param_3[2] * in_ecx[2];
  fVar4 = param_3[1] * in_ecx[1] + param_3[3] * in_ecx[3];
  *param_2 = fVar2 + fVar1;
  param_2[1] = fVar1 + fVar2;
  param_2[2] = fVar4 + fVar3;
  param_2[3] = fVar3 + fVar4;
  return (uint)param_2;
}

/* ref: FUN_00d34f60 */
GEN_FRAME uint GEN_THISCALL F_00d34f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34f60u, gen_a0, gen_a1, gen_a2, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = param_3 * 0x10;
  uVar2 = *(uint *)(&REFG(undefined, 0x1134d28) + iVar1) & in_ecx[2] | *(uint *)(&REFG(undefined, 0x1134d20) + iVar1) & *in_ecx;
  uVar3 = *(uint *)(&REFG(undefined, 0x1134d2c) + iVar1) & in_ecx[3] |
          *(uint *)(&REFG(undefined, 0x1134d24) + iVar1) & in_ecx[1];
  uVar4 = *(uint *)(&REFG(undefined, 0x1134d20) + iVar1) & *in_ecx | *(uint *)(&REFG(undefined, 0x1134d28) + iVar1) & in_ecx[2];
  uVar5 = *(uint *)(&REFG(undefined, 0x1134d24) + iVar1) & in_ecx[1] |
          *(uint *)(&REFG(undefined, 0x1134d2c) + iVar1) & in_ecx[3];
  *param_2 = uVar3 | uVar2;
  param_2[1] = uVar2 | uVar3;
  param_2[2] = uVar5 | uVar4;
  param_2[3] = uVar4 | uVar5;
  return (uint)param_2;
}

/* ref: FUN_00d34fa0 */
GEN_FRAME uint GEN_THISCALL F_00d34fa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd34fa0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  gen_rsqrtps(&(auVar6), &(in_XMM1), &(auVar1));
  fVar5 = (*(float *)((char *)&auVar6 + 0));
  fVar2 = (*(float *)((char *)&auVar6 + 4));
  fVar3 = (*(float *)((char *)&auVar6 + 8));
  fVar4 = (*(float *)((char *)&auVar6 + 12));
  fVar7 = *(float *)&REFG(undefined, 0x1134c64) - ((*(float *)((char *)&auVar1 + 4)) * fVar2) * fVar2;
  fVar8 = *(float *)&REFG(undefined, 0x1134c68) - ((*(float *)((char *)&auVar1 + 8)) * fVar3) * fVar3;
  fVar9 = *(float *)&REFG(undefined, 0x1134c6c) - ((*(float *)((char *)&auVar1 + 12)) * fVar4) * fVar4;
  fVar2 = *(float *)&REFG(undefined, 0x1134c74) * fVar2;
  fVar3 = *(float *)&REFG(undefined, 0x1134c78) * fVar3;
  fVar4 = *(float *)&REFG(undefined, 0x1134c7c) * fVar4;
  *in_ecx = (*(float *)&REFG(undefined, 0x1134c60) - ((*(float *)((char *)&auVar1 + 0)) * fVar5) * fVar5) *
            (*(float *)&REFG(undefined, 0x1134c70) * fVar5);
  in_ecx[1] = fVar7 * fVar2;
  in_ecx[2] = fVar8 * fVar3;
  in_ecx[3] = fVar9 * fVar4;
  return (uint)param_2;
}

/* ref: FUN_00d34fd0 */
GEN_FRAME uint GEN_THISCALL F_00d34fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd34fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,2);
  }
  puVar1 = ((undefined2 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 2)));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d35010 */
GEN_FRAME uint GEN_THISCALL F_00d35010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd35010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,2);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00d35050 */
GEN_FRAME unsigned int GEN_THISCALL F_00d35050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd35050u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  
  uVar4 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar4 < param_2) {
    iVar6 = uVar4 * 2;
    if (iVar6 <= param_2) {
      iVar6 = param_2;
    }
    F_00d95690(param_1,this,iVar6,0x30);
  }
  iVar6 = param_2 - *(int *)((int)this + 4);
  if (0 < iVar6) {
    puVar5 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) * 0x30 + *(int *)this + 0x20)));
    do {
      uVar1 = param_3[1];
      uVar2 = param_3[2];
      uVar3 = param_3[3];
      puVar5[-8] = *param_3;
      puVar5[-7] = uVar1;
      puVar5[-6] = uVar2;
      puVar5[-5] = uVar3;
      uVar1 = param_3[5];
      uVar2 = param_3[6];
      uVar3 = param_3[7];
      puVar5[-4] = param_3[4];
      puVar5[-3] = uVar1;
      puVar5[-2] = uVar2;
      puVar5[-1] = uVar3;
      uVar1 = param_3[9];
      uVar2 = param_3[10];
      uVar3 = param_3[0xb];
      *puVar5 = param_3[8];
      puVar5[1] = uVar1;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      puVar5 = puVar5 + 0xc;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  *(int *)((int)this + 4) = param_2;
  return 0;
}

/* ref: FUN_00d350d0 */
GEN_FRAME unsigned int GEN_THISCALL F_00d350d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd350d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a3;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,1);
  }
  iVar3 = *(int *)((int)this + 4);
  iVar1 = *(int *)this;
  iVar4 = param_2 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *(undefined1 *)(iVar5 + iVar1 + iVar3) = *param_3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *(int *)((int)this + 4) = param_2;
  return 0;
}

/* ref: FUN_00d35130 */
GEN_NOFRAME uint GEN_THISCALL F_00d35130(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd35130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d35170 */
GEN_NOFRAME uint GEN_THISCALL F_00d35170(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd35170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d351b0 */
GEN_FRAME uint GEN_THISCALL F_00d351b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd351b0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *in_ecx * *in_ecx;
  fVar3 = in_ecx[1] * in_ecx[1];
  fVar5 = in_ecx[2] * in_ecx[2];
  fVar6 = in_ecx[3] * in_ecx[3];
  fVar2 = fVar5 + fVar1;
  fVar4 = fVar6 + fVar3;
  fVar1 = fVar1 + fVar5;
  fVar3 = fVar3 + fVar6;
  *param_2 = fVar4 + fVar2;
  param_2[1] = fVar2 + fVar4;
  param_2[2] = fVar3 + fVar1;
  param_2[3] = fVar1 + fVar3;
  return (uint)param_2;
}

/* ref: FUN_00d351e0 */
GEN_FRAME unsigned int GEN_THISCALL F_00d351e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd351e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  
  uVar4 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar4 < param_1) {
    iVar6 = uVar4 * 2;
    if (iVar6 <= param_1) {
      iVar6 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar6,0x30);
  }
  iVar6 = param_1 - *(int *)((int)this + 4);
  if (0 < iVar6) {
    puVar5 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) * 0x30 + *(int *)this + 0x20)));
    do {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      puVar5[-8] = *param_2;
      puVar5[-7] = uVar1;
      puVar5[-6] = uVar2;
      puVar5[-5] = uVar3;
      uVar1 = param_2[5];
      uVar2 = param_2[6];
      uVar3 = param_2[7];
      puVar5[-4] = param_2[4];
      puVar5[-3] = uVar1;
      puVar5[-2] = uVar2;
      puVar5[-1] = uVar3;
      uVar1 = param_2[9];
      uVar2 = param_2[10];
      uVar3 = param_2[0xb];
      *puVar5 = param_2[8];
      puVar5[1] = uVar1;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      puVar5 = puVar5 + 0xc;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  *(int *)((int)this + 4) = param_1;
  return 0;
}

/* ref: FUN_00d35260 */
GEN_FRAME unsigned int GEN_THISCALL F_00d35260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd35260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,1);
  }
  iVar3 = *(int *)((int)this + 4);
  iVar1 = *(int *)this;
  iVar4 = param_1 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *(undefined1 *)(iVar5 + iVar1 + iVar3) = *param_2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *(int *)((int)this + 4) = param_1;
  return 0;
}

/* ref: FUN_00d352c0 */
GEN_NOFRAME uint GEN_THISCALL F_00d352c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd352c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d35300 */
GEN_NOFRAME uint GEN_THISCALL F_00d35300(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd35300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d35340 */
GEN_FRAME unsigned int F_00d35340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd35340u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = param_1[1];
  fVar8 = param_1[2];
  fVar9 = param_1[3];
  fVar11 = param_3[1];
  fVar6 = param_3[2];
  fVar7 = param_3[3];
  fVar13 = param_1[1];
  fVar15 = param_1[2];
  fVar16 = param_1[3];
  *param_4 = (*param_2 - *param_1) * *param_3 + *param_1;
  param_4[1] = (fVar2 - fVar5) * fVar11 + fVar13;
  param_4[2] = (fVar3 - fVar8) * fVar6 + fVar15;
  param_4[3] = (fVar4 - fVar9) * fVar7 + fVar16;
  fVar2 = param_1[4];
  fVar3 = param_1[5];
  fVar4 = param_1[6];
  fVar5 = param_1[7];
  memcpy(&(auVar17), &(*(gen_v16 *)(param_2 + 4)), sizeof(*(gen_v16 *)(param_2 + 4)) < sizeof(auVar17) ? sizeof(*(gen_v16 *)(param_2 + 4)) : sizeof(auVar17));
  fVar8 = (*(float *)((char *)&auVar17 + 0)) * fVar2;
  fVar9 = (*(float *)((char *)&auVar17 + 4)) * fVar3;
  fVar11 = (*(float *)((char *)&auVar17 + 8)) * fVar4;
  fVar13 = (*(float *)((char *)&auVar17 + 12)) * fVar5;
  fVar6 = fVar11 + fVar8;
  fVar7 = fVar13 + fVar9;
  fVar8 = fVar8 + fVar11;
  fVar9 = fVar9 + fVar13;
  uVar10 = (uint)gen_fl2bits(fVar6 + fVar7) & *(uint *)&REFG(undefined, 0x1134c84);
  uVar12 = (uint)gen_fl2bits(fVar9 + fVar8) & *(uint *)&REFG(undefined, 0x1134c88);
  uVar14 = (uint)gen_fl2bits(fVar8 + fVar9) & *(uint *)&REFG(undefined, 0x1134c8c);
  fVar8 = param_3[1];
  fVar9 = param_3[2];
  fVar11 = param_3[3];
  param_4[4] = (gen_bits2f((uint)gen_fl2bits(fVar7 + fVar6) & *(uint *)&REFG(undefined, 0x1134c80) ^
                           (uint)gen_fl2bits((*(float *)((char *)&auVar17 + 0)))) - fVar2) * *param_3 + fVar2;
  param_4[5] = (gen_bits2f(uVar10 ^ (uint)gen_fl2bits((*(float *)((char *)&auVar17 + 4)))) - fVar3) * fVar8 + fVar3;
  param_4[6] = (gen_bits2f(uVar12 ^ (uint)gen_fl2bits((*(float *)((char *)&auVar17 + 8)))) - fVar4) * fVar9 + fVar4;
  param_4[7] = (gen_bits2f(uVar14 ^ (uint)gen_fl2bits((*(float *)((char *)&auVar17 + 12)))) - fVar5) * fVar11 + fVar5;
  fVar2 = param_2[9];
  fVar3 = param_2[10];
  fVar4 = param_2[0xb];
  fVar5 = param_1[9];
  fVar8 = param_1[10];
  fVar9 = param_1[0xb];
  fVar11 = param_3[1];
  fVar6 = param_3[2];
  fVar7 = param_3[3];
  fVar13 = param_1[9];
  fVar15 = param_1[10];
  fVar16 = param_1[0xb];
  param_4[8] = (param_2[8] - param_1[8]) * *param_3 + param_1[8];
  param_4[9] = (fVar2 - fVar5) * fVar11 + fVar13;
  param_4[10] = (fVar3 - fVar8) * fVar6 + fVar15;
  param_4[0xb] = (fVar4 - fVar9) * fVar7 + fVar16;
  fVar4 = *(float *)&REFG(undefined, 0x1138cac);
  fVar3 = *(float *)&REFG(undefined, 0x1138ca8);
  fVar2 = *(float *)&REFG(undefined, 0x1138ca4);
  if ((param_4[6] * param_4[6] + param_4[4] * param_4[4]) +
      (param_4[7] * param_4[7] + param_4[5] * param_4[5]) < REFG(float, 0x10905c4)) {
    param_4[4] = *(float *)&REFG(undefined, 0x1138ca0);
    param_4[5] = fVar2;
    param_4[6] = fVar3;
    param_4[7] = fVar4;
    return 0;
  }
  fVar2 = param_4[4];
  fVar3 = param_4[5];
  fVar4 = param_4[6];
  fVar5 = param_4[7];
  fVar8 = fVar4 * fVar4 + fVar2 * fVar2;
  fVar9 = fVar5 * fVar5 + fVar3 * fVar3;
  fVar11 = fVar2 * fVar2 + fVar4 * fVar4;
  fVar6 = fVar3 * fVar3 + fVar5 * fVar5;
  fVar7 = fVar9 + fVar8;
  fVar8 = fVar8 + fVar9;
  fVar9 = fVar6 + fVar11;
  fVar11 = fVar11 + fVar6;
  (*(undefined4 *)((char *)&auVar1 + 4)) = (undefined4)gen_fl2bits(fVar8);
  (*(undefined4 *)((char *)&auVar1 + 0)) = (undefined4)gen_fl2bits(fVar7);
  (*(undefined4 *)((char *)&auVar1 + 8)) = (undefined4)gen_fl2bits(fVar9);
  (*(undefined4 *)((char *)&auVar1 + 12)) = (undefined4)gen_fl2bits(fVar11);
  gen_rsqrtps(&(auVar17), &(auVar17), &(auVar1));
  fVar16 = (*(float *)((char *)&auVar17 + 0));
  fVar6 = (*(float *)((char *)&auVar17 + 4));
  fVar13 = (*(float *)((char *)&auVar17 + 8));
  fVar15 = (*(float *)((char *)&auVar17 + 12));
  fVar8 = *(float *)&REFG(undefined, 0x1134c64) - (fVar6 * fVar8) * fVar6;
  fVar9 = *(float *)&REFG(undefined, 0x1134c68) - (fVar13 * fVar9) * fVar13;
  fVar11 = *(float *)&REFG(undefined, 0x1134c6c) - (fVar15 * fVar11) * fVar15;
  fVar6 = *(float *)&REFG(undefined, 0x1134c74) * fVar6;
  fVar13 = *(float *)&REFG(undefined, 0x1134c78) * fVar13;
  fVar15 = *(float *)&REFG(undefined, 0x1134c7c) * fVar15;
  param_4[4] = fVar2 * ((*(float *)&REFG(undefined, 0x1134c60) - (fVar16 * fVar7) * fVar16) *
                       (*(float *)&REFG(undefined, 0x1134c70) * fVar16));
  param_4[5] = fVar3 * (fVar8 * fVar6);
  param_4[6] = fVar4 * (fVar9 * fVar13);
  param_4[7] = fVar5 * (fVar11 * fVar15);
  return 0;
}

/* ref: FUN_00d35430 */
GEN_FRAME uint GEN_THISCALL F_00d35430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd35430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  LPVOID this_00;
  uint uVar2;
  
  uVar1 = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(uint *)((int)this + 0x10) = param_1;
  if (param_1 != 0) {
    this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar1 = *(uint *)((int)this_00 + 0xc);
    uVar2 = param_1 * 2 + 0x7f & 0xffffff80;
    if ((*(int *)((int)this_00 + 8) < (int)uVar2) ||
       (*(uint *)((int)this_00 + 0x10) < uVar1 + uVar2)) {
      uVar1 = F_00d94390(this_00 GEN_EDX_ARG,uVar2);
    }
    else {
      *(uint *)((int)this_00 + 0xc) = uVar1 + uVar2;
    }
  }
  *(uint *)((int)this + 8) = param_1 | 0x80000000;
  *(uint *)this = uVar1;
  *(uint *)((int)this + 0xc) = uVar1;
  return (uint)this;
}

/* ref: FUN_00d354a0 */
GEN_NOFRAME uint GEN_THISCALL F_00d354a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd354a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  LPVOID this_00;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0xc);
  if (iVar1 == *(int *)this) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = *(int *)((int)this + 0x10);
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = iVar2 * 2 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)this_00 + 8) < (int)uVar3) || (uVar3 + iVar1 != *(int *)((int)this_00 + 0xc)))
     || (*(int *)((int)this_00 + 0x14) == iVar1)) {
    F_00d945c0(this_00 GEN_EDX_ARG,iVar1,uVar3);
  }
  else {
    *(int *)((int)this_00 + 0xc) = iVar1;
  }
  uVar3 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar3 & 0x80000000) == 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar3 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar3;
}

/* ref: FUN_00d35530 */
GEN_FRAME uint GEN_THISCALL F_00d35530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd35530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  LPVOID this_00;
  uint uVar2;
  
  uVar1 = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(uint *)((int)this + 0x10) = param_1;
  if (param_1 != 0) {
    this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar1 = *(uint *)((int)this_00 + 0xc);
    uVar2 = param_1 + 0x7f & 0xffffff80;
    if ((*(int *)((int)this_00 + 8) < (int)uVar2) ||
       (*(uint *)((int)this_00 + 0x10) < uVar1 + uVar2)) {
      uVar1 = F_00d94390(this_00 GEN_EDX_ARG,uVar2);
    }
    else {
      *(uint *)((int)this_00 + 0xc) = uVar1 + uVar2;
    }
  }
  *(uint *)((int)this + 8) = param_1 | 0x80000000;
  *(uint *)this = uVar1;
  *(uint *)((int)this + 0xc) = uVar1;
  return (uint)this;
}

/* ref: FUN_00d355a0 */
GEN_NOFRAME uint GEN_THISCALL F_00d355a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd355a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  LPVOID this_00;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0xc);
  if (iVar1 == *(int *)this) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = *(int *)((int)this + 0x10);
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = iVar2 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)this_00 + 8) < (int)uVar3) || (uVar3 + iVar1 != *(int *)((int)this_00 + 0xc)))
     || (*(int *)((int)this_00 + 0x14) == iVar1)) {
    F_00d945c0(this_00 GEN_EDX_ARG,iVar1,uVar3);
  }
  else {
    *(int *)((int)this_00 + 0xc) = iVar1;
  }
  uVar3 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar3 & 0x80000000) == 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar3 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar3;
}

/* ref: FUN_00d358a0 */
GEN_FRAME uint F_00d358a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd358a0u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  int in_ecx = (int)gen_a1;
  if ((in_eax != 0) && ((*(int *)&gen_a2) != in_ecx)) {
    in_eax = F_00da1010((*(int *)&gen_a2),in_ecx,in_eax * 4);
  }
  return in_eax;
}

/* ref: FUN_00d358c0 */
GEN_FRAME uint F_00d358c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd358c0u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  int in_ecx = (int)gen_a1;
  if ((in_eax != 0) && ((*(int *)&gen_a2) != in_ecx)) {
    in_eax = F_00da1010((*(int *)&gen_a2),in_ecx,in_eax * 0x30);
  }
  return in_eax;
}

/* ref: FUN_00d358f0 */
GEN_FRAME unsigned int F_00d358f0(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd358f0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float in_xmm0 = (float)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  return;
}

/* ref: FUN_00d35910 */
GEN_FRAME uint GEN_STDCALL F_00d35910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd35910u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    uVar1 = F_00da1030(param_5,0xff,param_4);
    return uVar1;
  }
  if (param_1[1] == 0) {
    uVar1 = F_00da1010(param_5,param_3,param_4);
    return uVar1;
  }
  F_00da1030(param_5,0,param_4);
  uVar1 = 0;
  if (0 < param_2) {
    do {
      iVar2 = (int)*(short *)(*param_1 + uVar1 * 2);
      if (iVar2 < param_4) {
        *(undefined1 *)(iVar2 + param_5) = *(undefined1 *)(uVar1 + param_3);
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < param_2);
  }
  return uVar1;
}

/* ref: FUN_00d35ed0 */
GEN_FRAME uint F_00d35ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd35ed0u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  int in_ecx = (int)gen_a1;
  if ((in_eax != 0) && ((*(int *)&gen_a2) != in_ecx)) {
    in_eax = F_00da1010((*(int *)&gen_a2),in_ecx,in_eax * 4);
  }
  return in_eax;
}

/* ref: FUN_00d35ef0 */
GEN_FRAME uint F_00d35ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd35ef0u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  int in_ecx = (int)gen_a1;
  if ((in_eax != 0) && ((*(int *)&gen_a2) != in_ecx)) {
    in_eax = F_00da1010((*(int *)&gen_a2),in_ecx,in_eax * 0x30);
  }
  return in_eax;
}

/* ref: FUN_00d363f0 */
GEN_FRAME uint GEN_THISCALL F_00d363f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd363f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  uint param_5 = (uint)gen_a5;
  LPVOID pvVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  *(short *)((int)this + 0x48) = (short)param_1;
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1 * 200);
  *(uint *)((int)this + 0x24) = uVar2;
  *(undefined2 *)((int)this + 0x4a) = 0;
  *(undefined1 *)((int)this + 0x4d) = 1;
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((int)this + 0x1c) = 0;
  if ((char)param_3 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_2 + 0xc);
  }
  *(undefined4 *)((int)this + 0x20) = uVar4;
  *(char *)((int)this + 0x4c) = (char)param_3;
  *(undefined4 *)((int)this + 0x40) = 0;
  iVar3 = param_4;
  if (param_4 == -1) {
    iVar3 = *(int *)(param_2 + 0x1c);
  }
  *(int *)((int)this + 0x38) = iVar3;
  uVar2 = param_5;
  if (param_5 == 0xffffffff) {
    uVar2 = *(uint *)(param_2 + 0x40);
  }
  *(uint *)((int)this + 0x3c) = uVar2;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined1 *)((int)this + 0x4e) = 0;
  return uVar2;
}

/* ref: FUN_00d36490 */
GEN_FRAME uint GEN_THISCALL F_00d36490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xd36490u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint param_5 = (uint)gen_a4;
  int param_6 = (int)gen_a5;
  int param_7 = (int)gen_a6;
  uint * param_8 = (uint *)(uintptr_t)gen_a7;
  uint * param_9 = (uint *)(uintptr_t)gen_a8;
  int * param_10 = (int *)(uintptr_t)gen_a9;
  float fVar1;
  uint * puVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  uint local_c;
  
  fVar1 = REFG(float, 0x1087f04);
  uVar3 = param_2[2];
  param_1[0x2e] = 0xffffffff;
  param_1[0x2f] = 0xffffffff;
  param_1[0x31] = param_5;
  param_1[3] = uVar3;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x30] = param_4;
  param_1[2] = (uint)gen_fl2bits(fVar1);
  puVar2 = param_1 + 4;
  if ((param_8 != (uint *)0x0) && (uVar3 = param_8[1], uVar3 != 0)) {
    *puVar2 = *param_8;
    param_1[5] = uVar3;
    param_1[0x2d] = param_1[0x2d] | 1;
    puVar2 = param_1 + 6;
  }
  if ((param_9 != (uint *)0x0) && (uVar3 = param_9[1], uVar3 != 0)) {
    *puVar2 = *param_9;
    puVar2[1] = uVar3;
    param_1[0x2d] = param_1[0x2d] | 2;
    puVar2 = puVar2 + 2;
  }
  if (param_6 != 0) {
    if (0 < *(int *)(param_6 + 0x14)) {
      iVar4 = *(int *)(param_6 + 0x14);
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)(param_6 + 0x10);
      }
      *puVar2 = uVar3;
      puVar2[1] = iVar4 * 2;
      param_1[0x2d] = param_1[0x2d] | 4;
      puVar2 = puVar2 + 2;
    }
    if (0 < *(int *)(param_6 + 0x20)) {
      iVar4 = *(int *)(param_6 + 0x20);
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)(param_6 + 0x1c);
      }
      *puVar2 = uVar3;
      puVar2[1] = iVar4 * 2;
      param_1[0x2d] = param_1[0x2d] | 8;
      puVar2 = puVar2 + 2;
    }
    if (*(char *)(param_6 + 0x28) == '\x01') {
      param_1[0x2d] = param_1[0x2d] | 0x20;
    }
  }
  if (param_7 != 0) {
    param_1[0x2d] = param_1[0x2d] | 0x10;
    iVar4 = *(int *)(param_7 + 0x1c);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(param_7 + 0x18);
    }
    *puVar2 = uVar3;
    puVar2[1] = iVar4 << 6;
    iVar4 = *(int *)(param_7 + 0x28);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(param_7 + 0x24);
    }
    puVar2[2] = uVar3;
    puVar2[3] = iVar4 * 0x70;
    iVar4 = *(int *)(param_7 + 0x34);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(param_7 + 0x30);
    }
    puVar2[4] = uVar3;
    puVar2[5] = iVar4 * 2;
    iVar4 = *((int *)GEN_TOP((*(int *)(param_7 + 0x10) + 0x10)));
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *((uint *)GEN_TOP((*(int *)(param_7 + 0x10) + 0xc)));
    }
    puVar2[6] = uVar3;
    puVar2[7] = iVar4 * 2;
    iVar4 = *((int *)GEN_TOP((*(int *)(param_7 + 0x10) + 0x1c)));
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *((uint *)GEN_TOP((*(int *)(param_7 + 0x10) + 0x18)));
    }
    puVar2[8] = uVar3;
    puVar2[9] = iVar4 * 8;
    iVar4 = *((int *)GEN_TOP((*(int *)(param_7 + 0x10) + 0x28)));
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *((uint *)GEN_TOP((*(int *)(param_7 + 0x10) + 0x24)));
    }
    puVar2[10] = uVar3;
    puVar2[0xb] = iVar4 * 0x30;
    param_1[0x2e] = *((uint *)GEN_TOP((*(int *)(param_7 + 0x10) + 0x1c)));
    puVar2 = puVar2 + 0xc;
    param_1[0x2f] = *((uint *)GEN_TOP((*(int *)(param_7 + 0x10) + 0x40)));
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x1c))(param_2 GEN_EDX_FWD);
  fVar5 = (float10)(int)(uVar3 - 1);
  if ((int)(uVar3 - 1) < 0) {
    fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar5 = fVar5 * ((float10)param_3 / ((float10)GEN_TOD(gen_bits2f(param_2[3]))));
  local_c = (uint)(longlong)TRUNC(fVar5);
  *param_1 = local_c;
  fVar1 = REFG(float, 0x1087f04);
  if (uVar3 - 2 < local_c) {
    *param_1 = uVar3 - 2;
    fVar7 = fVar1;
  }
  else {
    fVar6 = (float10)(int)local_c;
    if ((int)local_c < 0) {
      fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar5 = fVar5 - fVar6;
    fVar7 = (float)fVar5;
    if (fVar5 < (float10)0) {
      fVar7 = 0.0;
    }
    else if (REFG(float, 0x1087f04) < fVar7) {
      fVar7 = fVar1;
    }
  }
  param_1[1] = (uint)gen_fl2bits(fVar7);
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x20))(param_2 GEN_EDX_ARG,*param_1,(undefined4)gen_fl2bits(fVar7));
  ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x24))(param_2 GEN_EDX_ARG,*param_1,param_1[1],puVar2,uVar3);
  uVar3 = ((int)puVar2 + (-0x10 - (int)param_1) >> 3) + uVar3;
  iVar4 = 0;
  param_1[0x2c] = uVar3;
  if (0 < (int)uVar3) {
    puVar2 = param_1 + 4;
    do {
      iVar4 = iVar4 + ((*puVar2 & 0xf) + 0xf + puVar2[1] & 0xfffffff0);
      puVar2 = puVar2 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (*param_10 < iVar4) {
    *param_10 = iVar4;
  }
  return (uint)param_10;
}

/* ref: FUN_00d36750 */
GEN_FRAME uint GEN_THISCALL F_00d36750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd36750u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = *(int *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(iVar2 + 0xc);
  fVar1 = *(float *)(param_2 + 8);
  iVar6 = param_2 + 0x1c;
  iVar5 = param_2 + 0x10;
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)param_2 + 0x38))(param_2 GEN_EDX_FWD);
  uVar4 = F_00d36490(param_1 GEN_EDX_ARG,uVar3,fVar1,0,0,iVar2,uVar4,iVar5,iVar6,param_3);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0xc);
  return uVar4;
}

/* ref: FUN_00d367b0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00d367b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd367b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  int iVar2;
  LPVOID pvVar3;
  
  iVar2 = *(int *)((int)this + 0x24);
  if (iVar2 != 0) {
    uVar1 = *(ushort *)((int)this + 0x48);
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar3 + 0x2c) GEN_EDX_ARG,iVar2,(uint)uVar1 * 200);
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  return;
}

/* ref: FUN_00d367f0 */
GEN_NOFRAME uint F_00d367f0(unsigned int gen_a0)
{
  GEN_ENTER(0xd367f0u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  if (in_eax == 0) {
    return 0;
  }
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = (in_eax + 3U & 0xfffffffc) + 0x7c & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this GEN_EDX_ARG,uVar3);
  return uVar2;
}

/* ref: FUN_00d36840 */
GEN_NOFRAME unsigned int F_00d36840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36840u, gen_a0, gen_a1, 0u, 0u);
  int in_esi = (int)gen_a0;
  int in_edi = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  if (in_edi != 0) {
    this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar1 = (in_edi + 3U & 0xfffffffc) + 0x7c & 0xffffff80;
    if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + in_esi == *(int *)((int)this + 0xc)))
       && (*(int *)((int)this + 0x14) != in_esi)) {
      *(int *)((int)this + 0xc) = in_esi;
      return;
    }
    F_00d945c0(this GEN_EDX_ARG,in_esi,uVar1);
  }
  return;
}

