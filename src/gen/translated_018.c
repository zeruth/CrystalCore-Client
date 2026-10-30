#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Client::System::File::FileManager::vf1 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_004fdcb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4fdcb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = F_004fd8a0(this GEN_EDX_FWD);
  return bVar1;
}

/* ref: Client::System::File::FileThread::vf5 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fdcc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4fdcc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  undefined * this_00;
  byte bVar2;
  DWORD DVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  int * piVar7;
  int iVar8;
  undefined4 local_10;
  
  F_004f91f0(this GEN_EDX_FWD);
  this_00 = REFG(void * PTR32, 0x1375ae8);
  DVar3 = gen_imp_GetCurrentThreadId();
  *(DWORD *)(this + 0xb8) = DVar3;
  while( true ) {
    while (F_004cee80(), *(int *)(this + 0xc0) != 0) {
      F_004fd040(this GEN_EDX_ARG);
      if (this[0x14] != (undefined1)0x0) goto LAB_004fe05f;
      do {
        iVar6 = _InterlockedExchange((volatile long *)((((int *)GEN_TOP(((int)this_00 + 0xbc))))), (long)(1));
      } while (iVar6 != 0);
      iVar8 = 0;
      iVar6 = 7;
      piVar4 = ((int *)GEN_TOP(((int)this_00 + 0x34)));
      do {
        piVar7 = ((int *)GEN_TOP(*piVar4));
        iVar6 = iVar6 - 1;
        if (piVar7 != ((int *)GEN_TOP(0x0))) {
          _InterlockedExchange((volatile long *)((((undefined4 *)GEN_TOP(((int)this_00 + 0xbc))))), (long)(0));
          gen_imp_WaitForSingleObject(*((HANDLE *)GEN_TOP(((int)this_00 + 200))),0xffffffff);
          goto LAB_004fdddc;
        }
        iVar8 = iVar8 + 1;
        piVar4 = piVar4 + 3;
      } while (iVar6 != 0);
      _InterlockedExchange((volatile long *)((((undefined4 *)GEN_TOP(((int)this_00 + 0xbc))))), (long)(0));
      F_004cee80();
    }
    gen_imp_WaitForSingleObject(*((HANDLE *)GEN_TOP(((int)this_00 + 200))),0xffffffff);
    if (this[0x14] != (undefined1)0x0) break;
    do {
      iVar6 = _InterlockedExchange((volatile long *)((((int *)GEN_TOP(((int)this_00 + 0xbc))))), (long)(1));
    } while (iVar6 != 0);
    iVar8 = 0;
    iVar6 = 7;
    piVar4 = ((int *)GEN_TOP(((int)this_00 + 0x34)));
    do {
      piVar7 = ((int *)GEN_TOP(*piVar4));
      iVar6 = iVar6 - 1;
      if (piVar7 != ((int *)GEN_TOP(0x0))) {
        _InterlockedExchange((volatile long *)((((undefined4 *)GEN_TOP(((int)this_00 + 0xbc))))), (long)(0));
        goto LAB_004fdddc;
      }
      iVar8 = iVar8 + 1;
      piVar4 = piVar4 + 3;
    } while (iVar6 != 0);
    _InterlockedExchange((volatile long *)((((undefined4 *)GEN_TOP(((int)this_00 + 0xbc))))), (long)(0));
    iVar8 = 0;
LAB_004fdddc: ;
    iVar6 = *piVar7;
    if (iVar6 == 6) {
      F_009f15d0(5);
      F_009f0540(0);
      if ((*piVar7 == 0xb) && ((char)piVar7[0x3b] != '\0')) {
        if (piVar7[0x3a] != 0) {
          F_00406b30(piVar7[0x3a]);
          piVar7[0x3a] = 0;
        }
        *(undefined1 *)(piVar7 + 0x3b) = 0;
      }
      do {
        iVar6 = _InterlockedExchange((volatile long *)((((int *)GEN_TOP(((int)this_00 + 0xbc))))), (long)(1));
      } while (iVar6 != 0);
      iVar6 = piVar7[0xe];
      iVar1 = piVar7[0xf];
      if (iVar6 == 0) {
        *((int *)GEN_TOP(((int)this_00 + iVar8 * 0xc + 0x34))) = iVar1;
      }
      else {
        *((int *)GEN_TOP((iVar6 + 0x3c))) = iVar1;
      }
      if (iVar1 == 0) {
        *((int *)GEN_TOP(((int)this_00 + iVar8 * 0xc + 0x38))) = iVar6;
      }
      else {
        *((int *)GEN_TOP((iVar1 + 0x38))) = iVar6;
      }
      piVar4 = ((int *)GEN_TOP(((int)this_00 + (iVar8 * 3 + 0xf) * 4)));
      *piVar4 = *piVar4 - 1;
      iVar6 = *((int *)GEN_TOP(((int)this_00 + 0xb0)));
      if (iVar6 == 0) {
        *((int * PTR32 *)GEN_TOP(((int)this_00 + 0xac))) = piVar7;
      }
      else {
        *((int * PTR32 *)GEN_TOP((iVar6 + 0x3c))) = piVar7;
      }
      piVar7[0xe] = iVar6;
      piVar7[0xf] = 0;
      *((int *)GEN_TOP(((int)this_00 + 0xb4))) = *((int *)GEN_TOP(((int)this_00 + 0xb4))) + 1;
      *((int * PTR32 *)GEN_TOP(((int)this_00 + 0xb0))) = piVar7;
      _InterlockedExchange((volatile long *)((((undefined4 *)GEN_TOP(((int)this_00 + 0xbc))))), (long)(0));
      if (iVar8 == 3) {
        gen_imp_SetEvent(*((HANDLE *)GEN_TOP(((int)this_00 + 0xcc))));
      }
    }
    else if (iVar6 == 7) {
      bVar2 = F_004fa8d0(piVar7);
      if (bVar2 != 0) {
        if ((*piVar7 == 0xb) && ((char)piVar7[0x3b] != '\0')) {
          if (piVar7[0x3a] != 0) {
            F_00406b30(piVar7[0x3a]);
            piVar7[0x3a] = 0;
          }
          *(undefined1 *)(piVar7 + 0x3b) = 0;
        }
        F_004fa350(this_00 GEN_EDX_ARG,iVar8,piVar7,10,0);
        if (iVar8 == 3) {
          gen_imp_SetEvent(*((HANDLE *)GEN_TOP(((int)this_00 + 0xcc))));
        }
      }
    }
    else if (iVar6 == 8) {
      (*((code *)GEN_TOP(piVar7[0x10])))(piVar7[0x11],piVar7 + 0x12,piVar7);
      iVar6 = ((piVar7[8] << 6) >> 6) * 0x20 + *((int *)GEN_TOP((REFG(int, 0x1375ae4) + 8 + (piVar7[8] >> 0x1c) * 4)));
      piVar4 = ((int *)GEN_TOP((REFG(int, 0x1375ae4) + 4)));
      do {
        iVar1 = _InterlockedExchange((volatile long *)(piVar4), (long)(1));
      } while (iVar1 != 0);
      local_10 = 1;
      if (((*((char *)GEN_TOP((iVar6 + 8))) != '\0') && (local_10 = 2, *((char *)GEN_TOP((iVar6 + 9))) != '\0')) &&
         (*((int *)GEN_TOP((iVar6 + 0xc))) != 0)) {
        F_00406ad0(*((undefined4 *)GEN_TOP((iVar6 + 0xc))));
        *((undefined4 *)GEN_TOP((iVar6 + 0xc))) = 0;
        *((undefined1 *)GEN_TOP((iVar6 + 9))) = 0;
      }
      *((undefined4 *)GEN_TOP((iVar6 + 4))) = local_10;
      _InterlockedExchange((volatile long *)(piVar4), (long)(0));
      if ((*piVar7 == 0xb) && ((char)piVar7[0x3b] != '\0')) {
        if (piVar7[0x3a] != 0) {
          F_00406b30(piVar7[0x3a]);
          piVar7[0x3a] = 0;
        }
        *(undefined1 *)(piVar7 + 0x3b) = 0;
      }
      F_004fa350(this_00 GEN_EDX_ARG,iVar8,piVar7,10,0);
      if (iVar8 == 3) {
        gen_imp_SetEvent(*((HANDLE *)GEN_TOP(((int)this_00 + 0xcc))));
      }
    }
    else {
      if (iVar6 < 9) {
        bVar2 = F_004fa4b0(piVar7);
      }
      else {
        bVar2 = F_004fd6e0(this GEN_EDX_ARG,piVar7,iVar8,(uint)(iVar8 == 3));
      }
      if (bVar2 != 0) {
        F_004fb400(this_00 GEN_EDX_ARG,iVar8,piVar7);
      }
    }
  }
LAB_004fe05f: ;
  uVar5 = F_009f1600(0);
  return uVar5;
}

/* ref: FUN_004fe0f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fe0f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4fe0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x2c))) = param_2;
  return param_2;
}

/* ref: FUN_004fe100 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fe100(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4fe100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x30))) = param_2;
  return param_2;
}

/* ref: FUN_004fe1f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fe1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4fe1f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_2;
  *((uint *)GEN_TOP(((int)this + 0x14))) = param_3;
  return param_3;
}

/* ref: FUN_004fe230 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fe230(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4fe230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x18))) = param_2;
  return param_2;
}

/* ref: FUN_004fe250 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_004fe250(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4fe250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return 8 < param_1;
}

/* ref: FUN_004fe280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fe280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4fe280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + *((int *)GEN_TOP(((int)this + 0x804))) * 4 + 4))) = param_1;
  *((int *)GEN_TOP(((int)this + 0x804))) = *((int *)GEN_TOP(((int)this + 0x804))) + 1;
  *((int *)GEN_TOP(((int)this + 0x808))) = *((int *)GEN_TOP(((int)this + 0x808))) + param_2;
  return param_2;
}

/* ref: FUN_004fe2c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004fe2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(LONG param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4fe2c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(LONG param_1 = (LONG)gen_a1;)
  return (uint)(gen_imp_ReleaseSemaphore(*(HANDLE *)this,param_1,(LPLONG)0x0));
}

/* ref: FUN_004fe300 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fe300(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4fe300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00b49a20(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_004fe330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fe330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4fe330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)this)(*((undefined4 *)GEN_TOP(((int)this + 4))),(int)this + 8,param_1);
  return uVar1;
}

/* ref: FUN_004fe380 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fe380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4fe380u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  uint uVar1;
  
  uVar1 = (param_1 & 0x3ffffff | param_2 << 0x1c) ^ (param_3 & 3) << 0x1a;
  *(uint *)this = uVar1;
  return uVar1;
}

/* ref: FUN_004fe3e0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_004fe3e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4fe3e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (this != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)this = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1[3];
  }
  return;
}

/* ref: FUN_004fe410 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fe410(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4fe410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_004fe430 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fe430(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4fe430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_004fe450 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fe450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4fe450u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2;
  return param_1;
}

/* ref: FUN_004fe480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fe480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4fe480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 0x10))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2;
  return param_1;
}

/* ref: FUN_004fe4b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fe4b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4fe4b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x2c))) = param_2;
  return param_2;
}

/* ref: FUN_004fe4d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fe4d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4fe4d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x30))) = param_2;
  return param_2;
}

/* ref: FUN_004fe4f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fe4f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4fe4f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x28))) = param_2;
  return param_2;
}

/* ref: FUN_004fe510 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fe510(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4fe510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x34))) = param_2;
  return param_2;
}

/* ref: FUN_004fe530 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fe530(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4fe530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x24))) = param_2;
  return param_2;
}

/* ref: FUN_004fe550 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fe550(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4fe550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x20)));
  return (uint)param_2;
}

/* ref: FUN_004fe560 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fe560(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4fe560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x38))) = param_2;
  return param_2;
}

/* ref: FUN_004fe580 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fe580(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4fe580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x3c))) = param_2;
  return param_2;
}

/* ref: FUN_004fe600 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fe600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4fe600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((uint *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2;
  return param_1;
}

/* ref: FUN_004fe6d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fe6d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4fe6d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = _InterlockedExchange((volatile long *)((((uint *)GEN_TOP((in_ecx + 0x8c))))), (long)(param_2));
  return uVar1;
}

/* ref: FUN_004fe700 */
GEN_OWN GEN_FRAME byte F_004fe700(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4fe700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  return *param_1 == 0xb;
}

/* ref: FUN_004fe710 */
GEN_OWN GEN_FRAME uint F_004fe710(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4fe710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (uint)(1 < *((uint *)GEN_TOP((param_1 + 0x4c))));
}

/* ref: FUN_004fe720 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004fe720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4fe720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  if ((*param_1 == 0xb) && (1 < (uint)param_1[0x13])) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa4))))(this GEN_EDX_FWD);
    if (uVar1 == 1) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_004fe750 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004fe750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4fe750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00a1abd0(this GEN_EDX_FWD);
  while (uVar1 == 0) {
    F_004cee60(0);
    uVar1 = F_00a1abd0(this GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: Client::System::File::FileAccessPath::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fe780(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4fe780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1097d38));
  *(undefined4 *)&REFG(undefined, 0x1375ae0) = 0;
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_004fe7b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fe7b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(LONG param_1, unsigned int gen_a1), GEN_P(LONG param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4fe7b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(LONG param_1 = (LONG)gen_a1;)
  GEN_PIN(LONG param_2 = (LONG)gen_a2;)
  HANDLE pvVar1;
  
  pvVar1 = gen_imp_CreateSemaphoreA((GEN_LPANY)0x0,param_1,param_2,(LPCSTR)0x0);
  *(HANDLE *)this = pvVar1;
  return (uint)this;
}

/* ref: FUN_004fe810 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fe810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4fe810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *(uint *)this = (param_1 & 0x3ffffff | param_1 << 0x1c) ^ (param_1 & 3) << 0x1a;
  return (uint)this;
}

/* ref: Client::System::File::FileHandleManager::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fe840(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4fe840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1097d40));
  puVar1 = param_1 + 2;
  iVar2 = 7;
  do {
    F_00406b30(*puVar1);
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  REFG(int, 0x1375ae4) = iVar2;
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::File::FileManager::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fe890(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4fe890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_004f8ef0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::File::FileThread::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fe8c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4fe8c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_004f91a0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::File::FileInterface::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fe950(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4fe950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  BOOL BVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1097d48));
  if (*(char *)(param_1 + 6) != '\0') {
    BVar1 = gen_imp_CloseHandle((HANDLE)param_1[4]);
    if (BVar1 != 0) {
      *(undefined1 *)(param_1 + 6) = 0;
    }
  }
  if (*((char *)GEN_TOP(((int)param_1 + 0x19))) != '\0') {
    if (param_1[5] != 0) {
      F_00406ad0(param_1[5]);
      param_1[5] = 0;
    }
    BVar1 = gen_imp_FindClose((HANDLE)param_1[4]);
    if (BVar1 != 0) {
      *((undefined1 *)GEN_TOP(((int)param_1 + 0x19))) = 0;
    }
  }
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::System::File::StreamFile::vf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fe9c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4fe9c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_004faa20(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_004fe9f0 */
GEN_OWN_GS GEN_FRAME uint F_004fe9f0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4fe9f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1097d80),REFG(undefined4, 0x108cc50));
  uVar1 = F_0042c8f0(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),REFG(undefined4, 0x108cc50));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (uVar1 != REFG(undefined4, 0x108cc50)) {
    uVar1 = F_0042d2f0(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar1 + 1,REFG(undefined4, 0x108cc50));
    F_0042ccf0(param_1 GEN_EDX_ARG,uVar1);
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return (uint)param_1;
  }
  F_0042ccf0(param_1 GEN_EDX_ARG,param_2);
  return (uint)param_1;
}

/* ref: FUN_004fea90 */
GEN_OWN_GS GEN_FRAME uint F_004fea90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4fea90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_GS(0xb8, 8, 4);
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xb0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb4));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) = param_1;
  ((byte *)(gen_frame + 0x0))[0] = 0;
  ((byte *)(gen_frame + 0x0))[1] = 0;
  ((byte *)(gen_frame + 0x0))[2] = 0;
  ((byte *)(gen_frame + 0x0))[3] = 0;
  if (param_3 == '\0') {
    F_0042cc20(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,&REFG(undefined, 0x1097d84),REFG(undefined4, 0x108cc50));
    uVar2 = F_0042c8f0(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)),REFG(undefined4, 0x108cc50));
    F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  }
  else {
    F_0042cc20(((byte *)(gen_frame + 0x0)) + 8 GEN_EDX_ARG,&REFG(undefined, 0x1097d88),REFG(undefined4, 0x108cc50));
    uVar2 = F_0042c8b0(param_2 GEN_EDX_ARG,((byte *)(gen_frame + 0x0)) + 8,0);
    F_0042c880(((byte *)(gen_frame + 0x0)) + 8 GEN_EDX_ARG);
  }
  uVar1 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4));
  if (uVar2 == REFG(undefined4, 0x108cc50)) {
    F_0042ccf0(((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)))) GEN_EDX_ARG,param_2);
    ((byte *)(gen_frame + 0x0))[4] = (byte)uVar1;
    ((byte *)(gen_frame + 0x0))[5] = SUB41(uVar1,1);
    ((byte *)(gen_frame + 0x0))[6] = SUB41(uVar1,2);
    ((byte *)(gen_frame + 0x0))[7] = SUB41(uVar1,3);
    (*(undefined1 *)((char *)&uVar3 + 0)) = ((byte *)(gen_frame + 0x0))[4];
    (*(undefined1 *)((char *)&uVar3 + 1)) = ((byte *)(gen_frame + 0x0))[5];
    (*(undefined1 *)((char *)&uVar3 + 2)) = ((byte *)(gen_frame + 0x0))[6];
    (*(undefined1 *)((char *)&uVar3 + 3)) = ((byte *)(gen_frame + 0x0))[7];
    return uVar3;
  }
  uVar2 = F_0042d2f0(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)),0,uVar2);
  uVar1 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4));
  F_0042ccf0(((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)))) GEN_EDX_ARG,uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  ((byte *)(gen_frame + 0x0))[4] = (byte)uVar1;
  ((byte *)(gen_frame + 0x0))[5] = SUB41(uVar1,1);
  ((byte *)(gen_frame + 0x0))[6] = SUB41(uVar1,2);
  ((byte *)(gen_frame + 0x0))[7] = SUB41(uVar1,3);
  (*(undefined1 *)((char *)&uVar2 + 0)) = ((byte *)(gen_frame + 0x0))[4];
  (*(undefined1 *)((char *)&uVar2 + 1)) = ((byte *)(gen_frame + 0x0))[5];
  (*(undefined1 *)((char *)&uVar2 + 2)) = ((byte *)(gen_frame + 0x0))[6];
  (*(undefined1 *)((char *)&uVar2 + 3)) = ((byte *)(gen_frame + 0x0))[7];
  return uVar2;
}

/* ref: FUN_004feba0 */
GEN_OWN_GS GEN_FRAME uint F_004feba0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4feba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1097d8c),REFG(undefined4, 0x108cc50));
  uVar1 = F_0042c8f0(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),REFG(undefined4, 0x108cc50));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (uVar1 != REFG(undefined4, 0x108cc50)) {
    uVar1 = F_0042d2f0(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar1 + 1,REFG(undefined4, 0x108cc50));
    F_0042ccf0(param_1 GEN_EDX_ARG,uVar1);
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return (uint)param_1;
  }
  F_0042e430(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1097d82));
  return (uint)param_1;
}

/* ref: FUN_004fec50 */
GEN_OWN_GS GEN_FRAME uint F_004fec50(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4fec50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1097d90),REFG(undefined4, 0x108cc50));
  uVar1 = F_0042c8f0(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),REFG(undefined4, 0x108cc50));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (uVar1 != REFG(undefined4, 0x108cc50)) {
    uVar1 = F_0042d2f0(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0,uVar1);
    F_0042ccf0(param_1 GEN_EDX_ARG,uVar1);
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return (uint)param_1;
  }
  F_0042ccf0(param_1 GEN_EDX_ARG,param_2);
  return (uint)param_1;
}

/* ref: FUN_004fecf0 */
GEN_OWN_GS GEN_FRAME uint F_004fecf0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4fecf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1097d94),REFG(undefined4, 0x108cc50));
  uVar1 = F_0042c8f0(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),REFG(undefined4, 0x108cc50));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (uVar1 != REFG(undefined4, 0x108cc50)) {
    uVar1 = F_0042d2f0(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0,uVar1 + 1);
    F_0042ccf0(param_1 GEN_EDX_ARG,uVar1);
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return (uint)param_1;
  }
  F_0042ccf0(param_1 GEN_EDX_ARG,param_2);
  return (uint)param_1;
}

/* ref: FUN_004fed90 */
GEN_OWN_GS GEN_FRAME uint F_004fed90(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4fed90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1097d98),REFG(undefined4, 0x108cc50));
  uVar1 = F_0042c8f0(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),REFG(undefined4, 0x108cc50));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (uVar1 != REFG(undefined4, 0x108cc50)) {
    F_0042d2f0(param_2 GEN_EDX_ARG,param_1,uVar1 + 1,REFG(undefined4, 0x108cc50));
    return (uint)param_1;
  }
  F_0042cbc0(param_1 GEN_EDX_ARG,param_2);
  return (uint)param_1;
}

/* ref: FUN_004fee20 */
GEN_OWN_GS GEN_FRAME uint F_004fee20(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4fee20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042b630(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_004fe9f0(((undefined1 *)(gen_frame + 0x0)),param_2);
  uVar1 = F_004fea90(((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x0)),param_3);
  F_0042cbc0(param_1 GEN_EDX_ARG,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_004fee90 */
GEN_OWN_GS GEN_FRAME uint F_004fee90(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4fee90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042b630(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar1 = F_004fea90(((undefined1 *)(gen_frame + 0x0)),param_2,param_3);
  F_0042cbc0(param_1 GEN_EDX_ARG,uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_004feef0 */
GEN_OWN_GS GEN_FRAME uint F_004feef0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4feef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1097d9c),REFG(undefined4, 0x108cc50));
  uVar1 = F_0042c8f0(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),REFG(undefined4, 0x108cc50));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (uVar1 != REFG(undefined4, 0x108cc50)) {
    F_0042d2f0(param_2 GEN_EDX_ARG,param_1,uVar1 + 1,REFG(undefined4, 0x108cc50));
    return (uint)param_1;
  }
  F_0042cc20(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1097d83),REFG(undefined4, 0x108cc50));
  return (uint)param_1;
}

/* ref: FUN_004fef80 */
GEN_OWN_GS GEN_FRAME uint F_004fef80(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4fef80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1097da0),REFG(undefined4, 0x108cc50));
  uVar1 = F_0042c8f0(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),REFG(undefined4, 0x108cc50));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (uVar1 != REFG(undefined4, 0x108cc50)) {
    F_0042d2f0(param_2 GEN_EDX_ARG,param_1,0,uVar1);
    return (uint)param_1;
  }
  F_0042cbc0(param_1 GEN_EDX_ARG,param_2);
  return (uint)param_1;
}

/* ref: FUN_004ff010 */
GEN_OWN_GS GEN_FRAME uint F_004ff010(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4ff010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1097da4),REFG(undefined4, 0x108cc50));
  uVar1 = F_0042c8f0(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),REFG(undefined4, 0x108cc50));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (uVar1 != REFG(undefined4, 0x108cc50)) {
    F_0042d2f0(param_2 GEN_EDX_ARG,param_1,0,uVar1 + 1);
    return (uint)param_1;
  }
  F_0042cbc0(param_1 GEN_EDX_ARG,param_2);
  return (uint)param_1;
}

/* ref: FUN_004ff0a0 */
GEN_OWN_GS GEN_FRAME uint F_004ff0a0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4ff0a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  uint uVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1097da8),REFG(undefined4, 0x108cc50));
  uVar1 = F_0042c8f0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),REFG(undefined4, 0x108cc50));
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  if (uVar1 != REFG(undefined4, 0x108cc50)) {
    uVar2 = F_0042b790(param_1 GEN_EDX_ARG);
    uVar1 = F_0042d6c0(param_1 GEN_EDX_ARG,uVar1,uVar2 - uVar1,param_2);
    return uVar1;
  }
  uVar1 = F_0042e360(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_004ff130 */
GEN_OWN GEN_FRAME uint F_004ff130(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4ff130u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  F_004fe9f0(param_1,param_2);
  uVar1 = F_004fea90(param_1,param_1,(undefined1)param_3);
  return uVar1;
}

/* ref: FUN_004ff160 */
GEN_OWN_GS GEN_FRAME uint F_004ff160(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4ff160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x5c, 4, 4);
  char * pcVar1;
  uint uVar2;
  char * pcVar3;
  undefined4 uVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x54)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x58));
  pcVar3 = ((char *)GEN_TOP(*param_1));
  if (*pcVar3 != '\0') {
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1097dac),REFG(undefined4, 0x108cc50));
    pcVar1 = ((char *)GEN_TOP(F_0042c8f0(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),REFG(undefined4, 0x108cc50))));
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar2 = F_0042b790(param_1 GEN_EDX_ARG);
    pcVar3 = ((char *)GEN_TOP((uVar2 - 1)));
    if (pcVar1 == pcVar3) {
      uVar4 = 1;
      uVar2 = F_0042b790(param_1 GEN_EDX_ARG);
      pcVar3 = ((char *)GEN_TOP(F_0042b9e0(param_1 GEN_EDX_ARG,uVar2 - 1,uVar4)));
    }
  }
  return (uint)pcVar3;
}

/* ref: FUN_004ff1e0 */
GEN_OWN_GS GEN_FRAME uint F_004ff1e0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4ff1e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL_GS(0x24, 12, 4);
  char cVar1;
  char * PTR32 * PTR32 * pppcVar2;
  char * pcVar3;
  char * PTR32 * PTR32 * PTR32 * ppppcVar4;
  uint uVar5;
  char * pcVar6;
  char * PTR32 * PTR32 * PTR32 * ppppcVar7;
  ulonglong uVar8;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x1c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20));
  pcVar3 = ((char *)GEN_TOP(F_0042a990(param_1 GEN_EDX_ARG)));
  pppcVar2 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
  (*(uint *)(gen_frame + 0x14)) = 0xf;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined1 *)((char *)&((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] + 0)) = 0;
  ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = ((char * PTR32 * PTR32 *)GEN_TOP(((uint)pppcVar2 & 0xffffff00)));
  pcVar6 = pcVar3;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_004e5c20(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
  if (param_2 == '\\') {
    ppppcVar7 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
    if ((*(uint *)(gen_frame + 0x14)) < 0x10) {
      ppppcVar7 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
    }
    ppppcVar7 = ((char * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)ppppcVar7 + (*(int *)(gen_frame + 0x10)))));
    ppppcVar4 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
    if ((*(uint *)(gen_frame + 0x14)) < 0x10) {
      ppppcVar4 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
    }
    for (; ppppcVar4 != ppppcVar7; ppppcVar4 = ((char * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)ppppcVar4 + 1)))) {
      if (*(char *)ppppcVar4 == '/') {
        *(char *)ppppcVar4 = '\\';
      }
    }
  }
  else if (param_2 == '/') {
    ppppcVar7 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
    if ((*(uint *)(gen_frame + 0x14)) < 0x10) {
      ppppcVar7 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
    }
    ppppcVar7 = ((char * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)ppppcVar7 + (*(int *)(gen_frame + 0x10)))));
    ppppcVar4 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
    if ((*(uint *)(gen_frame + 0x14)) < 0x10) {
      ppppcVar4 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
    }
    for (; ppppcVar4 != ppppcVar7; ppppcVar4 = ((char * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)ppppcVar4 + 1)))) {
      if (*(char *)ppppcVar4 == '\\') {
        *(char *)ppppcVar4 = '/';
      }
    }
  }
  ppppcVar7 = (char * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
  if ((*(uint *)(gen_frame + 0x14)) < 0x10) {
    ppppcVar7 = ((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
  }
  F_0042e430(param_1 GEN_EDX_ARG,ppppcVar7);
  uVar5 = (*(uint *)(gen_frame + 0x14));
  if (0xf < (*(uint *)(gen_frame + 0x14))) {
    uVar8 = F_00429760(((char * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0],(*(uint *)(gen_frame + 0x14)) + 1,0x32);
    uVar5 = (uint)uVar8;
  }
  return uVar5;
}

/* ref: FUN_004ff2d0 */
GEN_OWN GEN_FRAME uint F_004ff2d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4ff2d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_004ff1e0(param_1,0x2f);
  return uVar1;
}

/* ref: FUN_004ff2f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004ff2f0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ff2f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0xffffffff;
  return (uint)in_ecx;
}

/* ref: FUN_004ff300 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ff300(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4ff300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004ff310 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ff310(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4ff310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *in_ecx = param_3 << 0x10 | param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004ff330 */
GEN_OWN GEN_FRAME uint F_004ff330(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4ff330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 == -1) {
    return (uint)(&REFG(undefined * PTR32, 0x1097ee8))[(int)(param_1 * 2)];
  }
  if (param_1 != 2) {
    if (param_1 != 3) {
      return (uint)(&REFG(undefined * PTR32, 0x1097ee8))[(int)(param_1 * 2)];
    }
    return (uint)(&REFG(undefined * PTR32, 0x1097fec))[(int)(param_2 * 2)];
  }
  return (uint)(&REFG(undefined * PTR32, 0x1097fb0))[(int)(param_2 * 2)];
}

/* ref: FUN_004ff370 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ff370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x4ff370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  
  pbVar2 = (*(byte * PTR32 *)&gen_args[0]);
  do {
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
  } while (bVar1 != 0);
  iVar3 = (int)pbVar2 - (int)((*(byte * PTR32 *)&gen_args[0]) + 1);
  if (iVar3 < 4) {
    bVar1 = 0;
    pbVar2 = (*(byte * PTR32 *)&gen_args[0]);
  }
  else {
    bVar1 = *(*(byte * PTR32 *)&gen_args[0]);
    pbVar2 = (*(byte * PTR32 *)&gen_args[0]) + 1;
  }
  if (iVar3 < 3) {
    (*(byte * PTR32 *)&gen_args[0]) = ((byte *)GEN_TOP(((uint)bVar1 << 0x18)));
  }
  else {
    (*((undefined2 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[0]) + 2)))) = CONCAT11(bVar1,*pbVar2);
    pbVar2 = pbVar2 + 1;
  }
  if (iVar3 < 2) {
    (*(byte * PTR32 *)&gen_args[0]) = ((byte *)GEN_TOP(((uint)(*((undefined2 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[0]) + 2)))) << 0x10)));
  }
  else {
    (*(byte * PTR32 *)&gen_args[0]) = ((byte *)GEN_TOP(((uint)CONCAT21((*((undefined2 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[0]) + 2)))),*pbVar2) << 8)));
    pbVar2 = pbVar2 + 1;
  }
  if (0 < iVar3) {
    bVar1 = *pbVar2;
    (*(byte * PTR32 *)&gen_args[0]) = ((byte *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(byte * PTR32 *)&gen_args[0]), 1, 3),bVar1)));
    *(byte * PTR32 *)this = (*(byte * PTR32 *)&gen_args[0]);
    return CONCAT31((int3)((uint)iVar3 >> 8),bVar1);
  }
  (*(byte * PTR32 *)&gen_args[0]) = ((byte *)GEN_TOP(((uint)GEN_PIECE(&(*(byte * PTR32 *)&gen_args[0]), 1, 3) << 8)));
  *(byte * PTR32 *)this = (*(byte * PTR32 *)&gen_args[0]);
  return (uint)(*(byte * PTR32 *)&gen_args[0]);
}

/* ref: FUN_004ff3e0 */
GEN_OWN GEN_FRAME byte F_004ff3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ff3e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  byte bVar1;
  byte bVar2;
  byte * pbVar3;
  uint uVar4;
  byte * pbVar5;
  
  uVar4 = (uint)*(*(byte * PTR32 *)&gen_args[1]);
  pbVar5 = (*(byte * PTR32 *)&gen_args[1]);
  if (*(*(byte * PTR32 *)&gen_args[1]) != 0) {
    while (pbVar5 = pbVar5 + 1, (char)uVar4 != '.') {
      uVar4 = (uint)*pbVar5;
      if (*pbVar5 == 0) {
        return 0;
      }
    }
  }
  bVar1 = *pbVar5;
  if (bVar1 != 0) {
    pbVar3 = pbVar5;
    do {
      bVar2 = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while (bVar2 != 0);
    uVar4 = (int)pbVar3 - (int)(pbVar5 + 1);
    if ((int)uVar4 < 4) {
      bVar1 = 0;
    }
    else {
      pbVar5 = pbVar5 + 1;
    }
    if ((int)uVar4 < 3) {
      (*(byte * PTR32 *)&gen_args[1]) = ((byte *)GEN_TOP(((uint)bVar1 << 0x18)));
    }
    else {
      (*((undefined2 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[1]) + 2)))) = CONCAT11(bVar1,*pbVar5);
      pbVar5 = pbVar5 + 1;
    }
    if ((int)uVar4 < 2) {
      (*(byte * PTR32 *)&gen_args[1]) = ((byte *)GEN_TOP(((uint)(*((undefined2 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[1]) + 2)))) << 0x10)));
    }
    else {
      (*(byte * PTR32 *)&gen_args[1]) = ((byte *)GEN_TOP(((uint)CONCAT21((*((undefined2 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[1]) + 2)))),*pbVar5) << 8)));
      pbVar5 = pbVar5 + 1;
    }
    if (0 < (int)uVar4) {
      bVar1 = *pbVar5;
      (*(byte * PTR32 *)&gen_args[1]) = ((byte *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(byte * PTR32 *)&gen_args[1]), 1, 3),bVar1)));
      *(*(int * PTR32 *)&gen_args[0]) = (int)(*(byte * PTR32 *)&gen_args[1]);
      return bVar1;
    }
    (*(byte * PTR32 *)&gen_args[1]) = ((byte *)GEN_TOP(((uint)GEN_PIECE(&(*(byte * PTR32 *)&gen_args[1]), 1, 3) << 8)));
    *(*(int * PTR32 *)&gen_args[0]) = (int)(*(byte * PTR32 *)&gen_args[1]);
  }
  return (byte)uVar4;
}

/* ref: FUN_004ff470 */
GEN_OWN_GS GEN_FRAME uint GEN_THISCALL F_004ff470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x4ff470u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_GS(0x120, 0, 4);
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c));
  *(undefined4 *)this = 0;
  if ((param_2 == 0) && (param_3 == 0)) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    F_0040b1a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1,(int)pcVar2 - (int)(param_1 + 1));
    uVar3 = F_00408810(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    *(uint *)this = uVar3;
    F_004087f0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return (uint)this;
  }
  F_00c472af(((char *)(gen_frame + 0x8)),0x110,((char *)REFP(0x1098008)),param_1,param_2,param_3);
  pcVar2 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  F_0040b1a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar2 - (int)(((char *)(gen_frame + 0x8)) + 1));
  uVar3 = F_00408810(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  *(uint *)this = uVar3;
  F_004087f0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_004ff560 */
GEN_OWN GEN_NOFRAME uint F_004ff560(void)
{
  GEN_ENTER(0x4ff560u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x1375aec);
  if (REFG(undefined4, 0x1375aec) != 0) {
    *((undefined1 *)GEN_TOP((REFG(undefined4, 0x1375aec) + 0x4c))) = 1;
  }
  return uVar1;
}

/* ref: FUN_004ff570 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_004ff570(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4ff570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    return 0;
  case 1: ;
    return 1;
  case 2: ;
    return 2;
  case 3: ;
    return 3;
  case 4: ;
    return 4;
  default: ;
    return 5;
  case 6: ;
    return 6;
  }
}

/* ref: FUN_004ff5f0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004ff5f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ff5f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined1 *)GEN_TOP((in_ecx + 0x4d))) = 1;
  return;
}

/* ref: FUN_004ff600 */
GEN_OWN GEN_NOFRAME byte F_004ff600(void)
{
  GEN_ENTER(0x4ff600u, 0u, 0u, 0u, 0u);
  return *((byte *)GEN_TOP((REFG(int, 0x1375aec) + 0x50)));
}

/* ref: FUN_004ff610 */
GEN_OWN GEN_FRAME byte F_004ff610(GEN_P(byte param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4ff610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  *((byte *)GEN_TOP((REFG(int, 0x1375aec) + 0x50))) = param_1;
  return param_1;
}

/* ref: FUN_004ff640 */
GEN_OWN GEN_NOFRAME byte F_004ff640(void)
{
  GEN_ENTER(0x4ff640u, 0u, 0u, 0u, 0u);
  return *((byte *)GEN_TOP((REFG(int, 0x1375aec) + 0x4e)));
}

/* ref: FUN_004ff650 */
GEN_OWN GEN_FRAME uint F_004ff650(GEN_P(undefined1 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4ff650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined1 param_1 = (undefined1)gen_a0;)
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x1375aec);
  *((undefined1 *)GEN_TOP((REFG(undefined4, 0x1375aec) + 0x4e))) = param_1;
  *((undefined1 *)GEN_TOP((uVar1 + 0x51))) = 1;
  return uVar1;
}

/* ref: FUN_004ff6a0 */
GEN_OWN GEN_NOFRAME uint GEN_STDCALL F_004ff6a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4ff6a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return 0;
}

/* ref: FUN_004ff6b0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_STDCALL F_004ff6b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4ff6b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_004ff6e0 */
GEN_OWN GEN_FRAME uint F_004ff6e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4ff6e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (&REFG(undefined4, 0x10993c0))[(int)(param_1)];
}

/* ref: FUN_004ff700 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ff700(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4ff700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((in_ecx + param_2 * 4)));
  if (iVar1 != 0) {
    return *((uint *)GEN_TOP((iVar1 + 0x10)));
  }
  return 0;
}

/* ref: FUN_004ff720 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_004ff720(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4ff720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (&REFG(undefined4, 0x10993c0))[(int)(param_1)] != 0;
}

/* ref: Client::System::Resource::ResourceEventListener::vf1 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004ff740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4ff740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::System::Resource::ResourceEventListener::vf2 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004ff750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4ff750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: Client::System::Resource::Handle::ResourceHandle::vf3 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004ff790(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4ff790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((param_1 + 0x58))) =
       *((byte *)GEN_TOP((param_1 + 0x58))) ^ (param_2 * '\b' ^ *((byte *)GEN_TOP((param_1 + 0x58)))) & 8;
  if ((param_2 != 0) && (*((int *)GEN_TOP((param_1 + 0x2c))) == 5)) {
    *((undefined4 *)GEN_TOP((param_1 + 0x2c))) = 4;
  }
  return param_2;
}

/* ref: Client::System::Resource::Handle::ResourceHandle::vf37 */
GEN_OWN GEN_NOFRAME unsigned int F_004ff7c0(void)
{
  GEN_ENTER(0x4ff7c0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Resource::Handle::ResourceHandle::vf38 */
GEN_OWN GEN_NOFRAME unsigned int F_004ff7d0(void)
{
  GEN_ENTER(0x4ff7d0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Resource::Handle::ResourceHandle::vf39 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004ff7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4ff7e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0xfffffff6;
}

/* ref: Client::System::Resource::Handle::ResourceHandle::vf40 */
GEN_OWN GEN_NOFRAME unsigned int F_004ff7f0(void)
{
  GEN_ENTER(0x4ff7f0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Resource::Handle::DefaultResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_004ff800(void)
{
  GEN_ENTER(0x4ff800u, 0u, 0u, 0u, 0u);
  return 0x1098168;
}

/* ref: Client::System::Resource::Handle::DefaultResourceHandle::vf22 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004ff820(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ff820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x98)));
}

/* ref: Client::System::Resource::Handle::DefaultResourceHandle::vf21 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004ff830(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ff830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x98)));
}

/* ref: Client::System::Resource::Handle::DefaultResourceHandle::vf23 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004ff840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0x4ff840u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x98) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x98) + 4))))
                      (*(int * PTR32 *)(this + 0x98) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::DefaultResourceHandle::vf24 */
GEN_OWN GEN_NOFRAME unsigned int F_004ff860(void)
{
  GEN_ENTER(0x4ff860u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Resource::Handle::DefaultResourceHandle::vf25 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_004ff870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ff870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x98);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
    *(undefined4 *)(this + 0x98) = 0;
  }
  return;
}

/* ref: Client::System::Resource::Handle::DefaultResourceHandle::vf26 */
GEN_OWN GEN_NOFRAME byte F_004ff8a0(void)
{
  GEN_ENTER(0x4ff8a0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Resource::Handle::DefaultResourceHandle::vf34 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ff8b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x4ff8b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = *(int * PTR32 *)(this + 0x98);
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
    *(undefined4 *)(this + 0x98) = 0;
  }
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x80)));
  *(undefined4 *)(this + 0x9c) = 0;
  uVar3 = (*pcVar1)(this,param_1,param_2);
  return uVar3;
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_004ff910(void)
{
  GEN_ENTER(0x4ff910u, 0u, 0u, 0u, 0u);
  return 0x109819c;
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf17 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004ff920(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ff920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x9c)));
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf18 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004ff930(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ff930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xa0)));
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf24 */
GEN_OWN GEN_NOFRAME unsigned int F_004ff940(void)
{
  GEN_ENTER(0x4ff940u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf26 */
GEN_OWN GEN_NOFRAME byte F_004ff950(void)
{
  GEN_ENTER(0x4ff950u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf30 */
GEN_OWN GEN_NOFRAME byte F_004ff960(void)
{
  GEN_ENTER(0x4ff960u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_004ff970 */
GEN_OWN GEN_FRAME uint F_004ff970(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4ff970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x12: ;
    return 0x1098290;
  default: ;
    return 0x1098300;
  case 0x14: ;
    return 0x10982a8;
  case 0x21: ;
    return 0x10981d0;
  case 0x22: ;
    return 0x10981e8;
  case 0x23: ;
    return 0x1098200;
  case 0x24: ;
    return 0x1098218;
  case 0x32: ;
    return 0x10982c0;
  case 0x34: ;
    return 0x10982d4;
  case 0x44: ;
    return 0x1098278;
  case 0x52: ;
    return 0x1098248;
  case 0x54: ;
    return 0x1098260;
  case 0x61: ;
    return 0x10982e8;
  case 0x74: ;
    return 0x1098230;
  }
}

/* ref: FUN_004ffa90 */
GEN_OWN GEN_FRAME uint F_004ffa90(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x4ffa90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    return 0x1098308;
  case 1: ;
    return 0x109831c;
  case 2: ;
    return 0x109834c;
  case 3: ;
    return 0x10983fc;
  case 4: ;
    return 0x109840c;
  default: ;
    return 0x109841c;
  case 7: ;
    return 0x1098334;
  case 8: ;
    return 0x109835c;
  case 9: ;
    return 0x1098370;
  case 10: ;
    return 0x1098384;
  case 0xb: ;
    return 0x1098398;
  case 0xc: ;
    return 0x10983ac;
  case 0xd: ;
    return 0x10983c0;
  case 0xe: ;
    return 0x10983d4;
  case 0xf: ;
    return 0x10983e8;
  }
}

/* ref: FUN_004ffb50 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004ffb50(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4ffb50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  if (*((byte *)GEN_TOP((*((int *)GEN_TOP((param_1[0x2a] + 4))) + 0x1e + param_1[0x2a]))) <= param_2) {
    return 0;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x20))))(param_1 GEN_EDX_FWD);
  return (byte)uVar1 <= param_2;
}

/* ref: FUN_004ffb80 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004ffb80(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x4ffb80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  byte bVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  
  iVar4 = *(byte *)(param_1 + 0x5f) - 1;
  bVar3 = 0;
  bVar1 = *(byte *)(param_1 + 0x5f) - 1;
  bVar5 = bVar1;
  if (0 < iVar4) {
    uVar2 = 0;
    do {
      bVar5 = bVar3;
      if ((!GEN_ISNAN(((float10)GEN_TOD(gen_bits2f(param_1[uVar2 + 0x5a])))) && !GEN_ISNAN((float10)param_2)) &&
          !(((float10)GEN_TOD(gen_bits2f(param_1[uVar2 + 0x5a]))) <= (float10)param_2)) break;
      bVar3 = bVar3 + 1;
      uVar2 = (uint)bVar3;
      bVar5 = bVar1;
    } while ((int)uVar2 < iVar4);
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x20))))(param_1 GEN_EDX_FWD);
  bVar1 = (byte)uVar2;
  if ((byte)uVar2 <= bVar5) {
    bVar1 = bVar5;
  }
  return bVar1;
}

/* ref: FUN_004ffbd0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004ffbd0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4ffbd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  byte bVar1;
  uint uVar2;
  byte bVar3;
  
  bVar3 = param_2;
  if (*(byte *)(param_1 + 0x5f) <= param_2) {
    bVar3 = *(byte *)(param_1 + 0x5f) - 1;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x20))))(param_1 GEN_EDX_FWD);
  bVar1 = (byte)uVar2;
  if ((byte)uVar2 <= bVar3) {
    bVar1 = bVar3;
  }
  return bVar1;
}

/* ref: FUN_004ffc00 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004ffc00(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4ffc00u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  uint uVar1;
  byte bVar2;
  int iVar3;
  float10 fVar4;
  
  iVar3 = *((byte *)GEN_TOP((param_1 + 0x17c))) - 1;
  bVar2 = 0;
  if (0 < iVar3) {
    uVar1 = 0;
    do {
      fVar4 = GEN_X87((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x168 + uVar1 * 4))) *
                              (float10)*((float *)GEN_TOP((param_3 + uVar1 * 4)))))));
      if ((!GEN_ISNAN(fVar4) && !GEN_ISNAN((float10)param_2)) && !(fVar4 <= (float10)param_2)) {
        return bVar2;
      }
      bVar2 = bVar2 + 1;
      uVar1 = (uint)bVar2;
    } while ((int)uVar1 < iVar3);
  }
  return (byte)iVar3;
}

/* ref: FUN_004ffc50 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_004ffc50(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x4ffc50u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  float fVar1;
  byte bVar2;
  float10 fVar3;
  
  bVar2 = 0;
  while( true ) {
    fVar1 = *((float *)GEN_TOP((param_3 + (uint)bVar2 * 4)));
    if (fVar1 == 0.0) {
      return 2;
    }
    fVar3 = GEN_X87((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x170 + (uint)bVar2 * 4))) * (float10)fVar1
                            ))));
    if ((!GEN_ISNAN(fVar3) && !GEN_ISNAN((float10)param_2)) && !(fVar3 <= (float10)param_2)) break;
    bVar2 = bVar2 + 1;
    if (1 < bVar2) {
      return 2;
    }
  }
  return bVar2;
}

/* ref: FUN_004ffca0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ffca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ffca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ushort * puVar1;
  byte bVar2;
  ushort uVar3;
  undefined * this_00;
  int iVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint local_20;
  int local_1c;
  undefined4 * local_18;
  undefined4 * local_c;
  int local_8;
  
  uVar3 = *((ushort *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa8))) + 4))) + 0x18 + *((int *)GEN_TOP(((int)this + 0xa8))))));
  puVar6 = ((undefined4 *)GEN_TOP((uint)uVar3));
  if (uVar3 != 0) {
    iVar7 = *((int *)GEN_TOP(((int)this + 0xa8)));
    bVar2 = *((byte *)GEN_TOP((*((int *)GEN_TOP((iVar7 + 4))) + 0x1e + iVar7)));
    puVar6 = ((undefined4 *)GEN_TOP(CONCAT31((int3)((uint)iVar7 >> 8),bVar2)));
    if (bVar2 != 0) {
      local_20 = (uint)bVar2;
      local_c = ((undefined4 *)GEN_TOP(((int)this + 0x118)));
      local_1c = 4;
      do {
        this_00 = ((undefined *)GEN_TOP(*local_c));
        puVar6 = local_c;
        if (this_00 != ((undefined *)GEN_TOP(0x0))) {
          uVar5 = F_004d6a30(this_00 GEN_EDX_FWD,0,0,2);
          puVar6 = ((undefined4 *)GEN_TOP(0x0));
          if (uVar5 != 0) {
            if (uVar3 != 0) {
              local_8 = 0;
              local_18 = ((undefined4 *)GEN_TOP((uint)uVar3));
              do {
                iVar7 = *((int *)GEN_TOP(((int)this + 0xdc))) + local_8;
                uVar10 = (uint)*((ushort *)GEN_TOP((local_1c + 6 + iVar7)));
                if (uVar10 != 0) {
                  uVar9 = (uint)*((ushort *)GEN_TOP((local_1c + iVar7)));
                  uVar10 = uVar10 + uVar9;
                  for (; uVar9 < uVar10; uVar9 = uVar9 + 1) {
                    iVar4 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xe0))) + (uVar9 & 0xffff) * 0xc)));
                    iVar7 = *((int *)GEN_TOP(((int)this + 0xe0))) + (uVar9 & 0xffff) * 0xc;
                    uVar8 = *((uint *)GEN_TOP((iVar7 + 8)));
                    uVar11 = *((int *)GEN_TOP((iVar7 + 4))) + uVar8;
                    for (; uVar8 < uVar11; uVar8 = uVar8 + 1) {
                      puVar1 = ((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xe4))) + (uVar8 & 0xffff) * 4)));
                      *((ushort *)GEN_TOP((uVar5 + ((uint)*puVar1 + iVar4) * 2))) = puVar1[1];
                    }
                  }
                }
                local_8 = local_8 + 0x10;
                local_18 = ((undefined4 *)GEN_TOP(((int)local_18 - 1)));
              } while (local_18 != ((undefined4 *)GEN_TOP(0x0)));
            }
            puVar6 = ((undefined4 *)GEN_TOP(F_004d6ae0(this_00 GEN_EDX_ARG)));
          }
        }
        local_c = local_c + 1;
        local_1c = local_1c + 2;
        local_20 = local_20 - 1;
      } while (local_20 != 0);
    }
  }
  return (uint)puVar6;
}

/* ref: FUN_004ffdd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ffdd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4ffdd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int local_c;
  int local_8;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = *((undefined4 *)GEN_TOP(((int)this + 0xb0)));
  uVar4 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa8))) + 4))) + 0x1e +
                         *((int *)GEN_TOP(((int)this + 0xa8))))));
  uVar2 = 0;
  local_c = 0;
  local_8 = 0;
  if (uVar4 != 0) {
    piVar3 = ((int *)GEN_TOP(((int)this + 0x118)));
    do {
      uVar1 = *((int *)GEN_TOP(((int)this + 0xb8))) + (uVar2 & 0xff) * 0x3c;
      if (piVar3[-3] != 0) {
        local_c = local_c + *((int *)GEN_TOP((uVar1 + 0x2c)));
      }
      if (*piVar3 != 0) {
        uVar1 = *((uint *)GEN_TOP((uVar1 + 0x30)));
        local_8 = local_8 + uVar1;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar2 < uVar4);
    *((int *)GEN_TOP(((int)this + 0xa0))) = local_8 + local_c;
    return uVar1;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 0;
  return 0;
}

/* ref: FUN_004ffe70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ffe70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4ffe70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xd0))) + param_1 * 4))) + 8 + *((int *)GEN_TOP(((int)this + 0xa8)));
}

/* ref: FUN_004ffe90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ffe90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x4ffe90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  char * pcVar1;
  char cVar2;
  char * pcVar3;
  
  pcVar1 = ((char *)GEN_TOP((*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xd0))) + param_1 * 4))) + 8 +
                   *((int *)GEN_TOP(((int)this + 0xa8))))));
  pcVar3 = pcVar1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  pcVar3 = pcVar3 + (-1 - (int)(pcVar1 + 1));
  while( true ) {
    if ((int)pcVar3 < 0) {
      return 0;
    }
    if (pcVar1[(int)pcVar3] == '/') break;
    pcVar3 = pcVar3 - 1;
  }
  return (uint)(pcVar1 + (int)(pcVar3 + 1));
}

/* ref: FUN_004ffee0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004ffee0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x4ffee0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  float fVar1;
  uint uVar2;
  
  uVar2 = param_2 & 0xff;
  fVar1 = (float)((float10)param_3 * (float10)param_3 + (float10)*(double *)&REFG(undefined, 0x1090710));
  *((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xb8))) + uVar2 * 0x3c + 4))) = fVar1;
  if ((byte)param_2 < 2) {
    *((float *)GEN_TOP((param_1 + 0x168 + uVar2 * 4))) = fVar1;
  }
  return uVar2;
}

/* ref: FUN_004fff30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fff30(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x4fff30u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  float fVar1;
  uint uVar2;
  
  uVar2 = param_2 & 0xff;
  fVar1 = (float)((float10)param_3 * (float10)param_3 + (float10)*(double *)&REFG(undefined, 0x1090710));
  *((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xb8))) + uVar2 * 0x3c + 8))) = fVar1;
  if ((byte)param_2 < 2) {
    *((float *)GEN_TOP((param_1 + 0x170 + uVar2 * 4))) = fVar1;
  }
  return uVar2;
}

/* ref: FUN_004fff80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_004fff80(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x4fff80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xb8))) + 0x24 + (uint)param_2 * 0x3c)));
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf36 */
GEN_OWN GEN_NOFRAME byte F_004fffa0(void)
{
  GEN_ENTER(0x4fffa0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf38 */
GEN_OWN GEN_NOFRAME unsigned int F_004fffb0(void)
{
  GEN_ENTER(0x4fffb0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_004fffc0(void)
{
  GEN_ENTER(0x4fffc0u, 0u, 0u, 0u, 0u);
  return 0x109849c;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandle::vf17 */
GEN_OWN GEN_NOFRAME uint F_004fffd0(void)
{
  GEN_ENTER(0x4fffd0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandle::vf18 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_004fffe0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x4fffe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xe8))) & 0x7ffffff;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandle::vf26 */
GEN_OWN GEN_NOFRAME byte F_004ffff0(void)
{
  GEN_ENTER(0x4ffff0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandle::vf25 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00500000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x500000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0xfc);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 0xfc) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x100);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x100) = 0;
  }
  return;
}

/* ref: FUN_0050005f */
GEN_OWN GEN_NOFRAME unsigned int F_0050005f(void)
{
  GEN_ENTER(0x50005fu, 0u, 0u, 0u, 0u);
  code * pcVar1;
  
  pcVar1 = ((code *)GEN_TOP(swi(3)));
  (*pcVar1)();
  return 0;
}

/* ref: FUN_00500080 */
GEN_OWN GEN_FRAME uint GEN_FASTCALL F_00500080(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x500080u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  uint uVar1;
  
  LOCK();
  uVar1 = *param_2;
  if (param_3 == uVar1) {
    *param_2 = param_1;
    uVar1 = param_3;
  }
  UNLOCK();
  return uVar1;
}

/* ref: FUN_00500090 */
GEN_OWN GEN_FRAME float10 F_00500090(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0x500090u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220)))));
}

/* ref: FUN_005000c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005000c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5000c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  
  F_00b4cf00(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((uint *)GEN_TOP(((int)this + 0x98))));
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x98))) & 0x3c00000;
  if (uVar1 == 0x800000) {
    F_00b4fcb0(((undefined1 *)(gen_frame + 0x0)),param_1,param_2);
  }
  else if (uVar1 == 0x1000000) {
    F_00b4fdc0(((undefined1 *)(gen_frame + 0x0)),param_1,param_2);
  }
  else if (uVar1 == 0x2000000) {
    F_00b4fed0(((undefined1 *)(gen_frame + 0x0)),param_1,param_2);
  }
  F_00b4cf40(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00500140 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00500140(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(ushort * param_5, unsigned int gen_a4), GEN_P(ushort * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x500140u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(ushort * param_5 = (ushort *)(uintptr_t)gen_a4;)
  GEN_PIN(ushort * param_6 = (ushort *)(uintptr_t)gen_a5;)
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_8;
  
  local_8 = 0;
  if ((ushort)param_5 != 0) {
    uVar3 = (uint)(ushort)param_5;
    param_5 = param_6;
    iVar4 = param_2;
    param_6 = ((ushort *)GEN_TOP(uVar3));
    do {
      uVar1 = *param_5;
      iVar2 = *((int *)GEN_TOP((iVar4 + 0xc)));
      F_004f81e0(param_1 GEN_EDX_ARG,6,iVar4,(uint)uVar1,local_8 + param_3,iVar2 + 0xfU & 0xfffffff0);
      local_8 = local_8 + iVar2;
      param_5 = param_5 + 1;
      iVar4 = iVar4 + (uint)uVar1;
      param_6 = ((ushort *)GEN_TOP(((int)param_6 - 1)));
    } while (param_6 != ((ushort *)GEN_TOP(0x0)));
  }
  return 1;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandle::vf30 */
GEN_OWN GEN_NOFRAME byte F_005001b0(void)
{
  GEN_ENTER(0x5001b0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandle::vf4 */
GEN_OWN GEN_NOFRAME byte F_005001c0(void)
{
  GEN_ENTER(0x5001c0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: FUN_005001d0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_005001d0(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5001d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  if ((((*param_1 & 0x80000000) == 0) && ((*param_2 & *param_2 - 1) == 0)) &&
     ((param_2[1] & param_2[1] - 1) == 0)) {
    return 0x4000000;
  }
  return 0;
}

/* ref: FUN_00500220 */
GEN_OWN GEN_FRAME uint F_00500220(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x500220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (uint)*((byte *)GEN_TOP((param_1 + 0xf))) +
         ((uint)*((byte *)GEN_TOP((param_1 + 0xe))) + (uint)*((byte *)GEN_TOP((param_1 + 0xc))) * 2 +
         (uint)*((byte *)GEN_TOP((param_1 + 0xd)))) * 4 + (uint)*((ushort *)GEN_TOP((param_1 + 8)));
}

/* ref: Client::System::Resource::Handle::MaterialResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00500250(void)
{
  GEN_ENTER(0x500250u, 0u, 0u, 0u, 0u);
  return 0x1098584;
}

/* ref: Client::System::Resource::Handle::MaterialResourceHandle::vf17 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00500260(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x500260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xc0)));
}

/* ref: Client::System::Resource::Handle::MaterialResourceHandle::vf18 */
GEN_OWN GEN_NOFRAME uint F_00500270(void)
{
  GEN_ENTER(0x500270u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Resource::Handle::MaterialResourceHandle::vf36 */
GEN_OWN GEN_NOFRAME byte F_00500280(void)
{
  GEN_ENTER(0x500280u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Resource::Handle::MaterialResourceHandle::vf38 */
GEN_OWN GEN_NOFRAME unsigned int F_00500290(void)
{
  GEN_ENTER(0x500290u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Resource::Handle::ShaderCodeResourceHandle::vf24 */
GEN_OWN GEN_NOFRAME unsigned int F_005002a0(void)
{
  GEN_ENTER(0x5002a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Resource::Handle::ShaderCodeResourceHandle::vf25 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005002b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5002b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x98);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 0x98) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x9c);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *(undefined4 *)(this + 0x9c) = 0;
  }
  return;
}

/* ref: Client::System::Resource::Handle::ShaderCodeResourceHandle::vf26 */
GEN_OWN GEN_NOFRAME byte F_005002f0(void)
{
  GEN_ENTER(0x5002f0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Resource::Handle::ShaderCodeResourceHandle::vf30 */
GEN_OWN GEN_NOFRAME byte F_00500300(void)
{
  GEN_ENTER(0x500300u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Resource::Handle::ShaderCodeResourceHandle::vf31 */
GEN_OWN GEN_NOFRAME byte F_00500310(void)
{
  GEN_ENTER(0x500310u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Resource::Handle::ShaderCodeResourceHandle::vf34 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00500320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x500320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 1;
}

/* ref: Client::System::Resource::Handle::ShaderPackageResourceHandle::vf24 */
GEN_OWN GEN_NOFRAME unsigned int F_00500330(void)
{
  GEN_ENTER(0x500330u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Resource::Handle::ShaderPackageResourceHandle::vf25 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00500340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x500340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x98);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 0x98) = 0;
  }
  return;
}

/* ref: Client::System::Resource::Handle::ShaderPackageResourceHandle::vf26 */
GEN_OWN GEN_NOFRAME byte F_00500360(void)
{
  GEN_ENTER(0x500360u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Resource::Handle::ShaderPackageResourceHandle::vf30 */
GEN_OWN GEN_NOFRAME byte F_00500370(void)
{
  GEN_ENTER(0x500370u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Resource::Handle::ShaderPackageResourceHandle::vf31 */
GEN_OWN GEN_NOFRAME byte F_00500380(void)
{
  GEN_ENTER(0x500380u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Resource::Handle::ShaderPackageResourceHandle::vf34 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00500390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x500390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 1;
}

/* ref: Client::System::Resource::Handle::TerrainResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_005003a0(void)
{
  GEN_ENTER(0x5003a0u, 0u, 0u, 0u, 0u);
  return 0x1098670;
}

/* ref: FUN_005003b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005003b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5003b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD)));
  return *puVar1;
}

/* ref: FUN_005003c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005003c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5003c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  return *((uint *)GEN_TOP((uVar1 + 4)));
}

/* ref: FUN_005003e0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005003e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5003e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD)));
  if (*puVar1 < 0x1000002) {
    return 0x80;
  }
  if (*puVar1 == 0x1000002) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
    return *((uint *)GEN_TOP((uVar2 + 8 + *((int *)GEN_TOP((uVar3 + 4))) * 4)));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  return *((uint *)GEN_TOP((uVar2 + 8)));
}

/* ref: FUN_00500440 */
GEN_OWN GEN_NOFRAME float GEN_THISCALL F_00500440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x500440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  uint uVar2;
  
  puVar1 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD)));
  if (*puVar1 < 0x1000003) {
    return (float)(float10)0;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  return *((float *)GEN_TOP((uVar2 + 0xc)));
}

/* ref: FUN_00500470 */
GEN_OWN GEN_NOFRAME float GEN_THISCALL F_00500470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x500470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  uint uVar2;
  
  puVar1 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD)));
  if (*puVar1 < 0x1000003) {
    return (float)(float10)1;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  return *((float *)GEN_TOP((uVar2 + 0x10)));
}

/* ref: FUN_005004a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005004a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5004a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  puVar1 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD)));
  if (0x1000002 < *puVar1) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
    if (param_1 == 0) {
      return (byte)*((undefined4 *)GEN_TOP((uVar2 + 0x14))) & 1;
    }
    if (param_1 == 1) {
      return (byte)(*((uint *)GEN_TOP((uVar2 + 0x14))) >> 1) & 1;
    }
    if (param_1 == 2) {
      return (byte)(*((uint *)GEN_TOP((uVar2 + 0x14))) >> 2) & 1;
    }
  }
  return 0;
}

/* ref: FUN_00500500 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00500500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x500500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  uint uVar2;
  
  puVar1 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD)));
  if (*puVar1 < 0x1000003) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
    return uVar2 + 8;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  return uVar2 + 0x34;
}

/* ref: FUN_00500530 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00500530(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x500530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)*((byte *)GEN_TOP((in_ecx + 0xaf)));
}

/* ref: FUN_00500540 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00500540(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x500540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00500550 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00500550(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x500550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  in_ecx[1] = 0;
  return;
}

/* ref: FUN_00500560 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00500560(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x500560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00500570 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00500570(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x500570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  return 0;
}

/* ref: FUN_00500590 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00500590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x500590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  *(undefined4 *)this = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  return;
}

/* ref: FUN_005005c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005005c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5005c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined4 *)this = 0;
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar3 = F_00406b30(*((int *)GEN_TOP(((int)this + 4))));
    uVar2 = (uint)uVar3;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  return uVar2;
}

/* ref: FUN_00500600 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00500600(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x500600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0xa8;
}

/* ref: FUN_00500610 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00500610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x500610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  ushort * puVar2;
  uint uVar3;
  uint uVar4;
  int local_c;
  int local_8;
  
  uVar4 = 0;
  local_c = 0;
  local_8 = 0;
  if (1 < *((int *)GEN_TOP(((int)this + 0xb0)))) {
    iVar1 = (*((int *)GEN_TOP(((int)this + 0xb0))) - 2U >> 1) + 1;
    puVar2 = ((ushort *)GEN_TOP(((int)this + param_1 * 2 + 0x14c)));
    uVar4 = iVar1 * 2;
    do {
      local_c = local_c + (uint)puVar2[-0x20];
      local_8 = local_8 + (uint)*puVar2;
      puVar2 = puVar2 + 0x40;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  uVar3 = 0;
  if (uVar4 < *((uint *)GEN_TOP(((int)this + 0xb0)))) {
    uVar3 = (uint)*((ushort *)GEN_TOP(((int)this + (uVar4 * 0x20 + param_1) * 2 + 0x10c)));
  }
  return local_8 + local_c + uVar3;
}

/* ref: FUN_00500680 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00500680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x500680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  ushort * puVar2;
  uint uVar3;
  uint uVar4;
  int local_c;
  int local_8;
  
  uVar4 = 0;
  local_c = 0;
  local_8 = 0;
  if (1 < *((int *)GEN_TOP(((int)this + 0xb0)))) {
    iVar1 = (*((int *)GEN_TOP(((int)this + 0xb0))) - 2U >> 1) + 1;
    puVar2 = ((ushort *)GEN_TOP(((int)this + param_1 * 2 + 0x150)));
    uVar4 = iVar1 * 2;
    do {
      local_c = local_c + (uint)puVar2[-0x20];
      local_8 = local_8 + (uint)*puVar2;
      puVar2 = puVar2 + 0x40;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  uVar3 = 0;
  if (uVar4 < *((uint *)GEN_TOP(((int)this + 0xb0)))) {
    uVar3 = (uint)*((ushort *)GEN_TOP(((int)this + (uVar4 * 0x20 + param_1) * 2 + 0x110)));
  }
  return local_8 + local_c + uVar3;
}

/* ref: FUN_005006f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005006f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5006f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return in_ecx + 0x2f0 + param_2 * 8;
}

/* ref: FUN_00500710 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00500710(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x500710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return in_ecx + (param_2 * 3 + 0xc0) * 4;
}

/* ref: FUN_00500730 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00500730(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x500730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0xd0 + *((int *)GEN_TOP((in_ecx + 0x3c0)));
}

/* ref: Client::System::Resource::Handle::EnvSetResourceHandle::vf25 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00500750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x500750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0xa0);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 0xa0) = 0;
  }
  return;
}

/* ref: Client::System::Resource::Handle::SoundSetResourceHandle::vf25 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00500770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x500770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0xa0);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 0xa0) = 0;
  }
  return;
}

/* ref: Client::System::Resource::Handle::AmbientSetResourceHandle::vf25 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00500790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x500790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0xa0);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 0xa0) = 0;
  }
  return;
}

/* ref: Client::System::Resource::Handle::ObjectBehaviorSetResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_005007b0(void)
{
  GEN_ENTER(0x5007b0u, 0u, 0u, 0u, 0u);
  return (uint)REFG(undefined * PTR32, 0x1303008);
}

/* ref: Client::System::Resource::Handle::ObjectBehaviorSetResourceHandle::vf17 */
GEN_OWN GEN_NOFRAME uint F_005007c0(void)
{
  GEN_ENTER(0x5007c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Resource::Handle::ObjectBehaviorSetResourceHandle::vf18 */
GEN_OWN GEN_NOFRAME uint F_005007d0(void)
{
  GEN_ENTER(0x5007d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Resource::Handle::ObjectBehaviorSetResourceHandle::vf25 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005007e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5007e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0xa0);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 0xa0) = 0;
  }
  return;
}

/* ref: Client::System::Resource::Handle::SkyVisibilityResourceHandle::vf25 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00500800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x500800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x98);
  *(undefined4 *)(this + 0xa0) = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
    *(undefined4 *)(this + 0x98) = 0;
  }
  return;
}

/* ref: Client::System::Resource::Handle::ClipAABBResourceHandle::vf25 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00500840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x500840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x98);
  *(undefined4 *)(this + 0xa0) = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
    *(undefined4 *)(this + 0x98) = 0;
  }
  return;
}

/* ref: Client::System::Resource::Handle::AttachOffsetResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00500880(void)
{
  GEN_ENTER(0x500880u, 0u, 0u, 0u, 0u);
  return 0x10987fc;
}

/* ref: Client::System::Resource::Handle::PreBoneDeformerResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00500890(void)
{
  GEN_ENTER(0x500890u, 0u, 0u, 0u, 0u);
  return 0x1098838;
}

/* ref: Client::System::Resource::Handle::EquipmentParameterResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_005008a0(void)
{
  GEN_ENTER(0x5008a0u, 0u, 0u, 0u, 0u);
  return 0x1098874;
}

/* ref: Client::System::Resource::Handle::CharaMakeParameterResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_005008b0(void)
{
  GEN_ENTER(0x5008b0u, 0u, 0u, 0u, 0u);
  return 0x10988b4;
}

/* ref: Client::System::Resource::Handle::ImageChangeDataResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_005008c0(void)
{
  GEN_ENTER(0x5008c0u, 0u, 0u, 0u, 0u);
  return 0x10988f4;
}

/* ref: Client::System::Resource::Handle::ExSkeletonTableResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_005008d0(void)
{
  GEN_ENTER(0x5008d0u, 0u, 0u, 0u, 0u);
  return 0x1098930;
}

/* ref: Client::System::Resource::Handle::SkeletonResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_005008e0(void)
{
  GEN_ENTER(0x5008e0u, 0u, 0u, 0u, 0u);
  return 0x109896c;
}

/* ref: FUN_005008f0 */
GEN_OWN GEN_FRAME uint F_005008f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5008f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return ((param_1 - 1 + param_2) / param_2) * param_2;
}

/* ref: Client::System::Resource::Handle::PartialAnimationPackResourceHandle::vf28 */
GEN_OWN GEN_NOFRAME unsigned int F_00500910(void)
{
  GEN_ENTER(0x500910u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Resource::Handle::PartialAnimationPackResourceHandle::vf15 */
GEN_OWN GEN_NOFRAME uint F_00500920(void)
{
  GEN_ENTER(0x500920u, 0u, 0u, 0u, 0u);
  return 0xec;
}

/* ref: Client::System::Resource::Handle::PartialAnimationPackResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00500930(void)
{
  GEN_ENTER(0x500930u, 0u, 0u, 0u, 0u);
  return 0x10989a8;
}

/* ref: FUN_00500940 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00500940(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x500940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xe8))) + (uint)(ushort)param_2 * 4)));
}

/* ref: FUN_00500960 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00500960(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x500960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  F_00b4d420(in_ecx + 0xb8 GEN_EDX_FWD,param_2);
  return param_2;
}

/* ref: Client::System::Resource::Handle::LookAtIkResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00500980(void)
{
  GEN_ENTER(0x500980u, 0u, 0u, 0u, 0u);
  return 0x10989ec;
}

/* ref: Client::System::Resource::Handle::AutoShakeIkResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00500990(void)
{
  GEN_ENTER(0x500990u, 0u, 0u, 0u, 0u);
  return 0x1098aa4;
}

/* ref: Client::System::Resource::Handle::ElementIdResourceHandle::vf15 */
GEN_OWN GEN_NOFRAME uint F_005009a0(void)
{
  GEN_ENTER(0x5009a0u, 0u, 0u, 0u, 0u);
  return 0xa8;
}

/* ref: Client::System::Resource::Handle::ElementIdResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_005009b0(void)
{
  GEN_ENTER(0x5009b0u, 0u, 0u, 0u, 0u);
  return 0x1098adc;
}

/* ref: Client::System::Resource::Handle::ElementIdResourceHandle::vf17 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005009c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5009c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x9c)));
}

/* ref: Client::System::Resource::Handle::ElementIdResourceHandle::vf18 */
GEN_OWN GEN_NOFRAME uint F_005009d0(void)
{
  GEN_ENTER(0x5009d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Resource::Handle::ElementIdResourceHandle::vf28 */
GEN_OWN GEN_NOFRAME unsigned int F_005009e0(void)
{
  GEN_ENTER(0x5009e0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_005009f0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005009f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5009f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xa0)));
}

/* ref: FUN_00500a00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00500a00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x500a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x40 + *((int *)GEN_TOP((in_ecx + 0xa4)));
}

/* ref: Client::System::Resource::Handle::ResidentPapTableResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00500a20(void)
{
  GEN_ENTER(0x500a20u, 0u, 0u, 0u, 0u);
  return 0x1098b14;
}

/* ref: Client::System::Resource::Handle::ResidentPapTableResourceHandle::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00500a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x500a30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00b4d440(this + 0xa0 GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00500a40 */
GEN_OWN GEN_NOFRAME byte F_00500a40(void)
{
  GEN_ENTER(0x500a40u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00500a50 */
GEN_OWN GEN_NOFRAME byte F_00500a50(void)
{
  GEN_ENTER(0x500a50u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Resource::Handle::SkeletonParamResourceHandle::vf15 */
GEN_OWN GEN_NOFRAME uint F_00500a60(void)
{
  GEN_ENTER(0x500a60u, 0u, 0u, 0u, 0u);
  return 0x108;
}

/* ref: Client::System::Resource::Handle::SkeletonParamResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00500a70(void)
{
  GEN_ENTER(0x500a70u, 0u, 0u, 0u, 0u);
  return 0x1098da4;
}

/* ref: Client::System::Resource::Handle::SkeletonParamResourceHandle::vf17 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00500a80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x500a80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x9c)));
}

/* ref: Client::System::Resource::Handle::SkeletonParamResourceHandle::vf18 */
GEN_OWN GEN_NOFRAME uint F_00500a90(void)
{
  GEN_ENTER(0x500a90u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Resource::Handle::SkeletonParamResourceHandle::vf28 */
GEN_OWN GEN_NOFRAME unsigned int F_00500aa0(void)
{
  GEN_ENTER(0x500aa0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Resource::Handle::AnimationExchangeTableResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00500ab0(void)
{
  GEN_ENTER(0x500ab0u, 0u, 0u, 0u, 0u);
  return 0x1098de0;
}

/* ref: Client::System::Resource::Handle::AnimationExchangeTableResourceHandle::vf25 */
GEN_OWN GEN_NOFRAME unsigned int F_00500ac0(void)
{
  GEN_ENTER(0x500ac0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Resource::Handle::MotionLineTableResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00500ad0(void)
{
  GEN_ENTER(0x500ad0u, 0u, 0u, 0u, 0u);
  return 0x1098e24;
}

/* ref: FUN_00500ae0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00500ae0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x500ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b4ded0(in_ecx + 0xa0 GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: FUN_00500af0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00500af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x500af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00b4def0(((undefined *)GEN_TOP(((int)this + 0xa0))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00500b00 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00500b00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x500b00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00b4dec0(in_ecx + 0xa0 GEN_EDX_FWD);
  return bVar1;
}

/* ref: FUN_00500b10 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00500b10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x500b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00b4deb0(in_ecx + 0xa0 GEN_EDX_FWD);
  return bVar1;
}

/* ref: Client::System::Resource::Handle::ApricotResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00500b20(void)
{
  GEN_ENTER(0x500b20u, 0u, 0u, 0u, 0u);
  return 0x1098e60;
}

/* ref: Client::System::Resource::Handle::ApricotResourceHandle::vf17 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00500b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x500b30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*(undefined * PTR32 *)(this + 0xa0) == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_009bc020(*(undefined * PTR32 *)(this + 0xa0) GEN_EDX_FWD);
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ApricotResourceHandle::vf24 */
GEN_OWN GEN_NOFRAME unsigned int F_00500b50(void)
{
  GEN_ENTER(0x500b50u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Resource::Handle::ApricotResourceHandle::vf26 */
GEN_OWN GEN_NOFRAME byte F_00500b60(void)
{
  GEN_ENTER(0x500b60u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Resource::Handle::ApricotTextureResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00500b70(void)
{
  GEN_ENTER(0x500b70u, 0u, 0u, 0u, 0u);
  return 0x1098e94;
}

/* ref: Client::System::Resource::Handle::ApricotTextureResourceHandle::vf17 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00500b80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x500b80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x9c)));
}

/* ref: Client::System::Resource::Handle::ApricotTextureResourceHandle::vf18 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00500b90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x500b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xa4)));
}

/* ref: Client::System::Resource::Handle::ApricotTextureResourceHandle::vf24 */
GEN_OWN GEN_NOFRAME unsigned int F_00500ba0(void)
{
  GEN_ENTER(0x500ba0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Resource::Handle::ApricotTextureResourceHandle::vf25 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00500bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x500bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0xa0);
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    *(undefined4 *)(this + 0xa0) = 0;
  }
  *(undefined4 *)(this + 0xa4) = 0;
  return;
}

/* ref: Client::System::Resource::Handle::ApricotTextureResourceHandle::vf26 */
GEN_OWN GEN_NOFRAME byte F_00500be0(void)
{
  GEN_ENTER(0x500be0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Resource::Handle::SoundResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00500bf0(void)
{
  GEN_ENTER(0x500bf0u, 0u, 0u, 0u, 0u);
  return 0x1098ed0;
}

/* ref: Client::System::Resource::Handle::SoundResourceHandle::vf17 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00500c00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x500c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xa0)));
}

/* ref: Client::System::Resource::Handle::SoundResourceHandle::vf23 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00500c10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x500c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x98)));
}

/* ref: Client::System::Resource::Handle::SoundResourceHandle::vf24 */
GEN_OWN GEN_NOFRAME unsigned int F_00500c20(void)
{
  GEN_ENTER(0x500c20u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::System::Resource::Handle::SoundResourceHandle::vf26 */
GEN_OWN GEN_NOFRAME byte F_00500c30(void)
{
  GEN_ENTER(0x500c30u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00500c40 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00500c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x500c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x98))) != 0) {
    uVar2 = F_00406b30(*((int *)GEN_TOP(((int)this + 0x98))));
    uVar1 = (uint)uVar2;
    *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 0;
  return uVar1;
}

/* ref: Client::System::Resource::Handle::SoundResourceHandle::vf34 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00500c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x500c70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x98) != 0) {
    F_00406b30(*(int *)(this + 0x98));
    *(undefined4 *)(this + 0x98) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x9c);
  *(undefined4 *)(this + 0xa0) = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x9c));
    *(undefined4 *)(this + 0x9c) = 0;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x80))))(this GEN_EDX_ARG,param_1,param_2);
  return uVar2;
}

/* ref: Client::System::Resource::Handle::CollisionMeshResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00500cf0(void)
{
  GEN_ENTER(0x500cf0u, 0u, 0u, 0u, 0u);
  return 0x1098f70;
}

/* ref: Client::System::Resource::Handle::CutSceneResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00500d00(void)
{
  GEN_ENTER(0x500d00u, 0u, 0u, 0u, 0u);
  return 0x1098fac;
}

/* ref: Client::System::Resource::Handle::TimeLineResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00500d10(void)
{
  GEN_ENTER(0x500d10u, 0u, 0u, 0u, 0u);
  return 0x1098fe4;
}

/* ref: Client::System::Resource::Handle::LevelSceneResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00500d20(void)
{
  GEN_ENTER(0x500d20u, 0u, 0u, 0u, 0u);
  return 0x109901c;
}

/* ref: Client::System::Resource::Handle::LayerGroupResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00500d30(void)
{
  GEN_ENTER(0x500d30u, 0u, 0u, 0u, 0u);
  return 0x1099054;
}

/* ref: Client::System::Resource::Handle::SharedGroupResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00500d40(void)
{
  GEN_ENTER(0x500d40u, 0u, 0u, 0u, 0u);
  return 0x109908c;
}

/* ref: Client::System::Resource::Handle::NaviMeshResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00500d50(void)
{
  GEN_ENTER(0x500d50u, 0u, 0u, 0u, 0u);
  return 0x10990c4;
}

/* ref: Client::System::Resource::Handle::ExlResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00500d60(void)
{
  GEN_ENTER(0x500d60u, 0u, 0u, 0u, 0u);
  return 0x10990fc;
}

/* ref: Client::System::Resource::Handle::ExhResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00500d70(void)
{
  GEN_ENTER(0x500d70u, 0u, 0u, 0u, 0u);
  return 0x109912c;
}

/* ref: Client::System::Resource::Handle::ExdResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00500d80(void)
{
  GEN_ENTER(0x500d80u, 0u, 0u, 0u, 0u);
  return 0x109915c;
}

/* ref: Client::System::Resource::Handle::HardwareCursorResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00500d90(void)
{
  GEN_ENTER(0x500d90u, 0u, 0u, 0u, 0u);
  return 0x109918c;
}

/* ref: Client::System::Resource::Handle::CursorResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00500da0(void)
{
  GEN_ENTER(0x500da0u, 0u, 0u, 0u, 0u);
  return 0x10991c8;
}

/* ref: FUN_00500db0 */
GEN_OWN GEN_FRAME float10 F_00500db0(GEN_P(float param_1, float gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0x500db0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  return GEN_X87((float10)((float)GEN_TOF(((float10)param_1 +
                         (float10)param_3 * ((float10)param_2 - (float10)param_1)))));
}

/* ref: Client::System::Resource::Handle::UldResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00500dd0(void)
{
  GEN_ENTER(0x500dd0u, 0u, 0u, 0u, 0u);
  return 0x10991fc;
}

/* ref: Client::System::Resource::Handle::UgdResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00500de0(void)
{
  GEN_ENTER(0x500de0u, 0u, 0u, 0u, 0u);
  return 0x109922c;
}

/* ref: Client::System::Resource::Handle::PNGResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00500e00(void)
{
  GEN_ENTER(0x500e00u, 0u, 0u, 0u, 0u);
  return 0x109925c;
}

/* ref: Client::System::Resource::Handle::LuaResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00500e10(void)
{
  GEN_ENTER(0x500e10u, 0u, 0u, 0u, 0u);
  return 0x109928c;
}

/* ref: Client::System::Resource::Handle::LuabResourceHandle::vf16 */
GEN_OWN GEN_NOFRAME uint F_00500e20(void)
{
  GEN_ENTER(0x500e20u, 0u, 0u, 0u, 0u);
  return 0x10992bc;
}

/* ref: FUN_00500e90 */
GEN_OWN GEN_FRAME uint F_00500e90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x500e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  undefined * puVar1;
  
  puVar1 = ((undefined *)GEN_TOP((((int)*((char *)GEN_TOP((param_1 + 3))) << 8 | (int)*((char *)GEN_TOP((param_1 + 4)))) << 8 |
           (int)*((char *)GEN_TOP((param_1 + 5))))));
  if (puVar1 != ((undefined *)GEN_TOP(0x657831))) {
    return -(uint)(puVar1 != &REFG(undefined, 0x666678));
  }
  return 1;
}

/* ref: FUN_00500ed0 */
GEN_OWN GEN_FRAME uint F_00500ed0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x500ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  undefined * puVar1;
  
  puVar1 = ((undefined *)GEN_TOP((((int)*((char *)GEN_TOP((param_1 + 4))) << 8 | (int)*((char *)GEN_TOP((param_1 + 5)))) << 8 |
           (int)*((char *)GEN_TOP((param_1 + 6))))));
  if (puVar1 != ((undefined *)GEN_TOP(0x657831))) {
    return -(uint)(puVar1 != &REFG(undefined, 0x666678));
  }
  return 1;
}

/* ref: FUN_00500f10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00500f10(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x500f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  return in_ecx[1] - *in_ecx >> 2;
}

/* ref: FUN_00500f20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00500f20(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x500f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((*in_ecx + param_2 * 4))) + 4;
}

/* ref: FUN_00500f40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00500f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x500f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 < *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2) {
    return *((int *)GEN_TOP((*(int *)this + param_1 * 4))) != 0;
  }
  return 0;
}

/* ref: FUN_00500f70 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00500f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x500f70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  DWORD DVar2;
  int * piVar3;
  
  DVar2 = gen_imp_GetCurrentThreadId();
  if (*((DWORD *)GEN_TOP(((int)this + 0x40))) == DVar2) {
    piVar3 = ((int *)GEN_TOP(((int)this + 0x38)));
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar3), 0);
    return iVar1 != 0;
  }
  return 0;
}

/* ref: FUN_00501060 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00501060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x501060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  DWORD DVar1;
  
  DVar1 = gen_imp_GetCurrentThreadId();
  _InterlockedExchange((volatile long *)((((undefined4 *)GEN_TOP(((int)this + 0x3c))))), (long)(1));
  F_004fda90(REFG(undefined4, 0x1375ae8) GEN_EDX_ARG,param_1 + 0x30,param_1,DVar1 == *((DWORD *)GEN_TOP(((int)this + 0x44))));
  _InterlockedExchange((volatile long *)((((undefined4 *)GEN_TOP(((int)this + 0x3c))))), (long)(0));
  return;
}

/* ref: FUN_005010b0 */
GEN_OWN GEN_FRAME byte F_005010b0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x5010b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if ((char)param_1[0x18] == -1) {
    return 0;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x30))))(param_1 GEN_EDX_ARG);
  return (char)uVar1 != '\0';
}

/* ref: FUN_005010d0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005010d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5010d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0xde4)));
  if ((iVar1 != *((int *)GEN_TOP(((int)this + 0xde8)))) &&
     (iVar2 = (*((int *)GEN_TOP(((int)this + 0xde8))) - iVar1 >> 2) - 1, -1 < iVar2)) {
    piVar3 = ((int *)GEN_TOP((iVar1 + iVar2 * 4)));
    do {
      if (*piVar3 == param_1) {
        return 1;
      }
      piVar3 = piVar3 - 1;
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  return 0;
}

/* ref: FUN_00501120 */
GEN_OWN GEN_FRAME uint F_00501120(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x501120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x1375aec) + 8))) + (uint)(ushort)param_1 * 4)));
  if (iVar1 != 0) {
    return *((uint *)GEN_TOP((iVar1 + 0x10)));
  }
  return 0;
}

/* ref: FUN_00501140 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00501140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x501140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  if (*((char *)GEN_TOP(((int)this + 0x4e))) == '\0') {
    return 0;
  }
  if ((((*(byte *)(param_1 + 0x16) & 1) != 0) && (*((char *)GEN_TOP(((int)this + 0x51))) == '\0')) &&
     (*((char *)GEN_TOP(((param_1[1] & 0xffffU) + 0x52 + (int)this))) == '\0')) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x44))))(param_1 GEN_EDX_FWD);
    if ((uVar3 == 0) && (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x48))))(param_1 GEN_EDX_ARG), uVar3 == 0)) {
      return 0;
    }
    piVar1 = param_1 + 0x22;
    iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
    if (iVar2 == 2) {
      return param_1[0xd] == 1;
    }
  }
  return 0;
}

/* ref: FUN_005011b0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005011b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5011b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  F_00c48350(this,0,0x50);
  iVar3 = *((int *)GEN_TOP(((int)this + 0x54)));
  uVar1 = 0;
  do {
    iVar3 = iVar3 + *((int *)GEN_TOP(((int)&REFG(undefined4, 0x10993c0) + uVar1)));
    uVar2 = uVar1 + 0x14;
    *((int *)GEN_TOP(((int)this + 0x54))) = iVar3;
    iVar3 = iVar3 + *((int *)GEN_TOP(((int)&REFG(undefined4, 0x10993c4) + uVar1)));
    *((int *)GEN_TOP(((int)this + 0x54))) = iVar3;
    iVar3 = iVar3 + *((int *)GEN_TOP(((int)&REFG(undefined4, 0x10993c8) + uVar1)));
    *((int *)GEN_TOP(((int)this + 0x54))) = iVar3;
    iVar3 = iVar3 + *((int *)GEN_TOP(((int)&REFG(undefined4, 0x10993cc) + uVar1)));
    *((int *)GEN_TOP(((int)this + 0x54))) = iVar3;
    iVar3 = iVar3 + *((int *)GEN_TOP(((int)&REFG(undefined4, 0x10993d0) + uVar1)));
    *((int *)GEN_TOP(((int)this + 0x54))) = iVar3;
    uVar1 = uVar2;
  } while (uVar2 < 0x50);
  return (uint)this;
}

/* ref: FUN_00501240 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00501240(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x501240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = &REFG(undefined4, 0x1098040);
  uVar2 = 0;
  while ((*piVar1 != param_1 || (piVar1[1] != *param_2))) {
    uVar2 = uVar2 + 0xc;
    piVar1 = piVar1 + 3;
    if (0xb3 < uVar2) {
      return 0;
    }
  }
  uVar2 = piVar1[2];
  if (uVar2 == 0xffffffff) {
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: FUN_00501290 */
GEN_OWN GEN_FRAME byte GEN_STDCALL F_00501290(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x501290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = &REFG(undefined4, 0x1098040);
  uVar2 = 0;
  while ((*piVar1 != param_1 || (piVar1[1] != *param_2))) {
    uVar2 = uVar2 + 0xc;
    piVar1 = piVar1 + 3;
    if (0xb3 < uVar2) {
      return 1;
    }
  }
  if (piVar1[2] == -1) {
    return 1;
  }
  return piVar1[2] != 0;
}

/* ref: FUN_00501300 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00501300(GEN_P(undefined1 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(byte param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x501300u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(byte param_4 = (byte)gen_a3;)
  uint uVar1;
  ulonglong uVar2;
  
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = param_2;
  param_1[3] = 0xff;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) ^ (*(uint *)(param_1 + 8) ^ param_3) & 0x7fffffff;
  uVar2 = F_00427d90();
  uVar1 = (uint)(uVar2 / 1000);
  *(uint *)(param_1 + 4) = uVar1;
  param_1[0xc] = param_1[0xc] ^ (param_1[0xc] ^ param_4) & 1;
  return uVar1;
}

/* ref: FUN_00501350 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00501350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x501350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x10, 0, 4);
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc));
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  F_0040b1a0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1,(int)pcVar2 - (int)(param_1 + 1));
  uVar3 = F_00408810(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_004087f0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar3 == *((uint *)GEN_TOP(((int)this + 0xc)));
}

/* ref: FUN_005013b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005013b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5013b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint local_8;
  
  uVar2 = 0;
  if (*((uint *)GEN_TOP(((int)this + 0x1c))) == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *((uint *)GEN_TOP(((int)this + 0x1c))) / *((uint *)GEN_TOP(((int)this + 0x94)));
  }
  uVar3 = *((int *)GEN_TOP(((int)this + 0x74))) - *((int *)GEN_TOP(((int)this + 0x70))) >> 2;
  if (uVar3 != 0) {
    do {
      uVar1 = F_005013b0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x70))) + uVar2 * 4))) GEN_EDX_FWD);
      local_8 = local_8 + uVar1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return local_8;
}

/* ref: Client::System::Resource::Handle::ResourceHandle::vf5 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00501400(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x501400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  int iVar1;
  int * piVar2;
  
  if ((*((char *)GEN_TOP((param_1 + 0x60))) != -1) && (*((char *)GEN_TOP((param_1 + 0x60))) == param_2)) {
    piVar2 = ((int *)GEN_TOP((param_1 + 0x8c)));
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
    if (iVar1 == 7) {
      piVar2 = ((int *)GEN_TOP((param_1 + 0x88)));
      iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
      if (iVar1 != 3) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::ResourceHandle::vf9 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00501440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x501440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  undefined1 RVar2;
  undefined1 RVar3;
  byte bVar4;
  uint uVar5;
  undefined * pRVar6;
  undefined * pRVar8;
  ulonglong uVar9;
  undefined3 uVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD);
  bVar4 = (byte)uVar5;
  (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3)) = bVar4;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP(CONCAT13(bVar4,GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x0)), 0, 3))));
  pRVar6 = (undefined *)&(*(undefined4 *)&gen_args[0]);
  if (bVar4 <= (byte)(*(undefined4 *)&gen_args[0])) {
    pRVar6 = ((undefined *)GEN_TOP(((int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3)));
  }
  RVar2 = this[0x60];
  RVar3 = *(undefined1 *)pRVar6;
  (*(undefined4 *)&gen_args[0]) = CONCAT13(RVar3,(undefined3)(*(undefined4 *)&gen_args[0]));
  if (RVar2 == (undefined1)0xff) {
    pRVar6 = this + 0x88;
    iVar1 = _InterlockedExchangeAdd((volatile long *)(((int *)pRVar6)), 0);
    if (iVar1 != 3) {
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG);
      *(uint *)(this + 0x68) =
           *(uint *)(this + 0x68) ^ (*(uint *)(this + 0x68) ^ uVar5) & 0x7fffffff;
      this[0x60] = RVar3;
      this[0x61] = RVar3;
      this[0x62] = RVar3;
      this[99] = (undefined1)0xff;
      uVar9 = F_00427d90();
      pRVar6 = ((undefined *)GEN_TOP((uVar9 / 1000)));
      *(undefined * PTR32 *)(this + 100) = pRVar6;
      this[0x6c] = (undefined1)((byte)this[0x6c] ^ ((*(int *)&gen_args[1]) == 1 ^ (byte)this[0x6c]) & 1);
    }
  }
  else {
    if (((*(int *)&gen_args[1]) == 0) && (((byte)this[0x6c] & 1) == 0)) {
      pRVar8 = ((undefined *)GEN_TOP(((int)&(*(undefined4 *)&gen_args[0]) + 3)));
      if ((byte)this[0x61] <= (byte)RVar3) {
        pRVar8 = this + 0x61;
      }
      this[0x61] = *pRVar8;
      return (uint)pRVar6;
    }
    RVar2 = this[0x6c];
    uVar7 = (undefined3)((uint)((int)(uintptr_t)pRVar6) >> 8);
    pRVar6 = ((undefined *)GEN_TOP(CONCAT31(uVar7,RVar2)));
    if ((((byte)RVar2 & 1) != 0) && ((*(int *)&gen_args[1]) == 2)) {
      uVar5 = CONCAT31(uVar7,RVar2) & 0xfffffffe;
      this[0x61] = RVar3;
      this[0x6c] = SUB41(uVar5,0);
      return uVar5;
    }
    if (((byte)RVar2 & 1) == 0) {
      if ((*(int *)&gen_args[1]) == 1) {
        this[0x61] = RVar3;
        this[0x6c] = (undefined1)((byte)RVar2 | 1);
        return CONCAT31(uVar7,RVar2) | 1;
      }
    }
    else if ((*(int *)&gen_args[1]) == 1) goto LAB_005014cf;
    if ((*(int *)&gen_args[1]) == 2) {
LAB_005014cf: ;
      this[0x61] = RVar3;
      return (uint)pRVar6;
    }
  }
  return (uint)pRVar6;
}

/* ref: Client::System::Resource::Handle::ResourceHandle::vf11 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00501540(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x501540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (*((char *)GEN_TOP((in_ecx + 0x60))) != -1) {
    *((uint *)GEN_TOP((in_ecx + 0x68))) =
         *((uint *)GEN_TOP((in_ecx + 0x68))) ^ (*((uint *)GEN_TOP((in_ecx + 0x68))) ^ param_2) & 0x7fffffff;
  }
  return;
}

/* ref: Client::System::Resource::Handle::ResourceHandle::vf13 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00501560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x501560u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  int * piVar1;
  int iVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined4 in_EAX = 0;
  uint uVar5;
  undefined1 * puVar6;
  ulonglong uVar7;
  
  uVar5 = CONCAT31((int3)((uint)in_EAX >> 8),(char)(*(undefined4 *)&gen_args[0]));
  if ((char)(*(undefined4 *)&gen_args[0]) == -2) {
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD);
  }
  bVar4 = (byte)uVar5;
  (*(undefined4 *)&gen_args[0]) = CONCAT13(bVar4,(undefined3)(*(undefined4 *)&gen_args[0]));
  if ((char)param_1[0x18] != -1) {
    puVar6 = ((undefined1 *)GEN_TOP(((int)&(*(undefined4 *)&gen_args[0]) + 3)));
    if (*((byte *)GEN_TOP(((int)param_1 + 0x61))) <= bVar4) {
      puVar6 = ((undefined1 *)GEN_TOP(((int)param_1 + 0x61)));
    }
    uVar3 = *puVar6;
    param_1[0x1a] = param_1[0x1a] ^ (param_1[0x1a] ^ (*(uint *)&gen_args[1])) & 0x7fffffff;
    *(byte *)(param_1 + 0x1b) =
         *(byte *)(param_1 + 0x1b) ^ (*(byte *)(param_1 + 0x1b) ^ (*(byte *)&gen_args[2])) & 1;
    *((undefined1 *)GEN_TOP(((int)param_1 + 0x61))) = uVar3;
    return CONCAT31((int3)((uint)((int)(uintptr_t)puVar6) >> 8),uVar3);
  }
  piVar1 = param_1 + 0x22;
  iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
  if (iVar2 != 3) {
    *(byte *)(param_1 + 0x18) = bVar4;
    *((byte *)GEN_TOP(((int)param_1 + 0x61))) = bVar4;
    *((byte *)GEN_TOP(((int)param_1 + 0x62))) = bVar4;
    *((undefined1 *)GEN_TOP(((int)param_1 + 99))) = 0xff;
    param_1[0x1a] = param_1[0x1a] ^ (param_1[0x1a] ^ (*(uint *)&gen_args[1])) & 0x7fffffff;
    uVar7 = F_00427d90();
    uVar5 = (uint)(uVar7 / 1000);
    param_1[0x19] = uVar5;
    *(byte *)(param_1 + 0x1b) =
         *(byte *)(param_1 + 0x1b) ^ (*(byte *)(param_1 + 0x1b) ^ (*(byte *)&gen_args[2])) & 1;
  }
  return uVar5;
}

/* ref: Client::System::Resource::Handle::ResourceHandle::vf14 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00501610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x501610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined1 RVar1;
  ulonglong uVar2;
  undefined1 RVar3;
  undefined1 RVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD);
  if (((char)uVar6 != '\0') || (this[0x60] == (undefined1)0xff)) {
    return 0;
  }
  RVar3 = this[0x61];
  if (RVar3 == (undefined1)0xfe) {
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    RVar3 = SUB41(uVar6,0);
  }
  RVar4 = (undefined1)F_005ecfe0(this);
  if ((RVar4 != (undefined1)0xff) && ((byte)RVar4 < (byte)RVar3)) {
    RVar3 = RVar4;
  }
  RVar1 = this[0x60];
  if ((byte)RVar3 < (byte)RVar1) {
    this[0x62] = RVar1;
    this[99] = RVar1;
    this[0x60] = RVar3;
    *(int *)(this + 100) = (int)(CONCAT44(param_2,param_1) / 1000);
    uVar7 = 1;
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x78))))(this GEN_EDX_ARG);
    cVar5 = (char)uVar6;
  }
  else {
    if ((byte)RVar3 <= (byte)RVar1) {
      *(int *)(this + 100) = (int)(CONCAT44(param_2,param_1) / 1000);
      goto LAB_00501759;
    }
    if ((*((int *)GEN_TOP((REFG(int, 0x1379cb0) + 0x28))) != 0) && (*((char *)GEN_TOP((REFG(int, 0x1375aec) + 0x4f))) != '\0')) {
      return 0;
    }
    uVar2 = (ulonglong)*(uint *)(this + 100) * 1000 +
            (ulonglong)(*(uint *)(this + 0x68) & 0x7fffffff);
    if ((((byte)this[0x6c] & 1) != 0) || (RVar4 != (undefined1)0xff)) {
      uVar2 = 0;
    }
    if (CONCAT44(param_2,param_1) <= uVar2) {
      uVar7 = 0;
      goto LAB_00501759;
    }
    this[0x62] = RVar1;
    this[99] = RVar3;
    this[0x60] = RVar3;
    *(int *)(this + 100) = (int)(CONCAT44(param_2,param_1) / 1000);
    uVar7 = 2;
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x7c))))(this GEN_EDX_ARG);
    cVar5 = (char)uVar6;
  }
  if (cVar5 == '\0') {
    this[99] = this[0x62];
    this[0x60] = this[0x62];
  }
LAB_00501759: ;
  if (((byte)this[0x6c] & 1) == 0) {
    this[0x61] = (undefined1)0xfe;
  }
  return uVar7;
}

/* ref: FUN_005017b0 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_005017b0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5017b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_GS(0x108, 8, 4);
  int * piVar1;
  int * piVar2;
  int iVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x100)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x104));
  piVar1 = param_1 + 0x22;
  iVar3 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
  if (iVar3 == 1) {
    if ((param_2 != 0) && (*((int *)GEN_TOP((param_2 + 0x10))) < param_1[0xb])) {
      param_1[0xb] = *((int *)GEN_TOP((param_2 + 0x10)));
    }
    return 0;
  }
  if (iVar3 != 2) {
    if (iVar3 == 3) {
      if ((param_2 != 0) && (*((char *)GEN_TOP((param_2 + 0x20))) != '\0')) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 100))))(param_1 GEN_EDX_FWD);
        _InterlockedExchange((volatile long *)(piVar1), (long)(1));
        LOCK();
        param_1[0x23] = 1;
        UNLOCK();
        LOCK();
        param_1[0x24] = 0;
        UNLOCK();
        param_1[0xd] = -0x14;
        if (param_1[0xb] == 6) {
          param_1[0xb] = 5;
        }
        *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) | 0x10;
        param_1[0xd] = -0x14;
        param_1[4] = *((int *)GEN_TOP((param_2 + 4)));
        return 1;
      }
      piVar2 = param_1 + 0x23;
      iVar3 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
      switch((unsigned int)(uintptr_t)(iVar3)) {
      case 1: ;
      case 2: ;
      case 3: ;
      case 4: ;
      case 5: ;
      case 6: ;
      case 8: ;
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 100))))(param_1 GEN_EDX_ARG);
        _InterlockedExchange((volatile long *)(piVar1), (long)(1));
        _InterlockedExchange((volatile long *)(piVar2), (long)(1));
        LOCK();
        param_1[0x24] = 0;
        UNLOCK();
        *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) | 0x10;
        param_1[0xd] = -0x14;
        return 1;
      case 7: ;
        goto switchD_005018a6_caseD_7;
      case 9: ;
      case 10: ;
      case 0xb: ;
      case 0xc: ;
        _InterlockedExchange((volatile long *)(piVar1), (long)(2));
        return 0;
      default: ;
        F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x100,&REFG(undefined, 0x10980f4),iVar3);
        return 0;
      }
    }
    F_00c472af(((undefined1 *)(gen_frame + 0x0)),0x100,&REFG(undefined, 0x1098014),iVar3);
  }
  return 0;
switchD_005018a6_caseD_7: ;
  if (param_3 == '\0') {
    _InterlockedExchange((volatile long *)(piVar1), (long)(2));
    return 0;
  }
  _InterlockedExchange((volatile long *)(piVar1), (long)(1));
  _InterlockedExchange((volatile long *)(piVar2), (long)(1));
  LOCK();
  param_1[0x24] = 2;
  UNLOCK();
  param_1[0xd] = -0x14;
  if (param_1[0xb] == 6) {
    param_1[0xb] = 5;
  }
  *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) | 0x10;
  param_1[0xd] = -0x14;
  return 1;
}

/* ref: FUN_00501a10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00501a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x501a10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 100))))(this GEN_EDX_FWD);
  uVar1 = _InterlockedExchange((volatile long *)((((uint *)GEN_TOP(((int)this + 0x88))))), (long)(4));
  return uVar1;
}

/* ref: FUN_00501a30 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00501a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x501a30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x68))))(this GEN_EDX_FWD);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  return (uint)((*((uint *)GEN_TOP(((int)this + 0x30))) & 0xc000000) == 0);
}

/* ref: FUN_00501aa0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00501aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x501aa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  int * piVar3;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x6c))))(this GEN_EDX_FWD);
  _InterlockedExchange((volatile long *)((((undefined4 *)GEN_TOP(((int)this + 0x88))))), (long)(3));
  piVar1 = ((int *)GEN_TOP(((int)this + 0x80)));
  do {
    iVar2 = _InterlockedExchange((volatile long *)(piVar1), (long)(1));
  } while (iVar2 != 0);
  piVar3 = piVar1;
  if ((*((uint *)GEN_TOP(((int)this + 0x30))) & 0xc000000) != 0) {
    piVar3 = ((int *)GEN_TOP(F_004f9cb0(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG)));
  }
  _InterlockedExchange((volatile long *)(piVar1), (long)(0));
  *((byte *)GEN_TOP(((int)this + 0x58))) = *((byte *)GEN_TOP(((int)this + 0x58))) & 0xef;
  return (uint)piVar3;
}

/* ref: FUN_00501af0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00501af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x501af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  undefined4 uVar6;
  byte bVar7;
  
  piVar3 = ((int *)GEN_TOP(((int)this + 0x90)));
  iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar3), 0);
  if (iVar2 == 2) {
    piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x38)));
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_FWD)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x38))));
      *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
    }
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x9c))))(this GEN_EDX_ARG,param_2);
    *((uint *)GEN_TOP(((int)this + 0x34))) = uVar4;
  }
  else {
    if ((param_3 == 0) || (param_3 == 1)) {
      piVar5 = *((int * PTR32 *)GEN_TOP(((int)this + 0x38)));
      if (piVar5 != ((int *)GEN_TOP(0x0))) {
        piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xc))))(piVar5 GEN_EDX_ARG)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0xc))))(piVar5 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x38))));
        *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
      }
      if (param_3 == 1) {
        puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x8c)));
        LOCK();
        *puVar1 = *puVar1;
        UNLOCK();
        _InterlockedExchange((volatile long *)(puVar1), (long)(6));
      }
    }
    if (*((uint *)GEN_TOP(((int)this + 0x34))) == 0xffffffec) {
      iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar3), 0);
      if (iVar2 == 1) {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x8c))))(this GEN_EDX_ARG,param_1,param_2);
      }
      else {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x84))))(this GEN_EDX_ARG,param_1,param_2);
      }
LAB_00501c50: ;
      *((uint *)GEN_TOP(((int)this + 0x34))) = uVar4;
    }
    else {
      uVar4 = param_2;
      if (param_2 != *((uint *)GEN_TOP(((int)this + 0x34)))) goto LAB_00501c50;
    }
    if (param_3 == 1) {
      return 0;
    }
  }
  gen_imp_EnterCriticalSection(*((LPCRITICAL_SECTION *)GEN_TOP(((int)this + 0x84))));
  piVar3 = ((int *)GEN_TOP(((int)this + 0x80)));
  do {
    iVar2 = _InterlockedExchange((volatile long *)(piVar3), (long)(1));
  } while (iVar2 != 0);
  if ((*((uint *)GEN_TOP(((int)this + 0x30))) & 0xc000000) != 0) {
    F_004fad40(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG);
  }
  _InterlockedExchange((volatile long *)(piVar3), (long)(0));
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)this + 0x38)));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x38))));
    *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  }
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 1: ;
    _InterlockedExchange((volatile long *)((((undefined4 *)GEN_TOP(((int)this + 0x8c))))), (long)(7));
    bVar7 = 1;
    goto LAB_00501caa;
  case 2: ;
    uVar6 = 8;
LAB_00501ca0: ;
    _InterlockedExchange((volatile long *)((((undefined4 *)GEN_TOP(((int)this + 0x8c))))), (long)(uVar6));
    break;
  case 0xfffffff6: ;
    _InterlockedExchange((volatile long *)((((undefined4 *)GEN_TOP(((int)this + 0x8c))))), (long)(10));
    break;
  default: ;
    uVar6 = 0xc;
    goto LAB_00501ca0;
  case 0xffffffff: ;
    _InterlockedExchange((volatile long *)((((undefined4 *)GEN_TOP(((int)this + 0x8c))))), (long)(9));
  }
  bVar7 = 0;
LAB_00501caa: ;
  gen_imp_LeaveCriticalSection(*((LPCRITICAL_SECTION *)GEN_TOP(((int)this + 0x84))));
  return bVar7;
}

/* ref: FUN_00501cf0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00501cf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x501cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (((param_2 < 0x400001) && (*((int *)GEN_TOP((in_ecx + 0x14))) == 0)) && (*((int *)GEN_TOP((in_ecx + 0x18))) == 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00501d20 */
GEN_OWN GEN_FRAME uint F_00501d20(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x501d20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  ulonglong uVar1;
  
  if (*param_1 == 0xb) {
    return param_1[0x32];
  }
  uVar1 = F_004f7900(((undefined *)GEN_TOP(param_1[9])) GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00501d40 */
GEN_OWN GEN_FRAME uint F_00501d40(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x501d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (*param_1 != 0xb) {
    uVar3 = F_004f78b0(((undefined *)GEN_TOP(param_1[9])) GEN_EDX_ARG,param_2,param_3,param_4,0);
    return uVar3;
  }
  if (((uint)param_1[0x13] < 2) ||
     (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0xd])) + 0xa4))))(((int *)GEN_TOP(param_1[0xd])) GEN_EDX_ARG), uVar3 != 1)) {
    if (param_4 == 0) {
      uVar3 = param_1[0x34];
      iVar4 = param_1[0x35] + param_3 + (uint)CARRY4(uVar3,param_2);
      uVar5 = param_2;
      iVar6 = param_3;
    }
    else {
      if (param_4 != 1) {
        return 0xfffffff6;
      }
      uVar2 = param_1[0x38];
      uVar3 = param_1[0x34] + uVar2;
      iVar4 = param_1[0x35] + param_1[0x39] + (uint)CARRY4(param_1[0x34],uVar2) + param_3 +
              (uint)CARRY4(uVar3,param_2);
      uVar5 = uVar2 + param_2;
      iVar6 = param_1[0x39] + param_3 + (uint)CARRY4(uVar2,param_2);
    }
    param_1[0x39] = iVar6;
    param_1[0x38] = uVar5;
    uVar3 = F_004f78b0(*((undefined * PTR32 *)GEN_TOP((param_1[0x11] + 0xa70 + param_1[0x36] * 4))) GEN_EDX_ARG,uVar3 + param_2,iVar4
                         ,0,0);
    return uVar3;
  }
  if (param_4 == 0) {
    param_1[0x38] = param_2;
    param_1[0x39] = param_3;
    return 1;
  }
  if (param_4 != 1) {
    return 0xfffffff6;
  }
  puVar1 = (uint *)(param_1 + 0x38);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + param_2;
  param_1[0x39] = param_1[0x39] + param_3 + (uint)CARRY4(uVar3,param_2);
  return 1;
}

/* ref: Client::System::Resource::Handle::DefaultResourceHandle::vf27 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00501e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x501e70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pDVar2;
  
  pDVar2 = this + 0x8c;
  uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pDVar2)), 0);
  if (uVar1 == 7) {
    pDVar2 = this + 0x88;
    uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pDVar2)), 0);
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::DefaultResourceHandle::vf28 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00501e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x501e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pDVar2;
  
  pDVar2 = this + 0x8c;
  uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pDVar2)), 0);
  if (uVar1 == 7) {
    pDVar2 = this + 0x88;
    uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pDVar2)), 0);
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::DefaultResourceHandle::vf29 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00501eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x501eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pDVar2;
  
  pDVar2 = this + 0x8c;
  uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pDVar2)), 0);
  if (uVar1 == 7) {
    pDVar2 = this + 0x88;
    uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pDVar2)), 0);
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::DefaultResourceHandle::vf33 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00501ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x501ed0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  if (param_2 == 1) {
    LOCK();
    *(undefined4 *)(this + 0x88) = *(undefined4 *)(this + 0x88);
    UNLOCK();
  }
  return param_2;
}

/* ref: Client::System::Resource::Handle::DefaultResourceHandle::vf35 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00501ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x501ef0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  if (param_2 == 1) {
    LOCK();
    *(undefined4 *)(this + 0x88) = *(undefined4 *)(this + 0x88);
    UNLOCK();
  }
  return param_2;
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf4 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00501f10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x501f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  byte bVar2;
  byte * pbVar3;
  
  (*(int *)(gen_frame + 0x0)) = in_ecx;
  bVar2 = 0xfe;
  (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x0)) + 3)) = 0xfe;
  if (*((int *)GEN_TOP((in_ecx + 0xb8))) != 0) {
    cVar1 = *((char *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xa8))) + 4))) + 0x1e + *((int *)GEN_TOP((in_ecx + 0xa8)))))) - 1;
    (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x0)) + 2)) = cVar1;
    pbVar3 = ((byte *)GEN_TOP(((int)&(*(int *)(gen_frame + 0x0)) + 3)));
    if (cVar1 != -1) {
      pbVar3 = ((byte *)GEN_TOP(((int)&(*(int *)(gen_frame + 0x0)) + 2)));
    }
    bVar2 = *pbVar3;
  }
  return bVar2;
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf27 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00501f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x501f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pMVar2;
  
  pMVar2 = this + 0x8c;
  uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pMVar2)), 0);
  if (uVar1 == 7) {
    pMVar2 = this + 0x88;
    uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pMVar2)), 0);
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf31 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00501f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x501f70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_GS(0x110, 0, 4);
  undefined * pMVar1;
  int iVar2;
  int * piVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c));
  pMVar1 = this + 0x88;
  iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pMVar1)), 0);
  if ((iVar2 == 2) && (*(int *)(this + 0xa8) != 0)) {
    bVar7 = 0;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_FWD);
    bVar4 = (byte)uVar5;
    if (bVar4 < 3) {
      if (bVar4 != 0) {
        bVar6 = 0;
        if (bVar4 != 0) {
          do {
            ((byte *)(gen_frame + 0x8))[(int)(bVar7)] = bVar6;
            bVar6 = bVar6 + 1;
            bVar7 = bVar7 + 1;
          } while (bVar6 < bVar4);
        }
        if (bVar7 != 0) {
          (*(uint *)(gen_frame + 0x0)) = (uint)bVar7;
          (*(byte * PTR32 *)(gen_frame + 0x4)) = ((byte *)(gen_frame + 0x8));
          do {
            uVar5 = (uint)*(*(byte * PTR32 *)(gen_frame + 0x4));
            piVar3 = *(int * PTR32 *)(this + uVar5 * 4 + 0x10c);
            if (piVar3 != ((int *)GEN_TOP(0x0))) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG);
              *(undefined4 *)(this + uVar5 * 4 + 0x10c) = 0;
            }
            if ((this[0x12a] != (undefined1)0x0) &&
               (piVar3 = *(int * PTR32 *)(this + uVar5 * 4 + 0x118), piVar3 != ((int *)GEN_TOP(0x0)))) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG);
              *(undefined4 *)(this + uVar5 * 4 + 0x118) = 0;
            }
            (*(byte * PTR32 *)(gen_frame + 0x4)) = (*(byte * PTR32 *)(gen_frame + 0x4)) + 1;
            (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) - 1;
          } while ((*(uint *)(gen_frame + 0x0)) != 0);
        }
      }
      F_004ffdd0(this GEN_EDX_ARG);
      return 1;
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_005020a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_005020a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4), GEN_P(ushort * param_5, unsigned int gen_a5), GEN_P(ushort * param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x5020a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  GEN_PIN(ushort * param_5 = (ushort *)(uintptr_t)gen_a5;)
  GEN_PIN(ushort * param_6 = (ushort *)(uintptr_t)gen_a6;)
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (((param_4 < 0x400001) && (*((int *)GEN_TOP(((int)this + 0x14))) == 0)) &&
     (*((int *)GEN_TOP(((int)this + 0x18))) == 0)) {
    uVar3 = F_004f9290(param_2 GEN_EDX_FWD,param_4,((char *)REFP(0x1098424)))
    ;
    F_004f77b0(param_1 GEN_EDX_ARG,uVar3,param_4,0);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xac))))(this GEN_EDX_ARG);
    param_1 = ((undefined *)GEN_TOP(0x0));
    if ((ushort)param_5 != 0) {
      uVar4 = (uint)(ushort)param_5;
      param_5 = param_6;
      param_6 = ((ushort *)GEN_TOP(uVar4));
      do {
        uVar1 = *param_5;
        iVar2 = *((int *)GEN_TOP((uVar3 + 0xc)));
        F_004f81e0(param_2 GEN_EDX_ARG,6,uVar3,(uint)uVar1,(int)param_1 + param_3,iVar2 + 0xfU & 0xfffffff0);
        param_1 = ((undefined *)GEN_TOP(((int)param_1 + iVar2)));
        param_5 = param_5 + 1;
        uVar3 = uVar3 + uVar1;
        param_6 = ((ushort *)GEN_TOP(((int)param_6 - 1)));
      } while (param_6 != ((ushort *)GEN_TOP(0x0)));
      return 1;
    }
  }
  else {
    param_4 = 0;
    if ((ushort)param_5 != 0) {
      uVar3 = (uint)(ushort)param_5;
      param_5 = param_6;
      param_6 = ((ushort *)GEN_TOP(uVar3));
      do {
        uVar4 = (uint)*param_5;
        uVar3 = F_004f9290(param_2 GEN_EDX_ARG,uVar4,
                             ((char *)REFP(0x1098460)));
        F_004f77b0(param_1 GEN_EDX_ARG,uVar3,uVar4,0);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa8))))(this GEN_EDX_ARG);
        iVar2 = *((int *)GEN_TOP((uVar3 + 0xc)));
        F_004f81e0(param_2 GEN_EDX_ARG,6,uVar3,uVar4,param_4 + param_3,iVar2 + 0xfU & 0xfffffff0);
        param_4 = param_4 + iVar2;
        param_5 = param_5 + 1;
        param_6 = ((ushort *)GEN_TOP(((int)param_6 - 1)));
      } while (param_6 != ((ushort *)GEN_TOP(0x0)));
    }
  }
  return 1;
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf35 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005021f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5021f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined * pMVar4;
  
  uVar3 = param_2;
  if (param_2 == 1) {
    pMVar4 = this + 0x88;
    iVar1 = _InterlockedExchangeAdd((volatile long *)(((int *)pMVar4)), 0);
    if (iVar1 != 3) {
      pMVar4 = this + 0x118;
      uVar2 = 3;
      do {
        uVar3 = uVar2;
        if (*(undefined * PTR32 *)(pMVar4 - 0xc) != ((undefined *)GEN_TOP(0x0))) {
          F_004d6970(*(undefined * PTR32 *)(pMVar4 - 0xc) GEN_EDX_FWD);
        }
        if (*(undefined * PTR32 *)pMVar4 != ((undefined *)GEN_TOP(0x0))) {
          F_004d6ae0(*(undefined * PTR32 *)pMVar4 GEN_EDX_ARG);
        }
        pMVar4 = pMVar4 + 4;
        uVar2 = uVar3 - 1;
      } while (uVar3 - 1 != 0);
      F_004ffdd0(this GEN_EDX_ARG);
    }
  }
  return uVar3;
}

/* ref: FUN_00502250 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00502250(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x502250u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD);
  if ((((char)uVar1 == '\0') && (-1 < (int)(*((byte *)GEN_TOP(((int)param_1 + 0x17d))) - 1))) &&
     (!(((float10)GEN_TOD(gen_bits2f(param_1[*((byte *)GEN_TOP(((int)param_1 + 0x17d))) + 0x59]))) <= (float10)param_2)))
  {
    F_0051b970(param_1 + 0x57 GEN_EDX_ARG,param_2);
    return;
  }
  return;
}

/* ref: FUN_005022a0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005022a0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x5022a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  float * pfVar4;
  
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD);
  if ((char)uVar3 == '\0') {
    uVar3 = 0;
    if (*(byte *)(param_1 + 0x5f) != 1) {
      pfVar4 = (float *)(param_1 + 0x5a);
      while (!((float10)param_2 < (float10)*pfVar4)) {
        uVar3 = uVar3 + 1;
        pfVar4 = pfVar4 + 1;
        if (*(byte *)(param_1 + 0x5f) - 1 <= uVar3) {
          return 0;
        }
      }
      puVar1 = (uint *)(param_1 + 0x57);
      uVar2 = param_1[0x57];
      while (uVar3 < uVar2) {
        LOCK();
        if (uVar2 == *puVar1) {
          *puVar1 = uVar3;
        }
        UNLOCK();
        uVar2 = *puVar1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00502310 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00502310(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x502310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD);
  if ((char)uVar2 == '\0') {
    puVar1 = (uint *)(param_1 + 0x57);
    uVar2 = param_1[0x57];
    while (param_2 < uVar2) {
      LOCK();
      if (uVar2 == *puVar1) {
        *puVar1 = (uint)param_2;
      }
      UNLOCK();
      uVar2 = *puVar1;
    }
  }
  return uVar2;
}

/* ref: FUN_00502350 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00502350(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x502350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint * puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD);
  bVar3 = (byte)uVar4;
  if (bVar3 == 0) {
    if (param_2 == 0xff) {
      *(undefined2 *)(param_1 + 0x59) = 0x100;
      return 0xff;
    }
    iVar2 = param_1[0x2a];
    bVar3 = param_2;
    if (*((byte *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 4))) + 0x1e + iVar2))) <= param_2) {
      bVar3 = *((char *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 4))) + 0x1e + iVar2))) - 1;
    }
    puVar1 = (uint *)(param_1 + 0x57);
    uVar4 = param_1[0x57];
    while (bVar3 < uVar4) {
      LOCK();
      if (uVar4 == *puVar1) {
        *puVar1 = (uint)bVar3;
      }
      UNLOCK();
      uVar4 = *puVar1;
    }
    bVar3 = (byte)uVar4;
    *(undefined2 *)(param_1 + 0x59) = 1;
  }
  return bVar3;
}

/* ref: FUN_00502570 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00502570(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x502570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  short sVar1;
  
  sVar1 = *((short *)GEN_TOP((in_ecx + 4)));
  if ((sVar1 != 1) && (sVar1 != 2)) {
    return (sVar1 != 4) - 1 & 7;
  }
  return 6;
}

/* ref: FUN_005025a0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005025a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5025a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP(((int)this + 0x100))) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xfc)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = *((uint *)GEN_TOP(((int)this + 0xe8)));
      *((uint *)GEN_TOP(((int)this + 0xe8))) = (uVar2 - (piVar1[2] & 0xfffffff0U) ^ uVar2) & 0x7ffffff ^ uVar2;
      if (piVar1 != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
        *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = 0;
      }
    }
    *((undefined4 *)GEN_TOP(((int)this + 0xfc))) = *((undefined4 *)GEN_TOP(((int)this + 0x100)));
    *((undefined4 *)GEN_TOP(((int)this + 0x100))) = 0;
  }
  return;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandle::vf27 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00502610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x502610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pTVar2;
  
  pTVar2 = this + 0x8c;
  uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pTVar2)), 0);
  if (uVar1 == 7) {
    pTVar2 = this + 0x88;
    uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pTVar2)), 0);
  }
  return uVar1;
}

/* ref: FUN_00502630 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00502630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(uint param_4, unsigned int gen_a4), GEN_P(ushort * param_5, unsigned int gen_a5), GEN_P(ushort * param_6, unsigned int gen_a6))
{
  GEN_ENTER(0x502630u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(uint param_4 = (uint)gen_a4;)
  GEN_PIN(ushort * param_5 = (ushort *)(uintptr_t)gen_a5;)
  GEN_PIN(ushort * param_6 = (ushort *)(uintptr_t)gen_a6;)
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (((param_4 < 0x400001) && (*((int *)GEN_TOP(((int)this + 0x14))) == 0)) &&
     (*((int *)GEN_TOP(((int)this + 0x18))) == 0)) {
    uVar3 = F_004f9290(param_2 GEN_EDX_FWD,param_4,((char *)REFP(0x10984d0)))
    ;
    if (param_4 != 0) {
      F_004f77b0(param_1 GEN_EDX_ARG,uVar3,param_4,0);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xac))))(this GEN_EDX_ARG);
      param_1 = ((undefined *)GEN_TOP(0x0));
      if ((ushort)param_5 != 0) {
        uVar4 = (uint)(ushort)param_5;
        param_5 = param_6;
        param_6 = ((ushort *)GEN_TOP(uVar4));
        do {
          uVar1 = *param_5;
          iVar2 = *((int *)GEN_TOP((uVar3 + 0xc)));
          F_004f81e0(param_2 GEN_EDX_ARG,6,uVar3,(uint)uVar1,(int)param_1 + param_3,iVar2 + 0xfU & 0xfffffff0)
          ;
          param_1 = ((undefined *)GEN_TOP(((int)param_1 + iVar2)));
          param_5 = param_5 + 1;
          uVar3 = uVar3 + uVar1;
          param_6 = ((ushort *)GEN_TOP(((int)param_6 - 1)));
        } while (param_6 != ((ushort *)GEN_TOP(0x0)));
        return 1;
      }
    }
  }
  else {
    param_4 = 0;
    if ((ushort)param_5 != 0) {
      uVar3 = (uint)(ushort)param_5;
      param_5 = param_6;
      param_6 = ((ushort *)GEN_TOP(uVar3));
      do {
        uVar4 = (uint)*param_5;
        uVar3 = F_004f9290(param_2 GEN_EDX_ARG,uVar4,
                             ((char *)REFP(0x109850c)));
        F_004f77b0(param_1 GEN_EDX_ARG,uVar3,uVar4,0);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa8))))(this GEN_EDX_ARG);
        iVar2 = *((int *)GEN_TOP((uVar3 + 0xc)));
        F_004f81e0(param_2 GEN_EDX_ARG,6,uVar3,uVar4,param_4 + param_3,iVar2 + 0xfU & 0xfffffff0);
        param_4 = param_4 + iVar2;
        param_5 = param_5 + 1;
        param_6 = ((ushort *)GEN_TOP(((int)param_6 - 1)));
      } while (param_6 != ((ushort *)GEN_TOP(0x0)));
    }
  }
  return 1;
}

/* ref: FUN_00502780 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00502780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x502780u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  F_00b4cf00(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,((uint *)GEN_TOP(((int)this + 0x98))));
  if ((*((byte *)GEN_TOP(((int)this + 0xec))) & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG);
    uVar2 = uVar2 & 0xff;
  }
  uVar1 = F_00b4d010(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar2);
  uVar6 = (uint)uVar1;
  uVar1 = F_00b4d000(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x98))) & 0x3c00000;
  uVar2 = (uint)uVar1;
  if (uVar4 == 0x800000) {
    iVar5 = 0;
    if (uVar6 < uVar2) {
      iVar3 = uVar2 - uVar6;
      do {
        uVar2 = F_004d6e60(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x100))) GEN_EDX_ARG,iVar5);
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
    }
  }
  else if (uVar4 == 0x1000000) {
    iVar5 = 0;
    if (uVar6 < uVar2) {
      iVar3 = uVar2 - uVar6;
      do {
        uVar2 = F_004d9ed0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x100))) GEN_EDX_ARG,iVar5);
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 - 1;
      } while (iVar3 != 0);
      F_00b4cf40(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return uVar2;
    }
  }
  else if ((uVar4 == 0x2000000) && (iVar5 = 0, uVar6 < uVar2)) {
    (*(int *)(gen_frame + 0xc)) = uVar2 - uVar6;
    do {
      uVar2 = 0;
      do {
        uVar4 = F_004d5c30(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x100))) GEN_EDX_ARG,iVar5,uVar2);
        uVar2 = uVar2 + 1;
      } while (uVar2 < 6);
      iVar5 = iVar5 + 1;
      iVar3 = (*(int *)(gen_frame + 0xc)) - 1;
      (*(int *)(gen_frame + 0xc)) = iVar3;
    } while (iVar3 != 0);
    F_00b4cf40(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return uVar4;
  }
  F_00b4cf40(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandle::vf33 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005028a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5028a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined * pTVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (param_2 == 1) {
    pTVar1 = this + 0x88;
    iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pTVar1)), 0);
    if (iVar2 != 3) {
      if ((*param_1 == 0xb) && (1 < (uint)param_1[0x13])) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa4))))(this GEN_EDX_FWD);
        if (uVar3 == 2) {
          F_00502780(this GEN_EDX_ARG,param_1,*(undefined4 *)(this + 0x100));
        }
      }
      F_005025a0(this GEN_EDX_ARG);
      uVar3 = 1;
    }
  }
  return uVar3;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandle::vf35 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00502900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x502900u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined * pTVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 1) {
    return param_2;
  }
  pTVar1 = this + 0x88;
  iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pTVar1)), 0);
  if (iVar2 != 3) {
    if (((*param_1 == 0xb) && (1 < (uint)param_1[0x13])) &&
       (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xa4))))(this GEN_EDX_FWD), uVar3 == 2)) {
      if (*(int *)(this + 0x100) == 0) {
        return 1;
      }
      F_00502780(this GEN_EDX_ARG,param_1,*(int *)(this + 0x100));
    }
    F_005025a0(this GEN_EDX_ARG);
    return 1;
  }
  return 1;
}

/* ref: FUN_00502970 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00502970(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x502970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  if ((*((byte *)GEN_TOP((param_1 + 0xec))) & 1) != 0) {
    uVar1 = *((uint *)GEN_TOP((param_1 + 0xf0)));
    while (param_2 < uVar1) {
      LOCK();
      if (uVar1 == *((uint *)GEN_TOP((param_1 + 0xf0)))) {
        *((uint *)GEN_TOP((param_1 + 0xf0))) = (uint)param_2;
      }
      UNLOCK();
      uVar1 = *((uint *)GEN_TOP((param_1 + 0xf0)));
    }
  }
  return;
}

/* ref: FUN_005029b0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005029b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5029b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  
  if ((*((byte *)GEN_TOP((param_1 + 0xec))) & 1) != 0) {
    if (param_2 == 0xff) {
      *((undefined2 *)GEN_TOP((param_1 + 0xf8))) = 0x100;
      return;
    }
    uVar1 = *((uint *)GEN_TOP((param_1 + 0xf0)));
    while (param_2 < uVar1) {
      LOCK();
      if (uVar1 == *((uint *)GEN_TOP((param_1 + 0xf0)))) {
        *((uint *)GEN_TOP((param_1 + 0xf0))) = (uint)param_2;
      }
      UNLOCK();
      uVar1 = *((uint *)GEN_TOP((param_1 + 0xf0)));
    }
    *((undefined2 *)GEN_TOP((param_1 + 0xf8))) = 1;
  }
  return;
}

/* ref: FUN_00502a10 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00502a10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x502a10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  short sVar1;
  
  sVar1 = *((short *)GEN_TOP((in_ecx + 4)));
  if ((sVar1 == 1) || (sVar1 == 2)) {
    return 6;
  }
  if (sVar1 == 4) {
    return 7;
  }
  if (sVar1 == 0) {
    return 5;
  }
  return (sVar1 != 6) - 1 & 0xc;
}

/* ref: FUN_00502a50 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00502a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x502a50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  ushort * puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte * pbVar5;
  int iVar6;
  byte * pbVar7;
  uint uVar8;
  bool bVar9;
  
  bVar3 = 0;
  bVar4 = 0;
  if (*((char *)GEN_TOP(((int)this + 0xbb))) == '\0') {
    return 0;
  }
  do {
    puVar1 = ((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xac))) + (uint)bVar3 * 4)));
    pbVar5 = ((byte *)GEN_TOP(((uint)*puVar1 + *((int *)GEN_TOP(((int)this + 0xb0))))));
    pbVar7 = param_2;
    do {
      bVar2 = *pbVar5;
      bVar9 = bVar2 < *pbVar7;
      if (bVar2 != *pbVar7) {
LAB_00502aa8: ;
        iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_00502aad;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar5[1];
      bVar9 = bVar2 < pbVar7[1];
      if (bVar2 != pbVar7[1]) goto LAB_00502aa8;
      pbVar5 = pbVar5 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar2 != 0);
    iVar6 = 0;
LAB_00502aad: ;
    if (iVar6 == 0) {
      uVar8 = (uint)bVar4;
      bVar4 = bVar4 + 1;
      *((char *)GEN_TOP((uVar8 + param_1))) = (char)puVar1[1];
    }
    bVar3 = bVar3 + 1;
    if (*((byte *)GEN_TOP(((int)this + 0xbb))) <= bVar3) {
      return bVar4;
    }
  } while( true );
}

/* ref: FUN_00502af0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00502af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x502af0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  ushort * puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte * pbVar5;
  int iVar6;
  byte * pbVar7;
  uint uVar8;
  bool bVar9;
  
  bVar3 = 0;
  bVar4 = 0;
  if (*((char *)GEN_TOP(((int)this + 0xbc))) == '\0') {
    return 0;
  }
  do {
    puVar1 = ((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xac))) + (uint)(byte)(*((char *)GEN_TOP(((int)this + 0xbb))) + bVar3) * 4)));
    pbVar5 = ((byte *)GEN_TOP(((uint)*puVar1 + *((int *)GEN_TOP(((int)this + 0xb0))))));
    pbVar7 = param_2;
    do {
      bVar2 = *pbVar5;
      bVar9 = bVar2 < *pbVar7;
      if (bVar2 != *pbVar7) {
LAB_00502b50: ;
        iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_00502b55;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar5[1];
      bVar9 = bVar2 < pbVar7[1];
      if (bVar2 != pbVar7[1]) goto LAB_00502b50;
      pbVar5 = pbVar5 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar2 != 0);
    iVar6 = 0;
LAB_00502b55: ;
    if (iVar6 == 0) {
      uVar8 = (uint)bVar4;
      bVar4 = bVar4 + 1;
      *((char *)GEN_TOP((uVar8 + param_1))) = (char)puVar1[1];
    }
    bVar3 = bVar3 + 1;
    if (*((byte *)GEN_TOP(((int)this + 0xbc))) <= bVar3) {
      return bVar4;
    }
  } while( true );
}

/* ref: FUN_00502b90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00502b90(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x502b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint * puVar1;
  byte bVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  int iVar4;
  uint local_8;
  
  bVar2 = *((byte *)GEN_TOP((param_1 + 0xba)));
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),bVar2);
  if (bVar2 != 0) {
    local_8 = (uint)bVar2;
    iVar4 = 0;
    do {
      uVar3 = *((uint *)GEN_TOP((iVar4 + *((int *)GEN_TOP((param_1 + 0xa8))))));
      if ((*((byte *)GEN_TOP((uVar3 + 0xec))) & 1) != 0) {
        puVar1 = ((uint *)GEN_TOP((uVar3 + 0xf0)));
        uVar3 = *puVar1;
        while (param_2 < uVar3) {
          LOCK();
          if (uVar3 == *puVar1) {
            *puVar1 = (uint)param_2;
          }
          UNLOCK();
          uVar3 = *puVar1;
        }
      }
      iVar4 = iVar4 + 8;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  return uVar3;
}

/* ref: FUN_00502c10 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00502c10(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x502c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint local_8;
  
  if (*((byte *)GEN_TOP((param_1 + 0xba))) != 0) {
    local_8 = (uint)*((byte *)GEN_TOP((param_1 + 0xba)));
    iVar4 = 0;
    do {
      iVar2 = *((int *)GEN_TOP((iVar4 + *((int *)GEN_TOP((param_1 + 0xa8))))));
      if ((iVar2 != 0) && ((*((byte *)GEN_TOP((iVar2 + 0xec))) & 1) != 0)) {
        if (param_2 == 0xff) {
          *((undefined2 *)GEN_TOP((iVar2 + 0xf8))) = 0x100;
        }
        else {
          puVar1 = ((uint *)GEN_TOP((iVar2 + 0xf0)));
          uVar3 = *puVar1;
          while (param_2 < uVar3) {
            LOCK();
            if (uVar3 == *puVar1) {
              *puVar1 = (uint)param_2;
            }
            UNLOCK();
            uVar3 = *puVar1;
          }
          *((undefined2 *)GEN_TOP((iVar2 + 0xf8))) = 1;
        }
      }
      iVar4 = iVar4 + 8;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::ShaderCodeResourceHandle::vf27 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00502cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x502cb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pSVar2;
  
  pSVar2 = this + 0x8c;
  uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pSVar2)), 0);
  if (uVar1 == 7) {
    pSVar2 = this + 0x88;
    uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pSVar2)), 0);
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ShaderCodeResourceHandle::vf28 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00502cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x502cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pSVar2;
  
  pSVar2 = this + 0x8c;
  uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pSVar2)), 0);
  if (uVar1 == 7) {
    pSVar2 = this + 0x88;
    uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pSVar2)), 0);
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ShaderCodeResourceHandle::vf29 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00502cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x502cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pSVar2;
  
  pSVar2 = this + 0x8c;
  uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pSVar2)), 0);
  if (uVar1 == 7) {
    pSVar2 = this + 0x88;
    uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pSVar2)), 0);
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ShaderCodeResourceHandle::vf33 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00502d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x502d10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  if (param_2 == 1) {
    LOCK();
    *(undefined4 *)(this + 0x88) = *(undefined4 *)(this + 0x88);
    UNLOCK();
  }
  return param_2;
}

/* ref: Client::System::Resource::Handle::ShaderCodeResourceHandle::vf35 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00502d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x502d30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  if (param_2 == 1) {
    LOCK();
    *(undefined4 *)(this + 0x88) = *(undefined4 *)(this + 0x88);
    UNLOCK();
  }
  return param_2;
}

/* ref: Client::System::Resource::Handle::ShaderPackageResourceHandle::vf27 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00502d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x502d50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pSVar2;
  
  pSVar2 = this + 0x8c;
  uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pSVar2)), 0);
  if (uVar1 == 7) {
    pSVar2 = this + 0x88;
    uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pSVar2)), 0);
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ShaderPackageResourceHandle::vf28 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00502d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x502d70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pSVar2;
  
  pSVar2 = this + 0x8c;
  uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pSVar2)), 0);
  if (uVar1 == 7) {
    pSVar2 = this + 0x88;
    uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pSVar2)), 0);
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ShaderPackageResourceHandle::vf29 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00502d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x502d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pSVar2;
  
  pSVar2 = this + 0x8c;
  uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pSVar2)), 0);
  if (uVar1 == 7) {
    pSVar2 = this + 0x88;
    uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pSVar2)), 0);
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ShaderPackageResourceHandle::vf33 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00502db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x502db0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  if (param_2 == 1) {
    LOCK();
    *(undefined4 *)(this + 0x88) = *(undefined4 *)(this + 0x88);
    UNLOCK();
  }
  return param_2;
}

/* ref: Client::System::Resource::Handle::ShaderPackageResourceHandle::vf35 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00502dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x502dd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  if (param_2 == 1) {
    LOCK();
    *(undefined4 *)(this + 0x88) = *(undefined4 *)(this + 0x88);
    UNLOCK();
  }
  return param_2;
}

/* ref: Client::System::Resource::Handle::GrassZoneDataResourceHandle::vf33 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00502df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x502df0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined * pGVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = param_2;
  if (param_2 == 1) {
    pGVar1 = this + 0x88;
    iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pGVar1)), 0);
    if (iVar2 != 3) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD)));
      if ((*piVar3 == 0x677a64) && (piVar3[1] == 0x2000400)) {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
        F_00b4e590(this + 0xa0 GEN_EDX_ARG,uVar4,this + 0x100);
        F_00b4d8d0(this + 0xa0 GEN_EDX_ARG);
        piVar3 = *(int * PTR32 *)(this + 0x98);
        if (piVar3 != ((int *)GEN_TOP(0x0))) {
          piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG)));
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
          *(undefined4 *)(this + 0x98) = 0;
        }
        return 1;
      }
      piVar3 = *(int * PTR32 *)(this + 0x98);
      if (piVar3 != ((int *)GEN_TOP(0x0))) {
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
        *(undefined4 *)(this + 0x98) = 0;
      }
      uVar4 = 2;
    }
  }
  return uVar4;
}

/* ref: FUN_00502ed0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00502ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x502ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
  *(undefined4 *)this = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  return;
}

/* ref: FUN_00502ef0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00502ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x502ef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined4 *)this = 0;
  uVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar3 = F_00406b30(*((int *)GEN_TOP(((int)this + 4))));
    uVar2 = (uint)uVar3;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  return uVar2;
}

/* ref: Client::System::Resource::Handle::EnvSetResourceHandle::vf28 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00502f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x502f30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pEVar2;
  
  pEVar2 = this + 0x8c;
  uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pEVar2)), 0);
  if (uVar1 == 7) {
    pEVar2 = this + 0x88;
    uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pEVar2)), 0);
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::EnvSetResourceHandle::vf33 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00502f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x502f50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined * pEVar1;
  int iVar2;
  int * piVar3;
  undefined * this_00;
  uint uVar4;
  
  if (param_2 != 1) {
    return param_2;
  }
  pEVar1 = this + 0x88;
  iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pEVar1)), 0);
  if (iVar2 == 3) {
    return 1;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD)));
  if ((*piVar3 == 0x42564e45) && (piVar3[3] == 0x53564e45)) {
    if (piVar3[5] != 6) {
      return 0xfffffff6;
    }
    this_00 = ((undefined *)GEN_TOP(F_004bd0d0(piVar3 + 5)));
    *(undefined * PTR32 *)(this + 0xa0) = this_00;
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      uVar4 = F_004a47f0(this_00 GEN_EDX_ARG);
      piVar3 = *(int * PTR32 *)(this + 0x98);
      *(uint *)(this + 0x9c) = uVar4;
      if (piVar3 != ((int *)GEN_TOP(0x0))) {
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
        *(undefined4 *)(this + 0x98) = 0;
      }
      return 1;
    }
  }
  piVar3 = *(int * PTR32 *)(this + 0x98);
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
    *(undefined4 *)(this + 0x98) = 0;
  }
  return 0xfffffff6;
}

/* ref: Client::System::Resource::Handle::SoundSetResourceHandle::vf28 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00503030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x503030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pSVar2;
  
  pSVar2 = this + 0x8c;
  uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pSVar2)), 0);
  if (uVar1 == 7) {
    pSVar2 = this + 0x88;
    uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pSVar2)), 0);
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::SoundSetResourceHandle::vf33 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00503050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x503050u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined * pSVar1;
  int iVar2;
  int * piVar3;
  undefined * this_00;
  uint uVar4;
  
  if (param_2 != 1) {
    return param_2;
  }
  pSVar1 = this + 0x88;
  iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pSVar1)), 0);
  if (iVar2 == 3) {
    return 1;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD)));
  if ((*piVar3 == 0x42535345) && (piVar3[3] == 0x53564e45)) {
    if (piVar3[5] != 4) {
      return 0xfffffff6;
    }
    this_00 = ((undefined *)GEN_TOP(F_004bd010(piVar3 + 5)));
    *(undefined * PTR32 *)(this + 0xa0) = this_00;
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      uVar4 = F_004a4360(this_00 GEN_EDX_ARG);
      piVar3 = *(int * PTR32 *)(this + 0x98);
      *(uint *)(this + 0x9c) = uVar4;
      if (piVar3 != ((int *)GEN_TOP(0x0))) {
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
        *(undefined4 *)(this + 0x98) = 0;
      }
      return 1;
    }
  }
  piVar3 = *(int * PTR32 *)(this + 0x98);
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
    *(undefined4 *)(this + 0x98) = 0;
  }
  return 0xfffffff6;
}

/* ref: Client::System::Resource::Handle::AmbientSetResourceHandle::vf28 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00503130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x503130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pAVar2;
  
  pAVar2 = this + 0x8c;
  uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pAVar2)), 0);
  if (uVar1 == 7) {
    pAVar2 = this + 0x88;
    uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pAVar2)), 0);
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::AmbientSetResourceHandle::vf33 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00503150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x503150u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined * pAVar1;
  int iVar2;
  int * piVar3;
  undefined * this_00;
  uint uVar4;
  
  if (param_2 != 1) {
    return param_2;
  }
  pAVar1 = this + 0x88;
  iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pAVar1)), 0);
  if (iVar2 == 3) {
    return 1;
  }
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD)));
  if (*(int *)REFG(undefined * PTR32, 0x1301318) == *piVar3) {
    if ((short)piVar3[1] != 1) {
      return 0xfffffff6;
    }
    if (*((char *)GEN_TOP(((int)piVar3 + 6))) != '\0') {
      return 0xfffffff6;
    }
    this_00 = ((undefined *)GEN_TOP(F_004b0b00(piVar3)));
    *(undefined * PTR32 *)(this + 0xa0) = this_00;
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      uVar4 = F_004a4960(this_00 GEN_EDX_ARG);
      piVar3 = *(int * PTR32 *)(this + 0x98);
      *(uint *)(this + 0x9c) = uVar4;
      if (piVar3 != ((int *)GEN_TOP(0x0))) {
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
        *(undefined4 *)(this + 0x98) = 0;
      }
      return 1;
    }
  }
  piVar3 = *(int * PTR32 *)(this + 0x98);
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG)));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
    *(undefined4 *)(this + 0x98) = 0;
  }
  return 0xfffffff6;
}

/* ref: Client::System::Resource::Handle::ObjectBehaviorSetResourceHandle::vf28 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00503230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x503230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pOVar2;
  
  pOVar2 = this + 0x8c;
  uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pOVar2)), 0);
  if (uVar1 == 7) {
    pOVar2 = this + 0x88;
    uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pOVar2)), 0);
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ObjectBehaviorSetResourceHandle::vf33 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00503250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x503250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined * pOVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = param_2;
  if (param_2 == 1) {
    pOVar1 = this + 0x88;
    iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pOVar1)), 0);
    if (iVar2 != 3) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD)));
      if (((*piVar3 == 0x4253424f) && (piVar3[3] == 0x53564e45)) && (piVar3[5] == 4)) {
        uVar4 = F_004bc240(piVar3 + 5);
        piVar3 = *(int * PTR32 *)(this + 0x98);
        *(uint *)(this + 0xa0) = uVar4;
        if (uVar4 != 0) {
          if (piVar3 != ((int *)GEN_TOP(0x0))) {
            piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG)));
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
            *(undefined4 *)(this + 0x98) = 0;
          }
          return 1;
        }
      }
      else {
        piVar3 = *(int * PTR32 *)(this + 0x98);
      }
      if (piVar3 != ((int *)GEN_TOP(0x0))) {
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
        *(undefined4 *)(this + 0x98) = 0;
      }
      uVar4 = 0xfffffff6;
    }
  }
  return uVar4;
}

/* ref: Client::System::Resource::Handle::SkyVisibilityResourceHandle::vf28 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00503320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x503320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pSVar2;
  
  pSVar2 = this + 0x8c;
  uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pSVar2)), 0);
  if (uVar1 == 7) {
    pSVar2 = this + 0x88;
    uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pSVar2)), 0);
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::SkyVisibilityResourceHandle::vf33 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00503340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x503340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined * pSVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = param_2;
  if (param_2 == 1) {
    pSVar1 = this + 0x88;
    iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pSVar1)), 0);
    if (iVar2 != 3) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD)));
      if ((*piVar3 == 0x31425653) && (piVar3[3] == 0x31435653)) {
        *(int * PTR32 *)(this + 0xa0) = piVar3 + 5;
        return (-(uint)(piVar3[5] != 0) & 0xfffffff5) + 1;
      }
      piVar3 = *(int * PTR32 *)(this + 0x98);
      if (piVar3 != ((int *)GEN_TOP(0x0))) {
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
        *(undefined4 *)(this + 0x98) = 0;
      }
      uVar4 = 0xfffffff6;
    }
  }
  return uVar4;
}

/* ref: Client::System::Resource::Handle::ClipAABBResourceHandle::vf28 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005033d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5033d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pCVar2;
  
  pCVar2 = this + 0x8c;
  uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pCVar2)), 0);
  if (uVar1 == 7) {
    pCVar2 = this + 0x88;
    uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pCVar2)), 0);
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ClipAABBResourceHandle::vf33 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005033f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5033f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined * pCVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = param_2;
  if (param_2 == 1) {
    pCVar1 = this + 0x88;
    iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pCVar1)), 0);
    if (iVar2 != 3) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD)));
      if ((*piVar3 == 0x3142434c) && (piVar3[3] == 0x3143434c)) {
        *(int * PTR32 *)(this + 0xa0) = piVar3 + 5;
        return (-(uint)(piVar3[5] != 0) & 0xfffffff5) + 1;
      }
      piVar3 = *(int * PTR32 *)(this + 0x98);
      if (piVar3 != ((int *)GEN_TOP(0x0))) {
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
        *(undefined4 *)(this + 0x98) = 0;
      }
      uVar4 = 0xfffffff6;
    }
  }
  return uVar4;
}

/* ref: FUN_00503480 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00503480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x503480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  undefined4 uVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD)));
  uVar1 = *puVar2;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  uVar3 = F_00519dd0(uVar3 + 4,uVar1,&(*(undefined4 *)&gen_args[0]));
  return uVar3;
}

/* ref: Client::System::Resource::Handle::AttachOffsetResourceHandle::vf28 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005034b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5034b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pAVar2;
  
  pAVar2 = this + 0x8c;
  uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pAVar2)), 0);
  if (uVar1 == 7) {
    pAVar2 = this + 0x88;
    uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pAVar2)), 0);
  }
  return uVar1;
}

/* ref: FUN_005034d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005034d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5034d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar2 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD)));
  uVar1 = *puVar2;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      if (*((short *)GEN_TOP((uVar3 + 4 + uVar4 * 8))) == (short)param_1) {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return 0xffff;
}

/* ref: Client::System::Resource::Handle::EquipmentParameterResourceHandle::vf28 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00503510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x503510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pEVar2;
  
  pEVar2 = this + 0x8c;
  uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pEVar2)), 0);
  if (uVar1 == 7) {
    pEVar2 = this + 0x88;
    uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pEVar2)), 0);
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::CharaMakeParameterResourceHandle::vf28 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00503530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x503530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pCVar2;
  
  pCVar2 = this + 0x8c;
  uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pCVar2)), 0);
  if (uVar1 == 7) {
    pCVar2 = this + 0x88;
    uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pCVar2)), 0);
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ImageChangeDataResourceHandle::vf28 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00503550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x503550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pIVar2;
  
  pIVar2 = this + 0x8c;
  uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pIVar2)), 0);
  if (uVar1 == 7) {
    pIVar2 = this + 0x88;
    uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pIVar2)), 0);
  }
  return uVar1;
}

/* ref: FUN_00503570 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00503570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x503570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  code * pcVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  
  (*(undefined4 *)&gen_args[0]) = CONCAT22((undefined2)(*(undefined4 *)&gen_args[0]),(undefined2)(*(undefined4 *)&gen_args[1]));
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x5c)));
  puVar3 = ((undefined4 *)GEN_TOP((*pcVar1)(this)));
  uVar2 = *puVar3;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD);
  uVar4 = F_00519dd0(uVar4 + 4,uVar2,&(*(undefined4 *)&gen_args[0]));
  if (uVar4 == 0xffffffff) {
    return 0xffff;
  }
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG)));
  return CONCAT22((short)((uint)*piVar6 >> 0x10),
                  *((undefined2 *)GEN_TOP((uVar5 + 4 + (uVar4 + *piVar6 * 2) * 2))));
}

/* ref: Client::System::Resource::Handle::SkeletonResourceHandle::vf28 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005035f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5035f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pSVar2;
  
  pSVar2 = this + 0x8c;
  uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pSVar2)), 0);
  if (uVar1 == 7) {
    pSVar2 = this + 0x88;
    uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pSVar2)), 0);
  }
  return uVar1;
}

/* ref: FUN_00503610 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00503610(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x503610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xd4))) + 0x24 + (uint)(ushort)param_2 * 0x28))) & 1;
}

/* ref: FUN_00503630 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_00503630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x503630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  byte * pbVar6;
  bool bVar7;
  
  uVar2 = 0;
  if (*((ushort *)GEN_TOP(((int)this + 0xc0))) != 0) {
    pbVar3 = *((byte * PTR32 *)GEN_TOP(((int)this + 0xd4)));
    pbVar5 = param_1;
    pbVar6 = pbVar3;
LAB_00503655: ;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 == *pbVar5) {
        if (bVar1 != 0) {
          bVar1 = pbVar3[1];
          bVar7 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_00503675;
          pbVar3 = pbVar3 + 2;
          pbVar5 = pbVar5 + 2;
          if (bVar1 != 0) goto LAB_00503655;
        }
        iVar4 = 0;
      }
      else {
LAB_00503675: ;
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      }
      if (iVar4 == 0) goto LAB_00503689;
      uVar2 = uVar2 + 1;
      pbVar3 = pbVar6 + 0x28;
      pbVar5 = param_1;
      pbVar6 = pbVar3;
    } while (uVar2 < *((ushort *)GEN_TOP(((int)this + 0xc0))));
  }
  uVar2 = 0xffffffff;
LAB_00503689: ;
  return (ushort)uVar2;
}

/* ref: FUN_00503690 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00503690(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x503690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return *((int *)GEN_TOP((in_ecx + 0xd4))) + (short)param_2 * 0x28;
}

/* ref: FUN_005036b0 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_005036b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5036b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  ushort uVar1;
  
  uVar1 = F_00503630(this GEN_EDX_FWD,param_1);
  if (-1 < (short)uVar1) {
    return *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xd4))) + 0x22 + (short)uVar1 * 0x28)));
  }
  return 0xffff;
}

/* ref: FUN_005036f0 */
GEN_OWN GEN_FRAME ushort GEN_THISCALL F_005036f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5036f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a1;)
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  byte * pbVar4;
  uint uVar5;
  byte * pbVar6;
  byte * pbVar7;
  bool bVar8;
  
  uVar5 = 0;
  if (*((ushort *)GEN_TOP(((int)this + 0xc0))) != 0) {
    pbVar2 = *((byte * PTR32 *)GEN_TOP(((int)this + 0xd4)));
    pbVar7 = pbVar2;
    pbVar4 = param_1;
    pbVar6 = pbVar2;
LAB_00503715: ;
    do {
      bVar1 = *pbVar7;
      bVar8 = bVar1 < *pbVar4;
      if (bVar1 == *pbVar4) {
        if (bVar1 != 0) {
          bVar1 = pbVar7[1];
          bVar8 = bVar1 < pbVar4[1];
          if (bVar1 != pbVar4[1]) goto LAB_00503735;
          pbVar4 = pbVar4 + 2;
          pbVar7 = pbVar7 + 2;
          if (bVar1 != 0) goto LAB_00503715;
        }
        iVar3 = 0;
      }
      else {
LAB_00503735: ;
        iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      }
      if (iVar3 == 0) {
        if ((pbVar2[(uVar5 & 0xffff) * 0x28 + 0x24] & 1) == 0) {
          return 0xffff;
        }
        return *(ushort *)(pbVar2 + uVar5 * 0x28 + 0x22);
      }
      uVar5 = uVar5 + 1;
      pbVar7 = pbVar6 + 0x28;
      pbVar4 = param_1;
      pbVar6 = pbVar7;
    } while (uVar5 < *((ushort *)GEN_TOP(((int)this + 0xc0))));
  }
  return 0xffff;
}

/* ref: FUN_00503790 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00503790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x503790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  ushort uVar1;
  
  uVar1 = F_00503630(this GEN_EDX_FWD,param_1);
  if (-1 < (short)uVar1) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xe8))) + (uint)uVar1 * 4)));
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::ResidentPapTableResourceHandle::vf33 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005037c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5037c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined * pRVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  uVar3 = param_2;
  if (param_2 == 1) {
    pRVar1 = this + 0x88;
    iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pRVar1)), 0);
    if (iVar2 != 3) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD);
      uVar3 = F_00b50d30(this + 0xa0 GEN_EDX_ARG,uVar3);
      if ((uVar3 != 0) && (piVar4 = *(int * PTR32 *)(this + 0x98), piVar4 != ((int *)GEN_TOP(0x0)))) {
        piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
        *(undefined4 *)(this + 0x98) = 0;
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}

/* ref: Client::System::Resource::Handle::ResidentPapTableResourceHandle::vf28 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00503830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x503830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pRVar2;
  
  pRVar2 = this + 0x8c;
  uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pRVar2)), 0);
  if (uVar1 == 7) {
    pRVar2 = this + 0x88;
    uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pRVar2)), 0);
  }
  return uVar1;
}

/* ref: FUN_00503850 */
GEN_OWN GEN_FRAME unsigned int F_00503850(GEN_P(undefined4 * in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x503850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_eax = (*(undefined * PTR32 (*)[3])REFP(0x109980c));
  in_eax[1] = param_2;
  return 0;
}

/* ref: FUN_00503870 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00503870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x503870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 >> 1 & 1) != 0) {
    switch((unsigned int)(uintptr_t)(*((undefined2 *)GEN_TOP(((int)this + 6))))) {
    case 0: ;
      uVar1 = uVar1 >> 2;
      break;
    case 1: ;
      uVar1 = uVar1 >> 4;
      break;
    case 2: ;
      uVar1 = uVar1 >> 3;
      break;
    case 3: ;
      goto switchD_0050388a_caseD_3;
    default: ;
      goto switchD_0050388a_default;
    }
    if ((uVar1 & 1) != 0) {
switchD_0050388a_caseD_3: ;
      return 1;
    }
  }
switchD_0050388a_default: ;
  return 0;
}

/* ref: FUN_005038d0 */
GEN_OWN GEN_FRAME unsigned int F_005038d0(GEN_P(undefined4 * in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5038d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_eax = (*(undefined * PTR32 (*)[3])REFP(0x109981c));
  in_eax[1] = param_2;
  return 0;
}

/* ref: FUN_005038f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005038f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5038f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 >> 7 & 1) != 0) {
    switch((unsigned int)(uintptr_t)(*((undefined2 *)GEN_TOP(((int)this + 6))))) {
    case 0: ;
      uVar1 = uVar1 >> 2;
      break;
    case 1: ;
      uVar1 = uVar1 >> 4;
      break;
    case 2: ;
      uVar1 = uVar1 >> 3;
      break;
    case 3: ;
      goto switchD_0050390b_caseD_3;
    default: ;
      goto switchD_0050390b_default;
    }
    if ((uVar1 & 1) != 0) {
switchD_0050390b_caseD_3: ;
      return 1;
    }
  }
switchD_0050390b_default: ;
  return 0;
}

/* ref: FUN_00503950 */
GEN_OWN GEN_FRAME unsigned int F_00503950(GEN_P(undefined4 * in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x503950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_eax = (*(undefined * PTR32 (*)[3])REFP(0x109982c));
  in_eax[1] = param_2;
  return 0;
}

/* ref: FUN_00503970 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00503970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x503970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 >> 6 & 1) != 0) {
    switch((unsigned int)(uintptr_t)(*((undefined2 *)GEN_TOP(((int)this + 6))))) {
    case 0: ;
      uVar1 = uVar1 >> 2;
      break;
    case 1: ;
      uVar1 = uVar1 >> 4;
      break;
    case 2: ;
      uVar1 = uVar1 >> 3;
      break;
    case 3: ;
      goto switchD_0050398b_caseD_3;
    default: ;
      goto switchD_0050398b_default;
    }
    if ((uVar1 & 1) != 0) {
switchD_0050398b_caseD_3: ;
      return 1;
    }
  }
switchD_0050398b_default: ;
  return 0;
}

/* ref: Client::System::Resource::Handle::SkeletonParamResourceHandle::vf33 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005039d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5039d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined * pSVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  uVar3 = param_2;
  if (param_2 == 1) {
    pSVar1 = this + 0x88;
    iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pSVar1)), 0);
    if (iVar2 != 3) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD);
      F_00b4d4c0(this + 0xa0 GEN_EDX_ARG,uVar3);
      if ((*(uint *)(this + 0xa8) >> 1 & 1) != 0) {
        F_00b4fa10(this + 0xc0 GEN_EDX_ARG,*(int *)(this + 0xb0) + uVar3,*(undefined4 *)(this + 0xa4));
      }
      if ((*(uint *)(this + 0xa8) >> 4 & 1) != 0) {
        F_00b4e490(this + 0xd0 GEN_EDX_ARG,*(int *)(this + 0xbc) + uVar3);
      }
      if ((*(uint *)(this + 0xa8) >> 3 & 1) != 0) {
        F_00b4fb00(this + 0xf4 GEN_EDX_ARG,*(int *)(this + 0xb8) + uVar3);
      }
      piVar4 = *(int * PTR32 *)(this + 0x98);
      if (piVar4 != ((int *)GEN_TOP(0x0))) {
        piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
        *(undefined4 *)(this + 0x98) = 0;
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}

/* ref: FUN_00503ab0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00503ab0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x503ab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (byte)(*((uint *)GEN_TOP((in_ecx + 0xa8))) >> 1) & 1;
}

/* ref: FUN_00503ac0 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00503ac0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x503ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (byte)(*((uint *)GEN_TOP((in_ecx + 0xa8))) >> 4) & 1;
}

/* ref: Client::System::Resource::Handle::MotionLineTableResourceHandle::vf33 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00503ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x503ad0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined * pMVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  uVar3 = param_2;
  if (param_2 == 1) {
    pMVar1 = this + 0x88;
    iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pMVar1)), 0);
    if (iVar2 != 3) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD);
      F_00b4fbc0(this + 0xa0 GEN_EDX_ARG,uVar3);
      F_00b4e8b0(this + 0xa0 GEN_EDX_ARG);
      piVar4 = *(int * PTR32 *)(this + 0x98);
      if (piVar4 != ((int *)GEN_TOP(0x0))) {
        piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
        *(undefined4 *)(this + 0x98) = 0;
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}

/* ref: Client::System::Resource::Handle::ApricotResourceHandle::vf27 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00503b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x503b50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pAVar2;
  
  pAVar2 = this + 0x8c;
  uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pAVar2)), 0);
  if (uVar1 == 7) {
    pAVar2 = this + 0x88;
    uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pAVar2)), 0);
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ApricotResourceHandle::vf28 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00503b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x503b70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pAVar1;
  int iVar2;
  uint uVar3;
  undefined * pAVar4;
  
  pAVar1 = this + 0x8c;
  LOCK();
  pAVar4 = *(undefined * PTR32 *)pAVar1;
  *(int *)pAVar1 = *(int *)pAVar1;
  UNLOCK();
  if (pAVar4 == ((undefined *)GEN_TOP(0x7))) {
    pAVar4 = this + 0x88;
    iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pAVar4)), 0);
    if ((iVar2 != 3) && (*(undefined * PTR32 *)(this + 0xa0) != ((undefined *)GEN_TOP(0x0)))) {
      F_009bbeb0(*(undefined * PTR32 *)(this + 0xa0) GEN_EDX_FWD);
      F_009bbef0(*(undefined * PTR32 *)(this + 0xa0) GEN_EDX_ARG);
      uVar3 = F_00990bc0(*(undefined * PTR32 *)(this + 0xa0) GEN_EDX_ARG);
      return uVar3;
    }
  }
  return (uint)pAVar4;
}

/* ref: Client::System::Resource::Handle::ApricotResourceHandle::vf29 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00503bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x503bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pAVar2;
  
  pAVar2 = this + 0x8c;
  uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pAVar2)), 0);
  if (uVar1 == 7) {
    pAVar2 = this + 0x88;
    uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pAVar2)), 0);
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ApricotResourceHandle::vf33 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00503be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x503be0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  undefined4 uVar4;
  undefined * pAVar5;
  
  uVar2 = param_2;
  if (param_2 == 1) {
    pAVar5 = this + 0x88;
    iVar1 = _InterlockedExchangeAdd((volatile long *)(((int *)pAVar5)), 0);
    if (iVar1 != 3) {
      if (*(int *)(this + 0xa0) != 0) {
        uVar4 = *(undefined4 *)(this + 0x1c);
        pAVar5 = this;
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x98) + 4))))(*(int * PTR32 *)(this + 0x98) GEN_EDX_FWD);
        F_009cb7f0(*(undefined * PTR32 *)(this + 0xa0) GEN_EDX_ARG,uVar2,uVar4,pAVar5);
      }
      piVar3 = *(int * PTR32 *)(this + 0x98);
      if (piVar3 != ((int *)GEN_TOP(0x0))) {
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
        *(undefined4 *)(this + 0x98) = 0;
      }
      *(undefined4 *)(this + 0x9c) = 0;
      uVar2 = 1;
    }
  }
  return uVar2;
}

/* ref: Client::System::Resource::Handle::ApricotResourceHandle::vf35 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00503c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x503c70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  if (param_2 == 1) {
    LOCK();
    *(undefined4 *)(this + 0x88) = *(undefined4 *)(this + 0x88);
    UNLOCK();
  }
  return param_2;
}

/* ref: Client::System::Resource::Handle::ApricotTextureResourceHandle::vf27 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00503c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x503c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pAVar2;
  
  pAVar2 = this + 0x8c;
  uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pAVar2)), 0);
  if (uVar1 == 7) {
    pAVar2 = this + 0x88;
    uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pAVar2)), 0);
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ApricotTextureResourceHandle::vf28 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00503cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x503cb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pAVar2;
  
  pAVar2 = this + 0x8c;
  uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pAVar2)), 0);
  if (uVar1 == 7) {
    pAVar2 = this + 0x88;
    uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pAVar2)), 0);
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ApricotTextureResourceHandle::vf29 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00503cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x503cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pAVar2;
  
  pAVar2 = this + 0x8c;
  uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pAVar2)), 0);
  if (uVar1 == 7) {
    pAVar2 = this + 0x88;
    uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pAVar2)), 0);
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::ApricotTextureResourceHandle::vf33 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00503cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x503cf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  undefined * pAVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  
  uVar3 = param_2;
  if (param_2 == 1) {
    pAVar1 = this + 0x88;
    iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pAVar1)), 0);
    if (iVar2 != 3) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x98) + 4))))(*(int * PTR32 *)(this + 0x98) GEN_EDX_FWD);
      uVar3 = F_00b4ec10(uVar3);
      *(uint *)(this + 0xa0) = uVar3;
      if (uVar3 == 0) {
        *(undefined4 *)(this + 0xa4) = 0;
      }
      else {
        *(uint *)(this + 0xa4) = *((uint *)GEN_TOP((uVar3 + 8))) & 0xfffffff0;
      }
      piVar4 = *(int * PTR32 *)(this + 0x98);
      if (piVar4 != ((int *)GEN_TOP(0x0))) {
        piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG,*(undefined4 *)(this + 0x98));
        *(undefined4 *)(this + 0x98) = 0;
      }
      *(undefined4 *)(this + 0x9c) = 0;
      uVar3 = 1;
    }
  }
  return uVar3;
}

/* ref: Client::System::Resource::Handle::ApricotTextureResourceHandle::vf35 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00503d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x503d90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  if (param_2 == 1) {
    LOCK();
    *(undefined4 *)(this + 0x88) = *(undefined4 *)(this + 0x88);
    UNLOCK();
  }
  return param_2;
}

/* ref: Client::System::Resource::Handle::SoundResourceHandle::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00503db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x503db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (*(int *)(this + 0x98) != 0) {
    uVar3 = F_00406b30(*(int *)(this + 0x98));
    uVar2 = (uint)uVar3;
    *(undefined4 *)(this + 0x98) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x9c);
  *(undefined4 *)(this + 0xa0) = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*(undefined4 *)(this + 0x9c));
    *(undefined4 *)(this + 0x9c) = 0;
  }
  return uVar2;
}

/* ref: Client::System::Resource::Handle::SoundResourceHandle::vf27 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00503e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x503e10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pSVar2;
  
  pSVar2 = this + 0x8c;
  uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pSVar2)), 0);
  if (uVar1 == 7) {
    pSVar2 = this + 0x88;
    uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pSVar2)), 0);
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::SoundResourceHandle::vf28 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00503e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x503e30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pSVar2;
  
  pSVar2 = this + 0x8c;
  uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pSVar2)), 0);
  if (uVar1 == 7) {
    pSVar2 = this + 0x88;
    uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pSVar2)), 0);
  }
  return uVar1;
}

/* ref: Client::System::Resource::Handle::SoundResourceHandle::vf29 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00503e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x503e50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pSVar2;
  
  pSVar2 = this + 0x8c;
  uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pSVar2)), 0);
  if (uVar1 == 7) {
    pSVar2 = this + 0x88;
    uVar1 = _InterlockedExchangeAdd((volatile long *)(((uint *)pSVar2)), 0);
  }
  return uVar1;
}

/* ref: FUN_00503e70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00503e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x503e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (*((short *)GEN_TOP(((int)this + 4))) == 3) {
    uVar3 = 0;
    uVar1 = F_004042d0(0);
    uVar1 = F_00406c00(param_1,0,uVar1,uVar3);
    if (uVar1 == 0) {
      uVar2 = F_004042b0();
      uVar1 = F_00406c00(param_1,0,uVar2,uVar1);
    }
    return uVar1;
  }
  uVar3 = 0;
  uVar1 = F_004042b0();
  uVar1 = F_00406c00(param_1,0,uVar1,uVar3);
  return uVar1;
}

/* ref: Client::System::Resource::Handle::SoundResourceHandle::vf35 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00503ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x503ed0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  if (param_2 == 1) {
    LOCK();
    *(undefined4 *)(this + 0x88) = *(undefined4 *)(this + 0x88);
    UNLOCK();
  }
  return param_2;
}

/* ref: FUN_00503ef0 */
GEN_OWN GEN_FRAME uint F_00503ef0(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x503ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((int)*param_2 << 8 | (int)param_2[1]) << 8 | (int)param_2[2];
  if (uVar1 < 0x67616e) {
    if (uVar1 == 0x67616d) {
      *param_1 = 0xb;
      return (uint)param_1;
    }
    if (uVar1 < 0x636862) {
      if (uVar1 == 0x636861) {
        *param_1 = 4;
        return (uint)param_1;
      }
      if (uVar1 == 0x5f7371) {
        *param_1 = 0x12;
        return (uint)param_1;
      }
      if (uVar1 == 0x62672f) {
        uVar1 = F_00500e90(param_2);
        if (uVar1 != 0xffffffff) {
          *param_1 = uVar1 << 0x10 | 2;
          return (uint)param_1;
        }
      }
      else if (uVar1 == 0x626763) {
        *param_1 = 1;
        return (uint)param_1;
      }
    }
    else {
      if (uVar1 == 0x636f6d) {
        *param_1 = 0;
        return (uint)param_1;
      }
      if (uVar1 == 0x637574) {
        uVar1 = F_00500ed0(param_2);
        if (uVar1 != 0xffffffff) {
          *param_1 = uVar1 << 0x10 | 3;
          return (uint)param_1;
        }
      }
      else if (uVar1 == 0x657864) {
        *param_1 = 10;
        return (uint)param_1;
      }
    }
  }
  else if (uVar1 < 0x756930) {
    if (uVar1 == 0x75692f) {
      *param_1 = 6;
      return (uint)param_1;
    }
    if (uVar1 == 0x6d7573) {
      *param_1 = 0xc;
      return (uint)param_1;
    }
    if (uVar1 == 0x736861) {
      *param_1 = 5;
      return (uint)param_1;
    }
    if (uVar1 == 0x736f75) {
      *param_1 = 7;
      return (uint)param_1;
    }
  }
  else {
    if (uVar1 == 0x75695f) {
      *param_1 = 9;
      return (uint)param_1;
    }
    if (uVar1 == 0x766678) {
      *param_1 = 8;
      return (uint)param_1;
    }
  }
  *param_1 = 0xffffffff;
  return (uint)param_1;
}

/* ref: FUN_00504070 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00504070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x504070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  int * piVar2;
  
  if (*((int *)GEN_TOP((param_1 + 0x2c))) < 5) {
    return 0;
  }
  uVar1 = 0;
  piVar2 = ((int *)GEN_TOP(((int)this + 0xc84)));
  do {
    if (*piVar2 != 0) {
      return 1;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 6;
  } while (uVar1 < 7);
  return 0x1f < (uint)(*((int *)GEN_TOP(((int)this + 0xdbc))) + *((int *)GEN_TOP(((int)this + 0xda4))) +
                       *((int *)GEN_TOP(((int)this + 0xd8c))) + *((int *)GEN_TOP(((int)this + 0xd74))) +
                       *((int *)GEN_TOP(((int)this + 0xd5c))) + *((int *)GEN_TOP(((int)this + 0xd44))) +
                      *((int *)GEN_TOP(((int)this + 0xd2c))));
}

/* ref: Client::System::Resource::ResourceEventListener::vf3 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005040e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5040e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint * puVar2;
  
  puVar2 = ((uint *)GEN_TOP((param_1 + 0x8c)));
  uVar1 = _InterlockedExchangeAdd((volatile long *)(puVar2), 0);
  return uVar1;
}

/* ref: Client::System::Resource::ResourceEventListener::vf4 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00504100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x504100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint * puVar2;
  
  puVar2 = ((uint *)GEN_TOP((param_1 + 0x8c)));
  uVar1 = _InterlockedExchangeAdd((volatile long *)(puVar2), 0);
  return uVar1;
}

/* ref: FUN_00504120 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00504120(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x504120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  iVar1 = param_1[3];
  uVar2 = param_1[2];
  lVar4 = *(longlong *)(param_1 + 2);
  lVar3 = *(longlong *)(param_1 + 4);
  if (*param_1 == 0xb) {
    uVar6 = (ulonglong)(uint)param_1[0x32];
  }
  else {
    uVar6 = F_004f7900(((undefined *)GEN_TOP(param_1[9])) GEN_EDX_ARG);
  }
  lVar3 = uVar6 - lVar3;
  if (((int)((ulonglong)lVar3 >> 0x20) == 0 || lVar3 < 0) && (lVar3 < 0)) {
    return 0;
  }
  uVar5 = (uint)lVar3;
  if ((lVar4 <= lVar3) && (uVar2 != 0 || iVar1 != 0)) {
    uVar5 = uVar2;
  }
  return uVar5;
}

/* ref: FUN_00504190 */
GEN_OWN GEN_FRAME uint F_00504190(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6))
{
  GEN_ENTER(0x504190u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint * puVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (*param_1 != 0xb) {
    (*(int *)(gen_frame + 0x4)) = param_4;
    (*(uint *)(gen_frame + 0x0)) = param_3;
    uVar5 = F_004f7940(param_1[9] GEN_EDX_ARG,param_2,&(*(uint *)(gen_frame + 0x0)),param_5,param_6,(char)param_7);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(param_1[0xd])) + 0xac))))(((int *)GEN_TOP(param_1[0xd])) GEN_EDX_ARG);
    return uVar5;
  }
  piVar2 = ((int *)GEN_TOP(param_1[0xd]));
  if ((1 < (uint)param_1[0x13]) && (uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xa4))))(piVar2 GEN_EDX_ARG), uVar5 == 1)) {
    if ((param_5 != 0 || param_6 != 0) || ((char)param_7 != '\0')) {
      param_1[0x38] = param_5;
      param_1[0x39] = param_6;
    }
    iVar3 = param_1[0x38];
    uVar5 = param_3;
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar2[0xe])) + 4))))(((int *)GEN_TOP(piVar2[0xe])) GEN_EDX_ARG);
    F_00c46aa0(param_2,uVar6 + iVar3,uVar5);
    puVar1 = (uint *)(param_1 + 0x38);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 + param_3;
    param_1[0x39] = param_1[0x39] + param_4 + (uint)CARRY4(uVar5,param_3);
    return 1;
  }
  iVar3 = param_1[0x36];
  iVar4 = param_1[0x11];
  if (((param_5 != 0 || param_6 != 0) || ((char)param_7 != '\0')) &&
     (uVar5 = F_00501d40(param_1,param_5,param_6,0), uVar5 != 1)) {
    return uVar5;
  }
  uVar5 = F_004f77b0(*((undefined * PTR32 *)GEN_TOP((iVar4 + 0xa70 + iVar3 * 4))) GEN_EDX_ARG,param_2,param_3,param_4);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xac))))(piVar2 GEN_EDX_ARG);
  return uVar5;
}

/* ref: FUN_005042c0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005042c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5042c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD);
  if ((((char)uVar3 == '\0') &&
      (uVar3 = *((uint *)GEN_TOP(((int)this + 0xa8))), 1 < *((byte *)GEN_TOP((*((int *)GEN_TOP((uVar3 + 4))) + 0x1e + uVar3))))) &&
     (*((char *)GEN_TOP(((int)this + 0x60))) != -1)) {
    cVar1 = *((char *)GEN_TOP((REFG(int, 0x1371278) + 0x10)));
    uVar3 = CONCAT31((int3)((uint)REFG(int, 0x1371278) >> 8),cVar1);
    if (cVar1 == -1) {
      if ((*((byte *)GEN_TOP(((int)this + 0x6c))) & 1) != 0) {
        iVar2 = *(int *)this;
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 0x10))))(this,2);
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 0x24))))(this,uVar3 & 0xff);
        return uVar3;
      }
    }
    else if ((cVar1 == '\0') && ((*((byte *)GEN_TOP(((int)this + 0x6c))) & 1) == 0)) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG,0,1);
    }
  }
  return uVar3;
}

/* ref: FUN_00504330 */
GEN_OWN_GS GEN_FRAME byte GEN_THISCALL F_00504330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x504330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_FRAME_DECL_GS(0x54, 12, 4);
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50));
  (*(uint *)(gen_frame + 0x0)) = 0;
  if (param_2 != 0) {
    iVar6 = 0;
    do {
      (*(byte *)(gen_frame + 0x7)) = 0;
      F_00c48350(((char *)(gen_frame + 0x8)),0,0x44);
      (*(byte *)(gen_frame + 0x6)) = 0;
      do {
        uVar4 = (uint)(*(byte *)(gen_frame + 0x6));
        iVar1 = iVar6 + uVar4;
        cVar5 = *((char *)GEN_TOP((param_1 + iVar1 * 8)));
        cVar2 = *((char *)GEN_TOP((param_1 + 1 + iVar1 * 8)));
        iVar1 = param_1 + iVar1 * 8;
        ((char *)(gen_frame + 0x8))[(int)(uVar4 * 4)] = cVar5;
        ((char *)(gen_frame + 0x8))[(int)(uVar4 * 4 + 1)] = cVar2;
        if (cVar5 == -1) break;
        uVar3 = *((undefined1 *)GEN_TOP((iVar1 + 3)));
        cVar5 = *((char *)GEN_TOP((iVar1 + 4)));
        switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP((iVar1 + 2))))) {
        case 0: ;
          ((char *)(gen_frame + 0x8))[(int)(uVar4 * 4 + 2)] = '!';
          break;
        case 1: ;
          ((char *)(gen_frame + 0x8))[(int)(uVar4 * 4 + 2)] = '\"';
          break;
        case 2: ;
          ((char *)(gen_frame + 0x8))[(int)(uVar4 * 4 + 2)] = '#';
          break;
        case 3: ;
          ((char *)(gen_frame + 0x8))[(int)(uVar4 * 4 + 2)] = '$';
          break;
        case 5: ;
          ((char *)(gen_frame + 0x8))[(int)(uVar4 * 4 + 2)] = 't';
          break;
        case 6: ;
          ((char *)(gen_frame + 0x8))[(int)(uVar4 * 4 + 2)] = 'R';
          break;
        case 7: ;
          ((char *)(gen_frame + 0x8))[(int)(uVar4 * 4 + 2)] = 'T';
          break;
        case 8: ;
          ((char *)(gen_frame + 0x8))[(int)(uVar4 * 4 + 2)] = 'D';
          break;
        case 9: ;
          ((char *)(gen_frame + 0x8))[(int)(uVar4 * 4 + 2)] = '\x12';
          break;
        case 10: ;
          ((char *)(gen_frame + 0x8))[(int)(uVar4 * 4 + 2)] = '\x14';
          break;
        case 0xd: ;
          ((char *)(gen_frame + 0x8))[(int)(uVar4 * 4 + 2)] = '2';
          break;
        case 0xe: ;
          ((char *)(gen_frame + 0x8))[(int)(uVar4 * 4 + 2)] = '4';
          break;
        case 0xf: ;
          ((char *)(gen_frame + 0x8))[(int)(uVar4 * 4 + 2)] = 'a';
        }
        switch((unsigned int)(uintptr_t)(uVar3)) {
        case 0: ;
          ((char *)(gen_frame + 0x8))[(int)(uVar4 * 4 + 3)] = '\0';
          break;
        case 1: ;
          ((char *)(gen_frame + 0x8))[(int)(uVar4 * 4 + 3)] = '\x01';
          break;
        case 2: ;
          ((char *)(gen_frame + 0x8))[(int)(uVar4 * 4 + 3)] = '\a';
          break;
        case 3: ;
          ((char *)(gen_frame + 0x8))[(int)(uVar4 * 4 + 3)] = '\x02';
          break;
        case 4: ;
          cVar5 = cVar5 + '\b';
          goto LAB_00504451;
        case 5: ;
          ((char *)(gen_frame + 0x8))[(int)(uVar4 * 4 + 3)] = '\x0e';
          break;
        case 6: ;
          ((char *)(gen_frame + 0x8))[(int)(uVar4 * 4 + 3)] = '\x0f';
          break;
        case 7: ;
          cVar5 = cVar5 + '\x03';
LAB_00504451: ;
          ((char *)(gen_frame + 0x8))[(int)(uVar4 * 4 + 3)] = cVar5;
        }
        (*(byte *)(gen_frame + 0x7)) = (*(byte *)(gen_frame + 0x7)) + 1;
        (*(byte *)(gen_frame + 0x6)) = (*(byte *)(gen_frame + 0x6)) + 1;
      } while ((*(byte *)(gen_frame + 0x6)) < 0x11);
      uVar4 = F_004deb40(REFG(void * PTR32, 0x1370b90) GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(uint)(*(byte *)(gen_frame + 0x7)));
      *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x108))) + (*(uint *)(gen_frame + 0x0)) * 4))) = uVar4;
      if (*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x108))) + (*(uint *)(gen_frame + 0x0)) * 4))) == 0) {
        return 0;
      }
      (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) + 1;
      iVar6 = iVar6 + 0x11;
    } while ((*(uint *)(gen_frame + 0x0)) < param_2);
  }
  return 1;
}

/* ref: FUN_00504540 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00504540(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0x504540u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  ushort uVar1;
  int iVar2;
  byte bVar3;
  undefined4 in_EAX = 0;
  undefined3 extraout_var = 0;
  undefined1 * puVar4;
  undefined1 * puVar5;
  int iVar6;
  
  puVar4 = ((undefined1 *)GEN_TOP(CONCAT31((int3)((uint)in_EAX >> 8),*((char *)GEN_TOP((param_1 + 0x17e))))));
  if (*((char *)GEN_TOP((param_1 + 0x17e))) == '\0') {
    bVar3 = F_004ffc50(param_1 GEN_EDX_FWD,param_2,REFG(int, 0x13712a4) + 0xd4);
    puVar4 = ((undefined1 *)GEN_TOP(CONCAT31(extraout_var,bVar3)));
    if ((bVar3 < 2) &&
       (puVar4 = ((undefined1 *)GEN_TOP((bVar3 + 0x17e + param_1))), *((char *)GEN_TOP((bVar3 + 0x17e + param_1))) == '\0'
       )) {
      *puVar4 = 1;
      uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xa8))) + 4))) + 0x12 + *((int *)GEN_TOP((param_1 + 0xa8))))));
      puVar4 = ((undefined1 *)GEN_TOP((uint)uVar1));
      if (uVar1 != 0) {
        iVar6 = 0;
        puVar5 = puVar4;
        do {
          iVar2 = *((int *)GEN_TOP((iVar6 + *((int *)GEN_TOP((param_1 + 0x124))))));
          if (iVar2 != 0) {
            puVar4 = ((undefined1 *)GEN_TOP(F_00502b90(iVar2 GEN_EDX_ARG,bVar3)));
          }
          iVar6 = iVar6 + 4;
          puVar5 = puVar5 - 1;
        } while (puVar5 != ((undefined1 *)GEN_TOP(0x0)));
      }
    }
  }
  return (uint)puVar4;
}

/* ref: FUN_005045d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005045d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x5045d0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  ushort uVar1;
  byte bVar2;
  undefined4 in_EAX = 0;
  undefined3 extraout_var = 0;
  undefined1 * puVar3;
  undefined1 * puVar4;
  int iVar5;
  
  puVar3 = ((undefined1 *)GEN_TOP(CONCAT31((int3)((uint)in_EAX >> 8),*((char *)GEN_TOP((param_1 + 0x17e))))));
  if (*((char *)GEN_TOP((param_1 + 0x17e))) == '\0') {
    bVar2 = F_004ffc50(param_1 GEN_EDX_FWD,param_2,param_3);
    puVar3 = ((undefined1 *)GEN_TOP(CONCAT31(extraout_var,bVar2)));
    if ((bVar2 < 2) &&
       (puVar3 = ((undefined1 *)GEN_TOP((bVar2 + 0x17e + param_1))), *((char *)GEN_TOP((bVar2 + 0x17e + param_1))) == '\0'
       )) {
      *puVar3 = 1;
      uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xa8))) + 4))) + 0x12 + *((int *)GEN_TOP((param_1 + 0xa8))))));
      puVar3 = ((undefined1 *)GEN_TOP((uint)uVar1));
      if (uVar1 != 0) {
        iVar5 = 0;
        puVar4 = puVar3;
        do {
          puVar3 = ((undefined1 *)GEN_TOP(F_00502b90(*((undefined4 *)GEN_TOP((iVar5 + *((int *)GEN_TOP((param_1 + 0x124)))))) GEN_EDX_ARG,bVar2)));
          iVar5 = iVar5 + 4;
          puVar4 = puVar4 - 1;
        } while (puVar4 != ((undefined1 *)GEN_TOP(0x0)));
      }
    }
  }
  return (uint)puVar3;
}

/* ref: FUN_00504650 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00504650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x504650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  ushort uVar1;
  undefined1 * in_EAX = 0;
  undefined1 * puVar2;
  int iVar3;
  
  if (((byte)param_1 < 2) &&
     (in_EAX = ((undefined1 *)GEN_TOP(((byte)param_1 + 0x17e + (int)this))),
     *((char *)GEN_TOP(((byte)param_1 + 0x17e + (int)this))) == '\0')) {
    *in_EAX = 1;
    uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xa8))) + 4))) + 0x12 + *((int *)GEN_TOP(((int)this + 0xa8))))));
    in_EAX = ((undefined1 *)GEN_TOP((uint)uVar1));
    if (uVar1 != 0) {
      iVar3 = 0;
      puVar2 = in_EAX;
      do {
        in_EAX = *((undefined1 * PTR32 *)GEN_TOP(((int)this + 0x124)));
        if (*(int *)(in_EAX + iVar3) != 0) {
          in_EAX = ((undefined1 *)GEN_TOP(F_00502b90(*(int *)(in_EAX + iVar3) GEN_EDX_FWD,(byte)param_1)));
        }
        iVar3 = iVar3 + 4;
        puVar2 = puVar2 - 1;
      } while (puVar2 != ((undefined1 *)GEN_TOP(0x0)));
    }
  }
  return (uint)in_EAX;
}

/* ref: FUN_005046c0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_005046c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x5046c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint * puVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint local_10;
  uint local_c;
  int local_8;
  
  uVar3 = *((ushort *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xa8))) + 4))) + 0x12 + *((int *)GEN_TOP((param_1 + 0xa8))))));
  local_10 = (uint)uVar3;
  if (uVar3 != 0) {
    local_8 = 0;
    do {
      iVar4 = *((int *)GEN_TOP((local_8 + *((int *)GEN_TOP((param_1 + 0x124))))));
      bVar2 = *((byte *)GEN_TOP((iVar4 + 0xba)));
      if (bVar2 != 0) {
        local_c = (uint)bVar2;
        iVar7 = 0;
        do {
          iVar5 = *((int *)GEN_TOP((iVar7 + *((int *)GEN_TOP((iVar4 + 0xa8))))));
          if ((iVar5 != 0) && ((*((byte *)GEN_TOP((iVar5 + 0xec))) & 1) != 0)) {
            if (param_2 == 0xff) {
              *((undefined2 *)GEN_TOP((iVar5 + 0xf8))) = 0x100;
            }
            else {
              puVar1 = ((uint *)GEN_TOP((iVar5 + 0xf0)));
              uVar6 = *puVar1;
              while (param_2 < uVar6) {
                LOCK();
                if (uVar6 == *puVar1) {
                  *puVar1 = (uint)param_2;
                }
                UNLOCK();
                uVar6 = *puVar1;
              }
              *((undefined2 *)GEN_TOP((iVar5 + 0xf8))) = 1;
            }
          }
          iVar7 = iVar7 + 8;
          local_c = local_c - 1;
        } while (local_c != 0);
      }
      local_8 = local_8 + 4;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
  }
  return 0;
}

/* ref: FUN_00504790 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00504790(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x504790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  int iVar2;
  
  piVar1 = ((int *)GEN_TOP((param_1 + 0x88)));
  iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
  if (iVar2 == 2) {
    piVar1 = ((int *)GEN_TOP((param_1 + 0x8c)));
    iVar2 = _InterlockedExchangeAdd((volatile long *)(piVar1), 0);
    if (iVar2 < 8) {
      if (param_2 < *((byte *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xa8))) + 4))) + 0x1e +
                             *((int *)GEN_TOP((param_1 + 0xa8))))))) {
        return *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xb8))) + 0x24 + (uint)param_2 * 0x3c)));
      }
    }
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::ModelResourceHandle::vf14 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005047f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5047f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined1 MVar1;
  code * pcVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  float10 fVar6;
  
  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 4)));
  this[0x17e] = (undefined1)0x0;
  this[0x17f] = (undefined1)0x0;
  uVar5 = (*pcVar2)(this);
  if ((char)uVar5 != '\0') {
    return 0;
  }
  iVar3 = *(int *)(this + 0x160);
  MVar1 = this[0x165];
  uVar5 = *(uint *)(this + 0x15c);
  if (iVar3 != -1) {
    fVar6 = (float10)iVar3;
    if (iVar3 < 0) {
      fVar6 = GEN_X87(fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    bVar4 = F_004ffc00(this GEN_EDX_FWD,(float)(fVar6 / (float10)*(double *)&REFG(undefined, 0x1088118)),REFG(int, 0x13712a4) + 0xcc
                        );
    if (bVar4 < uVar5) {
      uVar5 = (uint)bVar4;
    }
  }
  if (MVar1 == (undefined1)0x0 && this[0x164] == (undefined1)0x0) {
    if (uVar5 != 0xffffffff) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG,uVar5,0);
    }
  }
  else if (this[0x164] == (undefined1)0x0) {
    if (uVar5 == 0xffffffff) {
      iVar3 = *(int *)this;
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((iVar3 + 0x10))))(this,2);
      ((code *)*((gen_code32 *)GEN_TOP((iVar3 + 0x24))))(this,uVar5 & 0xff);
    }
    else {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG,uVar5,2);
    }
  }
  else {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG,uVar5,1);
  }
  *(undefined4 *)(this + 0x15c) = 0xffffffff;
  *(undefined4 *)(this + 0x160) = 0xffffffff;
  *(undefined2 *)(this + 0x164) = 0;
  uVar5 = F_00501610((undefined *)this GEN_EDX_ARG,param_1,param_2);
  return uVar5;
}

/* ref: FUN_00504900 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00504900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x504900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_8;
  
  if (((*((byte *)GEN_TOP(((int)this + 0xec))) & 1) != 0) && (*((char *)GEN_TOP(((int)this + 0x60))) != -1)) {
    cVar1 = *((char *)GEN_TOP((REFG(int, 0x1371278) + 0x11)));
    local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),cVar1);
    if (cVar1 == -1) {
      if ((*((byte *)GEN_TOP(((int)this + 0x6c))) & 1) != 0) {
        iVar2 = *(int *)this;
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 0x10))))(this,2);
        ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 0x24))))(this,uVar3 & 0xff);
        return;
      }
    }
    else {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG);
      if ((char)uVar3 != cVar1) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG,local_8,1);
      }
    }
  }
  return;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandle::vf28 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00504970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x504970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pTVar1;
  int iVar2;
  
  pTVar1 = this + 0x8c;
  iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pTVar1)), 0);
  if (iVar2 == 7) {
    pTVar1 = this + 0x88;
    iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pTVar1)), 0);
    if (iVar2 != 3) {
      F_00504900(this GEN_EDX_FWD);
      return;
    }
  }
  return;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandle::vf29 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_005049a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5049a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pTVar1;
  int iVar2;
  
  pTVar1 = this + 0x8c;
  iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pTVar1)), 0);
  if (iVar2 == 7) {
    pTVar1 = this + 0x88;
    iVar2 = _InterlockedExchangeAdd((volatile long *)(((int *)pTVar1)), 0);
    if (iVar2 != 3) {
      F_00504900(this GEN_EDX_FWD);
      return;
    }
  }
  return;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandle::vf14 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005049d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x5049d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined1 TVar1;
  int iVar2;
  uint uVar3;
  
  TVar1 = this[0xec];
  if (((byte)TVar1 & 1) == 0) goto LAB_00504a96;
  iVar2 = *(int *)(this + 0xf0);
  if (this[0xf9] == (undefined1)0x0 && this[0xf8] == (undefined1)0x0) {
    if (iVar2 != -1) {
      if (((*((char *)GEN_TOP((REFG(int, 0x13712a4) + 0xdc))) == '\0') || (((byte)TVar1 & 2) == 0)) ||
         (((byte)TVar1 & 4) != 0)) {
LAB_00504a39: ;
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_FWD,iVar2,0);
      }
      else if (((byte)TVar1 & 8) == 0) {
        if (((byte)TVar1 & 0x10) == 0) goto LAB_00504a39;
      }
      else if (iVar2 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG,0,0);
      }
    }
  }
  else if (this[0xf8] == (undefined1)0x0) {
    if (iVar2 == -1) {
      iVar2 = *(int *)this;
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 0x10))))(this,2);
      ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 0x24))))(this,uVar3 & 0xff);
    }
    else {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG,iVar2,2);
    }
  }
  else {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG,iVar2,1);
  }
  *(undefined2 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xf0) = 0xffffffff;
  *(undefined4 *)(this + 0xf4) = 0xffffffff;
LAB_00504a96: ;
  uVar3 = F_00501610((undefined *)this GEN_EDX_ARG,param_1,param_2);
  return uVar3;
}

/* ref: FUN_00504ab0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00504ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x504ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  uint uVar2;
  
  *(int *)this = param_1;
  if (param_1 != 0) {
    ((int *)(gen_frame + 0x0))[0] = 0xc;
    ((int *)(gen_frame + 0x0))[1] = 0xc;
    iVar1 = ((int *)(gen_frame + 0x0))[(int)(param_2)] * param_1 * 0x10;
    *param_4 = *param_4 + iVar1;
    uVar2 = F_004dcc90(iVar1,4,6);
    *((uint *)GEN_TOP(((int)this + 4))) = uVar2;
    if (uVar2 == 0) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00504b10 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00504b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x504b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  uint uVar1;
  
  *(uint *)this = param_1;
  if (param_1 == 0) {
    return 1;
  }
  uVar1 = F_00406bb0(-(uint)((int)((ulonglong)param_1 * 0x40 >> 0x20) != 0) |
                       (uint)((ulonglong)param_1 * 0x40),0,0);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  *param_2 = *param_2 + param_1 * 0x40;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar1 = F_004dcd60(param_1 * 0x10,4,6);
    *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
    *param_3 = *param_3 + param_1 * 0x10;
    if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00504b90 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00504b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x504b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  ushort * puVar1;
  uint uVar2;
  ushort * puVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  uint * puVar7;
  
  piVar6 = ((int *)GEN_TOP(((int)this + 0x2f0)));
  (*(ushort * PTR32 *)(gen_frame + 0x10)) = ((ushort *)GEN_TOP(0x0));
  (*(uint * PTR32 *)(gen_frame + 0xc)) = (uint *)piVar6;
  (*(ushort * PTR32 *)(gen_frame + 0x14)) = ((ushort *)GEN_TOP(((int)this + 0x14c)));
  do {
    puVar3 = (*(ushort * PTR32 *)(gen_frame + 0x10));
    uVar5 = 0;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(int *)(gen_frame + 0x18)) = 0;
    ((int *)(gen_frame + 0x0))[2] = 0;
    if (1 < *((int *)GEN_TOP(((int)this + 0xb0)))) {
      iVar4 = (*((int *)GEN_TOP(((int)this + 0xb0))) - 2U >> 1) + 1;
      uVar5 = iVar4 * 2;
      puVar1 = (*(ushort * PTR32 *)(gen_frame + 0x14));
      do {
        (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) + puVar1[-0x20];
        (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + (uint)*puVar1;
        puVar1 = puVar1 + 0x40;
        iVar4 = iVar4 - 1;
      } while (iVar4 != 0);
    }
    uVar2 = 0;
    if (uVar5 < *((uint *)GEN_TOP(((int)this + 0xb0)))) {
      uVar2 = (uint)*((ushort *)GEN_TOP(((int)this + (uVar5 * 0x20 + (int)(*(ushort * PTR32 *)(gen_frame + 0x10))) * 2 + 0x10c)));
    }
    iVar4 = (*(int *)(gen_frame + 0x18)) + (*(uint *)(gen_frame + 0x1c)) + uVar2;
    *piVar6 = iVar4;
    if (iVar4 != 0) {
      ((int *)(gen_frame + 0x0))[0] = 0xc;
      ((int *)(gen_frame + 0x0))[1] = 0xc;
      iVar4 = ((int *)(gen_frame + 0x0))[(int)((int)(*(ushort * PTR32 *)(gen_frame + 0x10)))] * iVar4 * 0x10;
      *((int *)GEN_TOP(((int)this + 0xa4))) = *((int *)GEN_TOP(((int)this + 0xa4))) + iVar4;
      (*(uint * PTR32 *)(gen_frame + 0xc)) = (uint *)piVar6;
      uVar5 = F_004dcc90(iVar4,4,6);
      piVar6[1] = uVar5;
      if (uVar5 == 0) {
        return 0;
      }
    }
    (*(ushort * PTR32 *)(gen_frame + 0x14)) = (*(ushort * PTR32 *)(gen_frame + 0x14)) + 1;
    piVar6 = piVar6 + 2;
    (*(ushort * PTR32 *)(gen_frame + 0x10)) = ((ushort *)GEN_TOP(((int)puVar3 + 1U)));
    (*(uint * PTR32 *)(gen_frame + 0xc)) = (uint *)piVar6;
  } while ((int)puVar3 + 1U < 2);
  puVar7 = ((uint *)GEN_TOP(((int)this + 0x308)));
  (*(uint *)(gen_frame + 0x1c)) = 0;
  (*(ushort * PTR32 *)(gen_frame + 0x10)) = ((ushort *)GEN_TOP(((int)this + 0x150)));
  (*(uint * PTR32 *)(gen_frame + 0xc)) = puVar7;
  do {
    uVar5 = 0;
    (*(int *)(gen_frame + 0x18)) = 0;
    (*(ushort * PTR32 *)(gen_frame + 0x14)) = ((ushort *)GEN_TOP(0x0));
    ((int *)(gen_frame + 0x0))[2] = 0;
    if (1 < *((int *)GEN_TOP(((int)this + 0xb0)))) {
      iVar4 = (*((int *)GEN_TOP(((int)this + 0xb0))) - 2U >> 1) + 1;
      uVar5 = iVar4 * 2;
      puVar3 = (*(ushort * PTR32 *)(gen_frame + 0x10));
      do {
        (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + (uint)puVar3[-0x20];
        (*(ushort * PTR32 *)(gen_frame + 0x14)) = ((ushort *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x14)) + (uint)*puVar3)));
        puVar3 = puVar3 + 0x40;
        iVar4 = iVar4 - 1;
      } while (iVar4 != 0);
    }
    uVar2 = 0;
    if (uVar5 < *((uint *)GEN_TOP(((int)this + 0xb0)))) {
      uVar2 = (uint)*((ushort *)GEN_TOP(((int)this + (uVar5 * 0x20 + (*(uint *)(gen_frame + 0x1c))) * 2 + 0x110)));
    }
    uVar2 = (int)(*(ushort * PTR32 *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x18)) + uVar2;
    puVar7[-2] = uVar2;
    if (uVar2 != 0) {
      (*(uint * PTR32 *)(gen_frame + 0xc)) = puVar7;
      uVar5 = F_00406bb0(-(uint)((int)((ulonglong)uVar2 * 0x40 >> 0x20) != 0) |
                           (uint)((ulonglong)uVar2 * 0x40),0,0);
      puVar7[-1] = uVar5;
      *((int *)GEN_TOP(((int)this + 0xa0))) = *((int *)GEN_TOP(((int)this + 0xa0))) + uVar2 * 0x40;
      if (puVar7[-1] == 0) {
        return 0;
      }
      uVar5 = F_004dcd60(uVar2 * 0x10,4,6);
      *puVar7 = uVar5;
      *((int *)GEN_TOP(((int)this + 0xa4))) = *((int *)GEN_TOP(((int)this + 0xa4))) + uVar2 * 0x10;
      if (*puVar7 == 0) {
        return 0;
      }
    }
    (*(ushort * PTR32 *)(gen_frame + 0x10)) = (*(ushort * PTR32 *)(gen_frame + 0x10)) + 1;
    uVar5 = (*(uint *)(gen_frame + 0x1c)) + 1;
    puVar7 = puVar7 + 3;
    (*(uint *)(gen_frame + 0x1c)) = uVar5;
    (*(uint * PTR32 *)(gen_frame + 0xc)) = puVar7;
    if (0xf < uVar5) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_00504d60 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00504d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x504d60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  ushort uVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  ushort * puVar6;
  uint uVar7;
  
  puVar2 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_FWD)));
  uVar4 = *puVar2;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  uVar7 = 0;
  if (uVar4 != 0) {
    while (*((short *)GEN_TOP((uVar3 + 4 + uVar7 * 8))) != (short)param_2) {
      uVar7 = uVar7 + 1;
      if (uVar4 <= uVar7) {
        return 0;
      }
    }
    if (((ushort)uVar7 != 0xffff) && (uVar4 = F_00520150(this GEN_EDX_ARG,param_1), uVar4 != 0)) {
      uVar1 = *((ushort *)GEN_TOP((uVar4 + 2)));
      if (uVar1 != 0xffff) {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
        piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG)));
        puVar6 = ((ushort *)GEN_TOP((uVar4 + 4 + ((uint)uVar1 + *piVar5) * 8)));
        if (puVar6 != ((ushort *)GEN_TOP(0x0))) {
          uVar1 = *puVar6;
          while (uVar1 != 0xffff) {
            if (uVar1 == 0xffff) {
              puVar6 = ((ushort *)GEN_TOP(0x0));
            }
            else {
              uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
              piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG)));
              puVar6 = ((ushort *)GEN_TOP((uVar4 + 4 + ((uint)uVar1 + *piVar5) * 8)));
            }
            if (puVar6[3] == (ushort)uVar7) {
              return 1;
            }
            uVar1 = *puVar6;
          }
        }
      }
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00504e70 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00504e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x504e70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  int * piVar5;
  ushort * puVar6;
  
  uVar4 = F_00520150(this GEN_EDX_FWD,param_1);
  if (uVar4 == 0) {
    return 0;
  }
  uVar2 = *((ushort *)GEN_TOP((uVar4 + 2)));
  if (uVar2 == 0xffff) {
    puVar6 = ((ushort *)GEN_TOP(0x0));
  }
  else {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
    piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG)));
    puVar6 = ((ushort *)GEN_TOP((uVar4 + 4 + ((uint)uVar2 + *piVar5) * 8)));
  }
  uVar2 = *puVar6;
  if (uVar2 != 0xffff) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
    piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG)));
    iVar1 = uVar4 + 4 + ((uint)uVar2 + *piVar5) * 8;
    if (iVar1 != 0) {
      uVar2 = *((ushort *)GEN_TOP((iVar1 + 6)));
      if (uVar2 == 0xffff) {
        return (short)param_2 == *(short *)&REFG(undefined, 0x0);
      }
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
      sVar3 = *((short *)GEN_TOP((uVar4 + 4 + (uint)uVar2 * 8)));
      return (short)param_2 == sVar3;
    }
  }
  return 0;
}

/* ref: FUN_00504f40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00504f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(byte * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x504f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(byte * param_3 = (byte *)(uintptr_t)gen_a3;)
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  byte * pbVar5;
  int iVar6;
  byte * pbVar7;
  bool bVar8;
  
  bVar1 = F_00504e70(this GEN_EDX_FWD,param_1,param_2);
  if (bVar1 == 0) {
    return 0;
  }
  uVar2 = F_00520150(this GEN_EDX_ARG,param_1);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  puVar4 = ((uint *)GEN_TOP((uVar3 + *((int *)GEN_TOP((uVar2 + 4))))));
  uVar3 = 0;
  uVar2 = *puVar4;
  if (uVar2 != 0) {
    do {
      pbVar5 = ((byte *)GEN_TOP(((uint)*((ushort *)GEN_TOP(((int)puVar4 + uVar3 * 2 + 4))) + (int)puVar4)));
      pbVar7 = param_3;
      do {
        bVar1 = *pbVar5;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_00504fc0: ;
          iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00504fc5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00504fc0;
        pbVar5 = pbVar5 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_00504fc5: ;
      if (iVar6 == 0) {
        return (int)puVar4 + uVar3 * 0x30 + (uVar2 + 1 & 0xfffffffe) * 2 + 4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return 0;
}

/* ref: FUN_00504ff0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00504ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(ushort * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(byte * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0x504ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(ushort * param_1 = (ushort *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(byte * param_3 = (byte *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  ushort uVar1;
  byte bVar2;
  short * psVar3;
  uint uVar4;
  uint * puVar5;
  int * piVar6;
  byte * pbVar7;
  int iVar8;
  byte * pbVar9;
  bool bVar10;
  
  if (param_4 == ((undefined4 *)GEN_TOP(0x0))) {
    return 0;
  }
  bVar2 = F_00504d60(this GEN_EDX_FWD,param_1,param_2);
  if (bVar2 == 0) {
    return 0;
  }
  psVar3 = ((short *)GEN_TOP(F_00520150(this GEN_EDX_ARG,param_1)));
  uVar1 = psVar3[1];
  if (uVar1 == 0xffff) {
    param_1 = ((ushort *)GEN_TOP(0x0));
  }
  else {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
    piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG)));
    param_1 = ((ushort *)GEN_TOP((uVar4 + 4 + ((uint)uVar1 + *piVar6) * 8)));
  }
  *param_4 = GEN_FLT_TO(*param_4, REFG(float, 0x1302d00));
  param_4[1] = GEN_FLT_TO(param_4[1], REFG(float, 0x1302d10));
  param_4[2] = GEN_FLT_TO(param_4[2], REFG(float, 0x1302d20));
  param_4[3] = GEN_FLT_TO(param_4[3], REFG(float, 0x1302d30));
  param_4[4] = GEN_FLT_TO(param_4[4], REFG(float, 0x1302d04));
  param_4[5] = GEN_FLT_TO(param_4[5], REFG(float, 0x1302d14));
  param_4[6] = GEN_FLT_TO(param_4[6], REFG(float, 0x1302d24));
  param_4[7] = GEN_FLT_TO(param_4[7], REFG(float, 0x1302d34));
  param_4[8] = GEN_FLT_TO(param_4[8], REFG(float, 0x1302d08));
  param_4[9] = GEN_FLT_TO(param_4[9], REFG(float, 0x1302d18));
  param_4[10] = GEN_FLT_TO(param_4[10], REFG(float, 0x1302d28));
  param_4[0xb] = GEN_FLT_TO(param_4[0xb], REFG(float, 0x1302d38));
LAB_00505102: ;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
  puVar5 = ((uint *)GEN_TOP((uVar4 + *(int *)(psVar3 + 2))));
  uVar4 = 0;
  if (*puVar5 == 0) {
    return 0;
  }
  do {
    pbVar7 = ((byte *)GEN_TOP(((uint)*((ushort *)GEN_TOP(((int)puVar5 + uVar4 * 2 + 4))) + (int)puVar5)));
    pbVar9 = param_3;
    do {
      bVar2 = *pbVar7;
      bVar10 = bVar2 < *pbVar9;
      if (bVar2 != *pbVar9) {
LAB_00505150: ;
        iVar8 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_00505155;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar7[1];
      bVar10 = bVar2 < pbVar9[1];
      if (bVar2 != pbVar9[1]) goto LAB_00505150;
      pbVar7 = pbVar7 + 2;
      pbVar9 = pbVar9 + 2;
    } while (bVar2 != 0);
    iVar8 = 0;
LAB_00505155: ;
    if (iVar8 == 0) break;
    uVar4 = uVar4 + 1;
    if (*puVar5 <= uVar4) {
      return 0;
    }
  } while( true );
  F_004f3790(param_4 GEN_EDX_ARG,(int)puVar5 + uVar4 * 0x30 + (*puVar5 + 1 & 0xfffffffe) * 2 + 4);
  uVar1 = *param_1;
  if (uVar1 == 0xffff) {
    param_1 = ((ushort *)GEN_TOP(0x0));
  }
  else {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
    piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG)));
    param_1 = ((ushort *)GEN_TOP((uVar4 + 4 + ((uint)uVar1 + *piVar6) * 8)));
  }
  uVar1 = param_1[3];
  if (uVar1 == 0xffff) {
    psVar3 = ((short *)GEN_TOP(0x0));
  }
  else {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x5c))))(this GEN_EDX_ARG);
    psVar3 = ((short *)GEN_TOP((uVar4 + 4 + (uint)uVar1 * 8)));
  }
  if (*psVar3 == (short)param_2) {
    return (uint)param_4;
  }
  goto LAB_00505102;
}

/* ref: Client::System::Resource::Handle::SkeletonResourceHandle::vf25 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005051f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5051f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  ulonglong uVar6;
  
  uVar3 = 0;
  if (*(short *)(this + 0x10c) != 0) {
    iVar4 = 0;
    do {
      iVar2 = *((int *)GEN_TOP((iVar4 + 8 + *(int *)(this + 0x108))));
      if (iVar2 != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_FWD,iVar2);
        *((undefined4 *)GEN_TOP((iVar4 + 8 + *(int *)(this + 0x108)))) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (uVar3 < *(ushort *)(this + 0x10c));
  }
  uVar3 = *(uint *)(this + 0x108);
  if (uVar3 != 0) {
    iVar2 = *((int *)GEN_TOP((uVar3 - 4)));
    iVar4 = uVar3 - 4;
    puVar5 = ((undefined4 *)GEN_TOP((uVar3 + 8 + iVar2 * 0xc)));
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      piVar1 = puVar5 - 3;
      puVar5 = puVar5 - 3;
      uVar3 = 0;
      if (*piVar1 != 0) {
        uVar6 = F_00406b30(*piVar1);
        uVar3 = (uint)uVar6;
        *puVar5 = 0;
      }
    }
    if (iVar4 != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 0x10))))
                        (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,iVar4);
    }
    *(undefined4 *)(this + 0x108) = 0;
  }
  puVar5 = *(undefined4 * PTR32 *)(this + 0xd0);
  if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,1);
    *(undefined4 *)(this + 0xd0) = 0;
  }
  return uVar3;
}

/* ref: Client::System::Resource::Handle::PartialAnimationPackResourceHandle::vf25 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_005052d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x5052d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  
  if (*(int *)(this + 0xe4) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 0x10))))
              (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,*(int *)(this + 0xe4));
    *(undefined4 *)(this + 0xe4) = 0;
  }
  uVar2 = 0;
  if (*(int *)(this + 0xe8) != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,*(int *)(this + 0xe8));
    *(undefined4 *)(this + 0xe8) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)(this + 0xb4);
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
    *(undefined4 *)(this + 0xb4) = 0;
  }
  return uVar2;
}

/* ref: FUN_00505340 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00505340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x505340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xb0))) + 0x14))) + (uint)(ushort)param_1 * 4)));
}

/* ref: FUN_00505360 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00505360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x505360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  ushort uVar1;
  
  uVar1 = F_00503630(this GEN_EDX_FWD,param_1);
  if ((-1 < (short)uVar1) &&
     (uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xd4))) + 0x22 + (short)uVar1 * 0x28))),
     -1 < (short)uVar1)) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xb0))) + 0x14))) + (uint)uVar1 * 4)));
  }
  return 0;
}

/* ref: FUN_005053b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_005053b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x5053b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xb0))) + 0x20))) + (uint)(ushort)param_1 * 4)));
}

