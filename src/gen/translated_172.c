#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: hkMallocAllocator::vf8 */
uint F_00db6070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)(this + 8);
  param_1[2] = *(undefined4 *)(this + 0xc);
  return (uint)param_1;
}

/* ref: hkMallocAllocator::vf10 */
uint F_00db6090(unsigned int gen_a0)
{
  GEN_ENTER(0xdb6090u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(uint *)(in_ecx + 0xc) = *(uint *)(in_ecx + 8);
  return *(uint *)(in_ecx + 8);
}

/* ref: hkMallocAllocator::vf9 */
uint F_00db60a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb60a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  return param_2;
}

/* ref: FUN_00db60b0 */
uint F_00db60b0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb60b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00db60c0 */
unsigned int F_00db60c0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb60c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(HANDLE *)this != (HANDLE)0x0) {
    gen_imp_CloseHandle(*(HANDLE *)this);
    *(undefined4 *)this = 0;
  }
  return 0;
}

/* ref: FUN_00db60e0 */
uint F_00db60e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdb60e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x58];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x44);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  HANDLE pvVar1;
  
  (*(undefined4 *)(gen_frame + 0x38)) = 0xffffffff;
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = &REFG(undefined, 0x12f7550);
  (*(gen_code32 *)(gen_frame + 0x30)) = ((code *)REFP(0x1052968));
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined1 * PTR32 *)(gen_frame + 0x24)) = (gen_frame + 0x8);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x2c));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x2c)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  pvVar1 = gen_imp_CreateThread((GEN_LPANY)0x0,(*(SIZE_T *)&gen_args[4]),(*(GEN_LPANY *)&gen_args[1]),(*(LPVOID *)&gen_args[2]),0,(LPDWORD)&(*(LPVOID *)&gen_args[2]));
  *(HANDLE *)(*(undefined * PTR32 *)&gen_args[0]) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x2c));
    return 1;
  }
  *((LPVOID *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (*(LPVOID *)&gen_args[2]);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  (*(ULONG_PTR *)(gen_frame + 0x14)) = 0x1000;
  (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)&gen_args[3]);
  (*(LPVOID *)(gen_frame + 0x1c)) = (*(LPVOID *)&gen_args[2]);
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  gen_imp_RaiseException(0x406d1388,0,4,&(*(ULONG_PTR *)(gen_frame + 0x14)));
  (*(undefined4 *)(gen_frame + 0x38)) = 0xffffffff;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x2c));
  return 0;
}

/* ref: FUN_00db6171 */
uint F_00db6171(unsigned int gen_a0)
{
  GEN_ENTER(0xdb6171u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  return (uint)(*((int *)GEN_TOP(**(undefined4 * PTR32 *)(in_ebp + -0x14))) != 0x406d1388) * 2 - 1;
}

/* ref: FUN_00db6186 */
uint F_00db6186(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdb6186u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ebp = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  *(undefined4 *)(in_ebp + -4) = 0xffffffff;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = *(undefined * PTR32 *)(in_ebp + -0x10);
  return 0;
}

/* ref: FUN_00db61b0 */
uint F_00db61b0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb61b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(HANDLE *)this == (HANDLE)0x0) {
    return 2;
  }
  gen_imp_GetExitCodeThread(*(HANDLE *)this,(LPDWORD)&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  return (uint)((*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x103);
}

/* ref: FUN_00db61e0 */
uint F_00db61e0(void)
{
  GEN_ENTER(0xdb61e0u, 0u, 0u, 0u, 0u);
  DWORD DVar1;
  
  DVar1 = gen_imp_GetCurrentThreadId();
  return DVar1;
}

/* ref: FUN_00db6220 */
unsigned int F_00db6220(unsigned int gen_a0)
{
  GEN_ENTER(0xdb6220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x113d6d4));
  F_00dc0bd0(this);
  F_00d9b7c0(this);
  return 0;
}

/* ref: hkThreadMemory::vf0 */
uint F_00db6250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x113d6d4));
  F_00dc0bd0(this);
  F_00d9b7c0(this);
  return (uint)this;
}

/* ref: FUN_00db6290 */
uint F_00db6290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6290u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x28) = param_2;
  return param_2;
}

/* ref: FUN_00db62a0 */
uint F_00db62a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb62a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x2c) = param_2;
  return param_2;
}

/* ref: FUN_00db62b0 */
uint F_00db62b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb62b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x30) = param_2;
  return param_2;
}

/* ref: FUN_00db62c0 */
uint F_00db62c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb62c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x34) = param_2;
  return param_2;
}

/* ref: FUN_00db62e0 */
uint F_00db62e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb62e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x38) = param_2;
  return param_2;
}

/* ref: FUN_00db6300 */
uint F_00db6300(unsigned int gen_a0)
{
  GEN_ENTER(0xdb6300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00dc0b40(this);
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined1 *)((int)this + 300) = 0;
  return (uint)this;
}

/* ref: FUN_00db6330 */
uint F_00db6330(unsigned int gen_a0)
{
  GEN_ENTER(0xdb6330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  F_00d9b7c0(this);
  return extraout_EAX;
}

/* ref: FUN_00db6350 */
unsigned int F_00db6350(unsigned int gen_a0)
{
  GEN_ENTER(0xdb6350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x113d6d4));
  F_00dc0bd0(this);
  F_00d9b7c0(this);
  return 0;
}

/* ref: hkFreeListMemorySystem::vf9 */
unsigned int F_00db63a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb63a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * piVar1;
  code * pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  uVar3 = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x78)) = this;
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x6c)) = (LPCRITICAL_SECTION)(this + 0x4ec8);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x4ec8));
  F_00da00e0(param_1,
               "hkFreeListMemorySystem memory overview:\n=======================================\n")
  ;
  piVar1 = *(int * PTR32 *)(this + 4);
  (*(undefined4 *)(gen_frame + 0x24)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x30)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x34)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x38)) = 0xffffffff;
  ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1,&(*(undefined4 *)(gen_frame + 0x24)));
  piVar1 = *(int * PTR32 *)(this + 0xc);
  ((int *)(gen_frame + 0x54))[0] = -1;
  ((int *)(gen_frame + 0x54))[1] = 0xffffffff;
  ((int *)(gen_frame + 0x54))[2] = -1;
  ((int *)(gen_frame + 0x54))[3] = 0xffffffff;
  ((int *)(gen_frame + 0x54))[4] = 0xffffffff;
  ((int *)(gen_frame + 0x54))[5] = 0xffffffff;
  ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1,((int *)(gen_frame + 0x54)));
  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)(this + 0x14) + 0x20)));
  (*(undefined4 *)(gen_frame + 0x3c)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x40)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x44)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x50)) = 0xffffffff;
  (*pcVar2)(this + 0x14,&(*(undefined4 *)(gen_frame + 0x3c)));
  F_00da00e0(param_1,"\n    Allocation totals:\n\n");
  F_00da00e0(param_1,"%20i allocated by heap\n",((int *)(gen_frame + 0x54))[0]);
  F_00da00e0(param_1,"%20i allocated by debug\n",(*(undefined4 *)(gen_frame + 0x3c)));
  F_00da00e0(param_1,"%20i allocated by solver\n",*(undefined4 *)(this + 8));
  F_00da00e0(param_1,"%20s\n","-------");
  F_00da00e0(param_1,"%20i total allocated\n",(*(undefined4 *)(gen_frame + 0x24)));
  F_00da00e0(param_1,"\n    Heap usage:\n\n");
  param_1 = 0;
  if (((byte)this[0x4ee0] & 4) != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x74)) = this + 0x2c8;
    (*(uint *)(gen_frame + 0x70)) = 0x40;
    do {
      if ((*(undefined * PTR32 *)(gen_frame + 0x74))[300] != (undefined1)0x0) {
        pcVar2 = *(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x74)) + 0x20);
        (*(undefined4 *)(gen_frame + 0xc)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x14)) = 0xffffffff;
        (*(int *)(gen_frame + 0x18)) = -1;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x20)) = 0xffffffff;
        (*pcVar2)((*(undefined * PTR32 *)(gen_frame + 0x74)),&(*(undefined4 *)(gen_frame + 0xc)));
        param_1 = param_1 + (*(int *)(gen_frame + 0x18));
      }
      (*(undefined * PTR32 *)(gen_frame + 0x74)) = (*(undefined * PTR32 *)(gen_frame + 0x74)) + 0x130;
      iVar6 = (*(uint *)(gen_frame + 0x70)) + -1;
      (*(uint *)(gen_frame + 0x70)) = iVar6;
    } while (iVar6 != 0);
    if (((int *)(gen_frame + 0x54))[0] == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (undefined4)(((longlong)param_1 * 100) / (longlong)((int *)(gen_frame + 0x54))[0]);
      this = (*(undefined * PTR32 *)(gen_frame + 0x78));
    }
    F_00da00e0(uVar3,"%20i (%2i%%) unused in thread local freelists\n",param_1,uVar4);
  }
  uVar5 = -(uint)(((int *)(gen_frame + 0x54))[3] != 0xffffffff) & ((int *)(gen_frame + 0x54))[3];
  (*(uint *)(gen_frame + 0x70)) = uVar5;
  if (((int *)(gen_frame + 0x54))[0] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (undefined4)(((longlong)(int)uVar5 * 100) / (longlong)((int *)(gen_frame + 0x54))[0]);
    this = (*(undefined * PTR32 *)(gen_frame + 0x78));
  }
  F_00da00e0(uVar3,"%20i (%2i%%) unused in main heap\n",uVar5,uVar4);
  iVar6 = (((int *)(gen_frame + 0x54))[0] - (*(uint *)(gen_frame + 0x70))) - param_1;
  if (((int *)(gen_frame + 0x54))[0] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (undefined4)(((longlong)iVar6 * 100) / (longlong)((int *)(gen_frame + 0x54))[0]);
    this = (*(undefined * PTR32 *)(gen_frame + 0x78));
  }
  F_00da00e0(uVar3,"%20i (%2i%%) used in main heap\n",iVar6,uVar4);
  F_00da00e0(uVar3,"%20s\n","-------");
  F_00da00e0(uVar3,"%20i allocated by heap\n",((int *)(gen_frame + 0x54))[0]);
  F_00da00e0(uVar3,"\n    Peak usage:\n\n");
  if (((int *)(gen_frame + 0x54))[2] != -1) {
    if (((int *)(gen_frame + 0x54))[2] == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (undefined4)(((longlong)iVar6 * 100) / (longlong)((int *)(gen_frame + 0x54))[2]);
    }
    F_00da00e0(uVar3,"%20i (%2i%%) peak heap used (versus current)\n",((int *)(gen_frame + 0x54))[2],uVar4);
  }
  if (*(int *)(this + 0x94) - *(int *)(this + 0x90) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (undefined4)
            (((longlong)*(int *)(this + 0xa0) * 100) /
            (longlong)(*(int *)(this + 0x94) - *(int *)(this + 0x90)));
  }
  F_00da00e0(uVar3,"%20i (%2i%%) peak solver used (versus available)\n",
               *(undefined4 *)(this + 0xa0),uVar4);
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x6c)));
  return 0;
}

/* ref: hkFreeListMemorySystem::vf11 */
uint F_00db66b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb66b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  code * pcVar2;
  uint uVar3;
  undefined * phVar4;
  int iVar5;
  
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x20))))(*(int * PTR32 *)(this + 0xc),param_1);
  if (((byte)this[0x4ee0] & 4) != 0) {
    (*(LPCRITICAL_SECTION *)(gen_frame + 0x24)) = (LPCRITICAL_SECTION)(this + 0x4ec8);
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x4ec8));
    iVar5 = 0;
    phVar4 = this + 0x2c8;
    (*(int *)(gen_frame + 0x28)) = 0x40;
    do {
      if (phVar4[300] != (undefined1)0x0) {
        pcVar2 = *(gen_code32 *)(*(int *)phVar4 + 0x20);
        (*(undefined4 *)(gen_frame + 0xc)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x14)) = 0xffffffff;
        (*(int *)(gen_frame + 0x18)) = -1;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x20)) = 0xffffffff;
        (*pcVar2)(phVar4,&(*(undefined4 *)(gen_frame + 0xc)));
        iVar5 = iVar5 + (*(int *)(gen_frame + 0x18));
      }
      phVar4 = phVar4 + 0x130;
      iVar1 = (*(int *)(gen_frame + 0x28)) + -1;
      (*(int *)(gen_frame + 0x28)) = iVar1;
    } while (iVar1 != 0);
    gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x24)));
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - iVar5;
    uVar3 = param_1;
  }
  return uVar3;
}

/* ref: hkFreeListMemorySystem::vf12 */
uint F_00db6750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xdb6750u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x10) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0x18))))
                      (*(int * PTR32 *)(this + 0x10),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return 1;
}

/* ref: hkFreeListMemorySystem::vf13 */
unsigned int F_00db6770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (((byte)this[0x4ee0] & 4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x2c) + 0x2c))))(*(int * PTR32 *)(param_1 + 0x2c));
  }
  return 0;
}

/* ref: hkFreeListMemorySystem::vf14 */
uint F_00db6790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xdb6790u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)(this + 0x10) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 4))))
                      (*(int * PTR32 *)(this + 0x10),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: hkFreeListMemorySystem::vf18 */
uint F_00db67b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb67b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: hkFreeListMemorySystem::vf5 */
uint F_00db67c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xdb67c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x10) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0xc))))
                      (*(int * PTR32 *)(this + 0x10),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return 0;
}

/* ref: hkFreeListMemorySystem::vf6 */
uint F_00db67e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xdb67e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x10) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0x10))))
                      (*(int * PTR32 *)(this + 0x10),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return 0;
}

/* ref: hkFreeListMemorySystem::vf7 */
byte F_00db6800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6800u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00dc0c40(in_ecx + 0x8c,param_2);
  return bVar1;
}

/* ref: hkFreeListMemorySystem::vf8 */
byte F_00db6810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xdb6810u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x10) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0x14))))
                      (*(int * PTR32 *)(this + 0x10),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return (byte)uVar1;
  }
  return 1;
}

/* ref: hkFreeListMemorySystem::vf10 */
uint F_00db6830(unsigned int gen_a0)
{
  GEN_ENTER(0xdb6830u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: FUN_00db6840 */
uint F_00db6840(unsigned int gen_a0)
{
  GEN_ENTER(0xdb6840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  int iVar1;
  undefined * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x113d8f4));
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4ec8));
  this_00 = (undefined *)((int)this + 0x4ec8);
  iVar1 = 0x3f;
  do {
    this_00 = this_00 + -0x130;
    *(undefined * PTR32 * PTR32 *)this_00 = (*(undefined * PTR32 (*)[12])REFP(0x113d6d4));
    F_00dc0bd0(this_00);
    F_00d9b7c0(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00dc0ce0((undefined *)((int)this + 0x8c));
  F_00d9b7c0((int)this + 0x4c);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  F_00d9b7c0((int)this + 0x14);
  F_00d9b910(this);
  return extraout_EAX;
}

/* ref: hkFreeListMemorySystem::vf1 */
uint F_00db68c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb68c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  *(int *)(this + 8) = *param_1;
  if ((param_2 & 1) != 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,this + 0x4c,&REFG(undefined, 0x113d954),param_2);
  }
  if (((param_2 & 2) != 0) && (*param_1 != 0)) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 4))))(*(int * PTR32 *)(this + 4),*param_1);
    F_00dc1020(this + 0x8c,uVar1,*param_1);
  }
  return (uint)(this + 0x4c);
}

/* ref: hkFreeListMemorySystem::vf2 */
uint F_00db6920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  if (((param_1 & 2) != 0) && (*(int *)(this + 0x94) - *(int *)(this + 0x90) != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 8))))
              (*(int * PTR32 *)(this + 4),*(undefined4 *)(this + 0x90),
               *(int *)(this + 0x94) - *(int *)(this + 0x90));
  }
  if ((param_1 & 1) != 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,this + 0x4c,param_1);
    F_00dc1020(this + 0x8c,0,0);
    piVar1 = *(int * PTR32 *)(this + 0x10);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    }
  }
  *(undefined4 *)(this + 4) = 0;
  return 0;
}

/* ref: hkFreeListMemorySystem::vf3 */
unsigned int F_00db6990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb6990u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  code * pcVar1;
  undefined * phVar2;
  uint uVar3;
  undefined * phVar4;
  int iVar5;
  
  if ((param_3 & 1) != 0) {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x4ec8));
    iVar5 = 0;
    phVar2 = this + 0x3f4;
    do {
      if (*phVar2 == (undefined1)0x0) {
        this[iVar5 * 0x130 + 0x3f4] = (undefined1)0x1;
        break;
      }
      iVar5 = iVar5 + 1;
      phVar2 = phVar2 + 0x130;
    } while (iVar5 < 0x40);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x4ec8));
    if (0x3f < iVar5) {
      F_00da0a80(((undefined1 *)(gen_frame + 0x200)),((undefined1 *)(gen_frame + 0x0)),0x200);
      F_00d9fe80(((undefined1 *)(gen_frame + 0x200)),"Too many threads");
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                        (REFG(int * PTR32, 0x15dff78),3,0xf03454fe,((undefined1 *)(gen_frame + 0x0)),
                         "Memory\\System\\FreeList\\hkFreeListMemorySystem.cpp",100);
      if (uVar3 != 0) {
        pcVar1 = ((code *)GEN_TOP(swi(3)));
        (*pcVar1)();
        return 0;
      }
      F_00d9fda0(((undefined1 *)(gen_frame + 0x200)));
    }
    phVar2 = this + iVar5 * 0x130 + 0x2c8;
    *(undefined4 *)(phVar2 + 0x128) = param_2;
    F_00dc07b0(phVar2,*(undefined4 *)(this + 0xc),8);
    *(undefined4 *)((int)param_1 + 0x28) = 0;
    phVar4 = *(undefined * PTR32 *)(this + 0xc);
    if (((byte)this[0x4ee0] & 4) != 0) {
      phVar4 = phVar2;
    }
    *(undefined * PTR32 *)((int)param_1 + 0x2c) = phVar4;
    *(undefined * PTR32 *)((int)param_1 + 0x30) = this + 0x14;
    *(undefined4 *)((int)param_1 + 0x34) = 0;
    *(int *)((int)param_1 + 0x38) = iVar5;
  }
  if ((param_3 & 2) != 0) {
    phVar2 = *(undefined * PTR32 *)(this + 0xc);
    if ((*(uint *)(this + 0x4ee0) & 4) != 0) {
      phVar2 = this + *(int *)((int)param_1 + 0x38) * 0x130 + 0x2c8;
    }
    phVar4 = this + 0x8c;
    if ((*(uint *)(this + 0x4ee0) & 2) == 0) {
      phVar4 = phVar2;
    }
    F_00d940f0(param_1,phVar4,phVar2,phVar2);
    if (((byte)this[0x4ee0] & 1) != 0) {
      *(undefined * PTR32 *)((int)param_1 + 0x34) = this + 0x8c;
      *(undefined * PTR32 *)((int)param_1 + 0x28) = param_1;
      return 0;
    }
    *(undefined * PTR32 *)((int)param_1 + 0x28) = phVar2;
    *(undefined * PTR32 *)((int)param_1 + 0x34) = this + 0x8c;
  }
  return 0;
}

/* ref: hkFreeListMemorySystem::vf4 */
uint F_00db6b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb6b00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * phVar1;
  uint uVar2;
  
  uVar2 = *(int *)((int)param_1 + 0x38) * 0x130;
  phVar1 = this + uVar2 + 0x2c8;
  if ((param_2 & 2) != 0) {
    F_00d942d0(param_1);
    uVar2 = ((code *)*(gen_code32 *)(*(int *)phVar1 + 0x2c))(phVar1);
    *(undefined4 *)((int)param_1 + 0x28) = 0;
    *(undefined4 *)((int)param_1 + 0x34) = 0;
  }
  if ((param_2 & 1) != 0) {
    ((code *)*(gen_code32 *)(*(int *)phVar1 + 0x2c))(phVar1);
    *(int *)(phVar1 + 0x128) = 0;
    phVar1[300] = (undefined1)0x0;
    uVar2 = F_00da3720(param_1,0,0x40);
  }
  return uVar2;
}

/* ref: FUN_00db6b70 */
uint F_00db6b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdb6b70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  undefined * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x113d8f4));
  *(undefined4 *)((int)this + 4) = param_1;
  F_00d9b8d0((int)this + 8,0);
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_2;
  F_00dc1320((undefined *)((int)this + 0x14),param_1);
  F_00d92530((int)this + 0x4c);
  F_00dc0ca0((undefined *)((int)this + 0x8c));
  this_00 = (undefined *)((int)this + 0x2c8);
  iVar1 = 0x3f;
  do {
    F_00dc0b40(this_00);
    *(undefined4 *)((int)this_00 + 0x128) = 0;
    *(undefined1 *)((int)this_00 + 300) = 0;
    this_00 = (undefined *)((int)this_00 + 0x130);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00da5ee0((undefined *)((int)this + 0x4ec8),0);
  *(undefined4 *)((int)this + 0x4ee0) = param_4;
  return (uint)this;
}

/* ref: FUN_00db6c10 */
uint F_00db6c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6c10u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return *(*(uint * PTR32 *)&gen_args[0]) & (*(uint *)&gen_args[1]);
}

/* ref: hkFreeListMemorySystem::vf0 */
uint F_00db6c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00db6840(this);
  return (uint)this;
}

/* ref: hkMemoryAllocator::ExtendedInterface::vf0 */
uint F_00db6c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x113d9a8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00db6c70 */
uint F_00db6c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6c70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00db6cb0 */
uint F_00db6cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00dc1760(this,param_1);
  return param_1;
}

/* ref: FUN_00db6cd0 */
uint F_00db6cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6cd0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  if ((*in_ecx == 0) && ((uint)in_ecx[9] <= (uint)in_ecx[8])) {
    *param_2 = 0;
    return (uint)param_2;
  }
  *param_2 = 1;
  return (uint)param_2;
}

/* ref: FUN_00db6d00 */
uint F_00db6d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6d00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *(int *)(in_ecx + 0x10) != 0;
  return param_2;
}

/* ref: FUN_00db6d40 */
unsigned int F_00db6d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb6d40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint * puVar5;
  uint * puVar6;
  
  puVar1 = param_1 + param_2;
  puVar5 = param_1;
  for (puVar2 = *(undefined4 * PTR32 *)this;
      (puVar3 = puVar2, puVar5 < puVar1 && (puVar3 = (undefined4 *)0x0, puVar2 != (undefined4 *)0x0)
      ); puVar2 = (undefined4 *)*puVar2) {
    *puVar5 = (uint)puVar2;
    puVar5 = puVar5 + 1;
  }
  *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) - ((int)puVar5 - (int)((int)(uintptr_t)param_1) >> 2);
  *(undefined4 * PTR32 *)this = puVar3;
  do {
    while( true ) {
      if (puVar1 <= puVar5) {
        return 0;
      }
      puVar6 = puVar5;
      if (*(uint *)((int)this + 0x20) < *(uint *)((int)this + 0x24)) break;
      uVar4 = F_00dc1990(this);
      *puVar5 = uVar4;
      puVar5 = puVar5 + 1;
    }
    do {
      if (puVar1 <= puVar6) break;
      *puVar6 = *(uint *)((int)this + 0x20);
      *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + *(int *)((int)this + 4);
      puVar6 = puVar6 + 1;
    } while (*(uint *)((int)this + 0x20) < *(uint *)((int)this + 0x24));
    *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) - ((int)puVar6 - (int)((int)(uintptr_t)puVar5) >> 2);
    puVar5 = puVar6;
  } while( true );
}

/* ref: FUN_00db6dd0 */
unsigned int F_00db6dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb6dd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int * piVar2;
  int iVar3;
  undefined4 * puVar4;
  
  *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + param_2;
  piVar2 = (int *)*(int *)this;
  puVar4 = param_1;
  iVar3 = param_2;
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    piVar1 = (int *)*puVar4;
    puVar4 = puVar4 + 1;
    if (piVar1 == (int *)0x0) {
      *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + -1;
    }
    else {
      *piVar1 = (int)piVar2;
      piVar2 = piVar1;
    }
  }
  *(int * PTR32 *)this = piVar2;
  return 0;
}

/* ref: FUN_00db6e30 */
uint F_00db6e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + 1;
  *param_1 = *(undefined4 *)this;
  *(undefined4 * PTR32 *)this = param_1;
  return (uint)param_1;
}

/* ref: FUN_00db6e70 */
uint F_00db6e70(unsigned int gen_a0)
{
  GEN_ENTER(0xdb6e70u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[11])REFP(0x113d9cc));
  F_00dc1410(in_ecx + 1);
  return (uint)in_ecx;
}

/* ref: FUN_00db6ea0 */
unsigned int F_00db6ea0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb6ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00dc14d0((undefined *)((int)this + 4));
  F_00d9b7c0(this);
  return 0;
}

/* ref: hkFixedSizeAllocator::vf0 */
uint F_00db6ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00dc14d0(this + 4);
  F_00d9b7c0(this);
  return (uint)this;
}

/* ref: FUN_00db6ee0 */
uint F_00db6ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb6ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int in_ecx;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[8])REFP(0x113d9a8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x113da20));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[8])REFP(0x113d9fc));
  F_00da5ee0((undefined *)((int)this + 8),4000);
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[11])REFP(0x113d9cc));
  F_00dc1410((int)this + 0x34);
  *(undefined4 *)((int)this + 0x1b4) = 0;
  in_ecx = (int)this + 0x1c0;
  iVar1 = 0x28;
  do {
    F_00dc1410(in_ecx);
    in_ecx = in_ecx + 0x38;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return (uint)this;
}

/* ref: FUN_00db6f50 */
uint F_00db6f50(unsigned int gen_a0)
{
  GEN_ENTER(0xdb6f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x28) != 0) {
    iVar1 = *(int *)((int)this + 0x1c);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x28) + 0x1c))))(*(int * PTR32 *)((int)this + 0x28));
    return uVar2 - iVar1;
  }
  return 0;
}

/* ref: FUN_00db6f70 */
uint F_00db6f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (0 < *(int *)((int)this + 4)) {
    piVar2 = (int *)((int)this + 8);
    do {
      if (param_1 == *piVar2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 3;
    } while ((int)uVar1 < *(int *)((int)this + 4));
  }
  return 0xffffffff;
}

/* ref: FUN_00db6fa0 */
uint F_00db6fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb6fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = F_00db6f70(this,param_1);
  if ((int)uVar2 < 0) {
    uVar2 = *(uint *)((int)this + 4);
    *(uint *)((int)this + 4) = uVar2 + 1;
  }
  puVar1 = (undefined4 *)((int)this + uVar2 * 0xc + 8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  return (uint)puVar1;
}

/* ref: FUN_00db6fe0 */
uint F_00db6fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined8 * puVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 4);
  if (param_1 != uVar2 - 1) {
    puVar1 = (undefined8 *)((int)this + param_1 * 0xc + 8);
    *puVar1 = *(undefined8 *)((int)this + uVar2 * 0xc + -4);
    uVar2 = *(uint *)((int)this + uVar2 * 0xc + 4);
    *(uint *)(puVar1 + 1) = uVar2;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  return uVar2;
}

/* ref: FUN_00db7020 */
unsigned int F_00db7020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb7020u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * this;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  this = param_2;
  *param_2 = param_1;
  F_00db6fa0(param_2,0x200,0x80,param_1);
  F_00db6fa0(param_2,0x100,0x20,param_1);
  F_00db6fa0(param_2,0,4,param_1);
  F_00db6fa0(param_2,0x280,0x80,param_1);
  param_2 = (undefined4 *)0x200;
  do {
    if (param_2 < 0x100) {
      uVar1 = (uint)param_2;
      if (0x80 < param_2) {
        uVar1 = (uint)param_2 & 0xffffffe0;
      }
    }
    else {
      uVar1 = (uint)param_2 & 0xffffffc0;
    }
    iVar3 = 0x10;
    if (0x3f < uVar1) {
      iVar3 = 0x20;
    }
    uVar2 = iVar3 + -1 + uVar1 & ~(iVar3 - 1U);
    uVar1 = F_00db6f70(this,uVar2);
    if ((int)uVar1 < 0) {
      F_00db6fa0(this,uVar2,iVar3,param_1);
    }
    param_2 = (undefined4 *)((int)param_2 - 0x10);
  } while (0xf < (int)param_2);
  return 0;
}

/* ref: FUN_00db70e0 */
uint F_00db70e0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb70e0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_8;
  
  F_00db6fa0(param_1,0x200,0x80,0x4000);
  F_00db6fa0(param_1,0x100,0x20,0x4000);
  F_00db6fa0(param_1,0,4,0x100);
  F_00db6fa0(param_1,0x280,0x80,0x4000);
  uVar4 = 0x200;
  do {
    if (uVar4 < 0x100) {
      uVar1 = uVar4;
      if (0x80 < uVar4) {
        uVar1 = uVar4 & 0xffffffe0;
      }
    }
    else {
      uVar1 = uVar4 & 0xffffffc0;
    }
    iVar2 = 0x10;
    if ((uVar1 == 0) || (local_8 = uVar4 << 4, uVar4 < 0x100)) {
      local_8 = 0x1000;
    }
    if (0x3f < uVar1) {
      iVar2 = 0x20;
    }
    uVar3 = iVar2 + -1 + uVar1 & ~(iVar2 - 1U);
    uVar1 = F_00db6f70(param_1,uVar3);
    if ((int)uVar1 < 0) {
      uVar1 = F_00db6fa0(param_1,uVar3,iVar2,local_8);
    }
    uVar4 = uVar4 - 0x10;
  } while (0xf < (int)uVar4);
  return uVar1;
}

/* ref: hkFreeListAllocator::vf8 */
unsigned int F_00db71c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb71c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  int iVar2;
  int iVar3;
  
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x30)) = (LPCRITICAL_SECTION)(this + 8);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 8));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x28) + 0x20))))(*(int * PTR32 *)(this + 0x28),param_1);
  iVar1 = *(int *)(this + 0x1b4);
  iVar3 = 0;
  iVar2 = 0;
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  if (iVar1 != -1 && -1 < iVar1 + 1) {
    (*(undefined * PTR32 *)(gen_frame + 0x34)) = this + 0x110;
    do {
      (*(int *)(gen_frame + 0x18)) = -1;
      (*(int *)(gen_frame + 0x1c)) = -1;
      (*(undefined4 *)(gen_frame + 0x20)) = 0xffffffff;
      (*(int *)(gen_frame + 0x24)) = -1;
      (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0xffffffff;
      if (iVar2 == iVar1) {
        (*(undefined * PTR32 *)(gen_frame + 0x38)) = this + 0x34;
      }
      else {
        (*(undefined * PTR32 *)(gen_frame + 0x38)) = *(undefined * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x34));
      }
      F_00dc1710((*(undefined * PTR32 *)(gen_frame + 0x38)),&(*(int *)(gen_frame + 0x18)));
      if ((*(int *)(*(undefined * PTR32 *)(gen_frame + 0x38)) != 0) || (*(uint *)((*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x20) < *(uint *)((*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x24))) {
        if (*(uint *)(param_1 + 0x14) < *(uint *)((*(undefined * PTR32 *)(gen_frame + 0x38)) + 4)) {
          *(uint *)(param_1 + 0x14) = *(uint *)((*(undefined * PTR32 *)(gen_frame + 0x38)) + 4);
        }
      }
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + (*(int *)(gen_frame + 0x18));
      iVar1 = *(int *)(this + 0x1b4);
      (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + (*(int *)(gen_frame + 0x24));
      iVar3 = iVar3 + (*(int *)(gen_frame + 0x1c));
      (*(undefined * PTR32 *)(gen_frame + 0x34)) = (*(undefined * PTR32 *)(gen_frame + 0x34)) + 4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1 + 1);
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (*(int *)(gen_frame + 0xc));
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + (iVar3 - (*(int *)(gen_frame + 0x0)));
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x24);
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x30)));
  return 0;
}

/* ref: hkFreeListAllocator::vf10 */
uint F_00db72b0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb72b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
  (*(uint *)(gen_frame + 0x8)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0xc)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x14)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this,&(*(undefined4 *)(gen_frame + 0x4)));
  *(uint *)(this + 0x24) = (*(uint *)(gen_frame + 0x8));
  return (*(uint *)(gen_frame + 0x8));
}

/* ref: hkFreeListAllocator::vf11 */
uint F_00db72f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb72f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * phVar1;
  int iVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 8));
  *param_1 = 1;
  if (0 < *(int *)(this + 0x1b4)) {
    phVar1 = this + 0x110;
    iVar2 = 0;
    do {
      F_00dc1760(*(undefined * PTR32 *)phVar1,&(*(char *)(gen_frame + 0xb)));
      if ((*(char *)(gen_frame + 0xb)) == '\0') {
        *param_1 = 0;
        break;
      }
      iVar2 = iVar2 + 1;
      phVar1 = phVar1 + 4;
    } while (iVar2 < *(int *)(this + 0x1b4));
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 8));
  return (uint)param_1;
}

/* ref: hkFreeListAllocator::vf9 */
uint F_00db7360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb7360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (param_2 < 0x281) {
    if (param_2 == 0) {
      return 0;
    }
    if (*((int *)GEN_TOP((this + (param_2 + 0xf >> 4) * 4 + 0x6c))) != 0) {
      return *((uint *)GEN_TOP((*((int *)GEN_TOP((this + (param_2 + 0xf >> 4) * 4 + 0x6c))) + 4)));
    }
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x28) + 0x24))))(*(int * PTR32 *)(this + 0x28),param_1,param_2);
  return uVar1;
}

/* ref: hkFreeListAllocator::vf1 */
uint F_00db73a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb73a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]));
  return uVar1;
}

/* ref: hkFreeListAllocator::vf2 */
unsigned int F_00db73c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb73c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(this + 8);
    gen_imp_EnterCriticalSection(lpCriticalSection);
    if (param_2 < 0x281) {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((this + (param_2 + 0xf >> 4) * 4 + 0x6c)));
      iVar2 = puVar1[0xd];
      puVar1[0xd] = iVar2 + 1;
      *param_1 = *puVar1;
      *puVar1 = param_1;
      *(int *)(this + 0x20) = *(int *)(this + 0x20) + (puVar1[0xd] - iVar2) * puVar1[1];
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return 0;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x28) + 8))))(*(int * PTR32 *)(this + 0x28),param_1,param_2);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: hkFreeListAllocator::vf7 */
unsigned int F_00db7430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb7430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  undefined4 * puVar5;
  int iVar6;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 8);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (param_3 < 0x281) {
    piVar1 = *((int * PTR32 *)GEN_TOP((this + (param_3 + 0xf >> 4) * 4 + 0x6c)));
    iVar6 = piVar1[0xd];
    piVar1[0xd] = iVar6 + param_2;
    piVar3 = (int *)*piVar1;
    puVar5 = param_1;
    iVar4 = param_2;
    while (iVar4 = iVar4 + -1, -1 < iVar4) {
      piVar2 = (int *)*puVar5;
      puVar5 = puVar5 + 1;
      if (piVar2 == (int *)0x0) {
        piVar1[0xd] = piVar1[0xd] + -1;
      }
      else {
        *piVar2 = (int)piVar3;
        piVar3 = piVar2;
      }
    }
    *piVar1 = (int)piVar3;
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + (piVar1[0xd] - iVar6) * piVar1[1];
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  iVar6 = 0;
  if (0 < param_2) {
    do {
      if (param_1[iVar6] != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x28) + 8))))(*(int * PTR32 *)(this + 0x28),param_1[iVar6],param_3);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_2);
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00db74f0 */
unsigned int F_00db74f0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb74f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  int * piVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined4 * local_c;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  bVar4 = false;
  while( true ) {
    iVar6 = 0;
    bVar3 = false;
    if (*(int *)((int)this + 0x1b0) < 1) break;
    local_c = (undefined4 *)((int)this + 0x10c);
    do {
      this_00 = (undefined *)*local_c;
      iVar1 = *(int *)((int)this_00 + 0x34);
      uVar5 = F_00dc17f0(this_00);
      if ((int)uVar5 < 0) {
        bVar4 = true;
      }
      if (*(int *)((int)this_00 + 0x10) != 0) {
        bVar3 = true;
      }
      F_00dc1690(this_00);
      local_c = local_c + 1;
      *(int *)((int)this + 0x1c) =
           *(int *)((int)this + 0x1c) +
           (*(int *)((int)this_00 + 0x34) - iVar1) * *(int *)((int)this_00 + 4);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)((int)this + 0x1b0));
    if ((!bVar3) || (!bVar4)) break;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x28);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  return 0;
}

/* ref: FUN_00db75a0 */
uint F_00db75a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb75a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  *(undefined4 *)((int)this + 0xab4) = param_1;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  return 0;
}

/* ref: FUN_00db75d0 */
uint F_00db75d0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb75d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xab4);
}

/* ref: FUN_00db7600 */
byte F_00db7600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb7600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x28);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1);
    uVar2 = uVar2 - *(int *)((int)this + 0x1c);
    uVar3 = *(uint *)((int)this + 0x20);
    if (*(uint *)((int)this + 0x20) < uVar2) {
      uVar3 = uVar2;
    }
    *(uint *)((int)this + 0x20) = uVar3;
    return uVar2 < (uint)(*(int *)((int)this + 0xab4) - param_1);
  }
  return 1;
}

/* ref: FUN_00db7640 */
uint F_00db7640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb7640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  F_00dc14d0(param_1);
  uVar1 = *(uint *)((int)this + 0x1b8);
  if ((int)param_1 + 0x38U == uVar1) {
    uVar1 = uVar1 - 0x38;
    *(uint *)((int)this + 0x1b8) = uVar1;
  }
  return uVar1;
}

/* ref: hkFreeListAllocator::vf3 */
uint F_00db7670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb7670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint local_8;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 8));
  iVar1 = *param_1;
  if (iVar1 < 0x281) {
    piVar2 = *((int * PTR32 *)GEN_TOP((this + (iVar1 + 0xf >> 4) * 4 + 0x6c)));
    local_8 = *piVar2;
    iVar1 = piVar2[0xd];
    if (local_8 == 0) {
      local_8 = piVar2[8];
      if (local_8 < (uint)piVar2[9]) {
        piVar2[0xd] = iVar1 + -1;
        piVar2[8] = piVar2[1] + local_8;
      }
      else {
        local_8 = F_00dc1990(piVar2);
      }
    }
    else {
      piVar2[0xd] = iVar1 + -1;
      *piVar2 = *(int *)local_8;
    }
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + (piVar2[0xd] - iVar1) * piVar2[1];
    *param_1 = piVar2[1];
  }
  else {
    local_8 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x28) + 4))))(*(int * PTR32 *)(this + 0x28),iVar1);
  }
  piVar2 = *(int * PTR32 *)(this + 0x2c);
  if (piVar2 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2);
    uVar3 = uVar3 - *(int *)(this + 0x20);
    uVar4 = *(uint *)(this + 0x24);
    if (*(uint *)(this + 0x24) < uVar3) {
      uVar4 = uVar3;
    }
    *(uint *)(this + 0x24) = uVar4;
    if (*(uint *)(this + 0xab8) <= uVar3) {
      F_00dc23e0(1);
    }
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 8));
  return local_8;
}

/* ref: hkFreeListAllocator::vf6 */
unsigned int F_00db7750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb7750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint * puVar1;
  undefined4 * this_00;
  undefined4 * puVar2;
  int * piVar3;
  undefined4 * puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint * puVar8;
  uint * puVar9;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 8));
  if (param_3 < 0x281) {
    this_00 = *((undefined4 * PTR32 *)GEN_TOP((this + (param_3 + 0xf >> 4) * 4 + 0x6c)));
    iVar7 = this_00[0xd];
    puVar1 = param_1 + param_2;
    puVar8 = param_1;
    for (puVar2 = (undefined4 *)*this_00;
        (puVar4 = puVar2, puVar8 < puVar1 &&
        (puVar4 = (undefined4 *)0x0, puVar2 != (undefined4 *)0x0)); puVar2 = (undefined4 *)*puVar2)
    {
      *puVar8 = (uint)puVar2;
      puVar8 = puVar8 + 1;
    }
    *this_00 = puVar4;
    this_00[0xd] = this_00[0xd] - ((int)puVar8 - (int)((int)(uintptr_t)param_1) >> 2);
    while (puVar8 < puVar1) {
      puVar9 = puVar8;
      if ((uint)this_00[8] < (uint)this_00[9]) {
        do {
          if (puVar1 <= puVar9) break;
          *puVar9 = this_00[8];
          this_00[8] = this_00[8] + this_00[1];
          puVar9 = puVar9 + 1;
        } while ((uint)this_00[8] < (uint)this_00[9]);
        this_00[0xd] = this_00[0xd] - ((int)puVar9 - (int)((int)(uintptr_t)puVar8) >> 2);
        puVar8 = puVar9;
      }
      else {
        uVar5 = F_00dc1990(this_00);
        *puVar8 = uVar5;
        puVar8 = puVar8 + 1;
      }
    }
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + (this_00[0xd] - iVar7) * this_00[1];
  }
  else {
    iVar7 = 0;
    if (0 < param_2) {
      do {
        uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x28) + 4))))(*(int * PTR32 *)(this + 0x28),param_3);
        param_1[iVar7] = uVar5;
        iVar7 = iVar7 + 1;
      } while (iVar7 < param_2);
    }
  }
  piVar3 = *(int * PTR32 *)(this + 0x2c);
  if (piVar3 != (int *)0x0) {
    uVar6 = ((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3);
    uVar6 = uVar6 - *(int *)(this + 0x20);
    uVar5 = *(uint *)(this + 0x24);
    if (*(uint *)(this + 0x24) < uVar6) {
      uVar5 = uVar6;
    }
    *(uint *)(this + 0x24) = uVar5;
    if (*(uint *)(this + 0xab8) <= uVar6) {
      F_00dc23e0(1);
    }
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 8));
  return 0;
}

/* ref: FUN_00db7890 */
unsigned int F_00db7890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb7890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined * this_00;
  int iVar2;
  int * piVar3;
  char * pcVar4;
  int iVar5;
  int iVar6;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  iVar6 = param_1;
  if (param_1 < 1) {
    iVar6 = 1;
  }
  iVar1 = *(int *)((int)this + 0xab8);
  (*(int *)(gen_frame + 0x4)) = iVar1;
  do {
    this_00 = *(undefined * PTR32 *)((int)this + (*(int *)(gen_frame + 0x4)) * 4 + 0x10c);
    iVar2 = *(int *)((int)this_00 + 0x34);
    pcVar4 = (char *)F_00dc1e30(this_00,&(*(undefined1 *)(gen_frame + 0xb)),iVar6,&(*(int *)(gen_frame + 0x0)));
    if ((*pcVar4 != '\0') &&
       (iVar5 = (*(int *)(gen_frame + 0x4)) + 1, (*(int *)(gen_frame + 0x4)) = iVar5, *(int *)((int)this + 0x1b0) <= iVar5)) {
      (*(int *)(gen_frame + 0x4)) = 0;
    }
    F_00dc1690(this_00);
    iVar6 = iVar6 - (*(int *)(gen_frame + 0x0));
    *(int *)((int)this + 0x1c) =
         *(int *)((int)this + 0x1c) +
         (*(int *)((int)this_00 + 0x34) - iVar2) * *(int *)((int)this_00 + 4);
  } while ((0 < iVar6) && ((*(int *)(gen_frame + 0x4)) != iVar1));
  *(int *)((int)this + 0xab8) = (*(int *)(gen_frame + 0x4));
  piVar3 = *(int * PTR32 *)((int)this + 0x28);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3,param_1);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  return 0;
}

/* ref: FUN_00db7950 */
uint F_00db7950(unsigned int gen_a0)
{
  GEN_ENTER(0xdb7950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  bool bVar2;
  int * piVar3;
  uint extraout_EAX = 0;
  int iVar4;
  int iVar5;
  undefined * this_00;
  int * local_8;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x113da20));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[8])REFP(0x113d9fc));
  if (0 < *(int *)((int)this + 0x1b4)) {
    local_8 = (int *)((int)this + 0x110);
    iVar5 = 1;
    do {
      iVar1 = *local_8;
      if ((iVar1 != 0) &&
         (F_00db7640(this,iVar1), iVar4 = iVar5, piVar3 = local_8,
         iVar5 < *(int *)((int)this + 0x1b4))) {
        do {
          piVar3 = piVar3 + 1;
          if (*piVar3 == iVar1) {
            *piVar3 = 0;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)((int)this + 0x1b4));
      }
      local_8 = local_8 + 1;
      bVar2 = iVar5 < *(int *)((int)this + 0x1b4);
      iVar5 = iVar5 + 1;
    } while (bVar2);
  }
  F_00dc14d0((undefined *)((int)this + 0x34));
  this_00 = (undefined *)((int)this + 0xab8);
  iVar5 = 0x28;
  do {
    this_00 = (undefined *)((int)this_00 + -0x38);
    F_00dc14d0(this_00);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  F_00dc14d0((undefined *)((int)this + 0x34));
  F_00d9b7c0((int)this + 0x30);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[8])REFP(0x113d9a8));
  F_00d9b7c0(this);
  return extraout_EAX;
}

/* ref: FUN_00db7a20 */
uint F_00db7a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb7a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  code * pcVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x1b8);
  if (*(undefined * PTR32 *)((int)this + 0x1bc) <= this_00) {
    pcVar1 = ((code *)GEN_TOP(swi(3)));
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  *(int *)((int)this + 0x1b8) = (int)this_00 + 0x38;
  if (this_00 != (undefined *)0x0) {
    F_00dc1c00(this_00,param_1,param_2,param_3,*(undefined4 *)((int)this + 0x28),(int)this + 0x30)
    ;
  }
  iVar4 = 0;
  if (0 < *(int *)((int)this + 0x1b4)) {
    piVar3 = (int *)((int)this + 0x110);
    do {
      if (*(int *)(*piVar3 + 4) == *(int *)((int)this_00 + 4)) {
        F_00db7640(this,this_00);
        return *(uint *)((int)this + iVar4 * 4 + 0x110);
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < *(int *)((int)this + 0x1b4));
  }
  *((undefined * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x1b4) * 4 + 0x110))) = this_00;
  *(int *)((int)this + 0x1b4) = *(int *)((int)this + 0x1b4) + 1;
  return (uint)this_00;
}

/* ref: FUN_00db7ac0 */
unsigned int F_00db7ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb7ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x200];
  code * pcVar1;
  int iVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  undefined4 * puVar7;
  uint * puVar8;
  
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0xc)));
  iVar5 = 0;
  *(undefined4 *)((int)this + 0xabc) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  (*pcVar1)((int)this + 4,0x7fffffff);
  ((int *)(gen_frame + 0x8))[0] = 0;
  ((int *)(gen_frame + 0x8))[1] = 0;
  if (param_1 == (int *)0x0) {
    F_00db7020(0x2000,((int *)(gen_frame + 0x8)));
    param_1 = ((int *)(gen_frame + 0x8));
  }
  iVar2 = *param_1;
  if (iVar2 == 0) {
    iVar2 = 0x400;
  }
  F_00dc21f0((undefined *)((int)this + 0x30),0x10,4,iVar2,*(undefined4 *)((int)this + 0x28));
  *(int *)((int)this + 0x1b8) = (int)this + 0x1c0;
  *(int *)((int)this + 0x1bc) = (int)this + 0xab8;
  puVar7 = (undefined4 *)((int)this + 0x6c);
  for (iVar2 = 0x29; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  if (0 < param_1[1]) {
    puVar8 = (uint *)(param_1 + 2);
    do {
      uVar3 = F_00db7a20(this,*puVar8,puVar8[1],puVar8[2]);
      *((uint *)GEN_TOP(((int)this + (*puVar8 >> 4) * 4 + 0x6c))) = uVar3;
      iVar5 = iVar5 + 1;
      puVar8 = puVar8 + 3;
    } while (iVar5 < param_1[1]);
  }
  piVar4 = (int *)((int)this + 0x10c);
  iVar2 = 0x28;
  iVar5 = *piVar4;
  do {
    iVar6 = *piVar4;
    if (iVar6 == 0) {
      *piVar4 = iVar5;
      iVar6 = iVar5;
    }
    piVar4 = piVar4 + -1;
    iVar2 = iVar2 + -1;
    iVar5 = iVar6;
  } while (-1 < iVar2);
  return 0;
}

/* ref: FUN_00db7bc0 */
uint F_00db7bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb7bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  int in_ecx;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[8])REFP(0x113d9a8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x113da20));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[8])REFP(0x113d9fc));
  F_00da5ee0((undefined *)((int)this + 8),4000);
  *(undefined4 *)((int)this + 0x2c) = param_2;
  *(undefined4 *)((int)this + 0x28) = param_1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[11])REFP(0x113d9cc));
  F_00dc1410((int)this + 0x34);
  *(undefined4 *)((int)this + 0x1b4) = 0;
  in_ecx = (int)this + 0x1c0;
  iVar1 = 0x28;
  do {
    F_00dc1410(in_ecx);
    in_ecx = in_ecx + 0x38;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00db7ac0(this,param_3);
  return (uint)this;
}

/* ref: FUN_00db7c50 */
unsigned int F_00db7c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb7c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 0x28) = param_1;
  *(undefined4 *)((int)this + 0x2c) = param_2;
  F_00db7ac0(this,param_3);
  return 0;
}

/* ref: FUN_00db7c70 */
uint F_00db7c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb7c70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined * this_00;
  
  if (*(int *)((int)this + 0x28) == 0) {
    return 1;
  }
  (*(LPCRITICAL_SECTION *)(gen_frame + 0xc8)) = (LPCRITICAL_SECTION)((int)this + 4);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  puVar3 = (undefined4 *)((int)this + 0x10c);
  F_00da1010(((int *)(gen_frame + 0x4)),puVar3,*(int *)((int)this + 0x1b0) * 4);
  iVar2 = *(int *)((int)this + 0x1b0);
  this_00 = (undefined *)((int)this + 0x30);
  ((int *)(gen_frame + 0x4))[(int)(iVar2)] = (int)this_00;
  (*(undefined * PTR32 *)(gen_frame + 0xc4)) = this_00;
  F_00db8070(&(*(int * PTR32 *)(gen_frame + 0xac)),*(undefined4 *)((int)this + 0x24),((int *)(gen_frame + 0x4)),iVar2 + 1,param_1,param_2);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x28) + 0x18))))
                    (*(int * PTR32 *)((int)this + 0x28),((code *)REFP(0xdb7f30)),&(*(int * PTR32 *)(gen_frame + 0xac)));
  (*(uint *)(gen_frame + 0xc0)) = uVar1;
  if (uVar1 == 0) {
    iVar2 = 0;
    if (0 < *(int *)((int)this + 0x1b0)) {
      do {
        iVar2 = iVar2 + 1;
        F_00dc18d0((undefined *)*puVar3,param_1,iVar2,param_2);
        puVar3 = puVar3 + 1;
        this_00 = (*(undefined * PTR32 *)(gen_frame + 0xc4));
      } while (iVar2 < *(int *)((int)this + 0x1b0));
    }
    F_00dc18d0(this_00,param_1,*(int *)((int)this + 0x1b0) + 1,param_2);
    if ((*(int *)(gen_frame + 0xb0)) != 0) {
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xac)) + 8))((*(int * PTR32 *)(gen_frame + 0xac)),(*(int *)(gen_frame + 0xb0)),(*(int *)(gen_frame + 0xb4)) * 4);
    }
    gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0xc8)));
    return 0;
  }
  if ((*(int *)(gen_frame + 0xb0)) != 0) {
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xac)) + 8))((*(int * PTR32 *)(gen_frame + 0xac)),(*(int *)(gen_frame + 0xb0)),(*(int *)(gen_frame + 0xb4)) * 4);
  }
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0xc8)));
  return (*(uint *)(gen_frame + 0xc0));
}

/* ref: FUN_00db7dc0 */
uint F_00db7dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb7dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00dc14d0(this);
  return (uint)this;
}

/* ref: FUN_00db7df0 */
uint F_00db7df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb7df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)this + 8);
  iVar1 = *(int *)((int)this + 4);
  while( true ) {
    do {
      iVar3 = iVar4;
      if (iVar3 < 1) {
        return 0xffffffff;
      }
      iVar4 = iVar3 / 2;
      uVar2 = *(uint *)(iVar1 + iVar4 * 4);
    } while (param_1 < uVar2);
    if (param_1 <= uVar2) break;
    iVar1 = iVar1 + 4 + iVar4 * 4;
    iVar4 = iVar3 + (-1 - iVar4);
  }
  return (iVar1 - *(int *)((int)this + 4) >> 2) + iVar4;
}

/* ref: FUN_00db7e50 */
uint F_00db7e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb7e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (((char)param_3 != '\0') && (uVar1 = F_00db7df0(this,param_1), -1 < (int)uVar1)) {
    return uVar1;
  }
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0xc))
                    (param_1,param_2,param_3,0,*(undefined4 *)((int)this + 0x10));
  return uVar1;
}

/* ref: FUN_00db7e90 */
unsigned int F_00db7e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb7e90u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  piVar2 = param_1;
  for (puVar1 = param_2; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    puVar3 = (undefined4 *)puVar1[1];
    if ((undefined4 *)puVar1[1] == (undefined4 *)0x0) {
      puVar3 = puVar1;
    }
    *piVar2 = (int)puVar3;
    piVar2 = piVar2 + 1;
  }
  return 0;
}

/* ref: FUN_00db7ec0 */
uint F_00db7ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb7ec0u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_00db7ee0 */
uint F_00db7ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb7ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00db8030((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00db7ef0 */
byte F_00db7ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb7ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x2c);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1);
    uVar2 = uVar2 - *(int *)((int)this + 0x20);
    uVar3 = *(uint *)((int)this + 0x24);
    if (*(uint *)((int)this + 0x24) < uVar2) {
      uVar3 = uVar2;
    }
    *(uint *)((int)this + 0x24) = uVar3;
    return uVar2 < (uint)(*(int *)((int)this + 0xab8) - param_1);
  }
  return 1;
}

/* ref: FUN_00db7f30 */
uint F_00db7f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdb7f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined * param_5 = (undefined *)(uintptr_t)gen_a4;
  uint uVar1;
  
  if (((char)param_3 != '\0') && (uVar1 = F_00db7df0(param_5,param_1), -1 < (int)uVar1)) {
    return uVar1;
  }
  uVar1 = ((code *)*(gen_code32 *)((int)param_5 + 0xc))
                    (param_1,param_2,param_3,0,*(undefined4 *)((int)param_5 + 0x10));
  return uVar1;
}

/* ref: FUN_00db7f70 */
unsigned int F_00db7f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb7f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  do {
    uVar1 = *((uint *)GEN_TOP((param_1 + (param_2 + param_3 >> 1) * 4)));
    iVar4 = param_3;
    iVar5 = param_2;
    do {
      uVar2 = *(uint *)(param_1 + iVar5 * 4);
      while (uVar2 < uVar1) {
        iVar5 = iVar5 + 1;
        uVar2 = *(uint *)(param_1 + iVar5 * 4);
      }
      uVar2 = *(uint *)(param_1 + iVar4 * 4);
      while (uVar1 < uVar2) {
        iVar4 = iVar4 + -1;
        uVar2 = *(uint *)(param_1 + iVar4 * 4);
      }
      if (iVar4 < iVar5) break;
      if (iVar4 != iVar5) {
        uVar3 = *(undefined4 *)(param_1 + iVar4 * 4);
        *(undefined4 *)(param_1 + iVar4 * 4) = *(undefined4 *)(param_1 + iVar5 * 4);
        *(undefined4 *)(param_1 + iVar5 * 4) = uVar3;
      }
      iVar4 = iVar4 + -1;
      iVar5 = iVar5 + 1;
    } while (iVar5 <= iVar4);
    if (param_2 < iVar4) {
      F_00db7f70(param_1,param_2,iVar4,param_4);
    }
    param_2 = iVar5;
    if (param_3 <= iVar5) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00db8000 */
unsigned int F_00db8000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb8000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (1 < param_2) {
    F_00db7f70(param_1,0,param_2 + -1,param_3);
  }
  return 0;
}

/* ref: hkFreeListAllocator::vf0 */
uint F_00db8030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb8030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00db7950(this);
  return (uint)this;
}

/* ref: FUN_00db8040 */
unsigned int F_00db8040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb8040u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  if (1 < param_2) {
    F_00db7f70(param_1,0,param_2 + -1,0);
  }
  return 0;
}

/* ref: FUN_00db8070 */
uint F_00db8070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xdb8070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  undefined4 * puVar5;
  int iVar6;
  
  iVar6 = 0;
  *(int * PTR32 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  if (0 < (int)param_3) {
    do {
      iVar1 = *(int *)(param_2 + iVar6 * 4);
      uVar3 = F_00dc1440(*(undefined4 *)(iVar1 + 0xc));
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + uVar3;
      uVar3 = F_00dc1440(*(undefined4 *)(iVar1 + 0x10));
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + uVar3;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)param_3);
  }
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 4))(param_1,*(int *)((int)this + 8) * 4)));
  *(int * PTR32 *)((int)this + 4) = piVar4;
  if (piVar4 != (int *)0x0) {
    iVar6 = 0;
    if (0 < (int)param_3) {
      do {
        for (puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_2 + iVar6 * 4) + 0xc)));
            puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
          puVar5 = (undefined4 *)puVar2[1];
          if ((undefined4 *)puVar2[1] == (undefined4 *)0x0) {
            puVar5 = puVar2;
          }
          *piVar4 = (int)puVar5;
          piVar4 = piVar4 + 1;
        }
        for (puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(param_2 + iVar6 * 4) + 0x10)));
            puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
          puVar5 = (undefined4 *)puVar2[1];
          if ((undefined4 *)puVar2[1] == (undefined4 *)0x0) {
            puVar5 = puVar2;
          }
          *piVar4 = (int)puVar5;
          piVar4 = piVar4 + 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)param_3);
    }
    param_3 = param_3 & 0xffffff00;
    if (1 < *(int *)((int)this + 8)) {
      F_00db7f70(*(undefined4 *)((int)this + 4),0,*(int *)((int)this + 8) + -1,param_3);
    }
  }
  return (uint)this;
}

/* ref: FUN_00db81c0 */
uint F_00db81c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb81c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + in_ecx;
}

/* ref: FUN_00db81d0 */
uint F_00db81d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb81d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx - param_2;
}

/* ref: FUN_00db8200 */
uint F_00db8200(unsigned int gen_a0)
{
  GEN_ENTER(0xdb8200u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 0x10;
}

/* ref: FUN_00db8210 */
uint F_00db8210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb8210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  
  puVar1 = (uint *)(param_1 + 4 + (int)this);
  *(uint *)((int)this + 4) = param_1 | 3;
  *puVar1 = *puVar1 | 1;
  return (uint)puVar1;
}

/* ref: FUN_00db8230 */
uint F_00db8230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb8230u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2 | 3;
  return param_2 | 3;
}

/* ref: FUN_00db8240 */
uint F_00db8240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb8240u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(param_2 + in_ecx) = param_2;
  return param_2;
}

/* ref: FUN_00db8250 */
uint F_00db8250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb8250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(uint *)((int)this + 4) = param_1 | 1;
  *(uint *)(param_1 + (int)this) = param_1;
  return param_1;
}

/* ref: FUN_00db8270 */
uint F_00db8270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb8270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffffe;
  *(uint *)((int)this + 4) = param_1 | 1;
  *(uint *)(param_1 + (int)this) = param_1;
  return param_1;
}

/* ref: FUN_00db8290 */
byte F_00db8290(unsigned int gen_a0)
{
  GEN_ENTER(0xdb8290u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return (param_1 & 0xf) == 0;
}

/* ref: FUN_00db8320 */
uint F_00db8320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb8320u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  return (uint)this;
}

/* ref: FUN_00db8370 */
uint F_00db8370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb8370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) | 1 << ((byte)param_1 & 0x1f);
  return (uint)this;
}

/* ref: FUN_00db8390 */
uint F_00db8390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb8390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) & ~(1 << ((byte)param_1 & 0x1f));
  return (uint)this;
}

/* ref: FUN_00db83b0 */
uint F_00db83b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb83b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return (uint)((1 << ((byte)param_1 & 0x1f) & *(uint *)((int)this + 0xc)) != 0);
}

/* ref: FUN_00db83d0 */
uint F_00db83d0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb83d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_1 >> 8;
  if (uVar1 == 0) {
    return 0;
  }
  if (0xffff < uVar1) {
    return 0x1f;
  }
  uVar4 = uVar1 - 0x100 >> 0x10 & 8;
  iVar2 = uVar1 << (sbyte)uVar4;
  uVar1 = iVar2 - 0x1000U >> 0x10 & 4;
  iVar2 = iVar2 << (sbyte)uVar1;
  uVar3 = iVar2 - 0x4000U >> 0x10 & 2;
  iVar2 = (((uint)(iVar2 << (sbyte)uVar3) >> 0xf) - uVar3) - (uVar4 + uVar1);
  return (param_1 >> ((char)iVar2 + 0x15U & 0x1f) & 1) + 0x1c + iVar2 * 2;
}

/* ref: FUN_00db8440 */
uint F_00db8440(unsigned int gen_a0)
{
  GEN_ENTER(0xdb8440u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = param_1 - 1U >> 0xc & 0x10;
  uVar1 = param_1 - 1U >> (sbyte)uVar6;
  uVar2 = uVar1 >> 5 & 8;
  uVar1 = uVar1 >> (sbyte)uVar2;
  uVar3 = uVar1 >> 2 & 4;
  uVar1 = uVar1 >> (sbyte)uVar3;
  uVar4 = uVar1 >> 1 & 2;
  uVar1 = uVar1 >> (sbyte)uVar4;
  uVar5 = uVar1 >> 1 & 1;
  return (uVar1 >> (sbyte)uVar5) + uVar6 + uVar2 + uVar3 + uVar4 + uVar5;
}

/* ref: FUN_00db8490 */
uint F_00db8490(unsigned int gen_a0)
{
  GEN_ENTER(0xdb8490u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x1fU & 0xfffffff0;
}

/* ref: FUN_00db84a0 */
uint F_00db84a0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb84a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 0x1f) {
    return 0;
  }
  return 0x19 - (param_1 >> 1);
}

/* ref: FUN_00db84c0 */
uint F_00db84c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb84c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (uint)(*(uint *)(in_ecx + 0x10) <= param_2);
}

/* ref: FUN_00db84d0 */
uint F_00db84d0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb84d0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  return -(*(uint *)&gen_args[0]) & (*(uint *)&gen_args[0]);
}

/* ref: FUN_00db84e0 */
uint F_00db84e0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb84e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 * -2 | param_1 * 2;
}

/* ref: FUN_00db84f0 */
uint F_00db84f0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb84f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 1 << ((byte)param_1 & 0x1f);
}

/* ref: FUN_00db8500 */
uint F_00db8500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb8500u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *(int *)(in_ecx + 0xc0) != in_ecx + 0xbc;
  return param_2;
}

/* ref: hkLargeBlockAllocator::FixedMemoryBlockServer::vf3 */
uint F_00db8530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb8530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 4);
  if (*(int *)(this + 0x10) != iVar1) {
    return 0;
  }
  iVar2 = *(int *)(this + 0xc) - iVar1;
  if (iVar2 < *param_1) {
    return 0;
  }
  *(int *)(this + 0x10) = iVar1 + iVar2;
  *param_1 = iVar2;
  return *(uint *)(this + 4);
}

/* ref: FUN_00db8570 */
byte F_00db8570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdb8570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if (((uVar1 == param_1) && (uVar2 = param_3 + uVar1, uVar1 <= uVar2)) &&
     (uVar2 <= *(uint *)((int)this + 0xc))) {
    *(uint *)((int)this + 0x10) = uVar2;
    *param_4 = uVar2 - uVar1;
    return 1;
  }
  return 0;
}

/* ref: hkLargeBlockAllocator::FixedMemoryBlockServer::vf4 */
uint F_00db85a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb85a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  code * pcVar1;
  uint uVar2;
  
  if ((*(int *)(this + 0x10) != *(int *)(this + 4)) &&
     (uVar2 = *(int *)(this + 0x10) - *(int *)(this + 4), uVar2 == param_2)) {
    *(undefined4 *)(this + 0x10) = 0;
    return uVar2;
  }
  pcVar1 = ((code *)GEN_TOP(swi(3)));
  uVar2 = (*pcVar1)();
  return uVar2;
}

/* ref: hkLargeBlockAllocator::FixedMemoryBlockServer::vf8 */
uint F_00db85d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb85d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x10) - *(int *)(this + 4);
  *param_1 = iVar2;
  param_1[1] = iVar2;
  param_1[2] = iVar2;
  iVar2 = *(int *)(this + 8);
  iVar1 = *(int *)(this + 0x10);
  param_1[3] = iVar2 - iVar1;
  param_1[4] = iVar2 - iVar1;
  param_1[5] = *(int *)(this + 8) - *(int *)(this + 4);
  return (uint)param_1;
}

/* ref: FUN_00db8600 */
uint F_00db8600(unsigned int gen_a0)
{
  GEN_ENTER(0xdb8600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 0xc0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x113da78));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[8])REFP(0x113da54));
  uVar2 = uVar1;
  if (uVar1 != (int)this + 0xbcU) {
    do {
      uVar2 = *(uint *)(uVar1 + 4);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xb0) + 0x10))))
                (*(int * PTR32 *)((int)this + 0xb0),uVar1,*(undefined4 *)(uVar1 + 0xc));
      uVar1 = uVar2;
    } while (uVar2 != (int)this + 0xbcU);
  }
  F_00d9b7c0((int)this + 0x9c);
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[8])REFP(0x113d9a8));
  F_00d9b7c0(this);
  return uVar2;
}

/* ref: FUN_00db8660 */
uint F_00db8660(unsigned int gen_a0)
{
  GEN_ENTER(0xdb8660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
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
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
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
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  uVar1 = (int)this + 0xbc;
  *(undefined4 *)((int)this + 0xb8) = 3;
  *(undefined4 * PTR32 *)((int)this + 0x14) = (undefined4 *)((int)this + 0xb4);
  *(uint *)((int)this + 0xc0) = uVar1;
  *(uint *)uVar1 = uVar1;
  return uVar1;
}

/* ref: FUN_00db8750 */
uint F_00db8750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb8750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  
  uVar4 = F_00db83d0(param_2);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  uVar6 = 1 << ((byte)uVar4 & 0x1f);
  *(uint *)(param_1 + 0x1c) = uVar4;
  piVar1 = (int *)((int)this + uVar4 * 4 + 0x1c);
  if ((uVar6 & *(uint *)((int)this + 0xc)) == 0) {
    *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) | uVar6;
    *piVar1 = param_1;
    *(int * PTR32 *)(param_1 + 0x18) = piVar1;
    *(int *)(param_1 + 8) = param_1;
    *(int *)(param_1 + 0xc) = param_1;
    return uVar4;
  }
  if (uVar4 == 0x1f) {
    bVar5 = 0;
  }
  else {
    bVar5 = 0x19 - (char)((int)uVar4 >> 1);
  }
  uVar6 = param_2 << (bVar5 & 0x1f);
  uVar4 = *(uint *)(*piVar1 + 4);
  iVar3 = *piVar1;
  while( true ) {
    if ((uVar4 & 0xfffffffc) == param_2) {
      uVar4 = *(uint *)(iVar3 + 8);
      *(int *)(uVar4 + 0xc) = param_1;
      *(int *)(iVar3 + 8) = param_1;
      *(int *)(param_1 + 0xc) = iVar3;
      *(uint *)(param_1 + 8) = uVar4;
      *(undefined4 *)(param_1 + 0x18) = 0;
      return uVar4;
    }
    piVar1 = ((int *)GEN_TOP((iVar3 + 0x10 + ((int)uVar6 >> 0x1f) * -4)));
    iVar2 = *piVar1;
    uVar6 = uVar6 * 2;
    if (iVar2 == 0) break;
    uVar4 = *(uint *)(iVar2 + 4);
    iVar3 = iVar2;
  }
  *piVar1 = param_1;
  *(int *)(param_1 + 0x18) = iVar3;
  *(int *)(param_1 + 8) = param_1;
  *(int *)(param_1 + 0xc) = param_1;
  return uVar6;
}

/* ref: FUN_00db8810 */
uint F_00db8810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb8810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint * puVar4;
  uint * puVar5;
  
  uVar3 = *(uint *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + 0x18);
  if (uVar3 == param_1) {
    uVar3 = *(uint *)(param_1 + 0x14);
    puVar5 = (uint *)(param_1 + 0x14);
    if (uVar3 == 0) {
      uVar3 = *(uint *)(param_1 + 0x10);
      puVar5 = (uint *)(param_1 + 0x10);
      if (uVar3 == 0) goto LAB_00db8863;
    }
    while ((puVar4 = (uint *)(uVar3 + 0x14), *(int *)(uVar3 + 0x14) != 0 ||
           (puVar4 = (uint *)(uVar3 + 0x10), *(int *)(uVar3 + 0x10) != 0))) {
      puVar5 = puVar4;
      uVar3 = *puVar4;
    }
    *puVar5 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 8);
    *(uint *)(iVar2 + 0xc) = uVar3;
    *(int *)(uVar3 + 8) = iVar2;
  }
LAB_00db8863: ;
  if (iVar1 != 0) {
    if (param_1 == *((uint *)GEN_TOP(((int)this + *(int *)(param_1 + 0x1c) * 4 + 0x1c)))) {
      *((uint *)GEN_TOP(((int)this + *(int *)(param_1 + 0x1c) * 4 + 0x1c))) = uVar3;
      if (uVar3 == 0) {
        uVar3 = ~(1 << ((byte)*(undefined4 *)(param_1 + 0x1c) & 0x1f));
        *(uint *)((int)this + 0xc) = *(uint *)((int)this + 0xc) & uVar3;
        return uVar3;
      }
    }
    else {
      if (*(uint *)(iVar1 + 0x10) == param_1) {
        *(uint *)(iVar1 + 0x10) = uVar3;
      }
      else {
        *(uint *)(iVar1 + 0x14) = uVar3;
      }
      if (uVar3 == 0) {
        return 0;
      }
    }
    *(int *)(uVar3 + 0x18) = iVar1;
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 != 0) {
      *(int *)(uVar3 + 0x10) = iVar1;
      *(uint *)(iVar1 + 0x18) = uVar3;
    }
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 != 0) {
      *(int *)(uVar3 + 0x14) = iVar1;
      *(uint *)(iVar1 + 0x18) = uVar3;
    }
  }
  return uVar3;
}

/* ref: FUN_00db88d0 */
uint F_00db88d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb88d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int local_c;
  int local_8;
  
  local_8 = 0;
  uVar9 = -param_1;
  uVar4 = F_00db83d0(param_1);
  iVar5 = *(int *)((int)this + uVar4 * 4 + 0x1c);
  if (iVar5 != 0) {
    if (uVar4 == 0x1f) {
      bVar6 = 0;
    }
    else {
      bVar6 = 0x19 - (char)((int)uVar4 >> 1);
    }
    iVar8 = param_1 << (bVar6 & 0x1f);
    local_c = 0;
    while ((uVar7 = (*(uint *)(iVar5 + 4) & 0xfffffffc) - param_1, uVar9 <= uVar7 ||
           (uVar9 = uVar7, local_8 = iVar5, uVar7 != 0))) {
      iVar2 = *(int *)(iVar5 + 0x14);
      iVar3 = *((int *)GEN_TOP((iVar5 + 0x10 + (iVar8 >> 0x1f) * -4)));
      if ((iVar2 != 0) && (iVar2 != iVar3)) {
        local_c = iVar2;
      }
      iVar5 = local_c;
      if (iVar3 == 0) break;
      iVar8 = iVar8 * 2;
      iVar5 = iVar3;
    }
    if (iVar5 == 0) {
      if (local_8 == 0) goto LAB_00db8968;
    }
    else {
      do {
        uVar4 = (*(uint *)(iVar5 + 4) & 0xfffffffc) - param_1;
        if (uVar4 < uVar9) {
          uVar9 = uVar4;
          local_8 = iVar5;
        }
        iVar8 = *(int *)(iVar5 + 0x10);
        if (*(int *)(iVar5 + 0x10) == 0) {
          iVar8 = *(int *)(iVar5 + 0x14);
        }
joined_r0x00db8991: ;
        iVar5 = iVar8;
      } while (iVar5 != 0);
      if (local_8 == 0) {
        return 0;
      }
    }
    iVar5 = local_8 + param_1;
    F_00db8810(this,local_8);
    if (uVar9 < 0x100) {
      *(uint *)(local_8 + 4) = uVar9 + param_1 | 3;
      puVar1 = (uint *)(uVar9 + param_1 + 4 + local_8);
      *puVar1 = *puVar1 | 1;
      *(int *)((int)this + 0xd4) = *(int *)((int)this + 0xd4) + uVar9 + param_1;
      *(int *)((int)this + 0xd8) = *(int *)((int)this + 0xd8) + (uVar9 - 0x10) + param_1;
      return local_8 + 0x10;
    }
    *(uint *)(local_8 + 4) = param_1 | 3;
    *(int *)((int)this + 0xd4) = *(int *)((int)this + 0xd4) + param_1;
    *(int *)((int)this + 0xd8) = *(int *)((int)this + 0xd8) + (param_1 - 0x10);
    *(uint *)(iVar5 + 4) = uVar9 | 1;
    *(uint *)(iVar5 + uVar9) = uVar9;
    F_00db8750(this,iVar5,uVar9);
    return local_8 + 0x10;
  }
LAB_00db8968: ;
  iVar8 = 1 << ((byte)uVar4 & 0x1f);
  uVar4 = (iVar8 * -2 | iVar8 * 2) & *(uint *)((int)this + 0xc);
  iVar8 = iVar5;
  if (uVar4 == 0) goto joined_r0x00db8991;
  uVar4 = F_00db8440(-uVar4 & uVar4);
  iVar8 = *(int *)((int)this + uVar4 * 4 + 0x1c);
  goto joined_r0x00db8991;
}

/* ref: FUN_00db8a60 */
uint F_00db8a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb8a60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = param_1;
  uVar3 = param_2;
  while (iVar1 = iVar2, iVar1 != 0) {
    uVar4 = *(uint *)(iVar1 + 4) & 0xfffffffc;
    if (uVar3 < uVar4) {
      uVar3 = uVar4;
    }
    iVar2 = *(int *)(iVar1 + 0x14);
    if (*(int *)(iVar1 + 0x14) == 0) {
      iVar2 = *(int *)(iVar1 + 0x10);
    }
  }
  return uVar3;
}

/* ref: FUN_00db8aa0 */
uint F_00db8aa0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb8aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  uVar2 = *(uint *)((int)this + 0x18);
  uVar1 = F_00db83d0(uVar2);
  iVar3 = 0x1f;
  if ((int)uVar1 < 0x20) {
    piVar4 = (int *)((int)this + 0x98);
    do {
      if (*piVar4 != 0) {
        uVar2 = F_00db8a60(*piVar4,uVar2);
        return uVar2;
      }
      iVar3 = iVar3 + -1;
      piVar4 = piVar4 + -1;
    } while ((int)uVar1 <= iVar3);
  }
  return uVar2;
}

/* ref: FUN_00db8af0 */
uint F_00db8af0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb8af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *((uint *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(uint *)((int)this + 0x18) | 1;
  uVar1 = *(uint *)((int)this + 0x18);
  *((uint *)GEN_TOP((uVar1 + *(int *)((int)this + 0x14)))) = uVar1;
  return uVar1;
}

/* ref: FUN_00db8b10 */
uint F_00db8b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb8b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  
  *(int *)((int)this + 0xd4) = *(int *)((int)this + 0xd4) + param_1;
  *(int *)((int)this + 0xd8) = *(int *)((int)this + 0xd8) + (param_1 - 0x10);
  iVar2 = *(int *)((int)this + 0x14);
  puVar1 = (uint *)(iVar2 + param_1);
  uVar3 = *(int *)((int)this + 0x18) - param_1;
  *(uint *)((int)this + 0x18) = uVar3;
  *(uint * PTR32 *)((int)this + 0x14) = puVar1;
  *puVar1 = param_1;
  puVar1[1] = uVar3 | 1;
  *(uint *)(iVar2 + 4) = param_1 | 3;
  return iVar2 + 0x10;
}

/* ref: FUN_00db8b50 */
uint F_00db8b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb8b50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  iVar1 = *(int *)((int)this + 0xc0);
  uVar2 = *(undefined4 *)(iVar1 + 0xc);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  bVar4 = F_00db8570((undefined *)((int)this + 0x9c),iVar1,uVar2,param_2,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  if (bVar4 == 0) {
    *param_1 = 0;
    return (uint)param_1;
  }
  uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 0x14) + 4 + *(int *)((int)this + 0x18))));
  uVar5 = (int)(*(undefined * PTR32 *)(gen_frame + 0x8)) - *(int *)(iVar1 + 0xc) & 0xfffffff0;
  *(uint *)((int)this + 0x18) = *(int *)((int)this + 0x18) + uVar5;
  *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + uVar5;
  *(undefined * PTR32 *)(iVar1 + 0xc) = (*(undefined * PTR32 *)(gen_frame + 0x8));
  *((uint *)GEN_TOP((*(int *)((int)this + 0x14) + 4 + *(int *)((int)this + 0x18)))) =
       (uVar3 & 0xfffffffc) - uVar5 | 2;
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00db8be0 */
uint F_00db8be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb8be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if ((*(int *)((int)this + 0xc) != 0) && (uVar1 = F_00db88d0(this,param_1), uVar1 != 0)) {
    return uVar1;
  }
  if (*(uint *)((int)this + 0x18) <= param_1 + 0x100U) {
    return 0;
  }
  uVar1 = F_00db8b10(this,param_1);
  return uVar1;
}

/* ref: hkLargeBlockAllocator::vf1 */
uint F_00db8c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb8c20u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined * phVar2;
  int iVar3;
  uint uVar4;
  char * pcVar5;
  undefined * phVar6;
  uint uVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar7 = (*(int *)&gen_args[1]) + 0x1fU & 0xfffffff0;
  if (uVar7 < 0x100) {
    uVar7 = 0x100;
  }
  uVar4 = F_00db8be0((*(undefined * PTR32 *)&gen_args[0]),uVar7);
  if (uVar4 == 0) {
    if ((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xa0))) == 0) ||
       (phVar6 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc0))), phVar6 == (*(undefined * PTR32 *)&gen_args[0]) + 0xbc)) {
      piVar1 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb0)));
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)(uVar7 + 0x138);
      phVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,&(*(undefined * PTR32 *)(gen_frame + 0x8)))));
      if (phVar6 == (undefined *)0x0) {
        piVar1 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8)));
        if (piVar1 == (int *)0x0) {
          return 0;
        }
        ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,uVar7);
        uVar4 = F_00db8be0((*(undefined * PTR32 *)&gen_args[0]),uVar7);
        if (uVar4 != 0) {
          return uVar4;
        }
        piVar1 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb0)));
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)(uVar7 + 0x138);
        phVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,&(*(undefined * PTR32 *)(gen_frame + 0x8)))));
        if (phVar6 == (undefined *)0x0) {
          ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) + 8))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))),uVar7);
          return 0;
        }
      }
      *(int *)(phVar6 + 8) = 0;
      *(undefined * PTR32 *)(phVar6 + 0xc) = (*(undefined * PTR32 *)(gen_frame + 0x8));
      *(undefined * PTR32 *)(phVar6 + 0x10) = phVar6 + 0x18;
      *(undefined * PTR32 *)(phVar6 + 0x14) = phVar6 + (int)(*(undefined * PTR32 *)(gen_frame + 0x8));
      *(uint *)(phVar6 + 0x14) = *(uint *)(phVar6 + 0x14) & 0xfffffff0;
      *(uint *)(phVar6 + 0x10) = (uint)(phVar6 + 0x27) & 0xfffffff0;
      for (phVar2 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc0)));
          (phVar2 != (*(undefined * PTR32 *)&gen_args[0]) + 0xbc && (phVar2 < phVar6));
          phVar2 = *(undefined * PTR32 *)(phVar2 + 4)) {
      }
      *(undefined * PTR32 *)(phVar6 + 4) = phVar2;
      iVar3 = *(int *)phVar2;
      *(int *)phVar6 = iVar3;
      *(undefined * PTR32 *)(iVar3 + 4) = phVar6;
      *(undefined * PTR32 *)phVar2 = phVar6;
      if (*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x14))) != (*(undefined * PTR32 *)&gen_args[0]) + 0xb4) {
        F_00db8af0((*(undefined * PTR32 *)&gen_args[0]));
        F_00db8750((*(undefined * PTR32 *)&gen_args[0]),*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x14))),*((uint *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x14))) + 4))) & 0xfffffffc);
      }
      *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = (*(int *)(phVar6 + 0x14) - *(int *)(phVar6 + 0x10)) + -0x10;
      *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = *(int *)(phVar6 + 0x10);
      F_00db8af0((*(undefined * PTR32 *)&gen_args[0]));
      iVar3 = *(int *)(phVar6 + 0x14);
      *(undefined4 *)(iVar3 + -0xc) = 2;
      if (*(undefined * PTR32 *)(phVar6 + 4) != (*(undefined * PTR32 *)&gen_args[0]) + 0xbc) {
        *(uint *)(iVar3 + -0xc) =
             *((int *)GEN_TOP((*(undefined * PTR32 *)(phVar6 + 4) + 0x10))) - (iVar3 + -0x10) | 2;
      }
      if (*(undefined * PTR32 *)phVar6 != (*(undefined * PTR32 *)&gen_args[0]) + 0xbc) {
        iVar3 = *((int *)GEN_TOP((*(undefined * PTR32 *)phVar6 + 0x14)));
        *(uint *)(iVar3 + -0xc) =
             *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x14))) - (iVar3 + -0x10) | *(uint *)(iVar3 + -0xc) & 3;
      }
    }
    else {
      pcVar5 = (char *)F_00db8b50((*(undefined * PTR32 *)&gen_args[0]),(int)&(*(int *)&gen_args[1]) + 3,*(int *)(phVar6 + 0xc) + uVar7);
      if (*pcVar5 == '\0') {
        piVar1 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8)));
        if (piVar1 == (int *)0x0) {
          return 0;
        }
        ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,uVar7);
        uVar4 = F_00db8be0((*(undefined * PTR32 *)&gen_args[0]),uVar7);
        if (uVar4 != 0) {
          return uVar4;
        }
        pcVar5 = (char *)F_00db8b50((*(undefined * PTR32 *)&gen_args[0]),(int)&(*(int *)&gen_args[1]) + 3,*(int *)(phVar6 + 0xc) + uVar7);
        if (*pcVar5 == '\0') {
          ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) + 8))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))),uVar7);
          return 0;
        }
      }
    }
    uVar4 = F_00db8b10((*(undefined * PTR32 *)&gen_args[0]),uVar7);
  }
  return uVar4;
}

/* ref: FUN_00db8e30 */
unsigned int F_00db8e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb8e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00db8e40 */
uint F_00db8e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb8e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: FUN_00db8e50 */
uint F_00db8e50(void)
{
  GEN_ENTER(0xdb8e50u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00db8e60 */
uint F_00db8e60(unsigned int gen_a0)
{
  GEN_ENTER(0xdb8e60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xd4);
}

/* ref: FUN_00db8e70 */
byte F_00db8e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb8e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)((int)this + -4);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + -4) + 4))))(piVar1,param_1);
  if (uVar2 != 0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,uVar2,param_1);
    return 1;
  }
  return 0;
}

/* ref: FUN_00db8eb0 */
uint F_00db8eb0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb8eb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00db8af0((undefined *)((int)this + -4));
  piVar2 = *(int * PTR32 *)((int)this + 0xbc);
  if (*(int * PTR32 *)((int)this + 0xbc) != (int *)((int)this + 0xb8)) {
    do {
      iVar6 = piVar2[4];
      if (((*(uint *)(iVar6 + 4) >> 1 & 1) == 0) &&
         ((*(uint *)(iVar6 + 4) & 0xfffffffc) + iVar6 == piVar2[5] + -0x10)) {
        piVar5 = (int *)piVar2[1];
        *(int * PTR32 *)(*piVar2 + 4) = piVar5;
        *(int *)piVar2[1] = *piVar2;
        if (iVar6 == *(int *)((int)this + 0x10)) {
          *(int *)((int)this + 0x10) = (int)this + 0xb0;
          *(undefined4 *)((int)this + 0x14) = 0;
        }
        else {
          F_00db8810((undefined *)((int)this + -4),iVar6);
        }
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xac) + 0x10))))
                  (*(int * PTR32 *)((int)this + 0xac),piVar2,piVar2[3]);
      }
      else {
        piVar5 = (int *)piVar2[1];
      }
      piVar2 = piVar5;
    } while (piVar5 != (int *)((int)this + 0xb8));
  }
  uVar1 = (int)this + 0xb8;
  if (*(uint *)((int)this + 0xbc) != uVar1) {
    if (*(int *)((int)this + 0x9c) == 0) {
      if (*(int *)((int)this + 0x10) != (int)this + 0xb0) {
        F_00db8750((undefined *)((int)this + -4),*(int *)((int)this + 0x10),
                     *(undefined4 *)((int)this + 0x14));
        *(int *)((int)this + 0x10) = (int)this + 0xb0;
        *(undefined4 *)((int)this + 0x14) = 0;
      }
      uVar4 = *(uint *)((int)this + 0xbc);
      iVar6 = 0;
      if (uVar4 != uVar1) {
        do {
          piVar2 = ((int *)GEN_TOP((*(int *)(uVar4 + 0x14) + -0x10)));
          if (((*((byte *)GEN_TOP((*(int *)(uVar4 + 0x14) + -0xc))) & 1) == 0) &&
             ((iVar3 = (int)piVar2 - *piVar2, iVar6 == 0 ||
              ((*(uint *)(iVar6 + 4) & 0xfffffffc) < (*(uint *)(iVar3 + 4) & 0xfffffffc))))) {
            iVar6 = iVar3;
          }
          uVar4 = *(uint *)(uVar4 + 4);
        } while (uVar4 != (int)this + 0xb8U);
        if (iVar6 != 0) {
          F_00db8810((undefined *)((int)this + -4),iVar6);
          *(int *)((int)this + 0x10) = iVar6;
          uVar1 = *(uint *)(iVar6 + 4) & 0xfffffffc;
          *(uint *)((int)this + 0x14) = uVar1;
          return uVar1;
        }
      }
      uVar1 = (int)this + 0xb0;
      *(uint *)((int)this + 0x10) = uVar1;
      *(undefined4 *)((int)this + 0x14) = 0;
    }
    else if (0x7fff < *(uint *)((int)this + 0x14)) {
      uVar1 = F_00db8b50((undefined *)((int)this + -4),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3,
                           (*(int *)((int)this + 0x10) - *((int *)GEN_TOP((*(int *)((int)this + 0xbc) + 0x10)))
                           ) + 0x120);
      return uVar1;
    }
    return uVar1;
  }
  *(int *)((int)this + 0x10) = (int)this + 0xb0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return uVar1;
}

/* ref: FUN_00db9040 */
uint F_00db9040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb9040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_2 & 0xf) != 0) {
    *param_1 = 0;
    return (uint)param_1;
  }
  if ((*(uint *)(param_2 - 0xc) >> 1 & 1) == 0) {
    *param_1 = 0;
    return (uint)param_1;
  }
  iVar2 = *(int *)((int)this + 0xc0);
  do {
    if (iVar2 == (int)this + 0xbc) {
LAB_00db9095: ;
      *param_1 = 0;
      return (uint)param_1;
    }
    uVar3 = *(uint *)(iVar2 + 0x10);
    if ((uVar3 <= param_2) && (param_2 < *(uint *)(iVar2 + 0x14))) {
      uVar1 = *(uint *)(iVar2 + 0x14) - 0x10;
      if (uVar3 != uVar1) {
        do {
          if (uVar3 == param_2 - 0x10) {
            *param_1 = 1;
            return (uint)param_1;
          }
          uVar3 = uVar3 + (*(uint *)(uVar3 + 4) & 0xfffffffc);
        } while (uVar3 != uVar1);
        *param_1 = 0;
        return (uint)param_1;
      }
      goto LAB_00db9095;
    }
    iVar2 = *(int *)(iVar2 + 4);
  } while( true );
}

/* ref: hkLargeBlockAllocator::vf2 */
unsigned int F_00db90e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb90e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  
  if (param_1 != 0) {
    piVar5 = (int *)(param_1 + -0x10);
    uVar4 = *(uint *)(param_1 + -0xc) & 0xfffffffc;
    *(uint *)(this + 0xd4) = *(int *)(this + 0xd4) - uVar4;
    *(uint *)(this + 0xd8) =
         *(int *)(this + 0xd8) + (0x10 - (*(uint *)(param_1 + -0xc) & 0xfffffffc));
    iVar1 = uVar4 + (int)piVar5;
    if ((*(byte *)(param_1 + -0xc) & 1) == 0) {
      iVar2 = *piVar5;
      piVar5 = (int *)((int)piVar5 - iVar2);
      F_00db8810(this,piVar5);
      uVar4 = uVar4 + iVar2;
    }
    uVar3 = *(uint *)(iVar1 + 4);
    if ((uVar3 >> 1 & 1) == 0) {
      if (iVar1 == *(int *)(this + 0x14)) {
        iVar1 = *(int *)(this + 0x18);
        *(uint *)(this + 0x18) = iVar1 + uVar4;
        *(int * PTR32 *)(this + 0x14) = piVar5;
        piVar5[1] = iVar1 + uVar4 | 1;
        return 0;
      }
      uVar4 = uVar4 + (uVar3 & 0xfffffffc);
      F_00db8810(this,iVar1);
      piVar5[1] = uVar4 | 1;
    }
    else {
      *(uint *)(iVar1 + 4) = uVar3 & 0xfffffffe;
      piVar5[1] = uVar4 | 1;
    }
    *(uint *)(uVar4 + (int)piVar5) = uVar4;
    F_00db8750(this,piVar5,uVar4);
  }
  return 0;
}

/* ref: hkLargeBlockAllocator::vf9 */
uint F_00db91a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb91a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return (*(uint *)(param_1 + -0xc) & 0xfffffffc) - 0x10;
}

/* ref: FUN_00db91c0 */
unsigned int F_00db91c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb91c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * param_1 = (code *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  *((uint *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(uint *)((int)this + 0x18) | 1;
  for (iVar1 = *(int *)((int)this + 0xc0); iVar1 != (int)this + 0xbc; iVar1 = *(int *)(iVar1 + 4)) {
    iVar2 = *(int *)(iVar1 + 0x14);
    for (iVar4 = *(int *)(iVar1 + 0x10); iVar4 != iVar2 + -0x10;
        iVar4 = iVar4 + (uVar3 & 0xfffffffc)) {
      uVar3 = *(uint *)(iVar4 + 4);
      if ((uVar3 >> 1 & 1) != 0) {
        (*param_1)(iVar4 + 0x10,(*(uint *)(iVar4 + 4) & 0xfffffffc) - 0x10,param_2);
      }
    }
  }
  return 0;
}

/* ref: FUN_00db9250 */
uint F_00db9250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb9250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 uVar2;
  
  *((uint *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(uint *)((int)this + 0x18) | 1;
  iVar1 = *(int *)((int)this + 0xc0);
  if (iVar1 == (int)this + 0xbc) {
    *param_1 = 0;
    return (uint)param_1;
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x10);
  param_1[1] = iVar1;
  iVar1 = *(int *)(iVar1 + 0x14);
  *param_1 = uVar2;
  param_1[2] = iVar1 + -0x10;
  return (uint)param_1;
}

/* ref: FUN_00db92a0 */
uint F_00db92a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb92a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
LAB_00db92d3: ;
    *param_1 = 0;
    return (uint)param_1;
  }
  iVar1 = iVar1 + (*(uint *)(iVar1 + 4) & 0xfffffffc);
  *param_2 = iVar1;
  if (iVar1 == param_2[2]) {
    iVar1 = *(int *)(param_2[1] + 4);
    if (iVar1 == (int)this + 0xbc) {
      *param_2 = 0;
      goto LAB_00db92d3;
    }
    param_2[1] = iVar1;
    *param_2 = *(int *)(iVar1 + 0x10);
    param_2[2] = *(int *)(iVar1 + 0x14) + -0x10;
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00db9300 */
uint F_00db9300(unsigned int gen_a0)
{
  GEN_ENTER(0xdb9300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  F_00db8af0(this);
  for (iVar1 = *(int *)((int)this + 0xc0); iVar1 != (int)this + 0xbc; iVar1 = *(int *)(iVar1 + 4)) {
    for (iVar3 = *(int *)(iVar1 + 0x10); iVar3 != *(int *)(iVar1 + 0x14) + -0x10;
        iVar3 = iVar3 + (uVar2 & 0xfffffffc)) {
      uVar2 = *(uint *)(iVar3 + 4);
      if ((uVar2 >> 1 & 1) != 0) {
        uVar4 = uVar4 + (uVar2 & 0xfffffffc);
      }
    }
  }
  return uVar4;
}

/* ref: FUN_00db9360 */
uint F_00db9360(unsigned int gen_a0)
{
  GEN_ENTER(0xdb9360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  for (iVar1 = *(int *)((int)this + 0xc0); iVar1 != (int)this + 0xbc; iVar1 = *(int *)(iVar1 + 4)) {
    uVar2 = uVar2 + *(int *)(iVar1 + 0xc);
  }
  return uVar2;
}

/* ref: FUN_00db9380 */
byte F_00db9380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb9380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  byte bVar2;
  uint uVar3;
  
  puVar1 = (uint *)(param_1 - 0x10);
  if (((param_1 & 0xf) == 0) && (*(uint * PTR32 *)((int)this + 0x10) <= puVar1)) {
    bVar2 = 1;
    if (((*(uint *)(param_1 - 0xc) >> 1 & 1) != 0) &&
       ((uVar3 = *(uint *)(param_1 - 0xc) & 0xfffffffc, 0xf < uVar3 &&
        ((*(byte *)(uVar3 + 4 + (int)puVar1) & 1) != 0)))) {
      if ((*(byte *)(param_1 - 0xc) & 1) == 0) {
        uVar3 = *((uint *)GEN_TOP(((int)puVar1 + (4 - *puVar1))));
        if (((uVar3 >> 1 & 1) != 0) || ((uVar3 & 0xfffffffc) != *puVar1)) {
          bVar2 = 0;
        }
      }
      return bVar2;
    }
  }
  return 0;
}

/* ref: FUN_00db93e0 */
uint F_00db93e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb93e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  if (((((param_2 & 0xf) == 0) && ((*(uint *)(param_2 + 4) >> 1 & 1) == 0)) &&
      (*(uint *)((int)this + 0x10) <= param_2)) &&
     (((uVar1 = *(uint *)(param_2 + 4) & 0xfffffffc, (*(byte *)(uVar1 + 4 + param_2) & 1) == 0 &&
       ((*(uint *)(uVar1 + 4 + param_2) >> 1 & 1) != 0)) && ((*(byte *)(param_2 + 4) & 1) != 0)))) {
    *param_1 = 1;
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00db9430 */
uint F_00db9430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb9430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  byte bVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_3) {
    do {
      bVar1 = F_00db9380(this,*(undefined4 *)(param_2 + iVar2 * 4));
      if (bVar1 == 0) {
        *param_1 = 0;
        return (uint)param_1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00db9480 */
uint F_00db9480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb9480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 + 0xfU & 0xfffffff0;
  uVar2 = param_1 + param_2 & 0xfffffff0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x113daa8));
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)((int)this + 8) = uVar2;
  *(uint *)((int)this + 0xc) = uVar2;
  *(uint *)((int)this + 0x10) = uVar1;
  return (uint)this;
}

/* ref: FUN_00db94b0 */
uint F_00db94b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb94b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[8])REFP(0x113d9a8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x113da78));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[8])REFP(0x113da54));
  *(undefined4 *)((int)this + 8) = 0;
  F_00db9480((undefined *)((int)this + 0x9c),0,0);
  *(undefined4 *)((int)this + 0xb0) = param_1;
  F_00db8660(this);
  return (uint)this;
}

/* ref: FUN_00db9500 */
uint F_00db9500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb9500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[8])REFP(0x113d9a8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x113da78));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[8])REFP(0x113da54));
  *(undefined4 *)((int)this + 8) = 0;
  F_00db9480((undefined *)((int)this + 0x9c),param_1,param_2);
  *(undefined * PTR32 *)((int)this + 0xb0) = (undefined *)((int)this + 0x9c);
  F_00db8660(this);
  return (uint)this;
}

/* ref: FUN_00db9550 */
uint F_00db9550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb9550u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  code * pcVar1;
  code * pcVar2;
  undefined4 uVar3;
  
  pcVar2 = (*(gen_code32 *)&gen_args[1]);
  F_00db9250(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + -4))),((int *)(gen_frame + 0x0)));
  uVar3 = (*(undefined4 *)&gen_args[2]);
  pcVar1 = (*(gen_code32 *)&gen_args[1]);
  while (((int *)(gen_frame + 0x0))[0] != 0) {
    gen_piece_set(&(*(gen_code32 *)&gen_args[1]), 1, 3, (unsigned long long)((undefined3)((uint)((int)(uintptr_t)pcVar1) >> 8)));
    (*(gen_code32 *)&gen_args[1]) = ((code *)GEN_TOP((CONCAT31(GEN_PIECE(&(*(gen_code32 *)&gen_args[1]), 1, 3),(char)(*(uint *)(((int *)(gen_frame + 0x0))[0] + 4) >> 1)) & 0xffffff01)))
    ;
    (*pcVar2)(((int *)(gen_frame + 0x0))[0] + 0x10,*(uint *)(((int *)(gen_frame + 0x0))[0] + 4) & 0xfffffffc,(*(gen_code32 *)&gen_args[1]),0,uVar3);
    F_00db92a0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + -4))),(int)&(*(undefined4 *)&gen_args[2]) + 3,((int *)(gen_frame + 0x0)));
    pcVar1 = (*(gen_code32 *)&gen_args[1]);
  }
  return 0;
}

/* ref: hkLargeBlockAllocator::vf8 */
uint F_00db95c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb95c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00db9360(this);
  *param_1 = uVar1;
  param_1[1] = *(uint *)(this + 0xd8);
  param_1[3] = uVar1 - *(int *)(this + 0xd8);
  uVar1 = F_00db8aa0(this);
  param_1[5] = uVar1;
  param_1[4] = 0;
  return uVar1;
}

/* ref: FUN_00db9600 */
uint F_00db9600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb9600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_3,4);
  }
  puVar1 = (undefined4 *)(*param_3 + param_3[1] * 4);
  *puVar1 = param_1;
  param_3[1] = param_3[1] + 1;
  return (uint)puVar1;
}

/* ref: FUN_00db9650 */
uint F_00db9650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb9650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00db96f0((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00db9660 */
uint F_00db9660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb9660u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *in_ecx != 0;
  return param_2;
}

/* ref: FUN_00db9680 */
uint F_00db9680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb9680u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  *param_2 = (byte)(*(uint *)(*in_ecx + 4) >> 1) & 1;
  return (uint)param_2;
}

/* ref: hkLargeBlockAllocator::FixedMemoryBlockServer::vf1 */
uint F_00db96b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb96b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: hkLargeBlockAllocator::FixedMemoryBlockServer::vf2 */
unsigned int F_00db96c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb96c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: hkLargeBlockAllocator::FixedMemoryBlockServer::vf9 */
uint F_00db96d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb96d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  return param_2;
}

/* ref: hkLargeBlockAllocator::FixedMemoryBlockServer::vf0 */
uint F_00db96e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb96e0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d9b7c0(in_ecx);
  return in_ecx;
}

/* ref: hkLargeBlockAllocator::vf0 */
uint F_00db96f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb96f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00db8600(this);
  return (uint)this;
}

/* ref: FUN_00db9700 */
uint F_00db9700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb9700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: hkMemoryTrackStreamReader::vf5 */
uint F_00db9750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb9750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: hkMemoryTrackStreamReader::vf11 */
uint F_00db9760(unsigned int gen_a0)
{
  GEN_ENTER(0xdb9760u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 8) + 8)));
}

/* ref: FUN_00db9780 */
uint F_00db9780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb9780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)((int)this + 8) / *(int *)this - *(int *)((int)this + 0xc);
  uVar1 = (*(int *)((int)this + 0xc) + iVar3) * *(int *)this;
  iVar2 = *(int *)((int)this + 8) - uVar1;
  if (0 < (int)param_2) {
    while( true ) {
      if (iVar3 < *(int *)((int)this + 0x14) + -1) {
        iVar4 = *(int *)this;
      }
      else {
        iVar4 = *(int *)((int)this + 4);
      }
      iVar4 = iVar4 - iVar2;
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + iVar3 * 4))) + iVar2;
      if ((int)param_2 <= iVar4) break;
      F_00da1010(param_1,iVar2,iVar4);
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + iVar4;
      param_1 = param_1 + iVar4;
      param_2 = param_2 - iVar4;
      iVar3 = iVar3 + 1;
      iVar2 = 0;
      if ((int)param_2 < 1) {
        return param_2;
      }
    }
    F_00da1010(param_1,iVar2,param_2);
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_2;
    uVar1 = param_2;
  }
  return uVar1;
}

/* ref: FUN_00db9820 */
uint F_00db9820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb9820u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x113dad8));
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = 0xffffffff;
  *(undefined1 *)((int)this + 0x14) = (undefined1)param_3;
  return (uint)this;
}

/* ref: FUN_00db9860 */
unsigned int F_00db9860(unsigned int gen_a0)
{
  GEN_ENTER(0xdb9860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  int iVar4;
  undefined4 * puVar5;
  int local_8;
  
  local_8 = (*(int *)((int)this + 8) - *(int *)((int)this + 0xc) * *(int *)this) / *(int *)this;
  if (0 < local_8) {
    do {
      uVar1 = *(undefined4 *)this;
      uVar2 = **(undefined4 * PTR32 *)((int)this + 0x10);
      pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar3 + 0x2c),uVar2,uVar1);
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + -1;
      iVar4 = *(int *)((int)this + 0x14) * 4;
      puVar5 = *(undefined4 * PTR32 *)((int)this + 0x10);
      if (0 < iVar4) {
        iVar4 = (iVar4 - 1U >> 2) + 1;
        do {
          *puVar5 = puVar5[1];
          puVar5 = puVar5 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return 0;
}

/* ref: hkArrayStreamWriter::vf9 */
uint F_00db98f0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb98f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  
  *((undefined4 *)GEN_TOP((*(int *)(this + 8) + 4))) = 0;
  iVar1 = *(int *)(this + 8);
  *(undefined4 *)(this + 0xc) = 0;
  uVar3 = *(int *)(iVar1 + 4) + 1;
  uVar4 = *(uint *)(iVar1 + 8) & 0x3fffffff;
  if ((int)uVar4 < (int)uVar3) {
    uVar4 = uVar4 * 2;
    if ((int)uVar3 < (int)uVar4) {
      uVar3 = uVar4;
    }
    bVar2 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),iVar1,uVar3,1);
    uVar3 = CONCAT31(extraout_var,bVar2);
  }
  *((undefined1 *)GEN_TOP(((*(int * PTR32 *)(this + 8))[1] + **(int * PTR32 *)(this + 8)))) = 0;
  return uVar3;
}

/* ref: hkArrayStreamWriter::vf4 */
uint F_00db9940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb9940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = *(int * PTR32 *)(this + 8);
  iVar3 = piVar2[1];
  if (iVar3 - *(int *)(this + 0xc) < (int)param_2) {
    iVar1 = param_2 + (iVar3 - (iVar3 - *(int *)(this + 0xc)));
    iVar3 = iVar1 + 1;
    if ((int)(piVar2[2] & 0x3fffffffU) < iVar3) {
      iVar4 = (piVar2[2] & 0x3fffffffU) * 2;
      if (iVar4 <= iVar3) {
        iVar4 = iVar3;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar2,iVar4,1);
    }
    *((int *)GEN_TOP((*(int *)(this + 8) + 4))) = iVar1;
    *((undefined1 *)GEN_TOP((iVar1 + **(int * PTR32 *)(this + 8)))) = 0;
  }
  else if (iVar3 < (int)(piVar2[2] & 0x3fffffffU)) {
    *(undefined1 *)(iVar3 + *piVar2) = 0;
  }
  F_00da1010(**(int * PTR32 *)(this + 8) + *(int *)(this + 0xc),param_1,param_2);
  *(uint *)(this + 0xc) = *(int *)(this + 0xc) + param_2;
  return param_2;
}

/* ref: FUN_00db99d0 */
uint F_00db99d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb99d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  LPVOID pvVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  uVar2 = *(int *)((int)this + 0x14) - 1;
  if (0 < (int)param_2) {
    local_8 = uVar2 * 4;
    piVar1 = (int *)((int)this + 0x10);
    while( true ) {
      iVar4 = *(int *)this;
      iVar5 = iVar4 - *(int *)((int)this + 4);
      if (iVar5 == 0) {
        pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 4))))
                          (*(int * PTR32 *)((int)pvVar3 + 0x2c),iVar4);
        if (*(uint *)((int)this + 0x14) == (*(uint *)((int)this + 0x18) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,4);
        }
        *((uint *)GEN_TOP((*piVar1 + *(int *)((int)this + 0x14) * 4))) = uVar2;
        *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
        local_8 = local_8 + 4;
        iVar5 = *(int *)this;
        *(undefined4 *)((int)this + 4) = 0;
      }
      iVar4 = *(int *)(local_8 + *piVar1) + *(int *)((int)this + 4);
      if ((int)param_2 <= iVar5) break;
      F_00da1010(iVar4,param_1,iVar5);
      param_1 = param_1 + iVar5;
      param_2 = param_2 - iVar5;
      *(undefined4 *)((int)this + 4) = *(undefined4 *)this;
      if ((int)param_2 < 1) {
        return param_2;
      }
    }
    F_00da1010(iVar4,param_1,param_2);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
    uVar2 = param_2;
  }
  return uVar2;
}

/* ref: hkMemoryTrackStreamWriter::vf4 */
uint F_00db9ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb9ab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  F_00db99d0(*(undefined * PTR32 *)(this + 8),param_1,param_2);
  return param_2;
}

/* ref: hkArrayStreamWriter::vf7 */
uint F_00db9ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb9ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int * piVar2;
  int iVar3;
  gen_size32 _Size;
  int iVar4;
  
  iVar4 = param_1;
  if (param_2 != 0) {
    if (param_2 == 1) {
      iVar4 = *(int *)(this + 0xc) + param_1;
    }
    else {
      iVar4 = *(int *)(this + 0xc);
      if (param_2 == 2) {
        iVar4 = *((int *)GEN_TOP((*(int *)(this + 8) + 4))) - param_1;
      }
    }
  }
  if (iVar4 < 0) {
    return 1;
  }
  piVar2 = *(int * PTR32 *)(this + 8);
  if (piVar2[1] < iVar4) {
    iVar1 = iVar4 + 1;
    if ((int)(piVar2[2] & 0x3fffffffU) < iVar1) {
      iVar3 = (piVar2[2] & 0x3fffffffU) * 2;
      if (iVar3 <= iVar1) {
        iVar3 = iVar1;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar2,iVar3,1);
    }
    _Size = iVar1 - piVar2[1];
    if (0 < (int)_Size) {
      F_00c48350((undefined *)(*piVar2 + piVar2[1]),0,_Size);
    }
    piVar2[1] = iVar1;
    *((int *)GEN_TOP((*(int *)(this + 8) + 4))) = iVar4;
  }
  *(int *)(this + 0xc) = iVar4;
  return 0;
}

/* ref: FUN_00db9b80 */
uint F_00db9b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb9b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return (uint)this;
}

/* ref: FUN_00db9bb0 */
uint F_00db9bb0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb9bb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(int *)((int)this + 0x14)) {
    do {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + iVar5 * 4)));
      uVar2 = *(undefined4 *)this;
      pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar3 + 0x2c),uVar1,uVar2);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)((int)this + 0x14));
  }
  uVar4 = *(uint *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x14) = 0;
  if (-1 < (int)uVar4) {
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x10),uVar4 * 4);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = uVar1;
  return uVar4;
}

/* ref: FUN_00db9c40 */
uint F_00db9c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb9c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = param_1[5];
  if (iVar1 != 1 && -1 < iVar1 + -1) {
    iVar6 = 0;
    do {
      uVar2 = *(undefined4 *)(param_1[4] + iVar6 * 4);
      F_00db99d0(this,uVar2,*param_1);
      uVar3 = *param_1;
      pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar4 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar4 + 0x2c),uVar2,uVar3);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1 + -1);
  }
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(param_1[4] + -4 + iVar1 * 4);
    F_00db99d0(this,uVar2,param_1[1]);
    uVar3 = *param_1;
    pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar4 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar4 + 0x2c),uVar2,uVar3);
  }
  iVar1 = param_1[6];
  param_1[5] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),param_1[4],iVar1 * 4);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  uVar5 = F_00db9bb0(param_1);
  return uVar5;
}

/* ref: hkMemoryTrackStreamWriter::vf9 */
uint F_00db9d20(unsigned int gen_a0)
{
  GEN_ENTER(0xdb9d20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00db9bb0(*(undefined * PTR32 *)(this + 8));
  return uVar1;
}

/* ref: hkMemoryTrackStreamReader::vf4 */
uint F_00db9d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb9d30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  char * pcVar2;
  uint uVar3;
  uint uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  pcVar2 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)));
  if (*pcVar2 == '\0') {
    return 0;
  }
  piVar1 = *(int * PTR32 *)(this + 8);
  uVar3 = ((piVar1[5] + -1 + piVar1[3]) * *piVar1 - piVar1[2]) + piVar1[1];
  uVar4 = param_2;
  if ((int)uVar3 <= (int)param_2) {
    uVar4 = uVar3;
  }
  if (((piVar1[5] + -1 + piVar1[3]) * *piVar1 - piVar1[2]) + piVar1[1] < (int)param_2) {
    *(uint *)(this + 0xc) = piVar1[2] + param_2;
    return 0;
  }
  F_00db9780(piVar1,param_1,uVar4);
  if (this[0x14] != (undefined1)0x0) {
    F_00db9860(*(undefined * PTR32 *)(this + 8));
    piVar1 = *(int * PTR32 *)(this + 8);
    if (piVar1[2] == (piVar1[5] + -1 + piVar1[3]) * *piVar1 + piVar1[1]) {
      F_00db9bb0(piVar1);
      *(undefined4 *)(this + 0xc) = 0xffffffff;
    }
  }
  return uVar4;
}

/* ref: FUN_00db9df0 */
uint F_00db9df0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb9df0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00db9bb0(this);
  uVar1 = *(uint *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x14) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x10),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  *(undefined4 *)((int)this + 0x10) = 0;
  return uVar1;
}

/* ref: FUN_00db9e40 */
unsigned int F_00db9e40(unsigned int gen_a0)
{
  GEN_ENTER(0xdb9e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x113dad8));
  if (*(int *)((int)this + 0x10) == 1) {
    this_00 = *(undefined * PTR32 *)((int)this + 8);
    if (this_00 != (undefined *)0x0) {
      F_00db9df0(this_00);
      pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this_00,0x1c);
    }
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
    return 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return 0;
}

/* ref: FUN_00db9ec0 */
uint F_00db9ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb9ec0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00db9ed0 */
uint F_00db9ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb9ed0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00db9ef0 */
uint F_00db9ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb9ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00db9f20 */
unsigned int F_00db9f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb9f20u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: hkMemoryTrackStreamReader::vf6 */
uint F_00db9f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb9f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: hkMemoryTrackStreamReader::vf7 */
uint F_00db9fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb9fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: hkMemoryTrackStreamReader::vf8 */
uint F_00db9fb0(void)
{
  GEN_ENTER(0xdb9fb0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: hkMemoryTrackStreamReader::vf9 */
uint F_00db9fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb9fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: hkMemoryTrackStreamReader::vf10 */
uint F_00db9fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb9fd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: hkMemoryTrackStreamReader::vf3 */
uint F_00db9fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb9fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  *(bool *)param_1 = *(int *)(this + 0xc) < (piVar1[5] + -1 + piVar1[3]) * *piVar1 + piVar1[1];
  return param_1;
}

/* ref: FUN_00dba030 */
unsigned int F_00dba030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdba030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  iVar1 = (*(int *)((int)this + 4) - param_1) * 4;
  puVar2 = (undefined4 *)(*(int *)this + param_1 * 4);
  if (0 < iVar1) {
    iVar1 = (iVar1 - 1U >> 2) + 1;
    do {
      *puVar2 = puVar2[1];
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00dba070 */
uint F_00dba070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdba070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  *puVar1 = *param_2;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dba0b0 */
unsigned int F_00dba0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdba0b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00dba110 */
uint F_00dba110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdba110u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00dba120 */
uint F_00dba120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdba120u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,param_2);
  return uVar2;
}

/* ref: FUN_00dba150 */
uint F_00dba150(unsigned int gen_a0)
{
  GEN_ENTER(0xdba150u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00dba180 */
uint F_00dba180(unsigned int gen_a0)
{
  GEN_ENTER(0xdba180u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00dba1b0 */
uint F_00dba1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdba1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dba1f0 */
unsigned int F_00dba1f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdba1f0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00dba250 */
uint F_00dba250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdba250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dba290 */
uint F_00dba290(unsigned int gen_a0)
{
  GEN_ENTER(0xdba290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dba2d0 */
uint F_00dba2d0(unsigned int gen_a0)
{
  GEN_ENTER(0xdba2d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkMemoryTrackStreamReader::vf0 */
uint F_00dba310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdba310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00db9e40(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dba350 */
uint F_00dba350(unsigned int gen_a0)
{
  GEN_ENTER(0xdba350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 8) == 0) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 0x10);
  uVar3 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x10))))
                        (*(int * PTR32 *)((int)this + 8),*(int *)((int)this + 0xc) + uVar3,iVar1 - uVar3);
      uVar3 = uVar3 + uVar2;
      if (uVar2 == 0) {
        return uVar3;
      }
    } while ((int)uVar3 < iVar1);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  return uVar3;
}

/* ref: hkBufferedStreamWriter::vf4 */
uint F_00dba3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdba3a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(this + 0x14) - *(int *)(this + 0x10);
  uVar3 = param_2;
  if (iVar4 < (int)param_2) {
    do {
      F_00da1010(*(int *)(this + 0x10) + *(int *)(this + 0xc),param_1,iVar4);
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + iVar4;
      uVar1 = *(uint *)(this + 0x10);
      param_1 = param_1 + iVar4;
      uVar3 = uVar3 - iVar4;
      uVar2 = F_00dba350(this);
      if (uVar2 != uVar1) {
        return param_2 - uVar3;
      }
      iVar4 = *(int *)(this + 0x14) - *(int *)(this + 0x10);
    } while (iVar4 < (int)uVar3);
  }
  F_00da1010(*(int *)(this + 0xc) + *(int *)(this + 0x10),param_1,uVar3);
  *(uint *)(this + 0x10) = *(int *)(this + 0x10) + uVar3;
  return param_2;
}

/* ref: hkBufferedStreamWriter::vf5 */
uint F_00dba430(unsigned int gen_a0)
{
  GEN_ENTER(0xdba430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00dba350(this);
  if (*(int *)(this + 8) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x14))))(*(int * PTR32 *)(this + 8));
    return uVar1;
  }
  return uVar1;
}

/* ref: hkBufferedStreamWriter::vf3 */
uint F_00dba450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdba450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 * puVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)(this + 8) != 0) {
    puVar1 = ((undefined1 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0xc))))(*(int * PTR32 *)(this + 8),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)));
    *param_1 = *puVar1;
    return (uint)param_1;
  }
  (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) = *(int *)(this + 0x10) != *(int *)(this + 0x14);
  *param_1 = *(int *)(this + 0x10) != *(int *)(this + 0x14);
  return (uint)param_1;
}

/* ref: hkBufferedStreamWriter::vf6 */
uint F_00dba4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdba4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 * puVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)(this + 8) != 0) {
    puVar1 = ((undefined1 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x18))))(*(int * PTR32 *)(this + 8),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)));
    *param_1 = *puVar1;
    return (uint)param_1;
  }
  (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) = 1;
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkBufferedStreamWriter::vf7 */
uint F_00dba4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdba4e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(this + 8) != 0) {
    F_00dba350(this);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x1c))))(*(int * PTR32 *)(this + 8),param_1,param_2);
    return uVar2;
  }
  iVar3 = param_1;
  if (param_2 != 0) {
    if (param_2 == 1) {
      iVar3 = *(int *)(this + 0x10) + param_1;
    }
    else {
      iVar3 = -1;
      if (param_2 == 2) {
        iVar3 = *(int *)(this + 0x10) - param_1;
      }
    }
  }
  if (-1 < iVar3) {
    iVar1 = *(int *)(this + 0x14);
    iVar4 = iVar3;
    if (iVar1 < iVar3) {
      iVar4 = iVar1;
    }
    *(int *)(this + 0x10) = iVar4;
    return (uint)(iVar1 < iVar3);
  }
  *(undefined4 *)(this + 0x10) = 0;
  return 1;
}

/* ref: hkBufferedStreamWriter::vf8 */
uint F_00dba550(unsigned int gen_a0)
{
  GEN_ENTER(0xdba550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 8) == 0) {
    return *(uint *)(this + 0x10);
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x20))))(*(int * PTR32 *)(this + 8));
  if (-1 < (int)uVar1) {
    return *(int *)(this + 0x10) + uVar1;
  }
  return 0xffffffff;
}

/* ref: FUN_00dba580 */
uint F_00dba580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdba580u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x113db20));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  iVar1 = param_2 + -1;
  if ((char)param_3 == '\0') {
    iVar1 = param_2;
  }
  *(int *)((int)this + 0x14) = iVar1;
  *(undefined1 *)((int)this + 0x18) = 0;
  if ((char)param_3 != '\0') {
    F_00da1030(param_1,0,param_2);
  }
  return (uint)this;
}

/* ref: FUN_00dba5e0 */
uint F_00dba5e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdba5e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  LPVOID pvVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x113db20));
  *(undefined1 *)((int)this + 0x18) = 1;
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    F_00d919e0(*(undefined * PTR32 *)((int)this + 8));
  }
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d923f0(*(undefined4 *)((int)pvVar1 + 0x2c),param_2,0x40);
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(uint *)((int)this + 0xc) = uVar2;
  *(undefined4 *)((int)this + 0x10) = 0;
  return (uint)this;
}

/* ref: FUN_00dba640 */
uint F_00dba640(unsigned int gen_a0)
{
  GEN_ENTER(0xdba640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  LPVOID pvVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x113db20));
  uVar2 = F_00dba430(this);
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    uVar2 = F_00d91a80(*(undefined * PTR32 *)((int)this + 8));
  }
  if (*(char *)((int)this + 0x18) != '\0') {
    uVar1 = *(undefined4 *)((int)this + 0xc);
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar2 = F_00d92430(*(undefined4 *)((int)pvVar3 + 0x2c),uVar1);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: hkBufferedStreamWriter::vf2 */
uint F_00dba690(void)
{
  GEN_ENTER(0xdba690u, 0u, 0u, 0u, 0u);
  return 0x15e0038;
}

/* ref: FUN_00dba6a0 */
uint F_00dba6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdba6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d923f0(*(undefined4 *)((int)pvVar1 + 0x2c),param_2,param_1);
  return uVar2;
}

/* ref: FUN_00dba6d0 */
uint F_00dba6d0(unsigned int gen_a0)
{
  GEN_ENTER(0xdba6d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d92430(*(undefined4 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00dba700 */
uint F_00dba700(unsigned int gen_a0)
{
  GEN_ENTER(0xdba700u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkBufferedStreamWriter::vf0 */
uint F_00dba730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdba730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00dba640(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dba770 */
uint F_00dba770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdba770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined2 *)this = *(undefined2 *)(param_1 + 2);
  return (uint)this;
}

/* ref: FUN_00dba790 */
uint F_00dba790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdba790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00dba7b0 */
uint F_00dba7b0(unsigned int gen_a0)
{
  GEN_ENTER(0xdba7b0u, gen_a0, 0u, 0u, 0u);
  short * in_ecx = (short *)(uintptr_t)gen_a0;
  return (int)*in_ecx << 0x10;
}

/* ref: FUN_00dba7d0 */
uint F_00dba7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdba7d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *(int *)(in_ecx + 8) != 0;
  return param_2;
}

/* ref: FUN_00dba7f0 */
uint F_00dba7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdba7f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *(int *)(in_ecx + 0xc) != 0;
  return param_2;
}

/* ref: FUN_00dba810 */
uint F_00dba810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdba810u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if (param_1 == 0x19) {
    uVar1 = F_00d929c0(param_2);
    return uVar1;
  }
  uVar1 = F_00da5f30(param_1);
  return (int)*(short *)(uVar1 + 8);
}

/* ref: FUN_00dba840 */
uint F_00dba840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdba840u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_1 == 0xb) {
    return param_1;
  }
  if (param_1 != 0x20) {
    return param_1;
  }
  return param_2;
}

/* ref: FUN_00dba870 */
uint F_00dba870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdba870u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  if (param_1 == 0xb) {
    *param_2 = param_3;
  }
  else if (param_1 == 0x20) {
    *(short *)param_2 = (short)(param_3 >> 0x10);
    return (int)param_3 >> 0x10;
  }
  return param_1;
}

/* ref: FUN_00dba8a0 */
uint F_00dba8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdba8a0u, gen_a0, gen_a1, gen_a2, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ushort * puVar1;
  
  if (param_1 == (ushort *)0xb) {
    *(int *)param_2 = (int)(short)(ushort)param_3 << 0x10;
    puVar1 = param_2;
  }
  else {
    puVar1 = param_1;
    if (param_1 == (ushort *)&REFG(undefined, 0x20)) {
      *param_2 = (ushort)param_3;
      return (uint)(ushort)param_3;
    }
  }
  return (uint)puVar1;
}

/* ref: FUN_00dba8d0 */
uint F_00dba8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdba8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
  case 2: ;
  case 3: ;
    return (int)(char)(byte)*param_2;
  case 4: ;
    return (uint)(byte)*param_2;
  case 5: ;
    return (int)(short)(ushort)*param_2;
  case 6: ;
    return (uint)(ushort)*param_2;
  case 7: ;
    return *param_2;
  case 8: ;
    return *param_2;
  case 9: ;
  case 10: ;
    return *param_2;
  default: ;
    return 0;
  case 0x1e: ;
    return *param_2;
  }
}

/* ref: FUN_00dba980 */
uint F_00dba980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdba980u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if ((param_1 != 0x18) && (param_1 != 0x1f)) {
    uVar1 = F_00dba8d0(param_1,param_3);
    return uVar1;
  }
  uVar1 = F_00dba8d0(param_2,param_3);
  return uVar1;
}

/* ref: FUN_00dba9c0 */
uint F_00dba9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdba9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = param_1 - 1;
  if (uVar2 < 0x1e) {
    uVar2 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0xdbaa78) + param_1 + 3)));
    uVar1 = (undefined1)param_3;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 1: ;
      if (param_3 != 0 || param_4 != 0) {
        *(undefined1 *)param_2 = 1;
        return 1;
      }
      *(undefined1 *)param_2 = 0;
      return 0;
    case 2: ;
    case 3: ;
      *(undefined1 *)param_2 = uVar1;
      return param_3 & 0xff;
    case 4: ;
      *(undefined1 *)param_2 = uVar1;
      return (uint)param_2;
    case 5: ;
      *(undefined2 *)param_2 = (undefined2)param_3;
      return uVar2;
    case 6: ;
      *(undefined2 *)param_2 = (undefined2)param_3;
      return param_3 & 0xffff;
    case 7: ;
      *param_2 = param_3;
      return (uint)param_2;
    case 8: ;
      *param_2 = param_3;
      return uVar2;
    case 9: ;
    case 10: ;
      *param_2 = param_3;
      param_2[1] = param_4;
      return (uint)param_2;
    case 0x1e: ;
      *param_2 = param_3;
      uVar2 = param_3;
    }
  }
  return uVar2;
}

/* ref: FUN_00dbaaa0 */
uint F_00dbaaa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdbaaa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  if ((param_1 != 0x18) && (param_1 != 0x1f)) {
    uVar1 = F_00dba9c0(param_1,param_3,param_4,param_5);
    return uVar1;
  }
  uVar1 = F_00dba9c0(param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00dbaaf0 */
uint F_00dbaaf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbaaf0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (param_1 == 0x1d) {
    *param_2 = param_3;
  }
  else if (param_1 == 0x21) {
    uVar1 = F_00d91520(param_2,param_3);
    return uVar1;
  }
  return param_1;
}

/* ref: FUN_00dbab20 */
uint F_00dbab20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbab20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  char * pcVar2;
  
  uVar1 = F_00d929c0(param_1);
  F_00da1030(param_2,0,uVar1);
  pcVar2 = (char *)F_00d929e0(param_1,&(*(undefined1 *)(gen_frame + 0xb)));
  if (*pcVar2 != '\0') {
    pcVar2 = (char *)F_00d929c0(param_1);
    *(short *)(param_2 + 4) = (short)pcVar2;
    *(undefined2 *)(param_2 + 6) = 1;
  }
  return (uint)pcVar2;
}

/* ref: FUN_00dbab70 */
uint F_00dbab70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbab70u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * this;
  
  iVar1 = *param_1;
  uVar2 = F_00d92610(param_2);
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(iVar1 + 0x1c))(param_1,uVar2)));
  if ((this != (undefined *)0x0) && (*(int *)((int)this + 8) != 0)) {
    this = (undefined *)F_00dc25d0(this,param_3,1);
  }
  return (uint)this;
}

/* ref: FUN_00dbabb0 */
uint F_00dbabb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbabb0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * this;
  
  iVar1 = *param_1;
  uVar2 = F_00d92610(param_2);
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(iVar1 + 0x1c))(param_1,uVar2)));
  if ((this != (undefined *)0x0) && (*(int *)((int)this + 8) != 0)) {
    this = (undefined *)F_00dc25f0(this,param_3,1);
  }
  return (uint)this;
}

/* ref: FUN_00dbabf0 */
uint F_00dbabf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbabf0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * this;
  
  iVar1 = *param_1;
  uVar2 = F_00d92610(param_2);
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(iVar1 + 0x1c))(param_1,uVar2)));
  if ((this != (undefined *)0x0) && (*(int *)((int)this + 8) != 0)) {
    this = (undefined *)F_00dc2610(this,param_3);
  }
  return (uint)this;
}

/* ref: FUN_00dbac30 */
uint F_00dbac30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdbac30u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  uint param_4 = (uint)gen_a3;
  int param_5 = (int)gen_a4;
  uint uVar1;
  undefined * this;
  int iVar2;
  
  iVar2 = *param_1;
  uVar1 = F_00d92610(param_2);
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(iVar2 + 0x1c))(param_1,uVar1)));
  uVar1 = 0;
  if (this != (undefined *)0x0) {
    uVar1 = param_4;
    if (0 < (int)param_4) {
      param_1 = (int *)param_4;
      iVar2 = param_3;
      do {
        uVar1 = F_00d929c0(param_2);
        uVar1 = F_00da1030(iVar2,0,uVar1);
        if (*(int *)((int)this + 8) != 0) {
          uVar1 = F_00dc25f0(this,iVar2,1);
        }
        iVar2 = iVar2 + param_5;
        param_1 = (int *)((int)param_1 - 1);
      } while (param_1 != (int *)0x0);
    }
  }
  return uVar1;
}

/* ref: FUN_00dbac90 */
uint F_00dbac90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdbac90u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  uint uVar1;
  undefined * this;
  undefined * pvVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  uVar1 = F_00d92610(param_2);
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(iVar3 + 0x1c))(param_1,uVar1)));
  pvVar2 = this;
  if (((this != (undefined *)0x0) && (*(int *)((int)this + 8) != 0)) &&
     (iVar3 = param_4, iVar4 = param_3, 0 < param_4)) {
    do {
      pvVar2 = (undefined *)F_00dc25f0(this,iVar4,1);
      iVar4 = iVar4 + param_5;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return (uint)pvVar2;
}

/* ref: FUN_00dbace0 */
uint F_00dbace0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdbace0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  uint uVar1;
  undefined * this;
  undefined * pvVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  uVar1 = F_00d92610(param_2);
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(iVar3 + 0x1c))(param_1,uVar1)));
  pvVar2 = this;
  if (((this != (undefined *)0x0) && (*(int *)((int)this + 8) != 0)) &&
     (iVar3 = param_4, iVar4 = param_3, 0 < param_4)) {
    do {
      pvVar2 = (undefined *)F_00dc2610(this,iVar4);
      iVar4 = iVar4 + param_5;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return (uint)pvVar2;
}

/* ref: FUN_00dbad30 */
uint F_00dbad30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbad30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_2;
  if ((int)param_2 < 1) {
    uVar1 = 1;
  }
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0xb: ;
  case 0x20: ;
    break;
  case 0xc: ;
  case 0xd: ;
    return uVar1 * 4;
  case 0xe: ;
  case 0xf: ;
  case 0x10: ;
    return uVar1 * 0xc;
  case 0x11: ;
  case 0x12: ;
    return uVar1 << 4;
  default: ;
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00dbada0 */
uint F_00dbada0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdbada0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = (undefined4 *)F_00dbad30(param_1,param_2);
  puVar3 = puVar1;
  if (((int)param_5 < 0) || (puVar3 = param_5, (int)param_5 <= (int)puVar1)) {
    if (param_1 == 0x20) {
      puVar1 = (undefined4 *)0x0;
      if (0 < (int)puVar3) {
        do {
          *(undefined2 *)(param_4 + (int)((int)(uintptr_t)puVar1) * 2) =
               *(undefined2 *)(param_3 + 2 + (int)((int)(uintptr_t)puVar1) * 4);
          puVar1 = (undefined4 *)((int)puVar1 + 1);
        } while ((int)puVar1 < (int)puVar3);
        return (uint)puVar1;
      }
    }
    else {
      iVar6 = 0;
      if (3 < (int)puVar3) {
        iVar5 = ((uint)(puVar3 + -1) >> 2) + 1;
        iVar6 = iVar5 * 4;
        puVar2 = (undefined4 *)(param_4 + 4);
        puVar4 = (undefined4 *)(param_3 + 0xc);
        do {
          puVar1 = puVar2 + 4;
          puVar2[-1] = puVar4[-3];
          iVar5 = iVar5 + -1;
          *puVar2 = *((undefined4 *)GEN_TOP(((param_3 - param_4) + -0x10 + (int)puVar1)));
          puVar2[1] = puVar4[-1];
          puVar2[2] = *puVar4;
          puVar2 = puVar1;
          puVar4 = puVar4 + 4;
        } while (iVar5 != 0);
      }
      if (iVar6 < (int)puVar3) {
        iVar5 = (int)puVar3 - iVar6;
        puVar3 = (undefined4 *)(param_4 + iVar6 * 4);
        do {
          puVar1 = puVar3 + 1;
          iVar5 = iVar5 + -1;
          *puVar3 = *((undefined4 *)GEN_TOP(((int)puVar3 + (param_3 - param_4))));
          puVar3 = puVar1;
        } while (iVar5 != 0);
      }
    }
  }
  return (uint)puVar1;
}

/* ref: FUN_00dbae70 */
uint F_00dbae70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbae70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  undefined4 * puVar2;
  
  if (param_2 == (undefined4 *)0x14) {
    *param_3 = *param_1;
    puVar2 = param_3;
  }
  else {
    puVar2 = param_2;
    if (param_2 == (undefined4 *)0x1c) {
      *param_3 = *param_1;
      uVar1 = param_1[1];
      param_3[1] = uVar1;
      return uVar1;
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00dbaea0 */
uint F_00dbaea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbaea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  uint in_ecx;
  uint uVar2;
  
  in_ecx = ((code *)*(gen_code32 *)(*param_2 + 0x14))(param_2,param_1);
  uVar2 = 0;
  if (in_ecx != 0) {
    iVar1 = *param_3;
    uVar2 = F_00d92610(in_ecx);
    uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x10))(param_3,uVar2);
  }
  return uVar2;
}

/* ref: FUN_00dbaed0 */
uint F_00dbaed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdbaed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char * pcVar1;
  
  pcVar1 = (char *)F_00d929e0(param_1,&(*(undefined1 *)(gen_frame + 0xb)));
  if (*pcVar1 == '\0') {
    *param_3 = param_2;
    return (uint)pcVar1;
  }
  if ((char)param_4 != '\0') {
    if (param_2 != (undefined *)0x0) {
      pcVar1 = (char *)F_00d919e0(param_2);
    }
    if ((undefined *)*param_3 != (undefined *)0x0) {
      pcVar1 = (char *)F_00d91a80((undefined *)*param_3);
    }
    *param_3 = param_2;
    return (uint)pcVar1;
  }
  *param_3 = param_2;
  return (uint)param_3;
}

/* ref: FUN_00dbaf30 */
uint F_00dbaf30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbaf30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if (param_1 != 0x19) {
    uVar1 = F_00da5f30(param_1);
    return (int)*(short *)(uVar1 + 8);
  }
  uVar1 = F_00d929c0(param_2);
  return uVar1;
}

/* ref: FUN_00dbaf60 */
uint F_00dbaf60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdbaf60u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  int iVar2;
  
  if (param_1 == 0x16) {
    uVar1 = 0xc;
  }
  else {
    iVar2 = param_2;
    if ((param_1 != 0x18) && (param_1 != 0x1f)) {
      iVar2 = param_1;
    }
    uVar1 = F_00dbaf30(iVar2,param_3);
    if (0 < param_4) {
      return uVar1 * param_4;
    }
  }
  return uVar1;
}

/* ref: FUN_00dbafb0 */
uint F_00dbafb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdbafb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  int iVar2;
  
  if (param_1 == 1) {
    uVar1 = F_00da1010(param_3,param_2,param_4);
    return uVar1;
  }
  uVar1 = F_00da5f30(param_1);
  uVar1 = (int)*(short *)(uVar1 + 8) - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    if (0 < param_4) {
      uVar1 = param_3;
      iVar2 = param_4;
      do {
        *(bool *)uVar1 = *((char *)GEN_TOP(((param_2 - param_3) + uVar1))) != '\0';
        uVar1 = uVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return uVar1;
    }
    break;
  case 1: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *(bool *)(uVar1 + param_3) = *(short *)(param_2 + uVar1 * 2) != 0;
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 2: ;
  case 4: ;
  case 5: ;
  case 6: ;
    break;
  case 3: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *(bool *)(uVar1 + param_3) = *(int *)(param_2 + uVar1 * 4) != 0;
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 7: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *(bool *)(uVar1 + param_3) =
             *(int *)(param_2 + uVar1 * 8) != 0 || *(int *)(param_2 + 4 + uVar1 * 8) != 0;
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
    }
    break;
  default: ;
    goto switchD_00dbafea_default;
  }
switchD_00dbafea_default: ;
  return uVar1;
}

/* ref: FUN_00dbb0b0 */
uint F_00dbb0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdbb0b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  char * pcVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == 1) {
    uVar2 = F_00da1010(param_3,param_1,param_4);
    return uVar2;
  }
  uVar2 = F_00da5f30(param_2);
  uVar2 = (int)*(short *)(uVar2 + 8) - 1;
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
    if (0 < param_4) {
      uVar2 = param_3;
      iVar3 = param_4;
      do {
        *(bool *)uVar2 = *((char *)GEN_TOP(((param_1 - param_3) + uVar2))) != '\0';
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      return uVar2;
    }
    break;
  case 1: ;
    uVar2 = 0;
    if (0 < param_4) {
      do {
        pcVar1 = (char *)(uVar2 + param_1);
        uVar2 = uVar2 + 1;
        *((ushort *)GEN_TOP(((param_3 - 2) + uVar2 * 2))) = (ushort)(*pcVar1 != '\0');
      } while ((int)uVar2 < param_4);
      return uVar2;
    }
    break;
  case 2: ;
  case 4: ;
  case 5: ;
  case 6: ;
    break;
  case 3: ;
    uVar2 = 0;
    if (0 < param_4) {
      do {
        pcVar1 = (char *)(uVar2 + param_1);
        uVar2 = uVar2 + 1;
        *((uint *)GEN_TOP(((param_3 - 4) + uVar2 * 4))) = (uint)(*pcVar1 != '\0');
      } while ((int)uVar2 < param_4);
      return uVar2;
    }
    break;
  case 7: ;
    iVar3 = 0;
    if (0 < param_4) {
      do {
        uVar2 = (uint)(*(char *)(iVar3 + param_1) != '\0');
        iVar3 = iVar3 + 1;
        *((uint *)GEN_TOP(((param_3 - 8) + iVar3 * 8))) = uVar2;
        *((undefined4 *)GEN_TOP(((param_3 - 4) + iVar3 * 8))) = 0;
      } while (iVar3 < param_4);
    }
    break;
  default: ;
    goto switchD_00dbb0ea_default;
  }
switchD_00dbb0ea_default: ;
  return uVar2;
}

/* ref: FUN_00dbb1b0 */
uint F_00dbb1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdbb1b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  
  uVar1 = param_2 - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    uVar1 = F_00dbafb0(9,param_1,param_3,param_4);
    return uVar1;
  case 1: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined1 *)(uVar1 + param_3) = *(undefined1 *)(param_1 + uVar1 * 8);
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 2: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined1 *)(uVar1 + param_3) = *(undefined1 *)(param_1 + uVar1 * 8);
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 3: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined1 *)(uVar1 + param_3) = *(undefined1 *)(param_1 + uVar1 * 8);
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 4: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined2 *)(param_3 + uVar1 * 2) = *(undefined2 *)(param_1 + uVar1 * 8);
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 5: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined2 *)(param_3 + uVar1 * 2) = *(undefined2 *)(param_1 + uVar1 * 8);
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 6: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined4 *)(param_3 + uVar1 * 4) = *(undefined4 *)(param_1 + uVar1 * 8);
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 7: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined4 *)(param_3 + uVar1 * 4) = *(undefined4 *)(param_1 + uVar1 * 8);
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
    }
    break;
  case 8: ;
  case 9: ;
    uVar1 = F_00da1010(param_3,param_1,param_4 * 8);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00dbb320 */
uint F_00dbb320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbb320u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  if (param_1 == 0x1d) {
    return *param_2;
  }
  if (param_1 != 0x21) {
    return 0;
  }
  return *param_2 & 0xfffffffe;
}

/* ref: FUN_00dbb350 */
uint F_00dbb350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbb350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(param_3 + 0xc))) {
  case 0x14: ;
  case 0x16: ;
  case 0x1c: ;
  case 0x21: ;
    *param_1 = 1;
    return (uint)param_1;
  default: ;
    *param_1 = 0;
    return (uint)param_1;
  case 0x19: ;
    break;
  }
  iVar1 = *param_2;
  uVar2 = F_00da5fd0(param_3);
  uVar2 = F_00d92610(uVar2);
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x1c))(param_2,uVar2);
  if ((uVar2 != 0) && ((*(int *)(uVar2 + 0xc) != 0 || (*(int *)(uVar2 + 8) != 0)))) {
    *param_1 = 1;
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00dbb3e0 */
uint F_00dbb3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xdbb3e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  uint param_5 = (uint)gen_a4;
  int param_6 = (int)gen_a5;
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar1 = param_2 - 0x14;
  if (uVar1 < 0xe) {
    uVar1 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0xdbb488) + param_2)));
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 0x14: ;
      uVar1 = param_5;
      puVar2 = param_4;
      if (0 < (int)param_5) {
        do {
          *puVar2 = 0;
          puVar2 = (undefined4 *)((int)puVar2 + param_6);
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
        return 0;
      }
      break;
    case 0x19: ;
      uVar1 = F_00dbac30(param_1,param_3,param_4,param_5,param_6);
      return uVar1;
    case 0x1c: ;
      uVar1 = param_5;
      puVar2 = param_4;
      if (0 < (int)param_5) {
        do {
          puVar2[1] = 0;
          *puVar2 = 0;
          puVar2 = (undefined4 *)((int)puVar2 + param_6);
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
        return 0;
      }
      break;
    case 0x21: ;
      puVar2 = param_4;
      uVar3 = param_5;
      if (0 < (int)param_5) {
        do {
          if (puVar2 != (undefined4 *)0x0) {
            uVar1 = F_00d91340(puVar2);
          }
          puVar2 = (undefined4 *)((int)puVar2 + param_6);
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
  }
  return uVar1;
}

/* ref: FUN_00dbb4b0 */
uint F_00dbb4b0(unsigned int gen_a0)
{
  GEN_ENTER(0xdbb4b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(param_1 + 4);
}

/* ref: FUN_00dbb4c0 */
uint F_00dbb4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdbb4c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00dba810(param_2,param_3);
  F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_1,param_4,uVar1);
  return *param_1;
}

/* ref: FUN_00dbb4f0 */
ulonglong F_00dbb4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdbb4f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  char * pcVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  int iVar5;
  undefined * puVar6;
  
  iVar4 = 0;
  iVar5 = 0;
  if (((param_1 != 0) && (param_2 != 0)) &&
     (pcVar1 = (char *)F_00d929e0(param_1,&(*(undefined1 *)(gen_frame + 0x21b))), iVar4 = param_2, iVar5 = param_1,
     *pcVar1 != '\0')) {
    uVar2 = F_00dbaea0(param_2,param_3,param_4);
    if (uVar2 == 0) {
      F_00da0a80(((undefined1 *)(gen_frame + 0x20c)),((undefined1 *)(gen_frame + 0xc)),0x200);
      pcVar1 = ". The object is replaced with HK_NULL.";
      puVar6 = &REFG(undefined, 0x113dbc0);
      uVar2 = F_00d92610(param_1);
      pvVar3 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x20c)),
                                    "Could not find the most derived class for virtual object ");
      pvVar3 = (undefined *)F_00d9fe80(pvVar3,uVar2);
      pvVar3 = (undefined *)F_00d9fe80(pvVar3,puVar6);
      pvVar3 = (undefined *)F_00d9fde0(pvVar3,param_2);
      F_00d9fe80(pvVar3,pcVar1);
      ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                (REFG(int * PTR32, 0x15dff78),1,0x3476d70f,((undefined1 *)(gen_frame + 0xc)),"Reflection\\Util\\hkVariantDataUtil.cpp",0x28c
                );
      F_00d9fda0(((undefined1 *)(gen_frame + 0x20c)));
      return 0;
    }
    return CONCAT44(uVar2,param_2);
  }
  return CONCAT44(iVar5,iVar4);
}

/* ref: FUN_00dbb5f0 */
ulonglong F_00dbb5f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdbb5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  ulonglong * param_5 = (ulonglong *)(uintptr_t)gen_a4;
  ulonglong uVar1;
  
  if (param_1 == 0x14) {
    uVar1 = F_00dbb4f0(param_2,(int)*param_5,param_3,param_4);
    return uVar1;
  }
  if (param_1 != 0x19) {
    if (param_1 != 0x1c) {
      return 0;
    }
    return *param_5;
  }
  uVar1 = F_00dbb4f0(param_2,param_5,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00dbb650 */
uint F_00dbb650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdbb650u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  
  uVar1 = param_1 - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    uVar1 = F_00dbb0b0(param_2,7,param_3,param_4);
    return uVar1;
  case 1: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *(int *)(param_3 + uVar1 * 4) = (int)*(char *)(uVar1 + param_2);
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 2: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *(int *)(param_3 + uVar1 * 4) = (int)*(char *)(uVar1 + param_2);
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 3: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *(uint *)(param_3 + uVar1 * 4) = (uint)*(byte *)(uVar1 + param_2);
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 4: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *(int *)(param_3 + uVar1 * 4) = (int)*(short *)(param_2 + uVar1 * 2);
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 5: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *(uint *)(param_3 + uVar1 * 4) = (uint)*(ushort *)(param_2 + uVar1 * 2);
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
    }
    break;
  case 6: ;
  case 7: ;
    uVar1 = F_00da1010(param_3,param_2,param_4 * 4);
    return uVar1;
  case 8: ;
  case 9: ;
    uVar1 = F_00dbb1b0(param_2,7,param_3,param_4);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00dbb790 */
uint F_00dbb790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdbb790u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  int iVar2;
  
  uVar1 = param_2 - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    uVar1 = F_00dbafb0(7,param_1,param_3,param_4);
    return uVar1;
  case 1: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined1 *)(uVar1 + param_3) = *(undefined1 *)(param_1 + uVar1 * 4);
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 2: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined1 *)(uVar1 + param_3) = *(undefined1 *)(param_1 + uVar1 * 4);
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 3: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined1 *)(uVar1 + param_3) = *(undefined1 *)(param_1 + uVar1 * 4);
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 4: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined2 *)(param_3 + uVar1 * 2) = *(undefined2 *)(param_1 + uVar1 * 4);
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 5: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined2 *)(param_3 + uVar1 * 2) = *(undefined2 *)(param_1 + uVar1 * 4);
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 6: ;
  case 7: ;
    uVar1 = F_00da1010(param_3,param_1,param_4 * 4);
    return uVar1;
  case 8: ;
    iVar2 = 0;
    if (0 < param_4) {
      do {
        uVar1 = *(uint *)(param_1 + iVar2 * 4);
        *(uint *)(param_3 + iVar2 * 8) = uVar1;
        *(int *)(param_3 + 4 + iVar2 * 8) = (int)uVar1 >> 0x1f;
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_4);
      return uVar1;
    }
    break;
  case 9: ;
    iVar2 = 0;
    if (0 < param_4) {
      do {
        uVar1 = *(uint *)(param_1 + iVar2 * 4);
        *(uint *)(param_3 + iVar2 * 8) = uVar1;
        *(int *)(param_3 + 4 + iVar2 * 8) = (int)uVar1 >> 0x1f;
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_4);
    }
  }
  return uVar1;
}

/* ref: FUN_00dbb910 */
uint F_00dbb910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdbb910u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  
  uVar1 = param_2 - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    uVar1 = F_00dbafb0(8,param_1,param_3,param_4);
    return uVar1;
  case 1: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined1 *)(uVar1 + param_3) = *(undefined1 *)(param_1 + uVar1 * 4);
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 2: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined1 *)(uVar1 + param_3) = *(undefined1 *)(param_1 + uVar1 * 4);
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 3: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined1 *)(uVar1 + param_3) = *(undefined1 *)(param_1 + uVar1 * 4);
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 4: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined2 *)(param_3 + uVar1 * 2) = *(undefined2 *)(param_1 + uVar1 * 4);
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 5: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined2 *)(param_3 + uVar1 * 2) = *(undefined2 *)(param_1 + uVar1 * 4);
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 6: ;
  case 7: ;
    uVar1 = F_00da1010(param_3,param_1,param_4 * 4);
    return uVar1;
  case 8: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined4 *)(param_3 + uVar1 * 8) = *(undefined4 *)(param_1 + uVar1 * 4);
        *(undefined4 *)(param_3 + 4 + uVar1 * 8) = 0;
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
      return uVar1;
    }
    break;
  case 9: ;
    uVar1 = 0;
    if (0 < param_4) {
      do {
        *(undefined4 *)(param_3 + uVar1 * 8) = *(undefined4 *)(param_1 + uVar1 * 4);
        *(undefined4 *)(param_3 + 4 + uVar1 * 8) = 0;
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < param_4);
    }
  }
  return uVar1;
}

/* ref: FUN_00dbba90 */
uint F_00dbba90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdbba90u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  short sVar1;
  uint uVar2;
  uint uVar3;
  short * psVar4;
  int * piVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 == param_3) {
    uVar2 = F_00da5f30(param_1);
    uVar2 = F_00da1010(param_4,param_2,*(short *)(uVar2 + 8) * param_5);
    return uVar2;
  }
  uVar2 = param_1;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
    uVar2 = F_00dbb0b0(param_2,param_3,param_4,param_5);
    return uVar2;
  case 2: ;
  case 3: ;
  case 4: ;
  case 5: ;
  case 6: ;
    if (param_3 == 1) {
      uVar2 = F_00dbafb0(param_1,param_2,param_4,param_5);
      return uVar2;
    }
    uVar2 = F_00da5f30(param_1);
    uVar3 = F_00da5f30(param_3);
    sVar1 = *(short *)(uVar2 + 8);
    if (sVar1 == *(short *)(uVar3 + 8)) {
      uVar2 = F_00da1010(param_4,param_2,sVar1 * param_5);
      return uVar2;
    }
    (*(int *)(gen_frame + 0x104)) = (int)sVar1 << 6;
    uVar2 = (int)*(short *)(uVar3 + 8) << 6;
    (*(uint *)(gen_frame + 0x108)) = uVar2;
    uVar3 = param_2;
    iVar7 = param_5;
    if (0 < param_5) {
      do {
        iVar6 = iVar7;
        if (0x40 < iVar7) {
          iVar6 = 0x40;
        }
        F_00dbb650(param_1,uVar3,((undefined1 *)(gen_frame + 0x4)),iVar6);
        uVar2 = F_00dbb790(((undefined1 *)(gen_frame + 0x4)),param_3,param_4,iVar6);
        uVar3 = uVar3 + (*(int *)(gen_frame + 0x104));
        param_4 = param_4 + (*(uint *)(gen_frame + 0x108));
        iVar7 = iVar7 - iVar6;
      } while (0 < iVar7);
      return uVar2;
    }
    break;
  case 7: ;
    uVar2 = F_00dbb790(param_2,param_3,param_4,param_5);
    return uVar2;
  case 8: ;
    uVar2 = F_00dbb910(param_2,param_3,param_4,param_5);
    return uVar2;
  case 9: ;
  case 10: ;
    uVar2 = F_00dbb1b0(param_2,param_3,param_4,param_5);
    return uVar2;
  case 0xb: ;
    if ((param_3 == 0x20) && (uVar2 = 0, 0 < param_5)) {
      do {
        *(undefined2 *)(param_4 + uVar2 * 2) = *(undefined2 *)(param_2 + 2 + uVar2 * 4);
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < param_5);
    }
    break;
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
    break;
  case 0x20: ;
    if (param_3 == 0xb) {
      iVar7 = 0;
      if (3 < param_5) {
        piVar5 = (int *)(param_4 + 8);
        psVar4 = (short *)(param_2 + 4);
        iVar6 = (param_5 - 4U >> 2) + 1;
        iVar7 = iVar6 * 4;
        do {
          piVar5[-2] = (int)psVar4[-2] << 0x10;
          piVar5[-1] = (int)psVar4[-1] << 0x10;
          *piVar5 = (int)*psVar4 << 0x10;
          piVar5[1] = (int)psVar4[1] << 0x10;
          psVar4 = psVar4 + 4;
          piVar5 = piVar5 + 4;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      uVar2 = param_2;
      if (iVar7 < param_5) {
        do {
          *(int *)(param_4 + iVar7 * 4) = (int)*(short *)(param_2 + iVar7 * 2) << 0x10;
          iVar7 = iVar7 + 1;
        } while (iVar7 < param_5);
        return param_2;
      }
    }
    break;
  default: ;
    goto switchD_00dbbadd_default;
  }
switchD_00dbbadd_default: ;
  return uVar2;
}

/* ref: FUN_00dbbd20 */
uint F_00dbbd20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xdbbd20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint param_5 = (uint)gen_a4;
  int param_6 = (int)gen_a5;
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 * puVar4;
  undefined8 * puVar5;
  
  uVar1 = param_2;
  if ((param_5 == param_2) && (param_5 == param_4)) {
    uVar1 = F_00da1010(param_3,param_1,param_5 * param_6);
    return uVar1;
  }
  switch((unsigned int)(uintptr_t)(param_5)) {
  case 1: ;
    puVar5 = param_1;
    puVar4 = param_3;
    iVar3 = param_6;
    if (param_6 < 1) {
      return (uint)param_1;
    }
    do {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar5;
      puVar5 = (undefined8 *)((int)puVar5 + param_2);
      puVar4 = (undefined8 *)((int)puVar4 + param_4);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    return (uint)puVar5;
  case 2: ;
    if ((((uint)param_1 | param_2 | (uint)param_3 | param_4) & 1) == 0) {
      puVar5 = param_3;
      iVar3 = param_6;
      puVar4 = param_1;
      if (param_6 < 1) {
        return (uint)param_3;
      }
      do {
        *(undefined2 *)puVar5 = *(undefined2 *)puVar4;
        puVar4 = (undefined8 *)((int)puVar4 + param_2);
        puVar5 = (undefined8 *)((int)puVar5 + param_4);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      return (uint)puVar5;
    }
    break;
  case 4: ;
    if ((((uint)param_1 | param_2 | (uint)param_3 | param_4) & 3) == 0) {
      puVar5 = param_3;
      iVar3 = param_6;
      puVar4 = param_1;
      if (param_6 < 1) {
        return (uint)param_3;
      }
      do {
        *(undefined4 *)puVar5 = *(undefined4 *)puVar4;
        puVar4 = (undefined8 *)((int)puVar4 + param_2);
        puVar5 = (undefined8 *)((int)puVar5 + param_4);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      return (uint)puVar5;
    }
    break;
  case 8: ;
    if ((((uint)param_1 | param_2 | (uint)param_3 | param_4) & 7) == 0) {
      puVar5 = param_3;
      iVar3 = param_6;
      puVar4 = param_1;
      if (param_6 < 1) {
        return (uint)param_3;
      }
      do {
        *(undefined4 *)puVar5 = *(undefined4 *)puVar4;
        *(undefined4 *)((int)puVar5 + 4) = *(undefined4 *)((int)puVar4 + 4);
        puVar4 = (undefined8 *)((int)puVar4 + param_2);
        puVar5 = (undefined8 *)((int)puVar5 + param_4);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      return (uint)puVar5;
    }
    break;
  case 0x10: ;
    if ((((uint)param_1 | param_2 | (uint)param_3 | param_4) & 0xf) == 0) {
      puVar5 = param_3;
      iVar3 = param_6;
      puVar4 = param_1;
      if (param_6 < 1) {
        return (uint)param_3;
      }
      do {
        *puVar5 = *puVar4;
        puVar5[1] = puVar4[1];
        puVar4 = (undefined8 *)((int)puVar4 + param_2);
        puVar5 = (undefined8 *)((int)puVar5 + param_4);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      return (uint)puVar5;
    }
  }
  uVar2 = param_5;
  if (0 < param_6) {
    param_2 = param_6;
    puVar5 = param_1;
    do {
      uVar2 = F_00da1010(param_3,puVar5,param_5);
      param_3 = (undefined8 *)((int)param_3 + param_4);
      puVar5 = (undefined8 *)((int)puVar5 + uVar1);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return uVar2;
}

/* ref: FUN_00dbbec0 */
uint F_00dbbec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xdbbec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  uint uVar1;
  undefined * this;
  int iVar2;
  
  if (param_2 == 0x19) {
    uVar1 = F_00dbace0(param_1,param_3,param_4,param_5,param_6);
    return uVar1;
  }
  uVar1 = param_2;
  if ((param_2 == 0x21) && (this = param_4, iVar2 = param_5, 0 < param_5)) {
    do {
      uVar1 = F_00d91510(this);
      this = (undefined *)((int)this + param_6);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return uVar1;
}

/* ref: FUN_00dbbf10 */
unsigned int F_00dbbf10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdbbf10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  if (param_2[1] != 0) {
    uVar1 = F_00dba810(param_3,param_4);
    F_00dbbec0(param_1,param_3,param_4,*param_2,param_2[1],uVar1);
    param_2[1] = 0;
  }
  return 0;
}

/* ref: FUN_00dbbf50 */
uint F_00dbbf50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdbbf50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint param_5 = (uint)gen_a4;
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2[1];
  if (uVar1 != param_5) {
    uVar2 = F_00dba810(param_3,param_4);
    if ((int)param_5 < (int)param_2[1]) {
      F_00dbbec0(param_1,param_3,param_4,uVar2 * param_5 + *param_2,uVar1 - param_5,uVar2);
      param_2[1] = param_5;
      return *param_2;
    }
    if ((int)(param_2[2] & 0x3fffffff) < (int)param_5) {
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_2,param_5,uVar2);
    }
    F_00dbb3e0(param_1,param_3,param_4,uVar2 * uVar1 + *param_2,param_5 - uVar1,uVar2);
    param_2[1] = param_5;
  }
  return *param_2;
}

/* ref: FUN_00dbc000 */
uint F_00dbc000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdbc000u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  short * psVar4;
  int * piVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = F_00dbad30(param_1,param_2);
  if ((int)uVar2 < 1) {
    return 0;
  }
  if (param_1 != 0x20) {
    return param_3;
  }
  uVar1 = uVar2 * 4;
  if ((int)(param_4[2] & 0x3fffffff) < (int)uVar1) {
    uVar3 = (param_4[2] & 0x3fffffff) * 2;
    if ((int)uVar3 <= (int)uVar1) {
      uVar3 = uVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_4,uVar3,1);
  }
  uVar3 = *param_4;
  param_4[1] = uVar1;
  iVar7 = 0;
  if (3 < (int)uVar2) {
    psVar4 = (short *)(param_3 + 4);
    iVar6 = (uVar2 - 4 >> 2) + 1;
    piVar5 = (int *)(uVar3 + 8);
    iVar7 = iVar6 * 4;
    do {
      piVar5[-2] = (int)psVar4[-2] << 0x10;
      piVar5[-1] = (int)psVar4[-1] << 0x10;
      *piVar5 = (int)*psVar4 << 0x10;
      piVar5[1] = (int)psVar4[1] << 0x10;
      psVar4 = psVar4 + 4;
      piVar5 = piVar5 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  for (; iVar7 < (int)uVar2; iVar7 = iVar7 + 1) {
    *(int *)(uVar3 + iVar7 * 4) = (int)*(short *)(param_3 + iVar7 * 2) << 0x10;
  }
  return uVar3;
}

/* ref: FUN_00dbc0e0 */
unsigned int F_00dbc0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbc0e0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (0 < param_1[3]) {
    iVar1 = *param_1;
    if ((iVar1 == *param_2) && (param_1[1] == param_2[1])) {
      uVar2 = F_00da5f30(iVar1);
      F_00dbbd20(param_1[2],param_1[4],param_2[2],param_2[4],
                   (int)*(short *)(uVar2 + 8) * param_1[1],param_1[3]);
      return 0;
    }
    uVar2 = F_00da5f30(iVar1);
    uVar3 = F_00da5f30(*param_2);
    iVar4 = (int)*(short *)(uVar3 + 8) * param_2[1];
    iVar1 = param_1[4];
    iVar5 = (int)*(short *)(uVar2 + 8) * param_1[1];
    if ((iVar5 - iVar1 == 0) && (iVar4 - param_2[4] == 0)) {
      F_00dbba90(*param_1,param_1[2],*param_2,param_2[2],param_1[3] * param_1[1]);
      return 0;
    }
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(uint *)(gen_frame + 0x4)) = 0;
    (*(uint *)(gen_frame + 0x8)) = 0x80000000;
    if (iVar5 - iVar1 == 0) {
      uVar2 = param_1[3] * iVar4;
      if (0 < (int)uVar2) {
        F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(undefined4 *)(gen_frame + 0x0)),((int)uVar2 < 0) - 1 & uVar2,1);
      }
      (*(uint *)(gen_frame + 0x4)) = uVar2;
      F_00dbba90(*param_1,param_1[2],*param_2,(*(undefined4 *)(gen_frame + 0x0)),param_1[1] * param_1[3]);
      F_00dbbd20((*(undefined4 *)(gen_frame + 0x0)),iVar4,param_2[2],param_2[4],iVar4,param_1[3]);
    }
    else {
      uVar2 = param_1[3] * iVar5;
      if (0 < (int)uVar2) {
        F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(undefined4 *)(gen_frame + 0x0)),uVar2 & ((int)uVar2 < 0) - 1,1);
      }
      (*(uint *)(gen_frame + 0x4)) = uVar2;
      F_00dbbd20(param_1[2],param_1[4],(*(undefined4 *)(gen_frame + 0x0)),iVar5,iVar5,param_1[3]);
      F_00dbba90(*param_1,(*(undefined4 *)(gen_frame + 0x0)),*param_2,param_2[2],param_1[1] * param_1[3]);
    }
    (*(uint *)(gen_frame + 0x4)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516a4),(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
    }
  }
  return 0;
}

/* ref: FUN_00dbc2a0 */
uint F_00dbc2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbc2a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00dbc2b0 */
uint F_00dbc2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbc2b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00dbc2c0 */
uint F_00dbc2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbc2c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00dbc2d0 */
uint F_00dbc2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbc2d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00dbc2e0 */
uint F_00dbc2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbc2e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00dbc2f0 */
uint F_00dbc2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbc2f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00dbc300 */
uint F_00dbc300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbc300u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00dbc310 */
uint F_00dbc310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbc310u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00dbc320 */
uint F_00dbc320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbc320u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00dbc330 */
uint F_00dbc330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbc330u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00dbc340 */
uint F_00dbc340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbc340u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dbc370 */
uint F_00dbc370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbc370u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00dbc380 */
uint F_00dbc380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbc380u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00dbc3c0 */
uint F_00dbc3c0(unsigned int gen_a0)
{
  GEN_ENTER(0xdbc3c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dbc400 */
uint F_00dbc400(unsigned int gen_a0)
{
  GEN_ENTER(0xdbc400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dbc490 */
unsigned int F_00dbc490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbc490u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  param_2[4] = in_ecx[1];
  param_2[8] = in_ecx[2];
  param_2[0xc] = in_ecx[3];
  param_2[1] = in_ecx[4];
  param_2[5] = in_ecx[5];
  param_2[9] = in_ecx[6];
  param_2[0xd] = in_ecx[7];
  param_2[2] = in_ecx[8];
  param_2[6] = in_ecx[9];
  param_2[10] = in_ecx[10];
  param_2[0xe] = in_ecx[0xb];
  param_2[3] = in_ecx[0xc];
  param_2[7] = in_ecx[0xd];
  param_2[0xb] = in_ecx[0xe];
  param_2[0xf] = in_ecx[0xf];
  return 0;
}

/* ref: FUN_00dbc500 */
unsigned int F_00dbc500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbc500u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  double * param_2 = (double *)(uintptr_t)gen_a1;
  *param_2 = (double)*in_ecx;
  param_2[4] = (double)in_ecx[1];
  param_2[8] = (double)in_ecx[2];
  param_2[0xc] = (double)in_ecx[3];
  param_2[1] = (double)in_ecx[4];
  param_2[5] = (double)in_ecx[5];
  param_2[9] = (double)in_ecx[6];
  param_2[0xd] = (double)in_ecx[7];
  param_2[2] = (double)in_ecx[8];
  param_2[6] = (double)in_ecx[9];
  param_2[10] = (double)in_ecx[10];
  param_2[0xe] = (double)in_ecx[0xb];
  param_2[3] = (double)in_ecx[0xc];
  param_2[7] = (double)in_ecx[0xd];
  param_2[0xb] = (double)in_ecx[0xe];
  param_2[0xf] = (double)in_ecx[0xf];
  return 0;
}

/* ref: FUN_00dbc5e0 */
unsigned int F_00dbc5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbc5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[4];
  in_ecx[2] = param_2[8];
  in_ecx[3] = param_2[0xc];
  in_ecx[4] = param_2[1];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[9];
  in_ecx[7] = param_2[0xd];
  in_ecx[8] = param_2[2];
  in_ecx[9] = param_2[6];
  in_ecx[10] = param_2[10];
  in_ecx[0xb] = param_2[0xe];
  in_ecx[0xc] = param_2[3];
  in_ecx[0xd] = param_2[7];
  in_ecx[0xe] = param_2[0xb];
  in_ecx[0xf] = param_2[0xf];
  return 0;
}

/* ref: FUN_00dbc650 */
unsigned int F_00dbc650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbc650u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  double * param_2 = (double *)(uintptr_t)gen_a1;
  *in_ecx = (float)*param_2;
  in_ecx[1] = (float)param_2[4];
  in_ecx[2] = (float)param_2[8];
  in_ecx[3] = (float)param_2[0xc];
  in_ecx[4] = (float)param_2[1];
  in_ecx[5] = (float)param_2[5];
  in_ecx[6] = (float)param_2[9];
  in_ecx[7] = (float)param_2[0xd];
  in_ecx[8] = (float)param_2[2];
  in_ecx[9] = (float)param_2[6];
  in_ecx[10] = (float)param_2[10];
  in_ecx[0xb] = (float)param_2[0xe];
  in_ecx[0xc] = (float)param_2[3];
  in_ecx[0xd] = (float)param_2[7];
  in_ecx[0xe] = (float)param_2[0xb];
  in_ecx[0xf] = (float)param_2[0xf];
  return 0;
}

/* ref: FUN_00dbc740 */
unsigned int F_00dbc740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbc740u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  double * param_2 = (double *)(uintptr_t)gen_a1;
  *param_2 = (double)*in_ecx;
  param_2[1] = (double)in_ecx[1];
  param_2[2] = (double)in_ecx[2];
  param_2[3] = (double)in_ecx[3];
  param_2[4] = (double)in_ecx[4];
  param_2[5] = (double)in_ecx[5];
  param_2[6] = (double)in_ecx[6];
  param_2[7] = (double)in_ecx[7];
  param_2[8] = (double)in_ecx[8];
  param_2[9] = (double)in_ecx[9];
  param_2[10] = (double)in_ecx[10];
  param_2[0xb] = (double)in_ecx[0xb];
  param_2[0xc] = (double)in_ecx[0xc];
  param_2[0xd] = (double)in_ecx[0xd];
  param_2[0xe] = (double)in_ecx[0xe];
  param_2[0xf] = (double)in_ecx[0xf];
  return 0;
}

/* ref: FUN_00dbc820 */
unsigned int F_00dbc820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbc820u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  double * param_2 = (double *)(uintptr_t)gen_a1;
  *in_ecx = (float)*param_2;
  in_ecx[1] = (float)param_2[1];
  in_ecx[2] = (float)param_2[2];
  in_ecx[3] = (float)param_2[3];
  in_ecx[4] = (float)param_2[4];
  in_ecx[5] = (float)param_2[5];
  in_ecx[6] = (float)param_2[6];
  in_ecx[7] = (float)param_2[7];
  in_ecx[8] = (float)param_2[8];
  in_ecx[9] = (float)param_2[9];
  in_ecx[10] = (float)param_2[10];
  in_ecx[0xb] = (float)param_2[0xb];
  in_ecx[0xc] = (float)param_2[0xc];
  in_ecx[0xd] = (float)param_2[0xd];
  in_ecx[0xe] = (float)param_2[0xe];
  in_ecx[0xf] = (float)param_2[0xf];
  return 0;
}

/* ref: FUN_00dbc990 */
uint F_00dbc990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbc990u, gen_a0, gen_a1, 0u, 0u);
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
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  in_ecx[4] = param_2[4] + in_ecx[4];
  in_ecx[5] = fVar1 + in_ecx[5];
  in_ecx[6] = fVar2 + in_ecx[6];
  in_ecx[7] = fVar3 + in_ecx[7];
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  in_ecx[8] = param_2[8] + in_ecx[8];
  in_ecx[9] = fVar1 + in_ecx[9];
  in_ecx[10] = fVar2 + in_ecx[10];
  in_ecx[0xb] = fVar3 + in_ecx[0xb];
  fVar1 = param_2[0xd];
  fVar2 = param_2[0xe];
  fVar3 = param_2[0xf];
  in_ecx[0xc] = param_2[0xc] + in_ecx[0xc];
  in_ecx[0xd] = fVar1 + in_ecx[0xd];
  in_ecx[0xe] = fVar2 + in_ecx[0xe];
  in_ecx[0xf] = fVar3 + in_ecx[0xf];
  return (uint)param_2;
}

/* ref: FUN_00dbc9d0 */
uint F_00dbc9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbc9d0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *in_ecx = *in_ecx - *param_2;
  in_ecx[1] = in_ecx[1] - fVar1;
  in_ecx[2] = in_ecx[2] - fVar2;
  in_ecx[3] = in_ecx[3] - fVar3;
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  in_ecx[4] = in_ecx[4] - param_2[4];
  in_ecx[5] = in_ecx[5] - fVar1;
  in_ecx[6] = in_ecx[6] - fVar2;
  in_ecx[7] = in_ecx[7] - fVar3;
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  in_ecx[8] = in_ecx[8] - param_2[8];
  in_ecx[9] = in_ecx[9] - fVar1;
  in_ecx[10] = in_ecx[10] - fVar2;
  in_ecx[0xb] = in_ecx[0xb] - fVar3;
  fVar1 = param_2[0xd];
  fVar2 = param_2[0xe];
  fVar3 = param_2[0xf];
  in_ecx[0xc] = in_ecx[0xc] - param_2[0xc];
  in_ecx[0xd] = in_ecx[0xd] - fVar1;
  in_ecx[0xe] = in_ecx[0xe] - fVar2;
  in_ecx[0xf] = in_ecx[0xf] - fVar3;
  return (uint)param_2;
}

/* ref: FUN_00dbd010 */
uint F_00dbd010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd010u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = in_ecx[1];
  uVar2 = in_ecx[2];
  uVar3 = in_ecx[3];
  *param_2 = *in_ecx;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = in_ecx[5];
  uVar2 = in_ecx[6];
  uVar3 = in_ecx[7];
  param_2[4] = in_ecx[4];
  param_2[5] = uVar1;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  uVar1 = in_ecx[9];
  uVar2 = in_ecx[10];
  uVar3 = in_ecx[0xb];
  param_2[8] = in_ecx[8];
  param_2[9] = uVar1;
  param_2[10] = uVar2;
  param_2[0xb] = uVar3;
  uVar1 = in_ecx[0xd];
  uVar2 = in_ecx[0xe];
  uVar3 = in_ecx[0xf];
  param_2[0xc] = in_ecx[0xc];
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00dbd040 */
uint F_00dbd040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd040u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *in_ecx = *param_2;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar2;
  in_ecx[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  in_ecx[4] = param_2[4];
  in_ecx[5] = uVar1;
  in_ecx[6] = uVar2;
  in_ecx[7] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  in_ecx[8] = param_2[8];
  in_ecx[9] = uVar1;
  in_ecx[10] = uVar2;
  in_ecx[0xb] = uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  in_ecx[0xc] = param_2[0xc];
  in_ecx[0xd] = uVar1;
  in_ecx[0xe] = uVar2;
  in_ecx[0xf] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00dbd070 */
uint F_00dbd070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd070u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = param_2 * 0x10;
  uVar1 = *(undefined4 *)(&REFG(undefined, 0x113dbf4) + iVar4);
  uVar2 = *(undefined4 *)(&REFG(undefined, 0x113dbf8) + iVar4);
  uVar3 = *(undefined4 *)(&REFG(undefined, 0x113dbfc) + iVar4);
  *in_ecx = *(undefined4 *)(&REFG(undefined, 0x113dbf0) + iVar4);
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar2;
  in_ecx[3] = uVar3;
  return (uint)(&REFG(undefined, 0x113dbf0) + iVar4);
}

/* ref: FUN_00dbd090 */
uint F_00dbd090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd090u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *in_ecx = *param_2;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar2;
  in_ecx[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  in_ecx[4] = param_2[4];
  in_ecx[5] = uVar1;
  in_ecx[6] = uVar2;
  in_ecx[7] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  in_ecx[8] = param_2[8];
  in_ecx[9] = uVar1;
  in_ecx[10] = uVar2;
  in_ecx[0xb] = uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  in_ecx[0xc] = param_2[0xc];
  in_ecx[0xd] = uVar1;
  in_ecx[0xe] = uVar2;
  in_ecx[0xf] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00dbd0c0 */
uint F_00dbd0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *in_ecx = uVar1;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar1;
  in_ecx[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00dbd0e0 */
uint F_00dbd0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  *in_ecx = uVar1;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar1;
  in_ecx[3] = uVar1;
  return param_2;
}

/* ref: FUN_00dbd100 */
uint F_00dbd100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd100u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  *in_ecx = uVar1;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar1;
  in_ecx[3] = uVar1;
  return param_2;
}

/* ref: FUN_00dbd150 */
uint F_00dbd150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd150u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(in_ecx + 0xc);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00dbd170 */
uint F_00dbd170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd170u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(in_ecx + 0x1c);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00dbd190 */
uint F_00dbd190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd190u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(in_ecx + 0x2c);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00dbd1b0 */
uint F_00dbd1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd1b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(in_ecx + 0x3c);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00dbd1d0 */
uint F_00dbd1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd1d0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = in_ecx[1];
  fVar2 = in_ecx[2];
  fVar3 = in_ecx[3];
  *param_2 = -(uint)(*in_ecx == 0.0);
  param_2[1] = -(uint)(fVar1 == 0.0);
  param_2[2] = -(uint)(fVar2 == 0.0);
  param_2[3] = -(uint)(fVar3 == 0.0);
  return (uint)param_2;
}

/* ref: FUN_00dbd1f0 */
uint F_00dbd1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd1f0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = in_ecx[2] + *in_ecx;
  fVar2 = in_ecx[3] + in_ecx[1];
  fVar3 = *in_ecx + in_ecx[2];
  fVar4 = in_ecx[1] + in_ecx[3];
  *param_2 = fVar2 + fVar1;
  param_2[1] = fVar1 + fVar2;
  param_2[2] = fVar4 + fVar3;
  param_2[3] = fVar3 + fVar4;
  return (uint)param_2;
}

/* ref: FUN_00dbd220 */
byte F_00dbd220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd220u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  undefined4 uVar2;
  
  (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)(in_ecx[1] - param_2[1] == 0.0);
  (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)(*in_ecx - *param_2 == 0.0);
  (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)(in_ecx[2] - param_2[2] == 0.0);
  (*(undefined4 *)((char *)&auVar1 + 12)) = -(uint)(in_ecx[3] - param_2[3] == 0.0);
  uVar2 = gen_movmskps(&(auVar1));
  return ((byte)uVar2 & 7) == 7;
}

/* ref: FUN_00dbd250 */
uint F_00dbd250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbd250u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
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
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = in_ecx[1];
  fVar5 = in_ecx[2];
  fVar6 = in_ecx[3];
  fVar7 = in_ecx[0xd];
  fVar8 = in_ecx[0xe];
  fVar9 = in_ecx[0xf];
  fVar10 = in_ecx[5];
  fVar11 = in_ecx[6];
  fVar12 = in_ecx[7];
  fVar13 = in_ecx[9];
  fVar14 = in_ecx[10];
  fVar15 = in_ecx[0xb];
  *param_3 = ((fVar1 * *in_ecx + in_ecx[0xc]) + fVar2 * in_ecx[4]) + fVar3 * in_ecx[8];
  param_3[1] = ((fVar1 * fVar4 + fVar7) + fVar2 * fVar10) + fVar3 * fVar13;
  param_3[2] = ((fVar1 * fVar5 + fVar8) + fVar2 * fVar11) + fVar3 * fVar14;
  param_3[3] = ((fVar1 * fVar6 + fVar9) + fVar2 * fVar12) + fVar3 * fVar15;
  return (uint)param_2;
}

/* ref: FUN_00dbd290 */
uint F_00dbd290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbd290u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
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
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = in_ecx[5];
  fVar5 = in_ecx[6];
  fVar6 = in_ecx[7];
  fVar7 = in_ecx[1];
  fVar8 = in_ecx[2];
  fVar9 = in_ecx[3];
  fVar10 = in_ecx[9];
  fVar11 = in_ecx[10];
  fVar12 = in_ecx[0xb];
  *param_3 = (fVar2 * in_ecx[4] + fVar1 * *in_ecx) + fVar3 * in_ecx[8];
  param_3[1] = (fVar2 * fVar4 + fVar1 * fVar7) + fVar3 * fVar10;
  param_3[2] = (fVar2 * fVar5 + fVar1 * fVar8) + fVar3 * fVar11;
  param_3[3] = (fVar2 * fVar6 + fVar1 * fVar9) + fVar3 * fVar12;
  return (uint)param_2;
}

/* ref: FUN_00dbd3c0 */
uint F_00dbd3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd3c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(in_ecx + 0x1c);
  uVar2 = *(undefined4 *)(in_ecx + 0x2c);
  uVar3 = *(undefined4 *)(in_ecx + 0x3c);
  *param_2 = *(undefined4 *)(in_ecx + 0xc);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00dbd400 */
uint F_00dbd400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd400u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dbd410 */
uint F_00dbd410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd410u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dbd480 */
uint F_00dbd480(unsigned int gen_a0)
{
  GEN_ENTER(0xdbd480u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  return (uint)(((*(uint *)&gen_args[0]) - 1 & (*(uint *)&gen_args[0])) == 0);
}

/* ref: FUN_00dbd4a0 */
uint F_00dbd4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dbd4b0 */
uint F_00dbd4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dbd4e0 */
uint F_00dbd4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dbd4f0 */
uint F_00dbd4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dbd580 */
uint F_00dbd580(unsigned int gen_a0)
{
  GEN_ENTER(0xdbd580u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  return (uint)(((*(uint *)&gen_args[0]) - 1 & (*(uint *)&gen_args[0])) == 0);
}

/* ref: FUN_00dbd5a0 */
uint F_00dbd5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dbd5b0 */
uint F_00dbd5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dbd5e0 */
unsigned int F_00dbd5e0(void)
{
  GEN_ENTER(0xdbd5e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00dbd5f0 */
uint F_00dbd5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd5f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + param_2 * 8);
}

/* ref: FUN_00dbd600 */
uint F_00dbd600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd600u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + 4 + param_2 * 8);
}

/* ref: FUN_00dbd610 */
uint F_00dbd610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbd610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  *(undefined4 *)(uVar1 + 4 + param_1 * 8) = param_2;
  return uVar1;
}

/* ref: FUN_00dbd640 */
uint F_00dbd640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdbd640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  *(undefined4 *)this = param_1;
  *(uint *)((int)this + 4) = param_2 | 0x80000000;
  *(uint *)((int)this + 8) = param_3 - 1U;
  return param_3 - 1U;
}

/* ref: FUN_00dbd660 */
uint F_00dbd660(unsigned int gen_a0)
{
  GEN_ENTER(0xdbd660u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = 8;
  if (8 < param_1 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 2);
  }
  return iVar1 * 8;
}

/* ref: FUN_00dbd680 */
uint F_00dbd680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *param_1;
  uVar2 = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 4) = param_1[1];
  uVar3 = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 8) = param_1[2];
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00dbd6b0 */
unsigned int F_00dbd6b0(void)
{
  GEN_ENTER(0xdbd6b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00dbd6c0 */
uint F_00dbd6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(*(int *)this + param_1 * 0x10);
}

/* ref: FUN_00dbd6e0 */
uint F_00dbd6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)(*(int *)this + 8 + param_1 * 0x10);
}

/* ref: FUN_00dbd700 */
uint F_00dbd700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdbd700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  
  iVar1 = *(int *)this;
  *(undefined4 *)(iVar1 + 8 + param_1 * 0x10) = param_2;
  *(undefined4 *)(iVar1 + 0xc + param_1 * 0x10) = param_3;
  return param_1 * 2;
}

/* ref: FUN_00dbd720 */
uint F_00dbd720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbd720u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_00dbd750 */
uint F_00dbd750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdbd750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  *(undefined4 *)this = param_1;
  *(uint *)((int)this + 4) = param_2 | 0x80000000;
  *(uint *)((int)this + 8) = param_3 - 1U;
  return param_3 - 1U;
}

/* ref: FUN_00dbd770 */
uint F_00dbd770(unsigned int gen_a0)
{
  GEN_ENTER(0xdbd770u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = 8;
  if (8 < param_1 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 2);
  }
  return iVar1 << 4;
}

/* ref: FUN_00dbd790 */
uint F_00dbd790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *param_1;
  uVar2 = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 4) = param_1[1];
  uVar3 = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 8) = param_1[2];
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00dbd7c0 */
uint F_00dbd7c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbd7c0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  return ((*(uint *)&gen_args[0]) >> 4) * -0x61c8864f & (*(uint *)&gen_args[2]);
}

/* ref: FUN_00dbd7e0 */
uint F_00dbd7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xdbd7e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  return (uint)param_1;
}

/* ref: FUN_00dbd800 */
uint F_00dbd800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd800u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  if (((*(uint *)&gen_args[0]) & (*(uint *)&gen_args[1])) != 0xffffffff) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00dbd820 */
uint F_00dbd820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdbd820u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  if ((param_1 == param_3) && (param_2 == param_4)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00dbd850 */
uint F_00dbd850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd850u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = (*(uint *)(in_ecx + 4) & 0x80000000) == 0;
  return param_2;
}

/* ref: FUN_00dbd880 */
uint F_00dbd880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd880u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = (*(uint *)(in_ecx + 4) & 0x80000000) == 0;
  return param_2;
}

/* ref: FUN_00dbd8b0 */
uint F_00dbd8b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdbd8b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    F_00dbdbb0(this,param_1,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar4 = (param_2 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  iVar2 = *(int *)(iVar1 + uVar4 * 8);
  uVar3 = 1;
  do {
    if (iVar2 == -1) {
LAB_00dbd912: ;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + uVar3;
      *(uint *)(iVar1 + uVar4 * 8) = param_2;
      *(undefined4 *)(*(int *)this + 4 + uVar4 * 8) = param_3;
      return uVar3;
    }
    if (*(uint *)(iVar1 + uVar4 * 8) == param_2) {
      uVar3 = 0;
      goto LAB_00dbd912;
    }
    uVar4 = uVar4 + 1 & *(uint *)((int)this + 8);
    iVar2 = *(int *)(iVar1 + uVar4 * 8);
  } while( true );
}

/* ref: FUN_00dbd930 */
uint F_00dbd930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)((int)this + 8);
  if (0 < (int)uVar1) {
    uVar3 = (param_1 >> 4) * -0x61c8864f & uVar1;
    uVar2 = *(uint *)(*(int *)this + uVar3 * 8);
    while (uVar2 != 0xffffffff) {
      if (uVar2 == param_1) {
        return uVar3;
      }
      uVar3 = uVar3 + 1 & uVar1;
      uVar2 = *(uint *)(*(int *)this + uVar3 * 8);
    }
  }
  return uVar1 + 1;
}

/* ref: FUN_00dbd970 */
uint F_00dbd970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbd970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)((int)this + 8);
  if (0 < (int)uVar1) {
    iVar2 = *(int *)this;
    uVar4 = (param_1 >> 4) * -0x61c8864f & uVar1;
    uVar3 = *(uint *)(iVar2 + uVar4 * 8);
    while (uVar3 != 0xffffffff) {
      if (uVar3 == param_1) {
        return *(uint *)(iVar2 + 4 + uVar4 * 8);
      }
      uVar4 = uVar4 + 1 & uVar1;
      uVar3 = *(uint *)(iVar2 + uVar4 * 8);
    }
  }
  return param_2;
}

/* ref: FUN_00dbd9c0 */
uint F_00dbd9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbd9c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd930(this,param_1);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    *param_2 = *(undefined4 *)(*(int *)this + 4 + uVar1 * 8);
    return 0;
  }
  return 1;
}

/* ref: FUN_00dbd9f0 */
uint F_00dbd9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbd9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  *(undefined4 *)(*(int *)this + param_1 * 8) = 0xffffffff;
  iVar1 = *(int *)this;
  uVar5 = *(uint *)((int)this + 8);
  uVar3 = uVar5 + param_1 & uVar5;
  iVar2 = *(int *)(iVar1 + uVar3 * 8);
  while (iVar2 != -1) {
    uVar3 = uVar3 + uVar5 & uVar5;
    iVar2 = *(int *)(iVar1 + uVar3 * 8);
  }
  uVar4 = uVar3 + 1 & uVar5;
  uVar6 = param_1 + 1 & uVar5;
  iVar1 = *(int *)(iVar1 + uVar6 * 8);
  uVar3 = uVar4;
  uVar7 = param_1;
  while (iVar1 != -1) {
    iVar1 = *(int *)this;
    uVar5 = (*(uint *)(iVar1 + uVar6 * 8) >> 4) * -0x61c8864f & uVar5;
    if ((((uVar6 < uVar4) || (uVar5 <= uVar7)) &&
        ((uVar7 <= uVar6 || ((uVar5 <= uVar7 && (uVar6 < uVar5)))))) &&
       ((uVar5 <= uVar7 || (uVar4 <= uVar5)))) {
      *(undefined4 *)(iVar1 + uVar7 * 8) = *(undefined4 *)(iVar1 + uVar6 * 8);
      *(undefined4 *)(*(int *)this + 4 + uVar7 * 8) = *(undefined4 *)(*(int *)this + 4 + uVar6 * 8);
      *(undefined4 *)(*(int *)this + uVar6 * 8) = 0xffffffff;
      uVar7 = uVar6;
    }
    uVar5 = *(uint *)((int)this + 8);
    uVar3 = *(uint *)this;
    uVar6 = uVar6 + 1 & uVar5;
    iVar1 = *(int *)(uVar3 + uVar6 * 8);
  }
  return uVar3;
}

/* ref: FUN_00dbdaa0 */
uint F_00dbdaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbdaa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = *(uint *)((int)this + 8);
  iVar6 = 0;
  if (-1 < (int)uVar1) {
    iVar2 = *(int *)this;
    do {
      uVar3 = *(uint *)(iVar2 + iVar6 * 8);
      if (uVar3 != 0xffffffff) {
        uVar5 = (uVar3 >> 4) * -0x61c8864f & uVar1;
        uVar4 = *(uint *)(iVar2 + uVar5 * 8);
        while (uVar4 != uVar3) {
          uVar5 = uVar5 + 1 & uVar1;
          uVar4 = *(uint *)(iVar2 + uVar5 * 8);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <= (int)uVar1);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00dbdaf0 */
uint F_00dbdaf0(unsigned int gen_a0)
{
  GEN_ENTER(0xdbdaf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 8) + 1;
  uVar1 = 0;
  if (0 < iVar2) {
    do {
      *(undefined4 *)(*(int *)this + uVar1 * 8) = 0xffffffff;
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < iVar2);
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0x80000000;
  return uVar1;
}

/* ref: FUN_00dbdb20 */
uint F_00dbdb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbdb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dbdaf0(this);
  if ((*(uint *)((int)this + 4) & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1,*(undefined4 *)this,*(int *)((int)this + 8) * 8 + 8)
    ;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_00dbdb70 */
unsigned int F_00dbdb70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbdb70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 >> 3;
  *(undefined4 *)this = param_1;
  *(uint *)((int)this + 8) = uVar2 - 1;
  iVar1 = 0;
  *(undefined4 *)((int)this + 4) = 0x80000000;
  if (uVar2 != 0) {
    do {
      *(undefined4 *)(*(int *)this + iVar1 * 8) = 0xffffffff;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)uVar2);
  }
  return 0;
}

/* ref: FUN_00dbdbb0 */
uint F_00dbdbb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbdbb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = param_2;
  if (param_2 < 9) {
    iVar6 = 8;
  }
  uVar1 = *(uint *)((int)this + 4);
  iVar2 = *(int *)this;
  iVar5 = *(int *)((int)this + 8) + 1;
  uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,iVar6 * 8);
  if (uVar3 == 0) {
    return 1;
  }
  *(uint *)this = uVar3;
  iVar4 = 0;
  if (0 < iVar6) {
    do {
      *(undefined4 *)(*(int *)this + iVar4 * 8) = 0xffffffff;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar6);
  }
  *(int *)((int)this + 8) = iVar6 + -1;
  iVar6 = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (0 < iVar5) {
    do {
      iVar4 = *(int *)(iVar2 + iVar6 * 8);
      if (iVar4 != -1) {
        F_00dbd8b0(this,param_1,iVar4,*(undefined4 *)(iVar2 + 4 + iVar6 * 8));
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
  }
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1,iVar2,iVar5 * 8);
  }
  return 0;
}

/* ref: FUN_00dbdca0 */
unsigned int F_00dbdca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbdca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint * puVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *(int *)((int)this + 8)) {
    puVar2 = (uint *)(iVar1 * 0x10 + *(int *)this);
    do {
      if ((*puVar2 & puVar2[1]) != 0xffffffff) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 4;
    } while (iVar1 <= *(int *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_00dbdcd0 */
uint F_00dbdcd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xdbdcd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    F_00dbe080(this,param_1,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar4 = (param_2 >> 4) * -0x61c8864f;
  do {
    uVar4 = uVar4 & *(uint *)((int)this + 8);
    uVar3 = *(uint *)(iVar1 + uVar4 * 0x10);
    uVar2 = *(uint *)(iVar1 + 4 + uVar4 * 0x10);
    if ((uVar3 & uVar2) == 0xffffffff) {
      uVar3 = 1;
LAB_00dbdd3a: ;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + uVar3;
      *(uint *)(iVar1 + uVar4 * 0x10) = param_2;
      *(uint *)(iVar1 + 4 + uVar4 * 0x10) = param_3;
      iVar1 = *(int *)this;
      *(undefined4 *)(iVar1 + 8 + uVar4 * 0x10) = param_4;
      *(undefined4 *)(iVar1 + 0xc + uVar4 * 0x10) = param_5;
      return uVar3;
    }
    if ((uVar3 == param_2) && (uVar2 == param_3)) {
      uVar3 = 0;
      goto LAB_00dbdd3a;
    }
    uVar4 = uVar4 + 1;
  } while( true );
}

/* ref: FUN_00dbdd70 */
uint F_00dbdd70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbdd70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)((int)this + 8);
  if (0 < (int)uVar1) {
    uVar4 = (param_1 >> 4) * -0x61c8864f;
    while( true ) {
      uVar4 = uVar4 & uVar1;
      uVar2 = *(uint *)(*(int *)this + uVar4 * 0x10);
      uVar3 = *(uint *)(*(int *)this + 4 + uVar4 * 0x10);
      if ((uVar2 & uVar3) == 0xffffffff) break;
      if ((uVar2 == param_1) && (uVar3 == param_2)) {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
    }
  }
  return uVar1 + 1;
}

/* ref: FUN_00dbddc0 */
uint F_00dbddc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdbddc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (0 < (int)*(uint *)((int)this + 8)) {
    iVar1 = *(int *)this;
    uVar4 = (param_1 >> 4) * -0x61c8864f;
    while( true ) {
      uVar4 = uVar4 & *(uint *)((int)this + 8);
      uVar2 = *(uint *)(iVar1 + uVar4 * 0x10);
      uVar3 = *(uint *)(iVar1 + 4 + uVar4 * 0x10);
      if ((uVar2 & uVar3) == 0xffffffff) break;
      if ((uVar2 == param_1) && (uVar3 == param_2)) {
        return *(uint *)(iVar1 + 8 + uVar4 * 0x10);
      }
      uVar4 = uVar4 + 1;
    }
  }
  return param_3;
}

/* ref: FUN_00dbde20 */
uint F_00dbde20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdbde20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int iVar1;
  uint uVar2;
  
  uVar2 = F_00dbdd70(this,param_1,param_2);
  if ((int)uVar2 <= *(int *)((int)this + 8)) {
    iVar1 = *(int *)this;
    *param_3 = *(undefined4 *)(iVar1 + 8 + uVar2 * 0x10);
    param_3[1] = *(undefined4 *)(iVar1 + 0xc + uVar2 * 0x10);
    return 0;
  }
  return 1;
}

/* ref: FUN_00dbde60 */
unsigned int F_00dbde60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbde60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)this;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  *(undefined4 *)(iVar1 + param_1 * 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 4 + param_1 * 0x10) = 0xffffffff;
  uVar4 = *(uint *)((int)this + 8);
  uVar3 = param_1;
  do {
    uVar3 = uVar4 + uVar3 & uVar4;
  } while ((*(uint *)(*(int *)this + uVar3 * 0x10) & *(uint *)(*(int *)this + 4 + uVar3 * 0x10)) !=
           0xffffffff);
  uVar3 = uVar3 + 1 & uVar4;
  uVar4 = param_1 + 1 & uVar4;
  while( true ) {
    iVar1 = *(int *)this;
    uVar2 = *(uint *)(iVar1 + 4 + uVar4 * 0x10);
    if ((*(uint *)(iVar1 + uVar4 * 0x10) & uVar2) == 0xffffffff) break;
    uVar5 = (*(uint *)(iVar1 + uVar4 * 0x10) >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
    if ((((uVar4 < uVar3) || (uVar5 <= param_1)) &&
        ((param_1 <= uVar4 || ((uVar5 <= param_1 && (uVar4 < uVar5)))))) &&
       ((uVar5 <= param_1 || (uVar3 <= uVar5)))) {
      *(undefined4 *)(iVar1 + param_1 * 0x10) = *(undefined4 *)(iVar1 + uVar4 * 0x10);
      *(uint *)(iVar1 + 4 + param_1 * 0x10) = uVar2;
      iVar1 = *(int *)this;
      *(undefined4 *)(iVar1 + 8 + param_1 * 0x10) = *(undefined4 *)(iVar1 + 8 + uVar4 * 0x10);
      *(undefined4 *)(iVar1 + 0xc + param_1 * 0x10) = *(undefined4 *)(iVar1 + 0xc + uVar4 * 0x10);
      iVar1 = *(int *)this;
      *(undefined4 *)(iVar1 + uVar4 * 0x10) = 0xffffffff;
      *(undefined4 *)(iVar1 + 4 + uVar4 * 0x10) = 0xffffffff;
      param_1 = uVar4;
    }
    uVar4 = uVar4 + 1 & *(uint *)((int)this + 8);
  }
  return 0;
}

/* ref: FUN_00dbdf40 */
uint F_00dbdf40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbdf40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  int local_c;
  
  uVar1 = *(uint *)((int)this + 8);
  if (-1 < (int)uVar1) {
    puVar2 = *(uint * PTR32 *)this;
    local_c = uVar1 + 1;
    puVar5 = puVar2;
    do {
      uVar3 = *puVar5;
      if ((uVar3 & puVar5[1]) != 0xffffffff) {
        uVar4 = (uVar3 >> 4) * -0x61c8864f;
        while ((uVar4 = uVar4 & uVar1, puVar2[uVar4 * 4] != uVar3 ||
               (puVar2[uVar4 * 4 + 1] != puVar5[1]))) {
          uVar4 = uVar4 + 1;
        }
      }
      puVar5 = puVar5 + 4;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00dbdfc0 */
uint F_00dbdfc0(unsigned int gen_a0)
{
  GEN_ENTER(0xdbdfc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint in_EAX = 0;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 8) + 1;
  if (0 < iVar2) {
    in_EAX = 0;
    do {
      iVar1 = *(int *)this;
      *(undefined4 *)(in_EAX + iVar1) = 0xffffffff;
      *(undefined4 *)(in_EAX + 4 + iVar1) = 0xffffffff;
      in_EAX = in_EAX + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0x80000000;
  return in_EAX;
}

/* ref: FUN_00dbdff0 */
uint F_00dbdff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbdff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dbdfc0(this);
  if ((*(uint *)((int)this + 4) & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))
                      (param_1,*(undefined4 *)this,(*(int *)((int)this + 8) + 1) * 0x10);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_00dbe040 */
unsigned int F_00dbe040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbe040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_2 >> 4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0x80000000;
  *(uint *)((int)this + 8) = uVar3 - 1;
  if (uVar3 != 0) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)this;
      *(undefined4 *)(iVar2 + iVar1) = 0xffffffff;
      *(undefined4 *)(iVar2 + 4 + iVar1) = 0xffffffff;
      iVar2 = iVar2 + 0x10;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00dbe080 */
uint F_00dbe080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbe080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint * puVar9;
  
  iVar8 = param_2;
  if (param_2 < 9) {
    iVar8 = 8;
  }
  uVar1 = *(uint *)((int)this + 4);
  puVar2 = *(uint * PTR32 *)this;
  iVar7 = *(int *)((int)this + 8) + 1;
  uVar4 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,iVar8 << 4);
  if (uVar4 != 0) {
    *(uint *)this = uVar4;
    if (0 < iVar8) {
      iVar5 = 0;
      iVar6 = iVar8;
      do {
        iVar3 = *(int *)this;
        *(undefined4 *)(iVar5 + iVar3) = 0xffffffff;
        *(undefined4 *)(iVar5 + 4 + iVar3) = 0xffffffff;
        iVar5 = iVar5 + 0x10;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *(undefined4 *)((int)this + 4) = 0;
    *(int *)((int)this + 8) = iVar8 + -1;
    puVar9 = puVar2;
    param_2 = iVar7;
    if (0 < iVar7) {
      do {
        if ((*puVar9 & puVar9[1]) != 0xffffffff) {
          F_00dbdcd0(this,param_1,*puVar9,puVar9[1],puVar9[2],puVar9[3]);
        }
        iVar8 = param_2 + -1;
        puVar9 = puVar9 + 4;
        param_2 = iVar8;
      } while (iVar8 != 0);
    }
    if ((uVar1 & 0x80000000) == 0) {
      ((code *)*(gen_code32 *)(*param_1 + 8))(param_1,puVar2,iVar7 * 0x10);
    }
    return 0;
  }
  return 1;
}

/* ref: FUN_00dbe160 */
uint F_00dbe160(unsigned int gen_a0)
{
  GEN_ENTER(0xdbe160u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00dbe180 */
unsigned int F_00dbe180(unsigned int gen_a0)
{
  GEN_ENTER(0xdbe180u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00dbe1b0 */
uint F_00dbe1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbe1b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd930(this,param_2);
  *(bool *)param_1 = (int)uVar1 <= *(int *)((int)this + 8);
  return param_1;
}

/* ref: FUN_00dbe1d0 */
uint F_00dbe1d0(unsigned int gen_a0)
{
  GEN_ENTER(0xdbe1d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00dbe1f0 */
unsigned int F_00dbe1f0(unsigned int gen_a0)
{
  GEN_ENTER(0xdbe1f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00dbe220 */
uint F_00dbe220(unsigned int gen_a0)
{
  GEN_ENTER(0xdbe220u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00dbe240 */
unsigned int F_00dbe240(unsigned int gen_a0)
{
  GEN_ENTER(0xdbe240u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00dbe270 */
uint F_00dbe270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdbe270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00dbdd70(this,param_2,param_3);
  *(bool *)param_1 = (int)uVar1 <= *(int *)((int)this + 8);
  return param_1;
}

/* ref: FUN_00dbe2a0 */
uint F_00dbe2a0(unsigned int gen_a0)
{
  GEN_ENTER(0xdbe2a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00dbe2c0 */
unsigned int F_00dbe2c0(unsigned int gen_a0)
{
  GEN_ENTER(0xdbe2c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00dbe300 */
uint F_00dbe300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdbe300u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00dbdcd0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00dbe330 */
uint F_00dbe330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbe330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00dbdb70(this,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00dbe350 */
uint F_00dbe350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdbe350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint * param_4 = (uint *)(uintptr_t)gen_a4;
  uint uVar1;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    uVar1 = F_00dbdbb0(this,param_1,*(int *)((int)this + 8) * 2 + 2);
    *param_4 = uVar1;
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    *param_4 = 0;
  }
  uVar1 = F_00dbd8b0(this,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00dbe3b0 */
uint F_00dbe3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdbe3b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    F_00dbdbb0(this,param_1,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar2 = (param_2 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  if (*(uint *)(iVar1 + uVar2 * 8) != param_2) {
    while (*(int *)(iVar1 + uVar2 * 8) != -1) {
      uVar2 = uVar2 + 1 & *(uint *)((int)this + 8);
      if (*(uint *)(iVar1 + uVar2 * 8) == param_2) {
        return uVar2;
      }
    }
    *(uint *)(iVar1 + uVar2 * 8) = param_2;
    *(undefined4 *)(*(int *)this + 4 + uVar2 * 8) = param_3;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  }
  return uVar2;
}

/* ref: FUN_00dbe420 */
uint F_00dbe420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbe420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dbd930(this,param_1);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    F_00dbd9f0(this,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_00dbe450 */
uint F_00dbe450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbe450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = 8;
  if (8 < param_2 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_2 * 2);
  }
  uVar2 = F_00dbdbb0(this,param_1,iVar1);
  return uVar2;
}

/* ref: FUN_00dbe480 */
uint F_00dbe480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbe480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00dbe040(this,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00dbe4a0 */
uint F_00dbe4a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xdbe4a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint * param_6 = (uint *)(uintptr_t)gen_a6;
  uint uVar1;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    uVar1 = F_00dbe080(this,param_1,*(int *)((int)this + 8) * 2 + 2);
    *param_6 = uVar1;
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    *param_6 = 0;
  }
  uVar1 = F_00dbdcd0(this,param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00dbe510 */
unsigned int F_00dbe510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xdbe510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    F_00dbe080(this,param_1,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar4 = (param_2 >> 4) * -0x61c8864f;
  while( true ) {
    uVar4 = uVar4 & *(uint *)((int)this + 8);
    uVar2 = *(uint *)(iVar1 + uVar4 * 0x10);
    uVar3 = *(uint *)(iVar1 + 4 + uVar4 * 0x10);
    if ((uVar2 == param_2) && (uVar3 == param_3)) break;
    if ((uVar2 & uVar3) == 0xffffffff) {
      *(uint *)(iVar1 + uVar4 * 0x10) = param_2;
      *(uint *)(iVar1 + 4 + uVar4 * 0x10) = param_3;
      iVar1 = *(int *)this;
      *(undefined4 *)(iVar1 + 8 + uVar4 * 0x10) = param_4;
      *(undefined4 *)(iVar1 + 0xc + uVar4 * 0x10) = param_5;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      return 0;
    }
    uVar4 = uVar4 + 1;
  }
  return 0;
}

/* ref: FUN_00dbe5a0 */
uint F_00dbe5a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbe5a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbdd70(this,param_1,param_2);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    F_00dbde60(this,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_00dbe5e0 */
uint F_00dbe5e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbe5e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = 8;
  if (8 < param_2 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_2 * 2);
  }
  uVar2 = F_00dbe080(this,param_1,iVar1);
  return uVar2;
}

/* ref: FUN_00dbe610 */
uint F_00dbe610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbe610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00dbe330(this,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00dbe630 */
uint F_00dbe630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdbe630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00dbe350(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00dbe650 */
uint F_00dbe650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbe650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbe3b0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dbe670 */
uint F_00dbe670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbe670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00dbe480(this,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00dbe690 */
uint F_00dbe690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xdbe690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_00dbe4a0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00dbe6c0 */
unsigned int F_00dbe6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdbe6c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00dbe510(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4);
  return 0;
}

/* ref: FUN_00dbe6f0 */
uint F_00dbe6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbe6f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dbe5e0(this,&REFG(undefined * PTR32, 0x13516ac),param_1);
  return uVar1;
}

/* ref: FUN_00dbe710 */
uint F_00dbe710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbe710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  if (param_1 != 0) {
    F_00dbe5e0(this,&REFG(undefined * PTR32, 0x13516ac),param_1);
  }
  return (uint)this;
}

/* ref: FUN_00dbe750 */
uint F_00dbe750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbe750u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00dbe7a0 */
uint F_00dbe7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbe7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x18);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 0x18;
}

/* ref: FUN_00dbe7e0 */
uint F_00dbe7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbe7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(*(undefined4 *)((int)this + 0xc),this,0x18);
  }
  puVar1 = ((uint *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0x18)));
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  uVar2 = F_00da0f10(*param_1,*(undefined4 *)((int)this + 0xc));
  *puVar1 = uVar2;
  puVar1[4] = param_1[4];
  puVar1[1] = param_1[1];
  uVar2 = param_1[2];
  puVar1[2] = uVar2;
  puVar1[3] = param_1[3];
  return uVar2;
}

/* ref: FUN_00dbe850 */
uint F_00dbe850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbe850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0xc)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = param_1;
  (*(undefined4 *)(gen_frame + 0x14)) = 2;
  uVar1 = F_00dbe7e0(this,&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_00dbe890 */
uint F_00dbe890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdbe890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = param_1;
  (*(undefined4 *)(gen_frame + 0xc)) = param_3;
  (*(undefined4 *)(gen_frame + 0x8)) = param_2;
  (*(undefined4 *)(gen_frame + 0x14)) = 1;
  (*(undefined4 *)(gen_frame + 0x10)) = param_4;
  uVar1 = F_00dbe7e0(this,&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_00dbe8d0 */
uint F_00dbe8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbe8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x11120];
  uint uVar1;
  DWORD DVar2;
  
  (*(undefined4 *)(gen_frame + 0x11118)) = 0xdbe8dd;
  (*(CHAR * PTR32 *)(gen_frame + 0x11090)) = ((CHAR *)(gen_frame + 0x1109c));
  (*(uint *)(gen_frame + 0x11098)) = 0x80000080;
  (*(undefined4 *)(gen_frame + 0x11094)) = 1;
  ((CHAR *)(gen_frame + 0x1109c))[0] = '\0';
  F_00da4df0(&(*(undefined4 *)(gen_frame + 0x11004)),param_1);
  if ((*(int *)(gen_frame + 0x11008)) != 1 && -1 < (*(int *)(gen_frame + 0x11008)) + -1) {
    F_00da45a0(&(*(undefined4 *)(gen_frame + 0x11004)),0x5c,0x2f,1);
    uVar1 = F_00da44d0(&(*(undefined4 *)(gen_frame + 0x11004)),&REFG(undefined, 0x1080808));
    if (uVar1 == 0) {
      F_00da4d70(&(*(undefined4 *)(gen_frame + 0x11004)),&REFG(undefined, 0x1080808));
    }
    F_00db2660((*(undefined4 *)(gen_frame + 0x11004)),&(*(CHAR * PTR32 *)(gen_frame + 0x11090)));
  }
  (*(int *)(gen_frame + 0x11008)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x1100c))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516a4),(*(undefined4 *)(gen_frame + 0x11004)),(*(uint *)(gen_frame + 0x1100c)) & 0x3fffffff);
  }
  DVar2 = gen_imp_GetFullPathNameA((*(CHAR * PTR32 *)(gen_frame + 0x11090)),0x1000,((CHAR *)(gen_frame + 0x10004)),(LPSTR *)0x0);
  if (DVar2 != 0) {
    F_00da46f0(param_2,((CHAR *)(gen_frame + 0x10004)));
    F_00da4ac0(param_2,1);
    uVar1 = *param_2;
    (*(undefined4 *)(gen_frame + 0x11094)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x11098))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516a4),(*(CHAR * PTR32 *)(gen_frame + 0x11090)),(*(uint *)(gen_frame + 0x11098)) & 0x3fffffff);
    }
    return uVar1;
  }
  F_00da4850(param_2);
  (*(undefined4 *)(gen_frame + 0x11094)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x11098))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(CHAR * PTR32 *)(gen_frame + 0x11090)),(*(uint *)(gen_frame + 0x11098)) & 0x3fffffff)
    ;
  }
  return 0;
}

/* ref: FUN_00dbea40 */
uint F_00dbea40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbea40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x280];
  uint uVar1;
  DWORD DVar2;
  HANDLE hFindFile;
  BOOL BVar3;
  
  (*(CHAR * PTR32 *)(gen_frame + 0x1d4)) = ((CHAR *)(gen_frame + 0x1e0));
  (*(uint *)(gen_frame + 0x1dc)) = 0x80000080;
  (*(int *)(gen_frame + 0x1d8)) = 1;
  ((CHAR *)(gen_frame + 0x1e0))[0] = '\0';
  F_00da4df0(&(*(undefined4 *)(gen_frame + 0x148)),param_1);
  if ((*(int *)(gen_frame + 0x14c)) != 1 && -1 < (*(int *)(gen_frame + 0x14c)) + -1) {
    F_00da45a0(&(*(undefined4 *)(gen_frame + 0x148)),0x5c,0x2f,1);
    uVar1 = F_00da44d0(&(*(undefined4 *)(gen_frame + 0x148)),&REFG(undefined, 0x1080808));
    if (uVar1 == 0) {
      F_00da4d70(&(*(undefined4 *)(gen_frame + 0x148)),&REFG(undefined, 0x1080808));
    }
    F_00db2660((*(undefined4 *)(gen_frame + 0x148)),&(*(CHAR * PTR32 *)(gen_frame + 0x1d4)));
  }
  (*(int *)(gen_frame + 0x14c)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x150))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516a4),(*(undefined4 *)(gen_frame + 0x148)),(*(uint *)(gen_frame + 0x150)) & 0x3fffffff);
  }
  DVar2 = gen_imp_GetFileAttributesA((*(CHAR * PTR32 *)(gen_frame + 0x1d4)));
  if ((DVar2 != 0xffffffff) && ((DVar2 >> 4 & 1) != 0)) {
    if ((*(int *)(gen_frame + 0x1d8)) != 1) {
      F_00da4d70(&(*(CHAR * PTR32 *)(gen_frame + 0x1d4)),&REFG(undefined, 0x111869c));
    }
    hFindFile = gen_imp_FindFirstFileA((*(CHAR * PTR32 *)(gen_frame + 0x1d4)),(undefined *)((byte *)(gen_frame + 0x8)));
    (*(HANDLE *)(gen_frame + 0x278)) = hFindFile;
    if (hFindFile != (HANDLE)0xffffffff) {
      do {
        uVar1 = F_00da0d20(((undefined1 *)(gen_frame + 0x34)),&REFG(undefined, 0x1118a34));
        if ((uVar1 != 0) && (uVar1 = F_00da0d20(((undefined1 *)(gen_frame + 0x34)),&REFG(undefined, 0x113be34)), uVar1 != 0)) {
          if (((uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) >> 4 & 1) == 0) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x260)) = ((undefined1 *)(gen_frame + 0x34));
            ((byte *)(gen_frame + 0x268))[8] = 1;
            ((byte *)(gen_frame + 0x268))[9] = 0;
            ((byte *)(gen_frame + 0x268))[10] = 0;
            ((byte *)(gen_frame + 0x268))[0xb] = 0;
            (*(undefined4 *)(gen_frame + 0x264)) = (int)((longlong)
                             CONCAT44(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 24)) + -0x19db1de) -
                                      (uint)((uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 20)) < 0xd53e8000),
                                      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 20)) + 0x2ac18000) / 10000000);
            ((byte *)(gen_frame + 0x268))[0] = ((byte *)(gen_frame + 0x8))[0x20];
            ((byte *)(gen_frame + 0x268))[1] = ((byte *)(gen_frame + 0x8))[0x21];
            ((byte *)(gen_frame + 0x268))[2] = ((byte *)(gen_frame + 0x8))[0x22];
            ((byte *)(gen_frame + 0x268))[3] = ((byte *)(gen_frame + 0x8))[0x23];
            ((byte *)(gen_frame + 0x268))[4] = ((byte *)(gen_frame + 0x8))[0x1c];
            ((byte *)(gen_frame + 0x268))[5] = ((byte *)(gen_frame + 0x8))[0x1d];
            ((byte *)(gen_frame + 0x268))[6] = ((byte *)(gen_frame + 0x8))[0x1e];
            ((byte *)(gen_frame + 0x268))[7] = ((byte *)(gen_frame + 0x8))[0x1f];
            F_00dbe7e0(param_2,&(*(undefined1 * PTR32 *)(gen_frame + 0x260)));
            hFindFile = (*(HANDLE *)(gen_frame + 0x278));
          }
          else {
            (*(undefined1 * PTR32 *)(gen_frame + 0x260)) = ((undefined1 *)(gen_frame + 0x34));
            (*(undefined4 *)(gen_frame + 0x264)) = 0;
            ((byte *)(gen_frame + 0x268))[0] = 0xff;
            ((byte *)(gen_frame + 0x268))[1] = 0xff;
            ((byte *)(gen_frame + 0x268))[2] = 0xff;
            ((byte *)(gen_frame + 0x268))[3] = 0xff;
            ((byte *)(gen_frame + 0x268))[4] = 0xff;
            ((byte *)(gen_frame + 0x268))[5] = 0xff;
            ((byte *)(gen_frame + 0x268))[6] = 0xff;
            ((byte *)(gen_frame + 0x268))[7] = 0xff;
            ((byte *)(gen_frame + 0x268))[8] = 2;
            ((byte *)(gen_frame + 0x268))[9] = 0;
            ((byte *)(gen_frame + 0x268))[10] = 0;
            ((byte *)(gen_frame + 0x268))[0xb] = 0;
            F_00dbe7e0(param_2,&(*(undefined1 * PTR32 *)(gen_frame + 0x260)));
          }
        }
        BVar3 = gen_imp_FindNextFileA(hFindFile,(undefined *)((byte *)(gen_frame + 0x8)));
      } while (BVar3 != 0);
    }
    gen_imp_FindClose(hFindFile);
    (*(int *)(gen_frame + 0x1d8)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x1dc))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516a4),(*(CHAR * PTR32 *)(gen_frame + 0x1d4)),(*(uint *)(gen_frame + 0x1dc)) & 0x3fffffff);
    }
    return 0;
  }
  (*(int *)(gen_frame + 0x1d8)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x1dc))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(CHAR * PTR32 *)(gen_frame + 0x1d4)),(*(uint *)(gen_frame + 0x1dc)) & 0x3fffffff)
    ;
  }
  return 1;
}

/* ref: FUN_00dbecc0 */
uint F_00dbecc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbecc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  undefined * pFVar1;
  
  pFVar1 = F_00c495d8(param_1,param_2);
  *(undefined * PTR32 *)((int)this + 8) = pFVar1;
  return (uint)pFVar1;
}

/* ref: FUN_00dbece0 */
uint F_00dbece0(unsigned int gen_a0)
{
  GEN_ENTER(0xdbece0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * _File;
  
  _File = *(undefined * PTR32 *)((int)this + 8);
  if ((_File != (undefined *)0x0) && (*(char *)((int)this + 0xc) != '\0')) {
    _File = (undefined *)F_00c49312(_File);
  }
  *(undefined4 *)((int)this + 8) = 0;
  return (uint)_File;
}

/* ref: hkStdioStreamWriter::vf4 */
uint F_00dbed10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbed10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  gen_size32 param_2 = (gen_size32)gen_a2;
  gen_size32 sVar1;
  
  if ((*(undefined * PTR32 *)(this + 8) != (undefined *)0x0) && (0 < (int)param_2)) {
    sVar1 = F_00c4922b(param_1,1,param_2,*(undefined * PTR32 *)(this + 8));
    if ((int)sVar1 < 1) {
      F_00dbece0(this);
    }
    return sVar1;
  }
  return 0;
}

/* ref: hkStdioStreamWriter::vf5 */
uint F_00dbed60(unsigned int gen_a0)
{
  GEN_ENTER(0xdbed60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(undefined * PTR32 *)(this + 8) != (undefined *)0x0) {
    uVar1 = F_00c50ee3(*(undefined * PTR32 *)(this + 8));
  }
  return uVar1;
}

/* ref: hkStdioStreamWriter::vf3 */
uint F_00dbed70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbed70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *(int *)(in_ecx + 8) != 0;
  return param_2;
}

/* ref: hkStdioStreamWriter::vf9 */
uint F_00dbed90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbed90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkStdioStreamWriter::vf6 */
uint F_00dbeda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdbeda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkStdioStreamWriter::vf7 */
uint F_00dbedb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbedb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  long param_1 = (long)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  iVar1 = F_00c4bbff(*(undefined * PTR32 *)(this + 8),param_1,param_2);
  return (uint)(iVar1 != 0);
}

