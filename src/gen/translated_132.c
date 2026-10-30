#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00b5c310 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b5c310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb5c310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00bbb060(((undefined *)GEN_TOP(((int)this + 0x9a8))) GEN_EDX_FWD,param_1);
  return;
}

/* ref: FUN_00b5c330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5c330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb5c330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00bbaea0(((undefined *)GEN_TOP(((int)this + 0x9a8))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00b5c3b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5c3b0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5c3b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00b5c3d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5c3d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5c3d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00b5c3e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5c3e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb5c3e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  *(uint *)this = param_1 & 0x3fffffff | param_2 << 0x1e;
  return (uint)this;
}

/* ref: FUN_00b5c440 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5c440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5c440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 0x27;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f1534));
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x48)));
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    *(undefined2 *)(puVar1 + 0xb) = 1;
    *((undefined1 *)GEN_TOP(((int)puVar1 + 0x2e))) = 0;
    puVar1 = puVar1 + 0x10;
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  return (uint)this;
}

/* ref: FUN_00b5c490 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5c490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb5c490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = 0;
  *((int *)GEN_TOP(((int)this + 4))) = *param_1;
  if (*param_1 != 0) {
    *((int *)GEN_TOP((*param_1 + 8))) = (int)this - 8;
  }
  *param_1 = (int)this - 8;
  return (uint)param_1;
}

/* ref: FUN_00b5c4c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b5c4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb5c4c0u, gen_a0, gen_a1, 0u, 0u);
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
    *((int *)GEN_TOP((iVar1 + 0xc))) = iVar2;
  }
  if (iVar2 != 0) {
    *((int *)GEN_TOP((iVar2 + 8))) = iVar1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::ActionTimelineManager::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5c4f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5c4f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10f153c));
  F_00b5ac70(param_1 GEN_EDX_FWD);
  REFG(undefined4, 0x14c4e84) = 0;
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b5c540 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5c540(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5c540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00b5c560 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5c560(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5c560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b5c570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5c570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(LPCRITICAL_SECTION param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb5c570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(LPCRITICAL_SECTION param_1 = (LPCRITICAL_SECTION)gen_a1;)
  *(LPCRITICAL_SECTION *)this = param_1;
  gen_imp_EnterCriticalSection(param_1);
  return (uint)this;
}

/* ref: FUN_00b5c5a0 */
GEN_OWN GEN_FRAME float10 F_00b5c5a0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xb5c5a0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00b5c5c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5c5c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5c5c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f2de8));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x20))) = 1;
  return (uint)this;
}

/* ref: FUN_00b5c5f0 */
GEN_OWN GEN_NOFRAME uint F_00b5c5f0(void)
{
  GEN_ENTER(0xb5c5f0u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = (uint)REFG(undefined4 * PTR32, 0x14c4e90);
  if (REFG(undefined4 * PTR32, 0x14c4e90) == ((undefined4 *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(F_00406b90(0x7c,0,0)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10f2de8));
      puVar1[1] = 0;
      gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 2));
      puVar1[0x1d] = 0;
      *(undefined1 *)(puVar1 + 0x1e) = 0;
      *(undefined2 *)(puVar1 + 8) = 1;
      REFG(undefined4 * PTR32, 0x14c4e90) = puVar1;
      return (uint)puVar1;
    }
    uVar2 = 0;
  }
  REFG(undefined4 * PTR32, 0x14c4e90) = ((undefined4 *)GEN_TOP(uVar2));
  return uVar2;
}

/* ref: FUN_00b5c650 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b5c650(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb5c650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    in_EAX = F_00bcd4b0(param_1 GEN_EDX_ARG);
  }
  return in_EAX;
}

/* ref: FUN_00b5c670 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b5c670(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5c670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x20))) = param_2;
  return param_2;
}

/* ref: FUN_00b5c680 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b5c680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5c680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  if (*((char *)GEN_TOP(((int)this + 0x20))) == '\0') {
    return 1;
  }
  bVar1 = F_005e1640();
  return bVar1 != 0;
}

/* ref: FUN_00b5c6a0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b5c6a0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb5c6a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = 0;
  do {
    if (*param_1 == **((int * PTR32 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x133b520) + uVar1)))) {
      return (&REFG(undefined4, 0x133b518))[(int)(iVar2 * 7)];
    }
    uVar1 = uVar1 + 0x1c;
    iVar2 = iVar2 + 1;
  } while (uVar1 < 0xd58);
  return 0xffffffff;
}

/* ref: FUN_00b5c6f0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b5c6f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb5c6f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  if ((0x79 < param_1) ||
     (puVar2 = &REFG(undefined4, 0x133b518) + param_1 * 7, (&REFG(undefined4, 0x133b518))[(int)(param_1 * 7)] != param_1)) {
    iVar3 = 0;
    uVar1 = 0;
    do {
      if (*((uint *)GEN_TOP(((int)&REFG(undefined4, 0x133b518) + uVar1))) == param_1) {
        return (uint)(&REFG(undefined4, 0x133b518) + iVar3 * 7);
      }
      uVar1 = uVar1 + 0x1c;
      iVar3 = iVar3 + 1;
    } while (uVar1 < 0xd58);
    puVar2 = ((undefined4 *)GEN_TOP(0x0));
  }
  return (uint)puVar2;
}

/* ref: FUN_00b5c750 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b5c750(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb5c750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b5c6f0(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 0xc)));
}

/* ref: FUN_00b5c770 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00b5c770(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb5c770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b5c6f0(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((byte *)GEN_TOP((uVar1 + 0x18)));
}

/* ref: FUN_00b5c790 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00b5c790(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb5c790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b5c6f0(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((byte *)GEN_TOP((uVar1 + 0x19)));
}

/* ref: FUN_00b5c7b0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b5c7b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb5c7b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b5c6f0(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((int *)GEN_TOP((uVar1 + 4))) + 0xfU & 0xfffffff0;
}

/* ref: FUN_00b5c7e0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b5c7e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb5c7e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b5c6f0(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((uVar1 + 0x14)));
}

/* ref: FUN_00b5c800 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5c800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb5c800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined * this_00;
  byte bVar1;
  
  F_00bcd470(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1);
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
  while( true ) {
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
      return 0;
    }
    bVar1 = F_00bcd530(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    if (bVar1 != 0) break;
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 8)));
  }
  return (uint)this_00;
}

/* ref: FUN_00b5c850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5c850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb5c850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  byte bVar2;
  undefined * this_00;
  
  if (param_1[1] == -1) {
    F_00bcd470(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*param_1);
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      do {
        bVar2 = F_00bcd530(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
        if (bVar2 != 0) {
          return (uint)this_00;
        }
        this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 8)));
      } while (this_00 != ((undefined *)GEN_TOP(0x0)));
      return 0;
    }
  }
  else {
    for (uVar1 = *((uint *)GEN_TOP(((int)this + 4))); uVar1 != 0; uVar1 = *((uint *)GEN_TOP((uVar1 + 8)))) {
      if (*((int *)GEN_TOP((uVar1 + 0x50))) == param_1[1]) {
        return uVar1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00b5c8c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b5c8c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb5c8c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  byte bVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  
  iVar3 = 0;
  *((undefined1 *)GEN_TOP((param_1 + 0x20))) = 0;
  if (*((char *)GEN_TOP((*param_2 + (int)param_2))) == '\0') {
    F_005ecfa0();
  }
  else {
    if (param_3 == '\0') {
      iVar2 = 0;
      if ((*(byte *)(param_2 + 0x11) & 2) == 0) {
        iVar2 = param_2[1];
      }
      else {
        iVar3 = param_2[1];
      }
      F_005f9b10(((char *)GEN_TOP((*param_2 + (int)param_2))),iVar2,iVar3,param_2 + 0xf);
    }
    F_005f32e0(param_2 + 2);
    *((undefined1 *)GEN_TOP((param_1 + 0x20))) = 1;
  }
  bVar1 = *((byte *)GEN_TOP((param_1 + 0x20)));
  *((undefined1 *)GEN_TOP((param_1 + 0x21))) = 1;
  piVar4 = param_2;
  piVar5 = ((int *)GEN_TOP((param_1 + 0x24)));
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 - 1) {
    *piVar5 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  }
  return bVar1;
}

/* ref: FUN_00b5c930 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b5c930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb5c930u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  char * pcVar2;
  bool bVar3;
  
  pcVar2 = ((char *)GEN_TOP((*(uint *)&gen_args[0])));
  if ((*(uint *)&gen_args[0]) == 0) {
    pcVar2 = ((char *)GEN_TOP((param_1 + 0x44)));
  }
  if (*pcVar2 != '\0') {
    if (*(int *)(pcVar2 + 8) == 0) {
      F_00b7c110(&REFG(undefined, 0x133e5c0) GEN_EDX_FWD,0,
                   ((float)GEN_TOF(((float10)*(int *)(pcVar2 + 0x18) * (float10)*(double *)&REFG(undefined, 0x10c3f40)))));
    }
    else {
      F_00b7c0d0(&REFG(undefined, 0x133e5c0) GEN_EDX_ARG,0,(uint)(byte)pcVar2[8],
                   ((float)GEN_TOF(((float10)*(int *)(pcVar2 + 0x18) * (float10)*(double *)&REFG(undefined, 0x10c3f40)))));
    }
  }
  iVar1 = REFG(int, 0x137104c);
  if ((pcVar2[2] == '\0') ||
     (bVar3 = GEN_ISNAN(*(float *)(pcVar2 + 0x10)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114)), (*(undefined1 *)((char *)&(*(uint *)&gen_args[0]) + 0)) = 1,
     bVar3 == (bVar3 || *(float *)(pcVar2 + 0x10) == *(float *)&REFG(undefined, 0x1088114)))) {
    (*(undefined1 *)((char *)&(*(uint *)&gen_args[0]) + 0)) = 0;
  }
  if (pcVar2[1] != '\0') {
    if (-1 < *(int *)(pcVar2 + 0xc)) {
      F_0071fa20(REFG(int, 0x137104c) + 0x1210 GEN_EDX_ARG,*(int *)(pcVar2 + 0xc) / 0x3c,*(int *)(pcVar2 + 0xc) % 0x3c
                   ,(undefined1)(*(uint *)&gen_args[0]));
      return;
    }
    *((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x1248))) = 0;
    *((undefined4 *)GEN_TOP((iVar1 + 0x124c))) = 0;
    if (*((char *)GEN_TOP((iVar1 + 0x1230))) != '\0') {
      *((undefined1 *)GEN_TOP((iVar1 + 0x1230))) = 0;
    }
  }
  return;
}

/* ref: FUN_00b5ca00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5ca00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5ca00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x74))) != 0) {
    piVar1 = ((int *)GEN_TOP(F_0052fba0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x74))))));
    uVar2 = 0;
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG);
      if ((char)uVar2 == '\0') {
        uVar2 = F_0049c160(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f4))) GEN_EDX_ARG);
        if (uVar2 == 0x100) {
          uVar2 = 0;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x68))))(piVar1 GEN_EDX_ARG,uVar2 + 1);
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,0,0,1);
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00b5ca70 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b5ca70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5ca70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  if (*((int *)GEN_TOP(((int)this + 0x74))) != 0) {
    piVar1 = ((int *)GEN_TOP(F_0052fba0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x74))))));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x44))))(piVar1 GEN_EDX_ARG);
      iVar4 = 0;
      if (0 < (int)uVar2) {
        do {
          piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x24))))(piVar1 GEN_EDX_ARG,iVar4)));
          if (piVar3 == ((int *)GEN_TOP(0x0))) {
            return 1;
          }
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)uVar2);
      }
    }
  }
  return 0;
}

/* ref: FUN_00b5cad0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5cad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb5cad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  byte bVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  uint * puVar4;
  uint uVar5;
  byte * pbVar6;
  int iVar7;
  byte * pbVar8;
  bool bVar9;
  int local_8;
  
  if ((*((int *)GEN_TOP(((int)this + 0x74))) != 0) &&
     (piVar2 = ((int *)GEN_TOP(F_0052fba0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x74)))))),
     piVar2 != ((int *)GEN_TOP(0x0)))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x44))))(piVar2 GEN_EDX_ARG);
    local_8 = 0;
    if (0 < (int)uVar3) {
      do {
        this_00 = ((undefined *)GEN_TOP(F_0052fbd0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_ARG,
                                       *((undefined4 *)GEN_TOP(((int)this + 0x74))),local_8,0,0)));
        if (this_00 != ((undefined *)GEN_TOP(0x0))) {
          puVar4 = ((uint *)GEN_TOP(F_00cb0910(this_00 GEN_EDX_ARG,0)));
          uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x60))))(piVar2 GEN_EDX_ARG);
          pbVar8 = param_1;
          if (uVar5 < 3) {
            pbVar6 = ((byte *)GEN_TOP((*puVar4 + 4)));
          }
          else {
            pbVar6 = ((byte *)GEN_TOP(((*puVar4 & 0xffffff) + (int)puVar4)));
          }
          do {
            bVar1 = *pbVar8;
            bVar9 = bVar1 < *pbVar6;
            if (bVar1 != *pbVar6) {
LAB_00b5cb90: ;
              iVar7 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_00b5cb95;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar8[1];
            bVar9 = bVar1 < pbVar6[1];
            if (bVar1 != pbVar6[1]) goto LAB_00b5cb90;
            pbVar8 = pbVar8 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_00b5cb95: ;
          if (iVar7 == 0) {
            puVar4 = ((uint *)GEN_TOP(F_00cb0910(this_00 GEN_EDX_ARG,1)));
            uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x60))))(piVar2 GEN_EDX_ARG);
            if (2 < uVar3) {
              return (*puVar4 & 0xffffff) + (int)puVar4;
            }
            return *puVar4 + 4;
          }
        }
        local_8 = local_8 + 1;
        if ((int)uVar3 <= local_8) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

/* ref: FUN_00b5cbf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5cbf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5cbf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x74))) != 0) {
    piVar1 = ((int *)GEN_TOP(F_0052fba0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x74))))));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG);
    }
  }
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x74))) != 0) {
    uVar2 = F_00406ad0(*((int *)GEN_TOP(((int)this + 0x74))));
    *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  }
  return uVar2;
}

/* ref: FUN_00b5cc40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5cc40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5cc40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x74))) != 0) {
    piVar1 = ((int *)GEN_TOP(F_0052fba0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x74))))));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG);
    }
  }
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x74))) != 0) {
    uVar2 = F_00406ad0(*((int *)GEN_TOP(((int)this + 0x74))));
    *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  }
  return uVar2;
}

/* ref: FUN_00b5cc90 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b5cc90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb5cc90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  if (*((char *)GEN_TOP(((int)this + 0x21))) != '\0') {
    if ((*((char *)GEN_TOP(((int)this + 0x20))) != '\0') && (bVar1 = F_005e1640(), bVar1 == 0)) {
      return;
    }
    F_00b5c930(this GEN_EDX_ARG,0,0);
    *((undefined1 *)GEN_TOP((REFG(int, 0x1370c1c) + 5))) = 1;
    *((undefined1 *)GEN_TOP(((int)this + 0x21))) = 0;
  }
  return;
}

/* ref: FUN_00b5ccd0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b5ccd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb5ccd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0xa64, 12, 4);
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xa5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa60));
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 8);
  (*(undefined4 *)(gen_frame + 0x4)) = param_2;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  this_00 = ((undefined *)GEN_TOP(F_00b5c850(this GEN_EDX_ARG,param_1)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  else {
    F_00bcd3c0(this_00 GEN_EDX_ARG);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    uVar2 = *((uint *)GEN_TOP(((int)this_00 + 0x5c))) >> 1;
    if (((uVar2 & 1) == 0) || ((uVar2 & 1) == 0)) {
      bVar1 = F_00bcd860(this_00 GEN_EDX_ARG);
      if (bVar1 == 0) {
        uVar2 = F_00bcd800(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
        if (uVar2 != 0) {
          F_00b5c440(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
          uVar2 = F_00bcdf00(uVar2,(*(undefined4 *)(gen_frame + 0x4)));
          F_00bcd4b0(this_00 GEN_EDX_ARG);
          return uVar2;
        }
      }
    }
    F_00bcd4b0(this_00 GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_00b5cdb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5cdb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5cdb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0x60,0,0)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00bcd630(this_00 GEN_EDX_ARG);
  }
  piVar1 = ((int *)GEN_TOP((uVar3 + 4)));
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  if (*((int *)GEN_TOP(((int)this + 4))) == 0) {
    *piVar1 = 0;
    *((undefined4 *)GEN_TOP((uVar3 + 8))) = 0;
    *((uint *)GEN_TOP(((int)this + 4))) = uVar3;
    return uVar3;
  }
  do {
    iVar4 = iVar2;
    iVar2 = *((int *)GEN_TOP((iVar4 + 8)));
  } while (*((int *)GEN_TOP((iVar4 + 8))) != 0);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    *((uint *)GEN_TOP((iVar4 + 8))) = uVar3;
    *piVar1 = iVar4;
    *((undefined4 *)GEN_TOP((uVar3 + 8))) = 0;
    return uVar3;
  }
  *((undefined4 *)GEN_TOP((iVar4 + 8))) = 0;
  *(int *)&REFG(undefined, 0x0) = iVar4;
  *((undefined4 *)GEN_TOP((uVar3 + 8))) = 0;
  return uVar3;
}

/* ref: FUN_00b5ce20 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b5ce20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb5ce20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  iVar2 = *((int *)GEN_TOP((param_1 + 8)));
  if (iVar1 == 0) {
    *((int *)GEN_TOP(((int)this + 4))) = iVar2;
  }
  else {
    *((int *)GEN_TOP((iVar1 + 8))) = iVar2;
  }
  if (iVar2 != 0) {
    *((int *)GEN_TOP((iVar2 + 4))) = iVar1;
  }
  return 0;
}

/* ref: FUN_00b5ce50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5ce50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0xb5ce50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  unsigned int gen_args[5];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  memcpy(&gen_args[4], &gen_a5, sizeof gen_a5);
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int * piVar5;
  undefined * pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar3 = (*(undefined4 *)&gen_args[2]);
  piVar5 = (*(int * PTR32 *)&gen_args[0]);
  switch((unsigned int)(uintptr_t)((*(undefined4 *)&gen_args[2]))) {
  case 0: ;
  case 7: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x158,0,0)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00be32d0(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
LAB_00b5cec2: ;
      piVar5 = ((int *)GEN_TOP(0x0));
      goto LAB_00b5ce84;
    }
    piVar5 = ((int *)GEN_TOP(F_00be32d0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 1: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0xa4,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00be71f0(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00be71f0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 2: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x8c,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00be6c60(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00be6c60((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 3: ;
  case 4: ;
  case 5: ;
  case 8: ;
  case 0xc: ;
  case 0x17: ;
  case 0x19: ;
  case 0x1a: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x90,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00be2ce0(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00be2ce0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 6: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0xb8,0,0)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00be4f60(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00be4f60((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 9: ;
  case 0x27: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x160,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00be2420(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00be2420((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 10: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00be6940(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00be6940((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0xb: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00be6790(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00be6790((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0xd: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      piVar5 = ((int *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (piVar5 != ((int *)GEN_TOP(0x0))) {
        F_00bd2d80(piVar5 GEN_EDX_ARG);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f19ac));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    *(*(int * PTR32 *)&gen_args[0]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f19ac));
    break;
  case 0xe: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00be2190(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00be2190((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0xf: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      piVar5 = ((int *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (piVar5 != ((int *)GEN_TOP(0x0))) {
        F_00bd2d80(piVar5 GEN_EDX_ARG);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f1acc));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    *(*(int * PTR32 *)&gen_args[0]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f1acc));
    break;
  case 0x10: ;
  case 0x1b: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      piVar5 = ((int *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (piVar5 != ((int *)GEN_TOP(0x0))) {
        F_00bd2d80(piVar5 GEN_EDX_ARG);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f1bec));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    *(*(int * PTR32 *)&gen_args[0]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f1bec));
    break;
  case 0x11: ;
  case 0x1c: ;
  case 0x3a: ;
  case 0x3b: ;
  case 0x4b: ;
  case 0x68: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x94,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00b5e720(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00b5e720((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x12: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x8c,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00b5e750(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00b5e750((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x13: ;
  case 0x58: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      piVar5 = ((int *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (piVar5 != ((int *)GEN_TOP(0x0))) {
        F_00bd2d80(piVar5 GEN_EDX_ARG);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f1f4c));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    *(*(int * PTR32 *)&gen_args[0]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f1f4c));
    break;
  case 0x14: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      piVar5 = ((int *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (piVar5 != ((int *)GEN_TOP(0x0))) {
        F_00bd2d80(piVar5 GEN_EDX_ARG);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f206c));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    *(*(int * PTR32 *)&gen_args[0]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f206c));
    break;
  case 0x15: ;
  case 0x16: ;
  case 0x32: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x8c,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00b5e7e0(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00b5e7e0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x18: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      piVar5 = ((int *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (piVar5 != ((int *)GEN_TOP(0x0))) {
        F_00bd2d80(piVar5 GEN_EDX_ARG);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f22ac));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    *(*(int * PTR32 *)&gen_args[0]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f22ac));
    break;
  case 0x1d: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x160,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00be1aa0(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00be1aa0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x1e: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0xc0,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00be0fd0(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00be0fd0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x1f: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00be06a0(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00be06a0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x20: ;
  case 0x4a: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x8c,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00b5e840(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00b5e840((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x21: ;
  case 0x37: ;
  case 0x49: ;
  case 0x6a: ;
  case 0x72: ;
  case 0x75: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      piVar5 = ((int *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (piVar5 != ((int *)GEN_TOP(0x0))) {
        F_00bd2d80(piVar5 GEN_EDX_ARG);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f24ec));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    *(*(int * PTR32 *)&gen_args[0]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f24ec));
    break;
  case 0x22: ;
  case 0x38: ;
  case 0x6b: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x8c,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00be0340(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00be0340((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x23: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x90,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bdfdc0(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bdfdc0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x24: ;
  case 0x25: ;
  case 0x26: ;
  case 0x34: ;
  case 0x35: ;
  case 0x36: ;
  case 0x67: ;
  case 0x6c: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0xa8,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bde810(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bde810((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x28: ;
  case 0x2a: ;
  case 0x50: ;
  case 0x60: ;
  case 0x6d: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      piVar5 = ((int *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (piVar5 != ((int *)GEN_TOP(0x0))) {
        F_00bd2d80(piVar5 GEN_EDX_ARG);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f260c));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    *(*(int * PTR32 *)&gen_args[0]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f260c));
    break;
  case 0x29: ;
  case 0x33: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x90,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00b5e900(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00b5e900((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x2b: ;
  case 0x2c: ;
  case 0x2d: ;
  case 0x2e: ;
  case 0x2f: ;
  case 0x30: ;
  case 0x31: ;
  case 0x44: ;
  case 0x45: ;
  case 0x46: ;
  case 0x71: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      piVar5 = ((int *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (piVar5 != ((int *)GEN_TOP(0x0))) {
        F_00bd2d80(piVar5 GEN_EDX_ARG);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f272c));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    *(*(int * PTR32 *)&gen_args[0]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f272c));
    break;
  case 0x39: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x8c,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bddc60(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bddc60((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x3c: ;
  case 0x3d: ;
  case 0x3e: ;
  case 0x3f: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      piVar5 = ((int *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (piVar5 != ((int *)GEN_TOP(0x0))) {
        F_00bd2d80(piVar5 GEN_EDX_ARG);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f296c));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    *(*(int * PTR32 *)&gen_args[0]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f296c));
    break;
  case 0x40: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x94,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bdd350(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bdd350((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x41: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      piVar5 = ((int *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (piVar5 != ((int *)GEN_TOP(0x0))) {
        F_00bd2d80(piVar5 GEN_EDX_ARG);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f2a8c));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    *(*(int * PTR32 *)&gen_args[0]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f2a8c));
    break;
  case 0x42: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x8c,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00b5e9e0(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00b5e9e0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x43: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      piVar5 = ((int *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (piVar5 != ((int *)GEN_TOP(0x0))) {
        F_00bd2d80(piVar5 GEN_EDX_ARG);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f2ccc));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    *(*(int * PTR32 *)&gen_args[0]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f2ccc));
    break;
  case 0x47: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      piVar5 = ((int *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (piVar5 != ((int *)GEN_TOP(0x0))) {
        F_00bd2d80(piVar5 GEN_EDX_ARG);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f2f14));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    *(*(int * PTR32 *)&gen_args[0]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f2f14));
    break;
  case 0x48: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      piVar5 = ((int *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (piVar5 != ((int *)GEN_TOP(0x0))) {
        F_00bd2d80(piVar5 GEN_EDX_ARG);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f3154));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    *(*(int * PTR32 *)&gen_args[0]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f3154));
    break;
  case 0x4c: ;
  case 0x4d: ;
  case 0x4e: ;
  case 0x4f: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0xbc,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bdcc00(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bdcc00((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x51: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bdc930(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bdc930((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  default: ;
    return 0;
  case 0x53: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bdc7c0(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bdc7c0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x54: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bdc660(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bdc660((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x55: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bdc5b0(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bdc5b0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x56: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bdc380(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bdc380((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x57: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x8c,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bdc040(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bdc040((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x59: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bdbfa0(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bdbfa0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x5a: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      piVar5 = ((int *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (piVar5 != ((int *)GEN_TOP(0x0))) {
        F_00bd2d80(piVar5 GEN_EDX_ARG);
        *piVar5 = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f2df4));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    F_00bd2d80((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    *(*(int * PTR32 *)&gen_args[0]) = (int)(*(undefined * PTR32 (*)[70])REFP(0x10f2df4));
    break;
  case 0x5b: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bdbf00(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bdbf00((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x5c: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x8c,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bdbbc0(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bdbbc0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x5d: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0xa8,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bdb820(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bdb820((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x5e: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x8c,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bdb580(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bdb580((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x5f: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0xa8,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bdb250(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bdb250((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x61: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x90,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bdadc0(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bdadc0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x62: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bda880(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bda880((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 99: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bda4d0(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bda4d0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 100: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bda2d0(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bda2d0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x65: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bda080(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bda080((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x66: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bd9cb0(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bd9cb0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x69: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bd9b40(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bd9b40((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x6e: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bd9a50(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bd9a50((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x6f: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bd98d0(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bd98d0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x70: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0xa0,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bde070(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bde070((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x73: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bd9720(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bd9720((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x74: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bd95f0(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bd95f0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x76: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x8c,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bd8ac0(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bd8ac0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x77: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x8c,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bd86c0(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bd86c0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x78: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x90,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bd83b0(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bd83b0((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x79: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x88,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bd7d30(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bd7d30((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
    break;
  case 0x7a: ;
    if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
      pvVar6 = ((undefined *)GEN_TOP(F_00406b90(0x8c,0,0x10)));
      if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(F_00bd7a90(pvVar6 GEN_EDX_ARG)));
        goto LAB_00b5ce84;
      }
      goto LAB_00b5cec2;
    }
    piVar5 = ((int *)GEN_TOP(F_00bd7a90((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG)));
  }
  *((undefined1 *)GEN_TOP(((int)piVar5 + 0x16))) = 1;
LAB_00b5ce84: ;
  piVar5[1] = (*(int *)&gen_args[3]);
  uVar4 = F_00b5c6f0((*(undefined4 *)&gen_args[2]));
  if (uVar4 == 0) {
    uVar8 = 0;
    uVar7 = 0;
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar1 = *((undefined1 *)GEN_TOP((uVar4 + 0x19)));
    uVar2 = *((undefined1 *)GEN_TOP((uVar4 + 0x18)));
    uVar8 = *((undefined4 *)GEN_TOP((uVar4 + 0x14)));
    uVar7 = *((undefined4 *)GEN_TOP((uVar4 + 0xc)));
  }
  (*(undefined4 *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[2]), 1, 3),uVar2);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[0]), 1, 3),uVar1)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x30))))
            (piVar5 GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),uVar3,uVar7,uVar8,(*(undefined4 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[0]),(undefined4)gen_fl2bits((*(float *)&gen_args[4])));
  return (uint)piVar5;
}

/* ref: FUN_00b5e020 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b5e020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb5e020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  uint uVar2;
  char * pcVar3;
  
  if (param_1 != ((char *)GEN_TOP(0x0))) {
    uVar2 = F_0052fba0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,param_1);
    if (uVar2 != 0) {
      pcVar3 = param_1;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (*((int *)GEN_TOP(((int)this + 0x74))) != 0) {
        F_00406ad0(*((int *)GEN_TOP(((int)this + 0x74))));
        *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
      }
      uVar2 = F_00406bb0(pcVar3 + (1 - (int)(param_1 + 1)),0,0);
      *((uint *)GEN_TOP(((int)this + 0x74))) = uVar2;
      F_00c49908(uVar2,pcVar3 + (1 - (int)(param_1 + 1)),param_1);
      F_00b5ca00(this GEN_EDX_ARG);
    }
  }
  return;
}

/* ref: FUN_00b5e0a0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b5e0a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5e0a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f2de8));
  if (*((int *)GEN_TOP(((int)this + 0x74))) != 0) {
    piVar1 = ((int *)GEN_TOP(F_0052fba0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x74))))));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG);
    }
  }
  if (*((int *)GEN_TOP(((int)this + 0x74))) != 0) {
    F_00406ad0(*((int *)GEN_TOP(((int)this + 0x74))));
    *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  }
  REFG(undefined4, 0x14c4e90) = 0;
  return (uint)(gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 8)));
}

/* ref: FUN_00b5e100 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b5e100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5e100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  if (*((char *)GEN_TOP(((int)this + 0x78))) == '\0') {
    if (*((int *)GEN_TOP(((int)this + 0x74))) != 0) {
      piVar1 = ((int *)GEN_TOP(F_0052fba0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x74))))));
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG);
      }
    }
    if (*((int *)GEN_TOP(((int)this + 0x74))) != 0) {
      F_00406ad0(*((int *)GEN_TOP(((int)this + 0x74))));
      *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
    }
    *((undefined1 *)GEN_TOP(((int)this + 0x78))) = 1;
  }
  return;
}

/* ref: FUN_00b5e150 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5e150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5e150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x74))) != 0) {
    piVar1 = ((int *)GEN_TOP(F_0052fba0(*((undefined * PTR32 *)GEN_TOP((REFG(int, 0x137104c) + 0x25d8))) GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 0x74))))));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG);
    }
  }
  if (*((int *)GEN_TOP(((int)this + 0x74))) != 0) {
    F_00406ad0(*((int *)GEN_TOP(((int)this + 0x74))));
    *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  }
  uVar2 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)this)))(this,1);
  return uVar2;
}

/* ref: FUN_00b5e1a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5e1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb5e1a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  byte bVar1;
  undefined * this_00;
  
  (*(undefined4 *)(gen_frame + 0x8)) = 0x63757462;
  F_00bcd470(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1);
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
  do {
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
LAB_00b5e1e1: ;
      this_00 = ((undefined *)GEN_TOP(F_00b5cdb0(this GEN_EDX_ARG)));
      F_00bcd930(this_00 GEN_EDX_ARG,param_1,&(*(undefined4 *)(gen_frame + 0x8)),param_2);
LAB_00b5e1fa: ;
      F_00bcd3c0(this_00 GEN_EDX_ARG);
      return (uint)this_00;
    }
    bVar1 = F_00bcd530(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    if (bVar1 != 0) {
      if (this_00 != ((undefined *)GEN_TOP(0x0))) goto LAB_00b5e1fa;
      goto LAB_00b5e1e1;
    }
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 8)));
  } while( true );
}

/* ref: FUN_00b5e210 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5e210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb5e210u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined4 * puVar1;
  undefined * this_00;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[0]);
  this_00 = ((undefined *)GEN_TOP(F_00b5c850(this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]))));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    this_00 = ((undefined *)GEN_TOP(F_00b5cdb0(this GEN_EDX_ARG)));
    F_004ff300(&(*(undefined4 * PTR32 *)&gen_args[0]) GEN_EDX_ARG,4);
    F_00bcd9c0(this_00 GEN_EDX_ARG,*puVar1,puVar1[1],&(*(undefined4 * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  }
  F_00bcd3c0(this_00 GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return (uint)this_00;
}

/* ref: FUN_00b5e280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5e280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb5e280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[5];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  undefined * this_00;
  
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x8)) = (LPCRITICAL_SECTION)((int)this + 8);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  uVar1 = (*(undefined4 *)&gen_args[1]);
  F_00bcd470(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 4)));
  do {
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
LAB_00b5e2cc: ;
      this_00 = ((undefined *)GEN_TOP(F_00b5cdb0(this GEN_EDX_ARG)));
      if ((*(int *)&gen_args[0]) == 0) {
        F_00bcda90(this_00 GEN_EDX_ARG,uVar1,(*(undefined4 *)&gen_args[3]),(char)(*(undefined4 *)&gen_args[4]));
      }
      else {
        (*(undefined4 *)&gen_args[1]) = 0x746d62;
        F_004ff300(&(*(int *)&gen_args[0]) GEN_EDX_ARG,4);
        F_00bcda50(this_00 GEN_EDX_ARG,uVar1,&(*(int *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[3]));
      }
LAB_00b5e312: ;
      iVar2 = (*(int *)&gen_args[2]);
      if (((*(int *)&gen_args[2]) != 0) && (bVar3 = F_00bcd430(this_00 GEN_EDX_ARG,(*(int *)&gen_args[2])), bVar3 == 0)) {
        F_00bcd580(this_00 GEN_EDX_ARG,iVar2);
      }
      F_00bcd3c0(this_00 GEN_EDX_ARG);
      gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x8)));
      return (uint)this_00;
    }
    bVar3 = F_00bcd530(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    if (bVar3 != 0) {
      if (this_00 != ((undefined *)GEN_TOP(0x0))) goto LAB_00b5e312;
      goto LAB_00b5e2cc;
    }
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 8)));
  } while( true );
}

/* ref: FUN_00b5e350 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5e350(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(float param_8, float gen_a7))
{
  GEN_ENTER(0xb5e350u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(float param_8 = (float)gen_a7;)
  char cVar1;
  undefined1 uVar2;
  int * piVar3;
  uint uVar4;
  undefined1 uVar5;
  char cVar6;
  
  piVar3 = ((int *)GEN_TOP(F_00b5ce50(param_1 GEN_EDX_FWD,0,param_2,param_3,param_4,param_8)));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    uVar4 = F_00b5c6f0(param_3);
    if (uVar4 == 0) {
      cVar6 = '\0';
      cVar1 = '\0';
      uVar5 = 0;
      uVar2 = 0;
    }
    else {
      cVar6 = *((char *)GEN_TOP((uVar4 + 0x18)));
      cVar1 = *((char *)GEN_TOP((uVar4 + 0x19)));
      uVar5 = (undefined1)*((undefined4 *)GEN_TOP((uVar4 + 0xc)));
      uVar2 = (undefined1)*((undefined4 *)GEN_TOP((uVar4 + 0x14)));
    }
    piVar3[0xb] = param_3;
    *((undefined1 *)GEN_TOP(((int)piVar3 + 0x29))) = uVar5;
    *((undefined1 *)GEN_TOP(((int)piVar3 + 0x2a))) = uVar2;
    if (cVar6 == '\0') {
      *(ushort *)(piVar3 + 0x1f) = *(ushort *)(piVar3 + 0x1f) & 0xfffb;
    }
    else {
      *(ushort *)(piVar3 + 0x1f) = *(ushort *)(piVar3 + 0x1f) | 4;
    }
    if (cVar1 == '\0') {
      *(ushort *)(piVar3 + 0x1f) = *(ushort *)(piVar3 + 0x1f) & 0xfff7;
    }
    else {
      *(ushort *)(piVar3 + 0x1f) = *(ushort *)(piVar3 + 0x1f) | 8;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x44))))(piVar3 GEN_EDX_ARG,param_5,param_6,1);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x40))))(piVar3 GEN_EDX_ARG,param_2,(undefined4)gen_fl2bits(param_8),param_7);
    return (uint)piVar3;
  }
  return 0;
}

/* ref: FUN_00b5e420 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b5e420(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5e420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((in_ecx + 0x50))) == param_2;
}

/* ref: FUN_00b5e440 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5e440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5e440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f19ac));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf6 */
GEN_OWN GEN_NOFRAME unsigned int F_00b5e460(void)
{
  GEN_ENTER(0xb5e460u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf7 */
GEN_OWN GEN_NOFRAME byte F_00b5e470(void)
{
  GEN_ENTER(0xb5e470u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf8 */
GEN_OWN GEN_NOFRAME unsigned int F_00b5e480(void)
{
  GEN_ENTER(0xb5e480u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf13 */
GEN_OWN GEN_NOFRAME byte F_00b5e490(void)
{
  GEN_ENTER(0xb5e490u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf14 */
GEN_OWN GEN_NOFRAME unsigned int F_00b5e4a0(void)
{
  GEN_ENTER(0xb5e4a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf17 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b5e4b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb5e4b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf18 */
GEN_OWN GEN_NOFRAME unsigned int F_00b5e4c0(void)
{
  GEN_ENTER(0xb5e4c0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf19 */
GEN_OWN GEN_NOFRAME byte F_00b5e4d0(void)
{
  GEN_ENTER(0xb5e4d0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf20 */
GEN_OWN GEN_NOFRAME unsigned int F_00b5e4e0(void)
{
  GEN_ENTER(0xb5e4e0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf24 */
GEN_OWN GEN_NOFRAME unsigned int F_00b5e4f0(void)
{
  GEN_ENTER(0xb5e4f0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf25 */
GEN_OWN GEN_NOFRAME unsigned int F_00b5e500(void)
{
  GEN_ENTER(0xb5e500u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf26 */
GEN_OWN GEN_NOFRAME unsigned int F_00b5e510(void)
{
  GEN_ENTER(0xb5e510u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf27 */
GEN_OWN GEN_NOFRAME unsigned int F_00b5e520(void)
{
  GEN_ENTER(0xb5e520u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf29 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b5e530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb5e530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf30 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b5e540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb5e540u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf31 */
GEN_OWN GEN_NOFRAME unsigned int F_00b5e550(void)
{
  GEN_ENTER(0xb5e550u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf32 */
GEN_OWN GEN_NOFRAME unsigned int F_00b5e560(void)
{
  GEN_ENTER(0xb5e560u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf35 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b5e570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb5e570u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf36 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b5e580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb5e580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf37 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b5e590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb5e590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf41 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_00b5e5a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5e5a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x38)));
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf42 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_00b5e5b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5e5b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x48)));
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf43 */
GEN_OWN GEN_NOFRAME float10 GEN_THISCALL F_00b5e5c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5e5c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x4c)));
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf44 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00b5e5d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5e5d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x4c))) - (float10)*((float *)GEN_TOP((in_ecx + 0x48)))))));
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf55 */
GEN_OWN GEN_NOFRAME unsigned int F_00b5e5f0(void)
{
  GEN_ENTER(0xb5e5f0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf56 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b5e600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb5e600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf61 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b5e610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb5e610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf63 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b5e620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb5e620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf64 */
GEN_OWN GEN_NOFRAME byte F_00b5e630(void)
{
  GEN_ENTER(0xb5e630u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf65 */
GEN_OWN GEN_NOFRAME byte F_00b5e640(void)
{
  GEN_ENTER(0xb5e640u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf66 */
GEN_OWN GEN_NOFRAME uint F_00b5e650(void)
{
  GEN_ENTER(0xb5e650u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf67 */
GEN_OWN GEN_NOFRAME byte F_00b5e660(void)
{
  GEN_ENTER(0xb5e660u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf68 */
GEN_OWN GEN_NOFRAME double F_00b5e670(void)
{
  GEN_ENTER(0xb5e670u, 0u, 0u, 0u, 0u);
  return 0.0;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf69 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b5e680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb5e680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00b5e6a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5e6a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5e6a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f1acc));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf28 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b5e6c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb5e6c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf34 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b5e6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb5e6d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: FUN_00b5e6f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5e6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5e6f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f1bec));
  return (uint)this;
}

/* ref: FUN_00b5e720 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5e720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5e720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f1d0c));
  *((undefined1 *)GEN_TOP(((int)this + 0x90))) = 1;
  return (uint)this;
}

/* ref: FUN_00b5e750 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5e750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5e750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f1e2c));
  *((undefined1 *)GEN_TOP(((int)this + 0x88))) = 0;
  return (uint)this;
}

/* ref: FUN_00b5e780 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5e780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5e780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f1f4c));
  return (uint)this;
}

/* ref: FUN_00b5e7b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5e7b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5e7b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f206c));
  return (uint)this;
}

/* ref: FUN_00b5e7e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5e7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5e7e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f218c));
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  return (uint)this;
}

/* ref: FUN_00b5e810 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5e810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5e810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f22ac));
  return (uint)this;
}

/* ref: FUN_00b5e840 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5e840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5e840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f23cc));
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  return (uint)this;
}

/* ref: FUN_00b5e870 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5e870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5e870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f24ec));
  return (uint)this;
}

/* ref: FUN_00b5e8a0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5e8a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5e8a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f260c));
  return (uint)this;
}

/* ref: FUN_00b5e8d0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5e8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5e8d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f272c));
  return (uint)this;
}

/* ref: FUN_00b5e900 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5e900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5e900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f284c));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::SoundSeClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5e920(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5e920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd6720(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b5e950 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5e950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5e950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f296c));
  return (uint)this;
}

/* ref: FUN_00b5e980 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5e980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5e980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f2a8c));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::CutVFXTriggerClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5e9b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5e9b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[70])REFP(0x10f2a8c));
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b5e9e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5e9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5e9e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f2bac));
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::RandomSyncClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5ea10(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5ea10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[70])REFP(0x10f2bac));
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b5ea40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5ea40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5ea40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f2ccc));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::CutActionClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5ea70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5ea70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[70])REFP(0x10f2ccc));
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b5eaa0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5eaa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5eaa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f2df4));
  return (uint)this;
}

/* ref: FUN_00b5eac0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5eac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5eac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f2f14));
  return (uint)this;
}

/* ref: FUN_00b5eae0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5eae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5eae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f3034));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::BaseClip::vf33 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b5eb00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb5eb00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::System::Scheduler::Clip::PinningClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5eb20(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5eb20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd77f0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::Clip::AutoShakeBaseClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5eb50(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5eb50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b5eba0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5eba0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5eba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return in_ecx + (param_2 >> 4) * 2;
}

/* ref: FUN_00b5ebb0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b5ebb0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb5ebb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return 1 << ((byte)param_1 & 0xf);
}

/* ref: FUN_00b5ebd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5ebd0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5ebd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00b5ebf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5ebf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5ebf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Clip::ActivePassiveScaleClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5ec60(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5ec60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::Clip::VariableClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5ec90(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5ec90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::Clip::SetPosClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5ecc0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5ecc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::Clip::ShowHideClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5ecf0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5ecf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::Clip::BgSetupClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5ed20(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5ed20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::Clip::LocalVFXTriggerClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5ed50(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5ed50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::Clip::GlobalVFXTriggerClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5ed80(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5ed80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::Clip::PostEffectClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5edb0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5edb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::Clip::CameraShakeClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5ede0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5ede0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::Clip::DefaultMotionClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5ee10(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5ee10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::Clip::NonSerialClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5ee40(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5ee40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::Clip::SystemClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5ee70(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5ee70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::Clip::SharedGroupClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5eea0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5eea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::Clip::SoundClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5eed0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5eed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b5ef00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5ef00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5ef00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00bd2d80(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[70])REFP(0x10f3154));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Clip::NonAutoShakeClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5ef30(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5ef30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::Clip::EyeBlinkClip::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5ef60(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5ef60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00bd2e60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b5ef90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5ef90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb5ef90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  ushort * puVar1;
  
  puVar1 = ((ushort *)GEN_TOP(((int)this + (param_1 >> 4) * 2)));
  *puVar1 = *puVar1 | 1 << ((byte)param_1 & 0xf);
  return (uint)this;
}

/* ref: FUN_00b5efc0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5efc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb5efc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  ushort * puVar1;
  
  puVar1 = ((ushort *)GEN_TOP(((int)this + (param_1 >> 4) * 2)));
  *puVar1 = *puVar1 & ~(1 << ((byte)param_1 & 0xf));
  return (uint)this;
}

/* ref: FUN_00b5eff0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5eff0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb5eff0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  ushort * puVar1;
  ushort uVar2;
  
  uVar2 = 1 << ((byte)param_2 & 0xf);
  puVar1 = ((ushort *)GEN_TOP((param_1 + (param_2 >> 4) * 2)));
  if (param_3 != '\0') {
    *puVar1 = *puVar1 | uVar2;
    return param_1;
  }
  *puVar1 = *puVar1 & ~uVar2;
  return param_1;
}

/* ref: FUN_00b5f030 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5f030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb5f030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (*param_1 == 0) {
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *param_1 = (int)this - 4;
    return 0;
  }
  do {
    iVar2 = iVar1;
    iVar1 = *((int *)GEN_TOP((iVar2 + 8)));
  } while (*((int *)GEN_TOP((iVar2 + 8))) != 0);
  if (this != ((undefined *)GEN_TOP(0x0))) {
    *((uint *)GEN_TOP((iVar2 + 8))) = (int)this - 4U;
    *(int *)this = iVar2;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    return (int)this - 4U;
  }
  *((undefined4 *)GEN_TOP((iVar2 + 8))) = 0;
  *(int *)&REFG(undefined, 0x0) = iVar2;
  *(undefined4 *)&REFG(undefined, 0x4) = 0;
  return 0;
}

/* ref: FUN_00b5f080 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b5f080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb5f080u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00b5f0b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5f0b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(char param_5, unsigned int gen_a4), GEN_P(char param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xb5f0b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(char param_5 = (char)gen_a4;)
  GEN_PIN(char param_6 = (char)gen_a5;)
  *((undefined4 *)GEN_TOP((param_1 + 0x2c))) = param_2;
  *((undefined1 *)GEN_TOP((param_1 + 0x29))) = param_3;
  *((undefined1 *)GEN_TOP((param_1 + 0x2a))) = param_4;
  if (param_5 == '\0') {
    *((ushort *)GEN_TOP((param_1 + 0x7c))) = *((ushort *)GEN_TOP((param_1 + 0x7c))) & 0xfffb;
  }
  else {
    *((ushort *)GEN_TOP((param_1 + 0x7c))) = *((ushort *)GEN_TOP((param_1 + 0x7c))) | 4;
  }
  if (param_6 != '\0') {
    *((ushort *)GEN_TOP((param_1 + 0x7c))) = *((ushort *)GEN_TOP((param_1 + 0x7c))) | 8;
    return CONCAT31((int3)((uint)param_2 >> 8),param_4);
  }
  *((ushort *)GEN_TOP((param_1 + 0x7c))) = *((ushort *)GEN_TOP((param_1 + 0x7c))) & 0xfff7;
  return 0xfff7;
}

/* ref: Client::System::Scheduler::Resource::SchedulerResourceManagement::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5f100(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5f100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b5e0a0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b5f130 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5f130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5f130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10f3270));
  F_004a00e0(this GEN_EDX_FWD);
  uVar1 = F_004a05c0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Client::System::Scheduler::ConstraintTask::vf1 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b5f150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb5f150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (REFG(void * PTR32, 0x1375b00) != ((undefined *)GEN_TOP(0x0))) {
    F_0052eef0(REFG(void * PTR32, 0x1375b00) GEN_EDX_FWD);
  }
  return;
}

/* ref: FUN_00b5f170 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5f170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5f170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_004a0020(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10f3270));
  F_004a0100(((undefined *)GEN_TOP((REFG(int, 0x137104c) + 0x11b0))) GEN_EDX_ARG,0x17,this);
  return (uint)this;
}

/* ref: Client::System::Scheduler::ConstraintTask::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5f1a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5f1a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10f3270));
  F_004a00e0(param_1 GEN_EDX_FWD);
  F_004a05c0(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b5f1d0 */
GEN_OWN GEN_FRAME uint F_00b5f1d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb5f1d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((&REFG(undefined4, 0x133c9c8))[(int)(uVar1 * 2)] == param_1) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x2c);
  return 0xffffffff;
}

/* ref: FUN_00b5f210 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5f210(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5f210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined4 *)GEN_TOP((in_ecx + 4))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 8))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xc))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x10))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x14))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x18))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x20))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x24))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x28))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x30))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x34))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x38))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x40))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x44))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x48))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x50))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x54))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x58))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x60))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 100))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x68))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x70))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x74))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x78))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x80))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x84))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x88))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x90))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x94))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x98))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xa0))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xa4))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xac))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xb0))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xbc))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xc0))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xc4))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 200))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xcc))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xd0))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xd4))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xd8))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xdc))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xe0))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xe4))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xe8))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xec))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xf0))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xf4))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xf8))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0xfc))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x100))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x104))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x108))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x10c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x110))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x114))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x118))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x11c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x120))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x124))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x128))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 300))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x130))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x134))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x138))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x13c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x140))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x144))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x148))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x14c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x150))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x154))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x158))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x15c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x160))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x164))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x168))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x16c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x170))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x174))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x178))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x17c))) = 0;
  *((undefined4 *)GEN_TOP((in_ecx + 0x180))) = 0;
  return 0;
}

/* ref: FUN_00b5f400 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5f400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb5f400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (int)param_1 >> 0x1c;
  uVar2 = param_1 & 0xfffffff;
  uVar1 = 0;
  if (iVar3 == 1) {
    uVar1 = *((uint *)GEN_TOP(((int)this + uVar2 * 4 + 4)));
  }
  else {
    if (iVar3 == 2) {
      return *((uint *)GEN_TOP(((int)this + uVar2 * 4 + 0x84)));
    }
    if (iVar3 == 3) {
      return *((uint *)GEN_TOP(((int)this + uVar2 * 4 + 0x104)));
    }
  }
  return uVar1;
}

/* ref: FUN_00b5f440 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5f440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb5f440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = (int)param_1 >> 0x1c;
  uVar3 = param_1 & 0xfffffff;
  if (iVar1 == 1) {
    *((uint *)GEN_TOP(((int)this + uVar3 * 4 + 4))) = param_2;
    uVar2 = param_2;
  }
  else {
    if (iVar1 == 2) {
      *((uint *)GEN_TOP(((int)this + uVar3 * 4 + 0x84))) = param_2;
      return param_2;
    }
    uVar2 = iVar1 - 3;
    if (uVar2 == 0) {
      *((uint *)GEN_TOP(((int)this + uVar3 * 4 + 0x104))) = param_2;
      return param_2;
    }
  }
  return uVar2;
}

/* ref: FUN_00b5f490 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b5f490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb5f490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  char cVar1;
  byte bVar2;
  char * pcVar3;
  uint uVar4;
  
  pcVar3 = ((char *)GEN_TOP(((int)this + 0x184)));
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00a022c0(*(undefined4 *)this GEN_EDX_FWD,((char *)GEN_TOP(((int)this + 0x184))),
                       (int)pcVar3 - ((int)this + 0x185),&REFG(undefined, 0x10f343c),0);
  if (uVar4 == 0) {
    uVar4 = F_00a02470(*(undefined * PTR32 *)this GEN_EDX_ARG,0,1,0);
    if (uVar4 == 0) {
      F_00a019d0(*(undefined4 *)this GEN_EDX_ARG);
      bVar2 = F_00a01d80(*(undefined * PTR32 *)this GEN_EDX_ARG,param_1);
      return bVar2 == 1;
    }
  }
  return 0;
}

/* ref: FUN_00b5f520 */
GEN_OWN GEN_NOFRAME uint F_00b5f520(void)
{
  GEN_ENTER(0xb5f520u, 0u, 0u, 0u, 0u);
  int * in_ecx;
  uint uVar1;
  
  in_ecx = ((int *)GEN_TOP(F_00406b90(0x284,0,0)));
  if (in_ecx != ((int *)GEN_TOP(0x0))) {
    *in_ecx = REFG(int, 0x137104c) + 0x2620;
    uVar1 = F_00b5f210(in_ecx GEN_EDX_ARG);
    REFG(undefined4, 0x14c4ea0) = ((undefined4)(uint)(in_ecx));
    return uVar1;
  }
  REFG(undefined4, 0x14c4ea0) = 0;
  return 0;
}

/* ref: FUN_00b5f560 */
GEN_OWN GEN_NOFRAME uint F_00b5f560(void)
{
  GEN_ENTER(0xb5f560u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = 0;
  if (REFG(int, 0x14c4ea0) != 0) {
    uVar1 = F_00406ad0(REFG(int, 0x14c4ea0));
    REFG(int, 0x14c4ea0) = 0;
  }
  return uVar1;
}

/* ref: FUN_00b5f580 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b5f580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb5f580u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  byte bVar1;
  double dVar2;
  byte * pbVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  byte * pbVar8;
  byte bVar9;
  byte * _DstBuf;
  gen_size32 _SizeInBytes;
  char * _Format;
  int local_c;
  int local_8;
  
  F_00c49908((int)this + 0x184,0x100,((char *)REFP(0x10f3428)));
  _DstBuf = ((byte *)GEN_TOP(((int)this + 0x18b)));
  local_c = 0;
  if (param_1[1] < 1) {
    return 1;
  }
  local_8 = 0;
LAB_00b5f5c0: ;
  iVar4 = *param_1 + local_8;
  _SizeInBytes = (int)this + (0x284 - (int)_DstBuf);
  uVar6 = 0;
LAB_00b5f5d6: ;
  if ((&REFG(undefined4, 0x133c9c8))[(int)(uVar6 * 2)] != *((int *)GEN_TOP((iVar4 + (int)param_1)))) goto code_r0x00b5f5df;
  if (-1 < (int)uVar6) {
    pbVar8 = (&REFG(undefined * PTR32, 0x133c9cc))[(int)(uVar6 * 2)];
    bVar5 = (byte)uVar6 & 0x1f;
    pbVar3 = _DstBuf;
    bVar5 = (byte)(0xa7d5f5b3 >> (-bVar5 & 0x1f)) | -0x4d << bVar5;
    do {
      _DstBuf = pbVar3;
      bVar1 = *pbVar8;
      bVar9 = bVar1 ^ bVar5;
      *_DstBuf = bVar9;
      pbVar8 = pbVar8 + 1;
      pbVar3 = _DstBuf + 1;
      bVar5 = bVar1;
    } while (bVar9 != 0);
    goto switchD_00b5f5f8_caseD_3;
  }
  goto code_r0x00b5f5f1;
code_r0x00b5f5df: ;
  uVar6 = uVar6 + 1;
  if (0x2b < uVar6) goto code_r0x00b5f5f1;
  goto LAB_00b5f5d6;
code_r0x00b5f5f1: ;
  switch((unsigned int)(uintptr_t)(*((int *)GEN_TOP((iVar4 + (int)param_1))))) {
  case 1: ;
    iVar7 = 0;
    if (0 < *((int *)GEN_TOP(((int)param_1 + iVar4 + 4)))) {
      do {
        *_DstBuf = 0x28;
        iVar7 = iVar7 + 1;
        _DstBuf = _DstBuf + 1;
      } while (iVar7 < *((int *)GEN_TOP(((int)param_1 + iVar4 + 4))));
    }
    *_DstBuf = 0;
    break;
  case 2: ;
    iVar7 = 0;
    if (0 < *((int *)GEN_TOP(((int)param_1 + iVar4 + 4)))) {
      do {
        *_DstBuf = 0x29;
        iVar7 = iVar7 + 1;
        _DstBuf = _DstBuf + 1;
      } while (iVar7 < *((int *)GEN_TOP(((int)param_1 + iVar4 + 4))));
    }
    *_DstBuf = 0;
    break;
  case 0x11: ;
    _Format = "%d";
    goto LAB_00b5f6fc;
  case 0x12: ;
    dVar2 = (double)*((float *)GEN_TOP(((int)param_1 + iVar4 + 8)));
    F_00c472af(_DstBuf,_SizeInBytes,&REFG(undefined, 0x10f3434),(int)(ulonglong)gen_d2bits(dVar2),
               (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
    break;
  case 0x13: ;
    if ((*((int *)GEN_TOP(((int)param_1 + iVar4 + 4))) == 0x10000013) && (param_2 != ((int *)GEN_TOP(0x0)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_ARG);
    }
    _Format = "%d";
LAB_00b5f6fc: ;
    F_00c472af((char *)_DstBuf,_SizeInBytes,_Format);
  }
switchD_00b5f5f8_caseD_3: ;
  bVar5 = *_DstBuf;
  while (bVar5 != 0) {
    _DstBuf = _DstBuf + 1;
    bVar5 = *_DstBuf;
  }
  local_8 = local_8 + 0xc;
  local_c = local_c + 1;
  if (param_1[1] <= local_c) {
    return 1;
  }
  goto LAB_00b5f5c0;
}

/* ref: FUN_00b5f770 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b5f770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb5f770u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  byte bVar1;
  
  F_00b5f580(this GEN_EDX_FWD,param_1,param_3);
  bVar1 = F_00b5f490(this GEN_EDX_ARG,param_2);
  return bVar1;
}

/* ref: FUN_00b5f7a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b5f7a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb5f7a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  byte bVar1;
  
  F_00b5f580(this GEN_EDX_FWD,param_1,param_3);
  bVar1 = F_00b5f490(this GEN_EDX_ARG,param_2);
  return bVar1;
}

/* ref: FUN_00b5f7d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b5f7d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb5f7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  char cVar1;
  int iVar2;
  char * pcVar3;
  uint uVar4;
  uint uVar5;
  
  F_00b5f580(this GEN_EDX_FWD,param_1,param_3);
  pcVar3 = ((char *)GEN_TOP(((int)this + 0x184)));
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00a022c0(*(undefined4 *)this GEN_EDX_ARG,((char *)GEN_TOP(((int)this + 0x184))),
                       (int)pcVar3 - ((int)this + 0x185),&REFG(undefined, 0x10f3444),0);
  if ((uVar4 == 0) && (uVar4 = F_00a02470(*(undefined * PTR32 *)this GEN_EDX_ARG,0,1,0), uVar4 == 0)) {
    F_00a019d0(*(undefined4 *)this GEN_EDX_ARG);
    iVar2 = *(int *)this;
    uVar5 = F_00b9a9b0(*((undefined4 *)GEN_TOP((iVar2 + 8))),0xffffffff);
    uVar4 = param_3;
    if (uVar5 != 0) {
      uVar4 = F_00b9ab70(*((undefined4 *)GEN_TOP((iVar2 + 8))),0xffffffff);
    }
    F_00b9a760(*((undefined4 *)GEN_TOP((iVar2 + 8))),0xfffffffe);
    if (uVar5 != 0) {
      if (param_2 != ((uint *)GEN_TOP(0x0))) {
        *param_2 = uVar4;
      }
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b5f880 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5f880(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5f880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return param_1;
}

/* ref: FUN_00b5f8a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5f8a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb5f8a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(int *)this + param_1 * 0xc + (int)this;
}

/* ref: FUN_00b5f8c0 */
GEN_OWN GEN_FRAME float10 F_00b5f8c0(GEN_P(float param_1, float gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5f8c0u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  float10 fVar1;
  
  fVar1 = F_00c51c40((uint)(ulonglong)gen_d2bits((double)param_1),
                       (int)((ulonglong)gen_d2bits((double)param_1) >> 0x20),&(*(double *)(gen_frame + 0x0)));
  *param_2 = (float)(*(double *)(gen_frame + 0x0));
  return (float10)(float)fVar1;
}

/* ref: FUN_00b5f8f0 */
GEN_OWN GEN_FRAME float10 F_00b5f8f0(GEN_P(float param_1, float gen_a0), GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5f8f0u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  float10 fVar1;
  
  fVar1 = F_00c51c40((uint)(ulonglong)gen_d2bits((double)param_1),
                       (int)((ulonglong)gen_d2bits((double)param_1) >> 0x20),&(*(double *)(gen_frame + 0x0)));
  *param_2 = (float)(*(double *)(gen_frame + 0x0));
  return (float10)(float)fVar1;
}

/* ref: FUN_00b5f920 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5f920(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5f920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x18))) = param_2;
  return param_2;
}

/* ref: FUN_00b5f930 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5f930(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5f930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x1c))) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Base::SchedulerState::vf2 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b5fa40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5fa40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0xe)));
}

/* ref: Client::System::Scheduler::Base::SchedulerState::vf3 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b5fa50(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5fa50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0xf)));
}

/* ref: Client::System::Scheduler::Base::SchedulerState::vf4 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b5fa60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5fa60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x10)));
}

/* ref: Client::System::Scheduler::Base::SchedulerState::vf5 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b5fa70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5fa70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x11)));
}

/* ref: Client::System::Scheduler::Base::SchedulerState::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5fac0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5fac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10f34d4));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b5fb20 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b5fb20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5fb20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x39))) = param_2;
  return param_2;
}

/* ref: FUN_00b5fb70 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b5fb70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5fb70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x144))) = param_2;
  return param_2;
}

/* ref: FUN_00b5fb80 */
GEN_OWN GEN_FRAME float10 F_00b5fb80(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xb5fb80u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: Client::System::Scheduler::Base::CutSceneController::vf4 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b5fba0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5fba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((char *)GEN_TOP((in_ecx + 0x10))) != '\0';
}

/* ref: FUN_00b5fbb0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b5fbb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5fbb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x24))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
    if ((char)uVar1 == '\0') {
      if ((*((char *)GEN_TOP(((int)this + 0xc))) == '\0') &&
         ((*((char *)GEN_TOP(((int)this + 10))) == '\0' || (*((char *)GEN_TOP(((int)this + 0xe1))) != '\0')))) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b5fbf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5fbf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb5fbf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00b5e1a0(REFG(void * PTR32, 0x14c4e90) GEN_EDX_FWD,param_1,1);
    *((uint *)GEN_TOP(((int)this + 0x24))) = uVar1;
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    *((undefined2 *)GEN_TOP(((int)this + 0x14))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x138))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x10000;
    *((undefined1 *)GEN_TOP(((int)this + 0xe1))) = 1;
  }
  return uVar1;
}

/* ref: FUN_00b5fc40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b5fc40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb5fc40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined * this_00;
  byte bVar1;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x24)));
  if (param_1 == 0) {
    return this_00 == ((undefined *)GEN_TOP(0x0));
  }
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  F_00bcd470(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1);
  bVar1 = F_00bcd530(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  return bVar1;
}

/* ref: FUN_00b5fca0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5fca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xb5fca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))
                      (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00b5fcc0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b5fcc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5fcc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((*((char *)GEN_TOP((in_ecx + 0xc))) == '\0') && (*((char *)GEN_TOP((in_ecx + 0x10))) == '\0')) {
    *((undefined1 *)GEN_TOP((in_ecx + 0xc))) = 0;
    *((undefined1 *)GEN_TOP((in_ecx + 0xd))) = 0;
    *((undefined1 *)GEN_TOP((in_ecx + 0xe))) = 0;
    *((undefined1 *)GEN_TOP((in_ecx + 0xf))) = 0;
    *((undefined1 *)GEN_TOP((in_ecx + 0x10))) = 0;
    *((undefined1 *)GEN_TOP((in_ecx + 0x12))) = 0;
    *((undefined1 *)GEN_TOP((in_ecx + 0x13))) = 0;
    *((undefined1 *)GEN_TOP((in_ecx + 0x14))) = 0;
    *((undefined1 *)GEN_TOP((in_ecx + 10))) = 1;
    *((undefined1 *)GEN_TOP((in_ecx + 0xb))) = 0;
    *((undefined1 *)GEN_TOP((in_ecx + 0xe1))) = 0;
  }
  return 0;
}

/* ref: FUN_00b5fd00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5fd00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb5fd00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 == 0) {
    return CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),*((int *)GEN_TOP(((int)this + 0xf4))) != 0);
  }
  return (uint)((*((uint *)GEN_TOP(((int)this + 0xf4))) & 1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1)) != 0);
}

/* ref: FUN_00b5fd40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b5fd40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb5fd40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0052f030(REFG(undefined4, 0x1375b00) GEN_EDX_FWD,param_1,0,0);
  *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x13c))) + param_2 * 4))) = uVar1;
  return 1;
}

/* ref: FUN_00b5fd70 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5fd70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5fd70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  
  for (iVar2 = *((int *)GEN_TOP(((int)this + 0x140))); iVar2 != 0; iVar2 = iVar2 - 1) {
    F_0052f1c0(REFG(void * PTR32, 0x1375b00) GEN_EDX_FWD,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x13c))) - 4 + iVar2 * 4))));
  }
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x13c))) != 0) {
    uVar1 = F_00406ad0(*((int *)GEN_TOP(((int)this + 0x13c))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x13c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x140))) = 0;
  return uVar1;
}

/* ref: FUN_00b5fdc0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b5fdc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5fdc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x140)));
  do {
    if (iVar3 == 0) {
      return 1;
    }
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x13c))) - 4 + iVar3 * 4)));
    iVar3 = iVar3 - 1;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x68))))(piVar1 GEN_EDX_FWD);
  } while ((char)uVar2 != '\0');
  return 0;
}

/* ref: FUN_00b5fe00 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b5fe00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5fe00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x140)));
  while (iVar2 != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x13c))) - 4 + iVar2 * 4)));
    iVar2 = iVar2 - 1;
    if ((((piVar1[0x1b] != 2) || (*((char *)GEN_TOP(((int)piVar1 + 0x96))) == '\0')) &&
        (this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x4c))))(piVar1 GEN_EDX_FWD))), this_00 != ((undefined *)GEN_TOP(0x0)))) &&
       (*((char *)GEN_TOP(((int)this_00 + 0x188))) != '\x01')) {
      if ((*((byte *)GEN_TOP(((int)this_00 + 0x8f))) & 0x40) != 0) {
        *((byte *)GEN_TOP(((int)this_00 + 0x2dd3))) = *((byte *)GEN_TOP(((int)this_00 + 0x2dd3))) | 0x10;
      }
      F_00aa0090(this_00 GEN_EDX_ARG,0,0);
      F_00b5aeb0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)this_00 + 0x88))),0);
    }
  }
  return;
}

/* ref: FUN_00b5fe80 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00b5fe80(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb5fe80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  F_0052ee60(REFG(void * PTR32, 0x1375b00) GEN_EDX_ARG,param_1);
  return 1;
}

/* ref: FUN_00b5fea0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b5fea0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb5fea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x2c))) = param_2;
  return 1;
}

/* ref: FUN_00b5feb0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b5feb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5feb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x2c)));
}

/* ref: FUN_00b5fec0 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00b5fec0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb5fec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  F_005f6710(param_1);
  return 1;
}

/* ref: FUN_00b5fee0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b5fee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb5fee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x16))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10f34f0));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  F_00be89e0(((undefined *)GEN_TOP(((int)this + 0x3c))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x100))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x104))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x108))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x110))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x112))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x138))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x13c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x140))) = 0;
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x9c))),0,0x40);
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 0;
  *((int *)GEN_TOP(((int)this + 0xfc))) = REFG(int, 0x14c4ea4);
  if (0 < REFG(int, 0x14c4ea4) + 1) {
    REFG(int, 0x14c4ea4) = REFG(int, 0x14c4ea4) + 1;
    return (uint)this;
  }
  REFG(int, 0x14c4ea4) = 0;
  return (uint)this;
}

/* ref: FUN_00b60000 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b60000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb60000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  undefined4 * this_00;
  uint uVar2;
  
  this_00 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20)));
  while (this_00 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar1 = ((undefined4 *)GEN_TOP(this_00[7]));
    F_00beabc0(this_00 GEN_EDX_FWD);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*this_00)))(this_00 GEN_EDX_ARG,1);
    this_00 = puVar1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  F_00b5fd70(this GEN_EDX_ARG);
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x24))) != 0) {
    uVar2 = F_00b5c650(*((int *)GEN_TOP(((int)this + 0x24))));
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::CutSceneController::vf1 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b60050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb60050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  bool bVar1;
  uint uVar2;
  int * piVar3;
  
  if (this[8] != (undefined1)0x0) {
    return 1;
  }
  piVar3 = *(int * PTR32 *)(this + 0x20);
  bVar1 = true;
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    do {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_FWD);
      if ((char)uVar2 == '\0') {
        bVar1 = false;
      }
      piVar3 = ((int *)GEN_TOP(piVar3[7]));
    } while (piVar3 != ((int *)GEN_TOP(0x0)));
    if (bVar1) {
      *(undefined2 *)(this + 8) = 1;
      if (*(int *)(this + 4) != 0) {
        *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 9))) = 1;
      }
      *(undefined4 *)(this + 0xc) = 0;
      *(undefined4 *)(this + 0x10) = 0;
      *(undefined2 *)(this + 0x14) = 0;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b600c0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b600c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb600c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  uint uVar1;
  byte bVar2;
  
  bVar2 = 1;
  for (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x20))); this_00 != ((undefined *)GEN_TOP(0x0));
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0x1c)))) {
    uVar1 = F_00bea630(this_00 GEN_EDX_FWD,param_1);
    if ((char)uVar1 == '\0') {
      bVar2 = 0;
    }
  }
  return bVar2;
}

/* ref: FUN_00b600f0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b600f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb600f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  byte bVar1;
  byte bVar2;
  
  bVar2 = 1;
  for (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x20))); this_00 != ((undefined *)GEN_TOP(0x0));
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0x1c)))) {
    bVar1 = F_00bea660(this_00 GEN_EDX_FWD,param_1,param_2);
    if (bVar1 == 0) {
      bVar2 = 0;
    }
  }
  return bVar2;
}

/* ref: FUN_00b60130 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b60130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb60130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x24)));
  if ((this_00 != ((undefined *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this + 0x28))) == 0)) {
    uVar2 = *((uint *)GEN_TOP(((int)this_00 + 0x5c))) >> 1;
    if (((uVar2 & 1) == 0) || ((uVar2 & 1) == 0)) {
      bVar1 = F_00bcd860(this_00 GEN_EDX_FWD);
      if (bVar1 == 0) {
        uVar2 = F_00bcd800(this_00 GEN_EDX_ARG,param_1);
        return uVar2;
      }
    }
    else if (*((char *)GEN_TOP(((int)this + 10))) != '\0') {
      *((undefined1 *)GEN_TOP(((int)this + 10))) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00b60180 */
GEN_OWN_GS GEN_FRAME unsigned int GEN_THISCALL F_00b60180(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb60180u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_GS(0x34, 12, 4);
  float fVar1;
  char cVar2;
  double dVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined * pvVar7;
  bool bVar8;
  float10 fVar9;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30));
  F_00be85e0(((undefined *)GEN_TOP(((int)param_1 + 0x3c))) GEN_EDX_FWD);
  F_00be8830(((undefined *)GEN_TOP(((int)param_1 + 0x3c))) GEN_EDX_ARG);
  for (pvVar7 = *((undefined * PTR32 *)GEN_TOP(((int)param_1 + 0x20))); pvVar7 != ((undefined *)GEN_TOP(0x0));
      pvVar7 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar7 + 0x1c)))) {
    F_00bea7c0(pvVar7 GEN_EDX_ARG);
  }
  if (*((char *)GEN_TOP(((int)param_1 + 0xea))) != '\0') {
    bVar8 = true;
    for (pvVar7 = *((undefined * PTR32 *)GEN_TOP(((int)param_1 + 0x20))); pvVar7 != ((undefined *)GEN_TOP(0x0));
        pvVar7 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar7 + 0x1c)))) {
      uVar5 = F_00bea630(pvVar7 GEN_EDX_ARG,0x1a);
      if ((char)uVar5 == '\0') {
        bVar8 = false;
      }
    }
    pvVar7 = *((undefined * PTR32 *)GEN_TOP(((int)param_1 + 0x20)));
    *((bool *)GEN_TOP(((int)param_1 + 0xea))) = !bVar8;
    for (; pvVar7 != ((undefined *)GEN_TOP(0x0)); pvVar7 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar7 + 0x1c)))) {
      F_00bea660(pvVar7 GEN_EDX_ARG,0x13,&REFG(undefined, 0x13056c0));
    }
  }
  if ((*((int *)GEN_TOP(((int)param_1 + 0xf4))) == 0) &&
     ((GEN_ISNAN(param_2) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
      ((GEN_ISNAN(param_2) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || param_2 == *(float *)&REFG(undefined, 0x1088114)))) {
    (*(float *)(gen_frame + 0x0)) = *((float *)GEN_TOP(((int)param_1 + 0xf0)));
    fVar9 = F_00c51c40((uint)(ulonglong)
                               gen_d2bits((double)(float)((float10)(*(float *)(gen_frame + 0x0)) + (float10)param_2)),
                         (int)((ulonglong)
                               gen_d2bits((double)(float)((float10)(*(float *)(gen_frame + 0x0)) + (float10)param_2)) >>
                              0x20),&(*(double *)(gen_frame + 0x24)));
    *((float *)GEN_TOP(((int)param_1 + 0xf0))) = (float)fVar9;
    fVar1 = (float)(*(double *)(gen_frame + 0x24));
    (*(ushort *)(gen_frame + 0x4)) = gen_x87_cw | 0xc00;
    gen_set_x87_cw((unsigned short)(*(ushort *)(gen_frame + 0x4)));
    (*(double *)(gen_frame + 0x24)) = gen_bits2d((longlong)TRUNC((float10)fVar1));
    dVar3 = (*(double *)(gen_frame + 0x24));
    (*(float *)((char *)&(*(double *)(gen_frame + 0x24)) + 0)) = gen_bits2f((uint)(longlong)TRUNC((float10)fVar1));
    gen_set_x87_cw((unsigned short)gen_x87_cw);
    cVar2 = *((char *)GEN_TOP(((int)param_1 + 0xea)));
    iVar6 = (int)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x24)) + 0)));
    while ((*(double *)(gen_frame + 0x24)) = dVar3, cVar2 == '\0') {
      if (iVar6 == 0) {
        iVar6 = -1;
        if (*((char *)GEN_TOP(((int)param_1 + 0xea))) == '\0') goto LAB_00b60414;
        break;
      }
      *((int *)GEN_TOP(((int)param_1 + 0xec))) = *((int *)GEN_TOP(((int)param_1 + 0xec))) + 1;
      iVar6 = iVar6 - 1;
      if ((iVar6 != 0) ||
         (bVar8 = GEN_ISNAN(*((float *)GEN_TOP(((int)param_1 + 0xf0)))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114)),
         (*(byte *)(gen_frame + 0xb)) = 0,
         bVar8 == (bVar8 || *((float *)GEN_TOP(((int)param_1 + 0xf0))) == *(float *)&REFG(undefined, 0x1088114)))) {
        (*(byte *)(gen_frame + 0xb)) = 1;
      }
      for (pvVar7 = *((undefined * PTR32 *)GEN_TOP(((int)param_1 + 0x20))); pvVar7 != ((undefined *)GEN_TOP(0x0));
          pvVar7 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar7 + 0x1c)))) {
        F_00bea660(pvVar7 GEN_EDX_ARG,0x15,&REFG(undefined, 0x13056c0));
      }
      pvVar7 = *((undefined * PTR32 *)GEN_TOP(((int)param_1 + 0x20)));
      (*(uint *)(gen_frame + 0x1c)) = 0;
      (*(float *)((char *)&(*(double *)(gen_frame + 0x24)) + 0)) = 0.0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x24)) + 4)) = 0;
      (*(float *)((char *)&(*(double *)(gen_frame + 0x24)) + 0)) = (float)((float10)1 - (float10)(*(float *)(gen_frame + 0x0)));
      (*(double *)(gen_frame + 0x24)) = gen_bits2d((ulonglong)(uint)gen_fl2bits((float)((float10)1 - (float10)(*(float *)(gen_frame + 0x0)))));
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 0)) = (*(byte *)(gen_frame + 0xb));
      (*(uint *)(gen_frame + 0x1c)) = (uint)(*(byte *)(gen_frame + 0xb));
      bVar8 = true;
      if (pvVar7 != ((undefined *)GEN_TOP(0x0))) {
        do {
          bVar4 = F_00bea660(pvVar7 GEN_EDX_ARG,0x17,&(*(uint *)(gen_frame + 0x1c)));
          if (bVar4 == 0) {
            bVar8 = false;
          }
          pvVar7 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar7 + 0x1c)));
        } while (pvVar7 != ((undefined *)GEN_TOP(0x0)));
        if (!bVar8) {
          pvVar7 = *((undefined * PTR32 *)GEN_TOP(((int)param_1 + 0x20)));
          bVar8 = true;
          if (pvVar7 != ((undefined *)GEN_TOP(0x0))) {
            do {
              uVar5 = F_00bea630(pvVar7 GEN_EDX_ARG,0x1a);
              if ((char)uVar5 == '\0') {
                bVar8 = false;
              }
              pvVar7 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar7 + 0x1c)));
            } while (pvVar7 != ((undefined *)GEN_TOP(0x0)));
            if (!bVar8) {
              *((undefined1 *)GEN_TOP(((int)param_1 + 0xea))) = 1;
            }
          }
          for (pvVar7 = *((undefined * PTR32 *)GEN_TOP(((int)param_1 + 0x20))); pvVar7 != ((undefined *)GEN_TOP(0x0));
              pvVar7 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar7 + 0x1c)))) {
            F_00bea660(pvVar7 GEN_EDX_ARG,0x13,&REFG(undefined, 0x13056c0));
          }
        }
      }
      (*(float *)(gen_frame + 0x0)) = 0.0;
      dVar3 = (*(double *)(gen_frame + 0x24));
      cVar2 = *((char *)GEN_TOP(((int)param_1 + 0xea)));
    }
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(float *)((char *)&(*(double *)(gen_frame + 0x24)) + 0)) = 0.0;
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x24)) + 4)) = 0;
    (*(double *)(gen_frame + 0x24)) = 0.0;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    while (iVar6 != 0) {
      pvVar7 = *((undefined * PTR32 *)GEN_TOP(((int)param_1 + 0x20)));
      iVar6 = iVar6 - 1;
      (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x24)) + 4)) = (undefined4)((ulonglong)gen_d2bits((*(double *)(gen_frame + 0x24))) >> 0x20);
      (*(float *)((char *)&(*(double *)(gen_frame + 0x24)) + 0)) = (float)((float10)1 - (float10)(*(float *)(gen_frame + 0x0)));
      (*(double *)(gen_frame + 0x24)) = gen_bits2d(CONCAT44((*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x24)) + 4)),
                                     (uint)gen_fl2bits((float)((float10)1 - (float10)(*(float *)(gen_frame + 0x0))))));
      for (; pvVar7 != ((undefined *)GEN_TOP(0x0)); pvVar7 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar7 + 0x1c)))) {
        F_00bea660(pvVar7 GEN_EDX_ARG,0x19,&(*(uint *)(gen_frame + 0x1c)));
      }
      for (pvVar7 = *((undefined * PTR32 *)GEN_TOP(((int)param_1 + 0x20))); pvVar7 != ((undefined *)GEN_TOP(0x0));
          pvVar7 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar7 + 0x1c)))) {
        F_00bea660(pvVar7 GEN_EDX_ARG,0x13,&REFG(undefined, 0x13056c0));
      }
      (*(float *)(gen_frame + 0x0)) = 0.0;
    }
LAB_00b60414: ;
    fVar1 = *((float *)GEN_TOP(((int)param_1 + 0xf0)));
    if ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
        ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114))) {
      (*(uint *)(gen_frame + 0x1c)) = 0;
      (*(float *)((char *)&(*(double *)(gen_frame + 0x24)) + 0)) = 0.0;
      (*(float *)((char *)&(*(double *)(gen_frame + 0x24)) + 0)) = (float)((float10)fVar1 - (float10)(*(float *)(gen_frame + 0x0)));
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x24)) + 4)) = 0;
      (*(double *)(gen_frame + 0x24)) = gen_bits2d((ulonglong)
                            (uint)gen_fl2bits((float)((float10)fVar1 - (float10)(*(float *)(gen_frame + 0x0)))));
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 0)) = 0;
      (*(uint *)(gen_frame + 0x1c)) = 0;
      F_00b600f0(param_1 GEN_EDX_ARG,0x19,&(*(uint *)(gen_frame + 0x1c)));
      F_00b600f0(param_1 GEN_EDX_ARG,0x13,&REFG(undefined, 0x13056c0));
    }
  }
  if (*((char *)GEN_TOP(((int)param_1 + 0xea))) != '\0') {
    *((undefined4 *)GEN_TOP(((int)param_1 + 0xf0))) = 0;
    *((undefined1 *)GEN_TOP(((int)param_1 + 0xeb))) = 0;
  }
  bVar8 = (GEN_ISNAN(param_2) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
          ((GEN_ISNAN(param_2) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || param_2 == *(float *)&REFG(undefined, 0x1088114));
  pvVar7 = *((undefined * PTR32 *)GEN_TOP(((int)param_1 + 0x20)));
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = bVar8;
  (*(uint *)(gen_frame + 0xc)) = (uint)bVar8;
  for (; pvVar7 != ((undefined *)GEN_TOP(0x0)); pvVar7 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar7 + 0x1c)))) {
    F_00bea660(pvVar7 GEN_EDX_ARG,0x1b,&(*(uint *)(gen_frame + 0xc)));
  }
  for (pvVar7 = *((undefined * PTR32 *)GEN_TOP(((int)param_1 + 0x20))); pvVar7 != ((undefined *)GEN_TOP(0x0));
      pvVar7 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar7 + 0x1c)))) {
    F_00bea660(pvVar7 GEN_EDX_ARG,0x13,&REFG(undefined, 0x13056c0));
  }
  for (pvVar7 = *((undefined * PTR32 *)GEN_TOP(((int)param_1 + 0x20))); pvVar7 != ((undefined *)GEN_TOP(0x0));
      pvVar7 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar7 + 0x1c)))) {
    F_00bea7e0(pvVar7 GEN_EDX_ARG);
  }
  pvVar7 = *((undefined * PTR32 *)GEN_TOP(((int)param_1 + 0x38)));
  if (pvVar7 != ((undefined *)GEN_TOP(0x0))) {
    F_00beb1c0(pvVar7 GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00b60510 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b60510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb60510u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xf4)));
  if ((char)param_2 == '\0') {
    if (param_1 == 0) {
      *((undefined4 *)GEN_TOP(((int)this + 0xf4))) = 0;
      goto LAB_00b60553;
    }
    uVar2 = ~(1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1)) & uVar1;
  }
  else {
    uVar2 = 1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1) | uVar1;
  }
  *((uint *)GEN_TOP(((int)this + 0xf4))) = uVar2;
LAB_00b60553: ;
  if (((char)param_3 != '\0') || (*((uint *)GEN_TOP(((int)this + 0xf4))) != uVar1)) {
    for (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x20))); this_00 != ((undefined *)GEN_TOP(0x0));
        this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0x1c)))) {
      F_00bea810(this_00 GEN_EDX_FWD,param_1,param_2,param_3);
    }
  }
  return;
}

/* ref: FUN_00b60590 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b60590(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xb60590u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  int in_ecx;
  int * piVar1;
  uint uVar2;
  undefined4 local_c;
  ushort uStack_8;
  
  *((float *)GEN_TOP((param_1 + 0x98))) = (float)((float10)param_2 + (float10)param_2);
  *((undefined1 *)GEN_TOP((param_1 + 0xe2))) = 1;
  piVar1 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xa0))))(piVar1 GEN_EDX_ARG);
  if (((uVar2 & 8) == 0) && (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xa0))))(piVar1 GEN_EDX_ARG), (uVar2 & 2) == 0)) {
    uStack_8 = gen_x87_cw | 0xc00;
    gen_set_x87_cw((unsigned short)uStack_8);
    local_c = (undefined4)(longlong)TRUNC((float10)*((float *)GEN_TOP((param_1 + 0x98))));
    gen_set_x87_cw((unsigned short)gen_x87_cw);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xa8))))(piVar1 GEN_EDX_ARG,0,local_c,1);
  }
  in_ecx = *((int *)GEN_TOP((param_1 + 0x20)));
  *((undefined1 *)GEN_TOP((param_1 + 0xe3))) = 1;
  for (; in_ecx != 0; in_ecx = *((int *)GEN_TOP((in_ecx + 0x1c)))) {
    uVar2 = F_00bea830(in_ecx GEN_EDX_ARG,1);
  }
  return uVar2;
}

/* ref: FUN_00b60640 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b60640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb60640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x137104c) + 0x25f8))) + 0xe8)));
  iVar2 = 0;
  puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x9c)));
  do {
    *puVar3 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x137104c) + 0x25f8))) + iVar2 * 4 + 0x68)));
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 < 0x10);
  uVar1 = F_004e7800(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f8))) GEN_EDX_FWD,1);
  *((undefined4 *)GEN_TOP(((int)this + 0x100))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x104))) = 0;
  return uVar1;
}

/* ref: FUN_00b606b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b606b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb606b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  float * pfVar3;
  
  iVar2 = 0;
  pfVar3 = ((float *)GEN_TOP(((int)this + 0x9c)));
  do {
    F_004e79c0(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f8))) GEN_EDX_FWD,iVar2,*pfVar3,100);
    iVar2 = iVar2 + 1;
    pfVar3 = pfVar3 + 1;
  } while (iVar2 < 0x10);
  F_004e7800(*((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x25f8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xdc))));
  if (*((char *)GEN_TOP(((int)this + 0x104))) == '\0') {
    uVar1 = F_00ab6dc0();
    return uVar1;
  }
  uVar1 = F_00ab6d50(*((undefined4 *)GEN_TOP(((int)this + 0x100))),0,0,0,0,1);
  return uVar1;
}

/* ref: FUN_00b60730 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b60730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb60730u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(*param_2));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    param_2[1] = 0;
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x20)));
    if (this_00 == ((undefined *)GEN_TOP(0x0))) goto LAB_00b60767;
  }
  do {
    uVar1 = F_00bea8a0(this_00 GEN_EDX_FWD,param_1,param_2 + 1);
    if ((char)uVar1 != '\0') {
      *param_2 = (int)this_00;
      return 1;
    }
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0x1c)));
  } while (this_00 != ((undefined *)GEN_TOP(0x0)));
LAB_00b60767: ;
  *param_2 = 0;
  return 0;
}

/* ref: FUN_00b60790 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b60790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb60790u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(*param_2));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    param_2[1] = 0;
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x20)));
    if (this_00 == ((undefined *)GEN_TOP(0x0))) goto LAB_00b607c7;
  }
  do {
    uVar1 = F_00bea8c0(this_00 GEN_EDX_FWD,param_1,param_2 + 1);
    if ((char)uVar1 != '\0') {
      *param_2 = (int)this_00;
      return 1;
    }
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0x1c)));
  } while (this_00 != ((undefined *)GEN_TOP(0x0)));
LAB_00b607c7: ;
  *param_2 = 0;
  return 0;
}

/* ref: FUN_00b607f0 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_00b607f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb607f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_GS(0xfc, 4, 4);
  uint uVar1;
  undefined * this_00;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xf4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf8));
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = ((undefined *)GEN_TOP(0x0));
  (*(uint *)(gen_frame + 0x0)) = 0;
  do {
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x4));
    if ((*(undefined * PTR32 *)(gen_frame + 0x4)) == ((undefined *)GEN_TOP(0x0))) {
      ((undefined * PTR32 *)(gen_frame + 0x8))[0] = (*(undefined * PTR32 *)(gen_frame + 0x4));
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x20)));
      goto joined_r0x00b60824;
    }
    while (uVar1 = F_00bea8c0(this_00 GEN_EDX_FWD,&(*(uint *)(gen_frame + 0x0)),((undefined * PTR32 *)(gen_frame + 0x8))), (char)uVar1 == '\0') {
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0x1c)));
joined_r0x00b60824: ;
      if (this_00 == ((undefined *)GEN_TOP(0x0))) {
        return 0;
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this_00;
    if (*((int *)GEN_TOP((*((int *)GEN_TOP(((*(uint *)(gen_frame + 0x0)) + 0x24))) + 8))) == param_1) {
      return (*(uint *)(gen_frame + 0x0));
    }
  } while( true );
}

/* ref: FUN_00b60890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b60890(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb60890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((in_ecx + 0x20)));
  while( true ) {
    if (uVar1 == 0) {
      return 0;
    }
    if (*((int *)GEN_TOP((uVar1 + 0x30))) == param_2) break;
    uVar1 = *((uint *)GEN_TOP((uVar1 + 0x1c)));
  }
  return uVar1;
}

/* ref: FUN_00b608e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b608e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb608e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined * this_00;
  
  for (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x20))); this_00 != ((undefined *)GEN_TOP(0x0));
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0x1c)))) {
    F_00bea9c0(this_00 GEN_EDX_FWD,param_1);
  }
  return;
}

/* ref: FUN_00b60910 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b60910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb60910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 0x140))) != param_1) {
    F_00b5fd70(this GEN_EDX_FWD);
    *((uint *)GEN_TOP(((int)this + 0x140))) = param_1;
    uVar1 = F_00406bb0(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                         (uint)((ulonglong)param_1 * 4),0,0);
    *((uint *)GEN_TOP(((int)this + 0x13c))) = uVar1;
  }
  return;
}

/* ref: FUN_00b60960 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b60960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb60960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x38, 8, 4);
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *((int *)GEN_TOP(((int)this + 0x140)));
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  while (iVar5 != 0) {
    piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x13c))) - 4 + iVar5 * 4)));
    iVar5 = iVar5 - 1;
    (*(int *)(gen_frame + 0x2c)) = iVar5;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x4c))))(piVar2 GEN_EDX_FWD);
    if (uVar3 != 0) {
      if ((*((char *)GEN_TOP((uVar3 + 0x188))) != '\x01') && ((*((byte *)GEN_TOP((uVar3 + 0x8f))) & 0x40) != 0)) {
        iVar6 = uVar3 + 0x16c0;
        (*(int *)(gen_frame + 0x30)) = 3;
        do {
          if ((iVar6 != 0) && (*((char *)GEN_TOP((iVar6 + 0x65))) == '\x03')) {
            uVar4 = F_00ab2ae0(2);
            F_00bbac80(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
            F_00bbac80(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
            F_00bbadd0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,iVar6);
            F_00bbadf0(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP((uVar3 + 0x88))),0);
            F_00b5c120(REFG(undefined4, 0x14c4e84) GEN_EDX_ARG,uVar4,2,((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x14)),1,0,0,(float)(float10)0);
            iVar5 = (*(int *)(gen_frame + 0x2c));
          }
          iVar6 = iVar6 + 0x7a0;
          iVar1 = (*(int *)(gen_frame + 0x30)) - 1;
          (*(int *)(gen_frame + 0x30)) = iVar1;
          this = (*(undefined * PTR32 *)(gen_frame + 0x28));
        } while (iVar1 != 0);
      }
      F_00aa4150(uVar3 GEN_EDX_ARG,0x90,0,0);
      F_00aa4150(uVar3 GEN_EDX_ARG,0x73,0,0);
    }
  }
  return;
}

/* ref: FUN_00b60a70 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b60a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb60a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  F_00b5c8c0(REFG(undefined4, 0x14c4e90) GEN_EDX_FWD,param_1,0);
  if ((*((char *)GEN_TOP(((int)param_1 + *param_1))) != '\0') && (param_1[2] == 3)) {
    *((undefined1 *)GEN_TOP(((int)this + 0x112))) = 1;
    *((int *)GEN_TOP(((int)this + 0x120))) = param_1[4];
    *((int *)GEN_TOP(((int)this + 0x124))) = param_1[5];
    *((int *)GEN_TOP(((int)this + 0x128))) = param_1[6];
  }
  return 0;
}

/* ref: FUN_00b60ac0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b60ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb60ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0xfc, 4);
  int * piVar1;
  int * piVar2;
  undefined * this_00;
  
  (*(int * PTR32 *)(gen_frame + 0xf4)) = ((int *)GEN_TOP((REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf8))));
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = ((undefined *)GEN_TOP(0x0));
  (*(int *)(gen_frame + 0x0)) = 0;
  piVar1 = ((int *)GEN_TOP((REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf8))));
  do {
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x4));
    if ((*(undefined * PTR32 *)(gen_frame + 0x4)) == ((undefined *)GEN_TOP(0x0))) {
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x20)));
      ((undefined4 *)(gen_frame + 0x8))[0] = 0;
      goto joined_r0x00b60afb;
    }
    while (piVar1 = ((int *)GEN_TOP(F_00bea8a0(this_00 GEN_EDX_FWD,&(*(int *)(gen_frame + 0x0)),((undefined4 *)(gen_frame + 0x8))))), (char)piVar1 == '\0') {
      this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0x1c)));
joined_r0x00b60afb: ;
      if (this_00 == ((undefined *)GEN_TOP(0x0))) {
        return (uint)piVar1;
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this_00;
    piVar2 = ((int *)GEN_TOP(F_00beb650((*(int *)(gen_frame + 0x0)) GEN_EDX_ARG)));
    piVar1 = piVar2;
    if ((piVar2 != ((int *)GEN_TOP(0x0))) && (piVar2[0x1b] == 2)) {
      if ((piVar2[0x22] == 2) &&
         (piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x3c))))(piVar2 GEN_EDX_ARG))), piVar1 != ((int *)GEN_TOP(0x0)))) {
        *((undefined2 *)GEN_TOP(((int)piVar1 + 0x72))) = 0;
      }
      if (piVar2[0x22] == 3) {
        piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x3c))))(piVar2 GEN_EDX_ARG)));
        if (piVar1 != ((int *)GEN_TOP(0x0))) {
          *((undefined2 *)GEN_TOP(((int)piVar1 + 0x72))) = 1;
        }
        if (*((char *)GEN_TOP(((int)piVar2 + 0x95))) != '\0') {
          *((undefined1 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x39))) = 0;
          piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x54))))(piVar2 GEN_EDX_ARG,0)));
        }
      }
    }
  } while( true );
}

/* ref: Client::System::Scheduler::Base::CutSceneController::vf5 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b60bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb60bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (this[0x11] != (undefined1)0x0) {
    return 1;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  if ((char)uVar4 != '\0') {
    piVar1 = *(int * PTR32 *)(this + 0x20);
    while (piVar1 != ((int *)GEN_TOP(0x0))) {
      if ((*((char *)GEN_TOP(((int)piVar1 + 0xd))) == '\0') ||
         (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG), (char)uVar4 != '\0')) {
        iVar2 = piVar1[6];
        iVar3 = piVar1[7];
        if (iVar2 == 0) {
          *(int *)(this + 0x20) = iVar3;
        }
        else {
          *((int *)GEN_TOP((iVar2 + 0x1c))) = iVar3;
        }
        if (iVar3 != 0) {
          *((int *)GEN_TOP((iVar3 + 0x18))) = iVar2;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar1)))(piVar1 GEN_EDX_ARG,1);
        piVar1 = *(int * PTR32 *)(this + 0x20);
      }
      else {
        piVar1 = ((int *)GEN_TOP(piVar1[7]));
      }
    }
    if (*(int *)(this + 0x20) == 0) {
      this[0x11] = (undefined1)0x1;
      this[0x15] = (undefined1)0x0;
      if (*(int *)(this + 4) == 0) {
        return 1;
      }
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x15))) = 1;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b60c40 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b60c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb60c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  
  if ((*((uint *)GEN_TOP(((int)this + 0xf4))) >> 3 & 1) != 0) {
    pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x20)));
    *((uint *)GEN_TOP(((int)this + 0xf4))) = *((uint *)GEN_TOP(((int)this + 0xf4))) & 0xfffffff7;
    for (; pvVar1 != ((undefined *)GEN_TOP(0x0)); pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar1 + 0x1c)))) {
      F_00bea810(pvVar1 GEN_EDX_FWD,3,0,1);
    }
  }
  *((undefined4 *)GEN_TOP(((int)this + 10))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0xe))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x12))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x14))) = 0;
  F_00b59800(REFG(void * PTR32, 0x14c4e78) GEN_EDX_ARG);
  for (pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x20))); pvVar1 != ((undefined *)GEN_TOP(0x0));
      pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar1 + 0x1c)))) {
    F_00bea760(pvVar1 GEN_EDX_ARG);
  }
  F_00b59820(REFG(void * PTR32, 0x14c4e78) GEN_EDX_ARG);
  for (pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x20))); pvVar1 != ((undefined *)GEN_TOP(0x0));
      pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar1 + 0x1c)))) {
    F_00bea780(pvVar1 GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0xea))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xf0))) = 0;
  return;
}

/* ref: FUN_00b60cf0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b60cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb60cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b60590(this GEN_EDX_FWD,REFG(float, 0x10947a4));
  return uVar1;
}

/* ref: FUN_00b60d00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b60d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb60d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b60590(this GEN_EDX_FWD,(float)(float10)1);
  return uVar1;
}

/* ref: FUN_00b60d10 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b60d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb60d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x24))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
    if (((char)uVar1 == '\0') &&
       ((*((char *)GEN_TOP(((int)this + 0xe4))) != '\0' || (*((char *)GEN_TOP(((int)this + 0xe5))) != '\0')))) {
      F_00b60590(this GEN_EDX_ARG,REFG(float, 0x10947a4));
    }
  }
  return;
}

/* ref: FUN_00b60d50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b60d50(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xb60d50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  
  piVar2 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_FWD)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    uVar5 = 1;
    uVar4 = 4;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG);
    F_007602f0(uVar3 GEN_EDX_ARG,uVar4,uVar5);
  }
  uVar3 = F_00b60ac0(param_1 GEN_EDX_ARG);
  for (iVar1 = *((int *)GEN_TOP(((int)param_1 + 0x20))); iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 0x1c)))) {
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x20))) + 4))) == 0) {
      uVar3 = F_00beac80(iVar1 GEN_EDX_ARG,param_2);
    }
  }
  F_004d1650(REFG(undefined4, 0x1370c18) GEN_EDX_ARG);
  F_00984b30(1);
  F_00beb180(*((undefined4 *)GEN_TOP(((int)param_1 + 0x38))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)param_1 + 10))) = 0x1010000;
  return uVar3;
}

/* ref: FUN_00b60de0 */
GEN_OWN GEN_NOFRAME uint F_00b60de0(void)
{
  GEN_ENTER(0xb60de0u, 0u, 0u, 0u, 0u);
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = REFG(int, 0x1371290);
  iVar3 = REFG(int, 0x1371290) + 0x25c;
  if ((*((char *)GEN_TOP((REFG(int, 0x1371290) + 0x30f))) == -0x80) && (REFG(int, 0x1371290) + 0x274 != 0)) {
    F_004a4530(REFG(int, 0x1371290) + 0x274 GEN_EDX_ARG);
  }
  F_004adca0(iVar3 GEN_EDX_ARG,7,0,0x80);
  if ((*((char *)GEN_TOP((iVar1 + 0x318))) == -0x80) && (iVar1 + 0x2f0 != 0)) {
    F_004a6420(iVar1 + 0x2f0 GEN_EDX_ARG);
  }
  F_004adca0(iVar3 GEN_EDX_ARG,0x10,0,0x80);
  if ((*((char *)GEN_TOP((iVar1 + 0x317))) == -0x80) && (iVar1 + 0x2c4 != 0)) {
    F_004a63e0(iVar1 + 0x2c4 GEN_EDX_ARG);
  }
  uVar2 = F_004adca0(iVar3 GEN_EDX_ARG,0xf,0,0x80);
  return uVar2;
}

/* ref: FUN_00b60e70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b60e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb60e70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x14))) = 0;
  this_00 = ((undefined *)GEN_TOP(F_00406b90(0x3c,0,0)));
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00beaa20(this_00 GEN_EDX_ARG,param_1,param_2);
  }
  piVar1 = ((int *)GEN_TOP((uVar3 + 0x18)));
  iVar2 = *((int *)GEN_TOP(((int)this + 0x20)));
  if (*((int *)GEN_TOP(((int)this + 0x20))) == 0) {
    *piVar1 = 0;
    *((undefined4 *)GEN_TOP((uVar3 + 0x1c))) = 0;
    *((uint *)GEN_TOP(((int)this + 0x20))) = uVar3;
  }
  else {
    do {
      iVar4 = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar4 + 0x1c)));
    } while (*((int *)GEN_TOP((iVar4 + 0x1c))) != 0);
    uVar5 = uVar3;
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      uVar5 = 0;
    }
    *((uint *)GEN_TOP((iVar4 + 0x1c))) = uVar5;
    *piVar1 = iVar4;
    *((undefined4 *)GEN_TOP((uVar3 + 0x1c))) = 0;
  }
  *((undefined * PTR32 *)GEN_TOP((uVar3 + 4))) = this;
  if (*((char *)GEN_TOP(((int)this + 0xe7))) != '\0') {
    *((undefined1 *)GEN_TOP((uVar3 + 0x3a))) = 1;
  }
  return uVar3;
}

/* ref: FUN_00b60f00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b60f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb60f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[6];
  uVar2 = param_1[7];
  if (iVar1 == 0) {
    *((uint *)GEN_TOP(((int)this + 0x20))) = uVar2;
  }
  else {
    *((uint *)GEN_TOP((iVar1 + 0x1c))) = uVar2;
  }
  if (uVar2 != 0) {
    *((int *)GEN_TOP((uVar2 + 0x18))) = iVar1;
  }
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_FWD,1);
  }
  return uVar2;
}

/* ref: FUN_00b60f40 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b60f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb60f40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  
  if (*((char *)GEN_TOP(((int)this + 0xe0))) == '\0') {
    F_00be8740(((undefined *)GEN_TOP(((int)this + 0x3c))) GEN_EDX_FWD);
    this_00 = ((undefined *)GEN_TOP(F_00406b90(0x150,0,0)));
    if (this_00 == ((undefined *)GEN_TOP(0x0))) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_00beb2e0(this_00 GEN_EDX_ARG);
    }
    *((uint *)GEN_TOP(((int)this + 0x38))) = uVar2;
    F_00b60640(this GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0xf8))) = 0xffffffff;
    F_00bdaf90();
    *((undefined4 *)GEN_TOP(((int)this + 0x130))) = 0xffffffff;
    *((undefined4 *)GEN_TOP(((int)this + 0x134))) = 0;
    *((undefined2 *)GEN_TOP(((int)this + 0xe4))) = 0;
    *((ushort *)GEN_TOP(((int)this + 0x70))) = *((ushort *)GEN_TOP(((int)this + 0x70))) & 0xfffe;
    F_005f6750(1);
    iVar1 = REFG(int, 0x137104c);
    *((undefined4 *)GEN_TOP(((int)this + 0x108))) = *((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x1248)));
    *((undefined4 *)GEN_TOP(((int)this + 0x10c))) = *((undefined4 *)GEN_TOP((iVar1 + 0x124c)));
    *((undefined1 *)GEN_TOP(((int)this + 0x110))) = *((undefined1 *)GEN_TOP((iVar1 + 0x1230)));
    F_00a06560(0);
    iVar1 = REFG(int, 0x14c4e78);
    if (REFG(int, 0x14c4e78) != 0) {
      *((undefined4 *)GEN_TOP((REFG(int, 0x14c4e78) + 0x18))) = 0;
      *((undefined4 *)GEN_TOP((iVar1 + 0x1c))) = 0;
    }
    F_00621530(REFG(int, 0x137127c) + 0xee30 GEN_EDX_ARG);
    if (REFG(void * PTR32, 0x13759f4) != ((undefined *)GEN_TOP(0x0))) {
      F_00690270(REFG(void * PTR32, 0x13759f4) GEN_EDX_ARG);
    }
    *((undefined1 *)GEN_TOP(((int)this + 0xe0))) = 1;
  }
  return;
}

/* ref: FUN_00b61030 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b61030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb61030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  undefined4 * puVar2;
  int iVar3;
  uint in_EAX = 0;
  uint uVar4;
  int * piVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  
  if (*((char *)GEN_TOP(((int)this + 0xe0))) != '\0') {
    for (pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x20))); pvVar1 != ((undefined *)GEN_TOP(0x0));
        pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar1 + 0x1c)))) {
      F_00bea660(pvVar1 GEN_EDX_FWD,3,&REFG(undefined, 0x13056c0));
    }
    F_00be9340(((undefined *)GEN_TOP(((int)this + 0x3c))) GEN_EDX_ARG);
    if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x38))) != ((undefined *)GEN_TOP(0x0))) {
      F_00beb300(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x38))) GEN_EDX_ARG);
      *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x38))) + 0x144))) = 0;
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x38)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
    }
    F_00b606b0(this GEN_EDX_ARG);
    F_00bdae20();
    F_004d1660(REFG(undefined4, 0x1370c18) GEN_EDX_ARG);
    F_00984b30(0);
    F_00b60de0();
    uVar7 = *((undefined1 *)GEN_TOP(((int)this + 0xe2)));
    uVar6 = 0;
    uVar4 = F_006b8c00();
    F_006c5170(uVar4 GEN_EDX_ARG,uVar6,uVar7);
    for (pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x20))); pvVar1 != ((undefined *)GEN_TOP(0x0));
        pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar1 + 0x1c)))) {
      F_00bea930(pvVar1 GEN_EDX_ARG);
    }
    F_00b5fd70(this GEN_EDX_ARG);
    F_00b7c0f0(&REFG(undefined, 0x133e5c0) GEN_EDX_ARG,0);
    iVar3 = REFG(int, 0x137104c);
    *((undefined4 *)GEN_TOP((REFG(int, 0x137104c) + 0x1248))) = *((undefined4 *)GEN_TOP(((int)this + 0x108)));
    *((undefined4 *)GEN_TOP((iVar3 + 0x124c))) = *((undefined4 *)GEN_TOP(((int)this + 0x10c)));
    if (*((char *)GEN_TOP((iVar3 + 0x1230))) != *((char *)GEN_TOP(((int)this + 0x110)))) {
      *((char *)GEN_TOP((iVar3 + 0x1230))) = *((char *)GEN_TOP(((int)this + 0x110)));
    }
    iVar3 = REFG(int, 0x14c4e78);
    if (REFG(int, 0x14c4e78) != 0) {
      *((undefined4 *)GEN_TOP((REFG(int, 0x14c4e78) + 0x18))) = 0;
      *((undefined4 *)GEN_TOP((iVar3 + 0x1c))) = 0;
    }
    F_005f6750(0);
    F_00a06560(1);
    F_00621530(REFG(int, 0x137127c) + 0xee30 GEN_EDX_ARG);
    if (REFG(void * PTR32, 0x13759f4) != ((undefined *)GEN_TOP(0x0))) {
      F_00690270(REFG(void * PTR32, 0x13759f4) GEN_EDX_ARG);
    }
    piVar5 = ((int *)GEN_TOP(F_00424750(REFG(int, 0x137104c) GEN_EDX_ARG)));
    in_EAX = 0;
    if (piVar5 != ((int *)GEN_TOP(0x0))) {
      uVar7 = 0;
      uVar6 = 4;
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x1c))))(piVar5 GEN_EDX_ARG);
      in_EAX = F_007602f0(uVar4 GEN_EDX_ARG,uVar6,uVar7);
    }
    *((undefined1 *)GEN_TOP(((int)this + 0xe0))) = 0;
  }
  return in_EAX;
}

/* ref: FUN_00b611a0 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00b611a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb611a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0xa5c, 4, 4);
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xa54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa58));
  if (*((int *)GEN_TOP(((int)this + 0x138))) == 6) {
    return 1;
  }
  if (*((char *)GEN_TOP(((int)this + 10))) == '\0') {
    return 1;
  }
  uVar2 = F_00b60130(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP(((int)this + 0x138))))) {
  case 0: ;
    if (uVar2 == 0) {
      return 0;
    }
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    *((undefined2 *)GEN_TOP(((int)this + 8))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
    *((undefined2 *)GEN_TOP(((int)this + 0x14))) = 0;
    F_00b5c670(REFG(void * PTR32, 0x14c4e90) GEN_EDX_ARG,0);
    F_00b60f40(this GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x138))) = 1;
    F_00b5fd70(this GEN_EDX_ARG);
    break;
  case 1: ;
    break;
  case 2: ;
    goto switchD_00b61208_caseD_2;
  case 3: ;
    goto switchD_00b61208_caseD_3;
  case 4: ;
    goto switchD_00b61208_caseD_4;
  case 5: ;
    goto switchD_00b61208_caseD_5;
  default: ;
    goto switchD_00b61208_default;
  }
  F_00b5c440(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  bVar1 = F_00bcdf90(uVar2,this);
  if (bVar1 != 0) {
    *((undefined4 *)GEN_TOP(((int)this + 0x138))) = 2;
switchD_00b61208_caseD_2: ;
    bVar1 = F_00b5fdc0(this GEN_EDX_ARG);
    if (bVar1 == 0) {
switchD_00b61208_default: ;
      return 1;
    }
    F_00b5fe00(this GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 0x138))) = 3;
switchD_00b61208_caseD_3: ;
    F_00b5c440(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    bVar1 = F_00bce270(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar2,this);
    if (bVar1 != 0) {
      for (this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x20))); this_00 != ((undefined *)GEN_TOP(0x0));
          this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 0x1c)))) {
        F_00bea980(this_00 GEN_EDX_ARG);
      }
      *((undefined4 *)GEN_TOP(((int)this + 0x138))) = 4;
switchD_00b61208_caseD_4: ;
      bVar1 = F_00b5c680(REFG(void * PTR32, 0x14c4e90) GEN_EDX_ARG);
      if ((bVar1 != 0) && (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG), (char)uVar2 != '\0')) {
        F_00b60960(this GEN_EDX_ARG);
        *((undefined4 *)GEN_TOP(((int)this + 0x138))) = 5;
switchD_00b61208_caseD_5: ;
        *((undefined4 *)GEN_TOP(((int)this + 0x138))) = 6;
        F_00b618f0(this GEN_EDX_ARG);
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00b61350 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b61350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb61350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10f34f0));
  F_00b61030(this GEN_EDX_FWD);
  F_00b60000(this GEN_EDX_ARG);
  uVar1 = F_00be92f0(((undefined *)GEN_TOP(((int)this + 0x3c))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10f34d4));
  return uVar1;
}

/* ref: FUN_00b61380 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b61380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb61380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
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
  uVar1 = F_00b61030(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00b613e0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b613e0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xb613e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  code * pcVar1;
  undefined * this;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  int * piVar6;
  undefined4 * puVar7;
  undefined4 uVar8;
  
  if (*((char *)GEN_TOP(((int)param_1 + 0x11))) == '\0') {
    if (*((char *)GEN_TOP(((int)param_1 + 0xe9))) != '\0') {
      F_00b600c0(param_1 GEN_EDX_FWD,0x1a);
      *((undefined1 *)GEN_TOP(((int)param_1 + 0xe9))) = 0;
    }
    pcVar1 = *((gen_code32 *)GEN_TOP((*param_1 + 0x10)));
    *((undefined1 *)GEN_TOP(((int)param_1 + 0xe6))) = 0;
    uVar5 = (*pcVar1)(param_1);
    if ((char)uVar5 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_ARG);
    }
    iVar2 = REFG(int, 0x13712a4);
    if (*((char *)GEN_TOP(((int)param_1 + 0x112))) != '\0') {
      *((int *)GEN_TOP((REFG(int, 0x13712a4) + 0x20))) = param_1[0x48];
      *((int *)GEN_TOP((iVar2 + 0x24))) = param_1[0x49];
      *((int *)GEN_TOP((iVar2 + 0x28))) = param_1[0x4a];
      *((uint *)GEN_TOP((REFG(int, 0x13712a4) + 0x30))) = *((uint *)GEN_TOP((REFG(int, 0x13712a4) + 0x30))) | 2;
    }
    if ((((param_1[9] == 0) || (bVar4 = F_00b611a0(param_1 GEN_EDX_ARG), bVar4 == 0)) ||
        (uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG), (char)uVar5 == '\0')) ||
       (*((char *)GEN_TOP(((int)param_1 + 0xe1))) != '\0')) {
      for (this = ((undefined *)GEN_TOP(param_1[8])); this != ((undefined *)GEN_TOP(0x0)); this = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x1c)))) {
        F_00bea7c0(this GEN_EDX_ARG);
      }
    }
    else {
      if ((*((char *)GEN_TOP(((int)param_1 + 0xe5))) != '\0') &&
         (F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG), (*(byte *)(param_1 + 0x1c) & 1) == 0)) {
        *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) | 1;
      }
      if ((*((char *)GEN_TOP(((int)param_1 + 0xe2))) != '\0') && (*((char *)GEN_TOP(((int)param_1 + 0xe3))) != '\0')) {
        piVar6 = ((int *)GEN_TOP(F_00424750(REFG(undefined4, 0x137104c) GEN_EDX_ARG)));
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xa0))))(piVar6 GEN_EDX_ARG);
        if ((uVar5 & 8) == 0) {
          uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xa0))))(piVar6 GEN_EDX_ARG);
          if ((uVar5 & 2) == 0) {
            (*(ushort *)(gen_frame + 0x1e)) = gen_x87_cw;
            (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4)) = gen_x87_cw | 0xc00;
            (*(undefined2 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4)) = (undefined2)(gen_x87_cw | 0xc00);
            gen_set_x87_cw((unsigned short)(*(undefined2 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4)));
            (*(longlong *)(gen_frame + 0x8)) = (longlong)TRUNC(((float10)GEN_TOD(gen_bits2f(param_1[0x26]))));
            lVar3 = (*(longlong *)(gen_frame + 0x8));
            (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 0)) = (undefined4)(longlong)TRUNC(((float10)GEN_TOD(gen_bits2f(param_1[0x26]))));
            uVar8 = (undefined4)(*(longlong *)(gen_frame + 0x8));
            gen_set_x87_cw((unsigned short)gen_x87_cw);
            (*(longlong *)(gen_frame + 0x8)) = lVar3;
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xa8))))(piVar6 GEN_EDX_ARG,0,uVar8,1);
          }
          else {
            if ((char)param_1[4] == '\0') {
              F_00b61030(param_1 GEN_EDX_ARG);
              F_00b60000(param_1 GEN_EDX_ARG);
              F_00b61970(param_1 GEN_EDX_ARG);
            }
            *((undefined1 *)GEN_TOP(((int)param_1 + 0xe3))) = 0;
          }
        }
      }
      if (*((char *)GEN_TOP(((int)param_1 + 10))) != '\0') {
        F_00b60d50(param_1 GEN_EDX_ARG,param_2);
        *((undefined1 *)GEN_TOP(((int)param_1 + 0x112))) = 0;
      }
      F_00b60180(param_1 GEN_EDX_ARG,param_2,0xffffffff);
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG);
      if ((char)uVar5 != '\0') {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x14))))(param_1 GEN_EDX_ARG);
        return;
      }
      if ((param_1[0x3e] != -1) &&
         (piVar6 = ((int *)GEN_TOP(F_0052ed20(REFG(undefined4, 0x1375b00) GEN_EDX_ARG,param_1[0x3e],0,0))), piVar6 != ((int *)GEN_TOP(0x0)))) {
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x4c))))(piVar6 GEN_EDX_ARG);
        if (uVar5 == 0) {
          uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x34))))(piVar6 GEN_EDX_ARG);
        }
        else {
          uVar5 = *((uint *)GEN_TOP((uVar5 + 0xec)));
        }
        if (uVar5 == 0) {
          puVar7 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0xc))))(piVar6 GEN_EDX_ARG)));
          (*(undefined4 *)(gen_frame + 0x0)) = *puVar7;
          (*(undefined4 *)(gen_frame + 0x4)) = puVar7[1];
          uVar8 = puVar7[2];
        }
        else {
          (*(undefined4 *)(gen_frame + 0x0)) = *((undefined4 *)GEN_TOP((uVar5 + 0x30)));
          (*(undefined4 *)(gen_frame + 0x4)) = *((undefined4 *)GEN_TOP((uVar5 + 0x34)));
          uVar8 = *((undefined4 *)GEN_TOP((uVar5 + 0x38)));
        }
        iVar2 = REFG(int, 0x13712a4);
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 0)) = uVar8;
        (*(longlong *)(gen_frame + 0x8)) = CONCAT44((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4)),uVar8);
        *((undefined4 *)GEN_TOP((REFG(int, 0x13712a4) + 0x20))) = (*(undefined4 *)(gen_frame + 0x0));
        *((undefined4 *)GEN_TOP((iVar2 + 0x24))) = (*(undefined4 *)(gen_frame + 0x4));
        *((undefined4 *)GEN_TOP((iVar2 + 0x28))) = uVar8;
        *((uint *)GEN_TOP((REFG(int, 0x13712a4) + 0x30))) = *((uint *)GEN_TOP((REFG(int, 0x13712a4) + 0x30))) | 2;
        if (REFG(int, 0x13759f4) != 0) {
          F_0068bc00(REFG(int, 0x13759f4) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
          return;
        }
      }
    }
  }
  return;
}

/* ref: FUN_00b616a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b616a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb616a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 << 4 ^ *((byte *)GEN_TOP((in_ecx + 0x2dd3)))) & 0x10;
  *((byte *)GEN_TOP((in_ecx + 0x2dd3))) = *((byte *)GEN_TOP((in_ecx + 0x2dd3))) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00b616d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b616d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb616d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0xe4))) = param_2;
  return param_2;
}

/* ref: FUN_00b61710 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b61710(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb61710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xf8))) = param_2;
  return param_2;
}

/* ref: FUN_00b61790 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b61790(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb61790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x138))) = param_2;
  return param_2;
}

/* ref: FUN_00b617c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b617c0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb617c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00b617e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b617e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb617e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00b617f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b617f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb617f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return in_ecx + (param_2 >> 4) * 2;
}

/* ref: FUN_00b61800 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00b61800(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb61800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return 1 << ((byte)param_1 & 0xf);
}

/* ref: FUN_00b61820 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b61820(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb61820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return in_ecx + (param_2 >> 4) * 2;
}

/* ref: FUN_00b61830 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b61830(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb61830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x20))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x24))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0x28))) = param_2[2];
  *((uint *)GEN_TOP((in_ecx + 0x30))) = *((uint *)GEN_TOP((in_ecx + 0x30))) | 2;
  return (uint)param_2;
}

/* ref: FUN_00b61860 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00b61860(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb61860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (float10)*((float *)GEN_TOP((in_ecx + param_2 * 4 + 0x68)));
}

/* ref: FUN_00b61870 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b61870(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xb61870u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_004e79c0(param_1 GEN_EDX_FWD,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00b61890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b61890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb61890u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_004adca0(this GEN_EDX_FWD,0xf,(undefined1)param_1,(undefined1)param_2);
  return uVar1;
}

/* ref: FUN_00b618b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b618b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb618b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (*((char *)GEN_TOP((in_ecx + 0xbb))) == param_2) {
    return in_ecx + 0x68;
  }
  return 0;
}

/* ref: FUN_00b618f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b618f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb618f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined2 *)GEN_TOP(((int)this + 8))) = 1;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 9))) = 1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x14))) = 0;
  return 0;
}

/* ref: FUN_00b61910 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b61910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb61910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 in_EAX = 0;
  
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
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

/* ref: FUN_00b61970 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b61970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb61970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 in_EAX = 0;
  
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
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

/* ref: FUN_00b619d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b619d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb619d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00b61a20 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b61a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb61a20u, gen_a0, gen_a1, 0u, 0u);
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
    *((int *)GEN_TOP((iVar1 + 0x1c))) = iVar2;
  }
  if (iVar2 != 0) {
    *((int *)GEN_TOP((iVar2 + 0x18))) = iVar1;
  }
  return 0;
}

/* ref: FUN_00b61a50 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b61a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb61a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  return (*((ushort *)GEN_TOP(((int)this + (param_1 >> 4) * 2))) & 1 << ((byte)param_1 & 0xf)) != 0;
}

/* ref: FUN_00b61a80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b61a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb61a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  ushort * puVar1;
  
  puVar1 = ((ushort *)GEN_TOP(((int)this + (param_1 >> 4) * 2)));
  *puVar1 = *puVar1 | 1 << ((byte)param_1 & 0xf);
  return (uint)this;
}

/* ref: FUN_00b61ab0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b61ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb61ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  ushort * puVar1;
  
  puVar1 = ((ushort *)GEN_TOP(((int)this + (param_1 >> 4) * 2)));
  *puVar1 = *puVar1 & ~(1 << ((byte)param_1 & 0xf));
  return (uint)this;
}

/* ref: FUN_00b61af0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b61af0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb61af0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  ushort * puVar1;
  ushort uVar2;
  
  uVar2 = 1 << ((byte)param_2 & 0xf);
  puVar1 = ((ushort *)GEN_TOP((param_1 + (param_2 >> 4) * 2)));
  if (param_3 != '\0') {
    *puVar1 = *puVar1 | uVar2;
    return param_1;
  }
  *puVar1 = *puVar1 & ~uVar2;
  return param_1;
}

/* ref: FUN_00b61b30 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b61b30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb61b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  if (param_2 != '\0') {
    *((ushort *)GEN_TOP((in_ecx + 0x34))) = *((ushort *)GEN_TOP((in_ecx + 0x34))) | 1;
    return;
  }
  *((ushort *)GEN_TOP((in_ecx + 0x34))) = *((ushort *)GEN_TOP((in_ecx + 0x34))) & 0xfffe;
  return;
}

/* ref: Client::System::Scheduler::Base::CutSceneController::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b61b50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb61b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10f34f0));
  F_00b61030(param_1 GEN_EDX_FWD);
  F_00b60000(param_1 GEN_EDX_ARG);
  F_00be92f0(param_1 + 0xf GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x10f34d4));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b61b90 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b61b90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb61b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0xa0))) = param_2;
  return param_2;
}

/* ref: FUN_00b61ba0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b61ba0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb61ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x9c))) = param_2;
  return param_2;
}

/* ref: FUN_00b61bb0 */
GEN_OWN GEN_FRAME float10 F_00b61bb0(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xb61bb0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00b61bd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b61bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb61bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  F_00b63100(this GEN_EDX_FWD);
  *((undefined2 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x62))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[42])REFP(0x10f3594));
  *((undefined1 *)GEN_TOP(((int)this + 0x68))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00b61c10 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b61c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb61c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[42])REFP(0x10f3594));
  if (*((char *)GEN_TOP(((int)this + 0x62))) == '\0') {
    F_0052f2b0(REFG(void * PTR32, 0x1375b00) GEN_EDX_FWD,this);
  }
  F_00b63250(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_00b61c40 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b61c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb61c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD);
  if ((char)uVar1 == '\0') {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG);
    if ((char)uVar1 == '\0') {
      return 0;
    }
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG);
    if (((char)uVar1 == '\0') &&
       (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG), (char)uVar1 == '\0')) {
      return 0;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x6c))))(this GEN_EDX_ARG,0);
  }
  return 1;
}

/* ref: FUN_00b61c90 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b61c90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb61c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 == 1) {
    return *((int *)GEN_TOP((in_ecx + 0x6c))) < 7;
  }
  if (param_2 != 2) {
    return 1;
  }
  return 6 < *((int *)GEN_TOP((in_ecx + 0x6c)));
}

/* ref: FUN_00b61cc0 */
GEN_OWN GEN_FRAME uint F_00b61cc0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb61cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  undefined * this;
  int * piVar1;
  
  this = ((undefined *)GEN_TOP(F_00406b90(0xa0,0,0)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    piVar1 = ((int *)GEN_TOP(F_00b7cd90(this GEN_EDX_ARG,param_1)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x60))))(piVar1 GEN_EDX_ARG,7);
    return (uint)piVar1;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)&REFG(undefined, 0x0) + 0x60))))(0,7);
  return 0;
}

/* ref: FUN_00b61d10 */
GEN_OWN GEN_FRAME uint F_00b61d10(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb61d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  undefined * this;
  int * piVar1;
  
  this = ((undefined *)GEN_TOP(F_00406b90(0x90,0,0)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    piVar1 = ((int *)GEN_TOP(F_00becaf0(this GEN_EDX_ARG,param_1)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x60))))(piVar1 GEN_EDX_ARG,9);
    return (uint)piVar1;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)&REFG(undefined, 0x0) + 0x60))))(0,9);
  return 0;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf24 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b61d60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb61d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x6c))) = param_2;
  return param_2;
}

/* ref: FUN_00b61d70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b61d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb61d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = *param_1;
  uVar1 = param_1[1];
  *((uint *)GEN_TOP(((int)this + 0x74))) = uVar1;
  return uVar1;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf22 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b61d90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb61d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x68)));
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf32 */
GEN_OWN GEN_NOFRAME double F_00b61da0(void)
{
  GEN_ENTER(0xb61da0u, 0u, 0u, 0u, 0u);
  return 1.0;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf9 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b61db0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb61db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x20;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf34 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b61dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xb61dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf35 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b61dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb61dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x78))))(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf36 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b61de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb61de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00b61df0 */
GEN_OWN GEN_NOFRAME byte GEN_STDCALL F_00b61df0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb61df0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x60, 0);
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  if (((param_2 != ((int *)GEN_TOP(0x0))) && ((ushort)param_3 != 0)) &&
     (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x50))))(param_2 GEN_EDX_ARG,(uint)(ushort)param_3), (char)uVar1 != '\0')) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 0x40))))(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(uint)(ushort)param_3);
    F_00a1c4f0(param_1,((undefined1 *)(gen_frame + 0x0)));
    return 1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b61e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb61e80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  undefined * pvVar1;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x4c))))(this GEN_EDX_FWD)));
  pvVar1 = this_00;
  if ((this_00 != ((undefined *)GEN_TOP(0x0))) && ((*((byte *)GEN_TOP(((int)this_00 + 0x2dd3))) & 2) != 0)) {
    pvVar1 = ((undefined *)GEN_TOP(F_00aaa5b0(this_00 GEN_EDX_ARG,1)));
    *((byte *)GEN_TOP(((int)this_00 + 0x2dd3))) = *((byte *)GEN_TOP(((int)this_00 + 0x2dd3))) & 0xfd;
  }
  return (uint)pvVar1;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf20 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b61eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb61eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD);
  if ((((char)uVar1 == '\0') &&
      (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG), (char)uVar1 == '\0')) &&
     (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG), (char)uVar1 != '\0')) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_ARG);
    if (((char)uVar1 == '\0') &&
       (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_ARG), (char)uVar1 == '\0')) {
      return uVar1;
    }
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x6c))))(this GEN_EDX_ARG,0);
  }
  return uVar1;
}

/* ref: FUN_00b61f00 */
GEN_OWN GEN_FRAME uint F_00b61f00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb61f00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  char cVar1;
  undefined * pvVar2;
  int * piVar3;
  
  cVar1 = *((char *)GEN_TOP((param_1 + 1)));
  if (cVar1 == '\x0f') {
    pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0xa0,0,0)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      piVar3 = ((int *)GEN_TOP(F_00becbe0(pvVar2 GEN_EDX_ARG,param_1)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x60))))(piVar3 GEN_EDX_ARG,2);
      return (uint)piVar3;
    }
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)&REFG(undefined, 0x0) + 0x60))))(0,2);
  }
  else {
    if (cVar1 == '0') {
      pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x90,0,0)));
      if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
        piVar3 = ((int *)GEN_TOP(F_00bedf60(pvVar2 GEN_EDX_ARG,param_1)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x60))))(piVar3 GEN_EDX_ARG,4);
        return (uint)piVar3;
      }
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)&REFG(undefined, 0x0) + 0x60))))(0,4);
      return 0;
    }
    if (cVar1 == 'J') {
      pvVar2 = ((undefined *)GEN_TOP(F_00406b90(0x80,0,0)));
      if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
        piVar3 = ((int *)GEN_TOP(F_00bee210(pvVar2 GEN_EDX_ARG,param_1)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x60))))(piVar3 GEN_EDX_ARG,5);
        return (uint)piVar3;
      }
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)&REFG(undefined, 0x0) + 0x60))))(0,5);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00b61ff0 */
GEN_OWN GEN_NOFRAME uint F_00b61ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb61ff0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  GEN_FRAME_DECL(0x70, 0);
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined * pvVar5;
  ushort uVar6;
  int * this;
  
  iVar1 = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[0]) + 4)));
  (*(byte *)(gen_frame + 0x5f)) = *(*(byte * PTR32 *)&gen_args[0]);
  (*(int *)(gen_frame + 0x4c)) = iVar1;
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),(*(byte * PTR32 *)&gen_args[0]) + 0xc);
  uVar6 = (ushort)(*(byte *)(gen_frame + 0x5f)) << 8 | 0xfe;
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 0)) = uVar6;
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x38)) + 2)) = 0;
  (*(uint *)(gen_frame + 0x38)) = (uint)uVar6;
  (*(int *)(gen_frame + 0x3c)) = iVar1;
  this = ((int *)GEN_TOP(0x0));
  switch((unsigned int)(uintptr_t)((*(byte *)(gen_frame + 0x5f)))) {
  case 1: ;
    pvVar5 = ((undefined *)GEN_TOP(F_00406b90(0x90,0,0)));
    if (pvVar5 == ((undefined *)GEN_TOP(0x0))) {
      this = ((int *)GEN_TOP(0x0));
    }
    else {
      this = ((int *)GEN_TOP(F_00bee7c0(pvVar5 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x38)))));
    }
    (*(int * PTR32 *)(gen_frame + 0x58)) = this;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x60))))(this GEN_EDX_ARG,1);
    if ((*(undefined * PTR32 *)&gen_args[1]) == ((undefined *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x58)) + 0xa8))))((*(int * PTR32 *)(gen_frame + 0x58)) GEN_EDX_ARG,(*(byte * PTR32 *)&gen_args[0]) + *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[0]) + 0x30))));
    }
    else {
      (*(int *)(gen_frame + 0x4c)) = *this;
      uVar4 = F_00a1d0c0((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
      ((code *)*((gen_code32 *)GEN_TOP(((*(int *)(gen_frame + 0x4c)) + 0xb0))))(this,uVar4);
    }
    break;
  default: ;
    goto switchD_00b6205f_caseD_2;
  case 3: ;
    pvVar5 = ((undefined *)GEN_TOP(F_00406b90(0x90,0,0)));
    if (pvVar5 == ((undefined *)GEN_TOP(0x0))) {
      this = ((int *)GEN_TOP(0x0));
    }
    else {
      this = ((int *)GEN_TOP(F_00bee4c0(pvVar5 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x38)))));
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x60))))(this GEN_EDX_ARG,1);
    if ((*(undefined * PTR32 *)&gen_args[1]) == ((undefined *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0xa8))))(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[0]) + 0x30))));
    }
    else {
      (*(int *)(gen_frame + 0x4c)) = *this;
      uVar4 = F_00a1d0c0((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
      ((code *)*((gen_code32 *)GEN_TOP(((*(int *)(gen_frame + 0x4c)) + 0xb0))))(this,uVar4);
    }
    break;
  case 4: ;
    pvVar5 = ((undefined *)GEN_TOP(F_00406b90(0x90,0,0)));
    if (pvVar5 == ((undefined *)GEN_TOP(0x0))) {
      this = ((int *)GEN_TOP(0x0));
    }
    else {
      this = ((int *)GEN_TOP(F_00bee640(pvVar5 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x38)))));
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x60))))(this GEN_EDX_ARG,1);
    if ((*(undefined * PTR32 *)&gen_args[1]) == ((undefined *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0xa8))))(this GEN_EDX_ARG,(*(byte * PTR32 *)&gen_args[0]) + *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[0]) + 0x30))));
    }
    else {
      (*(int *)(gen_frame + 0x4c)) = *this;
      uVar4 = F_00a1d0c0((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
      ((code *)*((gen_code32 *)GEN_TOP(((*(int *)(gen_frame + 0x4c)) + 0xb0))))(this,uVar4);
    }
    break;
  case 6: ;
    pvVar5 = ((undefined *)GEN_TOP(F_00406b90(0x90,0,0)));
    if (pvVar5 == ((undefined *)GEN_TOP(0x0))) {
      this = ((int *)GEN_TOP(0x0));
    }
    else {
      this = ((int *)GEN_TOP(F_00bee2d0(pvVar5 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x38)))));
    }
    (*(int * PTR32 *)(gen_frame + 0x54)) = this;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x60))))(this GEN_EDX_ARG,6);
    F_00bee400(this GEN_EDX_ARG,(*(byte * PTR32 *)&gen_args[0]) + *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[0]) + 0x30))),((undefined1 *)(gen_frame + 0x0)));
    break;
  case 8: ;
  case 9: ;
    if ((char)(*(undefined4 *)&gen_args[2]) == '\0') {
      pvVar5 = ((undefined *)GEN_TOP(F_00406b90(0xb0,0,0)));
      if (pvVar5 == ((undefined *)GEN_TOP(0x0))) {
        this = ((int *)GEN_TOP(0x0));
      }
      else {
        this = ((int *)GEN_TOP(F_00bef000(pvVar5 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x38)))));
      }
      iVar1 = *this;
      this[0x27] = (uint)(*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[2]) + 1));
      ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x60))))(this,1);
      if (((*(undefined * PTR32 *)&gen_args[1]) == ((undefined *)GEN_TOP(0x0))) || (uVar4 = F_00a1d0c0((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG), uVar4 == 0)) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0xa8))))(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[0]) + 0x30))));
      }
      else {
        (*(int *)(gen_frame + 0x4c)) = *this;
        uVar4 = F_00a1d0c0((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
        ((code *)*((gen_code32 *)GEN_TOP(((*(int *)(gen_frame + 0x4c)) + 0xb0))))(this,uVar4);
      }
    }
    else {
      pvVar5 = ((undefined *)GEN_TOP(F_00406b90(0xc0,0,0)));
      if (pvVar5 == ((undefined *)GEN_TOP(0x0))) {
        this = ((int *)GEN_TOP(0x0));
      }
      else {
        this = ((int *)GEN_TOP(F_00bee9b0(pvVar5 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x38)))));
      }
      this[0x27] = (uint)(*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[2]) + 1));
      (*(int * PTR32 *)(gen_frame + 0x54)) = this;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x60))))(this GEN_EDX_ARG,1);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0xa8))))(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[0]) + 0x30))));
    }
    break;
  case 0xf: ;
    if ((*(undefined * PTR32 *)&gen_args[1]) == ((undefined *)GEN_TOP(0x0))) {
      pvVar5 = ((undefined *)GEN_TOP(F_00406b90(0xa0,0,0)));
      if (pvVar5 == ((undefined *)GEN_TOP(0x0))) {
        this = ((int *)GEN_TOP(0x0));
      }
      else {
        this = ((int *)GEN_TOP(F_00becbe0(pvVar5 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x38)))));
      }
      (*(int * PTR32 *)(gen_frame + 0x54)) = this;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x60))))(this GEN_EDX_ARG,2);
      F_00bedd30(this GEN_EDX_ARG,(*(byte * PTR32 *)&gen_args[0]));
    }
    else {
      bVar2 = F_00a1b580((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
      if (bVar2 != 0) goto LAB_00b62572;
      pvVar5 = ((undefined *)GEN_TOP(F_00406b90(0xa0,0,0)));
      if (pvVar5 == ((undefined *)GEN_TOP(0x0))) {
        this = ((int *)GEN_TOP(0x0));
      }
      else {
        this = ((int *)GEN_TOP(F_00becbe0(pvVar5 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x38)))));
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x60))))(this GEN_EDX_ARG,2);
      F_00bed5e0(this GEN_EDX_ARG,(*(byte * PTR32 *)&gen_args[0]));
      piVar3 = ((int *)GEN_TOP(F_00a1d0c0((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG)));
      (*(int * PTR32 *)(gen_frame + 0x54)) = piVar3;
      if (piVar3 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x54)))))((*(int * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,1);
      }
    }
    break;
  case 0x25: ;
  case 0x49: ;
    pvVar5 = ((undefined *)GEN_TOP(F_00406b90(0xb0,0,0)));
    if (pvVar5 == ((undefined *)GEN_TOP(0x0))) {
      this = ((int *)GEN_TOP(0x0));
    }
    else {
      this = ((int *)GEN_TOP(F_00bef000(pvVar5 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x38)))));
    }
    this[0x27] = (uint)(*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[2]) + 1));
    (*(int * PTR32 *)(gen_frame + 0x58)) = this;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x60))))(this GEN_EDX_ARG,1);
    if ((*(byte *)(gen_frame + 0x5f)) == 0x49) {
      *(char *)(this + 0x28) = (char)(*(undefined4 *)&gen_args[2]);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0xa8))))(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[0]) + 0x30))));
    break;
  case 0x26: ;
  case 0x2e: ;
    (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x54)) + 0)) = (*(byte *)(gen_frame + 0x5f));
    (*(int * PTR32 *)(gen_frame + 0x54)) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)(gen_frame + 0x54)), 1, 3),(*(byte *)(gen_frame + 0x5f)))));
    (*(int * PTR32 *)(gen_frame + 0x58)) = ((int *)GEN_TOP(0x0));
    if (*((int * PTR32 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[0]) + 0x34))) == ((int *)GEN_TOP(0x0))) {
      if (*((int * PTR32 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[0]) + 0x38))) != ((int *)GEN_TOP(0x0))) {
        (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x54)) + 0)) = 9;
        (*(int * PTR32 *)(gen_frame + 0x54)) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)(gen_frame + 0x54)), 1, 3),9)));
        (*(int * PTR32 *)(gen_frame + 0x58)) = *((int * PTR32 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[0]) + 0x38)));
      }
    }
    else {
      (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x54)) + 0)) = 8;
      (*(int * PTR32 *)(gen_frame + 0x54)) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)(gen_frame + 0x54)), 1, 3),8)));
      (*(int * PTR32 *)(gen_frame + 0x58)) = *((int * PTR32 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[0]) + 0x34)));
    }
    pvVar5 = ((undefined *)GEN_TOP(F_00406b90(0xb0,0,0)));
    if (pvVar5 == ((undefined *)GEN_TOP(0x0))) {
      this = ((int *)GEN_TOP(0x0));
    }
    else {
      this = ((int *)GEN_TOP(F_00bef000(pvVar5 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x38)))));
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x60))))(this GEN_EDX_ARG,1);
    if ((*(undefined * PTR32 *)&gen_args[1]) != ((undefined *)GEN_TOP(0x0))) {
      if ((*(int * PTR32 *)(gen_frame + 0x58)) == ((int *)GEN_TOP(0x0))) {
        (*(int *)(gen_frame + 0x4c)) = *this;
        uVar4 = F_00a1d0c0((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
        ((code *)*((gen_code32 *)GEN_TOP(((*(int *)(gen_frame + 0x4c)) + 0xb0))))(this,uVar4);
      }
      else {
        F_00603a80(&(*(int *)(gen_frame + 0x48)),(char)(*(int * PTR32 *)(gen_frame + 0x54)),0,(*(int *)(gen_frame + 0x4c)),0xffffffff);
        this[0x1c] = (*(int *)(gen_frame + 0x48));
        this[0x1d] = (*(int *)(gen_frame + 0x4c));
        uVar4 = F_00a1d0c0((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
        F_00bef8a0(this GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x58)),uVar4);
        iVar1 = *this;
        this[0x1c] = (*(uint *)(gen_frame + 0x38));
        this[0x1d] = (*(int *)(gen_frame + 0x3c));
        ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x54))))(this,0);
      }
    }
    break;
  case 0x27: ;
    pvVar5 = ((undefined *)GEN_TOP(F_00406b90(0x90,0,0)));
    if (pvVar5 == ((undefined *)GEN_TOP(0x0))) {
      this = ((int *)GEN_TOP(0x0));
    }
    else {
      this = ((int *)GEN_TOP(F_00beee50(pvVar5 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x38)))));
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x60))))(this GEN_EDX_ARG,1);
    if ((*(undefined * PTR32 *)&gen_args[1]) == ((undefined *)GEN_TOP(0x0))) {
      (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x48)) + 0)) = 1;
      (*(int *)(gen_frame + 0x48)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x48)), 1, 3),1);
      F_00a1bce0(((undefined1 *)(gen_frame + 0x40)),(*(byte * PTR32 *)&gen_args[0]));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0xa8))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x40)));
    }
    else {
      (*(int *)(gen_frame + 0x4c)) = *this;
      uVar4 = F_00a1d0c0((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
      ((code *)*((gen_code32 *)GEN_TOP(((*(int *)(gen_frame + 0x4c)) + 0xb0))))(this,uVar4);
    }
    break;
  case 0x4a: ;
    if ((*(undefined * PTR32 *)&gen_args[1]) == ((undefined *)GEN_TOP(0x0))) {
      pvVar5 = ((undefined *)GEN_TOP(F_00406b90(0x80,0,0)));
      if (pvVar5 == ((undefined *)GEN_TOP(0x0))) {
        this = ((int *)GEN_TOP(0x0));
        ((code *)*((gen_code32 *)GEN_TOP((*(int *)&REFG(undefined, 0x0) + 0x60))))(0,5);
      }
      else {
        this = ((int *)GEN_TOP(F_00bee210(pvVar5 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x38)))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x60))))(this GEN_EDX_ARG,5);
      }
    }
    else {
      bVar2 = F_00a1b580((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
      if (bVar2 == 0) {
        return 0;
      }
LAB_00b62572: ;
      this = ((int *)GEN_TOP(F_00a1b590((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG)));
      this[0x1c] = (*(uint *)(gen_frame + 0x38));
      this[0x1d] = (*(int *)(gen_frame + 0x3c));
    }
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x68))))(this GEN_EDX_ARG);
  if ((char)uVar4 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x6c))))(this GEN_EDX_ARG,(*(byte * PTR32 *)&gen_args[0]));
    return (uint)this;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x70))))(this GEN_EDX_ARG,(*(byte * PTR32 *)&gen_args[0]));
switchD_00b6205f_caseD_2: ;
  return (uint)this;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf27 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b62660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb62660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x40, 0);
  uint uVar1;
  uint uVar2;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_ARG);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00a1fa60(this + 0x70,uVar1,param_1);
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b626d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb626d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x10)) = *param_1;
  (*(undefined4 *)(gen_frame + 0x14)) = param_1[1];
  (*(undefined4 *)(gen_frame + 0x18)) = param_1[2];
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_00a1c7d0(&(*(undefined4 *)(gen_frame + 0x10)),0,0,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x10)));
  return uVar1;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b62760(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb62760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x20;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf31 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b62770(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xb62770u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  float fVar1;
  float fVar2;
  uint uVar3;
  float10 fVar4;
  
  fVar1 = (float)((float10)param_2 * (float10)REFG(double, 0x1088108));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  fVar4 = ((float10)GEN_TOD(fsin((float10)fVar1)));
  fVar2 = (float)fVar4;
  (*(float *)(gen_frame + 0x18)) = fVar2;
  fVar4 = (float10)fVar2;
  (*(float *)(gen_frame + 0x0)) = (float)(fVar4 * (float10)REFG(float, 0x1302c80));
  (*(float *)(gen_frame + 0x4)) = (float)((float10)REFG(float, 0x1302c84) * fVar4);
  (*(float *)(gen_frame + 0x8)) = (float)(fVar4 * (float10)REFG(float, 0x1302c88));
  fVar4 = ((float10)GEN_TOD(fcos((float10)fVar1)));
  (*(float *)(gen_frame + 0x18)) = (float)fVar4;
  (*(float *)(gen_frame + 0xc)) = (float)fVar4;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,&(*(float *)(gen_frame + 0x0)));
  return uVar3;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b62800(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb62800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x30;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b62810(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb62810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x40;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf37 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b62820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb62820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x20, 0);
  float fVar1;
  float fVar2;
  uint uVar3;
  int * piVar4;
  float * pfVar5;
  
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_FWD);
  if (uVar3 != 0) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_ARG);
    if (*((char *)GEN_TOP((uVar3 + 0x65))) == '\x03') {
      piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_ARG)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x2c))))(piVar4 GEN_EDX_ARG,param_1);
      return (uint)param_1;
    }
  }
  fVar2 = *(float *)(this + 0x40);
  fVar1 = *(float *)(this + 0x48);
  ((float *)(gen_frame + 0x0))[0] = fVar2;
  ((float *)(gen_frame + 0x0))[2] = fVar1;
  pfVar5 = ((float *)(gen_frame + 0x0)) + 1;
  ((float *)(gen_frame + 0x0))[1] = *(float *)(this + 0x44);
  if (!((float10)fVar2 < (float10)*(float *)(this + 0x44))) {
    pfVar5 = ((float *)(gen_frame + 0x0));
  }
  if ((float10)*pfVar5 < (float10)fVar1) {
    pfVar5 = ((float *)(gen_frame + 0x0)) + 2;
  }
  *param_1 = *(undefined4 *)(this + 0x20);
  param_1[1] = *(undefined4 *)(this + 0x24);
  param_1[2] = *(undefined4 *)(this + 0x28);
  param_1[3] = (undefined4)gen_fl2bits(*pfVar5);
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf38 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b628e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb628e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x90, 0);
  uint uVar1;
  int * piVar2;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_FWD);
  if ((uVar1 != 0) &&
     (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_ARG), *((char *)GEN_TOP((uVar1 + 0x65))) == '\x03')) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x30))))(piVar2 GEN_EDX_ARG,param_1);
    return (uint)param_1;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x9c))))(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)));
  F_00a1cb90(&(*(undefined4 *)(gen_frame + 0x0)),uVar1);
  *param_1 = (*(undefined4 *)(gen_frame + 0x0));
  param_1[1] = (*(undefined4 *)(gen_frame + 0x4));
  param_1[2] = (*(undefined4 *)(gen_frame + 0x8));
  param_1[4] = (*(undefined4 *)(gen_frame + 0x10));
  param_1[5] = (*(undefined4 *)(gen_frame + 0x14));
  param_1[6] = (*(undefined4 *)(gen_frame + 0x18));
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf41 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b629b0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb629b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  ushort uVar1;
  undefined * this;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  undefined * pvVar5;
  
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x4c))))(param_1 GEN_EDX_FWD)));
  pvVar5 = this;
  if ((this != ((undefined *)GEN_TOP(0x0))) && ((*((byte *)GEN_TOP(((int)this + 0x2dd3))) & 2) == 0)) {
    if (param_2 == '\0') {
      uVar2 = F_00aa0210(this GEN_EDX_ARG,0,0);
      puVar3 = ((uint *)GEN_TOP(F_00ab2a20(uVar2)));
      if (puVar3 != ((uint *)GEN_TOP(0x0))) {
        uVar2 = *puVar3;
        uVar4 = F_00aa0210(this GEN_EDX_ARG,0,0);
        uVar1 = *((ushort *)GEN_TOP(((int)this + 0x88)));
        (*(uint *)(gen_frame + 0x4)) = uVar4;
        (*(int *)(gen_frame + 0x0)) = (uVar2 & 0xffffff) + (int)puVar3;
        F_00b5ad70(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,(uint)uVar1,&(*(int *)(gen_frame + 0x0)),0);
      }
      F_00aa0100(this GEN_EDX_ARG,0,0);
      pvVar5 = ((undefined *)GEN_TOP(F_00aa6f20(this GEN_EDX_ARG,0,0)));
    }
    if ((*((byte *)GEN_TOP(((int)this + 0x8f))) & 0x40) != 0) {
      pvVar5 = ((undefined *)GEN_TOP(F_00aaa5b0(this GEN_EDX_ARG,0)));
    }
    *((byte *)GEN_TOP(((int)this + 0x2dd3))) = *((byte *)GEN_TOP(((int)this + 0x2dd3))) | 2;
  }
  return (uint)pvVar5;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b62a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb62a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  code * pcVar1;
  int * piVar2;
  undefined * this_00;
  
  *(int *)(this + 0x20) = *param_1;
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x34)));
  *(int *)(this + 0x24) = param_1[1];
  *(int *)(this + 0x28) = param_1[2];
  piVar2 = ((int *)GEN_TOP((*pcVar1)(this)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    piVar2[0xc] = *param_1;
    piVar2[0xd] = param_1[1];
    piVar2[0xe] = param_1[2];
    piVar2[9] = piVar2[9] | 2;
    if (*((char *)GEN_TOP(((int)piVar2 + 0x65))) == '\x03') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_FWD,0);
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x4c))))(this GEN_EDX_ARG)));
      piVar2 = ((int *)GEN_TOP(0x0));
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        piVar2 = ((int *)GEN_TOP(F_00a9fae0(this_00 GEN_EDX_ARG)));
      }
    }
  }
  return (uint)piVar2;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf4 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b62ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb62ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int * piVar2;
  
  *(int *)(this + 0x30) = *param_1;
  *(int *)(this + 0x34) = param_1[1];
  *(int *)(this + 0x38) = param_1[2];
  *(int *)(this + 0x3c) = param_1[3];
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_FWD)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    piVar2[0x10] = *param_1;
    piVar2[0x11] = param_1[1];
    piVar2[0x12] = param_1[2];
    iVar1 = param_1[3];
    piVar2[9] = piVar2[9] | 2;
    piVar2[0x13] = iVar1;
    if (*((char *)GEN_TOP(((int)piVar2 + 0x65))) == '\x03') {
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG,0)));
    }
  }
  return (uint)piVar2;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf6 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b62b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb62b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  code * pcVar1;
  int * piVar2;
  
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x34)));
  *(int *)(this + 0x40) = *param_1;
  *(int *)(this + 0x44) = param_1[1];
  *(int *)(this + 0x48) = param_1[2];
  piVar2 = ((int *)GEN_TOP((*pcVar1)(this)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    piVar2[0x14] = *param_1;
    piVar2[0x15] = param_1[1];
    piVar2[0x16] = param_1[2];
    piVar2[9] = piVar2[9] | 2;
    if (*((char *)GEN_TOP(((int)piVar2 + 0x65))) == '\x03') {
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_FWD,0)));
    }
  }
  return (uint)piVar2;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf8 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b62b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb62b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  code * pcVar1;
  int * piVar2;
  undefined * this_00;
  
  *(int *)(this + 0x20) = *param_1;
  *(int *)(this + 0x24) = param_1[1];
  *(int *)(this + 0x28) = param_1[2];
  *(int *)(this + 0x30) = param_1[4];
  *(int *)(this + 0x34) = param_1[5];
  *(int *)(this + 0x38) = param_1[6];
  *(int *)(this + 0x3c) = param_1[7];
  *(int *)(this + 0x40) = param_1[8];
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x34)));
  *(int *)(this + 0x44) = param_1[9];
  *(int *)(this + 0x48) = param_1[10];
  piVar2 = ((int *)GEN_TOP((*pcVar1)(this)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    piVar2[0xc] = *param_1;
    piVar2[0xd] = param_1[1];
    piVar2[0xe] = param_1[2];
    piVar2[0x10] = param_1[4];
    piVar2[0x11] = param_1[5];
    piVar2[0x12] = param_1[6];
    piVar2[0x13] = param_1[7];
    piVar2[0x14] = param_1[8];
    piVar2[0x15] = param_1[9];
    piVar2[0x16] = param_1[10];
    piVar2[9] = piVar2[9] | 2;
    if (*((char *)GEN_TOP(((int)piVar2 + 0x65))) == '\x03') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_FWD,0);
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x4c))))(this GEN_EDX_ARG)));
      piVar2 = ((int *)GEN_TOP(0x0));
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        piVar2 = ((int *)GEN_TOP(F_00a9fae0(this_00 GEN_EDX_ARG)));
      }
    }
  }
  return (uint)piVar2;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf21 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b62c40(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb62c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  code * pcVar1;
  uint uVar2;
  uint uVar3;
  
  pcVar1 = *((gen_code32 *)GEN_TOP((*param_1 + 0x34)));
  *(char *)(param_1 + 0x1a) = param_2;
  uVar2 = (*pcVar1)(param_1);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x34))))(param_1 GEN_EDX_FWD);
    *((byte *)GEN_TOP((uVar3 + 100))) = param_2 != '\0' | *((byte *)GEN_TOP((uVar3 + 100))) & 0xfe;
  }
  return uVar3;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf39 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b62c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb62c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL(0x70, 0);
  undefined4 uVar1;
  float10 fVar2;
  uint uVar3;
  int * piVar4;
  float * pfVar5;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_FWD);
  if ((uVar3 != 0) &&
     (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_ARG), *((char *)GEN_TOP((uVar3 + 0x65))) == '\x03')) {
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x34))))(piVar4 GEN_EDX_ARG,param_1);
    return param_1;
  }
  fVar2 = (float10)0;
  uVar1 = *(undefined4 *)(this + 0x44);
  (*(float *)(gen_frame + 0x40)) = (float)fVar2;
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(this + 0x40);
  (*(float *)(gen_frame + 0x44)) = (float)fVar2;
  (*(float *)(gen_frame + 0x48)) = (float)fVar2;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(this + 0x48);
  F_004efe70(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,(uint)(this + 0x30));
  (*(float *)(gen_frame + 0x40)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x40)) + (float10)*(float *)(this + 0x20))));
  (*(float *)(gen_frame + 0x44)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x24) + (float10)(*(float *)(gen_frame + 0x44)))));
  (*(float *)(gen_frame + 0x48)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x28) + (float10)(*(float *)(gen_frame + 0x48)))));
  pfVar5 = ((float *)GEN_TOP(F_005fe770(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,(uint)((undefined1 *)(gen_frame + 0x0)))));
  *((float *)GEN_TOP((param_1 + 0x40))) = (float)((float10)*pfVar5 * (float10)REFG(float, 0x1302c60));
  *((float *)GEN_TOP((param_1 + 0x44))) = (float)((float10)pfVar5[1] * (float10)REFG(float, 0x1302c64));
  *((float *)GEN_TOP((param_1 + 0x48))) = (float)((float10)pfVar5[2] * (float10)REFG(float, 0x1302c68));
  F_005fe2e0(param_1,(uint)&(*(undefined4 *)(gen_frame + 0x10)));
  F_005fe2e0(param_1 + 0x10,(uint)&(*(undefined4 *)(gen_frame + 0x20)));
  F_005fe2e0(param_1 + 0x20,(uint)&(*(undefined4 *)(gen_frame + 0x30)));
  *((float *)GEN_TOP((param_1 + 0x30))) = (*(float *)(gen_frame + 0x40));
  *((float *)GEN_TOP((param_1 + 0x34))) = (*(float *)(gen_frame + 0x44));
  *((float *)GEN_TOP((param_1 + 0x38))) = (*(float *)(gen_frame + 0x48));
  return param_1;
}

/* ref: FUN_00b62de0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b62de0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb62de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  byte bVar1;
  
  bVar1 = (param_2 * '\x02' ^ *((byte *)GEN_TOP((in_ecx + 0x2dd3)))) & 2;
  *((byte *)GEN_TOP((in_ecx + 0x2dd3))) = *((byte *)GEN_TOP((in_ecx + 0x2dd3))) ^ bVar1;
  return bVar1;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf1 */
GEN_OWN GEN_NOFRAME byte F_00b62e00(void)
{
  GEN_ENTER(0xb62e00u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf11 */
GEN_OWN GEN_NOFRAME uint F_00b62e10(void)
{
  GEN_ENTER(0xb62e10u, 0u, 0u, 0u, 0u);
  return 0x10f363c;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf13 */
GEN_OWN GEN_NOFRAME uint F_00b62e20(void)
{
  GEN_ENTER(0xb62e20u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf12 */
GEN_OWN GEN_NOFRAME uint F_00b62e30(void)
{
  GEN_ENTER(0xb62e30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf15 */
GEN_OWN GEN_NOFRAME uint F_00b62e40(void)
{
  GEN_ENTER(0xb62e40u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf14 */
GEN_OWN GEN_NOFRAME uint F_00b62e50(void)
{
  GEN_ENTER(0xb62e50u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf17 */
GEN_OWN GEN_NOFRAME uint F_00b62e60(void)
{
  GEN_ENTER(0xb62e60u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf16 */
GEN_OWN GEN_NOFRAME uint F_00b62e70(void)
{
  GEN_ENTER(0xb62e70u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf19 */
GEN_OWN GEN_NOFRAME uint F_00b62e80(void)
{
  GEN_ENTER(0xb62e80u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf18 */
GEN_OWN GEN_NOFRAME uint F_00b62e90(void)
{
  GEN_ENTER(0xb62e90u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf25 */
GEN_OWN GEN_NOFRAME byte F_00b62ea0(void)
{
  GEN_ENTER(0xb62ea0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf26 */
GEN_OWN GEN_NOFRAME byte F_00b62eb0(void)
{
  GEN_ENTER(0xb62eb0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf28 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b62ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb62ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf29 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b62ed0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb62ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x60)));
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf33 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b62ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb62ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf23 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b62ef0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb62ef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined1 *)GEN_TOP((in_ecx + 0x62))) = 1;
  return;
}

/* ref: Client::System::Scheduler::SchedulerInstanceObject::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b62f00(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb62f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[42])REFP(0x10f3594));
  if (*((char *)GEN_TOP(((int)param_1 + 0x62))) == '\0') {
    F_0052f2b0(REFG(void * PTR32, 0x1375b00) GEN_EDX_FWD,param_1);
  }
  F_00b63250(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b62f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb62f40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
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

/* ref: FUN_00b63000 */
GEN_OWN GEN_FRAME float10 F_00b63000(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xb63000u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00b63020 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b63020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb63020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) != ((undefined *)GEN_TOP(0x0))) {
    F_00bf04f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x50))) GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: FUN_00b63030 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b63030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(int * param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xb63030u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint uVar1;
  undefined * this_00;
  
  if (*((int *)GEN_TOP(((int)this + 0x50))) == 0) {
    if (param_2 != ((int *)GEN_TOP(0x0))) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
      if ((char)uVar1 != '\0') goto LAB_00b6306a;
    }
    if (param_5 != ((int *)GEN_TOP(0x0))) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_5 + 4))))(param_5 GEN_EDX_ARG);
      if ((char)uVar1 != '\0') {
LAB_00b6306a: ;
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x4c))))(this GEN_EDX_ARG);
        this_00 = ((undefined *)GEN_TOP(F_00406b90(0xc0,0,0)));
        if (this_00 != ((undefined *)GEN_TOP(0x0))) {
          uVar1 = F_00beff80(this_00 GEN_EDX_ARG,this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                               param_8);
          *((uint *)GEN_TOP(((int)this + 0x50))) = uVar1;
          return 1;
        }
        *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00b630d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b630d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb630d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((in_ecx + 0x50)));
  if ((iVar1 != 0) && ((*((int *)GEN_TOP((iVar1 + 4))) == param_2 || (*((int *)GEN_TOP((iVar1 + 8))) == param_2)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b63100 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b63100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb63100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x10f36cc));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x20))), REFG(float, 0x1302df0));
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x24))), REFG(float, 0x1302df4));
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x28))), REFG(float, 0x1302df8));
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = REFG(undefined4, 0x1302e00);
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = REFG(undefined4, 0x1302e04);
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = REFG(undefined4, 0x1302e08);
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = REFG(undefined4, 0x1302e0c);
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x40))), REFG(float, 0x1302e10));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x44))), REFG(float, 0x1302e14));
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)this + 0x48))), REFG(float, 0x1302e18));
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  return (uint)this;
}

/* ref: FUN_00b63190 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b63190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xb63190u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  uint uVar1;
  undefined * this_00;
  
  if ((*((int *)GEN_TOP(((int)this + 0x50))) == 0) && (param_2 != ((int *)GEN_TOP(0x0)))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_FWD);
    if ((char)uVar1 != '\0') {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x4c))))(this GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(F_00406b90(0xc0,0,0)));
      if (this_00 != ((undefined *)GEN_TOP(0x0))) {
        uVar1 = F_00beff80(this_00 GEN_EDX_ARG,this,param_1,param_2,param_3,param_4,0,&REFG(float, 0x1302df0),0,param_5)
        ;
        *((uint *)GEN_TOP(((int)this + 0x50))) = uVar1;
        return 1;
      }
      *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b63220 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b63220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb63220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x50)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00befd60(this_00 GEN_EDX_FWD);
    F_00406ad0(this_00);
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  }
  return;
}

/* ref: FUN_00b63250 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b63250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb63250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x50)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x10f36cc));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00befd60(this_00 GEN_EDX_FWD);
    F_00406ad0(this_00);
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  }
  return;
}

/* ref: FUN_00b63280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b63280(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb63280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00befd60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf9 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b632c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb632c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x20;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf20 */
GEN_OWN GEN_NOFRAME unsigned int F_00b632d0(void)
{
  GEN_ENTER(0xb632d0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf21 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00b632e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb632e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf22 */
GEN_OWN GEN_NOFRAME byte F_00b632f0(void)
{
  GEN_ENTER(0xb632f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf23 */
GEN_OWN GEN_NOFRAME unsigned int F_00b63300(void)
{
  GEN_ENTER(0xb63300u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b63310(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb63310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x20))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x24))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0x28))) = param_2[2];
  return (uint)param_2;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf3 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b63330(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb63330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x20;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf4 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b63340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb63340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)(this + 0x30) = *param_1;
  *(undefined4 *)(this + 0x34) = param_1[1];
  *(undefined4 *)(this + 0x38) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)(this + 0x3c) = uVar1;
  return uVar1;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf5 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b63370(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb63370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x30;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf6 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b63380(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb63380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 0x40))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x44))) = param_2[1];
  *((undefined4 *)GEN_TOP((in_ecx + 0x48))) = param_2[2];
  return (uint)param_2;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf7 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b633a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb633a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x40;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf8 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b633b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb633b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)(this + 0x20) = *param_1;
  *(undefined4 *)(this + 0x24) = param_1[1];
  *(undefined4 *)(this + 0x28) = param_1[2];
  *(undefined4 *)(this + 0x30) = param_1[4];
  *(undefined4 *)(this + 0x34) = param_1[5];
  *(undefined4 *)(this + 0x38) = param_1[6];
  *(undefined4 *)(this + 0x3c) = param_1[7];
  *(undefined4 *)(this + 0x40) = param_1[8];
  *(undefined4 *)(this + 0x44) = param_1[9];
  *(undefined4 *)(this + 0x48) = param_1[10];
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::Base::BaseInstanceObject::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b63400(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb63400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined * this;
  
  this = ((undefined *)GEN_TOP(param_1[0x14]));
  *param_1 = (*(undefined * PTR32 (*)[24])REFP(0x10f36cc));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    F_00befd60(this GEN_EDX_FWD);
    F_00406ad0(this);
    param_1[0x14] = 0;
  }
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b63450 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b63450(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb63450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return ((ushort)param_2 & *((ushort *)GEN_TOP((in_ecx + 0x12)))) != 0;
}

/* ref: FUN_00b63470 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b63470(GEN_P(byte * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb63470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(byte * in_ecx = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  return (*in_ecx & param_2) != 0;
}

/* ref: FUN_00b63490 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b63490(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb63490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00b634b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b634b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb634b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00bb9d80(this GEN_EDX_FWD,(int)this + 0xc,param_1);
  return uVar1;
}

/* ref: FUN_00b634d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b634d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb634d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00bb9d80(this GEN_EDX_FWD,(int)this + 0x10,param_1);
  return uVar1;
}

/* ref: FUN_00b63510 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00b63510(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb63510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 6))) = *((ushort *)GEN_TOP((in_ecx + 6))) | (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00b63520 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b63520(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb63520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return ((ushort)param_2 & *((ushort *)GEN_TOP((in_ecx + 6)))) != 0;
}

/* ref: FUN_00b63540 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b63540(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb63540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x10))) = param_2;
  return param_2;
}

/* ref: FUN_00b63570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b63570(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb63570u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x24))) = param_2;
  return param_2;
}

/* ref: FUN_00b63590 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b63590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb63590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = *param_1;
  uVar1 = param_1[1];
  *((uint *)GEN_TOP(((int)this + 0x2c))) = uVar1;
  return uVar1;
}

/* ref: FUN_00b635c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b635c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xb635c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  *((float *)GEN_TOP((in_ecx + 0x38))) = param_2;
  return;
}

/* ref: FUN_00b635e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b635e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb635e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x1c))) = param_2;
  return param_2;
}

/* ref: FUN_00b635f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b635f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb635f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (param_2 * 3 + 3) * 0x10 + in_ecx;
}

/* ref: FUN_00b63640 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b63640(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb63640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xb4))) = param_2;
  return param_2;
}

/* ref: FUN_00b63650 */
GEN_OWN GEN_FRAME float10 F_00b63650(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xb63650u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_00b63670 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b63670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb63670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00bb9d00(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00b63680 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00b63680(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb63680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((in_ecx + 4)));
  if (iVar1 == 0) {
    return 1;
  }
  if ((*((int *)GEN_TOP((iVar1 + 0xc))) == 0) && (*((int *)GEN_TOP((iVar1 + 0x10))) == 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b636a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b636a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb636a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  int * this_00;
  
  this_00 = param_1;
  do {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x10))))(this_00 GEN_EDX_FWD);
    if (uVar1 != 0) {
      if (uVar1 != 1) {
        return;
      }
      F_00bba8b0(this_00 GEN_EDX_ARG,this);
      return;
    }
    if (this_00[3] != 0) {
      F_00b636a0(this GEN_EDX_ARG,((int *)GEN_TOP(this_00[3])));
    }
    this_00 = ((int *)GEN_TOP(this_00[4]));
  } while (this_00 != ((int *)GEN_TOP(0x0)));
  return;
}

/* ref: FUN_00b636f0 */
GEN_OWN GEN_NOFRAME unsigned int F_00b636f0(void)
{
  GEN_ENTER(0xb636f0u, 0u, 0u, 0u, 0u);
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(&REFG(undefined, 0x14c4ec0) + REFG(int, 0x14c4ec8) * 4);
  iVar2 = REFG(int, 0x14c4ec8);
  while (iVar1 != 0) {
    REFG(int, 0x14c4ec8) = 1 - iVar2;
    *(undefined4 *)(&REFG(undefined, 0x14c4ec0) + iVar2 * 4) = 0;
    while (iVar1 != 0) {
      iVar2 = *((int *)GEN_TOP((iVar1 + 8)));
      F_00a04370(iVar1);
      iVar1 = iVar2;
    }
    iVar2 = REFG(int, 0x14c4ec8);
    iVar1 = *(int *)(&REFG(undefined, 0x14c4ec0) + REFG(int, 0x14c4ec8) * 4);
  }
  REFG(int, 0x14c4ec8) = iVar2;
  return 0;
}

/* ref: FUN_00b63750 */
GEN_OWN GEN_FRAME uint F_00b63750(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb63750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  *((undefined4 *)GEN_TOP((param_1 + 8))) = *(undefined4 *)(&REFG(undefined, 0x14c4ec0) + REFG(int, 0x14c4ec8) * 4);
  *(uint *)(&REFG(undefined, 0x14c4ec0) + REFG(int, 0x14c4ec8) * 4) = param_1;
  return param_1;
}

/* ref: FUN_00b63780 */
GEN_OWN GEN_FRAME uint F_00b63780(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb63780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined * this;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  ((int *)(gen_frame + 0x0))[2] = *((undefined4 *)GEN_TOP(((int)param_1 + 0x10)));
  ((int *)(gen_frame + 0x0))[3] = *((undefined4 *)GEN_TOP(((int)param_1 + 0xc)));
  uVar2 = 0;
  do {
    piVar4 = ((int *)GEN_TOP(((int *)(gen_frame + 0x0))[(int)(uVar2 + 2)]));
    if ((piVar4 != ((int *)GEN_TOP(0x0))) && (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x10))))(piVar4 GEN_EDX_ARG), uVar1 == 0)) {
      F_00b63780(piVar4);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  uVar1 = F_00bb9e90(param_1 GEN_EDX_ARG,((int *)(gen_frame + 0x0)),4);
  iVar3 = 0;
  uVar2 = uVar1;
  if (0 < (int)uVar1) {
    do {
      uVar2 = F_00a04370(((int *)(gen_frame + 0x0))[(int)(iVar3)]);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar1);
  }
  if (((*((int *)GEN_TOP(((int)param_1 + 0xc))) == 0) && (*((int *)GEN_TOP(((int)param_1 + 0x10))) == 0)) &&
     (*((undefined * PTR32 *)GEN_TOP(((int)param_1 + 4))) != ((undefined *)GEN_TOP(0x0)))) {
    F_00bb9e40(*((undefined * PTR32 *)GEN_TOP(((int)param_1 + 4))) GEN_EDX_ARG,param_1);
    uVar2 = REFG(undefined4, 0x14c4ec8);
    *((undefined4 *)GEN_TOP(((int)param_1 + 8))) = *(undefined4 *)(&REFG(undefined, 0x14c4ec0) + REFG(undefined4, 0x14c4ec8) * 4);
    *(undefined * PTR32 *)(&REFG(undefined, 0x14c4ec0) + REFG(undefined4, 0x14c4ec8) * 4) = param_1;
  }
  this = *((undefined * PTR32 *)GEN_TOP(((int)param_1 + 4)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = *((uint *)GEN_TOP(((int)param_1 + 0xc)));
    uVar2 = *((uint *)GEN_TOP(((int)param_1 + 0x10)));
    if (uVar1 == 0) {
      uVar1 = uVar2;
      if (uVar2 == 0) {
        return 0;
      }
    }
    else if (uVar2 != 0) {
      return uVar1;
    }
    uVar2 = 0;
    if (uVar1 != 0) {
      piVar4 = ((int *)GEN_TOP(((int)this + 0xc)));
      if (((undefined *)GEN_TOP(*piVar4)) != param_1) {
        piVar4 = ((int *)GEN_TOP(((int)this + 0x10)));
      }
      F_00bb9d80(this GEN_EDX_ARG,piVar4,uVar1);
      F_00bb9d80(param_1 GEN_EDX_ARG,((uint *)GEN_TOP(((int)param_1 + 0xc))),0);
      F_00bb9d80(param_1 GEN_EDX_ARG,(int)param_1 + 0x10,0);
      *((undefined4 *)GEN_TOP(((int)param_1 + 8))) = *(undefined4 *)(&REFG(undefined, 0x14c4ec0) + REFG(undefined4, 0x14c4ec8) * 4);
      uVar2 = REFG(undefined4, 0x14c4ec8);
      *(undefined * PTR32 *)(&REFG(undefined, 0x14c4ec0) + REFG(undefined4, 0x14c4ec8) * 4) = param_1;
    }
  }
  return uVar2;
}

/* ref: FUN_00b638a0 */
GEN_OWN GEN_FRAME byte F_00b638a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb638a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  ((int *)(gen_frame + 0x0))[0] = *((int *)GEN_TOP((param_1 + 0xc)));
  ((int *)(gen_frame + 0x0))[1] = uVar1;
  uVar3 = 0;
  do {
    if (((int *)(gen_frame + 0x0))[(int)(uVar3)] != 0) {
      bVar2 = F_00b638f0(((int *)(gen_frame + 0x0))[(int)(uVar3)],param_2);
      if (bVar2 == 0) {
        return 0;
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  return 1;
}

/* ref: FUN_00b638f0 */
GEN_OWN GEN_FRAME byte F_00b638f0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb638f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG);
  if (uVar2 == 1) {
    return param_1[8] == param_2;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG);
  if (uVar2 == 0) {
    bVar1 = F_00b638a0(param_1,param_2);
    return bVar1;
  }
  return 1;
}

/* ref: FUN_00b63940 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b63940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb63940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f37b4));
  uVar1 = F_00a03e20();
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return (uint)this;
}

/* ref: FUN_00b63960 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b63960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb63960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f37b4));
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    F_00b636a0(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 4))));
    uVar1 = F_00a04250(*((undefined4 *)GEN_TOP(((int)this + 4))));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10e1614));
  return uVar1;
}

/* ref: FUN_00b63990 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00b63990(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xb63990u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 4))))
              (*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),
               (undefined4)gen_fl2bits((float)(float10)1));
    F_00b63780(*((undefined4 *)GEN_TOP((param_1 + 4))));
  }
  return;
}

/* ref: FUN_00b639d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b639d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb639d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined * this_00;
  undefined * this_01;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  
  F_00bba8b0(param_1 GEN_EDX_FWD,this);
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)param_1 + 4)));
  F_00bb9e40(this_00 GEN_EDX_ARG,param_1);
  uVar2 = REFG(undefined4, 0x14c4ec8);
  *((undefined4 *)GEN_TOP(((int)param_1 + 8))) = *(undefined4 *)(&REFG(undefined, 0x14c4ec0) + REFG(undefined4, 0x14c4ec8) * 4);
  *(undefined * PTR32 *)(&REFG(undefined, 0x14c4ec0) + REFG(undefined4, 0x14c4ec8) * 4) = param_1;
  this_01 = *((undefined * PTR32 *)GEN_TOP(((int)this_00 + 4)));
  if ((this_01 != ((undefined *)GEN_TOP(0x0))) && (*((int *)GEN_TOP(((int)this_00 + 0x10))) == 0)) {
    puVar3 = ((undefined4 *)GEN_TOP(((int)this_01 + 0xc)));
    puVar1 = ((undefined4 *)GEN_TOP(((int)this_00 + 0xc)));
    if (((undefined *)GEN_TOP(*puVar3)) == this_00) {
      uVar4 = *puVar1;
    }
    else {
      uVar4 = *puVar1;
      puVar3 = ((undefined4 *)GEN_TOP(((int)this_01 + 0x10)));
    }
    F_00bb9d80(this_01 GEN_EDX_ARG,puVar3,uVar4);
    F_00bb9d80(this_00 GEN_EDX_ARG,puVar1,0);
    uVar2 = REFG(undefined4, 0x14c4ec8);
    *((undefined4 *)GEN_TOP(((int)this_00 + 8))) = *(undefined4 *)(&REFG(undefined, 0x14c4ec0) + REFG(undefined4, 0x14c4ec8) * 4);
    *(undefined * PTR32 *)(&REFG(undefined, 0x14c4ec0) + REFG(undefined4, 0x14c4ec8) * 4) = this_00;
  }
  return uVar2;
}

/* ref: FUN_00b63a60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b63a60(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb63a60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  undefined * this;
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined * this_00;
  uint uVar4;
  int * piVar5;
  undefined * pvVar6;
  int iVar7;
  undefined4 uVar8;
  
  uVar2 = F_00a03e70(param_2);
  pvVar3 = ((undefined *)GEN_TOP(F_00b644c0(*((undefined4 *)GEN_TOP((param_1 + 4))),uVar2)));
  if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((param_1 + 4)));
    if (*((int *)GEN_TOP(((int)pvVar3 + 0xc))) == 0) {
      F_00bb9d80(pvVar3 GEN_EDX_ARG,(int)pvVar3 + 0xc,uVar2);
      return uVar2;
    }
    if (*((int *)GEN_TOP(((int)pvVar3 + 0x10))) != 0) {
      pvVar3 = ((undefined *)GEN_TOP(F_00a03e20()));
      F_00bb9d80(pvVar3 GEN_EDX_ARG,(int)pvVar3 + 0xc,*((undefined4 *)GEN_TOP((param_1 + 4))));
      *((undefined * PTR32 *)GEN_TOP((param_1 + 4))) = pvVar3;
    }
    F_00bb9d80(*((undefined * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG,(int)*((undefined * PTR32 *)GEN_TOP((param_1 + 4))) + 0x10,uVar2);
    return uVar2;
  }
  if (*((int *)GEN_TOP(((int)pvVar3 + 0x10))) == 0) {
    F_00bb9d80(pvVar3 GEN_EDX_ARG,(int)pvVar3 + 0x10,uVar2);
    return uVar2;
  }
  this_00 = ((undefined *)GEN_TOP(F_00a03e20()));
  if (param_3 == '\x01') {
LAB_00b63b72: ;
    pvVar6 = *((undefined * PTR32 *)GEN_TOP(((int)pvVar3 + 4)));
    if (pvVar6 == ((undefined *)GEN_TOP(0x0))) {
      *((undefined * PTR32 *)GEN_TOP((param_1 + 4))) = this_00;
    }
    else {
      piVar5 = ((int *)GEN_TOP(((int)pvVar6 + 0xc)));
      if (((undefined *)GEN_TOP(*piVar5)) != pvVar3) {
        piVar5 = ((int *)GEN_TOP(((int)pvVar6 + 0x10)));
      }
      F_00bb9d80(pvVar6 GEN_EDX_ARG,piVar5,this_00);
    }
    F_00bb9d80(this_00 GEN_EDX_ARG,(int)this_00 + 0xc,pvVar3);
    F_00bb9d80(this_00 GEN_EDX_ARG,(int)this_00 + 0x10,uVar2);
    return uVar2;
  }
  bVar1 = F_00b638a0(pvVar3,param_2);
  if (bVar1 != 0) goto LAB_00b63b72;
  bVar1 = F_00b638f0(*((undefined4 *)GEN_TOP(((int)pvVar3 + 0xc))),param_2);
  if (bVar1 == 0) {
    uVar8 = *((undefined4 *)GEN_TOP(((int)pvVar3 + 0x10)));
    iVar7 = (int)pvVar3 + 0x10;
  }
  else {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x10))) GEN_EDX_ARG);
    if (uVar4 == 2) {
      this = *((undefined * PTR32 *)GEN_TOP(((int)pvVar3 + 4)));
      pvVar6 = this_00;
      if (this == ((undefined *)GEN_TOP(0x0))) {
        iVar7 = (int)this_00 + 0xc;
        *((undefined * PTR32 *)GEN_TOP((param_1 + 4))) = this_00;
      }
      else if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) == pvVar3) {
        F_00bb9d80(this GEN_EDX_ARG,((int *)GEN_TOP(((int)this + 0xc))),this_00);
        iVar7 = (int)this_00 + 0xc;
      }
      else {
        F_00bb9d80(this GEN_EDX_ARG,(int)this + 0x10,this_00);
        iVar7 = (int)this_00 + 0xc;
      }
      goto LAB_00b63b53;
    }
    uVar8 = *((undefined4 *)GEN_TOP(((int)pvVar3 + 0xc)));
    iVar7 = (int)pvVar3 + 0xc;
  }
  F_00bb9d80(this_00 GEN_EDX_ARG,(int)this_00 + 0xc,uVar8);
  pvVar6 = pvVar3;
  pvVar3 = this_00;
LAB_00b63b53: ;
  F_00bb9d80(pvVar6 GEN_EDX_ARG,iVar7,pvVar3);
  F_00bb9d80(this_00 GEN_EDX_ARG,(int)this_00 + 0x10,uVar2);
  return uVar2;
}

/* ref: FUN_00b63c10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b63c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb63c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b64560(0,*((undefined4 *)GEN_TOP(((int)this + 4))),this);
  return uVar1;
}

/* ref: FUN_00b63c30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b63c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb63c30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00b645c0(param_1,param_2,0,*((undefined4 *)GEN_TOP(((int)this + 4))),param_2);
  return uVar1;
}

/* ref: FUN_00b63c60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b63c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb63c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00b64630(param_1,param_2,0,*((undefined4 *)GEN_TOP(((int)this + 4))),param_3);
  return uVar1;
}

/* ref: FUN_00b63c90 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b63c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb63c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar1 = F_00b646b0(*((int *)GEN_TOP(((int)this + 4))),this);
    return 1 - (uVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00b63cc0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b63cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb63cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar1 = F_00b64730(*((int *)GEN_TOP(((int)this + 4))),this);
    return 1 - (uVar1 != 0);
  }
  return 0;
}

/* ref: Client::System::Animation::AnimationTree::vf6 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b63cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb63cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  uVar1 = param_1;
  if (*((int *)GEN_TOP((param_1 + 4))) == 2) {
    this_00 = ((undefined *)GEN_TOP(F_00b647b0(*(undefined4 *)(this + 4),param_1)));
    uVar1 = 0;
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      if (*((int *)GEN_TOP(((int)this_00 + 0x10))) != 0) {
        F_00bba120(this_00 GEN_EDX_ARG);
      }
      uVar1 = F_00b639d0(this GEN_EDX_ARG,this_00);
    }
  }
  return uVar1;
}

/* ref: FUN_00b63d30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b63d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb63d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  float fVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  byte * pbVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  undefined * pvVar9;
  uint uVar10;
  int * piVar11;
  float * pfVar12;
  int iVar13;
  int * piVar14;
  uint uVar15;
  int * piVar16;
  byte bVar17;
  uint uVar18;
  float10 fVar19;
  float fVar20;
  
  uVar15 = (*(uint *)&gen_args[0]);
  iVar13 = *((int *)GEN_TOP(((*(uint *)&gen_args[0]) + 0x18)));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = param_1;
  (*(uint *)&gen_args[0]) = 0;
  (*(float *)(gen_frame + 0x8)) = -NAN;
  (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)GEN_TOP(0xffffffff));
  fVar20 = (*(float *)(gen_frame + 0x8));
  if (iVar13 != 0) {
    uVar10 = *((uint *)GEN_TOP((iVar13 + 0x74)));
    if (uVar10 == 0) {
      piVar16 = *((int * PTR32 *)GEN_TOP((iVar13 + 0x70)));
      if (piVar16 == ((int *)GEN_TOP(0x0))) {
        iVar7 = *((int *)GEN_TOP((iVar13 + 0x6c)));
        if (iVar7 == 0) {
          if (*((int *)GEN_TOP((iVar13 + 4))) != 0) {
            *((undefined4 *)GEN_TOP((iVar13 + 0x6c))) = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar13 + 4))) + 4)));
          }
          iVar7 = *((int *)GEN_TOP((iVar13 + 0x6c)));
          if (iVar7 != 0) goto LAB_00b63d8a;
        }
        else {
LAB_00b63d8a: ;
          *((undefined4 *)GEN_TOP((iVar13 + 0x70))) = *((undefined4 *)GEN_TOP((iVar7 + 4)));
        }
        piVar16 = *((int * PTR32 *)GEN_TOP((iVar13 + 0x70)));
        if (piVar16 != ((int *)GEN_TOP(0x0))) goto LAB_00b63d97;
      }
      else {
LAB_00b63d97: ;
        uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar16 + 100))))(piVar16 GEN_EDX_FWD);
        *((uint *)GEN_TOP((iVar13 + 0x74))) = uVar10;
      }
      uVar10 = *((uint *)GEN_TOP((iVar13 + 0x74)));
    }
    uVar8 = *((uint *)GEN_TOP((uVar10 + 0x240)));
    uVar18 = uVar10;
    if (uVar8 != 0) {
      uVar18 = uVar8;
    }
    (*(float *)(gen_frame + 0x8)) = *((float *)GEN_TOP((uVar10 + 0x94)));
    if ((((uVar8 != 0) || (uVar8 = uVar10, uVar10 != 0)) && (*((int *)GEN_TOP((uVar8 + 0xdc))) != 0)) &&
       (iVar7 = *((int *)GEN_TOP((*((int *)GEN_TOP((uVar8 + 0xdc))) + 4))), iVar7 != 0)) {
      (*(int * PTR32 *)(gen_frame + 0x14)) = *((int * PTR32 *)GEN_TOP((iVar7 + 0xfc)));
    }
    fVar20 = (*(float *)(gen_frame + 0x8));
    (*(uint *)&gen_args[0]) = uVar10;
    if (uVar18 != 0) {
      fVar20 = *((float *)GEN_TOP((uVar18 + 0x94)));
    }
  }
  pvVar9 = ((undefined *)GEN_TOP(F_00b63a60((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar20),-1 < (int)(*(int * PTR32 *)(gen_frame + 0x14)))));
  bVar6 = (byte)*((ushort *)GEN_TOP((uVar15 + 0x12)));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = pvVar9;
  (*(uint *)(gen_frame + 0x0)) = (uint)*((ushort *)GEN_TOP((uVar15 + 0x15)));
  if ((bVar6 >> 1 & 1) != 0) {
    (*(uint *)(gen_frame + 0x0)) = CONCAT22(1,*((ushort *)GEN_TOP((uVar15 + 0x15))));
  }
  if ((bVar6 >> 3 & 1) != 0) {
    (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) | 0x20000;
  }
  if ((bVar6 >> 6 & 1) != 0) {
    (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) | 0x40000;
  }
  if ((char)bVar6 < '\0') {
    (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) | 0x80000;
  }
  if ((bVar6 >> 4 & 1) == 0) {
    if ((bVar6 >> 5 & 1) == 0) {
      if ((*((ushort *)GEN_TOP((uVar15 + 0x12))) >> 8 & 1) != 0) {
        (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) | 0x400000;
      }
    }
    else {
      (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) | 0x200000;
    }
  }
  else {
    (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) | 0x100000;
  }
  *((undefined4 *)GEN_TOP(((int)pvVar9 + 0x28))) = *((undefined4 *)GEN_TOP((uVar15 + 0xc)));
  *((uint *)GEN_TOP(((int)pvVar9 + 0x2c))) = (*(uint *)(gen_frame + 0x0));
  *((int * PTR32 *)GEN_TOP(((int)pvVar9 + 0x24))) = (*(int * PTR32 *)(gen_frame + 0x14));
  if (iVar13 != 0) {
    *((int *)GEN_TOP(((int)pvVar9 + 0x1c))) = iVar13;
    *((uint *)GEN_TOP((iVar13 + 0xb4))) = (int)pvVar9 + 0xc;
  }
  piVar16 = *((int * PTR32 *)GEN_TOP(((int)pvVar9 + 4)));
  if (((undefined *)GEN_TOP(piVar16[4])) != pvVar9) {
    (*(int *)(gen_frame + 0x4)) = 0;
    if (((*(uint *)&gen_args[0]) == 0) || (bVar6 = F_00bcfe30(((undefined *)GEN_TOP((*(uint *)&gen_args[0]))) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x4))), bVar6 == 0)) {
      uVar10 = F_00a09f30(0,(uint)*((byte *)GEN_TOP((uVar15 + 0x15))),(uint)*((byte *)GEN_TOP((uVar15 + 0x16))));
      (*(uint *)&gen_args[0]) = (uint)gen_fl2bits((float)(int)uVar10);
    }
    else {
      fVar19 = (float10)(*(int *)(gen_frame + 0x4));
      if ((*(int *)(gen_frame + 0x4)) < 0) {
        fVar19 = GEN_X87(fVar19 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
      (*(uint *)&gen_args[0]) = (uint)gen_fl2bits((float)fVar19);
    }
    if ((*(*(byte * PTR32 *)&gen_args[2]) & 1) != 0) {
      (*(uint *)&gen_args[0]) = 0;
    }
    bVar3 = true;
    goto LAB_00b64156;
  }
  piVar14 = ((int *)GEN_TOP(piVar16[3]));
  uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar14 + 0x10))))(piVar14 GEN_EDX_ARG);
  if (uVar10 == 1) {
    (*(int * PTR32 *)(gen_frame + 0x14)) = piVar14;
LAB_00b63f0e: ;
    if ((*(int * PTR32 *)(gen_frame + 0x14)) == ((int *)GEN_TOP(0x0))) goto LAB_00b63f14;
  }
  else {
    uVar10 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar14 + 0x10))))(piVar14 GEN_EDX_ARG);
    if (uVar10 != 0) goto LAB_00b63f14;
    piVar11 = ((int *)GEN_TOP(F_00bb9d70(piVar14 GEN_EDX_ARG)));
    (*(int * PTR32 *)(gen_frame + 0x14)) = piVar11;
    if (piVar11 == ((int *)GEN_TOP(0x0))) {
      piVar11 = ((int *)GEN_TOP(F_00b64450(piVar14,(*(undefined * PTR32 *)&gen_args[1]))));
      (*(int * PTR32 *)(gen_frame + 0x14)) = piVar11;
      goto LAB_00b63f0e;
    }
  }
  bVar6 = F_00b638f0(piVar14,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x8))));
  piVar14 = (*(int * PTR32 *)(gen_frame + 0x14));
  bVar17 = (byte)*((undefined2 *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x14)) + 0x2e)));
  (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x4)) + 0)) = bVar6;
  (*(int *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x4)), 1, 3),bVar6);
  if (((bVar17 >> 1 & 1) != 0) && ((*((byte *)GEN_TOP((uVar15 + 0x12))) >> 3 & 1) == 0)) {
LAB_00b63f14: ;
    F_00b639d0((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,pvVar9);
    return 0;
  }
  if (((bVar6 == 0) && (-1 < (*(int * PTR32 *)(gen_frame + 0x14))[9])) && ((*(int * PTR32 *)(gen_frame + 0x14))[9] == *((int *)GEN_TOP(((int)pvVar9 + 0x24))))) {
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x4)) + 0)) = 1;
    (*(int *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x4)), 1, 3),1);
  }
  fVar20 = 0.0;
  if (((*((byte *)GEN_TOP((uVar15 + 0x12))) & 1) != 0) || ((*((byte *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x14)) + 0x2e))) & 1) != 0))
  goto LAB_00b640bb;
  if (((bVar17 >> 4 & 1) == 0) && ((*((byte *)GEN_TOP((uVar15 + 0x12))) >> 4 & 1) == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (((bVar17 >> 5 & 1) == 0) && ((*((byte *)GEN_TOP((uVar15 + 0x12))) >> 5 & 1) == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((((bVar6 != 1) || (bVar3)) || (bVar4)) || ((bVar17 >> 6 & 1) != 0)) {
    (*(float *)(gen_frame + 0x8)) = 0.0;
    if (bVar3) {
      iVar13 = (int)(*(undefined * PTR32 *)&gen_args[1]) + 0x30;
LAB_00b64055: ;
      if ((iVar13 == 0) || (*((int *)GEN_TOP((iVar13 + 0x1c))) != 0)) goto LAB_00b64074;
      fVar19 = (float10)*((int *)GEN_TOP((iVar13 + 0x18)));
      if (*((int *)GEN_TOP((iVar13 + 0x18))) < 0) {
        (*(uint *)&gen_args[0]) = (uint)gen_fl2bits((float)(fVar19 + (float10)*(float *)&REFG(undefined, 0x1088110)));
        goto LAB_00b640c0;
      }
    }
    else {
      if (bVar4) {
        iVar13 = (int)(*(undefined * PTR32 *)&gen_args[1]) + 0x60;
        goto LAB_00b64055;
      }
LAB_00b64074: ;
      if (((*(uint *)&gen_args[0]) == 0) || (bVar6 = F_00bcfe30(((undefined *)GEN_TOP((*(uint *)&gen_args[0]))) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x8))), bVar6 == 0)) {
        uVar10 = F_00a09f30((int)(char)piVar14[0xb],(uint)*((byte *)GEN_TOP((uVar15 + 0x15))),
                              (uint)*((byte *)GEN_TOP((uVar15 + 0x16))));
        fVar20 = (float)(int)uVar10;
        goto LAB_00b640bb;
      }
      fVar19 = (float10)(int)gen_fl2bits((*(float *)(gen_frame + 0x8)));
      if ((int)gen_fl2bits((*(float *)(gen_frame + 0x8))) < 0) {
        fVar19 = GEN_X87(fVar19 + (float10)*(float *)&REFG(undefined, 0x1088110));
      }
    }
    (*(uint *)&gen_args[0]) = (uint)gen_fl2bits((float)fVar19);
  }
  else {
    sVar2 = *((short *)GEN_TOP((uVar15 + 0xc)));
    iVar13 = (*(int * PTR32 *)(gen_frame + 0x14))[10];
    (*(float *)(gen_frame + 0x8)) = (float)(int)sVar2;
    fVar19 = (float10)(int)sVar2;
    if ((float10)(int)(short)iVar13 < fVar19) {
      sVar2 = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x14)) + 0x2a)));
      (*(float *)(gen_frame + 0x8)) = 0.0;
      pfVar12 = (float *)&(*(uint *)&gen_args[0]);
      fVar1 = ((float)GEN_TOF((((float10)(int)sVar2 + (float10)(int)(short)iVar13) - fVar19)));
      (*(uint *)&gen_args[0]) = (uint)gen_fl2bits(fVar1);
      if (!((float10)0 < (float10)fVar1)) {
        pfVar12 = &(*(float *)(gen_frame + 0x8));
      }
      (*(uint *)&gen_args[0]) = (uint)gen_fl2bits(*pfVar12);
      if (!((float10)*pfVar12 <= (float10)*((float *)GEN_TOP((uVar15 + 8))))) goto LAB_00b640c0;
    }
LAB_00b640bb: ;
    (*(uint *)&gen_args[0]) = (uint)gen_fl2bits(fVar20);
  }
LAB_00b640c0: ;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar16 + 8))))(piVar16 GEN_EDX_ARG,(*(uint *)&gen_args[0]));
  F_00bba140((*(int * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x4)),GEN_ARGF(gen_bits2f((*(uint *)&gen_args[0]))),(int)*((char *)GEN_TOP((uVar15 + 0x17))));
  bVar3 = false;
LAB_00b64156: ;
  piVar14 = ((int *)GEN_TOP(F_00bccc60((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar15 + 0x1c))),
                                *((undefined4 *)GEN_TOP((uVar15 + 0x20))),*((undefined4 *)GEN_TOP((uVar15 + 0x24))),
                                *((undefined4 *)GEN_TOP((uVar15 + 0x28))),(int)*((short *)GEN_TOP((uVar15 + 0x10))),GEN_ARGF(*((float *)GEN_TOP(uVar15))),GEN_ARGF(*((float *)GEN_TOP((uVar15 + 4)))),
                                *((byte *)GEN_TOP((uVar15 + 0x12))) >> 2 & 1,GEN_ARGF(gen_bits2f((*(uint *)&gen_args[0]))))));
  if (piVar14 != ((int *)GEN_TOP(0x0))) {
    if (piVar14[6] != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar14 + 8))))(piVar14 GEN_EDX_ARG);
      F_009f7c20(piVar14 GEN_EDX_ARG,&REFG(undefined, 0x1333238));
      pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x10));
      pbVar5 = (*(byte * PTR32 *)&gen_args[2]);
      if (bVar3) {
        if (((*(*(byte * PTR32 *)&gen_args[2]) & 1) == 0) &&
           ((GEN_ISNAN(gen_bits2f((*(uint *)&gen_args[0]))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
            ((GEN_ISNAN(gen_bits2f((*(uint *)&gen_args[0]))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ||
            gen_bits2f((*(uint *)&gen_args[0])) == *(float *)&REFG(undefined, 0x1088114)))) {
          fVar19 = (float10)0;
        }
        else {
          fVar19 = (float10)1;
        }
        F_009f6650(piVar14 GEN_EDX_ARG,(float)fVar19);
        if ((*pbVar5 & 2) != 0) {
          F_00bc4070((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,0xffffffff);
        }
        bVar6 = F_009f2f00(piVar14 GEN_EDX_ARG);
        if ((bVar6 == 0) && (*(float *)&REFG(undefined, 0x1088114) < gen_bits2f((*(uint *)&gen_args[0])))) {
          uVar15 = F_00a03ed0();
          pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x10));
          *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x38))) = 0;
          F_00bb9d80(piVar16 GEN_EDX_ARG,piVar16 + 3,uVar15);
          F_00bb9d80(piVar16 GEN_EDX_ARG,piVar16 + 4,pvVar9);
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar16 + 8))))(piVar16 GEN_EDX_ARG,(*(uint *)&gen_args[0]));
        }
        else {
          F_00bb9c80(piVar16 GEN_EDX_ARG);
          pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x10));
        }
      }
      else if (0.0 < gen_bits2f((*(uint *)&gen_args[0]))) {
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x38))) = 0;
        F_009f6650(piVar14 GEN_EDX_ARG,(float)(float10)0);
      }
      else {
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x38))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x38))), REFG(float, 0x1087f04));
      }
      *((int * PTR32 *)GEN_TOP(((int)pvVar9 + 0x10))) = piVar14;
      F_00bba7e0(pvVar9 GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0xc)));
      return (uint)pvVar9;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar14 + 0xc))))(piVar14 GEN_EDX_ARG);
  }
  F_00b639d0((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x10)));
  return 0;
}

/* ref: FUN_00b642d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b642d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb642d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x88, 8, 4);
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar1 = F_00b645c0(((byte *)(gen_frame + 0x0)),0x20,0,*((int *)GEN_TOP(((int)this + 4))),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 128)));
    iVar3 = 0;
    uVar2 = uVar1;
    if (0 < (int)uVar1) {
      do {
        uVar2 = F_00bba0e0(*(undefined * PTR32 *)(((byte *)(gen_frame + 0x0)) + iVar3 * 4) GEN_EDX_ARG);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)uVar1);
    }
  }
  return uVar2;
}

/* ref: FUN_00b64330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b64330(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb64330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b64340 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b64340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb64340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00bba950(param_1 GEN_EDX_FWD,*(undefined4 *)this);
  return bVar1;
}

/* ref: FUN_00b64370 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b64370(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb64370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b64380 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b64380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb64380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *(int *)this == *((int *)GEN_TOP((param_1 + 0x20)));
}

/* ref: FUN_00b643a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b643a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb643a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00b643b0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00b643b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb643b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0xc)));
  if (((piVar1 != ((int *)GEN_TOP(0x0))) && (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD), uVar2 == 1)) &&
     (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xc))) + 0x20))) == *((int *)GEN_TOP((*(int *)this + 0x20))))) {
    return 1;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0x10)));
  if (((piVar1 != ((int *)GEN_TOP(0x0))) && (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG), uVar2 == 1)) &&
     (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 0x20))) == *((int *)GEN_TOP((*(int *)this + 0x20))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b64410 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00b64410(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb64410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00bba1e0(param_1 GEN_EDX_ARG);
  return bVar1 == 0;
}

/* ref: FUN_00b64430 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00b64430(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xb64430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00bba210(param_1 GEN_EDX_ARG);
  return bVar1 == 0;
}

/* ref: FUN_00b64450 */
GEN_OWN GEN_FRAME uint F_00b64450(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb64450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  ((int *)(gen_frame + 0x0))[0] = *((int *)GEN_TOP((param_1 + 0xc)));
  ((int *)(gen_frame + 0x0))[1] = uVar1;
  uVar4 = 0;
  do {
    piVar2 = ((int *)GEN_TOP(((int *)(gen_frame + 0x0))[(int)(uVar4)]));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG);
      if (uVar3 == 1) {
        return (uint)piVar2;
      }
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG);
      if ((uVar3 == 0) && (uVar3 = F_00b64450((int)piVar2,param_2), uVar3 != 0)) {
        return uVar3;
      }
    }
    uVar4 = uVar4 + 1;
    if (1 < uVar4) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00b644c0 */
GEN_OWN GEN_FRAME uint F_00b644c0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb644c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0xc)));
  uVar2 = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  ((int * PTR32 *)(gen_frame + 0x0))[0] = piVar1;
  ((int * PTR32 *)(gen_frame + 0x0))[1] = ((int *)GEN_TOP(uVar2));
  if (((piVar1 != ((int *)GEN_TOP(0x0))) && (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG), uVar3 == 1)) &&
     (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xc))) + 0x20))) == *((int *)GEN_TOP((param_2 + 0x20))))) {
    return param_1;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0x10)));
  if (((piVar1 != ((int *)GEN_TOP(0x0))) && (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG), uVar3 == 1)) &&
     (*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 0x20))) == *((int *)GEN_TOP((param_2 + 0x20))))) {
    return param_1;
  }
  uVar3 = 0;
  while (((piVar1 = ((int * PTR32 *)(gen_frame + 0x0))[(int)(uVar3)], piVar1 == ((int *)GEN_TOP(0x0)) ||
          (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG), uVar4 != 0)) ||
         (uVar4 = F_00b644c0((uint)piVar1,param_2), uVar4 == 0))) {
    uVar3 = uVar3 + 1;
    if (1 < uVar3) {
      return 0;
    }
  }
  return uVar4;
}

/* ref: FUN_00b64560 */
GEN_OWN GEN_FRAME uint F_00b64560(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xb64560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *((undefined4 *)GEN_TOP((param_2 + 0x10)));
  ((int *)(gen_frame + 0x0))[0] = *((int *)GEN_TOP((param_2 + 0xc)));
  ((int *)(gen_frame + 0x0))[1] = uVar1;
  uVar5 = 0;
  uVar4 = param_1;
  do {
    piVar2 = ((int *)GEN_TOP(((int *)(gen_frame + 0x0))[(int)(uVar5)]));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG);
      if (uVar3 == 1) {
        uVar4 = uVar4 + 1;
      }
      else if (uVar3 == 0) {
        uVar4 = F_00b64560(uVar4,(int)piVar2,param_3);
      }
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 2);
  return uVar4;
}

/* ref: FUN_00b645c0 */
GEN_OWN GEN_FRAME uint F_00b645c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xb645c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *((undefined4 *)GEN_TOP((param_4 + 0x10)));
  ((int *)(gen_frame + 0x0))[0] = *((int *)GEN_TOP((param_4 + 0xc)));
  ((int *)(gen_frame + 0x0))[1] = uVar1;
  uVar4 = 0;
  uVar5 = param_3;
  do {
    piVar2 = ((int *)GEN_TOP(((int *)(gen_frame + 0x0))[(int)(uVar4)]));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG);
      if (uVar3 == 1) {
        if ((int)uVar5 < param_2) {
          *((int * PTR32 *)GEN_TOP((param_1 + uVar5 * 4))) = piVar2;
          uVar5 = uVar5 + 1;
        }
      }
      else if (uVar3 == 0) {
        uVar5 = F_00b645c0(param_1,param_2,uVar5,(int)piVar2,param_5);
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  return uVar5;
}

/* ref: FUN_00b64630 */
GEN_OWN GEN_FRAME uint F_00b64630(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xb64630u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *((undefined4 *)GEN_TOP((param_4 + 0x10)));
  ((int *)(gen_frame + 0x0))[0] = *((int *)GEN_TOP((param_4 + 0xc)));
  ((int *)(gen_frame + 0x0))[1] = uVar1;
  uVar4 = 0;
  uVar5 = param_3;
  do {
    piVar2 = ((int *)GEN_TOP(((int *)(gen_frame + 0x0))[(int)(uVar4)]));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG);
      if (uVar3 == 1) {
        if ((param_5 == piVar2[8]) && ((int)uVar5 < param_2)) {
          *((int * PTR32 *)GEN_TOP((param_1 + uVar5 * 4))) = piVar2;
          uVar5 = uVar5 + 1;
        }
      }
      else if (uVar3 == 0) {
        uVar5 = F_00b64630(param_1,param_2,uVar5,(int)piVar2,param_5);
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  return uVar5;
}

/* ref: FUN_00b646b0 */
GEN_OWN GEN_FRAME uint F_00b646b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb646b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 uVar1;
  int * this;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  ((undefined4 *)(gen_frame + 0x0))[0] = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  ((undefined4 *)(gen_frame + 0x0))[1] = uVar1;
  uVar4 = 0;
  do {
    this = ((int *)GEN_TOP(((undefined4 *)(gen_frame + 0x0))[(int)(uVar4)]));
    if (this != ((int *)GEN_TOP(0x0))) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x10))))(this GEN_EDX_ARG);
      if (uVar3 == 1) {
        bVar2 = F_00bba1e0(this GEN_EDX_ARG);
        if (bVar2 == 0) {
          return (uint)this;
        }
      }
      else {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x10))))(this GEN_EDX_ARG);
        if ((uVar3 == 0) && (uVar3 = F_00b646b0((int)this,param_2), uVar3 != 0)) {
          return uVar3;
        }
      }
    }
    uVar4 = uVar4 + 1;
    if (1 < uVar4) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00b64730 */
GEN_OWN GEN_FRAME uint F_00b64730(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb64730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 uVar1;
  int * this;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  ((undefined4 *)(gen_frame + 0x0))[0] = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  ((undefined4 *)(gen_frame + 0x0))[1] = uVar1;
  uVar4 = 0;
  do {
    this = ((int *)GEN_TOP(((undefined4 *)(gen_frame + 0x0))[(int)(uVar4)]));
    if (this != ((int *)GEN_TOP(0x0))) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x10))))(this GEN_EDX_ARG);
      if (uVar3 == 1) {
        bVar2 = F_00bba210(this GEN_EDX_ARG);
        if (bVar2 == 0) {
          return (uint)this;
        }
      }
      else {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x10))))(this GEN_EDX_ARG);
        if ((uVar3 == 0) && (uVar3 = F_00b64730((int)this,param_2), uVar3 != 0)) {
          return uVar3;
        }
      }
    }
    uVar4 = uVar4 + 1;
    if (1 < uVar4) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00b647b0 */
GEN_OWN GEN_FRAME uint F_00b647b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb647b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 uVar1;
  int * this;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  ((undefined4 *)(gen_frame + 0x0))[0] = *((undefined4 *)GEN_TOP((param_1 + 0xc)));
  ((undefined4 *)(gen_frame + 0x0))[1] = uVar1;
  uVar4 = 0;
  do {
    this = ((int *)GEN_TOP(((undefined4 *)(gen_frame + 0x0))[(int)(uVar4)]));
    if (this != ((int *)GEN_TOP(0x0))) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x10))))(this GEN_EDX_ARG);
      if (uVar3 == 1) {
        bVar2 = F_00bba950(this GEN_EDX_ARG,param_2);
        if (bVar2 != 0) {
          return (uint)this;
        }
      }
      else {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this + 0x10))))(this GEN_EDX_ARG);
        if ((uVar3 == 0) && (uVar3 = F_00b647b0((int)this,param_2), uVar3 != 0)) {
          return uVar3;
        }
      }
    }
    uVar4 = uVar4 + 1;
    if (1 < uVar4) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00b64850 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b64850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb64850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b644c0(*((undefined4 *)GEN_TOP(((int)this + 4))),param_1);
  return uVar1;
}

/* ref: FUN_00b64870 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b64870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb64870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b64560(0,*((undefined4 *)GEN_TOP(((int)this + 4))),param_1);
  return uVar1;
}

/* ref: FUN_00b64890 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b64890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb64890u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00b645c0(param_1,param_2,0,*((undefined4 *)GEN_TOP(((int)this + 4))),param_3);
  return uVar1;
}

/* ref: FUN_00b648c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b648c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xb648c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00b64630(param_1,param_2,0,*((undefined4 *)GEN_TOP(((int)this + 4))),param_3);
  return uVar1;
}

/* ref: FUN_00b648f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b648f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb648f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b646b0(*((undefined4 *)GEN_TOP(((int)this + 4))),param_1);
  return uVar1;
}

/* ref: FUN_00b64910 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b64910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb64910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b64730(*((undefined4 *)GEN_TOP(((int)this + 4))),param_1);
  return uVar1;
}

/* ref: FUN_00b64930 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b64930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb64930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b647b0(*((undefined4 *)GEN_TOP(((int)this + 4))),param_1);
  return uVar1;
}

/* ref: Client::System::Animation::AnimationTree::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b64950(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb64950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x10f37b4));
  if (param_1[1] != 0) {
    F_00b636a0(param_1 GEN_EDX_FWD,param_1[1]);
    F_00a04250(param_1[1]);
  }
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x10e1614));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00b649c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b649c0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb649c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00b649d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b649d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb649d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00b649e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b649e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb649e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00b649f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b649f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb649f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x10))) = param_2;
  return param_2;
}

/* ref: FUN_00b64a00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b64a00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb64a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x14))) = param_2;
  return param_2;
}

/* ref: FUN_00b64a60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00b64a60(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0xb64a60u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  float * pfVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar5 = (float10)param_4;
  pfVar1 = *((float * PTR32 *)GEN_TOP((param_1 + 8)));
  iVar3 = 0;
  fVar4 = GEN_X87((float10)*pfVar1 + (float10)*(double *)&REFG(undefined, 0x108bec8));
  param_4 = 0.0;
  fVar5 = GEN_X87((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0xc))) * fVar5))));
  if (fVar4 < fVar5) {
    do {
      iVar3 = iVar3 + 1;
      param_4 = (float)fVar4;
      fVar4 = GEN_X87((float10)pfVar1[iVar3 * *((int *)GEN_TOP((param_1 + 0x14)))] + (float10)param_4);
    } while ((!GEN_ISNAN(fVar5) && !GEN_ISNAN(fVar4)) && !(fVar5 <= fVar4));
  }
  iVar2 = *((int *)GEN_TOP((param_1 + 0x10)));
  if (iVar3 < iVar2 - 1) {
    *param_2 = ((float)GEN_TOF(((float10)(float)(fVar5 - (float10)param_4) /
                      (float10)pfVar1[iVar3 * *((int *)GEN_TOP((param_1 + 0x14)))])));
    *param_3 = iVar3;
    return (uint)param_2;
  }
  *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1087f04));
  *param_3 = iVar2 - 2;
  return (uint)param_2;
}

/* ref: FUN_00b64b10 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_00b64b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb64b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float * pfVar5;
  uint uVar6;
  int iVar7;
  float * pfVar8;
  float * local_10;
  float * local_c;
  float local_8;
  
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x10)));
  iVar4 = *((int *)GEN_TOP(((int)this + 0x14)));
  uVar6 = 0;
  local_8 = 0.0;
  if (3 < (int)uVar3) {
    pfVar8 = *((float * PTR32 *)GEN_TOP(((int)this + 8)));
    pfVar5 = pfVar8 + iVar4;
    iVar7 = (uVar3 - 4 >> 2) + 1;
    uVar6 = iVar7 * 4;
    local_10 = pfVar8 + iVar4 * 3;
    local_c = pfVar8 + iVar4 * 2;
    do {
      fVar1 = *pfVar8;
      pfVar8 = pfVar8 + iVar4 * 4;
      fVar2 = *pfVar5;
      pfVar5 = pfVar5 + iVar4 * 4;
      iVar7 = iVar7 - 1;
      local_8 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)fVar1 +
                                                                          (float10)local_8) +
                                                         (float10)fVar2))) + (float10)*local_c))) +
                       (float10)*local_10)));
      local_10 = local_10 + iVar4 * 4;
      local_c = local_c + iVar4 * 4;
    } while (iVar7 != 0);
  }
  if (uVar6 < uVar3) {
    pfVar5 = ((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + uVar6 * iVar4 * 4)));
    iVar7 = uVar3 - uVar6;
    do {
      fVar1 = *pfVar5;
      pfVar5 = pfVar5 + iVar4;
      iVar7 = iVar7 - 1;
      local_8 = (float)((float10)fVar1 + (float10)local_8);
    } while (iVar7 != 0);
  }
  return local_8;
}

/* ref: FUN_00b64bd0 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_00b64bd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xb64bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 8))) + *((int *)GEN_TOP((in_ecx + 0x14))) * param_2 * 4)));
}

/* ref: FUN_00b64bf0 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_00b64bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb64bf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float * pfVar7;
  float * pfVar8;
  uint uVar9;
  float * local_c;
  float local_8;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x14)));
  local_8 = 0.0;
  if (param_1 < param_2) {
    uVar9 = (uint)param_1;
    if (3 < (int)(param_2 - (int)param_1)) {
      iVar4 = *((int *)GEN_TOP(((int)this + 8)));
      pfVar8 = ((float *)GEN_TOP((iVar4 + iVar3 * (int)((int)(uintptr_t)param_1) * 4)));
      iVar6 = (int)param_1 + 3;
      pfVar7 = ((float *)GEN_TOP((iVar4 + ((int)param_1 + 1U) * iVar3 * 4)));
      iVar5 = ((param_2 - (int)param_1) - 4 >> 2) + 1;
      uVar9 = (int)param_1 + iVar5 * 4;
      param_1 = ((float *)GEN_TOP((iVar4 + ((int)param_1 + 2U) * iVar3 * 4)));
      local_c = ((float *)GEN_TOP((iVar4 + iVar6 * iVar3 * 4)));
      do {
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + iVar3 * 4;
        fVar2 = *pfVar7;
        pfVar7 = pfVar7 + iVar3 * 4;
        iVar5 = iVar5 - 1;
        local_8 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)fVar1 +
                                                                            (float10)local_8) +
                                                           (float10)fVar2))) + (float10)*param_1))) +
                         (float10)*local_c)));
        param_1 = param_1 + iVar3 * 4;
        local_c = local_c + iVar3 * 4;
      } while (iVar5 != 0);
    }
    if (uVar9 < param_2) {
      pfVar8 = ((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + uVar9 * iVar3 * 4)));
      iVar6 = param_2 - uVar9;
      do {
        fVar1 = *pfVar8;
        pfVar8 = pfVar8 + iVar3;
        iVar6 = iVar6 - 1;
        local_8 = (float)((float10)fVar1 + (float10)local_8);
      } while (iVar6 != 0);
    }
  }
  return local_8;
}

/* ref: FUN_00b64d50 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_00b64d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xb64d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) +
                   *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x14))) * param_1 * 4)));
}

/* ref: FUN_00b64d70 */
GEN_OWN GEN_FRAME float GEN_THISCALL F_00b64d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb64d70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  float fVar1;
  
  fVar1 = F_00b64bf0(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1,param_2);
  return fVar1;
}

/* ref: FUN_00b64d80 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b64d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb64d80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar1 = F_00406ad0(*((int *)GEN_TOP(((int)this + 4))));
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  return uVar1;
}

/* ref: FUN_00b64dd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b64dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb64dd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  int local_1c;
  uint local_18;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x14)));
  iVar6 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  local_18 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 1) {
    iVar4 = iVar1 * 0x10;
    local_1c = 0;
    iVar5 = iVar4;
    do {
      iVar2 = *(int *)this;
      fVar7 = GEN_X87((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar6 + 4 + iVar2))) -
                              (float10)*((float *)GEN_TOP((iVar5 + 4 + iVar2)))))));
      fVar8 = GEN_X87((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar6 + iVar2))) -
                              (float10)*((float *)GEN_TOP((iVar5 + iVar2)))))));
      fVar9 = GEN_X87((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar6 + 8 + iVar2))) -
                              (float10)*((float *)GEN_TOP((iVar5 + 8 + iVar2)))))));
      local_18 = local_18 + 1;
      *((float *)GEN_TOP((local_1c + *((int *)GEN_TOP(((int)this + 8)))))) =
           ((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF((fVar9 * fVar9 + (fVar8 * fVar8 + fVar7 * fVar7))))))));
      iVar5 = iVar5 + iVar4;
      iVar6 = iVar6 + iVar4;
      *((float *)GEN_TOP(((int)this + 0xc))) =
           ((float)GEN_TOF(((float10)*((float *)GEN_TOP((local_1c + *((int *)GEN_TOP(((int)this + 8)))))) +
                  (float10)*((float *)GEN_TOP(((int)this + 0xc))))));
      local_1c = local_1c + iVar1 * 4;
    } while (local_18 < *((int *)GEN_TOP(((int)this + 0x10))) - 1U);
  }
  uVar3 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP((uVar3 + (*((int *)GEN_TOP(((int)this + 0x10))) - 1) * iVar1 * 4))) = 0;
  return uVar3;
}

/* ref: FUN_00b64ec0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b64ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb64ec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  float fVar1;
  float fVar2;
  int iVar3;
  float * pfVar4;
  float * pfVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float local_30;
  float local_2c;
  float local_28;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x14)));
  if (*((char *)GEN_TOP(((int)this + 0x18))) == '\0') {
    iVar6 = param_2 + 1;
  }
  else if (param_2 < *((int *)GEN_TOP(((int)this + 0x10))) - 2) {
    iVar6 = param_2 + 1;
  }
  else {
    iVar6 = 0;
  }
  fVar1 = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar3 * param_2 * 4)));
  if ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
      ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114))) {
    pfVar5 = ((float *)GEN_TOP((iVar3 * param_2 * 0x10 + *(int *)this)));
    pfVar4 = ((float *)GEN_TOP((iVar6 * iVar3 * 0x10 + *(int *)this)));
    fVar7 = (float10)*(double *)&REFG(undefined, 0x10944e0);
    fVar8 = (float10)fVar1;
    local_30 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)*pfVar4 - (float10)*pfVar5) *
                                       fVar7))) / fVar8)));
    local_2c = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)pfVar4[1] - (float10)pfVar5[1]) *
                                       fVar7))) / fVar8)));
    local_28 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar7 * (float10)(float)((float10)pfVar4[2] -
                                                                (float10)pfVar5[2])))) / fVar8)));
  }
  else {
    local_30 = REFG(float, 0x1375ac0);
    local_2c = REFG(float, 0x1375ac4);
    local_28 = REFG(float, 0x1375ac8);
  }
  pfVar4 = ((float *)GEN_TOP((iVar6 * iVar3 * 0x10 + *((int *)GEN_TOP(((int)this + 4))))));
  fVar1 = pfVar4[1];
  fVar2 = pfVar4[2];
  fVar7 = (float10)REFG(double, 0x1088108);
  *param_1 = ((float)GEN_TOF(((float10)(float)((float10)local_30 - (float10)*pfVar4) * fVar7)));
  param_1[1] = ((float)GEN_TOF(((float10)(float)((float10)local_2c - (float10)fVar1) * fVar7)));
  param_1[2] = ((float)GEN_TOF((fVar7 * (float10)(float)((float10)local_28 - (float10)fVar2))));
  return (uint)param_1;
}

/* ref: FUN_00b65020 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00b65020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb65020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float * pfVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float local_30;
  float local_2c;
  float local_28;
  
  if (*((char *)GEN_TOP(((int)this + 0x18))) == '\0') {
    iVar4 = param_2 - 1;
  }
  else if (param_2 < 1) {
    iVar4 = *((int *)GEN_TOP(((int)this + 0x10))) - 2;
  }
  else {
    iVar4 = param_2 - 1;
  }
  iVar4 = iVar4 * *((int *)GEN_TOP(((int)this + 0x14)));
  fVar1 = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar4 * 4)));
  if ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
      ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114))) {
    iVar6 = *((int *)GEN_TOP(((int)this + 0x14))) * param_2;
    iVar3 = *(int *)this;
    fVar7 = (float10)*(double *)&REFG(undefined, 0x10944e0);
    fVar8 = (float10)fVar1;
    local_30 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar3 + iVar6 * 0x10))) -
                                                        (float10)*((float *)GEN_TOP((iVar3 + iVar4 * 0x10)))))) *
                                       fVar7))) / fVar8)));
    local_2c = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar3 + 4 +
                                                                            iVar6 * 0x10))) -
                                                        (float10)*((float *)GEN_TOP((iVar3 + 4 + iVar4 * 0x10
                                                                           )))))) * fVar7))) / fVar8)));
    local_28 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar7 * (float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((iVar3 + 8 +
                                                                                    iVar6 * 0x10))) -
                                                                (float10)*((float *)GEN_TOP((iVar3 + 8 +
                                                                                   iVar4 * 0x10))))))))) /
                      fVar8)));
  }
  else {
    local_30 = REFG(float, 0x1375ac0);
    local_2c = REFG(float, 0x1375ac4);
    local_28 = REFG(float, 0x1375ac8);
  }
  pfVar5 = ((float *)GEN_TOP((iVar4 * 0x10 + *((int *)GEN_TOP(((int)this + 4))))));
  fVar1 = pfVar5[1];
  fVar2 = pfVar5[2];
  fVar7 = (float10)REFG(double, 0x1088108);
  *param_1 = ((float)GEN_TOF(((float10)(float)((float10)local_30 - (float10)*pfVar5) * fVar7)));
  param_1[1] = ((float)GEN_TOF(((float10)(float)((float10)local_2c - (float10)fVar1) * fVar7)));
  param_1[2] = ((float)GEN_TOF((fVar7 * (float10)(float)((float10)local_28 - (float10)fVar2))));
  return (uint)param_1;
}

/* ref: FUN_00b65190 */
GEN_OWN GEN_NOFRAME float GEN_THISCALL F_00b65190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xb65190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float * pfVar1;
  float fVar2;
  float * pfVar3;
  float * pfVar4;
  int local_18;
  float local_14;
  
  local_18 = *((int *)GEN_TOP(((int)this + 0x10))) - 1;
  local_14 = 0.0;
  if (local_18 != 0) {
    pfVar4 = *(float * PTR32 *)this;
    pfVar3 = pfVar4;
    do {
      pfVar3 = pfVar3 + *((int *)GEN_TOP(((int)this + 0x14))) * 4;
      fVar2 = *pfVar4;
      pfVar1 = pfVar4 + 2;
      pfVar4 = pfVar4 + *((int *)GEN_TOP(((int)this + 0x14))) * 4;
      local_18 = local_18 - 1;
      local_14 = ((float)GEN_TOF(((float10)((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF((((float10)(float)((float10)fVar2 -
                                                                                (float10)*pfVar3) *
                                                                (float10)(float)((float10)fVar2 -
                                                                                (float10)*pfVar3) +
                                                               (float10)0.0) +
                                                              (float10)(float)((float10)*pfVar1 -
                                                                              (float10)pfVar3[2]) *
                                                              (float10)(float)((float10)*pfVar1 -
                                                                              (float10)pfVar3[2]))))))))
                        + (float10)local_14)));
    } while (local_18 != 0);
  }
  return local_14;
}

/* ref: FUN_00b652b0 */
GEN_OWN GEN_NOFRAME float GEN_THISCALL F_00b652b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xb652b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float * pfVar6;
  float * pfVar7;
  int local_18;
  float local_14;
  
  iVar5 = *((int *)GEN_TOP(((int)this + 0x14)));
  local_14 = 0.0;
  if (param_1 < param_2) {
    pfVar7 = ((float *)GEN_TOP((iVar5 * param_1 * 0x10 + *(int *)this)));
    pfVar6 = ((float *)GEN_TOP(((param_1 + 1) * iVar5 * 0x10 + *(int *)this)));
    local_18 = param_2 - param_1;
    do {
      fVar3 = *pfVar7;
      fVar4 = *pfVar6;
      pfVar1 = pfVar7 + 2;
      pfVar2 = pfVar6 + 2;
      pfVar6 = pfVar6 + iVar5 * 4;
      pfVar7 = pfVar7 + iVar5 * 4;
      local_18 = local_18 - 1;
      local_14 = ((float)GEN_TOF(((float10)((float)GEN_TOF(GEN_X87(SQRT((float10)((float)GEN_TOF((((float10)(float)((float10)fVar3 -
                                                                                (float10)fVar4) *
                                                                (float10)(float)((float10)fVar3 -
                                                                                (float10)fVar4) +
                                                               (float10)0.0) +
                                                              (float10)(float)((float10)*pfVar1 -
                                                                              (float10)*pfVar2) *
                                                              (float10)(float)((float10)*pfVar1 -
                                                                              (float10)*pfVar2)))))))) +
                        (float10)local_14)));
    } while (local_18 != 0);
  }
  return local_14;
}

/* ref: FUN_00b65370 */
GEN_OWN GEN_NOFRAME uint GEN_STDCALL F_00b65370(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4), GEN_P(float param_6, float gen_a5))
{
  GEN_ENTER(0xb65370u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(float param_6 = (float)gen_a5;)
  GEN_FRAME_DECL(0xe0, 0);
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  float10 fVar7;
  
  (*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = param_1;
  ((undefined4 *)(gen_frame + 0x80))[0] = *param_2;
  ((undefined4 *)(gen_frame + 0x80))[1] = param_2[1];
  (*(undefined4 *)(gen_frame + 0x90)) = *param_4;
  ((undefined4 *)(gen_frame + 0x80))[2] = param_2[2];
  (*(undefined4 *)(gen_frame + 0x94)) = param_4[1];
  ((undefined4 *)(gen_frame + 0x80))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x80))[3], REFG(float, 0x1087f04));
  (*(undefined4 *)(gen_frame + 0x9c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0xa0)) = *param_3;
  (*(undefined4 *)(gen_frame + 0xa4)) = param_3[1];
  (*(undefined4 *)(gen_frame + 0x98)) = param_4[2];
  (*(undefined4 *)(gen_frame + 0xb0)) = *param_5;
  (*(undefined4 *)(gen_frame + 0xa8)) = param_3[2];
  (*(undefined4 *)(gen_frame + 0xb4)) = param_5[1];
  (*(undefined4 *)(gen_frame + 0xac)) = 0;
  (*(undefined4 *)(gen_frame + 0xb8)) = param_5[2];
  (*(undefined4 *)(gen_frame + 0xbc)) = 0;
  puVar4 = ((undefined4 *)GEN_TOP(F_004f0e10(((undefined1 *)(gen_frame + 0x40)),0x133d0a0,(uint)((undefined4 *)(gen_frame + 0x80)))));
  fVar7 = (float10)param_6;
  puVar6 = ((undefined4 *)(gen_frame + 0x80));
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 - 1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF((fVar7 * (fVar7 * fVar7))));
  (*(float *)(gen_frame + 0x14)) = (float)(fVar7 * fVar7);
  (*(float *)(gen_frame + 0x18)) = param_6;
  (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  puVar4 = ((undefined4 *)GEN_TOP(F_004eede0(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x10)),((undefined4 *)(gen_frame + 0x80)))));
  uVar1 = puVar4[1];
  (*(undefined4 *)(gen_frame + 0x20)) = *puVar4;
  uVar2 = puVar4[2];
  (*(undefined4 *)(gen_frame + 0x24)) = uVar1;
  uVar3 = puVar4[3];
  *(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = *puVar4;
  (*(undefined4 *)(gen_frame + 0x28)) = uVar2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[1] = uVar1;
  (*(undefined4 *)(gen_frame + 0x2c)) = uVar3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[2] = uVar2;
  return (uint)(*(undefined4 * PTR32 *)(gen_frame + 0x3c));
}

