#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00ba7aa0 */
uint F_00ba7aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba7aa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xc);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x48) = param_1;
    *(undefined4 *)(iVar1 + 0x50) = param_2;
    return 0;
  }
  iVar1 = *(int *)((int)this + 0x14);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    *(undefined4 *)(iVar1 + 0x30) = param_2;
    return 0;
  }
  iVar1 = *(int *)((int)this + 0x1c);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x28) = param_1;
    *(undefined4 *)(iVar1 + 0x30) = param_2;
    return 0;
  }
  return 0xffffffff;
}

/* ref: FUN_00ba7b00 */
uint F_00ba7b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba7b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(int *)((int)this + 0xc) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x40))) = param_1;
    return 0;
  }
  if (*(int *)((int)this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x20))) = param_1;
    return 0;
  }
  if (*(int *)((int)this + 0x1c) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x20))) = param_1;
    return 0;
  }
  return 0xffffffff;
}

/* ref: FUN_00ba7c10 */
uint F_00ba7c10(void)
{
  GEN_ENTER(0xba7c10u, 0u, 0u, 0u, 0u);
  int iVar1;
  bool bVar2;
  
  iVar1 = REFG(int, 0x14c595c) + 1;
  bVar2 = REFG(int, 0x14c595c) == 0;
  REFG(int, 0x14c595c) = iVar1;
  if (bVar2) {
    F_00c08040();
    REFG(undefined4 * PTR32, 0x14c5958) = (undefined4 *)F_00406b90(0xc,0,0);
    if (REFG(undefined4 * PTR32, 0x14c5958) == (undefined4 *)0x0) {
      REFG(undefined4 * PTR32, 0x14c5958) = (undefined4 *)0x0;
    }
    else {
      *REFG(undefined4 * PTR32, 0x14c5958) = 0;
      REFG(undefined4 * PTR32, 0x14c5958)[1] = 0;
      REFG(undefined4 * PTR32, 0x14c5958)[2] = 0;
    }
    if (REFG(int, 0x14c595c) == 0) {
      F_00ba7c10();
    }
  }
  return 0;
}

/* ref: FUN_00ba7c80 */
uint F_00ba7c80(unsigned int gen_a0)
{
  GEN_ENTER(0xba7c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x94);
  if (this_00 == (undefined *)0x0) {
    return 0xffffffff;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(this_00 + 0x2c);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  uVar1 = F_00c0fdc0(this_00,*(undefined4 *)((int)this + 4));
  if ((int)uVar1 < 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0xffffffff;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  *(undefined4 *)((int)this + 0x94) = 0;
  return 0;
}

/* ref: FUN_00ba7ce0 */
uint F_00ba7ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba7ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x94) != (undefined *)0x0) {
    this = (undefined *)F_00c0f990(*(undefined * PTR32 *)((int)this + 0x94),*(undefined4 *)((int)this + 4),
                              param_1);
  }
  return (uint)this;
}

/* ref: Client::Network::Socket::SocketImpl::vf2 */
uint F_00ba7d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba7d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c07b30((undefined *)this,param_1);
  if (uVar1 == 0xffffffff) {
    return 0xffffffff;
  }
  LOCK();
  *(uint *)(this + 0x98) = (uint)(param_1 == 1) * 4 + 1;
  UNLOCK();
  return 0;
}

/* ref: FUN_00ba7d40 */
uint F_00ba7d40(unsigned int gen_a0)
{
  GEN_ENTER(0xba7d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c07c80(this,0x7fffffff);
  if (uVar1 == 0xffffffff) {
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
    return 0xffffffff;
  }
  LOCK();
  *(undefined4 *)((int)this + 0x98) = 2;
  UNLOCK();
  if (*(undefined * PTR32 *)((int)this + 0x94) != (undefined *)0x0) {
    F_00c0f990(*(undefined * PTR32 *)((int)this + 0x94),*(undefined4 *)((int)this + 4),0);
  }
  return uVar1;
}

/* ref: FUN_00ba7d90 */
uint F_00ba7d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba7d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  ushort uVar1;
  uint uVar2;
  __time64_t _Var3;
  
  uVar1 = gen_imp_ntohs(*(ushort *)(param_1 + 2));
  uVar2 = F_00c07ce0(this,param_1,0x10,(uint)uVar1);
  _Var3 = F_00c4b7c2((__time64_t *)0x0);
  *(__time64_t *)((int)this + 0x78) = _Var3;
  if (uVar2 == 0xfffffffe) {
    if (*(undefined * PTR32 *)((int)this + 0x94) != (undefined *)0x0) {
      F_00c0f990(*(undefined * PTR32 *)((int)this + 0x94),*(undefined4 *)((int)this + 4),1);
    }
    LOCK();
    *(undefined4 *)((int)this + 0x98) = 3;
    UNLOCK();
  }
  else {
    *(undefined4 *)((int)this + 0x78) = 0;
    *(undefined4 *)((int)this + 0x7c) = 0;
    if (uVar2 == 0xffffffff) {
      if ((*(int *)((int)this + 0x90) != 0) && (*(int *)((int)this + 0x94) != 0)) {
        F_00badec0((undefined *)((int)this + 0x28),*(int *)((int)this + 0x90),0xffffffff);
      }
      ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
      return 0xffffffff;
    }
    _Var3 = F_00c4b7c2((__time64_t *)0x0);
    *(__time64_t *)((int)this + 0x80) = _Var3;
    if (*(undefined * PTR32 *)((int)this + 0x94) != (undefined *)0x0) {
      F_00c0f990(*(undefined * PTR32 *)((int)this + 0x94),*(undefined4 *)((int)this + 4),2);
    }
    LOCK();
    *(undefined4 *)((int)this + 0x98) = 4;
    UNLOCK();
    if ((*(int *)((int)this + 0x90) != 0) && (*(int *)((int)this + 0x94) != 0)) {
      F_00badec0((undefined *)((int)this + 0x28),*(int *)((int)this + 0x90),uVar2);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00ba7ea0 */
uint F_00ba7ea0(unsigned int gen_a0)
{
  GEN_ENTER(0xba7ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  uint uVar3;
  __time64_t _Var4;
  
  uVar3 = F_00c07e10(this);
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  if (uVar3 == 0) {
    _Var4 = F_00c4b7c2((__time64_t *)0x0);
    *(__time64_t *)((int)this + 0x80) = _Var4;
    LOCK();
    *(undefined4 *)((int)this + 0x98) = 4;
    UNLOCK();
  }
  iVar2 = *(int *)((int)this + 0x90);
  if (iVar2 != 0) {
    if (uVar3 == 0) {
      if ((code *)*(gen_code32 *)((int)this + 0x28) == (code *)0x0) {
        return 0;
      }
      ((code *)*(gen_code32 *)((int)this + 0x28))(iVar2,0);
      return 0;
    }
    if ((code *)*(gen_code32 *)((int)this + 0x2c) != (code *)0x0) {
      ((code *)*(gen_code32 *)((int)this + 0x2c))(iVar2,uVar3);
    }
  }
  if (uVar3 != 0) {
    piVar1 = (int *)((int)this + 0x98);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1;
    UNLOCK();
    if (iVar2 != 7) {
      ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
    }
  }
  return 0;
}

/* ref: FUN_00ba7f40 */
uint F_00ba7f40(unsigned int gen_a0)
{
  GEN_ENTER(0xba7f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  uint uVar3;
  __time64_t _Var4;
  uint local_8;
  
  local_8 = 0;
  _Var4 = F_00c4b7c2((__time64_t *)0x0);
  if (((*(int *)((int)this + 0x78) != 0 || *(int *)((int)this + 0x7c) != 0) &&
      ((longlong)*(int *)((int)this + 0x4c) <= _Var4 - *(longlong *)((int)this + 0x78))) &&
     (*(int *)((int)this + 0x90) != 0)) {
    if ((code *)*(gen_code32 *)((int)this + 0x44) != (code *)0x0) {
      ((code *)*(gen_code32 *)((int)this + 0x44))(*(int *)((int)this + 0x90));
    }
    local_8 = 1;
  }
  uVar1 = *(uint *)((int)this + 0x50);
  if ((uVar1 & (int)uVar1 >> 0x1f) != 0xffffffff) {
    uVar3 = *(uint *)((int)this + 0x80);
    iVar2 = *(int *)((int)this + 0x84);
    if ((uVar3 != 0 || iVar2 != 0) ||
       (*(int *)((int)this + 0x88) != 0 || *(int *)((int)this + 0x8c) != 0)) {
      if (*(int *)((int)this + 8) != 0) {
        if ((iVar2 < *(int *)((int)this + 0x8c)) ||
           ((iVar2 <= *(int *)((int)this + 0x8c) && (uVar3 <= *(uint *)((int)this + 0x88))))) {
          iVar2 = *(int *)((int)this + 0x8c);
          uVar3 = *(uint *)((int)this + 0x88);
        }
      }
      if (((longlong)(int)uVar1 <= _Var4 - (longlong)CONCAT44(iVar2,uVar3)) &&
         (*(int *)((int)this + 0x90) != 0)) {
        if ((code *)*(gen_code32 *)((int)this + 0x48) != (code *)0x0) {
          ((code *)*(gen_code32 *)((int)this + 0x48))(*(int *)((int)this + 0x90));
        }
        return 1;
      }
    }
  }
  return local_8;
}

/* ref: FUN_00ba8040 */
unsigned int F_00ba8040(void)
{
  GEN_ENTER(0xba8040u, 0u, 0u, 0u, 0u);
  if (REFG(int, 0x14c595c) == 0) {
    F_00ba7c10();
    return 0;
  }
  return 0;
}

/* ref: Client::Network::Socket::PingClient::PingClientRequest::vf5 */
uint F_00ba8050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba8050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  DWORD DVar5;
  __time64_t _Var6;
  ulonglong uVar7;
  undefined * local_8;
  
  *(undefined2 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  this[0x24] = (undefined1)0x0;
  if (*(undefined * PTR32 *)(this + 0x18) != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)(this + 0x18));
    *(undefined4 *)(this + 0x18) = 0;
  }
  pvVar4 = F_00c51787(0x20);
  *(undefined * PTR32 *)(this + 0x18) = pvVar4;
  local_8 = (undefined *)0x0;
  if (*(short *)(this + 0x6c) != 0) {
    do {
      *(undefined4 *)(this + 0x80) = 0;
      *(undefined4 *)(this + 0x84) = 0;
      _Var6 = F_00c4b7c2((__time64_t *)0x0);
      *(int *)(this + 0x28) = (int)_Var6;
      uVar7 = F_00427d90();
      *(ulonglong *)(this + 0x30) = uVar7;
      uVar7 = F_00427e30();
      *(ulonglong *)(this + 0x38) = uVar7;
      DVar5 = gen_imp_IcmpSendEcho(*(HANDLE *)(this + 0x20),*(ulong *)(this + 0x1c),"Data Buffer",4,
                           (GEN_LPANY)0x0,*(LPVOID *)(this + 0x18),0x3c,400);
      if (DVar5 == 0) {
        gen_imp_GetLastError();
        *(short *)(this + 0x88) = *(short *)(this + 0x88) + 1;
      }
      else {
        uVar7 = F_00427d90();
        *(uint *)(this + 0x80) = (uint)uVar7 - *(uint *)(this + 0x30);
        uVar1 = *(uint *)(this + 0x80);
        *(uint *)(this + 0x84) =
             ((int)(uVar7 >> 0x20) - *(int *)(this + 0x34)) -
             (uint)((uint)uVar7 < *(uint *)(this + 0x30));
        uVar2 = *(uint *)(this + 0x40);
        uVar3 = *(uint *)(this + 0x84);
        if (uVar2 == 0 && *(int *)(this + 0x44) == 0) {
          *(uint *)(this + 0x40) = uVar1;
          *(uint *)(this + 0x44) = uVar3;
        }
        else {
          *(uint *)(this + 0x44) = uVar3 + *(int *)(this + 0x44) + (uint)CARRY4(uVar1,uVar2);
          *(uint *)(this + 0x40) = uVar1 + uVar2 >> 1 | *(uint *)(this + 0x44) << 0x1f;
          *(uint *)(this + 0x44) = *(uint *)(this + 0x44) >> 1;
        }
        uVar2 = *(uint *)(this + 0x7c);
        if ((uVar2 < uVar3) ||
           (((uVar2 <= uVar3 && (*(uint *)(this + 0x78) < uVar1)) ||
            (*(uint *)(this + 0x78) == 0 && uVar2 == 0)))) {
          *(uint *)(this + 0x78) = uVar1;
          *(uint *)(this + 0x7c) = uVar3;
        }
        uVar2 = *(uint *)(this + 0x74);
        if (((uVar3 < uVar2) || ((uVar3 == uVar2 && (uVar1 < *(uint *)(this + 0x70))))) ||
           (*(uint *)(this + 0x70) == 0 && uVar2 == 0)) {
          *(uint *)(this + 0x70) = uVar1;
          *(uint *)(this + 0x74) = uVar3;
        }
      }
      pvVar4 = (undefined *)((int)local_8 + 1);
      local_8 = pvVar4;
    } while ((ushort)pvVar4 < *(ushort *)(this + 0x6c));
  }
  if ((*(int *)(this + 0x44) == 0) && (*(int *)(this + 0x40) == 0)) {
    *(undefined4 *)(this + 0x44) = 0;
    *(undefined4 *)(this + 0x40) = 1000;
    return (uint)pvVar4;
  }
  this[0x24] = (undefined1)0x1;
  return (uint)pvVar4;
}

/* ref: FUN_00ba81e0 */
uint F_00ba81e0(unsigned int gen_a0)
{
  GEN_ENTER(0xba81e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint * puVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  code * pcVar5;
  ulonglong uVar6;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  ((byte *)(gen_frame + 0x4))[0x24] = (char)uVar2;
  ((byte *)(gen_frame + 0x4))[0x25] = (char)(uVar2 >> 8);
  ((byte *)(gen_frame + 0x4))[0x26] = (char)(uVar2 >> 0x10);
  ((byte *)(gen_frame + 0x4))[0x27] = (char)(uVar2 >> 0x18);
  if (*(char *)((int)this + 0x39) != '\0') {
    uVar6 = F_00427d90();
    if ((((int)(uVar6 >> 0x20) - *(int *)((int)this + 0x2c) !=
          (uint)((uint)uVar6 < *(uint *)((int)this + 0x28))) ||
        (400 < (uint)uVar6 - *(uint *)((int)this + 0x28))) ||
       (uVar2 = F_004cf030(*(undefined * PTR32 *)((int)this + 0x3c)), (char)uVar2 != '\0')) {
      puVar1 = (uint *)((int)this + 8);
      uVar6 = F_00427d90();
      uVar2 = (uint)uVar6 - *(uint *)((int)this + 0x28);
      iVar4 = ((int)(uVar6 >> 0x20) - *(int *)((int)this + 0x2c)) -
              (uint)((uint)uVar6 < *(uint *)((int)this + 0x28));
      *puVar1 = uVar2;
      *(int *)((int)this + 0xc) = iVar4;
      if (((iVar4 != 0) || (400 < uVar2)) || (*((char *)GEN_TOP((*(int *)((int)this + 0x3c) + 0x24))) == '\0'))
      {
        *puVar1 = 1000;
        *(undefined4 *)((int)this + 0xc) = 0;
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3c) + 4))))(*(int * PTR32 *)((int)this + 0x3c));
      }
      *puVar1 = *((uint *)GEN_TOP((*(int *)((int)this + 0x3c) + 0x40)));
      *(undefined4 *)((int)this + 0xc) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x3c) + 0x44)));
      uVar2 = 0;
      if ((code *)*(gen_code32 *)((int)this + 0x14) != (code *)0x0) {
        uVar2 = ((code *)*(gen_code32 *)((int)this + 0x14))(*(undefined4 *)((int)this + 0x18),puVar1);
      }
      *(undefined4 *)this = 3;
      F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 36)) ^ (uint)(uint)(gen_frame + 0x2c));
      return uVar2;
    }
    goto LAB_00ba834e;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x4c);
  if (piVar3 == (int *)0x0) {
    piVar3 = *(int * PTR32 *)((int)this + 0x54);
    if (piVar3 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3,((byte *)(gen_frame + 0x4)) + 4,0x20);
      goto LAB_00ba82d3;
    }
    piVar3 = *(int * PTR32 *)((int)this + 0x5c);
    if (piVar3 != (int *)0x0) {
      pcVar5 = *(gen_code32 *)(*piVar3 + 0x28);
      goto LAB_00ba82cb;
    }
LAB_00ba82d7: ;
    uVar6 = F_00427d90();
    uVar2 = (uint)uVar6 - *(uint *)((int)this + 0x28);
    iVar4 = ((int)(uVar6 >> 0x20) - *(int *)((int)this + 0x2c)) -
            (uint)((uint)uVar6 < *(uint *)((int)this + 0x28));
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) = iVar4;
    if ((iVar4 == 0) && (uVar2 < 400)) goto LAB_00ba834e;
  }
  else {
    pcVar5 = *(gen_code32 *)(*piVar3 + 0x24);
LAB_00ba82cb: ;
    uVar2 = (*pcVar5)(piVar3,((byte *)(gen_frame + 0x4)) + 4,0x20);
LAB_00ba82d3: ;
    if ((int)uVar2 < 0) goto LAB_00ba82d7;
  }
  uVar6 = F_00427d90();
  uVar2 = (uint)uVar6 - *(uint *)((int)this + 0x28);
  if (((int)(uVar6 >> 0x20) - *(int *)((int)this + 0x2c) !=
       (uint)((uint)uVar6 < *(uint *)((int)this + 0x28))) || ((399 < uVar2 || (((byte *)(gen_frame + 0x4))[0x1c] == 0))))
  {
    *(undefined4 *)this = 3;
    puVar1 = (uint *)((int)this + 8);
    uVar6 = F_00427d90();
    uVar2 = (uint)uVar6 - *(uint *)((int)this + 0x28);
    iVar4 = ((int)(uVar6 >> 0x20) - *(int *)((int)this + 0x2c)) -
            (uint)((uint)uVar6 < *(uint *)((int)this + 0x28));
    *puVar1 = uVar2;
    *(int *)((int)this + 0xc) = iVar4;
    if ((iVar4 != 0) || (1000 < uVar2)) {
      *puVar1 = 1000;
      *(undefined4 *)((int)this + 0xc) = 0;
    }
    uVar2 = 0;
    if ((code *)*(gen_code32 *)((int)this + 0x14) != (code *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)((int)this + 0x14))(*(undefined4 *)((int)this + 0x18),puVar1);
    }
  }
LAB_00ba834e: ;
  F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 36)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar2;
}

/* ref: FUN_00ba8360 */
uint F_00ba8360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba8360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulong param_1 = (ulong)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  int * piVar1;
  ushort uVar2;
  ulong uVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  this_00 = *(undefined * PTR32 *)((int)this + 0xc);
  if (this_00 == (undefined *)0x0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x14);
    if (piVar1 != (int *)0x0) {
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1,param_1,param_2);
      if (-1 < (int)uVar4) {
        uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x14) + 0x18))))(*(int * PTR32 *)((int)this + 0x14));
        F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
        return uVar4;
      }
      goto LAB_00ba83bd;
    }
    piVar1 = *(int * PTR32 *)((int)this + 0x1c);
    if (piVar1 != (int *)0x0) {
      uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,param_1,param_2);
      if (-1 < (int)uVar4) {
        uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 0x14))))(*(int * PTR32 *)((int)this + 0x1c));
        F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
        return uVar4;
      }
      goto LAB_00ba83bd;
    }
  }
  else {
    (*(undefined2 *)(gen_frame + 0x8)) = 2;
    uVar3 = gen_imp_htonl(param_1);
    (*(ulong *)(gen_frame + 0xc)) = uVar3;
    uVar2 = gen_imp_htons((ushort)param_2);
    (*(ushort *)(gen_frame + 0xa)) = uVar2;
    uVar4 = F_00c07c40(this_00,&(*(undefined2 *)(gen_frame + 0x8)),0x10);
    if (uVar4 != 0xffffffff) {
      if (-1 < (int)uVar4) {
        uVar4 = F_00ba7d40(*(undefined * PTR32 *)((int)this + 0xc));
        F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
        return uVar4;
      }
      goto LAB_00ba83bd;
    }
    ((code *)*(gen_code32 *)(*(int *)this_00 + 0xc))(this_00);
  }
  uVar4 = 0xffffffff;
LAB_00ba83bd: ;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar4;
}

/* ref: FUN_00ba8460 */
uint F_00ba8460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba8460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ba8360(this,0,param_1);
  return uVar1;
}

/* ref: FUN_00ba8480 */
uint F_00ba8480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba8480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  ushort uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = param_1[1];
  uVar1 = gen_imp_ntohs((ushort)((uint)*param_1 >> 0x10));
  uVar3 = (uint)uVar1;
  uVar2 = gen_imp_ntohl(uVar2);
  uVar3 = F_00ba8360(this,uVar2,uVar3);
  return uVar3;
}

/* ref: FUN_00ba84d0 */
uint F_00ba84d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xba84d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int * piVar1;
  uint uVar2;
  
  if (*(undefined * PTR32 *)((int)this + 0xc) != (undefined *)0x0) {
    uVar2 = F_00ba7d90(*(undefined * PTR32 *)((int)this + 0xc),param_1);
    return uVar2;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x1c);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x20))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0xffffffff;
}

/* ref: FUN_00ba8510 */
uint F_00ba8510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba8510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = (int *)((int)this + 0x98);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1;
  UNLOCK();
  if ((0 < iVar2) && (*(int *)((int)this + 0x94) == 0)) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x2c);
    *(undefined * PTR32 *)((int)this + 0x94) = param_1;
    gen_imp_EnterCriticalSection(lpCriticalSection);
    uVar3 = F_00c0fd50(param_1,*(undefined4 *)((int)this + 4));
    if (uVar3 == 0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return 0xffffffff;
    }
    *(undefined * PTR32 *)(uVar3 + 8) = this;
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    piVar1 = (int *)((int)this + 0x98);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1;
    UNLOCK();
    if ((iVar2 == 5) && (*(undefined * PTR32 *)((int)this + 0x94) != (undefined *)0x0)) {
      F_00c0f990(*(undefined * PTR32 *)((int)this + 0x94),*(undefined4 *)((int)this + 4),2);
    }
    return 0;
  }
  return 0xffffffff;
}

/* ref: FUN_00ba85b0 */
uint F_00ba85b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba85b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1104738));
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00ba85e0 */
uint F_00ba85e0(unsigned int gen_a0)
{
  GEN_ENTER(0xba85e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x14);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1104738));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x18);
  if ((piVar2 != (int *)0x0) && (*(int *)((int)this + 0x1c) != 0)) {
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      F_00406ad0(*(undefined4 *)((int)this + 0x18));
      puVar1 = *(undefined4 * PTR32 *)((int)this + 0x1c);
      if (puVar1 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      }
    }
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x10);
  if ((piVar2 != (int *)0x0) && (*(int *)((int)this + 0x14) != 0)) {
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      F_00406ad0(*(undefined4 *)((int)this + 0x10));
      puVar1 = *(undefined4 * PTR32 *)((int)this + 0x14);
      if (puVar1 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      }
    }
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 8);
  if ((piVar2 != (int *)0x0) && (*(int *)((int)this + 0xc) != 0)) {
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      piVar2 = (int *)F_00406ad0(*(undefined4 *)((int)this + 8));
      puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*puVar1)(puVar1,1)));
      }
    }
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return (uint)piVar2;
}

/* ref: FUN_00ba8690 */
uint F_00ba8690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba8690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00bb1550((undefined *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_00ba86a0 */
uint F_00ba86a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba86a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00bb16a0((undefined *)((int)this + 0x10),param_1);
  return uVar1;
}

/* ref: FUN_00ba86b0 */
uint F_00ba86b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba86b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00bb1770((undefined *)((int)this + 0x18),param_1);
  return uVar1;
}

/* ref: FUN_00ba86c0 */
uint F_00ba86c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba86c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int * piVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(undefined2 *)(gen_frame + 0x18)) = 0;
  F_00ba6740(((undefined1 *)(gen_frame + 0x8)),param_1,param_2);
  if (*(undefined * PTR32 *)((int)this + 0xc) != (undefined *)0x0) {
    uVar2 = F_00ba7d90(*(undefined * PTR32 *)((int)this + 0xc),((undefined1 *)(gen_frame + 0x8)));
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return uVar2;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,((undefined1 *)(gen_frame + 0x8)));
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return uVar2;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x1c);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1,((undefined1 *)(gen_frame + 0x8)));
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return uVar2;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0xffffffff;
}

/* ref: FUN_00ba8770 */
uint F_00ba8770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba8770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int * piVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(undefined2 *)(gen_frame + 0x18)) = 0;
  F_00ba6740(((undefined1 *)(gen_frame + 0x8)),param_1,param_2);
  if (*(undefined * PTR32 *)((int)this + 0xc) != (undefined *)0x0) {
    uVar2 = F_00ba7d90(*(undefined * PTR32 *)((int)this + 0xc),((undefined1 *)(gen_frame + 0x8)));
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return uVar2;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,((undefined1 *)(gen_frame + 0x8)));
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return uVar2;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x1c);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1,((undefined1 *)(gen_frame + 0x8)));
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return uVar2;
  }
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0xffffffff;
}

/* ref: FUN_00ba8820 */
uint F_00ba8820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba8820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x9c) = param_1;
  if (*(int *)((int)this + 0xb4) != 0) {
    F_00406ad0(*(int *)((int)this + 0xb4));
    *(undefined4 *)((int)this + 0xb4) = 0;
  }
  uVar4 = F_00406bb0(*(int *)((int)this + 0x9c) + 1,0,0);
  *(uint *)((int)this + 0xb4) = uVar4;
  piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0xa8)));
  if (piVar5 != *(int * PTR32 *)((int)this + 0xa8)) {
    do {
      F_00ba8820((undefined *)piVar5[3],*(undefined4 *)((int)this + 0x9c));
      if (*(char *)((int)piVar5 + 0x11) == '\0') {
        piVar2 = (int *)piVar5[2];
        if (*(char *)((int)piVar2 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          piVar5 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x11);
            piVar5 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x11);
          piVar3 = (int *)piVar5[1];
          piVar2 = piVar5;
          while ((piVar5 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x11);
            piVar3 = (int *)piVar5[1];
            piVar2 = piVar5;
          }
        }
      }
    } while (piVar5 != *(int * PTR32 *)((int)this + 0xa8));
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  return 0;
}

/* ref: FUN_00ba88f0 */
uint F_00ba88f0(unsigned int gen_a0)
{
  GEN_ENTER(0xba88f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  
  piVar4 = *(int * PTR32 *)((int)this + 8);
  piVar6 = (int *)*piVar4;
  if (piVar6 != piVar4) {
    do {
      piVar4 = (int *)piVar6[4];
      if ((piVar4 != (int *)0x0) && (*(char *)((int)piVar4 + 7) == '\0')) {
        piVar2 = (int *)piVar4[2];
        if ((piVar2[0x24] != 0) && ((code *)piVar2[0xf] != (code *)0x0)) {
          (*(code *)piVar2[0xf])(piVar2[0x24]);
        }
        piVar3 = piVar2 + 0x26;
        LOCK();
        piVar4 = (int *)*piVar3;
        *piVar3 = *piVar3;
        UNLOCK();
        if ((piVar4 != (int *)0x2) && (piVar4 = (int *)F_00ba7f40(piVar2), piVar4 == (int *)0x1))
        {
          uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
          return uVar5;
        }
      }
      if (*(char *)((int)piVar6 + 0x15) == '\0') {
        piVar4 = (int *)piVar6[2];
        if (*(char *)((int)piVar4 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar4 + 0x15);
          piVar6 = piVar4;
          piVar4 = (int *)*piVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar4 + 0x15);
            piVar6 = piVar4;
            piVar4 = (int *)*piVar4;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0x15);
          piVar3 = (int *)piVar6[1];
          piVar2 = piVar6;
          while ((piVar4 = piVar3, piVar6 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar4[2])))
          {
            cVar1 = *(char *)(piVar4[1] + 0x15);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar6 != *(int * PTR32 *)((int)this + 8));
  }
  return (uint)piVar4;
}

/* ref: FUN_00ba89b0 */
uint F_00ba89b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba89b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (*(undefined * PTR32 *)((int)this + 0xc) != (undefined *)0x0) {
    uVar2 = F_00ba8820(*(undefined * PTR32 *)((int)this + 0xc),param_1);
    return uVar2;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1,param_1);
    return uVar2;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x1c);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1,param_1);
    return uVar2;
  }
  return 0xffffffff;
}

/* ref: FUN_00ba89f0 */
uint F_00ba89f0(unsigned int gen_a0)
{
  GEN_ENTER(0xba89f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_004cefe0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1104740));
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x24) = 0;
  F_00a1af40((undefined *)((int)this + 0x28));
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0xf;
  *(undefined1 *)((int)this + 0x48) = 0;
  *(undefined2 *)((int)this + 0x6c) = 3;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  return (uint)this;
}

/* ref: FUN_00ba8a40 */
unsigned int F_00ba8a40(unsigned int gen_a0)
{
  GEN_ENTER(0xba8a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1104740));
  if (*(HANDLE *)((int)this + 0x20) != (HANDLE)0x0) {
    gen_imp_IcmpCloseHandle(*(HANDLE *)((int)this + 0x20));
  }
  if (*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0) {
    F_00c4c68f(*(undefined * PTR32 *)((int)this + 0x18));
  }
  if (0xf < *(uint *)((int)this + 0x5c)) {
    F_00406ad0(*(undefined4 *)((int)this + 0x48));
  }
  *(undefined4 *)((int)this + 0x5c) = 0xf;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined1 *)((int)this + 0x48) = 0;
  F_004cf880(this);
  return 0;
}

/* ref: FUN_00ba8aa0 */
unsigned int F_00ba8aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba8aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2c));
  iVar1 = *(int *)((int)this + 0x354);
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,0x25a);
  piVar3[1] = iVar2;
  *piVar3 = iVar1;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = param_1;
  }
  if (*(int *)((int)this + 0x358) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 0x358) = *(int *)((int)this + 0x358) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x2c));
  return 0;
}

/* ref: FUN_00ba8b20 */
uint F_00ba8b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba8b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)((int)this + 0x1c);
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,0x25a);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = param_1;
  }
  if (*(int *)((int)this + 0x20) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_00ba8b80 */
uint F_00ba8b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba8b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  *(undefined * PTR32 *)(param_1 + 0xd8) = this;
  puVar1 = (undefined4 *)F_004296a0(0x14,0,0x25c);
  *puVar1 = *(undefined4 *)((int)this + 0xe0);
  puVar1[1] = *(undefined4 *)((int)this + 0xe0);
  puVar1[2] = *(undefined4 *)((int)this + 0xe0);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (int *)0x0) {
    puVar1[3] = param_1;
  }
  uVar2 = F_00bb3ea0((undefined *)((int)this + 0xdc),((undefined1 *)(gen_frame + 0x4)),puVar1,0);
  return uVar2;
}

/* ref: FUN_00ba8be0 */
uint F_00ba8be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xba8be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int * piVar1;
  uint uVar2;
  
  if (*(undefined * PTR32 *)((int)this + 0xc) != (undefined *)0x0) {
    uVar2 = F_00ba8820(*(undefined * PTR32 *)((int)this + 0xc),param_1);
    return uVar2;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x38))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x1c);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x34))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0xffffffff;
}

/* ref: FUN_00ba8c20 */
unsigned int F_00ba8c20(unsigned int gen_a0)
{
  GEN_ENTER(0xba8c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(int *)((int)this + 0x90) != 0) && ((code *)*(gen_code32 *)((int)this + 0x40) != (code *)0x0)) {
    uVar1 = ((code *)*(gen_code32 *)((int)this + 0x40))(*(int *)((int)this + 0x90));
    if (((char)uVar1 != '\0') && (*(undefined * PTR32 *)((int)this + 0x94) != (undefined *)0x0)) {
      F_00ba8aa0(*(undefined * PTR32 *)((int)this + 0x94),this);
    }
  }
  return 0;
}

/* ref: FUN_00ba8c50 */
unsigned int F_00ba8c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba8c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  *(undefined * PTR32 *)(param_1 + 0xa0) = this;
  puVar1 = (undefined4 *)F_004296a0(0x14,0,0x25a);
  *puVar1 = *(undefined4 *)((int)this + 0xa8);
  puVar1[1] = *(undefined4 *)((int)this + 0xa8);
  puVar1[2] = *(undefined4 *)((int)this + 0xa8);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (int *)0x0) {
    puVar1[3] = param_1;
  }
  F_00bb3dc0((undefined *)((int)this + 0xa4),((undefined1 *)(gen_frame + 0x4)),puVar1,0);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  return 0;
}

/* ref: FUN_00ba8cd0 */
uint F_00ba8cd0(unsigned int gen_a0)
{
  GEN_ENTER(0xba8cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00c0fd80(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x110475c));
  *(undefined4 *)((int)this + 0x358) = 0;
  uVar1 = F_004296a0(0xc,0,0x25a);
  *(uint *)((int)this + 0x354) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x354) + 4))) = *(int *)((int)this + 0x354);
  return (uint)this;
}

/* ref: Client::Network::Socket::PollerImpl::vf3 */
unsigned int F_00ba8d10(unsigned int gen_a0)
{
  GEN_ENTER(0xba8d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  
  F_00bb57c0((undefined *)this);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x2c));
  iVar1 = *(int *)(this + 0x358);
  while (iVar1 != 0) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((**(int * PTR32 *)(this + 0x354) + 8))) + 0x90)));
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
    piVar3 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x354)));
    if (piVar3 != *(int * PTR32 *)(this + 0x354)) {
      *(int *)piVar3[1] = *piVar3;
      *(int *)(*piVar3 + 4) = piVar3[1];
      F_00429760(piVar3,0xc,0x25a);
      *(int *)(this + 0x358) = *(int *)(this + 0x358) + -1;
    }
    iVar1 = *(int *)(this + 0x358);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x2c));
  return 0;
}

/* ref: Client::Network::Socket::RUDPSocket::vf14 */
uint F_00ba8da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba8da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  iVar1 = *(int *)(this + 0x74);
  *(undefined4 *)(this + 0xd4) = param_1;
  if (iVar1 == 0) {
    return 0;
  }
  if (*(undefined * PTR32 *)(iVar1 + 0xc) != (undefined *)0x0) {
    uVar3 = F_00ba8820(*(undefined * PTR32 *)(iVar1 + 0xc),param_1);
    return uVar3;
  }
  piVar2 = *(int * PTR32 *)(iVar1 + 0x14);
  if (piVar2 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x38))(piVar2,param_1);
    return uVar3;
  }
  piVar2 = *(int * PTR32 *)(iVar1 + 0x1c);
  if (piVar2 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x34))(piVar2,param_1);
    return uVar3;
  }
  return 0xffffffff;
}

/* ref: FUN_00ba8e00 */
uint F_00ba8e00(unsigned int gen_a0)
{
  GEN_ENTER(0xba8e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int iVar1;
  int * piVar2;
  code * pcVar3;
  uint uVar4;
  
  iVar1 = *(int *)((int)this + 0xe4);
  while (iVar1 != 0) {
    piVar2 = *((int * PTR32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xe0) + 0xc)));
    pcVar3 = *(gen_code32 *)(*piVar2 + 0x14);
    piVar2[0x36] = 0;
    (*pcVar3)(piVar2);
    F_00bb32f0((undefined *)((int)this + 0xdc),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0xe0));
    iVar1 = *(int *)((int)this + 0xe4);
  }
  uVar4 = 0;
  if (*(int *)((int)this + 0xd8) != 0) {
    this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 0xd8) + 0xdc)));
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
    F_00bb2410(this_00,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    uVar4 = F_00bb4740(this_00,&(*(undefined * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
    *(undefined4 *)((int)this + 0xd8) = 0;
  }
  return uVar4;
}

/* ref: FUN_00ba8ea0 */
uint F_00ba8ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba8ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  __time64_t _Var2;
  
  uVar1 = F_00c07ca0(this);
  if (uVar1 == 0xffffffff) {
    return 0xffffffff;
  }
  F_00ba8c50(this,param_1);
  param_1[1] = uVar1;
  if (*(int *)((int)this + 0x94) != 0) {
    ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    F_00ba8820(param_1,*(undefined4 *)((int)this + 0x9c));
    F_00ba8510(param_1,*(undefined4 *)((int)this + 0x94));
    if ((undefined *)param_1[0x25] != (undefined *)0x0) {
      F_00c0f990((undefined *)param_1[0x25],param_1[1],2);
    }
  }
  LOCK();
  param_1[0x26] = 4;
  UNLOCK();
  _Var2 = F_00c4b7c2((__time64_t *)0x0);
  *(__time64_t *)(param_1 + 0x20) = _Var2;
  return uVar1;
}

/* ref: FUN_00ba8f40 */
uint F_00ba8f40(unsigned int gen_a0)
{
  GEN_ENTER(0xba8f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int * local_18;
  int local_8;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  local_18 = (int *)0x0;
  if (*(int *)((int)this + 200) == 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  uVar4 = *(uint *)((int)this + 0xc4);
  local_8 = 0;
  if ((*(int * PTR32 *)((int)this + 0xb8) != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 0xb8))), puVar1 != (undefined4 *)0x0)) {
    local_18 = (int *)*puVar1;
  }
  uVar7 = *(int *)((int)this + 200) + uVar4;
  for (; uVar4 != uVar7; uVar4 = uVar4 + 1) {
    iVar6 = 0;
    if (local_18 != (int *)0x0) {
      iVar6 = *local_18;
    }
    uVar3 = uVar4;
    if (*(uint *)(iVar6 + 8) <= uVar4) {
      uVar3 = uVar4 - *(uint *)(iVar6 + 8);
    }
    local_8 = local_8 + *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar3 * 4))) + 8)));
  }
  uVar4 = *(uint *)((int)this + 0xdc);
  piVar2 = *(int * PTR32 *)((int)this + 0xd0);
  piVar5 = (int *)0x0;
  if ((piVar2 != (int *)0x0) && ((undefined4 *)*piVar2 != (undefined4 *)0x0)) {
    piVar5 = *(int * PTR32 *)*piVar2;
  }
  uVar7 = (*(int *)((int)this + 0xe0) + uVar4) - 1;
  if (((piVar5 == (int *)0x0) || ((int *)*piVar5 == (int *)0x0)) ||
     (piVar5 = *(int * PTR32 *)*piVar5, piVar5 == (int *)0x0)) {
    iVar6 = 0;
  }
  else {
    iVar6 = *piVar5;
  }
  if (*(uint *)(iVar6 + 8) <= uVar7) {
    uVar7 = uVar7 - *(uint *)(iVar6 + 8);
  }
  if (piVar2 == (int *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *piVar2;
  }
  if (*(uint *)(iVar8 + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)(iVar8 + 8);
  }
  iVar6 = **((int * PTR32 *)GEN_TOP((*(int *)(iVar6 + 4) + uVar7 * 4))) - **((int * PTR32 *)GEN_TOP((*(int *)(iVar8 + 4) + uVar4 * 4)));
  if (iVar6 == 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return local_8 / iVar6;
}

/* ref: FUN_00ba9060 */
uint F_00ba9060(unsigned int gen_a0)
{
  GEN_ENTER(0xba9060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int * piVar8;
  int local_8;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar8 = (int *)0x0;
  if (*(int *)((int)this + 0xe0) == 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0xd0);
  uVar4 = *(uint *)((int)this + 0xdc);
  local_8 = 0;
  if ((piVar1 != (int *)0x0) && ((undefined4 *)*piVar1 != (undefined4 *)0x0)) {
    piVar8 = *(int * PTR32 *)*piVar1;
  }
  uVar5 = *(int *)((int)this + 0xe0) + uVar4;
  for (uVar3 = uVar4; uVar3 != uVar5; uVar3 = uVar3 + 1) {
    if (piVar8 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *piVar8;
    }
    uVar2 = uVar3;
    if (*(uint *)(iVar6 + 8) <= uVar3) {
      uVar2 = uVar3 - *(uint *)(iVar6 + 8);
    }
    local_8 = local_8 + *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar2 * 4))) + 8)));
  }
  piVar8 = (int *)0x0;
  if ((piVar1 != (int *)0x0) && ((undefined4 *)*piVar1 != (undefined4 *)0x0)) {
    piVar8 = *(int * PTR32 *)*piVar1;
  }
  uVar5 = uVar5 - 1;
  if (((piVar8 == (int *)0x0) || ((int *)*piVar8 == (int *)0x0)) ||
     (piVar8 = *(int * PTR32 *)*piVar8, piVar8 == (int *)0x0)) {
    iVar6 = 0;
  }
  else {
    iVar6 = *piVar8;
  }
  if (*(uint *)(iVar6 + 8) <= uVar5) {
    uVar5 = uVar5 - *(uint *)(iVar6 + 8);
  }
  if (piVar1 == (int *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *piVar1;
  }
  if (*(uint *)(iVar7 + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)(iVar7 + 8);
  }
  iVar6 = **((int * PTR32 *)GEN_TOP((*(int *)(iVar6 + 4) + uVar5 * 4))) - **((int * PTR32 *)GEN_TOP((*(int *)(iVar7 + 4) + uVar4 * 4)));
  if (iVar6 == 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return local_8 / iVar6;
}

/* ref: FUN_00ba9170 */
unsigned int F_00ba9170(unsigned int gen_a0)
{
  GEN_ENTER(0xba9170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  int iVar1;
  int * piVar2;
  code * pcVar3;
  
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x14)) = (LPCRITICAL_SECTION)((int)this + 0xc);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  iVar1 = *(int *)((int)this + 0xac);
  while (iVar1 != 0) {
    piVar2 = *((int * PTR32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xa8) + 0xc)));
    pcVar3 = *(gen_code32 *)(*piVar2 + 0xc);
    piVar2[0x28] = 0;
    (*pcVar3)(piVar2);
    F_00bb2ee0((undefined *)((int)this + 0xa4),&(*(undefined * PTR32 *)(gen_frame + 0x18)),**(undefined4 * PTR32 *)((int)this + 0xa8));
    iVar1 = *(int *)((int)this + 0xac);
  }
  if (*(int *)((int)this + 0xa0) != 0) {
    this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 0xa0) + 0xa4)));
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
    F_00bb2180(this_00,&(*(undefined4 *)(gen_frame + 0xc)),&(*(undefined * PTR32 *)(gen_frame + 0x18)));
    F_00bb4600(this_00,&(*(undefined * PTR32 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)));
    *(undefined4 *)((int)this + 0xa0) = 0;
  }
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x14)));
  return 0;
}

/* ref: FUN_00ba9220 */
uint F_00ba9220(unsigned int gen_a0)
{
  GEN_ENTER(0xba9220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * this_00;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  this_00 = (undefined4 *)F_00406b90(0x360,0,0);
  if (this_00 != (undefined4 *)0x0) {
    F_00c0fd80(this_00);
    *this_00 = (*(undefined * PTR32 (*)[9])REFP(0x110475c));
    this_00[0xd6] = 0;
    uVar1 = F_004296a0(0xc,0,0x25a);
    this_00[0xd5] = uVar1;
    *(uint *)uVar1 = uVar1;
    *(undefined4 *)(this_00[0xd5] + 4) = this_00[0xd5];
    *(undefined4 * PTR32 *)this = this_00;
    return (uint)this;
  }
  *(undefined4 *)this = 0;
  return (uint)this;
}

/* ref: FUN_00ba9290 */
uint F_00ba9290(unsigned int gen_a0)
{
  GEN_ENTER(0xba9290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x110475c));
  F_00ba8d10(this);
  F_00bb4280((undefined *)((int)this + 0x354));
  uVar1 = F_00c0fdb0(this);
  return uVar1;
}

/* ref: FUN_00ba92c0 */
uint F_00ba92c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba92c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  __time64_t _Var4;
  
  iVar1 = *(int *)(param_1 + 4);
  _Var4 = F_00c4b7c2((__time64_t *)0x0);
  uVar2 = (uint)_Var4;
  uVar3 = (uint)*(ushort *)(iVar1 + 0x46);
  *(__time64_t *)((int)this + 0x60) = _Var4;
  *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
  *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + uVar3;
  *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + uVar3;
  *(uint *)((int)this + 0x54) = uVar3;
  if (*(char *)((int)this + 0xc4) == '\0') {
    uVar2 = F_00bb5bf0((undefined *)((int)this + 0xf78),param_1);
  }
  else if ((*(int *)((int)this + 0xd0) != 0) && ((code *)*(gen_code32 *)((int)this + 0x14) != (code *)0x0)) {
    uVar2 = ((code *)*(gen_code32 *)((int)this + 0x14))
                      (*(int *)((int)this + 0xd0),*(int *)(param_1 + 4) + 0x48,
                       (uint)*((ushort *)GEN_TOP((*(int *)(param_1 + 4) + 0x46))));
    return uVar2;
  }
  return uVar2;
}

/* ref: FUN_00ba9340 */
uint F_00ba9340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba9340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_00bb5bf0((undefined *)((int)this + 0xf6c),param_1);
  return (uint)*((ushort *)GEN_TOP((*(int *)(param_1 + 4) + 0x46)));
}

/* ref: FUN_00ba9360 */
uint F_00ba9360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xba9360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  int iVar1;
  int iVar2;
  undefined * pvVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 * puVar6;
  int * piVar7;
  undefined * pvVar8;
  
  uVar5 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(uint *)(gen_frame + 0x58)) = uVar5;
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  if ((int)param_2 < 7) goto LAB_00ba95ca;
  uVar4 = CONCAT11(param_1[5],param_1[6]);
  uVar5 = uVar4 + 7;
  if (uVar5 != param_2) goto LAB_00ba95ca;
  puVar6 = (undefined4 *)F_00406b90(0x5ba,0,0);
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *(undefined2 *)(puVar6 + 4) = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
  }
  F_00bb19a0(&(*(int * PTR32 *)(gen_frame + 0x0)),puVar6);
  *(undefined1 *)((*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0x10) = *param_1;
  *(undefined1 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0x41) = param_1[1];
  *(undefined1 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0x42) = param_1[2];
  *(ushort *)((*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0x11) = CONCAT11(param_1[3],param_1[4]);
  *(ushort *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0x46) = uVar4;
  if (uVar4 != 0) {
    F_00c46aa0((*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0x12,param_1 + 7,(uint)uVar4);
  }
  pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x10));
  *(*(undefined4 * PTR32 *)(gen_frame + 0x4)) = *param_3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x4))[1] = param_3[1];
  (*(undefined4 * PTR32 *)(gen_frame + 0x4))[2] = param_3[2];
  (*(undefined4 * PTR32 *)(gen_frame + 0x4))[3] = param_3[3];
  *(undefined2 *)((*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 4) = *(undefined2 *)((*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0x11);
  if (*(char *)((*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0x10) == '\0') {
    iVar1 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x2c);
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0xf6c);
      (*(undefined * PTR32 *)(gen_frame + 0x14)) = *(undefined * PTR32 *)(iVar2 + 4);
      piVar7 = (int *)F_004296a0(0x10,0,0x25a);
      piVar7[1] = (int)(*(undefined * PTR32 *)(gen_frame + 0x14));
      *piVar7 = iVar2;
      if (piVar7 + 2 != (int *)0x0) {
        *(*(int * PTR32 *)(gen_frame + 0x0)) = *(*(int * PTR32 *)(gen_frame + 0x0)) + 1;
        piVar7[2] = (int)(*(int * PTR32 *)(gen_frame + 0x0));
        piVar7[3] = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x4));
      }
      if (*(int *)(iVar1 + 0xf70) == -2) {
                    
        F_00c4579a("list<T> too long");
      }
      *(int *)(iVar1 + 0xf70) = *(int *)(iVar1 + 0xf70) + 1;
      *(int * PTR32 *)(iVar2 + 4) = piVar7;
      *(int * PTR32 *)piVar7[1] = piVar7;
    }
  }
  else {
    uVar4 = *(ushort *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 2);
    uVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x4))[1];
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22(uVar4,*(undefined2 *)((*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 4));
    (*(uint *)(gen_frame + 0xc)) = (int)((uint)uVar4 << 0x10) >> 0x1f | uVar5;
    this_00 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x30);
    F_00bb44f0(this_00,&(*(undefined * PTR32 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x8)));
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = *(undefined * PTR32 *)((int)pvVar3 + 0x34);
    pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x14));
    if ((*(undefined * PTR32 *)(gen_frame + 0x14)) == *(undefined * PTR32 *)((int)pvVar3 + 0x34)) {
      if (*(char *)((*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0x10) == '\x01') {
        F_00ba7220(((undefined1 *)(gen_frame + 0x18)),(*(undefined4 * PTR32 *)(gen_frame + 0x4)),0);
        (*(undefined4 *)(gen_frame + 0x8)) = CONCAT22((*(ushort *)(gen_frame + 0x1a)),(*(undefined2 *)(gen_frame + 0x28)));
        (*(uint *)(gen_frame + 0xc)) = (int)((uint)(*(ushort *)(gen_frame + 0x1a)) << 0x10) >> 0x1f | (*(uint *)(gen_frame + 0x1c));
        piVar7 = (int *)F_00bb44f0(this_00,&(*(undefined * PTR32 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x8)));
        pvVar8 = (undefined *)*piVar7;
        if (pvVar8 != (*(undefined * PTR32 *)(gen_frame + 0x10))) goto LAB_00ba9546;
      }
    }
    else {
LAB_00ba9546: ;
      **(int * PTR32 *)((int)pvVar8 + 0x18) = **(int * PTR32 *)((int)pvVar8 + 0x18) + 1;
      uVar5 = *(uint *)((int)pvVar8 + 0x1c);
      iVar1 = *(int *)(uVar5 + 0xf6c);
      pvVar3 = *(undefined * PTR32 *)(iVar1 + 4);
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)pvVar8 + 0x18);
      (*(uint *)(gen_frame + 0xc)) = uVar5;
      (*(undefined * PTR32 *)(gen_frame + 0x14)) = pvVar3;
      piVar7 = (int *)F_004296a0(0x10,0,0x25a);
      piVar7[1] = (int)(*(undefined * PTR32 *)(gen_frame + 0x14));
      *piVar7 = iVar1;
      if (piVar7 + 2 != (int *)0x0) {
        *(*(int * PTR32 *)(gen_frame + 0x0)) = *(*(int * PTR32 *)(gen_frame + 0x0)) + 1;
        piVar7[2] = (int)(*(int * PTR32 *)(gen_frame + 0x0));
        piVar7[3] = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x4));
      }
      if (*(int *)(uVar5 + 0xf70) == -2) {
                    
        F_00c4579a("list<T> too long");
      }
      *(int *)(uVar5 + 0xf70) = *(int *)(uVar5 + 0xf70) + 1;
      *(int * PTR32 *)(iVar1 + 4) = piVar7;
      *(int * PTR32 *)piVar7[1] = piVar7;
      F_00bb1600(&(*(undefined4 *)(gen_frame + 0x8)));
    }
  }
  uVar5 = F_00bb3550(&(*(int * PTR32 *)(gen_frame + 0x0)));
LAB_00ba95ca: ;
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar5;
}

/* ref: Client::Network::Socket::SocketImpl::vf3 */
uint F_00ba9600(unsigned int gen_a0)
{
  GEN_ENTER(0xba9600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pSVar1;
  int iVar2;
  uint uVar3;
  
  pSVar1 = this + 0x98;
  LOCK();
  iVar2 = *(int *)pSVar1;
  *(int *)pSVar1 = *(int *)pSVar1;
  UNLOCK();
  if (iVar2 != 0) {
    LOCK();
    iVar2 = *(int *)pSVar1;
    *(int *)pSVar1 = *(int *)pSVar1;
    UNLOCK();
    if (iVar2 != 7) {
      F_00ba9170(this);
      F_00c07bf0((undefined *)this);
      LOCK();
      *(int *)pSVar1 = 7;
      UNLOCK();
      if ((*(int *)(this + 0x90) != 0) && ((code *)*(gen_code32 *)(this + 0x40) != (code *)0x0)) {
        uVar3 = ((code *)*(gen_code32 *)(this + 0x40))(*(int *)(this + 0x90));
        if (((char)uVar3 != '\0') && (*(undefined * PTR32 *)(this + 0x94) != (undefined *)0x0)) {
          F_00ba8aa0(*(undefined * PTR32 *)(this + 0x94),this);
        }
      }
      F_00ba7c80(this);
    }
  }
  return 0;
}

/* ref: FUN_00ba9670 */
uint F_00ba9670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xba9670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  
  if ((0x3f < *(uint *)((int)this + 200)) && (*(int *)((int)this + 200) != 0)) {
    *(int *)((int)this + 0xc4) = *(int *)((int)this + 0xc4) + 1;
    if (*(uint *)((int)this + 0xc0) <= *(uint *)((int)this + 0xc4)) {
      *(undefined4 *)((int)this + 0xc4) = 0;
    }
    iVar1 = *(int *)((int)this + 200) + -1;
    *(int *)((int)this + 200) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0xc4) = 0;
    }
  }
  (*(undefined4 *)(gen_frame + 0x10)) = param_2;
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  (*(undefined4 *)(gen_frame + 0x14)) = param_3;
  uVar2 = F_00bb5a40((undefined *)((int)this + 0xb8),&(*(undefined4 *)(gen_frame + 0xc)));
  return uVar2;
}

/* ref: FUN_00ba96f0 */
uint F_00ba96f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xba96f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  
  if ((0x3f < *(uint *)((int)this + 0xe0)) && (*(int *)((int)this + 0xe0) != 0)) {
    *(int *)((int)this + 0xdc) = *(int *)((int)this + 0xdc) + 1;
    if (*(uint *)((int)this + 0xd8) <= *(uint *)((int)this + 0xdc)) {
      *(undefined4 *)((int)this + 0xdc) = 0;
    }
    iVar1 = *(int *)((int)this + 0xe0) + -1;
    *(int *)((int)this + 0xe0) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0xdc) = 0;
    }
  }
  (*(undefined4 *)(gen_frame + 0x10)) = param_2;
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  (*(undefined4 *)(gen_frame + 0x14)) = param_3;
  uVar2 = F_00bb5a40((undefined *)((int)this + 0xd0),&(*(undefined4 *)(gen_frame + 0xc)));
  return uVar2;
}

/* ref: FUN_00ba9770 */
uint F_00ba9770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xba9770u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x80) = param_1;
  *(undefined4 *)((int)this + 0x84) = param_2;
  *(int *)((int)this + 0x58) = *(int *)((int)this + 0x58) + 1;
  *(int *)((int)this + 0x60) = *(int *)((int)this + 0x60) + param_3;
  *(int *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + param_3;
  *(int *)((int)this + 0x74) = param_3;
  uVar1 = F_00ba96f0(this,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ba97b0 */
uint F_00ba97b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xba97b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x88) = param_1;
  *(undefined4 *)((int)this + 0x8c) = param_2;
  *(int *)((int)this + 0x5c) = *(int *)((int)this + 0x5c) + 1;
  *(int *)((int)this + 100) = *(int *)((int)this + 100) + param_3;
  *(int *)((int)this + 0x68) = *(int *)((int)this + 0x68) + param_3;
  *(int *)((int)this + 0x70) = param_3;
  uVar1 = F_00ba9670(this,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ba97f0 */
uint F_00ba97f0(unsigned int gen_a0)
{
  GEN_ENTER(0xba97f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  if (*(int *)this == 0) {
    this_00 = (undefined *)F_00406b90(4,0,0);
    if (this_00 != (undefined *)0x0) {
      uVar1 = F_00ba9220(this_00);
      *(uint *)this = uVar1;
      return uVar1;
    }
    *(undefined4 *)this = 0;
  }
  return *(uint *)this;
}

/* ref: FUN_00ba9820 */
uint F_00ba9820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba9820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int iVar6;
  
  F_00bb61e0(param_1,*(undefined4 *)((int)this + 0xc));
  piVar4 = *(int * PTR32 *)((int)this + 8);
  piVar5 = (int *)*piVar4;
  if (piVar5 != piVar4) {
    iVar6 = 0;
    do {
      piVar4 = (int *)*param_1;
      *(int *)(iVar6 + (int)piVar4) = piVar5[4];
      iVar6 = iVar6 + 4;
      if (*(char *)((int)piVar5 + 0x15) == '\0') {
        piVar2 = (int *)piVar5[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar4 = (int *)*piVar2;
          while (piVar5 = piVar2, cVar1 == '\0') {
            cVar1 = *(char *)(*piVar4 + 0x15);
            piVar2 = piVar4;
            piVar4 = (int *)*piVar4;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x15);
          piVar3 = (int *)piVar5[1];
          piVar2 = piVar5;
          while ((piVar4 = piVar3, piVar5 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar4[2])))
          {
            cVar1 = *(char *)(piVar4[1] + 0x15);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar5 != *(int * PTR32 *)((int)this + 8));
  }
  return (uint)piVar4;
}

/* ref: FUN_00ba98a0 */
uint F_00ba98a0(unsigned int gen_a0)
{
  GEN_ENTER(0xba98a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  ulonglong uVar7;
  
  (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)0x0;
  (*(int *)(gen_frame + 0x14)) = 0;
  piVar5 = (int *)F_00ba9820(this,&(*(int * PTR32 *)(gen_frame + 0xc)));
  piVar4 = (*(int * PTR32 *)(gen_frame + 0x10));
  piVar3 = (*(int * PTR32 *)(gen_frame + 0xc));
  for (piVar6 = (*(int * PTR32 *)(gen_frame + 0xc)); piVar6 != piVar4; piVar6 = piVar6 + 1) {
    piVar5 = (int *)*piVar6;
    if ((piVar5 != (int *)0x0) && (*(char *)((int)piVar5 + 7) == '\0')) {
      piVar5 = (int *)piVar5[2];
      piVar1 = piVar5 + 0x26;
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1;
      UNLOCK();
      if (iVar2 != 7) {
        piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5)));
      }
    }
  }
  if (piVar3 != (int *)0x0) {
    uVar7 = F_00429760(piVar3,((*(int *)(gen_frame + 0x14)) - (int)((int)(uintptr_t)piVar3) >> 2) * 4,0x25a);
    piVar5 = (int *)uVar7;
  }
  return (uint)piVar5;
}

/* ref: FUN_00ba9930 */
uint F_00ba9930(unsigned int gen_a0)
{
  GEN_ENTER(0xba9930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  int * piVar3;
  uint * puVar4;
  uint uVar5;
  uint uVar6;
  uint * puVar7;
  ulonglong uVar8;
  
  (*(uint * PTR32 *)(gen_frame + 0xc)) = (uint *)0x0;
  (*(uint * PTR32 *)(gen_frame + 0x10)) = (uint *)0x0;
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar5 = F_00ba9820(this,&(*(uint * PTR32 *)(gen_frame + 0xc)));
  puVar4 = (*(uint * PTR32 *)(gen_frame + 0xc));
  puVar7 = (*(uint * PTR32 *)(gen_frame + 0xc));
  if ((*(uint * PTR32 *)(gen_frame + 0xc)) != (*(uint * PTR32 *)(gen_frame + 0x10))) {
    do {
      uVar5 = *puVar7;
      if ((uVar5 != 0) && (*(char *)(uVar5 + 7) == '\0')) {
        piVar3 = *(int * PTR32 *)(uVar5 + 8);
        piVar1 = piVar3 + 0x26;
        LOCK();
        iVar2 = *piVar1;
        *piVar1 = *piVar1;
        UNLOCK();
        if (iVar2 != 2) {
          uVar6 = ((code *)*(gen_code32 *)(*piVar3 + 0x44))(piVar3);
          uVar5 = 0;
          if (uVar6 != 0) {
            uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
          }
        }
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 != (*(uint * PTR32 *)(gen_frame + 0x10)));
  }
  if (puVar4 != (uint *)0x0) {
    uVar8 = F_00429760(puVar4,((*(int *)(gen_frame + 0x14)) - (int)((int)(uintptr_t)puVar4) >> 2) * 4,0x25a);
    uVar5 = (uint)uVar8;
  }
  return uVar5;
}

/* ref: FUN_00ba99c0 */
uint F_00ba99c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xba99c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00ba9360(*(undefined * PTR32 *)(param_1 + 0x24),param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00ba99e0 */
uint F_00ba99e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba99e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint * puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  F_00bb4cc0(((undefined1 *)(gen_frame + 0x0)),0x1a923d22,"RUDPTrans");
  iVar1 = *(int *)((*(uint *)&gen_args[1]) + 4);
  if (*(int *)(iVar1 + 0x78) == 2) {
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28)));
    if ((piVar2 != (int *)0x0) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) != 0)) {
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        F_00406ad0(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))));
        puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c)));
        if (puVar3 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
        }
      }
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 0;
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = 0;
    }
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 0;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = 0;
  }
  else {
    uVar8 = (int)((uint)*(ushort *)(iVar1 + 0x86) << 0x10) >> 0x1f | *(uint *)(iVar1 + 0x88);
    uVar6 = CONCAT22(*(ushort *)(iVar1 + 0x86),*(undefined2 *)(iVar1 + 0x94));
    (*(uint *)(gen_frame + 0x4)) = uVar6;
    (*(uint *)(gen_frame + 0x8)) = uVar8;
    uVar4 = F_00bb0c00(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))),&(*(uint *)(gen_frame + 0x4)));
    uVar7 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)));
    (*(uint *)&gen_args[1]) = uVar4;
    if (((uVar4 == uVar7) || (uVar8 < *(uint *)(uVar4 + 0x14))) ||
       ((uVar8 == *(uint *)(uVar4 + 0x14) && (uVar6 < *(uint *)(uVar4 + 0x10))))) {
      (*(uint *)(gen_frame + 0x8)) = uVar7;
      puVar5 = &(*(uint *)(gen_frame + 0x8));
    }
    else {
      puVar5 = &(*(uint *)&gen_args[1]);
    }
    if (*puVar5 != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)))) {
      F_00bb6270(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))),&(*(uint *)&gen_args[1]),*puVar5);
    }
  }
  if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) == 0) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) == 0)) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  F_00bb1800(&REFG(undefined4, 0x14c5960),((undefined1 *)(gen_frame + 0x0)));
  return uVar7;
}

/* ref: FUN_00ba9ae0 */
uint F_00ba9ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba9ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  
  piVar1 = *(int * PTR32 *)((int)this + 0xc);
  if (piVar1 != (int *)0x0) {
    *(uint * PTR32 *)((int)this + 0x20) = param_1;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    if (*param_1 == 0) {
      this_00 = (undefined *)F_00406b90(4,0,0);
      if (this_00 == (undefined *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = F_00ba9220(this_00);
      }
      *param_1 = uVar3;
    }
    F_00ba8510(*(undefined * PTR32 *)((int)this + 0xc),*(undefined4 *)*param_1);
    return uVar2;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    *(uint * PTR32 *)((int)this + 0x20) = param_1;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    return uVar2;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x1c);
  if (piVar1 != (int *)0x0) {
    *(uint * PTR32 *)((int)this + 0x20) = param_1;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    return uVar2;
  }
  return 0xffffffff;
}

/* ref: FUN_00ba9b90 */
uint F_00ba9b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xba9b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x110469c));
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined4 *)((int)this + 8) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  *(undefined1 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0x78;
  *(undefined4 *)((int)this + 0x50) = 0x2d;
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
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x110479c));
  *(undefined4 *)((int)this + 0x90) = param_1;
  *(undefined4 *)((int)this + 0x94) = 0;
  LOCK();
  *(undefined4 *)((int)this + 0x98) = 0;
  UNLOCK();
  *(undefined4 *)((int)this + 0x9c) = 0x1000;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  uVar2 = F_004296a0(0x14,0,0x25a);
  *(uint *)((int)this + 0xa8) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0xa8) + 4))) = *(int *)((int)this + 0xa8);
  *((int *)GEN_TOP((*(int *)((int)this + 0xa8) + 8))) = *(int *)((int)this + 0xa8);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xa8) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xa8) + 0x11))) = 1;
  puVar1 = (undefined4 *)((int)this + 0xb8);
  *puVar1 = 0;
  puVar3 = (undefined4 *)F_004296a0(8,0,0x25a);
  *puVar1 = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  puVar1 = (undefined4 *)((int)this + 0xd0);
  *puVar1 = 0;
  puVar3 = (undefined4 *)F_004296a0(8,0,0x25a);
  *puVar1 = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  uVar2 = F_00406bb0(*(int *)((int)this + 0x9c) + 1,0,0);
  *(uint *)((int)this + 0xb4) = uVar2;
  return (uint)this;
}

/* ref: FUN_00ba9d20 */
unsigned int F_00ba9d20(unsigned int gen_a0)
{
  GEN_ENTER(0xba9d20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x110479c));
  if (*(int *)((int)this + 0xb4) != 0) {
    F_00406ad0(*(int *)((int)this + 0xb4));
    *(undefined4 *)((int)this + 0xb4) = 0;
  }
  F_00ba9600(this);
  F_00bb3890((undefined *)((int)this + 0xd0));
  F_00429760(*(undefined4 *)((int)this + 0xd0),8,0x25a);
  *(undefined4 *)((int)this + 0xd0) = 0;
  F_00bb3890((undefined *)((int)this + 0xb8));
  F_00429760(*(undefined4 *)((int)this + 0xb8),8,0x25a);
  *(undefined4 *)((int)this + 0xb8) = 0;
  F_00bb4600((undefined *)((int)this + 0xa4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0xa8),
               *(undefined4 * PTR32 *)((int)this + 0xa8));
  F_00429760(*(undefined4 *)((int)this + 0xa8),0x14,0x25a);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x110469c));
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  return 0;
}

/* ref: Client::Network::Socket::SocketImpl::vf8 */
uint F_00ba9df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba9df0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * pSVar1;
  int iVar2;
  uint uVar3;
  __time64_t _Var4;
  
  pSVar1 = this + 0x98;
  LOCK();
  iVar2 = *(int *)pSVar1;
  *(int *)pSVar1 = *(int *)pSVar1;
  UNLOCK();
  if (iVar2 != 4) {
    return 0xffffffff;
  }
  uVar3 = F_00c07d20((undefined *)this,param_1,param_2);
  if (0 < (int)uVar3) {
    _Var4 = F_00c4b7c2((__time64_t *)0x0);
    *(__time64_t *)(this + 0x88) = _Var4;
    *(int *)(this + 0x5c) = *(int *)(this + 0x5c) + 1;
    *(uint *)(this + 100) = *(int *)(this + 100) + uVar3;
    *(uint *)(this + 0x68) = *(int *)(this + 0x68) + uVar3;
    *(uint *)(this + 0x70) = uVar3;
    F_00ba9670(this,(int)_Var4,(int)((ulonglong)_Var4 >> 0x20),uVar3);
  }
  if (uVar3 == 0xffffffff) {
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  }
  return uVar3;
}

/* ref: Client::Network::Socket::SocketImpl::vf9 */
uint F_00ba9e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xba9e70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  __time64_t _Var2;
  
  uVar1 = F_00c07d50((undefined *)this,param_1,param_2);
  if (-1 < (int)uVar1) {
    _Var2 = F_00c4b7c2((__time64_t *)0x0);
    *(__time64_t *)(this + 0x80) = _Var2;
    *(int *)(this + 0x58) = *(int *)(this + 0x58) + 1;
    *(uint *)(this + 0x60) = *(int *)(this + 0x60) + uVar1;
    *(uint *)(this + 0x6c) = *(int *)(this + 0x6c) + uVar1;
    *(uint *)(this + 0x74) = uVar1;
    F_00ba96f0(this,(int)_Var2,(int)((ulonglong)_Var2 >> 0x20),uVar1);
  }
  if (uVar1 == 0xffffffff) {
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  }
  return uVar1;
}

/* ref: FUN_00ba9ed0 */
uint F_00ba9ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xba9ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  __time64_t _Var2;
  
  uVar1 = F_00c07d90(this,param_1,param_2,param_3,0x10);
  if (0 < (int)uVar1) {
    _Var2 = F_00c4b7c2((__time64_t *)0x0);
    *(__time64_t *)((int)this + 0x88) = _Var2;
    *(int *)((int)this + 0x5c) = *(int *)((int)this + 0x5c) + 1;
    *(int *)((int)this + 100) = *(int *)((int)this + 100) + uVar1;
    *(int *)((int)this + 0x68) = *(int *)((int)this + 0x68) + uVar1;
    *(uint *)((int)this + 0x70) = uVar1;
    F_00ba9670(this,(int)_Var2,(int)((ulonglong)_Var2 >> 0x20),uVar1);
  }
  if (uVar1 == 0xffffffff) {
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  }
  return uVar1;
}

/* ref: FUN_00ba9f40 */
uint F_00ba9f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xba9f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  __time64_t _Var2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x10;
  uVar1 = F_00c07dd0(this,param_1,param_2,param_3,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  if (-1 < (int)uVar1) {
    _Var2 = F_00c4b7c2((__time64_t *)0x0);
    *(__time64_t *)((int)this + 0x80) = _Var2;
    *(int *)((int)this + 0x58) = *(int *)((int)this + 0x58) + 1;
    *(int *)((int)this + 0x60) = *(int *)((int)this + 0x60) + uVar1;
    *(int *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + uVar1;
    *(uint *)((int)this + 0x74) = uVar1;
    F_00ba96f0(this,(int)_Var2,(int)((ulonglong)_Var2 >> 0x20),uVar1);
  }
  if (uVar1 == 0xffffffff) {
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  }
  return uVar1;
}

/* ref: FUN_00ba9fb0 */
uint F_00ba9fb0(unsigned int gen_a0)
{
  GEN_ENTER(0xba9fb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  uint uVar2;
  undefined * this_00;
  int * this_01;
  __time64_t _Var3;
  undefined4 * local_8;
  
  uVar2 = F_00c07ca0(this);
  this_01 = (int *)0x0;
  if ((int)uVar2 < 1) {
    return 0;
  }
  local_8 = (undefined4 *)F_00406b90(0x28,0,0);
  if (local_8 == (undefined4 *)0x0) {
    local_8 = (undefined4 *)0x0;
  }
  else {
    *local_8 = (*(undefined * PTR32 (*)[1])REFP(0x1104738));
    local_8[1] = 0;
    local_8[2] = 0;
    local_8[3] = 0;
    local_8[4] = 0;
    local_8[5] = 0;
    local_8[6] = 0;
    local_8[7] = 0;
    local_8[8] = 0;
    local_8[9] = 0;
  }
  this_00 = (undefined *)F_00406b90(0xe8,0,0);
  if (this_00 != (undefined *)0x0) {
    this_01 = (int *)F_00ba9b90(this_00,local_8);
  }
  F_00ba8c50(this,this_01);
  LOCK();
  this_01[0x26] = 1;
  UNLOCK();
  F_00bb1550(local_8 + 2,this_01);
  pcVar1 = *(gen_code32 *)(*this_01 + 4);
  this_01[1] = uVar2;
  (*pcVar1)(this_01);
  F_00ba8820(this_01,*(undefined4 *)((int)this + 0x9c));
  F_00ba8510(this_01,*(undefined4 *)((int)this + 0x94));
  F_00c0f990(*(undefined * PTR32 *)((int)this + 0x94),this_01[1],2);
  LOCK();
  this_01[0x26] = 4;
  UNLOCK();
  _Var3 = F_00c4b7c2((__time64_t *)0x0);
  *(__time64_t *)(this_01 + 0x20) = _Var3;
  if ((*(int *)((int)this + 0x90) != 0) && ((code *)*(gen_code32 *)((int)this + 0x30) != (code *)0x0)) {
    ((code *)*(gen_code32 *)((int)this + 0x30))(*(int *)((int)this + 0x90),local_8);
  }
  return (uint)local_8;
}

/* ref: FUN_00baa0d0 */
uint F_00baa0d0(unsigned int gen_a0)
{
  GEN_ENTER(0xbaa0d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  __time64_t _Var2;
  
  uVar1 = F_00c07d50(this,*(undefined4 *)((int)this + 0xb4),*(undefined4 *)((int)this + 0x9c));
  if (-1 < (int)uVar1) {
    _Var2 = F_00c4b7c2((__time64_t *)0x0);
    *(__time64_t *)((int)this + 0x80) = _Var2;
    *(int *)((int)this + 0x58) = *(int *)((int)this + 0x58) + 1;
    *(int *)((int)this + 0x60) = *(int *)((int)this + 0x60) + uVar1;
    *(int *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + uVar1;
    *(uint *)((int)this + 0x74) = uVar1;
    F_00ba96f0(this,(int)_Var2,(int)((ulonglong)_Var2 >> 0x20),uVar1);
  }
  if (uVar1 == 0xffffffff) {
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
    return 0xffffffff;
  }
  if (uVar1 == 0xfffffffe) {
    return 0xfffffffe;
  }
  if ((*(int *)((int)this + 0x90) != 0) && ((code *)*(gen_code32 *)((int)this + 0x34) != (code *)0x0)) {
    ((code *)*(gen_code32 *)((int)this + 0x34))
              (*(int *)((int)this + 0x90),*(undefined4 *)((int)this + 0xb4),uVar1);
  }
  if ((*(int *)((int)this + 8) == 0) && (uVar1 == 0)) {
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  }
  return 0;
}

/* ref: FUN_00baa170 */
uint F_00baa170(unsigned int gen_a0)
{
  GEN_ENTER(0xbaa170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int iVar2;
  uint uVar3;
  __time64_t _Var4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  iVar1 = *(int *)((int)this + 0x9c);
  iVar2 = *(int *)((int)this + 0xb4);
  (*(undefined4 *)(gen_frame + 0x4)) = 0x10;
  *(undefined1 *)(iVar1 + iVar2) = 0;
  uVar3 = F_00c07dd0(this,*(undefined4 *)((int)this + 0xb4),*(undefined4 *)((int)this + 0x9c),
                     ((undefined1 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x4)));
  if (-1 < (int)uVar3) {
    _Var4 = F_00c4b7c2((__time64_t *)0x0);
    *(__time64_t *)((int)this + 0x80) = _Var4;
    *(int *)((int)this + 0x58) = *(int *)((int)this + 0x58) + 1;
    *(int *)((int)this + 0x60) = *(int *)((int)this + 0x60) + uVar3;
    *(int *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + uVar3;
    *(uint *)((int)this + 0x74) = uVar3;
    F_00ba96f0(this,(int)_Var4,(int)((ulonglong)_Var4 >> 0x20),uVar3);
  }
  if (uVar3 == 0xffffffff) {
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return 0xffffffff;
  }
  if (uVar3 == 0xfffffffe) {
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return 0xfffffffe;
  }
  if ((*(int *)((int)this + 0x90) != 0) && ((code *)*(gen_code32 *)((int)this + 0x38) != (code *)0x0)) {
    ((code *)*(gen_code32 *)((int)this + 0x38))
              (*(int *)((int)this + 0x90),*(undefined4 *)((int)this + 0xb4),uVar3,((undefined1 *)(gen_frame + 0x8)));
  }
  if ((*(int *)((int)this + 8) == 0) && (uVar3 == 0)) {
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: FUN_00baa270 */
byte F_00baa270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaa270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  byte * pbVar2;
  char * pcVar3;
  HANDLE pvVar4;
  DWORD DVar5;
  ulong uVar6;
  undefined * phVar7;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  F_00bb56c0((undefined *)((int)this + 0x48),param_1,(int)pcVar3 - (int)(param_1 + 1));
  if (*(HANDLE *)((int)this + 0x20) != (HANDLE)0x0) {
    gen_imp_IcmpCloseHandle(*(HANDLE *)((int)this + 0x20));
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  pvVar4 = gen_imp_IcmpCreateFile();
  *(HANDLE *)((int)this + 0x20) = pvVar4;
  DVar5 = gen_imp_GetLastError();
  if (DVar5 != 0) {
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return 0;
  }
  uVar6 = gen_imp_inet_addr(param_1);
  *(ulong *)((int)this + 0x1c) = uVar6;
  if (uVar6 == 0xffffffff) {
    phVar7 = gen_imp_gethostbyname(param_1);
    if (phVar7 == (undefined *)0x0) {
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
      return 0;
    }
    pbVar2 = ((byte *)GEN_TOP(*(*(undefined * PTR32 *)(((char *)(phVar7) + 12)))));
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x10,"%u.%u.%u.%u",(uint)*pbVar2,(uint)pbVar2[1],(uint)pbVar2[2],
               (uint)pbVar2[3]);
    uVar6 = gen_imp_inet_addr(((undefined1 *)(gen_frame + 0x8)));
    *(ulong *)((int)this + 0x1c) = uVar6;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return 1;
}

/* ref: FUN_00baa370 */
uint F_00baa370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaa370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  F_00bb4cc0(((undefined1 *)(gen_frame + 0x10)),0x1a923d22,"RUDPTrans");
  iVar3 = param_1[1];
  if (*(int *)(iVar3 + 0x78) == 2) {
    F_00bb1640((undefined *)((int)this + 0x28),param_1);
  }
  else {
    uVar1 = *(ushort *)(iVar3 + 0x86);
    uVar2 = *(undefined2 *)(iVar3 + 0x94);
    uVar4 = *(uint *)(iVar3 + 0x88);
    *(int *)*param_1 = *(int *)*param_1 + 1;
    (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)*param_1;
    puVar5 = (undefined4 *)param_1[1];
    (*(undefined4 *)(gen_frame + 0x0)) = CONCAT22(uVar1,uVar2);
    (*(uint *)(gen_frame + 0x4)) = (int)((uint)uVar1 << 0x10) >> 0x1f | uVar4;
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar5;
    F_00bb6910((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x30),((undefined1 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x0)));
    puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
    if ((((*(int * PTR32 *)(gen_frame + 0x8)) != (int *)0x0) && ((*(undefined4 * PTR32 *)(gen_frame + 0xc)) != (undefined4 *)0x0)) &&
       (*(*(int * PTR32 *)(gen_frame + 0x8)) = *(*(int * PTR32 *)(gen_frame + 0x8)) + -1, *(*(int * PTR32 *)(gen_frame + 0x8)) == 0)) {
      F_00406ad0((*(int * PTR32 *)(gen_frame + 0x8)));
      ((code *)*(gen_code32 *)*puVar5)(puVar5,1);
    }
  }
  F_00bb1800(&REFG(undefined4, 0x14c5960),((undefined1 *)(gen_frame + 0x10)));
  return 0;
}

/* ref: FUN_00baa440 */
uint F_00baa440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbaa440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * PTR32 * ppuVar7;
  int * piVar8;
  undefined * this_00;
  undefined4 * puVar9;
  
  F_00bb4cc0(((undefined1 *)(gen_frame + 0x4)),0x1a923d22,"RUDPTrans");
  iVar3 = param_1[1];
  puVar9 = ((undefined4 *)GEN_TOP(((int)((uint)*(ushort *)(iVar3 + 0x86) << 0x10) >> 0x1f | *(uint *)(iVar3 + 0x88))));
  piVar8 = ((int *)GEN_TOP(CONCAT22(*(ushort *)(iVar3 + 0x86),*(undefined2 *)(iVar3 + 0x94))));
  this_00 = (undefined *)((int)this + 0x30);
  (*(int * PTR32 *)(gen_frame + 0x10)) = piVar8;
  (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = puVar9;
  puVar6 = (undefined4 *)F_00bb0c00(this_00,&(*(int * PTR32 *)(gen_frame + 0x10)));
  puVar4 = *(undefined4 * PTR32 *)((int)this + 0x34);
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar6;
  if (((puVar6 == puVar4) || (puVar9 < (undefined4 *)puVar6[5])) ||
     ((puVar9 == (undefined4 *)puVar6[5] && (piVar8 < (int *)puVar6[4])))) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = puVar4;
    ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x14));
  }
  else {
    ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x18));
  }
  F_00bb6270(this_00,&(*(undefined4 * PTR32 *)(gen_frame + 0x14)),*ppuVar7);
  uVar1 = *(ushort *)(param_2 + 2);
  uVar2 = *(undefined2 *)(param_2 + 0x10);
  uVar5 = *(uint *)(param_2 + 4);
  *(int *)*param_1 = *(int *)*param_1 + 1;
  puVar4 = (undefined4 *)param_1[1];
  (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)*param_1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = puVar4;
  puVar6 = (undefined4 *)F_004296a0(0x28,0,0x25c);
  puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x14));
  piVar8 = (*(int * PTR32 *)(gen_frame + 0x10));
  *puVar6 = *(undefined4 *)((int)this + 0x34);
  puVar6[1] = *(undefined4 *)((int)this + 0x34);
  puVar6[2] = *(undefined4 *)((int)this + 0x34);
  *(undefined2 *)(puVar6 + 8) = 0;
  if (puVar6 + 4 != (undefined4 *)0x0) {
    puVar6[4] = CONCAT22(uVar1,uVar2);
    puVar6[5] = (int)((uint)uVar1 << 0x10) >> 0x1f | uVar5;
    *(*(int * PTR32 *)(gen_frame + 0x10)) = *(*(int * PTR32 *)(gen_frame + 0x10)) + 1;
    puVar6[6] = (*(int * PTR32 *)(gen_frame + 0x10));
    puVar6[7] = (*(undefined4 * PTR32 *)(gen_frame + 0x14));
  }
  F_00bb6720(this_00,&(*(int * PTR32 *)(gen_frame + 0x10)),puVar6,0);
  if (((piVar8 != (int *)0x0) && (puVar4 != (undefined4 *)0x0)) &&
     (*piVar8 = *piVar8 + -1, *piVar8 == 0)) {
    F_00406ad0(piVar8);
    ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
  }
  F_00bb1800(&REFG(undefined4, 0x14c5960),((undefined1 *)(gen_frame + 0x4)));
  return 0;
}

/* ref: FUN_00baa590 */
uint F_00baa590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbaa590u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0xc) != (undefined *)0x0) {
    uVar1 = F_00ba9ed0(*(undefined * PTR32 *)((int)this + 0xc),param_1,param_2,param_3);
    return uVar1;
  }
  return 0xfffff000;
}

/* ref: FUN_00baa5b0 */
uint F_00baa5b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbaa5b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0xc) != (undefined *)0x0) {
    uVar1 = F_00ba9f40(*(undefined * PTR32 *)((int)this + 0xc),param_1,param_2,param_3);
    return uVar1;
  }
  return 0xfffff000;
}

/* ref: FUN_00baa5d0 */
uint F_00baa5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbaa5d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  puVar1 = (undefined4 *)((int)this + 0x98);
  LOCK();
  uVar2 = *puVar1;
  *puVar1 = *puVar1;
  UNLOCK();
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 2: ;
    if ((char)param_1 != '\0') {
      uVar3 = F_00ba9fb0(this);
      return uVar3;
    }
    break;
  case 3: ;
    if (((char)param_2 != '\0') || ((char)param_3 != '\0')) {
      F_00ba7ea0(this);
      return 0;
    }
    break;
  case 4: ;
    if ((char)param_1 != '\0') {
      F_00baa0d0(this);
      return 0;
    }
    break;
  case 5: ;
    if ((char)param_1 != '\0') {
      F_00baa170(this);
    }
  }
  return 0;
}

/* ref: FUN_00baa650 */
uint F_00baa650(unsigned int gen_a0)
{
  GEN_ENTER(0xbaa650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = 0;
  if ((*(undefined4 * PTR32 *)this != (undefined4 *)0x0) &&
     (this_00 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)this)), uVar1 = 0, this_00 != (undefined *)0x0)) {
    uVar1 = F_00ba98a0(this_00);
  }
  if (*(int *)((int)this + 8) != 0) {
    F_00c085d0();
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00baa680 */
byte F_00baa680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbaa680u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  short sVar1;
  undefined * this_00;
  byte bVar2;
  short sVar3;
  ushort * puVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  __time64_t _Var8;
  ulonglong uVar9;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  if (*(int *)this != 1) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c) ^ (uint)(uint)(gen_frame + 0x4c));
    return 1;
  }
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined4 *)((int)this + 0x18) = param_3;
  _Var8 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x20) = (int)_Var8;
  uVar9 = F_00427d90();
  *(ulonglong *)((int)this + 0x28) = uVar9;
  uVar9 = F_00427e30();
  *(ulonglong *)((int)this + 0x30) = uVar9;
  if (*(char *)((int)this + 0x39) == '\0') {
    ((ushort *)(gen_frame + 0x0))[2] = 0;
    ((ushort *)(gen_frame + 0x0))[3] = 0;
    ((ushort *)(gen_frame + 0x0))[0] = 0;
    ((ushort *)(gen_frame + 0x0))[1] = 0;
    sVar1 = *(short *)((int)this + 0x10);
    ((ushort *)(gen_frame + 0x0))[2] = sVar1;
    sVar3 = sVar1 + 1;
    *(short *)((int)this + 0x10) = sVar3;
    ((ushort *)(gen_frame + 0x0))[3] = sVar3;
    ((ushort *)(gen_frame + 0x0))[0] = 8;
    ((ushort *)(gen_frame + 0x0))[1] = 0;
    puVar4 = ((ushort *)(gen_frame + 0x0));
    uVar5 = 0;
    iVar7 = 4;
    do {
      uVar5 = uVar5 + *puVar4;
      puVar4 = puVar4 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iVar7 = (uVar5 >> 0x10) + (uVar5 & 0xffff);
    uVar6 = ~((short)((uint)iVar7 >> 0x10) + (short)iVar7);
    ((ushort *)(gen_frame + 0x0))[1] = uVar6;
    ((ushort *)(gen_frame + 0x0))[0] = 8;
    (*(undefined2 *)(gen_frame + 0x18)) = 0;
    F_00ba6740(((undefined1 *)(gen_frame + 0x8)),param_1,0);
    _Var8 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)((int)this + 0x20) = (int)_Var8;
    uVar9 = F_00427d90();
    *(ulonglong *)((int)this + 0x28) = uVar9;
    uVar9 = F_00427e30();
    *(ulonglong *)((int)this + 0x30) = uVar9;
    this_00 = *(undefined * PTR32 *)((int)this + 0x4c);
    if (this_00 != (undefined *)0x0) {
      uVar5 = F_00c07d90(this_00,((ushort *)(gen_frame + 0x0)),8,((undefined1 *)(gen_frame + 0x8)),0x10);
      if (0 < (int)uVar5) {
        _Var8 = F_00c4b7c2((__time64_t *)0x0);
        *(__time64_t *)(this_00 + 0x88) = _Var8;
        *(int *)(this_00 + 0x5c) = *(int *)(this_00 + 0x5c) + 1;
        *(uint *)(this_00 + 100) = *(int *)(this_00 + 100) + uVar5;
        *(uint *)(this_00 + 0x68) = *(int *)(this_00 + 0x68) + uVar5;
        *(uint *)(this_00 + 0x70) = uVar5;
        F_00ba9670(this_00,(int)_Var8,(int)((ulonglong)_Var8 >> 0x20),uVar5);
      }
      if (uVar5 == 0xffffffff) {
        ((code *)*(gen_code32 *)(*(int *)this_00 + 0xc))(this_00);
      }
      else if (-1 < (int)uVar5) {
        *(undefined4 *)this = 2;
        goto LAB_00baa844;
      }
    }
    *(undefined4 *)((int)this + 8) = 1000;
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  else {
    if (*(undefined * PTR32 *)((int)this + 0x3c) == (undefined *)0x0) goto LAB_00baa829;
    bVar2 = F_00baa270(*(undefined * PTR32 *)((int)this + 0x3c),param_1);
    if (bVar2 != 0) {
      F_004cf9e0(*(undefined * PTR32 *)((int)this + 0x3c),0,0,0,"NETWORK_PingClientRequest");
      *(undefined4 *)this = 2;
      if (*(char *)((int)this + 0x38) == '\0') {
        F_004cf020(*(undefined * PTR32 *)((int)this + 0x3c));
      }
LAB_00baa844: ;
      F_00ba81e0(this);
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return 1;
    }
  }
  *(undefined4 *)this = 4;
LAB_00baa829: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return 0;
}

/* ref: FUN_00baa860 */
uint F_00baa860(unsigned int gen_a0)
{
  GEN_ENTER(0xbaa860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  byte bVar2;
  int iVar3;
  undefined * this_00;
  undefined4 uVar4;
  int * piVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  
  ((byte *)(gen_frame + 0xc))[0] = 0;
  ((byte *)(gen_frame + 0xc))[1] = 0;
  ((byte *)(gen_frame + 0xc))[2] = 0;
  ((byte *)(gen_frame + 0xc))[3] = 0;
  ((byte *)(gen_frame + 0xc))[4] = 0;
  ((byte *)(gen_frame + 0xc))[5] = 0;
  ((byte *)(gen_frame + 0xc))[6] = 0;
  ((byte *)(gen_frame + 0xc))[7] = 0;
  ((byte *)(gen_frame + 0xc))[8] = 0;
  ((byte *)(gen_frame + 0xc))[9] = 0;
  ((byte *)(gen_frame + 0xc))[10] = 0;
  ((byte *)(gen_frame + 0xc))[0xb] = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  F_00ba9820(this,((byte *)(gen_frame + 0xc)));
  ((byte *)(gen_frame + 0xc))[0x14] = ((byte *)(gen_frame + 0xc))[0];
  ((byte *)(gen_frame + 0xc))[0x15] = ((byte *)(gen_frame + 0xc))[1];
  ((byte *)(gen_frame + 0xc))[0x16] = ((byte *)(gen_frame + 0xc))[2];
  ((byte *)(gen_frame + 0xc))[0x17] = ((byte *)(gen_frame + 0xc))[3];
  piVar5 = (int *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0));
  if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) != (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4))) {
    do {
      iVar3 = *piVar5;
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 20)) = piVar5;
      if ((iVar3 != 0) && (*(char *)(iVar3 + 7) == '\0')) {
        this_00 = *(undefined * PTR32 *)(iVar3 + 8);
        uVar4 = *(undefined4 *)((int)this_00 + 4);
        puVar1 = (undefined4 *)((int)this_00 + 0x98);
        LOCK();
        uVar8 = *puVar1;
        *puVar1 = *puVar1;
        UNLOCK();
        bVar2 = *(byte *)(iVar3 + 4);
        ((byte *)(gen_frame + 0xc))[0x18] = *(byte *)(iVar3 + 5);
        ((byte *)(gen_frame + 0xc))[0x10] = bVar2;
        F_00baa5d0(this_00,(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 16)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 24)),(uint)*(byte *)(iVar3 + 6));
        switch((unsigned int)(uintptr_t)(uVar8)) {
        case 2: ;
          if (bVar2 != 0) {
            uVar8 = 0;
LAB_00baa8f3: ;
            F_00c0fa30((*(undefined * PTR32 *)(gen_frame + 0x28)),uVar4,uVar8);
          }
          break;
        case 3: ;
          if (((byte *)(gen_frame + 0xc))[0x18] != 0) {
            uVar8 = 1;
            goto LAB_00baa8f3;
          }
          break;
        case 4: ;
        case 5: ;
          if (bVar2 != 0) {
            uVar8 = 2;
            goto LAB_00baa8f3;
          }
        }
      }
      piVar5 = ((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 20)) + 4)));
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 20)) = piVar5;
    } while (piVar5 != (int *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)));
  }
  uVar6 = 0;
  if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) != 0) {
    uVar7 = F_00429760((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)),((int)((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) - (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0))) >> 2) * 4,0x25a);
    uVar6 = (uint)uVar7;
  }
  return uVar6;
}

/* ref: FUN_00baa950 */
uint F_00baa950(unsigned int gen_a0)
{
  GEN_ENTER(0xbaa950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * this_00;
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x44);
  this_00 = (int *)((int)this + 0x44);
  if (iVar2 == *(int *)((int)this + 0x48)) {
    return 0;
  }
  if (*(undefined * PTR32 *)((int)this + 0xc) == (undefined *)0x0) {
    uVar1 = 0xfffff000;
  }
  else {
    uVar1 = F_00ba9ed0(*(undefined * PTR32 *)((int)this + 0xc),iVar2,*(int *)((int)this + 0x48) - iVar2,
                         (int)this + 0x54);
  }
  iVar2 = *(int *)((int)this + 0x48) - *this_00;
  if ((int)uVar1 < iVar2) {
    if (0 < (int)uVar1) {
      iVar2 = iVar2 - uVar1;
      F_00c46e20(*this_00,*this_00 + uVar1,iVar2);
      F_00bb6510(this_00,iVar2);
      return 0;
    }
  }
  else {
    iVar2 = *this_00;
    if (iVar2 != *(int *)((int)this + 0x48)) {
      F_00c46e20(iVar2,*(int *)((int)this + 0x48),0);
      *(int *)((int)this + 0x48) = iVar2;
    }
  }
  return uVar1;
}

/* ref: FUN_00baa9f0 */
uint F_00baa9f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbaa9f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c0fb00(this);
  if (uVar1 == 0) {
    F_00ba88f0(this);
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
    return 0;
  }
  if ((int)uVar1 < 0) {
    uVar1 = F_00c0faf0();
    if (uVar1 != 0) {
      F_00ba9930(this);
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
    return 0xffffffff;
  }
  F_00baa860(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
  return 1;
}

/* ref: FUN_00baaa50 */
uint F_00baaa50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaaa50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x580];
  undefined2 uVar1;
  int iVar2;
  undefined * this_00;
  undefined4 * puVar3;
  uint uVar4;
  uint uVar5;
  __time64_t _Var6;
  
  (*(uint *)(gen_frame + 0x578)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x57c);
  if ((*(int *)((int)this + 0x44) == *(int *)((int)this + 0x48)) ||
     (uVar4 = F_00baa950(this), 0 < (int)uVar4)) {
    iVar2 = *(int *)(param_1 + 4);
    ((undefined1 *)(gen_frame + 0x0))[0] = *(undefined1 *)(iVar2 + 0x40);
    ((undefined1 *)(gen_frame + 0x0))[1] = *(undefined1 *)(iVar2 + 0x41);
    ((undefined1 *)(gen_frame + 0x0))[2] = *(undefined1 *)(iVar2 + 0x42);
    ((undefined1 *)(gen_frame + 0x0))[3] = *(undefined1 *)(iVar2 + 0x45);
    (*(undefined1 *)(gen_frame + 0x4)) = *(undefined1 *)(iVar2 + 0x44);
    (*(undefined1 *)(gen_frame + 0x5)) = *(undefined1 *)(iVar2 + 0x47);
    (*(undefined1 *)(gen_frame + 0x6)) = *(undefined1 *)(iVar2 + 0x46);
    if (*(short *)(iVar2 + 0x46) != 0) {
      F_00c46aa0(((undefined1 *)(gen_frame + 0x7)),iVar2 + 0x48,(uint)*(ushort *)(iVar2 + 0x46));
    }
    this_00 = *(undefined * PTR32 *)((int)this + 0xc);
    if (this_00 == (undefined *)0x0) {
      uVar5 = 0xfffff000;
    }
    else {
      uVar5 = F_00c07d90(this_00,((undefined1 *)(gen_frame + 0x0)),*((ushort *)GEN_TOP((*(int *)(param_1 + 4) + 0x46))) + 7,
                         *(int *)(param_1 + 4),0x10);
      if (0 < (int)uVar5) {
        _Var6 = F_00c4b7c2((__time64_t *)0x0);
        *(__time64_t *)(this_00 + 0x88) = _Var6;
        *(int *)(this_00 + 0x5c) = *(int *)(this_00 + 0x5c) + 1;
        *(uint *)(this_00 + 100) = *(int *)(this_00 + 100) + uVar5;
        *(uint *)(this_00 + 0x68) = *(int *)(this_00 + 0x68) + uVar5;
        *(uint *)(this_00 + 0x70) = uVar5;
        F_00ba9670(this_00,(int)_Var6,(int)((ulonglong)_Var6 >> 0x20),uVar5);
      }
      if (uVar5 == 0xffffffff) {
        ((code *)*(gen_code32 *)(*(int *)this_00 + 0xc))(this_00);
      }
    }
    uVar4 = (uint)*((ushort *)GEN_TOP((*(int *)(param_1 + 4) + 0x46)));
    if ((int)uVar5 < (int)(uVar4 + 7)) {
      if ((int)uVar5 < 1) {
        F_00c47745((*(uint *)(gen_frame + 0x578)) ^ (uint)(uint)(gen_frame + 0x57c));
        return uVar5;
      }
      iVar2 = (uVar4 - uVar5) + 7;
      F_00bb6510((undefined *)((int)this + 0x44),iVar2);
      F_00c46aa0(*(undefined4 *)((int)this + 0x44),((undefined1 *)(gen_frame + 0x0)) + uVar5,iVar2);
      puVar3 = *(undefined4 * PTR32 *)(param_1 + 4);
      uVar1 = *(undefined2 *)(puVar3 + 4);
      *(undefined4 *)((int)this + 0x54) = *puVar3;
      *(undefined4 *)((int)this + 0x58) = puVar3[1];
      *(undefined4 *)((int)this + 0x5c) = puVar3[2];
      *(undefined4 *)((int)this + 0x60) = puVar3[3];
      *(undefined2 *)((int)this + 100) = uVar1;
      uVar4 = 0;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x578)) ^ (uint)(uint)(gen_frame + 0x57c));
  return uVar4;
}

/* ref: FUN_00baac00 */
uint F_00baac00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaac00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  __time64_t _Var4;
  ulonglong uVar5;
  
  uVar3 = (uint)*((byte *)GEN_TOP((*(int *)(param_1 + 4) + 0x41)));
  if (*(int *)((int)this + uVar3 * 8 + 0x2f0) == 0) {
    F_00bb3590((undefined *)((int)this + uVar3 * 8 + 0x2ec),param_1);
    iVar2 = *(int *)(param_1 + 4);
    if (*(char *)(iVar2 + 0x40) == '\0') {
      *((undefined4 *)GEN_TOP(((int)this + (uint)*(byte *)(iVar2 + 0x41) * 4 + 0xcf0))) = 500;
    }
    else {
      *((undefined4 *)GEN_TOP(((int)this + (uint)*(byte *)(iVar2 + 0x41) * 4 + 0xcf0))) = 200;
    }
  }
  else if (*((char *)GEN_TOP((*(int *)(param_1 + 4) + 0x40))) == '\0') {
    *(undefined4 *)((int)this + uVar3 * 4 + 0xcf0) = 500;
  }
  else {
    *(int *)((int)this + uVar3 * 4 + 0xcf0) = *(int *)((int)this + uVar3 * 4 + 0xcf0) * 2;
  }
  *((undefined4 *)GEN_TOP(((int)this + (uint)*((byte *)GEN_TOP((*(int *)(param_1 + 4) + 0x41))) * 4 + 0xdf0))) = 0;
  puVar1 = ((undefined4 *)GEN_TOP(((uint)*((byte *)GEN_TOP((*(int *)(param_1 + 4) + 0x41))) * 0x20 + 0x4f0 + (int)this)));
  _Var4 = F_00c4b7c2((__time64_t *)0x0);
  *puVar1 = (int)_Var4;
  uVar5 = F_00427d90();
  *(ulonglong *)(puVar1 + 2) = uVar5;
  uVar5 = F_00427e30();
  *(ulonglong *)(puVar1 + 4) = uVar5;
  *(undefined1 *)(puVar1 + 6) = 1;
  *((byte *)GEN_TOP((*(int *)(param_1 + 4) + 0x42))) = *(char *)((int)this + 0xef8) - 1U & 0x3f;
  *(undefined1 *)((int)this + 0xf18) = 0;
  uVar3 = F_00baaa50(*(undefined * PTR32 *)((int)this + 0x74),param_1);
  return uVar3;
}

/* ref: FUN_00baad00 */
unsigned int F_00baad00(unsigned int gen_a0)
{
  GEN_ENTER(0xbaad00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(int *)((int)this + 0xf64) != 0) && (*(int *)((int)this + 0xef4) < 0x20)) {
    iVar1 = **(int * PTR32 *)((int)this + 0xf60);
    **(int * PTR32 *)(iVar1 + 8) = **(int * PTR32 *)(iVar1 + 8) + 1;
    iVar2 = *(int *)(iVar1 + 0xc);
    uVar3 = **(undefined4 * PTR32 *)((int)this + 0xf60);
    (*(int * PTR32 *)(gen_frame + 0x0)) = *(int * PTR32 *)(iVar1 + 8);
    (*(int *)(gen_frame + 0x4)) = iVar2;
    F_00bb6590((undefined4 *)((int)this + 0xf60),((undefined1 *)(gen_frame + 0x8)),uVar3);
    *(undefined1 *)(iVar2 + 0x41) = *(undefined1 *)((int)this + 0xef0);
    F_00baac00(this,&(*(int * PTR32 *)(gen_frame + 0x0)));
    iVar1 = (*(int *)(gen_frame + 0x4));
    *(int *)((int)this + 0xef4) = *(int *)((int)this + 0xef4) + 1;
    *(byte *)((int)this + 0xef0) = *(char *)((int)this + 0xef0) + 1U & 0x3f;
    if (((*(int * PTR32 *)(gen_frame + 0x0)) != (int *)0x0) && (((*(int *)(gen_frame + 0x4)) != 0 && (*(*(int * PTR32 *)(gen_frame + 0x0)) = *(*(int * PTR32 *)(gen_frame + 0x0)) + -1, *(*(int * PTR32 *)(gen_frame + 0x0)) == 0)))
       ) {
      F_00406ad0((*(int * PTR32 *)(gen_frame + 0x0)));
      F_00406ad0(iVar1);
    }
  }
  return 0;
}

/* ref: FUN_00baadb0 */
uint F_00baadb0(unsigned int gen_a0)
{
  GEN_ENTER(0xbaadb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  iVar1 = *(int *)((int)this + 0x44);
  if (iVar1 != 0) {
    F_00429760(iVar1,*(int *)((int)this + 0x4c) - iVar1,0x25c);
  }
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  F_00bb6a20((undefined *)((int)this + 0x30),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x34),
               *(undefined4 * PTR32 *)((int)this + 0x34));
  F_00429760(*(undefined4 *)((int)this + 0x34),0x28,0x25c);
  piVar2 = *(int * PTR32 *)((int)this + 0x28);
  if ((piVar2 != (int *)0x0) && (*(int *)((int)this + 0x2c) != 0)) {
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      F_00406ad0(*(undefined4 *)((int)this + 0x28));
      puVar3 = *(undefined4 * PTR32 *)((int)this + 0x2c);
      if (puVar3 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
      }
    }
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined4 *)((int)this + 0x2c) = 0;
  }
  uVar4 = F_00ba85e0(this);
  return uVar4;
}

/* ref: FUN_00baae50 */
uint F_00baae50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbaae50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  ushort uVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  undefined4 * puVar8;
  int * piVar9;
  uint uVar10;
  int iVar11;
  
  puVar8 = (undefined4 *)F_00406b90(0x5ba,0,0);
  if (puVar8 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  *(undefined2 *)(puVar8 + 4) = 0;
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  piVar9 = (int *)F_00406b90(4,0,0);
  if (piVar9 == (int *)0x0) {
    (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
  }
  else {
    *piVar9 = 1;
    (*(int * PTR32 *)(gen_frame + 0x4)) = piVar9;
  }
  uVar3 = *(undefined2 *)((int)this + 0x94);
  *puVar8 = *(undefined4 *)((int)this + 0x84);
  puVar8[1] = *(undefined4 *)((int)this + 0x88);
  puVar8[2] = *(undefined4 *)((int)this + 0x8c);
  puVar8[3] = *(undefined4 *)((int)this + 0x90);
  *(undefined2 *)(puVar8 + 4) = uVar3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar8;
  *(char *)(puVar8 + 0x10) = (char)param_1;
  cVar6 = (char)param_2;
  if ((char)param_2 == -1) {
    cVar6 = *(char *)((int)this + 0xef0);
  }
  *(char *)((int)puVar8 + 0x41) = cVar6;
  *(undefined2 *)(puVar8 + 0x11) = *(undefined2 *)((int)this + 0xc6);
  *(short *)((int)puVar8 + 0x46) = (short)param_4;
  if ((char)param_1 == '\x03') {
    *(undefined1 *)((int)this + 0xefa) = 1;
LAB_00baaf38: ;
    if (*(char *)((int)this + 0xefc) != '\0') {
      bVar7 = *(byte *)((int)this + 0xef8);
      iVar11 = param_4;
      while( true ) {
        bVar1 = *(byte *)((int)this + 0xef8);
        bVar2 = *(byte *)((int)this + 0xef9);
        if ((((bVar7 < bVar1) || (bVar2 <= bVar7)) && ((bVar1 <= bVar2 || (bVar7 < bVar1)))) &&
           ((bVar2 <= bVar7 || (bVar1 <= bVar2)))) break;
        if (*(int *)((int)this + (uint)bVar7 * 8 + 0xf0) != 0) {
          *(byte *)((int)puVar8 + iVar11 + 0x48) = bVar7;
          iVar11 = iVar11 + 1;
        }
        bVar7 = bVar7 + 1 & 0x3f;
      }
      *(short *)((int)puVar8 + 0x46) = (short)iVar11;
    }
    if ((char)param_1 == '\x02') goto LAB_00bab0aa;
  }
  else {
    if ((char)param_1 == '\x04') {
      F_00c46aa0(puVar8 + 0x12,param_3,param_4);
      goto LAB_00baafb2;
    }
    if ((char)param_1 == '\x02') goto LAB_00baaf38;
  }
  if ((char)param_1 != '\x03') {
LAB_00baafb2: ;
    if ((*(int *)((int)this + 0xef4) < 0x20) && (*(int *)((int)this + 0xf64) == 0)) {
      uVar10 = F_00baac00(this,&(*(int * PTR32 *)(gen_frame + 0x4)));
      puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
      *(int *)((int)this + 0xef4) = *(int *)((int)this + 0xef4) + 1;
      *(byte *)((int)this + 0xef0) = *(char *)((int)this + 0xef0) + 1U & 0x3f;
      if (((*(int * PTR32 *)(gen_frame + 0x4)) != (int *)0x0) &&
         (((*(undefined4 * PTR32 *)(gen_frame + 0x8)) != (undefined4 *)0x0 && (*(*(int * PTR32 *)(gen_frame + 0x4)) = *(*(int * PTR32 *)(gen_frame + 0x4)) + -1, *(*(int * PTR32 *)(gen_frame + 0x4)) == 0)))) {
        F_00406ad0((*(int * PTR32 *)(gen_frame + 0x4)));
        F_00406ad0(puVar8);
      }
      return uVar10;
    }
    iVar11 = *(int *)((int)this + 0xf60);
    iVar5 = *(int *)(iVar11 + 4);
    piVar9 = (int *)F_004296a0(0x10,0,0x25a);
    *piVar9 = iVar11;
    piVar9[1] = iVar5;
    if (piVar9 + 2 != (int *)0x0) {
      *(*(int * PTR32 *)(gen_frame + 0x4)) = *(*(int * PTR32 *)(gen_frame + 0x4)) + 1;
      piVar9[2] = (int)(*(int * PTR32 *)(gen_frame + 0x4));
      piVar9[3] = (int)puVar8;
    }
    if (*(int *)((int)this + 0xf64) == -2) {
                    
      F_00c4579a("list<T> too long");
    }
    *(int *)((int)this + 0xf64) = *(int *)((int)this + 0xf64) + 1;
    *(int * PTR32 *)(iVar11 + 4) = piVar9;
    *(int * PTR32 *)piVar9[1] = piVar9;
    uVar4 = *(ushort *)((int)puVar8 + 0x46);
    if (((*(int * PTR32 *)(gen_frame + 0x4)) != (int *)0x0) && (*(*(int * PTR32 *)(gen_frame + 0x4)) = *(*(int * PTR32 *)(gen_frame + 0x4)) + -1, *(*(int * PTR32 *)(gen_frame + 0x4)) == 0)) {
      F_00406ad0((*(int * PTR32 *)(gen_frame + 0x4)));
      F_00406ad0(puVar8);
    }
    return (uint)uVar4;
  }
LAB_00bab0aa: ;
  *(byte *)((int)puVar8 + 0x42) = *(char *)((int)this + 0xef8) - 1U & 0x3f;
  *(undefined1 *)((int)this + 0xf18) = 0;
  F_00baaa50(*(undefined * PTR32 *)((int)this + 0x74),&(*(int * PTR32 *)(gen_frame + 0x4)));
  puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
  if ((((*(int * PTR32 *)(gen_frame + 0x4)) != (int *)0x0) && ((*(undefined4 * PTR32 *)(gen_frame + 0x8)) != (undefined4 *)0x0)) &&
     (*(*(int * PTR32 *)(gen_frame + 0x4)) = *(*(int * PTR32 *)(gen_frame + 0x4)) + -1, *(*(int * PTR32 *)(gen_frame + 0x4)) == 0)) {
    F_00406ad0((*(int * PTR32 *)(gen_frame + 0x4)));
    F_00406ad0(puVar8);
  }
  return 0;
}

/* ref: FUN_00bab110 */
uint F_00bab110(unsigned int gen_a0)
{
  GEN_ENTER(0xbab110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint in_EAX = 0;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  bVar3 = *(byte *)((int)this + 0xef1);
  while( true ) {
    bVar1 = *(byte *)((int)this + 0xef1);
    uVar5 = CONCAT31((int3)(in_EAX >> 8),bVar1);
    bVar2 = *(byte *)((int)this + 0xef0);
    if ((((bVar3 < bVar1) || (bVar2 <= bVar3)) && ((bVar1 <= bVar2 || (bVar3 < bVar1)))) &&
       ((bVar2 <= bVar3 || (bVar1 <= bVar2)))) break;
    uVar5 = (uint)bVar3;
    if (*(char *)(uVar5 * 0x20 + 0x508 + (int)this) == '\0') {
      iVar4 = 0;
    }
    else {
      uVar6 = F_00427d90();
      iVar4 = (int)uVar6 - *(int *)((int)this + uVar5 * 0x20 + 0x4f8);
    }
    if (*(int *)((int)this + uVar5 * 4 + 0xcf0) < iVar4) {
      if ((*((char *)GEN_TOP((*(int *)((int)this + uVar5 * 8 + 0x2f0) + 0x40))) == '\0') &&
         (*(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 1,
         10 < *(int *)((int)this + 0xcc))) {
        *(undefined4 *)((int)this + 200) = 0x3e9;
        if ((*(char *)((int)this + 0xc4) != '\0') &&
           ((*(int *)((int)this + 0xd0) != 0 && ((code *)*(gen_code32 *)((int)this + 0xc) != (code *)0x0)))) {
          ((code *)*(gen_code32 *)((int)this + 0xc))(*(int *)((int)this + 0xd0),0x3e9);
        }
        *(undefined4 *)((int)this + 0x58) = 0;
        *(undefined4 *)((int)this + 0x5c) = 0;
        uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
        return uVar5;
      }
      F_00baac00(this,(int)this + uVar5 * 8 + 0x2ec);
    }
    in_EAX = (byte)(bVar3 + 1) & 0x8000003f;
    bVar3 = (byte)in_EAX;
  }
  if (*(char *)((int)this + 0xf18) != '\0') {
    uVar6 = F_00427d90();
    uVar5 = (int)uVar6 - *(int *)((int)this + 0xf08);
    if (100 < (int)uVar5) {
      uVar5 = F_00baae50(this,2,0xff,0,0);
    }
  }
  return uVar5;
}

/* ref: Client::Network::Socket::RUDPSocket::vf10 */
uint F_00bab250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbab250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  __time64_t _Var5;
  
  iVar4 = param_1;
  iVar2 = param_2;
  if (*(int *)(this + 0x7c) != 5) {
    return 0xffffffff;
  }
  for (; 0 < iVar2; iVar2 = iVar2 - uVar1) {
    iVar3 = iVar2;
    if (0x571 < iVar2) {
      iVar3 = 0x571;
    }
    uVar1 = F_00baae50(this,4,0xff,iVar4,iVar3);
    if (((int)uVar1 < 0) || (iVar4 = iVar4 + uVar1, (int)uVar1 < iVar3)) break;
  }
  uVar1 = iVar4 - param_1;
  if (0 < (int)uVar1) {
    _Var5 = F_00c4b7c2((__time64_t *)0x0);
    *(__time64_t *)(this + 0x68) = _Var5;
    *(int *)(this + 0x3c) = *(int *)(this + 0x3c) + 1;
    *(uint *)(this + 0x44) = *(int *)(this + 0x44) + uVar1;
    *(uint *)(this + 0x48) = *(int *)(this + 0x48) + uVar1;
    *(uint *)(this + 0x50) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00bab2e0 */
uint F_00bab2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbab2e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  __time64_t _Var2;
  ulonglong uVar3;
  
  uVar1 = *(int *)((int)this + 0x7c) - 5;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    *(undefined4 *)((int)this + 0x7c) = 8;
    F_00baae50(this,2,0xff,0,0);
    if (*(char *)((int)this + 0xc4) != '\0') {
      if ((*(int *)((int)this + 0xd0) != 0) && ((code *)*(gen_code32 *)((int)this + 0x14) != (code *)0x0)) {
        ((code *)*(gen_code32 *)((int)this + 0x14))(*(int *)((int)this + 0xd0),*(int *)(param_1 + 4) + 0x48,0);
      }
      *(undefined1 *)((int)this + 0xefb) = 1;
    }
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
    return uVar1;
  case 1: ;
    *(undefined4 *)((int)this + 0x7c) = 9;
    break;
  case 2: ;
    *(undefined4 *)((int)this + 0x7c) = 0xb;
    _Var2 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)((int)this + 0xf20) = (int)_Var2;
    uVar3 = F_00427d90();
    *(ulonglong *)((int)this + 0xf28) = uVar3;
    uVar3 = F_00427e30();
    *(ulonglong *)((int)this + 0xf30) = uVar3;
    *(undefined1 *)((int)this + 0xf38) = 1;
    break;
  default: ;
    goto switchD_00bab2f5_caseD_8;
  case 6: ;
    break;
  }
  uVar1 = F_00baae50(this,2,0xff,0,0);
switchD_00bab2f5_caseD_8: ;
  return uVar1;
}

/* ref: FUN_00bab3d0 */
unsigned int F_00bab3d0(unsigned int gen_a0)
{
  GEN_ENTER(0xbab3d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined2 uVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  piVar3 = (int *)F_00406b90(0x5ba,0,0);
  if (piVar3 != (int *)0x0) {
    *(undefined2 *)(piVar3 + 4) = 0;
    *piVar3 = 0;
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[3] = 0;
    piVar4 = (int *)F_00406b90(4,0,0);
    if (piVar4 == (int *)0x0) {
      (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x0;
    }
    else {
      *piVar4 = 1;
      (*(int * PTR32 *)(gen_frame + 0x0)) = piVar4;
    }
    uVar1 = *(undefined2 *)((int)this + 0x94);
    *piVar3 = *(int *)((int)this + 0x84);
    piVar3[1] = *(int *)((int)this + 0x88);
    piVar3[2] = *(int *)((int)this + 0x8c);
    piVar3[3] = *(int *)((int)this + 0x90);
    *(undefined2 *)(piVar3 + 4) = uVar1;
    *(undefined1 *)(piVar3 + 0x10) = 1;
    *(undefined1 *)((int)piVar3 + 0x41) = *(undefined1 *)((int)this + 0xef0);
    *(undefined2 *)(piVar3 + 0x11) = *(undefined2 *)((int)this + 0xc6);
    *(undefined2 *)((int)piVar3 + 0x46) = 0;
    (*(int * PTR32 *)(gen_frame + 0x4)) = piVar3;
    if ((*(int *)((int)this + 0xef4) < 0x20) && (*(int *)((int)this + 0xf64) == 0)) {
      F_00baac00(this,&(*(int * PTR32 *)(gen_frame + 0x0)));
      *(int *)((int)this + 0xef4) = *(int *)((int)this + 0xef4) + 1;
      *(byte *)((int)this + 0xef0) = *(char *)((int)this + 0xef0) + 1U & 0x3f;
      piVar3 = (*(int * PTR32 *)(gen_frame + 0x4));
      piVar4 = (*(int * PTR32 *)(gen_frame + 0x4));
      if ((*(int * PTR32 *)(gen_frame + 0x0)) == (int *)0x0) goto LAB_00bab546;
    }
    else {
      iVar2 = *(int *)((int)this + 0xf60);
      (*(int *)(gen_frame + 0x8)) = *(int *)(iVar2 + 4);
      piVar4 = (int *)F_004296a0(0x10,0,0x25a);
      piVar4[1] = (*(int *)(gen_frame + 0x8));
      *piVar4 = iVar2;
      if (piVar4 + 2 != (int *)0x0) {
        *(*(int * PTR32 *)(gen_frame + 0x0)) = *(*(int * PTR32 *)(gen_frame + 0x0)) + 1;
        piVar4[2] = (int)(*(int * PTR32 *)(gen_frame + 0x0));
        piVar4[3] = (int)piVar3;
      }
      if (*(int *)((int)this + 0xf64) == -2) {
                    
        F_00c4579a("list<T> too long");
      }
      *(int *)((int)this + 0xf64) = *(int *)((int)this + 0xf64) + 1;
      *(int * PTR32 *)(iVar2 + 4) = piVar4;
      *(int * PTR32 *)piVar4[1] = piVar4;
      piVar4 = (*(int * PTR32 *)(gen_frame + 0x0));
    }
    if ((piVar4 != (int *)0x0) && (*(*(int * PTR32 *)(gen_frame + 0x0)) = *(*(int * PTR32 *)(gen_frame + 0x0)) + -1, *(*(int * PTR32 *)(gen_frame + 0x0)) == 0)) {
      F_00406ad0((*(int * PTR32 *)(gen_frame + 0x0)));
      F_00406ad0(piVar3);
    }
  }
LAB_00bab546: ;
  F_00baad00(this);
  return 0;
}

/* ref: FUN_00bab560 */
unsigned int F_00bab560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbab560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined2 uVar1;
  undefined4 * puVar2;
  
  if (*(int *)((int)this + 0x7c) == 4) {
    *(undefined4 *)((int)this + 0x7c) = 5;
    F_00baa440(*(undefined * PTR32 *)((int)this + 0x74),*(int *)((int)this + 0xd0) + 0x10,
                 *(undefined4 *)(param_1 + 4));
    puVar2 = *(undefined4 * PTR32 *)(param_1 + 4);
    uVar1 = *(undefined2 *)(puVar2 + 4);
    *(undefined4 *)((int)this + 0x84) = *puVar2;
    *(undefined4 *)((int)this + 0x88) = puVar2[1];
    *(undefined4 *)((int)this + 0x8c) = puVar2[2];
    *(undefined4 *)((int)this + 0x90) = puVar2[3];
    *(undefined2 *)((int)this + 0x94) = uVar1;
    F_00baae50(this,2,0xff,0,0);
    if (((*(char *)((int)this + 0xc4) != '\0') && (*(int *)((int)this + 0xd0) != 0)) &&
       ((code *)*(gen_code32 *)((int)this + 8) != (code *)0x0)) {
      ((code *)*(gen_code32 *)((int)this + 8))(*(int *)((int)this + 0xd0),0);
    }
    *(undefined4 *)((int)this + 0x58) = 0;
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  return 0;
}

/* ref: FUN_00bab610 */
uint F_00bab610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbab610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined * this_00;
  int * piVar5;
  int local_8;
  
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x78;
  *(undefined4 *)((int)this + 0x30) = 0x2d;
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
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x11047ec));
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined2 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined1 *)((int)this + 0xc4) = 0;
  *(undefined2 *)((int)this + 0xc6) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 * PTR32 *)((int)this + 0xd0) = param_1;
  *(undefined4 *)((int)this + 0xd4) = 0x1000;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  uVar2 = F_004296a0(0x14,0,0x25c);
  *(uint *)((int)this + 0xe0) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0xe0) + 4))) = *(int *)((int)this + 0xe0);
  *((int *)GEN_TOP((*(int *)((int)this + 0xe0) + 8))) = *(int *)((int)this + 0xe0);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xe0) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xe0) + 0x11))) = 1;
  puVar3 = (undefined4 *)((int)this + 0xec);
  iVar4 = 0x3f;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = puVar3 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  puVar3 = (undefined4 *)((int)this + 0x2ec);
  iVar4 = 0x3f;
  do {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = puVar3 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  this_00 = (undefined *)((int)this + 0x4f0);
  param_1 = (undefined4 *)0x3f;
  do {
    F_00a1af40(this_00);
    *(undefined1 *)((int)this_00 + 0x18) = 0;
    this_00 = (undefined *)((int)this_00 + 0x20);
    param_1 = (undefined4 *)((int)param_1 + -1);
  } while (-1 < (int)param_1);
  F_00a1af40((undefined *)((int)this + 0xf00));
  *(undefined1 *)((int)this + 0xf18) = 0;
  F_00a1af40((undefined *)((int)this + 0xf20));
  *(undefined1 *)((int)this + 0xf38) = 0;
  F_00a1af40((undefined *)((int)this + 0xf40));
  *(undefined1 *)((int)this + 0xf58) = 0;
  *(undefined4 *)((int)this + 0xf64) = 0;
  uVar2 = F_004296a0(0x10,0,0x25a);
  *(uint *)((int)this + 0xf60) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0xf60) + 4))) = *(int *)((int)this + 0xf60);
  *(undefined4 *)((int)this + 0xf70) = 0;
  uVar2 = F_004296a0(0x10,0,0x25a);
  *(uint *)((int)this + 0xf6c) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0xf6c) + 4))) = *(int *)((int)this + 0xf6c);
  *(undefined4 *)((int)this + 0xf7c) = 0;
  uVar2 = F_004296a0(0x10,0,0x25a);
  *(uint *)((int)this + 0xf78) = uVar2;
  *(uint *)uVar2 = uVar2;
  param_1 = (undefined4 *)((int)this + 0xdf0);
  *((int *)GEN_TOP((*(int *)((int)this + 0xf78) + 4))) = *(int *)((int)this + 0xf78);
  piVar5 = (int *)((int)this + 0x2f0);
  local_8 = 0x40;
  do {
    piVar1 = (int *)piVar5[-0x81];
    if ((piVar1 != (int *)0x0) && (piVar5[-0x80] != 0)) {
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        F_00406ad0(piVar5[-0x81]);
        if (piVar5[-0x80] != 0) {
          F_00406ad0(piVar5[-0x80]);
        }
      }
      piVar5[-0x81] = 0;
      piVar5[-0x80] = 0;
    }
    piVar5[-0x81] = 0;
    piVar5[-0x80] = 0;
    piVar1 = (int *)piVar5[-1];
    if ((piVar1 != (int *)0x0) && (*piVar5 != 0)) {
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        F_00406ad0(piVar5[-1]);
        if (*piVar5 != 0) {
          F_00406ad0(*piVar5);
        }
      }
      piVar5[-1] = 0;
      *piVar5 = 0;
    }
    piVar5[-1] = 0;
    *piVar5 = 0;
    *param_1 = 0;
    param_1 = param_1 + 1;
    piVar5 = piVar5 + 2;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  *(undefined2 *)((int)this + 0xef0) = 0;
  *(undefined4 *)((int)this + 0xef4) = 0;
  *(undefined1 *)((int)this + 0xefc) = 0;
  *(undefined4 *)((int)this + 0xef8) = 0x2000;
  return (uint)this;
}

/* ref: FUN_00bab900 */
uint F_00bab900(unsigned int gen_a0)
{
  GEN_ENTER(0xbab900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int * piVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x11047ec));
  F_00bb6620((undefined *)((int)this + 0xf78));
  F_00429760(*(undefined4 *)((int)this + 0xf78),0x10,0x25a);
  F_00bb6620((undefined *)((int)this + 0xf6c));
  F_00429760(*(undefined4 *)((int)this + 0xf6c),0x10,0x25a);
  F_00bb6620((undefined *)((int)this + 0xf60));
  F_00429760(*(undefined4 *)((int)this + 0xf60),0x10,0x25a);
  iVar2 = 0x3f;
  puVar4 = (undefined4 *)((int)this + 0x4ec);
  do {
    piVar1 = (int *)puVar4[-2];
    puVar3 = puVar4 + -2;
    if ((piVar1 != (int *)0x0) && (puVar4[-1] != 0)) {
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        F_00406ad0(*puVar3);
        if (puVar4[-1] != 0) {
          F_00406ad0(puVar4[-1]);
        }
      }
      *puVar3 = 0;
      puVar4[-1] = 0;
    }
    iVar2 = iVar2 + -1;
    puVar4 = puVar3;
  } while (-1 < iVar2);
  iVar2 = 0x3f;
  puVar4 = (undefined4 *)((int)this + 0x2ec);
  do {
    piVar1 = (int *)puVar4[-2];
    puVar3 = puVar4 + -2;
    if ((piVar1 != (int *)0x0) && (puVar4[-1] != 0)) {
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        F_00406ad0(*puVar3);
        if (puVar4[-1] != 0) {
          F_00406ad0(puVar4[-1]);
        }
      }
      *puVar3 = 0;
      puVar4[-1] = 0;
    }
    iVar2 = iVar2 + -1;
    puVar4 = puVar3;
  } while (-1 < iVar2);
  F_00bb4740((undefined *)((int)this + 0xdc),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0xe0),
               *(undefined4 * PTR32 *)((int)this + 0xe0));
  F_00429760(*(undefined4 *)((int)this + 0xe0),0x14,0x25c);
  piVar1 = *(int * PTR32 *)((int)this + 0x70);
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 0x74) != 0)) {
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      piVar1 = (int *)F_00406ad0(*(undefined4 *)((int)this + 0x70));
      this_00 = *(undefined * PTR32 *)((int)this + 0x74);
      if (this_00 != (undefined *)0x0) {
        F_00baadb0(this_00);
        piVar1 = (int *)F_00406ad0(this_00);
      }
    }
    *(undefined4 *)((int)this + 0x70) = 0;
    *(undefined4 *)((int)this + 0x74) = 0;
  }
  return (uint)piVar1;
}

/* ref: FUN_00baba80 */
uint F_00baba80(unsigned int gen_a0)
{
  GEN_ENTER(0xbaba80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  undefined * pvVar3;
  uint uVar4;
  
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 4))) {
  case 0: ;
  case 1: ;
  case 4: ;
    pvVar3 = (undefined *)F_00406b90(0xe8,0,0);
    if (pvVar3 == (undefined *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = F_00ba9b90(pvVar3,this);
    }
    F_00bb1550((undefined *)((int)this + 8),uVar4);
    piVar2 = *(int * PTR32 *)((int)this + 0x10);
    if ((piVar2 != (int *)0x0) && (*(int *)((int)this + 0x14) != 0)) {
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        F_00406ad0(*(undefined4 *)((int)this + 0x10));
        puVar1 = *(undefined4 * PTR32 *)((int)this + 0x14);
        if (puVar1 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        }
      }
      *(undefined4 *)((int)this + 0x10) = 0;
      *(undefined4 *)((int)this + 0x14) = 0;
    }
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
    piVar2 = *(int * PTR32 *)((int)this + 0x18);
    if ((piVar2 != (int *)0x0) && (*(int *)((int)this + 0x1c) != 0)) {
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        F_00406ad0(*(undefined4 *)((int)this + 0x18));
        puVar1 = *(undefined4 * PTR32 *)((int)this + 0x1c);
        if (puVar1 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        }
      }
      *(undefined4 *)((int)this + 0x18) = 0;
      *(undefined4 *)((int)this + 0x1c) = 0;
    }
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined4 *)((int)this + 0x1c) = 0;
    goto switchD_00baba92_default;
  case 2: ;
    F_00bb1550((undefined *)((int)this + 8),0);
    pvVar3 = (undefined *)F_00406b90(0xfa8,0,0);
    if (pvVar3 == (undefined *)0x0) {
      F_00bb16a0((undefined *)((int)this + 0x10),0);
      uVar4 = 0;
    }
    else {
      uVar4 = F_00bab610(pvVar3,this);
      F_00bb16a0((undefined *)((int)this + 0x10),uVar4);
      uVar4 = 0;
    }
    break;
  case 3: ;
    F_00bb1550((undefined *)((int)this + 8),0);
    F_00bb16a0((undefined *)((int)this + 0x10),0);
    pvVar3 = (undefined *)F_00406b90(0x200,0,0);
    if (pvVar3 == (undefined *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = F_00c08ae0(pvVar3,this,0,0);
    }
    break;
  default: ;
    goto switchD_00baba92_default;
  }
  F_00bb1770((undefined *)((int)this + 0x18),uVar4);
switchD_00baba92_default: ;
  piVar2 = *(int * PTR32 *)((int)this + 0xc);
  if (piVar2 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2,*(undefined4 *)((int)this + 4));
    return uVar4;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar2 == (int *)0x0) {
    piVar2 = *(int * PTR32 *)((int)this + 0x1c);
    if (piVar2 == (int *)0x0) {
      return 0xffffffff;
    }
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,*(undefined4 *)((int)this + 4));
    return uVar4;
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2,*(undefined4 *)((int)this + 4));
  return uVar4;
}

/* ref: FUN_00babc10 */
uint F_00babc10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbabc10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0xc) != 0) {
    if (*(int *)(param_1 + 0xc) == 0) {
      pvVar2 = (undefined *)F_00406b90(0xe8,0,0);
      if (pvVar2 == (undefined *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = F_00ba9b90(pvVar2,param_1);
      }
      F_00bb1550((undefined *)(param_1 + 8),uVar3);
    }
    uVar3 = F_00ba8ea0(*(undefined * PTR32 *)((int)this + 0xc),*(undefined4 *)(param_1 + 0xc));
    return uVar3;
  }
  if (*(int *)((int)this + 0x14) != 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      pvVar2 = (undefined *)F_00406b90(0xfa8,0,0);
      if (pvVar2 == (undefined *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = F_00bab610(pvVar2,param_1);
      }
      F_00bb16a0((undefined *)(param_1 + 0x10),uVar3);
    }
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x14) + 0x20))))
                      (*(int * PTR32 *)((int)this + 0x14),param_1 + 0x10);
    return uVar3;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x1c);
  if (piVar1 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1,param_1 + 0x18,param_1);
    return uVar3;
  }
  return 0xffffffff;
}

/* ref: FUN_00babce0 */
byte F_00babce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbabce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  
  if ((0 < *(int *)this) && (*(int *)this != 4)) {
    return 1;
  }
  *(undefined1 *)((int)this + 0x38) = *param_1;
  if (*(char *)((int)this + 0x39) == '\0') {
    pvVar2 = (undefined *)((int)this + 0x40);
    uVar3 = F_00baba80(pvVar2);
    if ((int)uVar3 < 0) {
      return 0;
    }
    gen_imp_InterlockedExchange((LONG *)((int)this + 100),(LONG)this);
    if (*(char *)((int)this + 0x38) != '\0') {
      if (REFG(int, 0x14c595c) == 0) {
        F_00ba7c10();
      }
      F_00ba9ae0(pvVar2,(int)this + 0x68);
    }
    if ((*(int *)((int)this + 0x3c) != 0) &&
       (*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x3c) + 100))) = pvVar2, *(char *)((int)this + 0x38) != '\0'))
    {
      *((int *)GEN_TOP((*(int *)((int)this + 0x3c) + 0x68))) = (int)this + 0x68;
    }
  }
  else {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x3c);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 0x3c) = 0;
    }
    pvVar2 = (undefined *)F_00406b90(0x90,0,0);
    if (pvVar2 == (undefined *)0x0) {
      *(undefined4 *)((int)this + 0x3c) = 0;
    }
    else {
      uVar3 = F_00ba89f0(pvVar2);
      *(uint *)((int)this + 0x3c) = uVar3;
    }
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)this = 1;
  return 1;
}

/* ref: FUN_00babdc0 */
uint F_00babdc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbabdc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1104738));
  *(undefined4 *)((int)this + 4) = 1;
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
  *(undefined4 *)((int)this + 0x38) = 0;
  uVar3 = F_004296a0(0x28,0,0x25c);
  *(uint *)((int)this + 0x34) = uVar3;
  *(uint *)uVar3 = uVar3;
  *((int *)GEN_TOP((*(int *)((int)this + 0x34) + 4))) = *(int *)((int)this + 0x34);
  *((int *)GEN_TOP((*(int *)((int)this + 0x34) + 8))) = *(int *)((int)this + 0x34);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x34) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x34) + 0x21))) = 1;
  *(undefined4 *)((int)this + 0x40) = param_1;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined2 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  gen_imp_InterlockedExchange((LONG *)((int)this + 0x24),(LONG)this);
  F_00baba80(this);
  if (*(int *)((int)this + 0xc) != 0) {
    *((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x38))) = ((code *)REFP(0xba99c0));
  }
  iVar4 = *(int *)((int)this + 0xc);
  if (iVar4 == 0) {
    iVar4 = *(int *)((int)this + 0x14);
    if ((iVar4 != 0) || (iVar4 = *(int *)((int)this + 0x1c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x30) = 0xffffffff;
      *(undefined4 *)(iVar4 + 0x28) = 0;
    }
  }
  else {
    *(undefined4 *)(iVar4 + 0x48) = 0;
    *(undefined4 *)(iVar4 + 0x50) = 0xffffffff;
  }
  iVar4 = REFG(int, 0x14c5958);
  if (param_2 != 0) {
    iVar4 = param_2;
  }
  F_00ba9ae0(this,iVar4);
  F_00ba7510(this,0,param_1);
  piVar1 = *(int * PTR32 *)((int)this + 0x28);
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 0x2c) != 0)) {
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)((int)this + 0x28));
      puVar2 = *(undefined4 * PTR32 *)((int)this + 0x2c);
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      }
    }
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined4 *)((int)this + 0x2c) = 0;
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  return (uint)this;
}

/* ref: FUN_00babf00 */
uint F_00babf00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbabf00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined * pvVar4;
  uint uVar5;
  int * piVar6;
  
  F_00bb5ac0((undefined *)((int)this + 0x10),param_1);
  if ((param_3 != 0) &&
     (piVar6 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4))), piVar6 != *(int * PTR32 *)((int)this + 4))) {
    do {
      piVar1 = (int *)*param_2;
      if ((piVar1 != (int *)0x0) && (param_2[1] != 0)) {
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          F_00406ad0(*param_2);
          pvVar4 = (undefined *)param_2[1];
          if (pvVar4 != (undefined *)0x0) {
            F_00baadb0(pvVar4);
            F_00406ad0(pvVar4);
          }
        }
        *param_2 = 0;
        param_2[1] = 0;
      }
      *(int *)piVar6[2] = *(int *)piVar6[2] + 1;
      *param_2 = piVar6[2];
      pvVar4 = (undefined *)piVar6[3];
      param_2[1] = (int)pvVar4;
      if (param_3 == *(int *)((int)pvVar4 + 0x40)) {
        uVar5 = F_00baa370(pvVar4,param_1);
        return uVar5;
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)*(int *)((int)this + 4));
  }
  pvVar4 = (undefined *)F_00406b90(0x94,0,0);
  if (pvVar4 == (undefined *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = F_00babdc0(pvVar4,param_3,*(undefined4 *)this);
  }
  F_00bb6d40(param_2,uVar5);
  iVar2 = *(int *)((int)this + 4);
  iVar3 = *(int *)(iVar2 + 4);
  piVar6 = (int *)F_004296a0(0x10,0,0x25a);
  piVar6[1] = iVar3;
  *piVar6 = iVar2;
  if (piVar6 + 2 != (int *)0x0) {
    *(int *)*param_2 = *(int *)*param_2 + 1;
    piVar6[2] = *param_2;
    piVar6[3] = param_2[1];
  }
  if (*(int *)((int)this + 8) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  *(int * PTR32 *)(iVar2 + 4) = piVar6;
  *(int * PTR32 *)piVar6[1] = piVar6;
  uVar5 = F_00baa370((undefined *)param_2[1],param_1);
  return uVar5;
}

/* ref: FUN_00bac040 */
uint F_00bac040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbac040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00ba99e0(*(undefined * PTR32 *)(param_2 + 4),param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00bb6f50((undefined *)((int)this + 4),param_2);
  }
  return uVar2;
}

/* ref: FUN_00bac070 */
uint F_00bac070(unsigned int gen_a0)
{
  GEN_ENTER(0xbac070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  int * piVar4;
  int * piVar5;
  undefined4 * puVar6;
  ulonglong uVar7;
  
  iVar1 = *(int *)((int)this + 0x14);
  while (iVar1 != 0) {
    iVar1 = **(int * PTR32 *)((int)this + 0x10);
    **(int * PTR32 *)(iVar1 + 8) = **(int * PTR32 *)(iVar1 + 8) + 1;
    piVar2 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x10)));
    puVar3 = *(undefined4 * PTR32 *)(iVar1 + 0xc);
    piVar4 = *(int * PTR32 *)(iVar1 + 8);
    if (piVar2 != *(int * PTR32 *)((int)this + 0x10)) {
      *(int *)piVar2[1] = *piVar2;
      *(int *)(*piVar2 + 4) = piVar2[1];
      piVar5 = (int *)piVar2[2];
      if ((piVar5 != (int *)0x0) && (piVar2[3] != 0)) {
        *piVar5 = *piVar5 + -1;
        if (*piVar5 == 0) {
          F_00406ad0(piVar2[2]);
          puVar6 = (undefined4 *)piVar2[3];
          if (puVar6 != (undefined4 *)0x0) {
            ((code *)*(gen_code32 *)*puVar6)(puVar6,1);
          }
        }
        piVar2[2] = 0;
        piVar2[3] = 0;
      }
      F_00429760(piVar2,0x10,0x25a);
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + -1;
    }
    if (((piVar4 != (int *)0x0) && (puVar3 != (undefined4 *)0x0)) &&
       (*piVar4 = *piVar4 + -1, *piVar4 == 0)) {
      F_00406ad0(piVar4);
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
    }
    iVar1 = *(int *)((int)this + 0x14);
  }
  iVar1 = *(int *)((int)this + 0x20);
  while (iVar1 != 0) {
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 8))) + 0xd0)));
    if (puVar3 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
    }
    piVar2 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1c)));
    if (piVar2 != *(int * PTR32 *)((int)this + 0x1c)) {
      *(int *)piVar2[1] = *piVar2;
      *(int *)(*piVar2 + 4) = piVar2[1];
      F_00429760(piVar2,0xc,0x25a);
      *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + -1;
    }
    iVar1 = *(int *)((int)this + 0x20);
  }
  F_00bb43f0((undefined *)((int)this + 0x1c));
  F_00bb5d30((undefined *)((int)this + 0x10));
  F_00429760(*(undefined4 *)((int)this + 0x10),0x10,0x25a);
  F_00bb7020((undefined *)((int)this + 4));
  uVar7 = F_00429760(*(undefined4 *)((int)this + 4),0x10,0x25a);
  return (uint)uVar7;
}

/* ref: FUN_00bac1c0 */
uint F_00bac1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbac1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  __time64_t _Var2;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0x10,0,0x25a);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar1 = F_004296a0(0x10,0,0x25a);
  *(uint *)((int)this + 0x10) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) = *(int *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x20) = 0;
  uVar1 = F_004296a0(0xc,0,0x25a);
  *(uint *)((int)this + 0x1c) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 4))) = *(int *)((int)this + 0x1c);
  _Var2 = F_00c4b7c2((__time64_t *)0x0);
  F_00c4f2cb((int)_Var2);
  return (uint)this;
}

/* ref: FUN_00bac250 */
unsigned int F_00bac250(unsigned int gen_a0)
{
  GEN_ENTER(0xbac250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  pvVar1 = *(undefined * PTR32 *)((int)this + 8);
  if (pvVar1 != (undefined *)0x0) {
    F_00c09a50(pvVar1);
    F_00406ad0(pvVar1);
  }
  pvVar1 = *(undefined * PTR32 *)((int)this + 4);
  if (pvVar1 != (undefined *)0x0) {
    F_00bac070(pvVar1);
    F_00406ad0(pvVar1);
  }
  piVar2 = *(int * PTR32 *)this;
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)*piVar2;
    if (puVar3 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
    }
    F_00406ad0(piVar2);
  }
  return 0;
}

/* ref: FUN_00bac2b0 */
uint F_00bac2b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbac2b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  if (*(int *)((int)this + 4) == 0) {
    this_00 = (undefined *)F_00406b90(0x28,0,0);
    if (this_00 != (undefined *)0x0) {
      uVar1 = F_00bac1c0(this_00,this);
      *(uint *)((int)this + 4) = uVar1;
      return uVar1;
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  return *(uint *)((int)this + 4);
}

/* ref: FUN_00bac2f0 */
uint F_00bac2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbac2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  F_00a1af40((undefined *)((int)this + 0x20));
  *(undefined1 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(bool *)((int)this + 0x39) = param_1 == 1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[1])REFP(0x1104738));
  *(undefined4 *)((int)this + 0x44) = 4;
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
  iVar1 = *(int *)((int)this + 0x44);
  if ((((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 4)) &&
     (piVar2 = *(int * PTR32 *)((int)this + 0x4c), piVar2 != (int *)0x0)) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x38))(piVar2,400);
  }
  iVar1 = *(int *)((int)this + 0x44);
  if ((((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 4)) &&
     (piVar2 = *(int * PTR32 *)((int)this + 0x4c), piVar2 != (int *)0x0)) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x3c))(piVar2,400);
  }
  return (uint)this;
}

/* ref: FUN_00bac3b0 */
uint F_00bac3b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbac3b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  code * pcVar5;
  
  if (*(char *)((int)this + 0x38) != '\0') {
    if ((*(undefined4 * PTR32 *)((int)this + 0x68) != (undefined4 *)0x0) &&
       (pvVar1 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x68))), pvVar1 != (undefined *)0x0)) {
      F_00ba98a0(pvVar1);
    }
    if (*(int *)((int)this + 0x70) != 0) {
      F_00c085d0();
    }
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x4c);
  if (piVar4 == (int *)0x0) {
    piVar4 = *(int * PTR32 *)((int)this + 0x54);
    if (piVar4 == (int *)0x0) {
      piVar4 = *(int * PTR32 *)((int)this + 0x5c);
      if (piVar4 == (int *)0x0) goto LAB_00bac407;
      pcVar5 = *(gen_code32 *)(*piVar4 + 0x10);
    }
    else {
      pcVar5 = *(gen_code32 *)(*piVar4 + 0x14);
    }
  }
  else {
    pcVar5 = *(gen_code32 *)(*piVar4 + 0xc);
  }
  (*pcVar5)(piVar4);
LAB_00bac407: ;
  if ((*(char *)((int)this + 0x39) != '\0') &&
     (puVar2 = *(undefined4 * PTR32 *)((int)this + 0x3c), puVar2 != (undefined4 *)0x0)) {
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)((int)this + 0x3c) = 0;
  }
  pvVar1 = *(undefined * PTR32 *)((int)this + 0x70);
  if (pvVar1 != (undefined *)0x0) {
    F_00c09a50(pvVar1);
    F_00406ad0(pvVar1);
  }
  pvVar1 = *(undefined * PTR32 *)((int)this + 0x6c);
  if (pvVar1 != (undefined *)0x0) {
    F_00bac070(pvVar1);
    F_00406ad0(pvVar1);
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x68);
  if (piVar4 != (int *)0x0) {
    puVar2 = (undefined4 *)*piVar4;
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
    F_00406ad0(piVar4);
  }
  uVar3 = F_00ba85e0((undefined *)((int)this + 0x40));
  return uVar3;
}

/* ref: Client::Network::Socket::RUDPSocket::vf7 */
uint F_00bac480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbac480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined4 uVar2;
  int * piVar3;
  undefined * this_00;
  uint uVar4;
  int iVar5;
  
  *(undefined4 *)(this + 0x80) = param_2;
  iVar1 = *(int *)(this + 0xd0);
  *(undefined4 *)(this + 0x78) = 2;
  iVar5 = *(int *)(iVar1 + 0x20);
  if (iVar5 == 0) {
    iVar5 = REFG(int, 0x14c5958);
  }
  if (*(int *)(iVar5 + 4) == 0) {
    this_00 = (undefined *)F_00406b90(0x28,0,0);
    if (this_00 == (undefined *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = F_00bac1c0(this_00,iVar5);
    }
    *(uint *)(iVar5 + 4) = uVar4;
  }
  F_00babf00(*(undefined * PTR32 *)(iVar5 + 4),iVar1 + 0x10,this + 0x70,param_2);
  iVar1 = *(int *)(this + 0x74);
  uVar2 = *(undefined4 *)(this + 0xd4);
  if (*(undefined * PTR32 *)(iVar1 + 0xc) != (undefined *)0x0) {
    F_00ba8820(*(undefined * PTR32 *)(iVar1 + 0xc),uVar2);
    return 0;
  }
  piVar3 = *(int * PTR32 *)(iVar1 + 0x14);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0x38))(piVar3,uVar2);
    return 0;
  }
  piVar3 = *(int * PTR32 *)(iVar1 + 0x1c);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0x34))(piVar3,uVar2);
  }
  return 0;
}

/* ref: FUN_00bac540 */
uint F_00bac540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbac540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined2 uVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  undefined * this_00;
  undefined * this_01;
  
  puVar2 = *(undefined4 * PTR32 *)(param_1 + 4);
  uVar1 = *(undefined2 *)(puVar2 + 4);
  *(undefined4 *)((int)this + 0x84) = *puVar2;
  *(undefined4 *)((int)this + 0x88) = puVar2[1];
  *(undefined4 *)((int)this + 0x8c) = puVar2[2];
  *(undefined4 *)((int)this + 0x90) = puVar2[3];
  *(undefined2 *)((int)this + 0x94) = uVar1;
  *(undefined4 *)((int)this + 0x7c) = 5;
  uVar4 = F_00c4f2dd();
  *(short *)((int)this + 0xc6) = (short)uVar4;
  iVar3 = *(int *)((int)this + 0xd0);
  this_01 = *(undefined * PTR32 *)(iVar3 + 0x20);
  if (this_01 == (undefined *)0x0) {
    this_01 = REFG(void * PTR32, 0x14c5958);
  }
  if (*(int *)((int)this_01 + 4) == 0) {
    this_00 = (undefined *)F_00406b90(0x28,0,0);
    if (this_00 == (undefined *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = F_00bac1c0(this_00,this_01);
    }
    *(uint *)((int)this_01 + 4) = uVar4;
  }
  F_00babf00(*(undefined * PTR32 *)((int)this_01 + 4),iVar3 + 0x10,(int)this + 0x70,param_2);
  F_00bb5bf0((undefined *)((int)this + 0xf6c),param_1);
  uVar4 = F_00bad720(this_01);
  return uVar4;
}

/* ref: Client::Network::Socket::RUDPSocket::vf2 */
uint F_00bac600(unsigned int gen_a0)
{
  GEN_ENTER(0xbac600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(this + 0x74) != 0) {
    iVar1 = *(int *)(this + 0xd0);
    iVar3 = *(int *)(iVar1 + 0x20);
    if (iVar3 == 0) {
      iVar3 = REFG(int, 0x14c5958);
    }
    if (*(int *)(iVar3 + 4) == 0) {
      this_00 = (undefined *)F_00406b90(0x28,0,0);
      if (this_00 == (undefined *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = F_00bac1c0(this_00,iVar3);
      }
      *(uint *)(iVar3 + 4) = uVar2;
    }
    iVar3 = *(int *)(iVar3 + 4);
    uVar2 = F_00ba99e0(*(undefined * PTR32 *)(this + 0x74),iVar1 + 0x10);
    if (uVar2 != 0) {
      F_00bb6f50((undefined *)(iVar3 + 4),this + 0x70);
    }
    *(undefined4 *)(this + 0xd0) = 0;
    return 0;
  }
  *(undefined4 *)(this + 0xd0) = 0;
  return 0;
}

/* ref: FUN_00bac6a0 */
unsigned int F_00bac6a0(unsigned int gen_a0)
{
  GEN_ENTER(0xbac6a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  
  if ((*(int *)((int)this + 0xd0) != 0) && ((code *)*(gen_code32 *)((int)this + 0x20) != (code *)0x0)) {
    uVar1 = ((code *)*(gen_code32 *)((int)this + 0x20))(*(int *)((int)this + 0xd0));
    if ((char)uVar1 != '\0') {
      iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0xd0) + 0x20)));
      if (iVar3 == 0) {
        iVar3 = REFG(int, 0x14c5958);
      }
      if (*(int *)(iVar3 + 4) == 0) {
        pvVar2 = (undefined *)F_00406b90(0x28,0,0);
        if (pvVar2 != (undefined *)0x0) {
          pvVar2 = (undefined *)F_00bac1c0(pvVar2,iVar3);
          *(undefined * PTR32 *)(iVar3 + 4) = pvVar2;
          F_00ba8b20(pvVar2,this);
          return 0;
        }
        *(undefined4 *)(iVar3 + 4) = 0;
      }
      F_00ba8b20(*(undefined * PTR32 *)(iVar3 + 4),this);
    }
  }
  return 0;
}

/* ref: FUN_00bac720 */
uint F_00bac720(unsigned int gen_a0)
{
  GEN_ENTER(0xbac720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * PTR32 * ppuVar8;
  undefined4 * puVar9;
  undefined * this_00;
  uint uVar10;
  int * piVar11;
  
  uVar6 = 0;
  if (*(int *)((int)this + 0xf70) != 0) {
    (*(uint *)(gen_frame + 0x18)) = 1;
    do {
      iVar2 = **(int * PTR32 *)((int)this + 0xf6c);
      **(int * PTR32 *)(iVar2 + 8) = **(int * PTR32 *)(iVar2 + 8) + 1;
      iVar3 = *(int *)(iVar2 + 0xc);
      piVar11 = *(int * PTR32 *)((int)this + 0xf6c);
      piVar4 = (int *)*piVar11;
      (*(int * PTR32 *)(gen_frame + 0x10)) = *(int * PTR32 *)(iVar2 + 8);
      (*(int *)(gen_frame + 0x14)) = iVar3;
      if (piVar4 != piVar11) {
        *(int *)piVar4[1] = *piVar4;
        *(int *)(*piVar4 + 4) = piVar4[1];
        piVar11 = (int *)piVar4[2];
        if ((piVar11 != (int *)0x0) && (piVar4[3] != 0)) {
          *piVar11 = *piVar11 + -1;
          if (*piVar11 == 0) {
            F_00406ad0(piVar4[2]);
            if (piVar4[3] != 0) {
              F_00406ad0(piVar4[3]);
            }
          }
          piVar4[2] = 0;
          piVar4[3] = 0;
        }
        F_00429760(piVar4,0x10,0x25a);
        *(int *)((int)this + 0xf70) = *(int *)((int)this + 0xf70) + -1;
      }
      uVar6 = (int)((uint)*(ushort *)((*(int *)(gen_frame + 0x14)) + 2) << 0x10) >> 0x1f | *(uint *)((*(int *)(gen_frame + 0x14)) + 4);
      puVar9 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + 0x34)));
      uVar10 = CONCAT22(*(ushort *)((*(int *)(gen_frame + 0x14)) + 2),*(undefined2 *)((*(int *)(gen_frame + 0x14)) + 0x10));
      cVar1 = *(char *)((int)puVar9[1] + 0x21);
      (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar9;
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar9;
      puVar5 = (undefined4 *)puVar9[1];
      while (cVar1 == '\0') {
        if ((uVar6 < (uint)puVar5[5]) || ((uVar6 <= (uint)puVar5[5] && (uVar10 <= (uint)puVar5[4])))
           ) {
          puVar7 = (undefined4 *)*puVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar5;
        }
        else {
          puVar7 = (undefined4 *)puVar5[2];
        }
        puVar5 = puVar7;
        cVar1 = *(char *)((int)puVar7 + 0x21);
      }
      puVar5 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + 0x34)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (*(undefined4 * PTR32 *)(gen_frame + 0x28));
      if ((((*(undefined4 * PTR32 *)(gen_frame + 0x28)) == puVar5) || (uVar6 < (uint)(*(undefined4 * PTR32 *)(gen_frame + 0x28))[5])) ||
         ((uVar6 == (*(undefined4 * PTR32 *)(gen_frame + 0x28))[5] && (uVar10 < (uint)(*(undefined4 * PTR32 *)(gen_frame + 0x28))[4])))) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = puVar5;
        ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x20));
      }
      else {
        ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x24));
      }
      piVar11 = (int *)0x0;
      if (*ppuVar8 == puVar9) {
        puVar9 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0xd0) + 0x20)));
        if (puVar9 == (undefined4 *)0x0) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = REFG(undefined4 * PTR32, 0x14c5958);
        }
        else {
          (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar9;
        }
        puVar9 = (undefined4 *)F_00406b90(0x28,0,0);
        if (puVar9 == (undefined4 *)0x0) {
          (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = (undefined4 *)0x0;
        }
        else {
          *puVar9 = (*(undefined * PTR32 (*)[1])REFP(0x1104738));
          puVar9[1] = 2;
          puVar9[2] = 0;
          puVar9[3] = 0;
          puVar9[4] = 0;
          puVar9[5] = 0;
          puVar9[6] = 0;
          puVar9[7] = 0;
          puVar9[8] = 0;
          puVar9[9] = 0;
          (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar9;
        }
        this_00 = (undefined *)F_00406b90(0xfa8,0,0);
        if (this_00 != (undefined *)0x0) {
          piVar11 = (int *)F_00bab610(this_00,(*(undefined4 * PTR32 *)(gen_frame + 0x28)));
        }
        piVar11[0x36] = (int)this;
        puVar9 = (undefined4 *)F_004296a0(0x14,0,0x25c);
        *puVar9 = *(undefined4 *)((int)this + 0xe0);
        puVar9[1] = *(undefined4 *)((int)this + 0xe0);
        puVar9[2] = *(undefined4 *)((int)this + 0xe0);
        *(undefined2 *)(puVar9 + 4) = 0;
        if (puVar9 + 3 != (undefined4 *)0x0) {
          puVar9[3] = piVar11;
        }
        F_00bb3ea0((undefined *)((int)this + 0xdc),((undefined1 *)(gen_frame + 0x8)),puVar9,0);
        ((code *)*(gen_code32 *)(*piVar11 + 0x10))(piVar11,2);
        puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0x28));
        F_00bb16a0((*(undefined4 * PTR32 *)(gen_frame + 0x28)) + 4,piVar11);
        F_00ba9ae0(puVar9,(*(undefined4 * PTR32 *)(gen_frame + 0x24)));
        F_00bac540((undefined *)puVar9[5],&(*(int * PTR32 *)(gen_frame + 0x10)),*(undefined4 *)((int)this + 0x80));
        if ((*(int *)((int)this + 0xd0) != 0) && ((code *)*(gen_code32 *)((int)this + 0x10) != (code *)0x0)) {
          ((code *)*(gen_code32 *)((int)this + 0x10))(*(int *)((int)this + 0xd0),puVar9);
        }
        if ((*(int * PTR32 *)(gen_frame + 0x10)) != (int *)0x0) {
          *(*(int * PTR32 *)(gen_frame + 0x10)) = *(*(int * PTR32 *)(gen_frame + 0x10)) + -1;
          if (*(*(int * PTR32 *)(gen_frame + 0x10)) == 0) {
            F_00406ad0((*(int * PTR32 *)(gen_frame + 0x10)));
            F_00406ad0((*(int *)(gen_frame + 0x14)));
          }
          (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)0x0;
          (*(int *)(gen_frame + 0x14)) = 0;
        }
      }
      else if ((*(int * PTR32 *)(gen_frame + 0x10)) != (int *)0x0) {
        *(*(int * PTR32 *)(gen_frame + 0x10)) = *(*(int * PTR32 *)(gen_frame + 0x10)) + -1;
        if (*(*(int * PTR32 *)(gen_frame + 0x10)) == 0) {
          F_00406ad0((*(int * PTR32 *)(gen_frame + 0x10)));
          F_00406ad0((*(int *)(gen_frame + 0x14)));
        }
        (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)0x0;
        (*(int *)(gen_frame + 0x14)) = 0;
      }
      uVar6 = (*(uint *)(gen_frame + 0x18));
    } while (*(int *)((int)this + 0xf70) != 0);
  }
  if (*(int *)((int)this + 0x7c) - 0xcU < 2) {
    uVar6 = 0xffffffff;
  }
  return uVar6;
}

/* ref: Client::Network::Socket::RUDPSocket::vf5 */
uint F_00bac9e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbac9e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined2 uVar1;
  int iVar2;
  int * piVar3;
  undefined4 * puVar4;
  int * piVar5;
  __time64_t _Var6;
  ulonglong uVar7;
  
  F_00ba8e00(this);
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(this + 0x7c))) {
  case 5: ;
    *(undefined4 *)(this + 0x7c) = 6;
    puVar4 = (undefined4 *)F_00406b90(0x5ba,0,0);
    if (puVar4 == (undefined4 *)0x0) goto LAB_00bacd32;
    *(undefined2 *)(puVar4 + 4) = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    piVar5 = (int *)F_00406b90(4,0,0);
    if (piVar5 == (int *)0x0) {
      (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x0;
    }
    else {
      *piVar5 = 1;
      (*(int * PTR32 *)(gen_frame + 0x0)) = piVar5;
    }
    uVar1 = *(undefined2 *)(this + 0x94);
    *puVar4 = *(undefined4 *)(this + 0x84);
    puVar4[1] = *(undefined4 *)(this + 0x88);
    puVar4[2] = *(undefined4 *)(this + 0x8c);
    puVar4[3] = *(undefined4 *)(this + 0x90);
    *(undefined2 *)(puVar4 + 4) = uVar1;
    *(undefined1 *)(puVar4 + 0x10) = 5;
    *(undefined *)((int)puVar4 + 0x41) = this[0xef0];
    *(undefined2 *)(puVar4 + 0x11) = *(undefined2 *)(this + 0xc6);
    *(undefined2 *)((int)puVar4 + 0x46) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar4;
    if ((*(int *)(this + 0xef4) < 0x20) && (*(int *)(this + 0xf64) == 0)) {
      F_00baac00(this,&(*(int * PTR32 *)(gen_frame + 0x0)));
      puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x4));
      *(int *)(this + 0xef4) = *(int *)(this + 0xef4) + 1;
      this[0xef0] = (undefined1)((char)this[0xef0] + 1U & 0x3f);
      if (((*(int * PTR32 *)(gen_frame + 0x0)) != (int *)0x0) &&
         (((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != (undefined4 *)0x0 && (*(*(int * PTR32 *)(gen_frame + 0x0)) = *(*(int * PTR32 *)(gen_frame + 0x0)) + -1, *(*(int * PTR32 *)(gen_frame + 0x0)) == 0)))) {
        F_00406ad0((*(int * PTR32 *)(gen_frame + 0x0)));
        F_00406ad0(puVar4);
      }
      goto LAB_00bacd32;
    }
    iVar2 = *(int *)(this + 0xf60);
    (*(int *)(gen_frame + 0x8)) = *(int *)(iVar2 + 4);
    piVar5 = (int *)F_004296a0(0x10,0,0x25a);
    piVar5[1] = (*(int *)(gen_frame + 0x8));
    *piVar5 = iVar2;
    break;
  case 6: ;
  case 7: ;
  case 9: ;
  case 10: ;
  case 0xb: ;
  case 0xc: ;
  case 0xd: ;
    return 0xffffffff;
  case 8: ;
    *(undefined4 *)(this + 0x7c) = 10;
    _Var6 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)(this + 0xf20) = (int)_Var6;
    uVar7 = F_00427d90();
    *(ulonglong *)(this + 0xf28) = uVar7;
    uVar7 = F_00427e30();
    *(ulonglong *)(this + 0xf30) = uVar7;
    this[0xf38] = (undefined1)0x1;
    puVar4 = (undefined4 *)F_00406b90(0x5ba,0,0);
    if (puVar4 == (undefined4 *)0x0) goto LAB_00bacd32;
    *(undefined2 *)(puVar4 + 4) = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    piVar5 = (int *)F_00406b90(4,0,0);
    if (piVar5 == (int *)0x0) {
      (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x0;
    }
    else {
      *piVar5 = 1;
      (*(int * PTR32 *)(gen_frame + 0x0)) = piVar5;
    }
    uVar1 = *(undefined2 *)(this + 0x94);
    *puVar4 = *(undefined4 *)(this + 0x84);
    puVar4[1] = *(undefined4 *)(this + 0x88);
    puVar4[2] = *(undefined4 *)(this + 0x8c);
    puVar4[3] = *(undefined4 *)(this + 0x90);
    *(undefined2 *)(puVar4 + 4) = uVar1;
    *(undefined1 *)(puVar4 + 0x10) = 5;
    *(undefined *)((int)puVar4 + 0x41) = this[0xef0];
    *(undefined2 *)(puVar4 + 0x11) = *(undefined2 *)(this + 0xc6);
    *(undefined2 *)((int)puVar4 + 0x46) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar4;
    if ((*(int *)(this + 0xef4) < 0x20) && (*(int *)(this + 0xf64) == 0)) {
      F_00baac00(this,&(*(int * PTR32 *)(gen_frame + 0x0)));
      puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x4));
      *(int *)(this + 0xef4) = *(int *)(this + 0xef4) + 1;
      this[0xef0] = (undefined1)((char)this[0xef0] + 1U & 0x3f);
      if (((*(int * PTR32 *)(gen_frame + 0x0)) != (int *)0x0) &&
         (((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != (undefined4 *)0x0 && (*(*(int * PTR32 *)(gen_frame + 0x0)) = *(*(int * PTR32 *)(gen_frame + 0x0)) + -1, *(*(int * PTR32 *)(gen_frame + 0x0)) == 0)))) {
        F_00406ad0((*(int * PTR32 *)(gen_frame + 0x0)));
        F_00406ad0(puVar4);
      }
      goto LAB_00bacd32;
    }
    iVar2 = *(int *)(this + 0xf60);
    (*(int *)(gen_frame + 0x8)) = *(int *)(iVar2 + 4);
    piVar5 = (int *)F_004296a0(0x10,0,0x25a);
    piVar5[1] = (*(int *)(gen_frame + 0x8));
    *piVar5 = iVar2;
    break;
  default: ;
    *(undefined4 *)(this + 0x7c) = 0xd;
    goto LAB_00bacd32;
  }
  piVar3 = piVar5 + 2;
  if (piVar3 != (int *)0x0) {
    *(*(int * PTR32 *)(gen_frame + 0x0)) = *(*(int * PTR32 *)(gen_frame + 0x0)) + 1;
    *piVar3 = (int)(*(int * PTR32 *)(gen_frame + 0x0));
    piVar3[1] = (int)puVar4;
  }
  if (*(int *)(this + 0xf64) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)(this + 0xf64) = *(int *)(this + 0xf64) + 1;
  *(int * PTR32 *)(iVar2 + 4) = piVar5;
  *(int * PTR32 *)piVar5[1] = piVar5;
  if (((*(int * PTR32 *)(gen_frame + 0x0)) != (int *)0x0) && (*(*(int * PTR32 *)(gen_frame + 0x0)) = *(*(int * PTR32 *)(gen_frame + 0x0)) + -1, *(*(int * PTR32 *)(gen_frame + 0x0)) == 0)) {
    F_00406ad0((*(int * PTR32 *)(gen_frame + 0x0)));
    F_00406ad0(puVar4);
  }
LAB_00bacd32: ;
  if (this[0xc4] != (undefined1)0x0) {
    F_00bac6a0(this);
  }
  return 0;
}

/* ref: FUN_00bacd70 */
uint F_00bacd70(void)
{
  GEN_ENTER(0xbacd70u, 0u, 0u, 0u, 0u);
  undefined * pvVar1;
  int * piVar2;
  undefined4 * puVar3;
  int * piVar4;
  
  piVar4 = REFG(int * PTR32, 0x14c5958);
  REFG(int, 0x14c595c) = REFG(int, 0x14c595c) + -1;
  if (REFG(int, 0x14c595c) == 0) {
    if ((((undefined4 *)GEN_TOP(*REFG(int * PTR32, 0x14c5958))) != (undefined4 *)0x0) &&
       (pvVar1 = *((undefined * PTR32 *)GEN_TOP(*REFG(int * PTR32, 0x14c5958))), pvVar1 != (undefined *)0x0)) {
      F_00ba98a0(pvVar1);
    }
    if (piVar4[2] != 0) {
      F_00c085d0();
    }
    piVar4 = REFG(int * PTR32, 0x14c5958);
    if (REFG(int * PTR32, 0x14c5958) != (int *)0x0) {
      pvVar1 = ((undefined *)GEN_TOP(REFG(int * PTR32, 0x14c5958)[2]));
      if (pvVar1 != (undefined *)0x0) {
        F_00c09a50(pvVar1);
        F_00406ad0(pvVar1);
      }
      pvVar1 = (undefined *)piVar4[1];
      if (pvVar1 != (undefined *)0x0) {
        F_00bac070(pvVar1);
        F_00406ad0(pvVar1);
      }
      piVar2 = (int *)*piVar4;
      if (piVar2 != (int *)0x0) {
        puVar3 = (undefined4 *)*piVar2;
        if (puVar3 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
        }
        F_00406ad0(piVar2);
      }
      F_00406ad0(piVar4);
    }
    REFG(int * PTR32, 0x14c5958) = (int *)0x0;
    gen_imp_WSACleanup();
  }
  return 0;
}

/* ref: FUN_00bace30 */
uint F_00bace30(unsigned int gen_a0)
{
  GEN_ENTER(0xbace30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  char cVar2;
  byte bVar3;
  undefined * this_00;
  undefined4 uVar4;
  int * piVar5;
  int * piVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte * pbVar12;
  __time64_t _Var13;
  ulonglong uVar14;
  
  if (*(int *)((int)this + 0x78) == 2) {
    if (*(char *)((int)this + 0xc4) == '\0') {
      return 1;
    }
    uVar9 = F_00bac720(this);
    return uVar9;
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x74);
  if ((this_00 != (undefined *)0x0) && (*(int *)((int)this_00 + 0x44) != *(int *)((int)this_00 + 0x48)))
  {
    F_00baa950(this_00);
  }
  F_00baad00(this);
  uVar9 = (uint)(*(char *)((int)this + 0xc4) == '\0');
  if (*(int *)((int)this + 0xf70) != 0) {
    (*(uint *)(gen_frame + 0x14)) = 1;
    do {
      iVar10 = **(int * PTR32 *)((int)this + 0xf6c);
      **(int * PTR32 *)(iVar10 + 8) = **(int * PTR32 *)(iVar10 + 8) + 1;
      iVar11 = *(int *)(iVar10 + 0xc);
      uVar4 = **(undefined4 * PTR32 *)((int)this + 0xf6c);
      (*(int * PTR32 *)(gen_frame + 0x8)) = *(int * PTR32 *)(iVar10 + 8);
      (*(int *)(gen_frame + 0xc)) = iVar11;
      F_00bb6590((undefined *)((int)this + 0xf6c),((undefined1 *)(gen_frame + 0x10)),uVar4);
      cVar2 = *(char *)(iVar11 + 0x40);
      if ((cVar2 == '\x02') || (cVar2 == '\x03')) {
        if ((*(short *)(iVar11 + 0x46) != 0) && (*(short *)(iVar11 + 0x46) != 0)) {
          iVar10 = -0x48 - (*(int *)(gen_frame + 0xc));
          pbVar12 = (byte *)((*(int *)(gen_frame + 0xc)) + 0x48);
          (*(int *)(gen_frame + 0x18)) = iVar10;
          iVar11 = (*(int *)(gen_frame + 0xc));
          do {
            puVar1 = (undefined4 *)((int)this + (uint)*pbVar12 * 8 + 0x2ec);
            piVar5 = (int *)*puVar1;
            if ((piVar5 != (int *)0x0) && (puVar1[1] != 0)) {
              *piVar5 = *piVar5 + -1;
              if (*piVar5 == 0) {
                F_00406ad0(*puVar1);
                if (puVar1[1] != 0) {
                  F_00406ad0(puVar1[1]);
                }
              }
              *puVar1 = 0;
              puVar1[1] = 0;
              iVar10 = (*(int *)(gen_frame + 0x18));
              iVar11 = (*(int *)(gen_frame + 0xc));
            }
            *puVar1 = 0;
            puVar1[1] = 0;
            *(undefined1 *)((uint)*pbVar12 * 0x20 + 0x508 + (int)this) = 0;
            pbVar12 = pbVar12 + 1;
          } while ((int)(pbVar12 + iVar10) < (int)(uint)*(ushort *)(iVar11 + 0x46));
        }
      }
      else {
        bVar8 = *(byte *)(iVar11 + 0x41);
        bVar3 = *(byte *)((int)this + 0xef8);
        bVar7 = *(byte *)((int)this + 0xef9);
        if (((((bVar8 < bVar3) || (bVar7 <= bVar8)) && ((bVar3 <= bVar7 || (bVar8 < bVar3)))) &&
            ((bVar7 <= bVar8 || (bVar3 <= bVar7)))) ||
           (*(int *)((int)this + (uint)bVar8 * 8 + 0xf0) != 0)) {
          if ((*(int *)((int)this + 0x7c) == 0xb) && (cVar2 == '\x05')) {
            F_00bab2e0(this,&(*(int * PTR32 *)(gen_frame + 0x8)));
          }
        }
        else {
          if (bVar8 == bVar3) {
            if (*(char *)((int)this + 0xefc) != '\0') {
              *(undefined1 *)((int)this + 0xefc) = 0;
              bVar8 = bVar3;
              do {
                bVar8 = bVar8 + 1 & 0x3f;
                if ((((bVar8 < bVar3) || (bVar7 <= bVar8)) && ((bVar3 <= bVar7 || (bVar8 < bVar3))))
                   && ((bVar7 <= bVar8 || (bVar3 <= bVar7)))) goto LAB_00bacfb3;
              } while (*(int *)((int)this + (uint)bVar8 * 8 + 0xf0) == 0);
              *(undefined1 *)((int)this + 0xefc) = 1;
            }
LAB_00bacfb3: ;
            _Var13 = F_00c4b7c2((__time64_t *)0x0);
            *(int *)((int)this + 0xf00) = (int)_Var13;
            uVar14 = F_00427d90();
            *(ulonglong *)((int)this + 0xf08) = uVar14;
            uVar14 = F_00427e30();
            *(ulonglong *)((int)this + 0xf10) = uVar14;
            *(undefined1 *)((int)this + 0xf18) = 1;
          }
          else {
            *(undefined1 *)((int)this + 0xefc) = 1;
            if (*(char *)((int)this + 0xefa) == '\0') {
              F_00baae50(this,3,0xff,0,0);
            }
            else {
              F_00bb0210((undefined *)((int)this + 0xf00));
            }
          }
          F_00bb3590(((undefined *)GEN_TOP(((int)this + (uint)*(byte *)((*(int *)(gen_frame + 0xc)) + 0x41) * 8 + 0xec))),&(*(int * PTR32 *)(gen_frame + 0x8)));
          iVar10 = *((int *)GEN_TOP(((int)this + (uint)*(byte *)((int)this + 0xef8) * 8 + 0xf0)));
          while (iVar10 != 0) {
            uVar9 = (uint)*(byte *)((int)this + 0xef8);
            piVar5 = *(int * PTR32 *)((int)this + uVar9 * 8 + 0xec);
            *piVar5 = *piVar5 + 1;
            piVar5 = *(int * PTR32 *)((int)this + uVar9 * 8 + 0xec);
            iVar10 = *(int *)((int)this + uVar9 * 8 + 0xf0);
            puVar1 = ((undefined4 *)GEN_TOP(((int)this + (uint)*(byte *)((int)this + 0xef8) * 8 + 0xec)));
            *(undefined1 *)((int)this + 0xefa) = 0;
            piVar6 = (int *)*puVar1;
            (*(int * PTR32 *)(gen_frame + 0x0)) = piVar5;
            (*(int *)(gen_frame + 0x4)) = iVar10;
            if ((piVar6 != (int *)0x0) && (puVar1[1] != 0)) {
              *piVar6 = *piVar6 + -1;
              if (*piVar6 == 0) {
                F_00406ad0(*puVar1);
                if (puVar1[1] != 0) {
                  F_00406ad0(puVar1[1]);
                }
              }
              *puVar1 = 0;
              puVar1[1] = 0;
            }
            *puVar1 = 0;
            puVar1[1] = 0;
            *(byte *)((int)this + 0xef8) = *(char *)((int)this + 0xef8) + 1U & 0x3f;
            *(byte *)((int)this + 0xef9) = *(char *)((int)this + 0xef9) + 1U & 0x3f;
            _Var13 = F_00c4b7c2((__time64_t *)0x0);
            *(int *)((int)this + 0xf00) = (int)_Var13;
            uVar14 = F_00427d90();
            *(ulonglong *)((int)this + 0xf08) = uVar14;
            uVar14 = F_00427e30();
            *(ulonglong *)((int)this + 0xf10) = uVar14;
            *(undefined1 *)((int)this + 0xf18) = 1;
            switch((unsigned int)(uintptr_t)(*(undefined1 *)(iVar10 + 0x40))) {
            case 0: ;
              F_00bab3d0(this);
              break;
            case 1: ;
              F_00bab560(this,&(*(int * PTR32 *)(gen_frame + 0x0)));
              break;
            case 4: ;
              F_00ba92c0(this,&(*(int * PTR32 *)(gen_frame + 0x0)));
              break;
            case 5: ;
              F_00bab2e0(this,&(*(int * PTR32 *)(gen_frame + 0x0)));
            }
            if ((*(int * PTR32 *)(gen_frame + 0x0)) != (int *)0x0) {
              *(*(int * PTR32 *)(gen_frame + 0x0)) = *(*(int * PTR32 *)(gen_frame + 0x0)) + -1;
              if (*(*(int * PTR32 *)(gen_frame + 0x0)) == 0) {
                F_00406ad0((*(int * PTR32 *)(gen_frame + 0x0)));
                F_00406ad0(iVar10);
              }
              (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x0;
              (*(int *)(gen_frame + 0x4)) = 0;
            }
            iVar10 = *((int *)GEN_TOP(((int)this + (uint)*(byte *)((int)this + 0xef8) * 8 + 0xf0)));
          }
        }
      }
      if (*(char *)((*(int *)(gen_frame + 0xc)) + 0x40) == '\x03') {
        bVar7 = *(char *)((*(int *)(gen_frame + 0xc)) + 0x42) + 1U & 0x3f;
        bVar8 = *(byte *)((int)this + 0xef1);
        bVar3 = *(byte *)((int)this + 0xef0);
        if ((((bVar8 <= bVar7) && (bVar7 < bVar3)) || ((bVar3 < bVar8 && (bVar8 <= bVar7)))) ||
           ((bVar7 < bVar3 && (bVar3 < bVar8)))) {
          F_00baac00(this,(int)this + (uint)bVar7 * 8 + 0x2ec);
        }
      }
      while( true ) {
        bVar8 = *(byte *)((*(int *)(gen_frame + 0xc)) + 0x42);
        bVar3 = *(byte *)((int)this + 0xef1);
        bVar7 = *(byte *)((int)this + 0xef0);
        if ((((bVar8 < bVar3) || (bVar7 <= bVar8)) && ((bVar3 <= bVar7 || (bVar8 < bVar3)))) &&
           ((bVar7 <= bVar8 || (bVar3 <= bVar7)))) break;
        if (*(int *)((int)this + (uint)bVar3 * 8 + 0x2f0) == 0) {
          *(byte *)((int)this + 0xef1) = bVar3 + 1 & 0x3f;
        }
        else {
          *(int *)((int)this + 0xef4) = *(int *)((int)this + 0xef4) + -1;
          *(undefined1 *)((uint)bVar3 * 0x20 + 0x508 + (int)this) = 0;
          uVar9 = (uint)*(byte *)((int)this + 0xef1);
          piVar5 = *(int * PTR32 *)((int)this + uVar9 * 8 + 0x2ec);
          if (*((char *)GEN_TOP((*(int *)((int)this + uVar9 * 8 + 0x2f0) + 0x40))) == '\x05') {
            if ((piVar5 != (int *)0x0) && (*(int *)((int)this + uVar9 * 8 + 0x2f0) != 0)) {
              *piVar5 = *piVar5 + -1;
              if (*piVar5 == 0) {
                F_00406ad0(*(undefined4 *)((int)this + uVar9 * 8 + 0x2ec));
                iVar10 = *(int *)((int)this + uVar9 * 8 + 0x2f0);
                if (iVar10 != 0) {
                  F_00406ad0(iVar10);
                }
              }
              *(undefined4 *)((int)this + uVar9 * 8 + 0x2ec) = 0;
              *(undefined4 *)((int)this + uVar9 * 8 + 0x2f0) = 0;
            }
            *(undefined4 *)((int)this + uVar9 * 8 + 0x2ec) = 0;
            *(undefined4 *)((int)this + uVar9 * 8 + 0x2f0) = 0;
            *(byte *)((int)this + 0xef1) = *(char *)((int)this + 0xef1) + 1U & 0x3f;
            iVar10 = *(int *)((int)this + 0x7c);
            if (iVar10 == 6) {
              *(undefined4 *)((int)this + 0x7c) = 7;
            }
            else if (iVar10 == 9) {
              *(undefined4 *)((int)this + 0x7c) = 0xb;
              _Var13 = F_00c4b7c2((__time64_t *)0x0);
              *(int *)((int)this + 0xf20) = (int)_Var13;
              uVar14 = F_00427d90();
              *(ulonglong *)((int)this + 0xf28) = uVar14;
              uVar14 = F_00427e30();
              *(ulonglong *)((int)this + 0xf30) = uVar14;
              *(undefined1 *)((int)this + 0xf38) = 1;
            }
            else if (iVar10 == 10) {
              *(undefined4 *)((int)this + 0x7c) = 0xc;
            }
          }
          else {
            if ((piVar5 != (int *)0x0) && (*(int *)((int)this + uVar9 * 8 + 0x2f0) != 0)) {
              *piVar5 = *piVar5 + -1;
              if (*piVar5 == 0) {
                F_00406ad0(*(undefined4 *)((int)this + uVar9 * 8 + 0x2ec));
                iVar10 = *(int *)((int)this + uVar9 * 8 + 0x2f0);
                if (iVar10 != 0) {
                  F_00406ad0(iVar10);
                }
              }
              *(undefined4 *)((int)this + uVar9 * 8 + 0x2ec) = 0;
              *(undefined4 *)((int)this + uVar9 * 8 + 0x2f0) = 0;
            }
            *(undefined4 *)((int)this + uVar9 * 8 + 0x2ec) = 0;
            *(undefined4 *)((int)this + uVar9 * 8 + 0x2f0) = 0;
            *(byte *)((int)this + 0xef1) = *(char *)((int)this + 0xef1) + 1U & 0x3f;
          }
        }
      }
      bVar8 = *(byte *)((int)this + 0xef1);
      bVar3 = *(byte *)((int)this + 0xef0);
      while( true ) {
        bVar8 = bVar8 & 0x3f;
        bVar7 = *(byte *)((int)this + 0xef1);
        if (((((bVar8 < bVar7) || (bVar3 <= bVar8)) && ((bVar7 <= bVar3 || (bVar8 < bVar7)))) &&
            ((bVar3 <= bVar8 || (bVar7 <= bVar3)))) ||
           (*(int *)((int)this + (uint)bVar8 * 8 + 0x2f0) != 0)) break;
        *(int *)((int)this + 0xef4) = *(int *)((int)this + 0xef4) + -1;
        *(byte *)((int)this + 0xef1) = bVar8;
        bVar8 = bVar8 + 1;
      }
      if ((*(int * PTR32 *)(gen_frame + 0x8)) != (int *)0x0) {
        *(*(int * PTR32 *)(gen_frame + 0x8)) = *(*(int * PTR32 *)(gen_frame + 0x8)) + -1;
        if (*(*(int * PTR32 *)(gen_frame + 0x8)) == 0) {
          F_00406ad0((*(int * PTR32 *)(gen_frame + 0x8)));
          F_00406ad0((*(int *)(gen_frame + 0xc)));
        }
        (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)0x0;
        (*(int *)(gen_frame + 0xc)) = 0;
      }
      uVar9 = (*(uint *)(gen_frame + 0x14));
    } while (*(int *)((int)this + 0xf70) != 0);
  }
  F_00bab110(this);
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x7c))) {
  case 10: ;
  case 0xb: ;
    if (*(char *)((int)this + 0xf38) == '\0') {
      return uVar9;
    }
    uVar14 = F_00427d90();
    if ((int)uVar14 - *(int *)((int)this + 0xf28) < 0xc9) {
      return uVar9;
    }
    *(undefined4 *)((int)this + 0x7c) = 0xc;
    *(undefined1 *)((int)this + 0xf38) = 0;
switchD_00bad542_default: ;
    return 0xffffffff;
  case 0xc: ;
  case 0xd: ;
    goto switchD_00bad542_default;
  default: ;
    return uVar9;
  }
}

/* ref: FUN_00bad5b0 */
uint F_00bad5b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbad5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  int * piVar7;
  ulonglong uVar8;
  
  piVar4 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x10)));
  if (piVar4 != *(int * PTR32 *)((int)this + 0x10)) {
    do {
      *(int *)piVar4[2] = *(int *)piVar4[2] + 1;
      piVar6 = (int *)piVar4[3];
      piVar7 = (int *)piVar4[2];
      uVar3 = F_00bace30(piVar6);
      if ((int)uVar3 < 0) {
        piVar5 = (int *)*piVar4;
        if (piVar4 != *(int * PTR32 *)((int)this + 0x10)) {
          *(int * PTR32 *)piVar4[1] = piVar5;
          *(int *)(*piVar4 + 4) = piVar4[1];
          piVar1 = (int *)piVar4[2];
          if ((piVar1 != (int *)0x0) && (piVar4[3] != 0)) {
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              F_00406ad0(piVar4[2]);
              puVar2 = (undefined4 *)piVar4[3];
              if (puVar2 != (undefined4 *)0x0) {
                ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
              }
            }
            piVar4[2] = 0;
            piVar4[3] = 0;
          }
          F_00429760(piVar4,0x10,0x25a);
          *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + -1;
        }
      }
      else {
        if (uVar3 == 0) {
          if ((piVar6[0x34] != 0) && ((code *)piVar6[7] != (code *)0x0)) {
            (*(code *)piVar6[7])(piVar6[0x34]);
          }
          if ((piVar6[0x1e] != 2) && (uVar3 = F_00ba6cc0(piVar6), uVar3 == 1)) {
            ((code *)*(gen_code32 *)(*piVar6 + 0x14))(piVar6);
          }
        }
        piVar5 = (int *)*piVar4;
      }
      if (((piVar7 != (int *)0x0) && (piVar6 != (int *)0x0)) &&
         (*piVar7 = *piVar7 + -1, *piVar7 == 0)) {
        F_00406ad0(piVar7);
        ((code *)*(gen_code32 *)*piVar6)(piVar6,1);
      }
      piVar4 = piVar5;
    } while (piVar5 != *(int * PTR32 *)((int)this + 0x10));
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x1c);
  piVar6 = (int *)*piVar4;
  if ((int *)*piVar4 != piVar4) {
    do {
      for (piVar4 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x10))); piVar4 != *(int * PTR32 *)((int)this + 0x10);
          piVar4 = (int *)*piVar4) {
        if (piVar4[3] == piVar6[2]) {
          piVar7 = (int *)*piVar6;
          goto LAB_00bad70a;
        }
      }
      puVar2 = *(undefined4 * PTR32 *)(piVar6[2] + 0xd0);
      if (puVar2 != (undefined4 *)0x0) {
        piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*puVar2)(puVar2,1)));
      }
      piVar7 = (int *)*piVar6;
      if (piVar6 != *(int * PTR32 *)((int)this + 0x1c)) {
        *(int * PTR32 *)piVar6[1] = piVar7;
        *(int *)(*piVar6 + 4) = piVar6[1];
        uVar8 = F_00429760(piVar6,0xc,0x25a);
        piVar4 = (int *)uVar8;
        *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + -1;
      }
LAB_00bad70a: ;
      piVar6 = piVar7;
    } while (piVar7 != *(int * PTR32 *)((int)this + 0x1c));
  }
  return (uint)piVar4;
}

/* ref: FUN_00bad720 */
uint F_00bad720(unsigned int gen_a0)
{
  GEN_ENTER(0xbad720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = 0;
  if (*(undefined4 * PTR32 *)this != (undefined4 *)0x0) {
    this_00 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)this));
    if (this_00 == (undefined *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = F_00baa9f0(this_00);
    }
  }
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    F_00bad5b0(*(undefined * PTR32 *)((int)this + 4));
  }
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    F_00c0b250(*(undefined * PTR32 *)((int)this + 8));
  }
  return uVar1;
}

/* ref: Client::Network::Socket::RUDPSocket::vf9 */
uint F_00bad760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbad760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined * pvVar5;
  uint uVar6;
  undefined4 * puVar7;
  int * piVar8;
  int * piVar9;
  __time64_t _Var10;
  
  *(undefined4 *)(this + 0x84) = *param_1;
  *(undefined4 *)(this + 0x88) = param_1[1];
  *(undefined4 *)(this + 0x8c) = param_1[2];
  *(undefined4 *)(this + 0x90) = param_1[3];
  uVar4 = gen_imp_ntohs(*(ushort *)((int)param_1 + 2));
  iVar2 = *(int *)(this + 0xd0);
  *(uint *)(this + 0x80) = (uint)uVar4;
  *(undefined4 *)(this + 0x7c) = 4;
  piVar8 = *(int * PTR32 *)(iVar2 + 0x20);
  piVar9 = REFG(int * PTR32, 0x14c5958);
  if (piVar8 != (int *)0x0) {
    piVar9 = piVar8;
  }
  if (piVar9[1] == 0) {
    pvVar5 = (undefined *)F_00406b90(0x28,0,0);
    if (pvVar5 == (undefined *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = F_00bac1c0(pvVar5,piVar9);
    }
    piVar9[1] = uVar6;
  }
  F_00babf00((undefined *)piVar9[1],iVar2 + 0x10,this + 0x70,0);
  iVar2 = *(int *)(this + 0x74);
  uVar3 = *(undefined4 *)(this + 0xd4);
  if (*(undefined * PTR32 *)(iVar2 + 0xc) == (undefined *)0x0) {
    piVar8 = *(int * PTR32 *)(iVar2 + 0x14);
    if (piVar8 == (int *)0x0) {
      piVar8 = *(int * PTR32 *)(iVar2 + 0x1c);
      if (piVar8 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar8 + 0x34))(piVar8,uVar3);
      }
    }
    else {
      ((code *)*(gen_code32 *)(*piVar8 + 0x38))(piVar8,uVar3);
    }
  }
  else {
    F_00ba8820(*(undefined * PTR32 *)(iVar2 + 0xc),uVar3);
  }
  puVar7 = (undefined4 *)F_00406b90(0x5ba,0,0);
  if (puVar7 != (undefined4 *)0x0) {
    *(undefined2 *)(puVar7 + 4) = 0;
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    piVar8 = (int *)F_00406b90(4,0,0);
    if (piVar8 == (int *)0x0) {
      (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x0;
    }
    else {
      *piVar8 = 1;
      (*(int * PTR32 *)(gen_frame + 0x0)) = piVar8;
    }
    uVar1 = *(undefined2 *)(this + 0x94);
    *puVar7 = *(undefined4 *)(this + 0x84);
    puVar7[1] = *(undefined4 *)(this + 0x88);
    puVar7[2] = *(undefined4 *)(this + 0x8c);
    puVar7[3] = *(undefined4 *)(this + 0x90);
    *(undefined2 *)(puVar7 + 4) = uVar1;
    *(undefined1 *)(puVar7 + 0x10) = 0;
    *(undefined *)((int)puVar7 + 0x41) = this[0xef0];
    *(undefined2 *)(puVar7 + 0x11) = *(undefined2 *)(this + 0xc6);
    *(undefined2 *)((int)puVar7 + 0x46) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar7;
    if ((*(int *)(this + 0xef4) < 0x20) && (*(int *)(this + 0xf64) == 0)) {
      F_00baac00(this,&(*(int * PTR32 *)(gen_frame + 0x0)));
      puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x4));
      *(int *)(this + 0xef4) = *(int *)(this + 0xef4) + 1;
      this[0xef0] = (undefined1)((char)this[0xef0] + 1U & 0x3f);
      if ((((*(int * PTR32 *)(gen_frame + 0x0)) != (int *)0x0) && ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != (undefined4 *)0x0)) &&
         (*(*(int * PTR32 *)(gen_frame + 0x0)) = *(*(int * PTR32 *)(gen_frame + 0x0)) + -1, *(*(int * PTR32 *)(gen_frame + 0x0)) == 0)) {
        F_00406ad0((*(int * PTR32 *)(gen_frame + 0x0)));
        F_00406ad0(puVar7);
      }
    }
    else {
      iVar2 = *(int *)(this + 0xf60);
      (*(int *)(gen_frame + 0x8)) = *(int *)(iVar2 + 4);
      piVar8 = (int *)F_004296a0(0x10,0,0x25a);
      piVar8[1] = (*(int *)(gen_frame + 0x8));
      *piVar8 = iVar2;
      if (piVar8 + 2 != (int *)0x0) {
        *(*(int * PTR32 *)(gen_frame + 0x0)) = *(*(int * PTR32 *)(gen_frame + 0x0)) + 1;
        piVar8[2] = (int)(*(int * PTR32 *)(gen_frame + 0x0));
        piVar8[3] = (int)puVar7;
      }
      if (*(int *)(this + 0xf64) == -2) {
                    
        F_00c4579a("list<T> too long");
      }
      *(int *)(this + 0xf64) = *(int *)(this + 0xf64) + 1;
      *(int * PTR32 *)(iVar2 + 4) = piVar8;
      *(int * PTR32 *)piVar8[1] = piVar8;
      if (((*(int * PTR32 *)(gen_frame + 0x0)) != (int *)0x0) && (*(*(int * PTR32 *)(gen_frame + 0x0)) = *(*(int * PTR32 *)(gen_frame + 0x0)) + -1, *(*(int * PTR32 *)(gen_frame + 0x0)) == 0)) {
        F_00406ad0((*(int * PTR32 *)(gen_frame + 0x0)));
        F_00406ad0(puVar7);
      }
    }
  }
  _Var10 = F_00c4b7c2((__time64_t *)0x0);
  *(__time64_t *)(this + 0x58) = _Var10;
  if (this[0xc4] == (undefined1)0x0) {
    iVar2 = *(int *)(this + 0x7c);
    while (iVar2 == 4) {
      if (((undefined4 *)*piVar9 != (undefined4 *)0x0) &&
         (pvVar5 = *(undefined * PTR32 *)*piVar9, pvVar5 != (undefined *)0x0)) {
        F_00baa9f0(pvVar5);
      }
      if ((undefined *)piVar9[1] != (undefined *)0x0) {
        F_00bad5b0((undefined *)piVar9[1]);
      }
      if ((undefined *)piVar9[2] != (undefined *)0x0) {
        F_00c0b250((undefined *)piVar9[2]);
      }
      F_00bace30(this);
      iVar2 = *(int *)(this + 0x7c);
    }
    return -(uint)(*(int *)(this + 0x7c) != 5);
  }
  return 1000;
}

/* ref: FUN_00bada50 */
uint F_00bada50(void)
{
  GEN_ENTER(0xbada50u, 0u, 0u, 0u, 0u);
  undefined * pvVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = REFG(int * PTR32, 0x14c5958);
  uVar3 = 0;
  if (REFG(int * PTR32, 0x14c5958) != (int *)0x0) {
    uVar3 = 0;
    if ((((undefined4 *)GEN_TOP(*REFG(int * PTR32, 0x14c5958))) != (undefined4 *)0x0) &&
       (pvVar1 = *((undefined * PTR32 *)GEN_TOP(*REFG(int * PTR32, 0x14c5958))), uVar3 = 0, pvVar1 != (undefined *)0x0)) {
      uVar3 = F_00baa9f0(pvVar1);
    }
    pvVar1 = (undefined *)piVar2[1];
    if (pvVar1 != (undefined *)0x0) {
      uVar3 = F_00bad5b0(pvVar1);
    }
    pvVar1 = (undefined *)piVar2[2];
    if (pvVar1 != (undefined *)0x0) {
      uVar3 = F_00c0b250(pvVar1);
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: FUN_00bada90 */
uint F_00bada90(unsigned int gen_a0)
{
  GEN_ENTER(0xbada90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  int * piVar2;
  uint uVar3;
  
  if (*(char *)((int)this + 0x38) != '\0') {
    if ((*(undefined4 * PTR32 *)((int)this + 0x68) != (undefined4 *)0x0) &&
       (pvVar1 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x68))), pvVar1 != (undefined *)0x0)) {
      F_00baa9f0(pvVar1);
    }
    if (*(undefined * PTR32 *)((int)this + 0x6c) != (undefined *)0x0) {
      F_00bad5b0(*(undefined * PTR32 *)((int)this + 0x6c));
    }
    if (*(undefined * PTR32 *)((int)this + 0x70) != (undefined *)0x0) {
      F_00c0b250(*(undefined * PTR32 *)((int)this + 0x70));
    }
    piVar2 = REFG(int * PTR32, 0x14c5958);
    if (REFG(int * PTR32, 0x14c5958) != (int *)0x0) {
      if ((((undefined4 *)GEN_TOP(*REFG(int * PTR32, 0x14c5958))) != (undefined4 *)0x0) &&
         (pvVar1 = *((undefined * PTR32 *)GEN_TOP(*REFG(int * PTR32, 0x14c5958))), pvVar1 != (undefined *)0x0)) {
        F_00baa9f0(pvVar1);
      }
      pvVar1 = (undefined *)piVar2[1];
      if (pvVar1 != (undefined *)0x0) {
        F_00bad5b0(pvVar1);
      }
      pvVar1 = (undefined *)piVar2[2];
      if (pvVar1 != (undefined *)0x0) {
        F_00c0b250(pvVar1);
      }
    }
  }
  if (*(int *)this == 2) {
    uVar3 = F_00ba81e0(this);
    return uVar3;
  }
  uVar3 = *(int *)this - 3;
  if (uVar3 == 0) {
    if (*(char *)((int)this + 0x39) == '\0') {
      *(undefined4 *)this = 4;
      piVar2 = *(int * PTR32 *)((int)this + 0x4c);
      if (piVar2 != (int *)0x0) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
        return uVar3;
      }
      piVar2 = *(int * PTR32 *)((int)this + 0x54);
      if (piVar2 != (int *)0x0) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
        return uVar3;
      }
      piVar2 = *(int * PTR32 *)((int)this + 0x5c);
      if (piVar2 != (int *)0x0) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
        return uVar3;
      }
    }
    else {
      uVar3 = F_004cf030(*(undefined * PTR32 *)((int)this + 0x3c));
      if ((char)uVar3 == '\0') {
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3c) + 4))))(*(int * PTR32 *)((int)this + 0x3c));
        return uVar3;
      }
      *(undefined4 *)this = 4;
    }
  }
  return uVar3;
}

/* ref: Client::Network::Socket::RUDPSocket::vf8 */
uint F_00badb70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbadb70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  int iVar1;
  int * piVar2;
  int iVar3;
  undefined * pvVar4;
  byte bVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  (*(int * PTR32 *)(gen_frame + 0xc)) = (int *)0x0;
  (*(int *)(gen_frame + 0x10)) = 0;
  do {
    if (*(int *)((*(undefined * PTR32 *)(gen_frame + 0x18)) + 0xf70) != 0) {
      this_00 = (*(undefined * PTR32 *)(gen_frame + 0x18)) + 0xf6c;
      do {
        iVar1 = **(int * PTR32 *)this_00;
        **(int * PTR32 *)(iVar1 + 8) = **(int * PTR32 *)(iVar1 + 8) + 1;
        piVar2 = *(int * PTR32 *)(iVar1 + 8);
        iVar1 = *(int *)(iVar1 + 0xc);
        F_00bb6590(this_00,((undefined1 *)(gen_frame + 0x14)),**(undefined4 * PTR32 *)this_00);
        bVar5 = F_00bb4e10(*(undefined * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x74),iVar1);
        iVar3 = (*(int *)(gen_frame + 0x10));
        if (bVar5 == 0) {
          if ((((*(int * PTR32 *)(gen_frame + 0xc)) != (int *)0x0) && ((*(int *)(gen_frame + 0x10)) != 0)) &&
             (*(*(int * PTR32 *)(gen_frame + 0xc)) = *(*(int * PTR32 *)(gen_frame + 0xc)) + -1, *(*(int * PTR32 *)(gen_frame + 0xc)) == 0)) {
            F_00406ad0((*(int * PTR32 *)(gen_frame + 0xc)));
            F_00406ad0(iVar3);
          }
          *piVar2 = *piVar2 + 1;
          iVar3 = *piVar2;
          (*(int * PTR32 *)(gen_frame + 0xc)) = piVar2;
          (*(int *)(gen_frame + 0x10)) = iVar1;
          if ((iVar1 != 0) && (*piVar2 = iVar3 + -1, iVar3 + -1 == 0)) {
            F_00406ad0(piVar2);
            F_00406ad0(iVar1);
          }
          break;
        }
        if (((piVar2 != (int *)0x0) && (iVar1 != 0)) && (*piVar2 = *piVar2 + -1, *piVar2 == 0)) {
          F_00406ad0(piVar2);
          F_00406ad0(iVar1);
        }
      } while (*(int *)((*(undefined * PTR32 *)(gen_frame + 0x18)) + 0xf70) != 0);
    }
    piVar2 = REFG(int * PTR32, 0x14c5958);
    if (REFG(int * PTR32, 0x14c5958) != (int *)0x0) {
      if ((((undefined4 *)GEN_TOP(*REFG(int * PTR32, 0x14c5958))) != (undefined4 *)0x0) &&
         (pvVar4 = *((undefined * PTR32 *)GEN_TOP(*REFG(int * PTR32, 0x14c5958))), pvVar4 != (undefined *)0x0)) {
        F_00baa9f0(pvVar4);
      }
      pvVar4 = (undefined *)piVar2[1];
      if (pvVar4 != (undefined *)0x0) {
        F_00bad5b0(pvVar4);
      }
      pvVar4 = (undefined *)piVar2[2];
      if (pvVar4 != (undefined *)0x0) {
        F_00c0b250(pvVar4);
      }
    }
    iVar1 = (*(int *)(gen_frame + 0x10));
    if ((*(int *)(gen_frame + 0x10)) != 0) {
      F_00bac540(*(undefined * PTR32 *)(param_1 + 4),&(*(int * PTR32 *)(gen_frame + 0xc)),*(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x80));
      if (((*(int * PTR32 *)(gen_frame + 0xc)) != (int *)0x0) && (*(*(int * PTR32 *)(gen_frame + 0xc)) = *(*(int * PTR32 *)(gen_frame + 0xc)) + -1, *(*(int * PTR32 *)(gen_frame + 0xc)) == 0)) {
        F_00406ad0((*(int * PTR32 *)(gen_frame + 0xc)));
        F_00406ad0(iVar1);
      }
      return 0;
    }
  } while( true );
}

/* ref: Client::Network::Socket::RUDPSocket::vf11 */
uint F_00badcc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbadcc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  int iVar2;
  undefined * this_00;
  int iVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (this[0xc4] == (undefined1)0x0) {
    if ((*(int *)(this + 0x7c) != 8) || (this[0xefb] != (undefined1)0x0)) {
      iVar2 = *(int *)(this + 0xf7c);
      piVar4 = REFG(int * PTR32, 0x14c5958);
      while (REFG(int * PTR32, 0x14c5958) = piVar4, iVar2 == 0) {
        if (piVar4 != (int *)0x0) {
          if (((undefined4 *)*piVar4 != (undefined4 *)0x0) &&
             (this_00 = *(undefined * PTR32 *)*piVar4, this_00 != (undefined *)0x0)) {
            F_00baa9f0(this_00);
          }
          if ((undefined *)piVar4[1] != (undefined *)0x0) {
            F_00bad5b0((undefined *)piVar4[1]);
          }
          if ((undefined *)piVar4[2] != (undefined *)0x0) {
            F_00c0b250((undefined *)piVar4[2]);
          }
        }
        piVar4 = REFG(int * PTR32, 0x14c5958);
        iVar2 = *(int *)(this + 0xf7c);
      }
      iVar2 = **(int * PTR32 *)(this + 0xf78);
      **(int * PTR32 *)(iVar2 + 8) = **(int * PTR32 *)(iVar2 + 8) + 1;
      iVar3 = *(int *)(iVar2 + 0xc);
      piVar4 = *(int * PTR32 *)(iVar2 + 8);
      F_00bb6590(this + 0xf78,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)(this + 0xf78));
      F_00c46aa0(param_1,iVar3 + 0x48,(uint)*(ushort *)(iVar3 + 0x46));
      uVar1 = *(ushort *)(iVar3 + 0x46);
      if ((piVar4 != (int *)0x0) && (*piVar4 = *piVar4 + -1, *piVar4 == 0)) {
        F_00406ad0(piVar4);
        F_00406ad0(iVar3);
      }
      return (uint)uVar1;
    }
    this[0xefb] = (undefined1)0x1;
  }
  return 0;
}

/* ref: FUN_00baddf0 */
uint F_00baddf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaddf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return 0;
}

/* ref: FUN_00bade00 */
uint F_00bade00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbade00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(in_ecx + 4) = param_2;
  return 0;
}

/* ref: FUN_00bade10 */
uint F_00bade10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbade10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(in_ecx + 8) = param_2;
  return 0;
}

/* ref: FUN_00bade20 */
uint F_00bade20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbade20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(in_ecx + 0xc) = param_2;
  return 0;
}

/* ref: FUN_00bade30 */
uint F_00bade30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbade30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(in_ecx + 0x10) = param_2;
  return 0;
}

/* ref: FUN_00bade40 */
uint F_00bade40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbade40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(in_ecx + 0x14) = param_2;
  return 0;
}

/* ref: FUN_00bade50 */
uint F_00bade50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbade50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(in_ecx + 0x18) = param_2;
  return 0;
}

/* ref: FUN_00bade60 */
uint F_00bade60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbade60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 0x24) = param_2;
  return 0;
}

/* ref: FUN_00bade80 */
uint F_00bade80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbade80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 0x20) = param_1;
  *(undefined4 *)((int)this + 0x28) = param_2;
  return 0;
}

/* ref: FUN_00badec0 */
uint F_00badec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbadec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  uVar1 = param_2;
  if (param_2 == 0) {
    if ((code *)*(gen_code32 *)this != (code *)0x0) {
      uVar1 = ((code *)*(gen_code32 *)this)(param_1,0);
      return uVar1;
    }
  }
  else if ((code *)*(gen_code32 *)((int)this + 4) != (code *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)((int)this + 4))(param_1,param_2);
  }
  return uVar1;
}

/* ref: FUN_00badf00 */
uint F_00badf00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbadf00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if ((code *)*(gen_code32 *)((int)this + 8) != (code *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)((int)this + 8))(param_1,param_2);
  }
  return uVar1;
}

/* ref: FUN_00badf20 */
uint F_00badf20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbadf20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = 0;
  if ((code *)*(gen_code32 *)((int)this + 0xc) != (code *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)((int)this + 0xc))(param_1,param_2,param_3);
  }
  return uVar1;
}

/* ref: FUN_00badf40 */
uint F_00badf40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbadf40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = 0;
  if ((code *)*(gen_code32 *)((int)this + 0x10) != (code *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)((int)this + 0x10))(param_1,param_2,param_3,param_4);
  }
  return uVar1;
}

/* ref: FUN_00badf70 */
uint F_00badf70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbadf70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if ((code *)*(gen_code32 *)((int)this + 0x14) != (code *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)((int)this + 0x14))(param_1);
  }
  return uVar1;
}

/* ref: FUN_00badf90 */
uint F_00badf90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbadf90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if ((code *)*(gen_code32 *)((int)this + 0x1c) != (code *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(param_1);
  }
  return uVar1;
}

/* ref: FUN_00badfb0 */
uint F_00badfb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbadfb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if ((code *)*(gen_code32 *)((int)this + 0x20) != (code *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)((int)this + 0x20))(param_1);
  }
  return uVar1;
}

/* ref: FUN_00badfd0 */
uint F_00badfd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbadfd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((code *)*(gen_code32 *)((int)this + 0x18) != (code *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)((int)this + 0x18))(param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00bae080 */
uint F_00bae080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbae080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x20) = param_1;
  *(undefined4 *)((int)this + 0x24) = param_2;
  return param_1;
}

/* ref: FUN_00bae0a0 */
uint F_00bae0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbae0a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x28) = param_1;
  *(undefined4 *)((int)this + 0x2c) = param_2;
  return param_1;
}

/* ref: FUN_00bae0c0 */
uint F_00bae0c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbae0c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x30) = param_1;
  *(undefined4 *)((int)this + 0x34) = param_2;
  return param_1;
}

/* ref: FUN_00bae110 */
uint F_00bae110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbae110u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = *in_ecx + 1;
  in_ecx[2] = in_ecx[2] + param_2;
  in_ecx[5] = in_ecx[5] + param_2;
  in_ecx[7] = param_2;
  return param_2;
}

/* ref: FUN_00bae130 */
uint F_00bae130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbae130u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(int *)(in_ecx + 4) = *(int *)(in_ecx + 4) + 1;
  *(int *)(in_ecx + 0xc) = *(int *)(in_ecx + 0xc) + param_2;
  *(int *)(in_ecx + 0x10) = *(int *)(in_ecx + 0x10) + param_2;
  *(uint *)(in_ecx + 0x18) = param_2;
  return param_2;
}

/* ref: FUN_00bae160 */
uint F_00bae160(unsigned int gen_a0)
{
  GEN_ENTER(0xbae160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00a1af40(this);
  *(undefined1 *)((int)this + 0x18) = 0;
  return (uint)this;
}

/* ref: FUN_00bae1f0 */
uint F_00bae1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbae1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c09a50(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bae220 */
uint F_00bae220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbae220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bae300 */
byte F_00bae300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbae300u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 4) == param_2;
}

/* ref: FUN_00bae360 */
byte F_00bae360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbae360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00bae380 */
byte F_00bae380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbae380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00bae3d0 */
uint F_00bae3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbae3d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00bae430 */
uint F_00bae430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbae430u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_00bae440 */
byte F_00bae440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbae440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00bae460 */
byte F_00bae460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbae460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00bae4a0 */
byte F_00bae4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbae4a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 4) != param_2;
}

/* ref: FUN_00bae4f0 */
byte F_00bae4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbae4f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 4) == param_2;
}

/* ref: FUN_00bae510 */
byte F_00bae510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbae510u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 4) != param_2;
}

/* ref: FUN_00bae540 */
uint F_00bae540(unsigned int gen_a0)
{
  GEN_ENTER(0xbae540u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bae570 */
uint F_00bae570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbae570u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00bae5b0 */
byte F_00bae5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbae5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00bae5d0 */
uint F_00bae5d0(unsigned int gen_a0)
{
  GEN_ENTER(0xbae5d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00bae5e0 */
uint F_00bae5e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbae5e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bae5f0 */
uint F_00bae5f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbae5f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00bae600 */
uint F_00bae600(unsigned int gen_a0)
{
  GEN_ENTER(0xbae600u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00bae610 */
uint F_00bae610(unsigned int gen_a0)
{
  GEN_ENTER(0xbae610u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00bae620 */
uint F_00bae620(unsigned int gen_a0)
{
  GEN_ENTER(0xbae620u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00bae660 */
unsigned int F_00bae660(unsigned int gen_a0)
{
  GEN_ENTER(0xbae660u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00bae6b0 */
uint F_00bae6b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbae6b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bae6c0 */
uint F_00bae6c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbae6c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00bae6f0 */
uint F_00bae6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbae6f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00bae730 */
uint F_00bae730(unsigned int gen_a0)
{
  GEN_ENTER(0xbae730u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00bae740 */
uint F_00bae740(unsigned int gen_a0)
{
  GEN_ENTER(0xbae740u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x11;
}

/* ref: FUN_00bae750 */
uint F_00bae750(unsigned int gen_a0)
{
  GEN_ENTER(0xbae750u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bae760 */
uint F_00bae760(unsigned int gen_a0)
{
  GEN_ENTER(0xbae760u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00bae770 */
uint F_00bae770(unsigned int gen_a0)
{
  GEN_ENTER(0xbae770u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00bae780 */
uint F_00bae780(unsigned int gen_a0)
{
  GEN_ENTER(0xbae780u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00bae790 */
uint F_00bae790(unsigned int gen_a0)
{
  GEN_ENTER(0xbae790u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00bae7b0 */
uint F_00bae7b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbae7b0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00bae7d0 */
uint F_00bae7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbae7d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00bae820 */
uint F_00bae820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbae820u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 << 4,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00bae8a0 */
uint F_00bae8a0(unsigned int gen_a0)
{
  GEN_ENTER(0xbae8a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bae8d0 */
uint F_00bae8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbae8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 4,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00bae8f0 */
uint F_00bae8f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbae8f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bae900 */
uint F_00bae900(unsigned int gen_a0)
{
  GEN_ENTER(0xbae900u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00bae930 */
uint F_00bae930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbae930u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 4,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00bae950 */
uint F_00bae950(unsigned int gen_a0)
{
  GEN_ENTER(0xbae950u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bae960 */
uint F_00bae960(unsigned int gen_a0)
{
  GEN_ENTER(0xbae960u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00bae990 */
uint F_00bae990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbae990u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00bae9c0 */
uint F_00bae9c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbae9c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x20;
}

/* ref: FUN_00bae9d0 */
uint F_00bae9d0(unsigned int gen_a0)
{
  GEN_ENTER(0xbae9d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x21;
}

/* ref: FUN_00bae9e0 */
uint F_00bae9e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbae9e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bae9f0 */
uint F_00bae9f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbae9f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00baea00 */
uint F_00baea00(unsigned int gen_a0)
{
  GEN_ENTER(0xbaea00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00baea10 */
uint F_00baea10(unsigned int gen_a0)
{
  GEN_ENTER(0xbaea10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00baea20 */
uint F_00baea20(unsigned int gen_a0)
{
  GEN_ENTER(0xbaea20u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00baea40 */
uint F_00baea40(unsigned int gen_a0)
{
  GEN_ENTER(0xbaea40u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00baea80 */
uint F_00baea80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaea80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x28,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00baeae0 */
byte F_00baeae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaeae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_00baeb10 */
uint F_00baeb10(unsigned int gen_a0)
{
  GEN_ENTER(0xbaeb10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00baeb20 */
uint F_00baeb20(unsigned int gen_a0)
{
  GEN_ENTER(0xbaeb20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x11;
}

/* ref: FUN_00baeb30 */
uint F_00baeb30(unsigned int gen_a0)
{
  GEN_ENTER(0xbaeb30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00baeb40 */
uint F_00baeb40(unsigned int gen_a0)
{
  GEN_ENTER(0xbaeb40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00baeb50 */
uint F_00baeb50(unsigned int gen_a0)
{
  GEN_ENTER(0xbaeb50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00baeb60 */
uint F_00baeb60(unsigned int gen_a0)
{
  GEN_ENTER(0xbaeb60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00baeb70 */
uint F_00baeb70(unsigned int gen_a0)
{
  GEN_ENTER(0xbaeb70u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00baeb90 */
uint F_00baeb90(unsigned int gen_a0)
{
  GEN_ENTER(0xbaeb90u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00baebd0 */
uint F_00baebd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaebd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00baec30 */
uint F_00baec30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbaec30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00baec50 */
byte F_00baec50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaec50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00baec90 */
uint F_00baec90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbaec90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00baecb0 */
byte F_00baecb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaecb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00baecf0 */
byte F_00baecf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaecf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00baed20 */
byte F_00baed20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaed20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00baed40 */
unsigned int F_00baed40(unsigned int gen_a0)
{
  GEN_ENTER(0xbaed40u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00baedd0 */
uint F_00baedd0(unsigned int gen_a0)
{
  GEN_ENTER(0xbaedd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00baede0 */
uint F_00baede0(unsigned int gen_a0)
{
  GEN_ENTER(0xbaede0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00baee10 */
uint F_00baee10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaee10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00baee60 */
uint F_00baee60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbaee60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00baee70 */
uint F_00baee70(unsigned int gen_a0)
{
  GEN_ENTER(0xbaee70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00baeea0 */
uint F_00baeea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaeea0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00baef00 */
uint F_00baef00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaef00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 4,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00baef30 */
uint F_00baef30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaef30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00baef60 */
uint F_00baef60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaef60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00baefc0 */
uint F_00baefc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaefc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00baf000 */
uint F_00baf000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbaf000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00baf020 */
uint F_00baf020(unsigned int gen_a0)
{
  GEN_ENTER(0xbaf020u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00baf030 */
uint F_00baf030(unsigned int gen_a0)
{
  GEN_ENTER(0xbaf030u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00baf060 */
uint F_00baf060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaf060u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 << 4,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00baf080 */
uint F_00baf080(unsigned int gen_a0)
{
  GEN_ENTER(0xbaf080u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00baf0b0 */
uint F_00baf0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaf0b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 << 4,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00baf0d0 */
uint F_00baf0d0(unsigned int gen_a0)
{
  GEN_ENTER(0xbaf0d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00baf100 */
uint F_00baf100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaf100u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00baf180 */
uint F_00baf180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaf180u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00baf1b0 */
unsigned int F_00baf1b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbaf1b0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00baf220 */
uint F_00baf220(unsigned int gen_a0)
{
  GEN_ENTER(0xbaf220u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00baf230 */
uint F_00baf230(unsigned int gen_a0)
{
  GEN_ENTER(0xbaf230u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00baf260 */
uint F_00baf260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaf260u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 << 4,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00baf280 */
uint F_00baf280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaf280u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 4,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00baf2b0 */
byte F_00baf2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaf2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00baf2d0 */
byte F_00baf2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaf2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00baf2f0 */
uint F_00baf2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbaf2f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00baf300 */
unsigned int F_00baf300(unsigned int gen_a0)
{
  GEN_ENTER(0xbaf300u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00baf350 */
uint F_00baf350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbaf350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00baf3a0 */
uint F_00baf3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaf3a0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (uint *)0x0) {
    uVar1 = *param_2;
    *in_ecx = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00baf450 */
uint F_00baf450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaf450u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00baf480 */
uint F_00baf480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaf480u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00baf510 */
uint F_00baf510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbaf510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00baf520 */
uint F_00baf520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaf520u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_00baf540 */
uint F_00baf540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaf540u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x14,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00baf580 */
uint F_00baf580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaf580u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x25a);
  return uVar1;
}

/* ref: FUN_00baf5c0 */
uint F_00baf5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbaf5c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00baf5d0 */
uint F_00baf5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaf5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00baf5f0 */
uint F_00baf5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaf5f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x28,param_2,0x25c);
  return uVar1;
}

/* ref: FUN_00baf620 */
uint F_00baf620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaf620u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1,param_2,0x25c);
  return uVar1;
}

/* ref: FUN_00baf650 */
uint F_00baf650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbaf650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00baf660 */
uint F_00baf660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaf660u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_00baf680 */
uint F_00baf680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaf680u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x14,param_2,0x25c);
  return uVar1;
}

/* ref: FUN_00baf6b0 */
uint F_00baf6b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbaf6b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00baf6c0 */
uint F_00baf6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbaf6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00baf6d0 */
uint F_00baf6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbaf6d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00baf6e0 */
uint F_00baf6e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbaf6e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00baf6f0 */
uint F_00baf6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaf6f0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) + param_2;
  return in_ecx;
}

/* ref: FUN_00baf700 */
uint F_00baf700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbaf700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00baf710 */
uint F_00baf710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaf710u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00baf790 */
uint F_00baf790(unsigned int gen_a0)
{
  GEN_ENTER(0xbaf790u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00baf7f0 */
uint F_00baf7f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbaf7f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00baf820 */
uint F_00baf820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbaf820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00baf830 */
uint F_00baf830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaf830u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (uint *)0x0) {
    uVar1 = *param_2;
    *in_ecx = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00baf850 */
uint F_00baf850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaf850u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00baf860 */
uint F_00baf860(unsigned int gen_a0)
{
  GEN_ENTER(0xbaf860u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00baf870 */
uint F_00baf870(unsigned int gen_a0)
{
  GEN_ENTER(0xbaf870u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00baf880 */
uint F_00baf880(unsigned int gen_a0)
{
  GEN_ENTER(0xbaf880u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00baf8b0 */
uint F_00baf8b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbaf8b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00baf8e0 */
uint F_00baf8e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbaf8e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00baf900 */
uint F_00baf900(unsigned int gen_a0)
{
  GEN_ENTER(0xbaf900u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00baf930 */
uint F_00baf930(unsigned int gen_a0)
{
  GEN_ENTER(0xbaf930u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00baf980 */
uint F_00baf980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaf980u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00baf9c0 */
uint F_00baf9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaf9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00bafa00 */
uint F_00bafa00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbafa00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
  }
  return (uint)param_1;
}

/* ref: FUN_00bafa50 */
uint F_00bafa50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbafa50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00bafa90 */
unsigned int F_00bafa90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbafa90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00bafad0 */
uint F_00bafad0(unsigned int gen_a0)
{
  GEN_ENTER(0xbafad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x11) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x11) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x11) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x11) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x11);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x11);
    }
    if (*(char *)(*(int *)this + 0x11) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00bafb30 */
uint F_00bafb30(unsigned int gen_a0)
{
  GEN_ENTER(0xbafb30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x11) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x11) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x11) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x11) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x11);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x11);
    }
    if (*(char *)(*(int *)this + 0x11) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00bafba0 */
uint F_00bafba0(unsigned int gen_a0)
{
  GEN_ENTER(0xbafba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x21) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x21) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x21) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x21) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x21);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x21);
    }
    if (*(char *)(*(int *)this + 0x21) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00bafc10 */
uint F_00bafc10(unsigned int gen_a0)
{
  GEN_ENTER(0xbafc10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bafc20 */
uint F_00bafc20(unsigned int gen_a0)
{
  GEN_ENTER(0xbafc20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bafc30 */
uint F_00bafc30(unsigned int gen_a0)
{
  GEN_ENTER(0xbafc30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bafc40 */
uint F_00bafc40(unsigned int gen_a0)
{
  GEN_ENTER(0xbafc40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bafc50 */
uint F_00bafc50(unsigned int gen_a0)
{
  GEN_ENTER(0xbafc50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bafc60 */
uint F_00bafc60(unsigned int gen_a0)
{
  GEN_ENTER(0xbafc60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bafc90 */
uint F_00bafc90(unsigned int gen_a0)
{
  GEN_ENTER(0xbafc90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bafcd0 */
uint F_00bafcd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbafcd0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00bafd00 */
uint F_00bafd00(unsigned int gen_a0)
{
  GEN_ENTER(0xbafd00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bafd10 */
uint F_00bafd10(unsigned int gen_a0)
{
  GEN_ENTER(0xbafd10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bafd20 */
uint F_00bafd20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbafd20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00bafd50 */
uint F_00bafd50(unsigned int gen_a0)
{
  GEN_ENTER(0xbafd50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bafd60 */
uint F_00bafd60(unsigned int gen_a0)
{
  GEN_ENTER(0xbafd60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bafd70 */
uint F_00bafd70(unsigned int gen_a0)
{
  GEN_ENTER(0xbafd70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bafd90 */
uint F_00bafd90(unsigned int gen_a0)
{
  GEN_ENTER(0xbafd90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bafda0 */
uint F_00bafda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbafda0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00bafdc0 */
uint F_00bafdc0(unsigned int gen_a0)
{
  GEN_ENTER(0xbafdc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bafdd0 */
uint F_00bafdd0(unsigned int gen_a0)
{
  GEN_ENTER(0xbafdd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bafde0 */
uint F_00bafde0(unsigned int gen_a0)
{
  GEN_ENTER(0xbafde0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bafdf0 */
uint F_00bafdf0(unsigned int gen_a0)
{
  GEN_ENTER(0xbafdf0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bafe90 */
uint F_00bafe90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbafe90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00bafeb0 */
uint F_00bafeb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbafeb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00bafed0 */
uint F_00bafed0(unsigned int gen_a0)
{
  GEN_ENTER(0xbafed0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bafee0 */
uint F_00bafee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbafee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00baff00 */
uint F_00baff00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbaff00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00baff20 */
uint F_00baff20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaff20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00baff40 */
uint F_00baff40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaff40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00baff60 */
uint F_00baff60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaff60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00baff90 */
uint F_00baff90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbaff90u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00baffc0 */
uint F_00baffc0(unsigned int gen_a0)
{
  GEN_ENTER(0xbaffc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00baffd0 */
uint F_00baffd0(unsigned int gen_a0)
{
  GEN_ENTER(0xbaffd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00baffe0 */
uint F_00baffe0(unsigned int gen_a0)
{
  GEN_ENTER(0xbaffe0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bb0020 */
uint F_00bb0020(unsigned int gen_a0)
{
  GEN_ENTER(0xbb0020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x110469c));
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined4 *)((int)this + 8) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  return (uint)this;
}

/* ref: FUN_00bb0080 */
uint F_00bb0080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb0080u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: Client::Network::Socket::SocketBase::vf0 */
uint F_00bb00a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb00a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x110469c));
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0xc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bb00e0 */
byte F_00bb00e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb00e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * pvVar1;
  
  if (param_1 != (undefined *)0x0) {
    pvVar1 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar1 = *(undefined * PTR32 *)this;
    }
    if (pvVar1 <= param_1) {
      pvVar1 = this;
      if (0xf < *(uint *)((int)this + 0x14)) {
        pvVar1 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + (int)pvVar1)))) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00bb0130 */
unsigned int F_00bb0130(unsigned int gen_a0)
{
  GEN_ENTER(0xbb0130u, gen_a0, 0u, 0u, 0u);
  LONG param_1 = (LONG)gen_a0;
  LONG * in_ECX = 0;
  
  gen_imp_InterlockedExchange(in_ECX,param_1);
  return 0;
}

/* ref: FUN_00bb0150 */
uint F_00bb0150(unsigned int gen_a0)
{
  GEN_ENTER(0xbb0150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x110469c));
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined4 *)((int)this + 8) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x11046ec));
  *(undefined1 *)((int)this + 0x24) = 0;
  return (uint)this;
}

/* ref: Client::Network::Socket::SocketWinsock::vf0 */
uint F_00bb01a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb01a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[18])REFP(0x110469c));
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0xc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bb01e0 */
uint F_00bb01e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb01e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  LOCK();
  uVar1 = *(uint *)(in_ecx + 0x98);
  *(uint *)(in_ecx + 0x98) = param_2;
  UNLOCK();
  return uVar1;
}

/* ref: FUN_00bb0210 */
uint F_00bb0210(unsigned int gen_a0)
{
  GEN_ENTER(0xbb0210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __time64_t _Var1;
  ulonglong uVar2;
  
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)this = (int)_Var1;
  uVar2 = F_00427d90();
  *(ulonglong *)((int)this + 8) = uVar2;
  uVar2 = F_00427e30();
  *(ulonglong *)((int)this + 0x10) = uVar2;
  *(undefined1 *)((int)this + 0x18) = 1;
  return (uint)uVar2;
}

/* ref: FUN_00bb0240 */
uint F_00bb0240(unsigned int gen_a0)
{
  GEN_ENTER(0xbb0240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  if (*(char *)((int)this + 0x18) != '\0') {
    uVar1 = F_00427d90();
    return (int)uVar1 - *(int *)((int)this + 8);
  }
  return 0;
}

/* ref: FUN_00bb0280 */
byte F_00bb0280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb0280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00bb02b0 */
uint F_00bb02b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbb02b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bae660(this);
  return (uint)this;
}

/* ref: FUN_00bb0320 */
byte F_00bb0320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb0320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00bb0350 */
byte F_00bb0350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb0350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00bb0380 */
byte F_00bb0380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb0380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00bb03c0 */
uint F_00bb03c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbb03c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00baed40(this);
  return (uint)this;
}

/* ref: FUN_00bb03d0 */
byte F_00bb03d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb03d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00bb0400 */
unsigned int F_00bb0400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb0400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    *(int *)((int)this + 4) = param_1;
    *(undefined4 * PTR32 *)this = puVar1;
    return 0;
  }
  *(int *)((int)this + 4) = param_1;
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00bb0450 */
uint F_00bb0450(unsigned int gen_a0)
{
  GEN_ENTER(0xbb0450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)this;
  if ((piVar2 != (int *)0x0) && (*(int *)((int)this + 4) != 0)) {
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      piVar2 = (int *)F_00406ad0(*(undefined4 *)this);
      puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
      if (puVar1 != (undefined4 *)0x0) {
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*puVar1)(puVar1,1)));
      }
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  return (uint)piVar2;
}

/* ref: FUN_00bb0490 */
unsigned int F_00bb0490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb0490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    *(int *)((int)this + 4) = param_1;
    *(undefined4 * PTR32 *)this = puVar1;
    return 0;
  }
  *(int *)((int)this + 4) = param_1;
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00bb04e0 */
uint F_00bb04e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb04e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(int *)*param_1 = *(int *)*param_1 + 1;
  *(undefined4 *)this = *param_1;
  uVar1 = param_1[1];
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00bb0500 */
uint F_00bb0500(unsigned int gen_a0)
{
  GEN_ENTER(0xbb0500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)this;
  if ((piVar2 != (int *)0x0) && (*(int *)((int)this + 4) != 0)) {
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      piVar2 = (int *)F_00406ad0(*(undefined4 *)this);
      puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
      if (puVar1 != (undefined4 *)0x0) {
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*puVar1)(puVar1,1)));
      }
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  return (uint)piVar2;
}

/* ref: FUN_00bb0540 */
unsigned int F_00bb0540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb0540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    *(int *)((int)this + 4) = param_1;
    *(undefined4 * PTR32 *)this = puVar1;
    return 0;
  }
  *(int *)((int)this + 4) = param_1;
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00bb0590 */
uint F_00bb0590(unsigned int gen_a0)
{
  GEN_ENTER(0xbb0590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)this;
  if ((piVar2 != (int *)0x0) && (*(int *)((int)this + 4) != 0)) {
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      piVar2 = (int *)F_00406ad0(*(undefined4 *)this);
      puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
      if (puVar1 != (undefined4 *)0x0) {
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*puVar1)(puVar1,1)));
      }
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  return (uint)piVar2;
}

/* ref: FUN_00bb0600 */
uint F_00bb0600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb0600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb0640 */
uint F_00bb0640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb0640u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00bb06d0 */
uint F_00bb06d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb06d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00bb06f0 */
uint F_00bb06f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb06f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb0700 */
byte F_00bb0700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb0700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00bb0750 */
uint F_00bb0750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb0750u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00bb07b0 */
uint F_00bb07b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbb07b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00bb07f0 */
uint F_00bb07f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbb07f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00baf1b0(this);
  return (uint)this;
}

/* ref: FUN_00bb0800 */
unsigned int F_00bb0800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb0800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    *(int *)((int)this + 4) = param_1;
    *(undefined4 * PTR32 *)this = puVar1;
    return 0;
  }
  *(int *)((int)this + 4) = param_1;
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00bb0850 */
uint F_00bb0850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb0850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(int *)*param_1 = *(int *)*param_1 + 1;
  *(undefined4 *)this = *param_1;
  uVar1 = param_1[1];
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00bb0870 */
uint F_00bb0870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb0870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(int *)*param_1 = *(int *)*param_1 + 1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00bb08c0 */
uint F_00bb08c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb08c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00bb0920 */
unsigned int F_00bb0920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb0920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  puVar1 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    *(int *)((int)this + 4) = param_1;
    *(undefined4 * PTR32 *)this = puVar1;
    return 0;
  }
  *(int *)((int)this + 4) = param_1;
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00bb0970 */
uint F_00bb0970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb0970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(int *)*param_1 = *(int *)*param_1 + 1;
  *(undefined4 *)this = *param_1;
  uVar1 = param_1[1];
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00bb09c0 */
uint F_00bb09c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb09c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb09d0 */
uint F_00bb09d0(unsigned int gen_a0)
{
  GEN_ENTER(0xbb09d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00baf300(this);
  return (uint)this;
}

/* ref: FUN_00bb09e0 */
uint F_00bb09e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb09e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb0a30 */
byte F_00bb0a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb0a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) == *(int *)(param_1 + 8);
}

/* ref: FUN_00bb0ae0 */
uint F_00bb0ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb0ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bb0b20 */
uint F_00bb0b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb0b20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb0b50 */
uint F_00bb0b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb0b50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bb0b70 */
uint F_00bb0b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb0b70u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00bb0ba0 */
uint F_00bb0ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb0ba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb0bb0 */
uint F_00bb0bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb0bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00bb0c00 */
uint F_00bb0c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb0c00u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00bb0c60 */
uint F_00bb0c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb0c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)this;
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

/* ref: FUN_00bb0c90 */
uint F_00bb0c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb0c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb0ca0 */
uint F_00bb0ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb0ca0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00bb0cc0 */
uint F_00bb0cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb0cc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb0cd0 */
uint F_00bb0cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb0cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb0ce0 */
uint F_00bb0ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb0ce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb0cf0 */
uint F_00bb0cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb0cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00baf300(this);
  return (uint)param_1;
}

/* ref: FUN_00bb0d10 */
uint F_00bb0d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb0d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00baed40(this);
  return (uint)param_1;
}

/* ref: FUN_00bb0d30 */
uint F_00bb0d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb0d30u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) - param_2;
  return in_ecx;
}

/* ref: FUN_00bb0d40 */
uint F_00bb0d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb0d40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return (uint)this;
}

/* ref: FUN_00bb0d80 */
uint F_00bb0d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb0d80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb0d90 */
uint F_00bb0d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb0d90u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb0db0 */
uint F_00bb0db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb0db0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00bb0e20 */
uint F_00bb0e20(unsigned int gen_a0)
{
  GEN_ENTER(0xbb0e20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00bb0e80 */
uint F_00bb0e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb0e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00baf1b0(this);
  return (uint)param_1;
}

/* ref: FUN_00bb0ea0 */
uint F_00bb0ea0(unsigned int gen_a0)
{
  GEN_ENTER(0xbb0ea0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00bb0ed0 */
byte F_00bb0ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb0ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00bb0ef0 */
uint F_00bb0ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb0ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bb0f00 */
uint F_00bb0f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb0f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return (uint)this;
}

/* ref: FUN_00bb0f80 */
uint F_00bb0f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb0f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
  }
  return (uint)param_2;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00bb1010 */
unsigned int F_00bb1010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb1010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00bb1030 */
uint F_00bb1030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb1030u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00bb1060 */
uint F_00bb1060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb1060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00bb1080 */
uint F_00bb1080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb1080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00bb10a0 */
uint F_00bb10a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb10a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00bb10d0 */
uint F_00bb10d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb10d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00bb1100 */
uint F_00bb1100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb1100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00bb1120 */
unsigned int F_00bb1120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb1120u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *(int *)*param_2 = *(int *)*param_2 + 1;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  return 0;
}

/* ref: FUN_00bb1140 */
uint F_00bb1140(unsigned int gen_a0)
{
  GEN_ENTER(0xbb1140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bafad0(this);
  return (uint)this;
}

/* ref: FUN_00bb1150 */
uint F_00bb1150(unsigned int gen_a0)
{
  GEN_ENTER(0xbb1150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bafb30(this);
  return (uint)this;
}

/* ref: FUN_00bb1170 */
uint F_00bb1170(unsigned int gen_a0)
{
  GEN_ENTER(0xbb1170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bafba0(this);
  return (uint)this;
}

/* ref: FUN_00bb1190 */
uint F_00bb1190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb1190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00bb11b0 */
uint F_00bb11b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb11b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00bb11d0 */
uint F_00bb11d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb11d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00bb11f0 */
uint F_00bb11f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb11f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,0x25a);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_1;
  }
  return (uint)puVar1;
}

/* ref: FUN_00bb1240 */
unsigned int F_00bb1240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbb1240u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  
  if (param_1 != param_2) {
    iVar5 = *param_3;
    piVar4 = param_1;
    do {
      iVar5 = iVar5 + 1;
      *param_3 = iVar5;
      if (*(char *)((int)piVar4 + 0x11) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x11);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x11);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x11);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != param_2);
  }
  return 0;
}

/* ref: FUN_00bb12b0 */
unsigned int F_00bb12b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbb12b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  
  if (param_1 != param_2) {
    iVar5 = *param_3;
    piVar4 = param_1;
    do {
      iVar5 = iVar5 + 1;
      *param_3 = iVar5;
      if (*(char *)((int)piVar4 + 0x11) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x11);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x11);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x11);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != param_2);
  }
  return 0;
}

