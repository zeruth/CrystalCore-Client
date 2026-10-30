#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_005dcf40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005dcf40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5dcf40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  uVar1 = F_005dc190(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0x38))),(int)this + 0x50);
  if (*((char *)GEN_TOP(((int)this + 0x35))) != '\0') {
    uVar1 = F_005dc190(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x3c))),(int)this + 0x60);
  }
  if (*((char *)GEN_TOP(((int)this + 0x36))) != '\0') {
    uVar1 = F_005dc190(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x40))),(int)this + 0x70);
  }
  return uVar1;
}

/* ref: FUN_005dcf90 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005dcf90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5dcf90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  undefined1 * puVar2;
  uint uVar3;
  uint _Size;
  
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 7;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 1;
  bVar1 = *((byte *)GEN_TOP((param_1 + 8)));
  *((byte *)GEN_TOP(((int)this + 0x21))) = bVar1;
  if (8 < bVar1) {
    *((undefined1 *)GEN_TOP(((int)this + 0x21))) = 8;
  }
  bVar1 = 0;
  uVar3 = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  if (*((char *)GEN_TOP(((int)this + 0x21))) != '\0') {
    do {
      puVar2 = ((undefined1 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + uVar3 * 2 + param_1)));
      (*(int *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x0)), 1, 3),*puVar2);
      _Size = (byte)puVar2[1] / 10;
      if (_Size < 0xb) {
        if (_Size != 0) goto LAB_005dd005;
      }
      else {
        _Size = 10;
LAB_005dd005: ;
        F_00c48350(((undefined *)GEN_TOP(((*(int *)(gen_frame + 0x4)) + 0x28 + (int)this))),(*(int *)(gen_frame + 0x0)),_Size);
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + _Size;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *((byte *)GEN_TOP(((int)this + 0x21))));
    bVar1 = (byte)(*(int *)(gen_frame + 0x4));
  }
  *((byte *)GEN_TOP(((int)this + 0x22))) = bVar1;
  return bVar1;
}

/* ref: FUN_005dd040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005dd040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5dd040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10a3c58));
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x40))), REFG(float, 0x1302df0));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x44))), REFG(float, 0x1302df4));
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x48))), REFG(float, 0x1302df8));
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = REFG(undefined4, 0x1302e00);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = REFG(undefined4, 0x1302e04);
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = REFG(undefined4, 0x1302e08);
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = REFG(undefined4, 0x1302e0c);
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x60))), REFG(float, 0x1302e10));
  *((undefined4 *)GEN_TOP(((int)this + 100))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 100))), REFG(float, 0x1302e14));
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x68))), REFG(float, 0x1302e18));
  F_005d6e90(this GEN_EDX_FWD);
  return ((uint)(uint)(this));
}

/* ref: FUN_005dd120 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005dd120(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float param_5, float gen_a4))
{
  GEN_ENTER(0x5dd120u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float param_5 = (float)gen_a4;)
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
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005dd1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5dd1f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((byte *)GEN_TOP(((int)this + 0x20))) = *((byte *)GEN_TOP(((int)this + 0x20))) | 7;
  *((uint *)GEN_TOP(((int)this + 0x24))) = *((uint *)GEN_TOP(((int)this + 0x24))) & 0xfffffffd | 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
  *((undefined1 *)GEN_TOP(((int)this + 0x2a))) = 0xff;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[74])REFP(0x10a3c84));
  *((byte *)GEN_TOP(((int)this + 0x29))) = *((byte *)GEN_TOP(((int)this + 0x29))) & 0xf8 | 8;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((byte *)GEN_TOP(((int)this + 0x2b))) = *((byte *)GEN_TOP(((int)this + 0x2b))) & 0xfa | 0x7a;
  *((undefined2 *)GEN_TOP(((int)this + 0x3a))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x36))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x40))), REFG(float, 0x1302df0));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x44))), REFG(float, 0x1302df4));
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x48))), REFG(float, 0x1302df8));
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = REFG(undefined4, 0x1302e00);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = REFG(undefined4, 0x1302e04);
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = REFG(undefined4, 0x1302e08);
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = REFG(undefined4, 0x1302e0c);
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x60))), REFG(float, 0x1302e10));
  *((undefined4 *)GEN_TOP(((int)this + 100))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 100))), REFG(float, 0x1302e14));
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x68))), REFG(float, 0x1302e18));
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005dd2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5dd2d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  uint uVar1;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x100))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  if (uVar1 != 0) {
    F_00a1fa60(this + 0x10,uVar1,param_1);
  }
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x30)));
  *(uint *)(this + 0x70) = uVar1;
  *(undefined4 *)(this + 0x74) = *((undefined4 *)GEN_TOP((param_1 + 0x30)));
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf23 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005dd350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5dd350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x11c))))(this GEN_EDX_FWD);
  if ((uVar1 == 0xffffffff) || (*((int *)GEN_TOP((*(int *)(this + 0x30) + 0xf0))) == 0)) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x11c))))(this GEN_EDX_ARG);
    if (uVar1 != 0xffffffff) {
      return *((uint *)GEN_TOP((*(int *)(this + 0x30) + 0xec)));
    }
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf19 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005dd390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x5dd390u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x11c))))(this GEN_EDX_FWD);
  if (uVar2 != 0xffffffff) {
    uVar2 = *(uint *)(this + 0x30);
    piVar1 = *((int * PTR32 *)GEN_TOP((uVar2 + 0xf0)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))
                        (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005dd3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x5dd3c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x11c))))(this GEN_EDX_FWD);
  if (uVar2 != 0xffffffff) {
    uVar2 = *(uint *)(this + 0x30);
    piVar1 = *((int * PTR32 *)GEN_TOP((uVar2 + 0xf0)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x50))))
                        (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf22 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005dd3f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x5dd3f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  char cVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x11c))))(this GEN_EDX_FWD);
  if (uVar3 != 0xffffffff) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x11c))))(this GEN_EDX_ARG);
    if ((uVar3 != 0xffffffff) &&
       (piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x30) + 0xf0))), piVar2 != ((int *)GEN_TOP(0x0)))) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x58))))
                        (piVar2 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
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
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005dd450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5dd450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x11c))))(this GEN_EDX_FWD);
  if ((uVar2 != 0xffffffff) &&
     (piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x30) + 0xf0))), piVar1 != ((int *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x104))))(piVar1 GEN_EDX_ARG,param_1);
    return param_1;
  }
  F_005d9d70((undefined *)this GEN_EDX_ARG,param_1);
  return param_1;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf66 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005dd4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5dd4a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x90, 0);
  uint uVar1;
  int * piVar2;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x11c))))(this GEN_EDX_FWD);
  if ((uVar1 == 0xffffffff) ||
     (piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x30) + 0xf0))), piVar2 == ((int *)GEN_TOP(0x0)))) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_ARG)));
    if ((piVar2 == ((int *)GEN_TOP(0x0))) || (*((char *)GEN_TOP(((int)piVar2 + 0x65))) != '\x03')) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10c))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)));
      F_00a1cb90(&(*(undefined4 *)(gen_frame + 0x0)),uVar1);
      *param_1 = (*(undefined4 *)(gen_frame + 0x0));
      param_1[1] = (*(undefined4 *)(gen_frame + 0x4));
      param_1[2] = (*(undefined4 *)(gen_frame + 0x8));
      param_1[4] = (*(undefined4 *)(gen_frame + 0x10));
      param_1[5] = (*(undefined4 *)(gen_frame + 0x14));
      param_1[6] = (*(undefined4 *)(gen_frame + 0x18));
    }
    else {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x30))))(piVar2 GEN_EDX_ARG,param_1);
    }
  }
  else {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x108))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_005dd590 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005dd590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5dd590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005dd1f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[74])REFP(0x10a3db4));
  return (uint)this;
}

/* ref: FUN_005dd5b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005dd5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5dd5b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005dd1f0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[74])REFP(0x10a3ee4));
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::BattleNpcLayoutInstance::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005dd5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5dd5d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  undefined4 uVar1;
  uint uVar2;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x100))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  if (uVar2 != 0) {
    F_00a1fa60(this + 0x10,uVar2,param_1);
  }
  uVar2 = *((uint *)GEN_TOP((param_1 + 0x30)));
  *(uint *)(this + 0x70) = uVar2;
  *(undefined4 *)(this + 0x74) = *((undefined4 *)GEN_TOP((param_1 + 0x30)));
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0x4c)));
  *(undefined4 *)(this + 0x74) = uVar1;
  if (*(undefined * PTR32 *)(this + 0x30) != ((undefined *)GEN_TOP(0x0))) {
    uVar2 = F_00a607e0(*(undefined * PTR32 *)(this + 0x30) GEN_EDX_ARG,0,uVar1,2);
  }
  return uVar2;
}

/* ref: FUN_005dd660 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005dd660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5dd660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((byte *)GEN_TOP(((int)this + 0x20))) = *((byte *)GEN_TOP(((int)this + 0x20))) | 7;
  *((uint *)GEN_TOP(((int)this + 0x24))) = *((uint *)GEN_TOP(((int)this + 0x24))) & 0xfffffffd | 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
  *((undefined1 *)GEN_TOP(((int)this + 0x2a))) = 0xff;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10a4014));
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((byte *)GEN_TOP(((int)this + 0x29))) = *((byte *)GEN_TOP(((int)this + 0x29))) & 0xf8 | 8;
  *((byte *)GEN_TOP(((int)this + 0x2b))) = *((byte *)GEN_TOP(((int)this + 0x2b))) & 0xfa | 0x7a;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x42))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x46))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x50))), REFG(float, 0x1302df0));
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x54))), REFG(float, 0x1302df4));
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x58))), REFG(float, 0x1302df8));
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = REFG(undefined4, 0x1302e00);
  *((undefined4 *)GEN_TOP(((int)this + 100))) = REFG(undefined4, 0x1302e04);
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = REFG(undefined4, 0x1302e08);
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = REFG(undefined4, 0x1302e0c);
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x70))), REFG(float, 0x1302e10));
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x74))), REFG(float, 0x1302e14));
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x78))), REFG(float, 0x1302e18));
  return 0;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005dd750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5dd750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  uint uVar1;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x100))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  if (uVar1 != 0) {
    F_00a1fa60(this + 0x10,uVar1,param_1);
    uVar1 = *((uint *)GEN_TOP((param_1 + 0x30)));
    *(uint *)(this + 0x30) = uVar1;
    return uVar1;
  }
  *(undefined4 *)(this + 0x30) = *((undefined4 *)GEN_TOP((param_1 + 0x30)));
  return 0;
}

/* ref: FUN_005dd7e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005dd7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5dd7e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x38))) != -1) {
    uVar1 = F_00a1b870(*((undefined1 *)GEN_TOP(((int)this + 0x11))),*((int *)GEN_TOP(((int)this + 0x38))));
    return uVar1;
  }
  return 0;
}

/* ref: FUN_005dd810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005dd810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5dd810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x38))) != -1) {
    uVar1 = F_00a1b870(*((undefined1 *)GEN_TOP(((int)this + 0x11))),*((int *)GEN_TOP(((int)this + 0x38))));
    if ((uVar1 != 0) && (*((int *)GEN_TOP((uVar1 + 0x7c))) == 0)) {
      return *((uint *)GEN_TOP((uVar1 + 0xf0)));
    }
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf23 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005dd850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5dd850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if ((((*(int *)(this + 0x38) != -1) &&
       (uVar1 = F_00a1b870(this[0x11],*(int *)(this + 0x38)), uVar1 != 0)) &&
      (*((int *)GEN_TOP((uVar1 + 0x7c))) == 0)) && (*((int *)GEN_TOP((uVar1 + 0xf0))) != 0)) {
    return 0;
  }
  if (((*(int *)(this + 0x38) != -1) &&
      (uVar1 = F_00a1b870(this[0x11],*(int *)(this + 0x38)), uVar1 != 0)) &&
     (*((int *)GEN_TOP((uVar1 + 0x7c))) == 0)) {
    return *((uint *)GEN_TOP((uVar1 + 0xec)));
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf53 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005dd8c0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x5dd8c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x5c))))(param_1 GEN_EDX_FWD)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x68))))(piVar1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
  }
  uVar2 = param_1[0xe];
  if (uVar2 != 0xffffffff) {
    uVar2 = F_00a1b870(*((undefined1 *)GEN_TOP(((int)param_1 + 0x11))),uVar2);
    if (((uVar2 != 0) && (*((int *)GEN_TOP((uVar2 + 0x7c))) == 0)) &&
       (piVar1 = *((int * PTR32 *)GEN_TOP((uVar2 + 0xf0))), uVar2 = 0, piVar1 != ((int *)GEN_TOP(0x0)))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xd4))))(piVar1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
    }
  }
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf58 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005dd930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5dd930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x38);
  if (uVar2 != 0xffffffff) {
    piVar1 = ((int *)GEN_TOP(F_00a1b870(this[0x11],uVar2)));
    uVar2 = 0;
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x40))))(piVar1 GEN_EDX_ARG,*param_1,param_1[1],param_1[2]);
    }
  }
  *(undefined4 *)(this + 0x50) = *param_1;
  *(undefined4 *)(this + 0x54) = param_1[1];
  *(undefined4 *)(this + 0x58) = param_1[2];
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005dd990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5dd990u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  
  uVar4 = (*(uint *)&gen_args[0]);
  iVar2 = *((int *)GEN_TOP((param_1 + 0x38)));
  if (iVar2 != -1) {
    uVar1 = *((undefined1 *)GEN_TOP((param_1 + 0x11)));
    (*(uint *)&gen_args[0]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[0]), 1, 3),uVar1);
    piVar5 = ((int *)GEN_TOP(F_00a1b870(uVar1,iVar2)));
    if (piVar5 != ((int *)GEN_TOP(0x0))) {
      F_00a1e160(&(*(uint *)&gen_args[0]),uVar4);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x48))))(piVar5 GEN_EDX_ARG,(*(uint *)&gen_args[0]));
    }
  }
  *((undefined4 *)GEN_TOP((param_1 + 0x60))) = *((undefined4 *)GEN_TOP(uVar4));
  *((undefined4 *)GEN_TOP((param_1 + 100))) = *((undefined4 *)GEN_TOP((uVar4 + 4)));
  uVar3 = *((uint *)GEN_TOP((uVar4 + 8)));
  *((uint *)GEN_TOP((param_1 + 0x68))) = uVar3;
  *((undefined4 *)GEN_TOP((param_1 + 0x6c))) = *((undefined4 *)GEN_TOP((uVar4 + 0xc)));
  return uVar3;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf62 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005dda00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5dda00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x38);
  if (uVar2 != 0xffffffff) {
    piVar1 = ((int *)GEN_TOP(F_00a1b870(this[0x11],uVar2)));
    uVar2 = 0;
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_ARG,*param_1);
    }
  }
  *(undefined4 *)(this + 0x70) = *param_1;
  *(undefined4 *)(this + 0x74) = param_1[1];
  *(undefined4 *)(this + 0x78) = param_1[2];
  return uVar2;
}

/* ref: FUN_005dda50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005dda50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5dda50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005dd660(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10a4134));
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::AetheryteLayoutInstance::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005dda70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5dda70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  uint uVar1;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x100))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  if (uVar1 != 0) {
    F_00a1fa60(this + 0x10,uVar1,param_1);
  }
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x30)));
  *(uint *)(this + 0x30) = uVar1;
  *(undefined4 *)(this + 0x34) = *((undefined4 *)GEN_TOP((param_1 + 0x34)));
  return uVar1;
}

/* ref: FUN_005ddaf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005ddaf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ddaf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005dd660(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10a4254));
  return (uint)this;
}

/* ref: FUN_005ddb10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005ddb10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ddb10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005dd660(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10a4374));
  return (uint)this;
}

/* ref: FUN_005ddb30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005ddb30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ddb30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005dd660(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10a4494));
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::EventObjectLayoutInstance::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005ddb50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5ddb50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  uint uVar1;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x100))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  if (uVar1 != 0) {
    F_00a1fa60(this + 0x10,uVar1,param_1);
  }
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x30)));
  *(uint *)(this + 0x30) = uVar1;
  *(undefined4 *)(this + 0x34) = *((undefined4 *)GEN_TOP((param_1 + 0x34)));
  return uVar1;
}

/* ref: FUN_005ddbd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005ddbd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ddbd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((byte *)GEN_TOP(((int)this + 0x20))) = *((byte *)GEN_TOP(((int)this + 0x20))) | 7;
  *((uint *)GEN_TOP(((int)this + 0x24))) = *((uint *)GEN_TOP(((int)this + 0x24))) & 0xfffffffd | 1;
  *((byte *)GEN_TOP(((int)this + 0x29))) = *((byte *)GEN_TOP(((int)this + 0x29))) & 0xf8 | 8;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
  *((undefined1 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x2a))) = 0xff;
  *((byte *)GEN_TOP(((int)this + 0x2b))) = *((byte *)GEN_TOP(((int)this + 0x2b))) & 0xfa | 0x7a;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a45b4));
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0xffffffff;
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf8 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005ddc40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ddc40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 0x30))) != 0) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x30))) + 0x70)));
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf27 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ddc50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5ddc50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
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
    iVar2 = *(int *)(this + 0x1c) * 0xa0 + *((int *)GEN_TOP((iVar2 + 0x538)));
  }
  uVar3 = F_00a1e520(*param_2,((char *)REFP(0x10a2698)),iVar2);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x100)));
  *(uint *)(this + 0x30) = uVar3;
  uVar3 = (*pcVar1)(this,param_1);
  if ((((byte)this[0x2b] & 0x40) != 0) &&
     ((uVar3 = *(uint *)(this + 8), uVar3 == 0 ||
      (((*((int *)GEN_TOP((uVar3 + 4))) == 0 || (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 4))) + 0x50))) != '\0')) &&
       ((uVar3 == 0 || ((*((byte *)GEN_TOP((uVar3 + 0x16))) & 1) != 0)))))))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xcc))))(this GEN_EDX_ARG);
    if ((char)uVar3 != '\0') {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe0))))(this GEN_EDX_ARG,CONCAT31((int3)(uVar3 >> 8),1));
      return uVar3;
    }
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe0))))(this GEN_EDX_ARG,uVar3 & 0xffffff00);
  return uVar3;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005ddd00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ddd00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*(int *)(this + 0x38) == 0) {
    return 0x10a258b;
  }
  if (*(int *)(this + 8) != 0) {
    uVar1 = F_00507260(((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 4))) + 0x14c))) GEN_EDX_FWD,this + 0x38);
    return uVar1;
  }
  uVar1 = F_00507260(((undefined *)GEN_TOP(0x14c)) GEN_EDX_ARG,this + 0x38);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf32 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005ddd40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ddd40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(int *)(this + 0x34) != 0) {
    F_00c9f290(*(int *)(this + 0x34) GEN_EDX_FWD,0);
    F_00c9da30(*(undefined4 *)(this + 0x34) GEN_EDX_ARG,0);
    F_00551ae0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25e0))) GEN_EDX_ARG,*(undefined4 *)(this + 0x34));
    *(undefined4 *)(this + 0x34) = 0;
  }
  return;
}

/* ref: FUN_005ddd80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ddd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5ddd80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_00a1f090(&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x18)),param_1);
  uVar1 = F_00551c70(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25e0))) GEN_EDX_ARG,param_2,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x18)),1);
  *((uint *)GEN_TOP(((int)this + 0x34))) = uVar1;
  return uVar1;
}

/* ref: FUN_005dde00 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_005dde00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5dde00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 0x30))) != 0) {
    return GEN_X87((float10)((float)GEN_TOF(((float10)*((byte *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x30))) + 0x8c))) /
                           (float10)*(double *)&REFG(undefined, 0x1088100)))));
  }
  return (float10)0;
}

/* ref: FUN_005dde30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005dde30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5dde30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x30))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_006027f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x30))) GEN_EDX_FWD,param_1);
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
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005ddea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5ddea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x30))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_006026a0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x30))) GEN_EDX_FWD,3);
    if (uVar1 != 0) {
      F_00637ca0(uVar1 GEN_EDX_ARG,param_1);
      return;
    }
  }
  return;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf66 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005dded0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5dded0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x90, 0);
  int * piVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  piVar1 = *(int * PTR32 *)(this + 0x30);
  if ((piVar1 == ((int *)GEN_TOP(0x0))) || (*((char *)GEN_TOP(((int)piVar1 + 0x65))) != '\x03')) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10c))))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x20)));
    F_00a1cb90(&(*(undefined4 *)(gen_frame + 0x0)),uVar2);
    *param_1 = (*(undefined4 *)(gen_frame + 0x0));
    param_1[1] = (*(undefined4 *)(gen_frame + 0x4));
    param_1[2] = (*(undefined4 *)(gen_frame + 0x8));
    param_1[4] = (*(undefined4 *)(gen_frame + 0x10));
    param_1[5] = (*(undefined4 *)(gen_frame + 0x14));
    param_1[6] = (*(undefined4 *)(gen_frame + 0x18));
  }
  else {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x30))))(piVar1 GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::EnvSpaceLayoutInstance::vf8 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005ddf80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ddf80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 0x30);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*((uint *)GEN_TOP((iVar1 + 0x70))) != 0) {
      uVar2 = *((uint *)GEN_TOP((iVar1 + 0x70)));
    }
    if (*((uint *)GEN_TOP((iVar1 + 0x74))) != 0) {
      uVar2 = *((uint *)GEN_TOP((iVar1 + 0x74)));
    }
  }
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::EnvSpaceLayoutInstance::vf22 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005ddfa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ddfa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_FWD);
  return 1;
}

/* ref: Client::LayoutEngine::Layer::EnvSpaceLayoutInstance::vf27 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005ddfb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5ddfb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a1e2e0(((char *)REFP(0x10a26c8)));
  *(uint *)(this + 0x30) = uVar2;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x100))))(this GEN_EDX_ARG,param_1);
  if ((((byte)this[0x2b] & 0x40) != 0) &&
     ((uVar2 = *(uint *)(this + 8), uVar2 == 0 ||
      (((*((int *)GEN_TOP((uVar2 + 4))) == 0 || (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 4))) + 0x50))) != '\0')) &&
       ((uVar2 == 0 || ((*((byte *)GEN_TOP((uVar2 + 0x16))) & 1) != 0)))))))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xcc))))(this GEN_EDX_ARG);
    if ((char)uVar2 != '\0') {
      uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
      goto LAB_005de010;
    }
  }
  uVar2 = uVar2 & 0xffffff00;
LAB_005de010: ;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe0))))(this GEN_EDX_ARG,uVar2);
  if (*(int *)(this + 8) != 0) {
    bVar1 = F_00698c50(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 4))) + 0x48))) + 8))) GEN_EDX_ARG,
                         *(undefined4 *)(this + 0x30));
    return bVar1;
  }
  bVar1 = F_00698c50(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x00000048) + 8))) GEN_EDX_ARG,*(undefined4 *)(this + 0x30));
  return bVar1;
}

/* ref: Client::LayoutEngine::Layer::EnvLocationLayoutInstance::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005de060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5de060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  uint uVar1;
  uint uVar2;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x100))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00a1fa60(this + 0x10,uVar1,param_1);
  }
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::EnvLocationLayoutInstance::vf22 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005de0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5de0d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_FWD);
  return 1;
}

/* ref: Client::LayoutEngine::Layer::EnvLocationLayoutInstance::vf27 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005de0e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5de0e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00a1e380(((char *)REFP(0x10a26fc)));
  *(uint *)(this + 0x30) = uVar2;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x100))))(this GEN_EDX_ARG,param_1);
  if ((((byte)this[0x2b] & 0x40) != 0) &&
     ((uVar2 = *(uint *)(this + 8), uVar2 == 0 ||
      (((*((int *)GEN_TOP((uVar2 + 4))) == 0 || (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 4))) + 0x50))) != '\0')) &&
       ((uVar2 == 0 || ((*((byte *)GEN_TOP((uVar2 + 0x16))) & 1) != 0)))))))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xcc))))(this GEN_EDX_ARG);
    if ((char)uVar2 != '\0') {
      uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
      goto LAB_005de140;
    }
  }
  uVar2 = uVar2 & 0xffffff00;
LAB_005de140: ;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe0))))(this GEN_EDX_ARG,uVar2);
  if (*(int *)(this + 8) != 0) {
    bVar1 = F_0068b4a0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 4))) + 0x48))) + 8))) GEN_EDX_ARG,
                         *(undefined4 *)(this + 0x30));
    return bVar1;
  }
  bVar1 = F_0068b4a0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x00000048) + 8))) GEN_EDX_ARG,*(undefined4 *)(this + 0x30));
  return bVar1;
}

/* ref: Client::LayoutEngine::Layer::LightLayoutInstance::vf27 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005de190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5de190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
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
    iVar2 = *(int *)(this + 0x1c) * 0x80 + *((int *)GEN_TOP((iVar2 + 0x53c)));
  }
  uVar1 = F_00a1e3e0((char)*param_2,((char *)REFP(0x10a2730)),iVar2);
  *(uint *)(this + 0x30) = uVar1;
  if ((((byte)this[0x2b] & 0x40) != 0) &&
     ((uVar1 = *(uint *)(this + 8), uVar1 == 0 ||
      (((*((int *)GEN_TOP((uVar1 + 4))) == 0 || (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 4))) + 0x50))) != '\0')) &&
       ((uVar1 == 0 || ((*((byte *)GEN_TOP((uVar1 + 0x16))) & 1) != 0)))))))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xcc))))(this GEN_EDX_ARG);
    if ((char)uVar1 != '\0') {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe0))))(this GEN_EDX_ARG,CONCAT31((int3)(uVar1 >> 8),1));
      return uVar1;
    }
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe0))))(this GEN_EDX_ARG,uVar1 & 0xffffff00);
  return uVar1;
}

/* ref: FUN_005de230 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005de230(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5de230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 0x30))) != 0) {
    return *((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x30))) + 0x70))) + 0x14;
  }
  return 0x1302e54;
}

/* ref: FUN_005de250 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005de250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5de250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  float10 fVar8;
  float10 fVar9;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x30)));
  uVar5 = 0;
  if (iVar1 != 0) {
    iVar2 = *((int *)GEN_TOP((iVar1 + 0x70)));
    bVar6 = GEN_ISNAN((float10)*param_1) || GEN_ISNAN((float10)*((float *)GEN_TOP((iVar2 + 0x14))));
    if ((bVar6 != (bVar6 || (float10)*param_1 == (float10)*((float *)GEN_TOP((iVar2 + 0x14))))) &&
       (bVar6 = GEN_ISNAN((float10)param_1[1]) || GEN_ISNAN((float10)*((float *)GEN_TOP((iVar2 + 0x18)))),
       bVar6 != (bVar6 || (float10)param_1[1] == (float10)*((float *)GEN_TOP((iVar2 + 0x18)))))) {
      fVar8 = (float10)*((float *)GEN_TOP((iVar2 + 0x1c)));
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
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x30))) + 0x70)));
    *((float *)GEN_TOP((iVar1 + 0x14))) = *param_1;
    *((float *)GEN_TOP((iVar1 + 0x18))) = fVar4;
    *((float *)GEN_TOP((iVar1 + 0x1c))) = fVar3;
    *((undefined4 *)GEN_TOP((iVar1 + 0x20))) = *((undefined4 *)GEN_TOP((iVar1 + 0x20)));
    uVar5 = F_0068b3c0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x30))) GEN_EDX_FWD,0);
  }
  return uVar5;
}

/* ref: FUN_005de2e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005de2e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5de2e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  
  *((byte *)GEN_TOP(((int)this + 0x20))) = *((byte *)GEN_TOP(((int)this + 0x20))) | 7;
  *((uint *)GEN_TOP(((int)this + 0x24))) = *((uint *)GEN_TOP(((int)this + 0x24))) & 0xfffffffd | 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
  *((undefined1 *)GEN_TOP(((int)this + 0x2a))) = 0xff;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a46cc));
  *((byte *)GEN_TOP(((int)this + 0x29))) = *((byte *)GEN_TOP(((int)this + 0x29))) & 0xf8 | 8;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((byte *)GEN_TOP(((int)this + 0x2b))) = *((byte *)GEN_TOP(((int)this + 0x2b))) & 0xfa | 0x7a;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x40))), REFG(float, 0x1302df0));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x44))), REFG(float, 0x1302df4));
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x48))), REFG(float, 0x1302df8));
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = REFG(undefined4, 0x1302e00);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = REFG(undefined4, 0x1302e04);
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = REFG(undefined4, 0x1302e08);
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = REFG(undefined4, 0x1302e0c);
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x60))), REFG(float, 0x1302e10));
  *((undefined4 *)GEN_TOP(((int)this + 100))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 100))), REFG(float, 0x1302e14));
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x68))), REFG(float, 0x1302e18));
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = uVar1;
  uVar1 = REFG(undefined4, 0x1302e24);
  *((byte *)GEN_TOP(((int)this + 0x8c))) = *((byte *)GEN_TOP(((int)this + 0x8c))) & 0xf0;
  *((uint *)GEN_TOP(((int)this + 0x90))) = *((uint *)GEN_TOP(((int)this + 0x90))) & 0xfffffe00;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = uVar1;
  *((undefined2 *)GEN_TOP(((int)this + 0x8e))) = 0xffff;
  return (uint)this;
}

/* ref: FUN_005de400 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005de400(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5de400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (param_2 != 0) {
    fVar1 = (float10)*(double *)&REFG(undefined, 0x1088100);
    F_0068b780(param_2 GEN_EDX_FWD,((float)GEN_TOF(((float10)*((byte *)GEN_TOP((param_1 + 0x88))) / fVar1))),
                 ((float)GEN_TOF(((float10)*((byte *)GEN_TOP((param_1 + 0x89))) / fVar1))),
                 ((float)GEN_TOF(((float10)*((byte *)GEN_TOP((param_1 + 0x8a))) / fVar1))),
                 ((float)GEN_TOF(((float10)*((byte *)GEN_TOP((param_1 + 0x8b))) / fVar1))));
    F_0068b950(param_2 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x80)))));
    F_0068b7e0(param_2 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x7c)))));
    fVar1 = (float10)*(double *)&REFG(undefined, 0x10a3960);
    fVar2 = (float10)*(double *)&REFG(undefined, 0x10928e8);
    fVar3 = (float10)*(double *)&REFG(undefined, 0x10912a8);
    F_0068ffe0(param_2 GEN_EDX_ARG,((float)GEN_TOF((fVar2 * ((float10)*((ushort *)GEN_TOP((param_1 + 0x74))) * fVar1) - fVar3))),
                 ((float)GEN_TOF((((float10)*((ushort *)GEN_TOP((param_1 + 0x76))) * fVar1) * fVar2 - fVar3))),
                 ((float)GEN_TOF((((float10)*((ushort *)GEN_TOP((param_1 + 0x78))) * fVar1) * fVar2 - fVar3))),
                 ((float)GEN_TOF((((float10)*((ushort *)GEN_TOP((param_1 + 0x7a))) * fVar1) * fVar2 - fVar3))));
    F_0068b970(param_2 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x84)))));
  }
  return;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005de540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5de540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*(int *)(this + 0x70) == 0) {
    return 0x10a2697;
  }
  if (*(int *)(this + 8) != 0) {
    uVar1 = F_00507260(((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 4))) + 0x14c))) GEN_EDX_FWD,this + 0x70);
    return uVar1;
  }
  uVar1 = F_00507260(((undefined *)GEN_TOP(0x14c)) GEN_EDX_ARG,this + 0x70);
  return uVar1;
}

/* ref: FUN_005de580 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_005de580(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5de580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)*((ushort *)GEN_TOP((in_ecx + 0x7a))) * (float10)*(double *)&REFG(undefined, 0x10a3960))
                          * (float10)*(double *)&REFG(undefined, 0x10928e8) - (float10)*(double *)&REFG(undefined, 0x10912a8)))));
}

/* ref: FUN_005de5b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005de5b0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5de5b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[1];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  float fVar1;
  int iVar2;
  float * pfVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  fVar8 = (float10)(*(float *)&gen_args[0]);
  fVar1 = (float)(fVar8 - (float10)REFG(double, 0x1088130));
  (*(float *)&gen_args[0]) = fVar1;
  (*(int *)(gen_frame + 0x4)) = param_1;
  (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1094884);
  pfVar3 = &(*(float *)(gen_frame + 0x0));
  if (!((double)fVar1 < REFG(double, 0x1094800))) {
    pfVar3 = &(*(float *)&gen_args[0]);
  }
  fVar1 = *pfVar3;
  fVar9 = (float10)*(double *)&REFG(undefined, 0x10912a8);
  fVar10 = (float10)*(double *)&REFG(undefined, 0x1088118);
  fVar11 = (float10)*(double *)&REFG(undefined, 0x10a3960);
  uVar7 = (uint)((((float10)0 + fVar9) * fVar10) / fVar11);
  if ((int)uVar7 < 0x10000) {
    uVar5 = uVar7;
    if ((int)uVar7 < 0) {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0xffff;
  }
  *((short *)GEN_TOP((param_1 + 0x74))) = (short)uVar5;
  if ((int)uVar7 < 0x10000) {
    if ((int)uVar7 < 0) {
      uVar7 = 0;
    }
  }
  else {
    uVar7 = 0xffff;
  }
  *((short *)GEN_TOP((param_1 + 0x76))) = (short)uVar7;
  uVar6 = (uint)((((float10)fVar1 + fVar9) * fVar10) / fVar11);
  if ((int)uVar6 < 0x10000) {
    if ((int)uVar6 < 0) {
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 0xffff;
  }
  *((short *)GEN_TOP((param_1 + 0x78))) = (short)uVar6;
  uVar4 = (uint)(((fVar8 + fVar9) * fVar10) / fVar11);
  if ((int)uVar4 < 0x10000) {
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0xffff;
  }
  *((short *)GEN_TOP((param_1 + 0x7a))) = (short)uVar4;
  iVar2 = *((int *)GEN_TOP((param_1 + 0x30)));
  if (iVar2 != 0) {
    fVar8 = (float10)*(double *)&REFG(undefined, 0x10928e8);
    (*(float *)&gen_args[0]) = ((float)GEN_TOF((fVar8 * ((float10)(uVar5 & 0xffff) * fVar11) - fVar9)));
    uVar7 = F_0068ffe0(iVar2 GEN_EDX_FWD,(*(float *)&gen_args[0]),((float)GEN_TOF((((float10)(uVar7 & 0xffff) * fVar11) * fVar8 - fVar9)))
                         ,((float)GEN_TOF((((float10)(uVar6 & 0xffff) * fVar11) * fVar8 - fVar9))),
                         ((float)GEN_TOF((((float10)(uVar4 & 0xffff) * fVar11) * fVar8 - fVar9))));
    return uVar7;
  }
  return uVar4;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf39 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005de740(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x5de740u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  code * pcVar1;
  
  if (param_2 == '\0') {
    if ((param_1[0xc] != 0) && ((*(byte *)(param_1 + 0x23) & 1) != 0)) {
      F_0068b730(param_1[0xc] GEN_EDX_FWD,param_3);
    }
    *(byte *)(param_1 + 0x23) = *(byte *)(param_1 + 0x23) & 0xfe;
  }
  else {
    pcVar1 = *((gen_code32 *)GEN_TOP((*param_1 + 0xe0)));
    *(byte *)(param_1 + 0x23) = *(byte *)(param_1 + 0x23) | 1;
    (*pcVar1)(param_1,1);
    if (param_1[0xc] != 0) {
      F_0068b7c0(param_1[0xc] GEN_EDX_ARG,(float)(float10)1);
      F_00699cb0(param_1[0xc] GEN_EDX_ARG,param_3);
      return;
    }
  }
  return;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf65 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005de7b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5de7b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x90, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  if (*(int *)(this + 0x30) == 0) {
    pfVar4 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf4))))(this GEN_EDX_FWD)));
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
    puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_ARG)));
    *param_1 = *puVar5;
    param_1[1] = puVar5[1];
    param_1[2] = puVar5[2];
    fVar1 = *(*(float * PTR32 *)(gen_frame + 0x1c));
  }
  else {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x30) + 0x34))))(*(int * PTR32 *)(this + 0x30) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)));
    *param_1 = (*(undefined4 *)(gen_frame + 0x50));
    param_1[1] = (*(undefined4 *)(gen_frame + 0x54));
    param_1[2] = (*(undefined4 *)(gen_frame + 0x58));
    fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x68)) * (float10)(*(float *)(gen_frame + 0x68)) +
                   ((float10)(*(float *)(gen_frame + 0x60)) * (float10)(*(float *)(gen_frame + 0x60)) + (float10)(*(float *)(gen_frame + 0x64)) * (float10)(*(float *)(gen_frame + 0x64))))));
    (*(float * PTR32 *)(gen_frame + 0x1c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar1)));
    fVar1 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar1))));
    (*(float * PTR32 *)(gen_frame + 0x1c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar1)));
  }
  param_1[3] = (undefined4)gen_fl2bits(fVar1);
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::WeaponLayoutInstance::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005de8c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5de8c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  uint uVar1;
  uint uVar2;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x100))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00a1fa60(this + 0x10,uVar1,param_1);
  }
  uVar2 = CONCAT31((int3)(uVar2 >> 8),(*((char *)GEN_TOP((param_1 + 0x38))) != '\0') << 4 ^ (byte)this[0x2b]) &
          0xffffff10;
  this[0x2b] = (undefined1)((byte)this[0x2b] ^ (byte)uVar2);
  if ((((byte)this[0x2b] & 0x40) != 0) &&
     ((uVar2 = *(uint *)(this + 8), uVar2 == 0 ||
      (((*((int *)GEN_TOP((uVar2 + 4))) == 0 || (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 4))) + 0x50))) != '\0')) &&
       ((uVar2 == 0 || ((*((byte *)GEN_TOP((uVar2 + 0x16))) & 1) != 0)))))))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xcc))))(this GEN_EDX_ARG);
    if ((char)uVar2 != '\0') {
      uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
      goto LAB_005de96c;
    }
  }
  uVar2 = uVar2 & 0xffffff00;
LAB_005de96c: ;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe0))))(this GEN_EDX_ARG,uVar2);
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::WeaponLayoutInstance::vf27 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005de990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5de990u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00a1e5a0(*param_2,((char *)REFP(0x10a2790)));
  *(uint *)(this + 0x30) = uVar1;
  if ((((byte)this[0x2b] & 0x40) != 0) &&
     ((uVar1 = *(uint *)(this + 8), uVar1 == 0 ||
      (((*((int *)GEN_TOP((uVar1 + 4))) == 0 || (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar1 + 4))) + 0x50))) != '\0')) &&
       ((uVar1 == 0 || ((*((byte *)GEN_TOP((uVar1 + 0x16))) & 1) != 0)))))))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xcc))))(this GEN_EDX_ARG);
    if ((char)uVar1 != '\0') {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe0))))(this GEN_EDX_ARG,CONCAT31((int3)(uVar1 >> 8),1));
      return uVar1;
    }
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe0))))(this GEN_EDX_ARG,uVar1 & 0xffffff00);
  return uVar1;
}

/* ref: FUN_005dea10 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005dea10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5dea10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((byte *)GEN_TOP(((int)this + 0x20))) = *((byte *)GEN_TOP(((int)this + 0x20))) | 7;
  *((uint *)GEN_TOP(((int)this + 0x24))) = *((uint *)GEN_TOP(((int)this + 0x24))) & 0xfffffffd | 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
  *((byte *)GEN_TOP(((int)this + 0x29))) = *((byte *)GEN_TOP(((int)this + 0x29))) & 0xf8 | 8;
  *((undefined1 *)GEN_TOP(((int)this + 0x2a))) = 0xff;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a47e4));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((byte *)GEN_TOP(((int)this + 0x2b))) = *((byte *)GEN_TOP(((int)this + 0x2b))) & 0xfa | 0x7a;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x40))), REFG(float, 0x1302df0));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x44))), REFG(float, 0x1302df4));
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x48))), REFG(float, 0x1302df8));
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = REFG(undefined4, 0x1302e00);
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = REFG(undefined4, 0x1302e04);
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = REFG(undefined4, 0x1302e08);
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = REFG(undefined4, 0x1302e0c);
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x60))), REFG(float, 0x1302e10));
  *((undefined4 *)GEN_TOP(((int)this + 100))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 100))), REFG(float, 0x1302e14));
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x68))), REFG(float, 0x1302e18));
  *((byte *)GEN_TOP(((int)this + 0x78))) = *((byte *)GEN_TOP(((int)this + 0x78))) & 0xfe;
  *((undefined2 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((uint *)GEN_TOP(((int)this + 0x74))) = *((uint *)GEN_TOP(((int)this + 0x74))) & 0xfffffff1 | 1;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005deaf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5deaf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x50, 0);
  uint uVar1;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x100))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  if (uVar1 != 0) {
    F_00a1fa60(this + 0x10,uVar1,param_1);
  }
  *(undefined2 *)(this + 0x70) = *((undefined2 *)GEN_TOP((param_1 + 0x34)));
  this[0x78] = (undefined1)
               ((byte)this[0x78] ^ (*((char *)GEN_TOP((param_1 + 0x36))) != '\0' ^ (byte)this[0x78]) & 1);
  if (((byte)this[0x78] & 1) == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x70))))(this GEN_EDX_ARG);
  }
  else {
    if ((*(int *)(this + 0x74) << 0x1c) >> 0x1c != *((int *)GEN_TOP((param_1 + 0x30)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x70))))(this GEN_EDX_ARG);
    }
    if (*(int *)(this + 0x30) == 0) {
      (*(undefined4 *)(gen_frame + 0x3c)) = *((undefined4 *)GEN_TOP((param_1 + 0x30)));
      (*(int *)(gen_frame + 0x38)) = *(int *)this;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xfc))))(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x3c)));
      ((code *)*((gen_code32 *)GEN_TOP(((*(int *)(gen_frame + 0x38)) + 0x6c))))(this,uVar1);
    }
  }
  *(uint *)(this + 0x74) =
       *(uint *)(this + 0x74) ^ (*((uint *)GEN_TOP((param_1 + 0x30))) ^ *(uint *)(this + 0x74)) & 0xf;
  uVar1 = (int)(*(uint *)(this + 0x74) << 0x1c) >> 0x1c;
  if (((int)uVar1 < 1) || (3 < (int)uVar1)) {
    *(uint *)(this + 0x74) = *(uint *)(this + 0x74) & 0xfffffff1 | 1;
  }
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf27 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005debf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5debf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  undefined * this_00;
  undefined4 uVar1;
  uint uVar2;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25e0)));
  *(uint *)(this + 0x74) = *(uint *)(this + 0x74) ^ (*(uint *)(this + 0x74) ^ *param_2) & 0xf;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_00a1f090(&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x18)),param_1);
  switch((unsigned int)(uintptr_t)(*param_2)) {
  case 1: ;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x110))))(this GEN_EDX_ARG);
    uVar2 = F_00551cd0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x18)),uVar2);
    break;
  case 2: ;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x110))))(this GEN_EDX_ARG);
    uVar2 = F_00551da0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x18)),uVar2);
    break;
  case 3: ;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x110))))(this GEN_EDX_ARG);
    uVar2 = F_00551d20(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x18)),uVar2);
    break;
  case 4: ;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x110))))(this GEN_EDX_ARG);
    uVar2 = F_00551e10(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x18)),uVar2);
    break;
  default: ;
    goto switchD_005dec68_default;
  }
  *(uint *)(this + 0x30) = uVar2;
switchD_005dec68_default: ;
  uVar1 = *(undefined4 *)(this + 0x18);
  uVar2 = *(uint *)(this + 0x30);
  *((undefined4 *)GEN_TOP((uVar2 + 0x38))) = *(undefined4 *)(this + 0x14);
  *((undefined4 *)GEN_TOP((uVar2 + 0x3c))) = uVar1;
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x30) + 0x40))) = 0x3000;
  if ((((byte)this[0x2b] & 0x40) == 0) ||
     (((uVar2 = *(uint *)(this + 8), uVar2 != 0 &&
       (((*((int *)GEN_TOP((uVar2 + 4))) != 0 && (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 4))) + 0x50))) == '\0')) ||
        ((uVar2 != 0 && ((*((byte *)GEN_TOP((uVar2 + 0x16))) & 1) == 0)))))) ||
      (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xcc))))(this GEN_EDX_ARG), (char)uVar2 == '\0')))) {
    uVar2 = uVar2 & 0xffffff00;
  }
  else {
    uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe0))))(this GEN_EDX_ARG,uVar2);
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf28 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005ded80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ded80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(int *)(this + 0x30) != 0) {
    F_00c9f290(*(int *)(this + 0x30) GEN_EDX_FWD,0);
    F_00c9da30(*(undefined4 *)(this + 0x30) GEN_EDX_ARG,0);
    F_00551ae0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25e0))) GEN_EDX_ARG,*(undefined4 *)(this + 0x30));
    *(undefined4 *)(this + 0x30) = 0;
  }
  return;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf36 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005dedc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5dedc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  char cVar2;
  
  cVar2 = (char)(*(int *)&gen_args[0]);
  if (cVar2 == '\0') {
    if (((byte)this[0x78] & 1) == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x70))))(this GEN_EDX_FWD);
    }
  }
  else if (*(int *)(this + 0x30) == 0) {
    pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x6c)));
    (*(int *)&gen_args[0]) = (*(int *)(this + 0x74) << 0x1c) >> 0x1c;
    (*pcVar1)(this,this + 0x40,&(*(int *)&gen_args[0]));
  }
  if (*(int *)(this + 0x30) != 0) {
    F_00c9f290(*(int *)(this + 0x30) GEN_EDX_ARG,cVar2);
  }
  return;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf65 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005dee20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5dee20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x58, 8);
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
    pfVar4 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf4))))(this GEN_EDX_FWD)));
    (*(float * PTR32 *)(gen_frame + 0x44)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)pfVar4[2] * (float10)pfVar4[2] +
                               ((float10)*pfVar4 * (float10)*pfVar4 +
                               (float10)pfVar4[1] * (float10)pfVar4[1])))))));
    pfVar4 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_ARG)));
    *param_1 = *pfVar4;
    param_1[1] = pfVar4[1];
    param_1[2] = pfVar4[2];
    fVar5 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x44)))));
    (*(float * PTR32 *)(gen_frame + 0x44)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(GEN_X87(SQRT(fVar5)))))));
    param_1[3] = ((float)GEN_TOF(GEN_X87(SQRT(fVar5))));
    return (uint)param_1;
  case 2: ;
    pfVar4 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf4))))(this GEN_EDX_ARG)));
    (*(float * PTR32 *)(gen_frame + 0x44)) = ((float *)(uintptr_t)gen_fl2bits((float)(*pfVar4)));
    pfVar4 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_ARG)));
    *param_1 = *pfVar4;
    param_1[1] = pfVar4[1];
    fVar7 = pfVar4[2];
    param_1[3] = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x44)))));
    param_1[2] = fVar7;
    return (uint)param_1;
  case 3: ;
  case 4: ;
    pfVar3 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf4))))(this GEN_EDX_ARG)));
    pfVar4 = pfVar3 + 1;
    (*(float * PTR32 *)(gen_frame + 0x44)) = ((float *)(uintptr_t)gen_fl2bits((float)(*pfVar3)));
    (*(float *)(gen_frame + 0x40)) = *pfVar4;
    fVar5 = (float10)*pfVar3;
    (*(float * PTR32 *)(gen_frame + 0x44)) = pfVar4;
    fVar6 = (float10)*pfVar4;
    if (!(fVar5 < fVar6)) {
      (*(float * PTR32 *)(gen_frame + 0x44)) = pfVar3;
    }
    if (fVar6 < fVar5) {
      pfVar3 = pfVar4;
    }
    (*(float *)(gen_frame + 0x40)) = (float)((float10)*pfVar3 * (float10)REFG(double, 0x1088108) + (float10)*(*(float * PTR32 *)(gen_frame + 0x44)));
    pfVar4 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_ARG)));
    *param_1 = *pfVar4;
    param_1[1] = pfVar4[1];
    param_1[2] = pfVar4[2];
    param_1[3] = (*(float *)(gen_frame + 0x40));
    return (uint)param_1;
  case 5: ;
    if (*(int *)(this + 0x30) == 0) {
      pfVar4 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_ARG)));
      iVar2 = *(int *)this;
      (*(float *)(gen_frame + 0x18)) = *pfVar4;
      (*(float *)(gen_frame + 0x1c)) = pfVar4[1];
      (*(float *)(gen_frame + 0x20)) = pfVar4[2];
      pfVar4 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((iVar2 + 0xf4))))(this)));
      (*(float *)(gen_frame + 0x28)) = *pfVar4;
      (*(float *)(gen_frame + 0x2c)) = pfVar4[1];
      (*(float *)(gen_frame + 0x30)) = pfVar4[2];
      fVar7 = (*(float *)(gen_frame + 0x18));
      fVar8 = (*(float *)(gen_frame + 0x1c));
      fVar9 = (*(float *)(gen_frame + 0x20));
    }
    else {
      piVar1 = *(int * PTR32 *)(this + 0x30);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x28))))(piVar1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
      (*(float *)(gen_frame + 0x2c)) = 0.0;
      (*(float *)(gen_frame + 0x30)) = 0.0;
      (*(float *)(gen_frame + 0x34)) = 0.0;
      (*(float *)(gen_frame + 0x1c)) = 0.0;
      (*(float *)(gen_frame + 0x20)) = 0.0;
      (*(float *)(gen_frame + 0x24)) = 0.0;
      F_005fde10(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x2c)),&(*(float *)(gen_frame + 0x1c)));
      fVar8 = (*(float *)(gen_frame + 0x30));
      fVar7 = (*(float *)(gen_frame + 0x2c));
      (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x1c));
      (*(float *)(gen_frame + 0x2c)) = (*(float *)(gen_frame + 0x20));
      (*(float *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x24));
      fVar9 = (*(float *)(gen_frame + 0x34));
    }
    *param_1 = fVar7;
    param_1[1] = fVar8;
    param_1[2] = fVar9;
    fVar7 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x30)) * (float10)(*(float *)(gen_frame + 0x30)) +
                   ((float10)(*(float *)(gen_frame + 0x28)) * (float10)(*(float *)(gen_frame + 0x28)) + (float10)(*(float *)(gen_frame + 0x2c)) * (float10)(*(float *)(gen_frame + 0x2c))))));
    (*(float *)(gen_frame + 0x40)) = fVar7;
    fVar7 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar7))));
    (*(float *)(gen_frame + 0x40)) = fVar7;
    param_1[3] = fVar7;
  }
  return (uint)param_1;
}

/* ref: FUN_005df0d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005df0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5df0d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005dea10(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a48fc));
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::ExitRangeLayoutInstance::vf4 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005df120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5df120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  F_005deaf0((undefined *)this GEN_EDX_FWD,param_1);
  *(undefined4 *)(this + 0x80) = *((undefined4 *)GEN_TOP((param_1 + 0x3c)));
  *(undefined2 *)(this + 0x84) = *((undefined2 *)GEN_TOP((param_1 + 0x40)));
  *(undefined2 *)(this + 0x86) = *((undefined2 *)GEN_TOP((param_1 + 0x42)));
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x44)));
  *(uint *)(this + 0x88) = uVar1;
  *(undefined4 *)(this + 0x8c) = *((undefined4 *)GEN_TOP((param_1 + 0x48)));
  *(undefined4 *)(this + 0x90) = *((undefined4 *)GEN_TOP((param_1 + 0x4c)));
  *(undefined4 *)(this + 0x94) = *((undefined4 *)GEN_TOP((param_1 + 0x50)));
  return uVar1;
}

/* ref: FUN_005df180 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005df180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5df180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005dea10(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a4a14));
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::PrefetchRangeLayoutInstance::vf4 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005df1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5df1a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  F_005deaf0((undefined *)this GEN_EDX_FWD,param_1);
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x3c)));
  *(uint *)(this + 0x80) = uVar1;
  return uVar1;
}

/* ref: FUN_005df1c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005df1c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5df1c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005dea10(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0x96))) = *((byte *)GEN_TOP(((int)this + 0x96))) & 0xfe;
  *((uint *)GEN_TOP(((int)this + 0x98))) = *((uint *)GEN_TOP(((int)this + 0x98))) & 0xffff8000;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x94))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a4b2c));
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::MapRangeLayoutInstance::vf4 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005df210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5df210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined1 MVar1;
  byte bVar2;
  
  F_005deaf0((undefined *)this GEN_EDX_FWD,param_1);
  *(undefined4 *)(this + 0x80) = *((undefined4 *)GEN_TOP((param_1 + 0x3c)));
  *(undefined4 *)(this + 0x84) = *((undefined4 *)GEN_TOP((param_1 + 0x40)));
  *(undefined4 *)(this + 0x88) = *((undefined4 *)GEN_TOP((param_1 + 0x44)));
  *(undefined4 *)(this + 0x90) = *((undefined4 *)GEN_TOP((param_1 + 0x48)));
  this[0x94] = *((undefined *)GEN_TOP((param_1 + 0x5c)));
  *(undefined4 *)(this + 0x8c) = *((undefined4 *)GEN_TOP((param_1 + 0x4c)));
  this[0x95] = (undefined1)
               ((byte)this[0x95] ^ (*((char *)GEN_TOP((param_1 + 0x5b))) != '\0' ^ (byte)this[0x95]) & 1);
  MVar1 = (undefined1)
          (((*((char *)GEN_TOP((param_1 + 0x5d))) != '\0') * '\x02' ^ (byte)this[0x95]) & 2 ^ (byte)this[0x95])
  ;
  this[0x95] = MVar1;
  MVar1 = (undefined1)
          (((*((char *)GEN_TOP((param_1 + 0x5e))) != '\0') * '\x04' ^ (byte)MVar1) & 4 ^ (byte)MVar1);
  this[0x95] = MVar1;
  MVar1 = (undefined1)
          (((*((char *)GEN_TOP((param_1 + 0x5f))) != '\0') * '\b' ^ (byte)MVar1) & 8 ^ (byte)MVar1);
  this[0x95] = MVar1;
  MVar1 = (undefined1)
          (((*((char *)GEN_TOP((param_1 + 0x60))) != '\0') << 4 ^ (byte)MVar1) & 0x10 ^ (byte)MVar1);
  this[0x95] = MVar1;
  MVar1 = (undefined1)
          (((*((char *)GEN_TOP((param_1 + 99))) != '\0') << 5 ^ (byte)MVar1) & 0x20 ^ (byte)MVar1);
  this[0x95] = MVar1;
  MVar1 = (undefined1)
          (((*((char *)GEN_TOP((param_1 + 0x61))) != '\0') << 6 ^ (byte)MVar1) & 0x40 ^ (byte)MVar1);
  this[0x95] = MVar1;
  bVar2 = (byte)MVar1 & 0x7f;
  this[0x95] = (undefined1)((*((char *)GEN_TOP((param_1 + 0x62))) != '\0') << 7 | bVar2);
  this[0x96] = (undefined1)
               ((byte)this[0x96] ^ (*((char *)GEN_TOP((param_1 + 100))) != '\0' ^ (byte)this[0x96]) & 1);
  return bVar2;
}

/* ref: FUN_005df330 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005df330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5df330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005dea10(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a4c44));
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::EventRangeLayoutInstance::vf4 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005df350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5df350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_005deaf0((undefined *)this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_005df360 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005df360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5df360u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005dea10(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a4d5c));
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x8c))) = 0;
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::CollisionBoxLayoutInstance::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005df390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5df390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x60, 0);
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x100))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  if (uVar3 != 0) {
    F_00a1fa60(this + 0x10,uVar3,param_1);
  }
  *(uint *)(this + 0x74) =
       *(uint *)(this + 0x74) ^ (*((uint *)GEN_TOP((param_1 + 0x30))) ^ *(uint *)(this + 0x74)) & 0xf;
  *(undefined2 *)(this + 0x70) = *((undefined2 *)GEN_TOP((param_1 + 0x34)));
  this[0x78] = (undefined1)
               ((byte)this[0x78] ^ (*((char *)GEN_TOP((param_1 + 0x36))) != '\0' ^ (byte)this[0x78]) & 1);
  *(undefined4 *)(this + 0x80) = *((undefined4 *)GEN_TOP((param_1 + 0x40)));
  *(undefined4 *)(this + 0x84) = *((undefined4 *)GEN_TOP((param_1 + 0x3c)));
  piVar1 = *(int * PTR32 *)(this + 0x30);
  this[0x8c] = (undefined1)(*((char *)GEN_TOP((param_1 + 0x44))) != '\0');
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x80),*(undefined4 *)(this + 0x84));
  }
  iVar4 = (*(int *)(this + 0x74) << 0x1c) >> 0x1c;
  if (iVar4 == 4) {
    puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf4))))(this GEN_EDX_ARG)));
    pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xf8)));
    (*(undefined4 *)(gen_frame + 0x30)) = *puVar5;
    (*(undefined4 *)(gen_frame + 0x34)) = puVar5[1];
    (*(undefined4 *)(gen_frame + 0x38)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10947f8)));
    (*pcVar2)(this,&(*(undefined4 *)(gen_frame + 0x30)));
  }
  else if (iVar4 == 5) {
    if (*(int *)(this + 8) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
    }
    puVar5 = ((undefined4 *)GEN_TOP(F_00509330(((undefined *)GEN_TOP((iVar4 + 0x14c))) GEN_EDX_ARG,*((int *)GEN_TOP((param_1 + 0x48))) + param_1)));
    *(undefined4 *)(this + 0x88) = *puVar5;
  }
  if (((byte)this[0x78] & 1) == 0) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x70))))(this GEN_EDX_ARG);
  }
  else {
    uVar3 = (*(int *)(this + 0x74) << 0x1c) >> 0x1c;
    if (uVar3 != *((uint *)GEN_TOP((param_1 + 0x30)))) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x70))))(this GEN_EDX_ARG);
    }
    if (*(int *)(this + 0x30) == 0) {
      iVar4 = *(int *)this;
      pcVar2 = *((gen_code32 *)GEN_TOP((iVar4 + 0xfc)));
      puVar5 = &(*(undefined4 *)(gen_frame + 0x4c));
      (*(undefined4 *)(gen_frame + 0x4c)) = *((undefined4 *)GEN_TOP((param_1 + 0x30)));
      uVar3 = (*pcVar2)(this);
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((iVar4 + 0x6c))))(this,uVar3,puVar5);
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: Client::LayoutEngine::Layer::CollisionBoxLayoutInstance::vf27 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005df530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5df530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  undefined * this_00;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25e0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_00a1f090(&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x18)),param_1);
  switch((unsigned int)(uintptr_t)((*(int *)(this + 0x74) << 0x1c) >> 0x1c)) {
  case 1: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x110))))(this GEN_EDX_ARG);
    uVar4 = F_00551cd0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x18)),uVar4);
    break;
  case 2: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x110))))(this GEN_EDX_ARG);
    uVar4 = F_00551da0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x18)),uVar4);
    break;
  case 3: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x110))))(this GEN_EDX_ARG);
    uVar4 = F_00551d20(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x18)),uVar4);
    break;
  case 4: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x110))))(this GEN_EDX_ARG);
    uVar4 = F_00551e10(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x18)),uVar4);
    break;
  case 5: ;
    if (*(int *)(this + 8) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
    }
    uVar4 = F_00507260(((undefined *)GEN_TOP((iVar2 + 0x14c))) GEN_EDX_ARG,this + 0x88);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x110))))(this GEN_EDX_ARG);
    uVar4 = F_00551c70(this_00 GEN_EDX_ARG,uVar4,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x18)),uVar3);
    break;
  default: ;
    goto switchD_005df5a0_default;
  }
  *(uint *)(this + 0x30) = uVar4;
switchD_005df5a0_default: ;
  uVar1 = *(undefined4 *)(this + 0x18);
  iVar2 = *(int *)(this + 0x30);
  *((undefined4 *)GEN_TOP((iVar2 + 0x38))) = *(undefined4 *)(this + 0x14);
  *((undefined4 *)GEN_TOP((iVar2 + 0x3c))) = uVar1;
  *((undefined4 *)GEN_TOP((*(int *)(this + 0x30) + 0x40))) = 0x3000;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x30) + 0x1c))))
                    (*(int * PTR32 *)(this + 0x30) GEN_EDX_ARG,*(undefined4 *)(this + 0x80),
                     *(undefined4 *)(this + 0x84));
  if ((((byte)this[0x2b] & 0x40) == 0) ||
     (((uVar4 = *(uint *)(this + 8), uVar4 != 0 &&
       (((*((int *)GEN_TOP((uVar4 + 4))) != 0 && (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar4 + 4))) + 0x50))) == '\0')) ||
        ((uVar4 != 0 && ((*((byte *)GEN_TOP((uVar4 + 0x16))) & 1) == 0)))))) ||
      (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xcc))))(this GEN_EDX_ARG), (char)uVar4 == '\0')))) {
    uVar4 = uVar4 & 0xffffff00;
  }
  else {
    uVar4 = CONCAT31((int3)(uVar4 >> 8),1);
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe0))))(this GEN_EDX_ARG,uVar4);
  return uVar4;
}

/* ref: FUN_005df720 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005df720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5df720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((byte *)GEN_TOP(((int)this + 0x20))) = *((byte *)GEN_TOP(((int)this + 0x20))) | 7;
  *((uint *)GEN_TOP(((int)this + 0x24))) = *((uint *)GEN_TOP(((int)this + 0x24))) & 0xfffffffd | 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
  *((undefined1 *)GEN_TOP(((int)this + 0x2a))) = 0xff;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a4e74));
  *((byte *)GEN_TOP(((int)this + 0x29))) = *((byte *)GEN_TOP(((int)this + 0x29))) & 0xf8 | 8;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((byte *)GEN_TOP(((int)this + 0x2b))) = *((byte *)GEN_TOP(((int)this + 0x2b))) & 0xfa | 0x7a;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x30))), REFG(float, 0x1302df0));
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x34))), REFG(float, 0x1302df4));
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x38))), REFG(float, 0x1302df8));
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = REFG(undefined4, 0x1302e00);
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = REFG(undefined4, 0x1302e04);
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = REFG(undefined4, 0x1302e08);
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = REFG(undefined4, 0x1302e0c);
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x50))), REFG(float, 0x1302e10));
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x54))), REFG(float, 0x1302e14));
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x58))), REFG(float, 0x1302e18));
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf65 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005df7f0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5df7f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
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
    pfVar8 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xf4))))(param_1 GEN_EDX_FWD)));
    fVar4 = pfVar8[1];
    fVar5 = *pfVar8;
    fVar2 = pfVar8[2];
    puVar10 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xe4))))(param_1 GEN_EDX_ARG)));
    *((undefined4 *)GEN_TOP(param_2)) = *puVar10;
    *((undefined4 *)GEN_TOP((param_2 + 4))) = puVar10[1];
    *((undefined4 *)GEN_TOP((param_2 + 8))) = puVar10[2];
    *((float *)GEN_TOP((param_2 + 0xc))) =
         ((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF(((float10)fVar2 * (float10)fVar2 +
                                     ((float10)fVar5 * (float10)fVar5 +
                                     (float10)fVar4 * (float10)fVar4))))))));
    return param_2;
  case 2: ;
    puVar10 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xf4))))(param_1 GEN_EDX_ARG)));
    uVar1 = *puVar10;
    puVar10 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xe4))))(param_1 GEN_EDX_ARG)));
    *((undefined4 *)GEN_TOP(param_2)) = *puVar10;
    *((undefined4 *)GEN_TOP((param_2 + 4))) = puVar10[1];
    uVar3 = puVar10[2];
    *((undefined4 *)GEN_TOP((param_2 + 0xc))) = uVar1;
    *((undefined4 *)GEN_TOP((param_2 + 8))) = uVar3;
    return param_2;
  case 3: ;
  case 4: ;
    pfVar9 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xf4))))(param_1 GEN_EDX_ARG)));
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
    fVar5 = *((float *)GEN_TOP(param_2));
    puVar10 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xe4))))(param_1 GEN_EDX_ARG)));
    *((undefined4 *)GEN_TOP(uVar7)) = *puVar10;
    *((undefined4 *)GEN_TOP((uVar7 + 4))) = puVar10[1];
    *((undefined4 *)GEN_TOP((uVar7 + 8))) = puVar10[2];
    *((float *)GEN_TOP((uVar7 + 0xc))) = (float)((float10)fVar4 * fVar6 + (float10)fVar5);
  }
  return uVar7;
}

/* ref: Client::LayoutEngine::Layer::NaviMeshRangeLayoutInstance::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005df950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5df950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  uint uVar1;
  uint uVar2;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x100))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00a1fa60(this + 0x10,uVar1,param_1);
  }
  return uVar2;
}

/* ref: FUN_005df9c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005df9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5df9c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005df720(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a31b4));
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  F_00994550(((undefined *)GEN_TOP(((int)this + 0x74))) GEN_EDX_ARG,this);
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::LineVfxLayoutInstance::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005df9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5df9f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x50, 0);
  code * pcVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x100))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  if (uVar2 != 0) {
    F_00a1fa60(this + 0x10,uVar2,param_1);
  }
  *(undefined4 *)(this + 0x60) = 4;
  *(undefined4 *)(this + 0x70) = *((undefined4 *)GEN_TOP((param_1 + 0x30)));
  puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf4))))(this GEN_EDX_ARG)));
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xf8)));
  (*(undefined4 *)(gen_frame + 0x30)) = *puVar3;
  (*(undefined4 *)(gen_frame + 0x34)) = puVar3[1];
  (*(undefined4 *)(gen_frame + 0x38)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10947f8)));
  uVar2 = (*pcVar1)(this,&(*(undefined4 *)(gen_frame + 0x30)));
  return uVar2;
}

/* ref: FUN_005dfab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005dfab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5dfab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  byte bVar1;
  undefined4 in_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  undefined * this_00;
  float fVar3;
  
  bVar1 = *((byte *)GEN_TOP(((int)this + 0x20)));
  if ((bVar1 & 1) == 0) {
    if ((bVar1 & 2) == 0) {
      return CONCAT31((int3)((uint)in_EAX >> 8),bVar1);
    }
    if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4)));
    }
    if (*((char *)GEN_TOP((uVar2 + 0x52))) != '\0') {
      return uVar2;
    }
    if (*((int *)GEN_TOP((uVar2 + 0x10))) < 6) {
      return uVar2;
    }
    bVar1 = F_00550ff0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25e0))) GEN_EDX_FWD);
    if (bVar1 != 0) {
      return CONCAT31(extraout_var,bVar1);
    }
  }
  if (*((int *)GEN_TOP(((int)this + 0x70))) == 1) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0xff1535ff;
    fVar3 = REFG(float, 0x10a509c);
  }
  else if (*((int *)GEN_TOP(((int)this + 0x70))) == 2) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0xffc03113;
    fVar3 = REFG(float, 0x10a0d00);
  }
  else {
    (*(undefined4 *)(gen_frame + 0x0)) = REFG(undefined4, 0x1302e40);
    fVar3 = REFG(float, 0x1094880);
  }
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x74)));
  F_009945e0(this_00 GEN_EDX_ARG);
  uVar2 = F_009849c0(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  F_009849d0(this_00 GEN_EDX_ARG,fVar3);
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::LineVfxLayoutInstance::vf26 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005dfb60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5dfb60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_00984a30(this + 0x74 GEN_EDX_FWD);
  if (bVar1 == 0) {
    uVar2 = F_005dfab0(this GEN_EDX_ARG);
    return uVar2;
  }
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_005dfb80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005dfb80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5dfb80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005df720(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a50a4));
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::DoorRangeLayoutInstance::vf4 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005dfba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5dfba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  uint uVar1;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x100))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  if (uVar1 != 0) {
    F_00a1fa60(this + 0x10,uVar1,param_1);
  }
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((param_1 + 0x30))))) {
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
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005dfc70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5dfc70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005df720(this GEN_EDX_FWD);
  *((byte *)GEN_TOP(((int)this + 0x74))) = *((byte *)GEN_TOP(((int)this + 0x74))) & 0xfe;
  *((uint *)GEN_TOP(((int)this + 0x78))) = *((uint *)GEN_TOP(((int)this + 0x78))) & 0xfffffff0;
  *((uint *)GEN_TOP(((int)this + 0x80))) = *((uint *)GEN_TOP(((int)this + 0x80))) & 0xfffff800;
  *((undefined2 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a51bc));
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::GimmickRangeLayoutInstance::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005dfcb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5dfcb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  uint uVar1;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x100))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  if (uVar1 != 0) {
    F_00a1fa60(this + 0x10,uVar1,param_1);
  }
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((param_1 + 0x30))))) {
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
               ((byte)this[0x74] ^ (*((char *)GEN_TOP((param_1 + 0x36))) != '\0' ^ (byte)this[0x74]) & 1);
  *(undefined2 *)(this + 0x7c) = *((undefined2 *)GEN_TOP((param_1 + 0x34)));
  *(uint *)(this + 0x78) =
       *(uint *)(this + 0x78) ^ (*((uint *)GEN_TOP((param_1 + 0x3c))) ^ *(uint *)(this + 0x78)) & 0xf;
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x40)));
  *(uint *)(this + 0x70) = uVar1;
  return uVar1;
}

/* ref: FUN_005dfd90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005dfd90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5dfd90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005df720(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a52d4));
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::ClickableRangeLayoutInstance::vf4 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005dfdb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5dfdb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  uint uVar1;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x100))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  if (uVar1 != 0) {
    F_00a1fa60(this + 0x10,uVar1,param_1);
  }
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((param_1 + 0x30))))) {
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
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005dfe80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5dfe80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005df720(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a53ec));
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::FateRangeLayoutInstance::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005dfea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5dfea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  int iVar1;
  uint uVar2;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x100))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  if (uVar2 != 0) {
    F_00a1fa60(this + 0x10,uVar2,param_1);
  }
  iVar1 = *((int *)GEN_TOP((param_1 + 0x30)));
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      if (iVar1 == 3) {
        *(undefined4 *)(this + 0x60) = 3;
      }
      uVar2 = *((uint *)GEN_TOP((param_1 + 0x3c)));
      *(uint *)(this + 0x70) = uVar2;
      return uVar2;
    }
    *(undefined4 *)(this + 0x60) = 2;
    *(undefined4 *)(this + 0x70) = *((undefined4 *)GEN_TOP((param_1 + 0x3c)));
    return 0;
  }
  *(undefined4 *)(this + 0x60) = 1;
  *(undefined4 *)(this + 0x70) = *((undefined4 *)GEN_TOP((param_1 + 0x3c)));
  return 0;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf66 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005dff60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5dff60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
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
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x110))))(this);
  pfVar7 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_FWD)));
  fVar1 = *pfVar7;
  fVar8 = (float10)(float)extraout_ST0;
  fVar2 = pfVar7[1];
  fVar3 = pfVar7[2];
  pfVar7 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_ARG)));
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
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005e0020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e0020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  uint uVar1;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x100))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  if (uVar1 != 0) {
    F_00a1fa60(this + 0x10,uVar1,param_1);
    uVar1 = *((uint *)GEN_TOP((param_1 + 0x30)));
    *(uint *)(this + 0x50) = uVar1;
    return uVar1;
  }
  *(undefined4 *)(this + 0x50) = *((undefined4 *)GEN_TOP((param_1 + 0x30)));
  return 0;
}

/* ref: Client::LayoutEngine::Layer::PositionMarkerLayoutInstance::vf66 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005e00b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e00b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  float10 extraout_ST0;
  float10 fVar5;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x110))))(this);
  pfVar4 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_FWD)));
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
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005e0180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e0180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  uint uVar1;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x100))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  if (uVar1 != 0) {
    F_00a1fa60(this + 0x10,uVar1,param_1);
    uVar1 = *((uint *)GEN_TOP((param_1 + 0x30)));
    *(uint *)(this + 0x50) = uVar1;
    return uVar1;
  }
  *(undefined4 *)(this + 0x50) = *((undefined4 *)GEN_TOP((param_1 + 0x30)));
  return 0;
}

/* ref: Client::LayoutEngine::Layer::TargetMarkerLayoutInstance::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005e0210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e0210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  uint uVar1;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x100))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  if (uVar1 != 0) {
    F_00a1fa60(this + 0x10,uVar1,param_1);
    uVar1 = *((uint *)GEN_TOP((param_1 + 0x34)));
    *(uint *)(this + 0x50) = uVar1;
    return uVar1;
  }
  *(undefined4 *)(this + 0x50) = *((undefined4 *)GEN_TOP((param_1 + 0x34)));
  return 0;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf4 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005e02a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e02a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  undefined1 CVar1;
  uint uVar2;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x100))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  if (uVar2 != 0) {
    F_00a1fa60(this + 0x10,uVar2,param_1);
  }
  this[0x50] = (undefined1)0x1;
  CVar1 = (undefined1)((*((char *)GEN_TOP((param_1 + 0x31))) != '\0') * '\x02' | 1);
  this[0x50] = CVar1;
  CVar1 = (undefined1)((*((char *)GEN_TOP((param_1 + 0x32))) != '\0') * '\x04' | (byte)CVar1);
  this[0x50] = CVar1;
  CVar1 = (undefined1)((*((char *)GEN_TOP((param_1 + 0x30))) != '\0') * '\b' | (byte)CVar1);
  this[0x50] = CVar1;
  return (byte)CVar1;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf58 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005e0340(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5e0340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  *((undefined4 *)GEN_TOP((in_ecx + 0x30))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x34))) = param_2[1];
  uVar1 = param_2[2];
  *((undefined4 *)GEN_TOP((in_ecx + 0x3c))) = *((undefined4 *)GEN_TOP((in_ecx + 0x3c)));
  *((undefined4 *)GEN_TOP((in_ecx + 0x38))) = uVar1;
  return (uint)param_2;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf64 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005e0370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e0370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe8))))(this GEN_EDX_FWD,param_1);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf0))))(this GEN_EDX_ARG,param_1 + 0x10);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005e03a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5e03a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
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
    uVar1 = F_00507260(((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 4))) + 0x14c))) GEN_EDX_FWD,this + 0x38);
    return uVar1;
  }
  uVar1 = F_00507260(((undefined *)GEN_TOP(0x14c)) GEN_EDX_ARG,this + 0x38);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf12 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005e0420(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x5e0420u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  float10 fVar1;
  
  fVar1 = F_004e8f80(*((undefined4 *)GEN_TOP((param_1 + 0x88))),GEN_ARGF(*((float *)GEN_TOP(param_2))),GEN_ARGF(*((float *)GEN_TOP((param_2 + 4)))),GEN_ARGF(*((float *)GEN_TOP((param_2 + 8)))));
  if ((float10)(float)fVar1 <= (float10)param_3) {
    *param_4 = ((float)GEN_TOF((((float10)*(double *)&REFG(undefined, 0x10a5500) - (float10)*((float *)GEN_TOP((param_1 + 0x84)))) +
                      (float10)(float)fVar1)));
    return 1;
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005e0490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5e0490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)(this + 0xa4) - *(int *)(this + 0xa0) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0xa0) + uVar2 * 4))) + 0x10)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf21 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005e04d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5e04d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x34))) != 0;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf26 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005e04e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5e04e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x50, 0);
  code * pcVar1;
  uint uVar2;
  
  if ((*(int *)(this + 0x34) == 0) && (((byte)this[0x94] & 0x10) == 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
    pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x1c)));
    (*(uint *)(gen_frame + 0x3c)) = 0;
    uVar2 = (*pcVar1)(this);
    (*(uint *)(gen_frame + 0x3c)) = uVar2;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x6c))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0x3c)));
  }
  return;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf56 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005e0550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e0550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
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
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xe0))))(piVar1 GEN_EDX_FWD,param_1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf65 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005e05b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e05b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x60, 0);
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
      pfVar12 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf4))))(this GEN_EDX_FWD)));
      (*(float * PTR32 *)(gen_frame + 0x4c)) = pfVar12;
      pfVar12 = ((float *)GEN_TOP(F_00606230(pfVar12,pfVar12 + 1)));
      (*(float * PTR32 *)(gen_frame + 0x44)) = pfVar12;
      pfVar12 = ((float *)GEN_TOP(F_00606210((*(float * PTR32 *)(gen_frame + 0x4c)),(*(float * PTR32 *)(gen_frame + 0x4c)) + 1)));
      pcVar5 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xe4)));
      (*(float * PTR32 *)(gen_frame + 0x44)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)*(*(float * PTR32 *)(gen_frame + 0x44)) * (float10)REFG(double, 0x1088108) + (float10)*pfVar12))));
      pfVar12 = ((float *)GEN_TOP((*pcVar5)(this)));
      *param_1 = *pfVar12;
      param_1[1] = pfVar12[1];
      param_1[2] = pfVar12[2];
      param_1[3] = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x44)))));
      return (uint)param_1;
    }
    pfVar12 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf4))))(this GEN_EDX_ARG)));
    if (((byte)this[0x94] & 2) == 0) {
      pfVar12 = ((float *)(uintptr_t)gen_fl2bits((float)(pfVar12[2])));
    }
    else {
      pfVar12 = ((float *)(uintptr_t)gen_fl2bits((float)(*pfVar12)));
    }
    pcVar5 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xe4)));
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
      fVar13 = *((float *)GEN_TOP((iVar4 + 0x44)));
    }
    else {
      fVar13 = *((float *)GEN_TOP((iVar4 + 0x40)));
    }
    (*(float *)(gen_frame + 0x2c)) = fVar13;
    *param_1 = *((float *)GEN_TOP((iVar4 + 0x20)));
    param_1[1] = *((float *)GEN_TOP((iVar4 + 0x24)));
    fVar2 = *((float *)GEN_TOP((iVar4 + 0x28)));
    param_1[3] = fVar13;
    param_1[2] = fVar2;
    (*(float *)(gen_frame + 0x20)) = *((float *)GEN_TOP((iVar4 + 0x30)));
    (*(float *)(gen_frame + 0x24)) = gen_bits2f(*((undefined4 *)GEN_TOP((iVar4 + 0x34))));
    (*(float *)(gen_frame + 0x28)) = gen_bits2f(*((undefined4 *)GEN_TOP((iVar4 + 0x38))));
    F_005ff0f0(param_1 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x20)));
    break;
  case (undefined1)0x6: ;
    iVar4 = *(int *)(this + 0x88);
    bVar3 = *((byte *)GEN_TOP((iVar4 + 0x144)));
    if (((byte)this[0x94] & 2) == 0) {
      fVar13 = *((float *)GEN_TOP((iVar4 + 0x124)));
    }
    else {
      fVar13 = *((float *)GEN_TOP((iVar4 + 0x120)));
    }
    *param_1 = *((float *)GEN_TOP((iVar4 + 0x20)));
    param_1[1] = *((float *)GEN_TOP((iVar4 + 0x24)));
    fVar2 = *((float *)GEN_TOP((iVar4 + 0x28)));
    param_1[3] = fVar13;
    param_1[2] = fVar2;
    if (1 < bVar3) {
      (*(float *)(gen_frame + 0x2c)) = fVar13;
      puVar7 = ((undefined4 *)GEN_TOP((iVar4 + 0x38)));
      (*(float * PTR32 *)(gen_frame + 0x4c)) = ((float *)GEN_TOP((bVar3 - 1)));
      do {
        (*(float *)(gen_frame + 0x20)) = gen_bits2f(puVar7[-2]);
        (*(float *)(gen_frame + 0x24)) = gen_bits2f(puVar7[-1]);
        (*(float *)(gen_frame + 0x28)) = gen_bits2f(*puVar7);
        F_005ff0f0(param_1 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x20)));
        puVar7 = puVar7 + 4;
        pfVar12 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x4c)) - 1)));
        (*(float * PTR32 *)(gen_frame + 0x4c)) = pfVar12;
      } while (pfVar12 != ((float *)GEN_TOP(0x0)));
      return (uint)param_1;
    }
    break;
  case (undefined1)0x7: ;
    iVar4 = *(int *)(this + 0x88);
    if (((byte)this[0x94] & 2) == 0) {
      fVar13 = *((float *)GEN_TOP((iVar4 + 100)));
    }
    else {
      fVar13 = *((float *)GEN_TOP((iVar4 + 0x60)));
    }
    (*(float *)(gen_frame + 0x2c)) = fVar13;
    *param_1 = *((float *)GEN_TOP((iVar4 + 0x20)));
    puVar7 = ((undefined4 *)GEN_TOP((iVar4 + 0x38)));
    fVar2 = *((float *)GEN_TOP((iVar4 + 0x24)));
    (*(float * PTR32 *)(gen_frame + 0x4c)) = ((float *)GEN_TOP(0x3));
    param_1[1] = fVar2;
    fVar2 = *((float *)GEN_TOP((iVar4 + 0x28)));
    param_1[3] = fVar13;
    param_1[2] = fVar2;
    do {
      (*(float *)(gen_frame + 0x20)) = gen_bits2f(puVar7[-2]);
      (*(float *)(gen_frame + 0x24)) = gen_bits2f(puVar7[-1]);
      (*(float *)(gen_frame + 0x28)) = gen_bits2f(*puVar7);
      F_005ff0f0(param_1 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x20)));
      puVar7 = puVar7 + 4;
      pfVar12 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x4c)) - 1)));
      (*(float * PTR32 *)(gen_frame + 0x4c)) = pfVar12;
    } while (pfVar12 != ((float *)GEN_TOP(0x0)));
    return (uint)param_1;
  case (undefined1)0x8: ;
    iVar4 = *(int *)this;
    (*(float * PTR32 *)(gen_frame + 0x44)) = *(float * PTR32 *)(this + 0x88);
    ((code *)*((gen_code32 *)GEN_TOP((iVar4 + 0x108))))(this,((undefined1 *)(gen_frame + 0x0)));
    F_005feaa0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x30)));
    (*(float * PTR32 *)(gen_frame + 0x4c)) = ((float *)GEN_TOP(0x0));
    pfVar8 = (*(float * PTR32 *)(gen_frame + 0x44)) + 10;
    (*(float * PTR32 *)(gen_frame + 0x44)) = ((float *)GEN_TOP(0x4));
    do {
      fVar13 = pfVar8[-2];
      (*(float *)(gen_frame + 0x20)) = (float)((float10)fVar13 - (float10)(*(float *)(gen_frame + 0x30)));
      (*(float *)(gen_frame + 0x24)) = (float)((float10)pfVar8[-1] - (float10)(*(float *)(gen_frame + 0x34)));
      (*(float *)(gen_frame + 0x28)) = (float)((float10)*pfVar8 - (float10)(*(float *)(gen_frame + 0x38)));
      fVar9 = GEN_X87((float10)(float)((float10)pfVar8[-1] - (float10)(*(float *)(gen_frame + 0x34))));
      fVar10 = GEN_X87((float10)(float)((float10)fVar13 - (float10)(*(float *)(gen_frame + 0x30))));
      fVar11 = GEN_X87((float10)(float)((float10)*pfVar8 - (float10)(*(float *)(gen_frame + 0x38))));
      pfVar12 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar11 * fVar11 + (fVar10 * fVar10 + fVar9 * fVar9)))))));
      (*(float * PTR32 *)(gen_frame + 0x48)) = pfVar12;
      pfVar12 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(GEN_X87(SQRT((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar12))))))))));
      (*(float * PTR32 *)(gen_frame + 0x48)) = pfVar12;
      ppfVar6 = &(*(float * PTR32 *)(gen_frame + 0x4c));
      if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar12))) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x4c))))))) {
        ppfVar6 = &(*(float * PTR32 *)(gen_frame + 0x48));
      }
      pfVar12 = *ppfVar6;
      pfVar8 = pfVar8 + 4;
      pfVar1 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x44)) - 1)));
      (*(float * PTR32 *)(gen_frame + 0x44)) = pfVar1;
      (*(float * PTR32 *)(gen_frame + 0x4c)) = pfVar12;
    } while (pfVar1 != ((float *)GEN_TOP(0x0)));
    goto LAB_005e0abc;
  case (undefined1)0x9: ;
    iVar4 = *(int *)(this + 0x88);
    fVar13 = *((float *)GEN_TOP((iVar4 + 0x60)));
    *param_1 = *((float *)GEN_TOP((iVar4 + 0x20)));
    (*(float *)(gen_frame + 0x2c)) = fVar13;
    puVar7 = ((undefined4 *)GEN_TOP((iVar4 + 0x38)));
    param_1[1] = *((float *)GEN_TOP((iVar4 + 0x24)));
    (*(float * PTR32 *)(gen_frame + 0x44)) = ((float *)GEN_TOP(0x3));
    fVar2 = *((float *)GEN_TOP((iVar4 + 0x28)));
    param_1[3] = fVar13;
    param_1[2] = fVar2;
    do {
      (*(float *)(gen_frame + 0x20)) = gen_bits2f(puVar7[-2]);
      (*(float *)(gen_frame + 0x24)) = gen_bits2f(puVar7[-1]);
      (*(float *)(gen_frame + 0x28)) = gen_bits2f(*puVar7);
      F_005ff0f0(param_1 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x20)));
      puVar7 = puVar7 + 4;
      pfVar12 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x44)) - 1)));
      (*(float * PTR32 *)(gen_frame + 0x44)) = pfVar12;
    } while (pfVar12 != ((float *)GEN_TOP(0x0)));
    return (uint)param_1;
  case (undefined1)0xb: ;
    iVar4 = *(int *)(this + 0x88);
    bVar3 = *((byte *)GEN_TOP((iVar4 + 0x131)));
    fVar13 = *((float *)GEN_TOP((iVar4 + 0x134)));
    *param_1 = *((float *)GEN_TOP((iVar4 + 0x20)));
    param_1[1] = *((float *)GEN_TOP((iVar4 + 0x24)));
    fVar2 = *((float *)GEN_TOP((iVar4 + 0x28)));
    param_1[3] = fVar13;
    param_1[2] = fVar2;
    if (1 < bVar3) {
      puVar7 = ((undefined4 *)GEN_TOP((iVar4 + 0x38)));
      (*(float *)(gen_frame + 0x2c)) = fVar13;
      (*(float * PTR32 *)(gen_frame + 0x44)) = ((float *)GEN_TOP((bVar3 - 1)));
      do {
        (*(float *)(gen_frame + 0x20)) = gen_bits2f(puVar7[-2]);
        (*(float *)(gen_frame + 0x24)) = gen_bits2f(puVar7[-1]);
        (*(float *)(gen_frame + 0x28)) = gen_bits2f(*puVar7);
        F_005ff0f0(param_1 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x20)));
        puVar7 = puVar7 + 4;
        pfVar12 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x44)) - 1)));
        (*(float * PTR32 *)(gen_frame + 0x44)) = pfVar12;
      } while (pfVar12 != ((float *)GEN_TOP(0x0)));
      return (uint)param_1;
    }
    break;
  case (undefined1)0xc: ;
    pfVar12 = *(float * PTR32 *)(this + 0x88);
    pcVar5 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x108)));
    (*(float * PTR32 *)(gen_frame + 0x48)) = pfVar12;
    (*(float * PTR32 *)(gen_frame + 0x44)) = ((float *)GEN_TOP((uint)*((byte *)GEN_TOP(((int)pfVar12 + 0x229)))));
    (*pcVar5)(this,((undefined1 *)(gen_frame + 0x0)));
    F_005feaa0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x30)));
    pfVar12 = ((float *)GEN_TOP(0x0));
    (*(float * PTR32 *)(gen_frame + 0x4c)) = ((float *)GEN_TOP(0x0));
    if (0 < (int)(*(float * PTR32 *)(gen_frame + 0x44))) {
      pfVar8 = (*(float * PTR32 *)(gen_frame + 0x48)) + 10;
      (*(float * PTR32 *)(gen_frame + 0x48)) = (*(float * PTR32 *)(gen_frame + 0x44));
      do {
        fVar13 = pfVar8[-2];
        (*(float *)(gen_frame + 0x20)) = (float)((float10)fVar13 - (float10)(*(float *)(gen_frame + 0x30)));
        (*(float *)(gen_frame + 0x24)) = (float)((float10)pfVar8[-1] - (float10)(*(float *)(gen_frame + 0x34)));
        (*(float *)(gen_frame + 0x28)) = (float)((float10)*pfVar8 - (float10)(*(float *)(gen_frame + 0x38)));
        fVar9 = GEN_X87((float10)(float)((float10)pfVar8[-1] - (float10)(*(float *)(gen_frame + 0x34))));
        fVar10 = GEN_X87((float10)(float)((float10)fVar13 - (float10)(*(float *)(gen_frame + 0x30))));
        fVar11 = GEN_X87((float10)(float)((float10)*pfVar8 - (float10)(*(float *)(gen_frame + 0x38))));
        pfVar12 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar11 * fVar11 + (fVar10 * fVar10 + fVar9 * fVar9)))))));
        (*(float * PTR32 *)(gen_frame + 0x44)) = pfVar12;
        pfVar12 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(GEN_X87(SQRT((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar12))))))))));
        (*(float * PTR32 *)(gen_frame + 0x44)) = pfVar12;
        ppfVar6 = &(*(float * PTR32 *)(gen_frame + 0x4c));
        if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar12))) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x4c))))))) {
          ppfVar6 = &(*(float * PTR32 *)(gen_frame + 0x44));
        }
        pfVar12 = *ppfVar6;
        pfVar8 = pfVar8 + 4;
        pfVar1 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x48)) - 1)));
        (*(float * PTR32 *)(gen_frame + 0x48)) = pfVar1;
        (*(float * PTR32 *)(gen_frame + 0x4c)) = pfVar12;
      } while (pfVar1 != ((float *)GEN_TOP(0x0)));
    }
LAB_005e0abc: ;
    *param_1 = (*(float *)(gen_frame + 0x30));
    param_1[1] = (*(float *)(gen_frame + 0x34));
    param_1[2] = (*(float *)(gen_frame + 0x38));
    param_1[3] = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar12)));
    return (uint)param_1;
  case (undefined1)0xe: ;
    iVar4 = *(int *)(this + 0x88);
    bVar3 = *((byte *)GEN_TOP((iVar4 + 0x4e)));
    if (((byte)this[0x94] & 2) == 0) {
      fVar13 = *((float *)GEN_TOP((iVar4 + 0x24)));
    }
    else {
      fVar13 = *((float *)GEN_TOP((iVar4 + 0x20)));
    }
    *param_1 = *((float *)GEN_TOP((iVar4 + 0x60)));
    param_1[1] = *((float *)GEN_TOP((iVar4 + 100)));
    fVar2 = *((float *)GEN_TOP((iVar4 + 0x68)));
    param_1[3] = fVar13;
    param_1[2] = fVar2;
    if (1 < bVar3) {
      (*(float *)(gen_frame + 0x2c)) = fVar13;
      puVar7 = ((undefined4 *)GEN_TOP((iVar4 + 0x78)));
      (*(float * PTR32 *)(gen_frame + 0x4c)) = ((float *)GEN_TOP((bVar3 - 1)));
      do {
        (*(float *)(gen_frame + 0x20)) = gen_bits2f(puVar7[-2]);
        (*(float *)(gen_frame + 0x24)) = gen_bits2f(puVar7[-1]);
        (*(float *)(gen_frame + 0x28)) = gen_bits2f(*puVar7);
        F_005ff0f0(param_1 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x20)));
        puVar7 = puVar7 + 4;
        pfVar12 = ((float *)GEN_TOP(((int)(*(float * PTR32 *)(gen_frame + 0x4c)) - 1)));
        (*(float * PTR32 *)(gen_frame + 0x4c)) = pfVar12;
      } while (pfVar12 != ((float *)GEN_TOP(0x0)));
      return (uint)param_1;
    }
  }
  return (uint)param_1;
}

/* ref: FUN_005e0b90 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005e0b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5e0b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
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
  iVar15 = *((int *)GEN_TOP(((int)this + 0xa4))) - *((int *)GEN_TOP(((int)this + 0xa0))) >> 2;
  if (0 < iVar15) {
    do {
      uVar14 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302e18)));
      uVar13 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302e14)));
      uVar12 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302e10)));
      uVar11 = REFG(undefined4, 0x1302e0c);
      uVar10 = REFG(undefined4, 0x1302e08);
      uVar9 = REFG(undefined4, 0x1302e04);
      uVar8 = REFG(undefined4, 0x1302e00);
      iVar7 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa0))) + local_14 * 4)));
      pfVar16 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar7 + 0x10))) + 0xe4))))(*((int * PTR32 *)GEN_TOP((iVar7 + 0x10))) GEN_EDX_FWD)));
      fVar1 = *pfVar16;
      fVar2 = *((float *)GEN_TOP(((int)this + 0x40)));
      fVar3 = pfVar16[1];
      fVar4 = *((float *)GEN_TOP(((int)this + 0x44)));
      fVar5 = pfVar16[2];
      fVar6 = *((float *)GEN_TOP(((int)this + 0x48)));
      *((undefined4 *)GEN_TOP((iVar7 + 0x30))) = uVar8;
      *((undefined4 *)GEN_TOP((iVar7 + 0x34))) = uVar9;
      *((undefined4 *)GEN_TOP((iVar7 + 0x38))) = uVar10;
      *((undefined4 *)GEN_TOP((iVar7 + 0x3c))) = uVar11;
      *((float *)GEN_TOP((iVar7 + 0x20))) = (float)((float10)fVar1 - (float10)fVar2);
      local_14 = local_14 + 1;
      *((float *)GEN_TOP((iVar7 + 0x24))) = (float)((float10)fVar3 - (float10)fVar4);
      *((float *)GEN_TOP((iVar7 + 0x28))) = (float)((float10)fVar5 - (float10)fVar6);
      *((undefined4 *)GEN_TOP((iVar7 + 0x40))) = uVar12;
      *((undefined4 *)GEN_TOP((iVar7 + 0x44))) = uVar13;
      *((undefined4 *)GEN_TOP((iVar7 + 0x48))) = uVar14;
    } while (local_14 < iVar15);
  }
  return 0;
}

/* ref: FUN_005e0cb0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005e0cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5e0cb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  bool bVar1;
  
  bVar1 = false;
  switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP(((int)this + 0x90))))) {
  case 6: ;
    return (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x88))) + 0x144))) !=
           *((int *)GEN_TOP(((int)this + 0xa4))) - *((int *)GEN_TOP(((int)this + 0xa0))) >> 2;
  case 0xb: ;
    return (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x88))) + 0x131))) !=
           *((int *)GEN_TOP(((int)this + 0xa4))) - *((int *)GEN_TOP(((int)this + 0xa0))) >> 2;
  case 0xc: ;
    bVar1 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x88))) + 0x229))) !=
            *((int *)GEN_TOP(((int)this + 0xa4))) - *((int *)GEN_TOP(((int)this + 0xa0))) >> 2;
    break;
  case 0xe: ;
    return (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x88))) + 0x4e))) !=
           *((int *)GEN_TOP(((int)this + 0xa4))) - *((int *)GEN_TOP(((int)this + 0xa0))) >> 2;
  }
  return bVar1;
}

/* ref: FUN_005e0dc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005e0dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e0dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  short sVar1;
  uint uVar2;
  ulonglong uVar3;
  
  sVar1 = *((short *)GEN_TOP(((int)this + 0x8c)));
  *((undefined1 *)GEN_TOP(((int)this + 0x90))) = *param_1;
  *((undefined2 *)GEN_TOP(((int)this + 0x8c))) = *(undefined2 *)(param_1 + 0xc);
  *((byte *)GEN_TOP(((int)this + 0x94))) =
       *((byte *)GEN_TOP(((int)this + 0x94))) ^
       ((param_1[4] != '\0') * '\x04' ^ *((byte *)GEN_TOP(((int)this + 0x94)))) & 4;
  *((byte *)GEN_TOP(((int)this + 0x2b))) =
       *((byte *)GEN_TOP(((int)this + 0x2b))) ^
       ((param_1[4] != '\0') << 4 ^ *((byte *)GEN_TOP(((int)this + 0x2b)))) & 0x10;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = *(undefined4 *)(param_1 + 0x10);
  if ((sVar1 != *((short *)GEN_TOP(((int)this + 0x8c)))) && (*((int *)GEN_TOP(((int)this + 0x88))) != 0)) {
    F_00406b30(*((int *)GEN_TOP(((int)this + 0x88))));
    *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x88))) == 0) {
    uVar2 = F_00406bb0((int)*((short *)GEN_TOP(((int)this + 0x8c))),0,0);
    *((uint *)GEN_TOP(((int)this + 0x88))) = uVar2;
  }
  uVar3 = F_00c46aa0(*((undefined4 *)GEN_TOP(((int)this + 0x88))),param_1 + *(int *)(param_1 + 8),
                     (int)*((short *)GEN_TOP(((int)this + 0x8c))));
  return (uint)uVar3;
}

/* ref: FUN_005e0e90 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005e0e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5e0e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  
  if ((*((byte *)GEN_TOP(((int)this + 0x94))) & 0x10) != 0) {
    return 0;
  }
  switch((unsigned int)(uintptr_t)(*((char *)GEN_TOP(((int)this + 0x90))))) {
  case '\b': ;
  case '\t': ;
  case '\v': ;
  case '\f': ;
    break;
  default: ;
    if (*((char *)GEN_TOP(((int)this + 0x90))) != '\r') {
      if (*((int *)GEN_TOP(((int)this + 0x3c))) == 0) {
        return 0;
      }
      piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3c))) + 0x88)));
      iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
      if (iVar1 != 2) {
        return 0;
      }
      piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3c))) + 0x8c)));
      iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
      if (7 < iVar1) {
        return 0;
      }
    }
  }
  if ((*((byte *)GEN_TOP(((int)this + 0x20))) & 3) == 0) {
    return 0;
  }
  return 1;
}

/* ref: FUN_005e0f00 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005e0f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5e0f00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  bVar1 = F_005e0e90(this GEN_EDX_FWD);
  if (bVar1 != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc4))))();
    if ((char)uVar2 != '\0') {
      piVar3 = ((int *)GEN_TOP(F_004e8110(REFG(void * PTR32, 0x1375a64) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x3c))),
                                   *((undefined4 *)GEN_TOP(((int)this + 0x88))),
                                   (int)*((short *)GEN_TOP(((int)this + 0x8c))))));
      *((int * PTR32 *)GEN_TOP(((int)this + 0x34))) = piVar3;
      if (piVar3 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x4c))))(piVar3 GEN_EDX_ARG,500);
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_005e0f60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005e0f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5e0f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  byte bVar2;
  
  bVar2 = F_005d9c60(this GEN_EDX_FWD);
  if (((bVar2 == 0) && (*((int *)GEN_TOP(((int)this + 8))) != 0)) &&
     (iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))), iVar1 != 0)) {
    return *((uint *)GEN_TOP((iVar1 + 0x20)));
  }
  return 0;
}

/* ref: FUN_005e0f90 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005e0f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5e0f90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  bool bVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  bVar3 = F_005d9c60(this GEN_EDX_FWD);
  uVar4 = CONCAT31(extraout_var,bVar3);
  if (bVar3 == 0) {
    uVar4 = 0;
    if ((*((int *)GEN_TOP(((int)this + 8))) != 0) &&
       (uVar4 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))), uVar4 != 0)) {
      cVar1 = *((char *)GEN_TOP(((int)this + 0x90)));
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
      *((int *)GEN_TOP((uVar4 + 0x20))) = *((int *)GEN_TOP((uVar4 + 0x20))) + 1;
      if (bVar2) {
        *((int *)GEN_TOP((uVar4 + 0x24))) = *((int *)GEN_TOP((uVar4 + 0x24))) + 1;
      }
      if (cVar1 == '\r') {
        *((int *)GEN_TOP((uVar4 + 0x28))) = *((int *)GEN_TOP((uVar4 + 0x28))) + 1;
      }
    }
  }
  return uVar4;
}

/* ref: FUN_005e1000 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005e1000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5e1000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  bool bVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  bVar3 = F_005d9c60(this GEN_EDX_FWD);
  uVar4 = CONCAT31(extraout_var,bVar3);
  if (bVar3 == 0) {
    uVar4 = 0;
    if ((*((int *)GEN_TOP(((int)this + 8))) != 0) &&
       (uVar4 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))), uVar4 != 0)) {
      cVar1 = *((char *)GEN_TOP(((int)this + 0x90)));
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
      *((int *)GEN_TOP((uVar4 + 0x20))) = *((int *)GEN_TOP((uVar4 + 0x20))) - 1;
      if (bVar2) {
        *((int *)GEN_TOP((uVar4 + 0x24))) = *((int *)GEN_TOP((uVar4 + 0x24))) - 1;
      }
      if (cVar1 == '\r') {
        *((int *)GEN_TOP((uVar4 + 0x28))) = *((int *)GEN_TOP((uVar4 + 0x28))) - 1;
      }
    }
  }
  return uVar4;
}

/* ref: FUN_005e1070 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005e1070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e1070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  byte bVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  undefined3 extraout_var = 0;
  int * piVar4;
  
  bVar2 = *((byte *)GEN_TOP(((int)this + 100)));
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),bVar2);
  if (((bVar2 & 0x10) != 0) && (*((int *)GEN_TOP(((int)this + 0xc))) == param_1)) {
    *((byte *)GEN_TOP(((int)this + 100))) = bVar2 & 0xef;
    piVar4 = ((int *)GEN_TOP((param_1 + 0x8c)));
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar4), 0);
    if (7 < iVar1) {
      uVar3 = F_005e1000(((undefined *)GEN_TOP(((int)this - 0x30))) GEN_EDX_FWD);
      return uVar3;
    }
    bVar2 = F_005e0f00(((undefined *)GEN_TOP(((int)this - 0x30))) GEN_EDX_ARG);
    uVar3 = CONCAT31(extraout_var,bVar2);
    if (bVar2 == 0) {
      uVar3 = F_005e1000(((undefined *)GEN_TOP(((int)this - 0x30))) GEN_EDX_ARG);
    }
  }
  return uVar3;
}

/* ref: FUN_005e10c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005e10c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5e10c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005db190(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a550c));
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  return (uint)this;
}

/* ref: FUN_005e10e0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005e10e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5e10e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((byte *)GEN_TOP(((int)this + 0x20))) = *((byte *)GEN_TOP(((int)this + 0x20))) | 7;
  *((uint *)GEN_TOP(((int)this + 0x24))) = *((uint *)GEN_TOP(((int)this + 0x24))) & 0xfffffffd | 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
  *((undefined1 *)GEN_TOP(((int)this + 0x2a))) = 0xff;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a3844));
  *((byte *)GEN_TOP(((int)this + 0x29))) = *((byte *)GEN_TOP(((int)this + 0x29))) & 0xf8 | 8;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((byte *)GEN_TOP(((int)this + 0x2b))) = *((byte *)GEN_TOP(((int)this + 0x2b))) & 0xfa | 0x7a;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x30))), REFG(float, 0x1302df0));
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x34))), REFG(float, 0x1302df4));
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x38))), REFG(float, 0x1302df8));
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = REFG(undefined4, 0x1302e00);
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = REFG(undefined4, 0x1302e04);
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = REFG(undefined4, 0x1302e08);
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = REFG(undefined4, 0x1302e0c);
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x50))), REFG(float, 0x1302e10));
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x54))), REFG(float, 0x1302e14));
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x58))), REFG(float, 0x1302e18));
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 100))) = 0;
  return 0;
}

/* ref: FUN_005e11b0 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_005e11b0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5e11b0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x30, 0);
  
  F_005d89f0(param_1 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),param_2,(undefined1)param_3);
  F_005d9480(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x1c)));
  return (float10)(*(float *)(gen_frame + 0x1c));
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf66 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005e1200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e1200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_FWD)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar1;
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_ARG)));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[4] = *(*(undefined4 * PTR32 *)(gen_frame + 0x1c));
  param_1[5] = (*(undefined4 * PTR32 *)(gen_frame + 0x1c))[1];
  param_1[6] = (*(undefined4 * PTR32 *)(gen_frame + 0x1c))[2];
  if (*(int *)(this + 0x60) != 0) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = ((undefined4 *)GEN_TOP(0x0));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x60) + 0x10))))(*(int * PTR32 *)(this + 0x60) GEN_EDX_ARG);
    if (0 < (int)uVar2) {
      do {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x60) + 4))))(*(int * PTR32 *)(this + 0x60) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)(gen_frame + 0x1c)))
        ;
        F_006076f0(param_1 GEN_EDX_ARG,uVar2);
        (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x1c)) + 1)));
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x60) + 0x10))))(*(int * PTR32 *)(this + 0x60) GEN_EDX_ARG);
      } while ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x1c)) < (int)uVar2);
    }
  }
  return (uint)param_1;
}

/* ref: FUN_005e12c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005e12c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5e12c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005e10e0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a5624));
  return (uint)this;
}

/* ref: FUN_005e12e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005e12e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5e12e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_005e10e0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10a573c));
  return (uint)this;
}

/* ref: FUN_005e1330 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005e1330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e1330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) != ((undefined *)GEN_TOP(0x0))) {
    F_005d9380(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,param_1);
    return;
  }
  return;
}

/* ref: FUN_005e13a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005e13a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e13a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
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
  
  if (*((int *)GEN_TOP(((int)this + 0x1b0))) != 0) {
    iVar4 = *((int *)GEN_TOP((param_1 + 0x14)));
    uVar5 = *((uint *)GEN_TOP((param_1 + 0x18)));
    iVar6 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1b0))) + 0xa0)));
    uVar7 = *((uint *)GEN_TOP((iVar6 + 8)));
    local_c = 0;
    if (uVar7 != 0) {
      local_8 = 0;
      do {
        piVar10 = ((int *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 4))) + local_8 + iVar6)));
        if ((iVar4 == *piVar10) && (uVar9 = F_00a1b6b0(piVar10 + 1), uVar5 == uVar9)) {
          iVar4 = piVar10[5];
          iVar6 = piVar10[6];
          iVar1 = piVar10[7];
          iVar2 = piVar10[3];
          iVar3 = piVar10[4];
          if (*((int *)GEN_TOP((param_1 + 0x30))) != 0) {
            iVar8 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x30))) + 0x70)));
            *((int *)GEN_TOP((iVar8 + 0x30))) = piVar10[2];
            *((int *)GEN_TOP((iVar8 + 0x34))) = iVar2;
            *((int *)GEN_TOP((iVar8 + 0x38))) = iVar3;
            *((int *)GEN_TOP((iVar8 + 0x40))) = iVar4;
            *((int *)GEN_TOP((iVar8 + 0x44))) = iVar6;
            *((int *)GEN_TOP((iVar8 + 0x48))) = iVar1;
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
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005e1470(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5e1470u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  uint uVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  uVar2 = *((int *)GEN_TOP((param_1 + 400))) - *((int *)GEN_TOP((param_1 + 0x18c))) >> 2;
  if ((uVar2 != 0) &&
     ((param_3 != '\0' ||
      (fVar3 = (float10)((float)GEN_TOF(((float10)*param_2 - (float10)*((float *)GEN_TOP((param_1 + 0x80)))))),
      fVar4 = (float10)((float)GEN_TOF(((float10)param_2[1] - (float10)*((float *)GEN_TOP((param_1 + 0x84)))))),
      fVar5 = (float10)((float)GEN_TOF(((float10)param_2[2] - (float10)*((float *)GEN_TOP((param_1 + 0x88)))))),
      (float10)1 < (float10)((float)GEN_TOF((fVar5 * fVar5 + (fVar4 * fVar4 + fVar3 * fVar3)))))))) {
    uVar1 = 0;
    if (uVar2 != 0) {
      do {
        F_005dc3a0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x18c))) + uVar1 * 4))) GEN_EDX_FWD,param_2);
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar2);
    }
    *((float *)GEN_TOP((param_1 + 0x80))) = *param_2;
    *((float *)GEN_TOP((param_1 + 0x84))) = param_2[1];
    *((float *)GEN_TOP((param_1 + 0x88))) = param_2[2];
  }
  return;
}

/* ref: FUN_005e1540 */
GEN_OWN GEN_FRAME uint F_005e1540(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x5e1540u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  int * piVar1;
  uint * puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  local_8 = 0;
  if (0 < param_4[1]) {
    piVar1 = ((int *)GEN_TOP((*param_4 + 8 + (int)param_4)));
    do {
      iVar5 = 0;
      if (0 < piVar1[1]) {
        do {
          puVar2 = ((uint *)GEN_TOP(((int)piVar1 +
                           *((int *)GEN_TOP(((int)piVar1 + iVar5 * 4 + *piVar1 - 8))) + *piVar1 - 8)));
          if (((ushort)param_2 == 0) || (*puVar2 == (uint)(ushort)param_2)) {
            iVar4 = 0;
            if (0 < (int)puVar2[3]) {
              do {
                uVar3 = (int)puVar2 + *((int *)GEN_TOP(((int)puVar2 + iVar4 * 4 + puVar2[2]))) + puVar2[2];
                if (*((int *)GEN_TOP((uVar3 + 4))) == param_3) {
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
GEN_OWN GEN_FRAME uint F_005e15e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5e15e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x1379cb0);
  if (*((undefined * PTR32 *)GEN_TOP((REFG(undefined4, 0x1379cb0) + 0x14))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_005d9380(*((undefined * PTR32 *)GEN_TOP((REFG(undefined4, 0x1379cb0) + 0x14))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_005e1600 */
GEN_OWN GEN_NOFRAME byte F_005e1600(void)
{
  GEN_ENTER(0x5e1600u, 0u, 0u, 0u, 0u);
  int iVar1;
  byte bVar2;
  
  iVar1 = *((int *)GEN_TOP((REFG(int, 0x1379cb0) + 0x14)));
  if (((iVar1 != 0) && (*((char *)GEN_TOP((iVar1 + 0x52))) == '\0')) && (5 < *((int *)GEN_TOP((iVar1 + 0x10))))) {
    bVar2 = F_00550ff0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25e0))) GEN_EDX_ARG);
    return bVar2 == 0;
  }
  return 0;
}

/* ref: FUN_005e1640 */
GEN_OWN GEN_NOFRAME byte F_005e1640(void)
{
  GEN_ENTER(0x5e1640u, 0u, 0u, 0u, 0u);
  int iVar1;
  byte bVar2;
  int * piVar3;
  
  iVar1 = *((int *)GEN_TOP((REFG(int, 0x1379cb0) + 0x14)));
  if ((((iVar1 != 0) && (*((int *)GEN_TOP((iVar1 + 0x10))) == 7)) && (iVar1 != 0)) &&
     ((*((char *)GEN_TOP((iVar1 + 0x52))) == '\0' && (5 < *((int *)GEN_TOP((iVar1 + 0x10))))))) {
    bVar2 = F_00550ff0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25e0))) GEN_EDX_ARG);
    if (bVar2 == 0) {
      piVar3 = ((int *)GEN_TOP((REFG(int, 0x1375aec) + 0xc6c)));
      iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar3), 0);
      return iVar1 == 0;
    }
  }
  return 0;
}

/* ref: FUN_005e16a0 */
GEN_OWN GEN_NOFRAME byte F_005e16a0(void)
{
  GEN_ENTER(0x5e16a0u, 0u, 0u, 0u, 0u);
  int iVar1;
  byte bVar2;
  
  iVar1 = *((int *)GEN_TOP((REFG(int, 0x1379cb0) + 0x14)));
  if (((iVar1 != 0) && (*((char *)GEN_TOP((iVar1 + 0x52))) == '\0')) && (5 < *((int *)GEN_TOP((iVar1 + 0x10))))) {
    bVar2 = F_00550ff0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25e0))) GEN_EDX_ARG);
    return bVar2 == 0;
  }
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf54 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005e1740(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5e1740u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  code * pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  float * pfVar6;
  uint uVar7;
  bool bVar8;
  float10 fVar9;
  
  bVar2 = GEN_ISNAN((*(float *)&gen_args[0]));
  bVar3 = GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  bVar4 = (*(float *)&gen_args[0]) != *(float *)&REFG(undefined, 0x1088114);
  bVar5 = (*(float *)&gen_args[0]) < *(float *)&REFG(undefined, 0x1088114);
  bVar8 = (!bVar2 && !bVar3) && (!bVar5 && bVar4);
  pcVar1 = *((gen_code32 *)GEN_TOP((*param_1 + 0xe0)));
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x4)) + 0)) = bVar8;
  (*(float *)(gen_frame + 0x4)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x4)), 1, 3),bVar8));
  (*pcVar1)(param_1,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x4))));
  if ((!bVar2 && !bVar3) && (!bVar5 && bVar4)) {
    fVar9 = (float10)(*(float *)&gen_args[0]);
    (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x0)) = 0.0;
    pfVar6 = &(*(float *)&gen_args[0]);
    (*(float *)&gen_args[0]) = (float)((float10)1 - fVar9);
    if (!((float10)(float)((float10)1 - fVar9) < (float10)1)) {
      pfVar6 = &(*(float *)(gen_frame + 0x4));
    }
    if (!(0.0 < *pfVar6)) {
      pfVar6 = &(*(float *)(gen_frame + 0x0));
    }
    fVar9 = (float10)*pfVar6;
  }
  else {
    fVar9 = (float10)0;
  }
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xd4))))(param_1 GEN_EDX_FWD,(undefined4)gen_fl2bits((float)fVar9));
  return uVar7;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf58 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005e17d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5e17d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    piVar1[0xc] = *(*(int * PTR32 *)&gen_args[0]);
    piVar1[0xd] = (*(int * PTR32 *)&gen_args[0])[1];
    piVar1[0xe] = (*(int * PTR32 *)&gen_args[0])[2];
    piVar1[9] = piVar1[9] | 2;
    if (*((char *)GEN_TOP(((int)piVar1 + 0x65))) == '\x03') {
      if (((byte)this[0x29] & 4) != 0) {
        (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((uint)GEN_PIECE(&(*(int * PTR32 *)&gen_args[0]), 1, 3) << 8)));
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[0]));
        return uVar2;
      }
      (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[0]), 1, 3),((byte)this[0x28] & 0xf) == 0)));
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[0]))));
    }
  }
  return (uint)piVar1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005e1840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5e1840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    piVar2[0x10] = *(*(int * PTR32 *)&gen_args[0]);
    piVar2[0x11] = (*(int * PTR32 *)&gen_args[0])[1];
    piVar2[0x12] = (*(int * PTR32 *)&gen_args[0])[2];
    iVar1 = (*(int * PTR32 *)&gen_args[0])[3];
    piVar2[9] = piVar2[9] | 2;
    piVar2[0x13] = iVar1;
    if (*((char *)GEN_TOP(((int)piVar2 + 0x65))) == '\x03') {
      if (((byte)this[0x29] & 4) != 0) {
        (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((uint)GEN_PIECE(&(*(int * PTR32 *)&gen_args[0]), 1, 3) << 8)));
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[0]));
        return uVar3;
      }
      (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[0]), 1, 3),((byte)this[0x28] & 0xf) == 0)));
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[0]))));
    }
  }
  return (uint)piVar2;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf62 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005e18b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5e18b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    piVar1[0x14] = *(*(int * PTR32 *)&gen_args[0]);
    piVar1[0x15] = (*(int * PTR32 *)&gen_args[0])[1];
    piVar1[0x16] = (*(int * PTR32 *)&gen_args[0])[2];
    piVar1[9] = piVar1[9] | 2;
    if (*((char *)GEN_TOP(((int)piVar1 + 0x65))) == '\x03') {
      if (((byte)this[0x29] & 4) != 0) {
        (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((uint)GEN_PIECE(&(*(int * PTR32 *)&gen_args[0]), 1, 3) << 8)));
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[0]));
        return uVar2;
      }
      (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[0]), 1, 3),((byte)this[0x28] & 0xf) == 0)));
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[0]))));
    }
  }
  return (uint)piVar1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf64 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005e1920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5e1920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    piVar1[0xc] = *(*(int * PTR32 *)&gen_args[0]);
    piVar1[0xd] = (*(int * PTR32 *)&gen_args[0])[1];
    piVar1[0xe] = (*(int * PTR32 *)&gen_args[0])[2];
    piVar1[0x10] = (*(int * PTR32 *)&gen_args[0])[4];
    piVar1[0x11] = (*(int * PTR32 *)&gen_args[0])[5];
    piVar1[0x12] = (*(int * PTR32 *)&gen_args[0])[6];
    piVar1[0x13] = (*(int * PTR32 *)&gen_args[0])[7];
    piVar1[0x14] = (*(int * PTR32 *)&gen_args[0])[8];
    piVar1[0x15] = (*(int * PTR32 *)&gen_args[0])[9];
    piVar1[0x16] = (*(int * PTR32 *)&gen_args[0])[10];
    piVar1[9] = piVar1[9] | 2;
    if (*((char *)GEN_TOP(((int)piVar1 + 0x65))) == '\x03') {
      if (((byte)this[0x29] & 4) != 0) {
        (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((uint)GEN_PIECE(&(*(int * PTR32 *)&gen_args[0]), 1, 3) << 8)));
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[0]));
        return uVar2;
      }
      (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[0]), 1, 3),((byte)this[0x28] & 0xf) == 0)));
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[0]))));
    }
  }
  return (uint)piVar1;
}

/* ref: FUN_005e19c0 */
GEN_OWN GEN_FRAME uint F_005e19c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5e19c0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code * pcVar4;
  int * piVar5;
  int * this;
  uint uVar6;
  
  piVar5 = (*(int * PTR32 *)&gen_args[0]);
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  iVar2 = (*(int * PTR32 *)&gen_args[0])[1];
  if ((((iVar1 == 0) || (*((short *)GEN_TOP((iVar1 + 0x12))) == 0)) && ((*(int * PTR32 *)&gen_args[0])[6] == 0)) &&
     (((char)(*(int * PTR32 *)&gen_args[0])[2] != '\0' && ((*(int * PTR32 *)&gen_args[0])[3] == 0)))) {
    uVar3 = *((undefined4 *)GEN_TOP((iVar1 + 4)));
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(iVar2));
    this = ((int *)GEN_TOP(F_005d5c60(uVar3 GEN_EDX_ARG,8)));
  }
  else {
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(iVar2));
    this = ((int *)GEN_TOP(F_00406b90(0x80,0,0)));
    if (this == ((int *)GEN_TOP(0x0))) {
      this = ((int *)GEN_TOP(0x0));
    }
    else {
      F_005dd1f0(this GEN_EDX_ARG);
      *this = (int)(*(undefined * PTR32 (*)[74])REFP(0x10a3db4));
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 4))))(this GEN_EDX_ARG,piVar5,0);
  if (((undefined *)GEN_TOP(piVar5[3])) != ((undefined *)GEN_TOP(0x0))) {
    iVar1 = *this;
    uVar6 = F_00a1d0c0(((undefined *)GEN_TOP(piVar5[3])) GEN_EDX_ARG);
    ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 100))))(this,uVar6);
    return (uint)this;
  }
  (*(int * PTR32 *)&gen_args[0]) = *((int * PTR32 *)GEN_TOP((iVar2 + 0x30)));
  iVar1 = piVar5[5];
  pcVar4 = *((gen_code32 *)GEN_TOP((*this + 0x6c)));
  (*pcVar4)(this,iVar1,&(*(int * PTR32 *)&gen_args[0]));
  return (uint)this;
}

/* ref: FUN_005e1a80 */
GEN_OWN GEN_FRAME uint F_005e1a80(unsigned int gen_a0)
{
  GEN_ENTER(0x5e1a80u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code * pcVar4;
  int * piVar5;
  int * this;
  uint uVar6;
  
  piVar5 = (*(int * PTR32 *)&gen_args[0]);
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  iVar2 = (*(int * PTR32 *)&gen_args[0])[1];
  if ((((iVar1 == 0) || (*((short *)GEN_TOP((iVar1 + 0x12))) == 0)) && ((*(int * PTR32 *)&gen_args[0])[6] == 0)) &&
     (((char)(*(int * PTR32 *)&gen_args[0])[2] != '\0' && ((*(int * PTR32 *)&gen_args[0])[3] == 0)))) {
    uVar3 = *((undefined4 *)GEN_TOP((iVar1 + 4)));
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(iVar2));
    this = ((int *)GEN_TOP(F_005d5c60(uVar3 GEN_EDX_ARG,9)));
  }
  else {
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(iVar2));
    this = ((int *)GEN_TOP(F_00406b90(0x80,0,0)));
    if (this == ((int *)GEN_TOP(0x0))) {
      this = ((int *)GEN_TOP(0x0));
    }
    else {
      F_005dd1f0(this GEN_EDX_ARG);
      *this = (int)(*(undefined * PTR32 (*)[74])REFP(0x10a3ee4));
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 4))))(this GEN_EDX_ARG,piVar5,0);
  if (((undefined *)GEN_TOP(piVar5[3])) != ((undefined *)GEN_TOP(0x0))) {
    iVar1 = *this;
    uVar6 = F_00a1d0c0(((undefined *)GEN_TOP(piVar5[3])) GEN_EDX_ARG);
    ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 100))))(this,uVar6);
    return (uint)this;
  }
  (*(int * PTR32 *)&gen_args[0]) = *((int * PTR32 *)GEN_TOP((iVar2 + 0x30)));
  iVar1 = piVar5[5];
  pcVar4 = *((gen_code32 *)GEN_TOP((*this + 0x6c)));
  (*pcVar4)(this,iVar1,&(*(int * PTR32 *)&gen_args[0]));
  return (uint)this;
}

/* ref: FUN_005e1b40 */
GEN_OWN GEN_FRAME uint F_005e1b40(unsigned int gen_a0)
{
  GEN_ENTER(0x5e1b40u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  int iVar2;
  code * pcVar3;
  int * piVar4;
  int * piVar5;
  undefined * this;
  uint uVar6;
  
  piVar4 = (*(int * PTR32 *)&gen_args[0]);
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  iVar2 = (*(int * PTR32 *)&gen_args[0])[1];
  if ((((iVar1 == 0) || (*((short *)GEN_TOP((iVar1 + 0x12))) == 0)) && ((*(int * PTR32 *)&gen_args[0])[6] == 0)) &&
     (((char)(*(int * PTR32 *)&gen_args[0])[2] != '\0' && ((*(int * PTR32 *)&gen_args[0])[3] == 0)))) {
    piVar5 = ((int *)GEN_TOP(F_005d5c60(*((undefined4 *)GEN_TOP((iVar1 + 4))) GEN_EDX_ARG,4)));
  }
  else {
    this = ((undefined *)GEN_TOP(F_00406b90(0xa0,0,0)));
    if (this == ((undefined *)GEN_TOP(0x0))) {
      piVar5 = ((int *)GEN_TOP(0x0));
    }
    else {
      piVar5 = ((int *)GEN_TOP(F_005de2e0(this GEN_EDX_ARG)));
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 4))))(piVar5 GEN_EDX_ARG,piVar4,*((int *)GEN_TOP((iVar2 + 0x30))) + iVar2);
  if (((undefined *)GEN_TOP(piVar4[3])) != ((undefined *)GEN_TOP(0x0))) {
    iVar1 = *piVar5;
    uVar6 = F_00a1d0c0(((undefined *)GEN_TOP(piVar4[3])) GEN_EDX_ARG);
    ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 100))))(piVar5,uVar6);
    return (uint)piVar5;
  }
  iVar1 = piVar4[5];
  pcVar3 = *((gen_code32 *)GEN_TOP((*piVar5 + 0x6c)));
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x30))) + iVar2)));
  (*pcVar3)(piVar5,iVar1,&(*(int * PTR32 *)&gen_args[0]));
  return (uint)piVar5;
}

/* ref: FUN_005e1bf0 */
GEN_OWN GEN_FRAME uint F_005e1bf0(unsigned int gen_a0)
{
  GEN_ENTER(0x5e1bf0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  code * pcVar2;
  int * piVar3;
  int * this;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  piVar3 = (*(int * PTR32 *)&gen_args[0]);
  iVar5 = *(*(int * PTR32 *)&gen_args[0]);
  iVar1 = (*(int * PTR32 *)&gen_args[0])[1];
  if ((((iVar5 == 0) || (*((short *)GEN_TOP((iVar5 + 0x12))) == 0)) && ((*(int * PTR32 *)&gen_args[0])[6] == 0)) &&
     (((char)(*(int * PTR32 *)&gen_args[0])[2] != '\0' && ((*(int * PTR32 *)&gen_args[0])[3] == 0)))) {
    uVar6 = *((undefined4 *)GEN_TOP((iVar5 + 4)));
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(iVar1));
    this = ((int *)GEN_TOP(F_005d5c60(uVar6 GEN_EDX_ARG,0xc)));
  }
  else {
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(iVar1));
    this = ((int *)GEN_TOP(F_00406b90(0x80,0,0)));
    if (this == ((int *)GEN_TOP(0x0))) {
      this = ((int *)GEN_TOP(0x0));
    }
    else {
      F_005dd660(this GEN_EDX_ARG);
      *this = (int)(*(undefined * PTR32 (*)[70])REFP(0x10a4134));
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 4))))(this GEN_EDX_ARG,piVar3,0);
  this[0xd] = *((int *)GEN_TOP((iVar1 + 0x34)));
  if (piVar3[3] != 0) {
    uVar6 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x30)));
    iVar5 = piVar3[5];
    iVar1 = *this;
    uVar4 = F_00a1b550(piVar3[3] GEN_EDX_ARG);
    ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x114))))(this,uVar4,iVar5,uVar6);
    return (uint)this;
  }
  (*(int * PTR32 *)&gen_args[0]) = *((int * PTR32 *)GEN_TOP((iVar1 + 0x30)));
  pcVar2 = *((gen_code32 *)GEN_TOP((*this + 0x6c)));
  iVar5 = piVar3[5];
  (*pcVar2)(this,iVar5,&(*(int * PTR32 *)&gen_args[0]));
  return (uint)this;
}

/* ref: FUN_005e1cb0 */
GEN_OWN GEN_FRAME uint F_005e1cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x5e1cb0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  code * pcVar2;
  int * piVar3;
  int * this;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  piVar3 = (*(int * PTR32 *)&gen_args[0]);
  iVar5 = *(*(int * PTR32 *)&gen_args[0]);
  iVar1 = (*(int * PTR32 *)&gen_args[0])[1];
  if ((((iVar5 == 0) || (*((short *)GEN_TOP((iVar5 + 0x12))) == 0)) && ((*(int * PTR32 *)&gen_args[0])[6] == 0)) &&
     (((char)(*(int * PTR32 *)&gen_args[0])[2] != '\0' && ((*(int * PTR32 *)&gen_args[0])[3] == 0)))) {
    uVar6 = *((undefined4 *)GEN_TOP((iVar5 + 4)));
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(iVar1));
    this = ((int *)GEN_TOP(F_005d5c60(uVar6 GEN_EDX_ARG,0x10)));
  }
  else {
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(iVar1));
    this = ((int *)GEN_TOP(F_00406b90(0x80,0,0)));
    if (this == ((int *)GEN_TOP(0x0))) {
      this = ((int *)GEN_TOP(0x0));
    }
    else {
      F_005dd660(this GEN_EDX_ARG);
      *this = (int)(*(undefined * PTR32 (*)[70])REFP(0x10a4374));
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 4))))(this GEN_EDX_ARG,piVar3,0);
  if (piVar3[3] != 0) {
    uVar6 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x30)));
    iVar5 = piVar3[5];
    iVar1 = *this;
    uVar4 = F_00a1b550(piVar3[3] GEN_EDX_ARG);
    ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x114))))(this,uVar4,iVar5,uVar6);
    return (uint)this;
  }
  (*(int * PTR32 *)&gen_args[0]) = *((int * PTR32 *)GEN_TOP((iVar1 + 0x30)));
  iVar5 = piVar3[5];
  pcVar2 = *((gen_code32 *)GEN_TOP((*this + 0x6c)));
  (*pcVar2)(this,iVar5,&(*(int * PTR32 *)&gen_args[0]));
  return (uint)this;
}

/* ref: FUN_005e1d70 */
GEN_OWN GEN_FRAME uint F_005e1d70(unsigned int gen_a0)
{
  GEN_ENTER(0x5e1d70u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  code * pcVar2;
  int * piVar3;
  int * this;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  piVar3 = (*(int * PTR32 *)&gen_args[0]);
  iVar5 = *(*(int * PTR32 *)&gen_args[0]);
  iVar1 = (*(int * PTR32 *)&gen_args[0])[1];
  if ((((iVar5 == 0) || (*((short *)GEN_TOP((iVar5 + 0x12))) == 0)) && ((*(int * PTR32 *)&gen_args[0])[6] == 0)) &&
     (((char)(*(int * PTR32 *)&gen_args[0])[2] != '\0' && ((*(int * PTR32 *)&gen_args[0])[3] == 0)))) {
    uVar6 = *((undefined4 *)GEN_TOP((iVar5 + 4)));
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(iVar1));
    this = ((int *)GEN_TOP(F_005d5c60(uVar6 GEN_EDX_ARG,0xe)));
  }
  else {
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(iVar1));
    this = ((int *)GEN_TOP(F_00406b90(0x80,0,0)));
    if (this == ((int *)GEN_TOP(0x0))) {
      this = ((int *)GEN_TOP(0x0));
    }
    else {
      F_005dd660(this GEN_EDX_ARG);
      *this = (int)(*(undefined * PTR32 (*)[70])REFP(0x10a4254));
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 4))))(this GEN_EDX_ARG,piVar3,0);
  if (piVar3[3] != 0) {
    uVar6 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x30)));
    iVar5 = piVar3[5];
    iVar1 = *this;
    uVar4 = F_00a1b550(piVar3[3] GEN_EDX_ARG);
    ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x114))))(this,uVar4,iVar5,uVar6);
    return (uint)this;
  }
  (*(int * PTR32 *)&gen_args[0]) = *((int * PTR32 *)GEN_TOP((iVar1 + 0x30)));
  iVar5 = piVar3[5];
  pcVar2 = *((gen_code32 *)GEN_TOP((*this + 0x6c)));
  (*pcVar2)(this,iVar5,&(*(int * PTR32 *)&gen_args[0]));
  return (uint)this;
}

/* ref: FUN_005e1e30 */
GEN_OWN GEN_FRAME uint F_005e1e30(unsigned int gen_a0)
{
  GEN_ENTER(0x5e1e30u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int iVar1;
  code * pcVar2;
  int * piVar3;
  int * this;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  piVar3 = (*(int * PTR32 *)&gen_args[0]);
  iVar5 = *(*(int * PTR32 *)&gen_args[0]);
  iVar1 = (*(int * PTR32 *)&gen_args[0])[1];
  if ((((iVar5 == 0) || (*((short *)GEN_TOP((iVar5 + 0x12))) == 0)) && ((*(int * PTR32 *)&gen_args[0])[6] == 0)) &&
     (((char)(*(int * PTR32 *)&gen_args[0])[2] != '\0' && ((*(int * PTR32 *)&gen_args[0])[3] == 0)))) {
    uVar6 = *((undefined4 *)GEN_TOP((iVar5 + 4)));
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(iVar1));
    this = ((int *)GEN_TOP(F_005d5c60(uVar6 GEN_EDX_ARG,0x2d)));
  }
  else {
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(iVar1));
    this = ((int *)GEN_TOP(F_00406b90(0x80,0,0)));
    if (this == ((int *)GEN_TOP(0x0))) {
      this = ((int *)GEN_TOP(0x0));
    }
    else {
      F_005dd660(this GEN_EDX_ARG);
      *this = (int)(*(undefined * PTR32 (*)[70])REFP(0x10a4494));
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 4))))(this GEN_EDX_ARG,piVar3,0);
  this[0xd] = *((int *)GEN_TOP((iVar1 + 0x34)));
  if (piVar3[3] != 0) {
    uVar6 = *((undefined4 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x30)));
    iVar5 = piVar3[5];
    iVar1 = *this;
    uVar4 = F_00a1b550(piVar3[3] GEN_EDX_ARG);
    ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x114))))(this,uVar4,iVar5,uVar6);
    return (uint)this;
  }
  (*(int * PTR32 *)&gen_args[0]) = *((int * PTR32 *)GEN_TOP((iVar1 + 0x30)));
  pcVar2 = *((gen_code32 *)GEN_TOP((*this + 0x6c)));
  iVar5 = piVar3[5];
  (*pcVar2)(this,iVar5,&(*(int * PTR32 *)&gen_args[0]));
  return (uint)this;
}

/* ref: FUN_005e1ef0 */
GEN_OWN GEN_FRAME uint F_005e1ef0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5e1ef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  undefined * this;
  
  if (param_1[3] != 0) {
    piVar2 = ((int *)GEN_TOP(F_00a1b570(param_1[3] GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*((short *)GEN_TOP((iVar1 + 0x12))) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = ((int *)GEN_TOP(F_005d5c60(*((undefined4 *)GEN_TOP((iVar1 + 4))) GEN_EDX_ARG,0x29)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  this = ((undefined *)GEN_TOP(F_00406b90(0xa0,0,0)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    piVar2 = ((int *)GEN_TOP(F_005df0d0(this GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)&REFG(undefined, 0x0) + 4))))(0,param_1,0);
  return 0;
}

/* ref: FUN_005e1fa0 */
GEN_OWN GEN_FRAME uint F_005e1fa0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5e1fa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  
  if (param_1[3] != 0) {
    piVar2 = ((int *)GEN_TOP(F_00a1b570(param_1[3] GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*((short *)GEN_TOP((iVar1 + 0x12))) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = ((int *)GEN_TOP(F_005d5c60(*((undefined4 *)GEN_TOP((iVar1 + 4))) GEN_EDX_ARG,0x47)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  piVar2 = ((int *)GEN_TOP(F_00406b90(0x90,0,0)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    F_005dea10(piVar2 GEN_EDX_ARG);
    *piVar2 = (int)(*(undefined * PTR32 (*)[69])REFP(0x10a4a14));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)&REFG(undefined, 0x0) + 4))))(0,param_1,0);
  return 0;
}

/* ref: FUN_005e2050 */
GEN_OWN GEN_FRAME uint F_005e2050(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5e2050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  undefined * this;
  
  if (param_1[3] != 0) {
    piVar2 = ((int *)GEN_TOP(F_00a1b570(param_1[3] GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*((short *)GEN_TOP((iVar1 + 0x12))) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = ((int *)GEN_TOP(F_005d5c60(*((undefined4 *)GEN_TOP((iVar1 + 4))) GEN_EDX_ARG,0x2b)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  this = ((undefined *)GEN_TOP(F_00406b90(0xa0,0,0)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    piVar2 = ((int *)GEN_TOP(F_005df1c0(this GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)&REFG(undefined, 0x0) + 4))))(0,param_1,0);
  return 0;
}

/* ref: FUN_005e2100 */
GEN_OWN GEN_FRAME uint F_005e2100(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5e2100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  
  if (param_1[3] != 0) {
    piVar2 = ((int *)GEN_TOP(F_00a1b570(param_1[3] GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*((short *)GEN_TOP((iVar1 + 0x12))) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = ((int *)GEN_TOP(F_005d5c60(*((undefined4 *)GEN_TOP((iVar1 + 4))) GEN_EDX_ARG,0x2c)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  piVar2 = ((int *)GEN_TOP(F_00406b90(0x70,0,0)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    F_005df720(piVar2 GEN_EDX_ARG);
    *piVar2 = (int)(*(undefined * PTR32 (*)[68])REFP(0x10a4f8c));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)&REFG(undefined, 0x0) + 4))))(0,param_1,0);
  return 0;
}

/* ref: FUN_005e21b0 */
GEN_OWN GEN_FRAME uint F_005e21b0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5e21b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  
  if (param_1[3] != 0) {
    piVar2 = ((int *)GEN_TOP(F_00a1b570(param_1[3] GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*((short *)GEN_TOP((iVar1 + 0x12))) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = ((int *)GEN_TOP(F_005d5c60(*((undefined4 *)GEN_TOP((iVar1 + 4))) GEN_EDX_ARG,0x31)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  piVar2 = ((int *)GEN_TOP(F_00406b90(0x80,0,0)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    F_005dea10(piVar2 GEN_EDX_ARG);
    *piVar2 = (int)(*(undefined * PTR32 (*)[69])REFP(0x10a4c44));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)&REFG(undefined, 0x0) + 4))))(0,param_1,0);
  return 0;
}

/* ref: FUN_005e2260 */
GEN_OWN GEN_FRAME uint F_005e2260(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5e2260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  
  if (param_1[3] != 0) {
    piVar2 = ((int *)GEN_TOP(F_00a1b570(param_1[3] GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*((short *)GEN_TOP((iVar1 + 0x12))) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = ((int *)GEN_TOP(F_005d5c60(*((undefined4 *)GEN_TOP((iVar1 + 4))) GEN_EDX_ARG,0x3b)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  piVar2 = ((int *)GEN_TOP(F_00406b90(0x90,0,0)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    F_005df720(piVar2 GEN_EDX_ARG);
    *piVar2 = (int)(*(undefined * PTR32 (*)[68])REFP(0x10a31b4));
    piVar2[0x1c] = 0;
    F_00994550(piVar2 + 0x1d GEN_EDX_ARG,piVar2);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)&REFG(undefined, 0x0) + 4))))(0,param_1,0);
  return 0;
}

/* ref: FUN_005e2320 */
GEN_OWN GEN_FRAME uint F_005e2320(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5e2320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  undefined * this;
  
  if (param_1[3] != 0) {
    piVar2 = ((int *)GEN_TOP(F_00a1b570(param_1[3] GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*((short *)GEN_TOP((iVar1 + 0x12))) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = ((int *)GEN_TOP(F_005d5c60(*((undefined4 *)GEN_TOP((iVar1 + 4))) GEN_EDX_ARG,0x39)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  this = ((undefined *)GEN_TOP(F_00406b90(0x90,0,0)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    piVar2 = ((int *)GEN_TOP(F_005df360(this GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)&REFG(undefined, 0x0) + 4))))(0,param_1,0);
  return 0;
}

/* ref: FUN_005e23d0 */
GEN_OWN GEN_FRAME uint F_005e23d0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5e23d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  
  if (param_1[3] != 0) {
    piVar2 = ((int *)GEN_TOP(F_00a1b570(param_1[3] GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*((short *)GEN_TOP((iVar1 + 0x12))) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = ((int *)GEN_TOP(F_005d5c60(*((undefined4 *)GEN_TOP((iVar1 + 4))) GEN_EDX_ARG,0x3a)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  piVar2 = ((int *)GEN_TOP(F_00406b90(0x70,0,0)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    F_005df720(piVar2 GEN_EDX_ARG);
    *piVar2 = (int)(*(undefined * PTR32 (*)[68])REFP(0x10a50a4));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)&REFG(undefined, 0x0) + 4))))(0,param_1,0);
  return 0;
}

/* ref: FUN_005e2480 */
GEN_OWN GEN_FRAME uint F_005e2480(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5e2480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  undefined * this;
  
  if (param_1[3] != 0) {
    piVar2 = ((int *)GEN_TOP(F_00a1b570(param_1[3] GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*((short *)GEN_TOP((iVar1 + 0x12))) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = ((int *)GEN_TOP(F_005d5c60(*((undefined4 *)GEN_TOP((iVar1 + 4))) GEN_EDX_ARG,0x43)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  this = ((undefined *)GEN_TOP(F_00406b90(0x90,0,0)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    piVar2 = ((int *)GEN_TOP(F_005dfc70(this GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)&REFG(undefined, 0x0) + 4))))(0,param_1,0);
  return 0;
}

/* ref: FUN_005e2530 */
GEN_OWN GEN_FRAME uint F_005e2530(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5e2530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  
  if (param_1[3] != 0) {
    piVar2 = ((int *)GEN_TOP(F_00a1b570(param_1[3] GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*((short *)GEN_TOP((iVar1 + 0x12))) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = ((int *)GEN_TOP(F_005d5c60(*((undefined4 *)GEN_TOP((iVar1 + 4))) GEN_EDX_ARG,0x46)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  piVar2 = ((int *)GEN_TOP(F_00406b90(0x70,0,0)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    F_005df720(piVar2 GEN_EDX_ARG);
    *piVar2 = (int)(*(undefined * PTR32 (*)[68])REFP(0x10a52d4));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)&REFG(undefined, 0x0) + 4))))(0,param_1,0);
  return 0;
}

/* ref: FUN_005e25e0 */
GEN_OWN GEN_FRAME uint F_005e25e0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5e25e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  
  if (param_1[3] != 0) {
    piVar2 = ((int *)GEN_TOP(F_00a1b570(param_1[3] GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*((short *)GEN_TOP((iVar1 + 0x12))) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = ((int *)GEN_TOP(F_005d5c60(*((undefined4 *)GEN_TOP((iVar1 + 4))) GEN_EDX_ARG,0x48)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  piVar2 = ((int *)GEN_TOP(F_00406b90(0x80,0,0)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    F_005df720(piVar2 GEN_EDX_ARG);
    *piVar2 = (int)(*(undefined * PTR32 (*)[68])REFP(0x10a53ec));
    piVar2[0x1c] = 0;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)&REFG(undefined, 0x0) + 4))))(0,param_1,0);
  return 0;
}

/* ref: FUN_005e2690 */
GEN_OWN GEN_FRAME uint F_005e2690(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5e2690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  
  if (param_1[3] != 0) {
    piVar2 = ((int *)GEN_TOP(F_00a1b570(param_1[3] GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*((short *)GEN_TOP((iVar1 + 0x12))) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = ((int *)GEN_TOP(F_005d5c60(*((undefined4 *)GEN_TOP((iVar1 + 4))) GEN_EDX_ARG,0x41)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  piVar2 = ((int *)GEN_TOP(F_00406b90(0x70,0,0)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    F_005e10e0(piVar2 GEN_EDX_ARG);
    *piVar2 = (int)(*(undefined * PTR32 (*)[69])REFP(0x10a5624));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)&REFG(undefined, 0x0) + 4))))(0,param_1,0);
  return 0;
}

/* ref: FUN_005e2740 */
GEN_OWN GEN_FRAME uint F_005e2740(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5e2740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  
  if (param_1[3] != 0) {
    piVar2 = ((int *)GEN_TOP(F_00a1b570(param_1[3] GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*((short *)GEN_TOP((iVar1 + 0x12))) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = ((int *)GEN_TOP(F_005d5c60(*((undefined4 *)GEN_TOP((iVar1 + 4))) GEN_EDX_ARG,0x42)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  piVar2 = ((int *)GEN_TOP(F_00406b90(0x70,0,0)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    F_005e10e0(piVar2 GEN_EDX_ARG);
    *piVar2 = (int)(*(undefined * PTR32 (*)[69])REFP(0x10a573c));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)&REFG(undefined, 0x0) + 4))))(0,param_1,0);
  return 0;
}

/* ref: FUN_005e27f0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_005e27f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5e27f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x110, 0, 4);
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c));
  F_005da4e0(this GEN_EDX_FWD,((char *)(gen_frame + 0x8)),0x100);
  pcVar2 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  F_0040b1a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar2 - (int)(((char *)(gen_frame + 0x8)) + 1));
  uVar3 = F_00408810(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_004087f0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_005e2870 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005e2870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5e2870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  bVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    F_004bae60(REFG(void * PTR32, 0x1371290) GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 8))));
    uVar3 = F_006b8c00();
    if (*((char *)GEN_TOP((uVar3 + 0x1d3))) == '\0') {
      piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 100))))(piVar4 GEN_EDX_ARG);
      if ((char)uVar3 == '\0') {
        bVar2 = F_00b7c1b0(&REFG(undefined, 0x133e5c0) GEN_EDX_ARG);
      }
      else {
        bVar2 = F_005da590(*((undefined4 *)GEN_TOP(((int)this + 8))),0);
      }
    }
    else {
      bVar2 = F_005da590(*((undefined4 *)GEN_TOP(((int)this + 8))),1);
    }
    pvVar1 = REFG(void * PTR32, 0x1371290);
    *((byte *)GEN_TOP(((int)REFG(void * PTR32, 0x1371290) + 0x23))) = bVar2;
    *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x24))) = 0;
  }
  return bVar2;
}

/* ref: FUN_005e28f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005e28f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5e28f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  if (*((uint *)GEN_TOP(((int)REFG(void * PTR32, 0x1371290) + 4))) == uVar2) {
    uVar2 = F_004bae60(REFG(void * PTR32, 0x1371290) GEN_EDX_FWD,0);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined *)GEN_TOP(0x0))) {
    F_0068fa50(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    }
    uVar2 = 0;
    if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
      uVar3 = F_00406b30(*((int *)GEN_TOP(((int)this + 0xc))));
      uVar2 = (uint)uVar3;
      *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    }
  }
  return uVar2;
}

/* ref: Client::LayoutEngine::Terrain::TerrainManager::vf2 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005e2950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5e2950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  
  *(undefined4 *)(this + 0x11c) = 4;
  if (*(int *)(this + 0x14) != 0) {
    F_00c9f290(*(int *)(this + 0x14) GEN_EDX_FWD,0);
    F_00c9da30(*(undefined4 *)(this + 0x14) GEN_EDX_ARG,0);
    F_00551ae0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25e0))) GEN_EDX_ARG,*(undefined4 *)(this + 0x14));
    *(undefined4 *)(this + 0x14) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x10);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x10);
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *(undefined4 *)(this + 0x10) = 0;
    }
  }
  return;
}

/* ref: Client::LayoutEngine::Node::PointLayoutInstance::vf67 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005e29c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e29c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL(0x70, 0);
  float10 fVar1;
  float * pfVar2;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  pfVar2 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xfc))))(this GEN_EDX_FWD)));
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
  F_004efe70(((float *)(gen_frame + 0x10)) GEN_EDX_ARG,(uint)(pfVar2 + 4));
  (*(float *)(gen_frame + 0x40)) = (float)((float10)*pfVar2 + (float10)(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x44)) = (float)((float10)pfVar2[1] + (float10)(*(float *)(gen_frame + 0x44)));
  (*(float *)(gen_frame + 0x48)) = (float)((float10)pfVar2[2] + (float10)(*(float *)(gen_frame + 0x48)));
  pfVar2 = ((float *)GEN_TOP(F_005fe770(((float *)(gen_frame + 0x10)) GEN_EDX_ARG,(uint)((undefined1 *)(gen_frame + 0x0)))));
  *((float *)GEN_TOP((param_1 + 0x40))) = (float)((float10)*pfVar2 * (float10)REFG(float, 0x1302c60));
  *((float *)GEN_TOP((param_1 + 0x44))) = (float)((float10)pfVar2[1] * (float10)REFG(float, 0x1302c64));
  *((float *)GEN_TOP((param_1 + 0x48))) = (float)((float10)pfVar2[2] * (float10)REFG(float, 0x1302c68));
  F_005fe2e0(param_1,(uint)((float *)(gen_frame + 0x10)));
  F_005fe2e0(param_1 + 0x10,(uint)&(*(undefined4 *)(gen_frame + 0x20)));
  F_005fe2e0(param_1 + 0x20,(uint)&(*(undefined4 *)(gen_frame + 0x30)));
  *((float *)GEN_TOP((param_1 + 0x30))) = (*(float *)(gen_frame + 0x40));
  *((float *)GEN_TOP((param_1 + 0x34))) = (*(float *)(gen_frame + 0x44));
  *((float *)GEN_TOP((param_1 + 0x38))) = (*(float *)(gen_frame + 0x48));
  return param_1;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf3 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005e2af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5e2af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = *(int *)(this + 0x7c) - *(int *)(this + 0x78) >> 2;
  if (uVar3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x78) + uVar2 * 4))) + 0x10)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  uVar2 = *(int *)(this + 0x90) - *(int *)(this + 0x8c) >> 2;
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x8c) + uVar3 * 4)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return;
}

/* ref: FUN_005e2b50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005e2b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e2b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
  uint uVar1;
  int iVar2;
  
  if (this == ((undefined *)GEN_TOP(0x0))) {
    iVar2 = 0;
  }
  else {
    iVar2 = (int)this + 0x30;
  }
  ((int *)(gen_frame + 0x0))[1] = 0;
  ((int *)(gen_frame + 0x0))[3] = 0;
  ((int *)(gen_frame + 0x0))[2] = 0;
  (*(undefined2 *)(gen_frame + 0x21)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined1 *)(gen_frame + 0x1c)) = 0;
  ((int *)(gen_frame + 0x0))[0] = iVar2;
  ((int *)(gen_frame + 0x0))[4] = 5;
  (*(undefined4 *)(gen_frame + 0x1d)) = 0x101;
  (*(undefined1 *)(gen_frame + 0x14)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x18)) = 5000;
  uVar1 = F_00513dc0(param_1,((int *)(gen_frame + 0x0)),0,0);
  *((uint *)GEN_TOP(((int)this + 0x34))) = uVar1;
  *((uint *)GEN_TOP(((int)this + 0xa8))) = *((uint *)GEN_TOP(((int)this + 0xa8))) & 0xfffffff1 | 1;
  return uVar1;
}

/* ref: FUN_005e2bd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005e2bd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5e2bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0xa4)));
  if ((uVar1 != 0) && (*((char *)GEN_TOP((param_2 + 0x11))) == '\x06')) {
    *((uint *)GEN_TOP((param_2 + 0xa4))) = uVar1;
  }
  return uVar1;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf66 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005e2bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e2bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x140, 0);
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
  pfVar8 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xfc))))(this GEN_EDX_FWD)));
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
  F_004efe70(((float *)(gen_frame + 0x60)) GEN_EDX_ARG,(uint)(pfVar8 + 4));
  (*(float *)(gen_frame + 0x90)) = (float)((float10)(*(float *)(gen_frame + 0x90)) + (float10)*pfVar8);
  fVar10 = pfVar8[1];
  (*(float *)(gen_frame + 0x50)) = REFG(float, 0x1090708);
  (*(float *)(gen_frame + 0x94)) = (float)((float10)fVar10 + (float10)(*(float *)(gen_frame + 0x94)));
  (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1090708);
  (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1090708);
  (*(float *)(gen_frame + 0x98)) = (float)((float10)pfVar8[2] + (float10)(*(float *)(gen_frame + 0x98)));
  pfVar8 = ((float *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x50)),((float *)(gen_frame + 0x60)))));
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
  pfVar8 = ((float *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x50)),((float *)(gen_frame + 0x60)))));
  fVar10 = pfVar8[1];
  fVar14 = pfVar8[2];
  ((float *)(gen_frame + 0xb0))[0] = *pfVar8;
  ((float *)(gen_frame + 0xb0))[1] = fVar10;
  ((float *)(gen_frame + 0xb0))[2] = fVar14;
  (*(float *)(gen_frame + 0x50)) = REFG(float, 0x1090708);
  (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1090708);
  puVar9 = ((undefined4 *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x50)),((float *)(gen_frame + 0x60)))));
  uVar1 = puVar9[1];
  uVar2 = puVar9[2];
  ((float *)(gen_frame + 0xb0))[4] = gen_bits2f(*puVar9);
  (*(float *)(gen_frame + 0x50)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1087f04);
  ((float *)(gen_frame + 0xb0))[5] = gen_bits2f(uVar1);
  (*(undefined4 *)(gen_frame + 0xc8)) = uVar2;
  (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1090708);
  puVar9 = ((undefined4 *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x50)),((float *)(gen_frame + 0x60)))));
  uVar1 = puVar9[1];
  uVar2 = puVar9[2];
  (*(undefined4 *)(gen_frame + 0xd0)) = *puVar9;
  (*(float *)(gen_frame + 0x50)) = REFG(float, 0x1090708);
  (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0xd4)) = uVar1;
  (*(undefined4 *)(gen_frame + 0xd8)) = uVar2;
  (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1087f04);
  puVar9 = ((undefined4 *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x50)),((float *)(gen_frame + 0x60)))));
  (*(undefined4 *)(gen_frame + 0xe0)) = *puVar9;
  (*(undefined4 *)(gen_frame + 0xe4)) = puVar9[1];
  (*(undefined4 *)(gen_frame + 0xe8)) = puVar9[2];
  (*(float *)(gen_frame + 0x50)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1090708);
  (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1087f04);
  puVar9 = ((undefined4 *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x50)),((float *)(gen_frame + 0x60)))));
  uVar1 = puVar9[1];
  uVar2 = puVar9[2];
  (*(undefined4 *)(gen_frame + 0xf0)) = *puVar9;
  (*(float *)(gen_frame + 0x50)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0xf4)) = uVar1;
  (*(undefined4 *)(gen_frame + 0xf8)) = uVar2;
  (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1087f04);
  puVar9 = ((undefined4 *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x50)),((float *)(gen_frame + 0x60)))));
  (*(undefined4 *)(gen_frame + 0x100)) = *puVar9;
  (*(undefined4 *)(gen_frame + 0x104)) = puVar9[1];
  (*(undefined4 *)(gen_frame + 0x108)) = puVar9[2];
  (*(float *)(gen_frame + 0x50)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1087f04);
  puVar9 = ((undefined4 *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x50)),((float *)(gen_frame + 0x60)))));
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
    iVar13 = iVar13 - 1;
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
      if ((*((char *)GEN_TOP(((int)piVar6 + 0x11))) != '\x03') && (*((char *)GEN_TOP(((int)piVar6 + 0x11))) != '\a')) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x108))))(piVar6 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)));
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
  return (uint)param_1;
}

/* ref: FUN_005e3290 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005e3290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e3290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  int * piVar2;
  uint uVar3;
  uint local_8;
  
  uVar3 = *((int *)GEN_TOP(((int)this + 0x7c))) - *((int *)GEN_TOP(((int)this + 0x78))) >> 2;
  local_8 = 0;
  if (uVar3 != 0) {
    do {
      piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x78))) + local_8 * 4))) + 0x10)));
      if ((*((char *)GEN_TOP(((int)this + 0xc1))) == '\0') ||
         (*((char *)GEN_TOP(((int)this + 0xc1))) ==
          (char)((uint)piVar2[6] >> GEN_SHC(('\x04' - (*(byte *)(piVar2 + 10) >> 4)) * '\b', ('\x04' - (*(byte *)(piVar2 + 10) >> 4)) * '\b')))) {
        if (*((char *)GEN_TOP(((int)piVar2 + 0x11))) == '\x06') {
          uVar1 = F_005e3290(piVar2 GEN_EDX_FWD,param_1);
          if (uVar1 != 0) {
            return uVar1;
          }
        }
        else if (((*((char *)GEN_TOP(((int)piVar2 + 0x11))) != '\x04') &&
                 (piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x5c))))(piVar2 GEN_EDX_ARG))), piVar2 != ((int *)GEN_TOP(0x0)))) &&
                (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x50))))(piVar2 GEN_EDX_ARG,param_1), (char)uVar1 != '\0')) {
          return (uint)piVar2;
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < uVar3);
  }
  return 0;
}

/* ref: FUN_005e3350 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005e3350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e3350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = *((int *)GEN_TOP(((int)this + 0x7c))) - *((int *)GEN_TOP(((int)this + 0x78))) >> 2;
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      uVar3 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x78))) + uVar4 * 4)));
      this_00 = *((undefined * PTR32 *)GEN_TOP((uVar3 + 0x10)));
      if (*((char *)GEN_TOP(((int)this_00 + 0x11))) == 'D') {
        iVar1 = *((int *)GEN_TOP(((int)this_00 + 0x50)));
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
      else if ((((*((char *)GEN_TOP(((int)this + 0xc1))) == '\0') ||
                (*((char *)GEN_TOP(((int)this + 0xc1))) ==
                 (char)(*((uint *)GEN_TOP(((int)this_00 + 0x18))) >>
                       (('\x04' - (*((byte *)GEN_TOP(((int)this_00 + 0x28))) >> 4)) * '\b' & 0x1f)))) &&
               (*((char *)GEN_TOP(((int)this_00 + 0x11))) == '\x06')) &&
              (uVar3 = F_005e3350(this_00 GEN_EDX_FWD,param_1), uVar3 != 0)) {
        return uVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return 0;
}

/* ref: FUN_005e3480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005e3480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5e3480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_005dbaf0(this GEN_EDX_FWD,(undefined1)param_1,param_2,0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_005e34a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005e34a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5e34a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  byte bVar1;
  uint uVar2;
  
  if (param_1 < 0x10) {
    if (*((int *)GEN_TOP(((int)this + 0x78))) == *((int *)GEN_TOP(((int)this + 0x7c)))) {
      *((char *)GEN_TOP(((int)this + 0xe1))) = (char)param_1;
      *((undefined1 *)GEN_TOP(((int)this + 0xd8))) = 3;
      *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = param_2;
      return 1;
    }
    bVar1 = *((byte *)GEN_TOP((param_1 + 0xc5 + (int)this)));
    if (bVar1 != 0) {
      uVar2 = F_005dc030(((undefined *)GEN_TOP(((int)this + 0x88))) GEN_EDX_FWD,
                           (uint)bVar1 <<
                           (('\x04' - ((*((byte *)GEN_TOP(((int)this + 0x28))) >> 4) + 1)) * '\b' & 0x1f) |
                           *((uint *)GEN_TOP(((int)this + 0x18))));
      if (uVar2 != 0) {
        F_005dbf70(uVar2 GEN_EDX_ARG,0xffffffff,param_2);
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_005e3530 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005e3530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e3530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  
  if ((param_1 < 0x10) && (bVar1 = *((byte *)GEN_TOP((param_1 + 0xc5 + (int)this))), bVar1 != 0)) {
    uVar3 = *((int *)GEN_TOP(((int)this + 0x90))) - *((int *)GEN_TOP(((int)this + 0x8c))) >> 2;
    uVar4 = 0;
    if (uVar3 != 0) {
      piVar5 = *((int * PTR32 *)GEN_TOP(((int)this + 0x8c)));
      do {
        iVar2 = *piVar5;
        if (*((uint *)GEN_TOP((iVar2 + 0x18))) ==
            ((uint)bVar1 << GEN_SHC(('\x04' - ((*((byte *)GEN_TOP(((int)this + 0x28))) >> 4) + 1)) * '\b', ('\x04' - ((*((byte *)GEN_TOP(((int)this + 0x28))) >> 4) + 1)) * '\b') |
            *((uint *)GEN_TOP(((int)this + 0x18))))) {
          *((undefined1 *)GEN_TOP((iVar2 + 0x48))) = 3;
          if ((*((uint *)GEN_TOP((iVar2 + 0x30))) & 0xc0000000) != 0) {
            F_00b5b440(REFG(void * PTR32, 0x14c4e84) GEN_EDX_FWD,((uint *)GEN_TOP((iVar2 + 0x30))),0);
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
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005e35d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e35d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  int * piVar5;
  
  uVar3 = param_1;
  if (param_1 < 0x10) {
    bVar2 = *((byte *)GEN_TOP((param_1 + 0xc5 + (int)this)));
    uVar3 = CONCAT31((int3)(param_1 >> 8),bVar2);
    if (bVar2 != 0) {
      uVar3 = *((int *)GEN_TOP(((int)this + 0x90))) - *((int *)GEN_TOP(((int)this + 0x8c))) >> 2;
      uVar4 = 0;
      if (uVar3 != 0) {
        piVar5 = *((int * PTR32 *)GEN_TOP(((int)this + 0x8c)));
        do {
          iVar1 = *piVar5;
          if (*((uint *)GEN_TOP((iVar1 + 0x18))) ==
              ((uint)bVar2 << GEN_SHC(('\x04' - ((*((byte *)GEN_TOP(((int)this + 0x28))) >> 4) + 1)) * '\b', ('\x04' - ((*((byte *)GEN_TOP(((int)this + 0x28))) >> 4) + 1)) * '\b') |
              *((uint *)GEN_TOP(((int)this + 0x18))))) {
            uVar3 = iVar1 + 0x30;
            if ((*((uint *)GEN_TOP((iVar1 + 0x30))) & 0xc0000000) != 0) {
              bVar2 = F_00b5b740(REFG(void * PTR32, 0x14c4e84) GEN_EDX_FWD,uVar3);
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
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005e3670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5e3670u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP(((int)this + 0x78))) == *((int *)GEN_TOP(((int)this + 0x7c)))) {
    *((int *)GEN_TOP(((int)this + 0xe4))) = param_1;
    *((undefined1 *)GEN_TOP(((int)this + 0xe0))) = (undefined1)param_2;
    *((undefined1 *)GEN_TOP(((int)this + 0xd8))) = 4;
    *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = param_3;
    return 1;
  }
  uVar1 = *((int *)GEN_TOP(((int)this + 0x90))) - *((int *)GEN_TOP(((int)this + 0x8c))) >> 2;
  uVar3 = 0;
  if (uVar1 != 0) {
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x8c)));
    do {
      if (*((int *)GEN_TOP((*piVar2 + 0x18))) == param_1) {
        F_005dbf70(*piVar2 GEN_EDX_FWD,param_2,param_3);
        return 1;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}

/* ref: FUN_005e3700 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005e3700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e3700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar2 = *((int *)GEN_TOP(((int)this + 0x90))) - *((int *)GEN_TOP(((int)this + 0x8c))) >> 2;
  uVar4 = 0;
  if (uVar2 != 0) {
    piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x8c)));
    do {
      iVar1 = *piVar3;
      if (*((int *)GEN_TOP((iVar1 + 0x18))) == param_1) {
        *((undefined1 *)GEN_TOP((iVar1 + 0x48))) = 3;
        if ((*((uint *)GEN_TOP((iVar1 + 0x30))) & 0xc0000000) != 0) {
          F_00b5b440(REFG(void * PTR32, 0x14c4e84) GEN_EDX_FWD,iVar1 + 0x30,0);
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
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005e3760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e3760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar2 = *((int *)GEN_TOP(((int)this + 0x90))) - *((int *)GEN_TOP(((int)this + 0x8c))) >> 2;
  uVar4 = 0;
  if (uVar2 != 0) {
    piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x8c)));
    do {
      iVar1 = *piVar3;
      if (*((int *)GEN_TOP((iVar1 + 0x18))) == param_1) {
        *((undefined1 *)GEN_TOP((iVar1 + 0x48))) = 5;
        if ((*((uint *)GEN_TOP((iVar1 + 0x30))) & 0xc0000000) != 0) {
          F_00b5b950(REFG(void * PTR32, 0x14c4e84) GEN_EDX_FWD,iVar1 + 0x30);
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
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005e37c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e37c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar2 = *((int *)GEN_TOP(((int)this + 0x90))) - *((int *)GEN_TOP(((int)this + 0x8c))) >> 2;
  uVar4 = 0;
  if (uVar2 != 0) {
    piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x8c)));
    do {
      iVar1 = *piVar3;
      if (*((int *)GEN_TOP((iVar1 + 0x18))) == param_1) {
        *((undefined1 *)GEN_TOP((iVar1 + 0x48))) = 6;
        if (((*((byte *)GEN_TOP((iVar1 + 0x44))) & 2) != 0) && ((*((uint *)GEN_TOP((iVar1 + 0x30))) & 0xc0000000) != 0)) {
          F_00b5b9b0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_FWD,iVar1 + 0x30);
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
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005e3830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e3830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar2 = *((int *)GEN_TOP(((int)this + 0x90))) - *((int *)GEN_TOP(((int)this + 0x8c))) >> 2;
  uVar4 = 0;
  if (uVar2 != 0) {
    piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x8c)));
    do {
      iVar1 = *piVar3;
      if (*((int *)GEN_TOP((iVar1 + 0x18))) == param_1) {
        if ((*((uint *)GEN_TOP((iVar1 + 0x30))) & 0xc0000000) == 0) {
          return 0;
        }
        return (int)*((char *)GEN_TOP((iVar1 + 0x48)));
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar4 < uVar2);
  }
  return 0;
}

/* ref: FUN_005e3880 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005e3880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e3880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  int * piVar4;
  uint uVar5;
  
  uVar3 = *((int *)GEN_TOP(((int)this + 0x90))) - *((int *)GEN_TOP(((int)this + 0x8c))) >> 2;
  uVar5 = 0;
  if (uVar3 != 0) {
    piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0x8c)));
    do {
      iVar1 = *piVar4;
      if (*((int *)GEN_TOP((iVar1 + 0x18))) == param_1) {
        uVar3 = iVar1 + 0x30;
        if ((*((uint *)GEN_TOP((iVar1 + 0x30))) & 0xc0000000) != 0) {
          bVar2 = F_00b5b740(REFG(void * PTR32, 0x14c4e84) GEN_EDX_FWD,uVar3);
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
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005e38e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x5e38e0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *((int *)GEN_TOP((param_1 + 0x7c))) - *((int *)GEN_TOP((param_1 + 0x78))) >> 2;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x78))) + uVar3 * 4))) + 0x10)));
      if ((*((byte *)GEN_TOP(((int)piVar1 + 0x2b))) & 2) == 0) {
        if (*((char *)GEN_TOP(((int)piVar1 + 0x11))) == '\x01') {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x98))))(piVar1 GEN_EDX_FWD,param_2,(undefined4)gen_fl2bits(param_3));
        }
      }
      else {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x98))))(piVar1 GEN_EDX_ARG,param_2,(undefined4)gen_fl2bits(param_3));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return;
}

/* ref: FUN_005e3950 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005e3950(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5e3950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  byte bVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  
  bVar1 = *((byte *)GEN_TOP((param_1 + 0xb4)));
  uVar2 = CONCAT31((int3)(param_2 >> 8),bVar1);
  fVar3 = (float10)*(double *)&REFG(undefined, 0x1088070);
  fVar5 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0xbc))) + (float10)*((float *)GEN_TOP(param_2)) * fVar3)));
  fVar4 = (float10)fVar5;
  *((float *)GEN_TOP((param_1 + 0xbc))) = fVar5;
  if (!(fVar4 < fVar3)) {
    fVar5 = REFG(float, 0x1087f04);
    if ((bVar1 & 1) == 0) {
      fVar5 = 0.0;
    }
    F_005e38e0(param_1 GEN_EDX_FWD,uVar2 & 0xffffff01,fVar5);
    return 1;
  }
  param_2 = (uint)gen_fl2bits((float)(fVar4 / fVar3));
  if ((bVar1 & 1) == 0) {
    param_2 = (uint)gen_fl2bits((float)((float10)1 - ((float10)GEN_TOD(gen_bits2f(param_2)))));
  }
  F_005e38e0(param_1 GEN_EDX_ARG,uVar2 & 0xffffff01,GEN_ARGF(gen_bits2f(param_2)));
  return 0;
}

/* ref: FUN_005e39e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005e39e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5e39e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  int * piVar3;
  
  if (*((int *)GEN_TOP(((int)this + 4))) == 0) {
    uVar2 = *((uint *)GEN_TOP((param_1 + 0x14)));
  }
  else {
    uVar2 = *((uint *)GEN_TOP((param_1 + 0x18))) >> GEN_SHC(('\x04' - (*((byte *)GEN_TOP((param_1 + 0x28))) >> 4)) * '\b', ('\x04' - (*((byte *)GEN_TOP((param_1 + 0x28))) >> 4)) * '\b')
            & 0xff;
  }
  switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP((param_1 + 0x11))))) {
  case 1: ;
    if (uVar2 == *((byte *)GEN_TOP((param_2 + 1)))) {
      *((int *)GEN_TOP(((int)this + 0x3c))) = param_1;
      uVar2 = F_005dc5c0(this GEN_EDX_FWD,0,param_1);
      return uVar2;
    }
    if (uVar2 == *((byte *)GEN_TOP((param_2 + 2)))) {
      *((int *)GEN_TOP(((int)this + 0x40))) = param_1;
      uVar2 = F_005dc5c0(this GEN_EDX_ARG,1,param_1);
      return uVar2;
    }
    if (uVar2 == *((byte *)GEN_TOP((param_2 + 0x16)))) {
      *((int *)GEN_TOP(((int)this + 0x44))) = param_1;
      uVar2 = F_005dc5c0(this GEN_EDX_ARG,2,param_1);
      return uVar2;
    }
    if (uVar2 == *((byte *)GEN_TOP((param_2 + 0x17)))) {
      *((int *)GEN_TOP(((int)this + 0x48))) = param_1;
      uVar2 = F_005dc5c0(this GEN_EDX_ARG,3,param_1);
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
    if (uVar2 == *((byte *)GEN_TOP((param_2 + 0x14)))) {
      *((int *)GEN_TOP(((int)this + 0x54))) = param_1;
      return uVar2;
    }
    if (uVar2 == *((byte *)GEN_TOP((param_2 + 0x15)))) {
      *((int *)GEN_TOP(((int)this + 0x58))) = param_1;
      return uVar2;
    }
    bVar1 = F_005d8820(param_1 GEN_EDX_ARG);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) && (*((int *)GEN_TOP(((int)this + 0x50))) == 0)) {
      *((int *)GEN_TOP(((int)this + 0x50))) = param_1;
      return uVar2;
    }
    break;
  case 0x39: ;
    uVar2 = 0;
    piVar3 = ((int *)GEN_TOP(((int)this + 0x5c)));
    while (*piVar3 != 0) {
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
      if (3 < uVar2) {
        return uVar2;
      }
    }
    *((int *)GEN_TOP(((int)this + uVar2 * 4 + 0x5c))) = param_1;
    break;
  case 0x3a: ;
    if (*((int *)GEN_TOP(((int)this + 0x4c))) == 0) {
      *((int *)GEN_TOP(((int)this + 0x4c))) = param_1;
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
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005e3b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5e3b70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_1;
  cVar1 = *((char *)GEN_TOP((param_1 + 0x11)));
  if (*((int *)GEN_TOP(((int)this + 4))) == 0) {
    uVar3 = *((uint *)GEN_TOP((param_1 + 0x14)));
  }
  else {
    uVar3 = *((uint *)GEN_TOP((param_1 + 0x18))) >> GEN_SHC(('\x04' - (*((byte *)GEN_TOP((param_1 + 0x28))) >> 4)) * '\b', ('\x04' - (*((byte *)GEN_TOP((param_1 + 0x28))) >> 4)) * '\b')
            & 0xff;
  }
  if (cVar1 == '\x01') {
    if (uVar3 == *((byte *)GEN_TOP((param_2 + 1)))) {
      *((uint *)GEN_TOP(((int)this + 0x38))) = param_1;
      uVar2 = F_005dcd10(this GEN_EDX_FWD,0,param_1);
      return uVar2;
    }
  }
  else if (cVar1 == '\x04') {
    if (uVar3 == *((byte *)GEN_TOP((param_2 + 0x10)))) {
      *((uint *)GEN_TOP(((int)this + 0x3c))) = param_1;
      uVar2 = F_005dcd10(this GEN_EDX_ARG,1,param_1);
    }
    else if (uVar3 == *((byte *)GEN_TOP((param_2 + 0x15)))) {
      *((uint *)GEN_TOP(((int)this + 0x40))) = param_1;
      uVar2 = F_005dcd10(this GEN_EDX_ARG,2,param_1);
      return uVar2;
    }
  }
  else if (cVar1 == '\a') {
    if (uVar3 == *((byte *)GEN_TOP((param_2 + 0x12)))) {
      *((uint *)GEN_TOP(((int)this + 0x44))) = param_1;
      return uVar2;
    }
    if (uVar3 == *((byte *)GEN_TOP((param_2 + 0x13)))) {
      *((uint *)GEN_TOP(((int)this + 0x48))) = param_1;
      return uVar2;
    }
    if (uVar3 == *((byte *)GEN_TOP((param_2 + 0x14)))) {
      *((uint *)GEN_TOP(((int)this + 0x4c))) = param_1;
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_005e3c50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005e3c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e3c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  *((undefined1 *)GEN_TOP(((int)this + 0x20))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 1;
  *((undefined2 *)GEN_TOP(((int)this + 0x21))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x28))),0,0x50);
  bVar1 = F_005dcf90(this GEN_EDX_ARG,param_1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_005e3ca0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005e3ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e3ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 1;
  *((undefined2 *)GEN_TOP(((int)this + 0x20))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x22))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x28))),0,0x50);
  if (*param_1 == '\0') {
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    return (uint)param_1;
  }
  bVar1 = F_005dcf90(this GEN_EDX_ARG,param_1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_005e3cf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005e3cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e3cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x1c)));
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
  uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
  uVar4 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 1;
  *((undefined2 *)GEN_TOP(((int)this + 0x20))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0x22))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x28))),0,0x50);
  if (*param_1 == '\0') {
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  }
  else {
    F_005dcf90(this GEN_EDX_ARG,param_1);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = uVar1;
  *((uint *)GEN_TOP(((int)this + 0x1c))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = uVar3;
  return uVar2;
}

/* ref: FUN_005e3d80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005e3d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5e3d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  byte bVar1;
  uint in_EAX = 0;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  if (*((int *)GEN_TOP(((int)this + 0x1c))) != 1) {
    in_EAX = *((uint *)GEN_TOP(((int)this + 0x24)));
    if (in_EAX == 0) {
      uVar2 = F_00c4f2dd();
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
      in_EAX = (int)uVar2 / (int)(uint)*((byte *)GEN_TOP(((int)this + 0x22)));
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        uVar2 = (uint)*((byte *)GEN_TOP(((int)uVar2 % (int)(uint)*((byte *)GEN_TOP(((int)this + 0x22))) + 0x28 +
                               (int)this))) <<
                (('\x04' - ((*((byte *)GEN_TOP(((int)this_00 + 0x28))) >> 4) + 1)) * '\b' & 0x1f) |
                *((uint *)GEN_TOP(((int)this_00 + 0x18)));
        *((uint *)GEN_TOP(((int)this + 0x24))) = uVar2;
        bVar1 = F_005e3670(this_00 GEN_EDX_ARG,uVar2,0xffffffff,0);
        in_EAX = CONCAT31(extraout_var,bVar1);
      }
    }
    else if (((*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) &&
             (in_EAX = F_005e3880(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,in_EAX), (char)in_EAX == '\0')) &&
            (*((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0, *((char *)GEN_TOP(((int)this + 0x20))) == '\0')) {
      *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 1;
      return in_EAX;
    }
  }
  return in_EAX;
}

/* ref: FUN_005e3e00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005e3e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5e3e00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x24)));
  if (uVar2 != 0) {
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
      bVar1 = F_005e3700(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,uVar2);
      uVar2 = CONCAT31(extraout_var,bVar1);
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 1;
  }
  return uVar2;
}

/* ref: FUN_005e3e30 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005e3e30(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5e3e30u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  unsigned int gen_args[1];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
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
  if (*((int *)GEN_TOP((in_ecx + 0xc))) == 8) {
    fVar7 = (float10)(*(float *)&gen_args[0]);
    fVar1 = *((float *)GEN_TOP((in_ecx + 0x2c)));
    fVar2 = ((float)GEN_TOF((fVar7 + (float10)*((float *)GEN_TOP((in_ecx + 0x34))))));
    (*(float *)(gen_frame + 0x8)) = fVar1;
    fVar8 = (float10)fVar2;
    (*(float *)&gen_args[0]) = REFG(float, 0x1087f04);
    *((float *)GEN_TOP((in_ecx + 0x34))) = fVar2;
    fVar4 = (float10)1;
    if ((GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0)) && (fVar8 < (float10)fVar1)) {
      (*(float *)(gen_frame + 0x8)) = fVar5;
      (*(float *)(gen_frame + 0x4)) = 0.0;
      pfVar6 = &(*(float *)&gen_args[0]);
      fVar1 = ((float)GEN_TOF((((float10)1 / (float10)fVar1) * fVar8)));
      (*(float *)&gen_args[0]) = fVar1;
      if (!((float10)fVar1 < fVar4)) {
        pfVar6 = &(*(float *)(gen_frame + 0x8));
      }
      if (!(0.0 < *pfVar6)) {
        pfVar6 = &(*(float *)(gen_frame + 0x4));
      }
      (*(float *)&gen_args[0]) = *pfVar6;
    }
    fVar1 = *((float *)GEN_TOP((in_ecx + 0x30)));
    (*(float *)(gen_frame + 0x4)) = fVar1;
    if (GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0)) {
      fVar2 = *((float *)GEN_TOP((in_ecx + 0x28)));
      (*(float *)(gen_frame + 0x8)) = fVar2;
      fVar3 = *((float *)GEN_TOP((in_ecx + 0x34)));
      (*(float *)(gen_frame + 0x0)) = fVar3;
      fVar8 = (float10)fVar2;
      fVar9 = (float10)fVar3;
      if (fVar8 - (float10)fVar1 < fVar9) {
        (*(float *)(gen_frame + 0x0)) = fVar5;
        (*(float *)(gen_frame + 0x4)) = 0.0;
        pfVar6 = &(*(float *)&gen_args[0]);
        fVar1 = ((float)GEN_TOF((((float10)1 / (float10)fVar1) * (fVar8 - fVar9))));
        (*(float *)&gen_args[0]) = fVar1;
        if (!((float10)fVar1 < fVar4)) {
          pfVar6 = &(*(float *)(gen_frame + 0x0));
        }
        if (!(0.0 < *pfVar6)) {
          pfVar6 = &(*(float *)(gen_frame + 0x4));
        }
        (*(float *)&gen_args[0]) = *pfVar6;
      }
    }
    fVar1 = *((float *)GEN_TOP((in_ecx + 0x28)));
    (*(float *)(gen_frame + 0x8)) = fVar1;
    fVar8 = (float10)fVar1;
    fVar1 = (float)(fVar7 / fVar8);
    (*(float *)(gen_frame + 0x0)) = fVar1;
    fVar1 = ((float)GEN_TOF(((float10)fVar1 * (float10)*((float *)GEN_TOP((in_ecx + 0x14))))));
    (*(float *)(gen_frame + 0x0)) = fVar1;
    fVar7 = (float10)fVar1;
    fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x38))) * fVar7 +
                   (float10)((float)GEN_TOF((fVar7 * (float10)(*(float *)&gen_args[0]) + (float10)*((float *)GEN_TOP((in_ecx + 0x24)))))))));
    *((float *)GEN_TOP((in_ecx + 0x24))) = fVar1;
    if ((((!GEN_ISNAN((float10)fVar1) && !GEN_ISNAN(fVar4)) && !((float10)fVar1 <= fVar4)) ||
        (!GEN_ISNAN(fVar1) && !(0.0 <= fVar1))) || (fVar8 < (float10)*((float *)GEN_TOP((in_ecx + 0x34))))) {
      *((undefined4 *)GEN_TOP((in_ecx + 0x34))) = 0;
      if (*((char *)GEN_TOP((in_ecx + 0x1c))) != '\0') {
        if (!(fVar1 < 0.0)) {
          *((undefined4 *)GEN_TOP((in_ecx + 0x24))) = 0;
          return;
        }
        *((float *)GEN_TOP((in_ecx + 0x24))) = fVar5;
        return;
      }
      *((undefined4 *)GEN_TOP((in_ecx + 0xc))) = 9;
      pfVar6 = ((float *)GEN_TOP((in_ecx + 0x24)));
      fVar1 = *pfVar6;
      fVar2 = *pfVar6;
      fVar3 = *pfVar6;
      (*(float *)&gen_args[0]) = fVar5;
      (*(float *)(gen_frame + 0x0)) = 0.0;
      pfVar6 = ((float *)GEN_TOP((in_ecx + 0x24)));
      if ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar1)) || (fVar5 < fVar3 || fVar5 == fVar2)) {
        pfVar6 = &(*(float *)&gen_args[0]);
      }
      if (!(0.0 < *pfVar6)) {
        pfVar6 = &(*(float *)(gen_frame + 0x0));
      }
      *((float *)GEN_TOP((in_ecx + 0x24))) = *pfVar6;
    }
  }
  return;
}

/* ref: FUN_005e3ff0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005e3ff0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5e3ff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if ((param_2 & 1) != 0) {
    F_005dd120(param_1 + 0x98,GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x70)))),GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x84)))),GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x78)))),GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x8c)))));
  }
  if ((param_2 & 2) != 0) {
    F_005dd120(param_1 + 0xa8,GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x74)))),GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x88)))),GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x78)))),GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x8c)))));
  }
  if ((param_2 & 4) != 0) {
    F_005dd120(param_1 + 0xb8,GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x7c)))),GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x90)))),GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x80)))),GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x94)))));
  }
  return;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf19 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005e40b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5e40b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x38);
  if (uVar2 != 0xffffffff) {
    uVar2 = F_00a1b870(this[0x11],uVar2);
    if (((uVar2 != 0) && (*((int *)GEN_TOP((uVar2 + 0x7c))) == 0)) &&
       (piVar1 = *((int * PTR32 *)GEN_TOP((uVar2 + 0xf0))), uVar2 = 0, piVar1 != ((int *)GEN_TOP(0x0)))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_ARG);
    }
  }
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005e40f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5e40f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x38);
  if (uVar2 != 0xffffffff) {
    uVar2 = F_00a1b870(this[0x11],uVar2);
    if (((uVar2 != 0) && (*((int *)GEN_TOP((uVar2 + 0x7c))) == 0)) &&
       (piVar1 = *((int * PTR32 *)GEN_TOP((uVar2 + 0xf0))), uVar2 = 0, piVar1 != ((int *)GEN_TOP(0x0)))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x50))))(piVar1 GEN_EDX_ARG,param_1,param_2);
    }
  }
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf21 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005e4140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5e4140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*(int *)(this + 0x38) != -1) {
    uVar1 = F_00a1b870(this[0x11],*(int *)(this + 0x38));
    return uVar1 != 0;
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf22 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005e4180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5e4180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  undefined3 uVar5;
  
  uVar4 = *(uint *)(this + 0x38);
  if (uVar4 != 0xffffffff) {
    uVar4 = F_00a1b870(this[0x11],uVar4);
    if (uVar4 != 0) {
      if (this[0x11] == (undefined1)0xe) {
        iVar2 = *((int *)GEN_TOP((uVar4 + 0xec)));
        uVar4 = 0;
        if (iVar2 != 0) {
          cVar1 = *((char *)GEN_TOP((iVar2 + 0x65)));
          uVar5 = (undefined3)((uint)iVar2 >> 8);
          uVar4 = CONCAT31(uVar5,cVar1);
          if (cVar1 != '\x04') {
            return CONCAT31(uVar5,cVar1 == '\x03');
          }
        }
      }
      else if (*(int *)(this + 0x38) != -1) {
        uVar4 = F_00a1b870(this[0x11],*(int *)(this + 0x38));
        if (((uVar4 != 0) && (*((int *)GEN_TOP((uVar4 + 0x7c))) == 0)) &&
           (piVar3 = *((int * PTR32 *)GEN_TOP((uVar4 + 0xf0))), uVar4 = 0, piVar3 != ((int *)GEN_TOP(0x0)))) {
          uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x58))))(piVar3 GEN_EDX_ARG);
          return uVar4;
        }
      }
    }
  }
  return CONCAT31((int3)(uVar4 >> 8),1);
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf65 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005e4210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e4210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  int * piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  if (*(int *)(this + 0x38) != -1) {
    uVar4 = F_00a1b870(this[0x11],*(int *)(this + 0x38));
    if (((uVar4 != 0) && (*((int *)GEN_TOP((uVar4 + 0x7c))) == 0)) &&
       (piVar2 = *((int * PTR32 *)GEN_TOP((uVar4 + 0xf0))), piVar2 != ((int *)GEN_TOP(0x0)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x104))))(piVar2 GEN_EDX_ARG,param_1);
      return (uint)param_1;
    }
  }
  puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_ARG)));
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  *param_1 = *puVar5;
  param_1[1] = puVar5[1];
  uVar1 = puVar5[2];
  param_1[3] = uVar3;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf66 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005e42a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e42a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0xa0, 0);
  undefined1 GVar1;
  int * piVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  if (*(int *)(this + 0x38) != -1) {
    GVar1 = this[0x11];
    (*(undefined1 *)(gen_frame + 0x2c)) = GVar1;
    *(undefined4 *)&(*(undefined1 *)(gen_frame + 0x2c)) = CONCAT31((*(undefined3 *)(gen_frame + 0x2d)),GVar1);
    uVar3 = F_00a1b870(GVar1,*(int *)(this + 0x38));
    if (((uVar3 != 0) && (*((int *)GEN_TOP((uVar3 + 0x7c))) == 0)) &&
       (piVar2 = *((int * PTR32 *)GEN_TOP((uVar3 + 0xf0))), piVar2 != ((int *)GEN_TOP(0x0)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x108))))(piVar2 GEN_EDX_ARG,param_1);
      return (uint)param_1;
    }
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10c))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)));
  F_00a1cb90(&(*(undefined4 *)(gen_frame + 0x0)),uVar3);
  *param_1 = (*(undefined4 *)(gen_frame + 0x0));
  param_1[1] = (*(undefined4 *)(gen_frame + 0x4));
  param_1[2] = (*(undefined4 *)(gen_frame + 0x8));
  param_1[4] = (*(undefined4 *)(gen_frame + 0x10));
  param_1[5] = (*(undefined4 *)(gen_frame + 0x14));
  param_1[6] = (*(undefined4 *)(gen_frame + 0x18));
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf67 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005e4390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e4390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x80, 0);
  float fVar1;
  undefined1 GVar2;
  int * piVar3;
  float10 fVar4;
  uint uVar5;
  float * pfVar6;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  if (*(int *)(this + 0x38) != -1) {
    GVar2 = this[0x11];
    (*(undefined1 *)(gen_frame + 0x1c)) = GVar2;
    *(undefined4 *)&(*(undefined1 *)(gen_frame + 0x1c)) = CONCAT31((*(undefined3 *)(gen_frame + 0x1d)),GVar2);
    uVar5 = F_00a1b870(GVar2,*(int *)(this + 0x38));
    if (((uVar5 != 0) && (*((int *)GEN_TOP((uVar5 + 0x7c))) == 0)) &&
       (piVar3 = *((int * PTR32 *)GEN_TOP((uVar5 + 0xf0))), piVar3 != ((int *)GEN_TOP(0x0)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x10c))))(piVar3 GEN_EDX_ARG,param_1);
      return (uint)param_1;
    }
  }
  pfVar6 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xfc))))(this GEN_EDX_ARG)));
  fVar4 = (float10)0;
  ((float *)(gen_frame + 0x20))[0] = pfVar6[8];
  ((float *)(gen_frame + 0x20))[1] = 0.0;
  ((float *)(gen_frame + 0x20))[2] = 0.0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(float *)(gen_frame + 0x34)) = pfVar6[9];
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(float *)(gen_frame + 0x50)) = (float)fVar4;
  (*(float *)(gen_frame + 0x54)) = (float)fVar4;
  (*(float *)(gen_frame + 0x58)) = (float)fVar4;
  (*(float *)(gen_frame + 0x48)) = pfVar6[10];
  F_004efe70(((float *)(gen_frame + 0x20)) GEN_EDX_ARG,(uint)(pfVar6 + 4));
  (*(float *)(gen_frame + 0x50)) = (float)((float10)*pfVar6 + (float10)(*(float *)(gen_frame + 0x50)));
  fVar1 = pfVar6[1];
  (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  (*(undefined4 *)(gen_frame + 0x4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  (*(float *)(gen_frame + 0x54)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x54)));
  (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  (*(float *)(gen_frame + 0x58)) = (float)((float10)pfVar6[2] + (float10)(*(float *)(gen_frame + 0x58)));
  F_005feb80(param_1 GEN_EDX_ARG,((float *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x0)));
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf25 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005e44c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5e44c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *(int *)(this + 0x30) = param_1;
  *((undefined4 *)GEN_TOP((param_1 + 0x30))) = *param_2;
  *((undefined4 *)GEN_TOP((param_1 + 0x34))) = param_2[1];
  *((undefined4 *)GEN_TOP((param_1 + 0x38))) = param_2[2];
  *((undefined4 *)GEN_TOP((param_1 + 0x40))) = param_2[4];
  *((undefined4 *)GEN_TOP((param_1 + 0x44))) = param_2[5];
  *((undefined4 *)GEN_TOP((param_1 + 0x48))) = param_2[6];
  *((undefined4 *)GEN_TOP((param_1 + 0x4c))) = param_2[7];
  *((undefined4 *)GEN_TOP((param_1 + 0x50))) = param_2[8];
  *((undefined4 *)GEN_TOP((param_1 + 0x54))) = param_2[9];
  *((undefined4 *)GEN_TOP((param_1 + 0x58))) = param_2[10];
  *((uint *)GEN_TOP((param_1 + 0x24))) = *((uint *)GEN_TOP((param_1 + 0x24))) | 2;
  return 0;
}

/* ref: FUN_005e4510 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005e4510(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x5e4510u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if (*((int *)GEN_TOP((param_1 + 0x30))) != 0) {
    F_0060b6a0(*((int *)GEN_TOP((param_1 + 0x30))) GEN_EDX_FWD,param_2);
  }
  return;
}

/* ref: FUN_005e4530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005e4530(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x5e4530u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint in_EAX = 0;
  
  if (*((int *)GEN_TOP((param_1 + 0x30))) != 0) {
    in_EAX = F_0060b730(*((int *)GEN_TOP((param_1 + 0x30))) GEN_EDX_FWD,param_2);
  }
  return in_EAX;
}

/* ref: FUN_005e4550 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005e4550(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x5e4550u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  float fVar1;
  float * pfVar2;
  float local_8;
  
  local_8 = REFG(float, 0x1087f04);
  if ((*((byte *)GEN_TOP((param_1 + 0x2b))) & 4) != 0) {
    local_8 = param_3;
  }
  pfVar2 = param_2 + 3;
  if (!GEN_ISNAN(*pfVar2) && (!(0.0 < *pfVar2) && *pfVar2 != 0.0)) {
    pfVar2 = param_2 + 1;
    if ((float10)param_2[1] < (float10)*param_2) {
      pfVar2 = param_2;
    }
    if (!((float10)param_2[2] < (float10)*pfVar2)) {
      pfVar2 = param_2 + 2;
    }
    fVar1 = *pfVar2;
    param_2[3] = 0.0;
    local_8 = (float)((float10)fVar1 * (float10)local_8);
  }
  if (*((int *)GEN_TOP((param_1 + 0x30))) != 0) {
    F_0060b730(*((int *)GEN_TOP((param_1 + 0x30))) GEN_EDX_FWD,local_8);
  }
  return;
}

/* ref: FUN_005e45d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005e45d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e45d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x30))) != 0) {
    uVar1 = F_0060b7c0(*((int *)GEN_TOP(((int)this + 0x30))) GEN_EDX_FWD,param_1);
    return uVar1;
  }
  return in_EAX;
}

/* ref: Client::LayoutEngine::Layer::EnvSpaceLayoutInstance::vf25 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005e45f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5e45f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  byte bVar1;
  
  *(int *)(this + 0x30) = param_1;
  *((undefined4 *)GEN_TOP((param_1 + 0x30))) = *param_2;
  *((undefined4 *)GEN_TOP((param_1 + 0x34))) = param_2[1];
  *((undefined4 *)GEN_TOP((param_1 + 0x38))) = param_2[2];
  *((undefined4 *)GEN_TOP((param_1 + 0x40))) = param_2[4];
  *((undefined4 *)GEN_TOP((param_1 + 0x44))) = param_2[5];
  *((undefined4 *)GEN_TOP((param_1 + 0x48))) = param_2[6];
  *((undefined4 *)GEN_TOP((param_1 + 0x4c))) = param_2[7];
  *((undefined4 *)GEN_TOP((param_1 + 0x50))) = param_2[8];
  *((undefined4 *)GEN_TOP((param_1 + 0x54))) = param_2[9];
  *((undefined4 *)GEN_TOP((param_1 + 0x58))) = param_2[10];
  *((uint *)GEN_TOP((param_1 + 0x24))) = *((uint *)GEN_TOP((param_1 + 0x24))) | 2;
  if (*(int *)(this + 8) != 0) {
    bVar1 = F_00698c50(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 4))) + 0x48))) + 8))) GEN_EDX_FWD,
                         *(undefined4 *)(this + 0x30));
    return bVar1;
  }
  bVar1 = F_00698c50(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x00000048) + 8))) GEN_EDX_ARG,*(undefined4 *)(this + 0x30));
  return bVar1;
}

/* ref: Client::LayoutEngine::Layer::EnvLocationLayoutInstance::vf25 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005e4670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5e4670u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  byte bVar1;
  
  *(int *)(this + 0x30) = param_1;
  *((undefined4 *)GEN_TOP((param_1 + 0x30))) = *param_2;
  *((undefined4 *)GEN_TOP((param_1 + 0x34))) = param_2[1];
  *((undefined4 *)GEN_TOP((param_1 + 0x38))) = param_2[2];
  *((undefined4 *)GEN_TOP((param_1 + 0x40))) = param_2[4];
  *((undefined4 *)GEN_TOP((param_1 + 0x44))) = param_2[5];
  *((undefined4 *)GEN_TOP((param_1 + 0x48))) = param_2[6];
  *((undefined4 *)GEN_TOP((param_1 + 0x4c))) = param_2[7];
  *((undefined4 *)GEN_TOP((param_1 + 0x50))) = param_2[8];
  *((undefined4 *)GEN_TOP((param_1 + 0x54))) = param_2[9];
  *((undefined4 *)GEN_TOP((param_1 + 0x58))) = param_2[10];
  *((uint *)GEN_TOP((param_1 + 0x24))) = *((uint *)GEN_TOP((param_1 + 0x24))) | 2;
  if (*(int *)(this + 8) != 0) {
    bVar1 = F_0068b4a0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 4))) + 0x48))) + 8))) GEN_EDX_FWD,
                         *(undefined4 *)(this + 0x30));
    return bVar1;
  }
  bVar1 = F_0068b4a0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x00000048) + 8))) GEN_EDX_ARG,*(undefined4 *)(this + 0x30));
  return bVar1;
}

/* ref: Client::LayoutEngine::Layer::LightLayoutInstance::vf4 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005e46f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e46f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x100))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  if (uVar2 != 0) {
    F_00a1fa60(this + 0x10,uVar2,param_1);
  }
  *(undefined4 *)(this + 0x34) = *((undefined4 *)GEN_TOP((param_1 + 0x30)));
  F_00a1b650(this + 0x38,param_1 + 0x4c);
  if (*(int *)(this + 8) == 0) {
    this_00 = ((undefined *)GEN_TOP(0x0));
  }
  else {
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 8) + 4)));
  }
  if (*((int *)GEN_TOP(((int)this_00 + 0x10))) == 7) {
    bVar1 = F_005e13a0(this_00 GEN_EDX_ARG,this);
    this_00 = ((undefined *)GEN_TOP((uint)bVar1));
  }
  return (byte)this_00;
}

/* ref: Client::LayoutEngine::Layer::LightLayoutInstance::vf25 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005e4790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5e4790u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *(int *)(this + 0x30) = param_1;
  *((undefined4 *)GEN_TOP((param_1 + 0x30))) = *param_2;
  *((undefined4 *)GEN_TOP((param_1 + 0x34))) = param_2[1];
  *((undefined4 *)GEN_TOP((param_1 + 0x38))) = param_2[2];
  *((undefined4 *)GEN_TOP((param_1 + 0x40))) = param_2[4];
  *((undefined4 *)GEN_TOP((param_1 + 0x44))) = param_2[5];
  *((undefined4 *)GEN_TOP((param_1 + 0x48))) = param_2[6];
  *((undefined4 *)GEN_TOP((param_1 + 0x4c))) = param_2[7];
  *((undefined4 *)GEN_TOP((param_1 + 0x50))) = param_2[8];
  *((undefined4 *)GEN_TOP((param_1 + 0x54))) = param_2[9];
  *((undefined4 *)GEN_TOP((param_1 + 0x58))) = param_2[10];
  *((uint *)GEN_TOP((param_1 + 0x24))) = *((uint *)GEN_TOP((param_1 + 0x24))) | 2;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::LightLayoutInstance::vf53 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005e47e0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5e47e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  unsigned int gen_args[1];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  float * pfVar2;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  
  iVar1 = *((int *)GEN_TOP((in_ecx + 0x30)));
  if (iVar1 != 0) {
    fVar4 = (float10)(*(float *)&gen_args[0]);
    (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x0)) = 0.0;
    pfVar2 = &(*(float *)&gen_args[0]);
    (*(float *)&gen_args[0]) = (float)((float10)1 - fVar4);
    if (!((float10)(float)((float10)1 - fVar4) < (float10)1)) {
      pfVar2 = &(*(float *)(gen_frame + 0x4));
    }
    if (!(0.0 < *pfVar2)) {
      pfVar2 = &(*(float *)(gen_frame + 0x0));
    }
    iVar1 = *((int *)GEN_TOP((iVar1 + 0x70)));
    fVar4 = (float10)*((float *)GEN_TOP((iVar1 + 0x20)));
    fVar5 = (float10)*pfVar2;
    bVar3 = GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4);
    if (bVar3 == (bVar3 || fVar5 == fVar4)) {
      *((float *)GEN_TOP((iVar1 + 0x20))) = *pfVar2;
    }
  }
  return;
}

/* ref: FUN_005e4860 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005e4860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5e4860u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe0))))(this GEN_EDX_FWD,param_1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 200))))(this GEN_EDX_ARG,param_2);
  F_005de400(this GEN_EDX_ARG,*((uint *)GEN_TOP(((int)this + 0x30))));
  return;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf25 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005e48a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5e48a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *(int *)(this + 0x30) = param_1;
  *((undefined4 *)GEN_TOP((param_1 + 0x30))) = *param_2;
  *((undefined4 *)GEN_TOP((param_1 + 0x34))) = param_2[1];
  *((undefined4 *)GEN_TOP((param_1 + 0x38))) = param_2[2];
  *((undefined4 *)GEN_TOP((param_1 + 0x40))) = param_2[4];
  *((undefined4 *)GEN_TOP((param_1 + 0x44))) = param_2[5];
  *((undefined4 *)GEN_TOP((param_1 + 0x48))) = param_2[6];
  *((undefined4 *)GEN_TOP((param_1 + 0x4c))) = param_2[7];
  *((undefined4 *)GEN_TOP((param_1 + 0x50))) = param_2[8];
  *((undefined4 *)GEN_TOP((param_1 + 0x54))) = param_2[9];
  *((undefined4 *)GEN_TOP((param_1 + 0x58))) = param_2[10];
  *((uint *)GEN_TOP((param_1 + 0x24))) = *((uint *)GEN_TOP((param_1 + 0x24))) | 2;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf26 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005e48f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5e48f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x50, 0);
  code * pcVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(this + 0x30) == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xdc))))(this GEN_EDX_FWD);
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x38)) + 0)) = (char)uVar2;
    (*(undefined4 *)(gen_frame + 0x38)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x38)), 1, 3),(char)uVar2);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc4))))(this GEN_EDX_ARG);
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x34)) + 0)) = (char)uVar2;
    (*(undefined4 *)(gen_frame + 0x34)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x34)), 1, 3),(char)uVar2);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x44))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    iVar3 = *(int *)(this + 8);
    (*(uint *)(gen_frame + 0x3c)) = 0;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *((int *)GEN_TOP((iVar3 + 4)));
    }
    uVar2 = F_00507260(((undefined *)GEN_TOP((iVar3 + 0x14c))) GEN_EDX_ARG,this + 0x70);
    pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x6c)));
    (*(uint *)(gen_frame + 0x3c)) = uVar2;
    (*pcVar1)(this,((undefined1 *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0x3c)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe0))))(this GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x38)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 200))))(this GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x34)));
    F_005de400(this GEN_EDX_ARG,*(uint *)(this + 0x30));
  }
  return;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf53 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005e49b0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x5e49b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  unsigned int gen_args[1];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int in_ecx_00;
  float * pfVar1;
  float10 fVar2;
  
  in_ecx_00 = *((int *)GEN_TOP((in_ecx + 0x30)));
  if (in_ecx_00 != 0) {
    fVar2 = (float10)(*(float *)&gen_args[0]);
    (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x0)) = 0.0;
    pfVar1 = &(*(float *)&gen_args[0]);
    (*(float *)&gen_args[0]) = (float)((float10)1 - fVar2);
    if (!((float10)(float)((float10)1 - fVar2) < (float10)1)) {
      pfVar1 = &(*(float *)(gen_frame + 0x4));
    }
    if (!(0.0 < *pfVar1)) {
      pfVar1 = &(*(float *)(gen_frame + 0x0));
    }
    F_0068b7c0(in_ecx_00 GEN_EDX_FWD,*pfVar1);
  }
  return;
}

/* ref: Client::LayoutEngine::Layer::WeaponLayoutInstance::vf25 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005e4a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5e4a10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *(int *)(this + 0x30) = param_1;
  *((undefined4 *)GEN_TOP((param_1 + 0x30))) = *param_2;
  *((undefined4 *)GEN_TOP((param_1 + 0x34))) = param_2[1];
  *((undefined4 *)GEN_TOP((param_1 + 0x38))) = param_2[2];
  *((undefined4 *)GEN_TOP((param_1 + 0x40))) = param_2[4];
  *((undefined4 *)GEN_TOP((param_1 + 0x44))) = param_2[5];
  *((undefined4 *)GEN_TOP((param_1 + 0x48))) = param_2[6];
  *((undefined4 *)GEN_TOP((param_1 + 0x4c))) = param_2[7];
  *((undefined4 *)GEN_TOP((param_1 + 0x50))) = param_2[8];
  *((undefined4 *)GEN_TOP((param_1 + 0x54))) = param_2[9];
  *((undefined4 *)GEN_TOP((param_1 + 0x58))) = param_2[10];
  *((uint *)GEN_TOP((param_1 + 0x24))) = *((uint *)GEN_TOP((param_1 + 0x24))) | 2;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf66 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005e4a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e4a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x1d0, 0);
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int * piVar6;
  undefined4 * puVar7;
  uint uVar8;
  float * pfVar9;
  int iVar10;
  float10 fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  (*(uint *)(gen_frame + 0x1bc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c0);
  switch((unsigned int)(uintptr_t)((*(int *)(this + 0x74) << 0x1c) >> 0x1c)) {
  case 1: ;
  case 3: ;
  case 4: ;
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xfc))))(this GEN_EDX_FWD);
    F_0054fa20(((undefined1 *)(gen_frame + 0xf0)) GEN_EDX_ARG,uVar8);
    (*(undefined4 *)(gen_frame + 0x70)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
    (*(undefined4 *)(gen_frame + 0x74)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
    (*(undefined4 *)(gen_frame + 0x78)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
    pfVar9 = ((float *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0xc0)),&(*(undefined4 *)(gen_frame + 0x70)),((undefined1 *)(gen_frame + 0xf0)))));
    fVar12 = pfVar9[1];
    fVar13 = pfVar9[2];
    (*(float *)(gen_frame + 0xb0)) = *pfVar9;
    (*(float *)(gen_frame + 0x130)) = *pfVar9;
    (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(float *)(gen_frame + 0xb4)) = fVar12;
    (*(float *)(gen_frame + 0xb8)) = fVar13;
    (*(float *)(gen_frame + 0x134)) = fVar12;
    (*(float *)(gen_frame + 0x138)) = fVar13;
    (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
    (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
    pfVar9 = ((float *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0xc0)),&(*(undefined4 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0xf0)))));
    fVar12 = pfVar9[1];
    fVar13 = pfVar9[2];
    ((float *)(gen_frame + 0x140))[0] = *pfVar9;
    ((float *)(gen_frame + 0x140))[1] = fVar12;
    ((float *)(gen_frame + 0x140))[2] = fVar13;
    (*(undefined4 *)(gen_frame + 0x50)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
    (*(undefined4 *)(gen_frame + 0x54)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(undefined4 *)(gen_frame + 0x58)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
    puVar7 = ((undefined4 *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0xc0)),&(*(undefined4 *)(gen_frame + 0x50)),((undefined1 *)(gen_frame + 0xf0)))));
    uVar1 = puVar7[1];
    uVar2 = puVar7[2];
    ((float *)(gen_frame + 0x140))[4] = gen_bits2f(*puVar7);
    (*(undefined4 *)(gen_frame + 0x90)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(undefined4 *)(gen_frame + 0x94)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    ((float *)(gen_frame + 0x140))[5] = gen_bits2f(uVar1);
    (*(undefined4 *)(gen_frame + 0x158)) = uVar2;
    (*(undefined4 *)(gen_frame + 0x98)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
    puVar7 = ((undefined4 *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0xc0)),&(*(undefined4 *)(gen_frame + 0x90)),((undefined1 *)(gen_frame + 0xf0)))));
    (*(undefined4 *)(gen_frame + 0x160)) = *puVar7;
    (*(undefined4 *)(gen_frame + 0x164)) = puVar7[1];
    (*(undefined4 *)(gen_frame + 0x168)) = puVar7[2];
    (*(undefined4 *)(gen_frame + 0x60)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
    (*(undefined4 *)(gen_frame + 0x64)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
    (*(undefined4 *)(gen_frame + 0x68)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    puVar7 = ((undefined4 *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0xc0)),&(*(undefined4 *)(gen_frame + 0x60)),((undefined1 *)(gen_frame + 0xf0)))));
    (*(undefined4 *)(gen_frame + 0x170)) = *puVar7;
    (*(undefined4 *)(gen_frame + 0x174)) = puVar7[1];
    (*(undefined4 *)(gen_frame + 0x178)) = puVar7[2];
    (*(undefined4 *)(gen_frame + 0x40)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(undefined4 *)(gen_frame + 0x44)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
    (*(undefined4 *)(gen_frame + 0x48)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    puVar7 = ((undefined4 *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0xc0)),&(*(undefined4 *)(gen_frame + 0x40)),((undefined1 *)(gen_frame + 0xf0)))));
    uVar1 = puVar7[1];
    uVar2 = puVar7[2];
    (*(undefined4 *)(gen_frame + 0x180)) = *puVar7;
    (*(undefined4 *)(gen_frame + 0x30)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
    (*(undefined4 *)(gen_frame + 0x184)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x188)) = uVar2;
    (*(undefined4 *)(gen_frame + 0x34)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(undefined4 *)(gen_frame + 0x38)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    puVar7 = ((undefined4 *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0xc0)),&(*(undefined4 *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0xf0)))));
    (*(undefined4 *)(gen_frame + 0x190)) = *puVar7;
    (*(undefined4 *)(gen_frame + 0x194)) = puVar7[1];
    (*(undefined4 *)(gen_frame + 0x198)) = puVar7[2];
    (*(undefined4 *)(gen_frame + 0x80)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(undefined4 *)(gen_frame + 0x84)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(undefined4 *)(gen_frame + 0x88)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    puVar7 = ((undefined4 *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0xc0)),&(*(undefined4 *)(gen_frame + 0x80)),((undefined1 *)(gen_frame + 0xf0)))));
    fVar14 = (*(float *)(gen_frame + 0xb8));
    fVar13 = (*(float *)(gen_frame + 0xb4));
    fVar12 = (*(float *)(gen_frame + 0xb0));
    (*(undefined4 *)(gen_frame + 0x1a0)) = *puVar7;
    (*(undefined4 *)(gen_frame + 0x1a4)) = puVar7[1];
    (*(undefined4 *)(gen_frame + 0x1a8)) = puVar7[2];
    (*(float *)(gen_frame + 0xc0)) = (*(float *)(gen_frame + 0xb0));
    (*(float *)(gen_frame + 0xc4)) = (*(float *)(gen_frame + 0xb4));
    (*(float *)(gen_frame + 0xc8)) = (*(float *)(gen_frame + 0xb8));
    pfVar9 = ((float *)(gen_frame + 0x140)) + 2;
    iVar10 = 7;
    fVar15 = fVar14;
    fVar16 = fVar13;
    fVar17 = fVar12;
    do {
      fVar3 = pfVar9[-2];
      (*(float *)(gen_frame + 0xac)) = fVar3;
      if ((float10)fVar3 < (float10)(*(float *)(gen_frame + 0xb0))) {
        (*(float *)(gen_frame + 0xb0)) = fVar3;
        fVar12 = fVar3;
      }
      fVar4 = pfVar9[-1];
      (*(float *)(gen_frame + 0xec)) = fVar4;
      if ((float10)fVar4 < (float10)(*(float *)(gen_frame + 0xb4))) {
        (*(float *)(gen_frame + 0xb4)) = fVar4;
        fVar13 = fVar4;
      }
      fVar5 = *pfVar9;
      (*(float *)(gen_frame + 0xec)) = fVar5;
      if ((float10)fVar5 < (float10)(*(float *)(gen_frame + 0xb8))) {
        (*(float *)(gen_frame + 0xb8)) = fVar5;
        fVar14 = fVar5;
      }
      if ((float10)(*(float *)(gen_frame + 0xc0)) < (float10)fVar3) {
        (*(float *)(gen_frame + 0xc0)) = fVar3;
        fVar17 = fVar3;
      }
      if ((float10)(*(float *)(gen_frame + 0xc4)) < (float10)fVar4) {
        (*(float *)(gen_frame + 0xc4)) = fVar4;
        fVar16 = fVar4;
      }
      if ((float10)(*(float *)(gen_frame + 0xc8)) < (float10)fVar5) {
        (*(float *)(gen_frame + 0xc8)) = fVar5;
        fVar15 = fVar5;
      }
      pfVar9 = pfVar9 + 4;
      iVar10 = iVar10 - 1;
    } while (iVar10 != 0);
    *param_1 = fVar12;
    param_1[1] = fVar13;
    param_1[2] = fVar14;
    param_1[4] = fVar17;
    param_1[5] = fVar16;
    param_1[6] = fVar15;
    break;
  case 2: ;
    pfVar9 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf4))))(this GEN_EDX_ARG)));
    (*(float *)(gen_frame + 0xec)) = *pfVar9;
    pfVar9 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_ARG)));
    fVar11 = (float10)(*(float *)(gen_frame + 0xec));
    (*(float *)(gen_frame + 0xc0)) = (float)((float10)*pfVar9 - fVar11);
    (*(float *)(gen_frame + 0xc4)) = (float)((float10)pfVar9[1] - fVar11);
    (*(float *)(gen_frame + 0xc8)) = (float)((float10)pfVar9[2] - fVar11);
    pfVar9 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_ARG)));
    fVar12 = *pfVar9;
    fVar11 = (float10)(*(float *)(gen_frame + 0xec));
    (*(float *)(gen_frame + 0xb0)) = (float)(fVar11 + (float10)fVar12);
    fVar13 = pfVar9[1];
    (*(float *)(gen_frame + 0xb4)) = (float)((float10)fVar13 + fVar11);
    fVar14 = pfVar9[2];
    *param_1 = (*(float *)(gen_frame + 0xc0));
    param_1[1] = (*(float *)(gen_frame + 0xc4));
    (*(float *)(gen_frame + 0xb8)) = (float)(fVar11 + (float10)fVar14);
    param_1[2] = (*(float *)(gen_frame + 0xc8));
    param_1[4] = (float)(fVar11 + (float10)fVar12);
    param_1[5] = (float)((float10)fVar13 + fVar11);
    param_1[6] = (float)(fVar11 + (float10)fVar14);
    break;
  case 5: ;
    if (*(int *)(this + 0x30) == 0) {
      fVar12 = (float)(float10)1;
      uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_ARG);
      pfVar9 = ((float *)GEN_TOP(F_005fe430(((undefined1 *)(gen_frame + 0x10)),uVar8,fVar12)));
      fVar12 = (float)(float10)1;
      iVar10 = *(int *)this;
      (*(float *)(gen_frame + 0xc0)) = *pfVar9;
      (*(float *)(gen_frame + 0xc4)) = pfVar9[1];
      (*(float *)(gen_frame + 0xc8)) = pfVar9[2];
      uVar8 = ((code *)*((gen_code32 *)GEN_TOP((iVar10 + 0xe4))))(this);
      pfVar9 = ((float *)GEN_TOP(F_005fe3d0(((undefined1 *)(gen_frame + 0x0)),uVar8,fVar12)));
      fVar12 = *pfVar9;
      fVar13 = pfVar9[1];
      fVar14 = pfVar9[2];
    }
    else {
      piVar6 = *(int * PTR32 *)(this + 0x30);
      (*(float *)(gen_frame + 0xc0)) = 0.0;
      (*(float *)(gen_frame + 0xc4)) = 0.0;
      (*(float *)(gen_frame + 0xc8)) = 0.0;
      (*(float *)(gen_frame + 0xcc)) = 0.0;
      (*(float *)(gen_frame + 0xd0)) = 0.0;
      (*(float *)(gen_frame + 0xd4)) = 0.0;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x28))))(piVar6 GEN_EDX_ARG,&(*(float *)(gen_frame + 0xc0)));
      fVar12 = (*(float *)(gen_frame + 0xcc));
      fVar13 = (*(float *)(gen_frame + 0xd0));
      fVar14 = (*(float *)(gen_frame + 0xd4));
    }
    *param_1 = (*(float *)(gen_frame + 0xc0));
    param_1[1] = (*(float *)(gen_frame + 0xc4));
    param_1[2] = (*(float *)(gen_frame + 0xc8));
    param_1[4] = fVar12;
    param_1[5] = fVar13;
    param_1[6] = fVar14;
  }
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf67 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005e5130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e5130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x80, 0);
  float10 fVar1;
  uint uVar2;
  float * pfVar3;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  if (((byte)*(undefined4 *)(this + 0x74) & 0xf) == 5) {
    fVar1 = (float10)0;
    (*(float *)(gen_frame + 0x50)) = (float)fVar1;
    ((float *)(gen_frame + 0x20))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x20))[0], REFG(float, 0x1302e10));
    (*(float *)(gen_frame + 0x54)) = (float)fVar1;
    (*(float *)(gen_frame + 0x58)) = (float)fVar1;
    ((float *)(gen_frame + 0x20))[1] = 0.0;
    ((float *)(gen_frame + 0x20))[2] = 0.0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(float *)(gen_frame + 0x34)) = gen_bits2f(REFG(float, 0x1302e14));
    (*(float *)(gen_frame + 0x48)) = gen_bits2f(REFG(float, 0x1302e18));
    F_004efe70(((float *)(gen_frame + 0x20)) GEN_EDX_FWD,0x1302e00);
    (*(float *)(gen_frame + 0x50)) = (float)((float10)REFG(float, 0x1302df0) + (float10)(*(float *)(gen_frame + 0x50)));
    (*(float *)(gen_frame + 0x54)) = (float)((float10)REFG(float, 0x1302df4) + (float10)(*(float *)(gen_frame + 0x54)));
    (*(float *)(gen_frame + 0x58)) = (float)((float10)REFG(float, 0x1302df8) + (float10)(*(float *)(gen_frame + 0x58)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x108))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_005fede0(param_1 GEN_EDX_ARG,((float *)(gen_frame + 0x20)),uVar2);
  }
  else {
    pfVar3 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xfc))))(this GEN_EDX_ARG)));
    fVar1 = (float10)0;
    ((float *)(gen_frame + 0x20))[0] = pfVar3[8];
    ((float *)(gen_frame + 0x20))[1] = 0.0;
    ((float *)(gen_frame + 0x20))[2] = 0.0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(float *)(gen_frame + 0x34)) = pfVar3[9];
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(float *)(gen_frame + 0x50)) = (float)fVar1;
    (*(float *)(gen_frame + 0x54)) = (float)fVar1;
    (*(float *)(gen_frame + 0x58)) = (float)fVar1;
    (*(float *)(gen_frame + 0x48)) = pfVar3[10];
    F_004efe70(((float *)(gen_frame + 0x20)) GEN_EDX_ARG,(uint)(pfVar3 + 4));
    (*(float *)(gen_frame + 0x50)) = (float)((float10)(*(float *)(gen_frame + 0x50)) + (float10)*pfVar3);
    (*(float *)(gen_frame + 0x54)) = (float)((float10)pfVar3[1] + (float10)(*(float *)(gen_frame + 0x54)));
    (*(float *)(gen_frame + 0x58)) = (float)((float10)pfVar3[2] + (float10)(*(float *)(gen_frame + 0x58)));
    F_005fed50(param_1 GEN_EDX_ARG,((float *)(gen_frame + 0x20)),&REFG(float, 0x1302c60));
  }
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf66 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005e52b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e52b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x190, 0);
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float * pfVar7;
  undefined4 * puVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  (*(uint *)(gen_frame + 0x17c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x180);
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(this + 0x60))) {
  case 1: ;
  case 3: ;
  case 4: ;
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xfc))))(this GEN_EDX_FWD);
    F_0054fa20(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG,uVar6);
    (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
    (*(undefined4 *)(gen_frame + 0x4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
    (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
    pfVar7 = ((float *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0x90)),&(*(undefined4 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0xb0)))));
    fVar14 = pfVar7[1];
    fVar15 = pfVar7[2];
    (*(float *)(gen_frame + 0x80)) = *pfVar7;
    (*(float *)(gen_frame + 0xf0)) = *pfVar7;
    (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(float *)(gen_frame + 0x84)) = fVar14;
    (*(float *)(gen_frame + 0x88)) = fVar15;
    (*(float *)(gen_frame + 0xf4)) = fVar14;
    (*(float *)(gen_frame + 0xf8)) = fVar15;
    (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
    (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
    pfVar7 = ((float *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0x90)),&(*(undefined4 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0xb0)))));
    fVar14 = pfVar7[1];
    fVar15 = pfVar7[2];
    ((float *)(gen_frame + 0x100))[0] = *pfVar7;
    ((float *)(gen_frame + 0x100))[1] = fVar14;
    ((float *)(gen_frame + 0x100))[2] = fVar15;
    (*(undefined4 *)(gen_frame + 0x70)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
    (*(undefined4 *)(gen_frame + 0x74)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(undefined4 *)(gen_frame + 0x78)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
    puVar8 = ((undefined4 *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0x90)),&(*(undefined4 *)(gen_frame + 0x70)),((undefined1 *)(gen_frame + 0xb0)))));
    uVar1 = puVar8[1];
    uVar2 = puVar8[2];
    ((float *)(gen_frame + 0x100))[4] = gen_bits2f(*puVar8);
    (*(undefined4 *)(gen_frame + 0x50)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(undefined4 *)(gen_frame + 0x54)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    ((float *)(gen_frame + 0x100))[5] = gen_bits2f(uVar1);
    (*(undefined4 *)(gen_frame + 0x118)) = uVar2;
    (*(undefined4 *)(gen_frame + 0x58)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
    puVar8 = ((undefined4 *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0x90)),&(*(undefined4 *)(gen_frame + 0x50)),((undefined1 *)(gen_frame + 0xb0)))));
    (*(undefined4 *)(gen_frame + 0x120)) = *puVar8;
    (*(undefined4 *)(gen_frame + 0x124)) = puVar8[1];
    (*(undefined4 *)(gen_frame + 0x128)) = puVar8[2];
    (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
    (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
    (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    puVar8 = ((undefined4 *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0x90)),&(*(undefined4 *)(gen_frame + 0x10)),((undefined1 *)(gen_frame + 0xb0)))));
    (*(undefined4 *)(gen_frame + 0x130)) = *puVar8;
    (*(undefined4 *)(gen_frame + 0x134)) = puVar8[1];
    (*(undefined4 *)(gen_frame + 0x138)) = puVar8[2];
    (*(undefined4 *)(gen_frame + 0x30)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(undefined4 *)(gen_frame + 0x34)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
    (*(undefined4 *)(gen_frame + 0x38)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    puVar8 = ((undefined4 *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0x90)),&(*(undefined4 *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0xb0)))));
    uVar1 = puVar8[1];
    uVar2 = puVar8[2];
    (*(undefined4 *)(gen_frame + 0x140)) = *puVar8;
    (*(undefined4 *)(gen_frame + 0x60)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
    (*(undefined4 *)(gen_frame + 0x144)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x148)) = uVar2;
    (*(undefined4 *)(gen_frame + 0x64)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(undefined4 *)(gen_frame + 0x68)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    puVar8 = ((undefined4 *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0x90)),&(*(undefined4 *)(gen_frame + 0x60)),((undefined1 *)(gen_frame + 0xb0)))));
    (*(undefined4 *)(gen_frame + 0x150)) = *puVar8;
    (*(undefined4 *)(gen_frame + 0x154)) = puVar8[1];
    (*(undefined4 *)(gen_frame + 0x158)) = puVar8[2];
    (*(undefined4 *)(gen_frame + 0x40)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(undefined4 *)(gen_frame + 0x44)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(undefined4 *)(gen_frame + 0x48)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    puVar8 = ((undefined4 *)GEN_TOP(F_004ee970(&(*(float *)(gen_frame + 0x90)),&(*(undefined4 *)(gen_frame + 0x40)),((undefined1 *)(gen_frame + 0xb0)))));
    fVar16 = (*(float *)(gen_frame + 0x88));
    fVar15 = (*(float *)(gen_frame + 0x84));
    fVar14 = (*(float *)(gen_frame + 0x80));
    (*(undefined4 *)(gen_frame + 0x160)) = *puVar8;
    (*(undefined4 *)(gen_frame + 0x164)) = puVar8[1];
    (*(undefined4 *)(gen_frame + 0x168)) = puVar8[2];
    (*(float *)(gen_frame + 0x90)) = (*(float *)(gen_frame + 0x80));
    (*(float *)(gen_frame + 0x94)) = (*(float *)(gen_frame + 0x84));
    (*(float *)(gen_frame + 0x98)) = (*(float *)(gen_frame + 0x88));
    pfVar7 = ((float *)(gen_frame + 0x100)) + 2;
    iVar9 = 7;
    fVar17 = fVar16;
    fVar18 = fVar15;
    fVar19 = fVar14;
    do {
      fVar3 = pfVar7[-2];
      (*(float *)(gen_frame + 0xa8)) = fVar3;
      if ((float10)fVar3 < (float10)(*(float *)(gen_frame + 0x80))) {
        (*(float *)(gen_frame + 0x80)) = fVar3;
        fVar14 = fVar3;
      }
      fVar4 = pfVar7[-1];
      (*(float * PTR32 *)(gen_frame + 0xac)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar4)));
      if ((float10)fVar4 < (float10)(*(float *)(gen_frame + 0x84))) {
        (*(float *)(gen_frame + 0x84)) = fVar4;
        fVar15 = fVar4;
      }
      fVar5 = *pfVar7;
      (*(float * PTR32 *)(gen_frame + 0xac)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar5)));
      if ((float10)fVar5 < (float10)(*(float *)(gen_frame + 0x88))) {
        (*(float *)(gen_frame + 0x88)) = fVar5;
        fVar16 = fVar5;
      }
      if ((float10)(*(float *)(gen_frame + 0x90)) < (float10)fVar3) {
        (*(float *)(gen_frame + 0x90)) = fVar3;
        fVar19 = fVar3;
      }
      if ((float10)(*(float *)(gen_frame + 0x94)) < (float10)fVar4) {
        (*(float *)(gen_frame + 0x94)) = fVar4;
        fVar18 = fVar4;
      }
      if ((float10)(*(float *)(gen_frame + 0x98)) < (float10)fVar5) {
        (*(float *)(gen_frame + 0x98)) = fVar5;
        fVar17 = fVar5;
      }
      pfVar7 = pfVar7 + 4;
      iVar9 = iVar9 - 1;
    } while (iVar9 != 0);
    *param_1 = fVar14;
    param_1[1] = fVar15;
    param_1[2] = fVar16;
    param_1[4] = fVar19;
    param_1[5] = fVar18;
    param_1[6] = fVar17;
    break;
  case 2: ;
    pfVar7 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf4))))(this GEN_EDX_ARG)));
    (*(float * PTR32 *)(gen_frame + 0xac)) = pfVar7;
    pfVar7 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xe4))))(this GEN_EDX_ARG)));
    fVar14 = *(*(float * PTR32 *)(gen_frame + 0xac));
    (*(float *)(gen_frame + 0xa8)) = fVar14;
    (*(float * PTR32 *)(gen_frame + 0xac)) = ((float *)(uintptr_t)gen_fl2bits((float)(*pfVar7)));
    fVar10 = (float10)*pfVar7;
    fVar11 = (float10)fVar14;
    fVar14 = (float)(fVar10 - fVar11);
    (*(float *)(gen_frame + 0x90)) = fVar14;
    (*(float * PTR32 *)(gen_frame + 0xac)) = ((float *)(uintptr_t)gen_fl2bits((float)(pfVar7[1])));
    fVar12 = (float10)pfVar7[1];
    fVar15 = (float)(fVar12 - fVar11);
    (*(float *)(gen_frame + 0x94)) = fVar15;
    fVar16 = pfVar7[2];
    *param_1 = fVar14;
    (*(float * PTR32 *)(gen_frame + 0xac)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar16)));
    fVar13 = (float10)fVar16;
    param_1[1] = fVar15;
    fVar14 = (float)(fVar13 - fVar11);
    (*(float *)(gen_frame + 0x98)) = fVar14;
    param_1[2] = fVar14;
    fVar14 = (float)(fVar11 + fVar10);
    (*(float *)(gen_frame + 0x80)) = fVar14;
    fVar15 = (float)(fVar12 + fVar11);
    (*(float *)(gen_frame + 0x84)) = fVar15;
    fVar16 = (float)(fVar11 + fVar13);
    (*(float *)(gen_frame + 0x88)) = fVar16;
    param_1[4] = fVar14;
    param_1[5] = fVar15;
    param_1[6] = fVar16;
  }
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf67 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005e5870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e5870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL(0x70, 0);
  float10 fVar1;
  float * pfVar2;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  pfVar2 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xfc))))(this GEN_EDX_FWD)));
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
  F_004efe70(((float *)(gen_frame + 0x10)) GEN_EDX_ARG,(uint)(pfVar2 + 4));
  (*(float *)(gen_frame + 0x40)) = (float)((float10)*pfVar2 + (float10)(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x44)) = (float)((float10)pfVar2[1] + (float10)(*(float *)(gen_frame + 0x44)));
  (*(float *)(gen_frame + 0x48)) = (float)((float10)pfVar2[2] + (float10)(*(float *)(gen_frame + 0x48)));
  pfVar2 = ((float *)GEN_TOP(F_005fe770(((float *)(gen_frame + 0x10)) GEN_EDX_ARG,(uint)((undefined1 *)(gen_frame + 0x0)))));
  *((float *)GEN_TOP((param_1 + 0x40))) = (float)((float10)*pfVar2 * (float10)REFG(float, 0x1302c60));
  *((float *)GEN_TOP((param_1 + 0x44))) = (float)((float10)pfVar2[1] * (float10)REFG(float, 0x1302c64));
  *((float *)GEN_TOP((param_1 + 0x48))) = (float)((float10)pfVar2[2] * (float10)REFG(float, 0x1302c68));
  F_005fe2e0(param_1,(uint)((float *)(gen_frame + 0x10)));
  F_005fe2e0(param_1 + 0x10,(uint)&(*(undefined4 *)(gen_frame + 0x20)));
  F_005fe2e0(param_1 + 0x20,(uint)&(*(undefined4 *)(gen_frame + 0x30)));
  *((float *)GEN_TOP((param_1 + 0x30))) = (*(float *)(gen_frame + 0x40));
  *((float *)GEN_TOP((param_1 + 0x34))) = (*(float *)(gen_frame + 0x44));
  *((float *)GEN_TOP((param_1 + 0x38))) = (*(float *)(gen_frame + 0x48));
  return param_1;
}

/* ref: FUN_005e59a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005e59a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e59a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x180, 0);
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined4 * puVar3;
  undefined3 extraout_var_00 = 0;
  
  (*(uint *)(gen_frame + 0x16c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x170);
  uVar2 = *((int *)GEN_TOP(((int)this + 0x60))) - 1;
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
  case 3: ;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10c))))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x90)));
    bVar1 = F_005ff410(param_1 GEN_EDX_ARG,uVar2);
    uVar2 = CONCAT31(extraout_var,bVar1);
    break;
  case 1: ;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x104))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    uVar2 = F_005ff5c0(param_1 GEN_EDX_ARG,uVar2);
    break;
  case 2: ;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xfc))))(this GEN_EDX_ARG);
    F_00607160(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,uVar2);
    (*(undefined4 *)(gen_frame + 0x30)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c60)));
    (*(undefined4 *)(gen_frame + 0x34)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c64)));
    (*(undefined4 *)(gen_frame + 0x38)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c68)));
    puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf4))))(this GEN_EDX_ARG)));
    (*(undefined4 *)(gen_frame + 0x74)) = puVar3[1];
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(undefined4 *)(gen_frame + 0x78)) = 0;
    uVar2 = puVar3[1];
    (*(undefined4 *)(gen_frame + 0x80)) = 0;
    (*(uint *)(gen_frame + 0x84)) = uVar2 ^ REFG(uint, 0x10920d0);
    (*(undefined4 *)(gen_frame + 0x88)) = 0;
    (*(undefined4 *)(gen_frame + 0x6c)) = *puVar3;
    F_0054fa20(((undefined1 *)(gen_frame + 0x120)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
    F_004ee670(&(*(undefined4 *)(gen_frame + 0x70)),(uint)&(*(undefined4 *)(gen_frame + 0x70)),(uint)((undefined1 *)(gen_frame + 0x120)));
    F_0054fa20(((undefined1 *)(gen_frame + 0xe0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
    F_004ee670(&(*(undefined4 *)(gen_frame + 0x80)),(uint)&(*(undefined4 *)(gen_frame + 0x80)),(uint)((undefined1 *)(gen_frame + 0xe0)));
    (*(undefined4 *)(gen_frame + 0x40)) = (*(undefined4 *)(gen_frame + 0x70));
    (*(undefined4 *)(gen_frame + 0x44)) = (*(undefined4 *)(gen_frame + 0x74));
    (*(undefined4 *)(gen_frame + 0x48)) = (*(undefined4 *)(gen_frame + 0x78));
    (*(undefined4 *)(gen_frame + 0x4c)) = (*(undefined4 *)(gen_frame + 0x6c));
    (*(undefined4 *)(gen_frame + 0x50)) = (*(undefined4 *)(gen_frame + 0x80));
    (*(uint *)(gen_frame + 0x54)) = (*(uint *)(gen_frame + 0x84));
    (*(undefined4 *)(gen_frame + 0x58)) = (*(undefined4 *)(gen_frame + 0x88));
    bVar1 = F_005ff690(param_1 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x40)));
    uVar2 = CONCAT31(extraout_var_00,bVar1);
    break;
  default: ;
    uVar2 = uVar2 & 0xffffff00;
  }
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf67 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005e5bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e5bc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL(0x70, 0);
  float10 fVar1;
  float * pfVar2;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  pfVar2 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xfc))))(this GEN_EDX_FWD)));
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
  F_004efe70(((float *)(gen_frame + 0x10)) GEN_EDX_ARG,(uint)(pfVar2 + 4));
  (*(float *)(gen_frame + 0x40)) = (float)((float10)*pfVar2 + (float10)(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x44)) = (float)((float10)pfVar2[1] + (float10)(*(float *)(gen_frame + 0x44)));
  (*(float *)(gen_frame + 0x48)) = (float)((float10)pfVar2[2] + (float10)(*(float *)(gen_frame + 0x48)));
  pfVar2 = ((float *)GEN_TOP(F_005fe770(((float *)(gen_frame + 0x10)) GEN_EDX_ARG,(uint)((undefined1 *)(gen_frame + 0x0)))));
  *((float *)GEN_TOP((param_1 + 0x40))) = (float)((float10)*pfVar2 * (float10)REFG(float, 0x1302c60));
  *((float *)GEN_TOP((param_1 + 0x44))) = (float)((float10)pfVar2[1] * (float10)REFG(float, 0x1302c64));
  *((float *)GEN_TOP((param_1 + 0x48))) = (float)((float10)pfVar2[2] * (float10)REFG(float, 0x1302c68));
  F_005fe2e0(param_1,(uint)((float *)(gen_frame + 0x10)));
  F_005fe2e0(param_1 + 0x10,(uint)&(*(undefined4 *)(gen_frame + 0x20)));
  F_005fe2e0(param_1 + 0x20,(uint)&(*(undefined4 *)(gen_frame + 0x30)));
  *((float *)GEN_TOP((param_1 + 0x30))) = (*(float *)(gen_frame + 0x40));
  *((float *)GEN_TOP((param_1 + 0x34))) = (*(float *)(gen_frame + 0x44));
  *((float *)GEN_TOP((param_1 + 0x38))) = (*(float *)(gen_frame + 0x48));
  return param_1;
}

/* ref: Client::LayoutEngine::Layer::PositionMarkerLayoutInstance::vf67 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005e5cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e5cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL(0x80, 0);
  float fVar1;
  float10 fVar2;
  float * pfVar3;
  float10 extraout_ST0;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x110))))(this);
  (*(float *)(gen_frame + 0x1c)) = (float)extraout_ST0;
  pfVar3 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xfc))))(this GEN_EDX_FWD)));
  fVar2 = (float10)0;
  ((float *)(gen_frame + 0x20))[0] = pfVar3[8];
  ((float *)(gen_frame + 0x20))[1] = 0.0;
  ((float *)(gen_frame + 0x20))[2] = 0.0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(float *)(gen_frame + 0x34)) = pfVar3[9];
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(float *)(gen_frame + 0x50)) = (float)fVar2;
  (*(float *)(gen_frame + 0x54)) = (float)fVar2;
  (*(float *)(gen_frame + 0x58)) = (float)fVar2;
  (*(float *)(gen_frame + 0x48)) = pfVar3[10];
  F_004efe70(((float *)(gen_frame + 0x20)) GEN_EDX_ARG,(uint)(pfVar3 + 4));
  (*(float *)(gen_frame + 0x50)) = (float)((float10)*pfVar3 + (float10)(*(float *)(gen_frame + 0x50)));
  (*(float *)(gen_frame + 0x54)) = (float)((float10)pfVar3[1] + (float10)(*(float *)(gen_frame + 0x54)));
  (*(float *)(gen_frame + 0x58)) = (float)((float10)pfVar3[2] + (float10)(*(float *)(gen_frame + 0x58)));
  pfVar3 = ((float *)GEN_TOP(F_005fe770(((float *)(gen_frame + 0x20)) GEN_EDX_ARG,(uint)((undefined1 *)(gen_frame + 0x0)))));
  *((float *)GEN_TOP((param_1 + 0x40))) = (float)((float10)REFG(float, 0x1302c60) * (float10)*pfVar3);
  *((float *)GEN_TOP((param_1 + 0x44))) = (float)((float10)pfVar3[1] * (float10)REFG(float, 0x1302c64));
  *((float *)GEN_TOP((param_1 + 0x48))) = (float)((float10)pfVar3[2] * (float10)REFG(float, 0x1302c68));
  F_005fe2e0(param_1,(uint)((float *)(gen_frame + 0x20)));
  F_005fe2e0(param_1 + 0x10,(uint)&(*(undefined4 *)(gen_frame + 0x30)));
  F_005fe2e0(param_1 + 0x20,(uint)&(*(undefined4 *)(gen_frame + 0x40)));
  *((float *)GEN_TOP((param_1 + 0x30))) = (*(float *)(gen_frame + 0x50));
  *((float *)GEN_TOP((param_1 + 0x34))) = (*(float *)(gen_frame + 0x54));
  *((float *)GEN_TOP((param_1 + 0x38))) = (*(float *)(gen_frame + 0x58));
  (*(float *)(gen_frame + 0x4)) = *((float *)GEN_TOP((param_1 + 0x34)));
  *((undefined4 *)GEN_TOP((param_1 + 0x30))) = *((undefined4 *)GEN_TOP((param_1 + 0x30)));
  *((undefined4 *)GEN_TOP((param_1 + 0x38))) = *((undefined4 *)GEN_TOP((param_1 + 0x38)));
  fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x34))) + (float10)(*(float *)(gen_frame + 0x1c)))));
  (*(float *)(gen_frame + 0x4)) = fVar1;
  *((float *)GEN_TOP((param_1 + 0x34))) = fVar1;
  return param_1;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf67 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005e8430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e8430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0xc0, 0);
  undefined4 * puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0xac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb0);
  switch((unsigned int)(uintptr_t)(this[0x90])) {
  case (undefined1)0x3: ;
  case (undefined1)0x4: ;
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xf4))))(this GEN_EDX_FWD)));
    if (((byte)this[0x94] & 2) == 0) {
      uVar3 = puVar1[2];
    }
    else {
      uVar3 = *puVar1;
    }
    (*(undefined4 *)(gen_frame + 0x5c)) = uVar3;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xfc))))(this GEN_EDX_ARG);
    F_00607160(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG,uVar2);
    (*(undefined4 *)(gen_frame + 0x40)) = (*(undefined4 *)(gen_frame + 0x5c));
    (*(undefined4 *)(gen_frame + 0x44)) = (*(undefined4 *)(gen_frame + 0x5c));
    (*(undefined4 *)(gen_frame + 0x48)) = (*(undefined4 *)(gen_frame + 0x5c));
    F_0054fa20(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)));
    F_005fed50(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x60)),&REFG(float, 0x1302c60));
    break;
  case (undefined1)0x5: ;
  case (undefined1)0x6: ;
  case (undefined1)0x7: ;
  case (undefined1)0x8: ;
  case (undefined1)0x9: ;
  case (undefined1)0xb: ;
  case (undefined1)0xc: ;
  case (undefined1)0xd: ;
  case (undefined1)0xe: ;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x108))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_005fede0(param_1 GEN_EDX_ARG,&REFG(float, 0x1302d00),uVar2);
  }
  return (uint)param_1;
}

/* ref: FUN_005e8540 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005e8540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e8540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0xb0, 0);
  undefined4 uVar1;
  undefined4 uVar2;
  int * piVar3;
  float fVar4;
  undefined4 * puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  
  switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP(((int)this + 0x90))))) {
  case 3: ;
    iVar8 = *((int *)GEN_TOP(((int)this + 0x88)));
    F_006001e0(((undefined *)GEN_TOP(((int)this + 0x40))) GEN_EDX_FWD,param_1);
    uVar1 = *((undefined4 *)GEN_TOP((iVar8 + 0x38)));
    uVar2 = *((undefined4 *)GEN_TOP((iVar8 + 0x34)));
    *((undefined4 *)GEN_TOP(((int)this + 0x60))) = *((undefined4 *)GEN_TOP((iVar8 + 0x30)));
    *((undefined4 *)GEN_TOP(((int)this + 100))) = uVar1;
    *((undefined4 *)GEN_TOP(((int)this + 0x68))) = uVar2;
    break;
  case 4: ;
    iVar8 = *((int *)GEN_TOP(((int)this + 0x88)));
    F_006001e0(((undefined *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG,param_1);
    uVar1 = *((undefined4 *)GEN_TOP((iVar8 + 0x50)));
    uVar2 = *((undefined4 *)GEN_TOP((iVar8 + 0x4c)));
    *((undefined4 *)GEN_TOP(((int)this + 0x60))) = *((undefined4 *)GEN_TOP((iVar8 + 0x48)));
    *((undefined4 *)GEN_TOP(((int)this + 100))) = uVar1;
    *((undefined4 *)GEN_TOP(((int)this + 0x68))) = uVar2;
    break;
  case 5: ;
    iVar8 = *((int *)GEN_TOP(((int)this + 0x88)));
    (*(int *)(gen_frame + 0x98)) = iVar8;
    puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x104))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)))));
    *((undefined4 *)GEN_TOP(((int)this + 0x40))) = *puVar5;
    (*(int *)(gen_frame + 0x9c)) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x44))) = puVar5[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x48))) = puVar5[2];
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = REFG(undefined4, 0x1302cf0);
    *((undefined4 *)GEN_TOP(((int)this + 0x54))) = REFG(undefined4, 0x1302cf4);
    *((undefined4 *)GEN_TOP(((int)this + 0x58))) = REFG(undefined4, 0x1302cf8);
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = REFG(undefined4, 0x1302cfc);
    uVar1 = *((undefined4 *)GEN_TOP((iVar8 + 0x48)));
    uVar2 = *((undefined4 *)GEN_TOP((iVar8 + 0x44)));
    *((undefined4 *)GEN_TOP(((int)this + 0x60))) = *((undefined4 *)GEN_TOP((iVar8 + 0x40)));
    *((undefined4 *)GEN_TOP(((int)this + 100))) = uVar1;
    *((undefined4 *)GEN_TOP(((int)this + 0x68))) = uVar2;
    iVar8 = *((int *)GEN_TOP(((int)this + 0xa4))) - *((int *)GEN_TOP(((int)this + 0xa0))) >> 2;
    if (0 < iVar8) {
      (*(int *)(gen_frame + 0x98)) = (*(int *)(gen_frame + 0x98)) + 0x20;
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa0))) + (*(int *)(gen_frame + 0x9c)) * 4))) + 0x10)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xe8))))(piVar3 GEN_EDX_ARG,(*(int *)(gen_frame + 0x98)));
        (*(int *)(gen_frame + 0x98)) = (*(int *)(gen_frame + 0x98)) + 0x10;
        iVar6 = (*(int *)(gen_frame + 0x9c)) + 1;
        (*(int *)(gen_frame + 0x9c)) = iVar6;
      } while (iVar6 < iVar8);
    }
    break;
  case 6: ;
    iVar8 = *((int *)GEN_TOP(((int)this + 0x88)));
    (*(int *)(gen_frame + 0x9c)) = iVar8;
    puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x104))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
    *((undefined4 *)GEN_TOP(((int)this + 0x40))) = *puVar5;
    (*(int *)(gen_frame + 0x98)) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x44))) = puVar5[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x48))) = puVar5[2];
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = REFG(undefined4, 0x1302cf0);
    *((undefined4 *)GEN_TOP(((int)this + 0x54))) = REFG(undefined4, 0x1302cf4);
    *((undefined4 *)GEN_TOP(((int)this + 0x58))) = REFG(undefined4, 0x1302cf8);
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = REFG(undefined4, 0x1302cfc);
    uVar1 = *((undefined4 *)GEN_TOP((iVar8 + 0x128)));
    uVar2 = *((undefined4 *)GEN_TOP((iVar8 + 0x124)));
    *((undefined4 *)GEN_TOP(((int)this + 0x60))) = *((undefined4 *)GEN_TOP((iVar8 + 0x120)));
    *((undefined4 *)GEN_TOP(((int)this + 100))) = uVar1;
    *((undefined4 *)GEN_TOP(((int)this + 0x68))) = uVar2;
    iVar8 = *((int *)GEN_TOP(((int)this + 0xa4))) - *((int *)GEN_TOP(((int)this + 0xa0))) >> 2;
    if (0 < iVar8) {
      (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 0x20;
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa0))) + (*(int *)(gen_frame + 0x98)) * 4))) + 0x10)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xe8))))(piVar3 GEN_EDX_ARG,(*(int *)(gen_frame + 0x9c)));
        (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 0x10;
        iVar6 = (*(int *)(gen_frame + 0x98)) + 1;
        (*(int *)(gen_frame + 0x98)) = iVar6;
      } while (iVar6 < iVar8);
    }
    break;
  case 7: ;
    iVar8 = *((int *)GEN_TOP(((int)this + 0x88)));
    (*(int *)(gen_frame + 0x9c)) = iVar8;
    puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x104))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x50)))));
    *((undefined4 *)GEN_TOP(((int)this + 0x40))) = *puVar5;
    (*(int *)(gen_frame + 0x98)) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x44))) = puVar5[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x48))) = puVar5[2];
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = REFG(undefined4, 0x1302cf0);
    *((undefined4 *)GEN_TOP(((int)this + 0x54))) = REFG(undefined4, 0x1302cf4);
    *((undefined4 *)GEN_TOP(((int)this + 0x58))) = REFG(undefined4, 0x1302cf8);
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = REFG(undefined4, 0x1302cfc);
    uVar1 = *((undefined4 *)GEN_TOP((iVar8 + 0x68)));
    uVar2 = *((undefined4 *)GEN_TOP((iVar8 + 100)));
    *((undefined4 *)GEN_TOP(((int)this + 0x60))) = *((undefined4 *)GEN_TOP((iVar8 + 0x60)));
    *((undefined4 *)GEN_TOP(((int)this + 100))) = uVar1;
    *((undefined4 *)GEN_TOP(((int)this + 0x68))) = uVar2;
    iVar8 = *((int *)GEN_TOP(((int)this + 0xa4))) - *((int *)GEN_TOP(((int)this + 0xa0))) >> 2;
    if (0 < iVar8) {
      (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 0x20;
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa0))) + (*(int *)(gen_frame + 0x98)) * 4))) + 0x10)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xe8))))(piVar3 GEN_EDX_ARG,(*(int *)(gen_frame + 0x9c)));
        (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 0x10;
        iVar6 = (*(int *)(gen_frame + 0x98)) + 1;
        (*(int *)(gen_frame + 0x98)) = iVar6;
      } while (iVar6 < iVar8);
    }
    break;
  case 8: ;
    (*(int *)(gen_frame + 0x9c)) = *((int *)GEN_TOP(((int)this + 0x88)));
    puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x104))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)))));
    *((undefined4 *)GEN_TOP(((int)this + 0x40))) = *puVar5;
    (*(int *)(gen_frame + 0x98)) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x44))) = puVar5[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x48))) = puVar5[2];
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = REFG(undefined4, 0x1302cf0);
    *((undefined4 *)GEN_TOP(((int)this + 0x54))) = REFG(undefined4, 0x1302cf4);
    *((undefined4 *)GEN_TOP(((int)this + 0x58))) = REFG(undefined4, 0x1302cf8);
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = REFG(undefined4, 0x1302cfc);
    *((undefined4 *)GEN_TOP(((int)this + 0x60))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x60))), REFG(float, 0x1302c60));
    *((undefined4 *)GEN_TOP(((int)this + 100))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 100))), REFG(float, 0x1302c64));
    *((undefined4 *)GEN_TOP(((int)this + 0x68))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x68))), REFG(float, 0x1302c68));
    iVar8 = *((int *)GEN_TOP(((int)this + 0xa4))) - *((int *)GEN_TOP(((int)this + 0xa0))) >> 2;
    if (0 < iVar8) {
      (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 0x20;
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa0))) + (*(int *)(gen_frame + 0x98)) * 4))) + 0x10)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xe8))))(piVar3 GEN_EDX_ARG,(*(int *)(gen_frame + 0x9c)));
        (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 0x10;
        iVar6 = (*(int *)(gen_frame + 0x98)) + 1;
        (*(int *)(gen_frame + 0x98)) = iVar6;
      } while (iVar6 < iVar8);
    }
    break;
  case 9: ;
    iVar8 = *((int *)GEN_TOP(((int)this + 0x88)));
    (*(int *)(gen_frame + 0x9c)) = iVar8;
    puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x104))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x60)))));
    *((undefined4 *)GEN_TOP(((int)this + 0x40))) = *puVar5;
    fVar9 = REFG(float, 0x1087f04);
    (*(int *)(gen_frame + 0x98)) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x44))) = puVar5[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x48))) = puVar5[2];
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = REFG(undefined4, 0x1302cf0);
    *((undefined4 *)GEN_TOP(((int)this + 0x54))) = REFG(undefined4, 0x1302cf4);
    *((undefined4 *)GEN_TOP(((int)this + 0x58))) = REFG(undefined4, 0x1302cf8);
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = REFG(undefined4, 0x1302cfc);
    uVar1 = *((undefined4 *)GEN_TOP((iVar8 + 0x60)));
    *((float *)GEN_TOP(((int)this + 0x60))) = fVar9;
    *((undefined4 *)GEN_TOP(((int)this + 100))) = uVar1;
    *((float *)GEN_TOP(((int)this + 0x68))) = fVar9;
    iVar8 = *((int *)GEN_TOP(((int)this + 0xa4))) - *((int *)GEN_TOP(((int)this + 0xa0))) >> 2;
    if (0 < iVar8) {
      (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 0x20;
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa0))) + (*(int *)(gen_frame + 0x98)) * 4))) + 0x10)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xe8))))(piVar3 GEN_EDX_ARG,(*(int *)(gen_frame + 0x9c)));
        (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 0x10;
        iVar6 = (*(int *)(gen_frame + 0x98)) + 1;
        (*(int *)(gen_frame + 0x98)) = iVar6;
      } while (iVar6 < iVar8);
    }
    break;
  case 0xb: ;
    iVar8 = *((int *)GEN_TOP(((int)this + 0x88)));
    (*(int *)(gen_frame + 0x98)) = iVar8;
    puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x104))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x40)))));
    *((undefined4 *)GEN_TOP(((int)this + 0x40))) = *puVar5;
    fVar4 = REFG(float, 0x1087f04);
    *((undefined4 *)GEN_TOP(((int)this + 0x44))) = puVar5[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x48))) = puVar5[2];
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = REFG(undefined4, 0x1302cf0);
    *((undefined4 *)GEN_TOP(((int)this + 0x54))) = REFG(undefined4, 0x1302cf4);
    *((undefined4 *)GEN_TOP(((int)this + 0x58))) = REFG(undefined4, 0x1302cf8);
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = REFG(undefined4, 0x1302cfc);
    fVar9 = *((float *)GEN_TOP((iVar8 + 0x134)));
    if ((GEN_ISNAN(fVar9) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) !=
        ((GEN_ISNAN(fVar9) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar9 == *(float *)&REFG(undefined, 0x1088114))) {
      fVar9 = fVar4;
    }
    uVar1 = *((undefined4 *)GEN_TOP((iVar8 + 0x120)));
    *((float *)GEN_TOP(((int)this + 0x60))) = fVar4;
    *((undefined4 *)GEN_TOP(((int)this + 100))) = uVar1;
    *((float *)GEN_TOP(((int)this + 0x68))) = fVar9;
    iVar6 = 0;
    iVar8 = *((int *)GEN_TOP(((int)this + 0xa4))) - *((int *)GEN_TOP(((int)this + 0xa0))) >> 2;
    (*(int *)(gen_frame + 0x9c)) = iVar8;
    if (0 < iVar8) {
      (*(int *)(gen_frame + 0x98)) = (*(int *)(gen_frame + 0x98)) + 0x20;
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa0))) + iVar6 * 4))) + 0x10)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xe8))))(piVar3 GEN_EDX_ARG,(*(int *)(gen_frame + 0x98)));
        (*(int *)(gen_frame + 0x98)) = (*(int *)(gen_frame + 0x98)) + 0x10;
        iVar6 = iVar6 + 1;
      } while (iVar6 < (*(int *)(gen_frame + 0x9c)));
    }
    break;
  case 0xc: ;
    (*(int *)(gen_frame + 0x9c)) = *((int *)GEN_TOP(((int)this + 0x88)));
    puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x104))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)))));
    *((undefined4 *)GEN_TOP(((int)this + 0x40))) = *puVar5;
    (*(int *)(gen_frame + 0x98)) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x44))) = puVar5[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x48))) = puVar5[2];
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = REFG(undefined4, 0x1302cf0);
    *((undefined4 *)GEN_TOP(((int)this + 0x54))) = REFG(undefined4, 0x1302cf4);
    *((undefined4 *)GEN_TOP(((int)this + 0x58))) = REFG(undefined4, 0x1302cf8);
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = REFG(undefined4, 0x1302cfc);
    *((undefined4 *)GEN_TOP(((int)this + 0x60))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x60))), REFG(float, 0x1302c60));
    *((undefined4 *)GEN_TOP(((int)this + 100))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 100))), REFG(float, 0x1302c64));
    *((undefined4 *)GEN_TOP(((int)this + 0x68))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x68))), REFG(float, 0x1302c68));
    iVar8 = *((int *)GEN_TOP(((int)this + 0xa4))) - *((int *)GEN_TOP(((int)this + 0xa0))) >> 2;
    if (0 < iVar8) {
      (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 0x20;
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa0))) + (*(int *)(gen_frame + 0x98)) * 4))) + 0x10)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xe8))))(piVar3 GEN_EDX_ARG,(*(int *)(gen_frame + 0x9c)));
        (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 0x10;
        iVar6 = (*(int *)(gen_frame + 0x98)) + 1;
        (*(int *)(gen_frame + 0x98)) = iVar6;
      } while (iVar6 < iVar8);
    }
    break;
  case 0xd: ;
    iVar8 = *((int *)GEN_TOP(((int)this + 0x88)));
    (*(int *)(gen_frame + 0x9c)) = iVar8;
    puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x104))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x80)))));
    *((undefined4 *)GEN_TOP(((int)this + 0x40))) = *puVar5;
    (*(int *)(gen_frame + 0x98)) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x44))) = puVar5[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x48))) = puVar5[2];
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = REFG(undefined4, 0x1302cf0);
    *((undefined4 *)GEN_TOP(((int)this + 0x54))) = REFG(undefined4, 0x1302cf4);
    *((undefined4 *)GEN_TOP(((int)this + 0x58))) = REFG(undefined4, 0x1302cf8);
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = REFG(undefined4, 0x1302cfc);
    uVar1 = *((undefined4 *)GEN_TOP((iVar8 + 0x48)));
    uVar2 = *((undefined4 *)GEN_TOP((iVar8 + 0x44)));
    *((undefined4 *)GEN_TOP(((int)this + 0x60))) = *((undefined4 *)GEN_TOP((iVar8 + 0x40)));
    *((undefined4 *)GEN_TOP(((int)this + 100))) = uVar1;
    *((undefined4 *)GEN_TOP(((int)this + 0x68))) = uVar2;
    iVar8 = *((int *)GEN_TOP(((int)this + 0xa4))) - *((int *)GEN_TOP(((int)this + 0xa0))) >> 2;
    if (0 < iVar8) {
      (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 0x20;
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa0))) + (*(int *)(gen_frame + 0x98)) * 4))) + 0x10)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xe8))))(piVar3 GEN_EDX_ARG,(*(int *)(gen_frame + 0x9c)));
        (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 0x10;
        iVar6 = (*(int *)(gen_frame + 0x98)) + 1;
        (*(int *)(gen_frame + 0x98)) = iVar6;
      } while (iVar6 < iVar8);
    }
    break;
  case 0xe: ;
    iVar8 = *((int *)GEN_TOP(((int)this + 0x88)));
    (*(int *)(gen_frame + 0x9c)) = iVar8;
    puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x104))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x70)))));
    *((undefined4 *)GEN_TOP(((int)this + 0x40))) = *puVar5;
    (*(int *)(gen_frame + 0x98)) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x44))) = puVar5[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x48))) = puVar5[2];
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = REFG(undefined4, 0x1302cf0);
    *((undefined4 *)GEN_TOP(((int)this + 0x54))) = REFG(undefined4, 0x1302cf4);
    *((undefined4 *)GEN_TOP(((int)this + 0x58))) = REFG(undefined4, 0x1302cf8);
    *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = REFG(undefined4, 0x1302cfc);
    uVar1 = *((undefined4 *)GEN_TOP((iVar8 + 0x28)));
    uVar2 = *((undefined4 *)GEN_TOP((iVar8 + 0x24)));
    *((undefined4 *)GEN_TOP(((int)this + 0x60))) = *((undefined4 *)GEN_TOP((iVar8 + 0x20)));
    *((undefined4 *)GEN_TOP(((int)this + 100))) = uVar1;
    *((undefined4 *)GEN_TOP(((int)this + 0x68))) = uVar2;
    iVar8 = *((int *)GEN_TOP(((int)this + 0xa4))) - *((int *)GEN_TOP(((int)this + 0xa0))) >> 2;
    if (0 < iVar8) {
      (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 0x60;
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa0))) + (*(int *)(gen_frame + 0x98)) * 4))) + 0x10)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xe8))))(piVar3 GEN_EDX_ARG,(*(int *)(gen_frame + 0x9c)));
        (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 0x10;
        iVar6 = (*(int *)(gen_frame + 0x98)) + 1;
        (*(int *)(gen_frame + 0x98)) = iVar6;
      } while (iVar6 < iVar8);
    }
  }
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x104))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x80)));
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = *((undefined4 *)GEN_TOP((uVar7 + 0xc)));
  F_005e0b90(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_005e8d40 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005e8d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5e8d40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x80, 0);
  undefined4 uVar1;
  undefined4 uVar2;
  int * piVar3;
  float fVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  int iVar8;
  undefined4 * puVar9;
  
  iVar8 = *((int *)GEN_TOP(((int)this + 0x88)));
  (*(int *)(gen_frame + 0x6c)) = iVar8;
  if (iVar8 == 0) {
    return;
  }
  uVar5 = *((uint *)GEN_TOP(((int)this + 0x90))) & 0xfffffdff;
  *((uint *)GEN_TOP(((int)this + 0x90))) = uVar5 | 0x100;
  switch((unsigned int)(uintptr_t)((char)uVar5)) {
  case '\x03': ;
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x44)));
    uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x48)));
    *((undefined4 *)GEN_TOP((iVar8 + 0x20))) = *((undefined4 *)GEN_TOP(((int)this + 0x40)));
    *((undefined4 *)GEN_TOP((iVar8 + 0x24))) = uVar1;
    uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    *((undefined4 *)GEN_TOP((iVar8 + 0x28))) = uVar2;
    *((undefined4 *)GEN_TOP((iVar8 + 0x2c))) = uVar1;
    *((undefined4 *)GEN_TOP((iVar8 + 0x30))) = *((undefined4 *)GEN_TOP(((int)this + 0x60)));
    *((undefined4 *)GEN_TOP((iVar8 + 0x38))) = *((undefined4 *)GEN_TOP(((int)this + 100)));
    *((undefined4 *)GEN_TOP((iVar8 + 0x34))) = *((undefined4 *)GEN_TOP(((int)this + 0x68)));
    break;
  case '\x04': ;
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x44)));
    uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x48)));
    *((undefined4 *)GEN_TOP((iVar8 + 0x20))) = *((undefined4 *)GEN_TOP(((int)this + 0x40)));
    fVar4 = REFG(float, 0x109ca64);
    *((undefined4 *)GEN_TOP((iVar8 + 0x24))) = uVar1;
    uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    *((undefined4 *)GEN_TOP((iVar8 + 0x28))) = uVar2;
    *((undefined4 *)GEN_TOP((iVar8 + 0x2c))) = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x54)));
    uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x58)));
    (*(undefined4 *)(gen_frame + 0x50)) = *((undefined4 *)GEN_TOP(((int)this + 0x50)));
    (*(undefined4 *)(gen_frame + 0x5c)) = *((undefined4 *)GEN_TOP(((int)this + 0x5c)));
    (*(undefined4 *)(gen_frame + 0x54)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x58)) = uVar2;
    F_0054d030(&(*(undefined4 *)(gen_frame + 0x50)) GEN_EDX_FWD,fVar4);
    F_00a1e0f0(&(*(undefined4 *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x50)));
    *((undefined4 *)GEN_TOP((iVar8 + 0x34))) = (*(undefined4 *)(gen_frame + 0x34));
    uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    *((undefined4 *)GEN_TOP((iVar8 + 0x30))) = (*(undefined4 *)(gen_frame + 0x30));
    *((undefined4 *)GEN_TOP((iVar8 + 0x38))) = (*(undefined4 *)(gen_frame + 0x38));
    *((undefined4 *)GEN_TOP((iVar8 + 0x3c))) = uVar1;
    *((undefined4 *)GEN_TOP((iVar8 + 0x48))) = *((undefined4 *)GEN_TOP(((int)this + 0x60)));
    *((undefined4 *)GEN_TOP((iVar8 + 0x50))) = *((undefined4 *)GEN_TOP(((int)this + 100)));
    *((undefined4 *)GEN_TOP((iVar8 + 0x4c))) = *((undefined4 *)GEN_TOP(((int)this + 0x68)));
    break;
  case '\x05': ;
    (*(int *)(gen_frame + 0x64)) = *((int *)GEN_TOP(((int)this + 0xa4))) - *((int *)GEN_TOP(((int)this + 0xa0))) >> 2;
    F_00607160(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(int)this + 0x40);
    (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c60)));
    (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c64)));
    (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c68)));
    if ((*((byte *)GEN_TOP(((int)this + 0x94))) & 1) != 0) {
      (*(undefined4 *)(gen_frame + 0x10)) = REFG(undefined4, 0x1302cf0);
      (*(undefined4 *)(gen_frame + 0x14)) = REFG(undefined4, 0x1302cf4);
      (*(undefined4 *)(gen_frame + 0x18)) = REFG(undefined4, 0x1302cf8);
      (*(undefined4 *)(gen_frame + 0x1c)) = REFG(undefined4, 0x1302cfc);
    }
    F_005dada0(((undefined *)GEN_TOP(((int)this + 0x98))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    (*(int *)(gen_frame + 0x68)) = 0;
    if (0 < (*(int *)(gen_frame + 0x64))) {
      puVar9 = ((undefined4 *)GEN_TOP((iVar8 + 0x28)));
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa0))) + (*(int *)(gen_frame + 0x68)) * 4))) + 0x10)));
        puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xe4))))(piVar3 GEN_EDX_ARG)));
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        puVar9[-2] = *puVar6;
        puVar9[-1] = uVar1;
        uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
        iVar7 = (*(int *)(gen_frame + 0x68)) + 1;
        *puVar9 = uVar2;
        puVar9[1] = uVar1;
        puVar9 = puVar9 + 4;
        (*(int *)(gen_frame + 0x68)) = iVar7;
        iVar8 = (*(int *)(gen_frame + 0x6c));
      } while (iVar7 < (*(int *)(gen_frame + 0x64)));
    }
    goto LAB_005e96d9;
  case '\x06': ;
    (*(int *)(gen_frame + 0x64)) = *((int *)GEN_TOP(((int)this + 0xa4))) - *((int *)GEN_TOP(((int)this + 0xa0))) >> 2;
    F_00607160(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(int)this + 0x40);
    (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c60)));
    (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c64)));
    (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c68)));
    if ((*((byte *)GEN_TOP(((int)this + 0x94))) & 1) != 0) {
      (*(undefined4 *)(gen_frame + 0x10)) = REFG(undefined4, 0x1302cf0);
      (*(undefined4 *)(gen_frame + 0x14)) = REFG(undefined4, 0x1302cf4);
      (*(undefined4 *)(gen_frame + 0x18)) = REFG(undefined4, 0x1302cf8);
      (*(undefined4 *)(gen_frame + 0x1c)) = REFG(undefined4, 0x1302cfc);
    }
    F_005dada0(((undefined *)GEN_TOP(((int)this + 0x98))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    (*(int *)(gen_frame + 0x68)) = 0;
    if (0 < (*(int *)(gen_frame + 0x64))) {
      puVar9 = ((undefined4 *)GEN_TOP((iVar8 + 0x28)));
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa0))) + (*(int *)(gen_frame + 0x68)) * 4))) + 0x10)));
        puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xe4))))(piVar3 GEN_EDX_ARG)));
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        puVar9[-2] = *puVar6;
        puVar9[-1] = uVar1;
        uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
        iVar7 = (*(int *)(gen_frame + 0x68)) + 1;
        *puVar9 = uVar2;
        puVar9[1] = uVar1;
        puVar9 = puVar9 + 4;
        (*(int *)(gen_frame + 0x68)) = iVar7;
        iVar8 = (*(int *)(gen_frame + 0x6c));
      } while (iVar7 < (*(int *)(gen_frame + 0x64)));
    }
    *((undefined4 *)GEN_TOP((iVar8 + 0x120))) = *((undefined4 *)GEN_TOP(((int)this + 0x60)));
    *((undefined4 *)GEN_TOP((iVar8 + 0x128))) = *((undefined4 *)GEN_TOP(((int)this + 100)));
    *((undefined4 *)GEN_TOP((iVar8 + 0x124))) = *((undefined4 *)GEN_TOP(((int)this + 0x68)));
    break;
  case '\a': ;
    (*(int *)(gen_frame + 0x64)) = *((int *)GEN_TOP(((int)this + 0xa4))) - *((int *)GEN_TOP(((int)this + 0xa0))) >> 2;
    F_00607160(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(int)this + 0x40);
    (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c60)));
    (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c64)));
    (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c68)));
    if ((*((byte *)GEN_TOP(((int)this + 0x94))) & 1) != 0) {
      (*(undefined4 *)(gen_frame + 0x10)) = REFG(undefined4, 0x1302cf0);
      (*(undefined4 *)(gen_frame + 0x14)) = REFG(undefined4, 0x1302cf4);
      (*(undefined4 *)(gen_frame + 0x18)) = REFG(undefined4, 0x1302cf8);
      (*(undefined4 *)(gen_frame + 0x1c)) = REFG(undefined4, 0x1302cfc);
    }
    F_005dada0(((undefined *)GEN_TOP(((int)this + 0x98))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    (*(int *)(gen_frame + 0x68)) = 0;
    if (0 < (*(int *)(gen_frame + 0x64))) {
      puVar9 = ((undefined4 *)GEN_TOP((iVar8 + 0x28)));
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa0))) + (*(int *)(gen_frame + 0x68)) * 4))) + 0x10)));
        puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xe4))))(piVar3 GEN_EDX_ARG)));
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        puVar9[-2] = *puVar6;
        puVar9[-1] = uVar1;
        uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
        iVar7 = (*(int *)(gen_frame + 0x68)) + 1;
        *puVar9 = uVar2;
        puVar9[1] = uVar1;
        puVar9 = puVar9 + 4;
        (*(int *)(gen_frame + 0x68)) = iVar7;
        iVar8 = (*(int *)(gen_frame + 0x6c));
      } while (iVar7 < (*(int *)(gen_frame + 0x64)));
    }
    *((undefined4 *)GEN_TOP((iVar8 + 0x60))) = *((undefined4 *)GEN_TOP(((int)this + 0x60)));
    *((undefined4 *)GEN_TOP((iVar8 + 0x68))) = *((undefined4 *)GEN_TOP(((int)this + 100)));
    *((undefined4 *)GEN_TOP((iVar8 + 100))) = *((undefined4 *)GEN_TOP(((int)this + 0x68)));
    break;
  case '\b': ;
    (*(int *)(gen_frame + 0x64)) = *((int *)GEN_TOP(((int)this + 0xa4))) - *((int *)GEN_TOP(((int)this + 0xa0))) >> 2;
    F_00607160(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(int)this + 0x40);
    (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c60)));
    (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c64)));
    (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c68)));
    if ((*((byte *)GEN_TOP(((int)this + 0x94))) & 1) != 0) {
      (*(undefined4 *)(gen_frame + 0x10)) = REFG(undefined4, 0x1302cf0);
      (*(undefined4 *)(gen_frame + 0x14)) = REFG(undefined4, 0x1302cf4);
      (*(undefined4 *)(gen_frame + 0x18)) = REFG(undefined4, 0x1302cf8);
      (*(undefined4 *)(gen_frame + 0x1c)) = REFG(undefined4, 0x1302cfc);
    }
    F_005dada0(((undefined *)GEN_TOP(((int)this + 0x98))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    (*(int *)(gen_frame + 0x68)) = 0;
    if (0 < (*(int *)(gen_frame + 0x64))) {
      puVar9 = ((undefined4 *)GEN_TOP((iVar8 + 0x28)));
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa0))) + (*(int *)(gen_frame + 0x68)) * 4))) + 0x10)));
        puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xe4))))(piVar3 GEN_EDX_ARG)));
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        puVar9[-2] = *puVar6;
        puVar9[-1] = uVar1;
        uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
        iVar8 = (*(int *)(gen_frame + 0x68)) + 1;
        *puVar9 = uVar2;
        puVar9[1] = uVar1;
        puVar9 = puVar9 + 4;
        (*(int *)(gen_frame + 0x68)) = iVar8;
      } while (iVar8 < (*(int *)(gen_frame + 0x64)));
    }
    break;
  case '\t': ;
    (*(int *)(gen_frame + 0x64)) = *((int *)GEN_TOP(((int)this + 0xa4))) - *((int *)GEN_TOP(((int)this + 0xa0))) >> 2;
    F_00607160(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(int)this + 0x40);
    (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c60)));
    (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c64)));
    (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c68)));
    if ((*((byte *)GEN_TOP(((int)this + 0x94))) & 1) != 0) {
      (*(undefined4 *)(gen_frame + 0x10)) = REFG(undefined4, 0x1302cf0);
      (*(undefined4 *)(gen_frame + 0x14)) = REFG(undefined4, 0x1302cf4);
      (*(undefined4 *)(gen_frame + 0x18)) = REFG(undefined4, 0x1302cf8);
      (*(undefined4 *)(gen_frame + 0x1c)) = REFG(undefined4, 0x1302cfc);
    }
    F_005dada0(((undefined *)GEN_TOP(((int)this + 0x98))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    (*(int *)(gen_frame + 0x68)) = 0;
    if (0 < (*(int *)(gen_frame + 0x64))) {
      puVar9 = ((undefined4 *)GEN_TOP((iVar8 + 0x28)));
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa0))) + (*(int *)(gen_frame + 0x68)) * 4))) + 0x10)));
        puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xe4))))(piVar3 GEN_EDX_ARG)));
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        puVar9[-2] = *puVar6;
        puVar9[-1] = uVar1;
        uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
        iVar7 = (*(int *)(gen_frame + 0x68)) + 1;
        *puVar9 = uVar2;
        puVar9[1] = uVar1;
        puVar9 = puVar9 + 4;
        (*(int *)(gen_frame + 0x68)) = iVar7;
        iVar8 = (*(int *)(gen_frame + 0x6c));
      } while (iVar7 < (*(int *)(gen_frame + 0x64)));
    }
    *((undefined4 *)GEN_TOP((iVar8 + 0x60))) = *((undefined4 *)GEN_TOP(((int)this + 100)));
    break;
  case '\v': ;
    (*(int *)(gen_frame + 0x64)) = *((int *)GEN_TOP(((int)this + 0xa4))) - *((int *)GEN_TOP(((int)this + 0xa0))) >> 2;
    F_00607160(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(int)this + 0x40);
    (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c60)));
    (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c64)));
    (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c68)));
    if ((*((byte *)GEN_TOP(((int)this + 0x94))) & 1) != 0) {
      (*(undefined4 *)(gen_frame + 0x10)) = REFG(undefined4, 0x1302cf0);
      (*(undefined4 *)(gen_frame + 0x14)) = REFG(undefined4, 0x1302cf4);
      (*(undefined4 *)(gen_frame + 0x18)) = REFG(undefined4, 0x1302cf8);
      (*(undefined4 *)(gen_frame + 0x1c)) = REFG(undefined4, 0x1302cfc);
    }
    F_005dada0(((undefined *)GEN_TOP(((int)this + 0x98))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    (*(int *)(gen_frame + 0x68)) = 0;
    if (0 < (*(int *)(gen_frame + 0x64))) {
      puVar9 = ((undefined4 *)GEN_TOP((iVar8 + 0x28)));
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa0))) + (*(int *)(gen_frame + 0x68)) * 4))) + 0x10)));
        puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xe4))))(piVar3 GEN_EDX_ARG)));
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        puVar9[-2] = *puVar6;
        puVar9[-1] = uVar1;
        uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
        iVar7 = (*(int *)(gen_frame + 0x68)) + 1;
        *puVar9 = uVar2;
        puVar9[1] = uVar1;
        puVar9 = puVar9 + 4;
        (*(int *)(gen_frame + 0x68)) = iVar7;
        iVar8 = (*(int *)(gen_frame + 0x6c));
      } while (iVar7 < (*(int *)(gen_frame + 0x64)));
    }
    *((undefined4 *)GEN_TOP((iVar8 + 0x120))) = *((undefined4 *)GEN_TOP(((int)this + 100)));
    *((undefined4 *)GEN_TOP((iVar8 + 0x134))) = *((undefined4 *)GEN_TOP(((int)this + 0x68)));
    break;
  case '\f': ;
    (*(int *)(gen_frame + 0x64)) = *((int *)GEN_TOP(((int)this + 0xa4))) - *((int *)GEN_TOP(((int)this + 0xa0))) >> 2;
    F_00607160(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(int)this + 0x40);
    (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c60)));
    (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c64)));
    (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c68)));
    if ((*((byte *)GEN_TOP(((int)this + 0x94))) & 1) != 0) {
      (*(undefined4 *)(gen_frame + 0x10)) = REFG(undefined4, 0x1302cf0);
      (*(undefined4 *)(gen_frame + 0x14)) = REFG(undefined4, 0x1302cf4);
      (*(undefined4 *)(gen_frame + 0x18)) = REFG(undefined4, 0x1302cf8);
      (*(undefined4 *)(gen_frame + 0x1c)) = REFG(undefined4, 0x1302cfc);
    }
    F_005dada0(((undefined *)GEN_TOP(((int)this + 0x98))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    (*(int *)(gen_frame + 0x68)) = 0;
    if (0 < (*(int *)(gen_frame + 0x64))) {
      puVar9 = ((undefined4 *)GEN_TOP((iVar8 + 0x28)));
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa0))) + (*(int *)(gen_frame + 0x68)) * 4))) + 0x10)));
        puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xe4))))(piVar3 GEN_EDX_ARG)));
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        puVar9[-2] = *puVar6;
        puVar9[-1] = uVar1;
        uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
        iVar8 = (*(int *)(gen_frame + 0x68)) + 1;
        *puVar9 = uVar2;
        puVar9[1] = uVar1;
        puVar9 = puVar9 + 4;
        (*(int *)(gen_frame + 0x68)) = iVar8;
      } while (iVar8 < (*(int *)(gen_frame + 0x64)));
    }
    break;
  case '\r': ;
    (*(int *)(gen_frame + 0x64)) = *((int *)GEN_TOP(((int)this + 0xa4))) - *((int *)GEN_TOP(((int)this + 0xa0))) >> 2;
    F_00607160(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(int)this + 0x40);
    (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c60)));
    (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c64)));
    (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c68)));
    if ((*((byte *)GEN_TOP(((int)this + 0x94))) & 1) != 0) {
      (*(undefined4 *)(gen_frame + 0x10)) = REFG(undefined4, 0x1302cf0);
      (*(undefined4 *)(gen_frame + 0x14)) = REFG(undefined4, 0x1302cf4);
      (*(undefined4 *)(gen_frame + 0x18)) = REFG(undefined4, 0x1302cf8);
      (*(undefined4 *)(gen_frame + 0x1c)) = REFG(undefined4, 0x1302cfc);
    }
    F_005dada0(((undefined *)GEN_TOP(((int)this + 0x98))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    (*(int *)(gen_frame + 0x68)) = 0;
    if (0 < (*(int *)(gen_frame + 0x64))) {
      puVar9 = ((undefined4 *)GEN_TOP((iVar8 + 0x28)));
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa0))) + (*(int *)(gen_frame + 0x68)) * 4))) + 0x10)));
        puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xe4))))(piVar3 GEN_EDX_ARG)));
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        puVar9[-2] = *puVar6;
        puVar9[-1] = uVar1;
        uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
        iVar7 = (*(int *)(gen_frame + 0x68)) + 1;
        *puVar9 = uVar2;
        puVar9[1] = uVar1;
        puVar9 = puVar9 + 4;
        (*(int *)(gen_frame + 0x68)) = iVar7;
        iVar8 = (*(int *)(gen_frame + 0x6c));
      } while (iVar7 < (*(int *)(gen_frame + 0x64)));
    }
LAB_005e96d9: ;
    *((undefined4 *)GEN_TOP((iVar8 + 0x40))) = *((undefined4 *)GEN_TOP(((int)this + 0x60)));
    *((undefined4 *)GEN_TOP((iVar8 + 0x48))) = *((undefined4 *)GEN_TOP(((int)this + 100)));
    *((undefined4 *)GEN_TOP((iVar8 + 0x44))) = *((undefined4 *)GEN_TOP(((int)this + 0x68)));
    break;
  case '\x0e': ;
    (*(int *)(gen_frame + 0x64)) = *((int *)GEN_TOP(((int)this + 0xa4))) - *((int *)GEN_TOP(((int)this + 0xa0))) >> 2;
    F_00607160(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(int)this + 0x40);
    (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c60)));
    (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c64)));
    (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c68)));
    if ((*((byte *)GEN_TOP(((int)this + 0x94))) & 1) != 0) {
      (*(undefined4 *)(gen_frame + 0x10)) = REFG(undefined4, 0x1302cf0);
      (*(undefined4 *)(gen_frame + 0x14)) = REFG(undefined4, 0x1302cf4);
      (*(undefined4 *)(gen_frame + 0x18)) = REFG(undefined4, 0x1302cf8);
      (*(undefined4 *)(gen_frame + 0x1c)) = REFG(undefined4, 0x1302cfc);
    }
    F_005dada0(((undefined *)GEN_TOP(((int)this + 0x98))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    (*(int *)(gen_frame + 0x68)) = 0;
    if (0 < (*(int *)(gen_frame + 0x64))) {
      puVar9 = ((undefined4 *)GEN_TOP((iVar8 + 0x68)));
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa0))) + (*(int *)(gen_frame + 0x68)) * 4))) + 0x10)));
        puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xe4))))(piVar3 GEN_EDX_ARG)));
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        puVar9[-2] = *puVar6;
        puVar9[-1] = uVar1;
        uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
        iVar7 = (*(int *)(gen_frame + 0x68)) + 1;
        *puVar9 = uVar2;
        puVar9[1] = uVar1;
        puVar9 = puVar9 + 4;
        (*(int *)(gen_frame + 0x68)) = iVar7;
        iVar8 = (*(int *)(gen_frame + 0x6c));
      } while (iVar7 < (*(int *)(gen_frame + 0x64)));
    }
    *((undefined4 *)GEN_TOP((iVar8 + 0x20))) = *((undefined4 *)GEN_TOP(((int)this + 0x60)));
    *((undefined4 *)GEN_TOP((iVar8 + 0x28))) = *((undefined4 *)GEN_TOP(((int)this + 100)));
    *((undefined4 *)GEN_TOP((iVar8 + 0x24))) = *((undefined4 *)GEN_TOP(((int)this + 0x68)));
  }
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x34)));
  if ((piVar3 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x88))) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x48))))
              (piVar3 GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x88))),(int)*((short *)GEN_TOP(((int)this + 0x8c))));
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x104))))(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x40)));
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = (*(undefined4 *)(gen_frame + 0x4c));
  if ((*((byte *)GEN_TOP(((int)this + 0x94))) & 1) != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x40))) = (*(undefined4 *)(gen_frame + 0x40));
    *((undefined4 *)GEN_TOP(((int)this + 0x44))) = (*(undefined4 *)(gen_frame + 0x44));
    *((undefined4 *)GEN_TOP(((int)this + 0x48))) = (*(undefined4 *)(gen_frame + 0x48));
    F_005e0b90(this GEN_EDX_ARG);
  }
  *((uint *)GEN_TOP(((int)this + 0x90))) = *((uint *)GEN_TOP(((int)this + 0x90))) & 0xfffffcff;
  return;
}

/* ref: FUN_005e97a0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005e97a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5e97a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x20, 0);
  undefined4 uVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  
  if ((*((byte *)GEN_TOP(((int)this + 0x94))) & 1) == 0) {
    return;
  }
  if (*((int *)GEN_TOP(((int)this + 0x88))) == 0) {
    return;
  }
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x90))) & 0xfffffeff;
  *((uint *)GEN_TOP(((int)this + 0x90))) = uVar4 | 0x200;
  switch((unsigned int)(uintptr_t)((char)uVar4)) {
  case '\x05': ;
  case '\x06': ;
  case '\a': ;
  case '\b': ;
  case '\t': ;
  case '\v': ;
  case '\f': ;
  case '\r': ;
    iVar5 = param_1 + 2;
    break;
  default: ;
    goto switchD_005e97fb_caseD_a;
  case '\x0e': ;
    iVar5 = param_1 + 6;
  }
  puVar6 = ((undefined4 *)GEN_TOP((iVar5 * 0x10 + *((int *)GEN_TOP(((int)this + 0x88))))));
  uVar2 = *param_2;
  uVar1 = param_2[2];
  puVar6[1] = param_2[1];
  puVar6[3] = GEN_FLT_TO(puVar6[3], REFG(float, 0x1087f04));
  puVar6[2] = uVar1;
  *puVar6 = uVar2;
switchD_005e97fb_caseD_a: ;
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x34)));
  if ((piVar3 != ((int *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x88))) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x48))))
              (piVar3 GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x88))),(int)*((short *)GEN_TOP(((int)this + 0x8c))));
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x104))))(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = (*(undefined4 *)(gen_frame + 0x0));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = (*(undefined4 *)(gen_frame + 0x4));
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = (*(undefined4 *)(gen_frame + 0x8));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,((undefined4 *)GEN_TOP(((int)this + 0x40))));
  F_005e0b90(this GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)this + 0x90))) = *((uint *)GEN_TOP(((int)this + 0x90))) & 0xfffffcff;
  return;
}

/* ref: FUN_005e98e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005e98e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e98e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint in_EAX = 0;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x34)));
  *((byte *)GEN_TOP(((int)this + 0x94))) = *((byte *)GEN_TOP(((int)this + 0x94))) & 0xfb;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x78))))(piVar1 GEN_EDX_FWD,param_1);
    *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
    in_EAX = F_005e1000(this GEN_EDX_ARG);
  }
  return in_EAX;
}

/* ref: FUN_005e9920 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005e9920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5e9920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x34)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    if ((*((byte *)GEN_TOP(((int)this + 0x94))) & 0x10) == 0) goto LAB_005e9958;
    *((byte *)GEN_TOP(((int)this + 0x94))) = *((byte *)GEN_TOP(((int)this + 0x94))) & 0xef;
  }
  else {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x78))))(piVar1 GEN_EDX_FWD,500);
    *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  }
  F_005e1000(this GEN_EDX_ARG);
LAB_005e9958: ;
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x3c))) != 0) {
    uVar2 = F_0050c620(*((int *)GEN_TOP(((int)this + 0x3c))),0,0);
    *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  }
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::SoundPointLayoutInstance::vf58 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005e9980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e9980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)(this + 0x30) = *param_1;
  *(undefined4 *)(this + 0x34) = param_1[1];
  *(undefined4 *)(this + 0x38) = param_1[2];
  if ((*((uint *)GEN_TOP((*(int *)(this + 0x70) + 0x90))) & 0x300) == 0) {
    uVar1 = F_00a1b490(this + 0x10);
    F_005e97a0(*(undefined * PTR32 *)(this + 0x70) GEN_EDX_ARG,uVar1,param_1);
  }
  return;
}

/* ref: FUN_005e99d0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005e99d0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5e99d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((REFG(int, 0x1371298) + 0x34 + *((int *)GEN_TOP((REFG(int, 0x1371298) + 0x30))) * 4)));
  *param_1 = *((undefined4 *)GEN_TOP((iVar1 + 0x30)));
  param_1[1] = *((undefined4 *)GEN_TOP((iVar1 + 0x34)));
  param_1[2] = *((undefined4 *)GEN_TOP((iVar1 + 0x38)));
  uVar2 = F_00a1c7d0(param_1,0,0,0);
  return uVar2;
}

/* ref: FUN_005e9a10 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005e9a10(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5e9a10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  float fVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  short sVar7;
  
  iVar5 = 0;
  uVar4 = 0;
  do {
    if ((uint)param_2 == *((uint *)GEN_TOP(((int)&REFG(undefined4, 0x10a2810) + uVar4)))) {
      puVar6 = &REFG(undefined4, 0x10a2810) + iVar5 * 10;
      goto LAB_005e9a3e;
    }
    uVar4 = uVar4 + 0x28;
    iVar5 = iVar5 + 1;
  } while (uVar4 < 0x208);
  puVar6 = &REFG(undefined4, 0x10a2810);
LAB_005e9a3e: ;
  *((byte *)GEN_TOP((param_1 + 0x10))) = param_2;
  uVar1 = puVar6[5];
  *((undefined4 *)GEN_TOP((param_1 + 0x28))) = uVar1;
  *((undefined4 *)GEN_TOP((param_1 + 0x24))) = uVar1;
  *((undefined4 *)GEN_TOP((param_1 + 0x2c))) = puVar6[7];
  *((undefined4 *)GEN_TOP((param_1 + 0x30))) = puVar6[9];
  *((undefined4 *)GEN_TOP((param_1 + 0x20))) = puVar6[3];
  *((undefined4 *)GEN_TOP((param_1 + 0x18))) = puVar6[2];
  fVar2 = *((float *)GEN_TOP((REFG(int, 0x1379cb0) + 0x4c + (uint)param_2 * 4)));
  if (*(float *)&REFG(undefined, 0x1088114) <= fVar2) {
    *((float *)GEN_TOP((param_1 + 0x24))) = fVar2;
  }
  sVar7 = 0;
  *((float *)GEN_TOP((param_1 + 0x40))) = *param_3;
  *((float *)GEN_TOP((param_1 + 0x44))) = param_3[1];
  *((float *)GEN_TOP((param_1 + 0x48))) = param_3[2];
  *((float *)GEN_TOP((param_1 + 0x50))) = *param_3;
  *((float *)GEN_TOP((param_1 + 0x54))) = param_3[1];
  *((float *)GEN_TOP((param_1 + 0x58))) = param_3[2];
  *((undefined1 *)GEN_TOP((param_1 + 0x12))) = 1;
  uVar4 = puVar6[1];
  *((undefined4 *)GEN_TOP((param_1 + 0x60))) = 0;
  *((short *)GEN_TOP((param_1 + 100))) = (short)uVar4;
  *((undefined2 *)GEN_TOP((param_1 + 0x66))) = 0;
  if (1 < uVar4) {
    do {
      uVar4 = uVar4 >> 1;
      sVar7 = sVar7 + 1;
    } while (1 < uVar4);
    *((short *)GEN_TOP((param_1 + 0x66))) = sVar7;
  }
  fVar2 = param_3[2];
  bVar3 = (byte)*((undefined2 *)GEN_TOP((param_1 + 0x66)));
  *((short *)GEN_TOP((param_1 + 0x60))) = (short)(int)*param_3 >> GEN_SHC(bVar3, bVar3);
  *((short *)GEN_TOP((param_1 + 0x62))) = (short)(int)fVar2 >> GEN_SHC(bVar3, bVar3);
  return 0;
}

/* ref: FUN_005e9bb0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005e9bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5e9bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  byte bVar1;
  undefined4 * puVar2;
  byte * _Str1;
  int iVar3;
  byte * pbVar4;
  byte * pbVar5;
  bool bVar6;
  
  _Str1 = (*(byte * PTR32 *)&gen_args[0]);
  if ((((*(byte * PTR32 *)&gen_args[0]) == ((byte *)GEN_TOP(0x0))) || (*(*(byte * PTR32 *)&gen_args[0]) == 0)) ||
     ((iVar3 = F_00c4b813((char *)(*(byte * PTR32 *)&gen_args[0]),((char *)REFP(0x10a257c)),3), iVar3 != 0 &&
      (iVar3 = F_00c4b813((char *)_Str1,((char *)REFP(0x10a2580)),9), iVar3 != 0)))) {
    return 0;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x17c)));
  (*(byte * PTR32 *)&gen_args[0]) = ((byte *)GEN_TOP(*puVar2));
  do {
    if ((*(byte * PTR32 *)&gen_args[0]) == (byte *)puVar2) {
      return 1;
    }
    pbVar4 = ((byte *)GEN_TOP((*((int *)GEN_TOP(((int)(*(byte * PTR32 *)&gen_args[0]) + 0xc))) + 0x3c)));
    pbVar5 = _Str1;
    if (0xf < *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)(*(byte * PTR32 *)&gen_args[0]) + 0xc))) + 0x50)))) {
      pbVar4 = *(byte * PTR32 *)pbVar4;
    }
    do {
      bVar1 = *pbVar5;
      bVar6 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_005e9c34: ;
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_005e9c39;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar6 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_005e9c34;
      pbVar4 = pbVar4 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_005e9c39: ;
    if (iVar3 == 0) {
      return 0;
    }
    F_0060a620(&(*(byte * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  } while( true );
}

/* ref: FUN_005e9d30 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005e9d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e9d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int local_8;
  
  uVar6 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x1ac))) != 0) {
    iVar1 = *((int *)GEN_TOP((param_1 + 0x14)));
    uVar2 = *((uint *)GEN_TOP((param_1 + 0x18)));
    iVar3 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1ac))) + 0xa0)));
    uVar4 = *((uint *)GEN_TOP((iVar3 + 8)));
    if (uVar4 != 0) {
      local_8 = 0;
      do {
        iVar7 = *((int *)GEN_TOP((iVar3 + 4))) + local_8;
        if ((iVar1 == *((int *)GEN_TOP((iVar7 + iVar3)))) &&
           (uVar5 = F_00a1b6b0(iVar7 + 4 + iVar3), uVar2 == uVar5)) {
          if (*((int *)GEN_TOP((param_1 + 0x30))) != 0) {
            F_0060b6a0(*((int *)GEN_TOP((param_1 + 0x30))) GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((iVar7 + 8 + iVar3)))));
          }
          return 1;
        }
        local_8 = local_8 + 0xc;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
    }
  }
  return 0;
}

/* ref: FUN_005e9dc0 */
GEN_OWN GEN_FRAME uint F_005e9dc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5e9dc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_005e1540(param_1,0,param_2,param_3);
  return uVar1;
}

/* ref: FUN_005e9de0 */
GEN_OWN GEN_FRAME uint F_005e9de0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5e9de0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_005e1540(0,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_005e9e00 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005e9e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5e9e00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  char cVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  int * piVar7;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
  puVar4 = ((undefined4 *)GEN_TOP(*puVar3));
  do {
    if (puVar4 == puVar3) {
      return 1;
    }
    if (*((int *)GEN_TOP((puVar4[3] + 8))) == 0x6d646c) {
      piVar7 = ((int *)GEN_TOP((puVar4[3] + 0x88)));
      iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar7), 0);
      if (iVar1 != 2) {
        return 0;
      }
    }
    if (*((char *)GEN_TOP(((int)puVar4 + 0x15))) == '\0') {
      puVar5 = ((undefined4 *)GEN_TOP(puVar4[2]));
      if (*((char *)GEN_TOP(((int)puVar5 + 0x15))) == '\0') {
        cVar2 = *((char *)GEN_TOP(((int)*puVar5 + 0x15)));
        puVar4 = puVar5;
        puVar5 = ((undefined4 *)GEN_TOP(*puVar5));
        while (cVar2 == '\0') {
          cVar2 = *((char *)GEN_TOP(((int)*puVar5 + 0x15)));
          puVar4 = puVar5;
          puVar5 = ((undefined4 *)GEN_TOP(*puVar5));
        }
      }
      else {
        cVar2 = *((char *)GEN_TOP(((int)puVar4[1] + 0x15)));
        puVar6 = ((undefined4 *)GEN_TOP(puVar4[1]));
        puVar5 = puVar4;
        while ((puVar4 = puVar6, cVar2 == '\0' && (puVar5 == ((undefined4 *)GEN_TOP(puVar4[2]))))) {
          cVar2 = *((char *)GEN_TOP(((int)puVar4[1] + 0x15)));
          puVar6 = ((undefined4 *)GEN_TOP(puVar4[1]));
          puVar5 = puVar4;
        }
      }
    }
  } while( true );
}

/* ref: FUN_005e9e80 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005e9e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5e9e80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  char cVar2;
  undefined4 * puVar3;
  undefined * this_00;
  undefined4 * puVar4;
  undefined4 * puVar5;
  byte in_AL = 0;
  byte bVar6;
  undefined4 * puVar8;
  undefined4 * puVar7;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
  puVar8 = ((undefined4 *)GEN_TOP(*puVar3));
  while (puVar8 != puVar3) {
    this_00 = ((undefined *)GEN_TOP(puVar8[3]));
    piVar1 = ((int *)GEN_TOP(((int)this_00 + 0x88)));
    LOCK();
    puVar7 = ((undefined4 *)GEN_TOP(*piVar1));
    *piVar1 = *piVar1;
    UNLOCK();
    if (puVar7 != ((undefined4 *)GEN_TOP(0x2))) {
      bVar6 = F_0050c3d0(this_00 GEN_EDX_FWD);
      puVar7 = ((undefined4 *)GEN_TOP((uint)bVar6));
    }
    if (*((char *)GEN_TOP(((int)puVar8 + 0x15))) == '\0') {
      puVar4 = ((undefined4 *)GEN_TOP(puVar8[2]));
      if (*((char *)GEN_TOP(((int)puVar4 + 0x15))) == '\0') {
        cVar2 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
        puVar7 = ((undefined4 *)GEN_TOP(*puVar4));
        while (puVar8 = puVar4, cVar2 == '\0') {
          cVar2 = *((char *)GEN_TOP(((int)*puVar7 + 0x15)));
          puVar4 = puVar7;
          puVar7 = ((undefined4 *)GEN_TOP(*puVar7));
        }
      }
      else {
        cVar2 = *((char *)GEN_TOP(((int)puVar8[1] + 0x15)));
        puVar5 = ((undefined4 *)GEN_TOP(puVar8[1]));
        puVar4 = puVar8;
        while ((puVar7 = puVar5, puVar8 = puVar7, cVar2 == '\0' &&
               (puVar4 == ((undefined4 *)GEN_TOP(puVar7[2]))))) {
          cVar2 = *((char *)GEN_TOP(((int)puVar7[1] + 0x15)));
          puVar5 = ((undefined4 *)GEN_TOP(puVar7[1]));
          puVar4 = puVar7;
        }
      }
    }
    in_AL = (byte)puVar7;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 2;
  return in_AL;
}

/* ref: FUN_005e9f00 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005e9f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5e9f00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  char cVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  int * piVar7;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
  puVar4 = ((undefined4 *)GEN_TOP(*puVar3));
  while( true ) {
    if (puVar4 == puVar3) {
      return 1;
    }
    piVar7 = ((int *)GEN_TOP((puVar4[3] + 0x88)));
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar7), 0);
    if (iVar1 != 2) break;
    if (*((char *)GEN_TOP(((int)puVar4 + 0x15))) == '\0') {
      puVar5 = ((undefined4 *)GEN_TOP(puVar4[2]));
      if (*((char *)GEN_TOP(((int)puVar5 + 0x15))) == '\0') {
        cVar2 = *((char *)GEN_TOP(((int)*puVar5 + 0x15)));
        puVar4 = puVar5;
        puVar5 = ((undefined4 *)GEN_TOP(*puVar5));
        while (cVar2 == '\0') {
          cVar2 = *((char *)GEN_TOP(((int)*puVar5 + 0x15)));
          puVar4 = puVar5;
          puVar5 = ((undefined4 *)GEN_TOP(*puVar5));
        }
      }
      else {
        cVar2 = *((char *)GEN_TOP(((int)puVar4[1] + 0x15)));
        puVar6 = ((undefined4 *)GEN_TOP(puVar4[1]));
        puVar5 = puVar4;
        while ((puVar4 = puVar6, cVar2 == '\0' && (puVar5 == ((undefined4 *)GEN_TOP(puVar4[2]))))) {
          cVar2 = *((char *)GEN_TOP(((int)puVar4[1] + 0x15)));
          puVar6 = ((undefined4 *)GEN_TOP(puVar4[1]));
          puVar5 = puVar4;
        }
      }
    }
  }
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf48 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005e9f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5e9f90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (((byte)this[0x2b] & 8) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_FWD);
    in_EAX = 0;
    if (uVar1 != 0) {
      return *((byte *)GEN_TOP((uVar1 + 100))) & 1;
    }
  }
  return in_EAX & 0xffffff00;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf56 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005e9fb0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5e9fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  uint uVar1;
  
  *((byte *)GEN_TOP(((int)param_1 + 0x2b))) =
       *((byte *)GEN_TOP(((int)param_1 + 0x2b))) ^ (param_2 * '\b' ^ *((byte *)GEN_TOP(((int)param_1 + 0x2b)))) & 8;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x5c))))(param_1 GEN_EDX_FWD);
  if (uVar1 != 0) {
    *((byte *)GEN_TOP((uVar1 + 100))) = param_2 != '\0' | *((byte *)GEN_TOP((uVar1 + 100))) & 0xfe;
  }
  return uVar1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf66 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005e9ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5e9ff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x120, 0);
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  int * piVar7;
  float * pfVar8;
  undefined4 * puVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  (*(uint *)(gen_frame + 0x10c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x110);
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_FWD)));
  if ((piVar7 == ((int *)GEN_TOP(0x0))) || (*((char *)GEN_TOP(((int)piVar7 + 0x65))) != '\x03')) {
    pfVar8 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xfc))))(this GEN_EDX_ARG)));
    fVar6 = (float10)0;
    ((float *)(gen_frame + 0x40))[0] = pfVar8[8];
    ((float *)(gen_frame + 0x40))[1] = 0.0;
    ((float *)(gen_frame + 0x40))[2] = 0.0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(float *)(gen_frame + 0x54)) = pfVar8[9];
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    (*(undefined4 *)(gen_frame + 0x64)) = 0;
    (*(float *)(gen_frame + 0x70)) = (float)fVar6;
    (*(float *)(gen_frame + 0x74)) = (float)fVar6;
    (*(float *)(gen_frame + 0x78)) = (float)fVar6;
    (*(float *)(gen_frame + 0x68)) = pfVar8[10];
    F_004efe70(((float *)(gen_frame + 0x40)) GEN_EDX_ARG,(uint)(pfVar8 + 4));
    (*(float *)(gen_frame + 0x70)) = (float)((float10)*pfVar8 + (float10)(*(float *)(gen_frame + 0x70)));
    fVar11 = pfVar8[1];
    (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1090708);
    (*(float *)(gen_frame + 0x74)) = (float)((float10)fVar11 + (float10)(*(float *)(gen_frame + 0x74)));
    (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1090708);
    (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1090708);
    (*(float *)(gen_frame + 0x78)) = (float)((float10)pfVar8[2] + (float10)(*(float *)(gen_frame + 0x78)));
    pfVar8 = ((float *)GEN_TOP(F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),((float *)(gen_frame + 0x40)))));
    fVar11 = pfVar8[1];
    fVar12 = pfVar8[2];
    (*(float *)(gen_frame + 0x10)) = *pfVar8;
    (*(float *)(gen_frame + 0x80)) = *pfVar8;
    (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x14)) = fVar11;
    (*(float *)(gen_frame + 0x18)) = fVar12;
    (*(float *)(gen_frame + 0x84)) = fVar11;
    (*(float *)(gen_frame + 0x88)) = fVar12;
    (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1090708);
    (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1090708);
    pfVar8 = ((float *)GEN_TOP(F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),((float *)(gen_frame + 0x40)))));
    fVar11 = pfVar8[1];
    fVar12 = pfVar8[2];
    ((float *)(gen_frame + 0x90))[0] = *pfVar8;
    ((float *)(gen_frame + 0x90))[1] = fVar11;
    ((float *)(gen_frame + 0x90))[2] = fVar12;
    (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1090708);
    (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1090708);
    puVar9 = ((undefined4 *)GEN_TOP(F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),((float *)(gen_frame + 0x40)))));
    uVar1 = puVar9[1];
    uVar2 = puVar9[2];
    ((float *)(gen_frame + 0x90))[4] = gen_bits2f(*puVar9);
    (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
    ((float *)(gen_frame + 0x90))[5] = gen_bits2f(uVar1);
    (*(undefined4 *)(gen_frame + 0xa8)) = uVar2;
    (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1090708);
    puVar9 = ((undefined4 *)GEN_TOP(F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),((float *)(gen_frame + 0x40)))));
    uVar1 = puVar9[1];
    uVar2 = puVar9[2];
    (*(undefined4 *)(gen_frame + 0xb0)) = *puVar9;
    (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1090708);
    (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0xb4)) = uVar1;
    (*(undefined4 *)(gen_frame + 0xb8)) = uVar2;
    (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1087f04);
    puVar9 = ((undefined4 *)GEN_TOP(F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),((float *)(gen_frame + 0x40)))));
    (*(undefined4 *)(gen_frame + 0xc0)) = *puVar9;
    (*(undefined4 *)(gen_frame + 0xc4)) = puVar9[1];
    (*(undefined4 *)(gen_frame + 0xc8)) = puVar9[2];
    (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1090708);
    (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1087f04);
    puVar9 = ((undefined4 *)GEN_TOP(F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),((float *)(gen_frame + 0x40)))));
    uVar1 = puVar9[1];
    uVar2 = puVar9[2];
    (*(undefined4 *)(gen_frame + 0xd0)) = *puVar9;
    (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0xd4)) = uVar1;
    (*(undefined4 *)(gen_frame + 0xd8)) = uVar2;
    (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1087f04);
    puVar9 = ((undefined4 *)GEN_TOP(F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),((float *)(gen_frame + 0x40)))));
    (*(undefined4 *)(gen_frame + 0xe0)) = *puVar9;
    (*(undefined4 *)(gen_frame + 0xe4)) = puVar9[1];
    (*(undefined4 *)(gen_frame + 0xe8)) = puVar9[2];
    (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1087f04);
    puVar9 = ((undefined4 *)GEN_TOP(F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),((float *)(gen_frame + 0x40)))));
    fVar13 = (*(float *)(gen_frame + 0x18));
    fVar12 = (*(float *)(gen_frame + 0x14));
    fVar11 = (*(float *)(gen_frame + 0x10));
    (*(undefined4 *)(gen_frame + 0xf0)) = *puVar9;
    (*(undefined4 *)(gen_frame + 0xf4)) = puVar9[1];
    (*(undefined4 *)(gen_frame + 0xf8)) = puVar9[2];
    (*(float *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x10));
    (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x14));
    (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0x18));
    pfVar8 = ((float *)(gen_frame + 0x90)) + 2;
    iVar10 = 7;
    fVar14 = fVar13;
    fVar15 = fVar12;
    fVar16 = fVar11;
    do {
      fVar3 = pfVar8[-2];
      (*(float *)(gen_frame + 0x28)) = fVar3;
      if ((float10)fVar3 < (float10)(*(float *)(gen_frame + 0x10))) {
        (*(float *)(gen_frame + 0x10)) = fVar3;
        fVar11 = fVar3;
      }
      fVar4 = pfVar8[-1];
      (*(float *)(gen_frame + 0x2c)) = fVar4;
      if ((float10)fVar4 < (float10)(*(float *)(gen_frame + 0x14))) {
        (*(float *)(gen_frame + 0x14)) = fVar4;
        fVar12 = fVar4;
      }
      fVar5 = *pfVar8;
      (*(float *)(gen_frame + 0x2c)) = fVar5;
      if ((float10)fVar5 < (float10)(*(float *)(gen_frame + 0x18))) {
        (*(float *)(gen_frame + 0x18)) = fVar5;
        fVar13 = fVar5;
      }
      if ((float10)(*(float *)(gen_frame + 0x30)) < (float10)fVar3) {
        (*(float *)(gen_frame + 0x30)) = fVar3;
        fVar16 = fVar3;
      }
      if ((float10)(*(float *)(gen_frame + 0x34)) < (float10)fVar4) {
        (*(float *)(gen_frame + 0x34)) = fVar4;
        fVar15 = fVar4;
      }
      if ((float10)(*(float *)(gen_frame + 0x38)) < (float10)fVar5) {
        (*(float *)(gen_frame + 0x38)) = fVar5;
        fVar14 = fVar5;
      }
      pfVar8 = pfVar8 + 4;
      iVar10 = iVar10 - 1;
    } while (iVar10 != 0);
    *param_1 = fVar11;
    param_1[1] = fVar12;
    param_1[2] = fVar13;
    param_1[4] = fVar16;
    param_1[5] = fVar15;
    param_1[6] = fVar14;
  }
  else {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x30))))(piVar7 GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf67 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005ea570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5ea570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL(0x70, 0);
  float10 fVar1;
  int * piVar2;
  float * pfVar3;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_FWD)));
  if ((piVar2 == ((int *)GEN_TOP(0x0))) || (*((char *)GEN_TOP(((int)piVar2 + 0x65))) != '\x03')) {
    pfVar3 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xfc))))(this GEN_EDX_ARG)));
    fVar1 = (float10)0;
    ((float *)(gen_frame + 0x10))[0] = pfVar3[8];
    ((float *)(gen_frame + 0x10))[1] = 0.0;
    ((float *)(gen_frame + 0x10))[2] = 0.0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(float *)(gen_frame + 0x24)) = pfVar3[9];
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(float *)(gen_frame + 0x40)) = (float)fVar1;
    (*(float *)(gen_frame + 0x44)) = (float)fVar1;
    (*(float *)(gen_frame + 0x48)) = (float)fVar1;
    (*(float *)(gen_frame + 0x38)) = pfVar3[10];
    F_004efe70(((float *)(gen_frame + 0x10)) GEN_EDX_ARG,(uint)(pfVar3 + 4));
    (*(float *)(gen_frame + 0x40)) = (float)((float10)(*(float *)(gen_frame + 0x40)) + (float10)*pfVar3);
    (*(float *)(gen_frame + 0x44)) = (float)((float10)pfVar3[1] + (float10)(*(float *)(gen_frame + 0x44)));
    (*(float *)(gen_frame + 0x48)) = (float)((float10)pfVar3[2] + (float10)(*(float *)(gen_frame + 0x48)));
    pfVar3 = ((float *)GEN_TOP(F_005fe770(((float *)(gen_frame + 0x10)) GEN_EDX_ARG,(uint)((undefined1 *)(gen_frame + 0x0)))));
    *((float *)GEN_TOP((param_1 + 0x40))) = (float)((float10)*pfVar3 * (float10)REFG(float, 0x1302c60));
    *((float *)GEN_TOP((param_1 + 0x44))) = (float)((float10)pfVar3[1] * (float10)REFG(float, 0x1302c64));
    *((float *)GEN_TOP((param_1 + 0x48))) = (float)((float10)pfVar3[2] * (float10)REFG(float, 0x1302c68));
    F_005fe2e0(param_1,(uint)((float *)(gen_frame + 0x10)));
    F_005fe2e0(param_1 + 0x10,(uint)&(*(undefined4 *)(gen_frame + 0x20)));
    F_005fe2e0(param_1 + 0x20,(uint)&(*(undefined4 *)(gen_frame + 0x30)));
    *((float *)GEN_TOP((param_1 + 0x30))) = (*(float *)(gen_frame + 0x40));
    *((float *)GEN_TOP((param_1 + 0x34))) = (*(float *)(gen_frame + 0x44));
    *((float *)GEN_TOP((param_1 + 0x38))) = (*(float *)(gen_frame + 0x48));
  }
  else {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x34))))(piVar2 GEN_EDX_ARG,param_1);
  }
  return param_1;
}

/* ref: FUN_005ea6d0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_005ea6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5ea6d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x110, 0, 4);
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  char * pcVar7;
  uint uVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c));
  *(undefined4 *)this = 1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_1[2];
  uVar1 = param_1[0xf];
  uVar2 = param_1[0x10];
  uVar3 = param_1[0x11];
  uVar4 = param_1[0xd];
  uVar5 = param_1[0xe];
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = param_1[0xc];
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = uVar5;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = uVar3;
  F_00a1e7d0((int)this + 0x20,param_1 + 3);
  F_005da4e0(this GEN_EDX_ARG,((char *)(gen_frame + 0x8)),0x100);
  pcVar7 = ((char *)(gen_frame + 0x8));
  do {
    cVar6 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar6 != '\0');
  F_0040b1a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar7 - (int)(((char *)(gen_frame + 0x8)) + 1));
  uVar8 = F_00408810(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_004087f0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar8;
  return (uint)this;
}

/* ref: FUN_005ea7c0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_005ea7c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4), GEN_P(undefined4 * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0x5ea7c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;)
  GEN_FRAME_DECL_GS(0x110, 0, 4);
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2;
  *(undefined4 *)this = 1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = *param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_4[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_4[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = param_4[4];
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = param_4[5];
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = param_4[6];
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = param_4[7];
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = param_4[8];
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = param_4[9];
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = param_4[10];
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = *param_5;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = param_5[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = param_5[2];
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = param_5[4];
  *((undefined4 *)GEN_TOP(((int)this + 100))) = param_5[5];
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = param_5[6];
  F_005da4e0(this GEN_EDX_FWD,((char *)(gen_frame + 0x8)),0x100);
  pcVar2 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  F_0040b1a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar2 - (int)(((char *)(gen_frame + 0x8)) + 1));
  uVar3 = F_00408810(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_004087f0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar3;
  return (uint)this;
}

/* ref: FUN_005ea8d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005ea8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ea8d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  char cVar3;
  int * piVar4;
  int iVar5;
  bool bVar6;
  int * piVar7;
  undefined4 * puVar8;
  int * piVar9;
  
  piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
  piVar9 = ((int *)GEN_TOP(*piVar4));
  bVar6 = true;
  if (piVar9 != piVar4) {
    do {
      iVar5 = *((int *)GEN_TOP(piVar9[4]));
      piVar1 = ((int *)GEN_TOP((iVar5 + 0x88)));
      iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
      if (iVar2 == 2) {
        puVar8 = ((undefined4 *)GEN_TOP((iVar5 + 0x8c)));
        LOCK();
        *puVar8 = *puVar8;
        UNLOCK();
      }
      else {
        bVar6 = false;
      }
      if (*((char *)GEN_TOP(((int)piVar9 + 0x15))) == '\0') {
        piVar1 = ((int *)GEN_TOP(piVar9[2]));
        if (*((char *)GEN_TOP(((int)piVar1 + 0x15))) == '\0') {
          cVar3 = *((char *)GEN_TOP((*piVar1 + 0x15)));
          piVar9 = piVar1;
          piVar1 = ((int *)GEN_TOP(*piVar1));
          while (cVar3 == '\0') {
            cVar3 = *((char *)GEN_TOP((*piVar1 + 0x15)));
            piVar9 = piVar1;
            piVar1 = ((int *)GEN_TOP(*piVar1));
          }
        }
        else {
          cVar3 = *((char *)GEN_TOP((piVar9[1] + 0x15)));
          piVar7 = ((int *)GEN_TOP(piVar9[1]));
          piVar1 = piVar9;
          while ((piVar9 = piVar7, cVar3 == '\0' && (piVar1 == ((int *)GEN_TOP(piVar9[2]))))) {
            cVar3 = *((char *)GEN_TOP((piVar9[1] + 0x15)));
            piVar7 = ((int *)GEN_TOP(piVar9[1]));
            piVar1 = piVar9;
          }
        }
      }
    } while (piVar9 != piVar4);
    if (!bVar6) {
      return;
    }
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x18))) = 0;
  return;
}

/* ref: FUN_005ea960 */
GEN_OWN GEN_NOFRAME uint F_005ea960(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x5ea960u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x6c, 4);
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined * this;
  float * pfVar5;
  uint uVar6;
  float10 fVar7;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 0xac))))(param_3 GEN_EDX_ARG,param_1);
  cVar1 = *((char *)GEN_TOP(((int)param_3 + 0x11)));
  if (cVar1 == '\x01') {
    pfVar5 = ((float *)GEN_TOP(F_00609e50(param_4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),&REFG(undefined4, 0x1375564))));
    *param_1 = *pfVar5;
    param_1[1] = pfVar5[1];
    param_1[2] = pfVar5[2];
    param_1[3] = pfVar5[3];
    F_005e4550(param_3 GEN_EDX_ARG,param_1,param_2);
    F_0060a0b0(param_4 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x30)),REFG(float, 0x1375570),REFG(float, 0x1375574),REFG(float, 0x1375578));
    fVar7 = (float10)param_2;
    this = ((undefined *)GEN_TOP(param_3[0xc]));
    (*(undefined4 *)(gen_frame + 0x2c)) = (*(undefined4 *)(gen_frame + 0x3c));
    (*(float *)(gen_frame + 0x4c)) = (float)(fVar7 * (float10)(*(float *)(gen_frame + 0x30)));
    (*(float *)(gen_frame + 0x50)) = (float)((float10)(*(float *)(gen_frame + 0x34)) * fVar7);
    (*(float *)(gen_frame + 0x54)) = (float)(fVar7 * (float10)(*(float *)(gen_frame + 0x38)));
    (*(float *)(gen_frame + 0x20)) = (float)(fVar7 * (float10)(*(float *)(gen_frame + 0x30)));
    (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x34)) * fVar7);
    (*(float *)(gen_frame + 0x28)) = (float)(fVar7 * (float10)(*(float *)(gen_frame + 0x38)));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      uVar6 = F_006026a0(this GEN_EDX_ARG,3);
      if (uVar6 != 0) {
        F_00637ca0(uVar6 GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x20)));
      }
    }
  }
  else {
    if (cVar1 == '\x03') {
      (*(float *)(gen_frame + 0x50)) = *param_1;
      (*(float *)(gen_frame + 0x54)) = param_1[1];
      (*(float *)(gen_frame + 0x58)) = param_1[2];
      pfVar5 = ((float *)GEN_TOP(F_00609b40(param_4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0x50)))));
      fVar2 = *pfVar5;
      fVar3 = pfVar5[1];
      (*(float *)(gen_frame + 0x50)) = fVar2;
      fVar4 = pfVar5[2];
      *param_1 = fVar2;
      (*(float *)(gen_frame + 0x54)) = fVar3;
      param_1[1] = fVar3;
      (*(float *)(gen_frame + 0x58)) = fVar4;
      param_1[2] = fVar4;
      param_1[3] = param_2;
      return (uint)param_1;
    }
    if (cVar1 == '\x04') {
      pfVar5 = ((float *)GEN_TOP(F_0060a2d0(param_4 GEN_EDX_ARG,(uint)((undefined1 *)(gen_frame + 0x10)),&REFG(undefined4, 0x13016f8))));
      *param_1 = *pfVar5;
      param_1[1] = pfVar5[1];
      param_1[2] = pfVar5[2];
      param_1[3] = pfVar5[3];
      param_1[3] = (float)((float10)param_2 * (float10)param_1[3]);
      return (uint)param_1;
    }
  }
  return (uint)param_1;
}

/* ref: FUN_005eab20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005eab20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5eab20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  if (uVar1 != 0) {
    *((byte *)GEN_TOP((uVar1 + 100))) = (char)param_1 != '\0' | *((byte *)GEN_TOP((uVar1 + 100))) & 0xfe;
  }
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    uVar1 = F_00c9f290(*((int *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,(char)param_1);
  }
  return uVar1;
}

/* ref: FUN_005eab60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005eab60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5eab60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1[1];
  uVar1 = F_005e2b50(this GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: FUN_005eab80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005eab80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5eab80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  int iVar1;
  float fVar2;
  char cVar3;
  ushort uVar4;
  int * piVar5;
  int iVar6;
  byte bVar7;
  int * piVar8;
  uint uVar9;
  undefined * this;
  uint * puVar10;
  undefined4 * puVar11;
  int * piVar12;
  
  uVar9 = (*(uint *)&gen_args[0]);
  piVar8 = ((int *)GEN_TOP(0x0));
  if (0 < *((char *)GEN_TOP((param_1 + 0xc0)))) {
    piVar5 = *((int * PTR32 *)GEN_TOP((param_1 + 0xa0)));
    piVar12 = piVar5;
    while ((*piVar12 != *((int *)GEN_TOP(((*(uint *)&gen_args[0]) + 0x18))) ||
           (cVar3 = (char)piVar12[1], *((char *)GEN_TOP(((*(uint *)&gen_args[0]) + 0x11))) != cVar3))) {
      piVar8 = ((int *)GEN_TOP(((int)piVar8 + 1)));
      piVar12 = piVar12 + 10;
      if ((int)*((char *)GEN_TOP((param_1 + 0xc0))) <= (int)piVar8) {
        return (uint)piVar8;
      }
    }
    if (cVar3 == '\x01') {
      uVar9 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(uint *)&gen_args[0]))) + 0x5c))))((*(uint *)&gen_args[0]));
      if ((char)piVar5[(int)((int)(uintptr_t)piVar8) * 10 + 4] != '\x02') {
        *((byte *)GEN_TOP((uVar9 + 0x95))) =
             *((byte *)GEN_TOP((uVar9 + 0x95))) ^
             ((char)piVar5[(int)((int)(uintptr_t)piVar8) * 10 + 4] == '\x01' ^ *((byte *)GEN_TOP((uVar9 + 0x95)))) & 1;
      }
      cVar3 = *((char *)GEN_TOP(((int)piVar5 + (int)((int)(uintptr_t)piVar8) * 0x28 + 0x11)));
      if (cVar3 != '\x02') {
        *((byte *)GEN_TOP((uVar9 + 0x95))) =
             *((byte *)GEN_TOP((uVar9 + 0x95))) ^ ((cVar3 == '\x01') * '\x02' ^ *((byte *)GEN_TOP((uVar9 + 0x95)))) & 2;
      }
      piVar8 = ((int *)GEN_TOP(F_006a3820(uVar9 GEN_EDX_ARG,(int)gen_bits2f(piVar5[(int)((int)(uintptr_t)piVar8) * 10 + 5]) & 0xffff)));
    }
    else {
      if (cVar3 == '\x03') {
        iVar1 = (int)((int)(uintptr_t)piVar8) * 0x28;
        this = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(uint *)&gen_args[0]))) + 0x5c))))((*(uint *)&gen_args[0]))));
        if ((char)piVar5[(int)((int)(uintptr_t)piVar8) * 10 + 9] != '\0') {
          (*(uint *)&gen_args[0]) = *((int *)GEN_TOP(((int)this + 0x70))) + 8;
          *((ushort *)GEN_TOP((*(uint *)&gen_args[0]))) =
               (ushort)((char)piVar5[(int)((int)(uintptr_t)piVar8) * 10 + 7] != '\0') |
               *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x70))) + 8))) & 0xfffe;
        }
        if (*((char *)GEN_TOP(((int)piVar5 + iVar1 + 0x23))) != '\0') {
          fVar2 = gen_bits2f(piVar5[(int)((int)(uintptr_t)piVar8) * 10 + 6]);
          iVar6 = *((int *)GEN_TOP(((int)this + 0x70)));
          (*(uint *)&gen_args[0]) = (uint)gen_fl2bits(fVar2);
          (*(uint *)(gen_frame + 0x10)) = (uint)gen_fl2bits((float)(REFG(float, 0x1094884)));
          puVar10 = &(*(uint *)&gen_args[0]);
          if (!(REFG(double, 0x1094800) < (double)fVar2)) {
            puVar10 = &(*(uint *)(gen_frame + 0x10));
          }
          *((uint *)GEN_TOP((iVar6 + 0x50))) = *puVar10;
        }
        if (*((char *)GEN_TOP(((int)piVar5 + iVar1 + 0x22))) != '\0') {
          F_00a1e5f0(this,piVar5 + (int)((int)(uintptr_t)piVar8) * 10 + 4);
          puVar11 = ((undefined4 *)GEN_TOP(F_00607800(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x70))) + 0x14))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))))
          ;
          *((undefined4 *)GEN_TOP((uVar9 + 0x38))) = *puVar11;
          *((undefined4 *)GEN_TOP((uVar9 + 0x3c))) = puVar11[1];
          *((undefined4 *)GEN_TOP((uVar9 + 0x40))) = puVar11[2];
          *((undefined4 *)GEN_TOP((uVar9 + 0x44))) = puVar11[3];
        }
        if (*((char *)GEN_TOP(((int)piVar5 + iVar1 + 0x25))) != '\0') {
          *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x70))) + 8))) =
               (ushort)(*((char *)GEN_TOP(((int)piVar5 + iVar1 + 0x1d))) != '\0') << 3 |
               *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x70))) + 8))) & 0xfff7;
        }
        if (*((char *)GEN_TOP(((int)piVar5 + iVar1 + 0x26))) != '\0') {
          *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x70))) + 8))) =
               (ushort)(*((char *)GEN_TOP(((int)piVar5 + iVar1 + 0x1e))) != '\0') * 4 |
               *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x70))) + 8))) & 0xfffb;
        }
        if (*((char *)GEN_TOP(((int)piVar5 + iVar1 + 0x27))) != '\0') {
          *((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x70))) + 10))) = (short)piVar5[(int)((int)(uintptr_t)piVar8) * 10 + 8];
        }
        uVar4 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x70))) + 8)));
        bVar7 = (byte)uVar4;
        if (((bVar7 >> 3 & 1) == 0) && ((bVar7 >> 2 & 1) == 0)) {
          uVar9 = F_0068b3c0(this GEN_EDX_ARG,(uint)(uVar4 & 0xff00));
          return uVar9;
        }
        uVar9 = F_0068b3c0(this GEN_EDX_ARG,1);
        return uVar9;
      }
      if ((cVar3 == '\x04') &&
         (iVar1 = (int)((int)(uintptr_t)piVar8) * 10, piVar8 = piVar5 + (int)((int)(uintptr_t)piVar8) * 10 + 2,
         (char)piVar5[iVar1 + 4] != '\0')) {
        uVar9 = F_005d77c0((*(uint *)&gen_args[0]) GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)piVar8 + 9))),
                             *((undefined1 *)GEN_TOP(((int)piVar8 + 10))),(uint)*((byte *)GEN_TOP(((int)piVar8 + 0xb))),
                             (char)piVar8[3]);
        return uVar9;
      }
    }
  }
  return (uint)piVar8;
}

/* ref: FUN_005eadd0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005eadd0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5eadd0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = *((int *)GEN_TOP((param_1 + 0x7c))) - *((int *)GEN_TOP((param_1 + 0x78))) >> 2;
  (*(int *)(gen_frame + 0x10)) = param_1;
  if (uVar4 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x10)) + 0x78))) + uVar3 * 4))) + 0x10)));
      if (*((char *)GEN_TOP(((int)piVar1 + 0x11))) == '\x06') {
        F_005eadd0((int)piVar1 GEN_EDX_FWD,param_2,param_3);
      }
      else {
        F_005ea960(((undefined1 *)(gen_frame + 0x0)),param_2,piVar1,param_3);
        if (*((char *)GEN_TOP(((int)piVar1 + 0x11))) == '\x01') {
          if ((*((byte *)GEN_TOP(((int)piVar1 + 0x2b))) & 6) != 0) {
            pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0xb0)));
LAB_005eae57: ;
            (*pcVar2)(piVar1,((undefined1 *)(gen_frame + 0x0)));
          }
        }
        else if ((*((byte *)GEN_TOP(((int)piVar1 + 0x2b))) & 2) != 0) {
          pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0xb0)));
          goto LAB_005eae57;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  return;
}

/* ref: FUN_005eae70 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005eae70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5eae70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  byte local_5;
  
  local_5 = 0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
    local_5 = 4;
    break;
  case 0x1e: ;
    local_5 = 8;
    break;
  case 0x2d: ;
    local_5 = 2;
    break;
  case 0x2e: ;
    local_5 = 1;
    break;
  case 0x47: ;
    local_5 = 0x10;
  }
  bVar1 = *((byte *)GEN_TOP(((int)this + 0xc4)));
  if ((local_5 & bVar1) == 0) {
    uVar2 = F_005e3350(this GEN_EDX_FWD,param_1);
    if (uVar2 == 0) {
      return 0;
    }
    *((byte *)GEN_TOP(((int)this + 0xc4))) = bVar1 | local_5;
  }
  return 1;
}

/* ref: FUN_005eaf50 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005eaf50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5eaf50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x60, 0);
  float10 fVar1;
  uint uVar2;
  float * pfVar3;
  int iVar4;
  float * pfVar5;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  uVar2 = F_005e3350(this GEN_EDX_FWD,param_2);
  if (uVar2 == 0) {
    pfVar5 = (float *)&REFG(float, 0x1302d00);
  }
  else {
    pfVar3 = ((float *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar2 + 0x10))) + 0xfc))))(*((int * PTR32 *)GEN_TOP((uVar2 + 0x10))) GEN_EDX_ARG)));
    fVar1 = (float10)0;
    ((float *)(gen_frame + 0x0))[0] = pfVar3[8];
    ((float *)(gen_frame + 0x0))[1] = 0.0;
    ((float *)(gen_frame + 0x0))[2] = 0.0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(float *)(gen_frame + 0x14)) = pfVar3[9];
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(float *)(gen_frame + 0x30)) = (float)fVar1;
    (*(float *)(gen_frame + 0x34)) = (float)fVar1;
    (*(float *)(gen_frame + 0x38)) = (float)fVar1;
    (*(float *)(gen_frame + 0x28)) = pfVar3[10];
    F_004efe70(((float *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)(pfVar3 + 4));
    (*(float *)(gen_frame + 0x30)) = (float)((float10)*pfVar3 + (float10)(*(float *)(gen_frame + 0x30)));
    (*(float *)(gen_frame + 0x34)) = (float)((float10)pfVar3[1] + (float10)(*(float *)(gen_frame + 0x34)));
    pfVar5 = ((float *)(gen_frame + 0x0));
    (*(float *)(gen_frame + 0x38)) = (float)((float10)pfVar3[2] + (float10)(*(float *)(gen_frame + 0x38)));
  }
  pfVar3 = param_1;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 - 1) {
    *pfVar3 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar3 = pfVar3 + 1;
  }
  return uVar2 != 0;
}

/* ref: FUN_005eb040 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005eb040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5eb040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = F_005e3350(this GEN_EDX_FWD,param_2);
  if (uVar3 != 0) {
    uVar1 = *((undefined4 *)GEN_TOP((uVar3 + 0x24)));
    uVar2 = *((undefined4 *)GEN_TOP((uVar3 + 0x28)));
    *param_1 = *((undefined4 *)GEN_TOP((uVar3 + 0x20)));
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    return 1;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return 0;
}

/* ref: FUN_005eb0b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005eb0b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5eb0b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x78)));
  uVar4 = *((int *)GEN_TOP(((int)this + 0x7c))) - (int)((int)(uintptr_t)piVar2) >> 2;
  uVar1 = 0;
  if (uVar4 != 0) {
    do {
      if (*((char *)GEN_TOP(((int)*((undefined * PTR32 *)GEN_TOP((*piVar2 + 0x10))) + 0x11))) == 'F') {
        uVar1 = F_005e59a0(*((undefined * PTR32 *)GEN_TOP((*piVar2 + 0x10))) GEN_EDX_FWD,param_1);
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < uVar4);
  }
  uVar1 = CONCAT31((int3)(uVar1 >> 8),*((undefined1 *)GEN_TOP(((int)this + 0x28)))) & 0xffffff0f;
  if ((char)uVar1 == '\x04') {
    piVar2 = ((int *)GEN_TOP(F_005e3290(this GEN_EDX_ARG,0x2d)));
    uVar1 = 0;
    if ((piVar2 != ((int *)GEN_TOP(0x0))) &&
       (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x3c))))(piVar2 GEN_EDX_ARG,param_1), (char)uVar1 != '\0')) {
LAB_005eb10b: ;
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
  else {
    uVar3 = 0;
    if (uVar4 != 0) {
      do {
        piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x78))) + uVar3 * 4))) + 0x10)));
        uVar1 = 0;
        if (*((char *)GEN_TOP(((int)piVar2 + 0x11))) != 'F') {
          if (*((char *)GEN_TOP(((int)piVar2 + 0x11))) == '\x06') {
            uVar1 = F_005eb0b0(piVar2 GEN_EDX_ARG,param_1);
          }
          else {
            piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x60))))(piVar2 GEN_EDX_ARG)));
            uVar1 = 0;
            if (piVar2 == ((int *)GEN_TOP(0x0))) goto LAB_005eb15e;
            uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x3c))))(piVar2 GEN_EDX_ARG,param_1);
          }
          if ((char)uVar1 != '\0') goto LAB_005eb10b;
        }
LAB_005eb15e: ;
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
  }
  return uVar1 & 0xffffff00;
}

/* ref: FUN_005eb170 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005eb170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5eb170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_005e3350(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_005eb180 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005eb180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5eb180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_005e34a0(this GEN_EDX_FWD,param_1,param_2,0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::LayoutEngine::Group::SGDoorActionController::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005eb1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5eb1a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  F_005dc4f0(this GEN_EDX_FWD);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 3;
  *(undefined4 *)(this + 0x1c) = 3;
  *(undefined4 *)(this + 0x20) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  iVar1 = *((int *)GEN_TOP((param_1 + 0x18)));
  *(int *)(this + 0x24) = iVar1;
  *(undefined4 *)(this + 0x28) = *((undefined4 *)GEN_TOP((param_1 + 0x1c)));
  *(undefined4 *)(this + 0x30) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  *(undefined4 *)(this + 0x34) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  *(undefined4 *)(this + 0x38) = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  if (4 < iVar1) {
    *(undefined4 *)(this + 0x24) = 1;
  }
  uVar2 = *(uint *)(this + 4);
  uVar3 = 0;
  uVar4 = *((int *)GEN_TOP((uVar2 + 0x7c))) - *((int *)GEN_TOP((uVar2 + 0x78))) >> 2;
  if (uVar4 != 0) {
    do {
      uVar2 = F_005e39e0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 4) + 0x78))) + uVar3 * 4))) + 0x10))),
                           param_1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  return uVar2;
}

/* ref: FUN_005eb230 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005eb230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5eb230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *((undefined4 *)GEN_TOP(((int)this + 0x30)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0x2c))) = 0;
  uVar2 = F_005dc670(this GEN_EDX_FWD,0);
  piVar4 = ((int *)GEN_TOP(((int)this + 0x5c)));
  iVar3 = 4;
  do {
    if (*piVar4 != 0) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar4)) + 0x90))))(((int *)GEN_TOP(*piVar4)) GEN_EDX_ARG,0);
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x50)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    piVar4 = *((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x34)));
    *((byte *)GEN_TOP(((int)pvVar1 + 0x94))) = *((byte *)GEN_TOP(((int)pvVar1 + 0x94))) & 0xfb;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x78))))(piVar4 GEN_EDX_ARG,500);
      *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x34))) = 0;
      uVar2 = F_005e1000(pvVar1 GEN_EDX_ARG);
    }
  }
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x58)));
  if (pvVar1 != ((undefined *)GEN_TOP(0x0))) {
    piVar4 = *((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x34)));
    *((byte *)GEN_TOP(((int)pvVar1 + 0x94))) = *((byte *)GEN_TOP(((int)pvVar1 + 0x94))) & 0xfb;
    if (piVar4 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x78))))(piVar4 GEN_EDX_ARG,500);
      *((undefined4 *)GEN_TOP(((int)pvVar1 + 0x34))) = 0;
      uVar2 = F_005e1000(pvVar1 GEN_EDX_ARG);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: Client::LayoutEngine::Group::SGRotationActionController::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005eb2e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5eb2e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  F_005d6be0(this GEN_EDX_FWD);
  *(undefined4 *)(this + 0xc) = 5;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x1c) = 3;
  *(undefined4 *)(this + 0x20) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *(float *)(this + 0x24) = ((float)GEN_TOF(ABS((float10)*((float *)GEN_TOP((param_1 + 8))))));
  *(undefined4 *)(this + 0x28) = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  this[0x35] = (undefined1)(*((char *)GEN_TOP((param_1 + 0x11))) != '\0');
  this[0x36] = (undefined1)(*((char *)GEN_TOP((param_1 + 0x16))) != '\0');
  this[0x34] = (undefined1)(0.0 < *((float *)GEN_TOP((param_1 + 8))));
  uVar1 = *(uint *)(this + 4);
  uVar2 = 0;
  uVar3 = *((int *)GEN_TOP((uVar1 + 0x7c))) - *((int *)GEN_TOP((uVar1 + 0x78))) >> 2;
  if (uVar3 != 0) {
    do {
      uVar1 = F_005e3b70(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 4) + 0x78))) + uVar2 * 4))) + 0x10))),
                           param_1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return uVar1;
}

/* ref: FUN_005eb390 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005eb390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5eb390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  undefined * pvVar3;
  
  pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x44)));
  if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
    if ((*((int *)GEN_TOP(((int)this + 0x4c))) != 0) ||
       (pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x48))), pvVar3 == ((undefined *)GEN_TOP(0x0)))) goto LAB_005eb3ee;
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x34)));
    *((byte *)GEN_TOP(((int)pvVar3 + 0x94))) = *((byte *)GEN_TOP(((int)pvVar3 + 0x94))) & 0xfb;
    if (piVar1 == ((int *)GEN_TOP(0x0))) goto LAB_005eb41a;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x78))))(piVar1 GEN_EDX_FWD,0);
    *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x34))) = 0;
  }
  else {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x34)));
    *((byte *)GEN_TOP(((int)pvVar3 + 0x94))) = *((byte *)GEN_TOP(((int)pvVar3 + 0x94))) & 0xfb;
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x78))))(piVar1 GEN_EDX_ARG,0);
      *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x34))) = 0;
      F_005e1000(pvVar3 GEN_EDX_ARG);
    }
LAB_005eb3ee: ;
    pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x48)));
    if (pvVar3 == ((undefined *)GEN_TOP(0x0))) goto LAB_005eb41a;
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x34)));
    *((byte *)GEN_TOP(((int)pvVar3 + 0x94))) = *((byte *)GEN_TOP(((int)pvVar3 + 0x94))) & 0xfb;
    if (piVar1 == ((int *)GEN_TOP(0x0))) goto LAB_005eb41a;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x78))))(piVar1 GEN_EDX_ARG,0);
    *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x34))) = 0;
  }
  F_005e1000(pvVar3 GEN_EDX_ARG);
LAB_005eb41a: ;
  iVar2 = *((int *)GEN_TOP(((int)this + 0x3c)));
  if (iVar2 != 0) {
    if ((*((int *)GEN_TOP((iVar2 + 0x30))) != 0) && ((*((byte *)GEN_TOP((iVar2 + 0x8c))) & 1) != 0)) {
      F_0068b730(*((int *)GEN_TOP((iVar2 + 0x30))) GEN_EDX_ARG,(float)(float10)0);
    }
    *((byte *)GEN_TOP((iVar2 + 0x8c))) = *((byte *)GEN_TOP((iVar2 + 0x8c))) & 0xfe;
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0x40)));
  if (iVar2 != 0) {
    if ((*((int *)GEN_TOP((iVar2 + 0x30))) != 0) && ((*((byte *)GEN_TOP((iVar2 + 0x8c))) & 1) != 0)) {
      F_0068b730(*((int *)GEN_TOP((iVar2 + 0x30))) GEN_EDX_ARG,(float)(float10)0);
    }
    *((byte *)GEN_TOP((iVar2 + 0x8c))) = *((byte *)GEN_TOP((iVar2 + 0x8c))) & 0xfe;
  }
  return;
}

/* ref: Client::LayoutEngine::Group::SGRandomActionController::vf8 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005eb470(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5eb470u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x18))))(param_1 GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    if (param_1[9] != 0) {
      if (((undefined *)GEN_TOP(param_1[1])) != ((undefined *)GEN_TOP(0x0))) {
        F_005e3700(((undefined *)GEN_TOP(param_1[1])) GEN_EDX_ARG,param_1[9]);
      }
      param_1[9] = 0;
      param_1[7] = 1;
    }
    param_1[3] = param_2;
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 8) = param_3;
    param_1[7] = (uint)(param_2 != 6);
    return 1;
  }
  return 0;
}

/* ref: Client::LayoutEngine::Group::SGRandomActionController::vf9 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005eb4d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5eb4d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  if (*(int *)(this + 0xc) == 6) {
    uVar2 = F_005e3d80(this GEN_EDX_FWD);
  }
  else {
    uVar2 = *(int *)(this + 0xc) - 7;
    if ((uVar2 == 0) && (uVar3 = *(uint *)(this + 0x24), uVar2 = 0, uVar3 != 0)) {
      if (*(undefined * PTR32 *)(this + 4) != ((undefined *)GEN_TOP(0x0))) {
        bVar1 = F_005e3700(*(undefined * PTR32 *)(this + 4) GEN_EDX_ARG,uVar3);
        uVar3 = CONCAT31(extraout_var,bVar1);
      }
      *(undefined4 *)(this + 0x24) = 0;
      *(undefined4 *)(this + 0x1c) = 1;
      return uVar3;
    }
  }
  return uVar2;
}

/* ref: FUN_005eb510 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005eb510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5eb510u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  float * pfVar7;
  undefined4 * puVar8;
  int iVar9;
  undefined4 * puVar10;
  bool bVar11;
  float10 fVar12;
  int local_c;
  ushort uStack_8;
  
  *((bool *)GEN_TOP((param_1 + 0x1c))) = *((char *)GEN_TOP(((*(uint *)&gen_args[0]) + 8))) != '\0';
  *((bool *)GEN_TOP((param_1 + 0x1d))) = *((char *)GEN_TOP(((*(uint *)&gen_args[0]) + 9))) != '\0';
  *((undefined4 *)GEN_TOP((param_1 + 0x20))) = *((undefined4 *)GEN_TOP(((*(uint *)&gen_args[0]) + 0xc)));
  fVar12 = (float10)*(double *)&REFG(undefined, 0x10912a8);
  *((float *)GEN_TOP((param_1 + 0x28))) =
       ((float)GEN_TOF((((float10)GEN_TOD((((uint)*((ushort *)GEN_TOP(((*(uint *)&gen_args[0]) + 6))) * 1000) / 0x1e))) / fVar12)));
  *((float *)GEN_TOP((param_1 + 0x2c))) =
       ((float)GEN_TOF((((float10)GEN_TOD((((uint)*((ushort *)GEN_TOP(((*(uint *)&gen_args[0]) + 0x10))) * 1000) / 0x1e))) / fVar12)));
  puVar8 = ((undefined4 *)GEN_TOP(((*(uint *)&gen_args[0]) + 0x1c)));
  iVar9 = 2;
  *((float *)GEN_TOP((param_1 + 0x30))) =
       ((float)GEN_TOF((((float10)GEN_TOD((((uint)*((ushort *)GEN_TOP(((*(uint *)&gen_args[0]) + 0x12))) * 1000) / 0x1e))) / fVar12)));
  puVar10 = ((undefined4 *)GEN_TOP((param_1 + 0x74)));
  do {
    puVar10[-1] = puVar8[-2];
    *puVar10 = *puVar8;
    uStack_8 = gen_x87_cw | 0xc00;
    puVar10[2] = puVar8[4];
    gen_set_x87_cw((unsigned short)uStack_8);
    local_c = (int)(longlong)TRUNC(((float10)GEN_TOD(gen_bits2f(puVar8[2]))));
    gen_set_x87_cw((unsigned short)gen_x87_cw);
    puVar10[1] = (undefined4)gen_fl2bits(((float)GEN_TOF((((float10)GEN_TOD(((uint)(local_c * 1000) / 0x1e))) / fVar12))))
    ;
    uStack_8 = gen_x87_cw | 0xc00;
    gen_set_x87_cw((unsigned short)uStack_8);
    local_c = (int)(longlong)TRUNC(((float10)GEN_TOD(gen_bits2f(puVar8[6]))));
    gen_set_x87_cw((unsigned short)gen_x87_cw);
    (*(uint *)&gen_args[0]) = (uint)(local_c * 1000) / 0x1e;
    puVar8 = puVar8 + 1;
    iVar9 = iVar9 - 1;
    puVar10[3] = (undefined4)gen_fl2bits((float)((float10)(*(uint *)&gen_args[0]) / fVar12));
    puVar10 = puVar10 + 5;
  } while (iVar9 != 0);
  fVar1 = *((float *)GEN_TOP((param_1 + 0x8c)));
  fVar2 = *((float *)GEN_TOP((param_1 + 0x78)));
  fVar3 = *((float *)GEN_TOP((param_1 + 0x84)));
  fVar4 = *((float *)GEN_TOP((param_1 + 0x70)));
  F_005dd120(param_1 + 0x98,fVar4,fVar3,fVar2,fVar1);
  F_005dd120(param_1 + 0xa8,GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x74)))),GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x88)))),GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x78)))),GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x8c)))));
  uVar6 = F_005dd120(param_1 + 0xb8,GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x7c)))),GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x90)))),GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x80)))),GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x94)))));
  fVar1 = *((float *)GEN_TOP((param_1 + 0x2c)));
  *((undefined4 *)GEN_TOP((param_1 + 0x38))) = 0;
  if (GEN_ISNAN(fVar1) != (GEN_ISNAN(fVar1) || fVar1 == 0.0)) {
    fVar2 = *((float *)GEN_TOP((param_1 + 0x30)));
    bVar5 = GEN_ISNAN(fVar2);
    bVar11 = bVar5 || fVar2 == 0.0;
    if (bVar5 != bVar11) {
      return CONCAT22((short)(uVar6 >> 0x10),
                      CONCAT11(bVar11 << 6 | bVar5 << 2 | 2U | !(0.0 <= fVar2),(char)uVar6));
    }
  }
  pfVar7 = (float *)&(*(uint *)&gen_args[0]);
  fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x30))) + (float10)fVar1)));
  (*(uint *)&gen_args[0]) = (uint)gen_fl2bits(fVar1);
  if (!((float10)fVar1 < (float10)*((float *)GEN_TOP((param_1 + 0x28))))) {
    pfVar7 = ((float *)GEN_TOP((param_1 + 0x28)));
  }
  *((float *)GEN_TOP((param_1 + 0x38))) =
       ((float)GEN_TOF((((float10)*pfVar7 / (float10)*((float *)GEN_TOP((param_1 + 0x28)))) * (float10)REFG(double, 0x1088108))));
  return (uint)pfVar7;
}

/* ref: FUN_005eb760 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005eb760(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x5eb760u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  byte bVar1;
  
  if (*((int *)GEN_TOP((param_1 + 0xc))) == 8) {
    bVar1 = F_005d6e10(param_1 + 0x98U,param_2,0);
    if (bVar1 != 0) {
      F_005dd120(param_1 + 0x98U,GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x70)))),GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x84)))),GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x78)))),GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x8c)))));
    }
    bVar1 = F_005d6e10(param_1 + 0xa8U,param_2,0);
    if (bVar1 != 0) {
      F_005dd120(param_1 + 0xa8U,GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x74)))),GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x88)))),GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x78)))),GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x8c)))));
    }
    bVar1 = F_005d6e10(param_1 + 0xb8U,param_2,1);
    if (bVar1 != 0) {
      F_005dd120(param_1 + 0xb8U,GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x7c)))),GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x90)))),GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x80)))),GEN_ARGF(*((float *)GEN_TOP((param_1 + 0x94)))));
    }
  }
  return;
}

/* ref: FUN_005eb850 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005eb850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5eb850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint uVar7;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20)));
  puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
  while( true ) {
    if (puVar3 == puVar2) {
      return 1;
    }
    piVar4 = ((int *)GEN_TOP(puVar3[4]));
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x54))))(piVar4 GEN_EDX_FWD);
    if (((char)uVar7 != '\0') &&
       (uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x58))))(piVar4 GEN_EDX_ARG), (char)uVar7 == '\0')) break;
    if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
      puVar5 = ((undefined4 *)GEN_TOP(puVar3[2]));
      if (*((char *)GEN_TOP(((int)puVar5 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP(((int)*puVar5 + 0x15)));
        puVar3 = puVar5;
        puVar5 = ((undefined4 *)GEN_TOP(*puVar5));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar5 + 0x15)));
          puVar3 = puVar5;
          puVar5 = ((undefined4 *)GEN_TOP(*puVar5));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
        puVar6 = ((undefined4 *)GEN_TOP(puVar3[1]));
        puVar5 = puVar3;
        while ((puVar3 = puVar6, cVar1 == '\0' && (puVar5 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
          puVar6 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar5 = puVar3;
        }
      }
    }
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf47 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005eb8e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x5eb8e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_FWD);
  if (uVar2 != 0) {
    return *((byte *)GEN_TOP((uVar2 + 100))) & 1;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x11c))))(this GEN_EDX_ARG);
  if (uVar2 != 0xffffffff) {
    uVar2 = *(uint *)(this + 0x30);
    piVar1 = *((int * PTR32 *)GEN_TOP((uVar2 + 0xf0)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xbc))))
                        (piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar2;
    }
  }
  return uVar2 & 0xffffff00;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf67 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005eb930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5eb930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x11c))))(this GEN_EDX_FWD);
  if ((uVar2 != 0xffffffff) &&
     (piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x30) + 0xf0))), piVar1 != ((int *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10c))))(piVar1 GEN_EDX_ARG,param_1);
    return param_1;
  }
  F_005ea570((undefined *)this GEN_EDX_ARG,param_1);
  return param_1;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf47 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005eb980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5eb980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_FWD);
  if (uVar2 != 0) {
    return *((byte *)GEN_TOP((uVar2 + 100))) & 1;
  }
  uVar2 = *(uint *)(this + 0x38);
  if (uVar2 != 0xffffffff) {
    uVar2 = F_00a1b870(this[0x11],uVar2);
    if (((uVar2 != 0) && (*((int *)GEN_TOP((uVar2 + 0x7c))) == 0)) &&
       (piVar1 = *((int * PTR32 *)GEN_TOP((uVar2 + 0xf0))), uVar2 = 0, piVar1 != ((int *)GEN_TOP(0x0)))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xbc))))(piVar1 GEN_EDX_ARG);
      return uVar2;
    }
  }
  return uVar2 & 0xffffff00;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005eb9f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5eb9f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  uint * puVar2;
  
  if (*((int *)GEN_TOP((in_ecx + 0x30))) == 0) {
    puVar2 = (uint *)&REFG(undefined, 0x10a258a);
  }
  else {
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x30))) + 0x70)));
    puVar2 = ((uint *)GEN_TOP((iVar1 + 0x3c)));
    if (0xf < *((uint *)GEN_TOP((iVar1 + 0x50)))) {
      return *puVar2;
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_005eba10 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005eba10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5eba10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x90, 0);
  int * piVar1;
  byte bVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  bool bVar6;
  
  bVar6 = *((int *)GEN_TOP((param_1 + 0x38))) == 2;
  if (bVar6 == (*((int *)GEN_TOP(((int)this + 0x3c))) != 0)) {
    if (((bVar6) && (*((int *)GEN_TOP(((int)this + 0x3c))) != 0)) &&
       (F_005ea6d0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*((int *)GEN_TOP((param_1 + 0x44))) + param_1),
       *((int *)GEN_TOP(((int)this + 0x3c))) != (*(int *)(gen_frame + 0x4)))) {
      return 1;
    }
    bVar6 = *((int *)GEN_TOP((param_1 + 0x38))) == 1;
    piVar1 = ((int *)GEN_TOP(((int)this + 0x38)));
    (*(int * PTR32 *)(gen_frame + 0x7c)) = piVar1;
    if (bVar6 == (*piVar1 != 0)) {
      if ((bVar6) && (*piVar1 != 0)) {
        (*(byte * PTR32 *)(gen_frame + 0x78)) = ((byte *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x34))) + param_1)));
        if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4)));
        }
        pbVar3 = ((byte *)GEN_TOP(F_00507260(((undefined *)GEN_TOP((iVar4 + 0x14c))) GEN_EDX_ARG,piVar1)));
        pbVar5 = (*(byte * PTR32 *)(gen_frame + 0x78));
        do {
          bVar2 = *pbVar5;
          bVar6 = bVar2 < *pbVar3;
          if (bVar2 != *pbVar3) {
LAB_005ebae0: ;
            iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_005ebae5;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar5[1];
          bVar6 = bVar2 < pbVar3[1];
          if (bVar2 != pbVar3[1]) goto LAB_005ebae0;
          pbVar5 = pbVar5 + 2;
          pbVar3 = pbVar3 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_005ebae5: ;
        if (iVar4 != 0) {
          return 1;
        }
      }
      return 0;
    }
  }
  return 1;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf47 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005ebb00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ebb00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  float10 extraout_ST0;
  double dVar1;
  
  if (*(int *)(this + 0x30) != 0) {
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x30) + 0x6c))))(*(int * PTR32 *)(this + 0x30)); dVar1 = extraout_ST0;
    in_EAX = (uint)(ulonglong)gen_d2bits(dVar1);
    if ((!((float10)1 <= extraout_ST0)) &&
       ((in_EAX = *(uint *)(this + 0x30), (*((byte *)GEN_TOP((in_EAX + 0x74))) & 2) != 0 ||
        (*((char *)GEN_TOP((in_EAX + 0x94))) != -2)))) {
      return *((byte *)GEN_TOP((in_EAX + 100))) & 1;
    }
  }
  return in_EAX & 0xffffff00;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf48 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005ebb50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ebb50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  float10 extraout_ST0;
  double dVar1;
  
  if ((((byte)this[0x2b] & 8) != 0) && (*(int *)(this + 0x30) != 0)) {
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x30) + 0x6c))))(*(int * PTR32 *)(this + 0x30)); dVar1 = extraout_ST0;
    in_EAX = (uint)(ulonglong)gen_d2bits(dVar1);
    if (!((float10)1 <= extraout_ST0)) {
      return *((byte *)GEN_TOP((*(int *)(this + 0x30) + 100))) & 1;
    }
  }
  return in_EAX & 0xffffff00;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf56 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ebb90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5ebb90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 0x30);
  this[0x2b] = (undefined1)
               ((byte)this[0x2b] ^ ((char)param_1 << 3 ^ (byte)this[0x2b]) & 8);
  if (iVar1 != 0) {
    *((byte *)GEN_TOP((iVar1 + 100))) = (char)param_1 != '\0' | *((byte *)GEN_TOP((iVar1 + 100))) & 0xfe;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x90))))(this GEN_EDX_FWD,param_1);
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::EnvSpaceLayoutInstance::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005ebbe0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ebbe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar1 = *((int *)GEN_TOP((in_ecx + 0x30)));
  if (iVar1 != 0) {
    iVar2 = *((int *)GEN_TOP((iVar1 + 0x70)));
    if (iVar2 != 0) {
      if (*((uint *)GEN_TOP((iVar2 + 0x50))) < 0x10) {
        return (uint)((uint *)GEN_TOP((iVar2 + 0x3c)));
      }
      return *((uint *)GEN_TOP((iVar2 + 0x3c)));
    }
    iVar1 = *((int *)GEN_TOP((iVar1 + 0x74)));
    if (iVar1 != 0) {
      if (*((uint *)GEN_TOP((iVar1 + 0x50))) < 0x10) {
        return (uint)((uint *)GEN_TOP((iVar1 + 0x3c)));
      }
      return *((uint *)GEN_TOP((iVar1 + 0x3c)));
    }
  }
  return 0x10a267e;
}

/* ref: Client::LayoutEngine::Layer::EnvLocationLayoutInstance::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005ebc20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ebc20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  uint * puVar2;
  
  if ((*((int *)GEN_TOP((in_ecx + 0x30))) == 0) ||
     (iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x30))) + 0x70))), iVar1 == 0)) {
    puVar2 = (uint *)&REFG(undefined, 0x10a267f);
  }
  else {
    puVar2 = ((uint *)GEN_TOP((iVar1 + 0x3c)));
    if (0xf < *((uint *)GEN_TOP((iVar1 + 0x50)))) {
      return *puVar2;
    }
  }
  return (uint)puVar2;
}

/* ref: Client::LayoutEngine::Layer::LightLayoutInstance::vf47 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005ebc40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ebc40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint in_EAX = 0;
  
  if ((((*((byte *)GEN_TOP((in_ecx + 0x2b))) & 8) != 0) && (in_EAX = *((uint *)GEN_TOP((in_ecx + 0x30))), in_EAX != 0)) &&
     (!(*((float *)GEN_TOP((*((int *)GEN_TOP((in_EAX + 0x70))) + 0x20))) <= 0.0))) {
    return *((byte *)GEN_TOP((in_EAX + 100))) & 1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf47 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005ebc70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ebc70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint in_EAX = 0;
  
  if (((*((byte *)GEN_TOP((in_ecx + 0x2b))) & 8) != 0) && (in_EAX = 0, *((int *)GEN_TOP((in_ecx + 0x30))) != 0)) {
    return *((byte *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x30))) + 100))) & 1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf56 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005ebc90(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5ebc90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  byte bVar2;
  
  *((byte *)GEN_TOP((param_1 + 0x2b))) =
       *((byte *)GEN_TOP((param_1 + 0x2b))) ^ (param_2 * '\b' ^ *((byte *)GEN_TOP((param_1 + 0x2b)))) & 8;
  iVar1 = *((int *)GEN_TOP((param_1 + 0x30)));
  bVar2 = param_2;
  if (iVar1 != 0) {
    bVar2 = param_2 != 0 | *((byte *)GEN_TOP((iVar1 + 100))) & 0xfe;
    *((byte *)GEN_TOP((iVar1 + 100))) = bVar2;
  }
  return bVar2;
}

/* ref: Client::LayoutEngine::Layer::WeaponLayoutInstance::vf47 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005ebcd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ebcd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  float10 extraout_ST0;
  double dVar1;
  
  if ((((byte)this[0x2b] & 8) != 0) && (*(int *)(this + 0x30) != 0)) {
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x30) + 0x6c))))(*(int * PTR32 *)(this + 0x30)); dVar1 = extraout_ST0;
    in_EAX = (uint)(ulonglong)gen_d2bits(dVar1);
    if (!((float10)1 <= extraout_ST0)) {
      return *((byte *)GEN_TOP((*(int *)(this + 0x30) + 100))) & 1;
    }
  }
  return in_EAX & 0xffffff00;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf28 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005ebd10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ebd10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x34);
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    if (((byte)this[0x94] & 0x10) == 0) goto LAB_005ebd48;
    this[0x94] = (undefined1)((byte)this[0x94] & 0xef);
  }
  else {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x78))))(piVar1 GEN_EDX_FWD,500);
    *(undefined4 *)(this + 0x34) = 0;
  }
  F_005e1000(this GEN_EDX_ARG);
LAB_005ebd48: ;
  uVar2 = 0;
  if (*(int *)(this + 0x3c) != 0) {
    uVar2 = F_0050c620(*(int *)(this + 0x3c),0,0);
    *(undefined4 *)(this + 0x3c) = 0;
  }
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf4 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005ebd70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5ebd70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  undefined4 * puVar1;
  uint uVar2;
  undefined * this_00;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x100))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  if (uVar2 != 0) {
    F_00a1fa60(this + 0x10,uVar2,param_1);
  }
  puVar1 = *(undefined4 * PTR32 *)(this + 0x60);
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    *(undefined4 *)(this + 0x60) = 0;
  }
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0x18,0,0)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xfc))))(this GEN_EDX_ARG);
    uVar2 = F_00b7c8d0(this_00 GEN_EDX_ARG,uVar2,param_1);
  }
  *(uint *)(this + 0x60) = uVar2;
  if (this[100] != (undefined1)0x0) {
    *((ushort *)GEN_TOP((uVar2 + 0xe))) = *((ushort *)GEN_TOP((uVar2 + 0xe))) | 2;
    return uVar2;
  }
  *((ushort *)GEN_TOP((uVar2 + 0xe))) = *((ushort *)GEN_TOP((uVar2 + 0xe))) & 0xfffd;
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::ClientPathLayoutInstance::vf4 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ebe50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5ebe50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  this[100] = (undefined1)(*((char *)GEN_TOP((param_1 + 0x40))) != '\0');
  uVar1 = F_005ebd70((undefined *)this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::ServerPathLayoutInstance::vf4 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ebe70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5ebe70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_005ebd70((undefined *)this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_005ebe80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005ebe80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ebe80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * in_EAX = 0;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x34)));
  puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
  while (puVar3 != puVar2) {
    in_EAX = ((undefined4 *)GEN_TOP(puVar3[4]));
    *((undefined1 *)GEN_TOP(((int)in_EAX + 0x12))) = 1;
    if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
      puVar4 = ((undefined4 *)GEN_TOP(puVar3[2]));
      if (*((char *)GEN_TOP(((int)puVar4 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
        puVar3 = puVar4;
        in_EAX = ((undefined4 *)GEN_TOP(*puVar4));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*in_EAX + 0x15)));
          puVar3 = in_EAX;
          in_EAX = ((undefined4 *)GEN_TOP(*in_EAX));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
        puVar5 = ((undefined4 *)GEN_TOP(puVar3[1]));
        puVar4 = puVar3;
        while ((puVar3 = puVar5, in_EAX = puVar3, cVar1 == '\0' &&
               (puVar4 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
          puVar5 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar4 = puVar3;
        }
      }
    }
  }
  return (uint)in_EAX;
}

/* ref: FUN_005ebee0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005ebee0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x5ebee0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  char cVar1;
  int * piVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  bool bVar7;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((param_1 + 0x34)));
  piVar6 = ((int *)GEN_TOP(*piVar2));
  if (piVar6 != piVar2) {
    do {
      iVar3 = piVar6[4];
      bVar7 = GEN_ISNAN((float10)*((float *)GEN_TOP((iVar3 + 0x24)))) || GEN_ISNAN((float10)param_2);
      if (bVar7 == (bVar7 || (float10)*((float *)GEN_TOP((iVar3 + 0x24))) == (float10)param_2)) {
        *((float *)GEN_TOP((iVar3 + 0x24))) = param_2;
        *((undefined1 *)GEN_TOP((iVar3 + 0x12))) = 1;
      }
      if (*((char *)GEN_TOP(((int)piVar6 + 0x15))) == '\0') {
        piVar4 = ((int *)GEN_TOP(piVar6[2]));
        if (*((char *)GEN_TOP(((int)piVar4 + 0x15))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
          piVar6 = piVar4;
          piVar4 = ((int *)GEN_TOP(*piVar4));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
            piVar6 = piVar4;
            piVar4 = ((int *)GEN_TOP(*piVar4));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar6[1] + 0x15)));
          piVar5 = ((int *)GEN_TOP(piVar6[1]));
          piVar4 = piVar6;
          while ((piVar6 = piVar5, cVar1 == '\0' && (piVar4 == ((int *)GEN_TOP(piVar6[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar6[1] + 0x15)));
            piVar5 = ((int *)GEN_TOP(piVar6[1]));
            piVar4 = piVar6;
          }
        }
      }
    } while (piVar6 != piVar2);
  }
  return;
}

/* ref: FUN_005ebf60 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005ebf60(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5ebf60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  undefined4 uVar1;
  char cVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  uint uVar7;
  int iVar8;
  undefined4 * puVar9;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 0x34)));
  puVar4 = ((undefined4 *)GEN_TOP(*puVar3));
  do {
    if (puVar4 == puVar3) {
      return;
    }
    iVar5 = puVar4[4];
    iVar8 = 0;
    uVar7 = 0;
    do {
      if ((uint)*((byte *)GEN_TOP((iVar5 + 0x10))) == *((uint *)GEN_TOP(((int)&REFG(undefined4, 0x10a2810) + uVar7)))) {
        puVar9 = &REFG(undefined4, 0x10a2810) + iVar8 * 10;
        goto LAB_005ebfa8;
      }
      uVar7 = uVar7 + 0x28;
      iVar8 = iVar8 + 1;
    } while (uVar7 < 0x208);
    puVar9 = &REFG(undefined4, 0x10a2810);
LAB_005ebfa8: ;
    uVar7 = (uint)(param_2 == '\0');
    uVar1 = puVar9[uVar7 + 4];
    *((undefined4 *)GEN_TOP((iVar5 + 0x28))) = uVar1;
    *((undefined4 *)GEN_TOP((iVar5 + 0x24))) = uVar1;
    *((undefined4 *)GEN_TOP((iVar5 + 0x2c))) = puVar9[uVar7 + 6];
    *((undefined4 *)GEN_TOP((iVar5 + 0x30))) = puVar9[uVar7 + 8];
    *((undefined4 *)GEN_TOP((iVar5 + 0x20))) = puVar9[3];
    if (*((char *)GEN_TOP(((int)puVar4 + 0x15))) == '\0') {
      puVar9 = ((undefined4 *)GEN_TOP(puVar4[2]));
      if (*((char *)GEN_TOP(((int)puVar9 + 0x15))) == '\0') {
        cVar2 = *((char *)GEN_TOP(((int)*puVar9 + 0x15)));
        puVar4 = puVar9;
        puVar9 = ((undefined4 *)GEN_TOP(*puVar9));
        while (cVar2 == '\0') {
          cVar2 = *((char *)GEN_TOP(((int)*puVar9 + 0x15)));
          puVar4 = puVar9;
          puVar9 = ((undefined4 *)GEN_TOP(*puVar9));
        }
      }
      else {
        cVar2 = *((char *)GEN_TOP(((int)puVar4[1] + 0x15)));
        puVar6 = ((undefined4 *)GEN_TOP(puVar4[1]));
        puVar9 = puVar4;
        while ((puVar4 = puVar6, cVar2 == '\0' && (puVar9 == ((undefined4 *)GEN_TOP(puVar4[2]))))) {
          cVar2 = *((char *)GEN_TOP(((int)puVar4[1] + 0x15)));
          puVar6 = ((undefined4 *)GEN_TOP(puVar4[1]));
          puVar9 = puVar4;
        }
      }
    }
  } while( true );
}

/* ref: FUN_005ec040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ec040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5ec040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (REFG(void * PTR32, 0x1379694) != ((undefined *)GEN_TOP(0x0))) {
    puVar2 = ((undefined4 *)GEN_TOP(F_00a5feb0(REFG(void * PTR32, 0x1379694) GEN_EDX_FWD)));
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = *puVar2;
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = puVar2[1];
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = puVar2[2];
    return (uint)puVar2;
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x18))) = 1;
  iVar1 = *((int *)GEN_TOP((REFG(int, 0x1371298) + 0x34 + *((int *)GEN_TOP((REFG(int, 0x1371298) + 0x30))) * 4)));
  *param_1 = *((undefined4 *)GEN_TOP((iVar1 + 0x30)));
  param_1[1] = *((undefined4 *)GEN_TOP((iVar1 + 0x34)));
  param_1[2] = *((undefined4 *)GEN_TOP((iVar1 + 0x38)));
  uVar3 = F_00a1c7d0(param_1,0,0,0);
  return uVar3;
}

/* ref: FUN_005ec0b0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_005ec0b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5ec0b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar2 = ((undefined4 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)))));
  while( true ) {
    if (puVar2 == *((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)))) {
      return 0;
    }
    if (param_2 == puVar2[4]) break;
    if (*((char *)GEN_TOP(((int)puVar2 + 0x15))) == '\0') {
      puVar3 = ((undefined4 *)GEN_TOP(puVar2[2]));
      if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP(((int)*puVar3 + 0x15)));
        puVar2 = puVar3;
        puVar3 = ((undefined4 *)GEN_TOP(*puVar3));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar3 + 0x15)));
          puVar2 = puVar3;
          puVar3 = ((undefined4 *)GEN_TOP(*puVar3));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP(((int)puVar2[1] + 0x15)));
        puVar4 = ((undefined4 *)GEN_TOP(puVar2[1]));
        puVar3 = puVar2;
        while ((puVar2 = puVar4, cVar1 == '\0' && (puVar3 == ((undefined4 *)GEN_TOP(puVar2[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar2[1] + 0x15)));
          puVar4 = ((undefined4 *)GEN_TOP(puVar2[1]));
          puVar3 = puVar2;
        }
      }
    }
  }
  return 1;
}

/* ref: FUN_005ec120 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_005ec120(GEN_P(int param_1, unsigned int gen_a0), GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5ec120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)));
  puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
  while (puVar3 != puVar2) {
    iVar4 = puVar3[4];
    if (iVar4 != 0) {
      *((byte *)GEN_TOP((iVar4 + 0x20))) =
           (*((byte *)GEN_TOP((iVar4 + 0x20))) & 2 | param_2 & 1) * '\x02' | *((byte *)GEN_TOP((iVar4 + 0x20))) & 0xf9;
    }
    if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
      puVar5 = ((undefined4 *)GEN_TOP(puVar3[2]));
      if (*((char *)GEN_TOP(((int)puVar5 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP(((int)*puVar5 + 0x15)));
        puVar3 = puVar5;
        puVar5 = ((undefined4 *)GEN_TOP(*puVar5));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar5 + 0x15)));
          puVar3 = puVar5;
          puVar5 = ((undefined4 *)GEN_TOP(*puVar5));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
        puVar6 = ((undefined4 *)GEN_TOP(puVar3[1]));
        puVar5 = puVar3;
        while ((puVar3 = puVar6, cVar1 == '\0' && (puVar5 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
          puVar6 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar5 = puVar3;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_005ec1b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ec1b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5ec1b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  byte bVar1;
  char cVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar3 = ((undefined4 *)GEN_TOP(param_1[1]));
  puVar4 = ((undefined4 *)GEN_TOP(*puVar3));
  puVar7 = param_1;
  while (puVar4 != puVar3) {
    iVar5 = puVar4[4];
    if (iVar5 != 0) {
      bVar1 = *((byte *)GEN_TOP((iVar5 + 0x20)));
      puVar7 = ((undefined4 *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)puVar7) >> 8),bVar1)));
      if (((bVar1 >> 1 ^ bVar1) & 2) != 0) {
        *((byte *)GEN_TOP((iVar5 + 0x20))) = (bVar1 * '\x02' ^ bVar1) & 4 ^ bVar1;
        *((undefined1 *)GEN_TOP(((int)this + 0x1c))) = 1;
      }
    }
    if (*((char *)GEN_TOP(((int)puVar4 + 0x15))) == '\0') {
      puVar7 = ((undefined4 *)GEN_TOP(puVar4[2]));
      if (*((char *)GEN_TOP(((int)puVar7 + 0x15))) == '\0') {
        cVar2 = *((char *)GEN_TOP(((int)*puVar7 + 0x15)));
        puVar4 = puVar7;
        puVar7 = ((undefined4 *)GEN_TOP(*puVar7));
        while (cVar2 == '\0') {
          cVar2 = *((char *)GEN_TOP(((int)*puVar7 + 0x15)));
          puVar4 = puVar7;
          puVar7 = ((undefined4 *)GEN_TOP(*puVar7));
        }
      }
      else {
        cVar2 = *((char *)GEN_TOP(((int)puVar4[1] + 0x15)));
        puVar7 = ((undefined4 *)GEN_TOP(puVar4[1]));
        puVar6 = puVar4;
        while ((puVar4 = puVar7, puVar7 = puVar4, cVar2 == '\0' &&
               (puVar6 == ((undefined4 *)GEN_TOP(puVar4[2]))))) {
          cVar2 = *((char *)GEN_TOP(((int)puVar4[1] + 0x15)));
          puVar7 = ((undefined4 *)GEN_TOP(puVar4[1]));
          puVar6 = puVar4;
        }
      }
    }
  }
  return (uint)puVar7;
}

/* ref: FUN_005ec240 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_005ec240(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5ec240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)));
  puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
  while (puVar3 != puVar2) {
    piVar4 = ((int *)GEN_TOP(puVar3[4]));
    if ((piVar4 != ((int *)GEN_TOP(0x0))) && ((*(byte *)(piVar4 + 8) & 2) != 0)) {
      uVar5 = piVar4[9];
      if ((uVar5 & 1) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x68))))(piVar4 GEN_EDX_ARG);
      }
      if ((uVar5 & 2) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x7c))))(piVar4 GEN_EDX_ARG);
      }
    }
    if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
      puVar6 = ((undefined4 *)GEN_TOP(puVar3[2]));
      if (*((char *)GEN_TOP(((int)puVar6 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP(((int)*puVar6 + 0x15)));
        puVar3 = puVar6;
        puVar6 = ((undefined4 *)GEN_TOP(*puVar6));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar6 + 0x15)));
          puVar3 = puVar6;
          puVar6 = ((undefined4 *)GEN_TOP(*puVar6));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
        puVar7 = ((undefined4 *)GEN_TOP(puVar3[1]));
        puVar6 = puVar3;
        while ((puVar3 = puVar7, cVar1 == '\0' && (puVar6 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
          puVar7 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar6 = puVar3;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_005ec2e0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_005ec2e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5ec2e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 4)));
  puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
  while (puVar3 != puVar2) {
    piVar4 = ((int *)GEN_TOP(puVar3[4]));
    if ((piVar4 != ((int *)GEN_TOP(0x0))) && ((*(byte *)(piVar4 + 8) & 2) == 0)) {
      uVar5 = piVar4[9];
      if ((uVar5 & 1) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x70))))(piVar4 GEN_EDX_ARG);
      }
      if ((uVar5 & 2) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x80))))(piVar4 GEN_EDX_ARG);
      }
    }
    if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
      puVar6 = ((undefined4 *)GEN_TOP(puVar3[2]));
      if (*((char *)GEN_TOP(((int)puVar6 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP(((int)*puVar6 + 0x15)));
        puVar3 = puVar6;
        puVar6 = ((undefined4 *)GEN_TOP(*puVar6));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar6 + 0x15)));
          puVar3 = puVar6;
          puVar6 = ((undefined4 *)GEN_TOP(*puVar6));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
        puVar7 = ((undefined4 *)GEN_TOP(puVar3[1]));
        puVar6 = puVar3;
        while ((puVar3 = puVar7, cVar1 == '\0' && (puVar6 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
          puVar7 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar6 = puVar3;
        }
      }
    }
  }
  return 0;
}

/* ref: Client::LayoutEngine::LayoutWorld::vf4 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005ec380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5ec380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0x10))))(*(int * PTR32 *)(this + 0x10) GEN_EDX_FWD,param_1);
  puVar2 = *(undefined4 * PTR32 *)(this + 0x30);
  puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
  do {
    do {
      while( true ) {
        do {
          puVar5 = puVar3;
          if (puVar5 == puVar2) {
            return 0;
          }
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(puVar5[6])) + 0x10))))(((int *)GEN_TOP(puVar5[6])) GEN_EDX_ARG,param_1);
          puVar3 = puVar5;
        } while (*((char *)GEN_TOP(((int)puVar5 + 0x21))) != '\0');
        puVar3 = ((undefined4 *)GEN_TOP(puVar5[2]));
        if (*((char *)GEN_TOP(((int)puVar3 + 0x21))) != '\0') break;
        cVar1 = *((char *)GEN_TOP(((int)*puVar3 + 0x21)));
        puVar5 = ((undefined4 *)GEN_TOP(*puVar3));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar5 + 0x21)));
          puVar3 = puVar5;
          puVar5 = ((undefined4 *)GEN_TOP(*puVar5));
        }
      }
      puVar3 = ((undefined4 *)GEN_TOP(puVar5[1]));
    } while (*((char *)GEN_TOP(((int)puVar3 + 0x21))) != '\0');
    do {
      puVar4 = puVar3;
      puVar3 = puVar4;
      if (puVar5 != ((undefined4 *)GEN_TOP(puVar4[2]))) break;
      puVar3 = ((undefined4 *)GEN_TOP(puVar4[1]));
      puVar5 = puVar4;
    } while (*((char *)GEN_TOP(((int)puVar3 + 0x21))) == '\0');
  } while( true );
}

/* ref: FUN_005ec400 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005ec400(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5ec400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  if (*((int *)GEN_TOP((param_1 + 0x34))) != 0) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 0x30)));
    puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
    while (puVar3 != puVar2) {
      piVar4 = ((int *)GEN_TOP(puVar3[6]));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_FWD);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar4)))(piVar4 GEN_EDX_ARG,1);
      if (*((char *)GEN_TOP(((int)puVar3 + 0x21))) == '\0') {
        puVar5 = ((undefined4 *)GEN_TOP(puVar3[2]));
        if (*((char *)GEN_TOP(((int)puVar5 + 0x21))) == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar5 + 0x21)));
          puVar3 = puVar5;
          puVar5 = ((undefined4 *)GEN_TOP(*puVar5));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP(((int)*puVar5 + 0x21)));
            puVar3 = puVar5;
            puVar5 = ((undefined4 *)GEN_TOP(*puVar5));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x21)));
          puVar6 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar5 = puVar3;
          while ((puVar3 = puVar6, cVar1 == '\0' && (puVar5 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
            cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x21)));
            puVar6 = ((undefined4 *)GEN_TOP(puVar3[1]));
            puVar5 = puVar3;
          }
        }
      }
    }
    F_00614620(((undefined *)GEN_TOP((param_1 + 0x2c))) GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP((param_1 + 0x14))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x1c))) = 0;
    *((undefined4 *)GEN_TOP((param_1 + 0x18))) = 0;
  }
  if (param_2 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 0x10))) + 8))))(*((int * PTR32 *)GEN_TOP((param_1 + 0x10))) GEN_EDX_ARG);
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 0x10)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP((param_1 + 0x10))) = 0;
    }
  }
  return;
}

/* ref: FUN_005ec4c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ec4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ec4c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint uVar7;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x40)));
  puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
  while (puVar3 != puVar2) {
    piVar4 = ((int *)GEN_TOP(puVar3[6]));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_FWD);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar4)))(piVar4 GEN_EDX_ARG,1);
    if (*((char *)GEN_TOP(((int)puVar3 + 0x21))) == '\0') {
      puVar5 = ((undefined4 *)GEN_TOP(puVar3[2]));
      if (*((char *)GEN_TOP(((int)puVar5 + 0x21))) == '\0') {
        cVar1 = *((char *)GEN_TOP(((int)*puVar5 + 0x21)));
        puVar3 = puVar5;
        puVar5 = ((undefined4 *)GEN_TOP(*puVar5));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar5 + 0x21)));
          puVar3 = puVar5;
          puVar5 = ((undefined4 *)GEN_TOP(*puVar5));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x21)));
        puVar6 = ((undefined4 *)GEN_TOP(puVar3[1]));
        puVar5 = puVar3;
        while ((puVar3 = puVar6, cVar1 == '\0' && (puVar5 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x21)));
          puVar6 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar5 = puVar3;
        }
      }
    }
  }
  uVar7 = F_00614620(((undefined *)GEN_TOP(((int)this + 0x3c))) GEN_EDX_ARG);
  return uVar7;
}

/* ref: FUN_005ec540 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005ec540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ec540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  if (*((int *)GEN_TOP(((int)this + 0x180))) == 0) {
    return;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x17c)));
  puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
  while (puVar3 != puVar2) {
    F_0050c620(puVar3[3],0,0);
    if (*((char *)GEN_TOP(((int)puVar3 + 0x11))) == '\0') {
      puVar4 = ((undefined4 *)GEN_TOP(puVar3[2]));
      if (*((char *)GEN_TOP(((int)puVar4 + 0x11))) == '\0') {
        cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x11)));
        puVar3 = puVar4;
        puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x11)));
          puVar3 = puVar4;
          puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x11)));
        puVar5 = ((undefined4 *)GEN_TOP(puVar3[1]));
        puVar4 = puVar3;
        while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x11)));
          puVar5 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar4 = puVar3;
        }
      }
    }
  }
  F_00614680(((undefined *)GEN_TOP(((int)this + 0x178))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_005ec5e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005ec5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5ec5e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x14)));
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x4c)));
  for (iVar2 = 0x4b; iVar2 != 0; iVar2 = iVar2 - 1) {
    *puVar3 = 0xbf800000;
    puVar3 = puVar3 + 1;
  }
  if (iVar1 != 0) {
    F_005ebf60(*((undefined4 *)GEN_TOP((iVar1 + 0x44))) GEN_EDX_FWD,(undefined1)param_1);
    return;
  }
  return;
}

/* ref: FUN_005ec610 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005ec610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x5ec610u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[5];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  byte * pbVar1;
  byte * pbVar2;
  
  pbVar2 = (*(byte * PTR32 *)&gen_args[4]);
  pbVar1 = (*(byte * PTR32 *)&gen_args[3]);
  *(*(byte * PTR32 *)&gen_args[4]) = 1;
  *(*(byte * PTR32 *)&gen_args[3]) = 1;
  if (*((int *)GEN_TOP((param_1 + 0x184))) != 0) {
    switch((unsigned int)(uintptr_t)((*(byte *)&gen_args[0]))) {
    case 5: ;
    case 8: ;
    case 9: ;
    case 0xc: ;
    case 0xe: ;
    case 0x10: ;
    case 0x28: ;
    case 0x29: ;
    case 0x2b: ;
    case 0x2c: ;
    case 0x2d: ;
    case 0x31: ;
    case 0x33: ;
    case 0x3a: ;
    case 0x3b: ;
    case 0x42: ;
    case 0x43: ;
    case 0x44: ;
    case 0x45: ;
    case 0x46: ;
    case 0x47: ;
    case 0x48: ;
      *(*(byte * PTR32 *)&gen_args[4]) = 0;
      *(*(byte * PTR32 *)&gen_args[3]) = 0;
      return 1;
    }
    F_00615690(((undefined *)GEN_TOP((param_1 + 0x17c))) GEN_EDX_FWD,&(*(byte * PTR32 *)&gen_args[4]),&(*(undefined4 *)&gen_args[2]));
    if ((((*(byte * PTR32 *)&gen_args[4]) != *((byte * PTR32 *)GEN_TOP((param_1 + 0x180)))) && ((*(byte *)&gen_args[0]) == (*(byte * PTR32 *)&gen_args[4])[0x11])) &&
       ((short)(*(undefined4 *)&gen_args[1]) == *((short *)GEN_TOP(((*(byte * PTR32 *)&gen_args[4]) + 0x12))))) {
      *pbVar1 = (*(byte * PTR32 *)&gen_args[4])[0x10] & 1;
      *pbVar2 = (*(byte * PTR32 *)&gen_args[4])[0x10] >> 1 & 1;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_005ec700 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005ec700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5ec700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  *((char *)GEN_TOP(((int)this + 0x51))) = (char)param_1;
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x100)));
  puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
  while (puVar3 != puVar2) {
    iVar4 = puVar3[4];
    iVar5 = *((int *)GEN_TOP((iVar4 + 0x10)));
    if (iVar5 != 0) {
      *((byte *)GEN_TOP((iVar5 + 100))) = (char)param_1 != '\0' | *((byte *)GEN_TOP((iVar5 + 100))) & 0xfe;
    }
    iVar4 = *((int *)GEN_TOP((iVar4 + 0x14)));
    if (iVar4 != 0) {
      F_00c9f290(iVar4 GEN_EDX_FWD,(char)param_1);
    }
    if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
      puVar6 = ((undefined4 *)GEN_TOP(puVar3[2]));
      if (*((char *)GEN_TOP(((int)puVar6 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP(((int)*puVar6 + 0x15)));
        puVar3 = puVar6;
        puVar6 = ((undefined4 *)GEN_TOP(*puVar6));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar6 + 0x15)));
          puVar3 = puVar6;
          puVar6 = ((undefined4 *)GEN_TOP(*puVar6));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
        puVar7 = ((undefined4 *)GEN_TOP(puVar3[1]));
        puVar6 = puVar3;
        while ((puVar3 = puVar7, cVar1 == '\0' && (puVar6 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
          puVar7 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar6 = puVar3;
        }
      }
    }
  }
  return;
}

/* ref: FUN_005ec7a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ec7a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5ec7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00615550(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x0)) != *((undefined * PTR32 *)GEN_TOP(((int)this + 0x170)))) {
    return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x10)));
  }
  return 0;
}

/* ref: FUN_005ec7e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ec7e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5ec7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_006154e0(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x0)) != *((undefined * PTR32 *)GEN_TOP(((int)this + 0x170)))) {
    return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x10)));
  }
  return 0;
}

/* ref: FUN_005ec820 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005ec820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ec820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar2 = ((undefined4 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x100)))));
  while( true ) {
    if (puVar2 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x100)))) {
      return 1;
    }
    if ((*((int *)GEN_TOP((puVar2[4] + 0x11c))) != 5) && (*((int *)GEN_TOP((puVar2[4] + 0x11c))) != 3)) break;
    if (*((char *)GEN_TOP(((int)puVar2 + 0x15))) == '\0') {
      puVar3 = ((undefined4 *)GEN_TOP(puVar2[2]));
      if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP(((int)*puVar3 + 0x15)));
        puVar2 = puVar3;
        puVar3 = ((undefined4 *)GEN_TOP(*puVar3));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar3 + 0x15)));
          puVar2 = puVar3;
          puVar3 = ((undefined4 *)GEN_TOP(*puVar3));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP(((int)puVar2[1] + 0x15)));
        puVar4 = ((undefined4 *)GEN_TOP(puVar2[1]));
        puVar3 = puVar2;
        while ((puVar2 = puVar4, cVar1 == '\0' && (puVar3 == ((undefined4 *)GEN_TOP(puVar2[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar2[1] + 0x15)));
          puVar4 = ((undefined4 *)GEN_TOP(puVar2[1]));
          puVar3 = puVar2;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_005ec8a0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005ec8a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ec8a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  char cVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  byte bVar7;
  int * piVar8;
  
  if (*((int *)GEN_TOP(((int)this + 0x1ac))) != 0) {
    piVar8 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1ac))) + 0x88)));
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar8), 0);
    if (iVar1 != 2) {
      return 0;
    }
  }
  if (*((int *)GEN_TOP(((int)this + 0x1b0))) != 0) {
    piVar8 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1b0))) + 0x88)));
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar8), 0);
    if (iVar1 != 2) {
      return 0;
    }
  }
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x110)));
  puVar4 = ((undefined4 *)GEN_TOP(*puVar3));
  while( true ) {
    if (puVar4 == puVar3) {
      return 1;
    }
    bVar7 = F_005eb850(((undefined *)GEN_TOP(puVar4[4])) GEN_EDX_FWD);
    if (bVar7 == 0) break;
    if (*((char *)GEN_TOP(((int)puVar4 + 0x15))) == '\0') {
      puVar5 = ((undefined4 *)GEN_TOP(puVar4[2]));
      if (*((char *)GEN_TOP(((int)puVar5 + 0x15))) == '\0') {
        cVar2 = *((char *)GEN_TOP(((int)*puVar5 + 0x15)));
        puVar4 = puVar5;
        puVar5 = ((undefined4 *)GEN_TOP(*puVar5));
        while (cVar2 == '\0') {
          cVar2 = *((char *)GEN_TOP(((int)*puVar5 + 0x15)));
          puVar4 = puVar5;
          puVar5 = ((undefined4 *)GEN_TOP(*puVar5));
        }
      }
      else {
        cVar2 = *((char *)GEN_TOP(((int)puVar4[1] + 0x15)));
        puVar6 = ((undefined4 *)GEN_TOP(puVar4[1]));
        puVar5 = puVar4;
        while ((puVar4 = puVar6, cVar2 == '\0' && (puVar5 == ((undefined4 *)GEN_TOP(puVar4[2]))))) {
          cVar2 = *((char *)GEN_TOP(((int)puVar4[1] + 0x15)));
          puVar6 = ((undefined4 *)GEN_TOP(puVar4[1]));
          puVar5 = puVar4;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_005ec950 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005ec950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ec950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x100)));
  puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
  while (puVar3 != puVar2) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(puVar3[4])) + 0xc))))(((int *)GEN_TOP(puVar3[4])) GEN_EDX_FWD,0);
    if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
      puVar4 = ((undefined4 *)GEN_TOP(puVar3[2]));
      if (*((char *)GEN_TOP(((int)puVar4 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
        puVar3 = puVar4;
        puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
          puVar3 = puVar4;
          puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
        puVar5 = ((undefined4 *)GEN_TOP(puVar3[1]));
        puVar4 = puVar3;
        while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
          puVar5 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar4 = puVar3;
        }
      }
    }
  }
  return;
}

/* ref: FUN_005ec9c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ec9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ec9c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x170)));
  puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
  while (puVar3 != puVar2) {
    if (puVar3[4] != 0) {
      F_00406ad0(puVar3[4]);
      puVar3[4] = 0;
    }
    if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
      puVar4 = ((undefined4 *)GEN_TOP(puVar3[2]));
      if (*((char *)GEN_TOP(((int)puVar4 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
        puVar3 = puVar4;
        puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
          puVar3 = puVar4;
          puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
        puVar5 = ((undefined4 *)GEN_TOP(puVar3[1]));
        puVar4 = puVar3;
        while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
          puVar5 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar4 = puVar3;
        }
      }
    }
  }
  uVar6 = F_00615480(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_ARG);
  return uVar6;
}

/* ref: FUN_005eca50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005eca50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5eca50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar2 = ((undefined4 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x170)))));
  while( true ) {
    if (puVar2 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x170)))) {
      return 0;
    }
    if (*((int *)GEN_TOP((puVar2[4] + 4))) == param_1) break;
    if (*((char *)GEN_TOP(((int)puVar2 + 0x15))) == '\0') {
      puVar3 = ((undefined4 *)GEN_TOP(puVar2[2]));
      if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP(((int)*puVar3 + 0x15)));
        puVar2 = puVar3;
        puVar3 = ((undefined4 *)GEN_TOP(*puVar3));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar3 + 0x15)));
          puVar2 = puVar3;
          puVar3 = ((undefined4 *)GEN_TOP(*puVar3));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP(((int)puVar2[1] + 0x15)));
        puVar4 = ((undefined4 *)GEN_TOP(puVar2[1]));
        puVar3 = puVar2;
        while ((puVar2 = puVar4, cVar1 == '\0' && (puVar3 == ((undefined4 *)GEN_TOP(puVar2[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar2[1] + 0x15)));
          puVar4 = ((undefined4 *)GEN_TOP(puVar2[1]));
          puVar3 = puVar2;
        }
      }
    }
  }
  return puVar2[4];
}

/* ref: FUN_005ecac0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005ecac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5ecac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  uVar1 = (*(uint *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  (*(uint *)&gen_args[0]) = (*(uint *)&gen_args[0]) & 0xffff;
  F_00615310(((undefined *)GEN_TOP(((int)this + 0x10c))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(uint *)&gen_args[0]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x0)) != *((undefined * PTR32 *)GEN_TOP(((int)this + 0x110)))) {
    return 1;
  }
  piVar4 = *((int * PTR32 *)GEN_TOP(((int)this + 300)));
  uVar2 = *((int *)GEN_TOP(((int)this + 0x130))) - (int)((int)(uintptr_t)piVar4) >> 2;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      if (*((ushort *)GEN_TOP((*piVar4 + 8))) == uVar1) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar3 < uVar2);
  }
  return 0;
}

/* ref: FUN_005ecb30 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_005ecb30(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5ecb30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint uVar7;
  uint uVar8;
  uint local_8;
  
  uVar8 = param_1[1] - *param_1 >> 2;
  local_8 = 0;
  if (uVar8 != 0) {
    do {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*param_1 + local_8 * 4))) + 0x20)));
      puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
      while (puVar3 != puVar2) {
        piVar4 = ((int *)GEN_TOP(puVar3[4]));
        uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x54))))(piVar4 GEN_EDX_ARG);
        if (((char)uVar7 != '\0') &&
           (uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x58))))(piVar4 GEN_EDX_ARG), (char)uVar7 == '\0')) {
          return 0;
        }
        if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
          puVar5 = ((undefined4 *)GEN_TOP(puVar3[2]));
          if (*((char *)GEN_TOP(((int)puVar5 + 0x15))) == '\0') {
            cVar1 = *((char *)GEN_TOP(((int)*puVar5 + 0x15)));
            puVar3 = puVar5;
            puVar5 = ((undefined4 *)GEN_TOP(*puVar5));
            while (cVar1 == '\0') {
              cVar1 = *((char *)GEN_TOP(((int)*puVar5 + 0x15)));
              puVar3 = puVar5;
              puVar5 = ((undefined4 *)GEN_TOP(*puVar5));
            }
          }
          else {
            cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
            puVar6 = ((undefined4 *)GEN_TOP(puVar3[1]));
            puVar5 = puVar3;
            while ((puVar3 = puVar6, cVar1 == '\0' && (puVar5 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
              cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
              puVar6 = ((undefined4 *)GEN_TOP(puVar3[1]));
              puVar5 = puVar3;
            }
          }
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < uVar8);
  }
  return 1;
}

/* ref: FUN_005ecc00 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005ecc00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ecc00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x110)));
  puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
  while (puVar3 != puVar2) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(puVar3[4])) + 0xc))))(((int *)GEN_TOP(puVar3[4])) GEN_EDX_FWD,0);
    if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
      puVar4 = ((undefined4 *)GEN_TOP(puVar3[2]));
      if (*((char *)GEN_TOP(((int)puVar4 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
        puVar3 = puVar4;
        puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
          puVar3 = puVar4;
          puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
        puVar5 = ((undefined4 *)GEN_TOP(puVar3[1]));
        puVar4 = puVar3;
        while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
          puVar5 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar4 = puVar3;
        }
      }
    }
  }
  return;
}

/* ref: FUN_005ecc70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ecc70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5ecc70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00615410(((undefined *)GEN_TOP(((int)this + 0x13c))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x0)) == *((undefined * PTR32 *)GEN_TOP(((int)this + 0x140)))) {
    return 0;
  }
  return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x10)));
}

/* ref: FUN_005eccb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005eccb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5eccb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x18c)));
  if (piVar1 != *((int * PTR32 *)GEN_TOP(((int)this + 400)))) {
    while (*piVar1 != param_1) {
      piVar1 = piVar1 + 1;
      if (piVar1 == *((int * PTR32 *)GEN_TOP(((int)this + 400)))) {
        return (uint)piVar1;
      }
    }
    piVar1 = ((int *)GEN_TOP(F_00c46e20(piVar1,piVar1 + 1,
                               (*((int *)GEN_TOP(((int)this + 400))) - (int)(piVar1 + 1) >> 2) * 4)));
    *((int *)GEN_TOP(((int)this + 400))) = *((int *)GEN_TOP(((int)this + 400))) - 4;
  }
  return (uint)piVar1;
}

/* ref: FUN_005ecd20 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005ecd20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5ecd20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  byte bVar4;
  undefined4 * puVar5;
  int * piVar6;
  int * piVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  if (*((int *)GEN_TOP(((int)this + 0x1a4))) != 0) {
    piVar7 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1a0)));
    piVar6 = ((int *)GEN_TOP(*piVar7));
    if (piVar6 != piVar7) {
      do {
        if ((piVar6[3] == 0) || (bVar4 = F_005e3950(piVar6[3] GEN_EDX_FWD,param_1), bVar4 != 0)) {
          puVar5 = ((undefined4 *)GEN_TOP(F_00615780(((undefined *)GEN_TOP(((int)this + 0x19c))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),piVar6)));
          piVar6 = ((int *)GEN_TOP(*puVar5));
          piVar7 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1a0)));
          if (piVar6 == piVar7) {
            return;
          }
        }
        if (*((char *)GEN_TOP(((int)piVar6 + 0x11))) == '\0') {
          piVar2 = ((int *)GEN_TOP(piVar6[2]));
          if (*((char *)GEN_TOP(((int)piVar2 + 0x11))) == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar2 + 0x11)));
            piVar6 = piVar2;
            piVar2 = ((int *)GEN_TOP(*piVar2));
            while (cVar1 == '\0') {
              cVar1 = *((char *)GEN_TOP((*piVar2 + 0x11)));
              piVar6 = piVar2;
              piVar2 = ((int *)GEN_TOP(*piVar2));
            }
          }
          else {
            cVar1 = *((char *)GEN_TOP((piVar6[1] + 0x11)));
            piVar3 = ((int *)GEN_TOP(piVar6[1]));
            piVar2 = piVar6;
            while ((piVar6 = piVar3, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar6[2]))))) {
              cVar1 = *((char *)GEN_TOP((piVar6[1] + 0x11)));
              piVar3 = ((int *)GEN_TOP(piVar6[1]));
              piVar2 = piVar6;
            }
          }
        }
      } while (piVar6 != piVar7);
    }
  }
  return;
}

/* ref: FUN_005ecdd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ecdd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5ecdd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  short * psVar1;
  char cVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 * PTR32 * ppuVar8;
  int * piVar9;
  undefined4 * puVar10;
  short * psVar11;
  
  (*(uint *)(gen_frame + 0x10)) = 0;
  if (*((int *)GEN_TOP(((int)this + 0x18))) == 0) {
    uVar5 = 0;
    if (*((int *)GEN_TOP(((int)this + 0x1c))) != 0) {
      (*(int *)(gen_frame + 0x8)) = *((int *)GEN_TOP(((int)this + 0x1c)));
      F_006154e0(((undefined *)GEN_TOP(((int)this + 0x16c))) GEN_EDX_FWD,&(*(uint *)(gen_frame + 0xc)),&(*(int *)(gen_frame + 0x8)));
      uVar5 = (*(uint *)(gen_frame + 0xc));
      if ((*(uint *)(gen_frame + 0xc)) == *((uint *)GEN_TOP(((int)this + 0x170)))) {
        (*(uint *)(gen_frame + 0x10)) = 0;
      }
      else {
        (*(uint *)(gen_frame + 0x10)) = *((uint *)GEN_TOP(((*(uint *)(gen_frame + 0xc)) + 0x10)));
      }
    }
  }
  else {
    uVar5 = F_005eca50(this GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x18))));
    (*(uint *)(gen_frame + 0x10)) = uVar5;
  }
  (*(uint *)(gen_frame + 0xc)) = 0;
  if (0 < *((int *)GEN_TOP((param_1 + 0xc)))) {
    do {
      iVar6 = *((int *)GEN_TOP((param_1 + 8))) + param_1;
      psVar11 = ((short *)GEN_TOP((*((int *)GEN_TOP((iVar6 + (*(uint *)(gen_frame + 0xc)) * 4))) + iVar6)));
      uVar5 = F_005d93f0((*(uint *)(gen_frame + 0x10)),psVar11);
      if (((char)uVar5 != '\0') && ((*(int *)(gen_frame + 0x8)) = 0, 0 < *(int *)(psVar11 + 6))) {
        do {
          iVar6 = *(int *)(psVar11 + 4);
          iVar3 = *((int *)GEN_TOP(((int)psVar11 + (*(int *)(gen_frame + 0x8)) * 4 + iVar6)));
          uVar5 = *((uint *)GEN_TOP(((int)psVar11 + iVar3 + 4 + iVar6)));
          piVar9 = ((int *)GEN_TOP(((int)psVar11 + iVar3 + iVar6)));
          if (*((int *)GEN_TOP(((int)this + 0x184))) == 0) {
LAB_005ecef7: ;
            psVar1 = ((short *)GEN_TOP(((int)this + *piVar9 * 0xc + 0x1be)));
            *psVar1 = *psVar1 + 1;
          }
          else {
            switch((unsigned int)(uintptr_t)((char)*piVar9)) {
            case '\x05': ;
            case '\b': ;
            case '\t': ;
            case '\f': ;
            case '\x0e': ;
            case '\x10': ;
            case '(': ;
            case ')': ;
            case '+': ;
            case ',': ;
            case '-': ;
            case '1': ;
            case '3': ;
            case ':':
            case ';': ;
            case 'B': ;
            case 'C': ;
            case 'D': ;
            case 'E': ;
            case 'F': ;
            case 'G': ;
            case 'H': ;
              break;
            default: ;
              puVar10 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x180))))[1]));
              cVar2 = *((char *)GEN_TOP(((int)puVar10 + 0x19)));
              puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x180)));
              while (cVar2 == '\0') {
                if ((uint)puVar10[3] < uVar5) {
                  puVar7 = ((undefined4 *)GEN_TOP(puVar10[2]));
                  puVar10 = puVar4;
                }
                else {
                  puVar7 = ((undefined4 *)GEN_TOP(*puVar10));
                }
                puVar4 = puVar10;
                puVar10 = puVar7;
                cVar2 = *((char *)GEN_TOP(((int)puVar7 + 0x19)));
              }
              puVar10 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x180)));
              (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar4;
              if ((puVar4 == puVar10) || (uVar5 < (uint)puVar4[3])) {
                (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar10;
                ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
              }
              else {
                ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
              }
              puVar10 = *ppuVar8;
              if ((((puVar10 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x180)))) ||
                   ((char)*piVar9 != *((char *)GEN_TOP(((int)puVar10 + 0x11))))) ||
                  (*psVar11 != *((short *)GEN_TOP(((int)puVar10 + 0x12))))) ||
                 ((*(byte *)(puVar10 + 4) & 1) != 0)) goto LAB_005ecef7;
            }
          }
          iVar6 = (*(int *)(gen_frame + 0x8)) + 1;
          (*(int *)(gen_frame + 0x8)) = iVar6;
        } while (iVar6 < *(int *)(psVar11 + 6));
      }
      uVar5 = (*(uint *)(gen_frame + 0xc)) + 1;
      (*(uint *)(gen_frame + 0xc)) = uVar5;
    } while ((int)uVar5 < *((int *)GEN_TOP((param_1 + 0xc))));
  }
  return uVar5;
}

/* ref: FUN_005ecf90 */
GEN_OWN GEN_NOFRAME unsigned int F_005ecf90(void)
{
  GEN_ENTER(0x5ecf90u, 0u, 0u, 0u, 0u);
  F_005ec400(REFG(undefined4, 0x1379cb0) GEN_EDX_ARG,0);
  return;
}

/* ref: FUN_005ecfa0 */
GEN_OWN GEN_NOFRAME unsigned int F_005ecfa0(void)
{
  GEN_ENTER(0x5ecfa0u, 0u, 0u, 0u, 0u);
  F_005ec400(REFG(undefined4, 0x1379cb0) GEN_EDX_ARG,0);
  return;
}

/* ref: FUN_005ecfb0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_005ecfb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ecfb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)this + 8))) == 1) {
    bVar1 = F_005e9e00(this GEN_EDX_FWD);
    uVar2 = (uint)bVar1;
    if (bVar1 != 0) {
      bVar1 = F_005e9e80(this GEN_EDX_ARG);
      return bVar1;
    }
  }
  else {
    uVar2 = *((int *)GEN_TOP(((int)this + 8))) - 2;
    if (uVar2 == 0) {
      bVar1 = F_005e9f00(this GEN_EDX_ARG);
      uVar2 = (uint)bVar1;
      if (bVar1 != 0) {
        *((undefined4 *)GEN_TOP(((int)this + 8))) = 3;
      }
    }
  }
  return (byte)uVar2;
}

/* ref: FUN_005ecfe0 */
GEN_OWN GEN_FRAME byte F_005ecfe0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ecfe0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  
  if ((((REFG(int, 0x1379cb0) != 0) && (iVar1 = *((int *)GEN_TOP((REFG(int, 0x1379cb0) + 0x20))), iVar1 != 0)) &&
      (2 < *((int *)GEN_TOP((iVar1 + 4))))) && (*((int *)GEN_TOP((iVar1 + 0x14))) != 0)) {
    F_00615aa0(((undefined *)GEN_TOP((iVar1 + 0xc))) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]));
    if ((*(int *)(gen_frame + 0x0)) != *((int *)GEN_TOP((iVar1 + 0x10)))) {
      return *((byte *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x10)));
    }
  }
  return 0xff;
}

/* ref: FUN_005ed040 */
GEN_OWN GEN_NOFRAME uint F_005ed040(void)
{
  GEN_ENTER(0x5ed040u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_005ec4c0(REFG(void * PTR32, 0x1379cb0) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ed050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ed050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined4 * puVar1;
  undefined4 * puVar2;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  this[0x20] = (undefined1)((byte)this[0x20] & 0xfe);
  *(undefined4 *)(this + 8) = *(*(undefined4 * PTR32 *)&gen_args[0]);
  *(undefined4 *)(this + 0x18) = (*(undefined4 * PTR32 *)&gen_args[0])[8];
  this[0x28] = (undefined1)
               ((byte)this[0x28] ^ (*((byte *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 6))) ^ (byte)this[0x28]) & 0xf);
  this[0x28] = (undefined1)(*((char *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[0]) + 7))) << 4 | (byte)this[0x28] & 0xf);
  this[0x2a] = *((undefined *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + 0x1d)));
  puVar1 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)&gen_args[0])[4]));
  *(undefined4 *)(this + 0x10) = *puVar1;
  *(undefined4 *)(this + 0x14) = puVar1[1];
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_FWD);
  if ((char)uVar4 != '\0') {
    this[0x20] = (undefined1)((byte)this[0x20] & 0xf9);
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x100))))(this GEN_EDX_ARG,puVar2[5]);
  if (this[0x2a] == (undefined1)0xff) {
    uVar4 = F_00a1b490(this + 0x10);
    if (((uVar4 == 0xffffffff) && (uVar4 = *(uint *)(this + 8), uVar4 != 0)) &&
       (*((int *)GEN_TOP((uVar4 + 4))) != 0)) {
      bVar3 = F_005ec610(*((int *)GEN_TOP((uVar4 + 4))) GEN_EDX_ARG,this[0x11],(uint)*(ushort *)(this + 0x12),
                           *(undefined4 *)(this + 0x14),(int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3,(int)&(*(undefined4 * PTR32 *)&gen_args[0]) + 3);
      uVar4 = CONCAT31(extraout_var,bVar3);
      if (bVar3 != 0) {
        this[0x2b] = (undefined1)
                     ((byte)this[0x2b] ^ ((*((undefined1 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[0]) + 3)))) << 6 ^ (byte)this[0x2b]) & 0x40);
      }
    }
  }
  return uVar4;
}

/* ref: FUN_005ed120 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005ed120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ed120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_0060f280(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))));
  *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))) = *((int *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(*((undefined4 *)GEN_TOP(((int)this + 4))))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  *((uint *)GEN_TOP((uVar1 + 8))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_005ed150 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ed150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5ed150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00614a80(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x0)) != *((undefined * PTR32 *)GEN_TOP(((int)this + 4)))) {
    return (int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x20;
  }
  return 0;
}

/* ref: FUN_005ed2f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005ed2f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5ed2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  (*(int *)&gen_args[0]) = *((undefined4 *)GEN_TOP(((*(int *)&gen_args[0]) + 4)));
  F_00614a80(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(int *)&gen_args[0]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x0)) != *((undefined * PTR32 *)GEN_TOP(((int)this + 4)))) {
    return (*(undefined * PTR32 *)(gen_frame + 0x0)) != ((undefined *)GEN_TOP(0xffffffe0));
  }
  return 0;
}

/* ref: FUN_005ed340 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005ed340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ed340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (*(int *)this != 0) {
    F_0050c620(*(int *)this,0,0);
    *(undefined4 *)this = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 0xc))) - iVar1 >> 2) * 4,900);
    uVar2 = (uint)uVar3;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  return uVar2;
}

/* ref: FUN_005ed3a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005ed3a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5ed3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_004ff470(&(*(undefined4 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),0,0);
  F_00615ec0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]));
  return (*(undefined * PTR32 *)(gen_frame + 0x0)) != *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc)));
}

/* ref: FUN_005ed3e0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_005ed3e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5ed3e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((param_2 + 4)));
  while( true ) {
    if (piVar1 == *((int * PTR32 *)GEN_TOP((param_2 + 8)))) {
      return 0;
    }
    if (*piVar1 == param_1) break;
    piVar1 = piVar1 + 1;
  }
  F_00c46e20(piVar1,piVar1 + 1,(*((int *)GEN_TOP((param_2 + 8))) - (int)(piVar1 + 1) >> 2) * 4);
  *((int *)GEN_TOP((param_2 + 8))) = *((int *)GEN_TOP((param_2 + 8))) - 4;
  return 1;
}

/* ref: FUN_005ed430 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_005ed430(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5ed430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  float * pfVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float fVar11;
  uint uVar12;
  
  uVar4 = param_1;
  if (((*((byte *)GEN_TOP((param_1 + 0x2b))) & 0x40) != 0) &&
     ((iVar2 = *((int *)GEN_TOP((param_1 + 8))), iVar2 == 0 ||
      (((*((int *)GEN_TOP((iVar2 + 4))) == 0 || (*((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 4))) + 0x50))) != '\0')) &&
       ((iVar2 == 0 || ((*((byte *)GEN_TOP((iVar2 + 0x16))) & 1) != 0)))))))) {
    F_004aa8d0(param_2 GEN_EDX_ARG,((float)GEN_TOF(((float10)(param_1 >> 2 & 0xff) * (float10)*(double *)&REFG(double, 0x10a5850))))
                );
    if ((*((byte *)GEN_TOP((param_1 + 0x2b))) & 2) == 0) {
      if (*((char *)GEN_TOP((param_1 + 0x11))) != '\x01') {
        return;
      }
      if ((*((byte *)GEN_TOP((param_1 + 0x2b))) & 4) == 0) {
        return;
      }
      fVar8 = F_0060a370(param_2 GEN_EDX_ARG,(float)(float10)1);
      fVar11 = (float)fVar8;
      uVar12 = param_1;
      uVar7 = param_2;
    }
    else {
      uVar7 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1)) + 0xcc))))(param_1);
      uVar12 = *((uint *)GEN_TOP((param_2 + 0x78)));
      fVar11 = 0.0;
      bVar5 = (byte)uVar7;
      bVar6 = *((byte *)GEN_TOP((param_2 + 2)));
      if (((uVar12 >> 2 & 1) != 0) &&
         (pfVar1 = ((float *)GEN_TOP((param_2 + 0x6c))), !GEN_ISNAN(*pfVar1) && (!(0.0 < *pfVar1) && *pfVar1 != 0.0))
         ) {
        bVar6 = 0;
      }
      pfVar1 = ((float *)GEN_TOP((param_2 + 4)));
      ((byte *)(gen_frame + 0x0))[0x18] = bVar5;
      bVar3 = bVar5;
      if ((GEN_ISNAN(REFG(float, 0x1088068)) || GEN_ISNAN(*pfVar1)) || (REFG(float, 0x1088068) < *pfVar1 || REFG(uint, 0x1088068) == *pfVar1)
         ) {
        ((byte *)(gen_frame + 0x0))[0x18] = bVar6;
        bVar3 = ((byte *)(gen_frame + 0x0))[0x18];
      }
      ((byte *)(gen_frame + 0x0))[0x18] = bVar3;
      if (bVar5 != 0) {
        fVar11 = REFG(float, 0x1087f04);
      }
      param_1 = *((uint *)GEN_TOP((param_2 + 100)));
      if ((uVar12 >> 2 & 1) != 0) {
        param_1 = (uint)gen_fl2bits(((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_2 + 0x74))) *
                                           ((float10)GEN_TOD(gen_bits2f(param_1)))))));
      }
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) = (undefined4)gen_fl2bits(*((float *)GEN_TOP((param_2 + 4))));
      fVar9 = (float10)*((float *)GEN_TOP((param_2 + 4)));
      fVar8 = (float10)1;
      fVar11 = ((float)GEN_TOF(((float10)fVar11 * (fVar8 - fVar9) + ((float10)GEN_TOD(gen_bits2f(param_1))) * fVar9)));
      param_1 = (uint)gen_fl2bits(*((float *)GEN_TOP((param_2 + 8))));
      if ((uVar12 >> 3 & 1) != 0) {
        param_1 = (uint)gen_fl2bits(((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_2 + 0x70))) *
                                           (float10)*((float *)GEN_TOP((param_2 + 8)))))));
      }
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) = (undefined4)gen_fl2bits(*((float *)GEN_TOP((param_2 + 0xc))));
      fVar9 = (float10)*((float *)GEN_TOP((param_2 + 0xc)));
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) =
           (undefined4)gen_fl2bits(((float)GEN_TOF((fVar9 * ((float10)GEN_TOD(gen_bits2f(param_1))) + (fVar8 - fVar9)))));
      param_1 = (uint)gen_fl2bits(*((float *)GEN_TOP((param_2 + 0x10))));
      if ((uVar12 >> 4 & 1) != 0) {
        param_1 = (uint)gen_fl2bits(((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_2 + 0x70))) *
                                           (float10)*((float *)GEN_TOP((param_2 + 0x10)))))));
      }
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) = (undefined4)gen_fl2bits(*((float *)GEN_TOP((param_2 + 0x14))));
      fVar10 = (float10)*((float *)GEN_TOP((param_2 + 0x14)));
      fVar9 = (float10)*(double *)&REFG(undefined, 0x108bec8);
      ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(uVar4)) + 0x98))))(uVar4,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)),(undefined4)gen_fl2bits(fVar11));
      ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(uVar4)) + 0xa8))))
                (uVar4,(undefined4)
                       gen_fl2bits(((float)GEN_TOF(((fVar8 - fVar10) * fVar9 +
                                          fVar10 * ((float10)GEN_TOD(gen_bits2f(param_1))))))));
      ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(uVar4)) + 0xb8))))(uVar4,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)));
      uVar12 = uVar4;
      uVar7 = param_2;
      if (*((char *)GEN_TOP((uVar4 + 0x11))) == '\x06') {
        F_005eadd0(uVar4 GEN_EDX_ARG,fVar11,param_2);
        return;
      }
    }
    F_005ea960(((byte *)(gen_frame + 0x0)),fVar11,uVar12,uVar7);
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(uVar4)) + 0xb0))))(uVar4,((byte *)(gen_frame + 0x0)));
  }
  return;
}

/* ref: FUN_005ed650 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005ed650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ed650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a585c));
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 0x10))) - iVar1 >> 2) * 4,0x385);
    uVar2 = (uint)uVar3;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  return uVar2;
}

/* ref: FUN_005ed6a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005ed6a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ed6a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined * this_00;
  
  if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
    this_00 = ((undefined *)GEN_TOP(0x0));
  }
  else {
    this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4)));
  }
  if ((*((int *)GEN_TOP(((int)this + 0x9c))) != 0) && (this_00 != ((undefined *)GEN_TOP(0x0)))) {
    this_00 = ((undefined *)GEN_TOP(F_005eccb0(this_00 GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x9c))))));
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x9c)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1)));
    *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  }
  return (uint)this_00;
}

/* ref: FUN_005ed6f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005ed6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x5ed6f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  char * pcVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  
  F_005ed050(this GEN_EDX_FWD,param_1,0);
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = param_2;
  *((byte *)GEN_TOP(((int)this + 0x44))) =
       *((byte *)GEN_TOP(((int)this + 0x44))) ^
       (*((char *)GEN_TOP((param_3 + 0x20))) != '\0' ^ *((byte *)GEN_TOP(((int)this + 0x44)))) & 1;
  *((byte *)GEN_TOP(((int)this + 0x44))) =
       ((*((char *)GEN_TOP((param_3 + 0x21))) != '\0') * '\x02' ^ *((byte *)GEN_TOP(((int)this + 0x44)))) & 2 ^
       *((byte *)GEN_TOP(((int)this + 0x44)));
  pcVar1 = ((char *)GEN_TOP((*((int *)GEN_TOP((param_3 + 0x10))) + param_3)));
  if (*pcVar1 != '\0') {
    if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4)));
    }
    puVar2 = ((undefined4 *)GEN_TOP(F_00509330(((undefined *)GEN_TOP((iVar4 + 0x14c))) GEN_EDX_ARG,pcVar1)));
    *((undefined4 *)GEN_TOP(((int)this + 0x38))) = *puVar2;
  }
  F_00c4d9ef((int)this + 0x4c,0x10,*((int *)GEN_TOP((param_3 + 4))) + param_3,0xffffffff);
  *((int *)GEN_TOP(((int)this + 0x3c))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = param_4;
  F_005dbde0(this GEN_EDX_ARG,param_3,param_4);
  if ((*((byte *)GEN_TOP(((int)this + 0x44))) & 1) != 0) {
    if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4)));
    }
    if (*((int *)GEN_TOP((iVar4 + 0x10))) == 7) {
      *((byte *)GEN_TOP(((int)this + 0x44))) = *((byte *)GEN_TOP(((int)this + 0x44))) & 0xfe;
      if ((*((char *)GEN_TOP(((int)this + 0x48))) == '\x05') || (*((char *)GEN_TOP(((int)this + 0x48))) == '\x06')) {
        if ((*((uint *)GEN_TOP(((int)this + 0x30))) & 0xc0000000) != 0) {
          F_00b5b550(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,((undefined4 *)GEN_TOP(((int)this + 0x30))));
          *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
        }
        F_005dbde0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x3c))),*((undefined4 *)GEN_TOP(((int)this + 0x40))));
      }
      uVar3 = ~(uint)(*((byte *)GEN_TOP(((int)this + 0x44))) >> 1) & 1;
      *((char *)GEN_TOP(((int)this + 0x48))) = (uVar3 == 0) + '\x01';
      if ((*((uint *)GEN_TOP(((int)this + 0x30))) & 0xc0000000) != 0) {
        F_00b5b3e0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,(int)this + 0x30,uVar3,0xffffffff);
      }
    }
  }
  return;
}

/* ref: FUN_005ed810 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005ed810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ed810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a5864));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 0xc))) - iVar1 >> 2) * 4,0x385);
    uVar2 = (uint)uVar3;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  return uVar2;
}

/* ref: FUN_005ed860 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ed860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5ed860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint uVar7;
  undefined4 * puVar8;
  
  uVar7 = F_005dc4f0(this GEN_EDX_FWD);
  if (*param_1 != '\0') {
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 3;
    *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 3;
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = *(undefined4 *)(param_1 + 4);
    iVar2 = *(int *)(param_1 + 0x18);
    *((int *)GEN_TOP(((int)this + 0x24))) = iVar2;
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = *(undefined4 *)(param_1 + 0x1c);
    *((undefined4 *)GEN_TOP(((int)this + 0x30))) = *(undefined4 *)(param_1 + 8);
    *((undefined4 *)GEN_TOP(((int)this + 0x34))) = *(undefined4 *)(param_1 + 0xc);
    *((undefined4 *)GEN_TOP(((int)this + 0x38))) = *(undefined4 *)(param_1 + 0x10);
    if (4 < iVar2) {
      *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 1;
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x20)));
    puVar8 = puVar3;
    puVar5 = ((undefined4 *)GEN_TOP(*puVar3));
    while (puVar5 != puVar3) {
      puVar8 = ((undefined4 *)GEN_TOP(F_005e39e0(this GEN_EDX_ARG,puVar5[4],param_1)));
      if (*((char *)GEN_TOP(((int)puVar5 + 0x15))) == '\0') {
        puVar4 = ((undefined4 *)GEN_TOP(puVar5[2]));
        if (*((char *)GEN_TOP(((int)puVar4 + 0x15))) == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
          puVar8 = ((undefined4 *)GEN_TOP(*puVar4));
          while (puVar5 = puVar4, cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP(((int)*puVar8 + 0x15)));
            puVar4 = puVar8;
            puVar8 = ((undefined4 *)GEN_TOP(*puVar8));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP(((int)puVar5[1] + 0x15)));
          puVar6 = ((undefined4 *)GEN_TOP(puVar5[1]));
          puVar4 = puVar5;
          while ((puVar8 = puVar6, puVar5 = puVar8, cVar1 == '\0' &&
                 (puVar4 == ((undefined4 *)GEN_TOP(puVar8[2]))))) {
            cVar1 = *((char *)GEN_TOP(((int)puVar8[1] + 0x15)));
            puVar6 = ((undefined4 *)GEN_TOP(puVar8[1]));
            puVar4 = puVar8;
          }
        }
      }
    }
    return (uint)puVar8;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  return uVar7;
}

/* ref: FUN_005ed940 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ed940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5ed940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  uVar6 = F_005d6be0(this GEN_EDX_FWD);
  if (*param_1 == '\0') {
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    return uVar6;
  }
  F_005d6c60(this GEN_EDX_ARG,(uint)param_1);
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 0x20)));
  puVar7 = puVar2;
  puVar4 = ((undefined4 *)GEN_TOP(*puVar2));
  while (puVar4 != puVar2) {
    puVar7 = ((undefined4 *)GEN_TOP(F_005e3b70(this GEN_EDX_ARG,puVar4[4],param_1)));
    if (*((char *)GEN_TOP(((int)puVar4 + 0x15))) == '\0') {
      puVar3 = ((undefined4 *)GEN_TOP(puVar4[2]));
      if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP(((int)*puVar3 + 0x15)));
        puVar7 = ((undefined4 *)GEN_TOP(*puVar3));
        while (puVar4 = puVar3, cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar7 + 0x15)));
          puVar3 = puVar7;
          puVar7 = ((undefined4 *)GEN_TOP(*puVar7));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP(((int)puVar4[1] + 0x15)));
        puVar5 = ((undefined4 *)GEN_TOP(puVar4[1]));
        puVar3 = puVar4;
        while ((puVar7 = puVar5, puVar4 = puVar7, cVar1 == '\0' &&
               (puVar3 == ((undefined4 *)GEN_TOP(puVar7[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar7[1] + 0x15)));
          puVar5 = ((undefined4 *)GEN_TOP(puVar7[1]));
          puVar3 = puVar7;
        }
      }
    }
  }
  return (uint)puVar7;
}

/* ref: FUN_005ed9e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ed9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5ed9e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
  uVar4 = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
  uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
  uVar5 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x30)));
  uVar6 = F_005ed940(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = uVar5;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = uVar4;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = uVar3;
  return uVar6;
}

/* ref: FUN_005eda50 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005eda50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5eda50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint uVar7;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20)));
  *((byte *)GEN_TOP(((int)this + 0x16))) =
       *((byte *)GEN_TOP(((int)this + 0x16))) ^ (*((byte *)GEN_TOP(((int)this + 0x16))) ^ (byte)param_1) & 1;
  puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
  while (puVar3 != puVar2) {
    piVar4 = ((int *)GEN_TOP(puVar3[4]));
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xcc))))(piVar4 GEN_EDX_FWD);
    if ((char)uVar7 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xe0))))(piVar4 GEN_EDX_ARG,param_1);
    }
    if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
      puVar5 = ((undefined4 *)GEN_TOP(puVar3[2]));
      if (*((char *)GEN_TOP(((int)puVar5 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP(((int)*puVar5 + 0x15)));
        puVar3 = puVar5;
        puVar5 = ((undefined4 *)GEN_TOP(*puVar5));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar5 + 0x15)));
          puVar3 = puVar5;
          puVar5 = ((undefined4 *)GEN_TOP(*puVar5));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
        puVar6 = ((undefined4 *)GEN_TOP(puVar3[1]));
        puVar5 = puVar3;
        while ((puVar3 = puVar6, cVar1 == '\0' && (puVar5 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
          puVar6 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar5 = puVar3;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_005edaf0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005edaf0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x5edaf0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 0x20)));
  puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
  while (puVar3 != puVar2) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(puVar3[4])) + 0xd8))))(((int *)GEN_TOP(puVar3[4])) GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2));
    if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
      puVar4 = ((undefined4 *)GEN_TOP(puVar3[2]));
      if (*((char *)GEN_TOP(((int)puVar4 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
        puVar3 = puVar4;
        puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
          puVar3 = puVar4;
          puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
        puVar5 = ((undefined4 *)GEN_TOP(puVar3[1]));
        puVar4 = puVar3;
        while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
          puVar5 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar4 = puVar3;
        }
      }
    }
  }
  return;
}

/* ref: FUN_005edb70 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005edb70(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x5edb70u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 0x20)));
  puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
  while (puVar3 != puVar2) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(puVar3[4])) + 0x98))))
              (((int *)GEN_TOP(puVar3[4])) GEN_EDX_ARG,param_2,(undefined4)gen_fl2bits(param_3));
    if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
      puVar4 = ((undefined4 *)GEN_TOP(puVar3[2]));
      if (*((char *)GEN_TOP(((int)puVar4 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
        puVar3 = puVar4;
        puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
          puVar3 = puVar4;
          puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
        puVar5 = ((undefined4 *)GEN_TOP(puVar3[1]));
        puVar4 = puVar3;
        while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
          puVar5 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar4 = puVar3;
        }
      }
    }
  }
  return;
}

/* ref: FUN_005edbf0 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_005edbf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5edbf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  ushort uVar1;
  
  F_005eda50(this GEN_EDX_FWD,(uint)(*((char *)GEN_TOP((param_1 + 0x10))) != '\0'));
  *((byte *)GEN_TOP(((int)this + 0x16))) =
       *((byte *)GEN_TOP(((int)this + 0x16))) ^
       ((*((char *)GEN_TOP((param_1 + 0x11))) != '\0') * '\x02' ^ *((byte *)GEN_TOP(((int)this + 0x16)))) & 2;
  uVar1 = *((ushort *)GEN_TOP((param_1 + 0x18)));
  *((ushort *)GEN_TOP(((int)this + 0x12))) = uVar1;
  *((undefined2 *)GEN_TOP(((int)this + 0x14))) = *((undefined2 *)GEN_TOP((param_1 + 0x1a)));
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005edc40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5edc40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  int iVar2;
  uint * puVar3;
  
  this[0x8c] = (undefined1)
               ((byte)this[0x8c] ^
               ((*((char *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x41))) != '\0') * '\x02' ^ (byte)this[0x8c]) & 2);
  F_005ed050((undefined *)this GEN_EDX_FWD,param_1,param_2);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x14))));
  if (*(int *)(this + 8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
  }
  puVar3 = ((uint *)GEN_TOP(F_00509330(((undefined *)GEN_TOP((iVar2 + 0x14c))) GEN_EDX_ARG,param_2)));
  uVar1 = *puVar3;
  *(uint *)(this + 0x70) = uVar1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::ExitRangeLayoutInstance::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005edcb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5edcb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_005ed050((undefined *)this GEN_EDX_FWD,param_1,param_2);
  *(uint *)(this + 0x74) = *(uint *)(this + 0x74) & 0xfffffff1 | 1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::PrefetchRangeLayoutInstance::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005edce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5edce0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_005ed050((undefined *)this GEN_EDX_FWD,param_1,param_2);
  *(uint *)(this + 0x74) = *(uint *)(this + 0x74) & 0xfffffff1 | 1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::MapRangeLayoutInstance::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005edd10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5edd10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_005ed050((undefined *)this GEN_EDX_FWD,param_1,param_2);
  *(uint *)(this + 0x74) = *(uint *)(this + 0x74) & 0xfffffff1 | 1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::EventRangeLayoutInstance::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005edd40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5edd40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_005ed050((undefined *)this GEN_EDX_FWD,param_1,param_2);
  *(uint *)(this + 0x74) = *(uint *)(this + 0x74) & 0xfffffff1 | 1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::CollisionBoxLayoutInstance::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005edd70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5edd70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_005ed050((undefined *)this GEN_EDX_FWD,param_1,param_2);
  *(uint *)(this + 0x74) = *(uint *)(this + 0x74) & 0xfffffff1 | 1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::PopRangeLayoutInstance::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005edda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5edda0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_005ed050((undefined *)this GEN_EDX_FWD,param_1,param_2);
  *(undefined4 *)(this + 0x60) = 3;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::NaviMeshRangeLayoutInstance::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005eddd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5eddd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_005ed050((undefined *)this GEN_EDX_FWD,param_1,param_2);
  *(undefined4 *)(this + 0x60) = 1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::DoorRangeLayoutInstance::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ede00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5ede00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_005ed050((undefined *)this GEN_EDX_FWD,param_1,param_2);
  *(undefined4 *)(this + 0x60) = 1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::GimmickRangeLayoutInstance::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ede30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5ede30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_005ed050((undefined *)this GEN_EDX_FWD,param_1,param_2);
  *(undefined4 *)(this + 0x60) = 1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::ClickableRangeLayoutInstance::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ede60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5ede60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_005ed050((undefined *)this GEN_EDX_FWD,param_1,param_2);
  *(undefined4 *)(this + 0x60) = 1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::FateRangeLayoutInstance::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ede90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5ede90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_005ed050((undefined *)this GEN_EDX_FWD,param_1,param_2);
  *(undefined4 *)(this + 0x60) = 1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::PositionMarkerLayoutInstance::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005edec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5edec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_005ed050((undefined *)this GEN_EDX_FWD,param_1,param_2);
  *(undefined4 *)(this + 0x40) = 1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::QuestMarkerLayoutInstance::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005edef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5edef0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_005ed050((undefined *)this GEN_EDX_FWD,param_1,param_2);
  *(undefined4 *)(this + 0x40) = 2;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::TargetMarkerLayoutInstance::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005edf20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5edf20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_005ed050((undefined *)this GEN_EDX_FWD,param_1,param_2);
  *(undefined4 *)(this + 0x40) = 4;
  *(undefined4 *)(this + 0x50) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x34)));
  return uVar1;
}

/* ref: FUN_005edf50 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005edf50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5edf50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a5884));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x30))) = (*(undefined * PTR32 (*)[5])REFP(0x10a586c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x98))) = (*(undefined * PTR32 (*)[1])REFP(0x10a585c));
  iVar1 = *((int *)GEN_TOP(((int)this + 0xa0)));
  if (iVar1 != 0) {
    F_00429760(iVar1,(*((int *)GEN_TOP(((int)this + 0xa8))) - iVar1 >> 2) * 4,0x385);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0;
  uVar2 = F_005095f0(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::ClientPathLayoutInstance::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005edfd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5edfd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_005ed050((undefined *)this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::ServerPathLayoutInstance::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005edfe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5edfe0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_005ed050((undefined *)this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_005edff0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005edff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5edff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00614c10(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x0)) != *((undefined * PTR32 *)GEN_TOP(((int)this + 0x34)))) {
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x10))) + 0x12))) = 1;
  }
  return (uint)(*(undefined * PTR32 *)(gen_frame + 0x0));
}

/* ref: FUN_005ee020 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ee020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5ee020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined * pvVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00614c10(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]));
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x0));
  if ((*(undefined * PTR32 *)(gen_frame + 0x0)) != *((undefined * PTR32 *)GEN_TOP(((int)this + 0x34)))) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x10)));
    *((int *)GEN_TOP(((int)pvVar1 + 0x14U))) = *((int *)GEN_TOP(((int)pvVar1 + 0x14U))) + 1;
    *((undefined1 *)GEN_TOP(((int)pvVar1 + 0x12))) = 1;
  }
  return (uint)pvVar1;
}

/* ref: FUN_005ee060 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ee060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ee060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  undefined * pvVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00614c10(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]));
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x0));
  if ((*(undefined * PTR32 *)(gen_frame + 0x0)) != *((undefined * PTR32 *)GEN_TOP(((int)this + 0x34)))) {
    pvVar1 = ((undefined *)GEN_TOP(F_005d8ee0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x10))) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]))));
  }
  return (uint)pvVar1;
}

/* ref: FUN_005ee0a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005ee0a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5ee0a0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  uint param_1 = (uint)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  memcpy(&gen_args[1], &gen_a2, sizeof gen_a2);
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  (*(uint *)(gen_frame + 0x0)) = param_1;
  F_00614c10(((undefined *)GEN_TOP((param_1 + 0x30))) GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]));
  uVar2 = (*(uint *)(gen_frame + 0x0));
  if ((*(uint *)(gen_frame + 0x0)) != *((uint *)GEN_TOP((param_1 + 0x34)))) {
    iVar1 = *((int *)GEN_TOP(((*(uint *)(gen_frame + 0x0)) + 0x10)));
    bVar3 = GEN_ISNAN((float10)*((float *)GEN_TOP((iVar1 + 0x24)))) || GEN_ISNAN((float10)(*(float *)&gen_args[1]));
    uVar2 = (*(uint *)(gen_frame + 0x0)) & 0xff;
    if (bVar3 == (bVar3 || (float10)*((float *)GEN_TOP((iVar1 + 0x24))) == (float10)(*(float *)&gen_args[1]))) {
      *((float *)GEN_TOP((iVar1 + 0x24))) = (*(float *)&gen_args[1]);
      *((undefined1 *)GEN_TOP((iVar1 + 0x12))) = 1;
    }
  }
  return (byte)uVar2;
}

/* ref: FUN_005ee0f0 */
GEN_OWN GEN_FRAME double GEN_THISCALL F_005ee0f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5ee0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  float fVar1;
  uint uVar2;
  int iVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00614c80(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(uint *)&gen_args[0]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x0)) != *((undefined * PTR32 *)GEN_TOP(((int)this + 0x34)))) {
    fVar1 = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x10))) + 0x24)));
    return (double)fVar1;
  }
  iVar3 = 0;
  uVar2 = 0;
  do {
    if (((*(uint *)&gen_args[0]) & 0xff) == *((uint *)GEN_TOP(((int)&REFG(undefined4, 0x10a2810) + uVar2)))) {
      fVar1 = (&REFG(float, 0x10a2824))[(int)(iVar3 * 10)];
      return (double)fVar1;
    }
    uVar2 = uVar2 + 0x28;
    iVar3 = iVar3 + 1;
  } while (uVar2 < 0x208);
  return (double)REFG(float, 0x10a2824);
}

/* ref: FUN_005ee160 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ee160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5ee160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  int iVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00614c80(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(uint *)&gen_args[0]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x0)) != *((undefined * PTR32 *)GEN_TOP(((int)this + 0x34)))) {
    uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x10))) + 0x18)));
    return uVar1;
  }
  iVar2 = 0;
  uVar1 = 0;
  do {
    if (((*(uint *)&gen_args[0]) & 0xff) == *((uint *)GEN_TOP(((int)&REFG(undefined4, 0x10a2810) + uVar1)))) {
      uVar1 = (&REFG(undefined4, 0x10a2818))[(int)(iVar2 * 10)];
      return uVar1;
    }
    uVar1 = uVar1 + 0x28;
    iVar2 = iVar2 + 1;
  } while (uVar1 < 0x208);
  return REFG(undefined4, 0x10a2818);
}

/* ref: FUN_005ee1d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ee1d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5ee1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00614c80(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(uint *)&gen_args[0]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x0)) != *((undefined * PTR32 *)GEN_TOP(((int)this + 0x34)))) {
    uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x10))) + 100)));
    return (uint)uVar1;
  }
  iVar3 = 0;
  uVar2 = 0;
  do {
    if (((*(uint *)&gen_args[0]) & 0xff) == *((uint *)GEN_TOP(((int)&REFG(undefined4, 0x10a2810) + uVar2)))) {
      uVar2 = (&REFG(undefined4, 0x10a2814))[(int)(iVar3 * 10)];
      return uVar2;
    }
    uVar2 = uVar2 + 0x28;
    iVar3 = iVar3 + 1;
  } while (uVar2 < 0x208);
  return REFG(undefined4, 0x10a2814);
}

/* ref: FUN_005ee240 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ee240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ee240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00614c80(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x0)) != *((undefined * PTR32 *)GEN_TOP(((int)this + 0x34)))) {
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x10)));
    *(*(undefined1 * PTR32 *)&gen_args[1]) = *((undefined1 *)GEN_TOP((iVar1 + 0x1c)));
    return iVar1 + 0x68;
  }
  return 0;
}

/* ref: FUN_005ee280 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_005ee280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5ee280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  float fVar1;
  uint uVar2;
  int iVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00614c80(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(uint *)&gen_args[0]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x0)) != *((undefined * PTR32 *)GEN_TOP(((int)this + 0x34)))) {
    fVar1 = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x10))) + 0x28)));
    return fVar1;
  }
  iVar3 = 0;
  uVar2 = 0;
  do {
    if (((*(uint *)&gen_args[0]) & 0xff) == *((uint *)GEN_TOP(((int)&REFG(undefined4, 0x10a2810) + uVar2)))) {
      fVar1 = (&REFG(float, 0x10a2824))[(int)(iVar3 * 10)];
      return fVar1;
    }
    uVar2 = uVar2 + 0x28;
    iVar3 = iVar3 + 1;
  } while (uVar2 < 0x208);
  return REFG(float, 0x10a2824);
}

/* ref: FUN_005ee2f0 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_005ee2f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5ee2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  float fVar1;
  uint uVar2;
  int iVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00614c80(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(uint *)&gen_args[0]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x0)) != *((undefined * PTR32 *)GEN_TOP(((int)this + 0x34)))) {
    fVar1 = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x10))) + 0x2c)));
    return fVar1;
  }
  iVar3 = 0;
  uVar2 = 0;
  do {
    if (((*(uint *)&gen_args[0]) & 0xff) == *((uint *)GEN_TOP(((int)&REFG(undefined4, 0x10a2810) + uVar2)))) {
      fVar1 = (&REFG(float, 0x10a282c))[(int)(iVar3 * 10)];
      return fVar1;
    }
    uVar2 = uVar2 + 0x28;
    iVar3 = iVar3 + 1;
  } while (uVar2 < 0x208);
  return REFG(float, 0x10a282c);
}

/* ref: FUN_005ee360 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_005ee360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5ee360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  float fVar1;
  uint uVar2;
  int iVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00614c80(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(uint *)&gen_args[0]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x0)) != *((undefined * PTR32 *)GEN_TOP(((int)this + 0x34)))) {
    fVar1 = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x10))) + 0x30)));
    return fVar1;
  }
  iVar3 = 0;
  uVar2 = 0;
  do {
    if (((*(uint *)&gen_args[0]) & 0xff) == *((uint *)GEN_TOP(((int)&REFG(undefined4, 0x10a2810) + uVar2)))) {
      fVar1 = (&REFG(float, 0x10a2834))[(int)(iVar3 * 10)];
      return fVar1;
    }
    uVar2 = uVar2 + 0x28;
    iVar3 = iVar3 + 1;
  } while (uVar2 < 0x208);
  return REFG(float, 0x10a2834);
}

/* ref: FUN_005ee3d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005ee3d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5ee3d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  float * pfVar1;
  undefined4 uVar2;
  float fVar3;
  undefined * this_00;
  double dVar4;
  double dVar5;
  undefined4 * puVar6;
  float * pfVar7;
  float * pfVar8;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
  *((undefined1 *)GEN_TOP(((int)this + 0x18))) = 0;
  if (*((char *)GEN_TOP(((int)this_00 + 0x55))) != '\0') {
    return;
  }
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP(((int)this + 0x10))))) {
  case 0: ;
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = *((undefined4 *)GEN_TOP(((int)this_00 + 0x60)));
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = *((undefined4 *)GEN_TOP(((int)this_00 + 100)));
    uVar2 = *((undefined4 *)GEN_TOP(((int)this_00 + 0x68)));
    goto LAB_005ee448;
  case 1: ;
    F_005ec040(this GEN_EDX_FWD,(int)this + 0x20);
    break;
  case 2: ;
    *((undefined1 *)GEN_TOP(((int)this + 0x18))) = 1;
    F_005e99d0((int)this + 0x20);
    break;
  case 3: ;
    F_005d8d70((int)this + 0x20);
    break;
  case 4: ;
  case 5: ;
    puVar6 = ((undefined4 *)GEN_TOP(F_005d5c20(this_00 GEN_EDX_ARG)));
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = *puVar6;
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = puVar6[1];
    uVar2 = puVar6[2];
LAB_005ee448: ;
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = uVar2;
  }
  dVar5 = *(double *)&REFG(undefined, 0x10a5998);
  dVar4 = *(double *)&REFG(undefined, 0x10912a8);
  fVar3 = *((float *)GEN_TOP(((int)this + 0x20)));
  pfVar1 = ((float *)GEN_TOP(((int)this + 0x20)));
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1094724);
  (*(float *)(gen_frame + 0x0)) = REFG(float, 0x10a59a0);
  pfVar8 = pfVar1;
  if (!((double)fVar3 < *(double *)&REFG(undefined, 0x10912a8))) {
    pfVar8 = &(*(float *)(gen_frame + 0x4));
  }
  if (!(*(double *)&REFG(undefined, 0x10a5998) < (double)*pfVar8)) {
    pfVar8 = &(*(float *)(gen_frame + 0x0));
  }
  pfVar7 = ((float *)GEN_TOP(((int)this + 0x24)));
  *pfVar1 = *pfVar8;
  if (!((double)*((float *)GEN_TOP(((int)this + 0x24))) < dVar4)) {
    pfVar7 = &(*(float *)(gen_frame + 0x4));
  }
  if (!(dVar5 < (double)*pfVar7)) {
    pfVar7 = &(*(float *)(gen_frame + 0x0));
  }
  pfVar8 = ((float *)GEN_TOP(((int)this + 0x28)));
  *((float *)GEN_TOP(((int)this + 0x24))) = *pfVar7;
  if (!((double)*((float *)GEN_TOP(((int)this + 0x28))) < dVar4)) {
    pfVar8 = &(*(float *)(gen_frame + 0x4));
  }
  if (!(dVar5 < (double)*pfVar8)) {
    pfVar8 = &(*(float *)(gen_frame + 0x0));
  }
  *((float *)GEN_TOP(((int)this + 0x28))) = *pfVar8;
  F_005e1470(*((undefined4 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,pfVar1,(undefined1)param_1);
  return;
}

/* ref: FUN_005ee510 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005ee510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5ee510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar4 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x6c)))));
  if (piVar4 != *((int * PTR32 *)GEN_TOP(((int)this + 0x6c)))) {
    do {
      if (param_1 == piVar4[4]) {
        piVar4[4] = 0;
      }
      if (*((char *)GEN_TOP(((int)piVar4 + 0x15))) == '\0') {
        piVar2 = ((int *)GEN_TOP(piVar4[2]));
        if (*((char *)GEN_TOP(((int)piVar2 + 0x15))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
          piVar4 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
            piVar4 = piVar2;
            piVar2 = ((int *)GEN_TOP(*piVar2));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x15)));
          piVar3 = ((int *)GEN_TOP(piVar4[1]));
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar4[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x15)));
            piVar3 = ((int *)GEN_TOP(piVar4[1]));
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != *((int * PTR32 *)GEN_TOP(((int)this + 0x6c))));
  }
  piVar4 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 0x7c)))));
  if (piVar4 != *((int * PTR32 *)GEN_TOP(((int)this + 0x7c)))) {
    do {
      if (param_1 == piVar4[4]) {
        piVar4[4] = 0;
      }
      if (*((char *)GEN_TOP(((int)piVar4 + 0x15))) == '\0') {
        piVar2 = ((int *)GEN_TOP(piVar4[2]));
        if (*((char *)GEN_TOP(((int)piVar2 + 0x15))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
          piVar4 = piVar2;
          piVar2 = ((int *)GEN_TOP(*piVar2));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar2 + 0x15)));
            piVar4 = piVar2;
            piVar2 = ((int *)GEN_TOP(*piVar2));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x15)));
          piVar3 = ((int *)GEN_TOP(piVar4[1]));
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == ((int *)GEN_TOP(piVar4[2]))))) {
            cVar1 = *((char *)GEN_TOP((piVar4[1] + 0x15)));
            piVar3 = ((int *)GEN_TOP(piVar4[1]));
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != *((int * PTR32 *)GEN_TOP(((int)this + 0x7c))));
  }
  return 0;
}

/* ref: FUN_005ee5c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005ee5c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ee5c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int * piVar6;
  uint uVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x8c)));
  puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
  while (puVar3 != puVar2) {
    puVar4 = ((undefined4 *)GEN_TOP(puVar3[6]));
    puVar5 = ((undefined4 *)GEN_TOP(*puVar4));
    while (puVar5 != puVar4) {
      piVar6 = ((int *)GEN_TOP(puVar5[3]));
      uVar7 = piVar6[9];
      if ((uVar7 & 1) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x70))))(piVar6 GEN_EDX_FWD);
      }
      if ((uVar7 & 2) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x80))))(piVar6 GEN_EDX_ARG);
      }
      if (*((char *)GEN_TOP(((int)puVar5 + 0x11))) == '\0') {
        puVar8 = ((undefined4 *)GEN_TOP(puVar5[2]));
        if (*((char *)GEN_TOP(((int)puVar8 + 0x11))) == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar8 + 0x11)));
          puVar5 = puVar8;
          puVar8 = ((undefined4 *)GEN_TOP(*puVar8));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP(((int)*puVar8 + 0x11)));
            puVar5 = puVar8;
            puVar8 = ((undefined4 *)GEN_TOP(*puVar8));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP(((int)puVar5[1] + 0x11)));
          puVar9 = ((undefined4 *)GEN_TOP(puVar5[1]));
          puVar8 = puVar5;
          while ((puVar5 = puVar9, cVar1 == '\0' && (puVar8 == ((undefined4 *)GEN_TOP(puVar5[2]))))) {
            cVar1 = *((char *)GEN_TOP(((int)puVar5[1] + 0x11)));
            puVar9 = ((undefined4 *)GEN_TOP(puVar5[1]));
            puVar8 = puVar5;
          }
        }
      }
    }
    if (*((char *)GEN_TOP(((int)puVar3 + 0x25))) == '\0') {
      puVar4 = ((undefined4 *)GEN_TOP(puVar3[2]));
      if (*((char *)GEN_TOP(((int)puVar4 + 0x25))) == '\0') {
        cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x25)));
        puVar3 = puVar4;
        puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x25)));
          puVar3 = puVar4;
          puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x25)));
        puVar5 = ((undefined4 *)GEN_TOP(puVar3[1]));
        puVar4 = puVar3;
        while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x25)));
          puVar5 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar4 = puVar3;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_005ee6d0 */
GEN_OWN GEN_NOFRAME byte F_005ee6d0(void)
{
  GEN_ENTER(0x5ee6d0u, 0u, 0u, 0u, 0u);
  if ((REFG(void * PTR32, 0x1379cb0) != ((undefined *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1379cb0) + 0x10))) != 0)) {
    F_005ec540(REFG(void * PTR32, 0x1379cb0) GEN_EDX_ARG);
    F_005ec400(REFG(void * PTR32, 0x1379cb0) GEN_EDX_ARG,1);
  }
  return 1;
}

/* ref: Client::LayoutEngine::LayoutWorld::vf3 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005ee700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5ee700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined * this_00;
  undefined4 * puVar4;
  byte bVar5;
  undefined4 * puVar6;
  
  if (((*(int *)(this + 0x14) != 0) && (*(int *)(this + 0x180) != 0)) &&
     (4 < *((int *)GEN_TOP((*(int *)(this + 0x14) + 0x10))))) {
    F_005ec540(this GEN_EDX_FWD);
  }
  puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0xc))))(*(int * PTR32 *)(this + 0x10) GEN_EDX_ARG,param_1)));
  if (*(int *)(this + 0x44) != 0) {
    puVar2 = *(undefined4 * PTR32 *)(this + 0x40);
    puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
    while (puVar3 != puVar2) {
      puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(puVar3[6])) + 0xc))))(((int *)GEN_TOP(puVar3[6])) GEN_EDX_ARG,param_1)));
      if (*((char *)GEN_TOP(((int)puVar3 + 0x21))) == '\0') {
        puVar6 = ((undefined4 *)GEN_TOP(puVar3[2]));
        if (*((char *)GEN_TOP(((int)puVar6 + 0x21))) == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar6 + 0x21)));
          puVar3 = puVar6;
          puVar6 = ((undefined4 *)GEN_TOP(*puVar6));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP(((int)*puVar6 + 0x21)));
            puVar3 = puVar6;
            puVar6 = ((undefined4 *)GEN_TOP(*puVar6));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x21)));
          puVar6 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar4 = puVar3;
          while ((puVar3 = puVar6, puVar6 = puVar3, cVar1 == '\0' &&
                 (puVar4 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
            cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x21)));
            puVar6 = ((undefined4 *)GEN_TOP(puVar3[1]));
            puVar4 = puVar3;
          }
        }
      }
    }
  }
  if (*(int *)(this + 0x34) != 0) {
    puVar2 = *(undefined4 * PTR32 *)(this + 0x30);
    puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
    while (puVar3 != puVar2) {
      puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(puVar3[6])) + 0xc))))(((int *)GEN_TOP(puVar3[6])) GEN_EDX_ARG,param_1)));
      if (*((char *)GEN_TOP(((int)puVar3 + 0x21))) == '\0') {
        puVar6 = ((undefined4 *)GEN_TOP(puVar3[2]));
        if (*((char *)GEN_TOP(((int)puVar6 + 0x21))) == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar6 + 0x21)));
          puVar3 = puVar6;
          puVar6 = ((undefined4 *)GEN_TOP(*puVar6));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP(((int)*puVar6 + 0x21)));
            puVar3 = puVar6;
            puVar6 = ((undefined4 *)GEN_TOP(*puVar6));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x21)));
          puVar6 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar4 = puVar3;
          while ((puVar3 = puVar6, puVar6 = puVar3, cVar1 == '\0' &&
                 (puVar4 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
            cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x21)));
            puVar6 = ((undefined4 *)GEN_TOP(puVar3[1]));
            puVar4 = puVar3;
          }
        }
      }
    }
  }
  this_00 = *(undefined * PTR32 *)(this + 0x20);
  if (*((int *)GEN_TOP(((int)this_00 + 0x14))) != 0) {
    if (*((int *)GEN_TOP(((int)this_00 + 8))) == 1) {
      bVar5 = F_005e9e00(this_00 GEN_EDX_ARG);
      puVar6 = ((undefined4 *)GEN_TOP((uint)bVar5));
      if (bVar5 != 0) {
        bVar5 = F_005e9e80(this_00 GEN_EDX_ARG);
        puVar6 = ((undefined4 *)GEN_TOP((uint)bVar5));
      }
    }
    else {
      puVar6 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this_00 + 8))) - 2)));
      if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
        bVar5 = F_005e9f00(this_00 GEN_EDX_ARG);
        puVar6 = ((undefined4 *)GEN_TOP((uint)bVar5));
        if (bVar5 != 0) {
          *((undefined4 *)GEN_TOP(((int)this_00 + 8))) = 3;
          return bVar5;
        }
      }
    }
  }
  return (byte)puVar6;
}

/* ref: FUN_005ee840 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005ee840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ee840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint * puVar6;
  
  uVar4 = (*(uint *)&gen_args[1]);
  uVar2 = (uint)(*(undefined * PTR32 *)&gen_args[0]);
  if (*((int *)GEN_TOP(((int)this + 0x34))) != 0) {
    (*(uint *)(gen_frame + 0x0)) = (*(uint *)&gen_args[1]);
    (*(uint *)(gen_frame + 0x4)) = (uint)(*(undefined * PTR32 *)&gen_args[0]);
    (*(undefined * PTR32 *)&gen_args[0]) = ((undefined *)GEN_TOP(((int)this + 0x2c)));
    uVar5 = F_0060aeb0(((undefined *)GEN_TOP(((int)this + 0x2c))) GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x0)));
    uVar1 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    (*(uint *)&gen_args[1]) = uVar5;
    if (((uVar5 == uVar1) || (uVar2 < *((uint *)GEN_TOP((uVar5 + 0x14))))) ||
       ((uVar2 <= *((uint *)GEN_TOP((uVar5 + 0x14))) && (uVar4 < *((uint *)GEN_TOP((uVar5 + 0x10))))))) {
      (*(uint *)(gen_frame + 0x4)) = uVar1;
      puVar6 = &(*(uint *)(gen_frame + 0x4));
    }
    else {
      puVar6 = &(*(uint *)&gen_args[1]);
    }
    uVar2 = *puVar6;
    if (uVar2 != *((uint *)GEN_TOP(((int)this + 0x30)))) {
      piVar3 = *((int * PTR32 *)GEN_TOP((uVar2 + 0x18)));
      if (*((int * PTR32 *)GEN_TOP(((int)this + 0x14))) == piVar3) {
        *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
      }
      if (*((int * PTR32 *)GEN_TOP(((int)this + 0x1c))) == piVar3) {
        *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
      }
      if (*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) == piVar3) {
        *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar3)))(piVar3 GEN_EDX_ARG,1);
      F_006143c0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined * PTR32 *)&gen_args[0]),uVar2);
    }
  }
  return;
}

/* ref: FUN_005ee8f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ee8f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ee8f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  
  uVar3 = (*(uint *)&gen_args[1]);
  uVar2 = (*(uint *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if ((*(uint *)&gen_args[0]) == 0xffff) {
    return *((uint *)GEN_TOP(((int)this + 0x10)));
  }
  if ((*(uint *)&gen_args[0]) == 0xffffffff) {
    return *((uint *)GEN_TOP(((int)this + 0x14)));
  }
  (*(uint *)(gen_frame + 0x0)) = (*(uint *)&gen_args[1]);
  (*(uint *)(gen_frame + 0x4)) = (*(uint *)&gen_args[0]);
  uVar4 = F_0060aeb0(((undefined *)GEN_TOP(((int)this + 0x2c))) GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x0)));
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x30)));
  (*(uint *)&gen_args[0]) = uVar4;
  if (((uVar4 == uVar1) || (uVar2 < *((uint *)GEN_TOP((uVar4 + 0x14))))) ||
     ((uVar2 <= *((uint *)GEN_TOP((uVar4 + 0x14))) && (uVar3 < *((uint *)GEN_TOP((uVar4 + 0x10))))))) {
    (*(uint *)&gen_args[1]) = uVar1;
    piVar5 = (int *)&(*(uint *)&gen_args[1]);
  }
  else {
    piVar5 = (int *)&(*(uint *)&gen_args[0]);
  }
  if (*piVar5 != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x30)))) {
    return *((uint *)GEN_TOP((*piVar5 + 0x18)));
  }
  return 0;
}

/* ref: FUN_005ee980 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005ee980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5ee980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = (*(int *)&gen_args[0]);
  if (((*(int *)&gen_args[0]) != 0) &&
     (F_006146e0(((undefined *)GEN_TOP(((int)this + 0x178))) GEN_EDX_FWD,&(*(int *)(gen_frame + 0x4)),&(*(int *)&gen_args[0])),
     (*(int *)(gen_frame + 0x4)) == *((int *)GEN_TOP(((int)this + 0x17c))))) {
    F_00513f60(iVar1,0,0);
    puVar2 = ((undefined4 *)GEN_TOP(F_004296a0(0x14,0,900)));
    *puVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x17c)));
    puVar2[1] = *((undefined4 *)GEN_TOP(((int)this + 0x17c)));
    puVar2[2] = *((undefined4 *)GEN_TOP(((int)this + 0x17c)));
    *(undefined2 *)(puVar2 + 4) = 0;
    if (puVar2 + 3 != ((int *)GEN_TOP(0x0))) {
      puVar2[3] = iVar1;
    }
    F_00617d20(((undefined *)GEN_TOP(((int)this + 0x178))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar2,0);
  }
  return;
}

/* ref: FUN_005eea10 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005eea10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5eea10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  if ((*(int * PTR32 *)&gen_args[0]) != ((int *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x20))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
    if (uVar3 != 0) {
      F_005ee980(this GEN_EDX_ARG,uVar3);
      return;
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x5c))))(piVar1 GEN_EDX_ARG);
    if (uVar3 != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG);
      bVar2 = F_005e9bb0(this GEN_EDX_ARG,uVar3);
      if (bVar2 != 0) {
        (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(F_00513dc0(uVar3,0,0,0)));
        F_00619c50(((undefined *)GEN_TOP(((int)this + 0x178))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),&(*(int * PTR32 *)&gen_args[0]));
      }
    }
  }
  return;
}

/* ref: FUN_005eea90 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005eea90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5eea90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  uVar5 = *((int *)GEN_TOP((param_1 + 0x7c))) - *((int *)GEN_TOP((param_1 + 0x78))) >> 2;
  (*(uint *)(gen_frame + 0x8)) = uVar5;
  (*(uint *)(gen_frame + 0xc)) = 0;
  if (uVar5 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x78))) + (*(uint *)(gen_frame + 0xc)) * 4))) + 0x10)));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x20))))(piVar1 GEN_EDX_FWD);
        if (uVar3 == 0) {
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x5c))))(piVar1 GEN_EDX_ARG);
          if (uVar3 != 0) {
            uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG);
            bVar2 = F_005e9bb0(this GEN_EDX_ARG,uVar3);
            if (bVar2 != 0) {
              uVar5 = F_00513dc0(uVar3,0,0,0);
              puVar4 = ((undefined4 *)GEN_TOP(F_004296a0(0x14,0,900)));
              *puVar4 = *((undefined4 *)GEN_TOP(((int)this + 0x17c)));
              puVar4[1] = *((undefined4 *)GEN_TOP(((int)this + 0x17c)));
              puVar4[2] = *((undefined4 *)GEN_TOP(((int)this + 0x17c)));
              *(undefined2 *)(puVar4 + 4) = 0;
              if (puVar4 + 3 != ((uint *)GEN_TOP(0x0))) {
                puVar4[3] = uVar5;
              }
              F_00617d20(((undefined *)GEN_TOP(((int)this + 0x178))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),puVar4,0);
              uVar5 = (*(uint *)(gen_frame + 0x8));
            }
          }
        }
        else {
          F_005ee980(this GEN_EDX_ARG,uVar3);
        }
      }
      uVar3 = (*(uint *)(gen_frame + 0xc)) + 1;
      (*(uint *)(gen_frame + 0xc)) = uVar3;
    } while (uVar3 < uVar5);
  }
  return 0;
}

/* ref: FUN_005eeb90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005eeb90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5eeb90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 0x44)));
    F_00614c80(((undefined *)GEN_TOP((iVar1 + 0x30))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]));
    if ((*(undefined * PTR32 *)(gen_frame + 0x0)) != *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x34)))) {
      iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x10)));
      *(*(undefined1 * PTR32 *)&gen_args[1]) = *((undefined1 *)GEN_TOP((iVar1 + 0x1c)));
      return iVar1 + 0x68;
    }
  }
  return 0;
}

/* ref: FUN_005eebe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005eebe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5eebe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  undefined * pvVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  pvVar2 = ((undefined *)GEN_TOP(0x0));
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 0x44)));
    F_00614c10(((undefined *)GEN_TOP((iVar1 + 0x30))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]));
    pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x0));
    if ((*(undefined * PTR32 *)(gen_frame + 0x0)) != *((undefined * PTR32 *)GEN_TOP((iVar1 + 0x34)))) {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x10)));
      *((undefined1 *)GEN_TOP(((int)pvVar2 + 0x12))) = 1;
    }
  }
  return (uint)pvVar2;
}

/* ref: FUN_005eec20 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_005eec20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5eec20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  double dVar1;
  undefined3 in_stack_00000005;
  
  if (*((int *)GEN_TOP((param_1 + 0x14))) != 0) {
    dVar1 = F_005ee0f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x14))) + 0x44))) GEN_EDX_FWD,*(undefined4 *)&(*(byte *)&gen_args[0]));
    return (float10)dVar1;
  }
  return (float10)*((float *)GEN_TOP((param_1 + 0x4c + (uint)(*(byte *)&gen_args[0]) * 4)));
}

/* ref: FUN_005eec40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005eec40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5eec40u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  uint param_1 = (uint)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  memcpy(&gen_args[1], &gen_a2, sizeof gen_a2);
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  (*(uint *)(gen_frame + 0x0)) = param_1;
  *((float *)GEN_TOP((param_1 + 0x4c + ((*(uint *)&gen_args[0]) & 0xff) * 4))) = (*(float *)&gen_args[1]);
  uVar2 = 0;
  if (*((int *)GEN_TOP((param_1 + 0x14))) != 0) {
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x14))) + 0x44)));
    F_00614c10(((undefined *)GEN_TOP((iVar1 + 0x30))) GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x0)),&(*(uint *)&gen_args[0]));
    uVar2 = (*(uint *)(gen_frame + 0x0));
    if ((*(uint *)(gen_frame + 0x0)) != *((uint *)GEN_TOP((iVar1 + 0x34)))) {
      iVar1 = *((int *)GEN_TOP(((*(uint *)(gen_frame + 0x0)) + 0x10)));
      bVar3 = GEN_ISNAN((float10)*((float *)GEN_TOP((iVar1 + 0x24)))) || GEN_ISNAN((float10)(*(float *)&gen_args[1]));
      uVar2 = (*(uint *)(gen_frame + 0x0)) & 0xff;
      if (bVar3 == (bVar3 || (float10)*((float *)GEN_TOP((iVar1 + 0x24))) == (float10)(*(float *)&gen_args[1]))) {
        *((float *)GEN_TOP((iVar1 + 0x24))) = (*(float *)&gen_args[1]);
        *((undefined1 *)GEN_TOP((iVar1 + 0x12))) = 1;
      }
    }
  }
  return (byte)uVar2;
}

/* ref: FUN_005eecb0 */
GEN_OWN GEN_FRAME double GEN_THISCALL F_005eecb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5eecb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  float fVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    fVar1 = F_005ee280(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 0x44))) GEN_EDX_FWD,param_1);
    return (double)fVar1;
  }
  return 0.0;
}

/* ref: FUN_005eecd0 */
GEN_OWN GEN_FRAME double GEN_THISCALL F_005eecd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5eecd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  float fVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    fVar1 = F_005ee2f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 0x44))) GEN_EDX_FWD,param_1);
    return (double)fVar1;
  }
  return 0.0;
}

/* ref: FUN_005eecf0 */
GEN_OWN GEN_FRAME double GEN_THISCALL F_005eecf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5eecf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  float fVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    fVar1 = F_005ee360(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 0x44))) GEN_EDX_FWD,param_1);
    return (double)fVar1;
  }
  return 0.0;
}

/* ref: FUN_005eed10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005eed10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5eed10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int * piVar2;
  int * piVar3;
  code * pcVar4;
  int * piVar5;
  int * piVar6;
  int * piVar7;
  
  (*(int * PTR32 *)(gen_frame + 0x0)) = this;
  F_00619550(((undefined *)GEN_TOP(((int)this + 0x13c))) GEN_EDX_FWD,&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]));
  piVar7 = (*(int * PTR32 *)(gen_frame + 0x0));
  if ((*(int * PTR32 *)(gen_frame + 0x0)) != *((int * PTR32 *)GEN_TOP(((int)this + 0x140)))) {
    piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x0))[4]));
    piVar2 = ((int *)GEN_TOP(piVar7[1]));
    piVar5 = ((int *)GEN_TOP(*piVar2));
    while (piVar5 != piVar2) {
      piVar3 = ((int *)GEN_TOP(piVar5[6]));
      pcVar4 = *((gen_code32 *)GEN_TOP((*piVar3 + 0xcc)));
      piVar7 = ((int *)GEN_TOP((*pcVar4)(piVar3)));
      if ((char)piVar7 != '\0') {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xe0))))(piVar3 GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 200))))(piVar3 GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]))));
      }
      if (*((char *)GEN_TOP(((int)piVar5 + 0x21))) == '\0') {
        piVar3 = ((int *)GEN_TOP(piVar5[2]));
        if (*((char *)GEN_TOP(((int)piVar3 + 0x21))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar3 + 0x21)));
          piVar7 = ((int *)GEN_TOP(*piVar3));
          while (piVar5 = piVar3, cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar7 + 0x21)));
            piVar3 = piVar7;
            piVar7 = ((int *)GEN_TOP(*piVar7));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar5[1] + 0x21)));
          piVar6 = ((int *)GEN_TOP(piVar5[1]));
          piVar3 = piVar5;
          while ((piVar7 = piVar6, piVar5 = piVar7, cVar1 == '\0' && (piVar3 == ((int *)GEN_TOP(piVar7[2])))))
          {
            cVar1 = *((char *)GEN_TOP((piVar7[1] + 0x21)));
            piVar6 = ((int *)GEN_TOP(piVar7[1]));
            piVar3 = piVar7;
          }
        }
      }
    }
  }
  return (uint)piVar7;
}

/* ref: FUN_005eede0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005eede0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5eede0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 0x110)));
  *((undefined1 *)GEN_TOP((param_1 + 0x50))) = (undefined1)param_2;
  puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
  while (puVar3 != puVar2) {
    if ((param_3 == '\0') || (*((int *)GEN_TOP(((int)puVar3[4] + 8))) != 0xffff)) {
      F_005eda50(((undefined *)GEN_TOP(puVar3[4])) GEN_EDX_FWD,param_2);
    }
    if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
      puVar4 = ((undefined4 *)GEN_TOP(puVar3[2]));
      if (*((char *)GEN_TOP(((int)puVar4 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
        puVar3 = puVar4;
        puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar4 + 0x15)));
          puVar3 = puVar4;
          puVar4 = ((undefined4 *)GEN_TOP(*puVar4));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
        puVar5 = ((undefined4 *)GEN_TOP(puVar3[1]));
        puVar4 = puVar3;
        while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
          puVar5 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar4 = puVar3;
        }
      }
    }
  }
  return;
}

/* ref: FUN_005eee70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005eee70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5eee70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int * piVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  piVar1 = ((int *)GEN_TOP(F_00619470(((undefined *)GEN_TOP(((int)this + 0x10c))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]))));
  if (*piVar1 != *((int *)GEN_TOP(((int)this + 0x110)))) {
    return *((uint *)GEN_TOP((*piVar1 + 0x10)));
  }
  return 0;
}

/* ref: FUN_005eeeb0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005eeeb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5eeeb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *((int *)GEN_TOP(((int)this + 0xf0))) - *((int *)GEN_TOP(((int)this + 0xec))) >> 2;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xec))) + uVar3 * 4))) != 0) {
        F_0050c620(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xec))) + uVar3 * 4))),0,0);
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xec))) + uVar3 * 4))) = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0xec)));
  if (iVar1 != *((int *)GEN_TOP(((int)this + 0xf0)))) {
    F_00c46e20(iVar1,*((int *)GEN_TOP(((int)this + 0xf0))),0);
    *((int *)GEN_TOP(((int)this + 0xf0))) = iVar1;
  }
  return;
}

/* ref: FUN_005eef40 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005eef40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5eef40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *((int *)GEN_TOP(((int)this + 0xe0))) - *((int *)GEN_TOP(((int)this + 0xdc))) >> 2;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xdc))) + uVar3 * 4))) != 0) {
        F_0050c620(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xdc))) + uVar3 * 4))),0,0);
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xdc))) + uVar3 * 4))) = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0xdc)));
  if (iVar1 != *((int *)GEN_TOP(((int)this + 0xe0)))) {
    F_00c46e20(iVar1,*((int *)GEN_TOP(((int)this + 0xe0))),0);
    *((int *)GEN_TOP(((int)this + 0xe0))) = iVar1;
  }
  return;
}

/* ref: FUN_005eefd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005eefd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5eefd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  code * pcVar5;
  undefined4 * puVar6;
  undefined * pvVar7;
  undefined4 * puVar8;
  uint uVar9;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  if ((*(int *)&gen_args[0]) != -1) {
    uVar9 = F_00619400(((undefined *)GEN_TOP(((int)this + 0xfc))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(int *)&gen_args[0]));
    pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x0));
    if ((*(undefined * PTR32 *)(gen_frame + 0x0)) != *((undefined * PTR32 *)GEN_TOP(((int)this + 0x100)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x10))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x10))) GEN_EDX_ARG);
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar7 + 0x10)));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
        *((undefined4 *)GEN_TOP(((int)pvVar7 + 0x10))) = 0;
      }
      uVar9 = F_00614d60(((undefined *)GEN_TOP(((int)this + 0xfc))) GEN_EDX_ARG,&(*(int *)&gen_args[0]),pvVar7);
    }
    return uVar9;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x100)));
  puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
  (*(int *)&gen_args[0]) = 0xffffffff;
  while (puVar3 != puVar2) {
    piVar4 = ((int *)GEN_TOP(puVar3[4]));
    pcVar5 = *((gen_code32 *)GEN_TOP((*piVar4 + 8)));
    (*pcVar5)(piVar4);
    puVar6 = ((undefined4 *)GEN_TOP(puVar3[4]));
    if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar6)))(puVar6 GEN_EDX_ARG,1);
      puVar3[4] = 0;
    }
    if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
      puVar6 = ((undefined4 *)GEN_TOP(puVar3[2]));
      if (*((char *)GEN_TOP(((int)puVar6 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP(((int)*puVar6 + 0x15)));
        puVar3 = puVar6;
        puVar6 = ((undefined4 *)GEN_TOP(*puVar6));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar6 + 0x15)));
          puVar3 = puVar6;
          puVar6 = ((undefined4 *)GEN_TOP(*puVar6));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
        puVar8 = ((undefined4 *)GEN_TOP(puVar3[1]));
        puVar6 = puVar3;
        while ((puVar3 = puVar8, cVar1 == '\0' && (puVar6 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
          puVar8 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar6 = puVar3;
        }
      }
    }
  }
  uVar9 = F_00614fc0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0xfc))) GEN_EDX_ARG);
  return uVar9;
}

/* ref: FUN_005ef0c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005ef0c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ef0c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  code * pcVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  if ((*(int *)&gen_args[1]) == -1) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x100)));
    puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
    (*(int *)&gen_args[1]) = 0xffffffff;
    while (puVar3 != puVar2) {
      piVar4 = ((int *)GEN_TOP(puVar3[4]));
      pcVar5 = *((gen_code32 *)GEN_TOP((*piVar4 + 0x10)));
      (*pcVar5)(piVar4,(*(undefined4 *)&gen_args[0]));
      if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
        puVar6 = ((undefined4 *)GEN_TOP(puVar3[2]));
        if (*((char *)GEN_TOP(((int)puVar6 + 0x15))) == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar6 + 0x15)));
          puVar3 = puVar6;
          puVar6 = ((undefined4 *)GEN_TOP(*puVar6));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP(((int)*puVar6 + 0x15)));
            puVar3 = puVar6;
            puVar6 = ((undefined4 *)GEN_TOP(*puVar6));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
          puVar7 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar6 = puVar3;
          while ((puVar3 = puVar7, cVar1 == '\0' && (puVar6 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
            cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
            puVar7 = ((undefined4 *)GEN_TOP(puVar3[1]));
            puVar6 = puVar3;
          }
        }
      }
    }
  }
  else {
    F_00619400(((undefined *)GEN_TOP(((int)this + 0xfc))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(int *)&gen_args[1]));
    if ((*(undefined * PTR32 *)(gen_frame + 0x0)) != *((undefined * PTR32 *)GEN_TOP(((int)this + 0x100)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x10))) GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]));
      return;
    }
  }
  return;
}

/* ref: FUN_005ef180 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005ef180(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x5ef180u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  byte bVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 in_EAX = 0;
  uint3 uVar8;
  undefined4 * puVar7;
  uint uVar9;
  uint uVar10;
  
  uVar8 = (uint3)((uint)in_EAX >> 8);
  if (*(float *)&REFG(undefined, 0x1088114) < param_2) {
    puVar7 = ((undefined4 *)GEN_TOP(CONCAT31(uVar8,1)));
  }
  else {
    puVar7 = ((undefined4 *)GEN_TOP(((uint)uVar8 << 8)));
  }
  uVar9 = param_1[1] - *param_1 >> 2;
  uVar10 = 0;
  if (uVar9 != 0) {
    bVar4 = (byte)puVar7;
    do {
      puVar7 = *((undefined4 * PTR32 *)GEN_TOP((*param_1 + uVar10 * 4)));
      puVar2 = ((undefined4 *)GEN_TOP(puVar7[8]));
      *((byte *)GEN_TOP(((int)puVar7 + 0x16))) = *((byte *)GEN_TOP(((int)puVar7 + 0x16))) & 0xfe | bVar4;
      puVar5 = ((undefined4 *)GEN_TOP(*puVar2));
      while (puVar5 != puVar2) {
        puVar7 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(puVar5[4])) + 0xd8))))
                           (((int *)GEN_TOP(puVar5[4])) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2))));
        if (*((char *)GEN_TOP(((int)puVar5 + 0x15))) == '\0') {
          puVar3 = ((undefined4 *)GEN_TOP(puVar5[2]));
          if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
            cVar1 = *((char *)GEN_TOP(((int)*puVar3 + 0x15)));
            puVar7 = ((undefined4 *)GEN_TOP(*puVar3));
            while (puVar5 = puVar3, cVar1 == '\0') {
              cVar1 = *((char *)GEN_TOP(((int)*puVar7 + 0x15)));
              puVar3 = puVar7;
              puVar7 = ((undefined4 *)GEN_TOP(*puVar7));
            }
          }
          else {
            cVar1 = *((char *)GEN_TOP(((int)puVar5[1] + 0x15)));
            puVar6 = ((undefined4 *)GEN_TOP(puVar5[1]));
            puVar3 = puVar5;
            while ((puVar7 = puVar6, puVar5 = puVar7, cVar1 == '\0' &&
                   (puVar3 == ((undefined4 *)GEN_TOP(puVar7[2]))))) {
              cVar1 = *((char *)GEN_TOP(((int)puVar7[1] + 0x15)));
              puVar6 = ((undefined4 *)GEN_TOP(puVar7[1]));
              puVar3 = puVar7;
            }
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar9);
  }
  return (uint)puVar7;
}

/* ref: FUN_005ef260 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_005ef260(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5ef260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_1[1] - *param_1 >> 2;
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*param_1 + uVar4 * 4)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar1)))(piVar1 GEN_EDX_ARG,1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  iVar2 = *param_1;
  if (iVar2 != param_1[1]) {
    F_00c46e20(iVar2,param_1[1],0);
    param_1[1] = iVar2;
  }
  return;
}

/* ref: FUN_005ef2d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ef2d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5ef2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  code * pcVar5;
  undefined4 * puVar6;
  undefined * pvVar7;
  undefined4 * puVar8;
  uint uVar9;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  if ((short)(*(undefined4 *)&gen_args[0]) != 0) {
    uVar9 = F_00619470(((undefined *)GEN_TOP(((int)this + 0x10c))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]));
    pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x0));
    if ((*(undefined * PTR32 *)(gen_frame + 0x0)) != *((undefined * PTR32 *)GEN_TOP(((int)this + 0x110)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x10))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x10))) GEN_EDX_ARG);
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar7 + 0x10)));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
        *((undefined4 *)GEN_TOP(((int)pvVar7 + 0x10))) = 0;
      }
      uVar9 = F_00615050(((undefined *)GEN_TOP(((int)this + 0x10c))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[0]),pvVar7);
    }
    return uVar9;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x110)));
  puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
  while (puVar3 != puVar2) {
    piVar4 = ((int *)GEN_TOP(puVar3[4]));
    pcVar5 = *((gen_code32 *)GEN_TOP((*piVar4 + 8)));
    (*pcVar5)(piVar4);
    puVar6 = ((undefined4 *)GEN_TOP(puVar3[4]));
    if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar6)))(puVar6 GEN_EDX_ARG,1);
      puVar3[4] = 0;
    }
    if (*((char *)GEN_TOP(((int)puVar3 + 0x15))) == '\0') {
      puVar6 = ((undefined4 *)GEN_TOP(puVar3[2]));
      if (*((char *)GEN_TOP(((int)puVar6 + 0x15))) == '\0') {
        cVar1 = *((char *)GEN_TOP(((int)*puVar6 + 0x15)));
        puVar3 = puVar6;
        puVar6 = ((undefined4 *)GEN_TOP(*puVar6));
        while (cVar1 == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar6 + 0x15)));
          puVar3 = puVar6;
          puVar6 = ((undefined4 *)GEN_TOP(*puVar6));
        }
      }
      else {
        cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
        puVar8 = ((undefined4 *)GEN_TOP(puVar3[1]));
        puVar6 = puVar3;
        while ((puVar3 = puVar8, cVar1 == '\0' && (puVar6 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x15)));
          puVar8 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar6 = puVar3;
        }
      }
    }
  }
  uVar9 = F_006152b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x10c))) GEN_EDX_ARG);
  return uVar9;
}

/* ref: FUN_005ef3c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ef3c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ef3c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  int * piVar2;
  code * pcVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  int * piVar7;
  uint uVar8;
  
  (*(int * PTR32 *)(gen_frame + 0x0)) = this;
  piVar7 = ((int *)GEN_TOP(0x0));
  if ((short)(*(undefined4 *)&gen_args[1]) == 0) {
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x110)));
    piVar5 = ((int *)GEN_TOP(*piVar2));
    while (piVar5 != piVar2) {
      piVar7 = ((int *)GEN_TOP(piVar5[4]));
      pcVar3 = *((gen_code32 *)GEN_TOP((*piVar7 + 0x10)));
      piVar7 = ((int *)GEN_TOP((*pcVar3)(piVar7,(*(undefined4 *)&gen_args[0]))));
      if (*((char *)GEN_TOP(((int)piVar5 + 0x15))) == '\0') {
        piVar4 = ((int *)GEN_TOP(piVar5[2]));
        if (*((char *)GEN_TOP(((int)piVar4 + 0x15))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar4 + 0x15)));
          piVar7 = ((int *)GEN_TOP(*piVar4));
          while (piVar5 = piVar4, cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar7 + 0x15)));
            piVar4 = piVar7;
            piVar7 = ((int *)GEN_TOP(*piVar7));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar5[1] + 0x15)));
          piVar6 = ((int *)GEN_TOP(piVar5[1]));
          piVar4 = piVar5;
          while ((piVar7 = piVar6, piVar5 = piVar7, cVar1 == '\0' && (piVar4 == ((int *)GEN_TOP(piVar7[2])))))
          {
            cVar1 = *((char *)GEN_TOP((piVar7[1] + 0x15)));
            piVar6 = ((int *)GEN_TOP(piVar7[1]));
            piVar4 = piVar7;
          }
        }
      }
    }
  }
  else {
    F_00619470(((undefined *)GEN_TOP(((int)this + 0x10c))) GEN_EDX_FWD,&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[1]));
    piVar7 = (*(int * PTR32 *)(gen_frame + 0x0));
    if ((*(int * PTR32 *)(gen_frame + 0x0)) != *((int * PTR32 *)GEN_TOP(((int)this + 0x110)))) {
      uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x0))[4])) + 0x10))))(((int *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x0))[4])) GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]));
      return uVar8;
    }
  }
  return (uint)piVar7;
}

/* ref: FUN_005ef480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ef480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ef480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0xc, 4);
  char cVar1;
  undefined4 * puVar2;
  undefined * this_00;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  (*(undefined1 *)(gen_frame + 0x7)) = 0x3b;
  F_00619550(((undefined *)GEN_TOP(((int)this + 0x13c))) GEN_EDX_FWD,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),&(*(undefined1 *)(gen_frame + 0x7)));
  puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x0));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x140)))) {
    puVar6 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0x0))[4]));
    puVar2 = ((undefined4 *)GEN_TOP(puVar6[1]));
    puVar4 = ((undefined4 *)GEN_TOP(*puVar2));
    while (puVar4 != puVar2) {
      this_00 = ((undefined *)GEN_TOP(puVar4[6]));
      puVar6 = ((undefined4 *)GEN_TOP(F_005dfab0(this_00 GEN_EDX_ARG)));
      if (*((char *)GEN_TOP(((int)puVar4 + 0x21))) == '\0') {
        puVar3 = ((undefined4 *)GEN_TOP(puVar4[2]));
        if (*((char *)GEN_TOP(((int)puVar3 + 0x21))) == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar3 + 0x21)));
          puVar6 = ((undefined4 *)GEN_TOP(*puVar3));
          while (puVar4 = puVar3, cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP(((int)*puVar6 + 0x21)));
            puVar3 = puVar6;
            puVar6 = ((undefined4 *)GEN_TOP(*puVar6));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP(((int)puVar4[1] + 0x21)));
          puVar5 = ((undefined4 *)GEN_TOP(puVar4[1]));
          puVar3 = puVar4;
          while ((puVar6 = puVar5, puVar4 = puVar6, cVar1 == '\0' &&
                 (puVar3 == ((undefined4 *)GEN_TOP(puVar6[2]))))) {
            cVar1 = *((char *)GEN_TOP(((int)puVar6[1] + 0x21)));
            puVar5 = ((undefined4 *)GEN_TOP(puVar6[1]));
            puVar3 = puVar6;
          }
        }
      }
    }
  }
  return (uint)puVar6;
}

/* ref: FUN_005ef520 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005ef520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5ef520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint * puVar7;
  
  iVar5 = (*(uint *)&gen_args[0]);
  if (*((int *)GEN_TOP(((int)this + 0x144))) == 0) {
    return 1;
  }
  uVar1 = *((undefined1 *)GEN_TOP(((*(uint *)&gen_args[0]) + 0x11)));
  (*(uint *)&gen_args[0]) = CONCAT13(uVar1,(undefined3)(*(uint *)&gen_args[0]));
  F_00619550(((undefined *)GEN_TOP(((int)this + 0x13c))) GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x4)),(int)&(*(uint *)&gen_args[0]) + 3);
  if ((*(uint *)(gen_frame + 0x4)) != *((uint *)GEN_TOP(((int)this + 0x140)))) {
    uVar2 = *((uint *)GEN_TOP((iVar5 + 0x14)));
    uVar3 = *((uint *)GEN_TOP((iVar5 + 0x18)));
    this_00 = *((undefined * PTR32 *)GEN_TOP(((*(uint *)(gen_frame + 0x4)) + 0x10)));
    (*(uint *)(gen_frame + 0x0)) = uVar3;
    (*(uint *)(gen_frame + 0x4)) = uVar2;
    uVar6 = F_0060b410(this_00 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)));
    uVar4 = *((uint *)GEN_TOP(((int)this_00 + 4)));
    (*(uint *)&gen_args[0]) = uVar6;
    if (((uVar6 == uVar4) || (uVar2 < *((uint *)GEN_TOP((uVar6 + 0x14))))) ||
       ((uVar2 <= *((uint *)GEN_TOP((uVar6 + 0x14))) && (uVar3 < *((uint *)GEN_TOP((uVar6 + 0x10))))))) {
      (*(uint *)(gen_frame + 0x4)) = uVar4;
      puVar7 = &(*(uint *)(gen_frame + 0x4));
    }
    else {
      puVar7 = &(*(uint *)&gen_args[0]);
    }
    if (*puVar7 != uVar4) {
      F_00615fa0(this_00 GEN_EDX_ARG,&(*(uint *)&gen_args[0]),*puVar7);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_005ef5d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005ef5d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5ef5d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  code * pcVar5;
  undefined4 * puVar6;
  char cVar7;
  undefined4 * puVar8;
  
  (*(int *)(gen_frame + 0x0)) = param_1;
  F_00619550(((undefined *)GEN_TOP((param_1 + 0x13c))) GEN_EDX_FWD,&(*(int *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]));
  cVar7 = (*(char *)&gen_args[2]);
  if ((*(int *)(gen_frame + 0x0)) != *((int *)GEN_TOP((param_1 + 0x140)))) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x10))) + 4)));
    puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
    while (puVar3 != puVar2) {
      piVar4 = ((int *)GEN_TOP(puVar3[6]));
      if (((cVar7 == '\0') || ((*(byte *)(piVar4 + 8) & 2) == 0)) &&
         (((*(char *)&gen_args[1]) == '\0' || (*((short *)GEN_TOP(((int)piVar4 + 0x12))) != -1)))) {
        pcVar5 = *((gen_code32 *)GEN_TOP((*piVar4 + 0x70)));
        (*pcVar5)(piVar4);
      }
      if (*((char *)GEN_TOP(((int)puVar3 + 0x21))) == '\0') {
        puVar6 = ((undefined4 *)GEN_TOP(puVar3[2]));
        if (*((char *)GEN_TOP(((int)puVar6 + 0x21))) == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar6 + 0x21)));
          puVar3 = puVar6;
          puVar6 = ((undefined4 *)GEN_TOP(*puVar6));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP(((int)*puVar6 + 0x21)));
            puVar3 = puVar6;
            puVar6 = ((undefined4 *)GEN_TOP(*puVar6));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x21)));
          puVar8 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar6 = puVar3;
          while ((puVar3 = puVar8, cVar1 == '\0' && (puVar6 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
            cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x21)));
            puVar8 = ((undefined4 *)GEN_TOP(puVar3[1]));
            puVar6 = puVar3;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_005ef690 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ef690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5ef690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  
  F_00619550(((undefined *)GEN_TOP(((int)this + 0x13c))) GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x4)),&(*(uint *)&gen_args[0]));
  uVar3 = (*(uint *)&gen_args[2]);
  uVar2 = (*(uint *)&gen_args[1]);
  if ((*(uint *)(gen_frame + 0x4)) != *((uint *)GEN_TOP(((int)this + 0x140)))) {
    this_00 = *((undefined * PTR32 *)GEN_TOP(((*(uint *)(gen_frame + 0x4)) + 0x10)));
    (*(uint *)(gen_frame + 0x0)) = (*(uint *)&gen_args[2]);
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)&gen_args[1]);
    uVar4 = F_0060b410(this_00 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)));
    uVar1 = *((uint *)GEN_TOP(((int)this_00 + 4)));
    (*(uint *)&gen_args[0]) = uVar4;
    if (((uVar4 == uVar1) || (uVar2 < *((uint *)GEN_TOP((uVar4 + 0x14))))) ||
       ((uVar2 <= *((uint *)GEN_TOP((uVar4 + 0x14))) && (uVar3 < *((uint *)GEN_TOP((uVar4 + 0x10))))))) {
      (*(uint *)&gen_args[1]) = uVar1;
      puVar5 = &(*(uint *)&gen_args[1]);
    }
    else {
      puVar5 = &(*(uint *)&gen_args[0]);
    }
    if (*puVar5 != uVar1) {
      return *((uint *)GEN_TOP((*puVar5 + 0x18)));
    }
  }
  return 0;
}

/* ref: FUN_005ef720 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ef720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5ef720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  if (*((int *)GEN_TOP((param_2 + 0x40))) != 0x3000) {
    return 0;
  }
  uVar1 = F_005ef690(this GEN_EDX_FWD,param_1,*((undefined4 *)GEN_TOP((param_2 + 0x38))),*((undefined4 *)GEN_TOP((param_2 + 0x3c))),
                       1);
  return uVar1;
}

/* ref: FUN_005ef750 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005ef750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5ef750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  F_00619550(((undefined *)GEN_TOP(((int)this + 0x13c))) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[0]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x0)) == *((undefined * PTR32 *)GEN_TOP(((int)this + 0x140)))) {
    return 0;
  }
  return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x10)));
}

/* ref: FUN_005ef790 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005ef790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5ef790u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  uint uVar1;
  
  uVar1 = F_005ef690(this GEN_EDX_FWD,0x34,param_1,param_2,1);
  if (uVar1 == 0) {
    return 0;
  }
  F_005dbf70(uVar1 GEN_EDX_ARG,param_3,0);
  return 1;
}

/* ref: FUN_005ef7d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005ef7d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5ef7d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_005ef690(this GEN_EDX_FWD,0x34,param_1,param_2,1);
  if (uVar1 == 0) {
    return 0;
  }
  *((undefined1 *)GEN_TOP((uVar1 + 0x48))) = 3;
  if ((*((uint *)GEN_TOP((uVar1 + 0x30))) & 0xc0000000) != 0) {
    F_00b5b440(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,((uint *)GEN_TOP((uVar1 + 0x30))),0);
  }
  return 1;
}

/* ref: FUN_005ef820 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005ef820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ef820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0xc, 4);
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint * puVar7;
  
  (*(undefined1 *)(gen_frame + 0x7)) = 0x34;
  F_00619550(((undefined *)GEN_TOP(((int)this + 0x13c))) GEN_EDX_FWD,&(*(int *)(gen_frame + 0x0)),&(*(undefined1 *)(gen_frame + 0x7)));
  if ((*(int *)(gen_frame + 0x0)) != *((int *)GEN_TOP(((int)this + 0x140)))) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x10))) + 4)));
    puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
    while (puVar3 != puVar2) {
      iVar4 = puVar3[6];
      *((undefined1 *)GEN_TOP((iVar4 + 0x48))) = 3;
      puVar7 = ((uint *)GEN_TOP((iVar4 + 0x30)));
      if ((*puVar7 & 0xc0000000) != 0) {
        F_00b5b440(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,puVar7,0);
      }
      if (*((char *)GEN_TOP(((int)puVar3 + 0x21))) == '\0') {
        puVar5 = ((undefined4 *)GEN_TOP(puVar3[2]));
        if (*((char *)GEN_TOP(((int)puVar5 + 0x21))) == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar5 + 0x21)));
          puVar3 = puVar5;
          puVar5 = ((undefined4 *)GEN_TOP(*puVar5));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP(((int)*puVar5 + 0x21)));
            puVar3 = puVar5;
            puVar5 = ((undefined4 *)GEN_TOP(*puVar5));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x21)));
          puVar6 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar5 = puVar3;
          while ((puVar3 = puVar6, cVar1 == '\0' && (puVar5 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
            cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x21)));
            puVar6 = ((undefined4 *)GEN_TOP(puVar3[1]));
            puVar5 = puVar3;
          }
        }
      }
    }
  }
  return;
}

/* ref: FUN_005ef8e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005ef8e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ef8e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0xc, 4);
  uint * puVar1;
  char cVar2;
  int * piVar3;
  undefined * this_00;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  
  (*(undefined1 *)(gen_frame + 0x7)) = 0x34;
  F_00619550(((undefined *)GEN_TOP(((int)this + 0x13c))) GEN_EDX_FWD,&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(undefined1 *)(gen_frame + 0x7)));
  if ((*(int * PTR32 *)(gen_frame + 0x0)) != *((int * PTR32 *)GEN_TOP(((int)this + 0x140)))) {
    piVar3 = *((int * PTR32 *)GEN_TOP(((*(int * PTR32 *)(gen_frame + 0x0))[4] + 4)));
    piVar6 = ((int *)GEN_TOP(*piVar3));
    (*(int * PTR32 *)(gen_frame + 0x0)) = piVar3;
    if (piVar6 != piVar3) {
      do {
        this_00 = ((undefined *)GEN_TOP(piVar6[6]));
        if ((*((byte *)GEN_TOP(((int)this_00 + 0x44))) & 1) != 0) {
          puVar1 = ((uint *)GEN_TOP(((int)this_00 + 0x30)));
          *((undefined1 *)GEN_TOP(((int)this_00 + 0x48))) = 3;
          if ((*((uint *)GEN_TOP(((int)this_00 + 0x30))) & 0xc0000000) != 0) {
            F_00b5b440(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,puVar1,0);
          }
          *((byte *)GEN_TOP(((int)this_00 + 0x44))) = *((byte *)GEN_TOP(((int)this_00 + 0x44))) & 0xfe;
          if ((*((char *)GEN_TOP(((int)this_00 + 0x48))) == '\x05') ||
             (*((char *)GEN_TOP(((int)this_00 + 0x48))) == '\x06')) {
            if ((*puVar1 & 0xc0000000) != 0) {
              F_00b5b550(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,puVar1);
              *puVar1 = 0;
            }
            F_005dbde0(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this_00 + 0x3c))),
                         *((undefined4 *)GEN_TOP(((int)this_00 + 0x40))));
          }
          uVar5 = ~(uint)(*((byte *)GEN_TOP(((int)this_00 + 0x44))) >> 1) & 1;
          *((char *)GEN_TOP(((int)this_00 + 0x48))) = (uVar5 == 0) + '\x01';
          if ((*puVar1 & 0xc0000000) != 0) {
            F_00b5b3e0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,puVar1,uVar5,0xffffffff);
          }
        }
        if (*((char *)GEN_TOP(((int)piVar6 + 0x21))) == '\0') {
          piVar3 = ((int *)GEN_TOP(piVar6[2]));
          if (*((char *)GEN_TOP(((int)piVar3 + 0x21))) == '\0') {
            cVar2 = *((char *)GEN_TOP((*piVar3 + 0x21)));
            piVar6 = piVar3;
            piVar3 = ((int *)GEN_TOP(*piVar3));
            while (cVar2 == '\0') {
              cVar2 = *((char *)GEN_TOP((*piVar3 + 0x21)));
              piVar6 = piVar3;
              piVar3 = ((int *)GEN_TOP(*piVar3));
            }
          }
          else {
            cVar2 = *((char *)GEN_TOP((piVar6[1] + 0x21)));
            piVar4 = ((int *)GEN_TOP(piVar6[1]));
            piVar3 = piVar6;
            while ((piVar6 = piVar4, cVar2 == '\0' && (piVar3 == ((int *)GEN_TOP(piVar6[2]))))) {
              cVar2 = *((char *)GEN_TOP((piVar6[1] + 0x21)));
              piVar4 = ((int *)GEN_TOP(piVar6[1]));
              piVar3 = piVar6;
            }
          }
        }
      } while (piVar6 != (*(int * PTR32 *)(gen_frame + 0x0)));
    }
  }
  return;
}

/* ref: FUN_005efa20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005efa20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x5efa20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_005ef690(this GEN_EDX_FWD,6,param_1,0,1);
  if (uVar1 == 0) {
    return 0;
  }
  F_005dbaf0(uVar1 GEN_EDX_ARG,(undefined1)param_2,param_3,0);
  return 1;
}

/* ref: FUN_005efa60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005efa60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5efa60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0xc, 4);
  char cVar1;
  int * piVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  byte bVar7;
  undefined3 extraout_var = 0;
  int * piVar8;
  
  (*(undefined1 *)(gen_frame + 0x7)) = 6;
  F_00619550(((undefined *)GEN_TOP(((int)this + 0x13c))) GEN_EDX_FWD,&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(undefined1 *)(gen_frame + 0x7)));
  piVar8 = (*(int * PTR32 *)(gen_frame + 0x0));
  if ((*(int * PTR32 *)(gen_frame + 0x0)) != *((int * PTR32 *)GEN_TOP(((int)this + 0x140)))) {
    piVar8 = ((int *)GEN_TOP((*(int * PTR32 *)(gen_frame + 0x0))[4]));
    piVar2 = ((int *)GEN_TOP(piVar8[1]));
    piVar5 = ((int *)GEN_TOP(*piVar2));
    while (piVar5 != piVar2) {
      iVar3 = piVar5[6];
      bVar7 = F_005dbaf0(iVar3 GEN_EDX_ARG,(undefined1)param_1,param_2,0);
      piVar8 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar7)));
      if (*((char *)GEN_TOP(((int)piVar5 + 0x21))) == '\0') {
        piVar4 = ((int *)GEN_TOP(piVar5[2]));
        if (*((char *)GEN_TOP(((int)piVar4 + 0x21))) == '\0') {
          cVar1 = *((char *)GEN_TOP((*piVar4 + 0x21)));
          piVar8 = ((int *)GEN_TOP(*piVar4));
          while (piVar5 = piVar4, cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP((*piVar8 + 0x21)));
            piVar4 = piVar8;
            piVar8 = ((int *)GEN_TOP(*piVar8));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP((piVar5[1] + 0x21)));
          piVar6 = ((int *)GEN_TOP(piVar5[1]));
          piVar4 = piVar5;
          while ((piVar8 = piVar6, piVar5 = piVar8, cVar1 == '\0' && (piVar4 == ((int *)GEN_TOP(piVar8[2])))))
          {
            cVar1 = *((char *)GEN_TOP((piVar8[1] + 0x21)));
            piVar6 = ((int *)GEN_TOP(piVar8[1]));
            piVar4 = piVar8;
          }
        }
      }
    }
  }
  return (uint)piVar8;
}

/* ref: FUN_005efb00 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005efb00(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5efb00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0xc, 4);
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  int * piVar5;
  code * pcVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  uint uVar9;
  
  (*(undefined1 *)(gen_frame + 0x7)) = 6;
  F_00619550(((undefined *)GEN_TOP((param_1 + 0x13c))) GEN_EDX_FWD,&(*(int *)(gen_frame + 0x0)),&(*(undefined1 *)(gen_frame + 0x7)));
  if ((*(int *)(gen_frame + 0x0)) != *((int *)GEN_TOP((param_1 + 0x140)))) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x10))) + 4)));
    puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
    while (puVar3 != puVar2) {
      iVar4 = puVar3[6];
      if (((*((int *)GEN_TOP((iVar4 + 0x9c))) != 0) &&
          (piVar5 = *((int * PTR32 *)GEN_TOP((iVar4 + 0x9c))), pcVar6 = *((gen_code32 *)GEN_TOP((*piVar5 + 0x10))),
          uVar9 = (*pcVar6)(piVar5), (char)uVar9 != '\0')) && (*((int *)GEN_TOP((iVar4 + 0x9c))) != 0)) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar4 + 0x9c))) + 0x20))))
                  (*((int * PTR32 *)GEN_TOP((iVar4 + 0x9c))) GEN_EDX_ARG,(uint)param_2,param_3);
      }
      if (*((char *)GEN_TOP(((int)puVar3 + 0x21))) == '\0') {
        puVar7 = ((undefined4 *)GEN_TOP(puVar3[2]));
        if (*((char *)GEN_TOP(((int)puVar7 + 0x21))) == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar7 + 0x21)));
          puVar3 = puVar7;
          puVar7 = ((undefined4 *)GEN_TOP(*puVar7));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP(((int)*puVar7 + 0x21)));
            puVar3 = puVar7;
            puVar7 = ((undefined4 *)GEN_TOP(*puVar7));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x21)));
          puVar8 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar7 = puVar3;
          while ((puVar3 = puVar8, cVar1 == '\0' && (puVar7 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
            cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x21)));
            puVar8 = ((undefined4 *)GEN_TOP(puVar3[1]));
            puVar7 = puVar3;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_005efbe0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005efbe0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5efbe0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0xc, 4);
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  int * piVar5;
  code * pcVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  uint uVar9;
  
  (*(undefined1 *)(gen_frame + 0x7)) = 6;
  F_00619550(((undefined *)GEN_TOP((param_1 + 0x13c))) GEN_EDX_FWD,&(*(int *)(gen_frame + 0x0)),&(*(undefined1 *)(gen_frame + 0x7)));
  if ((*(int *)(gen_frame + 0x0)) != *((int *)GEN_TOP((param_1 + 0x140)))) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x10))) + 4)));
    puVar3 = ((undefined4 *)GEN_TOP(*puVar2));
    while (puVar3 != puVar2) {
      iVar4 = puVar3[6];
      if (((*((int *)GEN_TOP((iVar4 + 0x9c))) != 0) &&
          (piVar5 = *((int * PTR32 *)GEN_TOP((iVar4 + 0x9c))), pcVar6 = *((gen_code32 *)GEN_TOP((*piVar5 + 0x14))),
          uVar9 = (*pcVar6)(piVar5), (char)uVar9 != '\0')) && (*((int *)GEN_TOP((iVar4 + 0x9c))) != 0)) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar4 + 0x9c))) + 0x20))))
                  (*((int * PTR32 *)GEN_TOP((iVar4 + 0x9c))) GEN_EDX_ARG,(uint)param_2,param_3);
      }
      if (*((char *)GEN_TOP(((int)puVar3 + 0x21))) == '\0') {
        puVar7 = ((undefined4 *)GEN_TOP(puVar3[2]));
        if (*((char *)GEN_TOP(((int)puVar7 + 0x21))) == '\0') {
          cVar1 = *((char *)GEN_TOP(((int)*puVar7 + 0x21)));
          puVar3 = puVar7;
          puVar7 = ((undefined4 *)GEN_TOP(*puVar7));
          while (cVar1 == '\0') {
            cVar1 = *((char *)GEN_TOP(((int)*puVar7 + 0x21)));
            puVar3 = puVar7;
            puVar7 = ((undefined4 *)GEN_TOP(*puVar7));
          }
        }
        else {
          cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x21)));
          puVar8 = ((undefined4 *)GEN_TOP(puVar3[1]));
          puVar7 = puVar3;
          while ((puVar3 = puVar8, cVar1 == '\0' && (puVar7 == ((undefined4 *)GEN_TOP(puVar3[2]))))) {
            cVar1 = *((char *)GEN_TOP(((int)puVar3[1] + 0x21)));
            puVar8 = ((undefined4 *)GEN_TOP(puVar3[1]));
            puVar7 = puVar3;
          }
        }
      }
    }
  }
  return 0;
}

