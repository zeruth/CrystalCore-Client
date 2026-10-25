#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_004a1c10 */
uint F_004a1c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4a1c10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x4a1910));
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  return (uint)this;
}

/* ref: FUN_004a1c40 */
uint F_004a1c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4a1c40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x4a1930));
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  return (uint)this;
}

/* ref: FUN_004a1c70 */
uint F_004a1c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4a1c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x4a1950));
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  return (uint)this;
}

/* ref: FUN_004a1ca0 */
uint F_004a1ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4a1ca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x4a1970));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_004a1cc0 */
uint F_004a1cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4a1cc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x4a1990));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: std::allocator<std::_Container_proxy>::construct_004a1ce0 */
unsigned int F_004a1ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4a1ce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: Client::System::Framework::TaskManager::JobPool::InnerThread::vf0 */
uint F_004a1d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a1d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10929f0));
  gen_imp_CloseHandle(*(HANDLE *)(this + 0x24));
  F_004cf880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Framework::JobListInterface::vf0 */
uint F_004a1d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a1d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1092a0c));
  gen_imp_CloseHandle(*(HANDLE *)(this + 0x10));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004a1e00 */
uint F_004a1e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4a1e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  HANDLE pvVar1;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  LOCK();
  *(undefined4 *)((int)this + 8) = 0;
  UNLOCK();
  pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,0,0,(LPCSTR)0x0);
  *(HANDLE *)((int)this + 0xc) = pvVar1;
  return (uint)this;
}

/* ref: FUN_004a1e30 */
uint F_004a1e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a1e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)(uintptr_t)this) * 0x58;
  *(undefined4 *)(iVar1 + 0x38 + (int)this) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(iVar1 + 0x3c + (int)this) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + iVar1 + 0x40) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + iVar1 + 0x44) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + iVar1 + 0x48) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((int)this + iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + iVar1 + 0x50) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + iVar1 + 0x58) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + iVar1 + 0x5c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined1 *)((int)this + iVar1 + 100) = *(undefined1 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + iVar1 + 0x60) = *(undefined4 *)(param_1 + 0x50);
  uVar2 = *(int *)this + 1U & 0x7f;
  *(uint *)this = uVar2;
  return uVar2;
}

/* ref: FUN_004a1ea0 */
unsigned int F_004a1ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4a1ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[1])REFP(0x1092a30));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x24) = (*(undefined * PTR32 (*)[1])REFP(0x1092a30));
  *(undefined4 *)((int)this + 0x28) = param_1;
  *(undefined4 *)((int)this + 0x2c) = param_2;
  *(undefined4 *)((int)this + 0x30) = param_3;
  *(undefined4 *)((int)this + 0x34) = param_4;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1092a24));
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = param_5;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined1 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  return 0;
}

/* ref: JobQueueListData_JobQueue_IA_Framework_System_Client::vf1 */
uint F_004a1f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a1f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(char *)((int)this + 0x54) != '\0') {
    uVar1 = ((code *)*(gen_code32 *)((int)this + 0x38))
                      (*(undefined4 *)((int)this + 0x3c),(int)this + 0x40,
                       *(undefined4 *)((int)this + 0x4c));
    return uVar1;
  }
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x38))
                    (*(undefined4 *)((int)this + 0x3c),(int)this + 0x40,param_1);
  return uVar1;
}

/* ref: FUN_004a1f40 */
unsigned int F_004a1f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x4a1f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[1])REFP(0x1092a30));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x24) = (*(undefined * PTR32 (*)[1])REFP(0x1092a30));
  *(undefined4 *)((int)this + 0x28) = param_1;
  *(undefined4 *)((int)this + 0x2c) = param_2;
  *(undefined4 *)((int)this + 0x30) = param_3;
  *(undefined4 *)((int)this + 0x34) = param_4;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1092a24));
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = param_6;
  *(undefined4 *)((int)this + 0x50) = param_5;
  *(undefined1 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  return 0;
}

/* ref: FUN_004a1fb0 */
unsigned int F_004a1fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4a1fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[1])REFP(0x1092a30));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x24) = (*(undefined * PTR32 (*)[1])REFP(0x1092a30));
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1092a24));
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = param_1;
  *(undefined4 *)((int)this + 0x3c) = param_2;
  *(undefined4 *)((int)this + 0x40) = param_3;
  *(undefined4 *)((int)this + 0x44) = param_4;
  *(undefined4 *)((int)this + 0x48) = param_5;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined1 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  return 0;
}

/* ref: FUN_004a2010 */
unsigned int F_004a2010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4a2010u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[1])REFP(0x1092a30));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x24) = (*(undefined * PTR32 (*)[1])REFP(0x1092a30));
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1092a24));
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = param_1;
  *(undefined4 *)((int)this + 0x3c) = param_2;
  *(undefined4 *)((int)this + 0x40) = param_3;
  *(undefined4 *)((int)this + 0x44) = param_4;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = param_5;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined1 *)((int)this + 0x54) = 1;
  *(undefined4 *)((int)this + 0x2c) = 0;
  return 0;
}

/* ref: JobQueueListData_JobQueue_IA_Framework_System_Client::vf0 */
uint F_004a20b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a20b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
  *(undefined * PTR32 *)&REFG(undefined, 0x13728a8) = this;
  if (*(int *)((int)this + 0x1c) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x20))) = *(undefined4 *)((int)this + 0x20);
  }
  if (*(int *)((int)this + 0x20) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x1c))) = *(undefined4 *)((int)this + 0x1c);
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_004a2150 */
unsigned int F_004a2150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4a2150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_004a2170 */
uint F_004a2170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a2170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  HANDLE pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1092a0c));
  *(undefined4 *)((int)this + 8) = param_1;
  LOCK();
  *(undefined4 *)((int)this + 0xc) = 0;
  UNLOCK();
  pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,1,1,(LPCSTR)0x0);
  *(HANDLE *)((int)this + 0x10) = pvVar1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  return (uint)this;
}

/* ref: FUN_004a21b0 */
uint F_004a21b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a21b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004a2610((undefined *)((int)this + -0x28),param_1);
  return uVar1;
}

/* ref: Client::System::Framework::JobListTaskPtrArray::vf4 */
uint F_004a21c0(unsigned int gen_a0)
{
  GEN_ENTER(0x4a21c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x54);
}

/* ref: FUN_004a21d0 */
uint F_004a21d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a21d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004a2670((undefined *)((int)this + -0x28),param_1);
  return uVar1;
}

/* ref: Client::System::Framework::JobListArgArray::vf4 */
uint F_004a21e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4a21e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x54);
}

/* ref: FUN_004a21f0 */
uint F_004a21f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a21f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004a26d0((undefined *)((int)this + -0x28),param_1);
  return uVar1;
}

/* ref: Client::System::Framework::JobListArgArrayAndIndex::vf4 */
uint F_004a2200(unsigned int gen_a0)
{
  GEN_ENTER(0x4a2200u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x54);
}

/* ref: FUN_004a2210 */
uint F_004a2210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a2210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004a2730((undefined *)((int)this + -0x28),param_1);
  return uVar1;
}

/* ref: Client::System::Framework::JobListNoArg::vf4 */
uint F_004a2220(unsigned int gen_a0)
{
  GEN_ENTER(0x4a2220u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x50);
}

/* ref: FUN_004a2270 */
uint F_004a2270(unsigned int gen_a0)
{
  GEN_ENTER(0x4a2270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  LOCK();
  *(undefined4 *)((int)this + 8) = 0;
  UNLOCK();
  puVar1 = (undefined4 *)((int)this + 0x10);
  puVar3 = (undefined4 *)((int)this + 0x20);
  iVar2 = 0x10;
  do {
    puVar3[-2] = 0;
    puVar3[-1] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = (*(undefined * PTR32 (*)[1])REFP(0x1092a30));
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = (*(undefined * PTR32 (*)[1])REFP(0x1092a30));
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x1092a24));
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    puVar3[0x18] = (*(undefined * PTR32 (*)[1])REFP(0x1092a30));
    puVar3[0x19] = 0;
    puVar3[0x1a] = 0;
    puVar3[0x1b] = (*(undefined * PTR32 (*)[1])REFP(0x1092a30));
    puVar3[0x12] = (*(undefined * PTR32 (*)[3])REFP(0x1092a24));
    puVar3[0x1c] = 0;
    puVar3[0x1d] = 0;
    puVar3[0x1e] = 0;
    puVar3[0x1f] = 0;
    puVar3[0x20] = 0;
    puVar3[0x21] = 0;
    puVar3[0x22] = 0;
    puVar3[0x23] = 0;
    puVar3[0x24] = 0;
    puVar3[0x2a] = 0;
    puVar3[0x2b] = 0;
    puVar3[0x2c] = 0;
    puVar3[0x2d] = 0;
    puVar3[0x2e] = (*(undefined * PTR32 (*)[1])REFP(0x1092a30));
    puVar3[0x2f] = 0;
    puVar3[0x30] = 0;
    puVar3[0x31] = (*(undefined * PTR32 (*)[1])REFP(0x1092a30));
    puVar3[0x28] = (*(undefined * PTR32 (*)[3])REFP(0x1092a24));
    puVar3[0x32] = 0;
    puVar3[0x33] = 0;
    puVar3[0x34] = 0;
    puVar3[0x35] = 0;
    puVar3[0x36] = 0;
    puVar3[0x37] = 0;
    puVar3[0x38] = 0;
    puVar3[0x39] = 0;
    puVar3[0x3a] = 0;
    puVar3[0x40] = 0;
    puVar3[0x41] = 0;
    puVar3[0x42] = 0;
    puVar3[0x43] = 0;
    puVar3[0x44] = (*(undefined * PTR32 (*)[1])REFP(0x1092a30));
    puVar3[0x45] = 0;
    puVar3[0x46] = 0;
    puVar3[0x47] = (*(undefined * PTR32 (*)[1])REFP(0x1092a30));
    puVar3[0x3e] = (*(undefined * PTR32 (*)[3])REFP(0x1092a24));
    puVar3[0x48] = 0;
    puVar3[0x49] = 0;
    puVar3[0x4a] = 0;
    puVar3[0x4b] = 0;
    puVar3[0x4c] = 0;
    puVar3[0x4d] = 0;
    puVar3[0x4e] = 0;
    puVar3[0x4f] = 0;
    puVar3[0x50] = 0;
    puVar3[0x56] = 0;
    puVar3[0x57] = 0;
    puVar3[0x58] = 0;
    puVar3[0x59] = 0;
    puVar3[0x5a] = (*(undefined * PTR32 (*)[1])REFP(0x1092a30));
    puVar3[0x5b] = 0;
    puVar3[0x5c] = 0;
    puVar3[0x5d] = (*(undefined * PTR32 (*)[1])REFP(0x1092a30));
    puVar3[0x54] = (*(undefined * PTR32 (*)[3])REFP(0x1092a24));
    puVar3[0x5e] = 0;
    puVar3[0x5f] = 0;
    puVar3[0x60] = 0;
    puVar3[0x61] = 0;
    puVar3[0x62] = 0;
    puVar3[99] = 0;
    puVar3[100] = 0;
    puVar3[0x65] = 0;
    puVar3[0x66] = 0;
    puVar3[0x6c] = 0;
    puVar3[0x6d] = 0;
    puVar3[0x6e] = 0;
    puVar3[0x6f] = 0;
    puVar3[0x70] = (*(undefined * PTR32 (*)[1])REFP(0x1092a30));
    puVar3[0x71] = 0;
    puVar3[0x72] = 0;
    puVar3[0x73] = (*(undefined * PTR32 (*)[1])REFP(0x1092a30));
    puVar3[0x6a] = (*(undefined * PTR32 (*)[3])REFP(0x1092a24));
    puVar3[0x74] = 0;
    puVar3[0x75] = 0;
    puVar3[0x76] = 0;
    puVar3[0x77] = 0;
    puVar3[0x78] = 0;
    puVar3[0x79] = 0;
    puVar3[0x7a] = 0;
    puVar3[0x7b] = 0;
    puVar3[0x7c] = 0;
    puVar3[0x82] = 0;
    puVar3[0x83] = 0;
    puVar3[0x84] = 0;
    puVar3[0x85] = 0;
    puVar3[0x86] = (*(undefined * PTR32 (*)[1])REFP(0x1092a30));
    puVar3[0x87] = 0;
    puVar3[0x88] = 0;
    puVar3[0x89] = (*(undefined * PTR32 (*)[1])REFP(0x1092a30));
    puVar3[0x80] = (*(undefined * PTR32 (*)[3])REFP(0x1092a24));
    puVar3[0x8a] = 0;
    puVar3[0x8b] = 0;
    puVar3[0x8c] = 0;
    puVar3[0x8d] = 0;
    puVar3[0x8e] = 0;
    puVar3[0x8f] = 0;
    puVar3[0x90] = 0;
    puVar3[0x91] = 0;
    puVar3[0x92] = 0;
    puVar3[0x98] = 0;
    puVar3[0x99] = 0;
    puVar3[0x9a] = 0;
    puVar3[0x9b] = 0;
    puVar3[0x9c] = (*(undefined * PTR32 (*)[1])REFP(0x1092a30));
    puVar3[0x9d] = 0;
    puVar3[0x9e] = 0;
    puVar3[0x9f] = (*(undefined * PTR32 (*)[1])REFP(0x1092a30));
    puVar3[0x96] = (*(undefined * PTR32 (*)[3])REFP(0x1092a24));
    puVar3[0xa0] = 0;
    puVar3[0xa1] = 0;
    puVar3[0xa2] = 0;
    puVar3[0xa3] = 0;
    puVar3[0xa4] = 0;
    puVar3[0xa5] = 0;
    puVar3[0xa6] = 0;
    puVar3[0xa7] = 0;
    puVar3[0xa8] = 0;
    puVar1 = puVar1 + 0xb0;
    puVar3 = puVar3 + 0xb0;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return (uint)this;
}

/* ref: Client::System::Framework::JobListTaskPtrArray::vf0 */
uint F_004a2610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a2610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 *)&REFG(undefined, 0x13728a8) = this + 0x28;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1092a38));
  *(undefined * PTR32 * PTR32 *)*(undefined * PTR32 *)&REFG(undefined, 0x13728a8) = (*(undefined * PTR32 (*)[3])REFP(0x1092a50));
  *(undefined * PTR32 * PTR32 *)*(undefined * PTR32 *)&REFG(undefined, 0x13728a8) = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
  if (*(int *)(this + 0x44) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x44) + 0x20))) = *(undefined4 *)(this + 0x48);
  }
  if (*(int *)(this + 0x48) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x48) + 0x1c))) = *(undefined4 *)(this + 0x44);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1092a0c));
  gen_imp_CloseHandle(*(HANDLE *)(this + 0x10));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Framework::JobListArgArray::vf0 */
uint F_004a2670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a2670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 *)&REFG(undefined, 0x13728a8) = this + 0x28;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1092a60));
  *(undefined * PTR32 * PTR32 *)*(undefined * PTR32 *)&REFG(undefined, 0x13728a8) = (*(undefined * PTR32 (*)[3])REFP(0x1092a78));
  *(undefined * PTR32 * PTR32 *)*(undefined * PTR32 *)&REFG(undefined, 0x13728a8) = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
  if (*(int *)(this + 0x44) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x44) + 0x20))) = *(undefined4 *)(this + 0x48);
  }
  if (*(int *)(this + 0x48) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x48) + 0x1c))) = *(undefined4 *)(this + 0x44);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1092a0c));
  gen_imp_CloseHandle(*(HANDLE *)(this + 0x10));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Framework::JobListArgArrayAndIndex::vf0 */
uint F_004a26d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a26d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 *)&REFG(undefined, 0x13728a8) = this + 0x28;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1092a88));
  *(undefined * PTR32 * PTR32 *)*(undefined * PTR32 *)&REFG(undefined, 0x13728a8) = (*(undefined * PTR32 (*)[3])REFP(0x1092aa0));
  *(undefined * PTR32 * PTR32 *)*(undefined * PTR32 *)&REFG(undefined, 0x13728a8) = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
  if (*(int *)(this + 0x44) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x44) + 0x20))) = *(undefined4 *)(this + 0x48);
  }
  if (*(int *)(this + 0x48) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x48) + 0x1c))) = *(undefined4 *)(this + 0x44);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1092a0c));
  gen_imp_CloseHandle(*(HANDLE *)(this + 0x10));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Framework::JobListNoArg::vf0 */
uint F_004a2730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a2730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 *)&REFG(undefined, 0x13728a8) = this + 0x28;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1092ab0));
  *(undefined * PTR32 * PTR32 *)*(undefined * PTR32 *)&REFG(undefined, 0x13728a8) = (*(undefined * PTR32 (*)[3])REFP(0x1092ac8));
  *(undefined * PTR32 * PTR32 *)*(undefined * PTR32 *)&REFG(undefined, 0x13728a8) = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
  if (*(int *)(this + 0x44) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x44) + 0x20))) = *(undefined4 *)(this + 0x48);
  }
  if (*(int *)(this + 0x48) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x48) + 0x1c))) = *(undefined4 *)(this + 0x44);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1092a0c));
  gen_imp_CloseHandle(*(HANDLE *)(this + 0x10));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004a27d0 */
unsigned int F_004a27d0(float gen_a0)
{
  GEN_ENTER(0x4a27d0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_004a27e0 */
float10 F_004a27e0(float gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x4a27e0u, 0u, 0u, 0u, 0u);
  float in_xmm2 = (float)gen_a0;
  float in_xmm3 = (float)gen_a1;
  float in_xmm4 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  
  fVar1 = F_00c4d0e0(in_xmm2,in_xmm3,in_xmm4,(float10)param_4);
  return (float10)(float)fVar1;
}

/* ref: FUN_004a2800 */
float10 F_004a2800(float gen_a0, float gen_a1)
{
  GEN_ENTER(0x4a2800u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = F_00c4d1fa((float10)param_2);
  return (float10)(float)fVar1;
}

/* ref: FUN_004a2820 */
float10 F_004a2820(float gen_a0)
{
  GEN_ENTER(0x4a2820u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = F_00c4d24c((float10)param_1);
  return (float10)(float)fVar1;
}

/* ref: FUN_004a2840 */
float10 F_004a2840(float gen_a0)
{
  GEN_ENTER(0x4a2840u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = F_00c4d2a0((uint)(ulonglong)gen_d2bits((double)param_1),
                       (int)((ulonglong)gen_d2bits((double)param_1) >> 0x20));
  return (float10)(float)fVar1;
}

/* ref: FUN_004a2860 */
float10 F_004a2860(float gen_a0, float gen_a1)
{
  GEN_ENTER(0x4a2860u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = F_00c4d3da((float10)param_2);
  return (float10)(float)fVar1;
}

/* ref: FUN_004a2880 */
float10 F_004a2880(float gen_a0, float gen_a1)
{
  GEN_ENTER(0x4a2880u, 0u, 0u, 0u, 0u);
  float in_xmm2 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = F_00c4d440(in_xmm2,(float10)param_2);
  return (float10)(float)fVar1;
}

/* ref: FUN_004a28a0 */
float10 F_004a28a0(float gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x4a28a0u, 0u, 0u, 0u, 0u);
  float in_xmm3 = (float)gen_a0;
  float in_xmm5 = (float)gen_a1;
  float in_xmm6 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  
  fVar1 = F_00c4d590(in_xmm3,in_xmm5,in_xmm6,(float10)param_4);
  return (float10)(float)fVar1;
}

/* ref: FUN_004a28f0 */
unsigned int F_004a28f0(float gen_a0)
{
  GEN_ENTER(0x4a28f0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_004a2910 */
unsigned int F_004a2910(float gen_a0)
{
  GEN_ENTER(0x4a2910u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_004a2950 */
unsigned int F_004a2950(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4a2950u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  bool bVar1;
  float10 fVar2;
  
  if (param_2 < REFG(float, 0x10943d0)) {
    fVar2 = (float10)param_2;
    do {
      param_2 = (float)(fVar2 + (float10)*(double *)&REFG(undefined, 0x10920b0));
      fVar2 = (float10)param_2;
    } while (fVar2 < (float10)REFG(float, 0x10943d0));
  }
  else {
    fVar2 = (float10)param_2;
  }
  if (REFG(float, 0x10943cc) < param_2) {
    do {
      param_2 = (float)(fVar2 - (float10)*(double *)&REFG(undefined, 0x10920b0));
      fVar2 = (float10)param_2;
    } while ((float10)REFG(float, 0x10943cc) < fVar2);
  }
  bVar1 = GEN_ISNAN((float10)*(float *)(in_ecx + 0x16c)) || GEN_ISNAN(fVar2);
  if (bVar1 == (bVar1 || (float10)*(float *)(in_ecx + 0x16c) == fVar2)) {
    *(float *)(in_ecx + 0x16c) = param_2;
    *(undefined1 *)(in_ecx + 0x150) = 1;
  }
  return 0;
}

/* ref: FUN_004a2a00 */
unsigned int F_004a2a00(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x4a2a00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  bool bVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar2 = (float10)*(double *)&REFG(undefined, 0x10920b0);
  fVar3 = (float10)param_2;
  if ((!GEN_ISNAN(REFG(float, 0x10943d0)) && !GEN_ISNAN(param_2)) && !(REFG(float, 0x10943d0) <= param_2)) {
    do {
      param_2 = (float)(fVar3 + fVar2);
      fVar3 = (float10)param_2;
    } while (fVar3 < (float10)REFG(float, 0x10943d0));
  }
  fVar4 = (float10)REFG(float, 0x10943cc);
  if (REFG(float, 0x10943cc) < param_2) {
    do {
      param_2 = (float)(fVar3 - fVar2);
      fVar3 = (float10)param_2;
    } while ((!GEN_ISNAN(fVar3) && !GEN_ISNAN(fVar4)) && !(fVar3 <= fVar4));
  }
  if (param_3 < REFG(float, 0x10943d0)) {
    fVar5 = (float10)param_3;
    do {
      param_3 = (float)(fVar5 + fVar2);
      fVar5 = (float10)param_3;
    } while (fVar5 < (float10)REFG(float, 0x10943d0));
  }
  else {
    fVar5 = (float10)param_3;
  }
  if ((!GEN_ISNAN(param_3) && !GEN_ISNAN(REFG(float, 0x10943cc))) && !(param_3 <= REFG(float, 0x10943cc))) {
    do {
      param_3 = (float)(fVar5 - fVar2);
      fVar5 = (float10)param_3;
    } while (fVar4 < fVar5);
  }
  bVar1 = GEN_ISNAN((float10)*(float *)(in_ecx + 0x170)) || GEN_ISNAN(fVar3);
  if ((bVar1 == (bVar1 || (float10)*(float *)(in_ecx + 0x170) == fVar3)) ||
     (bVar1 = GEN_ISNAN((float10)*(float *)(in_ecx + 0x174)) || GEN_ISNAN(fVar5),
     bVar1 == (bVar1 || (float10)*(float *)(in_ecx + 0x174) == fVar5))) {
    *(float *)(in_ecx + 0x170) = param_2;
    *(float *)(in_ecx + 0x174) = param_3;
    *(undefined1 *)(in_ecx + 0x150) = 1;
  }
  return 0;
}

/* ref: FUN_004a2b10 */
uint F_004a2b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4a2b10u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  *param_2 = *(undefined4 *)(in_ecx + 0x170);
  *param_3 = *(undefined4 *)(in_ecx + 0x174);
  return (uint)param_2;
}

/* ref: FUN_004a2b30 */
uint F_004a2b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a2b30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(&REFG(undefined, 0x1092bf8) + param_1 * 4) + param_2;
}

/* ref: FUN_004a2b50 */
uint F_004a2b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4a2b50u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = 0xb;
  do {
    if ((int)(&REFG(undefined4, 0x1092bfc))[iVar1] < param_1) {
      *param_2 = iVar1 + 1;
      *param_3 = param_1 - (&REFG(undefined4, 0x1092bfc))[iVar1];
      return (uint)param_3;
    }
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *param_2 = 1;
  *param_3 = param_1;
  return (uint)param_3;
}

/* ref: FUN_004a2ba0 */
float10 F_004a2ba0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x4a2ba0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  return (float10)((float)GEN_TOF(((float10)(int)((param_2 + param_1 * 0x3c) * 0x3c) + (float10)param_3)));
}

/* ref: FUN_004a2be0 */
float10 F_004a2be0(float gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4a2be0u, 0u, gen_a1, gen_a2, gen_a3);
  float param_1 = (float)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float10 fVar1;
  float10 in_st0;
  float10 extraout_ST1;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10943e0);
  *param_2 = (int)param_1 / 0xe10;
  fVar1 = F_00c4d3da(fVar1);
  in_st0 = (float10)*(double *)&REFG(undefined, 0x10943d8);
  *param_3 = (int)fVar1 / 0x3c;
  fVar1 = F_00c4d3da(in_st0);
  *param_4 = (float)fVar1;
  return extraout_ST1;
}

/* ref: FUN_004a2c60 */
unsigned int F_004a2c60(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4a2c60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  float local_8;
  
  local_8 = param_2;
  if (*(float *)&REFG(undefined, 0x10943f0) <= param_2) {
    fVar1 = (float10)param_2 - (float10)*(double *)&REFG(undefined, 0x10920b0);
  }
  else {
    if (!(param_2 < 0.0)) goto LAB_004a2c96;
    fVar1 = (float10)param_2 + (float10)*(double *)&REFG(undefined, 0x10943e8);
  }
  local_8 = (float)fVar1;
LAB_004a2c96: ;
  *(float *)(in_ecx + 0xf0) =
       ((float)GEN_TOF((((float10)local_8 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
              (float10)*(double *)&REFG(undefined, 0x1080220))));
  return 0;
}

/* ref: FUN_004a2cc0 */
unsigned int F_004a2cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x4a2cc0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_004a2ce0 */
unsigned int F_004a2ce0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4a2ce0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xb0) = param_2;
  return 0;
}

/* ref: FUN_004a2d00 */
uint F_004a2d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4a2d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  
  *param_1 = *(undefined4 *)((int)this + 0x178);
  uVar1 = *(uint *)((int)this + 0x17c);
  *param_2 = uVar1;
  return uVar1;
}

/* ref: FUN_004a2d20 */
uint F_004a2d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4a2d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  *param_1 = *(undefined4 *)((int)this + 0x180);
  *param_2 = *(undefined4 *)((int)this + 0x184);
  *param_3 = *(undefined4 *)((int)this + 0x188);
  return (uint)param_3;
}

/* ref: FUN_004a2d50 */
float10 F_004a2d50(unsigned int gen_a0)
{
  GEN_ENTER(0x4a2d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x188) / (float10)*(double *)&REFG(undefined, 0x10943e0)
                         + ((float10)*(int *)((int)this + 0x184) / (float10)*(double *)&REFG(undefined, 0x10943d8)
                           + (((float10)GEN_TOD((*(int *)(&REFG(undefined, 0x1092bf8) + *(int *)((int)this + 0x178) * 4) +
                                        -1 + *(int *)((int)this + 0x17c)))) *
                              (float10)*(double *)&REFG(undefined, 0x1094400) +
                             (float10)*(int *)((int)this + 0x180))))));
}

/* ref: FUN_004a2e70 */
uint F_004a2e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4a2e70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  *param_1 = *(undefined4 *)((int)this + 0x140);
  *param_2 = *(undefined4 *)((int)this + 0x144);
  *param_3 = *(undefined4 *)((int)this + 0x148);
  return (uint)param_3;
}

/* ref: FUN_004a2ea0 */
uint F_004a2ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4a2ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  *param_1 = *(undefined4 *)((int)this + 0xb4);
  *param_2 = *(undefined4 *)((int)this + 0xb8);
  *param_3 = *(undefined4 *)((int)this + 0xbc);
  return (uint)param_3;
}

/* ref: FUN_004a2ed0 */
uint F_004a2ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4a2ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  float10 fVar1;
  
  fVar1 = F_00c4d2a0((uint)(ulonglong)gen_d2bits((double)*(float *)((int)this + 0x10c)),
                       (int)((ulonglong)gen_d2bits((double)*(float *)((int)this + 0x10c)) >> 0x20));
  *param_1 = (int)fVar1 / 0x3c;
  *param_2 = (int)fVar1 % 0x3c;
  return (uint)param_2;
}

/* ref: FUN_004a2f30 */
uint F_004a2f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4a2f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  float10 fVar1;
  
  fVar1 = F_00c4d2a0((uint)(ulonglong)gen_d2bits((double)*(float *)((int)this + 0x110)),
                       (int)((ulonglong)gen_d2bits((double)*(float *)((int)this + 0x110)) >> 0x20));
  *param_1 = (int)fVar1 / 0x3c;
  *param_2 = (int)fVar1 % 0x3c;
  return (uint)param_2;
}

/* ref: FUN_004a2f90 */
uint F_004a2f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4a2f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  *param_1 = *(undefined4 *)((int)this + 0x11c);
  *param_2 = *(undefined4 *)((int)this + 0x120);
  *param_3 = *(undefined4 *)((int)this + 0x124);
  return (uint)param_3;
}

/* ref: FUN_004a2fc0 */
uint F_004a2fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4a2fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  *param_1 = *(undefined4 *)((int)this + 0x128);
  *param_2 = *(undefined4 *)((int)this + 300);
  *param_3 = *(undefined4 *)((int)this + 0x130);
  return (uint)param_3;
}

/* ref: FUN_004a2ff0 */
uint F_004a2ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4a2ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  *param_1 = *(undefined4 *)((int)this + 0x134);
  *param_2 = *(undefined4 *)((int)this + 0x138);
  *param_3 = *(undefined4 *)((int)this + 0x13c);
  return (uint)param_3;
}

/* ref: FUN_004a3020 */
float10 F_004a3020(float gen_a0)
{
  GEN_ENTER(0x4a3020u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float fVar1;
  double dVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  if (param_1 <= REFG(float, 0x1094414)) {
    return (float10)*(float *)&REFG(undefined, 0x1092b58);
  }
  if ((!GEN_ISNAN(param_1) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1094410))) && !(param_1 < *(float *)&REFG(undefined, 0x1094410))) {
    return (float10)*(float *)&REFG(undefined, 0x1092bf8);
  }
  fVar1 = ((float)GEN_TOF((((float10)param_1 - (float10)*(double *)&REFG(undefined, 0x1094408)) *
                 (float10)*(double *)&REFG(undefined, 0x1088118))));
  dVar2 = (double)fVar1;
  fVar4 = F_00c4d2a0((uint)(ulonglong)gen_d2bits(dVar2),
                       (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
  fVar5 = (float10)fVar1;
  iVar3 = (int)fVar4;
  fVar4 = (float10)(float)fVar4;
  if ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4)) == ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4)) || fVar5 == fVar4)) {
    return (float10)((float)GEN_TOF(((float10)(float)(fVar5 - fVar4) *
                            (float10)*(float *)(&REFG(undefined, 0x1092b5c) + iVar3 * 4) +
                           ((float10)1 - (float10)(float)(fVar5 - fVar4)) *
                           (float10)*(float *)(&REFG(undefined, 0x1092b58) + iVar3 * 4))));
  }
  return (float10)*(float *)(&REFG(undefined, 0x1092b58) + iVar3 * 4);
}

/* ref: FUN_004a30e0 */
unsigned int F_004a30e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4a30e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x1094428);
  *(float *)(in_ecx + 0x160) = param_2;
  *(float *)(in_ecx + 0x15c) =
       ((float)GEN_TOF((((float10)param_2 * fVar1 - (float10)*(double *)&REFG(undefined, 0x1094420)) *
              (float10)*(double *)&REFG(undefined, 0x1094418))));
  return 0;
}

/* ref: FUN_004a3110 */
float10 F_004a3110(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0x4a3110u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float in_xmm0 = (float)gen_a1;
  float in_xmm1 = (float)gen_a2;
  float in_xmm2 = (float)gen_a3;
  float in_xmm3 = (float)gen_a4;
  float in_xmm5 = (float)gen_a5;
  float in_xmm7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = F_00c4cb50(in_xmm0,in_xmm1,in_xmm2,in_xmm3,in_xmm5,in_xmm7,
                       (float10)((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x158) -
                                       (float10)*(double *)&REFG(undefined, 0x1092098)))));
  fVar1 = *(float *)(in_ecx + 0x15c);
  fVar2 = (float10)*(double *)&REFG(undefined, 0x1094430);
  fVar3 = (float10)*(double *)&REFG(undefined, 0x1080228);
  fVar5 = F_004a3020(param_8);
  return (float10)((float)GEN_TOF((fVar5 * (float10)((double)GEN_TOD(((((float10)fVar1 * fVar2) * fVar3) *
                                                   (float10)(float)fVar4))))));
}

/* ref: FUN_004a3190 */
float10 F_004a3190(float gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0x4a3190u, 0u, 0u, 0u, 0u);
  float in_xmm0 = (float)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float in_xmm2 = (float)gen_a2;
  float in_xmm3 = (float)gen_a3;
  float in_xmm5 = (float)gen_a4;
  float in_xmm7 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  double dVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar2 = F_00c4cb50(in_xmm0,in_xmm1,in_xmm2,in_xmm3,in_xmm5,in_xmm7,
                       (float10)*(double *)&REFG(undefined, 0x10944c0));
  fVar3 = F_00c4cb50(in_xmm0,in_xmm1,in_xmm2,in_xmm3,in_xmm5,in_xmm7,
                       (float10)*(double *)&REFG(undefined, 0x10944b0));
  dVar1 = (double)(float)fVar3 * *(double *)&REFG(undefined, 0x10944a8);
  fVar4 = F_00c4cb50(in_xmm0,in_xmm1,in_xmm2,in_xmm3,in_xmm5,in_xmm7,
                       (float10)*(double *)&REFG(undefined, 0x10944a0));
  fVar3 = (float10)1;
  return (float10)((float)GEN_TOF((fVar3 + (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((((float10)*(double *)
                                                                                &REFG(undefined, 0x1094460) /
                                                                      ((float10)*(double *)
                                                                                 &REFG(undefined, 0x1094468) -
                                                                      (float10)(float)fVar2) +
                                                                     (float10)*(double *)
                                                                               &REFG(undefined, 0x1094458)) +
                                                                    (float10)*(double *)
                                                                              &REFG(undefined, 0x1094448) /
                                                                    ((float10)*(double *)
                                                                               &REFG(undefined, 0x1094450) -
                                                                    (float10)(float)fVar2)) *
                                                                   (float10)((float)GEN_TOF(((((((float10)
                                                  dVar1 - ((float10)(float)fVar4 *
                                                          (float10)*(double *)&REFG(undefined, 0x1094498)) /
                                                          (float10)*(double *)&REFG(undefined, 0x1094490)) +
                                                  (float10)*(double *)&REFG(undefined, 0x1094488)) *
                                                  (float10)*(double *)&REFG(undefined, 0x1094480) + fVar3) *
                                                  (float10)*(double *)&REFG(undefined, 0x1094478)) *
                                                  (fVar3 - ((float10)0 *
                                                           (float10)*(double *)&REFG(undefined, 0x1094470)) /
                                                           (float10)*(double *)&REFG(undefined, 0x1094480)))))))) /
                                                  (float10)*(double *)&REFG(undefined, 0x1094440)))))));
}

/* ref: FUN_004a3270 */
float10 F_004a3270(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0x4a3270u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float in_xmm0 = (float)gen_a1;
  float in_xmm1 = (float)gen_a2;
  float in_xmm2 = (float)gen_a3;
  float in_xmm3 = (float)gen_a4;
  float in_xmm5 = (float)gen_a5;
  float in_xmm7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = F_004a3190(in_xmm0,in_xmm1,in_xmm2,in_xmm3,in_xmm5,in_xmm7,param_8);
  fVar2 = (float10)(float)((float10)param_8 * (float10)REFG(double, 0x1094438));
  fVar1 = (float10)(float)((float10)(float)fVar1 * (float10)(float)fVar1) - (float10)1;
  return (float10)((float)GEN_TOF(((((float10)*(float *)(in_ecx + 0x164) * (float10)*(double *)&REFG(undefined, 0x10944e0)
                           + (float10)*(double *)&REFG(undefined, 0x10944d0)) /
                          ((float10)*(double *)&REFG(undefined, 0x10944d0) -
                          (float10)*(float *)(in_ecx + 0x164) * (float10)*(double *)&REFG(undefined, 0x10944c8)))
                         * (((float10)(float)(fVar1 * fVar1) * (float10)*(double *)&REFG(undefined, 0x10944d8)) *
                           (float10)((float)GEN_TOF(((float10)1 /
                                           (((float10)*(float *)(in_ecx + 0x168) *
                                            (float10)*(double *)&REFG(undefined, 0x10944e0)) *
                                           (float10)((float)GEN_TOF(((fVar2 * (fVar2 * fVar2)) * fVar2)))))))))));
}

/* ref: FUN_004a3320 */
float10 F_004a3320(float gen_a0)
{
  GEN_ENTER(0x4a3320u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float fVar1;
  double dVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  if ((float10)param_1 <= (float10)*(double *)&REFG(undefined, 0x10920a8)) {
    return (float10)*(float *)&REFG(undefined, 0x1092c34);
  }
  if ((!GEN_ISNAN(param_1) && !GEN_ISNAN(REFG(float, 0x10944e8))) && !(param_1 < REFG(float, 0x10944e8))) {
    return (float10)*(float *)&REFG(undefined, 0x1093594);
  }
  fVar1 = ((float)GEN_TOF((((float10)param_1 - (float10)*(double *)&REFG(undefined, 0x10920a8)) *
                 (float10)*(double *)&REFG(undefined, 0x10912a8))));
  dVar2 = (double)fVar1;
  fVar4 = F_00c4d2a0((uint)(ulonglong)gen_d2bits(dVar2),
                       (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
  fVar5 = (float10)fVar1;
  iVar3 = (int)fVar4;
  fVar4 = (float10)(float)fVar4;
  if ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4)) == ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4)) || fVar5 == fVar4)) {
    return (float10)((float)GEN_TOF(((float10)(float)(fVar5 - fVar4) *
                            (float10)*(float *)(&REFG(undefined, 0x1092c3c) + iVar3 * 8) +
                           ((float10)1 - (float10)(float)(fVar5 - fVar4)) *
                           (float10)*(float *)(&REFG(undefined, 0x1092c34) + iVar3 * 8))));
  }
  return (float10)*(float *)(&REFG(undefined, 0x1092c34) + iVar3 * 8);
}

/* ref: FUN_004a33e0 */
float10 F_004a33e0(float gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x4a33e0u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar4 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,
                       (float10)(float)((float10)param_5 + (float10)*(double *)&REFG(undefined, 0x1094520)));
  fVar1 = (float10)*(double *)&REFG(undefined, 0x1094518);
  fVar3 = (float10)*(double *)&REFG(undefined, 0x1094510);
  fVar5 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,
                       (float10)((float)GEN_TOF((((float10)param_5 + (float10)param_5) -
                                       (float10)*(double *)&REFG(undefined, 0x1094508)))));
  fVar2 = (float10)*(double *)&REFG(undefined, 0x1094500);
  fVar6 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,
                       (float10)(float)((float10)param_5 * (float10)*(double *)&REFG(undefined, 0x10944e0) -
                                       (float10)*(double *)&REFG(undefined, 0x10944f8)));
  return (float10)((float)GEN_TOF(((float10)((double)GEN_TOD(((float10)(double)((float10)(float)fVar4 * fVar1 - fVar3)
                                           - (float10)(float)fVar5 * fVar2))) -
                         (float10)(float)fVar6 * (float10)*(double *)&REFG(undefined, 0x10944f0))));
}

/* ref: FUN_004a3470 */
float10 F_004a3470(float gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x4a3470u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar4 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,
                       (float10)(float)((float10)param_5 + (float10)*(double *)&REFG(undefined, 0x1094558)));
  fVar1 = (float10)*(double *)&REFG(undefined, 0x1094550);
  fVar3 = (float10)*(double *)&REFG(undefined, 0x1094548);
  fVar5 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,
                       (float10)((float)GEN_TOF((((float10)param_5 + (float10)param_5) +
                                       (float10)*(double *)&REFG(undefined, 0x1094540)))));
  fVar2 = (float10)*(double *)&REFG(undefined, 0x1094538);
  fVar6 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,
                       (float10)(float)((float10)param_5 * (float10)*(double *)&REFG(undefined, 0x10944e0) +
                                       (float10)*(double *)&REFG(undefined, 0x1094530)));
  return (float10)((float)GEN_TOF(((float10)((double)GEN_TOD(((float10)(double)(fVar3 - (float10)(float)fVar4 * fVar1)
                                           - (float10)(float)fVar5 * fVar2))) -
                         (float10)(float)fVar6 * (float10)*(double *)&REFG(undefined, 0x1094528))));
}

/* ref: FUN_004a37c0 */
float10 F_004a37c0(float gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7, float gen_a8)
{
  GEN_ENTER(0x4a37c0u, 0u, 0u, 0u, 0u);
  float in_xmm0 = (float)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float in_xmm2 = (float)gen_a2;
  float in_xmm3 = (float)gen_a3;
  float in_xmm5 = (float)gen_a4;
  float in_xmm7 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  float10 fVar1;
  
  fVar1 = F_00c4cb50(in_xmm0,in_xmm1,in_xmm2,in_xmm3,in_xmm5,in_xmm7,
                       (float10)*(double *)&REFG(undefined, 0x1094588));
  return (float10)((float)GEN_TOF(((((float10)param_9 * (float10)*(double *)&REFG(undefined, 0x1094580)) / (float10)param_8
                          ) * (float10)(float)fVar1)));
}

/* ref: FUN_004a37f0 */
float10 F_004a37f0(float gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0x4a37f0u, 0u, 0u, 0u, 0u);
  float in_xmm0 = (float)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float in_xmm2 = (float)gen_a2;
  float in_xmm3 = (float)gen_a3;
  float in_xmm5 = (float)gen_a4;
  float in_xmm7 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float10 fVar1;
  
  fVar1 = F_00c4cb50(in_xmm0,in_xmm1,in_xmm2,in_xmm3,in_xmm5,in_xmm7,
                       (float10)*(double *)&REFG(undefined, 0x10945a0));
  return (float10)((float)GEN_TOF(((float10)(float)fVar1 *
                         (float10)(float)((float10)param_8 * (float10)*(double *)&REFG(undefined, 0x1094598) -
                                         (float10)*(double *)&REFG(undefined, 0x1094590)))));
}

/* ref: FUN_004a3830 */
float10 F_004a3830(float gen_a0)
{
  GEN_ENTER(0x4a3830u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float fVar1;
  double dVar2;
  float10 fVar3;
  float local_14;
  float local_10;
  
  if ((!GEN_ISNAN(REFG(float, 0x10945dc)) && !GEN_ISNAN(param_1)) && !(REFG(float, 0x10945dc) <= param_1)) {
LAB_004a398f: ;
    return (float10)0;
  }
  if (param_1 < REFG(float, 0x10945d8)) {
    param_1 = ((float)GEN_TOF((((float10)param_1 - (float10)*(double *)&REFG(undefined, 0x10945d0)) /
                     (float10)*(double *)&REFG(undefined, 0x10945c8))));
    fVar3 = F_00c4d2a0((uint)(ulonglong)gen_d2bits((double)param_1),
                         (int)((ulonglong)gen_d2bits((double)param_1) >> 0x20));
    local_10 = *(float *)(&REFG(undefined, 0x1093598) + (int)fVar3 * 4);
    local_14 = *(float *)(&REFG(undefined, 0x109359c) + (int)fVar3 * 4);
  }
  else {
    if (param_1 < REFG(float, 0x10945c0)) {
      local_10 = REFG(float, 0x1093694);
      local_14 = REFG(float, 0x1093698);
      fVar1 = ((float)GEN_TOF((((float10)param_1 - (float10)*(double *)&REFG(undefined, 0x10945b8)) /
                     (float10)*(double *)&REFG(undefined, 0x10945c8))));
      dVar2 = (double)fVar1;
      fVar3 = F_00c4d2a0((uint)(ulonglong)gen_d2bits(dVar2),
                           (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
      fVar3 = (float10)fVar1 - (float10)(float)fVar3;
      goto LAB_004a3955;
    }
    if (!(param_1 < REFG(float, 0x10945b0))) {
      if ((GEN_ISNAN(param_1) || GEN_ISNAN(REFG(float, 0x10945b0))) !=
          ((GEN_ISNAN(param_1) || GEN_ISNAN(REFG(float, 0x10945b0))) || param_1 == REFG(float, 0x10945b0))) {
        return (float10)*(float *)&REFG(undefined, 0x10936d8);
      }
      goto LAB_004a398f;
    }
    param_1 = ((float)GEN_TOF((((float10)param_1 - (float10)*(double *)&REFG(undefined, 0x10945a8)) /
                     (float10)*(double *)&REFG(undefined, 0x10928e8))));
    fVar3 = F_00c4d2a0((uint)(ulonglong)gen_d2bits((double)param_1),
                         (int)((ulonglong)gen_d2bits((double)param_1) >> 0x20));
    local_10 = (&REFG(float, 0x1093698))[(int)fVar3];
    local_14 = *(float *)(&REFG(undefined, 0x109369c) + (int)fVar3 * 4);
  }
  fVar3 = (float10)param_1 - (float10)(float)fVar3;
LAB_004a3955: ;
  return (float10)((float)GEN_TOF((((float10)1 - (float10)(float)fVar3) * (float10)local_10 +
                         (float10)local_14 * (float10)(float)fVar3)));
}

/* ref: FUN_004a39a0 */
float10 F_004a39a0(float gen_a0)
{
  GEN_ENTER(0x4a39a0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float fVar1;
  double dVar2;
  float10 fVar3;
  float10 fVar4;
  
  if (!(param_1 < REFG(float, 0x10945e8))) {
    if (param_1 < REFG(float, 0x10945b0)) {
      fVar1 = ((float)GEN_TOF((((float10)param_1 - (float10)*(double *)&REFG(undefined, 0x10945e0)) /
                     (float10)*(double *)&REFG(undefined, 0x10928e8))));
      dVar2 = (double)fVar1;
      fVar3 = F_00c4d2a0((uint)(ulonglong)gen_d2bits(dVar2),
                           (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
      fVar4 = (float10)(float)((float10)fVar1 - (float10)(float)fVar3);
      return (float10)((float)GEN_TOF((fVar4 * (float10)*(float *)(&REFG(undefined, 0x10936e0) + (int)fVar3 * 4) +
                             ((float10)1 - fVar4) *
                             (float10)*(float *)(&REFG(undefined, 0x10936dc) + (int)fVar3 * 4))));
    }
    if ((GEN_ISNAN(param_1) || GEN_ISNAN(REFG(float, 0x10945b0))) !=
        ((GEN_ISNAN(param_1) || GEN_ISNAN(REFG(float, 0x10945b0))) || param_1 == REFG(float, 0x10945b0))) {
      return (float10)*(float *)&REFG(undefined, 0x10936e0);
    }
  }
  return (float10)0;
}

/* ref: FUN_004a3a50 */
float10 F_004a3a50(float gen_a0)
{
  GEN_ENTER(0x4a3a50u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float fVar1;
  double dVar2;
  float10 fVar3;
  float10 fVar4;
  
  if (!(param_1 < REFG(float, 0x10945f8))) {
    if (param_1 < REFG(float, 0x1087f04)) {
      fVar1 = ((float)GEN_TOF((((float10)param_1 - (float10)*(double *)&REFG(undefined, 0x10945f0)) /
                     (float10)*(double *)&REFG(undefined, 0x10928e8))));
      dVar2 = (double)fVar1;
      fVar3 = F_00c4d2a0((uint)(ulonglong)gen_d2bits(dVar2),
                           (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
      fVar4 = (float10)(float)((float10)fVar1 - (float10)(float)fVar3);
      return (float10)((float)GEN_TOF((fVar4 * (float10)*(float *)(&REFG(undefined, 0x10936ec) + (int)fVar3 * 4) +
                             ((float10)1 - fVar4) *
                             (float10)*(float *)(&REFG(undefined, 0x10936e8) + (int)fVar3 * 4))));
    }
    if ((GEN_ISNAN(param_1) || GEN_ISNAN(REFG(float, 0x1087f04))) !=
        ((GEN_ISNAN(param_1) || GEN_ISNAN(REFG(float, 0x1087f04))) || param_1 == REFG(float, 0x1087f04))) {
      return (float10)*(float *)&REFG(undefined, 0x1093764);
    }
  }
  return (float10)0;
}

/* ref: FUN_004a3b00 */
float10 F_004a3b00(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0x4a3b00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float in_xmm0 = (float)gen_a1;
  float in_xmm1 = (float)gen_a2;
  float in_xmm2 = (float)gen_a3;
  float in_xmm3 = (float)gen_a4;
  float in_xmm5 = (float)gen_a5;
  float in_xmm7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float10 fVar1;
  float10 extraout_ST1;
  
  fVar1 = F_00c4cb50(in_xmm0,in_xmm1,in_xmm2,in_xmm3,in_xmm5,in_xmm7,
                       (float10)*(double *)&REFG(undefined, 0x1094600));
  *(float *)(in_ecx + 400) = (float)fVar1;
  return extraout_ST1;
}

/* ref: FUN_004a3b40 */
unsigned int F_004a3b40(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4a3b40u, gen_a0, 0u, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_2;
  fVar2 = (float10)param_4;
  *param_1 = (float)(fVar1 * (float10)*param_3 + fVar2 * (float10)*param_5);
  param_1[1] = (float)((float10)param_5[1] * fVar2 + (float10)param_3[1] * fVar1);
  param_1[2] = (float)((float10)param_5[2] * fVar2 + (float10)param_3[2] * fVar1);
  param_1[3] = (float)(fVar1 * (float10)param_3[3] + (float10)param_5[3] * fVar2);
  return 0;
}

/* ref: FUN_004a3ba0 */
float10 F_004a3ba0(float gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x4a3ba0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float fVar1;
  double dVar2;
  float10 fVar3;
  float10 fVar4;
  
  dVar2 = (double)((float)GEN_TOF(((float10)(float)((float10)param_4 - (float10)param_2) /
                         (float10)*(float *)&REFG(undefined, 0x130131c))));
  fVar3 = F_00c4d2a0((uint)(ulonglong)gen_d2bits(dVar2),
                       (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
  fVar4 = (float10)*(float *)&REFG(undefined, 0x130131c);
  fVar3 = (float10)((float)GEN_TOF(((float10)(float)((float10)param_4 - (float10)param_2) -
                          fVar4 * (float10)(float)fVar3)));
  if ((float10)*(double *)&REFG(undefined, 0x1080228) < fVar3) {
    fVar3 = (float10)(float)(fVar3 - fVar4);
  }
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)param_2 + fVar3) * (float10)param_3 +
                 (float10)param_1 * (float10)param_2)));
  dVar2 = (double)(float)((float10)fVar1 / fVar4);
  fVar3 = F_00c4d2a0((uint)(ulonglong)gen_d2bits(dVar2),
                       (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
  return (float10)(float)((float10)fVar1 - (float10)(float)fVar3 * (float10)*(float *)&REFG(undefined, 0x130131c))
  ;
}

/* ref: FUN_004a3c60 */
float10 F_004a3c60(float gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x4a3c60u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float fVar1;
  double dVar2;
  float10 fVar3;
  float10 fVar4;
  
  dVar2 = (double)((float)GEN_TOF(((float10)(float)((float10)param_4 - (float10)param_2) /
                         (float10)*(double *)&REFG(undefined, 0x10920b0))));
  fVar3 = F_00c4d2a0((uint)(ulonglong)gen_d2bits(dVar2),
                       (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
  fVar4 = (float10)*(double *)&REFG(undefined, 0x10920b0);
  fVar3 = (float10)((float)GEN_TOF(((float10)(float)((float10)param_4 - (float10)param_2) -
                          (float10)(float)fVar3 * fVar4)));
  if ((float10)REFG(float, 0x10943cc) < fVar3) {
    fVar3 = (float10)(float)(fVar3 - fVar4);
  }
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)param_2 + fVar3) * (float10)param_3 +
                 (float10)param_1 * (float10)param_2)));
  dVar2 = (double)(float)((float10)fVar1 / fVar4);
  fVar3 = F_00c4d2a0((uint)(ulonglong)gen_d2bits(dVar2),
                       (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
  return (float10)(float)((float10)fVar1 - (float10)(float)fVar3 * (float10)*(double *)&REFG(undefined, 0x10920b0)
                         );
}

/* ref: FUN_004a3d10 */
float10 F_004a3d10(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, float gen_a5, float gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x4a3d10u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  uint param_8 = (uint)gen_a7;
  float10 fVar1;
  float10 fVar2;
  float10 extraout_ST1;
  
  if ((char)param_8 != '\0') {
    param_6 = (float)((float10)param_6 * (float10)*(double *)&REFG(undefined, 0x1094610));
    param_7 = (float)((float10)*(double *)&REFG(undefined, 0x1094610) * (float10)param_7);
  }
  fVar1 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_7);
  fVar2 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  *param_5 = (float)((float10)(float)fVar2 * (float10)(float)fVar1);
  fVar2 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_7);
  param_5[1] = (float)fVar2;
  fVar2 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  param_5[2] = (float)(-(float10)(float)fVar2 * (float10)(float)fVar1);
  return extraout_ST1;
}

/* ref: FUN_004a3e60 */
unsigned int F_004a3e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a3e60u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *param_1 = (float)((float10)*param_2 * (float10)*param_2);
  param_1[1] = (float)((float10)param_2[1] * (float10)param_2[1]);
  param_1[2] = (float)((float10)param_2[2] * (float10)param_2[2]);
  return 0;
}

/* ref: FUN_004a3ed0 */
float10 F_004a3ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x4a3ed0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 8) * (float10)*(float *)&REFG(undefined, 0x1301408) +
                         ((float10)*(float *)param_1 * (float10)*(float *)&REFG(undefined, 0x1301400) +
                         (float10)*(float *)(param_1 + 4) * (float10)*(float *)&REFG(undefined, 0x1301404)))));
}

/* ref: FUN_004a3f00 */
float10 F_004a3f00(unsigned int gen_a0)
{
  GEN_ENTER(0x4a3f00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 8) * (float10)*(float *)&REFG(undefined, 0x1301408) +
                         ((float10)*(float *)param_1 * (float10)*(float *)&REFG(undefined, 0x1301400) +
                         (float10)*(float *)(param_1 + 4) * (float10)*(float *)&REFG(undefined, 0x1301404)))));
}

/* ref: FUN_004a3f40 */
uint F_004a3f40(unsigned int gen_a0)
{
  GEN_ENTER(0x4a3f40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((*(uint *)&REFG(undefined, 0x1375830) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x1375830) = *(uint *)&REFG(undefined, 0x1375830) | 1;
    *(undefined4 *)&REFG(undefined, 0x13757d0) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x13757d4) = 0;
    *(undefined4 *)&REFG(undefined, 0x13757d8) = 0;
    *(undefined4 *)&REFG(undefined, 0x13757e0) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x13757e4) = 0;
    *(undefined4 *)&REFG(undefined, 0x13757e8) = 0;
    *(undefined4 *)&REFG(undefined, 0x13757f0) = 0;
    *(undefined4 *)&REFG(undefined, 0x13757f4) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x13757f8) = 0;
    *(undefined4 *)&REFG(undefined, 0x1375800) = 0;
    *(undefined4 *)&REFG(undefined, 0x1375804) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x1375808) = 0;
    *(undefined4 *)&REFG(undefined, 0x1375810) = 0;
    *(undefined4 *)&REFG(undefined, 0x1375814) = 0;
    *(undefined4 *)&REFG(undefined, 0x1375818) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1375820) = 0;
    *(undefined4 *)&REFG(undefined, 0x1375824) = 0;
    *(undefined4 *)&REFG(undefined, 0x1375828) = REFG(float, 0x1090708);
  }
  return (uint)(&REFG(undefined, 0x13757d0) + param_1 * 0x10);
}

/* ref: FUN_004a4010 */
uint F_004a4010(unsigned int gen_a0)
{
  GEN_ENTER(0x4a4010u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((*(uint *)&REFG(undefined, 0x13758a0) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x13758a0) = *(uint *)&REFG(undefined, 0x13758a0) | 1;
    *(undefined4 *)&REFG(undefined, 0x1375840) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1375844) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1375848) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1375850) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x1375854) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1375858) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x1375860) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x1375864) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1375868) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x1375870) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x1375874) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x1375878) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1375880) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x1375884) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1375888) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1375890) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1375894) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1375898) = REFG(float, 0x1090708);
  }
  return (uint)(&REFG(undefined, 0x1375840) + param_1 * 0x10);
}

/* ref: FUN_004a40e0 */
uint F_004a40e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4a40e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((*(uint *)&REFG(undefined, 0x1375910) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x1375910) = *(uint *)&REFG(undefined, 0x1375910) | 1;
    *(undefined4 *)&REFG(undefined, 0x13758b0) = 0;
    *(undefined4 *)&REFG(undefined, 0x13758b4) = 0;
    *(undefined4 *)&REFG(undefined, 0x13758b8) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x13758c0) = 0;
    *(undefined4 *)&REFG(undefined, 0x13758c4) = 0;
    *(undefined4 *)&REFG(undefined, 0x13758c8) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x13758d0) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x13758d4) = 0;
    *(undefined4 *)&REFG(undefined, 0x13758d8) = 0;
    *(undefined4 *)&REFG(undefined, 0x13758e0) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x13758e4) = 0;
    *(undefined4 *)&REFG(undefined, 0x13758e8) = 0;
    *(undefined4 *)&REFG(undefined, 0x13758f0) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x13758f4) = 0;
    *(undefined4 *)&REFG(undefined, 0x13758f8) = 0;
    *(undefined4 *)&REFG(undefined, 0x1375900) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x1375904) = 0;
    *(undefined4 *)&REFG(undefined, 0x1375908) = 0;
  }
  return (uint)(&REFG(undefined, 0x13758b0) + param_1 * 0x10);
}

/* ref: FUN_004a41b0 */
uint F_004a41b0(unsigned int gen_a0)
{
  GEN_ENTER(0x4a41b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((*(uint *)&REFG(undefined, 0x1375980) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x1375980) = *(uint *)&REFG(undefined, 0x1375980) | 1;
    *(undefined4 *)&REFG(undefined, 0x1375920) = 0;
    *(undefined4 *)&REFG(undefined, 0x1375924) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x1375928) = 0;
    *(undefined4 *)&REFG(undefined, 0x1375930) = 0;
    *(undefined4 *)&REFG(undefined, 0x1375934) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x1375938) = 0;
    *(undefined4 *)&REFG(undefined, 0x1375940) = 0;
    *(undefined4 *)&REFG(undefined, 0x1375944) = 0;
    *(undefined4 *)&REFG(undefined, 0x1375948) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1375950) = 0;
    *(undefined4 *)&REFG(undefined, 0x1375954) = 0;
    *(undefined4 *)&REFG(undefined, 0x1375958) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x1375960) = 0;
    *(undefined4 *)&REFG(undefined, 0x1375964) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x1375968) = 0;
    *(undefined4 *)&REFG(undefined, 0x1375970) = 0;
    *(undefined4 *)&REFG(undefined, 0x1375974) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x1375978) = 0;
  }
  return (uint)(&REFG(undefined, 0x1375920) + param_1 * 0x10);
}

/* ref: FUN_004a4280 */
uint F_004a4280(unsigned int gen_a0)
{
  GEN_ENTER(0x4a4280u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((*(uint *)&REFG(undefined, 0x13759f0) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x13759f0) = *(uint *)&REFG(undefined, 0x13759f0) | 1;
    *(undefined4 *)&REFG(undefined, 0x1375990) = 0;
    *(undefined4 *)&REFG(undefined, 0x1375994) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1375998) = 0;
    *(undefined4 *)&REFG(undefined, 0x13759a0) = 0;
    *(undefined4 *)&REFG(undefined, 0x13759a4) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x13759a8) = 0;
    *(undefined4 *)&REFG(undefined, 0x13759b0) = 0;
    *(undefined4 *)&REFG(undefined, 0x13759b4) = 0;
    *(undefined4 *)&REFG(undefined, 0x13759b8) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x13759c0) = 0;
    *(undefined4 *)&REFG(undefined, 0x13759c4) = 0;
    *(undefined4 *)&REFG(undefined, 0x13759c8) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x13759d0) = 0;
    *(undefined4 *)&REFG(undefined, 0x13759d4) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x13759d8) = 0;
    *(undefined4 *)&REFG(undefined, 0x13759e0) = 0;
    *(undefined4 *)&REFG(undefined, 0x13759e4) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x13759e8) = 0;
  }
  return (uint)(&REFG(undefined, 0x1375990) + param_1 * 0x10);
}

/* ref: FUN_004a4360 */
uint F_004a4360(unsigned int gen_a0)
{
  GEN_ENTER(0x4a4360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = (uint)*(ushort *)((int)this + 0x10);
  uVar2 = 0x14;
  if (uVar4 != 0) {
    piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc)));
    do {
      iVar1 = *piVar3;
      piVar3 = piVar3 + 4;
      uVar4 = uVar4 - 1;
      uVar2 = uVar2 + 0x11 + iVar1 * 0x14;
    } while (uVar4 != 0);
  }
  return uVar2;
}

/* ref: FUN_004a43e0 */
uint F_004a43e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4a43e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x34) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x34),0,0);
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  return uVar1;
}

/* ref: FUN_004a4400 */
unsigned int F_004a4400(unsigned int gen_a0)
{
  GEN_ENTER(0x4a4400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  int iVar3;
  
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  piVar2 = (int *)((int)this + 0x2c);
  iVar3 = 2;
  do {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1,500);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return 0;
}

/* ref: FUN_004a4450 */
unsigned int F_004a4450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a4450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((char)param_1 == '\0') {
    if (*(int *)((int)this + 0x34) != 0) {
      F_0050c620(*(int *)((int)this + 0x34),0,0);
      *(undefined4 *)((int)this + 0x34) = 0;
    }
  }
  else if (*(int *)((int)this + 0x34) == 0) {
    uVar1 = F_00513dc0("bg/ffxiv/sound/fst/fst_bg_thunder_flash.scd",0,0,0);
    *(uint *)((int)this + 0x34) = uVar1;
    return 0;
  }
  return 0;
}

/* ref: FUN_004a44a0 */
uint F_004a44a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4a44a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = REFG(undefined4, 0x1375a94);
  *(undefined4 *)((int)this + 4) = REFG(undefined4, 0x1375a98);
  *(undefined4 *)((int)this + 8) = REFG(undefined4, 0x1375a9c);
  *(undefined4 *)((int)this + 0xc) = REFG(undefined4, 0x1375aa0);
  *(undefined4 *)((int)this + 0x10) = REFG(undefined4, 0x1375a88);
  *(undefined4 *)((int)this + 0x14) = REFG(undefined4, 0x1375a8c);
  *(undefined4 *)((int)this + 0x18) = REFG(undefined4, 0x1375a90);
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = REFG(float, 0x1302c0c);
  *(undefined4 *)((int)this + 0x24) = REFG(float, 0x1302c10);
  *(undefined4 *)((int)this + 0x28) = REFG(float, 0x1302c14);
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x2c) = REFG(float, 0x1302c0c);
  *(undefined4 *)((int)this + 0x30) = REFG(float, 0x1302c10);
  *(undefined4 *)((int)this + 0x34) = REFG(float, 0x1302c14);
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined1 *)((int)this + 0x44) = 0;
  return 0;
}

/* ref: FUN_004a4530 */
unsigned int F_004a4530(unsigned int gen_a0)
{
  GEN_ENTER(0x4a4530u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  return 0;
}

/* ref: FUN_004a45e0 */
uint F_004a45e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a45e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  puVar2 = (undefined4 *)(param_1 + 0x14);
  puVar3 = (undefined4 *)((int)this + 0x14);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x44);
  puVar3 = (undefined4 *)((int)this + 0x44);
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x78);
  puVar3 = (undefined4 *)((int)this + 0x78);
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x9c);
  puVar3 = (undefined4 *)((int)this + 0x9c);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0xc4);
  puVar3 = (undefined4 *)((int)this + 0xc4);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0xe4);
  puVar3 = (undefined4 *)((int)this + 0xe4);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x10c);
  puVar3 = (undefined4 *)((int)this + 0x10c);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x13c);
  puVar3 = (undefined4 *)((int)this + 0x13c);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x16c) = *(undefined4 *)(param_1 + 0x16c);
  *(undefined4 *)((int)this + 0x170) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)((int)this + 0x174) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)((int)this + 0x178) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)((int)this + 0x17c) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)((int)this + 0x180) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)((int)this + 0x184) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)((int)this + 0x188) = *(undefined4 *)(param_1 + 0x188);
  *(undefined4 *)((int)this + 0x18c) = *(undefined4 *)(param_1 + 0x18c);
  *(undefined4 *)((int)this + 400) = *(undefined4 *)(param_1 + 400);
  *(undefined4 *)((int)this + 0x194) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)((int)this + 0x198) = *(undefined4 *)(param_1 + 0x198);
  puVar2 = (undefined4 *)(param_1 + 0x19c);
  puVar3 = (undefined4 *)((int)this + 0x19c);
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x1c8);
  puVar3 = (undefined4 *)((int)this + 0x1c8);
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_004a4750 */
uint F_004a4750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4a4750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  uVar1 = param_1[2];
  *(uint *)((int)this + 8) = uVar1;
  return uVar1;
}

/* ref: FUN_004a4770 */
unsigned int F_004a4770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4a4770u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_4;
  fVar2 = (float10)(float)((float10)1 - fVar1);
  *param_1 = (float)((float10)*param_3 * fVar1 + fVar2 * (float10)*param_2);
  param_1[1] = (float)((float10)param_3[1] * fVar1 + (float10)param_2[1] * fVar2);
  param_1[2] = (float)(fVar2 * (float10)param_2[2] + (float10)param_3[2] * fVar1);
  return 0;
}

/* ref: FUN_004a47c0 */
unsigned int F_004a47c0(unsigned int gen_a0)
{
  GEN_ENTER(0x4a47c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x109463c));
  in_ecx[0x21] = (*(undefined * PTR32 (*)[1])REFP(0x1094634));
  return 0;
}

/* ref: FUN_004a47f0 */
uint F_004a47f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4a47f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * puVar1;
  ushort * puVar2;
  ushort * puVar3;
  ushort * puVar4;
  ushort * puVar5;
  ushort * puVar6;
  ushort * puVar7;
  ushort * puVar8;
  ushort * puVar9;
  ushort * puVar10;
  ushort uVar11;
  uint uVar12;
  ushort * puVar13;
  uint uVar14;
  
  uVar14 = (uint)*(ushort *)((int)this + 0x10);
  uVar12 = 0x228;
  if (uVar14 != 0) {
    puVar13 = ((ushort *)GEN_TOP((*(int *)((int)this + 0xc) + 0x62)));
    do {
      puVar1 = puVar13 + -3;
      puVar2 = puVar13 + -9;
      puVar3 = puVar13 + -1;
      puVar4 = puVar13 + -2;
      puVar5 = puVar13 + 2;
      uVar11 = *puVar13;
      puVar6 = puVar13 + -4;
      puVar7 = puVar13 + -6;
      puVar8 = puVar13 + 3;
      puVar9 = puVar13 + -7;
      puVar10 = puVar13 + 1;
      puVar13 = puVar13 + 0x14a;
      uVar14 = uVar14 - 1;
      uVar12 = (uint)*puVar8 * 0x4c + uVar12 +
               ((uint)*puVar2 + (uint)*puVar1 + (uint)*puVar4) * 0x34 +
               ((uint)*puVar5 * 3 + (uint)*puVar3 + (uint)uVar11) * 0x10 +
               ((uint)*puVar7 + (uint)*puVar6) * 0x2c + (uint)*puVar9 * 0x28 + 0x295 +
               (uint)*puVar10 * 0x1c;
    } while (uVar14 != 0);
  }
  return uVar12;
}

/* ref: FUN_004a4880 */
uint F_004a4880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a4880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (((param_1 == 0) || (*(uint *)((int)this + 4) < param_1)) && (*(int *)this != 0)) {
    F_00406b30(*(int *)this);
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (param_1 != 0) {
    if (*(int *)this == 0) {
      uVar1 = F_00406bb0(-(uint)((int)((ulonglong)param_1 * 0x70 >> 0x20) != 0) |
                           (uint)((ulonglong)param_1 * 0x70),0,0);
      *(uint *)this = uVar1;
      if (uVar1 == 0) {
        return 0;
      }
    }
    *(uint *)((int)this + 4) = param_1;
    F_00c48350(*(undefined * PTR32 *)this,0,param_1 * 0x70);
  }
  return *(uint *)this;
}

/* ref: FUN_004a4910 */
uint F_004a4910(unsigned int gen_a0)
{
  GEN_ENTER(0x4a4910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = 0x20;
  do {
    piVar2 = (int *)((int)this + 8);
    uVar1 = 0;
    if (*piVar2 != 0) {
      uVar4 = F_00406b30(*piVar2);
      uVar1 = (uint)uVar4;
      *piVar2 = 0;
      *(int *)((int)this + 0xc) = 0;
    }
    iVar3 = iVar3 + -1;
    this = piVar2;
  } while (iVar3 != 0);
  return uVar1;
}

/* ref: FUN_004a4960 */
uint F_004a4960(unsigned int gen_a0)
{
  GEN_ENTER(0x4a4960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  iVar5 = 0;
  iVar4 = 0;
  iVar3 = 0;
  iVar1 = 0x214;
  piVar2 = (int *)((int)this + 0x14);
  local_8 = 8;
  do {
    iVar1 = iVar1 + piVar2[-2] * 0x70;
    iVar3 = iVar3 + *piVar2 * 0x70;
    iVar4 = iVar4 + piVar2[2] * 0x70;
    iVar5 = iVar5 + piVar2[4] * 0x70;
    piVar2 = piVar2 + 8;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return iVar1 + iVar5 + iVar4 + iVar3;
}

/* ref: FUN_004a49d0 */
uint F_004a49d0(unsigned int gen_a0)
{
  GEN_ENTER(0x4a49d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00513dc0(param_1,0,0,0);
  return uVar1;
}

/* ref: FUN_004a49f0 */
uint F_004a49f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4a49f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00513dc0(param_1,0,0,0);
  return uVar1;
}

/* ref: FUN_004a4a10 */
uint F_004a4a10(unsigned int gen_a0)
{
  GEN_ENTER(0x4a4a10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  F_004ff310(((undefined1 *)(gen_frame + 0x8)),1,0);
  uVar1 = F_009a2040(((undefined1 *)(gen_frame + 0x8)),param_1);
  return uVar1;
}

/* ref: FUN_004a4b40 */
byte F_004a4b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a4b40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(param_1 + 0xc);
  param_2[1] = *(undefined4 *)(param_1 + 8);
  param_2[2] = *(undefined4 *)(param_1 + 0x10);
  return 1;
}

/* ref: FUN_004a4b60 */
byte F_004a4b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a4b60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(param_1 + 4);
  param_2[1] = *(undefined4 *)(param_1 + 8);
  param_2[2] = *(undefined4 *)(param_1 + 0xc);
  param_2[3] = *(undefined4 *)(param_1 + 0x10);
  param_2[4] = *(undefined4 *)(param_1 + 0x14);
  param_2[5] = *(undefined4 *)(param_1 + 0x18);
  return 1;
}

/* ref: FUN_004a4b90 */
byte F_004a4b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a4b90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined2 *)(param_1 + 4);
  *(bool *)(param_2 + 1) = *(char *)(param_1 + 6) != '\0';
  return 1;
}

/* ref: FUN_004a4bb0 */
byte F_004a4bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a4bb0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(param_1 + 4);
  return 1;
}

/* ref: FUN_004a4bd0 */
byte F_004a4bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a4bd0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(param_1 + 4);
  return 1;
}

/* ref: FUN_004a4bf0 */
byte F_004a4bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a4bf0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(param_1 + 4);
  param_2[1] = *(undefined4 *)(param_1 + 8);
  return 1;
}

/* ref: FUN_004a4ce0 */
uint F_004a4ce0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x4a4ce0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  float in_xmm1;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  ((float *)(gen_frame + 0x30))[1] = 0.0;
  ((float *)(gen_frame + 0x30))[2] = 0.0;
  ((float *)(gen_frame + 0x30))[3] = 0.0;
  ((float *)(gen_frame + 0x30))[4] = 0.0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  ((float *)(gen_frame + 0x30))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x30))[0], REFG(float, 0x1087f04));
  ((float *)(gen_frame + 0x30))[5] = GEN_FLT_TO(((float *)(gen_frame + 0x30))[5], REFG(float, 0x1087f04));
  (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x6c)) = REFG(float, 0x1087f04);
  in_xmm1 = REFG(float, 0x1087f04);
  F_004be230(((float *)(gen_frame + 0x30)),REFG(float, 0x1087f04),in_xmm2,in_xmm3,in_xmm7,GEN_TOF(gen_bits2f(*(uint *)(in_ecx + 0x114) ^ REFG(uint, 0x10920d0))));
  (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0xf0) - (float10)*(float *)(in_ecx + 0x118))));
  F_004be350(((float *)(gen_frame + 0x30)),in_xmm1,in_xmm2,in_xmm3,in_xmm7,(*(float *)(gen_frame + 0x1c)));
  uVar2 = REFG(float, 0x1090708);
  puVar4 = (undefined4 *)(in_ecx + 0xc0);
  *puVar4 = 0;
  *(undefined4 *)(in_ecx + 0xc4) = 0;
  *(undefined4 *)(in_ecx + 200) = uVar2;
  *(undefined4 *)(in_ecx + 0xcc) = 0;
  puVar3 = (undefined4 *)F_004eede0(((undefined1 *)(gen_frame + 0x0)),puVar4,((float *)(gen_frame + 0x30)));
  (*(undefined4 *)(gen_frame + 0x24)) = puVar3[1];
  (*(undefined4 *)(gen_frame + 0x20)) = *puVar3;
  (*(undefined4 *)(gen_frame + 0x28)) = puVar3[2];
  uVar1 = puVar3[3];
  *puVar4 = *puVar3;
  *(undefined4 *)(in_ecx + 0xc4) = (*(undefined4 *)(gen_frame + 0x24));
  *(undefined4 *)(in_ecx + 200) = (*(undefined4 *)(gen_frame + 0x28));
  (*(uint *)(gen_frame + 0x2c)) = uVar1;
  *(uint *)(in_ecx + 0xcc) = uVar1;
  F_00c47745((*(uint *)(gen_frame + 0x7c)) ^ (uint)(uint)(gen_frame + 0x80));
  return uVar1;
}

/* ref: FUN_004a4eb0 */
float10 F_004a4eb0(float gen_a0, float gen_a1)
{
  GEN_ENTER(0x4a4eb0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = F_004a3830(param_1);
  return (float10)(float)(fVar1 * (float10)param_2);
}

/* ref: FUN_004a4fe0 */
float F_004a4fe0(void)
{
  GEN_ENTER(0x4a4fe0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  uint uVar2;
  
  uVar1 = REFG(undefined4, 0x1375590);
  uVar2 = REFG(undefined4, 0x1375584) << 0xb ^ REFG(undefined4, 0x1375584);
  REFG(undefined4, 0x1375584) = REFG(undefined4, 0x1375588);
  REFG(undefined4, 0x1375588) = REFG(undefined4, 0x137558c);
  REFG(undefined4, 0x1375590) = (REFG(undefined4, 0x1375590) >> 0xb ^ uVar2) >> 8 ^ REFG(undefined4, 0x1375590) ^ uVar2;
  REFG(undefined4, 0x137558c) = uVar1;
  return ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(REFG(undefined4, 0x1375590) >> 9 | 0x3f800000))) - (float10)REFG(double, 0x1088130))));
}

/* ref: FUN_004a5590 */
uint F_004a5590(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, float gen_a5, float gen_a6, unsigned int gen_a7, float gen_a8)
{
  GEN_ENTER(0x4a5590u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float in_xmm3 = (float)gen_a1;
  float in_xmm5 = (float)gen_a2;
  float in_xmm6 = (float)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  float param_9 = (float)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x160];
  uint uVar1;
  undefined4 * puVar2;
  float * pfVar3;
  int iVar4;
  undefined4 * puVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  
  (*(uint *)(gen_frame + 0x14c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x150);
  (*(float *)(gen_frame + 0xbc)) = (float)((float10)param_7 * (float10)REFG(double, 0x1088108));
  (*(float * PTR32 *)(gen_frame + 0x5c)) = in_ecx;
  fVar6 = F_00c4d590(in_xmm3,in_xmm5,in_xmm6,
                       (float10)(float)((float10)param_7 * (float10)REFG(double, 0x1088108)));
  (*(float *)(gen_frame + 0x13c)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0xa8)) = (float)fVar6;
  (*(float *)(gen_frame + 0xbc)) = (*(float *)(gen_frame + 0xa8));
  (*(float *)(gen_frame + 0xbc)) = ((float)GEN_TOF(ABS((float10)param_6)));
  fVar6 = (float10)(*(float *)(gen_frame + 0xa8));
  (*(float *)(gen_frame + 0xac)) = (float)(fVar6 * (float10)((float)GEN_TOF(ABS((float10)param_6))));
  (*(float *)(gen_frame + 0xbc)) = (float)(fVar6 * fVar6 + (float10)REFG(double, 0x1088130));
  (*(float *)(gen_frame + 0xbc)) = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0xbc)))));
  (*(float *)(gen_frame + 0xb8)) = (float)((float10)1 / (float10)(*(float *)(gen_frame + 0xbc)));
  (*(float *)(gen_frame + 0xbc)) = (float)((float10)(*(float *)(gen_frame + 0xac)) * (float10)(*(float *)(gen_frame + 0xac)) + (float10)1);
  (*(float *)(gen_frame + 0xbc)) = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0xbc)))));
  ((undefined4 *)(gen_frame + 0x100))[2] = param_5[8];
  (*(undefined4 *)(gen_frame + 0x118)) = param_5[9];
  ((undefined4 *)(gen_frame + 0x100))[0] = *param_5;
  (*(undefined4 *)(gen_frame + 0x110)) = param_5[1];
  (*(undefined4 *)(gen_frame + 0x11c)) = param_5[0xd];
  (*(undefined4 *)(gen_frame + 0x120)) = param_5[2];
  (*(undefined4 *)(gen_frame + 0x114)) = param_5[5];
  (*(undefined4 *)(gen_frame + 0x124)) = param_5[6];
  (*(undefined4 *)(gen_frame + 0x128)) = param_5[10];
  ((undefined4 *)(gen_frame + 0x100))[3] = param_5[0xc];
  (*(undefined4 *)(gen_frame + 0x12c)) = param_5[0xe];
  ((undefined4 *)(gen_frame + 0x100))[1] = param_5[4];
  in_ecx[1] = 0.0;
  (*(undefined4 *)(gen_frame + 0x130)) = 0;
  (*(undefined4 *)(gen_frame + 0x134)) = 0;
  (*(undefined4 *)(gen_frame + 0x138)) = 0;
  (*(float *)(gen_frame + 0xbc)) = (float)((float10)1 / (float10)(*(float *)(gen_frame + 0xbc)));
  *in_ecx = (*(float *)(gen_frame + 0xbc));
  uVar1 = REFG(float, 0x10920d0);
  fVar7 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xbc))) ^ REFG(uint, 0x10920d0));
  (*(float *)(gen_frame + 0xbc)) = fVar7;
  in_ecx[3] = 0.0;
  fVar8 = (float)((float10)fVar7 * (float10)(*(float *)(gen_frame + 0xac)));
  (*(float *)(gen_frame + 0xbc)) = fVar8;
  (*(float *)(gen_frame + 0xbc)) = 7.00649e-45;
  in_ecx[2] = fVar8;
  in_ecx[4] = fVar7;
  in_ecx[6] = fVar8;
  in_ecx[5] = 0.0;
  in_ecx[7] = 0.0;
  in_ecx[9] = (*(float *)(gen_frame + 0xb8));
  fVar8 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xb8))) ^ uVar1);
  (*(float *)(gen_frame + 0xb8)) = fVar8;
  in_ecx[8] = 0.0;
  in_ecx[0xb] = 0.0;
  (*(float *)(gen_frame + 0xb8)) = (float)((float10)fVar8 * (float10)(*(float *)(gen_frame + 0xa8)));
  in_ecx[10] = (*(float *)(gen_frame + 0xb8));
  in_ecx[0xc] = 0.0;
  in_ecx[0xf] = 0.0;
  in_ecx[0xe] = (*(float *)(gen_frame + 0xb8));
  in_ecx[0xd] = fVar8;
  in_ecx[0x10] = 0.0;
  in_ecx[0x11] = 0.0;
  in_ecx[0x12] = (*(float *)(gen_frame + 0x13c));
  in_ecx[0x13] = param_9;
  pfVar3 = in_ecx + 0x16;
  do {
    F_004eee00(pfVar3 + -0x16,(uint)((undefined4 *)(gen_frame + 0x100)));
    (*(float *)(gen_frame + 0xb4)) = pfVar3[-0x14];
    (*(float *)(gen_frame + 0xbc)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0xbc))) + -1);
    (*(float *)(gen_frame + 0xb0)) = pfVar3[-0x15];
    (*(float *)(gen_frame + 0xb8)) = ((float)GEN_TOF(ABS((float10)pfVar3[-0x16])));
    pfVar3[-2] = ((float)GEN_TOF(ABS((float10)pfVar3[-0x16])));
    (*(float *)(gen_frame + 0xb0)) = ((float)GEN_TOF(ABS((float10)pfVar3[-0x15])));
    pfVar3[-1] = (*(float *)(gen_frame + 0xb0));
    (*(float *)(gen_frame + 0xb4)) = ((float)GEN_TOF(ABS((float10)pfVar3[-0x14])));
    *pfVar3 = (*(float *)(gen_frame + 0xb4));
    pfVar3 = pfVar3 + 4;
  } while ((*(float *)(gen_frame + 0xbc)) != 0.0);
  (*(float *)(gen_frame + 0xb4)) = (float)((float10)param_9 * (float10)(*(float *)(gen_frame + 0xac)));
  (*(float *)(gen_frame + 0xb0)) = (float)((float10)param_9 * (float10)(*(float *)(gen_frame + 0xa8)));
  puVar2 = (undefined4 *)F_004f45d0(((undefined4 *)(gen_frame + 0xc0)),param_5);
  (*(float *)(gen_frame + 0x60)) = (*(float *)(gen_frame + 0xb4));
  (*(float *)(gen_frame + 0x74)) = (*(float *)(gen_frame + 0xb0));
  puVar5 = ((undefined4 *)(gen_frame + 0x0));
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  ((undefined4 *)(gen_frame + 0xc0))[0] = ((undefined4 *)(gen_frame + 0x0))[0];
  ((undefined4 *)(gen_frame + 0xc0))[1] = ((undefined4 *)(gen_frame + 0x0))[1];
  ((undefined4 *)(gen_frame + 0xc0))[2] = ((undefined4 *)(gen_frame + 0x0))[2];
  ((undefined4 *)(gen_frame + 0xc0))[3] = 0;
  (*(undefined4 *)(gen_frame + 0xdc)) = 0;
  (*(undefined4 *)(gen_frame + 0xec)) = 0;
  (*(undefined4 *)(gen_frame + 0xf0)) = (*(undefined4 *)(gen_frame + 0x30));
  ((undefined4 *)(gen_frame + 0xc0))[4] = (*(undefined4 *)(gen_frame + 0x10));
  (*(undefined4 *)(gen_frame + 0xf4)) = (*(undefined4 *)(gen_frame + 0x34));
  (*(undefined4 *)(gen_frame + 0xd4)) = (*(undefined4 *)(gen_frame + 0x14));
  (*(undefined4 *)(gen_frame + 0xf8)) = (*(undefined4 *)(gen_frame + 0x38));
  (*(undefined4 *)(gen_frame + 0xd8)) = (*(undefined4 *)(gen_frame + 0x18));
  (*(float *)(gen_frame + 0xfc)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0xe0)) = (*(undefined4 *)(gen_frame + 0x20));
  (*(float *)(gen_frame + 0x40)) = REFG(float, 0x1375ac0);
  (*(undefined4 *)(gen_frame + 0xe4)) = (*(undefined4 *)(gen_frame + 0x24));
  (*(float *)(gen_frame + 0x44)) = REFG(float, 0x1375ac4);
  (*(undefined4 *)(gen_frame + 0xe8)) = (*(undefined4 *)(gen_frame + 0x28));
  (*(float *)(gen_frame + 0x48)) = REFG(float, 0x1375ac8);
  (*(float *)(gen_frame + 0x98)) = gen_bits2f((uint)gen_fl2bits(param_9) ^ REFG(uint, 0x10920d0));
  puVar2 = ((undefined4 *)(gen_frame + 0xc0));
  puVar5 = ((undefined4 *)(gen_frame + 0x100));
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  (*(float *)(gen_frame + 0x90)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x60))) ^ REFG(uint, 0x10920d0));
  (*(float *)(gen_frame + 0x94)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x74))) ^ REFG(uint, 0x10920d0));
  (*(float *)(gen_frame + 0x64)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x74))) ^ REFG(uint, 0x10920d0));
  (*(float *)(gen_frame + 0x68)) = (*(float *)(gen_frame + 0x98));
  (*(float *)(gen_frame + 0x70)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x60))) ^ REFG(uint, 0x10920d0));
  (*(float *)(gen_frame + 0x78)) = (*(float *)(gen_frame + 0x98));
  (*(float *)(gen_frame + 0x80)) = (*(float *)(gen_frame + 0x60));
  (*(float *)(gen_frame + 0x84)) = (*(float *)(gen_frame + 0x74));
  (*(float *)(gen_frame + 0x88)) = (*(float *)(gen_frame + 0x98));
  F_004eeaa0(&(*(float *)(gen_frame + 0x40)),(uint)((undefined4 *)(gen_frame + 0x100)));
  F_004eeaa0(&(*(float *)(gen_frame + 0x90)),(uint)((undefined4 *)(gen_frame + 0x100)));
  F_004eeaa0(&(*(float *)(gen_frame + 0x60)),(uint)((undefined4 *)(gen_frame + 0x100)));
  F_004eeaa0(&(*(float *)(gen_frame + 0x70)),(uint)((undefined4 *)(gen_frame + 0x100)));
  F_004eeaa0(&(*(float *)(gen_frame + 0x80)),(uint)((undefined4 *)(gen_frame + 0x100)));
  (*(float * PTR32 *)(gen_frame + 0x5c))[0x2d] = (*(float *)(gen_frame + 0x44));
  (*(float * PTR32 *)(gen_frame + 0x5c))[0x2e] = (*(float *)(gen_frame + 0x48));
  (*(float * PTR32 *)(gen_frame + 0x5c))[0x2c] = (*(float *)(gen_frame + 0x40));
  (*(float * PTR32 *)(gen_frame + 0x5c))[0x28] = (*(float *)(gen_frame + 0x40));
  (*(float * PTR32 *)(gen_frame + 0x5c))[0x29] = (*(float * PTR32 *)(gen_frame + 0x5c))[0x2d];
  (*(float * PTR32 *)(gen_frame + 0x5c))[0x2a] = (*(float * PTR32 *)(gen_frame + 0x5c))[0x2e];
  if ((float10)(*(float *)(gen_frame + 0x90)) < (float10)(*(float * PTR32 *)(gen_frame + 0x5c))[0x28]) {
    (*(float * PTR32 *)(gen_frame + 0x5c))[0x28] = (*(float *)(gen_frame + 0x90));
  }
  if ((float10)(*(float *)(gen_frame + 0x94)) < (float10)(*(float * PTR32 *)(gen_frame + 0x5c))[0x29]) {
    (*(float * PTR32 *)(gen_frame + 0x5c))[0x29] = (*(float *)(gen_frame + 0x94));
  }
  if ((float10)(*(float *)(gen_frame + 0x98)) < (float10)(*(float * PTR32 *)(gen_frame + 0x5c))[0x2a]) {
    (*(float * PTR32 *)(gen_frame + 0x5c))[0x2a] = (*(float *)(gen_frame + 0x98));
  }
  if ((float10)(*(float * PTR32 *)(gen_frame + 0x5c))[0x2c] < (float10)(*(float *)(gen_frame + 0x90))) {
    (*(float * PTR32 *)(gen_frame + 0x5c))[0x2c] = (*(float *)(gen_frame + 0x90));
  }
  if ((float10)(*(float * PTR32 *)(gen_frame + 0x5c))[0x2d] < (float10)(*(float *)(gen_frame + 0x94))) {
    (*(float * PTR32 *)(gen_frame + 0x5c))[0x2d] = (*(float *)(gen_frame + 0x94));
  }
  if ((float10)(*(float * PTR32 *)(gen_frame + 0x5c))[0x2e] < (float10)(*(float *)(gen_frame + 0x98))) {
    (*(float * PTR32 *)(gen_frame + 0x5c))[0x2e] = (*(float *)(gen_frame + 0x98));
  }
  if ((float10)(*(float *)(gen_frame + 0x60)) < (float10)(*(float * PTR32 *)(gen_frame + 0x5c))[0x28]) {
    (*(float * PTR32 *)(gen_frame + 0x5c))[0x28] = (*(float *)(gen_frame + 0x60));
  }
  if ((float10)(*(float *)(gen_frame + 0x64)) < (float10)(*(float * PTR32 *)(gen_frame + 0x5c))[0x29]) {
    (*(float * PTR32 *)(gen_frame + 0x5c))[0x29] = (*(float *)(gen_frame + 0x64));
  }
  if ((float10)(*(float *)(gen_frame + 0x68)) < (float10)(*(float * PTR32 *)(gen_frame + 0x5c))[0x2a]) {
    (*(float * PTR32 *)(gen_frame + 0x5c))[0x2a] = (*(float *)(gen_frame + 0x68));
  }
  if ((float10)(*(float * PTR32 *)(gen_frame + 0x5c))[0x2c] < (float10)(*(float *)(gen_frame + 0x60))) {
    (*(float * PTR32 *)(gen_frame + 0x5c))[0x2c] = (*(float *)(gen_frame + 0x60));
  }
  if ((float10)(*(float * PTR32 *)(gen_frame + 0x5c))[0x2d] < (float10)(*(float *)(gen_frame + 0x64))) {
    (*(float * PTR32 *)(gen_frame + 0x5c))[0x2d] = (*(float *)(gen_frame + 0x64));
  }
  if ((float10)(*(float * PTR32 *)(gen_frame + 0x5c))[0x2e] < (float10)(*(float *)(gen_frame + 0x68))) {
    (*(float * PTR32 *)(gen_frame + 0x5c))[0x2e] = (*(float *)(gen_frame + 0x68));
  }
  if ((float10)(*(float *)(gen_frame + 0x70)) < (float10)(*(float * PTR32 *)(gen_frame + 0x5c))[0x28]) {
    (*(float * PTR32 *)(gen_frame + 0x5c))[0x28] = (*(float *)(gen_frame + 0x70));
  }
  if ((float10)(*(float *)(gen_frame + 0x74)) < (float10)(*(float * PTR32 *)(gen_frame + 0x5c))[0x29]) {
    (*(float * PTR32 *)(gen_frame + 0x5c))[0x29] = (*(float *)(gen_frame + 0x74));
  }
  if ((float10)(*(float *)(gen_frame + 0x78)) < (float10)(*(float * PTR32 *)(gen_frame + 0x5c))[0x2a]) {
    (*(float * PTR32 *)(gen_frame + 0x5c))[0x2a] = (*(float *)(gen_frame + 0x78));
  }
  if ((float10)(*(float * PTR32 *)(gen_frame + 0x5c))[0x2c] < (float10)(*(float *)(gen_frame + 0x70))) {
    (*(float * PTR32 *)(gen_frame + 0x5c))[0x2c] = (*(float *)(gen_frame + 0x70));
  }
  if ((float10)(*(float * PTR32 *)(gen_frame + 0x5c))[0x2d] < (float10)(*(float *)(gen_frame + 0x74))) {
    (*(float * PTR32 *)(gen_frame + 0x5c))[0x2d] = (*(float *)(gen_frame + 0x74));
  }
  if ((float10)(*(float * PTR32 *)(gen_frame + 0x5c))[0x2e] < (float10)(*(float *)(gen_frame + 0x78))) {
    (*(float * PTR32 *)(gen_frame + 0x5c))[0x2e] = (*(float *)(gen_frame + 0x78));
  }
  if ((float10)(*(float *)(gen_frame + 0x80)) < (float10)(*(float * PTR32 *)(gen_frame + 0x5c))[0x28]) {
    (*(float * PTR32 *)(gen_frame + 0x5c))[0x28] = (*(float *)(gen_frame + 0x80));
  }
  if ((float10)(*(float *)(gen_frame + 0x84)) < (float10)(*(float * PTR32 *)(gen_frame + 0x5c))[0x29]) {
    (*(float * PTR32 *)(gen_frame + 0x5c))[0x29] = (*(float *)(gen_frame + 0x84));
  }
  if ((float10)(*(float *)(gen_frame + 0x88)) < (float10)(*(float * PTR32 *)(gen_frame + 0x5c))[0x2a]) {
    (*(float * PTR32 *)(gen_frame + 0x5c))[0x2a] = (*(float *)(gen_frame + 0x88));
  }
  if ((float10)(*(float * PTR32 *)(gen_frame + 0x5c))[0x2c] < (float10)(*(float *)(gen_frame + 0x80))) {
    (*(float * PTR32 *)(gen_frame + 0x5c))[0x2c] = (*(float *)(gen_frame + 0x80));
  }
  if ((float10)(*(float * PTR32 *)(gen_frame + 0x5c))[0x2d] < (float10)(*(float *)(gen_frame + 0x84))) {
    (*(float * PTR32 *)(gen_frame + 0x5c))[0x2d] = (*(float *)(gen_frame + 0x84));
  }
  pfVar3 = (*(float * PTR32 *)(gen_frame + 0x5c));
  if ((float10)(*(float * PTR32 *)(gen_frame + 0x5c))[0x2e] < (float10)(*(float *)(gen_frame + 0x88))) {
    (*(float * PTR32 *)(gen_frame + 0x5c))[0x2e] = (*(float *)(gen_frame + 0x88));
  }
  F_00c47745((*(uint *)(gen_frame + 0x14c)) ^ (uint)(uint)(gen_frame + 0x150));
  return (uint)pfVar3;
}

/* ref: FUN_004a5d90 */
uint F_004a5d90(unsigned int gen_a0)
{
  GEN_ENTER(0x4a5d90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = (int *)((int)this + 0x10);
  iVar3 = 2;
  do {
    uVar1 = 0;
    if (*piVar2 != 0) {
      uVar1 = F_004e9a80(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f8),*piVar2,(float)(float10)1,0,0,1);
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return uVar1;
}

/* ref: FUN_004a5dd0 */
byte F_004a5dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4a5dd0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  float fVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar7 = param_3[2];
  fVar5 = param_3[1];
  fVar1 = param_3[3];
  fVar8 = (float10)param_4;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar9 = (float10)(float)((float10)1 - fVar8);
  *param_1 = ((float)GEN_TOF(((float10)(float)(fVar9 * (float10)*param_2) +
                    (float10)(float)(fVar8 * (float10)*param_3))));
  param_1[1] = ((float)GEN_TOF(((float10)(float)(fVar9 * (float10)fVar2) +
                      (float10)(float)((float10)fVar5 * fVar8))));
  param_1[2] = ((float)GEN_TOF(((float10)(float)(fVar9 * (float10)fVar3) +
                      (float10)(float)((float10)fVar7 * fVar8))));
  param_1[3] = ((float)GEN_TOF(((float10)(float)(fVar9 * (float10)fVar4) +
                      (float10)(float)((float10)fVar1 * fVar8))));
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  fVar4 = REFG(float, 0x1087f04);
  fVar7 = param_2[9];
  fVar2 = param_3[9];
  fVar1 = param_2[10];
  fVar3 = param_3[10];
  param_1[8] = ((float)GEN_TOF(((float10)(float)(fVar9 * (float10)param_2[8]) +
                      (float10)(float)((float10)param_3[8] * fVar8))));
  param_1[9] = ((float)GEN_TOF(((float10)(float)(fVar9 * (float10)fVar7) +
                      (float10)(float)((float10)fVar2 * fVar8))));
  param_1[10] = ((float)GEN_TOF(((float10)(float)(fVar9 * (float10)fVar1) +
                       (float10)(float)((float10)fVar3 * fVar8))));
  if (param_4 < fVar4) {
    fVar7 = param_2[0xe];
  }
  else {
    fVar7 = param_3[0xe];
  }
  param_1[0xe] = fVar7;
  fVar2 = param_3[0xc];
  fVar7 = param_2[0xc];
  fVar3 = param_3[0xd];
  fVar1 = param_2[0xd];
  param_1[0xb] = ((float)GEN_TOF(((float10)(float)(fVar9 * (float10)param_2[0xb]) +
                        (float10)(float)((float10)param_3[0xb] * fVar8))));
  param_1[0xc] = ((float)GEN_TOF(((float10)(float)(fVar9 * (float10)fVar7) +
                        (float10)(float)((float10)fVar2 * fVar8))));
  param_1[0xd] = ((float)GEN_TOF(((float10)(float)(fVar9 * (float10)fVar1) +
                        (float10)(float)((float10)fVar3 * fVar8))));
  if (param_4 < fVar4) {
    fVar7 = param_2[0xf];
  }
  else {
    fVar7 = param_3[0xf];
  }
  param_1[0xf] = fVar7;
  if (param_4 < fVar4) {
    fVar7 = param_2[0x10];
  }
  else {
    fVar7 = param_3[0x10];
  }
  param_1[0x10] = fVar7;
  if (param_4 < fVar4) {
    bVar6 = *(byte *)(param_2 + 0x11);
    *(byte *)(param_1 + 0x11) = bVar6;
    return bVar6;
  }
  bVar6 = *(byte *)(param_3 + 0x11);
  *(byte *)(param_1 + 0x11) = bVar6;
  return bVar6;
}

/* ref: FUN_004a60a0 */
byte F_004a60a0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x4a60a0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  float * pfVar5;
  float * pfVar6;
  float * pfVar7;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  int local_1c;
  
  fVar1 = param_2[2];
  fVar2 = param_2[1];
  fVar10 = param_2[3];
  fVar8 = (float10)param_3;
  fVar9 = (float10)(float)((float10)1 - fVar8);
  *param_1 = ((float)GEN_TOF(((float10)(float)(fVar9 * (float10)*param_1) +
                    (float10)(float)(fVar8 * (float10)*param_2))));
  param_1[1] = ((float)GEN_TOF(((float10)(float)(fVar9 * (float10)param_1[1]) +
                      (float10)(float)((float10)fVar2 * fVar8))));
  param_1[2] = ((float)GEN_TOF(((float10)(float)(fVar9 * (float10)param_1[2]) +
                      (float10)(float)((float10)fVar1 * fVar8))));
  param_1[3] = ((float)GEN_TOF(((float10)(float)(fVar9 * (float10)param_1[3]) +
                      (float10)(float)((float10)fVar10 * fVar8))));
  if (((((!GEN_ISNAN(param_1[4]) && !(param_1[4] <= 0.0)) || (!GEN_ISNAN(param_1[5]) && !(param_1[5] <= 0.0)))
       || (0.0 < param_1[6])) &&
      ((0.0 < param_1[7] &&
       (((!GEN_ISNAN(param_2[4]) && !(param_2[4] <= 0.0) || (!GEN_ISNAN(param_2[5]) && !(param_2[5] <= 0.0))) ||
        (0.0 < param_2[6])))))) && (0.0 < param_2[7])) {
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
  }
  fVar1 = REFG(float, 0x1087f04);
  pfVar7 = param_1 + 0xe;
  pfVar6 = param_2 + 10;
  pfVar5 = param_1 + 8;
  local_1c = 2;
  do {
    if (param_3 < fVar1) {
      if (*pfVar7 == *((float *)GEN_TOP((((int)param_2 - (int)param_1) + (int)pfVar7)))) {
        fVar2 = pfVar6[-1];
        fVar3 = *pfVar6;
        fVar10 = *((float *)GEN_TOP((((int)param_1 - (int)param_2) + (int)pfVar6)));
        *pfVar5 = ((float)GEN_TOF(((float10)(float)(fVar9 * (float10)*pfVar5) +
                         (float10)(float)((float10)pfVar6[-2] * fVar8))));
        pfVar5[1] = ((float)GEN_TOF(((float10)(float)(fVar9 * (float10)pfVar5[1]) +
                           (float10)(float)((float10)fVar2 * fVar8))));
        pfVar5[2] = ((float)GEN_TOF(((float10)(float)(fVar9 * (float10)fVar10) +
                           (float10)(float)((float10)fVar3 * fVar8))));
      }
      else {
        *pfVar7 = 0.0;
      }
    }
    else {
      *pfVar5 = pfVar6[-2];
      pfVar5[1] = pfVar6[-1];
      pfVar5[2] = *pfVar6;
      *pfVar7 = *((float *)GEN_TOP((((int)param_2 - (int)param_1) + (int)pfVar7)));
    }
    pfVar7 = pfVar7 + 1;
    pfVar6 = pfVar6 + 3;
    pfVar5 = pfVar5 + 3;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  if (param_3 < fVar1) {
    fVar10 = param_1[0x10];
  }
  else {
    fVar10 = param_2[0x10];
  }
  param_1[0x10] = fVar10;
  if (!(param_3 < fVar1)) {
    bVar4 = *(byte *)(param_2 + 0x11);
    *(byte *)(param_1 + 0x11) = bVar4;
    return bVar4;
  }
  bVar4 = *(byte *)(param_1 + 0x11);
  *(byte *)(param_1 + 0x11) = bVar4;
  return bVar4;
}

/* ref: FUN_004a6390 */
unsigned int F_004a6390(unsigned int gen_a0)
{
  GEN_ENTER(0x4a6390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return 0;
}

/* ref: FUN_004a63e0 */
unsigned int F_004a63e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4a63e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  return 0;
}

/* ref: FUN_004a6420 */
unsigned int F_004a6420(unsigned int gen_a0)
{
  GEN_ENTER(0x4a6420u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  return 0;
}

/* ref: FUN_004a6540 */
unsigned int F_004a6540(unsigned int gen_a0)
{
  GEN_ENTER(0x4a6540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1094724);
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x18) = uVar1;
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = uVar1;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = uVar1;
  return 0;
}

/* ref: FUN_004a6630 */
unsigned int F_004a6630(unsigned int gen_a0)
{
  GEN_ENTER(0x4a6630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = uVar1;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  return 0;
}

/* ref: FUN_004a66a0 */
uint F_004a66a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4a66a0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar5 = (float10)param_4;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  fVar6 = (float10)(float)((float10)1 - fVar5);
  *param_1 = ((float)GEN_TOF(((float10)(float)(fVar6 * (float10)*param_2) +
                    (float10)(float)((float10)*param_3 * fVar5))));
  param_1[1] = ((float)GEN_TOF(((float10)(float)((float10)fVar1 * fVar6) +
                      (float10)(float)((float10)fVar3 * fVar5))));
  param_1[2] = ((float)GEN_TOF(((float10)(float)((float10)fVar2 * fVar6) +
                      (float10)(float)((float10)fVar4 * fVar5))));
  fVar3 = param_3[4];
  fVar1 = param_2[4];
  fVar4 = param_3[5];
  fVar2 = param_2[5];
  param_1[3] = ((float)GEN_TOF(((float10)(float)((float10)param_2[3] * fVar6) +
                      (float10)(float)((float10)param_3[3] * fVar5))));
  param_1[4] = ((float)GEN_TOF(((float10)(float)((float10)fVar1 * fVar6) +
                      (float10)(float)((float10)fVar3 * fVar5))));
  param_1[5] = ((float)GEN_TOF(((float10)(float)((float10)fVar2 * fVar6) +
                      (float10)(float)((float10)fVar4 * fVar5))));
  fVar3 = param_3[7];
  fVar1 = param_2[7];
  fVar4 = param_3[8];
  fVar2 = param_2[8];
  param_1[6] = ((float)GEN_TOF(((float10)(float)((float10)param_2[6] * fVar6) +
                      (float10)(float)((float10)param_3[6] * fVar5))));
  param_1[7] = ((float)GEN_TOF(((float10)(float)((float10)fVar1 * fVar6) +
                      (float10)(float)((float10)fVar3 * fVar5))));
  param_1[8] = ((float)GEN_TOF(((float10)(float)((float10)fVar2 * fVar6) +
                      (float10)(float)((float10)fVar4 * fVar5))));
  param_1[9] = (float)((float10)param_3[9] * fVar5 + (float10)param_2[9] * fVar6);
  param_1[10] = (float)((float10)param_3[10] * fVar5 + (float10)param_2[10] * fVar6);
  param_1[0xb] = (float)(fVar6 * (float10)param_2[0xb] + (float10)param_3[0xb] * fVar5);
  return (uint)param_3;
}

/* ref: FUN_004a68f0 */
uint F_004a68f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4a68f0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar6 = F_004a3c60((float)((float10)1 - (float10)param_4),*param_2,param_4,*param_3);
  *param_1 = (float)fVar6;
  fVar6 = (float10)(float)((float10)1 - (float10)param_4);
  fVar7 = (float10)param_4;
  param_1[1] = (float)(fVar6 * (float10)param_2[1] + fVar7 * (float10)param_3[1]);
  fVar1 = param_2[5];
  fVar3 = param_3[5];
  fVar2 = param_2[6];
  fVar4 = param_3[6];
  param_1[4] = ((float)GEN_TOF(((float10)(float)((float10)param_2[4] * fVar6) +
                      (float10)(float)((float10)param_3[4] * fVar7))));
  param_1[5] = ((float)GEN_TOF(((float10)(float)((float10)fVar1 * fVar6) +
                      (float10)(float)((float10)fVar3 * fVar7))));
  param_1[6] = ((float)GEN_TOF(((float10)(float)((float10)fVar2 * fVar6) +
                      (float10)(float)((float10)fVar4 * fVar7))));
  param_1[2] = (float)((float10)param_3[2] * fVar7 + (float10)param_2[2] * fVar6);
  fVar1 = param_2[8];
  fVar3 = param_3[8];
  fVar2 = param_2[9];
  fVar4 = param_3[9];
  param_1[7] = ((float)GEN_TOF(((float10)(float)((float10)param_2[7] * fVar6) +
                      (float10)(float)((float10)param_3[7] * fVar7))));
  param_1[8] = ((float)GEN_TOF(((float10)(float)((float10)fVar1 * fVar6) +
                      (float10)(float)((float10)fVar3 * fVar7))));
  param_1[9] = ((float)GEN_TOF(((float10)(float)((float10)fVar2 * fVar6) +
                      (float10)(float)((float10)fVar4 * fVar7))));
  param_1[3] = (float)((float10)param_3[3] * fVar7 + (float10)param_2[3] * fVar6);
  fVar1 = param_2[0xb];
  fVar3 = param_3[0xb];
  fVar2 = param_2[0xc];
  fVar4 = param_3[0xc];
  fVar5 = ((float)GEN_TOF(((float10)(float)((float10)param_2[10] * fVar6) +
                 (float10)(float)((float10)param_3[10] * fVar7))));
  param_1[10] = fVar5;
  param_1[0xb] = ((float)GEN_TOF(((float10)(float)((float10)fVar1 * fVar6) +
                        (float10)(float)((float10)fVar3 * fVar7))));
  param_1[0xc] = ((float)GEN_TOF(((float10)(float)(fVar6 * (float10)fVar2) +
                        (float10)(float)((float10)fVar4 * fVar7))));
  return (uint)gen_fl2bits(fVar5);
}

/* ref: FUN_004a6b70 */
uint F_004a6b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4a6b70u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar7 = (float10)param_4;
  fVar8 = (float10)(float)((float10)1 - fVar7);
  *param_1 = (float)((float10)*param_3 * fVar7 + fVar8 * (float10)*param_2);
  param_1[1] = (float)((float10)param_3[1] * fVar7 + (float10)param_2[1] * fVar8);
  param_1[2] = (float)((float10)param_3[2] * fVar7 + (float10)param_2[2] * fVar8);
  param_1[3] = (float)((float10)param_3[3] * fVar7 + (float10)param_2[3] * fVar8);
  fVar1 = param_3[6];
  fVar2 = param_3[7];
  fVar6 = param_3[5];
  fVar3 = param_2[5];
  fVar4 = param_2[6];
  fVar5 = param_2[7];
  param_1[4] = ((float)GEN_TOF(((float10)(float)((float10)param_2[4] * fVar8) +
                      (float10)(float)((float10)param_3[4] * fVar7))));
  param_1[5] = ((float)GEN_TOF(((float10)(float)((float10)fVar3 * fVar8) +
                      (float10)(float)((float10)fVar6 * fVar7))));
  param_1[6] = ((float)GEN_TOF(((float10)(float)((float10)fVar4 * fVar8) +
                      (float10)(float)((float10)fVar1 * fVar7))));
  param_1[7] = ((float)GEN_TOF(((float10)(float)((float10)fVar5 * fVar8) +
                      (float10)(float)((float10)fVar2 * fVar7))));
  param_1[8] = (float)(fVar8 * (float10)param_2[8] + (float10)param_3[8] * fVar7);
  return (uint)param_2;
}

/* ref: FUN_004a6cd0 */
uint F_004a6cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4a6cd0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar7 = (float10)param_4;
  fVar1 = param_3[2];
  fVar2 = param_3[3];
  fVar3 = param_2[1];
  fVar6 = param_3[1];
  fVar4 = param_2[2];
  fVar5 = param_2[3];
  fVar8 = (float10)(float)((float10)1 - fVar7);
  *param_1 = ((float)GEN_TOF(((float10)(float)(fVar8 * (float10)*param_2) +
                    (float10)(float)((float10)*param_3 * fVar7))));
  param_1[1] = ((float)GEN_TOF(((float10)(float)((float10)fVar3 * fVar8) +
                      (float10)(float)((float10)fVar6 * fVar7))));
  param_1[2] = ((float)GEN_TOF(((float10)(float)((float10)fVar4 * fVar8) +
                      (float10)(float)((float10)fVar1 * fVar7))));
  param_1[3] = ((float)GEN_TOF(((float10)(float)((float10)fVar5 * fVar8) +
                      (float10)(float)((float10)fVar2 * fVar7))));
  param_1[4] = (float)((float10)param_3[4] * fVar7 + (float10)param_2[4] * fVar8);
  param_1[5] = (float)((float10)param_3[5] * fVar7 + (float10)param_2[5] * fVar8);
  param_1[6] = (float)((float10)param_3[6] * fVar7 + (float10)param_2[6] * fVar8);
  param_1[7] = (float)((float10)param_3[7] * fVar7 + (float10)param_2[7] * fVar8);
  param_1[8] = (float)((float10)param_3[8] * fVar7 + (float10)param_2[8] * fVar8);
  param_1[9] = (float)(fVar8 * (float10)param_2[9] + (float10)param_3[9] * fVar7);
  return (uint)param_3;
}

/* ref: FUN_004a6e40 */
uint F_004a6e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4a6e40u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar5 = (float10)param_4;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  fVar6 = (float10)(float)((float10)1 - fVar5);
  *param_1 = ((float)GEN_TOF(((float10)(float)(fVar6 * (float10)*param_2) +
                    (float10)(float)((float10)*param_3 * fVar5))));
  param_1[1] = ((float)GEN_TOF(((float10)(float)((float10)fVar1 * fVar6) +
                      (float10)(float)((float10)fVar3 * fVar5))));
  param_1[2] = ((float)GEN_TOF(((float10)(float)((float10)fVar2 * fVar6) +
                      (float10)(float)((float10)fVar4 * fVar5))));
  fVar3 = param_3[4];
  fVar1 = param_2[4];
  fVar4 = param_3[5];
  fVar2 = param_2[5];
  param_1[3] = ((float)GEN_TOF(((float10)(float)((float10)param_2[3] * fVar6) +
                      (float10)(float)((float10)param_3[3] * fVar5))));
  param_1[4] = ((float)GEN_TOF(((float10)(float)((float10)fVar1 * fVar6) +
                      (float10)(float)((float10)fVar3 * fVar5))));
  param_1[5] = ((float)GEN_TOF(((float10)(float)((float10)fVar2 * fVar6) +
                      (float10)(float)((float10)fVar4 * fVar5))));
  param_1[6] = (float)((float10)param_3[6] * fVar5 + (float10)param_2[6] * fVar6);
  param_1[7] = (float)(fVar6 * (float10)param_2[7] + (float10)param_3[7] * fVar5);
  return (uint)param_3;
}

/* ref: FUN_004a6fe0 */
uint F_004a6fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4a6fe0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  char cVar2;
  int iVar3;
  char cVar4;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  
  uVar1 = param_2;
  fVar7 = REFG(float, 0x1087f04);
  if (*(float *)(param_2 + 0x2c) != param_3[0xb]) {
    if ((!GEN_ISNAN(REFG(float, 0x1087f04)) && !GEN_ISNAN(param_4)) &&
        (!(REFG(float, 0x1087f04) < param_4) && REFG(uint, 0x1087f04) != param_4)) {
      param_3 = (float *)param_2;
    }
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_1 = *param_3;
      param_3 = param_3 + 1;
      param_1 = param_1 + 1;
    }
    return param_2;
  }
  fVar5 = (float10)param_4;
  if ((0.0 < *(float *)param_2) && (0.0 < *(float *)(param_2 + 0x20))) {
    cVar2 = '\x01';
  }
  else {
    cVar2 = '\0';
  }
  if ((0.0 < *param_3) && (0.0 < param_3[8])) {
    cVar4 = '\x01';
  }
  else {
    cVar4 = '\0';
  }
  fVar6 = (float10)(float)((float10)1 - fVar5);
  param_1[8] = ((float)GEN_TOF(((float10)param_3[8] * fVar5 + fVar6 * (float10)*(float *)(param_2 + 0x20))));
  if (cVar2 == '\0') {
    if (cVar4 == '\0') {
      return param_2;
    }
    param_2 = 0;
  }
  else {
    param_2 = (uint)gen_fl2bits(fVar7);
    if (cVar2 == cVar4) goto LAB_004a70ab;
  }
  if (cVar4 == '\0') {
    param_4 = 0.0;
  }
  else {
    param_4 = fVar7;
  }
  fVar5 = (float10)param_4;
  fVar6 = ((float10)GEN_TOD(gen_bits2f(param_2)));
LAB_004a70ab: ;
  *param_1 = (float)((float10)*param_3 * fVar5 + (float10)*(float *)uVar1 * fVar6);
  param_1[1] = ((float)GEN_TOF(((float10)param_3[1] * fVar5 + (float10)*(float *)(uVar1 + 4) * fVar6)));
  param_1[4] = ((float)GEN_TOF(((float10)param_3[4] * fVar5 + (float10)*(float *)(uVar1 + 0x10) * fVar6)));
  param_1[2] = ((float)GEN_TOF(((float10)param_3[2] * fVar5 + (float10)*(float *)(uVar1 + 8) * fVar6)));
  param_1[3] = ((float)GEN_TOF(((float10)param_3[3] * fVar5 + (float10)*(float *)(uVar1 + 0xc) * fVar6)));
  param_1[5] = ((float)GEN_TOF(((float10)param_3[5] * fVar5 + (float10)*(float *)(uVar1 + 0x14) * fVar6)));
  param_1[6] = ((float)GEN_TOF(((float10)param_3[6] * fVar5 + (float10)*(float *)(uVar1 + 0x18) * fVar6)));
  param_1[7] = ((float)GEN_TOF(((float10)param_3[7] * fVar5 + (float10)*(float *)(uVar1 + 0x1c) * fVar6)));
  param_1[10] = ((float)GEN_TOF(((float10)param_3[10] * fVar5 + (float10)*(float *)(uVar1 + 0x28) * fVar6)));
  param_1[9] = ((float)GEN_TOF((fVar6 * (float10)*(float *)(uVar1 + 0x24) + (float10)param_3[9] * fVar5)));
  if (!(param_4 < fVar7)) {
    fVar7 = param_3[0xb];
    param_1[0xb] = fVar7;
    return (uint)gen_fl2bits(fVar7);
  }
  fVar7 = *(float *)(uVar1 + 0x2c);
  param_1[0xb] = fVar7;
  return (uint)gen_fl2bits(fVar7);
}

/* ref: FUN_004a7160 */
uint F_004a7160(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x4a7160u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_2 + 0x2c)) {
    param_3 = REFG(float, 0x1087f04);
  }
  uVar1 = F_004a6fe0(param_1,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_004a7260 */
uint F_004a7260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4a7260u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float fVar1;
  float fVar2;
  bool bVar3;
  undefined4 in_EAX = 0;
  uint3 uVar5;
  uint uVar4;
  float10 fVar6;
  float10 fVar7;
  float local_8;
  
  fVar2 = REFG(float, 0x1087f04);
  fVar6 = (float10)param_4;
  fVar1 = *(float *)(param_2 + 0x14);
  uVar5 = (uint3)((uint)in_EAX >> 8);
  if (0.0 < param_3[5]) {
    uVar4 = CONCAT31(uVar5,1);
  }
  else {
    uVar4 = (uint)uVar5 << 8;
  }
  local_8 = REFG(float, 0x1087f04);
  fVar7 = (float10)(float)((float10)1 - fVar6);
  param_1[5] = (float)((float10)param_3[5] * fVar6 + fVar7 * (float10)fVar1);
  bVar3 = SUB41(uVar4,0);
  if (!GEN_ISNAN(fVar1) && !(fVar1 <= 0.0)) {
    if ((!GEN_ISNAN(fVar1) && !(fVar1 <= 0.0)) == bVar3) goto LAB_004a72fb;
  }
  else {
    if (bVar3 == false) {
      return uVar4;
    }
    local_8 = 0.0;
  }
  if (bVar3 == false) {
    param_4 = 0.0;
  }
  else {
    param_4 = fVar2;
  }
  fVar6 = (float10)param_4;
  fVar7 = (float10)local_8;
LAB_004a72fb: ;
  *param_1 = (float)((float10)*param_3 * fVar6 + (float10)*(float *)param_2 * fVar7);
  param_1[1] = ((float)GEN_TOF(((float10)param_3[1] * fVar6 + (float10)*(float *)(param_2 + 4) * fVar7)));
  param_1[2] = ((float)GEN_TOF(((float10)param_3[2] * fVar6 + (float10)*(float *)(param_2 + 8) * fVar7)));
  param_1[3] = ((float)GEN_TOF(((float10)param_3[3] * fVar6 + (float10)*(float *)(param_2 + 0xc) * fVar7)));
  param_1[4] = ((float)GEN_TOF((fVar7 * (float10)*(float *)(param_2 + 0x10) + (float10)param_3[4] * fVar6)));
  return uVar4;
}

/* ref: FUN_004a7350 */
uint F_004a7350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4a7350u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar5 = (float10)param_4;
  fVar6 = (float10)(float)((float10)1 - fVar5);
  *param_1 = (float)((float10)*param_3 * fVar5 + fVar6 * (float10)*param_2);
  param_1[1] = (float)((float10)param_3[1] * fVar5 + (float10)param_2[1] * fVar6);
  param_1[2] = (float)((float10)param_3[2] * fVar5 + (float10)param_2[2] * fVar6);
  param_1[3] = (float)((float10)param_3[3] * fVar5 + (float10)param_2[3] * fVar6);
  fVar1 = param_2[5];
  fVar3 = param_3[5];
  fVar2 = param_2[6];
  fVar4 = param_3[6];
  param_1[4] = ((float)GEN_TOF(((float10)(float)((float10)param_2[4] * fVar6) +
                      (float10)(float)((float10)param_3[4] * fVar5))));
  param_1[5] = ((float)GEN_TOF(((float10)(float)((float10)fVar1 * fVar6) +
                      (float10)(float)((float10)fVar3 * fVar5))));
  param_1[6] = ((float)GEN_TOF(((float10)(float)((float10)fVar2 * fVar6) +
                      (float10)(float)((float10)fVar4 * fVar5))));
  param_1[7] = (float)((float10)param_3[7] * fVar5 + (float10)param_2[7] * fVar6);
  param_1[8] = (float)((float10)param_3[8] * fVar5 + (float10)param_2[8] * fVar6);
  param_1[9] = (float)((float10)param_3[9] * fVar5 + (float10)param_2[9] * fVar6);
  param_1[10] = (float)(fVar6 * (float10)param_2[10] + (float10)param_3[10] * fVar5);
  return (uint)param_2;
}

/* ref: FUN_004a7510 */
uint F_004a7510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a7510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float10 fVar2;
  float * pfVar3;
  uint uVar4;
  float * pfVar5;
  float * pfVar6;
  undefined4 * puVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  ulonglong uVar12;
  
  pfVar3 = (float *)0x0;
  iVar9 = 0;
  *(undefined2 *)((int)this + 0x6a) = 0;
  if ((param_1 == (float *)0x0) || ((float *)(uint)*(ushort *)((int)this + 0x50) < param_1)) {
    pfVar3 = (float *)0x0;
    if (*(int *)((int)this + 0x1c) != 0) {
      uVar12 = F_00406b30(*(int *)((int)this + 0x1c));
      pfVar3 = (float *)uVar12;
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined2 *)((int)this + 0x50) = 0;
    }
  }
  if (param_1 != (float *)0x0) {
    if (*(int *)((int)this + 0x1c) == 0) {
      uVar4 = F_00406bb0(-(uint)((int)(ZEXT48(param_1) * 0x34 >> 0x20) != 0) |
                           (uint)(ZEXT48(param_1) * 0x34),0,0);
      *(uint *)((int)this + 0x1c) = uVar4;
      if (uVar4 == 0) {
        return 0;
      }
    }
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    fVar2 = (float10)1;
    pfVar3 = (float *)0x0;
    *(short *)((int)this + 0x50) = (short)param_1;
    if (3 < (int)param_1) {
      fVar10 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x14)) = (float)fVar10;
      fVar10 = (float10)(*(float *)(gen_frame + 0x14));
      (*(int *)(gen_frame + 0xc)) = ((uint)(param_1 + -1) >> 2) + 1;
      pfVar3 = (float *)((*(int *)(gen_frame + 0xc)) * 4);
      iVar8 = 0x2a300;
      do {
        puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar9)));
        pfVar6 = &(*(float *)(gen_frame + 0x18));
        if (!(fVar10 < fVar2)) {
          pfVar6 = &(*(float *)(gen_frame + 0x14));
        }
        fVar11 = (float10)(iVar8 + -0x2a300);
        if (iVar8 + -0x2a300 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        puVar7[0xc] = (undefined4)gen_fl2bits((float)(fVar11 / (float10)*pfVar6));
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        puVar7[8] = 0;
        puVar7[9] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x18)));
        puVar7[10] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x18)));
        puVar7[0xb] = 0;
        puVar7 = ((undefined4 *)GEN_TOP((iVar9 + 0x34 + *(int *)((int)this + 0x1c))));
        pfVar6 = &(*(float *)(gen_frame + 0x18));
        if (!(fVar10 < fVar2)) {
          pfVar6 = &(*(float *)(gen_frame + 0x14));
        }
        fVar11 = (float10)(iVar8 + -0x15180);
        if (iVar8 + -0x15180 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        pfVar5 = &(*(float *)(gen_frame + 0x18));
        puVar7[0xc] = (undefined4)gen_fl2bits((float)(fVar11 / (float10)*pfVar6));
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        puVar7[8] = 0;
        puVar7[9] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x18)));
        puVar7[10] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x18)));
        puVar7[0xb] = 0;
        puVar7 = ((undefined4 *)GEN_TOP((iVar9 + 0x68 + *(int *)((int)this + 0x1c))));
        if (!(fVar10 < fVar2)) {
          pfVar5 = &(*(float *)(gen_frame + 0x14));
        }
        fVar11 = (float10)iVar8;
        if (iVar8 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        pfVar6 = &(*(float *)(gen_frame + 0x18));
        puVar7[0xc] = (undefined4)gen_fl2bits((float)(fVar11 / (float10)*pfVar5));
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        puVar7[8] = 0;
        puVar7[9] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x18)));
        puVar7[10] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x18)));
        puVar7[0xb] = 0;
        puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar9 + 0x9c)));
        if (!(fVar10 < fVar2)) {
          pfVar6 = &(*(float *)(gen_frame + 0x14));
        }
        fVar11 = (float10)(iVar8 + 0x15180);
        if (iVar8 + 0x15180 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        iVar9 = iVar9 + 0xd0;
        iVar8 = iVar8 + 0x54600;
        (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + -1;
        puVar7[0xc] = (undefined4)gen_fl2bits((float)(fVar11 / (float10)*pfVar6));
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        puVar7[8] = 0;
        puVar7[9] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x18)));
        puVar7[10] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x18)));
        puVar7[0xb] = 0;
      } while ((*(int *)(gen_frame + 0xc)) != 0);
    }
    if (pfVar3 < param_1) {
      fVar10 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x14)) = (float)fVar10;
      iVar9 = (int)((int)(uintptr_t)pfVar3) * 0x15180;
      iVar8 = (int)((int)(uintptr_t)pfVar3) * 0x34;
      param_1 = (float *)((int)param_1 - (int)pfVar3);
      do {
        puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar8)));
        pfVar3 = &(*(float *)(gen_frame + 0x18));
        if (!((float10)(*(float *)(gen_frame + 0x14)) < fVar2)) {
          pfVar3 = &(*(float *)(gen_frame + 0x14));
        }
        fVar10 = (float10)iVar9;
        if (iVar9 < 0) {
          fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        fVar1 = *pfVar3;
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        iVar8 = iVar8 + 0x34;
        iVar9 = iVar9 + 0x15180;
        param_1 = (float *)((int)param_1 + -1);
        puVar7[0xc] = (undefined4)gen_fl2bits((float)(fVar10 / (float10)fVar1));
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        puVar7[8] = 0;
        puVar7[9] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x18)));
        puVar7[10] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x18)));
        puVar7[0xb] = 0;
      } while (param_1 != (float *)0x0);
    }
  }
  return (uint)pfVar3;
}

/* ref: FUN_004a7860 */
uint F_004a7860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a7860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  undefined4 * puVar2;
  float * pfVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  ulonglong uVar10;
  
  uVar6 = param_1;
  puVar2 = (undefined4 *)0x0;
  iVar7 = 0;
  *(undefined2 *)((int)this + 0x6c) = 0;
  if ((param_1 == 0) || (*(ushort *)((int)this + 0x52) < param_1)) {
    puVar2 = (undefined4 *)0x0;
    if (*(int *)((int)this + 0x20) != 0) {
      uVar10 = F_00406b30(*(int *)((int)this + 0x20));
      puVar2 = (undefined4 *)uVar10;
      *(undefined4 *)((int)this + 0x20) = 0;
      *(undefined2 *)((int)this + 0x52) = 0;
    }
  }
  if (param_1 != 0) {
    if (*(int *)((int)this + 0x20) == 0) {
      puVar2 = (undefined4 *)
               F_00406bb0(-(uint)((int)((ulonglong)param_1 * 0x38 >> 0x20) != 0) |
                            (uint)((ulonglong)param_1 * 0x38),0,0);
      *(undefined4 * PTR32 *)((int)this + 0x20) = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        return 0;
      }
    }
    *(short *)((int)this + 0x52) = (short)param_1;
    if (param_1 != 0) {
      fVar8 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x8)) = (float)fVar8;
      (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
      param_1 = 0;
      do {
        puVar4 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20) + param_1)));
        pfVar3 = &(*(float *)(gen_frame + 0x4));
        if (!((float10)(float)fVar8 < (float10)1)) {
          pfVar3 = &(*(float *)(gen_frame + 0x8));
        }
        fVar9 = (float10)iVar7;
        if (iVar7 < 0) {
          fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        fVar1 = *pfVar3;
        *puVar4 = 0;
        puVar2 = puVar4 + 6;
        puVar4[0xd] = (undefined4)gen_fl2bits((float)(fVar9 / (float10)fVar1));
        iVar5 = 3;
        do {
          puVar4 = puVar4 + 1;
          *puVar4 = 0;
          puVar2[-2] = 0;
          puVar2[-1] = 0;
          *puVar2 = 0;
          puVar2 = puVar2 + 3;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        param_1 = param_1 + 0x38;
        iVar7 = iVar7 + 0x15180;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_004a7980 */
uint F_004a7980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a7980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float10 fVar2;
  float * pfVar3;
  uint uVar4;
  float * pfVar5;
  float * pfVar6;
  undefined4 * puVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  ulonglong uVar12;
  
  pfVar3 = (float *)0x0;
  iVar9 = 0;
  *(undefined2 *)((int)this + 0x6e) = 0;
  if ((param_1 == (float *)0x0) || ((float *)(uint)*(ushort *)((int)this + 0x54) < param_1)) {
    pfVar3 = (float *)0x0;
    if (*(int *)((int)this + 0x24) != 0) {
      uVar12 = F_00406b30(*(int *)((int)this + 0x24));
      pfVar3 = (float *)uVar12;
      *(undefined4 *)((int)this + 0x24) = 0;
      *(undefined2 *)((int)this + 0x54) = 0;
    }
  }
  if (param_1 != (float *)0x0) {
    if (*(int *)((int)this + 0x24) == 0) {
      uVar4 = F_00406bb0(-(uint)((int)(ZEXT48(param_1) * 0x28 >> 0x20) != 0) |
                           (uint)(ZEXT48(param_1) * 0x28),0,0);
      *(uint *)((int)this + 0x24) = uVar4;
      if (uVar4 == 0) {
        return 0;
      }
    }
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    fVar2 = (float10)1;
    pfVar3 = (float *)0x0;
    *(short *)((int)this + 0x54) = (short)param_1;
    if (3 < (int)param_1) {
      fVar10 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x14)) = (float)fVar10;
      fVar10 = (float10)(*(float *)(gen_frame + 0x14));
      (*(int *)(gen_frame + 0xc)) = ((uint)(param_1 + -1) >> 2) + 1;
      pfVar3 = (float *)((*(int *)(gen_frame + 0xc)) * 4);
      iVar8 = 0x2a300;
      do {
        puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + iVar9)));
        pfVar6 = &(*(float *)(gen_frame + 0x18));
        if (!(fVar10 < fVar2)) {
          pfVar6 = &(*(float *)(gen_frame + 0x14));
        }
        fVar11 = (float10)(iVar8 + -0x2a300);
        if (iVar8 + -0x2a300 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        puVar7[9] = (undefined4)gen_fl2bits((float)(fVar11 / (float10)*pfVar6));
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        puVar7[8] = 0;
        puVar7 = ((undefined4 *)GEN_TOP((iVar9 + 0x28 + *(int *)((int)this + 0x24))));
        pfVar6 = &(*(float *)(gen_frame + 0x18));
        if (!(fVar10 < fVar2)) {
          pfVar6 = &(*(float *)(gen_frame + 0x14));
        }
        fVar11 = (float10)(iVar8 + -0x15180);
        if (iVar8 + -0x15180 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        pfVar5 = &(*(float *)(gen_frame + 0x18));
        puVar7[9] = (undefined4)gen_fl2bits((float)(fVar11 / (float10)*pfVar6));
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        puVar7[8] = 0;
        puVar7 = ((undefined4 *)GEN_TOP((iVar9 + 0x50 + *(int *)((int)this + 0x24))));
        if (!(fVar10 < fVar2)) {
          pfVar5 = &(*(float *)(gen_frame + 0x14));
        }
        fVar11 = (float10)iVar8;
        if (iVar8 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        pfVar6 = &(*(float *)(gen_frame + 0x18));
        puVar7[9] = (undefined4)gen_fl2bits((float)(fVar11 / (float10)*pfVar5));
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        puVar7[8] = 0;
        puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + iVar9 + 0x78)));
        if (!(fVar10 < fVar2)) {
          pfVar6 = &(*(float *)(gen_frame + 0x14));
        }
        fVar11 = (float10)(iVar8 + 0x15180);
        if (iVar8 + 0x15180 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        iVar9 = iVar9 + 0xa0;
        iVar8 = iVar8 + 0x54600;
        (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + -1;
        puVar7[9] = (undefined4)gen_fl2bits((float)(fVar11 / (float10)*pfVar6));
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        puVar7[8] = 0;
      } while ((*(int *)(gen_frame + 0xc)) != 0);
    }
    if (pfVar3 < param_1) {
      fVar10 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x14)) = (float)fVar10;
      iVar8 = (int)((int)(uintptr_t)pfVar3) * 0x15180;
      iVar9 = (int)((int)(uintptr_t)pfVar3) * 0x28;
      param_1 = (float *)((int)param_1 - (int)pfVar3);
      do {
        puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + iVar9)));
        pfVar3 = &(*(float *)(gen_frame + 0x18));
        if (!((float10)(*(float *)(gen_frame + 0x14)) < fVar2)) {
          pfVar3 = &(*(float *)(gen_frame + 0x14));
        }
        fVar10 = (float10)iVar8;
        if (iVar8 < 0) {
          fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        fVar1 = *pfVar3;
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        iVar9 = iVar9 + 0x28;
        iVar8 = iVar8 + 0x15180;
        param_1 = (float *)((int)param_1 + -1);
        puVar7[9] = (undefined4)gen_fl2bits((float)(fVar10 / (float10)fVar1));
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        puVar7[8] = 0;
      } while (param_1 != (float *)0x0);
    }
  }
  return (uint)pfVar3;
}

/* ref: FUN_004a7c80 */
uint F_004a7c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a7c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float10 fVar2;
  undefined4 uVar3;
  uint uVar4;
  float * pfVar5;
  undefined4 * puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  ulonglong uVar12;
  
  uVar4 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  *(undefined2 *)((int)this + 0x70) = 0;
  if ((param_1 == 0) || (*(ushort *)((int)this + 0x56) < param_1)) {
    uVar4 = 0;
    if (*(int *)((int)this + 0x28) != 0) {
      uVar12 = F_00406b30(*(int *)((int)this + 0x28));
      uVar4 = (uint)uVar12;
      *(undefined4 *)((int)this + 0x28) = 0;
      *(undefined2 *)((int)this + 0x56) = 0;
    }
  }
  if (param_1 != 0) {
    if (*(int *)((int)this + 0x28) == 0) {
      uVar4 = F_00406bb0(-(uint)((int)((ulonglong)param_1 * 0x2c >> 0x20) != 0) |
                           (uint)((ulonglong)param_1 * 0x2c),0,0);
      *(uint *)((int)this + 0x28) = uVar4;
      if (uVar4 == 0) {
        return 0;
      }
    }
    uVar3 = REFG(float, 0x1094724);
    (*(float *)(gen_frame + 0xc)) = REFG(float, 0x1087f04);
    fVar2 = (float10)1;
    uVar4 = 0;
    *(short *)((int)this + 0x56) = (short)param_1;
    if (3 < (int)param_1) {
      fVar10 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x8)) = (float)fVar10;
      fVar10 = (float10)(*(float *)(gen_frame + 0x8));
      (*(int *)(gen_frame + 0x4)) = (param_1 - 4 >> 2) + 1;
      uVar4 = (*(int *)(gen_frame + 0x4)) * 4;
      (*(int *)(gen_frame + 0x14)) = 0;
      iVar7 = 0x2a300;
      do {
        puVar6 = ((undefined4 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x28) + (*(int *)(gen_frame + 0x14)))));
        (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0xc));
        if (!(fVar10 < fVar2)) {
          (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0x8));
        }
        fVar11 = (float10)(iVar7 + -0x2a300);
        if (iVar7 + -0x2a300 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        puVar6[10] = (undefined4)gen_fl2bits((float)(fVar11 / (float10)*(*(float * PTR32 *)(gen_frame + 0x18))));
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[6] = uVar3;
        puVar6[7] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc)));
        puVar6[8] = 0;
        puVar6[9] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc)));
        puVar6 = ((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + 0x2c + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x28))));
        (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0xc));
        if (!(fVar10 < fVar2)) {
          (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0x8));
        }
        fVar11 = (float10)(iVar7 + -0x15180);
        if (iVar7 + -0x15180 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        puVar6[10] = (undefined4)gen_fl2bits((float)(fVar11 / (float10)*(*(float * PTR32 *)(gen_frame + 0x18))));
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[6] = uVar3;
        puVar6[7] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc)));
        puVar6[8] = 0;
        puVar6[9] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc)));
        puVar6 = ((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + 0x58 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x28))));
        (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0xc));
        if (!(fVar10 < fVar2)) {
          (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0x8));
        }
        fVar11 = (float10)iVar7;
        if (iVar7 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        puVar6[10] = (undefined4)gen_fl2bits((float)(fVar11 / (float10)*(*(float * PTR32 *)(gen_frame + 0x18))));
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[6] = uVar3;
        puVar6[7] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc)));
        puVar6[8] = 0;
        puVar6[9] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc)));
        puVar6 = ((undefined4 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x28) + (*(int *)(gen_frame + 0x14)) + 0x84)));
        (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0xc));
        if (!(fVar10 < fVar2)) {
          (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0x8));
        }
        fVar11 = (float10)(iVar7 + 0x15180);
        if (iVar7 + 0x15180 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 0xb0;
        iVar7 = iVar7 + 0x54600;
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
        puVar6[10] = (undefined4)gen_fl2bits((float)(fVar11 / (float10)*(*(float * PTR32 *)(gen_frame + 0x18))));
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[6] = uVar3;
        puVar6[7] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc)));
        puVar6[8] = 0;
        puVar6[9] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc)));
        this = (*(undefined * PTR32 *)(gen_frame + 0x10));
      } while ((*(int *)(gen_frame + 0x4)) != 0);
    }
    if (uVar4 < param_1) {
      fVar10 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x8)) = (float)fVar10;
      iVar7 = uVar4 * 0x15180;
      iVar9 = uVar4 * 0x2c;
      iVar8 = param_1 - uVar4;
      do {
        puVar6 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28) + iVar9)));
        pfVar5 = &(*(float *)(gen_frame + 0xc));
        if (!((float10)(*(float *)(gen_frame + 0x8)) < fVar2)) {
          pfVar5 = &(*(float *)(gen_frame + 0x8));
        }
        fVar10 = (float10)iVar7;
        if (iVar7 < 0) {
          fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        fVar1 = *pfVar5;
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        uVar4 = 0;
        iVar9 = iVar9 + 0x2c;
        iVar7 = iVar7 + 0x15180;
        iVar8 = iVar8 + -1;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[6] = uVar3;
        puVar6[7] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc)));
        puVar6[8] = 0;
        puVar6[9] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc)));
        puVar6[10] = (undefined4)gen_fl2bits((float)(fVar10 / (float10)fVar1));
        this = (*(undefined * PTR32 *)(gen_frame + 0x10));
      } while (iVar8 != 0);
    }
  }
  return uVar4;
}

/* ref: FUN_004a7ff0 */
uint F_004a7ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a7ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float10 fVar2;
  float * pfVar3;
  uint uVar4;
  float * pfVar5;
  float * pfVar6;
  undefined4 * puVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  ulonglong uVar12;
  
  pfVar3 = (float *)0x0;
  iVar9 = 0;
  *(undefined2 *)((int)this + 0x72) = 0;
  if ((param_1 == (float *)0x0) || ((float *)(uint)*(ushort *)((int)this + 0x58) < param_1)) {
    pfVar3 = (float *)0x0;
    if (*(int *)((int)this + 0x2c) != 0) {
      uVar12 = F_00406b30(*(int *)((int)this + 0x2c));
      pfVar3 = (float *)uVar12;
      *(undefined4 *)((int)this + 0x2c) = 0;
      *(undefined2 *)((int)this + 0x58) = 0;
    }
  }
  if (param_1 != (float *)0x0) {
    if (*(int *)((int)this + 0x2c) == 0) {
      uVar4 = F_00406bb0(-(uint)((int)(ZEXT48(param_1) * 0x24 >> 0x20) != 0) |
                           (uint)(ZEXT48(param_1) * 0x24),0,0);
      *(uint *)((int)this + 0x2c) = uVar4;
      if (uVar4 == 0) {
        return 0;
      }
    }
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    fVar2 = (float10)1;
    pfVar3 = (float *)0x0;
    *(short *)((int)this + 0x58) = (short)param_1;
    if (3 < (int)param_1) {
      fVar10 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x14)) = (float)fVar10;
      fVar10 = (float10)(*(float *)(gen_frame + 0x14));
      (*(int *)(gen_frame + 0xc)) = ((uint)(param_1 + -1) >> 2) + 1;
      pfVar3 = (float *)((*(int *)(gen_frame + 0xc)) * 4);
      iVar8 = 0x2a300;
      do {
        puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2c) + iVar9)));
        pfVar6 = &(*(float *)(gen_frame + 0x18));
        if (!(fVar10 < fVar2)) {
          pfVar6 = &(*(float *)(gen_frame + 0x14));
        }
        fVar11 = (float10)(iVar8 + -0x2a300);
        if (iVar8 + -0x2a300 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        puVar7[8] = (undefined4)gen_fl2bits((float)(fVar11 / (float10)*pfVar6));
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        puVar7 = ((undefined4 *)GEN_TOP((iVar9 + 0x24 + *(int *)((int)this + 0x2c))));
        pfVar6 = &(*(float *)(gen_frame + 0x18));
        if (!(fVar10 < fVar2)) {
          pfVar6 = &(*(float *)(gen_frame + 0x14));
        }
        fVar11 = (float10)(iVar8 + -0x15180);
        if (iVar8 + -0x15180 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        pfVar5 = &(*(float *)(gen_frame + 0x18));
        puVar7[8] = (undefined4)gen_fl2bits((float)(fVar11 / (float10)*pfVar6));
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        puVar7 = ((undefined4 *)GEN_TOP((iVar9 + 0x48 + *(int *)((int)this + 0x2c))));
        if (!(fVar10 < fVar2)) {
          pfVar5 = &(*(float *)(gen_frame + 0x14));
        }
        fVar11 = (float10)iVar8;
        if (iVar8 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        pfVar6 = &(*(float *)(gen_frame + 0x18));
        puVar7[8] = (undefined4)gen_fl2bits((float)(fVar11 / (float10)*pfVar5));
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2c) + iVar9 + 0x6c)));
        if (!(fVar10 < fVar2)) {
          pfVar6 = &(*(float *)(gen_frame + 0x14));
        }
        fVar11 = (float10)(iVar8 + 0x15180);
        if (iVar8 + 0x15180 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        iVar9 = iVar9 + 0x90;
        iVar8 = iVar8 + 0x54600;
        (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + -1;
        puVar7[8] = (undefined4)gen_fl2bits((float)(fVar11 / (float10)*pfVar6));
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
      } while ((*(int *)(gen_frame + 0xc)) != 0);
    }
    if (pfVar3 < param_1) {
      fVar10 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x14)) = (float)fVar10;
      iVar8 = (int)((int)(uintptr_t)pfVar3) * 0x15180;
      iVar9 = (int)((int)(uintptr_t)pfVar3) * 0x24;
      param_1 = (float *)((int)param_1 - (int)pfVar3);
      do {
        puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2c) + iVar9)));
        pfVar3 = &(*(float *)(gen_frame + 0x18));
        if (!((float10)(*(float *)(gen_frame + 0x14)) < fVar2)) {
          pfVar3 = &(*(float *)(gen_frame + 0x14));
        }
        fVar10 = (float10)iVar8;
        if (iVar8 < 0) {
          fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        fVar1 = *pfVar3;
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        iVar9 = iVar9 + 0x24;
        iVar8 = iVar8 + 0x15180;
        param_1 = (float *)((int)param_1 + -1);
        puVar7[8] = (undefined4)gen_fl2bits((float)(fVar10 / (float10)fVar1));
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
      } while (param_1 != (float *)0x0);
    }
  }
  return (uint)pfVar3;
}

/* ref: FUN_004a82d0 */
uint F_004a82d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a82d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float10 fVar2;
  float fVar3;
  float * pfVar4;
  uint uVar5;
  float * pfVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  ulonglong uVar11;
  
  (*(float * PTR32 *)(gen_frame + 0x18)) = (float *)0x0;
  *(undefined2 *)((int)this + 0x74) = 0;
  if ((param_1 == 0) || (*(ushort *)((int)this + 0x5a) < param_1)) {
    (*(float * PTR32 *)(gen_frame + 0x18)) = (float *)0x0;
    if (*(int *)((int)this + 0x30) != 0) {
      uVar11 = F_00406b30(*(int *)((int)this + 0x30));
      (*(float * PTR32 *)(gen_frame + 0x18)) = (float *)uVar11;
      *(undefined4 *)((int)this + 0x30) = 0;
      *(undefined2 *)((int)this + 0x5a) = 0;
    }
  }
  if (param_1 != 0) {
    if (*(int *)((int)this + 0x30) == 0) {
      (*(float * PTR32 *)(gen_frame + 0x18)) = (float *)F_00406bb0(-(uint)((int)((ulonglong)param_1 * 0x2c >> 0x20) != 0) |
                                      (uint)((ulonglong)param_1 * 0x2c),0,0);
      *(float * PTR32 *)((int)this + 0x30) = (*(float * PTR32 *)(gen_frame + 0x18));
      if ((*(float * PTR32 *)(gen_frame + 0x18)) == (float *)0x0) {
        return 0;
      }
    }
    fVar3 = REFG(float, 0x1088068);
    (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
    fVar2 = (float10)1;
    uVar5 = 0;
    *(short *)((int)this + 0x5a) = (short)param_1;
    if (3 < (int)param_1) {
      fVar9 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x10)) = (float)fVar9;
      fVar9 = (float10)(*(float *)(gen_frame + 0x10));
      (*(int *)(gen_frame + 0xc)) = (param_1 - 4 >> 2) + 1;
      iVar8 = 0;
      uVar5 = (*(int *)(gen_frame + 0xc)) * 4;
      iVar7 = 0x2a300;
      do {
        pfVar6 = ((float *)GEN_TOP((*(int *)((int)this + 0x30) + iVar8)));
        (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0x14));
        if (!(fVar9 < fVar2)) {
          (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0x10));
        }
        fVar10 = (float10)(iVar7 + -0x2a300);
        if (iVar7 + -0x2a300 < 0) {
          fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        pfVar4 = &(*(float *)(gen_frame + 0x14));
        pfVar6[10] = (float)(fVar10 / (float10)*(*(float * PTR32 *)(gen_frame + 0x18)));
        *pfVar6 = (*(float *)(gen_frame + 0x14));
        pfVar6[1] = (*(float *)(gen_frame + 0x14));
        pfVar6[2] = (*(float *)(gen_frame + 0x14));
        pfVar6[3] = (*(float *)(gen_frame + 0x14));
        pfVar6[4] = (*(float *)(gen_frame + 0x14));
        pfVar6[5] = (*(float *)(gen_frame + 0x14));
        pfVar6[6] = fVar3;
        pfVar6[7] = 0.0;
        pfVar6[8] = 0.0;
        pfVar6[9] = 0.0;
        pfVar6 = ((float *)GEN_TOP((iVar8 + 0x2c + *(int *)((int)this + 0x30))));
        if (!(fVar9 < fVar2)) {
          pfVar4 = &(*(float *)(gen_frame + 0x10));
        }
        (*(float * PTR32 *)(gen_frame + 0x18)) = pfVar4;
        fVar10 = (float10)(iVar7 + -0x15180);
        if (iVar7 + -0x15180 < 0) {
          fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0x14));
        pfVar6[10] = (float)(fVar10 / (float10)*pfVar4);
        *pfVar6 = (*(float *)(gen_frame + 0x14));
        pfVar6[1] = (*(float *)(gen_frame + 0x14));
        pfVar6[2] = (*(float *)(gen_frame + 0x14));
        pfVar6[3] = (*(float *)(gen_frame + 0x14));
        pfVar6[4] = (*(float *)(gen_frame + 0x14));
        pfVar6[5] = (*(float *)(gen_frame + 0x14));
        pfVar6[6] = fVar3;
        pfVar6[7] = 0.0;
        pfVar6[8] = 0.0;
        pfVar6[9] = 0.0;
        pfVar6 = ((float *)GEN_TOP((iVar8 + 0x58 + *(int *)((int)this + 0x30))));
        if (!(fVar9 < fVar2)) {
          (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0x10));
        }
        fVar10 = (float10)iVar7;
        if (iVar7 < 0) {
          fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        pfVar6[10] = (float)(fVar10 / (float10)*(*(float * PTR32 *)(gen_frame + 0x18)));
        *pfVar6 = (*(float *)(gen_frame + 0x14));
        pfVar6[1] = (*(float *)(gen_frame + 0x14));
        pfVar6[2] = (*(float *)(gen_frame + 0x14));
        pfVar6[3] = (*(float *)(gen_frame + 0x14));
        pfVar6[4] = (*(float *)(gen_frame + 0x14));
        pfVar6[5] = (*(float *)(gen_frame + 0x14));
        pfVar6[6] = fVar3;
        pfVar6[7] = 0.0;
        pfVar6[8] = 0.0;
        pfVar6[9] = 0.0;
        pfVar6 = ((float *)GEN_TOP((*(int *)((int)this + 0x30) + iVar8 + 0x84)));
        (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0x14));
        if (!(fVar9 < fVar2)) {
          (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0x10));
        }
        fVar10 = (float10)(iVar7 + 0x15180);
        if (iVar7 + 0x15180 < 0) {
          fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        iVar8 = iVar8 + 0xb0;
        iVar7 = iVar7 + 0x54600;
        (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + -1;
        pfVar6[10] = (float)(fVar10 / (float10)*(*(float * PTR32 *)(gen_frame + 0x18)));
        *pfVar6 = (*(float *)(gen_frame + 0x14));
        pfVar6[1] = (*(float *)(gen_frame + 0x14));
        pfVar6[2] = (*(float *)(gen_frame + 0x14));
        pfVar6[3] = (*(float *)(gen_frame + 0x14));
        pfVar6[4] = (*(float *)(gen_frame + 0x14));
        pfVar6[5] = (*(float *)(gen_frame + 0x14));
        pfVar6[6] = fVar3;
        pfVar6[7] = 0.0;
        pfVar6[8] = 0.0;
        pfVar6[9] = 0.0;
      } while ((*(int *)(gen_frame + 0xc)) != 0);
    }
    if (uVar5 < param_1) {
      fVar9 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x10)) = (float)fVar9;
      iVar7 = uVar5 * 0x2c;
      iVar8 = uVar5 * 0x15180;
      (*(int *)(gen_frame + 0xc)) = param_1 - uVar5;
      do {
        pfVar6 = ((float *)GEN_TOP((*(int *)((int)this + 0x30) + iVar7)));
        (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0x14));
        if (!((float10)(*(float *)(gen_frame + 0x10)) < fVar2)) {
          (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0x10));
        }
        fVar9 = (float10)iVar8;
        if (iVar8 < 0) {
          fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        fVar1 = *(*(float * PTR32 *)(gen_frame + 0x18));
        iVar7 = iVar7 + 0x2c;
        *pfVar6 = (*(float *)(gen_frame + 0x14));
        pfVar6[1] = (*(float *)(gen_frame + 0x14));
        pfVar6[2] = (*(float *)(gen_frame + 0x14));
        iVar8 = iVar8 + 0x15180;
        (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + -1;
        pfVar6[10] = (float)(fVar9 / (float10)fVar1);
        pfVar6[3] = (*(float *)(gen_frame + 0x14));
        pfVar6[4] = (*(float *)(gen_frame + 0x14));
        pfVar6[5] = (*(float *)(gen_frame + 0x14));
        pfVar6[6] = fVar3;
        pfVar6[7] = 0.0;
        pfVar6[8] = 0.0;
        pfVar6[9] = 0.0;
      } while ((*(int *)(gen_frame + 0xc)) != 0);
    }
  }
  return (uint)(*(float * PTR32 *)(gen_frame + 0x18));
}

/* ref: FUN_004a85f0 */
uint F_004a85f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a85f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float10 fVar2;
  uint uVar3;
  float * pfVar4;
  undefined4 * puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  ulonglong uVar11;
  
  uVar3 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  *(undefined2 *)((int)this + 0x76) = 0;
  if ((param_1 == 0) || (*(ushort *)((int)this + 0x5c) < param_1)) {
    uVar3 = 0;
    if (*(int *)((int)this + 0x34) != 0) {
      uVar11 = F_00406b30(*(int *)((int)this + 0x34));
      uVar3 = (uint)uVar11;
      *(undefined4 *)((int)this + 0x34) = 0;
      *(undefined2 *)((int)this + 0x5c) = 0;
    }
  }
  if (param_1 != 0) {
    if (*(int *)((int)this + 0x34) == 0) {
      uVar3 = F_00406bb0(-(uint)((int)((ulonglong)param_1 * 0x34 >> 0x20) != 0) |
                           (uint)((ulonglong)param_1 * 0x34),0,0);
      *(uint *)((int)this + 0x34) = uVar3;
      if (uVar3 == 0) {
        return 0;
      }
    }
    (*(float *)(gen_frame + 0xc)) = REFG(float, 0x1087f04);
    fVar2 = (float10)1;
    uVar3 = 0;
    *(short *)((int)this + 0x5c) = (short)param_1;
    if (3 < (int)param_1) {
      fVar9 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x8)) = (float)fVar9;
      fVar9 = (float10)(*(float *)(gen_frame + 0x8));
      (*(int *)(gen_frame + 0x4)) = (param_1 - 4 >> 2) + 1;
      uVar3 = (*(int *)(gen_frame + 0x4)) * 4;
      (*(int *)(gen_frame + 0x14)) = 0;
      iVar6 = 0x2a300;
      do {
        puVar5 = ((undefined4 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x34) + (*(int *)(gen_frame + 0x14)))));
        (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0xc));
        if (!(fVar9 < fVar2)) {
          (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0x8));
        }
        fVar10 = (float10)(iVar6 + -0x2a300);
        if (iVar6 + -0x2a300 < 0) {
          fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        puVar5[0xc] = (undefined4)gen_fl2bits((float)(fVar10 / (float10)*(*(float * PTR32 *)(gen_frame + 0x18))));
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc)));
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5[8] = 0;
        puVar5[9] = 0;
        puVar5[10] = 0;
        puVar5[0xb] = 0;
        puVar5 = ((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + 0x34 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x34))));
        (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0xc));
        if (!(fVar9 < fVar2)) {
          (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0x8));
        }
        fVar10 = (float10)(iVar6 + -0x15180);
        if (iVar6 + -0x15180 < 0) {
          fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        puVar5[0xc] = (undefined4)gen_fl2bits((float)(fVar10 / (float10)*(*(float * PTR32 *)(gen_frame + 0x18))));
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc)));
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5[8] = 0;
        puVar5[9] = 0;
        puVar5[10] = 0;
        puVar5[0xb] = 0;
        puVar5 = ((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + 0x68 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x34))));
        (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0xc));
        if (!(fVar9 < fVar2)) {
          (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0x8));
        }
        fVar10 = (float10)iVar6;
        if (iVar6 < 0) {
          fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        puVar5[0xc] = (undefined4)gen_fl2bits((float)(fVar10 / (float10)*(*(float * PTR32 *)(gen_frame + 0x18))));
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc)));
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5[8] = 0;
        puVar5[9] = 0;
        puVar5[10] = 0;
        puVar5[0xb] = 0;
        puVar5 = ((undefined4 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x34) + (*(int *)(gen_frame + 0x14)) + 0x9c)));
        (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0xc));
        if (!(fVar9 < fVar2)) {
          (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0x8));
        }
        fVar10 = (float10)(iVar6 + 0x15180);
        if (iVar6 + 0x15180 < 0) {
          fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 0xd0;
        iVar6 = iVar6 + 0x54600;
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
        puVar5[0xc] = (undefined4)gen_fl2bits((float)(fVar10 / (float10)*(*(float * PTR32 *)(gen_frame + 0x18))));
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc)));
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5[8] = 0;
        puVar5[9] = 0;
        puVar5[10] = 0;
        puVar5[0xb] = 0;
        this = (*(undefined * PTR32 *)(gen_frame + 0x10));
      } while ((*(int *)(gen_frame + 0x4)) != 0);
    }
    if (uVar3 < param_1) {
      fVar9 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x8)) = (float)fVar9;
      iVar6 = uVar3 * 0x15180;
      iVar8 = uVar3 * 0x34;
      iVar7 = param_1 - uVar3;
      do {
        puVar5 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x34) + iVar8)));
        pfVar4 = &(*(float *)(gen_frame + 0xc));
        if (!((float10)(*(float *)(gen_frame + 0x8)) < fVar2)) {
          pfVar4 = &(*(float *)(gen_frame + 0x8));
        }
        fVar9 = (float10)iVar6;
        if (iVar6 < 0) {
          fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        fVar1 = *pfVar4;
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[7] = 0;
        uVar3 = 0;
        iVar8 = iVar8 + 0x34;
        iVar6 = iVar6 + 0x15180;
        iVar7 = iVar7 + -1;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc)));
        puVar5[8] = 0;
        puVar5[9] = 0;
        puVar5[10] = 0;
        puVar5[0xb] = 0;
        puVar5[0xc] = (undefined4)gen_fl2bits((float)(fVar9 / (float10)fVar1));
        this = (*(undefined * PTR32 *)(gen_frame + 0x10));
      } while (iVar7 != 0);
    }
  }
  return uVar3;
}

/* ref: FUN_004a8990 */
uint F_004a8990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a8990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float10 fVar2;
  uint uVar3;
  float * pfVar4;
  undefined4 * puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  ulonglong uVar11;
  
  uVar3 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  *(undefined2 *)((int)this + 0x78) = 0;
  if ((param_1 == 0) || (*(ushort *)((int)this + 0x5e) < param_1)) {
    uVar3 = 0;
    if (*(int *)((int)this + 0x38) != 0) {
      uVar11 = F_00406b30(*(int *)((int)this + 0x38));
      uVar3 = (uint)uVar11;
      *(undefined4 *)((int)this + 0x38) = 0;
      *(undefined2 *)((int)this + 0x5e) = 0;
    }
  }
  if (param_1 != 0) {
    if (*(int *)((int)this + 0x38) == 0) {
      uVar3 = F_00406bb0(-(uint)((int)((ulonglong)param_1 * 0x34 >> 0x20) != 0) |
                           (uint)((ulonglong)param_1 * 0x34),0,0);
      *(uint *)((int)this + 0x38) = uVar3;
      if (uVar3 == 0) {
        return 0;
      }
    }
    (*(float *)(gen_frame + 0xc)) = REFG(float, 0x1087f04);
    fVar2 = (float10)1;
    uVar3 = 0;
    *(short *)((int)this + 0x5e) = (short)param_1;
    if (3 < (int)param_1) {
      fVar9 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x8)) = (float)fVar9;
      fVar9 = (float10)(*(float *)(gen_frame + 0x8));
      (*(int *)(gen_frame + 0x4)) = (param_1 - 4 >> 2) + 1;
      uVar3 = (*(int *)(gen_frame + 0x4)) * 4;
      (*(int *)(gen_frame + 0x14)) = 0;
      iVar6 = 0x2a300;
      do {
        puVar5 = ((undefined4 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x38) + (*(int *)(gen_frame + 0x14)))));
        (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0xc));
        if (!(fVar9 < fVar2)) {
          (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0x8));
        }
        fVar10 = (float10)(iVar6 + -0x2a300);
        if (iVar6 + -0x2a300 < 0) {
          fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        puVar5[0xc] = (undefined4)gen_fl2bits((float)(fVar10 / (float10)*(*(float * PTR32 *)(gen_frame + 0x18))));
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc)));
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5[8] = 0;
        puVar5[9] = 0;
        puVar5[10] = 0;
        puVar5[0xb] = 0;
        puVar5 = ((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + 0x34 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x38))));
        (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0xc));
        if (!(fVar9 < fVar2)) {
          (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0x8));
        }
        fVar10 = (float10)(iVar6 + -0x15180);
        if (iVar6 + -0x15180 < 0) {
          fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        puVar5[0xc] = (undefined4)gen_fl2bits((float)(fVar10 / (float10)*(*(float * PTR32 *)(gen_frame + 0x18))));
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc)));
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5[8] = 0;
        puVar5[9] = 0;
        puVar5[10] = 0;
        puVar5[0xb] = 0;
        puVar5 = ((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + 0x68 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x38))));
        (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0xc));
        if (!(fVar9 < fVar2)) {
          (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0x8));
        }
        fVar10 = (float10)iVar6;
        if (iVar6 < 0) {
          fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        puVar5[0xc] = (undefined4)gen_fl2bits((float)(fVar10 / (float10)*(*(float * PTR32 *)(gen_frame + 0x18))));
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc)));
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5[8] = 0;
        puVar5[9] = 0;
        puVar5[10] = 0;
        puVar5[0xb] = 0;
        puVar5 = ((undefined4 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x38) + (*(int *)(gen_frame + 0x14)) + 0x9c)));
        (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0xc));
        if (!(fVar9 < fVar2)) {
          (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0x8));
        }
        fVar10 = (float10)(iVar6 + 0x15180);
        if (iVar6 + 0x15180 < 0) {
          fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 0xd0;
        iVar6 = iVar6 + 0x54600;
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
        puVar5[0xc] = (undefined4)gen_fl2bits((float)(fVar10 / (float10)*(*(float * PTR32 *)(gen_frame + 0x18))));
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc)));
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5[8] = 0;
        puVar5[9] = 0;
        puVar5[10] = 0;
        puVar5[0xb] = 0;
        this = (*(undefined * PTR32 *)(gen_frame + 0x10));
      } while ((*(int *)(gen_frame + 0x4)) != 0);
    }
    if (uVar3 < param_1) {
      fVar9 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x8)) = (float)fVar9;
      iVar6 = uVar3 * 0x15180;
      iVar8 = uVar3 * 0x34;
      iVar7 = param_1 - uVar3;
      do {
        puVar5 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x38) + iVar8)));
        pfVar4 = &(*(float *)(gen_frame + 0xc));
        if (!((float10)(*(float *)(gen_frame + 0x8)) < fVar2)) {
          pfVar4 = &(*(float *)(gen_frame + 0x8));
        }
        fVar9 = (float10)iVar6;
        if (iVar6 < 0) {
          fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        fVar1 = *pfVar4;
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[7] = 0;
        uVar3 = 0;
        iVar8 = iVar8 + 0x34;
        iVar6 = iVar6 + 0x15180;
        iVar7 = iVar7 + -1;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc)));
        puVar5[8] = 0;
        puVar5[9] = 0;
        puVar5[10] = 0;
        puVar5[0xb] = 0;
        puVar5[0xc] = (undefined4)gen_fl2bits((float)(fVar9 / (float10)fVar1));
        this = (*(undefined * PTR32 *)(gen_frame + 0x10));
      } while (iVar7 != 0);
    }
  }
  return uVar3;
}

/* ref: FUN_004a8d30 */
uint F_004a8d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a8d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float10 fVar2;
  float * pfVar3;
  uint uVar4;
  float * pfVar5;
  float * pfVar6;
  undefined4 * puVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  ulonglong uVar12;
  
  pfVar3 = (float *)0x0;
  iVar9 = 0;
  *(undefined2 *)((int)this + 0x7a) = 0;
  if ((param_1 == (float *)0x0) || ((float *)(uint)*(ushort *)((int)this + 0x60) < param_1)) {
    pfVar3 = (float *)0x0;
    if (*(int *)((int)this + 0x3c) != 0) {
      uVar12 = F_00406b30(*(int *)((int)this + 0x3c));
      pfVar3 = (float *)uVar12;
      *(undefined4 *)((int)this + 0x3c) = 0;
      *(undefined2 *)((int)this + 0x60) = 0;
    }
  }
  if (param_1 != (float *)0x0) {
    if (*(int *)((int)this + 0x3c) == 0) {
      uVar4 = F_00406bb0(-(uint)((int)(ZEXT48(param_1) * 0x10 >> 0x20) != 0) |
                           (uint)(ZEXT48(param_1) * 0x10),0,0);
      *(uint *)((int)this + 0x3c) = uVar4;
      if (uVar4 == 0) {
        return 0;
      }
    }
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    fVar2 = (float10)1;
    pfVar3 = (float *)0x0;
    *(short *)((int)this + 0x60) = (short)param_1;
    if (3 < (int)param_1) {
      fVar10 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x14)) = (float)fVar10;
      fVar10 = (float10)(*(float *)(gen_frame + 0x14));
      (*(int *)(gen_frame + 0xc)) = ((uint)(param_1 + -1) >> 2) + 1;
      pfVar3 = (float *)((*(int *)(gen_frame + 0xc)) * 4);
      iVar8 = 0x2a300;
      do {
        puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x3c) + iVar9)));
        pfVar6 = &(*(float *)(gen_frame + 0x18));
        if (!(fVar10 < fVar2)) {
          pfVar6 = &(*(float *)(gen_frame + 0x14));
        }
        fVar11 = (float10)(iVar8 + -0x2a300);
        if (iVar8 + -0x2a300 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        puVar7[3] = (undefined4)gen_fl2bits((float)(fVar11 / (float10)*pfVar6));
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7 = ((undefined4 *)GEN_TOP((iVar9 + 0x10 + *(int *)((int)this + 0x3c))));
        pfVar6 = &(*(float *)(gen_frame + 0x18));
        if (!(fVar10 < fVar2)) {
          pfVar6 = &(*(float *)(gen_frame + 0x14));
        }
        fVar11 = (float10)(iVar8 + -0x15180);
        if (iVar8 + -0x15180 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        pfVar5 = &(*(float *)(gen_frame + 0x18));
        puVar7[3] = (undefined4)gen_fl2bits((float)(fVar11 / (float10)*pfVar6));
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7 = ((undefined4 *)GEN_TOP((iVar9 + 0x20 + *(int *)((int)this + 0x3c))));
        if (!(fVar10 < fVar2)) {
          pfVar5 = &(*(float *)(gen_frame + 0x14));
        }
        fVar11 = (float10)iVar8;
        if (iVar8 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        pfVar6 = &(*(float *)(gen_frame + 0x18));
        puVar7[3] = (undefined4)gen_fl2bits((float)(fVar11 / (float10)*pfVar5));
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x3c) + iVar9 + 0x30)));
        if (!(fVar10 < fVar2)) {
          pfVar6 = &(*(float *)(gen_frame + 0x14));
        }
        fVar11 = (float10)(iVar8 + 0x15180);
        if (iVar8 + 0x15180 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        iVar9 = iVar9 + 0x40;
        iVar8 = iVar8 + 0x54600;
        (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + -1;
        puVar7[3] = (undefined4)gen_fl2bits((float)(fVar11 / (float10)*pfVar6));
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
      } while ((*(int *)(gen_frame + 0xc)) != 0);
    }
    if (pfVar3 < param_1) {
      fVar10 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x14)) = (float)fVar10;
      iVar9 = (int)((int)(uintptr_t)pfVar3) * 0x15180;
      iVar8 = (int)((int)(uintptr_t)pfVar3) << 4;
      param_1 = (float *)((int)param_1 - (int)pfVar3);
      do {
        puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x3c) + iVar8)));
        pfVar3 = &(*(float *)(gen_frame + 0x18));
        if (!((float10)(*(float *)(gen_frame + 0x14)) < fVar2)) {
          pfVar3 = &(*(float *)(gen_frame + 0x14));
        }
        fVar10 = (float10)iVar9;
        if (iVar9 < 0) {
          fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        fVar1 = *pfVar3;
        iVar8 = iVar8 + 0x10;
        iVar9 = iVar9 + 0x15180;
        param_1 = (float *)((int)param_1 + -1);
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = (undefined4)gen_fl2bits((float)(fVar10 / (float10)fVar1));
      } while (param_1 != (float *)0x0);
    }
  }
  return (uint)pfVar3;
}

/* ref: FUN_004a8f90 */
uint F_004a8f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a8f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float10 fVar2;
  float * pfVar3;
  uint uVar4;
  float * pfVar5;
  float * pfVar6;
  undefined4 * puVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  ulonglong uVar12;
  
  pfVar3 = (float *)0x0;
  iVar9 = 0;
  *(undefined2 *)((int)this + 0x7c) = 0;
  if ((param_1 == (float *)0x0) || ((float *)(uint)*(ushort *)((int)this + 0x62) < param_1)) {
    pfVar3 = (float *)0x0;
    if (*(int *)((int)this + 0x40) != 0) {
      uVar12 = F_00406b30(*(int *)((int)this + 0x40));
      pfVar3 = (float *)uVar12;
      *(undefined4 *)((int)this + 0x40) = 0;
      *(undefined2 *)((int)this + 0x62) = 0;
    }
  }
  if (param_1 != (float *)0x0) {
    if (*(int *)((int)this + 0x40) == 0) {
      uVar4 = F_00406bb0(-(uint)((int)(ZEXT48(param_1) * 0x10 >> 0x20) != 0) |
                           (uint)(ZEXT48(param_1) * 0x10),0,0);
      *(uint *)((int)this + 0x40) = uVar4;
      if (uVar4 == 0) {
        return 0;
      }
    }
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    fVar2 = (float10)1;
    pfVar3 = (float *)0x0;
    *(short *)((int)this + 0x62) = (short)param_1;
    if (3 < (int)param_1) {
      fVar10 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x14)) = (float)fVar10;
      fVar10 = (float10)(*(float *)(gen_frame + 0x14));
      (*(int *)(gen_frame + 0xc)) = ((uint)(param_1 + -1) >> 2) + 1;
      pfVar3 = (float *)((*(int *)(gen_frame + 0xc)) * 4);
      iVar8 = 0x2a300;
      do {
        puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x40) + iVar9)));
        pfVar6 = &(*(float *)(gen_frame + 0x18));
        if (!(fVar10 < fVar2)) {
          pfVar6 = &(*(float *)(gen_frame + 0x14));
        }
        fVar11 = (float10)(iVar8 + -0x2a300);
        if (iVar8 + -0x2a300 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        puVar7[3] = (undefined4)gen_fl2bits((float)(fVar11 / (float10)*pfVar6));
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7 = ((undefined4 *)GEN_TOP((iVar9 + 0x10 + *(int *)((int)this + 0x40))));
        pfVar6 = &(*(float *)(gen_frame + 0x18));
        if (!(fVar10 < fVar2)) {
          pfVar6 = &(*(float *)(gen_frame + 0x14));
        }
        fVar11 = (float10)(iVar8 + -0x15180);
        if (iVar8 + -0x15180 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        pfVar5 = &(*(float *)(gen_frame + 0x18));
        puVar7[3] = (undefined4)gen_fl2bits((float)(fVar11 / (float10)*pfVar6));
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7 = ((undefined4 *)GEN_TOP((iVar9 + 0x20 + *(int *)((int)this + 0x40))));
        if (!(fVar10 < fVar2)) {
          pfVar5 = &(*(float *)(gen_frame + 0x14));
        }
        fVar11 = (float10)iVar8;
        if (iVar8 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        pfVar6 = &(*(float *)(gen_frame + 0x18));
        puVar7[3] = (undefined4)gen_fl2bits((float)(fVar11 / (float10)*pfVar5));
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x40) + iVar9 + 0x30)));
        if (!(fVar10 < fVar2)) {
          pfVar6 = &(*(float *)(gen_frame + 0x14));
        }
        fVar11 = (float10)(iVar8 + 0x15180);
        if (iVar8 + 0x15180 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        iVar9 = iVar9 + 0x40;
        iVar8 = iVar8 + 0x54600;
        (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + -1;
        puVar7[3] = (undefined4)gen_fl2bits((float)(fVar11 / (float10)*pfVar6));
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
      } while ((*(int *)(gen_frame + 0xc)) != 0);
    }
    if (pfVar3 < param_1) {
      fVar10 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x14)) = (float)fVar10;
      iVar9 = (int)((int)(uintptr_t)pfVar3) * 0x15180;
      iVar8 = (int)((int)(uintptr_t)pfVar3) << 4;
      param_1 = (float *)((int)param_1 - (int)pfVar3);
      do {
        puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x40) + iVar8)));
        pfVar3 = &(*(float *)(gen_frame + 0x18));
        if (!((float10)(*(float *)(gen_frame + 0x14)) < fVar2)) {
          pfVar3 = &(*(float *)(gen_frame + 0x14));
        }
        fVar10 = (float10)iVar9;
        if (iVar9 < 0) {
          fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        fVar1 = *pfVar3;
        iVar8 = iVar8 + 0x10;
        iVar9 = iVar9 + 0x15180;
        param_1 = (float *)((int)param_1 + -1);
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = (undefined4)gen_fl2bits((float)(fVar10 / (float10)fVar1));
      } while (param_1 != (float *)0x0);
    }
  }
  return (uint)pfVar3;
}

/* ref: FUN_004a91f0 */
uint F_004a91f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4a91f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float10 fVar2;
  float * pfVar3;
  uint uVar4;
  float * pfVar5;
  float * pfVar6;
  undefined4 * puVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  ulonglong uVar12;
  
  pfVar3 = (float *)0x0;
  iVar9 = 0;
  *(undefined2 *)((int)this + 0x80) = 0;
  if ((param_1 == (float *)0x0) || ((float *)(uint)*(ushort *)((int)this + 0x66) < param_1)) {
    pfVar3 = (float *)0x0;
    if (*(int *)((int)this + 0x48) != 0) {
      uVar12 = F_00406b30(*(int *)((int)this + 0x48));
      pfVar3 = (float *)uVar12;
      *(undefined4 *)((int)this + 0x48) = 0;
      *(undefined2 *)((int)this + 0x66) = 0;
    }
  }
  if (param_1 != (float *)0x0) {
    if (*(int *)((int)this + 0x48) == 0) {
      uVar4 = F_00406bb0(-(uint)((int)(ZEXT48(param_1) * 0x30 >> 0x20) != 0) |
                           (uint)(ZEXT48(param_1) * 0x30),0,0);
      *(uint *)((int)this + 0x48) = uVar4;
      if (uVar4 == 0) {
        return 0;
      }
    }
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    fVar2 = (float10)1;
    pfVar3 = (float *)0x0;
    *(short *)((int)this + 0x66) = (short)param_1;
    if (3 < (int)param_1) {
      fVar10 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x14)) = (float)fVar10;
      fVar10 = (float10)(*(float *)(gen_frame + 0x14));
      (*(int *)(gen_frame + 0xc)) = ((uint)(param_1 + -1) >> 2) + 1;
      pfVar3 = (float *)((*(int *)(gen_frame + 0xc)) * 4);
      iVar8 = 0x2a300;
      do {
        puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x48) + iVar9)));
        pfVar6 = &(*(float *)(gen_frame + 0x18));
        if (!(fVar10 < fVar2)) {
          pfVar6 = &(*(float *)(gen_frame + 0x14));
        }
        fVar11 = (float10)(iVar8 + -0x2a300);
        if (iVar8 + -0x2a300 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        puVar7[0xb] = (undefined4)gen_fl2bits((float)(fVar11 / (float10)*pfVar6));
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        puVar7[8] = 0;
        puVar7[9] = 0;
        puVar7[10] = 0;
        puVar7 = ((undefined4 *)GEN_TOP((iVar9 + 0x30 + *(int *)((int)this + 0x48))));
        pfVar6 = &(*(float *)(gen_frame + 0x18));
        if (!(fVar10 < fVar2)) {
          pfVar6 = &(*(float *)(gen_frame + 0x14));
        }
        fVar11 = (float10)(iVar8 + -0x15180);
        if (iVar8 + -0x15180 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        pfVar5 = &(*(float *)(gen_frame + 0x18));
        puVar7[0xb] = (undefined4)gen_fl2bits((float)(fVar11 / (float10)*pfVar6));
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        puVar7[8] = 0;
        puVar7[9] = 0;
        puVar7[10] = 0;
        puVar7 = ((undefined4 *)GEN_TOP((iVar9 + 0x60 + *(int *)((int)this + 0x48))));
        if (!(fVar10 < fVar2)) {
          pfVar5 = &(*(float *)(gen_frame + 0x14));
        }
        fVar11 = (float10)iVar8;
        if (iVar8 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        pfVar6 = &(*(float *)(gen_frame + 0x18));
        puVar7[0xb] = (undefined4)gen_fl2bits((float)(fVar11 / (float10)*pfVar5));
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        puVar7[8] = 0;
        puVar7[9] = 0;
        puVar7[10] = 0;
        puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x48) + iVar9 + 0x90)));
        if (!(fVar10 < fVar2)) {
          pfVar6 = &(*(float *)(gen_frame + 0x14));
        }
        fVar11 = (float10)(iVar8 + 0x15180);
        if (iVar8 + 0x15180 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        iVar9 = iVar9 + 0xc0;
        iVar8 = iVar8 + 0x54600;
        (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + -1;
        puVar7[0xb] = (undefined4)gen_fl2bits((float)(fVar11 / (float10)*pfVar6));
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        puVar7[8] = 0;
        puVar7[9] = 0;
        puVar7[10] = 0;
      } while ((*(int *)(gen_frame + 0xc)) != 0);
    }
    if (pfVar3 < param_1) {
      fVar10 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x14)) = (float)fVar10;
      iVar9 = (int)((int)(uintptr_t)pfVar3) * 0x15180;
      iVar8 = (int)((int)(uintptr_t)pfVar3) * 0x30;
      param_1 = (float *)((int)param_1 - (int)pfVar3);
      do {
        puVar7 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x48) + iVar8)));
        pfVar3 = &(*(float *)(gen_frame + 0x18));
        if (!((float10)(*(float *)(gen_frame + 0x14)) < fVar2)) {
          pfVar3 = &(*(float *)(gen_frame + 0x14));
        }
        fVar10 = (float10)iVar9;
        if (iVar9 < 0) {
          fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        fVar1 = *pfVar3;
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        iVar8 = iVar8 + 0x30;
        iVar9 = iVar9 + 0x15180;
        param_1 = (float *)((int)param_1 + -1);
        puVar7[0xb] = (undefined4)gen_fl2bits((float)(fVar10 / (float10)fVar1));
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        puVar7[7] = 0;
        puVar7[8] = 0;
        puVar7[9] = 0;
        puVar7[10] = 0;
      } while (param_1 != (float *)0x0);
    }
  }
  return (uint)pfVar3;
}

/* ref: FUN_004a9520 */
unsigned int F_004a9520(unsigned int gen_a0)
{
  GEN_ENTER(0x4a9520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  float * pfVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  uint local_38;
  float local_34;
  float local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  float local_1c;
  uint local_18;
  float local_14;
  
  fVar3 = REFG(float, 0x1094730);
  fVar15 = (float10)*(double *)&REFG(undefined, 0x1094738);
  fVar16 = (float10)*(double *)&REFG(undefined, 0x1094728);
  uVar12 = (uint)*(ushort *)((int)this + 0x50);
  uVar10 = 0;
  if (*(ushort *)((int)this + 0x50) != 0) {
    fVar1 = *((float *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x30)));
    local_18 = 0;
    local_20 = 0;
    local_2c = 0;
    local_38 = 0;
    uVar13 = local_38;
    local_34 = fVar1;
    if (uVar12 != 0) {
      pfVar14 = ((float *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x30)));
      do {
        fVar17 = (float10)*pfVar14;
        if ((fVar15 <= fVar17) && (uVar13 = uVar10, local_34 = *pfVar14, fVar17 <= fVar16)) break;
        uVar10 = uVar10 + 1;
        pfVar14 = pfVar14 + 0xd;
        uVar13 = local_38;
        local_34 = fVar1;
      } while (uVar10 < uVar12);
    }
    local_38 = uVar13;
    local_24 = 0;
    local_30 = fVar1;
    iVar11 = local_2c;
    if (uVar12 != 0) {
      do {
        iVar11 = (uVar12 - local_24) + -1;
        local_30 = *((float *)GEN_TOP((iVar11 * 0x34 + 0x30 + *(int *)((int)this + 0x1c))));
        fVar17 = (float10)local_30;
        if ((fVar15 <= fVar17) && (fVar17 <= fVar16)) break;
        local_24 = local_24 + 1;
        local_30 = fVar1;
        iVar11 = local_2c;
      } while (local_24 < uVar12);
    }
    local_2c = iVar11;
    uVar13 = 0;
    uVar10 = local_20;
    local_14 = fVar1;
    if (uVar12 != 0) {
      do {
        uVar10 = (local_2c + uVar13) % uVar12;
        local_14 = *((float *)GEN_TOP((uVar10 * 0x34 + 0x30 + *(int *)((int)this + 0x1c))));
        if (((!GEN_ISNAN(REFG(float, 0x1094730)) && !GEN_ISNAN(local_14)) && !(REFG(float, 0x1094730) < local_14)) ||
           ((!GEN_ISNAN((float10)local_14) && !GEN_ISNAN(fVar16)) && !((float10)local_14 < fVar16))) break;
        uVar13 = uVar13 + 1;
        uVar10 = local_20;
        local_14 = fVar1;
      } while (uVar13 < uVar12);
    }
    local_20 = uVar10;
    local_28 = 0;
    local_1c = fVar1;
    uVar10 = local_18;
    if (uVar12 != 0) {
      do {
        uVar10 = ((*(ushort *)((int)this + 0x50) - local_28) + local_38) %
                 (uint)*(ushort *)((int)this + 0x50);
        local_1c = *((float *)GEN_TOP((uVar10 * 0x34 + 0x30 + *(int *)((int)this + 0x1c))));
        if (((!GEN_ISNAN(REFG(float, 0x1094730)) && !GEN_ISNAN(local_1c)) && !(REFG(float, 0x1094730) < local_1c)) ||
           ((!GEN_ISNAN((float10)local_1c) && !GEN_ISNAN(fVar16)) && !((float10)local_1c < fVar16))) break;
        local_28 = local_28 + 1;
        local_1c = fVar1;
        uVar10 = local_18;
      } while (local_28 < uVar12);
    }
    local_18 = uVar10;
    fVar17 = (float10)local_34;
    fVar18 = (float10)local_30;
    if (fVar17 <= fVar18) {
      fVar17 = (float10)(float)(fVar17 + (float10)*(double *)&REFG(double, 0x10946a0));
    }
    fVar19 = (float10)local_14;
    fVar20 = (float10)local_1c;
    if (fVar19 <= fVar20) {
      fVar19 = (float10)(float)(fVar19 + (float10)*(double *)&REFG(double, 0x10946a0));
    }
    uVar10 = 0;
    if (uVar12 != 0) {
      iVar11 = 0;
      do {
        iVar7 = *(int *)((int)this + 0x1c);
        fVar1 = *(float *)(iVar11 + 0x30 + iVar7);
        fVar15 = (float10)fVar1;
        if (((!GEN_ISNAN(fVar3) && !GEN_ISNAN(fVar1)) && !(fVar3 <= fVar1)) || (fVar16 < fVar15)) {
          if (fVar1 < fVar3) {
            fVar15 = (float10)(float)(fVar15 + (float10)*(double *)&REFG(double, 0x10946a0));
          }
          iVar8 = local_38 * 0x34;
          fVar21 = (float10)((float)GEN_TOF(((fVar15 - fVar18) / (fVar17 - fVar18))));
          fVar4 = *(float *)(iVar8 + 4 + iVar7);
          fVar5 = *(float *)(iVar8 + 8 + iVar7);
          iVar9 = local_2c * 0x34;
          fVar1 = *(float *)(iVar9 + 4 + iVar7);
          fVar2 = *(float *)(iVar9 + 8 + iVar7);
          fVar22 = (float10)(float)((float10)1 - fVar21);
          *(float *)(iVar7 + iVar11) =
               ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar22 * (float10)*(float *)(iVar9 + iVar7)))) +
                      (float10)((float)GEN_TOF(((float10)*(float *)(iVar8 + iVar7) * fVar21))))));
          *(float *)(iVar7 + 4 + iVar11) =
               ((float)GEN_TOF(((float10)(float)((float10)fVar1 * fVar22) +
                      (float10)(float)((float10)fVar4 * fVar21))));
          fVar16 = (float10)*(double *)&REFG(undefined, 0x1094728);
          *(float *)(iVar7 + 8 + iVar11) =
               ((float)GEN_TOF(((float10)(float)(fVar22 * (float10)fVar2) +
                      (float10)(float)(fVar21 * (float10)fVar5))));
        }
        if (((float10)*(double *)&REFG(undefined, 0x1094738) < fVar15) && (fVar15 < fVar16)) {
          iVar8 = *(int *)((int)this + 0x1c);
          pfVar14 = (float *)(local_20 * 0x34 + 0xc + iVar8);
          fVar15 = (float10)((float)GEN_TOF(((fVar15 - fVar20) / (fVar19 - fVar20))));
          fVar4 = pfVar14[1];
          fVar5 = pfVar14[2];
          iVar7 = local_18 * 0x34 + 0xc + iVar8;
          fVar1 = *(float *)(iVar7 + 4);
          fVar2 = *(float *)(iVar7 + 8);
          fVar21 = (float10)(float)((float10)1 - fVar15);
          *(float *)(iVar8 + 0xc + iVar11) =
               ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar21 * (float10)*(float *)(local_18 * 0x34 + 0xc + iVar8))))
                      + (float10)(float)((float10)*pfVar14 * fVar15))));
          *(float *)(iVar8 + 0x10 + iVar11) =
               ((float)GEN_TOF(((float10)(float)((float10)fVar1 * fVar21) +
                      (float10)(float)((float10)fVar4 * fVar15))));
          *(float *)(iVar8 + 0x14 + iVar11) =
               ((float)GEN_TOF(((float10)(float)(fVar21 * (float10)fVar2) +
                      (float10)(float)(fVar15 * (float10)fVar5))));
        }
        uVar10 = uVar10 + 1;
        iVar11 = iVar11 + 0x34;
      } while (uVar10 < *(ushort *)((int)this + 0x50));
      fVar15 = (float10)*(double *)&REFG(undefined, 0x1094738);
    }
  }
  uVar12 = (uint)*(ushort *)((int)this + 0x54);
  uVar10 = 0;
  if (*(ushort *)((int)this + 0x54) != 0) {
    fVar1 = *((float *)GEN_TOP((*(int *)((int)this + 0x24) + 0x24)));
    local_24 = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 0.0;
    fVar2 = local_1c;
    if (uVar12 != 0) {
      pfVar14 = ((float *)GEN_TOP((*(int *)((int)this + 0x24) + 0x24)));
      do {
        if ((fVar15 <= (float10)*pfVar14) &&
           (fVar2 = gen_bits2f(uVar10), (float10)*pfVar14 <= fVar16)) break;
        uVar10 = uVar10 + 1;
        pfVar14 = pfVar14 + 10;
        fVar2 = local_1c;
      } while (uVar10 < uVar12);
    }
    local_1c = fVar2;
    local_18 = 0;
    uVar10 = local_20;
    if (uVar12 != 0) {
      do {
        uVar10 = (uVar12 - local_18) + -1;
        fVar17 = (float10)*((float *)GEN_TOP((*(int *)((int)this + 0x24) + 0x24 + uVar10 * 0x28)));
        if ((fVar15 <= fVar17) && (fVar17 <= fVar16)) break;
        local_18 = local_18 + 1;
        uVar10 = local_20;
      } while (local_18 < uVar12);
    }
    local_20 = uVar10;
    local_18 = 0;
    uVar10 = local_28;
    local_14 = fVar1;
    if (uVar12 != 0) {
      do {
        uVar10 = (local_18 + local_20) % uVar12;
        local_14 = *((float *)GEN_TOP((*(int *)((int)this + 0x24) + 0x24 + uVar10 * 0x28)));
        if (((!GEN_ISNAN(fVar3) && !GEN_ISNAN(local_14)) && !(fVar3 < local_14)) ||
           ((!GEN_ISNAN((float10)local_14) && !GEN_ISNAN(fVar16)) && !((float10)local_14 < fVar16))) break;
        local_18 = local_18 + 1;
        uVar10 = local_28;
        local_14 = fVar1;
      } while (local_18 < uVar12);
    }
    local_28 = uVar10;
    local_18 = 0;
    local_30 = fVar1;
    uVar10 = local_24;
    if (uVar12 != 0) {
      do {
        uVar10 = ((*(ushort *)((int)this + 0x54) - local_18) + (int)gen_fl2bits(local_1c)) %
                 (uint)*(ushort *)((int)this + 0x54);
        local_30 = *((float *)GEN_TOP((*(int *)((int)this + 0x24) + 0x24 + uVar10 * 0x28)));
        if (((!GEN_ISNAN(fVar3) && !GEN_ISNAN(local_30)) && !(fVar3 < local_30)) ||
           ((!GEN_ISNAN((float10)local_30) && !GEN_ISNAN(fVar16)) && !((float10)local_30 < fVar16))) break;
        local_18 = local_18 + 1;
        local_30 = fVar1;
        uVar10 = local_24;
      } while (local_18 < uVar12);
    }
    local_24 = uVar10;
    fVar17 = (float10)local_14;
    fVar18 = (float10)local_30;
    if (fVar17 <= fVar18) {
      fVar17 = (float10)(float)(fVar17 + (float10)*(double *)&REFG(double, 0x10946a0));
    }
    local_18 = 0;
    if (uVar12 != 0) {
      local_14 = 0.0;
      do {
        iVar7 = *(int *)((int)this + 0x24);
        iVar11 = iVar7 + (int)gen_fl2bits(local_14);
        fVar20 = (float10)*(float *)(iVar7 + 0x24 + (int)gen_fl2bits(local_14));
        if ((fVar15 < fVar20) && (fVar20 < fVar16)) {
          iVar8 = local_28 * 0x28;
          fVar3 = *(float *)(iVar7 + 0x18 + iVar8);
          fVar1 = *(float *)(iVar7 + 0x1c + iVar8);
          iVar9 = local_24 * 0x28;
          fVar2 = *(float *)(iVar9 + 0x14 + iVar7);
          fVar4 = *(float *)(iVar9 + 0x18 + iVar7);
          fVar5 = *(float *)(iVar9 + 0x1c + iVar7);
          fVar20 = (float10)((float)GEN_TOF(((fVar20 - fVar18) / (fVar17 - fVar18))));
          fVar6 = *(float *)(iVar7 + 0x14 + iVar8);
          fVar19 = (float10)(float)((float10)1 - fVar20);
          *(float *)(iVar11 + 0x10) =
               ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar19 * (float10)*(float *)(iVar9 + 0x10 + iVar7)))) +
                      (float10)((float)GEN_TOF(((float10)*(float *)(iVar7 + 0x10 + iVar8) * fVar20))))));
          *(float *)(iVar11 + 0x14) =
               ((float)GEN_TOF(((float10)(float)((float10)fVar2 * fVar19) +
                      (float10)(float)((float10)fVar6 * fVar20))));
          *(float *)(iVar11 + 0x18) =
               ((float)GEN_TOF(((float10)(float)((float10)fVar4 * fVar19) +
                      (float10)(float)((float10)fVar3 * fVar20))));
          *(float *)(iVar11 + 0x1c) =
               ((float)GEN_TOF(((float10)(float)((float10)fVar5 * fVar19) +
                      (float10)(float)((float10)fVar1 * fVar20))));
          iVar11 = *(int *)((int)this + 0x24);
          *(float *)(iVar11 + 0x20 + (int)gen_fl2bits(local_14)) =
               ((float)GEN_TOF((fVar19 * (float10)*(float *)(iVar11 + 0x20 + iVar9) +
                      (float10)*(float *)(iVar11 + 0x20 + iVar8) * fVar20)));
        }
        local_14 = gen_bits2f((int)gen_fl2bits(local_14) + 0x28);
        local_18 = local_18 + 1;
      } while (local_18 < *(ushort *)((int)this + 0x54));
    }
  }
  return 0;
}

/* ref: FUN_004a9cc0 */
unsigned int F_004a9cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x4a9cc0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xe] = 0;
  in_ecx[0xf] = 0;
  in_ecx[0x10] = 0;
  in_ecx[0x11] = 0;
  in_ecx[0x12] = 0;
  in_ecx[0x13] = 0;
  in_ecx[0x14] = 0;
  in_ecx[0x15] = 0;
  in_ecx[0x16] = 0;
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  in_ecx[0x19] = 0;
  in_ecx[0x1a] = 0;
  return 0;
}

/* ref: FUN_004a9d20 */
uint F_004a9d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4a9d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  uVar1 = F_004bebc0(param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_004a9d70 */
byte F_004a9d70(unsigned int gen_a0)
{
  GEN_ENTER(0x4a9d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x210) = 0;
  return 1;
}

/* ref: FUN_004a9e70 */
uint F_004a9e70(unsigned int gen_a0)
{
  GEN_ENTER(0x4a9e70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined2 *)(gen_frame + 0x25)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = REFG(undefined4, 0x1302ff0);
  (*(undefined4 *)(gen_frame + 0x14)) = 5;
  (*(undefined1 *)(gen_frame + 0x18)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x21)) = 0x101;
  uVar1 = F_00513dc0(param_1,&(*(undefined4 *)(gen_frame + 0x4)),0,0);
  return uVar1;
}

/* ref: FUN_004a9ec0 */
uint F_004a9ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x4a9ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  int local_8;
  
  uVar1 = REFG(float, 0x1087f04);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109464c));
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = uVar1;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = uVar1;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = uVar1;
  *(undefined4 *)((int)this + 0xb0) = 0;
  iVar2 = (int)this + 0xb4;
  local_8 = 1;
  do {
    F_00401500(iVar2,8,2,((code *)REFP(0x4bd6f0)));
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    iVar2 = iVar2 + 0x28;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  iVar2 = (int)this + 0x124;
  local_8 = 1;
  do {
    F_00401500(iVar2,8,2,((code *)REFP(0x4bd910)));
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    iVar2 = iVar2 + 0x28;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  iVar2 = (int)this + 0x174;
  local_8 = 2;
  do {
    F_00401500(iVar2,8,2,((code *)REFP(0x4bd990)));
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    iVar2 = iVar2 + 0x28;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return (uint)this;
}

/* ref: FUN_004a9ff0 */
uint F_004a9ff0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x4a9ff0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  if ((*(uint *)&gen_args[1]) < 0x65) {
    bVar3 = (*(uint *)&gen_args[1]) < 0x15;
  }
  else {
    bVar3 = (*(uint *)&gen_args[1]) - 100 < 0xb;
  }
  uVar2 = -(uint)bVar3 & (*(uint *)&gen_args[1]);
  if (((uVar2 == *(uint *)((*(int *)&gen_args[0]) + 0x80)) || (uVar2 == *(uint *)((*(int *)&gen_args[0]) + 0x8c))) ||
     ((uVar2 == *(uint *)((*(int *)&gen_args[0]) + 0xa0) && (*(int *)((*(int *)&gen_args[0]) + 0xb0) != 0)))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    if (*(int *)((*(int *)&gen_args[0]) + 0xb0) != 0) {
      F_0050c620(*(int *)((*(int *)&gen_args[0]) + 0xb0),0,0);
      *(undefined4 *)((*(int *)&gen_args[0]) + 0xb0) = 0;
    }
    if (uVar2 < 0x65) {
      iVar1 = *(int *)(&REFG(undefined, 0x1093ae8) + uVar2 * 8);
    }
    else {
      iVar1 = *(int *)("bgcommon/nature/sky/texture/sky_016.tex" + uVar2 * 8 + 0xc);
    }
    (*(uint *)&gen_args[1]) = 0;
    if (iVar1 != 0) {
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = REFG(undefined4, 0x1302ff0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 5;
      (*(undefined1 *)(gen_frame + 0x18)) = 0xff;
      (*(undefined4 *)(gen_frame + 0x21)) = 0x101;
      (*(undefined2 *)(gen_frame + 0x25)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(uint *)&gen_args[1]) = F_00513dc0(iVar1,&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      *(uint *)((*(int *)&gen_args[0]) + 0xb0) = (*(uint *)&gen_args[1]);
    }
  }
  *(uint *)((*(int *)&gen_args[0]) + 0xa0) = uVar2;
  *(float *)((*(int *)&gen_args[0]) + 0xa8) = (*(float *)&gen_args[2]);
  if (((bVar3) || (*(int *)((*(int *)&gen_args[0]) + 0xb0) == 0)) ||
     ((!GEN_ISNAN(*(float *)((*(int *)&gen_args[0]) + 0xac)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
      !(*(float *)((*(int *)&gen_args[0]) + 0xac) <= *(float *)&REFG(undefined, 0x1088114)))) {
    *(float *)((*(int *)&gen_args[0]) + 0xac) = (*(float *)&gen_args[3]);
  }
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_004aa100 */
uint F_004aa100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4aa100u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  ((uint *)(gen_frame + 0x30))[2] = (*(uint *)&gen_args[0]);
  ((uint *)(gen_frame + 0x30))[0] = -(uint)((*(uint *)&gen_args[1]) < 0xb) & (*(uint *)&gen_args[1]);
  ((uint *)(gen_frame + 0x30))[1] = -(uint)((*(uint *)&gen_args[2]) < 0xb) & (*(uint *)&gen_args[2]);
  (*(uint *)&gen_args[2]) = 0;
  do {
    uVar2 = ((uint *)(gen_frame + 0x30))[(*(uint *)&gen_args[2])];
    iVar1 = ((uint *)(gen_frame + 0x30))[2] + (*(uint *)&gen_args[2]) * 0x28;
    if (((uVar2 == *(uint *)(((uint *)(gen_frame + 0x30))[2] + 0xb4 + (*(uint *)&gen_args[2]) * 0x28)) ||
        (uVar2 == *(uint *)(iVar1 + 0xbc))) ||
       ((uVar2 == *(uint *)(iVar1 + 0xcc) && (*(int *)(iVar1 + 0xd8) != 0)))) {
      bVar3 = false;
      uVar5 = ((uint *)(gen_frame + 0x30))[2];
    }
    else {
      bVar3 = true;
      if (*(int *)(iVar1 + 0xd8) != 0) {
        F_0050c620(*(int *)(iVar1 + 0xd8),0,0);
        *(undefined4 *)(iVar1 + 0xd8) = 0;
      }
      if ((*(uint *)&gen_args[2]) == 0) {
        iVar4 = *(int *)(&REFG(undefined, 0x1093f30) + ((uint *)(gen_frame + 0x30))[0] * 8);
      }
      else {
        iVar4 = *(int *)(&REFG(undefined, 0x13012e8) + uVar2 * 4);
      }
      uVar5 = 0;
      if (iVar4 != 0) {
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(undefined4 *)(gen_frame + 0xc)) = REFG(undefined4, 0x1302ff0);
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 5;
        (*(undefined1 *)(gen_frame + 0x1c)) = 0xff;
        (*(undefined4 *)(gen_frame + 0x25)) = 0x101;
        (*(undefined2 *)(gen_frame + 0x29)) = 0;
        (*(undefined4 *)(gen_frame + 0x2c)) = 0;
        uVar5 = F_00513dc0(iVar4,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
        *(uint *)(iVar1 + 0xd8) = uVar5;
      }
    }
    *(uint *)(iVar1 + 0xcc) = uVar2;
    if (((bVar3) || (*(int *)(iVar1 + 0xd8) == 0)) ||
       ((!GEN_ISNAN(*(float *)(iVar1 + 0xd4)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
        !(*(float *)(iVar1 + 0xd4) <= *(float *)&REFG(undefined, 0x1088114)))) {
      *(float *)(iVar1 + 0xd4) = (*(float *)&gen_args[3]);
    }
    (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) + 1;
  } while ((*(uint *)&gen_args[2]) < 2);
  return uVar5;
}

/* ref: FUN_004aa230 */
uint F_004aa230(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x4aa230u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  bool bVar1;
  uint uVar2;
  
  uVar2 = -(uint)((*(uint *)&gen_args[1]) < 0xd) & (*(uint *)&gen_args[1]);
  if ((uVar2 == *(uint *)((*(int *)&gen_args[0]) + 0x104)) ||
     ((uVar2 == *(uint *)((*(int *)&gen_args[0]) + 0x114) && (*(int *)((*(int *)&gen_args[0]) + 0x120) != 0)))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
    if (*(int *)((*(int *)&gen_args[0]) + 0x120) != 0) {
      F_0050c620(*(int *)((*(int *)&gen_args[0]) + 0x120),0,0);
      *(undefined4 *)((*(int *)&gen_args[0]) + 0x120) = 0;
    }
    (*(uint *)&gen_args[1]) = 0;
    if (*(int *)(&REFG(undefined, 0x1301480) + uVar2 * 8) != 0) {
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = REFG(undefined4, 0x1302ff0);
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 5;
      (*(undefined1 *)(gen_frame + 0x18)) = 0xff;
      (*(undefined4 *)(gen_frame + 0x21)) = 0x101;
      (*(undefined2 *)(gen_frame + 0x25)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(uint *)&gen_args[1]) = F_00513dc0(*(int *)(&REFG(undefined, 0x1301480) + uVar2 * 8),&(*(undefined4 *)(gen_frame + 0x4)),0,0);
      *(uint *)((*(int *)&gen_args[0]) + 0x120) = (*(uint *)&gen_args[1]);
    }
  }
  *(uint *)((*(int *)&gen_args[0]) + 0x114) = uVar2;
  if (((bVar1) || (*(int *)((*(int *)&gen_args[0]) + 0x120) == 0)) ||
     ((!GEN_ISNAN(*(float *)((*(int *)&gen_args[0]) + 0x11c)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
      !(*(float *)((*(int *)&gen_args[0]) + 0x11c) <= *(float *)&REFG(undefined, 0x1088114)))) {
    *(float *)((*(int *)&gen_args[0]) + 0x11c) = (*(float *)&gen_args[2]);
  }
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_004aa310 */
uint F_004aa310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4aa310u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  
  ((uint *)(gen_frame + 0x4))[0] = (*(uint *)&gen_args[1]);
  ((uint *)(gen_frame + 0x4))[1] = (*(undefined4 *)&gen_args[2]);
  uVar3 = 0;
  puVar4 = (uint *)((*(int *)&gen_args[0]) + 0x148);
  uVar2 = (*(uint *)&gen_args[1]);
  do {
    if ((undefined *)*puVar4 != (undefined *)0x0) {
      uVar2 = F_00982b20((undefined *)*puVar4);
      *puVar4 = 0;
    }
    uVar1 = ((uint *)(gen_frame + 0x4))[uVar3];
    if ((((uVar1 != 0) && (uVar1 != puVar4[-9])) && (uVar1 != puVar4[-7])) &&
       ((uVar1 != puVar4[-3] || (*puVar4 == 0)))) {
      F_004ff310(&(*(uint *)&gen_args[1]),1,0);
      uVar2 = F_009a2040(&(*(uint *)&gen_args[1]),uVar1);
      *puVar4 = uVar2;
    }
    puVar4[-3] = uVar1;
    puVar4[-1] = (uint)gen_fl2bits((*(float *)&gen_args[3]));
    uVar3 = uVar3 + 1;
    puVar4 = puVar4 + 10;
  } while (uVar3 < 2);
  return uVar2;
}

/* ref: FUN_004aa3a0 */
uint F_004aa3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x4aa3a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  
  ((uint *)(gen_frame + 0x0))[0] = param_2;
  ((uint *)(gen_frame + 0x0))[1] = param_3;
  ((uint *)(gen_frame + 0x0))[2] = param_4;
  uVar2 = 0;
  puVar3 = (uint *)(param_1 + 0x198);
  do {
    uVar1 = ((uint *)(gen_frame + 0x0))[uVar2];
    if (((uVar1 != puVar3[-9]) && (uVar1 != puVar3[-7])) &&
       ((uVar1 != puVar3[-3] || (*puVar3 == 0)))) {
      param_4 = 0;
      if (*puVar3 != 0) {
        param_4 = F_0050c620(*puVar3,0,0);
        *puVar3 = 0;
      }
      if (uVar1 != 0) {
        param_4 = F_00513dc0(uVar1,0,0,0);
        *puVar3 = param_4;
      }
    }
    puVar3[-3] = uVar1;
    puVar3[-1] = (uint)gen_fl2bits(param_5);
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 10;
  } while (uVar2 < 3);
  return param_4;
}

/* ref: FUN_004aa430 */
uint F_004aa430(unsigned int gen_a0)
{
  GEN_ENTER(0x4aa430u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x109476c));
  F_0061e3f0(in_ecx + 0x27b);
  in_ecx[0x278] = (*(undefined * PTR32 (*)[1])REFP(0x109468c));
  in_ecx[0x275] = (*(undefined * PTR32 (*)[1])REFP(0x109468c));
  F_00622210(in_ecx + 0x220);
  in_ecx[0xd8] = (*(undefined * PTR32 (*)[1])REFP(0x1094644));
  in_ecx[200] = (*(undefined * PTR32 (*)[1])REFP(0x109462c));
  in_ecx[0x11] = (*(undefined * PTR32 (*)[1])REFP(0x1094634));
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1094684));
  return 0x109468c;
}

/* ref: FUN_004aa490 */
uint F_004aa490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4aa490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x0)) = *param_2;
    (*(undefined4 *)(gen_frame + 0x4)) = param_2[1];
    (*(undefined4 *)(gen_frame + 0x8)) = param_2[2];
    uVar1 = F_006a5060(*(undefined * PTR32 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x0)));
    if (uVar1 != 0) {
      *param_1 = *(undefined4 *)(uVar1 + 0x204);
      param_1[1] = *(undefined4 *)(uVar1 + 0x208);
      uVar1 = *(uint *)(uVar1 + 0x20c);
      param_1[2] = uVar1;
      return uVar1;
    }
  }
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)((int)this + 0x5d0);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this + 0x5d4);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this + 0x5d8);
  *param_1 = *(undefined4 *)((int)this + 0x5d0);
  param_1[1] = (*(undefined4 *)(gen_frame + 0x4));
  param_1[2] = (*(undefined4 *)(gen_frame + 0x8));
  return (uint)param_1;
}

/* ref: FUN_004aa540 */
unsigned int F_004aa540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4aa540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    (*(float *)(gen_frame + 0x4)) = *param_2;
    (*(float *)(gen_frame + 0x8)) = param_2[1];
    (*(float *)(gen_frame + 0xc)) = param_2[2];
    uVar3 = F_006a5000(*(undefined * PTR32 *)((int)this + 4),&(*(float *)(gen_frame + 0x4)));
    if (uVar3 != 0) {
      fVar1 = ((float)GEN_TOF(((float10)*(float *)(uVar3 + 0x1dc) * (float10)*(float *)(uVar3 + 0x1dc))));
      (*(float *)(gen_frame + 0x14)) = fVar1;
      fVar2 = ((float)GEN_TOF(((float10)*(float *)(uVar3 + 0x1e0) * (float10)*(float *)(uVar3 + 0x1e0))));
      (*(float *)(gen_frame + 0x18)) = fVar2;
      (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(((float10)*(float *)(uVar3 + 0x1e4) * (float10)*(float *)(uVar3 + 0x1e4))));
      (*(float *)(gen_frame + 0x2c)) = *(float *)(uVar3 + 0x1e8);
      fVar4 = (float10)*(float *)(uVar3 + 0x1e8);
      (*(float *)(gen_frame + 0x4)) = param_1[1];
      (*(float *)(gen_frame + 0x8)) = param_1[2];
      (*(float *)(gen_frame + 0x2c)) = (float)((float10)1 - fVar4);
      fVar5 = (float10)(float)((float10)1 - fVar4);
      (*(float *)(gen_frame + 0x10)) = (float)(fVar5 * (float10)*param_1);
      (*(float *)(gen_frame + 0x14)) = (float)((float10)param_1[1] * fVar5);
      (*(float *)(gen_frame + 0x18)) = (float)(fVar5 * (float10)param_1[2]);
      fVar1 = ((float)GEN_TOF(((float10)(float)(fVar5 * (float10)*param_1) +
                     (float10)(float)(fVar4 * (float10)fVar1))));
      (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x14)) + (float10)(float)((float10)fVar2 * fVar4))));
      (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x18)) + (float10)(float)((float10)(*(float *)(gen_frame + 0x1c)) * fVar4))));
      (*(float *)(gen_frame + 0x14)) = fVar1;
      *param_1 = fVar1;
      (*(float *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x4));
      param_1[1] = (*(float *)(gen_frame + 0x4));
      (*(float *)(gen_frame + 0x1c)) = (*(float *)(gen_frame + 0x8));
      param_1[2] = (*(float *)(gen_frame + 0x8));
    }
  }
  return 0;
}

/* ref: FUN_004aa670 */
float10 F_004aa670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4aa670u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  float * pfVar2;
  int iVar3;
  
  if (*(undefined * PTR32 *)((*(int *)&gen_args[0]) + 4) != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(*(uint *)&gen_args[1]);
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((*(uint *)&gen_args[1]) + 4);
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((*(uint *)&gen_args[1]) + 8);
    uVar1 = F_006a5000(*(undefined * PTR32 *)((*(int *)&gen_args[0]) + 4),&(*(undefined4 *)(gen_frame + 0x0)));
    iVar3 = uVar1 + 0x14;
    if (uVar1 != 0) goto LAB_004aa6b3;
  }
  iVar3 = (*(int *)&gen_args[0]) + 0x44;
LAB_004aa6b3: ;
  pfVar2 = (float *)((*(int *)&gen_args[0]) + 0x800);
  (*(uint *)&gen_args[1]) = REFG(float, 0x1087f04);
  if ((float10)*(float *)((*(int *)&gen_args[0]) + 0x800) < (float10)1) {
    pfVar2 = (float *)&(*(uint *)&gen_args[1]);
  }
  return (float10)((float)GEN_TOF(((float10)*(float *)(iVar3 + 0x180) / (float10)*pfVar2)));
}

/* ref: FUN_004aa7d0 */
unsigned int F_004aa7d0(void)
{
  GEN_ENTER(0x4aa7d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_004aa7e0 */
uint F_004aa7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4aa7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  (*(undefined4 *)(gen_frame + 0xc)) = *param_2;
  (*(undefined4 *)(gen_frame + 0x10)) = param_2[1];
  (*(undefined4 *)(gen_frame + 0x14)) = param_2[2];
  (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
  F_00413ab0(param_1,&(*(undefined4 *)(gen_frame + 0xc)));
  return (uint)param_1;
}

/* ref: FUN_004aa830 */
uint F_004aa830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4aa830u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  (*(undefined4 *)(gen_frame + 0xc)) = *param_2;
  (*(undefined4 *)(gen_frame + 0x10)) = param_2[1];
  (*(float *)(gen_frame + 0x18)) = (float)((float10)REFG(double, 0x1088108) + ((float10)GEN_TOD(gen_bits2f(param_2[3]))) * (float10)REFG(double, 0x1088108))
  ;
  (*(undefined4 *)(gen_frame + 0x14)) = param_2[2];
  F_00413ab0(param_1,&(*(undefined4 *)(gen_frame + 0xc)));
  return (uint)param_1;
}

/* ref: FUN_004aa880 */
uint F_004aa880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4aa880u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  (*(undefined4 *)(gen_frame + 0xc)) = *param_2;
  (*(undefined4 *)(gen_frame + 0x10)) = param_2[1];
  (*(float *)(gen_frame + 0x18)) = (float)((float10)REFG(double, 0x1088108) + ((float10)GEN_TOD(gen_bits2f(param_2[3]))) * (float10)REFG(double, 0x1088108))
  ;
  (*(undefined4 *)(gen_frame + 0x14)) = param_2[2];
  F_00413ab0(param_1,&(*(undefined4 *)(gen_frame + 0xc)));
  return (uint)param_1;
}

/* ref: FUN_004aa9d0 */
uint F_004aa9d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4aa9d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float param_1 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float fVar5;
  float * pfVar6;
  undefined2 * puVar7;
  float fVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  ulonglong uVar12;
  
  fVar5 = 0.0;
  *(undefined2 *)((int)this + 0x2a) = 0;
  if ((param_1 == 0.0) || ((uint)*(ushort *)((int)this + 0x1c) < (uint)gen_fl2bits(param_1))) {
    fVar5 = 0.0;
    if (*(int *)this != 0) {
      uVar12 = F_00406b30(*(int *)this);
      fVar5 = gen_bits2f((uint)uVar12);
      *(undefined4 *)this = 0;
      *(undefined2 *)((int)this + 0x1c) = 0;
    }
  }
  if (param_1 != 0.0) {
    if (*(int *)this == 0) {
      fVar5 = gen_bits2f(F_00406bb0(-(uint)((int)((ulonglong)(uint)gen_fl2bits(param_1) * 8 >>
                                                   0x20) != 0) |
                                      (uint)((ulonglong)(uint)gen_fl2bits(param_1) * 8),0,0));
      *(float *)this = fVar5;
      if (fVar5 == 0.0) {
        return 0;
      }
    }
    (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
    fVar4 = (float10)1;
    fVar8 = 0.0;
    *(short *)((int)this + 0x1c) = (short)(uint)gen_fl2bits(param_1);
    if (3 < (int)gen_fl2bits(param_1)) {
      (*(float *)(gen_frame + 0x0)) = param_1;
      fVar10 = (float10)(int)gen_fl2bits(param_1);
      if ((int)gen_fl2bits(param_1) < 0) {
        fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x0)) = (float)fVar10;
      fVar10 = (float10)(*(float *)(gen_frame + 0x0));
      iVar9 = 0x2a300;
      do {
        iVar3 = *(int *)this;
        iVar1 = (int)gen_fl2bits(fVar8) * 8;
        (*(float * PTR32 *)(gen_frame + 0x8)) = &(*(float *)(gen_frame + 0x4));
        if (!(fVar10 < fVar4)) {
          (*(float * PTR32 *)(gen_frame + 0x8)) = &(*(float *)(gen_frame + 0x0));
        }
        fVar11 = (float10)(iVar9 + -0x2a300);
        if (iVar9 + -0x2a300 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        *(float *)(iVar3 + 4 + iVar1) = (float)(fVar11 / (float10)*(*(float * PTR32 *)(gen_frame + 0x8)));
        *(undefined2 *)(iVar3 + iVar1) = 0;
        *(undefined1 *)(iVar3 + 2 + iVar1) = 1;
        puVar7 = (undefined2 *)(iVar1 + 8 + *(int *)this);
        (*(float * PTR32 *)(gen_frame + 0x8)) = &(*(float *)(gen_frame + 0x4));
        if (!(fVar10 < fVar4)) {
          (*(float * PTR32 *)(gen_frame + 0x8)) = &(*(float *)(gen_frame + 0x0));
        }
        fVar11 = (float10)(iVar9 + -0x15180);
        if (iVar9 + -0x15180 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        *(float *)(puVar7 + 2) = (float)(fVar11 / (float10)*(*(float * PTR32 *)(gen_frame + 0x8)));
        *puVar7 = 0;
        *(undefined1 *)(puVar7 + 1) = 1;
        puVar7 = (undefined2 *)(iVar1 + 0x10 + *(int *)this);
        (*(float * PTR32 *)(gen_frame + 0x8)) = &(*(float *)(gen_frame + 0x4));
        if (!(fVar10 < fVar4)) {
          (*(float * PTR32 *)(gen_frame + 0x8)) = &(*(float *)(gen_frame + 0x0));
        }
        fVar11 = (float10)iVar9;
        if (iVar9 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        *(float *)(puVar7 + 2) = (float)(fVar11 / (float10)*(*(float * PTR32 *)(gen_frame + 0x8)));
        *puVar7 = 0;
        *(undefined1 *)(puVar7 + 1) = 1;
        puVar7 = (undefined2 *)(*(int *)this + iVar1 + 0x18);
        pfVar6 = &(*(float *)(gen_frame + 0x4));
        if (!(fVar10 < fVar4)) {
          pfVar6 = &(*(float *)(gen_frame + 0x0));
        }
        fVar11 = (float10)(iVar9 + 0x15180);
        if (iVar9 + 0x15180 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        fVar8 = gen_bits2f((int)gen_fl2bits(fVar8) + 4);
        iVar9 = iVar9 + 0x54600;
        *(float *)(puVar7 + 2) = (float)(fVar11 / (float10)*pfVar6);
        *puVar7 = 0;
        fVar5 = gen_bits2f((int)gen_fl2bits(param_1) - 3);
        *(undefined1 *)(puVar7 + 1) = 1;
      } while ((uint)gen_fl2bits(fVar8) < (uint)gen_fl2bits(fVar5));
    }
    if ((uint)gen_fl2bits(fVar8) < (uint)gen_fl2bits(param_1)) {
      fVar10 = (float10)(int)gen_fl2bits(param_1);
      if ((int)gen_fl2bits(param_1) < 0) {
        fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x0)) = (float)fVar10;
      iVar9 = (int)gen_fl2bits(fVar8) * 0x15180;
      do {
        puVar7 = (undefined2 *)(*(int *)this + (int)gen_fl2bits(fVar8) * 8);
        (*(float * PTR32 *)(gen_frame + 0x8)) = &(*(float *)(gen_frame + 0x4));
        if (!((float10)(*(float *)(gen_frame + 0x0)) < fVar4)) {
          (*(float * PTR32 *)(gen_frame + 0x8)) = &(*(float *)(gen_frame + 0x0));
        }
        fVar10 = (float10)iVar9;
        if (iVar9 < 0) {
          fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        fVar2 = *(*(float * PTR32 *)(gen_frame + 0x8));
        fVar5 = 0.0;
        fVar8 = gen_bits2f((int)gen_fl2bits(fVar8) + 1);
        iVar9 = iVar9 + 0x15180;
        *puVar7 = 0;
        *(undefined1 *)(puVar7 + 1) = 1;
        *(float *)(puVar7 + 2) = (float)(fVar10 / (float10)fVar2);
      } while ((uint)gen_fl2bits(fVar8) < (uint)gen_fl2bits(param_1));
    }
  }
  return (uint)gen_fl2bits(fVar5);
}

/* ref: FUN_004aac10 */
uint F_004aac10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4aac10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * param_1 = (float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  float * PTR32 * PTR32 * PTR32 * PTR32 * pppppfVar2;
  int iVar3;
  float10 fVar4;
  float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * ppppppfVar5;
  undefined4 * puVar6;
  int iVar7;
  float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * ppppppfVar8;
  float10 fVar9;
  float10 fVar10;
  ulonglong uVar11;
  
  (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8)) = (float * PTR32 * PTR32 * PTR32 * PTR32 *)0x0;
  ppppppfVar8 = (float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)0x0;
  *(undefined2 *)((int)this + 0x2c) = 0;
  if ((param_1 == (float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)0x0) ||
     ((float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(uint)*(ushort *)((int)this + 0x1e) < param_1)) {
    (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8)) = (float * PTR32 * PTR32 * PTR32 * PTR32 *)0x0;
    if (*(int *)((int)this + 4) != 0) {
      uVar11 = F_00406b30(*(int *)((int)this + 4));
      (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8)) = (float * PTR32 * PTR32 * PTR32 * PTR32 *)uVar11;
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined2 *)((int)this + 0x1e) = 0;
    }
  }
  if (param_1 != (float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)0x0) {
    if (*(int *)((int)this + 4) == 0) {
      (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8)) = (float * PTR32 * PTR32 * PTR32 * PTR32 *)
                F_00406bb0(-(uint)((int)(ZEXT48(param_1) * 8 >> 0x20) != 0) |
                             (uint)(ZEXT48(param_1) * 8),0,0);
      *(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)((int)this + 4) = (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8));
      if ((float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8)) == (float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)0x0) {
        return 0;
      }
    }
    (*(float * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4)) = ((float * PTR32 * PTR32 * PTR32 *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04))));
    fVar4 = (float10)1;
    *(short *)((int)this + 0x1e) = (short)param_1;
    if (3 < (int)param_1) {
      (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) = (float * PTR32 * PTR32 * PTR32 * PTR32 *)param_1;
      fVar9 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((float * PTR32 * PTR32 * PTR32 * PTR32 *)(uintptr_t)gen_fl2bits((float)((float)fVar9)));
      fVar9 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)))));
      iVar7 = 0x2a300;
      do {
        iVar3 = *(int *)((int)this + 4);
        iVar1 = (int)((int)(uintptr_t)ppppppfVar8) * 8;
        (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8)) = &(*(float * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4));
        if (!(fVar9 < fVar4)) {
          (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8)) = (float * PTR32 * PTR32 * PTR32 * PTR32 *)&(*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
        }
        fVar10 = (float10)(iVar7 + -0x2a300);
        if (iVar7 + -0x2a300 < 0) {
          fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        ppppppfVar5 = (float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)&(*(float * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4));
        *(float *)(iVar3 + 4 + iVar1) = (float)(fVar10 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*(*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8))))));
        *(float * PTR32 * PTR32 * PTR32 * PTR32 *)(iVar3 + iVar1) = (*(float * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4));
        puVar6 = ((undefined4 *)GEN_TOP((iVar1 + 8 + *(int *)((int)this + 4))));
        if (!(fVar9 < fVar4)) {
          ppppppfVar5 = &(*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
        }
        (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8)) = (float * PTR32 * PTR32 * PTR32 * PTR32 *)ppppppfVar5;
        fVar10 = (float10)(iVar7 + -0x15180);
        if (iVar7 + -0x15180 < 0) {
          fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8)) = &(*(float * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4));
        puVar6[1] = (undefined4)gen_fl2bits((float)(fVar10 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppppppfVar5)))));
        *puVar6 = (*(float * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4));
        puVar6 = ((undefined4 *)GEN_TOP((iVar1 + 0x10 + *(int *)((int)this + 4))));
        if (!(fVar9 < fVar4)) {
          (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8)) = (float * PTR32 * PTR32 * PTR32 * PTR32 *)&(*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
        }
        fVar10 = (float10)iVar7;
        if (iVar7 < 0) {
          fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        ppppppfVar5 = (float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)&(*(float * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4));
        puVar6[1] = (undefined4)gen_fl2bits((float)(fVar10 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*(*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8)))))));
        *puVar6 = (*(float * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4));
        puVar6 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar1 + 0x18)));
        if (!(fVar9 < fVar4)) {
          ppppppfVar5 = &(*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
        }
        fVar10 = (float10)(iVar7 + 0x15180);
        if (iVar7 + 0x15180 < 0) {
          fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        ppppppfVar8 = ppppppfVar8 + 1;
        (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8)) = (float * PTR32 * PTR32 * PTR32 * PTR32 *)((int)param_1 + -3);
        iVar7 = iVar7 + 0x54600;
        puVar6[1] = (undefined4)gen_fl2bits((float)(fVar10 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppppppfVar5)))));
        *puVar6 = (*(float * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4));
      } while (ppppppfVar8 < (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8)));
    }
    if (ppppppfVar8 < param_1) {
      fVar9 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((float * PTR32 * PTR32 * PTR32 * PTR32 *)(uintptr_t)gen_fl2bits((float)((float)fVar9)));
      iVar7 = (int)((int)(uintptr_t)ppppppfVar8) * 0x15180;
      do {
        puVar6 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + (int)((int)(uintptr_t)ppppppfVar8) * 8)));
        (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8)) = &(*(float * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4));
        if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))))) < fVar4)) {
          (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8)) = (float * PTR32 * PTR32 * PTR32 * PTR32 *)&(*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
        }
        fVar9 = (float10)iVar7;
        if (iVar7 < 0) {
          fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        pppppfVar2 = (float * PTR32 * PTR32 * PTR32 * PTR32 *)*(*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8));
        ppppppfVar8 = (float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)((int)ppppppfVar8 + 1);
        iVar7 = iVar7 + 0x15180;
        *puVar6 = (*(float * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4));
        puVar6[1] = (undefined4)gen_fl2bits((float)(fVar9 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pppppfVar2)))));
      } while (ppppppfVar8 < param_1);
    }
  }
  return (uint)(*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8));
}

/* ref: FUN_004aae30 */
uint F_004aae30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4aae30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * param_1 = (float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  float * PTR32 * PTR32 * PTR32 * PTR32 * pppppfVar2;
  int iVar3;
  float10 fVar4;
  float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * ppppppfVar5;
  undefined4 * puVar6;
  int iVar7;
  float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * ppppppfVar8;
  float10 fVar9;
  float10 fVar10;
  ulonglong uVar11;
  
  (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8)) = (float * PTR32 * PTR32 * PTR32 * PTR32 *)0x0;
  ppppppfVar8 = (float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)0x0;
  *(undefined2 *)((int)this + 0x2e) = 0;
  if ((param_1 == (float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)0x0) ||
     ((float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(uint)*(ushort *)((int)this + 0x20) < param_1)) {
    (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8)) = (float * PTR32 * PTR32 * PTR32 * PTR32 *)0x0;
    if (*(int *)((int)this + 8) != 0) {
      uVar11 = F_00406b30(*(int *)((int)this + 8));
      (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8)) = (float * PTR32 * PTR32 * PTR32 * PTR32 *)uVar11;
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined2 *)((int)this + 0x20) = 0;
    }
  }
  if (param_1 != (float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)0x0) {
    if (*(int *)((int)this + 8) == 0) {
      (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8)) = (float * PTR32 * PTR32 * PTR32 * PTR32 *)
                F_00406bb0(-(uint)((int)(ZEXT48(param_1) * 8 >> 0x20) != 0) |
                             (uint)(ZEXT48(param_1) * 8),0,0);
      *(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)((int)this + 8) = (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8));
      if ((float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8)) == (float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)0x0) {
        return 0;
      }
    }
    (*(float * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4)) = ((float * PTR32 * PTR32 * PTR32 *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04))));
    fVar4 = (float10)1;
    *(short *)((int)this + 0x20) = (short)param_1;
    if (3 < (int)param_1) {
      (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) = (float * PTR32 * PTR32 * PTR32 * PTR32 *)param_1;
      fVar9 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((float * PTR32 * PTR32 * PTR32 * PTR32 *)(uintptr_t)gen_fl2bits((float)((float)fVar9)));
      fVar9 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)))));
      iVar7 = 0x2a300;
      do {
        iVar3 = *(int *)((int)this + 8);
        iVar1 = (int)((int)(uintptr_t)ppppppfVar8) * 8;
        (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8)) = &(*(float * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4));
        if (!(fVar9 < fVar4)) {
          (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8)) = (float * PTR32 * PTR32 * PTR32 * PTR32 *)&(*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
        }
        fVar10 = (float10)(iVar7 + -0x2a300);
        if (iVar7 + -0x2a300 < 0) {
          fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        ppppppfVar5 = (float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)&(*(float * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4));
        *(float *)(iVar3 + 4 + iVar1) = (float)(fVar10 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*(*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8))))));
        *(undefined4 *)(iVar3 + iVar1) = 0;
        puVar6 = ((undefined4 *)GEN_TOP((iVar1 + 8 + *(int *)((int)this + 8))));
        if (!(fVar9 < fVar4)) {
          ppppppfVar5 = &(*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
        }
        (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8)) = (float * PTR32 * PTR32 * PTR32 * PTR32 *)ppppppfVar5;
        fVar10 = (float10)(iVar7 + -0x15180);
        if (iVar7 + -0x15180 < 0) {
          fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8)) = &(*(float * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4));
        puVar6[1] = (undefined4)gen_fl2bits((float)(fVar10 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppppppfVar5)))));
        *puVar6 = 0;
        puVar6 = ((undefined4 *)GEN_TOP((iVar1 + 0x10 + *(int *)((int)this + 8))));
        if (!(fVar9 < fVar4)) {
          (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8)) = (float * PTR32 * PTR32 * PTR32 * PTR32 *)&(*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
        }
        fVar10 = (float10)iVar7;
        if (iVar7 < 0) {
          fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        ppppppfVar5 = (float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)&(*(float * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4));
        puVar6[1] = (undefined4)gen_fl2bits((float)(fVar10 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*(*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8)))))));
        *puVar6 = 0;
        puVar6 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + iVar1 + 0x18)));
        if (!(fVar9 < fVar4)) {
          ppppppfVar5 = &(*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
        }
        fVar10 = (float10)(iVar7 + 0x15180);
        if (iVar7 + 0x15180 < 0) {
          fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        ppppppfVar8 = ppppppfVar8 + 1;
        (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8)) = (float * PTR32 * PTR32 * PTR32 * PTR32 *)((int)param_1 + -3);
        iVar7 = iVar7 + 0x54600;
        puVar6[1] = (undefined4)gen_fl2bits((float)(fVar10 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppppppfVar5)))));
        *puVar6 = 0;
      } while (ppppppfVar8 < (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8)));
    }
    if (ppppppfVar8 < param_1) {
      fVar9 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((float * PTR32 * PTR32 * PTR32 * PTR32 *)(uintptr_t)gen_fl2bits((float)((float)fVar9)));
      iVar7 = (int)((int)(uintptr_t)ppppppfVar8) * 0x15180;
      do {
        puVar6 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + (int)((int)(uintptr_t)ppppppfVar8) * 8)));
        (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8)) = &(*(float * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x4));
        if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))))) < fVar4)) {
          (*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8)) = (float * PTR32 * PTR32 * PTR32 * PTR32 *)&(*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
        }
        fVar9 = (float10)iVar7;
        if (iVar7 < 0) {
          fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        pppppfVar2 = (float * PTR32 * PTR32 * PTR32 * PTR32 *)*(*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8));
        ppppppfVar8 = (float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)((int)ppppppfVar8 + 1);
        iVar7 = iVar7 + 0x15180;
        *puVar6 = 0;
        puVar6[1] = (undefined4)gen_fl2bits((float)(fVar9 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pppppfVar2)))));
      } while (ppppppfVar8 < param_1);
    }
  }
  return (uint)(*(float * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x8));
}

/* ref: FUN_004ab050 */
uint F_004ab050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ab050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  int iVar2;
  float10 fVar3;
  float * pfVar4;
  uint uVar5;
  float * pfVar6;
  float * pfVar7;
  undefined4 * puVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  ulonglong uVar13;
  
  pfVar4 = (float *)0x0;
  iVar10 = 0;
  *(undefined2 *)((int)this + 0x30) = 0;
  if ((param_1 == (float *)0x0) || ((float *)(uint)*(ushort *)((int)this + 0x22) < param_1)) {
    pfVar4 = (float *)0x0;
    if (*(int *)((int)this + 0xc) != 0) {
      uVar13 = F_00406b30(*(int *)((int)this + 0xc));
      pfVar4 = (float *)uVar13;
      *(undefined4 *)((int)this + 0xc) = 0;
      *(undefined2 *)((int)this + 0x22) = 0;
    }
  }
  if (param_1 != (float *)0x0) {
    if (*(int *)((int)this + 0xc) == 0) {
      uVar5 = F_00406bb0(-(uint)((int)(ZEXT48(param_1) * 0xc >> 0x20) != 0) |
                           (uint)(ZEXT48(param_1) * 0xc),0,0);
      *(uint *)((int)this + 0xc) = uVar5;
      if (uVar5 == 0) {
        return 0;
      }
    }
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    fVar3 = (float10)1;
    pfVar4 = (float *)0x0;
    *(short *)((int)this + 0x22) = (short)param_1;
    if (3 < (int)param_1) {
      fVar11 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x14)) = (float)fVar11;
      fVar11 = (float10)(*(float *)(gen_frame + 0x14));
      (*(int *)(gen_frame + 0xc)) = ((uint)(param_1 + -1) >> 2) + 1;
      pfVar4 = (float *)((*(int *)(gen_frame + 0xc)) * 4);
      iVar9 = 0x2a300;
      do {
        iVar2 = *(int *)((int)this + 0xc);
        pfVar7 = &(*(float *)(gen_frame + 0x18));
        if (!(fVar11 < fVar3)) {
          pfVar7 = &(*(float *)(gen_frame + 0x14));
        }
        fVar12 = (float10)(iVar9 + -0x2a300);
        if (iVar9 + -0x2a300 < 0) {
          fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        *(float *)(iVar2 + 8 + iVar10) = (float)(fVar12 / (float10)*pfVar7);
        *(undefined4 *)(iVar2 + iVar10) = 0;
        *(undefined4 *)(iVar2 + 4 + iVar10) = 0;
        puVar8 = ((undefined4 *)GEN_TOP((iVar10 + 0xc + *(int *)((int)this + 0xc))));
        pfVar7 = &(*(float *)(gen_frame + 0x18));
        if (!(fVar11 < fVar3)) {
          pfVar7 = &(*(float *)(gen_frame + 0x14));
        }
        fVar12 = (float10)(iVar9 + -0x15180);
        if (iVar9 + -0x15180 < 0) {
          fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        pfVar6 = &(*(float *)(gen_frame + 0x18));
        puVar8[2] = (undefined4)gen_fl2bits((float)(fVar12 / (float10)*pfVar7));
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8 = ((undefined4 *)GEN_TOP((iVar10 + 0x18 + *(int *)((int)this + 0xc))));
        if (!(fVar11 < fVar3)) {
          pfVar6 = &(*(float *)(gen_frame + 0x14));
        }
        fVar12 = (float10)iVar9;
        if (iVar9 < 0) {
          fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        pfVar7 = &(*(float *)(gen_frame + 0x18));
        puVar8[2] = (undefined4)gen_fl2bits((float)(fVar12 / (float10)*pfVar6));
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + iVar10 + 0x24)));
        if (!(fVar11 < fVar3)) {
          pfVar7 = &(*(float *)(gen_frame + 0x14));
        }
        fVar12 = (float10)(iVar9 + 0x15180);
        if (iVar9 + 0x15180 < 0) {
          fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        iVar10 = iVar10 + 0x30;
        iVar9 = iVar9 + 0x54600;
        (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + -1;
        puVar8[2] = (undefined4)gen_fl2bits((float)(fVar12 / (float10)*pfVar7));
        *puVar8 = 0;
        puVar8[1] = 0;
      } while ((*(int *)(gen_frame + 0xc)) != 0);
    }
    if (pfVar4 < param_1) {
      fVar11 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x14)) = (float)fVar11;
      iVar9 = (int)((int)(uintptr_t)pfVar4) * 0x15180;
      iVar10 = (int)((int)(uintptr_t)pfVar4) * 0xc;
      param_1 = (float *)((int)param_1 - (int)pfVar4);
      do {
        iVar2 = *(int *)((int)this + 0xc);
        pfVar4 = &(*(float *)(gen_frame + 0x18));
        if (!((float10)(*(float *)(gen_frame + 0x14)) < fVar3)) {
          pfVar4 = &(*(float *)(gen_frame + 0x14));
        }
        fVar11 = (float10)iVar9;
        if (iVar9 < 0) {
          fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        fVar1 = *pfVar4;
        *(undefined4 *)(iVar2 + iVar10) = 0;
        *(undefined4 *)(iVar2 + 4 + iVar10) = 0;
        iVar10 = iVar10 + 0xc;
        iVar9 = iVar9 + 0x15180;
        param_1 = (float *)((int)param_1 + -1);
        *(float *)(iVar2 + -4 + iVar10) = (float)(fVar11 / (float10)fVar1);
      } while (param_1 != (float *)0x0);
    }
  }
  return (uint)pfVar4;
}

/* ref: FUN_004ab2a0 */
byte F_004ab2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ab2a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  byte bVar2;
  byte * pbVar3;
  byte * pbVar4;
  byte * pbVar5;
  float10 fVar6;
  float10 fVar7;
  
  pbVar3 = ((byte *)GEN_TOP((*(int *)(param_1 + 4) + param_1)));
  bVar1 = pbVar3[1];
  fVar6 = (float10)*((float *)GEN_TOP((*(int *)(param_1 + 4) + 4 + param_1)));
  bVar2 = pbVar3[2];
  fVar7 = (float10)*(double *)&REFG(undefined, 0x1088100);
  pbVar4 = ((byte *)GEN_TOP((*(int *)(param_1 + 0x18) + param_1)));
  pbVar5 = ((byte *)GEN_TOP((*(int *)(param_1 + 0x14) + param_1)));
  *(float *)param_2 = ((float)GEN_TOF(((fVar6 * (float10)*pbVar3) / fVar7)));
  *(float *)(param_2 + 4) = ((float)GEN_TOF((((float10)bVar1 * fVar6) / fVar7)));
  *(float *)(param_2 + 8) = ((float)GEN_TOF((((float10)bVar2 * fVar6) / fVar7)));
  bVar1 = pbVar4[1];
  fVar6 = (float10)*(float *)(pbVar4 + 4);
  bVar2 = pbVar4[2];
  *(float *)(param_2 + 0xc) = ((float)GEN_TOF(((fVar6 * (float10)*pbVar4) / fVar7)));
  *(float *)(param_2 + 0x10) = ((float)GEN_TOF((((float10)bVar1 * fVar6) / fVar7)));
  *(float *)(param_2 + 0x14) = ((float)GEN_TOF((((float10)bVar2 * fVar6) / fVar7)));
  bVar1 = pbVar5[1];
  fVar6 = (float10)*(float *)(pbVar5 + 4);
  bVar2 = pbVar5[2];
  *(float *)(param_2 + 0x18) = ((float)GEN_TOF(((fVar6 * (float10)*pbVar5) / fVar7)));
  *(float *)(param_2 + 0x1c) = ((float)GEN_TOF((((float10)bVar1 * fVar6) / fVar7)));
  *(float *)(param_2 + 0x20) = ((float)GEN_TOF((((float10)bVar2 * fVar6) / fVar7)));
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_1 + 0x10);
  return 1;
}

/* ref: FUN_004ab3d0 */
byte F_004ab3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ab3d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  byte bVar2;
  byte * pbVar3;
  byte * pbVar4;
  byte * pbVar5;
  float10 fVar6;
  float10 fVar7;
  
  pbVar3 = ((byte *)GEN_TOP((*(int *)(param_1 + 4) + param_1)));
  bVar1 = pbVar3[1];
  fVar6 = (float10)*((float *)GEN_TOP((*(int *)(param_1 + 4) + 4 + param_1)));
  bVar2 = pbVar3[2];
  fVar7 = (float10)*(double *)&REFG(undefined, 0x1088100);
  pbVar4 = ((byte *)GEN_TOP((*(int *)(param_1 + 8) + param_1)));
  pbVar5 = ((byte *)GEN_TOP((*(int *)(param_1 + 0xc) + param_1)));
  *(float *)(param_2 + 0x10) = ((float)GEN_TOF(((fVar6 * (float10)*pbVar3) / fVar7)));
  *(float *)(param_2 + 0x14) = ((float)GEN_TOF((((float10)bVar1 * fVar6) / fVar7)));
  *(float *)(param_2 + 0x18) = ((float)GEN_TOF((((float10)bVar2 * fVar6) / fVar7)));
  bVar1 = pbVar4[1];
  fVar6 = (float10)*(float *)(pbVar4 + 4);
  bVar2 = pbVar4[2];
  *(float *)(param_2 + 0x1c) = ((float)GEN_TOF(((fVar6 * (float10)*pbVar4) / fVar7)));
  *(float *)(param_2 + 0x20) = ((float)GEN_TOF((((float10)bVar1 * fVar6) / fVar7)));
  *(float *)(param_2 + 0x24) = ((float)GEN_TOF((((float10)bVar2 * fVar6) / fVar7)));
  bVar1 = pbVar5[1];
  fVar6 = (float10)*(float *)(pbVar5 + 4);
  bVar2 = pbVar5[2];
  *(float *)(param_2 + 0x28) = ((float)GEN_TOF(((fVar6 * (float10)*pbVar5) / fVar7)));
  *(float *)(param_2 + 0x2c) = ((float)GEN_TOF((((float10)bVar1 * fVar6) / fVar7)));
  *(float *)(param_2 + 0x30) = ((float)GEN_TOF((((float10)bVar2 * fVar6) / fVar7)));
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0x1c);
  return 1;
}

/* ref: FUN_004ab510 */
byte F_004ab510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ab510u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte * pbVar5;
  float10 fVar6;
  float10 fVar7;
  
  iVar4 = *(int *)(param_1 + 0x14);
  *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 4);
  pbVar5 = (byte *)(iVar4 + param_1);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x10);
  bVar1 = pbVar5[1];
  fVar6 = (float10)*(float *)(pbVar5 + 4);
  bVar2 = pbVar5[2];
  fVar7 = (float10)*(double *)&REFG(undefined, 0x1088100);
  bVar3 = pbVar5[3];
  *(float *)(param_2 + 0x10) = ((float)GEN_TOF(((fVar6 * (float10)*pbVar5) / fVar7)));
  *(float *)(param_2 + 0x14) = ((float)GEN_TOF((((float10)bVar1 * fVar6) / fVar7)));
  *(float *)(param_2 + 0x18) = ((float)GEN_TOF((((float10)bVar2 * fVar6) / fVar7)));
  *(float *)(param_2 + 0x1c) = (float)((float10)bVar3 / fVar7);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x18);
  return 1;
}

/* ref: FUN_004ab5c0 */
byte F_004ab5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ab5c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  float10 fVar5;
  
  iVar4 = *(int *)(param_1 + 4) + param_1;
  bVar1 = *(byte *)(iVar4 + 1);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1088100);
  bVar2 = *(byte *)(iVar4 + 2);
  bVar3 = *(byte *)(iVar4 + 3);
  *param_2 = ((float)GEN_TOF(((float10)*((byte *)GEN_TOP((*(int *)(param_1 + 4) + param_1))) / fVar5)));
  param_2[1] = (float)((float10)bVar1 / fVar5);
  param_2[2] = (float)((float10)bVar2 / fVar5);
  param_2[3] = (float)((float10)bVar3 / fVar5);
  param_2[4] = *(float *)(param_1 + 8);
  param_2[5] = *(float *)(param_1 + 0xc);
  param_2[6] = *(float *)(param_1 + 0x10);
  param_2[7] = *(float *)(param_1 + 0x14);
  param_2[8] = *(float *)(param_1 + 0x18);
  param_2[9] = *(float *)(param_1 + 0x1c);
  return 1;
}

/* ref: FUN_004ab660 */
byte F_004ab660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ab660u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  iVar3 = *(int *)(param_1 + 8);
  bVar1 = *(byte *)(iVar3 + 1 + param_1);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1088100);
  bVar2 = *(byte *)(iVar3 + 2 + param_1);
  iVar4 = *(int *)(param_1 + 0xc);
  *param_2 = ((float)GEN_TOF(((float10)*(byte *)(iVar3 + param_1) / fVar5)));
  param_2[1] = (float)((float10)bVar1 / fVar5);
  param_2[2] = (float)((float10)bVar2 / fVar5);
  bVar1 = *(byte *)(iVar4 + 1 + param_1);
  bVar2 = *(byte *)(iVar4 + 2 + param_1);
  param_2[3] = ((float)GEN_TOF(((float10)*(byte *)(iVar4 + param_1) / fVar5)));
  param_2[4] = (float)((float10)bVar1 / fVar5);
  param_2[5] = (float)((float10)bVar2 / fVar5);
  param_2[6] = *(float *)(param_1 + 0x10);
  param_2[7] = *(float *)(param_1 + 0x14);
  return 1;
}

/* ref: FUN_004ab710 */
byte F_004ab710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ab710u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  byte bVar2;
  byte * pbVar3;
  byte * pbVar4;
  float10 fVar5;
  float10 fVar6;
  
  pbVar3 = ((byte *)GEN_TOP((*(int *)(param_1 + 0x14) + param_1)));
  bVar1 = pbVar3[1];
  fVar5 = (float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x14) + 4 + param_1)));
  bVar2 = pbVar3[2];
  fVar6 = (float10)*(double *)&REFG(undefined, 0x1088100);
  pbVar4 = ((byte *)GEN_TOP((*(int *)(param_1 + 0x18) + param_1)));
  *(float *)param_2 = ((float)GEN_TOF(((fVar5 * (float10)*pbVar3) / fVar6)));
  *(float *)(param_2 + 4) = ((float)GEN_TOF((((float10)bVar1 * fVar5) / fVar6)));
  *(float *)(param_2 + 8) = ((float)GEN_TOF((((float10)bVar2 * fVar5) / fVar6)));
  bVar1 = pbVar4[1];
  fVar5 = (float10)*(float *)(pbVar4 + 4);
  bVar2 = pbVar4[2];
  *(float *)(param_2 + 0xc) = ((float)GEN_TOF(((fVar5 * (float10)*pbVar4) / fVar6)));
  *(float *)(param_2 + 0x10) = ((float)GEN_TOF((((float10)bVar1 * fVar5) / fVar6)));
  *(float *)(param_2 + 0x14) = ((float)GEN_TOF((((float10)bVar2 * fVar5) / fVar6)));
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 8);
  return 1;
}

/* ref: FUN_004ab7f0 */
byte F_004ab7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ab7f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float fVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte * pbVar6;
  float10 fVar7;
  
  iVar5 = *(int *)(param_1 + 0x20);
  *param_2 = *(undefined4 *)(param_1 + 4);
  pbVar6 = (byte *)(iVar5 + param_1);
  param_2[1] = *(undefined4 *)(param_1 + 8);
  param_2[2] = *(undefined4 *)(param_1 + 0xc);
  param_2[3] = *(undefined4 *)(param_1 + 0x10);
  param_2[4] = *(undefined4 *)(param_1 + 0x14);
  bVar2 = pbVar6[1];
  fVar7 = (float10)*(double *)&REFG(undefined, 0x1088100);
  bVar3 = pbVar6[2];
  fVar1 = *(float *)(pbVar6 + 4);
  bVar4 = pbVar6[3];
  param_2[5] = (undefined4)gen_fl2bits((float)((float10)*pbVar6 / fVar7));
  param_2[6] = (undefined4)gen_fl2bits((float)((float10)bVar2 / fVar7));
  param_2[7] = (undefined4)gen_fl2bits((float)((float10)bVar3 / fVar7));
  param_2[8] = (undefined4)gen_fl2bits(((float)GEN_TOF((((float10)bVar4 * (float10)fVar1) / fVar7))));
  param_2[9] = *(undefined4 *)(param_1 + 0x18);
  param_2[10] = *(undefined4 *)(param_1 + 0x1c);
  param_2[0xb] = *(undefined4 *)(param_1 + 0x24);
  return 1;
}

/* ref: FUN_004ab8a0 */
byte F_004ab8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ab8a0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float10 fVar1;
  
  *param_2 = *(undefined4 *)(param_1 + 4);
  param_2[1] = 0;
  fVar1 = F_00c49680((float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 0xc) + (float10)REFG(double, 0x1088130)))))
  ;
  param_2[2] = (undefined4)gen_fl2bits((float)fVar1);
  return 1;
}

/* ref: FUN_004ab8e0 */
byte F_004ab8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ab8e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  byte bVar2;
  int iVar3;
  float10 fVar4;
  
  iVar3 = *(int *)(param_1 + 0x14);
  *param_2 = *(undefined4 *)(param_1 + 4);
  param_2[1] = *(undefined4 *)(param_1 + 8);
  param_2[2] = *(undefined4 *)(param_1 + 0xc);
  param_2[3] = *(undefined4 *)(param_1 + 0x10);
  bVar1 = *(byte *)(iVar3 + 1 + param_1);
  fVar4 = (float10)*(double *)&REFG(undefined, 0x1088100);
  bVar2 = *(byte *)(iVar3 + 2 + param_1);
  param_2[4] = (undefined4)gen_fl2bits(((float)GEN_TOF(((float10)*(byte *)(iVar3 + param_1) / fVar4))));
  param_2[5] = (undefined4)gen_fl2bits((float)((float10)bVar1 / fVar4));
  param_2[6] = (undefined4)gen_fl2bits((float)((float10)bVar2 / fVar4));
  param_2[7] = *(undefined4 *)(param_1 + 0x18);
  param_2[8] = *(undefined4 *)(param_1 + 0x1c);
  param_2[9] = *(undefined4 *)(param_1 + 0x20);
  param_2[10] = *(undefined4 *)(param_1 + 0x24);
  return 1;
}

/* ref: FUN_004ab970 */
byte F_004ab970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ab970u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  byte bVar1;
  byte bVar2;
  byte * pbVar3;
  float10 fVar4;
  float10 fVar5;
  
  pbVar3 = ((byte *)GEN_TOP((*(int *)(param_1 + 4) + param_1)));
  bVar1 = pbVar3[1];
  fVar4 = (float10)*((float *)GEN_TOP((*(int *)(param_1 + 4) + 4 + param_1)));
  bVar2 = pbVar3[2];
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1088100);
  *param_2 = ((float)GEN_TOF(((fVar4 * (float10)*pbVar3) / fVar5)));
  param_2[1] = ((float)GEN_TOF((((float10)bVar1 * fVar4) / fVar5)));
  param_2[2] = ((float)GEN_TOF((((float10)bVar2 * fVar4) / fVar5)));
  return 1;
}

/* ref: FUN_004ab9e0 */
byte F_004ab9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ab9e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  byte bVar2;
  byte * pbVar3;
  byte * pbVar4;
  float10 fVar5;
  float10 fVar6;
  
  pbVar3 = ((byte *)GEN_TOP((*(int *)(param_1 + 4) + param_1)));
  pbVar4 = ((byte *)GEN_TOP((*(int *)(param_1 + 8) + param_1)));
  bVar1 = pbVar3[1];
  fVar5 = (float10)*((float *)GEN_TOP((*(int *)(param_1 + 4) + 4 + param_1)));
  bVar2 = pbVar3[2];
  fVar6 = (float10)*(double *)&REFG(undefined, 0x1088100);
  *(float *)param_2 = ((float)GEN_TOF(((fVar5 * (float10)*pbVar3) / fVar6)));
  *(float *)(param_2 + 4) = ((float)GEN_TOF((((float10)bVar1 * fVar5) / fVar6)));
  *(float *)(param_2 + 8) = ((float)GEN_TOF((((float10)bVar2 * fVar5) / fVar6)));
  bVar1 = pbVar4[1];
  fVar5 = (float10)*(float *)(pbVar4 + 4);
  bVar2 = pbVar4[2];
  *(float *)(param_2 + 0xc) = ((float)GEN_TOF(((fVar5 * (float10)*pbVar4) / fVar6)));
  *(float *)(param_2 + 0x10) = ((float)GEN_TOF((((float10)bVar1 * fVar5) / fVar6)));
  *(float *)(param_2 + 0x14) = ((float)GEN_TOF((((float10)bVar2 * fVar5) / fVar6)));
  return 1;
}

/* ref: FUN_004abab0 */
byte F_004abab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4abab0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte * pbVar4;
  float10 fVar5;
  float10 fVar6;
  
  pbVar4 = ((byte *)GEN_TOP((*(int *)(param_1 + 4) + param_1)));
  bVar1 = pbVar4[1];
  fVar5 = (float10)*((float *)GEN_TOP((*(int *)(param_1 + 4) + 4 + param_1)));
  bVar2 = pbVar4[2];
  fVar6 = (float10)*(double *)&REFG(undefined, 0x1088100);
  bVar3 = pbVar4[3];
  *param_2 = ((float)GEN_TOF(((fVar5 * (float10)*pbVar4) / fVar6)));
  param_2[1] = ((float)GEN_TOF((((float10)bVar1 * fVar5) / fVar6)));
  param_2[2] = ((float)GEN_TOF((((float10)bVar2 * fVar5) / fVar6)));
  param_2[3] = (float)((float10)bVar3 / fVar6);
  return 1;
}

/* ref: FUN_004abb40 */
byte F_004abb40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4abb40u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint * puVar2;
  uint * puVar3;
  int iVar4;
  bool bVar5;
  
  bVar5 = param_3 == 1;
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = (undefined *)0x0;
  F_00c495ef(&(*(undefined * PTR32 *)(gen_frame + 0x24)),param_2,"wb");
  if ((*(undefined * PTR32 *)(gen_frame + 0x24)) == (undefined *)0x0) {
    return 0;
  }
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)REFG(undefined * PTR32, 0x1301318);
  (*(undefined2 *)(gen_frame + 0x8)) = 1;
  (*(undefined1 *)(gen_frame + 0xa)) = (char)param_3;
  (*(undefined1 *)(gen_frame + 0xb)) = 0;
  if (bVar5) {
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 0)) = 0x100;
    (*(uint *)(gen_frame + 0x28)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 2)),0x100);
    (*(undefined2 *)(gen_frame + 0x8)) = 0x100;
  }
  F_00c4922b(&(*(undefined4 *)(gen_frame + 0x4)),8,1,(*(undefined * PTR32 *)(gen_frame + 0x24)));
  puVar3 = (uint *)(param_1 + 0x108);
  iVar4 = 9;
  do {
    (*(uint * PTR32 *)(gen_frame + 0x20)) = (uint *)*puVar3;
    if (bVar5) {
      (*(uint * PTR32 *)(gen_frame + 0x20)) = ((uint *)GEN_TOP((((uint)(*(uint * PTR32 *)(gen_frame + 0x20)) & 0xff0000 | (uint)((int)(uintptr_t)(*(uint * PTR32 *)(gen_frame + 0x20))) >> 0x10) >> 8 |
                         ((int)((int)(uintptr_t)(*(uint * PTR32 *)(gen_frame + 0x20))) << 0x10 | (uint)(*(uint * PTR32 *)(gen_frame + 0x20)) & 0xff00) << 8)));
    }
    F_00c4922b(&(*(uint * PTR32 *)(gen_frame + 0x20)),4,1,(*(undefined * PTR32 *)(gen_frame + 0x24)));
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar2 = (uint *)(param_1 + 0xc);
  iVar4 = 0x20;
  puVar3 = puVar2;
  do {
    uVar1 = *puVar3;
    (*(uint * PTR32 *)(gen_frame + 0x20)) = (uint *)uVar1;
    if (bVar5) {
      (*(undefined1 *)((char *)&(*(uint * PTR32 *)(gen_frame + 0x20)) + 3)) = (undefined1)(uVar1 >> 0x18);
      (*(undefined1 *)((char *)&(*(uint * PTR32 *)(gen_frame + 0x20)) + 2)) = (undefined1)(uVar1 >> 0x10);
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 0)) = (*(undefined1 *)((char *)&(*(uint * PTR32 *)(gen_frame + 0x20)) + 3));
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 1)) = (*(undefined1 *)((char *)&(*(uint * PTR32 *)(gen_frame + 0x20)) + 2));
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 0)) = CONCAT11((*(undefined1 *)((char *)&(*(uint * PTR32 *)(gen_frame + 0x20)) + 2)),(*(undefined1 *)((char *)&(*(uint * PTR32 *)(gen_frame + 0x20)) + 3)));
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 2)) = (undefined1)(uVar1 >> 8);
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 3)) = (char)uVar1;
      (*(uint *)(gen_frame + 0x28)) = CONCAT13((char)uVar1,CONCAT12((*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 2)),(undefined2)(*(uint *)(gen_frame + 0x28))));
      (*(uint * PTR32 *)(gen_frame + 0x20)) = (uint *)(*(uint *)(gen_frame + 0x28));
    }
    F_00c4922b(&(*(uint * PTR32 *)(gen_frame + 0x20)),4,1,(*(undefined * PTR32 *)(gen_frame + 0x24)));
    puVar3 = puVar3 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  (*(uint * PTR32 *)(gen_frame + 0x20)) = puVar2;
  (*(int *)(gen_frame + 0xc)) = 0x20;
  do {
    (*(uint *)(gen_frame + 0x10)) = 0;
    (*(uint * PTR32 *)(gen_frame + 0x20)) = puVar2;
    if (*puVar2 != 0) {
      (*(int *)(gen_frame + 0x18)) = 0;
      do {
        puVar2 = (uint *)((*(uint * PTR32 *)(gen_frame + 0x20))[-1] + (*(int *)(gen_frame + 0x18)));
        (*(int *)(gen_frame + 0x14)) = 3;
        puVar3 = puVar2;
        do {
          iVar4 = 9;
          do {
            (*(uint *)(gen_frame + 0x28)) = *puVar3;
            if (bVar5) {
              (*(uint *)(gen_frame + 0x28)) = ((*(uint *)(gen_frame + 0x28)) & 0xff0000 | (*(uint *)(gen_frame + 0x28)) >> 0x10) >> 8 |
                        ((*(uint *)(gen_frame + 0x28)) << 0x10 | (*(uint *)(gen_frame + 0x28)) & 0xff00) << 8;
            }
            F_00c4922b(&(*(uint *)(gen_frame + 0x28)),4,1,(*(undefined * PTR32 *)(gen_frame + 0x24)));
            puVar3 = puVar3 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + -1;
        } while ((*(int *)(gen_frame + 0x14)) != 0);
        (*(uint *)(gen_frame + 0x1c)) = puVar2[0x1b];
        if (bVar5) {
          (*(uint *)(gen_frame + 0x1c)) = ((*(uint *)(gen_frame + 0x1c)) & 0xff0000 | (*(uint *)(gen_frame + 0x1c)) >> 0x10) >> 8 |
                     ((*(uint *)(gen_frame + 0x1c)) << 0x10 | (*(uint *)(gen_frame + 0x1c)) & 0xff00) << 8;
        }
        F_00c4922b(&(*(uint *)(gen_frame + 0x1c)),4,1,(*(undefined * PTR32 *)(gen_frame + 0x24)));
        (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 0x70;
        (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
      } while ((*(uint *)(gen_frame + 0x10)) < *(*(uint * PTR32 *)(gen_frame + 0x20)));
    }
    puVar2 = (*(uint * PTR32 *)(gen_frame + 0x20)) + 2;
    (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + -1;
    (*(uint * PTR32 *)(gen_frame + 0x20)) = puVar2;
  } while ((*(int *)(gen_frame + 0xc)) != 0);
  F_00c49312((*(undefined * PTR32 *)(gen_frame + 0x24)));
  return 1;
}

/* ref: FUN_004abdc0 */
uint F_004abdc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4abdc0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int * in_edx = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  if (*param_3 < *in_eax) {
    in_eax = param_3;
  }
  if (*in_eax <= *in_edx) {
    in_eax = in_edx;
  }
  return (uint)in_eax;
}

/* ref: FUN_004abde0 */
uint F_004abde0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x4abde0u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float10 fVar3;
  double dVar4;
  float fVar5;
  float * pfVar6;
  float * pfVar7;
  uint uVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  (*(float *)(gen_frame + 0x20)) = in_ecx[0x47];
  (*(float *)(gen_frame + 0x28)) = in_ecx[0x29];
  fVar9 = (float10)in_ecx[0x29];
  in_ecx[0xc] = (*(float *)(gen_frame + 0x20));
  (*(float *)(gen_frame + 0x14)) = in_ecx[0x48];
  fVar3 = (float10)1;
  in_ecx[0xd] = (*(float *)(gen_frame + 0x14));
  in_ecx[0xe] = in_ecx[0x49];
  (*(float *)(gen_frame + 0x1c)) = in_ecx[0x4b];
  fVar10 = (float10)*(double *)&REFG(undefined, 0x1094780);
  in_ecx[1] = (*(float *)(gen_frame + 0x1c));
  (*(float *)(gen_frame + 0x10)) = in_ecx[0x4c];
  in_ecx[2] = (*(float *)(gen_frame + 0x10));
  (*(float *)(gen_frame + 0x18)) = in_ecx[0x4e];
  in_ecx[5] = (*(float *)(gen_frame + 0x18));
  (*(float *)(gen_frame + 0xc)) = in_ecx[0x4f];
  in_ecx[6] = (*(float *)(gen_frame + 0xc));
  in_ecx[0x1f] = 0.0;
  fVar5 = REFG(float, 0x1094778);
  (*(float *)(gen_frame + 0x24)) = REFG(float, 0x1094778);
  pfVar7 = &(*(float *)(gen_frame + 0x24));
  in_ecx[0x18] = ((float)GEN_TOF(((fVar3 - fVar9 * fVar9) / fVar10)));
  in_ecx[0x19] = (float)(fVar9 * fVar9 + fVar3);
  in_ecx[0x1a] = (float)(fVar9 + fVar9);
  in_ecx[0x1c] = in_ecx[0x2b];
  in_ecx[0x1d] = in_ecx[0x2a];
  in_ecx[0x1e] = in_ecx[0x2c];
  (*(float *)(gen_frame + 0x28)) = in_ecx[0x28];
  fVar10 = (float10)in_ecx[0x28];
  fVar1 = ((float)GEN_TOF(((float10)in_ecx[0x4a] * (fVar10 * (float10)in_ecx[0x70]))));
  (*(float *)(gen_frame + 0x28)) = fVar1;
  *in_ecx = fVar1;
  (*(float *)(gen_frame + 0x28)) = in_ecx[0x27];
  fVar9 = (float10)in_ecx[0x27];
  fVar2 = ((float)GEN_TOF(((float10)in_ecx[0x4d] * (fVar9 * (float10)in_ecx[0x73]))));
  (*(float *)(gen_frame + 0x28)) = fVar2;
  in_ecx[4] = fVar2;
  dVar4 = REFG(double, 0x1094438);
  (*(float *)(gen_frame + 0x28)) = (float)((float10)fVar2 + (float10)fVar1);
  if (!((double)(float)((float10)fVar2 + (float10)fVar1) < REFG(double, 0x1094438))) {
    pfVar7 = &(*(float *)(gen_frame + 0x28));
  }
  pfVar6 = &(*(float *)(gen_frame + 0x18));
  in_ecx[8] = (float)(fVar3 / (float10)*pfVar7);
  (*(float *)(gen_frame + 0x24)) = in_ecx[0x26];
  fVar11 = (float10)in_ecx[0x26];
  in_ecx[0xc] = ((float)GEN_TOF(((fVar11 * (float10)(*(float *)(gen_frame + 0x20))) * (float10)in_ecx[0x2d])));
  (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF((((float10)in_ecx[0x71] * fVar10) * (float10)(*(float *)(gen_frame + 0x1c)))));
  in_ecx[1] = (*(float *)(gen_frame + 0x1c));
  fVar1 = ((float)GEN_TOF((((float10)in_ecx[0x74] * fVar9) * (float10)(*(float *)(gen_frame + 0x18)))));
  (*(float *)(gen_frame + 0x18)) = fVar1;
  (*(float *)(gen_frame + 0x18)) = fVar5;
  in_ecx[5] = fVar1;
  (*(float *)(gen_frame + 0x28)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x1c)));
  if (!((double)(float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x1c))) < dVar4)) {
    pfVar6 = &(*(float *)(gen_frame + 0x28));
  }
  pfVar7 = &(*(float *)(gen_frame + 0xc));
  in_ecx[9] = (float)(fVar3 / (float10)*pfVar6);
  in_ecx[0xd] = ((float)GEN_TOF(((fVar11 * (float10)(*(float *)(gen_frame + 0x14))) * (float10)in_ecx[0x2e])));
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x10)) * ((float10)in_ecx[0x72] * fVar10))));
  in_ecx[2] = (*(float *)(gen_frame + 0x10));
  fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xc)) * ((float10)in_ecx[0x75] * fVar9))));
  (*(float *)(gen_frame + 0xc)) = fVar1;
  (*(float *)(gen_frame + 0xc)) = fVar5;
  in_ecx[6] = fVar1;
  (*(float *)(gen_frame + 0x28)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x10)));
  if (!((double)(float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x10))) < dVar4)) {
    pfVar7 = &(*(float *)(gen_frame + 0x28));
  }
  in_ecx[10] = (float)(fVar3 / (float10)*pfVar7);
  in_ecx[0xe] = ((float)GEN_TOF(((fVar11 * (float10)in_ecx[0x49]) * (float10)in_ecx[0x2f])));
  uVar8 = F_004a4ce0(in_ecx,in_xmm2,in_xmm3,in_xmm7);
  in_ecx[0x10] = in_ecx[0x30];
  in_ecx[0x11] = in_ecx[0x31];
  in_ecx[0x12] = in_ecx[0x32];
  return uVar8;
}

/* ref: FUN_004ac2b0 */
uint F_004ac2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ac2b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint * puVar2;
  
  ((uint *)(gen_frame + 0x4))[1] = 0xc;
  ((uint *)(gen_frame + 0x4))[0] = 1;
  if ((*(int *)&gen_args[1]) < 0xc) {
    puVar2 = (uint *)&(*(int *)&gen_args[1]);
    if ((*(int *)&gen_args[1]) < 2) {
      puVar2 = ((uint *)(gen_frame + 0x4));
    }
  }
  else {
    puVar2 = ((uint *)(gen_frame + 0x4)) + 1;
  }
  uVar1 = *puVar2;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x178))) = uVar1;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x150))) = 1;
  return uVar1;
}

/* ref: FUN_004ac300 */
uint F_004ac300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ac300u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  uint * puVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x178)));
  if (iVar1 < 0xc) {
    (*(uint *)(gen_frame + 0x8)) = (&REFG(undefined4, 0x1092bfc))[iVar1] - *(int *)(&REFG(undefined, 0x1092bf8) + iVar1 * 4);
  }
  else {
    (*(uint *)(gen_frame + 0x8)) = 0x1f;
  }
  (*(uint *)(gen_frame + 0x4)) = 1;
  puVar3 = (uint *)&(*(int *)&gen_args[1]);
  if ((int)(*(uint *)(gen_frame + 0x8)) <= (*(int *)&gen_args[1])) {
    puVar3 = &(*(uint *)(gen_frame + 0x8));
  }
  if ((int)*puVar3 < 2) {
    puVar3 = &(*(uint *)(gen_frame + 0x4));
  }
  uVar2 = *puVar3;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x17c))) = uVar2;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x150))) = 1;
  return uVar2;
}

/* ref: FUN_004ac360 */
uint F_004ac360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ac360u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint * puVar2;
  
  ((uint *)(gen_frame + 0x4))[1] = 0x17;
  ((uint *)(gen_frame + 0x4))[0] = 0;
  if ((*(int *)&gen_args[1]) < 0x17) {
    puVar2 = (uint *)&(*(int *)&gen_args[1]);
    if ((*(int *)&gen_args[1]) < 1) {
      puVar2 = ((uint *)(gen_frame + 0x4));
    }
  }
  else {
    puVar2 = ((uint *)(gen_frame + 0x4)) + 1;
  }
  uVar1 = *puVar2;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x180))) = uVar1;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x150))) = 1;
  return uVar1;
}

/* ref: FUN_004ac3b0 */
uint F_004ac3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ac3b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint * puVar2;
  
  ((uint *)(gen_frame + 0x4))[1] = 0x3b;
  ((uint *)(gen_frame + 0x4))[0] = 0;
  if ((*(int *)&gen_args[1]) < 0x3b) {
    puVar2 = (uint *)&(*(int *)&gen_args[1]);
    if ((*(int *)&gen_args[1]) < 1) {
      puVar2 = ((uint *)(gen_frame + 0x4));
    }
  }
  else {
    puVar2 = ((uint *)(gen_frame + 0x4)) + 1;
  }
  uVar1 = *puVar2;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x184))) = uVar1;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x150))) = 1;
  return uVar1;
}

/* ref: FUN_004ac400 */
uint F_004ac400(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4ac400u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float * pfVar2;
  
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x10947a0);
  (*(float *)(gen_frame + 0x4)) = 0.0;
  pfVar2 = &(*(float *)&gen_args[1]);
  if (!((double)(*(float *)&gen_args[1]) < *(double *)&REFG(undefined, 0x1094798))) {
    pfVar2 = &(*(float *)(gen_frame + 0x8));
  }
  if (!(0.0 < *pfVar2)) {
    pfVar2 = &(*(float *)(gen_frame + 0x4));
  }
  fVar1 = *pfVar2;
  *(undefined1 *)((*(int *)&gen_args[0]) + 0x150) = 1;
  *(float *)((*(int *)&gen_args[0]) + 0x188) = fVar1;
  return (uint)pfVar2;
}

/* ref: FUN_004ac460 */
uint F_004ac460(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4ac460u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x10916ec);
  (*(float *)(gen_frame + 0x4)) = 0.0;
  pfVar1 = &(*(float *)&gen_args[1]);
  if (!((double)(*(float *)&gen_args[1]) < *(double *)&REFG(undefined, 0x1088118))) {
    pfVar1 = &(*(float *)(gen_frame + 0x8));
  }
  if (!(0.0 < *pfVar1)) {
    pfVar1 = &(*(float *)(gen_frame + 0x4));
  }
  *(float *)((*(int *)&gen_args[0]) + 0x98) = *pfVar1;
  return (uint)pfVar1;
}

/* ref: FUN_004ac4b0 */
uint F_004ac4b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4ac4b0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x10916ec);
  (*(float *)(gen_frame + 0x4)) = 0.0;
  pfVar1 = &(*(float *)&gen_args[1]);
  if (!((double)(*(float *)&gen_args[1]) < *(double *)&REFG(undefined, 0x1088118))) {
    pfVar1 = &(*(float *)(gen_frame + 0x8));
  }
  if (!(0.0 < *pfVar1)) {
    pfVar1 = &(*(float *)(gen_frame + 0x4));
  }
  *(float *)((*(int *)&gen_args[0]) + 0xa0) = *pfVar1;
  return (uint)pfVar1;
}

/* ref: FUN_004ac500 */
uint F_004ac500(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4ac500u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1088068);
  (*(float *)(gen_frame + 0x4)) = 0.0;
  pfVar1 = &(*(float *)&gen_args[1]);
  if (!((*(float *)&gen_args[1]) < REFG(float, 0x1088068))) {
    pfVar1 = &(*(float *)(gen_frame + 0x8));
  }
  if (!(0.0 < *pfVar1)) {
    pfVar1 = &(*(float *)(gen_frame + 0x4));
  }
  *(float *)((*(int *)&gen_args[0]) + 0x9c) = *pfVar1;
  return (uint)pfVar1;
}

/* ref: FUN_004ac550 */
uint F_004ac550(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4ac550u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x4)) = 0.0;
  pfVar1 = &(*(float *)&gen_args[1]);
  if (!((*(float *)&gen_args[1]) < REFG(float, 0x1087f04))) {
    pfVar1 = &(*(float *)(gen_frame + 0x8));
  }
  if (!(0.0 < *pfVar1)) {
    pfVar1 = &(*(float *)(gen_frame + 0x4));
  }
  *(float *)((*(int *)&gen_args[0]) + 0xa4) = *pfVar1;
  return (uint)pfVar1;
}

/* ref: FUN_004ac5a0 */
unsigned int F_004ac5a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4ac5a0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float * pfVar4;
  bool bVar5;
  float10 fVar6;
  
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x10947a4);
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
  pfVar4 = &(*(float *)&gen_args[1]);
  if (!((double)(*(float *)&gen_args[1]) < *(double *)&REFG(undefined, 0x1088070))) {
    pfVar4 = &(*(float *)(gen_frame + 0x8));
  }
  if (!(REFG(float, 0x1087f04) < *pfVar4)) {
    pfVar4 = &(*(float *)(gen_frame + 0x4));
  }
  fVar1 = *pfVar4;
  fVar6 = (float10)fVar1;
  bVar5 = GEN_ISNAN((float10)*(float *)((*(int *)&gen_args[0]) + 0x1a4)) || GEN_ISNAN(fVar6);
  if (bVar5 == (bVar5 || (float10)*(float *)((*(int *)&gen_args[0]) + 0x1a4) == fVar6)) {
    fVar2 = (float10)*(double *)&REFG(undefined, 0x1094428);
    *(float *)((*(int *)&gen_args[0]) + 0x1a4) = fVar1;
    *(float *)((*(int *)&gen_args[0]) + 0x160) = fVar1;
    fVar3 = (float10)*(double *)&REFG(undefined, 0x1094420);
    *(undefined2 *)((*(int *)&gen_args[0]) + 0x151) = 0x101;
    *(float *)((*(int *)&gen_args[0]) + 0x15c) =
         ((float)GEN_TOF(((fVar6 * fVar2 - fVar3) * (float10)*(double *)&REFG(undefined, 0x1094418))));
    return 0;
  }
  return 0;
}

/* ref: FUN_004ac6f0 */
unsigned int F_004ac6f0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4ac6f0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  bool bVar2;
  float10 fVar3;
  
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x10916ec);
  (*(float *)(gen_frame + 0x4)) = 0.0;
  pfVar1 = &(*(float *)&gen_args[1]);
  if (!((double)(*(float *)&gen_args[1]) < *(double *)&REFG(undefined, 0x1088118))) {
    pfVar1 = &(*(float *)(gen_frame + 0x8));
  }
  if (!(0.0 < *pfVar1)) {
    pfVar1 = &(*(float *)(gen_frame + 0x4));
  }
  fVar3 = (float10)*pfVar1;
  bVar2 = GEN_ISNAN((float10)*(float *)((*(int *)&gen_args[0]) + 0x198)) || GEN_ISNAN(fVar3);
  if (bVar2 == (bVar2 || (float10)*(float *)((*(int *)&gen_args[0]) + 0x198) == fVar3)) {
    *(float *)((*(int *)&gen_args[0]) + 0x198) = *pfVar1;
    *(undefined1 *)((*(int *)&gen_args[0]) + 0x151) = 1;
  }
  return 0;
}

/* ref: FUN_004ac760 */
unsigned int F_004ac760(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4ac760u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  bool bVar2;
  float10 fVar3;
  
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x10947ac);
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x10947a8);
  pfVar1 = &(*(float *)&gen_args[1]);
  if (!((*(float *)&gen_args[1]) < REFG(float, 0x10947ac))) {
    pfVar1 = &(*(float *)(gen_frame + 0x8));
  }
  if (!(REFG(float, 0x10947a8) < *pfVar1)) {
    pfVar1 = &(*(float *)(gen_frame + 0x4));
  }
  fVar3 = (float10)*pfVar1;
  bVar2 = GEN_ISNAN((float10)*(float *)((*(int *)&gen_args[0]) + 0x19c)) || GEN_ISNAN(fVar3);
  if (bVar2 == (bVar2 || (float10)*(float *)((*(int *)&gen_args[0]) + 0x19c) == fVar3)) {
    *(float *)((*(int *)&gen_args[0]) + 0x19c) = *pfVar1;
    *(undefined1 *)((*(int *)&gen_args[0]) + 0x151) = 1;
  }
  return 0;
}

/* ref: FUN_004ac7d0 */
unsigned int F_004ac7d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4ac7d0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  bool bVar2;
  float10 fVar3;
  
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x10916ec);
  (*(float *)(gen_frame + 0x4)) = 0.0;
  pfVar1 = &(*(float *)&gen_args[1]);
  if (!((double)(*(float *)&gen_args[1]) < *(double *)&REFG(undefined, 0x1088118))) {
    pfVar1 = &(*(float *)(gen_frame + 0x8));
  }
  if (!(0.0 < *pfVar1)) {
    pfVar1 = &(*(float *)(gen_frame + 0x4));
  }
  fVar3 = (float10)*pfVar1;
  bVar2 = GEN_ISNAN((float10)*(float *)((*(int *)&gen_args[0]) + 0x1a0)) || GEN_ISNAN(fVar3);
  if (bVar2 == (bVar2 || (float10)*(float *)((*(int *)&gen_args[0]) + 0x1a0) == fVar3)) {
    *(float *)((*(int *)&gen_args[0]) + 0x1a0) = *pfVar1;
    *(undefined1 *)((*(int *)&gen_args[0]) + 0x151) = 1;
  }
  return 0;
}

/* ref: FUN_004ac840 */
uint F_004ac840(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4ac840u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x10916ec);
  (*(float *)(gen_frame + 0x4)) = 0.0;
  pfVar1 = &(*(float *)&gen_args[1]);
  if (!((double)(*(float *)&gen_args[1]) < *(double *)&REFG(undefined, 0x1088118))) {
    pfVar1 = &(*(float *)(gen_frame + 0x8));
  }
  if (!(0.0 < *pfVar1)) {
    pfVar1 = &(*(float *)(gen_frame + 0x4));
  }
  *(float *)((*(int *)&gen_args[0]) + 0xa8) = *pfVar1;
  return (uint)pfVar1;
}

/* ref: FUN_004ac890 */
uint F_004ac890(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4ac890u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x10916ec);
  (*(float *)(gen_frame + 0x4)) = 0.0;
  pfVar1 = &(*(float *)&gen_args[1]);
  if (!((double)(*(float *)&gen_args[1]) < *(double *)&REFG(undefined, 0x1088118))) {
    pfVar1 = &(*(float *)(gen_frame + 0x8));
  }
  if (!(0.0 < *pfVar1)) {
    pfVar1 = &(*(float *)(gen_frame + 0x4));
  }
  *(float *)((*(int *)&gen_args[0]) + 0xac) = *pfVar1;
  return (uint)pfVar1;
}

/* ref: FUN_004ac8e0 */
uint F_004ac8e0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x4ac8e0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float * pfVar1;
  int iVar2;
  float * pfVar3;
  bool bVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x10947c8);
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x10947c4);
  pfVar1 = &(*(float *)&gen_args[1]);
  if (!((*(float *)&gen_args[1]) < REFG(float, 0x10947c8))) {
    pfVar1 = &(*(float *)(gen_frame + 0x8));
  }
  if (!(REFG(float, 0x10947c4) < *pfVar1)) {
    pfVar1 = &(*(float *)(gen_frame + 0x4));
  }
  ((float *)(gen_frame + 0xc))[0] = *pfVar1;
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x10947c0);
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1088068);
  pfVar1 = &(*(float *)&gen_args[2]);
  if (!((*(float *)&gen_args[2]) < REFG(float, 0x10947c0))) {
    pfVar1 = &(*(float *)(gen_frame + 0x4));
  }
  if (!(REFG(float, 0x1088068) < *pfVar1)) {
    pfVar1 = &(*(float *)(gen_frame + 0x8));
  }
  ((float *)(gen_frame + 0xc))[1] = *pfVar1;
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x10947b4);
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x10947b0);
  pfVar1 = &(*(float *)&gen_args[3]);
  if (!((double)(*(float *)&gen_args[3]) < *(double *)&REFG(undefined, 0x10947b8))) {
    pfVar1 = &(*(float *)(gen_frame + 0x4));
  }
  if (!(*(double *)&REFG(undefined, 0x10946c8) < (double)*pfVar1)) {
    pfVar1 = &(*(float *)(gen_frame + 0x8));
  }
  ((float *)(gen_frame + 0xc))[2] = *pfVar1;
  iVar2 = 0;
  pfVar3 = (float *)((*(int *)&gen_args[0]) + 0x140);
  do {
    (*(float *)(gen_frame + 0x8)) = ((float *)(gen_frame + 0xc))[iVar2];
    fVar6 = (float10)(*(float *)(gen_frame + 0x8));
    fVar7 = (float10)*pfVar3;
    bVar4 = GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6);
    bVar5 = bVar4 || fVar7 == fVar6;
    pfVar1 = ((float *)GEN_TOP(CONCAT22((short)((uint)((int)(uintptr_t)pfVar1) >> 0x10),
                               CONCAT11(bVar5 << 6 | bVar4 << 2 | 2U | !(fVar6 <= fVar7),
                                        (char)pfVar1))));
    if (bVar4 == bVar5) {
      *pfVar3 = (*(float *)(gen_frame + 0x8));
      *(undefined1 *)((*(int *)&gen_args[0]) + 0x153 + iVar2) = 1;
    }
    iVar2 = iVar2 + 1;
    pfVar3 = pfVar3 + 1;
  } while (iVar2 < 3);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return (uint)pfVar1;
}

/* ref: FUN_004aca10 */
uint F_004aca10(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x4aca10u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float fVar2;
  float * pfVar3;
  float * pfVar4;
  
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc);
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x0)) = 0.0;
  pfVar3 = &(*(float *)&gen_args[1]);
  if (!((*(float *)&gen_args[1]) < REFG(float, 0x1087f04))) {
    pfVar3 = &(*(float *)(gen_frame + 0x4));
  }
  if (!(0.0 < *pfVar3)) {
    pfVar3 = &(*(float *)(gen_frame + 0x0));
  }
  (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x4)) = 0.0;
  pfVar4 = &(*(float *)&gen_args[2]);
  if (!((*(float *)&gen_args[2]) < REFG(float, 0x1087f04))) {
    pfVar4 = &(*(float *)(gen_frame + 0x0));
  }
  if (!(0.0 < *pfVar4)) {
    pfVar4 = &(*(float *)(gen_frame + 0x4));
  }
  fVar1 = *pfVar4;
  (*(float *)(gen_frame + 0x4)) = 0.0;
  pfVar4 = &(*(float *)&gen_args[3]);
  if (!((*(float *)&gen_args[3]) < REFG(float, 0x1087f04))) {
    pfVar4 = &(*(float *)(gen_frame + 0x0));
  }
  if (!(0.0 < *pfVar4)) {
    pfVar4 = &(*(float *)(gen_frame + 0x4));
  }
  fVar2 = *pfVar4;
  *(float *)((*(int *)&gen_args[0]) + 0xb4) = *pfVar3;
  *(float *)((*(int *)&gen_args[0]) + 0xb8) = fVar1;
  *(float *)((*(int *)&gen_args[0]) + 0xbc) = fVar2;
  F_00c47745((*(uint *)(gen_frame + 0x8)) ^ (uint)(uint)(gen_frame + 0xc));
  return (uint)pfVar4;
}

/* ref: FUN_004acad0 */
float10 F_004acad0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7, float gen_a8)
{
  GEN_ENTER(0x4acad0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float in_xmm0 = (float)gen_a1;
  float in_xmm1 = (float)gen_a2;
  float in_xmm2 = (float)gen_a3;
  float in_xmm3 = (float)gen_a4;
  float in_xmm5 = (float)gen_a5;
  float in_xmm7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  fVar1 = *(float *)(in_ecx + 400);
  fVar6 = F_00c4cb50(in_xmm0,in_xmm1,in_xmm2,in_xmm3,in_xmm5,in_xmm7,
                       (float10)*(double *)&REFG(undefined, 0x10947d8));
  dVar5 = (double)(float)fVar6 * *(double *)&REFG(undefined, 0x10947d0);
  fVar6 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_9);
  fVar1 = ((float)GEN_TOF(((float10)fVar1 / ((float10)(float)fVar6 + (float10)dVar5))));
  fVar7 = F_004a39a0(param_8);
  fVar8 = F_004a3830(param_8);
  fVar2 = *(float *)(in_ecx + 0x198);
  fVar9 = F_00c4cb50(in_xmm0,in_xmm1,in_xmm2,in_xmm3,in_xmm5,in_xmm7,
                       (float10)*(double *)&REFG(undefined, 0x1094588));
  fVar3 = *(float *)(in_ecx + 0x194);
  fVar6 = (float10)*(double *)&REFG(undefined, 0x1094580);
  fVar4 = *(float *)(in_ecx + 0x18c);
  dVar5 = *(double *)&REFG(undefined, 0x10946d8) * (double)(float)fVar7;
  fVar7 = F_00c4cb50(in_xmm0,in_xmm1,in_xmm2,in_xmm3,in_xmm5,in_xmm7,
                       (float10)*(double *)&REFG(undefined, 0x10946c8));
  fVar10 = F_004a4f30(param_8,*(float *)(in_ecx + 0x19c),*(float *)(in_ecx + 0x1a0),fVar1);
  fVar11 = F_00c4cb50(in_xmm0,in_xmm1,in_xmm2,in_xmm3,in_xmm5,in_xmm7,
                        (float10)*(double *)&REFG(undefined, 0x10945a0));
  fVar6 = F_00c4d24c((float10)((float)GEN_TOF((-(float10)fVar1 *
                                       ((float10)((float)GEN_TOF(((float10)(float)fVar11 *
                                                        (float10)((float)GEN_TOF(((float10)*(float *)(in_ecx 
                                                  + 0x1a4) * (float10)*(double *)&REFG(undefined, 0x1094598) -
                                                  (float10)*(double *)&REFG(undefined, 0x1094590))))))) +
                                       (float10)((double)GEN_TOD((fVar10 + ((float10)GEN_TOD(((double)(float)((float10
                                                  )dVar5 / (float10)(float)fVar7) +
                                                  ((double)((float)GEN_TOF(((((float10)fVar3 * fVar6) /
                                                                   (float10)fVar4) *
                                                                  (float10)(float)fVar9))) +
                                                  (double)(float)(fVar8 * (float10)fVar2)))))))))))));
  return (float10)(float)fVar6;
}

/* ref: FUN_004ad870 */
uint F_004ad870(unsigned int gen_a0)
{
  GEN_ENTER(0x4ad870u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(undefined2 *)(gen_frame + 0xe)) = 0;
  (*(undefined2 *)(gen_frame + 0x16)) = 0;
  (*(undefined1 *)(gen_frame + 0xd)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined2 *)(gen_frame + 0xb)) = 0x400;
  (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x1087f04);
  (*(undefined2 *)(gen_frame + 0x8)) = 0x50;
  (*(undefined1 *)(gen_frame + 0xa)) = 1;
  (*(undefined4 *)(gen_frame + 0x28)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x2c)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x30)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x3c)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x40)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x44)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x48)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x4c)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x50)) = REFG(float, 0x1087f04);
  (*(undefined2 *)(gen_frame + 0x14)) = 4;
  uVar1 = F_004e8110(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25f8),param_1,&(*(undefined2 *)(gen_frame + 0x8)),0x50);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_004ada80 */
unsigned int F_004ada80(unsigned int gen_a0)
{
  GEN_ENTER(0x4ada80u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  if ((*(uint *)(REFG(int, 0x137128c) + 0x1514) >> 8 & 1) != 0) {
    F_00678890(REFG(int, 0x137128c));
    return 0;
  }
  return 0;
}

/* ref: FUN_004adb00 */
unsigned int F_004adb00(unsigned int gen_a0)
{
  GEN_ENTER(0x4adb00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  if ((*(uint *)(REFG(int, 0x137128c) + 0x1514) & 0x100) != 0) {
    F_00678890(REFG(int, 0x137128c));
  }
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x38) = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = uVar1;
  *(undefined4 *)((int)this + 0x5c) = uVar1;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  if ((*(uint *)(REFG(int, 0x137128c) + 0x1514) >> 0xd & 1) != 0) {
    F_00678870(REFG(int, 0x137128c));
  }
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
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined2 *)((int)this + 0xbc) = 0;
  *(undefined1 *)((int)this + 0xbe) = 1;
  *(undefined1 *)((int)this + 0xbf) = 1;
  *(undefined1 *)((int)this + 0xc0) = 1;
  *(undefined1 *)((int)this + 0xc1) = 1;
  return 0;
}

/* ref: FUN_004adca0 */
uint F_004adca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4adca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if ((char)param_2 == '\0') {
    if (*(byte *)(param_1 + 0xac + (int)this) == (byte)param_3) {
      *(undefined1 *)(param_1 + 0xac + (int)this) = 0;
      param_1 = F_0067a900(REFG(undefined4, 0x137128c),param_1,0);
    }
  }
  else if (*(byte *)(param_1 + 0xac + (int)this) < (byte)param_3) {
    *(byte *)(param_1 + 0xac + (int)this) = (byte)param_3;
    return param_1;
  }
  return param_1;
}

/* ref: FUN_004ade20 */
uint F_004ade20(void)
{
  GEN_ENTER(0x4ade20u, 0u, 0u, 0u, 0u);
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = REFG(undefined4, 0x1371290);
  uVar1 = *(undefined4 *)(REFG(undefined4, 0x1371290) + 0xc);
  *(undefined4 *)(REFG(undefined4, 0x1371290) + 0xc) = uVar1;
  *(undefined4 *)(uVar2 + 8) = uVar1;
  *(undefined1 *)(uVar2 + 0x28) = 1;
  return uVar2;
}

/* ref: FUN_004ade40 */
uint F_004ade40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4ade40u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  uint3 uVar8;
  float fVar6;
  uint uVar7;
  char cVar9;
  float10 fVar10;
  float10 fVar11;
  float local_14;
  
  fVar4 = REFG(float, 0x1087f04);
  if (param_4 < REFG(float, 0x1087f04)) {
    fVar6 = param_2[8];
  }
  else {
    fVar6 = param_3[8];
  }
  param_1[8] = fVar6;
  if (param_4 < fVar4) {
    fVar6 = param_2[9];
  }
  else {
    fVar6 = param_3[9];
  }
  fVar10 = (float10)param_4;
  param_1[9] = fVar6;
  local_14 = (float)((float10)1 - fVar10);
  if ((param_2[8] == 0.0) && ((param_2[9] == 0.0 || (GEN_ISNAN(param_2[7]) || param_2[7] <= 0.0)))) {
    cVar9 = '\0';
  }
  else {
    cVar9 = '\x01';
  }
  uVar8 = (uint3)((uint)gen_fl2bits(fVar6) >> 8);
  if ((param_3[8] == 0.0) && ((param_3[9] == 0.0 || (GEN_ISNAN(param_3[7]) || param_3[7] <= 0.0)))) {
    fVar6 = gen_bits2f((uint)uVar8 << 8);
  }
  else {
    fVar6 = gen_bits2f(CONCAT31(uVar8,1));
  }
  cVar5 = (char)(uint)gen_fl2bits(fVar6);
  if (cVar9 != cVar5) {
    if (cVar9 == '\0') {
      local_14 = 0.0;
    }
    else {
      local_14 = fVar4;
    }
    if (cVar5 == '\0') {
      param_4 = 0.0;
    }
    else {
      param_4 = fVar4;
    }
    fVar10 = (float10)param_4;
  }
  fVar11 = (float10)local_14;
  if ((cVar9 != '\0') || (cVar5 != '\0')) {
    fVar2 = param_3[1];
    fVar6 = param_2[1];
    fVar3 = param_3[2];
    fVar1 = param_2[2];
    *param_1 = ((float)GEN_TOF(((float10)(float)((float10)*param_2 * fVar11) +
                      (float10)(float)((float10)*param_3 * fVar10))));
    param_1[1] = ((float)GEN_TOF(((float10)(float)((float10)fVar6 * fVar11) +
                        (float10)(float)((float10)fVar2 * fVar10))));
    param_1[2] = ((float)GEN_TOF(((float10)(float)((float10)fVar1 * fVar11) +
                        (float10)(float)((float10)fVar3 * fVar10))));
    fVar2 = param_3[5];
    fVar1 = param_2[5];
    fVar6 = ((float)GEN_TOF(((float10)(float)((float10)param_2[4] * fVar11) +
                   (float10)(float)((float10)param_3[4] * fVar10))));
    param_1[3] = ((float)GEN_TOF(((float10)(float)((float10)param_2[3] * fVar11) +
                        (float10)(float)((float10)param_3[3] * fVar10))));
    param_1[4] = fVar6;
    param_1[5] = ((float)GEN_TOF(((float10)(float)((float10)fVar1 * fVar11) +
                        (float10)(float)((float10)fVar2 * fVar10))));
    param_1[6] = (float)((float10)param_3[6] * fVar10 + (float10)param_2[6] * fVar11);
  }
  if ((param_2[9] == 0.0) || (!(0.0 < param_2[7]))) {
    cVar9 = '\0';
  }
  else {
    cVar9 = '\x01';
  }
  uVar8 = (uint3)((uint)gen_fl2bits(fVar6) >> 8);
  if ((param_3[9] == 0.0) || (!(0.0 < param_3[7]))) {
    uVar7 = (uint)uVar8 << 8;
  }
  else {
    uVar7 = CONCAT31(uVar8,1);
  }
  cVar5 = (char)uVar7;
  if (cVar9 != cVar5) {
    if (cVar9 == '\0') {
      local_14 = 0.0;
    }
    else {
      local_14 = fVar4;
    }
    if (cVar5 == '\0') {
      param_4 = 0.0;
    }
    else {
      param_4 = fVar4;
    }
    fVar10 = (float10)param_4;
    fVar11 = (float10)local_14;
  }
  if ((cVar9 == '\0') && (cVar5 == '\0')) {
    return uVar7;
  }
  param_1[7] = (float)(fVar11 * (float10)param_2[7] + (float10)param_3[7] * fVar10);
  return uVar7;
}

/* ref: FUN_004ae0e0 */
uint F_004ae0e0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x4ae0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = F_004ade40(param_1,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_004ae100 */
uint F_004ae100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4ae100u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  float10 fVar5;
  float10 fVar6;
  
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_3 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 0x10);
  F_004a66a0(param_1 + 0x14,param_2 + 0x14,param_3 + 0x14,param_4);
  F_004a68f0(param_1 + 0x44,param_2 + 0x44,param_3 + 0x44,param_4);
  F_004a6b70(param_1 + 0x78,param_2 + 0x78,param_3 + 0x78,param_4);
  F_004a6cd0(param_1 + 0x9c,param_2 + 0x9c,param_3 + 0x9c,param_4);
  F_004a6e40(param_1 + 0xc4,param_2 + 0xc4,param_3 + 0xc4,param_4);
  F_004ade40(param_1 + 0xe4,param_2 + 0xe4,param_3 + 0xe4,param_4);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_3 + 0x104);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_3 + 0x108);
  F_004a6fe0(param_1 + 0x10c,param_2 + 0x10c,param_3 + 0x10c,param_4);
  F_004a6fe0(param_1 + 0x13c,param_2 + 0x13c,param_3 + 0x13c,param_4);
  F_004a7190(param_1 + 0x16c,param_2 + 0x16c,param_3 + 0x16c,param_4);
  fVar5 = (float10)param_4;
  fVar6 = (float10)(float)((float10)1 - fVar5);
  *(float *)(param_1 + 0x178) =
       ((float)GEN_TOF((fVar6 * (float10)*(float *)(param_2 + 0x178) +
              (float10)*(float *)(param_3 + 0x178) * fVar5)));
  *(float *)(param_1 + 0x17c) =
       ((float)GEN_TOF(((float10)*(float *)(param_3 + 0x17c) * fVar5 +
              (float10)*(float *)(param_2 + 0x17c) * fVar6)));
  *(float *)(param_1 + 0x180) =
       ((float)GEN_TOF(((float10)*(float *)(param_3 + 0x180) * fVar5 +
              fVar6 * (float10)*(float *)(param_2 + 0x180))));
  F_004a7260(param_1 + 0x184,param_2 + 0x184,param_3 + 0x184,param_4);
  uVar1 = F_004a7350(param_1 + 0x19c,param_2 + 0x19c,param_3 + 0x19c,param_4);
  puVar3 = (undefined4 *)(param_3 + 0x1c8);
  puVar4 = (undefined4 *)(param_1 + 0x1c8);
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return uVar1;
}

/* ref: FUN_004ae300 */
byte F_004ae300(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x4ae300u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  int iVar1;
  uint uVar2;
  byte bVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  uint uVar7;
  
  uVar2 = param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  F_004a66a0(param_1 + 0x14,param_1 + 0x14,param_2 + 0x14,param_3);
  F_004a68f0(param_1 + 0x44,param_1 + 0x44,param_2 + 0x44,param_3);
  F_004a6b70(param_1 + 0x78,param_1 + 0x78,param_2 + 0x78,param_3);
  F_004a6cd0(param_1 + 0x9c,param_1 + 0x9c,param_2 + 0x9c,param_3);
  F_004a6e40(param_1 + 0xc4,param_1 + 0xc4,param_2 + 0xc4,param_3);
  F_004ade40(param_1 + 0xe4,param_1 + 0xe4,param_2 + 0xe4,param_3);
  uVar7 = REFG(float, 0x1087f04);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  iVar1 = param_2 + 0x10c;
  param_2 = (uint)gen_fl2bits(param_3);
  if (*(int *)(param_1 + 0x138) != *(int *)(uVar2 + 0x138)) {
    param_2 = uVar7;
  }
  fVar6 = param_3;
  F_004a6fe0(param_1 + 0x10c,param_1 + 0x10c,iVar1,GEN_TOF(gen_bits2f(param_2)));
  param_2 = (uint)gen_fl2bits(fVar6);
  if (*(int *)(param_1 + 0x168) != *(int *)(uVar2 + 0x168)) {
    param_2 = uVar7;
  }
  F_004a6fe0(param_1 + 0x13c,param_1 + 0x13c,uVar2 + 0x13c,GEN_TOF(gen_bits2f(param_2)));
  F_004a7190(param_1 + 0x16c,param_1 + 0x16c,uVar2 + 0x16c,param_3);
  fVar4 = (float10)param_3;
  fVar5 = (float10)(float)((float10)1 - fVar4);
  *(float *)(param_1 + 0x178) =
       ((float)GEN_TOF(((float10)*(float *)(uVar2 + 0x178) * fVar4 +
              fVar5 * (float10)*(float *)(param_1 + 0x178))));
  *(float *)(param_1 + 0x17c) =
       ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x17c) * fVar5 +
              (float10)*(float *)(uVar2 + 0x17c) * fVar4)));
  *(float *)(param_1 + 0x180) =
       ((float)GEN_TOF(((float10)*(float *)(uVar2 + 0x180) * fVar4 +
              (float10)*(float *)(param_1 + 0x180) * fVar5)));
  F_004a7260(param_1 + 0x184,param_1 + 0x184,uVar2 + 0x184,param_3);
  F_004a7350(param_1 + 0x19c,param_1 + 0x19c,uVar2 + 0x19c,param_3);
  bVar3 = F_004a60a0(param_1 + 0x1c8,uVar2 + 0x1c8,param_3);
  return bVar3;
}

/* ref: FUN_004ae4f0 */
uint F_004ae4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ae4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  uint uVar2;
  float * pfVar3;
  undefined4 * puVar4;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  float fVar8;
  ulonglong uVar9;
  
  uVar5 = param_1;
  uVar2 = 0;
  iVar6 = 0;
  *(undefined2 *)((int)this + 0x7e) = 0;
  if ((param_1 == 0) || (*(ushort *)((int)this + 100) < param_1)) {
    uVar2 = 0;
    if (*(int *)((int)this + 0x44) != 0) {
      uVar9 = F_00406b30(*(int *)((int)this + 0x44));
      uVar2 = (uint)uVar9;
      *(undefined4 *)((int)this + 0x44) = 0;
      *(undefined2 *)((int)this + 100) = 0;
    }
  }
  if (param_1 != 0) {
    if (*(int *)((int)this + 0x44) == 0) {
      uVar2 = F_00406bb0(-(uint)((int)((ulonglong)param_1 * 0x1c >> 0x20) != 0) |
                           (uint)((ulonglong)param_1 * 0x1c),0,0);
      *(uint *)((int)this + 0x44) = uVar2;
      if (uVar2 == 0) {
        return 0;
      }
    }
    *(short *)((int)this + 100) = (short)param_1;
    if (param_1 != 0) {
      fVar7 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x8)) = (float)fVar7;
      (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
      param_1 = 0;
      fVar8 = REFG(float, 0x1087f04);
      do {
        puVar4 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x44) + param_1)));
        pfVar3 = &(*(float *)(gen_frame + 0x4));
        if (!((float10)(*(float *)(gen_frame + 0x8)) < (float10)1)) {
          pfVar3 = &(*(float *)(gen_frame + 0x8));
        }
        fVar7 = (float10)iVar6;
        if (iVar6 < 0) {
          fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        fVar1 = *pfVar3;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = (undefined4)gen_fl2bits(fVar8);
        puVar4[3] = (undefined4)gen_fl2bits(fVar8);
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = (undefined4)gen_fl2bits((float)(fVar7 / (float10)fVar1));
        uVar2 = *(uint *)(REFG(int, 0x137128c) + 0x1514) >> 0xd;
        if ((uVar2 & 1) != 0) {
          uVar2 = F_00678870(REFG(int, 0x137128c));
          fVar8 = REFG(float, 0x1087f04);
        }
        param_1 = param_1 + 0x1c;
        iVar6 = iVar6 + 0x15180;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return uVar2;
}

/* ref: FUN_004ae690 */
unsigned int F_004ae690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ae690u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float * pfVar2;
  float * pfVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  (*(float *)(gen_frame + 0xc)) = param_2[1];
  ((float *)(gen_frame + 0x0))[2] = *param_2;
  pfVar2 = ((float *)(gen_frame + 0x0)) + 1;
  ((float *)(gen_frame + 0x0))[1] = param_2[2];
  fVar4 = (float10)*param_2;
  fVar5 = (float10)param_2[1];
  fVar6 = (float10)param_2[2];
  ((float *)(gen_frame + 0x0))[1] = gen_bits2f(REFG(float, 0x10947f8));
  (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF(((fVar6 + (fVar5 + fVar4)) / (float10)*(double *)&REFG(undefined, 0x10944e0))));
  if (!((double)(*(float *)(gen_frame + 0xc)) < REFG(double, 0x1091858))) {
    pfVar2 = &(*(float *)(gen_frame + 0xc));
  }
  ((float *)(gen_frame + 0x0))[1] = *pfVar2;
  pfVar3 = ((float *)(gen_frame + 0x0)) + 2;
  fVar7 = (float10)*pfVar2;
  fVar8 = (float10)((float)GEN_TOF(((float10)(float)(fVar5 / fVar7) - (float10)REFG(float, 0x1302c64))));
  fVar9 = (float10)((float)GEN_TOF(((float10)(float)(fVar4 / fVar7) - (float10)REFG(float, 0x1302c60))));
  fVar7 = (float10)((float)GEN_TOF(((float10)(float)(fVar6 / fVar7) - (float10)REFG(float, 0x1302c68))));
  fVar1 = ((float)GEN_TOF((fVar7 * fVar7 + (fVar9 * fVar9 + fVar8 * fVar8))));
  ((float *)(gen_frame + 0x0))[1] = fVar1;
  ((float *)(gen_frame + 0x0))[1] = gen_bits2f(REFG(float, 0x1087f04));
  ((float *)(gen_frame + 0x0))[0] = 0.0;
  ((float *)(gen_frame + 0x0))[2] = (float)((float10)fVar1 / (float10)*(double *)&REFG(undefined, 0x10944e0));
  if (!((float10)((float *)(gen_frame + 0x0))[2] < (float10)1)) {
    pfVar3 = ((float *)(gen_frame + 0x0)) + 1;
  }
  if (!(0.0 < *pfVar3)) {
    pfVar3 = ((float *)(gen_frame + 0x0));
  }
  ((float *)(gen_frame + 0x0))[0] = *pfVar3;
  fVar8 = (float10)*pfVar3;
  ((float *)(gen_frame + 0x0))[0] = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xc)) * ((float10)1 - fVar8))));
  fVar9 = (float10)((float *)(gen_frame + 0x0))[0];
  fVar10 = (float10)REFG(float, 0x1302c64);
  fVar7 = (float10)REFG(float, 0x1302c68);
  *param_1 = ((float)GEN_TOF(((float10)(float)(fVar9 * (float10)REFG(float, 0x1302c60)) +
                    (float10)(float)(fVar8 * fVar4))));
  param_1[1] = ((float)GEN_TOF(((float10)(float)(fVar10 * fVar9) + (float10)(float)(fVar8 * fVar5))));
  param_1[2] = ((float)GEN_TOF(((float10)(float)(fVar9 * fVar7) + (float10)(float)(fVar8 * fVar6))));
  return 0;
}

/* ref: FUN_004ae830 */
uint F_004ae830(unsigned int gen_a0)
{
  GEN_ENTER(0x4ae830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * pvVar2;
  int iVar3;
  undefined4 * puVar4;
  int * piVar5;
  int local_8;
  
  piVar5 = *(int * PTR32 *)((int)this + 0xc);
  if (piVar5 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  piVar5 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar5 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  if (*(int *)((int)this + 4) != 0) {
    F_0050c620(*(int *)((int)this + 4),0,0);
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (*(int *)((int)this + 8) != 0) {
    F_0050c620(*(int *)((int)this + 8),0,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  piVar5 = *(int * PTR32 *)((int)this + 0x84);
  *(undefined4 *)((int)this + 0x80) = 0;
  if (piVar5 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5);
    *(undefined4 *)((int)this + 0x84) = 0;
  }
  piVar5 = *(int * PTR32 *)((int)this + 0x90);
  *(undefined4 *)((int)this + 0x8c) = 0;
  if (piVar5 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5);
    *(undefined4 *)((int)this + 0x90) = 0;
  }
  if (*(int *)((int)this + 0xb0) != 0) {
    F_0050c620(*(int *)((int)this + 0xb0),0,0);
    *(undefined4 *)((int)this + 0xb0) = 0;
  }
  piVar5 = (int *)((int)this + 0xb8);
  local_8 = 2;
  do {
    piVar1 = (int *)*piVar5;
    piVar5[-1] = 0;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar5 = 0;
    }
    piVar1 = (int *)piVar5[2];
    piVar5[1] = 0;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      piVar5[2] = 0;
    }
    if (piVar5[8] != 0) {
      F_0050c620(piVar5[8],0,0);
      piVar5[8] = 0;
    }
    piVar5 = piVar5 + 10;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  piVar5 = *(int * PTR32 *)((int)this + 0x108);
  *(undefined4 *)((int)this + 0x104) = 0;
  if (piVar5 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5);
    *(undefined4 *)((int)this + 0x108) = 0;
  }
  if (*(int *)((int)this + 0x120) != 0) {
    F_0050c620(*(int *)((int)this + 0x120),0,0);
    *(undefined4 *)((int)this + 0x120) = 0;
  }
  puVar4 = (undefined4 *)((int)this + 0x128);
  local_8 = 2;
  do {
    pvVar2 = (undefined *)*puVar4;
    puVar4[-1] = 0;
    if (pvVar2 != (undefined *)0x0) {
      F_009cfa70(pvVar2);
      F_00406ad0(pvVar2);
      *puVar4 = 0;
    }
    pvVar2 = (undefined *)puVar4[2];
    puVar4[1] = 0;
    if (pvVar2 != (undefined *)0x0) {
      F_009cfa70(pvVar2);
      F_00406ad0(pvVar2);
      puVar4[2] = 0;
    }
    if ((undefined *)puVar4[8] != (undefined *)0x0) {
      F_00982b20((undefined *)puVar4[8]);
      puVar4[8] = 0;
    }
    puVar4 = puVar4 + 10;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  piVar5 = (int *)((int)this + 0x178);
  iVar3 = 3;
  do {
    piVar1 = (int *)*piVar5;
    piVar5[-1] = 0;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1,0);
      ((code *)*(gen_code32 *)(*(int *)*piVar5 + 0x78))((int *)*piVar5,500);
      *piVar5 = 0;
    }
    piVar1 = (int *)piVar5[2];
    piVar5[1] = 0;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1,0);
      ((code *)*(gen_code32 *)(*(int *)piVar5[2] + 0x78))((int *)piVar5[2],500);
      piVar5[2] = 0;
    }
    if (piVar5[8] != 0) {
      F_0050c620(piVar5[8],0,0);
      piVar5[8] = 0;
    }
    piVar5 = piVar5 + 10;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)((int)this + 0x228) = 0;
  return (uint)this;
}

/* ref: FUN_004aea50 */
byte F_004aea50(unsigned int gen_a0)
{
  GEN_ENTER(0x4aea50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (*(int *)((int)this + 4) != 0) {
    piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 4) + 0x8c)));
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2;
    UNLOCK();
    if ((iVar1 < 8) && (*(int *)((int)this + 8) != 0)) {
      piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 8) + 0x8c)));
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2;
      UNLOCK();
      if (iVar1 < 8) {
        if (*(int *)((int)this + 4) != 0) {
          piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 4) + 0x88)));
          LOCK();
          iVar1 = *piVar2;
          *piVar2 = *piVar2;
          UNLOCK();
          if ((iVar1 == 2) && (*(int *)((int)this + 8) != 0)) {
            piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 8) + 0x88)));
            LOCK();
            iVar1 = *piVar2;
            *piVar2 = *piVar2;
            UNLOCK();
            if (iVar1 == 2) {
              piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0xa0)));
              *(int * PTR32 *)((int)this + 0xc) = piVar2;
              if (piVar2 != (int *)0x0) {
                ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
              }
              if (*(int *)((int)this + 4) != 0) {
                F_0050c620(*(int *)((int)this + 4),0,0);
                *(undefined4 *)((int)this + 4) = 0;
              }
              piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + 0xa0)));
              *(int * PTR32 *)((int)this + 0x10) = piVar2;
              if (piVar2 != (int *)0x0) {
                ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
              }
              if (*(int *)((int)this + 8) != 0) {
                F_0050c620(*(int *)((int)this + 8),0,0);
                *(undefined4 *)((int)this + 8) = 0;
              }
            }
          }
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_004aeb20 */
unsigned int F_004aeb20(unsigned int gen_a0)
{
  GEN_ENTER(0x4aeb20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  uint uVar2;
  int * piVar3;
  float * pfVar4;
  uint uVar5;
  uint3 uVar8;
  int iVar6;
  undefined * PTR32 * ppvVar7;
  undefined2 uVar9;
  uint uVar10;
  float10 fVar11;
  float10 fVar12;
  undefined * pvVar13;
  undefined * pvVar14;
  undefined * pvVar15;
  
  iVar6 = REFG(int, 0x137128c);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = *(undefined * PTR32 *)((int)this + 0x8c);
  ((undefined * PTR32 *)(gen_frame + 0x18))[0] = *(undefined * PTR32 *)((int)this + 0x98);
  fVar11 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*(undefined * PTR32 *)((int)this + 0x98))));
  uVar10 = *(uint *)((int)this + 0x80);
  (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)*(int * PTR32 *)((int)this + 0x84);
  (*(int * PTR32 *)(gen_frame + 0x2c)) = *(int * PTR32 *)((int)this + 0x90);
  pvVar15 = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar11 * (float10)*(float *)((int)this + 0x88)))))));
  ((undefined * PTR32 *)(gen_frame + 0x18))[0] = pvVar15;
  pvVar13 = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((((float10)1 - fVar11) * (float10)*(float *)((int)this + 0x94)))))));
  ((undefined * PTR32 *)(gen_frame + 0x18))[1] = pvVar13;
  if ((*(int * PTR32 *)((int)this + 0x84) == (int *)0x0) ||
     (GEN_ISNAN(((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar15)))) != (GEN_ISNAN(((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar15)))) || ((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar15))) == 0.0))) {
    (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)0x0;
    pvVar15 = (undefined *)0x0;
  }
  pfVar4 = (*(float * PTR32 *)(gen_frame + 0x28));
  if ((*(int * PTR32 *)((int)this + 0x90) == (int *)0x0) ||
     (GEN_ISNAN(((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar13)))) != (GEN_ISNAN(((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar13)))) || ((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar13))) == 0.0))) {
    (*(int * PTR32 *)(gen_frame + 0x2c)) = (int *)0x0;
    pvVar13 = (undefined *)0x0;
  }
  pvVar14 = pvVar13;
  if (((*(float * PTR32 *)(gen_frame + 0x28)) == (float *)0x0) && ((*(int * PTR32 *)(gen_frame + 0x2c)) != (int *)0x0)) {
    (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)(*(int * PTR32 *)(gen_frame + 0x2c));
    (*(int * PTR32 *)(gen_frame + 0x2c)) = (int *)pfVar4;
    pvVar14 = (undefined *)0x0;
    pvVar15 = pvVar13;
  }
  *(undefined * PTR32 *)(REFG(int, 0x137128c) + 0x154c) = pvVar15;
  *(undefined * PTR32 *)(iVar6 + 0x1550) = pvVar14;
  if (uVar10 < 0x65) {
    uVar9 = (undefined2)*(undefined4 *)(&REFG(undefined, 0x1093aec) + uVar10 * 8);
  }
  else {
    uVar9 = (undefined2)
            *(undefined4 *)("bgcommon/nature/sky/texture/sky_016.tex" + uVar10 * 8 + 0x10);
  }
  *(undefined2 *)(REFG(int, 0x137128c) + 0x1548) = uVar9;
  if ((*(undefined * PTR32 *)(gen_frame + 0x20)) < 0x65) {
    uVar9 = (undefined2)*(undefined4 *)(&REFG(undefined, 0x1093aec) + (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x20))) * 8);
  }
  else {
    uVar9 = (undefined2)
            *(undefined4 *)("bgcommon/nature/sky/texture/sky_016.tex" + (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x20))) * 8 + 0x10);
  }
  *(undefined2 *)(REFG(int, 0x137128c) + 0x154a) = uVar9;
  iVar6 = REFG(int, 0x137128c);
  if ((*(float * PTR32 *)(gen_frame + 0x28)) != (float *)0x0) {
    ((code *)*(gen_code32 *)((int)gen_fl2bits(*(*(float * PTR32 *)(gen_frame + 0x28))) + 8))((*(float * PTR32 *)(gen_frame + 0x28)));
  }
  piVar3 = *(int * PTR32 *)(iVar6 + 0x14c4);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  }
  *(float * PTR32 *)(iVar6 + 0x14c4) = (*(float * PTR32 *)(gen_frame + 0x28));
  if ((*(int * PTR32 *)(gen_frame + 0x2c)) != (int *)0x0) {
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x2c)) + 8))((*(int * PTR32 *)(gen_frame + 0x2c)));
  }
  piVar3 = *(int * PTR32 *)(iVar6 + 0x14c8);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  }
  *(int * PTR32 *)(iVar6 + 0x14c8) = (*(int * PTR32 *)(gen_frame + 0x2c));
  pvVar15 = *(undefined * PTR32 *)((int)this + 0xc4);
  ((undefined * PTR32 *)(gen_frame + 0x18))[0] = pvVar15;
  (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)0x0;
  ((undefined * PTR32 *)(gen_frame + 0x18))[0] = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar15)))))));
  if (*(int *)((int)this + 0xb4) != 0) {
    (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x1093f34) + *(int *)((int)this + 0xb4) * 8)
                                * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar15))) + (float10)*(double *)&REFG(undefined, 0x108bec8)))))));
  }
  if (*(int *)((int)this + 0xbc) != 0) {
    (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x1093f34) + *(int *)((int)this + 0xbc) * 8)
                                * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(((undefined * PTR32 *)(gen_frame + 0x18))[0]))) + (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x28)))))))))));
  }
  F_00620580(REFG(int, 0x137127c) + 0x100e0,*(undefined4 *)((int)this + 0xb8),
               *(undefined4 *)((int)this + 0xc0),((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar15))),((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x28))))));
  F_006205f0(REFG(int, 0x137127c) + 0x100e0,*(undefined4 *)((int)this + 0xe0),
               *(undefined4 *)((int)this + 0xe8),*(float *)((int)this + 0xec));
  F_00620400(REFG(int, 0x137127c) + 0x104a0,*(undefined4 *)((int)this + 0x108),
               &REFG(undefined, 0x1301484) + *(int *)((int)this + 0x104) * 8,*(float *)((int)this + 0x10c));
  (*(int * PTR32 *)(gen_frame + 0x2c)) = (int *)(REFG(int, 0x1371290) + 0x20c);
  uVar10 = 0;
  do {
    (*(float * PTR32 *)(gen_frame + 0x28)) = *(float * PTR32 *)((int)this + uVar10 * 0x28 + 0x128);
    (*(undefined * PTR32 *)(gen_frame + 0x20)) = *(undefined * PTR32 *)((int)this + uVar10 * 0x28 + 0x130);
    (*(float *)(gen_frame + 0x24)) = REFG(float, 0x1087f04);
    if ((uVar10 == 1) && (*(byte *)((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + 0x44) != 0)) {
      (*(float *)(gen_frame + 0x24)) = *((float *)GEN_TOP((REFG(int, 0x1371290) + 0x254 + (*(byte *)((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + 0x44) - 1 & 1) * 4)));
    }
    ((undefined * PTR32 *)(gen_frame + 0x18))[0] = *(undefined * PTR32 *)((int)this + uVar10 * 0x28 + 0x134);
    if (((*(float * PTR32 *)(gen_frame + 0x28)) != (undefined *)0x0) && (uVar5 = F_00982ce0((*(float * PTR32 *)(gen_frame + 0x28))), (char)uVar5 != '\0')) {
      ((undefined * PTR32 *)(gen_frame + 0x18))[1] = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(((undefined * PTR32 *)(gen_frame + 0x18))[0]))) * (float10)(*(float *)(gen_frame + 0x24))) *
                                   (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(((undefined * PTR32 *)(gen_frame + 0x18))[0])))))))));
      uVar8 = (uint3)(uVar5 >> 8);
      if ((float10)0 < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(((undefined * PTR32 *)(gen_frame + 0x18))[1])))) {
        iVar6 = CONCAT31(uVar8,1);
      }
      else {
        iVar6 = (uint)uVar8 << 8;
      }
      F_009bc190((*(float * PTR32 *)(gen_frame + 0x28)),iVar6);
      F_009bc3a0((*(float * PTR32 *)(gen_frame + 0x28)),*(float *)((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + uVar10 * 0xc + 0x20),GEN_TOF(*((float *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + (uVar10 * 3 + 9) * 4)))),
                   *(float *)((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + 0x28 + uVar10 * 0xc),((float)gen_bits2f((unsigned int)(uintptr_t)(((undefined * PTR32 *)(gen_frame + 0x18))[1]))));
    }
    if (((*(undefined * PTR32 *)(gen_frame + 0x20)) != (undefined *)0x0) && (uVar5 = F_00982ce0((*(undefined * PTR32 *)(gen_frame + 0x20))), (char)uVar5 != '\0')) {
      ((undefined * PTR32 *)(gen_frame + 0x18))[1] = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x24)) * ((float10)1 - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(((undefined * PTR32 *)(gen_frame + 0x18))[0])))))
                                   * ((float10)1 - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(((undefined * PTR32 *)(gen_frame + 0x18))[0]))))))))));
      uVar8 = (uint3)(uVar5 >> 8);
      if ((float10)0 < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(((undefined * PTR32 *)(gen_frame + 0x18))[1])))) {
        iVar6 = CONCAT31(uVar8,1);
      }
      else {
        iVar6 = (uint)uVar8 << 8;
      }
      F_009bc190((*(undefined * PTR32 *)(gen_frame + 0x20)),iVar6);
      F_009bc3a0((*(undefined * PTR32 *)(gen_frame + 0x20)),*(float *)((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + uVar10 * 0xc + 0x20),GEN_TOF(*((float *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + (uVar10 * 3 + 9) * 4)))),
                   *(float *)((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + 0x28 + uVar10 * 0xc),((float)gen_bits2f((unsigned int)(uintptr_t)(((undefined * PTR32 *)(gen_frame + 0x18))[1]))));
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < 2);
  ((undefined * PTR32 *)(gen_frame + 0x18))[0] = *(undefined * PTR32 *)(REFG(int, 0x1371290) + 0x344);
  (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)((int)this + 0x184);
  ((undefined * PTR32 *)(gen_frame + 0x18))[1] = (undefined *)*(undefined4 *)(REFG(int, 0x1371290) + 0x348);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (undefined *)0x3;
  do {
    piVar3 = ((int *)(uintptr_t)gen_fl2bits((float)((*(float * PTR32 *)(gen_frame + 0x28))[-3])));
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,(undefined4)gen_fl2bits(*(*(float * PTR32 *)(gen_frame + 0x28))),0);
      ((code *)*(gen_code32 *)(*piVar3 + 0x70))(piVar3,((undefined * PTR32 *)(gen_frame + 0x18))[0]);
      ((code *)*(gen_code32 *)(*piVar3 + 0x74))(piVar3,((undefined * PTR32 *)(gen_frame + 0x18))[1]);
    }
    piVar3 = ((int *)(uintptr_t)gen_fl2bits((float)((*(float * PTR32 *)(gen_frame + 0x28))[-1])));
    if (piVar3 != (int *)0x0) {
      (*(float *)(gen_frame + 0x24)) = (float)((float10)1 - (float10)*(*(float * PTR32 *)(gen_frame + 0x28)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x24))
                (piVar3,(undefined4)gen_fl2bits((float)((float10)1 - (float10)*(*(float * PTR32 *)(gen_frame + 0x28)))),0);
      ((code *)*(gen_code32 *)(*piVar3 + 0x70))(piVar3,((undefined * PTR32 *)(gen_frame + 0x18))[0]);
      ((code *)*(gen_code32 *)(*piVar3 + 0x74))(piVar3,((undefined * PTR32 *)(gen_frame + 0x18))[1]);
    }
    iVar6 = REFG(int, 0x1371290);
    uVar10 = REFG(float, 0x10920d0);
    (*(float * PTR32 *)(gen_frame + 0x28)) = (*(float * PTR32 *)(gen_frame + 0x28)) + 10;
    (*(undefined * PTR32 *)(gen_frame + 0x20)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + -1);
  } while ((*(undefined * PTR32 *)(gen_frame + 0x20)) != (undefined *)0x0);
  uVar5 = *(uint *)((int)this + 0x228);
  if ((1 < uVar5) && ((uVar5 & 1) == 0)) {
    iVar1 = (uVar5 - 2 >> 1) * 3 + 0x7b;
    uVar5 = *(uint *)((int)this + iVar1 * 4 + 4);
    uVar2 = *(uint *)((int)this + iVar1 * 4 + 8);
    *(uint *)(REFG(int, 0x1371290) + 0x550) = *(uint *)((int)this + iVar1 * 4) ^ REFG(uint, 0x10920d0);
    ((undefined * PTR32 *)(gen_frame + 0x18))[0] = (undefined *)0x0;
    *(uint *)(iVar6 + 0x554) = uVar5 ^ uVar10;
    *(uint *)(iVar6 + 0x558) = uVar2 ^ uVar10;
    (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF(((float10)*(float *)((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + 0x10) *
                      (float10)*(float *)((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + 0x10))));
    (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)*(float *)((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + 0x14) *
                      (float10)*(float *)((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + 0x14))));
    (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)*(float *)((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + 0x18) *
                      (float10)*(float *)((int)(*(int * PTR32 *)(gen_frame + 0x2c)) + 0x18))));
    if (*(int *)((int)this + 0x228) == 6) {
      ((undefined * PTR32 *)(gen_frame + 0x18))[1] = ((undefined *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04))));
      (*(undefined * PTR32 *)(gen_frame + 0x20)) = (undefined *)0x0;
      ppvVar7 = ((undefined * PTR32 *)(gen_frame + 0x18));
      ((undefined * PTR32 *)(gen_frame + 0x18))[0] = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)((int)this + 0x22c) /
                                   (float10)*((float *)GEN_TOP(((int)this +
                                                      *(int *)((int)this + 0x228) * 4 + 0x208)))))))));
      fVar11 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(((undefined * PTR32 *)(gen_frame + 0x18))[0])));
      ((undefined * PTR32 *)(gen_frame + 0x18))[0] = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)1 - (fVar11 + fVar11)))))));
      if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(((undefined * PTR32 *)(gen_frame + 0x18))[0]))) < (float10)1)) {
        ppvVar7 = ((undefined * PTR32 *)(gen_frame + 0x18)) + 1;
      }
      if (!(0.0 < ((float)gen_bits2f((unsigned int)(uintptr_t)(*ppvVar7))))) {
        ppvVar7 = ((undefined * PTR32 *)(gen_frame + 0x18)) + 2;
      }
      ((undefined * PTR32 *)(gen_frame + 0x18))[0] = *ppvVar7;
      fVar11 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(((undefined * PTR32 *)(gen_frame + 0x18))[0])));
      fVar12 = (float10)1 - fVar11;
      ((undefined * PTR32 *)(gen_frame + 0x18))[1] = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(fVar12 * fVar12))));
      fVar12 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(((undefined * PTR32 *)(gen_frame + 0x18))[1])));
      (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(iVar6 + 0x560) * fVar11))) +
                        (float10)(float)(fVar12 * (float10)(*(float *)(gen_frame + 0x0))))));
      (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(iVar6 + 0x564) * fVar11))) +
                        (float10)(float)((float10)(*(float *)(gen_frame + 0x4)) * fVar12))));
      (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar11 * (float10)*(float *)(iVar6 + 0x568)))) +
                        (float10)(float)(fVar12 * (float10)(*(float *)(gen_frame + 0x8))))));
    }
    *(float *)(iVar6 + 0x560) = (*(float *)(gen_frame + 0x0));
    *(float *)(iVar6 + 0x564) = (*(float *)(gen_frame + 0x4));
    *(float *)(iVar6 + 0x568) = (*(float *)(gen_frame + 0x8));
    *(undefined * PTR32 *)(iVar6 + 0x670) = ((undefined * PTR32 *)(gen_frame + 0x18))[0];
    return 0;
  }
  *(float *)(REFG(int, 0x1371290) + 0x670) = REFG(float, 0x1087f04);
  return 0;
}

/* ref: FUN_004af150 */
unsigned int F_004af150(void)
{
  GEN_ENTER(0x4af150u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined * this;
  uint in_ecx;
  int * piVar2;
  
  piVar2 = (int *)(REFG(int, 0x1371290) + 0x50);
  (*(int *)(gen_frame + 0x8)) = 2;
  do {
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      F_004ff310(((undefined1 *)(gen_frame + 0x4)),1,0);
      this = (undefined *)F_009a2040(((undefined1 *)(gen_frame + 0x4)),iVar1);
      if (this != (undefined *)0x0) {
        in_ecx = F_009cfa30(this,0);
        F_00982b20(this);
        if (in_ecx != 0) {
          F_00982ca0(in_ecx,0,0,(float)(float10)1,(float)(float10)0);
          F_00982b80(in_ecx,1);
        }
      }
    }
    piVar2 = piVar2 + 1;
    (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + -1;
  } while ((*(int *)(gen_frame + 0x8)) != 0);
  return 0;
}

/* ref: FUN_004af1e0 */
uint F_004af1e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4af1e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  double dVar1;
  undefined4 * puVar2;
  float * pfVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  
  (*(uint *)(gen_frame + 0xac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb0);
  puVar2 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x20)),*(int *)(REFG(int, 0x137127c) + 0x66f4) + 0x10);
  puVar8 = ((undefined4 *)(gen_frame + 0x60));
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar8 = puVar8 + 1;
  }
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(SQRT((float10)*(double *)&REFG(undefined, 0x1092098))));
  fVar12 = F_004a4fe0();
  (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF((((float10)fVar12 - (float10)REFG(double, 0x1088108)) * (float10)(*(float *)(gen_frame + 0x18)))));
  fVar12 = F_004a4fe0();
  (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF((((float10)fVar12 - (float10)REFG(double, 0x1088108)) * (float10)(*(float *)(gen_frame + 0x18)))));
  fVar9 = (float10)(*(float *)(gen_frame + 0x4));
  (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF((((float10)1 - (float10)(*(float *)(gen_frame + 0x0)) * (float10)(*(float *)(gen_frame + 0x0))) - fVar9 * fVar9)));
  (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0x1c)))));
  (*(float *)(gen_frame + 0x8)) = (*(float *)(gen_frame + 0x1c));
  F_004eebf0(&(*(float *)(gen_frame + 0x0)),(uint)((undefined4 *)(gen_frame + 0x60)));
  fVar9 = (float10)(*(float *)(gen_frame + 0x18));
  pfVar3 = &(*(float *)(gen_frame + 0x4));
  (*(float *)(gen_frame + 0x18)) = (float)((float10)1 / fVar9);
  if (!((float10)(float)((float10)1 / fVar9) < (float10)(*(float *)(gen_frame + 0x4)))) {
    pfVar3 = &(*(float *)(gen_frame + 0x18));
  }
  (*(float *)(gen_frame + 0x4)) = *pfVar3;
  F_004bd580(&(*(float *)(gen_frame + 0x0)));
  dVar1 = *(double *)&REFG(undefined, 0x1094810);
  *(float *)this = (*(float *)(gen_frame + 0x0));
  *(float *)((int)this + 4) = (*(float *)(gen_frame + 0x4));
  *(float *)((int)this + 8) = (*(float *)(gen_frame + 0x8));
  (*(float *)(gen_frame + 0x18)) = 2.8026e-45;
  pfVar3 = this;
  do {
    uVar7 = REFG(undefined4, 0x1375588);
    uVar6 = REFG(undefined4, 0x1375584) << 0xb ^ REFG(undefined4, 0x1375584);
    uVar6 = (REFG(undefined4, 0x1375590) >> 0xb ^ uVar6) >> 8 ^ REFG(undefined4, 0x1375590) ^ uVar6;
    (*(float *)(gen_frame + 0x1c)) = gen_bits2f(uVar6 >> 9 | 0x3f800000);
    REFG(undefined4, 0x1375584) = REFG(undefined4, 0x137558c);
    REFG(undefined4, 0x1375588) = REFG(undefined4, 0x1375590);
    fVar12 = (float)((float10)(*(float *)(gen_frame + 0x1c)) - (float10)1);
    (*(float *)(gen_frame + 0x1c)) = fVar12;
    uVar7 = uVar7 << 0xb ^ uVar7;
    REFG(undefined4, 0x1375590) = (uVar6 >> 0xb ^ uVar7) >> 8 ^ uVar6 ^ uVar7;
    (*(float *)(gen_frame + 0x1c)) = gen_bits2f(REFG(undefined4, 0x1375590) >> 9 | 0x3f800000);
    (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF((((float10)fVar12 - (float10)REFG(double, 0x1088108)) * (float10)dVar1 +
                      (float10)(*(float *)(gen_frame + 0x0)))));
    (*(float *)(gen_frame + 0x1c)) = (float)((float10)(*(float *)(gen_frame + 0x1c)) - (float10)1);
    (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x1c)) - (float10)REFG(double, 0x1088108)) * (float10)dVar1 +
                      (float10)(*(float *)(gen_frame + 0x8)))));
    (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x4)) * (float10)(*(float *)(gen_frame + 0x4)) +
                       (float10)(*(float *)(gen_frame + 0x0)) * (float10)(*(float *)(gen_frame + 0x0))) +
                      (float10)(*(float *)(gen_frame + 0x8)) * (float10)(*(float *)(gen_frame + 0x8)))));
    (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0x1c)))));
    fVar9 = (float10)1;
    (*(float *)(gen_frame + 0x1c)) = (float)(fVar9 / (float10)(*(float *)(gen_frame + 0x1c)));
    fVar10 = (float10)(*(float *)(gen_frame + 0x1c));
    (*(float *)(gen_frame + 0x0)) = (float)(fVar10 * (float10)(*(float *)(gen_frame + 0x0)));
    fVar11 = (float10)(*(float *)(gen_frame + 0x4));
    (*(float *)(gen_frame + 0x4)) = (float)(fVar10 * fVar11);
    (*(float *)(gen_frame + 0x18)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x18))) + -1);
    (*(float *)(gen_frame + 0x8)) = (float)(fVar10 * (float10)(*(float *)(gen_frame + 0x8)));
    REFG(undefined4, 0x137558c) = uVar6;
    pfVar3[3] = (*(float *)(gen_frame + 0x0));
    pfVar3[4] = (float)(fVar10 * fVar11);
    pfVar3[5] = (*(float *)(gen_frame + 0x8));
    uVar6 = REFG(undefined4, 0x137558c);
    uVar7 = REFG(undefined4, 0x1375588);
    pfVar3 = pfVar3 + 3;
    dVar1 = *(double *)&REFG(undefined, 0x1094810);
  } while ((*(float *)(gen_frame + 0x18)) != 0.0);
  uVar4 = REFG(undefined4, 0x1375584) << 0xb ^ REFG(undefined4, 0x1375584);
  REFG(undefined4, 0x137558c) = REFG(undefined4, 0x1375590);
  uVar4 = REFG(undefined4, 0x1375590) ^ (REFG(undefined4, 0x1375590) >> 0xb ^ uVar4) >> 8 ^ uVar4;
  (*(float *)(gen_frame + 0x1c)) = gen_bits2f(uVar4 >> 9 | 0x3f800000);
  REFG(undefined4, 0x1375584) = REFG(undefined4, 0x1375588);
  REFG(undefined4, 0x1375588) = uVar6;
  (*(float *)(gen_frame + 0x1c)) = (float)((float10)(*(float *)(gen_frame + 0x1c)) - fVar9);
  if ((float10)(*(float *)(gen_frame + 0x1c)) < (float10)REFG(float, 0x1094808)) {
    REFG(undefined4, 0x1375590) = uVar4;
    *(undefined4 *)((int)this + 0x24) = 0;
    uVar7 = REFG(undefined4, 0x1375584) << 0xb ^ REFG(undefined4, 0x1375584);
    REFG(undefined4, 0x1375584) = REFG(undefined4, 0x1375588);
    REFG(undefined4, 0x1375588) = REFG(undefined4, 0x137558c);
    REFG(undefined4, 0x137558c) = REFG(undefined4, 0x1375590);
    REFG(undefined4, 0x1375590) = REFG(undefined4, 0x1375590) ^ (REFG(undefined4, 0x1375590) >> 0xb ^ uVar7) >> 8 ^ uVar7;
    (*(float *)(gen_frame + 0x1c)) = gen_bits2f(REFG(undefined4, 0x1375590) >> 9 | 0x3f800000);
    (*(float *)(gen_frame + 0x1c)) = (float)((float10)(*(float *)(gen_frame + 0x1c)) - fVar9);
    fVar10 = (float10)REFG(double, 0x1088108);
    *(float *)((int)this + 0x2c) =
         ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x1c)) * fVar10 + fVar9) * (float10)*(double *)&REFG(undefined, 0x10947d0))));
  }
  else {
    uVar7 = uVar7 << 0xb ^ uVar7;
    REFG(undefined4, 0x1375588) = REFG(undefined4, 0x1375590);
    REFG(undefined4, 0x1375590) = uVar4 ^ (uVar4 >> 0xb ^ uVar7) >> 8 ^ uVar7;
    (*(float *)(gen_frame + 0x1c)) = gen_bits2f(REFG(undefined4, 0x1375590) >> 9 | 0x3f800000);
    REFG(undefined4, 0x1375584) = uVar6;
    (*(float *)(gen_frame + 0x1c)) = (float)((float10)(*(float *)(gen_frame + 0x1c)) - fVar9);
    fVar10 = (float10)REFG(double, 0x1088108);
    fVar11 = (float10)REFG(double, 0x1094800);
    REFG(undefined4, 0x137558c) = uVar4;
    *(float *)((int)this + 0x24) = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x1c)) * fVar10 + fVar9) * fVar11)));
    uVar7 = REFG(undefined4, 0x1375584) << 0xb ^ REFG(undefined4, 0x1375584);
    REFG(undefined4, 0x1375584) = REFG(undefined4, 0x1375588);
    REFG(undefined4, 0x1375588) = REFG(undefined4, 0x137558c);
    REFG(undefined4, 0x137558c) = REFG(undefined4, 0x1375590);
    REFG(undefined4, 0x1375590) = REFG(undefined4, 0x1375590) ^ (REFG(undefined4, 0x1375590) >> 0xb ^ uVar7) >> 8 ^ uVar7;
    (*(float *)(gen_frame + 0x1c)) = gen_bits2f(REFG(undefined4, 0x1375590) >> 9 | 0x3f800000);
    (*(float *)(gen_frame + 0x1c)) = (float)((float10)(*(float *)(gen_frame + 0x1c)) - fVar9);
    *(float *)((int)this + 0x2c) = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x1c)) * fVar10 + fVar9) * fVar11)));
  }
  uVar7 = REFG(undefined4, 0x1375584) << 0xb ^ REFG(undefined4, 0x1375584);
  REFG(undefined4, 0x1375584) = REFG(undefined4, 0x1375588);
  REFG(undefined4, 0x1375588) = REFG(undefined4, 0x137558c);
  REFG(undefined4, 0x137558c) = REFG(undefined4, 0x1375590);
  REFG(undefined4, 0x1375590) = REFG(undefined4, 0x1375590) ^ (REFG(undefined4, 0x1375590) >> 0xb ^ uVar7) >> 8 ^ uVar7;
  (*(float *)(gen_frame + 0x1c)) = gen_bits2f(REFG(undefined4, 0x1375590) >> 9 | 0x3f800000);
  (*(float *)(gen_frame + 0x1c)) = (float)((float10)(*(float *)(gen_frame + 0x1c)) - fVar9);
  *(float *)((int)this + 0x34) =
       ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x1c)) * fVar10 + fVar9) * (float10)*(double *)&REFG(undefined, 0x1094810))));
  *(float *)((int)this + 0x28) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x24) * fVar10)));
  *(float *)((int)this + 0x30) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x2c) * fVar10)));
  *(float *)((int)this + 0x38) = ((float)GEN_TOF((fVar10 * (float10)*(float *)((int)this + 0x34))));
  F_00c47745((*(uint *)(gen_frame + 0xac)) ^ (uint)(uint)(gen_frame + 0xb0));
  return (uint)this;
}

/* ref: FUN_004af960 */
uint F_004af960(unsigned int gen_a0)
{
  GEN_ENTER(0x4af960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined4 *)((int)this + 4) = 0;
  piVar1 = *(int * PTR32 *)((int)this + 0x9d8);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x9d8) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x9dc);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x9dc) = 0;
  }
  F_0061e400((undefined *)((int)this + 0x9ec));
  piVar1 = *(int * PTR32 *)((int)this + 0x9e4);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x9e4) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x9e8);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x9e8) = 0;
  }
  iVar2 = REFG(int, 0x137127c);
  piVar1 = *(int * PTR32 *)(REFG(int, 0x137127c) + 0x6554);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(undefined4 *)(iVar2 + 0x6554) = 0;
  F_0061e730((undefined *)((int)this + 0x880));
  piVar1 = *(int * PTR32 *)((int)this + 0x840);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x840) = 0;
  }
  F_004ae830(&REFG(undefined, 0x1375598));
  uVar3 = 0;
  if (*(int *)((int)this + 0x354) != 0) {
    uVar3 = F_0050c620(*(int *)((int)this + 0x354),0,0);
    *(undefined4 *)((int)this + 0x354) = 0;
  }
  return uVar3;
}

/* ref: FUN_004afa40 */
unsigned int F_004afa40(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x4afa40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  float * pfVar4;
  float10 fVar5;
  
  uVar3 = (*(uint *)&gen_args[1]);
  uVar1 = *(undefined4 *)((*(int *)&gen_args[0]) + 0x5d4);
  uVar2 = *(undefined4 *)((*(int *)&gen_args[0]) + 0x5d8);
  *(undefined4 *)(*(uint *)&gen_args[1]) = *(undefined4 *)((*(int *)&gen_args[0]) + 0x5d0);
  *(undefined4 *)((*(uint *)&gen_args[1]) + 4) = uVar1;
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  *(undefined4 *)((*(uint *)&gen_args[1]) + 8) = uVar2;
  (*(float *)(gen_frame + 0x4)) = 0.0;
  pfVar4 = (float *)&(*(uint *)&gen_args[1]);
  (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(((float)GEN_TOF(((float10)*(double *)&REFG(undefined, 0x1092098) -
                                     (float10)*(float *)((*(int *)&gen_args[0]) + 0x660) * (float10)(*(float *)&gen_args[2])))));
  if (!(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[1])))) < (float10)1)) {
    pfVar4 = &(*(float *)(gen_frame + 0x8));
  }
  if (!(0.0 < *pfVar4)) {
    pfVar4 = &(*(float *)(gen_frame + 0x4));
  }
  fVar5 = (float10)*pfVar4;
  *(float *)uVar3 = (float)(fVar5 * (float10)*(float *)uVar3);
  *(float *)(uVar3 + 4) = ((float)GEN_TOF(((float10)*(float *)(uVar3 + 4) * fVar5)));
  *(float *)(uVar3 + 8) = ((float)GEN_TOF((fVar5 * (float10)*(float *)(uVar3 + 8))));
  return 0;
}

/* ref: FUN_004afaf0 */
unsigned int F_004afaf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4afaf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  iVar1 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
  fVar2 = (float10)((float)GEN_TOF(((float10)*param_2 - (float10)*(float *)(iVar1 + 0x90))));
  fVar3 = (float10)((float)GEN_TOF(((float10)param_2[1] - (float10)*(float *)(iVar1 + 0x94))));
  fVar4 = (float10)((float)GEN_TOF(((float10)param_2[2] - (float10)*(float *)(iVar1 + 0x98))));
  F_004afa40(this,param_1,
               ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar4 * fVar4 + (fVar3 * fVar3 + fVar2 * fVar2))))))));
  return 0;
}

/* ref: FUN_004afb80 */
unsigned int F_004afb80(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x4afb80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float * pfVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x840) == 0) {
    pfVar1 = (float *)&REFG(undefined4, 0x1375a88);
  }
  else {
    pfVar1 = ((float *)GEN_TOP((*(int *)(param_1 + 0x840) + 0x14)));
  }
  *param_2 = *pfVar1;
  param_2[1] = pfVar1[1];
  param_2[2] = pfVar1[2];
  if (*(int *)(REFG(int, 0x1371280) + 0x24) < 4) {
    ((float *)(gen_frame + 0x4))[2] = *((float *)GEN_TOP((REFG(int, 0x1371280) + 0x3c + *(int *)(REFG(int, 0x1371280) + 0x24) * 4)));
  }
  else {
    ((float *)(gen_frame + 0x4))[2] = *(float *)(REFG(int, 0x1371280) + 0x48);
  }
  ((float *)(gen_frame + 0x4))[1] = gen_bits2f(REFG(float, 0x1087f04));
  ((float *)(gen_frame + 0x4))[0] = 0.0;
  pfVar1 = ((float *)(gen_frame + 0x4)) + 2;
  ((float *)(gen_frame + 0x4))[2] = ((float)GEN_TOF((((float10)((float *)(gen_frame + 0x4))[2] - (float10)param_3) /
                       (float10)*(double *)&REFG(undefined, 0x1088070))));
  if (!((float10)((float *)(gen_frame + 0x4))[2] < (float10)1)) {
    pfVar1 = ((float *)(gen_frame + 0x4)) + 1;
  }
  if (!(0.0 < *pfVar1)) {
    pfVar1 = ((float *)(gen_frame + 0x4));
  }
  ((float *)(gen_frame + 0x4))[0] = *pfVar1;
  fVar2 = (float10)*pfVar1;
  ((float *)(gen_frame + 0x4))[0] = ((float)GEN_TOF((((float10)1 - fVar2) * (float10)*(float *)(REFG(int, 0x1371280) + 0x28) + fVar2)));
  fVar2 = (float10)((float *)(gen_frame + 0x4))[0];
  *param_2 = (float)(fVar2 * (float10)*param_2);
  param_2[1] = (float)((float10)param_2[1] * fVar2);
  param_2[2] = (float)(fVar2 * (float10)param_2[2]);
  return 0;
}

/* ref: FUN_004afca0 */
unsigned int F_004afca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4afca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  iVar1 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
  fVar2 = (float10)((float)GEN_TOF(((float10)*param_2 - (float10)*(float *)(iVar1 + 0x90))));
  fVar3 = (float10)((float)GEN_TOF(((float10)param_2[1] - (float10)*(float *)(iVar1 + 0x94))));
  fVar4 = (float10)((float)GEN_TOF(((float10)param_2[2] - (float10)*(float *)(iVar1 + 0x98))));
  F_004afb80(this,param_1,
               ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar4 * fVar4 + (fVar3 * fVar3 + fVar2 * fVar2))))))));
  return 0;
}

/* ref: FUN_004afd30 */
byte F_004afd30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4afd30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  byte bVar2;
  
  bVar2 = (byte)param_1;
  if (((byte)(*(uint *)((int)this + 0x9d0) >> (bVar2 & 0x1f)) & 1) != (byte)param_2) {
    *(uint *)((int)this + 0x9d0) =
         (uint)((byte)param_2 != 0) << (bVar2 & 0x1f) |
         ~(1 << (bVar2 & 0x1f)) & *(uint *)((int)this + 0x9d0);
    if (param_1 == 9) {
      F_004adcf0(param_2);
    }
    if (((((*(byte *)((int)this + 0x9d0) & 1) == 0) &&
         (uVar1 = *(uint *)((int)this + 0x9d0), (uVar1 >> 1 & 1) == 0)) && ((uVar1 >> 2 & 1) == 0))
       && (((uVar1 >> 3 & 1) == 0 && ((uVar1 >> 4 & 1) == 0)))) {
      *(undefined1 *)(REFG(int, 0x1371284) + 0x10) = 0;
      return 0;
    }
    param_2 = 1;
    *(undefined1 *)(REFG(int, 0x1371284) + 0x10) = 1;
  }
  return (byte)param_2;
}

/* ref: FUN_004afdd0 */
uint F_004afdd0(unsigned int gen_a0)
{
  GEN_ENTER(0x4afdd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x840);
  if (((!GEN_ISNAN(*(float *)(uVar1 + 0x14)) && !(*(float *)(uVar1 + 0x14) <= 0.0)) ||
      (!GEN_ISNAN(*(float *)(uVar1 + 0x18)) && !(*(float *)(uVar1 + 0x18) <= 0.0))) ||
     (0.0 < *(float *)(uVar1 + 0x1c))) {
    uVar1 = F_0065d500(REFG(undefined4, 0x1371284),uVar1);
  }
  return uVar1;
}

/* ref: FUN_004b01a0 */
uint F_004b01a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4b01a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float10 fVar1;
  uint uVar2;
  float * pfVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  ulonglong uVar9;
  
  uVar2 = 0;
  iVar6 = 0;
  *(undefined2 *)((int)this + 0x32) = 0;
  if ((param_1 == 0) || (*(ushort *)((int)this + 0x24) < param_1)) {
    uVar2 = 0;
    if (*(int *)((int)this + 0x10) != 0) {
      uVar9 = F_00406b30(*(int *)((int)this + 0x10));
      uVar2 = (uint)uVar9;
      *(undefined4 *)((int)this + 0x10) = 0;
      *(undefined2 *)((int)this + 0x24) = 0;
    }
  }
  if (param_1 != 0) {
    if (*(int *)((int)this + 0x10) == 0) {
      uVar2 = F_00406bb0(-(uint)((int)((ulonglong)param_1 * 0x10 >> 0x20) != 0) |
                           (uint)((ulonglong)param_1 * 0x10),0,0);
      *(uint *)((int)this + 0x10) = uVar2;
      if (uVar2 == 0) {
        return 0;
      }
    }
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    fVar1 = (float10)1;
    uVar2 = 0;
    *(short *)((int)this + 0x24) = (short)param_1;
    if (3 < (int)param_1) {
      fVar7 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x14)) = (float)fVar7;
      fVar7 = (float10)(*(float *)(gen_frame + 0x14));
      (*(int *)(gen_frame + 0xc)) = (param_1 - 4 >> 2) + 1;
      uVar2 = (*(int *)(gen_frame + 0xc)) * 4;
      iVar5 = 0x2a300;
      do {
        puVar4 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + iVar6)));
        pfVar3 = &(*(float *)(gen_frame + 0x18));
        if (!(fVar7 < fVar1)) {
          pfVar3 = &(*(float *)(gen_frame + 0x14));
        }
        fVar8 = (float10)(iVar5 + -0x2a300);
        if (iVar5 + -0x2a300 < 0) {
          fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        puVar4[3] = (undefined4)gen_fl2bits((float)(fVar8 / (float10)*pfVar3));
        *puVar4 = REFG(undefined4, 0x1375558);
        puVar4[1] = REFG(undefined4, 0x137555c);
        puVar4[2] = REFG(undefined4, 0x1375560);
        puVar4 = ((undefined4 *)GEN_TOP((iVar6 + 0x10 + *(int *)((int)this + 0x10))));
        pfVar3 = &(*(float *)(gen_frame + 0x18));
        if (!(fVar7 < fVar1)) {
          pfVar3 = &(*(float *)(gen_frame + 0x14));
        }
        fVar8 = (float10)(iVar5 + -0x15180);
        if (iVar5 + -0x15180 < 0) {
          fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        puVar4[3] = (undefined4)gen_fl2bits((float)(fVar8 / (float10)*pfVar3));
        *puVar4 = REFG(undefined4, 0x1375558);
        puVar4[1] = REFG(undefined4, 0x137555c);
        puVar4[2] = REFG(undefined4, 0x1375560);
        puVar4 = ((undefined4 *)GEN_TOP((iVar6 + 0x20 + *(int *)((int)this + 0x10))));
        pfVar3 = &(*(float *)(gen_frame + 0x18));
        if (!(fVar7 < fVar1)) {
          pfVar3 = &(*(float *)(gen_frame + 0x14));
        }
        fVar8 = (float10)iVar5;
        if (iVar5 < 0) {
          fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        puVar4[3] = (undefined4)gen_fl2bits((float)(fVar8 / (float10)*pfVar3));
        *puVar4 = REFG(undefined4, 0x1375558);
        puVar4[1] = REFG(undefined4, 0x137555c);
        puVar4[2] = REFG(undefined4, 0x1375560);
        puVar4 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + iVar6 + 0x30)));
        pfVar3 = &(*(float *)(gen_frame + 0x18));
        if (!(fVar7 < fVar1)) {
          pfVar3 = &(*(float *)(gen_frame + 0x14));
        }
        fVar8 = (float10)(iVar5 + 0x15180);
        if (iVar5 + 0x15180 < 0) {
          fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        iVar6 = iVar6 + 0x40;
        iVar5 = iVar5 + 0x54600;
        (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + -1;
        puVar4[3] = (undefined4)gen_fl2bits((float)(fVar8 / (float10)*pfVar3));
        *puVar4 = REFG(undefined4, 0x1375558);
        puVar4[1] = REFG(undefined4, 0x137555c);
        puVar4[2] = REFG(undefined4, 0x1375560);
      } while ((*(int *)(gen_frame + 0xc)) != 0);
    }
    if (uVar2 < param_1) {
      fVar7 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x14)) = (float)fVar7;
      iVar6 = uVar2 * 0x15180;
      iVar5 = uVar2 << 4;
      param_1 = param_1 - uVar2;
      do {
        puVar4 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + iVar5)));
        pfVar3 = &(*(float *)(gen_frame + 0x18));
        if (!((float10)(*(float *)(gen_frame + 0x14)) < fVar1)) {
          pfVar3 = &(*(float *)(gen_frame + 0x14));
        }
        fVar7 = (float10)iVar6;
        if (iVar6 < 0) {
          fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        iVar5 = iVar5 + 0x10;
        iVar6 = iVar6 + 0x15180;
        param_1 = param_1 + -1;
        puVar4[3] = (undefined4)gen_fl2bits((float)(fVar7 / (float10)*pfVar3));
        *puVar4 = REFG(undefined4, 0x1375558);
        puVar4[1] = REFG(undefined4, 0x137555c);
        uVar2 = REFG(undefined4, 0x1375560);
        puVar4[2] = REFG(undefined4, 0x1375560);
      } while (param_1 != 0);
    }
  }
  return uVar2;
}

/* ref: FUN_004b0430 */
uint F_004b0430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4b0430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float10 fVar1;
  uint uVar2;
  float * pfVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  ulonglong uVar9;
  
  uVar2 = 0;
  iVar6 = 0;
  *(undefined2 *)((int)this + 0x34) = 0;
  if ((param_1 == 0) || (*(ushort *)((int)this + 0x26) < param_1)) {
    uVar2 = 0;
    if (*(int *)((int)this + 0x14) != 0) {
      uVar9 = F_00406b30(*(int *)((int)this + 0x14));
      uVar2 = (uint)uVar9;
      *(undefined4 *)((int)this + 0x14) = 0;
      *(undefined2 *)((int)this + 0x26) = 0;
    }
  }
  if (param_1 != 0) {
    if (*(int *)((int)this + 0x14) == 0) {
      uVar2 = F_00406bb0(-(uint)((int)((ulonglong)param_1 * 0x1c >> 0x20) != 0) |
                           (uint)((ulonglong)param_1 * 0x1c),0,0);
      *(uint *)((int)this + 0x14) = uVar2;
      if (uVar2 == 0) {
        return 0;
      }
    }
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    fVar1 = (float10)1;
    uVar2 = 0;
    *(short *)((int)this + 0x26) = (short)param_1;
    if (3 < (int)param_1) {
      fVar7 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x14)) = (float)fVar7;
      fVar7 = (float10)(*(float *)(gen_frame + 0x14));
      (*(int *)(gen_frame + 0xc)) = (param_1 - 4 >> 2) + 1;
      uVar2 = (*(int *)(gen_frame + 0xc)) * 4;
      iVar5 = 0x2a300;
      do {
        puVar4 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + iVar6)));
        pfVar3 = &(*(float *)(gen_frame + 0x18));
        if (!(fVar7 < fVar1)) {
          pfVar3 = &(*(float *)(gen_frame + 0x14));
        }
        fVar8 = (float10)(iVar5 + -0x2a300);
        if (iVar5 + -0x2a300 < 0) {
          fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        puVar4[6] = (undefined4)gen_fl2bits((float)(fVar8 / (float10)*pfVar3));
        *puVar4 = REFG(undefined4, 0x1375564);
        puVar4[1] = REFG(undefined4, 0x1375568);
        puVar4[2] = REFG(undefined4, 0x137556c);
        puVar4[3] = REFG(undefined4, 0x1375570);
        puVar4[4] = REFG(undefined4, 0x1375574);
        puVar4[5] = REFG(undefined4, 0x1375578);
        puVar4 = ((undefined4 *)GEN_TOP((iVar6 + 0x1c + *(int *)((int)this + 0x14))));
        pfVar3 = &(*(float *)(gen_frame + 0x18));
        if (!(fVar7 < fVar1)) {
          pfVar3 = &(*(float *)(gen_frame + 0x14));
        }
        fVar8 = (float10)(iVar5 + -0x15180);
        if (iVar5 + -0x15180 < 0) {
          fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        puVar4[6] = (undefined4)gen_fl2bits((float)(fVar8 / (float10)*pfVar3));
        *puVar4 = REFG(undefined4, 0x1375564);
        puVar4[1] = REFG(undefined4, 0x1375568);
        puVar4[2] = REFG(undefined4, 0x137556c);
        puVar4[3] = REFG(undefined4, 0x1375570);
        puVar4[4] = REFG(undefined4, 0x1375574);
        puVar4[5] = REFG(undefined4, 0x1375578);
        puVar4 = ((undefined4 *)GEN_TOP((iVar6 + 0x38 + *(int *)((int)this + 0x14))));
        pfVar3 = &(*(float *)(gen_frame + 0x18));
        if (!(fVar7 < fVar1)) {
          pfVar3 = &(*(float *)(gen_frame + 0x14));
        }
        fVar8 = (float10)iVar5;
        if (iVar5 < 0) {
          fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        puVar4[6] = (undefined4)gen_fl2bits((float)(fVar8 / (float10)*pfVar3));
        *puVar4 = REFG(undefined4, 0x1375564);
        puVar4[1] = REFG(undefined4, 0x1375568);
        puVar4[2] = REFG(undefined4, 0x137556c);
        puVar4[3] = REFG(undefined4, 0x1375570);
        puVar4[4] = REFG(undefined4, 0x1375574);
        puVar4[5] = REFG(undefined4, 0x1375578);
        puVar4 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + iVar6 + 0x54)));
        pfVar3 = &(*(float *)(gen_frame + 0x18));
        if (!(fVar7 < fVar1)) {
          pfVar3 = &(*(float *)(gen_frame + 0x14));
        }
        fVar8 = (float10)(iVar5 + 0x15180);
        if (iVar5 + 0x15180 < 0) {
          fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        iVar6 = iVar6 + 0x70;
        iVar5 = iVar5 + 0x54600;
        (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + -1;
        puVar4[6] = (undefined4)gen_fl2bits((float)(fVar8 / (float10)*pfVar3));
        *puVar4 = REFG(undefined4, 0x1375564);
        puVar4[1] = REFG(undefined4, 0x1375568);
        puVar4[2] = REFG(undefined4, 0x137556c);
        puVar4[3] = REFG(undefined4, 0x1375570);
        puVar4[4] = REFG(undefined4, 0x1375574);
        puVar4[5] = REFG(undefined4, 0x1375578);
      } while ((*(int *)(gen_frame + 0xc)) != 0);
    }
    if (uVar2 < param_1) {
      fVar7 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x14)) = (float)fVar7;
      iVar5 = uVar2 * 0x15180;
      iVar6 = uVar2 * 0x1c;
      param_1 = param_1 - uVar2;
      do {
        puVar4 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + iVar6)));
        pfVar3 = &(*(float *)(gen_frame + 0x18));
        if (!((float10)(*(float *)(gen_frame + 0x14)) < fVar1)) {
          pfVar3 = &(*(float *)(gen_frame + 0x14));
        }
        fVar7 = (float10)iVar5;
        if (iVar5 < 0) {
          fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        iVar6 = iVar6 + 0x1c;
        iVar5 = iVar5 + 0x15180;
        param_1 = param_1 + -1;
        puVar4[6] = (undefined4)gen_fl2bits((float)(fVar7 / (float10)*pfVar3));
        *puVar4 = REFG(undefined4, 0x1375564);
        puVar4[1] = REFG(undefined4, 0x1375568);
        puVar4[2] = REFG(undefined4, 0x137556c);
        puVar4[3] = REFG(undefined4, 0x1375570);
        puVar4[4] = REFG(undefined4, 0x1375574);
        uVar2 = REFG(undefined4, 0x1375578);
        puVar4[5] = REFG(undefined4, 0x1375578);
      } while (param_1 != 0);
    }
  }
  return uVar2;
}

/* ref: FUN_004b0740 */
uint F_004b0740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4b0740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float10 fVar1;
  uint uVar2;
  float * pfVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  ulonglong uVar9;
  
  uVar2 = 0;
  iVar6 = 0;
  *(undefined2 *)((int)this + 0x36) = 0;
  if ((param_1 == 0) || (*(ushort *)((int)this + 0x28) < param_1)) {
    uVar2 = 0;
    if (*(int *)((int)this + 0x18) != 0) {
      uVar9 = F_00406b30(*(int *)((int)this + 0x18));
      uVar2 = (uint)uVar9;
      *(undefined4 *)((int)this + 0x18) = 0;
      *(undefined2 *)((int)this + 0x28) = 0;
    }
  }
  if (param_1 != 0) {
    if (*(int *)((int)this + 0x18) == 0) {
      uVar2 = F_00406bb0(-(uint)((int)((ulonglong)param_1 * 0x14 >> 0x20) != 0) |
                           (uint)((ulonglong)param_1 * 0x14),0,0);
      *(uint *)((int)this + 0x18) = uVar2;
      if (uVar2 == 0) {
        return 0;
      }
    }
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    fVar1 = (float10)1;
    uVar2 = 0;
    *(short *)((int)this + 0x28) = (short)param_1;
    if (3 < (int)param_1) {
      fVar7 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x14)) = (float)fVar7;
      fVar7 = (float10)(*(float *)(gen_frame + 0x14));
      (*(int *)(gen_frame + 0xc)) = (param_1 - 4 >> 2) + 1;
      uVar2 = (*(int *)(gen_frame + 0xc)) * 4;
      iVar5 = 0x2a300;
      do {
        puVar4 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + iVar6)));
        pfVar3 = &(*(float *)(gen_frame + 0x18));
        if (!(fVar7 < fVar1)) {
          pfVar3 = &(*(float *)(gen_frame + 0x14));
        }
        fVar8 = (float10)(iVar5 + -0x2a300);
        if (iVar5 + -0x2a300 < 0) {
          fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        puVar4[4] = (undefined4)gen_fl2bits((float)(fVar8 / (float10)*pfVar3));
        *puVar4 = REFG(undefined4, 0x13016f8);
        puVar4[1] = REFG(undefined4, 0x13016fc);
        puVar4[2] = REFG(undefined4, 0x1301700);
        puVar4[3] = REFG(undefined4, 0x1301704);
        puVar4 = ((undefined4 *)GEN_TOP((iVar6 + 0x14 + *(int *)((int)this + 0x18))));
        pfVar3 = &(*(float *)(gen_frame + 0x18));
        if (!(fVar7 < fVar1)) {
          pfVar3 = &(*(float *)(gen_frame + 0x14));
        }
        fVar8 = (float10)(iVar5 + -0x15180);
        if (iVar5 + -0x15180 < 0) {
          fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        puVar4[4] = (undefined4)gen_fl2bits((float)(fVar8 / (float10)*pfVar3));
        *puVar4 = REFG(undefined4, 0x13016f8);
        puVar4[1] = REFG(undefined4, 0x13016fc);
        puVar4[2] = REFG(undefined4, 0x1301700);
        puVar4[3] = REFG(undefined4, 0x1301704);
        puVar4 = ((undefined4 *)GEN_TOP((iVar6 + 0x28 + *(int *)((int)this + 0x18))));
        pfVar3 = &(*(float *)(gen_frame + 0x18));
        if (!(fVar7 < fVar1)) {
          pfVar3 = &(*(float *)(gen_frame + 0x14));
        }
        fVar8 = (float10)iVar5;
        if (iVar5 < 0) {
          fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        puVar4[4] = (undefined4)gen_fl2bits((float)(fVar8 / (float10)*pfVar3));
        *puVar4 = REFG(undefined4, 0x13016f8);
        puVar4[1] = REFG(undefined4, 0x13016fc);
        puVar4[2] = REFG(undefined4, 0x1301700);
        puVar4[3] = REFG(undefined4, 0x1301704);
        puVar4 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + iVar6 + 0x3c)));
        pfVar3 = &(*(float *)(gen_frame + 0x18));
        if (!(fVar7 < fVar1)) {
          pfVar3 = &(*(float *)(gen_frame + 0x14));
        }
        fVar8 = (float10)(iVar5 + 0x15180);
        if (iVar5 + 0x15180 < 0) {
          fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        iVar6 = iVar6 + 0x50;
        iVar5 = iVar5 + 0x54600;
        (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + -1;
        puVar4[4] = (undefined4)gen_fl2bits((float)(fVar8 / (float10)*pfVar3));
        *puVar4 = REFG(undefined4, 0x13016f8);
        puVar4[1] = REFG(undefined4, 0x13016fc);
        puVar4[2] = REFG(undefined4, 0x1301700);
        puVar4[3] = REFG(undefined4, 0x1301704);
      } while ((*(int *)(gen_frame + 0xc)) != 0);
    }
    if (uVar2 < param_1) {
      fVar7 = (float10)(int)param_1;
      if ((int)param_1 < 0) {
        fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x14)) = (float)fVar7;
      iVar5 = uVar2 * 0x15180;
      iVar6 = uVar2 * 0x14;
      param_1 = param_1 - uVar2;
      do {
        puVar4 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + iVar6)));
        pfVar3 = &(*(float *)(gen_frame + 0x18));
        if (!((float10)(*(float *)(gen_frame + 0x14)) < fVar1)) {
          pfVar3 = &(*(float *)(gen_frame + 0x14));
        }
        fVar7 = (float10)iVar5;
        if (iVar5 < 0) {
          fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        iVar6 = iVar6 + 0x14;
        iVar5 = iVar5 + 0x15180;
        param_1 = param_1 + -1;
        puVar4[4] = (undefined4)gen_fl2bits((float)(fVar7 / (float10)*pfVar3));
        *puVar4 = REFG(undefined4, 0x13016f8);
        puVar4[1] = REFG(undefined4, 0x13016fc);
        puVar4[2] = REFG(undefined4, 0x1301700);
        uVar2 = REFG(undefined4, 0x1301704);
        puVar4[3] = REFG(undefined4, 0x1301704);
      } while (param_1 != 0);
    }
  }
  return uVar2;
}

/* ref: FUN_004b0a00 */
byte F_004b0a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4b0a00u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  int iVar2;
  int iVar3;
  int aiStackY_94 [24];
  undefined4 uStackY_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  iVar3 = param_1[1];
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  if (iVar3 != 0) {
    iVar2 = *param_1 + (int)param_1;
    do {
      aiStackY_94[*(int *)(iVar2 + 8)] = iVar2;
      iVar2 = iVar2 + 0xc;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iStack_28 = param_2 + 0x1c;
  iStack_2c = param_2;
  uStack_30 = local_20;
  uStackY_34 = 0x4b0a52;
  bVar1 = F_004c3010(local_20,param_2,param_2 + 0x1c);
  if (bVar1 != 0) {
    iStack_28 = param_2 + 0x1e;
    iStack_2c = param_2 + 4;
    uStack_30 = local_14;
    uStackY_34 = 0x4b0a71;
    bVar1 = F_004c3100(local_14,param_2 + 4,param_2 + 0x1e);
    if (bVar1 != 0) {
      iStack_28 = param_2 + 0x20;
      iStack_2c = param_2 + 8;
      uStack_30 = local_1c;
      uStackY_34 = 0x4b0a89;
      bVar1 = F_004c31d0(local_1c,param_2 + 8,param_2 + 0x20);
      if (bVar1 != 0) {
        iStack_28 = param_2 + 0x22;
        iStack_2c = param_2 + 0xc;
        uStack_30 = local_18;
        uStackY_34 = 0x4b0aa1;
        bVar1 = F_004c32a0(local_18,param_2 + 0xc,param_2 + 0x22);
        if (bVar1 != 0) {
          iStack_28 = param_2 + 0x24;
          iStack_2c = param_2 + 0x10;
          uStack_30 = local_10;
          uStackY_34 = 0x4b0ab9;
          bVar1 = F_004c3380(local_10,param_2 + 0x10,param_2 + 0x24);
          if (bVar1 != 0) {
            iStack_28 = param_2 + 0x26;
            iStack_2c = param_2 + 0x14;
            uStack_30 = local_c;
            uStackY_34 = 0x4b0ad1;
            bVar1 = F_004c34c0(local_c,param_2 + 0x14,param_2 + 0x26);
            if (bVar1 != 0) {
              iStack_28 = param_2 + 0x28;
              iStack_2c = param_2 + 0x18;
              uStack_30 = local_8;
              uStackY_34 = 0x4b0ae9;
              bVar1 = F_004c35c0(local_8,param_2 + 0x18,param_2 + 0x28);
              return bVar1 != 0;
            }
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_004b0b00 */
uint F_004b0b00(unsigned int gen_a0)
{
  GEN_ENTER(0x4b0b00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int * piVar7;
  int * piVar8;
  undefined4 * puVar9;
  undefined4 * local_8;
  
  piVar2 = (int *)F_004ae620();
  if (piVar2 != (int *)0x0) {
    local_8 = (undefined4 *)(param_1 + 0xac);
    piVar7 = (int *)(param_1 + 8);
    piVar8 = piVar2 + 0x42;
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar8 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar8 = piVar8 + 1;
    }
    uVar6 = 0;
    piVar7 = piVar2;
    do {
      piVar7 = piVar7 + 2;
      F_004a4880(piVar7,*(undefined4 *)(param_1 + 0x2c + uVar6 * 4));
      uVar3 = 0;
      if (*(int *)(param_1 + 0x2c + uVar6 * 4) != 0) {
        iVar4 = 0;
        do {
          puVar1 = local_8 + 0x1c;
          puVar9 = (undefined4 *)(*piVar7 + iVar4);
          for (iVar5 = 0x1c; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar9 = *local_8;
            local_8 = local_8 + 1;
            puVar9 = puVar9 + 1;
          }
          uVar3 = uVar3 + 1;
          iVar4 = iVar4 + 0x70;
          local_8 = puVar1;
        } while (uVar3 < *(uint *)(param_1 + 0x2c + uVar6 * 4));
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x20);
    return (uint)piVar2;
  }
  return 0;
}

/* ref: FUN_004b0ba0 */
uint F_004b0ba0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4b0ba0u, gen_a0, 0u, 0u, 0u);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  float in_xmm3 = (float)gen_a1;
  float in_xmm5 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined1 gen_out[0x4];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  undefined4 * puVar8;
  int iVar9;
  float10 fVar10;
  
  uVar2 = REFG(float, 0x1090708);
  uVar1 = REFG(float, 0x1087f04);
  uVar7 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  *(float *)((int)in_ecx + 0x14c) = param_5;
  *(undefined4 *)((int)in_ecx + 0x1ac) = 0;
  *(undefined4 *)((int)in_ecx + 0x1b0) = 0;
  *(undefined4 *)((int)in_ecx + 0x1b4) = 0;
  *(undefined4 *)((int)in_ecx + 0x1b8) = uVar1;
  *(undefined4 *)((int)in_ecx + 200) = uVar2;
  uVar2 = REFG(float, 0x1094870);
  *(undefined4 *)((int)in_ecx + 0x1bc) = uVar1;
  *(undefined4 *)((int)in_ecx + 0xc0) = 0;
  *(undefined4 *)((int)in_ecx + 0xc4) = 0;
  *(undefined4 *)((int)in_ecx + 0xd0) = *(undefined4 *)((int)in_ecx + 0xc0);
  iVar9 = 0;
  *(undefined4 *)((int)in_ecx + 0xd4) = *(undefined4 *)((int)in_ecx + 0xc4);
  puVar8 = (undefined4 *)((int)in_ecx + 0x100);
  *(undefined4 *)((int)in_ecx + 0xd8) = *(undefined4 *)((int)in_ecx + 200);
  *(undefined4 *)((int)in_ecx + 0xdc) = *(undefined4 *)((int)in_ecx + 0xcc);
  *(undefined4 *)((int)in_ecx + 0x158) = uVar2;
  *(undefined4 *)((int)in_ecx + 0x164) = REFG(float, 0x109486c);
  *(undefined4 *)((int)in_ecx + 0x168) = REFG(float, 0x1094868);
  *(undefined4 *)((int)in_ecx + 0x16c) = REFG(float, 0x1094864);
  *(undefined4 *)((int)in_ecx + 0x170) = REFG(float, 0x1094860);
  fVar5 = REFG(float, 0x109485c);
  *(undefined4 *)((int)in_ecx + 0xe0) = 0;
  *(undefined4 *)((int)in_ecx + 0xe4) = 0;
  *(undefined4 *)((int)in_ecx + 0xe8) = uVar1;
  *(undefined4 *)((int)in_ecx + 0xf0) = 0;
  *(float *)((int)in_ecx + 0x174) = fVar5;
  *(undefined4 *)((int)in_ecx + 0x178) = 5;
  *(undefined4 *)((int)in_ecx + 0x17c) = 1;
  *(undefined4 *)((int)in_ecx + 0x180) = 0xc;
  *(undefined4 *)((int)in_ecx + 0x184) = 0;
  *(undefined4 *)((int)in_ecx + 0x188) = 0;
  *(undefined4 *)((int)in_ecx + 0x10c) = 0;
  *(undefined4 *)((int)in_ecx + 0x110) = 0;
  *(undefined4 *)((int)in_ecx + 0x114) = 0;
  *(undefined4 *)((int)in_ecx + 0x118) = 0;
  *(undefined2 *)((int)in_ecx + 0x150) = 0x101;
  *(undefined1 *)((int)in_ecx + 0x152) = 1;
  do {
    puVar8[-3] = 0;
    *puVar8 = 0;
    *(undefined1 *)((int)in_ecx + iVar9 + 0x153) = 1;
    puVar8[7] = 0;
    puVar8[10] = 0;
    puVar8[0xd] = 0;
    puVar8[0x30] = uVar1;
    puVar8[0x33] = uVar1;
    iVar9 = iVar9 + 1;
    puVar8 = puVar8 + 1;
  } while (iVar9 < 3);
  fVar10 = (float10)*(double *)&REFG(undefined, 0x1094600);
  *(float *)((int)in_ecx + 0x140) = REFG(float, 0x1094858);
  *(float *)((int)in_ecx + 0x144) = REFG(float, 0x1094848);
  *(float *)((int)in_ecx + 0x148) = REFG(float, 0x1094844);
  uVar1 = REFG(float, 0x1094840);
  *(undefined4 *)((int)in_ecx + 0x18c) = REFG(float, 0x1094840);
  *(undefined4 *)((int)in_ecx + 0x194) = uVar1;
  *(undefined4 *)((int)in_ecx + 0x198) = REFG(float, 0x109483c);
  *(undefined4 *)((int)in_ecx + 0x19c) = REFG(float, 0x1094838);
  fVar4 = REFG(float, 0x1094834);
  *(float *)((int)in_ecx + 0x1a0) = REFG(float, 0x1094834);
  *(undefined4 *)((int)in_ecx + 0x1a8) = 0;
  fVar10 = F_00c4cb50(0.0,fVar4,fVar5,in_xmm3,in_xmm5,in_xmm7,fVar10);
  uVar2 = REFG(float, 0x10920a4);
  uVar1 = REFG(float, 0x1087f04);
  *(float *)((int)in_ecx + 400) = (float)fVar10;
  fVar5 = REFG(float, 0x1094844);
  uVar3 = REFG(float, 0x1094830);
  *(undefined4 *)((int)in_ecx + 0x98) = uVar2;
  fVar4 = REFG(float, 0x1094848);
  *(undefined4 *)((int)in_ecx + 0x9c) = 0;
  fVar6 = REFG(float, 0x1094858);
  *(undefined4 *)((int)in_ecx + 0xac) = 0;
  *(undefined4 *)((int)in_ecx + 0xb0) = 0;
  uVar2 = REFG(float, 0x109482c);
  *(undefined4 *)((int)in_ecx + 0x1a4) = REFG(float, 0x109482c);
  *(undefined4 *)((int)in_ecx + 0x160) = uVar2;
  uVar2 = REFG(float, 0x1094828);
  *(undefined4 *)((int)in_ecx + 0x90) = 0;
  *(undefined4 *)((int)in_ecx + 0x94) = 0;
  *(undefined4 *)((int)in_ecx + 0xa0) = uVar1;
  *(undefined4 *)((int)in_ecx + 0xa4) = uVar3;
  *(undefined4 *)((int)in_ecx + 0xa8) = uVar1;
  *(undefined4 *)((int)in_ecx + 0x15c) = uVar2;
  *(undefined2 *)((int)in_ecx + 0x151) = 0x101;
  F_004ac8e0(in_ecx,fVar6,fVar4,fVar5);
  uVar1 = REFG(float, 0x1094824);
  *(undefined4 *)((int)in_ecx + 0xb4) = REFG(float, 0x1094824);
  *(undefined4 *)((int)in_ecx + 0xb8) = uVar1;
  *(undefined4 *)((int)in_ecx + 0xbc) = REFG(float, 0x1094820);
  F_00c48350(in_ecx,0,0x80);
  *(undefined4 *)((int)in_ecx + 0x80) = 0;
  *(undefined4 *)((int)in_ecx + 0x84) = 0;
  *(undefined4 *)((int)in_ecx + 0x88) = 0;
  *(undefined4 *)((int)in_ecx + 0x8c) = 0;
  F_00c47745(uVar7 ^ (uint)(uint)(gen_out + 0x0));
  return (uint)in_ecx;
}

/* ref: FUN_004b0f30 */
uint F_004b0f30(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4b0f30u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  double dVar1;
  float fVar2;
  float * pfVar3;
  int * piVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  
  iVar6 = (int)(*(float *)&gen_args[1]);
  (*(float *)(gen_frame + 0x14)) = gen_bits2f(iVar6);
  fVar8 = 2.8026e-45;
  fVar5 = 1.4013e-45;
  fVar9 = ((float10)(*(float *)&gen_args[1]) - (float10)iVar6) * (float10)*(double *)&REFG(undefined, 0x10943d8);
  (*(float *)(gen_frame + 0x18)) = gen_bits2f((int)fVar9);
  (*(float *)&gen_args[1]) = 2.8026e-45;
  (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF((((float10)(float)fVar9 - (float10)(int)gen_fl2bits((*(float *)(gen_frame + 0x18)))) *
                   (float10)*(double *)&REFG(undefined, 0x10943d8))));
  fVar7 = gen_bits2f(iVar6 % 0x18);
  (*(float *)(gen_frame + 0x8)) = fVar7;
  fVar2 = gen_bits2f(iVar6 / 0x18 + 1);
  piVar4 = &REFG(undefined4, 0x1092c00);
  do {
    if ((piVar4[-1] < (int)gen_fl2bits(fVar2)) && ((int)gen_fl2bits(fVar2) <= *piVar4)) {
      fVar5 = gen_bits2f((int)gen_fl2bits(fVar8) + -1);
      fVar2 = gen_bits2f((int)gen_fl2bits(fVar2) - piVar4[-1]);
    }
    if ((*piVar4 < (int)gen_fl2bits(fVar2)) && ((int)gen_fl2bits(fVar2) <= piVar4[1])) {
      fVar2 = gen_bits2f((int)gen_fl2bits(fVar2) - *piVar4);
      fVar5 = fVar8;
    }
    if ((piVar4[1] < (int)gen_fl2bits(fVar2)) && ((int)gen_fl2bits(fVar2) <= piVar4[2])) {
      fVar5 = gen_bits2f((int)gen_fl2bits(fVar8) + 1);
      fVar2 = gen_bits2f((int)gen_fl2bits(fVar2) - piVar4[1]);
    }
    if ((piVar4[2] < (int)gen_fl2bits(fVar2)) && ((int)gen_fl2bits(fVar2) <= piVar4[3])) {
      fVar5 = gen_bits2f((int)gen_fl2bits(fVar8) + 2);
      fVar2 = gen_bits2f((int)gen_fl2bits(fVar2) - piVar4[2]);
    }
    if ((piVar4[3] < (int)gen_fl2bits(fVar2)) && ((int)gen_fl2bits(fVar2) <= piVar4[4])) {
      fVar5 = gen_bits2f((int)gen_fl2bits(fVar8) + 3);
      fVar2 = gen_bits2f((int)gen_fl2bits(fVar2) - piVar4[3]);
    }
    if ((piVar4[4] < (int)gen_fl2bits(fVar2)) && ((int)gen_fl2bits(fVar2) <= piVar4[5])) {
      fVar5 = gen_bits2f((int)gen_fl2bits(fVar8) + 4);
      fVar2 = gen_bits2f((int)gen_fl2bits(fVar2) - piVar4[4]);
    }
    fVar8 = gen_bits2f((int)gen_fl2bits(fVar8) + 6);
    piVar4 = piVar4 + 6;
    (*(float *)&gen_args[1]) = gen_bits2f((int)gen_fl2bits((*(float *)&gen_args[1])) + -1);
  } while ((*(float *)&gen_args[1]) != 0.0);
  (*(float *)&gen_args[1]) = fVar5;
  (*(float *)(gen_frame + 0x10)) = 1.68156e-44;
  (*(float *)(gen_frame + 0xc)) = 1.4013e-45;
  if ((int)gen_fl2bits(fVar5) < 0xc) {
    pfVar3 = &(*(float *)&gen_args[1]);
    if ((int)gen_fl2bits(fVar5) < 2) {
      pfVar3 = &(*(float *)(gen_frame + 0xc));
    }
  }
  else {
    pfVar3 = &(*(float *)(gen_frame + 0x10));
  }
  fVar5 = *pfVar3;
  *(float *)((*(int *)&gen_args[0]) + 0x178) = fVar5;
  *(undefined1 *)((*(int *)&gen_args[0]) + 0x150) = 1;
  (*(float *)(gen_frame + 0xc)) = fVar2;
  if ((int)gen_fl2bits(fVar5) < 0xc) {
    (*(float *)&gen_args[1]) = gen_bits2f((&REFG(undefined4, 0x1092bfc))[(int)gen_fl2bits(fVar5)] -
                         *(int *)(&REFG(undefined, 0x1092bf8) + (int)gen_fl2bits(fVar5) * 4));
  }
  else {
    (*(float *)&gen_args[1]) = 4.34403e-44;
  }
  (*(float *)(gen_frame + 0x10)) = 1.4013e-45;
  pfVar3 = &(*(float *)(gen_frame + 0xc));
  if ((int)gen_fl2bits((*(float *)&gen_args[1])) <= (int)gen_fl2bits(fVar2)) {
    pfVar3 = &(*(float *)&gen_args[1]);
  }
  if ((int)gen_fl2bits(*pfVar3) < 2) {
    pfVar3 = &(*(float *)(gen_frame + 0x10));
  }
  *(float *)((*(int *)&gen_args[0]) + 0x17c) = *pfVar3;
  *(undefined1 *)((*(int *)&gen_args[0]) + 0x150) = 1;
  (*(float *)&gen_args[1]) = fVar7;
  (*(float *)(gen_frame + 0x8)) = 3.22299e-44;
  (*(float *)(gen_frame + 0xc)) = 0.0;
  if ((int)gen_fl2bits(fVar7) < 0x17) {
    pfVar3 = &(*(float *)&gen_args[1]);
    if ((int)gen_fl2bits(fVar7) < 1) {
      pfVar3 = &(*(float *)(gen_frame + 0xc));
    }
  }
  else {
    pfVar3 = &(*(float *)(gen_frame + 0x8));
  }
  *(float *)((*(int *)&gen_args[0]) + 0x180) = *pfVar3;
  *(undefined1 *)((*(int *)&gen_args[0]) + 0x150) = 1;
  dVar1 = *(double *)&REFG(undefined, 0x1094798);
  (*(float *)&gen_args[1]) = (*(float *)(gen_frame + 0x18));
  (*(float *)(gen_frame + 0x8)) = 8.26766e-44;
  (*(float *)(gen_frame + 0xc)) = 0.0;
  if ((int)gen_fl2bits((*(float *)(gen_frame + 0x18))) < 0x3b) {
    pfVar3 = &(*(float *)&gen_args[1]);
    if ((int)gen_fl2bits((*(float *)(gen_frame + 0x18))) < 1) {
      pfVar3 = &(*(float *)(gen_frame + 0xc));
    }
  }
  else {
    pfVar3 = &(*(float *)(gen_frame + 0x8));
  }
  (*(float *)&gen_args[1]) = (*(float *)(gen_frame + 0x14));
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x10947a0);
  *(float *)((*(int *)&gen_args[0]) + 0x184) = *pfVar3;
  *(undefined1 *)((*(int *)&gen_args[0]) + 0x150) = 1;
  (*(float *)(gen_frame + 0xc)) = 0.0;
  pfVar3 = &(*(float *)&gen_args[1]);
  if (!((double)(*(float *)(gen_frame + 0x14)) < dVar1)) {
    pfVar3 = &(*(float *)(gen_frame + 0x8));
  }
  if (!(0.0 < *pfVar3)) {
    pfVar3 = &(*(float *)(gen_frame + 0xc));
  }
  fVar5 = *pfVar3;
  *(undefined1 *)((*(int *)&gen_args[0]) + 0x150) = 1;
  *(float *)((*(int *)&gen_args[0]) + 0x188) = fVar5;
  return (uint)pfVar3;
}

/* ref: FUN_004b1150 */
uint F_004b1150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4b1150u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  int iVar2;
  undefined * PTR32 * ppvVar3;
  
  iVar2 = (*(int *)&gen_args[2]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x178))) != (*(undefined * PTR32 *)&gen_args[1])) || (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x17c))) != (*(int *)&gen_args[2]))) {
    (*(int *)&gen_args[2]) = 0xc;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
    if ((int)(*(undefined * PTR32 *)&gen_args[1]) < 0xc) {
      ppvVar3 = &(*(undefined * PTR32 *)&gen_args[1]);
      if ((int)(*(undefined * PTR32 *)&gen_args[1]) < 2) {
        ppvVar3 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
      }
    }
    else {
      ppvVar3 = (undefined * PTR32 *)&(*(int *)&gen_args[2]);
    }
    pvVar1 = *ppvVar3;
    *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x178))) = pvVar1;
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x150))) = 1;
    (*(int *)&gen_args[2]) = iVar2;
    if ((int)pvVar1 < 0xc) {
      (*(undefined * PTR32 *)&gen_args[1]) = ((undefined *)GEN_TOP(((&REFG(undefined4, 0x1092bfc))[(int)pvVar1] - *(int *)(&REFG(undefined, 0x1092bf8) + (int)((int)(uintptr_t)pvVar1) * 4))));
    }
    else {
      (*(undefined * PTR32 *)&gen_args[1]) = (undefined *)0x1f;
    }
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
    ppvVar3 = (undefined * PTR32 *)&(*(int *)&gen_args[2]);
    if ((int)(*(undefined * PTR32 *)&gen_args[1]) <= iVar2) {
      ppvVar3 = &(*(undefined * PTR32 *)&gen_args[1]);
    }
    if ((int)*ppvVar3 < 2) {
      ppvVar3 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
    }
    (*(undefined * PTR32 *)&gen_args[1]) = *ppvVar3;
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x150))) = 1;
    *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x17c))) = (*(undefined * PTR32 *)&gen_args[1]);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[1]);
}

/* ref: FUN_004b11f0 */
unsigned int F_004b11f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4b11f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  uint * puVar5;
  float * pfVar6;
  bool bVar7;
  
  ((uint *)(gen_frame + 0x4))[1] = 0x17;
  ((uint *)(gen_frame + 0x4))[0] = 0;
  if ((int)(*(uint *)&gen_args[1]) < 0x17) {
    puVar5 = &(*(uint *)&gen_args[1]);
    if ((int)(*(uint *)&gen_args[1]) < 1) {
      puVar5 = ((uint *)(gen_frame + 0x4));
    }
  }
  else {
    puVar5 = ((uint *)(gen_frame + 0x4)) + 1;
  }
  uVar1 = *puVar5;
  (*(uint *)&gen_args[1]) = 0x3b;
  ((uint *)(gen_frame + 0x4))[0] = 0;
  if ((int)(*(uint *)&gen_args[2]) < 0x3b) {
    puVar5 = &(*(uint *)&gen_args[2]);
    if ((int)(*(uint *)&gen_args[2]) < 1) {
      puVar5 = ((uint *)(gen_frame + 0x4));
    }
  }
  else {
    puVar5 = &(*(uint *)&gen_args[1]);
  }
  uVar2 = *puVar5;
  dVar3 = (double)(*(float *)&gen_args[3]);
  if (((*(uint *)((*(int *)&gen_args[0]) + 0x180) == uVar1) && (*(uint *)((*(int *)&gen_args[0]) + 0x184) == uVar2)) &&
     (bVar7 = GEN_ISNAN((double)*(float *)((*(int *)&gen_args[0]) + 0x188)) || GEN_ISNAN(dVar3),
     bVar7 != (bVar7 || (double)*(float *)((*(int *)&gen_args[0]) + 0x188) == dVar3))) {
    return 0;
  }
  (*(uint *)&gen_args[1]) = uVar1;
  (*(uint *)&gen_args[2]) = 0x17;
  ((uint *)(gen_frame + 0x4))[0] = 0;
  if ((int)uVar1 < 0x17) {
    puVar5 = &(*(uint *)&gen_args[1]);
    if ((int)uVar1 < 1) {
      puVar5 = ((uint *)(gen_frame + 0x4));
    }
  }
  else {
    puVar5 = &(*(uint *)&gen_args[2]);
  }
  *(uint *)((*(int *)&gen_args[0]) + 0x180) = *puVar5;
  *(undefined1 *)((*(int *)&gen_args[0]) + 0x150) = 1;
  dVar4 = *(double *)&REFG(undefined, 0x1094798);
  (*(uint *)&gen_args[1]) = uVar2;
  (*(uint *)&gen_args[2]) = 0x3b;
  ((uint *)(gen_frame + 0x4))[0] = 0;
  if ((int)uVar2 < 0x3b) {
    puVar5 = &(*(uint *)&gen_args[1]);
    if ((int)uVar2 < 1) {
      puVar5 = ((uint *)(gen_frame + 0x4));
    }
  }
  else {
    puVar5 = &(*(uint *)&gen_args[2]);
  }
  (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((*(float *)&gen_args[3]));
  (*(uint *)&gen_args[2]) = REFG(float, 0x10947a0);
  *(uint *)((*(int *)&gen_args[0]) + 0x184) = *puVar5;
  *(undefined1 *)((*(int *)&gen_args[0]) + 0x150) = 1;
  (*(float *)&gen_args[3]) = 0.0;
  pfVar6 = (float *)&(*(uint *)&gen_args[1]);
  if (!(dVar3 < dVar4)) {
    pfVar6 = (float *)&(*(uint *)&gen_args[2]);
  }
  if (!(0.0 < *pfVar6)) {
    pfVar6 = &(*(float *)&gen_args[3]);
  }
  *(float *)((*(int *)&gen_args[0]) + 0x188) = *pfVar6;
  *(undefined1 *)((*(int *)&gen_args[0]) + 0x150) = 1;
  return 0;
}

/* ref: FUN_004b1340 */
uint F_004b1340(unsigned int gen_a0)
{
  GEN_ENTER(0x4b1340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_004adb00(this);
  return (uint)this;
}

/* ref: FUN_004b1ce0 */
uint F_004b1ce0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x4b1ce0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  float in_xmm3 = (float)gen_a1;
  float in_xmm5 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1094644));
  F_004b0ba0(in_ecx + 4,in_xmm3,in_xmm5,in_xmm7,(float)(float10)0,0);
  uVar1 = REFG(float, 0x1087f04);
  in_ecx[299] = GEN_FLT_TO(in_ecx[299], REFG(float, 0x1094880));
  in_ecx[300] = GEN_FLT_TO(in_ecx[300], REFG(float, 0x10928e4));
  uVar2 = REFG(float, 0x10920a4);
  in_ecx[0x129] = 0;
  in_ecx[0x12a] = uVar1;
  in_ecx[0x12d] = uVar2;
  in_ecx[0x12e] = REFG(undefined4, 0x1375a88);
  in_ecx[0x12f] = REFG(undefined4, 0x1375a8c);
  in_ecx[0x130] = REFG(undefined4, 0x1375a90);
  in_ecx[0x131] = uVar1;
  in_ecx[0x132] = uVar2;
  *(undefined1 *)(in_ecx + 0x133) = 0;
  in_ecx[0x134] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_004b3ed0 */
uint F_004b3ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x4b3ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_004c3df0((undefined *)((int)this + 0x38));
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  return (uint)this;
}

/* ref: FUN_004b3f10 */
byte F_004b3f10(unsigned int gen_a0)
{
  GEN_ENTER(0x4b3f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined2 *)((int)this + 0x2a) = 0;
  if (*(int *)this != 0) {
    F_00406b30(*(int *)this);
    *(undefined4 *)this = 0;
    *(undefined2 *)((int)this + 0x1c) = 0;
  }
  *(undefined2 *)((int)this + 0x2e) = 0;
  if (*(int *)((int)this + 8) != 0) {
    F_00406b30(*(int *)((int)this + 8));
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined2 *)((int)this + 0x20) = 0;
  }
  *(undefined2 *)((int)this + 0x2c) = 0;
  if (*(int *)((int)this + 4) != 0) {
    F_00406b30(*(int *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined2 *)((int)this + 0x1e) = 0;
  }
  *(undefined2 *)((int)this + 0x30) = 0;
  if (*(int *)((int)this + 0xc) != 0) {
    F_00406b30(*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined2 *)((int)this + 0x22) = 0;
  }
  *(undefined2 *)((int)this + 0x32) = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    F_00406b30(*(int *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined2 *)((int)this + 0x24) = 0;
  }
  *(undefined2 *)((int)this + 0x34) = 0;
  if (*(int *)((int)this + 0x14) != 0) {
    F_00406b30(*(int *)((int)this + 0x14));
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined2 *)((int)this + 0x26) = 0;
  }
  *(undefined2 *)((int)this + 0x36) = 0;
  if (*(int *)((int)this + 0x18) != 0) {
    F_00406b30(*(int *)((int)this + 0x18));
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined2 *)((int)this + 0x28) = 0;
  }
  F_004c3df0((undefined *)((int)this + 0x38));
  return 1;
}

/* ref: FUN_004b4000 */
uint F_004b4000(unsigned int gen_a0)
{
  GEN_ENTER(0x4b4000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined2 *)((int)this + 0x2a) = 0;
  if (*(int *)this != 0) {
    F_00406b30(*(int *)this);
    *(undefined4 *)this = 0;
    *(undefined2 *)((int)this + 0x1c) = 0;
  }
  *(undefined2 *)((int)this + 0x2e) = 0;
  if (*(int *)((int)this + 8) != 0) {
    F_00406b30(*(int *)((int)this + 8));
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined2 *)((int)this + 0x20) = 0;
  }
  *(undefined2 *)((int)this + 0x2c) = 0;
  if (*(int *)((int)this + 4) != 0) {
    F_00406b30(*(int *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined2 *)((int)this + 0x1e) = 0;
  }
  *(undefined2 *)((int)this + 0x30) = 0;
  if (*(int *)((int)this + 0xc) != 0) {
    F_00406b30(*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined2 *)((int)this + 0x22) = 0;
  }
  *(undefined2 *)((int)this + 0x32) = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    F_00406b30(*(int *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined2 *)((int)this + 0x24) = 0;
  }
  *(undefined2 *)((int)this + 0x34) = 0;
  if (*(int *)((int)this + 0x14) != 0) {
    F_00406b30(*(int *)((int)this + 0x14));
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined2 *)((int)this + 0x26) = 0;
  }
  *(undefined2 *)((int)this + 0x36) = 0;
  uVar1 = 0;
  if (*(int *)((int)this + 0x18) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 0x18));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined2 *)((int)this + 0x28) = 0;
  }
  return uVar1;
}

/* ref: FUN_004b40e0 */
uint F_004b40e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4b40e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x109489c));
  *(undefined2 *)((int)this + 0x12) = 0xffff;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 0x10) = 0;
  F_004c3df0((undefined *)((int)this + 0x14));
  *(undefined4 *)((int)this + 0x8c) = 0;
  return (uint)this;
}

/* ref: FUN_004b4130 */
unsigned int F_004b4130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4b4130u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(int *)&gen_args[1]) != 0) {
    uVar1 = *(int *)(&REFG(undefined, 0x1092bf8) + (int)*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x178))) * 4) +
            *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x17c))) + (*(int *)&gen_args[1]);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x178)));
    if ((int)uVar1 < 0x16e) {
      if ((int)uVar1 < 1) {
        uVar1 = 0x16d - (int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) % 0x16d;
      }
    }
    else {
      iVar2 = (int)((ulonglong)((longlong)(int)uVar1 * 0x4c73064f) >> 0x20) - uVar1;
      uVar1 = uVar1 + ((iVar2 >> 8) - (iVar2 >> 0x1f)) * 0x16d;
    }
    (*(int *)&gen_args[1]) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x17c)));
    F_004a2b50(uVar1,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(int *)&gen_args[1]));
    F_004b1150((*(undefined * PTR32 *)&gen_args[0]),(*(undefined * PTR32 *)(gen_frame + 0x8)),(*(int *)&gen_args[1]));
  }
  return 0;
}

/* ref: FUN_004b41c0 */
uint F_004b41c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4b41c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  
  uVar1 = 0;
  param_2 = ((float)GEN_TOF(((float10)((float)GEN_TOF((((float10)GEN_TOD(((*(int *)(param_1 + 0x184) +
                                               *(int *)(param_1 + 0x180) * 0x3c) * 0x3c))) +
                                    (float10)*(float *)(param_1 + 0x188)))) + (float10)param_2)));
  if ((float10)REFG(float, 0x10948ac) <= (float10)param_2) {
    fVar2 = F_00c4d3da((float10)*(double *)&REFG(double, 0x10946a0));
    fVar2 = (float10)(float)fVar2;
    uVar1 = 1;
  }
  else {
    if (!(param_2 < 0.0)) goto LAB_004b425d;
    fVar2 = F_00c4d3da((float10)*(double *)&REFG(double, 0x10946a0));
    uVar1 = 0xffffffff;
    fVar2 = (float10)*(double *)&REFG(double, 0x10946a0) - (float10)(float)fVar2;
  }
  param_2 = (float)fVar2;
LAB_004b425d: ;
  fVar2 = F_00c4d3da((float10)*(double *)&REFG(undefined, 0x10943e0));
  fVar3 = F_00c4d3da((float10)*(double *)&REFG(undefined, 0x10943d8));
  F_004b11f0(param_1,(int)param_2 / 0xe10,(int)fVar2 / 0x3c,(float)fVar3);
  return uVar1;
}

/* ref: FUN_004b42d0 */
uint F_004b42d0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x4b42d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  ushort * puVar1;
  undefined * this;
  int * piVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 uVar5;
  undefined4 * puVar6;
  int iVar7;
  int * piVar8;
  bool bVar9;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  this = *(undefined * PTR32 *)(REFG(int, 0x1371290) + 4);
  puVar6 = (undefined4 *)0x0;
  if (this == (undefined *)0x0) {
LAB_004b43e1: ;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    uVar3 = F_006a4ec0(this,param_1 + 4,0,1);
    if (uVar3 == 0) {
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((int)this + 0x10c);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)((int)this + 0x110);
LAB_004b4326: ;
      iVar7 = *(int *)((int)this + 0xfc);
      if (iVar7 == 0) goto LAB_004b43e1;
    }
    else {
      iVar7 = *(int *)(uVar3 + 0x7c);
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(uVar3 + 0x8c);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(uVar3 + 0x90);
      if (iVar7 == 0) goto LAB_004b4326;
    }
    uVar3 = F_004c3f10((undefined *)(iVar7 + 8),param_2);
    if (((int)uVar3 < 0) ||
       (puVar4 = ((undefined4 *)GEN_TOP((uVar3 * 0x10 + *(int *)(iVar7 + 0xc)))), puVar4 == (undefined4 *)0x0))
    goto LAB_004b43e1;
    if (puVar4[2] != 0) {
      puVar1 = (ushort *)(param_1 + 0x38);
      if ((uint)puVar4[3] <= (uint)*(ushort *)(param_1 + 0x38)) {
        *puVar1 = 0;
      }
      F_004c4810(puVar1,puVar4[2],(uint)*(ushort *)(puVar4 + 3),(unsigned int)gen_fl2bits((float)(REFG(float, 0x10948ac))),param_3);
      puVar6 = (undefined4 *)(puVar4[2] + (uint)*puVar1 * 0x14);
    }
    *(undefined4 *)(param_1 + 0x10) = *puVar4;
    bVar9 = GEN_ISNAN(*(float *)(REFG(int, 0x1371290) + 0x1c)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
    if (bVar9 != (bVar9 || *(float *)(REFG(int, 0x1371290) + 0x1c) == *(float *)&REFG(undefined, 0x1088114))) {
      *(undefined4 *)(param_1 + 0x14) = puVar4[1];
    }
    if (puVar6 != (undefined4 *)0x0) {
      uVar5 = *puVar6;
      goto LAB_004b43eb;
    }
  }
  uVar5 = 0;
LAB_004b43eb: ;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  if (puVar6 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = puVar6[1];
  }
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  if (puVar6 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = puVar6[2];
  }
  *(uint *)(param_1 + 0x20) = uVar3;
  if (puVar6 != (undefined4 *)0x0) {
    uVar3 = puVar6[3];
    F_004e8540(uVar3);
  }
  piVar8 = (int *)(param_1 + 0x2c);
  iVar7 = 2;
  do {
    piVar2 = (int *)*piVar8;
    if (piVar2 != (int *)0x0) {
      if (*(int *)(param_1 + 0x34) == 0) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x7c))(piVar2);
        if ((char)uVar3 == '\0') {
          uVar3 = ((code *)*(gen_code32 *)(*(int *)*piVar8 + 0x78))((int *)*piVar8,500);
          *piVar8 = 0;
          goto LAB_004b447d;
        }
      }
      ((code *)*(gen_code32 *)(*(int *)*piVar8 + 0x70))(*(undefined4 *)(param_1 + 0x24));
      uVar3 = ((code *)*(gen_code32 *)(*(int *)*piVar8 + 0x74))(*(undefined4 *)(param_1 + 0x28));
    }
LAB_004b447d: ;
    piVar8 = piVar8 + 1;
    iVar7 = iVar7 + -1;
    if (iVar7 == 0) {
      return uVar3;
    }
  } while( true );
}

/* ref: FUN_004b4490 */
uint F_004b4490(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4b4490u, gen_a0, 0u, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  float fVar1;
  float fVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  uint uVar6;
  int iVar7;
  undefined4 * puVar8;
  float10 fVar9;
  float fVar10;
  undefined4 uVar11;
  
  fVar10 = *(float *)(param_1 + 4);
  if (0.0 < fVar10) {
    fVar1 = *(float *)(REFG(int, 0x1371290) + 0xc);
    fVar2 = *(float *)(param_1 + 8);
    dVar3 = (double)((float)GEN_TOF((((float10)fVar1 - (float10)fVar2) / (float10)fVar10)));
    fVar9 = F_00c4d2a0((uint)(ulonglong)gen_d2bits(dVar3),
                         (int)((ulonglong)gen_d2bits(dVar3) >> 0x20));
    fVar2 = (float)((float10)(float)fVar9 * (float10)fVar10 + (float10)fVar2);
    *(float *)(param_1 + 8) = fVar2;
    param_2 = (float)((float10)fVar1 - (float10)fVar2);
  }
  uVar11 = REFG(float, 0x1087f04);
  if (GEN_ISNAN(fVar10) != (GEN_ISNAN(fVar10) || fVar10 == 0.0)) {
    fVar10 = REFG(float, 0x10948ac);
  }
  puVar5 = (undefined4 *)(param_3 + 4);
  if (param_3 == 0) {
    puVar5 = (undefined4 *)(param_1 + 0xc);
  }
  *(undefined4 *)(param_1 + 0x88) = *puVar5;
  *(undefined4 *)(param_1 + 0x8c) = puVar5[1];
  *(undefined4 *)(param_1 + 0x90) = puVar5[2];
  *(undefined4 *)(param_1 + 0x94) = puVar5[3];
  if (*(int *)(param_1 + 0x1c) == 0) {
    if (param_3 == 0) {
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(undefined4 *)(param_1 + 0x9c) = 0;
      *(undefined4 *)(param_1 + 0xa0) = 0;
      *(undefined4 *)(param_1 + 0xa4) = 0;
      *(undefined4 *)(param_1 + 0xa8) = 0;
      *(undefined4 *)(param_1 + 0xac) = 0;
      *(undefined4 *)(param_1 + 0xb0) = 0;
      *(undefined4 *)(param_1 + 0xb4) = 0;
      *(undefined4 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xbc) = uVar11;
      *(undefined4 *)(param_1 + 0xc0) = uVar11;
      *(undefined4 *)(param_1 + 0xc4) = 0;
    }
    else {
      puVar5 = (undefined4 *)(param_3 + 0x14);
      puVar8 = (undefined4 *)(param_1 + 0x98);
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar8 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar8 = puVar8 + 1;
      }
    }
  }
  else {
    F_004c6710(param_1 + 0x98,param_1 + 0x6a,*(int *)(param_1 + 0x1c),
                 (uint)*(ushort *)(param_1 + 0x50),fVar10,param_2);
    uVar11 = REFG(float, 0x1087f04);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_3 != 0) {
      puVar5 = (undefined4 *)(param_3 + 0x44);
      puVar8 = (undefined4 *)(param_1 + 200);
      for (iVar7 = 0xd; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar8 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar8 = puVar8 + 1;
      }
      goto LAB_004b463d;
    }
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xe4) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
LAB_004b46de: ;
    if (*(int *)(param_1 + 0x24) == 0) {
      *(undefined4 *)(param_1 + 0xfc) = 0;
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
      *(undefined4 *)(param_1 + 0x108) = 0;
      *(undefined4 *)(param_1 + 0x10c) = 0;
      *(undefined4 *)(param_1 + 0x110) = 0;
      *(undefined4 *)(param_1 + 0x114) = 0;
      *(undefined4 *)(param_1 + 0x118) = 0;
      *(undefined4 *)(param_1 + 0x11c) = 0;
    }
    else {
      F_004c68a0(param_1 + 0xfc,param_1 + 0x6e,*(int *)(param_1 + 0x24),
                   (uint)*(ushort *)(param_1 + 0x54),fVar10,param_2);
      uVar11 = REFG(float, 0x1087f04);
    }
  }
  else {
    F_004c67d0(param_1 + 200,param_1 + 0x6c,*(int *)(param_1 + 0x20),
                 (uint)*(ushort *)(param_1 + 0x52),fVar10,param_2);
    uVar11 = REFG(float, 0x1087f04);
LAB_004b463d: ;
    if (param_3 == 0) goto LAB_004b46de;
    puVar5 = (undefined4 *)(param_3 + 0x78);
    puVar8 = (undefined4 *)(param_1 + 0xfc);
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  uVar4 = REFG(float, 0x1094724);
  if (*(int *)(param_1 + 0x28) == 0) {
    if (param_3 != 0) {
      puVar5 = (undefined4 *)(param_3 + 0x9c);
      puVar8 = (undefined4 *)(param_1 + 0x120);
      for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar8 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar8 = puVar8 + 1;
      }
      goto LAB_004b479e;
    }
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x124) = 0;
    *(undefined4 *)(param_1 + 0x128) = 0;
    *(undefined4 *)(param_1 + 300) = 0;
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(undefined4 *)(param_1 + 0x134) = 0;
    *(undefined4 *)(param_1 + 0x138) = uVar4;
    *(undefined4 *)(param_1 + 0x13c) = uVar11;
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x144) = uVar11;
LAB_004b484d: ;
    if (*(int *)(param_1 + 0x2c) == 0) {
      *(undefined4 *)(param_1 + 0x148) = 0;
      *(undefined4 *)(param_1 + 0x14c) = 0;
      *(undefined4 *)(param_1 + 0x150) = 0;
      *(undefined4 *)(param_1 + 0x154) = 0;
      *(undefined4 *)(param_1 + 0x158) = 0;
      *(undefined4 *)(param_1 + 0x15c) = 0;
      *(undefined4 *)(param_1 + 0x160) = 0;
      *(undefined4 *)(param_1 + 0x164) = 0;
    }
    else {
      F_004c6a20(param_1 + 0x148,param_1 + 0x72,*(int *)(param_1 + 0x2c),
                   (uint)*(ushort *)(param_1 + 0x58),fVar10,param_2);
      uVar11 = REFG(float, 0x1087f04);
    }
  }
  else {
    F_004c6960(param_1 + 0x120,param_1 + 0x70,*(int *)(param_1 + 0x28),
                 (uint)*(ushort *)(param_1 + 0x56),fVar10,param_2);
    uVar11 = REFG(float, 0x1087f04);
LAB_004b479e: ;
    if (param_3 == 0) goto LAB_004b484d;
    puVar5 = (undefined4 *)(param_3 + 0xc4);
    puVar8 = (undefined4 *)(param_1 + 0x148);
    for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  uVar4 = REFG(float, 0x1088068);
  if (*(int *)(param_1 + 0x30) == 0) {
    if (param_3 != 0) {
      puVar5 = (undefined4 *)(param_3 + 0xe4);
      puVar8 = (undefined4 *)(param_1 + 0x168);
      for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar8 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar8 = puVar8 + 1;
      }
      goto LAB_004b4907;
    }
    *(undefined4 *)(param_1 + 0x168) = uVar11;
    *(undefined4 *)(param_1 + 0x16c) = uVar11;
    *(undefined4 *)(param_1 + 0x170) = uVar11;
    *(undefined4 *)(param_1 + 0x174) = uVar11;
    *(undefined4 *)(param_1 + 0x178) = uVar11;
    *(undefined4 *)(param_1 + 0x17c) = uVar11;
    *(undefined4 *)(param_1 + 0x180) = uVar4;
    *(undefined4 *)(param_1 + 0x184) = 0;
    *(undefined4 *)(param_1 + 0x188) = 0;
    *(undefined4 *)(param_1 + 0x18c) = 0;
  }
  else {
    F_004c6ae0(param_1 + 0x168,param_1 + 0x74,*(int *)(param_1 + 0x30),
                 (uint)*(ushort *)(param_1 + 0x5a),fVar10,param_2);
    uVar11 = REFG(float, 0x1087f04);
LAB_004b4907: ;
    if (param_3 != 0) {
      *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_3 + 0x104);
      *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_3 + 0x108);
      *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_3 + 0x100);
      puVar5 = (undefined4 *)(param_3 + 0x10c);
      puVar8 = (undefined4 *)(param_1 + 400);
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar8 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar8 = puVar8 + 1;
      }
      goto LAB_004b4a73;
    }
  }
  if (*(int *)(param_1 + 0x34) == 0) {
    *(undefined4 *)(param_1 + 0x1a4) = 0;
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    *(undefined4 *)(param_1 + 0x1ac) = 0;
    *(undefined4 *)(param_1 + 400) = 0;
    *(undefined4 *)(param_1 + 0x194) = 0;
    *(undefined4 *)(param_1 + 0x198) = 0;
    *(undefined4 *)(param_1 + 0x19c) = 0;
    *(undefined4 *)(param_1 + 0x1a0) = uVar11;
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    *(undefined4 *)(param_1 + 0x1b4) = 0;
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    *(undefined4 *)(param_1 + 0x1bc) = 0;
  }
  else {
    F_004c6ba0(param_1 + 400,param_1 + 0x76,*(int *)(param_1 + 0x34),
                 (uint)*(ushort *)(param_1 + 0x5c),fVar10,param_2);
    uVar11 = REFG(float, 0x1087f04);
  }
LAB_004b4a73: ;
  if (param_3 == 0) {
    if (*(int *)(param_1 + 0x38) == 0) {
      *(undefined4 *)(param_1 + 0x1d4) = 0;
      *(undefined4 *)(param_1 + 0x1d8) = 0;
      *(undefined4 *)(param_1 + 0x1dc) = 0;
      *(undefined4 *)(param_1 + 0x1c0) = 0;
      *(undefined4 *)(param_1 + 0x1c4) = 0;
      *(undefined4 *)(param_1 + 0x1c8) = 0;
      *(undefined4 *)(param_1 + 0x1cc) = 0;
      *(undefined4 *)(param_1 + 0x1d0) = uVar11;
      *(undefined4 *)(param_1 + 0x1e0) = 0;
      *(undefined4 *)(param_1 + 0x1e4) = 0;
      *(undefined4 *)(param_1 + 0x1e8) = 0;
      *(undefined4 *)(param_1 + 0x1ec) = 0;
    }
    else {
      F_004c6ba0(param_1 + 0x1c0,param_1 + 0x78,*(int *)(param_1 + 0x38),
                   (uint)*(ushort *)(param_1 + 0x5e),fVar10,param_2);
      uVar11 = REFG(float, 0x1087f04);
    }
    if (*(int *)(param_1 + 0x3c) == 0) {
      *(undefined4 *)(param_1 + 0x1f0) = 0;
      *(undefined4 *)(param_1 + 500) = 0;
      *(undefined4 *)(param_1 + 0x1f8) = 0;
    }
    else {
      F_004c6c60(param_1 + 0x1f0,param_1 + 0x7a,*(int *)(param_1 + 0x3c),
                   (uint)*(ushort *)(param_1 + 0x60),fVar10,param_2);
      uVar11 = REFG(float, 0x1087f04);
    }
  }
  else {
    puVar5 = (undefined4 *)(param_3 + 0x13c);
    puVar8 = (undefined4 *)(param_1 + 0x1c0);
    for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_3 + 0x16c);
    *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_3 + 0x170);
    *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_3 + 0x174);
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    if (param_3 == 0) {
      *(undefined4 *)(param_1 + 0x1fc) = 0;
      *(undefined4 *)(param_1 + 0x200) = 0;
      *(undefined4 *)(param_1 + 0x204) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x178);
      *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_3 + 0x17c);
      *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(param_3 + 0x180);
    }
  }
  else {
    F_004c6d30(param_1 + 0x1fc,param_1 + 0x7c,*(int *)(param_1 + 0x40),
                 (uint)*(ushort *)(param_1 + 0x62),fVar10,param_2);
    uVar11 = REFG(float, 0x1087f04);
  }
  if (*(int *)(param_1 + 0x44) == 0) {
    if (param_3 == 0) {
      *(undefined4 *)(param_1 + 0x208) = 0;
      *(undefined4 *)(param_1 + 0x20c) = 0;
      *(undefined4 *)(param_1 + 0x210) = uVar11;
      *(undefined4 *)(param_1 + 0x214) = uVar11;
      *(undefined4 *)(param_1 + 0x218) = 0;
      *(undefined4 *)(param_1 + 0x21c) = 0;
      if ((*(uint *)(REFG(int, 0x137128c) + 0x1514) >> 0xd & 1) != 0) {
        F_00678870(REFG(int, 0x137128c));
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_3 + 0x184);
      *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(param_3 + 0x188);
      *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_3 + 0x18c);
      *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_3 + 400);
      *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_3 + 0x194);
      *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(param_3 + 0x198);
    }
  }
  else {
    F_004c6e30(param_1 + 0x208,param_1 + 0x7e,*(int *)(param_1 + 0x44),
                 (uint)*(ushort *)(param_1 + 100),fVar10,param_2);
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    if (param_3 == 0) {
      *(undefined4 *)(param_1 + 0x220) = 0;
      *(undefined4 *)(param_1 + 0x224) = 0;
      *(undefined4 *)(param_1 + 0x228) = 0;
      *(undefined4 *)(param_1 + 0x22c) = 0;
      *(undefined4 *)(param_1 + 0x230) = 0;
      *(undefined4 *)(param_1 + 0x234) = 0;
      *(undefined4 *)(param_1 + 0x238) = 0;
      *(undefined4 *)(param_1 + 0x23c) = 0;
      *(undefined4 *)(param_1 + 0x240) = 0;
      *(undefined4 *)(param_1 + 0x244) = 0;
      *(undefined4 *)(param_1 + 0x248) = 0;
    }
    else {
      puVar5 = (undefined4 *)(param_3 + 0x19c);
      puVar8 = (undefined4 *)(param_1 + 0x220);
      for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar8 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar8 = puVar8 + 1;
      }
    }
  }
  else {
    F_004c6f20(param_1 + 0x220,param_1 + 0x80,*(int *)(param_1 + 0x48),
                 (uint)*(ushort *)(param_1 + 0x66),fVar10,param_2);
  }
  if (*(int *)(param_1 + 0x4c) == 0) {
    if (param_3 == 0) {
      uVar6 = F_004a44a0((undefined *)(param_1 + 0x24c));
      return uVar6;
    }
    puVar5 = (undefined4 *)(param_3 + 0x1c8);
    puVar8 = (undefined4 *)(param_1 + 0x24c);
    for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar6 = 0;
  }
  else {
    uVar6 = F_004c6ff0(param_1 + 0x24c,param_1 + 0x82,*(int *)(param_1 + 0x4c),
                         (uint)*(ushort *)(param_1 + 0x68),fVar10,param_2);
  }
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_3 + 0x1d8);
    *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_3 + 0x1dc);
    uVar6 = *(uint *)(param_3 + 0x1e0);
    *(uint *)(param_1 + 0x264) = uVar6;
    *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_3 + 0x1e4);
  }
  return uVar6;
}

/* ref: FUN_004b4e70 */
uint F_004b4e70(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4b4e70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  uint uVar1;
  undefined4 * puVar2;
  float * pfVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float * PTR32 * PTR32 * PTR32 * ppppfVar7;
  float * pfVar8;
  float * PTR32 * PTR32 * pppfVar9;
  undefined4 * puVar10;
  float * pfVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  (*(uint *)(gen_frame + 0x13c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x140);
  uVar4 = (uint)*(char *)(REFG(int, 0x1371290) + 0x20);
  uVar1 = 0;
  (*(uint *)(gen_frame + 0x4c)) = param_1;
  if (((int)uVar4 < 0) || (0x1f < uVar4)) {
    *(undefined1 *)(param_1 + 0x212) = 0;
  }
  iVar6 = REFG(int, 0x1371290);
  if (*(char *)(param_1 + 0x212) == '\0') {
    *(undefined4 *)(param_1 + 300) = 0;
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(undefined4 *)(param_1 + 0x134) = 0;
    *(undefined4 *)(param_1 + 0x138) = 0;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x144) = 0;
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(undefined4 *)(param_1 + 0x14c) = 0;
    *(undefined4 *)(param_1 + 0x150) = 0;
    *(undefined4 *)(param_1 + 0x154) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
    *(undefined4 *)(param_1 + 0x15c) = 0;
    *(undefined4 *)(param_1 + 0x160) = 0;
    *(undefined4 *)(param_1 + 0x164) = 0;
    *(undefined4 *)(param_1 + 0x168) = 0;
    *(undefined4 *)(param_1 + 0x16c) = 0;
    *(undefined4 *)(param_1 + 0x170) = 0;
    *(undefined4 *)(param_1 + 0x174) = 0;
    *(undefined4 *)(param_1 + 0x178) = 0;
    *(undefined4 *)(param_1 + 0x17c) = 0;
    *(undefined4 *)(param_1 + 0x180) = 0;
    *(undefined4 *)(param_1 + 0x184) = 0;
    *(undefined4 *)(param_1 + 0x188) = 0;
    *(undefined4 *)(param_1 + 0x18c) = 0;
    *(undefined4 *)(param_1 + 400) = 0;
    *(undefined4 *)(param_1 + 0x194) = 0;
    *(undefined4 *)(param_1 + 0x198) = 0;
    *(undefined4 *)(param_1 + 0x19c) = 0;
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    *(undefined4 *)(param_1 + 0x1a4) = 0;
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    *(undefined4 *)(param_1 + 0x1ac) = 0;
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    *(undefined4 *)(param_1 + 0x1b4) = 0;
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    *(undefined4 *)(param_1 + 0x1bc) = 0;
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    *(undefined4 *)(param_1 + 0x1cc) = 0;
    *(undefined4 *)(param_1 + 0x1d0) = 0;
    *(undefined4 *)(param_1 + 0x1d4) = 0;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    *(undefined4 *)(param_1 + 0x1e0) = 0;
    *(undefined4 *)(param_1 + 0x1e4) = 0;
    *(undefined4 *)(param_1 + 0x1e8) = 0;
    *(undefined4 *)(param_1 + 0x1ec) = 0;
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    *(undefined4 *)(param_1 + 500) = 0;
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    *(undefined4 *)(param_1 + 0x1fc) = 0;
    *(undefined4 *)(param_1 + 0x200) = 0;
    *(undefined4 *)(param_1 + 0x204) = REFG(undefined4, 0x1375a88);
    *(undefined4 *)(param_1 + 0x208) = REFG(undefined4, 0x1375a8c);
    *(undefined4 *)(param_1 + 0x20c) = REFG(undefined4, 0x1375a90);
    *(undefined1 *)(param_1 + 0x213) = 0;
  }
  else {
    if ((REFG(char, 0x1301abc) == '\0') || (*(char *)(REFG(int, 0x1371290) + 0x82c) == '\0')) {
      iVar5 = *(int *)(param_1 + 8 + uVar4 * 8);
      if (iVar5 == 0) {
        F_004a9cc0(((float *)(gen_frame + 0x80)));
      }
      else {
        F_004c6650(((float *)(gen_frame + 0x80)),param_1 + 0x210,iVar5,(uint)*(ushort *)(param_1 + 0xc + uVar4 * 8),
                     REFG(float, 0x10948ac),param_2);
        iVar6 = REFG(int, 0x1371290);
      }
      (*(float * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x7c)) = *(float * PTR32 * PTR32 * PTR32 *)(iVar6 + 0x1c);
      if (*(float *)&REFG(undefined, 0x1088114) < ((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x7c)))))) {
        F_004bebc0(param_1 + 300,param_1 + 300,((float *)(gen_frame + 0x80)),((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x7c))))));
        uVar1 = param_1;
      }
      else {
        (*(float * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x7c)) = (float * PTR32 * PTR32 *)(param_1 + 300);
        pfVar8 = ((float *)(gen_frame + 0x80));
        pppfVar9 = (float * PTR32 * PTR32 *)(param_1 + 300);
        for (iVar6 = 0x1b; uVar1 = (*(uint *)(gen_frame + 0x4c)), iVar6 != 0; iVar6 = iVar6 + -1) {
          *pppfVar9 = ((float * PTR32 *)(uintptr_t)gen_fl2bits((float)(*pfVar8)));
          pfVar8 = pfVar8 + 1;
          pppfVar9 = pppfVar9 + 1;
        }
      }
      (*(float * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x7c)) = (float * PTR32 * PTR32 *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      (*(int *)(gen_frame + 0x18)) = REFG(int, 0x1371290) + 0x550;
      (*(float * PTR32 *)(gen_frame + 0x44)) = (float *)(uVar1 + 0x198);
      pfVar8 = (float *)(param_1 + 300);
      pfVar11 = (*(float * PTR32 *)(gen_frame + 0x44));
      for (iVar6 = 0x1b; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pfVar11 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        pfVar11 = pfVar11 + 1;
      }
      ppppfVar7 = (float * PTR32 * PTR32 * PTR32 *)(REFG(int, 0x13759f8) + 0x264);
      fVar16 = (float10)1;
      if ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppppfVar7))) < fVar16) {
        ppppfVar7 = &(*(float * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x7c));
      }
      iVar6 = 9;
      (*(float * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x7c)) = ((float * PTR32 * PTR32 *)(uintptr_t)gen_fl2bits((float)((float)(fVar16 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppppfVar7)))))));
      fVar12 = (float10)(float)(fVar16 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppppfVar7))));
      fVar13 = (float10)*(double *)&REFG(undefined, 0x10944e0);
      pfVar8 = (float *)((*(uint *)(gen_frame + 0x4c)) + 0x1bc);
      do {
        iVar6 = iVar6 + -1;
        (*(float * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x7c)) = ((float * PTR32 * PTR32 *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((((float10)pfVar8[-9] + (float10)*pfVar8) + (float10)pfVar8[9]) / fVar13))))))
        ;
        fVar14 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x7c))))) * (fVar16 - fVar12);
        pfVar8[-9] = (float)((float10)pfVar8[-9] * fVar12 + fVar14);
        *pfVar8 = (float)(fVar12 * (float10)*pfVar8 + fVar14);
        pfVar8[9] = (float)((float10)pfVar8[9] * fVar12 + fVar14);
        pfVar8 = pfVar8 + 1;
      } while (iVar6 != 0);
      (*(float * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x7c)) = *(float * PTR32 * PTR32 * PTR32 *)(REFG(int, 0x1371290) + 0x828);
      (*(float * PTR32 *)(gen_frame + 0x3c)) = (float *)(uVar1 + 0x1bc);
      fVar14 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*(float * PTR32 * PTR32 * PTR32 *)(REFG(int, 0x1371290) + 0x828))));
      (*(float * PTR32 *)(gen_frame + 0x1c)) = (float *)((*(uint *)(gen_frame + 0x4c)) + 0x108);
      (*(float *)(gen_frame + 0x20)) = (float)(fVar14 * (float10)REFG(float, 0x1302c60));
      (*(float *)(gen_frame + 0x24)) = (float)((float10)REFG(float, 0x1302c64) * fVar14);
      (*(float *)(gen_frame + 0x28)) = (float)((float10)REFG(float, 0x1302c68) * fVar14);
      fVar15 = (float10)*(float *)&REFG(undefined, 0x1097920);
      fVar12 = (float10)0;
      (*(float *)(gen_frame + 0x64)) = (float)((float10)*(*(float * PTR32 *)(gen_frame + 0x44)) / fVar15 + fVar12);
      (*(float * PTR32 *)(gen_frame + 0x48)) = (float *)(uVar1 + 0x1e0);
      (*(float *)(gen_frame + 0x68)) = ((float)GEN_TOF(((float10)*(float *)(uVar1 + 0x1bc) / fVar15 + fVar12)));
      ppppfVar7 = &(*(float * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x7c));
      (*(float *)(gen_frame + 0x6c)) = ((float)GEN_TOF(((float10)*(float *)(uVar1 + 0x1e0) / fVar15 + fVar12)));
      (*(float * PTR32 * PTR32 *)(gen_frame + 0x70)) = ((float * PTR32 *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((((float10)(*(float *)(gen_frame + 0x68)) + (float10)(*(float *)(gen_frame + 0x64))) + (float10)(*(float *)(gen_frame + 0x6c))) / fVar13))))));
      pppfVar9 = ((float * PTR32 * PTR32 *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar12 + (float10)*(float *)((*(uint *)(gen_frame + 0x4c)) + 0x108) / fVar15))))));
      (*(float * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x7c)) = pppfVar9;
      (*(float * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x7c)) = ((float * PTR32 * PTR32 *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10947f8))));
      (*(float * PTR32 * PTR32 *)(gen_frame + 0x74)) = ((float * PTR32 *)(uintptr_t)gen_fl2bits((float)((float)(fVar16 - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pppfVar9)))))));
      if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 * PTR32 *)(gen_frame + 0x74))))) < (float10)REFG(double, 0x1091858))) {
        ppppfVar7 = (float * PTR32 * PTR32 * PTR32 *)&(*(float * PTR32 * PTR32 *)(gen_frame + 0x74));
      }
      (*(float * PTR32 * PTR32 *)(gen_frame + 0x70)) = ((float * PTR32 *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 * PTR32 *)(gen_frame + 0x70))))) / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppppfVar7)))))));
      fVar12 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 * PTR32 *)(gen_frame + 0x70)))));
      if (fVar12 < fVar14) {
        (*(float * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40)) = ((float * PTR32 * PTR32 *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10947f8))));
        (*(float * PTR32 * PTR32 *)(gen_frame + 0x70)) = ((float * PTR32 *)(uintptr_t)gen_fl2bits((float)((float)(fVar12 / fVar14))));
        fVar12 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 * PTR32 *)(gen_frame + 0x70)))));
        fVar16 = fVar16 - fVar12;
        (*(float * PTR32 * PTR32 *)(gen_frame + 0x74)) = ((float * PTR32 *)(uintptr_t)gen_fl2bits((float)((float)fVar16)));
        fVar13 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 * PTR32 *)(gen_frame + 0x74)))));
        (*(float * PTR32 * PTR32 *)(gen_frame + 0x74)) = ((float * PTR32 *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((((float10)REFG(double, 0x1088108) * fVar13) * fVar13))))));
        (*(float * PTR32 * PTR32 *)(gen_frame + 0x78)) = ((float * PTR32 *)(uintptr_t)gen_fl2bits((float)((float)(fVar16 - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 * PTR32 *)(gen_frame + 0x74)))))))));
        if (fVar12 < (float10)REFG(double, 0x1091858)) {
          (*(float * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x7c)) = (float * PTR32 * PTR32 *)&(*(float * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40));
        }
        else {
          (*(float * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x7c)) = &(*(float * PTR32 * PTR32 *)(gen_frame + 0x70));
        }
        puVar2 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0xa0)),*(int *)(REFG(int, 0x137127c) + 0x66f4) + 0x10);
        puVar10 = ((undefined4 *)(gen_frame + 0xf0));
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar10 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar2 = (undefined4 *)F_004ee9d0(&(*(float *)(gen_frame + 0x50)),&REFG(float, 0x1302c90),((undefined4 *)(gen_frame + 0xf0)));
        pfVar11 = (*(float * PTR32 *)(gen_frame + 0x44));
        fVar16 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 * PTR32 *)(gen_frame + 0x78)))));
        (*(undefined4 *)(gen_frame + 0x0)) = *puVar2;
        (*(undefined4 *)(gen_frame + 0x4)) = puVar2[1];
        (*(undefined4 *)(gen_frame + 0x8)) = puVar2[2];
        (*(float * PTR32 * PTR32 *)(gen_frame + 0x78)) = ((float * PTR32 *)(uintptr_t)gen_fl2bits((float)((float)(fVar16 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*(*(float * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x7c)))))))));
        (*(float * PTR32 * PTR32 *)(gen_frame + 0x78)) = ((float * PTR32 *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)(float)(float)(fVar16 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*(*(float * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x7c)))))) +
                          (float10)REFG(double, 0x1088130)))))));
        fVar16 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 * PTR32 *)(gen_frame + 0x78)))));
        (*(float *)(gen_frame + 0x50)) = (float)(fVar16 * (float10)REFG(float, 0x1302c0c));
        (*(float *)(gen_frame + 0x54)) = (float)(fVar16 * (float10)REFG(float, 0x1302c10));
        (*(float *)(gen_frame + 0x58)) = (float)(fVar16 * (float10)REFG(float, 0x1302c14));
        (*(float *)(gen_frame + 0x64)) = (float)(fVar16 * (float10)REFG(float, 0x1302c0c));
        (*(float *)(gen_frame + 0x68)) = (float)(fVar16 * (float10)REFG(float, 0x1302c10));
        (*(float *)(gen_frame + 0x6c)) = (float)(fVar16 * (float10)REFG(float, 0x1302c14));
        F_004bed50((*(float * PTR32 *)(gen_frame + 0x44)),(uint)&(*(float *)(gen_frame + 0x64)));
        pfVar8 = (*(float * PTR32 *)(gen_frame + 0x3c));
        fVar16 = (float10)*(float *)&REFG(undefined, 0x1301ab8);
        (*(float * PTR32 * PTR32 *)(gen_frame + 0x78)) = ((float * PTR32 *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 * PTR32 *)(gen_frame + 0x74))))) * ((float10)1 - fVar16)))))));
        fVar12 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 * PTR32 *)(gen_frame + 0x78)))));
        (*(float *)(gen_frame + 0x50)) = (float)((float10)(*(float *)(gen_frame + 0x20)) * fVar12);
        (*(float *)(gen_frame + 0x54)) = (float)((float10)(*(float *)(gen_frame + 0x24)) * fVar12);
        (*(float *)(gen_frame + 0x58)) = (float)((float10)(*(float *)(gen_frame + 0x28)) * fVar12);
        *pfVar11 = (float)((float10)(*(float *)(gen_frame + 0x50)) * (float10)*(float *)&REFG(undefined, 0x1097920) + (float10)*pfVar11
                          );
        *(*(float * PTR32 *)(gen_frame + 0x3c)) = (float)((float10)(*(float *)(gen_frame + 0x54)) * (float10)*(float *)&REFG(undefined, 0x1097920) +
                            (float10)*(*(float * PTR32 *)(gen_frame + 0x3c)));
        *(*(float * PTR32 *)(gen_frame + 0x48)) = (float)((float10)(*(float *)(gen_frame + 0x58)) * (float10)*(float *)&REFG(undefined, 0x1097920) +
                            (float10)*(*(float * PTR32 *)(gen_frame + 0x48)));
        (*(float * PTR32 * PTR32 *)(gen_frame + 0x78)) = ((float * PTR32 *)(uintptr_t)gen_fl2bits((float)((float)(fVar16 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 * PTR32 *)(gen_frame + 0x74)))))))));
        fVar16 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 * PTR32 *)(gen_frame + 0x78)))));
        (*(float *)(gen_frame + 0x50)) = (float)(fVar16 * (float10)(*(float *)(gen_frame + 0x20)));
        (*(float *)(gen_frame + 0x54)) = (float)(fVar16 * (float10)(*(float *)(gen_frame + 0x24)));
        (*(float *)(gen_frame + 0x58)) = (float)(fVar16 * (float10)(*(float *)(gen_frame + 0x28)));
        F_004be890(pfVar11,(*(float *)(gen_frame + 0x50)),(uint)&(*(undefined4 *)(gen_frame + 0x0)),(float)(float10)1);
        F_004be890(pfVar8,(*(float *)(gen_frame + 0x54)),(uint)&(*(undefined4 *)(gen_frame + 0x0)),(float)(float10)1);
        F_004be890((*(float * PTR32 *)(gen_frame + 0x48)),(*(float *)(gen_frame + 0x58)),(uint)&(*(undefined4 *)(gen_frame + 0x0)),(float)(float10)1);
      }
      (*(float * PTR32 * PTR32 *)(gen_frame + 0x78)) = ((float * PTR32 *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04))));
      (*(float * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40)) = (float * PTR32 * PTR32 *)0x0;
      pfVar8 = (float *)&REFG(float, 0x1301420);
      pfVar11 = (float *)((*(int *)(gen_frame + 0x18)) + 0x28);
      (*(float * PTR32 * PTR32 *)(gen_frame + 0x70)) = (float * PTR32 *)0x6;
      do {
        F_004bea00((*(float * PTR32 *)(gen_frame + 0x1c)),((undefined4 *)(gen_frame + 0xf0)));
        (*(float *)(gen_frame + 0x20)) = *pfVar8;
        (*(float *)(gen_frame + 0x24)) = pfVar8[1];
        (*(float *)(gen_frame + 0x28)) = pfVar8[2];
        (*(float *)(gen_frame + 0x2c)) = (float)(float10)1;
        pfVar3 = (float *)F_004eede0(&(*(undefined4 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x20)),((undefined4 *)(gen_frame + 0xf0)));
        (*(float *)(gen_frame + 0x50)) = *pfVar3;
        (*(float *)(gen_frame + 0x54)) = pfVar3[1];
        (*(float *)(gen_frame + 0x58)) = pfVar3[2];
        (*(float *)(gen_frame + 0x5c)) = pfVar3[3];
        ppppfVar7 = &(*(float * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x7c));
        (*(float * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x7c)) = ((float * PTR32 * PTR32 *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)pfVar3[3] * (float10)(*(float *)(gen_frame + 0x2c)) +
                          ((float10)pfVar3[2] * (float10)(*(float *)(gen_frame + 0x28)) +
                          ((float10)pfVar3[1] * (float10)(*(float *)(gen_frame + 0x24)) +
                          (float10)(*(float *)(gen_frame + 0x20)) * (float10)*pfVar3))))))));
        if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x7c))))) < (float10)1)) {
          ppppfVar7 = (float * PTR32 * PTR32 * PTR32 *)&(*(float * PTR32 * PTR32 *)(gen_frame + 0x78));
        }
        if (!(*(float *)&REFG(undefined, 0x1088114) < ((float)gen_bits2f((unsigned int)(uintptr_t)(*ppppfVar7))))) {
          ppppfVar7 = &(*(float * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x40));
        }
        (*(float * PTR32 * PTR32 *)(gen_frame + 0x74)) = (float * PTR32 *)*ppppfVar7;
        (*(float *)(gen_frame + 0x64)) = pfVar11[-2];
        (*(float *)(gen_frame + 0x68)) = pfVar11[-1];
        (*(float *)(gen_frame + 0x6c)) = *pfVar11;
        F_004be890((*(float * PTR32 *)(gen_frame + 0x44)),pfVar11[-2],(uint)pfVar8,((float)gen_bits2f((unsigned int)(uintptr_t)(*ppppfVar7))));
        F_004be890((*(float * PTR32 *)(gen_frame + 0x3c)),(*(float *)(gen_frame + 0x68)),(uint)pfVar8,((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 * PTR32 *)(gen_frame + 0x74))))));
        F_004be890((*(float * PTR32 *)(gen_frame + 0x48)),(*(float *)(gen_frame + 0x6c)),(uint)pfVar8,((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 * PTR32 *)(gen_frame + 0x74))))));
        pfVar8 = pfVar8 + 4;
        pfVar11 = pfVar11 + 4;
        (*(float * PTR32 * PTR32 *)(gen_frame + 0x70)) = (float * PTR32 *)((int)(*(float * PTR32 * PTR32 *)(gen_frame + 0x70)) + -1);
      } while ((float * PTR32 * PTR32 *)(*(float * PTR32 * PTR32 *)(gen_frame + 0x70)) != (float * PTR32 * PTR32 *)0x0);
      fVar16 = (float10)0;
      *(float *)((*(uint *)(gen_frame + 0x4c)) + 0x204) =
           (float)((float10)*(*(float * PTR32 *)(gen_frame + 0x44)) / (float10)*(float *)&REFG(undefined, 0x1097920) + fVar16);
      *(float *)((*(uint *)(gen_frame + 0x4c)) + 0x208) =
           (float)((float10)*(*(float * PTR32 *)(gen_frame + 0x3c)) / (float10)*(float *)&REFG(undefined, 0x1097920) + fVar16);
      *(float *)((*(uint *)(gen_frame + 0x4c)) + 0x20c) =
           (float)((float10)*(*(float * PTR32 *)(gen_frame + 0x48)) / (float10)*(float *)&REFG(undefined, 0x1097920) + fVar16);
      uVar1 = (*(uint *)(gen_frame + 0x4c));
    }
    else {
      puVar2 = (undefined4 *)(REFG(int, 0x1371290) + 0x5f0);
      puVar10 = (undefined4 *)(param_1 + 0x198);
      for (iVar5 = 0x1b; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar10 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar10 = puVar10 + 1;
      }
      (*(float *)(gen_frame + 0x64)) = *(float *)(iVar6 + 0x5d0);
      (*(float *)(gen_frame + 0x68)) = *(float *)(iVar6 + 0x5d4);
      (*(float *)(gen_frame + 0x6c)) = *(float *)(iVar6 + 0x5d8);
      *(float *)(param_1 + 0x204) = *(float *)(iVar6 + 0x5d0);
      *(float *)(param_1 + 0x208) = (*(float *)(gen_frame + 0x68));
      *(float *)(param_1 + 0x20c) = (*(float *)(gen_frame + 0x6c));
    }
    *(undefined2 *)((*(uint *)(gen_frame + 0x4c)) + 0x212) = 0x100;
  }
  F_00c47745((*(uint *)(gen_frame + 0x13c)) ^ (uint)(uint)(gen_frame + 0x140));
  return uVar1;
}

/* ref: FUN_004b57e0 */
byte F_004b57e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4b57e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  int iVar6;
  bool bVar7;
  int local_c;
  byte local_5;
  
  bVar2 = F_004c4210(param_1 + 0x80,param_2);
  bVar7 = bVar2 != 0;
  iVar4 = param_1 + 0xb4;
  local_c = 2;
  do {
    bVar2 = F_004c43a0(iVar4,param_2);
    if ((bVar2 == 0) || (bVar1 = !bVar7, bVar7 = true, bVar1)) {
      bVar7 = false;
    }
    iVar4 = iVar4 + 0x28;
    local_c = local_c + -1;
  } while (local_c != 0);
  bVar2 = F_004c4520(param_1 + 0x104,param_2);
  if ((bVar2 == 0) || (local_5 = 1, !bVar7)) {
    local_5 = 0;
  }
  piVar5 = (int *)(param_1 + 0x130);
  iVar4 = 2;
  do {
    iVar6 = *piVar5;
    if ((((piVar5[-2] != 0) && (uVar3 = F_00982ce0(piVar5[-2]), (char)uVar3 == '\0')) ||
        ((iVar6 != 0 && (uVar3 = F_00982ce0(iVar6), (char)uVar3 == '\0')))) ||
       ((bVar2 = F_004c4660(piVar5 + -3,param_2), bVar2 == 0 ||
        (bVar7 = local_5 == 0, local_5 = 1, bVar7)))) {
      local_5 = 0;
    }
    piVar5 = piVar5 + 10;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = param_1 + 0x174;
  iVar6 = 3;
  do {
    bVar2 = F_004c64f0(iVar4,param_2);
    if ((bVar2 == 0) || (bVar7 = local_5 == 0, local_5 = 1, bVar7)) {
      local_5 = 0;
    }
    iVar4 = iVar4 + 0x28;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  F_004af7c0(param_1 + 0x1ec,param_2);
  return local_5;
}

/* ref: FUN_004b5910 */
uint F_004b5910(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4b5910u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  float10 fVar4;
  
  (*(uint *)(gen_frame + 0x12c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x130);
  if ((*(int *)((int)param_1 + 4) != 0) && (*(int *)((int)param_1 + 8) != 0)) {
    F_004aea50(param_1);
  }
  (*(undefined4 *)(gen_frame + 0xb8)) = 0;
  (*(undefined4 *)(gen_frame + 0xbc)) = 0;
  (*(undefined4 *)(gen_frame + 0xc0)) = 0;
  (*(undefined4 *)(gen_frame + 0xc4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc8)) = 0;
  (*(undefined4 *)(gen_frame + 0xcc)) = 0;
  (*(undefined4 *)(gen_frame + 0xd0)) = 0;
  (*(undefined4 *)(gen_frame + 0xd4)) = 0;
  (*(undefined4 *)(gen_frame + 0xd8)) = 0;
  (*(undefined4 *)(gen_frame + 0xdc)) = 0;
  (*(undefined4 *)(gen_frame + 0xe0)) = 0;
  (*(undefined4 *)(gen_frame + 0xe4)) = 0;
  (*(undefined4 *)(gen_frame + 0xe8)) = 0;
  (*(undefined4 *)(gen_frame + 0xec)) = 0;
  (*(undefined4 *)(gen_frame + 0xf0)) = 0;
  (*(undefined4 *)(gen_frame + 0xf4)) = 0;
  (*(undefined4 *)(gen_frame + 0xf8)) = 0;
  (*(undefined4 *)(gen_frame + 0xfc)) = 0;
  (*(undefined4 *)(gen_frame + 0x100)) = 0;
  (*(undefined4 *)(gen_frame + 0x104)) = 0;
  (*(undefined4 *)(gen_frame + 0x108)) = 0;
  (*(undefined4 *)(gen_frame + 0x10c)) = 0;
  (*(undefined4 *)(gen_frame + 0x110)) = 0;
  (*(undefined4 *)(gen_frame + 0x114)) = 0;
  (*(undefined4 *)(gen_frame + 0x118)) = 0;
  (*(undefined4 *)(gen_frame + 0x11c)) = 0;
  (*(undefined4 *)(gen_frame + 0x120)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x6c)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined4 *)(gen_frame + 0x7c)) = 0;
  (*(undefined4 *)(gen_frame + 0x80)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  (*(undefined4 *)(gen_frame + 0x8c)) = 0;
  (*(undefined4 *)(gen_frame + 0x90)) = 0;
  (*(undefined4 *)(gen_frame + 0x94)) = 0;
  (*(undefined4 *)(gen_frame + 0x98)) = 0;
  (*(undefined4 *)(gen_frame + 0x9c)) = 0;
  (*(undefined4 *)(gen_frame + 0xa0)) = 0;
  (*(undefined4 *)(gen_frame + 0xa4)) = 0;
  (*(undefined4 *)(gen_frame + 0xa8)) = 0;
  (*(undefined4 *)(gen_frame + 0xac)) = 0;
  (*(undefined4 *)(gen_frame + 0xb0)) = 0;
  if ((*(int *)((int)param_1 + 0xc) != 0) && (*(int *)((int)param_1 + 0x10) != 0)) {
    uVar2 = *(uint *)((int)param_1 + 0x80);
    (*(uint *)(gen_frame + 0x40)) = *(uint *)((int)param_1 + 0x8c);
    if (uVar2 != 0) {
      if (uVar2 < 0x65) {
        piVar3 = ((int *)GEN_TOP((*(int *)((int)param_1 + 0xc) + 8 + uVar2 * 8)));
      }
      else {
        piVar3 = ((int *)GEN_TOP((*(int *)((int)param_1 + 0x10) + -0x318 + uVar2 * 8)));
      }
      (*(int *)(gen_frame + 0x1c)) = *piVar3;
      if (((*(int *)(gen_frame + 0x1c)) != 0) && (piVar3[1] != 0)) {
        uVar2 = piVar3[1];
        (*(uint *)(gen_frame + 0x3c)) = uVar2;
        fVar4 = (float10)(int)uVar2;
        if ((int)uVar2 < 0) {
          fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        (*(ushort *)(gen_frame + 0x46)) = ((undefined2)0x27f);
        (*(uint *)(gen_frame + 0x3c)) = ((undefined2)0x27f) | 0xc00;
        (*(uint *)(gen_frame + 0x3c)) = (uint)TRUNC((fVar4 * (float10)param_2) / (float10)*(double *)&REFG(double, 0x10946a0));
        (*(uint *)(gen_frame + 0x3c)) = ((*(uint *)(gen_frame + 0x3c)) & 0xffff) % uVar2 & 0xffff;
        F_004c6650(&(*(undefined4 *)(gen_frame + 0xb8)),&(*(uint *)(gen_frame + 0x3c)),(*(int *)(gen_frame + 0x1c)),uVar2 & 0xffff,REFG(float, 0x10948ac),param_2);
        (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x1302c0c);
        (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x1302c10);
        (*(undefined4 *)(gen_frame + 0x28)) = REFG(float, 0x1302c14);
        puVar1 = (undefined4 *)F_004bd830(((undefined1 *)(gen_frame + 0x0)),*(float *)((int)param_1 + 0x88),&(*(undefined4 *)(gen_frame + 0x20)));
        (*(undefined4 *)(gen_frame + 0x24)) = *puVar1;
        (*(undefined4 *)(gen_frame + 0x28)) = puVar1[1];
        (*(undefined4 *)(gen_frame + 0x2c)) = puVar1[2];
        F_004bed50(&(*(undefined4 *)(gen_frame + 0xb8)),(uint)&(*(undefined4 *)(gen_frame + 0x24)));
      }
    }
    if ((*(uint *)(gen_frame + 0x40)) != 0) {
      if ((*(uint *)(gen_frame + 0x40)) < 0x65) {
        piVar3 = ((int *)GEN_TOP((*(int *)((int)param_1 + 0xc) + 8 + (*(uint *)(gen_frame + 0x40)) * 8)));
      }
      else {
        piVar3 = ((int *)GEN_TOP((*(int *)((int)param_1 + 0x10) + -0x318 + (*(uint *)(gen_frame + 0x40)) * 8)));
      }
      (*(int *)(gen_frame + 0x1c)) = *piVar3;
      if (((*(int *)(gen_frame + 0x1c)) != 0) && (piVar3[1] != 0)) {
        uVar2 = piVar3[1];
        (*(uint *)(gen_frame + 0x40)) = uVar2;
        fVar4 = (float10)(int)uVar2;
        if ((int)uVar2 < 0) {
          fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        (*(ushort *)(gen_frame + 0x46)) = ((undefined2)0x27f);
        (*(uint *)(gen_frame + 0x40)) = ((undefined2)0x27f) | 0xc00;
        (*(uint *)(gen_frame + 0x40)) = (uint)TRUNC((fVar4 * (float10)param_2) / (float10)*(double *)&REFG(double, 0x10946a0));
        (*(uint *)(gen_frame + 0x40)) = ((*(uint *)(gen_frame + 0x40)) & 0xffff) % uVar2 & 0xffff;
        F_004c6650(&(*(undefined4 *)(gen_frame + 0x48)),&(*(uint *)(gen_frame + 0x40)),(*(int *)(gen_frame + 0x1c)),uVar2 & 0xffff,REFG(float, 0x10948ac),param_2);
        (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x1302c0c);
        (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x1302c10);
        (*(undefined4 *)(gen_frame + 0x28)) = REFG(float, 0x1302c14);
        puVar1 = (undefined4 *)F_004bd830(((undefined1 *)(gen_frame + 0x0)),*(float *)((int)param_1 + 0x94),&(*(undefined4 *)(gen_frame + 0x20)));
        (*(undefined4 *)(gen_frame + 0x24)) = *puVar1;
        (*(undefined4 *)(gen_frame + 0x28)) = puVar1[1];
        (*(undefined4 *)(gen_frame + 0x2c)) = puVar1[2];
        F_004bed50(&(*(undefined4 *)(gen_frame + 0x48)),(uint)&(*(undefined4 *)(gen_frame + 0x24)));
      }
    }
  }
  uVar2 = F_004bebc0((int)param_1 + 0x14,&(*(undefined4 *)(gen_frame + 0x48)),&(*(undefined4 *)(gen_frame + 0xb8)),*(float *)((int)param_1 + 0x98));
  F_00c47745((*(uint *)(gen_frame + 0x12c)) ^ (uint)(uint)(gen_frame + 0x130));
  return uVar2;
}

/* ref: FUN_004b5d50 */
uint F_004b5d50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4b5d50u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  ushort * puVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (*param_1 == 0) {
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined1 *)((int)param_1 + 0x3a) = 1;
    param_1[0xf] = 0;
  }
  else {
    F_004c70b0(param_1 + 0xe,(int)param_1 + 0x2a,*param_1,(uint)*(ushort *)(param_1 + 7),
                 REFG(float, 0x10948ac),param_2);
  }
  iVar5 = REFG(float, 0x1087f04);
  piVar2 = (int *)param_1[1];
  if (piVar2 == (int *)0x0) {
    param_1[0x10] = GEN_FLT_TO(param_1[0x10], REFG(float, 0x1087f04));
    param_1[0x11] = 0;
  }
  else {
    puVar1 = (ushort *)(param_1 + 0xb);
    if (*(ushort *)((int)param_1 + 0x1e) == 1) {
      *puVar1 = 0;
      param_1[0x10] = *piVar2;
    }
    else {
      F_004c53d0(puVar1,piVar2,(uint)*(ushort *)((int)param_1 + 0x1e),
                   (undefined4)gen_fl2bits(REFG(float, 0x10948ac)),param_2);
      iVar5 = REFG(float, 0x1087f04);
      param_1[0x10] = piVar2[(uint)*puVar1 * 2];
    }
  }
  if (param_1[2] == 0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  else {
    F_004c7170(param_1 + 0x12,(int)param_1 + 0x2e,param_1[2],(uint)*(ushort *)(param_1 + 8),
                 REFG(float, 0x10948ac),param_2);
    iVar5 = REFG(float, 0x1087f04);
  }
  if (param_1[3] == 0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
  }
  else {
    F_004c7230(param_1 + 0x14,param_1 + 0xc,param_1[3],(uint)*(ushort *)((int)param_1 + 0x22),
                 REFG(float, 0x10948ac),param_2);
    iVar5 = REFG(float, 0x1087f04);
  }
  if (param_1[4] == 0) {
    param_1[0x17] = REFG(int, 0x1375558);
    param_1[0x18] = REFG(int, 0x137555c);
    param_1[0x19] = REFG(int, 0x1375560);
    param_1[0x1a] = 0;
  }
  else {
    F_004c7310(param_1 + 0x17,(int)param_1 + 0x32,param_1[4],(uint)*(ushort *)(param_1 + 9),
                 REFG(float, 0x10948ac),param_2);
    iVar5 = REFG(float, 0x1087f04);
  }
  if (param_1[5] == 0) {
    param_1[0x1b] = REFG(int, 0x1375564);
    param_1[0x1c] = REFG(int, 0x1375568);
    param_1[0x1d] = REFG(int, 0x137556c);
    param_1[0x1e] = REFG(int, 0x1375570);
    param_1[0x1f] = REFG(int, 0x1375574);
    param_1[0x20] = REFG(int, 0x1375578);
    param_1[0x21] = 0;
  }
  else {
    F_004c73e0(param_1 + 0x1b,param_1 + 0xd,param_1[5],(uint)*(ushort *)((int)param_1 + 0x26),
                 REFG(float, 0x10948ac),param_2);
    iVar5 = REFG(float, 0x1087f04);
  }
  if (param_1[6] == 0) {
    param_1[0x22] = REFG(int, 0x13016f8);
    param_1[0x23] = REFG(int, 0x13016fc);
    uVar3 = REFG(undefined4, 0x1301700);
    param_1[0x24] = REFG(undefined4, 0x1301700);
    param_1[0x25] = REFG(int, 0x1301704);
    param_1[0x26] = 0;
  }
  else {
    uVar3 = F_004c74d0(param_1 + 0x22,(int)param_1 + 0x36,param_1[6],
                         (uint)*(ushort *)(param_1 + 10),REFG(float, 0x10948ac),param_2);
    iVar5 = REFG(float, 0x1087f04);
  }
  iVar4 = iVar5;
  if (*param_1 == 0) {
    iVar4 = 0;
  }
  param_1[0xf] = iVar4;
  iVar4 = iVar5;
  if (param_1[1] == 0) {
    iVar4 = 0;
  }
  param_1[0x11] = iVar4;
  iVar4 = iVar5;
  if (param_1[2] == 0) {
    iVar4 = 0;
  }
  param_1[0x13] = iVar4;
  iVar4 = iVar5;
  if (param_1[3] == 0) {
    iVar4 = 0;
  }
  param_1[0x16] = iVar4;
  iVar4 = iVar5;
  if (param_1[4] == 0) {
    iVar4 = 0;
  }
  param_1[0x1a] = iVar4;
  iVar4 = iVar5;
  if (param_1[5] == 0) {
    iVar4 = 0;
  }
  param_1[0x21] = iVar4;
  if (param_1[6] == 0) {
    param_1[0x26] = 0;
    return uVar3;
  }
  param_1[0x26] = iVar5;
  return uVar3;
}

/* ref: FUN_004b6080 */
float F_004b6080(unsigned int gen_a0)
{
  GEN_ENTER(0x4b6080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  undefined4 local_8;
  
  if ((REFG(int, 0x1375554) == 0) ||
     (local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),*(char *)(REFG(int, 0x1375554) + 0x1c)),
     *(char *)(REFG(int, 0x1375554) + 0x1c) == '\0')) {
    fVar4 = F_004c3df0((undefined *)((int)this + 0x14));
    return fVar4;
  }
  uVar1 = F_004c3ff0((undefined *)((int)this + 8),local_8);
  if ((-1 < (int)uVar1) && (iVar2 = uVar1 * 0xb4 + *(int *)((int)this + 0xc), iVar2 != 0)) {
    if (REFG(int, 0x1375554) == 0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = *(float *)(REFG(int, 0x1375554) + 0x20);
    }
    F_004b5d50(iVar2,fVar4);
    fVar4 = *(float *)(REFG(int, 0x1371290) + 0x1c);
    if (((!GEN_ISNAN(fVar4) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar4 <= *(float *)&REFG(undefined, 0x1088114))) &&
       ((REFG(int, 0x1375554) == 0 || (*(char *)(REFG(int, 0x1375554) + 0x24) == '\0')))) {
      fVar3 = F_004afe10((int)this + 0x14,(int)this + 0x14,iVar2 + 0x38,fVar4);
      return (float)fVar3;
    }
    fVar3 = F_004afe10((int)this + 0x14,iVar2 + 0x38U,iVar2 + 0x38U,(float)(float10)1);
    return (float)fVar3;
  }
  fVar4 = F_004c3df0((undefined *)((int)this + 0x14));
  return fVar4;
}

/* ref: FUN_004b6160 */
unsigned int F_004b6160(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4b6160u, gen_a0, gen_a1, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  *(undefined1 *)(param_1 + 0x1c) = (undefined1)param_2;
  *(float *)(param_1 + 0x20) = param_3;
  *(undefined1 *)(param_1 + 0x24) = (undefined1)param_4;
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  for (uVar3 = *(uint *)(param_1 + 0x10);
      uVar3 != *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10); uVar3 = uVar3 + 1) {
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    uVar2 = uVar3 >> 2;
    if (*(uint *)(iVar4 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar4 + 8);
    }
    *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar2 * 4))) + (uVar3 & 3) * 4))) + 0x90))) =
         0;
  }
  return 0;
}

/* ref: FUN_004b61d0 */
uint F_004b61d0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0x4b61d0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  memcpy(&gen_args[4], &gen_a4, sizeof gen_a4);
  memcpy(&gen_args[5], &gen_a5, sizeof gen_a5);
  memcpy(&gen_args[6], &gen_a6, sizeof gen_a6);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  char * pcVar2;
  uint uVar3;
  float * pfVar4;
  char * PTR32 * ppcVar5;
  char * PTR32 * ppcVar6;
  char * pcVar7;
  float * pfVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  char * in_xmm0;
  
  in_xmm0 = *((char * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14c)));
  (*(char * PTR32 *)(gen_frame + 0x8)) = in_xmm0;
  if ((GEN_ISNAN(((float)gen_bits2f((unsigned int)(uintptr_t)(in_xmm0)))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
      ((GEN_ISNAN(((float)gen_bits2f((unsigned int)(uintptr_t)(in_xmm0)))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ||
      ((float)gen_bits2f((unsigned int)(uintptr_t)(in_xmm0))) == *(float *)&REFG(undefined, 0x1088114))) {
    (*(float *)&gen_args[6]) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(in_xmm0))) * (float10)(*(float *)&gen_args[6]));
    uVar3 = F_004b41c0((*(undefined * PTR32 *)&gen_args[0]),(*(float *)&gen_args[6]));
    F_004b4130((*(undefined * PTR32 *)&gen_args[0]),uVar3);
  }
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x150))) == '\x01') {
    F_004a3500((*(undefined * PTR32 *)&gen_args[0]),(*(float *)&gen_args[1]),(*(float *)&gen_args[2]),(*(float *)&gen_args[3]),(*(float *)&gen_args[5]),(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x114,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x118);
    F_004a35f0((*(undefined * PTR32 *)&gen_args[0]),(*(float *)&gen_args[1]),(*(float *)&gen_args[2]),(*(float *)&gen_args[3]),(*(float *)&gen_args[5]),(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10c,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x110);
  }
  pcVar7 = ((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x153)));
  (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar7;
  pfVar8 = ((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x140)));
  (*(char * PTR32 *)(gen_frame + 0xc)) = (char *)0x3;
  do {
    if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x150))) == '\x01') || (*pcVar7 == '\x01')) {
      fVar9 = F_004a3320(*pfVar8);
      pfVar8[-0x13] = (float)fVar9;
    }
    if (((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x151))) == '\x01') || (*pcVar7 == '\x01')) ||
       (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x150))) == '\x01')) {
      pfVar4 = &(*(float *)(gen_frame + 0x18));
      (*(float *)&gen_args[6]) = *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x114)));
      fVar9 = (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x114)));
      fVar1 = ((float)GEN_TOF(((float10)1 + (float10)*(float *)&REFG(undefined, 0x1301acc) * (fVar9 - (float10)1))));
      (*(float *)((char *)&(*(double *)(gen_frame + 0x10)) + 4)) = fVar1;
      (*(double *)(gen_frame + 0x10)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar1),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x10)) + 0))));
      (*(float *)(gen_frame + 0x18)) = (float)(fVar9 * (float10)*(float *)&REFG(undefined, 0x1301ac8) + (float10)*(float *)&REFG(undefined, 0x1301ac4))
      ;
      if (!((float10)fVar1 < (float10)(*(float *)(gen_frame + 0x18)))) {
        pfVar4 = (float *)((int)&(*(double *)(gen_frame + 0x10)) + 4);
      }
      in_xmm0 = ((char *)(uintptr_t)gen_fl2bits((float)(*pfVar4)));
      (*(float *)&gen_args[1]) = 0.0;
      (*(float *)&gen_args[6]) = ((float)gen_bits2f((unsigned int)(uintptr_t)(in_xmm0)));
      if (((float)gen_bits2f((unsigned int)(uintptr_t)(in_xmm0))) < 0.0) {
        (*(float *)&gen_args[6]) = 0.0;
      }
      fVar9 = F_004acad0((*(undefined * PTR32 *)&gen_args[0]),((float)gen_bits2f((unsigned int)(uintptr_t)(in_xmm0))),0.0,(*(float *)&gen_args[2]),(*(float *)&gen_args[3]),(*(float *)&gen_args[4]),(*(float *)&gen_args[5]),*pfVar8,(*(float *)&gen_args[6])
                          );
      pfVar8[-0x10] = (float)fVar9;
    }
    if (*pcVar7 == '\x01') {
      fVar9 = F_004a3270((*(undefined * PTR32 *)&gen_args[0]),((float)gen_bits2f((unsigned int)(uintptr_t)(in_xmm0))),(*(float *)&gen_args[1]),(*(float *)&gen_args[2]),(*(float *)&gen_args[3]),(*(float *)&gen_args[4]),(*(float *)&gen_args[5]),*pfVar8);
      pfVar8[-6] = (float)fVar9;
    }
    if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x152))) == '\x01') || (*pcVar7 == '\x01')) {
      (*(float *)&gen_args[6]) = *pfVar8;
      (*(float *)((char *)&(*(double *)(gen_frame + 0x10)) + 4)) = (float)((float10)(*(float *)&gen_args[6]) * (float10)REFG(double, 0x1094438));
      (*(float *)((char *)&(*(double *)(gen_frame + 0x10)) + 4)) =
           ((float)GEN_TOF(((float10)*(float *)&REFG(undefined, 0x130131c) /
                  (float10)(float)((float10)(*(float *)&gen_args[6]) * (float10)REFG(double, 0x1094438)))));
      (*(float *)((char *)&(*(double *)(gen_frame + 0x10)) + 4)) =
           ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x158))) - (float10)*(double *)&REFG(undefined, 0x1092098))));
      fVar9 = F_00c4cb50(((float)gen_bits2f((unsigned int)(uintptr_t)(in_xmm0))),(*(float *)&gen_args[1]),(*(float *)&gen_args[2]),(*(float *)&gen_args[3]),(*(float *)&gen_args[4]),(*(float *)&gen_args[5]),
                           (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x10)) + 4)));
      (*(float *)((char *)&(*(double *)(gen_frame + 0x10)) + 4)) = (float)fVar9;
      (*(double *)(gen_frame + 0x10)) = ((double)GEN_TOD(((((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x15c))) *
                           (float10)*(double *)&REFG(undefined, 0x1094430)) * (float10)*(double *)&REFG(undefined, 0x1080228)) *
                         (float10)(float)fVar9)));
      fVar9 = F_004a3020((*(float *)&gen_args[6]));
      pfVar8[-3] = (float)(fVar9 * (float10)(*(double *)(gen_frame + 0x10)));
    }
    pcVar2 = (*(char * PTR32 *)(gen_frame + 0x8));
    pfVar8 = pfVar8 + 1;
    pcVar7 = pcVar7 + 1;
    (*(char * PTR32 *)(gen_frame + 0xc)) = (char *)((int)(*(char * PTR32 *)(gen_frame + 0xc)) + -1);
  } while ((*(char * PTR32 *)(gen_frame + 0xc)) != (char *)0x0);
  if (((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x151))) != '\0') || (*(*(char * PTR32 *)(gen_frame + 0x8)) != '\0')) ||
     ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x154))) != '\0' ||
      ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x155))) != '\0' || (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x150))) != '\0')))))) {
    fVar9 = (float10)1;
    (*(char * PTR32 *)(gen_frame + 0x8)) = (char *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    fVar11 = (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x114))) + fVar9;
    ppcVar5 = (char * PTR32 *)&(*(float *)&gen_args[6]);
    (*(float *)&gen_args[6]) = (float)(fVar11 * fVar11);
    if (!((float10)(*(float *)&gen_args[6]) < (float10)1)) {
      ppcVar5 = &(*(char * PTR32 *)(gen_frame + 0x8));
    }
    (*(char * PTR32 *)(gen_frame + 0xc)) = *ppcVar5;
    (*(char * PTR32 *)(gen_frame + 0x8)) = (char *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10947f8)));
    ppcVar6 = &(*(char * PTR32 *)(gen_frame + 0x8));
    (*(float *)&gen_args[6]) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x108))) * (float10)*(double *)&REFG(undefined, 0x10948b8) +
                     ((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x104))) * (float10)*(double *)&REFG(undefined, 0x10948c0) +
                     (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x100))) * (float10)*(double *)&REFG(undefined, 0x10948c8)))));
    fVar11 = (float10)(*(float *)&gen_args[6]);
    if (!(fVar11 < (float10)REFG(double, 0x1091858))) {
      ppcVar6 = (char * PTR32 *)&(*(float *)&gen_args[6]);
    }
    fVar10 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppcVar5)));
    (*(char * PTR32 *)(gen_frame + 0x8)) = ((char *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar10 * (float10)((float)GEN_TOF(((fVar9 - (float10)*(float *)&REFG(undefined, 0x1301ac0))
                                                        + (float10)*(float *)&REFG(undefined, 0x1301ac0) *
                                                          (float10)(float)((float10)*(double *)
                                                                                     &REFG(undefined, 0x10948b0) /
                                                                          (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppcVar6)))))))
                              ))))));
    fVar11 = (fVar9 - fVar10) * fVar11;
    fVar9 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(char * PTR32 *)(gen_frame + 0x8)))));
    fVar1 = ((float)GEN_TOF((fVar9 * (float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x100))) * fVar10 +
                                            fVar11))))));
    *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x100))) = fVar1;
    *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x11c))) =
         ((float)GEN_TOF(((float10)fVar1 * (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf4))))));
    fVar1 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x104))) * fVar10 + fVar11))) *
                   fVar9)));
    *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x104))) = fVar1;
    *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x120))) =
         ((float)GEN_TOF(((float10)fVar1 * (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8))))));
    fVar1 = ((float)GEN_TOF((fVar9 * (float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x108))) * fVar10 +
                                            fVar11))))));
    *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x108))) = fVar1;
    *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x124))) =
         ((float)GEN_TOF(((float10)fVar1 * (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xfc))))));
  }
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x150))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x152))) = 0;
  pcVar2[0] = '\0';
  pcVar2[1] = '\0';
  pcVar2[2] = '\0';
  return 0;
}

/* ref: FUN_004b9dc0 */
byte F_004b9dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4b9dc0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * this;
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int local_8;
  
  iVar3 = param_2;
  if (param_2 == 0) {
    return 0;
  }
  iVar5 = *(int *)(param_1 + 0xc) + param_1;
  *(uint *)(param_2 + 0x8c) =
       *(uint *)(param_2 + 0x8c) ^
       ((uint)*((byte *)GEN_TOP((*(int *)(param_1 + 0xc) + param_1))) ^ *(uint *)(param_2 + 0x8c)) & 1;
  uVar1 = *(uint *)(param_2 + 0x8c);
  uVar13 = (uint)(*(char *)(iVar5 + 1) != '\0') << 2;
  *(uint *)(param_2 + 0x8c) = uVar13 | uVar1 & 0xfffffffb;
  uVar2 = (uint)(*(char *)(iVar5 + 2) != '\0') << 3;
  *(uint *)(param_2 + 0x8c) = uVar2 | uVar13 | uVar1 & 0xfffffff3;
  uVar6 = (uint)(*(char *)(iVar5 + 3) != '\0') << 4;
  *(uint *)(param_2 + 0x8c) = uVar6 | uVar2 | uVar13 | uVar1 & 0xffffffe3;
  uVar7 = (uint)(*(char *)(iVar5 + 4) != '\0') << 5;
  *(uint *)(param_2 + 0x8c) = uVar7 | uVar6 | uVar2 | uVar13 | uVar1 & 0xffffffc3;
  uVar8 = (uint)(*(char *)(iVar5 + 5) != '\0') << 6;
  *(uint *)(param_2 + 0x8c) = uVar8 | uVar7 | uVar6 | uVar2 | uVar13 | uVar1 & 0xffffff83;
  uVar9 = (uint)(*(char *)(iVar5 + 10) != '\0') << 7;
  *(uint *)(param_2 + 0x8c) = uVar9 | uVar8 | uVar7 | uVar6 | uVar2 | uVar13 | uVar1 & 0xffffff03;
  uVar10 = (uint)(*(char *)(iVar5 + 6) != '\0') << 8;
  *(uint *)(param_2 + 0x8c) =
       uVar10 | uVar9 | uVar8 | uVar7 | uVar6 | uVar2 | uVar13 | uVar1 & 0xfffffe03;
  uVar11 = (uint)(*(char *)(iVar5 + 8) != '\0') << 9;
  *(uint *)(param_2 + 0x8c) =
       uVar11 | uVar10 | uVar9 | uVar8 | uVar7 | uVar6 | uVar2 | uVar13 | uVar1 & 0xfffffc03;
  uVar12 = (uint)(*(char *)(iVar5 + 9) != '\0') << 10;
  *(uint *)(param_2 + 0x8c) =
       uVar12 | uVar11 | uVar10 | uVar9 | uVar8 | uVar7 | uVar6 | uVar2 | uVar13 | uVar1 & 
                                                  0xfffff803;
  *(uint *)(param_2 + 0x8c) =
       (uint)(*(char *)(iVar5 + 0xb) != '\0') << 0xb |
       uVar12 | uVar11 | uVar10 | uVar9 | uVar8 | uVar7 | uVar6 | uVar2 | uVar13 | uVar1 & 
                                                  0xfffff003;
  uVar1 = *(uint *)(param_1 + 8);
  this = (int *)(param_2 + 8);
  bVar4 = F_004c7d30(this,uVar1);
  if (bVar4 == 0) {
    return 0;
  }
  uVar13 = 0;
  if (uVar1 != 0) {
    local_8 = 0;
    param_2 = 0;
    do {
      iVar5 = *(int *)(param_1 + 4) + param_2;
      *(undefined1 *)(uVar13 + *this) = *(undefined1 *)(iVar5 + 8 + param_1);
      bVar4 = F_004b0a00(iVar5 + param_1,*(int *)(iVar3 + 0xc) + local_8);
      if (bVar4 == 0) {
        return 0;
      }
      param_2 = param_2 + 0x10;
      local_8 = local_8 + 0xb4;
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar1);
  }
  return 1;
}

/* ref: FUN_004b9f60 */
uint F_004b9f60(unsigned int gen_a0)
{
  GEN_ENTER(0x4b9f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10948d4));
  puVar1 = (undefined4 *)((int)this + 4);
  *puVar1 = 0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0xce);
  *puVar1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)this;
}

/* ref: FUN_004b9fb0 */
uint F_004b9fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4b9fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  
  piVar2 = (int *)((int)this + 4);
  piVar1 = (int *)*piVar2;
  uVar8 = *(uint *)((int)this + 0x10);
  (*(int * PTR32 *)(gen_frame + 0x18)) = piVar2;
  ((int * PTR32 *)(gen_frame + 0xc))[0] = piVar1;
  uVar6 = *(int *)((int)this + 0x14) + uVar8;
  piVar4 = piVar1;
  while( true ) {
    if (uVar8 == uVar6) {
      return (uint)piVar2;
    }
    if (piVar4 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar4;
    }
    uVar3 = uVar8 >> 1;
    if (*(uint *)(iVar7 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar7 + 8);
    }
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(iVar7 + 4) + uVar3 * 4)));
    if (piVar2[(uVar8 & 1) * 2] == param_1) break;
    uVar8 = uVar8 + 1;
    piVar4 = ((int * PTR32 *)(gen_frame + 0xc))[0];
  }
  if (piVar1 == (int *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *piVar1;
  }
  uVar3 = uVar8 >> 1;
  uVar5 = uVar8 & 1;
  uVar6 = uVar3;
  if (*(uint *)(iVar7 + 8) <= uVar3) {
    uVar6 = uVar3 - *(uint *)(iVar7 + 8);
  }
  iVar7 = *((int *)GEN_TOP((*(int *)(iVar7 + 4) + uVar6 * 4)));
  piVar2 = (int *)(iVar7 + 4 + uVar5 * 8);
  *piVar2 = *piVar2 + -1;
  if (*(int *)(iVar7 + 4 + uVar5 * 8) != 0) {
    return iVar7 + 4 + uVar5 * 8;
  }
  if (piVar1 == (int *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *piVar1;
  }
  if (*(uint *)(iVar7 + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)(iVar7 + 8);
  }
  F_00406ad0(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar7 + 4) + uVar3 * 4))) + uVar5 * 8))));
  uVar9 = 0;
  if ((piVar1 != (int *)0x0) && ((undefined4 *)*piVar1 != (undefined4 *)0x0)) {
    uVar9 = *(undefined4 *)*piVar1;
  }
  uVar8 = F_004c86a0((*(int * PTR32 *)(gen_frame + 0x18)),((int * PTR32 *)(gen_frame + 0xc)),uVar9,0,uVar8);
  return uVar8;
}

/* ref: FUN_004ba0a0 */
uint F_004ba0a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4ba0a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10948dc));
  puVar1 = (undefined4 *)((int)this + 4);
  *puVar1 = 0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0xce);
  *puVar1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)this;
}

/* ref: FUN_004ba0f0 */
unsigned int F_004ba0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ba0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  ((int * PTR32 *)(gen_frame + 0xc))[0] = *(int * PTR32 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 0x10);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)((int)this + 4);
  uVar2 = *(int *)((int)this + 0x14) + uVar4;
  piVar5 = ((int * PTR32 *)(gen_frame + 0xc))[0];
  while( true ) {
    if (uVar4 == uVar2) {
      return 0;
    }
    if (piVar5 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar5;
    }
    uVar1 = uVar4 >> 2;
    if (*(uint *)(iVar6 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar6 + 8);
    }
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar1 * 4))) + (uVar4 & 3) * 4))) == param_1) break;
    uVar4 = uVar4 + 1;
    piVar5 = ((int * PTR32 *)(gen_frame + 0xc))[0];
  }
  piVar5 = (int *)0x0;
  if ((((int * PTR32 *)(gen_frame + 0xc))[0] != (int *)0x0) && (((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0xc))[0])) != (undefined4 *)0x0)) {
    piVar5 = *((int * PTR32 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0xc))[0]));
  }
  piVar3 = (int *)0x0;
  if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
    piVar3 = *(int * PTR32 *)*piVar5;
  }
  uVar8 = 0;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    uVar8 = *(undefined4 *)*piVar3;
  }
  uVar7 = 0;
  if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
    uVar7 = *(undefined4 *)*piVar5;
  }
  F_004c80d0((undefined *)((int)this + 4),((int * PTR32 *)(gen_frame + 0xc)),uVar7,0,uVar4,uVar8,0,uVar4 + 1);
  return 0;
}

/* ref: FUN_004ba1c0 */
uint F_004ba1c0(unsigned int gen_a0)
{
  GEN_ENTER(0x4ba1c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10948f4));
  puVar1 = (undefined4 *)((int)this + 4);
  *puVar1 = 0;
  puVar2 = (undefined4 *)F_004296a0(8,0,0xce);
  *puVar1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x24) = 1;
  return (uint)this;
}

/* ref: FUN_004ba220 */
unsigned int F_004ba220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ba220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  ((int * PTR32 *)(gen_frame + 0xc))[0] = *(int * PTR32 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 0x10);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)((int)this + 4);
  uVar2 = *(int *)((int)this + 0x14) + uVar4;
  piVar5 = ((int * PTR32 *)(gen_frame + 0xc))[0];
  while( true ) {
    if (uVar4 == uVar2) {
      return 0;
    }
    if (piVar5 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar5;
    }
    uVar1 = uVar4 >> 2;
    if (*(uint *)(iVar6 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar6 + 8);
    }
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar1 * 4))) + (uVar4 & 3) * 4))) == param_1) break;
    uVar4 = uVar4 + 1;
    piVar5 = ((int * PTR32 *)(gen_frame + 0xc))[0];
  }
  piVar5 = (int *)0x0;
  if ((((int * PTR32 *)(gen_frame + 0xc))[0] != (int *)0x0) && (((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0xc))[0])) != (undefined4 *)0x0)) {
    piVar5 = *((int * PTR32 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0xc))[0]));
  }
  piVar3 = (int *)0x0;
  if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
    piVar3 = *(int * PTR32 *)*piVar5;
  }
  uVar8 = 0;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    uVar8 = *(undefined4 *)*piVar3;
  }
  uVar7 = 0;
  if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
    uVar7 = *(undefined4 *)*piVar5;
  }
  F_004c8260((undefined *)((int)this + 4),((int * PTR32 *)(gen_frame + 0xc)),uVar7,0,uVar4,uVar8,0,uVar4 + 1);
  return 0;
}

/* ref: FUN_004ba2f0 */
unsigned int F_004ba2f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4ba2f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if (REFG(undefined4, 0x137554c) != (undefined4 *)0x0) {
    F_004b9fb0(REFG(undefined4, 0x137554c),param_1);
    if (REFG(undefined4 * PTR32, 0x137554c)[5] == 0) {
      ((code *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x137554c))))(REFG(undefined4, 0x137554c),1);
      REFG(undefined4, 0x137554c) = (undefined4 *)0x0;
    }
  }
  return 0;
}

/* ref: FUN_004ba330 */
uint F_004ba330(unsigned int gen_a0)
{
  GEN_ENTER(0x4ba330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint * puVar4;
  
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = uVar1;
  puVar4 = (uint *)((int)this + 8);
  iVar3 = 2;
  do {
    uVar2 = *puVar4;
    if (uVar2 != 0) {
      if (REFG(undefined4, 0x137554c) != (undefined4 *)0x0) {
        uVar2 = F_004b9fb0(REFG(undefined4, 0x137554c),uVar2);
        if (REFG(undefined4 * PTR32, 0x137554c)[5] == 0) {
          uVar2 = ((code *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x137554c))))(REFG(undefined4, 0x137554c),1);
          REFG(undefined4, 0x137554c) = (undefined4 *)0x0;
        }
      }
      *puVar4 = 0;
    }
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return uVar2;
}

/* ref: FUN_004ba3a0 */
uint F_004ba3a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4ba3a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  F_004ba330((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x38) = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x3c) = uVar1;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
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
  uVar2 = REFG(float, 0x1094724);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0xb4) = uVar2;
  uVar2 = REFG(float, 0x1088068);
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb8) = uVar1;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = uVar1;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = uVar1;
  *(undefined4 *)((int)this + 0xe8) = uVar1;
  *(undefined4 *)((int)this + 0xec) = uVar1;
  *(undefined4 *)((int)this + 0xf0) = uVar1;
  *(undefined4 *)((int)this + 0xf4) = uVar1;
  *(undefined4 *)((int)this + 0xf8) = uVar1;
  *(undefined4 *)((int)this + 0xfc) = uVar2;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = uVar1;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = uVar1;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = uVar1;
  *(undefined4 *)((int)this + 400) = uVar1;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  if ((*(uint *)(REFG(int, 0x137128c) + 0x1514) >> 0xd & 1) != 0) {
    F_00678870(REFG(int, 0x137128c));
  }
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  uVar3 = F_004a44a0((undefined *)((int)this + 0x1c8));
  return uVar3;
}

/* ref: FUN_004ba750 */
unsigned int F_004ba750(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ba750u, gen_a0, 0u, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_8;
  
  if (*(char *)(param_1 + 0x224) == '\0') {
    *(undefined1 *)(param_1 + 0x225) = 0;
    return 0;
  }
  local_8 = CONCAT31((int3)((uint)param_1 >> 8),*(undefined1 *)(REFG(int, 0x1371290) + 0x22));
  uVar2 = F_004c3f80((undefined *)(param_1 + 8),local_8);
  if ((int)uVar2 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = uVar2 * 0x294 + *(int *)(param_1 + 0xc);
  }
  if (iVar3 != 0) {
    F_004b4490(iVar3,param_2,param_3);
    param_3 = iVar3 + 0x84;
  }
  if (param_3 != 0) {
    fVar1 = *(float *)(REFG(int, 0x1371290) + 0x1c);
    if (((!GEN_ISNAN(fVar1) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar1 <= *(float *)&REFG(undefined, 0x1088114))) &&
       (*(char *)(param_1 + 0x225) != '\0')) {
      F_004ae300(param_1 + 0x14,param_3,fVar1);
      *(undefined2 *)(param_1 + 0x224) = 0x100;
      return 0;
    }
    F_004a45e0((undefined *)(param_1 + 0x14),param_3);
    *(undefined2 *)(param_1 + 0x224) = 0x100;
    return 0;
  }
  F_004ba3a0((undefined *)(param_1 + 0x14));
  *(undefined2 *)(param_1 + 0x224) = 0x100;
  return 0;
}

/* ref: FUN_004ba830 */
unsigned int F_004ba830(unsigned int gen_a0)
{
  GEN_ENTER(0x4ba830u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if (REFG(undefined4, 0x1375550) != (undefined4 *)0x0) {
    F_004ba0f0(REFG(undefined4, 0x1375550),param_1);
    if (REFG(undefined4 * PTR32, 0x1375550)[5] == 0) {
      ((code *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x1375550))))(REFG(undefined4, 0x1375550),1);
      REFG(undefined4, 0x1375550) = (undefined4 *)0x0;
    }
  }
  return 0;
}

/* ref: FUN_004ba870 */
uint F_004ba870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ba870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int * local_10;
  
  uVar5 = *(uint *)((int)this + 0x10);
  local_10 = (int *)0x0;
  if ((*(int * PTR32 *)((int)this + 4) != (int *)0x0) &&
     (puVar2 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4))), puVar2 != (undefined4 *)0x0)) {
    local_10 = (int *)*puVar2;
  }
  uVar3 = *(int *)((int)this + 0x14) + uVar5;
  while( true ) {
    if (uVar5 == uVar3) {
      if (((*(int *)((int)this + 0x10) + *(int *)((int)this + 0x14) & 3U) == 0) &&
         (*(uint *)((int)this + 0xc) <= *(int *)((int)this + 0x14) + 4U >> 2)) {
        F_004c89a0((undefined *)((int)this + 4),1);
      }
      uVar5 = *(int *)((int)this + 0x10) + *(int *)((int)this + 0x14);
      uVar3 = uVar5 >> 2;
      if (*(uint *)((int)this + 0xc) <= uVar3) {
        uVar3 = uVar3 - *(uint *)((int)this + 0xc);
      }
      if (*((int *)GEN_TOP((*(int *)((int)this + 8) + uVar3 * 4))) == 0) {
        uVar4 = F_004296a0(0x10,0,0xce);
        *((uint *)GEN_TOP((*(int *)((int)this + 8) + uVar3 * 4))) = uVar4;
      }
      uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 8) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP((uVar3 + (uVar5 & 3) * 4)));
      if (piVar1 != (int *)0x0) {
        *piVar1 = param_1;
      }
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
      return uVar3;
    }
    if (local_10 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *local_10;
    }
    uVar4 = uVar5 >> 2;
    if (*(uint *)(iVar6 + 8) <= uVar4) {
      uVar4 = uVar4 - *(uint *)(iVar6 + 8);
    }
    uVar4 = *((uint *)GEN_TOP((*(int *)(iVar6 + 4) + uVar4 * 4)));
    if (*((int *)GEN_TOP((uVar4 + (uVar5 & 3) * 4))) == param_1) break;
    uVar5 = uVar5 + 1;
  }
  return uVar4;
}

/* ref: FUN_004ba950 */
unsigned int F_004ba950(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ba950u, gen_a0, 0u, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_3 != 0) {
    F_004ba750(param_3,param_2,0);
    piVar1 = *(int * PTR32 *)(param_1 + 4);
    for (uVar4 = *(uint *)(param_1 + 0x10);
        uVar4 != *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x10); uVar4 = uVar4 + 1) {
      if (piVar1 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar1;
      }
      uVar2 = uVar4 >> 2;
      if (*(uint *)(iVar3 + 8) <= uVar2) {
        uVar2 = uVar2 - *(uint *)(iVar3 + 8);
      }
      iVar3 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + (uVar4 & 3) * 4)));
      if (iVar3 != param_3) {
        F_004ba750(iVar3,param_2,param_3 + 0x14);
      }
    }
  }
  return 0;
}

/* ref: FUN_004ba9e0 */
byte F_004ba9e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4ba9e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined1 uVar4;
  uint uVar5;
  float * pfVar6;
  undefined1 uVar7;
  undefined4 * puVar8;
  
  uVar2 = REFG(float, 0x10948f8);
  *(undefined4 *)((int)this + 0xc) = REFG(float, 0x10948f8);
  *(undefined4 *)((int)this + 8) = uVar2;
  *(undefined2 *)((int)this + 0x21) = 0;
  *(undefined1 *)((int)this + 0x23) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x20) = 0xff;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined2 *)((int)this + 0x28) = 1;
  F_004ba3a0((undefined *)((int)this + 0x44));
  uVar5 = 0;
  puVar8 = (undefined4 *)((int)this + 0x254);
  do {
    *(undefined1 *)((int)this + uVar5 + 0x2a) = 0xff;
    *puVar8 = 0;
    uVar5 = uVar5 + 1;
    puVar8 = puVar8 + 1;
  } while (uVar5 < 2);
  *(uint *)&REFG(undefined, 0x137559c) = F_00513dc0("bgcommon/nature/sky/ambient/skylight.amb",0,0,0);
  if ((*(uint *)&REFG(undefined, 0x137559c) != 0) &&
     (*(uint *)&REFG(undefined, 0x13755a0) = F_00513dc0("bgcommon/nature/sky/ambient/skylight2.amb",0,0,0),
     *(uint *)&REFG(undefined, 0x13755a0) != 0)) {
    *(undefined4 *)((int)this + 0x850) = REFG(float, 0x1375ac0);
    *(undefined4 *)((int)this + 0x854) = REFG(float, 0x1375ac4);
    *(undefined4 *)((int)this + 0x858) = REFG(float, 0x1375ac8);
    *(undefined4 *)((int)this + 0x860) = REFG(undefined4, 0x1302cf0);
    *(undefined4 *)((int)this + 0x864) = REFG(undefined4, 0x1302cf4);
    *(undefined4 *)((int)this + 0x868) = REFG(undefined4, 0x1302cf8);
    *(undefined4 *)((int)this + 0x86c) = REFG(undefined4, 0x1302cfc);
    *(undefined4 *)((int)this + 0x870) = REFG(float, 0x1302c60);
    *(undefined4 *)((int)this + 0x874) = REFG(float, 0x1302c64);
    *(undefined4 *)((int)this + 0x878) = REFG(float, 0x1302c68);
    uVar5 = F_00625830((undefined4 *)((int)this + 0x850));
    *(uint *)((int)this + 0x840) = uVar5;
    if (uVar5 != 0) {
      *(undefined4 *)(uVar5 + 0xc) = 1;
      bVar3 = F_006285c0((undefined *)((int)this + 0x880));
      if (bVar3 != 0) {
        *(undefined4 *)((int)this + 0x9d0) = 0;
        if ((*(byte *)((int)this + 0x9d0) & 1) == 0) {
          *(uint *)((int)this + 0x9d0) = *(uint *)((int)this + 0x9d0) | 1;
          if (((((*(byte *)((int)this + 0x9d0) & 1) == 0) &&
               (uVar5 = *(uint *)((int)this + 0x9d0), (uVar5 >> 1 & 1) == 0)) &&
              ((uVar5 >> 2 & 1) == 0)) && (((uVar5 >> 3 & 1) == 0 && ((uVar5 >> 4 & 1) == 0)))) {
            uVar7 = 0;
          }
          else {
            uVar7 = 1;
          }
          *(undefined1 *)(REFG(int, 0x1371284) + 0x10) = uVar7;
        }
        if ((*(uint *)((int)this + 0x9d0) >> 5 & 1) == 0) {
          *(uint *)((int)this + 0x9d0) = *(uint *)((int)this + 0x9d0) | 0x20;
          if ((((*(byte *)((int)this + 0x9d0) & 1) == 0) &&
              (uVar5 = *(uint *)((int)this + 0x9d0), (uVar5 >> 1 & 1) == 0)) &&
             (((uVar5 >> 2 & 1) == 0 && (((uVar5 >> 3 & 1) == 0 && ((uVar5 >> 4 & 1) == 0)))))) {
            uVar7 = 0;
          }
          else {
            uVar7 = 1;
          }
          *(undefined1 *)(REFG(int, 0x1371284) + 0x10) = uVar7;
        }
        uVar7 = 1;
        if ((*(uint *)((int)this + 0x9d0) >> 1 & 1) == 0) {
          *(uint *)((int)this + 0x9d0) = *(uint *)((int)this + 0x9d0) | 2;
          uVar4 = uVar7;
          if (((((*(byte *)((int)this + 0x9d0) & 1) == 0) &&
               (uVar5 = *(uint *)((int)this + 0x9d0), (uVar5 >> 1 & 1) == 0)) &&
              ((uVar5 >> 2 & 1) == 0)) && (((uVar5 >> 3 & 1) == 0 && ((uVar5 >> 4 & 1) == 0)))) {
            uVar4 = 0;
          }
          *(undefined1 *)(REFG(int, 0x1371284) + 0x10) = uVar4;
        }
        if ((*(uint *)((int)this + 0x9d0) >> 2 & 1) == 0) {
          *(uint *)((int)this + 0x9d0) = *(uint *)((int)this + 0x9d0) | 4;
          if ((((*(byte *)((int)this + 0x9d0) & 1) == 0) &&
              (uVar5 = *(uint *)((int)this + 0x9d0), (uVar5 >> 1 & 1) == 0)) &&
             (((uVar5 >> 2 & 1) == 0 && (((uVar5 >> 3 & 1) == 0 && ((uVar5 >> 4 & 1) == 0)))))) {
            uVar7 = 0;
          }
          *(undefined1 *)(REFG(int, 0x1371284) + 0x10) = uVar7;
        }
        bVar3 = F_0062eeb0((undefined *)((int)this + 0x9d4));
        if (((bVar3 != 0) && (bVar3 = F_0062f120((undefined *)((int)this + 0x9e0)), bVar3 != 0)) &&
           (bVar3 = F_00625d30((undefined *)((int)this + 0x9ec)), uVar2 = REFG(float, 0x1094834), bVar3 != 0)) {
          *(float *)((int)this + 0xa94) = REFG(float, 0x1302c0c);
          *(float *)((int)this + 0xa98) = REFG(float, 0x1302c10);
          *(undefined4 *)((int)this + 0xa9c) = REFG(float, 0x1302c14);
          *(undefined4 *)((int)this + 0xaa0) = uVar2;
          fVar1 = REFG(float, 0x1088068);
          *(float *)((int)this + 0xaa4) = REFG(float, 0x1088068);
          *(float *)((int)this + 0xaa8) = fVar1;
          *(float *)((int)this + 0xaac) = fVar1;
          *(float *)((int)this + 0xab0) = fVar1;
          F_004ba3a0(&REFG(undefined * PTR32, 0x13014e8));
          (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1088068);
          *(float *)&REFG(undefined, 0x13014fc) = REFG(float, 0x1302c0c);
          (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x1088068);
          *(undefined4 *)&REFG(undefined, 0x1301504) = REFG(float, 0x1302c14);
          (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1088068);
          *(float *)&REFG(undefined, 0x1301500) = REFG(float, 0x1302c10);
          (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1088068);
          *(float *)&REFG(undefined, 0x1301508) = REFG(float, 0x1088068);
          *(float *)&REFG(undefined, 0x1301510) = REFG(float, 0x1088068);
          (*(float *)(gen_frame + 0x18)) = 0.0;
          *(float *)&REFG(undefined, 0x130150c) = REFG(float, 0x1088068);
          (*(float *)(gen_frame + 0x1c)) = gen_bits2f(REFG(float, 0x1087f04));
          *(float *)&REFG(undefined, 0x1301570) = REFG(float, 0x1088068);
          *(undefined4 *)&REFG(undefined, 0x1301578) = 0;
          *(undefined4 *)&REFG(undefined, 0x13014ec) = 0;
          *(float *)&REFG(undefined, 0x1301574) = REFG(float, 0x1088068);
          *(undefined4 *)&REFG(undefined, 0x130157c) = REFG(float, 0x1087f04);
          *(undefined4 *)&REFG(undefined, 0x1301580) = REFG(float, 0x1087f04);
          F_004a9cc0(&REFG(undefined, 0x13754e0));
          (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1302c0c);
          (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1302c10);
          (*(float *)(gen_frame + 0x18)) = gen_bits2f(REFG(float, 0x1302c14));
          pfVar6 = (float *)F_004bd830(((undefined1 *)(gen_frame + 0x0)),REFG(float, 0x1088068),&(*(float *)(gen_frame + 0x10)));
          (*(float *)(gen_frame + 0x14)) = *pfVar6;
          (*(float *)(gen_frame + 0x18)) = pfVar6[1];
          (*(float *)(gen_frame + 0x1c)) = pfVar6[2];
          F_004becb0(&REFG(undefined, 0x13754e0),&(*(float *)(gen_frame + 0x14)));
          *(undefined4 *)((int)this + 4) = 0;
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_004bae60 */
uint F_004bae60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bae60u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined1 uVar1;
  uint * puVar2;
  uint uVar3;
  bool bVar4;
  
  bVar4 = (*(int *)&gen_args[1]) != 0;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (*(int *)&gen_args[1]);
  puVar2 = (uint *)((int)REFG(undefined4, 0x1371290) + 0x9d0);
  (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),bVar4);
  if ((*(byte *)puVar2 & 1) == 0) {
    *puVar2 = *puVar2 | 1;
    if (((((*(byte *)puVar2 & 1) == 0) && (uVar3 = *puVar2, (uVar3 >> 1 & 1) == 0)) &&
        ((uVar3 >> 2 & 1) == 0)) && (((uVar3 >> 3 & 1) == 0 && ((uVar3 >> 4 & 1) == 0)))) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(REFG(int, 0x1371284) + 0x10) = uVar1;
  }
  puVar2 = (uint *)((int)REFG(undefined4, 0x1371290) + 0x9d0);
  if ((*(uint *)((int)REFG(undefined4, 0x1371290) + 0x9d0) >> 2 & 1) == 0) {
    *puVar2 = *puVar2 | 4;
    if ((((*(byte *)puVar2 & 1) == 0) && (uVar3 = *puVar2, (uVar3 >> 1 & 1) == 0)) &&
       (((uVar3 >> 2 & 1) == 0 && (((uVar3 >> 3 & 1) == 0 && ((uVar3 >> 4 & 1) == 0)))))) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(REFG(int, 0x1371284) + 0x10) = uVar1;
  }
  puVar2 = (uint *)((int)REFG(undefined4, 0x1371290) + 0x9d0);
  if ((*(uint *)((int)REFG(undefined4, 0x1371290) + 0x9d0) >> 3 & 1) == 0) {
    *puVar2 = *puVar2 | 8;
    if (((((*(byte *)puVar2 & 1) == 0) && (uVar3 = *puVar2, (uVar3 >> 1 & 1) == 0)) &&
        ((uVar3 >> 2 & 1) == 0)) && (((uVar3 >> 3 & 1) == 0 && ((uVar3 >> 4 & 1) == 0)))) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(REFG(int, 0x1371284) + 0x10) = uVar1;
  }
  puVar2 = (uint *)((int)REFG(undefined4, 0x1371290) + 0x9d0);
  if ((*(uint *)((int)REFG(undefined4, 0x1371290) + 0x9d0) >> 4 & 1) == 0) {
    *puVar2 = *puVar2 | 0x10;
    if ((((*(byte *)puVar2 & 1) == 0) && (uVar3 = *puVar2, (uVar3 >> 1 & 1) == 0)) &&
       (((uVar3 >> 2 & 1) == 0 && (((uVar3 >> 3 & 1) == 0 && ((uVar3 >> 4 & 1) == 0)))))) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(REFG(int, 0x1371284) + 0x10) = uVar1;
  }
  puVar2 = (uint *)((int)REFG(undefined4, 0x1371290) + 0x9d0);
  if ((*(uint *)((int)REFG(undefined4, 0x1371290) + 0x9d0) >> 5 & 1) == 0) {
    *puVar2 = *puVar2 | 0x20;
    if (((((*(byte *)puVar2 & 1) == 0) && (uVar3 = *puVar2, (uVar3 >> 1 & 1) == 0)) &&
        ((uVar3 >> 2 & 1) == 0)) && (((uVar3 >> 3 & 1) == 0 && ((uVar3 >> 4 & 1) == 0)))) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(REFG(int, 0x1371284) + 0x10) = uVar1;
  }
  F_004afd30(REFG(undefined4, 0x1371290),6,(*(int *)&gen_args[1]));
  F_004afd30(REFG(undefined4, 0x1371290),7,(*(int *)&gen_args[1]));
  F_004afd30(REFG(undefined4, 0x1371290),8,(*(int *)&gen_args[1]));
  F_004afd30(REFG(undefined4, 0x1371290),9,(*(int *)&gen_args[1]));
  F_004afd30(REFG(undefined4, 0x1371290),10,(*(int *)&gen_args[1]));
  if (bVar4) {
    F_00697f80(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x2c))));
  }
  else {
    F_004c1700();
  }
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0xff;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x23))) = *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x22)));
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x22))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 0;
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 1;
  F_004ba3a0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))));
  F_004a4400(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 800))));
  *(undefined4 *)&REFG(undefined, 0x13757c0) = 0;
  uVar3 = F_0061e3c0();
  return uVar3;
}

/* ref: FUN_004bb0c0 */
unsigned int F_004bb0c0(unsigned int gen_a0)
{
  GEN_ENTER(0x4bb0c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if (REFG(undefined4, 0x1375554) != (undefined4 *)0x0) {
    F_004ba220(REFG(undefined4, 0x1375554),param_1);
    if (REFG(undefined4 * PTR32, 0x1375554)[5] == 0) {
      ((code *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x1375554))))(REFG(undefined4, 0x1375554),1);
      REFG(undefined4, 0x1375554) = (undefined4 *)0x0;
    }
  }
  return 0;
}

/* ref: FUN_004bb100 */
uint F_004bb100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bb100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int * local_10;
  
  uVar5 = *(uint *)((int)this + 0x10);
  local_10 = (int *)0x0;
  if ((*(int * PTR32 *)((int)this + 4) != (int *)0x0) &&
     (puVar2 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4))), puVar2 != (undefined4 *)0x0)) {
    local_10 = (int *)*puVar2;
  }
  uVar3 = *(int *)((int)this + 0x14) + uVar5;
  while( true ) {
    if (uVar5 == uVar3) {
      if (((*(int *)((int)this + 0x10) + *(int *)((int)this + 0x14) & 3U) == 0) &&
         (*(uint *)((int)this + 0xc) <= *(int *)((int)this + 0x14) + 4U >> 2)) {
        F_004c8b20((undefined *)((int)this + 4),1);
      }
      uVar5 = *(int *)((int)this + 0x10) + *(int *)((int)this + 0x14);
      uVar3 = uVar5 >> 2;
      if (*(uint *)((int)this + 0xc) <= uVar3) {
        uVar3 = uVar3 - *(uint *)((int)this + 0xc);
      }
      if (*((int *)GEN_TOP((*(int *)((int)this + 8) + uVar3 * 4))) == 0) {
        uVar4 = F_004296a0(0x10,0,0xce);
        *((uint *)GEN_TOP((*(int *)((int)this + 8) + uVar3 * 4))) = uVar4;
      }
      uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 8) + uVar3 * 4)));
      piVar1 = ((int *)GEN_TOP((uVar3 + (uVar5 & 3) * 4)));
      if (piVar1 != (int *)0x0) {
        *piVar1 = param_1;
      }
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
      return uVar3;
    }
    if (local_10 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *local_10;
    }
    uVar4 = uVar5 >> 2;
    if (*(uint *)(iVar6 + 8) <= uVar4) {
      uVar4 = uVar4 - *(uint *)(iVar6 + 8);
    }
    uVar4 = *((uint *)GEN_TOP((*(int *)(iVar6 + 4) + uVar4 * 4)));
    if (*((int *)GEN_TOP((uVar4 + (uVar5 & 3) * 4))) == param_1) break;
    uVar5 = uVar5 + 1;
  }
  return uVar4;
}

/* ref: FUN_004bb1e0 */
uint F_004bb1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bb1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  byte * pbVar2;
  uint uVar3;
  byte * pbVar4;
  int * piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  undefined4 uVar10;
  
  if (param_1 != (byte *)0x0) {
    pbVar2 = param_1;
    do {
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
    if (pbVar2 != param_1 + 1) {
      uVar6 = *(uint *)((int)this + 0x10);
      ((int * PTR32 *)(gen_frame + 0x4))[0] = *(int * PTR32 *)((int)this + 4);
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)((int)this + 4);
      uVar8 = *(int *)((int)this + 0x14) + uVar6;
      piVar5 = ((int * PTR32 *)(gen_frame + 0x4))[0];
      for (; uVar6 != uVar8; uVar6 = uVar6 + 1) {
        if (piVar5 == (int *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *piVar5;
        }
        uVar3 = uVar6 >> 1;
        if (*(uint *)(iVar7 + 8) <= uVar3) {
          uVar3 = uVar3 - *(uint *)(iVar7 + 8);
        }
        pbVar2 = *((byte * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar7 + 4) + uVar3 * 4))) + (uVar6 & 1) * 8)));
        pbVar4 = param_1;
        do {
          bVar1 = *pbVar2;
          bVar9 = bVar1 < *pbVar4;
          if (bVar1 != *pbVar4) {
LAB_004bb276: ;
            iVar7 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_004bb27b;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar9 = bVar1 < pbVar4[1];
          if (bVar1 != pbVar4[1]) goto LAB_004bb276;
          pbVar2 = pbVar2 + 2;
          pbVar4 = pbVar4 + 2;
        } while (bVar1 != 0);
        iVar7 = 0;
LAB_004bb27b: ;
        if (iVar7 == 0) {
          if (((int * PTR32 *)(gen_frame + 0x4))[0] == (int *)0x0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *((int * PTR32 *)(gen_frame + 0x4))[0];
          }
          uVar3 = uVar6 >> 1;
          uVar8 = uVar3;
          if (*(uint *)(iVar7 + 8) <= uVar3) {
            uVar8 = uVar3 - *(uint *)(iVar7 + 8);
          }
          piVar5 = ((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar7 + 4) + uVar8 * 4))) + 4 + (uVar6 & 1) * 8)));
          *piVar5 = *piVar5 + 1;
          if (((int * PTR32 *)(gen_frame + 0x4))[0] == (int *)0x0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *((int * PTR32 *)(gen_frame + 0x4))[0];
          }
          if (*(uint *)(iVar7 + 8) <= uVar3) {
            uVar3 = uVar3 - *(uint *)(iVar7 + 8);
          }
          return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar7 + 4) + uVar3 * 4))) + (uVar6 & 1) * 8)));
        }
        if (0 < iVar7) break;
        piVar5 = ((int * PTR32 *)(gen_frame + 0x4))[0];
      }
      pbVar2 = param_1;
      do {
        bVar1 = *pbVar2;
        pbVar2 = pbVar2 + 1;
      } while (bVar1 != 0);
      uVar8 = F_00406bb0(pbVar2 + (1 - (int)(param_1 + 1)),0,0);
      F_00c49908(uVar8,pbVar2 + (1 - (int)(param_1 + 1)),param_1);
      ((uint *)(gen_frame + 0x10))[0] = uVar8;
      ((uint *)(gen_frame + 0x10))[1] = 1;
      if (uVar6 != *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x10) + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0xc)) {
        piVar5 = (int *)0x0;
        if ((((int * PTR32 *)(gen_frame + 0x4))[0] != (int *)0x0) && (((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x4))[0])) != (undefined4 *)0x0)) {
          piVar5 = *((int * PTR32 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x4))[0]));
        }
        uVar10 = 0;
        if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
          uVar10 = *(undefined4 *)*piVar5;
        }
        F_004c90e0((*(undefined * PTR32 *)(gen_frame + 0x18)),((int * PTR32 *)(gen_frame + 0x4)),uVar10,0,uVar6,((uint *)(gen_frame + 0x10)));
        return uVar8;
      }
      F_004c8f50((*(undefined * PTR32 *)(gen_frame + 0x18)),((uint *)(gen_frame + 0x10)));
      return uVar8;
    }
  }
  return 0;
}

/* ref: FUN_004bb390 */
uint F_004bb390(unsigned int gen_a0)
{
  GEN_ENTER(0x4bb390u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * this;
  uint uVar1;
  
  if (REFG(undefined4, 0x1375550) == (undefined *)0x0) {
    this = (undefined *)F_00406b90(0x1c,0,0);
    if (this == (undefined *)0x0) {
      REFG(undefined4, 0x1375550) = (undefined *)0x0;
      return 0;
    }
    REFG(undefined4, 0x1375550) = (undefined *)F_004ba0a0(this);
    if (REFG(undefined4, 0x1375550) == (undefined *)0x0) {
      return 0;
    }
  }
  uVar1 = F_004ba870(REFG(undefined4, 0x1375550),param_1);
  return uVar1;
}

/* ref: FUN_004bb3e0 */
unsigned int F_004bb3e0(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bb3e0u, 0u, gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (REFG(int, 0x1375550) != 0) {
    F_004ba950(REFG(int, 0x1375550),param_1,param_2);
  }
  return 0;
}

/* ref: FUN_004bb400 */
unsigned int F_004bb400(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x4bb400u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float * pfVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  float fVar6;
  undefined1 uVar7;
  uint uVar8;
  float * pfVar9;
  char * pcVar10;
  char cVar11;
  int iVar12;
  undefined * PTR32 * ppuVar13;
  bool bVar14;
  float10 fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  
  cVar4 = *(char *)((*(int *)&gen_args[0]) + 0x23);
  if ((*(char *)((*(int *)&gen_args[0]) + 0x22) == cVar4) ||
     (((cVar11 = *(char *)((*(int *)&gen_args[0]) + 0x28), cVar11 == '\0' &&
       (fVar16 = *(float *)((*(int *)&gen_args[0]) + 0x24), GEN_ISNAN(fVar16) == (GEN_ISNAN(fVar16) || fVar16 == 0.0))) &&
      (fVar16 = *(float *)((*(int *)&gen_args[0]) + 0x10), GEN_ISNAN(fVar16) == (GEN_ISNAN(fVar16) || fVar16 == 0.0))))) {
    cVar11 = *(char *)((*(int *)&gen_args[0]) + 0x28);
    (*(char *)(gen_frame + 0x1b)) = '\0';
    if (cVar11 != '\0') goto LAB_004bb44a;
  }
  else {
    (*(char *)(gen_frame + 0x1b)) = '\x01';
LAB_004bb44a: ;
    *(undefined1 *)((*(int *)&gen_args[0]) + 0x20) = 0xff;
    if ((*(int *)((*(int *)&gen_args[0]) + 4) != 0) && (cVar4 != '\0')) {
      uVar8 = 0;
      pcVar10 = ((char *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 4) + 0x2c)));
      do {
        if (*pcVar10 == cVar4) {
          *(char *)((*(int *)&gen_args[0]) + 0x20) = (char)uVar8;
          break;
        }
        uVar8 = uVar8 + 1;
        pcVar10 = pcVar10 + 1;
      } while (uVar8 < 0x20);
    }
    bVar14 = true;
    if ((*(char *)(gen_frame + 0x1b)) == '\0') goto LAB_004bb49a;
    *(char *)((*(int *)&gen_args[0]) + 0x22) = cVar4;
    if (cVar11 == '\0') {
      uVar17 = *(undefined4 *)((*(int *)&gen_args[0]) + 0x24);
    }
    else {
      uVar17 = 0;
    }
    *(undefined4 *)((*(int *)&gen_args[0]) + 0x10) = uVar17;
    *(undefined4 *)((*(int *)&gen_args[0]) + 0x14) = 0;
    *(undefined4 *)((*(int *)&gen_args[0]) + 0x18) = 0;
  }
  bVar14 = (*(char *)(gen_frame + 0x1b)) == '\0';
LAB_004bb49a: ;
  F_004c3ac0((*(int *)&gen_args[0]) + 0x10,(*(float *)&gen_args[2]),(uint)bVar14);
  fVar16 = *(float *)((*(int *)&gen_args[0]) + 0x10);
  if (GEN_ISNAN(fVar16) != (GEN_ISNAN(fVar16) || fVar16 == 0.0)) {
    *(undefined1 *)((*(int *)&gen_args[0]) + 0x21) = *(undefined1 *)((*(int *)&gen_args[0]) + 0x22);
  }
  iVar12 = 0;
  if (*(undefined * PTR32 *)((*(int *)&gen_args[0]) + 4) != (undefined *)0x0) {
    F_006a50a0(*(undefined * PTR32 *)((*(int *)&gen_args[0]) + 4));
    iVar12 = *((int *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 4) + 0xf8)));
  }
  if (REFG(int, 0x1375550) != 0) {
    F_004ba950(REFG(int, 0x1375550),(*(float *)&gen_args[1]),iVar12);
  }
  iVar5 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
  if (*(undefined * PTR32 *)((*(int *)&gen_args[0]) + 4) == (undefined *)0x0) {
    uVar8 = 0;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(iVar5 + 0x90);
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(iVar5 + 0x94);
    (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(iVar5 + 0x98);
    uVar8 = F_006a4ec0(*(undefined * PTR32 *)((*(int *)&gen_args[0]) + 4),&(*(undefined4 *)(gen_frame + 0x4)),1,0);
  }
  fVar16 = 0.0;
  if (uVar8 != *(uint *)((*(int *)&gen_args[0]) + 0x2c)) {
    uVar17 = *(undefined4 *)((*(int *)&gen_args[0]) + 0x30);
    if ((uVar8 != 0) && (*(byte *)((*(int *)&gen_args[0]) + 0x29) < *(byte *)(uVar8 + 0x95))) {
      uVar17 = *(undefined4 *)(uVar8 + 0x88);
    }
    *(undefined4 *)((*(int *)&gen_args[0]) + 0x34) = uVar17;
    *(undefined4 *)((*(int *)&gen_args[0]) + 0x38) = 0;
    *(undefined4 *)((*(int *)&gen_args[0]) + 0x3c) = 0;
    *(uint *)((*(int *)&gen_args[0]) + 0x2c) = uVar8;
    if (uVar8 == 0) {
      uVar17 = 0;
    }
    else {
      uVar17 = *(undefined4 *)(uVar8 + 0x88);
    }
    *(undefined4 *)((*(int *)&gen_args[0]) + 0x30) = uVar17;
    if (uVar8 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined1 *)(uVar8 + 0x95);
    }
    *(undefined1 *)((*(int *)&gen_args[0]) + 0x29) = uVar7;
  }
  fVar6 = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x14)) = *(float *)((*(int *)&gen_args[0]) + 0x34);
  if ((*(float *)(gen_frame + 0x14)) <= 0.0) {
    *(undefined4 *)((*(int *)&gen_args[0]) + 0x40) = 0;
  }
  else {
    fVar2 = *(float *)((*(int *)&gen_args[0]) + 0x38);
    (*(float *)(gen_frame + 0x10)) = fVar2;
    if (GEN_ISNAN(fVar2) == (GEN_ISNAN(fVar2) || fVar2 == 0.0)) {
      fVar15 = ((float10)(*(float *)&gen_args[2]) * (float10)*(float *)((*(int *)&gen_args[0]) + 0x3c)) / (float10)fVar2;
    }
    else {
      fVar15 = (float10)(*(float *)&gen_args[2]) / (float10)(*(float *)(gen_frame + 0x14));
    }
    fVar3 = *(float *)((*(int *)&gen_args[0]) + 0x3c);
    (*(float *)(gen_frame + 0x14)) = (float)fVar15;
    fVar15 = (float10)(float)fVar15;
    (*(float *)(gen_frame + 0x10)) = fVar3;
    fVar18 = REFG(float, 0x1087f04);
    if (fVar3 < REFG(float, 0x1087f04)) {
      (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1087f04);
      pfVar9 = &(*(float *)(gen_frame + 0x14));
      (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF((fVar15 / ((float10)1 - (float10)fVar3))));
      if (!((float10)(*(float *)(gen_frame + 0x14)) < (float10)1)) {
        pfVar9 = &(*(float *)(gen_frame + 0x10));
      }
      fVar18 = *pfVar9;
    }
    *(float *)((*(int *)&gen_args[0]) + 0x40) = fVar18;
    *(float *)((*(int *)&gen_args[0]) + 0x38) = (float)((float10)fVar2 + (float10)(*(float *)&gen_args[2]));
    (*(float *)(gen_frame + 0x10)) = (float)(fVar15 + (float10)fVar3);
    *(float *)((*(int *)&gen_args[0]) + 0x3c) = (*(float *)(gen_frame + 0x10));
    if ((float10)1 <= (float10)(*(float *)(gen_frame + 0x10))) {
      *(undefined4 *)((*(int *)&gen_args[0]) + 0x34) = 0;
      *(undefined4 *)((*(int *)&gen_args[0]) + 0x38) = 0;
      *(undefined4 *)((*(int *)&gen_args[0]) + 0x3c) = 0;
    }
    else {
      (*(float *)(gen_frame + 0x10)) = fVar6;
      pfVar9 = &(*(float *)(gen_frame + 0x10));
      if (!((float10)1 < (float10)*(float *)((*(int *)&gen_args[0]) + 0x3c))) {
        pfVar9 = (float *)((*(int *)&gen_args[0]) + 0x3c);
      }
      *(float *)((*(int *)&gen_args[0]) + 0x3c) = *pfVar9;
    }
  }
  (*(float *)(gen_frame + 0x10)) = *(float *)((*(int *)&gen_args[0]) + 0x40);
  ppuVar13 = &REFG(undefined * PTR32, 0x13014e8);
  if (*(char *)((*(int *)&gen_args[0]) + 0x22) != '\0') {
    if ((uVar8 == 0) || (*(int *)(uVar8 + 0x78) == 0)) {
      if (iVar12 != 0) {
        ppuVar13 = (undefined * PTR32 *)(iVar12 + 0x14);
      }
    }
    else {
      ppuVar13 = ((undefined * PTR32 *)GEN_TOP((*(int *)(uVar8 + 0x78) + 0x14)));
    }
  }
  if ((0.0 < (*(float *)(gen_frame + 0x10))) && (*(char *)((*(int *)&gen_args[0]) + 0x28) == '\0')) {
    F_004ae300((*(int *)&gen_args[0]) + 0x44,(uint)ppuVar13,(*(float *)(gen_frame + 0x10)));
    fVar16 = 0.0;
  }
  else {
    F_004a45e0((undefined *)((*(int *)&gen_args[0]) + 0x44),ppuVar13);
  }
  if ((ppuVar13 == &REFG(undefined * PTR32, 0x13014e8)) && (*(char *)((*(int *)&gen_args[0]) + 0x22) != '\0')) {
    *(undefined4 *)((*(int *)&gen_args[0]) + 0x48) = 1;
  }
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x14)) + 0)) = *(undefined1 *)((*(int *)&gen_args[0]) + 0x22);
  (*(float *)(gen_frame + 0x14)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x14)), 1, 3),*(undefined1 *)((*(int *)&gen_args[0]) + 0x22)));
  if ((fVar16 < *(float *)((*(int *)&gen_args[0]) + 0x10)) &&
     (pfVar9 = (float *)((*(int *)&gen_args[0]) + 0x18),
     (!GEN_ISNAN(REFG(float, 0x1088068)) && !GEN_ISNAN(*pfVar9)) && (!(REFG(float, 0x1088068) < *pfVar9) && REFG(uint, 0x1088068) != *pfVar9)
     )) {
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x14)) + 0)) = *(undefined1 *)((*(int *)&gen_args[0]) + 0x21);
    (*(float *)(gen_frame + 0x14)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x14)), 1, 3),*(undefined1 *)((*(int *)&gen_args[0]) + 0x21)));
  }
  F_004b42d0((*(int *)&gen_args[0]) + 800,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x14))),(*(float *)&gen_args[1]));
  if ((*(char *)(gen_frame + 0x1b)) != '\0') {
    F_004af150();
    F_004a5d90((undefined *)((*(int *)&gen_args[0]) + 800));
  }
  (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1094880);
  pfVar9 = &(*(float *)(gen_frame + 0x10));
  if (!((double)*(float *)((*(int *)&gen_args[0]) + 0x10) < REFG(double, 0x10944b8))) {
    pfVar9 = (float *)((*(int *)&gen_args[0]) + 0x10);
  }
  (*(float *)(gen_frame + 0x14)) = *pfVar9;
  (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x14));
  if (*(char *)((*(int *)&gen_args[0]) + 0x28) != '\0') {
    (*(float *)(gen_frame + 0x14)) = 0.0;
  }
  F_004a9ff0(&REFG(undefined, 0x1375598),*(undefined4 *)((*(int *)&gen_args[0]) + 0x48),*(float *)((*(int *)&gen_args[0]) + 0x4c),(*(float *)(gen_frame + 0x14)));
  (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0x10));
  if (*(char *)((*(int *)&gen_args[0]) + 0x28) != '\0') {
    (*(float *)(gen_frame + 0x14)) = 0.0;
  }
  F_004aa100(&REFG(undefined, 0x1375598),*(undefined4 *)((*(int *)&gen_args[0]) + 0x148),*(undefined4 *)((*(int *)&gen_args[0]) + 0x14c),
               (*(float *)(gen_frame + 0x14)));
  if (*(char *)((*(int *)&gen_args[0]) + 0x28) != '\0') {
    (*(float *)(gen_frame + 0x10)) = 0.0;
  }
  F_004aa230(&REFG(undefined, 0x1375598),*(undefined4 *)((*(int *)&gen_args[0]) + 0x1ac),(*(float *)(gen_frame + 0x10)));
  if (*(char *)((*(int *)&gen_args[0]) + 0x28) == '\0') {
    (*(float *)(gen_frame + 0x10)) = *(float *)(REFG(int, 0x1371290) + 0x24c);
  }
  else {
    (*(float *)(gen_frame + 0x10)) = 0.0;
  }
  F_004aa310(&REFG(undefined, 0x1375598),*(undefined4 *)(REFG(int, 0x1371290) + 0x244),
               *(undefined4 *)(REFG(int, 0x1371290) + 0x248),(*(float *)(gen_frame + 0x10)));
  if (*(char *)((*(int *)&gen_args[0]) + 0x28) == '\0') {
    fVar15 = (float10)REFG(int, 0x13012e4);
    if (REFG(int, 0x13012e4) < 0) {
      fVar15 = fVar15 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(float *)(gen_frame + 0x10)) = (float)(fVar15 * (float10)REFG(double, 0x1091858));
  }
  else {
    (*(float *)(gen_frame + 0x10)) = 0.0;
  }
  F_004aa3a0(&REFG(undefined, 0x1375598),*(undefined4 *)((*(int *)&gen_args[0]) + 0x338),*(undefined4 *)((*(int *)&gen_args[0]) + 0x33c),
               *(undefined4 *)((*(int *)&gen_args[0]) + 0x340),(*(float *)(gen_frame + 0x10)));
  F_004b57e0(&REFG(undefined, 0x1375598),(*(float *)&gen_args[2]));
  F_004b6590((*(int *)&gen_args[0]) + 0x360,(*(float *)&gen_args[1]),(*(int *)&gen_args[0]) + 0x44);
  if (*(int *)((*(int *)&gen_args[0]) + 4) != 0) {
    F_006a54a0(*(int *)((*(int *)&gen_args[0]) + 4),(*(float *)&gen_args[1]));
  }
  fVar16 = (*(float *)&gen_args[2]);
  uVar8 = REFG(float, 0x10920d0);
  (*(float *)&gen_args[1]) = REFG(float, 0x1087f04);
  fVar15 = (float10)*(double *)&REFG(undefined, 0x1092098);
  if (-1 < *(char *)((*(int *)&gen_args[0]) + 0x2a)) {
    if (*(char *)((*(int *)&gen_args[0]) + 0x2a) < '\x01') {
    }
    else {
      (*(float *)&gen_args[2]) = gen_bits2f((uint)gen_fl2bits((*(float *)&gen_args[2])) ^ REFG(uint, 0x10920d0));
    }
    pfVar1 = (float *)((*(int *)&gen_args[0]) + 0x254);
    (*(float *)(gen_frame + 0x14)) = 0.0;
    *pfVar1 = (float)((float10)(*(float *)&gen_args[2]) * fVar15 + (float10)*pfVar1);
    pfVar9 = pfVar1;
    if ((GEN_ISNAN((*(float *)&gen_args[1])) || GEN_ISNAN(*pfVar1)) || ((*(float *)&gen_args[1]) < *pfVar1 || (*(float *)&gen_args[1]) == *pfVar1)) {
      pfVar9 = &(*(float *)&gen_args[1]);
    }
    if (!(0.0 < *pfVar9)) {
      pfVar9 = &(*(float *)(gen_frame + 0x14));
    }
    *pfVar1 = *pfVar9;
  }
  if (*(char *)((*(int *)&gen_args[0]) + 0x2b) < '\0') {
    return 0;
  }
  if ('\0' < *(char *)((*(int *)&gen_args[0]) + 0x2b)) {
    fVar16 = gen_bits2f((uint)gen_fl2bits(fVar16) ^ uVar8);
  }
  (*(float *)&gen_args[2]) = fVar16;
  (*(float *)(gen_frame + 0x14)) = 0.0;
  pfVar9 = (float *)((*(int *)&gen_args[0]) + 600);
  *(float *)((*(int *)&gen_args[0]) + 600) = ((float)GEN_TOF((fVar15 * (float10)fVar16 + (float10)*(float *)((*(int *)&gen_args[0]) + 600))))
  ;
  pfVar1 = (float *)((*(int *)&gen_args[0]) + 600);
  if ((GEN_ISNAN((*(float *)&gen_args[1])) || GEN_ISNAN(*pfVar1)) || ((*(float *)&gen_args[1]) < *pfVar1 || (*(float *)&gen_args[1]) == *pfVar1)) {
    pfVar9 = &(*(float *)&gen_args[1]);
  }
  if (!(0.0 < *pfVar9)) {
    pfVar9 = &(*(float *)(gen_frame + 0x14));
  }
  *(float *)((*(int *)&gen_args[0]) + 600) = *pfVar9;
  return 0;
}

/* ref: FUN_004bb9b0 */
byte F_004bb9b0(unsigned int gen_a0)
{
  GEN_ENTER(0x4bb9b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (REFG(undefined4, 0x1375554) != (undefined4 *)0x0) {
    F_004ba220(REFG(undefined4, 0x1375554),this);
    if (REFG(undefined4 * PTR32, 0x1375554)[5] == 0) {
      ((code *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x1375554))))(REFG(undefined4, 0x1375554),1);
      REFG(undefined4, 0x1375554) = (undefined4 *)0x0;
    }
  }
  bVar1 = F_004c7d30((undefined *)((int)this + 8),0);
  return bVar1;
}

/* ref: Client::Graphics::Environment::ObjectBehaviorSet::vf1 */
byte F_004bb9f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4bb9f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (REFG(undefined4, 0x1375554) != (undefined4 *)0x0) {
    F_004ba220(REFG(undefined4, 0x1375554),this);
    if (REFG(undefined4 * PTR32, 0x1375554)[5] == 0) {
      ((code *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x1375554))))(REFG(undefined4, 0x1375554),1);
      REFG(undefined4, 0x1375554) = (undefined4 *)0x0;
    }
  }
  bVar1 = F_004c7d30(this + 8,0);
  return bVar1;
}

/* ref: FUN_004bba30 */
uint F_004bba30(unsigned int gen_a0)
{
  GEN_ENTER(0x4bba30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * this;
  uint uVar1;
  
  if (REFG(undefined4, 0x1375554) == (undefined *)0x0) {
    this = (undefined *)F_00406b90(0x28,0,0);
    if (this == (undefined *)0x0) {
      REFG(undefined4, 0x1375554) = (undefined *)0x0;
      return 0;
    }
    REFG(undefined4, 0x1375554) = (undefined *)F_004ba1c0(this);
    if (REFG(undefined4, 0x1375554) == (undefined *)0x0) {
      return 0;
    }
  }
  uVar1 = F_004bb100(REFG(undefined4, 0x1375554),param_1);
  return uVar1;
}

/* ref: FUN_004bba80 */
uint F_004bba80(unsigned int gen_a0)
{
  GEN_ENTER(0x4bba80u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char cVar1;
  char * pcVar2;
  undefined * this;
  uint uVar3;
  
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (pcVar2 != param_1 + 1) {
      if (REFG(undefined4, 0x137554c) == (undefined *)0x0) {
        this = (undefined *)F_00406b90(0x1c,0,0);
        if (this == (undefined *)0x0) {
          REFG(undefined4, 0x137554c) = (undefined *)0x0;
          return 0;
        }
        REFG(undefined4, 0x137554c) = (undefined *)F_004b9f60(this);
        if (REFG(undefined4, 0x137554c) == (undefined *)0x0) {
          return 0;
        }
      }
      uVar3 = F_004bb1e0(REFG(undefined4, 0x137554c),param_1);
      return uVar3;
    }
  }
  return 0;
}

/* ref: FUN_004bbaf0 */
unsigned int F_004bbaf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4bbaf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  if (param_1 < 2) {
    iVar1 = *(int *)((int)this + param_1 * 4);
    if ((iVar1 != 0) && (REFG(undefined4, 0x137554c) != (undefined4 *)0x0)) {
      F_004b9fb0(REFG(undefined4, 0x137554c),iVar1);
      if (REFG(undefined4 * PTR32, 0x137554c)[5] == 0) {
        ((code *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x137554c))))(REFG(undefined4, 0x137554c),1);
        REFG(undefined4, 0x137554c) = (undefined4 *)0x0;
      }
    }
    uVar2 = F_004bba80(param_2);
    *(uint *)((int)this + param_1 * 4) = uVar2;
  }
  return 0;
}

/* ref: FUN_004bbb50 */
unsigned int F_004bbb50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4bbb50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  if (param_1 < 4) {
    iVar1 = *(int *)((int)this + param_1 * 4);
    if ((iVar1 != 0) && (REFG(undefined4, 0x137554c) != (undefined4 *)0x0)) {
      F_004b9fb0(REFG(undefined4, 0x137554c),iVar1);
      if (REFG(undefined4 * PTR32, 0x137554c)[5] == 0) {
        ((code *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x137554c))))(REFG(undefined4, 0x137554c),1);
        REFG(undefined4, 0x137554c) = (undefined4 *)0x0;
      }
    }
    uVar2 = F_004bba80(param_2);
    *(uint *)((int)this + param_1 * 4) = uVar2;
  }
  return 0;
}

/* ref: FUN_004bbbb0 */
unsigned int F_004bbbb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4bbbb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  if (param_1 < 2) {
    iVar1 = *(int *)((int)this + param_1 * 4 + 0x38);
    if ((iVar1 != 0) && (REFG(undefined4, 0x137554c) != (undefined4 *)0x0)) {
      F_004b9fb0(REFG(undefined4, 0x137554c),iVar1);
      if (REFG(undefined4 * PTR32, 0x137554c)[5] == 0) {
        ((code *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x137554c))))(REFG(undefined4, 0x137554c),1);
        REFG(undefined4, 0x137554c) = (undefined4 *)0x0;
      }
    }
    uVar2 = F_004bba80(param_2);
    *(uint *)((int)this + param_1 * 4 + 0x38) = uVar2;
  }
  return 0;
}

/* ref: FUN_004bbc10 */
unsigned int F_004bbc10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4bbc10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  if (param_1 < 2) {
    iVar1 = *(int *)((int)this + param_1 * 4 + 8);
    if ((iVar1 != 0) && (REFG(undefined4, 0x137554c) != (undefined4 *)0x0)) {
      F_004b9fb0(REFG(undefined4, 0x137554c),iVar1);
      if (REFG(undefined4 * PTR32, 0x137554c)[5] == 0) {
        ((code *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x137554c))))(REFG(undefined4, 0x137554c),1);
        REFG(undefined4, 0x137554c) = (undefined4 *)0x0;
      }
    }
    uVar2 = F_004bba80(param_2);
    *(uint *)((int)this + param_1 * 4 + 8) = uVar2;
  }
  return 0;
}

/* ref: FUN_004bbc70 */
uint F_004bbc70(unsigned int gen_a0)
{
  GEN_ENTER(0x4bbc70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  float fVar3;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 0x79) == '\0')) {
    fVar3 = *(float *)((int)this + 0xc);
  }
  else {
    fVar3 = *(float *)(iVar1 + 0x74);
  }
  F_004bb400(this,fVar3,*(float *)(REFG(int, 0x137104c) + 0x1198));
  uVar2 = F_004b1ed0(this,fVar3);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 0xc);
  *(undefined1 *)((int)this + 0x28) = 0;
  return uVar2;
}

/* ref: FUN_004bbce0 */
byte F_004bbce0(unsigned int gen_a0)
{
  GEN_ENTER(0x4bbce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * this_00;
  
  bVar1 = F_004c7d30((undefined *)((int)this + 8),0);
  if (bVar1 == 0) {
    return 0;
  }
  F_004c3df0((undefined *)((int)this + 0x14));
  *(undefined1 *)((int)this + 0x90) = 0;
  if (REFG(undefined4, 0x1375554) == (undefined *)0x0) {
    this_00 = (undefined *)F_00406b90(0x28,0,0);
    if (this_00 == (undefined *)0x0) {
      REFG(undefined4, 0x1375554) = (undefined *)0x0;
      return 1;
    }
    REFG(undefined4, 0x1375554) = (undefined *)F_004ba1c0(this_00);
    if (REFG(undefined4, 0x1375554) == (undefined *)0x0) {
      return 1;
    }
  }
  F_004bb100(REFG(undefined4, 0x1375554),this);
  return 1;
}

/* ref: FUN_004bbd50 */
unsigned int F_004bbd50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4bbd50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
  
  iVar3 = REFG(int, 0x1371290);
  if (((param_2 != 0) &&
      (((*(uint *)(param_2 + 0x20) == 1 || ((*(uint *)(param_2 + 0x2c) & 0x1000000) != 0)) &&
       (*(int *)(param_2 + 0x28) == 0x1450)))) && (param_3 <= *(uint *)(param_2 + 0x20))) {
    uVar1 = *(undefined4 *)(REFG(int, 0x1371290) + 0xc);
    F_004a4880(param_1,param_3);
    uVar5 = 0;
    if (param_3 != 0) {
      fVar6 = (float10)(int)param_3;
      if ((int)param_3 < 0) {
        fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      iVar4 = 0;
      do {
        fVar7 = (float10)(int)uVar5;
        if ((int)uVar5 < 0) {
          fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        *(float *)(*param_1 + 0x6c + iVar4) =
             ((float)GEN_TOF(((fVar7 * (float10)*(double *)&REFG(double, 0x10946a0)) / (float10)(float)fVar6)));
        fVar8 = *(float *)(*param_1 + 0x6c + iVar4);
        *(float *)(iVar3 + 0xc) = fVar8;
        *(float *)(iVar3 + 8) = fVar8;
        *(undefined1 *)(iVar3 + 0x28) = 1;
        iVar2 = *(int *)(iVar3 + 4);
        if ((iVar2 != 0) && (*(char *)(iVar2 + 0x79) != '\0')) {
          fVar8 = *(float *)(iVar2 + 0x74);
        }
        F_004bb400(iVar3,fVar8,*(float *)(REFG(int, 0x137104c) + 0x1198));
        F_004b1ed0(iVar3,fVar8);
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar3 + 0xc);
        *(undefined1 *)(iVar3 + 0x28) = 0;
        F_004ad500(*param_1 + iVar4,iVar3 + 0x680,param_2,uVar5,param_4);
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x70;
      } while (uVar5 < param_3);
    }
    *(undefined4 *)(iVar3 + 0xc) = uVar1;
    *(undefined4 *)(iVar3 + 8) = uVar1;
    *(undefined1 *)(iVar3 + 0x28) = 1;
  }
  return 0;
}

/* ref: FUN_004bbf00 */
unsigned int F_004bbf00(unsigned int gen_a0)
{
  GEN_ENTER(0x4bbf00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = *(int *)((int)this + uVar2 * 4);
    if (((iVar1 != 0) && (REFG(undefined4, 0x137554c) != (undefined4 *)0x0)) &&
       (F_004b9fb0(REFG(undefined4, 0x137554c),iVar1), REFG(undefined4 * PTR32, 0x137554c)[5] == 0)) {
      ((code *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x137554c))))(REFG(undefined4, 0x137554c),1);
      REFG(undefined4, 0x137554c) = (undefined4 *)0x0;
    }
    *(undefined4 *)((int)this + uVar2 * 4) = 0;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  return 0;
}

/* ref: FUN_004bbf50 */
uint F_004bbf50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bbf50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (*(int *)((int)this + 0xc) != 0) {
    iVar3 = 0;
    do {
      F_004bbf00(((undefined *)GEN_TOP((*(int *)((int)this + 8) + iVar3))));
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x14;
    } while (uVar4 < *(uint *)((int)this + 0xc));
  }
  if (*(int *)((int)this + 8) == 0) {
LAB_004bbf98: ;
    if (param_1 == 0) goto LAB_004bbff8;
  }
  else if ((*(uint *)((int)this + 0xc) < param_1) || (param_1 == 0)) {
    F_00406b30(*(int *)((int)this + 8));
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
    goto LAB_004bbf98;
  }
  if (*(int *)((int)this + 8) == 0) {
    puVar2 = (undefined4 *)
             F_00406bb0(-(uint)((int)((ulonglong)param_1 * 0x14 >> 0x20) != 0) |
                          (uint)((ulonglong)param_1 * 0x14),0,0);
    puVar1 = puVar2;
    uVar4 = param_1;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      while (-1 < (int)(uVar4 - 1)) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1 = puVar1 + 5;
        uVar4 = uVar4 - 1;
      }
    }
    *(undefined4 * PTR32 *)((int)this + 8) = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    *(uint *)((int)this + 0xc) = param_1;
  }
LAB_004bbff8: ;
  return *(uint *)((int)this + 8);
}

/* ref: FUN_004bc010 */
unsigned int F_004bc010(unsigned int gen_a0)
{
  GEN_ENTER(0x4bc010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)((int)this + 0x38);
  do {
    if (((*piVar2 != 0) && (REFG(undefined4, 0x137554c) != (undefined4 *)0x0)) &&
       (F_004b9fb0(REFG(undefined4, 0x137554c),*piVar2), REFG(undefined4 * PTR32, 0x137554c)[5] == 0)) {
      ((code *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x137554c))))(REFG(undefined4, 0x137554c),1);
      REFG(undefined4, 0x137554c) = (undefined4 *)0x0;
    }
    *piVar2 = 0;
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (uVar1 < 2);
  return 0;
}

/* ref: FUN_004bc1d0 */
uint F_004bc1d0(void)
{
  GEN_ENTER(0x4bc1d0u, 0u, 0u, 0u, 0u);
  byte bVar1;
  int * this;
  int * piVar2;
  
  this = (int *)F_00406b90(0x94,0,0);
  piVar2 = (int *)0x0;
  if (this != (int *)0x0) {
    this[1] = 1;
    *this = (int)(*(undefined * PTR32 (*)[4])REFP(0x109489c));
    *(undefined2 *)((int)this + 0x12) = 0xffff;
    this[2] = 0;
    this[3] = 0;
    *(undefined2 *)(this + 4) = 0;
    F_004c3df0(this + 5);
    this[0x23] = 0;
    bVar1 = F_004bbce0(this);
    piVar2 = this;
    if (bVar1 == 0) {
      ((code *)*(gen_code32 *)(*this + 0xc))(this);
      piVar2 = (int *)0x0;
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_004bc240 */
uint F_004bc240(unsigned int gen_a0)
{
  GEN_ENTER(0x4bc240u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  int * piVar2;
  
  piVar2 = (int *)F_004bc1d0();
  if (piVar2 != (int *)0x0) {
    bVar1 = F_004b9dc0(param_1,piVar2);
    if (bVar1 != 0) {
      return (uint)piVar2;
    }
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  }
  return 0;
}

/* ref: FUN_004bc280 */
byte F_004bc280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bc280u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  float * pfVar5;
  int iVar6;
  float fVar7;
  undefined * this;
  float * pfVar8;
  char * pcVar9;
  byte * pbVar10;
  uint uVar11;
  byte * pbVar12;
  char * pcVar13;
  float10 fVar14;
  float10 fVar15;
  
  ((int *)(gen_frame + 0x8))[1] = *(int *)(param_1 + 0x10) + param_1;
  pbVar12 = ((byte *)GEN_TOP((*(int *)(param_1 + 0x1c) + param_1)));
  pbVar10 = ((byte *)GEN_TOP((*(int *)(param_1 + 0x20) + param_1)));
  ((int *)(gen_frame + 0x8))[0] = *(int *)(param_1 + 0xc) + param_1;
  F_004bc010(param_2);
  (*(float * PTR32 *)(gen_frame + 0x18)) = ((float *)(uintptr_t)gen_fl2bits((float)(*(float *)(pbVar12 + 4))));
  bVar1 = pbVar12[1];
  fVar14 = (float10)*(float *)(pbVar12 + 4);
  bVar2 = pbVar12[2];
  fVar15 = (float10)*(double *)&REFG(undefined, 0x1088100);
  bVar3 = pbVar12[3];
  *param_2 = ((float)GEN_TOF(((fVar14 * (float10)*pbVar12) / fVar15)));
  param_2[1] = ((float)GEN_TOF((((float10)bVar1 * fVar14) / fVar15)));
  param_2[2] = ((float)GEN_TOF((((float10)bVar2 * fVar14) / fVar15)));
  param_2[3] = (float)((float10)bVar3 / fVar15);
  (*(float * PTR32 *)(gen_frame + 0x18)) = ((float *)(uintptr_t)gen_fl2bits((float)(*(float *)(pbVar10 + 4))));
  bVar1 = pbVar10[1];
  fVar14 = (float10)*(float *)(pbVar10 + 4);
  bVar2 = pbVar10[2];
  param_2[4] = ((float)GEN_TOF(((fVar14 * (float10)*pbVar10) / fVar15)));
  param_2[5] = ((float)GEN_TOF((((float10)bVar1 * fVar14) / fVar15)));
  param_2[6] = ((float)GEN_TOF((((float10)bVar2 * fVar14) / fVar15)));
  uVar11 = 0;
  param_2[7] = *(float *)(param_1 + 0x24);
  if (*(int *)(param_1 + 8) != 0) {
    pfVar8 = param_2 + 0xe;
    (*(float * PTR32 *)(gen_frame + 0x18)) = param_2 + 8;
    (*(int *)(gen_frame + 0x14)) = -0x38 - (int)param_2;
    do {
      iVar6 = *(int *)(param_1 + 4) + param_1;
      pcVar13 = ((char *)GEN_TOP((*(int *)((int)pfVar8 + iVar6 + (*(int *)(gen_frame + 0x14))) + iVar6)));
      if (uVar11 < 2) {
        if ((*pfVar8 != 0.0) && (REFG(undefined4, 0x137554c) != (undefined4 *)0x0)) {
          F_004b9fb0(REFG(undefined4, 0x137554c),(undefined4)gen_fl2bits(*pfVar8));
          if (REFG(undefined4 * PTR32, 0x137554c)[5] == 0) {
            ((code *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x137554c))))(REFG(undefined4, 0x137554c),1);
            REFG(undefined4, 0x137554c) = (undefined4 *)0x0;
          }
          fVar15 = (float10)*(double *)&REFG(undefined, 0x1088100);
        }
        if (pcVar13 == (char *)0x0) {
          fVar7 = 0.0;
        }
        else {
          (*(char * PTR32 *)(gen_frame + 0x10)) = pcVar13 + 1;
          pcVar9 = pcVar13;
          do {
            cVar4 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar4 != '\0');
          if (pcVar9 == pcVar13 + 1) {
            fVar7 = 0.0;
          }
          else {
            if (REFG(undefined4, 0x137554c) == (undefined4 *)0x0) {
              this = (undefined *)F_00406b90(0x1c,0,0);
              if (this == (undefined *)0x0) {
                REFG(undefined4, 0x137554c) = (undefined4 *)0x0;
                fVar7 = 0.0;
              }
              else {
                REFG(undefined4, 0x137554c) = (undefined4 *)F_004b9f60(this);
                if (REFG(undefined4, 0x137554c) != (undefined4 *)0x0) goto LAB_004bc444;
                fVar7 = 0.0;
              }
            }
            else {
LAB_004bc444: ;
              fVar7 = gen_bits2f(F_004bb1e0(REFG(undefined4, 0x137554c),pcVar13));
            }
            fVar15 = (float10)*(double *)&REFG(undefined, 0x1088100);
          }
        }
        *pfVar8 = fVar7;
      }
      pfVar5 = (*(float * PTR32 *)(gen_frame + 0x18));
      pbVar10 = (byte *)((int *)(gen_frame + 0x8))[uVar11];
      uVar11 = uVar11 + 1;
      fVar14 = (float10)*(float *)(pbVar10 + 4);
      bVar1 = pbVar10[1];
      bVar2 = pbVar10[2];
      pfVar8 = pfVar8 + 1;
      *(*(float * PTR32 *)(gen_frame + 0x18)) = ((float)GEN_TOF((((float10)*pbVar10 * fVar14) / fVar15)));
      (*(float * PTR32 *)(gen_frame + 0x18)) = (*(float * PTR32 *)(gen_frame + 0x18)) + 3;
      pfVar5[1] = ((float)GEN_TOF((((float10)bVar1 * fVar14) / fVar15)));
      pfVar5[2] = ((float)GEN_TOF((((float10)bVar2 * fVar14) / fVar15)));
    } while (uVar11 < *(uint *)(param_1 + 8));
  }
  param_2[0x10] = *(float *)(param_1 + 0x18);
  *(undefined1 *)(param_2 + 0x11) = *(undefined1 *)(param_1 + 0x14);
  return 1;
}

/* ref: FUN_004bc4e0 */
byte F_004bc4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bc4e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined * this;
  char * pcVar4;
  char * pcVar5;
  uint uVar6;
  
  F_004bbf00(param_2);
  uVar6 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      iVar2 = *(int *)(param_1 + 4) + param_1;
      pcVar5 = ((char *)GEN_TOP((*(int *)(iVar2 + uVar6 * 4) + iVar2)));
      if (uVar6 < 4) {
        iVar2 = *(int *)((int)param_2 + uVar6 * 4);
        if (((iVar2 != 0) && (REFG(undefined4, 0x137554c) != (undefined4 *)0x0)) &&
           (F_004b9fb0(REFG(undefined4, 0x137554c),iVar2), REFG(undefined4 * PTR32, 0x137554c)[5] == 0)) {
          ((code *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x137554c))))(REFG(undefined4, 0x137554c),1);
          REFG(undefined4, 0x137554c) = (undefined4 *)0x0;
        }
        if (pcVar5 == (char *)0x0) {
          uVar3 = 0;
        }
        else {
          pcVar4 = pcVar5;
          do {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          if (pcVar4 == pcVar5 + 1) {
            uVar3 = 0;
          }
          else if (REFG(undefined4, 0x137554c) == (undefined4 *)0x0) {
            this = (undefined *)F_00406b90(0x1c,0,0);
            if (this == (undefined *)0x0) {
              REFG(undefined4, 0x137554c) = (undefined4 *)0x0;
              uVar3 = 0;
            }
            else {
              REFG(undefined4, 0x137554c) = (undefined4 *)F_004b9f60(this);
              if (REFG(undefined4, 0x137554c) != (undefined4 *)0x0) goto LAB_004bc599;
              uVar3 = 0;
            }
          }
          else {
LAB_004bc599: ;
            uVar3 = F_004bb1e0(REFG(undefined4, 0x137554c),pcVar5);
          }
        }
        *(uint *)((int)param_2 + uVar6 * 4) = uVar3;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 8));
  }
  return 1;
}

/* ref: FUN_004bc5c0 */
byte F_004bc5c0(unsigned int gen_a0)
{
  GEN_ENTER(0x4bc5c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  F_004ba330((undefined *)((int)this + 0xc));
  *(undefined2 *)((int)this + 0x6a) = 0;
  uVar2 = 0;
  if (*(int *)((int)this + 0x1c) != 0) {
    F_00406b30(*(int *)((int)this + 0x1c));
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined2 *)((int)this + 0x50) = 0;
  }
  *(undefined2 *)((int)this + 0x6c) = 0;
  if (*(int *)((int)this + 0x20) != 0) {
    F_00406b30(*(int *)((int)this + 0x20));
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined2 *)((int)this + 0x52) = 0;
  }
  *(undefined2 *)((int)this + 0x6e) = 0;
  if (*(int *)((int)this + 0x24) != 0) {
    F_00406b30(*(int *)((int)this + 0x24));
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined2 *)((int)this + 0x54) = 0;
  }
  *(undefined2 *)((int)this + 0x70) = 0;
  if (*(int *)((int)this + 0x28) != 0) {
    F_00406b30(*(int *)((int)this + 0x28));
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined2 *)((int)this + 0x56) = 0;
  }
  *(undefined2 *)((int)this + 0x72) = 0;
  if (*(int *)((int)this + 0x2c) != 0) {
    F_00406b30(*(int *)((int)this + 0x2c));
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined2 *)((int)this + 0x58) = 0;
  }
  *(undefined2 *)((int)this + 0x74) = 0;
  if (*(int *)((int)this + 0x30) != 0) {
    F_00406b30(*(int *)((int)this + 0x30));
    *(undefined4 *)((int)this + 0x30) = 0;
    *(undefined2 *)((int)this + 0x5a) = 0;
  }
  *(undefined2 *)((int)this + 0x76) = 0;
  if (*(int *)((int)this + 0x34) != 0) {
    F_00406b30(*(int *)((int)this + 0x34));
    *(undefined4 *)((int)this + 0x34) = 0;
    *(undefined2 *)((int)this + 0x5c) = 0;
  }
  *(undefined2 *)((int)this + 0x78) = 0;
  if (*(int *)((int)this + 0x38) != 0) {
    F_00406b30(*(int *)((int)this + 0x38));
    *(undefined4 *)((int)this + 0x38) = 0;
    *(undefined2 *)((int)this + 0x5e) = 0;
  }
  *(undefined2 *)((int)this + 0x7a) = 0;
  if (*(int *)((int)this + 0x3c) != 0) {
    F_00406b30(*(int *)((int)this + 0x3c));
    *(undefined4 *)((int)this + 0x3c) = 0;
    *(undefined2 *)((int)this + 0x60) = 0;
  }
  *(undefined2 *)((int)this + 0x7c) = 0;
  if (*(int *)((int)this + 0x40) != 0) {
    F_00406b30(*(int *)((int)this + 0x40));
    *(undefined4 *)((int)this + 0x40) = 0;
    *(undefined2 *)((int)this + 0x62) = 0;
  }
  *(undefined2 *)((int)this + 0x7e) = 0;
  if (*(int *)((int)this + 0x44) != 0) {
    F_00406b30(*(int *)((int)this + 0x44));
    *(undefined4 *)((int)this + 0x44) = 0;
    *(undefined2 *)((int)this + 100) = 0;
  }
  *(undefined2 *)((int)this + 0x80) = 0;
  if (*(int *)((int)this + 0x48) != 0) {
    F_00406b30(*(int *)((int)this + 0x48));
    *(undefined4 *)((int)this + 0x48) = 0;
    *(undefined2 *)((int)this + 0x66) = 0;
  }
  if (*(short *)((int)this + 0x68) != 0) {
    iVar1 = 0;
    do {
      F_004bc010(((undefined *)GEN_TOP((*(int *)((int)this + 0x4c) + iVar1))));
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x4c;
    } while (uVar2 < *(ushort *)((int)this + 0x68));
  }
  *(undefined2 *)((int)this + 0x82) = 0;
  if (*(int *)((int)this + 0x4c) != 0) {
    F_00406b30(*(int *)((int)this + 0x4c));
    *(undefined4 *)((int)this + 0x4c) = 0;
    *(undefined2 *)((int)this + 0x68) = 0;
  }
  F_004ba3a0((undefined *)((int)this + 0x84));
  return 1;
}

/* ref: FUN_004bc7b0 */
uint F_004bc7b0(unsigned int gen_a0)
{
  GEN_ENTER(0x4bc7b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined2 *)((int)this + 0x6a) = 0;
  uVar2 = 0;
  if (*(int *)((int)this + 0x1c) != 0) {
    F_00406b30(*(int *)((int)this + 0x1c));
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined2 *)((int)this + 0x50) = 0;
  }
  *(undefined2 *)((int)this + 0x6c) = 0;
  if (*(int *)((int)this + 0x20) != 0) {
    F_00406b30(*(int *)((int)this + 0x20));
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined2 *)((int)this + 0x52) = 0;
  }
  *(undefined2 *)((int)this + 0x6e) = 0;
  if (*(int *)((int)this + 0x24) != 0) {
    F_00406b30(*(int *)((int)this + 0x24));
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined2 *)((int)this + 0x54) = 0;
  }
  *(undefined2 *)((int)this + 0x70) = 0;
  if (*(int *)((int)this + 0x28) != 0) {
    F_00406b30(*(int *)((int)this + 0x28));
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined2 *)((int)this + 0x56) = 0;
  }
  *(undefined2 *)((int)this + 0x72) = 0;
  if (*(int *)((int)this + 0x2c) != 0) {
    F_00406b30(*(int *)((int)this + 0x2c));
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined2 *)((int)this + 0x58) = 0;
  }
  *(undefined2 *)((int)this + 0x74) = 0;
  if (*(int *)((int)this + 0x30) != 0) {
    F_00406b30(*(int *)((int)this + 0x30));
    *(undefined4 *)((int)this + 0x30) = 0;
    *(undefined2 *)((int)this + 0x5a) = 0;
  }
  *(undefined2 *)((int)this + 0x76) = 0;
  if (*(int *)((int)this + 0x34) != 0) {
    F_00406b30(*(int *)((int)this + 0x34));
    *(undefined4 *)((int)this + 0x34) = 0;
    *(undefined2 *)((int)this + 0x5c) = 0;
  }
  *(undefined2 *)((int)this + 0x78) = 0;
  if (*(int *)((int)this + 0x38) != 0) {
    F_00406b30(*(int *)((int)this + 0x38));
    *(undefined4 *)((int)this + 0x38) = 0;
    *(undefined2 *)((int)this + 0x5e) = 0;
  }
  *(undefined2 *)((int)this + 0x7a) = 0;
  if (*(int *)((int)this + 0x3c) != 0) {
    F_00406b30(*(int *)((int)this + 0x3c));
    *(undefined4 *)((int)this + 0x3c) = 0;
    *(undefined2 *)((int)this + 0x60) = 0;
  }
  *(undefined2 *)((int)this + 0x7c) = 0;
  if (*(int *)((int)this + 0x40) != 0) {
    F_00406b30(*(int *)((int)this + 0x40));
    *(undefined4 *)((int)this + 0x40) = 0;
    *(undefined2 *)((int)this + 0x62) = 0;
  }
  *(undefined2 *)((int)this + 0x7e) = 0;
  if (*(int *)((int)this + 0x44) != 0) {
    F_00406b30(*(int *)((int)this + 0x44));
    *(undefined4 *)((int)this + 0x44) = 0;
    *(undefined2 *)((int)this + 100) = 0;
  }
  *(undefined2 *)((int)this + 0x80) = 0;
  if (*(int *)((int)this + 0x48) != 0) {
    F_00406b30(*(int *)((int)this + 0x48));
    *(undefined4 *)((int)this + 0x48) = 0;
    *(undefined2 *)((int)this + 0x66) = 0;
  }
  if (*(short *)((int)this + 0x68) != 0) {
    iVar1 = 0;
    do {
      F_004bc010(((undefined *)GEN_TOP((*(int *)((int)this + 0x4c) + iVar1))));
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x4c;
    } while (uVar2 < *(ushort *)((int)this + 0x68));
  }
  *(undefined2 *)((int)this + 0x82) = 0;
  if (*(int *)((int)this + 0x4c) != 0) {
    F_00406b30(*(int *)((int)this + 0x4c));
    *(undefined4 *)((int)this + 0x4c) = 0;
    *(undefined2 *)((int)this + 0x68) = 0;
  }
  return 0;
}

/* ref: FUN_004bc980 */
byte F_004bc980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bc980u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  ushort * puVar1;
  int * piVar2;
  int * piVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  
  F_00c48350(((byte *)(gen_frame + 0x4)),0,0x38);
  iVar7 = param_1[1];
  if (iVar7 != 0) {
    iVar5 = *param_1 + (int)param_1;
    do {
      *((int *)GEN_TOP((((byte *)(gen_frame + 0x4)) + *(int *)(iVar5 + 8) * 4))) = iVar5;
      iVar5 = iVar5 + 0xc;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  bVar4 = F_004c24a0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)),(int)param_2 + 0x1c,(int)param_2 + 0x50);
  if (bVar4 != 0) {
    bVar4 = F_004c25a0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)),(int)param_2 + 0x20,(int)param_2 + 0x52);
    if (bVar4 != 0) {
      bVar4 = F_004c26a0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 48)),(int)param_2 + 0x24,(int)param_2 + 0x54);
      if (bVar4 != 0) {
        bVar4 = F_004c27a0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 52)),(int)param_2 + 0x28,(int)param_2 + 0x56);
        if (bVar4 != 0) {
          bVar4 = F_004c28a0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 28)),(int)param_2 + 0x2c,(int)param_2 + 0x58);
          if (bVar4 != 0) {
            bVar4 = F_004c29a0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 8)),(int)param_2 + 0x30,(int)param_2 + 0x5a);
            if (bVar4 != 0) {
              bVar4 = F_004c2aa0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)),(int)param_2 + 0x34,(int)param_2 + 0x5c);
              if (bVar4 != 0) {
                uVar6 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16));
                if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)) == 0) {
                  uVar6 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 20));
                }
                puVar1 = (ushort *)((int)param_2 + 0x5e);
                piVar2 = (int *)((int)param_2 + 0x38);
                bVar4 = F_004c2aa0(uVar6,piVar2,puVar1);
                if (bVar4 != 0) {
                  bVar4 = F_004c2ba0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 24)),(int)param_2 + 0x3c,(int)param_2 + 0x60);
                  if (bVar4 != 0) {
                    bVar4 = F_004c2cb0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 32)),(int)param_2 + 0x40,(int)param_2 + 0x62);
                    if (bVar4 != 0) {
                      bVar4 = F_004c2da0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 36)),(int)param_2 + 0x44,(int)param_2 + 100);
                      if (bVar4 != 0) {
                        bVar4 = F_004c2ea0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 40)),(int)param_2 + 0x48,(int)param_2 + 0x66);
                        if (bVar4 != 0) {
                          F_004bc070(param_2,0);
                          bVar4 = F_004c92c0((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 44)),(int)param_2 + 0x4c,(int)param_2 + 0x68
                                              );
                          if (bVar4 != 0) {
                            uVar8 = 0;
                            if (*puVar1 != 0) {
                              iVar7 = 0;
                              do {
                                if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)) == 0) {
                                  if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 20)) != 0) {
                                    piVar3 = (int *)(iVar7 + 0x2c + *piVar2);
                                    *piVar3 = *piVar3 + 2;
                                  }
                                }
                                else {
                                  *(undefined4 *)(iVar7 + 0x2c + *piVar2) = 1;
                                }
                                uVar8 = uVar8 + 1;
                                iVar7 = iVar7 + 0x34;
                              } while (uVar8 < *puVar1);
                            }
                            F_004a9520(param_2);
                            return 1;
                          }
                        }
                      }
                    }
                  }
                }
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

/* ref: Client::Graphics::Environment::EnvSoundSet::vf1 */
byte F_004bcb80(unsigned int gen_a0)
{
  GEN_ENTER(0x4bcb80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_004c94a0(this + 8,0);
  return bVar1;
}

/* ref: FUN_004bcb90 */
byte F_004bcb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bcb90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * this;
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int * piVar8;
  int * piVar9;
  uint * this_00;
  uint uVar10;
  uint local_18;
  uint local_10;
  int local_c;
  
  iVar3 = param_2;
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 8);
  this = (int *)(param_2 + 8);
  bVar4 = F_004c94a0(this,uVar1);
  if (bVar4 != 0) {
    local_10 = 0;
    if (uVar1 != 0) {
      param_2 = 0;
      do {
        iVar7 = *(int *)(param_1 + 4) + param_2;
        piVar8 = (int *)(iVar7 + param_1);
        iVar2 = piVar8[3];
        *(undefined1 *)(local_10 + *this) = *(undefined1 *)(iVar7 + 8 + param_1);
        this_00 = ((uint *)GEN_TOP((*(int *)(iVar3 + 0xc) + param_2)));
        if (this_00 == (uint *)0x0) {
          return 0;
        }
        iVar7 = *(int *)((int)piVar8 + iVar2 + 0xc);
        if (((*this_00 != 0) && (REFG(undefined4, 0x137554c) != (undefined4 *)0x0)) &&
           (F_004b9fb0(REFG(undefined4, 0x137554c),*this_00), REFG(undefined4 * PTR32, 0x137554c)[5] == 0)) {
          ((code *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x137554c))))(REFG(undefined4, 0x137554c),1);
          REFG(undefined4, 0x137554c) = (undefined4 *)0x0;
        }
        uVar5 = F_004bba80((int)piVar8 + iVar7 + iVar2);
        *this_00 = uVar5;
        iVar7 = *(int *)((int)piVar8 + iVar2 + 0x10);
        if (((this_00[1] != 0) && (REFG(undefined4, 0x137554c) != (undefined4 *)0x0)) &&
           (F_004b9fb0(REFG(undefined4, 0x137554c),this_00[1]), REFG(undefined4 * PTR32, 0x137554c)[5] == 0)) {
          ((code *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x137554c))))(REFG(undefined4, 0x137554c),1);
          REFG(undefined4, 0x137554c) = (undefined4 *)0x0;
        }
        uVar5 = F_004bba80((int)piVar8 + iVar7 + iVar2);
        this_00[1] = uVar5;
        local_18 = 0;
        if (piVar8[1] != 0) {
          local_c = 0;
          do {
            piVar9 = (int *)(*piVar8 + local_c + (int)piVar8);
            if (piVar9[2] == 0x14) {
              uVar5 = piVar9[1];
              uVar6 = F_004bbf50(this_00,uVar5);
              if ((uVar5 != 0) && (uVar6 == 0)) {
                return 0;
              }
              uVar10 = 0;
              if (uVar5 != 0) {
                do {
                  iVar2 = *piVar9;
                  iVar7 = *(int *)((int)piVar9 + uVar10 * 4 + iVar2);
                  *(undefined4 *)(uVar6 + 0x10) = *(undefined4 *)((int)piVar9 + iVar7 + iVar2);
                  bVar4 = F_004bc4e0((int)piVar9 + iVar7 + iVar2,uVar6);
                  if (bVar4 == 0) {
                    return 0;
                  }
                  uVar10 = uVar10 + 1;
                  uVar6 = uVar6 + 0x14;
                } while (uVar10 < uVar5);
              }
            }
            local_c = local_c + 0xc;
            local_18 = local_18 + 1;
          } while (local_18 < (uint)piVar8[1]);
        }
        param_2 = param_2 + 0x10;
        local_10 = local_10 + 1;
      } while (local_10 < uVar1);
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_004bcd40 */
uint F_004bcd40(void)
{
  GEN_ENTER(0x4bcd40u, 0u, 0u, 0u, 0u);
  byte bVar1;
  int * piVar2;
  
  piVar2 = (int *)F_00406b90(0x14,0,0);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2[1] = 1;
    *piVar2 = (int)(*(undefined * PTR32 (*)[4])REFP(0x1094714));
    piVar2[2] = 0;
    piVar2[3] = 0;
    *(undefined2 *)(piVar2 + 4) = 0;
    *(undefined2 *)((int)piVar2 + 0x12) = 0xffff;
  }
  bVar1 = F_004c94a0(piVar2 + 2,0);
  if ((bVar1 == 0) && (piVar2 != (int *)0x0)) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    return 0;
  }
  return (uint)piVar2;
}

/* ref: FUN_004bcdb0 */
byte F_004bcdb0(unsigned int gen_a0)
{
  GEN_ENTER(0x4bcdb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * this_00;
  
  bVar1 = F_004c9670((undefined *)((int)this + 8),0);
  if (bVar1 == 0) {
    return 0;
  }
  F_004ba3a0((undefined *)((int)this + 0x14));
  *(undefined2 *)((int)this + 0x224) = 0;
  if (REFG(undefined4, 0x1375550) == (undefined *)0x0) {
    this_00 = (undefined *)F_00406b90(0x1c,0,0);
    if (this_00 == (undefined *)0x0) {
      REFG(undefined4, 0x1375550) = (undefined *)0x0;
      return 1;
    }
    REFG(undefined4, 0x1375550) = (undefined *)F_004ba0a0(this_00);
    if (REFG(undefined4, 0x1375550) == (undefined *)0x0) {
      return 1;
    }
  }
  F_004ba870(REFG(undefined4, 0x1375550),this);
  return 1;
}

/* ref: FUN_004bce20 */
byte F_004bce20(unsigned int gen_a0)
{
  GEN_ENTER(0x4bce20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (REFG(undefined4, 0x1375550) != (undefined4 *)0x0) {
    F_004ba0f0(REFG(undefined4, 0x1375550),this);
    if (REFG(undefined4 * PTR32, 0x1375550)[5] == 0) {
      ((code *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x1375550))))(REFG(undefined4, 0x1375550),1);
      REFG(undefined4, 0x1375550) = (undefined4 *)0x0;
    }
  }
  bVar1 = F_004c9670((undefined *)((int)this + 8),0);
  return bVar1;
}

/* ref: Client::Graphics::Environment::EnvSet::vf1 */
byte F_004bce60(unsigned int gen_a0)
{
  GEN_ENTER(0x4bce60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (REFG(undefined4, 0x1375550) != (undefined4 *)0x0) {
    F_004ba0f0(REFG(undefined4, 0x1375550),this);
    if (REFG(undefined4 * PTR32, 0x1375550)[5] == 0) {
      ((code *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x1375550))))(REFG(undefined4, 0x1375550),1);
      REFG(undefined4, 0x1375550) = (undefined4 *)0x0;
    }
  }
  bVar1 = F_004c9670(this + 8,0);
  return bVar1;
}

/* ref: FUN_004bcea0 */
byte F_004bcea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bcea0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int * this;
  float fVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_c;
  int local_8;
  
  iVar5 = param_2;
  if (param_2 == 0) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 8);
  this = (int *)(param_2 + 8);
  bVar6 = F_004c9670(this,uVar2);
  if (bVar6 != 0) {
    param_2 = 0;
    if (uVar2 != 0) {
      local_c = 0;
      local_8 = 0;
      do {
        fVar4 = REFG(float, 0x10948ac);
        iVar8 = *(int *)(param_1 + 4) + local_8;
        iVar9 = iVar8 + param_1;
        iVar10 = *(int *)(iVar9 + 0xc);
        *(undefined1 *)(param_2 + *this) = *(undefined1 *)(iVar8 + 8 + param_1);
        iVar8 = *(int *)(iVar5 + 0xc) + local_c;
        fVar1 = *(float *)(iVar10 + iVar9);
        iVar10 = iVar10 + iVar9;
        if (fVar1 < fVar4) {
          *(float *)(iVar8 + 4) = fVar1;
        }
        *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)(iVar10 + 4);
        *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(iVar10 + 8);
        iVar3 = *(int *)(iVar10 + 0xc);
        if (((*(int *)(iVar8 + 0x14) != 0) && (REFG(undefined4, 0x137554c) != (undefined4 *)0x0)) &&
           (F_004b9fb0(REFG(undefined4, 0x137554c),*(int *)(iVar8 + 0x14)), REFG(undefined4 * PTR32, 0x137554c)[5] == 0)) {
          ((code *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x137554c))))(REFG(undefined4, 0x137554c),1);
          REFG(undefined4, 0x137554c) = (undefined4 *)0x0;
        }
        uVar7 = F_004bba80(iVar3 + iVar10);
        *(uint *)(iVar8 + 0x14) = uVar7;
        iVar3 = *(int *)(iVar10 + 0x10);
        if (((*(int *)(iVar8 + 0x18) != 0) && (REFG(undefined4, 0x137554c) != (undefined4 *)0x0)) &&
           (F_004b9fb0(REFG(undefined4, 0x137554c),*(int *)(iVar8 + 0x18)), REFG(undefined4 * PTR32, 0x137554c)[5] == 0)) {
          ((code *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x137554c))))(REFG(undefined4, 0x137554c),1);
          REFG(undefined4, 0x137554c) = (undefined4 *)0x0;
        }
        uVar7 = F_004bba80(iVar3 + iVar10);
        *(uint *)(iVar8 + 0x18) = uVar7;
        bVar6 = F_004bc980(iVar9,iVar8);
        if (bVar6 == 0) {
          return 0;
        }
        local_8 = local_8 + 0x10;
        local_c = local_c + 0x294;
        param_2 = param_2 + 1;
      } while (param_2 < uVar2);
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_004bd010 */
uint F_004bd010(unsigned int gen_a0)
{
  GEN_ENTER(0x4bd010u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  int * piVar2;
  
  piVar2 = (int *)F_004bcd40();
  if (piVar2 != (int *)0x0) {
    bVar1 = F_004bcb90(param_1,piVar2);
    if (bVar1 != 0) {
      return (uint)piVar2;
    }
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  }
  return 0;
}

/* ref: FUN_004bd050 */
uint F_004bd050(void)
{
  GEN_ENTER(0x4bd050u, 0u, 0u, 0u, 0u);
  byte bVar1;
  int * this;
  
  this = (int *)F_00406b90(0x228,0,0);
  if (this == (int *)0x0) {
    this = (int *)0x0;
  }
  else {
    this[1] = 1;
    *this = (int)(*(undefined * PTR32 (*)[4])REFP(0x1094744));
    this[2] = 0;
    this[3] = 0;
    *(undefined2 *)(this + 4) = 0;
    *(undefined2 *)((int)this + 0x12) = 0xffff;
    this[5] = (int)(*(undefined * PTR32 (*)[1])REFP(0x1094634));
    this[8] = 0;
    this[9] = 0;
    this[0x85] = 0;
    this[0x86] = 0;
  }
  bVar1 = F_004bcdb0(this);
  if ((bVar1 == 0) && (this != (int *)0x0)) {
    ((code *)*(gen_code32 *)(*this + 0xc))(this);
    return 0;
  }
  return (uint)this;
}

/* ref: FUN_004bd0d0 */
uint F_004bd0d0(unsigned int gen_a0)
{
  GEN_ENTER(0x4bd0d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  int * piVar2;
  
  piVar2 = (int *)F_004bd050();
  if (piVar2 != (int *)0x0) {
    bVar1 = F_004bcea0(param_1,piVar2);
    if (bVar1 != 0) {
      return (uint)piVar2;
    }
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  }
  return 0;
}

/* ref: FUN_004bd110 */
uint F_004bd110(unsigned int gen_a0)
{
  GEN_ENTER(0x4bd110u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  undefined2 * puVar1;
  
  puVar1 = (*(undefined2 * PTR32 *)&gen_args[0]);
  (*((undefined2 *)GEN_TOP(((char *)&(*(undefined2 * PTR32 *)&gen_args[0]) + 0)))) = CONCAT11(*(undefined1 *)(*(undefined2 * PTR32 *)&gen_args[0]),*((undefined1 *)GEN_TOP(((int)(*(undefined2 * PTR32 *)&gen_args[0]) + 1))));
  *puVar1 = (*((undefined2 *)GEN_TOP(((char *)&(*(undefined2 * PTR32 *)&gen_args[0]) + 0))));
  return (uint)puVar1;
}

/* ref: FUN_004bd130 */
unsigned int F_004bd130(unsigned int gen_a0)
{
  GEN_ENTER(0x4bd130u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined1 * puVar1;
  undefined1 * puVar2;
  undefined1 * puVar3;
  undefined4 * puVar4;
  
  puVar4 = param_1;
  puVar1 = (undefined1 *)((int)param_1 + 3);
  puVar2 = (undefined1 *)((int)param_1 + 2);
  puVar3 = (undefined1 *)((int)param_1 + 1);
  param_1 = ((undefined4 *)GEN_TOP(CONCAT13(*(undefined1 *)puVar4,CONCAT12(*puVar3,CONCAT11(*puVar2,*puVar1)))));
  *puVar4 = param_1;
  return 0;
}

/* ref: FUN_004bd160 */
uint F_004bd160(unsigned int gen_a0)
{
  GEN_ENTER(0x4bd160u, gen_a0, 0u, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = (uVar1 & 0xff0000 | uVar1 >> 0x10) >> 8 | (uVar1 & 0xff00 | uVar1 << 0x10) << 8;
  return uVar1 << 0x10;
}

/* ref: Client::Graphics::ReferencedClassBase::vf1 */
unsigned int F_004bd1b0(void)
{
  GEN_ENTER(0x4bd1b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::ReferencedClassBase::vf0 */
uint F_004bd1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bd1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004bd230 */
uint F_004bd230(unsigned int gen_a0)
{
  GEN_ENTER(0x4bd230u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  return in_ecx;
}

/* ref: FUN_004bd260 */
unsigned int F_004bd260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bd260u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return 0;
}

/* ref: FUN_004bd280 */
float F_004bd280(unsigned int gen_a0)
{
  GEN_ENTER(0x4bd280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)((int)this + 8) *
                                      (float10)*(float *)((int)this + 8) +
                                     ((float10)*(float *)((int)(uintptr_t)this) * (float10)*(float *)this +
                                     (float10)*(float *)((int)this + 4) *
                                     (float10)*(float *)((int)this + 4))))))));
}

/* ref: FUN_004bd2c0 */
uint F_004bd2c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4bd2c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),in_ecx,param_3);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  return (uint)param_2;
}

/* ref: FUN_004bd360 */
unsigned int F_004bd360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4bd360u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 + (float10)*param_3);
  param_1[1] = (float)((float10)param_2[1] + (float10)param_3[1]);
  param_1[2] = (float)((float10)param_2[2] + (float10)param_3[2]);
  return 0;
}

/* ref: FUN_004bd390 */
unsigned int F_004bd390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4bd390u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 * (float10)*param_3);
  param_1[1] = (float)((float10)param_2[1] * (float10)param_3[1]);
  param_1[2] = (float)((float10)param_2[2] * (float10)param_3[2]);
  return 0;
}

/* ref: FUN_004bd3c0 */
unsigned int F_004bd3c0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x4bd3c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_004bd3f0 */
unsigned int F_004bd3f0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x4bd3f0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_1 = (float)((float10)*param_2 / fVar1);
  param_1[1] = (float)((float10)param_2[1] / fVar1);
  param_1[2] = (float)((float10)param_2[2] / fVar1);
  return 0;
}

/* ref: FUN_004bd420 */
unsigned int F_004bd420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bd420u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = REFG(float, 0x10920d0);
  *param_1 = *param_2 ^ REFG(uint, 0x10920d0);
  param_1[1] = param_2[1] ^ uVar1;
  param_1[2] = param_2[2] ^ uVar1;
  return 0;
}

/* ref: FUN_004bd460 */
float * F_004bd460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bd460u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((float10)*(float *)param_2 < (float10)*param_1) {
    *param_1 = *(float *)param_2;
  }
  if ((float10)*(float *)(param_2 + 4) < (float10)param_1[1]) {
    param_1[1] = *(float *)(param_2 + 4);
  }
  if ((float10)*(float *)(param_2 + 8) < (float10)param_1[2]) {
    param_1[2] = *(float *)(param_2 + 8);
  }
  return param_1;
}

/* ref: FUN_004bd4c0 */
float * F_004bd4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bd4c0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((float10)*param_1 < (float10)*(float *)param_2) {
    *param_1 = *(float *)param_2;
  }
  if ((float10)param_1[1] < (float10)*(float *)(param_2 + 4)) {
    param_1[1] = *(float *)(param_2 + 4);
  }
  if ((float10)param_1[2] < (float10)*(float *)(param_2 + 8)) {
    param_1[2] = *(float *)(param_2 + 8);
  }
  return param_1;
}

/* ref: FUN_004bd520 */
unsigned int F_004bd520(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4bd520u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)(fVar1 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)in_ecx[1] * fVar1);
  in_ecx[2] = (float)(fVar1 * (float10)in_ecx[2]);
  return 0;
}

/* ref: FUN_004bd550 */
unsigned int F_004bd550(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4bd550u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)((float10)*in_ecx / fVar1);
  in_ecx[1] = (float)((float10)in_ecx[1] / fVar1);
  in_ecx[2] = (float)((float10)in_ecx[2] / fVar1);
  return 0;
}

/* ref: FUN_004bd580 */
uint F_004bd580(unsigned int gen_a0)
{
  GEN_ENTER(0x4bd580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)*(float *)((int)this + 4);
  fVar2 = (float10)*(float *)this;
  fVar3 = (float10)*(float *)((int)this + 8);
  fVar1 = (float10)((float)GEN_TOF(((float10)1 /
                          (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar3 * fVar3 +
                                                               (fVar2 * fVar2 + fVar1 * fVar1))))))))));
  *(float *)this = (float)(fVar1 * (float10)*(float *)this);
  *(float *)((int)this + 4) = ((float)GEN_TOF(((float10)*(float *)((int)this + 4) * fVar1)));
  *(float *)((int)this + 8) = ((float)GEN_TOF((fVar1 * (float10)*(float *)((int)this + 8))));
  return (uint)this;
}

/* ref: FUN_004bd5f0 */
unsigned int F_004bd5f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4bd5f0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)param_2[1] * (float10)param_3[2] -
                    (float10)param_2[2] * (float10)param_3[1]);
  param_1[1] = (float)((float10)param_2[2] * (float10)*param_3 -
                      (float10)*param_2 * (float10)param_3[2]);
  param_1[2] = (float)((float10)param_3[1] * (float10)*param_2 -
                      (float10)*param_3 * (float10)param_2[1]);
  return 0;
}

/* ref: FUN_004bd630 */
uint F_004bd630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bd630u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2[1] ^ REFG(uint, 0x10920d0);
  uVar2 = param_2[2] ^ REFG(uint, 0x10920d0);
  *param_1 = *param_2 ^ REFG(uint, 0x10920d0);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return (uint)param_1;
}

/* ref: FUN_004bd670 */
uint F_004bd670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4bd670u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_2[1];
  fVar2 = param_3[1];
  fVar3 = param_2[2];
  fVar4 = param_3[2];
  *param_1 = (float)((float10)*param_2 + (float10)*param_3);
  param_1[1] = (float)((float10)fVar1 + (float10)fVar2);
  param_1[2] = (float)((float10)fVar3 + (float10)fVar4);
  return (uint)param_1;
}

/* ref: FUN_004bd6f0 */
uint F_004bd6f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4bd6f0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_004bd760 */
unsigned int F_004bd760(unsigned int gen_a0)
{
  GEN_ENTER(0x4bd760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined4 *)this = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  return 0;
}

/* ref: FUN_004bd780 */
uint F_004bd780(unsigned int gen_a0)
{
  GEN_ENTER(0x4bd780u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = F_0050c620(*param_1,0,0);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_004bd7b0 */
uint F_004bd7b0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x4bd7b0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar3 = (float10)param_3;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *param_1 = (float)(fVar3 * (float10)*param_2);
  param_1[1] = (float)((float10)fVar1 * fVar3);
  param_1[2] = (float)(fVar3 * (float10)fVar2);
  return (uint)param_1;
}

/* ref: FUN_004bd830 */
uint F_004bd830(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4bd830u, gen_a0, 0u, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar3 = (float10)param_2;
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  *param_1 = (float)(fVar3 * (float10)*param_3);
  param_1[1] = (float)((float10)fVar1 * fVar3);
  param_1[2] = (float)(fVar3 * (float10)fVar2);
  return (uint)param_1;
}

/* ref: FUN_004bd890 */
unsigned int F_004bd890(unsigned int gen_a0)
{
  GEN_ENTER(0x4bd890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined4 *)this = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  return 0;
}

/* ref: FUN_004bd910 */
uint F_004bd910(unsigned int gen_a0)
{
  GEN_ENTER(0x4bd910u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_004bd920 */
byte F_004bd920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bd920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if ((undefined *)*param_1 == (undefined *)0x0) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  else {
    uVar1 = F_009cfa30((undefined *)*param_1,0);
    *(uint *)((int)this + 4) = uVar1;
    if (uVar1 != 0) {
      F_00982ca0(uVar1,0,0,(float)(float10)1,(float)(float10)0);
      return 1;
    }
  }
  return 1;
}

/* ref: FUN_004bd970 */
unsigned int F_004bd970(unsigned int gen_a0)
{
  GEN_ENTER(0x4bd970u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00982b20((undefined *)*param_1);
    *param_1 = 0;
  }
  return 0;
}

/* ref: FUN_004bd990 */
uint F_004bd990(unsigned int gen_a0)
{
  GEN_ENTER(0x4bd990u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_004bd9a0 */
unsigned int F_004bd9a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4bd9a0u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)(fVar1 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)in_ecx[1] * fVar1);
  in_ecx[2] = (float)(fVar1 * (float10)in_ecx[2]);
  return 0;
}

/* ref: FUN_004bd9d0 */
unsigned int F_004bd9d0(unsigned int gen_a0)
{
  GEN_ENTER(0x4bd9d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined4 *)this = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1,0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x78))))(*(int * PTR32 *)((int)this + 4),500);
    *(undefined4 *)((int)this + 4) = 0;
  }
  return 0;
}

/* ref: FUN_004bda10 */
unsigned int F_004bda10(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4bda10u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)((float10)*in_ecx / fVar1);
  in_ecx[1] = (float)((float10)in_ecx[1] / fVar1);
  in_ecx[2] = (float)((float10)in_ecx[2] / fVar1);
  return 0;
}

/* ref: FUN_004bda40 */
unsigned int F_004bda40(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x4bda40u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  return 0;
}

/* ref: FUN_004bda70 */
unsigned int F_004bda70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bda70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return 0;
}

/* ref: FUN_004bdaa0 */
uint F_004bdaa0(unsigned int gen_a0)
{
  GEN_ENTER(0x4bdaa0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = F_0050c620(*param_1,0,0);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_004bdae0 */
unsigned int F_004bdae0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x4bdae0u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  return 0;
}

/* ref: FUN_004bdba0 */
unsigned int F_004bdba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4bdba0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 + (float10)*param_3);
  param_1[1] = (float)((float10)param_2[1] + (float10)param_3[1]);
  param_1[2] = (float)((float10)param_2[2] + (float10)param_3[2]);
  param_1[3] = (float)((float10)param_2[3] + (float10)param_3[3]);
  return 0;
}

/* ref: FUN_004bdbd0 */
unsigned int F_004bdbd0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x4bdbd0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_1 = (float)(fVar1 * (float10)*param_2);
  param_1[1] = (float)((float10)param_2[1] * fVar1);
  param_1[2] = (float)((float10)param_2[2] * fVar1);
  param_1[3] = (float)(fVar1 * (float10)param_2[3]);
  return 0;
}

/* ref: FUN_004bdc00 */
unsigned int F_004bdc00(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4bdc00u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)((float10)*in_ecx / fVar1);
  in_ecx[1] = (float)((float10)in_ecx[1] / fVar1);
  in_ecx[2] = (float)((float10)in_ecx[2] / fVar1);
  in_ecx[3] = (float)((float10)in_ecx[3] / fVar1);
  return 0;
}

/* ref: FUN_004bdc30 */
float10 F_004bdc30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bdc30u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  return (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 0xc) * (float10)param_2[3] +
                         ((float10)*(float *)(param_1 + 8) * (float10)param_2[2] +
                         ((float10)*(float *)param_1 * (float10)*param_2 +
                         (float10)*(float *)(param_1 + 4) * (float10)param_2[1])))));
}

/* ref: FUN_004bdc60 */
unsigned int F_004bdc60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bdc60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return 0;
}

/* ref: FUN_004bdd00 */
uint F_004bdd00(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4bdd00u, gen_a0, 0u, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  
  fVar4 = (float10)param_2;
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  *param_1 = (float)(fVar4 * (float10)*param_3);
  param_1[1] = (float)((float10)fVar1 * fVar4);
  param_1[2] = (float)((float10)fVar2 * fVar4);
  param_1[3] = (float)(fVar4 * (float10)fVar3);
  return (uint)param_1;
}

/* ref: FUN_004bdd70 */
unsigned int F_004bdd70(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4bdd70u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)((float10)*in_ecx / fVar1);
  in_ecx[1] = (float)((float10)in_ecx[1] / fVar1);
  in_ecx[2] = (float)((float10)in_ecx[2] / fVar1);
  in_ecx[3] = (float)((float10)in_ecx[3] / fVar1);
  return 0;
}

/* ref: FUN_004bdda0 */
uint F_004bdda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4bdda0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar6 = (float10)*param_2;
  fVar7 = (float10)*param_1;
  fVar1 = ((float)GEN_TOF(((float10)param_1[2] * (float10)param_2[2] +
                 ((float10)param_1[1] * (float10)param_2[1] + fVar7 * fVar6))));
  if (*(double *)&REFG(undefined, 0x10943f8) <= -(double)fVar1) {
    *(undefined4 *)this = REFG(float, 0x1087f04);
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
    return (uint)this;
  }
  fVar2 = param_1[1];
  fVar3 = param_2[2];
  fVar4 = param_1[2];
  fVar5 = param_2[1];
  fVar8 = (float10)fVar1 + (float10)REFG(double, 0x1088130);
  fVar8 = (float10)((float)GEN_TOF(SQRT((float10)(float)(fVar8 + fVar8))));
  fVar9 = (float10)(float)((float10)1 / fVar8);
  *(float *)this =
       ((float)GEN_TOF((fVar9 * (float10)(float)((float10)fVar2 * (float10)fVar3 -
                                       (float10)fVar5 * (float10)fVar4))));
  *(float *)((int)this + 4) =
       ((float)GEN_TOF(((float10)(float)((float10)fVar4 * fVar6 - fVar7 * (float10)fVar3) * fVar9)));
  *(float *)((int)this + 8) =
       ((float)GEN_TOF((fVar9 * (float10)(float)((float10)fVar5 * fVar7 - (float10)fVar2 * fVar6))));
  *(float *)((int)this + 0xc) = (float)(fVar8 * (float10)REFG(double, 0x1088108));
  return (uint)this;
}

/* ref: FUN_004bdee0 */
uint F_004bdee0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x4bdee0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float in_xmm2 = (float)gen_a2;
  float in_xmm3 = (float)gen_a3;
  float in_xmm7 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  fVar2 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  *in_ecx = GEN_FLT_TO(*in_ecx, REFG(float, 0x1087f04));
  in_ecx[5] = (undefined4)gen_fl2bits((float)fVar2);
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[6] = (undefined4)gen_fl2bits((float)fVar1);
  in_ecx[4] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = (undefined4)gen_fl2bits(((float)GEN_TOF(-(float10)(float)fVar1)));
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[10] = (undefined4)gen_fl2bits((float)fVar2);
  in_ecx[0xe] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_004bdf70 */
uint F_004bdf70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bdf70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  puVar1 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x0)),this);
  puVar3 = param_1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return (uint)param_1;
}

/* ref: FUN_004be0e0 */
unsigned int F_004be0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4be0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  uVar1 = param_2[2];
  in_ecx[3] = 0;
  in_ecx[2] = uVar1;
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  uVar1 = param_2[6];
  in_ecx[7] = 0;
  in_ecx[6] = uVar1;
  in_ecx[8] = param_2[8];
  in_ecx[9] = param_2[9];
  uVar1 = param_2[10];
  in_ecx[0xb] = 0;
  uVar2 = REFG(float, 0x1087f04);
  in_ecx[10] = uVar1;
  in_ecx[0xc] = param_2[0xc];
  in_ecx[0xd] = param_2[0xd];
  uVar1 = param_2[0xe];
  in_ecx[0xf] = uVar2;
  in_ecx[0xe] = uVar1;
  return 0;
}

/* ref: FUN_004be230 */
int F_004be230(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x4be230u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float in_xmm2 = (float)gen_a2;
  float in_xmm3 = (float)gen_a3;
  float in_xmm7 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar5 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  fVar6 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  fVar1 = *(float *)(in_ecx + 8);
  fVar5 = (float10)(float)fVar5;
  fVar6 = (float10)(float)fVar6;
  fVar2 = *(float *)(in_ecx + 0x18);
  *(float *)(in_ecx + 8) = ((float)GEN_TOF((fVar5 * (float10)*(float *)(in_ecx + 4) + fVar6 * (float10)fVar1)))
  ;
  fVar3 = *(float *)(in_ecx + 0x28);
  *(float *)(in_ecx + 0x18) =
       ((float)GEN_TOF(((float10)fVar2 * fVar6 + (float10)*(float *)(in_ecx + 0x14) * fVar5)));
  fVar4 = *(float *)(in_ecx + 0x38);
  *(float *)(in_ecx + 4) = ((float)GEN_TOF((fVar6 * (float10)*(float *)(in_ecx + 4) - fVar5 * (float10)fVar1)))
  ;
  *(float *)(in_ecx + 0x14) =
       ((float)GEN_TOF((fVar6 * (float10)*(float *)(in_ecx + 0x14) - (float10)fVar2 * fVar5)));
  *(float *)(in_ecx + 0x28) =
       ((float)GEN_TOF(((float10)fVar3 * fVar6 + (float10)*(float *)(in_ecx + 0x24) * fVar5)));
  *(float *)(in_ecx + 0x38) =
       ((float)GEN_TOF(((float10)fVar4 * fVar6 + (float10)*(float *)(in_ecx + 0x34) * fVar5)));
  *(float *)(in_ecx + 0x24) =
       ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x24) * fVar6 - (float10)fVar3 * fVar5)));
  *(float *)(in_ecx + 0x34) =
       ((float)GEN_TOF((fVar6 * (float10)*(float *)(in_ecx + 0x34) - (float10)fVar4 * fVar5)));
  return in_ecx;
}

/* ref: FUN_004be350 */
unsigned int F_004be350(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x4be350u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float in_xmm2 = (float)gen_a2;
  float in_xmm3 = (float)gen_a3;
  float in_xmm7 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar5 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  fVar6 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  fVar1 = in_ecx[2];
  fVar6 = (float10)(float)fVar6;
  fVar5 = (float10)(float)fVar5;
  fVar2 = in_ecx[6];
  in_ecx[2] = (float)(fVar6 * (float10)fVar1 - fVar5 * (float10)*in_ecx);
  fVar3 = in_ecx[10];
  in_ecx[6] = (float)((float10)fVar2 * fVar6 - (float10)in_ecx[4] * fVar5);
  fVar4 = in_ecx[0xe];
  *in_ecx = (float)(fVar6 * (float10)*in_ecx + fVar5 * (float10)fVar1);
  in_ecx[4] = (float)((float10)in_ecx[4] * fVar6 + fVar5 * (float10)fVar2);
  in_ecx[10] = (float)((float10)fVar3 * fVar6 - (float10)in_ecx[8] * fVar5);
  in_ecx[0xe] = (float)((float10)fVar4 * fVar6 - (float10)in_ecx[0xc] * fVar5);
  in_ecx[8] = (float)((float10)fVar3 * fVar5 + (float10)in_ecx[8] * fVar6);
  in_ecx[0xc] = (float)(fVar5 * (float10)fVar4 + (float10)in_ecx[0xc] * fVar6);
  return 0;
}

/* ref: FUN_004be4f0 */
uint F_004be4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4be4f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  puVar1 = (undefined4 *)F_004f11a0(((undefined1 *)(gen_frame + 0x0)),param_2,param_3);
  puVar3 = param_1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return (uint)param_1;
}

/* ref: FUN_004be550 */
unsigned int F_004be550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4be550u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0x10) = *param_2;
  *(undefined4 *)((int)this + 0x14) = param_2[1];
  *(undefined4 *)((int)this + 0x18) = param_2[2];
  *(undefined4 *)((int)this + 0x1c) = param_2[3];
  *(undefined4 *)((int)this + 0x20) = *param_3;
  *(undefined4 *)((int)this + 0x24) = param_3[1];
  *(undefined4 *)((int)this + 0x28) = param_3[2];
  return 0;
}

/* ref: FUN_004be5b0 */
uint F_004be5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4be5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = *param_1;
  *(undefined4 *)((int)this + 0x14) = param_1[1];
  *(undefined4 *)((int)this + 0x18) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)((int)this + 0x1c) = uVar1;
  return uVar1;
}

/* ref: FUN_004be5e0 */
uint F_004be5e0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x4be5e0u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  return (uint)in_ecx;
}

/* ref: FUN_004be600 */
unsigned int F_004be600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4be600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return 0;
}

/* ref: FUN_004be620 */
uint F_004be620(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x4be620u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  return (uint)in_ecx;
}

/* ref: FUN_004be650 */
unsigned int F_004be650(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x4be650u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  return 0;
}

/* ref: FUN_004be680 */
unsigned int F_004be680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4be680u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return 0;
}

/* ref: FUN_004be6b0 */
unsigned int F_004be6b0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x4be6b0u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  return 0;
}

/* ref: FUN_004be750 */
uint F_004be750(unsigned int gen_a0)
{
  GEN_ENTER(0x4be750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(float *)this = ((float)GEN_TOF(SQRT((float10)*(float *)this)));
  *(float *)((int)this + 4) = ((float)GEN_TOF(SQRT((float10)*(float *)((int)this + 4))));
  *(float *)((int)this + 8) = ((float)GEN_TOF(SQRT((float10)*(float *)((int)this + 8))));
  return (uint)this;
}

/* ref: FUN_004be7c0 */
unsigned int F_004be7c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4be7c0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_4;
  fVar2 = (float10)(float)((float10)1 - fVar1);
  *param_1 = (float)((float10)*param_3 * fVar1 + fVar2 * (float10)*param_2);
  param_1[1] = (float)((float10)param_3[1] * fVar1 + (float10)param_2[1] * fVar2);
  param_1[2] = (float)((float10)param_3[2] * fVar1 + (float10)param_2[2] * fVar2);
  param_1[3] = (float)((float10)param_3[3] * fVar1 + (float10)param_2[3] * fVar2);
  param_1[4] = (float)((float10)param_3[4] * fVar1 + (float10)param_2[4] * fVar2);
  param_1[5] = (float)((float10)param_3[5] * fVar1 + (float10)param_2[5] * fVar2);
  param_1[6] = (float)((float10)param_3[6] * fVar1 + (float10)param_2[6] * fVar2);
  param_1[7] = (float)((float10)param_3[7] * fVar1 + (float10)param_2[7] * fVar2);
  param_1[8] = (float)(fVar2 * (float10)param_2[8] + (float10)param_3[8] * fVar1);
  return 0;
}

/* ref: FUN_004be870 */
unsigned int F_004be870(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4be870u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *in_ecx = (float)((float10)*(float *)&REFG(undefined, 0x1097920) * (float10)param_2 + (float10)*in_ecx);
  return 0;
}

/* ref: FUN_004be890 */
unsigned int F_004be890(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4be890u, gen_a0, 0u, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar3 = *(float *)(param_3 + 4);
  fVar1 = *(float *)param_3;
  fVar2 = *(float *)(param_3 + 8);
  fVar4 = (float10)(float)((float10)param_2 * (float10)param_4);
  *in_ecx = (float)((float10)*in_ecx + fVar4 * (float10)*(float *)&REFG(undefined, 0x1097920));
  fVar5 = (float10)fVar3;
  in_ecx[1] = ((float)GEN_TOF(((float10)in_ecx[1] + fVar4 * (fVar5 * (float10)*(float *)&REFG(undefined, 0x1097924)))));
  fVar6 = (float10)fVar2;
  in_ecx[2] = ((float)GEN_TOF(((float10)in_ecx[2] + fVar4 * (fVar6 * (float10)*(float *)&REFG(undefined, 0x1097928)))));
  fVar7 = (float10)fVar1;
  in_ecx[3] = ((float)GEN_TOF(((float10)in_ecx[3] + fVar4 * (fVar7 * (float10)*(float *)&REFG(undefined, 0x109792c)))));
  in_ecx[4] = ((float)GEN_TOF(((((float10)*(float *)&REFG(undefined, 0x1097930) * fVar7) * fVar5) * fVar4 +
                     (float10)in_ecx[4])));
  in_ecx[5] = ((float)GEN_TOF(((((float10)*(float *)&REFG(undefined, 0x1097934) * fVar5) * fVar6) * fVar4 +
                     (float10)in_ecx[5])));
  in_ecx[7] = ((float)GEN_TOF(((((float10)*(float *)&REFG(undefined, 0x109793c) * fVar7) * fVar6) * fVar4 +
                     (float10)in_ecx[7])));
  in_ecx[6] = ((float)GEN_TOF(((((fVar6 * (float10)*(double *)&REFG(undefined, 0x10944e0)) * fVar6 - (float10)REFG(double, 0x1088130))
                      * (float10)*(float *)&REFG(undefined, 0x1097938)) * fVar4 + (float10)in_ecx[6])));
  in_ecx[8] = ((float)GEN_TOF((((fVar7 * fVar7 - fVar5 * fVar5) * (float10)*(float *)&REFG(undefined, 0x1097940)) * fVar4 +
                     (float10)in_ecx[8])));
  return 0;
}

/* ref: FUN_004be9a0 */
unsigned int F_004be9a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4be9a0u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)(fVar1 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)in_ecx[1] * fVar1);
  in_ecx[2] = (float)(fVar1 * (float10)in_ecx[2]);
  in_ecx[3] = (float)((float10)in_ecx[3] * fVar1);
  in_ecx[4] = (float)(fVar1 * (float10)in_ecx[4]);
  in_ecx[5] = (float)((float10)in_ecx[5] * fVar1);
  in_ecx[6] = (float)(fVar1 * (float10)in_ecx[6]);
  in_ecx[7] = (float)((float10)in_ecx[7] * fVar1);
  in_ecx[8] = (float)(fVar1 * (float10)in_ecx[8]);
  return 0;
}

/* ref: FUN_004bea00 */
unsigned int F_004bea00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bea00u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x1094678);
  *param_2 = (float)((float10)in_ecx[8] * fVar1);
  param_2[1] = (float)((float10)in_ecx[4] * fVar1);
  param_2[2] = (float)((float10)in_ecx[7] * fVar1);
  fVar2 = (float10)*(double *)&REFG(undefined, 0x1094670);
  param_2[3] = (float)((float10)in_ecx[3] * fVar2);
  param_2[4] = (float)((float10)in_ecx[4] * fVar2);
  param_2[5] = (float)((float10)in_ecx[8] * (float10)*(double *)&REFG(undefined, 0x1094668));
  param_2[6] = (float)((float10)in_ecx[5] * fVar1);
  param_2[7] = (float)((float10)in_ecx[1] * fVar2);
  param_2[8] = (float)((float10)in_ecx[7] * fVar1);
  param_2[9] = (float)((float10)in_ecx[5] * fVar1);
  param_2[10] = (float)((float10)in_ecx[6] * (float10)*(double *)&REFG(undefined, 0x1094660));
  param_2[0xb] = (float)((float10)in_ecx[2] * fVar2);
  param_2[0xc] = (float)((float10)in_ecx[3] * fVar2);
  param_2[0xd] = (float)((float10)in_ecx[1] * fVar2);
  param_2[0xe] = (float)(fVar2 * (float10)in_ecx[2]);
  param_2[0xf] = (float)((float10)*in_ecx * (float10)*(double *)&REFG(undefined, 0x1094658) -
                        (float10)in_ecx[6] * (float10)*(double *)&REFG(undefined, 0x1094650));
  return 0;
}

/* ref: FUN_004beab0 */
unsigned int F_004beab0(unsigned int gen_a0)
{
  GEN_ENTER(0x4beab0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_004bead0 */
float F_004bead0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bead0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float * pfVar1;
  
  (*(float *)(gen_frame + 0x20)) = *param_1;
  (*(float *)(gen_frame + 0x24)) = param_1[1];
  (*(float *)(gen_frame + 0x28)) = param_1[2];
  (*(float *)(gen_frame + 0x2c)) = (float)(float10)1;
  pfVar1 = (float *)F_004eede0(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x20)),param_2);
  (*(float *)(gen_frame + 0x14)) = pfVar1[1];
  (*(float *)(gen_frame + 0x10)) = *pfVar1;
  (*(float *)(gen_frame + 0x18)) = pfVar1[2];
  (*(float *)(gen_frame + 0x1c)) = pfVar1[3];
  (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF(((float10)pfVar1[3] * (float10)(*(float *)(gen_frame + 0x2c)) +
                    ((float10)pfVar1[2] * (float10)(*(float *)(gen_frame + 0x28)) +
                    ((float10)(*(float *)(gen_frame + 0x20)) * (float10)*pfVar1 + (float10)pfVar1[1] * (float10)(*(float *)(gen_frame + 0x24))))
                    )));
  return (*(float *)(gen_frame + 0x3c));
}

/* ref: FUN_004beb60 */
unsigned int F_004beb60(unsigned int gen_a0)
{
  GEN_ENTER(0x4beb60u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xe] = 0;
  in_ecx[0xf] = 0;
  in_ecx[0x10] = 0;
  in_ecx[0x11] = 0;
  in_ecx[0x12] = 0;
  in_ecx[0x13] = 0;
  in_ecx[0x14] = 0;
  in_ecx[0x15] = 0;
  in_ecx[0x16] = 0;
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  in_ecx[0x19] = 0;
  in_ecx[0x1a] = 0;
  return 0;
}

/* ref: FUN_004bebc0 */
uint F_004bebc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4bebc0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  float param_4 = (float)gen_a3;
  float * pfVar1;
  float * pfVar2;
  float * pfVar3;
  int iVar4;
  float * pfVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar7 = (float10)param_4;
  pfVar5 = (float *)(param_2 + 0x10);
  iVar6 = param_2 - param_3;
  fVar8 = (float10)(float)((float10)1 - fVar7);
  iVar4 = param_2 - param_1;
  param_2 = 3;
  pfVar1 = (float *)(param_3 + 4);
  pfVar3 = (float *)(param_1 + 8);
  do {
    pfVar2 = pfVar1 + 9;
    param_2 = param_2 + -1;
    pfVar3[-2] = (float)((float10)pfVar5[-4] * fVar8 + (float10)pfVar1[-1] * fVar7);
    *((float *)GEN_TOP(((param_1 - param_3) + -0x24 + (int)pfVar2))) =
         ((float)GEN_TOF((fVar7 * (float10)*pfVar1 + (float10)*(float *)(iVar6 + -0x24 + (int)pfVar2) * fVar8
                )));
    *pfVar3 = ((float)GEN_TOF(((float10)pfVar1[1] * fVar7 +
                     (float10)*((float *)GEN_TOP((iVar4 + -0x24 + (int)(pfVar3 + 9)))) * fVar8)));
    pfVar3[1] = (float)((float10)pfVar5[-1] * fVar8 + (float10)pfVar1[2] * fVar7);
    pfVar3[2] = (float)(fVar8 * (float10)*pfVar5 + (float10)pfVar1[3] * fVar7);
    pfVar3[3] = (float)((float10)pfVar5[1] * fVar8 + (float10)pfVar1[4] * fVar7);
    pfVar3[4] = (float)((float10)pfVar5[2] * fVar8 + (float10)pfVar1[5] * fVar7);
    pfVar3[5] = (float)((float10)pfVar5[3] * fVar8 + (float10)pfVar1[6] * fVar7);
    pfVar3[6] = (float)((float10)pfVar5[4] * fVar8 + (float10)pfVar1[7] * fVar7);
    pfVar1 = pfVar2;
    pfVar3 = pfVar3 + 9;
    pfVar5 = pfVar5 + 9;
  } while (param_2 != 0);
  return (uint)pfVar2;
}

/* ref: FUN_004becb0 */
unsigned int F_004becb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4becb0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*param_2 * (float10)*(float *)&REFG(undefined, 0x1097920) + (float10)*in_ecx);
  in_ecx[9] = (float)((float10)param_2[1] * (float10)*(float *)&REFG(undefined, 0x1097920) + (float10)in_ecx[9]);
  in_ecx[0x12] = (float)((float10)param_2[2] * (float10)*(float *)&REFG(undefined, 0x1097920) +
                        (float10)in_ecx[0x12]);
  return 0;
}

/* ref: FUN_004becf0 */
unsigned int F_004becf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4becf0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  F_004be890(in_ecx,*param_2,param_3,param_4);
  F_004be890(in_ecx + 0x24,param_2[1],param_3,param_4);
  F_004be890(in_ecx + 0x48,param_2[2],param_3,param_4);
  return 0;
}

/* ref: FUN_004bed50 */
unsigned int F_004bed50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bed50u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)*(float *)param_2;
  *in_ecx = (float)(fVar1 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)in_ecx[1] * fVar1);
  in_ecx[2] = (float)(fVar1 * (float10)in_ecx[2]);
  in_ecx[3] = (float)((float10)in_ecx[3] * fVar1);
  in_ecx[4] = (float)(fVar1 * (float10)in_ecx[4]);
  in_ecx[5] = (float)((float10)in_ecx[5] * fVar1);
  in_ecx[6] = (float)(fVar1 * (float10)in_ecx[6]);
  in_ecx[7] = (float)((float10)in_ecx[7] * fVar1);
  in_ecx[8] = (float)(fVar1 * (float10)in_ecx[8]);
  fVar1 = (float10)*(float *)(param_2 + 4);
  in_ecx[9] = (float)(fVar1 * (float10)in_ecx[9]);
  in_ecx[10] = (float)(fVar1 * (float10)in_ecx[10]);
  in_ecx[0xb] = (float)((float10)in_ecx[0xb] * fVar1);
  in_ecx[0xc] = (float)(fVar1 * (float10)in_ecx[0xc]);
  in_ecx[0xd] = (float)((float10)in_ecx[0xd] * fVar1);
  in_ecx[0xe] = (float)(fVar1 * (float10)in_ecx[0xe]);
  in_ecx[0xf] = (float)((float10)in_ecx[0xf] * fVar1);
  in_ecx[0x10] = (float)(fVar1 * (float10)in_ecx[0x10]);
  in_ecx[0x11] = (float)(fVar1 * (float10)in_ecx[0x11]);
  fVar1 = (float10)*(float *)(param_2 + 8);
  in_ecx[0x12] = (float)(fVar1 * (float10)in_ecx[0x12]);
  in_ecx[0x13] = (float)((float10)in_ecx[0x13] * fVar1);
  in_ecx[0x14] = (float)(fVar1 * (float10)in_ecx[0x14]);
  in_ecx[0x15] = (float)((float10)in_ecx[0x15] * fVar1);
  in_ecx[0x16] = (float)(fVar1 * (float10)in_ecx[0x16]);
  in_ecx[0x17] = (float)((float10)in_ecx[0x17] * fVar1);
  in_ecx[0x18] = (float)(fVar1 * (float10)in_ecx[0x18]);
  in_ecx[0x19] = (float)((float10)in_ecx[0x19] * fVar1);
  in_ecx[0x1a] = (float)(fVar1 * (float10)in_ecx[0x1a]);
  return 0;
}

/* ref: FUN_004bee50 */
unsigned int F_004bee50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bee50u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x1094678);
  *param_2 = (float)((float10)in_ecx[8] * fVar1);
  param_2[1] = (float)((float10)in_ecx[4] * fVar1);
  param_2[2] = (float)((float10)in_ecx[7] * fVar1);
  fVar2 = (float10)*(double *)&REFG(undefined, 0x1094670);
  param_2[3] = (float)((float10)in_ecx[3] * fVar2);
  param_2[4] = (float)((float10)in_ecx[4] * fVar2);
  fVar3 = (float10)*(double *)&REFG(undefined, 0x1094668);
  param_2[5] = (float)((float10)in_ecx[8] * fVar3);
  param_2[6] = (float)((float10)in_ecx[5] * fVar1);
  param_2[7] = (float)((float10)in_ecx[1] * fVar2);
  param_2[8] = (float)((float10)in_ecx[7] * fVar1);
  param_2[9] = (float)((float10)in_ecx[5] * fVar1);
  fVar4 = (float10)*(double *)&REFG(undefined, 0x1094660);
  param_2[10] = (float)((float10)in_ecx[6] * fVar4);
  param_2[0xb] = (float)((float10)in_ecx[2] * fVar2);
  param_2[0xc] = (float)((float10)in_ecx[3] * fVar2);
  param_2[0xd] = (float)((float10)in_ecx[1] * fVar2);
  param_2[0xe] = (float)((float10)in_ecx[2] * fVar2);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1094658);
  fVar6 = (float10)*(double *)&REFG(undefined, 0x1094650);
  param_2[0xf] = (float)((float10)*in_ecx * fVar5 - (float10)in_ecx[6] * fVar6);
  param_2[0x10] = (float)((float10)in_ecx[0x11] * fVar1);
  param_2[0x11] = (float)((float10)in_ecx[0xd] * fVar1);
  param_2[0x12] = (float)((float10)in_ecx[0x10] * fVar1);
  param_2[0x13] = (float)((float10)in_ecx[0xc] * fVar2);
  param_2[0x14] = (float)((float10)in_ecx[0xd] * fVar2);
  param_2[0x15] = (float)((float10)in_ecx[0x11] * fVar3);
  param_2[0x16] = (float)((float10)in_ecx[0xe] * fVar1);
  param_2[0x17] = (float)((float10)in_ecx[10] * fVar2);
  param_2[0x18] = (float)((float10)in_ecx[0x10] * fVar1);
  param_2[0x19] = (float)((float10)in_ecx[0xe] * fVar1);
  param_2[0x1a] = (float)((float10)in_ecx[0xf] * fVar4);
  param_2[0x1b] = (float)((float10)in_ecx[0xb] * fVar2);
  param_2[0x1c] = (float)((float10)in_ecx[0xc] * fVar2);
  param_2[0x1d] = (float)((float10)in_ecx[10] * fVar2);
  param_2[0x1e] = (float)((float10)in_ecx[0xb] * fVar2);
  param_2[0x1f] = (float)((float10)in_ecx[9] * fVar5 - (float10)in_ecx[0xf] * fVar6);
  param_2[0x20] = (float)((float10)in_ecx[0x1a] * fVar1);
  param_2[0x21] = (float)((float10)in_ecx[0x16] * fVar1);
  param_2[0x22] = (float)((float10)in_ecx[0x19] * fVar1);
  param_2[0x23] = (float)((float10)in_ecx[0x15] * fVar2);
  param_2[0x24] = (float)((float10)in_ecx[0x16] * fVar2);
  param_2[0x25] = (float)((float10)in_ecx[0x1a] * fVar3);
  param_2[0x26] = (float)((float10)in_ecx[0x17] * fVar1);
  param_2[0x27] = (float)((float10)in_ecx[0x13] * fVar2);
  param_2[0x28] = (float)((float10)in_ecx[0x19] * fVar1);
  param_2[0x29] = (float)((float10)in_ecx[0x17] * fVar1);
  param_2[0x2a] = (float)(fVar4 * (float10)in_ecx[0x18]);
  param_2[0x2b] = (float)((float10)in_ecx[0x14] * fVar2);
  param_2[0x2c] = (float)((float10)in_ecx[0x15] * fVar2);
  param_2[0x2d] = (float)((float10)in_ecx[0x13] * fVar2);
  param_2[0x2e] = (float)((float10)in_ecx[0x14] * fVar2);
  param_2[0x2f] = (float)(fVar5 * (float10)in_ecx[0x12] - (float10)in_ecx[0x18] * fVar6);
  return 0;
}

/* ref: FUN_004bf050 */
unsigned int F_004bf050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf050u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)0;
  *param_2 = (float)((float10)*in_ecx / (float10)*(float *)&REFG(undefined, 0x1097920) + fVar1);
  param_2[1] = (float)((float10)in_ecx[9] / (float10)*(float *)&REFG(undefined, 0x1097920) + fVar1);
  param_2[2] = (float)((float10)in_ecx[0x12] / (float10)*(float *)&REFG(undefined, 0x1097920) + fVar1);
  return 0;
}

/* ref: FUN_004bf180 */
uint F_004bf180(unsigned int gen_a0)
{
  GEN_ENTER(0x4bf180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x30) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x30),0,0);
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  return uVar1;
}

/* ref: FUN_004bf1a0 */
uint F_004bf1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf1a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (((param_2 != *in_ecx) && (param_2 != in_ecx[3])) &&
     ((param_2 != in_ecx[8] || (in_ecx[0xc] == 0)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_004bf1f0 */
uint F_004bf1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4bf1f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x24) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x24),0,0);
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  return uVar1;
}

/* ref: FUN_004bf210 */
uint F_004bf210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf210u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (((param_2 != *in_ecx) && (param_2 != in_ecx[2])) &&
     ((param_2 != in_ecx[6] || (in_ecx[9] == 0)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_004bf260 */
uint F_004bf260(unsigned int gen_a0)
{
  GEN_ENTER(0x4bf260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x1c) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x1c),0,0);
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  return uVar1;
}

/* ref: FUN_004bf280 */
uint F_004bf280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf280u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if ((param_2 != *in_ecx) && ((param_2 != in_ecx[4] || (in_ecx[7] == 0)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_004bf2d0 */
uint F_004bf2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf2d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (((param_2 != *in_ecx) && (param_2 != in_ecx[2])) &&
     ((param_2 != in_ecx[6] || (in_ecx[9] == 0)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_004bf320 */
uint F_004bf320(unsigned int gen_a0)
{
  GEN_ENTER(0x4bf320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x24) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x24),0,0);
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  return uVar1;
}

/* ref: FUN_004bf340 */
uint F_004bf340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf340u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (((param_2 != *in_ecx) && (param_2 != in_ecx[2])) &&
     ((param_2 != in_ecx[6] || (in_ecx[9] == 0)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_004bf490 */
uint F_004bf490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf490u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,0xce);
  return uVar1;
}

/* ref: FUN_004bf4e0 */
uint F_004bf4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf4e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xce);
  return uVar1;
}

/* ref: FUN_004bf530 */
uint F_004bf530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf530u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xce);
  return uVar1;
}

/* ref: FUN_004bf560 */
unsigned int F_004bf560(unsigned int gen_a0)
{
  GEN_ENTER(0x4bf560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)((int)this + 0x24) != (undefined *)0x0) {
    F_00982b20(*(undefined * PTR32 *)((int)this + 0x24));
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  return 0;
}

/* ref: FUN_004bf5b0 */
uint F_004bf5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,0xce);
  return (uint)uVar1;
}

/* ref: FUN_004bf5f0 */
uint F_004bf5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf5f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xce);
  return uVar1;
}

/* ref: FUN_004bf620 */
uint F_004bf620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf620u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xce);
  return (uint)uVar1;
}

/* ref: FUN_004bf670 */
uint F_004bf670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf670u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xce);
  return (uint)uVar1;
}

/* ref: FUN_004bf6b0 */
uint F_004bf6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf6b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xce);
  return uVar1;
}

/* ref: FUN_004bf6e0 */
uint F_004bf6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xce);
  return (uint)uVar1;
}

/* ref: FUN_004bf730 */
uint F_004bf730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf730u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xce);
  return (uint)uVar1;
}

/* ref: FUN_004bf770 */
uint F_004bf770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf770u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xce);
  return uVar1;
}

/* ref: FUN_004bf7a0 */
uint F_004bf7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xce);
  return (uint)uVar1;
}

/* ref: FUN_004bf800 */
uint F_004bf800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf800u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) + param_2;
  return in_ecx;
}

/* ref: FUN_004bf820 */
uint F_004bf820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf820u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) + param_2;
  return in_ecx;
}

