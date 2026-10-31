#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00bc0f50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc0f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc0f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (*((int *)GEN_TOP(((int)this + 0x40))) != 0) {
    F_00a0b710(*((int *)GEN_TOP(((int)this + 0x40))) GEN_EDX_FWD,this,param_1);
  }
  return (uint)this;
}

/* ref: FUN_00bc0f70 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc0f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc0f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x40))) != ((undefined *)GEN_TOP(0x0))) {
    bVar1 = F_00a0b7b0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x40))) GEN_EDX_FWD,this,param_1);
    this = ((undefined *)GEN_TOP((uint)bVar1));
  }
  return (byte)this;
}

/* ref: FUN_00bc0f90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc0f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc0f90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x40))) != ((undefined *)GEN_TOP(0x0))) {
    this = ((undefined *)GEN_TOP(F_00a0b930(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x40))) GEN_EDX_FWD,this,param_1,param_2)));
  }
  return (uint)this;
}

/* ref: FUN_00bc0fb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc0fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc0fb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x40))) != ((undefined *)GEN_TOP(0x0))) {
    this = ((undefined *)GEN_TOP(F_00a0b950(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x40))) GEN_EDX_FWD,this,param_1,param_2)));
  }
  return (uint)this;
}

/* ref: FUN_00bc0fe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc0fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbc0fe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint in_EAX = 0;
  
  if (*((int *)GEN_TOP(((int)this + 0x4c))) != 0) {
    in_EAX = F_00a04f10(*((int *)GEN_TOP(((int)this + 0x4c))) GEN_EDX_FWD,param_2,(undefined1)param_3);
  }
  return in_EAX;
}

/* ref: FUN_00bc1000 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc1000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbc1000u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  byte in_AL = 0;
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x4c))) != 0) {
    uVar1 = F_00a05080(*((int *)GEN_TOP(((int)this + 0x4c))) GEN_EDX_FWD,param_2,(undefined1)param_3);
    in_AL = (byte)uVar1;
  }
  return in_AL;
}

/* ref: FUN_00bc1020 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc1020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc1020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint in_EAX = 0;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x4c))) != ((undefined *)GEN_TOP(0x0))) {
    in_EAX = F_00a05870(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x4c))) GEN_EDX_FWD);
  }
  return in_EAX;
}

/* ref: FUN_00bc1030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc1030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc1030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x4c))) != 0) {
    uVar1 = F_00a05810(param_1,param_2);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00bc1050 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc1050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc1050u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  if (*((int *)GEN_TOP(((int)this + 0x4c))) != 0) {
    F_00a05840(param_1,param_2);
    return;
  }
  return;
}

/* ref: FUN_00bc1070 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc1070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc1070u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x50))) == 0) {
    uVar1 = F_00a04070();
    *((uint *)GEN_TOP(((int)this + 0x50))) = uVar1;
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) != ((undefined *)GEN_TOP(0x0))) {
    F_00bb9a50(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG,param_1,param_2);
    return *((uint *)GEN_TOP(((int)this + 0x50)));
  }
  return 0;
}

/* ref: FUN_00bc10b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc10b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc10b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint in_EAX = 0;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) != ((undefined *)GEN_TOP(0x0))) {
    F_00bb9a00(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) GEN_EDX_FWD,param_1);
    in_EAX = F_00a04540(*((undefined4 *)GEN_TOP(((int)this + 0x50))));
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  }
  return in_EAX;
}

/* ref: FUN_00bc10e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc10e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc10e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*((int *)GEN_TOP(((int)this + 4))) == param_1) {
      return (uint)this;
    }
    iVar1 = iVar1 + 1;
    this = ((undefined *)GEN_TOP(((int)this + 8)));
  } while (iVar1 < 8);
  return 0;
}

/* ref: FUN_00bc1130 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc1130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc1130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  return (uint)this;
}

/* ref: FUN_00bc1180 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc1180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc1180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar1 = *((int *)GEN_TOP(((int)this + iVar3 * 8)));
    if (iVar1 != 0) {
      F_00a041f0(iVar1);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  if (*((int *)GEN_TOP(((int)this + 0x40))) != 0) {
    F_00a0b6f0(*((int *)GEN_TOP(((int)this + 0x40))));
    *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x44))) != 0) {
    F_00a0c430(*((int *)GEN_TOP(((int)this + 0x44))));
    *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x48))) != 0) {
    F_00a0b310(*((int *)GEN_TOP(((int)this + 0x48))));
    *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x4c))) != 0) {
    F_00a04ea0(*((int *)GEN_TOP(((int)this + 0x4c))));
    *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  }
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x50))) != 0) {
    uVar2 = F_00a04540(*((int *)GEN_TOP(((int)this + 0x50))));
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  }
  return uVar2;
}

/* ref: Global::FindOrAddSlot */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc1210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc1210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  pvVar1 = this;
  do {
    if (*((uint *)GEN_TOP(((int)pvVar1 + 4))) == param_1) {
      return (uint)pvVar1;
    }
    iVar3 = iVar3 + 1;
    pvVar1 = ((undefined *)GEN_TOP(((int)pvVar1 + 8)));
  } while (iVar3 < 8);
  iVar3 = 0;
  do {
    if (*((uint *)GEN_TOP(((int)this + 4))) == 0xffffffff) {
      if (this != ((uint *)GEN_TOP(0x0))) {
        uVar2 = F_00a03dd0();
        *(uint *)this = uVar2;
        *((uint *)GEN_TOP(((int)this + 4))) = param_1;
      }
      return (uint)this;
    }
    iVar3 = iVar3 + 1;
    this = ((undefined *)GEN_TOP(((int)this + 8)));
  } while (iVar3 < 8);
  return 0;
}

/* ref: Global::RemoveSlot_00bc1270 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc1270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc1270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*((int *)GEN_TOP(((int)this + 4))) == param_1) {
      uVar1 = 0;
      if (*(int *)this != 0) {
        uVar1 = F_00a041f0(*(int *)this);
        *(int *)this = 0;
      }
      *((int *)GEN_TOP(((int)this + 4))) = -1;
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    this = ((undefined *)GEN_TOP(((int)this + 8)));
  } while ((int)uVar1 < 8);
  return uVar1;
}

/* ref: Global::Update_00bc12c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc12c0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xbc12c0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  byte bVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int local_8;
  
  piVar3 = param_1 + 1;
  local_8 = 8;
  do {
    if (-1 < *piVar3) {
      iVar2 = piVar3[-1];
      F_00b63990(iVar2 GEN_EDX_FWD,param_3);
      bVar1 = F_00b63680(iVar2 GEN_EDX_ARG);
      if (bVar1 != 0) {
        iVar2 = 0;
        piVar4 = param_1;
        do {
          if (piVar4[1] == *piVar3) {
            if (*piVar4 != 0) {
              F_00a041f0(*piVar4);
              *piVar4 = 0;
            }
            piVar4[1] = -1;
            break;
          }
          iVar2 = iVar2 + 1;
          piVar4 = piVar4 + 2;
        } while (iVar2 < 8);
      }
    }
    piVar3 = piVar3 + 2;
    local_8 = local_8 - 1;
    if (local_8 == 0) {
      if (((undefined *)GEN_TOP(param_1[0x10])) != ((undefined *)GEN_TOP(0x0))) {
        F_00a0c1a0(((undefined *)GEN_TOP(param_1[0x10])) GEN_EDX_ARG,param_1,param_2,(undefined4)gen_fl2bits(param_3));
      }
      if (param_1[0x11] != 0) {
        F_00a0c870(param_1[0x11] GEN_EDX_ARG,param_1,param_2,param_3);
      }
      if (param_1[0x12] != 0) {
        F_00a0b330(param_1,param_2);
      }
      if (param_1[0x13] != 0) {
        F_00a05890(param_1[0x13] GEN_EDX_ARG,param_2,param_3);
      }
      if (((undefined *)GEN_TOP(param_1[0x14])) != ((undefined *)GEN_TOP(0x0))) {
        F_00bb9a80(((undefined *)GEN_TOP(param_1[0x14])) GEN_EDX_ARG,param_2,(undefined4)gen_fl2bits(param_3));
      }
      return;
    }
  } while( true );
}

/* ref: FUN_00bc13b0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc13b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc13b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  int * piVar2;
  int iVar3;
  int * piVar4;
  int local_8;
  
  iVar3 = 0;
  do {
    if (-1 < *((int *)GEN_TOP(((int)this + iVar3 * 8 + 4)))) {
      F_00b642d0(*((undefined * PTR32 *)GEN_TOP(((int)this + iVar3 * 8))) GEN_EDX_FWD);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  piVar2 = ((int *)GEN_TOP(((int)this + 4)));
  local_8 = 8;
  do {
    if (-1 < *piVar2) {
      iVar3 = piVar2[-1];
      F_00b63990(iVar3 GEN_EDX_ARG,(float)(float10)0);
      bVar1 = F_00b63680(iVar3 GEN_EDX_ARG);
      if (bVar1 != 0) {
        iVar3 = 0;
        piVar4 = this;
        do {
          if (piVar4[1] == *piVar2) {
            if (*piVar4 != 0) {
              F_00a041f0(*piVar4);
              *piVar4 = 0;
            }
            piVar4[1] = -1;
            break;
          }
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 2;
        } while (iVar3 < 8);
      }
    }
    piVar2 = piVar2 + 2;
    local_8 = local_8 - 1;
    if (local_8 == 0) {
      if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x40))) != ((undefined *)GEN_TOP(0x0))) {
        F_00a0c1a0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG,this,0,(undefined4)gen_fl2bits((float)(float10)0))
        ;
      }
      if (*((int *)GEN_TOP(((int)this + 0x44))) != 0) {
        F_00a0c870(*((int *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG,this,0,(float)(float10)0);
      }
      if (*((int *)GEN_TOP(((int)this + 0x48))) != 0) {
        F_00a0b330(this,0);
      }
      if (*((int *)GEN_TOP(((int)this + 0x4c))) != 0) {
        F_00a05890(*((int *)GEN_TOP(((int)this + 0x4c))) GEN_EDX_ARG,0,(float)(float10)0);
      }
      if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) != ((undefined *)GEN_TOP(0x0))) {
        F_00bb9a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG,0,(undefined4)gen_fl2bits((float)(float10)0));
      }
      return;
    }
  } while( true );
}

/* ref: FUN_00bc14b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc14b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc14b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 in_ecx;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  in_ecx = *((undefined4 *)GEN_TOP((REFG(int, 0x137129c) + 0x60)));
  uVar3 = 0;
  iVar4 = 0;
  do {
    uVar2 = *((uint *)GEN_TOP(((int)this + iVar4 * 8 + 4)));
    if (-1 < (int)uVar2) {
      uVar2 = uVar2 & 0xffff;
      bVar1 = F_00500b00(in_ecx GEN_EDX_FWD);
      if ((uVar2 < bVar1) &&
         (uVar2 = F_00500ae0(in_ecx GEN_EDX_ARG,uVar2), (*((uint *)GEN_TOP((uVar2 + 8))) >> 1 & 1) != 0)) {
        if (param_2 <= (int)uVar3) {
          return uVar3;
        }
        *((undefined4 *)GEN_TOP((param_1 + uVar3 * 4))) = *((undefined4 *)GEN_TOP(((int)this + iVar4 * 8)));
        uVar3 = uVar3 + 1;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  return uVar3;
}

/* ref: FUN_00bc1530 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00bc1530(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc1530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  byte bVar1;
  
  if (-1 < param_2) {
    bVar1 = F_00500b00(*((undefined4 *)GEN_TOP((REFG(int, 0x137129c) + 0x60))) GEN_EDX_ARG);
    if (param_2 < (int)(uint)bVar1) {
      bVar1 = F_00a06620(param_2,param_1);
      return bVar1;
    }
  }
  return 1;
}

/* ref: FUN_00bc1570 */
GEN_OWN GEN_FRAME uint F_00bc1570(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc1570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00500af0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137129c) + 0x60))) GEN_EDX_ARG,param_1);
  if ((short)uVar1 != -1) {
    return param_2 << 0x10 | uVar1 & 0xffff;
  }
  return 0xffffffff;
}

/* ref: FUN_00bc15a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc15a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc15a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x10, 0);
  char cVar1;
  undefined4 uVar2;
  undefined * pvVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined * this_00;
  int iVar8;
  
  if (((*((int *)GEN_TOP(((int)this + 0x40))) != 0) &&
      (bVar4 = F_00a0b720(*((int *)GEN_TOP(((int)this + 0x40))) GEN_EDX_FWD), bVar4 != 0)) &&
     ((*((byte *)GEN_TOP((param_1 + 0x12))) >> 4 & 1) != 0)) {
    return 0;
  }
  cVar1 = *((char *)GEN_TOP((param_1 + 0x14)));
  uVar5 = F_00500af0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137129c) + 0x60))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 0x20))));
  if ((short)uVar5 == -1) {
    (*(uint *)(gen_frame + 0x0)) = 0xffffffff;
  }
  else {
    (*(uint *)(gen_frame + 0x0)) = uVar5 & 0xffff | (int)cVar1 << 0x10;
  }
  uVar5 = F_00a065a0();
  if ((((char)uVar5 != '\0') && (uVar5 = F_00bbafd0(param_2 GEN_EDX_ARG), uVar5 != 0)) &&
     (*((int *)GEN_TOP((uVar5 + 0x78))) != 0)) {
    uVar2 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((uVar5 + 0x78))) + 0xa0)));
    if ((int)(*(uint *)(gen_frame + 0x0)) < 0) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = (*(uint *)(gen_frame + 0x0)) & 0xffff;
    }
    if (((-1 < (int)uVar5) &&
        (bVar4 = F_00500b00(*((undefined4 *)GEN_TOP((REFG(int, 0x137129c) + 0x60))) GEN_EDX_ARG), (int)uVar5 < (int)(uint)bVar4))
       && (bVar4 = F_00a06620(uVar5,uVar2), bVar4 == 0)) {
      return 0;
    }
  }
  uVar2 = *((undefined4 *)GEN_TOP((REFG(int, 0x137129c) + 0x60)));
  if (-1 < (int)(*(uint *)(gen_frame + 0x0))) {
    bVar4 = F_00500b00(uVar2 GEN_EDX_ARG);
    if (((*(uint *)(gen_frame + 0x0)) & 0xffff) < (uint)bVar4) {
      uVar5 = F_00500ae0(uVar2 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x0)) & 0xffff);
      iVar8 = 0;
      do {
        uVar6 = *((uint *)GEN_TOP(((int)this + iVar8 * 8 + 4)));
        if (-1 < (int)uVar6) {
          uVar6 = uVar6 & 0xffff;
          bVar4 = F_00500b00(uVar2 GEN_EDX_ARG);
          if (uVar6 < bVar4) {
            uVar6 = F_00500ae0(uVar2 GEN_EDX_ARG,uVar6);
            pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + iVar8 * 8)));
            if ((((*((uint *)GEN_TOP((uVar6 + 8))) >> 7 & 1) != 0) && ((*((uint *)GEN_TOP((uVar5 + 8))) >> 10 & 1) != 0))
               && (bVar4 = F_00b63c90(pvVar3 GEN_EDX_ARG), bVar4 == 0)) {
              return 0;
            }
            if ((((*((uint *)GEN_TOP((uVar6 + 8))) >> 8 & 1) != 0) && ((*((uint *)GEN_TOP((uVar5 + 8))) >> 9 & 1) != 0))
               && (bVar4 = F_00b63cc0(pvVar3 GEN_EDX_ARG), bVar4 == 0)) {
              return 0;
            }
            if ((((*((uint *)GEN_TOP((uVar6 + 8))) >> 10 & 1) != 0) && ((*((uint *)GEN_TOP((uVar5 + 8))) >> 7 & 1) != 0))
               && ((*((byte *)GEN_TOP((param_1 + 0x12))) >> 6 & 1) == 0)) {
              F_00bc1af0((uint)pvVar3,param_1);
            }
            if ((((*((uint *)GEN_TOP((uVar6 + 8))) >> 9 & 1) != 0) && ((*((uint *)GEN_TOP((uVar5 + 8))) >> 8 & 1) != 0))
               && (-1 < *((char *)GEN_TOP((param_1 + 0x12))))) {
              F_00bc1b60((uint)pvVar3,param_1);
            }
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 8);
    }
  }
  iVar8 = 0;
  puVar7 = this;
  do {
    if (puVar7[1] == (*(uint *)(gen_frame + 0x0))) goto LAB_00bc17e2;
    iVar8 = iVar8 + 1;
    puVar7 = puVar7 + 2;
  } while (iVar8 < 8);
  puVar7 = ((undefined4 *)GEN_TOP(F_00bc1210(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x0)))));
  if (puVar7 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0;
  }
LAB_00bc17e2: ;
  pvVar3 = ((undefined *)GEN_TOP(*puVar7));
  (*(byte *)(gen_frame + 0xb)) = 0;
  uVar2 = *((undefined4 *)GEN_TOP((REFG(int, 0x137129c) + 0x60)));
  if (-1 < (int)(*(uint *)(gen_frame + 0x0))) {
    bVar4 = F_00500b00(uVar2 GEN_EDX_ARG);
    if (((*(uint *)(gen_frame + 0x0)) & 0xffff) < (uint)bVar4) {
      uVar5 = F_00500ae0(uVar2 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x0)) & 0xffff);
      cVar1 = *((char *)GEN_TOP((uVar5 + 0xf)));
      if (((-1 < cVar1) && (uVar6 = F_00b63c10(pvVar3 GEN_EDX_ARG), (int)cVar1 <= (int)uVar6)) &&
         (this_00 = ((undefined *)GEN_TOP(F_00b63670(pvVar3 GEN_EDX_ARG))), this_00 != ((undefined *)GEN_TOP(0x0))))
      {
        F_00bba140(this_00 GEN_EDX_ARG,0,(float)(float10)0,(int)*((char *)GEN_TOP((param_1 + 0x17))));
        F_00bba0e0(this_00 GEN_EDX_ARG);
      }
      if ((((*((uint *)GEN_TOP((uVar5 + 8))) >> 0xc & 1) != 0) && (*((int *)GEN_TOP(((int)this + 0x40))) != 0)) &&
         (bVar4 = F_00a0b720(*((int *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG), bVar4 != 0)) {
        F_00a0bff0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG,this,param_2);
      }
      if ((*((uint *)GEN_TOP((uVar5 + 8))) >> 0xb & 1) != 0) {
        (*(byte *)(gen_frame + 0xb)) = (*(byte *)(gen_frame + 0xb)) | 1;
      }
      if ((*((uint *)GEN_TOP((uVar5 + 8))) >> 0xd & 1) != 0) {
        (*(byte *)(gen_frame + 0xb)) = (*(byte *)(gen_frame + 0xb)) | 2;
      }
    }
  }
  uVar5 = F_00b63d30(pvVar3 GEN_EDX_ARG,param_1,param_2,&(*(byte *)(gen_frame + 0xb)));
  return uVar5;
}

/* ref: FUN_00bc18e0 */
GEN_OWN GEN_FRAME uint F_00bc18e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xbc18e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 uVar1;
  int * this;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *((undefined4 *)GEN_TOP((param_4 + 0x10)));
  ((undefined4 *)(gen_frame + 0x0))[0] = *((undefined4 *)GEN_TOP((param_4 + 0xc)));
  ((undefined4 *)(gen_frame + 0x0))[1] = uVar1;
  uVar4 = 0;
  uVar5 = param_3;
  do {
    this = ((int *)GEN_TOP(((undefined4 *)(gen_frame + 0x0))[(int)(uVar4)]));
    if (this != ((int *)GEN_TOP(0x0))) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x10))))(this GEN_EDX_ARG);
      if (uVar3 == 1) {
        bVar2 = F_00bba1e0(this GEN_EDX_ARG);
        if ((bVar2 == 0) && ((int)uVar5 < param_2)) {
          *((int * PTR32 *)GEN_TOP((param_1 + uVar5 * 4))) = this;
          uVar5 = uVar5 + 1;
        }
      }
      else if (uVar3 == 0) {
        uVar5 = F_00bc18e0(param_1,param_2,uVar5,(int)this,param_5);
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  return uVar5;
}

/* ref: FUN_00bc1960 */
GEN_OWN GEN_FRAME uint F_00bc1960(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xbc1960u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 uVar1;
  int * this;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *((undefined4 *)GEN_TOP((param_4 + 0x10)));
  ((undefined4 *)(gen_frame + 0x0))[0] = *((undefined4 *)GEN_TOP((param_4 + 0xc)));
  ((undefined4 *)(gen_frame + 0x0))[1] = uVar1;
  uVar4 = 0;
  uVar5 = param_3;
  do {
    this = ((int *)GEN_TOP(((undefined4 *)(gen_frame + 0x0))[(int)(uVar4)]));
    if (this != ((int *)GEN_TOP(0x0))) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x10))))(this GEN_EDX_ARG);
      if (uVar3 == 1) {
        bVar2 = F_00bba210(this GEN_EDX_ARG);
        if ((bVar2 == 0) && ((int)uVar5 < param_2)) {
          *((int * PTR32 *)GEN_TOP((param_1 + uVar5 * 4))) = this;
          uVar5 = uVar5 + 1;
        }
      }
      else if (uVar3 == 0) {
        uVar5 = F_00bc1960(param_1,param_2,uVar5,(int)this,param_5);
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  return uVar5;
}

/* ref: FUN_00bc1a20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc1a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbc1a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00bc18e0(param_1,param_2,0,*((undefined4 *)GEN_TOP(((int)this + 4))),param_3);
  return uVar1;
}

/* ref: FUN_00bc1a50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc1a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbc1a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00bc1960(param_1,param_2,0,*((undefined4 *)GEN_TOP(((int)this + 4))),param_3);
  return uVar1;
}

/* ref: FUN_00bc1af0 */
GEN_OWN GEN_FRAME uint F_00bc1af0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc1af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = F_00bc18e0(((int *)(gen_frame + 0x0)),8,0,*((undefined4 *)GEN_TOP((param_1 + 4))),param_2);
  iVar4 = 0;
  uVar3 = uVar2;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((int *)(gen_frame + 0x0))[(int)(iVar4)]));
      uVar3 = F_00a09fe0((int)(char)piVar1[0xb],(int)*((char *)GEN_TOP(((int)piVar1 + 0x2d))));
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,(undefined4)gen_fl2bits((float)(int)uVar3));
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar2);
  }
  return uVar3;
}

/* ref: FUN_00bc1b60 */
GEN_OWN GEN_FRAME uint F_00bc1b60(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc1b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = F_00bc1960(((int *)(gen_frame + 0x0)),8,0,*((undefined4 *)GEN_TOP((param_1 + 4))),param_2);
  iVar4 = 0;
  uVar3 = uVar2;
  if (0 < (int)uVar2) {
    do {
      piVar1 = ((int *)GEN_TOP(((int *)(gen_frame + 0x0))[(int)(iVar4)]));
      uVar3 = F_00a09fe0((int)(char)piVar1[0xb],(int)*((char *)GEN_TOP(((int)piVar1 + 0x2d))));
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,(undefined4)gen_fl2bits((float)(int)uVar3));
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar2);
  }
  return uVar3;
}

/* ref: FUN_00bc1bd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc1bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc1bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  return (uint)this;
}

/* ref: FUN_00bc1c50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc1c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc1c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_1 = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
  param_1[1] = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
  param_1[2] = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
  param_1[3] = *((undefined4 *)GEN_TOP(((int)this + 0x30)));
  return (uint)param_1;
}

/* ref: FUN_00bc1d60 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bc1d60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc1d60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((*((int *)GEN_TOP((in_ecx + 0x88))) != 2) && (*((int *)GEN_TOP((in_ecx + 0x88))) != 3)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00bc1de0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc1de0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc1de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x24))) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf22 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc1e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc1e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c))))(this GEN_EDX_FWD,4,&REFG(undefined, 0x13056c0));
  return uVar1;
}

/* ref: FUN_00bc1e50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc1e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc1e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_FWD)));
  if (this_00 != this) {
    uVar1 = F_00bc1e50(this_00 GEN_EDX_ARG,param_1);
    if ((char)uVar1 != '\0') {
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
  if (param_1 == 0) {
    return (uint)(*((int *)GEN_TOP(((int)this + 0x18))) != 0);
  }
  return (uint)((1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1) & *((uint *)GEN_TOP(((int)this + 0x18)))) != 0);
}

/* ref: FUN_00bc1ec0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc1ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc1ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00406520()));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,param_1,0x10);
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = param_1;
  *((uint *)GEN_TOP(((int)this + 0x8c))) = uVar2;
  return uVar2;
}

/* ref: FUN_00bc1ef0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc1ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc1ef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x8c))) != 0) {
    uVar1 = F_00406810(*((int *)GEN_TOP(((int)this + 0x8c))));
    *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  }
  return uVar1;
}

/* ref: FUN_00bc1f20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc1f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc1f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c))))(this GEN_EDX_FWD,5,&REFG(undefined, 0x13056c0));
  return uVar1;
}

/* ref: FUN_00bc1f50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc1f50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc1f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (*((char *)GEN_TOP((in_ecx + 0x80))) != '\0') {
    *((undefined4 *)GEN_TOP((in_ecx + 0x88))) = 3;
    return in_EAX;
  }
  if ((float10)*((float *)GEN_TOP((in_ecx + 100))) <= (float10)*((float *)GEN_TOP((in_ecx + 0x58)))) {
    *((float *)GEN_TOP((in_ecx + 0x58))) = *((float *)GEN_TOP((in_ecx + 100)));
    uVar1 = (*((char *)GEN_TOP((in_ecx + 0x81))) == '\0') + 2;
    *((uint *)GEN_TOP((in_ecx + 0x88))) = uVar1;
    return uVar1;
  }
  if ((float10)*((float *)GEN_TOP((in_ecx + 0x60))) <= (float10)*((float *)GEN_TOP((in_ecx + 0x58)))) {
    *((undefined4 *)GEN_TOP((in_ecx + 0x88))) = 1;
    return in_EAX;
  }
  *((undefined4 *)GEN_TOP((in_ecx + 0x88))) = 0;
  return in_EAX;
}

/* ref: FUN_00bc1fd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc1fd0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xbc1fd0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[1], &gen_a2, sizeof gen_a2);
  bool bVar1;
  bool bVar2;
  uint uVar3;
  float10 fVar4;
  
  if ((*((int *)GEN_TOP((param_1 + 0x74))) != 1) && (*((int *)GEN_TOP((param_1 + 0x7c))) != 0)) {
    if (*((int *)GEN_TOP((param_1 + 0x74))) == 0) {
      fVar4 = (float10)(*(float *)&gen_args[0]);
      bVar1 = (!GEN_ISNAN(fVar4) && !GEN_ISNAN((float10)*((float *)GEN_TOP((param_1 + 0x5c))))) &&
              !(fVar4 <= (float10)*((float *)GEN_TOP((param_1 + 0x5c))));
      bVar2 = fVar4 <= (float10)*((float *)GEN_TOP((param_1 + 0x58)));
    }
    else {
      fVar4 = (float10)(*(float *)&gen_args[0]);
      bVar1 = (!GEN_ISNAN(fVar4) && !GEN_ISNAN((float10)*((float *)GEN_TOP((param_1 + 0x5c))))) &&
              !(fVar4 <= (float10)*((float *)GEN_TOP((param_1 + 0x5c))));
      bVar2 = fVar4 <= (float10)*((float *)GEN_TOP((param_1 + 0x58)));
    }
    uVar3 = (uint)bVar1;
    if (bVar2) {
      uVar3 = uVar3 + 1;
    }
    return (uVar3 - 1) + *((int *)GEN_TOP((param_1 + 0x7c)));
  }
  fVar4 = (float10)(*(float *)&gen_args[0]);
  if ((*(undefined1 *)((char *)&(*(float *)&gen_args[1]) + 0)) == '\0') {
    bVar1 = (float10)*((float *)GEN_TOP((param_1 + 0x5c))) < fVar4;
  }
  else {
    bVar1 = (float10)*((float *)GEN_TOP((param_1 + 0x5c))) <= fVar4;
  }
  if ((bVar1) && (fVar4 <= (float10)*((float *)GEN_TOP((param_1 + 0x58))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bc2080 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc2080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc2080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  undefined * PTR32 * ppvVar2;
  undefined4 * puVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *((uint *)GEN_TOP(((int)this + 0x2c))) = *((uint *)GEN_TOP(((int)this + 0x2c))) & 0xffffffe8;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x16))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x1104994));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0x100;
  *((undefined2 *)GEN_TOP(((int)this + 0x84))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x94))) = REFG(void * PTR32, 0x14c599c);
  iVar1 = (int)REFG(void * PTR32, 0x14c599c) + 1;
  REFG(void * PTR32, 0x14c599c) = ((undefined *)GEN_TOP(iVar1));
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
  ppvVar2 = &REFG(void * PTR32, 0x14c599c);
  if (iVar1 < 1) {
    ppvVar2 = &(*(undefined * PTR32 *)(gen_frame + 0x0));
  }
  REFG(void * PTR32, 0x14c599c) = *ppvVar2;
  iVar1 = 4;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x48)));
  do {
    iVar1 = iVar1 - 1;
    puVar3 = puVar3 - 1;
    *puVar3 = 0;
  } while (iVar1 != 0);
  return (uint)this;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf6 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc2160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc2160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * this_00;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 4;
  puVar2 = ((undefined4 *)GEN_TOP(0x0));
  puVar1 = *(undefined4 * PTR32 *)(this + 0x1c);
  while (this_00 = puVar1, this_00 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = ((undefined4 *)GEN_TOP(this_00[7]));
    F_00bec2c0(this_00 GEN_EDX_FWD);
    puVar1 = puVar2;
    if (*((char *)GEN_TOP(((int)this_00 + 0x16))) == '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*this_00)))(this_00 GEN_EDX_ARG,1);
    }
  }
  puVar1 = *(undefined4 * PTR32 *)(this + 0x8c);
  *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) & 0xfffffffb;
  *(undefined4 * PTR32 *)(this + 0x1c) = puVar2;
  if (puVar1 != puVar2) {
    puVar1 = ((undefined4 *)GEN_TOP(F_00406810(puVar1)));
    *(undefined4 * PTR32 *)(this + 0x8c) = puVar2;
    *(undefined4 * PTR32 *)(this + 0x90) = puVar2;
  }
  return (uint)puVar1;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf1 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc21c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc21c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  bool bVar1;
  uint uVar2;
  int * piVar3;
  
  if (this[8] != (undefined1)0x0) {
    return 1;
  }
  bVar1 = true;
  if (*(int *)(this + 0x24) != 0) {
    piVar3 = *(int * PTR32 *)(this + 0x1c);
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      do {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_FWD);
        if ((char)uVar2 == '\0') {
          bVar1 = false;
        }
        piVar3 = ((int *)GEN_TOP(piVar3[7]));
      } while (piVar3 != ((int *)GEN_TOP(0x0)));
      if (!bVar1) {
        return bVar1;
      }
    }
    *(undefined2 *)(this + 8) = 1;
    if (*(int *)(this + 4) != 0) {
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 9))) = 1;
    }
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined2 *)(this + 0x14) = 0;
    return bVar1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf2 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bc2240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc2240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  if (this[0xe] != (undefined1)0x0) {
    return 1;
  }
  if (this[8] != (undefined1)0x0) {
    piVar1 = *(int * PTR32 *)(this + 0x1c);
    while( true ) {
      if (piVar1 == ((int *)GEN_TOP(0x0))) {
        this[0xe] = (undefined1)0x1;
        this[0x12] = (undefined1)0x0;
        if (*(int *)(this + 4) != 0) {
          *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x12))) = 1;
        }
        return 1;
      }
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
      if ((char)uVar2 == '\0') break;
      piVar1 = ((int *)GEN_TOP(piVar1[7]));
    }
    this[0x12] = (undefined1)0x0;
    return 0;
  }
  return 0;
}

/* ref: FUN_00bc22a0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bc22a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc22a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  while( true ) {
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return 1;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD);
    if ((char)uVar2 == '\0') break;
    piVar1 = ((int *)GEN_TOP(piVar1[7]));
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x14))) = 0;
  return 0;
}

/* ref: FUN_00bc22e0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bc22e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc22e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  while( true ) {
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      return 1;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_FWD);
    if ((char)uVar2 == '\0') break;
    piVar1 = ((int *)GEN_TOP(piVar1[7]));
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x15))) = 0;
  return 0;
}

/* ref: FUN_00bc2320 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bc2320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc2320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined2 *)GEN_TOP(((int)this + 8))) = 1;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 9))) = 1;
  }
  *((undefined2 *)GEN_TOP(((int)this + 10))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xd))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0xe))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0xf))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0x10))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0x11))) = 1;
  *((undefined2 *)GEN_TOP(((int)this + 0x12))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x15))) = 1;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x12))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x13))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
  }
  *((uint *)GEN_TOP(((int)this + 0x2c))) = *((uint *)GEN_TOP(((int)this + 0x2c))) | 2;
  return 0;
}

/* ref: FUN_00bc23a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc23a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc23a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  byte bVar2;
  undefined * pvVar3;
  
  bVar2 = 1;
  if ((param_1 != 0x12) && (param_1 != 0x1a)) {
    for (pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c))); pvVar3 != ((undefined *)GEN_TOP(0x0));
        pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar3 + 0x1c)))) {
      bVar1 = F_00bebca0(pvVar3 GEN_EDX_FWD,param_1);
      if (bVar1 == 0) {
        bVar2 = 0;
      }
    }
    return bVar2;
  }
  *((uint *)GEN_TOP(((int)this + 0x2c))) = *((uint *)GEN_TOP(((int)this + 0x2c))) & 0xfffffff7;
  pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x4c))))(this GEN_EDX_ARG);
    return 1;
  }
  do {
    bVar1 = F_00bebca0(pvVar3 GEN_EDX_ARG,param_1);
    if (bVar1 == 0) {
      bVar2 = 0;
LAB_00bc2417: ;
      if ((*((uint *)GEN_TOP(((int)this + 0x2c))) >> 3 & 1) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x4c))))(this GEN_EDX_ARG);
        return 0;
      }
    }
    else if (bVar2 == 0) goto LAB_00bc2417;
    pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar3 + 0x1c)));
    if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x4c))))(this GEN_EDX_ARG);
      return bVar2;
    }
  } while( true );
}

/* ref: FUN_00bc2450 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00bc2450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc2450u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0xa58, 8, 4);
  byte bVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xa50)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa54));
  if (*((int *)GEN_TOP(((int)this + 0x24))) != 0) {
    return 1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x14))) = 0;
  if (param_1 == 0) {
    F_00bc2320(this GEN_EDX_FWD);
  }
  else {
    F_00b5c440(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG);
    bVar1 = F_00bce490(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,this,param_2);
    if (bVar1 != 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0x38))) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 36));
      *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 40));
      *((undefined4 *)GEN_TOP(((int)this + 0x40))) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 44));
      *((undefined4 *)GEN_TOP(((int)this + 0x44))) = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 48));
      *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 1;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00bc2500 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bc2500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc2500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  bool bVar1;
  byte bVar2;
  undefined * this_00;
  
  bVar1 = true;
  if (*((int *)GEN_TOP(((int)this + 0x24))) != 1) {
    return 1;
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    do {
      if ((*((uint *)GEN_TOP(((int)this_00 + 0x24))) < 2) &&
         (bVar2 = F_00bec620(this_00 GEN_EDX_FWD,1,&REFG(undefined, 0x13056c0)), bVar2 == 0)) {
        bVar1 = false;
      }
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0x1c)));
    } while (this_00 != ((undefined *)GEN_TOP(0x0)));
    if (!bVar1) {
      return bVar1;
    }
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 2;
  return bVar1;
}

/* ref: FUN_00bc2550 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc2550(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc2550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  float fVar1;
  float fVar2;
  undefined * this;
  byte bVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  float local_c;
  volatile float local_8;
  
  uVar4 = (uint)*((ushort *)GEN_TOP((param_1[8] + 2)));
  local_8 = (float)uVar4;
  local_c = (float)(int)(*((ushort *)GEN_TOP((param_1[8] + 4))) - uVar4);
  uVar5 = 1;
  if (param_2 != 0) {
    uVar5 = (uint)(*((char *)GEN_TOP((param_2 + 0x23))) == '\0');
    fVar1 = *((float *)GEN_TOP(param_2));
    if ((GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0)) ||
       (fVar2 = *((float *)GEN_TOP((param_2 + 4))), GEN_ISNAN(fVar2) == (GEN_ISNAN(fVar2) || fVar2 == 0.0))) {
      fVar6 = (float10)fVar1;
      if (fVar6 < (float10)*((float *)GEN_TOP((param_2 + 4)))) {
        local_c = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_2 + 4))) - fVar6)));
      }
      goto LAB_00bc25da;
    }
  }
  fVar6 = (float10)uVar4;
LAB_00bc25da: ;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x54))))
                    (param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits((float)(float10)0),
                     (undefined4)gen_fl2bits((float)fVar6),(undefined4)gen_fl2bits(local_c),uVar5,0,
                     1);
  for (this = ((undefined *)GEN_TOP(param_1[7])); this != ((undefined *)GEN_TOP(0x0)); this = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c)))) {
    bVar3 = F_00bec620(this GEN_EDX_ARG,6,&REFG(undefined, 0x13056c0));
    uVar4 = CONCAT31(extraout_var,bVar3);
  }
  param_1[9] = 3;
  return uVar4;
}

/* ref: FUN_00bc2630 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bc2630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc2630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  
  for (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c))); this_00 != ((undefined *)GEN_TOP(0x0));
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0x1c)))) {
    F_00bec620(this_00 GEN_EDX_FWD,7,&REFG(undefined, 0x13056c0));
  }
  return;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf9 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc2660(GEN_P(float param_1, float gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(float * param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xbc2660u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(float * param_7 = (float *)(uintptr_t)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  
  (*(float *)(gen_frame + 0x0)) = param_1;
  iVar1 = *((int *)GEN_TOP(((int)gen_fl2bits(param_1) + 0x1c)));
  (*(float *)(gen_frame + 0x0)) = 0.0;
  for (; iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x1c)))) {
    F_00bebe20(iVar1 GEN_EDX_FWD,param_2,param_3,param_4,param_5,param_6,&(*(float *)(gen_frame + 0x0)),param_8);
  }
  if ((float10)*param_7 < (float10)(*(float *)(gen_frame + 0x0))) {
    *param_7 = (*(float *)(gen_frame + 0x0));
  }
  return;
}

/* ref: FUN_00bc26d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc26d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc26d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  for (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c))); this_00 != ((undefined *)GEN_TOP(0x0));
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0x1c)))) {
    F_00bebeb0(this_00 GEN_EDX_FWD,param_1);
  }
  if (*((char *)GEN_TOP(((int)this + 0x10))) == '\0') {
    if (*((char *)GEN_TOP(((int)this + 9))) != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG);
    }
    if (*((char *)GEN_TOP(((int)this + 8))) != '\0') {
      if ((*((char *)GEN_TOP(((int)this + 0x12))) != '\0') &&
         (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG), (char)uVar1 != '\0')) {
        *((undefined1 *)GEN_TOP(((int)this + 0x13))) = 1;
      }
      if ((*((char *)GEN_TOP(((int)this + 0x13))) != '\0') &&
         (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG), (char)uVar1 != '\0')) {
        *((undefined1 *)GEN_TOP(((int)this + 0x14))) = 1;
      }
      if ((*((char *)GEN_TOP(((int)this + 0xf))) != '\0') &&
         (((*((char *)GEN_TOP(((int)this + 0x14))) != '\0' || (*((int *)GEN_TOP(((int)this + 0x88))) == 2)) ||
          (*((int *)GEN_TOP(((int)this + 0x88))) == 3)))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
      }
    }
  }
  return;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf16 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc2770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc2770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  if (((*(uint *)(this + 0x2c) >> 2 & 1) == 0) && (*(undefined * PTR32 *)(this + 0x1c) != ((undefined *)GEN_TOP(0x0)))) {
    bVar1 = F_00bec460(*(undefined * PTR32 *)(this + 0x1c) GEN_EDX_FWD,param_1);
    return bVar1;
  }
  return (byte)(*(uint *)(this + 0x2c) >> 2);
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf17 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc27a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc27a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  bool bVar1;
  byte bVar2;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0x1c);
  bVar1 = false;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    do {
      bVar2 = F_00bebfb0(this_00 GEN_EDX_FWD,param_1);
      if (bVar2 != 0) {
        bVar1 = true;
      }
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0x1c)));
    } while (this_00 != ((undefined *)GEN_TOP(0x0)));
    if (bVar1) {
      *(undefined4 *)(this + 10) = 0x1010000;
    }
  }
  return;
}

/* ref: FUN_00bc27e0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bc27e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc27e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((char *)GEN_TOP(((int)this + 10))) != '\0') {
    *((undefined1 *)GEN_TOP(((int)this + 10))) = 0;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,3,0);
  *((undefined2 *)GEN_TOP(((int)this + 8))) = 1;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 9))) = 1;
  }
  *((undefined2 *)GEN_TOP(((int)this + 10))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xd))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0xe))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0xf))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0x10))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0x11))) = 1;
  *((undefined2 *)GEN_TOP(((int)this + 0x12))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x15))) = 1;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x12))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x13))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
  }
  *((uint *)GEN_TOP(((int)this + 0x2c))) = *((uint *)GEN_TOP(((int)this + 0x2c))) | 2;
  return 0;
}

/* ref: FUN_00bc2850 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bc2850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc2850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((char *)GEN_TOP(((int)this + 10))) != '\0') {
    *((undefined1 *)GEN_TOP(((int)this + 10))) = 0;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x48))))(this GEN_EDX_FWD,5,0);
  *((undefined2 *)GEN_TOP(((int)this + 8))) = 1;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 9))) = 1;
  }
  *((undefined2 *)GEN_TOP(((int)this + 10))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0xd))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0xe))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0xf))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0x10))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0x11))) = 1;
  *((undefined2 *)GEN_TOP(((int)this + 0x12))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x15))) = 1;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x12))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x13))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x15))) = 1;
  }
  *((uint *)GEN_TOP(((int)this + 0x2c))) = *((uint *)GEN_TOP(((int)this + 0x2c))) | 2;
  return 0;
}

/* ref: FUN_00bc28c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc28c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc28c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  byte bVar1;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(*param_2));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    param_2[1] = 0;
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c)));
    if (this_00 == ((undefined *)GEN_TOP(0x0))) goto LAB_00bc28f7;
  }
  do {
    bVar1 = F_00bec120(this_00 GEN_EDX_FWD,param_1,param_2 + 1);
    if (bVar1 != 0) {
      *param_2 = (int)this_00;
      return 1;
    }
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0x1c)));
  } while (this_00 != ((undefined *)GEN_TOP(0x0)));
LAB_00bc28f7: ;
  *param_2 = 0;
  return 0;
}

/* ref: FUN_00bc2920 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc2920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc2920u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  byte bVar1;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(*param_2));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    param_2[1] = 0;
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c)));
    if (this_00 == ((undefined *)GEN_TOP(0x0))) goto LAB_00bc2957;
  }
  do {
    bVar1 = F_00bec1a0(this_00 GEN_EDX_FWD,param_1,param_2 + 1);
    if (bVar1 != 0) {
      *param_2 = (int)this_00;
      return 1;
    }
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0x1c)));
  } while (this_00 != ((undefined *)GEN_TOP(0x0)));
LAB_00bc2957: ;
  *param_2 = 0;
  return 0;
}

/* ref: FUN_00bc2980 */
GEN_OWN GEN_FRAME double GEN_THISCALL F_00bc2980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc2980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  double dVar1;
  undefined * this_00;
  float fVar2;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    dVar1 = 0.0;
  }
  else {
    while( true ) {
      fVar2 = F_00bec210(this_00 GEN_EDX_FWD);
      dVar1 = (double)fVar2;
      if (GEN_ISNAN(dVar1) == (GEN_ISNAN(dVar1) || dVar1 == 0.0)) break;
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0x1c)));
      if (this_00 == ((undefined *)GEN_TOP(0x0))) {
        return dVar1;
      }
    }
  }
  return dVar1;
}

/* ref: FUN_00bc29d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc29d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc29d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  
  if (param_1 == 1) {
    F_00bc1f50(this GEN_EDX_FWD);
    this = (((undefined *)GEN_TOP((uint)(this))));
  }
  *((int *)GEN_TOP(((int)this + 0x78))) = param_1;
  *((int *)GEN_TOP(((int)this + 0x74))) = param_1;
  return;
}

/* ref: FUN_00bc29f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc29f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc29f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((uint *)GEN_TOP(((int)this + 0x2c))) = *((uint *)GEN_TOP(((int)this + 0x2c))) | 1;
  *((undefined2 *)GEN_TOP(((int)this + 0x12))) = 0x101;
  *((undefined1 *)GEN_TOP(((int)this + 0x14))) = 1;
  uVar1 = F_00bc1f50(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP((((int)(uint)(this)) + 0x74))) = 1;
  *((undefined4 *)GEN_TOP((((int)(uint)(this)) + 0x78))) = 1;
  return uVar1;
}

/* ref: FUN_00bc2a10 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc2a10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc2a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  int in_ecx_00;
  
  for (in_ecx_00 = *((int *)GEN_TOP((in_ecx + 0x1c))); in_ecx_00 != 0; in_ecx_00 = *((int *)GEN_TOP((in_ecx_00 + 0x1c))))
  {
    F_00beb840(in_ecx_00 GEN_EDX_FWD,param_2);
  }
  return;
}

/* ref: FUN_00bc2a40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc2a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc2a40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x1c)));
  iVar3 = iVar1;
  while( true ) {
    if (iVar3 == 0) {
      while( true ) {
        if (iVar1 == 0) {
          return 0;
        }
        if (((*((int *)GEN_TOP((iVar1 + 0x24))) == 2) && (uVar2 = *((uint *)GEN_TOP((iVar1 + 0x20))), uVar2 != 0)) &&
           (*((char *)GEN_TOP((uVar2 + 0x11))) != '\0')) break;
        iVar1 = *((int *)GEN_TOP((iVar1 + 0x1c)));
      }
      return uVar2;
    }
    if ((((*((int *)GEN_TOP((iVar3 + 0x24))) == 1) || (*((int *)GEN_TOP((iVar3 + 0x24))) == 0)) &&
        (uVar2 = *((uint *)GEN_TOP((iVar3 + 0x20))), uVar2 != 0)) && (*((char *)GEN_TOP((uVar2 + 0x11))) != '\0')) break;
    iVar3 = *((int *)GEN_TOP((iVar3 + 0x1c)));
  }
  return uVar2;
}

/* ref: FUN_00bc2aa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc2aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc2aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xfc, 4, 4);
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined * this_00;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf8);
  (*(uint *)(gen_frame + 0xf4)) = uVar2;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = ((undefined *)GEN_TOP(0x0));
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(0x0));
  do {
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x4));
    if ((*(undefined * PTR32 *)(gen_frame + 0x4)) == ((undefined *)GEN_TOP(0x0))) {
      ((undefined * PTR32 *)(gen_frame + 0x8))[0] = (*(undefined * PTR32 *)(gen_frame + 0x4));
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c)));
      goto joined_r0x00bc2ad4;
    }
    while( true ) {
      bVar1 = F_00bec1a0(this_00 GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x0)),((undefined * PTR32 *)(gen_frame + 0x8)));
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) break;
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0x1c)));
joined_r0x00bc2ad4: ;
      if (this_00 == ((undefined *)GEN_TOP(0x0))) {
        return uVar2;
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this_00;
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x0)) + 0x2c))) == 9) {
      uVar2 = F_00be2510((*(undefined * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
    }
  } while( true );
}

/* ref: FUN_00bc2b40 */
GEN_OWN_GS GEN_FRAME float GEN_THISCALL F_00bc2b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc2b40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x100, 0, 4);
  byte bVar1;
  undefined * this_00;
  float10 extraout_ST0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xf8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc));
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1090708);
  if (*((char *)GEN_TOP(((int)this + 0x13))) != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  }
  if (*((char *)GEN_TOP(((int)this + 0xf))) == '\0') {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(0x0));
    (*(int * PTR32 *)(gen_frame + 0x0)) = ((int *)GEN_TOP(0x0));
    do {
      this_00 = (*(undefined * PTR32 *)(gen_frame + 0x8));
      if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == ((undefined *)GEN_TOP(0x0))) {
        this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c)));
        ((undefined4 *)(gen_frame + 0xc))[0] = 0;
        goto joined_r0x00bc2bb5;
      }
      while (bVar1 = F_00bec1a0(this_00 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),((undefined4 *)(gen_frame + 0xc))), bVar1 == 0) {
        this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0x1c)));
joined_r0x00bc2bb5: ;
        if (this_00 == ((undefined *)GEN_TOP(0x0))) {
          return (*(float *)(gen_frame + 0x4));
        }
      }
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = this_00;
      if ((*(int * PTR32 *)(gen_frame + 0x0))[0xb] == 6) {
        extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x58))))((*(int * PTR32 *)(gen_frame + 0x0)));
        if ((float10)(*(float *)(gen_frame + 0x4)) < (float10)(float)extraout_ST0) {
          (*(float *)(gen_frame + 0x4)) = (float)extraout_ST0;
        }
      }
    } while( true );
  }
  return REFG(float, 0x1090708);
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf21 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc2c50(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined1 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xbc2c50u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined1 param_6 = (undefined1)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  bool bVar1;
  uint uVar2;
  bool bVar3;
  
  bVar3 = GEN_ISNAN(*((float *)GEN_TOP((param_1 + 0x70)))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  bVar1 = *((float *)GEN_TOP((param_1 + 0x70))) == *(float *)&REFG(undefined, 0x1088114);
  *((float *)GEN_TOP((param_1 + 0x5c))) = param_2;
  *((float *)GEN_TOP((param_1 + 0x58))) = param_2;
  *((undefined4 *)GEN_TOP((param_1 + 0x74))) = param_5;
  *((undefined4 *)GEN_TOP((param_1 + 0x78))) = param_5;
  *((float *)GEN_TOP((param_1 + 0x60))) = param_3;
  *((float *)GEN_TOP((param_1 + 0x68))) = param_4;
  if (bVar3 != (bVar3 || bVar1)) {
    *((float *)GEN_TOP((param_1 + 0x6c))) = param_4;
  }
  *((undefined1 *)GEN_TOP((param_1 + 0x82))) = 0;
  *((undefined1 *)GEN_TOP((param_1 + 0x81))) = param_6;
  *((float *)GEN_TOP((param_1 + 100))) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x6c))) + (float10)param_3)));
  *((undefined4 *)GEN_TOP((param_1 + 0x7c))) = 0;
  *((undefined1 *)GEN_TOP((param_1 + 0x80))) = 0;
  uVar2 = F_00bc1f50(param_1 GEN_EDX_FWD);
  return uVar2;
}

/* ref: FUN_00bc2cd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc2cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc2cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x80))) = 0;
  uVar1 = F_00bc1f50(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP((((int)(uint)(this)) + 0x34))) = 0;
  return uVar1;
}

/* ref: FUN_00bc2d00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc2d00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc2d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  *((undefined1 *)GEN_TOP((in_ecx + 0x80))) = 0;
  uVar1 = F_00bc1f50(in_ecx GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00bc2d10 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc2d10(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc2d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_FRAME_DECL(0x1c, 4);
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  
  (*(byte *)(gen_frame + 0x17)) = 0;
  if (*((char *)GEN_TOP((param_1 + 0x80))) == '\0') {
    if (*((char *)GEN_TOP((param_1 + 0x82))) == '\0') {
      *((undefined4 *)GEN_TOP((param_1 + 0x5c))) = *((undefined4 *)GEN_TOP((param_1 + 0x58)));
      fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x58))) + (float10)*((float *)GEN_TOP(param_2)))));
      *((float *)GEN_TOP((param_1 + 0x58))) = fVar1;
      if ((float10)fVar1 < (float10)0) {
        return 0;
      }
      fVar1 = *((float *)GEN_TOP((param_1 + 0x6c)));
      (*(float *)(gen_frame + 0xc)) = fVar1;
      *((undefined4 *)GEN_TOP((param_1 + 0x7c))) = 0;
      if (*((int *)GEN_TOP((param_1 + 0x74))) != 1) {
        fVar2 = *((float *)GEN_TOP((param_1 + 100)));
        (*(float *)(gen_frame + 0x10)) = fVar2;
        fVar5 = (float10)fVar2;
        fVar6 = (float10)*((float *)GEN_TOP((param_1 + 0x58)));
        if (fVar5 <= fVar6) {
          if (((*((char *)GEN_TOP((param_1 + 0x85))) == '\0') && (*((char *)GEN_TOP((param_1 + 0x84))) != '\0')) ||
             ((float10)*((float *)GEN_TOP((param_1 + 0x5c))) < fVar5)) {
            *((float *)GEN_TOP((param_1 + 0x58))) = fVar2;
            *((float *)GEN_TOP(param_2)) = ((float)GEN_TOF((fVar5 - (float10)*((float *)GEN_TOP((param_1 + 0x5c))))));
            *((undefined4 *)GEN_TOP((param_1 + 0x88))) = 1;
            return 0;
          }
          F_00b5f8f0(((float)GEN_TOF(((fVar6 - (float10)*((float *)GEN_TOP((param_1 + 0x60)))) / (float10)fVar1))),
                       &(*(float *)(gen_frame + 0x8)));
          (*(ushort *)(gen_frame + 0x4)) = gen_x87_cw | 0xc00;
          gen_set_x87_cw((unsigned short)(*(ushort *)(gen_frame + 0x4)));
          (*(uint *)(gen_frame + 0x0)) = (uint)(longlong)TRUNC((float10)(*(float *)(gen_frame + 0x8)));
          *((uint *)GEN_TOP((param_1 + 0x7c))) = (*(uint *)(gen_frame + 0x0));
          gen_set_x87_cw((unsigned short)gen_x87_cw);
          if (((*(uint *)(gen_frame + 0x0)) < 2) || (*((char *)GEN_TOP((param_1 + 0x83))) == '\0')) {
            fVar5 = (float10)(int)(*(uint *)(gen_frame + 0x0));
            if ((int)(*(uint *)(gen_frame + 0x0)) < 0) {
              fVar5 = GEN_X87(fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110));
            }
            *((float *)GEN_TOP((param_1 + 0x58))) =
                 ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x58))) -
                        (float10)(float)(fVar5 * (float10)(*(float *)(gen_frame + 0xc))))));
          }
          else {
            fVar1 = *((float *)GEN_TOP((param_1 + 100)));
            (*(float *)(gen_frame + 0x10)) = fVar1;
            *((undefined4 *)GEN_TOP((param_1 + 0x7c))) = 1;
            *((float *)GEN_TOP((param_1 + 0x58))) = fVar1;
            *((float *)GEN_TOP(param_2)) =
                 ((float)GEN_TOF((((float10)fVar1 - (float10)*((float *)GEN_TOP((param_1 + 0x5c)))) + (float10)(*(float *)(gen_frame + 0xc)))))
            ;
          }
          *((int *)GEN_TOP((param_1 + 0x78))) = *((int *)GEN_TOP((param_1 + 0x78))) + *((int *)GEN_TOP((param_1 + 0x7c)));
          (*(byte *)(gen_frame + 0x17)) = 1;
          if (*((char *)GEN_TOP((param_1 + 0x83))) != '\0') {
            *((undefined1 *)GEN_TOP((param_1 + 0x84))) = 1;
            *((undefined4 *)GEN_TOP((param_1 + 0x88))) = 1;
            return 1;
          }
        }
        else if (fVar6 < (float10)*((float *)GEN_TOP((param_1 + 0x60)))) {
          if (*((int *)GEN_TOP((param_1 + 0x78))) != 0) {
            F_00b5f8f0(((float)GEN_TOF((((float10)*((float *)GEN_TOP((param_1 + 0x60))) - fVar6) / (float10)fVar1))),
                         &(*(float *)(gen_frame + 0x8)));
            (*(ushort *)(gen_frame + 0x4)) = gen_x87_cw | 0xc00;
            uVar3 = *((uint *)GEN_TOP((param_1 + 0x78)));
            gen_set_x87_cw((unsigned short)(*(ushort *)(gen_frame + 0x4)));
            (*(uint *)(gen_frame + 0x0)) = (uint)(longlong)TRUNC((float10)(*(float *)(gen_frame + 0x8)));
            uVar4 = (*(uint *)(gen_frame + 0x0)) + 1;
            *((uint *)GEN_TOP((param_1 + 0x7c))) = uVar4;
            gen_set_x87_cw((unsigned short)gen_x87_cw);
            if (uVar4 <= uVar3) {
              fVar5 = (float10)(int)uVar4;
              *((uint *)GEN_TOP((param_1 + 0x78))) = uVar3 - uVar4;
              if ((int)uVar4 < 0) {
                fVar5 = GEN_X87(fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110));
              }
              *((undefined4 *)GEN_TOP((param_1 + 0x88))) = 1;
              *((float *)GEN_TOP((param_1 + 0x58))) =
                   ((float)GEN_TOF(((float10)(float)(fVar5 * (float10)(*(float *)(gen_frame + 0xc))) +
                          (float10)*((float *)GEN_TOP((param_1 + 0x58))))));
              return (*(byte *)(gen_frame + 0x17));
            }
            *((uint *)GEN_TOP((param_1 + 0x7c))) = uVar3;
            fVar5 = (float10)*((int *)GEN_TOP((param_1 + 0x7c)));
            *((undefined4 *)GEN_TOP((param_1 + 0x78))) = 0;
            if ((int)uVar3 < 0) {
              fVar5 = GEN_X87(fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110));
            }
            *((float *)GEN_TOP((param_1 + 0x58))) =
                 ((float)GEN_TOF(((float10)(float)(fVar5 * (float10)(*(float *)(gen_frame + 0xc))) +
                        (float10)*((float *)GEN_TOP((param_1 + 0x58))))));
            F_00bc1f50(param_1 GEN_EDX_ARG);
            return (*(byte *)(gen_frame + 0x17));
          }
          goto LAB_00bc2f9b;
        }
        *((undefined4 *)GEN_TOP((param_1 + 0x88))) = 1;
        return (*(byte *)(gen_frame + 0x17));
      }
      (*(float *)(gen_frame + 0x10)) = *((float *)GEN_TOP((param_1 + 100)));
      fVar5 = (float10)*((float *)GEN_TOP((param_1 + 100)));
      if (fVar5 <= (float10)*((float *)GEN_TOP((param_1 + 0x58)))) {
        *((float *)GEN_TOP(param_2)) = ((float)GEN_TOF((fVar5 - (float10)*((float *)GEN_TOP((param_1 + 0x5c))))));
        F_00bc1f50(param_1 GEN_EDX_ARG);
        return (*(byte *)(gen_frame + 0x17));
      }
LAB_00bc2f9b: ;
      F_00bc1f50(param_1 GEN_EDX_ARG);
      return (*(byte *)(gen_frame + 0x17));
    }
    *((undefined4 *)GEN_TOP(param_2)) = 0;
  }
  return 0;
}

/* ref: FUN_00bc2fd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc2fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc2fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x1104994));
  uVar1 = F_00bc2160(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10f34d4));
  return uVar1;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf3 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bc2ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc2ff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  if (this[0xf] != (undefined1)0x0) {
    return 1;
  }
  if (this[8] != (undefined1)0x0) {
    piVar1 = *(int * PTR32 *)(this + 0x1c);
    while( true ) {
      if (piVar1 == ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x60))))(this GEN_EDX_FWD);
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG);
        if (((*(int *)(this + 0x74) == 0) && (uVar3 != 0)) &&
           (bVar2 = F_00bcfbc0(uVar3 GEN_EDX_ARG), bVar2 != 0)) {
          F_00bc1f50(this GEN_EDX_ARG);
          *(undefined4 *)(this + 0x74) = 1;
          *(undefined4 *)(this + 0x78) = 1;
        }
        this[0xf] = (undefined1)0x1;
        this[0x13] = (undefined1)0x0;
        if (*(int *)(this + 4) != 0) {
          *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x13))) = 1;
        }
        return 1;
      }
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
      if ((char)uVar3 == '\0') break;
      piVar1 = ((int *)GEN_TOP(piVar1[7]));
    }
    this[0x13] = (undefined1)0x0;
    return 0;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf7 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00bc3080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc3080u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_GS(0x19, 7, 4);
  undefined4 uVar1;
  undefined * this_00;
  byte bVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x11)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x15));
  uVar1 = param_2[2];
  (*(undefined4 *)(gen_frame + 0x1)) = *param_2;
  (*(undefined4 *)(gen_frame + 0xd)) = param_2[3];
  (*(int *)(gen_frame + 0x5)) = param_2[1];
  (*(undefined4 *)(gen_frame + 0x9)) = uVar1;
  (*(byte *)(gen_frame + 0x0)) = 1;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 4: ;
  case 5: ;
    F_00bc1f50(this GEN_EDX_FWD);
    *(undefined4 *)(this + 0x74) = 1;
    *(undefined4 *)(this + 0x78) = 1;
    break;
  case 10: ;
    if (this[0x80] != (undefined1)0x0) {
      return 1;
    }
    *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) & 0xfffffffe;
    *(undefined4 *)(this + 10) = 0;
    *(undefined2 *)(this + 0xe) = 0;
    this[0x10] = (undefined1)0x0;
    *(undefined2 *)(this + 0x12) = 0;
    this[0x14] = (undefined1)0x0;
    F_00bc2cd0(this GEN_EDX_ARG);
    break;
  case 0xb: ;
    *(undefined4 *)(this + 10) = 0;
    *(undefined2 *)(this + 0xe) = 0;
    this[0x10] = (undefined1)0x0;
    *(undefined2 *)(this + 0x12) = 0;
    this[0x14] = (undefined1)0x0;
    break;
  case 0x17: ;
  case 0x18: ;
    *(int *)(this + 0x34) = *(int *)(this + 0x34) + 1;
  case 0x16: ;
    (*(int *)(gen_frame + 0x5)) = *(int *)(this + 0x34);
    break;
  case 0x1e: ;
    if (param_2[1] == 9) {
      F_00bc29f0(this GEN_EDX_ARG);
    }
    this[0x80] = (undefined1)0x1;
    *(undefined4 *)(this + 0x88) = 3;
  }
  this_00 = *(undefined * PTR32 *)(this + 0x1c);
  if (param_1 == 0x13) {
    for (; this_00 != ((undefined *)GEN_TOP(0x0)); this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0x1c)))) {
      if ((*((uint *)GEN_TOP(((int)this_00 + 0x24))) < 2) &&
         (bVar2 = F_00bec620(this_00 GEN_EDX_ARG,0x13,&(*(undefined4 *)(gen_frame + 0x1))), bVar2 == 0)) {
        (*(byte *)(gen_frame + 0x0)) = 0;
      }
    }
  }
  else {
    for (; this_00 != ((undefined *)GEN_TOP(0x0)); this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0x1c)))) {
      bVar2 = F_00bec620(this_00 GEN_EDX_ARG,param_1,&(*(undefined4 *)(gen_frame + 0x1)));
      if (bVar2 == 0) {
        (*(byte *)(gen_frame + 0x0)) = 0;
      }
    }
  }
  if (param_1 == 0x11) {
    this[0x82] = (undefined1)0x0;
  }
  else if (param_1 == 0x1d) {
    if ((*(byte *)(gen_frame + 0x0)) == 0) {
      *(undefined4 *)(this + 10) = 0x1010000;
    }
  }
  else if ((param_1 == 0x1e) && ((((*(int *)(gen_frame + 0x5)) == 1 || ((*(int *)(gen_frame + 0x5)) == 3)) || ((*(int *)(gen_frame + 0x5)) == 5)))) {
    *(undefined4 *)(this + 10) = 0x1000000;
    *(undefined2 *)(this + 0xe) = 0x101;
    this[0x10] = (undefined1)0x1;
    *(undefined2 *)(this + 0x12) = 0;
    this[0x14] = (undefined1)0x0;
    if (*(int *)(this + 4) != 0) {
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x12))) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x13))) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x14))) = 1;
    }
  }
  return (*(byte *)(gen_frame + 0x0));
}

/* ref: FUN_00bc3270 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc3270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xbc3270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint * puVar1;
  undefined * this_00;
  byte bVar2;
  uint uVar3;
  
  this_00 = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(undefined * PTR32 *)&gen_args[0]) != ((undefined *)GEN_TOP(0x0))) {
    uVar3 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) >> 1;
    if (((uVar3 & 1) == 0) || ((uVar3 & 1) == 0)) {
      bVar2 = F_00bcd860((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
      if (bVar2 == 0) {
        uVar3 = F_00bcd800(this_00 GEN_EDX_ARG,&(*(undefined * PTR32 *)&gen_args[0]));
        return uVar3;
      }
      if ((*((uint *)GEN_TOP(((int)this + 0x2c))) >> 4 & 1) == 0) {
        return 0;
      }
      puVar1 = ((uint *)GEN_TOP(((int)this_00 + 0x5c)));
      *puVar1 = *puVar1 | 2;
    }
    F_00bc27e0(this GEN_EDX_ARG);
  }
  return 0;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf18 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc32d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc32d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte local_5;
  
  local_5 = 0;
  if (param_1 == 9) {
    *(uint *)(this + 0x2c) = *(uint *)(this + 0x2c) | 1;
    *(undefined2 *)(this + 0x12) = 0x101;
    this[0x14] = (undefined1)0x1;
    F_00bc1f50(this GEN_EDX_FWD);
    *(undefined4 *)(this + 0x74) = 1;
    *(undefined4 *)(this + 0x78) = 1;
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG);
  if (uVar3 != 0) {
    *((undefined1 *)GEN_TOP((uVar3 + 0xf0))) = 1;
  }
  this_00 = *(undefined * PTR32 *)(this + 0x1c);
  this[0x80] = (undefined1)0x1;
  *(undefined4 *)(this + 0x88) = 3;
  bVar1 = local_5;
  for (; this_00 != ((undefined *)GEN_TOP(0x0)); this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0x1c)))) {
    bVar2 = F_00bec010(this_00 GEN_EDX_ARG,param_1,param_2);
    if (bVar2 != 0) {
      bVar1 = 1;
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
  if (((param_1 == 1) || (param_1 == 3)) || (param_1 == 5)) {
    *(undefined4 *)(this + 10) = 0x1000000;
    *(undefined2 *)(this + 0xe) = 0x101;
    this[0x10] = (undefined1)0x1;
    *(undefined2 *)(this + 0x12) = 0;
    this[0x14] = (undefined1)0x0;
    if (*(int *)(this + 4) != 0) {
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x12))) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x13))) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x14))) = 1;
    }
  }
  return bVar1;
}

/* ref: FUN_00bc33b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc33b0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc33b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  int * this;
  int * piVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x48))))(param_1 GEN_EDX_FWD,9,0);
  this = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 100))))(param_1 GEN_EDX_ARG)));
  piVar1 = this;
  if ((this != ((int *)GEN_TOP(0x0))) && (this[0x37] == 0)) {
    if (param_2 != '\0') {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x94))))(this GEN_EDX_ARG)));
      if (((*((char *)GEN_TOP(((int)this + 0x24a))) != '\0') || (piVar1 == ((int *)GEN_TOP(0x0)))) ||
         (*((char *)GEN_TOP(((int)piVar1 + 0x23))) == '\0')) {
        this[0xb] = this[0xb] | 1;
        *((undefined2 *)GEN_TOP(((int)this + 0x12))) = 0x101;
        *(undefined1 *)(this + 5) = 1;
        piVar1 = ((int *)GEN_TOP(F_00bc1f50(this GEN_EDX_ARG)));
        this[0x1d] = 1;
        this[0x1e] = 1;
      }
    }
    if (*((char *)GEN_TOP(((int)this + 0x24a))) != '\0') {
      piVar1 = ((int *)GEN_TOP(F_00bd0910(this GEN_EDX_ARG)));
    }
  }
  return (uint)piVar1;
}

/* ref: FUN_00bc3440 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00bc3440(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xbc3440u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_FRAME_DECL_GS(0x18, 8, 4);
  uint uVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined * pvVar3;
  uint uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14));
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x18)));
  if (param_3 == 0) {
    if (param_2 == 0) {
      *((undefined4 *)GEN_TOP((param_1 + 0x18))) = 0;
      goto LAB_00bc3486;
    }
    uVar4 = ~(1 << GEN_SHC((byte)param_2, (unsigned int)(uintptr_t)param_2)) & uVar1;
  }
  else {
    uVar4 = 1 << GEN_SHC((byte)param_2, (unsigned int)(uintptr_t)param_2) | uVar1;
  }
  *((uint *)GEN_TOP((param_1 + 0x18))) = uVar4;
LAB_00bc3486: ;
  (*(uint *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x0)) + 0)) = param_3;
  (*(uint *)(gen_frame + 0x0)) = (uint)param_3;
  if (param_4 == '\0') {
    if (*((uint *)GEN_TOP((param_1 + 0x18))) != uVar1) {
      pvVar3 = *((undefined * PTR32 *)GEN_TOP((param_1 + 0x1c)));
      (*(int *)(gen_frame + 0x4)) = param_2;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      for (; pvVar3 != ((undefined *)GEN_TOP(0x0)); pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar3 + 0x1c)))) {
        bVar2 = F_00bec620(pvVar3 GEN_EDX_FWD,0x1f,&(*(uint *)(gen_frame + 0x0)));
        param_1 = CONCAT31(extraout_var_00,bVar2);
      }
    }
  }
  else {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((param_1 + 0x1c)));
    (*(int *)(gen_frame + 0x4)) = param_2;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
      do {
        bVar2 = F_00bec620(pvVar3 GEN_EDX_ARG,0x20,&(*(uint *)(gen_frame + 0x0)));
        pvVar3 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar3 + 0x1c)));
      } while (pvVar3 != ((undefined *)GEN_TOP(0x0)));
      return CONCAT31(extraout_var,bVar2);
    }
  }
  return param_1;
}

/* ref: FUN_00bc3520 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc3520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xbc3520u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined * param_5 = (undefined *)(uintptr_t)gen_a5;)
  int * piVar1;
  int iVar2;
  undefined * pvVar3;
  int iVar4;
  
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x14))) = 0;
  if (4 < param_3) {
    param_3 = 0;
  }
  if (param_5 == ((undefined *)GEN_TOP(0x0))) {
    if (param_1 == ((undefined *)GEN_TOP(0x0))) {
      pvVar3 = ((undefined *)GEN_TOP(F_00406b90(0x3c,0,0)));
      if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
        pvVar3 = ((undefined *)GEN_TOP(0x0));
        F_00beb600();
      }
      else {
        pvVar3 = ((undefined *)GEN_TOP(F_00beb860(pvVar3 GEN_EDX_ARG,param_2,param_3,param_4)));
        F_00beb600();
      }
    }
    else {
      pvVar3 = ((undefined *)GEN_TOP(F_00beb860(param_1 GEN_EDX_ARG,param_2,param_3,param_4)));
      *((undefined1 *)GEN_TOP(((int)pvVar3 + 0x16))) = 1;
      F_00beb600();
    }
  }
  else {
    F_00beb960(param_5 GEN_EDX_ARG,param_2,param_3,param_4);
    pvVar3 = param_5;
  }
  *((undefined * PTR32 *)GEN_TOP(((int)pvVar3 + 4))) = this;
  piVar1 = ((int *)GEN_TOP(((int)pvVar3 + 0x18)));
  iVar2 = *((int *)GEN_TOP(((int)this + 0x1c)));
  if (*((int *)GEN_TOP(((int)this + 0x1c))) == 0) {
    *piVar1 = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x1c))) = 0;
    *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c))) = pvVar3;
    return (uint)pvVar3;
  }
  do {
    iVar4 = iVar2;
    iVar2 = *((int *)GEN_TOP((iVar4 + 0x1c)));
  } while (*((int *)GEN_TOP((iVar4 + 0x1c))) != 0);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    *((undefined * PTR32 *)GEN_TOP((iVar4 + 0x1c))) = pvVar3;
    *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x1c))) = 0;
    *piVar1 = iVar4;
    return (uint)pvVar3;
  }
  *((undefined4 *)GEN_TOP((iVar4 + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x1c))) = 0;
  *(int *)&REFG(undefined, 0x0) = iVar4;
  return (uint)pvVar3;
}

/* ref: FUN_00bc3620 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc3620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xbc3620u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x88))))(this GEN_EDX_FWD);
  if (uVar1 == 0) {
LAB_00bc365c: ;
    uVar3 = F_00b597c0(REFG(void * PTR32, 0x14c4e78) GEN_EDX_ARG,param_2);
    if (uVar3 != 0) goto LAB_00bc36b6;
    uVar2 = F_0052ed20(REFG(undefined4, 0x1375b00) GEN_EDX_ARG,param_2,0,0);
    uVar3 = F_00b59750(REFG(void * PTR32, 0x14c4e78) GEN_EDX_ARG,uVar2,0);
    if (uVar2 == 0) goto LAB_00bc36b6;
  }
  else {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x8c))))(this GEN_EDX_ARG,param_3);
    uVar3 = F_00b59750(REFG(void * PTR32, 0x14c4e78) GEN_EDX_ARG,uVar2,1);
    if (uVar2 == 0) goto LAB_00bc365c;
  }
  if (uVar3 == 0) {
    uVar3 = F_00b59f90(REFG(void * PTR32, 0x14c4e78) GEN_EDX_ARG,uVar2);
    *((int *)GEN_TOP(((int)this + 0x90))) = *((int *)GEN_TOP(((int)this + 0x90))) + 0x4a8;
    if (uVar1 != 0) {
      *((undefined1 *)GEN_TOP((uVar3 + 0x3f9))) = 1;
    }
  }
LAB_00bc36b6: ;
  uVar1 = F_00bc3520(this GEN_EDX_ARG,param_1,uVar3,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00bc36e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc36e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc36e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xfc, 4, 4);
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined * this_00;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf8);
  (*(uint *)(gen_frame + 0xf4)) = uVar2;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = ((undefined *)GEN_TOP(0x0));
  (*(uint *)(gen_frame + 0x0)) = 0;
  do {
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x4));
    if ((*(undefined * PTR32 *)(gen_frame + 0x4)) == ((undefined *)GEN_TOP(0x0))) {
      ((undefined * PTR32 *)(gen_frame + 0x8))[0] = (*(undefined * PTR32 *)(gen_frame + 0x4));
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c)));
      goto joined_r0x00bc3714;
    }
    while( true ) {
      bVar1 = F_00bec1a0(this_00 GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x0)),((undefined * PTR32 *)(gen_frame + 0x8)));
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) break;
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0x1c)));
joined_r0x00bc3714: ;
      if (this_00 == ((undefined *)GEN_TOP(0x0))) {
        return uVar2;
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this_00;
    uVar2 = (*(uint *)(gen_frame + 0x0));
    if ((*((byte *)GEN_TOP(((*(uint *)(gen_frame + 0x0)) + 0x7c))) >> 4 & 1) != 0) {
      *((ushort *)GEN_TOP(((*(uint *)(gen_frame + 0x0)) + 0x7c))) = *((ushort *)GEN_TOP(((*(uint *)(gen_frame + 0x0)) + 0x7c))) | 0x40;
    }
  } while( true );
}

/* ref: FUN_00bc3780 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc3780(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbc3780u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  float fVar1;
  bool bVar2;
  
  fVar1 = *((float *)GEN_TOP((param_1 + 0x58)));
  (*(float *)(gen_frame + 0x8)) = fVar1;
  bVar2 = GEN_ISNAN((float10)fVar1) || GEN_ISNAN((float10)param_2);
  if (bVar2 == (bVar2 || (float10)fVar1 == (float10)param_2)) {
    *((float *)GEN_TOP((param_1 + 0x58))) = param_2;
    *((undefined1 *)GEN_TOP((param_1 + 0x82))) = 0;
    (*(float *)(gen_frame + 0x8)) = 0.0;
    F_00bc2d10(param_1 GEN_EDX_FWD,(uint)&(*(float *)(gen_frame + 0x8)));
    *((float *)GEN_TOP((param_1 + 0x5c))) = fVar1;
    *((undefined4 *)GEN_TOP((param_1 + 0x7c))) = 0;
  }
  *((undefined1 *)GEN_TOP((param_1 + 0x80))) = 0;
  F_00bc1f50(param_1 GEN_EDX_ARG);
  (*(undefined2 *)(gen_frame + 0x4)) = (undefined2)(gen_x87_cw | 0xc00);
  gen_set_x87_cw((unsigned short)(*(undefined2 *)(gen_frame + 0x4)));
  (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)(longlong)TRUNC((float10)param_2);
  *((undefined4 *)GEN_TOP((param_1 + 0x34))) = (*(undefined4 *)(gen_frame + 0x0));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  return gen_x87_cw | 0xc00;
}

/* ref: FUN_00bc3830 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc3830(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc3830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00bc3840 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc3840(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc3840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00bc3850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc3850(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc3850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return in_ecx + (param_2 >> 4) * 2;
}

/* ref: FUN_00bc38a0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bc38a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc38a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined4 *)GEN_TOP(((int)this + 10))) = 0x1000000;
  *((undefined2 *)GEN_TOP(((int)this + 0xe))) = 0x101;
  *((undefined1 *)GEN_TOP(((int)this + 0x10))) = 1;
  *((undefined2 *)GEN_TOP(((int)this + 0x12))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x14))) = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x12))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x13))) = 1;
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) = 1;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf14 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bc38e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc38e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf15 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bc38f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc38f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf19 */
GEN_OWN GEN_NOFRAME unsigned int F_00bc3900(void)
{
  GEN_ENTER(0xbc3900u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf24 */
GEN_OWN GEN_NOFRAME unsigned int F_00bc3910(void)
{
  GEN_ENTER(0xbc3910u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf46 */
GEN_OWN GEN_NOFRAME uint F_00bc3920(void)
{
  GEN_ENTER(0xbc3920u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf47 */
GEN_OWN GEN_NOFRAME double F_00bc3930(void)
{
  GEN_ENTER(0xbc3930u, 0u, 0u, 0u, 0u);
  return 0.0;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf48 */
GEN_OWN GEN_NOFRAME double GEN_THISCALL F_00bc3940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc3940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0.0;
}

/* ref: FUN_00bc3950 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc3950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc3950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (*param_1 == 0) {
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *param_1 = (int)this - 0x18;
    return 0;
  }
  do {
    iVar2 = iVar1;
    iVar1 = *((int *)GEN_TOP((iVar2 + 0x1c)));
  } while (*((int *)GEN_TOP((iVar2 + 0x1c))) != 0);
  if (this != ((undefined *)GEN_TOP(0x0))) {
    *((uint *)GEN_TOP((iVar2 + 0x1c))) = (int)this - 0x18U;
    *(int *)this = iVar2;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    return (int)this - 0x18U;
  }
  *((undefined4 *)GEN_TOP((iVar2 + 0x1c))) = 0;
  *(int *)&REFG(undefined, 0x0) = iVar2;
  *(undefined4 *)&REFG(undefined, 0x4) = 0;
  return 0;
}

/* ref: FUN_00bc39a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc39a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc39a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  return (*((ushort *)GEN_TOP(((int)this + (param_1 >> 4) * 2))) & 1 << ((byte)param_1 & 0xf)) != 0;
}

/* ref: Client::System::Scheduler::Base::TimelineControler::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc39e0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc39e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[49])REFP(0x1104994));
  F_00bc2160(param_1 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10f34d4));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bc3a20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc3a20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc3a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00bc3a60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc3a60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc3a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x20))) = param_2;
  return param_2;
}

/* ref: FUN_00bc3ab0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bc3ab0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc3ab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  bool bVar1;
  
  bVar1 = GEN_ISNAN(*((float *)GEN_TOP((in_ecx + 0x38)))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  if (bVar1 != (bVar1 || *((float *)GEN_TOP((in_ecx + 0x38))) == *(float *)&REFG(undefined, 0x1088114))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bc3b20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc3b20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc3b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (param_2 * 3 + 3) * 0x10 + in_ecx;
}

/* ref: FUN_00bc3b40 */
GEN_OWN GEN_FRAME float10 F_00bc3b40(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbc3b40u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bc3b60 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bc3b60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc3b60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 0x404))) != 0) {
    return 0;
  }
  return *((int *)GEN_TOP((in_ecx + 0x28))) == 0;
}

/* ref: FUN_00bc3b80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc3b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc3b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00bbadf0(this GEN_EDX_FWD,param_1,0);
  return bVar1;
}

/* ref: FUN_00bc3ba0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bc3ba0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc3ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((uint *)GEN_TOP((in_ecx + 0x3fc))) = *((uint *)GEN_TOP((in_ecx + 0x3fc))) & 0xfffffffd;
  return;
}

/* ref: FUN_00bc3bb0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_STDCALL F_00bc3bb0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbc3bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return;
}

/* ref: FUN_00bc3bc0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bc3bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc3bc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00bc13b0(((undefined *)GEN_TOP(((int)this + 0x408))) GEN_EDX_FWD);
  return;
}

/* ref: Client::System::Scheduler::Object::CharacterController::vf2 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc3bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc3bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_00bbaea0(this GEN_EDX_FWD,param_1);
  bVar1 = 0;
  if ((char)uVar2 != '\0') {
    bVar1 = F_00b59a30(REFG(void * PTR32, 0x14c4e78) GEN_EDX_ARG,this);
    F_00bc13b0(this + 0x408 GEN_EDX_ARG);
  }
  F_00bbaf20(this GEN_EDX_ARG,param_1);
  return bVar1;
}

/* ref: FUN_00bc3c20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc3c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc3c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = F_00bbaf50(this GEN_EDX_FWD);
  if (uVar1 != 0) {
    uVar2 = F_00531ed0(uVar1);
    if ((int)uVar2 < 0) {
      return 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00bc3c50 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bc3c50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc3c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x24))) != 0;
}

/* ref: FUN_00bc3c60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc3c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc3c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + param_1 * 4 + 0x484)));
  if (iVar1 == 0) {
    *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x464))) = 1;
  }
  *((int *)GEN_TOP(((int)this + param_1 * 4 + 0x484))) = iVar1 + 1;
  *((undefined1 *)GEN_TOP(((int)this + 0x460))) = 1;
  return param_1;
}

/* ref: FUN_00bc3c90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc3c90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc3c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP((in_ecx + 0x484 + param_2 * 4)));
  *piVar1 = *piVar1 - 1;
  if (*piVar1 == 0) {
    *((undefined4 *)GEN_TOP((in_ecx + 0x464 + param_2 * 4))) = 3;
  }
  *((undefined1 *)GEN_TOP((in_ecx + 0x460))) = 1;
  return param_2;
}

/* ref: FUN_00bc3cc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc3cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc3cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  undefined1 local_5;
  
  uVar2 = F_00bbaf90(this GEN_EDX_FWD);
  if (uVar2 == 0) {
    *((undefined1 *)GEN_TOP(((int)this + 0x460))) = 0;
    return 0;
  }
  iVar3 = 0;
  local_5 = 0;
  piVar4 = ((int *)GEN_TOP(((int)this + 0x464)));
  do {
    iVar1 = *piVar4;
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        F_00a62fd0(uVar2,iVar3);
        *piVar4 = 2;
      }
      else {
        if (iVar1 != 2) {
          if (iVar1 == 3) {
            F_00a63030(uVar2,iVar3);
            *piVar4 = 0;
          }
          goto LAB_00bc3d2c;
        }
        F_00a622e0(uVar2,iVar3);
      }
      local_5 = 1;
    }
LAB_00bc3d2c: ;
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
    if (7 < iVar3) {
      *((undefined1 *)GEN_TOP(((int)this + 0x460))) = local_5;
      return (uint)this;
    }
  } while( true );
}

/* ref: FUN_00bc3d50 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc3d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc3d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  piVar2 = ((int *)GEN_TOP(((int)this + 0x34)));
  do {
    if ((*piVar2 != 0) && (*piVar2 != param_1)) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0xc;
  } while (iVar1 < 2);
  if ((*((int *)GEN_TOP(((int)this + 100))) != 0) && (*((int *)GEN_TOP(((int)this + 100))) != param_1)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bc3d90 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc3d90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbc3d90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((in_ecx + 4 + (param_2 * 3 + 3) * 0x10)));
  if ((iVar1 != 0) && (iVar1 != param_3)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bc3dc0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc3dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc3dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  byte bVar1;
  uint * puVar3;
  uint * puVar2;
  
  puVar3 = ((uint *)GEN_TOP((((int)((int)(uintptr_t)param_1) * 3 + 3) * 0x10 + (int)this)));
  puVar2 = param_1;
  if ((*puVar3 & 1) != 0) {
    puVar2 = puVar3 + 0xb;
    if ((puVar3[0xb] & 0xc0000000) != 0) {
      bVar1 = F_00b5b6c0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_FWD,puVar2);
      puVar2 = ((uint *)GEN_TOP((uint)bVar1));
      if (bVar1 != 0) goto LAB_00bc3df4;
    }
    *puVar3 = *puVar3 & 0xfffffffe;
  }
LAB_00bc3df4: ;
  return (byte)puVar2;
}

/* ref: FUN_00bc3e00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc3e00(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xbc3e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint * puVar1;
  uint uVar2;
  uint * puVar3;
  
  puVar3 = ((uint *)GEN_TOP(((param_2 * 3 + 3) * 0x10 + param_1)));
  puVar1 = puVar3 + 0xb;
  if (((puVar3[0xb] & 0xc0000000) == 0) || (param_3 == '\0')) {
    *puVar3 = *puVar3 | 8;
    uVar2 = param_2;
  }
  else if (param_4 == 0) {
    uVar2 = F_00b5ad00(REFG(void * PTR32, 0x14c4e84) GEN_EDX_FWD,puVar1,0);
    *puVar3 = *puVar3 & 0xfffffff7;
  }
  else {
    (*(int *)(gen_frame + 0x4)) = param_4;
    ((undefined1 *)(gen_frame + 0x0))[0] = 0;
    uVar2 = F_00b5ad00(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,puVar1,((undefined1 *)(gen_frame + 0x0)));
    *puVar3 = *puVar3 & 0xfffffff7;
  }
  *puVar3 = *puVar3 & 0xffffffe8;
  *puVar1 = 0;
  puVar3[1] = 0;
  return uVar2;
}

/* ref: FUN_00bc3e70 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bc3e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc3e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if ((*((byte *)GEN_TOP(((int)this + 0x3fc))) & 0x10) == 0) {
    *((uint *)GEN_TOP(((int)this + 0x30))) = *((uint *)GEN_TOP(((int)this + 0x30))) & 0xffffffe9;
    *((uint *)GEN_TOP(((int)this + 0x60))) = *((uint *)GEN_TOP(((int)this + 0x60))) & 0xffffffe9;
    *((uint *)GEN_TOP(((int)this + 0x3fc))) = *((uint *)GEN_TOP(((int)this + 0x3fc))) | 0x10;
  }
  return;
}

/* ref: FUN_00bc3e90 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc3e90(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xbc3e90u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  uint uVar1;
  uint * puVar2;
  
  puVar2 = ((uint *)GEN_TOP(((param_2 * 3 + 3) * 0x10 + param_1)));
  uVar1 = *puVar2;
  if ((uVar1 & 0x10) == 0) {
    if ((uVar1 & 2) == 0) {
      puVar2[8] = (uint)gen_fl2bits(param_3);
      puVar2[9] = (uint)gen_fl2bits(param_4);
    }
    else {
      if ((float10)param_3 < ((float10)GEN_TOD(gen_bits2f(puVar2[8])))) {
        puVar2[8] = (uint)gen_fl2bits(param_3);
      }
      if ((float10)param_4 < ((float10)GEN_TOD(gen_bits2f(puVar2[9])))) {
        puVar2[9] = (uint)gen_fl2bits(param_4);
        *puVar2 = uVar1 | 2;
        return 0;
      }
    }
    *puVar2 = uVar1 | 2;
  }
  return 0;
}

/* ref: FUN_00bc3f00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc3f00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc3f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP(((param_2 * 3 + 3) * 0x10 + in_ecx)));
  *puVar1 = *puVar1 & 0xfffffff9 | 0x10;
  return (uint)puVar1;
}

/* ref: FUN_00bc3f20 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc3f20(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xbc3f20u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  uint uVar1;
  uint * puVar2;
  
  puVar2 = ((uint *)GEN_TOP(((param_2 * 3 + 3) * 0x10 + param_1)));
  uVar1 = *puVar2;
  if ((uVar1 & 0x10) == 0) {
    if (((uVar1 & 4) == 0) || ((float10)param_3 < ((float10)GEN_TOD(gen_bits2f(puVar2[10]))))) {
      puVar2[10] = (uint)gen_fl2bits(param_3);
    }
    *puVar2 = uVar1 | 4;
  }
  return 0;
}

/* ref: FUN_00bc3f60 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00bc3f60(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbc3f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 == 0x4a;
}

/* ref: FUN_00bc3f70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc3f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc3f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00bc0f30(((undefined *)GEN_TOP(((int)this + 0x408))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00bc3f80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc3f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc3f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00bc0f50(((undefined *)GEN_TOP(((int)this + 0x408))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00bc3f90 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc3f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc3f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00bc0f70(((undefined *)GEN_TOP(((int)this + 0x408))) GEN_EDX_FWD,param_1);
  return bVar1;
}

/* ref: FUN_00bc3fa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc3fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc3fa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00bc0f90(((undefined *)GEN_TOP(((int)this + 0x408))) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00bc3fb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc3fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc3fb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00bc0fb0(((undefined *)GEN_TOP(((int)this + 0x408))) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00bc3fc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc3fc0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbc3fc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined * this;
  uint uVar1;
  undefined4 uVar2;
  
  this = ((undefined *)GEN_TOP(F_00bbafd0(param_1 GEN_EDX_FWD)));
  uVar1 = 0;
  if (this != ((undefined *)GEN_TOP(0x0))) {
    if (param_3 == 0) {
      uVar2 = 0;
      if (param_2 != '\0') goto LAB_00bc3fec;
    }
    else {
      if (param_3 != 1) {
        if (param_3 - 2U != 0) {
          return param_3 - 2U;
        }
        if (param_2 == '\0') {
          F_0068da00(this GEN_EDX_ARG,0);
          uVar1 = F_0068da00(this GEN_EDX_ARG,1);
          return uVar1;
        }
        F_0068d9e0(this GEN_EDX_ARG,0);
        uVar2 = 1;
LAB_00bc3fec: ;
        uVar1 = F_0068d9e0(this GEN_EDX_ARG,uVar2);
        return uVar1;
      }
      uVar2 = 1;
      if (param_2 != '\0') {
        uVar1 = F_0068d9e0(this GEN_EDX_ARG,1);
        return uVar1;
      }
    }
    uVar1 = F_0068da00(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00bc4040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc4040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbc4040u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00bc0fe0(((undefined *)GEN_TOP(((int)this + 0x408))) GEN_EDX_FWD,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00bc4050 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc4050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbc4050u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  byte bVar1;
  
  bVar1 = F_00bc1000(((undefined *)GEN_TOP(((int)this + 0x408))) GEN_EDX_FWD,param_1,param_2,param_3);
  return bVar1;
}

/* ref: FUN_00bc4060 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc4060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc4060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00bc1020(((undefined *)GEN_TOP(((int)this + 0x408))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00bc4070 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc4070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc4070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00bc1030(((undefined *)GEN_TOP(((int)this + 0x408))) GEN_EDX_FWD,this,param_1);
  return uVar1;
}

/* ref: FUN_00bc4090 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc4090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc4090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00bc1050(((undefined *)GEN_TOP(((int)this + 0x408))) GEN_EDX_FWD,this,param_1);
  return;
}

/* ref: FUN_00bc40b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc40b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc40b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00bc1070(((undefined *)GEN_TOP(((int)this + 0x408))) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00bc40c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc40c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc40c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00bc10b0(((undefined *)GEN_TOP(((int)this + 0x408))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00bc40d0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc40d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc40d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (*((int *)GEN_TOP((param_1 + 0x44c))) != 0) {
    F_00a0c450(*((int *)GEN_TOP((param_1 + 0x44c))) GEN_EDX_FWD,param_2 == '\0');
  }
  return;
}

/* ref: FUN_00bc4100 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc4100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc4100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  int iVar1;
  uint * puVar2;
  uint uVar3;
  int iVar4;
  uint * puVar5;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x1104ae0));
  iVar4 = 2;
  puVar2 = this;
  do {
    puVar5 = puVar2 + 0xc;
    if ((puVar2[0x17] & 0xc0000000) == 0) {
      *puVar5 = *puVar5 | 8;
    }
    else {
      F_00b5ad00(REFG(void * PTR32, 0x14c4e84) GEN_EDX_FWD,puVar2 + 0x17,0);
      *puVar5 = *puVar5 & 0xfffffff7;
    }
    *puVar5 = *puVar5 & 0xffffffe8;
    iVar4 = iVar4 - 1;
    puVar2[0x17] = 0;
    puVar2[0xd] = 0;
    puVar2 = puVar5;
  } while (iVar4 != 0);
  iVar4 = *((int *)GEN_TOP(((int)this + 0x24)));
  while (iVar4 != 0) {
    iVar1 = *((int *)GEN_TOP((iVar4 + 8)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar4 + 0x48))) + 0xfc))))(*((int * PTR32 *)GEN_TOP((iVar4 + 0x48))) GEN_EDX_ARG,3);
    iVar4 = iVar1;
  }
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x408)));
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  F_00bc0dd0(this_00 GEN_EDX_ARG);
  F_00bc0e10(this_00 GEN_EDX_ARG);
  F_00bc0e70(this_00 GEN_EDX_ARG);
  F_00bc0ed0(this_00 GEN_EDX_ARG);
  uVar3 = F_00bc1180(this_00 GEN_EDX_ARG);
  F_00bccbf0(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00bc41c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc41c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc41c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x30, 0, 4);
  uint * puVar1;
  undefined * this_00;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint * puVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  if ((((*((char *)GEN_TOP(((int)this + 0x12))) != '\0') || (uVar3 = *((uint *)GEN_TOP(((int)this + 4))), uVar3 == 0)) ||
      (*((int *)GEN_TOP((uVar3 + 0x6c))) != 2)) || (*((char *)GEN_TOP((uVar3 + 0x96))) == '\0')) {
    iVar4 = 2;
    puVar1 = this;
    do {
      puVar6 = puVar1 + 0xc;
      if ((puVar1[0x17] & 0xc0000000) == 0) {
        *puVar6 = *puVar6 | 8;
      }
      else {
        F_00b5ad00(REFG(void * PTR32, 0x14c4e84) GEN_EDX_FWD,puVar1 + 0x17,0);
        *puVar6 = *puVar6 & 0xfffffff7;
        this = (*(undefined * PTR32 *)(gen_frame + 0x28));
      }
      *puVar6 = *puVar6 & 0xffffffe8;
      iVar4 = iVar4 - 1;
      puVar1[0x17] = 0;
      puVar1[0xd] = 0;
      puVar1 = puVar6;
    } while (iVar4 != 0);
    F_00bc13b0(((undefined *)GEN_TOP(((int)this + 0x408))) GEN_EDX_ARG);
    this_00 = ((undefined *)GEN_TOP(F_00bbaf90((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG)));
    uVar3 = 0;
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      if ((*((byte *)GEN_TOP(((int)this_00 + 0x8f))) & 0x40) != 0) {
        *((byte *)GEN_TOP(((int)this_00 + 0x2dd3))) = *((byte *)GEN_TOP(((int)this_00 + 0x2dd3))) | 0x10;
      }
      F_00aa0090(this_00 GEN_EDX_ARG,0,0);
      F_00b5aeb0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)this_00 + 0x88))),0);
      if ((*((char *)GEN_TOP(((int)this_00 + 0x188))) != '\x01') &&
         ((*((byte *)GEN_TOP(((int)this_00 + 0x8f))) & 0x40) != 0)) {
        F_00aa0700(this_00 GEN_EDX_ARG);
        iVar5 = 0;
        iVar4 = (int)this_00 + 0x16c0;
        do {
          if ((iVar4 != 0) && (*((char *)GEN_TOP((iVar4 + 0x65))) == '\x03')) {
            F_00aa7d30(this_00 GEN_EDX_ARG,iVar5,1);
            F_006a5bf0(iVar4 + 0x750 GEN_EDX_ARG,1,(float)(float10)0);
            F_006a5c40(iVar4 + 0x750 GEN_EDX_ARG,(float)(float10)1);
            F_00aa7cb0(this_00 GEN_EDX_ARG,iVar5);
            pvVar2 = ((undefined *)GEN_TOP(F_00ab2ae0(2)));
            (*(undefined * PTR32 *)(gen_frame + 0x28)) = pvVar2;
            F_00bbac80(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
            F_00bbac80(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
            F_00bbadd0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,iVar4);
            F_00bbadf0(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)this_00 + 0x88))),0);
            F_00b5c120(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x28)),2,((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x14)),1,0,0,(float)(float10)0);
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x7a0;
        } while (iVar5 < 3);
      }
      F_00aa4150(this_00 GEN_EDX_ARG,0x90,0,0);
      uVar3 = F_00aa4150(this_00 GEN_EDX_ARG,0x73,0,0);
    }
  }
  return uVar3;
}

/* ref: FUN_00bc4380 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc4380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc4380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  int iVar2;
  uint * puVar3;
  
  F_00b59a30(REFG(void * PTR32, 0x14c4e78) GEN_EDX_FWD,this);
  iVar2 = 2;
  puVar1 = this;
  do {
    puVar3 = puVar1 + 0xc;
    if ((puVar1[0x17] & 0xc0000000) == 0) {
      *puVar3 = *puVar3 | 8;
    }
    else {
      F_00b5ad00(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,puVar1 + 0x17,0);
      *puVar3 = *puVar3 & 0xfffffff7;
    }
    *puVar3 = *puVar3 & 0xffffffe8;
    iVar2 = iVar2 - 1;
    puVar1[0x17] = 0;
    puVar1[0xd] = 0;
    puVar1 = puVar3;
  } while (iVar2 != 0);
  F_00bc13b0(((undefined *)GEN_TOP(((int)this + 0x408))) GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)this + 0x3fc))) = *((uint *)GEN_TOP(((int)this + 0x3fc))) | 2;
  return;
}

/* ref: FUN_00bc4400 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc4400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbc4400u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined * this_00;
  byte bVar1;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x28)));
  while( true ) {
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    bVar1 = F_00c1ec30(this_00 GEN_EDX_FWD,param_1,param_2,param_3);
    if (bVar1 != 0) break;
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 8)));
  }
  return (uint)this_00;
}

/* ref: FUN_00bc4440 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc4440(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc4440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint in_ecx_00;
  byte bVar1;
  
  in_ecx_00 = *((uint *)GEN_TOP((in_ecx + 0x28)));
  while( true ) {
    if (in_ecx_00 == 0) {
      return 0;
    }
    bVar1 = F_00c1ec60(in_ecx_00 GEN_EDX_FWD,param_2);
    if (bVar1 != 0) break;
    in_ecx_00 = *((uint *)GEN_TOP((in_ecx_00 + 8)));
  }
  return in_ecx_00;
}

/* ref: FUN_00bc4480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc4480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc4480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  F_00bbacc0(this GEN_EDX_FWD,param_1);
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x74)));
  *((uint *)GEN_TOP(((int)this + 0x14))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 1;
  return uVar1;
}

/* ref: Client::System::Scheduler::Object::CharacterController::vf3 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bc44b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc44b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  if ((this[0x12] == (undefined1)0x0) && (*(int *)(this + 4) != 0)) {
    switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x71))))) {
    case 8: ;
    case 9: ;
    case 0xf: ;
    case 0x25: ;
    case 0x26: ;
    case 0x27: ;
    case 0x2e: ;
    case 0x49: ;
      break;
    default: ;
      return 1;
    }
  }
  bVar1 = F_00bccc40(this GEN_EDX_FWD);
  if (bVar1 != 0) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bc4530 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bc4530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc4530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  if ((*((char *)GEN_TOP(((int)this + 0x12))) == '\0') && (*((int *)GEN_TOP(((int)this + 4))) != 0)) {
    switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x71))))) {
    case 8: ;
    case 9: ;
    case 0xf: ;
    case 0x25: ;
    case 0x26: ;
    case 0x27: ;
    case 0x2e: ;
    case 0x49: ;
      break;
    default: ;
switchD_00bc4553_caseD_a: ;
      F_00bc0db0(((undefined *)GEN_TOP(((int)this + 0x408))) GEN_EDX_FWD,this);
      F_00bc0df0(((undefined *)GEN_TOP(((int)this + 0x408))) GEN_EDX_ARG,this);
      piVar2 = ((int *)GEN_TOP(F_00bbafd0(this GEN_EDX_ARG)));
      if (piVar2 != ((int *)GEN_TOP(0x0))) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 200))))(piVar2 GEN_EDX_ARG);
        if (uVar3 == 1) {
          F_00bc0e90(((undefined *)GEN_TOP(((int)this + 0x408))) GEN_EDX_ARG,this,piVar2);
        }
        else {
          if (uVar3 == 2) {
            F_00bc0e30(((undefined *)GEN_TOP(((int)this + 0x408))) GEN_EDX_ARG,this,piVar2);
            F_00bc0e90(((undefined *)GEN_TOP(((int)this + 0x408))) GEN_EDX_ARG,this,0);
            return 1;
          }
          if (uVar3 == 3) {
            F_00bc0e90(((undefined *)GEN_TOP(((int)this + 0x408))) GEN_EDX_ARG,this,0);
            return 1;
          }
        }
      }
      return 1;
    }
  }
  bVar1 = F_00bcd000(this GEN_EDX_ARG);
  if (bVar1 == 0) {
    return 0;
  }
  goto switchD_00bc4553_caseD_a;
}

/* ref: FUN_00bc4640 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc4640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbc4640u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  undefined * this_00;
  byte bVar1;
  
  if ((param_1 & 0x100) != 0) {
    return 1;
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x24)));
  while( true ) {
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
      return 1;
    }
    if (((((*((uint *)GEN_TOP(((int)this_00 + 0x1c))) >> 3 & 1) != 0) &&
         (*((char *)GEN_TOP(((int)this_00 + 0x23))) == '\0')) && (param_2 == *((int *)GEN_TOP(((int)this_00 + 0x54))))) &&
       ((*((int *)GEN_TOP(((int)this_00 + 0x24))) == param_3 && (bVar1 = F_00c1f4d0(this_00 GEN_EDX_FWD), bVar1 == 0))))
    break;
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 8)));
  }
  return 0;
}

/* ref: FUN_00bc46a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc46a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbc46a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x24)));
  do {
    if (iVar1 == 0) {
      return 0;
    }
    if (((*((char *)GEN_TOP((iVar1 + 0x23))) == '\0') && (param_2 == *((int *)GEN_TOP((iVar1 + 0x54))))) &&
       (*((int *)GEN_TOP((iVar1 + 0x24))) == param_3)) {
      iVar2 = *((int *)GEN_TOP((iVar1 + 0x48)));
      iVar3 = *((int *)GEN_TOP((iVar2 + 0x74)));
      if (iVar3 == 0) {
        piVar5 = *((int * PTR32 *)GEN_TOP((iVar2 + 0x70)));
        if (piVar5 == ((int *)GEN_TOP(0x0))) {
          iVar3 = *((int *)GEN_TOP((iVar2 + 0x6c)));
          if (iVar3 == 0) {
            if (*((int *)GEN_TOP((iVar2 + 4))) != 0) {
              *((undefined4 *)GEN_TOP((iVar2 + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 4))) + 4)));
            }
            iVar3 = *((int *)GEN_TOP((iVar2 + 0x6c)));
            if (iVar3 != 0) goto LAB_00bc46ef;
          }
          else {
LAB_00bc46ef: ;
            *((undefined4 *)GEN_TOP((iVar2 + 0x70))) = *((undefined4 *)GEN_TOP((iVar3 + 4)));
          }
          piVar5 = *((int * PTR32 *)GEN_TOP((iVar2 + 0x70)));
          if (piVar5 != ((int *)GEN_TOP(0x0))) goto LAB_00bc46fc;
        }
        else {
LAB_00bc46fc: ;
          uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 100))))(piVar5 GEN_EDX_FWD);
          *((uint *)GEN_TOP((iVar2 + 0x74))) = uVar4;
        }
        iVar3 = *((int *)GEN_TOP((iVar2 + 0x74)));
      }
      if ((*((int *)GEN_TOP((iVar3 + 0xdc))) == 0) && (param_1 < *((int *)GEN_TOP((iVar3 + 0x1e0))))) {
        return 1;
      }
    }
    iVar1 = *((int *)GEN_TOP((iVar1 + 8)));
  } while( true );
}

/* ref: FUN_00bc4740 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc4740(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3), GEN_P(float * param_5, unsigned int gen_a4), GEN_P(char param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xbc4740u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(char param_6 = (char)gen_a5;)
  GEN_FRAME_DECL(0x3c, 4);
  short sVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined * pvVar8;
  int * piVar9;
  int * piVar10;
  undefined * pvVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 fVar16;
  byte bVar17;
  float fVar18;
  undefined4 uVar19;
  
  sVar1 = *((short *)GEN_TOP((param_2 + 0x32)));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 4)) = *((undefined4 *)GEN_TOP((param_2 + 0x54)));
  bVar3 = true;
  bVar2 = true;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 12)) = param_1;
  (*(float *)(gen_frame + 0x30)) = 0.0;
  ((byte *)(gen_frame + 0x18))[0] = 0;
  ((byte *)(gen_frame + 0x18))[1] = 0;
  ((byte *)(gen_frame + 0x18))[2] = 0;
  ((byte *)(gen_frame + 0x18))[3] = 0;
  uVar6 = F_00bbaf90(param_1 GEN_EDX_FWD);
  pvVar8 = ((undefined *)GEN_TOP(param_3[0x1d]));
  if (pvVar8 == ((undefined *)GEN_TOP(0x0))) {
    piVar9 = ((int *)GEN_TOP(param_3[0x1c]));
    if (piVar9 == ((int *)GEN_TOP(0x0))) {
      iVar12 = param_3[0x1b];
      if (iVar12 == 0) {
        if (param_3[1] != 0) {
          param_3[0x1b] = *((int *)GEN_TOP((param_3[1] + 4)));
        }
        iVar12 = param_3[0x1b];
        if (iVar12 != 0) goto LAB_00bc47b5;
      }
      else {
LAB_00bc47b5: ;
        param_3[0x1c] = *((int *)GEN_TOP((iVar12 + 4)));
      }
      piVar9 = ((int *)GEN_TOP(param_3[0x1c]));
      if (piVar9 != ((int *)GEN_TOP(0x0))) goto LAB_00bc47c2;
    }
    else {
LAB_00bc47c2: ;
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 100))))(piVar9 GEN_EDX_ARG);
      param_3[0x1d] = uVar7;
    }
    pvVar8 = ((undefined *)GEN_TOP(param_3[0x1d]));
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 8)) = pvVar8;
  }
  else {
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 8)) = pvVar8;
  }
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = pvVar8;
  if (*((undefined * PTR32 *)GEN_TOP(((int)pvVar8 + 0x240))) != ((undefined *)GEN_TOP(0x0))) {
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = *((undefined * PTR32 *)GEN_TOP(((int)pvVar8 + 0x240)));
  }
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 8)) = pvVar8;
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*param_3 + 0xb4))))(param_3);
  bVar5 = F_00bcfe30(pvVar8 GEN_EDX_ARG,((byte *)(gen_frame + 0x18)));
  (*(int *)(gen_frame + 0x2c)) = *((int *)GEN_TOP(((int)param_1 + 0x24)));
  if (*((int *)GEN_TOP(((int)param_1 + 0x24))) != 0) {
    do {
      if (((((*(int *)(gen_frame + 0x2c)) != param_2) && (*((char *)GEN_TOP(((*(int *)(gen_frame + 0x2c)) + 0x23))) == '\0')) &&
          ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 4)) == *((int *)GEN_TOP(((*(int *)(gen_frame + 0x2c)) + 0x54))))) && (sVar1 == *((short *)GEN_TOP(((*(int *)(gen_frame + 0x2c)) + 0x32))))) {
        piVar9 = *((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x2c)) + 0x48)));
        pvVar8 = ((undefined *)GEN_TOP(piVar9[0x1d]));
        bVar2 = false;
        if (pvVar8 == ((undefined *)GEN_TOP(0x0))) {
          piVar10 = ((int *)GEN_TOP(piVar9[0x1c]));
          if (piVar10 == ((int *)GEN_TOP(0x0))) {
            iVar12 = piVar9[0x1b];
            if (iVar12 == 0) {
              if (piVar9[1] != 0) {
                piVar9[0x1b] = *((int *)GEN_TOP((piVar9[1] + 4)));
              }
              iVar12 = piVar9[0x1b];
              if (iVar12 != 0) goto LAB_00bc4881;
            }
            else {
LAB_00bc4881: ;
              piVar9[0x1c] = *((int *)GEN_TOP((iVar12 + 4)));
            }
            piVar10 = ((int *)GEN_TOP(piVar9[0x1c]));
            if (piVar10 != ((int *)GEN_TOP(0x0))) goto LAB_00bc488e;
          }
          else {
LAB_00bc488e: ;
            uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar10 + 100))))(piVar10 GEN_EDX_ARG);
            piVar9[0x1d] = uVar7;
          }
          pvVar8 = ((undefined *)GEN_TOP(piVar9[0x1d]));
        }
        pvVar11 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar8 + 0x240)));
        if (pvVar11 == ((undefined *)GEN_TOP(0x0))) {
          pvVar11 = pvVar8;
        }
        if ((*(undefined * PTR32 *)(gen_frame + 0xc)) == pvVar11) {
          ((byte *)(gen_frame + 0x18))[0x10] = 1;
          ((byte *)(gen_frame + 0x18))[0x10] = 1;
        }
        else if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0xdc))) == 0) || (*((int *)GEN_TOP(((int)pvVar11 + 0xdc))) == 0)) {
          ((byte *)(gen_frame + 0x18))[0x10] = 0;
          (*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 16)) = (uint)(uint3)GEN_PIECE(((byte *)(gen_frame + 0x18)), 17, 3) << 8;
        }
        else {
          bVar15 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0xdc))) + 4))) ==
                   *((int *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar11 + 0xdc))) + 4)));
          ((byte *)(gen_frame + 0x18))[0x10] = bVar15;
        }
        if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 4)) == 0) {
          iVar14 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 12)) + 0x30;
          iVar12 = 0x20;
        }
        else {
          iVar14 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 12)) + 0x60;
          iVar12 = 0x4a;
        }
        if ((param_6 == '\0') && ((*((uint *)GEN_TOP(((*(int *)(gen_frame + 0x2c)) + 0x1c))) >> 3 & 1) == 0)) {
          uVar7 = F_0054d950(piVar9 GEN_EDX_ARG);
          iVar4 = (*(int *)(gen_frame + 0x2c));
          if (uVar7 != (*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 8))) {
            if (uVar6 != 0) {
              uVar7 = F_00c1f470((*(int *)(gen_frame + 0x2c)) GEN_EDX_ARG);
              uVar13 = F_00c1f470(param_2 GEN_EDX_ARG);
              F_00aa0740(uVar13,uVar7);
              bVar3 = false;
            }
            if ((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 8)) + 0x244))) == iVar12) ||
               (*((int *)GEN_TOP(((int)pvVar8 + 0x244))) == iVar12)) {
              (*(uint *)(gen_frame + 0x0)) = *((uint *)GEN_TOP((iVar14 + 0x18)));
              (*(float *)(gen_frame + 0x30)) = (float)(int)(*(uint *)(gen_frame + 0x0));
              *param_5 = (*(float *)(gen_frame + 0x30));
LAB_00bc4a6d: ;
              fVar16 = (float10)(*(float *)(gen_frame + 0x30));
            }
            else {
              if (bVar5 != 0) {
                fVar16 = (float10)(int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 0));
                if ((int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 0)) < 0) {
                  fVar16 = GEN_X87(fVar16 + (float10)*(float *)&REFG(undefined, 0x1088110));
                }
                (*(float *)(gen_frame + 0x30)) = (float)fVar16;
                *param_5 = (*(float *)(gen_frame + 0x30));
                goto LAB_00bc4a6d;
              }
              bVar17 = *((byte *)GEN_TOP((param_2 + 0x30)));
              (*(byte *)(gen_frame + 0x37)) = *((byte *)GEN_TOP((iVar4 + 0x30)));
              uVar7 = F_00bc3c20(((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 12)))) GEN_EDX_ARG);
              (*(uint *)(gen_frame + 0x0)) = F_00a09f30((uint)(*(byte *)(gen_frame + 0x37)),(uint)bVar17,uVar7);
              if ((int)(*(uint *)(gen_frame + 0x0)) < 0) {
                fVar16 = (float10)REFG(float, 0x1090708);
              }
              else {
                (*(float *)(gen_frame + 0x30)) = (float)(int)(*(uint *)(gen_frame + 0x0));
                fVar16 = (float10)(int)(*(uint *)(gen_frame + 0x0));
                *param_5 = (float)(int)(*(uint *)(gen_frame + 0x0));
              }
            }
            bVar17 = (byte)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 16));
            F_00c1f2f0(iVar4 GEN_EDX_ARG,bVar17,(float)fVar16);
            if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 4)) == 0) {
              for (iVar12 = *((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 12)) + 0x24))); iVar12 != 0;
                  iVar12 = *((int *)GEN_TOP((iVar12 + 8)))) {
                if (((iVar12 != param_2) && (*((char *)GEN_TOP((iVar12 + 0x23))) == '\0')) &&
                   (*((int *)GEN_TOP((iVar12 + 0x54))) != 0)) {
                  pvVar8 = *((undefined * PTR32 *)GEN_TOP((iVar12 + 0x48)));
                  pvVar8 = ((undefined *)GEN_TOP(F_0054d950(pvVar8 GEN_EDX_ARG)));
                  if (*((undefined * PTR32 *)GEN_TOP(((int)pvVar8 + 0x240))) != ((undefined *)GEN_TOP(0x0))) {
                    pvVar8 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar8 + 0x240)));
                  }
                  if (pvVar11 == pvVar8) {
                    fVar18 = REFG(float, 0x1090708);
                    if (-1 < (int)(*(uint *)(gen_frame + 0x0))) {
                      fVar18 = (*(float *)(gen_frame + 0x30));
                    }
                    F_00c1f2f0(iVar12 GEN_EDX_ARG,bVar17,fVar18);
                  }
                }
              }
            }
            goto LAB_00bc4b02;
          }
          extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar9 + 0xb4))))(piVar9);
          if ((float10)(float)extraout_ST0_00 < (float10)(float)extraout_ST0) {
            extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*piVar9 + 0xa4))))(piVar9);
            fVar18 = ((float)GEN_TOF(((extraout_ST0_01 + (float10)(float)extraout_ST0_00) -
                            (float10)(float)extraout_ST0)));
            (*(float *)(gen_frame + 0x30)) = fVar18;
            if ((float10)fVar18 < (float10)0) {
              (*(float *)(gen_frame + 0x30)) = 0.0;
            }
            if ((float10)(*(float *)(gen_frame + 0x30)) <= (float10)param_4) goto LAB_00bc4977;
          }
          else {
LAB_00bc4977: ;
            (*(float *)(gen_frame + 0x30)) = 0.0;
          }
          *param_5 = (*(float *)(gen_frame + 0x30));
          fVar18 = (*(float *)(gen_frame + 0x30));
        }
        else {
          fVar18 = (float)(float10)0;
          (*(float *)(gen_frame + 0x30)) = 0.0;
          *param_5 = 0.0;
        }
        F_00c1f2f0((*(int *)(gen_frame + 0x2c)) GEN_EDX_ARG,(byte)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 16)),fVar18);
      }
LAB_00bc4b02: ;
      piVar9 = ((int *)GEN_TOP(((*(int *)(gen_frame + 0x2c)) + 8)));
      (*(int *)(gen_frame + 0x2c)) = *piVar9;
    } while (*piVar9 != 0);
    if (!bVar2) goto LAB_00bc4b7b;
  }
  if (bVar5 == 0) {
    uVar13 = 0;
    uVar7 = F_00bbaf50(((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 12)))) GEN_EDX_ARG);
    if ((uVar7 != 0) && (uVar13 = F_00531ed0(uVar7), (int)uVar13 < 0)) {
      uVar13 = 0;
    }
    uVar7 = F_00a09f30(0,(uint)*((byte *)GEN_TOP((param_2 + 0x30))),uVar13);
    if (-1 < (int)uVar7) {
      *param_5 = (float)(int)uVar7;
    }
  }
  else {
    fVar16 = (float10)(int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 0));
    if ((int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x18)) + 0)) < 0) {
      fVar16 = GEN_X87(fVar16 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    *param_5 = (float)fVar16;
  }
LAB_00bc4b7b: ;
  if ((uVar6 != 0) && (bVar3)) {
    uVar19 = 0;
    uVar6 = F_00c1f470(param_2 GEN_EDX_ARG);
    F_00aa0740(uVar6,uVar19);
  }
  return !bVar2;
}

/* ref: FUN_00bc4bb0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc4bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc4bb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  bVar3 = 0;
  uVar2 = F_00a0a270(param_1);
  if (uVar2 != 0) {
    bVar3 = *((byte *)GEN_TOP((uVar2 + 4)));
  }
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x24)));
  do {
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
      return 1;
    }
    if ((*((char *)GEN_TOP(((int)this_00 + 0x23))) == '\0') && (param_2 == *((int *)GEN_TOP(((int)this_00 + 0x54))))) {
      uVar4 = 0;
      uVar2 = F_00bbaf50(this GEN_EDX_ARG);
      if ((uVar2 != 0) && (uVar4 = F_00531ed0(uVar2), (int)uVar4 < 0)) {
        uVar4 = 0;
      }
      uVar2 = F_00a09f30((uint)*((byte *)GEN_TOP(((int)this_00 + 0x30))),(uint)bVar3,uVar4);
      if (((int)uVar2 < 0) || (bVar1 = F_00c1f520(this_00 GEN_EDX_ARG,uVar2), bVar1 == 0)) {
        return 0;
      }
    }
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 8)));
  } while( true );
}

/* ref: FUN_00bc4c50 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc4c50(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbc4c50u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  int iVar1;
  
  if ((param_3 == '\0') && (*((int *)GEN_TOP((param_1 + 0x404))) != 0)) {
    F_00bc12c0(param_1 + 0x408 GEN_EDX_FWD,param_1,param_2);
  }
  for (iVar1 = *((int *)GEN_TOP((param_1 + 0x24))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 8)))) {
    F_00c1f250(iVar1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00bc4ca0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc4ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc4ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  float fVar1;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x24)));
  while( true ) {
    if (iVar2 == 0) {
      return 1;
    }
    if ((iVar2 != param_1) &&
       ((*((char *)GEN_TOP((iVar2 + 0x23))) == '\0' ||
        (fVar1 = *((float *)GEN_TOP((iVar2 + 0x38))), GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0))))) break;
    iVar2 = *((int *)GEN_TOP((iVar2 + 8)));
  }
  return 0;
}

/* ref: FUN_00bc4ce0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc4ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4), GEN_P(uint param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xbc4ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  GEN_PIN(uint param_5 = (uint)gen_a5;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  undefined1 * puVar2;
  uint * puVar3;
  
  puVar2 = ((undefined1 *)GEN_TOP(0x0));
  (*(int *)(gen_frame + 0x4)) = 0;
  if (param_5 == 0x4a) {
    if (param_2 != 0) {
      (*(int *)(gen_frame + 0x4)) = *((int *)GEN_TOP((param_2 + 0x10)));
    }
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  puVar3 = ((uint *)GEN_TOP(((iVar1 * 3 + 3) * 0x10 + (int)this)));
  if (((param_2 == 0) || (param_1 == 0)) || ((puVar3[0xb] & 0xc0000000) == 0)) {
    if ((puVar3[0xb] & 0xc0000000) == 0) {
      *puVar3 = *puVar3 | 8;
    }
    else {
      if ((*(int *)(gen_frame + 0x4)) != 0) {
        ((undefined1 *)(gen_frame + 0x0))[0] = 0;
        puVar2 = ((undefined1 *)(gen_frame + 0x0));
      }
      F_00b5ad00(REFG(void * PTR32, 0x14c4e84) GEN_EDX_FWD,puVar3 + 0xb,puVar2);
      *puVar3 = *puVar3 & 0xfffffff7;
    }
    *puVar3 = *puVar3 & 0xffffffe8;
    puVar3[0xb] = 0;
  }
  else {
    if (puVar3[1] == param_1) goto LAB_00bc4d7e;
    puVar3[0xb] = 0;
    *puVar3 = *puVar3 & 0xffffffe8 | 8;
  }
  puVar3[1] = 0;
LAB_00bc4d7e: ;
  *puVar3 = *puVar3 & 0xfffffe1f;
  puVar3[1] = param_1;
  puVar3[4] = param_5;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  if (param_5 == 0x4a) {
    if (param_2 != 0) {
      puVar3[6] = *((uint *)GEN_TOP((param_2 + 0x10)));
    }
  }
  else if (param_2 != 0) {
    puVar3[5] = *((uint *)GEN_TOP((param_2 + 0x14)));
    puVar3[7] = *((uint *)GEN_TOP((param_2 + 0x18)));
    puVar3[6] = *((uint *)GEN_TOP((param_2 + 0x10))) & 0x7ff;
    if ((*((uint *)GEN_TOP((param_2 + 0x10))) & 0x800) != 0) {
      *puVar3 = *puVar3 | 0x80;
    }
    if ((*((uint *)GEN_TOP((param_2 + 0x10))) & 0x1000) != 0) {
      *puVar3 = *puVar3 | 0x100;
    }
  }
  puVar3[2] = param_3;
  puVar3[3] = param_4;
  return param_3;
}

/* ref: FUN_00bc4e00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc4e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbc4e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  uint * puVar2;
  
  uVar1 = (uint)(param_3 == 0x4a);
  puVar2 = ((uint *)GEN_TOP(((uVar1 * 3 + 3) * 0x10 + (int)this)));
  if ((puVar2[2] == param_2) && (puVar2[1] == param_1)) {
    if ((puVar2[0xb] & 0xc0000000) == 0) {
      *puVar2 = *puVar2 | 8;
    }
    else {
      uVar1 = F_00b5ad00(REFG(void * PTR32, 0x14c4e84) GEN_EDX_FWD,puVar2 + 0xb,0);
      *puVar2 = *puVar2 & 0xfffffff7;
    }
    *puVar2 = *puVar2 & 0xffffffe8;
    puVar2[0xb] = 0;
    puVar2[1] = 0;
  }
  return uVar1;
}

/* ref: FUN_00bc4e60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc4e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc4e60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP(((int)this + ((uint)(param_2 == 0x4a) * 3 + 3) * 0x10 + 0x2c)));
  if ((*puVar1 & 0xc0000000) != 0) {
    puVar1 = ((uint *)GEN_TOP(F_00b5b880(REFG(void * PTR32, 0x14c4e84) GEN_EDX_FWD,puVar1,param_1)));
  }
  return (uint)puVar1;
}

/* ref: FUN_00bc4ea0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc4ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbc4ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[8];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  gen_args[6] = gen_a7;
  gen_args[7] = gen_a8;
  int iVar1;
  uint * puVar2;
  int iVar3;
  uint * puVar4;
  
  iVar3 = ((uint)((*(int *)&gen_args[3]) == 0x4a) * 3 + 3) * 0x10;
  iVar1 = *((int *)GEN_TOP((iVar3 + 4 + param_1)));
  puVar4 = ((uint *)GEN_TOP((iVar3 + param_1)));
  puVar2 = ((uint *)GEN_TOP(0x0));
  if (iVar1 != 0) {
    *puVar4 = (((*(uint *)&gen_args[7]) & 1) * 2 | (*(byte *)&gen_args[5]) & 1) << 5 | *puVar4 & 0xffffff81 | 1;
    puVar2 = ((uint *)GEN_TOP(F_00b5bff0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_FWD,&(*(uint *)&gen_args[7]),iVar1,*((undefined4 *)GEN_TOP((param_1 + 0x45c))),
                                  param_1,(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),0,(*(undefined4 *)&gen_args[0]),(*(int *)&gen_args[3]),(*(undefined4 *)&gen_args[6]))));
    puVar4[0xb] = *puVar2;
  }
  return (uint)puVar2;
}

/* ref: FUN_00bc4f20 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc4f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbc4f20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint * puVar4;
  uint uVar5;
  bool bVar6;
  
  uVar5 = (*(uint *)(gen_frame + 0x10));
  iVar1 = param_2;
  puVar4 = ((uint *)GEN_TOP(((param_2 * 3 + 3) * 0x10 + (int)this)));
  if (puVar4[1] == 0) {
    return;
  }
  bVar6 = true;
  (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) & 0xffffff00;
  if ((*puVar4 & 1) != 0) {
    if ((puVar4[0xb] & 0xc0000000) == 0) {
      *puVar4 = *puVar4 & 0xfffffffe;
    }
    else {
      bVar2 = F_00b5b6c0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_FWD,puVar4 + 0xb);
      if (bVar2 == 0) {
        *puVar4 = *puVar4 & 0xfffffffe;
      }
      else if (((puVar4[7] == 0) ||
               (uVar3 = F_00b5b0f0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,puVar4 + 0xb), (int)uVar3 < 0)) ||
              ((int)puVar4[7] < (int)uVar3)) {
        bVar6 = false;
      }
      (*(uint *)(gen_frame + 0x10)) = CONCAT31((int3)SUB43(uVar5,1),1);
      if (!bVar6) {
        return;
      }
    }
  }
  bVar6 = true;
  if (param_2 == 0) {
    bVar6 = (*((byte *)GEN_TOP(((int)this + 0x3fc))) & 8) == 0;
    param_2 = 0;
    if (puVar4[7] != 0) goto LAB_00bc4fc0;
  }
  else {
LAB_00bc4fc0: ;
    param_2 = 1;
  }
  uVar5 = puVar4[7];
  (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),uVar5 != 0);
  if ((bVar6) && (uVar3 = *puVar4, (uVar3 & 0x30) == 0)) {
    if ((uVar3 & 2) == 0) {
      if ((((uVar3 & 4) != 0) && ((char)param_3 == '\0')) &&
         (!(*(float *)&REFG(undefined, 0x1088114) < gen_bits2f(puVar4[10])))) goto LAB_00bc50e6;
      if (((char)(*(uint *)(gen_frame + 0x10)) == '\0') || (uVar5 == 0)) {
        if (((uVar3 & 8) == 0) && (iVar1 == 0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = puVar4[6];
        }
      }
    }
    else if (((uVar3 & 4) == 0) || ((char)param_3 != '\0')) {
      (*(ushort *)(gen_frame + 0x8)) = gen_x87_cw | 0xc00;
      gen_set_x87_cw((unsigned short)(*(ushort *)(gen_frame + 0x8)));
      (*(uint *)(gen_frame + 0x4)) = (uint)(longlong)TRUNC(((float10)GEN_TOD(gen_bits2f(puVar4[8]))));
      gen_set_x87_cw((unsigned short)gen_x87_cw);
      uVar5 = (*(uint *)(gen_frame + 0x4));
    }
    else {
      if (!(((float10)GEN_TOD(gen_bits2f(puVar4[9]))) < ((float10)GEN_TOD(gen_bits2f(puVar4[10]))))) goto LAB_00bc50e6;
      (*(ushort *)(gen_frame + 0x8)) = gen_x87_cw | 0xc00;
      gen_set_x87_cw((unsigned short)(*(ushort *)(gen_frame + 0x8)));
      (*(uint *)(gen_frame + 0x4)) = (uint)(longlong)TRUNC(((float10)GEN_TOD(gen_bits2f(puVar4[8]))));
      gen_set_x87_cw((unsigned short)gen_x87_cw);
      uVar5 = (*(uint *)(gen_frame + 0x4));
    }
    uVar3 = puVar4[5];
    if (uVar3 != 0) {
      if ((char)(*(uint *)(gen_frame + 0x10)) == '\0') {
        param_2 = 1;
      }
      else {
        uVar5 = 0;
        uVar3 = 0;
      }
    }
    if ((puVar4[0xb] & 0xc0000000) != 0) {
      if (uVar5 == 0) {
        F_00b5ad00(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,puVar4 + 0xb,0);
      }
      else {
        F_00b5add0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,puVar4 + 0xb);
      }
    }
    F_00bc4ea0(this GEN_EDX_ARG,puVar4[3],uVar5,uVar3,puVar4[4],param_2,iVar1 != 0,(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x10)));
  }
LAB_00bc50e6: ;
  *puVar4 = *puVar4 & 0xffffffe7;
  return;
}

/* ref: FUN_00bc5100 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc5100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc5100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00bc0ef0(((undefined *)GEN_TOP(((int)this + 0x408))) GEN_EDX_FWD,this);
  return uVar1;
}

/* ref: FUN_00bc5110 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bc5110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc5110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00bc0f10(((undefined *)GEN_TOP(((int)this + 0x408))) GEN_EDX_FWD,this);
  return bVar1;
}

/* ref: FUN_00bc5140 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc5140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc5140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint in_ecx;
  
  uVar1 = F_00bbafd0(this GEN_EDX_FWD);
  if (uVar1 != 0) {
    F_0068da00(uVar1 GEN_EDX_ARG,0);
  }
  uVar1 = F_00bbafd0(this GEN_EDX_ARG);
  if (uVar1 != 0) {
    F_0068da00(uVar1 GEN_EDX_ARG,1);
  }
  in_ecx = F_00bbafd0(this GEN_EDX_ARG);
  uVar1 = 0;
  if (in_ecx != 0) {
    F_0068da00(in_ecx GEN_EDX_ARG,0);
    uVar1 = F_0068da00(in_ecx GEN_EDX_ARG,1);
  }
  return uVar1;
}

/* ref: FUN_00bc5190 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc5190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc5190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00bc3fc0(this GEN_EDX_FWD,(undefined1)param_1,param_2);
  return uVar1;
}

/* ref: FUN_00bc51a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc51a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc51a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  
  F_00bccbd0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x1104ae0));
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((uint *)GEN_TOP(((int)this + 0x3fc))) = *((uint *)GEN_TOP(((int)this + 0x3fc))) & 0xffffff80;
  *((undefined1 *)GEN_TOP(((int)this + 0x3f9))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x404))) = 0;
  F_00bc1130(((undefined *)GEN_TOP(((int)this + 0x408))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x45c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x460))) = 0;
  iVar3 = 9;
  do {
    iVar1 = iVar3 - 1;
    *((undefined1 *)GEN_TOP(((int)this + iVar3 + 0x3ef))) = 0;
    iVar3 = iVar1;
  } while (iVar1 != 0);
  iVar3 = 8;
  puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0x4a4)));
  do {
    iVar3 = iVar3 - 1;
    puVar2[-9] = 0;
    puVar2[-1] = 0;
    puVar2 = puVar2 - 1;
  } while (iVar3 != 0);
  *((uint *)GEN_TOP(((int)this + 0x30))) = *((uint *)GEN_TOP(((int)this + 0x30))) & 0xffffff80;
  *((uint *)GEN_TOP(((int)this + 0x60))) = *((uint *)GEN_TOP(((int)this + 0x60))) & 0xffffff80;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  return (uint)this;
}

/* ref: FUN_00bc5290 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bc5290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc5290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD);
  if ((char)uVar2 != '\0') {
    bVar1 = F_00bc4530(this GEN_EDX_ARG);
    if (bVar1 != 0) {
      return *((int *)GEN_TOP(((int)this + 0x24))) != 0;
    }
  }
  return 0;
}

/* ref: FUN_00bc52c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc52c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbc52c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined * pvVar4;
  
  uVar2 = F_00bbafd0(this GEN_EDX_FWD);
  if (uVar2 == 0) {
    return 0;
  }
  pvVar4 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x28)));
  do {
    if (pvVar4 == ((undefined *)GEN_TOP(0x0))) {
LAB_00bc5303: ;
      piVar3 = ((int *)GEN_TOP(F_00406520()));
      pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,0x7c,0)));
      if (pvVar4 == ((undefined *)GEN_TOP(0x0))) {
        pvVar4 = ((undefined *)GEN_TOP(0x0));
      }
      else {
        pvVar4 = ((undefined *)GEN_TOP(F_00c1ed00(pvVar4 GEN_EDX_ARG,this,param_1,param_2,param_3)));
      }
      *((undefined4 *)GEN_TOP(((int)pvVar4 + 4))) = 0;
      *((undefined4 *)GEN_TOP(((int)pvVar4 + 8))) = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
      if (*((int *)GEN_TOP(((int)this + 0x28))) != 0) {
        *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + 4))) = pvVar4;
      }
      *((undefined * PTR32 *)GEN_TOP(((int)this + 0x28))) = pvVar4;
      *((undefined4 *)GEN_TOP(((int)pvVar4 + 0x20))) = 0x7c;
LAB_00bc5353: ;
      *((int *)GEN_TOP(((int)pvVar4 + 0x1c))) = *((int *)GEN_TOP(((int)pvVar4 + 0x1c))) + 1;
      return (uint)pvVar4;
    }
    bVar1 = F_00c1ec30(pvVar4 GEN_EDX_ARG,param_1,param_2,param_3);
    if (bVar1 != 0) {
      if (pvVar4 != ((undefined *)GEN_TOP(0x0))) goto LAB_00bc5353;
      goto LAB_00bc5303;
    }
    pvVar4 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar4 + 8)));
  } while( true );
}

/* ref: FUN_00bc5360 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc5360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc5360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined * this_00;
  int iVar4;
  
  uVar2 = F_00bbafd0(this GEN_EDX_FWD);
  if (uVar2 == 0) {
    return 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x28)));
  do {
    if (uVar2 == 0) {
LAB_00bc539b: ;
      iVar4 = *((int *)GEN_TOP((param_1 + 8))) * 0x58 + 0x24;
      piVar3 = ((int *)GEN_TOP(F_00406520()));
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,iVar4,0)));
      if (this_00 == ((undefined *)GEN_TOP(0x0))) {
        uVar2 = 0;
      }
      else {
        uVar2 = F_00c1ec70(this_00 GEN_EDX_ARG,this,param_1);
      }
      *((undefined4 *)GEN_TOP((uVar2 + 4))) = 0;
      *((undefined4 *)GEN_TOP((uVar2 + 8))) = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
      if (*((int *)GEN_TOP(((int)this + 0x28))) != 0) {
        *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + 4))) = uVar2;
      }
      *((uint *)GEN_TOP(((int)this + 0x28))) = uVar2;
      *((int *)GEN_TOP((uVar2 + 0x20))) = iVar4;
LAB_00bc53e7: ;
      *((int *)GEN_TOP((uVar2 + 0x1c))) = *((int *)GEN_TOP((uVar2 + 0x1c))) + 1;
      return uVar2;
    }
    bVar1 = F_00c1ec60(uVar2 GEN_EDX_ARG,param_1);
    if (bVar1 != 0) {
      if (uVar2 != 0) goto LAB_00bc53e7;
      goto LAB_00bc539b;
    }
    uVar2 = *((uint *)GEN_TOP((uVar2 + 8)));
  } while( true );
}

/* ref: FUN_00bc5400 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc5400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc5400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int * piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = param_1 + 7;
  *piVar1 = *piVar1 - 1;
  if (*piVar1 == 0) {
    iVar2 = param_1[1];
    iVar3 = param_1[2];
    if (iVar2 == 0) {
      *((int *)GEN_TOP(((int)this + 0x28))) = iVar3;
    }
    else {
      *((int *)GEN_TOP((iVar2 + 8))) = iVar3;
    }
    if (iVar3 != 0) {
      *((int *)GEN_TOP((iVar3 + 4))) = iVar2;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_FWD,0);
    F_00406810(param_1);
  }
  return;
}

/* ref: FUN_00bc5440 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc5440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc5440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 9;
  do {
    iVar3 = iVar4 - 1;
    if (*((char *)GEN_TOP(((int)this + iVar4 + 0x3ef))) == '\0') {
      pvVar1 = ((undefined *)GEN_TOP((iVar3 * 0x60 + 0x90 + (int)this)));
      if (pvVar1 == ((undefined *)GEN_TOP(0x0))) {
        uVar2 = 0;
      }
      else {
        uVar2 = F_00c1f760(pvVar1 GEN_EDX_FWD,this);
      }
      *((undefined1 *)GEN_TOP((iVar4 + 0x3ef + (int)this))) = 1;
      if (uVar2 != 0) goto LAB_00bc54a6;
      break;
    }
    iVar4 = iVar3;
  } while (iVar3 != 0);
  pvVar1 = ((undefined *)GEN_TOP(F_00406b90(0x5c,0,0)));
  if (pvVar1 == ((undefined *)GEN_TOP(0x0))) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00c1f760(pvVar1 GEN_EDX_ARG,this);
  }
LAB_00bc54a6: ;
  *((undefined4 *)GEN_TOP((uVar2 + 4))) = 0;
  *((undefined4 *)GEN_TOP((uVar2 + 8))) = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
  if (*((int *)GEN_TOP(((int)this + 0x24))) != 0) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + 4))) = uVar2;
  }
  *((uint *)GEN_TOP(((int)this + 0x24))) = uVar2;
  return uVar2;
}

/* ref: FUN_00bc54d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc54d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc54d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  iVar1 = param_1[2];
  iVar2 = param_1[1];
  if (iVar2 == 0) {
    *((int *)GEN_TOP(((int)this + 0x24))) = iVar1;
  }
  else {
    *((int *)GEN_TOP((iVar2 + 8))) = iVar1;
  }
  if (iVar1 != 0) {
    *((int *)GEN_TOP((iVar1 + 4))) = iVar2;
  }
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x90)));
  if ((puVar3 <= param_1) && (param_1 < ((undefined4 *)GEN_TOP(((int)this + 0x3f0U))))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_FWD,0);
    uVar4 = (int)param_1 + (-0x90 - (int)this);
    *((undefined1 *)GEN_TOP((uVar4 / 0x60 + 0x3f0 + (int)this))) = 0;
    return uVar4 * -0x55555555;
  }
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,1)));
  }
  return (uint)puVar3;
}

/* ref: FUN_00bc5550 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc5550(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbc5550u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00bc4f20(param_1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2),0,param_3);
  F_00bc4f20(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),1,param_3);
  *((uint *)GEN_TOP(((int)param_1 + 0x3fc))) = *((uint *)GEN_TOP(((int)param_1 + 0x3fc))) & 0xffffffef;
  return;
}

/* ref: FUN_00bc55e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc55e0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc55e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00bc5600 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc5600(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc5600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00bc5610 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc5610(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc5610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00bc5630 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc5630(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc5630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Connection::GraphCharaConnect::vf1 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc5650(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc5650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x14))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x18))) = 0;
  return 0;
}

/* ref: FUN_00bc5660 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc5660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc5660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = 0;
  *((int *)GEN_TOP(((int)this + 4))) = *param_1;
  if (*param_1 != 0) {
    *((int *)GEN_TOP((*param_1 + 4))) = (int)this - 4;
  }
  *param_1 = (int)this - 4;
  return (uint)param_1;
}

/* ref: FUN_00bc5690 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc5690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc5690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  if (iVar1 == 0) {
    *param_1 = iVar2;
  }
  else {
    *((int *)GEN_TOP((iVar1 + 8))) = iVar2;
  }
  if (iVar2 != 0) {
    *((int *)GEN_TOP((iVar2 + 4))) = iVar1;
  }
  return 0;
}

/* ref: FUN_00bc56c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc56c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc56c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = 0;
  *((int *)GEN_TOP(((int)this + 4))) = *param_1;
  if (*param_1 != 0) {
    *((int *)GEN_TOP((*param_1 + 4))) = (int)this - 4;
  }
  *param_1 = (int)this - 4;
  return (uint)param_1;
}

/* ref: FUN_00bc56f0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc56f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc56f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  if (iVar1 == 0) {
    *param_1 = iVar2;
  }
  else {
    *((int *)GEN_TOP((iVar1 + 8))) = iVar2;
  }
  if (iVar2 != 0) {
    *((int *)GEN_TOP((iVar2 + 4))) = iVar1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Object::CharacterController::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc5720(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc5720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bc4100(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bc5750 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc5750(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc5750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 4))) = param_2;
  return in_ecx;
}

/* ref: Client::System::Task::SpursTaskWork::~SpursTaskWork */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bc5760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc5760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined * pSVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1104af4));
  pSVar2 = this + 0x68;
  iVar3 = 2;
  do {
    puVar1 = *(undefined4 * PTR32 *)pSVar2;
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
    }
    pSVar2 = pSVar2 + 4;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  F_004cf880((undefined *)this GEN_EDX_ARG);
  return;
}

/* ref: Client::System::Task::SpursTaskWork::Start */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc57a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xbc57a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  undefined * pLVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined * pSVar5;
  
  *(uint *)(this + 0x70) = param_1;
  uVar2 = param_1;
  if (this[0x18] == (undefined1)0x0) {
    this[0x18] = (undefined1)0x1;
    pLVar1 = ((undefined *)GEN_TOP(F_00406b90(0x24,0,0)));
    if (pLVar1 == ((undefined *)GEN_TOP(0x0))) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_004cf0c0(pLVar1 GEN_EDX_ARG,param_4,param_5,0);
    }
    *(uint *)(this + 0x68) = uVar2;
    pLVar1 = ((undefined *)GEN_TOP(F_00406b90(0x24,0,0)));
    if (pLVar1 == ((undefined *)GEN_TOP(0x0))) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_004cf0c0(pLVar1 GEN_EDX_ARG,param_6,param_7,0);
    }
    *(undefined4 *)(this + 0x50) = *(undefined4 *)(this + 0x68);
    *(uint *)(this + 0x6c) = uVar2;
    *(uint *)(this + 0x54) = uVar2;
    puVar4 = param_2;
    pSVar5 = this + 0x20;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 - 1) {
      *(undefined4 *)pSVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      pSVar5 = pSVar5 + 4;
    }
    uVar2 = F_004cf9e0(this GEN_EDX_ARG,0,0,0,0);
  }
  this[0x19] = (undefined1)0x0;
  return uVar2;
}

/* ref: Client::System::Task::SpursTaskWork::Run */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc5840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc5840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((param_1 + 0x24))))
                    (*((undefined4 *)GEN_TOP((param_1 + 0x50))),*((undefined4 *)GEN_TOP((param_1 + 0x54))),
                     *((undefined4 *)GEN_TOP((param_1 + 0x58))),*((undefined4 *)GEN_TOP((param_1 + 0x5c))),
                     *((undefined4 *)GEN_TOP((param_1 + 0x60))),*((undefined4 *)GEN_TOP((param_1 + 100))));
  *((uint *)GEN_TOP((param_1 + 0x28))) = uVar1;
  return uVar1;
}

/* ref: Client::System::Task::SpursTaskWork::Join */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc5880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc5880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * pSVar4;
  
  F_004cf020((undefined *)this GEN_EDX_FWD);
  uVar1 = *(uint *)(this + 0x28);
  pSVar4 = this + 0x68;
  iVar3 = 2;
  do {
    puVar2 = *(undefined4 * PTR32 *)pSVar4;
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *(int *)pSVar4 = 0;
    }
    pSVar4 = pSVar4 + 4;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  *(undefined2 *)(this + 0x18) = 0x100;
  return uVar1;
}

/* ref: Client::System::Task::SpursTaskWork::TryJoin */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc58d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc58d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined * pSVar5;
  
  uVar3 = F_004cf030((undefined *)this GEN_EDX_FWD);
  cVar2 = (char)uVar3;
  if (cVar2 != '\0') {
    pSVar5 = this + 0x68;
    iVar4 = 2;
    do {
      puVar1 = *(undefined4 * PTR32 *)pSVar5;
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
        uVar3 = CONCAT31((int3)(uVar3 >> 8),cVar2);
        *(int *)pSVar5 = 0;
      }
      pSVar5 = pSVar5 + 4;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
    *param_1 = *(undefined4 *)(this + 0x28);
    *(undefined2 *)(this + 0x18) = 0x100;
  }
  return uVar3;
}

/* ref: FUN_00bc5930 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc5930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc5930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_004cf180(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x68))) GEN_EDX_FWD,param_1);
  return (uint)uVar1;
}

/* ref: FUN_00bc5940 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc5940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc5940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004cf330(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x6c))) GEN_EDX_FWD,param_1);
  return (uint)(uVar1 != 0);
}

/* ref: Client::System::Task::SpursTaskWork::WriteInput */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc5960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc5960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = F_004cf180(*(undefined * PTR32 *)(this + 0x68) GEN_EDX_FWD,param_1);
  uVar2 = (uint)uVar3;
  cVar1 = (char)uVar3;
  while (cVar1 == '\0') {
    gen_imp_Sleep(0);
    uVar3 = F_004cf180(*(undefined * PTR32 *)(this + 0x68) GEN_EDX_ARG,param_1);
    uVar2 = (uint)uVar3;
    cVar1 = (char)uVar3;
  }
  return uVar2;
}

/* ref: Client::System::Task::SpursTaskWork::ReadOutput */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc59a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc59a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004cf330(*(undefined * PTR32 *)(this + 0x6c) GEN_EDX_FWD,param_1);
  while (uVar1 == 0) {
    gen_imp_Sleep(0);
    uVar1 = F_004cf330(*(undefined * PTR32 *)(this + 0x6c) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Client::System::Task::SpursTaskWork::SpursTaskWork */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc59e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc59e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_004cefe0((undefined *)this GEN_EDX_FWD);
  *(undefined2 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1104af4));
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  return (uint)this;
}

/* ref: Client::System::Task::SpursTaskWork::vf1 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bc5a10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc5a10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined1 *)GEN_TOP((in_ecx + 0x14))) = 1;
  return;
}

/* ref: Client::System::Task::SpursTaskWork::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc5a30(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc5a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  undefined * pTVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[6])REFP(0x1104af4));
  pTVar2 = param_1 + 0x68;
  iVar3 = 2;
  do {
    puVar1 = *(undefined4 * PTR32 *)pTVar2;
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_FWD,1);
    }
    pTVar2 = pTVar2 + 4;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  F_004cf880(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bc5a80 */
GEN_OWN GEN_FRAME float10 F_00bc5a80(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbc5a80u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bc5aa0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc5aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc5aa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0042e430(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&REFG(undefined, 0x1104b90));
  *((undefined2 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  return 0;
}

/* ref: FUN_00bc5b00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc5b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc5b00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0042e430(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&REFG(undefined, 0x1104b90));
  *((undefined2 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  return 0;
}

/* ref: FUN_00bc5b60 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc5b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc5b60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0042b630((int)this + 4 GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *(undefined4 *)this = 2;
  F_0042e430(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&REFG(undefined, 0x1104b90));
  *((undefined2 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  return (uint)this;
}

/* ref: FUN_00bc5ba0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc5ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc5ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint in_ecx;
  undefined * this_00;
  ulonglong uVar2;
  undefined4 uVar3;
  
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar3 = 0x1c;
    in_ecx = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG);
    this_00 = ((undefined *)GEN_TOP(F_00763050(in_ecx GEN_EDX_ARG,uVar3)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_008b8670(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x5c))));
    }
  }
  uVar2 = F_0042c880(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  return (uint)uVar2;
}

/* ref: FUN_00bc5be0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc5be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc5be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined4 *)this = 2;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = param_1;
  F_0042e430(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&REFG(undefined, 0x1104b90));
  *((undefined2 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  return 0;
}

/* ref: FUN_00bc5c20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc5c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc5c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined1 uVar4;
  undefined4 uVar5;
  
  piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  uVar3 = 0;
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    uVar5 = 0x1c;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x48))))(piVar2 GEN_EDX_ARG);
    this_00 = ((undefined *)GEN_TOP(F_00763050(uVar3 GEN_EDX_ARG,uVar5)));
    uVar3 = 0;
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      if (*(int *)this == 1) {
        if ((*((int *)GEN_TOP(((int)this + 100))) == 0) &&
           (F_00ab1160(((float *)GEN_TOP(((int)this + 0x60))),1), *((float *)GEN_TOP(((int)this + 0x60))) <= 0.0)) {
          F_00bc5aa0(this GEN_EDX_ARG);
        }
        if (*((char *)GEN_TOP(((int)this + 0x58))) == '\0') {
LAB_00bc5ceb: ;
          uVar3 = F_008b8670(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x5c))));
          *(undefined4 *)this = 2;
          return uVar3;
        }
        bVar1 = F_00538870(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x5c))),0);
        uVar3 = CONCAT31(extraout_var_00,bVar1);
        if (bVar1 == 0) goto LAB_00bc5ceb;
      }
      else {
        uVar3 = *(int *)this - 2;
        if ((uVar3 == 0) && (*((char *)GEN_TOP(((int)this + 0x58))) != '\0')) {
          bVar1 = F_00538870(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x5c))),0);
          uVar3 = CONCAT31(extraout_var,bVar1);
          if (bVar1 != 0) {
            uVar4 = *((undefined1 *)GEN_TOP(((int)this + 0x59)));
            uVar3 = F_0042a990((int)this + 4 GEN_EDX_ARG);
            F_008bd150(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x5c))),uVar3,uVar4);
            *(undefined4 *)this = 1;
            uVar3 = F_0089d500(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x5c))));
            return uVar3;
          }
        }
      }
      if (*(int *)this == 1) {
        uVar3 = F_0089d500(this_00 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x5c))));
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00bc5d20 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00bc5d20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xbc5d20u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined * this;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar6 = 0x1c;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG);
    this = ((undefined *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar6)));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_008b8670(this GEN_EDX_ARG,param_1[0x17]);
      *param_1 = 2;
    }
  }
  *(undefined1 *)(param_1 + 0x16) = 1;
  uVar2 = F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2,REFG(undefined4, 0x108cc50));
  F_0042ccf0(param_1 + 1 GEN_EDX_ARG,uVar2);
  uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  bVar3 = GEN_ISNAN(param_3) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  bVar4 = bVar3 || param_3 == *(float *)&REFG(undefined, 0x1088114);
  uVar2 = CONCAT22((short)(uVar5 >> 0x10),
                   CONCAT11(bVar4 << 6 | bVar3 << 2 | 2U | !(*(float *)&REFG(undefined, 0x1088114) <= param_3),
                            param_4));
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x59))) = param_4;
  param_1[0x18] = (undefined4)gen_fl2bits(param_3);
  if (bVar3 != bVar4) {
    param_1[0x19] = 1;
    return uVar2;
  }
  param_1[0x19] = 0;
  return uVar2;
}

/* ref: FUN_00bc5df0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc5df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc5df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  puVar1 = ((uint *)GEN_TOP(F_00ab29c0(param_1)));
  uVar2 = 0;
  if (puVar1 != ((uint *)GEN_TOP(0x0))) {
    uVar2 = F_00bc5d20(this GEN_EDX_ARG,(*puVar1 & 0xffffff) + (int)puVar1,*(float *)&REFG(undefined, 0x1104b8c),
                         (char)puVar1[1]);
  }
  return uVar2;
}

/* ref: FUN_00bc5e30 */
GEN_OWN GEN_FRAME float10 F_00bc5e30(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbc5e30u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bc5e50 */
GEN_OWN GEN_FRAME uint F_00bc5e50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbc5e50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  if (param_1 == REFG(int, 0x1379690)) {
    F_00a7e510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,param_2,param_3);
  }
  uVar1 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,param_1);
  if ((uVar1 != 0) && (*((byte *)GEN_TOP((uVar1 + 0x1688))) == param_2)) {
    *((char *)GEN_TOP((uVar1 + 0x1689))) = (char)param_3;
  }
  uVar1 = F_00ae0810(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,param_1);
  if (uVar1 != 0) {
    *((char *)GEN_TOP((uVar1 + 0x53))) = (char)param_3;
  }
  return uVar1;
}

/* ref: FUN_00bc5eb0 */
GEN_OWN GEN_FRAME uint F_00bc5eb0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbc5eb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  int * piVar3;
  undefined * this;
  uint uVar4;
  undefined4 uVar5;
  
  F_00a7d890(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,param_2,1);
  if (param_1 == REFG(int, 0x1379690)) {
    F_00a7e510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,param_2,1);
  }
  uVar1 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,param_1);
  if ((uVar1 != 0) && (*((byte *)GEN_TOP((uVar1 + 0x1688))) == param_2)) {
    *((undefined1 *)GEN_TOP((uVar1 + 0x1689))) = 1;
  }
  uVar1 = F_00ae0810(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,param_1);
  if (uVar1 != 0) {
    *((undefined1 *)GEN_TOP((uVar1 + 0x53))) = 1;
  }
  F_00a3a020();
  F_00a6e6a0(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG);
  uVar1 = F_00a68280(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,param_2,1);
  uVar2 = F_00ab21a0(param_2);
  uVar4 = (uint)*((ushort *)GEN_TOP((uVar2 + 0x10)));
  uVar2 = F_00a68310(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,uVar4);
  if ((((short)uVar2 == 0) && ((uVar4 == 0x20 || (uVar4 == 0x21)))) ||
     ((param_2 == 0x12 && ((short)uVar1 == 0)))) {
    piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      uVar5 = 3;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x48))))(piVar3 GEN_EDX_ARG);
      uVar1 = F_00763050(uVar1 GEN_EDX_ARG,uVar5);
      if (uVar1 != 0) {
        F_00a6e6a0(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG);
        F_0076ec40(0x26,1,0x1e);
      }
    }
  }
  uVar5 = 1;
  this = ((undefined *)GEN_TOP(F_006b8c00()));
  uVar1 = F_006de6a0(this GEN_EDX_ARG,param_2,uVar5);
  return uVar1;
}

/* ref: FUN_00bc5fc0 */
GEN_OWN GEN_FRAME uint F_00bc5fc0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbc5fc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  bool bVar1;
  byte bVar2;
  int * piVar3;
  int * in_ecx;
  uint uVar4;
  undefined * this;
  uint uVar5;
  
  bVar1 = false;
  piVar3 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  in_ecx = ((int *)GEN_TOP(F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,param_1)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    if ((short)param_3 != 1) {
      F_00a7d290((*(byte *)(in_ecx + 0x5a2) != param_2) + 0x24e,in_ecx,param_2,param_3 & 0xffff,0,
                   REFG(float, 0x10b9308));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x98))))(in_ecx GEN_EDX_ARG);
      if ((char)uVar4 != '\0') {
        F_00ab4370(0x74,in_ecx,in_ecx,0,0);
      }
    }
    bVar2 = F_00a9f620(in_ecx GEN_EDX_ARG);
    if (bVar2 != 0) {
      bVar1 = true;
    }
  }
  if (param_1 == REFG(int, 0x1379690)) {
    F_00a7e510(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,param_2,param_3);
  }
  uVar4 = F_00a64450(&REFG(undefined, 0x14a9a18) GEN_EDX_ARG,param_1);
  if ((uVar4 != 0) && (*((byte *)GEN_TOP((uVar4 + 0x1688))) == param_2)) {
    *((char *)GEN_TOP((uVar4 + 0x1689))) = (char)param_3;
  }
  uVar4 = F_00ae0810(&REFG(undefined, 0x1336e40) GEN_EDX_ARG,param_1);
  if (uVar4 != 0) {
    *((char *)GEN_TOP((uVar4 + 0x53))) = (char)param_3;
  }
  if (bVar1) {
    F_00a7d890(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,param_2,param_3);
    F_00a3a020();
    F_00a6e6a0(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG);
    uVar4 = param_2;
    uVar5 = param_3;
    this = ((undefined *)GEN_TOP(F_006b8c00()));
    F_006de6a0(this GEN_EDX_ARG,uVar4,uVar5);
    F_00a6e1d0(&REFG(undefined, 0x14a9e40) GEN_EDX_ARG,(char)param_2,param_3);
    uVar4 = F_00a7e5a0(&REFG(undefined1, 0x14ab070) GEN_EDX_ARG,(uint)REFG(undefined2, 0x14ab148));
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xd8))))(piVar3 GEN_EDX_ARG,0x1d526,1,2,0xffffffff);
    }
  }
  return uVar4;
}

/* ref: FUN_00bc6120 */
GEN_OWN GEN_FRAME float10 F_00bc6120(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbc6120u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: Client::Game::Character::BattleChara::vf43 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc6140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc6140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  F_00aa5e20(this GEN_EDX_FWD,param_1);
  F_00ac6e20(this + 0x30c0 GEN_EDX_ARG);
  F_00ac3b40(this + 0x3210 GEN_EDX_ARG);
  F_00b7af70(this + 0x2f44 GEN_EDX_ARG,this);
  uVar1 = F_00b7aa60(this + 0x2f44 GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::Game::Character::BattleChara::vf44 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc6190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc6190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00aa6560(this GEN_EDX_FWD);
  F_00ac3b60();
  return uVar1;
}

/* ref: FUN_00bc61b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc61b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc61b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 < 2) {
    return *((uint *)GEN_TOP((in_ecx + 0x18 + param_2 * 4)));
  }
  return 0;
}

/* ref: FUN_00bc61e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc61e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc61e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x11053b0));
  F_00acfad0(in_ecx + 1 GEN_EDX_FWD);
  *(undefined1 *)(in_ecx + 0x60) = 0;
  in_ecx[0x61] = 1;
  return (uint)in_ecx;
}

/* ref: FUN_00bc6220 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00bc6220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc6220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0xcc, 4, 4);
  byte bVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc8));
  if (*((int *)GEN_TOP(((int)this + 0x184))) < 9) {
    switch((unsigned int)(uintptr_t)(*((int *)GEN_TOP(((int)this + 0x184))))) {
    case 1: ;
      bVar1 = F_00ad01f0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
      *((uint *)GEN_TOP(((int)this + 0x184))) = (-(uint)(bVar1 != 0) & 0xfffffff9) + 9;
      break;
    case 2: ;
      bVar1 = F_00ad0240(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0);
      *((uint *)GEN_TOP(((int)this + 0x184))) = (-(uint)(bVar1 != 0) & 0xfffffffb) + 8;
      break;
    case 3: ;
    case 5: ;
    case 7: ;
      F_00acfc20(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
      if (*((int *)GEN_TOP(((int)this + 0x1c))) != 1) {
        if (*((int *)GEN_TOP(((int)this + 0x1c))) == 2) {
          *((int *)GEN_TOP(((int)this + 0x184))) = *((int *)GEN_TOP(((int)this + 0x184))) + 1;
        }
        else {
          *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 8;
        }
      }
      break;
    case 4: ;
      F_0042b630(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      F_0042b630(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      (*(undefined4 *)(gen_frame + 0x58)) = 0;
      (*(undefined4 *)(gen_frame + 0xb0)) = 0x45;
      (*(undefined4 *)(gen_frame + 0xb4)) = 0x1ab;
      F_0042e430(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,"(Auto) GM Call from jail.");
      (*(undefined4 *)(gen_frame + 0xb8)) = 0;
      F_0042e430(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,"(Auto) GM Call from jail.");
      F_0042d540(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x11053a8));
      if (REFG(int, 0x137104c) != 0) {
        uVar2 = F_004309e0(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x10))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
        uVar2 = F_004142e0(uVar2 GEN_EDX_ARG);
        F_0042d4d0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar2);
      }
      bVar1 = F_00ad0d30(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0,&(*(undefined4 *)(gen_frame + 0x58)),((undefined1 *)(gen_frame + 0x4)));
      *((uint *)GEN_TOP(((int)this + 0x184))) = (-(uint)(bVar1 != 0) & 0xfffffffd) + 8;
      F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
      break;
    case 6: ;
      bVar1 = F_00ad0470(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0);
      *((uint *)GEN_TOP(((int)this + 0x184))) = 8 - (uint)(bVar1 != 0);
      break;
    case 8: ;
      F_00acfc20(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
      bVar1 = F_00acfb50(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
      if (bVar1 != 0) {
        *((undefined4 *)GEN_TOP(((int)this + 0x184))) = 9;
      }
    }
  }
  return *((int *)GEN_TOP(((int)this + 0x184))) == 9;
}

/* ref: Client::SupportDesk::GMCallModule::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc6400(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc6400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x11053b0));
  F_00ad0190(param_1 + 1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bc6430 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc6430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc6430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0042b630((int)this + 8 GEN_EDX_FWD);
  *(undefined1 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  F_0042e430(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
  return (uint)this;
}

/* ref: FUN_00bc6460 */
GEN_OWN GEN_FRAME float10 F_00bc6460(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbc6460u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bc6480 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc6480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc6480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  int iVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1105aec));
  iVar1 = 0x13;
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x73c)));
  do {
    this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x5c)));
    uVar2 = F_0042c880(this_00 GEN_EDX_FWD);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return (uint)uVar2;
}

/* ref: Client::Game::UI::BuddyEquip::vf1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc64b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xbc64b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  int iVar1;
  uint uVar2;
  
  if ((*param_2 & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 < 0) goto LAB_00bc6505;
  }
  if (iVar1 < (int)(uint)(byte)this[0x734]) {
    uVar2 = (uint)(byte)this[iVar1 * 0x5c + 4];
    F_00a69c10(0,uVar2);
    F_00a69c10(1,uVar2);
    F_00a69c10(2,uVar2);
  }
LAB_00bc6505: ;
  *(undefined4 *)(this + 0x738) = 0;
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 1;
  return (uint)param_1;
}

/* ref: FUN_00bc6530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc6530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc6530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  int iVar1;
  
  *((undefined1 *)GEN_TOP(((int)this + 0x734))) = 0;
  this_00 = ((undefined *)GEN_TOP(((int)this + 0xc)));
  iVar1 = 0x14;
  do {
    *((undefined1 *)GEN_TOP(((int)this_00 - 8))) = 0;
    F_0042e430(this_00 GEN_EDX_FWD,&REFG(undefined, 0x110546b));
    this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x5c)));
    iVar1 = iVar1 - 1;
  } while (iVar1 != 0);
  *((undefined4 *)GEN_TOP(((int)this + 0x738))) = 0;
  return (uint)this;
}

/* ref: FUN_00bc6580 */
GEN_OWN GEN_NOFRAME unsigned int F_00bc6580(void)
{
  GEN_ENTER(0xbc6580u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00bc65a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc65a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc65a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  undefined1 * puVar2;
  
  puVar2 = ((undefined1 *)GEN_TOP(((int)this + 4)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1105aec));
  iVar1 = 0x13;
  this_00 = ((undefined *)GEN_TOP(((int)this + 0xc)));
  do {
    F_0042b630(this_00 GEN_EDX_FWD);
    *puVar2 = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 - 4))) = 0;
    F_0042e430(this_00 GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
    puVar2 = puVar2 + 0x5c;
    this_00 = ((undefined *)GEN_TOP(((int)this_00 + 0x5c)));
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  F_00bc6530(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00bc6600 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc6600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc6600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  byte bVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  uint * puVar6;
  uint uVar7;
  undefined * this_00;
  int iVar8;
  undefined4 * puVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined * pvVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint * local_c;
  byte local_5;
  
  if (*((int *)GEN_TOP(((int)this + 0x738))) != 0) {
    piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x1c))))(piVar4 GEN_EDX_ARG)));
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x54))))(piVar4 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x738))),0);
    return uVar5;
  }
  *((undefined1 *)GEN_TOP(((int)this + 0x734))) = 0;
  puVar9 = ((undefined4 *)GEN_TOP(((int)this + 8)));
  iVar8 = 0x14;
  do {
    *(undefined1 *)(puVar9 - 1) = 0;
    *puVar9 = 0;
    F_0042e430(puVar9 + 1 GEN_EDX_ARG,&REFG(undefined, 0x110545b));
    cVar1 = REFG(char, 0x14ab29a);
    puVar9 = puVar9 + 0x17;
    iVar8 = iVar8 - 1;
  } while (iVar8 != 0);
  bVar2 = F_00a6b340(&REFG(undefined, 0x14ab584) GEN_EDX_ARG,0);
  local_5 = 1;
  local_c = ((uint *)GEN_TOP(0x1));
  do {
    puVar6 = ((uint *)GEN_TOP(F_00ab2c60(local_c)));
    uVar5 = puVar6[7];
    uVar7 = puVar6[6];
    uVar10 = puVar6[5];
    if ((((*((char *)GEN_TOP(((int)puVar6 + 0x26))) == cVar1) && (cVar1 != '\0')) ||
        (*((char *)GEN_TOP(((int)puVar6 + 0x26))) == '\0')) &&
       ((bVar3 = F_00a6b2e0(&REFG(undefined, 0x14ab584) GEN_EDX_ARG,local_c), bVar3 != 0 &&
        ((uVar5 != 0 || uVar7 != 0) || uVar10 != 0)))) {
      *((byte *)GEN_TOP(((uint)*((byte *)GEN_TOP(((int)this + 0x734))) * 0x5c + 4 + (int)this))) = local_5;
      F_0042e430(((undefined *)GEN_TOP(((uint)*((byte *)GEN_TOP(((int)this + 0x734))) * 0x5c + 0xc + (int)this))) GEN_EDX_ARG,
                   (*puVar6 & 0xffffff) + (int)puVar6);
      if (((uint *)GEN_TOP((uint)bVar2)) == local_c) {
        *((undefined4 *)GEN_TOP(((uint)*((byte *)GEN_TOP(((int)this + 0x734))) * 0x5c + 8 + (int)this))) = 0xea61;
      }
      *((char *)GEN_TOP(((int)this + 0x734))) = *((char *)GEN_TOP(((int)this + 0x734))) + '\x01';
    }
    local_c = ((uint *)GEN_TOP(((int)local_c + 1)));
    local_5 = local_5 + 1;
  } while (local_5 < 0x14);
  puVar6 = ((uint *)GEN_TOP(F_00ab2c60(0)));
  *((undefined1 *)GEN_TOP(((uint)*((byte *)GEN_TOP(((int)this + 0x734))) * 0x5c + 4 + (int)this))) = 0;
  F_0042e430(((undefined *)GEN_TOP(((uint)*((byte *)GEN_TOP(((int)this + 0x734))) * 0x5c + 0xc + (int)this))) GEN_EDX_ARG,
               (*puVar6 & 0xffffff) + (int)puVar6);
  *((char *)GEN_TOP(((int)this + 0x734))) = *((char *)GEN_TOP(((int)this + 0x734))) + '\x01';
  piVar4 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar5 = (uint)(byte)((*((char *)GEN_TOP(((int)this + 0x734))) + '\x02') * '\x03');
  puVar6 = ((uint *)GEN_TOP(F_00406bb0(-(uint)(0xfffffffb < uVar5 * 8) | uVar5 * 8 + 4,0,0)));
  if (puVar6 == ((uint *)GEN_TOP(0x0))) {
    local_c = ((uint *)GEN_TOP(0x0));
  }
  else {
    *puVar6 = uVar5;
    local_c = puVar6 + 1;
    puVar6 = local_c;
    uVar7 = uVar5;
    while (uVar7 = uVar7 - 1, -1 < (int)uVar7) {
      *puVar6 = 0;
      puVar6 = puVar6 + 2;
    }
  }
  bVar2 = 0;
  if (*((char *)GEN_TOP(((int)this + 0x734))) != '\0') {
    do {
      uVar10 = (uint)bVar2;
      uVar7 = *((uint *)GEN_TOP((uVar10 * 0x5c + 8 + (int)this)));
      F_005a2710(local_c + (uVar10 * 3 + 6) * 2 GEN_EDX_ARG,3);
      (local_c + (uVar10 * 3 + 6) * 2)[1] = uVar7;
      uVar7 = F_0042a990((int)this + uVar10 * 0x5c + 0xc GEN_EDX_ARG);
      F_005a2710(local_c + uVar10 * 6 + 0xe GEN_EDX_ARG,6);
      (local_c + uVar10 * 6 + 0xe)[1] = uVar7;
      bVar2 = bVar2 + 1;
    } while (bVar2 < *((byte *)GEN_TOP(((int)this + 0x734))));
  }
  if ((piVar4 != ((int *)GEN_TOP(0x0))) && (1 < *((byte *)GEN_TOP(((int)this + 0x734))))) {
    uVar16 = 4;
    uVar15 = 0;
    uVar14 = 0;
    uVar12 = 0x28;
    puVar6 = local_c;
    pvVar13 = this;
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x1c))))(piVar4 GEN_EDX_ARG)));
    uVar5 = F_008668b0(this_00 GEN_EDX_ARG,uVar12,uVar5,puVar6,pvVar13,uVar14,uVar15,uVar16);
    *((uint *)GEN_TOP(((int)this + 0x738))) = uVar5;
  }
  uVar5 = 0;
  if (local_c != ((uint *)GEN_TOP(0x0))) {
    uVar5 = local_c[-1];
    puVar6 = local_c + uVar5 * 2;
    while (uVar5 = uVar5 - 1, -1 < (int)uVar5) {
      puVar6 = puVar6 - 2;
      F_005a2670(puVar6 GEN_EDX_ARG);
    }
    uVar11 = F_00406b30(local_c - 1);
    uVar5 = (uint)uVar11;
  }
  return uVar5;
}

/* ref: Client::Game::UI::BuddyEquip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc68e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc68e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * this;
  int iVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1105aec));
  iVar1 = 0x13;
  this = param_1 + 0x1cf;
  do {
    this = this - 0x17;
    F_0042c880(this GEN_EDX_FWD);
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bc6930 */
GEN_OWN GEN_FRAME float10 F_00bc6930(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbc6930u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bc6950 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc6950(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc6950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 4))) = param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 8))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xc))) = 0;
  return 0;
}

/* ref: FUN_00bc6970 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc6970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc6970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int in_ecx;
  
  if ((param_1 < 2) && (in_ecx = *((int *)GEN_TOP(((int)this + param_1 * 4 + 8))), in_ecx != 0)) {
    F_00983120(in_ecx GEN_EDX_FWD,0);
    F_009bc530(*((undefined * PTR32 *)GEN_TOP(((int)this + param_1 * 4 + 8))) GEN_EDX_ARG,1);
    F_009bc4a0(*((undefined * PTR32 *)GEN_TOP(((int)this + param_1 * 4 + 8))) GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 8))) = 0;
  }
  return;
}

/* ref: FUN_00bc69b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc69b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc69b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  if (param_1 < 2) {
    return *((int *)GEN_TOP(((int)this + param_1 * 4 + 8))) == 0;
  }
  return 1;
}

/* ref: Client::Game::Character::Companion::vf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc69d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc69d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0xe0000000;
  if (*(int *)(this + 0x2f20) != 0) {
    uVar1 = *((uint *)GEN_TOP((*(int *)(this + 0x2f20) + 0x74)));
  }
  return uVar1;
}

/* ref: Client::Game::Character::Companion::vf43 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc69f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc69f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 uVar1;
  
  F_00aa5e20(this GEN_EDX_FWD,param_1);
  *(undefined4 *)(this + 0x2f30) = GEN_FLT_TO(*(undefined4 *)(this + 0x2f30), REFG(float, 0x1106240));
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  this[0x8a] = (undefined1)0x9;
  *(undefined4 *)(this + 0x2f20) = 0;
  *(undefined4 *)(this + 0x2f28) = 0;
  *(undefined4 *)(this + 0x2f2c) = 0;
  *(undefined4 *)(this + 0x2f34) = uVar1;
  *(undefined4 *)(this + 0x2f38) = 0;
  *(undefined4 *)(this + 0x2f24) = 0;
  *(undefined * PTR32 *)(this + 0x2f40) = this;
  *(undefined4 *)(this + 0x2f44) = 0;
  *(undefined4 *)(this + 0x2f48) = 0;
  return 0;
}

/* ref: FUN_00bc6a70 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bc6a70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc6a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((short *)GEN_TOP((in_ecx + 0x2f24))) == 4;
}

/* ref: FUN_00bc6aa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc6aa0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc6aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x2f24))) = (ushort)param_2;
  return (uint)param_2;
}

/* ref: FUN_00bc6ac0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc6ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc6ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = F_00ab2870(*((undefined4 *)GEN_TOP(((int)this + 0x80))));
  if ((uVar1 != 0) &&
     ((uint)*((byte *)GEN_TOP((uVar1 + 0x1a))) + (uint)*((byte *)GEN_TOP((uVar1 + 0x19))) + (uint)*((byte *)GEN_TOP((uVar1 + 0x18)))
      < 0x65)) {
    uVar2 = F_00a4b840();
    uVar2 = uVar2 % 100;
    uVar3 = 0;
    do {
      uVar2 = uVar2 - *((byte *)GEN_TOP((uVar1 + 0x18 + uVar3)));
      if ((int)uVar2 < 0) {
        return uVar3 + 4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 3);
    return 0;
  }
  return 0;
}

/* ref: FUN_00bc6b20 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bc6b20(unsigned int gen_a0)
{
  GEN_ENTER(0xbc6b20u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(uint *)&gen_args[0]);
  uVar2 = F_00af2610((*(uint *)&gen_args[0]),*(float *)&REFG(undefined, 0x134290c),(float)(float10)0,&(*(uint *)&gen_args[0]),REFG(float, 0x1105b30),0,0,0
                       ,0,0,0,0,3,0);
  if ((char)uVar2 != '\0') {
    *((uint *)GEN_TOP((uVar1 + 4))) = (*(uint *)&gen_args[0]);
  }
  return uVar2;
}

/* ref: Client::Game::Character::Companion::vf13 */
GEN_OWN GEN_NOFRAME unsigned int F_00bc6c10(void)
{
  GEN_ENTER(0xbc6c10u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00bc6c20 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bc6c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc6c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  piVar1 = ((int *)GEN_TOP(((int)this + 8)));
  uVar2 = 0;
  do {
    if ((uVar2 < 2) && (*piVar1 != 0)) {
      F_00983120(*piVar1 GEN_EDX_FWD,0);
      F_009bc530(((undefined *)GEN_TOP(*piVar1)) GEN_EDX_ARG,1);
      F_009bc4a0(((undefined *)GEN_TOP(*piVar1)) GEN_EDX_ARG);
      *piVar1 = 0;
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 1;
  } while ((int)uVar2 < 2);
  return;
}

/* ref: FUN_00bc6c70 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc6c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc6c70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  if (1 < param_1) {
    return 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + param_1 * 4 + 8)));
  if (iVar1 != 0) {
    F_00983120(iVar1 GEN_EDX_FWD,0);
    F_009bc530(*((undefined * PTR32 *)GEN_TOP(((int)this + param_1 * 4 + 8))) GEN_EDX_ARG,1);
    F_009bc4a0(*((undefined * PTR32 *)GEN_TOP(((int)this + param_1 * 4 + 8))) GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 8))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (iVar1 != 0) {
    if (*((int *)GEN_TOP((iVar1 + 0x2f20))) == 0) {
      return 0;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar1 + 0x2f20))) + 0x98))))(*((int * PTR32 *)GEN_TOP((iVar1 + 0x2f20))) GEN_EDX_ARG);
    if ((char)uVar2 == '\0') {
      return 0;
    }
  }
  uVar2 = F_00ab4370(param_2,*((undefined4 *)GEN_TOP(((int)this + 4))),*((undefined4 *)GEN_TOP(((int)this + 4))),0,0);
  *((uint *)GEN_TOP(((int)this + param_1 * 4 + 8))) = uVar2;
  if (uVar2 == 0) {
    return 0;
  }
  F_00983120(uVar2 GEN_EDX_ARG,this);
  return 1;
}

/* ref: Client::Game::Character::Companion::VfxList::vf1 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc6d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc6d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int in_ecx;
  undefined * pVVar1;
  uint uVar2;
  
  pVVar1 = this + 8;
  uVar2 = 0;
  do {
    in_ecx = *(int *)pVVar1;
    if (((in_ecx == param_1) && (uVar2 < 2)) && (in_ecx != 0)) {
      F_00983120(in_ecx GEN_EDX_FWD,0);
      F_009bc530(*(undefined * PTR32 *)pVVar1 GEN_EDX_ARG,1);
      F_009bc4a0(*(undefined * PTR32 *)pVVar1 GEN_EDX_ARG);
      *(int *)pVVar1 = 0;
    }
    uVar2 = uVar2 + 1;
    pVVar1 = pVVar1 + 4;
  } while ((int)uVar2 < 2);
  return;
}

/* ref: Client::Game::Character::Companion::vf44 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc6d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc6d60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined8 uVar2;
  
  F_00bc6c20(this + 0x2f3c GEN_EDX_FWD);
  uVar2 = (*((gen_lcode *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this);
  uVar1 = F_00a67f50((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  if (uVar1 != 0) {
    F_00a6ce30(&REFG(undefined, 0x14b2788) GEN_EDX_ARG,uVar1,0xe0000000,0);
  }
  uVar1 = F_00aa6560(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00bc6da0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc6da0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc6da0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  F_00aa0980(in_ecx GEN_EDX_FWD,(float)(float10)0,0);
  *((undefined4 *)GEN_TOP((in_ecx + 0x2f28))) = 0;
  *((undefined2 *)GEN_TOP((in_ecx + 0x2f24))) = 1;
  return 1;
}

/* ref: FUN_00bc6dd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc6dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc6dd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  int * piVar2;
  undefined4 uVar3;
  uint in_EAX = 0;
  bool bVar4;
  
  if (*((int *)GEN_TOP(((int)this + 0xec))) != 0) {
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x70))))(this GEN_EDX_FWD);
    if (((char)in_EAX != '\0') && (piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x2f20))), piVar2 != ((int *)GEN_TOP(0x0)))) {
      in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x98))))(piVar2 GEN_EDX_ARG);
      if ((char)in_EAX != '\0') {
        bVar4 = GEN_ISNAN(*((float *)GEN_TOP(((int)this + 0x2f28)))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
        if (bVar4 != (bVar4 || *((float *)GEN_TOP(((int)this + 0x2f28))) == *(float *)&REFG(undefined, 0x1088114))) {
          F_00bc6c70(((undefined *)GEN_TOP(((int)this + 0x2f3c))) GEN_EDX_ARG,0,0xa7);
        }
        in_EAX = REFG(undefined4, 0x137104c);
        fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((REFG(undefined4, 0x137104c) + 0x1198))) +
                       (float10)*((float *)GEN_TOP(((int)this + 0x2f28))))));
        *((float *)GEN_TOP(((int)this + 0x2f28))) = fVar1;
        uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1106234)));
        if (*(double *)&REFG(undefined, 0x1106258) < (double)fVar1) {
          *((ushort *)GEN_TOP(((int)this + 0x2f26))) = *((ushort *)GEN_TOP(((int)this + 0x2f26))) & 0xfff7;
          *((undefined4 *)GEN_TOP(((int)this + 0x2ec8))) = uVar3;
          *((undefined2 *)GEN_TOP(((int)this + 0x2f24))) = 3;
        }
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00bc6e90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc6e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc6e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  float10 fVar2;
  
  if (!((float10)*((float *)GEN_TOP(((int)this + 0x2f2c))) < (float10)*((float *)GEN_TOP(((int)this + 0x2f30))))) {
    uVar1 = F_00bc6ac0(this GEN_EDX_FWD);
    if (uVar1 == 0) {
      uVar1 = 3;
    }
    F_00aa4270(this GEN_EDX_ARG,uVar1,0,0);
    *((undefined4 *)GEN_TOP(((int)this + 0x2f2c))) = 0;
    uVar1 = F_00a4b780(10000);
    fVar2 = (float10)(int)uVar1;
    if ((int)uVar1 < 0) {
      fVar2 = GEN_X87(fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    *((float *)GEN_TOP(((int)this + 0x2f30))) =
         (float)(fVar2 / (float10)*(double *)&REFG(undefined, 0x10a2b98) + (float10)*(double *)&REFG(undefined, 0x10944e0));
    return uVar1;
  }
  uVar1 = REFG(undefined4, 0x137104c);
  *((float *)GEN_TOP(((int)this + 0x2f2c))) =
       ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x2f2c))) + (float10)*((float *)GEN_TOP((REFG(undefined4, 0x137104c) + 0x1198))))))
  ;
  return uVar1;
}

/* ref: FUN_00bc6f20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc6f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc6f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x110, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined * this_00;
  float10 fVar8;
  float * pfVar9;
  uint uVar10;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x2f20)));
  (*(float *)(gen_frame + 0xa4)) = *((float *)GEN_TOP(((int)this + 0xc4)));
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined2 *)(gen_frame + 0x70)) = 0;
  (*(undefined1 *)(gen_frame + 0x72)) = 0;
  (*(undefined4 *)(gen_frame + 0x80)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  (*(undefined2 *)(gen_frame + 0x90)) = 0;
  (*(undefined1 *)(gen_frame + 0x92)) = 0;
  (*(undefined4 *)(gen_frame + 0x94)) = 0;
  (*(undefined4 *)(gen_frame + 0x98)) = 0;
  pfVar9 = ((float *)GEN_TOP(F_00a5feb0(this_00 GEN_EDX_FWD)));
  fVar1 = *pfVar9;
  (*(float *)(gen_frame + 0xc0)) = fVar1;
  fVar2 = pfVar9[1];
  (*(float *)(gen_frame + 0xc4)) = fVar2;
  fVar3 = pfVar9[2];
  (*(float *)(gen_frame + 0xc8)) = fVar3;
  fVar4 = *((float *)GEN_TOP(((int)this + 0xc0)));
  fVar5 = *param_1;
  fVar8 = (float10)0;
  (*(float *)(gen_frame + 0xbc)) = fVar4;
  (*(float *)(gen_frame + 0xf0)) = (float)((float10)fVar5 + fVar8);
  fVar6 = (float)((float10)(*(float *)(gen_frame + 0xa4)) + (float10)param_1[1]);
  (*(float *)(gen_frame + 0xf4)) = fVar6;
  fVar7 = param_1[2];
  (*(float *)(gen_frame + 0xf8)) = (float)((float10)fVar7 + fVar8);
  (*(float *)(gen_frame + 0xe0)) = (float)((float10)fVar5 + fVar8);
  (*(float *)(gen_frame + 0xe4)) = fVar6;
  (*(float *)(gen_frame + 0xe8)) = (float)((float10)fVar7 + fVar8);
  fVar1 = (float)((float10)fVar1 + fVar8);
  (*(float *)(gen_frame + 0xf0)) = fVar1;
  fVar2 = (float)((float10)(*(float *)(gen_frame + 0xa4)) + (float10)fVar2);
  (*(float *)(gen_frame + 0xf4)) = fVar2;
  fVar3 = (float)(fVar8 + (float10)fVar3);
  (*(float *)(gen_frame + 0xf8)) = fVar3;
  (*(float *)(gen_frame + 0xa0)) = fVar1;
  (*(float *)(gen_frame + 0xa4)) = fVar2;
  (*(float *)(gen_frame + 0xa8)) = fVar3;
  uVar10 = F_00af2a00(&(*(float *)(gen_frame + 0xa0)),&(*(float *)(gen_frame + 0xe0)),(float)(float10)0,fVar4,((undefined1 *)(gen_frame + 0x0)),&(*(undefined1 *)(gen_frame + 0xdf)),&(*(undefined4 *)(gen_frame + 0x10)),
                        (float)(float10)0);
  if ((char)uVar10 != '\0') {
    fVar1 = *param_1;
    (*(float *)(gen_frame + 0xe0)) = (float)((float10)fVar1 - (float10)(*(float *)(gen_frame + 0xc0)));
    fVar2 = param_1[1];
    (*(float *)(gen_frame + 0xe4)) = (float)((float10)fVar2 - (float10)(*(float *)(gen_frame + 0xc4)));
    fVar3 = param_1[2];
    (*(float *)(gen_frame + 0xe8)) = (float)((float10)fVar3 - (float10)(*(float *)(gen_frame + 0xc8)));
    (*(float *)(gen_frame + 0xf0)) = (float)((float10)fVar1 - (float10)(*(float *)(gen_frame + 0xc0)));
    (*(float *)(gen_frame + 0xf4)) = (float)((float10)fVar2 - (float10)(*(float *)(gen_frame + 0xc4)));
    (*(float *)(gen_frame + 0xf8)) = (float)((float10)fVar3 - (float10)(*(float *)(gen_frame + 0xc8)));
    uVar10 = F_0046f0e0(&(*(float *)(gen_frame + 0xf0)) GEN_EDX_ARG,(*(float *)(gen_frame + 0x50)));
    (*(float *)(gen_frame + 0xe0)) = (float)((float10)(*(float *)(gen_frame + 0xf0)) + (float10)(*(float *)(gen_frame + 0xc0)));
    (*(float *)(gen_frame + 0xe4)) = (float)((float10)(*(float *)(gen_frame + 0xf4)) + (float10)(*(float *)(gen_frame + 0xc4)));
    (*(float *)(gen_frame + 0xe8)) = (float)((float10)(*(float *)(gen_frame + 0xf8)) + (float10)(*(float *)(gen_frame + 0xc8)));
    *param_1 = (float)((float10)(*(float *)(gen_frame + 0xf0)) + (float10)(*(float *)(gen_frame + 0xc0)));
    param_1[1] = (float)((float10)(*(float *)(gen_frame + 0xf4)) + (float10)(*(float *)(gen_frame + 0xc4)));
    param_1[2] = (float)((float10)(*(float *)(gen_frame + 0xf8)) + (float10)(*(float *)(gen_frame + 0xc8)));
  }
  return uVar10;
}

/* ref: FUN_00bc7150 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bc7150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc7150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0xd0, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  bool bVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar1 = *((float *)GEN_TOP(((int)this + 0xc4)));
  (*(float *)(gen_frame + 0x94)) = fVar1;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  fVar8 = GEN_X87((float10)0 * (float10)0);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  fVar2 = ((float)GEN_TOF((fVar8 + ((float10)fVar1 * (float10)fVar1 + fVar8))));
  (*(float *)(gen_frame + 0xbc)) = fVar2;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined2 *)(gen_frame + 0x60)) = 0;
  (*(undefined1 *)(gen_frame + 0x62)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined2 *)(gen_frame + 0x80)) = 0;
  (*(undefined1 *)(gen_frame + 0x82)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  fVar2 = ((float)GEN_TOF(GEN_X87(SQRT((float10)fVar2))));
  (*(float *)(gen_frame + 0xbc)) = fVar2;
  fVar9 = (float10)fVar2;
  fVar8 = (float10)0;
  bVar7 = GEN_ISNAN(fVar9) || GEN_ISNAN(fVar8);
  if (bVar7 == (bVar7 || fVar9 == fVar8)) {
    fVar2 = *((float *)GEN_TOP(((int)this + 0xc0)));
    (*(float *)(gen_frame + 0xbc)) = fVar2;
    fVar3 = (float)((float10)*param_1 + (float10)0);
    (*(float *)(gen_frame + 0xa0)) = fVar3;
    fVar4 = param_1[1];
    (*(float *)(gen_frame + 0xa4)) = (float)((float10)fVar4 + (float10)fVar1);
    fVar5 = (float)((float10)0 + (float10)param_1[2]);
    (*(float *)(gen_frame + 0xa8)) = fVar5;
    (*(float *)(gen_frame + 0x90)) = fVar3;
    (*(float *)(gen_frame + 0x94)) = (float)((float10)fVar4 + (float10)fVar1);
    (*(float *)(gen_frame + 0x98)) = fVar5;
    bVar6 = F_00af26b0(param_1,&(*(float *)(gen_frame + 0x90)),(float)fVar8,fVar2,&(*(float *)(gen_frame + 0xa0)),&(*(undefined1 *)(gen_frame + 0xbb)),&(*(undefined4 *)(gen_frame + 0x0)),
                         (float)fVar8);
    if (bVar6 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00bc72e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc72e0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xbc72e0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_FRAME_DECL(0x50, 0);
  float fVar1;
  float fVar2;
  float * pfVar3;
  uint uVar4;
  float10 fVar5;
  
  (*(float *)(gen_frame + 0x20)) = REFG(float, 0x1302c90);
  (*(float *)(gen_frame + 0x24)) = gen_bits2f(REFG(float, 0x1302c94));
  (*(float *)(gen_frame + 0x28)) = gen_bits2f(REFG(float, 0x1302c98));
  fVar1 = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)param_1 + 0x2f20))) + 0xb0)));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  fVar1 = (float)((float10)fVar1 + (float10)param_3);
  (*(float *)(gen_frame + 0x3c)) = fVar1;
  fVar1 = (float)((float10)fVar1 * (float10)REFG(double, 0x1088108));
  (*(float *)(gen_frame + 0x3c)) = fVar1;
  fVar5 = ((float10)GEN_TOD(fsin((float10)fVar1)));
  (*(float *)(gen_frame + 0x38)) = (float)fVar5;
  (*(float *)(gen_frame + 0x4)) = (float)fVar5;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  fVar5 = ((float10)GEN_TOD(fcos((float10)fVar1)));
  (*(float *)(gen_frame + 0x38)) = (float)fVar5;
  (*(float *)(gen_frame + 0xc)) = (float)fVar5;
  pfVar3 = ((float *)GEN_TOP(F_004f41e0(&(*(float *)(gen_frame + 0x20)) GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)))));
  (*(float *)(gen_frame + 0x20)) = *pfVar3;
  (*(float *)(gen_frame + 0x24)) = pfVar3[1];
  (*(float *)(gen_frame + 0x28)) = pfVar3[2];
  F_0046f0e0(&(*(float *)(gen_frame + 0x20)) GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP(((int)param_1 + 0x2f34)))));
  pfVar3 = ((float *)GEN_TOP(F_00a5feb0(*((undefined * PTR32 *)GEN_TOP(((int)param_1 + 0x2f20))) GEN_EDX_ARG)));
  (*(float *)(gen_frame + 0x10)) = (float)((float10)*pfVar3 + (float10)(*(float *)(gen_frame + 0x20)));
  fVar1 = pfVar3[1];
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x24)));
  fVar2 = pfVar3[2];
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x28)));
  *param_2 = (float)((float10)*pfVar3 + (float10)(*(float *)(gen_frame + 0x20)));
  param_2[1] = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x24)));
  param_2[2] = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x28)));
  F_00bc6f20(param_1 GEN_EDX_ARG,param_2);
  uVar4 = F_00af2610(param_2,*(float *)&REFG(undefined, 0x134290c),(float)(float10)0,&(*(float *)(gen_frame + 0x38)),REFG(float, 0x1105b30),0,0,
                       0,0,0,0,0,3,0);
  if ((char)uVar4 != '\0') {
    param_2[1] = (*(float *)(gen_frame + 0x38));
  }
  return uVar4;
}

/* ref: FUN_00bc7440 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bc7440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc7440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x50, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float * pfVar7;
  uint uVar8;
  float10 fVar9;
  float10 fVar10;
  float fVar11;
  
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = this;
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x2f20))) != ((undefined *)GEN_TOP(0x0))) {
    pfVar7 = ((float *)GEN_TOP(F_00a5feb0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x2f20))) GEN_EDX_FWD)));
    fVar1 = *param_1;
    fVar2 = *pfVar7;
    (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar1 - (float10)fVar2);
    fVar11 = param_1[1];
    fVar3 = pfVar7[1];
    (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar11 - (float10)fVar3);
    fVar4 = param_1[2];
    fVar5 = pfVar7[2];
    (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar4 - (float10)fVar5);
    (*(float *)(gen_frame + 0x20)) = (float)((float10)fVar1 - (float10)fVar2);
    (*(float *)(gen_frame + 0x24)) = (float)((float10)fVar11 - (float10)fVar3);
    (*(float *)(gen_frame + 0x28)) = (float)((float10)fVar4 - (float10)fVar5);
    if ((REFG(int, 0x1375bbc) != -1) && (iVar6 = (&REFG(undefined4, 0x1375b90))[(int)(REFG(int, 0x1375bbc))], this = (*(undefined * PTR32 *)(gen_frame + 0x3c)), iVar6 != 0)
       ) {
      pfVar7 = ((float *)GEN_TOP(F_00a5feb0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x2f20))) GEN_EDX_ARG)));
      fVar1 = ((float)GEN_TOF(((float10)*pfVar7 - (float10)*((float *)GEN_TOP((iVar6 + 0x40))))));
      (*(float *)(gen_frame + 0x10)) = fVar1;
      ((float *)(gen_frame + 0x0))[1] = 0.0;
      fVar2 = ((float)GEN_TOF(((float10)pfVar7[2] - (float10)*((float *)GEN_TOP((iVar6 + 0x48))))));
      (*(float *)(gen_frame + 0x18)) = fVar2;
      ((float *)(gen_frame + 0x0))[0] = fVar1;
      ((float *)(gen_frame + 0x0))[2] = fVar2;
      fVar11 = F_00aae7a0(&(*(float *)(gen_frame + 0x20)),((float *)(gen_frame + 0x0)));
      ((float *)(gen_frame + 0x30))[2] = fVar11;
      pfVar7 = ((float *)(gen_frame + 0x30)) + 2;
      fVar1 = (float)((float10)*(double *)&REFG(undefined, 0x1080228) - (float10)*(float *)&REFG(undefined, 0x13429ac));
      ((float *)(gen_frame + 0x30))[1] = fVar1;
      fVar2 = (float)((float10)*(float *)&REFG(undefined, 0x13429ac) - (float10)*(double *)&REFG(undefined, 0x1080228));
      ((float *)(gen_frame + 0x30))[0] = fVar2;
      fVar9 = (float10)fVar11;
      if (!(fVar9 < (float10)fVar1)) {
        pfVar7 = ((float *)(gen_frame + 0x30)) + 1;
      }
      if (!((float10)fVar2 < (float10)*pfVar7)) {
        pfVar7 = ((float *)(gen_frame + 0x30));
      }
      fVar1 = *pfVar7;
      ((float *)(gen_frame + 0x30))[0] = fVar1;
      fVar10 = (float10)fVar1;
      this = (*(undefined * PTR32 *)(gen_frame + 0x3c));
      if ((GEN_ISNAN(fVar9) || GEN_ISNAN(fVar10)) == ((GEN_ISNAN(fVar9) || GEN_ISNAN(fVar10)) || fVar9 == fVar10)) {
        (*(float *)(gen_frame + 0x10)) = 0.0;
        ((float *)(gen_frame + 0x30))[0] = (float)(fVar10 - fVar9);
        fVar1 = ((float)GEN_TOF(((float10)(float)(fVar10 - fVar9) * (float10)REFG(double, 0x1088108))));
        ((float *)(gen_frame + 0x30))[0] = fVar1;
        fVar9 = ((float10)GEN_TOD(fsin((float10)fVar1)));
        ((float *)(gen_frame + 0x30))[1] = (float)fVar9;
        (*(float *)(gen_frame + 0x14)) = (float)fVar9;
        (*(float *)(gen_frame + 0x18)) = 0.0;
        fVar9 = ((float10)GEN_TOD(fcos((float10)fVar1)));
        ((float *)(gen_frame + 0x30))[0] = (float)fVar9;
        (*(float *)(gen_frame + 0x1c)) = (float)fVar9;
        pfVar7 = ((float *)GEN_TOP(F_004f41e0(&(*(float *)(gen_frame + 0x20)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x10)))));
        (*(float *)(gen_frame + 0x20)) = *pfVar7;
        (*(float *)(gen_frame + 0x24)) = pfVar7[1];
        (*(float *)(gen_frame + 0x28)) = pfVar7[2];
        this = (*(undefined * PTR32 *)(gen_frame + 0x3c));
      }
    }
    fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x2f34))) * (float10)*(double *)&REFG(undefined, 0x10b3238))));
    ((float *)(gen_frame + 0x30))[0] = fVar1;
    F_0046f0e0(&(*(float *)(gen_frame + 0x20)) GEN_EDX_ARG,fVar1);
    pfVar7 = ((float *)GEN_TOP(F_00a5feb0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x2f20))) GEN_EDX_ARG)));
    fVar1 = *pfVar7;
    (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x20)));
    fVar2 = pfVar7[1];
    (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x24)));
    fVar11 = pfVar7[2];
    (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar11 + (float10)(*(float *)(gen_frame + 0x28)));
    *param_1 = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x20)));
    param_1[1] = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x24)));
    param_1[2] = (float)((float10)fVar11 + (float10)(*(float *)(gen_frame + 0x28)));
    uVar8 = F_00af2610(param_1,*(float *)&REFG(undefined, 0x134290c),(float)(float10)0,((float *)(gen_frame + 0x30)),REFG(float, 0x1105b30),0,0
                         ,0,0,0,0,0,3,0);
    if ((char)uVar8 != '\0') {
      param_1[1] = ((float *)(gen_frame + 0x30))[0];
    }
  }
  return;
}

/* ref: FUN_00bc7680 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc7680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc7680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x50, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined * this_00;
  byte bVar6;
  float * pfVar7;
  int iVar8;
  uint uVar9;
  float * pfVar10;
  float fVar11;
  undefined4 * puVar12;
  
  (*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40);
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x2f20)));
  ((float *)(gen_frame + 0x24))[2] = 0.0;
  ((float *)(gen_frame + 0x24))[0] = (float)((float10)*(double *)&REFG(undefined, 0x1080228) - (float10)*(float *)&REFG(undefined, 0x13429ac));
  ((float *)(gen_frame + 0x24))[1] = (float)((float10)*(double *)&REFG(undefined, 0x1080228) + (float10)*(float *)&REFG(undefined, 0x13429ac));
  pfVar7 = ((float *)GEN_TOP(F_00a5feb0(this_00 GEN_EDX_FWD)));
  (*(int *)(gen_frame + 0x18)) = 0;
  do {
    F_00bc72e0(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),((float *)(gen_frame + 0x24))[(int)((*(int *)(gen_frame + 0x18)))]);
    fVar11 = pfVar7[1];
    (*(float *)(gen_frame + 0x1c)) = (float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)fVar11);
    fVar11 = ((float)GEN_TOF(ABS((float10)(float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)fVar11))));
    (*(float *)(gen_frame + 0x1c)) = fVar11;
    if ((float10)fVar11 < (float10)1) {
      bVar6 = F_00bc7150(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)));
      if (bVar6 == 0) {
        F_00a9f010(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)));
        pfVar10 = ((float *)GEN_TOP(F_00a5feb0(this GEN_EDX_ARG)));
        fVar11 = *pfVar7;
        fVar1 = *pfVar10;
        puVar12 = &REFG(float, 0x1302c90);
        (*(float *)(gen_frame + 0x20)) = (float)((float10)fVar11 - (float10)fVar1);
        fVar2 = pfVar7[1];
        fVar3 = pfVar10[1];
        ((float *)(gen_frame + 0x24))[0] = (float)((float10)fVar2 - (float10)fVar3);
        fVar4 = pfVar7[2];
        fVar5 = pfVar10[2];
        ((float *)(gen_frame + 0x24))[1] = (float)((float10)fVar4 - (float10)fVar5);
        (*(float *)(gen_frame + 0x0)) = (float)((float10)fVar11 - (float10)fVar1);
        (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar2 - (float10)fVar3);
        (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar4 - (float10)fVar5);
        uVar9 = F_0046f390(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG);
        fVar11 = F_00aae7a0(uVar9,puVar12);
        goto LAB_00bc77b1;
      }
    }
    iVar8 = (*(int *)(gen_frame + 0x18)) + 1;
    (*(int *)(gen_frame + 0x18)) = iVar8;
  } while (iVar8 < 3);
  (*(float *)(gen_frame + 0x20)) = *pfVar7;
  ((float *)(gen_frame + 0x24))[0] = pfVar7[1];
  ((float *)(gen_frame + 0x24))[1] = pfVar7[2];
  uVar9 = F_00af2610(&(*(float *)(gen_frame + 0x20)),*(float *)&REFG(undefined, 0x134290c),(float)(float10)0,&(*(float *)(gen_frame + 0x1c)),REFG(float, 0x1105b30),0,
                       0,0,0,0,0,0,3,0);
  if ((char)uVar9 != '\0') {
    ((float *)(gen_frame + 0x24))[0] = (*(float *)(gen_frame + 0x1c));
  }
  F_00a9f010(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x20)));
  fVar11 = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x2f20))) + 0xb0)));
LAB_00bc77b1: ;
  uVar9 = F_00a9f040(this GEN_EDX_ARG,fVar11);
  return uVar9;
}

/* ref: FUN_00bc7830 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc7830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc7830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x84, 12);
  float fVar1;
  int in_ecx;
  undefined4 uVar2;
  uint uVar3;
  float * pfVar4;
  float10 fVar5;
  float fVar6;
  undefined4 * puVar7;
  
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1105b30)));
  in_ecx = *((int *)GEN_TOP(((int)this + 0x2f20)));
  uVar3 = 0;
  if (in_ecx != 0) {
    *((ushort *)GEN_TOP(((int)this + 0x2f26))) = *((ushort *)GEN_TOP(((int)this + 0x2f26))) | 1;
    *((undefined4 *)GEN_TOP(((int)this + 0x2f38))) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
    (*(float *)(gen_frame + 0x4)) = gen_bits2f(uVar2);
    (*(undefined4 *)(gen_frame + 0x8)) = uVar2;
    (*(float *)(gen_frame + 0xc)) = gen_bits2f(uVar2);
    (*(undefined4 *)(gen_frame + 0x10)) = uVar2;
    (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined1 *)(gen_frame + 0x2c)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    fVar5 = F_00a9fad0(in_ecx GEN_EDX_FWD);
    fVar6 = (float)fVar5;
    (*(float *)(gen_frame + 0x70)) = fVar6;
    if (param_1 == 0) {
      if (fVar6 < REFG(float, 0x1105b3c)) {
        fVar6 = REFG(float, 0x1105b3c);
      }
    }
    else if (param_1 == 1) {
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x24)) + 3)) = 1;
      (*(undefined4 *)(gen_frame + 0x24)) = CONCAT13(1,(undefined3)(*(undefined4 *)(gen_frame + 0x24)));
      pfVar4 = &(*(float *)(gen_frame + 0x70));
      if (!(fVar6 < REFG(float, 0x1105b3c))) {
        pfVar4 = &REFG(float, 0x1105b3c);
      }
      if (!(REFG(float, 0x1106234) < *pfVar4)) {
        pfVar4 = (float *)&REFG(undefined4, 0x1105b40);
      }
      fVar6 = *pfVar4;
    }
    (*(float *)(gen_frame + 0x4)) = fVar6;
    (*(float *)(gen_frame + 0xc)) = fVar6;
    uVar3 = F_00aa0210(this GEN_EDX_ARG,0,0);
    if (uVar3 - 4 < 3) {
      F_00aa2c50(this GEN_EDX_ARG,0,0,0);
    }
    pfVar4 = ((float *)GEN_TOP(F_00a5feb0(this GEN_EDX_ARG)));
    (*(float *)(gen_frame + 0x54)) = *pfVar4;
    (*(float *)(gen_frame + 0x58)) = pfVar4[1];
    (*(float *)(gen_frame + 0x5c)) = pfVar4[2];
    F_00bc7440(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x54)));
    pfVar4 = ((float *)GEN_TOP(F_00a5feb0(this GEN_EDX_ARG)));
    puVar7 = &REFG(float, 0x1302c90);
    (*(float *)(gen_frame + 0x44)) = (float)((float10)(*(float *)(gen_frame + 0x54)) - (float10)*pfVar4);
    fVar6 = pfVar4[1];
    (*(float *)(gen_frame + 0x48)) = (float)((float10)(*(float *)(gen_frame + 0x58)) - (float10)fVar6);
    fVar1 = pfVar4[2];
    (*(float *)(gen_frame + 0x4c)) = (float)((float10)(*(float *)(gen_frame + 0x5c)) - (float10)fVar1);
    (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x54)) - (float10)*pfVar4);
    (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x58)) - (float10)fVar6);
    (*(float *)(gen_frame + 0x3c)) = (float)((float10)(*(float *)(gen_frame + 0x5c)) - (float10)fVar1);
    uVar3 = F_0046f390(&(*(float *)(gen_frame + 0x34)) GEN_EDX_ARG);
    fVar6 = F_00aae7a0(uVar3,puVar7);
    (*(float *)(gen_frame + 0x70)) = fVar6;
    uVar3 = F_00a9f7c0(this GEN_EDX_ARG,(*(float *)(gen_frame + 0x54)),(*(float *)(gen_frame + 0x58)),(*(float *)(gen_frame + 0x5c)),fVar6,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  }
  return uVar3;
}

/* ref: FUN_00bc79e0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc79e0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbc79e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  float fVar1;
  code * pcVar2;
  byte bVar3;
  uint * puVar4;
  uint uVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  pcVar2 = *((gen_code32 *)GEN_TOP((*param_1 + 0x80)));
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x8a))) = 9;
  param_1[0x20] = param_3;
  param_1[0x61] = param_3;
  (*pcVar2)(param_1);
  puVar4 = ((uint *)GEN_TOP(F_00ab2870(param_3)));
  if (puVar4 != ((uint *)GEN_TOP(0x0))) {
    bVar3 = F_00aa34a0(param_1 GEN_EDX_ARG,(uint)(ushort)puVar4[5],0,0,(float)(float10)1);
    if (bVar3 != 0) {
      param_1[0xbc8] = param_2;
      param_1[0xbb6] = *((int *)GEN_TOP((param_2 + 0x74)));
      fVar1 = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((param_2 + 0xc0))) + ((float10)GEN_TOD(gen_bits2f(param_1[0x30])))) +
                     (float10)REFG(double, 0x1088130))));
      param_1[0xbcd] = (int)gen_fl2bits(fVar1);
      if ((float10)fVar1 < (float10)REFG(float, 0x1106224)) {
        param_1[0xbcd] = (int)gen_fl2bits(REFG(float, 0x1106224));
      }
      bVar3 = F_005e1600();
      if ((bVar3 == 0) || (bVar3 = F_005d99e0(), bVar3 == 0)) {
        *((ushort *)GEN_TOP(((int)param_1 + 0x2f26))) = *((ushort *)GEN_TOP(((int)param_1 + 0x2f26))) | 0x10;
        uVar5 = F_00a5feb0(((undefined *)GEN_TOP(param_1[0xbc8])) GEN_EDX_ARG);
        F_00a9f010(param_1 GEN_EDX_ARG,uVar5);
        F_00a9f040(param_1 GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP((param_1[0xbc8] + 0xb0)))));
      }
      else {
        F_00bc7680(param_1 GEN_EDX_ARG);
      }
      if (*((char *)GEN_TOP(((int)puVar4 + 0x1b))) == '\x01') {
        *((ushort *)GEN_TOP(((int)param_1 + 0x2f26))) = *((ushort *)GEN_TOP(((int)param_1 + 0x2f26))) | 2;
      }
      F_00a5f8c0(param_1 GEN_EDX_ARG,(*puVar4 & 0xffffff) + (int)puVar4);
      if ((short)param_1[0xbc9] == 0) {
        *(undefined2 *)(param_1 + 0xbc9) = 3;
      }
      return 1;
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00bc7b20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc7b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc7b20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  float fVar2;
  uint in_EAX = 0;
  float * pfVar3;
  float * pfVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x2f20))) != ((undefined *)GEN_TOP(0x0))) {
    pfVar3 = ((float *)GEN_TOP(F_00a5feb0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x2f20))) GEN_EDX_FWD)));
    pfVar4 = ((float *)GEN_TOP(F_00a5feb0(this GEN_EDX_ARG)));
    fVar6 = GEN_X87((float10)(float)((float10)pfVar4[2] - (float10)pfVar3[2]) *
            (float10)(float)((float10)pfVar4[2] - (float10)pfVar3[2]));
    fVar7 = GEN_X87((float10)(float)((float10)*pfVar4 - (float10)*pfVar3) *
            (float10)(float)((float10)*pfVar4 - (float10)*pfVar3));
    fVar1 = ((float)GEN_TOF(GEN_X87(SQRT((float10)(float)(fVar7 + fVar6)))));
    fVar2 = ((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF((((float10)(float)((float10)pfVar4[1] - (float10)pfVar3[1])
                                          * (float10)(float)((float10)pfVar4[1] - (float10)pfVar3[1]
                                                            ) + (float10)(double)fVar7) +
                                        (float10)(double)fVar6)))))));
    if ((float10)*((float *)GEN_TOP(((int)this + 0x2f34))) < (float10)fVar2) {
      uVar5 = F_00a9fbf0(this GEN_EDX_ARG);
      in_EAX = REFG(undefined4, 0x137104c);
      if ((char)uVar5 == '\0') {
        in_EAX = uVar5;
        if (*(double *)&REFG(undefined, 0x10944e0) < (double)fVar2) {
          uVar5 = F_00bc7830(this GEN_EDX_ARG,0);
          return uVar5;
        }
      }
      else {
        fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((REFG(undefined4, 0x137104c) + 0x1198))) +
                       (float10)*((float *)GEN_TOP(((int)this + 0x2f38))))));
        *((float *)GEN_TOP(((int)this + 0x2f38))) = fVar2;
        if ((float10)0 < (float10)fVar2) {
          uVar5 = F_00a9fc30(this GEN_EDX_ARG);
          if ((char)uVar5 == '\0') {
            if ((double)fVar1 <= *(double *)&REFG(undefined, 0x1106260)) goto LAB_00bc7c5c;
          }
          else if (!(*(double *)&REFG(undefined, 0x1106268) < (double)fVar1)) {
LAB_00bc7c5c: ;
            uVar5 = F_00bc7830(this GEN_EDX_ARG,1);
            return uVar5;
          }
          uVar5 = F_00bc7830(this GEN_EDX_ARG,0);
          return uVar5;
        }
      }
    }
    else {
      in_EAX = F_00a9fbf0(this GEN_EDX_ARG);
      if ((char)in_EAX == '\0') {
        *((ushort *)GEN_TOP(((int)this + 0x2f26))) = *((ushort *)GEN_TOP(((int)this + 0x2f26))) & 0xfffe;
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00bc7c90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc7c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc7c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  ushort uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    *((undefined2 *)GEN_TOP(((int)this + 0x2f24))) = 4;
    return 4;
  }
  uVar1 = *((ushort *)GEN_TOP(((int)this + 0x88)));
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x2f20)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xb0))))(this GEN_EDX_FWD);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xac))))(this GEN_EDX_ARG,(uint)uVar1);
  F_00bc79e0(this GEN_EDX_ARG,uVar2,param_1);
  uVar2 = F_00aa0980(this GEN_EDX_ARG,(float)(float10)0,0);
  *((undefined4 *)GEN_TOP(((int)this + 0x2f28))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x2f24))) = 1;
  return uVar2;
}

/* ref: FUN_00bc7d10 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bc7d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc7d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0xec))) != 0) {
    if (*((int *)GEN_TOP(((int)this + 0x2f20))) == 0) {
      cVar1 = '\0';
    }
    else {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x2f20))) + 0x98))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x2f20))) GEN_EDX_FWD);
      cVar1 = (char)uVar2;
    }
    *((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xec))) + 100))) =
         cVar1 != '\0' | *((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xec))) + 100))) & 0xfe;
  }
  return;
}

/* ref: FUN_00bc7d60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc7d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc7d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x2f28))) = 0;
  if (*((short *)GEN_TOP(((int)this + 0x2f24))) == 2) {
    uVar2 = F_00bc7c90(this GEN_EDX_FWD,param_1);
    return uVar2;
  }
  if (*((int *)GEN_TOP(((int)this + 0x2f48))) != 0) {
    F_00983120(*((int *)GEN_TOP(((int)this + 0x2f48))) GEN_EDX_ARG,0);
    F_009bc530(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x2f48))) GEN_EDX_ARG,1);
    F_009bc4a0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x2f48))) GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x2f48))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x2f40)));
  if (iVar1 != 0) {
    if (*((int *)GEN_TOP((iVar1 + 0x2f20))) == 0) goto LAB_00bc7e09;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar1 + 0x2f20))) + 0x98))))(*((int * PTR32 *)GEN_TOP((iVar1 + 0x2f20))) GEN_EDX_ARG);
    if ((char)uVar2 == '\0') goto LAB_00bc7e09;
  }
  uVar2 = F_00ab4370(0xa8,*((undefined4 *)GEN_TOP(((int)this + 0x2f40))),*((undefined4 *)GEN_TOP(((int)this + 0x2f40))),
                       0,0);
  *((uint *)GEN_TOP(((int)this + 0x2f48))) = uVar2;
  if (uVar2 != 0) {
    F_00983120(uVar2 GEN_EDX_ARG,(int)this + 0x2f3c);
  }
LAB_00bc7e09: ;
  *((undefined2 *)GEN_TOP(((int)this + 0x2f24))) = 2;
  return 2;
}

/* ref: FUN_00bc7e20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc7e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc7e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((ushort *)GEN_TOP(((int)this + 0x2f26))) = *((ushort *)GEN_TOP(((int)this + 0x2f26))) | 8;
  uVar1 = F_00bc7d60(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0x80))));
  return uVar1;
}

/* ref: FUN_00bc7e40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc7e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc7e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  
  uVar2 = REFG(undefined4, 0x137104c);
  fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((REFG(undefined4, 0x137104c) + 0x1198))) +
                 (float10)*((float *)GEN_TOP(((int)this + 0x2f28))))));
  *((float *)GEN_TOP(((int)this + 0x2f28))) = fVar1;
  if (*(double *)&REFG(undefined, 0x10a1918) < (double)fVar1) {
    fVar1 = *((float *)GEN_TOP(((int)this + 0x2ec8)));
    bVar3 = GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
    bVar4 = bVar3 || fVar1 == *(float *)&REFG(undefined, 0x1088114);
    uVar2 = CONCAT22((short)(uVar2 >> 0x10),
                     CONCAT11(bVar4 << 6 | bVar3 << 2 | 2U | !(*(float *)&REFG(undefined, 0x1088114) <= fVar1),
                              (char)uVar2));
    if (bVar3 != bVar4) {
      *((undefined4 *)GEN_TOP(((int)this + 0x2ec8))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x2ec8))), REFG(float, 0x109cb08));
    }
  }
  if (*((int *)GEN_TOP(((int)this + 0x2f48))) == 0) {
    uVar2 = F_00bc7c90(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0x80))));
  }
  return uVar2;
}

/* ref: FUN_00bc7eb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc7eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc7eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  
  bVar1 = *((byte *)GEN_TOP(((int)this + 0x2f26))) >> 1;
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),bVar1);
  if ((bVar1 & 1) != 0) {
    uVar2 = F_00bc7b20(this GEN_EDX_FWD);
  }
  if ((*((byte *)GEN_TOP(((int)this + 0x2f26))) & 1) == 0) {
    uVar2 = F_00bc6e90(this GEN_EDX_ARG);
    return uVar2;
  }
  return uVar2;
}

/* ref: Client::Game::Character::Companion::vf33 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc7ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc7ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  byte bVar6;
  uint uVar7;
  float * pfVar8;
  float * pfVar9;
  
  F_00aa3240(this GEN_EDX_FWD);
  F_00aab1e0((undefined *)this GEN_EDX_ARG);
  if (((((byte)*(ushort *)(this + 0x2f26) >> 2 & 1) == 0) && (*(int *)(this + 0xec) != 0)) &&
     (*((char *)GEN_TOP((*(int *)(this + 0xec) + 0x65))) == '\x03')) {
    *(ushort *)(this + 0x2f26) = *(ushort *)(this + 0x2f26) | 4;
    F_00bc7d10(this GEN_EDX_ARG);
  }
  if (((byte)this[0x2f26] >> 4 & 1) != 0) {
    bVar6 = F_005e1600();
    if (bVar6 != 0) {
      bVar6 = F_005d99e0();
      if (bVar6 != 0) {
        F_00bc7680(this GEN_EDX_ARG);
        *(ushort *)(this + 0x2f26) = *(ushort *)(this + 0x2f26) & 0xffef;
      }
    }
  }
  uVar7 = (uint)*(ushort *)(this + 0x2f24);
  if (uVar7 == 1) {
    uVar7 = F_00bc6dd0(this GEN_EDX_ARG);
  }
  else {
    if (uVar7 == 2) {
      uVar7 = F_00bc7e40(this GEN_EDX_ARG);
      return uVar7;
    }
    uVar7 = uVar7 - 3;
    if ((uVar7 == 0) && (*(undefined * PTR32 *)(this + 0x2f20) != ((undefined *)GEN_TOP(0x0)))) {
      pfVar8 = ((float *)GEN_TOP(F_00a5feb0(*(undefined * PTR32 *)(this + 0x2f20) GEN_EDX_ARG)));
      pfVar9 = ((float *)GEN_TOP(F_00a5feb0(this GEN_EDX_ARG)));
      fVar1 = *pfVar9;
      fVar2 = *pfVar8;
      fVar3 = pfVar9[2];
      fVar4 = pfVar8[2];
      bVar6 = F_00a9f620(*(undefined4 *)(this + 0x2f20) GEN_EDX_ARG);
      dVar5 = (double)((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF(((float10)(float)((float10)fVar1 - (float10)fVar2)
                                                   * (float10)(float)((float10)fVar1 -
                                                                     (float10)fVar2) +
                                                  (float10)(float)((float10)fVar3 - (float10)fVar4)
                                                  * (float10)(float)((float10)fVar3 - (float10)fVar4
                                                                    ))))))));
      if ((bVar6 != 0) && (*(double *)&REFG(undefined, 0x1088118) < dVar5)) {
        *(undefined2 *)(this + 0x2f24) = 5;
        uVar7 = F_00a51200(6,0,0,0,0);
        return uVar7;
      }
      if (*(double *)&REFG(undefined, 0x1088120) < dVar5) {
        *(ushort *)(this + 0x2f26) = *(ushort *)(this + 0x2f26) | 8;
        uVar7 = F_00bc7d60(this GEN_EDX_ARG,*(undefined4 *)(this + 0x80));
        return uVar7;
      }
      uVar7 = F_00bc7eb0(this GEN_EDX_ARG);
      return uVar7;
    }
  }
  return uVar7;
}

/* ref: FUN_00bc8080 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00bc8080(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc8080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x2f26))) = *((ushort *)GEN_TOP((in_ecx + 0x2f26))) | (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00bc80a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc80a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc80a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x2f26))) = *((ushort *)GEN_TOP((in_ecx + 0x2f26))) & (ushort)~param_2;
  return ~param_2;
}

/* ref: FUN_00bc80c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc80c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc80c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return (*((ushort *)GEN_TOP((in_ecx + 0x2f26))) & (ushort)param_2) != 0;
}

/* ref: FUN_00bc80e0 */
GEN_OWN GEN_FRAME float10 F_00bc80e0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbc80e0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bc8100 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc8100(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xbc8100u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  if (*((int *)GEN_TOP((in_ecx + 4))) != param_2) {
    *((int *)GEN_TOP((in_ecx + 4))) = param_2;
    *((undefined4 *)GEN_TOP((in_ecx + 0x10))) = 0;
  }
  return 1;
}

/* ref: FUN_00bc8120 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc8120(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc8120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00bc8130 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc8130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc8130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 3;
  uVar1 = F_0042e430(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,&REFG(undefined, 0x11062f4));
  *((undefined1 *)GEN_TOP(((int)this + 0x68))) = 0;
  return uVar1;
}

/* ref: FUN_00bc8170 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc8170(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbc8170u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (param_2 != 0) {
    if (*((uint *)GEN_TOP((in_ecx + 4))) != param_2) {
      *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
      *((undefined4 *)GEN_TOP((in_ecx + 0x10))) = 0;
    }
    *((undefined4 *)GEN_TOP((in_ecx + 0xc))) = 1;
    *((undefined4 *)GEN_TOP((in_ecx + 8))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((in_ecx + 8))), REFG(float, 0x11062f0));
  }
  return param_2;
}

/* ref: FUN_00bc81b0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bc81b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc81b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if (*((int *)GEN_TOP((in_ecx + 0xc))) == 1) {
    *((undefined4 *)GEN_TOP((in_ecx + 0xc))) = 0;
  }
  return;
}

/* ref: FUN_00bc81f0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bc81f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbc81f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar3 = 0x1c;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG);
  uVar2 = F_00763050(uVar2 GEN_EDX_ARG,uVar3);
  uVar2 = F_008bd150(uVar2 GEN_EDX_ARG,param_1,param_2,(undefined1)param_3);
  return uVar2;
}

/* ref: FUN_00bc8220 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bc8220(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbc8220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar3 = 0x1c;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG);
  this = ((undefined *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar3)));
  uVar2 = F_008b8670(this GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00bc8250 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bc8250(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbc8250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar3 = 0x1c;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG);
  this = ((undefined *)GEN_TOP(F_00763050(uVar2 GEN_EDX_ARG,uVar3)));
  uVar2 = F_0089d500(this GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00bc8280 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc8280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc8280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 3;
  uVar1 = F_0042e430(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,&REFG(undefined, 0x11062f4));
  *((undefined1 *)GEN_TOP(((int)this + 0x68))) = 0;
  return uVar1;
}

/* ref: FUN_00bc82c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc82c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc82c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined1 uVar1;
  int iVar2;
  byte bVar3;
  uint * puVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  undefined * this_00;
  int iVar8;
  undefined4 uVar9;
  
  if (*((int *)GEN_TOP(((int)this + 0x10))) == 3) {
    return 3;
  }
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    F_00ab1160((int)this + 8,1);
  }
  if (((*((int *)GEN_TOP(((int)this + 0xc))) == 0) && (*((float *)GEN_TOP(((int)this + 8))) <= 0.0)) &&
     (*((int *)GEN_TOP(((int)this + 0x10))) != 3)) {
    F_00bc8130(this GEN_EDX_ARG);
    F_00bc8220(param_1);
  }
  iVar8 = *((int *)GEN_TOP(((int)this + 4)));
  if (iVar8 == 1) {
    iVar8 = *(int *)this;
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0x10)));
  if (iVar2 == 0) {
    puVar4 = ((uint *)GEN_TOP(F_00ab29c0(iVar8)));
    if (puVar4 == ((uint *)GEN_TOP(0x0))) goto LAB_00bc83d4;
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 2;
    F_0042e430(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,(*puVar4 & 0xffffff) + (int)puVar4);
    *((char *)GEN_TOP(((int)this + 0x68))) = (char)puVar4[1];
  }
  else {
    if (iVar2 == 1) {
      bVar3 = F_00538870(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG,param_1,0);
      if (bVar3 == 0) {
        F_00bc8220(param_1);
        *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 2;
      }
      goto LAB_00bc83d4;
    }
    if (iVar2 != 2) goto LAB_00bc83d4;
  }
  bVar3 = F_00538870(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG,param_1,0);
  if (bVar3 != 0) {
    uVar1 = *((undefined1 *)GEN_TOP(((int)this + 0x68)));
    uVar7 = F_0042a990((int)this + 0x14 GEN_EDX_ARG);
    piVar6 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar9 = 0x1c;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x48))))(piVar6 GEN_EDX_ARG);
    uVar5 = F_00763050(uVar5 GEN_EDX_ARG,uVar9);
    F_008bd150(uVar5 GEN_EDX_ARG,param_1,uVar7,uVar1);
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 1;
  }
LAB_00bc83d4: ;
  piVar6 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
  uVar9 = 0x1c;
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x48))))(piVar6 GEN_EDX_ARG);
  this_00 = ((undefined *)GEN_TOP(F_00763050(uVar7 GEN_EDX_ARG,uVar9)));
  uVar7 = F_0089d500(this_00 GEN_EDX_ARG,param_1);
  return uVar7;
}

/* ref: FUN_00bc8400 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00bc8400(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbc8400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int * piVar1;
  uint in_ecx;
  undefined * this;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
    uVar2 = 0x1c;
    in_ecx = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x48))))(piVar1 GEN_EDX_ARG);
    this = ((undefined *)GEN_TOP(F_00763050(in_ecx GEN_EDX_ARG,uVar2)));
    F_008b8670(this GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00bc8440 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc8440(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbc8440u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  float * pfVar1;
  
  pfVar1 = ((float *)GEN_TOP(0x0));
  if ((*(int *)&gen_args[1]) != 0) {
    if (*((int *)GEN_TOP((param_1 + 4))) != (*(int *)&gen_args[1])) {
      *((int *)GEN_TOP((param_1 + 4))) = (*(int *)&gen_args[1]);
      *((undefined4 *)GEN_TOP((param_1 + 0x10))) = 0;
    }
    *((undefined4 *)GEN_TOP((param_1 + 0xc))) = 0;
    pfVar1 = &(*(float *)&gen_args[0]);
    if (!(REFG(float, 0x11062f0) < (*(float *)&gen_args[0]))) {
      pfVar1 = &REFG(float, 0x11062f0);
    }
    *((float *)GEN_TOP((param_1 + 8))) = *pfVar1;
  }
  return (uint)pfVar1;
}

/* ref: Client::SupportDesk::XmlParser::XmlParser */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc8480(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc8480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1106320));
  in_ecx[1] = &REFG(undefined, 0x11062fc);
  in_ecx[2] = &REFG(undefined, 0x1106301);
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[0x85] = 0;
  in_ecx[0x86] = 0;
  *(undefined1 *)(in_ecx + 0x88) = 0;
  return (uint)in_ecx;
}

/* ref: Client::SupportDesk::XmlParser::FindNodeRecursive */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc84c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc84c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  uint uVar4;
  byte * pbVar5;
  bool bVar6;
  
  pbVar2 = ((byte *)GEN_TOP(*param_2));
  pbVar5 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_00bc84f2: ;
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_00bc84f7;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_00bc84f2;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00bc84f7: ;
  if (iVar3 == 0) {
    return (uint)param_2;
  }
  if ((param_2[2] != 0) &&
     (uVar4 = F_00bc84c0(this GEN_EDX_FWD,param_1,((undefined4 *)GEN_TOP(param_2[2]))), uVar4 != 0)) {
    return uVar4;
  }
  if ((param_2[3] != 0) &&
     (uVar4 = F_00bc84c0(this GEN_EDX_ARG,param_1,((undefined4 *)GEN_TOP(param_2[3]))), uVar4 != 0)) {
    return uVar4;
  }
  return 0;
}

/* ref: Client::SupportDesk::XmlParser::CountTags */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bc8540(GEN_P(char * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbc8540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  char * pcVar1;
  uint uVar2;
  
  uVar2 = 0;
  pcVar1 = param_1;
  while ((pcVar1 != ((char *)GEN_TOP(0x0)) && (pcVar1 = F_00c46a10(pcVar1,((char *)REFP(0x1106318))), pcVar1 != ((char *)GEN_TOP(0x0))))) {
    pcVar1 = pcVar1 + 1;
    if (*pcVar1 != '/') {
      uVar2 = uVar2 + 1;
    }
  }
  return uVar2;
}

/* ref: Client::SupportDesk::XmlParser::TrimTrailingWhitespace */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00bc8580(GEN_P(char * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbc8580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  char cVar1;
  char * pcVar2;
  int iVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  for (iVar3 = (int)pcVar2 - (int)(param_1 + 1);
      (iVar3 != 0 && ((param_1[iVar3] == ' ' || (param_1[iVar3] == '\t')))); iVar3 = iVar3 - 1) {
    param_1[iVar3] = '\0';
  }
  return 0;
}

/* ref: Client::SupportDesk::XmlParser::AllocNodes */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc85c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc85c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if ((int)param_1 < 1) {
    return 0;
  }
  if (param_1 < 0x21) {
    *(undefined * PTR32 *)(this + 0x214) = this + 0x14;
  }
  else {
    uVar1 = F_00406bb0(-(uint)((int)((ulonglong)*(uint *)(this + 0x218) * 0x10 >> 0x20) != 0) |
                         (uint)((ulonglong)*(uint *)(this + 0x218) * 0x10),0,0);
    *(uint *)(this + 0x214) = uVar1;
    if (uVar1 == 0) {
      return 0;
    }
  }
  F_00c48350(*(undefined * PTR32 *)(this + 0x214),0,param_1 << 4);
  *(uint *)(this + 0x218) = param_1;
  return 1;
}

/* ref: Client::SupportDesk::XmlParser::FreeNodes */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc8640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc8640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (0x20 < *(uint *)(this + 0x218)) {
    F_00406b30(*(undefined4 *)(this + 0x214));
  }
  *(undefined4 *)(this + 0x218) = 0;
  *(undefined4 *)(this + 0x214) = 0;
  return 0;
}

/* ref: Client::SupportDesk::XmlParser::~XmlParser */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc8670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc8670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1106320));
  if (0x20 < *(uint *)(this + 0x218)) {
    F_00406b30(*(undefined4 *)(this + 0x214));
  }
  *(undefined4 *)(this + 0x218) = 0;
  *(undefined4 *)(this + 0x214) = 0;
  return 0;
}

/* ref: Client::SupportDesk::XmlParser::Clear */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc86b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc86b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (0x20 < *(uint *)(this + 0x218)) {
    F_00406b30(*(undefined4 *)(this + 0x214));
  }
  *(undefined4 *)(this + 0x214) = 0;
  *(undefined4 *)(this + 0x218) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return 0;
}

/* ref: Client::SupportDesk::XmlParser::FindNode */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc86e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc86e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  if (*(int *)(this + 0xc) != 0) {
    uVar1 = F_00bc84c0(this GEN_EDX_FWD,param_1,*(int *)(this + 0xc));
    return uVar1;
  }
  return 0;
}

/* ref: Client::SupportDesk::XmlParser::ParseElements */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc8700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc8700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  char cVar1;
  char cVar2;
  byte bVar3;
  char * pcVar4;
  char * pcVar5;
  char * pcVar6;
  int iVar7;
  int * piVar8;
  int * local_10;
  
  local_10 = ((int *)GEN_TOP(0x0));
  if (*param_1 != 0) {
    while ((*((char *)GEN_TOP(*param_1)) != '\0' &&
           (pcVar4 = F_00c46a10(((char *)GEN_TOP(*param_1)),"<"), pcVar4 != ((char *)GEN_TOP(0x0))))) {
      pcVar5 = F_00c46a10(pcVar4,">");
      if (pcVar5 == ((char *)GEN_TOP(0x0))) {
LAB_00bc886b: ;
        this[0x220] = (undefined1)0x1;
        return 0;
      }
      if (pcVar4[1] == '/') {
        *param_1 = (int)(pcVar5 + 1);
        return 1;
      }
      cVar1 = pcVar5[-1];
      if (cVar1 == '/') {
        pcVar5[-1] = '\0';
      }
      iVar7 = *(int *)(this + 0x21c);
      if (*(int *)(this + 0x218) <= iVar7) goto LAB_00bc886b;
      piVar8 = ((int *)GEN_TOP((iVar7 * 0x10 + *(int *)(this + 0x214))));
      *(int *)(this + 0x21c) = iVar7 + 1;
      *piVar8 = 0;
      piVar8[1] = 0;
      piVar8[2] = 0;
      piVar8[3] = 0;
      if (*((int *)GEN_TOP((param_2 + 8))) == 0) {
        *((int * PTR32 *)GEN_TOP((param_2 + 8))) = piVar8;
      }
      if (local_10 != ((int *)GEN_TOP(0x0))) {
        local_10[3] = (int)piVar8;
      }
      *piVar8 = (int)(pcVar4 + 1);
      *pcVar5 = '\0';
      pcVar4 = ((char *)GEN_TOP(*piVar8));
      pcVar6 = pcVar4;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      for (iVar7 = (int)pcVar6 - (int)(pcVar4 + 1);
          (iVar7 != 0 && ((pcVar4[iVar7] == ' ' || (pcVar4[iVar7] == '\t')))); iVar7 = iVar7 - 1) {
        pcVar4[iVar7] = '\0';
      }
      pcVar5 = pcVar5 + 1;
      *param_1 = (int)pcVar5;
      if (cVar1 != '/') {
        if (pcVar5 == ((char *)GEN_TOP(0x0))) {
          this[0x220] = (undefined1)0x1;
          return 0;
        }
        pcVar4 = F_00c46a10(pcVar5,"<");
        if (pcVar4 == ((char *)GEN_TOP(0x0))) {
          this[0x220] = (undefined1)0x1;
          return 0;
        }
        if (pcVar4[1] == '/') {
          piVar8[1] = *param_1;
          pcVar5 = F_00c46a10(pcVar4,">");
          if (pcVar5 == ((char *)GEN_TOP(0x0))) {
            return 0;
          }
          *param_1 = (int)(pcVar5 + 1);
          *pcVar4 = '\0';
        }
        else {
          bVar3 = F_00bc8700(this GEN_EDX_ARG,param_1,(int)piVar8);
          if (bVar3 == 0) {
            return 0;
          }
        }
      }
      local_10 = piVar8;
      if (*param_1 == 0) {
        return 1;
      }
    }
  }
  return 1;
}

/* ref: Client::SupportDesk::XmlParser::Parse */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc88c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc88c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  byte bVar1;
  char * pcVar2;
  undefined * pXVar3;
  uint uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  this[0x220] = (undefined1)0x0;
  if (0x20 < *(uint *)(this + 0x218)) {
    F_00406b30(*(undefined4 *)(this + 0x214));
  }
  *(undefined4 *)(this + 0x214) = 0;
  *(undefined4 *)(this + 0x218) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  if (param_1 != ((char *)GEN_TOP(0x0))) {
    pcVar2 = F_00c46a10(param_1,((char *)REFP(0x1106304)));
    if (pcVar2 != ((char *)GEN_TOP(0x0))) {
      pXVar3 = (undefined *)(pcVar2 + 2);
      (*(undefined * PTR32 *)(gen_frame + 0x0)) = pXVar3;
      if (pXVar3 != ((undefined *)GEN_TOP(0x0))) {
        uVar4 = F_00bc8540(pXVar3);
        *(uint *)(this + 0x218) = uVar4;
        *(undefined4 *)(this + 0x21c) = 0;
        bVar1 = F_00bc85c0(this GEN_EDX_ARG,uVar4);
        if (bVar1 != 0) {
          bVar1 = F_00bc8700(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),this + 4);
          return bVar1;
        }
      }
    }
  }
  this[0x220] = (undefined1)0x1;
  return 0;
}

/* ref: Client::SupportDesk::XmlParser::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc8960(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc8960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1106320));
  if (0x20 < (uint)param_1[0x86]) {
    F_00406b30(param_1[0x85]);
  }
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bc89b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc89b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc89b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x1106328));
  return (uint)in_ecx;
}

/* ref: FUN_00bc89c0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bc89c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc89c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x1106328));
  return;
}

/* ref: FUN_00bc89d0 */
GEN_OWN GEN_NOFRAME uint F_00bc89d0(void)
{
  GEN_ENTER(0xbc89d0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00406b90(8,0,0);
  if (uVar1 != 0) {
    uVar1 = F_00c1f8c0(uVar1 GEN_EDX_ARG);
    return uVar1;
  }
  return 0;
}

/* ref: Client::SupportDesk::HttpConnection::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc89f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc89f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x1106328));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Data::BlockMemory::GetBlock */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc8a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc8a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 == -1) {
    return 0;
  }
  return *(int *)(this + 0x1c) * param_1 + *(int *)(this + 0x18);
}

/* ref: Client::System::Data::BlockMemory::AllocateBlock */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc8a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc8a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*(int *)(this + 0xc) != *(int *)(this + 0x20)) {
    uVar1 = F_00a4b3a0((undefined *)(this + 4) GEN_EDX_FWD);
    if (uVar1 != 0xffffffff) {
      return *(int *)(this + 0x1c) * uVar1 + *(int *)(this + 0x18);
    }
  }
  return 0;
}

/* ref: FUN_00bc8aa0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bc8aa0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc8aa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x88)));
}

/* ref: FUN_00bc8ab0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00bc8ab0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc8ab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x89)));
}

/* ref: Component::Completion::CategoryData::vf1 */
GEN_OWN GEN_NOFRAME uint F_00bc8ac0(void)
{
  GEN_ENTER(0xbc8ac0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::Completion::CategoryData::GetEntries */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc8ad0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc8ad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 4;
}

/* ref: FUN_00bc8ae0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc8ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc8ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0042ccf0(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Component::Completion::CategoryData::IsLastCharAllowed */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc8af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc8af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_0042a970(param_1 GEN_EDX_FWD);
  bVar1 = F_0042a980(param_1 GEN_EDX_ARG,uVar2 - 1);
  uVar2 = F_0042abe0(this + 0x34 GEN_EDX_ARG,bVar1);
  return uVar2 == REFG(undefined4, 0x108cc50);
}

/* ref: Component::Completion::CategoryDataCache::GetCapacity */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc8b30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc8b30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x8c)));
}

/* ref: Component::Completion::CategoryData::GetEntryKey */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc8b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc8b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if ((*(int *)(this + 0x18) - *(int *)(this + 0x14) & 0xfffffffcU) == 0) {
    return 0;
  }
  return *(int *)(this + 0x14) + param_1 * 4;
}

/* ref: Component::Completion::CategoryData::IsIdInRanges */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc8b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc8b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  
  uVar1 = *(int *)(this + 0x28) - *(int *)(this + 0x24) >> 2;
  if (uVar1 == 0) {
    return 1;
  }
  uVar1 = uVar1 >> 1;
  uVar3 = 0;
  if (uVar1 != 0) {
    puVar2 = *(uint * PTR32 *)(this + 0x24);
    do {
      if ((*puVar2 <= param_1) && (param_1 <= puVar2[1])) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 2;
    } while (uVar3 < uVar1);
  }
  return 0;
}

/* ref: Component::Completion::CategoryData::CategoryData */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc8bc0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbc8bc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x1106348));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  F_0042b630(in_ecx + 0xd GEN_EDX_FWD);
  *(undefined1 *)(in_ecx + 0x22) = param_2;
  *((undefined1 *)GEN_TOP(((int)in_ecx + 0x89))) = param_3;
  return (uint)in_ecx;
}

/* ref: Component::Completion::CategoryData::~CategoryData */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc8c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc8c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1106348));
  F_0042c880(this + 0x34 GEN_EDX_FWD);
  iVar1 = *(int *)(this + 0x24);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)(this + 0x2c) - iVar1 >> 2) * 4,0x2be);
  }
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  iVar1 = *(int *)(this + 0x14);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)(this + 0x1c) - iVar1 >> 2) * 4,0x2be);
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  iVar1 = *(int *)(this + 4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)(this + 0xc) - iVar1 >> 2) * 4,0x2be);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return uVar2;
}

/* ref: Component::Completion::CategoryDataCache::CategoryDataCache */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc8cb0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xbc8cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  undefined * _Dst;
  uint uVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x1106348));
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  F_0042b630(param_1 + 0xd GEN_EDX_FWD);
  *((undefined1 *)GEN_TOP(((int)param_1 + 0x89))) = param_3;
  *(undefined1 *)(param_1 + 0x22) = param_2;
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x1106360));
  param_1[0x23] = param_4;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x25] = (*(undefined * PTR32 (*)[1])REFP(0x1106340));
  F_00a4b300((undefined *)(param_1 + 0x26) GEN_EDX_ARG,param_4);
  param_1[0x2b] = 0;
  param_1[0x2c] = 0x58;
  param_1[0x2d] = param_4;
  param_1[0x2e] = param_4 * 0x58;
  _Dst = ((undefined *)GEN_TOP(F_00406bb0(param_4 * 0x58,0,0)));
  param_1[0x2b] = _Dst;
  F_00c48350(_Dst,0,param_1[0x2e]);
  param_1[0x30] = 0;
  uVar1 = F_004296a0(0xc,0,0x2be);
  param_1[0x2f] = uVar1;
  *((uint *)GEN_TOP(uVar1)) = uVar1;
  *((undefined4 *)GEN_TOP((param_1[0x2f] + 4))) = param_1[0x2f];
  F_0049f580(param_1 + 1 GEN_EDX_ARG,param_4);
  F_00adf7d0(param_1 + 5 GEN_EDX_ARG,param_4);
  return (uint)param_1;
}

/* ref: Component::Completion::CategoryData::AddEntry */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00bc8db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc8db0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_FRAME_DECL_GS(0x64, 12, 4);
  bool bVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  uint * puVar5;
  uint uVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60));
  puVar5 = *(uint * PTR32 *)(this + 0x24);
  uVar6 = 0;
  uVar4 = *(int *)(this + 0x28) - (int)((int)(uintptr_t)puVar5) >> 2;
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = param_1;
  bVar2 = false;
  if (uVar4 == 0) {
LAB_00bc8e4f: ;
    F_0042cca0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_FWD,*param_1);
    bVar2 = true;
    uVar4 = F_0042a970(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    bVar3 = F_0042a980(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,uVar4 - 1);
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x4)) + 0)) = bVar3;
    (*(uint *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4)), 1, 3),bVar3);
    uVar4 = F_0042abe0(this + 0x34 GEN_EDX_ARG,bVar3);
    if (uVar4 == REFG(undefined4, 0x108cc50)) {
      bVar1 = true;
      goto LAB_00bc8df9;
    }
  }
  else {
    uVar4 = uVar4 >> 1;
    if (uVar4 != 0) {
      do {
        if ((*puVar5 <= param_2) && (param_2 <= puVar5[1])) goto LAB_00bc8e4f;
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 2;
      } while (uVar6 < uVar4);
    }
  }
  bVar1 = false;
LAB_00bc8df9: ;
  if (bVar2) {
    F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  }
  if (bVar1) {
    F_00ae0570(this + 4 GEN_EDX_ARG,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
    (*(uint *)(gen_frame + 0x4)) = (int)(char)this[0x88] & 0x7fU | param_2 << 7;
    F_00ae01a0(this + 0x14 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x4)));
    return (uint)(*(undefined1 * PTR32 *)(gen_frame + 0x0));
  }
  return 0;
}

/* ref: FUN_00bc8eb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc8eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc8eb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00bca180(((undefined *)GEN_TOP(((int)this + 0x24))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Component::Completion::CategoryDataCache::AddEntry */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00bc8ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc8ec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  undefined * this_00;
  int * piVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  int * piVar9;
  uint * puVar10;
  undefined * this_01;
  uint uVar11;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  uVar11 = 0;
  uVar8 = *(int *)(this + 0x28) - *(int *)(this + 0x24) >> 2;
  bVar6 = false;
  if (uVar8 == 0) {
LAB_00bc8f5e: ;
    F_0042cca0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*param_1);
    bVar6 = true;
    uVar8 = F_0042a970(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    bVar7 = F_0042a980(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar8 - 1);
    uVar8 = F_0042abe0(this + 0x34 GEN_EDX_ARG,bVar7);
    if (uVar8 == REFG(undefined4, 0x108cc50)) {
      bVar5 = false;
      goto LAB_00bc8f0d;
    }
  }
  else {
    uVar8 = uVar8 >> 1;
    if (uVar8 != 0) {
      puVar10 = *(uint * PTR32 *)(this + 0x24);
      do {
        if ((*puVar10 <= param_2) && (param_2 <= puVar10[1])) goto LAB_00bc8f5e;
        uVar11 = uVar11 + 1;
        puVar10 = puVar10 + 2;
      } while (uVar11 < uVar8);
    }
  }
  bVar5 = true;
LAB_00bc8f0d: ;
  if (bVar6) {
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  if (bVar5) {
    return 0;
  }
  piVar9 = *(int * PTR32 *)(this + 0xbc);
  this_00 = this + 0xbc;
  if ((int)param_2 < 0) {
    for (piVar1 = ((int *)GEN_TOP(*piVar9)); piVar1 != piVar9; piVar1 = ((int *)GEN_TOP(*piVar1))) {
      F_0042cca0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,*param_1);
      bVar7 = F_0042ac50(((undefined *)GEN_TOP(piVar1[2])) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      if (bVar7 != 0) {
        piVar9 = ((int *)GEN_TOP(**(undefined4 * PTR32 *)this_00));
        if (((piVar1 != *(int * PTR32 *)this_00) && (piVar9 != piVar1)) && (piVar9 != ((int *)GEN_TOP(*piVar1)))) {
          F_00bc99c0(this_00 GEN_EDX_ARG,piVar9,this_00,piVar1,((int *)GEN_TOP(*piVar1)),1);
        }
        this[0x90] = (undefined1)0x1;
        return 0;
      }
    }
  }
  else {
    piVar1 = ((int *)GEN_TOP(*piVar9));
    for (piVar2 = piVar1; piVar2 != piVar9; piVar2 = ((int *)GEN_TOP(*piVar2))) {
      if (*((uint *)GEN_TOP((piVar2[2] + 0x54))) >> 7 == param_2) {
        if (((piVar2 != piVar9) && (piVar1 != piVar2)) && (piVar1 != ((int *)GEN_TOP(*piVar2)))) {
          F_00bc99c0(this_00 GEN_EDX_ARG,piVar1,this_00,piVar2,*piVar2,1);
        }
        this[0x90] = (undefined1)0x1;
        return 0;
      }
    }
  }
  if (*(int *)(this + 0xc0) == *(int *)(this + 0x8c)) {
    piVar9 = *(int * PTR32 *)this_00;
    this_01 = *((undefined * PTR32 *)GEN_TOP((piVar9[1] + 8)));
    piVar1 = ((int *)GEN_TOP(piVar9[1]));
    if (piVar1 != piVar9) {
      *((int *)GEN_TOP(piVar1[1])) = *piVar1;
      *((int *)GEN_TOP((*piVar1 + 4))) = piVar1[1];
      F_00429760(piVar1,0xc,0x2be);
      *(int *)(this + 0xc0) = *(int *)(this + 0xc0) - 1;
    }
  }
  else if ((*(int *)(this + 0xa0) == *(int *)(this + 0xb4)) ||
          (uVar8 = F_00a4b3a0((undefined *)(this + 0x98) GEN_EDX_ARG),
          uVar8 == 0xffffffff)) {
    this_01 = ((undefined *)GEN_TOP(0x0));
  }
  else {
    this_01 = ((undefined *)GEN_TOP((*(int *)(this + 0xb0) * uVar8 + *(int *)(this + 0xac))));
  }
  F_0042cca0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,*param_1);
  F_0042ccf0(this_01 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)this_01 + 0x54))) = (int)(char)this[0x88] & 0x7fU | param_2 << 7;
  iVar3 = **(int * PTR32 *)this_00;
  iVar4 = *((int *)GEN_TOP((iVar3 + 4)));
  piVar9 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x2be)));
  piVar9[1] = iVar4;
  *piVar9 = iVar3;
  if (piVar9 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar9[2] = (int)this_01;
  }
  if (*(int *)(this + 0xc0) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *(int *)(this + 0xc0) = *(int *)(this + 0xc0) + 1;
  *((int * PTR32 *)GEN_TOP((iVar3 + 4))) = piVar9;
  *((int * PTR32 *)GEN_TOP(piVar9[1])) = piVar9;
  this[0x90] = (undefined1)0x1;
  uVar8 = F_0042a990(this_01 GEN_EDX_ARG);
  return uVar8;
}

/* ref: Component::Completion::CategoryDataCache::RebuildEntries */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bc9190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc9190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  if (this[0x90] != (undefined1)0x0) {
    uVar1 = *(uint *)(this + 0xc0);
    uVar4 = 0;
    F_00bca0f0(this + 4 GEN_EDX_FWD,uVar1);
    F_00bc9f40(this + 0x14 GEN_EDX_ARG,uVar1);
    puVar5 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)(this + 0xbc)));
    if (uVar1 != 0) {
      do {
        iVar2 = *(int *)(this + 4);
        uVar3 = F_0042a990(puVar5[2] GEN_EDX_ARG);
        *((uint *)GEN_TOP((iVar2 + uVar4 * 4))) = uVar3;
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x14) + uVar4 * 4))) = *((undefined4 *)GEN_TOP((puVar5[2] + 0x54)));
        puVar5 = ((undefined4 *)GEN_TOP(*puVar5));
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
  }
  return;
}

/* ref: Component::Completion::CategoryDataCache::GetEntries */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc9210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc9210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bc9190(this GEN_EDX_FWD);
  return (uint)(this + 4);
}

/* ref: FUN_00bc9220 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc9220(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc9220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00bc9230 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc9230(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc9230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00bc9250 */
GEN_OWN GEN_FRAME uint F_00bc9250(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbc9250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bc9260 */
GEN_OWN GEN_FRAME uint F_00bc9260(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbc9260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: Global::IteratorEquals_00bc9290 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc9290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc9290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00bc92c0 */
GEN_OWN GEN_FRAME uint F_00bc92c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbc92c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: Global::AllocateListNodes */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bc92f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc92f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,0x2be);
  return uVar1;
}

/* ref: Global::DeallocateListNodes */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bc9320(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc9320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,0x2be);
  return (uint)uVar1;
}

/* ref: Global::IteratorAdvance_00bc9370 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc9370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc9370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: Global::IteratorAdvance_00bc9390 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc9390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc9390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00bc93d0 */
GEN_OWN GEN_FRAME uint F_00bc93d0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbc93d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::CopyPointerRange_00bc9400 */
GEN_OWN GEN_FRAME uint F_00bc9400(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbc9400u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00bc9430 */
GEN_OWN GEN_FRAME uint F_00bc9430(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbc9430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00bc9440 */
GEN_OWN GEN_FRAME uint F_00bc9440(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xbc9440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Client::System::Data::BlockMemory::BlockMemory */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc9450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc9450u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined * _Dst;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1106340));
  F_00a4b300((undefined *)(this + 4) GEN_EDX_FWD,param_2);
  *(int *)(this + 0x1c) = param_1;
  *(undefined4 *)(this + 0x18) = 0;
  *(int *)(this + 0x20) = param_2;
  *(int *)(this + 0x24) = param_1 * param_2;
  _Dst = ((undefined *)GEN_TOP(F_00406bb0(param_1 * param_2,0,0)));
  *(undefined * PTR32 *)(this + 0x18) = _Dst;
  F_00c48350(_Dst,0,*(gen_size32 *)(this + 0x24));
  return (uint)this;
}

/* ref: Client::System::Data::BlockMemory::~BlockMemory */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc94b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc94b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1106340));
  F_00406b30(*(undefined4 *)(this + 0x18));
  uVar1 = F_00a4b380((undefined *)(this + 4) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Global::IteratorNotEquals_00bc9500 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc9500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc9500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: Global::ListIteratorPostIncrement_00bc9550 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc9550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc9550u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00bc9570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc9570(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbc9570u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::IteratorAdvance_00bc9580 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc9580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc9580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: Global::IteratorAdvance_00bc95a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc95a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc95a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: Global::CopyPointerRange_00bc95d0 */
GEN_OWN GEN_FRAME uint F_00bc95d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbc95d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: Global::ConstructElement_00bc9610 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bc9610(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc9610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: Global::ConstructElement_00bc9630 */
GEN_OWN GEN_FRAME uint F_00bc9630(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbc9630u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: Client::System::Data::BlockMemory::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc9650(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc9650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1106340));
  F_00406b30(param_1[6]);
  F_00a4b380((undefined *)(param_1 + 1) GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::VectorBuy */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00bc96c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc96c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (param_1 != 0) {
    uVar1 = F_004296a0(param_1 * 4,0,0x2be);
    *((uint *)GEN_TOP(((int)this + 8))) = param_1 * 4 + uVar1;
    *(uint *)this = uVar1;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00bc9770 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc9770(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbc9770u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::IteratorAddOffset */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc9780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc9780u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = *(int *)this + param_2 * 4;
  return (uint)param_1;
}

/* ref: Global::IteratorAddOffset_00bc97a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc97a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc97a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *param_1 = *(int *)this + param_2 * 4;
  return (uint)param_1;
}

/* ref: Global::ListClear_00bc97c0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bc97c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc97c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = ((int *)GEN_TOP(*piVar1));
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = ((int *)GEN_TOP(*piVar2));
      F_00429760(piVar2,0xc,0x2be);
      piVar2 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  return 0;
}

/* ref: Global::ListIncrementSize_00bc9800 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc9800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc9800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (-*((int *)GEN_TOP(((int)this + 4))) - 2U < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: Global::ConstructElement_00bc9830 */
GEN_OWN GEN_FRAME uint F_00bc9830(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbc9830u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: Global::FillWith0x7F */
GEN_OWN GEN_FRAME unsigned int F_00bc9850(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc9850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0x7f;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}

/* ref: Global::FillZero */
GEN_OWN GEN_FRAME unsigned int F_00bc9880(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc9880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return;
}

/* ref: Global::ListBuyNode_00bc98b0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bc98b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbc98b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0xc,0,0x2be)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: Global::ConstructElement_00bc98f0 */
GEN_OWN GEN_FRAME uint F_00bc98f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbc98f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: Global::ListBegin */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc9940(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc9940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: Global::ListEnd */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc9950(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc9950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bc99a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc99a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbc99a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bc99b0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bc99b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc99b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: Global::ListSplice */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc99c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4), GEN_P(uint param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xbc99c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  GEN_PIN(uint param_5 = (uint)gen_a5;)
  undefined4 uVar1;
  
  if (this != param_2) {
    if (-*((int *)GEN_TOP(((int)this + 4))) - 2U < param_5) {
                    
      F_00c4579a(((char *)REFP(0x108b258)));
    }
    *((uint *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + param_5;
    *((int *)GEN_TOP(((int)param_2 + 4))) = *((int *)GEN_TOP(((int)param_2 + 4))) - param_5;
  }
  **((uint * PTR32 *)GEN_TOP((param_3 + 4))) = param_4;
  **((int * PTR32 *)GEN_TOP((param_4 + 4))) = param_1;
  **((int * PTR32 *)GEN_TOP((param_1 + 4))) = param_3;
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *((undefined4 *)GEN_TOP((param_1 + 4))) = *((undefined4 *)GEN_TOP((param_4 + 4)));
  *((undefined4 *)GEN_TOP((param_4 + 4))) = *((undefined4 *)GEN_TOP((param_3 + 4)));
  *((undefined4 *)GEN_TOP((param_3 + 4))) = uVar1;
  return param_4;
}

/* ref: Global::ListBuyNode_00bc9a40 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bc9a40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbc9a40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004296a0(0xc,0,0x2be)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: Global::FillWith0x7F_00bc9a80 */
GEN_OWN GEN_FRAME unsigned int F_00bc9a80(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc9a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0x7f;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: Global::FillZero_00bc9ab0 */
GEN_OWN GEN_FRAME unsigned int F_00bc9ab0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc9ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: Global::ListInsertNode_00bc9ae0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc9ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc9ae0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  piVar2 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x2be)));
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar2[2] = *param_2;
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  *((int * PTR32 *)GEN_TOP(piVar2[1])) = piVar2;
  return (uint)piVar2;
}

/* ref: Global::UninitializedCopyDwords_00bc9b50 */
GEN_OWN GEN_FRAME unsigned int F_00bc9b50(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbc9b50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: Global::ListDestroy_00bc9b80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc9b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc9b80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = ((int *)GEN_TOP(*piVar1));
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)this + 4))) = *(int *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = ((int *)GEN_TOP(*piVar2));
      F_00429760(piVar2,0xc,0x2be);
      piVar2 = piVar1;
    } while (piVar1 != ((int *)GEN_TOP(*(int *)this)));
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,0x2be);
  return (uint)uVar3;
}

/* ref: Global::ListBegin_00bc9bd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc9bd0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc9bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP(*in_ecx));
  return (uint)param_2;
}

/* ref: Global::ListEnd_00bc9be0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc9be0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc9be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: Global::ListInsertNode_00bc9c00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc9c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc9c00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  piVar2 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x2be)));
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar2[2] = *param_2;
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((param_1 + 4))) = piVar2;
  *((int * PTR32 *)GEN_TOP(piVar2[1])) = piVar2;
  return (uint)piVar2;
}

/* ref: Global::ListErase_00bc9c70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc9c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbc9c70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *((int *)GEN_TOP(param_2[1])) = *param_2;
    *((int *)GEN_TOP((*param_2 + 4))) = param_2[1];
    F_00429760(param_2,0xc,0x2be);
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: Global::ListEraseRange */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc9cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbc9cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  int * piVar1;
  int * piVar2;
  
  piVar1 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**(int * PTR32 *)this))) && (piVar1 = param_2, param_3 == *(int * PTR32 *)this)) {
    F_00bc97c0(this GEN_EDX_FWD);
    *param_1 = *(undefined4 *)this;
    return (uint)param_1;
  }
  while (piVar2 = piVar1, piVar2 != param_3) {
    piVar1 = ((int *)GEN_TOP(*piVar2));
    if (piVar2 != *(int * PTR32 *)this) {
      *((int * PTR32 *)GEN_TOP(piVar2[1])) = piVar1;
      *((int *)GEN_TOP((*piVar2 + 4))) = piVar2[1];
      F_00429760(piVar2,0xc,0x2be);
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
    }
  }
  *param_1 = param_3;
  return (uint)param_1;
}

/* ref: Global::UninitializedFillZero_00bc9d30 */
GEN_OWN GEN_FRAME unsigned int F_00bc9d30(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbc9d30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 - 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: Global::ListInsert_00bc9d60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc9d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbc9d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP((param_2 + 4)));
  piVar2 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x2be)));
  *piVar2 = param_2;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar2[2] = *param_3;
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((param_2 + 4))) = piVar2;
  *((int * PTR32 *)GEN_TOP(piVar2[1])) = piVar2;
  *param_1 = *((undefined4 *)GEN_TOP((param_2 + 4)));
  return (uint)param_1;
}

/* ref: Global::UninitializedCopyDwords_00bc9de0 */
GEN_OWN GEN_FRAME unsigned int F_00bc9de0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbc9de0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: Global::ListPushBack_00bc9e10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc9e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc9e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = **(int * PTR32 *)this;
  iVar2 = *((int *)GEN_TOP((iVar1 + 4)));
  piVar3 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x2be)));
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar3[2] = *param_1;
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((int * PTR32 *)GEN_TOP((iVar1 + 4))) = piVar3;
  *((int * PTR32 *)GEN_TOP(piVar3[1])) = piVar3;
  return (uint)piVar3;
}

/* ref: Global::ListPopBack */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bc9e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbc9e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  ulonglong uVar2;
  
  piVar1 = ((int *)GEN_TOP((*(int * PTR32 *)this)[1]));
  if (piVar1 != *(int * PTR32 *)this) {
    *((int *)GEN_TOP(piVar1[1])) = *piVar1;
    *((int *)GEN_TOP((*piVar1 + 4))) = piVar1[1];
    uVar2 = F_00429760(piVar1,0xc,0x2be);
    piVar1 = ((int *)GEN_TOP((uint)uVar2));
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  }
  return (uint)piVar1;
}

/* ref: Global::ListInsert_00bc9ea0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc9ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbc9ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP((param_2 + 4)));
  piVar2 = ((int *)GEN_TOP(F_004296a0(0xc,0,0x2be)));
  *piVar2 = param_2;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != ((int *)GEN_TOP(0x0))) {
    piVar2[2] = *param_3;
  }
  if (*((int *)GEN_TOP(((int)this + 4))) == -2) {
                    
    F_00c4579a(((char *)REFP(0x108b258)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *((uint *)GEN_TOP((param_2 + 4))) = (uint)piVar2;
  *((int * PTR32 *)GEN_TOP(piVar2[1])) = piVar2;
  *param_1 = *((uint *)GEN_TOP((param_2 + 4)));
  return (uint)param_1;
}

/* ref: Global::UninitializedCopyDwords_00bc9f10 */
GEN_OWN GEN_FRAME unsigned int F_00bc9f10(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbc9f10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: Global::VectorResizeFill7F */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc9f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbc9f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  uVar3 = (int)(uVar2 - *(int *)this) >> 2;
  if (param_1 < uVar3) {
    uVar3 = *(int *)this + param_1 * 4;
    if (uVar3 == uVar2) {
      return uVar2;
    }
  }
  else {
    if (param_1 <= uVar3) {
      return uVar2;
    }
    F_00adfba0(this GEN_EDX_FWD,param_1 - uVar3);
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    for (iVar1 = param_1 - ((int)puVar4 - *(int *)((int)(uintptr_t)this) >> 2); iVar1 != 0; iVar1 = iVar1 - 1) {
      if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar4 = 0x7f;
      }
      puVar4 = puVar4 + 1;
    }
    uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
    uVar3 = uVar2 + (param_1 - ((int)(uVar2 - *(int *)this) >> 2)) * 4;
  }
  *((uint *)GEN_TOP(((int)this + 4))) = uVar3;
  return uVar2;
}

/* ref: FUN_00bc9fd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bc9fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xbc9fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  uint uVar1;
  
  uVar1 = F_00bc99c0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: Global::UninitializedCopyDwords_00bc9ff0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00bc9ff0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbc9ff0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = param_3;
  if (param_1 != param_2) {
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return (uint)puVar1;
}

/* ref: Component::Completion::CategoryData::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bca020(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbca020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bc8c10(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Component::Completion::CategoryDataCache::~CategoryDataCache */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bca050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbca050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00bc9b80(this + 0xbc GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(this + 0x94) = (*(undefined * PTR32 (*)[1])REFP(0x1106340));
  F_00406b30(*(undefined4 *)(this + 0xac));
  F_00a4b380((undefined *)(this + 0x98) GEN_EDX_ARG);
  uVar1 = F_00bc8c10((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Component::Completion::CategoryDataCache::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bca090(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbca090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bc9b80(param_1 + 0xbc GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)(param_1 + 0x94) = (*(undefined * PTR32 (*)[1])REFP(0x1106340));
  F_00406b30(*(undefined4 *)(param_1 + 0xac));
  F_00a4b380((undefined *)(param_1 + 0x98) GEN_EDX_ARG);
  F_00bc8c10(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::VectorResizeZero */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bca0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbca0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  uVar2 = iVar3 - *(int *)((int)(uintptr_t)this) >> 2;
  if (param_1 < uVar2) {
    iVar1 = *(int *)this + param_1 * 4;
    if (iVar1 != iVar3) {
      uVar2 = F_00c46e20(iVar1,iVar3,0);
      *((int *)GEN_TOP(((int)this + 4))) = iVar1;
      return uVar2;
    }
  }
  else if (uVar2 < param_1) {
    F_0049f630(this GEN_EDX_ARG,param_1 - uVar2);
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    for (iVar3 = param_1 - ((int)puVar4 - *(int *)((int)(uintptr_t)this) >> 2); iVar3 != 0; iVar3 = iVar3 - 1) {
      if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
    uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2 + (param_1 - ((int)(uVar2 - *(int *)this) >> 2)) * 4;
  }
  return uVar2;
}

/* ref: Global::VectorAssign_00bca180 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bca180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbca180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (this != param_1) {
    iVar2 = *param_1;
    uVar6 = param_1[1] - iVar2 >> 2;
    iVar3 = *(int *)this;
    if (uVar6 == 0) {
      if (iVar3 != *((int *)GEN_TOP(((int)this + 4)))) {
        F_00c46e20(iVar3,*((int *)GEN_TOP(((int)this + 4))),0);
        *((int *)GEN_TOP(((int)this + 4))) = iVar3;
        return (uint)this;
      }
    }
    else {
      uVar7 = *((int *)GEN_TOP(((int)this + 4))) - iVar3 >> 2;
      if (uVar6 <= uVar7) {
        F_00c46e20(iVar3,iVar2,(param_1[1] - iVar2 >> 2) * 4);
        *((int *)GEN_TOP(((int)this + 4))) = *(int *)this + (param_1[1] - *param_1 >> 2) * 4;
        return (uint)this;
      }
      uVar5 = *((int *)GEN_TOP(((int)this + 8))) - iVar3 >> 2;
      if (uVar6 <= uVar5) {
        iVar1 = iVar2 + uVar7 * 4;
        F_00c46e20(iVar3,iVar2,(iVar1 - iVar2 >> 2) * 4);
        uVar6 = F_00bc9ff0(iVar1,param_1[1],*((undefined4 *)GEN_TOP(((int)this + 4))));
        *((uint *)GEN_TOP(((int)this + 4))) = uVar6;
        return (uint)this;
      }
      if (iVar3 != 0) {
        F_00adc890(iVar3,uVar5);
      }
      bVar4 = F_00bc96c0(this GEN_EDX_ARG,param_1[1] - *param_1 >> 2);
      if (bVar4 != 0) {
        uVar6 = F_00bc9ff0(*param_1,param_1[1],*(undefined4 *)this);
        *((uint *)GEN_TOP(((int)this + 4))) = uVar6;
      }
    }
  }
  return (uint)this;
}

/* ref: Global::ListSpliceOne */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bca2a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbca2a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  int * piVar1;
  
  piVar1 = param_3;
  if ((param_3 != ((int *)GEN_TOP(*param_2))) &&
     ((this != param_2 || ((param_1 != param_3 && (param_1 != ((int *)GEN_TOP(*param_3)))))))) {
    piVar1 = ((int *)GEN_TOP(F_00bc99c0(this GEN_EDX_FWD,param_1,param_2,param_3,((int *)GEN_TOP(*param_3)),1)));
  }
  return (uint)piVar1;
}

/* ref: FUN_00bca2e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bca2e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbca2e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 - *((int *)GEN_TOP((in_ecx + 0x34)));
}

/* ref: FUN_00bca2f0 */
GEN_OWN GEN_FRAME float10 F_00bca2f0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xbca2f0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00bca310 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bca310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbca310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x30)));
  if (iVar2 == 0) {
    return 0;
  }
  iVar3 = param_1 - *((int *)GEN_TOP(((int)this + 0x34)));
  if (iVar3 == 0) {
    return **((uint * PTR32 *)GEN_TOP((iVar2 + 4)));
  }
  piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 4))) + iVar3 * 4)));
  return *piVar1 - piVar1[-1];
}

/* ref: FUN_00bca340 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bca340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbca340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x30)));
  if (iVar1 != 0) {
    iVar2 = param_1 - *((int *)GEN_TOP(((int)this + 0x34)));
    if (iVar2 == 0) {
      if (**((int * PTR32 *)GEN_TOP((iVar1 + 4))) != 0) {
        return *((uint *)GEN_TOP((iVar1 + 8)));
      }
    }
    else if (*((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 4))) + iVar2 * 4))) !=
             *((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 4))) - 4 + iVar2 * 4)))) {
      return *((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 4))) - 4 + iVar2 * 4))) + *((int *)GEN_TOP((iVar1 + 8)));
    }
  }
  return 0;
}

/* ref: Component::Log::LogPage::PollLoad */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bca390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbca390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  
  this_00 = this + 0x28;
  if ((*(uint *)(this + 0x28) & 0xc000000) != 0) {
    uVar1 = F_004f9c50(this_00 GEN_EDX_FWD);
    if (uVar1 == 1) {
      puVar2 = ((undefined4 *)GEN_TOP(F_004f9d70(this_00 GEN_EDX_ARG)));
      *(undefined4 * PTR32 *)(this + 0x2c) = puVar2;
      if ((puVar2 != ((undefined4 *)GEN_TOP(0x0))) && (*(int *)(this + 0x30) == 0)) {
        *(undefined4 *)(this + 0x34) = *puVar2;
        iVar3 = puVar2[1];
        *(int *)(this + 0x38) = iVar3;
        iVar3 = iVar3 - *(int *)(this + 0x34);
        piVar4 = ((int *)GEN_TOP(F_00406b90(0xc,0,0)));
        if (piVar4 == ((int *)GEN_TOP(0x0))) {
          piVar4 = ((int *)GEN_TOP(0x0));
        }
        else {
          *piVar4 = iVar3;
          piVar4[1] = (int)(puVar2 + 2);
          piVar4[2] = (int)(puVar2 + iVar3 + 2);
        }
        *(int * PTR32 *)(this + 0x30) = piVar4;
      }
      F_004fad40(this_00 GEN_EDX_ARG);
    }
  }
  return;
}

/* ref: Global::BuildLogPagePath */
GEN_OWN_GS GEN_FRAME uint GEN_STDCALL F_00bca420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbca420u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  GEN_FRAME_DECL_GS(0x368, 8, 4);
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = (*(undefined4 *)&gen_args[3]);
  GEN_COOKIE((*(uint *)(gen_frame + 0x360)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x364));
  uVar2 = F_004308f0(REFG(void * PTR32, 0x137104c) GEN_EDX_ARG);
  F_0042e170(((undefined1 *)(gen_frame + 0x208)) GEN_EDX_ARG,uVar2);
  F_0042a3a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x208)),1);
  F_0042c880(((undefined1 *)(gen_frame + 0x208)) GEN_EDX_ARG);
  if ((*(int *)&gen_args[1]) != 0 || (*(int *)&gen_args[2]) != 0) {
    F_00aca080(&(*(int *)&gen_args[1]),((undefined1 *)(gen_frame + 0x25c)),0x104);
    uVar2 = F_0042ce40(((undefined1 *)(gen_frame + 0x208)),((char *)REFP(0x11063f4)),((undefined1 *)(gen_frame + 0x25c)),uVar1);
    F_0042a1b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar2);
    F_0042c880(((undefined1 *)(gen_frame + 0x208)) GEN_EDX_ARG);
  }
  F_0042e170((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_00429fa0();
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: Component::Log::LogPage::LogPage */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00bca4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbca4f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_GS(0x268, 8, 4);
  uint uVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x260)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x264));
  (*(undefined4 *)(gen_frame + 0x0)) = param_3;
  F_004a0020(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x110640c));
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  F_004a0100(((undefined *)GEN_TOP((REFG(int, 0x137104c) + 0x11b0))) GEN_EDX_ARG,0x21,this);
  uVar3 = 1;
  uVar1 = F_00bca420(((undefined1 *)(gen_frame + 0x20c)),param_1,param_2,(*(undefined4 *)(gen_frame + 0x0)));
  F_0042a3a0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar1,uVar3);
  puVar2 = ((undefined4 *)GEN_TOP(F_004fd570(REFG(void * PTR32, 0x1375ae8) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x4)),0,0,0,0,0,5)));
  *(undefined4 *)(this + 0x28) = *puVar2;
  F_00429fa0();
  F_0042c880(((undefined1 *)(gen_frame + 0x20c)) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: Component::Log::LogPage::LogPage_00bca5d0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00bca5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(int * param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xbca5d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(int * param_6 = (int *)(uintptr_t)gen_a6;)
  GEN_FRAME_DECL_GS(0x26c, 4, 4);
  undefined4 * puVar1;
  undefined * this_00;
  int iVar2;
  undefined4 * puVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x264)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x268));
  (*(undefined4 *)(gen_frame + 0x0)) = param_3;
  F_004a0020(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x110640c));
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x34) = param_4;
  *(undefined4 *)(this + 0x38) = param_5;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  iVar6 = param_6[1] - *param_6 >> 2;
  iVar2 = (param_6[5] - param_6[4]) + iVar6 * 4 + 8;
  puVar3 = ((undefined4 *)GEN_TOP(F_00406bb0(iVar2,0,0)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar3;
  *(undefined4 * PTR32 *)(this + 0x2c) = puVar3;
  if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar3 = *(undefined4 *)(this + 0x34);
    puVar3[1] = *(undefined4 *)(this + 0x38);
    F_00c46aa0(puVar3 + 2,*param_6,iVar6 * 4);
    puVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x4)) + iVar6 + 2;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar1;
    F_00c46aa0(puVar1,param_6[4],param_6[5] - param_6[4]);
    piVar4 = ((int *)GEN_TOP(F_00406b90(0xc,0,0)));
    if (piVar4 == ((int *)GEN_TOP(0x0))) {
      piVar4 = ((int *)GEN_TOP(0x0));
    }
    else {
      *piVar4 = iVar6;
      piVar4[1] = (int)(puVar3 + 2);
      piVar4[2] = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x4));
    }
    uVar8 = *(undefined4 *)(this + 0x2c);
    uVar12 = 5;
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    *(int * PTR32 *)(this + 0x30) = piVar4;
    this_00 = REFG(void * PTR32, 0x1375ae8);
    uVar7 = 1;
    uVar5 = F_00bca420(((undefined1 *)(gen_frame + 0x210)),param_1,param_2,(*(undefined4 *)(gen_frame + 0x0)));
    uVar5 = F_0042a3a0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,uVar5,uVar7);
    F_004fd610(this_00 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),uVar5,uVar8,iVar2,uVar9,uVar10,uVar11,uVar12);
    F_00429fa0();
    F_0042c880(((undefined1 *)(gen_frame + 0x210)) GEN_EDX_ARG);
  }
  return (uint)this;
}

/* ref: Component::Log::LogPage::~LogPage */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bca760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbca760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x110640c));
  if ((*(uint *)(this + 0x28) & 0xc000000) != 0) {
    F_004fad40(this + 0x28 GEN_EDX_FWD);
  }
  if (*(int *)(this + 0x30) != 0) {
    F_00406ad0(*(int *)(this + 0x30));
    *(undefined4 *)(this + 0x30) = 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    F_00406ad0(*(int *)(this + 0x2c));
    *(undefined4 *)(this + 0x2c) = 0;
  }
  uVar1 = F_004a05c0((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Global::LogPageIndex */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bca7c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xbca7c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_3;
  return (uint)this;
}

/* ref: Global::GetEntrySize */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bca7e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbca7e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int * piVar1;
  
  if (param_2 == 0) {
    return **((uint * PTR32 *)GEN_TOP((in_ecx + 4)));
  }
  piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + param_2 * 4)));
  return *piVar1 - piVar1[-1];
}

/* ref: Global::GetEntry_00bca810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bca810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbca810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  if (param_1 == 0) {
    if (*piVar1 != 0) {
      return *((uint *)GEN_TOP(((int)this + 8)));
    }
  }
  else if (piVar1[param_1] != piVar1[param_1 - 1]) {
    return *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) - 4 + param_1 * 4))) + *((int *)GEN_TOP(((int)this + 8)));
  }
  return 0;
}

/* ref: Global::ScalarDeletingDestructor_00bca850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bca850(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbca850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: Component::Log::LogPage::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bca8a0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xbca8a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[3])REFP(0x110640c));
  if ((*(uint *)(param_1 + 0x28) & 0xc000000) != 0) {
    F_004fad40(param_1 + 0x28 GEN_EDX_FWD);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    F_00406ad0(*(int *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    F_00406ad0(*(int *)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  F_004a05c0(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00bca920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bca920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbca920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *param_1 * 0x20;
  iVar1 = *param_1 * 0x48;
  F_00c1fa10(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar1))) GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 8))) + iVar3);
  uVar2 = F_00c1fbe0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar1))) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0xc))) + iVar3);
  return uVar2;
}

/* ref: Global::ReleaseBlock */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bca970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbca970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x320080)));
  *param_1 = uVar1;
  *((int *)GEN_TOP(((int)this + 0x320084))) = *((int *)GEN_TOP(((int)this + 0x320084))) + 1;
  *((uint * PTR32 *)GEN_TOP(((int)this + 0x320080))) = param_1;
  return uVar1;
}

/* ref: Client::Graphics::Culling::CullingGridManager::AllocCell */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bca990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbca990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * _Dst;
  
  _Dst = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x320080)));
  if (_Dst == ((undefined4 *)GEN_TOP(0x0))) {
    return 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x320080))) = *_Dst;
  F_00c48350(_Dst,0,0x780);
  F_00c48350(_Dst + 0x3c0,0,0xf0);
  *((undefined2 *)GEN_TOP(((int)_Dst + 0xff2))) = (undefined2)param_1;
  *(undefined2 *)(_Dst + 0x3fc) = 0;
  *((int *)GEN_TOP(((int)this + 0x320084))) = *((int *)GEN_TOP(((int)this + 0x320084))) - 1;
  return (uint)_Dst;
}

/* ref: Client::Graphics::Culling::CullingGridManager::FindCellForBounds */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcaa00(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_2, unsigned int gen_a1), GEN_P(undefined2 * param_3, unsigned int gen_a2), GEN_P(short * param_4, unsigned int gen_a3), GEN_P(uint param_5, unsigned int gen_a4), GEN_P(uint param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xbcaa00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;)
  GEN_PIN(short * param_4 = (short *)(uintptr_t)gen_a3;)
  GEN_PIN(uint param_5 = (uint)gen_a4;)
  GEN_PIN(uint param_6 = (uint)gen_a5;)
  undefined2 uVar1;
  undefined2 uVar2;
  byte bVar3;
  float10 fVar5;
  byte bVar4;
  
  if (*((byte *)GEN_TOP((param_1 + 0x14))) != 0) {
    bVar4 = *((byte *)GEN_TOP((param_1 + 0x14)));
    do {
      bVar3 = bVar4 - 1;
      fVar5 = (float10)*((float *)GEN_TOP((param_1 + 0x54 + (uint)bVar3 * 4)));
      uVar1 = (undefined2)(int)(fVar5 * (float10)*((float *)GEN_TOP(param_5)));
      uVar2 = (undefined2)(int)((float10)*((float *)GEN_TOP((param_5 + 4))) * fVar5);
      if ((int)CONCAT22(uVar2,uVar1) ==
          (int)CONCAT22((short)(int)(fVar5 * (float10)*((float *)GEN_TOP((param_6 + 4)))),
                        (short)(int)((float10)*((float *)GEN_TOP(param_6)) * fVar5))) {
        *param_2 = uVar1;
        *param_3 = uVar2;
        *param_4 = bVar4 - 1;
        return (uint)param_3;
      }
      bVar4 = bVar3;
    } while (bVar3 != 0);
  }
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  return (uint)param_3;
}

/* ref: Client::Graphics::Culling::CullingGridManager::CullingGridManager */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcab40(GEN_P(undefined2 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcab40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined2 * in_ecx_00;
  int local_8;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x110643c)));
  *in_ecx = 0;
  *(undefined4 *)(in_ecx + 2) = 0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 6) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined1 *)(in_ecx + 10) = 8;
  in_ecx[0xb] = 0;
  *(undefined4 *)(in_ecx + 0xc) = uVar1;
  in_ecx_00 = in_ecx + 0x40;
  local_8 = 799;
  do {
    F_00c21980(in_ecx_00 GEN_EDX_FWD);
    in_ecx_00 = in_ecx_00 + 0x800;
    local_8 = local_8 - 1;
  } while (-1 < local_8);
  *(undefined4 *)(in_ecx + 0x190040) = 0;
  *(undefined4 *)(in_ecx + 0x190042) = 0;
  *(undefined4 *)(in_ecx + 0x19005a) = 0;
  *(undefined4 *)(in_ecx + 0x19005c) = 0;
  *(undefined4 *)(in_ecx + 0x19005e) = 0;
  *(undefined4 *)(in_ecx + 0x190060) = 0;
  *(undefined4 *)(in_ecx + 0x190062) = 0;
  *(undefined4 *)(in_ecx + 0x190064) = 0;
  *(undefined4 *)(in_ecx + 0x190086) = 0;
  *(undefined4 *)(in_ecx + 0x190088) = 0;
  *(undefined4 *)(in_ecx + 0x19008a) = 0;
  *(undefined * PTR32 * PTR32 *)(in_ecx + 0x190058) =
       (*(undefined * PTR32 (*)[1])REFP(0x1106438));
  *(undefined4 *)(in_ecx + 0x19008e) = 0;
  return (uint)in_ecx;
}

/* ref: Client::Graphics::Culling::CullingGridManager::~CullingGridManager */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00bcabf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xbcabf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP((in_ecx + 0x3200b0))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1106438));
  iVar1 = 799;
  do {
    F_00c21970();
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  return;
}

/* ref: Client::Graphics::Culling::CullingGridManager::SetGridSize */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00bcac30(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xbcac30u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  float fVar1;
  byte bVar2;
  uint uVar3;
  
  *((float *)GEN_TOP((param_1 + 0x18))) = param_2;
  fVar1 = ((float)GEN_TOF(((float10)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 (*)[3])REFP(0x110640c)) +
                            (uint)*((byte *)GEN_TOP((param_1 + 0x14))) * 2 + 10))) * (float10)param_2)));
  *((float *)GEN_TOP((param_1 + 0x1c))) = fVar1;
  fVar1 = (float)((float10)fVar1 * (float10)REFG(double, 0x1088108));
  *((float *)GEN_TOP((param_1 + 0x20))) = fVar1;
  *((float *)GEN_TOP((param_1 + 0x24))) = ((float)GEN_TOF(-(float10)fVar1));
  *((undefined4 *)GEN_TOP((param_1 + 0x2c))) = *((undefined4 *)GEN_TOP((param_1 + 0x20)));
  *((uint *)GEN_TOP((param_1 + 0x28))) = *((uint *)GEN_TOP((param_1 + 0x20))) ^ REFG(uint, 0x10920d0);
  *((undefined4 *)GEN_TOP((param_1 + 0x30))) = *((undefined4 *)GEN_TOP((param_1 + 0x20)));
  if (*((byte *)GEN_TOP((param_1 + 0x14))) != 0) {
    uVar3 = 0;
    do {
      bVar2 = (char)uVar3 + 1;
      fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x1c))) / (float10)(ushort)(&REFG(undefined2, 0x1106418))[(int)(uVar3)])))
      ;
      *((float *)GEN_TOP((param_1 + 0x34 + uVar3 * 4))) = fVar1;
      *((float *)GEN_TOP((param_1 + 0x54 + uVar3 * 4))) = (float)((float10)1 / (float10)fVar1);
      uVar3 = (uint)bVar2;
    } while (bVar2 < *((byte *)GEN_TOP((param_1 + 0x14))));
  }
  return 0;
}

/* ref: Client::Graphics::Culling::CullingGridManager::GetCellIndexForSphere */
GEN_OWN GEN_NOFRAME ushort GEN_THISCALL F_00bcacd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcacd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
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
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  
  fVar1 = *param_1;
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar2 = param_1[2];
  (*(float *)(gen_frame + 0x8)) = fVar2;
  fVar3 = param_1[3];
  (*(float *)(gen_frame + 0x2c)) = fVar3;
  fVar7 = (float10)fVar1;
  fVar8 = (float10)fVar3;
  fVar1 = (float)(fVar7 - fVar8);
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar9 = (float10)fVar2;
  fVar2 = (float)(fVar9 - fVar8);
  (*(float *)(gen_frame + 0x14)) = fVar2;
  fVar3 = (float)(fVar8 + fVar7);
  (*(float *)(gen_frame + 0x0)) = fVar3;
  fVar4 = (float)(fVar8 + fVar9);
  (*(float *)(gen_frame + 0x4)) = fVar4;
  fVar5 = *((float *)GEN_TOP(((int)this + 0x24)));
  (*(float *)(gen_frame + 0x2c)) = fVar5;
  fVar7 = (float10)fVar5;
  fVar8 = (float10)fVar1;
  if (fVar7 <= fVar8) {
    fVar1 = *((float *)GEN_TOP(((int)this + 0x2c)));
    (*(float *)(gen_frame + 0x2c)) = fVar1;
    fVar9 = (float10)fVar1;
    if (fVar8 <= fVar9) {
      fVar1 = *((float *)GEN_TOP(((int)this + 0x28)));
      (*(float *)(gen_frame + 0x2c)) = fVar1;
      fVar10 = (float10)fVar1;
      fVar11 = (float10)fVar2;
      if (!(fVar10 <= fVar11)) {
        return 0;
      }
      fVar1 = *((float *)GEN_TOP(((int)this + 0x30)));
      (*(float *)(gen_frame + 0x2c)) = fVar1;
      fVar12 = (float10)fVar1;
      if (!(fVar11 <= fVar12)) {
        return 0;
      }
      fVar13 = (float10)fVar3;
      if ((fVar7 <= fVar13) && (fVar13 <= fVar9)) {
        fVar7 = (float10)fVar4;
        if (!(fVar10 <= fVar7)) {
          return 0;
        }
        if (!(fVar7 <= fVar12)) {
          return 0;
        }
        fVar1 = *((float *)GEN_TOP(((int)this + 0x20)));
        (*(float *)(gen_frame + 0x2c)) = fVar1;
        fVar9 = (float10)fVar1;
        (*(float *)(gen_frame + 0x0)) = (float)(fVar9 + fVar8);
        (*(float *)(gen_frame + 0x4)) = (float)(fVar9 + fVar11);
        (*(float *)(gen_frame + 0x10)) = (float)(fVar9 + fVar13);
        (*(float *)(gen_frame + 0x14)) = (float)(fVar9 + fVar7);
        if ((*(uint *)&REFG(undefined, 0x14c59f0) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x14c59f0) = *(uint *)&REFG(undefined, 0x14c59f0) | 1;
          *(float *)&REFG(undefined, 0x14c59e0) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x14c59e0), REFG(float, 0x10920a4));
          *(float *)&REFG(undefined, 0x14c59e4) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x14c59e4), REFG(float, 0x10920a4));
        }
        (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF(((float10)*(float *)&REFG(undefined, 0x14c59e0) + (float10)(float)(fVar9 + fVar8))));
        (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)*(float *)&REFG(undefined, 0x14c59e4) + (float10)(float)(fVar9 + fVar11))));
        (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)(float)(fVar9 + fVar13) - (float10)*(float *)&REFG(undefined, 0x14c59e0))));
        (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)(float)(fVar9 + fVar7) - (float10)*(float *)&REFG(undefined, 0x14c59e4))));
        F_00bcaa00(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x24)),&(*(undefined4 *)(gen_frame + 0x28)),&(*(float *)(gen_frame + 0x2c)),(uint)&(*(float *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x10)));
        uVar6 = F_00bcbea0((*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(char)(uint)gen_fl2bits((*(float *)(gen_frame + 0x2c))));
        return (ushort)uVar6;
      }
    }
  }
  return 0;
}

/* ref: Client::Graphics::Culling::CullingGridManager::GetCellIndexForBox */
GEN_OWN GEN_NOFRAME ushort GEN_THISCALL F_00bcaee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcaee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  fVar3 = *param_1;
  fVar1 = param_1[2];
  (*(float *)(gen_frame + 0x0)) = fVar3;
  fVar4 = *((float *)GEN_TOP(((int)this + 0x24)));
  (*(float *)(gen_frame + 0x4)) = fVar1;
  fVar2 = param_1[4];
  (*(float *)(gen_frame + 0x2c)) = fVar4;
  fVar6 = (float10)fVar4;
  (*(float *)(gen_frame + 0x10)) = fVar2;
  fVar7 = (float10)fVar3;
  fVar3 = param_1[6];
  (*(float *)(gen_frame + 0x14)) = fVar3;
  if (fVar6 <= fVar7) {
    fVar4 = *((float *)GEN_TOP(((int)this + 0x2c)));
    (*(float *)(gen_frame + 0x2c)) = fVar4;
    fVar8 = (float10)fVar4;
    if (fVar7 <= fVar8) {
      fVar4 = *((float *)GEN_TOP(((int)this + 0x28)));
      (*(float *)(gen_frame + 0x2c)) = fVar4;
      fVar9 = (float10)fVar4;
      fVar10 = (float10)fVar1;
      if (fVar9 <= fVar10) {
        fVar1 = *((float *)GEN_TOP(((int)this + 0x30)));
        (*(float *)(gen_frame + 0x2c)) = fVar1;
        fVar11 = (float10)fVar1;
        if (fVar10 <= fVar11) {
          fVar12 = (float10)fVar2;
          if (!(fVar6 <= fVar12)) {
            return 0;
          }
          if (!(fVar12 <= fVar8)) {
            return 0;
          }
          fVar6 = (float10)fVar3;
          if ((fVar9 <= fVar6) && (fVar6 <= fVar11)) {
            fVar1 = *((float *)GEN_TOP(((int)this + 0x20)));
            (*(float *)(gen_frame + 0x2c)) = fVar1;
            fVar8 = (float10)fVar1;
            (*(float *)(gen_frame + 0x0)) = (float)(fVar8 + fVar7);
            (*(float *)(gen_frame + 0x4)) = (float)(fVar8 + fVar10);
            (*(float *)(gen_frame + 0x10)) = (float)(fVar8 + fVar12);
            (*(float *)(gen_frame + 0x14)) = (float)(fVar8 + fVar6);
            if ((*(uint *)&REFG(undefined, 0x14c5a10) & 1) == 0) {
              *(uint *)&REFG(undefined, 0x14c5a10) = *(uint *)&REFG(undefined, 0x14c5a10) | 1;
              *(float *)&REFG(undefined, 0x14c5a00) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x14c5a00), REFG(float, 0x10920a4));
              *(float *)&REFG(undefined, 0x14c5a04) = GEN_FLT_TO(*(float *)&REFG(undefined, 0x14c5a04), REFG(float, 0x10920a4));
            }
            (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF(((float10)*(float *)&REFG(undefined, 0x14c5a00) + (float10)(float)(fVar8 + fVar7))));
            (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)*(float *)&REFG(undefined, 0x14c5a04) + (float10)(float)(fVar8 + fVar10))));
            (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)(float)(fVar8 + fVar12) - (float10)*(float *)&REFG(undefined, 0x14c5a00))));
            (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)(float)(fVar8 + fVar6) - (float10)*(float *)&REFG(undefined, 0x14c5a04))));
            F_00bcaa00(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x24)),&(*(undefined4 *)(gen_frame + 0x28)),&(*(float *)(gen_frame + 0x2c)),(uint)&(*(float *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x10)));
            uVar5 = F_00bcbea0((*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(char)(uint)gen_fl2bits((*(float *)(gen_frame + 0x2c))));
            return (ushort)uVar5;
          }
          return 0;
        }
      }
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00bcb0b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bcb0b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(char param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xbcb0b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(char param_5 = (char)gen_a4;)
  GEN_FRAME_DECL(0x40, 0);
  undefined * this;
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  double dVar5;
  
  uVar1 = *((undefined4 *)GEN_TOP((param_4 + 0xc)));
  uVar4 = (uint)(ushort)param_2;
  this = ((undefined *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + uVar4 * 0x48)));
  (*(int *)(gen_frame + 0x24)) = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = this;
  if ((param_5 == '\0') || ((ushort)param_2 != 0)) {
    iVar3 = *((int *)GEN_TOP((param_1 + 8)));
    (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x18)) = uVar1;
    F_00c20380(this GEN_EDX_FWD,iVar3 + uVar4 * 0x20,param_4,&(*(undefined4 *)(gen_frame + 0x10)));
    dVar5 = F_00b137d0(REFG(void * PTR32, 0x1370c1c) GEN_EDX_ARG,param_3 - *((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1370c1c) + 8))) >> 4);
    fVar2 = (float)((float10)dVar5 + (float10)*(double *)&REFG(undefined, 0x10947f0));
    (*(float *)(gen_frame + 0x28)) = fVar2;
    iVar3 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x24)) + 0xc)));
    (*(float *)(gen_frame + 0x0)) = fVar2;
    (*(float *)(gen_frame + 0x4)) = fVar2;
    (*(float *)(gen_frame + 0x8)) = fVar2;
    F_00c20380((*(undefined * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG,iVar3 + uVar4 * 0x20,param_4,&(*(float *)(gen_frame + 0x0)));
  }
  uVar4 = F_00c20db0((*(undefined * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG,uVar4,param_3,param_4);
  return uVar4;
}

/* ref: FUN_00bcb180 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00bcb180(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(char param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xbcb180u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(char param_5 = (char)gen_a4;)
  GEN_FRAME_DECL(0x60, 0);
  undefined * this;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  double dVar9;
  
  uVar7 = (uint)(ushort)param_2;
  this = ((undefined *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + uVar7 * 0x48)));
  (*(int *)(gen_frame + 0x44)) = param_1;
  (*(uint *)(gen_frame + 0x40)) = uVar7;
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = this;
  if ((param_5 == '\0') || ((ushort)param_2 != 0)) {
    F_00c20480(this GEN_EDX_FWD,*((int *)GEN_TOP((param_1 + 8))) + uVar7 * 0x20,param_4);
    dVar9 = F_00b137d0(REFG(void * PTR32, 0x1370c1c) GEN_EDX_ARG,param_3 - *((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1370c1c) + 8))) >> 4);
    fVar1 = (float)((float10)dVar9 + (float10)*(double *)&REFG(undefined, 0x10947f0));
    (*(float *)(gen_frame + 0x48)) = fVar1;
    fVar2 = *param_4;
    iVar6 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x44)) + 0xc)));
    fVar3 = param_4[4];
    (*(float *)(gen_frame + 0x30)) = (float)((float10)fVar2 + (float10)fVar3);
    fVar4 = param_4[5];
    fVar5 = param_4[1];
    (*(float *)(gen_frame + 0x10)) = fVar1;
    (*(float *)(gen_frame + 0x14)) = fVar1;
    (*(float *)(gen_frame + 0x34)) = (float)((float10)fVar4 + (float10)fVar5);
    (*(float *)(gen_frame + 0x18)) = fVar1;
    (*(float *)(gen_frame + 0x38)) = (float)((float10)param_4[6] + (float10)param_4[2]);
    fVar8 = (float10)REFG(double, 0x1088108);
    fVar1 = ((float)GEN_TOF(((float10)(float)((float10)fVar2 + (float10)fVar3) * fVar8)));
    (*(float *)(gen_frame + 0x20)) = fVar1;
    fVar2 = ((float)GEN_TOF(((float10)(float)((float10)fVar4 + (float10)fVar5) * fVar8)));
    (*(float *)(gen_frame + 0x24)) = fVar2;
    fVar3 = ((float)GEN_TOF((fVar8 * (float10)(float)((float10)param_4[6] + (float10)param_4[2]))));
    (*(float *)(gen_frame + 0x28)) = fVar3;
    (*(float *)(gen_frame + 0x0)) = fVar1;
    (*(float *)(gen_frame + 0x4)) = fVar2;
    (*(float *)(gen_frame + 0x8)) = fVar3;
    F_00c20380((*(undefined * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,iVar6 + uVar7 * 0x20,&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x10)));
  }
  uVar7 = F_00c20ec0((*(undefined * PTR32 *)(gen_frame + 0x4c)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x40)),param_3,param_4);
  return uVar7;
}

/* ref: FUN_00bcb290 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcb290(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(char param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xbcb290u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(char param_5 = (char)gen_a4;)
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP(F_00c20550(param_3,param_4)));
  if ((param_5 == '\0') || ((ushort)param_2 != 0)) {
    puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + (uint)((ushort)param_2 >> 5) * 4)));
    *puVar1 = *puVar1 | 1 << ((byte)(ushort)param_2 & 0x1f);
  }
  return (uint)puVar1;
}

/* ref: FUN_00bcb2e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcb2e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(char param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xbcb2e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(char param_5 = (char)gen_a4;)
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP(F_00c205c0(param_3,param_4)));
  if ((param_5 == '\0') || ((ushort)param_2 != 0)) {
    puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + (uint)((ushort)param_2 >> 5) * 4)));
    *puVar1 = *puVar1 | 1 << ((byte)(ushort)param_2 & 0x1f);
  }
  return (uint)puVar1;
}

/* ref: Client::Graphics::Culling::CullingGridManager::GetCellNodeIndex */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00bcb330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(ushort * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcb330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a1;)
  return *((ushort *)GEN_TOP(((uint)*param_1 * 0x1000 + 0x1072 + (int)this)));
}

/* ref: FUN_00bcb350 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcb350(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(ushort * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xbcb350u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(ushort * param_2 = (ushort *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * this;
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  uint * puVar7;
  undefined4 * puVar8;
  uint uVar9;
  
  iVar3 = *((int *)GEN_TOP((REFG(int, 0x1370c1c) + 8)));
  uVar1 = *param_2;
  uVar2 = *((ushort *)GEN_TOP(((uint)uVar1 * 0x1000 + 0x1072 + param_1)));
  uVar9 = (uint)uVar2;
  (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),*((undefined1 *)GEN_TOP(((int)param_2 + 3))));
  this = ((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + uVar9 * 0x48)));
  bVar6 = F_00b133e0((char)param_2[1]);
  F_00c20740(this GEN_EDX_ARG,(uint)bVar6,(int)param_2 - iVar3 >> 4,(uint)uVar1,(*(undefined4 *)(gen_frame + 0x0)));
  uVar5 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1097b10)));
  uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090998)));
  puVar7 = ((uint *)GEN_TOP((this[1] - *this >> 2)));
  if ((int)puVar7 + (this[5] - this[4] >> 2) + (this[9] - this[8] >> 2) == 0) {
    puVar8 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 8))) + uVar9 * 0x20)));
    *puVar8 = GEN_FLT_TO(*puVar8, REFG(float, 0x1090998));
    puVar8[1] = uVar4;
    puVar8[2] = uVar4;
    puVar8[4] = uVar5;
    puVar8[5] = uVar5;
    puVar8[6] = uVar5;
    iVar3 = *((int *)GEN_TOP((param_1 + 0x10)));
    puVar8 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xc))) + uVar9 * 0x20)));
    *puVar8 = uVar4;
    puVar8[1] = uVar4;
    puVar8[2] = uVar4;
    puVar8[4] = uVar5;
    puVar8[5] = uVar5;
    puVar8[6] = uVar5;
    puVar7 = ((uint *)GEN_TOP((iVar3 + (uint)(uVar2 >> 5) * 4)));
    *puVar7 = *puVar7 & ~(1 << ((byte)uVar2 & 0x1f));
    return (uint)puVar7;
  }
  if ((param_3 == '\0') || (uVar9 != 0)) {
    puVar7 = ((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + (uint)(uVar2 >> 5) * 4)));
    *puVar7 = *puVar7 | 1 << ((byte)uVar2 & 0x1f);
  }
  return (uint)puVar7;
}

/* ref: Global::CollectVisibleObjects */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcb490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xbcb490u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_10 = (uint)*(ushort *)this;
  iVar7 = 0;
  uVar6 = 0;
  if (*(ushort *)this != 0) {
    local_8 = 0;
    do {
      iVar1 = *((int *)GEN_TOP(((int)this + 4)));
      piVar3 = ((int *)GEN_TOP((iVar1 + iVar7)));
      if (((*((int *)GEN_TOP((iVar1 + 0x14 + iVar7))) - *((int *)GEN_TOP((iVar1 + 0x10 + iVar7))) >> 2) +
           (*((int *)GEN_TOP((iVar1 + 4 + iVar7))) - *((int *)GEN_TOP((iVar1 + iVar7))) >> 2) +
           (piVar3[9] - piVar3[8] >> 2) != 0) &&
         (bVar2 = F_00b16570(*((int *)GEN_TOP(((int)this + 0xc))) + local_8 GEN_EDX_FWD,param_2), bVar2 != 0)) {
        uVar4 = 0;
        uVar5 = piVar3[1] - *piVar3 >> 2;
        if (uVar5 != 0) {
          do {
            *((undefined4 *)GEN_TOP((param_1 + uVar6 * 4))) =
                 *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar7 + *((int *)GEN_TOP(((int)this + 4)))))) + uVar4 * 4)));
            uVar4 = uVar4 + 1;
            uVar6 = uVar6 + 1;
          } while (uVar4 < uVar5);
        }
        piVar3 = ((int *)GEN_TOP((iVar7 + 0x10 + *((int *)GEN_TOP(((int)this + 4))))));
        uVar4 = piVar3[1] - *piVar3 >> 2;
        local_c = 0;
        if (uVar4 != 0) {
          do {
            *((undefined4 *)GEN_TOP((param_1 + uVar6 * 4))) =
                 *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar7 + 0x10 + *((int *)GEN_TOP(((int)this + 4)))))) + local_c * 4)));
            local_c = local_c + 1;
            uVar6 = uVar6 + 1;
          } while (local_c < uVar4);
        }
        piVar3 = ((int *)GEN_TOP((iVar7 + 0x20 + *((int *)GEN_TOP(((int)this + 4))))));
        uVar4 = piVar3[1] - *piVar3 >> 2;
        local_c = 0;
        if (uVar4 != 0) {
          do {
            *((undefined4 *)GEN_TOP((param_1 + uVar6 * 4))) =
                 *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar7 + 0x20 + *((int *)GEN_TOP(((int)this + 4)))))) + local_c * 4)));
            local_c = local_c + 1;
            uVar6 = uVar6 + 1;
          } while (local_c < uVar4);
        }
      }
      local_8 = local_8 + 0x20;
      iVar7 = iVar7 + 0x48;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
  }
  return uVar6;
}

/* ref: Global::CollectNonEmptyNodes */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00bcb5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xbcb5b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_8;
  
  local_8 = (uint)*(ushort *)this;
  iVar3 = 0;
  uVar2 = 0;
  if (*(ushort *)this != 0) {
    iVar4 = 0;
    do {
      iVar1 = *((int *)GEN_TOP(((int)this + 4)));
      if ((*((int *)GEN_TOP((iVar1 + 4 + iVar4))) - *((int *)GEN_TOP((iVar1 + iVar4))) >> 2) +
          (*((int *)GEN_TOP((iVar1 + 0x24 + iVar4))) - *((int *)GEN_TOP((iVar1 + 0x20 + iVar4))) >> 2) +
          (*((int *)GEN_TOP((iVar1 + iVar4 + 0x14))) - *((int *)GEN_TOP((iVar1 + iVar4 + 0x10))) >> 2) != 0) {
        *((int *)GEN_TOP((param_1 + uVar2 * 4))) = iVar3;
        uVar2 = uVar2 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x48;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  return uVar2;
}

