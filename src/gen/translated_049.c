#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_0068fce0 */
GEN_FRAME byte GEN_THISCALL F_0068fce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x68fce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  byte bVar1;
  undefined * this_00;
  uint in_ecx;
  
  if ((*param_1 == 'b') && (param_1[1] == 'g')) {
    bVar1 = 1;
  }
  else {
    bVar1 = 0;
  }
  *(byte *)((int)this + 0x1e4) =
       *(byte *)((int)this + 0x1e4) ^ (*(byte *)((int)this + 0x1e4) ^ bVar1) & 1;
  this_00 = (undefined *)F_00990ad0(param_1);
  in_ecx = F_009cfa30(this_00 GEN_EDX_ARG,(int)this + 0x70);
  *(uint *)((int)this + 0x234) = in_ecx;
  F_00982b60(in_ecx GEN_EDX_ARG,(int)this + 0x1e0);
  F_00982b20(this_00 GEN_EDX_ARG);
  *(undefined1 *)((int)this + 0x65) = 2;
  return 1;
}

/* ref: FUN_0068fd50 */
GEN_NOFRAME uint GEN_THISCALL F_0068fd50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x68fd50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0068b800((undefined *)((int)this - 0x1e0) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_0068fd60 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0068fd60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x68fd60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined1 *)(in_ecx - 0x17b) = 0;
  if (*(int *)(in_ecx + 0x54) != 0) {
    F_00982b60(*(int *)(in_ecx + 0x54) GEN_EDX_FWD,0);
    *(undefined4 *)(in_ecx + 0x54) = 0;
  }
  return;
}

/* ref: FUN_0068fd90 */
GEN_NOFRAME uint GEN_THISCALL F_0068fd90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x68fd90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  code * pcVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  bVar2 = F_00990c00(*(undefined4 *)((int)this + 0x234) GEN_EDX_FWD);
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (bVar2 == 0) {
    uVar3 = F_00982ce0(*(undefined4 *)((int)this + 0x234) GEN_EDX_ARG);
    if ((char)uVar3 != '\0') {
      pcVar1 = *(gen_code32 *)(*(int *)this + 0x28);
      *(undefined1 *)((int)this + 0x65) = 3;
      uVar3 = (*pcVar1)(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar3;
    }
  }
  else {
    *(undefined1 *)((int)this + 0x65) = 4;
  }
  return uVar3;
}

/* ref: Client::Graphics::Scene::VfxObject::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_0068fdd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x68fdd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)(this + 0x60);
  if (((byte)this[0x1e4] & 1) != 0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x30))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_00b81ef0(this_00 GEN_EDX_ARG,uVar1);
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10abc60)));
  (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10abc60)));
  (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10abc60)));
  (*(undefined4 *)(gen_frame + 0x30)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10abc38)));
  (*(undefined4 *)(gen_frame + 0x34)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10abc38)));
  (*(undefined4 *)(gen_frame + 0x38)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10abc38)));
  uVar1 = F_00b81ef0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x20)));
  return uVar1;
}

/* ref: Client::Graphics::Scene::VfxObject::vf15 */
GEN_NOFRAME uint GEN_THISCALL F_0068fe60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x68fe60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  uint in_EAX = 0;
  uint uVar4;
  
  if (*(char *)(in_ecx + 0x65) != '\x03') {
    return in_EAX & 0xffffff00;
  }
  fVar2 = *(float *)(in_ecx + 0x34);
  uVar1 = *(undefined4 *)(in_ecx + 0x38);
  fVar3 = *(float *)(in_ecx + 0x23c);
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(in_ecx + 0x30);
  (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
  (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar3 + (float10)fVar2);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(in_ecx + 0x238);
  uVar4 = F_005ff5c0(param_2 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar4;
}

/* ref: Client::Graphics::Scene::VfxObject::vf14 */
GEN_NOFRAME byte GEN_THISCALL F_0068fee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68fee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  
  if (this[0x65] != (undefined1)0x3) {
    return 0;
  }
  fVar2 = *(float *)(this + 0x34);
  uVar1 = *(undefined4 *)(this + 0x38);
  fVar3 = *(float *)(this + 0x23c);
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(this + 0x30);
  (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar3 + (float10)fVar2);
  (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(this + 0x238);
  bVar4 = F_006aeff0(param_1 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)),param_2);
  return bVar4;
}

/* ref: Client::Graphics::Scene::VfxObject::vf18 */
GEN_NOFRAME uint GEN_THISCALL F_0068ff60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x68ff60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x40))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_2);
  fVar1 = *(float *)(uVar5 + 0x34);
  fVar2 = *(float *)(this + 0x34);
  fVar3 = *(float *)(uVar5 + 0x38);
  fVar4 = *(float *)(this + 0x38);
  *param_1 = ((float)GEN_TOF(((float10)*(float *)(uVar5 + 0x30) - (float10)*(float *)(this + 0x30))));
  param_1[1] = (float)((float10)fVar1 - (float10)fVar2);
  param_1[2] = (float)((float10)fVar3 - (float10)fVar4);
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_0068ffe0 */
GEN_FRAME uint GEN_THISCALL F_0068ffe0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x68ffe0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  uint uVar1;
  
  *(float *)((int)param_1 + 0x218) = param_3;
  *(float *)((int)param_1 + 0x21c) = param_2;
  *(float *)((int)param_1 + 0x220) = param_4;
  *(float *)((int)param_1 + 0x224) = param_5;
  uVar1 = F_0068b800(param_1 GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00690020 */
GEN_NOFRAME uint GEN_THISCALL F_00690020(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x690020u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (*(int *)(in_ecx + 0x234) != 0) {
    bVar1 = F_00990c00(*(int *)(in_ecx + 0x234) GEN_EDX_FWD);
    if (bVar1 == 0) {
      uVar2 = F_00982ce0(*(undefined4 *)(in_ecx + 0x234) GEN_EDX_ARG);
      if ((char)uVar2 != '\0') {
        return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_ecx + 0x234) + 0x40))) + 100)));
      }
    }
  }
  return 0;
}

/* ref: FUN_00690057 */
GEN_NOFRAME unsigned int F_00690057(void)
{
  GEN_ENTER(0x690057u, 0u, 0u, 0u, 0u);
  code * pcVar1;
  
  pcVar1 = ((code *)GEN_TOP(swi(3)));
  (*pcVar1)();
  return 0;
}

/* ref: FUN_00690070 */
GEN_FRAME uint GEN_THISCALL F_00690070(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x690070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int * piVar4;
  undefined * pvVar5;
  int local_8;
  
  if (*(int *)((int)this + 0xe090) != 0) {
    F_0050c620(*(int *)((int)this + 0xe090),0,0);
    *(undefined4 *)((int)this + 0xe090) = 0;
  }
  iVar1 = *(int *)((int)this + 0xe0a0);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 - 4);
    pvVar5 = (undefined *)(iVar1 + iVar2 * 0xc);
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      pvVar5 = (undefined *)((int)pvVar5 - 0xc);
      F_0068b9a0(pvVar5 GEN_EDX_ARG);
    }
    F_00406b30(iVar1 - 4);
    *(undefined4 *)((int)this + 0xe0a0) = 0;
  }
  *(undefined1 *)((int)this + 0xe09d) = 0;
  piVar4 = (int *)((int)this + 0xe094);
  local_8 = 2;
  do {
    if (*piVar4 != 0) {
      F_0050c620(*piVar4,0,0);
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  pvVar5 = (undefined *)((int)this + 0x50);
  local_8 = 0x10;
  do {
    F_0064ad80(pvVar5 GEN_EDX_ARG);
    pvVar5 = (undefined *)((int)pvVar5 + 0x34);
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  pvVar5 = (undefined *)((int)this + 0x390);
  local_8 = 0x40;
  do {
    F_0064ad80(pvVar5 GEN_EDX_ARG);
    pvVar5 = (undefined *)((int)pvVar5 + 0x34);
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  pvVar5 = (undefined *)((int)this + 0x1090);
  local_8 = 0x400;
  do {
    F_0064ad80(pvVar5 GEN_EDX_ARG);
    uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090998)));
    pvVar5 = (undefined *)((int)pvVar5 + 0x34);
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  *(undefined4 *)((int)this + 0x10) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x10), REFG(float, 0x1090998));
  *(undefined4 *)((int)this + 0x14) = uVar3;
  *(undefined4 *)((int)this + 0x18) = uVar3;
  *(undefined1 *)((int)this + 0xe0a8) = 0;
  *(undefined4 *)((int)this + 0xe0a4) = 0;
  return 0;
}

/* ref: FUN_006901b0 */
GEN_FRAME uint GEN_THISCALL F_006901b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6901b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xe094 + param_2 * 4) + 0xfc)));
}

/* ref: FUN_006901d0 */
GEN_FRAME float10 GEN_THISCALL F_006901d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6901d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(in_ecx + 4))) {
  case 0: ;
  case 1: ;
    if (param_2 == 0) {
      return (float10)REFG(float, 0x10b2b38);
    }
    if (param_2 == 1) {
LAB_00690226: ;
      return (float10)*(float *)&REFG(undefined, 0x10b2b40);
    }
    if (param_2 == 2) goto LAB_0069023e;
    break;
  case 2: ;
    if (param_2 == 0) goto LAB_00690226;
    if (param_2 == 1) {
      return (float10)*(float *)&REFG(undefined, 0x10b2b44);
    }
    if (param_2 == 2) {
      return (float10)*(float *)&REFG(undefined, 0x10b2b48);
    }
    break;
  case 3: ;
    if (param_2 == 0) {
      return (float10)*(float *)&REFG(undefined, 0x10b2b4c);
    }
    if (param_2 == 1) {
LAB_0069023e: ;
      return (float10)*(float *)&REFG(undefined, 0x10b2b3c);
    }
    if (param_2 == 2) {
      return (float10)*(float *)&REFG(undefined, 0x10b2b50);
    }
  }
  return (float10)0;
}

/* ref: FUN_00690270 */
GEN_NOFRAME uint GEN_THISCALL F_00690270(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x690270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00690070((undefined *)((int)this + 0xe0d0) GEN_EDX_FWD);
  *(undefined1 *)((int)this + 0x1c190) = 0;
  return uVar1;
}

/* ref: FUN_00690290 */
GEN_FRAME uint GEN_THISCALL F_00690290(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x690290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  bool bVar1;
  uint uVar2;
  short * psVar3;
  uint uVar4;
  
  *(uint *)((int)this + 0x48) = *(uint *)((int)this + 0x48) & 0xfffffff7;
  *(undefined4 *)((int)this + 0x5c) = 0;
  this_00 = *(undefined * PTR32 *)((int)this + 0x30);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  bVar1 = false;
  psVar3 = (short *)((int)this + 0x40);
  uVar4 = 0;
  do {
    uVar2 = F_00623160(this_00 GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x1322e24) + uVar4))));
    *psVar3 = (short)uVar2;
    if ((short)uVar2 != -1) {
      bVar1 = true;
    }
    uVar4 = uVar4 + 4;
    psVar3 = psVar3 + 1;
  } while (uVar4 < 0xc);
  if (bVar1) {
    *(uint *)((int)this + 0x48) = *(uint *)((int)this + 0x48) | 8;
  }
  return uVar2;
}

/* ref: FUN_00690310 */
GEN_FRAME byte GEN_THISCALL F_00690310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x690310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    bVar1 = F_0061f450(this GEN_EDX_FWD,0);
    if (bVar1 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,param_1 << 6,0x10);
      *(uint *)((int)this + 0x4c) = uVar2;
      if (uVar2 != 0) goto LAB_0069034f;
    }
    return 0;
  }
LAB_0069034f: ;
  *(int *)((int)this + 0x3c) = param_1;
  *(undefined4 *)((int)this + 0x38) = 0;
  return 1;
}

/* ref: FUN_00690370 */
GEN_NOFRAME uint GEN_THISCALL F_00690370(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x690370u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10b2b58));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0xffffffff;
  in_ecx[6] = 0;
  in_ecx[10] = uVar1;
  in_ecx[0xb] = uVar1;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[0xc] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_006903c0 */
GEN_FRAME uint GEN_THISCALL F_006903c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6903c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  piVar4 = *(int * PTR32 *)((int)this + 8);
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 200))(piVar4 GEN_EDX_FWD);
  if (uVar3 == 4) {
    piVar4 = (int *)piVar4[5];
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 200))(piVar4 GEN_EDX_ARG);
  iVar1 = REFG(int, 0x137129c);
  if (uVar3 != 1) {
    if (uVar3 == 2) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x128))(piVar4 GEN_EDX_ARG);
      bVar2 = F_00b51e00(*(undefined * PTR32 *)(iVar1 + 0x10) GEN_EDX_ARG,(uVar3 & 0xffff) + 10000);
      if (bVar2 != 0) {
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x128))(piVar4 GEN_EDX_ARG);
        F_00c472af(param_1,param_2,"chara/xls/attachOffset/d%04d.atch",uVar3 & 0xffff);
        return param_1;
      }
    }
    else if (uVar3 == 3) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x128))(piVar4 GEN_EDX_ARG);
      bVar2 = F_00b51e00(*(undefined * PTR32 *)(iVar1 + 0x10) GEN_EDX_ARG,uVar3 & 0xffff);
      if (bVar2 != 0) {
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x128))(piVar4 GEN_EDX_ARG);
        F_00c472af(param_1,param_2,"chara/xls/attachOffset/m%04d.atch",uVar3 & 0xffff);
        return param_1;
      }
    }
    return 0;
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x128))(piVar4 GEN_EDX_ARG);
  F_00c472af(param_1,param_2,"chara/xls/attachOffset/c%04d.atch",uVar3 & 0xffff);
  return param_1;
}

/* ref: FUN_006904e0 */
GEN_NOFRAME byte F_006904e0(void)
{
  GEN_ENTER(0x6904e0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00690510 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00690510(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x690510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x30), REFG(float, 0x1302df0));
  *(undefined4 *)((int)this + 0x34) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x34), REFG(float, 0x1302df4));
  *(undefined4 *)((int)this + 0x38) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x38), REFG(float, 0x1302df8));
  *(undefined4 *)((int)this + 0x40) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 0x44) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)((int)this + 0x48) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x4c) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0x50) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x50), REFG(float, 0x1302e10));
  *(undefined4 *)((int)this + 0x54) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x54), REFG(float, 0x1302e14));
  *(undefined4 *)((int)this + 0x58) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x58), REFG(float, 0x1302e18));
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 3;
  *(undefined * PTR32 *)((int)this + 0x18) = this;
  *(undefined * PTR32 *)((int)this + 0x1c) = this;
  return 0;
}

/* ref: Client::Graphics::Scene::Object::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_006905b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6905b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(this + 0x14);
  if ((iVar1 != 0) && (*(undefined * PTR32 *)(iVar1 + 0x20) == this)) {
    *(uint *)(iVar1 + 0x20) =
         -(uint)(*(undefined * PTR32 *)(this + 0x1c) != this) & (uint)*(undefined * PTR32 *)(this + 0x1c);
  }
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x1c) + 0x18))) = *(undefined4 *)(this + 0x18);
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0x1c))) = *(undefined4 *)(this + 0x1c);
  iVar1 = *(int *)(this + 0x28);
  uVar2 = *(uint *)(this + 0x24) & 3;
  uVar3 = *(uint *)(this + 0x24) & 0xfffffffc;
  *(undefined * PTR32 *)(this + 0x18) = this;
  *(undefined * PTR32 *)(this + 0x1c) = this;
  *(undefined4 *)(this + 0x14) = 0;
  *(uint *)(this + 0x24) = uVar2;
  *(undefined4 *)(this + 0x28) = 0;
  if (uVar3 != 0) {
    *(int *)(uVar3 + 0x28) = iVar1;
  }
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 0x24) & 3 | uVar3;
    *(uint *)(iVar1 + 0x24) = uVar2;
  }
  *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 1;
  return uVar2;
}

/* ref: FUN_00690620 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00690620(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x690620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  uVar2 = REFG(undefined4, 0x1371294);
  if ((*(byte *)((int)this + 0x24) & 1) != 0) {
    iVar1 = *(int *)(REFG(undefined4, 0x1371294) + 0x28);
    *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 3 | REFG(undefined4, 0x1371294);
    *(int *)((int)this + 0x28) = iVar1;
    *(undefined * PTR32 *)(uVar2 + 0x28) = this;
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) & 3 | (uint)this;
    }
    *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffe;
  }
  return;
}

/* ref: FUN_00690660 */
GEN_NOFRAME uint GEN_THISCALL F_00690660(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x690660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00690510(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x60) =
       (*(undefined * PTR32 (*)[1])REFP(0x10b2a6c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2b9c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x60) = (*(undefined * PTR32 (*)[1])REFP(0x10b2b94));
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) =
       (*(undefined * PTR32 (*)[1])REFP(0x10b2a94));
  *(undefined4 *)((int)this + 0x8c) = 0;
  return (uint)this;
}

/* ref: FUN_006906c0 */
GEN_NOFRAME uint GEN_THISCALL F_006906c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6906c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00690510(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2bb8));
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(uint *)((int)this + 200) = *(uint *)((int)this + 200) | 3;
  return (uint)this;
}

/* ref: FUN_006906f0 */
GEN_NOFRAME byte GEN_THISCALL F_006906f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6906f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 3;
  uVar1 = F_00638150();
  *(uint *)((int)this + 0xc0) = uVar1;
  return uVar1 != 0;
}

/* ref: Client::Graphics::Scene::Camera::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00690710(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x690710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0xc0);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 0xc0) = 0;
  }
  uVar2 = F_006905b0((undefined *)this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00690d40 */
GEN_NOFRAME uint GEN_THISCALL F_00690d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x690d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  
  iVar3 = *(int *)(REFG(int, 0x1370b90) + 0x90);
  (*(float *)(gen_frame + 0x0)) = (float)param_2;
  (*(float *)(gen_frame + 0x4)) = (float)param_3;
  fVar5 = (float10)*(int *)(REFG(int, 0x1370b90) + 0x90);
  if (iVar3 < 0) {
    fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  iVar3 = *(int *)(REFG(int, 0x1370b90) + 0x94);
  (*(int *)(gen_frame + 0x2c)) = iVar3;
  fVar6 = (float10)iVar3;
  if (iVar3 < 0) {
    fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar1 = (float)((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x1092098));
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar2 = (float)((float10)*(double *)&REFG(undefined, 0x1092098) * (float10)param_3);
  (*(float *)(gen_frame + 0x14)) = fVar2;
  fVar1 = (float)((float10)fVar1 / (float10)(float)fVar5);
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar2 = (float)((float10)fVar2 / (float10)(float)fVar6);
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar1 = (float)((float10)fVar1 - (float10)1);
  (*(float *)(gen_frame + 0x10)) = fVar1;
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)fVar2 - (float10)1) * (float10)REFG(double, 0x1094890))));
  (*(float *)(gen_frame + 0x14)) = fVar1;
  (*(float *)(gen_frame + 0x4)) = fVar1;
  uVar4 = F_0068bdf0(this GEN_EDX_FWD,param_1,&(*(float *)(gen_frame + 0x0)));
  return uVar4;
}

/* ref: FUN_00690e20 */
GEN_NOFRAME uint GEN_THISCALL F_00690e20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x690e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((*(byte *)((int)this + 200) & 1) == 0) {
    (*(float *)(gen_frame + 0x20)) = REFG(float, 0x1302c80);
    (*(float *)(gen_frame + 0x24)) = gen_bits2f(REFG(float, 0x1302c84));
    (*(float *)(gen_frame + 0x28)) = gen_bits2f(REFG(float, 0x1302c88));
    uVar4 = F_004f41e0(&(*(float *)(gen_frame + 0x20)) GEN_EDX_FWD,(int)this + 0x40);
    *(float *)((int)this + 0x70) = (*(float *)(gen_frame + 0x20));
    *(float *)((int)this + 0x74) = (*(float *)(gen_frame + 0x24));
    *(float *)((int)this + 0x78) = (*(float *)(gen_frame + 0x28));
    return uVar4;
  }
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x60) - (float10)*(float *)((int)this + 0x30))));
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 100) - (float10)*(float *)((int)this + 0x34))));
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x68) - (float10)*(float *)((int)this + 0x38))));
  (*(float *)(gen_frame + 0x8)) = fVar3;
  (*(float *)(gen_frame + 0x20)) = fVar1;
  (*(float *)(gen_frame + 0x24)) = fVar2;
  (*(float *)(gen_frame + 0x28)) = fVar3;
  F_0046f390(&(*(float *)(gen_frame + 0x20)) GEN_EDX_ARG);
  (*(float *)(gen_frame + 0x3c)) = *(float *)((int)this + 0x78);
  (*(float *)(gen_frame + 0x38)) = *(float *)((int)this + 0x74);
  fVar5 = (float10)*(float *)((int)this + 0x78);
  fVar6 = (float10)*(float *)((int)this + 0x74);
  (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x24)) * fVar5 - (float10)(*(float *)(gen_frame + 0x28)) * fVar6);
  (*(float *)(gen_frame + 0x38)) = *(float *)((int)this + 0x70);
  fVar7 = (float10)*(float *)((int)this + 0x70);
  (*(float *)(gen_frame + 0x14)) = (float)(fVar7 * (float10)(*(float *)(gen_frame + 0x28)) - (float10)(*(float *)(gen_frame + 0x20)) * fVar5);
  (*(float *)(gen_frame + 0x18)) = (float)(fVar6 * (float10)(*(float *)(gen_frame + 0x20)) - (float10)(*(float *)(gen_frame + 0x24)) * fVar7);
  F_0046f390(&(*(float *)(gen_frame + 0x10)) GEN_EDX_ARG);
  (*(float *)(gen_frame + 0x0)) = (float)((float10)(*(float *)(gen_frame + 0x28)) * (float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x24)) * (float10)(*(float *)(gen_frame + 0x18)));
  (*(float *)(gen_frame + 0x4)) = (float)((float10)(*(float *)(gen_frame + 0x20)) * (float10)(*(float *)(gen_frame + 0x18)) - (float10)(*(float *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x28)));
  (*(float *)(gen_frame + 0x8)) = (float)((float10)(*(float *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x24)) - (float10)(*(float *)(gen_frame + 0x20)) * (float10)(*(float *)(gen_frame + 0x14)));
  uVar4 = F_0046f390(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG);
  *(float *)((int)this + 0x70) = (*(float *)(gen_frame + 0x0));
  *(float *)((int)this + 0x74) = (*(float *)(gen_frame + 0x4));
  *(float *)((int)this + 0x78) = (*(float *)(gen_frame + 0x8));
  return uVar4;
}

/* ref: FUN_00690f90 */
GEN_NOFRAME uint GEN_THISCALL F_00690f90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x690f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float * pfVar5;
  float10 fVar6;
  
  if ((*(byte *)((int)this + 200) & 1) == 0) {
    uVar4 = F_00666e10((undefined *)((int)this + 0x80) GEN_EDX_FWD,(int)this + 0x30,(int)this + 0x40,
                         (int)this + 0x50);
    return uVar4;
  }
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x60) - (float10)*(float *)((int)this + 0x30))));
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 100) - (float10)*(float *)((int)this + 0x34))));
  (*(float *)(gen_frame + 0x14)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x68) - (float10)*(float *)((int)this + 0x38))));
  (*(float *)(gen_frame + 0x18)) = fVar3;
  (*(float *)(gen_frame + 0x20)) = fVar1;
  (*(float *)(gen_frame + 0x24)) = fVar2;
  (*(float *)(gen_frame + 0x28)) = fVar3;
  fVar1 = ((float)GEN_TOF((((float10)fVar1 * (float10)fVar1 + (float10)fVar2 * (float10)fVar2) +
                 (float10)fVar3 * (float10)fVar3)));
  (*(float *)(gen_frame + 0x3c)) = fVar1;
  if ((float10)fVar1 < (float10)REFG(float, 0x1094778)) {
    (*(float *)(gen_frame + 0x20)) = 0.0;
    (*(float *)(gen_frame + 0x24)) = 0.0;
    (*(float *)(gen_frame + 0x28)) = REFG(float, 0x1087f04);
  }
  F_005fe2e0(&(*(float *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0x3c)) = *(float *)((int)this + 0xc4);
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xc4) * (float10)REFG(double, 0x1088108))));
  (*(float *)(gen_frame + 0x3c)) = fVar1;
  fVar6 = ((float10)GEN_TOD(fsin((float10)fVar1)));
  fVar2 = (float)fVar6;
  (*(float *)(gen_frame + 0x38)) = fVar2;
  fVar6 = (float10)fVar2;
  (*(float *)(gen_frame + 0x10)) = (float)(fVar6 * (float10)(*(float *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x4)) * fVar6);
  (*(float *)(gen_frame + 0x18)) = (float)(fVar6 * (float10)(*(float *)(gen_frame + 0x8)));
  fVar6 = ((float10)GEN_TOD(fcos((float10)fVar1)));
  (*(float *)(gen_frame + 0x38)) = (float)fVar6;
  (*(float *)(gen_frame + 0x1c)) = (float)fVar6;
  pfVar5 = (float *)F_004f4130(&(*(float *)(gen_frame + 0x20)),(int)this + 0x70,&(*(float *)(gen_frame + 0x10)));
  fVar1 = pfVar5[1];
  fVar2 = pfVar5[2];
  (*(float *)(gen_frame + 0x0)) = *pfVar5;
  (*(float *)(gen_frame + 0x4)) = fVar1;
  (*(float *)(gen_frame + 0x8)) = fVar2;
  uVar4 = F_004f4430((undefined *)((int)this + 0x80) GEN_EDX_ARG,(float *)((int)this + 0x30),(int)this + 0x60,
                       &(*(float *)(gen_frame + 0x0)));
  return uVar4;
}

/* ref: FUN_00691130 */
GEN_NOFRAME uint GEN_THISCALL F_00691130(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x691130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00690510(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2bb8));
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(uint *)((int)this + 200) = *(uint *)((int)this + 200) | 3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2bd4));
  return (uint)this;
}

/* ref: Client::Graphics::Scene::CameraMaya::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00691170(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x691170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0xc0);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 0xc0) = 0;
  }
  uVar2 = F_006905b0((undefined *)this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_006911a0 */
GEN_NOFRAME uint GEN_THISCALL F_006911a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6911a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float * pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float * pfVar5;
  undefined * this_00;
  float fVar6;
  
  if (*(int *)((int)this + 0xd4) == 0) {
    *(float *)((int)this + 0x60) = *param_1;
    *(float *)((int)this + 100) = param_1[1];
    *(float *)((int)this + 0x68) = param_1[2];
    pfVar5 = param_1;
  }
  else {
    pfVar5 = ((float *)GEN_TOP((*(int *)((int)this + 0xd4) - 1)));
    if (pfVar5 < &REFG(undefined, 0x6)) {
      pfVar5 = (float *)((int)this + 0x60);
      pfVar1 = (float *)((int)this + 0x30);
      (*(float *)(gen_frame + 0x10)) = (float)((float10)*param_1 - (float10)*pfVar5);
      fVar6 = ((float)GEN_TOF(((float10)param_1[1] - (float10)*(float *)((int)this + 100))));
      (*(float *)(gen_frame + 0x14)) = fVar6;
      fVar2 = ((float)GEN_TOF(((float10)param_1[2] - (float10)*(float *)((int)this + 0x68))));
      (*(float *)(gen_frame + 0x18)) = fVar2;
      fVar3 = ((float)GEN_TOF(((float10)*pfVar1 + (float10)(float)((float10)*param_1 - (float10)*pfVar5))));
      (*(float *)(gen_frame + 0x0)) = fVar3;
      fVar6 = ((float)GEN_TOF(((float10)fVar6 + (float10)*(float *)((int)this + 0x34))));
      (*(float *)(gen_frame + 0x4)) = fVar6;
      fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x38) + (float10)fVar2)));
      (*(float *)(gen_frame + 0x8)) = fVar2;
      *pfVar1 = fVar3;
      *(float *)((int)this + 0x34) = fVar6;
      *(float *)((int)this + 0x38) = fVar2;
      *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 2;
      *pfVar5 = *param_1;
      *(float *)((int)this + 100) = param_1[1];
      *(float *)((int)this + 0x68) = param_1[2];
      iVar4 = *(int *)((int)this + 0xc0);
      if (*(char *)(iVar4 + 0xb8) != '\0') {
        this_00 = (undefined *)F_0046f4a0(&(*(float *)(gen_frame + 0x0)),pfVar1,pfVar5);
        fVar6 = F_004bd280(this_00 GEN_EDX_ARG);
        (*(float *)(gen_frame + 0x28)) = REFG(float, 0x1094884);
        fVar6 = (float)((float10)fVar6 + (float10)fVar6);
        (*(float *)(gen_frame + 0x2c)) = fVar6;
        pfVar5 = &(*(float *)(gen_frame + 0x2c));
        if (!(REFG(double, 0x1094800) < (double)fVar6)) {
          pfVar5 = &(*(float *)(gen_frame + 0x28));
        }
        *(float *)(iVar4 + 0xb4) = *pfVar5;
        return (uint)pfVar5;
      }
    }
  }
  return (uint)pfVar5;
}

/* ref: FUN_006912b0 */
GEN_NOFRAME uint GEN_THISCALL F_006912b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6912b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00690510(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined2 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x66) = 0xffff;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) | 0xb;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) & 0xef;
  return (uint)this;
}

/* ref: Client::Graphics::Scene::DrawObject::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_006912f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6912f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  this[100] = (undefined1)((byte)this[100] & 0xfb);
  this[0x65] = (undefined1)0x0;
  if (*(int *)(this + 0x60) != 0) {
    F_00b14100(REFG(void * PTR32, 0x1370c1c) GEN_EDX_FWD,*(int *)(this + 0x60));
    *(undefined4 *)(this + 0x60) = 0;
  }
  uVar1 = F_006905b0((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00691320 */
GEN_FRAME uint F_00691320(float gen_a0)
{
  GEN_ENTER(0x691320u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  unsigned int gen_args[1];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x4)) = 0.0;
  pfVar1 = &(*(float *)&gen_args[0]);
  if (!((*(float *)&gen_args[0]) < REFG(float, 0x1087f04))) {
    pfVar1 = &(*(float *)(gen_frame + 0x8));
  }
  if (!(0.0 < *pfVar1)) {
    pfVar1 = &(*(float *)(gen_frame + 0x4));
  }
  return (uint)pfVar1;
}

/* ref: FUN_00691360 */
GEN_FRAME byte GEN_THISCALL F_00691360(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x691360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  *(uint *)((int)this + 0xf0) = *(uint *)((int)this + 0xf0) | 2;
  iVar2 = REFG(int, 0x1370b90);
  uVar3 = F_004dcd60(0x10,4,0);
  *(uint *)((int)this + 0x98) = uVar3;
  if (uVar3 != 0) {
    uVar3 = F_004dcd60(0x10,4,0);
    *(uint *)((int)this + 0x9c) = uVar3;
    if (uVar3 != 0) {
      uVar3 = F_004dcd60(0x70,4,0);
      *(uint *)((int)this + 0xa0) = uVar3;
      if (uVar3 != 0) {
        uVar3 = F_004dcd60(0x10,4,7);
        *(uint *)((int)this + 0xa4) = uVar3;
        if (uVar3 != 0) {
          uVar3 = F_004dcd60(0x10,4,0);
          *(uint *)((int)this + 0xa8) = uVar3;
          if ((uVar3 != 0) &&
             (puVar4 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x98) GEN_EDX_ARG,0,0x10,2),
             puVar4 != (undefined4 *)0x0)) {
            *puVar4 = REFG(undefined4, 0x1302e44);
            puVar4[1] = REFG(undefined4, 0x1302e48);
            puVar4[2] = REFG(undefined4, 0x1302e4c);
            puVar4[3] = REFG(undefined4, 0x1302e50);
            *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x98) + 0x24))) = 0;
            puVar4 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x9c) GEN_EDX_ARG,0,0x10,2);
            if (puVar4 != (undefined4 *)0x0) {
              *puVar4 = REFG(undefined4, 0x1302e54);
              puVar4[1] = REFG(undefined4, 0x1302e58);
              puVar4[2] = REFG(undefined4, 0x1302e5c);
              puVar4[3] = REFG(undefined4, 0x1302e60);
              *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x9c) + 0x24))) = 0;
              puVar4 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0xa0) GEN_EDX_ARG,0,0x70,2);
              uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
              if (puVar4 == (undefined4 *)0x0) {
                return 0;
              }
              *puVar4 = REFG(undefined4, 0x1302e54);
              puVar4[1] = REFG(undefined4, 0x1302e58);
              puVar4[2] = REFG(undefined4, 0x1302e5c);
              puVar4[3] = REFG(undefined4, 0x1302e60);
              puVar4[4] = uVar1;
              puVar4[5] = uVar1;
              puVar4[6] = uVar1;
              puVar4[7] = 0;
              puVar4[8] = REFG(undefined4, 0x1302e54);
              puVar4[9] = REFG(undefined4, 0x1302e58);
              puVar4[10] = REFG(undefined4, 0x1302e5c);
              puVar4[0xb] = REFG(undefined4, 0x1302e60);
              puVar4[0xc] = REFG(undefined4, 0x1302e54);
              puVar4[0xd] = REFG(undefined4, 0x1302e58);
              puVar4[0xe] = REFG(undefined4, 0x1302e5c);
              puVar4[0xf] = REFG(undefined4, 0x1302e60);
              puVar4[0x10] = REFG(undefined4, 0x1302e54);
              puVar4[0x11] = REFG(undefined4, 0x1302e58);
              puVar4[0x12] = REFG(undefined4, 0x1302e5c);
              puVar4[0x13] = REFG(undefined4, 0x1302e60);
              puVar4[0x14] = REFG(undefined4, 0x1302e54);
              puVar4[0x15] = REFG(undefined4, 0x1302e58);
              puVar4[0x16] = REFG(undefined4, 0x1302e5c);
              puVar4[0x17] = REFG(undefined4, 0x1302e60);
              puVar4[0x18] = uVar1;
              puVar4[0x19] = uVar1;
              puVar4[0x1a] = uVar1;
              puVar4[0x1b] = 0;
              *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa0) + 0x24))) = 0;
              puVar4 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0xa4) GEN_EDX_ARG,0,0x10,2);
              if (puVar4 == (undefined4 *)0x0) {
                return 0;
              }
              *puVar4 = REFG(undefined4, 0x1302e54);
              puVar4[1] = REFG(undefined4, 0x1302e58);
              puVar4[2] = REFG(undefined4, 0x1302e5c);
              puVar4[3] = REFG(undefined4, 0x1302e60);
              *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa4) + 0x24))) = 0;
              puVar4 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0xa8) GEN_EDX_ARG,0,0x10,2);
              *puVar4 = 0;
              puVar4[1] = 0;
              puVar4[2] = 0;
              puVar4[3] = 0;
              *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa8) + 0x24))) = 0;
              uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar2 + 0x1c) GEN_EDX_ARG,"g_CustomizeParameter");
              *(uint *)((int)this + 0xbc) = uVar3;
              uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar2 + 0x1c) GEN_EDX_ARG,"g_DecalColor");
              *(uint *)((int)this + 0xc0) = uVar3;
              uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar2 + 0x20) GEN_EDX_ARG,"g_SamplerDecal");
              *(uint *)((int)this + 0xc4) = uVar3;
              uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar2 + 0x20) GEN_EDX_ARG,"g_SamplerTileDiffuse");
              *(uint *)((int)this + 200) = uVar3;
              uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar2 + 0x20) GEN_EDX_ARG,"g_SamplerTileNormal");
              *(uint *)((int)this + 0xcc) = uVar3;
              uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar2 + 0x20) GEN_EDX_ARG,"g_SamplerOcclusion");
              *(uint *)((int)this + 0xd0) = uVar3;
              uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar2 + 0x1c) GEN_EDX_ARG,"g_InstanceParameter");
              *(uint *)((int)this + 0xd4) = uVar3;
              uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar2 + 0x1c) GEN_EDX_ARG,"g_MaterialParameterDynamic");
              *(uint *)((int)this + 0xd8) = uVar3;
              uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar2 + 0x1c) GEN_EDX_ARG,"g_SceneParameter");
              *(uint *)((int)this + 0xdc) = uVar3;
              return 1;
            }
          }
        }
      }
    }
  }
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_006916f0 */
GEN_NOFRAME uint GEN_THISCALL F_006916f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6916f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = (int)this + 0x78;
  if (*(int *)((int)this + 0x78) != 0) {
    uVar1 = F_0068ce50(uVar1,(int)this + 0x7c);
  }
  return uVar1;
}

/* ref: FUN_00691710 */
GEN_NOFRAME uint GEN_THISCALL F_00691710(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x691710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = (int)this + 0x80;
  if (*(int *)((int)this + 0x80) != 0) {
    uVar1 = F_0068ce50(uVar1,(int)this + 0x84);
  }
  return uVar1;
}

/* ref: FUN_00691730 */
GEN_NOFRAME uint GEN_THISCALL F_00691730(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x691730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = (int)this + 0x88;
  if (*(int *)((int)this + 0x88) != 0) {
    uVar1 = F_0068ce50(uVar1,(int)this + 0x8c);
  }
  return uVar1;
}

/* ref: FUN_00691770 */
GEN_FRAME uint GEN_THISCALL F_00691770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x691770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8))) + 0xa8 +
           *(int *)((int)this + 0xbc) * 4))) = param_1;
  return param_1;
}

/* ref: FUN_00691870 */
GEN_FRAME uint GEN_THISCALL F_00691870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x691870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  *((undefined4 *)GEN_TOP((uVar1 + 0xa8 + *(int *)((int)this + 0xd4) * 4))) = param_1;
  *((undefined4 *)GEN_TOP((uVar1 + 0xa8 + *(int *)((int)this + 0xdc) * 4))) = *(undefined4 *)((int)this + 0xa8)
  ;
  return uVar1;
}

/* ref: FUN_006918c0 */
GEN_FRAME uint GEN_THISCALL F_006918c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6918c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  if (param_1 == 0) {
    *((undefined4 *)GEN_TOP((uVar1 + 0xa8 + *(int *)((int)this + 0xd8) * 4))) =
         *(undefined4 *)((int)this + 0xa4);
    return uVar1;
  }
  *((int *)GEN_TOP((uVar1 + 0xa8 + *(int *)((int)this + 0xd8) * 4))) = param_1;
  return uVar1;
}

/* ref: FUN_00691910 */
GEN_NOFRAME uint GEN_THISCALL F_00691910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x691910u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float * pfVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  if (param_3 == 0) {
    *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x10b2cd0));
    fVar1 = REFG(float, 0x10944e8);
    param_2[1] = GEN_FLT_TO(param_2[1], REFG(float, 0x10944e8));
    param_2[2] = fVar1;
    param_2[3] = GEN_FLT_TO(param_2[3], REFG(float, 0x10b2ccc));
    return (uint)param_2;
  }
  if ((REFG(undefined4, 0x1488300) & 1) == 0) {
    *(float *)&REFG(undefined, 0x14882f0) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x14882f0), REFG(float, 0x10b2ccc));
    REFG(undefined4, 0x1488300) = REFG(undefined4, 0x1488300) | 1;
    *(float *)&REFG(undefined, 0x14882f4) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x14882f4), REFG(float, 0x109483c));
    *(float *)&REFG(undefined, 0x14882f8) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x14882f8), REFG(float, 0x109483c));
    *(float *)&REFG(undefined, 0x14882fc) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x14882fc), REFG(float, 0x10b2cc8));
  }
  if ((REFG(undefined4, 0x1488300) & 2) == 0) {
    *(float *)&REFG(undefined, 0x14882e0) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x14882e0), REFG(float, 0x10b2cc4));
    *(float *)&REFG(undefined, 0x14882e4) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x14882e4), REFG(float, 0x10a0da0));
    REFG(undefined4, 0x1488300) = REFG(undefined4, 0x1488300) | 2;
    *(float *)&REFG(undefined, 0x14882e8) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x14882e8), REFG(float, 0x10b2cc0));
    *(float *)&REFG(undefined, 0x14882ec) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x14882ec), REFG(float, 0x10b2cbc));
  }
  fVar4 = F_004a3ed0(param_3 + 0x70);
  fVar1 = (float)fVar4;
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  if (*(char *)(REFG(int, 0x1371290) + 0x82c) == '\0') {
    pfVar3 = &(*(float *)(gen_frame + 0x1c));
    fVar4 = (float10)1;
    fVar2 = ((float)GEN_TOF((fVar4 - (float10)*(float *)(param_3 + 0x7c))));
    (*(float *)(gen_frame + 0x18)) = fVar2;
    fVar5 = (float10)fVar2;
    fVar2 = (float)(fVar4 - fVar5 * fVar5);
    (*(float *)(gen_frame + 0x18)) = fVar2;
    fVar5 = (float10)fVar2;
    fVar1 = ((float)GEN_TOF(((float10)fVar1 *
                   ((float10)*(float *)(REFG(int, 0x1371290) + 0x668) * fVar5 + (fVar4 - fVar5)))));
    (*(float *)(gen_frame + 0x18)) = fVar1;
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    fVar1 = ((float)GEN_TOF((((float10)*(float *)&REFG(undefined, 0x1322f74) * (fVar4 - fVar5) +
                    (float10)*(float *)&REFG(undefined, 0x1322f78) * fVar5) * (float10)fVar1)));
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    if (!((float10)fVar1 < (float10)1)) {
      pfVar3 = &(*(float *)(gen_frame + 0x18));
    }
    if (!((float10)REFG(float, 0x1322f6c) < (float10)*pfVar3)) {
      pfVar3 = &REFG(float, 0x1322f6c);
    }
    fVar1 = *pfVar3;
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    fVar1 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0xec) * (float10)fVar1)));
    (*(float *)(gen_frame + 0x18)) = fVar1;
    fVar4 = (float10)fVar1;
    fVar7 = fVar4 * (float10)*(float *)&REFG(undefined, 0x14882f0);
    fVar5 = (float10)*(float *)&REFG(undefined, 0x14882f4) * fVar4;
    fVar6 = (float10)*(float *)&REFG(undefined, 0x14882f8) * fVar4;
    fVar4 = fVar4 * (float10)*(float *)&REFG(undefined, 0x14882fc);
  }
  else {
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    pfVar3 = &(*(float *)(gen_frame + 0x1c));
    (*(float *)(gen_frame + 0x1c)) = (float)((float10)*(float *)&REFG(undefined, 0x1322f70) * (float10)fVar1);
    if (!((float10)(float)((float10)*(float *)&REFG(undefined, 0x1322f70) * (float10)fVar1) < (float10)1)) {
      pfVar3 = &(*(float *)(gen_frame + 0x18));
    }
    if (!((float10)REFG(float, 0x1322f68) < (float10)*pfVar3)) {
      pfVar3 = &REFG(float, 0x1322f68);
    }
    fVar1 = *pfVar3;
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    fVar1 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0xec) * (float10)fVar1)));
    (*(float *)(gen_frame + 0x18)) = fVar1;
    fVar4 = (float10)fVar1;
    fVar7 = fVar4 * (float10)*(float *)&REFG(undefined, 0x14882e0);
    fVar5 = (float10)*(float *)&REFG(undefined, 0x14882e4) * fVar4;
    fVar6 = (float10)*(float *)&REFG(undefined, 0x14882e8) * fVar4;
    fVar4 = fVar4 * (float10)*(float *)&REFG(undefined, 0x14882ec);
  }
  (*(float *)(gen_frame + 0x8)) = (float)fVar6;
  (*(float *)(gen_frame + 0x4)) = (float)fVar5;
  (*(float *)(gen_frame + 0x0)) = (float)fVar7;
  *param_2 = (*(float *)(gen_frame + 0x0));
  param_2[1] = (*(float *)(gen_frame + 0x4));
  param_2[2] = (*(float *)(gen_frame + 0x8));
  param_2[3] = (float)fVar4;
  return (uint)param_2;
}

/* ref: FUN_00691b90 */
GEN_FRAME ushort GEN_THISCALL F_00691b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x691b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  uint uVar2;
  
  uVar2 = (param_1 & 0xffff) % 10;
  if (uVar2 == 1) {
    uVar1 = F_0068c9c0(this GEN_EDX_FWD,param_1,param_2,param_3);
    return uVar1;
  }
  if (uVar2 != 4) {
    uVar1 = F_0068cd40(this GEN_EDX_ARG,param_1,param_2,param_3);
    return uVar1;
  }
  uVar1 = F_0068cc20(this GEN_EDX_ARG,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00691be0 */
GEN_FRAME unsigned int GEN_STDCALL F_00691be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x691be0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  undefined * pvVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_2 != 0) {
    do {
      piVar3 = ((int *)GEN_TOP((*(int *)(param_1 + uVar4 * 4) + 0x88)));
      iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar3), 0);
      if (iVar1 == 2) {
        piVar3 = ((int *)GEN_TOP((*(int *)(param_1 + uVar4 * 4) + 0x8c)));
        iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar3), 0);
        if (iVar1 < 8) {
          pvVar2 = *(undefined * PTR32 *)(param_1 + uVar4 * 4);
          if (*(int *)((int)pvVar2 + 8) == 0x6d646c) {
            F_00502310(pvVar2 GEN_EDX_ARG,0);
          }
          pvVar2 = *(undefined * PTR32 *)(param_1 + uVar4 * 4);
          if (*(int *)((int)pvVar2 + 8) == 0x6d74726c) {
            F_00502b90(pvVar2 GEN_EDX_ARG,0);
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_2);
  }
  return;
}

/* ref: FUN_00691c50 */
GEN_FRAME byte GEN_STDCALL F_00691c50(unsigned int gen_a0)
{
  GEN_ENTER(0x691c50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x88);
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
    if (iVar1 == 2) {
      piVar2 = (int *)(param_1 + 0x8c);
      iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
      return iVar1 < 8;
    }
  }
  return 0;
}

/* ref: FUN_00691c90 */
GEN_NOFRAME byte GEN_THISCALL F_00691c90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x691c90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  piVar6 = *(int * PTR32 *)((int)this + 0xac);
  piVar3 = *(int * PTR32 *)((int)this + 0xb0);
  do {
    if (piVar6 == piVar3) {
      return 1;
    }
    iVar4 = *piVar6;
    piVar1 = (int *)(iVar4 + 0x8c);
    iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
    if (iVar2 != 9) {
      piVar5 = (int *)(iVar4 + 0x88);
      iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar5), 0);
      if (iVar2 != 2) {
        return 0;
      }
      iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
      if (7 < iVar2) {
        return 0;
      }
    }
    piVar6 = piVar6 + 1;
  } while( true );
}

/* ref: FUN_00691d30 */
GEN_FRAME byte F_00691d30(unsigned int gen_a0)
{
  GEN_ENTER(0x691d30u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar3 = (int *)*param_1;
  piVar2 = (int *)param_1[1];
  while( true ) {
    if (piVar3 == piVar2) {
      return 1;
    }
    piVar4 = (int *)(*piVar3 + 0x88);
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar4), 0);
    if (iVar1 != 2) break;
    piVar3 = piVar3 + 1;
  }
  return 0;
}

/* ref: FUN_00691d70 */
GEN_FRAME uint GEN_THISCALL F_00691d70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x691d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (*(int *)((int)this + 0x710) != 0) {
    F_0050c620(*(int *)((int)this + 0x710),0,0);
    *(undefined4 *)((int)this + 0x710) = 0;
  }
  *(uint *)((int)this + 0x6f8) = *(uint *)((int)this + 0x6f8) & 0xfffeffff;
  *(undefined1 *)((int)this + 0x6ec) = 1;
  F_004ff310(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,4,0);
  (*(undefined4 *)(gen_frame + 0x8)) = 0x736b6c62;
  uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"chara/common/animation/skl_material.sklb",0,0,0);
  *(uint *)((int)this + 0x710) = uVar1;
  *(uint *)((int)this + 0x6f8) = *(uint *)((int)this + 0x6f8) | 0x10000;
  *(undefined1 *)((int)this + 0x6ec) = 0;
  return uVar1;
}

/* ref: FUN_00691e00 */
GEN_FRAME uint GEN_THISCALL F_00691e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x691e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  code * pcVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  F_0068d780(this GEN_EDX_FWD,param_1);
  F_004ff310(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,4,0);
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x124);
  (*(undefined4 *)(gen_frame + 0xc)) = 0x706170;
  (*pcVar1)(this,((undefined1 *)(gen_frame + 0x14)),0x104,param_1,param_2);
  uVar2 = F_00513d20(((undefined1 *)(gen_frame + 0x10)),&(*(undefined4 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)),0,0,0);
  *((uint *)GEN_TOP((*(int *)((int)this + 0x714) + param_1 * 4))) = uVar2;
  uVar2 = 1 << ((byte)param_1 & 0x1f);
  *(uint *)((int)this + 0x6f8) = ~uVar2 & *(uint *)((int)this + 0x6f8) | uVar2;
  *(undefined1 *)((int)this + 0x6ec) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00691ec0 */
GEN_NOFRAME byte GEN_THISCALL F_00691ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x691ec0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  if ((((*(int *)(in_ecx + 0x2c0) != 0) || (*(int *)(in_ecx + 0x40c) != 0)) ||
      (*(int *)(in_ecx + 0x6f8) != 0)) ||
     ((bVar1 = 1, (*(byte *)(in_ecx + 0x2c4) & 1) == 0 || (*(int *)(in_ecx + 0x410) == 0)))) {
    bVar1 = 0;
  }
  return bVar1;
}

/* ref: FUN_00691f00 */
GEN_FRAME uint GEN_THISCALL F_00691f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x691f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  
  pvVar3 = *(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x60);
  uVar1 = F_00500af0(pvVar3 GEN_EDX_FWD,param_1);
  uVar1 = F_00500ae0(pvVar3 GEN_EDX_ARG,uVar1 & 0xffff);
  if ((*(uint *)(uVar1 + 8) >> 4 & 1) != 0) {
    uVar1 = F_00b82240((undefined *)((int)this + 0x700) GEN_EDX_ARG,param_1);
    return uVar1;
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x140))(this GEN_EDX_ARG);
  if (uVar1 != 0) {
    pvVar3 = (undefined *)((int)this + 0x418);
    uVar4 = 0;
    do {
      uVar2 = F_009f5550(pvVar3 GEN_EDX_ARG,param_1);
      if (uVar2 != 0) {
        return uVar2;
      }
      uVar4 = uVar4 + 1;
      pvVar3 = (undefined *)((int)pvVar3 + 0x88);
    } while (uVar4 < uVar1);
  }
  return 0;
}

/* ref: FUN_00691f90 */
GEN_FRAME uint GEN_THISCALL F_00691f90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x691f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + (param_1[1] + 0x5c + *(int *)(*param_1 + 0x74) * 4) * 4)));
  if (iVar1 == 0) {
    iVar3 = *(int *)(REFG(int, 0x137129c) + 0xd8);
    iVar1 = *(int *)(REFG(int, 0x137129c) + 0xa4);
  }
  else {
    iVar3 = *(int *)(REFG(int, 0x137129c) + 0xd8);
  }
  *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8))) + 0xa8 +
          iVar3 * 4))) = iVar1;
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xf0))(this GEN_EDX_FWD,param_1);
  return uVar2;
}

/* ref: FUN_00692000 */
GEN_FRAME uint GEN_THISCALL F_00692000(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x692000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  float * pfVar4;
  int iVar5;
  float10 fVar6;
  
  uVar2 = 0;
  uVar3 = *(uint *)((int)this + 0x74);
  (*(int * PTR32 *)(gen_frame + 0x34)) = this;
  (*(uint *)(gen_frame + 0x1c)) = uVar3;
  (*(uint *)(gen_frame + 0x2c)) = 0;
  (*(uint *)(gen_frame + 0x30)) = 0;
  if (uVar3 != 0) {
    (*(int *)(gen_frame + 0x38)) = 0x5c;
    do {
      iVar5 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x38)) - 0x5c + *(int *)((int)this + 0x7c))));
      (*(int *)(gen_frame + 0x28)) = iVar5;
      if (iVar5 != 0) {
        uVar2 = 0;
        (*(uint *)(gen_frame + 0x20)) = *(uint *)(iVar5 + 0x4c);
        if (*(uint *)(iVar5 + 0x4c) != 0) {
          do {
            iVar5 = *((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x28)) + 0x48) + uVar2 * 4)));
            if (iVar5 != 0) {
              iVar5 = *(int *)(iVar5 + 8);
              if (*(char *)(iVar5 + 0xbd) != '\0') {
                (*(uint *)(gen_frame + 0x2c)) = **(uint * PTR32 *)(iVar5 + 0xb4) & 3;
              }
              iVar5 = (*(int *)(gen_frame + 0x38)) + uVar2;
              if (*(int *)((int)this + iVar5 * 4) == 0) {
                uVar3 = F_004dcd60(0x10,2,7);
                *(uint *)((int)this + iVar5 * 4) = uVar3;
              }
              this_00 = *(undefined * PTR32 *)((int)this + iVar5 * 4);
              pfVar4 = (float *)F_004d9920(this_00 GEN_EDX_ARG,0,0x10,2);
              if (pfVar4 != (float *)0x0) {
                ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x34)) + 0xac))((*(int * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x30)),&(*(uint *)(gen_frame + 0x2c)));
                pfVar4[3] = (*(float *)(gen_frame + 0x18));
                fVar1 = (float)((float10)(*(float *)(gen_frame + 0xc)) * (float10)(*(float *)(gen_frame + 0xc)));
                (*(float *)(gen_frame + 0x24)) = fVar1;
                fVar6 = (float10)(*(float *)(gen_frame + 0x18));
                *pfVar4 = (float)(fVar6 * (float10)fVar1);
                fVar1 = (float)((float10)(*(float *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x10)));
                (*(float *)(gen_frame + 0x24)) = fVar1;
                pfVar4[1] = (float)((float10)fVar1 * fVar6);
                fVar1 = (float)((float10)(*(float *)(gen_frame + 0x14)) * (float10)(*(float *)(gen_frame + 0x14)));
                (*(float *)(gen_frame + 0x24)) = fVar1;
                pfVar4[2] = (float)(fVar6 * (float10)fVar1);
                *(undefined4 *)((int)this_00 + 0x24) = 0;
              }
            }
            uVar2 = uVar2 + 1;
            this = (*(int * PTR32 *)(gen_frame + 0x34));
            uVar3 = (*(uint *)(gen_frame + 0x1c));
          } while (uVar2 < (*(uint *)(gen_frame + 0x20)));
        }
      }
      (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) + 4;
      uVar2 = (*(uint *)(gen_frame + 0x30)) + 1;
      (*(uint *)(gen_frame + 0x30)) = uVar2;
    } while (uVar2 < uVar3);
  }
  return uVar2;
}

/* ref: FUN_00692150 */
GEN_FRAME uint GEN_THISCALL F_00692150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x692150u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  int param_6 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  undefined * pvVar2;
  uint uVar3;
  int * piVar4;
  float * pfVar5;
  uint uVar6;
  uint uVar7;
  int in_ecx;
  uint uVar8;
  
  if ((short)param_2 == -1) {
    in_ecx = 0;
  }
  else {
    in_ecx = REFG(int, 0x137127c) + 0x10640 + (param_2 & 0xffff) * 0x18;
  }
  F_00621900(in_ecx GEN_EDX_FWD,&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x18)));
  ((byte *)(gen_frame + 0x0))[8] = *(byte *)(in_ecx + 4);
  pvVar2 = *(undefined * PTR32 *)(param_1 + 0x168);
  ((byte *)(gen_frame + 0x0))[0xc] = *(byte *)(in_ecx + 3);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = pvVar2;
  pfVar5 = (float *)F_004d9920(pvVar2 GEN_EDX_ARG,0,0x30,2);
  if (pfVar5 != (float *)0x0) {
    *pfVar5 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x280) * (float10)*(float *)(param_1 + 0x280))));
    pfVar5[1] = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x284) * (float10)*(float *)(param_1 + 0x284))))
    ;
    pfVar5[2] = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x288) * (float10)*(float *)(param_1 + 0x288))))
    ;
    fVar1 = *(float *)(param_1 + 0x28c);
    pfVar5[3] = fVar1;
    pfVar5[3] = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x10)) * (float10)param_5) * (float10)fVar1)));
    pfVar5[4] = *(float *)(param_1 + 0x2a0);
    pfVar5[5] = *(float *)(param_1 + 0x2a4);
    pfVar5[6] = *(float *)(param_1 + 0x2a8);
    pfVar5[7] = *(float *)(param_1 + 0x2ac);
    pfVar5[8] = *(float *)(param_1 + 0x2b0);
    pfVar5[9] = *(float *)(param_1 + 0x2b4);
    pfVar5[10] = *(float *)(param_1 + 0x2b8);
    pfVar5[0xb] = *(float *)(param_1 + 700);
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x168) + 0x24))) = 0;
  }
  uVar3 = *(uint *)(param_1 + 0x74);
  uVar7 = *(uint *)(param_1 + 0x7c);
  uVar8 = 0;
  (*(uint *)(gen_frame + 0x14)) = uVar7;
  if (uVar3 != 0) {
    do {
      if (*(int *)(uVar7 + uVar8 * 4) != 0) {
        uVar6 = (uVar3 - uVar8) + param_6 & 0x3fffffff | 0x40000000;
        ((byte *)(gen_frame + 0x0))[4] = (char)uVar6;
        ((byte *)(gen_frame + 0x0))[5] = (char)(uVar6 >> 8);
        ((byte *)(gen_frame + 0x0))[6] = (char)(uVar6 >> 0x10);
        ((byte *)(gen_frame + 0x0))[7] = (char)(uVar6 >> 0x18);
        piVar4 = *(int * PTR32 *)(uVar7 + uVar8 * 4);
        ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x14))
                  (piVar4 GEN_EDX_ARG,param_3,(undefined4)gen_fl2bits(param_4),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)),param_1 + 0x30,
                   ((byte *)(gen_frame + 0x0)));
        uVar7 = (*(uint *)(gen_frame + 0x14));
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar3);
  }
  if ((*(float *)(gen_frame + 0x18)) != 0.0) {
    pvVar2 = *(undefined * PTR32 *)(param_1 + 0x16c);
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = pvVar2;
    pfVar5 = (float *)F_004d9920(pvVar2 GEN_EDX_ARG,0,0x30,2);
    uVar8 = 0;
    uVar7 = 0;
    if (pfVar5 != (float *)0x0) {
      *pfVar5 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x280) * (float10)*(float *)(param_1 + 0x280))))
      ;
      pfVar5[1] = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x284) *
                         (float10)*(float *)(param_1 + 0x284))));
      pfVar5[2] = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x288) *
                         (float10)*(float *)(param_1 + 0x288))));
      fVar1 = *(float *)(param_1 + 0x28c);
      pfVar5[3] = fVar1;
      pfVar5[3] = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x18)) * (float10)param_5) * (float10)fVar1)));
      pfVar5[4] = *(float *)(param_1 + 0x2a0);
      pfVar5[5] = *(float *)(param_1 + 0x2a4);
      pfVar5[6] = *(float *)(param_1 + 0x2a8);
      pfVar5[7] = *(float *)(param_1 + 0x2ac);
      pfVar5[8] = *(float *)(param_1 + 0x2b0);
      pfVar5[9] = *(float *)(param_1 + 0x2b4);
      pfVar5[10] = *(float *)(param_1 + 0x2b8);
      pfVar5[0xb] = *(float *)(param_1 + 700);
      uVar7 = *(uint *)(param_1 + 0x16c);
      *(undefined4 *)(uVar7 + 0x24) = 0;
    }
    if (uVar3 != 0) {
      do {
        uVar7 = (*(uint *)(gen_frame + 0x14));
        if (*(int *)((*(uint *)(gen_frame + 0x14)) + uVar8 * 4) != 0) {
          uVar7 = (uVar3 - uVar8) + param_6 & 0x3fffffff | 0x40000000;
          ((byte *)(gen_frame + 0x0))[4] = (char)uVar7;
          ((byte *)(gen_frame + 0x0))[5] = (char)(uVar7 >> 8);
          ((byte *)(gen_frame + 0x0))[6] = (char)(uVar7 >> 0x10);
          ((byte *)(gen_frame + 0x0))[7] = (char)(uVar7 >> 0x18);
          piVar4 = *(int * PTR32 *)((*(uint *)(gen_frame + 0x14)) + uVar8 * 4);
          uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x14))
                            (piVar4 GEN_EDX_ARG,param_3,(undefined4)gen_fl2bits(param_4),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),
                             param_1 + 0x30,((byte *)(gen_frame + 0x0)));
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar3);
    }
  }
  return uVar7;
}

/* ref: FUN_006923b0 */
GEN_FRAME uint F_006923b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6923b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00621a50((undefined *)(REFG(int, 0x137127c) + 0x1061c) GEN_EDX_ARG,(uint)*(ushort *)(param_1 + 0x11a));
  *(undefined2 *)(param_1 + 0x11a) = 0xffff;
  return uVar1;
}

/* ref: FUN_006923e0 */
GEN_NOFRAME uint GEN_THISCALL F_006923e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6923e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  float * pfVar8;
  undefined3 extraout_var = 0;
  uint uVar9;
  uint uVar10;
  float * pfVar11;
  uint uVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar5 = *(uint *)(REFG(int, 0x137127c) + 0x66f4);
  (*(undefined * PTR32 *)(gen_frame + 0x64)) = this;
  (*(uint *)(gen_frame + 0x68)) = uVar5;
  uVar12 = 0;
  if (*(int *)(REFG(int, 0x1371284) + 0x14) != 0) {
    iVar6 = *((int *)GEN_TOP((*(int *)(REFG(int, 0x1371284) + 0x14) + 0x10)));
    (*(float *)(gen_frame + 0x10)) = 0.0;
    (*(float *)(gen_frame + 0x14)) = 0.0;
    (*(float *)(gen_frame + 0x18)) = gen_bits2f(REFG(float, 0x1087f04));
    pfVar8 = (float *)F_004f4130(&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x10)),iVar6 + 0x10);
    fVar1 = *pfVar8;
    fVar2 = pfVar8[1];
    fVar3 = pfVar8[2];
    (*(float *)(gen_frame + 0x78)) = *(float *)((int)this + 0x120);
    (*(float *)(gen_frame + 0x0)) = *(float *)((int)this + 0x120);
    (*(float *)(gen_frame + 0x74)) = *(float *)((int)this + 0x124);
    (*(float *)(gen_frame + 0x4)) = *(float *)((int)this + 0x124);
    fVar4 = *(float *)((int)this + 0x128);
    (*(float *)(gen_frame + 0x10)) = fVar1;
    uVar12 = 0;
    (*(float *)(gen_frame + 0x70)) = fVar4;
    (*(float *)(gen_frame + 0x8)) = fVar4;
    (*(float *)(gen_frame + 0x14)) = fVar2;
    (*(float *)(gen_frame + 0x18)) = fVar3;
    (*(float * PTR32 *)(gen_frame + 0x7c)) = ((float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1090998))));
    pfVar11 = (float *)(uVar5 + 200);
    do {
      (*(float *)(gen_frame + 0x5c)) = pfVar11[-1];
      fVar1 = pfVar11[-2];
      (*(float *)(gen_frame + 0x60)) = fVar1;
      (*(float *)(gen_frame + 0x58)) = *pfVar11;
      fVar13 = (float10)fVar1;
      fVar14 = (float10)pfVar11[-1];
      fVar15 = (float10)*pfVar11;
      fVar1 = ((float)GEN_TOF(((fVar13 * (float10)(*(float *)(gen_frame + 0x10)) + fVar14 * (float10)(*(float *)(gen_frame + 0x14))) +
                     fVar15 * (float10)(*(float *)(gen_frame + 0x18)))));
      (*(float *)(gen_frame + 0x58)) = fVar1;
      if (!((float10)fVar1 <= (float10)0)) {
        fVar1 = ((float)GEN_TOF((fVar15 * (float10)(*(float *)(gen_frame + 0x70)) +
                       ((float10)(*(float *)(gen_frame + 0x78)) * fVar13 + (float10)(*(float *)(gen_frame + 0x74)) * fVar14))));
        (*(float *)(gen_frame + 0x58)) = fVar1;
        if (!((float10)fVar1 - (float10)pfVar11[1] <= (float10)*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 300))) {
          *(undefined1 *)param_1 = 0;
          return (uint)pfVar8;
        }
        bVar7 = F_006af160(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)(pfVar11 - 2),&(*(float *)(gen_frame + 0x6c)));
        pfVar8 = ((float *)GEN_TOP(CONCAT31(extraout_var,bVar7)));
        if ((bVar7 != 0) && ((float10)(*(float *)(gen_frame + 0x6c)) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x7c))))))) {
          (*(float * PTR32 *)(gen_frame + 0x7c)) = ((float *)(uintptr_t)gen_fl2bits((float)((*(float *)(gen_frame + 0x6c)))));
        }
      }
      uVar12 = uVar12 + 1;
      pfVar11 = pfVar11 + 4;
    } while (uVar12 < 6);
    uVar5 = *(uint *)(REFG(undefined4, 0x1371280) + 0x24);
    uVar10 = 0;
    fVar1 = ((float)GEN_TOF((-(float10)*(float *)((*(uint *)(gen_frame + 0x68)) + 0xcc) - (float10)*(float *)((*(uint *)(gen_frame + 0x68)) + 0xac))));
    (*(float *)(gen_frame + 0x58)) = fVar1;
    fVar13 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x7c)))));
    (*(float *)(gen_frame + 0x30)) = (float)(fVar13 * (float10)(*(float *)(gen_frame + 0x10)));
    (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x14)) * fVar13);
    (*(float *)(gen_frame + 0x38)) = (float)(fVar13 * (float10)(*(float *)(gen_frame + 0x18)));
    fVar2 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x78)) + (float10)(float)(fVar13 * (float10)(*(float *)(gen_frame + 0x10))))));
    (*(float *)(gen_frame + 0x20)) = fVar2;
    fVar3 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x74)) + (float10)(float)((float10)(*(float *)(gen_frame + 0x14)) * fVar13))));
    (*(float *)(gen_frame + 0x24)) = fVar3;
    fVar4 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x70)) + (float10)(float)(fVar13 * (float10)(*(float *)(gen_frame + 0x18))))));
    (*(float *)(gen_frame + 0x28)) = fVar4;
    uVar12 = REFG(undefined4, 0x1371280);
    if (uVar5 != 0) {
      uVar12 = *param_1;
      bVar7 = 0;
      (*(float *)(gen_frame + 0x60)) = gen_bits2f(uVar12);
      (*(float * PTR32 *)(gen_frame + 0x7c)) = (float *)(REFG(undefined4, 0x1371280) + 0x3c);
      do {
        uVar9 = 3 << (bVar7 & 0x1f);
        if ((uVar12 & uVar9) != 0) {
          if ((int)uVar10 < (int)uVar5) {
            fVar16 = *(*(float * PTR32 *)(gen_frame + 0x7c));
          }
          else {
            fVar16 = *((float *)GEN_TOP((REFG(undefined4, 0x1371280) + (uVar5 + 0xf) * 4)));
          }
          (*(float *)(gen_frame + 0x6c)) = fVar16;
          fVar13 = (float10)fVar16 + (float10)fVar1;
          fVar17 = gen_bits2f(*(uint *)((*(uint *)(gen_frame + 0x68)) + 0xc0) ^ REFG(uint, 0x10920d0));
          (*(float *)(gen_frame + 0x5c)) = fVar17;
          (*(float *)(gen_frame + 0x30)) = fVar17;
          fVar18 = gen_bits2f(*(uint *)((*(uint *)(gen_frame + 0x68)) + 0xc4) ^ REFG(uint, 0x10920d0));
          (*(float *)(gen_frame + 0x34)) = fVar18;
          (*(float *)(gen_frame + 0x54)) = fVar18;
          fVar19 = gen_bits2f(*(uint *)((*(uint *)(gen_frame + 0x68)) + 200) ^ REFG(uint, 0x10920d0));
          (*(float *)(gen_frame + 0x38)) = fVar19;
          (*(float *)(gen_frame + 0x50)) = fVar19;
          fVar16 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x70)) * (float10)fVar19 +
                          ((float10)(*(float *)(gen_frame + 0x74)) * (float10)fVar18 + (float10)(*(float *)(gen_frame + 0x78)) * (float10)fVar17
                          ))));
          (*(float *)(gen_frame + 0x58)) = fVar16;
          fVar16 = (float)((float10)fVar16 - fVar13);
          (*(float *)(gen_frame + 0x4c)) = fVar16;
          (*(float *)(gen_frame + 0x10)) = fVar17;
          (*(float *)(gen_frame + 0x14)) = fVar18;
          (*(float *)(gen_frame + 0x18)) = fVar19;
          fVar17 = ((float)GEN_TOF(((float10)fVar19 * (float10)fVar4 +
                          ((float10)fVar17 * (float10)fVar2 + (float10)fVar18 * (float10)fVar3))));
          (*(float *)(gen_frame + 0x58)) = fVar17;
          fVar17 = (float)((float10)fVar17 - fVar13);
          (*(float *)(gen_frame + 0x58)) = fVar17;
          fVar13 = (float10)fVar17;
          fVar14 = (float10)fVar16;
          uVar9 = (*(uint *)(gen_frame + 0x68));
          if (!(fVar14 * fVar13 < (float10)0)) {
            (*(float *)(gen_frame + 0x4c)) = ((float)GEN_TOF(-(float10)*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 300)));
            fVar15 = (float10)((float)GEN_TOF(-(float10)*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 300)));
            uVar9 = (uint)((!GEN_ISNAN(fVar15) && !GEN_ISNAN(fVar13)) && !(fVar15 < fVar13));
            if (fVar14 <= fVar15 && ((!GEN_ISNAN(fVar15) && !GEN_ISNAN(fVar13)) && !(fVar15 < fVar13))) {
              *param_1 = ~(0xff << ((char)uVar10 * '\x02' + 2U & 0x1f) & 0xffU) & uVar12;
              return (uint)param_1;
            }
          }
        }
        (*(float * PTR32 *)(gen_frame + 0x7c)) = (*(float * PTR32 *)(gen_frame + 0x7c)) + 1;
        uVar10 = uVar10 + 1;
        bVar7 = bVar7 + 2;
      } while (uVar10 < uVar5);
      return uVar9;
    }
  }
  return uVar12;
}

/* ref: FUN_00692770 */
GEN_NOFRAME uint GEN_THISCALL F_00692770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x692770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint * puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float10 fVar9;
  float * pfVar10;
  uint uVar11;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  iVar5 = *(int *)(REFG(int, 0x1371280) + 0x78 + param_1 * 4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = param_2;
  puVar6 = *(uint * PTR32 *)(iVar5 + 0x10);
  uVar11 = *puVar6;
  uVar1 = puVar6[1];
  uVar2 = puVar6[2];
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x54)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x68)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(uint *)(gen_frame + 0x70)) = uVar11 ^ REFG(uint, 0x10920d0);
  (*(uint *)(gen_frame + 0x74)) = uVar1 ^ REFG(uint, 0x10920d0);
  (*(uint *)(gen_frame + 0x78)) = uVar2 ^ REFG(uint, 0x10920d0);
  uVar11 = puVar6[4];
  (*(float *)(gen_frame + 0x30)) = gen_bits2f(uVar11 ^ REFG(uint, 0x10920d0));
  (*(uint *)(gen_frame + 0x34)) = puVar6[5] ^ REFG(uint, 0x10920d0);
  uVar1 = puVar6[6];
  (*(uint *)(gen_frame + 0x38)) = uVar1 ^ REFG(uint, 0x10920d0);
  uVar2 = puVar6[7];
  (*(float *)(gen_frame + 0x24)) = gen_bits2f(puVar6[5] ^ REFG(uint, 0x10920d0));
  (*(uint *)(gen_frame + 0x3c)) = uVar2;
  (*(float *)(gen_frame + 0x20)) = gen_bits2f(uVar11 ^ REFG(uint, 0x10920d0));
  (*(float *)(gen_frame + 0x28)) = gen_bits2f(uVar1 ^ REFG(uint, 0x10920d0));
  (*(uint *)(gen_frame + 0x2c)) = uVar2;
  F_004efe70(&(*(undefined4 *)(gen_frame + 0x40)) GEN_EDX_FWD,(uint)&(*(float *)(gen_frame + 0x20)));
  fVar9 = (float10)1;
  (*(float *)(gen_frame + 0x20)) = (float)(fVar9 / (float10)REFG(float, 0x1302c60));
  (*(float *)(gen_frame + 0x24)) = (float)(fVar9 / (float10)REFG(float, 0x1302c64));
  (*(float *)(gen_frame + 0x28)) = (float)(fVar9 / (float10)REFG(float, 0x1302c68));
  (*(float *)(gen_frame + 0x0)) = (float)(fVar9 / (float10)REFG(float, 0x1302c60));
  (*(float *)(gen_frame + 0x4)) = (float)(fVar9 / (float10)REFG(float, 0x1302c64));
  (*(float *)(gen_frame + 0x8)) = (float)(fVar9 / (float10)REFG(float, 0x1302c68));
  F_0065f020(&(*(undefined4 *)(gen_frame + 0x40)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)));
  uVar7 = *(undefined4 *)((int)this + 0x124);
  uVar8 = *(undefined4 *)((int)this + 0x128);
  (*(float *)(gen_frame + 0x30)) = *(float *)((int)this + 0x120);
  (*(uint *)(gen_frame + 0x34)) = uVar7;
  (*(uint *)(gen_frame + 0x38)) = uVar8;
  (*(uint *)(gen_frame + 0x3c)) = *(undefined4 *)((int)this + 300);
  pfVar10 = (float *)F_004ee970(&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x40)));
  fVar3 = pfVar10[1];
  fVar4 = pfVar10[2];
  (*(float *)(gen_frame + 0x30)) = *pfVar10;
  (*(float *)(gen_frame + 0x20)) = REFG(float, 0x1375ac0);
  (*(float *)(gen_frame + 0x24)) = gen_bits2f(REFG(float, 0x1375ac4));
  (*(uint *)(gen_frame + 0x34)) = (uint)gen_fl2bits(fVar3);
  (*(uint *)(gen_frame + 0x38)) = (uint)gen_fl2bits(fVar4);
  (*(float *)(gen_frame + 0x28)) = gen_bits2f(REFG(float, 0x1375ac8));
  (*(uint *)(gen_frame + 0x2c)) = *(undefined4 *)(iVar5 + 0x80);
  uVar11 = F_0065f740(&(*(float *)(gen_frame + 0x20)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x30)));
  if ((char)uVar11 == '\0') {
    *(*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = 0;
  }
  else {
    uVar11 = F_006b1f90((undefined *)(iVar5 + 0x30) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x30)));
    if ((char)uVar11 == '\0') {
      *(*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = 0;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90) GEN_EDX_ARG);
  return uVar11;
}

/* ref: FUN_00692990 */
GEN_FRAME uint GEN_THISCALL F_00692990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x692990u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  int * piVar1;
  byte bVar2;
  uint * puVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  int local_c;
  
  piVar1 = (int *)(param_1 * 0x358 + REFG(int, 0x137127c));
  local_c = *(int *)((int)this + 0x74);
  puVar3 = *(uint * PTR32 *)((int)this + 0x7c);
  param_1 = 0;
  if (local_c == 0) {
    *param_3 = 0;
    return (uint)param_3;
  }
  do {
    uVar5 = 0;
    if (*puVar3 != 0) {
      uVar6 = *(uint *)(*puVar3 + 0x14) & *param_3;
      uVar5 = 0;
      piVar4 = piVar1;
      do {
        piVar4 = piVar4 + 0xd;
        if (((param_2 >> ((char)uVar5 * '\x02' & 0x1fU) & 1) != 0) &&
           (bVar2 = F_006556f0((undefined *)*puVar3 GEN_EDX_FWD,*piVar4 + 0xc0), bVar2 == 0)) {
          uVar6 = uVar6 & ~(3 << ((char)uVar5 * '\x02' & 0x1fU));
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x10);
      uVar5 = *puVar3;
      param_1 = param_1 | uVar6;
      *(uint *)(uVar5 + 0x14) = uVar6;
    }
    puVar3 = puVar3 + 1;
    local_c = local_c - 1;
  } while (local_c != 0);
  *param_3 = param_1;
  return uVar5;
}

/* ref: FUN_00692ab0 */
GEN_NOFRAME uint GEN_THISCALL F_00692ab0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x692ab0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  float fVar6;
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  (*(uint *)(gen_frame + 0x5c)) = uVar4;
  iVar2 = *(int *)(param_1 + 0x164);
  if (iVar2 != 0) {
    iVar3 = *(int *)(REFG(undefined4, 0x1371280) + 0x24);
    if (iVar3 - 1 < iVar3) {
      fVar6 = *((float *)GEN_TOP((REFG(undefined4, 0x1371280) + 0x3c + (iVar3 - 1) * 4)));
    }
    else {
      fVar6 = *(float *)(REFG(undefined4, 0x1371280) + 0x3c + iVar3 * 4);
    }
    uVar4 = REFG(undefined4, 0x1371280);
    if (!((float10)param_2 < (float10)fVar6 * (float10)fVar6)) {
      fVar6 = *(float *)(param_1 + 0x120);
      uVar1 = *(undefined4 *)(param_1 + 300);
      fVar5 = (float10)0;
      (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(float *)(gen_frame + 0x40)) = (float)((float10)fVar6 + fVar5);
      (*(undefined4 *)(gen_frame + 0x24)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined4 *)(gen_frame + 0x34)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = uVar1;
      (*(float *)(gen_frame + 0x44)) = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x124) + fVar5)));
      (*(float *)(gen_frame + 0x48)) = ((float)GEN_TOF((fVar5 + (float10)*(float *)(param_1 + 0x128))));
      if (*(int *)(param_1 + 0x160) == 0) {
        (*(float *)(gen_frame + 0xc)) = REFG(float, 0x1087f04);
      }
      else {
        fVar5 = (float10)((float)GEN_TOF(((float10)1 - (float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x160) + 0x7c))))))
        ;
        (*(float *)(gen_frame + 0xc)) = (float)((float10)1 - fVar5 * fVar5);
      }
      uVar4 = F_006570d0(iVar2 GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x10)),(*(float *)(gen_frame + 0xc)));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00692bd0 */
GEN_NOFRAME byte GEN_THISCALL F_00692bd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x692bd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar2 = (uint *)((int)this + 0x168);
  do {
    uVar1 = F_004dcd60(0x30,2,0);
    *puVar2 = uVar1;
    if (uVar1 == 0) {
      return 0;
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (uVar3 < 2);
  return 1;
}

/* ref: FUN_00692c10 */
GEN_NOFRAME uint GEN_THISCALL F_00692c10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x692c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  byte bVar2;
  uint uVar3;
  undefined * this_00;
  undefined3 extraout_var = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0xe4) != (undefined *)0x0) {
    F_00b84960(*(undefined * PTR32 *)((int)this + 0xe4) GEN_EDX_FWD);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0xe4);
    if (puVar1 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0xe4) = 0;
    }
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) GEN_EDX_ARG,0x150,0x10);
  if (uVar3 == 0) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = (undefined *)F_00b84860(uVar3 GEN_EDX_ARG);
  }
  *(undefined * PTR32 *)((int)this + 0xe4) = this_00;
  uVar3 = 0;
  if (this_00 != (undefined *)0x0) {
    bVar2 = F_00b83750(this_00 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x78));
    uVar3 = CONCAT31(extraout_var,bVar2);
  }
  return uVar3;
}

/* ref: FUN_00692c80 */
GEN_FRAME unsigned int GEN_THISCALL F_00692c80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x692c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  
  (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) & 0xffffff00;
  if (*(int *)((int)this + 0x78) != 0) {
    uVar6 = 0;
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x140))(this GEN_EDX_FWD);
    if (uVar5 != 0) {
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)((int)this + 0x418);
      do {
        if ((*((ushort *)GEN_TOP((*(int *)((int)this + 0x2d0) + 0x40))) >> ((byte)uVar6 & 0x1f) & 1) != 0) {
          uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2d0) + uVar6 * 4)));
          if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
            F_0061eec0(*(undefined * PTR32 *)((int)this + 0x78) GEN_EDX_ARG,uVar6);
            F_00622fe0(*(undefined * PTR32 *)((int)this + 0x78) GEN_EDX_ARG,uVar6 & 0xffff,uVar1);
          }
          F_009f0670((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar1);
          bVar3 = '\x01' << ((byte)uVar6 & 0x1f);
          (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),~bVar3 & (byte)(*(uint *)(gen_frame + 0x8)) | bVar3);
        }
        (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x88);
        uVar6 = uVar6 + 1;
        uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x140))(this GEN_EDX_ARG);
      } while (uVar6 < uVar5);
    }
    uVar6 = 0;
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x140))(this GEN_EDX_ARG);
    if (uVar5 != 0) {
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x28;
      do {
        if ((((*((ushort *)GEN_TOP((*(int *)((int)this + 0x2d0) + 0x40))) >> ((char)uVar6 + 10U & 0x1f) & 1) !=
              0) && (iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + *(int *)((int)this + 0x2d0)))), iVar2 != 0)) &&
           (*(undefined * PTR32 *)((int)this + 0xe4) != (undefined *)0x0)) {
          F_00b84d90(*(undefined * PTR32 *)((int)this + 0xe4) GEN_EDX_ARG,uVar6);
          F_00b84de0(*(undefined * PTR32 *)((int)this + 0xe4) GEN_EDX_ARG,iVar2,uVar6);
        }
        (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 4);
        uVar6 = uVar6 + 1;
        uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x140))(this GEN_EDX_ARG);
      } while (uVar6 < uVar5);
    }
    if ((byte)(*(uint *)(gen_frame + 0x8)) != '\0') {
      if (((*(uint *)(gen_frame + 0x8)) & 1) != 0) {
        if (*(undefined * PTR32 *)((int)this + 0x78) == (undefined *)0x0) {
          uVar4 = 0xffff;
        }
        else {
          uVar5 = F_00623160(*(undefined * PTR32 *)((int)this + 0x78) GEN_EDX_ARG,"n_hara");
          uVar4 = (undefined2)uVar5;
        }
        *(undefined2 *)((int)this + 0x11c) = uVar4;
      }
      F_009f0b10(*(int *)((int)this + 0x78) + 0xa0 GEN_EDX_ARG);
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xd8))(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x8)));
    }
  }
  return;
}

/* ref: FUN_00692e40 */
GEN_NOFRAME byte GEN_THISCALL F_00692e40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x692e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  float * pfVar7;
  
  (*(uint *)(gen_frame + 0xdc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xe0);
  if ((*(undefined * PTR32 *)((int)this + 0x78) == (undefined *)0x0) || (*(ushort *)((int)this + 0x11c) == 0xffff)) {
    bVar4 = F_006aea80((undefined *)((int)this + 0x120) GEN_EDX_FWD,(undefined4 *)((int)this + 0x130));
    if (bVar4 == 0) {
      *(undefined4 *)((int)this + 0x120) = *(undefined4 *)((int)this + 0x130);
      *(undefined4 *)((int)this + 0x124) = *(undefined4 *)((int)this + 0x134);
      *(undefined4 *)((int)this + 0x128) = *(undefined4 *)((int)this + 0x138);
      *(undefined4 *)((int)this + 300) = *(undefined4 *)((int)this + 0x13c);
      F_00c47745((*(uint *)(gen_frame + 0xdc)) ^ (uint)(uint)(gen_frame + 0xe0) GEN_EDX_ARG);
      return 1;
    }
  }
  else {
    uVar5 = F_0064ce50(*(undefined * PTR32 *)((int)this + 0x78) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x50)),(uint)*(ushort *)((int)this + 0x11c))
    ;
    uVar6 = F_00623320(*(undefined * PTR32 *)((int)this + 0x78) GEN_EDX_ARG,(uint)*(ushort *)((int)this + 0x11c));
    F_004ef350(((undefined1 *)(gen_frame + 0x90)),uVar6,uVar5);
    F_005fe770(((undefined1 *)(gen_frame + 0x90)) GEN_EDX_ARG,(uint)((float *)(gen_frame + 0x30)));
    pfVar7 = ((float *)(gen_frame + 0x30)) + 1;
    if (!((float10)((float *)(gen_frame + 0x30))[2] < (float10)((float *)(gen_frame + 0x30))[1])) {
      pfVar7 = ((float *)(gen_frame + 0x30)) + 2;
    }
    if ((float10)*pfVar7 < (float10)((float *)(gen_frame + 0x30))[0]) {
      pfVar7 = ((float *)(gen_frame + 0x30));
    }
    (*(float *)(gen_frame + 0x2c)) = *pfVar7;
    if (*(double *)&REFG(undefined, 0x10ac2d0) < (double)*pfVar7) {
      bVar4 = F_0068e000(this GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0xdc)) ^ (uint)(uint)(gen_frame + 0xe0) GEN_EDX_ARG);
      return bVar4;
    }
    (*(float *)(gen_frame + 0x4c)) = *(float *)((int)this + 0x13c);
    pfVar7 = (float *)F_004ee970(&(*(float *)(gen_frame + 0x10)),(int)this + 0x130,((undefined1 *)(gen_frame + 0x90)));
    fVar1 = *pfVar7;
    fVar2 = pfVar7[1];
    fVar3 = pfVar7[2];
    (*(float *)(gen_frame + 0x1c)) = (float)((float10)(*(float *)(gen_frame + 0x4c)) * (float10)(*(float *)(gen_frame + 0x2c)));
    ((float *)(gen_frame + 0x30))[0] = fVar1;
    ((float *)(gen_frame + 0x30))[1] = fVar2;
    ((float *)(gen_frame + 0x30))[2] = fVar3;
    (*(float *)(gen_frame + 0x10)) = fVar1;
    (*(float *)(gen_frame + 0x14)) = fVar2;
    (*(float *)(gen_frame + 0x18)) = fVar3;
    pfVar7 = (float *)F_00687590(((undefined1 *)(gen_frame + 0x0)),(float *)((int)this + 0x120),&(*(float *)(gen_frame + 0x10)));
    fVar1 = ((float)GEN_TOF(((float10)pfVar7[3] * (float10)pfVar7[3] +
                   ((float10)pfVar7[2] * (float10)pfVar7[2] +
                   ((float10)*pfVar7 * (float10)*pfVar7 + (float10)pfVar7[1] * (float10)pfVar7[1])))))
    ;
    (*(float *)(gen_frame + 0x4c)) = fVar1;
    if (*(double *)&REFG(undefined, 0x10b2cd8) < (double)fVar1) {
      *(float *)((int)this + 0x120) = ((float *)(gen_frame + 0x30))[0];
      *(float *)((int)this + 0x124) = ((float *)(gen_frame + 0x30))[1];
      *(float *)((int)this + 0x128) = ((float *)(gen_frame + 0x30))[2];
      *(float *)((int)this + 300) = (*(float *)(gen_frame + 0x1c));
      F_00c47745((*(uint *)(gen_frame + 0xdc)) ^ (uint)(uint)(gen_frame + 0xe0) GEN_EDX_ARG);
      return 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xdc)) ^ (uint)(uint)(gen_frame + 0xe0) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_006930a0 */
GEN_NOFRAME byte GEN_THISCALL F_006930a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6930a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (((*(byte *)(REFG(int, 0x137129c) + 0xf0) & 1) != 0) && (*(int *)((int)this + 0x2c8) == 0)) {
    if (*(int *)((int)this + 0x78) != 0) {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 200))(this GEN_EDX_FWD);
      if (uVar1 - 1 < 3) {
        if ((*(uint *)((int)this + 0x71c) >> 7 & 1) != 0) {
          F_0064d6d0(*(undefined * PTR32 *)((int)this + 0x78) GEN_EDX_ARG);
        }
        if ((*(uint *)((int)this + 0x71c) >> 8 & 1) != 0) {
          F_0063a460(*(undefined * PTR32 *)((int)this + 0x78) GEN_EDX_ARG);
        }
        if ((*(uint *)((int)this + 0x71c) >> 9 & 1) != 0) {
          F_0062bb20(*(undefined * PTR32 *)((int)this + 0x78) GEN_EDX_ARG);
        }
      }
    }
    return 1;
  }
  return 0;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf85 */
GEN_FRAME uint GEN_THISCALL F_00693120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x693120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00654fd0(param_1,*(undefined4 *)(this + 0x78),this + 0xe8,this + 0xf8,param_2);
  if (uVar1 == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2d8) != 0) {
    *(undefined4 *)(uVar1 + 0x70) = 0;
    return uVar1;
  }
  *(undefined4 *)(uVar1 + 0x70) = *(undefined4 *)(this + 0x160);
  return uVar1;
}

/* ref: FUN_00693210 */
GEN_FRAME byte GEN_THISCALL F_00693210(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x693210u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  float10 fVar2;
  
  bVar1 = *(byte *)(REFG(int, 0x1371278) + 0x10);
  if (((bVar1 == 0xff) && (bVar1 = *(byte *)(in_ecx + 0x66), bVar1 == 0xff)) &&
     (fVar2 = (float10)((float)GEN_TOF(((float10)*(double *)&REFG(undefined, 0x1088120) + (float10)*(float *)(in_ecx + 300)
                              ))), bVar1 = fVar2 * fVar2 < (float10)param_2,
     fVar2 = (float10)((float)GEN_TOF(((float10)*(float *)(in_ecx + 300) + (float10)*(double *)&REFG(undefined, 0x10b2ce0))))
     , fVar2 * fVar2 < (float10)param_2)) {
    return bVar1 + 1;
  }
  return bVar1;
}

/* ref: FUN_00693280 */
GEN_FRAME uint GEN_THISCALL F_00693280(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x693280u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  float10 fVar3;
  undefined3 uVar2;
  
  uVar2 = (undefined3)((uint)REFG(int, 0x1371278) >> 8);
  uVar1 = CONCAT31(uVar2,*(char *)(REFG(int, 0x1371278) + 0x11));
  if ((*(char *)(REFG(int, 0x1371278) + 0x11) == -1) &&
     (uVar1 = CONCAT31(uVar2,*(char *)(in_ecx + 0x66)), *(char *)(in_ecx + 0x66) == -1)) {
    uVar1 = in_ecx & 0xffffff00;
    fVar3 = (float10)((float)GEN_TOF(((float10)*(double *)&REFG(undefined, 0x10948e8) * (float10)*(float *)(in_ecx + 300) +
                            (float10)*(double *)&REFG(undefined, 0x10947f0))));
    if (fVar3 * fVar3 < (float10)param_2) {
      uVar1 = CONCAT31((int3)(in_ecx >> 8),1);
    }
    fVar3 = (float10)((float)GEN_TOF(((float10)*(double *)&REFG(undefined, 0x10947f0) * (float10)*(float *)(in_ecx + 300) +
                            (float10)REFG(double, 0x10944b8))));
    if (fVar3 * fVar3 < (float10)param_2) {
      return uVar1 + 1;
    }
    uVar1 = CONCAT31(uVar2,(char)uVar1);
  }
  return uVar1;
}

/* ref: FUN_00693300 */
GEN_NOFRAME uint GEN_THISCALL F_00693300(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x693300u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined * this;
  float10 fVar6;
  float fVar7;
  
  if (param_1[0x1e] != 0) {
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x2c))(param_1 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
    (*(float *)(gen_frame + 0x14)) = *(float *)(uVar5 + 0xc);
    fVar6 = (float10)*(float *)(uVar5 + 0xc);
    fVar7 = (float)(fVar6 * fVar6);
    (*(float *)(gen_frame + 0x14)) = fVar7;
    fVar7 = (float)((float10)param_2 - (float10)fVar7);
    (*(float *)(gen_frame + 0x14)) = fVar7;
    if ((float10)fVar7 < (float10)0) {
      fVar7 = 0.0;
    }
    iVar2 = param_1[0x1e];
    *(float *)(iVar2 + 0xa4) = fVar7;
    *(undefined1 *)(iVar2 + 0xa9) = 1;
  }
  this = (undefined *)(REFG(int, 0x137127c) + 0x1061c);
  if ((*(ushort *)((int)param_1 + 0x11a) == 0xffff) ||
     (iVar2 = REFG(int, 0x137127c) + 0x10640 + (uint)*(ushort *)((int)param_1 + 0x11a) * 0x18, iVar2 == 0))
  {
    uVar5 = F_00693180(param_1 GEN_EDX_ARG,param_2);
    cVar1 = (char)param_1[0x46];
    cVar4 = (char)uVar5;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x1b)) + 0)) = cVar4;
    (*(undefined4 *)(gen_frame + 0x1b)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x1b)), 1, 3),cVar4);
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x14)) + 0)) = cVar1;
    (*(float *)(gen_frame + 0x14)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x14)), 1, 3),cVar1));
    *(char *)(param_1 + 0x46) = cVar4;
    if (cVar1 != cVar4) {
      if (cVar1 == -2) {
        uVar5 = F_00621970(this GEN_EDX_ARG,2,1,param_1,(*(undefined4 *)(gen_frame + 0x1b)),0xfe);
        *(short *)((int)param_1 + 0x11a) = (short)uVar5;
        if ((short)uVar5 == -1) {
          *(undefined1 *)(param_1 + 0x46) = 0xfe;
          return uVar5;
        }
      }
      else {
        bVar3 = F_0068e040(param_1 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x1b)));
        (*(byte *)(gen_frame + 0x1f)) = bVar3;
        bVar3 = F_0068e040(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x14))));
        uVar5 = CONCAT31(extraout_var_01,bVar3);
        if (((*(byte *)(gen_frame + 0x1f)) != 0) && (bVar3 != 0)) {
          uVar5 = F_00621970(this GEN_EDX_ARG,2,0,param_1,(*(undefined4 *)(gen_frame + 0x1b)),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x14))));
          *(short *)((int)param_1 + 0x11a) = (short)uVar5;
          if ((short)uVar5 == -1) {
            *(char *)(param_1 + 0x46) = (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x14)) + 0));
          }
        }
      }
    }
  }
  else {
    if (*(char *)(iVar2 + 2) == '\x01') {
      (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x14)) + 0)) = *(undefined1 *)(iVar2 + 3);
      (*(float *)(gen_frame + 0x14)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x14)), 1, 3),*(undefined1 *)(iVar2 + 3)));
      bVar3 = F_0068e040(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x14))));
      uVar5 = CONCAT31(extraout_var,bVar3);
    }
    else {
      (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x14)) + 0)) = *(undefined1 *)(iVar2 + 3);
      (*(float *)(gen_frame + 0x14)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x14)), 1, 3),*(undefined1 *)(iVar2 + 3)));
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x1b)) + 0)) = *(undefined1 *)(iVar2 + 4);
      (*(undefined4 *)(gen_frame + 0x1b)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x1b)), 1, 3),*(undefined1 *)(iVar2 + 4));
      bVar3 = F_0068e040(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x14))));
      (*(byte *)(gen_frame + 0x1f)) = bVar3;
      bVar3 = F_0068e040(param_1 GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x1b)));
      uVar5 = CONCAT31(extraout_var_00,bVar3);
      if ((*(byte *)(gen_frame + 0x1f)) == 0) goto LAB_006933ee;
    }
    if ((char)uVar5 == '\0') {
LAB_006933ee: ;
      uVar5 = F_00693180(param_1 GEN_EDX_ARG,param_2);
      *(char *)(param_1 + 0x46) = (char)uVar5;
      F_00621a50(this GEN_EDX_ARG,(uint)*(ushort *)((int)param_1 + 0x11a));
      *(undefined2 *)((int)param_1 + 0x11a) = 0xffff;
      return 0xffff;
    }
  }
  return uVar5;
}

/* ref: FUN_006934f0 */
GEN_FRAME uint GEN_THISCALL F_006934f0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x6934f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00693180(param_1 GEN_EDX_FWD,param_2);
  uVar2 = (uint)*(ushort *)(param_1 + 0x11a);
  *(char *)(param_1 + 0x118) = (char)uVar1;
  uVar1 = uVar2;
  if ((*(ushort *)(param_1 + 0x11a) != 0xffff) &&
     (uVar1 = 0, REFG(int, 0x137127c) + 0x10640 + uVar2 * 0x18 != 0)) {
    uVar1 = F_00621a50((undefined *)(REFG(int, 0x137127c) + 0x1061c) GEN_EDX_ARG,uVar2);
    *(undefined2 *)(param_1 + 0x11a) = 0xffff;
  }
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::VfxInstanceListenner::vf1 */
GEN_NOFRAME byte GEN_THISCALL F_00693550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x693550u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int * piVar10;
  int * piVar11;
  
  (*(uint *)(gen_frame + 0x10c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x110);
  piVar10 = *(int * PTR32 *)(this + 4);
  if (param_2 == 0) {
    fVar6 = (float10)0;
    iVar9 = piVar10[0x15];
    (*(float *)(gen_frame + 0xf0)) = (float)fVar6;
    (*(int *)(gen_frame + 0xc0)) = piVar10[0x14];
    (*(float *)(gen_frame + 0xf4)) = (float)fVar6;
    (*(float *)(gen_frame + 0xf8)) = (float)fVar6;
    (*(int *)(gen_frame + 0xc4)) = 0;
    (*(int *)(gen_frame + 0xc8)) = 0;
    (*(int *)(gen_frame + 0xd0)) = 0;
    (*(int *)(gen_frame + 0xd8)) = 0;
    (*(int *)(gen_frame + 0xe0)) = 0;
    (*(int *)(gen_frame + 0xe4)) = 0;
    (*(int *)(gen_frame + 0xd4)) = iVar9;
    (*(int *)(gen_frame + 0xe8)) = piVar10[0x16];
    F_004efe70(&(*(int *)(gen_frame + 0xc0)) GEN_EDX_FWD,(uint)(piVar10 + 0x10));
    fVar1 = gen_bits2f(piVar10[0xc]);
    fVar6 = (float10)(*(float *)(gen_frame + 0xf0));
    (*(float *)(gen_frame + 0xf0)) = (float)((float10)fVar1 + fVar6);
    fVar2 = gen_bits2f(piVar10[0xd]);
    fVar4 = (float10)(*(float *)(gen_frame + 0xf4));
    (*(float *)(gen_frame + 0xf4)) = (float)((float10)fVar2 + fVar4);
    fVar3 = gen_bits2f(piVar10[0xe]);
    *param_1 = (*(int *)(gen_frame + 0xc0));
    fVar5 = (float10)(*(float *)(gen_frame + 0xf8));
    param_1[1] = (*(int *)(gen_frame + 0xc4));
    param_1[2] = (*(int *)(gen_frame + 0xc8));
    (*(float *)(gen_frame + 0xf8)) = (float)((float10)fVar3 + fVar5);
    param_1[4] = (*(int *)(gen_frame + 0xd0));
    param_1[3] = 0;
    param_1[5] = (*(int *)(gen_frame + 0xd4));
    param_1[7] = 0;
    param_1[0xb] = 0;
    param_1[6] = (*(int *)(gen_frame + 0xd8));
    param_1[0xc] = (int)gen_fl2bits((float)((float10)fVar1 + fVar6));
    param_1[8] = (*(int *)(gen_frame + 0xe0));
    param_1[0xd] = (int)gen_fl2bits((float)((float10)fVar2 + fVar4));
    param_1[9] = (*(int *)(gen_frame + 0xe4));
    param_1[0xe] = (int)gen_fl2bits((float)((float10)fVar3 + fVar5));
    iVar9 = (int)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    param_1[10] = (*(int *)(gen_frame + 0xe8));
    param_1[0xf] = iVar9;
LAB_0069370d: ;
    bVar7 = 1;
  }
  else {
    if (param_2 == 3) {
      if (param_3 == 0) {
        if ((undefined *)piVar10[0x1e] != (undefined *)0x0) {
          uVar8 = F_00623160((undefined *)piVar10[0x1e] GEN_EDX_ARG,param_4);
          if ((short)uVar8 != -1) {
            uVar8 = F_0054e1a0(piVar10 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x40)),uVar8 & 0xffff);
            goto LAB_006935bd;
          }
        }
      }
      else {
        uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*piVar10 + 0x50))(piVar10 GEN_EDX_ARG,param_3);
        if ((char)uVar8 != '\0') {
          uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*piVar10 + 0x40))(piVar10 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x80)),param_3);
LAB_006935bd: ;
          F_004be0e0(((int *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar8);
          piVar10 = ((int *)(gen_frame + 0x0));
          piVar11 = param_1;
          for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 - 1) {
            *piVar11 = *piVar10;
            piVar10 = piVar10 + 1;
            piVar11 = piVar11 + 1;
          }
          goto LAB_0069370d;
        }
      }
    }
    bVar7 = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x10c)) ^ (uint)(uint)(gen_frame + 0x110) GEN_EDX_ARG);
  return bVar7;
}

/* ref: FUN_00693730 */
GEN_FRAME uint GEN_THISCALL F_00693730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x693730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined * pvVar2;
  ushort uVar3;
  int * in_EAX = 0;
  uint uVar4;
  
  if (*(short *)((int)this + 0x40) != 0) {
    uVar4 = 0;
    do {
      uVar3 = *(ushort *)((int)this + 0x40) >> ((byte)uVar4 & 0x1f);
      in_EAX = ((int *)GEN_TOP(CONCAT22((short)((uint)((int)(uintptr_t)in_EAX) >> 0x10),uVar3)));
      if ((uVar3 & 1) != 0) {
        in_EAX = ((int *)GEN_TOP((*(int *)((int)this + uVar4 * 4) + 0x88)));
        iVar1 = _InterlockedExchangeAdd((volatile long *)(in_EAX), 0);
        if (iVar1 == 2) {
          in_EAX = ((int *)GEN_TOP((*(int *)((int)this + uVar4 * 4) + 0x8c)));
          iVar1 = _InterlockedExchangeAdd((volatile long *)(in_EAX), 0);
          if (iVar1 < 8) {
            pvVar2 = *(undefined * PTR32 *)((int)this + uVar4 * 4);
            if (*(int *)((int)pvVar2 + 8) == 0x6d646c) {
              in_EAX = (int *)F_00502310(pvVar2 GEN_EDX_FWD,param_1);
            }
            pvVar2 = *(undefined * PTR32 *)((int)this + uVar4 * 4);
            if (*(int *)((int)pvVar2 + 8) == 0x6d74726c) {
              in_EAX = (int *)F_00502b90(pvVar2 GEN_EDX_ARG,param_2);
            }
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x10);
  }
  return (uint)in_EAX;
}

/* ref: FUN_006937b0 */
GEN_FRAME uint GEN_THISCALL F_006937b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6937b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  
  iVar2 = (*(int *)&gen_args[1]);
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (*(int *)&gen_args[1]) * 4)));
  if (iVar1 != 0) {
    F_0050c620(iVar1,0,0);
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar2 * 4))) = 0;
  }
  F_004ff310(&(*(int *)&gen_args[1]) GEN_EDX_ARG,4,0);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)(gen_frame + 0x18)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x1c)) = 5000;
  (*(undefined4 *)(gen_frame + 0x20)) = 0x10100;
  (*(undefined1 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 4;
  (*(undefined2 *)(gen_frame + 0x25)) = 0;
  uVar4 = F_00513d20(&(*(int *)&gen_args[1]),&(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),-(uint)((char)(*(undefined4 *)&gen_args[4]) != '\0') & (uint)&(*(undefined4 *)(gen_frame + 0x4)),0,
                       0);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar2 * 4))) = uVar4;
  uVar3 = 1 << ((byte)iVar2 & 0x1f);
  uVar5 = ~uVar3;
  *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) & uVar5 | uVar3;
  *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x42))) = *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x42))) & uVar5 | 0 << ((byte)iVar2 & 0x1f);
  *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = uVar5 & *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) | uVar3;
  return (uint)uVar3;
}

/* ref: FUN_00693890 */
GEN_FRAME uint GEN_THISCALL F_00693890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x693890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  
  uVar4 = 0 << ((byte)param_1 & 0x1f);
  uVar2 = ~(1 << ((byte)param_1 & 0x1f));
  *(ushort *)((int)this + 0x40) = *(ushort *)((int)this + 0x40) & uVar2 | uVar4;
  *(ushort *)((int)this + 0x42) = uVar2 & *(ushort *)((int)this + 0x42) | uVar4;
  *(ushort *)((int)this + 0x44) = *(ushort *)((int)this + 0x44) & uVar2 | uVar4;
  iVar1 = *(int *)((int)this + param_1 * 4);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = F_0050c620(iVar1,0,0);
    *(undefined4 *)((int)this + param_1 * 4) = 0;
  }
  return uVar3;
}

/* ref: FUN_00693900 */
GEN_FRAME uint GEN_THISCALL F_00693900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x693900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  byte bVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  bVar2 = *(byte *)((int)this + 2);
  uVar4 = F_006b1210(param_2 GEN_EDX_FWD,param_1);
  if (uVar4 != 0xffffffff) {
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x5c))(param_2 GEN_EDX_ARG);
    uVar6 = F_006b11b0(param_2 GEN_EDX_ARG);
    puVar1 = ((undefined4 *)GEN_TOP((uVar5 + 4 + (uVar6 * bVar2 + uVar4) * 6)));
    uVar4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)((int)this + 4) = *puVar1;
      uVar3 = *(undefined2 *)(puVar1 + 1);
      *(undefined2 *)((int)this + 8) = uVar3;
      return CONCAT22((short)((uint)((int)(uintptr_t)puVar1) >> 0x10),uVar3);
    }
  }
  *(undefined4 *)((int)this + 4) = 0x3ff0000;
  *(undefined1 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00693980 */
GEN_NOFRAME byte GEN_THISCALL F_00693980(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x693980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_006767d0((undefined *)(REFG(int, 0x137128c) + 0x3d0) GEN_EDX_FWD);
  *(uint *)this = uVar1;
  return -1 < (int)uVar1;
}

/* ref: FUN_006939a0 */
GEN_NOFRAME uint GEN_THISCALL F_006939a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6939a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if (-1 < (int)uVar1) {
    uVar1 = F_00676850((undefined *)(REFG(int, 0x137128c) + 0x3d0) GEN_EDX_FWD,uVar1);
    *(undefined4 *)this = 0xffffffff;
  }
  return uVar1;
}

/* ref: Client::Graphics::Scene::Human::vf57 */
GEN_FRAME uint GEN_THISCALL F_006939d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6939d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = param_1;
  if (4 < param_1) {
    uVar1 = param_1 - 5;
  }
  uVar1 = F_00693900(((undefined *)GEN_TOP((*(int *)(this + 0x818) + param_1 * 0xc))) GEN_EDX_FWD,uVar1,param_2);
  this[0x6ec] = (undefined1)0x0;
  return uVar1;
}

/* ref: Client::Graphics::Scene::Human::vf59 */
GEN_NOFRAME uint GEN_THISCALL F_00693a10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x693a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  *((undefined4 *)GEN_TOP((uVar1 + 0xa8 + *(int *)(REFG(int, 0x137129c) + 0xbc) * 4))) = *(undefined4 *)(this + 0x7e8);
  return uVar1;
}

/* ref: Client::Graphics::Scene::Human::vf67 */
GEN_FRAME uint GEN_THISCALL F_00693a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x693a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  gen_size32 param_2 = (gen_size32)gen_a2;
  uint param_3 = (uint)gen_a3;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  char * _Format;
  
  if (param_3 < 5) {
    if (*(int *)(this + 0x818) == 0) {
      uVar3 = (uint)*(ushort *)(this + param_3 * 4 + 0x750);
      uVar2 = (uint)*(ushort *)(this + 0x778);
      if (uVar2 % 10 == 1) {
        uVar1 = F_0068c9c0(REFG(void * PTR32, 0x137129c) GEN_EDX_FWD,uVar2,param_3,uVar3);
        uVar2 = (uint)uVar1;
      }
      else if (uVar2 % 10 == 4) {
        uVar1 = F_0068cc20(REFG(void * PTR32, 0x137129c) GEN_EDX_ARG,uVar2,param_3,uVar3);
        uVar2 = (uint)uVar1;
      }
      else {
        uVar1 = F_0068cd40(REFG(void * PTR32, 0x137129c) GEN_EDX_ARG,uVar2,param_3,uVar3);
        uVar2 = (uint)uVar1;
      }
    }
    else {
      uVar3 = (uint)*((ushort *)GEN_TOP((*(int *)(this + 0x818) + param_3 * 0xc)));
      uVar2 = (uint)*((ushort *)GEN_TOP((*(int *)(this + 0x818) + param_3 * 0xc + 10)));
    }
    F_00c472af(param_1,param_2,"chara/equipment/e%04d/model/c%04de%04d_%s.mdl",uVar3,uVar2,uVar3,
               (&REFG(undefined * PTR32, 0x1322f7c))[(int)(param_3)]);
    return (uint)param_1;
  }
  if (param_3 < 10) {
    if (*(int *)(this + 0x818) == 0) {
      uVar2 = (uint)*(ushort *)(this + param_3 * 4 + 0x750);
      uVar1 = F_00691b90(REFG(void * PTR32, 0x137129c) GEN_EDX_ARG,(uint)*(ushort *)(this + 0x778),param_3,uVar2);
    }
    else {
      uVar2 = (uint)*((ushort *)GEN_TOP((*(int *)(this + 0x818) + param_3 * 0xc)));
      uVar1 = *((ushort *)GEN_TOP((*(int *)(this + 0x818) + param_3 * 0xc + 10)));
    }
    F_00c472af(param_1,param_2,"chara/accessory/a%04d/model/c%04da%04d_%s.mdl",uVar2,(uint)uVar1,
               uVar2,(&REFG(undefined * PTR32, 0x1322f7c))[(int)(param_3)]);
    return (uint)param_1;
  }
  if (param_3 == 10) {
    uVar2 = (uint)*(ushort *)(this + 0x77a);
    uVar3 = (uint)*(ushort *)(this + 0x778);
    _Format = "chara/human/c%04d/obj/hair/h%04d/model/c%04dh%04d_hir.mdl";
  }
  else {
    if (param_3 == 0xb) {
      F_00c472af(param_1,param_2,"chara/human/c%04d/obj/face/f%04d/model/c%04df%04d_fac.mdl",
                 (uint)*(ushort *)(this + 0x778),(uint)*(ushort *)(this + 0x77c),
                 (uint)*(ushort *)(this + 0x778),(uint)*(ushort *)(this + 0x77c));
      return (uint)param_1;
    }
    if (param_3 == 0xc) {
      F_00c472af(param_1,param_2,"chara/human/c%04d/obj/tail/t%04d/model/c%04dt%04d_til.mdl",
                 (uint)*(ushort *)(this + 0x778),(uint)*(ushort *)(this + 0x77e),
                 (uint)*(ushort *)(this + 0x778),(uint)*(ushort *)(this + 0x77e));
      return (uint)param_1;
    }
    if (param_3 == 0xd) {
      uVar1 = F_00689950((uint)*(ushort *)(this + 0x778));
      F_00c472af(param_1,param_2,"chara/human/c%04d/obj/body/b%04d/model/c%04db%04d_top.mdl",
                 (uint)uVar1,2,(uint)uVar1,2);
      return (uint)param_1;
    }
    if (param_3 == 0xe) {
      uVar1 = F_006899f0((uint)*(ushort *)(this + 0x778));
      uVar3 = (uint)uVar1;
      uVar2 = 2;
      _Format = "chara/human/c%04d/obj/body/b%04d/model/c%04db%04d_top.mdl";
    }
    else {
      if (param_3 != 0xf) {
        return (uint)param_1;
      }
      uVar3 = F_00689a40((uint)*(ushort *)(this + 0x778));
      uVar3 = uVar3 & 0xffff;
      uVar2 = 3;
      _Format = "chara/human/c%04d/obj/body/b%04d/model/c%04db%04d_top.mdl";
    }
  }
  F_00c472af(param_1,param_2,_Format,uVar3,uVar2,uVar3,uVar2);
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::Human::vf89 */
GEN_FRAME uint GEN_THISCALL F_00693c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x693c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)(this + 0x7fc) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)(this + 0x7fc) |
       (uint)((char)param_2 != '\0') << ((byte)param_1 & 0x1f);
  return (uint)this;
}

/* ref: Client::Graphics::Scene::Human::vf84 */
GEN_FRAME uint GEN_THISCALL F_00693cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x693cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort uVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  
  if (param_1 == 0xd) {
    uVar1 = *(ushort *)(this + 0x778);
    uVar2 = *(undefined4 *)(REFG(int, 0x137129c) + 0x20);
    uVar3 = F_00689950((uint)uVar1);
    uVar4 = F_006382e0(uVar2,(uint)uVar1,(uint)uVar3);
    return uVar4;
  }
  if (param_1 != 0xe) {
    if (param_1 == 0xf) {
      uVar2 = *(undefined4 *)(REFG(int, 0x137129c) + 0x20);
      uVar1 = *(ushort *)(this + 0x778);
      uVar4 = F_00689a40((uint)uVar1);
      uVar4 = F_006382e0(uVar2,(uint)uVar1,uVar4 & 0xffff);
      return uVar4;
    }
    if (param_1 < 10) {
      uVar1 = *((ushort *)GEN_TOP((*(int *)(this + 0x818) + 10 + param_1 * 0xc)));
      if (*(ushort *)(this + 0x778) != uVar1) {
        uVar4 = F_006382e0(*(undefined4 *)(REFG(int, 0x137129c) + 0x20),(uint)*(ushort *)(this + 0x778),
                             (uint)uVar1);
        return uVar4;
      }
    }
  }
  return 0;
}

/* ref: Client::Graphics::Scene::Human::vf86 */
GEN_FRAME uint GEN_THISCALL F_00693d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x693d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  
  bVar2 = 0;
  if ((*(uint *)(REFG(undefined4, 0x137129c) + 0xf0) >> 1 & 1) != 0) {
    fVar5 = (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 300) + (float10)*(double *)&REFG(undefined, 0x1088120))))
    ;
    if (fVar5 * fVar5 < (float10)param_5) {
      bVar2 = 1;
    }
    else {
      bVar2 = 0;
    }
  }
  uVar3 = REFG(undefined4, 0x137129c);
  if (param_3 < 0x14) {
    iVar4 = bVar2 - 1;
    uVar3 = 0xc;
    do {
      iVar1 = *((int *)GEN_TOP(((uVar3 - 0xc) + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      iVar1 = *((int *)GEN_TOP(((uVar3 - 8) + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      iVar1 = *((int *)GEN_TOP(((uVar3 - 4) + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      iVar1 = *((int *)GEN_TOP((uVar3 + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      iVar1 = *((int *)GEN_TOP((uVar3 + 4 + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      iVar1 = *((int *)GEN_TOP((uVar3 + 8 + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      uVar3 = uVar3 + 0x18;
    } while (uVar3 < 0x3c);
    uVar3 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x7c) + 0x3c)));
    if (uVar3 != 0) {
      *(uint *)(uVar3 + 0x14) = -(uint)bVar2;
    }
  }
  if (param_3 == 0x1e) {
    iVar4 = (-(uint)bVar2 & 0xffffff01) - 1;
    uVar3 = 0xc;
    do {
      iVar1 = *((int *)GEN_TOP(((uVar3 - 0xc) + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      iVar1 = *((int *)GEN_TOP(((uVar3 - 8) + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      iVar1 = *((int *)GEN_TOP(((uVar3 - 4) + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      iVar1 = *((int *)GEN_TOP((uVar3 + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      iVar1 = *((int *)GEN_TOP((uVar3 + 4 + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      iVar1 = *((int *)GEN_TOP((uVar3 + 8 + *(int *)(param_1 + 0x7c))));
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar4;
      }
      uVar3 = uVar3 + 0x18;
    } while (uVar3 < 0x3c);
    uVar3 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x7c) + 0x3c)));
    if (uVar3 != 0) {
      *(uint *)(uVar3 + 0x14) = -(uint)bVar2 & 0xff;
    }
  }
  return uVar3;
}

/* ref: FUN_00693ef0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00693ef0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x693ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  
  bVar1 = *(byte *)((int)this + 0x746) & 0x80;
  switch((unsigned int)(uintptr_t)(*(byte *)((int)this + 0x734))) {
  default: ;
    uVar4 = 100;
    break;
  case 2: ;
    uVar4 = 300;
    break;
  case 3: ;
  case 4: ;
    uVar4 = 500;
    break;
  case 5: ;
  case 6: ;
    uVar4 = 0x44c;
    break;
  case 7: ;
  case 8: ;
    uVar4 = 700;
    break;
  case 9: ;
  case 10: ;
    uVar4 = 900;
  }
  *(undefined2 *)((int)this + 0x778) = uVar4;
  *(short *)((int)this + 0x778) =
       *(short *)((int)this + 0x778) +
       (ushort)*(byte *)((int)this + 0x732) + (ushort)*(byte *)((int)this + 0x731) * 100 +
       (((ushort)bVar1 - (ushort)bVar1) - (ushort)(bVar1 != 0) & 9000);
  bVar1 = *(byte *)((int)this + 0x735);
  if (bVar1 < 0x65) {
    uVar2 = (ushort)bVar1 + (*(byte *)((int)this + 0x734) - 1 & 1) * 100;
  }
  else {
    uVar2 = (ushort)bVar1;
  }
  if (*(char *)((int)this + 0x730) == '\x04') {
    uVar3 = (ushort)*(byte *)((int)this + 0x746);
  }
  else {
    uVar3 = 0;
  }
  *(uint *)((int)this + 0x74c) =
       (uint)((ushort)*(byte *)((int)this + 0x736) != *(ushort *)((int)this + 0x77a)) << 10 |
       *(uint *)((int)this + 0x74c) & 0xfffffbff;
  *(uint *)((int)this + 0x74c) =
       (uint)(uVar2 != *(ushort *)((int)this + 0x77c)) << 0xb |
       *(uint *)((int)this + 0x74c) & 0xfffff7ff;
  *(uint *)((int)this + 0x74c) =
       (uint)(uVar3 != *(ushort *)((int)this + 0x77e)) << 0xc |
       *(uint *)((int)this + 0x74c) & 0xffffefff;
  *(ushort *)((int)this + 0x77a) = (ushort)*(byte *)((int)this + 0x736);
  *(ushort *)((int)this + 0x77c) = uVar2;
  *(ushort *)((int)this + 0x77e) = uVar3;
  return 0;
}

/* ref: FUN_00694050 */
GEN_FRAME ushort GEN_STDCALL F_00694050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x694050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined * this;
  
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 1: ;
    this = *(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x28);
    break;
  case 2: ;
    this = *(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x2c);
    break;
  case 3: ;
    this = *(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x30);
    break;
  case 4: ;
    this = *(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x34);
    break;
  default: ;
    goto switchD_0069405c_default;
  }
  if (this != (undefined *)0x0) {
    uVar1 = F_00503570(this GEN_EDX_ARG,param_1,param_3);
    return (ushort)uVar1;
  }
switchD_0069405c_default: ;
  return 0xffff;
}

/* ref: FUN_006940c0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006940c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6940c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x818) == 0) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                       (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,0x78,0x10)));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[0xc] = 0;
      puVar1[0xf] = 0;
      puVar1[0x12] = 0;
      puVar1[0x15] = 0;
      puVar1[0x18] = 0;
      puVar1[0x1b] = 0;
      *(undefined4 * PTR32 *)((int)this + 0x818) = puVar1;
      return;
    }
    *(undefined4 *)((int)this + 0x818) = 0;
  }
  return;
}

/* ref: FUN_00694120 */
GEN_NOFRAME uint GEN_THISCALL F_00694120(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x694120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x818) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,*(int *)((int)this + 0x818));
    *(undefined4 *)((int)this + 0x818) = 0;
  }
  return uVar1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf57 */
GEN_FRAME uint GEN_THISCALL F_00694150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x694150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  uint uVar2;
  
  F_00693900(((undefined *)GEN_TOP((*(int *)(this + 0x790) + param_1 * 0xc))) GEN_EDX_FWD,param_1,param_2);
  uVar1 = *((ushort *)GEN_TOP((*(int *)(this + 0x790) + 8 + param_1 * 0xc)));
  (*(uint *)(gen_frame + 0x8)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 2)),uVar1);
  if ((uVar1 & 0xf00) != 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x94))(this GEN_EDX_ARG);
    if ((char)uVar2 == '\0') {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x88))(this GEN_EDX_ARG,5);
    }
    F_00691d70(this GEN_EDX_ARG);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 1)) = (byte)(uVar1 >> 8);
    uVar2 = F_00691e00(this GEN_EDX_ARG,param_1,(*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 1)) & 0xf);
    return uVar2;
  }
  this[0x6ec] = (undefined1)0x0;
  return (*(uint *)(gen_frame + 0x8)) >> 8;
}

/* ref: Client::Graphics::Scene::Demihuman::vf89 */
GEN_FRAME uint GEN_THISCALL F_006941f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6941f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)(this + 0x784) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)(this + 0x784) |
       (uint)((char)param_2 != '\0') << ((byte)param_1 & 0x1f);
  return (uint)this;
}

/* ref: FUN_00694230 */
GEN_FRAME uint GEN_THISCALL F_00694230(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x694230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)((int)this + 0x738);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x10f04d8);
  if ((4 < uVar1) && ((uVar1 < 9 || (uVar1 == 10)))) {
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x4)) + 0)) = (byte)REFG(undefined4, 0x10f04d8);
    (*(uint *)(gen_frame + 0x4)) = (uint)((byte)(*(uint *)(gen_frame + 0x4)) | 1);
  }
  if (((*(uint *)(gen_frame + 0x4)) & 1) != 0) {
    *(uint *)((int)this + 0x78c) = *(uint *)((int)this + 0x78c) | 1;
    *(uint *)((int)this + 0x78c) = *(uint *)((int)this + 0x78c) & 0xfffffffd;
    return uVar1;
  }
  *(uint *)((int)this + 0x78c) = *(uint *)((int)this + 0x78c) | 2;
  *(uint *)((int)this + 0x78c) = *(uint *)((int)this + 0x78c) & 0xfffffffe;
  return uVar1;
}

/* ref: FUN_006942a0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006942a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6942a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 0x790) == 0) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                       (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,0x3c,0x10)));
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[0xc] = 0;
      *(undefined4 * PTR32 *)((int)this + 0x790) = puVar1;
      return;
    }
    *(undefined4 *)((int)this + 0x790) = 0;
  }
  return;
}

/* ref: FUN_006942f0 */
GEN_NOFRAME uint GEN_THISCALL F_006942f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6942f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x790) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,*(int *)((int)this + 0x790));
    *(undefined4 *)((int)this + 0x790) = 0;
  }
  return uVar1;
}

/* ref: FUN_00694320 */
GEN_NOFRAME uint GEN_THISCALL F_00694320(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x694320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(char *)((int)this + 0x65) != '\x02') && (*(char *)((int)this + 0x65) != '\x03')) {
    return 0x656d70;
  }
  uVar1 = F_00b51c10(*(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x18) GEN_EDX_FWD,(uint)*(ushort *)((int)this + 0x730));
  return uVar1;
}

/* ref: FUN_00694350 */
GEN_NOFRAME uint GEN_THISCALL F_00694350(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x694350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(char *)((int)this + 0x65) != '\x02') && (*(char *)((int)this + 0x65) != '\x03')) {
    return 0x656d70;
  }
  uVar1 = F_00b51c10(*(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x14) GEN_EDX_FWD,(uint)*(ushort *)((int)this + 0x730));
  return uVar1;
}

/* ref: Client::Graphics::Scene::Weapon::vf54 */
GEN_FRAME unsigned int GEN_THISCALL F_00694380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x694380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if ((param_1 & 1) != 0) {
    if (*(undefined * PTR32 *)(this + 0x78) == (undefined *)0x0) {
      *(undefined2 *)(this + 0x738) = 0xffff;
      return;
    }
    uVar1 = F_00623160(*(undefined * PTR32 *)(this + 0x78) GEN_EDX_FWD,"n_root");
    *(short *)(this + 0x738) = (short)uVar1;
  }
  return;
}

/* ref: Client::Graphics::Scene::Weapon::vf57 */
GEN_FRAME uint GEN_THISCALL F_006943c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6943c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = *(ushort *)(this + 0x734);
  uVar4 = F_006b1210(param_2 GEN_EDX_FWD,0);
  if (uVar4 != 0xffffffff) {
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x5c))(param_2 GEN_EDX_ARG);
    uVar6 = F_006b11b0(param_2 GEN_EDX_ARG);
    puVar1 = ((undefined4 *)GEN_TOP((uVar5 + 4 + (uVar6 * uVar2 + uVar4) * 6)));
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)(this + 0x73a) = *puVar1;
      uVar3 = *(undefined2 *)(puVar1 + 1);
      *(undefined2 *)(this + 0x73e) = uVar3;
      if (((byte)this[0x73f] & 0xf) != 0) {
        uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x94))(this GEN_EDX_ARG);
        if ((char)uVar4 == '\0') {
          ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x88))(this GEN_EDX_ARG,1);
        }
        F_00691d70(this GEN_EDX_ARG);
        uVar4 = F_00691e00(this GEN_EDX_ARG,param_1,(byte)this[0x73f] & 0xf);
        return uVar4;
      }
      this[0x6ec] = (undefined1)0x0;
      return CONCAT22((short)((uint)((int)(uintptr_t)puVar1) >> 0x10),uVar3);
    }
  }
  *(ushort *)(this + 0x73c) = *(ushort *)(this + 0x73c) | 0x3ff;
  *(undefined2 *)(this + 0x73a) = 1;
  return 0x3ff;
}

/* ref: Client::Graphics::Scene::Weapon::vf89 */
GEN_FRAME uint GEN_THISCALL F_006944a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6944a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)(this + 0x748) =
       ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)(this + 0x748) |
       (uint)((char)param_2 != '\0') << ((byte)param_1 & 0x1f);
  return (uint)this;
}

/* ref: Client::Graphics::Scene::Weapon::vf81 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006944e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6944e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  if (*(int *)(this + 200) != 0) {
    if (*(undefined * PTR32 *)(this + 0x78) == (undefined *)0x0) {
      puVar2 = &REFG(float, 0x1302d00);
      puVar3 = ((undefined4 *)(gen_frame + 0x0));
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 - 1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    else {
      F_0064ce50(*(undefined * PTR32 *)(this + 0x78) GEN_EDX_FWD,((undefined4 *)(gen_frame + 0x0)),(uint)*(ushort *)(this + 0x738));
    }
    *(undefined4 *)(this + 0x30) = (*(undefined4 *)(gen_frame + 0x30));
    *(undefined4 *)(this + 0x34) = (*(undefined4 *)(gen_frame + 0x34));
    *(undefined4 *)(this + 0x38) = (*(undefined4 *)(gen_frame + 0x38));
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 2;
  }
  F_0068dc50((undefined *)this GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50) GEN_EDX_ARG);
  return;
}

/* ref: Client::Graphics::Scene::Weapon::vf86 */
GEN_FRAME uint GEN_THISCALL F_00694580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x694580u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  byte bVar1;
  uint uVar2;
  float10 fVar3;
  
  bVar1 = 0;
  if ((*(uint *)(REFG(undefined4, 0x137129c) + 0xf0) >> 1 & 1) != 0) {
    fVar3 = (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 300) + (float10)*(double *)&REFG(undefined, 0x10b2ce0))))
    ;
    if (fVar3 * fVar3 < (float10)param_5) {
      bVar1 = 1;
    }
    else {
      bVar1 = 0;
    }
  }
  uVar2 = REFG(undefined4, 0x137129c);
  if ((param_3 < 0x14) && (uVar2 = **(uint * PTR32 *)(param_1 + 0x7c), uVar2 != 0)) {
    *(uint *)(uVar2 + 0x14) = bVar1 - 1;
  }
  if ((param_3 == 0x1e) && (uVar2 = **(uint * PTR32 *)(param_1 + 0x7c), uVar2 != 0)) {
    *(uint *)(uVar2 + 0x14) = (-(uint)bVar1 & 0xffffff01) - 1;
  }
  return uVar2;
}

/* ref: Client::Graphics::Scene::Monster::vf57 */
GEN_FRAME uint GEN_THISCALL F_00694610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x694610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = *(ushort *)(this + 0x734);
  uVar4 = F_006b1210(param_2 GEN_EDX_FWD,0);
  if (uVar4 != 0xffffffff) {
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x5c))(param_2 GEN_EDX_ARG);
    uVar6 = F_006b11b0(param_2 GEN_EDX_ARG);
    puVar1 = ((undefined4 *)GEN_TOP((uVar5 + 4 + (uVar6 * uVar2 + uVar4) * 6)));
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)(this + 0x736) = *puVar1;
      uVar3 = *(undefined2 *)(puVar1 + 1);
      *(undefined2 *)(this + 0x73a) = uVar3;
      if (((byte)this[0x73b] & 0xf) != 0) {
        uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x94))(this GEN_EDX_ARG);
        if ((char)uVar4 == '\0') {
          ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x88))(this GEN_EDX_ARG,1);
        }
        F_00691d70(this GEN_EDX_ARG);
        uVar4 = F_00691e00(this GEN_EDX_ARG,param_1,(byte)this[0x73b] & 0xf);
        return uVar4;
      }
      this[0x6ec] = (undefined1)0x0;
      return CONCAT22((short)((uint)((int)(uintptr_t)puVar1) >> 0x10),uVar3);
    }
  }
  *(ushort *)(this + 0x738) = *(ushort *)(this + 0x738) | 0x3ff;
  *(undefined2 *)(this + 0x736) = 1;
  return 0x3ff;
}

/* ref: FUN_006946f0 */
GEN_NOFRAME uint GEN_THISCALL F_006946f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6946f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00690510(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined2 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x66) = 0xffff;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) | 0xb;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) & 0xef;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined1 *)((int)this + 0xa0) = 0;
  *(undefined1 *)((int)this + 0x1a8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2cec));
  *(undefined4 *)((int)this + 0x1a4) = 5;
  F_00c48350((undefined *)((int)this + 0xa1),0,0x100);
  return (uint)this;
}

/* ref: FUN_00694790 */
GEN_NOFRAME byte GEN_THISCALL F_00694790(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x694790u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(byte *)(in_ecx + 100) = *(byte *)(in_ecx + 100) & 0xfb;
  *(uint *)(in_ecx + 0x24) = *(uint *)(in_ecx + 0x24) | 3;
  *(undefined1 *)(in_ecx + 0x65) = 1;
  return 1;
}

/* ref: Client::Graphics::Scene::Terrain::vf13 */
GEN_NOFRAME uint GEN_THISCALL F_006947a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6947a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined4 uVar1;
  float10 fVar2;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x30))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
  fVar2 = (float10)0;
  (*(float *)(gen_frame + 0x50)) = (float)fVar2;
  uVar1 = *(undefined4 *)(this + 0x54);
  (*(float *)(gen_frame + 0x54)) = (float)fVar2;
  (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(this + 0x50);
  (*(float *)(gen_frame + 0x58)) = (float)fVar2;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x48)) = *(undefined4 *)(this + 0x58);
  F_004efe70(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,(uint)(this + 0x40));
  (*(float *)(gen_frame + 0x50)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x30) + (float10)(*(float *)(gen_frame + 0x50)))));
  (*(float *)(gen_frame + 0x54)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x34) + (float10)(*(float *)(gen_frame + 0x54)))));
  (*(float *)(gen_frame + 0x58)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x38) + (float10)(*(float *)(gen_frame + 0x58)))));
  F_005fec10(param_1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_00694870 */
GEN_FRAME byte GEN_THISCALL F_00694870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x694870u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int iVar2;
  uint uVar3;
  char * pcVar4;
  int iVar5;
  
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a4))) = (*(int *)&gen_args[3]);
  (*(undefined4 *)(gen_frame + 0x14)) = (*(int *)&gen_args[3]);
  (*(int *)&gen_args[3]) = 0x74657261;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)(gen_frame + 0x18)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x1c)) = 5000;
  (*(undefined1 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined2 *)(gen_frame + 0x25)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0x10000;
  uVar3 = F_00513d20((*(undefined4 *)&gen_args[1]),&(*(int *)&gen_args[3]),(*(char * PTR32 *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
  if (uVar3 != 0) {
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))) = uVar3;
    pcVar4 = (*(char * PTR32 *)&gen_args[2]);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    (*(int *)&gen_args[3]) = 0;
    for (iVar5 = (int)pcVar4 - (int)((*(char * PTR32 *)&gen_args[2]) + 1);
        ((iVar2 = (*(int *)&gen_args[3]), iVar5 != 0 && (iVar2 = iVar5, (*(char * PTR32 *)&gen_args[2])[iVar5] != '/')) &&
        ((*(char * PTR32 *)&gen_args[2])[iVar5] != '\\')); iVar5 = iVar5 - 1) {
    }
    (*(int *)&gen_args[3]) = iVar2;
    F_00c46aa0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa1,(*(char * PTR32 *)&gen_args[2]),(*(int *)&gen_args[3]));
    *((undefined1 *)GEN_TOP(((*(int *)&gen_args[3]) + 0xa1 + (int)(*(undefined * PTR32 *)&gen_args[0])))) = 0;
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))) = (undefined1)(*(undefined4 *)&gen_args[4]);
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x65))) = 2;
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa0))) = 1;
    return 1;
  }
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x65))) = 4;
  return 0;
}

/* ref: FUN_00694950 */
GEN_NOFRAME byte GEN_THISCALL F_00694950(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x694950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x12070];
  ushort * puVar1;
  gen_size32 sVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined2 uVar6;
  int iVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  short * psVar11;
  undefined * pvVar12;
  int * piVar13;
  uint uVar14;
  float10 fVar15;
  
  iVar7 = REFG(int, 0x137127c);
  (*(uint *)(gen_frame + 0x1205c)) = 0x694970;
  (*(undefined * PTR32 *)(gen_frame + 0x1204c)) = (undefined *)(REFG(int, 0x137127c) + 0xaf90);
  uVar9 = F_005003e0(*(undefined * PTR32 *)((int)this + 0x70) GEN_EDX_FWD);
  *(uint *)(iVar7 + 0xb180) = uVar9;
  iVar7 = *(int *)((int)this + 0x78);
  (*(uint *)(gen_frame + 0x12048)) = uVar9;
  (*(undefined * PTR32 *)(gen_frame + 0x12044)) = REFG(void * PTR32, 0x1370c1c);
  if (iVar7 != 0) {
    (*(uint *)(gen_frame + 0x1205c)) = 0;
    uVar9 = F_00500500(*(undefined * PTR32 *)((int)this + 0x70) GEN_EDX_ARG);
    if (iVar7 != 0) {
      piVar13 = *(int * PTR32 *)((int)this + 0x74);
      iVar10 = uVar9 - (int)piVar13;
      (*(int * PTR32 *)(gen_frame + 0x12058)) = piVar13;
      (*(gen_size32 *)(gen_frame + 0x12054)) = iVar10;
      (*(int *)(gen_frame + 0x12050)) = iVar7;
      do {
        iVar7 = *piVar13;
        uVar14 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar7 + 0xa8) + 4))) + 0x1e +
                                *(int *)(iVar7 + 0xa8))));
        uVar9 = 0;
        if (uVar14 != 0) {
          psVar11 = ((short *)GEN_TOP((*(int *)(iVar7 + 0xb8) + 2)));
          do {
            if (*psVar11 != 0) {
              ((int *)(gen_frame + 0x11000))[(int)((*(uint *)(gen_frame + 0x1205c)))] = iVar7;
              ((int *)(gen_frame + 0x10000))[(int)((*(uint *)(gen_frame + 0x1205c)))] = iVar10 + (int)piVar13;
              (*(uint *)(gen_frame + 0x1205c)) = (*(uint *)(gen_frame + 0x1205c)) + 1;
              break;
            }
            uVar9 = uVar9 + 1;
            psVar11 = psVar11 + 0x1e;
          } while (uVar9 < uVar14);
        }
        piVar13 = piVar13 + 1;
        (*(int * PTR32 *)(gen_frame + 0x12058)) = piVar13;
        iVar7 = (*(int *)(gen_frame + 0x12050)) - 1;
        (*(int *)(gen_frame + 0x12050)) = iVar7;
      } while (iVar7 != 0);
    }
    *(uint *)((int)this + 0x7c) = (*(uint *)(gen_frame + 0x1205c));
    if ((*(uint *)(gen_frame + 0x1205c)) != 0) {
      sVar2 = (*(uint *)(gen_frame + 0x1205c)) * 4;
      (*(gen_size32 *)(gen_frame + 0x12054)) = sVar2;
      pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                                  (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,sVar2,0x10)));
      *(undefined * PTR32 *)((int)this + 0x88) = pvVar12;
      if (pvVar12 != (undefined *)0x0) {
        F_00c48350(pvVar12,0,sVar2);
        uVar9 = 0;
        if ((*(uint *)(gen_frame + 0x1205c)) != 0) {
          do {
            uVar14 = F_00625750(((int *)(gen_frame + 0x11000))[(int)(uVar9)]);
            *((uint *)GEN_TOP((*(int *)((int)this + 0x88) + uVar9 * 4))) = uVar14;
            if (*((int *)GEN_TOP((*(int *)((int)this + 0x88) + uVar9 * 4))) == 0) goto LAB_00694a5b;
            uVar6 = ((undefined2 *)((int *)(gen_frame + 0x10000))[(int)(uVar9)])[1];
            iVar7 = *((int *)GEN_TOP((*(int *)((int)this + 0x88) + uVar9 * 4)));
            *(undefined2 *)(iVar7 + 8) = *(undefined2 *)((int *)(gen_frame + 0x10000))[(int)(uVar9)];
            *(undefined2 *)(iVar7 + 10) = uVar6;
            iVar7 = uVar9 * 4;
            uVar9 = uVar9 + 1;
            *((undefined2 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x88) + iVar7))) + 0x24))) =
                 (undefined2)(*(uint *)(gen_frame + 0x12048));
          } while (uVar9 < (*(uint *)(gen_frame + 0x1205c)));
        }
        sVar2 = (*(gen_size32 *)(gen_frame + 0x12054));
        pvVar12 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,(*(gen_size32 *)(gen_frame + 0x12054)),0x10)));
        *(undefined * PTR32 *)((int)this + 0x94) = pvVar12;
        if (pvVar12 != (undefined *)0x0) {
          F_00c48350(pvVar12,0,sVar2);
          uVar9 = 0;
          if ((*(uint *)(gen_frame + 0x1205c)) == 0) {
            return 1;
          }
          while( true ) {
            F_00623d60(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x88) + uVar9 * 4))) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x12000)));
            iVar7 = *((int *)GEN_TOP((*(int *)((int)this + 0x88) + uVar9 * 4)));
            (*(float *)(gen_frame + 0x12020)) = (float)((float10)(*(float *)(gen_frame + 0x12000)) + (float10)(*(float *)(gen_frame + 0x12010)));
            (*(float *)(gen_frame + 0x12024)) = (float)((float10)(*(float *)(gen_frame + 0x12004)) + (float10)(*(float *)(gen_frame + 0x12014)));
            (*(float *)(gen_frame + 0x12028)) = (float)((float10)(*(float *)(gen_frame + 0x12008)) + (float10)(*(float *)(gen_frame + 0x12018)));
            fVar15 = (float10)REFG(double, 0x1088108);
            fVar3 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x12000)) + (float10)(*(float *)(gen_frame + 0x12010))) * fVar15)));
            (*(float *)(gen_frame + 0x12030)) = fVar3;
            fVar4 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x12004)) + (float10)(*(float *)(gen_frame + 0x12014))) * fVar15)));
            (*(float *)(gen_frame + 0x12034)) = fVar4;
            fVar5 = ((float)GEN_TOF((fVar15 * (float10)(float)((float10)(*(float *)(gen_frame + 0x12008)) + (float10)(*(float *)(gen_frame + 0x12018))))));
            (*(float *)(gen_frame + 0x12038)) = fVar5;
            *(float *)(iVar7 + 0x10) = fVar3;
            *(float *)(iVar7 + 0x14) = fVar4;
            *(float *)(iVar7 + 0x18) = fVar5;
            F_00623ec0((*(undefined * PTR32 *)(gen_frame + 0x1204c)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x88) + uVar9 * 4))),&(*(float *)(gen_frame + 0x12000)))
            ;
            uVar14 = F_00b14060((*(undefined * PTR32 *)(gen_frame + 0x12044)) GEN_EDX_ARG,3);
            *((uint *)GEN_TOP((*(int *)((int)this + 0x94) + uVar9 * 4))) = uVar14;
            if (*((int *)GEN_TOP((*(int *)((int)this + 0x94) + uVar9 * 4))) == 0) break;
            *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x94) + uVar9 * 4))) + 4))) =
                 *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x88) + uVar9 * 4)));
            F_00b81ef0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x94) + uVar9 * 4))) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x12000)));
            uVar8 = F_00b81f70(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x94) + uVar9 * 4))) GEN_EDX_ARG);
            if ((uVar8 == 0) &&
               (uVar14 = F_00504790(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + uVar9 * 4))) GEN_EDX_ARG,0),
               200 < uVar14)) {
              puVar1 = ((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x94) + uVar9 * 4))) + 0xe)));
              *puVar1 = *puVar1 | 0x8000;
              F_00b81ef0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x94) + uVar9 * 4))) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x12000)));
            }
            uVar9 = uVar9 + 1;
            if ((*(uint *)(gen_frame + 0x1205c)) <= uVar9) {
              return 1;
            }
          }
        }
      }
LAB_00694a5b: ;
      *(undefined1 *)((int)this + 0x65) = 4;
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00694c40 */
GEN_NOFRAME byte GEN_THISCALL F_00694c40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x694c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x12050];
  gen_size32 _Size;
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  short * psVar5;
  undefined * pvVar6;
  int * piVar7;
  uint uVar8;
  
  (*(uint *)(gen_frame + 0x1203c)) = 0x694c60;
  iVar2 = *(int *)((int)this + 0x78);
  (*(undefined * PTR32 *)(gen_frame + 0x12028)) = REFG(void * PTR32, 0x1370c1c);
  if (iVar2 != 0) {
    uVar3 = F_005003e0(*(undefined * PTR32 *)((int)this + 0x70) GEN_EDX_FWD);
    (*(uint *)(gen_frame + 0x12030)) = uVar3;
    (*(uint *)(gen_frame + 0x1203c)) = 0;
    uVar3 = F_00500500(*(undefined * PTR32 *)((int)this + 0x70) GEN_EDX_ARG);
    if (iVar2 != 0) {
      piVar7 = *(int * PTR32 *)((int)this + 0x74);
      iVar4 = uVar3 - (int)piVar7;
      (*(int * PTR32 *)(gen_frame + 0x12038)) = piVar7;
      (*(int *)(gen_frame + 0x1202c)) = iVar4;
      (*(int *)(gen_frame + 0x12034)) = iVar2;
      do {
        iVar2 = *piVar7;
        uVar8 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 0xa8) + 4))) + 0x1e + *(int *)(iVar2 + 0xa8)
                               )));
        uVar3 = 0;
        if (uVar8 != 0) {
          psVar5 = ((short *)GEN_TOP((*(int *)(iVar2 + 0xb8) + 0xe)));
          do {
            if (*psVar5 != 0) {
              ((int *)(gen_frame + 0x11000))[(int)((*(uint *)(gen_frame + 0x1203c)))] = iVar2;
              ((int *)(gen_frame + 0x10000))[(int)((*(uint *)(gen_frame + 0x1203c)))] = iVar4 + (int)piVar7;
              (*(uint *)(gen_frame + 0x1203c)) = (*(uint *)(gen_frame + 0x1203c)) + 1;
              break;
            }
            uVar3 = uVar3 + 1;
            psVar5 = psVar5 + 0x1e;
          } while (uVar3 < uVar8);
        }
        piVar7 = piVar7 + 1;
        (*(int * PTR32 *)(gen_frame + 0x12038)) = piVar7;
        iVar2 = (*(int *)(gen_frame + 0x12034)) - 1;
        (*(int *)(gen_frame + 0x12034)) = iVar2;
      } while (iVar2 != 0);
    }
    *(uint *)((int)this + 0x80) = (*(uint *)(gen_frame + 0x1203c));
    if ((*(uint *)(gen_frame + 0x1203c)) != 0) {
      _Size = (*(uint *)(gen_frame + 0x1203c)) * 4;
      pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                                 (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,_Size,0x10)));
      *(undefined * PTR32 *)((int)this + 0x8c) = pvVar6;
      if (pvVar6 != (undefined *)0x0) {
        F_00c48350(pvVar6,0,_Size);
        pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                                   (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,_Size,0x10)));
        *(undefined * PTR32 *)((int)this + 0x98) = pvVar6;
        if (pvVar6 != (undefined *)0x0) {
          F_00c48350(pvVar6,0,_Size);
          uVar3 = 0;
          if ((*(uint *)(gen_frame + 0x1203c)) != 0) {
            do {
              uVar8 = F_006257b0(((int *)(gen_frame + 0x11000))[(int)(uVar3)]);
              *((uint *)GEN_TOP((*(int *)((int)this + 0x8c) + uVar3 * 4))) = uVar8;
              if (*((int *)GEN_TOP((*(int *)((int)this + 0x8c) + uVar3 * 4))) == 0) goto LAB_00694d30;
              uVar1 = ((undefined2 *)((int *)(gen_frame + 0x10000))[(int)(uVar3)])[1];
              iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x8c) + uVar3 * 4)));
              *(undefined2 *)(iVar2 + 10) = *(undefined2 *)((int *)(gen_frame + 0x10000))[(int)(uVar3)];
              *(undefined2 *)(iVar2 + 0xc) = uVar1;
              iVar2 = uVar3 * 4;
              uVar3 = uVar3 + 1;
              *((undefined2 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x8c) + iVar2))) + 8))) =
                   (undefined2)(*(uint *)(gen_frame + 0x12030));
            } while (uVar3 < (*(uint *)(gen_frame + 0x1203c)));
          }
          uVar3 = 0;
          if ((*(uint *)(gen_frame + 0x1203c)) == 0) {
            return 1;
          }
          while( true ) {
            uVar8 = F_00b14060((*(undefined * PTR32 *)(gen_frame + 0x12028)) GEN_EDX_ARG,7);
            *((uint *)GEN_TOP((*(int *)((int)this + 0x98) + uVar3 * 4))) = uVar8;
            if (*((int *)GEN_TOP((*(int *)((int)this + 0x98) + uVar3 * 4))) == 0) break;
            *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x98) + uVar3 * 4))) + 4))) =
                 *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x8c) + uVar3 * 4)));
            F_006251c0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x8c) + uVar3 * 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x12000)));
            F_00b81ef0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x98) + uVar3 * 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x12000)));
            uVar3 = uVar3 + 1;
            if ((*(uint *)(gen_frame + 0x1203c)) <= uVar3) {
              return 1;
            }
          }
        }
      }
LAB_00694d30: ;
      *(undefined1 *)((int)this + 0x65) = 4;
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00694e50 */
GEN_FRAME uint GEN_THISCALL F_00694e50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x694e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x240];
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  undefined * _Dst;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x23c);
  (*(uint *)(gen_frame + 0x238)) = uVar3;
  piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0x88)));
  iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar4), 0);
  if (iVar1 != 2) {
LAB_00694faa: ;
    F_00c47745((*(uint *)(gen_frame + 0x238)) ^ (uint)(uint)(gen_frame + 0x23c) GEN_EDX_FWD);
    return (uint)piVar4;
  }
  piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0x8c)));
  iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar4), 0);
  if (7 < iVar1) {
    *(undefined1 *)((int)this + 0x65) = 4;
    F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0x23c) GEN_EDX_ARG);
    return (uint)piVar4;
  }
  uVar5 = F_005003b0(*(undefined * PTR32 *)((int)this + 0x70) GEN_EDX_ARG);
  uVar3 = F_005003c0(*(undefined * PTR32 *)((int)this + 0x70) GEN_EDX_ARG);
  if (0x1000000 < uVar5) {
    *(uint *)((int)this + 0x78) = uVar3;
    if (uVar3 == 0) {
      *(undefined1 *)((int)this + 0x65) = 3;
      F_00c47745((*(uint *)(gen_frame + 0x238)) ^ (uint)(uint)(gen_frame + 0x23c) GEN_EDX_ARG);
      return 0;
    }
    _Dst = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                             (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,uVar3 * 4,0x10)));
    *(undefined * PTR32 *)((int)this + 0x74) = _Dst;
    uVar3 = 0;
    if (_Dst != (undefined *)0x0) {
      F_00c48350(_Dst,0,*(int *)((int)this + 0x78) * 4);
      uVar2 = *(undefined4 *)((int)this + 0x1a4);
      iVar1 = *(int *)((int)this + 0x70);
      (*(undefined4 *)(gen_frame + 0x34)) = 0x6d646c;
      piVar4 = (int *)F_004d4610(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar2,0);
      uVar3 = 0;
      (*(undefined1 *)(gen_frame + 0x29)) = 0;
      if (*(int *)((int)this + 0x78) != 0) {
        do {
          F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x200,"%s/%04d.mdl",(int)this + 0xa1,uVar3);
          piVar4 = (int *)F_00513d20(iVar1 + 4,&(*(undefined4 *)(gen_frame + 0x34)),((undefined1 *)(gen_frame + 0x38)),((undefined1 *)(gen_frame + 0xc)),0,0);
          if (piVar4 == (int *)0x0) {
            *(undefined1 *)((int)this + 0x65) = 4;
            F_00c47745((*(uint *)(gen_frame + 0x238)) ^ (uint)(uint)(gen_frame + 0x23c) GEN_EDX_ARG);
            return 0;
          }
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + uVar3 * 4))) = piVar4;
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)((int)this + 0x78));
      }
      *(undefined1 *)((int)this + 0xa0) = 2;
      goto LAB_00694faa;
    }
  }
  *(undefined1 *)((int)this + 0x65) = 4;
  F_00c47745((*(uint *)(gen_frame + 0x238)) ^ (uint)(uint)(gen_frame + 0x23c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00694fd0 */
GEN_FRAME uint GEN_THISCALL F_00694fd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x694fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  
  uVar2 = *(uint *)((int)this + 0x78);
  uVar6 = 0;
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0x74) + uVar4 * 4)));
      piVar5 = (int *)(iVar3 + 0x8c);
      iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar5), 0);
      if (7 < iVar1) {
        *(undefined1 *)((int)this + 0x65) = 4;
        return (uint)this;
      }
      piVar5 = (int *)(iVar3 + 0x88);
      iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar5), 0);
      uVar4 = uVar4 + 1;
      uVar6 = uVar6 + (iVar1 == 2);
    } while (uVar4 < uVar2);
  }
  if (uVar2 == uVar6) {
    *(undefined1 *)((int)this + 0x65) = 3;
  }
  return uVar4;
}

/* ref: FUN_00695060 */
GEN_NOFRAME unsigned int F_00695060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x695060u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int in_ecx;
  byte bVar5;
  uint uVar6;
  float * in_ecx_00;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  if ((param_2 == 0x1e) && ((char)*param_3 != '\0')) {
    (*(float *)(gen_frame + 0x4c)) = *param_4;
    (*(float *)(gen_frame + 0x48)) = *param_5;
    fVar7 = (float10)*param_4;
    fVar8 = (float10)*param_5;
    fVar1 = (float)(fVar7 - fVar8);
    (*(float *)(gen_frame + 0x30)) = fVar1;
    fVar2 = param_4[1];
    (*(float *)(gen_frame + 0x48)) = fVar2;
    (*(float *)(gen_frame + 0x0)) = fVar1;
    (*(float *)(gen_frame + 0x4c)) = param_5[1];
    fVar9 = (float10)fVar2;
    fVar10 = (float10)param_5[1];
    fVar1 = (float)(fVar9 - fVar10);
    (*(float *)(gen_frame + 0x34)) = fVar1;
    (*(float *)(gen_frame + 0x48)) = param_4[2];
    (*(float *)(gen_frame + 0x4)) = fVar1;
    (*(float *)(gen_frame + 0x4c)) = param_5[2];
    iVar4 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
    fVar11 = (float10)param_4[2];
    in_ecx = *(int *)(REFG(int, 0x1371284) + 0x14);
    fVar12 = (float10)param_5[2];
    fVar1 = (float)(fVar11 - fVar12);
    (*(float *)(gen_frame + 0x38)) = fVar1;
    (*(float *)(gen_frame + 0x8)) = fVar1;
    fVar1 = (float)(fVar8 + fVar7);
    (*(float *)(gen_frame + 0x20)) = fVar1;
    fVar2 = (float)(fVar10 + fVar9);
    (*(float *)(gen_frame + 0x24)) = fVar2;
    fVar3 = (float)(fVar12 + fVar11);
    (*(float *)(gen_frame + 0x28)) = fVar3;
    (*(float *)(gen_frame + 0x10)) = fVar1;
    (*(float *)(gen_frame + 0x14)) = fVar2;
    (*(float *)(gen_frame + 0x18)) = fVar3;
    if (in_ecx != 0) {
      F_006629e0(in_ecx GEN_EDX_ARG,&(*(float *)(gen_frame + 0x20)));
      in_ecx_00 = (float *)(iVar4 + 0xc0);
      uVar6 = 0;
      do {
        fVar1 = ((float)GEN_TOF(((float10)in_ecx_00[2] * (float10)(*(float *)(gen_frame + 0x28)) +
                       ((float10)*in_ecx_00 * (float10)(*(float *)(gen_frame + 0x20)) +
                       (float10)in_ecx_00[1] * (float10)(*(float *)(gen_frame + 0x24))))));
        (*(float *)(gen_frame + 0x48)) = fVar1;
        if (((float10)0 < (float10)fVar1) &&
           (bVar5 = F_006aedc0(in_ecx_00 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0))), bVar5 == 0)) {
          *(char *)param_3 = '\0';
          break;
        }
        uVar6 = uVar6 + 1;
        in_ecx_00 = in_ecx_00 + 4;
      } while (uVar6 < 6);
    }
  }
  if ((*param_3 != 0) && (uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x18))(param_1 GEN_EDX_ARG), (char)uVar6 != '\0')) {
    F_0062e380(param_1 GEN_EDX_ARG,param_2,*param_3);
  }
  return;
}

/* ref: FUN_006951e0 */
GEN_NOFRAME uint F_006951e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x6951e0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  ushort uVar1;
  short sVar2;
  undefined * this;
  float10 fVar3;
  int * piVar4;
  undefined4 * puVar5;
  uint uVar6;
  int iVar7;
  undefined4 * puVar8;
  
  (*(uint *)(gen_frame + 0x10c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x110);
  fVar3 = (float10)0;
  uVar1 = *(ushort *)(param_1 + 2);
  (*(int * PTR32 *)(gen_frame + 0x7c)) = param_1;
  sVar2 = *(short *)((int)param_1 + 10);
  iVar7 = param_1[3];
  (*(undefined4 *)(gen_frame + 0x50)) = REFG(undefined4, 0x1302e00);
  (*(undefined4 *)(gen_frame + 0x54)) = REFG(undefined4, 0x1302e04);
  (*(undefined4 *)(gen_frame + 0x58)) = REFG(undefined4, 0x1302e08);
  (*(undefined4 *)(gen_frame + 0x5c)) = REFG(undefined4, 0x1302e0c);
  (*(float *)(gen_frame + 0x40)) = (float)(int)((int)sVar2 * (uint)uVar1 + (uint)(uVar1 >> 1));
  (*(undefined4 *)(gen_frame + 0x60)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302e10)));
  (*(undefined4 *)(gen_frame + 0x64)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302e14)));
  (*(undefined4 *)(gen_frame + 0x68)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302e18)));
  (*(float *)(gen_frame + 0x44)) = 0.0;
  (*(float *)(gen_frame + 0x48)) = (float)(int)((int)(short)iVar7 * (uint)uVar1 + (uint)(uVar1 >> 1));
  iVar7 = *(int *)(param_2 * 0x358 + 0x2a4 + REFG(int, 0x137127c));
  (*(float *)(gen_frame + 0xf0)) = (float)fVar3;
  (*(float *)(gen_frame + 0xf4)) = (float)fVar3;
  (*(float *)(gen_frame + 0xf8)) = (float)fVar3;
  (*(undefined4 *)(gen_frame + 0xc0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302e10)));
  (*(undefined4 *)(gen_frame + 0xc4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc8)) = 0;
  (*(undefined4 *)(gen_frame + 0xd0)) = 0;
  (*(undefined4 *)(gen_frame + 0xd4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302e14)));
  (*(undefined4 *)(gen_frame + 0xd8)) = 0;
  (*(undefined4 *)(gen_frame + 0xe0)) = 0;
  (*(undefined4 *)(gen_frame + 0xe4)) = 0;
  (*(undefined4 *)(gen_frame + 0xe8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302e18)));
  F_004efe70(&(*(undefined4 *)(gen_frame + 0xc0)) GEN_EDX_ARG,(uint)&(*(undefined4 *)(gen_frame + 0x50)));
  (*(float *)(gen_frame + 0xf0)) = (float)((float10)(*(float *)(gen_frame + 0xf0)) + (float10)(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0xf4)) = (float)((float10)(*(float *)(gen_frame + 0xf4)) + (float10)(*(float *)(gen_frame + 0x44)));
  (*(float *)(gen_frame + 0xf8)) = (float)((float10)(*(float *)(gen_frame + 0xf8)) + (float10)(*(float *)(gen_frame + 0x48)));
  puVar5 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0x80)),(uint)&(*(undefined4 *)(gen_frame + 0xc0)),iVar7 + 0x10);
  puVar8 = ((undefined4 *)(gen_frame + 0x0));
  for (iVar7 = 0x10; piVar4 = (*(int * PTR32 *)(gen_frame + 0x7c)), iVar7 != 0; iVar7 = iVar7 - 1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar8 = puVar8 + 1;
  }
  this = (undefined *)(*(int * PTR32 *)(gen_frame + 0x7c))[5];
  puVar5 = (undefined4 *)F_004d9920(this GEN_EDX_ARG,0,0x40,2);
  *puVar5 = ((undefined4 *)(gen_frame + 0x0))[0];
  puVar5[1] = (*(undefined4 *)(gen_frame + 0x10));
  puVar5[2] = (*(undefined4 *)(gen_frame + 0x20));
  puVar5[3] = (*(undefined4 *)(gen_frame + 0x30));
  puVar5[4] = ((undefined4 *)(gen_frame + 0x0))[1];
  puVar5[5] = (*(undefined4 *)(gen_frame + 0x14));
  puVar5[6] = (*(undefined4 *)(gen_frame + 0x24));
  puVar5[7] = (*(undefined4 *)(gen_frame + 0x34));
  puVar5[8] = ((undefined4 *)(gen_frame + 0x0))[2];
  puVar5[9] = (*(undefined4 *)(gen_frame + 0x18));
  puVar5[10] = (*(undefined4 *)(gen_frame + 0x28));
  puVar5[0xb] = (*(undefined4 *)(gen_frame + 0x38));
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = GEN_FLT_TO(puVar5[0xf], REFG(float, 0x1087f04));
  *(undefined4 *)((int)this + 0x24) = 0;
  uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x14))(piVar4 GEN_EDX_ARG,param_3,(undefined4)gen_fl2bits(param_4),0xff,0,0);
  F_00c47745((*(uint *)(gen_frame + 0x10c)) ^ (uint)(uint)(gen_frame + 0x110) GEN_EDX_ARG);
  return uVar6;
}

/* ref: FUN_00695460 */
GEN_FRAME unsigned int F_00695460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x695460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00657e40((undefined *)(REFG(int, 0x137127c) + 0xecd0) GEN_EDX_ARG,param_1,param_3);
  return;
}

/* ref: FUN_00695480 */
GEN_NOFRAME uint GEN_THISCALL F_00695480(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x695480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00690510(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2db8));
  *(undefined1 *)((int)this + 0x60) = 0;
  F_006946f0((undefined *)((int)this + 0x70) GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined4 *)((int)this + 0x22c) = 0;
  return (uint)this;
}

/* ref: FUN_006954c0 */
GEN_NOFRAME byte GEN_THISCALL F_006954c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6954c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 3;
  F_0068bd00(REFG(void * PTR32, 0x1371294) GEN_EDX_FWD,this);
  pvVar2 = REFG(void * PTR32, 0x1371294);
  if ((*(byte *)((int)this + 0x24) & 1) != 0) {
    iVar1 = *((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1371294) + 0x28)));
    uVar3 = *(uint *)((int)this + 0x24) & 3 | (uint)REFG(void * PTR32, 0x1371294);
    *(int *)((int)this + 0x28) = iVar1;
    *(uint *)((int)this + 0x24) = uVar3;
    *(undefined * PTR32 *)((int)pvVar2 + 0x28) = this;
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) & 3 | (uint)this;
    }
    *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffe;
  }
  *(byte *)((int)this + 0xd4) = *(byte *)((int)this + 0xd4) & 0xfb;
  *(uint *)((int)this + 0x94) = *(uint *)((int)this + 0x94) | 3;
  *(undefined1 *)((int)this + 0xd5) = 1;
  F_0068bd00(this GEN_EDX_ARG,(int)this + 0x70);
  return 1;
}

/* ref: Client::Graphics::Scene::BGManager::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00695530(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x695530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0068b090(this GEN_EDX_FWD);
  uVar1 = F_006905b0((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::Graphics::Scene::BGManager::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_00695540(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x695540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x70) + 0x10))))(this + 0x70 GEN_EDX_FWD);
  iVar2 = *(int *)(this + 0x228);
  if (iVar2 != 0) {
    iVar3 = 0;
    do {
      ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x22c) + iVar3))) + 0x10))))(*(int *)(this + 0x22c) + iVar3)
      ;
      iVar3 = iVar3 + 0x80;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  uVar1 = (byte)this[0x60] - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    uVar1 = F_0068ef60(this GEN_EDX_ARG);
    return uVar1;
  case 1: ;
    uVar1 = F_0068f090(this GEN_EDX_ARG);
    return uVar1;
  case 2: ;
    this[0x60] = (undefined1)0x4;
    return uVar1;
  case 3: ;
    this[0x60] = (undefined1)0x5;
  }
  return uVar1;
}

/* ref: FUN_006955c0 */
GEN_NOFRAME uint GEN_THISCALL F_006955c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6955c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00690510(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined2 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x66) = 0xffff;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) | 1;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) | 10;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) & 0xef;
  *(undefined2 *)((int)this + 0x80) = 0xffff;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined2 *)((int)this + 0x82) = 0;
  *(undefined2 *)((int)this + 0x84) = 0;
  *(undefined2 *)((int)this + 0x86) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2dd4));
  *(undefined4 *)((int)this + 0x88) = 0xff000000;
  *(undefined2 *)((int)this + 0x8c) = 0x1ff;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(byte *)((int)this + 0x95) = *(byte *)((int)this + 0x95) & 0xf3 | 3;
  *(undefined1 *)((int)this + 0x94) = 0xfe;
  return (uint)this;
}

/* ref: FUN_00695660 */
GEN_NOFRAME byte GEN_THISCALL F_00695660(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x695660u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(byte *)(in_ecx + 100) = *(byte *)(in_ecx + 100) & 0xfb;
  *(uint *)(in_ecx + 0x24) = *(uint *)(in_ecx + 0x24) | 3;
  *(undefined1 *)(in_ecx + 0x65) = 1;
  return 1;
}

/* ref: Client::Graphics::Scene::BGObject::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00695670(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x695670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  
  if ((*(int *)(this + 0x60) != 0) &&
     ((*((byte *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x70) + 0xa8))) + 4))) + 0x23 +
                *((int *)GEN_TOP((*(int *)(this + 0x70) + 0xa8)))))) & 4) != 0)) {
    F_00b7f460(REFG(void * PTR32, 0x13712a4) GEN_EDX_FWD,*(int *)(this + 0x60));
  }
  this[100] = (undefined1)((byte)this[100] & 0xfb);
  this[0x65] = (undefined1)0x0;
  if (*(int *)(this + 0x60) != 0) {
    F_00b14100(REFG(void * PTR32, 0x1370c1c) GEN_EDX_ARG,*(int *)(this + 0x60));
    *(undefined4 *)(this + 0x60) = 0;
  }
  F_006905b0((undefined *)this GEN_EDX_ARG);
  if (*(int *)(this + 0x70) != 0) {
    F_0050c620(*(int *)(this + 0x70),0,0);
    *(undefined4 *)(this + 0x70) = 0;
  }
  if (((byte)this[0x95] & 8) == 0) {
    piVar3 = *(int * PTR32 *)(this + 0x78);
    if (piVar3 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG);
      *(undefined4 *)(this + 0x78) = 0;
    }
  }
  else {
    piVar3 = *(int * PTR32 *)(this + 0x78);
    if (piVar3 != (int *)0x0) {
      for (uVar2 = *(uint *)(this + 0x74); uVar2 != 0; uVar2 = uVar2 >> 4) {
        piVar1 = (int *)*piVar3;
        if (piVar1 != (int *)0x0) {
          ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
          *piVar3 = 0;
        }
        piVar3 = piVar3 + 1;
      }
      if (*(int *)(this + 0x78) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                  (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,*(int *)(this + 0x78));
        *(undefined4 *)(this + 0x78) = 0;
      }
    }
  }
  if (*(ushort *)(this + 0x80) != 0xffff) {
    F_00621a50((undefined *)(REFG(int, 0x137127c) + 0x1061c) GEN_EDX_ARG,(uint)*(ushort *)(this + 0x80));
    *(undefined2 *)(this + 0x80) = 0xffff;
  }
  uVar2 = 0;
  if (*(int *)(this + 0x7c) != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,*(int *)(this + 0x7c));
    *(undefined4 *)(this + 0x7c) = 0;
  }
  return uVar2;
}

/* ref: Client::Graphics::Scene::BGObject::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_00695790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x695790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_FWD);
  iVar4 = *(int *)(this + 0x70);
  if (((char)param_1 == '\0') && (*(char *)(iVar4 + 299) == '\0')) {
    *(undefined1 *)(iVar4 + 299) = 1;
  }
  if (*(int *)(this + 0x7c) != 0) {
    fVar7 = (float10)0;
    uVar1 = *(undefined4 *)(this + 0x54);
    (*(float *)(gen_frame + 0x80)) = (float)fVar7;
    (*(undefined4 *)(gen_frame + 0x50)) = *(undefined4 *)(this + 0x50);
    (*(float *)(gen_frame + 0x84)) = (float)fVar7;
    (*(float *)(gen_frame + 0x88)) = (float)fVar7;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    (*(undefined4 *)(gen_frame + 0x68)) = 0;
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(undefined4 *)(gen_frame + 0x74)) = 0;
    (*(undefined4 *)(gen_frame + 0x64)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x78)) = *(undefined4 *)(this + 0x58);
    F_004efe70(&(*(undefined4 *)(gen_frame + 0x50)) GEN_EDX_ARG,(uint)(this + 0x40));
    (*(float *)(gen_frame + 0x80)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x30) + (float10)(*(float *)(gen_frame + 0x80)))));
    (*(float *)(gen_frame + 0x84)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x34) + (float10)(*(float *)(gen_frame + 0x84)))));
    (*(float *)(gen_frame + 0x88)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x38) + (float10)(*(float *)(gen_frame + 0x88)))));
    (*(uint *)(gen_frame + 0x4)) = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 0xa8) + 4))) + 0x20 + *(int *)(iVar4 + 0xa8))));
    uVar5 = 0;
    if ((*(uint *)(gen_frame + 0x4)) != 0) {
      (*(int *)(gen_frame + 0x0)) = 0;
      (*(int *)(gen_frame + 0x8)) = 0;
      do {
        iVar6 = *(int *)(iVar4 + 0xb4) + (*(int *)(gen_frame + 0x8));
        fVar2 = *(float *)(iVar6 + 0x18);
        fVar3 = *(float *)(iVar6 + 0x1c);
        fVar7 = ((float10)GEN_TOD(fsin((float10)*(float *)(iVar6 + 0x14))));
        fVar8 = ((float10)GEN_TOD(fcos((float10)*(float *)(iVar6 + 0x14))));
        (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
        (*(float *)(gen_frame + 0x24)) = (float)fVar8;
        (*(float *)(gen_frame + 0x28)) = (float)fVar7;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(-(float10)(float)fVar7));
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        (*(float *)(gen_frame + 0x38)) = (float)fVar8;
        (*(undefined4 *)(gen_frame + 0x40)) = 0;
        (*(undefined4 *)(gen_frame + 0x44)) = 0;
        (*(undefined4 *)(gen_frame + 0x48)) = 0;
        F_0065ed60(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,fVar2);
        F_0065ee80(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,fVar3);
        (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)(iVar6 + 8);
        (*(undefined4 *)(gen_frame + 0x44)) = *(undefined4 *)(iVar6 + 0xc);
        (*(undefined4 *)(gen_frame + 0x48)) = *(undefined4 *)(iVar6 + 0x10);
        uVar5 = F_004ef350(*(int *)(this + 0x7c) + (*(int *)(gen_frame + 0x0)),(uint)&(*(undefined4 *)(gen_frame + 0x10)),(uint)&(*(undefined4 *)(gen_frame + 0x50)));
        (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 0x20;
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 0x40;
        (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) - 1;
      } while ((*(uint *)(gen_frame + 0x4)) != 0);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x9c)) ^ (uint)(uint)(gen_frame + 0xa0) GEN_EDX_ARG);
  return uVar5;
}

/* ref: Client::Graphics::Scene::BGObject::vf13 */
GEN_NOFRAME uint GEN_THISCALL F_006959f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6959f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float10 fVar8;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  fVar8 = (float10)0;
  fVar1 = *(float *)(this + 0x30);
  uVar2 = *(undefined4 *)(this + 0x54);
  uVar3 = *(undefined4 *)(this + 0x58);
  uVar6 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x70) + 0xf0)));
  (*(float *)(gen_frame + 0x50)) = (float)fVar8;
  uVar7 = *(undefined4 *)(this + 0x44);
  (*(float *)(gen_frame + 0x54)) = (float)fVar8;
  (*(float *)(gen_frame + 0x58)) = (float)fVar8;
  fVar4 = *(float *)(this + 0x34);
  fVar5 = *(float *)(this + 0x38);
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(this + 0x40);
  (*(undefined4 *)(gen_frame + 0x4)) = uVar7;
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(this + 0x48);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(this + 0x4c);
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(this + 0x50);
  (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(this + 0x50);
  (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x18)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = uVar3;
  F_004efe70(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_FWD,(uint)&(*(undefined4 *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x50)) = (float)((float10)(*(float *)(gen_frame + 0x50)) + (float10)fVar1);
  (*(float *)(gen_frame + 0x54)) = (float)((float10)(*(float *)(gen_frame + 0x54)) + (float10)fVar4);
  (*(float *)(gen_frame + 0x58)) = (float)((float10)(*(float *)(gen_frame + 0x58)) + (float10)fVar5);
  F_005fec10(param_1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x20)),uVar6);
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_00695b00 */
GEN_FRAME byte GEN_THISCALL F_00695b00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x695b00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  code * pcVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x6d646c;
  uVar3 = F_00513d20(param_1,&(*(undefined * PTR32 *)(gen_frame + 0x8)),param_2,0,0,0);
  if (uVar3 != 0) {
    *(uint *)((int)this + 0x70) = uVar3;
    piVar4 = (int *)(uVar3 + 0x88);
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar4), 0);
    if (iVar1 != 2) {
      *(undefined1 *)((int)this + 0x65) = 2;
      uVar3 = REFG(undefined4, 0x1371294);
      if ((*(byte *)((int)this + 0x24) & 1) != 0) {
        iVar1 = *(int *)(REFG(undefined4, 0x1371294) + 0x28);
        uVar5 = *(uint *)((int)this + 0x24) & 3 | REFG(undefined4, 0x1371294);
        *(int *)((int)this + 0x28) = iVar1;
        *(uint *)((int)this + 0x24) = uVar5;
        *(undefined * PTR32 *)(uVar3 + 0x28) = this;
        if (iVar1 != 0) {
          *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) & 3 | (uint)this;
        }
        *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffe;
      }
      return 1;
    }
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0x8c)));
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar4), 0);
    if (iVar1 < 8) {
      pcVar2 = *(gen_code32 *)(*(int *)this + 0x28);
      *(undefined1 *)((int)this + 0x65) = 3;
      (*pcVar2)(this);
      *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 1;
      return 1;
    }
    *(undefined1 *)((int)this + 0x65) = 4;
  }
  return 0;
}

/* ref: FUN_00695bc0 */
GEN_FRAME byte GEN_THISCALL F_00695bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x695bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  byte bVar1;
  
  F_004ff310(&(*(undefined4 *)&gen_args[2]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  bVar1 = F_00695b00((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
  return bVar1;
}

/* ref: Client::Graphics::Scene::BGObject::vf18 */
GEN_NOFRAME uint GEN_THISCALL F_00695bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x695bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x1b0];
  undefined4 uVar1;
  float10 fVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0x19c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1a0);
  fVar2 = (float10)0;
  (*(float *)(gen_frame + 0x180)) = (float)fVar2;
  (*(float *)(gen_frame + 0x184)) = (float)fVar2;
  (*(float *)(gen_frame + 0x188)) = (float)fVar2;
  uVar1 = *(undefined4 *)(this + 0x54);
  (*(undefined4 *)(gen_frame + 0x150)) = *(undefined4 *)(this + 0x50);
  (*(undefined4 *)(gen_frame + 0x48)) = param_2;
  (*(undefined4 *)(gen_frame + 0x154)) = 0;
  (*(undefined4 *)(gen_frame + 0x158)) = 0;
  (*(undefined4 *)(gen_frame + 0x160)) = 0;
  (*(undefined4 *)(gen_frame + 0x168)) = 0;
  (*(undefined4 *)(gen_frame + 0x170)) = 0;
  (*(undefined4 *)(gen_frame + 0x174)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = this;
  (*(undefined4 * PTR32 *)(gen_frame + 0x44)) = param_1;
  (*(undefined4 *)(gen_frame + 0x164)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x178)) = *(undefined4 *)(this + 0x58);
  F_004efe70(&(*(undefined4 *)(gen_frame + 0x150)) GEN_EDX_FWD,(uint)(this + 0x40));
  (*(float *)(gen_frame + 0x180)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x30) + (float10)(*(float *)(gen_frame + 0x180)))));
  (*(float *)(gen_frame + 0x184)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x34) + (float10)(*(float *)(gen_frame + 0x184)))));
  (*(float *)(gen_frame + 0x188)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x38) + (float10)(*(float *)(gen_frame + 0x188)))));
  puVar3 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x50)),&(*(undefined4 *)(gen_frame + 0x150)));
  puVar5 = ((undefined4 *)(gen_frame + 0x110));
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 - 1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0x40))((*(undefined * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x90)),(*(undefined4 *)(gen_frame + 0x48)));
  puVar5 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0xd0)),uVar4,(uint)((undefined4 *)(gen_frame + 0x110)));
  puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x44));
  puVar7 = ((undefined4 *)(gen_frame + 0x0));
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 - 1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  *puVar3 = (*(undefined4 *)(gen_frame + 0x30));
  puVar3[1] = (*(undefined4 *)(gen_frame + 0x34));
  puVar3[2] = (*(undefined4 *)(gen_frame + 0x38));
  F_00c47745((*(uint *)(gen_frame + 0x19c)) ^ (uint)(uint)(gen_frame + 0x1a0) GEN_EDX_ARG);
  return (uint)puVar3;
}

/* ref: FUN_00695d50 */
GEN_NOFRAME uint GEN_THISCALL F_00695d50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x695d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  code * pcVar2;
  int * piVar3;
  
  piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0x88)));
  iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar3), 0);
  if (iVar1 == 2) {
    piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0x8c)));
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar3), 0);
    if (7 < iVar1) {
      *(undefined1 *)((int)this + 0x65) = 4;
      return (uint)piVar3;
    }
    pcVar2 = *(gen_code32 *)(*(int *)this + 0x28);
    *(undefined1 *)((int)this + 0x65) = 3;
    piVar3 = ((int *)GEN_TOP((*pcVar2)(this)));
    *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 1;
  }
  return (uint)piVar3;
}

/* ref: Client::Graphics::Scene::BGObject::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_00695da0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x695da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  uint uVar8;
  
  (*(uint *)(gen_frame + 0xec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf0);
  fVar7 = (float10)0;
  (*(float *)(gen_frame + 0xd0)) = (float)fVar7;
  (*(float *)(gen_frame + 0xd4)) = (float)fVar7;
  (*(float *)(gen_frame + 0xd8)) = (float)fVar7;
  uVar4 = *(undefined4 *)(this + 0x48);
  uVar1 = *(undefined4 *)(this + 0x54);
  uVar2 = *(undefined4 *)(this + 0x58);
  (*(float *)(gen_frame + 0x20)) = *(float *)(this + 0x30);
  (*(float *)(gen_frame + 0x24)) = *(float *)(this + 0x34);
  (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(this + 0x44);
  iVar5 = *(int *)(this + 0x70);
  (*(float *)(gen_frame + 0x28)) = *(float *)(this + 0x38);
  uVar3 = *(undefined4 *)(this + 0x50);
  (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(this + 0x40);
  uVar6 = *(undefined4 *)(this + 0x4c);
  (*(undefined4 *)(gen_frame + 0x40)) = uVar3;
  (*(undefined4 *)(gen_frame + 0xa0)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x38)) = uVar4;
  (*(undefined4 *)(gen_frame + 0x3c)) = uVar6;
  (*(undefined4 *)(gen_frame + 0x44)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x48)) = uVar2;
  (*(undefined4 *)(gen_frame + 0xa4)) = 0;
  (*(undefined4 *)(gen_frame + 0xa8)) = 0;
  (*(undefined4 *)(gen_frame + 0xb0)) = 0;
  (*(undefined4 *)(gen_frame + 0xb4)) = uVar1;
  (*(undefined4 *)(gen_frame + 0xb8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc0)) = 0;
  (*(undefined4 *)(gen_frame + 0xc4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc8)) = uVar2;
  F_004efe70(&(*(undefined4 *)(gen_frame + 0xa0)) GEN_EDX_FWD,(uint)&(*(undefined4 *)(gen_frame + 0x30)));
  (*(float *)(gen_frame + 0xd0)) = (float)((float10)(*(float *)(gen_frame + 0xd0)) + (float10)(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0xd4)) = (float)((float10)(*(float *)(gen_frame + 0xd4)) + (float10)(*(float *)(gen_frame + 0x24)));
  (*(float *)(gen_frame + 0xd8)) = (float)((float10)(*(float *)(gen_frame + 0xd8)) + (float10)(*(float *)(gen_frame + 0x28)));
  F_005fec10(((undefined1 *)(gen_frame + 0x50)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0xa0)),*(undefined4 *)(iVar5 + 0xf0));
  uVar8 = F_0068c610(((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x50)));
  if (*(undefined * PTR32 *)(this + 0x60) != (undefined *)0x0) {
    uVar8 = F_00b81ef0(*(undefined * PTR32 *)(this + 0x60) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  }
  F_00c47745((*(uint *)(gen_frame + 0xec)) ^ (uint)(uint)(gen_frame + 0xf0) GEN_EDX_ARG);
  return uVar8;
}

/* ref: FUN_00695f00 */
GEN_FRAME byte GEN_THISCALL F_00695f00(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x695f00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  undefined * this;
  float fVar1;
  byte bVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = (*(float *)&gen_args[1]);
  fVar3 = (float10)(*(float *)&gen_args[1]);
  this = *(undefined * PTR32 *)((*(int *)&gen_args[0]) + 0x70);
  if ((*(char *)(REFG(int, 0x1371278) + 0x13) != '\0') && (*(ushort *)((*(int *)&gen_args[0]) + 0x88) != 0)) {
    fVar4 = (float10)*(ushort *)((*(int *)&gen_args[0]) + 0x88);
    (*(float *)&gen_args[1]) = (float)(fVar4 * fVar4);
    if ((float10)(*(float *)&gen_args[1]) < fVar3) {
      return 0xfe;
    }
  }
  (*(float *)&gen_args[1]) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)&gen_args[1]), 1, 3),*(char *)(REFG(int, 0x1371278) + 0x12)));
  if (*(char *)(REFG(int, 0x1371278) + 0x12) == -1) {
    (*(float *)&gen_args[1]) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)&gen_args[1]), 1, 3),*(char *)((*(int *)&gen_args[0]) + 0x66)));
    if (*(char *)((*(int *)&gen_args[0]) + 0x66) == -1) {
      bVar2 = F_004ffb80(this GEN_EDX_FWD,fVar1);
      return bVar2;
    }
    bVar2 = F_004ffbd0(this GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)&gen_args[1])));
    return bVar2;
  }
  bVar2 = F_004ffbd0(this GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)&gen_args[1])));
  return bVar2;
}

/* ref: FUN_00695f90 */
GEN_FRAME uint GEN_THISCALL F_00695f90(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x695f90u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  ushort uVar2;
  undefined * this;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined3 extraout_var = 0;
  uint uVar6;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined2 extraout_var_05 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  undefined * this_00;
  
  uVar2 = *(ushort *)(REFG(int, 0x137127c) + 0x1061c);
  this = *(undefined * PTR32 *)((*(int *)&gen_args[0]) + 0x70);
  this_00 = (undefined *)(REFG(int, 0x137127c) + 0x1061c);
  if ((*(ushort *)((*(int *)&gen_args[0]) + 0x80) != 0xffff) &&
     (iVar1 = REFG(int, 0x137127c) + 0x10640 + (uint)*(ushort *)((*(int *)&gen_args[0]) + 0x80) * 0x18, iVar1 != 0)) {
    if (*(char *)(iVar1 + 2) == '\x01') {
      (*(undefined4 *)(gen_frame + 0x3)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x3)), 1, 3),*(undefined1 *)(iVar1 + 3));
      bVar3 = F_004ffb50(this GEN_EDX_FWD,(*(undefined4 *)(gen_frame + 0x3)));
      uVar6 = CONCAT31(extraout_var,bVar3);
      if (bVar3 == 0) {
        bVar3 = F_00695f00((*(int *)&gen_args[0]) GEN_EDX_ARG,(*(float *)&gen_args[1]));
        *(byte *)((*(int *)&gen_args[0]) + 0x94) = bVar3;
        uVar6 = F_00621a50(this_00 GEN_EDX_ARG,(uint)*(ushort *)((*(int *)&gen_args[0]) + 0x80));
        *(undefined2 *)((*(int *)&gen_args[0]) + 0x80) = 0xffff;
        *(ushort *)((*(int *)&gen_args[0]) + 0x86) = uVar2;
        return uVar6;
      }
    }
    else if (*(char *)(iVar1 + 2) == '\x02') {
      (*(float *)&gen_args[1]) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)&gen_args[1]), 1, 3),*(undefined1 *)(iVar1 + 3)));
      bVar3 = F_004ffb50(this GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)&gen_args[1])));
      uVar6 = CONCAT31(extraout_var_00,bVar3);
      if (bVar3 == 0) {
        *(undefined1 *)((*(int *)&gen_args[0]) + 0x94) = 0xfe;
        uVar6 = F_00621a50(this_00 GEN_EDX_ARG,(uint)*(ushort *)((*(int *)&gen_args[0]) + 0x80));
        *(undefined2 *)((*(int *)&gen_args[0]) + 0x80) = 0xffff;
        *(ushort *)((*(int *)&gen_args[0]) + 0x86) = uVar2;
        return uVar6;
      }
    }
    else {
      (*(undefined4 *)(gen_frame + 0x3)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x3)), 1, 3),*(undefined1 *)(iVar1 + 3));
      (*(undefined4 *)(gen_frame + 0x7)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x7)), 1, 3),*(undefined1 *)(iVar1 + 4));
      bVar3 = F_004ffb50(this GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x3)));
      bVar4 = F_004ffb50(this GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x7)));
      uVar6 = CONCAT31(extraout_var_01,bVar4);
      if ((bVar3 == 0) || (bVar4 == 0)) {
        bVar3 = F_00695f00((*(int *)&gen_args[0]) GEN_EDX_ARG,(*(float *)&gen_args[1]));
        *(byte *)((*(int *)&gen_args[0]) + 0x94) = bVar3;
        F_00621a50(this_00 GEN_EDX_ARG,(uint)*(ushort *)((*(int *)&gen_args[0]) + 0x80));
        uVar6 = 0xffff;
        *(undefined2 *)((*(int *)&gen_args[0]) + 0x80) = 0xffff;
      }
    }
    *(ushort *)((*(int *)&gen_args[0]) + 0x86) = uVar2;
    return uVar6;
  }
  if ((uint)uVar2 != *(ushort *)((*(int *)&gen_args[0]) + 0x86) + 1) {
    bVar3 = F_00695f00((*(int *)&gen_args[0]) GEN_EDX_ARG,(*(float *)&gen_args[1]));
    *(byte *)((*(int *)&gen_args[0]) + 0x94) = bVar3;
    *(ushort *)((*(int *)&gen_args[0]) + 0x86) = uVar2;
    return CONCAT22(extraout_var_05,uVar2);
  }
  bVar4 = F_00695f00((*(int *)&gen_args[0]) GEN_EDX_ARG,(*(float *)&gen_args[1]));
  uVar6 = CONCAT31(extraout_var_02,bVar4);
  bVar3 = *(byte *)((*(int *)&gen_args[0]) + 0x94);
  (*(undefined4 *)(gen_frame + 0x3)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x3)), 1, 3),bVar4);
  (*(undefined4 *)(gen_frame + 0x7)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x7)), 1, 3),bVar3);
  *(byte *)((*(int *)&gen_args[0]) + 0x94) = bVar4;
  if (bVar3 != bVar4) {
    if (bVar3 == 0xfe) {
      uVar6 = F_00621970(this_00 GEN_EDX_ARG,1,1,(*(int *)&gen_args[0]),(*(undefined4 *)(gen_frame + 0x3)),0xfe);
      *(short *)((*(int *)&gen_args[0]) + 0x80) = (short)uVar6;
      if ((short)uVar6 != -1) goto LAB_00696236;
    }
    else {
      if (bVar4 != 0xfe) {
        bVar4 = F_004ffb50(this GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x3)));
        bVar5 = F_004ffb50(this GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x7)));
        uVar6 = CONCAT31(extraout_var_04,bVar5);
        if ((bVar4 != 0) && (bVar5 != 0)) {
          uVar6 = F_00621970(this_00 GEN_EDX_ARG,1,0,(*(int *)&gen_args[0]),(*(undefined4 *)(gen_frame + 0x3)),(*(undefined4 *)(gen_frame + 0x7)));
          *(short *)((*(int *)&gen_args[0]) + 0x80) = (short)uVar6;
          if ((short)uVar6 == -1) {
            *(byte *)((*(int *)&gen_args[0]) + 0x94) = bVar3;
          }
        }
        goto LAB_00696236;
      }
      bVar4 = F_004ffb50(this GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x7)));
      uVar6 = CONCAT31(extraout_var_03,bVar4);
      if (bVar4 != 0) {
        uVar6 = F_00621970(this_00 GEN_EDX_ARG,1,2,(*(int *)&gen_args[0]),(*(undefined4 *)(gen_frame + 0x7)),(*(undefined4 *)(gen_frame + 0x7)));
        *(short *)((*(int *)&gen_args[0]) + 0x80) = (short)uVar6;
        *(byte *)((*(int *)&gen_args[0]) + 0x94) = bVar3;
        *(ushort *)((*(int *)&gen_args[0]) + 0x86) = uVar2;
        return CONCAT22((short)(uVar6 >> 0x10),uVar2);
      }
    }
    *(undefined1 *)((*(int *)&gen_args[0]) + 0x94) = 0xfe;
    *(ushort *)((*(int *)&gen_args[0]) + 0x86) = uVar2;
    return CONCAT22((short)(uVar6 >> 0x10),uVar2);
  }
LAB_00696236: ;
  *(ushort *)((*(int *)&gen_args[0]) + 0x86) = uVar2;
  return CONCAT22((short)(uVar6 >> 0x10),uVar2);
}

/* ref: FUN_00696250 */
GEN_FRAME uint GEN_THISCALL F_00696250(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x696250u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = F_00695f00(param_1 GEN_EDX_FWD,param_2);
  uVar3 = (uint)*(ushort *)(param_1 + 0x80);
  *(byte *)(param_1 + 0x94) = bVar1;
  uVar2 = uVar3;
  if ((*(ushort *)(param_1 + 0x80) != 0xffff) &&
     (uVar2 = 0, REFG(int, 0x137127c) + 0x10640 + uVar3 * 0x18 != 0)) {
    uVar2 = F_00621a50((undefined *)(REFG(int, 0x137127c) + 0x1061c) GEN_EDX_ARG,uVar3);
    *(undefined2 *)(param_1 + 0x80) = 0xffff;
  }
  return uVar2;
}

/* ref: FUN_006962b0 */
GEN_NOFRAME byte GEN_THISCALL F_006962b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6962b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  float * pfVar7;
  uint uVar8;
  float * pfVar9;
  uint uVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = this;
  if (*(int *)(REFG(int, 0x1371284) + 0x14) != 0) {
    iVar4 = *((int *)GEN_TOP((*(int *)(REFG(int, 0x1371284) + 0x14) + 0x10)));
    iVar5 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
    (*(float *)(gen_frame + 0x20)) = 0.0;
    (*(float *)(gen_frame + 0x24)) = 0.0;
    (*(float *)(gen_frame + 0x28)) = gen_bits2f(REFG(float, 0x1087f04));
    pfVar7 = (float *)F_004f4130(&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x20)),iVar4 + 0x10);
    (*(float *)(gen_frame + 0x30)) = *pfVar7;
    (*(float *)(gen_frame + 0x34)) = pfVar7[1];
    iVar4 = iVar5 + 0xc0;
    (*(float *)(gen_frame + 0x38)) = pfVar7[2];
    (*(int *)(gen_frame + 0x50)) = iVar4;
    uVar10 = 0;
    uVar8 = 0;
    pfVar9 = (float *)(iVar5 + 200);
    do {
      (*(float *)(gen_frame + 0x58)) = pfVar9[-1];
      (*(float *)(gen_frame + 0x5c)) = pfVar9[-2];
      (*(float *)(gen_frame + 0x54)) = *pfVar9;
      fVar11 = (float10)pfVar9[-2];
      fVar12 = (float10)pfVar9[-1];
      fVar13 = (float10)*pfVar9;
      fVar1 = ((float)GEN_TOF((fVar13 * (float10)pfVar7[2] +
                     (fVar12 * (float10)pfVar7[1] + fVar11 * (float10)*pfVar7))));
      (*(float *)(gen_frame + 0x54)) = fVar1;
      if (!((float10)fVar1 <= (float10)0)) {
        fVar1 = ((float)GEN_TOF((fVar13 * (float10)param_1[2] +
                       (fVar12 * (float10)param_1[1] + (float10)*param_1 * fVar11))));
        (*(float *)(gen_frame + 0x54)) = fVar1;
        fVar11 = (float10)fVar1 - (float10)pfVar9[1];
        (*(float *)(gen_frame + 0x54)) = param_1[3];
        fVar12 = (float10)param_1[3];
        if (!(fVar11 <= fVar12)) {
          return 0;
        }
        if (!(fVar11 <= -fVar12)) {
          uVar10 = uVar10 | 1 << ((byte)uVar8 & 0x1f);
        }
      }
      uVar8 = uVar8 + 1;
      pfVar9 = pfVar9 + 4;
    } while (uVar8 < 6);
    if (uVar10 != 0) {
      (*(float *)(gen_frame + 0x54)) = *param_1;
      (*(float *)(gen_frame + 0x58)) = *param_2;
      fVar11 = (float10)*param_1;
      fVar12 = (float10)*param_2;
      fVar1 = (float)(fVar11 - fVar12);
      (*(float *)(gen_frame + 0x30)) = fVar1;
      fVar2 = param_1[1];
      (*(float *)(gen_frame + 0x54)) = fVar2;
      (*(float *)(gen_frame + 0x0)) = fVar1;
      (*(float *)(gen_frame + 0x58)) = param_2[1];
      fVar13 = (float10)fVar2;
      fVar14 = (float10)param_2[1];
      fVar1 = (float)(fVar13 - fVar14);
      (*(float *)(gen_frame + 0x34)) = fVar1;
      (*(float *)(gen_frame + 0x54)) = param_1[2];
      (*(float *)(gen_frame + 0x4)) = fVar1;
      (*(float *)(gen_frame + 0x58)) = param_2[2];
      fVar15 = (float10)param_1[2];
      fVar16 = (float10)param_2[2];
      fVar1 = (float)(fVar15 - fVar16);
      (*(float *)(gen_frame + 0x38)) = fVar1;
      (*(float *)(gen_frame + 0x8)) = fVar1;
      fVar1 = (float)(fVar12 + fVar11);
      (*(float *)(gen_frame + 0x20)) = fVar1;
      fVar2 = (float)(fVar14 + fVar13);
      (*(float *)(gen_frame + 0x24)) = fVar2;
      fVar3 = (float)(fVar16 + fVar15);
      (*(float *)(gen_frame + 0x28)) = fVar3;
      (*(float *)(gen_frame + 0x10)) = fVar1;
      (*(float *)(gen_frame + 0x14)) = fVar2;
      (*(float *)(gen_frame + 0x18)) = fVar3;
      bVar6 = F_0068b210(iVar4,uVar10,&(*(float *)(gen_frame + 0x0)));
      return bVar6;
    }
  }
  return 1;
}

/* ref: FUN_006964c0 */
GEN_NOFRAME uint GEN_THISCALL F_006964c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6964c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  piVar3 = (int *)F_006026a0(this GEN_EDX_FWD,param_1);
  if (param_1 == 1) {
    if (param_2 == 0x1e) {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0xa8)));
      bVar1 = *((byte *)GEN_TOP((*(int *)(iVar2 + 4) + iVar2 + 0x1f)));
      if (((bVar1 >> 1 | bVar1) & 0x20) == 0 && (bVar1 >> 2 & 0x20) == 0) {
        param_3 = param_3 & 0xfffffcff;
      }
      uVar4 = 0xffffff00;
      if (*(char *)((int)this + 0x8b) == '\0') {
        param_3 = param_3 & 0xffffff00;
      }
      if ((char)param_3 != '\0') {
        if ((*(byte *)((int)this + 0x95) & 4) != 0) {
          uVar4 = 0xffffffff;
        }
        param_3 = param_3 & uVar4;
      }
    }
    else if ((param_2 < 0x18) &&
            (iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0xa8))),
            (~(*((byte *)GEN_TOP((*(int *)(iVar2 + 4) + 0x1f + iVar2))) >> 1) &
             *(byte *)((int)this + 0x95) >> 1 & 1) == 0)) {
      uVar4 = 0;
      goto LAB_006965cc;
    }
    uVar4 = param_3;
    if ((param_3 != 0) && (uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3 GEN_EDX_ARG), (char)uVar5 != '\0')) {
      iVar2 = param_2 * 0x358 + 4 + REFG(int, 0x137127c);
      F_0054fa20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(int)this + 0x30);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3 GEN_EDX_ARG,iVar2,*(undefined4 *)((int)this + 0x70),param_3,((undefined1 *)(gen_frame + 0x0)))
      ;
    }
  }
  else if ((param_1 == 2) || (uVar4 = param_3, param_1 == 3)) {
    if (param_2 < 0x18) {
      uVar4 = 0;
    }
    else {
      uVar4 = param_3 & 0x3000000;
    }
  }
LAB_006965cc: ;
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00696610 */
GEN_FRAME uint GEN_THISCALL F_00696610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x696610u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int * piVar5;
  uint uVar6;
  int iVar7;
  float10 extraout_ST0;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if ((ushort)param_2 == 0xffff) {
    iVar7 = 0;
  }
  else {
    iVar7 = REFG(int, 0x137127c) + 0x10640 + (uint)(ushort)param_2 * 0x18;
  }
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*param_1 + 0x6c))(param_1);
  F_00621900(iVar7 GEN_EDX_FWD,&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x14)));
  uVar1 = *(undefined1 *)(iVar7 + 3);
  uVar2 = *(undefined1 *)((int)param_1 + 0x8b);
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),*(undefined1 *)(iVar7 + 4));
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)(float)((float10)1 - extraout_ST0) * (float10)(*(float *)(gen_frame + 0x10)))));
  uVar3 = *(undefined1 *)((int)param_1 + 0x8d);
  (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),uVar1);
  iVar4 = param_1[0x23];
  (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)(float)((float10)1 - extraout_ST0) * (float10)(*(float *)(gen_frame + 0x14)))));
  (*(undefined1 *)(gen_frame + 0x1a)) = uVar3;
  iVar7 = param_1[0x24];
  (*(undefined1 *)(gen_frame + 0x18)) = uVar2;
  (*(undefined1 *)(gen_frame + 0x19)) = (char)iVar4;
  (*(int *)(gen_frame + 0x20)) = iVar7;
  (*(undefined2 *)(gen_frame + 0x1c)) = *(undefined2 *)((int)param_1 + 0x82);
  (*(undefined2 *)(gen_frame + 0x1e)) = (short)param_1[0x21];
  piVar5 = (int *)F_006026a0(param_1 GEN_EDX_ARG,1);
  (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x10));
  uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x14))
                    (piVar5 GEN_EDX_ARG,param_3,(undefined4)gen_fl2bits(param_4),(*(undefined4 *)(gen_frame + 0x4)),param_1 + 0xc,
                     &(*(undefined1 *)(gen_frame + 0x18)));
  if ((*(float *)(gen_frame + 0x14)) != 0.0) {
    (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x14));
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x14))
                      (piVar5 GEN_EDX_ARG,param_3,(undefined4)gen_fl2bits(param_4),(*(undefined4 *)(gen_frame + 0x8)),param_1 + 0xc,
                       &(*(undefined1 *)(gen_frame + 0x18)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return uVar6;
}

/* ref: FUN_00696740 */
GEN_NOFRAME uint F_00696740(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x696740u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  undefined * this;
  uint uVar1;
  int * piVar2;
  float fVar3;
  int * piVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined4 * puVar7;
  float10 extraout_ST0;
  double dVar8;
  
  (*(uint *)(gen_frame + 0xec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf0);
  (*(int *)(gen_frame + 0x48)) = param_2;
  (*(int * PTR32 *)(gen_frame + 0x44)) = param_1;
  extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*param_1 + 0x6c))(param_1);
  uVar1 = (uint)(ulonglong)gen_d2bits(dVar8); dVar8 = extraout_ST0;
  (*(float *)(gen_frame + 0x4c)) = (float)((float10)1 - extraout_ST0);
  if ((!((float10)(float)((float10)1 - extraout_ST0) < (float10)REFG(float, 0x10905c4))) &&
     (uVar1 = F_00695f90(param_1 GEN_EDX_ARG,param_4), (char)param_1[0x25] != -2)) {
    piVar2 = (int *)F_006026a0(param_1 GEN_EDX_ARG,1);
    if (piVar2 != (int *)0x0) {
      fVar3 = param_3;
      if ((*(byte *)((int)param_1 + 0x95) & 8) != 0) {
        fVar3 = gen_bits2f(F_006964c0(param_1 GEN_EDX_ARG,1,(*(int *)(gen_frame + 0x48)),(undefined4)gen_fl2bits(param_3)));
      }
      if (fVar3 != 0.0) {
        if (*(ushort *)(param_1 + 0x20) == 0xffff) {
          iVar6 = param_1[0x23];
          (*(undefined1 *)(gen_frame + 0xdc)) = *(undefined1 *)((int)param_1 + 0x8b);
          (*(undefined1 *)(gen_frame + 0xde)) = *(undefined1 *)((int)param_1 + 0x8d);
          (*(undefined2 *)(gen_frame + 0xe2)) = (short)param_1[0x21];
          (*(undefined1 *)(gen_frame + 0xdd)) = (char)iVar6;
          (*(undefined2 *)(gen_frame + 0xe0)) = *(undefined2 *)((int)param_1 + 0x82);
          (*(int *)(gen_frame + 0xe4)) = param_1[0x24];
          (*(float *)(gen_frame + 0xe8)) = (*(float *)(gen_frame + 0x4c));
          ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x14))
                    (piVar2 GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar3),(undefined4)gen_fl2bits(param_4),
                     (uint)*(byte *)(param_1 + 0x25),param_1 + 0xc,&(*(undefined1 *)(gen_frame + 0xdc)));
        }
        else {
          F_00696610(param_1 GEN_EDX_ARG,(uint)*(ushort *)(param_1 + 0x20),(undefined4)gen_fl2bits(fVar3),
                       param_4);
        }
      }
    }
    piVar4 = (int *)F_006026a0(param_1 GEN_EDX_ARG,2);
    (*(int * PTR32 *)(gen_frame + 0x40)) = piVar4;
    piVar2 = param_1;
    if (piVar4 != (int *)0x0) {
      if ((*(byte *)((int)param_1 + 0x95) & 8) == 0) {
        (*(float *)(gen_frame + 0x4c)) = param_3;
      }
      else {
        fVar3 = gen_bits2f(F_006964c0(param_1 GEN_EDX_ARG,2,(*(int *)(gen_frame + 0x48)),(undefined4)gen_fl2bits(param_3)));
        (*(float *)(gen_frame + 0x4c)) = fVar3;
      }
      if ((*(float *)(gen_frame + 0x4c)) != 0.0) {
        iVar6 = *(int *)((*(int *)(gen_frame + 0x48)) * 0x358 + 0x2a4 + REFG(int, 0x137127c));
        F_0054fa20(((undefined1 *)(gen_frame + 0x90)) GEN_EDX_ARG,param_1 + 0xc);
        puVar5 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0x50)),(uint)((undefined1 *)(gen_frame + 0x90)),iVar6 + 0x10);
        puVar7 = ((undefined4 *)(gen_frame + 0x0));
        for (iVar6 = 0x10; piVar2 = (*(int * PTR32 *)(gen_frame + 0x40)), iVar6 != 0; iVar6 = iVar6 - 1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        this = (undefined *)(*(int * PTR32 *)(gen_frame + 0x40))[5];
        puVar5 = ((undefined4 *)(gen_frame + 0x0));
        uVar1 = F_004d9920(this GEN_EDX_ARG,0,0x40,2);
        F_0065f5c0(uVar1 GEN_EDX_ARG,puVar5);
        *(undefined4 *)((int)this + 0x24) = 0;
        ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x14))
                  (piVar2 GEN_EDX_ARG,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x4c))),(undefined4)gen_fl2bits(param_4),0xff,0
                   ,0);
        piVar2 = (*(int * PTR32 *)(gen_frame + 0x44));
      }
    }
    piVar4 = (int *)F_006026a0(piVar2 GEN_EDX_ARG,3);
    uVar1 = 0;
    if (piVar4 != (int *)0x0) {
      fVar3 = param_3;
      if ((*(byte *)((int)piVar2 + 0x95) & 8) != 0) {
        fVar3 = gen_bits2f(F_006964c0(piVar2 GEN_EDX_ARG,3,(*(int *)(gen_frame + 0x48)),(undefined4)gen_fl2bits(param_3)));
      }
      uVar1 = 0;
      if (fVar3 != 0.0) {
        uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x14))
                          (piVar4 GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar3),(undefined4)gen_fl2bits(param_4),
                           (uint)*(byte *)(piVar2 + 0x25),piVar2 + 0xc,0);
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xec)) ^ (uint)(uint)(gen_frame + 0xf0) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_006969e0 */
GEN_FRAME uint F_006969e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6969e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  char * pcVar1;
  char cVar2;
  undefined * this;
  uint uVar3;
  undefined4 in_ECX = 0;
  undefined4 local_8;
  
  pcVar1 = (char *)((*(int *)&gen_args[0]) + 0x66);
  cVar2 = *(char *)((*(int *)&gen_args[0]) + 0x67);
  this = *(undefined * PTR32 *)((*(int *)&gen_args[0]) + 0x70);
  (*(int *)&gen_args[0]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[0]), 1, 3),*pcVar1);
  local_8 = CONCAT31((int3)((uint)in_ECX >> 8),cVar2);
  if (*pcVar1 == -1) {
    F_00502250(this GEN_EDX_ARG,(*(float *)&gen_args[1]));
  }
  else {
    F_00502310(this GEN_EDX_ARG,(*(int *)&gen_args[0]));
  }
  if (cVar2 != -1) {
    uVar3 = F_00504650(this GEN_EDX_ARG,local_8);
    return uVar3;
  }
  uVar3 = F_00504540(this GEN_EDX_ARG,(*(float *)&gen_args[1]));
  return uVar3;
}

/* ref: FUN_00696a50 */
GEN_FRAME uint F_00696a50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x696a50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = F_00695f00(param_1 GEN_EDX_ARG,param_2);
  uVar3 = (uint)*(ushort *)(param_1 + 0x80);
  *(byte *)(param_1 + 0x94) = bVar1;
  uVar2 = uVar3;
  if ((*(ushort *)(param_1 + 0x80) != 0xffff) &&
     (uVar2 = 0, REFG(int, 0x137127c) + 0x10640 + uVar3 * 0x18 != 0)) {
    uVar2 = F_00621a50((undefined *)(REFG(int, 0x137127c) + 0x1061c) GEN_EDX_ARG,uVar3);
    *(undefined2 *)(param_1 + 0x80) = 0xffff;
  }
  return uVar2;
}

/* ref: FUN_00696ab0 */
GEN_FRAME uint F_00696ab0(unsigned int gen_a0)
{
  GEN_ENTER(0x696ab0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  ushort uVar1;
  undefined * this;
  int iVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x80);
  this = (undefined *)(REFG(int, 0x137127c) + 0x1061c);
  if (uVar1 == 0xffff) {
    iVar2 = 0;
  }
  else {
    iVar2 = REFG(int, 0x137127c) + 0x10640 + (uint)uVar1 * 0x18;
  }
  if (*(char *)(iVar2 + 2) == '\x02') {
    *(undefined1 *)(param_1 + 0x94) = 0xfe;
  }
  F_00621a50(this GEN_EDX_ARG,(uint)uVar1);
  *(undefined2 *)(param_1 + 0x80) = 0xffff;
  return 0xffff;
}

/* ref: FUN_00696b10 */
GEN_NOFRAME uint GEN_THISCALL F_00696b10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x696b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00690510(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined2 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x66) = 0xffff;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) | 0xb;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) & 0xef;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2ea4));
  return (uint)this;
}

/* ref: FUN_00696b50 */
GEN_NOFRAME byte GEN_THISCALL F_00696b50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x696b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) & 0xfb;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 3;
  *(undefined1 *)((int)this + 0x65) = 1;
  uVar1 = F_00625830((int)this + 0x30);
  *(uint *)((int)this + 0x70) = uVar1;
  if (uVar1 == 0) {
    *(undefined1 *)((int)this + 0x65) = 4;
    return 0;
  }
  F_0065d5d0(REFG(void * PTR32, 0x1371280) GEN_EDX_ARG,uVar1);
  return 1;
}

/* ref: Client::Graphics::Scene::Light::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00696b90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x696b90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  F_0065d7a0(REFG(void * PTR32, 0x1371280) GEN_EDX_FWD,*(undefined4 *)(this + 0x70));
  this[100] = (undefined1)((byte)this[100] & 0xfb);
  this[0x65] = (undefined1)0x0;
  if (*(int *)(this + 0x60) != 0) {
    F_00b14100(REFG(void * PTR32, 0x1370c1c) GEN_EDX_ARG,*(int *)(this + 0x60));
    *(undefined4 *)(this + 0x60) = 0;
  }
  F_006905b0((undefined *)this GEN_EDX_ARG);
  uVar2 = 0;
  if (*(int *)(this + 0x74) != 0) {
    uVar2 = F_0050c620(*(int *)(this + 0x74),0,0);
    *(undefined4 *)(this + 0x74) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x70);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x70) = 0;
  }
  return uVar2;
}

/* ref: Client::Graphics::Scene::Light::vf13 */
GEN_NOFRAME uint GEN_THISCALL F_00696c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x696c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x160];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float * pfVar6;
  float10 fVar7;
  
  (*(uint *)(gen_frame + 0x14c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x150);
  iVar5 = *(int *)(this + 0x70);
  if (*(int *)(iVar5 + 0xc) == 4) {
    pfVar6 = *(float * PTR32 *)(iVar5 + 0x10);
    (*(float *)(gen_frame + 0x40)) = *pfVar6;
    (*(float *)(gen_frame + 0x44)) = pfVar6[1];
    (*(float *)(gen_frame + 0x48)) = pfVar6[2];
    (*(float *)(gen_frame + 0x50)) = pfVar6[4];
    (*(float *)(gen_frame + 0x54)) = pfVar6[5];
    (*(float *)(gen_frame + 0x58)) = pfVar6[6];
    (*(float *)(gen_frame + 0x5c)) = pfVar6[7];
    fVar1 = pfVar6[8];
    (*(float *)(gen_frame + 0x60)) = fVar1;
    fVar2 = pfVar6[9];
    (*(float *)(gen_frame + 0x64)) = fVar2;
    (*(float *)(gen_frame + 0x68)) = pfVar6[10];
    fVar3 = *(float *)(iVar5 + 0x78);
    (*(float *)(gen_frame + 0x3c)) = REFG(float, 0x10abe98);
    pfVar6 = &(*(float *)(gen_frame + 0x7c));
    fVar3 = (float)((float10)fVar3 / (float10)*(double *)&REFG(undefined, 0x1090718));
    (*(float *)(gen_frame + 0x7c)) = fVar3;
    if (!(*(double *)&REFG(undefined, 0x109ce00) < (double)fVar3)) {
      pfVar6 = &(*(float *)(gen_frame + 0x3c));
    }
    fVar4 = *pfVar6;
    fVar3 = *(float *)(iVar5 + 0x7c);
    (*(float *)(gen_frame + 0x3c)) = fVar4;
    fVar7 = (float10)fVar4;
    fVar7 = fVar7 + fVar7;
    (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1088068);
    (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1088068);
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cab8)));
    fVar1 = (float)((float10)fVar1 + fVar7);
    (*(float *)(gen_frame + 0x20)) = fVar1;
    (*(undefined4 *)(gen_frame + 0x4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cab8)));
    ((float *)(gen_frame + 0x100))[0] = fVar1;
    fVar2 = (float)(fVar7 + (float10)fVar2);
    (*(float *)(gen_frame + 0x24)) = fVar2;
    (*(float *)(gen_frame + 0x60)) = fVar1;
    (*(float *)(gen_frame + 0x68)) = fVar3;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(float *)(gen_frame + 0x64)) = fVar2;
    ((float *)(gen_frame + 0x100))[1] = 0.0;
    fVar7 = (float10)0;
    ((float *)(gen_frame + 0x100))[2] = 0.0;
    (*(float *)(gen_frame + 0x130)) = (float)fVar7;
    (*(undefined4 *)(gen_frame + 0x110)) = 0;
    (*(float *)(gen_frame + 0x134)) = (float)fVar7;
    (*(float *)(gen_frame + 0x114)) = fVar2;
    (*(float *)(gen_frame + 0x138)) = (float)fVar7;
    (*(undefined4 *)(gen_frame + 0x118)) = 0;
    (*(undefined4 *)(gen_frame + 0x120)) = 0;
    (*(undefined4 *)(gen_frame + 0x124)) = 0;
    (*(float *)(gen_frame + 0x128)) = fVar3;
    F_004efe70(((float *)(gen_frame + 0x100)) GEN_EDX_FWD,(uint)&(*(float *)(gen_frame + 0x50)));
    pfVar6 = ((float *)(gen_frame + 0x100));
    (*(float *)(gen_frame + 0x130)) = (float)((float10)(*(float *)(gen_frame + 0x130)) + (float10)(*(float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0x134)) = (float)((float10)(*(float *)(gen_frame + 0x134)) + (float10)(*(float *)(gen_frame + 0x44)));
    (*(float *)(gen_frame + 0x138)) = (float)((float10)(*(float *)(gen_frame + 0x138)) + (float10)(*(float *)(gen_frame + 0x48)));
  }
  else {
    if (*(int *)(iVar5 + 0xc) != 5) {
      pfVar6 = *(float * PTR32 *)(iVar5 + 0x10);
      fVar7 = (float10)0;
      (*(float *)(gen_frame + 0x40)) = *pfVar6;
      (*(float *)(gen_frame + 0x44)) = pfVar6[1];
      (*(float *)(gen_frame + 0x48)) = pfVar6[2];
      (*(float *)(gen_frame + 0x50)) = pfVar6[4];
      (*(float *)(gen_frame + 0x54)) = pfVar6[5];
      (*(float *)(gen_frame + 0x58)) = pfVar6[6];
      (*(float *)(gen_frame + 0x5c)) = pfVar6[7];
      (*(float *)(gen_frame + 0x60)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0x64)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0x68)) = REFG(float, 0x1087f04);
      fVar1 = *(float *)(iVar5 + 0x7c);
      (*(float *)(gen_frame + 0xb0)) = (float)fVar7;
      (*(float *)(gen_frame + 0xb4)) = (float)fVar7;
      (*(float *)(gen_frame + 0x20)) = fVar1;
      (*(float *)(gen_frame + 0xb8)) = (float)fVar7;
      (*(float *)(gen_frame + 0x24)) = fVar1;
      (*(float *)(gen_frame + 0x28)) = fVar1;
      ((float *)(gen_frame + 0x80))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x80))[0], REFG(float, 0x1087f04));
      ((float *)(gen_frame + 0x80))[1] = 0.0;
      ((float *)(gen_frame + 0x80))[2] = 0.0;
      (*(undefined4 *)(gen_frame + 0x90)) = 0;
      (*(float *)(gen_frame + 0x94)) = REFG(float, 0x1087f04);
      (*(undefined4 *)(gen_frame + 0x98)) = 0;
      (*(undefined4 *)(gen_frame + 0xa0)) = 0;
      (*(undefined4 *)(gen_frame + 0xa4)) = 0;
      (*(float *)(gen_frame + 0xa8)) = REFG(float, 0x1087f04);
      F_004efe70(((float *)(gen_frame + 0x80)) GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x50)));
      (*(float *)(gen_frame + 0xb0)) = (float)((float10)(*(float *)(gen_frame + 0xb0)) + (float10)(*(float *)(gen_frame + 0x40)));
      (*(float *)(gen_frame + 0xb4)) = (float)((float10)(*(float *)(gen_frame + 0xb4)) + (float10)(*(float *)(gen_frame + 0x44)));
      (*(float *)(gen_frame + 0xb8)) = (float)((float10)(*(float *)(gen_frame + 0xb8)) + (float10)(*(float *)(gen_frame + 0x48)));
      F_005feb80(param_1 GEN_EDX_ARG,((float *)(gen_frame + 0x80)),&(*(float *)(gen_frame + 0x20)));
      goto LAB_006970da;
    }
    fVar2 = *(float *)(iVar5 + 0x7c);
    pfVar6 = *(float * PTR32 *)(iVar5 + 0x10);
    fVar1 = *pfVar6;
    (*(float *)(gen_frame + 0x7c)) = fVar2;
    (*(float *)(gen_frame + 0x40)) = fVar1;
    (*(float *)(gen_frame + 0x44)) = pfVar6[1];
    (*(float *)(gen_frame + 0x48)) = pfVar6[2];
    (*(float *)(gen_frame + 0x50)) = pfVar6[4];
    (*(float *)(gen_frame + 0x54)) = pfVar6[5];
    (*(float *)(gen_frame + 0x58)) = pfVar6[6];
    (*(float *)(gen_frame + 0x5c)) = pfVar6[7];
    fVar1 = pfVar6[8];
    (*(float *)(gen_frame + 0x60)) = fVar1;
    (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cab8)));
    (*(undefined4 *)(gen_frame + 0x4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cab8)));
    (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cab8)));
    fVar7 = (float10)fVar2 * (float10)*(double *)&REFG(undefined, 0x1092098);
    (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1088068);
    (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1088068);
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1088068);
    fVar1 = (float)((float10)*(double *)&REFG(undefined, 0x1092098) * fVar7 + (float10)fVar1);
    (*(float *)(gen_frame + 0x20)) = fVar1;
    ((float *)(gen_frame + 0xc0))[0] = fVar1;
    fVar2 = (float)fVar7;
    (*(float *)(gen_frame + 0x7c)) = fVar2;
    (*(float *)(gen_frame + 0x60)) = fVar1;
    fVar7 = (float10)0;
    (*(float *)(gen_frame + 0x64)) = fVar2;
    (*(float *)(gen_frame + 0xf0)) = (float)fVar7;
    (*(float *)(gen_frame + 0x68)) = fVar2;
    (*(float *)(gen_frame + 0xf4)) = (float)fVar7;
    ((float *)(gen_frame + 0xc0))[1] = 0.0;
    (*(float *)(gen_frame + 0xf8)) = (float)fVar7;
    ((float *)(gen_frame + 0xc0))[2] = 0.0;
    (*(undefined4 *)(gen_frame + 0xd0)) = 0;
    (*(float *)(gen_frame + 0xd4)) = fVar2;
    (*(undefined4 *)(gen_frame + 0xd8)) = 0;
    (*(undefined4 *)(gen_frame + 0xe0)) = 0;
    (*(undefined4 *)(gen_frame + 0xe4)) = 0;
    (*(float *)(gen_frame + 0xe8)) = fVar2;
    F_004efe70(((float *)(gen_frame + 0xc0)) GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x50)));
    pfVar6 = ((float *)(gen_frame + 0xc0));
    (*(float *)(gen_frame + 0xf0)) = (float)((float10)(*(float *)(gen_frame + 0xf0)) + (float10)(*(float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0xf4)) = (float)((float10)(*(float *)(gen_frame + 0xf4)) + (float10)(*(float *)(gen_frame + 0x44)));
    (*(float *)(gen_frame + 0xf8)) = (float)((float10)(*(float *)(gen_frame + 0xf8)) + (float10)(*(float *)(gen_frame + 0x48)));
  }
  F_005fec10(param_1 GEN_EDX_ARG,pfVar6,&(*(undefined4 *)(gen_frame + 0x0)));
LAB_006970da: ;
  F_00c47745((*(uint *)(gen_frame + 0x14c)) ^ (uint)(uint)(gen_frame + 0x150) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_006970f0 */
GEN_NOFRAME uint GEN_THISCALL F_006970f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6970f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  code * pcVar3;
  int * piVar4;
  uint uVar5;
  
  piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x74) + 0x88)));
  iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar4), 0);
  if (iVar1 == 2) {
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x74) + 0x8c)));
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar4), 0);
    if (iVar1 < 8) {
      F_005029b0(*(undefined * PTR32 *)((int)this + 0x74) GEN_EDX_FWD,(uint)*(byte *)(REFG(int, 0x1371278) + 0x10));
      iVar1 = *(int *)((int)this + 0x70);
      if (iVar1 != 0) {
        piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + 0xfc)));
        if (piVar4 != (int *)0x0) {
          ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 8))(piVar4 GEN_EDX_ARG);
        }
        piVar2 = *(int * PTR32 *)(iVar1 + 0x84);
        if (piVar2 != (int *)0x0) {
          ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
        }
        *(int * PTR32 *)(iVar1 + 0x84) = piVar4;
      }
      pcVar3 = *(gen_code32 *)(*(int *)this + 0x28);
      *(undefined1 *)((int)this + 0x65) = 3;
      uVar5 = (*pcVar3)(this);
      return uVar5;
    }
    *(undefined1 *)((int)this + 0x65) = 4;
  }
  return (uint)piVar4;
}

/* ref: FUN_00697180 */
GEN_NOFRAME uint GEN_THISCALL F_00697180(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x697180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00690510(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined2 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x66) = 0xffff;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) | 0xb;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) & 0xef;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2f74));
  return (uint)this;
}

/* ref: FUN_006971c0 */
GEN_NOFRAME byte GEN_THISCALL F_006971c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6971c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(byte *)(in_ecx + 100) = *(byte *)(in_ecx + 100) & 0xfb;
  *(uint *)(in_ecx + 0x24) = *(uint *)(in_ecx + 0x24) | 3;
  *(undefined1 *)(in_ecx + 0x65) = 1;
  return 1;
}

/* ref: Client::Graphics::Scene::EnvLocation::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_006971d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6971d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x7c);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 0x7c) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x78);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x78) = 0;
  }
  if (*(int *)(this + 0x74) != 0) {
    F_0050c620(*(int *)(this + 0x74),0,0);
    *(undefined4 *)(this + 0x74) = 0;
  }
  if (*(int *)(this + 0x70) != 0) {
    F_0050c620(*(int *)(this + 0x70),0,0);
    *(undefined4 *)(this + 0x70) = 0;
  }
  this[100] = (undefined1)((byte)this[100] & 0xfb);
  this[0x65] = (undefined1)0x0;
  if (*(int *)(this + 0x60) != 0) {
    F_00b14100(REFG(void * PTR32, 0x1370c1c) GEN_EDX_ARG,*(int *)(this + 0x60));
    *(undefined4 *)(this + 0x60) = 0;
  }
  uVar2 = F_006905b0((undefined *)this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00697250 */
GEN_NOFRAME uint GEN_THISCALL F_00697250(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x697250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  bool bVar2;
  bool bVar3;
  int * piVar4;
  
  bVar2 = true;
  if (*(int *)((int)this + 0x70) != 0) {
    bVar2 = false;
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0x8c)));
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar4), 0);
    if (7 < iVar1) goto LAB_0069726f;
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0x88)));
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar4), 0);
    if ((iVar1 == 2) && (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0xa0))), iVar1 != 0)) {
      F_0068b3d0(this GEN_EDX_FWD,iVar1);
      bVar2 = true;
    }
  }
  bVar3 = true;
  piVar4 = (int *)0x0;
  if (*(int *)((int)this + 0x74) != 0) {
    bVar3 = false;
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x74) + 0x8c)));
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar4), 0);
    if (7 < iVar1) {
LAB_0069726f: ;
      *(undefined1 *)((int)this + 0x65) = 4;
      return (uint)piVar4;
    }
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x74) + 0x88)));
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar4), 0);
    if ((iVar1 == 2) &&
       (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x74) + 0xfc))), piVar4 = (int *)0x0, iVar1 != 0)) {
      piVar4 = (int *)F_0068b400(this GEN_EDX_ARG,iVar1);
      bVar3 = true;
    }
  }
  if ((bVar2) && (bVar3)) {
    *(undefined1 *)((int)this + 0x65) = 3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00697300 */
GEN_NOFRAME float GEN_THISCALL F_00697300(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x697300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float * pfVar1;
  float fVar2;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  ((float *)(gen_frame + 0x4))[2] = GEN_FLT_TO(((float *)(gen_frame + 0x4))[2], REFG(float, 0x1087f04));
  if (*(int *)((int)this + 0x78) != 0) {
    F_004bea00(*(int *)((int)this + 0x78) + 0x108 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x10)));
    fVar2 = F_004bead0(&REFG(float, 0x1302c80),((undefined1 *)(gen_frame + 0x10)));
    ((float *)(gen_frame + 0x4))[2] = fVar2;
    ((float *)(gen_frame + 0x4))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x4))[1], REFG(float, 0x1087f04));
    ((float *)(gen_frame + 0x4))[0] = 0.0;
    pfVar1 = ((float *)(gen_frame + 0x4)) + 2;
    if (!((float10)fVar2 < (float10)1)) {
      pfVar1 = ((float *)(gen_frame + 0x4)) + 1;
    }
    if (!(0.0 < *pfVar1)) {
      pfVar1 = ((float *)(gen_frame + 0x4));
    }
    ((float *)(gen_frame + 0x4))[2] = *pfVar1;
  }
  fVar2 = ((float *)(gen_frame + 0x4))[2];
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60) GEN_EDX_ARG);
  return fVar2;
}

/* ref: FUN_006973b0 */
GEN_FRAME uint GEN_THISCALL F_006973b0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x6973b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = *(byte *)((int)param_1 + 0x65) - 2;
  if (uVar1 == 0) {
    uVar1 = F_00697250(param_1 GEN_EDX_FWD);
  }
  else if ((*(int *)((int)param_1 + 0x78) != 0) && (*(int *)((int)param_1 + 0x7c) != 0)) {
    *(undefined1 *)((int)param_1 + 0x65) = 3;
  }
  if (*(int *)((int)param_1 + 0x78) != 0) {
    uVar1 = F_004b4e70(*(int *)((int)param_1 + 0x78) GEN_EDX_ARG,param_2);
  }
  return uVar1;
}

/* ref: FUN_006973f0 */
GEN_NOFRAME uint GEN_THISCALL F_006973f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6973f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00690510(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined2 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x66) = 0xffff;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) | 0xb;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) & 0xef;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b3044));
  return (uint)this;
}

/* ref: FUN_00697440 */
GEN_NOFRAME byte GEN_THISCALL F_00697440(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x697440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  float fVar2;
  
  fVar2 = REFG(float, 0x10916ec);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) & 0xfb;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 3;
  *(undefined1 *)((int)this + 0x65) = 1;
  *(undefined4 *)((int)this + 0x50) = uVar1;
  *(undefined4 *)((int)this + 0x54) = uVar1;
  *(undefined4 *)((int)this + 0x58) = uVar1;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 2;
  *(undefined1 *)((int)this + 0x96) = 1;
  F_006b3750(this GEN_EDX_FWD,fVar2);
  *(undefined1 *)((int)this + 0x96) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined2 *)((int)this + 0x94) = 0;
  return 1;
}

/* ref: Client::Graphics::Scene::EnvSpace::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_006974b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6974b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x78);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 0x78) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x7c);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x7c) = 0;
  }
  if (*(int *)(this + 0x70) != 0) {
    F_0050c620(*(int *)(this + 0x70),0,0);
    *(undefined4 *)(this + 0x70) = 0;
  }
  if (*(int *)(this + 0x74) != 0) {
    F_0050c620(*(int *)(this + 0x74),0,0);
    *(undefined4 *)(this + 0x74) = 0;
  }
  this[100] = (undefined1)((byte)this[100] & 0xfb);
  this[0x65] = (undefined1)0x0;
  if (*(int *)(this + 0x60) != 0) {
    F_00b14100(REFG(void * PTR32, 0x1370c1c) GEN_EDX_ARG,*(int *)(this + 0x60));
    *(undefined4 *)(this + 0x60) = 0;
  }
  uVar2 = F_006905b0((undefined *)this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00697530 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00697530(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x697530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  bool bVar2;
  bool bVar3;
  int * piVar4;
  
  bVar2 = true;
  if (*(int *)((int)this + 0x70) != 0) {
    bVar2 = false;
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0x8c)));
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar4), 0);
    if (iVar1 < 8) {
      piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0x88)));
      iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar4), 0);
      if ((iVar1 == 2) && (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x70) + 0xa0))), iVar1 != 0)) {
        F_0068b430(this GEN_EDX_FWD,iVar1);
        bVar2 = true;
      }
    }
    else {
      *(undefined1 *)((int)this + 0x65) = 4;
    }
  }
  bVar3 = true;
  if (*(int *)((int)this + 0x74) != 0) {
    bVar3 = false;
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x74) + 0x8c)));
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar4), 0);
    if (iVar1 < 8) {
      piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x74) + 0x88)));
      iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar4), 0);
      if ((iVar1 == 2) && (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x74) + 0xa0))), iVar1 != 0)) {
        F_0068b460(this GEN_EDX_ARG,iVar1);
        bVar3 = true;
      }
    }
    else {
      *(undefined1 *)((int)this + 0x65) = 4;
    }
  }
  if ((bVar2) && (bVar3)) {
    *(undefined1 *)((int)this + 0x65) = 3;
  }
  return;
}

/* ref: FUN_006975e0 */
GEN_FRAME uint GEN_THISCALL F_006975e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6975e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)(in_ecx + 0x50);
  param_2[1] = 0;
  *param_2 = uVar1;
  param_2[2] = 0;
  param_2[4] = 0;
  param_2[5] = *(undefined4 *)(in_ecx + 0x54);
  param_2[6] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = *(undefined4 *)(in_ecx + 0x58);
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  uVar2 = F_004efe70(param_2 GEN_EDX_FWD,in_ecx + 0x40);
  param_2[0xc] = (undefined4)
                 gen_fl2bits(((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(param_2[0xc]))) +
                                    (float10)*(float *)(in_ecx + 0x30)))));
  param_2[0xd] = (undefined4)
                 gen_fl2bits(((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x34) +
                                    ((float10)GEN_TOD(gen_bits2f(param_2[0xd])))))));
  param_2[0xe] = (undefined4)
                 gen_fl2bits(((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x38) +
                                    ((float10)GEN_TOD(gen_bits2f(param_2[0xe])))))));
  return uVar2;
}

/* ref: FUN_00697660 */
GEN_FRAME unsigned int GEN_THISCALL F_00697660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x697660u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(in_ecx + 0x50);
  param_2[1] = 0;
  *param_2 = uVar1;
  param_2[2] = 0;
  param_2[4] = 0;
  param_2[5] = *(undefined4 *)(in_ecx + 0x54);
  param_2[6] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = *(undefined4 *)(in_ecx + 0x58);
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  F_004efe70(param_2 GEN_EDX_FWD,in_ecx + 0x40);
  param_2[0xc] = (undefined4)
                 gen_fl2bits(((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(param_2[0xc]))) +
                                    (float10)*(float *)(in_ecx + 0x30)))));
  param_2[0xd] = (undefined4)
                 gen_fl2bits(((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x34) +
                                    ((float10)GEN_TOD(gen_bits2f(param_2[0xd])))))));
  param_2[0xe] = (undefined4)
                 gen_fl2bits(((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x38) +
                                    ((float10)GEN_TOD(gen_bits2f(param_2[0xe])))))));
  F_004f03f0(param_2 GEN_EDX_ARG);
  return;
}

/* ref: FUN_006977f0 */
GEN_NOFRAME byte GEN_THISCALL F_006977f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6977f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined4 uVar1;
  float fVar2;
  char cVar3;
  byte bVar4;
  float10 fVar5;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  fVar5 = (float10)0;
  (*(float *)(gen_frame + 0x50)) = (float)fVar5;
  (*(float *)(gen_frame + 0x54)) = (float)fVar5;
  uVar1 = *(undefined4 *)((int)this + 0x54);
  (*(float *)(gen_frame + 0x58)) = (float)fVar5;
  (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)((int)this + 0x50);
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x48)) = *(undefined4 *)((int)this + 0x58);
  F_004efe70(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_FWD,(int)this + 0x40);
  (*(float *)(gen_frame + 0x50)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x30) + (float10)(*(float *)(gen_frame + 0x50)))));
  (*(float *)(gen_frame + 0x54)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x34) + (float10)(*(float *)(gen_frame + 0x54)))));
  (*(float *)(gen_frame + 0x58)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x38) + (float10)(*(float *)(gen_frame + 0x58)))));
  F_004f03f0(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG);
  (*(float *)(gen_frame + 0x0)) = *param_1;
  (*(float *)(gen_frame + 0x4)) = param_1[1];
  (*(float *)(gen_frame + 0x8)) = param_1[2];
  F_004eea10(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)&(*(undefined4 *)(gen_frame + 0x20)));
  cVar3 = *(char *)((int)this + 0x94);
  bVar4 = 0;
  if (cVar3 == '\x01') {
    fVar2 = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x4)) * (float10)(*(float *)(gen_frame + 0x4)) + (float10)(*(float *)(gen_frame + 0x0)) * (float10)(*(float *)(gen_frame + 0x0)))
                   + (float10)(*(float *)(gen_frame + 0x8)) * (float10)(*(float *)(gen_frame + 0x8)))));
    (*(float *)(gen_frame + 0x1c)) = fVar2;
    fVar5 = (float10)fVar2;
    if ((!GEN_ISNAN((float10)1) && !GEN_ISNAN(fVar5)) && !((float10)1 < fVar5)) {
LAB_00697930: ;
      bVar4 = 1;
      goto LAB_00697963;
    }
  }
  else if (cVar3 == '\x02') {
    (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x0)))));
    if (((float10)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x0))))) <= (float10)1) &&
       ((*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x4))))),
       (float10)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x4))))) <= (float10)1)) {
      (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x8)))));
LAB_0069792a: ;
      if ((float10)(*(float *)(gen_frame + 0x1c)) <= (float10)1) goto LAB_00697930;
    }
  }
  else {
    if (cVar3 != '\x03') goto LAB_00697963;
    if ((float10)(*(float *)(gen_frame + 0x0)) * (float10)(*(float *)(gen_frame + 0x0)) + (float10)(*(float *)(gen_frame + 0x8)) * (float10)(*(float *)(gen_frame + 0x8)) <= (float10)1)
    {
      (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x4)))));
      goto LAB_0069792a;
    }
  }
  bVar4 = 0;
LAB_00697963: ;
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70) GEN_EDX_ARG);
  return bVar4;
}

/* ref: Client::Graphics::Scene::EnvSpace::vf12 */
GEN_NOFRAME uint GEN_THISCALL F_00697980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x697980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x190];
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float * pfVar6;
  undefined4 * puVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  (*(uint *)(gen_frame + 0x17c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x180);
  if ((byte)this[0x94] - 1 < 3) {
    F_006975e0(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0xb0)));
    (*(float *)(gen_frame + 0x80)) = REFG(float, 0x1090708);
    (*(float *)(gen_frame + 0x84)) = REFG(float, 0x1090708);
    (*(float *)(gen_frame + 0x88)) = REFG(float, 0x1090708);
    pfVar6 = (float *)F_004ee970(((undefined1 *)(gen_frame + 0x70)),&(*(float *)(gen_frame + 0x80)),((undefined1 *)(gen_frame + 0xb0)));
    fVar9 = pfVar6[1];
    fVar10 = pfVar6[2];
    (*(float *)(gen_frame + 0x90)) = *pfVar6;
    (*(float *)(gen_frame + 0xf0)) = *pfVar6;
    (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(float *)(gen_frame + 0x94)) = fVar9;
    (*(float *)(gen_frame + 0x98)) = fVar10;
    (*(float *)(gen_frame + 0xf4)) = fVar9;
    (*(float *)(gen_frame + 0xf8)) = fVar10;
    (*(float *)(gen_frame + 0x24)) = REFG(float, 0x1090708);
    (*(float *)(gen_frame + 0x28)) = REFG(float, 0x1090708);
    pfVar6 = (float *)F_004ee970(((undefined1 *)(gen_frame + 0x70)),&(*(undefined4 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0xb0)));
    fVar9 = pfVar6[1];
    fVar10 = pfVar6[2];
    ((float *)(gen_frame + 0x100))[0] = *pfVar6;
    ((float *)(gen_frame + 0x100))[1] = fVar9;
    ((float *)(gen_frame + 0x100))[2] = fVar10;
    (*(float *)(gen_frame + 0x40)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0x44)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(float *)(gen_frame + 0x48)) = REFG(float, 0x1090708);
    puVar7 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x70)),&(*(float *)(gen_frame + 0x40)),((undefined1 *)(gen_frame + 0xb0)));
    uVar1 = puVar7[1];
    uVar2 = puVar7[2];
    ((float *)(gen_frame + 0x100))[4] = gen_bits2f(*puVar7);
    (*(undefined4 *)(gen_frame + 0x60)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(undefined4 *)(gen_frame + 0x64)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    ((float *)(gen_frame + 0x100))[5] = gen_bits2f(uVar1);
    (*(undefined4 *)(gen_frame + 0x118)) = uVar2;
    (*(float *)(gen_frame + 0x68)) = REFG(float, 0x1090708);
    puVar7 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x70)),&(*(undefined4 *)(gen_frame + 0x60)),((undefined1 *)(gen_frame + 0xb0)));
    uVar1 = puVar7[1];
    uVar2 = puVar7[2];
    (*(undefined4 *)(gen_frame + 0x120)) = *puVar7;
    (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1090708);
    (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0x124)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x128)) = uVar2;
    (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    puVar7 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x70)),&(*(float *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0xb0)));
    (*(undefined4 *)(gen_frame + 0x130)) = *puVar7;
    (*(undefined4 *)(gen_frame + 0x134)) = puVar7[1];
    (*(undefined4 *)(gen_frame + 0x138)) = puVar7[2];
    (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    puVar7 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x70)),&(*(undefined4 *)(gen_frame + 0x10)),((undefined1 *)(gen_frame + 0xb0)));
    uVar1 = puVar7[1];
    uVar2 = puVar7[2];
    (*(undefined4 *)(gen_frame + 0x140)) = *puVar7;
    (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0x144)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x148)) = uVar2;
    (*(undefined4 *)(gen_frame + 0x34)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(undefined4 *)(gen_frame + 0x38)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    puVar7 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x70)),&(*(float *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0xb0)));
    (*(undefined4 *)(gen_frame + 0x150)) = *puVar7;
    (*(undefined4 *)(gen_frame + 0x154)) = puVar7[1];
    (*(undefined4 *)(gen_frame + 0x158)) = puVar7[2];
    (*(undefined4 *)(gen_frame + 0x50)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(undefined4 *)(gen_frame + 0x54)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(undefined4 *)(gen_frame + 0x58)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    puVar7 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x70)),&(*(undefined4 *)(gen_frame + 0x50)),((undefined1 *)(gen_frame + 0xb0)));
    fVar11 = (*(float *)(gen_frame + 0x98));
    fVar10 = (*(float *)(gen_frame + 0x94));
    fVar9 = (*(float *)(gen_frame + 0x90));
    (*(undefined4 *)(gen_frame + 0x160)) = *puVar7;
    (*(undefined4 *)(gen_frame + 0x164)) = puVar7[1];
    (*(undefined4 *)(gen_frame + 0x168)) = puVar7[2];
    (*(float *)(gen_frame + 0x80)) = (*(float *)(gen_frame + 0x90));
    (*(float *)(gen_frame + 0x84)) = (*(float *)(gen_frame + 0x94));
    (*(float *)(gen_frame + 0x88)) = (*(float *)(gen_frame + 0x98));
    pfVar6 = ((float *)(gen_frame + 0x100)) + 2;
    iVar8 = 7;
    fVar12 = fVar11;
    fVar13 = fVar10;
    fVar14 = fVar9;
    do {
      fVar3 = pfVar6[-2];
      (*(float *)(gen_frame + 0xa8)) = fVar3;
      if ((float10)fVar3 < (float10)(*(float *)(gen_frame + 0x90))) {
        (*(float *)(gen_frame + 0x90)) = fVar3;
        fVar9 = fVar3;
      }
      fVar4 = pfVar6[-1];
      (*(float *)(gen_frame + 0xac)) = fVar4;
      if ((float10)fVar4 < (float10)(*(float *)(gen_frame + 0x94))) {
        (*(float *)(gen_frame + 0x94)) = fVar4;
        fVar10 = fVar4;
      }
      fVar5 = *pfVar6;
      (*(float *)(gen_frame + 0xac)) = fVar5;
      if ((float10)fVar5 < (float10)(*(float *)(gen_frame + 0x98))) {
        (*(float *)(gen_frame + 0x98)) = fVar5;
        fVar11 = fVar5;
      }
      if ((float10)(*(float *)(gen_frame + 0x80)) < (float10)fVar3) {
        (*(float *)(gen_frame + 0x80)) = fVar3;
        fVar14 = fVar3;
      }
      if ((float10)(*(float *)(gen_frame + 0x84)) < (float10)fVar4) {
        (*(float *)(gen_frame + 0x84)) = fVar4;
        fVar13 = fVar4;
      }
      if ((float10)(*(float *)(gen_frame + 0x88)) < (float10)fVar5) {
        (*(float *)(gen_frame + 0x88)) = fVar5;
        fVar12 = fVar5;
      }
      pfVar6 = pfVar6 + 4;
      iVar8 = iVar8 - 1;
    } while (iVar8 != 0);
    *param_1 = fVar9;
    param_1[1] = fVar10;
    param_1[2] = fVar11;
    param_1[4] = fVar14;
    param_1[5] = fVar13;
    param_1[6] = fVar12;
  }
  F_00c47745((*(uint *)(gen_frame + 0x17c)) ^ (uint)(uint)(gen_frame + 0x180) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::EnvSpace::vf13 */
GEN_NOFRAME uint GEN_THISCALL F_00697e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x697e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 uVar1;
  float10 fVar2;
  float * pfVar3;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  fVar2 = (float10)0;
  (*(float *)(gen_frame + 0x40)) = (float)fVar2;
  (*(float *)(gen_frame + 0x44)) = (float)fVar2;
  (*(float *)(gen_frame + 0x48)) = (float)fVar2;
  uVar1 = *(undefined4 *)(this + 0x54);
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(this + 0x50);
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(this + 0x58);
  F_004efe70(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_FWD,(uint)(this + 0x40));
  (*(float *)(gen_frame + 0x40)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x30) + (float10)(*(float *)(gen_frame + 0x40)))));
  (*(float *)(gen_frame + 0x44)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x34) + (float10)(*(float *)(gen_frame + 0x44)))));
  (*(float *)(gen_frame + 0x48)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x38) + (float10)(*(float *)(gen_frame + 0x48)))));
  pfVar3 = (float *)F_005fe770(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,(uint)((undefined1 *)(gen_frame + 0x0)));
  *(float *)(param_1 + 0x40) = (float)((float10)*pfVar3 * (float10)REFG(float, 0x1302c60));
  *(float *)(param_1 + 0x44) = (float)((float10)pfVar3[1] * (float10)REFG(float, 0x1302c64));
  *(float *)(param_1 + 0x48) = (float)((float10)pfVar3[2] * (float10)REFG(float, 0x1302c68));
  F_005fe2e0(param_1,(uint)&(*(undefined4 *)(gen_frame + 0x10)));
  F_005fe2e0(param_1 + 0x10,(uint)&(*(undefined4 *)(gen_frame + 0x20)));
  F_005fe2e0(param_1 + 0x20,(uint)&(*(undefined4 *)(gen_frame + 0x30)));
  *(float *)(param_1 + 0x30) = (*(float *)(gen_frame + 0x40));
  *(float *)(param_1 + 0x34) = (*(float *)(gen_frame + 0x44));
  *(float *)(param_1 + 0x38) = (*(float *)(gen_frame + 0x48));
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60) GEN_EDX_ARG);
  return param_1;
}

/* ref: Client::Graphics::Scene::EnvSpace::vf4 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00697f70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x697f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (this[0x65] == (undefined1)0x2) {
    F_00697530(this GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: FUN_00697f80 */
GEN_NOFRAME uint GEN_THISCALL F_00697f80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x697f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)(REFG(int, 0x1371290) + 0x830) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)(REFG(int, 0x1371290) + 0x808) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)(REFG(int, 0x1371290) + 0x804) = *(undefined4 *)((int)this + 0x28);
  F_004a3e60(REFG(int, 0x1371290) + 0x818,(int)this + 0x38);
  *(undefined4 *)(REFG(int, 0x1371290) + 0x824) = *(undefined4 *)((int)this + 0x44);
  *(undefined1 *)(REFG(int, 0x1371290) + 0x82c) = *(undefined1 *)((int)this + 0x4c);
  if (*((int *)GEN_TOP(((&REFG(undefined4, 0x1375b90))[(int)((REFG(int, 0x1375bbc) != 2) - 1 & 2)] + 0xd0))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((&REFG(undefined4, 0x1375b90))[(int)((REFG(int, 0x1375bbc) != 2) - 1 & 2)] + 0xd0))) + 0xb0))) =
         *(undefined4 *)((int)this + 0x2c);
  }
  if (*(int *)(REFG(int, 0x1375b00) + 0x28) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *((int *)GEN_TOP((*(int *)(REFG(int, 0x1375b00) + 0x28) + 0x38)));
  }
  if (iVar1 != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0xd0) + 0xb0))) = *(undefined4 *)((int)this + 0x2c);
  }
  uVar2 = REFG(undefined4, 0x1371280);
  *(undefined4 *)(REFG(undefined4, 0x1371280) + 0x30) = *(undefined4 *)((int)this + 0x30);
  *(undefined4 *)(REFG(undefined4, 0x1371280) + 0x28) = *(undefined4 *)((int)this + 0x34);
  return uVar2;
}

/* ref: FUN_00698050 */
GEN_NOFRAME uint GEN_THISCALL F_00698050(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x698050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10b2b34));
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10946bc)));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10946b8)));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x58) = uVar3;
  *(undefined4 *)((int)this + 0x4c) = uVar2;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x5c) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x5c), REFG(float, 0x10946b4));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)((int)this + 0x50) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x50), REFG(float, 0x1087f04));
  *(undefined4 *)((int)this + 0x60) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x60), REFG(float, 0x1088068));
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = uVar2;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0x1010000;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  puVar1 = (undefined4 *)((int)this + 0x80);
  *puVar1 = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xb0) = GEN_FLT_TO(*(undefined4 *)((int)this + 0xb0), REFG(float, 0x1302df0));
  *(undefined4 *)((int)this + 0xb4) = GEN_FLT_TO(*(undefined4 *)((int)this + 0xb4), REFG(float, 0x1302df4));
  *(undefined4 *)((int)this + 0xb8) = GEN_FLT_TO(*(undefined4 *)((int)this + 0xb8), REFG(float, 0x1302df8));
  *(undefined4 *)((int)this + 0xc0) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 0xc4) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)((int)this + 200) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0xcc) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0xd0) = GEN_FLT_TO(*(undefined4 *)((int)this + 0xd0), REFG(float, 0x1302e10));
  *(undefined4 *)((int)this + 0xd4) = GEN_FLT_TO(*(undefined4 *)((int)this + 0xd4), REFG(float, 0x1302e14));
  *(undefined4 *)((int)this + 0xd8) = GEN_FLT_TO(*(undefined4 *)((int)this + 0xd8), REFG(float, 0x1302e18));
  *(uint *)((int)this + 0xa4) = *(uint *)((int)this + 0xa4) | 3;
  *puVar1 = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined4 * PTR32 *)((int)this + 0x98) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x9c) = puVar1;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined2 *)((int)this + 0xe4) = 0;
  *(undefined2 *)((int)this + 0xe6) = 0xffff;
  *(byte *)((int)this + 0xe4) = *(byte *)((int)this + 0xe4) | 0xb;
  *(byte *)((int)this + 0xe4) = *(byte *)((int)this + 0xe4) & 0xef;
  *puVar1 = (*(undefined * PTR32 (*)[50])REFP(0x10b3044));
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x120) = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x150) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x150), REFG(float, 0x1302df0));
  *(undefined4 *)((int)this + 0x154) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x154), REFG(float, 0x1302df4));
  *(undefined4 *)((int)this + 0x158) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x158), REFG(float, 0x1302df8));
  *(undefined4 *)((int)this + 0x160) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 0x164) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)((int)this + 0x168) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x16c) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0x170) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x170), REFG(float, 0x1302e10));
  *(undefined4 *)((int)this + 0x174) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x174), REFG(float, 0x1302e14));
  *(undefined4 *)((int)this + 0x178) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x178), REFG(float, 0x1302e18));
  *(uint *)((int)this + 0x144) = *(uint *)((int)this + 0x144) | 3;
  puVar1 = (undefined4 *)((int)this + 0x120);
  *puVar1 = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined4 * PTR32 *)((int)this + 0x138) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x13c) = puVar1;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined2 *)((int)this + 0x184) = 0;
  *(undefined2 *)((int)this + 0x186) = 0xffff;
  *(byte *)((int)this + 0x184) = *(byte *)((int)this + 0x184) | 0xb;
  *(byte *)((int)this + 0x184) = *(byte *)((int)this + 0x184) & 0xef;
  *puVar1 = (*(undefined * PTR32 (*)[50])REFP(0x10b3044));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c0) = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1f0) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x1f0), REFG(float, 0x1302df0));
  *(undefined4 *)((int)this + 500) = GEN_FLT_TO(*(undefined4 *)((int)this + 500), REFG(float, 0x1302df4));
  *(undefined4 *)((int)this + 0x1f8) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x1f8), REFG(float, 0x1302df8));
  *(undefined4 *)((int)this + 0x200) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 0x204) = REFG(undefined4, 0x1302e04);
  puVar1 = (undefined4 *)((int)this + 0x1c0);
  *(undefined4 *)((int)this + 0x208) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x20c) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0x210) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x210), REFG(float, 0x1302e10));
  *(undefined4 *)((int)this + 0x214) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x214), REFG(float, 0x1302e14));
  *(undefined4 *)((int)this + 0x218) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x218), REFG(float, 0x1302e18));
  *(uint *)((int)this + 0x1e4) = *(uint *)((int)this + 0x1e4) | 3;
  *puVar1 = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined4 * PTR32 *)((int)this + 0x1d8) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x1dc) = puVar1;
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined2 *)((int)this + 0x224) = 0;
  *(undefined2 *)((int)this + 0x226) = 0xffff;
  *(byte *)((int)this + 0x224) = *(byte *)((int)this + 0x224) | 0xb;
  *(byte *)((int)this + 0x224) = *(byte *)((int)this + 0x224) & 0xef;
  *puVar1 = (*(undefined * PTR32 (*)[50])REFP(0x10b3044));
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 *)((int)this + 0x234) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x260) = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  *(undefined4 *)((int)this + 0x284) = 0;
  *(undefined4 *)((int)this + 0x238) = 0;
  *(undefined4 *)((int)this + 0x23c) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x270) = 0;
  *(undefined4 *)((int)this + 0x274) = 0;
  *(undefined4 *)((int)this + 0x280) = 0;
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined4 *)((int)this + 0x290) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x290), REFG(float, 0x1302df0));
  *(undefined4 *)((int)this + 0x294) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x294), REFG(float, 0x1302df4));
  *(undefined4 *)((int)this + 0x298) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x298), REFG(float, 0x1302df8));
  *(undefined4 *)((int)this + 0x2a0) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 0x2a4) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)((int)this + 0x2a8) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x2ac) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0x2b0) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x2b0), REFG(float, 0x1302e10));
  *(undefined4 *)((int)this + 0x2b4) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x2b4), REFG(float, 0x1302e14));
  *(undefined4 *)((int)this + 0x2b8) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x2b8), REFG(float, 0x1302e18));
  *(uint *)((int)this + 0x284) = *(uint *)((int)this + 0x284) | 3;
  puVar1 = (undefined4 *)((int)this + 0x260);
  *puVar1 = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined4 * PTR32 *)((int)this + 0x278) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x27c) = puVar1;
  *(undefined4 *)((int)this + 0x2c0) = 0;
  *(undefined2 *)((int)this + 0x2c4) = 0;
  *(undefined2 *)((int)this + 0x2c6) = 0xffff;
  *(byte *)((int)this + 0x2c4) = *(byte *)((int)this + 0x2c4) | 0xb;
  *(byte *)((int)this + 0x2c4) = *(byte *)((int)this + 0x2c4) & 0xef;
  *puVar1 = (*(undefined * PTR32 (*)[50])REFP(0x10b3044));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x300) = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  *(undefined4 *)((int)this + 0x324) = 0;
  *(undefined4 *)((int)this + 0x2d0) = 0;
  *(undefined4 *)((int)this + 0x2d4) = 0;
  *(undefined4 *)((int)this + 0x2d8) = 0;
  *(undefined4 *)((int)this + 0x2dc) = 0;
  *(undefined4 *)((int)this + 0x2e0) = 0;
  *(undefined4 *)((int)this + 0x310) = 0;
  *(undefined4 *)((int)this + 0x314) = 0;
  *(undefined4 *)((int)this + 800) = 0;
  *(undefined4 *)((int)this + 0x328) = 0;
  *(undefined4 *)((int)this + 0x330) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x330), REFG(float, 0x1302df0));
  *(undefined4 *)((int)this + 0x334) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x334), REFG(float, 0x1302df4));
  *(undefined4 *)((int)this + 0x338) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x338), REFG(float, 0x1302df8));
  *(undefined4 *)((int)this + 0x340) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 0x344) = REFG(undefined4, 0x1302e04);
  puVar1 = (undefined4 *)((int)this + 0x300);
  *(undefined4 *)((int)this + 0x348) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x34c) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0x350) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x350), REFG(float, 0x1302e10));
  *(undefined4 *)((int)this + 0x354) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x354), REFG(float, 0x1302e14));
  *(undefined4 *)((int)this + 0x358) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x358), REFG(float, 0x1302e18));
  *(uint *)((int)this + 0x324) = *(uint *)((int)this + 0x324) | 3;
  *(undefined4 * PTR32 *)((int)this + 0x318) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x31c) = puVar1;
  *puVar1 = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined2 *)((int)this + 0x364) = 0;
  *(undefined2 *)((int)this + 0x366) = 0xffff;
  *(byte *)((int)this + 0x364) = *(byte *)((int)this + 0x364) | 0xb;
  *(byte *)((int)this + 0x364) = *(byte *)((int)this + 0x364) & 0xef;
  *puVar1 = (*(undefined * PTR32 (*)[50])REFP(0x10b3044));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3a0) = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  *(undefined4 *)((int)this + 0x3c4) = 0;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined4 *)((int)this + 0x374) = 0;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined4 *)((int)this + 0x37c) = 0;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x3b4) = 0;
  *(undefined4 *)((int)this + 0x3c0) = 0;
  *(undefined4 *)((int)this + 0x3c8) = 0;
  *(undefined4 *)((int)this + 0x3d0) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x3d0), REFG(float, 0x1302df0));
  *(undefined4 *)((int)this + 0x3d4) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x3d4), REFG(float, 0x1302df4));
  *(undefined4 *)((int)this + 0x3d8) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x3d8), REFG(float, 0x1302df8));
  *(undefined4 *)((int)this + 0x3e0) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 0x3e4) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)((int)this + 1000) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x3ec) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0x3f0) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x3f0), REFG(float, 0x1302e10));
  *(undefined4 *)((int)this + 0x3f4) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x3f4), REFG(float, 0x1302e14));
  *(undefined4 *)((int)this + 0x3f8) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x3f8), REFG(float, 0x1302e18));
  *(uint *)((int)this + 0x3c4) = *(uint *)((int)this + 0x3c4) | 3;
  puVar1 = (undefined4 *)((int)this + 0x3a0);
  *puVar1 = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined4 * PTR32 *)((int)this + 0x3b8) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x3bc) = puVar1;
  *(undefined4 *)((int)this + 0x400) = 0;
  *(undefined2 *)((int)this + 0x404) = 0;
  *(undefined2 *)((int)this + 0x406) = 0xffff;
  *(byte *)((int)this + 0x404) = *(byte *)((int)this + 0x404) | 0xb;
  *(byte *)((int)this + 0x404) = *(byte *)((int)this + 0x404) & 0xef;
  *puVar1 = (*(undefined * PTR32 (*)[50])REFP(0x10b3044));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x440) = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  *(undefined4 *)((int)this + 0x464) = 0;
  *(undefined4 *)((int)this + 0x410) = 0;
  *(undefined4 *)((int)this + 0x414) = 0;
  *(undefined4 *)((int)this + 0x418) = 0;
  *(undefined4 *)((int)this + 0x41c) = 0;
  *(undefined4 *)((int)this + 0x420) = 0;
  *(undefined4 *)((int)this + 0x450) = 0;
  *(undefined4 *)((int)this + 0x454) = 0;
  *(undefined4 *)((int)this + 0x460) = 0;
  *(undefined4 *)((int)this + 0x468) = 0;
  *(undefined4 *)((int)this + 0x470) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x470), REFG(float, 0x1302df0));
  *(undefined4 *)((int)this + 0x474) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x474), REFG(float, 0x1302df4));
  *(undefined4 *)((int)this + 0x478) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x478), REFG(float, 0x1302df8));
  *(undefined4 *)((int)this + 0x480) = REFG(undefined4, 0x1302e00);
  puVar1 = (undefined4 *)((int)this + 0x440);
  *(undefined4 *)((int)this + 0x484) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)((int)this + 0x488) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x48c) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0x490) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x490), REFG(float, 0x1302e10));
  *(undefined4 *)((int)this + 0x494) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x494), REFG(float, 0x1302e14));
  *(undefined4 *)((int)this + 0x498) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x498), REFG(float, 0x1302e18));
  *(uint *)((int)this + 0x464) = *(uint *)((int)this + 0x464) | 3;
  *(undefined4 * PTR32 *)((int)this + 0x458) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x45c) = puVar1;
  *puVar1 = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined4 *)((int)this + 0x4a0) = 0;
  *(undefined2 *)((int)this + 0x4a4) = 0;
  *(undefined2 *)((int)this + 0x4a6) = 0xffff;
  *(byte *)((int)this + 0x4a4) = *(byte *)((int)this + 0x4a4) | 0xb;
  *(byte *)((int)this + 0x4a4) = *(byte *)((int)this + 0x4a4) & 0xef;
  *puVar1 = (*(undefined * PTR32 (*)[50])REFP(0x10b3044));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4e0) = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  *(undefined4 *)((int)this + 0x504) = 0;
  *(undefined4 *)((int)this + 0x4b0) = 0;
  *(undefined4 *)((int)this + 0x4b4) = 0;
  *(undefined4 *)((int)this + 0x4b8) = 0;
  *(undefined4 *)((int)this + 0x4bc) = 0;
  *(undefined4 *)((int)this + 0x4c0) = 0;
  *(undefined4 *)((int)this + 0x4f0) = 0;
  *(undefined4 *)((int)this + 0x4f4) = 0;
  *(undefined4 *)((int)this + 0x500) = 0;
  *(undefined4 *)((int)this + 0x508) = 0;
  *(undefined4 *)((int)this + 0x510) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x510), REFG(float, 0x1302df0));
  *(undefined4 *)((int)this + 0x514) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x514), REFG(float, 0x1302df4));
  *(undefined4 *)((int)this + 0x518) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x518), REFG(float, 0x1302df8));
  *(undefined4 *)((int)this + 0x520) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 0x524) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)((int)this + 0x528) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x52c) = REFG(undefined4, 0x1302e0c);
  puVar1 = (undefined4 *)((int)this + 0x4e0);
  *(undefined4 *)((int)this + 0x530) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x530), REFG(float, 0x1302e10));
  *(undefined4 *)((int)this + 0x534) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x534), REFG(float, 0x1302e14));
  *(undefined4 *)((int)this + 0x538) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x538), REFG(float, 0x1302e18));
  *(uint *)((int)this + 0x504) = *(uint *)((int)this + 0x504) | 3;
  *puVar1 = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined4 * PTR32 *)((int)this + 0x4f8) = puVar1;
  *(undefined4 * PTR32 *)((int)this + 0x4fc) = puVar1;
  *(undefined4 *)((int)this + 0x540) = 0;
  *(undefined2 *)((int)this + 0x544) = 0;
  *(undefined2 *)((int)this + 0x546) = 0xffff;
  *(byte *)((int)this + 0x544) = *(byte *)((int)this + 0x544) | 0xb;
  *(byte *)((int)this + 0x544) = *(byte *)((int)this + 0x544) & 0xef;
  *puVar1 = (*(undefined * PTR32 (*)[50])REFP(0x10b3044));
  *(undefined4 *)((int)this + 0x550) = 0;
  *(undefined4 *)((int)this + 0x554) = 0;
  *(undefined4 *)((int)this + 0x558) = 0;
  *(undefined4 *)((int)this + 0x55c) = 0;
  *(undefined4 *)((int)this + 0x560) = 0;
  *(undefined4 *)((int)this + 0x580) = 0;
  *(undefined4 *)((int)this + 0x584) = 0;
  *(undefined4 *)((int)this + 0x588) = 0;
  *(undefined4 *)((int)this + 0x58c) = 0;
  *(undefined4 *)((int)this + 0x590) = 0;
  *(undefined4 *)((int)this + 0x594) = 0;
  *(undefined4 *)((int)this + 0x598) = 0;
  *(undefined4 *)((int)this + 0x59c) = 0;
  *(undefined4 *)((int)this + 0x5a0) = 0;
  *(undefined4 *)((int)this + 0x5a4) = 0;
  return (uint)this;
}

/* ref: FUN_006989e0 */
GEN_FRAME byte GEN_THISCALL F_006989e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6989e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  int * piVar9;
  undefined * pvVar10;
  float * pfVar11;
  uint uVar12;
  float * pfVar13;
  int iVar14;
  gen_size32 _Size;
  undefined * pvVar15;
  uint uVar16;
  int * piVar17;
  float10 fVar18;
  
  iVar14 = *param_1 * 4;
  iVar4 = param_1[6];
  iVar1 = param_1[1] * 4;
  iVar2 = iVar4 * 4;
  uVar8 = *param_1 + 0x1fU >> 3 & 0x1ffffffc;
  uVar12 = param_1[1] + 0x1fU >> 3 & 0x1ffffffc;
  _Size = (iVar4 * 2 + 3) * uVar8 + uVar12 + iVar4 * 8 + iVar1 + iVar14;
  (*(uint *)(gen_frame + 0x8)) = uVar8;
  piVar9 = (int *)F_00406520();
  pvVar10 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar9 + 0xc))(piVar9 GEN_EDX_ARG,_Size,0)));
  if (_Size == 0) {
    if (pvVar10 == (undefined *)0x0) goto LAB_00698a7d;
  }
  else if (pvVar10 == (undefined *)0x0) {
    return 0;
  }
  F_00c48350(pvVar10,0,_Size);
LAB_00698a7d: ;
  fVar7 = REFG(float, 0x10916ec);
  fVar6 = REFG(float, 0x1088068);
  fVar18 = (float10)*(double *)&REFG(undefined, 0x1092098);
  pfVar13 = (float *)((int)this + 0xd8);
  (*(int *)(gen_frame + 0x0)) = 8;
  do {
    *(byte *)(pfVar13 + 3) = *(byte *)(pfVar13 + 3) & 0xfb;
    pfVar13[-0xd] = gen_bits2f((uint)gen_fl2bits(pfVar13[-0xd]) | 3);
    *(undefined1 *)((int)pfVar13 + 0xd) = 1;
    pfVar13[-2] = fVar6;
    pfVar13[-1] = fVar6;
    *pfVar13 = fVar6;
    pfVar13[-0xd] = gen_bits2f((uint)gen_fl2bits(pfVar13[-0xd]) | 2);
    pfVar11 = pfVar13 - 2;
    *(undefined1 *)((int)pfVar13 + 0x3e) = 1;
    pfVar13[0xb] = fVar7;
    if (!((float10)pfVar13[-1] < (float10)*pfVar11)) {
      pfVar11 = pfVar13 - 1;
    }
    if (!((float10)*pfVar13 < (float10)*pfVar11)) {
      pfVar11 = pfVar13;
    }
    fVar3 = *pfVar11;
    pfVar11 = pfVar13 + 0xb;
    (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar3 * fVar18);
    if (!((float10)(float)((float10)fVar3 * fVar18) < (float10)pfVar13[0xb])) {
      pfVar11 = &(*(float *)(gen_frame + 0x4));
    }
    fVar3 = *pfVar11;
    pfVar13[0xc] = 0.0;
    pfVar13[0xb] = fVar3;
    pfVar13[0xd] = 0.0;
    pfVar13[0xe] = 0.0;
    *(undefined2 *)(pfVar13 + 0xf) = 0;
    *(undefined1 *)((int)pfVar13 + 0x3e) = 0;
    pfVar13 = pfVar13 + 0x28;
    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) - 1;
  } while ((*(int *)(gen_frame + 0x0)) != 0);
  *(uint *)((int)this + 0x580) = -(uint)(iVar14 != 0) & (uint)pvVar10;
  uVar8 = 0;
  pvVar15 = ((undefined *)GEN_TOP(((int)((int)pvVar10 + iVar14) + iVar1)));
  *(uint *)((int)this + 0x588) = -(uint)(iVar1 != 0) & (uint)((int)pvVar10 + iVar14);
  *(uint *)((int)this + 0x590) = -(uint)(iVar2 != 0) & (uint)pvVar15;
  pvVar15 = (undefined *)((int)pvVar15 + iVar2);
  pvVar10 = (undefined *)((int)pvVar15 + iVar2);
  *(undefined4 *)((int)this + 0x584) = 0;
  *(undefined4 *)((int)this + 0x58c) = 0;
  *(uint *)((int)this + 0x594) = -(uint)(iVar2 != 0) & (uint)pvVar15;
  if (param_1[6] != 0) {
    do {
      *((uint *)GEN_TOP((*(int *)((int)this + 0x590) + uVar8 * 4))) = -(uint)((*(uint *)(gen_frame + 0x8)) != 0) & (uint)pvVar10;
      uVar16 = (int)pvVar10 + (*(uint *)(gen_frame + 0x8));
      pvVar10 = (undefined *)(uVar16 + (*(uint *)(gen_frame + 0x8)));
      *((uint *)GEN_TOP((*(int *)((int)this + 0x594) + uVar8 * 4))) = -(uint)((*(uint *)(gen_frame + 0x8)) != 0) & uVar16;
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)param_1[6]);
  }
  *(uint *)((int)this + 0x598) = -(uint)((*(uint *)(gen_frame + 0x8)) != 0) & (uint)pvVar10;
  uVar5 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  uVar8 = (int)pvVar10 + (*(uint *)(gen_frame + 0x8)) + (*(uint *)(gen_frame + 0x8));
  *(uint *)((int)this + 0x59c) = -(uint)((*(uint *)(gen_frame + 0x8)) != 0) & (int)pvVar10 + (*(uint *)(gen_frame + 0x8));
  *(uint *)((int)this + 0x5a0) = -(uint)((*(uint *)(gen_frame + 0x8)) != 0) & uVar8;
  *(uint *)((int)this + 0x5a4) = -(uint)(uVar12 != 0) & uVar8 + (*(uint *)(gen_frame + 0x8));
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 100) = REFG(undefined4, 0x1375a88);
  *(undefined4 *)((int)this + 0x68) = REFG(undefined4, 0x1375a8c);
  *(undefined4 *)((int)this + 0x6c) = REFG(undefined4, 0x1375a90);
  *(undefined4 *)((int)this + 0x70) = uVar5;
  *(undefined1 *)((int)this + 0x78) = 0;
  piVar9 = param_1;
  piVar17 = (int *)((int)this + 0x10);
  for (iVar14 = 7; iVar14 != 0; iVar14 = iVar14 - 1) {
    *piVar17 = *piVar9;
    piVar9 = piVar9 + 1;
    piVar17 = piVar17 + 1;
  }
  return 1;
}

/* ref: FUN_00698c50 */
GEN_NOFRAME byte GEN_THISCALL F_00698c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x698c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 * puVar1;
  byte bVar2;
  undefined4 uVar3;
  float fVar4;
  uint uVar5;
  uint3 uVar8;
  int iVar6;
  float * pfVar7;
  float * pfVar9;
  uint uVar10;
  
  if ((param_1 != (int *)0x0) &&
     (fVar4 = *(float *)((int)this + 0x584),
     (uint)gen_fl2bits(fVar4) < (uint)gen_fl2bits(*(float *)((int)this + 0x10)))) {
    iVar6 = *(int *)((int)this + 0x580);
    (*(float *)(gen_frame + 0x38)) = fVar4;
    *(int * PTR32 *)(iVar6 + (int)gen_fl2bits(fVar4) * 4) = param_1;
    bVar2 = *(byte *)((int)param_1 + 0x95);
    (*(byte *)(gen_frame + 0x3f)) = bVar2;
    fVar4 = *(float *)((int)this + 0x584);
    while ((fVar4 != 0.0 &&
           ((puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x580) + (int)gen_fl2bits(fVar4) * 4))),
            *((int *)GEN_TOP((*(int *)((int)this + 0x580) - 4 + (int)gen_fl2bits(fVar4) * 4))) == 0 ||
            (*(byte *)(puVar1[-1] + 0x95) < bVar2))))) {
      uVar3 = puVar1[-1];
      puVar1[-1] = *puVar1;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x580) + (int)gen_fl2bits(fVar4) * 4))) = uVar3;
      fVar4 = gen_bits2f((int)gen_fl2bits(fVar4) - 1);
      (*(float *)(gen_frame + 0x38)) = fVar4;
    }
    *(int *)((int)this + 0x584) = *(int *)((int)this + 0x584) + 1;
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x30))(param_1 GEN_EDX_FWD,((float *)(gen_frame + 0x0)));
    uVar5 = F_006b3840(this GEN_EDX_ARG,((float *)(gen_frame + 0x0))[0]);
    (*(uint *)(gen_frame + 0x34)) = uVar5;
    uVar5 = F_006b3840(this GEN_EDX_ARG,(*(float *)(gen_frame + 0x10)));
    (*(uint *)(gen_frame + 0x30)) = uVar5;
    uVar5 = F_006b38c0(this GEN_EDX_ARG,(*(float *)(gen_frame + 0x8)));
    (*(uint *)(gen_frame + 0x2c)) = uVar5;
    uVar5 = F_006b38c0(this GEN_EDX_ARG,(*(float *)(gen_frame + 0x18)));
    uVar10 = 0;
    (*(uint *)(gen_frame + 0x28)) = uVar5;
    if (*(int *)((int)this + 0x28) != 0) {
      do {
        uVar8 = (uint3)(uVar5 >> 8);
        if ((uVar10 < (*(uint *)(gen_frame + 0x34))) || ((*(uint *)(gen_frame + 0x30)) < uVar10)) {
          iVar6 = (uint)uVar8 << 8;
        }
        else {
          iVar6 = CONCAT31(uVar8,1);
        }
        uVar5 = F_006b09d0(((undefined *)GEN_TOP((*(int *)((int)this + 0x590) + uVar10 * 4))) GEN_EDX_ARG,
                             (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x38))),*(undefined4 *)((int)this + 0x10),
                             iVar6);
        uVar8 = (uint3)(uVar5 >> 8);
        if ((uVar10 < (*(uint *)(gen_frame + 0x2c))) || ((*(uint *)(gen_frame + 0x28)) < uVar10)) {
          iVar6 = (uint)uVar8 << 8;
        }
        else {
          iVar6 = CONCAT31(uVar8,1);
        }
        uVar5 = F_006b09d0(((undefined *)GEN_TOP((*(int *)((int)this + 0x594) + uVar10 * 4))) GEN_EDX_ARG,
                             (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x38))),*(undefined4 *)((int)this + 0x10),
                             iVar6);
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)((int)this + 0x28));
    }
    pfVar7 = (float *)(param_1 + 0x15);
    if (((float10)GEN_TOD(gen_bits2f(param_1[0x15]))) < ((float10)GEN_TOD(gen_bits2f(param_1[0x14])))) {
      pfVar7 = (float *)(param_1 + 0x14);
    }
    pfVar9 = (float *)(param_1 + 0x16);
    if (((float10)GEN_TOD(gen_bits2f(param_1[0x16]))) < (float10)*pfVar7) {
      pfVar9 = pfVar7;
    }
    pfVar7 = (float *)(param_1 + 0x21);
    fVar4 = (float)((float10)*pfVar9 + (float10)*pfVar9);
    (*(float *)(gen_frame + 0x38)) = fVar4;
    if (!((float10)fVar4 < ((float10)GEN_TOD(gen_bits2f(param_1[0x21]))))) {
      pfVar7 = &(*(float *)(gen_frame + 0x38));
    }
    param_1[0x21] = (int)gen_fl2bits(*pfVar7);
    *(undefined1 *)((int)param_1 + 0x96) = 0;
    return 1;
  }
  return 0;
}

/* ref: FUN_00698e00 */
GEN_FRAME byte GEN_THISCALL F_00698e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x698e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  if (param_1 != 0) {
    bVar1 = F_0068fad0(this GEN_EDX_FWD,param_1);
    if (bVar1 != 0) {
      bVar1 = F_00698c50(this GEN_EDX_ARG,param_1);
      return bVar1 != 0;
    }
  }
  return 0;
}

/* ref: FUN_00698e40 */
GEN_NOFRAME uint GEN_THISCALL F_00698e40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x698e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  
  F_00690510(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined2 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x66) = 0xffff;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) | 0xb;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) & 0xef;
  F_00991d30((undefined *)((int)this + 0x70) GEN_EDX_ARG);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b321c)));
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1e0) = (*(undefined * PTR32 (*)[3])REFP(0x10b2ad0))
  ;
  *(byte *)((int)this + 0x1e4) = *(byte *)((int)this + 0x1e4) & 0xe0;
  *(undefined4 *)((int)this + 0x228) = uVar2;
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  *(undefined2 *)((int)this + 0x1e5) = 0;
  *(undefined4 *)((int)this + 0x234) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[52])REFP(0x10b314c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x70) = (*(undefined * PTR32 (*)[10])REFP(0x10b3120));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1e0) = (*(undefined * PTR32 (*)[3])REFP(0x10b3110));
  *(undefined4 *)((int)this + 0x1e8) = uVar1;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x1f8) = uVar1;
  *(undefined4 *)((int)this + 0x1fc) = uVar1;
  *(undefined4 *)((int)this + 0x200) = uVar1;
  *(undefined4 *)((int)this + 0x204) = uVar1;
  *(undefined4 *)((int)this + 0x208) = 0;
  *(undefined4 *)((int)this + 0x20c) = 0;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x230) = uVar2;
  *(undefined4 *)((int)this + 0x250) = uVar1;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x264) = uVar1;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x270) = 0;
  *(undefined4 *)((int)this + 0x274) = 0;
  *(undefined4 *)((int)this + 0x278) = uVar1;
  *(undefined4 *)((int)this + 0x280) = 0;
  *(undefined4 *)((int)this + 0x284) = 0;
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined4 *)((int)this + 0x290) = uVar1;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = uVar1;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined4 *)((int)this + 0x2b8) = uVar1;
  *(undefined4 *)((int)this + 0x2c0) = 0;
  *(undefined4 *)((int)this + 0x2c4) = 0;
  *(undefined4 *)((int)this + 0x2c8) = 0;
  return (uint)this;
}

/* ref: FUN_00699000 */
GEN_NOFRAME byte GEN_THISCALL F_00699000(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x699000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x180];
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ac1a8)));
  (*(uint *)(gen_frame + 0x16c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x170);
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) & 0xfb;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 3;
  *(undefined4 *)((int)this + 0x238) = uVar1;
  *(undefined4 *)((int)this + 0x23c) = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ac050)));
  *(undefined1 *)((int)this + 0x65) = 1;
  *(undefined4 *)((int)this + 0x240) = uVar1;
  uVar2 = F_00990c20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x1e8) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x1e8), REFG(float, 0x1087f04));
  *(undefined2 *)((int)this + 0x1e5) = 2;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  F_00983ae0((int)this + 0x70 GEN_EDX_ARG,uVar2);
  F_00982d70();
  F_00c47745((*(uint *)(gen_frame + 0x16c)) ^ (uint)(uint)(gen_frame + 0x170) GEN_EDX_ARG);
  return 1;
}

/* ref: Client::Graphics::Scene::VfxObject::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_006990c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6990c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  if (*(int *)(this + 0x234) != 0) {
    F_00982b60(*(int *)(this + 0x234) GEN_EDX_FWD,0);
    this_00 = *(undefined * PTR32 *)(this + 0x234);
    if (this_00 != (undefined *)0x0) {
      F_009cfa70(this_00 GEN_EDX_ARG);
      F_00406ad0(this_00);
      *(undefined4 *)(this + 0x234) = 0;
    }
  }
  this[100] = (undefined1)((byte)this[100] & 0xfb);
  this[0x65] = (undefined1)0x0;
  if (*(int *)(this + 0x60) != 0) {
    F_00b14100(REFG(void * PTR32, 0x1370c1c) GEN_EDX_ARG,*(int *)(this + 0x60));
    *(undefined4 *)(this + 0x60) = 0;
  }
  uVar1 = F_006905b0((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::Graphics::Scene::VfxObject::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_00699130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x699130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float * pfVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  F_009bc120(*(undefined * PTR32 *)(this + 0x234) GEN_EDX_FWD,&(*(float *)(gen_frame + 0x24)),&(*(float *)(gen_frame + 0x1c)),&(*(float *)(gen_frame + 0x2c)),&(*(float *)(gen_frame + 0x28)),&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x4c)))
  ;
  fVar9 = (float10)0;
  (*(float *)(gen_frame + 0x80)) = (float)fVar9;
  uVar1 = *(undefined4 *)(this + 0x54);
  (*(float *)(gen_frame + 0x84)) = (float)fVar9;
  (*(undefined4 *)(gen_frame + 0x50)) = *(undefined4 *)(this + 0x50);
  (*(float *)(gen_frame + 0x88)) = (float)fVar9;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x78)) = *(undefined4 *)(this + 0x58);
  F_004efe70(&(*(undefined4 *)(gen_frame + 0x50)) GEN_EDX_ARG,(uint)(this + 0x40));
  (*(float *)(gen_frame + 0x80)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x30) + (float10)(*(float *)(gen_frame + 0x80)))));
  (*(float *)(gen_frame + 0x84)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x34) + (float10)(*(float *)(gen_frame + 0x84)))));
  (*(float *)(gen_frame + 0x88)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x38) + (float10)(*(float *)(gen_frame + 0x88)))));
  (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x24)) - (float10)(*(float *)(gen_frame + 0x28)));
  (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x1c)) - (float10)(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x2c)) - (float10)(*(float *)(gen_frame + 0x4c)));
  pfVar8 = (float *)F_004ee970(&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x50)));
  fVar2 = *pfVar8;
  fVar3 = pfVar8[1];
  fVar4 = pfVar8[2];
  (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x24)) + (float10)(*(float *)(gen_frame + 0x28)));
  (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x1c)) + (float10)(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x2c)) + (float10)(*(float *)(gen_frame + 0x4c)));
  pfVar8 = (float *)F_004ee970(&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x50)));
  fVar5 = pfVar8[1];
  fVar6 = pfVar8[2];
  fVar7 = (float)((float10)fVar2 + (float10)*pfVar8);
  (*(float *)(gen_frame + 0x30)) = fVar7;
  fVar5 = (float)((float10)fVar3 + (float10)fVar5);
  (*(float *)(gen_frame + 0x34)) = fVar5;
  fVar6 = (float)((float10)fVar4 + (float10)fVar6);
  (*(float *)(gen_frame + 0x38)) = fVar6;
  fVar9 = (float10)REFG(double, 0x1088108);
  fVar7 = (float)((float10)fVar7 * fVar9);
  (*(float *)(gen_frame + 0x0)) = fVar7;
  *param_1 = fVar7;
  fVar5 = (float)((float10)fVar5 * fVar9);
  (*(float *)(gen_frame + 0x4)) = fVar5;
  param_1[1] = fVar5;
  fVar6 = (float)(fVar9 * (float10)fVar6);
  (*(float *)(gen_frame + 0x8)) = fVar6;
  param_1[2] = fVar6;
  fVar2 = (float)((float10)fVar7 - (float10)fVar2);
  (*(float *)(gen_frame + 0x30)) = fVar2;
  fVar3 = (float)((float10)fVar5 - (float10)fVar3);
  (*(float *)(gen_frame + 0x34)) = fVar3;
  fVar4 = (float)((float10)fVar6 - (float10)fVar4);
  (*(float *)(gen_frame + 0x38)) = fVar4;
  fVar9 = (float10)fVar3;
  fVar10 = (float10)fVar2;
  fVar11 = (float10)fVar4;
  fVar2 = ((float)GEN_TOF((fVar11 * fVar11 + (fVar10 * fVar10 + fVar9 * fVar9))));
  (*(float *)(gen_frame + 0x4c)) = fVar2;
  fVar2 = ((float)GEN_TOF(SQRT((float10)fVar2)));
  (*(float *)(gen_frame + 0x4c)) = fVar2;
  param_1[3] = fVar2;
  F_00c47745((*(uint *)(gen_frame + 0x9c)) ^ (uint)(uint)(gen_frame + 0xa0) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::VfxObject::vf12 */
GEN_NOFRAME uint GEN_THISCALL F_00699390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x699390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  undefined4 uVar1;
  float10 fVar2;
  undefined4 * puVar3;
  
  (*(uint *)(gen_frame + 0x11c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x120);
  F_009bc120(*(undefined * PTR32 *)(this + 0x234) GEN_EDX_FWD,&(*(float *)(gen_frame + 0x3c)),&(*(float *)(gen_frame + 0x44)),&(*(float *)(gen_frame + 0x4c)),&(*(float *)(gen_frame + 0x38)),&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0x48)))
  ;
  fVar2 = (float10)0;
  (*(float *)(gen_frame + 0x80)) = (float)fVar2;
  uVar1 = *(undefined4 *)(this + 0x54);
  (*(float *)(gen_frame + 0x84)) = (float)fVar2;
  (*(undefined4 *)(gen_frame + 0x50)) = *(undefined4 *)(this + 0x50);
  (*(float *)(gen_frame + 0x88)) = (float)fVar2;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x78)) = *(undefined4 *)(this + 0x58);
  F_004efe70(&(*(undefined4 *)(gen_frame + 0x50)) GEN_EDX_ARG,(uint)(this + 0x40));
  (*(float *)(gen_frame + 0x80)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x30) + (float10)(*(float *)(gen_frame + 0x80)))));
  (*(float *)(gen_frame + 0x84)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x34) + (float10)(*(float *)(gen_frame + 0x84)))));
  (*(float *)(gen_frame + 0x88)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x38) + (float10)(*(float *)(gen_frame + 0x88)))));
  (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x3c)) - (float10)(*(float *)(gen_frame + 0x38)));
  (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x44)) - (float10)(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x4c)) - (float10)(*(float *)(gen_frame + 0x48)));
  puVar3 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x50)));
  (*(undefined4 *)(gen_frame + 0x90)) = *puVar3;
  (*(undefined4 *)(gen_frame + 0x94)) = puVar3[1];
  uVar1 = puVar3[2];
  (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x3c)) + (float10)(*(float *)(gen_frame + 0x38)));
  (*(undefined4 *)(gen_frame + 0x98)) = uVar1;
  (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x44)) - (float10)(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x4c)) - (float10)(*(float *)(gen_frame + 0x48)));
  puVar3 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x50)));
  (*(undefined4 *)(gen_frame + 0xa0)) = *puVar3;
  (*(undefined4 *)(gen_frame + 0xa4)) = puVar3[1];
  uVar1 = puVar3[2];
  (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x3c)) - (float10)(*(float *)(gen_frame + 0x38)));
  (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x44)) + (float10)(*(float *)(gen_frame + 0x40)));
  (*(undefined4 *)(gen_frame + 0xa8)) = uVar1;
  (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x4c)) - (float10)(*(float *)(gen_frame + 0x48)));
  puVar3 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x50)));
  (*(undefined4 *)(gen_frame + 0xb0)) = *puVar3;
  (*(undefined4 *)(gen_frame + 0xb4)) = puVar3[1];
  uVar1 = puVar3[2];
  (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x3c)) + (float10)(*(float *)(gen_frame + 0x38)));
  (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x44)) + (float10)(*(float *)(gen_frame + 0x40)));
  (*(undefined4 *)(gen_frame + 0xb8)) = uVar1;
  (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x4c)) - (float10)(*(float *)(gen_frame + 0x48)));
  puVar3 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x50)));
  (*(undefined4 *)(gen_frame + 0xc0)) = *puVar3;
  (*(undefined4 *)(gen_frame + 0xc4)) = puVar3[1];
  uVar1 = puVar3[2];
  (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x3c)) - (float10)(*(float *)(gen_frame + 0x38)));
  (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x44)) - (float10)(*(float *)(gen_frame + 0x40)));
  (*(undefined4 *)(gen_frame + 0xc8)) = uVar1;
  (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x4c)) + (float10)(*(float *)(gen_frame + 0x48)));
  puVar3 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x50)));
  (*(undefined4 *)(gen_frame + 0xd0)) = *puVar3;
  (*(undefined4 *)(gen_frame + 0xd4)) = puVar3[1];
  uVar1 = puVar3[2];
  (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x3c)) + (float10)(*(float *)(gen_frame + 0x38)));
  (*(undefined4 *)(gen_frame + 0xd8)) = uVar1;
  (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x44)) - (float10)(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x4c)) + (float10)(*(float *)(gen_frame + 0x48)));
  puVar3 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x50)));
  (*(undefined4 *)(gen_frame + 0xe0)) = *puVar3;
  (*(undefined4 *)(gen_frame + 0xe4)) = puVar3[1];
  uVar1 = puVar3[2];
  (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x3c)) - (float10)(*(float *)(gen_frame + 0x38)));
  (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x44)) + (float10)(*(float *)(gen_frame + 0x40)));
  (*(undefined4 *)(gen_frame + 0xe8)) = uVar1;
  (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x4c)) + (float10)(*(float *)(gen_frame + 0x48)));
  puVar3 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x50)));
  (*(undefined4 *)(gen_frame + 0xf0)) = *puVar3;
  (*(undefined4 *)(gen_frame + 0xf4)) = puVar3[1];
  uVar1 = puVar3[2];
  (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x3c)) + (float10)(*(float *)(gen_frame + 0x38)));
  (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x44)) + (float10)(*(float *)(gen_frame + 0x40)));
  (*(undefined4 *)(gen_frame + 0xf8)) = uVar1;
  (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x4c)) + (float10)(*(float *)(gen_frame + 0x48)));
  puVar3 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x50)));
  (*(undefined4 *)(gen_frame + 0x100)) = *puVar3;
  (*(undefined4 *)(gen_frame + 0x104)) = puVar3[1];
  (*(undefined4 *)(gen_frame + 0x108)) = puVar3[2];
  puVar3 = (undefined4 *)F_004f4990(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x90)),8,0x10);
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  param_1[2] = puVar3[2];
  param_1[4] = puVar3[4];
  param_1[5] = puVar3[5];
  param_1[6] = puVar3[6];
  F_00c47745((*(uint *)(gen_frame + 0x11c)) ^ (uint)(uint)(gen_frame + 0x120) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::VfxObject::vf13 */
GEN_NOFRAME uint GEN_THISCALL F_00699870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x699870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float10 fVar8;
  
  (*(uint *)(gen_frame + 0xac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb0);
  F_009bc120(*(undefined * PTR32 *)(this + 0x234) GEN_EDX_FWD,&(*(float *)(gen_frame + 0x54)),&(*(float *)(gen_frame + 0x50)),&(*(float *)(gen_frame + 0x5c)),&(*(float *)(gen_frame + 0x4c)),&(*(float *)(gen_frame + 0x48)),&(*(float *)(gen_frame + 0x58)))
  ;
  fVar8 = (float10)0;
  (*(float *)(gen_frame + 0x90)) = (float)fVar8;
  uVar1 = *(undefined4 *)(this + 0x54);
  (*(float *)(gen_frame + 0x94)) = (float)fVar8;
  (*(undefined4 *)(gen_frame + 0x60)) = *(undefined4 *)(this + 0x50);
  (*(float *)(gen_frame + 0x98)) = (float)fVar8;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined4 *)(gen_frame + 0x80)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x88)) = *(undefined4 *)(this + 0x58);
  F_004efe70(&(*(undefined4 *)(gen_frame + 0x60)) GEN_EDX_ARG,(uint)(this + 0x40));
  (*(float *)(gen_frame + 0x90)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x30) + (float10)(*(float *)(gen_frame + 0x90)))));
  (*(float *)(gen_frame + 0x94)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x34) + (float10)(*(float *)(gen_frame + 0x94)))));
  (*(float *)(gen_frame + 0x98)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x38) + (float10)(*(float *)(gen_frame + 0x98)))));
  fVar2 = (float)((float10)(*(float *)(gen_frame + 0x4c)) + (float10)(*(float *)(gen_frame + 0x54)));
  (*(float *)(gen_frame + 0x20)) = fVar2;
  fVar3 = (float)((float10)(*(float *)(gen_frame + 0x48)) + (float10)(*(float *)(gen_frame + 0x50)));
  (*(float *)(gen_frame + 0x24)) = fVar3;
  fVar4 = (float)((float10)(*(float *)(gen_frame + 0x58)) + (float10)(*(float *)(gen_frame + 0x5c)));
  (*(float *)(gen_frame + 0x28)) = fVar4;
  fVar5 = (float)((float10)(*(float *)(gen_frame + 0x54)) - (float10)(*(float *)(gen_frame + 0x4c)));
  (*(float *)(gen_frame + 0x30)) = fVar5;
  fVar6 = (float)((float10)(*(float *)(gen_frame + 0x50)) - (float10)(*(float *)(gen_frame + 0x48)));
  (*(float *)(gen_frame + 0x34)) = fVar6;
  fVar7 = (float)((float10)(*(float *)(gen_frame + 0x5c)) - (float10)(*(float *)(gen_frame + 0x58)));
  (*(float *)(gen_frame + 0x38)) = fVar7;
  (*(float *)(gen_frame + 0x0)) = fVar5;
  (*(float *)(gen_frame + 0x4)) = fVar6;
  (*(float *)(gen_frame + 0x10)) = fVar2;
  (*(float *)(gen_frame + 0x8)) = fVar7;
  (*(float *)(gen_frame + 0x14)) = fVar3;
  (*(float *)(gen_frame + 0x18)) = fVar4;
  F_005fec10(param_1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x60)),&(*(float *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0xac)) ^ (uint)(uint)(gen_frame + 0xb0) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::VfxObject::vf7 */
GEN_NOFRAME uint GEN_THISCALL F_00699a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x699a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 uVar1;
  float10 fVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_FWD);
  fVar2 = (float10)0;
  (*(float *)(gen_frame + 0x30)) = (float)fVar2;
  uVar1 = *(undefined4 *)(this + 0x54);
  (*(float *)(gen_frame + 0x34)) = (float)fVar2;
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(this + 0x50);
  (*(float *)(gen_frame + 0x38)) = (float)fVar2;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(this + 0x58);
  F_004efe70(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)(this + 0x40));
  (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x30) + (float10)(*(float *)(gen_frame + 0x30)))));
  (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x34) + (float10)(*(float *)(gen_frame + 0x34)))));
  (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x38) + (float10)(*(float *)(gen_frame + 0x38)))));
  uVar3 = F_009bc130(*(undefined * PTR32 *)(this + 0x234) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  *(uint *)(this + 0x24) = *(uint *)(this + 0x24) & 0xfffffffd;
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50) GEN_EDX_ARG);
  return uVar3;
}

/* ref: Client::Graphics::Scene::VfxObject::vf51 */
GEN_NOFRAME uint GEN_THISCALL F_00699ad0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x699ad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  (*(uint *)(gen_frame + 0x4c)) = uVar1;
  if ((*(int *)(this + 0x234) != 0) && (((byte)this[0x1e4] & 8) == 0)) {
    F_0054fa20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,this + 0x30);
    F_00982ba0(*(undefined4 *)(this + 0x234) GEN_EDX_ARG,(uint)(byte)this[0x1e5],(uint)(byte)this[0x1e6],
                 *(float *)(this + 0x1e8),*(float *)(this + 0x1ec),((undefined1 *)(gen_frame + 0x0)));
    uVar1 = F_0068b800(this GEN_EDX_ARG);
  }
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00699b70 */
GEN_NOFRAME uint GEN_THISCALL F_00699b70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x699b70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 uVar1;
  float10 fVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  uVar3 = 0;
  if (*(int *)((int)this + 0x234) != 0) {
    uVar3 = F_009cfa30(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x234) + 0x40))) GEN_EDX_FWD,0);
    F_00982b80(uVar3 GEN_EDX_ARG,1);
    fVar2 = (float10)0;
    (*(float *)(gen_frame + 0x30)) = (float)fVar2;
    uVar1 = *(undefined4 *)((int)this + 0x54);
    (*(float *)(gen_frame + 0x34)) = (float)fVar2;
    (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)((int)this + 0x50);
    (*(float *)(gen_frame + 0x38)) = (float)fVar2;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)((int)this + 0x58);
    F_004efe70(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,(int)this + 0x40);
    (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x30) + (float10)(*(float *)(gen_frame + 0x30)))));
    (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x34) + (float10)(*(float *)(gen_frame + 0x34)))));
    (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x38) + (float10)(*(float *)(gen_frame + 0x38)))));
    F_00982ba0(uVar3 GEN_EDX_ARG,(uint)*(byte *)((int)this + 0x1e5),(uint)*(byte *)((int)this + 0x1e6),
                 *(float *)((int)this + 0x1e8),*(float *)((int)this + 0x1ec),&(*(undefined4 *)(gen_frame + 0x0)));
    F_009bc3a0(uVar3 GEN_EDX_ARG,*(float *)((int)this + 0x1f8),*(float *)((int)this + 0x1fc),
                 *(float *)((int)this + 0x200),*(float *)((int)this + 0x204));
    uVar3 = F_0068b800(this GEN_EDX_ARG);
  }
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00699cb0 */
GEN_NOFRAME uint GEN_THISCALL F_00699cb0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x699cb0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float10 fVar1;
  uint uVar2;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  (*(uint *)(gen_frame + 0x4c)) = uVar2;
  *(byte *)((int)param_1 + 0x1e4) = *(byte *)((int)param_1 + 0x1e4) | 8;
  *(undefined4 *)((int)param_1 + 0x1f0) = 0;
  *(undefined4 *)((int)param_1 + 500) = 0;
  if (*(undefined * PTR32 *)((int)param_1 + 0x234) != (undefined *)0x0) {
    uVar2 = F_009bc2a0(*(undefined * PTR32 *)((int)param_1 + 0x234) GEN_EDX_FWD);
  }
  uVar2 = CONCAT31((int3)(uVar2 >> 8),*(undefined1 *)((int)param_1 + 0x1e4)) & 0xfffffff7 | 4;
  *(byte *)((int)param_1 + 0x1e4) = (byte)uVar2;
  *(float *)((int)param_1 + 0x1f0) = param_2;
  *(undefined4 *)((int)param_1 + 500) = 0;
  if (*(int *)((int)param_1 + 0x234) != 0) {
    fVar1 = (float10)0;
    *(byte *)((int)param_1 + 0x1e4) = (byte)uVar2 & 0xfb;
    (*(float *)(gen_frame + 0x30)) = (float)fVar1;
    (*(float *)(gen_frame + 0x34)) = (float)fVar1;
    (*(float *)(gen_frame + 0x38)) = (float)fVar1;
    (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)((int)param_1 + 0x50);
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((int)param_1 + 0x54);
    (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)((int)param_1 + 0x58);
    F_004efe70(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,(int)param_1 + 0x40);
    (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x30) + (float10)(*(float *)(gen_frame + 0x30)))));
    (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x34) + (float10)(*(float *)(gen_frame + 0x34)))));
    (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x38) + (float10)(*(float *)(gen_frame + 0x38)))));
    F_00982ba0(*(undefined4 *)((int)param_1 + 0x234) GEN_EDX_ARG,(uint)*(byte *)((int)param_1 + 0x1e5),
                 (uint)*(byte *)((int)param_1 + 0x1e6),*(float *)((int)param_1 + 0x1e8),
                 *(float *)((int)param_1 + 0x1ec),&(*(undefined4 *)(gen_frame + 0x0)));
    uVar2 = F_0068b800(param_1 GEN_EDX_ARG);
  }
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00699e10 */
GEN_FRAME byte GEN_THISCALL F_00699e10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x699e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  short * psVar5;
  
  bVar2 = F_0061f450(param_1 GEN_EDX_FWD,param_2);
  if (bVar2 == 0) {
    return 0;
  }
  uVar4 = 0;
  *(undefined4 *)((int)param_1 + 0x48) = 0;
  if ((param_3 & 1) != 0) {
    bVar1 = false;
    psVar5 = (short *)((int)param_1 + 0x38);
    do {
      uVar3 = F_00623160(param_2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x132312c) + uVar4))));
      *psVar5 = (short)uVar3;
      if ((short)uVar3 == -1) {
        bVar1 = true;
      }
      uVar4 = uVar4 + 4;
      psVar5 = psVar5 + 1;
    } while (uVar4 < 8);
    if (!bVar1) {
      *(uint *)((int)param_1 + 0x48) = *(uint *)((int)param_1 + 0x48) | 1;
    }
  }
  if ((param_3 & 2) == 0) {
    if ((param_3 & 4) != 0) {
      bVar1 = false;
      psVar5 = (short *)((int)param_1 + 0x3c);
      uVar4 = 0;
      do {
        uVar3 = F_00623160(param_2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x132311c) + uVar4))));
        *psVar5 = (short)uVar3;
        if ((short)uVar3 == -1) {
          bVar1 = true;
        }
        uVar4 = uVar4 + 4;
        psVar5 = psVar5 + 1;
      } while (uVar4 < 8);
      if (!bVar1) {
        *(uint *)((int)param_1 + 0x48) = *(uint *)((int)param_1 + 0x48) | 4;
      }
    }
  }
  else {
    bVar1 = false;
    psVar5 = (short *)((int)param_1 + 0x3c);
    uVar4 = 0;
    do {
      uVar3 = F_00623160(param_2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x1323124) + uVar4))));
      *psVar5 = (short)uVar3;
      if ((short)uVar3 == -1) {
        bVar1 = true;
      }
      uVar4 = uVar4 + 4;
      psVar5 = psVar5 + 1;
    } while (uVar4 < 8);
    if (!bVar1) {
      *(uint *)((int)param_1 + 0x48) = *(uint *)((int)param_1 + 0x48) | 2;
    }
  }
  if ((param_3 & 8) != 0) {
    F_00690290(param_1 GEN_EDX_ARG);
  }
  *(undefined4 *)((int)param_1 + 0x4c) = *param_4;
  *(undefined4 *)((int)param_1 + 0x50) = param_4[1];
  *(undefined4 *)((int)param_1 + 0x54) = param_4[2];
  *(float *)((int)param_1 + 0x58) = param_5;
  return 1;
}

/* ref: Client::Graphics::Scene::PostBoneDeformer::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00699f40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x699f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  undefined1 auVar1 [16];
  ushort uVar2;
  undefined * this_00;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  byte bVar11;
  float * pfVar12;
  uint uVar13;
  ushort uVar14;
  uint uVar15;
  float10 fVar16;
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
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  
  (*(uint *)(gen_frame + 0x13c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x140);
  this_00 = *(undefined * PTR32 *)(this + 0x30);
  (*(uint *)(gen_frame + 0x38)) = *(uint *)(this + 0x48);
  if ((*(uint *)(this + 0x48) & 1) != 0) {
    (*(uint *)(gen_frame + 0x4c)) = 0;
    do {
      uVar14 = *(ushort *)(this + (*(uint *)(gen_frame + 0x4c)) * 2 + 0x38);
      ((byte *)(gen_frame + 0xc))[0] = (byte)(uVar14 >> 0xc);
      (*(ushort *)(gen_frame + 0xe)) = uVar14 & 0xfff;
      pfVar12 = (float *)F_0062b8c0(this_00 GEN_EDX_FWD,((byte *)(gen_frame + 0xc)));
      fVar9 = *(float *)(this + 0x4c);
      fVar21 = *(float *)(this + 0x50);
      fVar24 = *(float *)(this + 0x54);
      fVar5 = *pfVar12;
      fVar6 = pfVar12[1];
      fVar7 = pfVar12[2];
      fVar8 = pfVar12[3];
      (*(float *)(gen_frame + 0xa0)) = fVar5;
      (*(float *)(gen_frame + 0xa4)) = fVar6;
      (*(float *)(gen_frame + 0xa8)) = fVar7;
      (*(float *)(gen_frame + 0xac)) = fVar8;
      memcpy(&(auVar1), &(*(gen_v16 *)(pfVar12 + 4)), sizeof(*(gen_v16 *)(pfVar12 + 4)) < sizeof(auVar1) ? sizeof(*(gen_v16 *)(pfVar12 + 4)) : sizeof(auVar1));
      fVar33 = (*(float *)((char *)&auVar1 + 0));
      fVar34 = (*(float *)((char *)&auVar1 + 4));
      fVar19 = (*(float *)((char *)&auVar1 + 8));
      fVar22 = (*(float *)((char *)&auVar1 + 12));
      memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0xb0))), &(auVar1), sizeof(auVar1) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0xb0))) ? sizeof(auVar1) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0xb0))));
      fVar25 = pfVar12[8];
      fVar17 = pfVar12[9];
      fVar18 = pfVar12[10];
      fVar4 = pfVar12[0xb];
      (*(float *)(gen_frame + 0xc0)) = fVar25;
      (*(float *)(gen_frame + 0xc4)) = fVar17;
      (*(float *)(gen_frame + 0xc8)) = fVar18;
      (*(float *)(gen_frame + 0xcc)) = fVar4;
      fVar29 = fVar25 * 0.0;
      fVar30 = fVar17 * 0.0;
      fVar31 = fVar18 * 0.0;
      fVar32 = fVar4 * 0.0;
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x20)) + 0)) = (undefined4)gen_fl2bits(fVar19);
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x20)) + 4)) = (undefined4)gen_fl2bits(fVar33);
      (*(float *)(gen_frame + 0x28)) = fVar34;
      (*(float *)(gen_frame + 0x2c)) = fVar22;
      fVar20 = fVar33 * fVar29;
      fVar23 = fVar34 * fVar30;
      fVar26 = fVar19 * fVar31;
      fVar27 = (((fVar23 + fVar20) + fVar26) * fVar33 +
               (fVar22 * fVar22 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) *
               fVar29) + (fVar31 * fVar34 - fVar30 * fVar19) * fVar22;
      fVar28 = (((fVar23 + fVar20) + fVar26) * fVar34 +
               (fVar22 * fVar22 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) *
               fVar30) + (fVar29 * fVar19 - fVar31 * fVar33) * fVar22;
      fVar29 = (((fVar23 + fVar20) + fVar26) * fVar19 +
               (fVar22 * fVar22 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) *
               fVar31) + (fVar30 * fVar33 - fVar29 * fVar34) * fVar22;
      fVar30 = (((fVar23 + fVar20) + fVar26) * fVar22 +
               (fVar22 * fVar22 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) *
               fVar32) + (fVar32 * fVar22 - fVar32 * fVar22) * fVar22;
      fVar20 = ((*(float *)&REFG(undefined, 0x1138ca8) * fVar34 - *(float *)&REFG(undefined, 0x1138ca4) * fVar19) +
               *(float *)&REFG(undefined, 0x1138ca0) * fVar22) + fVar33 * *(float *)&REFG(undefined, 0x1138cac);
      fVar23 = ((*(float *)&REFG(undefined, 0x1138ca0) * fVar19 - *(float *)&REFG(undefined, 0x1138ca8) * fVar33) +
               *(float *)&REFG(undefined, 0x1138ca4) * fVar22) + fVar34 * *(float *)&REFG(undefined, 0x1138cac);
      fVar26 = ((*(float *)&REFG(undefined, 0x1138ca4) * fVar33 - *(float *)&REFG(undefined, 0x1138ca0) * fVar34) +
               *(float *)&REFG(undefined, 0x1138ca8) * fVar22) + fVar19 * *(float *)&REFG(undefined, 0x1138cac);
      (*(float *)(gen_frame + 0xa0)) = (fVar27 + fVar27) + fVar5;
      (*(float *)(gen_frame + 0xa4)) = (fVar28 + fVar28) + fVar6;
      (*(float *)(gen_frame + 0xa8)) = (fVar29 + fVar29) + fVar7;
      (*(float *)(gen_frame + 0xac)) = (fVar30 + fVar30) + fVar8;
      fVar33 = *(float *)&REFG(undefined, 0x1138cac) * fVar22 -
               ((*(float *)&REFG(undefined, 0x1138ca4) * fVar34 + *(float *)&REFG(undefined, 0x1138ca0) * fVar33) +
               *(float *)&REFG(undefined, 0x1138ca8) * fVar19);
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xb0)) + 0)) = (undefined4)gen_fl2bits(fVar20);
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xb0)) + 4)) = (undefined4)gen_fl2bits(fVar23);
      (*(float *)(gen_frame + 0xb8)) = fVar26;
      (*(float *)(gen_frame + 0xbc)) = fVar33;
      (*(ushort *)(gen_frame + 0x12)) = *(ushort *)(this + (*(uint *)(gen_frame + 0x4c)) * 2 + 0x38) & 0xfff;
      ((byte *)(gen_frame + 0x10))[0] = (byte)(*(ushort *)(this + (*(uint *)(gen_frame + 0x4c)) * 2 + 0x38) >> 0xc);
      (*(float *)(gen_frame + 0xc0)) = fVar9 * fVar25;
      (*(float *)(gen_frame + 0xc4)) = fVar21 * fVar17;
      (*(float *)(gen_frame + 0xc8)) = fVar24 * fVar18;
      (*(float *)(gen_frame + 0xcc)) = fVar4 * 0.0;
      F_0063a080(this_00 GEN_EDX_ARG,((byte *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0xa0)),0);
      uVar13 = (*(uint *)(gen_frame + 0x4c)) + 1;
      (*(uint *)(gen_frame + 0x4c)) = uVar13;
    } while (uVar13 < 2);
  }
  if (((*(uint *)(gen_frame + 0x38)) & 2) != 0) {
    uVar14 = *(ushort *)(this + 0x3c);
    uVar2 = *(ushort *)(this + 0x3e);
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x4c)) + 2)) = uVar14 & 0xfff;
    uVar10 = CONCAT22(uVar14,(undefined2)(*(uint *)(gen_frame + 0x4c)));
    (*(float *)(gen_frame + 0x40)) = gen_bits2f((uint)uVar2);
    bVar11 = (byte)(uVar14 >> 0xc);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x4c)) + 0)) = bVar11;
    (*(uint *)(gen_frame + 0x4c)) = CONCAT31((int3)((uint)uVar10 >> 8),bVar11) & 0xfffffff;
    pfVar12 = (float *)F_0062b8c0(this_00 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x4c)));
    (*(float * PTR32 *)(gen_frame + 0x3c)) = pfVar12;
    bVar11 = (byte)((uint)gen_fl2bits((*(float *)(gen_frame + 0x40))) >> 0xc) & 0xf;
    uVar14 = (ushort)(uint)gen_fl2bits((*(float *)(gen_frame + 0x40))) & 0xfff;
    (*(byte *)(gen_frame + 0x4b)) = bVar11;
    ((byte *)(gen_frame + 0x8))[0] = bVar11;
    (*(ushort *)(gen_frame + 0xa)) = uVar14;
    pfVar12 = (float *)F_0062b8c0(this_00 GEN_EDX_ARG,((byte *)(gen_frame + 0x8)));
    fVar34 = *pfVar12;
    fVar19 = pfVar12[1];
    fVar22 = pfVar12[2];
    fVar33 = pfVar12[3];
    (*(float *)(gen_frame + 0x100)) = fVar34;
    (*(float *)(gen_frame + 0x104)) = fVar19;
    (*(float *)(gen_frame + 0x108)) = fVar22;
    (*(float *)(gen_frame + 0x10c)) = fVar33;
    fVar4 = pfVar12[4];
    fVar5 = pfVar12[5];
    fVar6 = pfVar12[6];
    fVar7 = pfVar12[7];
    (*(float *)(gen_frame + 0x110)) = fVar4;
    (*(float *)(gen_frame + 0x114)) = fVar5;
    (*(float *)(gen_frame + 0x118)) = fVar6;
    (*(float *)(gen_frame + 0x11c)) = fVar7;
    fVar8 = pfVar12[8];
    fVar9 = pfVar12[9];
    fVar21 = pfVar12[10];
    fVar24 = pfVar12[0xb];
    (*(float *)(gen_frame + 0x120)) = fVar8;
    (*(float *)(gen_frame + 0x124)) = fVar9;
    (*(float *)(gen_frame + 0x128)) = fVar21;
    (*(float *)(gen_frame + 0x12c)) = fVar24;
    fVar25 = *(*(float * PTR32 *)(gen_frame + 0x3c));
    fVar17 = (*(float * PTR32 *)(gen_frame + 0x3c))[1];
    fVar18 = (*(float * PTR32 *)(gen_frame + 0x3c))[2];
    fVar33 = *(float *)(this + 0x58);
    (*(float *)(gen_frame + 0x40)) = fVar33;
    fVar16 = (float10)fVar33;
    fVar34 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar16 * (float10)(fVar34 - fVar25)))) + (float10)fVar25)));
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x20)) + 0)) = (undefined4)gen_fl2bits(fVar34);
    fVar19 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(fVar19 - fVar17) * fVar16))) + (float10)fVar17)));
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x20)) + 4)) = (undefined4)gen_fl2bits(fVar19);
    fVar22 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar16 * (float10)(fVar22 - fVar18)))) + (float10)fVar18)));
    (*(float *)(gen_frame + 0x28)) = fVar22;
    (*(float *)(gen_frame + 0x44)) = fVar34;
    (*(float *)(gen_frame + 0x44)) = fVar19;
    (*(float *)(gen_frame + 0x44)) = fVar22;
    fVar25 = (float)(float10)0;
    (*(float *)(gen_frame + 0x44)) = fVar25;
    fVar27 = fVar8 * 0.0;
    fVar28 = fVar9 * 0.0;
    fVar29 = fVar21 * 0.0;
    fVar30 = fVar24 * 0.0;
    (*(float *)(gen_frame + 0x100)) = fVar34;
    (*(float *)(gen_frame + 0x104)) = fVar19;
    (*(float *)(gen_frame + 0x108)) = fVar22;
    (*(float *)(gen_frame + 0x10c)) = fVar25;
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x20)) + 0)) = (undefined4)gen_fl2bits(fVar6);
    (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x20)) + 4)) = (undefined4)gen_fl2bits(fVar4);
    (*(float *)(gen_frame + 0x28)) = fVar5;
    (*(float *)(gen_frame + 0x2c)) = fVar7;
    fVar17 = fVar4 * fVar27;
    fVar18 = fVar5 * fVar28;
    fVar20 = fVar6 * fVar29;
    fVar23 = (((fVar18 + fVar17) + fVar20) * fVar4 +
             (fVar7 * fVar7 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) * fVar27)
             + (fVar29 * fVar5 - fVar28 * fVar6) * fVar7;
    fVar26 = (((fVar18 + fVar17) + fVar20) * fVar5 +
             (fVar7 * fVar7 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) * fVar28)
             + (fVar27 * fVar6 - fVar29 * fVar4) * fVar7;
    fVar27 = (((fVar18 + fVar17) + fVar20) * fVar6 +
             (fVar7 * fVar7 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) * fVar29)
             + (fVar28 * fVar4 - fVar27 * fVar5) * fVar7;
    fVar17 = (((fVar18 + fVar17) + fVar20) * fVar7 +
             (fVar7 * fVar7 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) * fVar30)
             + (fVar30 * fVar7 - fVar30 * fVar7) * fVar7;
    (*(float *)(gen_frame + 0x100)) = (fVar23 + fVar23) + fVar34;
    (*(float *)(gen_frame + 0x104)) = (fVar26 + fVar26) + fVar19;
    (*(float *)(gen_frame + 0x108)) = (fVar27 + fVar27) + fVar22;
    (*(float *)(gen_frame + 0x10c)) = (fVar17 + fVar17) + fVar25;
    ((byte *)(gen_frame + 0x1c))[0] = (*(byte *)(gen_frame + 0x4b));
    (*(float *)(gen_frame + 0x110)) = ((*(float *)&REFG(undefined, 0x1138ca8) * fVar5 - *(float *)&REFG(undefined, 0x1138ca4) * fVar6) +
               *(float *)&REFG(undefined, 0x1138ca0) * fVar7) + fVar4 * *(float *)&REFG(undefined, 0x1138cac);
    (*(float *)(gen_frame + 0x114)) = ((*(float *)&REFG(undefined, 0x1138ca0) * fVar6 - *(float *)&REFG(undefined, 0x1138ca8) * fVar4) +
                *(float *)&REFG(undefined, 0x1138ca4) * fVar7) + fVar5 * *(float *)&REFG(undefined, 0x1138cac);
    (*(float *)(gen_frame + 0x118)) = ((*(float *)&REFG(undefined, 0x1138ca4) * fVar4 - *(float *)&REFG(undefined, 0x1138ca0) * fVar5) +
                *(float *)&REFG(undefined, 0x1138ca8) * fVar7) + fVar6 * *(float *)&REFG(undefined, 0x1138cac);
    (*(float *)(gen_frame + 0x11c)) = *(float *)&REFG(undefined, 0x1138cac) * fVar7 -
                ((*(float *)&REFG(undefined, 0x1138ca4) * fVar5 + *(float *)&REFG(undefined, 0x1138ca0) * fVar4) +
                *(float *)&REFG(undefined, 0x1138ca8) * fVar6);
    (*(float *)(gen_frame + 0x120)) = fVar33 * fVar8;
    (*(float *)(gen_frame + 0x124)) = REFG(float, 0x1087f04) * fVar9;
    (*(float *)(gen_frame + 0x128)) = REFG(float, 0x1087f04) * fVar21;
    (*(float *)(gen_frame + 0x12c)) = fVar24 * 0.0;
    (*(ushort *)(gen_frame + 0x1e)) = uVar14;
    F_0063a080(this_00 GEN_EDX_ARG,((byte *)(gen_frame + 0x1c)),&(*(float *)(gen_frame + 0x100)),0);
  }
  if (((*(uint *)(gen_frame + 0x38)) & 4) != 0) {
    (*(uint *)(gen_frame + 0x4c)) = 0;
    do {
      uVar14 = *(ushort *)(this + (*(uint *)(gen_frame + 0x4c)) * 2 + 0x3c);
      ((byte *)(gen_frame + 0x18))[0] = (byte)(uVar14 >> 0xc);
      (*(ushort *)(gen_frame + 0x1a)) = uVar14 & 0xfff;
      pfVar12 = (float *)F_0062b8c0(this_00 GEN_EDX_ARG,((byte *)(gen_frame + 0x18)));
      fVar33 = *(float *)(this + 0x58);
      fVar6 = *pfVar12;
      fVar7 = pfVar12[1];
      fVar8 = pfVar12[2];
      fVar9 = pfVar12[3];
      (*(float *)(gen_frame + 0x70)) = fVar6;
      (*(float *)(gen_frame + 0x74)) = fVar7;
      (*(float *)(gen_frame + 0x78)) = fVar8;
      (*(float *)(gen_frame + 0x7c)) = fVar9;
      memcpy(&(auVar1), &(*(gen_v16 *)(pfVar12 + 4)), sizeof(*(gen_v16 *)(pfVar12 + 4)) < sizeof(auVar1) ? sizeof(*(gen_v16 *)(pfVar12 + 4)) : sizeof(auVar1));
      fVar34 = (*(float *)((char *)&auVar1 + 0));
      fVar19 = (*(float *)((char *)&auVar1 + 4));
      fVar22 = (*(float *)((char *)&auVar1 + 8));
      fVar25 = (*(float *)((char *)&auVar1 + 12));
      (*(undefined4 *)((char *)&auVar3 + 8)) = (undefined4)gen_fl2bits(fVar34);
      (*(undefined8 *)((char *)&auVar3 + 0)) = (*(undefined8 *)((char *)&auVar1 + 4));
      (*(undefined4 *)((char *)&auVar3 + 12)) = (undefined4)gen_fl2bits(fVar25);
      memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x20))), &(auVar3), sizeof(auVar3) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x20))) ? sizeof(auVar3) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x20))));
      memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x80))), &(auVar1), sizeof(auVar1) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x80))) ? sizeof(auVar1) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x80))));
      fVar17 = pfVar12[8];
      fVar18 = pfVar12[9];
      fVar4 = pfVar12[10];
      fVar5 = pfVar12[0xb];
      (*(float *)(gen_frame + 0x90)) = fVar17;
      (*(float *)(gen_frame + 0x94)) = fVar18;
      (*(float *)(gen_frame + 0x98)) = fVar4;
      (*(float *)(gen_frame + 0x9c)) = fVar5;
      fVar27 = fVar17 * 0.0;
      fVar28 = fVar18 * 0.0;
      fVar29 = fVar4 * 0.0;
      fVar30 = fVar5 * 0.0;
      fVar21 = fVar34 * fVar27;
      fVar24 = fVar19 * fVar28;
      fVar20 = fVar22 * fVar29;
      fVar23 = (((fVar24 + fVar21) + fVar20) * fVar34 +
               (fVar25 * fVar25 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) *
               fVar27) + (fVar29 * fVar19 - fVar28 * fVar22) * fVar25;
      fVar26 = (((fVar24 + fVar21) + fVar20) * fVar19 +
               (fVar25 * fVar25 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) *
               fVar28) + (fVar27 * fVar22 - fVar29 * fVar34) * fVar25;
      fVar27 = (((fVar24 + fVar21) + fVar20) * fVar22 +
               (fVar25 * fVar25 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) *
               fVar29) + (fVar28 * fVar34 - fVar27 * fVar19) * fVar25;
      fVar28 = (((fVar24 + fVar21) + fVar20) * fVar25 +
               (fVar25 * fVar25 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) *
               fVar30) + (fVar30 * fVar25 - fVar30 * fVar25) * fVar25;
      fVar21 = ((*(float *)&REFG(undefined, 0x1138ca8) * fVar19 - *(float *)&REFG(undefined, 0x1138ca4) * fVar22) +
               *(float *)&REFG(undefined, 0x1138ca0) * fVar25) + fVar34 * *(float *)&REFG(undefined, 0x1138cac);
      fVar24 = ((*(float *)&REFG(undefined, 0x1138ca0) * fVar22 - *(float *)&REFG(undefined, 0x1138ca8) * fVar34) +
               *(float *)&REFG(undefined, 0x1138ca4) * fVar25) + fVar19 * *(float *)&REFG(undefined, 0x1138cac);
      fVar20 = ((*(float *)&REFG(undefined, 0x1138ca4) * fVar34 - *(float *)&REFG(undefined, 0x1138ca0) * fVar19) +
               *(float *)&REFG(undefined, 0x1138ca8) * fVar25) + fVar22 * *(float *)&REFG(undefined, 0x1138cac);
      (*(float *)(gen_frame + 0x70)) = (fVar23 + fVar23) + fVar6;
      (*(float *)(gen_frame + 0x74)) = (fVar26 + fVar26) + fVar7;
      (*(float *)(gen_frame + 0x78)) = (fVar27 + fVar27) + fVar8;
      (*(float *)(gen_frame + 0x7c)) = (fVar28 + fVar28) + fVar9;
      fVar34 = *(float *)&REFG(undefined, 0x1138cac) * fVar25 -
               ((*(float *)&REFG(undefined, 0x1138ca4) * fVar19 + *(float *)&REFG(undefined, 0x1138ca0) * fVar34) +
               *(float *)&REFG(undefined, 0x1138ca8) * fVar22);
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x80)) + 0)) = (undefined4)gen_fl2bits(fVar21);
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x80)) + 4)) = (undefined4)gen_fl2bits(fVar24);
      (*(float *)(gen_frame + 0x88)) = fVar20;
      (*(float *)(gen_frame + 0x8c)) = fVar34;
      (*(ushort *)(gen_frame + 0x16)) = *(ushort *)(this + (*(uint *)(gen_frame + 0x4c)) * 2 + 0x3c) & 0xfff;
      ((byte *)(gen_frame + 0x14))[0] = (byte)(*(ushort *)(this + (*(uint *)(gen_frame + 0x4c)) * 2 + 0x3c) >> 0xc);
      (*(float *)(gen_frame + 0x90)) = fVar33 * fVar17;
      (*(float *)(gen_frame + 0x94)) = REFG(float, 0x1087f04) * fVar18;
      (*(float *)(gen_frame + 0x98)) = REFG(float, 0x1087f04) * fVar4;
      (*(float *)(gen_frame + 0x9c)) = fVar5 * 0.0;
      F_0063a080(this_00 GEN_EDX_ARG,((byte *)(gen_frame + 0x14)),&(*(float *)(gen_frame + 0x70)),0);
      uVar13 = (*(uint *)(gen_frame + 0x4c)) + 1;
      (*(uint *)(gen_frame + 0x4c)) = uVar13;
    } while (uVar13 < 2);
  }
  uVar13 = (*(uint *)(gen_frame + 0x38));
  if (((*(uint *)(gen_frame + 0x38)) & 8) != 0) {
    (*(uint *)(gen_frame + 0x4c)) = 0;
    do {
      uVar14 = *(ushort *)(this + (*(uint *)(gen_frame + 0x4c)) * 2 + 0x40);
      uVar13 = (uint)uVar14;
      uVar15 = (*(uint *)(gen_frame + 0x4c));
      if (uVar14 != 0xffff) {
        bVar11 = (byte)(uVar14 >> 0xc);
        (*(undefined1 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x3c)) + 0)) = bVar11;
        (*(float * PTR32 *)(gen_frame + 0x3c)) = ((float *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(float * PTR32 *)(gen_frame + 0x3c)), 1, 3),bVar11)));
        (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x3c)) + 2)) = uVar14 & 0xfff;
        (*(float * PTR32 *)(gen_frame + 0x3c)) = ((float *)GEN_TOP((CONCAT22(uVar14,(*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x3c)) + 0))) & 0xfffffff)));
        pfVar12 = (float *)F_0062b8c0(this_00 GEN_EDX_ARG,&(*(float * PTR32 *)(gen_frame + 0x3c)));
        fVar33 = pfVar12[1];
        fVar34 = pfVar12[2];
        fVar19 = pfVar12[3];
        (*(float *)(gen_frame + 0xd0)) = *pfVar12;
        (*(float *)(gen_frame + 0xd4)) = fVar33;
        (*(float *)(gen_frame + 0xd8)) = fVar34;
        (*(float *)(gen_frame + 0xdc)) = fVar19;
        (*(float *)(gen_frame + 0xe0)) = pfVar12[4];
        (*(float *)(gen_frame + 0xe4)) = pfVar12[5];
        (*(float *)(gen_frame + 0xe8)) = pfVar12[6];
        (*(float *)(gen_frame + 0xec)) = pfVar12[7];
        fVar33 = *(float *)(this + (*(uint *)(gen_frame + 0x4c)) * 4 + 0x5c);
        (*(float *)(gen_frame + 0xf0)) = pfVar12[8];
        (*(float *)(gen_frame + 0xf4)) = pfVar12[9];
        (*(float *)(gen_frame + 0xf8)) = pfVar12[10];
        (*(float *)(gen_frame + 0xfc)) = pfVar12[0xb];
        (*(undefined4 *)(gen_frame + 0x60)) = *(undefined4 *)&REFG(undefined, 0x10b2a40);
        (*(undefined4 *)(gen_frame + 0x64)) = *(undefined4 *)&REFG(undefined, 0x10b2a44);
        (*(undefined4 *)(gen_frame + 0x68)) = *(undefined4 *)&REFG(undefined, 0x10b2a48);
        (*(undefined4 *)(gen_frame + 0x6c)) = *(undefined4 *)&REFG(undefined, 0x10b2a4c);
        F_00d988a0(&(*(float *)(gen_frame + 0x50)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x60)),fVar33);
        (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x20)) + 0)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xe8)));
        (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x20)) + 4)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xe0)));
        (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0xe4));
        (*(float *)(gen_frame + 0x2c)) = (*(float *)(gen_frame + 0xec));
        fVar33 = (*(float *)(gen_frame + 0xe0)) * *(float *)&REFG(undefined, 0x10b2a50);
        fVar34 = (*(float *)(gen_frame + 0xe4)) * *(float *)&REFG(undefined, 0x10b2a54);
        fVar19 = (*(float *)(gen_frame + 0xe8)) * *(float *)&REFG(undefined, 0x10b2a58);
        fVar22 = (((fVar34 + fVar33) + fVar19) * (*(float *)(gen_frame + 0xe0)) +
                 ((*(float *)(gen_frame + 0xec)) * (*(float *)(gen_frame + 0xec)) +
                 gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) *
                 *(float *)&REFG(undefined, 0x10b2a50)) +
                 (*(float *)&REFG(undefined, 0x10b2a58) * (*(float *)(gen_frame + 0xe4)) - *(float *)&REFG(undefined, 0x10b2a54) * (*(float *)(gen_frame + 0xe8))) *
                 (*(float *)(gen_frame + 0xec));
        fVar25 = (((fVar34 + fVar33) + fVar19) * (*(float *)(gen_frame + 0xe4)) +
                 ((*(float *)(gen_frame + 0xec)) * (*(float *)(gen_frame + 0xec)) +
                 gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) *
                 *(float *)&REFG(undefined, 0x10b2a54)) +
                 (*(float *)&REFG(undefined, 0x10b2a50) * (*(float *)(gen_frame + 0xe8)) - *(float *)&REFG(undefined, 0x10b2a58) * (*(float *)(gen_frame + 0xe0))) *
                 (*(float *)(gen_frame + 0xec));
        fVar17 = (((fVar34 + fVar33) + fVar19) * (*(float *)(gen_frame + 0xe8)) +
                 ((*(float *)(gen_frame + 0xec)) * (*(float *)(gen_frame + 0xec)) +
                 gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) *
                 *(float *)&REFG(undefined, 0x10b2a58)) +
                 (*(float *)&REFG(undefined, 0x10b2a54) * (*(float *)(gen_frame + 0xe0)) - *(float *)&REFG(undefined, 0x10b2a50) * (*(float *)(gen_frame + 0xe4))) *
                 (*(float *)(gen_frame + 0xec));
        fVar33 = (((fVar34 + fVar33) + fVar19) * (*(float *)(gen_frame + 0xec)) +
                 ((*(float *)(gen_frame + 0xec)) * (*(float *)(gen_frame + 0xec)) +
                 gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) *
                 *(float *)&REFG(undefined, 0x10b2a5c)) +
                 (*(float *)&REFG(undefined, 0x10b2a5c) * (*(float *)(gen_frame + 0xec)) - *(float *)&REFG(undefined, 0x10b2a5c) * (*(float *)(gen_frame + 0xec))) *
                 (*(float *)(gen_frame + 0xec));
        (*(float *)(gen_frame + 0xd0)) = (fVar22 + fVar22) + (*(float *)(gen_frame + 0xd0));
        (*(float *)(gen_frame + 0xd4)) = (fVar25 + fVar25) + (*(float *)(gen_frame + 0xd4));
        (*(float *)(gen_frame + 0xd8)) = (fVar17 + fVar17) + (*(float *)(gen_frame + 0xd8));
        (*(float *)(gen_frame + 0xdc)) = (fVar33 + fVar33) + (*(float *)(gen_frame + 0xdc));
        fVar22 = (*(float *)(gen_frame + 0x54)) * (*(float *)(gen_frame + 0xe0));
        fVar25 = (*(float *)(gen_frame + 0x58)) * (*(float *)(gen_frame + 0xe0));
        fVar17 = (*(float *)(gen_frame + 0x50)) * (*(float *)(gen_frame + 0xe4));
        uVar14 = *(ushort *)(this + (*(uint *)(gen_frame + 0x4c)) * 2 + 0x40);
        fVar33 = (*(float *)(gen_frame + 0xe0)) * (*(float *)(gen_frame + 0x50));
        fVar34 = (*(float *)(gen_frame + 0xe4)) * (*(float *)(gen_frame + 0x54));
        fVar19 = (*(float *)(gen_frame + 0xe8)) * (*(float *)(gen_frame + 0x58));
        bVar11 = (byte)(uVar14 >> 0xc);
        (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x40)) + 2)) = uVar14 & 0xfff;
        uVar10 = CONCAT22(uVar14,(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x40)) + 0)));
        (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x40)) + 0)) = bVar11;
        (*(float *)(gen_frame + 0x40)) = gen_bits2f(CONCAT31((int3)((uint)uVar10 >> 8),bVar11) & 0xfffffff);
        (*(float *)(gen_frame + 0xe0)) = (((*(float *)(gen_frame + 0x58)) * (*(float *)(gen_frame + 0xe4)) - (*(float *)(gen_frame + 0x54)) * (*(float *)(gen_frame + 0xe8))) + (*(float *)(gen_frame + 0xec)) * (*(float *)(gen_frame + 0x50))) +
                   (*(float *)(gen_frame + 0xe0)) * (*(float *)(gen_frame + 0x5c));
        (*(float *)(gen_frame + 0xe4)) = (((*(float *)(gen_frame + 0x50)) * (*(float *)(gen_frame + 0xe8)) - fVar25) + (*(float *)(gen_frame + 0xec)) * (*(float *)(gen_frame + 0x54))) +
                    (*(float *)(gen_frame + 0xe4)) * (*(float *)(gen_frame + 0x5c));
        (*(float *)(gen_frame + 0xe8)) = ((fVar22 - fVar17) + (*(float *)(gen_frame + 0xec)) * (*(float *)(gen_frame + 0x58))) + (*(float *)(gen_frame + 0xe8)) * (*(float *)(gen_frame + 0x5c));
        (*(float *)(gen_frame + 0xec)) = (*(float *)(gen_frame + 0x5c)) * (*(float *)(gen_frame + 0xec)) - ((fVar34 + fVar33) + fVar19);
        (*(float *)(gen_frame + 0xf0)) = *(float *)&REFG(undefined, 0x1138af0) * (*(float *)(gen_frame + 0xf0));
        (*(float *)(gen_frame + 0xf4)) = *(float *)&REFG(undefined, 0x1138af4) * (*(float *)(gen_frame + 0xf4));
        (*(float *)(gen_frame + 0xf8)) = *(float *)&REFG(undefined, 0x1138af8) * (*(float *)(gen_frame + 0xf8));
        (*(float *)(gen_frame + 0xfc)) = *(float *)&REFG(undefined, 0x1138afc) * (*(float *)(gen_frame + 0xfc));
        uVar13 = F_0063a080(this_00 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0xd0)),0);
        uVar15 = (*(uint *)(gen_frame + 0x4c));
      }
      (*(uint *)(gen_frame + 0x4c)) = uVar15 + 1;
    } while (uVar15 + 1 < 3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x13c)) ^ (uint)(uint)(gen_frame + 0x140) GEN_EDX_ARG);
  return uVar13;
}

/* ref: Client::Graphics::Scene::Attach::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0069a8e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x69a8e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006b2f70(this GEN_EDX_FWD);
  if (*(int *)(this + 0x4c) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,*(int *)(this + 0x4c));
    *(undefined4 *)(this + 0x4c) = 0;
  }
  *(undefined4 *)(this + 0x3c) = 0;
  F_0061f480((undefined *)this GEN_EDX_ARG);
  return;
}

/* ref: Client::Graphics::Scene::Attach::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_0069a920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x69a920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x300];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined * pvVar4;
  undefined * pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined4 * puVar11;
  uint uVar12;
  int * piVar13;
  float * pfVar14;
  int iVar15;
  undefined4 * puVar16;
  float * pfVar17;
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
  
  (*(uint *)(gen_frame + 0x2ec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2f0);
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(this + 0x38))) {
  case 1: ;
    iVar15 = *(int *)(this + 0x4c);
    piVar13 = *(int * PTR32 *)(this + 0x44);
    (*(undefined * PTR32 *)(gen_frame + 0x1dc)) = *(undefined * PTR32 *)(this + 0x40);
    F_0054fa20(((undefined1 *)(gen_frame + 0x260)) GEN_EDX_FWD,iVar15 + 0x10);
    uVar12 = ((GEN_TCODE *)*(gen_code32 *)(*piVar13 + 0x40))(piVar13 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1e0)),(uint)*(ushort *)(iVar15 + 2));
    puVar11 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0x2a0)),(uint)((undefined1 *)(gen_frame + 0x260)),uVar12);
    puVar16 = ((undefined4 *)(gen_frame + 0x90));
    for (iVar15 = 0x10; iVar15 != 0; iVar15 = iVar15 - 1) {
      *puVar16 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar16 = puVar16 + 1;
    }
    F_005fe8d0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x90)));
    this = (undefined *)F_0060aad0((*(undefined * PTR32 *)(gen_frame + 0x1dc)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    break;
  case 2: ;
    iVar15 = *(int *)(this + 0x4c);
    pvVar5 = *(undefined * PTR32 *)(this + 0x44);
    (*(undefined * PTR32 *)(gen_frame + 0x1dc)) = *(undefined * PTR32 *)(this + 0x40);
    F_0054fa20(((undefined1 *)(gen_frame + 0x260)) GEN_EDX_ARG,iVar15 + 0x10);
    uVar12 = F_0064ce50(pvVar5 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x220)),(uint)*(ushort *)(iVar15 + 2));
    puVar11 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0x2a0)),(uint)((undefined1 *)(gen_frame + 0x260)),uVar12);
    puVar16 = ((undefined4 *)(gen_frame + 0x90));
    for (iVar15 = 0x10; iVar15 != 0; iVar15 = iVar15 - 1) {
      *puVar16 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar16 = puVar16 + 1;
    }
    F_005fe8d0(((undefined1 *)(gen_frame + 0x30)) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x90)));
    this = (undefined *)F_0060aad0((*(undefined * PTR32 *)(gen_frame + 0x1dc)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
    break;
  case 3: ;
    piVar13 = *(int * PTR32 *)(this + 0x44);
    pvVar5 = *(undefined * PTR32 *)(this + 0x40);
    (*(undefined * PTR32 *)(gen_frame + 0x1dc)) = *(undefined * PTR32 *)(this + 0x48);
    (*(int *)(gen_frame + 0x19c)) = *(int *)(this + 0x4c);
    (*(int * PTR32 *)(gen_frame + 0x1d8)) = piVar13;
    uVar12 = ((GEN_TCODE *)*(gen_code32 *)(*piVar13 + 0x90))(piVar13 GEN_EDX_ARG);
    if ((char)uVar12 == '\0') {
      piVar13 = piVar13 + 0xc;
    }
    else {
      piVar13 = (int *)(piVar13[0x1e] + 0x10);
    }
    this = (undefined *)F_006001e0(&(*(float *)(gen_frame + 0x1a0)) GEN_EDX_ARG,piVar13);
    if ((*(undefined * PTR32 *)(gen_frame + 0x1dc)) != (undefined *)0x0) {
      (*(float *)(gen_frame + 0xf0)) = (*(float *)(gen_frame + 0x1a0));
      (*(float *)(gen_frame + 0xf4)) = (*(float *)(gen_frame + 0x1a4));
      (*(float *)(gen_frame + 0xf8)) = (*(float *)(gen_frame + 0x1a8));
      (*(float *)(gen_frame + 0xfc)) = 0.0;
      pfVar17 = (float *)((*(int *)(gen_frame + 0x19c)) + 0x28);
      (*(float *)(gen_frame + 0x100)) = (*(float *)(gen_frame + 0x1b0));
      (*(float *)(gen_frame + 0x104)) = (*(float *)(gen_frame + 0x1b4));
      (*(float *)(gen_frame + 0x108)) = (*(float *)(gen_frame + 0x1b8));
      (*(float *)(gen_frame + 0x10c)) = (*(float *)(gen_frame + 0x1bc));
      (*(float *)(gen_frame + 0x110)) = (*(float *)(gen_frame + 0x1c0));
      (*(float *)(gen_frame + 0x114)) = (*(float *)(gen_frame + 0x1c4));
      (*(float *)(gen_frame + 0x118)) = (*(float *)(gen_frame + 0x1c8));
      (*(float *)(gen_frame + 0x11c)) = 0.0;
      (*(float *)(gen_frame + 0x70)) = (*(float *)(gen_frame + 0x1bc));
      (*(float *)(gen_frame + 0x74)) = (*(float *)(gen_frame + 0x1bc));
      (*(float *)(gen_frame + 0x78)) = (*(float *)(gen_frame + 0x1bc));
      (*(float *)(gen_frame + 0x7c)) = (*(float *)(gen_frame + 0x1bc));
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xe0)) + 0)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x1b8)));
      (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xe0)) + 4)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x1b0)));
      (*(float *)(gen_frame + 0xe8)) = (*(float *)(gen_frame + 0x1b4));
      (*(float *)(gen_frame + 0xec)) = (*(float *)(gen_frame + 0x1bc));
      (*(float *)(gen_frame + 0xd0)) = (*(float *)(gen_frame + 0x1b4));
      (*(float *)(gen_frame + 0xd4)) = (*(float *)(gen_frame + 0x1b8));
      (*(float *)(gen_frame + 0xd8)) = (*(float *)(gen_frame + 0x1b0));
      (*(float *)(gen_frame + 0xdc)) = (*(float *)(gen_frame + 0x1bc));
      do {
        (*(float *)(gen_frame + 0x2b0)) = pfVar17[-6];
        (*(float *)(gen_frame + 0x2b4)) = pfVar17[-5];
        (*(float *)(gen_frame + 0x2b8)) = pfVar17[-4];
        (*(float *)(gen_frame + 0x2bc)) = 0.0;
        (*(float *)(gen_frame + 0x2c0)) = pfVar17[-2];
        (*(float *)(gen_frame + 0x2c4)) = pfVar17[-1];
        (*(float *)(gen_frame + 0x2c8)) = *pfVar17;
        (*(float *)(gen_frame + 0x2cc)) = pfVar17[1];
        (*(float *)(gen_frame + 0x2d0)) = pfVar17[2];
        (*(float *)(gen_frame + 0x2d4)) = pfVar17[3];
        (*(float *)(gen_frame + 0x2d8)) = pfVar17[4];
        (*(float *)(gen_frame + 0x2dc)) = 0.0;
        ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x1d8)) + 0x58))
                  ((*(int * PTR32 *)(gen_frame + 0x1d8)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x1a0)),(uint)*(ushort *)((int)pfVar17 - 0x26));
        fVar24 = gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0));
        fVar27 = gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4));
        fVar28 = gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8));
        fVar32 = gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc));
        (*(float *)(gen_frame + 0x120)) = fVar24;
        (*(float *)(gen_frame + 0x124)) = fVar27;
        (*(float *)(gen_frame + 0x128)) = fVar28;
        (*(float *)(gen_frame + 0x12c)) = fVar32;
        (*(float *)(gen_frame + 0x80)) = (*(float *)(gen_frame + 0x1b4));
        (*(float *)(gen_frame + 0x84)) = (*(float *)(gen_frame + 0x1b8));
        (*(float *)(gen_frame + 0x88)) = (*(float *)(gen_frame + 0x1b0));
        (*(float *)(gen_frame + 0x8c)) = (*(float *)(gen_frame + 0x1bc));
        (*(float *)(gen_frame + 0x60)) = (*(float *)(gen_frame + 0x1b8));
        (*(float *)(gen_frame + 0x64)) = (*(float *)(gen_frame + 0x1b0));
        (*(float *)(gen_frame + 0x68)) = (*(float *)(gen_frame + 0x1b4));
        (*(float *)(gen_frame + 0x6c)) = (*(float *)(gen_frame + 0x1bc));
        fVar18 = (*(float *)(gen_frame + 0x1b0)) * (*(float *)(gen_frame + 0x2b0));
        fVar19 = (*(float *)(gen_frame + 0x1b4)) * (*(float *)(gen_frame + 0x2b4));
        fVar20 = (*(float *)(gen_frame + 0x1b8)) * (*(float *)(gen_frame + 0x2b8));
        fVar29 = (((fVar19 + fVar18) + fVar20) * (*(float *)(gen_frame + 0x1b0)) +
                 ((*(float *)(gen_frame + 0x1bc)) * (*(float *)(gen_frame + 0x1bc)) + fVar24) * (*(float *)(gen_frame + 0x2b0))) +
                 ((*(float *)(gen_frame + 0x2b8)) * (*(float *)(gen_frame + 0x1b4)) - (*(float *)(gen_frame + 0x2b4)) * (*(float *)(gen_frame + 0x1b8))) * (*(float *)(gen_frame + 0x1bc));
        fVar21 = (((fVar19 + fVar18) + fVar20) * (*(float *)(gen_frame + 0x1b4)) +
                 ((*(float *)(gen_frame + 0x1bc)) * (*(float *)(gen_frame + 0x1bc)) + fVar27) * (*(float *)(gen_frame + 0x2b4))) +
                 ((*(float *)(gen_frame + 0x2b0)) * (*(float *)(gen_frame + 0x1b8)) - (*(float *)(gen_frame + 0x2b8)) * (*(float *)(gen_frame + 0x1b0))) * (*(float *)(gen_frame + 0x1bc));
        fVar22 = (((fVar19 + fVar18) + fVar20) * (*(float *)(gen_frame + 0x1b8)) +
                 ((*(float *)(gen_frame + 0x1bc)) * (*(float *)(gen_frame + 0x1bc)) + fVar28) * (*(float *)(gen_frame + 0x2b8))) +
                 ((*(float *)(gen_frame + 0x2b4)) * (*(float *)(gen_frame + 0x1b0)) - (*(float *)(gen_frame + 0x2b0)) * (*(float *)(gen_frame + 0x1b4))) * (*(float *)(gen_frame + 0x1bc));
        fVar18 = (((fVar19 + fVar18) + fVar20) * (*(float *)(gen_frame + 0x1bc)) +
                 ((*(float *)(gen_frame + 0x1bc)) * (*(float *)(gen_frame + 0x1bc)) + fVar32) * (*(float *)(gen_frame + 0x2bc))) +
                 ((*(float *)(gen_frame + 0x2bc)) * (*(float *)(gen_frame + 0x1bc)) - (*(float *)(gen_frame + 0x2bc)) * (*(float *)(gen_frame + 0x1bc))) * (*(float *)(gen_frame + 0x1bc));
        fVar29 = (fVar29 + fVar29) + (*(float *)(gen_frame + 0x1a0));
        fVar21 = (fVar21 + fVar21) + (*(float *)(gen_frame + 0x1a4));
        fVar22 = (fVar22 + fVar22) + (*(float *)(gen_frame + 0x1a8));
        fVar23 = (fVar18 + fVar18) + 0.0;
        (*(float *)(gen_frame + 0xa0)) = fVar29;
        (*(float *)(gen_frame + 0xa4)) = fVar21;
        (*(float *)(gen_frame + 0xa8)) = fVar22;
        (*(float *)(gen_frame + 0xac)) = fVar23;
        fVar25 = (((*(float *)(gen_frame + 0x2c8)) * (*(float *)(gen_frame + 0x1b4)) - (*(float *)(gen_frame + 0x2c4)) * (*(float *)(gen_frame + 0x1b8))) + (*(float *)(gen_frame + 0x2c0)) * (*(float *)(gen_frame + 0x1bc))) +
                 (*(float *)(gen_frame + 0x1b0)) * (*(float *)(gen_frame + 0x2cc));
        fVar26 = (((*(float *)(gen_frame + 0x2c0)) * (*(float *)(gen_frame + 0x1b8)) - (*(float *)(gen_frame + 0x2c8)) * (*(float *)(gen_frame + 0x1b0))) + (*(float *)(gen_frame + 0x2c4)) * (*(float *)(gen_frame + 0x1bc))) +
                 (*(float *)(gen_frame + 0x1b4)) * (*(float *)(gen_frame + 0x2cc));
        fVar30 = (((*(float *)(gen_frame + 0x2c4)) * (*(float *)(gen_frame + 0x1b0)) - (*(float *)(gen_frame + 0x2c0)) * (*(float *)(gen_frame + 0x1b4))) + (*(float *)(gen_frame + 0x2c8)) * (*(float *)(gen_frame + 0x1bc))) +
                 (*(float *)(gen_frame + 0x1b8)) * (*(float *)(gen_frame + 0x2cc));
        fVar29 = (*(float *)(gen_frame + 0x110)) * fVar29;
        fVar21 = (*(float *)(gen_frame + 0x114)) * fVar21;
        fVar22 = (*(float *)(gen_frame + 0x118)) * fVar22;
        fVar23 = (*(float *)(gen_frame + 0x11c)) * fVar23;
        fVar31 = (*(float *)(gen_frame + 0x2cc)) * (*(float *)(gen_frame + 0x1bc)) -
                 (((*(float *)(gen_frame + 0x1b4)) * (*(float *)(gen_frame + 0x2c4)) + (*(float *)(gen_frame + 0x1b0)) * (*(float *)(gen_frame + 0x2c0))) + (*(float *)(gen_frame + 0x1b8)) * (*(float *)(gen_frame + 0x2c8)));
        fVar18 = (*(float *)(gen_frame + 0x100)) * fVar29;
        fVar19 = (*(float *)(gen_frame + 0x104)) * fVar21;
        fVar20 = (*(float *)(gen_frame + 0x108)) * fVar22;
        (*(float *)(gen_frame + 0xc0)) = (*(float *)(gen_frame + 0x1c0)) * (*(float *)(gen_frame + 0x2d0));
        (*(float *)(gen_frame + 0xc4)) = (*(float *)(gen_frame + 0x1c4)) * (*(float *)(gen_frame + 0x2d4));
        (*(float *)(gen_frame + 0xc8)) = (*(float *)(gen_frame + 0x1c8)) * (*(float *)(gen_frame + 0x2d8));
        (*(float *)(gen_frame + 0xcc)) = (*(float *)(gen_frame + 0x2dc)) * 0.0;
        fVar24 = (((fVar19 + fVar18) + fVar20) * (*(float *)(gen_frame + 0x100)) +
                 ((*(float *)(gen_frame + 0x70)) * (*(float *)(gen_frame + 0x70)) + fVar24) * fVar29) +
                 (fVar22 * (*(float *)(gen_frame + 0xd0)) - fVar21 * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xe0)) + 0)))) * (*(float *)(gen_frame + 0x70));
        fVar27 = (((fVar19 + fVar18) + fVar20) * (*(float *)(gen_frame + 0x104)) +
                 ((*(float *)(gen_frame + 0x74)) * (*(float *)(gen_frame + 0x74)) + fVar27) * fVar21) +
                 (fVar29 * (*(float *)(gen_frame + 0xd4)) - fVar22 * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xe0)) + 4)))) * (*(float *)(gen_frame + 0x74));
        fVar22 = (((fVar19 + fVar18) + fVar20) * (*(float *)(gen_frame + 0x108)) +
                 ((*(float *)(gen_frame + 0x78)) * (*(float *)(gen_frame + 0x78)) + fVar28) * fVar22) +
                 (fVar21 * (*(float *)(gen_frame + 0xd8)) - fVar29 * (*(float *)(gen_frame + 0xe8))) * (*(float *)(gen_frame + 0x78));
        fVar23 = (((fVar19 + fVar18) + fVar20) * (*(float *)(gen_frame + 0x10c)) +
                 ((*(float *)(gen_frame + 0x7c)) * (*(float *)(gen_frame + 0x7c)) + fVar32) * fVar23) +
                 (fVar23 * (*(float *)(gen_frame + 0xdc)) - fVar23 * (*(float *)(gen_frame + 0xec))) * (*(float *)(gen_frame + 0x7c));
        fVar18 = ((fVar30 * (*(float *)(gen_frame + 0xd0)) - fVar26 * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xe0)) + 0)))) + fVar25 * (*(float *)(gen_frame + 0x70)))
                 + (*(float *)(gen_frame + 0x100)) * fVar31;
        fVar19 = ((fVar25 * (*(float *)(gen_frame + 0xd4)) - fVar30 * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0xe0)) + 4)))) + fVar26 * (*(float *)(gen_frame + 0x74))
                 ) + (*(float *)(gen_frame + 0x104)) * fVar31;
        fVar20 = ((fVar26 * (*(float *)(gen_frame + 0xd8)) - fVar25 * (*(float *)(gen_frame + 0xe8))) + fVar30 * (*(float *)(gen_frame + 0x78))) +
                 (*(float *)(gen_frame + 0x108)) * fVar31;
        fVar29 = (fVar24 + fVar24) + (*(float *)(gen_frame + 0xf0));
        fVar21 = (fVar27 + fVar27) + (*(float *)(gen_frame + 0xf4));
        fVar22 = (fVar22 + fVar22) + (*(float *)(gen_frame + 0xf8));
        (*(float *)(gen_frame + 0x130)) = fVar29;
        (*(float *)(gen_frame + 0x134)) = fVar21;
        (*(float *)(gen_frame + 0x138)) = fVar22;
        (*(float *)(gen_frame + 0x13c)) = (fVar23 + fVar23) + (*(float *)(gen_frame + 0xfc));
        fVar23 = fVar31 * (*(float *)(gen_frame + 0x7c)) -
                 ((fVar26 * (*(float *)(gen_frame + 0x104)) + fVar25 * (*(float *)(gen_frame + 0x100))) + fVar30 * (*(float *)(gen_frame + 0x108)));
        (*(float *)(gen_frame + 0x140)) = fVar18;
        (*(float *)(gen_frame + 0x144)) = fVar19;
        (*(float *)(gen_frame + 0x148)) = fVar20;
        (*(float *)(gen_frame + 0x14c)) = fVar23;
        (*(float *)(gen_frame + 0x160)) = fVar29;
        (*(float *)(gen_frame + 0x164)) = fVar21;
        (*(float *)(gen_frame + 0x170)) = fVar18;
        (*(float *)(gen_frame + 0x174)) = fVar19;
        (*(float *)(gen_frame + 0x178)) = fVar20;
        (*(float *)(gen_frame + 0x168)) = fVar22;
        (*(float *)(gen_frame + 0x17c)) = fVar23;
        *((float *)GEN_TOP((*(int *)((int)pvVar5 + 0x74) + 0x290))) = ((*(float *)(gen_frame + 0x1c0)) * (*(float *)(gen_frame + 0x2d0))) * (*(float *)(gen_frame + 0x110));
        (*(undefined4 *)(gen_frame + 0x180)) = *(undefined4 *)((int)pvVar5 + 0x30);
        (*(undefined4 *)(gen_frame + 0x184)) = *(undefined4 *)((int)pvVar5 + 0x34);
        (*(undefined4 *)(gen_frame + 0x188)) = *(undefined4 *)((int)pvVar5 + 0x38);
        F_00623060(pvVar5 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x160)));
        this = *(undefined * PTR32 *)((int)pvVar5 + 0x74);
        if (this != (undefined *)0x0) {
          uVar6 = *(undefined4 *)((int)pvVar5 + 0x24);
          uVar1 = *(undefined4 *)((int)pvVar5 + 0x10);
          uVar2 = *(undefined4 *)((int)pvVar5 + 0x14);
          uVar3 = *(undefined4 *)((int)pvVar5 + 0x18);
          (*(undefined4 *)(gen_frame + 0x284)) = uVar6;
          uVar7 = *(undefined4 *)((int)pvVar5 + 0x28);
          (*(undefined4 *)(gen_frame + 0x288)) = uVar7;
          uVar8 = *(undefined4 *)((int)pvVar5 + 0x2c);
          *(undefined4 *)(this + 0x40) = *(undefined4 *)((int)pvVar5 + 0x20);
          *(undefined4 *)(this + 0x44) = uVar6;
          *(undefined4 *)(this + 0x48) = uVar7;
          *(undefined4 *)(this + 0x30) = uVar1;
          *(undefined4 *)(this + 0x34) = uVar2;
          *(undefined4 *)(this + 0x38) = uVar3;
          *(undefined4 *)(this + 0x4c) = uVar8;
          *(undefined4 *)(this + 0x50) = *(undefined4 *)(this + 0x50);
          *(undefined4 *)(this + 0x54) = *(undefined4 *)(this + 0x54);
          *(undefined4 *)(this + 0x58) = *(undefined4 *)(this + 0x58);
          *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 2;
        }
        pfVar17 = pfVar17 + 0x10;
        pvVar4 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1dc)) - 1);
        (*(undefined * PTR32 *)(gen_frame + 0x1dc)) = pvVar4;
      } while (pvVar4 != (undefined *)0x0);
    }
    break;
  case 4: ;
    pvVar5 = *(undefined * PTR32 *)(this + 0x40);
    (*(int * PTR32 *)(gen_frame + 0x1d8)) = *(int * PTR32 *)(this + 0x44);
    if (*(undefined * PTR32 *)(this + 0x48) != (undefined *)0x0) {
      pfVar17 = ((float *)GEN_TOP((*(int *)(this + 0x4c) + 0x28)));
      (*(undefined * PTR32 *)(gen_frame + 0x1dc)) = *(undefined * PTR32 *)(this + 0x48);
      do {
        fVar18 = gen_bits2f((*(int * PTR32 *)(gen_frame + 0x1d8))[0xd]);
        (*(float *)(gen_frame + 0xa0)) = pfVar17[-6];
        (*(float *)(gen_frame + 0xa4)) = pfVar17[-5];
        (*(float *)(gen_frame + 0xa8)) = pfVar17[-4];
        (*(float *)(gen_frame + 0xac)) = 0.0;
        fVar19 = gen_bits2f((*(int * PTR32 *)(gen_frame + 0x1d8))[0xe]);
        (*(float *)(gen_frame + 0x1b0)) = gen_bits2f((*(int * PTR32 *)(gen_frame + 0x1d8))[8]);
        (*(float *)(gen_frame + 0xb0)) = pfVar17[-2];
        (*(float *)(gen_frame + 0xb4)) = pfVar17[-1];
        (*(float *)(gen_frame + 0xb8)) = *pfVar17;
        (*(float *)(gen_frame + 0xbc)) = pfVar17[1];
        (*(float *)(gen_frame + 0x1b4)) = gen_bits2f((*(int * PTR32 *)(gen_frame + 0x1d8))[9]);
        (*(float *)(gen_frame + 0x1b8)) = gen_bits2f((*(int * PTR32 *)(gen_frame + 0x1d8))[10]);
        (*(float *)(gen_frame + 0x1bc)) = gen_bits2f((*(int * PTR32 *)(gen_frame + 0x1d8))[0xb]);
        (*(float *)(gen_frame + 0xc0)) = pfVar17[2];
        (*(float *)(gen_frame + 0xc4)) = pfVar17[3];
        (*(float *)(gen_frame + 0xc8)) = pfVar17[4];
        (*(float *)(gen_frame + 0xcc)) = 0.0;
        (*(float *)(gen_frame + 0x2b0)) = gen_bits2f((*(int * PTR32 *)(gen_frame + 0x1d8))[4]);
        (*(float *)(gen_frame + 0x2b4)) = gen_bits2f((*(int * PTR32 *)(gen_frame + 0x1d8))[5]);
        (*(float *)(gen_frame + 0x2b8)) = gen_bits2f((*(int * PTR32 *)(gen_frame + 0x1d8))[6]);
        (*(float *)(gen_frame + 0x2bc)) = 0.0;
        (*(float *)(gen_frame + 0x2c0)) = gen_bits2f((*(int * PTR32 *)(gen_frame + 0x1d8))[8]);
        (*(float *)(gen_frame + 0x2c4)) = gen_bits2f((*(int * PTR32 *)(gen_frame + 0x1d8))[9]);
        (*(float *)(gen_frame + 0x2c8)) = gen_bits2f((*(int * PTR32 *)(gen_frame + 0x1d8))[10]);
        (*(float *)(gen_frame + 0x2cc)) = gen_bits2f((*(int * PTR32 *)(gen_frame + 0x1d8))[0xb]);
        fVar20 = gen_bits2f((*(int * PTR32 *)(gen_frame + 0x1d8))[0xc]);
        (*(ushort *)(gen_frame + 0x1d6)) = *(ushort *)((int)pfVar17 - 0x26) & 0xfff;
        ((byte *)(gen_frame + 0x1d4))[0] = (byte)(*(ushort *)((int)pfVar17 - 0x26) >> 0xc);
        (*(float *)(gen_frame + 0x2d0)) = fVar20;
        (*(float *)(gen_frame + 0x2d4)) = fVar18;
        (*(float *)(gen_frame + 0x2d8)) = fVar19;
        (*(float *)(gen_frame + 0x2dc)) = 0.0;
        pfVar14 = (float *)F_0062b8c0((*(int * PTR32 *)(gen_frame + 0x1d8)) GEN_EDX_ARG,((byte *)(gen_frame + 0x1d4)));
        (*(float *)(gen_frame + 0xf0)) = *pfVar14;
        (*(float *)(gen_frame + 0xf4)) = pfVar14[1];
        (*(float *)(gen_frame + 0xf8)) = pfVar14[2];
        (*(float *)(gen_frame + 0xfc)) = pfVar14[3];
        fVar18 = pfVar14[4];
        fVar19 = pfVar14[5];
        fVar20 = pfVar14[6];
        fVar29 = pfVar14[7];
        (*(float *)(gen_frame + 0x110)) = pfVar14[8];
        (*(float *)(gen_frame + 0x114)) = pfVar14[9];
        (*(float *)(gen_frame + 0x118)) = pfVar14[10];
        (*(float *)(gen_frame + 0x11c)) = pfVar14[0xb];
        fVar21 = fVar18 * (*(float *)(gen_frame + 0xa0));
        fVar22 = fVar19 * (*(float *)(gen_frame + 0xa4));
        fVar23 = fVar20 * (*(float *)(gen_frame + 0xa8));
        (*(float *)(gen_frame + 0x120)) = fVar20;
        (*(float *)(gen_frame + 0x124)) = fVar18;
        (*(float *)(gen_frame + 0x128)) = fVar19;
        (*(float *)(gen_frame + 0x12c)) = fVar29;
        fVar24 = (((fVar22 + fVar21) + fVar23) * fVar18 +
                 (fVar29 * fVar29 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) *
                 (*(float *)(gen_frame + 0xa0))) + ((*(float *)(gen_frame + 0xa8)) * fVar19 - (*(float *)(gen_frame + 0xa4)) * fVar20) * fVar29;
        fVar25 = (((fVar22 + fVar21) + fVar23) * fVar19 +
                 (fVar29 * fVar29 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) *
                 (*(float *)(gen_frame + 0xa4))) + ((*(float *)(gen_frame + 0xa0)) * fVar20 - (*(float *)(gen_frame + 0xa8)) * fVar18) * fVar29;
        fVar27 = (((fVar22 + fVar21) + fVar23) * fVar20 +
                 (fVar29 * fVar29 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) *
                 (*(float *)(gen_frame + 0xa8))) + ((*(float *)(gen_frame + 0xa4)) * fVar18 - (*(float *)(gen_frame + 0xa0)) * fVar19) * fVar29;
        fVar21 = (((fVar22 + fVar21) + fVar23) * fVar29 +
                 (fVar29 * fVar29 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) *
                 (*(float *)(gen_frame + 0xac))) + ((*(float *)(gen_frame + 0xac)) * fVar29 - (*(float *)(gen_frame + 0xac)) * fVar29) * fVar29;
        fVar22 = (fVar24 + fVar24) + *pfVar14;
        fVar23 = (fVar25 + fVar25) + pfVar14[1];
        fVar24 = (fVar27 + fVar27) + pfVar14[2];
        fVar25 = (fVar21 + fVar21) + pfVar14[3];
        (*(float *)(gen_frame + 0xf0)) = fVar22;
        (*(float *)(gen_frame + 0xf4)) = fVar23;
        (*(float *)(gen_frame + 0xf8)) = fVar24;
        (*(float *)(gen_frame + 0xfc)) = fVar25;
        fVar27 = (((*(float *)(gen_frame + 0xb8)) * fVar19 - (*(float *)(gen_frame + 0xb4)) * fVar20) + (*(float *)(gen_frame + 0xb0)) * fVar29) +
                 fVar18 * (*(float *)(gen_frame + 0xbc));
        fVar26 = (((*(float *)(gen_frame + 0xb0)) * fVar20 - (*(float *)(gen_frame + 0xb8)) * fVar18) + (*(float *)(gen_frame + 0xb4)) * fVar29) +
                 fVar19 * (*(float *)(gen_frame + 0xbc));
        fVar28 = (((*(float *)(gen_frame + 0xb4)) * fVar18 - (*(float *)(gen_frame + 0xb0)) * fVar19) + (*(float *)(gen_frame + 0xb8)) * fVar29) +
                 fVar20 * (*(float *)(gen_frame + 0xbc));
        fVar21 = pfVar14[8] * (*(float *)(gen_frame + 0xc0));
        fVar32 = (*(float *)(gen_frame + 0xbc)) * fVar29 -
                 ((fVar19 * (*(float *)(gen_frame + 0xb4)) + fVar18 * (*(float *)(gen_frame + 0xb0))) + fVar20 * (*(float *)(gen_frame + 0xb8)));
        fVar22 = (*(float *)(gen_frame + 0x2d0)) * fVar22;
        fVar23 = (*(float *)(gen_frame + 0x2d4)) * fVar23;
        fVar24 = (*(float *)(gen_frame + 0x2d8)) * fVar24;
        fVar25 = (*(float *)(gen_frame + 0x2dc)) * fVar25;
        (*(undefined4 *)((char *)&auVar10 + 4)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x2c4)));
        (*(undefined4 *)((char *)&auVar10 + 0)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x2c0)));
        (*(undefined4 *)((char *)&auVar10 + 8)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x2c8)));
        (*(float *)(gen_frame + 0x110)) = fVar21;
        (*(float *)(gen_frame + 0x114)) = pfVar14[9] * (*(float *)(gen_frame + 0xc4));
        (*(float *)(gen_frame + 0x118)) = pfVar14[10] * (*(float *)(gen_frame + 0xc8));
        (*(float *)(gen_frame + 0x11c)) = pfVar14[0xb] * (*(float *)(gen_frame + 0xcc));
        (*(undefined4 *)((char *)&auVar9 + 8)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x2c0)));
        (*(undefined8 *)((char *)&auVar9 + 0)) = (*(undefined8 *)((char *)&auVar10 + 4));
        (*(undefined4 *)((char *)&auVar9 + 12)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x2cc)));
        memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0xe0))), &(auVar9), sizeof(auVar9) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0xe0))) ? sizeof(auVar9) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0xe0))));
        (*(float *)(gen_frame + 0xd0)) = (*(float *)(gen_frame + 0x2c8));
        (*(float *)(gen_frame + 0xd4)) = (*(float *)(gen_frame + 0x2c0));
        (*(float *)(gen_frame + 0xd8)) = (*(float *)(gen_frame + 0x2c4));
        (*(float *)(gen_frame + 0xdc)) = (*(float *)(gen_frame + 0x2cc));
        fVar18 = (*(float *)(gen_frame + 0x2c0)) * fVar22;
        fVar19 = (*(float *)(gen_frame + 0x2c4)) * fVar23;
        fVar20 = (*(float *)(gen_frame + 0x2c8)) * fVar24;
        fVar29 = (((fVar19 + fVar18) + fVar20) * (*(float *)(gen_frame + 0x2c0)) +
                 ((*(float *)(gen_frame + 0x2cc)) * (*(float *)(gen_frame + 0x2cc)) +
                 gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) * fVar22) +
                 (fVar24 * (*(float *)(gen_frame + 0x2c4)) - fVar23 * (*(float *)(gen_frame + 0x2c8))) * (*(float *)(gen_frame + 0x2cc));
        fVar30 = (((fVar19 + fVar18) + fVar20) * (*(float *)(gen_frame + 0x2c4)) +
                 ((*(float *)(gen_frame + 0x2cc)) * (*(float *)(gen_frame + 0x2cc)) +
                 gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) * fVar23) +
                 (fVar22 * (*(float *)(gen_frame + 0x2c8)) - fVar24 * (*(float *)(gen_frame + 0x2c0))) * (*(float *)(gen_frame + 0x2cc));
        fVar23 = (((fVar19 + fVar18) + fVar20) * (*(float *)(gen_frame + 0x2c8)) +
                 ((*(float *)(gen_frame + 0x2cc)) * (*(float *)(gen_frame + 0x2cc)) +
                 gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) * fVar24) +
                 (fVar23 * (*(float *)(gen_frame + 0x2c0)) - fVar22 * (*(float *)(gen_frame + 0x2c4))) * (*(float *)(gen_frame + 0x2cc));
        fVar18 = (((fVar19 + fVar18) + fVar20) * (*(float *)(gen_frame + 0x2cc)) +
                 ((*(float *)(gen_frame + 0x2cc)) * (*(float *)(gen_frame + 0x2cc)) +
                 gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) * fVar25) +
                 (fVar25 * (*(float *)(gen_frame + 0x2cc)) - fVar25 * (*(float *)(gen_frame + 0x2cc))) * (*(float *)(gen_frame + 0x2cc));
        fVar29 = (fVar29 + fVar29) + (*(float *)(gen_frame + 0x2b0));
        fVar22 = (fVar30 + fVar30) + (*(float *)(gen_frame + 0x2b4));
        fVar23 = (fVar23 + fVar23) + (*(float *)(gen_frame + 0x2b8));
        (*(float *)(gen_frame + 0x130)) = fVar29;
        (*(float *)(gen_frame + 0x134)) = fVar22;
        (*(float *)(gen_frame + 0x138)) = fVar23;
        (*(float *)(gen_frame + 0x13c)) = (fVar18 + fVar18) + (*(float *)(gen_frame + 0x2bc));
        fVar18 = ((fVar28 * (*(float *)(gen_frame + 0x2c4)) - fVar26 * (*(float *)(gen_frame + 0x2c8))) + fVar27 * (*(float *)(gen_frame + 0x2cc))) +
                 (*(float *)(gen_frame + 0x2c0)) * fVar32;
        fVar19 = ((fVar27 * (*(float *)(gen_frame + 0x2c8)) - fVar28 * (*(float *)(gen_frame + 0x2c0))) + fVar26 * (*(float *)(gen_frame + 0x2cc))) +
                 (*(float *)(gen_frame + 0x2c4)) * fVar32;
        fVar20 = ((fVar26 * (*(float *)(gen_frame + 0x2c0)) - fVar27 * (*(float *)(gen_frame + 0x2c4))) + fVar28 * (*(float *)(gen_frame + 0x2cc))) +
                 (*(float *)(gen_frame + 0x2c8)) * fVar32;
        fVar24 = fVar32 * (*(float *)(gen_frame + 0x2cc)) -
                 ((fVar26 * (*(float *)(gen_frame + 0x2c4)) + fVar27 * (*(float *)(gen_frame + 0x2c0))) + fVar28 * (*(float *)(gen_frame + 0x2c8)));
        (*(float *)(gen_frame + 0x140)) = fVar18;
        (*(float *)(gen_frame + 0x144)) = fVar19;
        (*(float *)(gen_frame + 0x148)) = fVar20;
        (*(float *)(gen_frame + 0x14c)) = fVar24;
        (*(float *)(gen_frame + 0x160)) = fVar29;
        (*(float *)(gen_frame + 0x170)) = fVar18;
        (*(float *)(gen_frame + 0x164)) = fVar22;
        (*(float *)(gen_frame + 0x174)) = fVar19;
        (*(float *)(gen_frame + 0x178)) = fVar20;
        (*(float *)(gen_frame + 0x168)) = fVar23;
        (*(float *)(gen_frame + 0x17c)) = fVar24;
        *((float *)GEN_TOP((*(int *)((int)pvVar5 + 0x74) + 0x290))) = fVar21 * (*(float *)(gen_frame + 0x2d0));
        (*(undefined4 *)(gen_frame + 0x180)) = *(undefined4 *)((int)pvVar5 + 0x30);
        (*(undefined4 *)(gen_frame + 0x184)) = *(undefined4 *)((int)pvVar5 + 0x34);
        (*(undefined4 *)(gen_frame + 0x188)) = *(undefined4 *)((int)pvVar5 + 0x38);
        F_00623060(pvVar5 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x160)));
        this = *(undefined * PTR32 *)((int)pvVar5 + 0x74);
        if (this != (undefined *)0x0) {
          uVar6 = *(undefined4 *)((int)pvVar5 + 0x24);
          uVar1 = *(undefined4 *)((int)pvVar5 + 0x10);
          uVar2 = *(undefined4 *)((int)pvVar5 + 0x14);
          uVar3 = *(undefined4 *)((int)pvVar5 + 0x18);
          (*(undefined4 *)(gen_frame + 0x284)) = uVar6;
          uVar7 = *(undefined4 *)((int)pvVar5 + 0x28);
          (*(undefined4 *)(gen_frame + 0x288)) = uVar7;
          uVar8 = *(undefined4 *)((int)pvVar5 + 0x2c);
          *(undefined4 *)(this + 0x40) = *(undefined4 *)((int)pvVar5 + 0x20);
          *(undefined4 *)(this + 0x44) = uVar6;
          *(undefined4 *)(this + 0x48) = uVar7;
          *(undefined4 *)(this + 0x30) = uVar1;
          *(undefined4 *)(this + 0x34) = uVar2;
          *(undefined4 *)(this + 0x38) = uVar3;
          *(undefined4 *)(this + 0x4c) = uVar8;
          *(undefined4 *)(this + 0x50) = *(undefined4 *)(this + 0x50);
          *(undefined4 *)(this + 0x54) = *(undefined4 *)(this + 0x54);
          *(undefined4 *)(this + 0x58) = *(undefined4 *)(this + 0x58);
          *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 2;
        }
        pfVar17 = pfVar17 + 0x10;
        pvVar4 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1dc)) - 1);
        (*(undefined * PTR32 *)(gen_frame + 0x1dc)) = pvVar4;
      } while (pvVar4 != (undefined *)0x0);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x2ec)) ^ (uint)(uint)(gen_frame + 0x2f0) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_0069b460 */
GEN_FRAME byte GEN_THISCALL F_0069b460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x69b460u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined2 * puVar1;
  uint uVar2;
  undefined * this_00;
  undefined2 uVar3;
  
  F_006b2f70(this GEN_EDX_FWD);
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if ((param_2 != (undefined *)0x0) && (*(int *)((int)this + 0x3c) != 0)) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x90))(param_1 GEN_EDX_ARG);
    if ((char)uVar2 == '\0') {
      *(undefined4 *)((int)this + 0x38) = 1;
      *(int * PTR32 *)((int)this + 0x40) = param_1;
      uVar3 = 0xffff;
    }
    else {
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xc0))(param_1 GEN_EDX_ARG)));
      *(undefined4 *)((int)this + 0x38) = 3;
      *(undefined * PTR32 *)((int)this + 0x40) = this_00;
      uVar2 = F_00623160(this_00 GEN_EDX_ARG,"n_root");
      uVar3 = (undefined2)uVar2;
    }
    puVar1 = *(undefined2 * PTR32 *)((int)this + 0x4c);
    *(undefined * PTR32 *)((int)this + 0x44) = param_2;
    *(undefined4 *)((int)this + 0x48) = 1;
    *puVar1 = uVar3;
    puVar1[1] = (undefined2)param_3;
    *(undefined4 *)(puVar1 + 8) = *param_4;
    *(undefined4 *)(puVar1 + 10) = param_4[1];
    *(undefined4 *)(puVar1 + 0xc) = param_4[2];
    *(undefined4 *)(puVar1 + 0x10) = param_4[4];
    *(undefined4 *)(puVar1 + 0x12) = param_4[5];
    *(undefined4 *)(puVar1 + 0x14) = param_4[6];
    *(undefined4 *)(puVar1 + 0x16) = param_4[7];
    *(undefined4 *)(puVar1 + 0x18) = param_4[8];
    *(undefined4 *)(puVar1 + 0x1a) = param_4[9];
    *(undefined4 *)(puVar1 + 0x1c) = param_4[10];
    F_0068bd00(param_2 GEN_EDX_ARG,param_1);
    return 1;
  }
  return 0;
}

/* ref: FUN_0069b540 */
GEN_FRAME byte GEN_THISCALL F_0069b540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x69b540u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined2 * puVar1;
  uint uVar2;
  undefined * this_00;
  undefined2 local_8;
  
  F_006b2f70(this GEN_EDX_FWD);
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (((param_2 != (undefined *)0x0) && ((*(int *)&gen_a3) != 0)) && (*(int *)((int)this + 0x3c) != 0)) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x90))(param_1 GEN_EDX_ARG);
    if ((char)uVar2 == '\0') {
      *(undefined4 *)((int)this + 0x38) = 2;
      *(int * PTR32 *)((int)this + 0x40) = param_1;
      local_8 = 0xffff;
    }
    else {
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xc0))(param_1 GEN_EDX_ARG)));
      *(undefined4 *)((int)this + 0x38) = 4;
      *(undefined * PTR32 *)((int)this + 0x40) = this_00;
      uVar2 = F_00623160(this_00 GEN_EDX_ARG,"n_root");
      local_8 = (undefined2)uVar2;
    }
    puVar1 = *(undefined2 * PTR32 *)((int)this + 0x4c);
    *(undefined * PTR32 *)((int)this + 0x44) = param_2;
    *(undefined4 *)((int)this + 0x48) = 1;
    *puVar1 = local_8;
    uVar2 = F_00623160(param_2 GEN_EDX_ARG,(*(int *)&gen_a3));
    puVar1[1] = (short)uVar2;
    if ((short)uVar2 != -1) {
      F_006001e0(puVar1 + 8 GEN_EDX_ARG,param_4);
      if (*(undefined * PTR32 *)((int)param_2 + 0x74) != (undefined *)0x0) {
        F_0068bd00(*(undefined * PTR32 *)((int)param_2 + 0x74) GEN_EDX_ARG,param_1);
      }
      return 1;
    }
    F_006b2f70(this GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_0069b650 */
GEN_FRAME byte GEN_THISCALL F_0069b650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x69b650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  iVar2 = param_3;
  F_006b2f70(this GEN_EDX_FWD);
  if ((param_1 == (undefined *)0x0) || (param_2 == (undefined *)0x0)) {
    return 0;
  }
  if ((param_3 != 0) && ((*(uint *)&gen_a4) <= *(uint *)((int)this + 0x3c))) {
    *(undefined4 *)((int)this + 0x38) = 3;
    *(undefined * PTR32 *)((int)this + 0x40) = param_1;
    *(undefined * PTR32 *)((int)this + 0x44) = param_2;
    *(uint *)((int)this + 0x48) = (*(uint *)&gen_a4);
    param_3 = 0;
    if ((*(uint *)&gen_a4) != 0) {
      this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x4c) + 0x10)));
      iVar2 = iVar2 + 0x50;
      do {
        uVar1 = F_00623160(param_1 GEN_EDX_ARG,*(undefined4 *)(iVar2 - 0x50));
        *(short *)((int)this_00 - 0x10) = (short)uVar1;
        if ((short)uVar1 == -1) {
          F_006b2f70(this GEN_EDX_ARG);
          return 0;
        }
        *(undefined2 *)((int)this_00 - 0xe) = *(undefined2 *)(iVar2 - 0x4c);
        F_006001e0(this_00 GEN_EDX_ARG,iVar2);
        param_3 = param_3 + 1;
        iVar2 = iVar2 + 0x80;
        this_00 = (undefined *)((int)this_00 + 0x40);
      } while (param_3 < (*(uint *)&gen_a4));
    }
    F_0068bd00(param_2 GEN_EDX_ARG,*(undefined4 *)((int)param_1 + 0x74));
    return 1;
  }
  return 0;
}

/* ref: FUN_0069b720 */
GEN_FRAME byte GEN_THISCALL F_0069b720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x69b720u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  iVar2 = param_3;
  F_006b2f70(this GEN_EDX_FWD);
  if ((param_1 == (undefined *)0x0) || (param_2 == (undefined *)0x0)) {
    return 0;
  }
  if ((param_3 == 0) || (*(uint *)((int)this + 0x3c) < param_4)) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x38) = 4;
  *(undefined * PTR32 *)((int)this + 0x40) = param_1;
  *(undefined * PTR32 *)((int)this + 0x44) = param_2;
  *(uint *)((int)this + 0x48) = param_4;
  param_3 = 0;
  if (param_4 != 0) {
    this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x4c) + 0x10)));
    iVar2 = iVar2 + 0x50;
    do {
      uVar1 = F_00623160(param_1 GEN_EDX_ARG,*(undefined4 *)(iVar2 - 0x50));
      *(short *)((int)this_00 - 0x10) = (short)uVar1;
      if ((short)uVar1 == -1) {
LAB_0069b7ec: ;
        F_006b2f70(this GEN_EDX_ARG);
        return 0;
      }
      uVar1 = F_00623160(param_2 GEN_EDX_ARG,*(undefined4 *)(iVar2 - 0x4c));
      *(short *)((int)this_00 - 0xe) = (short)uVar1;
      if ((short)uVar1 == -1) goto LAB_0069b7ec;
      F_006001e0(this_00 GEN_EDX_ARG,iVar2);
      param_3 = param_3 + 1;
      iVar2 = iVar2 + 0x80;
      this_00 = (undefined *)((int)this_00 + 0x40);
    } while (param_3 < param_4);
  }
  if (*(undefined * PTR32 *)((int)param_2 + 0x74) != (undefined *)0x0) {
    F_0068bd00(*(undefined * PTR32 *)((int)param_2 + 0x74) GEN_EDX_ARG,*(undefined4 *)((int)param_1 + 0x74));
  }
  return 1;
}

/* ref: FUN_0069b800 */
GEN_FRAME uint GEN_THISCALL F_0069b800(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x69b800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  
  piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0x88)));
  iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar3), 0);
  if (iVar1 == 2) {
    piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0x8c)));
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar3), 0);
    if (iVar1 < 8) {
      uVar4 = F_00503480(*(undefined * PTR32 *)((int)this + 0xc) GEN_EDX_FWD,*(undefined4 *)((int)this + 0x10));
      *(uint *)((int)this + 0x14) = uVar4;
      if (uVar4 == 0xffffffff) {
        *(undefined4 *)((int)this + 0x10) = 0;
        *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) & 0xfffffffd;
        return 0xffffffff;
      }
      bVar2 = F_006b21f0(*(undefined * PTR32 *)((int)this + 0xc) GEN_EDX_ARG,uVar4);
      piVar3 = ((int *)GEN_TOP((*(uint *)((int)this + 0x18) & 0xfffffffd)));
      *(uint *)((int)this + 0x18) =
           (uint)((bool)bVar2 != (*(int *)((int)this + 0x1c) == 1)) * 2 | (uint)piVar3;
    }
  }
  return (uint)piVar3;
}

/* ref: FUN_0069ba90 */
GEN_NOFRAME uint GEN_THISCALL F_0069ba90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x69ba90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float fVar9;
  
  (*(float *)(gen_frame + 0x38)) = *(float *)((int)this + 0x28);
  fVar8 = (float10)*(float *)((int)this + 0x28);
  piVar5 = *(int * PTR32 *)((int)this + 0xc);
  (*(int *)(gen_frame + 0x34)) = *(int *)((int)this + 0x20);
  (*(int * PTR32 *)(gen_frame + 0x30)) = (int *)*(int *)((int)this + 0x14);
  (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF((fVar8 + (float10)*(float *)((int)this + 0x30) *
                             ((float10)*(float *)((int)this + 0x2c) - fVar8))));
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x5c))(piVar5 GEN_EDX_FWD);
  (*(float *)(gen_frame + 0x38)) = gen_bits2f(uVar4 + 4);
  piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x5c))(piVar5 GEN_EDX_ARG)));
  iVar7 = ((*(int *)(gen_frame + 0x34)) + (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x30))) * 4) * 8;
  iVar6 = *piVar5 + iVar7;
  uVar1 = *(undefined4 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x38))) + 0x18 + iVar6 * 4);
  iVar6 = (int)gen_fl2bits((*(float *)(gen_frame + 0x38))) + 0x18 + iVar6 * 4;
  piVar5 = *(int * PTR32 *)((int)this + 0xc);
  uVar2 = *(undefined4 *)(iVar6 + 4);
  (*(uint *)(gen_frame + 0x8)) = *(uint *)(iVar6 + 8);
  (*(int * PTR32 *)(gen_frame + 0x30)) = piVar5;
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x5c))(piVar5 GEN_EDX_ARG);
  (*(int *)(gen_frame + 0x34)) = uVar4 + 4;
  piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x30)) + 0x5c))((*(int * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG)));
  iVar7 = *piVar5 + iVar7;
  (*(float *)(gen_frame + 0x10)) = *(float *)((*(int *)(gen_frame + 0x34)) + 0x24 + iVar7 * 4);
  (*(float *)(gen_frame + 0x14)) = *(float *)((*(int *)(gen_frame + 0x34)) + 0x28 + iVar7 * 4);
  fVar9 = *(float *)((*(int *)(gen_frame + 0x34)) + 0x2c + iVar7 * 4);
  if ((*(uint *)((int)this + 0x18) >> 1 & 1) != 0) {
    (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) ^ REFG(uint, 0x10920d0);
    (*(float *)(gen_frame + 0x10)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x10))) ^ REFG(uint, 0x10920d0));
    (*(float *)(gen_frame + 0x14)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x14))) ^ REFG(uint, 0x10920d0));
  }
  fVar3 = (float)((float10)(*(float *)(gen_frame + 0x10)) * (float10)REFG(double, 0x1088108));
  (*(float *)(gen_frame + 0x38)) = fVar3;
  fVar8 = ((float10)GEN_TOD(fsin((float10)fVar3)));
  (*(int * PTR32 *)(gen_frame + 0x30)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar8)));
  (*(float *)(gen_frame + 0x20)) = (float)fVar8;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  fVar8 = ((float10)GEN_TOD(fcos((float10)fVar3)));
  (*(int * PTR32 *)(gen_frame + 0x30)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar8)));
  (*(float *)(gen_frame + 0x2c)) = (float)fVar8;
  F_0054d030(&(*(float *)(gen_frame + 0x20)) GEN_EDX_ARG,(*(float *)(gen_frame + 0x14)));
  F_0054d0f0(&(*(float *)(gen_frame + 0x20)) GEN_EDX_ARG,fVar9);
  fVar9 = (*(float *)(gen_frame + 0x3c));
  if ((*(double *)&REFG(undefined, 0x10b3220) < (double)(*(float *)(gen_frame + 0x3c))) && ((*(float *)(gen_frame + 0x3c)) < REFG(float, 0x10905c4))) {
    fVar9 = REFG(float, 0x1087f04);
  }
  param_1[4] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x20)));
  *param_1 = uVar1;
  param_1[5] = (*(undefined4 *)(gen_frame + 0x24));
  param_1[1] = uVar2;
  param_1[6] = (*(undefined4 *)(gen_frame + 0x28));
  param_1[2] = (*(uint *)(gen_frame + 0x8));
  param_1[7] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x2c)));
  param_1[8] = (undefined4)gen_fl2bits(fVar9);
  param_1[9] = (undefined4)gen_fl2bits(fVar9);
  param_1[10] = (undefined4)gen_fl2bits(fVar9);
  return (uint)param_1;
}

/* ref: FUN_0069bc80 */
GEN_NOFRAME uint GEN_THISCALL F_0069bc80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x69bc80u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10b322c));
  in_ecx[1] = (*(undefined * PTR32 (*)[2])REFP(0x10b2afc));
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  *(undefined1 *)(in_ecx + 5) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_0069bca0 */
GEN_FRAME uint GEN_THISCALL F_0069bca0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x69bca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)((int)this + 8);
  iVar1 = *(int *)((int)this + 0xc);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      iVar2 = *(int *)(iVar1 + uVar4 * 4);
      if (iVar2 != 0) {
        F_0050c620(iVar2,0,0);
        *(undefined4 *)(iVar1 + uVar4 * 4) = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  uVar3 = 0;
  if (*(int *)((int)this + 0xc) != 0) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xfffffffc;
  return uVar3;
}

/* ref: FUN_0069bd10 */
GEN_FRAME byte GEN_STDCALL F_0069bd10(unsigned int gen_a0)
{
  GEN_ENTER(0x69bd10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 0x88);
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
    if (iVar1 == 2) {
      piVar2 = (int *)(param_1 + 0x8c);
      iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
      return iVar1 < 8;
    }
  }
  return 0;
}

/* ref: FUN_0069bd50 */
GEN_FRAME byte GEN_STDCALL F_0069bd50(unsigned int gen_a0)
{
  GEN_ENTER(0x69bd50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (param_1 == 0) {
    return 1;
  }
  piVar2 = (int *)(param_1 + 0x88);
  iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
  if (iVar1 != 2) {
    return 0;
  }
  piVar2 = (int *)(param_1 + 0x8c);
  iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
  return 7 < iVar1;
}

/* ref: FUN_0069bd90 */
GEN_NOFRAME byte GEN_THISCALL F_0069bd90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x69bd90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 3;
  bVar4 = F_006b4810((undefined *)((int)this + 0x68) GEN_EDX_FWD,*(undefined4 *)(REFG(int, 0x1370b90) + 0x24));
  if (bVar4 == 0) {
    return 0;
  }
  puVar1 = (uint *)((int)this + 0x78);
  uVar3 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  if (*(uint *)((int)this + 0x74) <= uVar3) {
    *(undefined4 *)((int)this + 0xe0) = 0;
    return 0;
  }
  iVar2 = *(int *)((int)this + 0x70) + uVar3 * 0x14;
  *(int *)((int)this + 0xe0) = iVar2;
  return iVar2 != 0;
}

/* ref: Client::Graphics::Scene::World::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_0069bdf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x69bdf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_006b4970(this + 0x68 GEN_EDX_FWD);
  uVar1 = F_006905b0((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0069be10 */
GEN_FRAME byte GEN_THISCALL F_0069be10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0x69be10u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  uint uVar1;
  
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 3;
  uVar1 = F_00638150();
  *(uint *)(param_1 + 0xc0) = uVar1;
  if (uVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x30) = *param_2;
  *(undefined4 *)(param_1 + 0x34) = param_2[1];
  *(undefined4 *)(param_1 + 0x38) = param_2[2];
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 2;
  *(undefined4 *)(param_1 + 0x60) = *param_3;
  *(undefined4 *)(param_1 + 100) = param_3[1];
  *(undefined4 *)(param_1 + 0x68) = param_3[2];
  *(undefined4 *)(param_1 + 0x70) = *param_4;
  *(undefined4 *)(param_1 + 0x74) = param_4[1];
  *(undefined4 *)(param_1 + 0x78) = param_4[2];
  *((float *)GEN_TOP((*(int *)(param_1 + 0xc0) + 0xac))) = param_5;
  *((float *)GEN_TOP((*(int *)(param_1 + 0xc0) + 0xb0))) = param_6;
  *((float *)GEN_TOP((*(int *)(param_1 + 0xc0) + 0xa4))) = param_7;
  if ((*(uint *)(param_1 + 200) >> 1 & 1) == 0) {
    *((float *)GEN_TOP((*(int *)(param_1 + 0xc0) + 0xa8))) = param_8;
  }
  return 1;
}

/* ref: Client::Graphics::Scene::Camera::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_0069c2c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x69c2c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00690f90(this GEN_EDX_FWD);
  if ((*(uint *)(this + 200) >> 1 & 1) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 0xc0) + 0xa8))) = *(undefined4 *)(REFG(int, 0x1370b90) + 0x98);
  }
  uVar1 = F_00621fc0(*(undefined * PTR32 *)(this + 0xc0) GEN_EDX_ARG,this + 0x80);
  return uVar1;
}

/* ref: FUN_0069c300 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0069c300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x69c300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  int * piVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  float10 fVar6;
  
  if (*(int *)((int)this + param_1 * 4 + 0x34) == 0) {
    return;
  }
  iVar4 = *((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x30) * 4 + 0x34)));
  (*(char *)(gen_frame + 0x1f)) = 0;
  bVar5 = iVar4 != 0;
  if (bVar5) {
    (*(float *)(gen_frame + 0x0)) = *(float *)(iVar4 + 0x60);
    (*(float *)(gen_frame + 0x4)) = *(float *)(iVar4 + 100);
    (*(char *)(gen_frame + 0x1f)) = 1;
    (*(float *)(gen_frame + 0x8)) = *(float *)(iVar4 + 0x68);
  }
  *(int *)((int)this + 0x30) = param_1;
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + param_1 * 4 + 0x34) + 0xc0)));
  (*(int *)(gen_frame + 0x18)) = REFG(int, 0x137127c) + 0x66dc;
  (*(char *)(gen_frame + 0x1f)) = bVar5;
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_FWD);
  }
  piVar2 = *(int * PTR32 *)((*(int *)(gen_frame + 0x18)) + 0x18);
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
  }
  *(int * PTR32 *)((*(int *)(gen_frame + 0x18)) + 0x18) = piVar1;
  *(uint *)(REFG(int, 0x137127c) + 0x6458) = *(uint *)(REFG(int, 0x137127c) + 0x6458) | 1;
  if ((*(char *)(gen_frame + 0x1f)) == '\0') {
    return;
  }
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 2: ;
    F_006911a0(*(undefined * PTR32 *)((int)this + 0x58) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)));
    uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    iVar4 = *(int *)((int)this + 0x58);
    *(undefined4 *)(iVar4 + 0x70) = 0;
    *(undefined4 *)(iVar4 + 0x74) = uVar3;
    *(undefined4 *)(iVar4 + 0x78) = 0;
    return;
  case 3: ;
    F_006911a0(*(undefined * PTR32 *)((int)this + 0x5c) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)));
    fVar6 = (float10)(*(float *)(gen_frame + 0x0)) + (float10)*(double *)&REFG(undefined, 0x10947f0);
    iVar4 = *(int *)((int)this + 0x5c);
    break;
  case 4: ;
    F_006911a0(*(undefined * PTR32 *)((int)this + 0x60) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)));
    fVar6 = (float10)(*(float *)(gen_frame + 0x0)) - (float10)*(double *)&REFG(undefined, 0x10947f0);
    iVar4 = *(int *)((int)this + 0x60);
    break;
  case 5: ;
    F_006911a0(*(undefined * PTR32 *)((int)this + 100) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)));
    fVar6 = (float10)(*(float *)(gen_frame + 0x4)) + (float10)*(double *)&REFG(undefined, 0x10947f0);
    iVar4 = *(int *)((int)this + 100);
    goto LAB_0069c473;
  case 6: ;
    F_006911a0(*(undefined * PTR32 *)((int)this + 0x68) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)));
    fVar6 = (float10)(*(float *)(gen_frame + 0x4)) - (float10)*(double *)&REFG(undefined, 0x10947f0);
    iVar4 = *(int *)((int)this + 0x68);
LAB_0069c473: ;
    *(float *)(iVar4 + 0x30) = (*(float *)(gen_frame + 0x0));
    *(float *)(iVar4 + 0x34) = (float)fVar6;
    goto LAB_0069c428;
  case 7: ;
    F_006911a0(*(undefined * PTR32 *)((int)this + 0x6c) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)));
    fVar6 = (float10)(*(float *)(gen_frame + 0x8)) + (float10)*(double *)&REFG(undefined, 0x10947f0);
    iVar4 = *(int *)((int)this + 0x6c);
    goto LAB_0069c4d4;
  case 8: ;
    F_006911a0(*(undefined * PTR32 *)((int)this + 0x70) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)));
    fVar6 = (float10)(*(float *)(gen_frame + 0x8)) - (float10)*(double *)&REFG(undefined, 0x10947f0);
    iVar4 = *(int *)((int)this + 0x70);
LAB_0069c4d4: ;
    *(float *)(iVar4 + 0x30) = (*(float *)(gen_frame + 0x0));
    *(float *)(iVar4 + 0x38) = (float)fVar6;
    *(float *)(iVar4 + 0x34) = (*(float *)(gen_frame + 0x4));
    *(uint *)(iVar4 + 0x24) = *(uint *)(iVar4 + 0x24) | 2;
switchD_0069c3c2_default: ;
    return;
  default: ;
    goto switchD_0069c3c2_default;
  }
  *(float *)(iVar4 + 0x30) = (float)fVar6;
  *(float *)(iVar4 + 0x34) = (*(float *)(gen_frame + 0x4));
LAB_0069c428: ;
  *(float *)(iVar4 + 0x38) = (*(float *)(gen_frame + 0x8));
  *(uint *)(iVar4 + 0x24) = *(uint *)(iVar4 + 0x24) | 2;
  return;
}

/* ref: FUN_0069c618 */
GEN_NOFRAME byte F_0069c618(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x69c618u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_ebx = (undefined4)gen_a0;
  int in_esi = (int)gen_a1;
  int in_ebp = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  byte bVar8;
  undefined4 * puVar9;
  
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10a509c)));
  fVar6 = REFG(float, 0x1096cd4);
  *(undefined4 *)(in_ebp - 0x30) = GEN_FLT_TO(*(undefined4 *)(in_ebp - 0x30), REFG(float, 0x1375ac0));
  fVar4 = REFG(float, 0x10946bc);
  fVar3 = REFG(float, 0x108b284);
  *(undefined4 *)(in_ebp - 0x2c) = GEN_FLT_TO(*(undefined4 *)(in_ebp - 0x2c), REFG(float, 0x1375ac4));
  uVar7 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375ac8)));
  fVar5 = REFG(float, 0x1094884);
  *(undefined4 *)(in_ebp - 0x20) = uVar2;
  *(undefined4 *)(in_ebp - 0x28) = uVar7;
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)(in_ebp - 0x1c) = 0;
  *(undefined4 *)(in_ebp - 0x18) = 0;
  *(undefined4 *)(in_ebp - 0x40) = 0;
  *(undefined4 *)(in_ebp - 0x3c) = uVar2;
  *(undefined4 *)(in_ebp - 0x38) = 0;
  bVar8 = F_0069be10(in_esi GEN_EDX_ARG,in_ebp - 0x20,in_ebp - 0x30,in_ebp - 0x40,fVar5,fVar4,fVar3,fVar6);
  if (bVar8 != 0) {
    *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0xc0) + 0xb8))) = 1;
    iVar1 = *(int *)(in_esi + 0xc0);
    if (*(char *)(iVar1 + 0xb8) != '\0') {
      *(float *)(in_ebp - 0x20) =
           ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x30) - (float10)*(float *)(in_esi + 0x60))));
      *(float *)(in_ebp - 0x1c) =
           ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x34) - (float10)*(float *)(in_esi + 100))));
      *(float *)(in_ebp - 0x18) =
           ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x38) - (float10)*(float *)(in_esi + 0x68))));
      *(float *)(in_ebp - 4) =
           ((float)GEN_TOF(((float10)*(float *)(in_ebp - 0x18) * (float10)*(float *)(in_ebp - 0x18) +
                  ((float10)*(float *)(in_ebp - 0x20) * (float10)*(float *)(in_ebp - 0x20) +
                  (float10)*(float *)(in_ebp - 0x1c) * (float10)*(float *)(in_ebp - 0x1c)))));
      *(float *)(in_ebp - 4) = ((float)GEN_TOF(SQRT((float10)*(float *)(in_ebp - 4))));
      *(float *)(in_ebp - 8) = GEN_FLT_TO(*(float *)(in_ebp - 8), REFG(float, 0x1094884));
      puVar9 = (undefined4 *)(in_ebp - 4);
      *(float *)(in_ebp - 4) =
           ((float)GEN_TOF(((float10)*(float *)(in_ebp - 4) + (float10)*(float *)(in_ebp - 4))));
      if (!(REFG(double, 0x1094800) < (double)*(float *)(in_ebp - 4))) {
        puVar9 = (undefined4 *)(in_ebp - 8);
      }
      *(undefined4 *)(iVar1 + 0xb4) = *puVar9;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_0069c6c7 */
GEN_NOFRAME byte F_0069c6c7(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x69c6c7u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_ebx = (undefined4)gen_a0;
  int in_esi = (int)gen_a1;
  int in_ebp = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  byte bVar8;
  undefined4 * puVar9;
  
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10ac048)));
  fVar6 = REFG(float, 0x1096cd4);
  *(undefined4 *)(in_ebp - 0x30) = GEN_FLT_TO(*(undefined4 *)(in_ebp - 0x30), REFG(float, 0x1375ac0));
  fVar4 = REFG(float, 0x10946bc);
  fVar3 = REFG(float, 0x108b284);
  *(undefined4 *)(in_ebp - 0x2c) = GEN_FLT_TO(*(undefined4 *)(in_ebp - 0x2c), REFG(float, 0x1375ac4));
  uVar7 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375ac8)));
  fVar5 = REFG(float, 0x1094884);
  *(undefined4 *)(in_ebp - 0x20) = uVar2;
  *(undefined4 *)(in_ebp - 0x28) = uVar7;
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)(in_ebp - 0x1c) = 0;
  *(undefined4 *)(in_ebp - 0x18) = 0;
  *(undefined4 *)(in_ebp - 0x40) = 0;
  *(undefined4 *)(in_ebp - 0x3c) = uVar2;
  *(undefined4 *)(in_ebp - 0x38) = 0;
  bVar8 = F_0069be10(in_esi GEN_EDX_ARG,in_ebp - 0x20,in_ebp - 0x30,in_ebp - 0x40,fVar5,fVar4,fVar3,fVar6);
  if (bVar8 != 0) {
    *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0xc0) + 0xb8))) = 1;
    iVar1 = *(int *)(in_esi + 0xc0);
    if (*(char *)(iVar1 + 0xb8) != '\0') {
      *(float *)(in_ebp - 0x20) =
           ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x30) - (float10)*(float *)(in_esi + 0x60))));
      *(float *)(in_ebp - 0x1c) =
           ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x34) - (float10)*(float *)(in_esi + 100))));
      *(float *)(in_ebp - 0x18) =
           ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x38) - (float10)*(float *)(in_esi + 0x68))));
      *(float *)(in_ebp - 4) =
           ((float)GEN_TOF(((float10)*(float *)(in_ebp - 0x18) * (float10)*(float *)(in_ebp - 0x18) +
                  ((float10)*(float *)(in_ebp - 0x20) * (float10)*(float *)(in_ebp - 0x20) +
                  (float10)*(float *)(in_ebp - 0x1c) * (float10)*(float *)(in_ebp - 0x1c)))));
      *(float *)(in_ebp - 4) = ((float)GEN_TOF(SQRT((float10)*(float *)(in_ebp - 4))));
      *(float *)(in_ebp - 8) = GEN_FLT_TO(*(float *)(in_ebp - 8), REFG(float, 0x1094884));
      puVar9 = (undefined4 *)(in_ebp - 4);
      *(float *)(in_ebp - 4) =
           ((float)GEN_TOF(((float10)*(float *)(in_ebp - 4) + (float10)*(float *)(in_ebp - 4))));
      if (!(REFG(double, 0x1094800) < (double)*(float *)(in_ebp - 4))) {
        puVar9 = (undefined4 *)(in_ebp - 8);
      }
      *(undefined4 *)(iVar1 + 0xb4) = *puVar9;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_0069c776 */
GEN_NOFRAME byte F_0069c776(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x69c776u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_ebx = (undefined4)gen_a0;
  int in_esi = (int)gen_a1;
  int in_ebp = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined4 * puVar8;
  
  *(undefined4 *)(in_ebp - 0x1c) = GEN_FLT_TO(*(undefined4 *)(in_ebp - 0x1c), REFG(float, 0x10a509c));
  *(undefined4 *)(in_ebp - 0x30) = GEN_FLT_TO(*(undefined4 *)(in_ebp - 0x30), REFG(float, 0x1375ac0));
  *(undefined4 *)(in_ebp - 0x2c) = GEN_FLT_TO(*(undefined4 *)(in_ebp - 0x2c), REFG(float, 0x1375ac4));
  uVar6 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375ac8)));
  *(undefined4 *)(in_ebp - 0x20) = 0;
  *(undefined4 *)(in_ebp - 0x18) = 0;
  *(undefined4 *)(in_ebp - 0x40) = 0;
  *(undefined4 *)(in_ebp - 0x3c) = 0;
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  *(undefined4 *)(in_ebp - 0x28) = uVar6;
  fVar5 = REFG(float, 0x1096cd4);
  fVar4 = REFG(float, 0x10946bc);
  fVar2 = REFG(float, 0x108b284);
  *(undefined4 *)(in_ebp - 0x38) = uVar3;
  bVar7 = F_0069be10(in_esi GEN_EDX_ARG,in_ebp - 0x20,in_ebp - 0x30,in_ebp - 0x40,REFG(float, 0x1094884),fVar4,fVar2,
                       fVar5);
  if (bVar7 != 0) {
    *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0xc0) + 0xb8))) = 1;
    iVar1 = *(int *)(in_esi + 0xc0);
    if (*(char *)(iVar1 + 0xb8) != '\0') {
      *(float *)(in_ebp - 0x20) =
           ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x30) - (float10)*(float *)(in_esi + 0x60))));
      *(float *)(in_ebp - 0x1c) =
           ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x34) - (float10)*(float *)(in_esi + 100))));
      *(float *)(in_ebp - 0x18) =
           ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x38) - (float10)*(float *)(in_esi + 0x68))));
      *(float *)(in_ebp - 4) =
           ((float)GEN_TOF(((float10)*(float *)(in_ebp - 0x18) * (float10)*(float *)(in_ebp - 0x18) +
                  ((float10)*(float *)(in_ebp - 0x20) * (float10)*(float *)(in_ebp - 0x20) +
                  (float10)*(float *)(in_ebp - 0x1c) * (float10)*(float *)(in_ebp - 0x1c)))));
      *(float *)(in_ebp - 4) = ((float)GEN_TOF(SQRT((float10)*(float *)(in_ebp - 4))));
      *(float *)(in_ebp - 8) = GEN_FLT_TO(*(float *)(in_ebp - 8), REFG(float, 0x1094884));
      puVar8 = (undefined4 *)(in_ebp - 4);
      *(float *)(in_ebp - 4) =
           ((float)GEN_TOF(((float10)*(float *)(in_ebp - 4) + (float10)*(float *)(in_ebp - 4))));
      if (!(REFG(double, 0x1094800) < (double)*(float *)(in_ebp - 4))) {
        puVar8 = (undefined4 *)(in_ebp - 8);
      }
      *(undefined4 *)(iVar1 + 0xb4) = *puVar8;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_0069c7ce */
GEN_NOFRAME byte F_0069c7ce(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x69c7ceu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_ebx = (undefined4)gen_a0;
  int in_esi = (int)gen_a1;
  int in_ebp = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  byte bVar8;
  undefined4 * puVar9;
  
  fVar6 = REFG(float, 0x1096cd4);
  *(undefined4 *)(in_ebp - 0x1c) = GEN_FLT_TO(*(undefined4 *)(in_ebp - 0x1c), REFG(float, 0x10ac048));
  fVar4 = REFG(float, 0x10946bc);
  fVar2 = REFG(float, 0x108b284);
  *(undefined4 *)(in_ebp - 0x30) = GEN_FLT_TO(*(undefined4 *)(in_ebp - 0x30), REFG(float, 0x1375ac0));
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375ac4)));
  fVar5 = REFG(float, 0x1094884);
  *(undefined4 *)(in_ebp - 0x20) = 0;
  *(undefined4 *)(in_ebp - 0x18) = 0;
  *(undefined4 *)(in_ebp - 0x2c) = uVar3;
  uVar7 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1375ac8)));
  *(undefined4 *)(in_ebp - 0x40) = 0;
  *(undefined4 *)(in_ebp - 0x3c) = 0;
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  *(undefined4 *)(in_ebp - 0x28) = uVar7;
  *(undefined4 *)(in_ebp - 0x38) = uVar3;
  bVar8 = F_0069be10(in_esi GEN_EDX_ARG,in_ebp - 0x20,in_ebp - 0x30,in_ebp - 0x40,fVar5,fVar4,fVar2,fVar6);
  if (bVar8 == 0) {
    return 0;
  }
  *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0xc0) + 0xb8))) = 1;
  iVar1 = *(int *)(in_esi + 0xc0);
  if (*(char *)(iVar1 + 0xb8) != '\0') {
    *(float *)(in_ebp - 0x20) =
         ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x30) - (float10)*(float *)(in_esi + 0x60))));
    *(float *)(in_ebp - 0x1c) =
         ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x34) - (float10)*(float *)(in_esi + 100))));
    *(float *)(in_ebp - 0x18) =
         ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x38) - (float10)*(float *)(in_esi + 0x68))));
    *(float *)(in_ebp - 4) =
         ((float)GEN_TOF(((float10)*(float *)(in_ebp - 0x18) * (float10)*(float *)(in_ebp - 0x18) +
                ((float10)*(float *)(in_ebp - 0x20) * (float10)*(float *)(in_ebp - 0x20) +
                (float10)*(float *)(in_ebp - 0x1c) * (float10)*(float *)(in_ebp - 0x1c)))));
    *(float *)(in_ebp - 4) = ((float)GEN_TOF(SQRT((float10)*(float *)(in_ebp - 4))));
    *(float *)(in_ebp - 8) = GEN_FLT_TO(*(float *)(in_ebp - 8), REFG(float, 0x1094884));
    puVar9 = (undefined4 *)(in_ebp - 4);
    *(float *)(in_ebp - 4) =
         ((float)GEN_TOF(((float10)*(float *)(in_ebp - 4) + (float10)*(float *)(in_ebp - 4))));
    if (!(REFG(double, 0x1094800) < (double)*(float *)(in_ebp - 4))) {
      puVar9 = (undefined4 *)(in_ebp - 8);
    }
    *(undefined4 *)(iVar1 + 0xb4) = *puVar9;
  }
  return 1;
}

/* ref: FUN_0069c876 */
GEN_NOFRAME byte F_0069c876(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x69c876u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_ebx = (undefined4)gen_a0;
  int in_esi = (int)gen_a1;
  int in_ebp = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  undefined4 * puVar8;
  
  fVar6 = REFG(float, 0x1096cd4);
  *(undefined4 *)(in_ebp - 0x18) = GEN_FLT_TO(*(undefined4 *)(in_ebp - 0x18), REFG(float, 0x10a509c));
  fVar3 = REFG(float, 0x108b284);
  *(undefined4 *)(in_ebp - 0x30) = GEN_FLT_TO(*(undefined4 *)(in_ebp - 0x30), REFG(float, 0x1375ac0));
  fVar5 = REFG(float, 0x1094884);
  fVar4 = REFG(float, 0x10946bc);
  *(undefined4 *)(in_ebp - 0x2c) = GEN_FLT_TO(*(undefined4 *)(in_ebp - 0x2c), REFG(float, 0x1375ac4));
  *(undefined4 *)(in_ebp - 0x28) = GEN_FLT_TO(*(undefined4 *)(in_ebp - 0x28), REFG(float, 0x1375ac8));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)(in_ebp - 0x20) = 0;
  *(undefined4 *)(in_ebp - 0x1c) = 0;
  *(undefined4 *)(in_ebp - 0x40) = 0;
  *(undefined4 *)(in_ebp - 0x3c) = uVar2;
  *(undefined4 *)(in_ebp - 0x38) = 0;
  bVar7 = F_0069be10(in_esi GEN_EDX_ARG,in_ebp - 0x20,in_ebp - 0x30,in_ebp - 0x40,fVar5,fVar4,fVar3,fVar6);
  if (bVar7 == 0) {
    return 0;
  }
  *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0xc0) + 0xb8))) = 1;
  iVar1 = *(int *)(in_esi + 0xc0);
  if (*(char *)(iVar1 + 0xb8) != '\0') {
    *(float *)(in_ebp - 0x20) =
         ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x30) - (float10)*(float *)(in_esi + 0x60))));
    *(float *)(in_ebp - 0x1c) =
         ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x34) - (float10)*(float *)(in_esi + 100))));
    *(float *)(in_ebp - 0x18) =
         ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x38) - (float10)*(float *)(in_esi + 0x68))));
    *(float *)(in_ebp - 4) =
         ((float)GEN_TOF(((float10)*(float *)(in_ebp - 0x18) * (float10)*(float *)(in_ebp - 0x18) +
                ((float10)*(float *)(in_ebp - 0x20) * (float10)*(float *)(in_ebp - 0x20) +
                (float10)*(float *)(in_ebp - 0x1c) * (float10)*(float *)(in_ebp - 0x1c)))));
    *(float *)(in_ebp - 4) = ((float)GEN_TOF(SQRT((float10)*(float *)(in_ebp - 4))));
    *(float *)(in_ebp - 8) = GEN_FLT_TO(*(float *)(in_ebp - 8), REFG(float, 0x1094884));
    puVar8 = (undefined4 *)(in_ebp - 4);
    *(float *)(in_ebp - 4) =
         ((float)GEN_TOF(((float10)*(float *)(in_ebp - 4) + (float10)*(float *)(in_ebp - 4))));
    if (!(REFG(double, 0x1094800) < (double)*(float *)(in_ebp - 4))) {
      puVar8 = (undefined4 *)(in_ebp - 8);
    }
    *(undefined4 *)(iVar1 + 0xb4) = *puVar8;
  }
  return 1;
}

/* ref: FUN_0069c91e */
GEN_NOFRAME byte F_0069c91e(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x69c91eu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_ebx = (undefined4)gen_a0;
  int in_esi = (int)gen_a1;
  int in_ebp = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  undefined4 * puVar7;
  
  *(undefined4 *)(in_ebp - 0x18) = GEN_FLT_TO(*(undefined4 *)(in_ebp - 0x18), REFG(float, 0x10ac048));
  *(undefined4 *)(in_ebp - 0x30) = GEN_FLT_TO(*(undefined4 *)(in_ebp - 0x30), REFG(float, 0x1375ac0));
  *(undefined4 *)(in_ebp - 0x2c) = GEN_FLT_TO(*(undefined4 *)(in_ebp - 0x2c), REFG(float, 0x1375ac4));
  *(undefined4 *)(in_ebp - 0x28) = GEN_FLT_TO(*(undefined4 *)(in_ebp - 0x28), REFG(float, 0x1375ac8));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)(in_ebp - 0x20) = 0;
  *(undefined4 *)(in_ebp - 0x1c) = 0;
  *(undefined4 *)(in_ebp - 0x40) = 0;
  *(undefined4 *)(in_ebp - 0x3c) = uVar2;
  fVar5 = REFG(float, 0x1096cd4);
  fVar4 = REFG(float, 0x10946bc);
  fVar3 = REFG(float, 0x108b284);
  *(undefined4 *)(in_ebp - 0x38) = 0;
  bVar6 = F_0069be10(in_esi GEN_EDX_ARG,in_ebp - 0x20,in_ebp - 0x30,in_ebp - 0x40,REFG(float, 0x1094884),fVar4,fVar3,
                       fVar5);
  if (bVar6 != 0) {
    *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0xc0) + 0xb8))) = 1;
    iVar1 = *(int *)(in_esi + 0xc0);
    if (*(char *)(iVar1 + 0xb8) != '\0') {
      *(float *)(in_ebp - 0x20) =
           ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x30) - (float10)*(float *)(in_esi + 0x60))));
      *(float *)(in_ebp - 0x1c) =
           ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x34) - (float10)*(float *)(in_esi + 100))));
      *(float *)(in_ebp - 0x18) =
           ((float)GEN_TOF(((float10)*(float *)(in_esi + 0x38) - (float10)*(float *)(in_esi + 0x68))));
      *(float *)(in_ebp - 4) =
           ((float)GEN_TOF(((float10)*(float *)(in_ebp - 0x18) * (float10)*(float *)(in_ebp - 0x18) +
                  ((float10)*(float *)(in_ebp - 0x20) * (float10)*(float *)(in_ebp - 0x20) +
                  (float10)*(float *)(in_ebp - 0x1c) * (float10)*(float *)(in_ebp - 0x1c)))));
      *(float *)(in_ebp - 4) = ((float)GEN_TOF(SQRT((float10)*(float *)(in_ebp - 4))));
      *(float *)(in_ebp - 8) = GEN_FLT_TO(*(float *)(in_ebp - 8), REFG(float, 0x1094884));
      puVar7 = (undefined4 *)(in_ebp - 4);
      *(float *)(in_ebp - 4) =
           ((float)GEN_TOF(((float10)*(float *)(in_ebp - 4) + (float10)*(float *)(in_ebp - 4))));
      if (!(REFG(double, 0x1094800) < (double)*(float *)(in_ebp - 4))) {
        puVar7 = (undefined4 *)(in_ebp - 8);
      }
      *(undefined4 *)(iVar1 + 0xb4) = *puVar7;
    }
    return 1;
  }
  return 0;
}

/* ref: Client::Graphics::Scene::CameraMaya::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_0069ca80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x69ca80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094724)));
  uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094884)));
  if (*(int *)(REFG(int, 0x1371298) + 0x34) != 0) {
    iVar1 = *((int *)GEN_TOP((*(int *)(REFG(int, 0x1371298) + 0x34) + 0xc0)));
    uVar4 = *(undefined4 *)(iVar1 + 0xac);
    uVar3 = *(undefined4 *)(iVar1 + 0xb0);
  }
  iVar1 = *(int *)(this + 0xc0);
  *(undefined4 *)(iVar1 + 0xac) = uVar4;
  *(undefined4 *)(iVar1 + 0xb0) = uVar3;
  F_00690f90(this GEN_EDX_FWD);
  if ((*(uint *)(this + 200) >> 1 & 1) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 0xc0) + 0xa8))) = *(undefined4 *)(REFG(int, 0x1370b90) + 0x98);
  }
  uVar2 = F_00621fc0(*(undefined * PTR32 *)(this + 0xc0) GEN_EDX_ARG,this + 0x80);
  return uVar2;
}

/* ref: FUN_0069cb10 */
GEN_FRAME byte GEN_THISCALL F_0069cb10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x69cb10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  ushort uVar1;
  gen_size32 _Size;
  ushort uVar2;
  uint uVar3;
  uint * puVar4;
  uint uVar5;
  uint uVar6;
  
  (*(uint *)(gen_frame + 0x168)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x16c);
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = this;
  if (*(int *)((int)this + 0x78) != 0) {
    F_0068ce50((int *)((int)this + 0x78),(int)this + 0x7c);
  }
  ((ushort *)(gen_frame + 0x140))[0] = 0x2a;
  ((ushort *)(gen_frame + 0x140))[1] = 0x2c;
  ((ushort *)(gen_frame + 0x140))[2] = 0x25;
  ((ushort *)(gen_frame + 0x140))[3] = 0x24;
  ((ushort *)(gen_frame + 0x140))[4] = 0x29;
  ((ushort *)(gen_frame + 0x140))[5] = 0x27;
  ((ushort *)(gen_frame + 0x140))[6] = 0x28;
  (*(uint *)(gen_frame + 0x3c)) = 0;
  (*(gen_code32 *)(gen_frame + 0x152)) = ((code *)REFP(0x540000));
  (*(undefined4 *)(gen_frame + 0x156)) = 0x560055;
  (*(undefined4 *)(gen_frame + 0x15a)) = 0x580057;
  (*(undefined4 *)(gen_frame + 0x15e)) = 0x5a0059;
  (*(undefined1 * PTR32 *)(gen_frame + 0x162)) = REFP(0x005c005b);
  (*(undefined2 *)(gen_frame + 0x166)) = 0x5d;
  (*(ushort *)(gen_frame + 0x150)) = ((ushort *)(gen_frame + 0x140))[(int)(param_1)];
  (*(uint *)(gen_frame + 0x34)) = 0;
  do {
    (*(uint *)(gen_frame + 0x30)) = (*(uint *)(gen_frame + 0x34)) * 100 + 0x65;
    (*(uint * PTR32 *)(gen_frame + 0x38)) = (uint *)0x0;
    do {
      uVar2 = (&(*(ushort *)(gen_frame + 0x150)))[(int)(*(uint * PTR32 *)(gen_frame + 0x38))];
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x5c))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG);
      uVar1 = *((ushort *)GEN_TOP((uVar3 + 6 + ((uint)uVar2 / (uint)*(ushort *)(uVar3 + 2)) * 2)));
      if (uVar1 == 0xffff) {
        uVar2 = 0;
      }
      else {
        uVar2 = *((ushort *)GEN_TOP(((uVar3 - 6) +
                 ((uint)*(ushort *)(uVar3 + 4) +
                 ((uint)uVar2 % (uint)*(ushort *)(uVar3 + 2) + (uint)uVar1) *
                 (uint)*(byte *)(uVar3 + 1) + (*(uint *)(gen_frame + 0x30)) +
                 ((*(uint *)(gen_frame + 0x30)) / 100 + ((*(uint *)(gen_frame + 0x30)) / 10) * -2) * 5) * 2)));
        this = (*(undefined * PTR32 *)(gen_frame + 0x2c));
      }
      if ((*(uint *)(gen_frame + 0x34)) == 0) {
        (*(uint *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x3c)) + 1;
      }
      if ((uVar2 & 2) != 0) {
        (*(uint *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x3c)) + 1;
      }
      if ((uVar2 & 1) != 0) {
        (*(uint *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x3c)) + 1;
      }
      if ((uVar2 & 8) != 0) {
        (*(uint *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x3c)) + 1;
      }
      if ((uVar2 & 4) != 0) {
        (*(uint *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x3c)) + 1;
      }
      if ((uVar2 & 0x20) != 0) {
        (*(uint *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x3c)) + 1;
      }
      if (((uVar2 & 0x10) != 0) && ((&(*(ushort *)(gen_frame + 0x150)))[(int)(*(uint * PTR32 *)(gen_frame + 0x38))] != 0)) {
        (*(uint *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x3c)) + 1;
      }
      if ((char)uVar2 < '\0') {
        (*(uint *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x3c)) + 1;
      }
      if ((uVar2 & 0x40) != 0) {
        (*(uint *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x3c)) + 1;
      }
      if ((uVar2 & 0x200) != 0) {
        (*(uint *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x3c)) + 1;
      }
      if ((uVar2 & 0x100) != 0) {
        (*(uint *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x3c)) + 1;
      }
      uVar3 = (int)(*(uint * PTR32 *)(gen_frame + 0x38)) + 1;
      (*(uint * PTR32 *)(gen_frame + 0x38)) = (uint *)uVar3;
    } while (uVar3 < 0xc);
    uVar3 = (*(uint *)(gen_frame + 0x34)) + 1;
    (*(uint *)(gen_frame + 0x34)) = uVar3;
  } while (uVar3 < 0xc);
  _Size = (*(uint *)(gen_frame + 0x3c)) * 4;
  puVar4 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                             (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,_Size,4)));
  (*(uint * PTR32 *)(gen_frame + 0x38)) = puVar4;
  F_00c48350(puVar4,0,_Size);
  *(uint * PTR32 *)((int)this + 0x78) = puVar4;
  *(uint *)((int)this + 0x7c) = (*(uint *)(gen_frame + 0x3c));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)(gen_frame + 0x18)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x1c)) = 5000;
  (*(undefined4 *)(gen_frame + 0x20)) = 0x10100;
  (*(undefined1 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 6;
  (*(undefined2 *)(gen_frame + 0x25)) = 0;
  (*(uint *)(gen_frame + 0x30)) = 0;
  do {
    uVar3 = (*(uint *)(gen_frame + 0x30)) * 100 + 0x65;
    (*(uint *)(gen_frame + 0x34)) = 0;
    do {
      uVar6 = (uint)(&(*(ushort *)(gen_frame + 0x150)))[(*(uint *)(gen_frame + 0x34))];
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x5c))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG);
      uVar2 = *((ushort *)GEN_TOP((uVar5 + 6 + (uVar6 / *(ushort *)(uVar5 + 2)) * 2)));
      (*(uint *)(gen_frame + 0x3c)) = (uint)uVar2;
      if (uVar2 == 0xffff) {
        (*(uint *)(gen_frame + 0x3c)) = 0;
      }
      else {
        (*(uint *)(gen_frame + 0x3c)) = (uint)*((ushort *)GEN_TOP(((uVar5 - 6) +
                           ((uint)*(ushort *)(uVar5 + 4) +
                           ((uint)uVar2 + uVar6 % (uint)*(ushort *)(uVar5 + 2)) *
                           (uint)*(byte *)(uVar5 + 1) + uVar3 +
                           (uVar3 / 100 + (uVar3 / 10) * -2) * 5) * 2)));
      }
      if ((*(uint *)(gen_frame + 0x30)) == 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x40)),0x100,"chara/equipment/e%04d/e%04d.imc",uVar6,uVar6);
        uVar5 = F_00513dc0(((undefined1 *)(gen_frame + 0x40)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
        if (uVar5 == 0) goto LAB_0069d218;
        *(*(uint * PTR32 *)(gen_frame + 0x38)) = uVar5;
        (*(uint * PTR32 *)(gen_frame + 0x38)) = (*(uint * PTR32 *)(gen_frame + 0x38)) + 1;
      }
      puVar4 = (*(uint * PTR32 *)(gen_frame + 0x38));
      if (((*(uint *)(gen_frame + 0x3c)) & 2) != 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x40)),0x100,"chara/equipment/e%04d/model/c%04de%04d_met.mdl",uVar6,uVar3,
                   uVar6);
        uVar5 = F_00513dc0(((undefined1 *)(gen_frame + 0x40)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
        if (uVar5 == 0) goto LAB_0069d218;
        *puVar4 = uVar5;
        (*(uint * PTR32 *)(gen_frame + 0x38)) = puVar4 + 1;
      }
      puVar4 = (*(uint * PTR32 *)(gen_frame + 0x38));
      if (((*(uint *)(gen_frame + 0x3c)) & 1) != 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x40)),0x100,"chara/equipment/e%04d/material/v0001/mt_c%04de%04d_met_a.mtrl",
                   uVar6,uVar3,uVar6);
        uVar5 = F_00513dc0(((undefined1 *)(gen_frame + 0x40)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
        if (uVar5 == 0) goto LAB_0069d218;
        *puVar4 = uVar5;
        (*(uint * PTR32 *)(gen_frame + 0x38)) = puVar4 + 1;
      }
      puVar4 = (*(uint * PTR32 *)(gen_frame + 0x38));
      if (((*(uint *)(gen_frame + 0x3c)) & 8) != 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x40)),0x100,"chara/equipment/e%04d/model/c%04de%04d_top.mdl",uVar6,uVar3,
                   uVar6);
        uVar5 = F_00513dc0(((undefined1 *)(gen_frame + 0x40)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
        if (uVar5 == 0) goto LAB_0069d218;
        *puVar4 = uVar5;
        (*(uint * PTR32 *)(gen_frame + 0x38)) = puVar4 + 1;
      }
      puVar4 = (*(uint * PTR32 *)(gen_frame + 0x38));
      if (((*(uint *)(gen_frame + 0x3c)) & 4) != 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x40)),0x100,"chara/equipment/e%04d/material/v0001/mt_c%04de%04d_top_a.mtrl",
                   uVar6,uVar3,uVar6);
        uVar5 = F_00513dc0(((undefined1 *)(gen_frame + 0x40)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
        if (uVar5 == 0) goto LAB_0069d218;
        *puVar4 = uVar5;
        (*(uint * PTR32 *)(gen_frame + 0x38)) = puVar4 + 1;
      }
      puVar4 = (*(uint * PTR32 *)(gen_frame + 0x38));
      if (((*(uint *)(gen_frame + 0x3c)) & 0x20) != 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x40)),0x100,"chara/equipment/e%04d/model/c%04de%04d_glv.mdl",uVar6,uVar3,
                   uVar6);
        uVar5 = F_00513dc0(((undefined1 *)(gen_frame + 0x40)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
        if (uVar5 == 0) goto LAB_0069d218;
        *puVar4 = uVar5;
        (*(uint * PTR32 *)(gen_frame + 0x38)) = puVar4 + 1;
      }
      puVar4 = (*(uint * PTR32 *)(gen_frame + 0x38));
      if ((((*(uint *)(gen_frame + 0x3c)) & 0x10) != 0) && ((&(*(ushort *)(gen_frame + 0x150)))[(*(uint *)(gen_frame + 0x34))] != 0)) {
        F_00c472af(((undefined1 *)(gen_frame + 0x40)),0x100,"chara/equipment/e%04d/material/v0001/mt_c%04de%04d_glv_a.mtrl",
                   uVar6,uVar3,uVar6);
        uVar5 = F_00513dc0(((undefined1 *)(gen_frame + 0x40)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
        if (uVar5 == 0) goto LAB_0069d218;
        *puVar4 = uVar5;
        (*(uint * PTR32 *)(gen_frame + 0x38)) = puVar4 + 1;
      }
      puVar4 = (*(uint * PTR32 *)(gen_frame + 0x38));
      if (((*(uint *)(gen_frame + 0x3c)) & 0x80) != 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x40)),0x100,"chara/equipment/e%04d/model/c%04de%04d_dwn.mdl",uVar6,uVar3,
                   uVar6);
        uVar5 = F_00513dc0(((undefined1 *)(gen_frame + 0x40)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
        if (uVar5 == 0) goto LAB_0069d218;
        *puVar4 = uVar5;
        (*(uint * PTR32 *)(gen_frame + 0x38)) = puVar4 + 1;
      }
      puVar4 = (*(uint * PTR32 *)(gen_frame + 0x38));
      if (((*(uint *)(gen_frame + 0x3c)) & 0x40) != 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x40)),0x100,"chara/equipment/e%04d/material/v0001/mt_c%04de%04d_dwn_a.mtrl",
                   uVar6,uVar3,uVar6);
        uVar5 = F_00513dc0(((undefined1 *)(gen_frame + 0x40)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
        if (uVar5 == 0) goto LAB_0069d218;
        *puVar4 = uVar5;
        (*(uint * PTR32 *)(gen_frame + 0x38)) = puVar4 + 1;
      }
      puVar4 = (*(uint * PTR32 *)(gen_frame + 0x38));
      if (((*(uint *)(gen_frame + 0x3c)) & 0x200) != 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x40)),0x100,"chara/equipment/e%04d/model/c%04de%04d_sho.mdl",uVar6,uVar3,
                   uVar6);
        uVar5 = F_00513dc0(((undefined1 *)(gen_frame + 0x40)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
        if (uVar5 == 0) goto LAB_0069d218;
        *puVar4 = uVar5;
        (*(uint * PTR32 *)(gen_frame + 0x38)) = puVar4 + 1;
      }
      puVar4 = (*(uint * PTR32 *)(gen_frame + 0x38));
      if (((*(uint *)(gen_frame + 0x3c)) & 0x100) != 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x40)),0x100,"chara/equipment/e%04d/material/v0001/mt_c%04de%04d_sho_a.mtrl",
                   uVar6,uVar3,uVar6);
        uVar5 = F_00513dc0(((undefined1 *)(gen_frame + 0x40)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
        if (uVar5 == 0) {
LAB_0069d218: ;
          if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x78) != 0) {
            F_0068ce50((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x78,(int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x7c);
          }
          F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c) GEN_EDX_ARG);
          return 0;
        }
        *puVar4 = uVar5;
        (*(uint * PTR32 *)(gen_frame + 0x38)) = puVar4 + 1;
      }
      uVar5 = (*(uint *)(gen_frame + 0x34)) + 1;
      (*(uint *)(gen_frame + 0x34)) = uVar5;
      this = (*(undefined * PTR32 *)(gen_frame + 0x2c));
    } while (uVar5 < 0xc);
    uVar3 = (*(uint *)(gen_frame + 0x30)) + 1;
    (*(uint *)(gen_frame + 0x30)) = uVar3;
    if (0xb < uVar3) {
      F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c) GEN_EDX_ARG);
      return 1;
    }
  } while( true );
}

/* ref: FUN_0069d250 */
GEN_FRAME byte GEN_THISCALL F_0069d250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x69d250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  uint uVar1;
  uint * _Dst;
  uint uVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x138)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x13c);
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = this;
  if (*(int *)((int)this + 0x80) != 0) {
    F_0068ce50((int)this + 0x80,(int)this + 0x84);
  }
  (*(uint *)(gen_frame + 0x34)) = 0;
  switch((unsigned int)(uintptr_t)(param_1 - 1U)) {
  default: ;
    iVar3 = 100;
    break;
  case 1: ;
    iVar3 = 300;
    break;
  case 2: ;
  case 3: ;
    iVar3 = 500;
    break;
  case 4: ;
  case 5: ;
    iVar3 = 0x44c;
    break;
  case 6: ;
  case 7: ;
    iVar3 = 700;
    break;
  case 8: ;
  case 9: ;
    iVar3 = 900;
  }
  iVar3 = iVar3 + 1 + param_2 * 100;
  if ((param_1 == 7) || (param_1 == 8)) {
    (*(uint *)(gen_frame + 0x34)) = 0x10;
  }
  uVar1 = F_00b89a30(param_1,param_2,1);
  (*(uint *)(gen_frame + 0x34)) = uVar1 * 3 + (*(uint *)(gen_frame + 0x34));
  uVar1 = F_00b89a60(param_1,param_2,1);
  (*(uint *)(gen_frame + 0x34)) = uVar1 * 3 + (*(uint *)(gen_frame + 0x34));
  uVar1 = F_00b89a00(param_1,param_2,1);
  uVar1 = (*(uint *)(gen_frame + 0x34)) + 0x1a + uVar1 * 4;
  (*(uint *)(gen_frame + 0x34)) = uVar1;
  _Dst = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                           (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,uVar1 * 4,4)));
  F_00c48350(_Dst,0,(*(uint *)(gen_frame + 0x34)) * 4);
  *(uint * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x80) = _Dst;
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x84) = (*(uint *)(gen_frame + 0x34));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)(gen_frame + 0x18)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x1c)) = 5000;
  (*(undefined4 *)(gen_frame + 0x20)) = 0x10100;
  (*(undefined1 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 6;
  (*(undefined2 *)(gen_frame + 0x25)) = 0;
  if ((param_1 == 7) || (param_1 == 8)) {
    (*(uint *)(gen_frame + 0x34)) = 0;
    do {
      uVar2 = (*(uint *)(gen_frame + 0x34)) + 1 & 0xffff;
      F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x100,"chara/human/c%04d/obj/tail/t%04d/model/c%04dt%04d_til.mdl",iVar3,
                 uVar2,iVar3,uVar2);
      uVar1 = F_00513dc0(((undefined1 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      if (uVar1 == 0) goto LAB_0069d86f;
      *_Dst = uVar1;
      F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x100,"chara/human/c%04d/obj/tail/t%04d/material/mt_c%04dt%04d_a.mtrl",
                 iVar3,uVar2,iVar3,uVar2);
      uVar1 = F_00513dc0(((undefined1 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      if (uVar1 == 0) goto LAB_0069d86f;
      _Dst[1] = uVar1;
      uVar1 = (*(uint *)(gen_frame + 0x34)) + 1;
      _Dst = _Dst + 2;
      (*(uint *)(gen_frame + 0x34)) = uVar1;
    } while (uVar1 < 8);
  }
  uVar1 = F_00b89a30(param_1,param_2,1);
  (*(uint *)(gen_frame + 0x30)) = uVar1;
  (*(uint *)(gen_frame + 0x34)) = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = (*(uint *)(gen_frame + 0x34)) + 1 & 0xffff;
      F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x100,"chara/human/c%04d/obj/hair/h%04d/model/c%04dh%04d_hir.mdl",iVar3,
                 uVar2,iVar3,uVar2);
      uVar1 = F_00513dc0(((undefined1 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      if (uVar1 == 0) goto LAB_0069d86f;
      *_Dst = uVar1;
      F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x100,
                 "chara/human/c%04d/obj/hair/h%04d/material/v0001/mt_c%04dh%04d_acc_b.mtrl",iVar3,
                 uVar2,iVar3,uVar2);
      uVar1 = F_00513dc0(((undefined1 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      if (uVar1 == 0) goto LAB_0069d86f;
      _Dst[1] = uVar1;
      F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x100,
                 "chara/human/c%04d/obj/hair/h%04d/material/v0001/mt_c%04dh%04d_hir_a.mtrl",iVar3,
                 uVar2,iVar3,uVar2);
      uVar1 = F_00513dc0(((undefined1 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      if (uVar1 == 0) goto LAB_0069d86f;
      _Dst[2] = uVar1;
      uVar1 = (*(uint *)(gen_frame + 0x34)) + 1;
      _Dst = _Dst + 3;
      (*(uint *)(gen_frame + 0x34)) = uVar1;
    } while (uVar1 < (*(uint *)(gen_frame + 0x30)));
  }
  uVar1 = F_00b89a60(param_1,param_2,1);
  (*(uint *)(gen_frame + 0x30)) = uVar1;
  (*(uint *)(gen_frame + 0x34)) = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = (*(uint *)(gen_frame + 0x34)) + 0x33 & 0xffff;
      F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x100,"chara/human/c%04d/obj/hair/h%04d/model/c%04dh%04d_hir.mdl",iVar3,
                 uVar2,iVar3,uVar2);
      uVar1 = F_00513dc0(((undefined1 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      if (uVar1 == 0) goto LAB_0069d86f;
      *_Dst = uVar1;
      F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x100,
                 "chara/human/c%04d/obj/hair/h%04d/material/v0001/mt_c%04dh%04d_acc_b.mtrl",iVar3,
                 uVar2,iVar3,uVar2);
      uVar1 = F_00513dc0(((undefined1 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      if (uVar1 == 0) goto LAB_0069d86f;
      _Dst[1] = uVar1;
      F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x100,
                 "chara/human/c%04d/obj/hair/h%04d/material/v0001/mt_c%04dh%04d_hir_a.mtrl",iVar3,
                 uVar2,iVar3,uVar2);
      uVar1 = F_00513dc0(((undefined1 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      if (uVar1 == 0) goto LAB_0069d86f;
      _Dst[2] = uVar1;
      uVar1 = (*(uint *)(gen_frame + 0x34)) + 1;
      _Dst = _Dst + 3;
      (*(uint *)(gen_frame + 0x34)) = uVar1;
    } while (uVar1 < (*(uint *)(gen_frame + 0x30)));
  }
  uVar1 = F_00b89a00(param_1,param_2,1);
  (*(uint *)(gen_frame + 0x30)) = uVar1;
  (*(uint *)(gen_frame + 0x34)) = 0;
  if (uVar1 != 0) {
    do {
      uVar2 = (param_1 - 1U & 1) * 100 + 1 + (*(uint *)(gen_frame + 0x34)) & 0xffff;
      F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x100,"chara/human/c%04d/obj/face/f%04d/model/c%04df%04d_fac.mdl",iVar3,
                 uVar2,iVar3,uVar2);
      uVar1 = F_00513dc0(((undefined1 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      if (uVar1 == 0) goto LAB_0069d86f;
      *_Dst = uVar1;
      F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x100,
                 "chara/human/c%04d/obj/face/f%04d/material/mt_c%04df%04d_etc_a.mtrl",iVar3,uVar2,
                 iVar3,uVar2);
      uVar1 = F_00513dc0(((undefined1 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      if (uVar1 == 0) goto LAB_0069d86f;
      _Dst[1] = uVar1;
      F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x100,
                 "chara/human/c%04d/obj/face/f%04d/material/mt_c%04df%04d_fac_a.mtrl",iVar3,uVar2,
                 iVar3,uVar2);
      uVar1 = F_00513dc0(((undefined1 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      if (uVar1 == 0) goto LAB_0069d86f;
      _Dst[2] = uVar1;
      F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x100,
                 "chara/human/c%04d/obj/face/f%04d/material/mt_c%04df%04d_iri_a.mtrl",iVar3,uVar2,
                 iVar3,uVar2);
      uVar1 = F_00513dc0(((undefined1 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      if (uVar1 == 0) goto LAB_0069d86f;
      _Dst[3] = uVar1;
      uVar1 = (*(uint *)(gen_frame + 0x34)) + 1;
      _Dst = _Dst + 4;
      (*(uint *)(gen_frame + 0x34)) = uVar1;
    } while (uVar1 < (*(uint *)(gen_frame + 0x30)));
  }
  uVar1 = 0;
  while( true ) {
    F_00c472af(((undefined1 *)(gen_frame + 0x38)),0x100,"chara/common/texture/decal_face/_decal_%d.tex",uVar1 + 1 & 0xffff);
    uVar2 = F_00513dc0(((undefined1 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
    if (uVar2 == 0) break;
    *_Dst = uVar2;
    uVar1 = uVar1 + 1;
    _Dst = _Dst + 1;
    if (0x19 < uVar1) {
      F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c) GEN_EDX_ARG);
      return 1;
    }
  }
LAB_0069d86f: ;
  if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x80) != 0) {
    F_0068ce50((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x80,(int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x84);
  }
  F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_0069d8d0 */
GEN_FRAME byte GEN_THISCALL F_0069d8d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x69d8d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint * PTR32 * PTR32 * PTR32 * param_4 = (uint * PTR32 * PTR32 * PTR32 *)(uintptr_t)gen_a4;
  int param_5 = (int)gen_a5;
  uint * PTR32 * PTR32 * PTR32 * param_6 = (uint * PTR32 * PTR32 * PTR32 *)(uintptr_t)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  uint * PTR32 * PTR32 * pppuVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint * PTR32 * PTR32 * PTR32 * ppppuVar5;
  uint * _Dst;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint * PTR32 * PTR32 * pppuVar16;
  uint uVar17;
  uint * puVar18;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  puVar18 = (uint *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x60)) = this;
  if (*(int *)((int)this + 0x88) != 0) {
    F_0068ce50((int *)((int)this + 0x88),(int)this + 0x8c);
  }
  switch((unsigned int)(uintptr_t)(param_1)) {
  default: ;
    iVar3 = 100;
    break;
  case 2: ;
    iVar3 = 300;
    break;
  case 3: ;
  case 4: ;
    iVar3 = 500;
    break;
  case 5: ;
  case 6: ;
    iVar3 = 0x44c;
    break;
  case 7: ;
  case 8: ;
    iVar3 = 700;
    break;
  case 9: ;
  case 10: ;
    iVar3 = 900;
  }
  uVar4 = iVar3 + 1 + param_2 * 100;
  (*(uint *)(gen_frame + 0x64)) = uVar4;
  (*(undefined4 *)(gen_frame + 0x78)) = 0x65;
  (*(undefined4 *)(gen_frame + 0x7c)) = 0x65;
  (*(undefined4 *)(gen_frame + 0x80)) = 0x65;
  (*(undefined4 *)(gen_frame + 0x84)) = 0x65;
  (*(undefined4 *)(gen_frame + 0x88)) = 0x65;
  (*(undefined4 *)(gen_frame + 0x8c)) = 0x65;
  (*(undefined4 *)(gen_frame + 0x90)) = 0x65;
  (*(undefined4 *)(gen_frame + 0x94)) = 0x65;
  (*(undefined4 *)(gen_frame + 0x98)) = 0x65;
  (*(undefined4 *)(gen_frame + 0x9c)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xa0)) = 0xc9;
  (*(undefined4 *)(gen_frame + 0xa4)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xa8)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xac)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xb0)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xb4)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xb8)) = 0xc9;
  (*(undefined4 *)(gen_frame + 0xbc)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xc0)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xc4)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xc8)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xcc)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xd0)) = 0xc9;
  (*(undefined4 *)(gen_frame + 0xd4)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xd8)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xdc)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xe0)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xe4)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xe8)) = 0xc9;
  (*(undefined4 *)(gen_frame + 0xec)) = 0x191;
  (*(undefined4 *)(gen_frame + 0xf0)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xf4)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xf8)) = 0x65;
  (*(undefined4 *)(gen_frame + 0xfc)) = 0x65;
  (*(undefined4 *)(gen_frame + 0x100)) = 0xc9;
  (*(undefined4 *)(gen_frame + 0x104)) = 0x44d;
  (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x68)) = (uint * PTR32 * PTR32 *)0x0;
  if (param_4 != (uint * PTR32 * PTR32 * PTR32 *)0x0) {
    pppuVar16 = (uint * PTR32 * PTR32 *)(uVar4 / 100);
    ((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0] = pppuVar16;
    do {
      uVar17 = (uint)*(ushort *)(param_3 + (int)((int)(uintptr_t)(*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x68))) * 2);
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x60)) + 8) + 0x5c))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x60)) + 8) GEN_EDX_ARG);
      uVar2 = *((ushort *)GEN_TOP((uVar4 + 6 + (uVar17 / *(ushort *)(uVar4 + 2)) * 2)));
      if (uVar2 == 0xffff) {
        uVar4 = 0;
      }
      else {
        uVar4 = (uint)*((ushort *)GEN_TOP(((uVar4 - 6) +
                       ((uint)*(ushort *)(uVar4 + 4) +
                       (*(uint *)(gen_frame + 0x64)) + ((int)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0] + ((*(uint *)(gen_frame + 0x64)) / 10) * -2) * 5 +
                       (uVar17 % (uint)*(ushort *)(uVar4 + 2) + (uint)uVar2) *
                       (uint)*(byte *)(uVar4 + 1)) * 2)));
      }
      (*(uint * PTR32 *)(gen_frame + 0x74)) = (uint *)((int)puVar18 + 1);
      uVar9 = uVar4 >> 1 & 1;
      if (uVar9 != 0) {
        (*(uint * PTR32 *)(gen_frame + 0x74)) = (uint *)((int)puVar18 + 2);
      }
      if ((uVar4 & 1) != 0) {
        (*(uint * PTR32 *)(gen_frame + 0x74)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x74)) + 1);
      }
      uVar10 = uVar4 >> 3 & 1;
      if (uVar10 != 0) {
        (*(uint * PTR32 *)(gen_frame + 0x74)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x74)) + 1);
      }
      uVar11 = uVar4 >> 2 & 1;
      if (uVar11 != 0) {
        (*(uint * PTR32 *)(gen_frame + 0x74)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x74)) + 1);
      }
      uVar12 = uVar4 >> 5 & 1;
      if (uVar12 != 0) {
        (*(uint * PTR32 *)(gen_frame + 0x74)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x74)) + 1);
      }
      uVar13 = uVar4 >> 4 & 1;
      if (uVar13 != 0) {
        (*(uint * PTR32 *)(gen_frame + 0x74)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x74)) + 1);
      }
      uVar14 = uVar4 >> 7 & 1;
      if (uVar14 != 0) {
        (*(uint * PTR32 *)(gen_frame + 0x74)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x74)) + 1);
      }
      uVar15 = uVar4 >> 6 & 1;
      (*(uint *)(gen_frame + 0x5c)) = uVar15;
      if (uVar15 != 0) {
        (*(uint * PTR32 *)(gen_frame + 0x74)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x74)) + 1);
      }
      uVar15 = uVar4 >> 9 & 1;
      (*(uint *)(gen_frame + 0x50)) = uVar15;
      if (uVar15 != 0) {
        (*(uint * PTR32 *)(gen_frame + 0x74)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x74)) + 1);
      }
      uVar15 = uVar4 >> 8 & 1;
      (*(uint *)(gen_frame + 0x58)) = uVar15;
      if (uVar15 != 0) {
        (*(uint * PTR32 *)(gen_frame + 0x74)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x74)) + 1);
      }
      ((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] = (uint * PTR32 * PTR32 *)(((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c)) + (int)((int)(uintptr_t)pppuVar16) * 3);
      (*(uint *)(gen_frame + 0x54)) = 3;
      puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
      do {
        pppuVar1 = ((uint * PTR32 * PTR32 *)GEN_TOP(*((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1]));
        uVar15 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x60)) + 8) + 0x5c))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x60)) + 8) GEN_EDX_ARG)
        ;
        uVar2 = *((ushort *)GEN_TOP((uVar15 + 6 + (uVar17 / *(ushort *)(uVar15 + 2)) * 2)));
        if (uVar2 == 0xffff) {
          uVar2 = 0;
        }
        else {
          uVar2 = *((ushort *)GEN_TOP(((uVar15 - 6) +
                   ((int)pppuVar1 +
                   (uint)*(ushort *)(uVar15 + 4) +
                   ((uint)((int)(uintptr_t)pppuVar1) / 100 + ((uint)((int)(uintptr_t)pppuVar1) / 10) * -2) * 5 +
                   ((uint)uVar2 + uVar17 % (uint)*(ushort *)(uVar15 + 2)) *
                   (uint)*(byte *)(uVar15 + 1)) * 2)));
          puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
        }
        (*(short *)(gen_frame + 0x8)) = (short)uVar9;
        if (((*(short *)(gen_frame + 0x8)) == 0) && ((uVar2 & 2) != 0)) {
          puVar18 = (uint *)((int)puVar18 + 1);
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18;
        }
        (*(short *)(gen_frame + 0x24)) = (short)(uVar4 & 1);
        if (((*(short *)(gen_frame + 0x24)) == 0) && ((uVar2 & 1) != 0)) {
          puVar18 = (uint *)((int)puVar18 + 1);
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18;
        }
        (*(short *)(gen_frame + 0xc)) = (short)uVar10;
        if (((*(short *)(gen_frame + 0xc)) == 0) && ((uVar2 & 8) != 0)) {
          puVar18 = (uint *)((int)puVar18 + 1);
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18;
        }
        (*(short *)(gen_frame + 0x1c)) = (short)uVar11;
        if (((*(short *)(gen_frame + 0x1c)) == 0) && ((uVar2 & 4) != 0)) {
          puVar18 = (uint *)((int)puVar18 + 1);
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18;
        }
        (*(short *)(gen_frame + 0x4)) = (short)uVar12;
        if (((*(short *)(gen_frame + 0x4)) == 0) && ((uVar2 & 0x20) != 0)) {
          puVar18 = (uint *)((int)puVar18 + 1);
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18;
        }
        (*(short *)(gen_frame + 0x14)) = (short)uVar13;
        if (((*(short *)(gen_frame + 0x14)) == 0) && ((uVar2 & 0x10) != 0)) {
          puVar18 = (uint *)((int)puVar18 + 1);
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18;
        }
        (*(short *)(gen_frame + 0x10)) = (short)uVar14;
        if (((*(short *)(gen_frame + 0x10)) == 0) && ((char)uVar2 < '\0')) {
          puVar18 = (uint *)((int)puVar18 + 1);
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18;
        }
        if (((short)(*(uint *)(gen_frame + 0x5c)) == 0) && ((uVar2 & 0x40) != 0)) {
          puVar18 = (uint *)((int)puVar18 + 1);
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18;
        }
        if (((short)(*(uint *)(gen_frame + 0x50)) == 0) && ((uVar2 & 0x200) != 0)) {
          puVar18 = (uint *)((int)puVar18 + 1);
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18;
        }
        if (((short)(*(uint *)(gen_frame + 0x58)) == 0) && ((uVar2 & 0x100) != 0)) {
          puVar18 = (uint *)((int)puVar18 + 1);
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18;
        }
        ((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] = ((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] + 1;
        uVar15 = (*(uint *)(gen_frame + 0x54)) - 1;
        (*(uint *)(gen_frame + 0x54)) = uVar15;
      } while (uVar15 != 0);
      ppppuVar5 = (uint * PTR32 * PTR32 * PTR32 *)((int)(*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x68)) + 1);
      (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x68)) = (uint * PTR32 * PTR32 *)ppppuVar5;
    } while (ppppuVar5 < param_4);
  }
  if (param_6 != (uint * PTR32 * PTR32 * PTR32 *)0x0) {
    puVar18 = (uint *)((int)((int)(uintptr_t)param_6) * 5 + (int)puVar18);
  }
  _Dst = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                           (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,(int)((int)(uintptr_t)puVar18) * 4,4)));
  F_00c48350(_Dst,0,(int)((int)(uintptr_t)puVar18) * 4);
  *(uint * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x60)) + 0x88) = _Dst;
  *(uint * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x60)) + 0x8c) = puVar18;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined1 *)(gen_frame + 0x3c)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x40)) = 5000;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x10100;
  (*(undefined1 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 6;
  (*(undefined2 *)(gen_frame + 0x49)) = 0;
  ((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0] = (uint * PTR32 * PTR32 *)0x0;
  if (param_4 != (uint * PTR32 * PTR32 * PTR32 *)0x0) {
    do {
      uVar9 = (uint)*(ushort *)(param_3 + (int)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0] * 2);
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x60)) + 8) + 0x5c))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x60)) + 8) GEN_EDX_ARG);
      uVar17 = uVar9 % (uint)*(ushort *)(uVar4 + 2);
      uVar2 = *((ushort *)GEN_TOP((uVar4 + 6 + (uVar9 / *(ushort *)(uVar4 + 2)) * 2)));
      (*(uint *)(gen_frame + 0x5c)) = uVar17;
      (*(uint *)(gen_frame + 0x50)) = (uint)uVar2;
      if (uVar2 == 0xffff) {
        ((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] = (uint * PTR32 * PTR32 *)0x0;
      }
      else {
        (*(uint *)(gen_frame + 0x58)) = ((*(uint *)(gen_frame + 0x64)) / 10) * 2;
        ((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] = (uint * PTR32 * PTR32 *)
                       (uint)*((ushort *)GEN_TOP(((uVar4 - 6) +
                              ((uint)*(ushort *)(uVar4 + 4) +
                              (uVar2 + uVar17) * (uint)*(byte *)(uVar4 + 1) + (*(uint *)(gen_frame + 0x64)) +
                              ((*(uint *)(gen_frame + 0x64)) / 100 + ((*(uint *)(gen_frame + 0x64)) / 10) * -2) * 5) * 2)));
      }
      F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/e%04d.imc",uVar9,uVar9);
      uVar17 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
      uVar4 = (*(uint *)(gen_frame + 0x64));
      if (uVar17 == 0) goto LAB_0069e8a9;
      *_Dst = uVar17;
      puVar18 = _Dst + 1;
      uVar17 = (uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] >> 1 & 1;
      (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18;
      (*(uint *)(gen_frame + 0x5c)) = uVar17;
      if (uVar17 != 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/model/c%04de%04d_met.mdl",uVar9,(*(uint *)(gen_frame + 0x64)),
                   uVar9);
        uVar17 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
        if (uVar17 == 0) goto LAB_0069e8a9;
        *puVar18 = uVar17;
        puVar18 = _Dst + 2;
        (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18;
      }
      uVar17 = (uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] & 1;
      (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18;
      if (uVar17 != 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/material/v0001/mt_c%04de%04d_met_a.mtrl",
                   uVar9,uVar4,uVar9);
        uVar10 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
        if (uVar10 == 0) goto LAB_0069e8a9;
        *puVar18 = uVar10;
        (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
      }
      puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
      uVar10 = (uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] >> 3 & 1;
      if (uVar10 != 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/model/c%04de%04d_top.mdl",uVar9,uVar4,
                   uVar9);
        uVar11 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
        if (uVar11 == 0) goto LAB_0069e8a9;
        *puVar18 = uVar11;
        (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
      }
      puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
      uVar11 = (uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] >> 2 & 1;
      if (uVar11 != 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/material/v0001/mt_c%04de%04d_top_a.mtrl",
                   uVar9,uVar4,uVar9);
        uVar12 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
        if (uVar12 == 0) goto LAB_0069e8a9;
        *puVar18 = uVar12;
        (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
      }
      puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
      uVar12 = (uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] >> 5 & 1;
      if (uVar12 != 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/model/c%04de%04d_glv.mdl",uVar9,uVar4,
                   uVar9);
        uVar13 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
        if (uVar13 == 0) goto LAB_0069e8a9;
        *puVar18 = uVar13;
        (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
      }
      puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
      uVar13 = (uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] >> 4 & 1;
      if (uVar13 != 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/material/v0001/mt_c%04de%04d_glv_a.mtrl",
                   uVar9,uVar4,uVar9);
        uVar14 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
        if (uVar14 == 0) goto LAB_0069e8a9;
        *puVar18 = uVar14;
        (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
      }
      puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
      uVar14 = (uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] >> 7 & 1;
      if (uVar14 != 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/model/c%04de%04d_dwn.mdl",uVar9,uVar4,
                   uVar9);
        uVar15 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
        if (uVar15 == 0) goto LAB_0069e8a9;
        *puVar18 = uVar15;
        (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
      }
      puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
      uVar15 = (uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] >> 6 & 1;
      if (uVar15 != 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/material/v0001/mt_c%04de%04d_dwn_a.mtrl",
                   uVar9,uVar4,uVar9);
        uVar6 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
        if (uVar6 == 0) goto LAB_0069e8a9;
        *puVar18 = uVar6;
        (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
      }
      puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
      uVar6 = (uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] >> 9 & 1;
      if (uVar6 != 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/model/c%04de%04d_sho.mdl",uVar9,uVar4,
                   uVar9);
        uVar7 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
        if (uVar7 == 0) goto LAB_0069e8a9;
        *puVar18 = uVar7;
        (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
      }
      puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
      uVar7 = (uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] >> 8 & 1;
      if (uVar7 != 0) {
        F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/material/v0001/mt_c%04de%04d_sho_a.mtrl",
                   uVar9,uVar4,uVar9);
        uVar8 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
        if (uVar8 == 0) goto LAB_0069e8a9;
        *puVar18 = uVar8;
        (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
      }
      (*(uint *)(gen_frame + 0x54)) = 0;
      (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x68)) = ((uint * PTR32 * PTR32 *)GEN_TOP((((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c)) + (uVar4 / 100) * 3)));
      do {
        pppuVar16 = (uint * PTR32 * PTR32 *)*(*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x68));
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x60)) + 8) + 0x5c))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x60)) + 8) GEN_EDX_ARG);
        uVar8 = uVar9 % (uint)*(ushort *)(uVar4 + 2);
        uVar2 = *((ushort *)GEN_TOP((uVar4 + 6 + (uVar9 / *(ushort *)(uVar4 + 2)) * 2)));
        (*(uint *)(gen_frame + 0x50)) = uVar8;
        (*(uint *)(gen_frame + 0x58)) = (uint)uVar2;
        if (uVar2 == 0xffff) {
          ((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] = (uint * PTR32 * PTR32 *)0x0;
        }
        else {
          ((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] = (uint * PTR32 * PTR32 *)
                         (uint)*((ushort *)GEN_TOP(((uVar4 - 6) +
                                ((int)pppuVar16 +
                                (uint)*(ushort *)(uVar4 + 4) +
                                ((uint)((int)(uintptr_t)pppuVar16) / 100 + ((uint)((int)(uintptr_t)pppuVar16) / 10) * -2) * 5 +
                                (uVar2 + uVar8) * (uint)*(byte *)(uVar4 + 1)) * 2)));
        }
        if (((short)(*(uint *)(gen_frame + 0x5c)) == 0) && (((uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] & 2) != 0)) {
          F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/model/c%04de%04d_met.mdl",uVar9,
                     pppuVar16,uVar9);
          uVar4 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
          if (uVar4 == 0) goto LAB_0069e8a9;
          *(*(uint * PTR32 *)(gen_frame + 0x74)) = uVar4;
          (*(uint * PTR32 *)(gen_frame + 0x74)) = (*(uint * PTR32 *)(gen_frame + 0x74)) + 1;
        }
        puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
        (*(short *)(gen_frame + 0x10)) = (short)uVar17;
        if (((*(short *)(gen_frame + 0x10)) == 0) && (((uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] & 1) != 0)) {
          F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/material/v0001/mt_c%04de%04d_met_a.mtrl"
                     ,uVar9,pppuVar16,uVar9);
          uVar4 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
          if (uVar4 == 0) goto LAB_0069e8a9;
          *puVar18 = uVar4;
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
        }
        puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
        (*(short *)(gen_frame + 0x14)) = (short)uVar10;
        if (((*(short *)(gen_frame + 0x14)) == 0) && (((uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] & 8) != 0)) {
          F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/model/c%04de%04d_top.mdl",uVar9,
                     pppuVar16,uVar9);
          uVar4 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
          if (uVar4 == 0) goto LAB_0069e8a9;
          *puVar18 = uVar4;
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
        }
        puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
        (*(short *)(gen_frame + 0x4)) = (short)uVar11;
        if (((*(short *)(gen_frame + 0x4)) == 0) && (((uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] & 4) != 0)) {
          F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/material/v0001/mt_c%04de%04d_top_a.mtrl"
                     ,uVar9,pppuVar16,uVar9);
          uVar4 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
          if (uVar4 == 0) goto LAB_0069e8a9;
          *puVar18 = uVar4;
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
        }
        puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
        (*(short *)(gen_frame + 0x1c)) = (short)uVar12;
        if (((*(short *)(gen_frame + 0x1c)) == 0) && (((uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] & 0x20) != 0)) {
          F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/model/c%04de%04d_glv.mdl",uVar9,
                     pppuVar16,uVar9);
          uVar4 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
          if (uVar4 == 0) goto LAB_0069e8a9;
          *puVar18 = uVar4;
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
        }
        puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
        (*(short *)(gen_frame + 0xc)) = (short)uVar13;
        if (((*(short *)(gen_frame + 0xc)) == 0) && (((uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] & 0x10) != 0)) {
          F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/material/v0001/mt_c%04de%04d_glv_a.mtrl"
                     ,uVar9,pppuVar16,uVar9);
          uVar4 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
          if (uVar4 == 0) goto LAB_0069e8a9;
          *puVar18 = uVar4;
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
        }
        puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
        (*(short *)(gen_frame + 0x24)) = (short)uVar14;
        if (((*(short *)(gen_frame + 0x24)) == 0) && (((uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] & 0x80) != 0)) {
          F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/model/c%04de%04d_dwn.mdl",uVar9,
                     pppuVar16,uVar9);
          uVar4 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
          if (uVar4 == 0) goto LAB_0069e8a9;
          *puVar18 = uVar4;
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
        }
        puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
        (*(short *)(gen_frame + 0x8)) = (short)uVar15;
        if (((*(short *)(gen_frame + 0x8)) == 0) && (((uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] & 0x40) != 0)) {
          F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/material/v0001/mt_c%04de%04d_dwn_a.mtrl"
                     ,uVar9,pppuVar16,uVar9);
          uVar4 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
          if (uVar4 == 0) goto LAB_0069e8a9;
          *puVar18 = uVar4;
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
        }
        puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
        (*(short *)(gen_frame + 0x18)) = (short)uVar6;
        if (((*(short *)(gen_frame + 0x18)) == 0) && (((uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] & 0x200) != 0)) {
          F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/model/c%04de%04d_sho.mdl",uVar9,
                     pppuVar16,uVar9);
          uVar4 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
          if (uVar4 == 0) goto LAB_0069e8a9;
          *puVar18 = uVar4;
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
        }
        puVar18 = (*(uint * PTR32 *)(gen_frame + 0x74));
        (*(short *)(gen_frame + 0x20)) = (short)uVar7;
        if (((*(short *)(gen_frame + 0x20)) == 0) && (((uint)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[1] & 0x100) != 0)) {
          F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/equipment/e%04d/material/v0001/mt_c%04de%04d_sho_a.mtrl"
                     ,uVar9,pppuVar16,uVar9);
          uVar4 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
          if (uVar4 == 0) goto LAB_0069e8a9;
          *puVar18 = uVar4;
          (*(uint * PTR32 *)(gen_frame + 0x74)) = puVar18 + 1;
        }
        (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x68)) = (*(uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x68)) + 1;
        uVar4 = (*(uint *)(gen_frame + 0x54)) + 1;
        (*(uint *)(gen_frame + 0x54)) = uVar4;
      } while (uVar4 < 3);
      ppppuVar5 = (uint * PTR32 * PTR32 * PTR32 *)((int)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0] + 1);
      ((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0] = (uint * PTR32 * PTR32 *)ppppuVar5;
      _Dst = (*(uint * PTR32 *)(gen_frame + 0x74));
    } while (ppppuVar5 < param_4);
  }
  ((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0] = (uint * PTR32 * PTR32 *)0x0;
  if (param_6 != (uint * PTR32 * PTR32 * PTR32 *)0x0) {
    do {
      uVar17 = (uint)*(ushort *)(param_5 + (int)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0] * 4);
      uVar9 = (uint)*(ushort *)(param_5 + 2 + (int)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0] * 4);
      F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/weapon/w%04d/skeleton/base/b0001/skl_w%04db0001.sklb",uVar17
                 ,uVar17);
      uVar4 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
      if (uVar4 == 0) {
LAB_0069e8a9: ;
        if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x60)) + 0x88) != 0) {
          F_0068ce50((int)(*(undefined * PTR32 *)(gen_frame + 0x60)) + 0x88,(int)(*(undefined * PTR32 *)(gen_frame + 0x60)) + 0x8c);
        }
        F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c) GEN_EDX_ARG);
        return 0;
      }
      *_Dst = uVar4;
      F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/weapon/w%04d/animation/a0001/wp_common/resident/weapon.pap",
                 uVar17);
      uVar4 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
      if (uVar4 == 0) goto LAB_0069e8a9;
      _Dst[1] = uVar4;
      F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/weapon/w%04d/obj/body/b%04d/model/w%04db%04d.mdl",uVar17,
                 uVar9,uVar17,uVar9);
      uVar4 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
      if (uVar4 == 0) goto LAB_0069e8a9;
      _Dst[2] = uVar4;
      F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,"chara/weapon/w%04d/obj/body/b%04d/b%04d.imc",uVar17,uVar9,uVar9);
      uVar4 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
      if (uVar4 == 0) goto LAB_0069e8a9;
      _Dst[3] = uVar4;
      F_00c472af(((undefined1 *)(gen_frame + 0x108)),0x100,
                 "chara/weapon/w%04d/obj/body/b%04d/material/v0001/mt_w%04db%04d_a.mtrl",uVar17,
                 uVar9,uVar17,uVar9);
      uVar4 = F_00513dc0(((undefined1 *)(gen_frame + 0x108)),&(*(undefined4 *)(gen_frame + 0x28)),0,0);
      if (uVar4 == 0) goto LAB_0069e8a9;
      _Dst[4] = uVar4;
      ppppuVar5 = (uint * PTR32 * PTR32 * PTR32 *)((int)((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0] + 1);
      _Dst = _Dst + 5;
      ((uint * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0] = (uint * PTR32 * PTR32 *)ppppuVar5;
    } while (ppppuVar5 < param_6);
  }
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_0069e910 */
GEN_FRAME byte GEN_THISCALL F_0069e910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x69e910u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x200];
  ushort uVar1;
  uint * _Dst;
  uint uVar2;
  uint uVar3;
  ushort * puVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint * puVar9;
  bool bVar10;
  
  (*(uint *)(gen_frame + 0x1f8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1fc);
  _Dst = *(uint * PTR32 *)((int)this + 0x90);
  (*(undefined * PTR32 *)(gen_frame + 0x40)) = this;
  (*(uint *)(gen_frame + 0x44)) = param_2;
  if (_Dst == (uint *)0x0) {
    _Dst = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                             (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,0xc0,4)));
    F_00c48350(_Dst,0,0xc0);
    *(uint * PTR32 *)((int)this + 0x90) = _Dst;
    *(undefined4 *)((int)this + 0x94) = 0x30;
  }
  ((ushort *)(gen_frame + 0x1d4))[0] = 0x54;
  ((ushort *)(gen_frame + 0x1d4))[1] = 0x55;
  ((ushort *)(gen_frame + 0x1d4))[2] = 0x56;
  ((ushort *)(gen_frame + 0x1d4))[3] = 0x57;
  ((ushort *)(gen_frame + 0x1d4))[4] = 0x5c;
  ((ushort *)(gen_frame + 0x1d4))[5] = 0x5d;
  ((ushort *)(gen_frame + 0x1d4))[6] = 0x58;
  ((ushort *)(gen_frame + 0x1d4))[7] = 0x59;
  ((ushort *)(gen_frame + 0x1d4))[8] = 0x5a;
  ((ushort *)(gen_frame + 0x1d4))[9] = 0x5b;
  ((ushort *)(gen_frame + 0x1d4))[10] = 0x2a;
  ((ushort *)(gen_frame + 0x1d4))[0xb] = 0x2c;
  ((ushort *)(gen_frame + 0x1d4))[0xc] = 0x25;
  ((ushort *)(gen_frame + 0x1d4))[0xd] = 0x24;
  ((ushort *)(gen_frame + 0x1d4))[0xe] = 0x29;
  ((ushort *)(gen_frame + 0x1d4))[0xf] = 0x27;
  ((ushort *)(gen_frame + 0x1d4))[0x10] = 0x28;
  ((ushort *)(gen_frame + 0x1d4))[0x11] = 0x84;
  (*(undefined4 *)(gen_frame + 0x154)) = 0xb0065;
  (*(undefined4 *)(gen_frame + 0x158)) = 0x100c9;
  (*(undefined4 *)(gen_frame + 0x15c)) = 0xa00c9;
  (*(undefined4 *)(gen_frame + 0x160)) = 0xa00c9;
  (*(undefined4 *)(gen_frame + 0x164)) = 0x9012d;
  (*(undefined4 *)(gen_frame + 0x168)) = 0x10130;
  (*(undefined4 *)(gen_frame + 0x16c)) = 0x9015f;
  (*(undefined4 *)(gen_frame + 0x170)) = 0x10162;
  (*(undefined4 *)(gen_frame + 0x174)) = 0x70191;
  (*(undefined4 *)(gen_frame + 0x178)) = 0x70191;
  (*(undefined4 *)(gen_frame + 0x17c)) = 0x1f0191;
  (*(undefined4 *)(gen_frame + 0x180)) = 0x1f0191;
  (*(undefined4 *)(gen_frame + 0x184)) = 0x301f5;
  (*(undefined4 *)(gen_frame + 0x188)) = 0x301f5;
  (*(undefined4 *)(gen_frame + 0x18c)) = 0x101f8;
  (*(undefined4 *)(gen_frame + 0x190)) = 0x101f8;
  (*(undefined4 *)(gen_frame + 0x194)) = 0x10259;
  (*(undefined4 *)(gen_frame + 0x198)) = 0x1025b;
  (*(undefined4 *)(gen_frame + 0x19c)) = 0x102ba;
  (*(undefined4 *)(gen_frame + 0x1a0)) = 0x402ba;
  (*(undefined4 *)(gen_frame + 0x1a4)) = 0x10321;
  (*(undefined4 *)(gen_frame + 0x1a8)) = 0x10321;
  (*(undefined4 *)(gen_frame + 0x1ac)) = 0x60321;
  (*(undefined4 *)(gen_frame + 0x1b0)) = 0x60321;
  (*(undefined4 *)(gen_frame + 0x1b4)) = 0xf0385;
  (*(undefined4 *)(gen_frame + 0x1b8)) = 0xf0385;
  (*(undefined4 *)(gen_frame + 0x1bc)) = 0x203e9;
  (*(undefined4 *)(gen_frame + 0x1c0)) = 0x203e9;
  (*(undefined4 *)(gen_frame + 0x1c4)) = 0x106ac;
  (*(undefined4 *)(gen_frame + 0x1c8)) = 0x106ac;
  (*(undefined4 *)(gen_frame + 0x1cc)) = 0x106a9;
  (*(undefined4 *)(gen_frame + 0x1d0)) = 0x106a9;
  switch((unsigned int)(uintptr_t)(param_1 - 1U)) {
  default: ;
    iVar6 = 100;
    break;
  case 1: ;
    iVar6 = 300;
    break;
  case 2: ;
  case 3: ;
    iVar6 = 500;
    break;
  case 4: ;
  case 5: ;
    iVar6 = 0x44c;
    break;
  case 6: ;
  case 7: ;
    iVar6 = 700;
    break;
  case 8: ;
  case 9: ;
    iVar6 = 900;
  }
  (*(uint *)(gen_frame + 0x38)) = iVar6 + 1 + (*(uint *)(gen_frame + 0x44)) * 100;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined1 *)(gen_frame + 0x1c)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x20)) = 5000;
  (*(undefined4 *)(gen_frame + 0x24)) = 0x10100;
  (*(undefined1 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 6;
  (*(undefined2 *)(gen_frame + 0x29)) = 0;
  (*(uint *)(gen_frame + 0x3c)) = 0;
  do {
    uVar8 = 0;
    (*(ushort * PTR32 *)(gen_frame + 0x48)) = (ushort *)0x0;
    if ((*(uint *)(gen_frame + 0x3c)) == 0) {
      (*(ushort * PTR32 *)(gen_frame + 0x48)) = (ushort *)0x0;
LAB_0069ebb1: ;
      uVar8 = 1;
    }
    else {
      if ((*(uint *)(gen_frame + 0x3c)) == 1) {
        (*(ushort * PTR32 *)(gen_frame + 0x48)) = (ushort *)(uint)((ushort *)(gen_frame + 0x1d4))[(int)((*(uint *)(gen_frame + 0x44)) + (param_1 - 1U & 0xfffffffe))];
        goto LAB_0069ebb1;
      }
      if ((*(uint *)(gen_frame + 0x3c)) == 2) {
        uVar8 = 0;
        (*(ushort * PTR32 *)(gen_frame + 0x48)) = (ushort *)(uint)((ushort *)(gen_frame + 0x1d4))[(int)(param_3 + 10)];
      }
    }
    puVar4 = (*(ushort * PTR32 *)(gen_frame + 0x48));
    (*(ushort * PTR32 *)(gen_frame + 0x4c)) = (*(ushort * PTR32 *)(gen_frame + 0x48));
    F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x100,"chara/equipment/e%04d/e%04d.imc",(*(ushort * PTR32 *)(gen_frame + 0x48)),(*(ushort * PTR32 *)(gen_frame + 0x48)));
    uVar2 = F_00513dc0(((undefined1 *)(gen_frame + 0x54)),&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    (*(uint *)(gen_frame + 0x50)) = uVar2;
    if (uVar2 == 0) goto LAB_0069f0c2;
    if (*_Dst != 0) {
      F_0050c620(*_Dst,0,0);
      *_Dst = 0;
      uVar2 = (*(uint *)(gen_frame + 0x50));
    }
    *_Dst = uVar2;
    _Dst = _Dst + 1;
    (*(uint *)(gen_frame + 0x50)) = uVar8;
    if (uVar8 < 5) {
      uVar2 = ((*(uint *)(gen_frame + 0x38)) & 0xffff) % 10;
      puVar9 = _Dst;
      do {
        (*(uint *)(gen_frame + 0x50)) = uVar8;
        if (uVar2 == 1) {
          uVar1 = F_0068c9c0((*(undefined * PTR32 *)(gen_frame + 0x40)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x38)),uVar8,puVar4);
        }
        else if (uVar2 == 4) {
          uVar1 = F_0068cc20((*(undefined * PTR32 *)(gen_frame + 0x40)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x38)),uVar8,puVar4);
        }
        else {
          uVar1 = F_0068cd40((*(undefined * PTR32 *)(gen_frame + 0x40)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x38)),uVar8,puVar4);
        }
        uVar3 = (uint)uVar1;
        (*(uint *)(gen_frame + 0x34)) = uVar3;
        F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x100,"chara/equipment/e%04d/model/c%04de%04d_%s.mdl",(*(ushort * PTR32 *)(gen_frame + 0x4c)),uVar3,
                   (*(ushort * PTR32 *)(gen_frame + 0x4c)),(&REFG(undefined * PTR32, 0x1323170))[(int)(uVar8)]);
        uVar8 = F_00513dc0(((undefined1 *)(gen_frame + 0x54)),&(*(undefined4 *)(gen_frame + 0x8)),0,0);
        if (uVar8 == 0) goto LAB_0069f0c2;
        if (*puVar9 != 0) {
          F_0050c620(*puVar9,0,0);
          *puVar9 = 0;
        }
        *puVar9 = uVar8;
        _Dst = puVar9 + 1;
        if (((*(uint *)(gen_frame + 0x3c)) != 0) || ((*(uint *)(gen_frame + 0x50)) != 2)) {
          uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x40)) + 8) + 0x5c))))
                            (*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x40)) + 8) GEN_EDX_ARG);
          uVar7 = (uint)((int)(uintptr_t)(*(ushort * PTR32 *)(gen_frame + 0x4c))) % (uint)*(ushort *)(uVar8 + 2);
          uVar1 = *((ushort *)GEN_TOP((uVar8 + 6 + ((uint)((int)(uintptr_t)(*(ushort * PTR32 *)(gen_frame + 0x4c))) / (uint)*(ushort *)(uVar8 + 2)) * 2)));
          (*(uint *)(gen_frame + 0x30)) = uVar7;
          (*(ushort * PTR32 *)(gen_frame + 0x4c)) = (ushort *)(uint)uVar1;
          if (uVar1 == 0xffff) {
            uVar1 = 0;
          }
          else {
            uVar1 = *((ushort *)GEN_TOP(((uVar8 - 6) +
                     ((uint)*(ushort *)(uVar8 + 4) +
                     (uVar1 + uVar7) * (uint)*(byte *)(uVar8 + 1) + uVar3 +
                     (uVar3 / 100 + (uVar3 / 10) * -2) * 5) * 2)));
          }
          uVar5 = (ushort)(*(uint *)(gen_frame + 0x34));
          switch((unsigned int)(uintptr_t)((*(uint *)(gen_frame + 0x50)))) {
          case 0: ;
            bVar10 = (uVar1 & 1) == 0;
            break;
          case 1: ;
            bVar10 = (uVar1 & 4) == 0;
            break;
          case 2: ;
            bVar10 = (uVar1 & 0x10) == 0;
            break;
          case 3: ;
            bVar10 = (uVar1 & 0x40) == 0;
            break;
          case 4: ;
            bVar10 = (uVar1 & 0x100) == 0;
            break;
          default: ;
            goto switchD_0069edbb_default;
          }
          if (bVar10) {
            uVar5 = 0x65;
          }
switchD_0069edbb_default: ;
          puVar4 = (ushort *)((uint)(*(ushort * PTR32 *)(gen_frame + 0x48)) & 0xffff);
          (*(ushort * PTR32 *)(gen_frame + 0x4c)) = puVar4;
          F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x100,"chara/equipment/e%04d/material/v0001/mt_c%04de%04d_%s_a.mtrl",
                     puVar4,(uint)uVar5,puVar4,(&REFG(undefined * PTR32, 0x1323170))[(int)((*(uint *)(gen_frame + 0x50)))]);
          uVar8 = F_00513dc0(((undefined1 *)(gen_frame + 0x54)),&(*(undefined4 *)(gen_frame + 0x8)),0,0);
          if (uVar8 == 0) goto LAB_0069f0c2;
          if (*_Dst != 0) {
            F_0050c620(*_Dst,0,0);
            *_Dst = 0;
          }
          *_Dst = uVar8;
          _Dst = puVar9 + 2;
        }
        uVar8 = (*(uint *)(gen_frame + 0x50)) + 1;
        (*(uint *)(gen_frame + 0x50)) = uVar8;
        puVar9 = _Dst;
        puVar4 = (*(ushort * PTR32 *)(gen_frame + 0x48));
      } while (uVar8 < 5);
    }
    uVar8 = (*(uint *)(gen_frame + 0x3c)) + 1;
    (*(uint *)(gen_frame + 0x3c)) = uVar8;
  } while (uVar8 < 3);
  (*(ushort * PTR32 *)(gen_frame + 0x4c)) = (ushort *)((int)&(*(undefined4 *)(gen_frame + 0x154)) + param_3 * 0x10 + 2);
  (*(uint *)(gen_frame + 0x44)) = 0;
  while( true ) {
    uVar2 = (uint)(*(ushort * PTR32 *)(gen_frame + 0x4c))[-1];
    (*(uint *)(gen_frame + 0x30)) = (uint)*(*(ushort * PTR32 *)(gen_frame + 0x4c));
    F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x100,"chara/weapon/w%04d/skeleton/base/b0001/skl_w%04db0001.sklb",uVar2,
               uVar2);
    uVar8 = F_00513dc0(((undefined1 *)(gen_frame + 0x54)),&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    if (uVar8 == 0) break;
    if (*_Dst != 0) {
      F_0050c620(*_Dst,0,0);
      *_Dst = 0;
    }
    *_Dst = uVar8;
    F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x100,"chara/weapon/w%04d/animation/a0001/wp_common/resident/weapon.pap",
               uVar2);
    uVar8 = F_00513dc0(((undefined1 *)(gen_frame + 0x54)),&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    if (uVar8 == 0) break;
    if (_Dst[1] != 0) {
      F_0050c620(_Dst[1],0,0);
      _Dst[1] = 0;
    }
    _Dst[1] = uVar8;
    uVar3 = (*(uint *)(gen_frame + 0x30)) & 0xffff;
    F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x100,"chara/weapon/w%04d/obj/body/b%04d/model/w%04db%04d.mdl",uVar2,uVar3,
               uVar2,uVar3);
    uVar8 = F_00513dc0(((undefined1 *)(gen_frame + 0x54)),&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    (*(uint *)(gen_frame + 0x50)) = uVar8;
    if (uVar8 == 0) break;
    if (_Dst[2] != 0) {
      F_0050c620(_Dst[2],0,0);
      _Dst[2] = 0;
    }
    _Dst[2] = (*(uint *)(gen_frame + 0x50));
    F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x100,"chara/weapon/w%04d/obj/body/b%04d/b%04d.imc",uVar2,uVar3,uVar3);
    uVar8 = F_00513dc0(((undefined1 *)(gen_frame + 0x54)),&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    (*(uint *)(gen_frame + 0x50)) = uVar8;
    if (uVar8 == 0) break;
    if (_Dst[3] != 0) {
      F_0050c620(_Dst[3],0,0);
      _Dst[3] = 0;
    }
    _Dst[3] = (*(uint *)(gen_frame + 0x50));
    F_00c472af(((undefined1 *)(gen_frame + 0x54)),0x100,
               "chara/weapon/w%04d/obj/body/b%04d/material/v0001/mt_w%04db%04d_a.mtrl",uVar2,uVar3,
               uVar2,uVar3);
    uVar8 = F_00513dc0(((undefined1 *)(gen_frame + 0x54)),&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    if (uVar8 == 0) break;
    if (_Dst[4] != 0) {
      F_0050c620(_Dst[4],0,0);
      _Dst[4] = 0;
    }
    (*(ushort * PTR32 *)(gen_frame + 0x4c)) = (*(ushort * PTR32 *)(gen_frame + 0x4c)) + 2;
    uVar2 = (*(uint *)(gen_frame + 0x44)) + 1;
    _Dst[4] = uVar8;
    _Dst = _Dst + 5;
    (*(uint *)(gen_frame + 0x44)) = uVar2;
    if (3 < uVar2) {
      F_00c47745((*(uint *)(gen_frame + 0x1f8)) ^ (uint)(uint)(gen_frame + 0x1fc) GEN_EDX_ARG);
      return 1;
    }
  }
LAB_0069f0c2: ;
  if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x40)) + 0x90) != 0) {
    F_0068ce50((int)(*(undefined * PTR32 *)(gen_frame + 0x40)) + 0x90,(int)(*(undefined * PTR32 *)(gen_frame + 0x40)) + 0x94);
  }
  F_00c47745((*(uint *)(gen_frame + 0x1f8)) ^ (uint)(uint)(gen_frame + 0x1fc) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_0069f140 */
GEN_NOFRAME uint GEN_THISCALL F_0069f140(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x69f140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x78) != 0) {
    F_0068ce50((int)this + 0x78,(int)this + 0x7c);
  }
  if (*(int *)((int)this + 0x80) != 0) {
    F_0068ce50((int)this + 0x80,(int)this + 0x84);
  }
  if (*(int *)((int)this + 0x88) != 0) {
    F_0068ce50((int)this + 0x88,(int)this + 0x8c);
  }
  uVar1 = (int)this + 0x90;
  if (*(int *)((int)this + 0x90) != 0) {
    uVar1 = F_0068ce50(uVar1,(int)this + 0x94);
  }
  return uVar1;
}

/* ref: FUN_0069f1c0 */
GEN_FRAME byte GEN_THISCALL F_0069f1c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x69f1c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  undefined * this_00;
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined2 * puVar4;
  undefined2 * puVar5;
  undefined2 * puVar6;
  uint uVar7;
  undefined2 * local_1c;
  undefined2 * local_14;
  
  this_00 = *(undefined * PTR32 *)((int)this + 4);
  *param_1 = REFG(undefined4, 0x10f04cc);
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x10f04d0))[0];
  uVar7 = (uint)param_2[2];
  if (uVar7 == 0) {
    uVar7 = 1;
  }
  uVar3 = F_006b3010(this_00 GEN_EDX_FWD,uVar7 >> 9);
  if (uVar3 == 0) {
    puVar4 = (undefined2 *)0x0;
  }
  else {
    puVar4 = ((undefined2 *)GEN_TOP((uVar3 + (uVar7 & 0x1ff) * 8)));
  }
  local_1c = puVar4;
  if ((puVar4[1] & 0x400) != 0) {
    uVar7 = (uint)*param_2;
    if (uVar7 == 0) {
      uVar7 = 1;
    }
    uVar3 = F_006b3010(this_00 GEN_EDX_ARG,uVar7 >> 9);
    if (uVar3 == 0) {
      local_1c = (undefined2 *)0x0;
    }
    else {
      local_1c = ((undefined2 *)GEN_TOP((uVar3 + (uVar7 & 0x1ff) * 8)));
    }
  }
  local_14 = puVar4;
  if ((puVar4[1] & 0x200) != 0) {
    uVar7 = (uint)param_2[4];
    if (uVar7 == 0) {
      uVar7 = 1;
    }
    uVar3 = F_006b3010(this_00 GEN_EDX_ARG,uVar7 >> 9);
    if (uVar3 == 0) {
      local_14 = (undefined2 *)0x0;
    }
    else {
      local_14 = ((undefined2 *)GEN_TOP((uVar3 + (uVar7 & 0x1ff) * 8)));
    }
  }
  puVar6 = puVar4;
  if ((*(byte *)((int)puVar4 + 3) & 1) != 0) {
    uVar7 = (uint)param_2[6];
    if (uVar7 == 0) {
      uVar7 = 1;
    }
    uVar3 = F_006b3010(this_00 GEN_EDX_ARG,uVar7 >> 9);
    if (uVar3 == 0) {
      puVar6 = (undefined2 *)0x0;
    }
    else {
      puVar6 = ((undefined2 *)GEN_TOP((uVar3 + (uVar7 & 0x1ff) * 8)));
    }
  }
  puVar5 = puVar6;
  if ((*(byte *)(puVar6 + 3) & 0x20) != 0) {
    uVar7 = (uint)param_2[8];
    if (uVar7 == 0) {
      uVar7 = 1;
    }
    puVar5 = (undefined2 *)F_006b3010(this_00 GEN_EDX_ARG,uVar7 >> 9);
    if (puVar5 != (undefined2 *)0x0) {
      puVar5 = puVar5 + (uVar7 & 0x1ff) * 4;
    }
  }
  if (local_1c != (undefined2 *)0x0) {
    *(undefined2 *)param_1 = *local_1c;
  }
  *(undefined2 *)((int)param_1 + 2) = puVar4[1];
  if (local_14 != (undefined2 *)0x0) {
    *(undefined2 *)(param_1 + 1) = local_14[2];
  }
  *(undefined1 *)((int)param_1 + 6) = *(undefined1 *)(puVar6 + 3);
  if (puVar5 != (undefined2 *)0x0) {
    *(undefined1 *)((int)param_1 + 7) = *(undefined1 *)((int)puVar5 + 7);
  }
  uVar2 = *(ushort *)(param_1 + 1) >> 1 & 3;
  if (uVar2 != 1) {
    if (uVar2 == 2) {
      uVar2 = *(ushort *)((int)param_1 + 2);
      *(ushort *)((int)param_1 + 2) = ((uVar2 >> 5 & 1) * -0x10 ^ uVar2) & 0x18 ^ uVar2;
    }
    else if (uVar2 == 3) {
      uVar2 = *(ushort *)((int)param_1 + 2);
      *(ushort *)((int)param_1 + 2) = ((uVar2 >> 6 & 1) * -0x10 ^ uVar2) & 0x18 ^ uVar2;
    }
  }
  uVar3 = *(byte *)((int)param_1 + 7) >> 1 & 3;
  uVar7 = 0;
  if (uVar3 != 1) {
    if (uVar3 == 2) {
      bVar1 = *(byte *)((int)param_1 + 6);
      bVar1 = ((bVar1 >> 4 & 1) * -8 ^ bVar1) & 0xc ^ bVar1;
      uVar7 = (uint)bVar1;
      *(byte *)((int)param_1 + 6) = bVar1;
    }
    else {
      uVar7 = uVar3 - 3;
      if (uVar7 == 0) {
        *(byte *)((int)param_1 + 6) = *(byte *)((int)param_1 + 6) & 0xf3;
        return 0;
      }
    }
  }
  return (byte)uVar7;
}

/* ref: FUN_0069f3e0 */
GEN_FRAME uint GEN_THISCALL F_0069f3e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x69f3e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  float fVar3;
  int * piVar4;
  undefined * pvVar5;
  byte * pbVar6;
  int iVar7;
  float * pfVar8;
  uint uVar9;
  float * pfVar10;
  undefined4 * puVar11;
  float10 fVar12;
  float fVar13;
  
  pbVar6 = (*(byte * PTR32 *)&gen_args[3]);
  piVar4 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24)));
  (*(uint *)(gen_frame + 0x68)) = (*(byte * PTR32 *)&gen_args[3])[4] - 1 & 1;
  (*(uint *)(gen_frame + 0x50)) = (uint)(*(byte * PTR32 *)&gen_args[3])[8];
  (*(uint *)(gen_frame + 0x48)) = (*(byte * PTR32 *)&gen_args[3])[0x13] & 0x80;
  (*(uint *)(gen_frame + 0x3c)) = (uint)(*(byte * PTR32 *)&gen_args[3])[0xb];
  (*(uint *)(gen_frame + 0x64)) = (uint)(*(byte * PTR32 *)&gen_args[3])[1];
  (*(uint *)(gen_frame + 0x4c)) = (uint)(*(byte * PTR32 *)&gen_args[3])[2];
  (*(uint *)(gen_frame + 0x44)) = (uint)(*(byte * PTR32 *)&gen_args[3])[0x14];
  (*(uint *)(gen_frame + 0x40)) = (*(byte * PTR32 *)&gen_args[3])[7] & 0x80;
  (*(uint *)(gen_frame + 0x5c)) = (uint)(*(byte * PTR32 *)&gen_args[3])[10];
  (*(uint *)(gen_frame + 0x34)) = (uint)(*(byte * PTR32 *)&gen_args[3])[9];
  (*(uint *)(gen_frame + 0x30)) = (uint)(*(byte * PTR32 *)&gen_args[3])[0xd];
  (*(uint *)(gen_frame + 0x38)) = (uint)(*(byte * PTR32 *)&gen_args[3])[0xf];
  (*(uint *)(gen_frame + 0x2c)) = (uint)(*(byte * PTR32 *)&gen_args[3])[0x19];
  if (((*(byte * PTR32 *)&gen_args[3])[0x18] & 0x80) == 0) {
    (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1087f04);
    fVar13 = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1090708);
    fVar13 = REFG(float, 0x1087f04);
  }
  (*(float *)(gen_frame + 0x54)) = fVar13;
  (*(byte * PTR32 *)&gen_args[3]) = (byte *)(uint)*(*(byte * PTR32 *)&gen_args[3]);
  pfVar8 = (float *)F_004d9920((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_FWD,0,0x90,2);
  if (pfVar8 != (float *)0x0) {
    (*(int *)(gen_frame + 0x60)) = (((*(uint *)(gen_frame + 0x64)) - 2) + ((*(uint *)(gen_frame + 0x68)) + (int)(*(byte * PTR32 *)&gen_args[3]) * 2) * 2) * 0x1400;
    uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4 GEN_EDX_ARG);
    pfVar10 = (float *)F_006087d0(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,*(undefined4 *)(uVar9 + (*(int *)(gen_frame + 0x60)) + (*(uint *)(gen_frame + 0x50)) * 4));
    fVar13 = pfVar10[3];
    (*(float *)(gen_frame + 0x28)) = fVar13;
    fVar1 = (float)((float10)*pfVar10 * (float10)*pfVar10);
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    fVar2 = (float)((float10)pfVar10[1] * (float10)pfVar10[1]);
    (*(float *)(gen_frame + 0x20)) = fVar2;
    fVar3 = pfVar10[2];
    *pfVar8 = fVar1;
    pfVar8[1] = fVar2;
    fVar1 = (float)((float10)fVar3 * (float10)fVar3);
    (*(float *)(gen_frame + 0x24)) = fVar1;
    pfVar8[2] = fVar1;
    pfVar8[3] = fVar13;
    if (((*(byte * PTR32 *)&gen_args[3]) == (byte *)0x1) || ((*(byte * PTR32 *)&gen_args[3]) == (byte *)0x5)) {
      fVar12 = F_006b32b0(piVar4 GEN_EDX_ARG,(uint)(*(byte * PTR32 *)&gen_args[3]),(*(uint *)(gen_frame + 0x64)),(*(uint *)(gen_frame + 0x68)),(*(uint *)(gen_frame + 0x4c)),(uint)pbVar6[0x15]);
      pfVar8[3] = (float)fVar12;
    }
    else {
      pfVar8[3] = GEN_FLT_TO(pfVar8[3], REFG(float, 0x1087f04));
    }
    fVar1 = REFG(float, 0x10ac164);
    fVar13 = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x10ac164);
    (*(float *)(gen_frame + 0x20)) = REFG(float, 0x10ac164);
    (*(float *)(gen_frame + 0x24)) = REFG(float, 0x10ac164);
    pfVar8[4] = GEN_FLT_TO(pfVar8[4], REFG(float, 0x10ac164));
    (*(float *)(gen_frame + 0x28)) = fVar13;
    pfVar8[5] = fVar1;
    pfVar8[6] = fVar1;
    pfVar8[7] = fVar13;
    if ((*(uint *)(gen_frame + 0x48)) == 0) {
      (*(float *)(gen_frame + 0x1c)) = 0.0;
      pfVar8[8] = 0.0;
      (*(float *)(gen_frame + 0x20)) = 0.0;
      (*(float *)(gen_frame + 0x24)) = 0.0;
      (*(float *)(gen_frame + 0x28)) = 0.0;
      pfVar8[9] = 0.0;
      pfVar8[10] = 0.0;
      pfVar8[0xb] = 0.0;
    }
    else {
      pfVar8[7] = GEN_FLT_TO(pfVar8[7], REFG(float, 0x10b3234));
      uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4 GEN_EDX_ARG);
      pfVar10 = (float *)F_006087d0(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,*(undefined4 *)(uVar9 + 0x800 + (*(uint *)(gen_frame + 0x44)) * 4));
      fVar13 = pfVar10[3];
      (*(float *)(gen_frame + 0x28)) = fVar13;
      fVar1 = (float)((float10)*pfVar10 * (float10)*pfVar10);
      (*(float *)(gen_frame + 0x1c)) = fVar1;
      fVar2 = (float)((float10)pfVar10[1] * (float10)pfVar10[1]);
      (*(float *)(gen_frame + 0x20)) = fVar2;
      fVar3 = pfVar10[2];
      pfVar8[8] = fVar1;
      pfVar8[9] = fVar2;
      fVar1 = (float)((float10)fVar3 * (float10)fVar3);
      (*(float *)(gen_frame + 0x24)) = fVar1;
      pfVar8[10] = fVar1;
      pfVar8[0xb] = fVar13;
    }
    uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4 GEN_EDX_ARG);
    iVar7 = (*(int *)(gen_frame + 0x60));
    pfVar10 = (float *)F_006087d0(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,*(undefined4 *)(uVar9 + (*(int *)(gen_frame + 0x60)) + 0x400 + (*(uint *)(gen_frame + 0x5c)) * 8))
    ;
    fVar13 = pfVar10[3];
    (*(float *)(gen_frame + 0x28)) = fVar13;
    fVar1 = (float)((float10)*pfVar10 * (float10)*pfVar10);
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    fVar2 = (float)((float10)pfVar10[1] * (float10)pfVar10[1]);
    (*(float *)(gen_frame + 0x20)) = fVar2;
    fVar3 = pfVar10[2];
    pfVar8[0xc] = fVar1;
    pfVar8[0xd] = fVar2;
    fVar1 = (float)((float10)fVar3 * (float10)fVar3);
    (*(float *)(gen_frame + 0x24)) = fVar1;
    pfVar8[0xe] = fVar1;
    pfVar8[0xf] = fVar13;
    uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4 GEN_EDX_ARG);
    pfVar10 = (float *)F_006087d0(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,*(undefined4 *)(uVar9 + iVar7 + 0x404 + (*(uint *)(gen_frame + 0x5c)) * 8));
    fVar13 = pfVar10[3];
    (*(float *)(gen_frame + 0x28)) = fVar13;
    fVar1 = (float)((float10)*pfVar10 * (float10)*pfVar10);
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    fVar2 = (float)((float10)pfVar10[1] * (float10)pfVar10[1]);
    (*(float *)(gen_frame + 0x20)) = fVar2;
    fVar3 = pfVar10[2];
    pfVar8[0x10] = fVar1;
    pfVar8[0x11] = fVar2;
    fVar1 = (float)((float10)fVar3 * (float10)fVar3);
    (*(float *)(gen_frame + 0x24)) = fVar1;
    pfVar8[0x12] = fVar1;
    pfVar8[0x13] = fVar13;
    if ((*(uint *)(gen_frame + 0x40)) == 0) {
      pfVar8[0x14] = pfVar8[0xc];
      pfVar8[0x15] = pfVar8[0xd];
      pfVar8[0x16] = pfVar8[0xe];
      pfVar8[0x17] = pfVar8[0xf];
    }
    else {
      uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4 GEN_EDX_ARG);
      pfVar10 = (float *)F_006087d0(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,*(undefined4 *)(uVar9 + 0x400 + (*(uint *)(gen_frame + 0x3c)) * 4));
      fVar13 = pfVar10[3];
      (*(float *)(gen_frame + 0x28)) = fVar13;
      fVar1 = (float)((float10)*pfVar10 * (float10)*pfVar10);
      (*(float *)(gen_frame + 0x1c)) = fVar1;
      fVar2 = (float)((float10)pfVar10[1] * (float10)pfVar10[1]);
      (*(float *)(gen_frame + 0x20)) = fVar2;
      fVar3 = pfVar10[2];
      pfVar8[0x14] = fVar1;
      pfVar8[0x15] = fVar2;
      fVar1 = (float)((float10)fVar3 * (float10)fVar3);
      (*(float *)(gen_frame + 0x24)) = fVar1;
      pfVar8[0x16] = fVar1;
      pfVar8[0x17] = fVar13;
    }
    uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4 GEN_EDX_ARG);
    F_006087d0(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,*(undefined4 *)(uVar9 + (*(uint *)(gen_frame + 0x38)) * 4));
    (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x58));
    fVar13 = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0))))) * ((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0))))))));
    (*(float *)(gen_frame + 0x1c)) = fVar13;
    pfVar8[0x18] = fVar13;
    fVar13 = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4))))) * ((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4))))))));
    (*(float *)(gen_frame + 0x20)) = fVar13;
    pfVar8[0x19] = fVar13;
    fVar13 = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8))))) * ((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8))))))));
    (*(float *)(gen_frame + 0x24)) = fVar13;
    pfVar8[0x1a] = fVar13;
    pfVar8[0x1b] = (*(float *)(gen_frame + 0x58));
    uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4 GEN_EDX_ARG);
    F_006087d0(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,*(undefined4 *)(uVar9 + (*(uint *)(gen_frame + 0x34)) * 4));
    (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x54));
    fVar13 = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0))))) * ((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0))))))));
    (*(float *)(gen_frame + 0x1c)) = fVar13;
    pfVar8[0x1c] = fVar13;
    fVar13 = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4))))) * ((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4))))))));
    (*(float *)(gen_frame + 0x20)) = fVar13;
    pfVar8[0x1d] = fVar13;
    fVar13 = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8))))) * ((float10)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8))))))));
    (*(float *)(gen_frame + 0x24)) = fVar13;
    pfVar8[0x1e] = fVar13;
    pfVar8[0x1f] = (*(float *)(gen_frame + 0x54));
    uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4 GEN_EDX_ARG);
    pfVar10 = (float *)F_006087d0(((byte *)(gen_frame + 0xc)) GEN_EDX_ARG,*(undefined4 *)(uVar9 + 0xc00 + (*(uint *)(gen_frame + 0x30)) * 4));
    fVar13 = pfVar10[3];
    (*(float *)(gen_frame + 0x28)) = fVar13;
    fVar1 = (float)((float10)*pfVar10 * (float10)*pfVar10);
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    fVar2 = (float)((float10)pfVar10[1] * (float10)pfVar10[1]);
    (*(float *)(gen_frame + 0x20)) = fVar2;
    fVar3 = pfVar10[2];
    pfVar8[0x20] = fVar1;
    pfVar8[0x21] = fVar2;
    fVar1 = (float)((float10)fVar3 * (float10)fVar3);
    (*(float *)(gen_frame + 0x24)) = fVar1;
    pfVar8[0x22] = fVar1;
    pfVar8[0x23] = fVar13;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x24))) = 0;
  }
  pvVar5 = (*(undefined * PTR32 *)&gen_args[2]);
  pfVar8 = (float *)F_004d9920((*(undefined * PTR32 *)&gen_args[2]) GEN_EDX_ARG,0,0x10,2);
  fVar13 = 0.0;
  if (pfVar8 != (float *)0x0) {
    uVar9 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4 GEN_EDX_ARG);
    (*(undefined * PTR32 *)&gen_args[1]) = *(undefined * PTR32 *)(uVar9 + 0x1000 + (*(uint *)(gen_frame + 0x2c)) * 4);
    puVar11 = (undefined4 *)F_006b2020(&(*(byte * PTR32 *)&gen_args[3]),&(*(undefined * PTR32 *)&gen_args[1]));
    F_006087d0(&(*(float *)(gen_frame + 0x1c)) GEN_EDX_ARG,*puVar11);
    *pfVar8 = (*(float *)(gen_frame + 0x1c));
    pfVar8[1] = (*(float *)(gen_frame + 0x20));
    pfVar8[2] = (*(float *)(gen_frame + 0x24));
    pfVar8[3] = (*(float *)(gen_frame + 0x28));
    *(undefined4 *)((int)pvVar5 + 0x24) = 0;
    fVar13 = (*(float *)(gen_frame + 0x20));
  }
  return (uint)gen_fl2bits(fVar13);
}

/* ref: FUN_0069f8d0 */
GEN_FRAME uint GEN_THISCALL F_0069f8d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x69f8d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  if ((*(uint *)&REFG(undefined, 0x1488308) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x1488308) = *(uint *)&REFG(undefined, 0x1488308) | 1;
    (*(uint *)(gen_frame + 0x8)) = (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
    (*(uint *)(gen_frame + 0x4)) = 0x1ff;
    puVar2 = &(*(uint *)(gen_frame + 0x8));
    if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
      puVar2 = &(*(uint *)(gen_frame + 0x4));
    }
    uVar1 = *puVar2;
    (*(uint *)(gen_frame + 0x8)) = uVar1;
    (*(uint *)(gen_frame + 0x4)) = 0xfffffe00;
    puVar2 = &(*(uint *)(gen_frame + 0x4));
    if (-0x201 < (int)uVar1) {
      puVar2 = &(*(uint *)(gen_frame + 0x8));
    }
    REFG(undefined4, 0x1488304) = (*puVar2 & 0x3ff) << 10 | 0x1ea;
  }
  uVar1 = *((uint *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  *((uint *)GEN_TOP((uVar1 + 0x2ac + *(int *)((int)this + 0xc4) * 8))) = REFG(undefined4, 0x1488304) & 0xfffffff;
  iVar3 = param_1;
  if (param_1 == 0) {
    iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0x44) + 0xfc)));
  }
  *((int *)GEN_TOP((uVar1 + 0x2a8 + *(int *)((int)this + 0xc4) * 8))) = iVar3;
  if (param_2 == 0) {
    *((undefined4 *)GEN_TOP((uVar1 + 0xa8 + *(int *)((int)this + 0xc0) * 4))) =
         *(undefined4 *)((int)this + 0x9c);
    return uVar1;
  }
  *((int *)GEN_TOP((uVar1 + 0xa8 + *(int *)((int)this + 0xc0) * 4))) = param_2;
  return uVar1;
}

/* ref: FUN_0069f9d0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0069f9d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x69f9d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 0x78) != 0) {
    F_00691be0(*(int *)((int)this + 0x78),*(undefined4 *)((int)this + 0x7c));
  }
  if (*(int *)((int)this + 0x80) != 0) {
    F_00691be0(*(int *)((int)this + 0x80),*(undefined4 *)((int)this + 0x84));
  }
  if (*(int *)((int)this + 0x88) != 0) {
    F_00691be0(*(int *)((int)this + 0x88),*(undefined4 *)((int)this + 0x8c));
  }
  if (*(int *)((int)this + 0x90) != 0) {
    F_00691be0(*(int *)((int)this + 0x90),*(undefined4 *)((int)this + 0x94));
  }
  return;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf18 */
GEN_FRAME uint GEN_THISCALL F_0069fa40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x69fa40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)(this + 0x78) == (undefined *)0x0) {
    *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
    param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
    param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
    return (uint)param_1;
  }
  F_006b4240(*(undefined * PTR32 *)(this + 0x78) GEN_EDX_FWD,param_1,param_2);
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf5 */
GEN_NOFRAME uint GEN_THISCALL F_0069fa90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x69fa90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  this[100] = (undefined1)((byte)this[100] & 0xf7);
  bVar1 = F_00692e40(this GEN_EDX_FWD);
  if (bVar1 != 0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG);
  }
  uVar2 = 0;
  if (*(int *)(this + 0x2d8) != 0) {
    uVar2 = F_00655df0(this + 0x108,*(int *)(this + 0x2d8));
  }
  return uVar2;
}

/* ref: FUN_0069fad0 */
GEN_FRAME unsigned int F_0069fad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x69fad0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  longlong lVar1;
  ushort uVar2;
  undefined * this;
  int iVar3;
  int * piVar4;
  uint this_00;
  float * pfVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  
  this_00 = (*(uint *)&gen_args[0]);
  if (((((*(byte *)((*(uint *)&gen_args[0]) + 100) & 1) != 0) && ((*(byte *)((*(uint *)&gen_args[0]) + 0x70) >> 2 & 1) != 0)) &&
      (*(char *)((*(uint *)&gen_args[0]) + 0x65) == '\x03')) &&
     (F_00693300((*(uint *)&gen_args[0]) GEN_EDX_ARG,(*(float *)&gen_args[3])), uVar6 = (*(uint *)&gen_args[2]), *(char *)(this_00 + 0x118) != -2)) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this_00 + 0x158))
              (this_00 GEN_EDX_ARG,this_00,(*(int *)&gen_args[1]),(*(uint *)&gen_args[2]),(undefined4)gen_fl2bits((*(float *)&gen_args[3])));
    uVar2 = *(ushort *)(this_00 + 0x11a);
    fVar8 = REFG(float, 0x1087f04);
    if ((*(byte *)(this_00 + 0x70) >> 3 & 1) != 0) {
      fVar8 = REFG(float, 0x1094808);
    }
    fVar8 = ((float)GEN_TOF((((float10)1 - (float10)*(float *)(this_00 + 0x298)) * (float10)fVar8)));
    (*(float *)(gen_frame + 0x18)) = fVar8;
    (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x8)) + 4)) = 0;
    (*(ulonglong *)(gen_frame + 0x8)) = (ulonglong)(uint)(*(ulonglong *)(gen_frame + 0x8));
    (*(uint *)&gen_args[0]) = (uint)gen_fl2bits((float)((float10)((float)GEN_TOF(SQRT((float10)(*(float *)&gen_args[3])))) *
                                       (float10)*(double *)&REFG(undefined, 0x10ac178)));
    pfVar5 = (float *)&(*(uint *)&gen_args[0]);
    if (!((float10)(float)((float10)((float)GEN_TOF(SQRT((float10)(*(float *)&gen_args[3])))) *
                          (float10)*(double *)&REFG(undefined, 0x10ac178)) < (float10)1)) {
      pfVar5 = &(*(float *)(gen_frame + 0x14));
    }
    if (!(0.0 < *pfVar5)) {
      pfVar5 = (float *)((int)&(*(ulonglong *)(gen_frame + 0x8)) + 4);
    }
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x8)) + 4)) = gen_x87_cw | 0xc00;
    lVar1 = (longlong)TRUNC(((float10)1 - (float10)*pfVar5) * (float10)*(double *)&REFG(undefined, 0x10920e0));
    (*(ulonglong *)(gen_frame + 0x8)) = lVar1;
    lVar1 = (*(ulonglong *)(gen_frame + 0x8));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x8)) + 0)) = (uint)lVar1;
    (*(uint *)&gen_args[0]) = (uint)(*(ulonglong *)(gen_frame + 0x8)) << 4;
    (*(ulonglong *)(gen_frame + 0x8)) = lVar1;
    if (uVar2 == 0xffff) {
      this = *(undefined * PTR32 *)(this_00 + 0x168);
      (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
      uVar6 = F_004d9920(this GEN_EDX_ARG,0,0x30,2);
      if (uVar6 != 0) {
        F_005ffc50(uVar6,this_00 + 0x280);
        *(float *)(uVar6 + 0xc) = ((float)GEN_TOF(((float10)*(float *)(uVar6 + 0xc) * (float10)(*(float *)(gen_frame + 0x18)))));
        *(undefined4 *)(uVar6 + 0x10) = *(undefined4 *)(this_00 + 0x2a0);
        *(undefined4 *)(uVar6 + 0x14) = *(undefined4 *)(this_00 + 0x2a4);
        *(undefined4 *)(uVar6 + 0x18) = *(undefined4 *)(this_00 + 0x2a8);
        *(undefined4 *)(uVar6 + 0x1c) = *(undefined4 *)(this_00 + 0x2ac);
        *(undefined4 *)(uVar6 + 0x20) = *(undefined4 *)(this_00 + 0x2b0);
        *(undefined4 *)(uVar6 + 0x24) = *(undefined4 *)(this_00 + 0x2b4);
        *(undefined4 *)(uVar6 + 0x28) = *(undefined4 *)(this_00 + 0x2b8);
        *(undefined4 *)(uVar6 + 0x2c) = *(undefined4 *)(this_00 + 700);
        *((undefined4 *)GEN_TOP((*(int *)(this_00 + 0x168) + 0x24))) = 0;
      }
      uVar6 = *(uint *)(this_00 + 0x74);
      iVar3 = *(int *)(this_00 + 0x7c);
      uVar7 = 0;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x8)) + 4)) = uVar6;
      (*(ulonglong *)(gen_frame + 0x8)) = CONCAT44(uVar6,(uint)(*(ulonglong *)(gen_frame + 0x8)));
      if (uVar6 != 0) {
        do {
          if (*(int *)(iVar3 + uVar7 * 4) != 0) {
            (*(float *)(gen_frame + 0x14)) = gen_bits2f((uint)((!GEN_ISNAN(*(double *)&REFG(undefined, 0x10b3238)) && !GEN_ISNAN((double)(*(float *)(gen_frame + 0x18)))) &&
                                       !(*(double *)&REFG(undefined, 0x10b3238) <= (double)(*(float *)(gen_frame + 0x18)))) << 0x1e |
                                 ((uint)gen_fl2bits((*(float *)(gen_frame + 0x14))) ^
                                 ((uVar6 - uVar7) + (*(uint *)&gen_args[0]) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0x14)))) &
                                 0x3fffffff) & 0x3fffffff);
            piVar4 = *(int * PTR32 *)(iVar3 + uVar7 * 4);
            ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x14))
                      (piVar4 GEN_EDX_ARG,(*(uint *)&gen_args[2]),(undefined4)gen_fl2bits((*(float *)&gen_args[3])),
                       (uint)*(byte *)(this_00 + 0x118),this_00 + 0x30,&(*(undefined * PTR32 *)(gen_frame + 0x10)));
            uVar6 = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x8)) + 4));
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar6);
      }
    }
    else {
      F_00692150(this_00 GEN_EDX_ARG,(uint)uVar2,uVar6,(*(float *)&gen_args[3]),fVar8,(*(uint *)&gen_args[0]));
    }
    F_006b5040((undefined *)this_00 GEN_EDX_ARG);
    if (((*(int *)&gen_args[1]) == 0x1e) && (((*(uint *)&gen_args[2]) & 0x3000000) != 0)) {
      *(byte *)(this_00 + 100) = *(byte *)(this_00 + 100) | 8;
      F_00692ab0(this_00 GEN_EDX_ARG,(*(float *)&gen_args[3]));
    }
  }
  return;
}

/* ref: FUN_0069fd40 */
GEN_FRAME uint GEN_THISCALL F_0069fd40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x69fd40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  float10 fVar3;
  float fVar4;
  
  if (*(undefined * PTR32 *)((int)this + 0x160) != (undefined *)0x0) {
    F_006387b0(*(undefined * PTR32 *)((int)this + 0x160) GEN_EDX_FWD,(int)this + 0x30,
                 (undefined4)gen_fl2bits((float)(float10)0));
  }
  uVar1 = REFG(undefined4, 0x1371290);
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  fVar4 = REFG(float, 0x1087f04);
  if (*(int *)((int)this + 0x2d8) == 0) {
    fVar3 = F_004aa670(uVar1 GEN_EDX_ARG,(int)this + 0x30);
    fVar4 = (float)fVar3;
  }
  *(float *)((int)this + 0x2ac) = fVar4;
  if (*(int *)((int)this + 0x2d8) == 0) {
    uVar1 = *(undefined4 *)((int)this + 0x160);
  }
  else {
    uVar1 = 0;
  }
  F_00691910(REFG(undefined4, 0x137129c) GEN_EDX_ARG,(int)this + 0x2b0,uVar1);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x15c))(this GEN_EDX_ARG);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x94))(this GEN_EDX_ARG);
  if ((char)uVar2 != '\0') {
    uVar2 = F_00692000(this GEN_EDX_ARG);
  }
  *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) | 2;
  return uVar2;
}

/* ref: FUN_0069fe00 */
GEN_FRAME uint F_0069fe00(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x69fe00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00693180(param_1 GEN_EDX_ARG,param_2);
  uVar2 = (uint)*(ushort *)(param_1 + 0x11a);
  *(char *)(param_1 + 0x118) = (char)uVar1;
  uVar1 = uVar2;
  if ((*(ushort *)(param_1 + 0x11a) != 0xffff) &&
     (uVar1 = 0, REFG(int, 0x137127c) + 0x10640 + uVar2 * 0x18 != 0)) {
    uVar1 = F_00621a50((undefined *)(REFG(int, 0x137127c) + 0x1061c) GEN_EDX_ARG,uVar2);
    *(undefined2 *)(param_1 + 0x11a) = 0xffff;
  }
  return uVar1;
}

/* ref: FUN_0069fe60 */
GEN_FRAME uint GEN_THISCALL F_0069fe60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x69fe60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint in_EAX = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0x2d0) != (undefined *)0x0) {
    F_00693890(*(undefined * PTR32 *)((int)this + 0x2d0) GEN_EDX_FWD,param_1 + 10);
    in_EAX = *(uint *)((int)this + 0x2d0);
    if (*(short *)(in_EAX + 0x42) == *(short *)(in_EAX + 0x40)) {
      *(uint *)((int)this + 0x2c8) = *(uint *)((int)this + 0x2c8) & 0x7fffffff;
    }
  }
  if (*(undefined * PTR32 *)((int)this + 0xe4) != (undefined *)0x0) {
    in_EAX = F_00b84d90(*(undefined * PTR32 *)((int)this + 0xe4) GEN_EDX_ARG,param_1);
  }
  return in_EAX;
}

/* ref: FUN_0069feb0 */
GEN_NOFRAME uint GEN_THISCALL F_0069feb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x69feb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0x2d0) != (undefined *)0x0) {
    F_00693890(*(undefined * PTR32 *)((int)this + 0x2d0) GEN_EDX_FWD,0xf);
    in_EAX = *(uint *)((int)this + 0x2d0);
    if (*(short *)(in_EAX + 0x42) == *(short *)(in_EAX + 0x40)) {
      *(uint *)((int)this + 0x2c8) = *(uint *)((int)this + 0x2c8) & 0x7fffffff;
    }
  }
  return in_EAX;
}

/* ref: FUN_0069fee0 */
GEN_FRAME uint GEN_THISCALL F_0069fee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x69fee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0x2d0) != (undefined *)0x0) {
    F_00693890(*(undefined * PTR32 *)((int)this + 0x2d0) GEN_EDX_FWD,param_1);
    if (*((short *)GEN_TOP((*(int *)((int)this + 0x2d0) + 0x42))) ==
        *((short *)GEN_TOP((*(int *)((int)this + 0x2d0) + 0x40)))) {
      *(uint *)((int)this + 0x2c8) = *(uint *)((int)this + 0x2c8) & 0x7fffffff;
    }
  }
  uVar2 = F_009f0670((undefined *)(param_1 * 0x88 + 0x418 + (int)this) GEN_EDX_ARG,0);
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    bVar1 = F_00622fe0(*(undefined * PTR32 *)((int)this + 0x78) GEN_EDX_ARG,param_1,0);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_0069ff40 */
GEN_FRAME unsigned int GEN_THISCALL F_0069ff40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x69ff40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x2d0) != (undefined *)0x0) {
    F_00693890(*(undefined * PTR32 *)((int)this + 0x2d0) GEN_EDX_FWD,param_1 + 5);
    if (*((short *)GEN_TOP((*(int *)((int)this + 0x2d0) + 0x42))) ==
        *((short *)GEN_TOP((*(int *)((int)this + 0x2d0) + 0x40)))) {
      *(uint *)((int)this + 0x2c8) = *(uint *)((int)this + 0x2c8) & 0x7fffffff;
    }
  }
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_0061edb0(*(undefined * PTR32 *)((int)this + 0x78) GEN_EDX_ARG,param_1,0);
  }
  return;
}

/* ref: FUN_0069ff90 */
GEN_FRAME uint GEN_THISCALL F_0069ff90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x69ff90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  byte bVar7;
  ushort uVar8;
  int iVar9;
  int * piVar10;
  uint uVar11;
  int local_10;
  
  bVar7 = (byte)param_1;
  piVar10 = ((int *)GEN_TOP(((param_1 + 0x17) * 0x10 + (int)this)));
  iVar9 = 3;
  local_10 = 4;
  do {
    if (*(int *)((int)this + 0x2d4) != 0) {
      iVar4 = param_1 * 0x48;
      iVar1 = iVar4 + *(int *)((int)this + 0x2d4);
      uVar8 = 0 << ((byte)iVar9 & 0x1f);
      uVar5 = ~(1 << ((byte)iVar9 & 0x1f));
      *(ushort *)(iVar1 + 0x40) = uVar5 & *(ushort *)(iVar1 + 0x40) | uVar8;
      *(ushort *)(iVar1 + 0x42) = uVar5 & *(ushort *)(iVar1 + 0x42) | uVar8;
      *(ushort *)(iVar1 + 0x44) = *(ushort *)(iVar1 + 0x44) & uVar5 | uVar8;
      iVar2 = *(int *)(iVar1 + iVar9 * 4);
      if (iVar2 != 0) {
        F_0050c620(iVar2,0,0);
        *(undefined4 *)(iVar1 + iVar9 * 4) = 0;
      }
      if (*((short *)GEN_TOP((*(int *)((int)this + 0x2d4) + 0x42 + iVar4))) ==
          *((short *)GEN_TOP((*(int *)((int)this + 0x2d4) + 0x40 + iVar4)))) {
        *(uint *)((int)this + 0x2c8) =
             ~(1 << (bVar7 & 0x1f) | 1U >> 0x20 - (bVar7 & 0x1f)) & *(uint *)((int)this + 0x2c8) |
             0 << (bVar7 & 0x1f);
      }
    }
    if (piVar10[0x5b] != 0) {
      F_0050c620(piVar10[0x5b],0,0);
      piVar10[0x5b] = 0;
    }
    piVar3 = (int *)*piVar10;
    if (piVar3 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG);
      *piVar10 = 0;
    }
    piVar10 = piVar10 + 1;
    iVar9 = iVar9 + 1;
    local_10 = local_10 - 1;
  } while (local_10 != 0);
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x7c) + param_1 * 4))) != 0) {
    uVar6 = *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x7c) + param_1 * 4))) + 0x4c)));
    uVar11 = 0;
    if (uVar6 != 0) {
      do {
        iVar9 = *((int *)GEN_TOP((*(int *)((int)this + 0x7c) + param_1 * 4)));
        iVar1 = *(int *)(iVar9 + 0x48);
        if (*(int *)(iVar1 + uVar11 * 4) != 0) {
          piVar10 = *(int * PTR32 *)(iVar1 + uVar11 * 4);
          ((GEN_TCODE *)*(gen_code32 *)(*piVar10 + 0xc))(piVar10 GEN_EDX_ARG);
        }
        *((undefined4 *)GEN_TOP((*(int *)(iVar9 + 0x48) + uVar11 * 4))) = 0;
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar6);
    }
  }
  uVar6 = ~(1 << (bVar7 & 0x1f)) & *(uint *)((int)this + 0x2cc) | 0 << (bVar7 & 0x1f);
  *(uint *)((int)this + 0x2cc) = uVar6;
  return uVar6;
}

/* ref: FUN_006a0140 */
GEN_FRAME uint GEN_THISCALL F_006a0140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a0140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  int local_c;
  
  bVar5 = (byte)param_1;
  iVar7 = 3;
  local_c = 4;
  do {
    if (*(int *)((int)this + 0x2d4) != 0) {
      iVar3 = param_1 * 0x48;
      iVar1 = iVar3 + *(int *)((int)this + 0x2d4);
      uVar6 = 0 << ((byte)iVar7 & 0x1f);
      uVar4 = ~(1 << ((byte)iVar7 & 0x1f));
      *(ushort *)(iVar1 + 0x40) = uVar4 & *(ushort *)(iVar1 + 0x40) | uVar6;
      *(ushort *)(iVar1 + 0x42) = uVar4 & *(ushort *)(iVar1 + 0x42) | uVar6;
      *(ushort *)(iVar1 + 0x44) = *(ushort *)(iVar1 + 0x44) & uVar4 | uVar6;
      iVar2 = *(int *)(iVar1 + iVar7 * 4);
      if (iVar2 != 0) {
        F_0050c620(iVar2,0,0);
        *(undefined4 *)(iVar1 + iVar7 * 4) = 0;
      }
      if (*((short *)GEN_TOP((*(int *)((int)this + 0x2d4) + 0x42 + iVar3))) ==
          *((short *)GEN_TOP((*(int *)((int)this + 0x2d4) + 0x40 + iVar3)))) {
        *(uint *)((int)this + 0x2c8) =
             ~(1 << (bVar5 & 0x1f) | 1U >> 0x20 - (bVar5 & 0x1f)) & *(uint *)((int)this + 0x2c8) |
             0 << (bVar5 & 0x1f);
      }
    }
    iVar7 = iVar7 + 1;
    local_c = local_c - 1;
  } while (local_c != 0);
  *(uint *)((int)this + 0x2cc) =
       ~(1 << (bVar5 & 0x1f)) & *(uint *)((int)this + 0x2cc) | 0 << (bVar5 & 0x1f);
  return (uint)this;
}

/* ref: FUN_006a0240 */
GEN_FRAME uint GEN_THISCALL F_006a0240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a0240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x2d4) != 0) {
    iVar1 = param_1 * 0x48;
    F_00693890(((undefined *)GEN_TOP((iVar1 + *(int *)((int)this + 0x2d4)))) GEN_EDX_FWD,0);
    uVar2 = *(uint *)((int)this + 0x2d4);
    if (*(short *)(uVar2 + 0x42 + iVar1) == *(short *)(uVar2 + 0x40 + iVar1)) {
      uVar2 = 0 << ((byte)param_1 & 0x1f);
      *(uint *)((int)this + 0x2c8) =
           ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x2c8) | uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_006a02a0 */
GEN_FRAME uint GEN_THISCALL F_006a02a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a02a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x2d4) != 0) {
    iVar1 = param_1 * 0x48;
    F_00693890(((undefined *)GEN_TOP((iVar1 + *(int *)((int)this + 0x2d4)))) GEN_EDX_FWD,2);
    uVar2 = *(uint *)((int)this + 0x2d4);
    if (*(short *)(uVar2 + 0x42 + iVar1) == *(short *)(uVar2 + 0x40 + iVar1)) {
      uVar2 = 0 << ((byte)param_1 & 0x1f);
      *(uint *)((int)this + 0x2c8) =
           ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x2c8) | uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_006a0300 */
GEN_FRAME unsigned int GEN_THISCALL F_006a0300(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a0300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_c;
  
  if (*(int *)((int)this + 0x2c8) == 0) {
    if (*(int *)((int)this + 0x2d4) != 0) {
      local_c = *(int *)((int)this + 0x74);
      if (local_c != 0) {
        iVar3 = 0;
        do {
          iVar1 = iVar3 + *(int *)((int)this + 0x2d4);
          uVar4 = 0;
          do {
            iVar2 = *(int *)(iVar1 + uVar4 * 4);
            if (iVar2 != 0) {
              F_0050c620(iVar2,0,0);
              *(undefined4 *)(iVar1 + uVar4 * 4) = 0;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < 0x10);
          iVar3 = iVar3 + 0x48;
          local_c = local_c - 1;
        } while (local_c != 0);
      }
      if (*(int *)((int)this + 0x2d4) != 0) {
        iVar3 = *(int *)((int)this + 0x2d4) - 4;
        if (iVar3 != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,iVar3);
        }
        *(undefined4 *)((int)this + 0x2d4) = 0;
      }
    }
    iVar3 = *(int *)((int)this + 0x2d0);
    if (iVar3 != 0) {
      uVar4 = 0;
      do {
        iVar1 = *(int *)(iVar3 + uVar4 * 4);
        if (iVar1 != 0) {
          F_0050c620(iVar1,0,0);
          *(undefined4 *)(iVar3 + uVar4 * 4) = 0;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0x10);
      if (*(int *)((int)this + 0x2d0) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                  (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,*(int *)((int)this + 0x2d0));
        *(undefined4 *)((int)this + 0x2d0) = 0;
      }
    }
  }
  return;
}

/* ref: FUN_006a0400 */
GEN_FRAME uint GEN_THISCALL F_006a0400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6a0400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  int iVar2;
  undefined4 * puVar3;
  
  if (*(int *)((int)this + 0x2d4) != 0) {
    iVar2 = param_1 * 0x48;
    F_00693890(((undefined *)GEN_TOP((iVar2 + *(int *)((int)this + 0x2d4)))) GEN_EDX_FWD,param_2 + 3);
    if (*((short *)GEN_TOP((*(int *)((int)this + 0x2d4) + 0x42 + iVar2))) ==
        *((short *)GEN_TOP((*(int *)((int)this + 0x2d4) + 0x40 + iVar2)))) {
      *(uint *)((int)this + 0x2c8) =
           ~(1 << ((byte)param_1 & 0x1f)) & *(uint *)((int)this + 0x2c8) |
           0 << ((byte)param_1 & 0x1f);
    }
  }
  piVar1 = ((int *)GEN_TOP(((int)this + (param_2 + param_1 * 4) * 4 + 0x2dc)));
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    F_0050c620(iVar2,0,0);
    *piVar1 = 0;
  }
  iVar2 = param_2 + 0x5c + param_1 * 4;
  piVar1 = *(int * PTR32 *)((int)this + iVar2 * 4);
  puVar3 = (undefined4 *)((int)this + iVar2 * 4);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
    *puVar3 = 0;
  }
  if ((*((int *)GEN_TOP((*(int *)((int)this + 0x7c) + param_1 * 4))) != 0) &&
     (iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x7c) + param_1 * 4))), param_2 < *(uint *)(iVar2 + 0x4c))
     ) {
    if (*((int *)GEN_TOP((*(int *)(iVar2 + 0x48) + param_2 * 4))) != 0) {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(iVar2 + 0x48) + param_2 * 4)));
      puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG)));
    }
    *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x48) + param_2 * 4))) = 0;
  }
  return (uint)puVar3;
}

/* ref: FUN_006a04e0 */
GEN_FRAME uint GEN_THISCALL F_006a04e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a04e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 in_EAX = 0;
  uint uVar3;
  uint uVar4;
  undefined4 local_8;
  
  iVar1 = *(int *)((int)this + 0x80);
  uVar2 = *(uint *)((int)this + 0x74);
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),
                   *(byte *)((int)this + 0x70) >> 2 & *(byte *)((int)this + 100)) & 0xffffff01;
  uVar4 = 0;
  local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),(char)uVar3);
  if (uVar2 != 0) {
    do {
      this_00 = *(undefined * PTR32 *)(iVar1 + uVar4 * 4);
      if (this_00 != (undefined *)0x0) {
        uVar3 = F_009bc190(this_00 GEN_EDX_FWD,local_8);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return uVar3;
}

/* ref: FUN_006a0520 */
GEN_FRAME unsigned int GEN_THISCALL F_006a0520(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a0520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = *(int *)((int)this + 0x7c);
  uVar3 = *(uint *)((int)this + 0x74);
  bVar1 = *(byte *)((int)this + 100);
  uVar5 = 0;
  if (uVar3 != 0) {
    do {
      iVar4 = *(int *)(iVar2 + uVar5 * 4);
      if (iVar4 != 0) {
        *(uint *)(iVar4 + 0x10) =
             (uint)((bVar1 >> 1 & 1) != 0) << 6 | *(uint *)(iVar4 + 0x10) & 0xffffffbf;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  return 0;
}

/* ref: FUN_006a0570 */
GEN_FRAME float10 GEN_THISCALL F_006a0570(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x6a0570u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  uint uVar3;
  float10 fVar4;
  
  if ((*(byte *)(param_1 + 0x1c) >> 4 & 1) != 0) {
    return (float10)0;
  }
  fVar1 = *(float *)(REFG(int, 0x1371278) + 0x2c);
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x74))(param_1 GEN_EDX_FWD);
  fVar4 = (float10)(int)uVar3;
  if ((int)uVar3 < 0) {
    fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar4 = ((float10)GEN_TOD(pow((float10)param_2,
                               (float10)((float)GEN_TOF(((fVar4 * (float10)*(double *)&REFG(undefined, 0x10ac058)) *
                                                (float10)fVar1 + (float10)REFG(double, 0x1088130)))))));
  return (float10)(float)fVar4;
}

/* ref: FUN_006a05e0 */
GEN_FRAME uint GEN_THISCALL F_006a05e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a05e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  undefined * pvVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4))) != 0) {
    F_009bc2a0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4))) GEN_EDX_FWD);
    if (*((int *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4))) != 0) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4)));
      if (pvVar2 != (undefined *)0x0) {
        F_009cfa70(pvVar2 GEN_EDX_ARG);
        F_00406ad0(pvVar2);
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4))) = 0;
    }
  }
  F_004ff2f0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x138))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),0x100,param_1,((undefined1 *)(gen_frame + 0x4)));
  uVar3 = 0;
  if (uVar1 != 0) {
    pvVar2 = (undefined *)F_009a2040(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x8)));
    uVar3 = F_009cfa30(pvVar2 GEN_EDX_ARG,(int)this + 0x84);
    *((uint *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4))) = uVar3;
    F_009bc190(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4))) GEN_EDX_ARG,
                 (uint)(*(byte *)((int)this + 0x70) >> 2 & *(byte *)((int)this + 100) & 1));
    F_009bc1e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4))) GEN_EDX_ARG,
                 (uint)(*(int *)((int)this + 0x2d8) != 0));
    F_00982ca0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x80) + param_1 * 4))) GEN_EDX_ARG,2,0,(float)(float10)1,
                 (float)(float10)0);
    uVar3 = F_00982b20(pvVar2 GEN_EDX_ARG);
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_006a0720 */
GEN_FRAME uint GEN_THISCALL F_006a0720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6a0720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  undefined * this_00;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *(uint *)((int)this + 0x7c);
  uVar2 = *(uint *)((int)this + 0x74);
  uVar5 = 0;
  uVar4 = uVar1;
  if (uVar2 != 0) {
    do {
      this_00 = *(undefined * PTR32 *)(uVar1 + uVar5 * 4);
      if (this_00 != (undefined *)0x0) {
        uVar3 = F_0065bce0(this_00 GEN_EDX_FWD,param_1);
        uVar4 = (uint)uVar3;
        if (uVar3 != 0xffff) {
          uVar4 = (uint)((char)param_2 != '\0') << ((byte)uVar3 & 0x1f);
          *(uint *)((int)this_00 + 0x50) =
               ~(1 << ((byte)uVar3 & 0x1f)) & *(uint *)((int)this_00 + 0x50) | uVar4;
          *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return uVar4;
}

/* ref: FUN_006a0790 */
GEN_FRAME byte GEN_THISCALL F_006a0790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6a0790u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  undefined * this_00;
  byte bVar2;
  ushort uVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(short *)((int)this + 0x40) == 0) {
    return 0;
  }
  if (*(short *)((int)this + 0x42) == *(short *)((int)this + 0x40)) {
    return 1;
  }
  uVar6 = 0;
  do {
    bVar2 = (byte)uVar6;
    if (((~(byte)(*(ushort *)((int)this + 0x40) >> (bVar2 & 0x1f)) |
         (byte)(*(ushort *)((int)this + 0x42) >> (bVar2 & 0x1f))) & 1) == 0) {
      piVar4 = ((int *)GEN_TOP((*(int *)((int)this + uVar6 * 4) + 0x88)));
      iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar4), 0);
      if (iVar1 == 2) {
        piVar4 = ((int *)GEN_TOP((*(int *)((int)this + uVar6 * 4) + 0x8c)));
        iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar4), 0);
        if (iVar1 < 8) {
          piVar4 = *(int * PTR32 *)((int)this + uVar6 * 4);
          if (piVar4[2] == 0x6d646c) {
            if ((*(ushort *)((int)this + 0x44) >> (bVar2 & 0x1f) & 1) != 0) {
              F_00502350(piVar4 GEN_EDX_FWD,param_1);
              *(ushort *)((int)this + 0x44) =
                   ~(1 << (bVar2 & 0x1f)) & *(ushort *)((int)this + 0x44) | 0 << (bVar2 & 0x1f);
            }
            uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x20))(piVar4 GEN_EDX_ARG);
            if ((byte)param_3 < (byte)uVar5) goto LAB_006a08c3;
          }
          this_00 = *(undefined * PTR32 *)((int)this + uVar6 * 4);
          if ((*(int *)((int)this_00 + 8) == 0x6d74726c) &&
             ((*(ushort *)((int)this + 0x44) >> (bVar2 & 0x1f) & 1) != 0)) {
            F_00502c10(this_00 GEN_EDX_ARG,param_2);
            *(ushort *)((int)this + 0x44) =
                 ~(1 << (bVar2 & 0x1f)) & *(ushort *)((int)this + 0x44) | 0 << (bVar2 & 0x1f);
          }
          uVar3 = 1 << (bVar2 & 0x1f);
          *(ushort *)((int)this + 0x42) = ~uVar3 & *(ushort *)((int)this + 0x42) | uVar3;
        }
        else {
          F_00693890(this GEN_EDX_ARG,uVar6);
        }
      }
    }
LAB_006a08c3: ;
    uVar6 = uVar6 + 1;
    if (0xf < uVar6) {
      return *(short *)((int)this + 0x42) == *(short *)((int)this + 0x40);
    }
  } while( true );
}

/* ref: FUN_006a08f0 */
GEN_FRAME uint GEN_THISCALL F_006a08f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a08f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  
  if (*(int *)this < 0) {
    uVar2 = F_006767d0((undefined *)(REFG(int, 0x137128c) + 0x3d0) GEN_EDX_FWD);
    *(uint *)this = uVar2;
    if ((int)uVar2 < 0) {
      return uVar2;
    }
  }
  uVar2 = F_00678120((undefined *)(REFG(int, 0x137128c) + 0x3d0) GEN_EDX_ARG,*(undefined4 *)this,param_1 + 0x30);
  if (-1 < (int)uVar2) {
    bVar1 = (uVar2 != 0) << 4 | *(byte *)(param_1 + 100) & 0xef;
    uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar1);
    *(byte *)(param_1 + 100) = bVar1;
  }
  return uVar2;
}

/* ref: Client::Graphics::Scene::Human::vf60 */
GEN_FRAME uint GEN_THISCALL F_006a0950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a0950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined * this_00;
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  int iVar4;
  
  this_00 = REFG(void * PTR32, 0x137129c);
  iVar4 = *((int *)GEN_TOP((*(int *)(*param_1 + 0x48) + param_1[1] * 4)));
  uVar1 = *(uint *)(*param_1 + 0x74);
  if (uVar1 < 10) {
    if (*((int *)GEN_TOP((*(int *)(iVar4 + 8) + 0xa4))) == *((int *)GEN_TOP(((int)REFG(void * PTR32, 0x137129c) + 0x54)))) {
      uVar3 = *((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137129c) + 0x98)));
      iVar4 = *(int *)(this + 0x7f4);
      goto LAB_006a0a53;
    }
    if ((*(int *)(this + 0x7f8) != 0) &&
       ((*(uint *)(this + 0x7fc) >> ((byte)uVar1 & 0x1f) & 1) != 0)) {
      uVar1 = F_0069f8d0(REFG(void * PTR32, 0x137129c) GEN_EDX_FWD,*(int *)(this + 0x7f8),
                           *((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137129c) + 0x9c))));
      return uVar1;
    }
    if (*(int *)(this + uVar1 * 4 + 0x7bc) != 0) {
      uVar1 = F_0069f8d0(REFG(void * PTR32, 0x137129c) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(this + uVar1 * 4 + 0x7bc) + 0xfc))),
                           *((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137129c) + 0x9c))));
      return uVar1;
    }
    uVar3 = *((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137129c) + 0x9c)));
  }
  else {
    if (uVar1 != 0xb) {
      return (uint)this;
    }
    if (*((int *)GEN_TOP((*(int *)(iVar4 + 8) + 0xa4))) != *((int *)GEN_TOP(((int)REFG(void * PTR32, 0x137129c) + 0x54)))) {
      *(byte *)param_1[2] = *(byte *)param_1[2] & 0xfd;
    }
    piVar2 = ((int *)GEN_TOP((*(int *)(this + 0x7f0) + 0x88)));
    iVar4 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
    if (iVar4 == 2) {
      piVar2 = ((int *)GEN_TOP((*(int *)(this + 0x7f0) + 0x8c)));
      iVar4 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
      if (iVar4 < 8) {
        uVar3 = *(undefined4 *)(this + 0x7ec);
        iVar4 = *(int *)(this + 0x7f0);
        goto LAB_006a0a53;
      }
    }
    uVar3 = *(undefined4 *)(this + 0x7ec);
  }
  iVar4 = *(int *)((int)this_00 + 0x44);
LAB_006a0a53: ;
  uVar1 = F_0069f8d0(this_00 GEN_EDX_ARG,*(undefined4 *)(iVar4 + 0xfc),uVar3);
  return uVar1;
}

/* ref: Client::Graphics::Scene::Human::vf63 */
GEN_FRAME byte GEN_THISCALL F_006a0a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6a0a70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  if (9 < param_1) {
    return 0;
  }
  F_006940c0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x818) + param_1 * 0xc))) = *param_2;
  uVar1 = 1 << ((byte)param_1 & 0x1f);
  *(uint *)(this + 0x74c) = ~uVar1 & *(uint *)(this + 0x74c) | uVar1;
  return 1;
}

/* ref: Client::Graphics::Scene::Human::vf66 */
GEN_FRAME uint GEN_THISCALL F_006a0ac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6a0ac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  gen_size32 param_2 = (gen_size32)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  short sVar4;
  char * _Format;
  uint uVar5;
  
  switch((unsigned int)(uintptr_t)(param_3)) {
  case 0: ;
    F_00c472af(param_1,param_2,"chara/human/c%04d/skeleton/base/b0001/skl_c%04db0001.sklb",
               (uint)*(ushort *)(this + 0x778),(uint)*(ushort *)(this + 0x778));
    return (uint)param_1;
  case 1: ;
    uVar2 = F_00694050((uint)*(ushort *)(this + 0x778),1,(uint)*(ushort *)(this + 0x77c));
    if ((short)uVar2 < 2) {
      return 0;
    }
    F_00c472af(param_1,param_2,"chara/human/c%04d/skeleton/face/f%04d/skl_c%04df%04d.sklb",
               (uint)*(ushort *)(this + 0x778),(uint)uVar2,(uint)*(ushort *)(this + 0x778),
               (uint)uVar2);
    return (uint)param_1;
  case 2: ;
    uVar2 = F_00694050((uint)*(ushort *)(this + 0x778),2,(uint)*(ushort *)(this + 0x77a));
    if ((short)uVar2 < 2) {
      return 0;
    }
    F_00c472af(param_1,param_2,"chara/human/c%04d/skeleton/hair/h%04d/skl_c%04dh%04d.sklb",
               (uint)*(ushort *)(this + 0x778),(uint)uVar2,(uint)*(ushort *)(this + 0x778),
               (uint)uVar2);
    return (uint)param_1;
  case 3: ;
    if (*(int *)(this + 0x818) == 0) {
      uVar1 = F_00691b90(REFG(void * PTR32, 0x137129c) GEN_EDX_ARG,(uint)*(ushort *)(this + 0x778),0,
                           (uint)*(ushort *)(this + 0x750));
      uVar2 = *(ushort *)(this + 0x750);
    }
    else {
      uVar1 = (*(ushort * PTR32 *)(this + 0x818))[5];
      uVar2 = **(ushort * PTR32 *)(this + 0x818);
    }
    uVar3 = (uint)uVar1;
    uVar2 = F_00694050(uVar3,3,(uint)uVar2);
    uVar5 = (uint)uVar2;
    if ((short)uVar2 < 2) {
      return 0;
    }
    _Format = "chara/human/c%04d/skeleton/met/m%04d/skl_c%04dm%04d.sklb";
    break;
  case 4: ;
    if (*(int *)(this + 0x818) == 0) {
      uVar2 = F_00691b90(REFG(void * PTR32, 0x137129c) GEN_EDX_ARG,(uint)*(ushort *)(this + 0x778),1,
                           (uint)*(ushort *)(this + 0x754));
      sVar4 = *(short *)(this + 0x754);
    }
    else {
      uVar2 = *((ushort *)GEN_TOP((*(int *)(this + 0x818) + 0x16)));
      sVar4 = *((short *)GEN_TOP((*(int *)(this + 0x818) + 0xc)));
    }
    uVar3 = (uint)uVar2;
    if (sVar4 != 100) {
      return 0;
    }
    uVar5 = 100;
    _Format = "chara/human/c%04d/skeleton/top/t%04d/skl_c%04dt%04d.sklb";
    break;
  default: ;
    goto switchD_006a0ad7_default;
  }
  F_00c472af(param_1,param_2,_Format,uVar3,uVar5,uVar3,uVar5);
switchD_006a0ad7_default: ;
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::Human::vf68 */
GEN_FRAME uint GEN_THISCALL F_006a0c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6a0c90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  switch((unsigned int)(uintptr_t)(param_3)) {
  case 0: ;
    F_00c472af(param_1,param_2,"chara/human/c%04d/skeleton/base/b0001/skl_c%04db0001.skp",
               (uint)*(ushort *)(this + 0x778),(uint)*(ushort *)(this + 0x778));
    return param_1;
  case 1: ;
    uVar1 = F_00694050((uint)*(ushort *)(this + 0x778),1,(uint)*(ushort *)(this + 0x77c));
    if (1 < (short)uVar1) {
      F_00c472af(param_1,param_2,"chara/human/c%04d/skeleton/face/f%04d/skl_c%04df%04d.skp",
                 (uint)*(ushort *)(this + 0x778),(uint)uVar1,(uint)*(ushort *)(this + 0x778),
                 (uint)uVar1);
      return param_1;
    }
    break;
  case 2: ;
    uVar1 = F_00694050((uint)*(ushort *)(this + 0x778),2,(uint)*(ushort *)(this + 0x77a));
    if (1 < (short)uVar1) {
      F_00c472af(param_1,param_2,"chara/human/c%04d/skeleton/hair/h%04d/skl_c%04dh%04d.skp",
                 (uint)*(ushort *)(this + 0x778),(uint)uVar1,(uint)*(ushort *)(this + 0x778),
                 (uint)uVar1);
      return param_1;
    }
    break;
  case 3: ;
    uVar2 = (uint)**(ushort * PTR32 *)(this + 0x818);
    uVar3 = (uint)(*(ushort * PTR32 *)(this + 0x818))[5];
    F_00c472af(param_1,param_2,"chara/human/c%04d/skeleton/met/m%04d/skl_c%04dm%04d.skp",uVar3,uVar2
               ,uVar3,uVar2);
  default: ;
    return param_1;
  }
  return 0;
}

/* ref: Client::Graphics::Scene::Human::vf69 */
GEN_FRAME uint GEN_THISCALL F_006a0db0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6a0db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  gen_size32 param_2 = (gen_size32)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  short sVar4;
  char * _Format;
  uint uVar5;
  
  switch((unsigned int)(uintptr_t)(param_3)) {
  case 0: ;
    F_00c472af(param_1,param_2,"chara/human/c%04d/skeleton/base/b0001/phy_c%04db0001.phyb",
               (uint)*(ushort *)(this + 0x778),(uint)*(ushort *)(this + 0x778));
    return (uint)param_1;
  case 1: ;
    return 0;
  case 2: ;
    uVar2 = F_00694050((uint)*(ushort *)(this + 0x778),2,(uint)*(ushort *)(this + 0x77a));
    if ((short)uVar2 < 2) {
      return 0;
    }
    F_00c472af(param_1,param_2,"chara/human/c%04d/skeleton/hair/h%04d/phy_c%04dh%04d.phyb",
               (uint)*(ushort *)(this + 0x778),(uint)uVar2,(uint)*(ushort *)(this + 0x778),
               (uint)uVar2);
    return (uint)param_1;
  case 3: ;
    if (*(int *)(this + 0x818) == 0) {
      uVar1 = F_00691b90(REFG(void * PTR32, 0x137129c) GEN_EDX_ARG,(uint)*(ushort *)(this + 0x778),0,
                           (uint)*(ushort *)(this + 0x750));
      uVar2 = *(ushort *)(this + 0x750);
    }
    else {
      uVar1 = (*(ushort * PTR32 *)(this + 0x818))[5];
      uVar2 = **(ushort * PTR32 *)(this + 0x818);
    }
    uVar3 = (uint)uVar1;
    uVar2 = F_00694050(uVar3,3,(uint)uVar2);
    uVar5 = (uint)uVar2;
    if ((short)uVar2 < 2) {
      return 0;
    }
    _Format = "chara/human/c%04d/skeleton/met/m%04d/phy_c%04dm%04d.phyb";
    break;
  case 4: ;
    if (*(int *)(this + 0x818) == 0) {
      uVar2 = F_00691b90(REFG(void * PTR32, 0x137129c) GEN_EDX_ARG,(uint)*(ushort *)(this + 0x778),1,
                           (uint)*(ushort *)(this + 0x754));
      sVar4 = *(short *)(this + 0x754);
    }
    else {
      uVar2 = *((ushort *)GEN_TOP((*(int *)(this + 0x818) + 0x16)));
      sVar4 = *((short *)GEN_TOP((*(int *)(this + 0x818) + 0xc)));
    }
    uVar3 = (uint)uVar2;
    if (sVar4 != 100) {
      return 0;
    }
    uVar5 = 100;
    _Format = "chara/human/c%04d/skeleton/top/t%04d/phy_c%04dt%04d.phyb";
    break;
  default: ;
    goto switchD_006a0dc7_default;
  }
  F_00c472af(param_1,param_2,_Format,uVar3,uVar5,uVar3,uVar5);
switchD_006a0dc7_default: ;
  return (uint)param_1;
}

/* ref: Client::Graphics::Scene::Human::vf70 */
GEN_FRAME uint GEN_THISCALL F_006a0f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6a0f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  ushort uVar1;
  
  if (param_3 == 0) {
    F_00c472af(param_1,param_2,"chara/human/c%04d/animation/%s/pap/dummy.pap",
               (uint)*(ushort *)(this + 0x778),param_4);
  }
  else if (param_3 == 1) {
    uVar1 = F_00694050((uint)*(ushort *)(this + 0x778),1,(uint)*(ushort *)(this + 0x77c));
    if (uVar1 == 0xffff) {
      return 0;
    }
    F_00c472af(param_1,param_2,"chara/human/c%04d/animation/f%04d/%s.pap",
               (uint)*(ushort *)(this + 0x778),(uint)uVar1,param_4);
    return param_1;
  }
  return param_1;
}

/* ref: Client::Graphics::Scene::Human::vf87 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006a0fc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a0fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 HVar1;
  int iVar2;
  
  HVar1 = this[0x118];
  iVar2 = *((int *)GEN_TOP((*(int *)(this + 0x7c) + 0x34)));
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x10) = (uint)(HVar1 == (undefined1)0x0) | *(uint *)(iVar2 + 0x10) & 0xfffffffe;
  }
  iVar2 = *((int *)GEN_TOP((*(int *)(this + 0x7c) + 0x38)));
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x10) = (uint)(HVar1 == (undefined1)0x0) | *(uint *)(iVar2 + 0x10) & 0xfffffffe;
  }
  F_00689220((undefined *)this GEN_EDX_FWD);
  return;
}

/* ref: FUN_006a1010 */
GEN_FRAME uint GEN_THISCALL F_006a1010(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a1010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  byte bVar1;
  int * piVar2;
  undefined4 uVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  piVar2 = *(int * PTR32 *)((int)this + 0x7e8);
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_FWD);
    *(undefined4 *)((int)this + 0x7e8) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x7ec);
  if (piVar2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x7ec) = 0;
  }
  uVar4 = F_004dcd60(0x90,4,0);
  *(uint *)((int)this + 0x7e8) = uVar4;
  uVar4 = F_004dcd60(0x10,4,0);
  *(uint *)((int)this + 0x7ec) = uVar4;
  F_0069f3e0(REFG(void * PTR32, 0x137129c) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x7e8),uVar4,(int)this + 0x730);
  if (*(int *)((int)this + 0x7f0) != 0) {
    F_0050c620(*(int *)((int)this + 0x7f0),0,0);
    *(undefined4 *)((int)this + 0x7f0) = 0;
  }
  if ((*(byte *)((int)this + 0x748) & 0x7f) == 0) {
    uVar3 = *((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137129c) + 0x44)));
    *(undefined4 *)((int)this + 0x7f0) = uVar3;
    F_00513f60(uVar3,0,0);
  }
  else {
    F_004ff310(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,4,0);
    bVar1 = *(byte *)((int)this + 0x748);
    (*(undefined4 *)(gen_frame + 0x0)) = 0x746578;
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"chara/common/texture/decal_face/_decal_%d.tex",bVar1 & 0x7f);
    uVar4 = F_00513d20(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x8)),0,0,0);
    *(uint *)((int)this + 0x7f0) = uVar4;
  }
  if (*(int *)((int)this + 0x7f4) != 0) {
    F_0050c620(*(int *)((int)this + 0x7f4),0,0);
    *(undefined4 *)((int)this + 0x7f4) = 0;
  }
  if ((*(byte *)((int)this + 0x73c) & 0x80) == 0) {
    *(undefined4 *)((int)this + 0x7f4) = *((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137129c) + 0x44)));
  }
  else {
    *(undefined4 *)((int)this + 0x7f4) = *((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137129c) + 0x48)));
  }
  uVar4 = F_00513f60(*(undefined4 *)((int)this + 0x7f4),0,0);
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_006a11b0 */
GEN_FRAME uint GEN_THISCALL F_006a11b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6a11b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar1 = (uint)(ushort)param_1;
  uVar3 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar5 = 0;
  uVar2 = uVar1;
  uVar4 = uVar3;
  uVar6 = uVar5;
  if (((uVar1 < 0x2358) && (uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b3240))), uVar6 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b3244))), uVar1 != 0x2357)) &&
     (uVar2 = uVar1 - 2, uVar4 = uVar3, uVar6 = uVar5, uVar1 - 2 < 0x84)) {
    uVar2 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x6a13a8) + uVar1 + 2)));
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 2: ;
      uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x109ca64)));
      uVar6 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b3298)));
      uVar7 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b329c)));
      uVar8 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b329c)));
      break;
    case 8: ;
    case 0x25: ;
      uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b3290)));
      uVar6 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b3294)));
      break;
    case 0x1b: ;
      uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b329c)));
      uVar6 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b328c)));
      break;
    case 0x1e: ;
      uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b3284)));
      uVar6 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b3288)));
      break;
    case 0x24: ;
      uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b3274)));
      uVar6 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b3278)));
      uVar7 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b3270)));
      break;
    case 0x30: ;
      uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b326c)));
      uVar6 = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cb20)));
      break;
    case 0x38: ;
      uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b3260)));
      uVar6 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b3264)));
      break;
    case 0x48: ;
      uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b2a2c)));
      uVar6 = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cb20)));
      uVar7 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b325c)));
      break;
    case 0x4c: ;
    case 0x4f: ;
      uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x109ca64)));
      uVar6 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b3298)));
      break;
    case 0x60: ;
      uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b3254)));
      uVar6 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b3258)));
      break;
    case 0x61: ;
      uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b326c)));
      uVar6 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b3268)));
      break;
    case 0x81: ;
      uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b327c)));
      uVar6 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b3280)));
      break;
    case 0x82: ;
      uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b324c)));
      uVar6 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b3250)));
      break;
    case 0x85: ;
      uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10b3248)));
      uVar6 = (undefined4)gen_fl2bits((float)(REFG(float, 0x109cb20)));
    }
  }
  if ((char)param_2 == '\0') {
    uVar4 = 0;
    uVar7 = 0;
    uVar8 = 0;
  }
  *(undefined4 *)((int)this + 0x800) = uVar4;
  *(undefined4 *)((int)this + 0x804) = uVar7;
  *(undefined4 *)((int)this + 0x808) = uVar8;
  *(undefined4 *)((int)this + 0x80c) = uVar6;
  *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) & 0xffbf;
  return uVar2;
}

/* ref: FUN_006a1600 */
GEN_FRAME unsigned int GEN_THISCALL F_006a1600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a1600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  this_00 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x7c)));
  if (this_00 != (undefined *)0x0) {
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 1;
    *(undefined4 *)((int)this_00 + 0x50) = 0xffffffff;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
    *(undefined4 *)((int)this_00 + 0x60) = 0;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
    if ((*(ushort *)(param_1 + 2) & 1) != 0) {
      if (((char)*(ushort *)(param_1 + 2) < '\0') &&
         (uVar1 = F_0065bce0(this_00 GEN_EDX_FWD,"atr_inr"), uVar1 != 0xffff)) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar1 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar1 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
      if ((*(ushort *)(param_1 + 2) & 0x400) == 0) {
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) & 0xfffffffe;
      }
    }
    uVar2 = 1;
    uVar3 = 0;
    do {
      if (((uVar2 & *(ushort *)((int)this + 0x782) & 0x3ff) == 0) &&
         (uVar1 = F_0065bce0(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x1323184) + uVar3)))),
         uVar1 != 0xffff)) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar1 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar1 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
      uVar3 = uVar3 + 4;
      uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
    } while (uVar3 < 0x28);
  }
  return 0;
}

/* ref: FUN_006a1700 */
GEN_FRAME unsigned int GEN_THISCALL F_006a1700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a1700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined * this_00;
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  char * pcVar5;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x7c) + 4)));
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 1;
  *(undefined4 *)((int)this_00 + 0x50) = 0xffffffff;
  *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
  *(undefined4 *)((int)this_00 + 0x60) = 0;
  *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
  if (*(char *)((int)this + 0x730) == '\x04') {
    pcVar5 = "atr_tlh";
  }
  else {
    pcVar5 = "atr_tls";
  }
  uVar2 = F_0065bce0(this_00 GEN_EDX_FWD,pcVar5);
  if (uVar2 != 0xffff) {
    *(uint *)((int)this_00 + 0x50) =
         ~(1 << ((byte)uVar2 & 0x1f)) & *(uint *)((int)this_00 + 0x50) | 0 << ((byte)uVar2 & 0x1f);
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
  }
  if (((*param_1 & 1) != 0) && (((byte)param_1[1] >> 4 & 8) < ((byte)*param_1 & 8))) {
    uVar2 = F_0065bce0(this_00 GEN_EDX_ARG,"atr_nek");
    if (uVar2 != 0xffff) {
      *(uint *)((int)this_00 + 0x50) =
           ~(1 << ((byte)uVar2 & 0x1f)) & *(uint *)((int)this_00 + 0x50) | 0 << ((byte)uVar2 & 0x1f)
      ;
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
    }
    uVar2 = F_0065bd80(this_00 GEN_EDX_ARG,"shp_nek");
    if (uVar2 != 0xffff) {
      uVar3 = 1 << ((byte)uVar2 & 0x1f);
      *(uint *)((int)this_00 + 0x60) = ~uVar3 & *(uint *)((int)this_00 + 0x60) | uVar3;
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
    }
  }
  uVar2 = param_1[2];
  if (((uVar2 & 1) != 0) && (((byte)param_1[1] & 0x18) <= ((byte)uVar2 & 8))) {
    uVar2 = uVar2 >> 1 & 3;
    if (uVar2 == 1) {
      pcVar5 = "shp_hij";
    }
    else if (uVar2 == 2) {
      uVar2 = F_0065bce0(this_00 GEN_EDX_ARG,"atr_hij");
      if (uVar2 != 0xffff) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar2 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar2 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
      pcVar5 = "shp_ude";
    }
    else {
      if (uVar2 != 3) goto LAB_006a1905;
      uVar2 = F_0065bce0(this_00 GEN_EDX_ARG,"atr_hij");
      if (uVar2 != 0xffff) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar2 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar2 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
      uVar2 = F_0065bce0(this_00 GEN_EDX_ARG,"atr_ude");
      if (uVar2 != 0xffff) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar2 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar2 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
      pcVar5 = "shp_kat";
    }
    uVar2 = F_0065bd80(this_00 GEN_EDX_ARG,pcVar5);
    if (uVar2 != 0xffff) {
      uVar3 = 1 << ((byte)uVar2 & 0x1f);
      *(uint *)((int)this_00 + 0x60) = ~uVar3 & *(uint *)((int)this_00 + 0x60) | uVar3;
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
    }
  }
LAB_006a1905: ;
  bVar1 = *(byte *)((int)param_1 + 7);
  if (((bVar1 & 1) != 0) && (((byte)param_1[3] & 0xc) <= (bVar1 >> 1 & 4))) {
    bVar1 = bVar1 >> 1 & 3;
    if (bVar1 == 1) {
      pcVar5 = "shp_sne";
    }
    else if (bVar1 == 2) {
      uVar2 = F_0065bce0(this_00 GEN_EDX_ARG,"atr_sne");
      if (uVar2 != 0xffff) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar2 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar2 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
      pcVar5 = "shp_hiz";
    }
    else {
      if (bVar1 != 3) goto LAB_006a1a17;
      uVar2 = F_0065bce0(this_00 GEN_EDX_ARG,"atr_sne");
      if (uVar2 != 0xffff) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar2 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar2 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
      uVar2 = F_0065bce0(this_00 GEN_EDX_ARG,"atr_hiz");
      if (uVar2 != 0xffff) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar2 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar2 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
      pcVar5 = "shp_mom";
    }
    uVar2 = F_0065bd80(this_00 GEN_EDX_ARG,pcVar5);
    if (uVar2 != 0xffff) {
      uVar3 = 1 << ((byte)uVar2 & 0x1f);
      *(uint *)((int)this_00 + 0x60) = ~uVar3 & *(uint *)((int)this_00 + 0x60) | uVar3;
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
    }
  }
LAB_006a1a17: ;
  uVar3 = 1;
  uVar4 = 0;
  do {
    if (((uVar3 & *(ushort *)((int)this + 0x788) & 0x3ff) == 0) &&
       (uVar2 = F_0065bce0(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x13231ac) + uVar4)))),
       uVar2 != 0xffff)) {
      *(uint *)((int)this_00 + 0x50) =
           ~(1 << ((byte)uVar2 & 0x1f)) & *(uint *)((int)this_00 + 0x50) | 0 << ((byte)uVar2 & 0x1f)
      ;
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
    }
    uVar4 = uVar4 + 4;
    uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
  } while (uVar4 < 0x28);
  return 0;
}

/* ref: FUN_006a1a80 */
GEN_FRAME unsigned int GEN_THISCALL F_006a1a80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a1a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x7c) + 8)));
  if (this_00 != (undefined *)0x0) {
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 1;
    *(undefined4 *)((int)this_00 + 0x50) = 0xffffffff;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
    *(undefined4 *)((int)this_00 + 0x60) = 0;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
    if ((*(ushort *)(param_1 + 2) & 1) != 0) {
      if ((*(byte *)(param_1 + 4) & 8) < ((byte)*(ushort *)(param_1 + 2) & 0x18)) {
        uVar1 = F_0065bce0(this_00 GEN_EDX_FWD,"atr_arm");
        if (uVar1 != 0xffff) {
          *(uint *)((int)this_00 + 0x50) =
               ~(1 << ((byte)uVar1 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
               0 << ((byte)uVar1 & 0x1f);
          *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
        }
        uVar1 = F_0065bd80(this_00 GEN_EDX_ARG,"shp_arm");
        if (uVar1 != 0xffff) {
          uVar2 = 1 << ((byte)uVar1 & 0x1f);
          *(uint *)((int)this_00 + 0x60) = ~uVar2 & *(uint *)((int)this_00 + 0x60) | uVar2;
          *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
        }
      }
      if ((*(ushort *)(param_1 + 2) & 0x200) == 0) {
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) & 0xfffffffe;
      }
    }
    uVar2 = 1;
    uVar3 = 0;
    do {
      if (((uVar2 & *(ushort *)((int)this + 0x78e) & 0x3ff) == 0) &&
         (uVar1 = F_0065bce0(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x13231d4) + uVar3)))),
         uVar1 != 0xffff)) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar1 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar1 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
      uVar3 = uVar3 + 4;
      uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
    } while (uVar3 < 0x28);
  }
  return 0;
}

/* ref: FUN_006a1bb0 */
GEN_FRAME unsigned int GEN_THISCALL F_006a1bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a1bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  char * pcVar6;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x7c) + 0xc)));
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 1;
  *(undefined4 *)((int)this_00 + 0x50) = 0xffffffff;
  *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
  *(undefined4 *)((int)this_00 + 0x60) = 0;
  *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
  bVar5 = true;
  if (*(char *)((int)this + 0x730) == '\x04') {
    pcVar6 = "atr_tlh";
  }
  else {
    pcVar6 = "atr_tls";
  }
  uVar2 = F_0065bce0(this_00 GEN_EDX_FWD,pcVar6);
  if (uVar2 != 0xffff) {
    *(uint *)((int)this_00 + 0x50) =
         ~(1 << ((byte)uVar2 & 0x1f)) & *(uint *)((int)this_00 + 0x50) | 0 << ((byte)uVar2 & 0x1f);
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
  }
  uVar2 = *(ushort *)(param_1 + 2);
  if ((uVar2 & 1) != 0) {
    if ((uVar2 & 6) != 0) {
      uVar2 = F_0065bce0(this_00 GEN_EDX_ARG,"atr_kod");
      if (uVar2 != 0xffff) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar2 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar2 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
      uVar2 = F_0065bd80(this_00 GEN_EDX_ARG,"shp_kos");
      if (uVar2 != 0xffff) {
        uVar3 = 1 << ((byte)uVar2 & 0x1f);
        *(uint *)((int)this_00 + 0x60) = ~uVar3 & *(uint *)((int)this_00 + 0x60) | uVar3;
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
      }
      uVar2 = *(ushort *)(param_1 + 2);
      bVar5 = ((byte)uVar2 & 6) != 4;
    }
    if ((uVar2 & 0x100) == 0) {
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) & 0xfffffffe;
    }
  }
  bVar1 = *(byte *)(param_1 + 7);
  if (((bVar1 & 1) != 0) && ((*(byte *)(param_1 + 6) & 0xc) <= (bVar1 >> 1 & 4))) {
    bVar1 = bVar1 >> 1 & 3;
    if (bVar1 == 1) {
      pcVar6 = "shp_sne";
    }
    else if (bVar1 == 2) {
      uVar2 = F_0065bce0(this_00 GEN_EDX_ARG,"atr_sne");
      if (uVar2 != 0xffff) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar2 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar2 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
      pcVar6 = "shp_hiz";
    }
    else {
      if (bVar1 != 3) goto LAB_006a1dd6;
      uVar2 = F_0065bce0(this_00 GEN_EDX_ARG,"atr_sne");
      if (uVar2 != 0xffff) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar2 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar2 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
      uVar2 = F_0065bce0(this_00 GEN_EDX_ARG,"atr_hiz");
      if (uVar2 != 0xffff) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar2 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar2 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
      pcVar6 = "shp_mom";
    }
    uVar2 = F_0065bd80(this_00 GEN_EDX_ARG,pcVar6);
    if (uVar2 != 0xffff) {
      uVar3 = 1 << ((byte)uVar2 & 0x1f);
      *(uint *)((int)this_00 + 0x60) = ~uVar3 & *(uint *)((int)this_00 + 0x60) | uVar3;
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
    }
  }
LAB_006a1dd6: ;
  if (!bVar5) {
    uVar2 = F_0065bce0(this_00 GEN_EDX_ARG,"atr_lpd");
    if (uVar2 != 0xffff) {
      *(uint *)((int)this_00 + 0x50) =
           ~(1 << ((byte)uVar2 & 0x1f)) & *(uint *)((int)this_00 + 0x50) | 0 << ((byte)uVar2 & 0x1f)
      ;
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
    }
    uVar2 = F_0065bd80(this_00 GEN_EDX_ARG,"shp_sho");
    if (uVar2 != 0xffff) {
      uVar3 = 1 << ((byte)uVar2 & 0x1f);
      *(uint *)((int)this_00 + 0x60) = ~uVar3 & *(uint *)((int)this_00 + 0x60) | uVar3;
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
    }
  }
  uVar3 = 1;
  uVar4 = 0;
  do {
    if (((uVar3 & *(ushort *)((int)this + 0x794) & 0x3ff) == 0) &&
       (uVar2 = F_0065bce0(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x13231fc) + uVar4)))),
       uVar2 != 0xffff)) {
      *(uint *)((int)this_00 + 0x50) =
           ~(1 << ((byte)uVar2 & 0x1f)) & *(uint *)((int)this_00 + 0x50) | 0 << ((byte)uVar2 & 0x1f)
      ;
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
    }
    uVar4 = uVar4 + 4;
    uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
  } while (uVar4 < 0x28);
  return 0;
}

/* ref: FUN_006a1eb0 */
GEN_FRAME unsigned int GEN_THISCALL F_006a1eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a1eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  undefined * this_00;
  bool bVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x7c) + 0x10)));
  if (this_00 != (undefined *)0x0) {
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 1;
    *(undefined4 *)((int)this_00 + 0x50) = 0xffffffff;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
    *(undefined4 *)((int)this_00 + 0x60) = 0;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
    bVar2 = (*(ushort *)(param_1 + 2) & 1) == 0 || ((byte)*(ushort *)(param_1 + 2) & 6) != 4;
    bVar1 = *(byte *)(param_1 + 6);
    bVar3 = bVar2;
    if ((bVar1 & 1) != 0) {
      bVar3 = bVar2 && (bVar1 & 2) != 2;
      bVar2 = bVar3;
      if ((*(byte *)(param_1 + 7) >> 1 & 4) < (bVar1 & 0xc)) {
        uVar4 = F_0065bce0(this_00 GEN_EDX_FWD,"atr_leg");
        if (uVar4 != 0xffff) {
          *(uint *)((int)this_00 + 0x50) =
               ~(1 << ((byte)uVar4 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
               0 << ((byte)uVar4 & 0x1f);
          *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
        }
        uVar4 = F_0065bd80(this_00 GEN_EDX_ARG,"shp_leg");
        if (uVar4 != 0xffff) {
          uVar5 = 1 << ((byte)uVar4 & 0x1f);
          *(uint *)((int)this_00 + 0x60) = ~uVar5 & *(uint *)((int)this_00 + 0x60) | uVar5;
          *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
        }
        bVar2 = false;
      }
      if ((*(byte *)(param_1 + 6) & 0x20) == 0) {
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) & 0xfffffffe;
      }
    }
    if ((!bVar2) && (uVar4 = F_0065bce0(this_00 GEN_EDX_ARG,"atr_lpd"), uVar4 != 0xffff)) {
      *(uint *)((int)this_00 + 0x50) =
           ~(1 << ((byte)uVar4 & 0x1f)) & *(uint *)((int)this_00 + 0x50) | 0 << ((byte)uVar4 & 0x1f)
      ;
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
    }
    if ((!bVar3) && (uVar4 = F_0065bd80(this_00 GEN_EDX_ARG,"shp_sho"), uVar4 != 0xffff)) {
      uVar5 = 1 << ((byte)uVar4 & 0x1f);
      *(uint *)((int)this_00 + 0x60) = ~uVar5 & *(uint *)((int)this_00 + 0x60) | uVar5;
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
    }
    uVar5 = 1;
    uVar6 = 0;
    do {
      if (((uVar5 & *(ushort *)((int)this + 0x79a) & 0x3ff) == 0) &&
         (uVar4 = F_0065bce0(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x1323224) + uVar6)))),
         uVar4 != 0xffff)) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar4 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar4 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
      uVar6 = uVar6 + 4;
      uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
    } while (uVar6 < 0x28);
  }
  return 0;
}

/* ref: FUN_006a2080 */
GEN_FRAME uint GEN_THISCALL F_006a2080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a2080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  char cVar1;
  undefined * this_00;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(uint *)((int)this + 0x7c) + 0x14)));
  iVar4 = 0;
  if (this_00 == (undefined *)0x0) {
    return *(uint *)((int)this + 0x7c);
  }
  *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 1;
  *(undefined4 *)((int)this_00 + 0x50) = 0xffffffff;
  *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
  *(undefined4 *)((int)this_00 + 0x60) = 0;
  *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
  cVar1 = *(char *)((int)this + 0x730);
  if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
    iVar4 = 1;
  }
  else if (cVar1 == '\x04') {
    iVar4 = 2;
  }
  uVar2 = *param_1;
  uVar3 = (uint)uVar2;
  if ((uVar2 & 1) == 0) goto LAB_006a20f5;
  if (iVar4 == 0) {
    uVar2 = uVar2 & 0x20;
joined_r0x006a20e4: ;
    if (uVar2 != 0) goto LAB_006a20f5;
  }
  else {
    if (iVar4 == 1) {
      uVar2 = uVar2 & 0x40;
      goto joined_r0x006a20e4;
    }
    if ((iVar4 != 2) || ((char)uVar2 < '\0')) goto LAB_006a20f5;
  }
  *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) & 0xfffffffe;
LAB_006a20f5: ;
  if ((*(byte *)((int)this + 0x7a0) & 1) == 0) {
    uVar2 = F_0065bce0(this_00 GEN_EDX_FWD,"atr_ev_a");
    uVar3 = (uint)uVar2;
    if (uVar2 != 0xffff) {
      *(uint *)((int)this_00 + 0x50) =
           ~(1 << ((byte)uVar2 & 0x1f)) & *(uint *)((int)this_00 + 0x50) | 0 << ((byte)uVar2 & 0x1f)
      ;
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
    }
  }
  return uVar3;
}

/* ref: FUN_006a2140 */
GEN_FRAME uint GEN_THISCALL F_006a2140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a2140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined * this_00;
  ushort uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x7c);
  this_00 = *(undefined * PTR32 *)(uVar2 + 0x18);
  if (this_00 != (undefined *)0x0) {
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 1;
    *(undefined4 *)((int)this_00 + 0x50) = 0xffffffff;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
    *(undefined4 *)((int)this_00 + 0x60) = 0;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
    if (((param_1[1] & 1) != 0) && ((param_1[1] & 0x800) == 0)) {
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) & 0xfffffffe;
    }
    uVar1 = *param_1;
    uVar2 = (uint)uVar1;
    if (((uVar1 & 1) != 0) && ((uVar1 & 0x10) == 0)) {
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) & 0xfffffffe;
    }
    if ((*(byte *)((int)this + 0x7a6) & 1) == 0) {
      uVar1 = F_0065bce0(this_00 GEN_EDX_FWD,"atr_nv_a");
      uVar2 = (uint)uVar1;
      if (uVar1 != 0xffff) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar1 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar1 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_006a21d0 */
GEN_FRAME uint GEN_THISCALL F_006a21d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a21d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  ushort uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x7c);
  this_00 = *(undefined * PTR32 *)(uVar2 + 0x1c);
  if (this_00 != (undefined *)0x0) {
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 1;
    *(undefined4 *)((int)this_00 + 0x50) = 0xffffffff;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
    *(undefined4 *)((int)this_00 + 0x60) = 0;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
    if (((*(ushort *)(param_1 + 2) & 1) != 0) && ((*(ushort *)(param_1 + 2) & 0x1000) == 0)) {
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) & 0xfffffffe;
    }
    uVar1 = *(ushort *)(param_1 + 4);
    uVar2 = (uint)uVar1;
    if (((uVar1 & 1) != 0) && ((uVar1 & 0x10) == 0)) {
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) & 0xfffffffe;
    }
    if ((*(byte *)((int)this + 0x7ac) & 1) == 0) {
      uVar1 = F_0065bce0(this_00 GEN_EDX_FWD,"atr_wv_a");
      uVar2 = (uint)uVar1;
      if (uVar1 != 0xffff) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar1 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar1 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_006a2260 */
GEN_FRAME uint GEN_THISCALL F_006a2260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a2260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  ushort uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x7c);
  this_00 = *(undefined * PTR32 *)(uVar2 + 0x20);
  if (this_00 != (undefined *)0x0) {
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 1;
    *(undefined4 *)((int)this_00 + 0x50) = 0xffffffff;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
    *(undefined4 *)((int)this_00 + 0x60) = 0;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
    uVar1 = *(ushort *)(param_1 + 4);
    uVar2 = (uint)uVar1;
    if (((uVar1 & 1) != 0) && ((uVar1 & 0x40) == 0)) {
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) & 0xfffffffe;
    }
    if ((*(byte *)((int)this + 0x7b2) & 1) == 0) {
      uVar1 = F_0065bce0(this_00 GEN_EDX_FWD,"atr_rv_a");
      uVar2 = (uint)uVar1;
      if (uVar1 != 0xffff) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar1 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar1 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_006a22e0 */
GEN_FRAME uint GEN_THISCALL F_006a22e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a22e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  ushort uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x7c);
  this_00 = *(undefined * PTR32 *)(uVar2 + 0x24);
  if (this_00 != (undefined *)0x0) {
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 1;
    *(undefined4 *)((int)this_00 + 0x50) = 0xffffffff;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
    *(undefined4 *)((int)this_00 + 0x60) = 0;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
    uVar1 = *(ushort *)(param_1 + 4);
    uVar2 = (uint)uVar1;
    if (((uVar1 & 1) != 0) && ((uVar1 & 0x20) == 0)) {
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) & 0xfffffffe;
    }
    if ((*(byte *)((int)this + 0x7b8) & 1) == 0) {
      uVar1 = F_0065bce0(this_00 GEN_EDX_FWD,"atr_rv_a");
      uVar2 = (uint)uVar1;
      if (uVar1 != 0xffff) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar1 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar1 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_006a2360 */
GEN_FRAME uint GEN_THISCALL F_006a2360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a2360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  char cVar1;
  undefined * this_00;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  char * pcVar5;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(uint *)((int)this + 0x7c) + 0x28)));
  iVar4 = 0;
  if (this_00 == (undefined *)0x0) {
    return *(uint *)((int)this + 0x7c);
  }
  *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 1;
  *(undefined4 *)((int)this_00 + 0x50) = 0xffffffff;
  *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
  *(undefined4 *)((int)this_00 + 0x60) = 0;
  *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
  cVar1 = *(char *)((int)this + 0x730);
  if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
    iVar4 = 1;
  }
  else if (cVar1 == '\x04') {
    iVar4 = 2;
  }
  uVar2 = *param_1;
  if ((uVar2 & 1) == 0) {
    return (uint)uVar2;
  }
  uVar3 = uVar2 >> 1 & 3;
  if (uVar3 == 1) {
    uVar2 = F_0065bce0(this_00 GEN_EDX_FWD,"atr_kam");
    if (uVar2 != 0xffff) {
      *(uint *)((int)this_00 + 0x50) =
           ~(1 << ((byte)uVar2 & 0x1f)) & *(uint *)((int)this_00 + 0x50) | 0 << ((byte)uVar2 & 0x1f)
      ;
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
    }
    uVar2 = F_0065bd80(this_00 GEN_EDX_ARG,"shp_hib");
    uVar3 = (uint)uVar2;
    if (uVar2 != 0xffff) {
      uVar3 = 1 << ((byte)uVar2 & 0x1f);
      *(uint *)((int)this_00 + 0x60) = ~uVar3 & *(uint *)((int)this_00 + 0x60) | uVar3;
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
    }
LAB_006a24ed: ;
    if (iVar4 != 2) {
      if ((*param_1 & 0x100) != 0) {
        return (uint)param_1;
      }
      pcVar5 = "atr_mim";
      goto LAB_006a2452;
    }
  }
  else {
    if (uVar3 != 2) {
      uVar3 = uVar3 - 3;
      if (uVar3 == 0) goto LAB_006a23cb;
      goto LAB_006a24ed;
    }
    uVar3 = 0;
    if (iVar4 != 2) {
LAB_006a23cb: ;
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) & 0xfffffffe;
      goto LAB_006a24ed;
    }
    uVar2 = F_0065bce0(this_00 GEN_EDX_ARG,"atr_kam");
    if (uVar2 != 0xffff) {
      *(uint *)((int)this_00 + 0x50) =
           ~(1 << ((byte)uVar2 & 0x1f)) & *(uint *)((int)this_00 + 0x50) | 0 << ((byte)uVar2 & 0x1f)
      ;
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
    }
    uVar2 = F_0065bce0(this_00 GEN_EDX_ARG,"atr_sta");
    uVar3 = (uint)uVar2;
    if (uVar2 != 0xffff) {
      uVar3 = 0 << ((byte)uVar2 & 0x1f);
      *(uint *)((int)this_00 + 0x50) =
           ~(1 << ((byte)uVar2 & 0x1f)) & *(uint *)((int)this_00 + 0x50) | uVar3;
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
    }
  }
  if ((*param_1 & 0x200) != 0) {
    return uVar3;
  }
  pcVar5 = "atr_top";
LAB_006a2452: ;
  uVar2 = F_0065bce0(this_00 GEN_EDX_ARG,pcVar5);
  uVar3 = (uint)uVar2;
  if (uVar2 != 0xffff) {
    uVar3 = 0 << ((byte)uVar2 & 0x1f);
    *(uint *)((int)this_00 + 0x50) =
         ~(1 << ((byte)uVar2 & 0x1f)) & *(uint *)((int)this_00 + 0x50) | uVar3;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
  }
  return uVar3;
}

/* ref: FUN_006a2510 */
GEN_FRAME uint GEN_THISCALL F_006a2510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a2510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  char cVar1;
  undefined * this_00;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  char * pcVar6;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(uint *)((int)this + 0x7c) + 0x2c)));
  iVar5 = 0;
  if (this_00 == (undefined *)0x0) {
    return *(uint *)((int)this + 0x7c);
  }
  *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 1;
  *(undefined4 *)((int)this_00 + 0x50) = 0xffffffff;
  *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
  *(undefined4 *)((int)this_00 + 0x60) = 0;
  *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
  cVar1 = *(char *)((int)this + 0x730);
  if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
    iVar5 = 1;
  }
  else if (cVar1 == '\x04') {
    iVar5 = 2;
  }
  if ((*param_1 & 1) != 0) {
    if (((byte)*param_1 & 6) == 6) {
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) & 0xfffffffe;
    }
    if (iVar5 == 2) {
      if (((*param_1 & 0x200) == 0) && (uVar3 = F_0065bce0(this_00 GEN_EDX_FWD,"atr_top"), uVar3 != 0xffff)) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar3 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar3 & 0x1f);
        goto LAB_006a25ed;
      }
    }
    else if (((*param_1 & 0x100) == 0) && (uVar3 = F_0065bce0(this_00 GEN_EDX_ARG,"atr_mim"), uVar3 != 0xffff)
            ) {
      *(uint *)((int)this_00 + 0x50) =
           ~(1 << ((byte)uVar3 & 0x1f)) & *(uint *)((int)this_00 + 0x50) | 0 << ((byte)uVar3 & 0x1f)
      ;
LAB_006a25ed: ;
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
    }
  }
  if (((*(byte *)((int)this + 0x73c) & 1) == 0) &&
     (uVar3 = F_0065bce0(this_00 GEN_EDX_ARG,"atr_fv_a"), uVar3 != 0xffff)) {
    *(uint *)((int)this_00 + 0x50) =
         ~(1 << ((byte)uVar3 & 0x1f)) & *(uint *)((int)this_00 + 0x50) | 0 << ((byte)uVar3 & 0x1f);
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
  }
  if (((*(byte *)((int)this + 0x73c) & 2) == 0) &&
     (uVar3 = F_0065bce0(this_00 GEN_EDX_ARG,"atr_fv_b"), uVar3 != 0xffff)) {
    *(uint *)((int)this_00 + 0x50) =
         ~(1 << ((byte)uVar3 & 0x1f)) & *(uint *)((int)this_00 + 0x50) | 0 << ((byte)uVar3 & 0x1f);
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
  }
  if (((*(byte *)((int)this + 0x73c) & 4) == 0) &&
     (uVar3 = F_0065bce0(this_00 GEN_EDX_ARG,"atr_fv_c"), uVar3 != 0xffff)) {
    *(uint *)((int)this_00 + 0x50) =
         ~(1 << ((byte)uVar3 & 0x1f)) & *(uint *)((int)this_00 + 0x50) | 0 << ((byte)uVar3 & 0x1f);
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
  }
  if (((*(byte *)((int)this + 0x73c) & 8) == 0) &&
     (uVar3 = F_0065bce0(this_00 GEN_EDX_ARG,"atr_fv_d"), uVar3 != 0xffff)) {
    *(uint *)((int)this_00 + 0x50) =
         ~(1 << ((byte)uVar3 & 0x1f)) & *(uint *)((int)this_00 + 0x50) | 0 << ((byte)uVar3 & 0x1f);
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
  }
  if (((*(byte *)((int)this + 0x73c) & 0x10) == 0) &&
     (uVar3 = F_0065bce0(this_00 GEN_EDX_ARG,"atr_fv_e"), uVar3 != 0xffff)) {
    *(uint *)((int)this_00 + 0x50) =
         ~(1 << ((byte)uVar3 & 0x1f)) & *(uint *)((int)this_00 + 0x50) | 0 << ((byte)uVar3 & 0x1f);
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
  }
  if (((*(byte *)((int)this + 0x73c) & 0x20) == 0) &&
     (uVar3 = F_0065bce0(this_00 GEN_EDX_ARG,"atr_fv_f"), uVar3 != 0xffff)) {
    *(uint *)((int)this_00 + 0x50) =
         ~(1 << ((byte)uVar3 & 0x1f)) & *(uint *)((int)this_00 + 0x50) | 0 << ((byte)uVar3 & 0x1f);
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
  }
  if (((*(byte *)((int)this + 0x73c) & 0x40) == 0) &&
     (uVar3 = F_0065bce0(this_00 GEN_EDX_ARG,"atr_fv_g"), uVar3 != 0xffff)) {
    *(uint *)((int)this_00 + 0x50) =
         ~(1 << ((byte)uVar3 & 0x1f)) & *(uint *)((int)this_00 + 0x50) | 0 << ((byte)uVar3 & 0x1f);
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
  }
  switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)this + 0x73e))) {
  case 1: ;
    pcVar6 = "shp_brw_a";
    break;
  case 2: ;
    pcVar6 = "shp_brw_b";
    break;
  case 3: ;
    pcVar6 = "shp_brw_c";
    break;
  case 4: ;
    pcVar6 = "shp_brw_d";
    break;
  case 5: ;
    pcVar6 = "shp_brw_e";
    break;
  default: ;
    goto switchD_006a27a7_default;
  }
  uVar3 = F_0065bd80(this_00 GEN_EDX_ARG,pcVar6);
  if (uVar3 != 0xffff) {
    uVar4 = 1 << ((byte)uVar3 & 0x1f);
    *(uint *)((int)this_00 + 0x60) = ~uVar4 & *(uint *)((int)this_00 + 0x60) | uVar4;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
  }
switchD_006a27a7_default: ;
  if (((*(byte *)((int)this + 0x740) & 0x80) != 0) &&
     (uVar3 = F_0065bd80(this_00 GEN_EDX_ARG,"shp_irs_a"), uVar3 != 0xffff)) {
    uVar4 = 1 << ((byte)uVar3 & 0x1f);
    *(uint *)((int)this_00 + 0x60) = ~uVar4 & *(uint *)((int)this_00 + 0x60) | uVar4;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
  }
  switch((unsigned int)(uintptr_t)(*(byte *)((int)this + 0x740) & 0x7f)) {
  case 1: ;
    pcVar6 = "shp_eye_a";
    break;
  case 2: ;
    pcVar6 = "shp_eye_b";
    break;
  case 3: ;
    pcVar6 = "shp_eye_c";
    break;
  case 4: ;
    pcVar6 = "shp_eye_d";
    break;
  case 5: ;
    pcVar6 = "shp_eye_e";
    break;
  default: ;
    goto switchD_006a2844_default;
  }
  uVar3 = F_0065bd80(this_00 GEN_EDX_ARG,pcVar6);
  if (uVar3 != 0xffff) {
    uVar4 = 1 << ((byte)uVar3 & 0x1f);
    *(uint *)((int)this_00 + 0x60) = ~uVar4 & *(uint *)((int)this_00 + 0x60) | uVar4;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
  }
switchD_006a2844_default: ;
  switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)this + 0x741))) {
  case 1: ;
    pcVar6 = "shp_nse_a";
    break;
  case 2: ;
    pcVar6 = "shp_nse_b";
    break;
  case 3: ;
    pcVar6 = "shp_nse_c";
    break;
  case 4: ;
    pcVar6 = "shp_nse_d";
    break;
  case 5: ;
    pcVar6 = "shp_nse_e";
    break;
  default: ;
    goto switchD_006a28a4_default;
  }
  uVar3 = F_0065bd80(this_00 GEN_EDX_ARG,pcVar6);
  if (uVar3 != 0xffff) {
    uVar4 = 1 << ((byte)uVar3 & 0x1f);
    *(uint *)((int)this_00 + 0x60) = ~uVar4 & *(uint *)((int)this_00 + 0x60) | uVar4;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
  }
switchD_006a28a4_default: ;
  cVar1 = *(char *)((int)this + 0x742);
  if (cVar1 == '\x01') {
    pcVar6 = "shp_chk_a";
LAB_006a291b: ;
    uVar3 = F_0065bd80(this_00 GEN_EDX_ARG,pcVar6);
    if (uVar3 != 0xffff) {
      uVar4 = 1 << ((byte)uVar3 & 0x1f);
      *(uint *)((int)this_00 + 0x60) = ~uVar4 & *(uint *)((int)this_00 + 0x60) | uVar4;
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
    }
  }
  else {
    if (cVar1 == '\x02') {
      pcVar6 = "shp_chk_b";
      goto LAB_006a291b;
    }
    if (cVar1 == '\x03') {
      pcVar6 = "shp_chk_c";
      goto LAB_006a291b;
    }
  }
  uVar4 = *(byte *)((int)this + 0x743) & 0x7f;
  if (uVar4 == 1) {
    pcVar6 = "shp_mth_a";
  }
  else if (uVar4 == 2) {
    pcVar6 = "shp_mth_b";
  }
  else {
    uVar4 = uVar4 - 3;
    if (uVar4 != 0) goto LAB_006a2999;
    pcVar6 = "shp_mth_c";
  }
  uVar3 = F_0065bd80(this_00 GEN_EDX_ARG,pcVar6);
  uVar4 = (uint)uVar3;
  if (uVar3 != 0xffff) {
    uVar4 = 1 << ((byte)uVar3 & 0x1f);
    *(uint *)((int)this_00 + 0x60) = ~uVar4 & *(uint *)((int)this_00 + 0x60) | uVar4;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
  }
LAB_006a2999: ;
  bVar2 = *(char *)((int)this + 0x730) - 2;
  uVar4 = CONCAT31((int3)(uVar4 >> 8),bVar2);
  if (bVar2 < 2) {
    uVar4 = (uint)*(byte *)((int)this + 0x746);
    if (uVar4 == 2) {
      pcVar6 = "shp_etc_a";
    }
    else if (uVar4 == 3) {
      pcVar6 = "shp_etc_b";
    }
    else {
      if (uVar4 - 4 != 0) {
        return uVar4 - 4;
      }
      pcVar6 = "shp_etc_c";
    }
    uVar3 = F_0065bd80(this_00 GEN_EDX_ARG,pcVar6);
    uVar4 = (uint)uVar3;
    if (uVar3 != 0xffff) {
      uVar4 = 1 << ((byte)uVar3 & 0x1f);
      *(uint *)((int)this_00 + 0x60) = ~uVar4 & *(uint *)((int)this_00 + 0x60) | uVar4;
      *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
    }
  }
  return uVar4;
}

/* ref: FUN_006a2a40 */
GEN_FRAME uint GEN_THISCALL F_006a2a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a2a40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*(int *)(in_ecx + 0x7c) + 0x30)));
  if (uVar1 != 0) {
    *(uint *)(uVar1 + 0x10) = *(uint *)(uVar1 + 0x10) | 1;
    *(undefined4 *)(uVar1 + 0x50) = 0xffffffff;
    *(uint *)(uVar1 + 0x10) = *(uint *)(uVar1 + 0x10) | 2;
    *(undefined4 *)(uVar1 + 0x60) = 0;
    *(uint *)(uVar1 + 0x10) = *(uint *)(uVar1 + 0x10) | 4;
    if (((*(byte *)(param_2 + 6) & 1) != 0) && ((*(byte *)(param_2 + 6) & 0x40) == 0)) {
      *(uint *)(uVar1 + 0x10) = *(uint *)(uVar1 + 0x10) & 0xfffffffe;
    }
  }
  return uVar1;
}

/* ref: FUN_006a2a80 */
GEN_FRAME uint GEN_THISCALL F_006a2a80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a2a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  ushort uVar2;
  undefined * pvVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  ushort * puVar13;
  bool bVar14;
  bool bVar15;
  
  (*(ushort * PTR32 *)(gen_frame + 0x0)) = (ushort *)((int)this + 0x750);
  uVar12 = 0;
  puVar13 = param_1;
  do {
    uVar11 = (uint)*(ushort *)((int)this + 0x778);
    if (uVar11 % 10 == 1) {
      uVar8 = F_0068c9c0(REFG(void * PTR32, 0x137129c) GEN_EDX_FWD,uVar11,uVar12,(uint)*(*(ushort * PTR32 *)(gen_frame + 0x0)));
    }
    else if (uVar11 % 10 == 4) {
      uVar8 = F_0068cc20(REFG(void * PTR32, 0x137129c) GEN_EDX_ARG,uVar11,uVar12,(uint)*(*(ushort * PTR32 *)(gen_frame + 0x0)));
    }
    else {
      uVar8 = F_0068cd40(REFG(void * PTR32, 0x137129c) GEN_EDX_ARG,uVar11,uVar12,(uint)*(*(ushort * PTR32 *)(gen_frame + 0x0)));
    }
    (*(ushort * PTR32 *)(gen_frame + 0x0)) = (*(ushort * PTR32 *)(gen_frame + 0x0)) + 2;
    bVar9 = (byte)uVar12;
    uVar12 = uVar12 + 1;
    puVar13 = ((ushort *)GEN_TOP(((uint)puVar13 & ~(1 << (bVar9 & 0x1f)) |
              (uint)(uVar8 == *(ushort *)((int)this + 0x778)) << (bVar9 & 0x1f))));
  } while (uVar12 < 5);
  uVar8 = param_1[1] >> 9;
  (*(undefined2 *)((char *)&(*(ushort * PTR32 *)(gen_frame + 0x0)) + 0)) = uVar8 & 1;
  if ((uVar8 & 1) == 0) {
    puVar13 = ((ushort *)GEN_TOP(((uint)puVar13 ^ (((uint)((int)(uintptr_t)puVar13) >> 1 & 0xff) * 4 ^ (uint)puVar13) & 4)));
  }
  if ((param_1[1] & 0x100) == 0) {
    puVar13 = ((ushort *)GEN_TOP(((uint)puVar13 ^ (((uint)((int)(uintptr_t)puVar13) >> 1 & 0xff) * 8 ^ (uint)puVar13) & 8)));
  }
  bVar9 = (byte)param_1[3];
  bVar5 = bVar9 >> 5 & 1;
  if (bVar5 == 0) {
    puVar13 = ((ushort *)GEN_TOP(((uint)puVar13 ^ (((uint)((int)(uintptr_t)puVar13) >> 3 & 0xff) << 4 ^ (uint)puVar13) & 0x10)));
  }
  bVar6 = (byte)((uint)((int)(uintptr_t)puVar13) >> 3) & 1;
  bVar10 = (byte)((uint)((int)(uintptr_t)puVar13) >> 1) & 1;
  bVar14 = bVar10 != ((byte)((uint)((int)(uintptr_t)puVar13) >> 2) & 1);
  bVar15 = bVar6 != ((byte)((uint)((int)(uintptr_t)puVar13) >> 4) & 1);
  bVar4 = true;
  if (((*param_1 & 1) != 0) &&
     (bVar9 = (byte)param_1[3], ((byte)param_1[1] >> 4 & 8) < ((byte)*param_1 & 8))) {
    bVar4 = false;
  }
  if (((uint)((int)(uintptr_t)puVar13) >> 1 & 1) != 0) {
    bVar4 = false;
  }
  uVar8 = param_1[2];
  if ((((uVar8 & 1) != 0) &&
      (bVar9 = (byte)param_1[3], ((byte)param_1[1] & 0x18) <= ((byte)uVar8 & 8))) &&
     ((uVar8 >> 1 & 3) - 2 < 2)) {
    bVar14 = false;
  }
  uVar2 = param_1[1];
  uVar12 = (uint)uVar2;
  if ((uVar2 & 1) != 0) {
    uVar12 = uVar2 & 0xffffff18;
    if (((byte)uVar8 & 8) < (byte)uVar12) {
      bVar14 = false;
    }
    if ((ushort)(*(ushort * PTR32 *)(gen_frame + 0x0)) == 0) {
      bVar14 = false;
    }
  }
  bVar1 = *(byte *)((int)param_1 + 7);
  if ((((bVar1 & 1) != 0) &&
      (uVar12 = CONCAT31((int3)(uVar12 >> 8),bVar1 >> 1) & 0xffffff04, (bVar9 & 0xc) <= (byte)uVar12
      )) && (uVar12 = CONCAT31((int3)(uVar12 >> 8),bVar1 >> 1) & 0xffffff03,
            bVar7 = (char)uVar12 - 2, uVar12 = CONCAT31((int3)(uVar12 >> 8),bVar7), bVar7 < 2)) {
    bVar15 = false;
  }
  if ((bVar9 & 1) != 0) {
    if ((bVar1 >> 1 & 4) < (bVar9 & 0xc)) {
      bVar15 = false;
    }
    if (bVar5 == 0) {
      bVar15 = false;
    }
  }
  pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x7c) + 0x34)));
  if (pvVar3 != (undefined *)0x0) {
    *(uint *)((int)pvVar3 + 0x10) = *(uint *)((int)pvVar3 + 0x10) | 1;
    *(undefined4 *)((int)pvVar3 + 0x50) = 0xffffffff;
    *(uint *)((int)pvVar3 + 0x10) = *(uint *)((int)pvVar3 + 0x10) | 2;
    *(undefined4 *)((int)pvVar3 + 0x60) = 0;
    *(uint *)((int)pvVar3 + 0x10) = *(uint *)((int)pvVar3 + 0x10) | 4;
    if (!bVar4) {
      uVar8 = F_0065bce0(pvVar3 GEN_EDX_ARG,"atr_cn_neck");
      uVar12 = (uint)uVar8;
      if (uVar8 != 0xffff) {
        uVar12 = 0 << ((byte)uVar8 & 0x1f);
        *(uint *)((int)pvVar3 + 0x50) =
             ~(1 << ((byte)uVar8 & 0x1f)) & *(uint *)((int)pvVar3 + 0x50) | uVar12;
        *(uint *)((int)pvVar3 + 0x10) = *(uint *)((int)pvVar3 + 0x10) | 2;
      }
    }
    if (bVar10 == bVar6) {
      uVar8 = F_0065bce0(pvVar3 GEN_EDX_ARG,"atr_cn_waist");
      uVar12 = (uint)uVar8;
      if (uVar8 != 0xffff) {
        uVar12 = 0 << ((byte)uVar8 & 0x1f);
        *(uint *)((int)pvVar3 + 0x50) =
             ~(1 << ((byte)uVar8 & 0x1f)) & *(uint *)((int)pvVar3 + 0x50) | uVar12;
        *(uint *)((int)pvVar3 + 0x10) = *(uint *)((int)pvVar3 + 0x10) | 2;
      }
    }
    if (!bVar14) {
      uVar8 = F_0065bce0(pvVar3 GEN_EDX_ARG,"atr_cn_wrist");
      uVar12 = (uint)uVar8;
      if (uVar8 != 0xffff) {
        uVar12 = 0 << ((byte)uVar8 & 0x1f);
        *(uint *)((int)pvVar3 + 0x50) =
             ~(1 << ((byte)uVar8 & 0x1f)) & *(uint *)((int)pvVar3 + 0x50) | uVar12;
        *(uint *)((int)pvVar3 + 0x10) = *(uint *)((int)pvVar3 + 0x10) | 2;
      }
    }
    if (!bVar15) {
      uVar8 = F_0065bce0(pvVar3 GEN_EDX_ARG,"atr_cn_ankle");
      uVar12 = (uint)uVar8;
      if (uVar8 != 0xffff) {
        uVar12 = 0 << ((byte)uVar8 & 0x1f);
        *(uint *)((int)pvVar3 + 0x50) =
             ~(1 << ((byte)uVar8 & 0x1f)) & *(uint *)((int)pvVar3 + 0x50) | uVar12;
        *(uint *)((int)pvVar3 + 0x10) = *(uint *)((int)pvVar3 + 0x10) | 2;
      }
    }
  }
  pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x7c) + 0x38)));
  if (pvVar3 != (undefined *)0x0) {
    *(uint *)((int)pvVar3 + 0x10) = *(uint *)((int)pvVar3 + 0x10) | 1;
    *(undefined4 *)((int)pvVar3 + 0x50) = 0xffffffff;
    *(uint *)((int)pvVar3 + 0x10) = *(uint *)((int)pvVar3 + 0x10) | 2;
    *(undefined4 *)((int)pvVar3 + 0x60) = 0;
    *(uint *)((int)pvVar3 + 0x10) = *(uint *)((int)pvVar3 + 0x10) | 4;
    if (!bVar4) {
      uVar8 = F_0065bce0(pvVar3 GEN_EDX_ARG,"atr_cn_neck");
      uVar12 = (uint)uVar8;
      if (uVar8 != 0xffff) {
        uVar12 = 0 << ((byte)uVar8 & 0x1f);
        *(uint *)((int)pvVar3 + 0x50) =
             ~(1 << ((byte)uVar8 & 0x1f)) & *(uint *)((int)pvVar3 + 0x50) | uVar12;
        *(uint *)((int)pvVar3 + 0x10) = *(uint *)((int)pvVar3 + 0x10) | 2;
      }
    }
  }
  return uVar12;
}

/* ref: FUN_006a2e10 */
GEN_FRAME unsigned int GEN_THISCALL F_006a2e10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a2e10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if (((*(byte *)((int)this + 0x814) & 1) != 0) && (*(int *)((int)this + 0x810) != 0)) {
    F_0069f1c0(REFG(void * PTR32, 0x137129c) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x4)),(int)this + 0x750);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x810) + 8))))(*(int * PTR32 *)((int)this + 0x810) GEN_EDX_ARG,this,((undefined1 *)(gen_frame + 0x4)));
    if ((*(short *)((int)this + 0x754) == 100) && (*(char *)((int)this + 0x756) == '\x02')) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x810) + 0xc))))(*(int * PTR32 *)((int)this + 0x810) GEN_EDX_ARG,this);
    }
    *(uint *)((int)this + 0x814) = *(uint *)((int)this + 0x814) & 0xfffffffe;
  }
  return;
}

/* ref: Client::Graphics::Scene::Demihuman::vf60 */
GEN_FRAME uint GEN_THISCALL F_006a2e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a2e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x780);
  if ((iVar2 == 0) ||
     ((*(uint *)(this + 0x784) >> ((byte)*(int *)(*param_1 + 0x74) & 0x1f) & 1) == 0)) {
    if (*((int *)GEN_TOP((this + *(int *)(*param_1 + 0x74) * 4 + 0x768))) != 0) {
      uVar1 = F_0069f8d0(REFG(void * PTR32, 0x137129c) GEN_EDX_FWD,
                           *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((this + *(int *)(*param_1 + 0x74) * 4 + 0x768))) + 0xfc))),
                           *((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137129c) + 0x9c))));
      return uVar1;
    }
    iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)REFG(void * PTR32, 0x137129c) + 0x44))) + 0xfc)));
  }
  uVar1 = F_0069f8d0(REFG(void * PTR32, 0x137129c) GEN_EDX_ARG,iVar2,*((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137129c) + 0x9c))));
  return uVar1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf63 */
GEN_FRAME byte GEN_THISCALL F_006a2f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6a2f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  if (4 < param_1) {
    return 0;
  }
  if (*(int *)(this + 0x790) == 0) {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                       (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,0x3c,0x10)));
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[0xc] = 0;
    }
    *(undefined4 * PTR32 *)(this + 0x790) = puVar1;
  }
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x790) + param_1 * 0xc))) = *param_2;
  uVar2 = 1 << ((byte)param_1 & 0x1f);
  *(uint *)(this + 0x730) = ~uVar2 & *(uint *)(this + 0x730) | uVar2;
  return 1;
}

/* ref: FUN_006a2f90 */
GEN_FRAME unsigned int GEN_THISCALL F_006a2f90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a2f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  this_00 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x7c)));
  uVar3 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar2 = 1;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 1;
    *(undefined4 *)((int)this_00 + 0x50) = 0xffffffff;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
    *(undefined4 *)((int)this_00 + 0x60) = 0;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
    do {
      if (((uVar2 & *(ushort *)((int)this + 0x74c) & 0x3ff) == 0) &&
         (uVar1 = F_0065bce0(this_00 GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x132324c) + uVar3)))),
         uVar1 != 0xffff)) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar1 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar1 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
      uVar3 = uVar3 + 4;
      uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
    } while (uVar3 < 0x28);
  }
  return 0;
}

/* ref: FUN_006a3030 */
GEN_FRAME unsigned int GEN_THISCALL F_006a3030(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a3030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x7c) + 4)));
  uVar3 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar2 = 1;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 1;
    *(undefined4 *)((int)this_00 + 0x50) = 0xffffffff;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
    *(undefined4 *)((int)this_00 + 0x60) = 0;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
    do {
      if (((uVar2 & *(ushort *)((int)this + 0x752) & 0x3ff) == 0) &&
         (uVar1 = F_0065bce0(this_00 GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x1323274) + uVar3)))),
         uVar1 != 0xffff)) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar1 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar1 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
      uVar3 = uVar3 + 4;
      uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
    } while (uVar3 < 0x28);
  }
  return 0;
}

/* ref: FUN_006a30d0 */
GEN_FRAME unsigned int GEN_THISCALL F_006a30d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a30d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x7c) + 8)));
  uVar3 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar2 = 1;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 1;
    *(undefined4 *)((int)this_00 + 0x50) = 0xffffffff;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
    *(undefined4 *)((int)this_00 + 0x60) = 0;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
    do {
      if (((uVar2 & *(ushort *)((int)this + 0x758) & 0x3ff) == 0) &&
         (uVar1 = F_0065bce0(this_00 GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x132329c) + uVar3)))),
         uVar1 != 0xffff)) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar1 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar1 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
      uVar3 = uVar3 + 4;
      uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
    } while (uVar3 < 0x28);
  }
  return 0;
}

/* ref: FUN_006a3170 */
GEN_FRAME unsigned int GEN_THISCALL F_006a3170(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a3170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x7c) + 0xc)));
  uVar3 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar2 = 1;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 1;
    *(undefined4 *)((int)this_00 + 0x50) = 0xffffffff;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
    *(undefined4 *)((int)this_00 + 0x60) = 0;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
    do {
      if (((uVar2 & *(ushort *)((int)this + 0x75e) & 0x3ff) == 0) &&
         (uVar1 = F_0065bce0(this_00 GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x13232c4) + uVar3)))),
         uVar1 != 0xffff)) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar1 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar1 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
      uVar3 = uVar3 + 4;
      uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
    } while (uVar3 < 0x28);
  }
  return 0;
}

/* ref: FUN_006a3210 */
GEN_FRAME uint GEN_THISCALL F_006a3210(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a3210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = *(uint *)((int)this + 0x7c);
  this_00 = *(undefined * PTR32 *)(uVar2 + 0x10);
  uVar4 = 0;
  if (this_00 != (undefined *)0x0) {
    uVar3 = 1;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 1;
    *(undefined4 *)((int)this_00 + 0x50) = 0xffffffff;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
    *(undefined4 *)((int)this_00 + 0x60) = 0;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 4;
    do {
      if ((uVar3 & *(ushort *)((int)this + 0x764) & 0x3ff) == 0) {
        uVar1 = F_0065bce0(this_00 GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x13232ec) + uVar4))));
        uVar2 = (uint)uVar1;
        if (uVar1 != 0xffff) {
          uVar2 = ~(1 << ((byte)uVar1 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
                  0 << ((byte)uVar1 & 0x1f);
          *(uint *)((int)this_00 + 0x50) = uVar2;
          *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
        }
      }
      uVar4 = uVar4 + 4;
      uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
    } while (uVar4 < 0x28);
  }
  return uVar2;
}

/* ref: Client::Graphics::Scene::Weapon::vf56 */
GEN_FRAME unsigned int GEN_THISCALL F_006a32b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a32b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  this_00 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)(this + 0x7c)));
  if (this_00 != (undefined *)0x0) {
    *(undefined4 *)((int)this_00 + 0x50) = 0xffffffff;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
    uVar2 = 1;
    uVar3 = 0;
    do {
      if (((uVar2 & *(ushort *)(this + 0x73c) & 0x3ff) == 0) &&
         (uVar1 = F_0065bce0(this_00 GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x1323314) + uVar3)))),
         uVar1 != 0xffff)) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar1 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar1 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
      uVar3 = uVar3 + 4;
      uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
    } while (uVar3 < 0x28);
  }
  return 0;
}

/* ref: Client::Graphics::Scene::Weapon::vf60 */
GEN_NOFRAME uint GEN_THISCALL F_006a3340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a3340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((*(int *)(this + 0x744) != 0) && (((byte)this[0x748] & 1) != 0)) {
    uVar1 = F_0069f8d0(REFG(void * PTR32, 0x137129c) GEN_EDX_FWD,*(int *)(this + 0x744),
                         *((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137129c) + 0x9c))));
    return uVar1;
  }
  if (*(int *)(this + 0x740) != 0) {
    uVar1 = F_0069f8d0(REFG(void * PTR32, 0x137129c) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(this + 0x740) + 0xfc))),
                         *((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137129c) + 0x9c))));
    return uVar1;
  }
  uVar1 = F_0069f8d0(REFG(void * PTR32, 0x137129c) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)REFG(void * PTR32, 0x137129c) + 0x44))) + 0xfc))),
                       *((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137129c) + 0x9c))));
  return uVar1;
}

/* ref: Client::Graphics::Scene::Monster::vf56 */
GEN_FRAME unsigned int GEN_THISCALL F_006a33a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a33a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  this_00 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)(this + 0x7c)));
  if (this_00 != (undefined *)0x0) {
    *(undefined4 *)((int)this_00 + 0x50) = 0xffffffff;
    *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
    uVar2 = 1;
    uVar3 = 0;
    do {
      if (((uVar2 & *(ushort *)(this + 0x738) & 0x3ff) == 0) &&
         (uVar1 = F_0065bce0(this_00 GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x132333c) + uVar3)))),
         uVar1 != 0xffff)) {
        *(uint *)((int)this_00 + 0x50) =
             ~(1 << ((byte)uVar1 & 0x1f)) & *(uint *)((int)this_00 + 0x50) |
             0 << ((byte)uVar1 & 0x1f);
        *(uint *)((int)this_00 + 0x10) = *(uint *)((int)this_00 + 0x10) | 2;
      }
      uVar3 = uVar3 + 4;
      uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
    } while (uVar3 < 0x28);
  }
  return 0;
}

/* ref: Client::Graphics::Scene::Monster::vf60 */
GEN_NOFRAME uint GEN_THISCALL F_006a3430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a3430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)(this + 0x73c) != 0) {
    uVar1 = F_0069f8d0(REFG(void * PTR32, 0x137129c) GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*(int *)(this + 0x73c) + 0xfc))),
                         *((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137129c) + 0x9c))));
    return uVar1;
  }
  uVar1 = F_0069f8d0(REFG(void * PTR32, 0x137129c) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)REFG(void * PTR32, 0x137129c) + 0x44))) + 0xfc))),
                       *((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137129c) + 0x9c))));
  return uVar1;
}

/* ref: Client::Graphics::Scene::Terrain::vf1 */
GEN_FRAME uint GEN_THISCALL F_006a3470(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a3470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  uint uVar4;
  
  if ((((byte)this[100] & 4) != 0) && (REFG(undefined4 * PTR32, 0x13759f4) != (undefined4 *)0x0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x13759f4))))(REFG(undefined4 * PTR32, 0x13759f4) GEN_EDX_FWD,1);
    REFG(undefined4 * PTR32, 0x13759f4) = (undefined4 *)0x0;
  }
  if (*(int *)(this + 0x74) != 0) {
    uVar3 = *(uint *)(this + 0x78);
    uVar4 = 0;
    if (uVar3 != 0) {
      do {
        if (*((int *)GEN_TOP((*(int *)(this + 0x74) + uVar4 * 4))) != 0) {
          F_0050c620(*((undefined4 *)GEN_TOP((*(int *)(this + 0x74) + uVar4 * 4))),0,0);
          *((undefined4 *)GEN_TOP((*(int *)(this + 0x74) + uVar4 * 4))) = 0;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
    }
    if (*(int *)(this + 0x74) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,*(int *)(this + 0x74));
      *(undefined4 *)(this + 0x74) = 0;
    }
  }
  this_00 = REFG(void * PTR32, 0x1370c1c);
  uVar3 = *(uint *)(this + 0x7c);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      if (*((int *)GEN_TOP((*(int *)(this + 0x88) + uVar4 * 4))) != 0) {
        piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x88) + uVar4 * 4)));
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x88) + uVar4 * 4))) = 0;
      }
      iVar2 = *(int *)(this + 0x94);
      if ((iVar2 != 0) && (*(int *)(iVar2 + uVar4 * 4) != 0)) {
        F_00b14100(this_00 GEN_EDX_ARG,*(undefined4 *)(iVar2 + uVar4 * 4));
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x94) + uVar4 * 4))) = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  uVar3 = *(uint *)(this + 0x80);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      if (*((int *)GEN_TOP((*(int *)(this + 0x8c) + uVar4 * 4))) != 0) {
        piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x8c) + uVar4 * 4)));
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x8c) + uVar4 * 4))) = 0;
      }
      iVar2 = *(int *)(this + 0x98);
      if ((iVar2 != 0) && (*(int *)(iVar2 + uVar4 * 4) != 0)) {
        F_00b14100(this_00 GEN_EDX_ARG,*(undefined4 *)(iVar2 + uVar4 * 4));
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x98) + uVar4 * 4))) = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  uVar3 = *(uint *)(this + 0x84);
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      if (*((int *)GEN_TOP((*(int *)(this + 0x90) + uVar4 * 4))) != 0) {
        piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x90) + uVar4 * 4)));
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x90) + uVar4 * 4))) = 0;
      }
      iVar2 = *(int *)(this + 0x9c);
      if ((iVar2 != 0) && (*(int *)(iVar2 + uVar4 * 4) != 0)) {
        F_00b14100(this_00 GEN_EDX_ARG,*(undefined4 *)(iVar2 + uVar4 * 4));
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x9c) + uVar4 * 4))) = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  if (((byte)this[100] & 4) != 0) {
    F_006201f0((undefined *)(REFG(int, 0x137127c) + 0xaf90) GEN_EDX_ARG);
  }
  if (*(int *)(this + 0x88) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,*(int *)(this + 0x88));
    *(undefined4 *)(this + 0x88) = 0;
  }
  if (*(int *)(this + 0x8c) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,*(int *)(this + 0x8c));
    *(undefined4 *)(this + 0x8c) = 0;
  }
  if (*(int *)(this + 0x90) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,*(int *)(this + 0x90));
    *(undefined4 *)(this + 0x90) = 0;
  }
  if (*(int *)(this + 0x94) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,*(int *)(this + 0x94));
    *(undefined4 *)(this + 0x94) = 0;
  }
  if (*(int *)(this + 0x98) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,*(int *)(this + 0x98));
    *(undefined4 *)(this + 0x98) = 0;
  }
  if (*(int *)(this + 0x9c) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,*(int *)(this + 0x9c));
    *(undefined4 *)(this + 0x9c) = 0;
  }
  this[100] = (undefined1)((byte)this[100] & 0xfb);
  this[0x65] = (undefined1)0x0;
  if (*(int *)(this + 0x60) != 0) {
    F_00b14100(REFG(void * PTR32, 0x1370c1c) GEN_EDX_ARG,*(int *)(this + 0x60));
    *(undefined4 *)(this + 0x60) = 0;
  }
  iVar2 = *(int *)(this + 0x14);
  if ((iVar2 != 0) && (*(undefined * PTR32 *)(iVar2 + 0x20) == this)) {
    *(uint *)(iVar2 + 0x20) =
         -(uint)(*(undefined * PTR32 *)(this + 0x1c) != this) & (uint)*(undefined * PTR32 *)(this + 0x1c);
  }
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x1c) + 0x18))) = *(undefined4 *)(this + 0x18);
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0x1c))) = *(undefined4 *)(this + 0x1c);
  iVar2 = *(int *)(this + 0x28);
  uVar3 = *(uint *)(this + 0x24) & 0xfffffffc;
  *(undefined * PTR32 *)(this + 0x18) = this;
  *(undefined * PTR32 *)(this + 0x1c) = this;
  *(undefined4 *)(this + 0x14) = 0;
  *(uint *)(this + 0x24) = *(uint *)(this + 0x24) & 3;
  *(undefined4 *)(this + 0x28) = 0;
  if (uVar3 != 0) {
    *(int *)(uVar3 + 0x28) = iVar2;
  }
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x24) = *(uint *)(iVar2 + 0x24) & 3 | uVar3;
  }
  *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 1;
  uVar3 = 0;
  if (*(int *)(this + 0x70) != 0) {
    uVar3 = F_0050c620(*(int *)(this + 0x70),0,0);
    *(undefined4 *)(this + 0x70) = 0;
  }
  return uVar3;
}

/* ref: Client::Graphics::Scene::Terrain::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_006a37a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a37a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = (byte)this[0x65] - 2;
  if (uVar1 == 0) {
    if ((byte)this[0xa0] == 1) {
      uVar1 = F_00694e50(this GEN_EDX_FWD);
      return uVar1;
    }
    uVar1 = (byte)this[0xa0] - 2;
    if (uVar1 == 0) {
      uVar1 = F_00694fd0(this GEN_EDX_ARG);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: Client::Graphics::Scene::BGObject::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_006a37d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a37d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  code * pcVar2;
  int * piVar3;
  
  piVar3 = (int *)((byte)this[0x65] - 2);
  if (piVar3 == (int *)0x0) {
    piVar3 = ((int *)GEN_TOP((*(int *)(this + 0x70) + 0x88)));
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar3), 0);
    if (iVar1 == 2) {
      piVar3 = ((int *)GEN_TOP((*(int *)(this + 0x70) + 0x8c)));
      iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar3), 0);
      if (7 < iVar1) {
        this[0x65] = (undefined1)0x4;
        return (uint)piVar3;
      }
      pcVar2 = *(gen_code32 *)(*(int *)this + 0x28);
      this[0x65] = (undefined1)0x3;
      piVar3 = ((int *)GEN_TOP((*pcVar2)(this)));
      *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 1;
    }
  }
  return (uint)piVar3;
}

/* ref: FUN_006a3820 */
GEN_FRAME uint GEN_THISCALL F_006a3820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a3820u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  undefined4 in_EAX = 0;
  undefined2 local_8;
  
  if ((short)param_2 == 0) {
    if ((*(byte *)(param_1 + 100) & 4) != 0) {
      iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x70) + 0xa8)));
      local_8 = (undefined2)
                (int)TRUNC((float10)((float)GEN_TOF(SQRT((float10)*((float *)GEN_TOP((*(int *)(iVar1 + 4) + 0x24 +
                                                                   iVar1)))))));
      *(undefined2 *)(param_1 + 0x88) = local_8;
      return gen_x87_cw | 0xc00;
    }
  }
  else {
    *(short *)(param_1 + 0x88) = (short)param_2;
  }
  return CONCAT22((short)((uint)in_EAX >> 0x10),(short)param_2);
}

/* ref: FUN_006a3890 */
GEN_FRAME unsigned int F_006a3890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6a3890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  if ((*(byte *)((int)param_1 + 100) & 1) == 0) {
    *param_3 = 0;
    return;
  }
  if (param_2 == 0x1e) {
    uVar4 = F_006026a0(param_1 GEN_EDX_ARG,1);
    if (uVar4 != 0) {
      *(byte *)((int)param_1 + 0x95) = *(byte *)((int)param_1 + 0x95) & 0xfb;
      iVar1 = *(int *)((int)param_1 + 0x70);
      iVar2 = *(int *)(iVar1 + 0xa8);
      if ((~*((byte *)GEN_TOP((*(int *)(iVar2 + 4) + 0x1f + iVar2))) & *(byte *)((int)param_1 + 0x95) & 1) != 0
         ) {
        bVar3 = F_006962b0(param_1 GEN_EDX_ARG,param_4,param_5);
        if (bVar3 != 0) {
          *(byte *)((int)param_1 + 0x95) = *(byte *)((int)param_1 + 0x95) | 4;
        }
      }
      iVar1 = *(int *)(iVar1 + 0xa8);
      if ((~(*((byte *)GEN_TOP((*(int *)(iVar1 + 4) + 0x1f + iVar1))) >> 2) & 1) != 0) {
        F_0068f430(param_1 GEN_EDX_ARG);
      }
    }
  }
  if ((*(byte *)((int)param_1 + 0x95) & 8) == 0) {
    uVar4 = F_006964c0(param_1 GEN_EDX_ARG,*(undefined4 *)((int)param_1 + 0x74),param_2,*param_3);
    *param_3 = uVar4;
  }
  return;
}

/* ref: Client::Graphics::Scene::Light::vf10 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006a3940(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a3940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (((byte)this[100] & 4) == 0) {
    this[100] = (undefined1)((byte)this[100] | 4);
    uVar1 = F_00b14060(REFG(void * PTR32, 0x1370c1c) GEN_EDX_FWD,5);
    *(uint *)(this + 0x60) = uVar1;
    if (uVar1 == 0) {
      this[0x65] = (undefined1)0x4;
      return;
    }
    *(undefined * PTR32 *)(uVar1 + 4) = this;
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1c))(this GEN_EDX_ARG,1);
  }
  return;
}

/* ref: Client::Graphics::Scene::Light::vf12 */
GEN_NOFRAME uint GEN_THISCALL F_006a3980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a3980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x390];
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float * pfVar8;
  undefined4 * puVar9;
  float * pfVar10;
  int iVar11;
  undefined4 * puVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float fVar17;
  
  (*(uint *)(gen_frame + 0x37c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x380);
  iVar11 = *(int *)(this + 0x70);
  iVar7 = *(int *)(iVar11 + 0xc);
  (*(float * PTR32 *)(gen_frame + 0x228)) = param_1;
  if (iVar7 == 3) {
    fVar17 = *(float *)(iVar11 + 0x7c);
    (*(float *)(gen_frame + 0x22c)) = fVar17;
    fVar2 = ((float)GEN_TOF(((float10)*(float *)(iVar11 + 0x74) * (float10)REFG(double, 0x1088108))));
    (*(float * PTR32 *)(gen_frame + 0x228)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar2)));
    fVar2 = ((float)GEN_TOF((((float10)fVar2 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                   (float10)*(double *)&REFG(undefined, 0x1080220))));
    (*(float * PTR32 *)(gen_frame + 0x228)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar2)));
    fVar13 = ((float10)GEN_TOD(fsin((float10)fVar2)));
    (*(float * PTR32 *)(gen_frame + 0x228)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar13)));
    (*(float * PTR32 *)(gen_frame + 0x228)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)(float)fVar13 * (float10)fVar17))));
    F_0054fa20(((float *)(gen_frame + 0x230)) GEN_EDX_FWD,*(undefined4 *)(iVar11 + 0x10));
    fVar17 = gen_bits2f((uint)(*(float * PTR32 *)(gen_frame + 0x228)) ^ REFG(uint, 0x10920d0));
    (*(float *)(gen_frame + 0x224)) = fVar17;
    (*(float *)(gen_frame + 0xe0)) = fVar17;
    (*(float *)(gen_frame + 0xe4)) = fVar17;
    (*(undefined4 *)(gen_frame + 0xe8)) = 0;
    puVar9 = (undefined4 *)F_004eea10(&(*(float *)(gen_frame + 0xe0)) GEN_EDX_ARG,(uint)((float *)(gen_frame + 0x230)));
    (*(undefined4 *)(gen_frame + 0x2f0)) = *puVar9;
    (*(undefined4 *)(gen_frame + 0x2f4)) = puVar9[1];
    uVar1 = puVar9[2];
    (*(float * PTR32 *)(gen_frame + 0x80)) = (*(float * PTR32 *)(gen_frame + 0x228));
    (*(undefined4 *)(gen_frame + 0x2f8)) = uVar1;
    (*(float *)(gen_frame + 0x84)) = (*(float *)(gen_frame + 0x224));
    (*(undefined4 *)(gen_frame + 0x88)) = 0;
    puVar9 = (undefined4 *)F_004eea10(&(*(float * PTR32 *)(gen_frame + 0x80)) GEN_EDX_ARG,(uint)((float *)(gen_frame + 0x230)));
    (*(undefined4 *)(gen_frame + 0x300)) = *puVar9;
    (*(undefined4 *)(gen_frame + 0x304)) = puVar9[1];
    (*(undefined4 *)(gen_frame + 0x308)) = puVar9[2];
    (*(float *)(gen_frame + 0x160)) = (*(float *)(gen_frame + 0x224));
    (*(float * PTR32 *)(gen_frame + 0x164)) = (*(float * PTR32 *)(gen_frame + 0x228));
    (*(undefined4 *)(gen_frame + 0x168)) = 0;
    puVar9 = (undefined4 *)F_004eea10(&(*(float *)(gen_frame + 0x160)) GEN_EDX_ARG,(uint)((float *)(gen_frame + 0x230)));
    (*(undefined4 *)(gen_frame + 0x310)) = *puVar9;
    (*(undefined4 *)(gen_frame + 0x314)) = puVar9[1];
    (*(undefined4 *)(gen_frame + 0x318)) = puVar9[2];
    (*(float * PTR32 *)(gen_frame + 0x150)) = (*(float * PTR32 *)(gen_frame + 0x228));
    (*(float * PTR32 *)(gen_frame + 0x154)) = (*(float * PTR32 *)(gen_frame + 0x228));
    (*(undefined4 *)(gen_frame + 0x158)) = 0;
    puVar9 = (undefined4 *)F_004eea10(&(*(float * PTR32 *)(gen_frame + 0x150)) GEN_EDX_ARG,(uint)((float *)(gen_frame + 0x230)));
    (*(undefined4 *)(gen_frame + 0x320)) = *puVar9;
    (*(undefined4 *)(gen_frame + 0x324)) = puVar9[1];
    (*(undefined4 *)(gen_frame + 0x328)) = puVar9[2];
    (*(float *)(gen_frame + 0x130)) = (*(float *)(gen_frame + 0x224));
    (*(float *)(gen_frame + 0x134)) = (*(float *)(gen_frame + 0x224));
    (*(float *)(gen_frame + 0x138)) = (*(float *)(gen_frame + 0x22c));
    puVar9 = (undefined4 *)F_004eea10(&(*(float *)(gen_frame + 0x130)) GEN_EDX_ARG,(uint)((float *)(gen_frame + 0x230)));
    (*(undefined4 *)(gen_frame + 0x330)) = *puVar9;
    (*(undefined4 *)(gen_frame + 0x334)) = puVar9[1];
    (*(undefined4 *)(gen_frame + 0x338)) = puVar9[2];
    (*(float * PTR32 *)(gen_frame + 0x110)) = (*(float * PTR32 *)(gen_frame + 0x228));
    (*(float *)(gen_frame + 0x114)) = (*(float *)(gen_frame + 0x224));
    (*(float *)(gen_frame + 0x118)) = (*(float *)(gen_frame + 0x22c));
    puVar9 = (undefined4 *)F_004eea10(&(*(float * PTR32 *)(gen_frame + 0x110)) GEN_EDX_ARG,(uint)((float *)(gen_frame + 0x230)));
    (*(undefined4 *)(gen_frame + 0x340)) = *puVar9;
    (*(undefined4 *)(gen_frame + 0x344)) = puVar9[1];
    (*(undefined4 *)(gen_frame + 0x348)) = puVar9[2];
    (*(float *)(gen_frame + 0xf0)) = (*(float *)(gen_frame + 0x224));
    (*(float * PTR32 *)(gen_frame + 0xf4)) = (*(float * PTR32 *)(gen_frame + 0x228));
    (*(float *)(gen_frame + 0xf8)) = (*(float *)(gen_frame + 0x22c));
    puVar9 = (undefined4 *)F_004eea10(&(*(float *)(gen_frame + 0xf0)) GEN_EDX_ARG,(uint)((float *)(gen_frame + 0x230)));
    (*(undefined4 *)(gen_frame + 0x350)) = *puVar9;
    (*(undefined4 *)(gen_frame + 0x354)) = puVar9[1];
    (*(undefined4 *)(gen_frame + 0x358)) = puVar9[2];
    (*(float * PTR32 *)(gen_frame + 0x1b0)) = (*(float * PTR32 *)(gen_frame + 0x228));
    (*(float * PTR32 *)(gen_frame + 0x1b4)) = (*(float * PTR32 *)(gen_frame + 0x228));
    (*(float *)(gen_frame + 0x1b8)) = (*(float *)(gen_frame + 0x22c));
    puVar9 = (undefined4 *)F_004eea10(&(*(float * PTR32 *)(gen_frame + 0x1b0)) GEN_EDX_ARG,(uint)((float *)(gen_frame + 0x230)));
    (*(undefined4 *)(gen_frame + 0x360)) = *puVar9;
    (*(undefined4 *)(gen_frame + 0x364)) = puVar9[1];
    (*(undefined4 *)(gen_frame + 0x368)) = puVar9[2];
    F_004f4990(&(*(float *)(gen_frame + 0x1e0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x2f0)),8,0x10);
    *param_1 = (*(float *)(gen_frame + 0x1e0));
    param_1[1] = (*(float *)(gen_frame + 0x1e4));
    param_1[2] = (*(float *)(gen_frame + 0x1e8));
    param_1[4] = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x1f0)))));
    param_1[5] = (*(float *)(gen_frame + 0x1f4));
    fVar17 = (*(float *)(gen_frame + 0x1f8));
  }
  else if (iVar7 == 4) {
    if ((*(byte *)(iVar11 + 8) >> 4 & 1) == 0) {
      F_00607160(&(*(float *)(gen_frame + 0x180)) GEN_EDX_ARG,*(undefined4 *)(iVar11 + 0x10));
      fVar17 = *((float *)GEN_TOP((*(int *)(this + 0x70) + 0x78)));
      (*(float *)(gen_frame + 0x224)) = REFG(float, 0x10abe98);
      pfVar10 = &(*(float *)(gen_frame + 0x22c));
      fVar17 = (float)((float10)fVar17 / (float10)*(double *)&REFG(undefined, 0x1090718));
      (*(float *)(gen_frame + 0x22c)) = fVar17;
      if (!(*(double *)&REFG(undefined, 0x109ce00) < (double)fVar17)) {
        pfVar10 = &(*(float *)(gen_frame + 0x224));
      }
      fVar17 = *pfVar10;
      (*(float *)(gen_frame + 0x224)) = fVar17;
      fVar2 = (float)((float10)(*(float *)(gen_frame + 0x1a0)) * (float10)(*(float *)(gen_frame + 0x1a0)) +
                     (float10)(*(float *)(gen_frame + 0x1a4)) * (float10)(*(float *)(gen_frame + 0x1a4)));
      (*(float *)(gen_frame + 0x22c)) = fVar2;
      fVar2 = ((float)GEN_TOF(SQRT((float10)fVar2)));
      (*(float *)(gen_frame + 0x22c)) = fVar2;
      iVar11 = *(int *)(this + 0x70);
      (*(float *)(gen_frame + 0x54)) = fVar2;
      fVar13 = (float10)fVar17;
      fVar17 = ((float)GEN_TOF(((fVar13 + fVar13) + (float10)fVar2)));
      (*(float *)(gen_frame + 0x224)) = fVar17;
      (*(float *)(gen_frame + 0x1a0)) = fVar17;
      (*(float *)(gen_frame + 0x1a4)) = fVar17;
      fVar17 = ((float)GEN_TOF(((float10)*(float *)(iVar11 + 0x7c) + (float10)fVar2)));
      (*(float *)(gen_frame + 0x58)) = fVar17;
      (*(float *)(gen_frame + 0x1a8)) = fVar17;
      F_004bdee0(((undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,*(float *)(iVar11 + 0x60));
      F_0065ed60(((undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,*(float *)(iVar11 + 100));
      puVar9 = ((undefined4 *)(gen_frame + 0x20));
      puVar12 = ((undefined4 *)(gen_frame + 0x2b0));
      for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 - 1) {
        *puVar12 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar12 = puVar12 + 1;
      }
      F_004efe70(((undefined4 *)(gen_frame + 0x2b0)) GEN_EDX_ARG,(uint)((undefined1 *)(gen_frame + 0x190)));
      fVar14 = (float10)(*(float *)(gen_frame + 0x22c));
      ((float *)(gen_frame + 0x230))[0] = (*(float *)(gen_frame + 0x1a0));
      (*(float *)(gen_frame + 0x58)) = ((float)GEN_TOF(-fVar14));
      fVar13 = (float10)0;
      ((float *)(gen_frame + 0x230))[1] = 0.0;
      ((float *)(gen_frame + 0x230))[2] = 0.0;
      (*(undefined4 *)(gen_frame + 0x240)) = 0;
      (*(undefined4 *)(gen_frame + 0x248)) = 0;
      (*(undefined4 *)(gen_frame + 0x250)) = 0;
      fVar17 = (float)(fVar13 + fVar13);
      (*(float *)(gen_frame + 0x22c)) = fVar17;
      (*(undefined4 *)(gen_frame + 0x254)) = 0;
      (*(float *)(gen_frame + 0x260)) = fVar17;
      (*(float *)(gen_frame + 0x264)) = fVar17;
      (*(float *)(gen_frame + 0x244)) = (*(float *)(gen_frame + 0x1a4));
      (*(float *)(gen_frame + 0x258)) = (*(float *)(gen_frame + 0x1a8));
      (*(float *)(gen_frame + 0x268)) = (float)(fVar13 + (float10)((float)GEN_TOF(-fVar14)));
      F_004ef9d0(((float *)(gen_frame + 0x230)) GEN_EDX_ARG,(uint)((undefined4 *)(gen_frame + 0x2b0)));
      (*(float *)(gen_frame + 0x260)) = (float)((float10)(*(float *)(gen_frame + 0x260)) + (float10)(*(float *)(gen_frame + 0x180)));
      (*(float *)(gen_frame + 0x0)) = REFG(float, 0x109cab8);
      (*(float *)(gen_frame + 0x264)) = (float)((float10)(*(float *)(gen_frame + 0x184)) + (float10)(*(float *)(gen_frame + 0x264)));
      (*(float *)(gen_frame + 0x4)) = REFG(float, 0x109cab8);
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(float *)(gen_frame + 0x268)) = (float)((float10)(*(float *)(gen_frame + 0x188)) + (float10)(*(float *)(gen_frame + 0x268)));
      puVar9 = (undefined4 *)F_004eea10(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)((float *)(gen_frame + 0x230)));
      (*(undefined4 *)(gen_frame + 0x2f0)) = *puVar9;
      (*(undefined4 *)(gen_frame + 0x2f4)) = puVar9[1];
      (*(undefined4 *)(gen_frame + 0x2f8)) = puVar9[2];
      (*(float *)(gen_frame + 0xc0)) = REFG(float, 0x1088068);
      (*(float *)(gen_frame + 0xc4)) = REFG(float, 0x109cab8);
      (*(undefined4 *)(gen_frame + 0xc8)) = 0;
      puVar9 = (undefined4 *)F_004eea10(&(*(float *)(gen_frame + 0xc0)) GEN_EDX_ARG,(uint)((float *)(gen_frame + 0x230)));
      (*(undefined4 *)(gen_frame + 0x300)) = *puVar9;
      (*(undefined4 *)(gen_frame + 0x304)) = puVar9[1];
      (*(undefined4 *)(gen_frame + 0x308)) = puVar9[2];
      (*(float *)(gen_frame + 0x140)) = REFG(float, 0x109cab8);
      (*(float *)(gen_frame + 0x144)) = REFG(float, 0x1088068);
      (*(undefined4 *)(gen_frame + 0x148)) = 0;
      puVar9 = (undefined4 *)F_004eea10(&(*(float *)(gen_frame + 0x140)) GEN_EDX_ARG,(uint)((float *)(gen_frame + 0x230)));
      (*(undefined4 *)(gen_frame + 0x310)) = *puVar9;
      (*(undefined4 *)(gen_frame + 0x314)) = puVar9[1];
      (*(undefined4 *)(gen_frame + 0x318)) = puVar9[2];
      (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1088068);
      (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1088068);
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      puVar9 = (undefined4 *)F_004eea10(&(*(float *)(gen_frame + 0x10)) GEN_EDX_ARG,(uint)((float *)(gen_frame + 0x230)));
      (*(undefined4 *)(gen_frame + 0x320)) = *puVar9;
      (*(undefined4 *)(gen_frame + 0x324)) = puVar9[1];
      (*(undefined4 *)(gen_frame + 0x328)) = puVar9[2];
      (*(float *)(gen_frame + 0x170)) = REFG(float, 0x109cab8);
      (*(float *)(gen_frame + 0x174)) = REFG(float, 0x109cab8);
      (*(undefined4 *)(gen_frame + 0x178)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      puVar9 = (undefined4 *)F_004eea10(&(*(float *)(gen_frame + 0x170)) GEN_EDX_ARG,(uint)((float *)(gen_frame + 0x230)));
      (*(undefined4 *)(gen_frame + 0x330)) = *puVar9;
      (*(undefined4 *)(gen_frame + 0x334)) = puVar9[1];
      (*(undefined4 *)(gen_frame + 0x338)) = puVar9[2];
      (*(float *)(gen_frame + 0xa0)) = REFG(float, 0x1088068);
      (*(float *)(gen_frame + 0xa4)) = REFG(float, 0x109cab8);
      (*(undefined4 *)(gen_frame + 0xa8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      puVar9 = (undefined4 *)F_004eea10(&(*(float *)(gen_frame + 0xa0)) GEN_EDX_ARG,(uint)((float *)(gen_frame + 0x230)));
      (*(undefined4 *)(gen_frame + 0x340)) = *puVar9;
      (*(undefined4 *)(gen_frame + 0x344)) = puVar9[1];
      (*(undefined4 *)(gen_frame + 0x348)) = puVar9[2];
      (*(float *)(gen_frame + 0x100)) = REFG(float, 0x109cab8);
      (*(float *)(gen_frame + 0x104)) = REFG(float, 0x1088068);
      (*(undefined4 *)(gen_frame + 0x108)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      puVar9 = (undefined4 *)F_004eea10(&(*(float *)(gen_frame + 0x100)) GEN_EDX_ARG,(uint)((float *)(gen_frame + 0x230)));
      (*(undefined4 *)(gen_frame + 0x350)) = *puVar9;
      (*(undefined4 *)(gen_frame + 0x354)) = puVar9[1];
      (*(undefined4 *)(gen_frame + 0x358)) = puVar9[2];
      (*(float *)(gen_frame + 0x60)) = REFG(float, 0x1088068);
      (*(float *)(gen_frame + 0x64)) = REFG(float, 0x1088068);
      (*(undefined4 *)(gen_frame + 0x68)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      puVar9 = (undefined4 *)F_004eea10(&(*(float *)(gen_frame + 0x60)) GEN_EDX_ARG,(uint)((float *)(gen_frame + 0x230)));
      (*(undefined4 *)(gen_frame + 0x360)) = *puVar9;
      (*(undefined4 *)(gen_frame + 0x364)) = puVar9[1];
      (*(undefined4 *)(gen_frame + 0x368)) = puVar9[2];
      F_004f4990(&(*(float *)(gen_frame + 0x1e0)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x2f0)),8,0x10);
      *(*(float * PTR32 *)(gen_frame + 0x228)) = (*(float *)(gen_frame + 0x1e0));
      (*(float * PTR32 *)(gen_frame + 0x228))[1] = (*(float *)(gen_frame + 0x1e4));
      (*(float * PTR32 *)(gen_frame + 0x228))[2] = (*(float *)(gen_frame + 0x1e8));
      (*(float * PTR32 *)(gen_frame + 0x228))[4] = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x1f0)))));
      (*(float * PTR32 *)(gen_frame + 0x228))[5] = (*(float *)(gen_frame + 0x1f4));
      (*(float * PTR32 *)(gen_frame + 0x228))[6] = (*(float *)(gen_frame + 0x1f8));
      pfVar10 = (*(float * PTR32 *)(gen_frame + 0x228));
      goto LAB_006a4899;
    }
    iVar7 = *(int *)(iVar11 + 0x10);
    fVar17 = *(float *)(iVar7 + 0x20);
    (*(float *)(gen_frame + 0x1c0)) = fVar17;
    fVar2 = *(float *)(iVar7 + 0x24);
    (*(float *)(gen_frame + 0x1c4)) = fVar2;
    fVar13 = (float10)fVar2;
    fVar14 = (float10)fVar17;
    fVar17 = (float)(fVar14 * fVar14 + fVar13 * fVar13);
    (*(float *)(gen_frame + 0x22c)) = fVar17;
    fVar17 = ((float)GEN_TOF(SQRT((float10)fVar17)));
    (*(float *)(gen_frame + 0x22c)) = fVar17;
    pfVar8 = *(float * PTR32 *)(iVar11 + 0x10);
    pfVar10 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)fVar17 + (float10)*(float *)(iVar11 + 0x7c)))))));
    (*(float * PTR32 *)(gen_frame + 0x228)) = pfVar10;
    fVar17 = *pfVar8;
    (*(float *)(gen_frame + 0x22c)) = fVar17;
    fVar13 = (float10)fVar17;
    fVar14 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar10)));
    fVar2 = (float)(fVar14 + fVar13);
    (*(float *)(gen_frame + 0x200)) = fVar2;
    fVar17 = pfVar8[1];
    (*(float *)(gen_frame + 0x22c)) = fVar17;
    fVar15 = (float10)fVar17;
    fVar3 = (float)(fVar15 + fVar14);
    (*(float *)(gen_frame + 0x204)) = fVar3;
    fVar17 = pfVar8[2];
    (*(float *)(gen_frame + 0x22c)) = fVar17;
    fVar16 = (float10)fVar17;
    fVar17 = (float)(fVar16 + fVar14);
    (*(float *)(gen_frame + 0x208)) = fVar17;
    fVar4 = (float)(fVar13 - fVar14);
    (*(float *)(gen_frame + 0x210)) = fVar4;
    fVar5 = (float)(fVar15 - fVar14);
    (*(float *)(gen_frame + 0x214)) = fVar5;
    fVar6 = (float)(fVar16 - fVar14);
    (*(float *)(gen_frame + 0x218)) = fVar6;
    *param_1 = fVar4;
    param_1[1] = fVar5;
    param_1[2] = fVar6;
    param_1[4] = fVar2;
    param_1[5] = fVar3;
  }
  else {
    fVar17 = *(float *)(iVar11 + 0x7c);
    pfVar10 = *(float * PTR32 *)(iVar11 + 0x10);
    if (iVar7 == 5) {
      fVar2 = *pfVar10;
      (*(float *)(gen_frame + 0x22c)) = fVar17;
      (*(float *)(gen_frame + 0x1d0)) = fVar2;
      (*(float *)(gen_frame + 0x1d4)) = pfVar10[1];
      (*(float *)(gen_frame + 0x1d8)) = pfVar10[2];
      (*(float *)(gen_frame + 0x1e0)) = pfVar10[4];
      (*(float *)(gen_frame + 0x1e4)) = pfVar10[5];
      (*(float *)(gen_frame + 0x1e8)) = pfVar10[6];
      (*(float *)(gen_frame + 0x1ec)) = pfVar10[7];
      (*(float * PTR32 *)(gen_frame + 0x1f0)) = ((float *)(uintptr_t)gen_fl2bits((float)(pfVar10[8])));
      fVar13 = (float10)fVar17 * (float10)*(double *)&REFG(undefined, 0x1092098);
      pfVar10 = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)*(double *)&REFG(undefined, 0x1092098) * fVar13 + (float10)pfVar10[8]))));
      (*(float * PTR32 *)(gen_frame + 0x1b0)) = pfVar10;
      fVar17 = (float)fVar13;
      (*(float *)(gen_frame + 0x22c)) = fVar17;
      (*(float * PTR32 *)(gen_frame + 0x1f0)) = pfVar10;
      (*(float *)(gen_frame + 0x1f4)) = fVar17;
      (*(float *)(gen_frame + 0x1f8)) = fVar17;
      F_0054fa20(((float *)(gen_frame + 0x230)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x1d0)));
      (*(float *)(gen_frame + 0x210)) = REFG(float, 0x109cab8);
      (*(float *)(gen_frame + 0x214)) = REFG(float, 0x109cab8);
      (*(float *)(gen_frame + 0x218)) = REFG(float, 0x109cab8);
      puVar9 = (undefined4 *)F_004eea10(&(*(float *)(gen_frame + 0x210)) GEN_EDX_ARG,(uint)((float *)(gen_frame + 0x230)));
      (*(undefined4 *)(gen_frame + 0x270)) = *puVar9;
      (*(undefined4 *)(gen_frame + 0x274)) = puVar9[1];
      (*(undefined4 *)(gen_frame + 0x278)) = puVar9[2];
      (*(float *)(gen_frame + 0x200)) = REFG(float, 0x1088068);
      (*(float *)(gen_frame + 0x204)) = REFG(float, 0x109cab8);
      (*(float *)(gen_frame + 0x208)) = REFG(float, 0x109cab8);
      puVar9 = (undefined4 *)F_004eea10(&(*(float *)(gen_frame + 0x200)) GEN_EDX_ARG,(uint)((float *)(gen_frame + 0x230)));
      (*(undefined4 *)(gen_frame + 0x280)) = *puVar9;
      (*(undefined4 *)(gen_frame + 0x284)) = puVar9[1];
      (*(undefined4 *)(gen_frame + 0x288)) = puVar9[2];
      (*(float *)(gen_frame + 0x70)) = REFG(float, 0x109cab8);
      (*(float *)(gen_frame + 0x74)) = REFG(float, 0x1088068);
      (*(float *)(gen_frame + 0x78)) = REFG(float, 0x109cab8);
      puVar9 = (undefined4 *)F_004eea10(&(*(float *)(gen_frame + 0x70)) GEN_EDX_ARG,(uint)((float *)(gen_frame + 0x230)));
      (*(undefined4 *)(gen_frame + 0x290)) = *puVar9;
      (*(undefined4 *)(gen_frame + 0x294)) = puVar9[1];
      (*(undefined4 *)(gen_frame + 0x298)) = puVar9[2];
      (*(float *)(gen_frame + 0x120)) = REFG(float, 0x1088068);
      (*(float *)(gen_frame + 0x124)) = REFG(float, 0x1088068);
      (*(float *)(gen_frame + 0x128)) = REFG(float, 0x109cab8);
      puVar9 = (undefined4 *)F_004eea10(&(*(float *)(gen_frame + 0x120)) GEN_EDX_ARG,(uint)((float *)(gen_frame + 0x230)));
      (*(undefined4 *)(gen_frame + 0x2a0)) = *puVar9;
      (*(undefined4 *)(gen_frame + 0x2a4)) = puVar9[1];
      (*(undefined4 *)(gen_frame + 0x2a8)) = puVar9[2];
      (*(float *)(gen_frame + 0xd0)) = REFG(float, 0x109cab8);
      (*(float *)(gen_frame + 0xd4)) = REFG(float, 0x109cab8);
      (*(float *)(gen_frame + 0xd8)) = REFG(float, 0x1088068);
      puVar9 = (undefined4 *)F_004eea10(&(*(float *)(gen_frame + 0xd0)) GEN_EDX_ARG,(uint)((float *)(gen_frame + 0x230)));
      ((undefined4 *)(gen_frame + 0x2b0))[0] = *puVar9;
      ((undefined4 *)(gen_frame + 0x2b0))[1] = puVar9[1];
      ((undefined4 *)(gen_frame + 0x2b0))[2] = puVar9[2];
      (*(float *)(gen_frame + 0xb0)) = REFG(float, 0x1088068);
      (*(float *)(gen_frame + 0xb4)) = REFG(float, 0x109cab8);
      (*(float *)(gen_frame + 0xb8)) = REFG(float, 0x1088068);
      puVar9 = (undefined4 *)F_004eea10(&(*(float *)(gen_frame + 0xb0)) GEN_EDX_ARG,(uint)((float *)(gen_frame + 0x230)));
      (*(undefined4 *)(gen_frame + 0x2c0)) = *puVar9;
      (*(undefined4 *)(gen_frame + 0x2c4)) = puVar9[1];
      (*(undefined4 *)(gen_frame + 0x2c8)) = puVar9[2];
      (*(float *)(gen_frame + 0x90)) = REFG(float, 0x109cab8);
      (*(float *)(gen_frame + 0x94)) = REFG(float, 0x1088068);
      (*(float *)(gen_frame + 0x98)) = REFG(float, 0x1088068);
      puVar9 = (undefined4 *)F_004eea10(&(*(float *)(gen_frame + 0x90)) GEN_EDX_ARG,(uint)((float *)(gen_frame + 0x230)));
      (*(undefined4 *)(gen_frame + 0x2d0)) = *puVar9;
      (*(undefined4 *)(gen_frame + 0x2d4)) = puVar9[1];
      (*(undefined4 *)(gen_frame + 0x2d8)) = puVar9[2];
      (*(float *)(gen_frame + 0x1c0)) = REFG(float, 0x1088068);
      (*(float *)(gen_frame + 0x1c4)) = REFG(float, 0x1088068);
      (*(float *)(gen_frame + 0x1c8)) = REFG(float, 0x1088068);
      puVar9 = (undefined4 *)F_004eea10(&(*(float *)(gen_frame + 0x1c0)) GEN_EDX_ARG,(uint)((float *)(gen_frame + 0x230)));
      (*(undefined4 *)(gen_frame + 0x2e0)) = *puVar9;
      (*(undefined4 *)(gen_frame + 0x2e4)) = puVar9[1];
      (*(undefined4 *)(gen_frame + 0x2e8)) = puVar9[2];
      F_004f4990(&(*(float *)(gen_frame + 0x40)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x270)),8,0x10);
      *param_1 = (*(float *)(gen_frame + 0x40));
      param_1[1] = (*(float *)(gen_frame + 0x44));
      param_1[2] = (*(float *)(gen_frame + 0x48));
      param_1[4] = (*(float *)(gen_frame + 0x50));
      param_1[5] = (*(float *)(gen_frame + 0x54));
      fVar17 = (*(float *)(gen_frame + 0x58));
    }
    else {
      (*(float *)(gen_frame + 0x224)) = fVar17;
      fVar2 = *pfVar10;
      (*(float *)(gen_frame + 0x22c)) = fVar2;
      fVar13 = (float10)fVar2;
      fVar14 = (float10)fVar17;
      fVar2 = (float)(fVar14 + fVar13);
      (*(float *)(gen_frame + 0x210)) = fVar2;
      fVar17 = pfVar10[1];
      (*(float *)(gen_frame + 0x22c)) = fVar17;
      fVar15 = (float10)fVar17;
      fVar3 = (float)(fVar15 + fVar14);
      (*(float *)(gen_frame + 0x214)) = fVar3;
      fVar17 = pfVar10[2];
      (*(float *)(gen_frame + 0x22c)) = fVar17;
      fVar16 = (float10)fVar17;
      fVar17 = (float)(fVar16 + fVar14);
      (*(float *)(gen_frame + 0x218)) = fVar17;
      fVar4 = (float)(fVar13 - fVar14);
      (*(float *)(gen_frame + 0x200)) = fVar4;
      fVar5 = (float)(fVar15 - fVar14);
      (*(float *)(gen_frame + 0x204)) = fVar5;
      fVar6 = (float)(fVar16 - fVar14);
      (*(float *)(gen_frame + 0x208)) = fVar6;
      *param_1 = fVar4;
      param_1[1] = fVar5;
      param_1[2] = fVar6;
      param_1[4] = fVar2;
      param_1[5] = fVar3;
    }
  }
  param_1[6] = fVar17;
  pfVar10 = param_1;
LAB_006a4899: ;
  F_00c47745((*(uint *)(gen_frame + 0x37c)) ^ (uint)(uint)(gen_frame + 0x380) GEN_EDX_ARG);
  return (uint)pfVar10;
}

/* ref: Client::Graphics::Scene::Light::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_006a48b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x6a48b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  code * pcVar1;
  uint uVar2;
  
  if ((byte)this[0x65] == 1) {
    uVar2 = 0;
    if (*(int *)(this + 0x74) == 0) {
      pcVar1 = *(gen_code32 *)(*(int *)this + 0x28);
      this[0x65] = (undefined1)0x3;
      uVar2 = (*pcVar1)(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar2;
    }
  }
  else {
    uVar2 = (byte)this[0x65] - 2;
    if (uVar2 == 0) {
      uVar2 = F_006970f0(this GEN_EDX_FWD);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_006a48e0 */
GEN_FRAME uint F_006a48e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6a48e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  if (((param_2 < 0x18) || ((*param_3 & 0x3000000) == 0)) || ((*(byte *)(param_1 + 100) & 1) == 0))
  {
    *param_3 = 0;
  }
  return (uint)param_3;
}

/* ref: FUN_006a4910 */
GEN_FRAME byte GEN_THISCALL F_006a4910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6a4910u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  int iVar2;
  byte * pbVar3;
  byte * pbVar4;
  byte * pbVar5;
  int iVar6;
  uint uVar7;
  int * piVar8;
  bool bVar9;
  
  pbVar3 = (*(byte * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(byte * PTR32 *)&gen_args[1]) == (byte *)0x0) {
    return 0;
  }
  pbVar4 = (*(byte * PTR32 *)&gen_args[1]);
  do {
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  } while (bVar1 != 0);
  if (pbVar4 == (*(byte * PTR32 *)&gen_args[1]) + 1) {
    return 0;
  }
  iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70)));
  if (iVar2 != 0) {
    pbVar4 = (byte *)(iVar2 + 0x3c);
    pbVar5 = (*(byte * PTR32 *)&gen_args[1]);
    if (0xf < *(uint *)(iVar2 + 0x50)) {
      pbVar4 = *(byte * PTR32 *)pbVar4;
    }
    do {
      bVar1 = *pbVar5;
      bVar9 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_006a4970: ;
        iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_006a4975;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar9 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_006a4970;
      pbVar5 = pbVar5 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_006a4975: ;
    if (iVar6 == 0) {
      return 1;
    }
    if (iVar2 != 0) {
      F_0050c620(iVar2,0,0);
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))) = 0;
    }
  }
  F_004ff2f0(&(*(byte * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  F_00503ef0(&(*(byte * PTR32 *)&gen_args[1]),pbVar3);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = &REFG(undefined, 0x616d62);
  if ((char)(*(undefined4 *)&gen_args[2]) == '\0') {
    uVar7 = F_00513d20(&(*(byte * PTR32 *)&gen_args[1]),&(*(undefined * PTR32 *)(gen_frame + 0x8)),pbVar3,0,0,0);
  }
  else {
    uVar7 = F_00513d70(&(*(byte * PTR32 *)&gen_args[1]),&(*(undefined * PTR32 *)(gen_frame + 0x8)),pbVar3,0,0,0);
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))) = uVar7;
  if (uVar7 != 0) {
    piVar8 = (int *)(uVar7 + 0x8c);
    iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar8), 0);
    if (iVar2 < 8) {
      *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x65))) = 2;
      F_00697250((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
      return 1;
    }
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x65))) = 4;
  }
  return 0;
}

/* ref: FUN_006a4a30 */
GEN_FRAME byte GEN_THISCALL F_006a4a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6a4a30u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  int iVar2;
  byte * pbVar3;
  undefined * this_00;
  byte * pbVar4;
  byte * pbVar5;
  int iVar6;
  uint uVar7;
  int * piVar8;
  bool bVar9;
  
  pbVar3 = (*(byte * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(byte * PTR32 *)&gen_args[1]) != (byte *)0x0) {
    pbVar4 = (*(byte * PTR32 *)&gen_args[1]);
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    if (pbVar4 == (*(byte * PTR32 *)&gen_args[1]) + 1) {
      return 0;
    }
    iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74)));
    if (iVar2 != 0) {
      pbVar4 = (byte *)(iVar2 + 0x3c);
      pbVar5 = (*(byte * PTR32 *)&gen_args[1]);
      if (0xf < *(uint *)(iVar2 + 0x50)) {
        pbVar4 = *(byte * PTR32 *)pbVar4;
      }
      do {
        bVar1 = *pbVar5;
        bVar9 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_006a4a95: ;
          iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_006a4a9a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar9 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_006a4a95;
        pbVar5 = pbVar5 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_006a4a9a: ;
      if (iVar6 == 0) {
        return 1;
      }
      if (iVar2 != 0) {
        F_0050c620(iVar2,0,0);
        *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x74) = 0;
      }
    }
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    F_004ff2f0(&(*(byte * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
    F_00503ef0(&(*(byte * PTR32 *)&gen_args[1]),pbVar3);
    (*(undefined4 *)(gen_frame + 0x4)) = 0x746578;
    if ((*(uint *)&REFG(undefined, 0x1488334) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x1488334) = *(uint *)&REFG(undefined, 0x1488334) | 1;
      *(undefined4 *)&REFG(undefined, 0x148830c) = 0;
      *(undefined4 *)&REFG(undefined, 0x1488310) = REFG(undefined4, 0x1302ff0);
      *(undefined4 *)&REFG(undefined, 0x1488314) = 0;
      *(undefined4 *)&REFG(undefined, 0x1488318) = 0;
      *(undefined4 *)&REFG(undefined, 0x148831c) = 5;
      REFG(undefined4, 0x1488320) = 0xff;
      *(undefined4 *)&REFG(undefined, 0x1488329) = 0x101;
      *(undefined2 *)&REFG(undefined, 0x148832d) = 0;
      *(undefined4 *)&REFG(undefined, 0x1488330) = 0;
    }
    if ((char)(*(undefined4 *)&gen_args[2]) == '\0') {
      uVar7 = F_00513d20(&(*(byte * PTR32 *)&gen_args[1]),&(*(undefined4 *)(gen_frame + 0x4)),pbVar3,&REFG(undefined, 0x148830c),0,0);
    }
    else {
      uVar7 = F_00513d70(&(*(byte * PTR32 *)&gen_args[1]),&(*(undefined4 *)(gen_frame + 0x4)),pbVar3,&REFG(undefined, 0x148830c),0,0);
    }
    *(uint *)((int)this_00 + 0x74) = uVar7;
    if (uVar7 != 0) {
      piVar8 = (int *)(uVar7 + 0x8c);
      iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar8), 0);
      if (iVar2 < 8) {
        *(undefined1 *)((int)this_00 + 0x65) = 2;
        F_00697250(this_00 GEN_EDX_ARG);
        return 1;
      }
      *(undefined1 *)((int)this_00 + 0x65) = 4;
    }
  }
  return 0;
}

/* ref: FUN_006a4ba0 */
GEN_FRAME byte GEN_THISCALL F_006a4ba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6a4ba0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  char cVar2;
  char * pcVar3;
  byte bVar4;
  char * pcVar5;
  uint uVar6;
  int * piVar7;
  
  pcVar3 = (*(char * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(char * PTR32 *)&gen_args[1]) != (char *)0x0) {
    pcVar5 = (*(char * PTR32 *)&gen_args[1]);
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if (pcVar5 == (*(char * PTR32 *)&gen_args[1]) + 1) {
      return 0;
    }
    if ((*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))) != (undefined *)0x0) &&
       (bVar4 = F_00501350(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))) GEN_EDX_FWD,(*(char * PTR32 *)&gen_args[1])), bVar4 != 0)) {
      return 1;
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))) != 0) {
      F_0050c620(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))),0,0);
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))) = 0;
    }
    F_004ff2f0(&(*(char * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
    F_00503ef0(&(*(char * PTR32 *)&gen_args[1]),pcVar3);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x656e7662;
    if ((char)(*(undefined4 *)&gen_args[2]) == '\0') {
      uVar6 = F_00513d20(&(*(char * PTR32 *)&gen_args[1]),&(*(undefined * PTR32 *)(gen_frame + 0x8)),pcVar3,0,0,0);
    }
    else {
      uVar6 = F_00513d70(&(*(char * PTR32 *)&gen_args[1]),&(*(undefined * PTR32 *)(gen_frame + 0x8)),pcVar3,0,0,0);
    }
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))) = uVar6;
    if (uVar6 != 0) {
      piVar7 = (int *)(uVar6 + 0x8c);
      iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar7), 0);
      if (iVar1 < 8) {
        *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x65))) = 2;
        F_00697530((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
        return 1;
      }
      *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x65))) = 4;
    }
  }
  return 0;
}

/* ref: FUN_006a4c80 */
GEN_FRAME byte GEN_THISCALL F_006a4c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6a4c80u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  char cVar2;
  char * pcVar3;
  byte bVar4;
  char * pcVar5;
  uint uVar6;
  int * piVar7;
  
  pcVar3 = (*(char * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(char * PTR32 *)&gen_args[1]) != (char *)0x0) {
    pcVar5 = (*(char * PTR32 *)&gen_args[1]);
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if (pcVar5 == (*(char * PTR32 *)&gen_args[1]) + 1) {
      return 0;
    }
    if ((*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) != (undefined *)0x0) &&
       (bVar4 = F_00501350(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) GEN_EDX_FWD,(*(char * PTR32 *)&gen_args[1])), bVar4 != 0)) {
      return 1;
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) != 0) {
      F_0050c620(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))),0,0);
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) = 0;
    }
    F_004ff2f0(&(*(char * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
    F_00503ef0(&(*(char * PTR32 *)&gen_args[1]),pcVar3);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x65737362;
    if ((char)(*(undefined4 *)&gen_args[2]) == '\0') {
      uVar6 = F_00513d20(&(*(char * PTR32 *)&gen_args[1]),&(*(undefined * PTR32 *)(gen_frame + 0x8)),pcVar3,0,0,0);
    }
    else {
      uVar6 = F_00513d70(&(*(char * PTR32 *)&gen_args[1]),&(*(undefined * PTR32 *)(gen_frame + 0x8)),pcVar3,0,0,0);
    }
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) = uVar6;
    if (uVar6 != 0) {
      piVar7 = (int *)(uVar6 + 0x8c);
      iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar7), 0);
      if (iVar1 < 8) {
        *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x65))) = 2;
        F_00697530((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
        return 1;
      }
      *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x65))) = 4;
    }
  }
  return 0;
}

/* ref: FUN_006a4d60 */
GEN_FRAME byte GEN_THISCALL F_006a4d60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6a4d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = F_006a4ba0((undefined *)(param_1 * 0xa0 + 0x80 + (int)this) GEN_EDX_FWD,param_2,0);
  return bVar1 != 0;
}

/* ref: FUN_006a4d90 */
GEN_FRAME byte GEN_THISCALL F_006a4d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6a4d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = F_006a4c80((undefined *)(param_1 * 0xa0 + 0x80 + (int)this) GEN_EDX_FWD,param_2,0);
  return bVar1 != 0;
}

/* ref: FUN_006a4dc0 */
GEN_FRAME unsigned int GEN_THISCALL F_006a4dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6a4dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint local_10;
  int local_c;
  uint local_8;
  
  uVar6 = *(undefined4 *)((int)this + 0x584);
  uVar2 = F_006b38c0(this GEN_EDX_FWD,param_2[2]);
  iVar5 = *(int *)((int)this + 0x594) + uVar2 * 4;
  uVar2 = F_006b3840(this GEN_EDX_ARG,*param_2);
  F_006b3aa0((undefined *)((int)this + 0x598) GEN_EDX_ARG,*(int *)((int)this + 0x590) + uVar2 * 4,iVar5,uVar6);
  uVar2 = *(int *)((int)this + 0x584) + 0x1fU >> 5;
  local_10 = 0;
  if (uVar2 != 0) {
    local_c = 0;
    do {
      uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 0x59c) + local_10 * 4))) &
              *((uint *)GEN_TOP((*(int *)((int)this + 0x598) + local_10 * 4)));
      if (uVar3 != 0) {
        uVar4 = 0;
        local_8 = 1;
        do {
          if ((local_8 & uVar3) != 0) {
            iVar5 = local_c + uVar4;
            bVar1 = F_006977f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x580) + iVar5 * 4))) GEN_EDX_ARG,param_2);
            if (bVar1 != 0) {
              ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))
                        (param_1 GEN_EDX_ARG,iVar5,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x580) + iVar5 * 4))));
            }
          }
          uVar4 = uVar4 + 1;
          local_8 = local_8 << 1 | (uint)((int)local_8 < 0);
        } while (uVar4 < 0x20);
      }
      local_c = local_c + 0x20;
      local_10 = local_10 + 1;
    } while (local_10 < uVar2);
  }
  return 0;
}

/* ref: FUN_006a4ec0 */
GEN_FRAME uint GEN_THISCALL F_006a4ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6a4ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint local_10;
  int local_c;
  uint local_8;
  
  uVar5 = *(undefined4 *)((int)this + 0x584);
  uVar2 = F_006b38c0(this GEN_EDX_FWD,param_1[2]);
  iVar4 = *(int *)((int)this + 0x594) + uVar2 * 4;
  uVar2 = F_006b3840(this GEN_EDX_ARG,*param_1);
  F_006b3aa0((undefined *)((int)this + 0x598) GEN_EDX_ARG,*(int *)((int)this + 0x590) + uVar2 * 4,iVar4,uVar5);
  uVar2 = *(int *)((int)this + 0x584) + 0x1fU >> 5;
  local_10 = 0;
  if (uVar2 != 0) {
    local_c = 0;
    do {
      local_8 = *((uint *)GEN_TOP((*(int *)((int)this + 0x598) + local_10 * 4)));
      if ((char)param_2 != '\0') {
        local_8 = local_8 & *((uint *)GEN_TOP((*(int *)((int)this + 0x59c) + local_10 * 4)));
      }
      if ((char)param_3 != '\0') {
        local_8 = local_8 & *((uint *)GEN_TOP((*(int *)((int)this + 0x5a0) + local_10 * 4)));
      }
      if (local_8 != 0) {
        uVar3 = 0;
        do {
          if ((local_8 & 1 << ((byte)uVar3 & 0x1f)) != 0) {
            bVar1 = F_006977f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x580) + (local_c + uVar3) * 4))) GEN_EDX_ARG,
                                 param_1);
            if (bVar1 != 0) {
              return *((uint *)GEN_TOP((*(int *)((int)this + 0x580) + (local_c + uVar3) * 4)));
            }
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < 0x20);
      }
      local_c = local_c + 0x20;
      local_10 = local_10 + 1;
    } while (local_10 < uVar2);
  }
  return 0;
}

/* ref: FUN_006a4fd0 */
GEN_FRAME uint GEN_THISCALL F_006a4fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a4fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006a4ec0(this GEN_EDX_FWD,param_1,1,0);
  if ((uVar1 == 0) || (uVar1 = *(uint *)(uVar1 + 0x80), uVar1 == 0)) {
    uVar1 = *(uint *)((int)this + 0x100);
  }
  return uVar1;
}

/* ref: FUN_006a5000 */
GEN_FRAME uint GEN_THISCALL F_006a5000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a5000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006a4ec0(this GEN_EDX_FWD,param_1,1,0);
  if (uVar1 != 0) {
    return *(uint *)(uVar1 + 0x78);
  }
  return *(uint *)((int)this + 0xf8);
}

/* ref: FUN_006a5030 */
GEN_FRAME uint GEN_THISCALL F_006a5030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a5030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006a4ec0(this GEN_EDX_FWD,param_1,0,1);
  if (uVar1 != 0) {
    return *(uint *)(uVar1 + 0x7c);
  }
  return *(uint *)((int)this + 0xfc);
}

/* ref: FUN_006a5060 */
GEN_FRAME uint GEN_THISCALL F_006a5060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a5060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = F_006a4ec0(this GEN_EDX_FWD,param_1,1,0);
  if (((uVar1 == 0) || (iVar2 = *(int *)(uVar1 + 0x80), iVar2 == 0)) &&
     (iVar2 = *(int *)((int)this + 0x100), iVar2 == 0)) {
    return 0;
  }
  return *(uint *)(iVar2 + 0x78);
}

/* ref: FUN_006a50a0 */
GEN_NOFRAME uint GEN_THISCALL F_006a50a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a50a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x190];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint * puVar8;
  byte bVar9;
  uint * puVar10;
  undefined3 extraout_var = 0;
  int iVar11;
  int * piVar12;
  uint uVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  
  (*(uint *)(gen_frame + 0x17c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x180);
  iVar11 = 0;
  if (0 < *(int *)((int)this + 0x584)) {
    do {
      iVar7 = *((int *)GEN_TOP((*(int *)((int)this + 0x580) + iVar11 * 4)));
      (*(uint * PTR32 *)(gen_frame + 0xac)) = (uint *)iVar7;
      if (*(char *)(iVar7 + 0x96) != '\0') {
        bVar9 = F_0068fad0(this GEN_EDX_FWD,iVar7);
        if (bVar9 != 0) {
          F_00698c50(this GEN_EDX_ARG,(*(uint * PTR32 *)(gen_frame + 0xac)));
        }
        iVar11 = iVar11 - 1;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)((int)this + 0x584));
  }
  F_00c48350(*(undefined * PTR32 *)((int)this + 0x59c),0,*(int *)((int)this + 0x584) + 0x1fU >> 3 & 0x1ffffffc);
  F_00c48350(*(undefined * PTR32 *)((int)this + 0x5a0),0,*(int *)((int)this + 0x584) + 0x1fU >> 3 & 0x1ffffffc);
  piVar12 = (int *)((int)this + 0x100);
  (*(uint * PTR32 *)(gen_frame + 0xac)) = (uint *)0x8;
  do {
    ((code *)*(gen_code32 *)(piVar12[-0x20] + 0x10))(piVar12 - 0x20);
    if (piVar12[-2] != 0) {
      *(undefined1 *)(piVar12[-2] + 0x224) = 1;
    }
    if ((*piVar12 != 0) && (iVar11 = *(int *)(*piVar12 + 0x78), iVar11 != 0)) {
      *(undefined1 *)(iVar11 + 0x212) = 1;
    }
    piVar12 = piVar12 + 0x28;
    puVar10 = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0xac)) - 1);
    (*(uint * PTR32 *)(gen_frame + 0xac)) = puVar10;
  } while (puVar10 != (uint *)0x0);
  iVar11 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
  (*(int *)(gen_frame + 0x8c)) = iVar11;
  puVar10 = (uint *)F_004a5590(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG,iVar11 + 0x10,*(float *)(iVar11 + 0xa8),
                                 *(float *)(iVar11 + 0xa4),*(undefined4 *)(iVar11 + 0xac),
                                 *(float *)(iVar11 + 0xb0));
  uVar13 = 0;
  if (*(int *)((int)this + 0x584) != 0) {
    do {
      puVar8 = *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 0x580) + uVar13 * 4)));
      (*(uint * PTR32 *)(gen_frame + 0xac)) = puVar8;
      if ((puVar8[0x19] & 1) != 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*puVar8 + 0x10))(puVar8 GEN_EDX_ARG);
        ((GEN_TCODE *)*(gen_code32 *)(*(*(uint * PTR32 *)(gen_frame + 0xac)) + 0x30))((*(uint * PTR32 *)(gen_frame + 0xac)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)));
        fVar1 = (float)((float10)(*(float *)(gen_frame + 0x0)) + (float10)(*(float *)(gen_frame + 0x10)));
        (*(float *)(gen_frame + 0x50)) = fVar1;
        fVar2 = (float)((float10)(*(float *)(gen_frame + 0x4)) + (float10)(*(float *)(gen_frame + 0x14)));
        (*(float *)(gen_frame + 0x54)) = fVar2;
        fVar3 = (float)((float10)(*(float *)(gen_frame + 0x8)) + (float10)(*(float *)(gen_frame + 0x18)));
        (*(float *)(gen_frame + 0x58)) = fVar3;
        fVar14 = (float10)REFG(double, 0x1088108);
        fVar1 = (float)((float10)fVar1 * fVar14);
        (*(float *)(gen_frame + 0x90)) = fVar1;
        fVar2 = (float)((float10)fVar2 * fVar14);
        (*(float *)(gen_frame + 0x94)) = fVar2;
        fVar3 = (float)((float10)fVar3 * fVar14);
        (*(float *)(gen_frame + 0x98)) = fVar3;
        (*(float *)(gen_frame + 0x20)) = fVar1;
        (*(float *)(gen_frame + 0x24)) = fVar2;
        (*(float *)(gen_frame + 0x28)) = fVar3;
        fVar4 = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)(*(float *)(gen_frame + 0x0)));
        (*(float *)(gen_frame + 0x70)) = fVar4;
        fVar5 = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x4)));
        (*(float *)(gen_frame + 0x74)) = fVar5;
        fVar6 = (float)((float10)(*(float *)(gen_frame + 0x18)) - (float10)(*(float *)(gen_frame + 0x8)));
        (*(float *)(gen_frame + 0x78)) = fVar6;
        fVar4 = (float)((float10)fVar4 * fVar14);
        (*(float *)(gen_frame + 0x40)) = fVar4;
        fVar5 = (float)((float10)fVar5 * fVar14);
        (*(float *)(gen_frame + 0x44)) = fVar5;
        fVar6 = (float)(fVar14 * (float10)fVar6);
        (*(float *)(gen_frame + 0x48)) = fVar6;
        (*(float *)(gen_frame + 0x30)) = fVar4;
        (*(float *)(gen_frame + 0x34)) = fVar5;
        (*(float *)(gen_frame + 0x38)) = fVar6;
        fVar1 = ((float)GEN_TOF(((float10)fVar1 - (float10)*(float *)((*(int *)(gen_frame + 0x8c)) + 0x90))));
        (*(float *)(gen_frame + 0x60)) = fVar1;
        fVar2 = ((float)GEN_TOF(((float10)fVar2 - (float10)*(float *)((*(int *)(gen_frame + 0x8c)) + 0x94))));
        (*(float *)(gen_frame + 0x64)) = fVar2;
        fVar3 = ((float)GEN_TOF(((float10)fVar3 - (float10)*(float *)((*(int *)(gen_frame + 0x8c)) + 0x98))));
        (*(float *)(gen_frame + 0x68)) = fVar3;
        (*(float *)(gen_frame + 0xa8)) = gen_bits2f((*(uint * PTR32 *)(gen_frame + 0xac))[0x21]);
        fVar14 = (float10)fVar2;
        fVar15 = (float10)fVar1;
        fVar16 = (float10)fVar3;
        fVar17 = ((float10)GEN_TOD(gen_bits2f((*(uint * PTR32 *)(gen_frame + 0xac))[0x21])));
        fVar1 = ((float)GEN_TOF((fVar16 * fVar16 + (fVar15 * fVar15 + fVar14 * fVar14))));
        (*(float *)(gen_frame + 0xa8)) = fVar1;
        fVar2 = (float)(fVar17 * fVar17);
        (*(float *)(gen_frame + 0xa8)) = fVar2;
        puVar10 = (*(uint * PTR32 *)(gen_frame + 0xac));
        if ((float10)fVar1 < (float10)fVar2) {
          bVar9 = F_00663d80(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x20)),(uint)&(*(float *)(gen_frame + 0x30)));
          puVar10 = ((uint *)GEN_TOP(CONCAT31(extraout_var,bVar9)));
          if (bVar9 != 0) {
            if ((*(uint * PTR32 *)(gen_frame + 0xac))[0x1e] != 0) {
              *(undefined1 *)((*(uint * PTR32 *)(gen_frame + 0xac))[0x1e] + 0x224) = 1;
            }
            puVar10 = (uint *)0x0;
            if (((*(uint * PTR32 *)(gen_frame + 0xac))[0x20] != 0) &&
               (puVar10 = *(uint * PTR32 *)((*(uint * PTR32 *)(gen_frame + 0xac))[0x20] + 0x78), puVar10 != (uint *)0x0)) {
              *(undefined1 *)((int)puVar10 + 0x212) = 1;
            }
            if ((*(uint * PTR32 *)(gen_frame + 0xac))[0x1e] != 0) {
              iVar11 = *(int *)((int)this + 0x59c);
              puVar10 = ((uint *)GEN_TOP((iVar11 + (uVar13 >> 5) * 4)));
              *puVar10 = *puVar10 | 1 << ((byte)uVar13 & 0x1f);
              puVar10 = ((uint *)GEN_TOP((iVar11 + (uVar13 >> 5) * 4)));
            }
            if ((*(uint * PTR32 *)(gen_frame + 0xac))[0x1f] != 0) {
              puVar10 = ((uint *)GEN_TOP((*(int *)((int)this + 0x5a0) + (uVar13 >> 5) * 4)));
              *puVar10 = *puVar10 | 1 << ((byte)uVar13 & 0x1f);
            }
          }
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(uint *)((int)this + 0x584));
  }
  F_00c47745((*(uint *)(gen_frame + 0x17c)) ^ (uint)(uint)(gen_frame + 0x180) GEN_EDX_ARG);
  return (uint)puVar10;
}

/* ref: FUN_006a54a0 */
GEN_FRAME uint GEN_THISCALL F_006a54a0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x6a54a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined * this;
  undefined * this_00;
  uint * puVar1;
  uint uVar2;
  
  puVar1 = F_00c48350(*(undefined * PTR32 *)(param_1 + 0x5a4),0,*(int *)(param_1 + 0x58c) + 0x1fU >> 3 & 0x1ffffffc
                  );
  this = *(undefined * PTR32 *)(param_1 + 0x100);
  if (this != (undefined *)0x0) {
    puVar1 = ((uint *)GEN_TOP((*(byte *)((int)this + 0x65) - 2)));
    if (puVar1 == (uint *)0x0) {
      puVar1 = (uint *)F_00697250(this GEN_EDX_ARG);
    }
    else if ((*(int *)((int)this + 0x78) != 0) && (*(int *)((int)this + 0x7c) != 0)) {
      *(undefined1 *)((int)this + 0x65) = 3;
    }
    if (*(int *)((int)this + 0x78) != 0) {
      puVar1 = (uint *)F_004b4e70(*(int *)((int)this + 0x78) GEN_EDX_ARG,param_2);
    }
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0x58c) != 0) {
    do {
      this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x588) + uVar2 * 4)));
      if (this_00 == this) {
LAB_006a556b: ;
        puVar1 = ((uint *)GEN_TOP((*(int *)(param_1 + 0x5a4) + (uVar2 >> 5) * 4)));
        *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
      }
      else if ((*(byte *)((int)this_00 + 100) & 1) != 0) {
        if (*(char *)((int)this_00 + 0x65) == '\x02') {
          F_00697250(this_00 GEN_EDX_ARG);
        }
        else if ((*(int *)((int)this_00 + 0x78) != 0) && (*(int *)((int)this_00 + 0x7c) != 0)) {
          *(undefined1 *)((int)this_00 + 0x65) = 3;
        }
        if (*(int *)((int)this_00 + 0x78) != 0) {
          F_004b4e70(*(int *)((int)this_00 + 0x78) GEN_EDX_ARG,param_2);
        }
        goto LAB_006a556b;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x58c));
  }
  return (uint)puVar1;
}

/* ref: FUN_006a55a0 */
GEN_NOFRAME uint GEN_THISCALL F_006a55a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a55a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  byte bVar12;
  float * pfVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  fVar8 = REFG(float, 0x1087f04);
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  fVar14 = (float10)*(double *)&REFG(undefined, 0x10943d8);
  fVar1 = *(float *)((int)this + 0x1f8);
  bVar9 = *(byte *)((int)this + 0x1e4);
  fVar2 = *(float *)((int)this + 0x1fc);
  fVar3 = *(float *)((int)this + 0x200);
  (*(float *)(gen_frame + 0x0)) = *(float *)((int)this + 0x204);
  bVar12 = bVar9 >> 3 & 1;
  if (bVar12 == 0) {
    fVar4 = *(float *)((int)this + 0x1f0);
    ((float *)(gen_frame + 0x4))[2] = fVar4;
    if (0.0 < fVar4) {
      ((float *)(gen_frame + 0x4))[1] = 0.0;
      pfVar13 = ((float *)(gen_frame + 0x4)) + 2;
      fVar6 = ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) * fVar14 +
                     (float10)*(float *)((int)this + 500))));
      ((float *)(gen_frame + 0x4))[0] = fVar6;
      ((float *)(gen_frame + 0x4))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x4))[0], REFG(float, 0x1087f04));
      *(float *)((int)this + 500) = fVar6;
      fVar7 = (float)((float10)fVar6 / (float10)fVar4);
      ((float *)(gen_frame + 0x4))[2] = fVar7;
      if (!((float10)fVar7 < (float10)1)) {
        pfVar13 = ((float *)(gen_frame + 0x4));
      }
      if (!((float10)0 < (float10)*pfVar13)) {
        pfVar13 = ((float *)(gen_frame + 0x4)) + 1;
      }
      (*(float *)(gen_frame + 0x0)) = (float)((float10)*pfVar13 * (float10)(*(float *)(gen_frame + 0x0)));
      if ((float10)fVar4 <= (float10)fVar6) {
        (*(float *)(gen_frame + 0x0)) = fVar8;
        *(undefined4 *)((int)this + 500) = 0;
        *(undefined4 *)((int)this + 0x1f0) = 0;
      }
    }
  }
  if (bVar12 != 0) {
    ((float *)(gen_frame + 0x4))[1] = fVar8;
    pfVar13 = ((float *)(gen_frame + 0x4)) + 2;
    fVar8 = ((float)GEN_TOF(((float10)*(float *)((int)this + 500) +
                   (float10)*(float *)(REFG(int, 0x137104c) + 0x1198) * fVar14)));
    ((float *)(gen_frame + 0x4))[0] = fVar8;
    ((float *)(gen_frame + 0x4))[0] = 0.0;
    *(float *)((int)this + 500) = fVar8;
    ((float *)(gen_frame + 0x4))[2] = *(float *)((int)this + 0x1f0);
    fVar14 = (float10)*(float *)((int)this + 0x1f0);
    fVar4 = (float)((float10)fVar8 / fVar14);
    ((float *)(gen_frame + 0x4))[2] = fVar4;
    if (!((float10)fVar4 < (float10)1)) {
      pfVar13 = ((float *)(gen_frame + 0x4)) + 1;
    }
    if (!((float10)0 < (float10)*pfVar13)) {
      pfVar13 = ((float *)(gen_frame + 0x4));
    }
    (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF((((float10)1 - (float10)*pfVar13) * (float10)(*(float *)(gen_frame + 0x0)))));
    if (fVar14 <= (float10)fVar8) {
      *(byte *)((int)this + 0x1e4) = bVar9 & 0xf7;
      F_009bc2a0(*(undefined * PTR32 *)((int)this + 0x234) GEN_EDX_FWD);
      *(undefined4 *)((int)this + 500) = 0;
      *(undefined4 *)((int)this + 0x1f0) = 0;
    }
  }
  if ((*(byte *)((int)this + 0x1e4) & 1) != 0) {
    iVar10 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
    fVar14 = (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x30) -
                             (float10)*(float *)(iVar10 + 0x90))));
    fVar15 = (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x34) -
                             (float10)*(float *)(iVar10 + 0x94))));
    fVar16 = (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x38) -
                             (float10)*(float *)(iVar10 + 0x98))));
    fVar8 = ((float)GEN_TOF((fVar16 * fVar16 + (fVar15 * fVar15 + fVar14 * fVar14))));
    ((float *)(gen_frame + 0x4))[1] = fVar8;
    fVar4 = ((float)GEN_TOF(SQRT((float10)fVar8)));
    ((float *)(gen_frame + 0x4))[1] = fVar4;
    fVar8 = *(float *)((int)this + 0x208);
    ((float *)(gen_frame + 0x4))[2] = fVar8;
    if (0.0 <= fVar8) {
      fVar6 = *(float *)((int)this + 0x20c);
      ((float *)(gen_frame + 0x4))[1] = fVar6;
      if (0.0 <= fVar6) {
        fVar14 = (float10)fVar8;
        if (fVar14 < (float10)fVar6) {
          ((float *)(gen_frame + 0x4))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x4))[1], REFG(float, 0x1087f04));
          ((float *)(gen_frame + 0x4))[0] = 0.0;
          pfVar13 = ((float *)(gen_frame + 0x4)) + 2;
          fVar8 = ((float)GEN_TOF((((float10)fVar4 - fVar14) / ((float10)fVar6 - fVar14))));
          ((float *)(gen_frame + 0x4))[2] = fVar8;
          if (!((float10)fVar8 < (float10)1)) {
            pfVar13 = ((float *)(gen_frame + 0x4)) + 1;
          }
          if (!((float10)0 < (float10)*pfVar13)) {
            pfVar13 = ((float *)(gen_frame + 0x4));
          }
          (*(float *)(gen_frame + 0x0)) = (float)((float10)*pfVar13 * (float10)(*(float *)(gen_frame + 0x0)));
        }
      }
    }
    fVar8 = *(float *)((int)this + 0x210);
    ((float *)(gen_frame + 0x4))[1] = fVar8;
    if (0.0 <= fVar8) {
      fVar6 = *(float *)((int)this + 0x214);
      ((float *)(gen_frame + 0x4))[2] = fVar6;
      if (0.0 <= fVar6) {
        fVar14 = (float10)fVar8;
        if (fVar14 < (float10)fVar6) {
          ((float *)(gen_frame + 0x4))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x4))[1], REFG(float, 0x1087f04));
          ((float *)(gen_frame + 0x4))[0] = 0.0;
          pfVar13 = ((float *)(gen_frame + 0x4)) + 2;
          fVar8 = ((float)GEN_TOF((((float10)fVar4 - fVar14) / ((float10)fVar6 - fVar14))));
          ((float *)(gen_frame + 0x4))[2] = fVar8;
          if (!((float10)fVar8 < (float10)1)) {
            pfVar13 = ((float *)(gen_frame + 0x4)) + 1;
          }
          if (!((float10)0 < (float10)*pfVar13)) {
            pfVar13 = ((float *)(gen_frame + 0x4));
          }
          (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF((((float10)1 - (float10)*pfVar13) * (float10)(*(float *)(gen_frame + 0x0)))));
        }
      }
    }
  }
  F_009bc3a0(*(undefined4 *)((int)this + 0x234) GEN_EDX_ARG,fVar1,fVar2,fVar3,(*(float *)(gen_frame + 0x0)));
  F_009bc420(*(undefined4 *)((int)this + 0x234) GEN_EDX_ARG,*(float *)((int)this + 0x22c));
  F_009bc460(*(undefined4 *)((int)this + 0x234) GEN_EDX_ARG,*(float *)((int)this + 0x230));
  F_009bc190(*(undefined * PTR32 *)((int)this + 0x234) GEN_EDX_ARG,(uint)(*(byte *)((int)this + 100) & 1));
  uVar11 = F_009bc1e0(*(undefined * PTR32 *)((int)this + 0x234) GEN_EDX_ARG,(uint)(*(byte *)((int)this + 0x1e4) >> 4 & 1))
  ;
  *(byte *)((int)this + 0x1e4) = *(byte *)((int)this + 0x1e4) | 0x10;
  if ((*(uint *)((int)this + 0x24) >> 1 & 1) != 0) {
    fVar14 = (float10)0;
    uVar5 = *(undefined4 *)((int)this + 0x54);
    (*(float *)(gen_frame + 0x40)) = (float)fVar14;
    (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((int)this + 0x50);
    (*(float *)(gen_frame + 0x44)) = (float)fVar14;
    (*(float *)(gen_frame + 0x48)) = (float)fVar14;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = uVar5;
    (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)((int)this + 0x58);
    F_004efe70(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,(int)this + 0x40);
    (*(float *)(gen_frame + 0x40)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x30) + (float10)(*(float *)(gen_frame + 0x40)))));
    (*(float *)(gen_frame + 0x44)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x34) + (float10)(*(float *)(gen_frame + 0x44)))));
    (*(float *)(gen_frame + 0x48)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x38) + (float10)(*(float *)(gen_frame + 0x48)))));
    uVar11 = F_009bc130(*(undefined * PTR32 *)((int)this + 0x234) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x10)));
    *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffd;
  }
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60) GEN_EDX_ARG);
  return uVar11;
}

/* ref: FUN_006a59f0 */
GEN_FRAME byte GEN_THISCALL F_006a59f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a59f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  bool bVar1;
  
  bVar1 = (char)param_1 != '\0';
  *(byte *)((int)this + 0xe0b8) = *(byte *)((int)this + 0xe0b8) & 0xfe | bVar1;
  *(byte *)((int)this + 0x1c178) = *(byte *)((int)this + 0x1c178) & 0xfe | bVar1;
  return bVar1;
}

/* ref: FUN_006a5a30 */
GEN_NOFRAME uint GEN_THISCALL F_006a5a30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a5a30u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  F_0062c700(in_ecx GEN_EDX_FWD);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x10b32a4));
  in_ecx[0x12] = 0;
  in_ecx[0x13] = uVar1;
  in_ecx[0x14] = uVar1;
  in_ecx[0x15] = uVar1;
  in_ecx[0x16] = uVar1;
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  in_ecx[0x19] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_006a5a80 */
GEN_NOFRAME uint GEN_THISCALL F_006a5a80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a5a80u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_0062c700(in_ecx GEN_EDX_FWD);
  in_ecx[0xe] = 0;
  in_ecx[0xf] = 0;
  in_ecx[0x10] = 0;
  in_ecx[0x11] = 0;
  in_ecx[0x12] = 0;
  in_ecx[0x13] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x10b32bc));
  return (uint)in_ecx;
}

/* ref: FUN_006a5ab0 */
GEN_FRAME uint GEN_THISCALL F_006a5ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6a5ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  (*(uint *)(gen_frame + 0x108)) = uVar2;
  if ((param_2 != (undefined *)0x0) && (uVar2 = 0, param_3 != 0)) {
    *(int *)((int)this + 8) = param_3;
    *(undefined * PTR32 *)((int)this + 4) = param_2;
    uVar2 = F_006903c0(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x8)),0x100);
    if (uVar2 != 0) {
      F_004ff310(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,4,0);
      (*(undefined4 *)(gen_frame + 0x0)) = 0x61746368;
      uVar2 = F_00513d20(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x8)),0,0,0);
      *(uint *)((int)this + 0xc) = uVar2;
      if (uVar2 != 0) {
        uVar2 = F_00694350(param_2 GEN_EDX_ARG);
        uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
        *(uint *)((int)this + 0x10) = uVar2;
        *(undefined4 *)((int)this + 0x14) = 0xffffffff;
        *(ushort *)((int)param_2 + 0x70) = *(ushort *)((int)param_2 + 0x70) & 0xfffb;
        *(undefined4 *)((int)this + 0x18) = 0;
        *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) | 1;
        *(undefined4 *)((int)this + 0x28) = uVar1;
        *(undefined4 *)((int)this + 0x2c) = uVar1;
        *(undefined4 *)((int)this + 0x1c) = param_1;
        *(undefined4 *)((int)this + 0x20) = 0;
        *(undefined4 *)((int)this + 0x24) = 0;
        *(undefined4 *)((int)this + 0x30) = 0;
        F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
        return 1;
      }
    }
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG);
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return uVar2 & 0xffffff00;
}

/* ref: FUN_006a5bc0 */
GEN_FRAME byte GEN_THISCALL F_006a5bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a5bc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((*(int *)(in_ecx + 4) != 0) && (*(int *)(in_ecx + 8) != 0)) {
    *(uint *)(in_ecx + 0x18) = *(uint *)(in_ecx + 0x18) | 0xc;
    *(undefined4 *)(in_ecx + 0x20) = param_2;
    return 1;
  }
  return 0;
}

/* ref: FUN_006a5bf0 */
GEN_FRAME byte GEN_THISCALL F_006a5bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x6a5bf0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  
  if ((*(int *)(in_ecx + 4) != 0) && (*(int *)(in_ecx + 8) != 0)) {
    *(uint *)(in_ecx + 0x18) = *(uint *)(in_ecx + 0x18) | 0x30;
    *(undefined4 *)(in_ecx + 0x24) = param_2;
    fVar1 = *(float *)(in_ecx + 0x30);
    *(float *)(in_ecx + 0x30) = param_3;
    *(float *)(in_ecx + 0x28) =
         ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x28) +
                (float10)fVar1 *
                ((float10)*(float *)(in_ecx + 0x2c) - (float10)*(float *)(in_ecx + 0x28)))));
    return 1;
  }
  return 0;
}

/* ref: FUN_006a5c40 */
GEN_FRAME unsigned int GEN_THISCALL F_006a5c40(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x6a5c40u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(uint *)(in_ecx + 0x18) = *(uint *)(in_ecx + 0x18) | 0x20;
  *(float *)(in_ecx + 0x30) = param_2;
  return;
}

/* ref: FUN_006a5c60 */
GEN_NOFRAME uint GEN_THISCALL F_006a5c60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a5c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  char cVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  char * pcVar6;
  int iVar7;
  undefined4 * puVar8;
  undefined3 extraout_var = 0;
  char * pcVar9;
  
  (*(uint *)(gen_frame + 0xdc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xe0);
  uVar4 = *(uint *)((int)this + 0x18);
  piVar2 = *(int * PTR32 *)((int)this + 0xc);
  (*(int *)(gen_frame + 0x4c)) = *(int *)((int)this + 0x20);
  (*(char * PTR32 *)(gen_frame + 0x48)) = (char *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "n_root";
  if ((uVar4 >> 1 & 1) == 0) {
    (*(int *)(gen_frame + 0x40)) = *(int *)((int)this + 0x14);
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2 GEN_EDX_FWD);
    (*(int *)(gen_frame + 0x3c)) = uVar4 + 4;
    piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2 GEN_EDX_ARG)));
    (*(int *)(gen_frame + 0x44)) = *piVar5;
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2 GEN_EDX_ARG);
    (*(char * PTR32 *)(gen_frame + 0x54)) = ((char *)GEN_TOP((uVar4 + *((int *)GEN_TOP(((*(int *)(gen_frame + 0x3c)) + 0x10 +
                                        ((*(int *)(gen_frame + 0x44)) + ((*(int *)(gen_frame + 0x4c)) + (*(int *)(gen_frame + 0x40)) * 4) * 8) * 4))))));
  }
  else {
    (*(int *)(gen_frame + 0x3c)) = *(int *)((int)this + 0x14);
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2 GEN_EDX_ARG);
    (*(int *)(gen_frame + 0x40)) = uVar4 + 4;
    piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2 GEN_EDX_ARG)));
    (*(int *)(gen_frame + 0x44)) = *piVar5;
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2 GEN_EDX_ARG);
    pcVar9 = ((char *)GEN_TOP((uVar4 + *((int *)GEN_TOP(((*(int *)(gen_frame + 0x40)) + 0x10 +
                                      ((*(int *)(gen_frame + 0x44)) + ((*(int *)(gen_frame + 0x4c)) + (*(int *)(gen_frame + 0x3c)) * 4) * 8) * 4))))));
    pcVar6 = pcVar9;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar7 = (int)pcVar6 - (int)(pcVar9 + 1);
    (*(int *)(gen_frame + 0x4c)) = iVar7;
    (*(char * PTR32 *)(gen_frame + 0x54)) = pcVar9;
    if (pcVar9[iVar7 - 2] == '_') {
      if (pcVar9[iVar7 - 1] == 'l') {
        pcVar6 = (char *)F_00667cd0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY +
                                                         REFG(int, 0x15d6870) * 4) + 0x1a8))) GEN_EDX_ARG,iVar7 + 1);
        (*(char * PTR32 *)(gen_frame + 0x48)) = pcVar6;
        if (pcVar6 == (char *)0x0) goto LAB_006a5e39;
        F_00c46aa0(pcVar6,pcVar9,(*(int *)(gen_frame + 0x4c)) - 1);
        (pcVar6 + (*(int *)(gen_frame + 0x4c)) - 1)[0] = 'r';
        (pcVar6 + (*(int *)(gen_frame + 0x4c)) - 1)[1] = '\0';
      }
      else {
        if (pcVar9[iVar7 - 1] != 'r') goto LAB_006a5e39;
        pcVar6 = (char *)F_00667cd0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY +
                                                         REFG(int, 0x15d6870) * 4) + 0x1a8))) GEN_EDX_ARG,iVar7 + 1);
        (*(char * PTR32 *)(gen_frame + 0x48)) = pcVar6;
        if (pcVar6 == (char *)0x0) goto LAB_006a5e39;
        F_00c46aa0(pcVar6,pcVar9,(*(int *)(gen_frame + 0x4c)) - 1);
        (pcVar6 + (*(int *)(gen_frame + 0x4c)) - 1)[0] = 'l';
        (pcVar6 + (*(int *)(gen_frame + 0x4c)) - 1)[1] = '\0';
      }
      (*(char * PTR32 *)(gen_frame + 0x54)) = pcVar6;
    }
  }
LAB_006a5e39: ;
  puVar8 = (undefined4 *)F_0069ba90(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  (*(undefined4 *)(gen_frame + 0xa0)) = *puVar8;
  (*(undefined4 *)(gen_frame + 0xa4)) = puVar8[1];
  (*(undefined4 *)(gen_frame + 0xa8)) = puVar8[2];
  (*(undefined4 *)(gen_frame + 0xc0)) = puVar8[8];
  (*(undefined4 *)(gen_frame + 0xb0)) = puVar8[4];
  (*(undefined4 *)(gen_frame + 0xb4)) = puVar8[5];
  (*(undefined4 *)(gen_frame + 0xc4)) = puVar8[9];
  (*(undefined4 *)(gen_frame + 0xb8)) = puVar8[6];
  (*(undefined4 *)(gen_frame + 0xbc)) = puVar8[7];
  (*(undefined4 *)(gen_frame + 0xc8)) = puVar8[10];
  uVar4 = 0;
  if (*(int *)((int)this + 8) != 0) {
    bVar3 = F_0069b720(((undefined *)GEN_TOP((*(int *)((int)this + 4) + 0x90))) GEN_EDX_ARG,
                         *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 0x78))),
                         *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x78))),&(*(char * PTR32 *)(gen_frame + 0x50)),1);
    uVar4 = CONCAT31(extraout_var,bVar3);
  }
  if ((*(char * PTR32 *)(gen_frame + 0x48)) != (char *)0x0) {
    uVar4 = *((uint *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
    *(int *)(uVar4 + 0x28) = (int)(*(char * PTR32 *)(gen_frame + 0x48)) - *(int *)(uVar4 + 0x24);
  }
  *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) & 0xffffffd7;
  F_00c47745((*(uint *)(gen_frame + 0xdc)) ^ (uint)(uint)(gen_frame + 0xe0) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_006a5f00 */
GEN_FRAME uint GEN_THISCALL F_006a5f00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a5f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  uVar1 = F_0069bca0((undefined *)((int)this + 4) GEN_EDX_FWD);
  if (*(char *)((int)this + 0x14) != '\0') {
    uVar1 = 0;
    do {
      F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"chara/equipment/e%04d/e%04d.imc",uVar1,uVar1);
      uVar2 = F_00513dc0(((undefined1 *)(gen_frame + 0x8)),0,0,0);
      if (uVar2 != 0) {
        F_0050c620(uVar2,0,0);
        F_0050c620(uVar2,0,0);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x5f);
    uVar1 = 1;
    do {
      F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"chara/accessory/a%04d/a%04d.imc",uVar1,uVar1);
      uVar2 = F_00513dc0(((undefined1 *)(gen_frame + 0x8)),0,0,0);
      if (uVar2 != 0) {
        F_0050c620(uVar2,0,0);
        F_0050c620(uVar2,0,0);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x15);
    uVar1 = 1;
    do {
      F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"chara/xls/attachOffset/c%02d01.atch",uVar1,uVar1);
      uVar2 = F_00513dc0(((undefined1 *)(gen_frame + 0x8)),0,0,0);
      F_0050c620(uVar2,0,0);
      F_0050c620(uVar2,0,0);
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0xd);
    uVar1 = 1;
    do {
      F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"chara/human/c%02d01/skeleton/base/b0001/skl_c%02d01b0001.sklb",
                 uVar1,uVar1);
      uVar2 = F_00513dc0(((undefined1 *)(gen_frame + 0x8)),0,0,0);
      F_0050c620(uVar2,0,0);
      F_0050c620(uVar2,0,0);
      F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"chara/human/c%02d01/skeleton/base/b0001/skl_c%02d01b0001.skp",
                 uVar1,uVar1);
      uVar2 = F_00513dc0(((undefined1 *)(gen_frame + 0x8)),0,0,0);
      F_0050c620(uVar2,0,0);
      F_0050c620(uVar2,0,0);
      F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"chara/human/c%02d01/skeleton/base/b0001/eid_c%02d01b0001.eid",
                 uVar1,uVar1);
      uVar2 = F_00513dc0(((undefined1 *)(gen_frame + 0x8)),0,0,0);
      F_0050c620(uVar2,0,0);
      F_0050c620(uVar2,0,0);
      F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"chara/human/c%02d01/skeleton/base/b0001/phy_c%02d01b0001.phyb",
                 uVar1,uVar1);
      uVar2 = F_00513dc0(((undefined1 *)(gen_frame + 0x8)),0,0,0);
      F_0050c620(uVar2,0,0);
      F_0050c620(uVar2,0,0);
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0xd);
    uVar1 = 1;
    do {
      F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"chara/weapon/w%02d01/skeleton/base/b0001/skl_w%02d01b0001.sklb",
                 uVar1,uVar1);
      uVar2 = F_00513dc0(((undefined1 *)(gen_frame + 0x8)),0,0,0);
      F_0050c620(uVar2,0,0);
      F_0050c620(uVar2,0,0);
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0xb);
    uVar1 = 0x32;
    do {
      F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"chara/weapon/w%02d01/skeleton/base/b0001/skl_w%02d01b0001.sklb",
                 uVar1,uVar1);
      uVar2 = F_00513dc0(((undefined1 *)(gen_frame + 0x8)),0,0,0);
      F_0050c620(uVar2,0,0);
      F_0050c620(uVar2,0,0);
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x3a);
    uVar2 = 0x46;
    do {
      F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"chara/weapon/w%02d01/skeleton/base/b0001/skl_w%02d01b0001.sklb",
                 uVar2,uVar2);
      uVar1 = F_00513dc0(((undefined1 *)(gen_frame + 0x8)),0,0,0);
      F_0050c620(uVar1,0,0);
      F_0050c620(uVar1,0,0);
      F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,"chara/weapon/w%02d51/skeleton/base/b0001/skl_w%02d51b0001.sklb",
                 uVar2,uVar2);
      uVar1 = F_00513dc0(((undefined1 *)(gen_frame + 0x8)),0,0,0);
      F_0050c620(uVar1,0,0);
      uVar1 = F_0050c620(uVar1,0,0);
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x49);
    *(undefined1 *)((int)this + 0x14) = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_006a62a0 */
GEN_FRAME byte GEN_THISCALL F_006a62a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6a62a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = param_2;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  puVar2 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                             (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,param_2 * 4,4)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0x14)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x18)) = 5000;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x10100;
  (*(undefined1 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 6;
  (*(undefined2 *)(gen_frame + 0x21)) = 0;
  *(uint *)((int)this + 8) = param_2;
  *(uint * PTR32 *)((int)this + 0xc) = puVar2;
  param_2 = 0;
  if (uVar1 != 0) {
    iVar4 = param_1 - (int)puVar2;
    do {
      uVar3 = F_00513dc0(*(undefined4 *)(iVar4 + (int)puVar2),&(*(undefined4 *)(gen_frame + 0x0)),0,0);
      if (uVar3 == 0) {
        F_0069bca0((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG);
        return 0;
      }
      *puVar2 = uVar3;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    } while (param_2 < uVar1);
  }
  return 1;
}

/* ref: FUN_006a6400 */
GEN_FRAME byte GEN_THISCALL F_006a6400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6a6400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(undefined2 *)(gen_frame + 0x44)) = 0x2c;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0x250024;
  (*(undefined4 *)(gen_frame + 0x40)) = 0x2a0029;
  (*(undefined4 *)(gen_frame + 0x0)) = 0xb0065;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x100c9;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xa00c9;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x9012d;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x10130;
  (*(undefined4 *)(gen_frame + 0x14)) = 0x9015f;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x10162;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x70191;
  (*(undefined4 *)(gen_frame + 0x20)) = 0x1f0191;
  (*(undefined4 *)(gen_frame + 0x24)) = 0x301f5;
  (*(undefined4 *)(gen_frame + 0x28)) = 0x101f8;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0x10259;
  (*(undefined4 *)(gen_frame + 0x30)) = 0x1025b;
  (*(undefined4 *)(gen_frame + 0x34)) = 0x102ba;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x402ba;
  bVar1 = F_0069d8d0(this GEN_EDX_FWD,param_1,param_2,&(*(undefined4 *)(gen_frame + 0x3c)),5,&(*(undefined4 *)(gen_frame + 0x0)),0xf);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_006a64c0 */
GEN_FRAME byte GEN_THISCALL F_006a64c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6a64c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined2 *)(gen_frame + 0x24)) = 0x84;
  (*(undefined4 *)(gen_frame + 0x20)) = 0x280027;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x10321;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x60321;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xf0385;
  (*(undefined4 *)(gen_frame + 0x14)) = 0x203e9;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x106ac;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x106a9;
  bVar1 = F_0069d8d0(this GEN_EDX_FWD,param_1,param_2,&(*(undefined4 *)(gen_frame + 0x20)),3,&(*(undefined4 *)(gen_frame + 0x8)),6);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_006a6580 */
GEN_FRAME uint GEN_THISCALL F_006a6580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6a6580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  undefined * pvVar3;
  uint uVar4;
  
  pvVar3 = REFG(void * PTR32, 0x137129c);
  iVar1 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x1a8) + 0xa8 + *((int *)GEN_TOP(((int)REFG(void * PTR32, 0x137129c) + 0xbc))) * 4))) =
       *((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137129c) + 0xa0)));
  F_0069f8d0(pvVar3 GEN_EDX_FWD,0,0);
  pvVar3 = REFG(void * PTR32, 0x137129c);
  iVar2 = *(int *)(iVar1 + 0x1a8);
  uVar4 = REFG(undefined4, 0x1302378) & 0x9fffe60 | 0x1000260;
  *((uint *)GEN_TOP((iVar2 + 0x2ac + *((int *)GEN_TOP(((int)REFG(void * PTR32, 0x137129c) + 200))) * 8))) = uVar4;
  *((undefined4 *)GEN_TOP((iVar2 + 0x2a8 + *(int *)((int)pvVar3 + 200) * 8))) =
       *((undefined4 *)GEN_TOP((*(int *)((int)pvVar3 + 0x4c) + 0xfc)));
  *((uint *)GEN_TOP((iVar2 + 0x2ac + *(int *)((int)pvVar3 + 0xcc) * 8))) = uVar4;
  *((undefined4 *)GEN_TOP((iVar2 + 0x2a8 + *(int *)((int)pvVar3 + 0xcc) * 8))) =
       *((undefined4 *)GEN_TOP((*(int *)((int)pvVar3 + 0x50) + 0xfc)));
  pvVar3 = REFG(void * PTR32, 0x137129c);
  iVar2 = *(int *)(iVar1 + 0x1a8);
  *((undefined4 *)GEN_TOP((iVar2 + 0xa8 + *((int *)GEN_TOP(((int)REFG(void * PTR32, 0x137129c) + 0xd4))) * 4))) = *param_2;
  *((undefined4 *)GEN_TOP((iVar2 + 0xa8 + *(int *)((int)pvVar3 + 0xdc) * 4))) =
       *(undefined4 *)((int)pvVar3 + 0xa8);
  pvVar3 = REFG(void * PTR32, 0x137129c);
  if (*(int *)((int)this + 0x2d8) != 0) {
    iVar1 = *(int *)(iVar1 + 0x1a8);
    *((uint *)GEN_TOP((iVar1 + 0x2ac + *((int *)GEN_TOP(((int)REFG(void * PTR32, 0x137129c) + 0xd0))) * 8))) = REFG(undefined4, 0x1375a5c) & 0xfffffff;
    *((undefined4 *)GEN_TOP((iVar1 + 0x2a8 + *(int *)((int)pvVar3 + 0xd0) * 8))) =
         *((undefined4 *)GEN_TOP((*(int *)((int)pvVar3 + 0x3c) + 0xfc)));
  }
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xec))(this GEN_EDX_ARG,param_1);
  return uVar4;
}

/* ref: FUN_006a66c0 */
GEN_FRAME unsigned int GEN_THISCALL F_006a66c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a66c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((((*(byte *)((int)this + 100) & 1) != 0) &&
      (bVar2 = (byte)*(undefined2 *)((int)this + 0x70), (bVar2 >> 2 & 1) != 0)) &&
     (*(char *)((int)this + 0x65) == '\x03')) {
    if ((bVar2 >> 1 & 1) == 0) {
      F_0069fd40(this GEN_EDX_FWD);
    }
    F_00693300(this GEN_EDX_ARG,(float)(float10)0);
    if (*(char *)((int)this + 0x118) != -2) {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x158))
                (this GEN_EDX_ARG,0,0x1e,0x3000000,(undefined4)gen_fl2bits((float)(float10)0));
      this_00 = *(undefined * PTR32 *)((int)this + 0x168);
      (*(undefined * PTR32 *)(gen_frame + 0x0)) = this_00;
      uVar3 = F_004d9920(this_00 GEN_EDX_ARG,0,0x30,2);
      if (uVar3 != 0) {
        F_005ffc50(uVar3,(int)this + 0x280);
        *(undefined4 *)(uVar3 + 0x10) = *(undefined4 *)((int)this + 0x2a0);
        *(undefined4 *)(uVar3 + 0x14) = *(undefined4 *)((int)this + 0x2a4);
        *(undefined4 *)(uVar3 + 0x18) = *(undefined4 *)((int)this + 0x2a8);
        *(undefined4 *)(uVar3 + 0x1c) = *(undefined4 *)((int)this + 0x2ac);
        *(undefined4 *)(uVar3 + 0x20) = *(undefined4 *)((int)this + 0x2b0);
        *(undefined4 *)(uVar3 + 0x24) = *(undefined4 *)((int)this + 0x2b4);
        *(undefined4 *)(uVar3 + 0x28) = *(undefined4 *)((int)this + 0x2b8);
        *(undefined4 *)(uVar3 + 0x2c) = *(undefined4 *)((int)this + 700);
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x168) + 0x24))) = 0;
      }
      iVar4 = *(int *)((int)this + 0x7c);
      uVar3 = *(uint *)((int)this + 0x74);
      uVar5 = 0;
      (*(int *)(gen_frame + 0x8)) = iVar4;
      if (uVar3 != 0) {
        do {
          if (*(int *)(iVar4 + uVar5 * 4) != 0) {
            (*(uint *)(gen_frame + 0x4)) = uVar3 - uVar5 & 0x3fffffff;
            piVar1 = *(int * PTR32 *)(iVar4 + uVar5 * 4);
            ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))
                      (piVar1 GEN_EDX_ARG,0x3000000,(undefined4)gen_fl2bits((float)(float10)0),
                       (uint)*(byte *)((int)this + 0x118),(int)this + 0x30,&(*(undefined * PTR32 *)(gen_frame + 0x0)));
            iVar4 = (*(int *)(gen_frame + 0x8));
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar3);
      }
      iVar4 = *(int *)((int)this + 0x78);
      if ((((iVar4 == 0) || (uVar3 = F_00a065a0(), (char)uVar3 == '\0')) ||
          (*(char *)(iVar4 + 0xa8) < '\x01')) &&
         (((*(byte *)((int)this + 0x70) & 1) == 0 && (*(int *)((int)this + 0xe0) != 0)))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xe0) + 0x10))))(*(int * PTR32 *)((int)this + 0xe0) GEN_EDX_ARG);
        *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) | 1;
      }
    }
  }
  return;
}

/* ref: FUN_006a6850 */
GEN_FRAME uint F_006a6850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6a6850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  byte bVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  if ((((*(byte *)((int)param_1 + 100) & 1) == 0) ||
      (bVar1 = *(byte *)((int)param_1 + 0x70) >> 2,
      uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),bVar1), (bVar1 & 1) == 0)) ||
     (*(char *)((int)param_1 + 0x65) != '\x03')) {
    *param_3 = 0;
    return (uint)param_3;
  }
  if (*(int *)((int)param_1 + 0x2d8) != 0) {
    *param_3 = 0;
    return uVar2;
  }
  if (3 < param_2) {
    if (param_2 < 0x14) {
      *param_3 = 0;
      return uVar2;
    }
    if (3 < param_2) goto LAB_006a68c0;
  }
  uVar2 = F_00692770(param_1 GEN_EDX_ARG,param_2,param_3);
  if (*param_3 == 0) {
    return uVar2;
  }
LAB_006a68c0: ;
  if ((param_2 == 0x1e) && ((char)*param_3 != '\0')) {
    F_006923e0(param_1 GEN_EDX_ARG,param_3);
  }
  uVar2 = REFG(undefined4, 0x1371278);
  if ((*(byte *)(REFG(undefined4, 0x1371278) + 0x25) >> (*(byte *)((int)param_1 + 0x72) & 0x1f) & 1) == 0) {
    *param_3 = *param_3 & 0xffc00300;
  }
  else {
    bVar1 = F_0068da90(param_1 GEN_EDX_ARG);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      uVar2 = *param_3 & 0xffffff00;
      *param_3 = -(uint)((*param_3 & 0xff) != 0) & 0xc00000 | uVar2;
    }
  }
  if ((*(byte *)((int)param_1 + 0x70) >> 1 & 1) != 0) {
    return uVar2;
  }
  uVar2 = F_0069fd40(param_1 GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_006a6930 */
GEN_FRAME uint F_006a6930(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6a6930u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined * this;
  byte bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  float10 fVar11;
  
  uVar9 = param_1;
  uVar2 = *(uint *)(param_1 + 0x74);
  iVar3 = *(int *)(param_1 + 0x7c);
  fVar11 = F_006a0570(param_1 GEN_EDX_ARG,param_2);
  fVar1 = (float)fVar11;
  bVar5 = F_00693210(param_1 GEN_EDX_ARG,fVar1);
  (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),bVar5);
  uVar7 = F_00693280(param_1 GEN_EDX_ARG,fVar1);
  uVar10 = 0;
  cVar6 = (char)uVar7;
  param_1 = CONCAT31((int3)((uint)gen_fl2bits(fVar1) >> 8),cVar6);
  if (uVar2 != 0) {
    iVar8 = uVar9 + 0x2dc;
    do {
      iVar4 = *(int *)(iVar3 + uVar10 * 4);
      uVar7 = 0;
      if (iVar4 != 0) {
        uVar7 = F_00502310(*(undefined * PTR32 *)(iVar4 + 0x18) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)));
        if (cVar6 != '\x02') {
          uVar9 = 0;
          do {
            this = *(undefined * PTR32 *)(iVar8 + uVar9 * 4);
            if (this != (undefined *)0x0) {
              uVar7 = F_00502b90(this GEN_EDX_ARG,param_1);
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < 4);
        }
      }
      uVar10 = uVar10 + 1;
      iVar8 = iVar8 + 0x10;
    } while (uVar10 < uVar2);
  }
  return uVar7;
}

/* ref: FUN_006a69d0 */
GEN_FRAME uint GEN_THISCALL F_006a69d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a69d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  
  bVar4 = (byte)param_1;
  if (*(int *)((int)this + 0x2d4) != 0) {
    iVar2 = param_1 * 0x48;
    F_00693890(((undefined *)GEN_TOP((iVar2 + *(int *)((int)this + 0x2d4)))) GEN_EDX_FWD,1);
    if (*((short *)GEN_TOP((*(int *)((int)this + 0x2d4) + 0x42 + iVar2))) ==
        *((short *)GEN_TOP((*(int *)((int)this + 0x2d4) + 0x40 + iVar2)))) {
      *(uint *)((int)this + 0x2c8) =
           ~(1 << (bVar4 & 0x1f)) & *(uint *)((int)this + 0x2c8) | 0 << (bVar4 & 0x1f);
    }
  }
  F_0069ff90(this GEN_EDX_ARG,param_1);
  if (*(int *)((int)this + 0x2d4) != 0) {
    iVar2 = param_1 * 0x48;
    F_00693890(((undefined *)GEN_TOP((iVar2 + *(int *)((int)this + 0x2d4)))) GEN_EDX_ARG,2);
    if (*((short *)GEN_TOP((*(int *)((int)this + 0x2d4) + 0x42 + iVar2))) ==
        *((short *)GEN_TOP((*(int *)((int)this + 0x2d4) + 0x40 + iVar2)))) {
      *(uint *)((int)this + 0x2c8) =
           ~(1 << (bVar4 & 0x1f)) & *(uint *)((int)this + 0x2c8) | 0 << (bVar4 & 0x1f);
    }
  }
  uVar3 = 0;
  if (*(int *)((int)this + 0x2d4) != 0) {
    iVar2 = param_1 * 0x48;
    F_00693890(((undefined *)GEN_TOP((iVar2 + *(int *)((int)this + 0x2d4)))) GEN_EDX_ARG,0);
    uVar3 = *(uint *)((int)this + 0x2d4);
    if (*(short *)(uVar3 + 0x42 + iVar2) == *(short *)(uVar3 + 0x40 + iVar2)) {
      uVar3 = 0 << (bVar4 & 0x1f);
      *(uint *)((int)this + 0x2c8) = ~(1 << (bVar4 & 0x1f)) & *(uint *)((int)this + 0x2c8) | uVar3;
    }
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x7c) + param_1 * 4))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x7c) + param_1 * 4)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
    uVar3 = *(uint *)((int)this + 0x7c);
    *(undefined4 *)(uVar3 + param_1 * 4) = 0;
  }
  return uVar3;
}

/* ref: FUN_006a6af0 */
GEN_FRAME unsigned int GEN_THISCALL F_006a6af0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a6af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  uint * puVar2;
  uint * puVar3;
  byte bVar4;
  uint uVar5;
  
  if (*(int *)((int)this + 0x2c8) == 0) {
    if (*(int *)((int)this + 0x2d0) == 0) {
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                                  (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,0x48,0x10)));
      if (this_00 == (undefined *)0x0) {
        this_00 = (undefined *)0x0;
      }
      else {
        F_006b5090(this_00 GEN_EDX_ARG);
      }
      *(undefined * PTR32 *)((int)this + 0x2d0) = this_00;
    }
    if (*(int *)((int)this + 0x2d4) == 0) {
      uVar1 = *(uint *)((int)this + 0x74);
      uVar5 = -(uint)((int)((ulonglong)uVar1 * 0x48 >> 0x20) != 0) | (uint)((ulonglong)uVar1 * 0x48)
      ;
      puVar2 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                                 (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,
                                  -(uint)(0xfffffffb < uVar5) | uVar5 + 4,0x10)));
      if (puVar2 != (uint *)0x0) {
        *puVar2 = uVar1;
        puVar3 = puVar2 + 1;
        while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
          *(undefined2 *)(puVar3 + 0x10) = 0;
          *(undefined2 *)((int)puVar3 + 0x42) = 0xffff;
          uVar5 = 0;
          do {
            bVar4 = (byte)uVar5;
            puVar3[uVar5] = 0;
            uVar5 = uVar5 + 1;
            *(ushort *)((int)puVar3 + 0x42) =
                 ~(1 << (bVar4 & 0x1f)) & *(ushort *)((int)puVar3 + 0x42) | 0 << (bVar4 & 0x1f);
          } while (uVar5 < 0x10);
          puVar3 = puVar3 + 0x12;
        }
        *(uint * PTR32 *)((int)this + 0x2d4) = puVar2 + 1;
        return;
      }
      *(undefined4 *)((int)this + 0x2d4) = 0;
    }
  }
  return;
}

/* ref: FUN_006a6c00 */
GEN_FRAME uint GEN_THISCALL F_006a6c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a6c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  int * piVar6;
  uint uVar7;
  uint uVar8;
  int local_c;
  int * local_8;
  
  iVar5 = param_1;
  iVar3 = param_1 * 0x48;
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x2d4) + 4 + iVar3)));
  if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x2d4) + 0x40 + iVar3))) >> 1 & 1) != 0) {
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x7c) + param_1 * 4)));
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 0x18) == iVar1) goto LAB_006a6ca2;
      if (iVar2 != 0) {
        piVar6 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x7c) + param_1 * 4)));
        ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6 GEN_EDX_FWD);
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x7c) + param_1 * 4))) = 0;
      }
    }
    piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x150))(this GEN_EDX_ARG,param_1)));
    uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x154))(this GEN_EDX_ARG,iVar1,piVar6);
    if (piVar6 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6 GEN_EDX_ARG);
    }
    if (uVar7 != 0) {
      *(int *)(uVar7 + 0x74) = param_1;
      *((uint *)GEN_TOP((*(int *)((int)this + 0x7c) + param_1 * 4))) = uVar7;
    }
  }
LAB_006a6ca2: ;
  if (((*((byte *)GEN_TOP((iVar3 + 0x40 + *(int *)((int)this + 0x2d4)))) >> 3 & 1) != 0) &&
     (*((int *)GEN_TOP((param_1 * 4 + *(int *)((int)this + 0x7c)))) != 0)) {
    uVar7 = *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 * 4 + *(int *)((int)this + 0x7c)))) + 0x4c)));
    uVar8 = 0;
    if (uVar7 != 0) {
      local_c = iVar3 + 0xc;
      local_8 = (int *)((int)this + param_1 * 0x10 + 0x2dc);
      do {
        iVar3 = *((int *)GEN_TOP((local_c + *(int *)((int)this + 0x2d4))));
        if (iVar3 != 0) {
          F_00513f60(iVar3,0,0);
        }
        if (*local_8 != 0) {
          F_0050c620(*local_8,0,0);
          *local_8 = 0;
        }
        *local_8 = iVar3;
        if (iVar3 == 0) {
          iVar3 = *((int *)GEN_TOP((param_1 * 4 + *(int *)((int)this + 0x7c))));
          iVar2 = *(int *)(iVar3 + 0x48);
          if (*(int *)(iVar2 + uVar8 * 4) != 0) {
            piVar6 = *(int * PTR32 *)(iVar2 + uVar8 * 4);
            ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6 GEN_EDX_ARG);
          }
          piVar6 = ((int *)GEN_TOP(((int)this + (uVar8 + 0x5c + param_1 * 4) * 4)));
          *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x48) + uVar8 * 4))) = 0;
          piVar4 = (int *)*piVar6;
          if (piVar4 != (int *)0x0) {
            ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4 GEN_EDX_ARG);
            *piVar6 = 0;
          }
        }
        else {
          piVar6 = *(int * PTR32 *)(iVar3 + 0xa0);
          iVar3 = *((int *)GEN_TOP((param_1 * 4 + *(int *)((int)this + 0x7c))));
          if (piVar6 != (int *)0x0) {
            ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 8))(piVar6 GEN_EDX_ARG);
          }
          iVar2 = *(int *)(iVar3 + 0x48);
          if (*(int *)(iVar2 + uVar8 * 4) != 0) {
            piVar4 = *(int * PTR32 *)(iVar2 + uVar8 * 4);
            ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4 GEN_EDX_ARG);
          }
          *((int * PTR32 *)GEN_TOP((*(int *)(iVar3 + 0x48) + uVar8 * 4))) = piVar6;
        }
        local_c = local_c + 4;
        local_8 = local_8 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar7);
    }
    if (uVar7 < 4) {
      piVar6 = ((int *)GEN_TOP(((int)this + (uVar7 + 0x5c + param_1 * 4) * 4)));
      param_1 = 4 - uVar7;
      do {
        if (piVar6[0x5b] != 0) {
          F_0050c620(piVar6[0x5b],0,0);
          piVar6[0x5b] = 0;
        }
        piVar4 = (int *)*piVar6;
        if (piVar4 != (int *)0x0) {
          ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4 GEN_EDX_ARG);
          *piVar6 = 0;
        }
        piVar6 = piVar6 + 1;
        param_1 = param_1 - 1;
      } while (param_1 != 0);
    }
  }
  if (((*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) && (iVar1 != 0)) &&
     (*((short *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar1 + 0xa8) + 4))) + 0x20 + *(int *)(iVar1 + 0xa8)))) != 0)) {
    F_0065a8a0(*(undefined * PTR32 *)((int)this + 0x78) GEN_EDX_ARG,iVar1);
  }
  uVar7 = F_006a05e0(this GEN_EDX_ARG,iVar5);
  return uVar7;
}

/* ref: FUN_006a7140 */
GEN_FRAME uint GEN_THISCALL F_006a7140(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a7140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  code * pcVar2;
  uint uVar3;
  
  F_0069f1c0(REFG(void * PTR32, 0x137129c) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),(int)this + 0x750);
  F_006a1600(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_006a1700(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_006a1a80(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_006a1bb0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_006a1eb0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_006a2080(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_006a2140(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_006a21d0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_006a2260(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_006a22e0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_006a2360(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_006a2510(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x7c) + 0x30)));
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 1;
    *(undefined4 *)(iVar1 + 0x50) = 0xffffffff;
    *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 2;
    *(undefined4 *)(iVar1 + 0x60) = 0;
    *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 4;
    if ((((*(byte *)(gen_frame + 0x6)) & 1) != 0) && (((*(byte *)(gen_frame + 0x6)) & 0x40) == 0)) {
      *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xfffffffe;
    }
  }
  F_006a2a80(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  pcVar2 = *(gen_code32 *)(*(int *)this + 0xb4);
  (*(uint *)(gen_frame + 0x8)) = (*(ushort *)(gen_frame + 0x2)) >> 0xd & 1;
  (*(undefined2 *)(gen_frame + 0x4)) = 0xd;
  (*(byte *)(gen_frame + 0x6)) = 0;
  (*(undefined1 *)(gen_frame + 0x7)) = 0;
  uVar3 = (*pcVar2)(this,&(*(undefined2 *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x8)));
  *(uint *)((int)this + 0x814) = *(uint *)((int)this + 0x814) | 1;
  return uVar3;
}

/* ref: FUN_006a7260 */
GEN_NOFRAME uint GEN_THISCALL F_006a7260(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a7260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_006a2f90(this GEN_EDX_FWD);
  F_006a3030(this GEN_EDX_ARG);
  F_006a30d0(this GEN_EDX_ARG);
  F_006a3170(this GEN_EDX_ARG);
  uVar1 = F_006a3210(this GEN_EDX_ARG);
  if (*(short *)((int)this + 0x748) == 1) {
    uVar1 = F_00694230(this GEN_EDX_ARG);
    return uVar1;
  }
  return uVar1;
}

/* ref: Client::Graphics::Scene::BGObject::vf10 */
GEN_FRAME unsigned int GEN_THISCALL F_006a72a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a72a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  short * psVar5;
  uint uVar6;
  undefined * pBVar7;
  undefined4 local_8;
  
  if (((byte)this[100] & 4) == 0) {
    this[100] = (undefined1)((byte)this[100] | 4);
    this_00 = *(undefined * PTR32 *)(this + 0x70);
    uVar3 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this_00 + 0xa8) + 4))) + 0x1e +
                           *(int *)((int)this_00 + 0xa8))));
    uVar6 = 0;
    uVar4 = 0;
    if (uVar3 != 0) {
      psVar5 = ((short *)GEN_TOP((*(int *)((int)this_00 + 0xb8) + 2)));
      do {
        if (*psVar5 != 0) {
          uVar6 = 1;
          *(uint *)(this + 0x74) = *(uint *)(this + 0x74) | 1;
          break;
        }
        uVar4 = uVar4 + 1;
        psVar5 = psVar5 + 0x1e;
      } while (uVar4 < uVar3);
    }
    uVar4 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this_00 + 0xa8) + 4))) + 0x1e +
                           *(int *)((int)this_00 + 0xa8))));
    uVar3 = 0;
    if (uVar4 != 0) {
      psVar5 = ((short *)GEN_TOP((*(int *)((int)this_00 + 0xb8) + 0xe)));
      do {
        if (*psVar5 != 0) {
          *(uint *)(this + 0x74) = *(uint *)(this + 0x74) | 2 << (char)uVar6 * '\x04';
          uVar6 = uVar6 + 1;
          break;
        }
        uVar3 = uVar3 + 1;
        psVar5 = psVar5 + 0x1e;
      } while (uVar3 < uVar4);
    }
    if (((*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this_00 + 0xa8) + 4))) + 0x23 +
                   *(int *)((int)this_00 + 0xa8)))) & 0x10) != 0) &&
       (*((short *)GEN_TOP((*(int *)((int)this_00 + 0xb8) + 0xb6))) != 0)) {
      *(uint *)(this + 0x74) = *(uint *)(this + 0x74) | 3 << (char)uVar6 * '\x04';
      uVar6 = uVar6 + 1;
    }
    if (uVar6 < 9) {
      if (1 < uVar6) {
        this[0x95] = (undefined1)((byte)this[0x95] | 8);
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                          (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,uVar6 * 4,4);
        *(uint *)(this + 0x78) = uVar3;
        if (uVar3 == 0) {
          return;
        }
      }
      if (((byte)this[0x95] & 8) == 0) {
        pBVar7 = this + 0x78;
      }
      else {
        pBVar7 = *(undefined * PTR32 *)(this + 0x78);
      }
      bVar2 = F_006ae750(this_00 GEN_EDX_ARG);
      if (bVar2 != 0) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x137127c) + 0xad10) + 0xc))))(REFG(int, 0x137127c) + 0xad10 GEN_EDX_ARG,this_00);
        *(uint *)pBVar7 = uVar3;
        pBVar7 = pBVar7 + 4;
        if (uVar3 == 0) {
          return;
        }
      }
      bVar2 = F_006ae790(this_00 GEN_EDX_ARG);
      if (bVar2 != 0) {
        uVar3 = F_006257b0(this_00);
        *(uint *)pBVar7 = uVar3;
        pBVar7 = pBVar7 + 4;
        if (uVar3 == 0) {
          return;
        }
      }
      if (((*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this_00 + 0xa8) + 4))) + 0x23 +
                     *(int *)((int)this_00 + 0xa8)))) & 0x10) != 0) &&
         (*((short *)GEN_TOP((*(int *)((int)this_00 + 0xb8) + 0xb6))) != 0)) {
        uVar3 = F_00637c00(this_00);
        *(uint *)pBVar7 = uVar3;
        if (uVar3 == 0) {
          return;
        }
      }
      uVar3 = F_00b14060(REFG(void * PTR32, 0x1370c1c) GEN_EDX_ARG,1);
      *(uint *)(this + 0x60) = uVar3;
      if (uVar3 == 0) {
        this[0x65] = (undefined1)0x4;
        return;
      }
      *(undefined * PTR32 *)(uVar3 + 4) = this;
      iVar1 = *(int *)(this + 0x60);
      *(ushort *)(iVar1 + 0xe) =
           (ushort)((*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this_00 + 0xa8) + 4))) + 0x23 +
                              *(int *)((int)this_00 + 0xa8)))) & 1) == 1) << 0xf |
           *(ushort *)(iVar1 + 0xe) & 0x7fff;
      if ((*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this_00 + 0xa8) + 4))) + 0x23 +
                    *(int *)((int)this_00 + 0xa8)))) & 4) != 0) {
        F_00b7f420(REFG(void * PTR32, 0x13712a4) GEN_EDX_ARG,iVar1);
      }
      F_0068f210(this GEN_EDX_ARG);
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1c))(this GEN_EDX_ARG,1);
      local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),*(undefined1 *)(REFG(int, 0x1371278) + 0x11));
      F_00502350(*(undefined * PTR32 *)(this + 0x70) GEN_EDX_ARG,(uint)*(byte *)(REFG(int, 0x1371278) + 0x10));
      F_005046c0(*(undefined * PTR32 *)(this + 0x70) GEN_EDX_ARG,local_8);
      uVar3 = F_00c4f2dd();
      *(short *)(this + 0x82) = (short)uVar3;
      uVar3 = F_00c4f2dd();
      *(short *)(this + 0x84) = (short)uVar3;
      F_006a3820(this GEN_EDX_ARG,(uint)*(ushort *)(this + 0x88));
    }
  }
  return;
}

/* ref: FUN_006a7520 */
GEN_FRAME byte GEN_THISCALL F_006a7520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6a7520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  char cVar1;
  int * piVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  char * pcVar6;
  
  if (param_1 == (char *)0x0) {
LAB_006a7546: ;
    bVar3 = false;
  }
  else {
    pcVar6 = param_1;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (pcVar6 == param_1 + 1) goto LAB_006a7546;
    bVar3 = true;
  }
  if (param_2 == (char *)0x0) {
LAB_006a7561: ;
    bVar4 = false;
  }
  else {
    pcVar6 = param_2;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    bVar4 = true;
    if (pcVar6 == param_2 + 1) goto LAB_006a7561;
  }
  if ((bVar3) && (bVar4)) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  if (bVar3) {
    if (bVar5 != 0) {
      bVar5 = F_006a4910(this GEN_EDX_FWD,param_1,0);
      if (bVar5 != 0) {
        bVar5 = 1;
        goto LAB_006a75bb;
      }
    }
    bVar5 = 0;
  }
  else {
    piVar2 = *(int * PTR32 *)((int)this + 0x78);
    if (piVar2 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
      *(undefined4 *)((int)this + 0x78) = 0;
    }
    if (*(int *)((int)this + 0x70) != 0) {
      F_0050c620(*(int *)((int)this + 0x70),0,0);
      *(undefined4 *)((int)this + 0x70) = 0;
    }
  }
LAB_006a75bb: ;
  if (!bVar4) {
    piVar2 = *(int * PTR32 *)((int)this + 0x7c);
    if (piVar2 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
      *(undefined4 *)((int)this + 0x7c) = 0;
    }
    if (*(int *)((int)this + 0x74) != 0) {
      F_0050c620(*(int *)((int)this + 0x74),0,0);
      *(undefined4 *)((int)this + 0x74) = 0;
    }
    if (bVar5 == 0) {
      *(undefined1 *)((int)this + 0x65) = 4;
    }
    return bVar5;
  }
  if (bVar5 != 0) {
    bVar5 = F_006a4a30(this GEN_EDX_ARG,param_2,0);
    if (bVar5 != 0) {
      return 1;
    }
  }
  *(undefined1 *)((int)this + 0x65) = 4;
  return 0;
}

/* ref: FUN_006a7630 */
GEN_FRAME uint GEN_THISCALL F_006a7630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6a7630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  char cVar1;
  int * piVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  char * pcVar6;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar7;
  undefined3 uVar8;
  bool bVar9;
  
  if (param_1 == (char *)0x0) {
LAB_006a7656: ;
    bVar4 = false;
  }
  else {
    pcVar6 = param_1;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    bVar4 = true;
    if (pcVar6 == param_1 + 1) goto LAB_006a7656;
  }
  if (param_2 == (char *)0x0) {
LAB_006a7673: ;
    bVar3 = false;
  }
  else {
    pcVar6 = param_2;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    bVar3 = true;
    if (pcVar6 == param_2 + 1) goto LAB_006a7673;
  }
  bVar9 = true;
  if (bVar4) {
    bVar5 = F_006a4ba0(this GEN_EDX_FWD,param_1,0);
    uVar7 = CONCAT31(extraout_var,bVar5);
    bVar9 = bVar5 != 0;
  }
  else {
    piVar2 = *(int * PTR32 *)((int)this + 0x78);
    if (piVar2 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
      *(undefined4 *)((int)this + 0x78) = 0;
    }
    uVar7 = 0;
    if (*(int *)((int)this + 0x70) != 0) {
      uVar7 = F_0050c620(*(int *)((int)this + 0x70),0,0);
      *(undefined4 *)((int)this + 0x70) = 0;
    }
  }
  if (bVar3) {
    if (bVar9 != false) {
      bVar5 = F_006a4c80(this GEN_EDX_ARG,param_2,0);
      uVar7 = CONCAT31(extraout_var_00,bVar5);
      if (bVar5 != 0) {
        bVar9 = true;
        goto LAB_006a7700;
      }
    }
    bVar9 = false;
  }
  else {
    piVar2 = *(int * PTR32 *)((int)this + 0x7c);
    if (piVar2 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG);
      *(undefined4 *)((int)this + 0x7c) = 0;
    }
    uVar7 = 0;
    if (*(int *)((int)this + 0x74) != 0) {
      uVar7 = F_0050c620(*(int *)((int)this + 0x74),0,0);
      *(undefined4 *)((int)this + 0x74) = 0;
    }
  }
LAB_006a7700: ;
  uVar8 = (undefined3)(uVar7 >> 8);
  if ((!bVar4) && (!bVar3)) {
    *(undefined1 *)((int)this + 0x65) = 3;
    return CONCAT31(uVar8,1);
  }
  if (bVar9 == false) {
    *(undefined1 *)((int)this + 0x65) = 4;
  }
  return CONCAT31(uVar8,bVar9);
}

/* ref: Client::Graphics::Scene::VfxObject::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_006a7730(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a7730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 uVar1;
  code * pcVar2;
  float10 fVar3;
  byte bVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  int iVar6;
  undefined4 * puVar7;
  undefined * pVVar8;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  if ((*(uint *)(this + 0x24) >> 1 & 1) != 0) {
    fVar3 = (float10)0;
    uVar1 = *(undefined4 *)(this + 0x54);
    (*(float *)(gen_frame + 0x30)) = (float)fVar3;
    ((undefined4 *)(gen_frame + 0x0))[0] = *(undefined4 *)(this + 0x50);
    (*(float *)(gen_frame + 0x34)) = (float)fVar3;
    (*(float *)(gen_frame + 0x38)) = (float)fVar3;
    ((undefined4 *)(gen_frame + 0x0))[1] = 0;
    ((undefined4 *)(gen_frame + 0x0))[2] = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(this + 0x58);
    F_004efe70(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,(uint)(this + 0x40));
    (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x30) + (float10)(*(float *)(gen_frame + 0x30)))));
    (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x34)) + (float10)*(float *)(this + 0x34))));
    (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x38)) + (float10)*(float *)(this + 0x38))));
    puVar7 = ((undefined4 *)(gen_frame + 0x0));
    pVVar8 = this + 0x250;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 - 1) {
      *(undefined4 *)pVVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      pVVar8 = pVVar8 + 4;
    }
    *(float *)(this + 0x284) =
         ((float)GEN_TOF(((float10)*(float *)(this + 0x23c) + (float10)*(float *)(this + 0x284))));
    fVar3 = (float10)0;
    uVar1 = *(undefined4 *)(this + 0x54);
    ((undefined4 *)(gen_frame + 0x0))[0] = *(undefined4 *)(this + 0x50);
    (*(float *)(gen_frame + 0x30)) = (float)fVar3;
    (*(float *)(gen_frame + 0x34)) = (float)fVar3;
    ((undefined4 *)(gen_frame + 0x0))[1] = 0;
    (*(float *)(gen_frame + 0x38)) = (float)fVar3;
    ((undefined4 *)(gen_frame + 0x0))[2] = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(this + 0x58);
    F_004efe70(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)(this + 0x40));
    (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x30) + (float10)(*(float *)(gen_frame + 0x30)))));
    (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x34)) + (float10)*(float *)(this + 0x34))));
    (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x38)) + (float10)*(float *)(this + 0x38))));
    puVar7 = ((undefined4 *)(gen_frame + 0x0));
    pVVar8 = this + 0x290;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 - 1) {
      *(undefined4 *)pVVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      pVVar8 = pVVar8 + 4;
    }
    *(float *)(this + 0x2c4) =
         ((float)GEN_TOF(((float10)*(float *)(this + 0x240) + (float10)*(float *)(this + 0x2c4))));
  }
  if ((byte)this[0x65] == 2) {
    bVar4 = F_00990c00(*(undefined4 *)(this + 0x234) GEN_EDX_ARG);
    if (bVar4 != 0) {
      this[0x65] = (undefined1)0x4;
      F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50) GEN_EDX_ARG);
      return CONCAT31(extraout_var,bVar4);
    }
    uVar5 = F_00982ce0(*(undefined4 *)(this + 0x234) GEN_EDX_ARG);
    if ((char)uVar5 != '\0') {
      pcVar2 = *(gen_code32 *)(*(int *)this + 0x28);
      this[0x65] = (undefined1)0x3;
      uVar5 = (*pcVar2)(this);
    }
  }
  else {
    uVar5 = (byte)this[0x65] - 3;
    if (uVar5 == 0) {
      uVar5 = F_006a55a0(this GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50) GEN_EDX_ARG);
      return uVar5;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50) GEN_EDX_ARG);
  return uVar5;
}

/* ref: Client::Graphics::Scene::VfxObject::vf10 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006a7920(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a7920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (((byte)this[100] & 4) == 0) {
    this[100] = (undefined1)((byte)this[100] | 4);
    uVar1 = F_00b14060(REFG(void * PTR32, 0x1370c1c) GEN_EDX_FWD,4);
    *(uint *)(this + 0x60) = uVar1;
    if (uVar1 != 0) {
      *(undefined * PTR32 *)(uVar1 + 4) = this;
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1c))(this GEN_EDX_ARG,1);
      if (((byte)this[0x1e4] & 4) != 0) {
        F_00699cb0(this GEN_EDX_ARG,*(float *)(this + 0x1f0));
      }
      F_006a55a0(this GEN_EDX_ARG);
      return;
    }
    this[0x65] = (undefined1)0x4;
  }
  return;
}

/* ref: Client::Graphics::Scene::AttachUtility::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_006a7980(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a7980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 4) != 0) {
    F_006b2f70(((undefined *)GEN_TOP((*(int *)(this + 4) + 0x90))) GEN_EDX_FWD);
  }
  *(uint *)(this + 0x18) = *(uint *)(this + 0x18) & 0xfffffff3;
  uVar1 = 0;
  if (*(int *)(this + 0xc) != 0) {
    uVar1 = F_0050c620(*(int *)(this + 0xc),0,0);
    *(undefined4 *)(this + 0xc) = 0;
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  return uVar1;
}

/* ref: Client::Graphics::Scene::AttachUtility::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006a79c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a79c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  float fVar5;
  
  if (((*(int *)(this + 4) != 0) && (*(int *)(this + 8) != 0)) && (*(int *)(this + 0x10) != 0)) {
    if (*(int *)(this + 0x14) == -1) {
      F_0069b800(this GEN_EDX_FWD);
    }
    if (*(int *)(this + 0x14) != -1) {
      iVar1 = *(int *)(this + 4);
      if ((*(char *)(iVar1 + 0x65) == '\x03') && (*((char *)GEN_TOP((*(int *)(this + 8) + 0x65))) == '\x03')) {
        if (((byte)this[0x18] & 1) != 0) {
          if ((*(uint *)(this + 0x18) >> 2 & 1) != 0) {
            if ((*(uint *)(this + 0x18) >> 4 & 1) != 0) {
              fVar5 = F_006b2270(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_ARG,*(int *)(this + 0x14),
                                   *(undefined4 *)(this + 0x24));
              *(float *)(this + 0x2c) = fVar5;
              *(uint *)(this + 0x18) = *(uint *)(this + 0x18) & 0xffffffef;
            }
            if ((*((int *)GEN_TOP((*(int *)(this + 4) + 200))) == 0) ||
               ((*(uint *)(this + 0x18) >> 3 & 1) != 0)) {
              F_006a5c60(this GEN_EDX_ARG);
            }
            else if ((*(uint *)(this + 0x18) >> 5 & 1) != 0) {
              uVar3 = F_0069ba90(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
              F_006b13d0(*(undefined * PTR32 *)(this + 4) GEN_EDX_ARG,0,uVar3);
              *(uint *)(this + 0x18) = *(uint *)(this + 0x18) & 0xffffffdf;
            }
          }
          (*(float *)(gen_frame + 0x3c)) = *(float *)(this + 0x28);
          fVar4 = (float10)*(float *)(this + 0x28);
          fVar5 = ((float)GEN_TOF((fVar4 + (float10)*(float *)(this + 0x30) *
                                  ((float10)*(float *)(this + 0x2c) - fVar4))));
          (*(float *)(gen_frame + 0x3c)) = fVar5;
          if (*(double *)&REFG(undefined, 0x10b3220) < (double)fVar5) {
            if ((!GEN_ISNAN(REFG(float, 0x10905c4)) && !GEN_ISNAN(fVar5)) &&
                (!(REFG(float, 0x10905c4) < fVar5) && REFG(uint, 0x10905c4) != fVar5)) {
              *((ushort *)GEN_TOP((*(int *)(this + 4) + 0x70))) =
                   *((ushort *)GEN_TOP((*(int *)(this + 4) + 0x70))) & 0xfffb;
              return;
            }
          }
          *((ushort *)GEN_TOP((*(int *)(this + 4) + 0x70))) = *((ushort *)GEN_TOP((*(int *)(this + 4) + 0x70))) | 4;
          return;
        }
      }
      else {
        iVar2 = *(int *)(this + 8);
        *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar2 + 0x30);
        *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar2 + 0x34);
        *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(iVar2 + 0x38);
        *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 2;
      }
    }
  }
  return;
}

/* ref: FUN_006a7b20 */
GEN_FRAME byte GEN_THISCALL F_006a7b20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a7b20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  byte bVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x128)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x12c);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined1 *)(gen_frame + 0x14)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x18)) = 5000;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x10100;
  (*(undefined1 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 6;
  (*(undefined2 *)(gen_frame + 0x21)) = 0;
  uVar2 = 1;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x28)),0x100,"chara/human/c%02d01/skeleton/base/b0001/skl_c%02d01b0001.sklb",uVar2
               ,uVar2);
    F_00513dc0(((undefined1 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    F_00c472af(((undefined1 *)(gen_frame + 0x28)),0x100,"chara/human/c%02d01/skeleton/base/b0001/skl_c%02d01b0001.skp",uVar2,
               uVar2);
    F_00513dc0(((undefined1 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    F_00c472af(((undefined1 *)(gen_frame + 0x28)),0x100,"chara/human/c%02d01/skeleton/base/b0001/eid_c%02d01b0001.eid",uVar2,
               uVar2);
    F_00513dc0(((undefined1 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    F_00c472af(((undefined1 *)(gen_frame + 0x28)),0x100,"chara/human/c%02d01/skeleton/base/b0001/phy_c%02d01b0001.phyb",uVar2
               ,uVar2);
    F_00513dc0(((undefined1 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xd);
  uVar2 = 1;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x28)),0x100,"chara/weapon/w%02d01/skeleton/base/b0001/skl_w%02d01b0001.sklb",
               uVar2,uVar2);
    F_00513dc0(((undefined1 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xb);
  uVar2 = 0x32;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x28)),0x100,"chara/weapon/w%02d01/skeleton/base/b0001/skl_w%02d01b0001.sklb",
               uVar2,uVar2);
    F_00513dc0(((undefined1 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x3a);
  uVar2 = 0x46;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x28)),0x100,"chara/weapon/w%02d01/skeleton/base/b0001/skl_w%02d01b0001.sklb",
               uVar2,uVar2);
    F_00513dc0(((undefined1 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    F_00c472af(((undefined1 *)(gen_frame + 0x28)),0x100,"chara/weapon/w%02d51/skeleton/base/b0001/skl_w%02d51b0001.sklb",
               uVar2,uVar2);
    F_00513dc0(((undefined1 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x49);
  uVar2 = 1;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x28)),0x100,"chara/xls/attachOffset/c%02d01.atch",uVar2,uVar2);
    F_00513dc0(((undefined1 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xd);
  uVar2 = 0;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x28)),0x100,"chara/equipment/e%04d/e%04d.imc",uVar2,uVar2);
    F_00513dc0(((undefined1 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x5f);
  uVar2 = 1;
  do {
    F_00c472af(((undefined1 *)(gen_frame + 0x28)),0x100,"chara/accessory/a%04d/a%04d.imc",uVar2,uVar2);
    F_00513dc0(((undefined1 *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x0)),0,0);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x15);
  *(undefined1 *)((int)this + 0x14) = 1;
  bVar1 = F_006a62a0((undefined *)((int)this + 4) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x1322868),0x35
                      );
  F_00c47745((*(uint *)(gen_frame + 0x128)) ^ (uint)(uint)(gen_frame + 0x12c) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_006a7e20 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006a7e20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a7e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int * piVar3;
  
  piVar1 = *(int * PTR32 *)((int)this + 0xb0);
  for (piVar3 = *(int * PTR32 *)((int)this + 0xac); piVar3 != piVar1; piVar3 = piVar3 + 1) {
    if (*piVar3 != 0) {
      F_0050c620(*piVar3,0,0);
    }
  }
  iVar2 = *(int *)((int)this + 0xac);
  if (iVar2 != *(int *)((int)this + 0xb0)) {
    F_00c46e20(iVar2,*(int *)((int)this + 0xb0),0);
    *(int *)((int)this + 0xb0) = iVar2;
  }
  return;
}

/* ref: FUN_006a7e90 */
GEN_FRAME uint GEN_THISCALL F_006a7e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a7e90u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  F_006b5e10(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c0))) GEN_EDX_FWD,&(*(uint *)&gen_args[1]),(*(uint *)&gen_args[1]));
  if ((*(uint *)&gen_args[1]) == *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c4)))) {
    return (*(uint *)&gen_args[1]) & 0xffffff00;
  }
  iVar2 = *(int *)((*(uint *)&gen_args[1]) + 0x40);
  piVar3 = (int *)(iVar2 + 0x88);
  iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar3), 0);
  if (iVar1 == 2) {
    piVar3 = (int *)(iVar2 + 0x8c);
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar3), 0);
    if (iVar1 < 8) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_006a7ef0 */
GEN_FRAME uint GEN_THISCALL F_006a7ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a7ef0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  int * piVar2;
  
  F_006b5e10(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d0))) GEN_EDX_FWD,&(*(uint *)&gen_args[1]),(*(uint *)&gen_args[1]));
  if ((*(uint *)&gen_args[1]) == *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d4)))) {
    return (*(uint *)&gen_args[1]) & 0xffffff00;
  }
  if ((*((uint *)GEN_TOP((*(int *)((*(uint *)&gen_args[1]) + 0x40) + 0x30))) & 0xc000000) != 0) {
    piVar2 = ((int *)GEN_TOP((*(int *)((*(uint *)&gen_args[1]) + 0x40) + 0x8c)));
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
    if (iVar1 < 8) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_006a7f50 */
GEN_FRAME byte GEN_THISCALL F_006a7f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a7f50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 uVar1;
  int * piVar2;
  
  uVar1 = (*(undefined4 *)&gen_args[1]);
  piVar2 = (int *)F_006b5e10(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d0))) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[1]));
  if (*piVar2 != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d4)))) {
    return 1;
  }
  piVar2 = (int *)F_006b5e10(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c0))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[1]),uVar1);
  return *piVar2 != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c4)));
}

/* ref: FUN_006a7fa0 */
GEN_FRAME uint GEN_THISCALL F_006a7fa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6a7fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  int * piVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  pvVar1 = *(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x60);
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  uVar4 = F_00500af0(pvVar1 GEN_EDX_FWD,param_1);
  uVar4 = F_00500ae0(pvVar1 GEN_EDX_ARG,uVar4 & 0xffff);
  if ((*(uint *)(uVar4 + 8) >> 4 & 1) != 0) {
    uVar4 = F_00b82240((undefined *)((int)this + 0x700) GEN_EDX_ARG,param_1);
    return uVar4;
  }
  (*(uint *)(gen_frame + 0x8)) = 0;
  if (param_3 != 0) {
    do {
      uVar4 = (*(uint *)(gen_frame + 0x8));
      iVar2 = *(int *)(param_2 + (*(uint *)(gen_frame + 0x8)) * 4);
      if (iVar2 != 0) {
        piVar5 = (int *)F_006b5da0((undefined *)((int)this + 0x6c0) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),iVar2);
        if (*piVar5 != *(int *)((int)this + 0x6c4)) {
          pvVar1 = *(undefined * PTR32 *)(*piVar5 + 0x40);
          piVar5 = (int *)((int)pvVar1 + 0x88);
          iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar5), 0);
          if (iVar2 == 2) {
            piVar5 = (int *)((int)pvVar1 + 0x8c);
            iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar5), 0);
            if (iVar2 < 8) {
              uVar4 = F_00503790(pvVar1 GEN_EDX_ARG,param_1);
              if (uVar4 != 0) {
                return uVar4;
              }
              puVar6 = (undefined4 *)F_0050eba0(*(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x5c) GEN_EDX_ARG,param_1);
              puVar3 = (undefined4 *)puVar6[1];
              this = (*(undefined * PTR32 *)(gen_frame + 0x4));
              uVar4 = (*(uint *)(gen_frame + 0x8));
              for (puVar6 = (undefined4 *)*puVar6; (*(undefined * PTR32 *)(gen_frame + 0x4)) = this, puVar6 != puVar3;
                  puVar6 = puVar6 + 7) {
                puVar7 = puVar6;
                if (0xf < (uint)puVar6[5]) {
                  puVar7 = (undefined4 *)*puVar6;
                }
                (*(uint *)(gen_frame + 0x8)) = uVar4;
                uVar4 = F_00503790(pvVar1 GEN_EDX_ARG,puVar7);
                if (uVar4 != 0) {
                  return uVar4;
                }
                this = (*(undefined * PTR32 *)(gen_frame + 0x4));
                uVar4 = (*(uint *)(gen_frame + 0x8));
              }
            }
          }
        }
      }
      (*(uint *)(gen_frame + 0x8)) = uVar4 + 1;
    } while (uVar4 + 1 < param_3);
  }
  uVar4 = F_00691f00(this GEN_EDX_ARG,param_1);
  return uVar4;
}

/* ref: FUN_006a80c0 */
GEN_FRAME uint GEN_THISCALL F_006a80c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a80c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x108))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x8)),0x100,param_1);
  if (uVar1 == 0) {
    uVar1 = F_0069fee0(this GEN_EDX_ARG,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
    return uVar1;
  }
  F_006a6af0(this GEN_EDX_ARG);
  F_006937b0(*(undefined * PTR32 *)((int)this + 0x2d0) GEN_EDX_ARG,param_1,0x736b6c62,uVar1,0);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xd0))(this GEN_EDX_ARG,param_1);
  *(uint *)((int)this + 0x2c8) = *(uint *)((int)this + 0x2c8) | 0x80000000;
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_006a8160 */
GEN_FRAME uint GEN_THISCALL F_006a8160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a8160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x110))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x8)),0x100,param_1);
  if (uVar2 == 0) {
    uVar2 = 0;
    if (*(undefined * PTR32 *)((int)this + 0x2d0) != (undefined *)0x0) {
      F_00693890(*(undefined * PTR32 *)((int)this + 0x2d0) GEN_EDX_ARG,param_1 + 5);
      uVar2 = *(uint *)((int)this + 0x2d0);
      if (*(short *)(uVar2 + 0x42) == *(short *)(uVar2 + 0x40)) {
        *(uint *)((int)this + 0x2c8) = *(uint *)((int)this + 0x2c8) & 0x7fffffff;
      }
    }
    if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
      bVar1 = F_0061edb0(*(undefined * PTR32 *)((int)this + 0x78) GEN_EDX_ARG,param_1,0);
      F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
      return CONCAT31(extraout_var,bVar1);
    }
  }
  else {
    F_006a6af0(this GEN_EDX_ARG);
    uVar2 = F_006937b0(*(undefined * PTR32 *)((int)this + 0x2d0) GEN_EDX_ARG,param_1 + 5,0x736b70,uVar2,0);
    *(uint *)((int)this + 0x2c8) = *(uint *)((int)this + 0x2c8) | 0x80000000;
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_006a8230 */
GEN_FRAME uint GEN_THISCALL F_006a8230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a8230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  uVar1 = *(uint *)((int)this + 0x71c) >> 0xc;
  if ((uVar1 & 1) != 0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x114))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x8)),0x100,param_1);
    if (uVar1 == 0) {
      uVar1 = F_0069fe60(this GEN_EDX_ARG,param_1);
      F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
      return uVar1;
    }
    F_006a6af0(this GEN_EDX_ARG);
    uVar1 = F_006937b0(*(undefined * PTR32 *)((int)this + 0x2d0) GEN_EDX_ARG,param_1 + 10,0x70687962,uVar1,0);
    *(uint *)((int)this + 0x2c8) = *(uint *)((int)this + 0x2c8) | 0x80000000;
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_006a82d0 */
GEN_FRAME uint GEN_THISCALL F_006a82d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a82d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 200))(this GEN_EDX_FWD);
  uVar1 = uVar1 - 1;
  if (uVar1 < 3) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x13c))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),0x100);
    if (uVar1 == 0) {
      uVar1 = F_0069feb0(this GEN_EDX_ARG);
      F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
      return uVar1;
    }
    F_006a6af0(this GEN_EDX_ARG);
    uVar1 = F_006937b0(*(undefined * PTR32 *)((int)this + 0x2d0) GEN_EDX_ARG,0xf,0x656964,uVar1,0);
    *(uint *)((int)this + 0x2c8) = *(uint *)((int)this + 0x2c8) | 0x80000000;
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_006a8370 */
GEN_FRAME uint GEN_THISCALL F_006a8370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a8370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  int iVar1;
  ushort uVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 300))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x8)),0x100,param_1);
  if (uVar3 == 0) {
    uVar3 = F_006a0240(this GEN_EDX_ARG,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
    return uVar3;
  }
  F_006a6af0(this GEN_EDX_ARG);
  F_006937b0(((undefined *)GEN_TOP((*(int *)((int)this + 0x2d4) + param_1 * 0x48))) GEN_EDX_ARG,0,0x696d63,uVar3,1);
  bVar4 = (byte)param_1;
  iVar6 = 3;
  (*(int *)(gen_frame + 0x4)) = 4;
  do {
    iVar7 = *(int *)((int)this + 0x2d4) + param_1 * 0x48;
    uVar5 = 0 << ((byte)iVar6 & 0x1f);
    uVar2 = ~(1 << ((byte)iVar6 & 0x1f));
    *(ushort *)(iVar7 + 0x40) = uVar2 & *(ushort *)(iVar7 + 0x40) | uVar5;
    *(ushort *)(iVar7 + 0x42) = uVar2 & *(ushort *)(iVar7 + 0x42) | uVar5;
    *(ushort *)(iVar7 + 0x44) = *(ushort *)(iVar7 + 0x44) & uVar2 | uVar5;
    iVar1 = *(int *)(iVar7 + iVar6 * 4);
    if (iVar1 != 0) {
      F_0050c620(iVar1,0,0);
      *(undefined4 *)(iVar7 + iVar6 * 4) = 0;
    }
    iVar6 = iVar6 + 1;
    (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) - 1;
    *(uint *)((int)this + 0x2cc) =
         *(uint *)((int)this + 0x2cc) & ~(1 << (bVar4 & 0x1f) | 1U >> 0x20 - (bVar4 & 0x1f)) |
         0 << (bVar4 & 0x1f);
  } while ((*(int *)(gen_frame + 0x4)) != 0);
  uVar3 = 1 << (bVar4 & 0x1f);
  *(uint *)((int)this + 0x2c8) = ~uVar3 & *(uint *)((int)this + 0x2c8) | uVar3;
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_006a84e0 */
GEN_FRAME uint GEN_THISCALL F_006a84e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a84e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  int iVar1;
  uint uVar2;
  uint * puVar3;
  int * piVar4;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  iVar1 = *(int *)((int)this + 0x2d4);
  if ((iVar1 == 0) || ((*(byte *)(iVar1 + 0x40 + param_1 * 0x48) >> 1 & 1) == 0)) {
    piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x7c) + param_1 * 4)));
    if (*((int *)GEN_TOP((*(int *)((int)this + 0x7c) + param_1 * 4))) == 0) goto LAB_006a8634;
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = *(undefined * PTR32 *)(*piVar4 + 0x18);
    F_006a6af0(this GEN_EDX_FWD);
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = *(undefined * PTR32 *)(iVar1 + param_1 * 0x48 + 4);
  }
  uVar2 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0xa8) + 4))) + 0x12 +
                 *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0xa8))));
  (*(uint *)(gen_frame + 0x14)) = uVar2;
  (*(uint *)(gen_frame + 0xc)) = 4;
  puVar3 = &(*(uint *)(gen_frame + 0x14));
  if (3 < uVar2) {
    puVar3 = &(*(uint *)(gen_frame + 0xc));
  }
  uVar2 = *puVar3;
  (*(uint *)(gen_frame + 0xc)) = (uint)(ushort)uVar2;
  (*(uint *)(gen_frame + 0x14)) = 0;
  if ((ushort)uVar2 != 0) {
    do {
      iVar1 = *(int *)this;
      uVar2 = F_004ffe90((*(undefined * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x14)));
      uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x130))(this,((undefined1 *)(gen_frame + 0x18)),0x100,param_1,uVar2);
      if (uVar2 == 0) {
        F_006a0400(this GEN_EDX_ARG,param_1,(*(uint *)(gen_frame + 0x14)));
      }
      else {
        F_006937b0(((undefined *)GEN_TOP((*(int *)((int)this + 0x2d4) + param_1 * 0x48))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x14)) + 3,0x6d74726c
                     ,uVar2,1);
      }
      uVar2 = (*(uint *)(gen_frame + 0x14)) + 1;
      (*(uint *)(gen_frame + 0x14)) = uVar2;
    } while (uVar2 < (*(uint *)(gen_frame + 0xc)));
  }
  uVar2 = 1 << ((byte)param_1 & 0x1f);
  *(uint *)((int)this + 0x2c8) = ~uVar2 & *(uint *)((int)this + 0x2c8) | uVar2;
  piVar4 = ((int *)GEN_TOP((~uVar2 & *(uint *)((int)this + 0x2cc) | uVar2)));
  *(int * PTR32 *)((int)this + 0x2cc) = piVar4;
LAB_006a8634: ;
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c) GEN_EDX_ARG);
  return (uint)piVar4;
}

/* ref: FUN_006a8650 */
GEN_FRAME uint GEN_THISCALL F_006a8650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a8650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_006a6af0(this GEN_EDX_FWD);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x134))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),0x100,param_1);
  if (uVar1 == 0) {
    uVar1 = F_006a02a0(this GEN_EDX_ARG,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
    return uVar1;
  }
  F_006937b0(((undefined *)GEN_TOP((*(int *)((int)this + 0x2d4) + param_1 * 0x48))) GEN_EDX_ARG,2,0x746578,uVar1,1);
  uVar1 = 1 << ((byte)param_1 & 0x1f);
  *(uint *)((int)this + 0x2c8) = ~uVar1 & *(uint *)((int)this + 0x2c8) | uVar1;
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_006a86f0 */
GEN_FRAME uint GEN_THISCALL F_006a86f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a86f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  ushort uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  
  iVar3 = *(int *)((int)this + 0x2d4);
  iVar1 = param_1 * 0x48;
  if (((*(byte *)(iVar3 + 0x40 + iVar1) & 1) != 0) && ((*(byte *)(iVar3 + 0x42 + iVar1) & 1) != 0))
  {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xe4))(this GEN_EDX_FWD,param_1,*(undefined4 *)(iVar3 + iVar1));
    F_006a0240(this GEN_EDX_ARG,param_1);
  }
  iVar1 = iVar1 + *(int *)((int)this + 0x2d4);
  uVar2 = *(ushort *)(iVar1 + 0x40);
  if ((uVar2 & 1) == 0) {
    bVar4 = (byte)(uVar2 >> 8);
    bVar5 = (byte)uVar2 >> 1;
    uVar2 = CONCAT11(bVar4,bVar5);
    if ((bVar5 & 1) == 0) {
      return CONCAT31((uint3)bVar4,1);
    }
    if ((*(byte *)(iVar1 + 0x42) >> 1 & 1) != 0) {
      F_006a84e0(this GEN_EDX_ARG,param_1);
      F_006a8650(this GEN_EDX_ARG,param_1);
      return (byte)~(byte)(*(uint *)((int)this + 0x2cc) >> ((byte)param_1 & 0x1f)) & 1;
    }
  }
  return (uint)(uVar2 >> 8) << 8;
}

/* ref: FUN_006a8790 */
GEN_FRAME unsigned int GEN_THISCALL F_006a8790(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a8790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = *(uint *)((int)this + 0x74);
  uVar5 = 0;
  bVar2 = false;
  if (uVar1 != 0) {
    iVar4 = 0;
    do {
      bVar3 = (byte)*((undefined2 *)GEN_TOP((iVar4 + 0x40 + *(int *)((int)this + 0x2d4))));
      if (((bVar3 >> 1 & 1) != 0) || ((bVar3 >> 3 & 1) != 0)) {
        F_006a6c00(this GEN_EDX_FWD,uVar5);
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xdc))(this GEN_EDX_ARG,uVar5);
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xe8))
                  (this GEN_EDX_ARG,uVar5,*((undefined4 *)GEN_TOP((iVar4 + 8 + *(int *)((int)this + 0x2d4)))));
        bVar2 = true;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x48;
    } while (uVar5 < uVar1);
    if (bVar2) {
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x148))(this GEN_EDX_ARG);
      ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xe0))(this GEN_EDX_ARG);
    }
  }
  return;
}

/* ref: Client::Graphics::Scene::Human::vf53 */
GEN_FRAME uint GEN_THISCALL F_006a8830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a8830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if (param_1 < 0xc) {
    uVar1 = (uint)(&REFG(byte, 0x6a88b4))[(int)(param_1)];
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      F_006a80c0(this GEN_EDX_FWD,3);
      uVar1 = F_006a8230(this GEN_EDX_ARG,3);
      return uVar1;
    case 1: ;
      F_006a80c0(this GEN_EDX_ARG,4);
      uVar1 = F_006a8230(this GEN_EDX_ARG,4);
      break;
    case 10: ;
      F_006a80c0(this GEN_EDX_ARG,2);
      uVar1 = F_006a8230(this GEN_EDX_ARG,2);
      return uVar1;
    case 0xb: ;
      F_006a80c0(this GEN_EDX_ARG,1);
      uVar1 = F_0068d7f0(this GEN_EDX_ARG);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: Client::Graphics::Scene::Human::vf54 */
GEN_FRAME uint GEN_THISCALL F_006a88c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a88c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006a6e70(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Client::Graphics::Scene::Human::vf56 */
GEN_NOFRAME uint GEN_THISCALL F_006a88d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a88d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x818) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,*(int *)(this + 0x818));
    *(undefined4 *)(this + 0x818) = 0;
  }
  uVar1 = F_006a7140(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf56 */
GEN_NOFRAME uint GEN_THISCALL F_006a8900(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a8900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x790) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,*(int *)(this + 0x790));
    *(undefined4 *)(this + 0x790) = 0;
  }
  F_006a2f90(this GEN_EDX_ARG);
  F_006a3030(this GEN_EDX_ARG);
  F_006a30d0(this GEN_EDX_ARG);
  F_006a3170(this GEN_EDX_ARG);
  uVar1 = F_006a3210(this GEN_EDX_ARG);
  if (*(short *)(this + 0x748) == 1) {
    uVar1 = F_00694230(this GEN_EDX_ARG);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_006a8960 */
GEN_NOFRAME uint GEN_THISCALL F_006a8960(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a8960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b32d4));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)((int)this + 0xbc) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc0) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc4) = 0xffffffff;
  *(undefined4 *)((int)this + 200) = 0xffffffff;
  *(undefined4 *)((int)this + 0xcc) = 0xffffffff;
  *(undefined4 *)((int)this + 0xd0) = 0xffffffff;
  *(undefined4 *)((int)this + 0xd4) = 0xffffffff;
  *(undefined4 *)((int)this + 0xd8) = 0xffffffff;
  *(undefined4 *)((int)this + 0xdc) = 0xffffffff;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = uVar1;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  return (uint)this;
}

/* ref: FUN_006a8a80 */
GEN_FRAME unsigned int GEN_THISCALL F_006a8a80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a8a80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int local_8;
  
  F_0069f140(this GEN_EDX_FWD);
  if (*(int *)((int)this + 0x54) != 0) {
    F_0050c620(*(int *)((int)this + 0x54),0,0);
    *(undefined4 *)((int)this + 0x54) = 0;
  }
  if (*(int *)((int)this + 0x50) != 0) {
    F_0050c620(*(int *)((int)this + 0x50),0,0);
    *(undefined4 *)((int)this + 0x50) = 0;
  }
  if (*(int *)((int)this + 0x4c) != 0) {
    F_0050c620(*(int *)((int)this + 0x4c),0,0);
    *(undefined4 *)((int)this + 0x4c) = 0;
  }
  if (*(int *)((int)this + 0x48) != 0) {
    F_0050c620(*(int *)((int)this + 0x48),0,0);
    *(undefined4 *)((int)this + 0x48) = 0;
  }
  if (*(int *)((int)this + 0x44) != 0) {
    F_0050c620(*(int *)((int)this + 0x44),0,0);
    *(undefined4 *)((int)this + 0x44) = 0;
  }
  if (*(int *)((int)this + 0x40) != 0) {
    F_0050c620(*(int *)((int)this + 0x40),0,0);
    *(undefined4 *)((int)this + 0x40) = 0;
  }
  if (*(int *)((int)this + 0x3c) != 0) {
    F_0050c620(*(int *)((int)this + 0x3c),0,0);
    *(undefined4 *)((int)this + 0x3c) = 0;
  }
  if (*(int *)((int)this + 0x38) != 0) {
    F_0050c620(*(int *)((int)this + 0x38),0,0);
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  if (*(int *)((int)this + 0x34) != 0) {
    F_0050c620(*(int *)((int)this + 0x34),0,0);
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  if (*(int *)((int)this + 0x30) != 0) {
    F_0050c620(*(int *)((int)this + 0x30),0,0);
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  if (*(int *)((int)this + 0x2c) != 0) {
    F_0050c620(*(int *)((int)this + 0x2c),0,0);
    *(undefined4 *)((int)this + 0x2c) = 0;
  }
  if (*(int *)((int)this + 0x28) != 0) {
    F_0050c620(*(int *)((int)this + 0x28),0,0);
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  if (*(int *)((int)this + 0x24) != 0) {
    F_0050c620(*(int *)((int)this + 0x24),0,0);
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  if (*(int *)((int)this + 0x20) != 0) {
    F_0050c620(*(int *)((int)this + 0x20),0,0);
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  if (*(int *)((int)this + 0x1c) != 0) {
    F_0050c620(*(int *)((int)this + 0x1c),0,0);
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  if (*(int *)((int)this + 0x18) != 0) {
    F_0050c620(*(int *)((int)this + 0x18),0,0);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  if (*(int *)((int)this + 0x14) != 0) {
    F_0050c620(*(int *)((int)this + 0x14),0,0);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  if (*(int *)((int)this + 0x10) != 0) {
    F_0050c620(*(int *)((int)this + 0x10),0,0);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  if (*(int *)((int)this + 0xc) != 0) {
    F_0050c620(*(int *)((int)this + 0xc),0,0);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  if (*(int *)((int)this + 8) != 0) {
    F_0050c620(*(int *)((int)this + 8),0,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  if (*(int *)((int)this + 4) != 0) {
    F_0050c620(*(int *)((int)this + 4),0,0);
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (*(int *)((int)this + 0x58) != 0) {
    F_0050c620(*(int *)((int)this + 0x58),0,0);
    *(undefined4 *)((int)this + 0x58) = 0;
  }
  if (*(int *)((int)this + 0x5c) != 0) {
    F_0050c620(*(int *)((int)this + 0x5c),0,0);
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  if (*(int *)((int)this + 0x60) != 0) {
    F_0050c620(*(int *)((int)this + 0x60),0,0);
    *(undefined4 *)((int)this + 0x60) = 0;
  }
  if (*(int *)((int)this + 100) != 0) {
    F_0050c620(*(int *)((int)this + 100),0,0);
    *(undefined4 *)((int)this + 100) = 0;
  }
  piVar1 = (int *)((int)this + 0x68);
  local_8 = 4;
  do {
    if (*piVar1 != 0) {
      F_0050c620(*piVar1,0,0);
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 1;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  if ((*(uint *)((int)this + 0xf0) >> 2 & 1) != 0) {
    F_006a7e20(this GEN_EDX_ARG);
    *(uint *)((int)this + 0xf0) = *(uint *)((int)this + 0xf0) & 0xfffffffa;
    return;
  }
  *(uint *)((int)this + 0xf0) = *(uint *)((int)this + 0xf0) & 0xfffffffe;
  return;
}

/* ref: FUN_006a8d00 */
GEN_FRAME byte GEN_THISCALL F_006a8d00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6a8d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined * pvVar5;
  int iVar6;
  
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) & 0xfb;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 3;
  *(undefined1 *)((int)this + 0x65) = 1;
  *(char *)((int)this + 0x720) = (char)param_2;
  if ((char)param_2 == '\0') {
    *(undefined1 *)((int)this + 0x720) = 1;
  }
  *(undefined2 *)((int)this + 0x72) = 3;
  *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) & 0xfffe;
  *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) & 0xfffd;
  *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) | 4;
  *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) & 0xfff7;
  *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) & 0xffef;
  *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) & 0xffdf;
  *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) & 0xffbf;
  *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) & 0xff7f;
  *(undefined1 *)((int)this + 0x6ec) = 1;
  F_0068db80(this GEN_EDX_FWD,param_1);
  iVar6 = REFG(int, 0x137129c);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 200))(this GEN_EDX_ARG);
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 1: ;
    pvVar5 = *(undefined * PTR32 *)(iVar6 + 0x68);
    break;
  case 2: ;
    pvVar5 = *(undefined * PTR32 *)(iVar6 + 0x70);
    break;
  case 3: ;
    pvVar5 = *(undefined * PTR32 *)(iVar6 + 0x6c);
    break;
  case 4: ;
    pvVar5 = *(undefined * PTR32 *)(iVar6 + 0x74);
    break;
  default: ;
    pvVar5 = (undefined *)0x0;
  }
  iVar6 = 4;
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 200))(this GEN_EDX_ARG);
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 1: ;
    iVar6 = 0;
    break;
  case 2: ;
    iVar6 = 2;
    break;
  case 3: ;
    iVar6 = 1;
    break;
  case 4: ;
    iVar6 = 3;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x128))(this GEN_EDX_ARG);
  puVar3 = (undefined4 *)F_00b51f60(pvVar5 GEN_EDX_ARG,uVar2 & 0xffff | iVar6 << 0x10);
  *(undefined4 *)((int)this + 0x718) = *puVar3;
  *(undefined4 *)((int)this + 0x71c) = puVar3[1];
  uVar2 = F_00b14060(REFG(void * PTR32, 0x1370c1c) GEN_EDX_ARG,2);
  *(uint *)((int)this + 0x60) = uVar2;
  if (uVar2 != 0) {
    *(undefined * PTR32 *)(uVar2 + 4) = this;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,0xa8,0x10);
    if (uVar2 == 0) {
      pvVar5 = (undefined *)0x0;
    }
    else {
      pvVar5 = (undefined *)F_00621da0(uVar2 GEN_EDX_ARG);
    }
    *(undefined * PTR32 *)((int)this + 0x160) = pvVar5;
    if (((pvVar5 != (undefined *)0x0) && (bVar1 = F_00625d30(pvVar5 GEN_EDX_ARG), bVar1 != 0)) &&
       (bVar1 = F_006892b0(this GEN_EDX_ARG), bVar1 != 0)) {
      F_006a80c0(this GEN_EDX_ARG,0);
      if ((*(uint *)((int)this + 0x71c) >> 5 & 1) != 0) {
        F_006a8160(this GEN_EDX_ARG,0);
      }
      F_006a82d0(this GEN_EDX_ARG);
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x140))(this GEN_EDX_ARG);
      uVar2 = F_00638290(uVar2);
      if (uVar2 != 0) {
        *(undefined * PTR32 *)(uVar2 + 0x74) = this;
        uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x14c))(this GEN_EDX_ARG);
        F_00690310((undefined *)((int)this + 0x90) GEN_EDX_ARG,uVar4);
        F_00b82700((undefined *)((int)this + 0x700) GEN_EDX_ARG);
        *(uint *)((int)this + 0x78) = uVar2;
        bVar1 = F_00692bd0(this GEN_EDX_ARG);
        if (bVar1 != 0) {
          *(undefined * PTR32 *)((int)this + 0x88) = this;
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_006a8f40 */
GEN_FRAME uint GEN_THISCALL F_006a8f40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a8f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_006a8370(this GEN_EDX_FWD,param_1);
  F_006a0140(this GEN_EDX_ARG,param_1);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10c))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),0x100,param_1);
  if (uVar1 == 0) {
    uVar1 = F_006a69d0(this GEN_EDX_ARG,param_1);
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
    return uVar1;
  }
  F_006a6af0(this GEN_EDX_ARG);
  F_006937b0(((undefined *)GEN_TOP((*(int *)((int)this + 0x2d4) + param_1 * 0x48))) GEN_EDX_ARG,1,0x6d646c,uVar1,0);
  uVar1 = 1 << ((byte)param_1 & 0x1f);
  *(uint *)((int)this + 0x2c8) = ~uVar1 & *(uint *)((int)this + 0x2c8) | uVar1;
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xd4))(this GEN_EDX_ARG,param_1);
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_006a9000 */
GEN_NOFRAME uint GEN_THISCALL F_006a9000(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a9000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  undefined3 extraout_var_00 = 0;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  (*(undefined4 *)(gen_frame + 0x17)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x17)), 1, 3),2);
  (*(undefined4 *)(gen_frame + 0x1b)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x1b)), 1, 3),2);
  iVar1 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
  (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),*(undefined1 *)(REFG(int, 0x1371278) + 0x10));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),*(undefined1 *)(REFG(int, 0x1371278) + 0x11));
  if (iVar1 != 0) {
    fVar6 = (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x34) -
                            (float10)*(float *)(iVar1 + 0x94))));
    fVar7 = (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x30) -
                            (float10)*(float *)(iVar1 + 0x90))));
    fVar8 = (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x38) -
                            (float10)*(float *)(iVar1 + 0x98))));
    fVar6 = F_006a0570(this GEN_EDX_FWD,((float)GEN_TOF((fVar8 * fVar8 + (fVar7 * fVar7 + fVar6 * fVar6)))));
    bVar2 = F_00693210(this GEN_EDX_ARG,(float)fVar6);
    (*(undefined4 *)(gen_frame + 0x17)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x17)), 1, 3),bVar2);
    uVar3 = F_00693280(this GEN_EDX_ARG,(float)fVar6);
    (*(undefined4 *)(gen_frame + 0x1b)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x1b)), 1, 3),(char)uVar3);
  }
  if (*(int *)((int)this + 0x2c8) < 0) {
    bVar2 = F_006a0790(*(undefined * PTR32 *)((int)this + 0x2d0) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x17)),(*(undefined4 *)(gen_frame + 0x1b)));
    if (bVar2 == 0) {
      return CONCAT31(extraout_var,bVar2);
    }
    *(uint *)((int)this + 0x2c8) = *(uint *)((int)this + 0x2c8) & 0x7fffffff;
  }
  uVar3 = *(uint *)((int)this + 0x74);
  uVar5 = 0;
  (*(uint *)(gen_frame + 0xc)) = 1;
  uVar4 = 0;
  if (uVar3 != 0) {
    (*(int *)(gen_frame + 0x10)) = 0;
    do {
      uVar4 = F_00693730(((undefined *)GEN_TOP((*(int *)((int)this + 0x2d4) + (*(int *)(gen_frame + 0x10))))) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x17)),(*(undefined4 *)(gen_frame + 0x1b)));
      bVar2 = (byte)uVar5;
      if ((*(uint *)((int)this + 0x2c8) >> (bVar2 & 0x1f) & 1) != 0) {
        (*(byte *)(gen_frame + 0x1f)) = F_006a0790(((undefined *)GEN_TOP((*(int *)((int)this + 0x2d4) + (*(int *)(gen_frame + 0x10))))) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),
                                (*(undefined4 *)(gen_frame + 0x17)),(*(undefined4 *)(gen_frame + 0x1b)));
        uVar4 = CONCAT31(extraout_var_00,(*(byte *)(gen_frame + 0x1f)));
        if ((*(uint *)((int)this + 0x2cc) >> (bVar2 & 0x1f) & 1) == 0) {
          uVar4 = F_006a86f0(this GEN_EDX_ARG,uVar5);
          (*(byte *)(gen_frame + 0x1f)) = (*(byte *)(gen_frame + 0x1f)) & (byte)uVar4;
        }
        if ((*(byte *)(gen_frame + 0x1f)) != 0) {
          uVar4 = 0 << (bVar2 & 0x1f);
          *(uint *)((int)this + 0x2c8) = ~(*(uint *)(gen_frame + 0xc)) & *(uint *)((int)this + 0x2c8) | uVar4;
          uVar4 = ~(*(uint *)(gen_frame + 0xc)) & *(uint *)((int)this + 0x2cc) | uVar4;
          *(uint *)((int)this + 0x2cc) = uVar4;
        }
      }
      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 0x48;
      uVar5 = uVar5 + 1;
      (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) << 1 | (uint)((int)(*(uint *)(gen_frame + 0xc)) < 0);
    } while (uVar5 < uVar3);
  }
  if (*(int *)((int)this + 0x2c8) == 0) {
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_ARG);
  }
  return uVar4;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf10 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006a91d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a91d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00692c80(this GEN_EDX_FWD);
  if ((*(undefined * PTR32 *)(this + 0x78) != (undefined *)0x0) &&
     ((*((byte *)GEN_TOP((*(int *)(this + 0x2d0) + 0x40))) >> 5 & 1) != 0)) {
    F_0061edb0(*(undefined * PTR32 *)(this + 0x78) GEN_EDX_ARG,0,*((undefined4 *)GEN_TOP((*(int *)(this + 0x2d0) + 0x14))));
  }
  if ((*(undefined * PTR32 *)(this + 0x78) != (undefined *)0x0) && (*((short *)GEN_TOP((*(int *)(this + 0x2d0) + 0x40))) < 0)) {
    F_0065a5f0(*(undefined * PTR32 *)(this + 0x78) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)(this + 0x2d0) + 0x3c))));
  }
  F_006a8790(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_006a9230 */
GEN_NOFRAME uint GEN_THISCALL F_006a9230(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a9230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(uint *)((int)this + 0x74c) >> 10 & 1) != 0) {
    if (*(short *)((int)this + 0x77a) == 0) {
      F_006a69d0(this GEN_EDX_FWD,10);
    }
    else {
      F_006a8f40(this GEN_EDX_ARG,10);
    }
  }
  if ((*(uint *)((int)this + 0x74c) >> 0xb & 1) != 0) {
    if (*(short *)((int)this + 0x77c) == 0) {
      F_006a69d0(this GEN_EDX_ARG,0xb);
    }
    else {
      F_006a8f40(this GEN_EDX_ARG,0xb);
    }
  }
  if ((*(uint *)((int)this + 0x74c) >> 0xc & 1) != 0) {
    if (*(short *)((int)this + 0x77e) != 0) {
      F_006a8f40(this GEN_EDX_ARG,0xc);
      uVar1 = F_006a8f40(this GEN_EDX_ARG,0xf);
      return uVar1;
    }
    F_006a69d0(this GEN_EDX_ARG,0xc);
  }
  uVar1 = F_006a8f40(this GEN_EDX_ARG,0xf);
  return uVar1;
}

/* ref: FUN_006a92c0 */
GEN_NOFRAME uint GEN_THISCALL F_006a92c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a92c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)((int)this + 0x778);
  uVar2 = F_00689950((uint)uVar1);
  if (uVar2 != uVar1) {
    F_006a8f40(this GEN_EDX_ARG,0xd);
    uVar3 = F_006a8f40(this GEN_EDX_ARG,0xe);
    return uVar3;
  }
  F_006a69d0(this GEN_EDX_ARG,0xd);
  uVar3 = F_006a69d0(this GEN_EDX_ARG,0xe);
  return uVar3;
}

/* ref: FUN_006a9300 */
GEN_FRAME unsigned int GEN_THISCALL F_006a9300(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a9300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int local_14;
  undefined4 * local_10;
  
  if (*(int *)((int)this + 0x74c) != 0) {
    local_10 = (undefined4 *)((int)this + 0x750);
    local_14 = (int)this + 0x782;
    uVar6 = 0;
    bVar1 = false;
    uVar5 = 0;
    do {
      if ((*(uint *)((int)this + 0x74c) >> ((byte)uVar6 & 0x1f) & 1) != 0) {
        if (((uVar6 == 0) || (4 < uVar6)) && (*((short *)GEN_TOP((uVar5 + *(int *)((int)this + 0x818)))) == 0))
        {
          F_006a69d0(this GEN_EDX_FWD,uVar6);
          *local_10 = *((undefined4 *)GEN_TOP((uVar5 + *(int *)((int)this + 0x818))));
          *(undefined4 *)(local_14 - 2) = 0x3ff0000;
          *(undefined1 *)(local_14 + 2) = 0;
          bVar1 = true;
        }
        else {
          uVar3 = (uint)*((ushort *)GEN_TOP((uVar5 + *(int *)((int)this + 0x818))));
          uVar4 = (uint)*(ushort *)((int)this + 0x778) % 10;
          if (uVar4 == 1) {
            uVar2 = F_0068c9c0(REFG(void * PTR32, 0x137129c) GEN_EDX_ARG,(uint)*(ushort *)((int)this + 0x778),uVar6,uVar3);
          }
          else if (uVar4 == 4) {
            uVar2 = F_0068cc20(REFG(void * PTR32, 0x137129c) GEN_EDX_ARG,(uint)*(ushort *)((int)this + 0x778),uVar6,uVar3);
          }
          else {
            uVar2 = F_0068cd40(REFG(void * PTR32, 0x137129c) GEN_EDX_ARG,(uint)*(ushort *)((int)this + 0x778),uVar6,uVar3);
          }
          *((ushort *)GEN_TOP((uVar5 + 10 + *(int *)((int)this + 0x818)))) = uVar2;
          F_006a8f40(this GEN_EDX_ARG,uVar6);
        }
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + 6;
      uVar5 = uVar5 + 0xc;
      uVar6 = uVar6 + 1;
    } while (uVar5 < 0x78);
    if (bVar1) {
      F_006a7140(this GEN_EDX_ARG);
    }
    *(undefined4 *)((int)this + 0x74c) = 0;
  }
  return;
}

/* ref: FUN_006a9440 */
GEN_FRAME unsigned int GEN_THISCALL F_006a9440(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a9440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 * local_10;
  uint local_c;
  
  if (*(int *)((int)this + 0x730) != 0) {
    sVar1 = *(short *)((int)this + 0x748);
    local_10 = (undefined4 *)((int)this + 0x734);
    bVar2 = false;
    local_c = 0;
    uVar3 = 0;
    iVar4 = (int)this + 0x74c;
    do {
      if ((*(uint *)((int)this + 0x730) >> ((byte)local_c & 0x1f) & 1) != 0) {
        if (((sVar1 == 1) && (local_c < 2)) ||
           (*((short *)GEN_TOP((uVar3 + *(int *)((int)this + 0x790)))) != 0)) {
          F_006a8f40(this GEN_EDX_FWD,local_c);
        }
        else {
          F_006a69d0(this GEN_EDX_ARG,local_c);
          *local_10 = *((undefined4 *)GEN_TOP((uVar3 + *(int *)((int)this + 0x790))));
          *(undefined4 *)(iVar4 - 2) = 0x3ff0000;
          *(undefined1 *)(iVar4 + 2) = 0;
          bVar2 = true;
        }
      }
      local_10 = local_10 + 1;
      local_c = local_c + 1;
      uVar3 = uVar3 + 0xc;
      iVar4 = iVar4 + 6;
    } while (uVar3 < 0x3c);
    if (bVar2) {
      F_006a2f90(this GEN_EDX_ARG);
      F_006a3030(this GEN_EDX_ARG);
      F_006a30d0(this GEN_EDX_ARG);
      F_006a3170(this GEN_EDX_ARG);
      F_006a3210(this GEN_EDX_ARG);
      if (*(short *)((int)this + 0x748) == 1) {
        F_00694230(this GEN_EDX_ARG);
      }
    }
    *(undefined4 *)((int)this + 0x730) = 0;
  }
  return;
}

/* ref: FUN_006a9540 */
GEN_FRAME byte GEN_THISCALL F_006a9540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6a9540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  if (*(short *)((int)this + 0x730) != *param_1) {
    return 0;
  }
  *(short *)((int)this + 0x732) = param_1[1];
  *(short *)((int)this + 0x734) = param_1[2];
  F_006a8f40(this GEN_EDX_FWD,0);
  return 1;
}

/* ref: FUN_006a9580 */
GEN_FRAME byte GEN_THISCALL F_006a9580(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a9580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  undefined4 * puVar4;
  char * pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  F_004ff310(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_FWD,4,0);
  (*(undefined4 *)(gen_frame + 0x14)) = 0x657170;
  uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),"chara/xls/equipmentParameter/equipmentParameter.eqp",0,0,0)
  ;
  *(uint *)((int)this + 4) = uVar1;
  if (uVar1 != 0) {
    (*(undefined4 *)(gen_frame + 0x14)) = 0x65716470;
    uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),"chara/xls/charadb/EquipmentDeformerParameter.eqdp",0,0,0)
    ;
    *(uint *)((int)this + 8) = uVar1;
    if (uVar1 != 0) {
      (*(undefined4 *)(gen_frame + 0x14)) = 0x65716470;
      uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),"chara/xls/charadb/AccessoryDeformerParameter.eqdp",0,0,
                           0);
      *(uint *)((int)this + 0xc) = uVar1;
      if (uVar1 != 0) {
        (*(undefined4 *)(gen_frame + 0x14)) = 0x77616f65;
        uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),"chara/xls/attachOffset/attachOffsetExist.waoe",0,0,0)
        ;
        *(uint *)((int)this + 0x10) = uVar1;
        if (uVar1 != 0) {
          (*(undefined4 *)(gen_frame + 0x14)) = 0x777464;
          uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),"chara/xls/weapontype/attach.wtd",0,0,0);
          *(uint *)((int)this + 0x14) = uVar1;
          if (uVar1 != 0) {
            (*(undefined4 *)(gen_frame + 0x14)) = 0x777464;
            uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),"chara/xls/weapontype/motion.wtd",0,0,0);
            *(uint *)((int)this + 0x18) = uVar1;
            if (uVar1 != 0) {
              (*(undefined4 *)(gen_frame + 0x14)) = 0x777464;
              uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),"chara/xls/weapontype/se.wtd",0,0,0);
              *(uint *)((int)this + 0x1c) = uVar1;
              if (uVar1 != 0) {
                (*(undefined4 *)(gen_frame + 0x14)) = 0x706264;
                uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),"chara/xls/boneDeformer/human.pbd",0,0,0);
                *(uint *)((int)this + 0x20) = uVar1;
                if (uVar1 != 0) {
                  (*(undefined4 *)(gen_frame + 0x14)) = 0x636d70;
                  uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),"chara/xls/charaMake/human.cmp",0,0,0);
                  *(uint *)((int)this + 0x24) = uVar1;
                  if (uVar1 != 0) {
                    (*(undefined4 *)(gen_frame + 0x14)) = 0x657374;
                    uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),
                                         "chara/xls/charadb/faceSkeletonTemplate.est",0,0,0);
                    *(uint *)((int)this + 0x28) = uVar1;
                    if (uVar1 != 0) {
                      (*(undefined4 *)(gen_frame + 0x14)) = 0x657374;
                      uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),
                                           "chara/xls/charadb/hairSkeletonTemplate.est",0,0,0);
                      *(uint *)((int)this + 0x2c) = uVar1;
                      if (uVar1 != 0) {
                        (*(undefined4 *)(gen_frame + 0x14)) = 0x657374;
                        uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),"chara/xls/charadb/extra_met.est",0,0,
                                             0);
                        *(uint *)((int)this + 0x30) = uVar1;
                        if (uVar1 != 0) {
                          (*(undefined4 *)(gen_frame + 0x14)) = 0x657374;
                          uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),"chara/xls/charadb/extra_top.est",0,
                                               0,0);
                          *(uint *)((int)this + 0x34) = uVar1;
                          if (uVar1 != 0) {
                            uVar8 = 0;
                            uVar7 = 0;
                            uVar6 = 0;
                            pcVar5 = "common/graphics/texture/dummy.tex";
                            puVar4 = &(*(undefined4 *)(gen_frame + 0x14));
                            (*(undefined4 *)(gen_frame + 0x14)) = 0x746578;
                            uVar1 = F_004ff310(((byte *)(gen_frame + 0x0)) + 0x10 GEN_EDX_ARG,0,0);
                            uVar1 = F_00513d20(uVar1,puVar4,pcVar5,uVar6,uVar7,uVar8);
                            *(uint *)((int)this + 0x38) = uVar1;
                            if (uVar1 != 0) {
                              (*(undefined4 *)(gen_frame + 0x14)) = 0x746578;
                              uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),"chara/common/texture/black.tex"
                                                   ,0,0,0);
                              *(uint *)((int)this + 0x3c) = uVar1;
                              if (uVar1 != 0) {
                                (*(undefined4 *)(gen_frame + 0x14)) = 0x746578;
                                uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),
                                                     "chara/common/texture/white.tex",0,0,0);
                                *(uint *)((int)this + 0x40) = uVar1;
                                if (uVar1 != 0) {
                                  (*(undefined4 *)(gen_frame + 0x14)) = 0x746578;
                                  uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),
                                                       "chara/common/texture/transparent.tex",0,0,0)
                                  ;
                                  *(uint *)((int)this + 0x44) = uVar1;
                                  if (uVar1 != 0) {
                                    (*(undefined4 *)(gen_frame + 0x14)) = 0x746578;
                                    uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),
                                                                                                                  
                                                  "chara/common/texture/decal_equip/_stigma.tex",0,0
                                                  ,0);
                                    *(uint *)((int)this + 0x48) = uVar1;
                                    if (uVar1 != 0) {
                                      uVar1 = *(uint *)(REFG(int, 0x1370b90) + 0x34);
                                      (*(undefined4 *)(gen_frame + 0x14)) = 0x746578;
                                      if ((uVar1 >> 6 & 1) == 0) {
                                        uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),
                                                             "chara/common/texture/-tile_low_d.tex",
                                                             0,0,0);
                                        *(uint *)((int)this + 0x4c) = uVar1;
                                        if (uVar1 == 0) goto LAB_006a9a7e;
                                        pcVar5 = "chara/common/texture/-tile_low_n.tex";
                                      }
                                      else {
                                        uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),
                                                             "chara/common/texture/-tile_d.tex",0,0,
                                                             0);
                                        *(uint *)((int)this + 0x4c) = uVar1;
                                        if (uVar1 == 0) goto LAB_006a9a7e;
                                        pcVar5 = "chara/common/texture/-tile_n.tex";
                                      }
                                      (*(undefined4 *)(gen_frame + 0x14)) = 0x746578;
                                      uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),pcVar5,0,0,0);
                                      *(uint *)((int)this + 0x50) = uVar1;
                                      if (uVar1 != 0) {
                                        uVar8 = 0;
                                        uVar7 = 0;
                                        uVar6 = 0;
                                        pcVar5 = "shader/shpk/skin.shpk";
                                        puVar4 = &(*(undefined4 *)(gen_frame + 0x14));
                                        (*(undefined4 *)(gen_frame + 0x14)) = 0x7368706b;
                                        uVar1 = F_004ff310(((byte *)(gen_frame + 0x0)) + 0x10 GEN_EDX_ARG,5,0);
                                        uVar1 = F_00513d20(uVar1,puVar4,pcVar5,uVar6,uVar7,uVar8);
                                        *(uint *)((int)this + 0x54) = uVar1;
                                        if (uVar1 != 0) {
                                          (*(undefined4 *)(gen_frame + 0x14)) = 0x7074626c;
                                          uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),
                                                                                                                              
                                                  "chara/xls/animation/pap_resident_table.ptbl",0,0,
                                                  0);
                                          *(uint *)((int)this + 0x58) = uVar1;
                                          if (uVar1 != 0) {
                                            (*(undefined4 *)(gen_frame + 0x14)) = 0x616574;
                                            uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),
                                                                                                                                  
                                                  "chara/xls/animation/AnimationExchangeTable.aet",0
                                                  ,0,0);
                                            *(uint *)((int)this + 0x5c) = uVar1;
                                            if (uVar1 != 0) {
                                              (*(undefined4 *)(gen_frame + 0x14)) = 0x6d6c74;
                                              uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),
                                                                                                                                      
                                                  "chara/xls/animation/MotionLineTable.mlt",0,0,0);
                                              *(uint *)((int)this + 0x60) = uVar1;
                                              if (uVar1 != 0) {
                                                (*(undefined4 *)(gen_frame + 0x14)) = 0x736b6c62;
                                                uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),
                                                                                                                                          
                                                  "chara/common/animation/skl_material.sklb",0,0,0);
                                                *(uint *)((int)this + 100) = uVar1;
                                                if (uVar1 != 0) {
                                                  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = 
                                                  ((char *)REFP(0x10ae33c));
                                                  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) = 
                                                  ((char *)REFP(0x10ae370));
                                                  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) = 
                                                  ((char *)REFP(0x10ae3a8));
                                                  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) =
                                                       ((char *)REFP(0x10ae3e0));
                                                  uVar1 = 0;
                                                  puVar3 = (uint *)((int)this + 0x68);
                                                  while( true ) {
                                                    uVar6 = *(undefined4 *)(((byte *)(gen_frame + 0x0)) + uVar1 * 4);
                                                    (*(undefined4 *)(gen_frame + 0x14)) = 0x617774;
                                                    uVar2 = F_00513d20(((undefined1 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x14)),uVar6,0,0,
                                                                         0);
                                                    *puVar3 = uVar2;
                                                    if (uVar2 == 0) break;
                                                    uVar1 = uVar1 + 1;
                                                    puVar3 = puVar3 + 1;
                                                    if (3 < uVar1) {
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
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_006a9a7e: ;
  F_006a8a80(this GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_006a9a90 */
GEN_FRAME byte GEN_THISCALL F_006a9a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6a9a90u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  ushort uVar1;
  ushort uVar2;
  char * pcVar3;
  uint uVar4;
  float10 fVar5;
  
  if ((((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x730))) != *(*(char * PTR32 *)&gen_args[1])) || (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x731))) != (*(char * PTR32 *)&gen_args[1])[1]))
      || (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x732))) != (*(char * PTR32 *)&gen_args[1])[2])) ||
     ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x730))) == '\x01' && (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x734))) != (*(char * PTR32 *)&gen_args[1])[4])))) {
    return 0;
  }
  F_00b890c0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x730,(*(char * PTR32 *)&gen_args[1]));
  if ((char)(*(undefined4 *)&gen_args[2]) == '\0') {
    pcVar3 = (*(char * PTR32 *)&gen_args[1]) + 0x1c;
    uVar4 = 0;
    do {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xfc))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar4,pcVar3);
      uVar4 = uVar4 + 1;
      pcVar3 = pcVar3 + 4;
    } while (uVar4 < 10);
  }
  F_00693ef0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  uVar4 = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x734))) - 1;
  fVar5 = F_006b3220(*(undefined4 *)(REFG(int, 0x137129c) + 0x24) GEN_EDX_ARG,(uVar4 >> 1) + 1,
                       (uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x731))),uVar4 & 1,
                       (uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x732))),(uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x733))));
  *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x294))) = (float)fVar5;
  F_006a1010((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  (*(undefined4 *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[2]), 1, 3),0xff);
  F_006a6e70((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[2]));
  F_006a9230((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  uVar1 = *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x778)));
  uVar2 = F_00689950((uint)uVar1);
  if (uVar2 != uVar1) {
    F_006a8f40((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0xd);
    F_006a8f40((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0xe);
    F_006a9300((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    return 1;
  }
  F_006a69d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0xd);
  F_006a69d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0xe);
  F_006a9300((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_006a9bc0 */
GEN_FRAME uint GEN_THISCALL F_006a9bc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a9bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined * pvVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00690070(this GEN_EDX_FWD);
  F_006b5f20((undefined *)((int)this + 0xe0ac) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0xe0b0),
               *(undefined4 * PTR32 *)((int)this + 0xe0b0));
  F_00429760(*(undefined4 *)((int)this + 0xe0b0),0x18,0xd8);
  pvVar2 = (undefined *)((int)this + 0xe090);
  iVar1 = 0x3ff;
  do {
    pvVar2 = (undefined *)((int)pvVar2 - 0x34);
    F_0064ad80(pvVar2 GEN_EDX_ARG);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  pvVar2 = (undefined *)((int)this + 0x1090);
  iVar1 = 0x3f;
  do {
    pvVar2 = (undefined *)((int)pvVar2 - 0x34);
    F_0064ad80(pvVar2 GEN_EDX_ARG);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  pvVar2 = (undefined *)((int)this + 0x390);
  iVar1 = 0xf;
  do {
    pvVar2 = (undefined *)((int)pvVar2 - 0x34);
    F_0064ad80(pvVar2 GEN_EDX_ARG);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  if (0xf < *(uint *)((int)this + 0x48)) {
    F_00429760(*(undefined4 *)((int)this + 0x34),*(uint *)((int)this + 0x48) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0x48) = 0xf;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined1 *)((int)this + 0x34) = 0;
  return 0;
}

/* ref: FUN_006a9c90 */
GEN_NOFRAME uint GEN_THISCALL F_006a9c90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a9c90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * pvVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10b32e0));
  pvVar3 = (undefined *)((int)this + 0x10);
  iVar2 = 2;
  do {
    F_00690070(pvVar3 GEN_EDX_FWD);
    pvVar3 = (undefined *)((int)pvVar3 + 0xe0c0);
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  if (0xf < *(uint *)((int)this + 0x1c1a8)) {
    F_00429760(*(undefined4 *)((int)this + 0x1c194),*(uint *)((int)this + 0x1c1a8) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0x1c1a8) = 0xf;
  *(undefined4 *)((int)this + 0x1c1a4) = 0;
  *(undefined1 *)((int)this + 0x1c194) = 0;
  pvVar3 = (undefined *)((int)this + 0x1c190);
  iVar2 = 1;
  do {
    pvVar3 = (undefined *)((int)pvVar3 - 0xe0c0);
    uVar1 = F_006a9bc0(pvVar3 GEN_EDX_ARG);
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10b2a84))
  ;
  return uVar1;
}

/* ref: FUN_006a9d10 */
GEN_NOFRAME uint GEN_THISCALL F_006a9d10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a9d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  
  *(undefined4 *)this = GEN_FLT_TO(*(undefined4 *)this, REFG(float, 0x1087f04));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090998)));
  *(undefined4 *)((int)this + 0x10) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x10), REFG(float, 0x1090998));
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = uVar1;
  *(undefined4 *)((int)this + 0x30) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x30), REFG(float, 0x109482c));
  iVar3 = 0xf;
  *(undefined4 *)((int)this + 0x48) = 0xf;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined1 *)((int)this + 0x34) = 0;
  pvVar4 = (undefined *)((int)this + 0x50);
  do {
    F_00624be0(pvVar4 GEN_EDX_FWD);
    pvVar4 = (undefined *)((int)pvVar4 + 0x34);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  pvVar4 = (undefined *)((int)this + 0x390);
  iVar3 = 0x3f;
  do {
    F_00624be0(pvVar4 GEN_EDX_ARG);
    pvVar4 = (undefined *)((int)pvVar4 + 0x34);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  pvVar4 = (undefined *)((int)this + 0x1090);
  iVar3 = 0x3ff;
  do {
    F_00624be0(pvVar4 GEN_EDX_ARG);
    pvVar4 = (undefined *)((int)pvVar4 + 0x34);
    iVar3 = iVar3 - 1;
  } while (-1 < iVar3);
  *(undefined4 *)((int)this + 0xe090) = 0;
  *(undefined1 *)((int)this + 0xe09d) = 0;
  *(undefined4 *)((int)this + 0xe0a0) = 0;
  *(undefined4 *)((int)this + 0xe0a4) = 0;
  *(undefined1 *)((int)this + 0xe0a8) = 0;
  *(undefined4 *)((int)this + 0xe0b4) = 0;
  uVar2 = F_004296a0(0x18,0,0xd8);
  *(uint *)((int)this + 0xe0b0) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0xe0b0) + 4))) = *(int *)((int)this + 0xe0b0);
  *((int *)GEN_TOP((*(int *)((int)this + 0xe0b0) + 8))) = *(int *)((int)this + 0xe0b0);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xe0b0) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xe0b0) + 0x15))) = 1;
  *(undefined4 *)((int)this + 0xe094) = 0;
  *(undefined4 *)((int)this + 0xe098) = 0;
  return (uint)this;
}

/* ref: FUN_006a9e30 */
GEN_NOFRAME uint GEN_THISCALL F_006a9e30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a9e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10b32e0));
  *(undefined4 *)((int)this + 4) = 2;
  *(undefined4 *)((int)this + 8) = 0;
  this_00 = (undefined *)((int)this + 0x10);
  iVar1 = 1;
  do {
    F_006a9d10(this_00 GEN_EDX_FWD);
    this_00 = (undefined *)((int)this_00 + 0xe0c0);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  *(undefined1 *)((int)this + 0x1c190) = 0;
  *(undefined4 *)((int)this + 0x1c1a8) = 0xf;
  *(undefined4 *)((int)this + 0x1c1a4) = 0;
  *(undefined1 *)((int)this + 0x1c194) = 0;
  *(uint *)((int)this + 4) = (uint)*(byte *)(REFG(int, 0x1371278) + 0x24);
  return (uint)this;
}

/* ref: FUN_006a9ea0 */
GEN_FRAME uint GEN_THISCALL F_006a9ea0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6a9ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint * this_00;
  int * piVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined * pvVar7;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  (*(undefined4 *)(gen_frame + 0x28)) = 0x65;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0xc9;
  (*(undefined4 *)(gen_frame + 0x30)) = 0x12d;
  (*(undefined4 *)(gen_frame + 0x34)) = 0x191;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x1f5;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0x259;
  (*(undefined4 *)(gen_frame + 0x40)) = 0x2bd;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x321;
  (*(undefined4 *)(gen_frame + 0x48)) = 0x385;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x3e9;
  (*(undefined4 *)(gen_frame + 0x50)) = 0x44d;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x4b1;
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = &(*(undefined4 *)(gen_frame + 0x28));
  do {
    F_00515560(*(undefined * PTR32 *)((int)this + 0x58) GEN_EDX_FWD,&(*(int * PTR32 *)(gen_frame + 0x0)),*(*(undefined4 * PTR32 *)(gen_frame + 0x24)),1);
    (*(int * PTR32 *)(gen_frame + 0x18)) = (*(int * PTR32 *)(gen_frame + 0x0));
    (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)(gen_frame + 0x4));
    pvVar7 = this;
    if ((*(int * PTR32 *)(gen_frame + 0x0)) != (*(int * PTR32 *)(gen_frame + 0x4))) {
      this_00 = (uint *)((int)this + 0xac);
      do {
        piVar1 = *(int * PTR32 *)((int)pvVar7 + 0xb0);
        piVar2 = (int *)*this_00;
        iVar3 = *(*(int * PTR32 *)(gen_frame + 0x18));
        (*(int *)(gen_frame + 0x20)) = iVar3;
        if (piVar2 == piVar1) {
LAB_006a9f74: ;
          piVar1 = *(int * PTR32 *)((int)this + 0xb0);
          if ((&(*(int *)(gen_frame + 0x20)) < piVar1) && (piVar2 = (int *)*this_00, piVar2 <= &(*(int *)(gen_frame + 0x20)))) {
            if (piVar1 == *(int * PTR32 *)((int)this + 0xb4)) {
              iVar3 = (int)piVar1 - (int)((int)(uintptr_t)piVar2) >> 2;
              if (iVar3 == -1) {
LAB_006aa0a6: ;
                    
                F_00c4579a("vector<T> too long");
              }
              uVar4 = iVar3 + 1;
              uVar6 = (int)*(int * PTR32 *)((int)this + 0xb4) - (int)((int)(uintptr_t)piVar2) >> 2;
              if (uVar6 < uVar4) {
                if (-(uVar6 >> 1) - 1 < uVar6) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = uVar6 + (uVar6 >> 1);
                }
                if (uVar6 < uVar4) {
                  uVar6 = uVar4;
                }
                F_005286b0(this_00 GEN_EDX_ARG,uVar6);
              }
            }
            if (*(undefined4 * PTR32 *)((int)this + 0xb0) != (undefined4 *)0x0) {
              **(undefined4 * PTR32 *)((int)this + 0xb0) =
                   *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(int *)(gen_frame + 0x20)) - (int)((int)(uintptr_t)piVar2) >> 2) * 4)));
            }
            *(int *)((int)this + 0xb0) = *(int *)((int)this + 0xb0) + 4;
          }
          else {
            if (piVar1 == *(int * PTR32 *)((int)this + 0xb4)) {
              iVar5 = (int)((int)piVar1 - *this_00) >> 2;
              if (iVar5 == -1) goto LAB_006aa0a6;
              uVar4 = iVar5 + 1;
              uVar6 = (int)((int)*(int * PTR32 *)((int)this + 0xb4) - *this_00) >> 2;
              if (uVar6 < uVar4) {
                if (-(uVar6 >> 1) - 1 < uVar6) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = uVar6 + (uVar6 >> 1);
                }
                if (uVar6 < uVar4) {
                  uVar6 = uVar4;
                }
                F_005286b0(this_00 GEN_EDX_ARG,uVar6);
              }
            }
            if (*(int * PTR32 *)((int)this + 0xb0) != (int *)0x0) {
              **(int * PTR32 *)((int)this + 0xb0) = iVar3;
            }
            *(int *)((int)this + 0xb0) = *(int *)((int)this + 0xb0) + 4;
          }
        }
        else {
          do {
            if (*piVar2 == iVar3) break;
            piVar2 = piVar2 + 1;
          } while (piVar2 != piVar1);
          if (piVar2 == piVar1) goto LAB_006a9f74;
          if (iVar3 != 0) {
            F_0050c620(iVar3,0,0);
          }
        }
        (*(int * PTR32 *)(gen_frame + 0x18)) = (*(int * PTR32 *)(gen_frame + 0x18)) + 1;
        pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x1c));
      } while ((*(int * PTR32 *)(gen_frame + 0x18)) != (*(int * PTR32 *)(gen_frame + 0x10)));
    }
    if ((*(int * PTR32 *)(gen_frame + 0x0)) != (int *)0x0) {
      F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),((*(int *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x0))) >> 2) * 4,0xcb);
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (*(undefined4 * PTR32 *)(gen_frame + 0x24)) + 1;
    uVar6 = (*(uint *)(gen_frame + 0x14)) + 1;
    (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x0;
    (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
    (*(int *)(gen_frame + 0x8)) = 0;
    (*(uint *)(gen_frame + 0x14)) = uVar6;
    this = pvVar7;
    if (0xb < uVar6) {
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
      return uVar6;
    }
  } while( true );
}

/* ref: FUN_006aa0c0 */
GEN_FRAME uint F_006aa0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6aa0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  undefined1 * in_esi = (undefined1 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  char * PTR32 * PTR32 * pppcVar2;
  uint uVar3;
  char * PTR32 * PTR32 * PTR32 * ppppcVar4;
  char * PTR32 * PTR32 * PTR32 * ppppcVar5;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  ((undefined1 *)(gen_frame + 0xc))[0] = 0x2f;
  uVar3 = F_006b23a0(in_ecx GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),0xffffffff,1);
  pppcVar2 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c))[0];
  if (uVar3 == 0xffffffff) {
    uVar3 = 0;
  }
  (*(uint *)(gen_frame + 0x40)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined1 *)((char *)&((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c))[0] + 0)) = 0;
  ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c))[0] = (char * PTR32 * PTR32 *)((uint)pppcVar2 & 0xffffff00);
  F_004e54d0(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG,in_ecx,0,uVar3 + 1);
  uVar3 = ((uint *)(gen_frame + 0x10))[0];
  ppppcVar5 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c))[0];
  if ((*(uint *)(gen_frame + 0x40)) < 0x10) {
    ppppcVar5 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c));
  }
  (*(uint *)(gen_frame + 0x24)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x10))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x10))[0] = uVar3 & 0xffffff00;
  ppppcVar4 = ppppcVar5;
  do {
    cVar1 = *(char *)ppppcVar4;
    ppppcVar4 = (char * PTR32 * PTR32 * PTR32 *)((int)ppppcVar4 + 1);
  } while (cVar1 != '\0');
  F_004e5c20(((uint *)(gen_frame + 0x10)) GEN_EDX_ARG,ppppcVar5,(int)ppppcVar4 - (int)((int)ppppcVar5 + 1));
  if (0xf < (*(uint *)(gen_frame + 0x40))) {
    F_00429760(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c))[0],(*(uint *)(gen_frame + 0x40)) + 1,0x32);
  }
  *(undefined4 *)(in_esi + 0x14) = 0xf;
  *(undefined4 *)(in_esi + 0x10) = 0;
  *in_esi = 0;
  F_004e54d0(in_esi GEN_EDX_ARG,((uint *)(gen_frame + 0x10)),0,0xffffffff);
  if (0xf < (*(uint *)(gen_frame + 0x24))) {
    F_00429760(((uint *)(gen_frame + 0x10))[0],(*(uint *)(gen_frame + 0x24)) + 1,0x32);
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c) GEN_EDX_ARG);
  return (uint)in_esi;
}

/* ref: FUN_006aa1a0 */
GEN_FRAME uint GEN_THISCALL F_006aa1a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6aa1a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  uint * this_00;
  int * piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined * pvVar10;
  
  this_00 = (*(uint * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(int *)(gen_frame + 0x0)) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70)));
  piVar5 = (int *)F_006b74d0((*(uint * PTR32 *)&gen_args[1]) GEN_EDX_FWD,&(*(int *)(gen_frame + 0x0)));
  (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) != 0) {
    do {
      iVar6 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) + (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x8))) * 4)));
      puVar2 = (undefined4 *)this_00[1];
      (*(uint * PTR32 *)&gen_args[1]) = (uint *)iVar6;
      if ((&(*(uint * PTR32 *)&gen_args[1]) < puVar2) && (puVar3 = (undefined4 *)*this_00, puVar3 <= &(*(uint * PTR32 *)&gen_args[1]))) {
        if (puVar2 == (undefined4 *)this_00[2]) {
          iVar6 = (int)puVar2 - (int)((int)(uintptr_t)puVar3) >> 2;
          if (iVar6 == -1) goto LAB_006aa2f8;
          uVar7 = iVar6 + 1;
          uVar9 = (int)this_00[2] - (int)((int)(uintptr_t)puVar3) >> 2;
          if (uVar9 < uVar7) {
            if (-(uVar9 >> 1) - 1 < uVar9) {
              uVar9 = 0;
            }
            else {
              uVar9 = uVar9 + (uVar9 >> 1);
            }
            if (uVar9 < uVar7) {
              uVar9 = uVar7;
            }
            F_006b6a50(this_00 GEN_EDX_ARG,uVar9);
            (*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 *)(gen_frame + 0x4));
          }
        }
        if ((undefined4 *)this_00[1] != (undefined4 *)0x0) {
          *(undefined4 *)this_00[1] =
               *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(uint * PTR32 *)&gen_args[1]) - (int)((int)(uintptr_t)puVar3) >> 2) * 4)));
        }
      }
      else {
        if (puVar2 == (undefined4 *)this_00[2]) {
          iVar8 = (int)((int)puVar2 - *this_00) >> 2;
          if (iVar8 == -1) goto LAB_006aa2f8;
          uVar7 = iVar8 + 1;
          uVar9 = (int)((int)this_00[2] - *this_00) >> 2;
          if (uVar9 < uVar7) {
            if (-(uVar9 >> 1) - 1 < uVar9) {
              uVar9 = 0;
            }
            else {
              uVar9 = uVar9 + (uVar9 >> 1);
            }
            if (uVar9 < uVar7) {
              uVar9 = uVar7;
            }
            F_006b6a50(this_00 GEN_EDX_ARG,uVar9);
            (*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 *)(gen_frame + 0x4));
          }
        }
        if ((int *)this_00[1] != (int *)0x0) {
          *(int *)this_00[1] = iVar6;
        }
      }
      this_00[1] = this_00[1] + 4;
      piVar5 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x8)) + 1);
      (*(int * PTR32 *)(gen_frame + 0x8)) = piVar5;
    } while (piVar5 < *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))));
  }
  iVar6 = REFG(int, 0x13759f4);
  (*(int *)(gen_frame + 0x0)) = REFG(int, 0x13759f4);
  if (REFG(int, 0x13759f4) != 0) {
    puVar2 = (undefined4 *)this_00[1];
    uVar4 = *(undefined4 *)(REFG(int, 0x13759f4) + 0xe0a0);
    (*(uint * PTR32 *)&gen_args[1]) = (uint *)uVar4;
    if ((&(*(uint * PTR32 *)&gen_args[1]) < puVar2) && (puVar3 = (undefined4 *)*this_00, puVar3 <= &(*(uint * PTR32 *)&gen_args[1]))) {
      if (puVar2 == (undefined4 *)this_00[2]) {
        F_006b7120(this_00 GEN_EDX_ARG,1);
      }
      if ((undefined4 *)this_00[1] != (undefined4 *)0x0) {
        *(undefined4 *)this_00[1] =
             *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(uint * PTR32 *)&gen_args[1]) - (int)((int)(uintptr_t)puVar3) >> 2) * 4)));
      }
    }
    else {
      if (puVar2 == (undefined4 *)this_00[2]) {
        F_006b7120(this_00 GEN_EDX_ARG,1);
      }
      if ((undefined4 *)this_00[1] != (undefined4 *)0x0) {
        *(undefined4 *)this_00[1] = uVar4;
      }
    }
    this_00[1] = this_00[1] + 4;
    piVar5 = (int *)this_00[1];
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
    (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)(iVar6 + 0xe0a4);
    do {
      iVar6 = *(*(int * PTR32 *)(gen_frame + 0x8));
      if (iVar6 != 0) {
        (*(uint * PTR32 *)&gen_args[1]) = (uint *)iVar6;
        if (&(*(uint * PTR32 *)&gen_args[1]) < piVar5) {
          puVar2 = (undefined4 *)*this_00;
          if (&(*(uint * PTR32 *)&gen_args[1]) < puVar2) goto LAB_006aa3a2;
          if (piVar5 == (int *)this_00[2]) {
            iVar6 = (int)piVar5 - (int)((int)(uintptr_t)puVar2) >> 2;
            if (iVar6 == -1) goto LAB_006aa2f8;
            uVar7 = iVar6 + 1;
            uVar9 = (int)this_00[2] - (int)((int)(uintptr_t)puVar2) >> 2;
            if (uVar9 < uVar7) {
              if (-(uVar9 >> 1) - 1 < uVar9) {
                uVar9 = 0;
              }
              else {
                uVar9 = uVar9 + (uVar9 >> 1);
              }
              if (uVar9 < uVar7) {
                uVar9 = uVar7;
              }
              F_006b6a50(this_00 GEN_EDX_ARG,uVar9);
            }
          }
          if ((undefined4 *)this_00[1] != (undefined4 *)0x0) {
            *(undefined4 *)this_00[1] =
                 *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(uint * PTR32 *)&gen_args[1]) - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
          }
        }
        else {
LAB_006aa3a2: ;
          if (piVar5 == (int *)this_00[2]) {
            iVar8 = (int)((int)piVar5 - *this_00) >> 2;
            if (iVar8 == -1) goto LAB_006aa2f8;
            uVar7 = iVar8 + 1;
            uVar9 = (int)((int)this_00[2] - *this_00) >> 2;
            if (uVar9 < uVar7) {
              if (-(uVar9 >> 1) - 1 < uVar9) {
                uVar9 = 0;
              }
              else {
                uVar9 = uVar9 + (uVar9 >> 1);
              }
              if (uVar9 < uVar7) {
                uVar9 = uVar7;
              }
              F_006b6a50(this_00 GEN_EDX_ARG,uVar9);
            }
          }
          if ((int *)this_00[1] != (int *)0x0) {
            *(int *)this_00[1] = iVar6;
          }
        }
        this_00[1] = this_00[1] + 4;
        piVar5 = (int *)this_00[1];
      }
      (*(int * PTR32 *)(gen_frame + 0x8)) = (*(int * PTR32 *)(gen_frame + 0x8)) + 1;
      pvVar10 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 1);
      (*(undefined * PTR32 *)(gen_frame + 0x4)) = pvVar10;
    } while (pvVar10 < (undefined *)0x2);
    bVar1 = *(byte *)((*(int *)(gen_frame + 0x0)) + 0xe0ad);
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
    if ((undefined *)(uint)bVar1 != (undefined *)0x0) {
      (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
      do {
        iVar6 = *((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x8)) + *(int *)((*(int *)(gen_frame + 0x0)) + 0xe0b0) + 4)));
        if (iVar6 != 0) {
          (*(uint * PTR32 *)&gen_args[1]) = (uint *)iVar6;
          if (&(*(uint * PTR32 *)&gen_args[1]) < piVar5) {
            puVar2 = (undefined4 *)*this_00;
            if (&(*(uint * PTR32 *)&gen_args[1]) < puVar2) goto LAB_006aa4a5;
            if (piVar5 == (int *)this_00[2]) {
              iVar6 = (int)piVar5 - (int)((int)(uintptr_t)puVar2) >> 2;
              if (iVar6 == -1) goto LAB_006aa2f8;
              uVar7 = iVar6 + 1;
              uVar9 = (int)this_00[2] - (int)((int)(uintptr_t)puVar2) >> 2;
              if (uVar9 < uVar7) {
                if (-(uVar9 >> 1) - 1 < uVar9) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = uVar9 + (uVar9 >> 1);
                }
                if (uVar9 < uVar7) {
                  uVar9 = uVar7;
                }
                F_006b6a50(this_00 GEN_EDX_ARG,uVar9);
              }
            }
            if ((undefined4 *)this_00[1] != (undefined4 *)0x0) {
              *(undefined4 *)this_00[1] =
                   *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(uint * PTR32 *)&gen_args[1]) - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
            }
          }
          else {
LAB_006aa4a5: ;
            if (piVar5 == (int *)this_00[2]) {
              iVar8 = (int)((int)piVar5 - *this_00) >> 2;
              if (iVar8 == -1) {
LAB_006aa2f8: ;
                    
                F_00c4579a("vector<T> too long");
              }
              uVar7 = iVar8 + 1;
              uVar9 = (int)((int)this_00[2] - *this_00) >> 2;
              if (uVar9 < uVar7) {
                if (-(uVar9 >> 1) - 1 < uVar9) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = uVar9 + (uVar9 >> 1);
                }
                if (uVar9 < uVar7) {
                  uVar9 = uVar7;
                }
                F_006b6a50(this_00 GEN_EDX_ARG,uVar9);
              }
            }
            if ((int *)this_00[1] != (int *)0x0) {
              *(int *)this_00[1] = iVar6;
            }
          }
          this_00[1] = this_00[1] + 4;
          piVar5 = (int *)this_00[1];
        }
        (*(int * PTR32 *)(gen_frame + 0x8)) = (*(int * PTR32 *)(gen_frame + 0x8)) + 3;
        pvVar10 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 1);
        (*(undefined * PTR32 *)(gen_frame + 0x4)) = pvVar10;
      } while (pvVar10 < (undefined *)(uint)bVar1);
    }
  }
  return (uint)piVar5;
}

/* ref: FUN_006aa520 */
GEN_FRAME uint GEN_THISCALL F_006aa520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6aa520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  char cVar1;
  undefined4 * PTR32 * PTR32 * pppuVar2;
  char * PTR32 * PTR32 * pppcVar3;
  uint uVar4;
  char * PTR32 * PTR32 * PTR32 * ppppcVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar6;
  char * PTR32 * PTR32 * PTR32 * ppppcVar7;
  undefined * this_00;
  ulonglong uVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = this;
  F_00690070(this GEN_EDX_FWD);
  uVar4 = ((uint *)(gen_frame + 0x70))[0];
  (*(uint *)(gen_frame + 0x84)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x80)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x70))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x70))[0] = uVar4 & 0xffffff00;
  F_004e5c20(((uint *)(gen_frame + 0x70)) GEN_EDX_ARG,"grass/",6);
  uVar4 = F_006b6030(((uint *)(gen_frame + 0x70)) GEN_EDX_ARG,0,param_1,0,0xffffffff);
  pppcVar3 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c))[0];
  (*(uint *)(gen_frame + 0xa0)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x9c)) = 0;
  (*(undefined1 *)((char *)&((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c))[0] + 0)) = 0;
  ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c))[0] = (char * PTR32 * PTR32 *)((uint)pppcVar3 & 0xffffff00);
  F_006b6c60(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c)) GEN_EDX_ARG,uVar4);
  uVar4 = ((uint *)(gen_frame + 0x54))[0];
  ppppcVar7 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c))[0];
  if ((*(uint *)(gen_frame + 0xa0)) < 0x10) {
    ppppcVar7 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c));
  }
  (*(uint *)(gen_frame + 0x68)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x54))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x54))[0] = uVar4 & 0xffffff00;
  ppppcVar5 = ppppcVar7;
  do {
    cVar1 = *(char *)ppppcVar5;
    ppppcVar5 = (char * PTR32 * PTR32 * PTR32 *)((int)ppppcVar5 + 1);
  } while (cVar1 != '\0');
  F_004e5c20(((uint *)(gen_frame + 0x54)) GEN_EDX_ARG,ppppcVar7,(int)ppppcVar5 - (int)((int)ppppcVar7 + 1));
  this_00 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x34);
  F_004e54d0(this_00 GEN_EDX_ARG,((uint *)(gen_frame + 0x54)),0,0xffffffff);
  if (0xf < (*(uint *)(gen_frame + 0x68))) {
    F_00429760(((uint *)(gen_frame + 0x54))[0],(*(uint *)(gen_frame + 0x68)) + 1,0x32);
  }
  uVar4 = ((uint *)(gen_frame + 0x54))[0];
  (*(uint *)(gen_frame + 0x68)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x54))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x54))[0] = uVar4 & 0xffffff00;
  if (0xf < (*(uint *)(gen_frame + 0xa0))) {
    F_00429760(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c))[0],(*(uint *)(gen_frame + 0xa0)) + 1,0x32);
  }
  pppcVar3 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c))[0];
  (*(uint *)(gen_frame + 0xa0)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x9c)) = 0;
  (*(undefined1 *)((char *)&((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c))[0] + 0)) = 0;
  ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c))[0] = (char * PTR32 * PTR32 *)((uint)pppcVar3 & 0xffffff00);
  if (0xf < (*(uint *)(gen_frame + 0x84))) {
    F_00429760(((uint *)(gen_frame + 0x70))[0],(*(uint *)(gen_frame + 0x84)) + 1,0x32);
  }
  uVar4 = ((uint *)(gen_frame + 0x70))[0];
  (*(uint *)(gen_frame + 0x84)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x80)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x70))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x70))[0] = uVar4 & 0xffffff00;
  F_004e5c20(((uint *)(gen_frame + 0x70)) GEN_EDX_ARG,"grass_zone_data.gzd",0x13);
  uVar4 = F_006b6030(((uint *)(gen_frame + 0x70)) GEN_EDX_ARG,0,this_00,0,0xffffffff);
  pppcVar3 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c))[0];
  (*(uint *)(gen_frame + 0xa0)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x9c)) = 0;
  (*(undefined1 *)((char *)&((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c))[0] + 0)) = 0;
  ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c))[0] = (char * PTR32 * PTR32 *)((uint)pppcVar3 & 0xffffff00);
  F_006b6c60(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c)) GEN_EDX_ARG,uVar4);
  pppuVar2 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x38))[0];
  ppppcVar7 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c))[0];
  if ((*(uint *)(gen_frame + 0xa0)) < 0x10) {
    ppppcVar7 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c));
  }
  (*(uint *)(gen_frame + 0x4c)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x38))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x38))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar2 & 0xffffff00);
  ppppcVar5 = ppppcVar7;
  do {
    cVar1 = *(char *)ppppcVar5;
    ppppcVar5 = (char * PTR32 * PTR32 * PTR32 *)((int)ppppcVar5 + 1);
  } while (cVar1 != '\0');
  F_004e5c20(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG,ppppcVar7,(int)ppppcVar5 - (int)((int)ppppcVar7 + 1));
  if (0xf < (*(uint *)(gen_frame + 0xa0))) {
    F_00429760(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c))[0],(*(uint *)(gen_frame + 0xa0)) + 1,0x32);
  }
  pppcVar3 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c))[0];
  (*(uint *)(gen_frame + 0xa0)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x9c)) = 0;
  (*(undefined1 *)((char *)&((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c))[0] + 0)) = 0;
  ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8c))[0] = (char * PTR32 * PTR32 *)((uint)pppcVar3 & 0xffffff00);
  if (0xf < (*(uint *)(gen_frame + 0x84))) {
    F_00429760(((uint *)(gen_frame + 0x70))[0],(*(uint *)(gen_frame + 0x84)) + 1,0x32);
  }
  (*(undefined4 *)(gen_frame + 0x18)) = param_2;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined1 *)(gen_frame + 0x1c)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x20)) = 5000;
  (*(undefined4 *)(gen_frame + 0x24)) = 0x10100;
  (*(undefined1 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined2 *)(gen_frame + 0x29)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0x677a64;
  ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x38))[0];
  if ((*(uint *)(gen_frame + 0x4c)) < 0x10) {
    ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x38));
  }
  uVar12 = 0;
  uVar11 = 0;
  puVar10 = &(*(undefined4 *)(gen_frame + 0x8));
  puVar9 = &(*(undefined4 *)(gen_frame + 0x30));
  uVar4 = F_004ff310(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,2,0);
  uVar4 = F_00513d20(uVar4,puVar9,ppppuVar6,puVar10,uVar11,uVar12);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0xe090) = uVar4;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0xe0a4) = 1;
  uVar4 = (*(uint *)(gen_frame + 0x4c));
  if (0xf < (*(uint *)(gen_frame + 0x4c))) {
    uVar8 = F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x38))[0],(*(uint *)(gen_frame + 0x4c)) + 1,0x32);
    uVar4 = (uint)uVar8;
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_006aa790 */
GEN_NOFRAME uint GEN_THISCALL F_006aa790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6aa790u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  uint param_6 = (uint)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float * pfVar7;
  int iVar8;
  
  uVar4 = *param_2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (undefined4 *)param_1;
  if (uVar4 != param_2[1]) {
    (*(float *)(gen_frame + 0x18)) = 0.0;
    F_00c46e20(uVar4,param_2[1],0);
    param_2[1] = (int)gen_fl2bits((*(float *)(gen_frame + 0x18))) + uVar4;
  }
  iVar8 = *(int *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x1c)) + 0xe090);
  uVar4 = 0;
  if (iVar8 != 0) {
    pfVar7 = (float *)0x0;
    if (param_3 == 0) {
      pfVar7 = *(float * PTR32 *)(iVar8 + 0xf4);
      uVar4 = (uint)*(ushort *)(iVar8 + 0xa8);
    }
    else if (param_3 == 1) {
      pfVar7 = *(float * PTR32 *)(iVar8 + 0xf8);
      uVar4 = (uint)*(ushort *)(iVar8 + 0xaa);
    }
    else if (param_3 == 2) {
      pfVar7 = *(float * PTR32 *)(iVar8 + 0xfc);
      uVar4 = (uint)*(ushort *)(iVar8 + 0xac);
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = (undefined4 *)0x0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
    (*(int *)(gen_frame + 0x8)) = 0;
    if (uVar4 != 0) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (undefined4 *)uVar4;
      do {
        fVar1 = ((float)GEN_TOF(((float10)(float)((float10)pfVar7[2] - (float10)param_4[2]) *
                        (float10)(float)((float10)pfVar7[2] - (float10)param_4[2]) +
                       ((float10)(float)((float10)*pfVar7 - (float10)*param_4) *
                        (float10)(float)((float10)*pfVar7 - (float10)*param_4) +
                       (float10)(float)((float10)pfVar7[1] - (float10)param_4[1]) *
                       (float10)(float)((float10)pfVar7[1] - (float10)param_4[1])))));
        (*(float *)(gen_frame + 0x18)) = fVar1;
        if ((float10)fVar1 <= (float10)param_5) {
          (*(float * PTR32 *)(gen_frame + 0x10)) = pfVar7;
          (*(float *)(gen_frame + 0x14)) = fVar1;
          F_006b70a0(&(*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(float * PTR32 *)(gen_frame + 0x10)));
        }
        pfVar7 = pfVar7 + 5;
        uVar4 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x1c)) - 1;
        (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (undefined4 *)uVar4;
      } while (uVar4 != 0);
    }
    F_006b6cf0((*(undefined4 * PTR32 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)),(int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x0))) >> 3,((code *)REFP(0x68bb00)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x0));
    (*(float *)(gen_frame + 0x18)) = 0.0;
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != (*(undefined4 * PTR32 *)(gen_frame + 0x4))) {
      do {
        if (param_6 <= (uint)gen_fl2bits((*(float *)(gen_frame + 0x18)))) break;
        puVar2 = (undefined4 *)param_2[1];
        if (((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) < puVar2) && (puVar3 = (undefined4 *)*param_2, puVar3 <= (*(undefined4 * PTR32 *)(gen_frame + 0x1c)))) {
          iVar8 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x1c)) - (int)puVar3;
          if (puVar2 == (undefined4 *)param_2[2]) {
            iVar5 = (int)puVar2 - (int)((int)(uintptr_t)puVar3) >> 2;
            if (iVar5 == -1) {
LAB_006aaa01: ;
                    
              F_00c4579a("vector<T> too long");
            }
            uVar6 = iVar5 + 1;
            uVar4 = (int)param_2[2] - (int)((int)(uintptr_t)puVar3) >> 2;
            if (uVar4 < uVar6) {
              if (-(uVar4 >> 1) - 1 < uVar4) {
                uVar4 = 0;
              }
              else {
                uVar4 = uVar4 + (uVar4 >> 1);
              }
              if (uVar4 < uVar6) {
                uVar4 = uVar6;
              }
              F_006b6bb0(param_2 GEN_EDX_ARG,uVar4);
            }
          }
          if ((undefined4 *)param_2[1] != (undefined4 *)0x0) {
            *(undefined4 *)param_2[1] = *((undefined4 *)GEN_TOP((*param_2 + (iVar8 >> 2) * 4)));
          }
        }
        else {
          if (puVar2 == (undefined4 *)param_2[2]) {
            iVar8 = (int)((int)puVar2 - *param_2) >> 2;
            if (iVar8 == -1) goto LAB_006aaa01;
            uVar6 = iVar8 + 1;
            uVar4 = (int)((int)param_2[2] - *param_2) >> 2;
            if (uVar4 < uVar6) {
              if (-(uVar4 >> 1) - 1 < uVar4) {
                uVar4 = 0;
              }
              else {
                uVar4 = uVar4 + (uVar4 >> 1);
              }
              if (uVar4 < uVar6) {
                uVar4 = uVar6;
              }
              F_006b6bb0(param_2 GEN_EDX_ARG,uVar4);
            }
          }
          if ((undefined4 *)param_2[1] != (undefined4 *)0x0) {
            *(undefined4 *)param_2[1] = *(*(undefined4 * PTR32 *)(gen_frame + 0x1c));
          }
        }
        param_2[1] = param_2[1] + 4;
        (*(float *)(gen_frame + 0x18)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x18))) + 1);
        (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) + 2;
      } while ((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != (*(undefined4 * PTR32 *)(gen_frame + 0x4)));
    }
    uVar4 = (int)(param_2[1] - *param_2) >> 2;
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != (undefined4 *)0x0) {
      F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0x0)),((*(int *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x0))) >> 3) * 8,0xd8);
    }
  }
  return uVar4;
}

/* ref: FUN_006aaa10 */
GEN_FRAME uint GEN_THISCALL F_006aaa10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6aaa10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  byte * pbVar3;
  float fVar4;
  int * piVar5;
  int * piVar6;
  int * piVar7;
  float10 fVar8;
  ulonglong uVar9;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(byte * PTR32 *)(gen_frame + 0x20)) = (byte *)param_1;
  (*(int *)(gen_frame + 0x1c)) = (int)this + 0x1090;
  ((float *)(gen_frame + 0x2c))[0] = 2.24208e-44;
  ((float *)(gen_frame + 0x2c))[1] = 8.96831e-44;
  ((float *)(gen_frame + 0x2c))[2] = 1.43493e-42;
  fVar2 = ((float *)(gen_frame + 0x2c))[(int)(param_2)];
  (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)((int)this + 0x50);
  (*(int *)(gen_frame + 0x18)) = (int)this + 0x390;
  (*(int * PTR32 *)(gen_frame + 0xc)) = (&(*(int * PTR32 *)(gen_frame + 0x14)))[param_2];
  (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0xc));
  if (fVar2 != 0.0) {
    (*(float *)(gen_frame + 0x28)) = fVar2;
    do {
      F_00635b30((*(int * PTR32 *)(gen_frame + 0xc)) GEN_EDX_FWD,1);
      (*(int * PTR32 *)(gen_frame + 0xc)) = (*(int * PTR32 *)(gen_frame + 0xc)) + 0xd;
      fVar4 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x28))) - 1);
      (*(float *)(gen_frame + 0x28)) = fVar4;
    } while (fVar4 != 0.0);
  }
  (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)0x0;
  (*(int *)(gen_frame + 0x18)) = 0;
  fVar8 = F_006901d0(REFG(undefined4, 0x13759f4) GEN_EDX_ARG,param_2);
  (*(float *)(gen_frame + 0x28)) = (float)fVar8;
  pbVar3 = (byte *)F_006aa790(this GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x10)),param_2,(*(byte * PTR32 *)(gen_frame + 0x20)),(float)fVar8,
                                (undefined4)gen_fl2bits(fVar2));
  (*(byte * PTR32 *)(gen_frame + 0x20)) = pbVar3;
  fVar4 = fVar2;
  piVar5 = (*(int * PTR32 *)(gen_frame + 0x24));
  if (pbVar3 != (byte *)0x0) {
    if (fVar2 == 0.0) goto LAB_006aab59;
    piVar7 = (*(int * PTR32 *)(gen_frame + 0x24)) + 10;
    (*(float *)(gen_frame + 0x28)) = fVar2;
    do {
      if ((*piVar7 != 0) && (piVar5 = (*(int * PTR32 *)(gen_frame + 0x14)), piVar6 = (*(int * PTR32 *)(gen_frame + 0x10)), (*(int * PTR32 *)(gen_frame + 0x10)) != (*(int * PTR32 *)(gen_frame + 0x14)))) {
        do {
          pbVar3 = (byte *)*piVar7;
          if (*(int *)(pbVar3 + 0x10) == *(int *)(*piVar6 + 0x10)) {
            F_00635b30(piVar7 - 10 GEN_EDX_ARG,0);
            pbVar3 = (byte *)F_00c46e20(piVar6,piVar6 + 1,((int)piVar5 - (int)(piVar6 + 1) >> 2) * 4
                                       );
            piVar5 = piVar5 - 1;
          }
          else {
            piVar6 = piVar6 + 1;
          }
        } while (piVar6 != piVar5);
        (*(int * PTR32 *)(gen_frame + 0x14)) = piVar5;
      }
      piVar7 = piVar7 + 0xd;
      fVar1 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x28))) - 1);
      (*(float *)(gen_frame + 0x28)) = fVar1;
      piVar5 = (*(int * PTR32 *)(gen_frame + 0x24));
    } while (fVar1 != 0.0);
  }
  for (; fVar4 != 0.0; fVar4 = gen_bits2f((int)gen_fl2bits(fVar4) - 1)) {
    if ((~*(byte *)(piVar5 + 2) & 1) != 0) {
      pbVar3 = (byte *)F_0064ad80(piVar5 GEN_EDX_ARG);
    }
    piVar5 = piVar5 + 0xd;
  }
LAB_006aab59: ;
  piVar5 = (*(int * PTR32 *)(gen_frame + 0x10));
  if (((*(byte * PTR32 *)(gen_frame + 0x20)) != (byte *)0x0) && (piVar7 = (*(int * PTR32 *)(gen_frame + 0x10)), (*(int * PTR32 *)(gen_frame + 0x10)) != (*(int * PTR32 *)(gen_frame + 0x14)))) {
    do {
      fVar4 = 0.0;
      if (fVar2 != 0.0) {
        pbVar3 = (byte *)((*(int * PTR32 *)(gen_frame + 0x24)) + 2);
        do {
          if ((~*pbVar3 & 1) != 0) {
            pbVar3 = (byte *)F_00651780((*(int * PTR32 *)(gen_frame + 0x24)) + (int)gen_fl2bits(fVar4) * 0xd GEN_EDX_ARG,(int)this + 0x34,
                                          *piVar7);
            break;
          }
          fVar4 = gen_bits2f((int)gen_fl2bits(fVar4) + 1);
          pbVar3 = pbVar3 + 0x34;
        } while ((uint)gen_fl2bits(fVar4) < (uint)gen_fl2bits(fVar2));
      }
      piVar7 = piVar7 + 1;
    } while (piVar7 != (*(int * PTR32 *)(gen_frame + 0x14)));
  }
  if (piVar5 != (int *)0x0) {
    uVar9 = F_00429760(piVar5,((*(int *)(gen_frame + 0x18)) - (int)((int)(uintptr_t)piVar5) >> 2) * 4,0xd8);
    pbVar3 = (byte *)uVar9;
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return (uint)pbVar3;
}

/* ref: FUN_006aabf0 */
GEN_FRAME uint GEN_THISCALL F_006aabf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6aabf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  F_006aa520((undefined *)(param_3 * 0xe0c0 + 0x10 + (int)this) GEN_EDX_FWD,param_1,param_2);
  uVar1 = F_004e54d0((undefined *)((int)this + 0x1c194) GEN_EDX_ARG,param_1,0,0xffffffff);
  *(undefined4 *)((int)this + 0x1c1b0) = param_2;
  return uVar1;
}

/* ref: FUN_006aac30 */
GEN_NOFRAME uint GEN_THISCALL F_006aac30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6aac30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_006aa520((undefined *)((int)this + 0xe0d0) GEN_EDX_FWD,(int)this + 0x1c194,
                       *(undefined4 *)((int)this + 0x1c1b0));
  *(undefined1 *)((int)this + 0x1c190) = 1;
  return uVar1;
}

/* ref: FUN_006aac60 */
GEN_NOFRAME byte GEN_THISCALL F_006aac60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6aac60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  byte bVar3;
  int * piVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 != 0) {
    piVar4 = (int *)(iVar2 + 0x88);
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar4), 0);
    if (iVar1 == 2) {
      piVar4 = (int *)(iVar2 + 0x8c);
      iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar4), 0);
      if ((iVar2 < 8) && (iVar2 = *(int *)((int)this + 8), iVar2 != 0)) {
        piVar4 = (int *)(iVar2 + 0x88);
        iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar4), 0);
        if (iVar1 == 2) {
          piVar4 = (int *)(iVar2 + 0x8c);
          iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar4), 0);
          if ((iVar2 < 8) && (iVar2 = *(int *)((int)this + 0xc), iVar2 != 0)) {
            piVar4 = (int *)(iVar2 + 0x88);
            iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar4), 0);
            if (iVar1 == 2) {
              piVar4 = (int *)(iVar2 + 0x8c);
              iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar4), 0);
              if (iVar2 < 8) {
                bVar3 = F_00691c50(*(undefined4 *)((int)this + 0x10));
                if (bVar3 != 0) {
                  bVar3 = F_00691c50(*(undefined4 *)((int)this + 0x14));
                  if (bVar3 != 0) {
                    bVar3 = F_00691c50(*(undefined4 *)((int)this + 0x18));
                    if (bVar3 != 0) {
                      bVar3 = F_00691c50(*(undefined4 *)((int)this + 0x1c));
                      if (bVar3 != 0) {
                        bVar3 = F_00691c50(*(undefined4 *)((int)this + 0x20));
                        if (bVar3 != 0) {
                          bVar3 = F_00691c50(*(undefined4 *)((int)this + 0x24));
                          if (bVar3 != 0) {
                            bVar3 = F_00691c50(*(undefined4 *)((int)this + 0x28));
                            if (bVar3 != 0) {
                              bVar3 = F_00691c50(*(undefined4 *)((int)this + 0x2c));
                              if (bVar3 != 0) {
                                bVar3 = F_00691c50(*(undefined4 *)((int)this + 0x30));
                                if (bVar3 != 0) {
                                  bVar3 = F_00691c50(*(undefined4 *)((int)this + 0x34));
                                  if (bVar3 != 0) {
                                    bVar3 = F_00691c50(*(undefined4 *)((int)this + 0x38));
                                    if (bVar3 != 0) {
                                      bVar3 = F_00691c50(*(undefined4 *)((int)this + 0x3c));
                                      if (bVar3 != 0) {
                                        bVar3 = F_00691c50(*(undefined4 *)((int)this + 0x40));
                                        if (bVar3 != 0) {
                                          bVar3 = F_00691c50(*(undefined4 *)((int)this + 0x44));
                                          if (bVar3 != 0) {
                                            bVar3 = F_00691c50(*(undefined4 *)((int)this + 0x48));
                                            if (bVar3 != 0) {
                                              bVar3 = F_00691c50(*(undefined4 *)((int)this + 0x4c)
                                                                  );
                                              if (bVar3 != 0) {
                                                bVar3 = F_00691c50(*(undefined4 *)
                                                                      ((int)this + 0x50));
                                                if (bVar3 != 0) {
                                                  bVar3 = F_00691c50(*(undefined4 *)
                                                                        ((int)this + 0x54));
                                                  if (bVar3 != 0) {
                                                    bVar3 = F_00691c50(*(undefined4 *)
                                                                          ((int)this + 0x58));
                                                    if (bVar3 != 0) {
                                                      if ((*(uint *)((int)this + 0xf0) >> 2 & 1) ==
                                                          0) {
                                                        F_006a9ea0(this GEN_EDX_ARG);
                                                        *(uint *)((int)this + 0xf0) =
                                                             *(uint *)((int)this + 0xf0) | 4;
                                                      }
                                                      bVar3 = F_00691c90(this GEN_EDX_ARG);
                                                      if (bVar3 != 0) {
                                                        bVar3 = F_00691c50(*(undefined4 *)
                                                                              ((int)this + 0x5c));
                                                        if (bVar3 != 0) {
                                                          bVar3 = F_00691c50(*(undefined4 *)
                                                                                ((int)this + 0x60));
                                                          if (bVar3 != 0) {
                                                            bVar3 = F_00691c50(*(undefined4 *)
                                                                                  ((int)this + 100))
                                                            ;
                                                            if (bVar3 != 0) {
                                                              uVar6 = 0;
                                                              puVar5 = (undefined4 *)
                                                                       ((int)this + 0x68);
                                                              do {
                                                                bVar3 = F_00691c50(*puVar5);
                                                                if (bVar3 == 0) {
                                                                  return 0;
                                                                }
                                                                uVar6 = uVar6 + 1;
                                                                puVar5 = puVar5 + 1;
                                                              } while (uVar6 < 4);
                                                              *(uint *)((int)this + 0xf0) =
                                                                   *(uint *)((int)this + 0xf0) | 1;
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
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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

/* ref: FUN_006aaee0 */
GEN_FRAME uint GEN_THISCALL F_006aaee0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6aaee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  char * pcVar4;
  undefined4 * puVar5;
  undefined * this_00;
  uint uVar6;
  ulonglong uVar7;
  
  uVar6 = ((uint *)(gen_frame + 0x28))[0];
  (*(uint *)(gen_frame + 0x148)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14c);
  (*(uint *)(gen_frame + 0x3c)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x28))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x28))[0] = uVar6 & 0xffffff00;
  pcVar4 = (char *)((int)this + 0xa1);
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_004e5c20(((uint *)(gen_frame + 0x28)) GEN_EDX_FWD,(char *)((int)this + 0xa1),(int)pcVar4 - ((int)this + 0xa2));
  puVar5 = (undefined4 *)F_006aa0c0(((uint *)(gen_frame + 0x28)),((uint *)(gen_frame + 0xc)));
  if (0xf < (uint)puVar5[5]) {
    puVar5 = (undefined4 *)*puVar5;
  }
  F_00c472af(((char *)(gen_frame + 0x44)),0x104,&REFG(undefined, 0x10b17b0),puVar5);
  if (0xf < (*(uint *)(gen_frame + 0x20))) {
    F_00429760(((uint *)(gen_frame + 0xc))[0],(*(uint *)(gen_frame + 0x20)) + 1,0x32);
  }
  uVar6 = ((uint *)(gen_frame + 0xc))[0];
  (*(uint *)(gen_frame + 0x20)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0xc))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0xc))[0] = uVar6 & 0xffffff00;
  if (0xf < (*(uint *)(gen_frame + 0x3c))) {
    F_00429760(((uint *)(gen_frame + 0x28))[0],(*(uint *)(gen_frame + 0x3c)) + 1,0x32);
  }
  if (REFG(undefined4, 0x13759f4) == 0) {
    this_00 = (undefined *)F_00406b90(0x1c1c0,0,0);
    if (this_00 == (undefined *)0x0) {
      REFG(undefined4, 0x13759f4) = 0;
    }
    else {
      REFG(undefined4, 0x13759f4) = F_006a9e30(this_00 GEN_EDX_ARG);
    }
  }
  uVar3 = ((uint *)(gen_frame + 0x28))[0];
  uVar6 = REFG(undefined4, 0x13759f4);
  pcVar4 = ((char *)(gen_frame + 0x44));
  (*(uint *)(gen_frame + 0x3c)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x28))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x28))[0] = uVar3 & 0xffffff00;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_004e5c20(((uint *)(gen_frame + 0x28)) GEN_EDX_ARG,((char *)(gen_frame + 0x44)),(int)pcVar4 - (int)(((char *)(gen_frame + 0x44)) + 1));
  uVar2 = *(undefined4 *)((int)this + 0x1a4);
  F_006aa520((undefined *)(uVar6 + 0x10) GEN_EDX_ARG,((uint *)(gen_frame + 0x28)),uVar2);
  F_004e54d0((undefined *)(uVar6 + 0x1c194) GEN_EDX_ARG,((uint *)(gen_frame + 0x28)),0,0xffffffff);
  *(undefined4 *)(uVar6 + 0x1c1b0) = uVar2;
  uVar6 = (*(uint *)(gen_frame + 0x3c));
  if (0xf < (*(uint *)(gen_frame + 0x3c))) {
    uVar7 = F_00429760(((uint *)(gen_frame + 0x28))[0],(*(uint *)(gen_frame + 0x3c)) + 1,0x32);
    uVar6 = (uint)uVar7;
  }
  F_00c47745((*(uint *)(gen_frame + 0x148)) ^ (uint)(uint)(gen_frame + 0x14c) GEN_EDX_ARG);
  return uVar6;
}

/* ref: FUN_006ab090 */
GEN_FRAME uint GEN_THISCALL F_006ab090(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x6ab090u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x190];
  ushort * puVar1;
  ushort uVar2;
  undefined * this;
  byte bVar3;
  uint uVar4;
  uint * PTR32 * ppuVar5;
  uint * puVar6;
  int * piVar7;
  uint uVar8;
  uint * puVar9;
  uint * PTR32 * ppuVar10;
  undefined4 * puVar11;
  int iVar12;
  uint * PTR32 * ppuVar13;
  int iVar14;
  uint * PTR32 * ppuVar15;
  uint * PTR32 * ppuVar16;
  float10 fVar17;
  ulonglong uVar18;
  undefined1 * puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18c);
  (*(uint *)(gen_frame + 0x188)) = uVar4;
  iVar14 = *(int *)((int)param_1 + 0xe0a4);
  if (iVar14 == 1) {
    ppuVar5 = ((uint * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0xe090) + 0x88)));
    LOCK();
    puVar9 = *ppuVar5;
    *ppuVar5 = *ppuVar5;
    UNLOCK();
    if (puVar9 == (uint *)0x2) {
      ppuVar5 = ((uint * PTR32 *)GEN_TOP((*(int *)((int)param_1 + 0xe090) + 0x8c)));
      LOCK();
      puVar9 = *ppuVar5;
      *ppuVar5 = *ppuVar5;
      UNLOCK();
      if ((int)puVar9 < 8) {
        iVar14 = *(int *)((int)param_1 + 0xe090);
        uVar2 = *(ushort *)(iVar14 + 0xa8);
        if ((uint)*(ushort *)(iVar14 + 0xac) + (uint)*(ushort *)(iVar14 + 0xaa) + (uint)uVar2 == 0)
        {
          *(undefined4 *)((int)param_1 + 0xe0a4) = 0;
          F_00c47745(uVar4 ^ (uint)(uint)(gen_frame + 0x18c) GEN_EDX_FWD);
          return (uint)uVar2;
        }
        *(undefined1 *)((int)param_1 + 0xe09c) = 2;
        uVar4 = 0;
        puVar9 = (uint *)((int)param_1 + 0xe094);
        do {
          piVar7 = (int *)((int)param_1 + 0x34);
          if (0xf < *(uint *)((int)param_1 + 0x48)) {
            piVar7 = (int *)*piVar7;
          }
          F_00c472af(((undefined1 *)(gen_frame + 0x84)),0x104,"%s%s%s",piVar7,*(int *)((int)param_1 + 0xe090) + 0xb0 + uVar4,
                     &REFG(undefined, 0x10b17b4));
          uVar22 = 0;
          uVar21 = 0;
          uVar20 = 0;
          puVar19 = ((undefined1 *)(gen_frame + 0x84));
          puVar11 = &(*(undefined4 *)(gen_frame + 0x18));
          (*(undefined4 *)(gen_frame + 0x18)) = 0x746578;
          uVar8 = F_004ff310(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,2,0);
          uVar8 = F_00513d20(uVar8,puVar11,puVar19,uVar20,uVar21,uVar22);
          *puVar9 = uVar8;
          uVar4 = uVar4 + 0x20;
          puVar9 = puVar9 + 1;
        } while (uVar4 < 0x40);
        ppuVar5 = (uint * PTR32 *)F_00500530(*(undefined4 *)((int)param_1 + 0xe090) GEN_EDX_ARG);
        (*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)) = ppuVar5;
        *(char *)((int)param_1 + 0xe09d) = (char)ppuVar5;
        if ((char)ppuVar5 != '\0') {
          uVar4 = (uint)ppuVar5 & 0xff;
          puVar9 = (uint *)F_00406bb0(-(uint)(0xfffffffb < uVar4 * 0xc) | uVar4 * 0xc + 4,0,0);
          if (puVar9 == (uint *)0x0) {
            ppuVar5 = (uint * PTR32 *)0x0;
          }
          else {
            ppuVar5 = (uint * PTR32 *)(puVar9 + 1);
            *puVar9 = uVar4;
            ppuVar15 = ppuVar5;
            while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
              *(undefined2 *)ppuVar15 = 0;
              ppuVar15[1] = (uint *)0x0;
              ppuVar15[2] = (uint *)0x0;
              ppuVar15 = ppuVar15 + 3;
            }
          }
          ppuVar15 = (uint * PTR32 *)0x0;
          *(uint * PTR32 * PTR32 *)((int)param_1 + 0xe0a0) = ppuVar5;
          if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)) != (uint * PTR32 *)0x0) {
            iVar14 = 0;
            do {
              F_00c472af(((undefined1 *)(gen_frame + 0x84)),0x104,&REFG(undefined, 0x10b17c4),
                         *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)param_1 + 0xe090) + 0xf0))) + (int)((int)(uintptr_t)ppuVar15) * 4))));
              uVar22 = 0;
              uVar21 = 0;
              uVar20 = 0;
              puVar19 = ((undefined1 *)(gen_frame + 0x84));
              puVar11 = &(*(undefined4 *)(gen_frame + 0x10));
              (*(undefined4 *)(gen_frame + 0x10)) = 0x6d646c;
              uVar4 = F_004ff310(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,2,0);
              ppuVar5 = (uint * PTR32 *)F_00513d20(uVar4,puVar11,puVar19,uVar20,uVar21,uVar22);
              *((uint * PTR32 * PTR32 *)GEN_TOP((iVar14 + 4 + *(int *)((int)param_1 + 0xe0a0)))) = ppuVar5;
              ppuVar15 = (uint * PTR32 *)((int)ppuVar15 + 1);
              iVar14 = iVar14 + 0xc;
            } while (ppuVar15 < (*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)));
          }
        }
        *(undefined4 *)((int)param_1 + 0xe0a4) = 2;
      }
    }
  }
  else if (iVar14 == 2) {
    ppuVar15 = (uint * PTR32 *)0x0;
    (*(uint * PTR32 * PTR32 *)(gen_frame + 0x20)) = (uint * PTR32 *)0x0;
    (*(uint * PTR32 * PTR32 *)(gen_frame + 0x24)) = (uint * PTR32 *)0x0;
    (*(uint * PTR32 * PTR32 *)(gen_frame + 0x28)) = (uint * PTR32 *)0x0;
    ((uint * PTR32 *)(gen_frame + 0x34))[1] = (uint *)0x0;
    if (*(char *)((int)param_1 + 0xe09c) != '\0') {
      ((uint * PTR32 *)(gen_frame + 0x34))[0] = (uint *)((int)param_1 + 0xe094);
      do {
        puVar9 = ((uint *)GEN_TOP(*((uint * PTR32 *)(gen_frame + 0x34))[0]));
        (*(uint * PTR32 *)(gen_frame + 0x3c)) = puVar9;
        ppuVar5 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x24));
        if ((&(*(uint * PTR32 *)(gen_frame + 0x3c)) < (*(uint * PTR32 * PTR32 *)(gen_frame + 0x24))) && (ppuVar15 <= &(*(uint * PTR32 *)(gen_frame + 0x3c)))) {
          iVar14 = (int)&(*(uint * PTR32 *)(gen_frame + 0x3c)) - (int)ppuVar15;
          if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x24)) == (*(uint * PTR32 * PTR32 *)(gen_frame + 0x28))) {
            F_006b7190(&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,1);
            ppuVar5 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x24));
            ppuVar15 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x20));
          }
          if (ppuVar5 != (uint * PTR32 *)0x0) {
            *ppuVar5 = ppuVar15[iVar14 >> 2];
          }
        }
        else {
          if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x24)) == (*(uint * PTR32 * PTR32 *)(gen_frame + 0x28))) {
            F_006b7190(&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,1);
            ppuVar5 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x24));
            ppuVar15 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x20));
          }
          if (ppuVar5 != (uint * PTR32 *)0x0) {
            *ppuVar5 = puVar9;
          }
        }
        bVar3 = *(byte *)((int)param_1 + 0xe09c);
        ((uint * PTR32 *)(gen_frame + 0x34))[0] = ((uint * PTR32 *)(gen_frame + 0x34))[0] + 1;
        uVar4 = (int)((uint * PTR32 *)(gen_frame + 0x34))[1] + 1;
        (*(uint * PTR32 * PTR32 *)(gen_frame + 0x24)) = ppuVar5 + 1;
        ((uint * PTR32 *)(gen_frame + 0x34))[1] = (uint *)uVar4;
      } while (uVar4 < bVar3);
    }
    ((uint * PTR32 *)(gen_frame + 0x34))[1] = (uint *)0x0;
    ppuVar16 = ppuVar15;
    if (*(char *)((int)param_1 + 0xe09d) != '\0') {
      (*(uint * PTR32 *)(gen_frame + 0x3c)) = (uint *)0x0;
      do {
        puVar9 = *((uint * PTR32 *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0x3c)) + *(int *)((int)param_1 + 0xe0a0) + 4)));
        ((uint * PTR32 *)(gen_frame + 0x34))[0] = puVar9;
        ppuVar5 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x24));
        if ((((uint * PTR32 *)(gen_frame + 0x34)) < (*(uint * PTR32 * PTR32 *)(gen_frame + 0x24))) && (ppuVar15 <= ((uint * PTR32 *)(gen_frame + 0x34)))) {
          iVar14 = (int)((uint * PTR32 *)(gen_frame + 0x34)) - (int)ppuVar15;
          if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x24)) == (*(uint * PTR32 * PTR32 *)(gen_frame + 0x28))) {
            iVar12 = (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x24)) - (int)((int)(uintptr_t)ppuVar15) >> 2;
            if (iVar12 == -1) {
LAB_006ab53d: ;
                    
              F_00c4579a("vector<T> too long");
            }
            uVar8 = iVar12 + 1;
            uVar4 = (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x28)) - (int)((int)(uintptr_t)ppuVar15) >> 2;
            if (uVar4 < uVar8) {
              if (-(uVar4 >> 1) - 1 < uVar4) {
                uVar4 = 0;
              }
              else {
                uVar4 = uVar4 + (uVar4 >> 1);
              }
              if (uVar4 < uVar8) {
                uVar4 = uVar8;
              }
              F_006b6b00(&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,uVar4);
              ppuVar5 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x24));
              ppuVar15 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x20));
            }
          }
          if (ppuVar5 != (uint * PTR32 *)0x0) {
            *ppuVar5 = ppuVar15[iVar14 >> 2];
          }
        }
        else {
          if ((*(uint * PTR32 * PTR32 *)(gen_frame + 0x24)) == (*(uint * PTR32 * PTR32 *)(gen_frame + 0x28))) {
            iVar14 = (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x24)) - (int)((int)(uintptr_t)ppuVar15) >> 2;
            if (iVar14 == -1) goto LAB_006ab53d;
            uVar8 = iVar14 + 1;
            uVar4 = (int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x28)) - (int)((int)(uintptr_t)ppuVar15) >> 2;
            if (uVar4 < uVar8) {
              if (-(uVar4 >> 1) - 1 < uVar4) {
                uVar4 = 0;
              }
              else {
                uVar4 = uVar4 + (uVar4 >> 1);
              }
              if (uVar4 < uVar8) {
                uVar4 = uVar8;
              }
              F_006b6b00(&(*(uint * PTR32 * PTR32 *)(gen_frame + 0x20)) GEN_EDX_ARG,uVar4);
              ppuVar5 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x24));
              ppuVar15 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x20));
            }
          }
          if (ppuVar5 != (uint * PTR32 *)0x0) {
            *ppuVar5 = puVar9;
          }
        }
        bVar3 = *(byte *)((int)param_1 + 0xe09d);
        (*(uint * PTR32 *)(gen_frame + 0x3c)) = (*(uint * PTR32 *)(gen_frame + 0x3c)) + 3;
        puVar9 = (uint *)((int)((uint * PTR32 *)(gen_frame + 0x34))[1] + 1);
        (*(uint * PTR32 * PTR32 *)(gen_frame + 0x24)) = ppuVar5 + 1;
        ((uint * PTR32 *)(gen_frame + 0x34))[1] = puVar9;
        ppuVar16 = ppuVar15;
      } while (puVar9 < (uint *)(uint)bVar3);
    }
    for (; ppuVar5 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x24)), ppuVar15 != (*(uint * PTR32 * PTR32 *)(gen_frame + 0x24)); ppuVar15 = ppuVar15 + 1) {
      ppuVar13 = (uint * PTR32 *)*ppuVar15;
      (*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)) = ppuVar13;
      ppuVar10 = ppuVar13 + 0x22;
      LOCK();
      puVar9 = *ppuVar10;
      *ppuVar10 = *ppuVar10;
      UNLOCK();
      if (puVar9 != (uint *)0x2) goto LAB_006ab610;
      ppuVar13 = ppuVar13 + 0x23;
      LOCK();
      puVar9 = *ppuVar13;
      *ppuVar13 = *ppuVar13;
      UNLOCK();
      if (7 < (int)puVar9) goto LAB_006ab610;
    }
    (*(uint * PTR32 * PTR32 *)(gen_frame + 0x1c)) = (uint * PTR32 *)0x0;
    if (*(char *)((int)param_1 + 0xe09d) != '\0') {
      (*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)) = (uint * PTR32 *)0x0;
      do {
        ppuVar15 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x30));
        puVar1 = ((ushort *)GEN_TOP(((int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)) + *(int *)((int)param_1 + 0xe0a0))));
        puVar9 = *(uint * PTR32 *)(puVar1 + 2);
        ((uint * PTR32 *)(gen_frame + 0x34))[0] = puVar9;
        if (puVar9 != (uint *)0x0) {
          uVar2 = *((ushort *)GEN_TOP((*(int *)(puVar9[0x2a] + 4) + 0xc + puVar9[0x2a])));
          puVar9 = (uint *)(uint)uVar2;
          *puVar1 = uVar2;
          ((uint * PTR32 *)(gen_frame + 0x34))[1] = puVar9;
          uVar4 = F_00406bb0((int)((int)(uintptr_t)puVar9) * 4,0,0);
          *((uint *)GEN_TOP(((int)ppuVar15 + *(int *)((int)param_1 + 0xe0a0) + 8))) = uVar4;
          F_00c48350(*((undefined * PTR32 *)GEN_TOP(((int)ppuVar15 + *(int *)((int)param_1 + 0xe0a0) + 8))),0,(int)((int)(uintptr_t)puVar9) * 4)
          ;
          if (uVar2 != 0) {
            iVar14 = 0;
            (*(uint * PTR32 *)(gen_frame + 0x3c)) = ((uint * PTR32 *)(gen_frame + 0x34))[1];
            do {
              iVar12 = *((int *)GEN_TOP((iVar14 + ((uint * PTR32 *)(gen_frame + 0x34))[0][0x42])));
              puVar9 = *(uint * PTR32 *)(iVar12 + 0x10);
              ((uint * PTR32 *)(gen_frame + 0x34))[1] = puVar9;
              puVar6 = (uint *)0x0;
              uVar4 = 0;
              (*(int *)(gen_frame + 0x14)) = iVar12;
              if (puVar9 != (uint *)0x0) {
                do {
                  if (puVar6 < *(uint * PTR32 *)(iVar12 + 0x10)) {
                    puVar11 = ((undefined4 *)GEN_TOP((*(int *)(iVar12 + 0xc) + (int)((int)(uintptr_t)puVar6) * 4)));
                  }
                  else {
                    puVar11 = (undefined4 *)0x0;
                  }
                  uVar8 = uVar4 & 0xffff;
                  puVar6 = (uint *)((int)puVar6 + 1);
                  uVar4 = uVar4 + 1;
                  *(undefined4 *)((int)&(*(undefined4 *)(gen_frame + 0x40)) + uVar8 * 4) = *puVar11;
                  iVar12 = (*(int *)(gen_frame + 0x14));
                  ppuVar15 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x30));
                } while (puVar6 < puVar9);
              }
              iVar12 = (uVar4 & 0xffff) * 4;
              *((undefined1 *)GEN_TOP(((int)&(*(undefined4 *)(gen_frame + 0x40)) + (uVar4 & 0xffff) * 4))) = 2;
              *(undefined1 *)((int)&(*(undefined4 *)(gen_frame + 0x40)) + iVar12 + 1U) = 0;
              *(undefined1 *)((int)&(*(undefined4 *)(gen_frame + 0x40)) + iVar12 + 2U) = 0x74;
              *(undefined1 *)((int)&(*(undefined4 *)(gen_frame + 0x40)) + iVar12 + 3U) = 0xc;
              uVar4 = F_004deb40(REFG(void * PTR32, 0x1370b90) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x40)),uVar4 + 1 & 0xffff);
              *((uint *)GEN_TOP((iVar14 + *((int *)GEN_TOP(((int)ppuVar15 + *(int *)((int)param_1 + 0xe0a0) + 8)))))) =
                   uVar4;
              iVar14 = iVar14 + 4;
              puVar9 = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x3c)) - 1);
              (*(uint * PTR32 *)(gen_frame + 0x3c)) = puVar9;
            } while (puVar9 != (uint *)0x0);
          }
        }
        ppuVar5 = (uint * PTR32 *)((int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x1c)) + 1);
        (*(uint * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ppuVar5;
        (*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)) = ppuVar15 + 3;
      } while (ppuVar5 < (uint * PTR32 *)(uint)*(byte *)((int)param_1 + 0xe09d));
    }
    *(undefined4 *)((int)param_1 + 0xe0a4) = 3;
    ppuVar16 = (*(uint * PTR32 * PTR32 *)(gen_frame + 0x20));
LAB_006ab610: ;
    if (ppuVar16 != (uint * PTR32 *)0x0) {
      uVar18 = F_00429760(ppuVar16,((int)(*(uint * PTR32 * PTR32 *)(gen_frame + 0x28)) - (int)((int)(uintptr_t)ppuVar16) >> 2) * 4,0xd8);
      F_00c47745((*(uint *)(gen_frame + 0x188)) ^ (uint)(uint)(gen_frame + 0x18c) GEN_EDX_ARG);
      return (uint)uVar18;
    }
  }
  else {
    ppuVar5 = (uint * PTR32 *)(iVar14 - 3);
    if (ppuVar5 == (uint * PTR32 *)0x0) {
      (*(uint * PTR32 * PTR32 *)(gen_frame + 0x30)) = ((uint * PTR32 *)(uintptr_t)gen_fl2bits((float)(*(float *)((int)param_1 + 0xc))));
      fVar17 = (float10)*(float *)((int)param_1 + 0xc);
      if ((float10)*(float *)&REFG(undefined, 0x132293c) < fVar17) {
        *(float *)((int)param_1 + 0xc) = (float)(fVar17 - (float10)*(float *)&REFG(undefined, 0x132293c));
      }
      uVar4 = 0;
      *(float *)((int)param_1 + 0xc) =
           ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x30) * (float10)param_2 +
                  (float10)*(float *)((int)param_1 + 0xc))));
      if (*(char *)((int)param_1 + 0xe09d) != '\0') {
        (*(uint * PTR32 *)(gen_frame + 0x3c)) = (uint *)0x0;
        do {
          this = *((undefined * PTR32 *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0x3c)) + *(int *)((int)param_1 + 0xe0a0) + 4)));
          F_00502310(this GEN_EDX_ARG,0);
          F_00504650(this GEN_EDX_ARG,0);
          bVar3 = *(byte *)((int)param_1 + 0xe09d);
          (*(uint * PTR32 *)(gen_frame + 0x3c)) = (*(uint * PTR32 *)(gen_frame + 0x3c)) + 3;
          uVar4 = uVar4 + 1;
        } while (uVar4 < bVar3);
      }
      puVar11 = (undefined4 *)((int)param_1 + 0x20);
      bVar3 = F_0054ccb0((undefined *)((int)param_1 + 0x10) GEN_EDX_ARG,puVar11);
      if (bVar3 == 0) {
        *(byte *)((int)param_1 + 0xe0a8) = *(byte *)((int)param_1 + 0xe0a8) | 1;
      }
      if ((*(byte *)((int)param_1 + 0xe0a8) & 1) != 0) {
        *(undefined4 *)((int)param_1 + 0x10) = *puVar11;
        *(undefined4 *)((int)param_1 + 0x14) = *(undefined4 *)((int)param_1 + 0x24);
        *(undefined4 *)((int)param_1 + 0x18) = *(undefined4 *)((int)param_1 + 0x28);
        F_006aaa10(param_1 GEN_EDX_ARG,puVar11,0);
        F_006aaa10(param_1 GEN_EDX_ARG,puVar11,1);
        F_006aaa10(param_1 GEN_EDX_ARG,puVar11,2);
        *(byte *)((int)param_1 + 0xe0a8) = *(byte *)((int)param_1 + 0xe0a8) & 0xfe;
      }
      iVar14 = (int)param_1 + 0x50;
      iVar12 = 0x10;
      do {
        F_006514c0(iVar14 GEN_EDX_ARG,param_2);
        iVar14 = iVar14 + 0x34;
        iVar12 = iVar12 - 1;
      } while (iVar12 != 0);
      iVar14 = (int)param_1 + 0x390;
      iVar12 = 0x40;
      do {
        F_006514c0(iVar14 GEN_EDX_ARG,param_2);
        iVar14 = iVar14 + 0x34;
        iVar12 = iVar12 - 1;
      } while (iVar12 != 0);
      iVar14 = (int)param_1 + 0x1090;
      iVar12 = 0x400;
      do {
        uVar4 = F_006514c0(iVar14 GEN_EDX_ARG,param_2);
        iVar14 = iVar14 + 0x34;
        iVar12 = iVar12 - 1;
      } while (iVar12 != 0);
      F_00c47745((*(uint *)(gen_frame + 0x188)) ^ (uint)(uint)(gen_frame + 0x18c) GEN_EDX_ARG);
      return uVar4;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x188)) ^ (uint)(uint)(gen_frame + 0x18c) GEN_EDX_ARG);
  return (uint)ppuVar5;
}

/* ref: FUN_006ab870 */
GEN_FRAME uint GEN_THISCALL F_006ab870(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x6ab870u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1 + 0x10;
  iVar3 = 2;
  do {
    uVar1 = F_006ab090(iVar2 GEN_EDX_FWD,param_2);
    iVar2 = iVar2 + 0xe0c0;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  return uVar1;
}

/* ref: FUN_006ab8b0 */
GEN_FRAME uint F_006ab8b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6ab8b0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int * piVar2;
  int * piVar3;
  ulonglong uVar4;
  
  piVar2 = (int *)param_1[1];
  for (piVar3 = (int *)*param_1; piVar3 != piVar2; piVar3 = piVar3 + 1) {
    if (*piVar3 != 0) {
      F_0050c620(*piVar3,0,0);
    }
  }
  piVar2 = ((int *)(gen_frame + 0xc));
  if (param_1 != piVar2) {
    iVar1 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    piVar2 = (int *)param_1[2];
    param_1[2] = 0;
    if (iVar1 != 0) {
      uVar4 = F_00429760(iVar1,((int)piVar2 - iVar1 >> 2) * 4,0xcb);
      piVar2 = (int *)uVar4;
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_006ab920 */
GEN_NOFRAME uint GEN_THISCALL F_006ab920(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6ab920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x140))(this GEN_EDX_FWD);
  if (uVar1 != 0) {
    this_00 = (undefined *)((int)this + 0x418);
    do {
      F_009f9de0(this_00 GEN_EDX_ARG,0,3);
      uVar2 = uVar2 + 1;
      this_00 = (undefined *)((int)this_00 + 0x88);
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x140))(this GEN_EDX_ARG);
    } while (uVar2 < uVar1);
  }
  F_006ab8b0((int)this + 0x3fc);
  *(uint *)((int)this + 0x2c0) = *(uint *)((int)this + 0x2c0) & 0xfffffff7;
  *(uint *)((int)this + 0x2c4) = *(uint *)((int)this + 0x2c4) & 0xfffffff7;
  return 0xfffffff7;
}

/* ref: FUN_006ab990 */
GEN_NOFRAME uint GEN_THISCALL F_006ab990(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6ab990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x140))(this GEN_EDX_FWD);
  if (uVar1 != 0) {
    this_00 = (undefined *)((int)this + 0x418);
    do {
      F_009f9de0(this_00 GEN_EDX_ARG,0,1);
      uVar2 = uVar2 + 1;
      this_00 = (undefined *)((int)this_00 + 0x88);
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x140))(this GEN_EDX_ARG);
    } while (uVar2 < uVar1);
  }
  F_006ab8b0((int)this + 0x3ec);
  *(uint *)((int)this + 0x2c0) = *(uint *)((int)this + 0x2c0) & 0xfffffffd;
  *(uint *)((int)this + 0x2c4) = *(uint *)((int)this + 0x2c4) & 0xfffffffd;
  return 0xfffffffd;
}

/* ref: FUN_006aba00 */
GEN_NOFRAME uint GEN_THISCALL F_006aba00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6aba00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x140))(this GEN_EDX_FWD);
  if (uVar1 != 0) {
    this_00 = (undefined *)((int)this + 0x418);
    do {
      F_009f9de0(this_00 GEN_EDX_ARG,0,0);
      uVar2 = uVar2 + 1;
      this_00 = (undefined *)((int)this_00 + 0x88);
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x140))(this GEN_EDX_ARG);
    } while (uVar2 < uVar1);
  }
  F_006ab8b0((int)this + 0x3dc);
  *(uint *)((int)this + 0x2c0) = *(uint *)((int)this + 0x2c0) & 0xfffffffe;
  *(uint *)((int)this + 0x2c4) = *(uint *)((int)this + 0x2c4) & 0xfffffffe;
  return 0xfffffffe;
}

/* ref: FUN_006aba70 */
GEN_FRAME uint GEN_THISCALL F_006aba70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6aba70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  code * pcVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * PTR32 * ppuVar5;
  undefined4 * puVar6;
  undefined * this_00;
  uint * puVar7;
  
  puVar7 = (*(uint * PTR32 *)&gen_args[1]);
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_006b5da0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c0))) GEN_EDX_FWD,&(*(undefined4 * PTR32 *)(gen_frame + 0x8)),(*(uint * PTR32 *)&gen_args[1]));
  puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x8)) != *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c4)))) {
    pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x140)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)0x0;
    uVar2 = (*pcVar1)((*(undefined * PTR32 *)&gen_args[0]));
    if (uVar2 != 0) {
      this_00 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x418)));
      do {
        F_009f54d0(this_00 GEN_EDX_ARG,puVar6[0x10],0,2);
        F_009f54d0(this_00 GEN_EDX_ARG,puVar6[0x10],1,2);
        pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x140)));
        (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 1);
        this_00 = (undefined *)((int)this_00 + 0x88);
        puVar3 = ((undefined4 *)GEN_TOP((*pcVar1)((*(undefined * PTR32 *)&gen_args[0]))));
        puVar7 = (*(uint * PTR32 *)&gen_args[1]);
      } while ((*(undefined4 * PTR32 *)(gen_frame + 0x8)) < puVar3);
    }
    if (puVar6[0x10] != 0) {
      F_0050c620(puVar6[0x10],0,0);
      puVar6[0x10] = 0;
    }
    F_006b7c10(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c0))) GEN_EDX_ARG,&(*(uint * PTR32 *)&gen_args[1]),puVar6);
  }
  puVar6 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d4)));
  if (*(char *)((int)puVar6[1] + 0x45) == '\0') {
    puVar3 = (undefined4 *)puVar6[1];
    do {
      if ((uint)puVar3[3] < *puVar7) {
        puVar4 = (undefined4 *)puVar3[2];
      }
      else {
        puVar4 = (undefined4 *)*puVar3;
        puVar6 = puVar3;
      }
      puVar3 = puVar4;
    } while (*(char *)((int)puVar4 + 0x45) == '\0');
  }
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d4)));
  (*(uint * PTR32 *)&gen_args[1]) = puVar6;
  if ((puVar6 == puVar3) || (*puVar7 < (uint)puVar6[3])) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar3;
    ppuVar5 = &(*(undefined4 * PTR32 *)(gen_frame + 0x8));
  }
  else {
    ppuVar5 = &(*(uint * PTR32 *)&gen_args[1]);
  }
  puVar6 = *ppuVar5;
  if (puVar6 != *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d4)))) {
    if (puVar6[0x10] != 0) {
      F_0050c620(puVar6[0x10],0,0);
      puVar6[0x10] = 0;
    }
    ppuVar5 = (undefined4 * PTR32 *)F_006b7c10(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d0))) GEN_EDX_ARG,&(*(uint * PTR32 *)&gen_args[1]),puVar6);
  }
  return (uint)ppuVar5;
}

/* ref: Client::Graphics::Scene::Terrain::vf10 */
GEN_FRAME byte GEN_THISCALL F_006abbb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6abbb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  float fVar8;
  
  bVar4 = 4;
  if (((byte)this[100] & 4) == 0) {
    this[100] = (undefined1)((byte)this[100] | 4);
    uVar5 = *(uint *)(this + 0x78);
    uVar6 = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),*(undefined1 *)(REFG(int, 0x1371278) + 0x10));
    (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),*(undefined1 *)(REFG(int, 0x1371278) + 0x11));
    if (uVar5 != 0) {
      do {
        F_00502350(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x74) + uVar6 * 4))) GEN_EDX_FWD,(*(undefined4 *)(gen_frame + 0x8)));
        F_005046c0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x74) + uVar6 * 4))) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)));
        piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x74) + uVar6 * 4)));
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,1);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar5);
    }
    iVar2 = REFG(int, 0x137127c);
    F_006201f0((undefined *)(REFG(int, 0x137127c) + 0xaf90) GEN_EDX_ARG);
    uVar5 = F_005003e0(*(undefined * PTR32 *)(this + 0x70) GEN_EDX_ARG);
    fVar7 = (float10)(int)uVar5;
    if ((int)uVar5 < 0) {
      fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    F_00b152d0(REFG(undefined4, 0x1370c1c) GEN_EDX_ARG,(float)fVar7);
    fVar8 = F_00500440(*(undefined * PTR32 *)(this + 0x70) GEN_EDX_ARG);
    *(float *)(iVar2 + 0xb184) = (float)((float10)fVar8 * (float10)fVar8);
    fVar8 = F_00500470(*(undefined * PTR32 *)(this + 0x70) GEN_EDX_ARG);
    *(float *)(iVar2 + 0xb188) = fVar8;
    bVar3 = F_00694950(this GEN_EDX_ARG);
    bVar4 = 0;
    if (bVar3 != 0) {
      bVar3 = F_00694c40(this GEN_EDX_ARG);
      bVar4 = 0;
      if (bVar3 != 0) {
        bVar3 = F_0068ed40(this GEN_EDX_ARG);
        bVar4 = 0;
        if (bVar3 != 0) {
          if (this[0x1a8] != (undefined1)0x0) {
            F_006aaee0(this GEN_EDX_ARG);
          }
          *(undefined4 *)(REFG(int, 0x1371280) + 0x2c) = GEN_FLT_TO(*(undefined4 *)(REFG(int, 0x1371280) + 0x2c), REFG(float, 0x1094884));
          *(undefined4 *)(REFG(int, 0x1371280) + 0x30) = GEN_FLT_TO(*(undefined4 *)(REFG(int, 0x1371280) + 0x30), REFG(float, 0x10946b4));
          *(undefined4 *)(REFG(int, 0x1371280) + 0x34) = GEN_FLT_TO(*(undefined4 *)(REFG(int, 0x1371280) + 0x34), REFG(float, 0x1088068));
          bVar4 = F_005004a0(*(undefined * PTR32 *)(this + 0x70) GEN_EDX_ARG,0);
          *(byte *)(iVar2 + 0xe9fe) = bVar4;
          bVar4 = F_005004a0(*(undefined * PTR32 *)(this + 0x70) GEN_EDX_ARG,1);
          *(byte *)(iVar2 + 0xe9ff) = bVar4;
          bVar4 = F_005004a0(*(undefined * PTR32 *)(this + 0x70) GEN_EDX_ARG,2);
          *(byte *)(iVar2 + 0xea00) = bVar4;
        }
      }
    }
  }
  return bVar4;
}

/* ref: FUN_006abd20 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006abd20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6abd20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(byte *)((int)this + 0xf0) & 1) == 0) {
    F_006aac60(this GEN_EDX_FWD);
  }
  F_0069f9d0(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_006ac150 */
GEN_FRAME uint GEN_THISCALL F_006ac150(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6ac150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * piVar2;
  undefined * this_00;
  
  piVar2 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x6c4)));
  if (piVar2 != *(int * PTR32 *)((int)this + 0x6c4)) {
    do {
      (*(uint *)(gen_frame + 0x8)) = 0;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x140))(this GEN_EDX_FWD);
      if (uVar1 != 0) {
        this_00 = (undefined *)((int)this + 0x418);
        do {
          F_009f54d0(this_00 GEN_EDX_ARG,*(undefined4 *)((int)piVar2 + 0x40),0,2);
          F_009f54d0(this_00 GEN_EDX_ARG,*(undefined4 *)((int)piVar2 + 0x40),1,2);
          (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
          this_00 = (undefined *)((int)this_00 + 0x88);
          uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x140))(this GEN_EDX_ARG);
        } while ((*(uint *)(gen_frame + 0x8)) < uVar1);
      }
      if (*(int *)((int)piVar2 + 0x40) != 0) {
        F_0050c620(*(int *)((int)piVar2 + 0x40),0,0);
        *(undefined4 *)((int)piVar2 + 0x40) = 0;
      }
      piVar2 = (int *)F_006b7c10((undefined *)((int)this + 0x6c0) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),piVar2);
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 0x6c4));
  }
  uVar1 = (*(uint *)(gen_frame + 0x8));
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x8)) = uVar1 & 0xffffff00;
  F_006b5990(**(undefined4 * PTR32 *)((int)this + 0x6c4),*(undefined4 * PTR32 *)((int)this + 0x6c4),(*(uint *)(gen_frame + 0x8)));
  F_006b7ea0((undefined *)((int)this + 0x6c0) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x6c4) + 4))));
  uVar1 = (*(uint *)(gen_frame + 0x8));
  *((int *)GEN_TOP((*(int *)((int)this + 0x6c4) + 4))) = *(int *)((int)this + 0x6c4);
  *(undefined4 *)*(undefined4 *)((int)this + 0x6c4) = *(undefined4 *)((int)this + 0x6c4);
  *((int *)GEN_TOP((*(int *)((int)this + 0x6c4) + 8))) = *(int *)((int)this + 0x6c4);
  *(undefined4 *)((int)this + 0x6c8) = 0;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x8)) = uVar1 & 0xffffff00;
  F_006b5990(**(undefined4 * PTR32 *)((int)this + 0x6d4),*(undefined4 * PTR32 *)((int)this + 0x6d4),(*(uint *)(gen_frame + 0x8)));
  F_006b7ea0((undefined *)((int)this + 0x6d0) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x6d4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 0x6d4) + 4))) = *(int *)((int)this + 0x6d4);
  *(undefined4 *)*(undefined4 *)((int)this + 0x6d4) = *(undefined4 *)((int)this + 0x6d4);
  uVar1 = *(uint *)((int)this + 0x6d4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 0x6d8) = 0;
  return uVar1;
}

/* ref: FUN_006ac2b0 */
GEN_FRAME byte GEN_THISCALL F_006ac2b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6ac2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  undefined4 * puVar1;
  byte bVar2;
  ushort uVar3;
  undefined * this_00;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_00b890c0((int)this + 0x730,param_1);
  uVar5 = 0;
  iVar4 = param_1 + 0x1c;
  do {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xfc))(this GEN_EDX_ARG,uVar5,iVar4);
    uVar5 = uVar5 + 1;
    iVar4 = iVar4 + 4;
  } while (uVar5 < 10);
  F_00693ef0(this GEN_EDX_ARG);
  *(uint *)((int)this + 0x74c) = *(uint *)((int)this + 0x74c) | 0x1c00;
  *(undefined4 *)((int)this + 0x800) = 0;
  *(undefined4 *)((int)this + 0x804) = 0;
  *(undefined4 *)((int)this + 0x808) = 0;
  *(undefined4 *)((int)this + 0x80c) = 0;
  bVar2 = F_006a8d00(this GEN_EDX_ARG,0x10,(uint)*(byte *)(param_1 + 0x44));
  if (bVar2 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
    return 0;
  }
  uVar5 = *(byte *)((int)this + 0x734) - 1;
  fVar6 = F_006b3220(*(undefined4 *)(REFG(int, 0x137129c) + 0x24) GEN_EDX_ARG,(uVar5 >> 1) + 1,
                       (uint)*(byte *)((int)this + 0x731),uVar5 & 1,
                       (uint)*(byte *)((int)this + 0x732),(uint)*(byte *)((int)this + 0x733));
  *(float *)((int)this + 0x294) = (float)fVar6;
  if (*(undefined * PTR32 *)((int)this + 0xe4) != (undefined *)0x0) {
    F_00b84960(*(undefined * PTR32 *)((int)this + 0xe4) GEN_EDX_ARG);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0xe4);
    if (puVar1 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0xe4) = 0;
    }
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) GEN_EDX_ARG,0x150,0x10);
  if (uVar5 == 0) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = (undefined *)F_00b84860(uVar5 GEN_EDX_ARG);
  }
  *(undefined * PTR32 *)((int)this + 0xe4) = this_00;
  if (this_00 != (undefined *)0x0) {
    F_00b83750(this_00 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x78));
  }
  F_006a1010(this GEN_EDX_ARG);
  if ((*(uint *)((int)this + 0x71c) >> 0xc & 1) != 0) {
    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x114))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),0x100,0);
    if (uVar5 == 0) {
      if ((*(undefined * PTR32 *)((int)this + 0x2d0) != (undefined *)0x0) &&
         (F_00693890(*(undefined * PTR32 *)((int)this + 0x2d0) GEN_EDX_ARG,10),
         *((short *)GEN_TOP((*(int *)((int)this + 0x2d0) + 0x42))) ==
         *((short *)GEN_TOP((*(int *)((int)this + 0x2d0) + 0x40))))) {
        *(uint *)((int)this + 0x2c8) = *(uint *)((int)this + 0x2c8) & 0x7fffffff;
      }
      if (*(undefined * PTR32 *)((int)this + 0xe4) != (undefined *)0x0) {
        F_00b84d90(*(undefined * PTR32 *)((int)this + 0xe4) GEN_EDX_ARG,0);
      }
    }
    else {
      F_006a6af0(this GEN_EDX_ARG);
      F_006937b0(*(undefined * PTR32 *)((int)this + 0x2d0) GEN_EDX_ARG,10,0x70687962,uVar5,0);
      *(uint *)((int)this + 0x2c8) = *(uint *)((int)this + 0x2c8) | 0x80000000;
    }
  }
  F_006a9230(this GEN_EDX_ARG);
  uVar3 = *(ushort *)((int)this + 0x778);
  uVar5 = (uint)uVar3;
  switch((unsigned int)(uintptr_t)(uVar5 % 10)) {
  case 1: ;
    if (uVar5 < 0x386) {
      if (uVar5 == 0x385) break;
      iVar4 = uVar5 - 0x65;
    }
    else {
      iVar4 = uVar5 - 0x44d;
    }
    if (((iVar4 != 0) && (iVar4 != 100)) && (uVar3 = 0xc9, (uVar5 / 100 & 1) != 0)) {
      uVar3 = 0x65;
    }
    break;
  case 2: ;
    uVar3 = 0xc9;
    if ((uVar5 / 100 & 1) != 0) {
      uVar3 = 0x65;
    }
    break;
  case 3: ;
    if ((uVar5 / 100 & 1) == 0) break;
  case 4: ;
    uVar3 = 0x65;
  }
  if (uVar3 == *(ushort *)((int)this + 0x778)) {
    F_006a69d0(this GEN_EDX_ARG,0xd);
    F_006a69d0(this GEN_EDX_ARG,0xe);
  }
  else {
    F_006a8f40(this GEN_EDX_ARG,0xd);
    F_006a8f40(this GEN_EDX_ARG,0xe);
  }
  F_006a9300(this GEN_EDX_ARG);
  F_006abf50(this GEN_EDX_ARG);
  F_006abe30(this GEN_EDX_ARG,0x737764,0x736c64);
  uVar5 = F_006767d0((undefined *)(REFG(int, 0x137128c) + 0x3d0) GEN_EDX_ARG);
  *(uint *)((int)this + 0x7e4) = uVar5;
  bVar2 = F_006930a0(this GEN_EDX_ARG);
  *(char *)((int)this + 0x65) = (bVar2 != 0) + '\x02';
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_006ac620 */
GEN_FRAME byte GEN_THISCALL F_006ac620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6ac620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  byte bVar1;
  
  *(undefined2 *)((int)this + 0x730) = *param_1;
  *(undefined2 *)((int)this + 0x732) = param_1[1];
  *(undefined2 *)((int)this + 0x734) = param_1[2];
  *(undefined2 *)((int)this + 0x736) = param_1[3];
  bVar1 = F_006a8d00(this GEN_EDX_FWD,1,(uint)*(byte *)(param_1 + 4));
  if (bVar1 == 0) {
    return 0;
  }
  F_006a8f40(this GEN_EDX_ARG,0);
  F_006abf50(this GEN_EDX_ARG);
  F_006abe30(this GEN_EDX_ARG,0x656d70,0x656d70);
  bVar1 = F_006930a0(this GEN_EDX_ARG);
  *(char *)((int)this + 0x65) = (bVar1 != 0) + '\x02';
  return 1;
}

/* ref: FUN_006ac790 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006ac790(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6ac790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    F_0061eec0(*(undefined * PTR32 *)((int)this + 0x78) GEN_EDX_FWD,5);
  }
  F_006ab8b0((int)this + 0x3dc);
  F_006ab8b0((int)this + 0x3ec);
  F_006aba00(this GEN_EDX_ARG);
  F_006ab990(this GEN_EDX_ARG);
  F_006ac150(this GEN_EDX_ARG);
  F_006ab920(this GEN_EDX_ARG);
  F_006aba00(this GEN_EDX_ARG);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x140))(this GEN_EDX_ARG);
  if (uVar1 != 0) {
    this_00 = (undefined *)((int)this + 0x418);
    do {
      F_009f9e80(this_00 GEN_EDX_ARG);
      this_00 = (undefined *)((int)this_00 + 0x88);
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}

/* ref: FUN_006ac810 */
GEN_FRAME byte GEN_THISCALL F_006ac810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6ac810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  undefined4 * puVar1;
  byte bVar2;
  undefined * this_00;
  undefined2 * puVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  uVar4 = 0;
  *(undefined2 *)((int)this + 0x748) = *param_1;
  puVar3 = param_1;
  do {
    puVar3 = puVar3 + 2;
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xfc))(this GEN_EDX_FWD,uVar4,puVar3);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 5);
  bVar2 = F_006a8d00(this GEN_EDX_ARG,5,(uint)*(byte *)((int)param_1 + 3));
  if (bVar2 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
    return 0;
  }
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    F_006abf50(this GEN_EDX_ARG);
    F_006abe30(this GEN_EDX_ARG,0x656d70,0x656d70);
  }
  else {
    F_006ac6b0(this GEN_EDX_ARG);
  }
  F_0068d7f0(this GEN_EDX_ARG);
  uVar4 = F_006767d0((undefined *)(REFG(int, 0x137128c) + 0x3d0) GEN_EDX_ARG);
  *(uint *)((int)this + 0x77c) = uVar4;
  bVar2 = F_006930a0(this GEN_EDX_ARG);
  *(char *)((int)this + 0x65) = (bVar2 != 0) + '\x02';
  if (*(undefined * PTR32 *)((int)this + 0xe4) != (undefined *)0x0) {
    F_00b84960(*(undefined * PTR32 *)((int)this + 0xe4) GEN_EDX_ARG);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0xe4);
    if (puVar1 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
      *(undefined4 *)((int)this + 0xe4) = 0;
    }
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) GEN_EDX_ARG,0x150,0x10);
  if (uVar4 == 0) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = (undefined *)F_00b84860(uVar4 GEN_EDX_ARG);
  }
  *(undefined * PTR32 *)((int)this + 0xe4) = this_00;
  if (this_00 != (undefined *)0x0) {
    F_00b83750(this_00 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x78));
  }
  if ((*(uint *)((int)this + 0x71c) >> 0xc & 1) != 0) {
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x114))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),0x100,0);
    if (uVar4 == 0) {
      if (*(undefined * PTR32 *)((int)this + 0x2d0) != (undefined *)0x0) {
        F_00693890(*(undefined * PTR32 *)((int)this + 0x2d0) GEN_EDX_ARG,10);
        if (*((short *)GEN_TOP((*(int *)((int)this + 0x2d0) + 0x42))) ==
            *((short *)GEN_TOP((*(int *)((int)this + 0x2d0) + 0x40)))) {
          *(uint *)((int)this + 0x2c8) = *(uint *)((int)this + 0x2c8) & 0x7fffffff;
        }
      }
      if (*(undefined * PTR32 *)((int)this + 0xe4) != (undefined *)0x0) {
        F_00b84d90(*(undefined * PTR32 *)((int)this + 0xe4) GEN_EDX_ARG,0);
      }
    }
    else {
      F_006a6af0(this GEN_EDX_ARG);
      F_006937b0(*(undefined * PTR32 *)((int)this + 0x2d0) GEN_EDX_ARG,10,0x70687962,uVar4,0);
      *(uint *)((int)this + 0x2c8) = *(uint *)((int)this + 0x2c8) | 0x80000000;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_006ac9f0 */
GEN_FRAME byte GEN_THISCALL F_006ac9f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6ac9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  
  *(undefined2 *)((int)this + 0x730) = *param_1;
  *(undefined2 *)((int)this + 0x732) = param_1[1];
  *(undefined2 *)((int)this + 0x734) = param_1[2];
  bVar1 = F_006a8d00(this GEN_EDX_FWD,1,(uint)*(byte *)((int)param_1 + 7));
  if (bVar1 == 0) {
    return 0;
  }
  F_006a8f40(this GEN_EDX_ARG,0);
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    F_006abf50(this GEN_EDX_ARG);
    F_006abe30(this GEN_EDX_ARG,0x656d70,0x656d70);
  }
  else {
    F_006ac6b0(this GEN_EDX_ARG);
  }
  F_0068d7f0(this GEN_EDX_ARG);
  uVar2 = F_006767d0((undefined *)(REFG(int, 0x137128c) + 0x3d0) GEN_EDX_ARG);
  *(uint *)((int)this + 0x740) = uVar2;
  bVar1 = F_006930a0(this GEN_EDX_ARG);
  *(char *)((int)this + 0x65) = (bVar1 != 0) + '\x02';
  F_00692c10(this GEN_EDX_ARG);
  F_006a8230(this GEN_EDX_ARG,0);
  return 1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf1 */
GEN_FRAME uint GEN_THISCALL F_006acab0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6acab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  byte bVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined * pCVar11;
  undefined * local_8;
  
  uVar9 = *(uint *)(this + 0x74);
  uVar10 = 0;
  if (uVar9 != 0) {
    do {
      if (*((int *)GEN_TOP((*(int *)(this + 0x80) + uVar10 * 4))) != 0) {
        F_009bc2a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x80) + uVar10 * 4))) GEN_EDX_FWD);
        if (*((int *)GEN_TOP((*(int *)(this + 0x80) + uVar10 * 4))) != 0) {
          this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x80) + uVar10 * 4)));
          if (this_00 != (undefined *)0x0) {
            F_009cfa70(this_00 GEN_EDX_ARG);
            F_00406ad0(this_00);
          }
          *((undefined4 *)GEN_TOP((*(int *)(this + 0x80) + uVar10 * 4))) = 0;
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar9);
  }
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x8c))(this GEN_EDX_ARG);
  pCVar11 = this + 0x168;
  iVar8 = 2;
  do {
    piVar1 = *(int * PTR32 *)pCVar11;
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
      *(int *)pCVar11 = 0;
    }
    pCVar11 = pCVar11 + 4;
    iVar8 = iVar8 - 1;
  } while (iVar8 != 0);
  if (*(undefined * PTR32 *)(this + 0x78) != (undefined *)0x0) {
    F_0061eec0(*(undefined * PTR32 *)(this + 0x78) GEN_EDX_ARG,5);
  }
  piVar1 = *(int * PTR32 *)(this + 0xe0);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
    puVar2 = *(undefined4 * PTR32 *)(this + 0xe0);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0xe0) = 0;
    }
  }
  *(undefined4 *)(this + 0xe0) = 0;
  iVar8 = 10;
  do {
    iVar3 = *(int *)(this + 0x2d0);
    if (iVar3 != 0) {
      uVar7 = 0 << ((byte)iVar8 & 0x1f);
      uVar5 = ~(1 << ((byte)iVar8 & 0x1f));
      *(ushort *)(iVar3 + 0x40) = *(ushort *)(iVar3 + 0x40) & uVar5 | uVar7;
      *(ushort *)(iVar3 + 0x42) = *(ushort *)(iVar3 + 0x42) & uVar5 | uVar7;
      *(ushort *)(iVar3 + 0x44) = *(ushort *)(iVar3 + 0x44) & uVar5 | uVar7;
      iVar4 = *(int *)(iVar3 + iVar8 * 4);
      if (iVar4 != 0) {
        F_0050c620(iVar4,0,0);
        *(undefined4 *)(iVar3 + iVar8 * 4) = 0;
      }
      if (*((short *)GEN_TOP((*(int *)(this + 0x2d0) + 0x42))) == *((short *)GEN_TOP((*(int *)(this + 0x2d0) + 0x40)))) {
        *(uint *)(this + 0x2c8) = *(uint *)(this + 0x2c8) & 0x7fffffff;
      }
    }
    if (*(undefined * PTR32 *)(this + 0xe4) != (undefined *)0x0) {
      F_00b84d90(*(undefined * PTR32 *)(this + 0xe4) GEN_EDX_ARG,iVar8 - 10);
    }
    uVar10 = iVar8 - 9;
    iVar8 = iVar8 + 1;
  } while (uVar10 < 5);
  uVar10 = 0;
  if (*(undefined * PTR32 *)(this + 0xe4) != (undefined *)0x0) {
    F_00b84960(*(undefined * PTR32 *)(this + 0xe4) GEN_EDX_ARG);
    puVar2 = *(undefined4 * PTR32 *)(this + 0xe4);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0xe4) = 0;
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x90) + 0xc))))(this + 0x90 GEN_EDX_ARG);
  if (uVar9 != 0) {
    do {
      F_006a69d0(this GEN_EDX_ARG,uVar10);
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar9);
  }
  if (*(ushort *)(this + 0x11a) != 0xffff) {
    F_00621a50((undefined *)(REFG(int, 0x137127c) + 0x1061c) GEN_EDX_ARG,(uint)*(ushort *)(this + 0x11a));
    *(undefined2 *)(this + 0x11a) = 0xffff;
  }
  if (*(undefined * PTR32 *)(this + 0x164) != (undefined *)0x0) {
    F_00620800(*(undefined * PTR32 *)(this + 0x164) GEN_EDX_ARG);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x164);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x164) = 0;
    }
  }
  if (*(undefined * PTR32 *)(this + 0x160) != (undefined *)0x0) {
    F_0061e400(*(undefined * PTR32 *)(this + 0x160) GEN_EDX_ARG);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x160);
    if (puVar2 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x160) = 0;
    }
  }
  F_009f54d0(this + 0x4a0 GEN_EDX_ARG,*(undefined4 *)(this + 0x414),1,0);
  uVar9 = 0;
  if (*(int *)(this + 0x414) != 0) {
    F_0050c620(*(int *)(this + 0x414),0,0);
    *(undefined4 *)(this + 0x414) = 0;
  }
  uVar10 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x140))(this GEN_EDX_ARG);
  if (uVar10 != 0) {
    local_8 = this + 0x418;
    do {
      iVar8 = *(int *)(this + 0x2d0);
      bVar6 = (byte)uVar9;
      if (iVar8 != 0) {
        uVar7 = 0 << (bVar6 & 0x1f);
        uVar5 = ~(1 << (bVar6 & 0x1f));
        *(ushort *)(iVar8 + 0x40) = uVar5 & *(ushort *)(iVar8 + 0x40) | uVar7;
        *(ushort *)(iVar8 + 0x42) = uVar5 & *(ushort *)(iVar8 + 0x42) | uVar7;
        *(ushort *)(iVar8 + 0x44) = uVar5 & *(ushort *)(iVar8 + 0x44) | uVar7;
        iVar3 = *(int *)(iVar8 + uVar9 * 4);
        if (iVar3 != 0) {
          F_0050c620(iVar3,0,0);
          *(undefined4 *)(iVar8 + uVar9 * 4) = 0;
        }
        if (*((short *)GEN_TOP((*(int *)(this + 0x2d0) + 0x42))) == *((short *)GEN_TOP((*(int *)(this + 0x2d0) + 0x40))))
        {
          *(uint *)(this + 0x2c8) = *(uint *)(this + 0x2c8) & 0x7fffffff;
        }
      }
      F_009f0670(local_8 GEN_EDX_ARG,0);
      if (*(undefined * PTR32 *)(this + 0x78) != (undefined *)0x0) {
        F_00622fe0(*(undefined * PTR32 *)(this + 0x78) GEN_EDX_ARG,uVar9,0);
      }
      iVar8 = *(int *)(this + 0x2d0);
      if (iVar8 != 0) {
        uVar7 = 0 << (bVar6 + 5 & 0x1f);
        uVar5 = ~(1 << (bVar6 + 5 & 0x1f));
        *(ushort *)(iVar8 + 0x40) = uVar5 & *(ushort *)(iVar8 + 0x40) | uVar7;
        *(ushort *)(iVar8 + 0x42) = *(ushort *)(iVar8 + 0x42) & uVar5 | uVar7;
        *(ushort *)(iVar8 + 0x44) = *(ushort *)(iVar8 + 0x44) & uVar5 | uVar7;
        iVar3 = *(int *)(iVar8 + 0x14 + uVar9 * 4);
        if (iVar3 != 0) {
          F_0050c620(iVar3,0,0);
          *(undefined4 *)(iVar8 + 0x14 + uVar9 * 4) = 0;
        }
        if (*((short *)GEN_TOP((*(int *)(this + 0x2d0) + 0x42))) == *((short *)GEN_TOP((*(int *)(this + 0x2d0) + 0x40))))
        {
          *(uint *)(this + 0x2c8) = *(uint *)(this + 0x2c8) & 0x7fffffff;
        }
      }
      if (*(undefined * PTR32 *)(this + 0x78) != (undefined *)0x0) {
        F_0061edb0(*(undefined * PTR32 *)(this + 0x78) GEN_EDX_ARG,uVar9,0);
      }
      local_8 = local_8 + 0x88;
      uVar9 = uVar9 + 1;
      uVar10 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x140))(this GEN_EDX_ARG);
    } while (uVar9 < uVar10);
  }
  piVar1 = *(int * PTR32 *)(this + 0x78);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x78) = 0;
  }
  iVar8 = *(int *)(this + 0x2d0);
  if (iVar8 != 0) {
    *(ushort *)(iVar8 + 0x40) = *(ushort *)(iVar8 + 0x40) & 0x7fff;
    *(ushort *)(iVar8 + 0x42) = *(ushort *)(iVar8 + 0x42) & 0x7fff;
    *(ushort *)(iVar8 + 0x44) = *(ushort *)(iVar8 + 0x44) & 0x7fff;
    if (*(int *)(iVar8 + 0x3c) != 0) {
      F_0050c620(*(int *)(iVar8 + 0x3c),0,0);
      *(undefined4 *)(iVar8 + 0x3c) = 0;
    }
    if (*((short *)GEN_TOP((*(int *)(this + 0x2d0) + 0x42))) == *((short *)GEN_TOP((*(int *)(this + 0x2d0) + 0x40)))) {
      *(uint *)(this + 0x2c8) = *(uint *)(this + 0x2c8) & 0x7fffffff;
    }
  }
  F_006ac790(this GEN_EDX_ARG);
  piVar1 = *(int * PTR32 *)(this + 0x2d8);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x2d8) = 0;
  }
  if (*(int *)(this + 0x2c8) == 0) {
    F_006a0300(this GEN_EDX_ARG);
  }
  if (*(int *)(this + 0x7c) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,*(int *)(this + 0x7c));
    *(undefined4 *)(this + 0x7c) = 0;
  }
  if (*(int *)(this + 0x80) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,*(int *)(this + 0x80));
    *(undefined4 *)(this + 0x80) = 0;
  }
  *(undefined4 *)(this + 0x74) = 0;
  this[100] = (undefined1)((byte)this[100] & 0xfb);
  this[0x65] = (undefined1)0x0;
  if (*(int *)(this + 0x60) != 0) {
    F_00b14100(REFG(void * PTR32, 0x1370c1c) GEN_EDX_ARG,*(int *)(this + 0x60));
    *(undefined4 *)(this + 0x60) = 0;
  }
  iVar8 = *(int *)(this + 0x14);
  if ((iVar8 != 0) && (*(undefined * PTR32 *)(iVar8 + 0x20) == this)) {
    *(uint *)(iVar8 + 0x20) =
         -(uint)(*(undefined * PTR32 *)(this + 0x1c) != this) & (uint)*(undefined * PTR32 *)(this + 0x1c);
  }
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x1c) + 0x18))) = *(undefined4 *)(this + 0x18);
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0x1c))) = *(undefined4 *)(this + 0x1c);
  iVar8 = *(int *)(this + 0x28);
  uVar10 = *(uint *)(this + 0x24) & 0xfffffffc;
  uVar9 = *(uint *)(this + 0x24) & 3;
  *(undefined * PTR32 *)(this + 0x18) = this;
  *(undefined * PTR32 *)(this + 0x1c) = this;
  *(undefined4 *)(this + 0x14) = 0;
  *(uint *)(this + 0x24) = uVar9;
  *(undefined4 *)(this + 0x28) = 0;
  if (uVar10 != 0) {
    *(int *)(uVar10 + 0x28) = iVar8;
  }
  if (iVar8 != 0) {
    uVar9 = *(uint *)(iVar8 + 0x24) & 3 | uVar10;
    *(uint *)(iVar8 + 0x24) = uVar9;
  }
  *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 1;
  return uVar9;
}

/* ref: FUN_006acff0 */
GEN_FRAME uint GEN_THISCALL F_006acff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6acff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x2a0];
  uint uVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x298)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x29c);
  (*(int *)(gen_frame + 0x14)) = param_2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = param_3;
  (*(undefined4 *)(gen_frame + 0x20)) = param_4;
  (*(undefined4 *)(gen_frame + 0x18)) = param_5;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 2: ;
  case 4: ;
  case 5: ;
    goto switchD_006ad037_caseD_2;
  case 3: ;
    uVar1 = *(uint *)((int)this + 0x71c) >> 0xb;
    break;
  default: ;
    uVar1 = *(uint *)((int)this + 0x71c) >> 3;
  }
  if ((uVar1 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0xffffffff;
    param_1[2] = 1;
    param_1[3] = 0x656d70;
    param_1[4] = 0x656d70;
    param_1[5] = 0;
    param_1[0xb] = 0xf;
    param_1[10] = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    goto LAB_006ad341;
  }
switchD_006ad037_caseD_2: ;
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 200))(this GEN_EDX_FWD);
  iVar4 = 4;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 1: ;
    iVar4 = 0;
    break;
  case 2: ;
    iVar4 = 2;
    break;
  case 3: ;
    iVar4 = 1;
    break;
  case 4: ;
    iVar4 = 3;
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x128))(this GEN_EDX_ARG);
  uVar1 = iVar4 << 0x10 | uVar1 & 0xffff;
  (*(uint *)(gen_frame + 0x28)) = (uint)*(byte *)((int)this + 0x720);
  (*(uint *)(gen_frame + 0x24)) = uVar1;
  F_006b6f60(&(*(undefined4 *)(gen_frame + 0x64)) GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x1c)),(*(int *)(gen_frame + 0x14)),&(*(uint *)(gen_frame + 0x24)),&(*(uint *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x18)));
  piVar2 = (int *)F_006b5da0((undefined *)((int)this + 0x6c0) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x10)),&(*(undefined4 *)(gen_frame + 0x64)));
  if (*(int *)((int)this + 0x6c4) == *piVar2) {
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)((int)this + 0x6d0);
    piVar2 = (int *)F_006b5da0((undefined *)((int)this + 0x6d0) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x24)),&(*(undefined4 *)(gen_frame + 0x64)));
    if (*(int *)((int)this + 0x6d4) != *piVar2) goto LAB_006ad2ca;
    (*(uint *)(gen_frame + 0x28)) = 0;
    if (((*(int *)(gen_frame + 0x14)) < 3) || (4 < (*(int *)(gen_frame + 0x14)))) {
      uVar1 = F_00516f10(*(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x58) GEN_EDX_ARG,uVar1,(uint)*(byte *)((int)this + 0x720),
                           (*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x18)),(*(int *)(gen_frame + 0x14)),(*(undefined4 * PTR32 *)(gen_frame + 0x1c)),param_6);
LAB_006ad26a: ;
      (*(uint *)(gen_frame + 0x28)) = uVar1;
    }
    else {
      F_00c48350(((undefined1 *)(gen_frame + 0x198)),0,0x100);
      puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x1c));
      if (0xf < (uint)(*(undefined4 * PTR32 *)(gen_frame + 0x1c))[5]) {
        puVar3 = (undefined4 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x1c));
      }
      F_00c472af(((undefined1 *)(gen_frame + 0x98)),0x100,"nonresident/%s",puVar3);
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x118))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x198)),0x100,1,((undefined1 *)(gen_frame + 0x98)));
      if (uVar1 != 0) {
        F_004ff310(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,4,0);
        (*(uint *)(gen_frame + 0x24)) = 0x706170;
        uVar1 = F_00513d20(&(*(undefined4 *)(gen_frame + 0x20)),&(*(uint *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0x198)),0,0,0);
        goto LAB_006ad26a;
      }
    }
    uVar1 = F_006b7860(((undefined1 *)(gen_frame + 0x2c)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x64)),&(*(uint *)(gen_frame + 0x28)));
    F_006b81e0((*(undefined * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),uVar1);
    if (0xf < (*(uint *)(gen_frame + 0x58))) {
      F_00429760((*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x58)) + 1,0x32);
    }
    F_006b7320(param_1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x64)));
  }
  else {
LAB_006ad2ca: ;
    *param_1 = (*(undefined4 *)(gen_frame + 0x64));
    param_1[1] = (*(undefined4 *)(gen_frame + 0x68));
    param_1[2] = (*(undefined4 *)(gen_frame + 0x6c));
    param_1[3] = (*(undefined4 *)(gen_frame + 0x70));
    param_1[4] = (*(undefined4 *)(gen_frame + 0x74));
    param_1[5] = (*(undefined4 *)(gen_frame + 0x78));
    param_1[0xb] = 0xf;
    param_1[10] = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    F_004e54d0(param_1 + 6 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x7c)),0,0xffffffff);
  }
  if (0xf < (*(uint *)(gen_frame + 0x90))) {
    F_00429760(((undefined4 *)(gen_frame + 0x7c))[0],(*(uint *)(gen_frame + 0x90)) + 1,0x32);
  }
LAB_006ad341: ;
  F_00c47745((*(uint *)(gen_frame + 0x298)) ^ (uint)(uint)(gen_frame + 0x29c) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_006ad380 */
GEN_FRAME unsigned int GEN_THISCALL F_006ad380(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6ad380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  int iVar2;
  char cVar3;
  int * piVar4;
  int iVar5;
  byte bVar6;
  int * piVar7;
  uint uVar8;
  int * piVar9;
  undefined4 * puVar10;
  uint uVar11;
  uint uVar12;
  
  if (*(int *)((int)this + 0x78) != 0) {
    uVar8 = *(uint *)((int)this + 0x2c0);
    if (((((byte)(uVar8 >> 3) | (byte)(uVar8 >> 2) | (byte)(uVar8 >> 1) | (byte)uVar8) & 1) != 0 ||
        *(int *)((int)this + 0x40c) != 0) || *(int *)((int)this + 0x6f8) != 0) {
      if ((uVar8 & 1) != 0) {
        bVar6 = F_00691d30((undefined4 *)((int)this + 0x3dc));
        if (bVar6 != 0) {
          piVar4 = *(int * PTR32 *)((int)this + 0x3e0);
          for (piVar9 = *(int * PTR32 *)((int)this + 0x3dc); piVar9 != piVar4; piVar9 = piVar9 + 1) {
            piVar7 = (int *)(*piVar9 + 0x8c);
            iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar7), 0);
            if (iVar2 < 8) {
              F_009f9db0((undefined *)((int)this + 0x418) GEN_EDX_ARG,*piVar9,0,0);
            }
          }
          F_006ab8b0((int)this + 0x3dc);
          uVar8 = F_009f3260((undefined *)((int)this + 0x418) GEN_EDX_ARG);
          if (uVar8 != 0) {
            F_0061ef50(*(undefined * PTR32 *)((int)this + 0x78) GEN_EDX_ARG,0,(undefined *)((int)this + 0x418));
          }
          *(uint *)((int)this + 0x2c0) = *(uint *)((int)this + 0x2c0) & 0xfffffffe;
          *(uint *)((int)this + 0x2c4) = *(uint *)((int)this + 0x2c4) | 1;
        }
      }
      if ((*(uint *)((int)this + 0x2c0) >> 1 & 1) != 0) {
        bVar6 = F_00691d30((undefined4 *)((int)this + 0x3ec));
        if (bVar6 != 0) {
          piVar4 = *(int * PTR32 *)((int)this + 0x3f0);
          for (piVar9 = *(int * PTR32 *)((int)this + 0x3ec); piVar9 != piVar4; piVar9 = piVar9 + 1) {
            piVar7 = (int *)(*piVar9 + 0x8c);
            iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar7), 0);
            if (iVar2 < 8) {
              F_009f9db0((undefined *)((int)this + 0x418) GEN_EDX_ARG,*piVar9,0,1);
            }
          }
          F_006ab8b0((int)this + 0x3ec);
          uVar8 = F_009f3260((undefined *)((int)this + 0x418) GEN_EDX_ARG);
          if (uVar8 != 0) {
            F_0061ef50(*(undefined * PTR32 *)((int)this + 0x78) GEN_EDX_ARG,0,(undefined *)((int)this + 0x418));
          }
          *(uint *)((int)this + 0x2c0) = *(uint *)((int)this + 0x2c0) & 0xfffffffd;
          *(uint *)((int)this + 0x2c4) = *(uint *)((int)this + 0x2c4) | 2;
        }
      }
      if (*(int *)((int)this + 0x40c) != 0) {
        piVar9 = ((int *)GEN_TOP((*(int *)((int)this + 0x414) + 0x88)));
        iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar9), 0);
        if (iVar2 == 2) {
          piVar9 = ((int *)GEN_TOP((*(int *)((int)this + 0x414) + 0x8c)));
          iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar9), 0);
          if (iVar2 < 8) {
            uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 200))(this GEN_EDX_ARG);
            pvVar1 = (undefined *)((uint)(uVar8 == 1) * 0x88 + 0x418 + (int)this);
            F_009f9db0(pvVar1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x414),1,0);
            F_0061ef50(*(undefined * PTR32 *)((int)this + 0x78) GEN_EDX_ARG,(uint)(uVar8 == 1),pvVar1);
          }
          else if (*(int *)((int)this + 0x414) != 0) {
            F_0050c620(*(int *)((int)this + 0x414),0,0);
            *(undefined4 *)((int)this + 0x414) = 0;
          }
          *(undefined4 *)((int)this + 0x40c) = 0;
          *(undefined4 *)((int)this + 0x410) = 0xffffffff;
        }
      }
      if ((*(uint *)((int)this + 0x2c0) >> 3 & 1) != 0) {
        piVar4 = *(int * PTR32 *)((int)this + 0x400);
        for (piVar9 = *(int * PTR32 *)((int)this + 0x3fc); piVar9 != piVar4; piVar9 = piVar9 + 1) {
          piVar7 = (int *)(*piVar9 + 0x88);
          iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar7), 0);
          if (iVar2 != 2) goto LAB_006ad664;
        }
        piVar4 = *(int * PTR32 *)((int)this + 0x400);
        for (piVar9 = *(int * PTR32 *)((int)this + 0x3fc); piVar9 != piVar4; piVar9 = piVar9 + 1) {
          piVar7 = (int *)(*piVar9 + 0x8c);
          iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar7), 0);
          if (iVar2 < 8) {
            F_009f9db0((undefined *)((int)this + 0x418) GEN_EDX_ARG,*piVar9,0,3);
          }
        }
        F_006ab8b0((int)this + 0x3fc);
        uVar8 = F_009f3260((undefined *)((int)this + 0x418) GEN_EDX_ARG);
        if (uVar8 != 0) {
          F_0061ef50(*(undefined * PTR32 *)((int)this + 0x78) GEN_EDX_ARG,0,(undefined *)((int)this + 0x418));
        }
        *(uint *)((int)this + 0x2c0) = *(uint *)((int)this + 0x2c0) & 0xfffffff7;
        *(uint *)((int)this + 0x2c4) = *(uint *)((int)this + 0x2c4) | 8;
      }
LAB_006ad664: ;
      F_00b820e0(((undefined4 *)(gen_frame + 0xc)) GEN_EDX_ARG);
      bVar6 = *(byte *)((int)this + 0x6fa);
      ((undefined4 *)(gen_frame + 0xc))[0] = 1;
      if ((bVar6 & 1) != 0) {
        piVar9 = ((int *)GEN_TOP((*(int *)((int)this + 0x710) + 0x88)));
        iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar9), 0);
        if (iVar2 == 2) {
          piVar9 = ((int *)GEN_TOP((*(int *)((int)this + 0x710) + 0x8c)));
          iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar9), 0);
          if (iVar2 < 8) {
            F_00b82290((undefined *)((int)this + 0x700) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0xc)),*(undefined4 *)((int)this + 0x710));
          }
          *(uint *)((int)this + 0x6f8) = *(uint *)((int)this + 0x6f8) & 0xfffeffff;
        }
      }
      uVar11 = *(uint *)((int)this + 0x74);
      uVar12 = 0;
      (*(uint *)(gen_frame + 0x24)) = uVar11;
      uVar8 = 1;
      if (uVar11 != 0) {
        do {
          if (((*(uint *)((int)this + 0x6f8) >> ((byte)uVar12 & 0x1f) & 1) != 0) &&
             (*((int *)GEN_TOP((*(int *)((int)this + 0x714) + uVar12 * 4))) != 0)) {
            piVar9 = ((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x714) + uVar12 * 4))) + 0x88)));
            iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar9), 0);
            if (iVar2 == 2) {
              piVar9 = ((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x714) + uVar12 * 4))) + 0x8c)));
              iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar9), 0);
              if (iVar2 < 8) {
                iVar2 = *(int *)((int)this + 0x714);
                ((uint *)(gen_frame + 0x14))[0] = uVar12;
                F_00b82330((undefined *)((int)this + 0x700) GEN_EDX_ARG,((undefined4 *)(gen_frame + 0xc)),
                             *(undefined4 *)(iVar2 + uVar12 * 4));
              }
              *(uint *)((int)this + 0x6f8) =
                   ~uVar8 & *(uint *)((int)this + 0x6f8) | 0 << ((byte)uVar12 & 0x1f);
              uVar11 = (*(uint *)(gen_frame + 0x24));
            }
          }
          uVar12 = uVar12 + 1;
          uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
        } while (uVar12 < uVar11);
      }
    }
    piVar9 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x6d4)));
    if (piVar9 != *(int * PTR32 *)((int)this + 0x6d4)) {
      do {
        iVar5 = piVar9[0x10];
        (*(uint *)(gen_frame + 0x24)) = iVar5;
        piVar4 = (int *)(iVar5 + 0x88);
        iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar4), 0);
        if (iVar2 == 2) {
          piVar4 = (int *)(iVar5 + 0x8c);
          iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar4), 0);
          if (iVar2 < 8) {
            puVar10 = (undefined4 *)F_004296a0(0x48,0,0xcb);
            *puVar10 = *(undefined4 *)((int)this + 0x6c4);
            puVar10[1] = *(undefined4 *)((int)this + 0x6c4);
            (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar10;
            puVar10[2] = *(undefined4 *)((int)this + 0x6c4);
            *(undefined2 *)(puVar10 + 0x11) = 0;
            if (puVar10 + 3 != (int *)0x0) {
              puVar10[3] = piVar9[3];
              puVar10[4] = piVar9[4];
              puVar10[5] = piVar9[5];
              puVar10[6] = piVar9[6];
              puVar10[7] = piVar9[7];
              puVar10[8] = piVar9[8];
              puVar10[0xe] = 0xf;
              puVar10[0xd] = 0;
              *(undefined1 *)(puVar10 + 9) = 0;
              F_004e54d0(puVar10 + 9 GEN_EDX_ARG,piVar9 + 9,0,0xffffffff);
              puVar10[0x10] = piVar9[0x10];
            }
            F_006b7f10((undefined *)((int)this + 0x6c0) GEN_EDX_ARG,((uint *)(gen_frame + 0x14)),(*(undefined4 * PTR32 *)(gen_frame + 0x28)),0);
            iVar2 = piVar9[8];
            if (((iVar2 == 3) || (iVar2 == 4)) || (iVar2 == 5)) {
              bVar6 = 1;
            }
            else {
              bVar6 = 0;
            }
            (*(uint *)(gen_frame + 0x20)) = (uint)bVar6;
            if (((iVar2 == 3) || (iVar2 == 4)) || (iVar2 == 5)) {
              bVar6 = 1;
            }
            else {
              bVar6 = 0;
            }
            (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = (undefined4 *)(uint)bVar6;
            uVar8 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 200))(this GEN_EDX_ARG);
            if (uVar8 != 1) {
              (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = (undefined4 *)0x0;
            }
            pvVar1 = (undefined *)((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x28))) * 0x88 + 0x418 + (int)this);
            F_009f9db0(pvVar1 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x20)),2);
            uVar8 = F_009f3260(pvVar1 GEN_EDX_ARG);
            if (uVar8 != 0) {
              F_0061ef50(*(undefined * PTR32 *)((int)this + 0x78) GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x28)),pvVar1);
            }
          }
          else if (iVar5 != 0) {
            F_0050c620(iVar5,0,0);
          }
          puVar10 = (undefined4 *)F_006b7c10((undefined *)((int)this + 0x6d0) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x1c)),piVar9);
          piVar9 = (int *)*puVar10;
        }
        else if (*(char *)((int)piVar9 + 0x45) == '\0') {
          piVar4 = (int *)piVar9[2];
          if (*(char *)((int)piVar4 + 0x45) == '\0') {
            cVar3 = *(char *)(*piVar4 + 0x45);
            piVar9 = piVar4;
            piVar4 = (int *)*piVar4;
            while (cVar3 == '\0') {
              cVar3 = *(char *)(*piVar4 + 0x45);
              piVar9 = piVar4;
              piVar4 = (int *)*piVar4;
            }
          }
          else {
            cVar3 = *(char *)(piVar9[1] + 0x45);
            piVar7 = (int *)piVar9[1];
            piVar4 = piVar9;
            while ((piVar9 = piVar7, cVar3 == '\0' && (piVar4 == (int *)piVar9[2]))) {
              cVar3 = *(char *)(piVar9[1] + 0x45);
              piVar7 = (int *)piVar9[1];
              piVar4 = piVar9;
            }
          }
        }
      } while (piVar9 != *(int * PTR32 *)((int)this + 0x6d4));
    }
  }
  return;
}

/* ref: Client::Graphics::Scene::Human::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_006ad970(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6ad970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined * pHVar4;
  
  piVar1 = *(int * PTR32 *)(this + 0x810);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD,this);
  }
  if (-1 < *(int *)(this + 0x7e4)) {
    F_00676850((undefined *)(REFG(int, 0x137128c) + 0x3d0) GEN_EDX_ARG,*(int *)(this + 0x7e4));
    *(undefined4 *)(this + 0x7e4) = 0xffffffff;
  }
  piVar1 = *(int * PTR32 *)(this + 0x7f8);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x7f8) = 0;
  }
  if (*(int *)(this + 0x7f4) != 0) {
    F_0050c620(*(int *)(this + 0x7f4),0,0);
    *(undefined4 *)(this + 0x7f4) = 0;
  }
  if (*(int *)(this + 0x7f0) != 0) {
    F_0050c620(*(int *)(this + 0x7f0),0,0);
    *(undefined4 *)(this + 0x7f0) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x7ec);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x7ec) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x7e8);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x7e8) = 0;
  }
  pHVar4 = this + 0x7bc;
  iVar3 = 10;
  do {
    if (*(int *)pHVar4 != 0) {
      F_0050c620(*(int *)pHVar4,0,0);
      *(int *)pHVar4 = 0;
    }
    pHVar4 = pHVar4 + 4;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  F_006acab0((undefined *)this GEN_EDX_ARG);
  uVar2 = 0;
  if (*(int *)(this + 0x818) != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,*(int *)(this + 0x818));
    *(undefined4 *)(this + 0x818) = 0;
  }
  return uVar2;
}

/* ref: Client::Graphics::Scene::Demihuman::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_006ada90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6ada90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined * pDVar4;
  
  piVar1 = *(int * PTR32 *)(this + 0x788);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD,this);
  }
  if (-1 < *(int *)(this + 0x77c)) {
    F_00676850((undefined *)(REFG(int, 0x137128c) + 0x3d0) GEN_EDX_ARG,*(int *)(this + 0x77c));
    *(undefined4 *)(this + 0x77c) = 0xffffffff;
  }
  piVar1 = *(int * PTR32 *)(this + 0x780);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x780) = 0;
  }
  pDVar4 = this + 0x768;
  iVar3 = 5;
  do {
    if (*(int *)pDVar4 != 0) {
      F_0050c620(*(int *)pDVar4,0,0);
      *(int *)pDVar4 = 0;
    }
    pDVar4 = pDVar4 + 4;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  F_006acab0((undefined *)this GEN_EDX_ARG);
  uVar2 = 0;
  if (*(int *)(this + 0x790) != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,*(int *)(this + 0x790));
    *(undefined4 *)(this + 0x790) = 0;
  }
  return uVar2;
}

/* ref: Client::Graphics::Scene::Weapon::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_006adb50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6adb50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x744);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 0x744) = 0;
  }
  if (*(int *)(this + 0x740) != 0) {
    F_0050c620(*(int *)(this + 0x740),0,0);
    *(undefined4 *)(this + 0x740) = 0;
  }
  uVar2 = F_006acab0((undefined *)this GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::Graphics::Scene::Monster::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_006adba0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6adba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (-1 < *(int *)(this + 0x740)) {
    F_00676850((undefined *)(REFG(int, 0x137128c) + 0x3d0) GEN_EDX_FWD,*(int *)(this + 0x740));
    *(undefined4 *)(this + 0x740) = 0xffffffff;
  }
  if (*(int *)(this + 0x73c) != 0) {
    F_0050c620(*(int *)(this + 0x73c),0,0);
    *(undefined4 *)(this + 0x73c) = 0;
  }
  uVar1 = F_006acab0((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::vf4 */
GEN_FRAME uint GEN_THISCALL F_006adc00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6adc00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined * this_00;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  uint uVar4;
  
  if (((*(int *)(this + 0x2c8) != 0) || (*(int *)(this + 0x2d4) != 0)) ||
     (*(int *)(this + 0x2d0) != 0)) {
    F_006a9000(this GEN_EDX_FWD);
  }
  F_006ad380(this GEN_EDX_ARG);
  if (*(int *)(this + 0x2c8) == 0) {
    F_006a0300(this GEN_EDX_ARG);
  }
  if (this[0x65] == (undefined1)0x2) {
    bVar2 = F_006930a0(this GEN_EDX_ARG);
    if (bVar2 == 0) {
      return CONCAT31(extraout_var,bVar2);
    }
    this[0x65] = (undefined1)0x3;
  }
  *(ushort *)(this + 0x70) = *(ushort *)(this + 0x70) & 0xfffd;
  *(ushort *)(this + 0x70) = *(ushort *)(this + 0x70) & 0xfffe;
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x144))(this GEN_EDX_ARG);
  uVar3 = *(uint *)(this + 0x74);
  iVar1 = *(int *)(this + 0x80);
  uVar4 = 0;
  (*(uint *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4)), 1, 3),(byte)this[0x70] >> 2 & (byte)this[100]) & 0xffffff01;
  if (uVar3 != 0) {
    do {
      this_00 = *(undefined * PTR32 *)(iVar1 + uVar4 * 4);
      if (this_00 != (undefined *)0x0) {
        F_009bc190(this_00 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x4)));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  F_006a0520(this GEN_EDX_ARG);
  uVar3 = *(uint *)(this + 0x71c) >> 0xc;
  if (((uVar3 & 1) != 0) && (*(undefined * PTR32 *)(this + 0xe4) != (undefined *)0x0)) {
    F_00b84310(*(undefined * PTR32 *)(this + 0xe4) GEN_EDX_ARG,*(int *)(this + 0x78) + 0x10);
    uVar3 = F_00b83a70(*(undefined * PTR32 *)(this + 0xe4) GEN_EDX_ARG);
  }
  return uVar3;
}

/* ref: Client::Graphics::Scene::Human::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_006add00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6add00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_006a9300(this GEN_EDX_FWD);
  F_006adc00((undefined *)this GEN_EDX_ARG);
  if ((*(int *)(this + 0x2c8) == 0) && (*(int *)(this + 0x818) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,*(int *)(this + 0x818));
    *(undefined4 *)(this + 0x818) = 0;
  }
  if (*(int *)(this + 0x7e4) < 0) {
    uVar1 = F_006767d0((undefined *)(REFG(int, 0x137128c) + 0x3d0) GEN_EDX_ARG);
    *(uint *)(this + 0x7e4) = uVar1;
    if ((int)uVar1 < 0) goto LAB_006add92;
  }
  uVar1 = F_00678120((undefined *)(REFG(int, 0x137128c) + 0x3d0) GEN_EDX_ARG,*(undefined4 *)(this + 0x7e4),this + 0x30);
  if (-1 < (int)uVar1) {
    this[100] = (undefined1)((uVar1 != 0) << 4 | (byte)this[100] & 0xef);
  }
LAB_006add92: ;
  F_006a2e10(this GEN_EDX_ARG);
  uVar1 = F_006a1430(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::Graphics::Scene::Demihuman::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_006addb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6addb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  F_006a9440(this GEN_EDX_FWD);
  F_006adc00((undefined *)this GEN_EDX_ARG);
  if ((*(int *)(this + 0x2c8) == 0) && (*(int *)(this + 0x790) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,*(int *)(this + 0x790));
    *(undefined4 *)(this + 0x790) = 0;
  }
  if (*(int *)(this + 0x77c) < 0) {
    uVar2 = F_006767d0((undefined *)(REFG(int, 0x137128c) + 0x3d0) GEN_EDX_ARG);
    *(uint *)(this + 0x77c) = uVar2;
    if ((int)uVar2 < 0) goto LAB_006ade42;
  }
  uVar2 = F_00678120((undefined *)(REFG(int, 0x137128c) + 0x3d0) GEN_EDX_ARG,*(undefined4 *)(this + 0x77c),this + 0x30);
  if (-1 < (int)uVar2) {
    this[100] = (undefined1)((uVar2 != 0) << 4 | (byte)this[100] & 0xef);
  }
LAB_006ade42: ;
  uVar2 = *(uint *)(this + 0x78c);
  if ((uVar2 != 0) && (piVar1 = *(int * PTR32 *)(this + 0x788), piVar1 != (int *)0x0)) {
    if ((uVar2 & 1) != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,this);
      *(uint *)(this + 0x78c) = *(uint *)(this + 0x78c) & 0xfffffffe;
      return uVar2;
    }
    uVar2 = uVar2 >> 1;
    if ((uVar2 & 1) != 0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG,this);
      *(uint *)(this + 0x78c) = *(uint *)(this + 0x78c) & 0xfffffffd;
    }
  }
  return uVar2;
}

/* ref: Client::Graphics::Scene::Monster::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_006ade90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6ade90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 MVar1;
  uint uVar2;
  
  F_006adc00((undefined *)this GEN_EDX_FWD);
  if (*(int *)(this + 0x740) < 0) {
    uVar2 = F_006767d0((undefined *)(REFG(int, 0x137128c) + 0x3d0) GEN_EDX_ARG);
    *(uint *)(this + 0x740) = uVar2;
    if ((int)uVar2 < 0) {
      return uVar2;
    }
  }
  uVar2 = F_00678120((undefined *)(REFG(int, 0x137128c) + 0x3d0) GEN_EDX_ARG,*(undefined4 *)(this + 0x740),this + 0x30);
  if (-1 < (int)uVar2) {
    MVar1 = (undefined1)((uVar2 != 0) << 4 | (byte)this[100] & 0xef);
    uVar2 = CONCAT31((int3)(uVar2 >> 8),MVar1);
    this[100] = MVar1;
  }
  return uVar2;
}

/* ref: FUN_006adef0 */
GEN_FRAME uint GEN_THISCALL F_006adef0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6adef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  undefined * this_00;
  int local_8;
  
  F_00690510(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[50])REFP(0x10b2bf4));
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined2 *)((int)this + 100) = 0;
  *(undefined2 *)((int)this + 0x66) = 0xffff;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) | 0xb;
  *(byte *)((int)this + 100) = *(byte *)((int)this + 100) & 0xef;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b32ec));
  *(undefined2 *)((int)this + 0x72) = 3;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[10])REFP(0x10b2b68));
  F_0062c700((int)this + 0x90 GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x90) = (*(undefined * PTR32 (*)[5])REFP(0x10b32bc));
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
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined1 *)((int)this + 0x118) = 0xfe;
  *(undefined4 *)((int)this + 0x11a) = 0xffffffff;
  *(undefined4 *)((int)this + 0x120) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x120), REFG(float, 0x1375ac0));
  *(undefined4 *)((int)this + 0x124) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x124), REFG(float, 0x1375ac4));
  *(undefined4 *)((int)this + 0x128) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x128), REFG(float, 0x1375ac8));
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x130), REFG(float, 0x1375ac0));
  *(undefined4 *)((int)this + 0x134) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x134), REFG(float, 0x1375ac4));
  *(undefined4 *)((int)this + 0x138) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x138), REFG(float, 0x1375ac8));
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x140), REFG(float, 0x1375ac0));
  *(undefined4 *)((int)this + 0x144) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x144), REFG(float, 0x1375ac4));
  *(undefined4 *)((int)this + 0x148) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x148), REFG(float, 0x1375ac8));
  *(undefined4 *)((int)this + 0x150) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x150), REFG(float, 0x1375ac0));
  *(undefined4 *)((int)this + 0x154) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x154), REFG(float, 0x1375ac4));
  *(undefined4 *)((int)this + 0x158) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x158), REFG(float, 0x1375ac8));
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x270) = REFG(undefined4, 0x1302e44);
  *(undefined4 *)((int)this + 0x274) = REFG(undefined4, 0x1302e48);
  *(undefined4 *)((int)this + 0x278) = REFG(undefined4, 0x1302e4c);
  *(undefined4 *)((int)this + 0x27c) = REFG(undefined4, 0x1302e50);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)((int)this + 0x280) = REFG(undefined4, 0x1302e54);
  *(undefined4 *)((int)this + 0x284) = REFG(undefined4, 0x1302e58);
  *(undefined4 *)((int)this + 0x288) = REFG(undefined4, 0x1302e5c);
  uVar2 = REFG(undefined4, 0x1302e60);
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x28c) = uVar2;
  *(undefined4 *)((int)this + 0x290) = uVar1;
  *(undefined4 *)((int)this + 0x294) = uVar1;
  *(undefined4 *)((int)this + 0x29c) = 0;
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2ac) = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094884)));
  *(undefined4 *)((int)this + 0x2b0) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x2b0), REFG(float, 0x1094884));
  *(undefined4 *)((int)this + 0x2b4) = uVar1;
  *(undefined4 *)((int)this + 0x2b8) = uVar1;
  *(undefined4 *)((int)this + 700) = uVar1;
  *(undefined4 *)((int)this + 0x2c8) = 0;
  *(undefined4 *)((int)this + 0x2cc) = 0;
  *(undefined4 *)((int)this + 0x2d0) = 0;
  *(undefined4 *)((int)this + 0x2d4) = 0;
  *(undefined4 *)((int)this + 0x2d8) = 0;
  *(undefined4 *)((int)this + 0x3dc) = 0;
  *(undefined4 *)((int)this + 0x3e0) = 0;
  *(undefined4 *)((int)this + 0x3e4) = 0;
  *(undefined4 *)((int)this + 0x3ec) = 0;
  *(undefined4 *)((int)this + 0x3f0) = 0;
  *(undefined4 *)((int)this + 0x3f4) = 0;
  *(undefined4 *)((int)this + 0x3fc) = 0;
  *(undefined4 *)((int)this + 0x400) = 0;
  *(undefined4 *)((int)this + 0x404) = 0;
  *(undefined4 *)((int)this + 0x414) = 0;
  this_00 = (undefined *)((int)this + 0x418);
  local_8 = 4;
  do {
    F_009f7db0(this_00 GEN_EDX_ARG);
    this_00 = (undefined *)((int)this_00 + 0x88);
    local_8 = local_8 - 1;
  } while (-1 < local_8);
  *(undefined4 *)((int)this + 0x6c8) = 0;
  uVar3 = F_004296a0(0x48,0,0xcb);
  *(uint *)((int)this + 0x6c4) = uVar3;
  *(uint *)uVar3 = uVar3;
  *((int *)GEN_TOP((*(int *)((int)this + 0x6c4) + 4))) = *(int *)((int)this + 0x6c4);
  *((int *)GEN_TOP((*(int *)((int)this + 0x6c4) + 8))) = *(int *)((int)this + 0x6c4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x6c4) + 0x44))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x6c4) + 0x45))) = 1;
  *(undefined4 *)((int)this + 0x6d8) = 0;
  uVar3 = F_004296a0(0x48,0,0xcb);
  *(uint *)((int)this + 0x6d4) = uVar3;
  *(uint *)uVar3 = uVar3;
  *((int *)GEN_TOP((*(int *)((int)this + 0x6d4) + 4))) = *(int *)((int)this + 0x6d4);
  *((int *)GEN_TOP((*(int *)((int)this + 0x6d4) + 8))) = *(int *)((int)this + 0x6d4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x6d4) + 0x44))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x6d4) + 0x45))) = 1;
  *(undefined4 *)((int)this + 0x6e0) = 0;
  *(undefined4 *)((int)this + 0x6e4) = 0xdeadc0de;
  *(undefined4 *)((int)this + 0x6e8) = 0xdeadc0de;
  *(undefined1 *)((int)this + 0x6ec) = 1;
  *(undefined4 *)((int)this + 0x6f0) = 0;
  *(undefined4 *)((int)this + 0x6f4) = 0;
  *(undefined4 *)((int)this + 0x6f8) = 0;
  *(undefined4 *)((int)this + 0x6fc) = 0;
  F_00b82420((int)this + 0x700 GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x710) = 0;
  *(undefined4 *)((int)this + 0x714) = 0;
  F_00b89bb0((int)this + 0x718 GEN_EDX_ARG);
  *(undefined1 *)((int)this + 0x720) = 1;
  *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) & 0xfffe;
  *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) & 0xfffd;
  *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) | 4;
  *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) & 0xfff7;
  *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) & 0xffef;
  *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) & 0xffdf;
  *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) & 0xffbf;
  *(ushort *)((int)this + 0x70) = *(ushort *)((int)this + 0x70) & 0xff7f;
  *(gen_code32 *)((int)this + 0xe8) = ((code *)REFP(0x6b0490));
  *(undefined * PTR32 *)((int)this + 0xec) = this;
  *(gen_code32 *)((int)this + 0xf0) = ((code *)REFP(0x6a6580));
  *(gen_code32 *)((int)this + 0xf8) = ((code *)REFP(0x6b04b0));
  *(undefined * PTR32 *)((int)this + 0xfc) = this;
  *(gen_code32 *)((int)this + 0x100) = ((code *)REFP(0x691f90));
  *(gen_code32 *)((int)this + 0x108) = ((code *)REFP(0x6b04d0));
  *(undefined * PTR32 *)((int)this + 0x10c) = this;
  *(gen_code32 *)((int)this + 0x110) = ((code *)REFP(0x6a66c0));
  puVar4 = (undefined4 *)((int)this + 0x170);
  iVar6 = 0x10;
  do {
    iVar5 = 4;
    do {
      puVar4[0x5b] = 0;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
    iVar6 = iVar6 - 1;
  } while (iVar6 != 0);
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x410) = 0xffffffff;
  *(undefined4 *)((int)this + 0x40c) = 0;
  *(undefined4 *)((int)this + 0x2c0) = 0;
  *(undefined4 *)((int)this + 0x2c4) = 0;
  return (uint)this;
}

/* ref: FUN_006ae3e0 */
GEN_NOFRAME uint GEN_THISCALL F_006ae3e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6ae3e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006adef0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b345c));
  *(undefined4 *)((int)this + 0x74c) = 0;
  *(undefined4 *)((int)this + 0x778) = 0;
  *(undefined4 *)((int)this + 0x77c) = 0;
  *(undefined4 *)((int)this + 0x7e4) = 0xffffffff;
  *(undefined4 *)((int)this + 0x7e8) = 0;
  *(undefined4 *)((int)this + 0x7ec) = 0;
  *(undefined4 *)((int)this + 0x7f0) = 0;
  *(undefined4 *)((int)this + 0x7f4) = 0;
  *(undefined4 *)((int)this + 0x7f8) = 0;
  *(undefined4 *)((int)this + 0x7fc) = 0;
  *(undefined4 *)((int)this + 0x800) = 0;
  *(undefined4 *)((int)this + 0x804) = 0;
  *(undefined4 *)((int)this + 0x808) = 0;
  *(undefined4 *)((int)this + 0x80c) = 0;
  *(undefined4 *)((int)this + 0x810) = 0;
  *(undefined4 *)((int)this + 0x818) = 0;
  *(undefined4 *)((int)this + 0x730) = 0;
  *(undefined4 *)((int)this + 0x734) = 0;
  *(undefined4 *)((int)this + 0x738) = 0;
  *(undefined4 *)((int)this + 0x73c) = 0;
  *(undefined4 *)((int)this + 0x740) = 0;
  *(undefined4 *)((int)this + 0x744) = 0;
  *(undefined2 *)((int)this + 0x748) = 0;
  *(undefined4 *)((int)this + 0x750) = 0;
  *(undefined4 *)((int)this + 0x754) = 0;
  *(undefined4 *)((int)this + 0x758) = 0;
  *(undefined4 *)((int)this + 0x75c) = 0;
  *(undefined4 *)((int)this + 0x760) = 0;
  *(undefined4 *)((int)this + 0x764) = 0;
  *(undefined4 *)((int)this + 0x768) = 0;
  *(undefined4 *)((int)this + 0x76c) = 0;
  *(undefined4 *)((int)this + 0x770) = 0;
  *(undefined4 *)((int)this + 0x774) = 0;
  *(undefined4 *)((int)this + 0x780) = 0x3ff0000;
  *(undefined4 *)((int)this + 0x786) = 0x3ff0000;
  *(undefined1 *)((int)this + 0x784) = 0;
  *(undefined1 *)((int)this + 0x78a) = 0;
  *(undefined4 *)((int)this + 0x78c) = 0x3ff0000;
  *(undefined1 *)((int)this + 0x790) = 0;
  *(undefined4 *)((int)this + 0x792) = 0x3ff0000;
  *(undefined1 *)((int)this + 0x796) = 0;
  *(undefined4 *)((int)this + 0x798) = 0x3ff0000;
  *(undefined1 *)((int)this + 0x79c) = 0;
  *(undefined4 *)((int)this + 0x79e) = 0x3ff0000;
  *(undefined1 *)((int)this + 0x7a2) = 0;
  *(undefined4 *)((int)this + 0x7a4) = 0x3ff0000;
  *(undefined1 *)((int)this + 0x7a8) = 0;
  *(undefined4 *)((int)this + 0x7aa) = 0x3ff0000;
  *(undefined1 *)((int)this + 0x7ae) = 0;
  *(undefined4 *)((int)this + 0x7b0) = 0x3ff0000;
  *(undefined1 *)((int)this + 0x7b4) = 0;
  *(undefined4 *)((int)this + 0x7b6) = 0x3ff0000;
  *(undefined1 *)((int)this + 0x7ba) = 0;
  *(undefined4 *)((int)this + 0x7bc) = 0;
  *(undefined4 *)((int)this + 0x7c0) = 0;
  *(undefined4 *)((int)this + 0x7c4) = 0;
  *(undefined4 *)((int)this + 0x7c8) = 0;
  *(undefined4 *)((int)this + 0x7cc) = 0;
  *(undefined4 *)((int)this + 2000) = 0;
  *(undefined4 *)((int)this + 0x7d4) = 0;
  *(undefined4 *)((int)this + 0x7d8) = 0;
  *(undefined4 *)((int)this + 0x7dc) = 0;
  *(undefined4 *)((int)this + 0x7e0) = 0;
  *(undefined4 *)((int)this + 0x814) = 0;
  return (uint)this;
}

/* ref: FUN_006ae5b0 */
GEN_NOFRAME uint GEN_THISCALL F_006ae5b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6ae5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006adef0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b35cc));
  *(undefined4 *)((int)this + 0x730) = 0;
  *(undefined2 *)((int)this + 0x748) = 0;
  *(undefined4 *)((int)this + 0x77c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x780) = 0;
  *(undefined4 *)((int)this + 0x784) = 0;
  *(undefined4 *)((int)this + 0x788) = 0;
  *(undefined4 *)((int)this + 0x790) = 0;
  *(undefined4 *)((int)this + 0x734) = 0;
  *(undefined4 *)((int)this + 0x738) = 0;
  *(undefined4 *)((int)this + 0x73c) = 0;
  *(undefined4 *)((int)this + 0x740) = 0;
  *(undefined4 *)((int)this + 0x744) = 0;
  *(undefined4 *)((int)this + 0x74a) = 0x3ff0000;
  *(undefined4 *)((int)this + 0x750) = 0x3ff0000;
  *(undefined1 *)((int)this + 0x74e) = 0;
  *(undefined1 *)((int)this + 0x754) = 0;
  *(undefined4 *)((int)this + 0x756) = 0x3ff0000;
  *(undefined1 *)((int)this + 0x75a) = 0;
  *(undefined4 *)((int)this + 0x75c) = 0x3ff0000;
  *(undefined1 *)((int)this + 0x760) = 0;
  *(undefined4 *)((int)this + 0x762) = 0x3ff0000;
  *(undefined1 *)((int)this + 0x766) = 0;
  *(undefined4 *)((int)this + 0x768) = 0;
  *(undefined4 *)((int)this + 0x76c) = 0;
  *(undefined4 *)((int)this + 0x770) = 0;
  *(undefined4 *)((int)this + 0x774) = 0;
  *(undefined4 *)((int)this + 0x778) = 0;
  *(undefined4 *)((int)this + 0x78c) = 0;
  return (uint)this;
}

/* ref: FUN_006ae690 */
GEN_NOFRAME uint GEN_THISCALL F_006ae690(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6ae690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006adef0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x730) = 0;
  *(undefined4 *)((int)this + 0x740) = 0;
  *(undefined4 *)((int)this + 0x744) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b373c));
  *(undefined4 *)((int)this + 0x734) = 0;
  *(undefined2 *)((int)this + 0x738) = 0xffff;
  *(undefined4 *)((int)this + 0x748) = 0;
  return (uint)this;
}

/* ref: FUN_006ae6d0 */
GEN_NOFRAME uint GEN_THISCALL F_006ae6d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6ae6d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006adef0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x730) = 0;
  *(undefined4 *)((int)this + 0x73c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b38ac));
  *(undefined2 *)((int)this + 0x734) = 0;
  *(undefined4 *)((int)this + 0x740) = 0xffffffff;
  return (uint)this;
}

/* ref: FUN_006ae710 */
GEN_FRAME uint GEN_THISCALL F_006ae710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6ae710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *(int *)(in_ecx + 0xb4);
}

/* ref: FUN_006ae730 */
GEN_FRAME uint GEN_THISCALL F_006ae730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6ae730u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((param_2 * 0x20 + *(int *)(in_ecx + 0xb4))));
}

/* ref: FUN_006ae750 */
GEN_NOFRAME byte GEN_THISCALL F_006ae750(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6ae750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  short * psVar2;
  uint uVar3;
  
  uVar3 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa8) + 4))) + 0x1e +
                         *(int *)((int)this + 0xa8))));
  uVar1 = 0;
  if (uVar3 != 0) {
    psVar2 = ((short *)GEN_TOP((*(int *)((int)this + 0xb8) + 2)));
    do {
      if (*psVar2 != 0) {
        return 1;
      }
      uVar1 = uVar1 + 1;
      psVar2 = psVar2 + 0x1e;
    } while (uVar1 < uVar3);
  }
  return 0;
}

/* ref: FUN_006ae790 */
GEN_NOFRAME byte GEN_THISCALL F_006ae790(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6ae790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  short * psVar2;
  uint uVar3;
  
  uVar3 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa8) + 4))) + 0x1e +
                         *(int *)((int)this + 0xa8))));
  uVar1 = 0;
  if (uVar3 != 0) {
    psVar2 = ((short *)GEN_TOP((*(int *)((int)this + 0xb8) + 0xe)));
    do {
      if (*psVar2 != 0) {
        return 1;
      }
      uVar1 = uVar1 + 1;
      psVar2 = psVar2 + 0x1e;
    } while (uVar1 < uVar3);
  }
  return 0;
}

/* ref: FUN_006ae8d0 */
GEN_FRAME byte F_006ae8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ae8d0u, gen_a0, gen_a1, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  return *param_1 == *param_2;
}

/* ref: FUN_006ae920 */
GEN_FRAME uint F_006ae920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ae920u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 / (float10)*param_3);
  param_1[1] = (float)((float10)param_2[1] / (float10)param_3[1]);
  return (uint)param_1;
}

/* ref: FUN_006ae940 */
GEN_FRAME uint F_006ae940(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x6ae940u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  *param_1 = (float)((float10)*param_2 - (float10)param_3);
  param_1[1] = (float)((float10)param_2[1] - (float10)param_3);
  return (uint)param_1;
}

