#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_005fb2b0 */
uint F_005fb2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fb2b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  char * pcVar5;
  int iVar6;
  float in_XMM7_Da = 0;
  
  iVar1 = (*(int *)&gen_args[2]);
  uVar3 = *(uint *)((*(int *)&gen_args[2]) + 0x38);
  if (uVar3 != 0) {
    pcVar5 = ((char *)GEN_TOP((*(int *)((*(int *)&gen_args[2]) + 0x34) + (*(int *)&gen_args[2]))));
    if ((uVar3 != 1) || (*pcVar5 != '\0')) {
      iVar6 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
      if (iVar6 == 0) {
        (*(int *)(gen_frame + 0x8)) = 0;
      }
      else {
        (*(int *)(gen_frame + 0x8)) = *(int *)(iVar6 + 4);
      }
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) & 0xfffffffe | 2;
      if ((iVar6 == 0) || (*(int *)(iVar6 + 4) == 0)) {
        iVar6 = 0;
      }
      else {
        iVar6 = *((int *)GEN_TOP((*(int *)(iVar6 + 4) + 0x44)));
      }
      bVar2 = F_005d9c60((*(undefined * PTR32 *)&gen_args[0]));
      if (bVar2 == 0) {
        (*(int *)&gen_args[2]) = CONCAT13(*((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x11))),(undefined3)(*(int *)&gen_args[2]));
        F_00614c10((undefined *)(iVar6 + 0x30),&(*(int *)(gen_frame + 0x4)),(int)&(*(int *)&gen_args[2]) + 3);
        if ((*(int *)(gen_frame + 0x4)) != *(int *)(iVar6 + 0x34)) {
          F_005fae70(*(undefined * PTR32 *)((*(int *)(gen_frame + 0x4)) + 0x10),(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
        }
      }
      if (*(int *)(iVar1 + 0x38) == 1) {
        puVar4 = (undefined4 *)F_00509330((undefined *)((*(int *)(gen_frame + 0x8)) + 0x14c),pcVar5);
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = *puVar4;
      }
      else if (*(int *)(iVar1 + 0x38) == 2) {
        uVar3 = F_005f4db0((*(int *)(gen_frame + 0x8)) + 0x15c,in_XMM7_Da,*(int *)(iVar1 + 0x44) + iVar1);
        *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = uVar3;
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c))))((*(undefined * PTR32 *)&gen_args[0]));
        return uVar3;
      }
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c))))((*(undefined * PTR32 *)&gen_args[0]));
    }
  }
  return uVar3;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf18 */
uint F_005fb3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fb3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this);
  if (((((char)uVar3 != '\0') && (*(int *)(this + 8) != 0)) &&
      (iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 4))), iVar1 != 0)) &&
     (pvVar2 = *(undefined * PTR32 *)(iVar1 + 0x44), (*(undefined * PTR32 *)(gen_frame + 0x1c)) = pvVar2, pvVar2 != (undefined *)0x0)) {
    if (((byte)this[0x8c] & 4) != 0) {
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,((undefined1 *)(gen_frame + 0x0)));
      F_005f72f0((*(undefined * PTR32 *)(gen_frame + 0x1c)),this,uVar3);
      this[0x8c] = (undefined1)((byte)this[0x8c] & 0xfb);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this);
    if ((char)uVar3 != '\0') {
      F_005faf00((*(undefined * PTR32 *)(gen_frame + 0x1c)),this,param_1);
      this[0x8c] = (undefined1)((byte)this[0x8c] | 4);
    }
  }
  *(undefined4 *)(this + 0x40) = *param_1;
  *(undefined4 *)(this + 0x44) = param_1[1];
  *(undefined4 *)(this + 0x48) = param_1[2];
  *(undefined4 *)(this + 0x50) = param_1[4];
  *(undefined4 *)(this + 0x54) = param_1[5];
  *(undefined4 *)(this + 0x58) = param_1[6];
  *(undefined4 *)(this + 0x5c) = param_1[7];
  *(undefined4 *)(this + 0x60) = param_1[8];
  *(undefined4 *)(this + 100) = param_1[9];
  *(undefined4 *)(this + 0x68) = param_1[10];
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,param_1);
  return uVar3;
}

/* ref: Client::LayoutEngine::Layer::LineVfxLayoutInstance::vf1 */
uint F_005fb490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fb490u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  int iVar4;
  
  uVar3 = (*(uint *)&gen_args[1]);
  F_005ed050((undefined *)(*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x60))) = 4;
  uVar1 = *(undefined4 *)(uVar3 + 0x14);
  if ((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) == 0) || (iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) + 4))), iVar4 == 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x44);
  }
  bVar2 = F_005d9c60((*(undefined * PTR32 *)&gen_args[0]));
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (bVar2 == 0) {
    (*(undefined4 *)&gen_args[2]) = CONCAT13((*(undefined * PTR32 *)&gen_args[0])[0x11],(undefined3)(*(undefined4 *)&gen_args[2]));
    F_00614c10((undefined *)(iVar4 + 0x30),&(*(uint *)&gen_args[1]),(int)&(*(undefined4 *)&gen_args[2]) + 3);
    uVar3 = (*(uint *)&gen_args[1]);
    if ((*(uint *)&gen_args[1]) != *(uint *)(iVar4 + 0x34)) {
      uVar3 = F_005fae70(*(undefined * PTR32 *)((*(uint *)&gen_args[1]) + 0x10),(*(undefined * PTR32 *)&gen_args[0]),uVar1);
    }
  }
  return uVar3;
}

/* ref: Client::LayoutEngine::Layer::LineVfxLayoutInstance::vf18 */
uint F_005fb500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fb500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this);
  if (((((char)uVar2 != '\0') && (*(int *)(this + 8) != 0)) &&
      (iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 4))), iVar1 != 0)) &&
     (this_00 = *(undefined * PTR32 *)(iVar1 + 0x44), this_00 != (undefined *)0x0)) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this);
    F_005f72f0(this_00,this,uVar2);
    F_005faf00(this_00,this,param_1);
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,param_1);
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf1 */
uint F_005fb560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fb560u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  int iVar4;
  
  uVar3 = (*(uint *)&gen_args[1]);
  F_005ed050((undefined *)(*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = 3;
  uVar1 = *(undefined4 *)(uVar3 + 0x14);
  if ((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) == 0) || (iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) + 4))), iVar4 == 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x44);
  }
  bVar2 = F_005d9c60((*(undefined * PTR32 *)&gen_args[0]));
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (bVar2 == 0) {
    (*(undefined4 *)&gen_args[2]) = CONCAT13((*(undefined * PTR32 *)&gen_args[0])[0x11],(undefined3)(*(undefined4 *)&gen_args[2]));
    F_00614c10((undefined *)(iVar4 + 0x30),&(*(uint *)&gen_args[1]),(int)&(*(undefined4 *)&gen_args[2]) + 3);
    uVar3 = (*(uint *)&gen_args[1]);
    if ((*(uint *)&gen_args[1]) != *(uint *)(iVar4 + 0x34)) {
      uVar3 = F_005fae70(*(undefined * PTR32 *)((*(uint *)&gen_args[1]) + 0x10),(*(undefined * PTR32 *)&gen_args[0]),uVar1);
    }
  }
  return uVar3;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf18 */
uint F_005fb5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fb5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this);
  if (((((char)uVar2 != '\0') && (*(int *)(this + 8) != 0)) &&
      (iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 4))), iVar1 != 0)) &&
     (this_00 = *(undefined * PTR32 *)(iVar1 + 0x44), this_00 != (undefined *)0x0)) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this);
    F_005f72f0(this_00,this,uVar2);
    F_005faf00(this_00,this,param_1);
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,param_1);
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf18 */
uint F_005fb630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fb630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this);
  if (((((char)uVar2 != '\0') && (*(int *)(this + 8) != 0)) &&
      (iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 4))), iVar1 != 0)) &&
     (this_00 = *(undefined * PTR32 *)(iVar1 + 0x44), this_00 != (undefined *)0x0)) {
    if (((byte)this[0x94] & 8) != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,((undefined1 *)(gen_frame + 0x0)));
      F_005f72f0(this_00,this,uVar2);
    }
    F_005faf00(this_00,this,param_1);
  }
  uVar2 = F_006039f0(this + 0x70,param_1);
  this[0x94] = (undefined1)((byte)this[0x94] | 8);
  return uVar2;
}

/* ref: FUN_005fb6c0 */
uint F_005fb6c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5fb6c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a5c70));
  F_0061e0d0((undefined *)((int)this + 0x88),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x8c),
               *(undefined4 * PTR32 *)((int)this + 0x8c));
  F_00429760(*(undefined4 *)((int)this + 0x8c),0x28,900);
  F_006173d0((undefined *)((int)this + 0x78),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x7c),
               *(undefined4 * PTR32 *)((int)this + 0x7c));
  F_00429760(*(undefined4 *)((int)this + 0x7c),0x18,0x385);
  F_006173d0((undefined *)((int)this + 0x68),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x6c),
               *(undefined4 * PTR32 *)((int)this + 0x6c));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 0x6c),0x18,0x385);
  return (uint)uVar1;
}

/* ref: FUN_005fb750 */
uint F_005fb750(unsigned int gen_a0)
{
  GEN_ENTER(0x5fb750u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  int iVar2;
  int * piVar3;
  int * this;
  undefined * this_00;
  uint uVar4;
  
  piVar3 = (*(int * PTR32 *)&gen_args[0]);
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  iVar2 = (*(int * PTR32 *)&gen_args[0])[1];
  if ((((iVar1 == 0) || (*(short *)(iVar1 + 0x12) == 0)) && ((*(int * PTR32 *)&gen_args[0])[6] == 0)) &&
     (((char)(*(int * PTR32 *)&gen_args[0])[2] != '\0' && ((*(int * PTR32 *)&gen_args[0])[3] == 0)))) {
    this = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar1 + 4),1);
  }
  else {
    this_00 = (undefined *)F_00406b90(0x48,0,0);
    if (this_00 == (undefined *)0x0) {
      this = (int *)0x0;
    }
    else {
      this = (int *)F_005ddbd0(this_00);
    }
  }
  ((code *)*(gen_code32 *)(*this + 4))(this,piVar3,*(int *)(iVar2 + 0x30) + iVar2);
  F_005fb2b0(this,piVar3[5],iVar2);
  if ((undefined *)piVar3[3] != (undefined *)0x0) {
    iVar1 = *this;
    uVar4 = F_00a1d0c0((undefined *)piVar3[3]);
    ((code *)*(gen_code32 *)(iVar1 + 100))(this,uVar4);
    return (uint)this;
  }
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(int *)(iVar2 + 0x30) + iVar2)));
  ((code *)*(gen_code32 *)(*this + 0x6c))(this,piVar3[5],&(*(int * PTR32 *)&gen_args[0]));
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf4 */
byte F_005fb810(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x5fb810u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float in_xmm2 = (float)gen_a2;
  float in_xmm3 = (float)gen_a3;
  float in_xmm7 = (float)gen_a4;
  int param_6 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte * pbVar1;
  int * piVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined * this;
  
  F_00a1e7d0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,((undefined1 *)(gen_frame + 0x0)),param_6 + 0xc);
  ((code *)*(gen_code32 *)(*in_ecx + 0x100))(in_ecx,((undefined1 *)(gen_frame + 0x0)));
  uVar5 = ((code *)*(gen_code32 *)(*in_ecx + 0x5c))(in_ecx);
  uVar6 = 0;
  if (uVar5 != 0) {
    uVar6 = F_00a1fa60(in_xmm1,in_xmm2,in_xmm3,in_xmm7,in_ecx + 4,uVar5,param_6);
  }
  uVar6 = CONCAT31((int3)(uVar6 >> 8),
                   (*(char *)(param_6 + 0x48) != '\0') << 4 ^ *(byte *)((int)in_ecx + 0x2b)) &
          0xffffff10;
  *(byte *)((int)in_ecx + 0x2b) = *(byte *)((int)in_ecx + 0x2b) ^ (byte)uVar6;
  uVar6 = CONCAT31((int3)(uVar6 >> 8),*(byte *)((int)in_ecx + 0x2b));
  if (((*(byte *)((int)in_ecx + 0x2b) & 0x40) != 0) &&
     ((uVar6 = in_ecx[2], uVar6 == 0 ||
      (((*(int *)(uVar6 + 4) == 0 || (*((char *)GEN_TOP((*(int *)(uVar6 + 4) + 0x50))) != '\0')) &&
       ((uVar6 == 0 || ((*(byte *)(uVar6 + 0x16) & 1) != 0)))))))) {
    uVar6 = ((code *)*(gen_code32 *)(*in_ecx + 0xcc))(in_ecx);
    if ((char)uVar6 != '\0') {
      uVar6 = CONCAT31((int3)(uVar6 >> 8),1);
      goto LAB_005fb8bd;
    }
  }
  uVar6 = uVar6 & 0xffffff00;
LAB_005fb8bd: ;
  ((code *)*(gen_code32 *)(*in_ecx + 0xe0))(in_ecx,uVar6);
  bVar4 = F_005eba10(in_ecx,in_xmm7,param_6);
  if (bVar4 != 0) {
    F_00a1e7d0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,((undefined1 *)(gen_frame + 0x0)),param_6 + 0xc);
    F_005f8a00(in_ecx);
    F_005fb2b0(in_ecx,((undefined1 *)(gen_frame + 0x0)),param_6);
  }
  piVar2 = (int *)in_ecx[0xd];
  in_ecx[0x10] = *(int *)(param_6 + 0x40);
  iVar3 = *(int *)(param_6 + 0x3c);
  in_ecx[0x11] = iVar3;
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,in_ecx[0x10],iVar3);
  }
  if (*(char *)(param_6 + 0x49) != '\x02') {
    pbVar1 = (byte *)(in_ecx[0xc] + 0x95);
    *pbVar1 = *pbVar1 ^ (*(char *)(param_6 + 0x49) == '\x01' ^ *(byte *)(in_ecx[0xc] + 0x95)) & 1;
  }
  if (*(char *)(param_6 + 0x4a) != '\x02') {
    pbVar1 = (byte *)(in_ecx[0xc] + 0x95);
    *pbVar1 = *pbVar1 ^ ((*(char *)(param_6 + 0x4a) == '\x01') * '\x02' ^
                        *(byte *)(in_ecx[0xc] + 0x95)) & 2;
  }
  F_006a3820(in_ecx[0xc],(int)*(float *)(param_6 + 0x4c) & 0xffff);
  if (in_ecx[2] == 0) {
    this = (undefined *)0x0;
  }
  else {
    this = *(undefined * PTR32 *)(in_ecx[2] + 4);
  }
  if (*(int *)((int)this + 0x10) == 7) {
    bVar4 = F_005e9d30(this,in_ecx);
    this = (undefined *)(uint)bVar4;
  }
  return (byte)this;
}

/* ref: FUN_005fb9a0 */
uint F_005fb9a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5fb9a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a5c70));
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x12) = 1;
  *(undefined4 *)((int)this + 0x40) = REFG(float, 0x1375ac0);
  *(undefined4 *)((int)this + 0x44) = REFG(float, 0x1375ac4);
  *(undefined4 *)((int)this + 0x48) = REFG(float, 0x1375ac8);
  *(undefined4 *)((int)this + 0x50) = REFG(float, 0x1375ac0);
  *(undefined4 *)((int)this + 0x54) = REFG(float, 0x1375ac4);
  *(undefined4 *)((int)this + 0x58) = REFG(float, 0x1375ac8);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0x10;
  uVar2 = 0x10;
  sVar1 = 0;
  do {
    uVar2 = uVar2 >> 1;
    sVar1 = sVar1 + 1;
  } while (1 < uVar2);
  *(short *)((int)this + 0x66) = sVar1;
  *(undefined4 *)((int)this + 0x70) = 0;
  uVar2 = F_004296a0(0x18,0,0x385);
  *(uint *)((int)this + 0x6c) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x6c) + 4))) = *(int *)((int)this + 0x6c);
  *((int *)GEN_TOP((*(int *)((int)this + 0x6c) + 8))) = *(int *)((int)this + 0x6c);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x6c) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x6c) + 0x15))) = 1;
  *(undefined4 *)((int)this + 0x80) = 0;
  uVar2 = F_004296a0(0x18,0,0x385);
  *(uint *)((int)this + 0x7c) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x7c) + 4))) = *(int *)((int)this + 0x7c);
  *((int *)GEN_TOP((*(int *)((int)this + 0x7c) + 8))) = *(int *)((int)this + 0x7c);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x7c) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x7c) + 0x15))) = 1;
  *(undefined4 *)((int)this + 0x90) = 0;
  uVar2 = F_004296a0(0x28,0,900);
  *(uint *)((int)this + 0x8c) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x8c) + 4))) = *(int *)((int)this + 0x8c);
  *((int *)GEN_TOP((*(int *)((int)this + 0x8c) + 8))) = *(int *)((int)this + 0x8c);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x8c) + 0x24))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x8c) + 0x25))) = 1;
  return (uint)this;
}

/* ref: FUN_005fbb00 */
uint F_005fbb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fbb00u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  undefined4 * puVar4;
  
  iVar3 = 0;
  uVar1 = 0;
  do {
    if ((param_1 & 0xff) == *(uint *)((int)&REFG(undefined4, 0x10a2810) + uVar1)) {
      puVar4 = &REFG(undefined4, 0x10a2810) + iVar3 * 10;
      goto LAB_005fbb28;
    }
    uVar1 = uVar1 + 0x28;
    iVar3 = iVar3 + 1;
  } while (uVar1 < 0x208);
  puVar4 = &REFG(undefined4, 0x10a2810);
LAB_005fbb28: ;
  if (puVar4[1] != 0) {
    pvVar2 = (undefined *)F_00406b90(0xa0,0,0);
    if (pvVar2 != (undefined *)0x0) {
      pvVar2 = (undefined *)F_005fb9a0(pvVar2);
      F_005e9a10(pvVar2,param_1,param_2);
      return (uint)pvVar2;
    }
    F_005e9a10((undefined *)0x0,param_1,param_2);
  }
  return 0;
}

/* ref: FUN_005fbb80 */
uint F_005fbb80(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12)
{
  GEN_ENTER(0x5fbb80u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  int param_5 = (int)gen_a4;
  byte * param_6 = (byte *)(uintptr_t)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  int param_9 = (int)gen_a8;
  undefined4 * param_10 = (undefined4 *)(uintptr_t)gen_a9;
  int param_11 = (int)gen_a10;
  undefined4 param_12 = (undefined4)gen_a11;
  undefined4 param_13 = (undefined4)gen_a12;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  ushort uVar1;
  int * piVar2;
  int iVar3;
  
  (*(undefined4 *)(gen_frame + 0x68)) = *(undefined4 *)(param_6 + 4);
  (*(byte *)(gen_frame + 0x6f)) = *param_6;
  iVar3 = param_11;
  if (((((param_11 != 4) && (param_11 != 5)) && (param_11 != 6)) &&
      ((param_11 != 7 && (param_11 != 8)))) &&
     ((param_11 != 9 && ((param_11 != 10 && (iVar3 = 0, param_9 != 0)))))) {
    iVar3 = 1;
  }
  if (param_10 == (undefined4 *)0x0) {
    F_00a1e7d0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,&(*(undefined4 *)(gen_frame + 0x0)),param_6 + 0xc);
  }
  else {
    (*(undefined4 *)(gen_frame + 0x0)) = *param_10;
    (*(undefined4 *)(gen_frame + 0x4)) = param_10[1];
    (*(undefined4 *)(gen_frame + 0x10)) = param_10[4];
    (*(undefined4 *)(gen_frame + 0x8)) = param_10[2];
    (*(undefined4 *)(gen_frame + 0x14)) = param_10[5];
    (*(undefined4 *)(gen_frame + 0x20)) = param_10[8];
    (*(undefined4 *)(gen_frame + 0x18)) = param_10[6];
    (*(undefined4 *)(gen_frame + 0x24)) = param_10[9];
    (*(undefined4 *)(gen_frame + 0x1c)) = param_10[7];
    (*(undefined4 *)(gen_frame + 0x28)) = param_10[10];
  }
  uVar1 = 0xffff;
  if ((byte)param_13 != 0xff) {
    uVar1 = (ushort)(byte)param_13;
  }
  (*(ushort *)(gen_frame + 0x60)) = ((ushort)(*(byte *)(gen_frame + 0x6f)) << 6 | uVar1 & 0x3f) * 4 | 2;
  (*(undefined2 *)(gen_frame + 0x62)) = *(undefined2 *)(param_5 + 8);
  (*(int *)(gen_frame + 0x3c)) = param_5;
  (*(undefined4 *)(gen_frame + 0x64)) = (*(undefined4 *)(gen_frame + 0x68));
  (*(undefined1 *)(gen_frame + 0x44)) = (undefined1)param_7;
  (*(undefined4 *)(gen_frame + 0x48)) = param_8;
  (*(ushort * PTR32 *)(gen_frame + 0x4c)) = &(*(ushort *)(gen_frame + 0x60));
  (*(byte * PTR32 *)(gen_frame + 0x40)) = param_6;
  (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = &(*(undefined4 *)(gen_frame + 0x0));
  (*(undefined1 *)(gen_frame + 0x58)) = (undefined1)param_12;
  piVar2 = (int *)0x0;
  (*(int *)(gen_frame + 0x54)) = iVar3;
  (*(byte *)(gen_frame + 0x59)) = (byte)param_13;
  (*(int *)(gen_frame + 0x5c)) = param_9;
  switch((unsigned int)(uintptr_t)((*(byte *)(gen_frame + 0x6f)))) {
  case 1: ;
    piVar2 = (int *)F_005fb750(&(*(int *)(gen_frame + 0x3c)));
    break;
  default: ;
    goto switchD_005fbcd1_caseD_2;
  case 3: ;
    piVar2 = (int *)F_005d9ec0(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 4: ;
    piVar2 = (int *)F_005e1b40(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 5: ;
    piVar2 = (int *)F_005da190(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 6: ;
    if (iVar3 == 0) {
      (*(int *)(gen_frame + 0x54)) = 2;
    }
    goto LAB_005fbea7;
  case 7: ;
    piVar2 = (int *)F_005f3530(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 8: ;
    piVar2 = (int *)F_005e19c0(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 9: ;
    piVar2 = (int *)F_005e1a80(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0xc: ;
    (*(int *)(gen_frame + 0x54)) = 4;
    piVar2 = (int *)F_005e1bf0(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0xd: ;
    piVar2 = (int *)F_005da030(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0xe: ;
    (*(int *)(gen_frame + 0x54)) = 7;
    piVar2 = (int *)F_005e1d70(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0xf: ;
    (*(int *)(gen_frame + 0x54)) = 10;
LAB_005fbea7: ;
    piVar2 = (int *)F_005f4cd0(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x10: ;
    (*(int *)(gen_frame + 0x54)) = 5;
    piVar2 = (int *)F_005e1cb0(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x27: ;
    piVar2 = (int *)F_005d9f70(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x28: ;
    piVar2 = (int *)F_005f7f10(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x29: ;
    piVar2 = (int *)F_005e1ef0(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x2b: ;
    piVar2 = (int *)F_005e2050(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x2c: ;
    piVar2 = (int *)F_005e2100(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x2d: ;
    (*(int *)(gen_frame + 0x54)) = 6;
    piVar2 = (int *)F_005e1e30(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x2f: ;
    piVar2 = (int *)F_005da0e0((gen_frame + 0x7c),&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x31: ;
    piVar2 = (int *)F_005e21b0(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x33: ;
    piVar2 = (int *)F_005da240(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x39: ;
    piVar2 = (int *)F_005e2320(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x3a: ;
    piVar2 = (int *)F_005e23d0(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x3b: ;
    piVar2 = (int *)F_005e2260(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x41: ;
    piVar2 = (int *)F_005e2690(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x42: ;
    piVar2 = (int *)F_005e2740(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x43: ;
    piVar2 = (int *)F_005e2480(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x44: ;
    piVar2 = (int *)F_005da2f0(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x45: ;
    piVar2 = (int *)F_005da3a0(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x46: ;
    piVar2 = (int *)F_005e2530(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x47: ;
    piVar2 = (int *)F_005e1fa0(&(*(int *)(gen_frame + 0x3c)));
    break;
  case 0x48: ;
    piVar2 = (int *)F_005e25e0(&(*(int *)(gen_frame + 0x3c)));
  }
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2,param_6);
  }
switchD_005fbcd1_caseD_2: ;
  return (uint)piVar2;
}

/* ref: FUN_005fbfa0 */
byte F_005fbfa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fbfa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int * piVar7;
  undefined3 extraout_var = 0;
  undefined * this_00;
  int iVar8;
  int iVar9;
  int iVar10;
  int * piVar11;
  float in_XMM1_Da = 0;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM7_Da = 0;
  
  if ((((byte)param_2 < 5) && (param_1[1] == 1)) &&
     (iVar10 = *param_1, *(int *)((int)param_1 + iVar10 + 0xc) == 1)) {
    iVar8 = *(int *)((int)param_1 + iVar10 + 8);
    iVar10 = (int)param_1 + *(int *)((int)param_1 + iVar8 + iVar10) + iVar8 + iVar10;
    (*(int *)(gen_frame + 0xb4)) = iVar10;
    (*(int * PTR32 *)(gen_frame + 0xc0)) = *(int * PTR32 *)(iVar10 + 0xc);
    if (*(int * PTR32 *)(iVar10 + 0xc) != (int *)0x0) {
      uVar6 = *(uint *)((int)this + 8);
      if (uVar6 == 0) {
        (*(undefined * PTR32 *)(gen_frame + 0xc8)) = (undefined *)0x0;
      }
      else {
        (*(undefined * PTR32 *)(gen_frame + 0xc8)) = *(undefined * PTR32 *)(uVar6 + 4);
      }
      (*(uint *)(gen_frame + 0xac)) = uVar6;
      if (uVar6 == 0) {
        (*(undefined * PTR32 *)(gen_frame + 0xc8)) = *(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x10);
        uVar6 = F_005f2f30(*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x10));
        (*(uint *)(gen_frame + 0xac)) = uVar6;
      }
      (*(int *)(gen_frame + 0xa4)) = *(int *)((int)this + 0x14);
      F_0061bcf0((undefined *)((int)this + 0x78),(*(int * PTR32 *)(gen_frame + 0xc0)));
      (*(int *)(gen_frame + 0xc4)) = 0;
      if (0 < (int)(*(int * PTR32 *)(gen_frame + 0xc0))) {
        (*(int *)(gen_frame + 0xb0)) = (4 - (param_2 & 0xff)) * 8;
        do {
          iVar10 = *(int *)(iVar10 + 8) + iVar10;
          piVar11 = ((int *)GEN_TOP((*(int *)(iVar10 + (*(int *)(gen_frame + 0xc4)) * 4) + iVar10)));
          (*(int * PTR32 *)(gen_frame + 0xcc)) = ((int *)GEN_TOP((piVar11[1] << ((byte)(*(int *)(gen_frame + 0xb0)) & 0x1f) | *(uint *)((int)this + 0x18))));
          (*(int * PTR32 *)(gen_frame + 0xbc)) = piVar11 + 3;
          F_00a1e7d0(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,&(*(undefined4 *)(gen_frame + 0x70)),piVar11 + 3);
          if (*piVar11 == 7) {
            (*(undefined4 *)(gen_frame + 0x30)) = (*(undefined4 *)(gen_frame + 0x70));
            (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 *)(gen_frame + 0x74));
            (*(undefined4 *)(gen_frame + 0x38)) = (*(undefined4 *)(gen_frame + 0x78));
            (*(undefined4 *)(gen_frame + 0x40)) = (*(undefined4 *)(gen_frame + 0x80));
            (*(undefined4 *)(gen_frame + 0x50)) = REFG(float, 0x1302c60);
            (*(undefined4 *)(gen_frame + 0x44)) = (*(undefined4 *)(gen_frame + 0x84));
            (*(undefined4 *)(gen_frame + 0x48)) = (*(undefined4 *)(gen_frame + 0x88));
            (*(undefined4 *)(gen_frame + 0x4c)) = (*(undefined4 *)(gen_frame + 0x8c));
            (*(undefined4 *)(gen_frame + 0x54)) = REFG(float, 0x1302c64);
            (*(undefined4 *)(gen_frame + 0x58)) = REFG(float, 0x1302c68);
            uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this);
            F_00a1ec40(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x30)),uVar6);
            uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this);
            fVar1 = ((float)GEN_TOF(((float10)*(float *)(uVar6 + 0x20) * (float10)(*(float *)(gen_frame + 0x90)))));
            (*(float *)(gen_frame + 0x60)) = fVar1;
            fVar2 = ((float)GEN_TOF(((float10)*(float *)(uVar6 + 0x24) * (float10)(*(float *)(gen_frame + 0x94)))));
            (*(float *)(gen_frame + 0x64)) = fVar2;
            fVar3 = ((float)GEN_TOF(((float10)*(float *)(uVar6 + 0x28) * (float10)(*(float *)(gen_frame + 0x98)))));
            (*(float *)(gen_frame + 0x68)) = fVar3;
            (*(float *)(gen_frame + 0x20)) = fVar1;
            (*(float *)(gen_frame + 0x24)) = fVar2;
            (*(float *)(gen_frame + 0x28)) = fVar3;
          }
          else {
            uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this);
            F_00a1ec40(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x70)),uVar6);
          }
          F_00a1ea10((*(int * PTR32 *)(gen_frame + 0xbc)),((undefined1 *)(gen_frame + 0x0)));
          uVar6 = piVar11[1];
          piVar11[1] = (*(int *)(gen_frame + 0xa4));
          (*(uint *)(gen_frame + 0xb8)) = uVar6;
          piVar7 = (int *)F_005fbb80(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,(*(uint *)(gen_frame + 0xac)),piVar11,
                                       0,0,(*(int * PTR32 *)(gen_frame + 0xcc)),((undefined1 *)(gen_frame + 0x0)),*(byte *)((int)this + 0x28) & 0xf,
                                       param_2,(*(int *)(gen_frame + 0xc4)));
          *(byte *)(piVar7 + 8) =
               *(byte *)(piVar7 + 8) ^ (*(byte *)(piVar7 + 8) ^ *(byte *)((int)this + 0x20)) & 1;
          (*(int * PTR32 *)(gen_frame + 0xcc)) = piVar7;
          bVar5 = F_005d9b60(this);
          uVar6 = CONCAT31(extraout_var,bVar5);
          if ((bVar5 == 0) ||
             (uVar6 = ((code *)*(gen_code32 *)(*piVar7 + 0xcc))(piVar7), piVar7 = (*(int * PTR32 *)(gen_frame + 0xcc)), (char)uVar6 == '\0')
             ) {
            uVar6 = uVar6 & 0xffffff00;
          }
          else {
            uVar6 = CONCAT31((int3)(uVar6 >> 8),1);
          }
          ((code *)*(gen_code32 *)(*piVar7 + 0xe0))(piVar7,uVar6);
          F_005eab80(this,(uint)(*(int * PTR32 *)(gen_frame + 0xcc)));
          if ((*(int *)((int)this + 0xa4) != 0) && (*(char *)((int)(*(int * PTR32 *)(gen_frame + 0xcc)) + 0x11) == '\x06')) {
            (*(int * PTR32 *)(gen_frame + 0xcc))[0x29] = *(int *)((int)this + 0xa4);
          }
          piVar11[1] = (*(uint *)(gen_frame + 0xb8));
          F_00a1ea10((*(int * PTR32 *)(gen_frame + 0xbc)),&(*(undefined4 *)(gen_frame + 0x70)));
          this_00 = (undefined *)F_00406b90(0x50,0,0);
          if (this_00 == (undefined *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = F_005db070(this_00,(*(int * PTR32 *)(gen_frame + 0xcc)));
          }
          *(undefined4 *)(uVar6 + 0x20) = (*(undefined4 *)(gen_frame + 0x70));
          *(undefined4 *)(uVar6 + 0x24) = (*(undefined4 *)(gen_frame + 0x74));
          *(undefined4 *)(uVar6 + 0x28) = (*(undefined4 *)(gen_frame + 0x78));
          *(undefined4 *)(uVar6 + 0x30) = (*(undefined4 *)(gen_frame + 0x80));
          *(undefined4 *)(uVar6 + 0x34) = (*(undefined4 *)(gen_frame + 0x84));
          *(undefined4 *)(uVar6 + 0x38) = (*(undefined4 *)(gen_frame + 0x88));
          *(undefined4 *)(uVar6 + 0x3c) = (*(undefined4 *)(gen_frame + 0x8c));
          *(float *)(uVar6 + 0x40) = (*(float *)(gen_frame + 0x90));
          *(float *)(uVar6 + 0x44) = (*(float *)(gen_frame + 0x94));
          *(float *)(uVar6 + 0x48) = (*(float *)(gen_frame + 0x98));
          (*(uint *)(gen_frame + 0xb8)) = uVar6;
          F_0061ce70((undefined *)((int)this + 0x78),&(*(uint *)(gen_frame + 0xb8)));
          bVar5 = F_005d6770(this);
          if (bVar5 != 0) {
            F_005f7b00((*(undefined * PTR32 *)(gen_frame + 0xc8)),(*(int * PTR32 *)(gen_frame + 0xcc)));
          }
          iVar8 = (*(int *)(gen_frame + 0xc4)) + 1;
          (*(int *)(gen_frame + 0xc4)) = iVar8;
          iVar10 = (*(int *)(gen_frame + 0xb4));
        } while (iVar8 < (int)(*(int * PTR32 *)(gen_frame + 0xc0)));
      }
      (*(int *)(gen_frame + 0xc4)) = 0;
      if (0 < *(int *)(iVar10 + 0x30)) {
        iVar8 = (4 - (param_2 & 0xff)) * 8;
        (*(int *)(gen_frame + 0xb0)) = iVar8;
        (*(undefined * PTR32 *)(gen_frame + 0xc8)) = (undefined *)0x0;
        do {
          iVar9 = iVar10 + *(int *)(iVar10 + 0x2c);
          (*(int * PTR32 *)(gen_frame + 0xbc)) = (int *)0x0;
          uVar6 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc8)) + iVar10 + *(int *)(iVar10 + 0x2c) + 4))) <<
                  ((byte)iVar8 & 0x1f) | *(uint *)((int)this + 0x18);
          (*(uint *)(gen_frame + 0xb8)) = uVar6;
          piVar11 = ((int *)GEN_TOP((*(int *)((int)this + 0x7c) - *(int *)((int)this + 0x78) >> 2)));
          if (piVar11 != (int *)0x0) {
            (*(int * PTR32 *)(gen_frame + 0xc0)) = *(int * PTR32 *)((int)this + 0x78);
            do {
              iVar4 = *(int *)(*(*(int * PTR32 *)(gen_frame + 0xc0)) + 0x10);
              iVar10 = (*(int *)(gen_frame + 0xb4));
              if (*(uint *)(iVar4 + 0x18) == uVar6) {
                *(byte *)(iVar4 + 0x2b) =
                     *(byte *)(iVar4 + 0x2b) ^
                     ((*(char *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc8)) + iVar9 + 8) != '\0') * '\x02' ^
                     *(byte *)(iVar4 + 0x2b)) & 2;
                *(byte *)(iVar4 + 0x2b) =
                     ((*(char *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc8)) + iVar9 + 9) != '\0') * '\x04' ^
                     *(byte *)(iVar4 + 0x2b)) & 4 ^ *(byte *)(iVar4 + 0x2b);
                break;
              }
              (*(int * PTR32 *)(gen_frame + 0xc0)) = (*(int * PTR32 *)(gen_frame + 0xc0)) + 1;
              piVar7 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0xbc)) + 1);
              (*(int * PTR32 *)(gen_frame + 0xbc)) = piVar7;
            } while (piVar7 < piVar11);
          }
          (*(undefined * PTR32 *)(gen_frame + 0xc8)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0xc8)) + 0xc);
          iVar9 = (*(int *)(gen_frame + 0xc4)) + 1;
          (*(int *)(gen_frame + 0xc4)) = iVar9;
        } while (iVar9 < *(int *)(iVar10 + 0x30));
      }
      if (*(int *)((int)this + 0xa0) != 0) {
        F_00406b30(*(int *)((int)this + 0xa0));
        *(undefined4 *)((int)this + 0xa0) = 0;
      }
      *(undefined1 *)((int)this + 0xc0) = 0;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_005fc400 */
unsigned int F_005fc400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fc400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * PTR32 * ppuVar8;
  byte * pbVar9;
  float in_XMM1_Da = 0;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM7_Da = 0;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar4 = *(int *)(param_1 + 8) + param_1;
      pbVar9 = ((byte *)GEN_TOP((*(int *)(iVar4 + (*(int *)(gen_frame + 0x14)) * 4) + iVar4)));
      F_005ec610(*(undefined * PTR32 *)((int)this + 4),(uint)*pbVar9,(uint)*(ushort *)((int)this + 8),
                   *(undefined4 *)(pbVar9 + 4),&(*(char *)(gen_frame + 0x1b)),&(*(undefined1 *)(gen_frame + 0x1a)));
      if ((*(char *)(gen_frame + 0x1b)) != '\0') {
        puVar5 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 0x20))[1]));
        cVar1 = *(char *)((int)puVar5 + 0x15);
        puVar6 = *(undefined4 * PTR32 *)((int)this + 0x20);
        while (cVar1 == '\0') {
          if ((uint)puVar5[3] < *(uint *)(pbVar9 + 4)) {
            puVar7 = (undefined4 *)puVar5[2];
            puVar5 = puVar6;
          }
          else {
            puVar7 = (undefined4 *)*puVar5;
          }
          puVar6 = puVar5;
          puVar5 = puVar7;
          cVar1 = *(char *)((int)puVar7 + 0x15);
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar6;
        if ((puVar6 == *(undefined4 * PTR32 *)((int)this + 0x20)) ||
           (*(uint *)(pbVar9 + 4) < (uint)puVar6[3])) {
          (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = *(undefined4 * PTR32 *)((int)this + 0x20);
          ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0xc));
        }
        else {
          ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x10));
        }
        if (*ppuVar8 == *(undefined4 * PTR32 *)((int)this + 0x20)) {
          puVar5 = (undefined4 *)
                   F_005fbb80(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,this,pbVar9,1,0,0,0,0,0,
                                0xff);
          uVar2 = *(undefined4 *)(pbVar9 + 4);
          (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar5;
          puVar5 = (undefined4 *)F_004296a0(0x18,0,0x385);
          *puVar5 = *(undefined4 *)((int)this + 0x20);
          puVar5[1] = *(undefined4 *)((int)this + 0x20);
          puVar5[2] = *(undefined4 *)((int)this + 0x20);
          *(undefined2 *)(puVar5 + 5) = 0;
          if (puVar5 + 3 != (undefined4 *)0x0) {
            puVar5[3] = uVar2;
            puVar5[4] = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
          }
          F_006187f0((undefined *)((int)this + 0x1c),((undefined1 *)(gen_frame + 0x4)),puVar5,0);
          F_005f7b00(*(undefined * PTR32 *)((int)this + 4),(*(undefined4 * PTR32 *)(gen_frame + 0x10)));
        }
      }
      iVar4 = (*(int *)(gen_frame + 0x14)) + 1;
      (*(int *)(gen_frame + 0x14)) = iVar4;
    } while (iVar4 < *(int *)(param_1 + 0xc));
  }
  (*(int *)(gen_frame + 0x14)) = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)0x0;
    do {
      puVar5 = *(undefined4 * PTR32 *)((int)this + 0x20);
      iVar4 = *(int *)(param_1 + 0x24) + param_1;
      if (*(char *)((int)puVar5[1] + 0x15) == '\0') {
        puVar6 = (undefined4 *)puVar5[1];
        do {
          if ((uint)puVar6[3] < *(uint *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10)) + iVar4 + 4)) {
            puVar7 = (undefined4 *)puVar6[2];
          }
          else {
            puVar7 = (undefined4 *)*puVar6;
            puVar5 = puVar6;
          }
          puVar6 = puVar7;
        } while (*(char *)((int)puVar7 + 0x15) == '\0');
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar5;
      if ((puVar5 == *(undefined4 * PTR32 *)((int)this + 0x20)) ||
         (*(uint *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10)) + iVar4 + 4) < (uint)puVar5[3])) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = *(undefined4 * PTR32 *)((int)this + 0x20);
        ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x8));
      }
      else {
        ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0xc));
      }
      if (*ppuVar8 != *(undefined4 * PTR32 *)((int)this + 0x20)) {
        F_005f7fc0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x4c))),(*ppuVar8)[4],
                     (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10)) + *(int *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10)) + iVar4 + 8) + iVar4);
      }
      iVar4 = (*(int *)(gen_frame + 0x14)) + 1;
      (*(int *)(gen_frame + 0x14)) = iVar4;
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 3;
    } while (iVar4 < *(int *)(param_1 + 0x28));
  }
  (*(int *)(gen_frame + 0x14)) = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)0x0;
    do {
      puVar5 = *(undefined4 * PTR32 *)((int)this + 0x20);
      iVar4 = param_1 + *(int *)(param_1 + 0x2c);
      if (*(char *)((int)puVar5[1] + 0x15) == '\0') {
        puVar6 = (undefined4 *)puVar5[1];
        do {
          if ((uint)puVar6[3] < *(uint *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10)) + iVar4 + 4)) {
            puVar7 = (undefined4 *)puVar6[2];
          }
          else {
            puVar7 = (undefined4 *)*puVar6;
            puVar5 = puVar6;
          }
          puVar6 = puVar7;
        } while (*(char *)((int)puVar7 + 0x15) == '\0');
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar5;
      if ((puVar5 == *(undefined4 * PTR32 *)((int)this + 0x20)) ||
         (*(uint *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10)) + iVar4 + 4) < (uint)puVar5[3])) {
        (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = *(undefined4 * PTR32 *)((int)this + 0x20);
        ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0xc));
      }
      else {
        ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x8));
      }
      if (*ppuVar8 != *(undefined4 * PTR32 *)((int)this + 0x20)) {
        iVar3 = (*ppuVar8)[4];
        *(byte *)(iVar3 + 0x2b) =
             *(byte *)(iVar3 + 0x2b) ^
             ((*(char *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10)) + iVar4 + 8) != '\0') * '\x02' ^ *(byte *)(iVar3 + 0x2b)) & 2
        ;
        *(byte *)(iVar3 + 0x2b) =
             ((*(char *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10)) + iVar4 + 9) != '\0') * '\x04' ^ *(byte *)(iVar3 + 0x2b)) & 4
             ^ *(byte *)(iVar3 + 0x2b);
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 3;
      iVar4 = (*(int *)(gen_frame + 0x14)) + 1;
      (*(int *)(gen_frame + 0x14)) = iVar4;
    } while (iVar4 < *(int *)(param_1 + 0x30));
  }
  return 0;
}

/* ref: FUN_005fc660 */
uint F_005fc660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fc660u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  float in_XMM1_Da = 0;
  float in_XMM2_Da = 0;
  float in_XMM3_Da = 0;
  float in_XMM7_Da = 0;
  
  iVar1 = (*(int *)&gen_args[1]);
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)((*(int *)&gen_args[1]) + 4);
  F_00619760(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),&(*(int *)&gen_args[1]),(undefined4 *)((*(int *)&gen_args[1]) + 4));
  if ((*(int *)&gen_args[1]) == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)))) {
    uVar2 = F_005fbb80(in_XMM1_Da,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,(*(undefined * PTR32 *)&gen_args[0]),iVar1,0,(*(undefined4 *)&gen_args[2]),0,0,0,0,
                         0xff);
    (*(undefined4 *)(gen_frame + 0x4)) = *(*(undefined4 * PTR32 *)(gen_frame + 0x8));
    puVar3 = (undefined4 *)F_004296a0(0x18,0,0x385);
    *puVar3 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
    puVar3[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
    puVar3[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
    *(undefined2 *)(puVar3 + 5) = 0;
    if (puVar3 + 3 != (undefined4 *)0x0) {
      puVar3[3] = (*(undefined4 *)(gen_frame + 0x4));
      puVar3[4] = uVar2;
    }
    F_006187f0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),&(*(undefined4 *)(gen_frame + 0x4)),puVar3,0);
    F_005f7b00(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),uVar2);
    return uVar2;
  }
  return 0;
}

/* ref: Client::LayoutEngine::Streaming::StreamingManager::vf1 */
unsigned int F_005fc720(unsigned int gen_a0)
{
  GEN_ENTER(0x5fc720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  F_005ee3d0(this,1);
  uVar1 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
  ((byte *)(gen_frame + 0x0))[8] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) = uVar1 & 0xffffff00;
  do {
    uVar3 = F_005fbb00((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),this + 0x20);
    if (uVar3 != 0) {
      puVar4 = (undefined4 *)F_004296a0(0x18,0,900);
      *puVar4 = *(undefined4 *)(this + 0x34);
      puVar4[1] = *(undefined4 *)(this + 0x34);
      puVar4[2] = *(undefined4 *)(this + 0x34);
      *(undefined2 *)(puVar4 + 5) = 0;
      if ((byte *)(puVar4 + 3) != (byte *)0x0) {
        *(byte *)(puVar4 + 3) = ((byte *)(gen_frame + 0x0))[8];
        puVar4[4] = uVar3;
      }
      F_00617ef0(this + 0x30,((byte *)(gen_frame + 0x0)),puVar4,0);
    }
    bVar2 = ((byte *)(gen_frame + 0x0))[8] + 1;
    ((byte *)(gen_frame + 0x0))[8] = bVar2;
  } while (bVar2 < 0x4b);
  return 0;
}

/* ref: FUN_005fc7b0 */
uint F_005fc7b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5fc7b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined1 * puVar5;
  
  uVar3 = F_005d9890(*(undefined4 *)((int)this + 0x34));
  if (uVar3 == 0) {
    return 0;
  }
  puVar5 = ((undefined1 *)GEN_TOP((*(int *)(uVar3 + 0x20) + uVar3)));
  if (puVar5 != (undefined1 *)0x0) {
    *(undefined1 *)((int)this + 0xc1) = *puVar5;
    *(undefined1 *)((int)this + 0xc2) = puVar5[1];
    *(undefined1 *)((int)this + 0xc3) = puVar5[2];
    uVar4 = 0;
    do {
      *(undefined1 *)((int)this + uVar4 + 0xc5) = puVar5[uVar4 + 5];
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x10);
  }
  (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),(*(byte *)((int)this + 0x28) >> 4) + 1);
  bVar2 = F_005fbfa0(this,uVar3,(*(uint *)(gen_frame + 0x8)));
  if (bVar2 == 0) {
    *(uint *)((int)this + 0xa8) = *(uint *)((int)this + 0xa8) & 0xfffffff4 | 4;
    return CONCAT31(extraout_var,bVar2);
  }
  F_005dad10((undefined *)((int)this + 0x70));
  if (((*(int *)((int)this + 8) == 0) || (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))), iVar1 == 0)
      ) || (*(char *)(iVar1 + 0x55) == '\0')) {
    F_005f83b0(this,*(int *)(uVar3 + 0x10) + uVar3);
    F_005f85c0(this,uVar3);
  }
  uVar3 = (int)*(char *)((int)this + 0xd8) - 1;
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
    (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),*(byte *)((int)this + 0xdc) >> 1) & 0xffffff01;
    (*(uint *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4)), 1, 3),*(byte *)((int)this + 0xdc)) & 0xffffff01;
    bVar2 = F_005dbaf0(this,(*(uint *)(gen_frame + 0x4)),(*(uint *)(gen_frame + 0x8)),0);
    uVar3 = CONCAT31(extraout_var_00,bVar2);
    break;
  case 1: ;
    uVar3 = F_005f51d0(this,(uint)(*(byte *)((int)this + 0xdc) & 1),
                         (uint)(*(byte *)((int)this + 0xdc) >> 1 & 1));
    break;
  case 2: ;
    bVar2 = F_005e34a0(this,(uint)*(byte *)((int)this + 0xe1),*(undefined4 *)((int)this + 0xe8),0)
    ;
    uVar3 = CONCAT31(extraout_var_01,bVar2);
    break;
  case 3: ;
    bVar2 = F_005e3670(this,*(undefined4 *)((int)this + 0xe4),(int)*(char *)((int)this + 0xe0),
                         *(undefined4 *)((int)this + 0xe8));
    uVar3 = CONCAT31(extraout_var_02,bVar2);
    break;
  default: ;
    goto switchD_005fc872_default;
  }
  if ((char)uVar3 != '\0') {
switchD_005fc872_default: ;
    *(undefined1 *)((int)this + 0xd8) = 0;
  }
  *(uint *)((int)this + 0xa8) = *(uint *)((int)this + 0xa8) & 0xfffffff2 | 2;
  return uVar3;
}

/* ref: FUN_005fc950 */
uint F_005fc950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fc950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 0x78) & 0xffffff0f;
  if ((char)uVar3 == '\x01') {
    piVar2 = (int *)(param_1 + 0x8c);
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2;
    UNLOCK();
    if (7 < iVar1) {
      *(uint *)((int)this + 0x78) = *(uint *)((int)this + 0x78) & 0xfffffff3 | 3;
      return (uint)piVar2;
    }
    uVar3 = F_005fc7b0((undefined *)((int)this + -0x30));
  }
  return uVar3;
}

/* ref: FUN_005fc990 */
unsigned int F_005fc990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fc990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  *(uint *)((int)this + 8) = (uint)*param_1;
  *(undefined2 *)((int)this + 0x10) = *param_2;
  F_005eda50(this,(uint)((char)param_1[8] != '\0'));
  *(byte *)((int)this + 0x16) =
       *(byte *)((int)this + 0x16) ^
       ((*(char *)((int)param_1 + 0x11) != '\0') * '\x02' ^ *(byte *)((int)this + 0x16)) & 2;
  *(ushort *)((int)this + 0x12) = param_1[0xc];
  *(ushort *)((int)this + 0x14) = param_1[0xd];
  F_005fc400(this,param_1);
  return 0;
}

/* ref: FUN_005fc9f0 */
unsigned int F_005fc9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fc9f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  undefined * pvVar2;
  undefined4 * puVar3;
  int iVar4;
  ushort * puVar5;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  if (0 < *(int *)(param_1 + 6)) {
    do {
      puVar5 = ((ushort *)GEN_TOP(((int)param_1 +
               *((int *)GEN_TOP(((int)param_1 + (*(int *)(gen_frame + 0x14)) * 4 + *(int *)(param_1 + 4)))) + *(int *)(param_1 + 4))))
      ;
      if (puVar5[0xc] != 0) {
        *(undefined1 *)((int)this + 0x30) = 1;
        if ((*(ushort *)((int)this + 0x32) != 0) || (*(short *)((int)this + 0x36) != 0)) {
          if ((((*(ushort *)((int)this + 0x32) == puVar5[0xc]) &&
               (*(ushort *)((int)this + 0x34) == puVar5[0xd])) ||
              ((*(ushort *)((int)this + 0x36) == puVar5[0xc] &&
               (*(ushort *)((int)this + 0x38) == puVar5[0xd])))) &&
             (bVar1 = F_005ecac0(this,*(undefined4 *)puVar5), bVar1 == 0)) {
            pvVar2 = (undefined *)F_00406b90(0x2c,0,0);
            if (pvVar2 == (undefined *)0x0) {
              pvVar2 = (undefined *)0x0;
            }
            else {
              pvVar2 = (undefined *)F_005f6e80(pvVar2,this);
            }
            *(uint *)((int)pvVar2 + 8) = (uint)*puVar5;
            *(undefined2 *)((int)pvVar2 + 0x10) = *param_1;
            (*(undefined * PTR32 *)(gen_frame + 0x18)) = pvVar2;
            F_005eda50(pvVar2,(uint)((char)puVar5[8] != '\0'));
            *(byte *)((int)pvVar2 + 0x16) =
                 *(byte *)((int)pvVar2 + 0x16) ^
                 ((*(char *)((int)puVar5 + 0x11) != '\0') * '\x02' ^ *(byte *)((int)pvVar2 + 0x16))
                 & 2;
            *(ushort *)((int)pvVar2 + 0x12) = puVar5[0xc];
            *(ushort *)((int)pvVar2 + 0x14) = puVar5[0xd];
            F_005fc400(pvVar2,puVar5);
            if ((char)param_2 == '\0') {
              (*(ushort *)(gen_frame + 0xc)) = *puVar5;
              puVar3 = (undefined4 *)F_004296a0(0x18,0,900);
              *puVar3 = *(undefined4 *)((int)this + 0x110);
              puVar3[1] = *(undefined4 *)((int)this + 0x110);
              puVar3[2] = *(undefined4 *)((int)this + 0x110);
              *(undefined2 *)(puVar3 + 5) = 0;
              if ((ushort *)(puVar3 + 3) != (ushort *)0x0) {
                *(ushort *)(puVar3 + 3) = (*(ushort *)(gen_frame + 0xc));
                puVar3[4] = pvVar2;
              }
              F_006180b0((undefined *)((int)this + 0x10c),((undefined1 *)(gen_frame + 0x4)),puVar3,0);
            }
            else {
              F_0061d4b0((undefined *)((int)this + 300),&(*(undefined * PTR32 *)(gen_frame + 0x18)));
            }
          }
        }
      }
      iVar4 = (*(int *)(gen_frame + 0x14)) + 1;
      (*(int *)(gen_frame + 0x14)) = iVar4;
    } while (iVar4 < *(int *)(param_1 + 6));
  }
  return 0;
}

/* ref: FUN_005fcb80 */
unsigned int F_005fcb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fcb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  ushort uVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined4 * PTR32 * ppuVar6;
  undefined * pvVar7;
  undefined4 * puVar8;
  int iVar9;
  ushort * puVar10;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(uint *)(gen_frame + 0x18)) = 0;
  if (*(int *)((int)this + 0x18) == 0) {
    if (*(int *)((int)this + 0x1c) != 0) {
      (*(int *)(gen_frame + 0x14)) = *(int *)((int)this + 0x1c);
      F_006154e0((undefined *)((int)this + 0x16c),&(*(uint *)(gen_frame + 0x18)),&(*(int *)(gen_frame + 0x14)));
      if ((*(uint *)(gen_frame + 0x18)) == *(uint *)((int)this + 0x170)) {
        (*(uint *)(gen_frame + 0x18)) = 0;
      }
      else {
        (*(uint *)(gen_frame + 0x18)) = *(uint *)((*(uint *)(gen_frame + 0x18)) + 0x10);
      }
    }
  }
  else {
    uVar4 = F_005eca50(this,*(int *)((int)this + 0x18));
    (*(uint *)(gen_frame + 0x18)) = uVar4;
  }
  (*(int *)(gen_frame + 0x14)) = 0;
  if (0 < *(int *)(param_1 + 6)) {
    do {
      puVar10 = ((ushort *)GEN_TOP(((int)param_1 +
                *((int *)GEN_TOP(((int)param_1 + (*(int *)(gen_frame + 0x14)) * 4 + *(int *)(param_1 + 4)))) + *(int *)(param_1 + 4)
                )));
      uVar4 = F_005d93f0((*(uint *)(gen_frame + 0x18)),puVar10);
      if ((char)uVar4 != '\0') {
        puVar8 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 0x110))[1]));
        cVar1 = *(char *)((int)puVar8 + 0x15);
        puVar3 = *(undefined4 * PTR32 *)((int)this + 0x110);
        while (cVar1 == '\0') {
          if (*(ushort *)(puVar8 + 3) < *puVar10) {
            puVar5 = (undefined4 *)puVar8[2];
            puVar8 = puVar3;
          }
          else {
            puVar5 = (undefined4 *)*puVar8;
          }
          puVar3 = puVar8;
          puVar8 = puVar5;
          cVar1 = *(char *)((int)puVar5 + 0x15);
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar3;
        if ((puVar3 == *(undefined4 * PTR32 *)((int)this + 0x110)) || (*puVar10 < *(ushort *)(puVar3 + 3)))
        {
          (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = *(undefined4 * PTR32 *)((int)this + 0x110);
          ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0xc));
        }
        else {
          ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x10));
        }
        if (*ppuVar6 == *(undefined4 * PTR32 *)((int)this + 0x110)) {
          pvVar7 = (undefined *)F_00406b90(0x2c,0,0);
          if (pvVar7 == (undefined *)0x0) {
            pvVar7 = (undefined *)0x0;
          }
          else {
            pvVar7 = (undefined *)F_005f6e80(pvVar7,this);
          }
          *(uint *)((int)pvVar7 + 8) = (uint)*puVar10;
          *(undefined2 *)((int)pvVar7 + 0x10) = *param_1;
          F_005eda50(pvVar7,(uint)((char)puVar10[8] != '\0'));
          *(byte *)((int)pvVar7 + 0x16) =
               *(byte *)((int)pvVar7 + 0x16) ^
               ((*(char *)((int)puVar10 + 0x11) != '\0') * '\x02' ^ *(byte *)((int)pvVar7 + 0x16)) &
               2;
          *(ushort *)((int)pvVar7 + 0x12) = puVar10[0xc];
          *(ushort *)((int)pvVar7 + 0x14) = puVar10[0xd];
          F_005fc400(pvVar7,puVar10);
          uVar2 = *puVar10;
          puVar8 = (undefined4 *)F_004296a0(0x18,0,900);
          *puVar8 = *(undefined4 *)((int)this + 0x110);
          puVar8[1] = *(undefined4 *)((int)this + 0x110);
          puVar8[2] = *(undefined4 *)((int)this + 0x110);
          *(undefined2 *)(puVar8 + 5) = 0;
          if ((ushort *)(puVar8 + 3) != (ushort *)0x0) {
            *(ushort *)(puVar8 + 3) = uVar2;
            puVar8[4] = pvVar7;
          }
          F_006180b0((undefined *)((int)this + 0x10c),((undefined1 *)(gen_frame + 0x0)),puVar8,0);
          this = (*(undefined * PTR32 *)(gen_frame + 0x8));
        }
      }
      iVar9 = (*(int *)(gen_frame + 0x14)) + 1;
      (*(int *)(gen_frame + 0x14)) = iVar9;
    } while (iVar9 < *(int *)(param_1 + 6));
  }
  F_005fc9f0(this,param_1,0);
  return 0;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf1 */
uint F_005fcd40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fcd40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  
  iVar2 = *(int *)(this + 0x78);
  iVar1 = *(int *)(this + 0x7c);
  if (iVar2 != iVar1) {
    F_005f5110(this);
  }
  F_005ed050((undefined *)this,param_1,param_2);
  if (*(int *)(this + 8) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
  }
  puVar4 = (undefined4 *)F_00509330((undefined *)(iVar3 + 0x14c),param_2);
  *(undefined4 *)(this + 0x38) = *puVar4;
  if (iVar2 != iVar1) {
    puVar4 = (undefined4 *)F_005fc7b0(this);
  }
  return (uint)puVar4;
}

/* ref: FUN_005fcda0 */
uint F_005fcda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5fcda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  bool bVar4;
  
  bVar4 = *(int *)((int)this + 0x78) != *(int *)((int)this + 0x7c);
  if (bVar4) {
    F_005f5110(this);
  }
  F_005ed050(this,param_1,param_2);
  if (*(int *)((int)this + 8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 4)));
  }
  puVar2 = (undefined4 *)F_00509330((undefined *)(iVar1 + 0x14c),param_2);
  *(undefined4 *)((int)this + 0x38) = *puVar2;
  if (bVar4) {
    F_005fc7b0(this);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0xe0))(this,param_3);
  ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,*(undefined4 *)(param_1 + 0x14));
  uVar3 = F_005e2b50(this,param_2);
  return uVar3;
}

/* ref: FUN_005fce30 */
unsigned int F_005fce30(unsigned int gen_a0)
{
  GEN_ENTER(0x5fce30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  F_005f9a00(this);
  uVar3 = 0;
  uVar2 = *(int *)((int)this + 0xe0) - *(int *)((int)this + 0xdc) >> 2;
  if (uVar2 != 0) {
    do {
      uVar1 = F_005d5ea0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xdc) + uVar3 * 4))));
      F_005fcb80(this,uVar1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(int *)((int)this + 0xd8) != 0) {
    F_0050c620(*(int *)((int)this + 0xd8),0,0);
    *(undefined4 *)((int)this + 0xd8) = 0;
  }
  F_005eef40(this);
  *(undefined4 *)((int)this + 0x10) = 5;
  return 0;
}

/* ref: FUN_005fceb0 */
unsigned int F_005fceb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fceb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int iVar2;
  
  piVar1 = param_1;
  if (*(char *)(REFG(int, 0x1379cb0) + 0x26) != '\0') {
    param_1 = (int *)param_1[1];
    if (0 < (int)param_1) {
      iVar2 = 0;
      do {
        F_005ecdd0(this,*piVar1 + iVar2 + (int)piVar1);
        iVar2 = iVar2 + 0x10;
        param_1 = (int *)((int)param_1 + -1);
      } while (param_1 != (int *)0x0);
    }
    F_005f7c60(this);
  }
  param_1 = (int *)piVar1[1];
  if (0 < (int)param_1) {
    iVar2 = 0;
    do {
      F_005fcb80(this,*piVar1 + iVar2 + (int)piVar1);
      iVar2 = iVar2 + 0x10;
      param_1 = (int *)((int)param_1 + -1);
    } while (param_1 != (int *)0x0);
  }
  return 0;
}

/* ref: FUN_005fcf20 */
unsigned int F_005fcf20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fcf20u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  short sVar1;
  int iVar2;
  byte bVar3;
  uint * puVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  int * piVar8;
  uint uVar9;
  float10 fVar10;
  float10 fVar11;
  
  fVar10 = (float10)*(double *)&REFG(undefined, 0x1088070);
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)param_1 + 0x2c))) {
  case 1: ;
    piVar8 = ((int *)GEN_TOP(**(int * PTR32 *)((int)param_1 + 0x110)));
    (*(uint *)(gen_frame + 0x18)) = (uint)piVar8;
    if (piVar8 != *(int * PTR32 *)((int)param_1 + 0x110)) {
      do {
        uVar9 = (*(uint *)(gen_frame + 0x18));
        fVar5 = *(float *)((*(uint *)(gen_frame + 0x18)) + 0x10);
        sVar1 = *(short *)((int)gen_fl2bits(fVar5) + 0x12);
        (*(float *)(gen_frame + 0x14)) = fVar5;
        if (((sVar1 == 0) ||
            ((*(short *)((int)param_1 + 0x32) == sVar1 &&
             (*(short *)((int)param_1 + 0x34) == *(short *)((int)gen_fl2bits(fVar5) + 0x14))))) ||
           ((*(short *)((int)param_1 + 0x36) == sVar1 &&
            (*(short *)((int)param_1 + 0x38) == *(short *)((int)gen_fl2bits(fVar5) + 0x14))))) {
          F_00602450(&(*(uint *)(gen_frame + 0x18)));
        }
        else {
          F_0061d4b0((undefined *)((int)param_1 + 0x11c),&(*(float *)(gen_frame + 0x14)));
          puVar4 = (uint *)F_00615050((undefined *)((int)param_1 + 0x10c),((undefined1 *)(gen_frame + 0xc)),uVar9);
          (*(uint *)(gen_frame + 0x18)) = *puVar4;
          if (*puVar4 == *(uint *)((int)param_1 + 0x110)) break;
        }
      } while ((*(uint *)(gen_frame + 0x18)) != *(uint *)((int)param_1 + 0x110));
    }
    if (*(int *)((int)param_1 + 0xdc) == *(int *)((int)param_1 + 0xe0)) {
      uVar7 = 1;
      uVar9 = F_00500f10((int)param_1 + 0xc4);
      if (1 < uVar9) {
        do {
          uVar9 = F_00500f20((int)param_1 + 0xc4,uVar7);
          fVar5 = gen_bits2f(F_00513dc0(uVar9,0,0,0));
          (*(float *)(gen_frame + 0x14)) = fVar5;
          F_0061ce00((undefined *)((int)param_1 + 0xdc),&(*(float *)(gen_frame + 0x14)));
          uVar7 = uVar7 + 1;
          uVar9 = F_00500f10((int)param_1 + 0xc4);
        } while (uVar7 < uVar9);
      }
    }
    *(undefined4 *)((int)param_1 + 0x2c) = 2;
    break;
  case 2: ;
    bVar3 = F_005d9330(param_1);
    if (bVar3 != 0) {
      uVar7 = 0;
      uVar9 = *(int *)((int)param_1 + 0xe0) - *(int *)((int)param_1 + 0xdc) >> 2;
      if (uVar9 != 0) {
        do {
          uVar6 = F_005d5ea0(*((undefined4 *)GEN_TOP((*(int *)((int)param_1 + 0xdc) + uVar7 * 4))));
          F_005fc9f0(param_1,uVar6,1);
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar9);
      }
      if (*(int *)((int)param_1 + 0xd8) != 0) {
        F_0050c620(*(int *)((int)param_1 + 0xd8),0,0);
        *(undefined4 *)((int)param_1 + 0xd8) = 0;
      }
      F_005eef40(param_1);
      F_005ef180((int)param_1 + 300,(float)(float10)0);
      F_005ebe80(*(undefined * PTR32 *)((int)param_1 + 0x44));
      *(undefined4 *)((int)param_1 + 0x2c) = 3;
    }
    break;
  case 3: ;
    bVar3 = F_005ecb30((int)param_1 + 300);
    if (bVar3 != 0) {
      piVar8 = (int *)(REFG(int, 0x1375aec) + 0xc70);
      LOCK();
      iVar2 = *piVar8;
      *piVar8 = *piVar8;
      UNLOCK();
      if (iVar2 == 0) {
        *(undefined4 *)((int)param_1 + 0x2c) = 4;
      }
    }
    break;
  case 4: ;
    fVar5 = ((float)GEN_TOF(((float10)*(float *)param_2 * fVar10 + (float10)*(float *)((int)param_1 + 0x3c))));
    (*(float *)(gen_frame + 0x14)) = fVar5;
    *(float *)((int)param_1 + 0x3c) = fVar5;
    if ((float10)fVar5 < fVar10) {
      fVar5 = (float)((float10)fVar5 / fVar10);
      (*(float *)(gen_frame + 0x14)) = fVar5;
      F_005ef180((int)param_1 + 300,fVar5);
    }
    else {
      piVar8 = (int *)((int)param_1 + 300);
      F_005ef180(piVar8,(float)(float10)1);
      (*(uint *)(gen_frame + 0x18)) = 0;
      uVar9 = *(int *)((int)param_1 + 0x130) - *piVar8 >> 2;
      if (uVar9 != 0) {
        do {
          fVar5 = *(float *)(*piVar8 + (*(uint *)(gen_frame + 0x18)) * 4);
          (*(float *)(gen_frame + 0x14)) = fVar5;
          ((undefined2 *)(gen_frame + 0x10))[0] = *(undefined2 *)((int)gen_fl2bits(fVar5) + 8);
          F_0061ae80((undefined *)((int)param_1 + 0x10c),((undefined1 *)(gen_frame + 0x4)),((undefined2 *)(gen_frame + 0x10)));
          uVar7 = (*(uint *)(gen_frame + 0x18)) + 1;
          (*(uint *)(gen_frame + 0x18)) = uVar7;
        } while (uVar7 < uVar9);
      }
      iVar2 = *piVar8;
      if (iVar2 != *(int *)((int)param_1 + 0x130)) {
        (*(float *)(gen_frame + 0x14)) = 0.0;
        F_00c46e20(iVar2,*(int *)((int)param_1 + 0x130),0);
        *(int *)((int)param_1 + 0x130) = (int)gen_fl2bits((*(float *)(gen_frame + 0x14))) + iVar2;
      }
      *(undefined4 *)((int)param_1 + 0x2c) = 5;
    }
  }
  if (*(int *)((int)param_1 + 0x11c) != *(int *)((int)param_1 + 0x120)) {
    fVar10 = (float10)*(double *)&REFG(undefined, 0x1088070);
    fVar5 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x40) + (float10)*(float *)param_2 * fVar10)));
    fVar11 = (float10)fVar5;
    *(float *)((int)param_1 + 0x40) = fVar5;
    if (fVar11 < fVar10) {
      F_005ef180((int)param_1 + 0x11c,(float)((float10)1 - fVar11 / fVar10));
      return 0;
    }
    F_005ef260((int)param_1 + 0x11c);
  }
  return 0;
}

/* ref: FUN_005fd260 */
unsigned int F_005fd260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5fd260u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint * this_00;
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  char * pcVar5;
  
  pcVar5 = ((char *)GEN_TOP((*(int *)((*(int *)&gen_args[1]) + 8) + (*(int *)&gen_args[1]))));
  if ((char)(*(uint *)&gen_args[2]) != '\0') {
    F_005da920(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))),(*(int *)&gen_args[1]));
    if (pcVar5[*(int *)(pcVar5 + 0x14)] != '\0') {
      uVar3 = F_00513dc0(pcVar5 + *(int *)(pcVar5 + 0x14),(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x94,0,0);
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1ac))) = uVar3;
    }
    if (pcVar5[*(int *)(pcVar5 + 0x34)] != '\0') {
      uVar3 = F_00513dc0(pcVar5 + *(int *)(pcVar5 + 0x34),(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x94,0,0);
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) = uVar3;
    }
    F_005f2f70((*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]));
    if (pcVar5[*(int *)(pcVar5 + 4)] != '\0') {
      F_005fa680((*(undefined * PTR32 *)&gen_args[0]),pcVar5 + *(int *)(pcVar5 + 4),(uint)(pcVar5[3] != '\0'));
    }
    if (*pcVar5 != '\0') {
      (*(int *)&gen_args[3]) = 0;
      if (*(int *)((*(int *)&gen_args[1]) + 0x18) < 1) {
        return 0;
      }
      this_00 = ((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xdc)));
      do {
        iVar4 = *(int *)((*(int *)&gen_args[1]) + 0x14) + (*(int *)&gen_args[1]);
        iVar4 = *(int *)(iVar4 + (*(int *)&gen_args[3]) * 4) + iVar4;
        (*(uint *)&gen_args[2]) = F_00513dc0(iVar4,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x94,0,0);
        puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe0)));
        if (&(*(uint *)&gen_args[2]) < puVar1) {
          puVar2 = (undefined4 *)*this_00;
          if (&(*(uint *)&gen_args[2]) < puVar2) goto LAB_005fd381;
          if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe4)))) {
            F_0061bf60(this_00,1);
          }
          if (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe0))) != (undefined4 *)0x0) {
            **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe0))) =
                 *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(uint *)&gen_args[2]) - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
          }
        }
        else {
LAB_005fd381: ;
          if (puVar1 == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe4)))) {
            F_0061bf60(this_00,1);
          }
          if (*((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe0))) != (uint *)0x0) {
            **((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe0))) = (*(uint *)&gen_args[2]);
          }
        }
        *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe0))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe0))) + 4;
        F_0050b6c0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc4))),iVar4);
        (*(int *)&gen_args[3]) = (*(int *)&gen_args[3]) + 1;
        if (*(int *)((*(int *)&gen_args[1]) + 0x18) <= (*(int *)&gen_args[3])) {
          return 0;
        }
      } while( true );
    }
  }
  if ((char)(*(int *)&gen_args[3]) != '\0') {
    F_005fceb0((*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]));
  }
  return 0;
}

/* ref: FUN_005fd3e0 */
unsigned int F_005fd3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x5fd3e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  *(undefined1 *)((int)this + 0x55) = (undefined1)param_5;
  *(undefined4 *)((int)this + 0x1c) = param_4;
  *(undefined4 *)((int)this + 0x14) = 6;
  *(undefined4 *)((int)this + 8) = param_1;
  F_005fd260(this,param_2,1,1);
  *(undefined4 *)((int)this + 0x10) = 5;
  return 0;
}

/* ref: FUN_005fd420 */
byte F_005fd420(unsigned int gen_a0)
{
  GEN_ENTER(0x5fd420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  uVar2 = F_005d9890(*(undefined4 *)((int)this + 0xd8));
  if (uVar2 == 0) {
    *(undefined4 *)((int)this + 0x10) = 9;
    return 0;
  }
  iVar1 = *(int *)(uVar2 + 8);
  F_005fd260(this,uVar2,1,1);
  if (*(char *)(iVar1 + uVar2) != '\0') {
    *(undefined4 *)((int)this + 0x10) = 2;
    return 1;
  }
  if (*(int *)((int)this + 0xd8) != 0) {
    F_0050c620(*(int *)((int)this + 0xd8),0,0);
    *(undefined4 *)((int)this + 0xd8) = 0;
  }
  *(undefined4 *)((int)this + 0x10) = 5;
  return 1;
}

/* ref: FUN_005fd490 */
byte F_005fd490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fd490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  char * pcVar2;
  
  uVar1 = F_005d9890(*(undefined4 *)((int)this + 0xd8));
  if (uVar1 == 0) {
    *(undefined4 *)((int)this + 0x10) = 9;
    return 0;
  }
  pcVar2 = ((char *)GEN_TOP((*(int *)(uVar1 + 8) + uVar1)));
  (*(char * PTR32 *)(gen_frame + 0x1c)) = pcVar2;
  if ((char)param_1 != '\0') {
    F_005fd260(this,uVar1,1,0);
    if (*(*(char * PTR32 *)(gen_frame + 0x1c)) != '\0') {
      *(undefined4 *)((int)this + 0x10) = 3;
      return 1;
    }
    if ((*(char *)((int)this + 0x56) != '\0') && (*(int *)((int)this + 0x58) != 0)) {
      uVar1 = F_005e1540(CONCAT31((int3)((uint)((int)(uintptr_t)(*(char * PTR32 *)(gen_frame + 0x1c))) >> 8),*(char *)((int)this + 0x56)),0,
                           *(int *)((int)this + 0x58),uVar1);
      if (uVar1 != 0) {
        (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(uVar1 + 0xc);
        (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(uVar1 + 0x10);
        (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(uVar1 + 0x14);
        F_005f27c0(this,&(*(undefined4 *)(gen_frame + 0x0)));
      }
    }
    *(undefined4 *)((int)this + 0x10) = 4;
    return 1;
  }
  if (*pcVar2 != '\0') {
    F_005fce30(this);
    *(undefined4 *)((int)this + 0x10) = 5;
    return 1;
  }
  F_005fceb0(this,uVar1);
  if (*(int *)((int)this + 0xd8) != 0) {
    F_0050c620(*(int *)((int)this + 0xd8),0,0);
    *(undefined4 *)((int)this + 0xd8) = 0;
  }
  *(undefined4 *)((int)this + 0x10) = 5;
  return 1;
}

/* ref: FUN_005fd5d0 */
byte F_005fd5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fd5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  byte bVar2;
  int * piVar3;
  undefined * this_00;
  undefined * this_01;
  
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x10))) {
  case 1: ;
    piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0xd8) + 0x88)));
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3;
    UNLOCK();
    if (iVar1 != 2) {
      return 1;
    }
    if (*(char *)((int)this + 0x53) == '\0') {
      F_005fd420(this);
      return 0;
    }
    F_005fd490(this,1);
    return 0;
  case 2: ;
    bVar2 = F_005d9330(this);
    if (bVar2 != 0) {
      F_005fce30(this_00);
      return 0;
    }
    break;
  case 3: ;
    bVar2 = F_005d9330(this);
    if (bVar2 != 0) {
      F_005f7940(this_01);
      return 0;
    }
    break;
  case 4: ;
    if (*(char *)((int)this + 0x53) == '\0') {
      F_005fd490(this,0);
      return 0;
    }
    break;
  case 5: ;
    bVar2 = F_005ec820(this);
    if (bVar2 != 0) {
      F_005fa910(this);
      return 0;
    }
    break;
  case 6: ;
    bVar2 = F_005ec8a0(this);
    if ((bVar2 != 0) && (bVar2 = F_005d92a0(this), bVar2 != 0)) {
      piVar3 = (int *)(REFG(int, 0x1375aec) + 0xc70);
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3;
      UNLOCK();
      if (iVar1 == 0) {
        F_005f4930(this);
        goto switchD_005fd5e6_caseD_6;
      }
    }
    F_005ebe80(*(undefined * PTR32 *)((int)this + 0x44));
    F_004ff5f0(REFG(int, 0x1375aec));
  case 7: ;
switchD_005fd5e6_caseD_6: ;
    if ((*(char *)((int)this + 0x52) != '\0') &&
       (bVar2 = F_00550ff0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25e0)), bVar2 == 0)) {
      piVar3 = (int *)(REFG(int, 0x1375aec) + 0xc70);
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3;
      UNLOCK();
      if (iVar1 == 0) {
        F_005f2810(this);
        *(undefined1 *)(REFG(int, 0x1371280) + 0x4f) = 1;
        F_004ff5f0(REFG(int, 0x1375aec));
      }
    }
    F_005fcf20(this,param_1);
  }
  return 0;
}

/* ref: Client::LayoutEngine::LayoutManager::vf3 */
uint F_005fd760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fd760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_005fd5d0(this,param_1);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    F_005ec950(this);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x44) + 0xc))))(*(int * PTR32 *)(this + 0x44),param_1);
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
    if ((char)uVar2 != '\0') {
      F_005ecc00(this);
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,0);
    }
  }
  return uVar2;
}

/* ref: FUN_005fd7e0 */
uint F_005fd7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fd7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_005fd870 */
uint F_005fd870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fd870u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_005fd890 */
unsigned int F_005fd890(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x5fd890u, gen_a0, 0u, 0u, 0u);
  short * param_1 = (short *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *param_1 = (short)(int)param_2 >> ((byte)param_1[3] & 0x1f);
  param_1[1] = (short)(int)param_3 >> ((byte)param_1[3] & 0x1f);
  return 0;
}

/* ref: FUN_005fd8c0 */
unsigned int F_005fd8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fd8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  byte bVar2;
  
  fVar1 = param_1[2];
  bVar2 = (byte)*(undefined2 *)((int)this + 6);
  *(short *)this = (short)(int)*param_1 >> (bVar2 & 0x1f);
  *(short *)((int)this + 2) = (short)(int)fVar1 >> (bVar2 & 0x1f);
  return 0;
}

/* ref: FUN_005fd970 */
unsigned int F_005fd970(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5fd970u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  bool bVar1;
  
  bVar1 = GEN_ISNAN((float10)*(float *)(in_ecx + 0x24)) || GEN_ISNAN((float10)param_2);
  if (bVar1 == (bVar1 || (float10)*(float *)(in_ecx + 0x24) == (float10)param_2)) {
    *(float *)(in_ecx + 0x24) = param_2;
    *(undefined1 *)(in_ecx + 0x12) = 1;
  }
  return 0;
}

/* ref: FUN_005fd9a0 */
uint F_005fd9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fd9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined1 *)((int)this + 0x1c);
  return (int)this + 0x68;
}

/* ref: FUN_005fd9e0 */
uint F_005fd9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5fd9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_005fda50 */
byte F_005fda50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fda50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(byte *)((int)this + 0x56) = (byte)param_1;
  *(undefined4 *)((int)this + 0x58) = param_2;
  return (byte)param_1;
}

/* ref: FUN_005fdab0 */
uint F_005fdab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdab0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_005fdaf0 */
uint F_005fdaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_005fdb10 */
uint F_005fdb10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdb10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00509330((undefined *)((int)this + 0x14c),param_1);
  return uVar1;
}

/* ref: FUN_005fdb20 */
byte F_005fdb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00507740((undefined *)((int)this + 0x14c),param_1);
  return bVar1;
}

/* ref: FUN_005fdb30 */
uint F_005fdb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdb30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00507260((undefined *)((int)this + 0x14c),param_1);
  return uVar1;
}

/* ref: FUN_005fdb50 */
unsigned int F_005fdb50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fdb50u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(int *)(in_ecx + 0x20) = *(int *)(in_ecx + 0x20) + 1;
  if ((char)param_2 != '\0') {
    *(int *)(in_ecx + 0x24) = *(int *)(in_ecx + 0x24) + 1;
  }
  if ((char)param_3 != '\0') {
    *(int *)(in_ecx + 0x28) = *(int *)(in_ecx + 0x28) + 1;
  }
  return 0;
}

/* ref: FUN_005fdb80 */
unsigned int F_005fdb80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fdb80u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(int *)(in_ecx + 0x20) = *(int *)(in_ecx + 0x20) + -1;
  if ((char)param_2 != '\0') {
    *(int *)(in_ecx + 0x24) = *(int *)(in_ecx + 0x24) + -1;
  }
  if ((char)param_3 != '\0') {
    *(int *)(in_ecx + 0x28) = *(int *)(in_ecx + 0x28) + -1;
  }
  return 0;
}

/* ref: FUN_005fdba0 */
unsigned int F_005fdba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x5fdba0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined1 *)((int)this + 8) = (undefined1)param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined4 *)((int)this + 0x14) = param_6;
  *(undefined4 *)((int)this + 0x18) = param_7;
  *(undefined1 *)((int)this + 0x1c) = (undefined1)param_8;
  *(undefined1 *)((int)this + 0x1d) = (undefined1)param_9;
  *(undefined4 *)((int)this + 0x20) = param_10;
  return 0;
}

/* ref: FUN_005fdc10 */
uint F_005fdc10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdc10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1c) = param_2;
  return param_2;
}

/* ref: FUN_005fdc20 */
byte F_005fdc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdc20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (*(byte *)(in_ecx + 0x20) ^ (byte)param_2) & 1;
  *(byte *)(in_ecx + 0x20) = *(byte *)(in_ecx + 0x20) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005fdcb0 */
byte F_005fdcb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdcb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (*(byte *)(in_ecx + 0x28) ^ (byte)param_2) & 0xf;
  *(byte *)(in_ecx + 0x28) = *(byte *)(in_ecx + 0x28) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005fdd10 */
byte F_005fdd10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdd10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x02' ^ *(byte *)(in_ecx + 0x20)) & 2;
  *(byte *)(in_ecx + 0x20) = *(byte *)(in_ecx + 0x20) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005fdd40 */
byte F_005fdd40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdd40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x04' ^ *(byte *)(in_ecx + 0x20)) & 4;
  *(byte *)(in_ecx + 0x20) = *(byte *)(in_ecx + 0x20) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005fdd70 */
uint F_005fdd70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdd70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(uint *)(in_ecx + 0x24) ^ param_2) & 3;
  *(uint *)(in_ecx + 0x24) = *(uint *)(in_ecx + 0x24) ^ uVar1;
  return uVar1;
}

/* ref: FUN_005fdd90 */
byte F_005fdd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdd90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (*(byte *)(in_ecx + 0x2b) ^ (byte)param_2) & 1;
  *(byte *)(in_ecx + 0x2b) = *(byte *)(in_ecx + 0x2b) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005fddc0 */
byte F_005fddc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fddc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x02' ^ *(byte *)(in_ecx + 0x2b)) & 2;
  *(byte *)(in_ecx + 0x2b) = *(byte *)(in_ecx + 0x2b) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005fddf0 */
byte F_005fddf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fddf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x04' ^ *(byte *)(in_ecx + 0x2b)) & 4;
  *(byte *)(in_ecx + 0x2b) = *(byte *)(in_ecx + 0x2b) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005fde10 */
unsigned int F_005fde10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fde10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)REFG(double, 0x1088108);
  *param_1 = ((float)GEN_TOF((((float10)*(float *)this + (float10)*(float *)((int)this + 0xc)) * fVar1)));
  param_1[1] = ((float)GEN_TOF((((float10)*(float *)((int)this + 4) + (float10)*(float *)((int)this + 0x10))
                      * fVar1)));
  param_1[2] = ((float)GEN_TOF((((float10)*(float *)((int)this + 8) + (float10)*(float *)((int)this + 0x14))
                      * fVar1)));
  *param_2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xc) - (float10)*param_1)));
  param_2[1] = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x10) - (float10)param_1[1])));
  param_2[2] = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x14) - (float10)param_1[2])));
  return 0;
}

/* ref: FUN_005fde70 */
uint F_005fde70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fde70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x40) = param_2;
  return param_2;
}

/* ref: FUN_005fde90 */
unsigned int F_005fde90(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x5fde90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *(float *)(in_ecx + 0x58) = param_2;
  *(float *)(in_ecx + 0x5c) = param_3;
  *(float *)(in_ecx + 0x60) = param_4;
  *(float *)(in_ecx + 100) = param_5;
  return 0;
}

/* ref: FUN_005fdef0 */
uint F_005fdef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdef0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_005fdf10 */
uint F_005fdf10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdf10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_005fdf50 */
unsigned int F_005fdf50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5fdf50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x14) = param_2;
  return 0;
}

/* ref: FUN_005fdf80 */
uint F_005fdf80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdf80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xa4) = param_2;
  return param_2;
}

/* ref: FUN_005fdfd0 */
uint F_005fdfd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fdfd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = param_1 & 0x3fffffff | param_2 << 0x1e;
  *(uint *)this = uVar1;
  return uVar1;
}

/* ref: FUN_005fdff0 */
uint F_005fdff0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5fdff0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xc) = param_2;
  return in_ecx;
}

/* ref: FUN_005fe0a0 */
uint F_005fe0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe0a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(uint *)(in_ecx + 8) = (uint)(ushort)param_2;
  return (uint)(ushort)param_2;
}

/* ref: FUN_005fe0b0 */
ushort F_005fe0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe0b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x10) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_005fe0d0 */
byte F_005fe0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe0d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x02' ^ *(byte *)(in_ecx + 0x16)) & 2;
  *(byte *)(in_ecx + 0x16) = *(byte *)(in_ecx + 0x16) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005fe0f0 */
uint F_005fe0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe0f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x34) = param_2;
  return param_2;
}

/* ref: FUN_005fe130 */
uint F_005fe130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x38) = *param_1;
  *(undefined4 *)((int)this + 0x3c) = param_1[1];
  *(undefined4 *)((int)this + 0x40) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)((int)this + 0x44) = uVar1;
  return uVar1;
}

/* ref: FUN_005fe170 */
uint F_005fe170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe170u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(uint *)(in_ecx + 0x74) ^ param_2) & 0xf;
  *(uint *)(in_ecx + 0x74) = *(uint *)(in_ecx + 0x74) ^ uVar1;
  return uVar1;
}

/* ref: FUN_005fe1a0 */
uint F_005fe1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe1a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x60) = param_2;
  return param_2;
}

/* ref: FUN_005fe1b0 */
uint F_005fe1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe1b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x40) = param_2;
  return param_2;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf60 */
float F_005fe1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float fVar1;
  
  fVar1 = F_00a1e160(this + 0x3c,param_1);
  return fVar1;
}

/* ref: FUN_005fe260 */
unsigned int F_005fe260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe260u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return 0;
}

/* ref: FUN_005fe280 */
unsigned int F_005fe280(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5fe280u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_1 = (float)(fVar1 + (float10)*param_2);
  param_1[1] = (float)((float10)param_2[1] + fVar1);
  param_1[2] = (float)(fVar1 + (float10)param_2[2]);
  return 0;
}

/* ref: FUN_005fe2b0 */
unsigned int F_005fe2b0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5fe2b0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_1 = (float)((float10)*param_2 - fVar1);
  param_1[1] = (float)((float10)param_2[1] - fVar1);
  param_1[2] = (float)((float10)param_2[2] - fVar1);
  return 0;
}

/* ref: FUN_005fe2e0 */
unsigned int F_005fe2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe2e0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)*(float *)param_2;
  fVar1 = (float10)((float)GEN_TOF(((float10)*(float *)(param_2 + 8) * (float10)*(float *)(param_2 + 8) +
                          (fVar1 * fVar1 +
                          (float10)*(float *)(param_2 + 4) * (float10)*(float *)(param_2 + 4)))));
  if (fVar1 <= (float10)REFG(float, 0x10905c4)) {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    return 0;
  }
  fVar1 = (float10)(float)((float10)1 / (float10)((float)GEN_TOF(SQRT(fVar1))));
  *param_1 = (float)(fVar1 * (float10)*(float *)param_2);
  param_1[1] = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 4))));
  param_1[2] = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 8))));
  return 0;
}

/* ref: FUN_005fe370 */
unsigned int F_005fe370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fe370u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 - (float10)*param_3);
  param_1[1] = (float)((float10)param_2[1] - (float10)param_3[1]);
  param_1[2] = (float)((float10)param_2[2] - (float10)param_3[2]);
  return 0;
}

/* ref: FUN_005fe3a0 */
unsigned int F_005fe3a0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5fe3a0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_1 = (float)(fVar1 * (float10)*param_2);
  param_1[1] = (float)((float10)param_2[1] * fVar1);
  param_1[2] = (float)(fVar1 * (float10)param_2[2]);
  return 0;
}

/* ref: FUN_005fe3d0 */
uint F_005fe3d0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5fe3d0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar3 = (float10)param_3;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *param_1 = (float)(fVar3 + (float10)*param_2);
  param_1[1] = (float)((float10)fVar1 + fVar3);
  param_1[2] = (float)(fVar3 + (float10)fVar2);
  return (uint)param_1;
}

/* ref: FUN_005fe430 */
uint F_005fe430(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5fe430u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar3 = (float10)param_3;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *param_1 = (float)((float10)*param_2 - fVar3);
  param_1[1] = (float)((float10)fVar1 - fVar3);
  param_1[2] = (float)((float10)fVar2 - fVar3);
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf5 */
uint F_005fe490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe490u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf8 */
uint F_005fe4a0(void)
{
  GEN_ENTER(0x5fe4a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf10 */
byte F_005fe4b0(void)
{
  GEN_ENTER(0x5fe4b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf11 */
byte F_005fe4c0(void)
{
  GEN_ENTER(0x5fe4c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf12 */
byte F_005fe4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5fe4d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf21 */
uint F_005fe4e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5fe4e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this);
  return (uint)(uVar1 != 0);
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf29 */
byte F_005fe4f0(void)
{
  GEN_ENTER(0x5fe4f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf30 */
uint F_005fe500(void)
{
  GEN_ENTER(0x5fe500u, 0u, 0u, 0u, 0u);
  return 0x107fc63;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf37 */
byte F_005fe510(unsigned int gen_a0)
{
  GEN_ENTER(0x5fe510u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x2b) >> 5 & 1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf38 */
unsigned int F_005fe520(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5fe520u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  byte bVar1;
  
  bVar1 = *(byte *)((int)param_1 + 0x2b);
  if ((bVar1 & 2) != 0) {
    *(byte *)((int)param_1 + 0x2b) =
         (((!GEN_ISNAN(param_3) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
          (!(param_3 < *(float *)&REFG(undefined, 0x1088114)) && param_3 != *(float *)&REFG(undefined, 0x1088114))) << 5 ^ bVar1
         ) & 0x20 ^ bVar1;
    ((code *)*(gen_code32 *)(*param_1 + 0xd8))((undefined4)gen_fl2bits(param_3));
  }
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf39 */
unsigned int F_005fe560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fe560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf40 */
unsigned int F_005fe570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf41 */
unsigned int F_005fe580(void)
{
  GEN_ENTER(0x5fe580u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf42 */
unsigned int F_005fe590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf43 */
unsigned int F_005fe5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = REFG(undefined4, 0x1302e54);
  param_1[1] = REFG(undefined4, 0x1302e58);
  param_1[2] = REFG(undefined4, 0x1302e5c);
  param_1[3] = REFG(undefined4, 0x1302e60);
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf44 */
unsigned int F_005fe5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf45 */
unsigned int F_005fe5e0(void)
{
  GEN_ENTER(0x5fe5e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf46 */
unsigned int F_005fe5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf51 */
byte F_005fe600(unsigned int gen_a0)
{
  GEN_ENTER(0x5fe600u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x2b) >> 4 & 1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf52 */
byte F_005fe610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe610u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 << 4 ^ *(byte *)(in_ecx + 0x2b)) & 0x10;
  *(byte *)(in_ecx + 0x2b) = *(byte *)(in_ecx + 0x2b) ^ bVar1;
  return bVar1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf53 */
unsigned int F_005fe630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf55 */
byte F_005fe640(unsigned int gen_a0)
{
  GEN_ENTER(0x5fe640u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x2b) >> 3 & 1;
}

/* ref: FUN_005fe650 */
uint F_005fe650(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x5fe650u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float in_xmm2 = (float)gen_a2;
  float in_xmm3 = (float)gen_a3;
  float in_xmm7 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float10 fVar1;
  float10 fVar2;
  
  fVar2 = (float10)REFG(double, 0x1088108);
  *in_ecx = 0;
  fVar1 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)(float)((float10)param_6 * fVar2));
  in_ecx[1] = (undefined4)gen_fl2bits((float)fVar1);
  in_ecx[2] = 0;
  fVar2 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)(float)((float10)param_6 * fVar2));
  in_ecx[3] = (undefined4)gen_fl2bits((float)fVar2);
  return (uint)in_ecx;
}

/* ref: FUN_005fe6a0 */
uint F_005fe6a0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x5fe6a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float in_xmm2 = (float)gen_a2;
  float in_xmm3 = (float)gen_a3;
  float in_xmm7 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float10 fVar1;
  float10 fVar2;
  
  fVar2 = (float10)REFG(double, 0x1088108);
  *in_ecx = 0;
  in_ecx[1] = 0;
  fVar1 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)(float)((float10)param_6 * fVar2));
  in_ecx[2] = (undefined4)gen_fl2bits((float)fVar1);
  fVar2 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)(float)((float10)param_6 * fVar2));
  in_ecx[3] = (undefined4)gen_fl2bits((float)fVar2);
  return (uint)in_ecx;
}

/* ref: FUN_005fe6f0 */
uint F_005fe6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fe6f0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  F_004f6d80(param_1,param_2,param_3);
  return param_1;
}

/* ref: FUN_005fe710 */
unsigned int F_005fe710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe710u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1087f04);
  *in_ecx = GEN_FLT_TO(*in_ecx, REFG(float, 0x1087f04));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = uVar1;
  in_ecx[6] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = uVar1;
  in_ecx[0xc] = *param_2;
  in_ecx[0xd] = param_2[1];
  in_ecx[0xe] = param_2[2];
  return 0;
}

/* ref: FUN_005fe770 */
uint F_005fe770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe770u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(float *)param_2 =
       ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)param_1[2] * (float10)param_1[2] +
                                   ((float10)*param_1 * (float10)*param_1 +
                                   (float10)param_1[1] * (float10)param_1[1])))))));
  *(float *)(param_2 + 4) =
       ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)param_1[6] * (float10)param_1[6] +
                                   ((float10)param_1[4] * (float10)param_1[4] +
                                   (float10)param_1[5] * (float10)param_1[5])))))));
  *(float *)(param_2 + 8) =
       ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)param_1[10] * (float10)param_1[10] +
                                   ((float10)param_1[8] * (float10)param_1[8] +
                                   (float10)param_1[9] * (float10)param_1[9])))))));
  return param_2;
}

/* ref: FUN_005fe810 */
uint F_005fe810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe810u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  F_005fe2e0(param_1,param_2);
  F_005fe2e0(param_1 + 0x10,param_2 + 0x10);
  F_005fe2e0(param_1 + 0x20,param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  return param_1;
}

/* ref: FUN_005fe860 */
uint F_005fe860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe860u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  F_005fe2e0(param_1,param_2);
  F_005fe2e0(param_1 + 0x10,param_2 + 0x10);
  F_005fe2e0(param_1 + 0x20,param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  return param_1;
}

/* ref: FUN_005fe8b0 */
uint F_005fe8b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5fe8b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0046f390(this);
  F_0046f390((undefined *)((int)this + 0x10));
  F_0046f390((undefined *)((int)this + 0x20));
  return (uint)this;
}

/* ref: FUN_005fe8d0 */
uint F_005fe8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  undefined4 * puVar2;
  float10 fVar3;
  float10 fVar4;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  *(float *)this = param_1[0xc];
  *(float *)((int)this + 4) = param_1[0xd];
  *(float *)((int)this + 8) = param_1[0xe];
  puVar2 = (undefined4 *)F_005fe770(param_1,(uint)((undefined1 *)(gen_frame + 0x0)));
  *(undefined4 *)((int)this + 0x20) = *puVar2;
  *(undefined4 *)((int)this + 0x24) = puVar2[1];
  *(undefined4 *)((int)this + 0x28) = puVar2[2];
  fVar4 = (float10)1;
  fVar1 = ((float)GEN_TOF((fVar4 / (float10)*(float *)((int)this + 0x20))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  fVar3 = (float10)fVar1;
  (*(float *)(gen_frame + 0x20)) = (float)(fVar3 * (float10)*param_1);
  (*(float *)(gen_frame + 0x24)) = (float)((float10)param_1[1] * fVar3);
  (*(float *)(gen_frame + 0x28)) = (float)(fVar3 * (float10)param_1[2]);
  fVar1 = ((float)GEN_TOF((fVar4 / (float10)*(float *)((int)this + 0x24))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  fVar3 = (float10)fVar1;
  (*(float *)(gen_frame + 0x30)) = (float)(fVar3 * (float10)param_1[4]);
  (*(float *)(gen_frame + 0x34)) = (float)((float10)param_1[5] * fVar3);
  (*(float *)(gen_frame + 0x38)) = (float)(fVar3 * (float10)param_1[6]);
  fVar1 = ((float)GEN_TOF((fVar4 / (float10)*(float *)((int)this + 0x28))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  fVar4 = (float10)fVar1;
  (*(float *)(gen_frame + 0x40)) = (float)(fVar4 * (float10)param_1[8]);
  (*(float *)(gen_frame + 0x44)) = (float)((float10)param_1[9] * fVar4);
  (*(float *)(gen_frame + 0x48)) = (float)(fVar4 * (float10)param_1[10]);
  F_004eeed0((int)this + 0x10,(uint)&(*(float *)(gen_frame + 0x20)));
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70));
  return (uint)this;
}

/* ref: FUN_005fe9c0 */
uint F_005fe9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_005fe9e0 */
uint F_005fe9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe9e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x20) = *param_2;
  *(undefined4 *)(in_ecx + 0x24) = param_2[1];
  *(undefined4 *)(in_ecx + 0x28) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_005fea00 */
unsigned int F_005fea00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fea00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[4] = *param_3;
  in_ecx[5] = param_3[1];
  in_ecx[6] = param_3[2];
  return 0;
}

/* ref: FUN_005fea30 */
unsigned int F_005fea30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fea30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[4] = *param_3;
  in_ecx[5] = param_3[1];
  in_ecx[6] = param_3[2];
  return 0;
}

/* ref: FUN_005fea60 */
uint F_005fea60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fea60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_005fea80 */
uint F_005fea80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fea80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x10) = *param_2;
  *(undefined4 *)(in_ecx + 0x14) = param_2[1];
  *(undefined4 *)(in_ecx + 0x18) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_005feaa0 */
unsigned int F_005feaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5feaa0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  
  fVar1 = in_ecx[5];
  fVar2 = in_ecx[1];
  fVar3 = in_ecx[6];
  fVar4 = in_ecx[2];
  fVar5 = (float10)REFG(double, 0x1088108);
  *param_2 = ((float)GEN_TOF(((float10)(float)((float10)in_ecx[4] + (float10)*in_ecx) * fVar5)));
  param_2[1] = ((float)GEN_TOF(((float10)(float)((float10)fVar1 + (float10)fVar2) * fVar5)));
  param_2[2] = ((float)GEN_TOF((fVar5 * (float10)(float)((float10)fVar3 + (float10)fVar4))));
  return 0;
}

/* ref: FUN_005feb80 */
uint F_005feb80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5feb80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float * pfVar1;
  
  pfVar1 = (float *)F_005fe770(param_1,(uint)((undefined1 *)(gen_frame + 0x0)));
  *(float *)((int)this + 0x40) = (float)((float10)*pfVar1 * (float10)*param_2);
  *(float *)((int)this + 0x44) = (float)((float10)pfVar1[1] * (float10)param_2[1]);
  *(float *)((int)this + 0x48) = (float)((float10)pfVar1[2] * (float10)param_2[2]);
  F_005fe2e0(this,param_1);
  F_005fe2e0((int)this + 0x10,param_1 + 0x10);
  F_005fe2e0((int)this + 0x20,param_1 + 0x20);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return (uint)this;
}

/* ref: FUN_005fec10 */
uint F_005fec10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fec10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float * pfVar8;
  float10 fVar9;
  
  uVar7 = REFG(float, 0x1087f04);
  fVar1 = *param_2;
  fVar2 = param_2[4];
  (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar1 + (float10)fVar2);
  fVar3 = param_2[5];
  fVar4 = param_2[1];
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar3 + (float10)fVar4);
  fVar5 = param_2[2];
  fVar6 = param_2[6];
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar5 + (float10)fVar6);
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  fVar9 = (float10)REFG(double, 0x1088108);
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)this = uVar7;
  *(undefined4 *)((int)this + 0x14) = uVar7;
  *(undefined4 *)((int)this + 0x28) = uVar7;
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)fVar1 + (float10)fVar2) * fVar9)));
  (*(float *)(gen_frame + 0x0)) = fVar1;
  *(float *)((int)this + 0x30) = fVar1;
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)fVar3 + (float10)fVar4) * fVar9)));
  (*(float *)(gen_frame + 0x4)) = fVar1;
  *(float *)((int)this + 0x34) = fVar1;
  fVar1 = ((float)GEN_TOF((fVar9 * (float10)(float)((float10)fVar5 + (float10)fVar6))));
  (*(float *)(gen_frame + 0x8)) = fVar1;
  *(float *)((int)this + 0x38) = fVar1;
  F_004ef9d0(this,param_1);
  (*(float *)(gen_frame + 0x0)) = (float)((float10)param_2[4] - (float10)*param_2);
  (*(float *)(gen_frame + 0x4)) = (float)((float10)param_2[5] - (float10)param_2[1]);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)param_2[6] - (float10)param_2[2]);
  fVar9 = (float10)REFG(double, 0x1088108);
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)(float)((float10)param_2[4] - (float10)*param_2) * fVar9)));
  (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)(float)((float10)param_2[5] - (float10)param_2[1]) * fVar9)));
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF((fVar9 * (float10)(float)((float10)param_2[6] - (float10)param_2[2]))));
  pfVar8 = (float *)F_005fe770(this,(uint)&(*(float *)(gen_frame + 0x0)));
  *(float *)((int)this + 0x40) = (float)((float10)(*(float *)(gen_frame + 0x10)) * (float10)*pfVar8);
  *(float *)((int)this + 0x44) = (float)((float10)pfVar8[1] * (float10)(*(float *)(gen_frame + 0x14)));
  *(float *)((int)this + 0x48) = (float)((float10)pfVar8[2] * (float10)(*(float *)(gen_frame + 0x18)));
  F_0046f390(this);
  F_0046f390((undefined *)((int)this + 0x10));
  F_0046f390((undefined *)((int)this + 0x20));
  return (uint)this;
}

/* ref: FUN_005fed50 */
undefined * F_005fed50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fed50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float * pfVar1;
  
  pfVar1 = (float *)F_005fe770(param_1,(uint)((undefined1 *)(gen_frame + 0x0)));
  *(float *)((int)this + 0x40) = (float)((float10)*pfVar1 * (float10)*param_2);
  *(float *)((int)this + 0x44) = (float)((float10)pfVar1[1] * (float10)param_2[1]);
  *(float *)((int)this + 0x48) = (float)((float10)pfVar1[2] * (float10)param_2[2]);
  F_005fe2e0(this,param_1);
  F_005fe2e0((int)this + 0x10,param_1 + 0x10);
  F_005fe2e0((int)this + 0x20,param_1 + 0x20);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return this;
}

/* ref: FUN_005fede0 */
uint F_005fede0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fede0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float * pfVar8;
  float10 fVar9;
  
  uVar7 = REFG(float, 0x1087f04);
  fVar1 = *param_2;
  fVar2 = param_2[4];
  (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar1 + (float10)fVar2);
  fVar3 = param_2[5];
  fVar4 = param_2[1];
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar3 + (float10)fVar4);
  fVar5 = param_2[2];
  fVar6 = param_2[6];
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar5 + (float10)fVar6);
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  fVar9 = (float10)REFG(double, 0x1088108);
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)this = uVar7;
  *(undefined4 *)((int)this + 0x14) = uVar7;
  *(undefined4 *)((int)this + 0x28) = uVar7;
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)fVar1 + (float10)fVar2) * fVar9)));
  (*(float *)(gen_frame + 0x0)) = fVar1;
  *(float *)((int)this + 0x30) = fVar1;
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)fVar3 + (float10)fVar4) * fVar9)));
  (*(float *)(gen_frame + 0x4)) = fVar1;
  *(float *)((int)this + 0x34) = fVar1;
  fVar1 = ((float)GEN_TOF((fVar9 * (float10)(float)((float10)fVar5 + (float10)fVar6))));
  (*(float *)(gen_frame + 0x8)) = fVar1;
  *(float *)((int)this + 0x38) = fVar1;
  F_004ef9d0(this,param_1);
  (*(float *)(gen_frame + 0x0)) = (float)((float10)param_2[4] - (float10)*param_2);
  (*(float *)(gen_frame + 0x4)) = (float)((float10)param_2[5] - (float10)param_2[1]);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)param_2[6] - (float10)param_2[2]);
  fVar9 = (float10)REFG(double, 0x1088108);
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)(float)((float10)param_2[4] - (float10)*param_2) * fVar9)));
  (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)(float)((float10)param_2[5] - (float10)param_2[1]) * fVar9)));
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF((fVar9 * (float10)(float)((float10)param_2[6] - (float10)param_2[2]))));
  pfVar8 = (float *)F_005fe770(this,(uint)&(*(float *)(gen_frame + 0x0)));
  *(float *)((int)this + 0x40) = (float)((float10)(*(float *)(gen_frame + 0x10)) * (float10)*pfVar8);
  *(float *)((int)this + 0x44) = (float)((float10)pfVar8[1] * (float10)(*(float *)(gen_frame + 0x14)));
  *(float *)((int)this + 0x48) = (float)((float10)pfVar8[2] * (float10)(*(float *)(gen_frame + 0x18)));
  F_0046f390(this);
  F_0046f390((undefined *)((int)this + 0x10));
  F_0046f390((undefined *)((int)this + 0x20));
  return (uint)this;
}

/* ref: FUN_005fef20 */
uint F_005fef20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fef20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x30) = *param_2;
  *(undefined4 *)(in_ecx + 0x34) = param_2[1];
  *(undefined4 *)(in_ecx + 0x38) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_005ff040 */
unsigned int F_005ff040(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5ff040u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 uVar1;
  
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  uVar1 = param_2[2];
  in_ecx[3] = (undefined4)gen_fl2bits(param_3);
  in_ecx[2] = uVar1;
  return 0;
}

/* ref: FUN_005ff0f0 */
undefined * F_005ff0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ff0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  fVar1 = (float)((float10)*param_1 - (float10)*(float *)this);
  fVar2 = ((float)GEN_TOF(((float10)param_1[1] - (float10)*(float *)((int)this + 4))));
  fVar3 = ((float)GEN_TOF(((float10)param_1[2] - (float10)*(float *)((int)this + 8))));
  fVar6 = (float10)fVar2;
  fVar7 = (float10)fVar1;
  fVar8 = (float10)fVar3;
  fVar9 = (float10)param_1[3];
  fVar10 = (float10)((float)GEN_TOF((fVar9 - (float10)*(float *)((int)this + 0xc))));
  fVar6 = (float10)((float)GEN_TOF((fVar8 * fVar8 + (fVar7 * fVar7 + fVar6 * fVar6))));
  if (fVar6 <= fVar10 * fVar10) {
    if ((float10)*(float *)((int)this + 0xc) < fVar9) {
      *(float *)this = *param_1;
      *(float *)((int)this + 4) = param_1[1];
      *(float *)((int)this + 8) = param_1[2];
      *(float *)((int)this + 0xc) = param_1[3];
      return this;
    }
  }
  else {
    fVar4 = *(float *)((int)this + 0xc);
    fVar6 = (float10)((float)GEN_TOF(SQRT(fVar6)));
    fVar5 = ((float)GEN_TOF((((float10)param_1[3] + (fVar6 + (float10)fVar4)) * (float10)REFG(double, 0x1088108))));
    *(float *)((int)this + 0xc) = fVar5;
    if ((float10)REFG(float, 0x10905c4) < fVar6) {
      fVar6 = (float10)((float)GEN_TOF((((float10)fVar5 - (float10)fVar4) / fVar6)));
      *(float *)this = ((float)GEN_TOF(((float10)*(float *)this + (float10)(float)(fVar6 * (float10)fVar1))));
      *(float *)((int)this + 4) =
           ((float)GEN_TOF(((float10)*(float *)((int)this + 4) + (float10)(float)((float10)fVar2 * fVar6))));
      *(float *)((int)this + 8) =
           ((float)GEN_TOF(((float10)*(float *)((int)this + 8) + (float10)(float)(fVar6 * (float10)fVar3))));
      return this;
    }
  }
  return this;
}

/* ref: FUN_005ff260 */
unsigned int F_005ff260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x5ff260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = (undefined4)gen_fl2bits(param_4);
  in_ecx[4] = *param_3;
  in_ecx[5] = param_3[1];
  in_ecx[6] = param_3[2];
  return 0;
}

/* ref: FUN_005ff410 */
uint F_005ff410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ff410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  float fVar1;
  float fVar2;
  uint uVar3;
  uint3 uVar4;
  uint uVar5;
  float * pfVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  F_004f45d0(((undefined1 *)(gen_frame + 0x40)),param_1);
  F_004ee970(((float *)(gen_frame + 0x10)),this,((undefined1 *)(gen_frame + 0x40)));
  uVar3 = F_004ee9d0(((float *)(gen_frame + 0x0)),(int)this + 0x10,((undefined1 *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x30)) = 0.0;
  fVar7 = (float10)0.0;
  (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1090998);
  fVar8 = (float10)REFG(float, 0x1090998);
  pfVar6 = (float *)(param_1 + 0x40);
  uVar5 = 0;
  do {
    (*(float *)(gen_frame + 0x3c)) = *(float *)((int)((float *)(gen_frame + 0x0)) + uVar5);
    fVar9 = (float10)*(float *)((int)((float *)(gen_frame + 0x0)) + uVar5);
    fVar1 = ((float)GEN_TOF(ABS(fVar9)));
    (*(float *)(gen_frame + 0x3c)) = fVar1;
    uVar4 = (uint3)(uVar3 >> 8);
    if ((float10)fVar1 <= (float10)REFG(float, 0x10905c4)) {
      (*(float *)(gen_frame + 0x3c)) = *(float *)((int)((float *)(gen_frame + 0x10)) + uVar5);
      (*(float *)(gen_frame + 0x38)) = *pfVar6;
      fVar9 = (float10)*(float *)((int)((float *)(gen_frame + 0x10)) + uVar5);
      fVar10 = (float10)*pfVar6;
      fVar11 = -fVar10;
      if (((!GEN_ISNAN(fVar11) && !GEN_ISNAN(fVar9)) && !(fVar11 <= fVar9)) || (fVar10 < fVar9)) {
        uVar3 = (uint)uVar4 << 8;
        goto LAB_005ff585;
      }
    }
    else {
      fVar1 = (float)((float10)1 / fVar9);
      (*(float *)(gen_frame + 0x2c)) = fVar1;
      (*(float *)(gen_frame + 0x38)) = *pfVar6;
      (*(float *)(gen_frame + 0x3c)) = *(float *)((int)((float *)(gen_frame + 0x10)) + uVar5);
      fVar9 = (float10)*pfVar6;
      fVar10 = (float10)*(float *)((int)((float *)(gen_frame + 0x10)) + uVar5);
      fVar11 = (float10)fVar1;
      fVar1 = ((float)GEN_TOF((fVar11 * (-fVar9 - fVar10))));
      (*(float *)(gen_frame + 0x38)) = fVar1;
      fVar2 = ((float)GEN_TOF((fVar11 * (fVar9 - fVar10))));
      (*(float *)(gen_frame + 0x3c)) = fVar2;
      if ((float10)fVar2 < (float10)fVar1) {
        (*(float *)(gen_frame + 0x3c)) = fVar1;
        (*(float *)(gen_frame + 0x38)) = fVar2;
      }
      if (fVar7 < (float10)(*(float *)(gen_frame + 0x38))) {
        (*(float *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x38));
        fVar7 = (float10)(*(float *)(gen_frame + 0x38));
      }
      if ((float10)(*(float *)(gen_frame + 0x3c)) < fVar8) {
        (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x3c));
        fVar8 = (float10)(*(float *)(gen_frame + 0x3c));
      }
      if ((!GEN_ISNAN(fVar7) && !GEN_ISNAN(fVar8)) && !(fVar7 <= fVar8)) {
        uVar3 = (uint)uVar4 << 8;
        goto LAB_005ff585;
      }
    }
    uVar5 = uVar5 + 4;
    pfVar6 = pfVar6 + 1;
    if (0xb < uVar5) {
      uVar3 = CONCAT31(uVar4,1);
LAB_005ff585: ;
      F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90));
      return uVar3;
    }
  } while( true );
}

/* ref: FUN_005ff5c0 */
uint F_005ff5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ff5c0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar2 = (float10)(float)((float10)in_ecx[1] - (float10)param_2[1]);
  fVar3 = (float10)(float)((float10)*in_ecx - (float10)*param_2);
  fVar4 = (float10)(float)((float10)in_ecx[2] - (float10)param_2[2]);
  fVar1 = ((float)GEN_TOF(((fVar2 * (float10)in_ecx[5] + fVar3 * (float10)in_ecx[4]) +
                 fVar4 * (float10)in_ecx[6])));
  fVar2 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar4 * fVar4 + (fVar3 * fVar3 + fVar2 * fVar2)))) -
                          (float10)param_2[3] * (float10)param_2[3])));
  if (((float10)0 < fVar2) &&
     ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar1 <= *(float *)&REFG(undefined, 0x1088114)))) {
    return (uint)param_2 & 0xffffff00;
  }
  if ((float10)0 <= (float10)fVar1 * (float10)fVar1 - fVar2) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005ff690 */
byte F_005ff690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ff690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
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
  float10 fVar13;
  
  fVar9 = (float10)*(double *)&REFG(undefined, 0x10a2b98);
  fVar10 = (float10)*(float *)this;
  fVar11 = (float10)*(float *)((int)this + 4);
  fVar12 = (float10)*(float *)((int)this + 8);
  fVar1 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar10 + (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x10) *
                                                            fVar9)))))) - fVar10)));
  fVar2 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar11 + (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x14) *
                                                            fVar9)))))) - fVar11)));
  fVar3 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar12 + (float10)((float)GEN_TOF((fVar9 * (float10)*(float *)((int)this +
                                                                                        0x18))))))) -
                 fVar12)));
  fVar4 = (float)((float10)param_1[6] - (float10)param_1[2]);
  fVar9 = (float10)(float)(fVar11 - (float10)param_1[1]);
  fVar11 = (float10)(float)((float10)param_1[5] - (float10)param_1[1]);
  fVar10 = (float10)(float)(fVar10 - (float10)*param_1);
  fVar13 = (float10)(float)((float10)param_1[4] - (float10)*param_1);
  fVar12 = (float10)(float)(fVar12 - (float10)param_1[2]);
  fVar5 = ((float)GEN_TOF((fVar12 * (float10)fVar4 + (fVar11 * fVar9 + fVar13 * fVar10))));
  fVar6 = ((float)GEN_TOF(((float10)fVar4 * (float10)fVar3 +
                 (fVar13 * (float10)fVar1 + fVar11 * (float10)fVar2))));
  fVar4 = ((float)GEN_TOF(((fVar13 * fVar13 + fVar11 * fVar11) + (float10)fVar4 * (float10)fVar4)));
  fVar11 = (float10)fVar2;
  fVar2 = ((float)GEN_TOF(((float10)fVar3 * (float10)fVar3 +
                 ((float10)fVar1 * (float10)fVar1 + fVar11 * fVar11))));
  fVar1 = ((float)GEN_TOF((fVar12 * (float10)fVar3 + (fVar10 * (float10)fVar1 + fVar11 * fVar9))));
  fVar11 = (float10)fVar6;
  fVar13 = (float10)fVar4;
  fVar3 = (float)(fVar13 * (float10)fVar2 - fVar11 * fVar11);
  fVar7 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((fVar10 * fVar10 + fVar9 * fVar9) + fVar12 * fVar12))) -
                 (float10)(float)((float10)param_1[3] * (float10)param_1[3]))));
  fVar9 = (float10)fVar5;
  fVar8 = (float)((float10)fVar7 * fVar13 - fVar9 * fVar9);
  if (((!(fVar5 < 0.0)) || (!(fVar11 + fVar9 < (float10)0))) &&
     ((!(fVar13 < fVar9) || (!(fVar13 < fVar11 + fVar9))))) {
    fVar10 = (float10)fVar3;
    if ((double)((float)GEN_TOF(ABS(fVar10))) < *(double *)&REFG(undefined, 0x109ce00)) {
      if (!GEN_ISNAN(fVar8) && !(0.0 <= fVar8)) {
        return 1;
      }
    }
    else {
      fVar9 = (float10)(float)((float10)fVar1 * fVar13 - fVar11 * fVar9);
      fVar10 = (float10)(float)(fVar9 * fVar9 - (float10)fVar8 * fVar10);
      if ((!GEN_ISNAN((float10)0) && !GEN_ISNAN(fVar10)) && !((float10)0 <= fVar10)) {
        return 0;
      }
      fVar3 = ((float)GEN_TOF((((float10)((float)GEN_TOF(-fVar9)) - (float10)((float)GEN_TOF(SQRT(fVar10)))) / (float10)fVar3)));
      fVar9 = (float10)fVar3;
      if ((!(fVar9 < (float10)0)) && (!(REFG(float, 0x1087f04) < fVar3))) {
        fVar10 = (float10)fVar6;
        fVar11 = (float10)fVar5;
        fVar12 = fVar11 + fVar10 * fVar9;
        fVar9 = (float10)0;
        if (fVar12 < fVar9) {
          if (((!GEN_ISNAN(fVar6) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar6 <= *(float *)&REFG(undefined, 0x1088114))
              ) && ((((float10)fVar1 + (float10)fVar1) +
                    (float10)(float)(-fVar11 / fVar10) * (float10)fVar2) *
                    (float10)(float)(-fVar11 / fVar10) + (float10)fVar7 <= fVar9)) {
            return 1;
          }
        }
        else {
          fVar13 = (float10)fVar4;
          if (!(fVar13 < fVar12)) {
            return 1;
          }
          if (!(fVar6 < 0.0)) {
            return 0;
          }
          fVar12 = (float10)((float)GEN_TOF(((fVar13 - fVar11) / fVar10)));
          if ((((float10)fVar7 + fVar13) - (float10)*(double *)&REFG(undefined, 0x1092098) * fVar11) +
              fVar12 * (fVar12 * (float10)fVar2 +
                       ((float10)fVar1 - fVar10) * (float10)*(double *)&REFG(undefined, 0x1092098)) <= fVar9) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_005ffa50 */
unsigned int F_005ffa50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ffa50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return 0;
}

/* ref: FUN_005ffa80 */
uint F_005ffa80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ffa80u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *param_1 = ((float)GEN_TOF(SQRT((float10)*(float *)param_2)));
  param_1[1] = ((float)GEN_TOF(SQRT((float10)*(float *)(param_2 + 4))));
  param_1[2] = ((float)GEN_TOF(SQRT((float10)*(float *)(param_2 + 8))));
  param_1[3] = *(float *)(param_2 + 0xc);
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Group::SGActionController::vf4 */
byte F_005ffb10(void)
{
  GEN_ENTER(0x5ffb10u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Group::SGActionController::vf5 */
byte F_005ffb20(void)
{
  GEN_ENTER(0x5ffb20u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Group::SGActionController::vf6 */
byte F_005ffb30(void)
{
  GEN_ENTER(0x5ffb30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Group::SGActionController::vf7 */
byte F_005ffb40(void)
{
  GEN_ENTER(0x5ffb40u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Group::SGRotationActionController::vf3 */
uint F_005ffb50(void)
{
  GEN_ENTER(0x5ffb50u, 0u, 0u, 0u, 0u);
  return 0x80;
}

/* ref: Client::LayoutEngine::Group::SGRotationActionController::vf5 */
byte F_005ffb60(void)
{
  GEN_ENTER(0x5ffb60u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Group::SGRandomActionController::vf3 */
uint F_005ffb70(void)
{
  GEN_ENTER(0x5ffb70u, 0u, 0u, 0u, 0u);
  return 0x78;
}

/* ref: Client::LayoutEngine::Group::SGRandomActionController::vf6 */
byte F_005ffb80(void)
{
  GEN_ENTER(0x5ffb80u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Layer::EnvSpaceLayoutInstance::vf6 */
uint F_005ffb90(void)
{
  GEN_ENTER(0x5ffb90u, 0u, 0u, 0u, 0u);
  return 0x38;
}

/* ref: Client::LayoutEngine::Layer::EnvSpaceLayoutInstance::vf24 */
uint F_005ffba0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ffba0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: Client::LayoutEngine::Layer::EnvSpaceLayoutInstance::vf23 */
uint F_005ffbb0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ffbb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: Client::LayoutEngine::Layer::EnvLocationLayoutInstance::vf6 */
uint F_005ffbc0(void)
{
  GEN_ENTER(0x5ffbc0u, 0u, 0u, 0u, 0u);
  return 0x38;
}

/* ref: Client::LayoutEngine::Layer::EnvLocationLayoutInstance::vf24 */
uint F_005ffbd0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ffbd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: Client::LayoutEngine::Layer::EnvLocationLayoutInstance::vf23 */
uint F_005ffbe0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ffbe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: Client::LayoutEngine::Layer::LightLayoutInstance::vf6 */
uint F_005ffbf0(void)
{
  GEN_ENTER(0x5ffbf0u, 0u, 0u, 0u, 0u);
  return 0x48;
}

/* ref: Client::LayoutEngine::Layer::LightLayoutInstance::vf24 */
uint F_005ffc00(unsigned int gen_a0)
{
  GEN_ENTER(0x5ffc00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: Client::LayoutEngine::Layer::LightLayoutInstance::vf23 */
uint F_005ffc10(unsigned int gen_a0)
{
  GEN_ENTER(0x5ffc10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: Client::LayoutEngine::Layer::LightLayoutInstance::vf43 */
unsigned int F_005ffc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ffc20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)(this + 0x38);
  param_1[1] = *(undefined4 *)(this + 0x3c);
  param_1[2] = *(undefined4 *)(this + 0x40);
  param_1[3] = *(undefined4 *)(this + 0x44);
  return 0;
}

/* ref: FUN_005ffc50 */
unsigned int F_005ffc50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ffc50u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *param_1 = (float)((float10)*param_2 * (float10)*param_2);
  param_1[1] = (float)((float10)param_2[1] * (float10)param_2[1]);
  param_1[2] = (float)((float10)param_2[2] * (float10)param_2[2]);
  param_1[3] = param_2[3];
  return 0;
}

/* ref: FUN_005ffc80 */
uint F_005ffc80(void)
{
  GEN_ENTER(0x5ffc80u, 0u, 0u, 0u, 0u);
  return 0x38;
}

/* ref: FUN_005ffc90 */
uint F_005ffc90(unsigned int gen_a0)
{
  GEN_ENTER(0x5ffc90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: FUN_005ffca0 */
uint F_005ffca0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ffca0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: Client::LayoutEngine::Layer::WeaponLayoutInstance::vf6 */
uint F_005ffcb0(void)
{
  GEN_ENTER(0x5ffcb0u, 0u, 0u, 0u, 0u);
  return 0x38;
}

/* ref: Client::LayoutEngine::Layer::WeaponLayoutInstance::vf24 */
uint F_005ffcc0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ffcc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: Client::LayoutEngine::Layer::WeaponLayoutInstance::vf23 */
uint F_005ffcd0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ffcd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: FUN_005ffce0 */
unsigned int F_005ffce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ffce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_1;
  puVar3 = this;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined4 *)((int)this + 0x44) = param_1[0x11];
  *(undefined4 *)((int)this + 0x48) = param_1[0x12];
  return 0;
}

/* ref: FUN_005ffd20 */
uint F_005ffd20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ffd20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005ffd50 */
byte F_005ffd50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ffd50u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx != param_2;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf21 */
byte F_005ffd80(void)
{
  GEN_ENTER(0x5ffd80u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf22 */
byte F_005ffd90(void)
{
  GEN_ENTER(0x5ffd90u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf24 */
uint F_005ffda0(void)
{
  GEN_ENTER(0x5ffda0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf23 */
uint F_005ffdb0(void)
{
  GEN_ENTER(0x5ffdb0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf25 */
unsigned int F_005ffdc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5ffdc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf63 */
uint F_005ffdd0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ffdd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x30;
}

/* ref: Client::LayoutEngine::Layer::LineVfxLayoutInstance::vf6 */
uint F_005ffde0(void)
{
  GEN_ENTER(0x5ffde0u, 0u, 0u, 0u, 0u);
  return 0x90;
}

/* ref: Client::LayoutEngine::Layer::LineVfxLayoutInstance::vf15 */
uint F_005ffdf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ffdf0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf21 */
byte F_005ffe20(void)
{
  GEN_ENTER(0x5ffe20u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf22 */
byte F_005ffe30(void)
{
  GEN_ENTER(0x5ffe30u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf24 */
uint F_005ffe40(void)
{
  GEN_ENTER(0x5ffe40u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf23 */
uint F_005ffe50(void)
{
  GEN_ENTER(0x5ffe50u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf25 */
unsigned int F_005ffe60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5ffe60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf68 */
unsigned int F_005ffe70(void)
{
  GEN_ENTER(0x5ffe70u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf57 */
uint F_005ffe80(unsigned int gen_a0)
{
  GEN_ENTER(0x5ffe80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)&REFG(undefined, 0x1379d00) = *(undefined4 *)(in_ecx + 0x30);
  *(undefined4 *)&REFG(undefined, 0x1379d04) = *(undefined4 *)(in_ecx + 0x34);
  *(undefined4 *)&REFG(undefined, 0x1379d08) = *(undefined4 *)(in_ecx + 0x38);
  return 0x1379d00;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf59 */
uint F_005ffeb0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x5ffeb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float in_xmm2 = (float)gen_a2;
  float in_xmm3 = (float)gen_a3;
  float in_xmm7 = (float)gen_a4;
  F_00a1e180(in_xmm1,in_xmm2,in_xmm3,in_xmm7,0x1379d10,*(float *)(in_ecx + 0x3c));
  return 0x1379d10;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf62 */
unsigned int F_005fff00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fff00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::PositionMarkerLayoutInstance::vf6 */
uint F_005fff10(void)
{
  GEN_ENTER(0x5fff10u, 0u, 0u, 0u, 0u);
  return 0x60;
}

/* ref: Client::LayoutEngine::Layer::PositionMarkerLayoutInstance::vf68 */
unsigned int F_005fff20(void)
{
  GEN_ENTER(0x5fff20u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::QuestMarkerLayoutInstance::vf6 */
uint F_005fff30(void)
{
  GEN_ENTER(0x5fff30u, 0u, 0u, 0u, 0u);
  return 0x60;
}

/* ref: Client::LayoutEngine::Layer::TargetMarkerLayoutInstance::vf6 */
uint F_005fff40(void)
{
  GEN_ENTER(0x5fff40u, 0u, 0u, 0u, 0u);
  return 0x60;
}

/* ref: Client::LayoutEngine::Layer::TargetMarkerLayoutInstance::vf68 */
unsigned int F_005fff50(void)
{
  GEN_ENTER(0x5fff50u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf6 */
uint F_005fff60(void)
{
  GEN_ENTER(0x5fff60u, 0u, 0u, 0u, 0u);
  return 0x60;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf15 */
uint F_005fff70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fff70u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf68 */
unsigned int F_005fffa0(void)
{
  GEN_ENTER(0x5fffa0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf24 */
uint F_005fffb0(void)
{
  GEN_ENTER(0x5fffb0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf23 */
uint F_005fffc0(void)
{
  GEN_ENTER(0x5fffc0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf68 */
byte F_005fffd0(unsigned int gen_a0)
{
  GEN_ENTER(0x5fffd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 100);
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf21 */
byte F_005fffe0(void)
{
  GEN_ENTER(0x5fffe0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf22 */
byte F_005ffff0(void)
{
  GEN_ENTER(0x5ffff0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf24 */
uint F_00600000(void)
{
  GEN_ENTER(0x600000u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf23 */
uint F_00600010(void)
{
  GEN_ENTER(0x600010u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf25 */
unsigned int F_00600020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x600020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf63 */
uint F_00600030(unsigned int gen_a0)
{
  GEN_ENTER(0x600030u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x30;
}

/* ref: FUN_00600090 */
unsigned int F_00600090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600090u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  return 0;
}

/* ref: FUN_006000f0 */
byte F_006000f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6000f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00600110 */
byte F_00600110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00600140 */
uint F_00600140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600140u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00600150 */
uint F_00600150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600150u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00600180 */
uint F_00600180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600180u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00600190 */
uint F_00600190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600190u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_006001c0 */
uint F_006001c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6001c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_006001d0 */
uint F_006001d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6001d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_006001e0 */
uint F_006001e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6001e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00600250 */
unsigned int F_00600250(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x600250u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x20) = param_2;
  return 0;
}

/* ref: FUN_00600280 */
unsigned int F_00600280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600280u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  return 0;
}

/* ref: FUN_006002b0 */
ushort F_006002b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6002b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 10) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_006002d0 */
uint F_006002d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6002d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_006002f0 */
uint F_006002f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6002f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00600320 */
uint F_00600320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600320u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00600330 */
uint F_00600330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600330u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00600340 */
byte F_00600340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00600360 */
byte F_00600360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00600380 */
byte F_00600380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_006003a0 */
byte F_006003a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6003a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_006003c0 */
byte F_006003c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6003c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_006003e0 */
byte F_006003e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6003e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00600410 */
uint F_00600410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600410u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00600420 */
byte F_00600420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00600440 */
byte F_00600440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00600460 */
byte F_00600460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00600480 */
byte F_00600480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_006004b0 */
uint F_006004b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6004b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (param_2 & 0xff ^ *(uint *)(in_ecx + 0x30)) & 1;
  *(uint *)(in_ecx + 0x30) = *(uint *)(in_ecx + 0x30) ^ uVar1;
  return uVar1;
}

/* ref: FUN_006004d0 */
byte F_006004d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6004d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_006004f0 */
byte F_006004f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6004f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00600510 */
byte F_00600510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00600530 */
byte F_00600530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00600550 */
byte F_00600550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00600570 */
byte F_00600570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00600590 */
byte F_00600590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_006005b0 */
byte F_006005b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6005b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_006005d0 */
byte F_006005d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6005d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_006005f0 */
byte F_006005f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6005f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00600610 */
byte F_00600610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00600630 */
byte F_00600630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00600650 */
byte F_00600650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00600670 */
byte F_00600670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00600690 */
byte F_00600690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_006006b0 */
byte F_006006b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6006b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_006006d0 */
uint F_006006d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6006d0u, gen_a0, gen_a1, 0u, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_006006f0 */
uint F_006006f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6006f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x20;
}

/* ref: FUN_00600700 */
uint F_00600700(unsigned int gen_a0)
{
  GEN_ENTER(0x600700u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x21;
}

/* ref: FUN_00600710 */
uint F_00600710(unsigned int gen_a0)
{
  GEN_ENTER(0x600710u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00600720 */
uint F_00600720(unsigned int gen_a0)
{
  GEN_ENTER(0x600720u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00600730 */
uint F_00600730(unsigned int gen_a0)
{
  GEN_ENTER(0x600730u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00600740 */
uint F_00600740(unsigned int gen_a0)
{
  GEN_ENTER(0x600740u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00600750 */
uint F_00600750(unsigned int gen_a0)
{
  GEN_ENTER(0x600750u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x21)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x21);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00600770 */
uint F_00600770(unsigned int gen_a0)
{
  GEN_ENTER(0x600770u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x21);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x21);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_006007b0 */
uint F_006007b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6007b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x28,900);
  return (uint)uVar1;
}

/* ref: FUN_006007e0 */
uint F_006007e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6007e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00600810 */
uint F_00600810(unsigned int gen_a0)
{
  GEN_ENTER(0x600810u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x90;
}

/* ref: FUN_00600820 */
uint F_00600820(unsigned int gen_a0)
{
  GEN_ENTER(0x600820u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x91;
}

/* ref: FUN_00600830 */
uint F_00600830(unsigned int gen_a0)
{
  GEN_ENTER(0x600830u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00600840 */
uint F_00600840(unsigned int gen_a0)
{
  GEN_ENTER(0x600840u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00600850 */
uint F_00600850(unsigned int gen_a0)
{
  GEN_ENTER(0x600850u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00600860 */
uint F_00600860(unsigned int gen_a0)
{
  GEN_ENTER(0x600860u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00600870 */
uint F_00600870(unsigned int gen_a0)
{
  GEN_ENTER(0x600870u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x91)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x91);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_006008a0 */
uint F_006008a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6008a0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x91);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x91);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_006008e0 */
uint F_006008e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6008e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xa0,0x385);
  return (uint)uVar1;
}

/* ref: FUN_00600950 */
uint F_00600950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600950u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_006009c0 */
uint F_006009c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6009c0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00600a20 */
uint F_00600a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600a20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x385);
  return uVar1;
}

/* ref: FUN_00600a50 */
uint F_00600a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600a50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x385);
  return (uint)uVar1;
}

/* ref: FUN_00600a80 */
uint F_00600a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600a80u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00600ac0 */
uint F_00600ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x600ac0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00600ad0 */
uint F_00600ad0(unsigned int gen_a0)
{
  GEN_ENTER(0x600ad0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00600ae0 */
uint F_00600ae0(unsigned int gen_a0)
{
  GEN_ENTER(0x600ae0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00600af0 */
uint F_00600af0(unsigned int gen_a0)
{
  GEN_ENTER(0x600af0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00600b00 */
uint F_00600b00(unsigned int gen_a0)
{
  GEN_ENTER(0x600b00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00600b10 */
uint F_00600b10(unsigned int gen_a0)
{
  GEN_ENTER(0x600b10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00600b20 */
uint F_00600b20(unsigned int gen_a0)
{
  GEN_ENTER(0x600b20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00600b40 */
uint F_00600b40(unsigned int gen_a0)
{
  GEN_ENTER(0x600b40u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00600b80 */
uint F_00600b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600b80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_00600bb0 */
byte F_00600bb0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x600bb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  *(byte *)(in_ecx + 0x23) = (byte)param_2;
  *(float *)(in_ecx + 0x24) = param_3;
  return (byte)param_2;
}

/* ref: FUN_00600bd0 */
uint F_00600bd0(unsigned int gen_a0)
{
  GEN_ENTER(0x600bd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00600be0 */
uint F_00600be0(unsigned int gen_a0)
{
  GEN_ENTER(0x600be0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00600bf0 */
uint F_00600bf0(unsigned int gen_a0)
{
  GEN_ENTER(0x600bf0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00600c00 */
uint F_00600c00(unsigned int gen_a0)
{
  GEN_ENTER(0x600c00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00600c10 */
uint F_00600c10(unsigned int gen_a0)
{
  GEN_ENTER(0x600c10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00600c20 */
uint F_00600c20(unsigned int gen_a0)
{
  GEN_ENTER(0x600c20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00600c30 */
uint F_00600c30(unsigned int gen_a0)
{
  GEN_ENTER(0x600c30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00600c50 */
uint F_00600c50(unsigned int gen_a0)
{
  GEN_ENTER(0x600c50u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00600c90 */
uint F_00600c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600c90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_00600cc0 */
uint F_00600cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600cc0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00600d80 */
uint F_00600d80(unsigned int gen_a0)
{
  GEN_ENTER(0x600d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0x90) == '\0') {
    F_004b6080(this);
    *(undefined1 *)((int)this + 0x90) = 1;
  }
  return (int)this + 0x14;
}

/* ref: FUN_00600da0 */
uint F_00600da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600da0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00600dd0 */
unsigned int F_00600dd0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x600dd0u, gen_a0, 0u, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (REFG(int, 0x1375554) != 0) {
    F_004b6160(REFG(int, 0x1375554),param_1,param_2,param_3);
    REFG(undefined1, 0x1301314) = 0;
  }
  return 0;
}

/* ref: FUN_00600e40 */
uint F_00600e40(unsigned int gen_a0)
{
  GEN_ENTER(0x600e40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00600e50 */
uint F_00600e50(unsigned int gen_a0)
{
  GEN_ENTER(0x600e50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x11;
}

/* ref: FUN_00600e60 */
uint F_00600e60(unsigned int gen_a0)
{
  GEN_ENTER(0x600e60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00600e70 */
uint F_00600e70(unsigned int gen_a0)
{
  GEN_ENTER(0x600e70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00600e80 */
uint F_00600e80(unsigned int gen_a0)
{
  GEN_ENTER(0x600e80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00600e90 */
uint F_00600e90(unsigned int gen_a0)
{
  GEN_ENTER(0x600e90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00600ea0 */
uint F_00600ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x600ea0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x11)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x11);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00600ec0 */
uint F_00600ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x600ec0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x11);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x11);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00600f00 */
uint F_00600f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600f00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,900);
  return (uint)uVar1;
}

/* ref: FUN_00600f60 */
uint F_00600f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600f60u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00600fc0 */
uint F_00600fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x600fc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00600fd0 */
uint F_00600fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x600fd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00600fe0 */
uint F_00600fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x600fe0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00600ff0 */
uint F_00600ff0(unsigned int gen_a0)
{
  GEN_ENTER(0x600ff0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00601000 */
uint F_00601000(unsigned int gen_a0)
{
  GEN_ENTER(0x601000u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00601010 */
uint F_00601010(unsigned int gen_a0)
{
  GEN_ENTER(0x601010u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00601020 */
uint F_00601020(unsigned int gen_a0)
{
  GEN_ENTER(0x601020u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00601040 */
uint F_00601040(unsigned int gen_a0)
{
  GEN_ENTER(0x601040u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00601080 */
uint F_00601080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601080u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_006010c0 */
uint F_006010c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6010c0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00601120 */
uint F_00601120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601120u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x385);
  return uVar1;
}

/* ref: FUN_00601150 */
uint F_00601150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601150u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x385);
  return (uint)uVar1;
}

/* ref: FUN_006011a0 */
unsigned int F_006011a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6011a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x21) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x21) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x21);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x21);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x21);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x21);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00601220 */
unsigned int F_00601220(unsigned int gen_a0)
{
  GEN_ENTER(0x601220u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_006012a0 */
unsigned int F_006012a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6012a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00601340 */
uint F_00601340(unsigned int gen_a0)
{
  GEN_ENTER(0x601340u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x20;
}

/* ref: FUN_00601350 */
uint F_00601350(unsigned int gen_a0)
{
  GEN_ENTER(0x601350u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x21;
}

/* ref: FUN_00601360 */
uint F_00601360(unsigned int gen_a0)
{
  GEN_ENTER(0x601360u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00601370 */
uint F_00601370(unsigned int gen_a0)
{
  GEN_ENTER(0x601370u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00601380 */
uint F_00601380(unsigned int gen_a0)
{
  GEN_ENTER(0x601380u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00601390 */
uint F_00601390(unsigned int gen_a0)
{
  GEN_ENTER(0x601390u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_006013a0 */
uint F_006013a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6013a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x21)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x21);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_006013c0 */
uint F_006013c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6013c0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x21);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x21);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00601400 */
uint F_00601400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601400u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x28,0x385);
  return (uint)uVar1;
}

/* ref: FUN_00601440 */
uint F_00601440(unsigned int gen_a0)
{
  GEN_ENTER(0x601440u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00601450 */
uint F_00601450(unsigned int gen_a0)
{
  GEN_ENTER(0x601450u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00601460 */
uint F_00601460(unsigned int gen_a0)
{
  GEN_ENTER(0x601460u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00601470 */
uint F_00601470(unsigned int gen_a0)
{
  GEN_ENTER(0x601470u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00601480 */
uint F_00601480(unsigned int gen_a0)
{
  GEN_ENTER(0x601480u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00601490 */
uint F_00601490(unsigned int gen_a0)
{
  GEN_ENTER(0x601490u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_006014a0 */
uint F_006014a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6014a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_006014c0 */
uint F_006014c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6014c0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00601500 */
uint F_00601500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601500u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0x385);
  return (uint)uVar1;
}

/* ref: FUN_00601530 */
uint F_00601530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601530u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006015d0 */
byte F_006015d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6015d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00601640 */
unsigned int F_00601640(unsigned int gen_a0)
{
  GEN_ENTER(0x601640u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_006016a0 */
byte F_006016a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6016a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00601700 */
uint F_00601700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601700u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00601740 */
uint F_00601740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601740u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x34 + param_2 * 4);
}

/* ref: FUN_00601790 */
unsigned int F_00601790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x70);
  *(undefined4 *)(iVar1 + 0x14) = *param_1;
  *(undefined4 *)(iVar1 + 0x18) = param_1[1];
  *(undefined4 *)(iVar1 + 0x1c) = param_1[2];
  *(undefined4 *)(iVar1 + 0x20) = param_1[3];
  return 0;
}

/* ref: FUN_006017c0 */
uint F_006017c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6017c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x70);
  *(float *)(uVar1 + 0x20) = param_2;
  return uVar1;
}

/* ref: FUN_006017e0 */
uint F_006017e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6017e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x70);
  *(undefined2 *)(uVar1 + 10) = (undefined2)param_2;
  return uVar1;
}

/* ref: FUN_00601850 */
unsigned int F_00601850(unsigned int gen_a0)
{
  GEN_ENTER(0x601850u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_006018b0 */
uint F_006018b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6018b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_006018c0 */
uint F_006018c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6018c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x11;
}

/* ref: FUN_006018d0 */
uint F_006018d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6018d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006018e0 */
uint F_006018e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6018e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_006018f0 */
uint F_006018f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6018f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00601900 */
uint F_00601900(unsigned int gen_a0)
{
  GEN_ENTER(0x601900u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00601910 */
uint F_00601910(unsigned int gen_a0)
{
  GEN_ENTER(0x601910u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x11)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x11);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00601930 */
uint F_00601930(unsigned int gen_a0)
{
  GEN_ENTER(0x601930u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x11);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x11);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00601950 */
uint F_00601950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601950u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_00601970 */
uint F_00601970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601970u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,900);
  return (uint)uVar1;
}

/* ref: FUN_006019b0 */
unsigned int F_006019b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6019b0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00601a50 */
uint F_00601a50(unsigned int gen_a0)
{
  GEN_ENTER(0x601a50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x11;
}

/* ref: FUN_00601a60 */
uint F_00601a60(unsigned int gen_a0)
{
  GEN_ENTER(0x601a60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00601a70 */
uint F_00601a70(unsigned int gen_a0)
{
  GEN_ENTER(0x601a70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00601a80 */
uint F_00601a80(unsigned int gen_a0)
{
  GEN_ENTER(0x601a80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00601a90 */
uint F_00601a90(unsigned int gen_a0)
{
  GEN_ENTER(0x601a90u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x11);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x11);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00601ab0 */
uint F_00601ab0(unsigned int gen_a0)
{
  GEN_ENTER(0x601ab0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00601ad0 */
uint F_00601ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,900);
  return (uint)uVar1;
}

/* ref: FUN_00601b10 */
uint F_00601b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601b10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,900);
  return (uint)uVar1;
}

/* ref: FUN_00601b80 */
uint F_00601b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601b80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0x385);
  return (uint)uVar1;
}

/* ref: FUN_00601bb0 */
uint F_00601bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x601bb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x25;
}

/* ref: FUN_00601bc0 */
uint F_00601bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x601bc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00601bd0 */
uint F_00601bd0(unsigned int gen_a0)
{
  GEN_ENTER(0x601bd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00601be0 */
uint F_00601be0(unsigned int gen_a0)
{
  GEN_ENTER(0x601be0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00601bf0 */
uint F_00601bf0(unsigned int gen_a0)
{
  GEN_ENTER(0x601bf0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00601c20 */
uint F_00601c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601c20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x28,900);
  return (uint)uVar1;
}

/* ref: FUN_00601c50 */
uint F_00601c50(unsigned int gen_a0)
{
  GEN_ENTER(0x601c50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00601c60 */
uint F_00601c60(unsigned int gen_a0)
{
  GEN_ENTER(0x601c60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00601c70 */
uint F_00601c70(unsigned int gen_a0)
{
  GEN_ENTER(0x601c70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00601c80 */
uint F_00601c80(unsigned int gen_a0)
{
  GEN_ENTER(0x601c80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00601c90 */
uint F_00601c90(unsigned int gen_a0)
{
  GEN_ENTER(0x601c90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00601ca0 */
uint F_00601ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x601ca0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00601ce0 */
uint F_00601ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_00601d20 */
uint F_00601d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x601d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00601de0 */
uint F_00601de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601de0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,900);
  return (uint)uVar1;
}

/* ref: FUN_00601e10 */
uint F_00601e10(unsigned int gen_a0)
{
  GEN_ENTER(0x601e10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00601e20 */
uint F_00601e20(unsigned int gen_a0)
{
  GEN_ENTER(0x601e20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00601e30 */
uint F_00601e30(unsigned int gen_a0)
{
  GEN_ENTER(0x601e30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00601e40 */
uint F_00601e40(unsigned int gen_a0)
{
  GEN_ENTER(0x601e40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00601e50 */
uint F_00601e50(unsigned int gen_a0)
{
  GEN_ENTER(0x601e50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00601e80 */
uint F_00601e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601e80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0x385);
  return (uint)uVar1;
}

/* ref: FUN_00601eb0 */
uint F_00601eb0(unsigned int gen_a0)
{
  GEN_ENTER(0x601eb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00601ec0 */
uint F_00601ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x601ec0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00601ed0 */
uint F_00601ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x601ed0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00601ee0 */
uint F_00601ee0(unsigned int gen_a0)
{
  GEN_ENTER(0x601ee0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00601ef0 */
uint F_00601ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x601ef0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00601f20 */
uint F_00601f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601f20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_00601f50 */
uint F_00601f50(unsigned int gen_a0)
{
  GEN_ENTER(0x601f50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x19;
}

/* ref: FUN_00601f60 */
uint F_00601f60(unsigned int gen_a0)
{
  GEN_ENTER(0x601f60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00601f70 */
uint F_00601f70(unsigned int gen_a0)
{
  GEN_ENTER(0x601f70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00601f80 */
uint F_00601f80(unsigned int gen_a0)
{
  GEN_ENTER(0x601f80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00601f90 */
uint F_00601f90(unsigned int gen_a0)
{
  GEN_ENTER(0x601f90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00601fa0 */
uint F_00601fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x601fa0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x19);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x19);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00601fe0 */
uint F_00601fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x1c,900);
  return (uint)uVar1;
}

/* ref: FUN_00602040 */
uint F_00602040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602040u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,900);
  return (uint)uVar1;
}

/* ref: FUN_00602090 */
uint F_00602090(unsigned int gen_a0)
{
  GEN_ENTER(0x602090u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_006020a0 */
uint F_006020a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6020a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

