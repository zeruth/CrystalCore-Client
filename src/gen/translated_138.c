#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00bb5150 */
uint F_00bb5150(unsigned int gen_a0)
{
  GEN_ENTER(0xbb5150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00bb4740(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00bb5190 */
uint F_00bb5190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb5190u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00bb2410((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x4)),(*(uint *)&gen_args[1]));
  (*(uint *)&gen_args[1]) = 0;
  F_00bb12b0((*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]),0);
  F_00bb4740((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00bb51f0 */
uint F_00bb51f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb51f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  ulonglong uVar9;
  
  uVar6 = *(uint *)((int)this + 8);
  if (-uVar6 - 1 < param_1) {
                    
    F_00c4579a("deque<T> too long");
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= -uVar7 - 1)) {
    param_1 = uVar7;
  }
  uVar7 = *(uint *)((int)this + 0xc);
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,0x25a);
  iVar5 = *(int *)((int)this + 8);
  iVar2 = *(int *)((int)this + 4);
  puVar8 = puVar3 + uVar7;
  for (puVar4 = (undefined4 *)(iVar2 + uVar7 * 4); puVar4 != (undefined4 *)(iVar2 + iVar5 * 4);
      puVar4 = puVar4 + 1) {
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *puVar4;
    }
    puVar8 = puVar8 + 1;
  }
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if (param_1 < uVar7) {
    puVar1 = puVar4 + param_1;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    iVar5 = *(int *)((int)this + 4);
    puVar8 = puVar3;
    for (puVar4 = (undefined4 *)(iVar5 + param_1 * 4); uVar6 = param_1,
        puVar4 != (undefined4 *)(iVar5 + uVar7 * 4); puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
  }
  else {
    puVar1 = puVar4 + uVar7;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (iVar5 = param_1 - uVar7; puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 + -1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
  }
  uVar6 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x25a);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_00bb5360 */
uint F_00bb5360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb5360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0x10,0,0x25a);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    *(int *)*param_2 = *(int *)*param_2 + 1;
    piVar2[2] = *param_2;
    piVar2[3] = param_2[1];
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00bb53e0 */
uint F_00bb53e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb53e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0x10,0,0x25a);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    *(int *)*param_2 = *(int *)*param_2 + 1;
    piVar2[2] = *param_2;
    piVar2[3] = param_2[1];
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00bb5460 */
uint F_00bb5460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb5460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0x25a);
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x25a);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_00bb5510 */
uint F_00bb5510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb5510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined1 * puVar3;
  undefined1 * puVar4;
  undefined1 * puVar5;
  undefined1 * puVar6;
  
  puVar5 = param_1;
  if (((undefined1 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)this))) < param_1) {
    puVar3 = (undefined1 *)F_004296a0(param_1,0,0x25c);
    puVar5 = *(undefined1 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined1 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined1 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,*(int *)((int)this + 8) - iVar1,0x25c);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined1 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1);
    *(undefined1 * PTR32 *)this = puVar3;
    *(undefined1 * PTR32 *)((int)this + 8) = puVar5;
  }
  return (uint)puVar5;
}

/* ref: FUN_00bb55a0 */
uint F_00bb55a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb55a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_2 + 8);
  if ((piVar2 != (int *)0x0) && (*(int *)(param_2 + 0xc) != 0)) {
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      piVar2 = (int *)F_00406ad0(*(undefined4 *)(param_2 + 8));
      puVar1 = *(undefined4 * PTR32 *)(param_2 + 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*puVar1)(puVar1,1)));
      }
    }
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  return (uint)piVar2;
}

/* ref: FUN_00bb55f0 */
uint F_00bb55f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbb55f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  if ((piVar2 != (int *)0x0) && (*(int *)(param_1 + 0xc) != 0)) {
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      piVar2 = (int *)F_00406ad0(*(undefined4 *)(param_1 + 8));
      puVar1 = *(undefined4 * PTR32 *)(param_1 + 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*puVar1)(puVar1,1)));
      }
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return (uint)piVar2;
}

/* ref: FUN_00bb5640 */
uint F_00bb5640(unsigned int gen_a0)
{
  GEN_ENTER(0xbb5640u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(param_1 + 8);
  if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0xc) != 0)) {
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)(param_1 + 8));
      piVar1 = (int *)0x0;
      if (*(int *)(param_1 + 0xc) != 0) {
        piVar1 = (int *)F_00406ad0(*(int *)(param_1 + 0xc));
      }
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return (uint)piVar1;
}

/* ref: FUN_00bb5690 */
unsigned int F_00bb5690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb5690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    *(int *)param_3[2] = *(int *)param_3[2] + 1;
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
  }
  return 0;
}

/* ref: FUN_00bb56c0 */
uint F_00bb56c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb56c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  if (param_1 != (undefined *)0x0) {
    uVar1 = *(uint *)((int)this + 0x14);
    pvVar2 = this;
    if (0xf < uVar1) {
      pvVar2 = *(undefined * PTR32 *)this;
    }
    if (pvVar2 <= param_1) {
      pvVar2 = this;
      if (0xf < uVar1) {
        pvVar2 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + (int)pvVar2)))) {
        if (0xf < uVar1) {
          uVar1 = F_00bb4bd0(this,this,(int)param_1 - *(int *)this,param_2);
          return uVar1;
        }
        uVar1 = F_00bb4bd0(this,this,(int)param_1 - (int)this,param_2);
        return uVar1;
      }
    }
  }
  if (param_2 == 0xffffffff) {
                    
    F_00c4579a("string too long");
  }
  if (*(uint *)((int)this + 0x14) < param_2) {
    F_00a16590(this,param_2,*(undefined4 *)((int)this + 0x10));
    if (param_2 == 0) {
      return (uint)this;
    }
  }
  else if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (0xf < *(uint *)((int)this + 0x14)) {
      **(undefined1 * PTR32 *)this = 0;
      return (uint)this;
    }
    *(undefined1 *)this = 0;
    return (uint)this;
  }
  pvVar2 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
    pvVar2 = *(undefined * PTR32 *)this;
  }
  F_00c46aa0(pvVar2,param_1,param_2);
  *(uint *)((int)this + 0x10) = param_2;
  if (*(uint *)((int)this + 0x14) < 0x10) {
    *(undefined1 *)((int)this + param_2) = 0;
    return (uint)this;
  }
  *(undefined1 *)(*(int *)this + param_2) = 0;
  return (uint)this;
}

/* ref: Client::Network::Socket::PollerBase::vf3 */
unsigned int F_00bb57c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbb57c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x2c));
  iVar3 = *(int *)(this + 0x24);
  while (iVar3 != 0) {
    if (*(int * PTR32 *)(this + 0x14) == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = **(int * PTR32 *)(this + 0x14);
    }
    uVar2 = *(uint *)(this + 0x20) >> 2;
    if (*(uint *)(iVar3 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar3 + 8);
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4))) + (*(uint *)(this + 0x20) & 3) * 4)));
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
    if (*(int *)(this + 0x24) != 0) {
      *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
      if ((uint)(*(int *)(this + 0x1c) * 4) <= *(uint *)(this + 0x20)) {
        *(undefined4 *)(this + 0x20) = 0;
      }
      iVar3 = *(int *)(this + 0x24) + -1;
      *(int *)(this + 0x24) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)(this + 0x20) = 0;
      }
    }
    iVar3 = *(int *)(this + 0x24);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x2c));
  return 0;
}

/* ref: Client::Network::Socket::PollerBase::PeerSocket::vf0 */
uint F_00bb5870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb5870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1104784));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Network::Socket::PollerImpl::vf4 */
uint F_00bb58e0(void)
{
  GEN_ENTER(0xbb58e0u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00406b90(0xc,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1104794));
    return (uint)puVar1;
  }
  return 0;
}

/* ref: Client::Network::Socket::PollerWinsock::PeerSocket::vf0 */
uint F_00bb5920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb5920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1104784));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Network::Socket::PollerImpl::PeerSocket::vf0 */
uint F_00bb5950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb5950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1104784));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bb5980 */
uint F_00bb5980(unsigned int gen_a0)
{
  GEN_ENTER(0xbb5980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00bb4740(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00bb59c0 */
uint F_00bb59c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbb59c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00bb4600(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00bb5a40 */
uint F_00bb5a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb5a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    F_00bb51f0(this,1);
  }
  uVar4 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) == 0) {
    uVar2 = F_004296a0(0x10,0,0x25a);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) = uVar2;
  }
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  puVar1 = (undefined4 *)puVar3[uVar4];
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
    puVar3 = param_1;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return (uint)puVar3;
}

/* ref: FUN_00bb5ac0 */
uint F_00bb5ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb5ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0x10,0,0x25a);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    *(int *)*param_1 = *(int *)*param_1 + 1;
    piVar3[2] = *param_1;
    piVar3[3] = param_1[1];
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_00bb5b30 */
uint F_00bb5b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb5b30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    piVar2 = (int *)param_2[2];
    if ((piVar2 != (int *)0x0) && (param_2[3] != 0)) {
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        F_00406ad0(param_2[2]);
        puVar3 = (undefined4 *)param_2[3];
        if (puVar3 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
        }
      }
      param_2[2] = 0;
      param_2[3] = 0;
    }
    F_00429760(param_2,0x10,0x25a);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00bb5bf0 */
uint F_00bb5bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb5bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0x10,0,0x25a);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    *(int *)*param_1 = *(int *)*param_1 + 1;
    piVar3[2] = *param_1;
    piVar3[3] = param_1[1];
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_00bb5c60 */
uint F_00bb5c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb5c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00bb5460(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00bb5460(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00bb5cd0 */
uint F_00bb5cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb5cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)this;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)this;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00bb5510(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00bb5510(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00bb5d30 */
uint F_00bb5d30(unsigned int gen_a0)
{
  GEN_ENTER(0xbb5d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  int * piVar5;
  ulonglong uVar6;
  
  piVar1 = *(int * PTR32 *)this;
  piVar5 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  uVar4 = *(uint *)this;
  *(uint *)(uVar4 + 4) = uVar4;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar5 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)piVar5[2];
      piVar2 = (int *)*piVar5;
      if ((piVar1 != (int *)0x0) && (piVar5[3] != 0)) {
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          F_00406ad0(piVar5[2]);
          puVar3 = (undefined4 *)piVar5[3];
          if (puVar3 != (undefined4 *)0x0) {
            ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
          }
        }
        piVar5[2] = 0;
        piVar5[3] = 0;
      }
      uVar6 = F_00429760(piVar5,0x10,0x25a);
      uVar4 = (uint)uVar6;
      piVar5 = piVar2;
    } while (piVar2 != (int *)*(int *)this);
  }
  return uVar4;
}

/* ref: FUN_00bb5da0 */
uint F_00bb5da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb5da0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_2 + 8);
  if ((piVar2 != (int *)0x0) && (*(int *)(param_2 + 0xc) != 0)) {
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      piVar2 = (int *)F_00406ad0(*(undefined4 *)(param_2 + 8));
      puVar1 = *(undefined4 * PTR32 *)(param_2 + 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*puVar1)(puVar1,1)));
      }
    }
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  return (uint)piVar2;
}

/* ref: FUN_00bb5df0 */
uint F_00bb5df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb5df0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(param_2 + 8);
  if ((piVar1 != (int *)0x0) && (*(int *)(param_2 + 0xc) != 0)) {
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)(param_2 + 8));
      piVar1 = (int *)0x0;
      if (*(int *)(param_2 + 0xc) != 0) {
        piVar1 = (int *)F_00406ad0(*(int *)(param_2 + 0xc));
      }
    }
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  return (uint)piVar1;
}

/* ref: FUN_00bb5e40 */
uint F_00bb5e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbb5e40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  int * piVar7;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    piVar5 = (int *)param_4[6];
    if ((piVar5 != (int *)0x0) && (param_4[7] != 0)) {
      *piVar5 = *piVar5 + -1;
      if (*piVar5 == 0) {
        F_00406ad0(param_4[6]);
        puVar2 = (undefined4 *)param_4[7];
        if (puVar2 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        }
      }
      param_4[6] = 0;
      param_4[7] = 0;
    }
    F_00429760(param_4,0x28,0x25c);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
  }
  else if ((char)param_2 == '\0') {
    param_3[2] = param_4;
    if (param_3 == *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
    }
  }
  else {
    *param_3 = param_4;
    if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
      **(int * PTR32 *)((int)this + 4) = (int)param_4;
    }
  }
  cVar1 = *(char *)(param_4[1] + 0x20);
  piVar5 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar3 + 0x20) = 1;
      return (uint)param_1;
    }
    piVar6 = (int *)piVar5[1];
    piVar7 = (int *)piVar6[1];
    if (piVar6 == (int *)*piVar7) {
      iVar3 = piVar7[2];
      if (*(char *)(iVar3 + 0x20) == '\0') {
        *(undefined1 *)(piVar6 + 8) = 1;
        *(undefined1 *)(iVar3 + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar5[1] + 4) + 0x20))) = 0;
        piVar5 = *(int * PTR32 *)(piVar5[1] + 4);
      }
      else {
        if (piVar5 == (int *)piVar6[2]) {
          piVar5 = (int *)piVar6[2];
          piVar6[2] = *piVar5;
          if (*(char *)(*piVar5 + 0x21) == '\0') {
            *(int * PTR32 *)(*piVar5 + 4) = piVar6;
          }
          piVar5[1] = piVar6[1];
          if (piVar6 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar5;
          }
          else {
            piVar7 = (int *)piVar6[1];
            if (piVar6 == (int *)*piVar7) {
              *piVar7 = (int)piVar5;
            }
            else {
              piVar7[2] = (int)piVar5;
            }
          }
          *piVar5 = (int)piVar6;
          piVar6[1] = (int)piVar5;
          piVar5 = piVar6;
        }
        *(undefined1 *)(piVar5[1] + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar5[1] + 4) + 0x20))) = 0;
        piVar6 = *(int * PTR32 *)(piVar5[1] + 4);
        piVar7 = (int *)*piVar6;
        *piVar6 = piVar7[2];
        if (*(char *)(piVar7[2] + 0x21) == '\0') {
          *(int * PTR32 *)(piVar7[2] + 4) = piVar6;
        }
        piVar7[1] = piVar6[1];
        if (piVar6 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar7;
          piVar7[2] = (int)piVar6;
        }
        else {
          piVar4 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar4[2]) {
            piVar4[2] = (int)piVar7;
            piVar7[2] = (int)piVar6;
          }
          else {
            *piVar4 = (int)piVar7;
            piVar7[2] = (int)piVar6;
          }
        }
LAB_00bb606d: ;
        piVar6[1] = (int)piVar7;
      }
    }
    else {
      iVar3 = *piVar7;
      if (*(char *)(iVar3 + 0x20) != '\0') {
        if (piVar5 == (int *)*piVar6) {
          iVar3 = *piVar6;
          *piVar6 = *(int *)(iVar3 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar3 + 8) + 0x21))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar3 + 8) + 4))) = piVar6;
          }
          *(int *)(iVar3 + 4) = piVar6[1];
          if (piVar6 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar3;
          }
          else {
            piVar5 = (int *)piVar6[1];
            if (piVar6 == (int *)piVar5[2]) {
              piVar5[2] = iVar3;
            }
            else {
              *piVar5 = iVar3;
            }
          }
          *(int * PTR32 *)(iVar3 + 8) = piVar6;
          piVar6[1] = iVar3;
          piVar5 = piVar6;
        }
        *(undefined1 *)(piVar5[1] + 0x20) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar5[1] + 4) + 0x20))) = 0;
        piVar6 = *(int * PTR32 *)(piVar5[1] + 4);
        piVar7 = (int *)piVar6[2];
        piVar6[2] = *piVar7;
        if (*(char *)(*piVar7 + 0x21) == '\0') {
          *(int * PTR32 *)(*piVar7 + 4) = piVar6;
        }
        piVar7[1] = piVar6[1];
        if (piVar6 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar7;
        }
        else {
          piVar4 = (int *)piVar6[1];
          if (piVar6 == (int *)*piVar4) {
            *piVar4 = (int)piVar7;
          }
          else {
            piVar4[2] = (int)piVar7;
          }
        }
        *piVar7 = (int)piVar6;
        goto LAB_00bb606d;
      }
      *(undefined1 *)(piVar6 + 8) = 1;
      *(undefined1 *)(iVar3 + 0x20) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar5[1] + 4) + 0x20))) = 0;
      piVar5 = *(int * PTR32 *)(piVar5[1] + 4);
    }
    cVar1 = *(char *)(piVar5[1] + 0x20);
  } while( true );
}

/* ref: FUN_00bb60a0 */
uint F_00bb60a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb60a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x28,0,0x25c);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 8) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    puVar1[4] = *param_1;
    puVar1[5] = param_1[1];
    *(int *)param_1[2] = *(int *)param_1[2] + 1;
    puVar1[6] = param_1[2];
    puVar1[7] = param_1[3];
  }
  return (uint)puVar1;
}

/* ref: FUN_00bb6100 */
uint F_00bb6100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb6100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00bb56c0(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_00bb6170 */
uint F_00bb6170(unsigned int gen_a0)
{
  GEN_ENTER(0xbb6170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00bb4600(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00bb61b0 */
uint F_00bb61b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb61b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00bb56c0(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_00bb61e0 */
uint F_00bb61e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb61e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  iVar3 = *(int *)((int)this + 4);
  uVar2 = iVar3 - *(int *)((int)(uintptr_t)this) >> 2;
  if (param_1 < uVar2) {
    iVar1 = *(int *)this + param_1 * 4;
    if (iVar1 != iVar3) {
      uVar2 = F_00c46e20(iVar1,iVar3,0);
      *(int *)((int)this + 4) = iVar1;
      return uVar2;
    }
  }
  else if (uVar2 < param_1) {
    F_00bb5c60(this,param_1 - uVar2);
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar3 = param_1 - ((int)puVar4 - *(int *)((int)(uintptr_t)this) >> 2); iVar3 != 0; iVar3 = iVar3 + -1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
    uVar2 = *(uint *)((int)this + 4);
    *(uint *)((int)this + 4) = uVar2 + (param_1 - ((int)(uVar2 - *(int *)this) >> 2)) * 4;
  }
  return uVar2;
}

/* ref: FUN_00bb6270 */
uint F_00bb6270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb6270u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x21))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00baf1b0(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x21) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x21) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x21) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar3[2];
        *(int * PTR32 *)(piVar3[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar2 = (undefined4 *)piVar3[1];
        if ((int *)*puVar2 == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[2])[8];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 8))) = (char)piVar3[8];
      *(char *)(piVar3 + 8) = (char)iVar1;
      goto LAB_00bb6392;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x21) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar7;
  }
  else if ((int *)*piVar6 == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*(char *)((int)piVar7 + 0x21) == '\0') {
      piVar4 = (int *)F_00baea40(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x21) == '\0') {
      uVar5 = F_00baea20(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00bb6392: ;
  if ((char)piVar3[8] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[8] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[8] == '\0') {
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(piVar4 + 8) = 0;
            F_00bb1d90((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x21) == '\0') {
            if ((*(char *)(*piVar6 + 0x20) != '\x01') || (*(char *)(piVar6[2] + 0x20) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x20) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x20) = 1;
                *(undefined1 *)(piVar6 + 8) = 0;
                F_00bb0750((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 8) = (char)piVar4[8];
              *(undefined1 *)(piVar4 + 8) = 1;
              *(undefined1 *)(piVar6[2] + 0x20) = 1;
              F_00bb1d90((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_00bb645c: ;
            *(undefined1 *)(piVar6 + 8) = 0;
          }
        }
        else {
          if ((char)piVar6[8] == '\0') {
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(piVar4 + 8) = 0;
            F_00bb0750((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x21) == '\0') {
            if ((*(char *)(piVar6[2] + 0x20) == '\x01') && (*(char *)(*piVar6 + 0x20) == '\x01'))
            goto LAB_00bb645c;
            if (*(char *)(*piVar6 + 0x20) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x20) = 1;
              *(undefined1 *)(piVar6 + 8) = 0;
              F_00bb1d90((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 8) = (char)piVar4[8];
            *(undefined1 *)(piVar4 + 8) = 1;
            *(undefined1 *)(*piVar6 + 0x20) = 1;
            F_00bb0750((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 8) = 1;
  }
  piVar6 = (int *)piVar3[6];
  if ((piVar6 != (int *)0x0) && (piVar3[7] != 0)) {
    *piVar6 = *piVar6 + -1;
    if (*piVar6 == 0) {
      F_00406ad0(piVar3[6]);
      puVar2 = (undefined4 *)piVar3[7];
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      }
    }
    piVar3[6] = 0;
    piVar3[7] = 0;
  }
  F_00429760(piVar3,0x28,0x25c);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00bb6510 */
uint F_00bb6510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb6510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 * puVar4;
  
  iVar3 = *(int *)((int)this + 4);
  uVar2 = *(uint *)this;
  if (param_1 < iVar3 - uVar2) {
    iVar1 = uVar2 + param_1;
    if (iVar1 != iVar3) {
      uVar2 = F_00c46e20(iVar1,iVar3,0);
      *(int *)((int)this + 4) = iVar1;
    }
  }
  else if (iVar3 - uVar2 < param_1) {
    F_00bb5cd0(this,(uVar2 - iVar3) + param_1);
    puVar4 = *(undefined1 * PTR32 *)((int)this + 4);
    for (iVar3 = (*(int *)this - (int)puVar4) + param_1; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
    *(uint *)((int)this + 4) = *(int *)this + param_1;
    return *(int *)this + param_1;
  }
  return uVar2;
}

/* ref: FUN_00bb6590 */
uint F_00bb6590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb6590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    piVar2 = (int *)param_2[2];
    if ((piVar2 != (int *)0x0) && (param_2[3] != 0)) {
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        F_00406ad0(param_2[2]);
        if (param_2[3] != 0) {
          F_00406ad0(param_2[3]);
        }
      }
      param_2[2] = 0;
      param_2[3] = 0;
    }
    F_00429760(param_2,0x10,0x25a);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
    *param_1 = iVar1;
    return (uint)param_1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00bb6620 */
uint F_00bb6620(unsigned int gen_a0)
{
  GEN_ENTER(0xbb6620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  ulonglong uVar5;
  
  piVar1 = *(int * PTR32 *)this;
  piVar4 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  uVar3 = *(uint *)this;
  *(uint *)(uVar3 + 4) = uVar3;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar4 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)piVar4[2];
      piVar2 = (int *)*piVar4;
      if ((piVar1 != (int *)0x0) && (piVar4[3] != 0)) {
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          F_00406ad0(piVar4[2]);
          if (piVar4[3] != 0) {
            F_00406ad0(piVar4[3]);
          }
        }
        piVar4[2] = 0;
        piVar4[3] = 0;
      }
      uVar5 = F_00429760(piVar4,0x10,0x25a);
      uVar3 = (uint)uVar5;
      piVar4 = piVar2;
    } while (piVar2 != (int *)*(int *)this);
  }
  return uVar3;
}

/* ref: FUN_00bb66a0 */
unsigned int F_00bb66a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb66a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  undefined4 * puVar4;
  int * piVar5;
  
  cVar1 = *(char *)((int)param_1 + 0x21);
  piVar5 = param_1;
  while (cVar1 == '\0') {
    F_00bb66a0(this,(int *)piVar5[2]);
    piVar2 = (int *)piVar5[6];
    piVar3 = (int *)*piVar5;
    if ((piVar2 != (int *)0x0) && (piVar5[7] != 0)) {
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        F_00406ad0(piVar5[6]);
        puVar4 = (undefined4 *)piVar5[7];
        if (puVar4 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
        }
      }
      piVar5[6] = 0;
      piVar5[7] = 0;
    }
    F_00429760(piVar5,0x28,0x25c);
    piVar5 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x21);
  }
  return 0;
}

/* ref: FUN_00bb6720 */
uint F_00bb6720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbb6720u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  bool bVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar6 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))[1]));
  cVar1 = *(char *)((int)puVar6 + 0x21);
  bVar2 = true;
  gen_piece_set(&(*(int *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((uint3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),1);
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  iVar4 = (*(int *)(gen_frame + 0x8));
  do {
    if (cVar1 != '\0') {
      (*(undefined4 * PTR32 *)&gen_args[3]) = puVar3;
      if (bVar2) {
        if (puVar3 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
          puVar6 = (undefined4 *)F_00bb5e40((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar3,(*(int *)&gen_args[2]));
          *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar6;
          *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_00bafba0(&(*(undefined4 * PTR32 *)&gen_args[3]));
      }
      puVar6 = (*(undefined4 * PTR32 *)&gen_args[3]);
      if (((uint)(*(undefined4 * PTR32 *)&gen_args[3])[5] <= *(uint *)((*(int *)&gen_args[2]) + 0x14)) &&
         (((uint)(*(undefined4 * PTR32 *)&gen_args[3])[5] < *(uint *)((*(int *)&gen_args[2]) + 0x14) ||
          ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[4] < *(uint *)((*(int *)&gen_args[2]) + 0x10))))) {
        puVar6 = (undefined4 *)F_00bb5e40((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),iVar4,puVar3,(*(int *)&gen_args[2]));
        *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar6;
        *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
      F_00bb5da0((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xd,(uint *)((*(int *)&gen_args[2]) + 0x10));
      F_00429760((*(int *)&gen_args[2]),0x28,0x25c);
      *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar6;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    gen_piece_set(&(*(int *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((uint3)((uint)iVar4 >> 8)));
    if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
      if (((uint)puVar6[5] < *(uint *)((*(int *)&gen_args[2]) + 0x14)) ||
         (((uint)puVar6[5] <= *(uint *)((*(int *)&gen_args[2]) + 0x14) &&
          ((uint)puVar6[4] <= *(uint *)((*(int *)&gen_args[2]) + 0x10))))) {
        bVar2 = false;
        (*(int *)(gen_frame + 0x8)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3) << 8;
        goto LAB_00bb6793;
      }
      puVar5 = (undefined4 *)*puVar6;
      bVar2 = true;
      (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),1);
    }
    else {
      if ((*(uint *)((*(int *)&gen_args[2]) + 0x14) < (uint)puVar6[5]) ||
         ((*(uint *)((*(int *)&gen_args[2]) + 0x14) <= (uint)puVar6[5] &&
          (*(uint *)((*(int *)&gen_args[2]) + 0x10) <= (uint)puVar6[4])))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      bVar2 = !bVar2;
      (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),bVar2);
      if (bVar2) {
        puVar5 = (undefined4 *)*puVar6;
      }
      else {
LAB_00bb6793: ;
        puVar5 = (undefined4 *)puVar6[2];
      }
    }
    cVar1 = *(char *)((int)puVar5 + 0x21);
    puVar3 = puVar6;
    puVar6 = puVar5;
    iVar4 = (*(int *)(gen_frame + 0x8));
  } while( true );
}

/* ref: Client::Network::Socket::PollerImpl::vf0 */
uint F_00bb6850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb6850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x110475c));
  F_00ba8d10(this);
  F_00bb4280(this + 0x354);
  F_00c0fdb0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bb6890 */
uint F_00bb6890(unsigned int gen_a0)
{
  GEN_ENTER(0xbb6890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00bb5d30(this);
  uVar1 = F_00429760(*(undefined4 *)this,0x10,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00bb68b0 */
uint F_00bb68b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbb68b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00bb6590(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)this);
  return uVar1;
}

/* ref: FUN_00bb68e0 */
uint F_00bb68e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbb68e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00bb66a0(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00bb6910 */
uint F_00bb6910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb6910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x28,0,0x25c);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 8) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    puVar1[4] = *param_2;
    puVar1[5] = param_2[1];
    *(int *)param_2[2] = *(int *)param_2[2] + 1;
    puVar1[6] = param_2[2];
    puVar1[7] = param_2[3];
  }
  F_00bb6720(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00bb69b0 */
uint F_00bb69b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbb69b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00bb5d30(this);
  uVar1 = F_00429760(*(undefined4 *)this,0x10,0x25a);
  return (uint)uVar1;
}

/* ref: Client::Network::Socket::SocketImpl::vf0 */
uint F_00bb69d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb69d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00ba9d20(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bb6a00 */
uint F_00bb6a00(unsigned int gen_a0)
{
  GEN_ENTER(0xbb6a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00bb6620(this);
  uVar1 = F_00429760(*(undefined4 *)this,0x10,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00bb6a20 */
uint F_00bb6a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbb6a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    F_00bb66a0(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x21) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x21) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x21);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x21);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x21);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x21);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00bb6270(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00bb6b10 */
uint F_00bb6b10(unsigned int gen_a0)
{
  GEN_ENTER(0xbb6b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00bb6620(this);
  uVar1 = F_00429760(*(undefined4 *)this,0x10,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00bb6b30 */
uint F_00bb6b30(unsigned int gen_a0)
{
  GEN_ENTER(0xbb6b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00bb6a20(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00bb6b50 */
uint F_00bb6b50(unsigned int gen_a0)
{
  GEN_ENTER(0xbb6b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00bb6a20(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x28,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00bb6b90 */
uint F_00bb6b90(unsigned int gen_a0)
{
  GEN_ENTER(0xbb6b90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00bb6a20(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x28,0x25c);
  return (uint)uVar1;
}

/* ref: FUN_00bb6c10 */
uint F_00bb6c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb6c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00baadb0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bb6c40 */
uint F_00bb6c40(unsigned int gen_a0)
{
  GEN_ENTER(0xbb6c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)this;
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 4) != 0)) {
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      piVar1 = (int *)F_00406ad0(*(undefined4 *)this);
      this_00 = *(undefined * PTR32 *)((int)this + 4);
      if (this_00 != (undefined *)0x0) {
        F_00baadb0(this_00);
        piVar1 = (int *)F_00406ad0(this_00);
      }
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  return (uint)piVar1;
}

/* ref: FUN_00bb6c90 */
uint F_00bb6c90(unsigned int gen_a0)
{
  GEN_ENTER(0xbb6c90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)this;
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 4) != 0)) {
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      piVar1 = (int *)F_00406ad0(*(undefined4 *)this);
      this_00 = *(undefined * PTR32 *)((int)this + 4);
      if (this_00 != (undefined *)0x0) {
        F_00baadb0(this_00);
        piVar1 = (int *)F_00406ad0(this_00);
      }
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  return (uint)piVar1;
}

/* ref: FUN_00bb6ce0 */
uint F_00bb6ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb6ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  undefined * this_00;
  
  piVar1 = *(int * PTR32 *)this;
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 4) != 0)) {
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)this);
      this_00 = *(undefined * PTR32 *)((int)this + 4);
      if (this_00 != (undefined *)0x0) {
        F_00baadb0(this_00);
        F_00406ad0(this_00);
      }
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(int *)*param_1 = *(int *)*param_1 + 1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00bb6d40 */
uint F_00bb6d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb6d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined * this_00;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)this;
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 4) != 0)) {
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)this);
      this_00 = *(undefined * PTR32 *)((int)this + 4);
      if (this_00 != (undefined *)0x0) {
        F_00baadb0(this_00);
        F_00406ad0(this_00);
      }
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return (uint)this;
  }
  puVar2 = (undefined4 *)F_00406b90(4,0,0);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 1;
    *(int *)((int)this + 4) = param_1;
    *(undefined4 * PTR32 *)this = puVar2;
    return (uint)this;
  }
  *(int *)((int)this + 4) = param_1;
  *(undefined4 *)this = 0;
  return (uint)this;
}

/* ref: FUN_00bb6dd0 */
uint F_00bb6dd0(unsigned int gen_a0)
{
  GEN_ENTER(0xbb6dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 0xc) != 0)) {
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      piVar1 = (int *)F_00406ad0(*(undefined4 *)((int)this + 8));
      this_00 = *(undefined * PTR32 *)((int)this + 0xc);
      if (this_00 != (undefined *)0x0) {
        F_00baadb0(this_00);
        piVar1 = (int *)F_00406ad0(this_00);
      }
    }
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return (uint)piVar1;
}

/* ref: FUN_00bb6e20 */
uint F_00bb6e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb6e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  undefined * this_00;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  if ((piVar1 != (int *)0x0) && (*(int *)((int)this + 0xc) != 0)) {
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      F_00406ad0(*(undefined4 *)((int)this + 8));
      this_00 = *(undefined * PTR32 *)((int)this + 0xc);
      if (this_00 != (undefined *)0x0) {
        F_00baadb0(this_00);
        F_00406ad0(this_00);
      }
    }
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Network::Socket::RUDPSocket::vf0 */
uint F_00bb6e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb6e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bab900(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bb6eb0 */
uint F_00bb6eb0(unsigned int gen_a0)
{
  GEN_ENTER(0xbb6eb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined * this;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(param_1 + 8);
  if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0xc) != 0)) {
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      piVar1 = (int *)F_00406ad0(*(undefined4 *)(param_1 + 8));
      this = *(undefined * PTR32 *)(param_1 + 0xc);
      if (this != (undefined *)0x0) {
        F_00baadb0(this);
        piVar1 = (int *)F_00406ad0(this);
      }
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return (uint)piVar1;
}

/* ref: FUN_00bb6f00 */
uint F_00bb6f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb6f00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(param_2 + 8);
  if ((piVar1 != (int *)0x0) && (*(int *)(param_2 + 0xc) != 0)) {
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      piVar1 = (int *)F_00406ad0(*(undefined4 *)(param_2 + 8));
      this = *(undefined * PTR32 *)(param_2 + 0xc);
      if (this != (undefined *)0x0) {
        F_00baadb0(this);
        piVar1 = (int *)F_00406ad0(this);
      }
    }
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  return (uint)piVar1;
}

/* ref: FUN_00bb6f50 */
uint F_00bb6f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb6f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int * piVar5;
  undefined * this_00;
  undefined4 * puVar6;
  undefined * this_01;
  
  *(int *)*param_1 = *(int *)*param_1 + 1;
  puVar1 = *(undefined4 * PTR32 *)this;
  piVar2 = (int *)*param_1;
  this_01 = (undefined *)param_1[1];
  puVar6 = (undefined4 *)*puVar1;
  while (puVar6 != puVar1) {
    if ((undefined *)puVar6[3] == this_01) {
      puVar3 = (undefined4 *)puVar6[1];
      puVar4 = (undefined4 *)*puVar6;
      *puVar3 = puVar4;
      puVar4[1] = puVar3;
      piVar5 = (int *)puVar6[2];
      if ((piVar5 != (int *)0x0) && (puVar6[3] != 0)) {
        *piVar5 = *piVar5 + -1;
        if (*piVar5 == 0) {
          F_00406ad0(puVar6[2]);
          this_00 = (undefined *)puVar6[3];
          if (this_00 != (undefined *)0x0) {
            F_00baadb0(this_00);
            F_00406ad0(this_00);
          }
        }
        puVar6[2] = 0;
        puVar6[3] = 0;
      }
      F_00429760(puVar6,0x10,0x25a);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
      puVar6 = puVar4;
    }
    else {
      puVar6 = (undefined4 *)*puVar6;
    }
  }
  if (((piVar2 != (int *)0x0) && (this_01 != (undefined *)0x0)) && (*piVar2 = *piVar2 + -1, *piVar2 == 0)
     ) {
    F_00406ad0(piVar2);
    F_00baadb0(this_01);
    this_01 = (undefined *)F_00406ad0(this_01);
  }
  return (uint)this_01;
}

/* ref: FUN_00bb7020 */
uint F_00bb7020(unsigned int gen_a0)
{
  GEN_ENTER(0xbb7020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  undefined * this_00;
  uint uVar3;
  int * piVar4;
  ulonglong uVar5;
  
  piVar1 = *(int * PTR32 *)this;
  piVar4 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  uVar3 = *(uint *)this;
  *(uint *)(uVar3 + 4) = uVar3;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar4 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)piVar4[2];
      piVar2 = (int *)*piVar4;
      if ((piVar1 != (int *)0x0) && (piVar4[3] != 0)) {
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          F_00406ad0(piVar4[2]);
          this_00 = (undefined *)piVar4[3];
          if (this_00 != (undefined *)0x0) {
            F_00baadb0(this_00);
            F_00406ad0(this_00);
          }
        }
        piVar4[2] = 0;
        piVar4[3] = 0;
      }
      uVar5 = F_00429760(piVar4,0x10,0x25a);
      uVar3 = (uint)uVar5;
      piVar4 = piVar2;
    } while (piVar2 != (int *)*(int *)this);
  }
  return uVar3;
}

/* ref: FUN_00bb70b0 */
uint F_00bb70b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbb70b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00bb7020(this);
  uVar1 = F_00429760(*(undefined4 *)this,0x10,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00bb7100 */
uint F_00bb7100(unsigned int gen_a0)
{
  GEN_ENTER(0xbb7100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00bb7020(this);
  uVar1 = F_00429760(*(undefined4 *)this,0x10,0x25a);
  return (uint)uVar1;
}

/* ref: FUN_00bb7120 */
uint F_00bb7120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb7120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bac070(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bb7150 */
uint F_00bb7150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb7150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bb7200 */
unsigned int F_00bb7200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb7200u, gen_a0, gen_a1, gen_a2, 0u);
  short * in_eax = (short *)(uintptr_t)gen_a0;
  int in_edx = (int)gen_a1;
  int param_3 = (int)gen_a2;
  short sVar1;
  short * psVar2;
  int iVar3;
  
  if (in_edx == 0) {
    if (in_eax != (short *)0x0) {
      sVar1 = *in_eax;
      psVar2 = in_eax;
      while (sVar1 != 0) {
        psVar2 = psVar2 + 1;
        in_edx = in_edx + 1;
        sVar1 = *psVar2;
      }
    }
    if (in_edx == 0) {
      return 0;
    }
  }
  iVar3 = param_3 - (int)in_eax;
  do {
    sVar1 = *in_eax;
    *(short *)(iVar3 + (int)in_eax) = sVar1;
    in_edx = in_edx + -1;
    in_eax = in_eax + 1;
    if (sVar1 == 0) {
      return 0;
    }
  } while (in_edx != 0);
  return 0;
}

/* ref: FUN_00bb7240 */
uint F_00bb7240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb7240u, gen_a0, gen_a1, 0u, 0u);
  short * in_eax = (short *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  short sVar1;
  short * psVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar4 = param_2;
  if ((param_2 == 0) && (uVar4 = 0, in_eax != (short *)0x0)) {
    sVar1 = *in_eax;
    psVar2 = in_eax;
    while (sVar1 != 0) {
      psVar2 = psVar2 + 1;
      uVar4 = uVar4 + 1;
      sVar1 = *psVar2;
    }
  }
  pvVar3 = F_00c51787(uVar4 * 2 + 2);
  uVar5 = 0;
  if (*in_eax != 0) {
    iVar6 = (int)pvVar3 - (int)in_eax;
    do {
      if (uVar4 <= uVar5) break;
      *(short *)(iVar6 + (int)in_eax) = *in_eax;
      in_eax = in_eax + 1;
      uVar5 = uVar5 + 1;
    } while (*in_eax != 0);
  }
  *(undefined2 *)((int)pvVar3 + uVar5 * 2) = 0;
  return (uint)pvVar3;
}

/* ref: FUN_00bb72b0 */
uint F_00bb72b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbb72b0u, gen_a0, 0u, 0u, 0u);
  short * in_eax = (short *)(uintptr_t)gen_a0;
  short sVar1;
  short * psVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  if (in_eax != (short *)0x0) {
    sVar1 = *in_eax;
    psVar2 = in_eax;
    while (sVar1 != 0) {
      psVar2 = psVar2 + 1;
      uVar5 = uVar5 + 1;
      sVar1 = *psVar2;
    }
  }
  pvVar3 = F_00c51787(uVar5 * 2 + 2);
  uVar4 = 0;
  if (*in_eax != 0) {
    iVar6 = (int)pvVar3 - (int)in_eax;
    do {
      if (uVar5 <= uVar4) break;
      *(short *)(iVar6 + (int)in_eax) = *in_eax;
      in_eax = in_eax + 1;
      uVar4 = uVar4 + 1;
    } while (*in_eax != 0);
  }
  *(undefined2 *)((int)pvVar3 + uVar4 * 2) = 0;
  return (uint)pvVar3;
}

/* ref: FUN_00bb7330 */
uint F_00bb7330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb7330u, gen_a0, gen_a1, 0u, 0u);
  ushort in_ax = (ushort)gen_a0;
  int param_2 = (int)gen_a1;
  if (in_ax == 0x20) {
    return 1;
  }
  return 1 << ((byte)in_ax & 0x1f) & *((uint *)GEN_TOP((param_2 + 0xc + (uint)(in_ax >> 5) * 4)));
}

/* ref: FUN_00bb7360 */
uint F_00bb7360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb7360u, gen_a0, gen_a1, gen_a2, 0u);
  ushort * in_eax = (ushort *)(uintptr_t)gen_a0;
  int in_esi = (int)gen_a1;
  int param_3 = (int)gen_a2;
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ushort * local_8;
  
  iVar4 = 0;
  local_8 = in_eax;
  while( true ) {
    while( true ) {
      uVar1 = *local_8;
      if ((uVar1 == 0) ||
         ((uVar1 != 0x20 &&
          ((int)(1 << ((byte)uVar1 & 0x1f) & *((uint *)GEN_TOP((param_3 + 0xc + (uint)(uVar1 >> 5) * 4)))) < 1)
          ))) break;
      local_8 = local_8 + 1;
    }
    uVar2 = *(ushort *)(in_esi + iVar4 * 2);
    while ((uVar2 != 0 &&
           ((uVar2 == 0x20 ||
            (0 < (int)(1 << ((byte)uVar2 & 0x1f) & *((uint *)GEN_TOP((param_3 + 0xc + (uint)(uVar2 >> 5) * 4)))
                      )))))) {
      uVar2 = *(ushort *)(in_esi + 2 + iVar4 * 2);
      iVar4 = iVar4 + 1;
    }
    uVar3 = (uint)uVar1 - (uint)*(ushort *)(in_esi + iVar4 * 2);
    if ((uVar3 != 0) || (uVar1 == 0)) break;
    local_8 = local_8 + 1;
    iVar4 = iVar4 + 1;
  }
  return uVar3;
}

/* ref: FUN_00bb7400 */
uint F_00bb7400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb7400u, gen_a0, gen_a1, 0u, 0u);
  byte * in_eax = (byte *)(uintptr_t)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined2 uVar4;
  uint uVar5;
  
  bVar1 = *in_eax;
  uVar5 = (uint)bVar1;
  uVar3 = 1;
  if ((char)bVar1 < '\0') {
    uVar2 = CONCAT11(bVar1,in_eax[1]);
    if ((uVar2 & 0xe0c0) == 0xc080) {
      uVar5 = uVar2 >> 2 & 0x7c0 | uVar2 & 0x3f;
      uVar3 = 2;
    }
    else {
      uVar3 = (uint)CONCAT21(uVar2,in_eax[2]);
      if ((uVar3 & 0xf0c0c0) != 0xe08080) {
        *param_2 = 0;
        return 1;
      }
      uVar5 = ((uint3)(CONCAT21(uVar2,in_eax[2]) >> 2) & 0x3c000 | uVar3 & 0x3f00) >> 2 |
              uVar3 & 0x3f;
      uVar3 = 3;
    }
  }
  uVar4 = (undefined2)uVar5;
  if (0xffff < uVar5) {
    uVar4 = 0;
  }
  *param_2 = uVar4;
  return uVar3;
}

/* ref: FUN_00bb74a0 */
uint F_00bb74a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb74a0u, gen_a0, gen_a1, gen_a2, 0u);
  byte * in_eax = (byte *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  bVar1 = *in_eax;
  uVar5 = 0;
  do {
    if (bVar1 == 0) {
      if (param_2 != 0) {
        *(undefined2 *)(param_2 + uVar5 * 2) = 0;
      }
      return uVar5;
    }
    uVar4 = (uint)bVar1;
    sVar3 = 0;
    iVar6 = 1;
    if ((char)bVar1 < '\0') {
      uVar2 = CONCAT11(bVar1,in_eax[1]);
      if ((uVar2 & 0xe0c0) == 0xc080) {
        uVar4 = uVar2 >> 2 & 0x7c0 | uVar2 & 0x3f;
        iVar6 = 2;
        goto LAB_00bb7534;
      }
      uVar4 = (uint)CONCAT21(uVar2,in_eax[2]);
      if ((uVar4 & 0xf0c0c0) == 0xe08080) {
        uVar4 = ((uint3)(CONCAT21(uVar2,in_eax[2]) >> 2) & 0x3c000 | uVar4 & 0x3f00) >> 2 |
                uVar4 & 0x3f;
        iVar6 = 3;
        goto LAB_00bb7534;
      }
    }
    else {
LAB_00bb7534: ;
      sVar3 = (short)uVar4;
      if (0xffff < uVar4) {
        sVar3 = 0;
      }
    }
    in_eax = in_eax + iVar6;
    if (sVar3 == 0) {
      sVar3 = (short)param_3;
    }
    if (param_2 != 0) {
      *(short *)(param_2 + uVar5 * 2) = sVar3;
    }
    bVar1 = *in_eax;
    uVar5 = uVar5 + 1;
  } while( true );
}

/* ref: FUN_00bb75e0 */
uint F_00bb75e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb75e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  ushort uVar1;
  uint uVar2;
  ushort * puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  ushort * puVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = 0;
  uVar1 = *(*(ushort * PTR32 *)&gen_args[1]);
  puVar6 = (*(ushort * PTR32 *)&gen_args[1]);
  puVar3 = (*(ushort * PTR32 *)&gen_args[1]);
  while (uVar1 != 0) {
    puVar6 = puVar6 + 1;
    uVar4 = (undefined1)uVar1;
    if (uVar1 < 0x80) {
      (*(ushort * PTR32 *)&gen_args[1]) = ((ushort *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)puVar3) >> 8),uVar4)));
      iVar7 = 1;
    }
    else {
      uVar5 = (undefined1)(uVar1 >> 6);
      (*((undefined2 *)GEN_TOP(((char *)&(*(ushort * PTR32 *)&gen_args[1]) + 2)))) = (undefined2)((uint)((int)(uintptr_t)puVar3) >> 0x10);
      if (uVar1 < 0x800) {
        (*(ushort * PTR32 *)&gen_args[1]) = ((ushort *)GEN_TOP((CONCAT22((*((undefined2 *)GEN_TOP(((char *)&(*(ushort * PTR32 *)&gen_args[1]) + 2)))),CONCAT11(uVar4,uVar5)) & 0xffff3fff | 0x80c0)));
        iVar7 = 2;
      }
      else {
        uVar2 = CONCAT22((*((undefined2 *)GEN_TOP(((char *)&(*(ushort * PTR32 *)&gen_args[1]) + 2)))),CONCAT11(uVar5,(byte)(uVar1 >> 0xc))) & 0xffff3fff;
        (*((undefined1 *)GEN_TOP(((char *)&(*(ushort * PTR32 *)&gen_args[1]) + 3)))) = (undefined1)(uVar2 >> 0x18);
        (*(ushort * PTR32 *)&gen_args[1]) = ((ushort *)GEN_TOP((CONCAT13((*((undefined1 *)GEN_TOP(((char *)&(*(ushort * PTR32 *)&gen_args[1]) + 3)))),CONCAT12(uVar4,(short)uVar2)) & 0xff3fffff | 0x8080e0)));
        iVar7 = 3;
      }
    }
    if (((*(int *)&gen_args[0]) != 0) && (iVar7 != 0)) {
      F_00c46aa0((*(int *)&gen_args[0]) + uVar8,&(*(ushort * PTR32 *)&gen_args[1]),iVar7);
    }
    uVar8 = uVar8 + iVar7;
    puVar3 = (*(ushort * PTR32 *)&gen_args[1]);
    uVar1 = *puVar6;
  }
  if ((*(int *)&gen_args[0]) != 0) {
    *(undefined1 *)(uVar8 + (*(int *)&gen_args[0])) = 0;
  }
  return uVar8;
}

/* ref: FUN_00bb76a0 */
uint F_00bb76a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbb76a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint in_eax = (uint)gen_a0;
  int in_edx = (int)gen_a1;
  int in_esi = (int)gen_a2;
  ushort in_di = (ushort)gen_a3;
  int iVar1;
  
  if ((int)in_eax < in_edx) {
    do {
      iVar1 = (int)(in_eax + in_edx) >> 1;
      if (*(ushort *)(in_esi + iVar1 * 2) < in_di) {
        in_eax = iVar1 + 1;
        iVar1 = in_edx;
      }
      in_edx = iVar1;
    } while ((int)in_eax < iVar1);
  }
  if (*(ushort *)(in_esi + in_eax * 2) != in_di) {
    in_eax = 0xffffffff;
  }
  return in_eax;
}

/* ref: FUN_00bb76d0 */
ushort F_00bb76d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb76d0u, gen_a0, gen_a1, gen_a2, 0u);
  ushort * in_eax = (ushort *)(uintptr_t)gen_a0;
  int in_esi = (int)gen_a1;
  int param_3 = (int)gen_a2;
  byte bVar1;
  ushort uVar2;
  
  if (param_3 == 0) {
    return *in_eax;
  }
  uVar2 = *in_eax;
  bVar1 = *((byte *)GEN_TOP(((uVar2 >> 8) + 0x800c + in_esi)));
  if (bVar1 != 0) {
    uVar2 = *((ushort *)GEN_TOP((in_esi + 0x7f24 + ((uint)bVar1 * 0x100 + (uVar2 & 0xff)) * 2)));
  }
  return uVar2;
}

/* ref: FUN_00bb7710 */
uint F_00bb7710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbb7710u, gen_a0, gen_a1, gen_a2, gen_a3);
  ushort * in_eax = (ushort *)(uintptr_t)gen_a0;
  int in_ecx = (int)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  if (param_4 != 0) {
    uVar3 = *in_eax;
    bVar1 = *((byte *)GEN_TOP(((uVar3 >> 8) + 0x800c + in_ecx)));
    if (bVar1 != 0) {
      uVar3 = *((ushort *)GEN_TOP((in_ecx + 0x7f24 + ((uint)bVar1 * 0x100 + (uVar3 & 0xff)) * 2)));
    }
    uVar2 = *param_3;
    bVar1 = *((byte *)GEN_TOP(((uVar2 >> 8) + 0x800c + in_ecx)));
    if (bVar1 != 0) {
      uVar2 = *((ushort *)GEN_TOP((in_ecx + 0x7f24 + ((uint)bVar1 * 0x100 + (uVar2 & 0xff)) * 2)));
    }
    return (uint)(uVar3 == uVar2);
  }
  return (uint)(*in_eax == *param_3);
}

/* ref: FUN_00bb77a0 */
uint F_00bb77a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xbb77a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  short * param_5 = (short *)(uintptr_t)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  char * pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ushort * puVar9;
  
  pcVar5 = (char *)param_5;
  while( true ) {
    while( true ) {
      iVar7 = param_2 + 0x22c;
      iVar6 = *(int *)(param_2 + 0x10) + iVar7;
      iVar8 = *(int *)(param_2 + 4) + iVar7;
      iVar4 = *(int *)(param_2 + 8) + iVar7;
      if (*pcVar5 == '\0') break;
      if (*pcVar5 != '\x01') {
        return 0;
      }
      param_5 = ((short *)GEN_TOP((*(int *)(param_2 + 0xc) + (*(uint *)(pcVar5 + 0xc) & 0xfffffffe) + iVar7)));
      iVar7 = 0;
      if (*param_5 != 0) {
        iVar7 = 0;
        puVar9 = param_3;
        do {
          uVar2 = *puVar9;
          if ((uVar2 != 0x20) &&
             ((1 << ((byte)uVar2 & 0x1f) & *((uint *)GEN_TOP((param_1 + 0xc + (uint)(uVar2 >> 5) * 4)))) == 0))
          {
            if ((param_4 <= iVar7) ||
               (uVar3 = F_00bb7710(param_5,param_1,puVar9,*(undefined4 *)(param_2 + 0x28)),
               uVar3 == 0)) {
              *param_6 = 0;
              return 0;
            }
            param_5 = param_5 + 1;
          }
          iVar7 = iVar7 + 1;
          puVar9 = puVar9 + 1;
        } while (*param_5 != 0);
      }
      *param_6 = *param_6 + iVar7;
      if (*(ushort *)(pcVar5 + 8) == 0) {
        return 1;
      }
      uVar2 = *((ushort *)GEN_TOP((iVar8 + (uint)*(ushort *)(pcVar5 + 8) * 2)));
      if (uVar2 == 0) {
        return 1;
      }
      pcVar5 = (char *)((uint)uVar2 * 0x10 + iVar6);
      param_4 = param_4 - iVar7;
      param_3 = param_3 + iVar7;
    }
    uVar3 = *(uint *)(pcVar5 + 0xc);
    if (*((short *)GEN_TOP((iVar4 + (uVar3 >> 1) * 2))) == 0) {
      return 1;
    }
    param_5 = (short *)0x0;
    uVar2 = *param_3;
    iVar7 = (int)param_5;
    while ((uVar2 != 0 &&
           ((uVar2 = param_3[iVar7], uVar2 == 0x20 ||
            ((1 << ((byte)uVar2 & 0x1f) & *((uint *)GEN_TOP((param_1 + 0xc + (uint)(uVar2 >> 5) * 4)))) != 0)))
           )) {
      iVar7 = iVar7 + 1;
      if (param_4 <= iVar7) goto LAB_00bb7978;
      uVar2 = param_3[iVar7];
    }
    bVar1 = pcVar5[4];
    uVar2 = F_00bb76d0(param_3 + iVar7,param_1,*(undefined4 *)(param_2 + 0x28));
    uVar3 = F_00bb76a0(0,bVar1 - 1,iVar4 + (uVar3 >> 1) * 2,uVar2);
    if ((int)uVar3 < 0) break;
    if ((*(ushort *)(pcVar5 + 8) == 0) ||
       (uVar2 = *((ushort *)GEN_TOP((iVar8 + (*(ushort *)(pcVar5 + 8) + uVar3) * 2))), uVar2 == 0)) {
      *param_6 = *param_6 + iVar7 + 1;
      return 1;
    }
    *param_6 = *param_6 + 1;
    param_4 = param_4 + -1;
    pcVar5 = (char *)((uint)uVar2 * 0x10 + iVar6);
    param_3 = param_3 + iVar7 + 1;
  }
LAB_00bb7978: ;
  *param_6 = 0;
  return 0;
}

/* ref: FUN_00bb79a0 */
uint F_00bb79a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbb79a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  int * in_edi = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint local_8;
  
  if (*in_edi == 0) {
    uVar3 = 0;
    for (; in_eax < param_4; in_eax = in_eax + 1) {
      uVar1 = *(ushort *)(param_3 + in_eax * 2);
      uVar3 = (uint)uVar1;
      if ((uVar3 != 0x20) &&
         (uVar3 = (uint)(uVar1 >> 5), (1 << ((byte)uVar1 & 0x1f) & in_edi[uVar3 + 3]) == 0)) {
        uVar3 = (uint)*(ushort *)(in_edi + 1);
        *(ushort *)(param_3 + in_eax * 2) = *(ushort *)(in_edi + 1);
      }
    }
  }
  else {
    uVar3 = *in_edi - 1;
    if (uVar3 == 0) {
      local_8 = 0;
      for (iVar5 = in_eax; iVar5 < param_4; iVar5 = iVar5 + 1) {
        uVar1 = *(ushort *)(param_3 + iVar5 * 2);
        if ((uVar1 != 0x20) && ((1 << ((byte)uVar1 & 0x1f) & in_edi[(uVar1 >> 5) + 3]) == 0)) {
          local_8 = local_8 + 1;
        }
      }
      uVar4 = F_00c4f2dd();
      lVar2 = (longlong)(int)local_8;
      uVar3 = (uint)((longlong)(ulonglong)(uVar4 & 0xffff) / lVar2);
      local_8 = 0;
      if (in_eax < param_4) {
        do {
          uVar1 = *(ushort *)(param_3 + in_eax * 2);
          uVar3 = (uint)uVar1;
          if ((uVar3 != 0x20) &&
             (uVar3 = (uint)(uVar1 >> 5), (1 << ((byte)uVar1 & 0x1f) & in_edi[uVar3 + 3]) == 0)) {
            if (local_8 == (uint)((longlong)(ulonglong)(uVar4 & 0xffff) % lVar2)) {
              *(short *)(param_3 + in_eax * 2) = (short)in_edi[1];
            }
            uVar3 = local_8;
            local_8 = local_8 + 1;
          }
          in_eax = in_eax + 1;
        } while (in_eax < param_4);
        return uVar3;
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00bb7aa0 */
uint F_00bb7aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbb7aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  int in_edi = (int)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  int * piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  *param_5 = 0;
  iVar3 = *(int *)(in_edi + 0x8110 + in_ecx * 4);
  if (iVar3 == 0) {
    return 0;
  }
  piVar1 = (int *)(iVar3 + in_edi);
  if (*(int *)(iVar3 + 0x28 + in_edi) == 0) {
    uVar4 = (uint)*param_3;
  }
  else {
    uVar4 = (uint)*param_3;
    bVar2 = *((byte *)GEN_TOP(((*param_3 >> 8) + 0x800c + in_edi)));
    if (bVar2 != 0) {
      uVar4 = (uint)*((ushort *)GEN_TOP((in_edi + 0x7f24 + ((uint)bVar2 * 0x100 + (uVar4 & 0xff)) * 2)));
    }
  }
  uVar5 = (uint)*((ushort *)GEN_TOP(((int)piVar1 + (uVar4 >> 8) * 2 + 0x2c)));
  if (uVar5 != 0) {
    uVar4 = (uint)*((ushort *)GEN_TOP(((int)piVar1 + *piVar1 + ((uVar4 & 0xff) + uVar5 * 0x100) * 2 + 0x22c)));
    if (uVar4 != 0) {
      uVar4 = F_00bb77a0(in_edi,piVar1,param_3 + 1,param_4 + -1,
                           (int)piVar1 + uVar4 * 0x10 + piVar1[4] + 0x22c,param_5);
      return uVar4;
    }
  }
  return 0;
}

/* ref: FUN_00bb7b60 */
uint F_00bb7b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb7b60u, gen_a0, gen_a1, 0u, 0u);
  ushort * in_eax = (ushort *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  ushort * puVar1;
  ushort uVar2;
  uint local_8;
  
  uVar2 = *in_eax;
  local_8 = 0;
  while (uVar2 != 0) {
    if ((uVar2 != 0x20) &&
       ((1 << ((byte)uVar2 & 0x1f) & *((uint *)GEN_TOP((param_2 + 0xc + (uint)(uVar2 >> 5) * 4)))) == 0)) {
      local_8 = local_8 + uVar2;
    }
    puVar1 = in_eax + 1;
    in_eax = in_eax + 1;
    uVar2 = *puVar1;
  }
  return local_8 & 0x3ff;
}

/* ref: FUN_00bb7bc0 */
uint F_00bb7bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb7bc0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  byte bVar1;
  ushort uVar2;
  ushort * puVar3;
  undefined * _Memory;
  uint uVar4;
  int iVar5;
  int iVar6;
  int * piVar7;
  int local_c;
  
  if (*(int *)(param_1 + 0x811c) == 0) {
    return 0;
  }
  piVar7 = ((int *)GEN_TOP((*(int *)(param_1 + 0x811c) + param_1)));
  iVar5 = 0;
  if (param_2 != (ushort *)0x0) {
    uVar2 = *param_2;
    puVar3 = param_2;
    while (uVar2 != 0) {
      puVar3 = puVar3 + 1;
      iVar5 = iVar5 + 1;
      uVar2 = *puVar3;
    }
  }
  _Memory = F_00c51787(iVar5 * 2 + 2);
  uVar2 = *param_2;
  iVar5 = 0;
  local_c = 0;
  if (uVar2 != 0) {
    iVar6 = 0;
    do {
      if (piVar7[6] != 0) {
        bVar1 = *((byte *)GEN_TOP(((uVar2 >> 8) + 0x800c + param_1)));
        if (bVar1 != 0) {
          uVar2 = *((ushort *)GEN_TOP((param_1 + 0x7f24 + ((uint)bVar1 * 0x100 + (uVar2 & 0xff)) * 2)));
        }
      }
      iVar5 = local_c + 1;
      *(ushort *)(iVar6 + (int)_Memory) = uVar2;
      iVar6 = iVar5 * 2;
      uVar2 = param_2[iVar5];
      local_c = iVar5;
    } while (uVar2 != 0);
  }
  *(undefined2 *)((int)_Memory + iVar5 * 2) = 0;
  uVar4 = F_00bb7b60(_Memory,param_1);
  iVar5 = *(int *)(*piVar7 + 0x1c + uVar4 * 4 + (int)piVar7);
  while( true ) {
    if (iVar5 == 0) {
      F_00c4c68f(_Memory);
      return 0;
    }
    iVar5 = piVar7[1] + iVar5 * 8;
    uVar4 = F_00bb7360(piVar7[2] + 0x1c + *(int *)(iVar5 + 0x14 + (int)piVar7) * 2 + (int)piVar7,
                         _Memory,param_1);
    if (uVar4 == 0) break;
    iVar5 = *(int *)((int)piVar7 + iVar5 + 0x18);
  }
  F_00c4c68f(_Memory);
  return 1;
}

/* ref: FUN_00bb7d00 */
uint F_00bb7d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbb7d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  short sVar2;
  undefined * _Memory;
  uint uVar3;
  short * _Memory_00;
  int iVar4;
  short * psVar5;
  int iVar6;
  
  if (param_1 == 0) {
    return 0;
  }
  if (((*(int *)(param_1 + 0x8110 + param_2 * 4) == 0) || (*(short *)(param_1 + 8) == -0xe1)) ||
     (*(short *)(param_1 + 8) == 0)) {
    return 0;
  }
  _Memory = (undefined *)F_00bb72b0(param_3);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = _Memory;
  if (param_2 == 3) {
    uVar3 = F_00bb7bc0(param_1,_Memory);
    F_00c4c68f(_Memory);
    return uVar3;
  }
  iVar6 = param_4 * 2 + 2;
  _Memory_00 = F_00c51787(iVar6);
  F_00c46aa0(_Memory_00,(*(undefined * PTR32 *)(gen_frame + 0x18)),iVar6);
  iVar6 = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  if (0 < param_4) {
    do {
      uVar1 = _Memory_00[iVar6];
      if ((uVar1 == 0x20) ||
         ((1 << ((byte)uVar1 & 0x1f) & *((uint *)GEN_TOP((param_1 + 0xc + (uint)(uVar1 >> 5) * 4)))) != 0))
      goto LAB_00bb7eb3;
      if ((param_2 == 2) ||
         (uVar3 = F_00bb7aa0(4,param_1,_Memory_00 + iVar6,param_4 - iVar6,((int *)(gen_frame + 0x8))),
         (int)uVar3 < 1)) {
        uVar3 = F_00bb7aa0(param_2,param_1,_Memory_00 + iVar6,param_4 - iVar6,&(*(int *)(gen_frame + 0x10)));
        if (uVar3 == 0) {
LAB_00bb7eb3: ;
          iVar6 = iVar6 + 1;
          goto LAB_00bb7eb4;
        }
        iVar4 = (*(int *)(gen_frame + 0x10)) + 1;
        (*(int *)(gen_frame + 0x10)) = iVar4;
        switch((unsigned int)(uintptr_t)(param_5)) {
        case 0: ;
          if (param_2 == 2) {
            F_00c4c68f(_Memory_00);
            F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0x18)));
            return 0;
          }
          F_00bb79a0(iVar6,param_1,_Memory_00,iVar4 + iVar6);
          sVar2 = *_Memory_00;
          psVar5 = _Memory_00;
          while (sVar2 != 0) {
            psVar5 = psVar5 + 1;
            sVar2 = *psVar5;
          }
          iVar4 = 0;
          sVar2 = *_Memory_00;
          psVar5 = _Memory_00;
          while (sVar2 != 0) {
            psVar5 = psVar5 + 1;
            iVar4 = iVar4 + 1;
            sVar2 = *psVar5;
          }
          if (iVar4 != 0) {
            psVar5 = _Memory_00;
            do {
              sVar2 = *psVar5;
              *((short *)GEN_TOP(((param_3 - (int)_Memory_00) + (int)psVar5))) = sVar2;
              iVar4 = iVar4 + -1;
              psVar5 = psVar5 + 1;
              iVar6 = (*(int *)(gen_frame + 0x14));
              if (sVar2 == 0) break;
            } while (iVar4 != 0);
          }
          sVar2 = *_Memory_00;
          psVar5 = _Memory_00;
          while (sVar2 != 0) {
            psVar5 = psVar5 + 1;
            sVar2 = *psVar5;
          }
          iVar6 = iVar6 + (*(int *)(gen_frame + 0x10));
          goto LAB_00bb7eb4;
        case 1: ;
          iVar4 = 0;
          if (iVar6 < 1) goto LAB_00bb7f26;
          goto LAB_00bb7f00;
        case 2: ;
          if (iVar4 + iVar6 <= param_4) {
            if (param_4 == iVar4 + iVar6) {
              F_00c4c68f(_Memory_00);
              F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0x18)));
              return 1;
            }
            goto LAB_00bb7eb3;
          }
          goto LAB_00bb7ec0;
        case 3: ;
          F_00c4c68f(_Memory_00);
          F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0x18)));
          return 1;
        }
      }
      else {
        iVar6 = iVar6 + ((int *)(gen_frame + 0x8))[0];
LAB_00bb7eb4: ;
        (*(int *)(gen_frame + 0x14)) = iVar6;
      }
    } while (iVar6 < param_4);
  }
LAB_00bb7ec0: ;
  F_00c4c68f(_Memory_00);
  F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0x18)));
  return 0;
  while (iVar4 = iVar4 + 1, iVar4 < iVar6) {
LAB_00bb7f00: ;
    uVar1 = _Memory_00[iVar4];
    if ((uVar1 != 0x20) &&
       ((1 << ((byte)uVar1 & 0x1f) & *((uint *)GEN_TOP((param_1 + 0xc + (uint)(uVar1 >> 5) * 4)))) == 0))
    break;
  }
LAB_00bb7f26: ;
  F_00c4c68f(_Memory_00);
  F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0x18)));
  return (uint)(iVar6 <= iVar4);
}

/* ref: FUN_00bb7fa0 */
unsigned int F_00bb7fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb7fa0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  if (((param_1 != 0) && (param_2 != 0)) && (*param_3 != 0)) {
    iVar3 = 0;
    iVar2 = 0;
    if (0 < *param_3) {
      do {
        uVar1 = *(ushort *)(param_2 + iVar2 * 2);
        if (uVar1 == 0) break;
        if ((uVar1 != 0x20) &&
           ((1 << ((byte)uVar1 & 0x1f) & *((uint *)GEN_TOP((param_1 + 0xc + (uint)(uVar1 >> 5) * 4)))) == 0)) {
          *(ushort *)(param_2 + iVar3 * 2) = uVar1;
          iVar3 = iVar3 + 1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *param_3);
    }
    *(undefined2 *)(param_2 + iVar3 * 2) = 0;
    *param_3 = iVar3;
  }
  return 0;
}

/* ref: FUN_00bb8010 */
uint F_00bb8010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb8010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00bb7d00(param_1,3,param_2,param_3,1);
  return uVar1;
}

/* ref: FUN_00bb8030 */
uint F_00bb8030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb8030u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ushort uVar1;
  uint uVar2;
  undefined * _Memory;
  
  uVar1 = *(ushort *)(param_1 + 4);
  uVar2 = F_00bb74a0(param_2,0,(uint)uVar1);
  _Memory = F_00c51787(uVar2 * 2 + 2);
  F_00bb74a0(param_2,_Memory,(uint)uVar1);
  uVar2 = F_00bb7d00(param_1,3,_Memory,uVar2,1);
  F_00c4c68f(_Memory);
  return uVar2;
}

/* ref: FUN_00bb8090 */
uint F_00bb8090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb8090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00bb7d00(param_1,0,param_2,param_3,3);
  return uVar1;
}

/* ref: FUN_00bb80b0 */
uint F_00bb80b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb80b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ushort uVar1;
  uint uVar2;
  undefined * _Memory;
  
  uVar1 = *(ushort *)(param_1 + 4);
  uVar2 = F_00bb74a0(param_2,0,(uint)uVar1);
  _Memory = F_00c51787(uVar2 * 2 + 2);
  F_00bb74a0(param_2,_Memory,(uint)uVar1);
  uVar2 = F_00bb7d00(param_1,0,_Memory,uVar2,3);
  F_00c4c68f(_Memory);
  return uVar2;
}

/* ref: FUN_00bb8110 */
uint F_00bb8110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb8110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00bb7d00(param_1,1,param_2,param_3,1);
  return uVar1;
}

/* ref: FUN_00bb8130 */
uint F_00bb8130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb8130u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ushort uVar1;
  uint uVar2;
  undefined * _Memory;
  
  uVar1 = *(ushort *)(param_1 + 4);
  uVar2 = F_00bb74a0(param_2,0,(uint)uVar1);
  _Memory = F_00c51787(uVar2 * 2 + 2);
  F_00bb74a0(param_2,_Memory,(uint)uVar1);
  uVar2 = F_00bb7d00(param_1,1,_Memory,uVar2,1);
  F_00c4c68f(_Memory);
  return uVar2;
}

/* ref: FUN_00bb8190 */
uint F_00bb8190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb8190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00bb7d00(param_1,2,param_2,param_3,2);
  return uVar1;
}

/* ref: FUN_00bb81b0 */
uint F_00bb81b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb81b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ushort uVar1;
  uint uVar2;
  undefined * _Memory;
  
  uVar1 = *(ushort *)(param_1 + 4);
  uVar2 = F_00bb74a0(param_2,0,(uint)uVar1);
  _Memory = F_00c51787(uVar2 * 2 + 2);
  F_00bb74a0(param_2,_Memory,(uint)uVar1);
  uVar2 = F_00bb7d00(param_1,2,_Memory,uVar2,2);
  F_00c4c68f(_Memory);
  return uVar2;
}

/* ref: FUN_00bb8210 */
uint F_00bb8210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb8210u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort * puVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  undefined * _Memory;
  short * _Memory_00;
  uint uVar5;
  char * pcVar6;
  short * psVar7;
  int iVar8;
  int iVar9;
  
  (*(int *)(gen_frame + 0x14)) = 0;
  do {
    iVar9 = (*(int *)(gen_frame + 0x14));
    if ((((param_1 != 0) && (*(int *)(param_1 + 0x8110 + (*(int *)(gen_frame + 0x14)) * 4) != 0)) &&
        (*(short *)(param_1 + 8) != -0xe1)) && (*(short *)(param_1 + 8) != 0)) {
      _Memory = (undefined *)F_00bb72b0(param_2);
      (*(undefined * PTR32 *)(gen_frame + 0xc)) = _Memory;
      if (iVar9 == 3) {
        F_00bb7bc0(param_1,_Memory);
        F_00c4c68f(_Memory);
      }
      else {
        iVar9 = param_3 * 2 + 2;
        _Memory_00 = F_00c51787(iVar9);
        F_00c46aa0(_Memory_00,(*(undefined * PTR32 *)(gen_frame + 0xc)),iVar9);
        (*(int *)(gen_frame + 0x18)) = 0;
        if (0 < param_3) {
          do {
            puVar1 = (ushort *)(_Memory_00 + (*(int *)(gen_frame + 0x18)));
            uVar3 = *puVar1;
            if ((uVar3 == 0x20) ||
               ((1 << ((byte)uVar3 & 0x1f) & *((uint *)GEN_TOP((param_1 + 0xc + (uint)(uVar3 >> 5) * 4)))) != 0
               )) {
LAB_00bb83aa: ;
              (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
            }
            else if (((*(int *)(gen_frame + 0x14)) == 2) ||
                    (uVar5 = F_00bb7aa0(4,param_1,puVar1,param_3 - (*(int *)(gen_frame + 0x18)),&(*(int *)(gen_frame + 0x8))),
                    (int)uVar5 < 1)) {
              uVar5 = F_00bb7aa0((*(int *)(gen_frame + 0x14)),param_1,puVar1,param_3 - (*(int *)(gen_frame + 0x18)),&(*(int *)(gen_frame + 0x10)));
              iVar9 = (*(int *)(gen_frame + 0x18));
              if (uVar5 == 0) goto LAB_00bb83aa;
              iVar8 = (*(int *)(gen_frame + 0x10)) + 1;
              (*(int *)(gen_frame + 0x10)) = iVar8;
              if ((*(int *)(gen_frame + 0x14)) == 2) {
                F_00c4c68f(_Memory_00);
                goto LAB_00bb83ca;
              }
              F_00bb79a0((*(int *)(gen_frame + 0x18)),param_1,_Memory_00,iVar8 + (*(int *)(gen_frame + 0x18)));
              sVar4 = *_Memory_00;
              psVar7 = _Memory_00;
              while (sVar4 != 0) {
                psVar7 = psVar7 + 1;
                sVar4 = *psVar7;
              }
              iVar8 = 0;
              sVar4 = *_Memory_00;
              psVar7 = _Memory_00;
              while (sVar4 != 0) {
                psVar7 = psVar7 + 1;
                iVar8 = iVar8 + 1;
                sVar4 = *psVar7;
              }
              if (iVar8 != 0) {
                psVar7 = _Memory_00;
                do {
                  sVar4 = *psVar7;
                  *((short *)GEN_TOP((((int)param_2 - (int)_Memory_00) + (int)psVar7))) = sVar4;
                  iVar8 = iVar8 + -1;
                  psVar7 = psVar7 + 1;
                  if (sVar4 == 0) break;
                } while (iVar8 != 0);
              }
              sVar4 = *_Memory_00;
              psVar7 = _Memory_00;
              while (sVar4 != 0) {
                psVar7 = psVar7 + 1;
                sVar4 = *psVar7;
              }
              (*(int *)(gen_frame + 0x18)) = iVar9 + (*(int *)(gen_frame + 0x10));
            }
            else {
              (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + (*(int *)(gen_frame + 0x8));
            }
          } while ((*(int *)(gen_frame + 0x18)) < param_3);
        }
        F_00c4c68f(_Memory_00);
LAB_00bb83ca: ;
        F_00c4c68f((*(undefined * PTR32 *)(gen_frame + 0xc)));
        iVar9 = (*(int *)(gen_frame + 0x14));
      }
    }
    (*(int *)(gen_frame + 0x14)) = iVar9 + 1;
    if (3 < iVar9 + 1) {
      pcVar6 = param_2;
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      return (int)pcVar6 - (int)(param_2 + 1);
    }
  } while( true );
}

/* ref: FUN_00bb8410 */
uint F_00bb8410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb8410u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ushort uVar1;
  uint uVar2;
  undefined * _Memory;
  
  uVar1 = *(ushort *)(param_1 + 4);
  uVar2 = F_00bb74a0(param_2,0,(uint)uVar1);
  _Memory = F_00c51787(uVar2 * 2 + 2);
  F_00bb74a0(param_2,_Memory,(uint)uVar1);
  F_00bb8210(param_1,_Memory,uVar2);
  uVar2 = F_00bb75e0(param_2,_Memory);
  F_00c4c68f(_Memory);
  return uVar2;
}

/* ref: FUN_00bb8470 */
uint F_00bb8470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb8470u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  F_00bb7fa0((*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[2]));
  uVar1 = (*(undefined4 *)&gen_args[2]);
  uVar2 = F_00bb7d00((*(undefined4 *)&gen_args[0]),0,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),3);
  if (uVar2 == 0) {
    uVar2 = F_00bb7d00((*(undefined4 *)&gen_args[0]),3,(*(undefined4 *)&gen_args[1]),uVar1,1);
    if (uVar2 == 0) {
      uVar2 = F_00bb7d00((*(undefined4 *)&gen_args[0]),1,(*(undefined4 *)&gen_args[1]),uVar1,1);
      if (uVar2 == 0) {
        uVar2 = F_00bb7d00((*(undefined4 *)&gen_args[0]),2,(*(undefined4 *)&gen_args[1]),uVar1,2);
        return (uint)(uVar2 != 0);
      }
    }
  }
  return 1;
}

/* ref: FUN_00bb84f0 */
uint F_00bb84f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb84f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ushort uVar1;
  uint uVar2;
  undefined * _Memory;
  
  uVar1 = *(ushort *)(param_1 + 4);
  uVar2 = F_00bb74a0(param_2,0,(uint)uVar1);
  _Memory = F_00c51787(uVar2 * 2 + 2);
  F_00bb74a0(param_2,_Memory,(uint)uVar1);
  uVar2 = F_00bb8470(param_1,_Memory,uVar2);
  F_00c4c68f(_Memory);
  return uVar2;
}

/* ref: FUN_00bb8540 */
unsigned int F_00bb8540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb8540u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  }
  uVar1 = 0;
  if ((param_1[0x2043] & 0xffffff) != 0) {
    do {
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(param_1[0x2043] << 8));
  }
  return 0;
}

/* ref: FUN_00bb85a0 */
uint F_00bb85a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb85a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  }
  uVar1 = 0;
  if ((param_1[0x2043] & 0xffffff) != 0) {
    do {
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(param_1[0x2043] << 8));
  }
  return (uint)param_1;
}

/* ref: FUN_00bb85e0 */
unsigned int F_00bb85e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb85e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  F_00bb7400(param_2 + 1,((undefined2 *)(gen_frame + 0x4)));
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = ((undefined2 *)(gen_frame + 0x4))[0];
  uVar1 = 0;
  if ((param_1[0x2043] & 0xffffff) != 0) {
    do {
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)(param_1[0x2043] << 8));
  }
  return 0;
}

/* ref: FUN_00bb8640 */
uint F_00bb8640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb8640u, gen_a0, gen_a1, 0u, 0u);
  int in_esi = (int)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = F_00c11930(in_edi,0,0,0xc0);
  *(uint *)(in_esi + 0x28) = uVar2;
  *(uint *)(in_esi + 0x14) = uVar2;
  *(undefined4 *)(in_esi + 0x30) = 8;
  *(uint *)(in_esi + 0x24) = uVar2 + 0xa8;
  uVar2 = F_00c11930(in_edi,0,0,0x2d0);
  *(uint *)(in_esi + 8) = uVar2;
  *(uint *)(in_esi + 0x20) = uVar2;
  *(uint *)(in_esi + 0x1c) = uVar2 + 0x270;
  *(undefined4 *)(in_esi + 0x2c) = 0x2d;
  *((uint *)GEN_TOP((*(int *)(in_esi + 0x14) + 4))) = uVar2;
  *((undefined4 *)GEN_TOP((*(int *)(in_esi + 8) + 8))) = 0;
  *(int *)(in_esi + 8) = *(int *)(in_esi + 8) + 0x10;
  **(undefined4 * PTR32 *)(in_esi + 0x14) = *(undefined4 *)(in_esi + 8);
  puVar1 = *(undefined4 * PTR32 *)(in_esi + 0x14);
  *(undefined4 *)(in_esi + 0xc) = *puVar1;
  puVar1[2] = *(int *)(in_esi + 8) + 0x140;
  return (uint)puVar1;
}

/* ref: FUN_00bb86f0 */
uint F_00bb86f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbb86f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  F_00bb8640(param_1,param_1);
  uVar3 = F_00c05020(param_1,0,2);
  *(uint *)(param_1 + 0x48) = uVar3;
  *(undefined4 *)(param_1 + 0x50) = 5;
  iVar2 = *(int *)(param_1 + 0x10);
  uVar3 = F_00c05020(param_1,0,2);
  *(uint *)(iVar2 + 0x60) = uVar3;
  *(undefined4 *)(iVar2 + 0x68) = 5;
  F_00c05920(param_1,0x20);
  F_00c02ad0(param_1);
  F_00c11a90(param_1);
  uVar3 = F_00c05a80(param_1,((char *)REFP(0x13419a8)),0x11);
  *(byte *)(uVar3 + 5) = *(byte *)(uVar3 + 5) | 0x20;
  uVar3 = *(int *)(iVar1 + 0x44) * 4;
  *(uint *)(iVar1 + 0x40) = uVar3;
  return uVar3;
}

/* ref: FUN_00bb87c0 */
uint F_00bb87c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbb87c0u, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(in_esi + 0x10);
  F_00c05da0(in_esi,*(undefined4 *)(in_esi + 0x20));
  F_00c01460(in_esi);
  F_00c11930(in_esi,**(undefined4 * PTR32 *)(in_esi + 0x10),(*(undefined4 * PTR32 *)(in_esi + 0x10))[2] * 4,0);
  uVar2 = F_00c11930(in_esi,*(undefined4 *)(iVar1 + 0x34),*(undefined4 *)(iVar1 + 0x3c),0);
  *(uint *)(iVar1 + 0x34) = uVar2;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  F_00c11930(in_esi,*(undefined4 *)(in_esi + 0x28),*(int *)(in_esi + 0x30) * 0x18,0);
  F_00c11930(in_esi,*(undefined4 *)(in_esi + 0x20),*(int *)(in_esi + 0x2c) << 4,0);
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x10),in_esi,0x178,0);
  return uVar2;
}

/* ref: FUN_00bb8850 */
uint F_00bb8850(unsigned int gen_a0)
{
  GEN_ENTER(0xbb8850u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_esi;
  
  in_esi = F_00c11930(param_1,0,0,0x78);
  F_00c01960(param_1,in_esi,8);
  *(undefined4 *)(in_esi + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_esi + 0x20) = 0;
  *(undefined4 *)(in_esi + 0x2c) = 0;
  *(undefined4 *)(in_esi + 0x70) = 0;
  *(undefined4 *)(in_esi + 0x44) = 0;
  *(undefined1 *)(in_esi + 0x38) = 0;
  *(undefined4 *)(in_esi + 0x3c) = 0;
  *(undefined1 *)(in_esi + 0x39) = 1;
  *(undefined4 *)(in_esi + 0x40) = 0;
  *(undefined4 *)(in_esi + 0x68) = 0;
  *(undefined4 *)(in_esi + 0x30) = 0;
  *(undefined2 *)(in_esi + 0x36) = 0;
  *(undefined2 *)(in_esi + 0x34) = 0;
  *(undefined1 *)(in_esi + 6) = 0;
  *(undefined4 *)(in_esi + 0x14) = 0;
  *(undefined4 *)(in_esi + 0x28) = 0;
  *(undefined4 *)(in_esi + 0x18) = 0;
  *(undefined4 *)(in_esi + 0x74) = 0;
  *(undefined4 *)(in_esi + 0x50) = 0;
  F_00bb8640(in_esi,param_1);
  *(undefined4 *)(in_esi + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_esi + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_esi + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined1 *)(in_esi + 0x38) = *(undefined1 *)(param_1 + 0x38);
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_esi + 0x3c) = uVar1;
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_esi + 0x40) = uVar1;
  *(undefined4 *)(in_esi + 0x44) = uVar2;
  return in_esi;
}

/* ref: FUN_00bb88f0 */
uint F_00bb88f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb88f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  F_00c05da0(param_2,*(undefined4 *)(param_2 + 0x20));
  F_00c11930(param_1,*(undefined4 *)(param_2 + 0x28),*(int *)(param_2 + 0x30) * 0x18,0);
  F_00c11930(param_1,*(undefined4 *)(param_2 + 0x20),*(int *)(param_2 + 0x2c) << 4,0);
  uVar1 = F_00c11930(param_1,param_2,0x78,0);
  return uVar1;
}

/* ref: FUN_00bb8950 */
uint F_00bb8950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb8950u, gen_a0, gen_a1, 0u, 0u);
  code * param_1 = (code *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * in_esi;
  uint uVar1;
  
  in_esi = ((undefined4 *)GEN_TOP((*param_1)(param_2,0,0,0x178)));
  if (in_esi == (undefined4 *)0x0) {
    return 0;
  }
  *in_esi = 0;
  *(undefined1 *)(in_esi + 1) = 8;
  *(undefined1 *)(in_esi + 0x23) = 0x21;
  in_esi[4] = in_esi + 0x1e;
  *(undefined1 *)((int)in_esi + 5) = 0x61;
  in_esi[8] = 0;
  in_esi[0xb] = 0;
  in_esi[0x1c] = 0;
  in_esi[0x11] = 0;
  *(undefined1 *)(in_esi + 0xe) = 0;
  in_esi[0xf] = 0;
  *(undefined1 *)((int)in_esi + 0x39) = 1;
  in_esi[0x10] = 0;
  in_esi[0x1a] = 0;
  in_esi[0xc] = 0;
  *(undefined1 *)((int)in_esi + 6) = 0;
  in_esi[5] = 0;
  in_esi[10] = 0;
  in_esi[6] = 0;
  in_esi[0x1d] = 0;
  in_esi[0x14] = 0;
  *(undefined2 *)((int)in_esi + 0x36) = 0;
  *(undefined2 *)(in_esi + 0xd) = 0;
  in_esi[0x40] = in_esi + 0x3c;
  in_esi[0x41] = in_esi + 0x3c;
  in_esi[0x21] = param_1;
  in_esi[0x22] = param_2;
  in_esi[0x3a] = in_esi;
  in_esi[0x2e] = 0;
  in_esi[0x20] = 0;
  in_esi[0x1f] = 0;
  in_esi[0x1e] = 0;
  *(undefined4 *)(in_esi[4] + 0x68) = 0;
  in_esi[0x25] = in_esi;
  in_esi[0x2b] = 0;
  in_esi[0x2d] = 0;
  in_esi[0x34] = 0;
  *(undefined1 *)((int)in_esi + 0x8d) = 0;
  in_esi[0x24] = 0;
  in_esi[0x27] = 0;
  in_esi[0x28] = 0;
  in_esi[0x29] = 0;
  in_esi[0x2a] = 0;
  in_esi[0x2f] = 0x178;
  in_esi[0x31] = 0;
  in_esi[0x26] = in_esi + 0x25;
  in_esi[0x32] = 200;
  in_esi[0x33] = 200;
  in_esi[0x44] = 0;
  in_esi[0x45] = 0;
  in_esi[0x46] = 0;
  in_esi[0x47] = 0;
  in_esi[0x48] = 0;
  in_esi[0x49] = 0;
  in_esi[0x4a] = 0;
  in_esi[0x4b] = 0;
  in_esi[0x4c] = 0;
  uVar1 = F_00bb8b80(in_esi,((code *)REFP(0xbb86f0)),0);
  if (uVar1 != 0) {
    F_00bb87c0(in_esi);
    in_esi = (undefined4 *)0x0;
  }
  return (uint)in_esi;
}

/* ref: FUN_00bb8a90 */
uint F_00bb8a90(unsigned int gen_a0)
{
  GEN_ENTER(0xbb8a90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c01440(param_1);
  return uVar1;
}

/* ref: FUN_00bb8aa0 */
uint F_00bb8aa0(unsigned int gen_a0)
{
  GEN_ENTER(0xbb8aa0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int in_esi;
  undefined4 uVar1;
  uint uVar2;
  
  in_esi = *((int *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x70)));
  F_00c05da0(in_esi,*(undefined4 *)(in_esi + 0x20));
  F_00c00a50(in_esi,1);
  *(undefined4 *)(in_esi + 0x74) = 0;
  do {
    *(undefined4 * PTR32 *)(in_esi + 0x14) = *(undefined4 * PTR32 *)(in_esi + 0x28);
    uVar1 = **(undefined4 * PTR32 *)(in_esi + 0x28);
    *(undefined4 *)(in_esi + 8) = uVar1;
    *(undefined4 *)(in_esi + 0xc) = uVar1;
    *(undefined2 *)(in_esi + 0x36) = 0;
    *(undefined2 *)(in_esi + 0x34) = 0;
    uVar2 = F_00bb8b80(in_esi,((code *)REFP(0xbb8a90)),0);
  } while (uVar2 != 0);
  uVar2 = F_00bb87c0(in_esi);
  return uVar2;
}

/* ref: FUN_00bb8b00 */
uint F_00bb8b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb8b00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  char * pcVar3;
  undefined4 uVar4;
  
  uVar2 = param_2 - 2;
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
  case 1: ;
    iVar1 = *(int *)(param_1 + 8);
    *param_3 = *(uint *)(iVar1 + -0x10);
    param_3[1] = *(uint *)(iVar1 + -0xc);
    uVar2 = *(uint *)(iVar1 + -8);
    param_3[2] = uVar2;
  default: ;
    *(uint * PTR32 *)(param_1 + 8) = param_3 + 4;
    return uVar2;
  case 2: ;
    uVar4 = 0x11;
    pcVar3 = ((char *)REFP(0x13419bc));
    break;
  case 3: ;
    uVar4 = 0x17;
    pcVar3 = ((char *)REFP(0x13419d0));
  }
  uVar2 = F_00c05a80(param_1,pcVar3,uVar4);
  *param_3 = uVar2;
  param_3[2] = 4;
  *(uint * PTR32 *)(param_1 + 8) = param_3 + 4;
  return uVar2;
}

/* ref: FUN_00bb8b80 */
uint F_00bb8b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb8b80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  code * param_2 = (code *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 * PTR32 *)(param_1 + 0x70) = &(*(undefined4 *)(gen_frame + 0x14));
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x8)) = ((undefined1 *)(gen_frame + 0x18));
  (*(uint *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
  uVar2 = GEN_SETJMP(((undefined1 *)(gen_frame + 0x18)));
  if (uVar2 == 0) {
    (*(undefined4 *)(gen_frame + 0xc)) = param_3;
    (*(undefined1 * PTR32 *)(gen_frame + 0x8)) = (undefined1 *)param_1;
    (*param_2)(param_1,param_3);
    *(undefined4 *)(param_1 + 0x70) = (*(undefined4 *)(gen_frame + 0x14));
    return (*(uint *)(gen_frame + 0x58));
  }
  *(undefined4 *)(param_1 + 0x70) = (*(undefined4 *)(gen_frame + 0x14));
  return (*(uint *)(gen_frame + 0x58));
}

/* ref: FUN_00bb8c70 */
uint F_00bb8c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb8c70u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (param_2 + 7U < 0x10000000) {
    uVar5 = F_00c11930(param_1,iVar2,*(int *)(param_1 + 0x2c) << 4,(param_2 + 6) * 0x10);
  }
  else {
    uVar5 = F_00c11910(param_1);
  }
  *(uint *)(param_1 + 0x1c) = param_2 * 0x10 + uVar5;
  *(int *)(param_1 + 0x2c) = param_2 + 6;
  *(uint *)(param_1 + 0x20) = uVar5;
  *(int *)(param_1 + 8) = (*(int *)(param_1 + 8) - iVar2 >> 4) * 0x10 + *(int *)(param_1 + 0x20);
  for (puVar1 = *(undefined4 * PTR32 *)(param_1 + 0x68); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    puVar1[2] = (puVar1[2] - iVar2 >> 4) * 0x10 + *(int *)(param_1 + 0x20);
  }
  piVar3 = *(int * PTR32 *)(param_1 + 0x28);
  if (*(int * PTR32 *)(param_1 + 0x28) <= *(int * PTR32 *)(param_1 + 0x14)) {
    do {
      piVar4 = piVar3 + 6;
      piVar3[2] = (piVar3[2] - iVar2 >> 4) * 0x10 + *(int *)(param_1 + 0x20);
      *piVar3 = (*piVar3 - iVar2 >> 4) * 0x10 + *(int *)(param_1 + 0x20);
      piVar3[1] = (piVar3[1] - iVar2 >> 4) * 0x10 + *(int *)(param_1 + 0x20);
      piVar3 = piVar4;
    } while (piVar4 <= *(int * PTR32 *)(param_1 + 0x14));
  }
  uVar5 = (*(int *)(param_1 + 0xc) - iVar2 >> 4) * 0x10 + *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0xc) = uVar5;
  return uVar5;
}

/* ref: FUN_00bb8cd0 */
uint F_00bb8cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb8cd0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (param_2 + 1U < 0xaaaaaab) {
    uVar3 = F_00c11930(param_1,iVar2,*(int *)(param_1 + 0x30) * 0x18,param_2 * 0x18);
  }
  else {
    uVar3 = F_00c11910(param_1);
  }
  *(int *)(param_1 + 0x30) = param_2;
  uVar1 = (uVar3 - 0x18) + param_2 * 0x18;
  *(uint *)(param_1 + 0x28) = uVar3;
  *(uint *)(param_1 + 0x14) = uVar3 + ((*(int *)(param_1 + 0x14) - iVar2) / 0x18) * 0x18;
  *(uint *)(param_1 + 0x24) = uVar1;
  return uVar1;
}

/* ref: FUN_00bb8d50 */
uint F_00bb8d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb8d50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (param_2 <= iVar1) {
    uVar2 = F_00bb8c70(param_1,iVar1 * 2);
    return uVar2;
  }
  uVar2 = F_00bb8c70(param_1,iVar1 + param_2);
  return uVar2;
}

/* ref: FUN_00bb8d80 */
uint F_00bb8d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb8d80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code * pcVar5;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)&(*(gen_code32 *)(gen_frame + 0x4));
  pcVar5 = *(gen_code32 *)(param_1 + 0x44);
  (*(gen_code32 *)(gen_frame + 0x4)) = pcVar5;
  if ((pcVar5 != (code *)0x0) && (*(char *)(param_1 + 0x39) != '\0')) {
    iVar1 = *(int *)(param_1 + 0x20);
    iVar4 = *(int *)(param_1 + 0x14);
    iVar2 = *(int *)(param_1 + 8);
    iVar3 = *(int *)(iVar4 + 8);
    ((int *)(gen_frame + 0x8))[0] = param_2;
    (*(undefined4 *)(gen_frame + 0x1c)) = param_3;
    if (param_2 == 4) {
      (*(int *)(gen_frame + 0x68)) = 0;
    }
    else {
      (*(int *)(gen_frame + 0x68)) = (iVar4 - *(int *)(param_1 + 0x28)) / 0x18;
    }
    if (*(int *)(param_1 + 0x1c) - iVar2 < 0x141) {
      iVar4 = *(int *)(param_1 + 0x2c);
      if (iVar4 < 0x14) {
        iVar4 = iVar4 + 0x14;
      }
      else {
        iVar4 = iVar4 * 2;
      }
      F_00bb8c70(param_1,iVar4);
    }
    *((int *)GEN_TOP((*(int *)(param_1 + 0x14) + 8))) = *(int *)(param_1 + 8) + 0x140;
    *(undefined1 *)(param_1 + 0x39) = 0;
    ((code *)(*(gen_code32 *)(gen_frame + 0x4)))(param_1,((int *)(gen_frame + 0x8)));
    pcVar5 = ((code *)GEN_TOP((*(int *)(param_1 + 0x20) + (iVar3 - iVar1))));
    *(undefined1 *)(param_1 + 0x39) = 1;
    *((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x14) + 8))) = pcVar5;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 0x20) + (iVar2 - iVar1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)&(*(gen_code32 *)(gen_frame + 0x4)));
  return (uint)pcVar5;
}

/* ref: FUN_00bb8e70 */
uint F_00bb8e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb8e70u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int in_esi = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint * puVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  double * pdVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 * puVar10;
  
  uVar8 = (uint)*(byte *)(in_ecx + 0x49);
  uVar9 = 0;
  if (param_3 < (int)uVar8) {
    iVar2 = uVar8 - param_3;
    param_3 = param_3 + iVar2;
    do {
      *((undefined4 *)GEN_TOP((*(int *)(in_esi + 8) + 8))) = 0;
      *(int *)(in_esi + 8) = *(int *)(in_esi + 8) + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if ((*(byte *)(in_ecx + 0x4a) & 4) != 0) {
    iVar2 = param_3 - uVar8;
    if (*((uint *)GEN_TOP((*(int *)(in_esi + 0x10) + 0x40))) <= *((uint *)GEN_TOP((*(int *)(in_esi + 0x10) + 0x44)))) {
      F_00c01810(in_esi);
    }
    uVar9 = F_00c05020(in_esi,iVar2,1);
    iVar3 = 0;
    if (0 < iVar2) {
      iVar7 = iVar2 * -0x10;
      do {
        iVar3 = iVar3 + 1;
        puVar10 = ((undefined4 *)GEN_TOP((*(int *)(in_esi + 8) + iVar7)));
        puVar4 = (undefined4 *)F_00c05310(in_esi,uVar9,iVar3);
        iVar7 = iVar7 + 0x10;
        *puVar4 = *puVar10;
        puVar4[1] = puVar10[1];
        puVar4[2] = puVar10[2];
      } while (iVar3 < iVar2);
    }
    uVar5 = F_00c05a80(in_esi,&REFG(undefined, 0x13419f8),1);
    pdVar6 = (double *)F_00c058d0(in_esi,uVar9,uVar5);
    *pdVar6 = (double)iVar2;
    *(undefined4 *)(pdVar6 + 1) = 3;
  }
  uVar5 = *(uint *)(in_esi + 8);
  if (uVar8 != 0) {
    puVar4 = (undefined4 *)(uVar5 + param_3 * -0x10 + 8);
    do {
      puVar10 = *(undefined4 * PTR32 *)(in_esi + 8);
      *(undefined4 * PTR32 *)(in_esi + 8) = puVar10 + 4;
      *puVar10 = puVar4[-2];
      puVar10[1] = puVar4[-1];
      puVar10[2] = *puVar4;
      *puVar4 = 0;
      puVar4 = puVar4 + 4;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (uVar9 != 0) {
    puVar1 = *(uint * PTR32 *)(in_esi + 8);
    *(uint * PTR32 *)(in_esi + 8) = puVar1 + 4;
    *puVar1 = uVar9;
    puVar1[2] = 5;
  }
  return uVar5;
}

/* ref: FUN_00bb8fc0 */
uint F_00bb8fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb8fc0u, gen_a0, gen_a1, 0u, 0u);
  int in_esi = (int)gen_a0;
  undefined4 * in_edi = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  
  puVar3 = (undefined4 *)F_00c02b60(in_esi,in_edi,0x10);
  iVar1 = *(int *)(in_esi + 0x20);
  if (puVar3[2] != 6) {
    F_00c02970(in_esi,in_edi,&REFG(undefined, 0x13419fc));
  }
  puVar5 = *(undefined4 * PTR32 *)(in_esi + 8);
  puVar2 = puVar5;
  for (; in_edi < puVar5; puVar5 = puVar5 + -4) {
    *puVar5 = puVar2[-4];
    puVar5[1] = puVar2[-3];
    puVar2[2] = puVar2[-2];
    puVar2 = puVar2 + -4;
  }
  if (*(int *)(in_esi + 0x1c) - *(int *)(in_esi + 8) < 0x11) {
    iVar4 = *(int *)(in_esi + 0x2c);
    if (iVar4 < 1) {
      iVar4 = iVar4 + 1;
    }
    else {
      iVar4 = iVar4 * 2;
    }
    F_00bb8c70(in_esi,iVar4);
  }
  *(int *)(in_esi + 8) = *(int *)(in_esi + 8) + 0x10;
  puVar5 = ((undefined4 *)GEN_TOP(((int)in_edi + (*(int *)(in_esi + 0x20) - iVar1))));
  *puVar5 = *puVar3;
  puVar5[1] = puVar3[1];
  puVar5[2] = puVar3[2];
  return (uint)puVar5;
}

/* ref: FUN_00bb9050 */
uint F_00bb9050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb9050u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int in_esi = (int)gen_a1;
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(in_esi + 0x20);
  F_00bb8d80(in_esi,1,0xffffffff);
  if (*((char *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(in_esi + 0x14) + 4))) + 6))) == '\0') {
    bVar1 = *(byte *)(in_esi + 0x38);
    while (((bVar1 & 2) != 0 &&
           (iVar3 = *((int *)GEN_TOP((*(int *)(in_esi + 0x14) + 0x14))),
           *((int *)GEN_TOP((*(int *)(in_esi + 0x14) + 0x14))) = iVar3 + -1, iVar3 != 0))) {
      F_00bb8d80(in_esi,4,0xffffffff);
      bVar1 = *(byte *)(in_esi + 0x38);
    }
  }
  return *(int *)(in_esi + 0x20) + (in_eax - iVar2);
}

/* ref: FUN_00bb90b0 */
uint F_00bb90b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb90b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  
  puVar2 = param_2;
  if ((*(byte *)(param_1 + 0x38) & 2) != 0) {
    puVar2 = (undefined4 *)F_00bb9050(param_2,param_1);
  }
  iVar4 = *(int *)(param_1 + 0x14);
  *(undefined4 * PTR32 *)(param_1 + 0x14) = (undefined4 *)(iVar4 + -0x18);
  iVar1 = *(int *)(iVar4 + 0x10);
  puVar3 = *(undefined4 * PTR32 *)(iVar4 + 4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar4 + -0x18);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar4 + -0xc);
  iVar4 = iVar1;
  for (; (iVar4 != 0 && (puVar2 < *(undefined4 * PTR32 *)(param_1 + 8))); puVar2 = puVar2 + 4) {
    *puVar3 = *puVar2;
    puVar3[1] = puVar2[1];
    iVar4 = iVar4 + -1;
    puVar3[2] = puVar2[2];
    puVar3 = puVar3 + 4;
  }
  for (; 0 < iVar4; iVar4 = iVar4 + -1) {
    puVar3[2] = 0;
    puVar3 = puVar3 + 4;
  }
  *(undefined4 * PTR32 *)(param_1 + 8) = puVar3;
  return iVar1 + 1;
}

/* ref: FUN_00bb9140 */
uint F_00bb9140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb9140u, gen_a0, gen_a1, 0u, 0u);
  char * in_edx = (char *)(uintptr_t)gen_a0;
  int in_esi = (int)gen_a1;
  char cVar1;
  uint * puVar2;
  int iVar3;
  char * pcVar4;
  uint uVar5;
  
  puVar2 = ((uint *)GEN_TOP(**(int * PTR32 *)(in_esi + 0x14)));
  *(uint * PTR32 *)(in_esi + 8) = puVar2;
  pcVar4 = in_edx;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = F_00c05a80(in_esi,in_edx,(int)pcVar4 - (int)(in_edx + 1));
  *puVar2 = uVar5;
  puVar2[2] = 4;
  if (*(int *)(in_esi + 0x1c) - *(int *)(in_esi + 8) < 0x11) {
    iVar3 = *(int *)(in_esi + 0x2c);
    if (0 < iVar3) {
      F_00bb8c70(in_esi,iVar3 * 2);
      *(int *)(in_esi + 8) = *(int *)(in_esi + 8) + 0x10;
      return 2;
    }
    F_00bb8c70(in_esi,iVar3 + 1);
  }
  *(int *)(in_esi + 8) = *(int *)(in_esi + 8) + 0x10;
  return 2;
}

/* ref: FUN_00bb91c0 */
uint F_00bb91c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb91c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (*(ushort *)(param_1 + 0x36) < *(ushort *)(param_1 + 0x34)) {
    F_00c02740(param_1,((char *)REFP(0x1341a54)));
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 8) + param_2 * -0x10;
  *(undefined1 *)(param_1 + 6) = 1;
  return 0xffffffff;
}

/* ref: FUN_00bb9200 */
uint F_00bb9200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb9200u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  code * pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint * puVar6;
  
  uVar1 = F_00c06020(*param_2);
  if (*((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x40))) <= *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x44)))) {
    F_00c01810(param_1);
  }
  pcVar2 = ((code *)REFP(0xc073f0));
  if (uVar1 != (int)REFG(char, 0x1341a88)) {
    pcVar2 = ((code *)REFP(0xc16340));
  }
  uVar1 = (*pcVar2)(param_1,*param_2,param_2 + 1,param_2[4]);
  uVar3 = F_00c05c10(param_1,(uint)*(byte *)(uVar1 + 0x48),*(undefined4 *)(param_1 + 0x48));
  iVar5 = 0;
  *(uint *)(uVar3 + 0x10) = uVar1;
  if (*(char *)(uVar1 + 0x48) != '\0') {
    puVar6 = (uint *)(uVar3 + 0x14);
    do {
      uVar4 = F_00c05c70(param_1);
      *puVar6 = uVar4;
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar5 < (int)(uint)*(byte *)(uVar1 + 0x48));
  }
  puVar6 = *(uint * PTR32 *)(param_1 + 8);
  *puVar6 = uVar3;
  puVar6[2] = 6;
  if (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 8) < 0x11) {
    iVar5 = *(int *)(param_1 + 0x2c);
    if (0 < iVar5) {
      uVar1 = F_00bb8c70(param_1,iVar5 * 2);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
      return uVar1;
    }
    uVar3 = F_00bb8c70(param_1,iVar5 + 1);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  return uVar3;
}

/* ref: FUN_00bb9320 */
uint F_00bb9320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb9320u, gen_a0, gen_a1, 0u, 0u);
  int in_esi = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  *(undefined4 * PTR32 *)(in_esi + 0x14) = *(undefined4 * PTR32 *)(in_esi + 0x28);
  uVar1 = **(undefined4 * PTR32 *)(in_esi + 0x28);
  *(undefined4 *)(in_esi + 0xc) = uVar1;
  F_00c05da0(in_esi,uVar1);
  F_00bb8b00(in_esi,param_2,*(undefined4 *)(in_esi + 0xc));
  *(undefined2 *)(in_esi + 0x34) = *(undefined2 *)(in_esi + 0x36);
  *(undefined1 *)(in_esi + 0x39) = 1;
  if ((20000 < *(int *)(in_esi + 0x30)) &&
     ((*(int *)(in_esi + 0x14) - *(int *)(in_esi + 0x28)) / 0x18 + 1 < 20000)) {
    F_00bb8cd0(in_esi,20000);
  }
  *(undefined4 *)(in_esi + 0x74) = 0;
  *(undefined4 *)(in_esi + 0x70) = 0;
  return 0;
}

/* ref: FUN_00bb93a0 */
unsigned int F_00bb93a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb93a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(int *)(param_1 + 0x70) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x70) + 0x44))) = param_2;
                    
    GEN_LONGJMP(((int *)GEN_TOP((*(int *)(param_1 + 0x70) + 4))), 1);
  }
  *(char *)(param_1 + 6) = (char)param_2;
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x58))) != 0) {
    F_00bb9320(param_1,param_2);
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x58))))(param_1,param_2);
  }
                    
  F_00c47c5b(1);
}

/* ref: FUN_00bb93f0 */
uint F_00bb93f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbb93f0u, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  if (20000 < *(int *)(in_esi + 0x30)) {
                    
    F_00bb93a0(in_esi,5);
  }
  F_00bb8cd0(in_esi,*(int *)(in_esi + 0x30) * 2);
  if (20000 < *(int *)(in_esi + 0x30)) {
    F_00c02740(in_esi,((char *)REFP(0x13419e8)));
  }
  *(int *)(in_esi + 0x14) = *(int *)(in_esi + 0x14) + 0x18;
  return *(uint *)(in_esi + 0x14);
}

/* ref: FUN_00bb9430 */
uint F_00bb9430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb9430u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  int iVar6;
  int * piVar7;
  int iVar8;
  int iVar9;
  
  piVar2 = param_2;
  if (param_2[2] != 6) {
    piVar2 = (int *)F_00bb8fc0(param_1,param_2);
  }
  iVar9 = *(int *)(param_1 + 0x20);
  iVar6 = *piVar2;
  *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x14) + 0xc))) = *(undefined4 *)(param_1 + 0x18);
  iVar8 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 8);
  if (*(char *)(iVar6 + 6) == '\0') {
    iVar6 = *(int *)(iVar6 + 0x10);
    uVar3 = (uint)*(byte *)(iVar6 + 0x4b);
    if (iVar8 <= (int)(uVar3 * 0x10)) {
      iVar8 = *(int *)(param_1 + 0x2c);
      if (iVar8 < (int)uVar3) {
        iVar8 = iVar8 + uVar3;
      }
      else {
        iVar8 = iVar8 * 2;
      }
      F_00bb8c70(param_1,iVar8);
    }
    uVar3 = (int)piVar2 + (*(int *)(param_1 + 0x20) - iVar9);
    if (*(char *)(iVar6 + 0x4a) == '\0') {
      uVar4 = uVar3 + 0x10;
      uVar1 = (uint)*(byte *)(iVar6 + 0x49) * 0x10 + uVar4;
      if (uVar1 < *(uint *)(param_1 + 8)) {
        *(uint *)(param_1 + 8) = uVar1;
      }
    }
    else {
      uVar4 = F_00bb8e70(iVar6,param_1,((int)(*(int *)(param_1 + 8) - uVar3) >> 4) + -1);
      uVar3 = (int)piVar2 + (*(int *)(param_1 + 0x20) - iVar9);
    }
    if (*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x24)) {
      puVar5 = (uint *)F_00bb93f0(param_1);
    }
    else {
      puVar5 = ((uint *)GEN_TOP((*(int *)(param_1 + 0x14) + 0x18)));
      *(uint * PTR32 *)(param_1 + 0x14) = puVar5;
    }
    puVar5[1] = uVar3;
    *puVar5 = uVar4;
    *(uint *)(param_1 + 0xc) = uVar4;
    puVar5[2] = (uint)*(byte *)(iVar6 + 0x4b) * 0x10 + uVar4;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar6 + 0xc);
    puVar5[5] = 0;
    puVar5[4] = param_3;
    uVar3 = *(uint *)(param_1 + 8);
    if (uVar3 < puVar5[2]) {
      do {
        *(undefined4 *)(uVar3 + 8) = 0;
        uVar3 = uVar3 + 0x10;
      } while (uVar3 < puVar5[2]);
    }
    *(uint *)(param_1 + 8) = puVar5[2];
    if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 4;
      F_00bb8d80(param_1,0,0xffffffff);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -4;
    }
    return 0;
  }
  if (iVar8 < 0x141) {
    iVar6 = *(int *)(param_1 + 0x2c);
    if (iVar6 < 0x14) {
      iVar6 = iVar6 + 0x14;
    }
    else {
      iVar6 = iVar6 * 2;
    }
    F_00bb8c70(param_1,iVar6);
  }
  if (*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x24)) {
    piVar7 = (int *)F_00bb93f0(param_1);
  }
  else {
    piVar7 = ((int *)GEN_TOP((*(int *)(param_1 + 0x14) + 0x18)));
    *(int * PTR32 *)(param_1 + 0x14) = piVar7;
  }
  iVar9 = (int)piVar2 + (*(int *)(param_1 + 0x20) - iVar9);
  piVar7[1] = iVar9;
  iVar9 = iVar9 + 0x10;
  *piVar7 = iVar9;
  *(int *)(param_1 + 0xc) = iVar9;
  piVar7[2] = *(int *)(param_1 + 8) + 0x140;
  piVar7[4] = param_3;
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    F_00bb8d80(param_1,0,0xffffffff);
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x14) + 4))) + 0x10))))(param_1);
  if (-1 < (int)uVar3) {
    F_00bb90b0(param_1,*(int *)(param_1 + 8) + uVar3 * -0x10);
    return 1;
  }
  return 2;
}

/* ref: FUN_00bb9600 */
uint F_00bb9600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb9600u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ushort uVar1;
  uint uVar2;
  
  *(short *)(param_1 + 0x34) = *(short *)(param_1 + 0x34) + 1;
  uVar1 = *(ushort *)(param_1 + 0x34);
  if (199 < uVar1) {
    if (uVar1 == 200) {
      F_00c02740(param_1,((char *)REFP(0x1341a04)));
    }
    else if (0xe0 < uVar1) {
                    
      F_00bb93a0(param_1,5);
    }
  }
  uVar2 = F_00bb9430(param_1,param_2,param_3);
  if (uVar2 == 0) {
    F_00c03850(param_1,1);
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  *(short *)(param_1 + 0x34) = *(short *)(param_1 + 0x34) + -1;
  if (*(uint *)(uVar2 + 0x40) <= *(uint *)(uVar2 + 0x44)) {
    uVar2 = F_00c01810(param_1);
  }
  return uVar2;
}

/* ref: FUN_00bb9680 */
uint F_00bb9680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb9680u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  if (*(char *)(param_1 + 6) == '\0') {
    uVar1 = F_00bb9430(param_1,param_2 + -0x10,0xffffffff);
    if (uVar1 != 0) {
      return uVar1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 6) = 0;
    if (*((char *)GEN_TOP((*((int *)GEN_TOP((*(undefined4 * PTR32 *)(param_1 + 0x14))[1])) + 6))) == '\0') {
      *(undefined4 *)(param_1 + 0xc) = **(undefined4 * PTR32 *)(param_1 + 0x14);
    }
    else {
      uVar1 = F_00bb90b0(param_1,param_2);
      if (uVar1 != 0) {
        *(undefined4 *)(param_1 + 8) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x14) + 8)));
      }
    }
  }
  uVar1 = F_00c03850(param_1,(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x28)) / 0x18);
  return uVar1;
}

/* ref: FUN_00bb9700 */
uint F_00bb9700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb9700u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  short sVar1;
  uint uVar2;
  
  if ((*(char *)(param_1 + 6) != '\x01') &&
     ((*(char *)(param_1 + 6) != '\0' || (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x28))))) {
    uVar2 = F_00bb9140(((char *)REFP(0x1341a18)),param_1);
    return uVar2;
  }
  if (199 < *(ushort *)(param_1 + 0x34)) {
    uVar2 = F_00bb9140(((char *)REFP(0x1341a40)),param_1);
    return uVar2;
  }
  sVar1 = *(ushort *)(param_1 + 0x34) + 1;
  *(short *)(param_1 + 0x34) = sVar1;
  *(short *)(param_1 + 0x36) = sVar1;
  uVar2 = F_00bb8b80(param_1,((code *)REFP(0xbb9680)),*(int *)(param_1 + 8) + param_2 * -0x10);
  if (uVar2 != 0) {
    *(char *)(param_1 + 6) = (char)uVar2;
    F_00bb8b00(param_1,uVar2,*(undefined4 *)(param_1 + 8));
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x14) + 8))) = *(undefined4 *)(param_1 + 8);
    *(short *)(param_1 + 0x34) = *(short *)(param_1 + 0x34) + -1;
    return uVar2;
  }
  *(short *)(param_1 + 0x34) = *(short *)(param_1 + 0x34) + -1;
  return (uint)*(byte *)(param_1 + 6);
}

/* ref: FUN_00bb97b0 */
uint F_00bb97b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbb97b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 * puVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  
  uVar3 = *(undefined2 *)(param_1 + 0x34);
  uVar2 = *(undefined1 *)(param_1 + 0x39);
  iVar4 = *(int *)(param_1 + 0x14);
  iVar5 = *(int *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x74) = param_5;
  uVar7 = F_00bb8b80(param_1,param_2,param_3);
  if (uVar7 == 0) {
    *(undefined4 *)(param_1 + 0x74) = uVar6;
    return 0;
  }
  iVar8 = *(int *)(param_1 + 0x20) + param_4;
  F_00c05da0(param_1,iVar8);
  F_00bb8b00(param_1,uVar7,iVar8);
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x28) + (iVar4 - iVar5))));
  *(undefined2 *)(param_1 + 0x34) = uVar3;
  *(undefined4 * PTR32 *)(param_1 + 0x14) = puVar1;
  *(undefined4 *)(param_1 + 0xc) = *puVar1;
  *(undefined4 *)(param_1 + 0x18) = puVar1[3];
  *(undefined1 *)(param_1 + 0x39) = uVar2;
  if (20000 < *(int *)(param_1 + 0x30)) {
    if (((int)puVar1 - *(int *)(param_1 + 0x28)) / 0x18 + 1 < 20000) {
      F_00bb8cd0(param_1,20000);
      *(undefined4 *)(param_1 + 0x74) = uVar6;
      return uVar7;
    }
    *(undefined4 *)(param_1 + 0x74) = uVar6;
    return uVar7;
  }
  *(undefined4 *)(param_1 + 0x74) = uVar6;
  return uVar7;
}

/* ref: FUN_00bb98b0 */
uint F_00bb98b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb98b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x74);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) = param_2;
  (*(undefined4 *)(gen_frame + 0x1c)) = param_3;
  ((byte *)(gen_frame + 0xc))[4] = 0;
  ((byte *)(gen_frame + 0xc))[5] = 0;
  ((byte *)(gen_frame + 0xc))[6] = 0;
  ((byte *)(gen_frame + 0xc))[7] = 0;
  ((byte *)(gen_frame + 0xc))[0xc] = 0;
  ((byte *)(gen_frame + 0xc))[0xd] = 0;
  ((byte *)(gen_frame + 0xc))[0xe] = 0;
  ((byte *)(gen_frame + 0xc))[0xf] = 0;
  uVar2 = F_00bb97b0(param_1,((code *)REFP(0xbb9200)),((byte *)(gen_frame + 0xc)),*(int *)(param_1 + 8) - *(int *)(param_1 + 0x20),
                       uVar1);
  F_00c11930(param_1,(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12)),0);
  return uVar2;
}

/* ref: FUN_00bb9920 */
unsigned int F_00bb9920(unsigned int gen_a0)
{
  GEN_ENTER(0xbb9920u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * PTR32 * ppuVar1;
  undefined * apuVar2 [1];
  undefined * PTR32 * ppuVar3;
  
  ppuVar3 = &REFG(undefined * PTR32, 0x1104828);
  apuVar2[0] = (*(undefined * PTR32 (*)[1])REFP(0x110482c))[0];
  while (apuVar2[0] != (undefined *)0x0) {
    F_00b9af30(param_1,apuVar2[0],0);
    F_00b9ae60(param_1,*ppuVar3);
    F_00b9b510(param_1,1,0);
    ppuVar1 = ppuVar3 + 3;
    ppuVar3 = ppuVar3 + 2;
    apuVar2[0] = *ppuVar1;
  }
  return 0;
}

/* ref: FUN_00bb9960 */
uint F_00bb9960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb9960u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00bb9970 */
uint F_00bb9970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb9970u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 8) = *param_2;
  *(undefined4 *)(in_ecx + 0xc) = param_2[1];
  *(undefined4 *)(in_ecx + 0x10) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00bb9990 */
uint F_00bb9990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb9990u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 8) = *param_2;
  *(undefined4 *)(in_ecx + 0xc) = param_2[1];
  *(undefined4 *)(in_ecx + 0x10) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00bb99c0 */
uint F_00bb99c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbb99c0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  *(undefined4 *)(in_ecx + 0x18) = 0;
  *(undefined4 *)(in_ecx + 0x1c) = 0;
  return in_ecx;
}

/* ref: FUN_00bb99d0 */
uint F_00bb99d0(unsigned int gen_a0)
{
  GEN_ENTER(0xbb99d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint in_EAX = 0;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x1c);
  if (piVar1 != (int *)0x0) {
    in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,this);
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    in_EAX = ((code *)*(gen_code32 *)*puVar2)(puVar2,0);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return in_EAX;
}

/* ref: FUN_00bb9a00 */
unsigned int F_00bb9a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb9a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x18);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return 0;
}

/* ref: FUN_00bb9a20 */
byte F_00bb9a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbb9a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (*(int *)((int)this + 0x18) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 4))))
                      (*(int * PTR32 *)((int)this + 0x18),param_1,param_2,param_3);
    return (byte)uVar1;
  }
  return 0;
}

/* ref: FUN_00bb9a40 */
unsigned int F_00bb9a40(unsigned int gen_a0)
{
  GEN_ENTER(0xbb9a40u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1104874));
  return 0;
}

/* ref: FUN_00bb9a50 */
unsigned int F_00bb9a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb9a50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(int *)((int)this + 0x18) == 0) {
    uVar1 = F_00c1e320(this);
    *(uint *)((int)this + 0x18) = uVar1;
  }
  if (*(int *)((int)this + 0x18) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 4))) = param_2;
  }
  return 0;
}

/* ref: FUN_00bb9a80 */
uint F_00bb9a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb9a80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * piVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  uVar4 = param_1;
  if ((((param_1 != 0) && (*(int *)((int)this + 0x18) != 0)) && (*(char *)(param_1 + 0x12) == '\0'))
     && (piVar1 = *(int * PTR32 *)(param_1 + 4), piVar1 != (int *)0x0)) {
    puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1)));
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x18) + 8))))(*(int * PTR32 *)((int)this + 0x18));
    if (uVar4 == 0) {
      iVar2 = *(int *)((int)this + 0x18);
      F_0054fa20(((undefined1 *)(gen_frame + 0x10)),puVar3);
      uVar4 = F_004ee9d0(&(*(undefined4 *)(gen_frame + 0x0)),&REFG(float, 0x1302c90),((undefined1 *)(gen_frame + 0x10)));
      *(undefined4 *)(iVar2 + 8) = (*(undefined4 *)(gen_frame + 0x0));
      *(undefined4 *)(iVar2 + 0xc) = (*(undefined4 *)(gen_frame + 0x4));
      *(undefined4 *)(iVar2 + 0x10) = (*(undefined4 *)(gen_frame + 0x8));
    }
    else {
      uVar4 = uVar4 - 1;
      if (uVar4 == 0) {
        iVar2 = *(int *)((int)this + 0x18);
        *(undefined4 *)(iVar2 + 8) = *puVar3;
        *(undefined4 *)(iVar2 + 0xc) = puVar3[1];
        *(undefined4 *)(iVar2 + 0x10) = puVar3[2];
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return uVar4;
}

/* ref: FUN_00bb9b50 */
uint F_00bb9b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb9b50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00bb9b60 */
uint F_00bb9b60(unsigned int gen_a0)
{
  GEN_ENTER(0xbb9b60u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  F_00c1e470(in_ecx);
  uVar1 = REFG(float, 0x1087f04);
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[6] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x1104880));
  in_ecx[5] = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_00bb9b90 */
uint F_00bb9b90(unsigned int gen_a0)
{
  GEN_ENTER(0xbb9b90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1104880));
  if (*(int *)((int)this + 0xc) != 0) {
    F_00a04370(*(int *)((int)this + 0xc));
  }
  uVar1 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    uVar1 = F_00a04370(*(int *)((int)this + 0x10));
  }
  F_00c1e490(this);
  return uVar1;
}

/* ref: FUN_00bb9bd0 */
unsigned int F_00bb9bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb9bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Animation::AnimationTreeNode::vf2 */
unsigned int F_00bb9be0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbb9be0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int * piVar1;
  
  if (0.0 < param_2) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(short *)(param_1 + 0x18) = (short)(int)param_2;
    *(undefined2 *)(param_1 + 0x1a) = 1;
    return 0;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 0xc);
  if ((piVar1 != (int *)0x0) && (*(int *)(param_1 + 0x10) != 0)) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,(undefined4)gen_fl2bits((float)(float10)0));
  }
  *(undefined2 *)(param_1 + 0x1a) = 0;
  return 0;
}

/* ref: Client::System::Animation::AnimationTreeNode::vf3 */
uint F_00bb9c40(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbb9c40u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)(param_1 + 0xc);
  piVar2 = *(int * PTR32 *)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    param_1 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,(undefined4)gen_fl2bits(param_2));
  }
  if (piVar2 != (int *)0x0) {
    param_1 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,(undefined4)gen_fl2bits(param_2));
  }
  return param_1;
}

/* ref: FUN_00bb9c80 */
uint F_00bb9c80(unsigned int gen_a0)
{
  GEN_ENTER(0xbb9c80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x14) = REFG(float, 0x1087f04);
  *(undefined2 *)(in_ecx + 0x18) = 0;
  return 0;
}

/* ref: FUN_00bb9ca0 */
uint F_00bb9ca0(unsigned int gen_a0)
{
  GEN_ENTER(0xbb9ca0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  
  piVar2 = (int *)param_1[3];
  piVar1 = param_1;
  do {
    piVar4 = piVar2;
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4);
    if (uVar3 == 1) {
      return (uint)piVar4;
    }
    if (uVar3 == 2) {
      piVar4 = (int *)piVar1[4];
      if (piVar4 == (int *)0x0) {
        return 0;
      }
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4);
      if (uVar3 == 1) {
        return (uint)piVar4;
      }
      if (uVar3 != 0) {
        return 0;
      }
    }
    piVar2 = (int *)piVar4[3];
    piVar1 = piVar4;
  } while( true );
}

/* ref: FUN_00bb9d00 */
uint F_00bb9d00(unsigned int gen_a0)
{
  GEN_ENTER(0xbb9d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00bb9ca0(this);
  return uVar1;
}

/* ref: FUN_00bb9d10 */
uint F_00bb9d10(unsigned int gen_a0)
{
  GEN_ENTER(0xbb9d10u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  
  piVar2 = (int *)param_1[4];
  piVar1 = param_1;
  do {
    piVar4 = piVar2;
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4);
    if (uVar3 == 1) {
      return (uint)piVar4;
    }
    if (uVar3 == 2) {
      piVar4 = (int *)piVar1[3];
      if (piVar4 == (int *)0x0) {
        return 0;
      }
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4);
      if (uVar3 == 1) {
        return (uint)piVar4;
      }
      if (uVar3 != 0) {
        return 0;
      }
    }
    piVar2 = (int *)piVar4[4];
    piVar1 = piVar4;
  } while( true );
}

/* ref: FUN_00bb9d70 */
uint F_00bb9d70(unsigned int gen_a0)
{
  GEN_ENTER(0xbb9d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00bb9d10(this);
  return uVar1;
}

/* ref: FUN_00bb9d80 */
uint F_00bb9d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb9d80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_2;
  if (param_2 != 0) {
    *(undefined * PTR32 *)(param_2 + 4) = this;
  }
  return uVar1;
}

/* ref: FUN_00bb9da0 */
float10 F_00bb9da0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb9da0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  gen_args[2] = gen_a2;
  float * pfVar1;
  float fVar2;
  short sVar3;
  int * piVar4;
  float * pfVar5;
  float10 fVar6;
  float fVar7;
  
  fVar7 = REFG(float, 0x1087f04);
  fVar2 = *(float *)((*(int *)&gen_args[0]) + 0x14);
  pfVar1 = (float *)((*(int *)&gen_args[0]) + 0x14);
  if (fVar2 < REFG(float, 0x1087f04)) {
    sVar3 = *(short *)((*(int *)&gen_args[0]) + 0x18);
    fVar6 = (float10)(*(float *)&gen_args[1]);
    (*(float *)&gen_args[1]) = REFG(float, 0x1087f04);
    *pfVar1 = (float)(fVar6 / (float10)(int)sVar3 + (float10)fVar2);
    pfVar5 = pfVar1;
    if ((GEN_ISNAN(fVar7) || GEN_ISNAN(*pfVar1)) || (fVar7 < *pfVar1 || fVar7 == *pfVar1)) {
      pfVar5 = &(*(float *)&gen_args[1]);
    }
    (*(float *)&gen_args[1]) = *pfVar5;
    *pfVar1 = (*(float *)&gen_args[1]);
    fVar6 = F_00bc0c10((*(float *)&gen_args[1]));
    return (float10)(float)fVar6;
  }
  *(undefined2 *)((*(int *)&gen_args[0]) + 0x1a) = 0;
  piVar4 = *(int * PTR32 *)((*(int *)&gen_args[0]) + 0xc);
  if (piVar4 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,(undefined4)gen_fl2bits((float)(float10)0));
    fVar7 = REFG(float, 0x1087f04);
  }
  return (float10)fVar7;
}

/* ref: FUN_00bb9e40 */
uint F_00bb9e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbb9e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  if (param_1 == *(uint *)((int)this + 0xc)) {
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined2 *)((int)this + 0x1a) = 0;
    iVar1 = *(int *)((int)this + 0x10);
    *(int *)((int)this + 0xc) = iVar1;
    if (iVar1 != 0) {
      *(undefined * PTR32 *)(iVar1 + 4) = this;
    }
    *(undefined4 *)((int)this + 0x10) = 0;
    return param_1;
  }
  if (param_1 == *(uint *)((int)this + 0x10)) {
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined2 *)((int)this + 0x1a) = 0;
    return param_1;
  }
  return 0;
}

/* ref: FUN_00bb9e90 */
uint F_00bb9e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbb9e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  int * piVar8;
  
  piVar8 = *(int * PTR32 *)((int)this + 0x10);
  piVar1 = *(int * PTR32 *)((int)this + 0xc);
  uVar7 = 0;
  bVar3 = false;
  bVar4 = false;
  if ((piVar1 != (int *)0x0) && (uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1), uVar5 == 2)) {
    bVar3 = true;
  }
  if ((piVar8 != (int *)0x0) && (uVar5 = ((code *)*(gen_code32 *)(*piVar8 + 0x10))(piVar8), uVar5 == 2)) {
    bVar4 = true;
  }
  if (bVar3) {
    if ((piVar8 != (int *)0x0) && (!bVar4)) goto LAB_00bb9f1e;
    *(undefined4 *)((int)this + 0xc) = 0;
    if (0 < param_2) {
      *param_1 = (int)piVar1;
      uVar7 = 1;
    }
  }
  if ((bVar4) &&
     (((piVar1 == (int *)0x0 || (bVar3)) &&
      (*(undefined4 *)((int)this + 0x10) = 0, (int)uVar7 < param_2)))) {
    param_1[uVar7] = (int)piVar8;
    uVar7 = uVar7 + 1;
  }
LAB_00bb9f1e: ;
  if ((((*(short *)((int)this + 0x1a) == 0) && (*(int *)((int)this + 0xc) != 0)) &&
      ((*(int *)((int)this + 0x10) != 0 &&
       ((piVar6 = piVar1, bVar3 || (piVar6 = piVar8, piVar8 = piVar1, bVar4)))))) &&
     (piVar6 != (int *)0x0)) {
    if ((int)uVar7 < param_2) {
      param_1[uVar7] = (int)piVar6;
      uVar7 = uVar7 + 1;
    }
    F_00bb9e40(this,piVar6);
    iVar2 = *(int *)((int)this + 4);
    if (iVar2 != 0) {
      if (*(undefined * PTR32 *)(iVar2 + 0xc) == this) {
        *(int * PTR32 *)(iVar2 + 0xc) = piVar8;
      }
      else {
        *(int * PTR32 *)(iVar2 + 0x10) = piVar8;
      }
      if (piVar8 != (int *)0x0) {
        piVar8[1] = iVar2;
      }
      *(undefined4 *)((int)this + 0xc) = 0;
      *(undefined4 *)((int)this + 0x10) = 0;
    }
  }
  return uVar7;
}

/* ref: Client::System::Animation::AnimationTreeNode::vf1 */
uint F_00bb9f90(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xbb9f90u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  int iVar1;
  float fVar2;
  
  if ((*(int *)(param_1 + 0xc) == 0) && (iVar1 = *(int *)(param_1 + 0x10), iVar1 != 0)) {
    *(int *)(param_1 + 0xc) = iVar1;
    *(int *)(iVar1 + 4) = param_1;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (((code *)GEN_TOP((&REFG(undefined * PTR32, 0x1341b74))[*(short *)(param_1 + 0x1a)])) == (code *)0x0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x1341b74))[*(short *)(param_1 + 0x1a)])))();
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    fVar2 = gen_bits2f(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x10) + 4))))(*(int * PTR32 *)(param_1 + 0x10)));
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    fVar2 = gen_bits2f(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 4))))(*(int * PTR32 *)(param_1 + 0xc)));
  }
  return (uint)gen_fl2bits(fVar2);
}

/* ref: Client::System::Animation::AnimationTreeNode::vf4 */
uint F_00bba060(void)
{
  GEN_ENTER(0xbba060u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Animation::AnimationTreeNode::vf0 */
uint F_00bba070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbba070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1104880));
  if (*(int *)(this + 0xc) != 0) {
    F_00a04370(*(int *)(this + 0xc));
  }
  if (*(int *)(this + 0x10) != 0) {
    F_00a04370(*(int *)(this + 0x10));
  }
  F_00c1e490(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Animation::AnimationTreeLeaf::vf2 */
unsigned int F_00bba0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbba0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00bba0e0 */
uint F_00bba0e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbba0e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  
  if (*(int *)((int)this + 0x10) != 0) {
    F_009f6650(*(int *)((int)this + 0x10),(float)(float10)0);
    F_009f7cb0(*(undefined * PTR32 *)((int)this + 0x10),&REFG(undefined, 0x14a2434));
    in_EAX = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0xc))))(*(int * PTR32 *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  return in_EAX;
}

/* ref: FUN_00bba120 */
unsigned int F_00bba120(unsigned int gen_a0)
{
  GEN_ENTER(0xbba120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  if ((piVar1 != (int *)0x0) && ((*(byte *)((int)this + 0x36) & 1) == 0)) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(ushort *)((int)this + 0x36) = *(ushort *)((int)this + 0x36) | 1;
  }
  return 0;
}

/* ref: FUN_00bba140 */
unsigned int F_00bba140(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbba140u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * piVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)(param_1 + 0x14);
  iVar2 = 2;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1,param_2,(undefined4)gen_fl2bits(param_3),param_4);
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_00bba180 */
unsigned int F_00bba180(unsigned int gen_a0)
{
  GEN_ENTER(0xbba180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = (int *)((int)this + 0x14);
  iVar3 = 2;
  do {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,this);
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return 0;
}

/* ref: FUN_00bba1b0 */
unsigned int F_00bba1b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbba1b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = (int *)((int)this + 0x14);
  iVar3 = 2;
  do {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1,this);
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return 0;
}

/* ref: FUN_00bba1e0 */
byte F_00bba1e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbba1e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    bVar1 = F_009f2ed0(*(undefined * PTR32 *)((int)this + 0x10));
    if (bVar1 != 0) {
      return *(byte *)((int)this + 0x2e) >> 2 & 1;
    }
  }
  return 1;
}

/* ref: FUN_00bba210 */
byte F_00bba210(unsigned int gen_a0)
{
  GEN_ENTER(0xbba210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    bVar1 = F_009f2ed0(*(undefined * PTR32 *)((int)this + 0x10));
    if (bVar1 != 0) {
      return *(byte *)((int)this + 0x2e) >> 3 & 1;
    }
  }
  return 1;
}

/* ref: FUN_00bba240 */
unsigned int F_00bba240(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbba240u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(param_1 + 0x30) = param_2;
  if (*(int *)(param_1 + 0x10) != 0) {
    F_009f6740(*(int *)(param_1 + 0x10),param_2);
  }
  return 0;
}

/* ref: FUN_00bba270 */
unsigned int F_00bba270(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbba270u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 0x10) != 0) {
    F_009f66a0(*(int *)(param_1 + 0x10),param_2);
  }
  return 0;
}

/* ref: FUN_00bba290 */
uint F_00bba290(unsigned int gen_a0)
{
  GEN_ENTER(0xbba290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    uVar1 = F_009f2ac0(*(undefined * PTR32 *)((int)this + 0x10));
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00bba2a0 */
double F_00bba2a0(unsigned int gen_a0)
{
  GEN_ENTER(0xbba2a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    fVar1 = F_009f2c50(*(undefined * PTR32 *)((int)this + 0x10));
    return (double)fVar1;
  }
  return 0.0;
}

/* ref: FUN_00bba2d0 */
uint F_00bba2d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbba2d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int * this;
  uint uVar1;
  int * this_00;
  int * piVar2;
  
  this = *(int * PTR32 *)(param_1 + 4);
  uVar1 = 0;
  if (this != (int *)0x0) {
    uVar1 = F_00a03ed0();
    if (this[4] == 0) {
      F_00bb9d80(this,this + 4,uVar1);
      ((code *)*(gen_code32 *)(*this + 8))(this,(undefined4)gen_fl2bits(param_2));
      return uVar1;
    }
    this_00 = (int *)F_00a03e20();
    F_00bb9d80(this_00,this_00 + 3,param_1);
    F_00bb9d80(this_00,this_00 + 4,uVar1);
    piVar2 = this + 3;
    if (*piVar2 != param_1) {
      piVar2 = this + 4;
    }
    F_00bb9d80(this,piVar2,this_00);
    ((code *)*(gen_code32 *)(*this_00 + 8))(this_00,(undefined4)gen_fl2bits(param_2));
  }
  return uVar1;
}

/* ref: FUN_00bba370 */
unsigned int F_00bba370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbba370u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  return 0;
}

/* ref: FUN_00bba380 */
uint F_00bba380(unsigned int gen_a0)
{
  GEN_ENTER(0xbba380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  uVar2 = *(uint *)((int)this + 0x1c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x11048b0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x11048a4));
  if (uVar2 != 0) {
    *(undefined4 *)(uVar2 + 0xb4) = 0;
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar4 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    piVar4 = *(int * PTR32 *)((int)this + 0x10);
    if ((piVar4 != (int *)0x0) && ((*(byte *)((int)this + 0x36) & 1) == 0)) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
      *(ushort *)((int)this + 0x36) = *(ushort *)((int)this + 0x36) | 1;
    }
  }
  piVar4 = (int *)((int)this + 0x14);
  iVar3 = 2;
  do {
    piVar1 = (int *)*piVar4;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,this);
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  F_00c1e4a0((int)this + 0xc);
  F_00c1e490(this);
  return uVar2;
}

/* ref: FUN_00bba400 */
unsigned int F_00bba400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbba400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(int *)((int)this + 0x10) != 0) {
    F_009f6650(*(int *)((int)this + 0x10),(float)(float10)0);
    F_009f7cb0(*(undefined * PTR32 *)((int)this + 0x10),&REFG(undefined, 0x14a2434));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0xc))))(*(int * PTR32 *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  return 0;
}

/* ref: Client::System::Animation::AnimationTreeLeaf::vf3 */
unsigned int F_00bba440(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbba440u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this;
  byte bVar1;
  
  if (*(undefined * PTR32 *)(param_1 + 0x10) != (undefined *)0x0) {
    bVar1 = F_009f2f00(*(undefined * PTR32 *)(param_1 + 0x10));
    if (bVar1 != 0) {
      if ((((!GEN_ISNAN(param_2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
            !(param_2 <= *(float *)&REFG(undefined, 0x1088114))) && (*((int *)GEN_TOP((*(int *)(param_1 + 4) + 0xc))) != 0))
         && (*((int *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))) != 0)) {
        F_00bba2d0(param_1,param_2);
      }
      this = *(undefined * PTR32 *)(param_1 + 0x10);
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(float *)(gen_frame + 0x8)) = (float)((float10)param_2 / (float10)*(double *)&REFG(undefined, 0x1088070));
      F_009f7cb0(this,&(*(undefined4 *)(gen_frame + 0x4)));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x10) + 0xc))))(*(int * PTR32 *)(param_1 + 0x10));
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined2 *)(param_1 + 0x34) = 1;
      return 0;
    }
  }
  if (*(float *)&REFG(undefined, 0x1088114) < param_2) {
    if (*(int *)(param_1 + 0x10) != 0) {
      F_00bba2d0(param_1,param_2);
      return 0;
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x34) = 1;
    if (*(int *)(param_1 + 0x10) != 0) {
      F_009f6650(*(int *)(param_1 + 0x10),(float)(float10)0);
    }
  }
  return 0;
}

/* ref: FUN_00bba510 */
unsigned int F_00bba510(float gen_a0, float gen_a1)
{
  GEN_ENTER(0xbba510u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  int iVar2;
  float * pfVar3;
  
  (*(float *)(gen_frame + 0x8)) = (*(float *)&gen_args[0]);
  iVar2 = *(int *)((int)gen_fl2bits((*(float *)&gen_args[0])) + 0x10);
  if (iVar2 != 0) {
    (*(float *)(gen_frame + 0x8)) = 0.0;
    pfVar3 = &(*(float *)&gen_args[1]);
    if (!((float10)0 < (float10)(*(float *)&gen_args[1]))) {
      pfVar3 = &(*(float *)(gen_frame + 0x8));
    }
    fVar1 = *pfVar3;
    (*(float *)&gen_args[1]) = fVar1;
    (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
    pfVar3 = &(*(float *)&gen_args[1]);
    if (!(fVar1 < REFG(float, 0x1087f04))) {
      pfVar3 = &(*(float *)(gen_frame + 0x8));
    }
    (*(float *)&gen_args[1]) = *pfVar3;
    F_009f6650(iVar2,(*(float *)&gen_args[1]));
  }
  return 0;
}

/* ref: FUN_00bba570 */
uint F_00bba570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbba570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  undefined4 * puVar2;
  
  F_00c1e470(this);
  uVar1 = REFG(float, 0x1087f04);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[2])REFP(0x1104898));
  *(undefined4 *)((int)this + 0x20) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x11048b0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x11048a4));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0xffffffff;
  *(undefined4 *)((int)this + 0x30) = uVar1;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = uVar1;
  *(undefined4 *)((int)this + 0x3c) = uVar1;
  for (puVar2 = (undefined4 *)((int)this + 0x14); puVar2 != (undefined4 *)((int)this + 0x1c);
      puVar2 = puVar2 + 1) {
    *puVar2 = 0;
  }
  return (uint)this;
}

/* ref: FUN_00bba5e0 */
unsigned int F_00bba5e0(float gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xbba5e0u, gen_trace_f(gen_a0), gen_a1, gen_trace_f(gen_a2), 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  int iVar2;
  float * pfVar3;
  
  (*(float *)(gen_frame + 0x8)) = (*(float *)&gen_args[0]);
  *(float *)((int)gen_fl2bits((*(float *)&gen_args[0])) + 0x38) = (*(float *)&gen_args[2]);
  iVar2 = *(int *)((int)gen_fl2bits((*(float *)&gen_args[0])) + 0x10);
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)gen_fl2bits((*(float *)&gen_args[0])) + 0x3c) * (float10)(*(float *)&gen_args[2]))));
  (*(float *)&gen_args[2]) = fVar1;
  if (iVar2 != 0) {
    (*(float *)(gen_frame + 0x8)) = 0.0;
    pfVar3 = &(*(float *)&gen_args[2]);
    if (!((float10)0 < (float10)fVar1)) {
      pfVar3 = &(*(float *)(gen_frame + 0x8));
    }
    fVar1 = *pfVar3;
    (*(float *)&gen_args[2]) = fVar1;
    (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
    pfVar3 = &(*(float *)&gen_args[2]);
    if (!(fVar1 < REFG(float, 0x1087f04))) {
      pfVar3 = &(*(float *)(gen_frame + 0x8));
    }
    (*(float *)&gen_args[2]) = *pfVar3;
    F_009f6650(iVar2,(*(float *)&gen_args[2]));
  }
  return 0;
}

/* ref: FUN_00bba650 */
uint F_00bba650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbba650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)((int)this + 0x14);
  piVar1 = (int *)((int)this + 0x1c);
  if (piVar2 != piVar1) {
    do {
      if (*piVar2 == param_1) break;
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
    if (piVar2 != piVar1) {
      return (uint)piVar2;
    }
  }
  uVar3 = 0;
  piVar2 = (int *)((int)this + 0x14);
  do {
    if (*piVar2 == 0) {
      *(int *)((int)this + uVar3 * 4 + 0x14) = param_1;
      return uVar3;
    }
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 1;
  } while ((int)uVar3 < 2);
  return uVar3;
}

/* ref: FUN_00bba6a0 */
unsigned int F_00bba6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbba6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar1 = (int *)((int)this + 0x14);
  piVar2 = (int *)((int)this + 0x1c);
  if (piVar1 != piVar2) {
    do {
      if (*piVar1 == param_1) break;
      piVar1 = piVar1 + 1;
    } while (piVar1 != piVar2);
    if (piVar1 != piVar2) {
      *piVar1 = 0;
    }
  }
  return 0;
}

/* ref: FUN_00bba6d0 */
byte F_00bba6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbba6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  for (piVar1 = (int *)((int)this + 0x14);
      (piVar1 != (int *)((int)this + 0x1c) && (*piVar1 != param_1)); piVar1 = piVar1 + 1) {
  }
  return piVar1 != (int *)((int)this + 0x1c);
}

/* ref: FUN_00bba700 */
unsigned int F_00bba700(float gen_a0, float gen_a1)
{
  GEN_ENTER(0xbba700u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  int iVar2;
  float * pfVar3;
  
  (*(float *)(gen_frame + 0x8)) = (*(float *)&gen_args[0]);
  *(float *)((int)gen_fl2bits((*(float *)&gen_args[0])) + 0x3c) = (*(float *)&gen_args[1]);
  iVar2 = *(int *)((int)gen_fl2bits((*(float *)&gen_args[0])) + 0x10);
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)gen_fl2bits((*(float *)&gen_args[0])) + 0x38) * (float10)(*(float *)&gen_args[1]))));
  (*(float *)&gen_args[1]) = fVar1;
  if (iVar2 != 0) {
    (*(float *)(gen_frame + 0x8)) = 0.0;
    pfVar3 = &(*(float *)&gen_args[1]);
    if (!((float10)0 < (float10)fVar1)) {
      pfVar3 = &(*(float *)(gen_frame + 0x8));
    }
    fVar1 = *pfVar3;
    (*(float *)&gen_args[1]) = fVar1;
    (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
    pfVar3 = &(*(float *)&gen_args[1]);
    if (!(fVar1 < REFG(float, 0x1087f04))) {
      pfVar3 = &(*(float *)(gen_frame + 0x8));
    }
    (*(float *)&gen_args[1]) = *pfVar3;
    F_009f6650(iVar2,(*(float *)&gen_args[1]));
  }
  return 0;
}

/* ref: Client::System::Animation::AnimationTreeLeaf::vf1 */
uint F_00bba770(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xbba770u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x14c5980) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14c5980) = *(uint *)&REFG(undefined, 0x14c5980) | 1;
    *(gen_code32 *)&REFG(undefined, 0x14c5970) = ((code *)REFP(0xbba5e0));
    *(undefined4 *)&REFG(undefined, 0x14c5974) = 0;
    *(gen_code32 *)&REFG(undefined, 0x14c5978) = ((code *)REFP(0xbba400));
    *(undefined4 *)&REFG(undefined, 0x14c597c) = 0;
  }
  uVar1 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x14c5970) + *(short *)(param_1 + 0x34) * 8))
                    (*(int *)(&REFG(undefined, 0x14c5974) + *(short *)(param_1 + 0x34) * 8) + param_1);
  return uVar1;
}

/* ref: FUN_00bba7e0 */
unsigned int F_00bba7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbba7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  int * piVar6;
  int * piVar7;
  
  iVar2 = *(int *)((int)this + 0x10);
  if ((iVar2 != 0) && (piVar7 = ((int *)GEN_TOP(**(int * PTR32 *)(iVar2 + 0x14))), piVar7 != *(int * PTR32 *)(iVar2 + 0x14)))
  {
    do {
      iVar3 = piVar7[3];
      if (param_1 != (int *)0x0) {
        piVar6 = (int *)(iVar3 + 0xc);
        for (piVar4 = piVar6; piVar4 != (int *)(iVar3 + 0x1c); piVar4 = piVar4 + 1) {
          if ((int *)*piVar4 == param_1) goto LAB_00bba84e;
        }
        if ((int *)*piVar4 != param_1) {
          iVar5 = 0;
          do {
            if (*piVar6 == 0) {
              *(int * PTR32 *)(iVar3 + 0xc + iVar5 * 4) = param_1;
              ((code *)*(gen_code32 *)(*param_1 + 0x20))(param_1,iVar3);
              break;
            }
            iVar5 = iVar5 + 1;
            piVar6 = piVar6 + 1;
          } while (iVar5 < 4);
        }
      }
LAB_00bba84e: ;
      if (*(char *)((int)piVar7 + 0x11) == '\0') {
        piVar6 = (int *)piVar7[2];
        if (*(char *)((int)piVar6 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar6 + 0x11);
          piVar7 = piVar6;
          piVar6 = (int *)*piVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar6 + 0x11);
            piVar7 = piVar6;
            piVar6 = (int *)*piVar6;
          }
        }
        else {
          cVar1 = *(char *)(piVar7[1] + 0x11);
          piVar4 = (int *)piVar7[1];
          piVar6 = piVar7;
          while ((piVar7 = piVar4, cVar1 == '\0' && (piVar6 == (int *)piVar7[2]))) {
            cVar1 = *(char *)(piVar7[1] + 0x11);
            piVar4 = (int *)piVar7[1];
            piVar6 = piVar7;
          }
        }
      }
    } while (piVar7 != *(int * PTR32 *)(iVar2 + 0x14));
  }
  return 0;
}

/* ref: FUN_00bba8b0 */
unsigned int F_00bba8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbba8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  iVar2 = *(int *)((int)this + 0x10);
  if ((iVar2 != 0) && (piVar5 = ((int *)GEN_TOP(**(int * PTR32 *)(iVar2 + 0x14))), piVar5 != *(int * PTR32 *)(iVar2 + 0x14)))
  {
    do {
      if (param_1 != 0) {
        iVar4 = 0;
        piVar6 = (int *)(piVar5[3] + 0xc);
        do {
          if (*piVar6 == param_1) {
            *(undefined4 *)(piVar5[3] + 0xc + iVar4 * 4) = 0;
            break;
          }
          iVar4 = iVar4 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar4 < 4);
      }
      if (*(char *)((int)piVar5 + 0x11) == '\0') {
        piVar6 = (int *)piVar5[2];
        if (*(char *)((int)piVar6 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar6 + 0x11);
          piVar5 = piVar6;
          piVar6 = (int *)*piVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar6 + 0x11);
            piVar5 = piVar6;
            piVar6 = (int *)*piVar6;
          }
        }
        else {
          cVar1 = *(char *)(piVar5[1] + 0x11);
          piVar3 = (int *)piVar5[1];
          piVar6 = piVar5;
          while ((piVar5 = piVar3, cVar1 == '\0' && (piVar6 == (int *)piVar5[2]))) {
            cVar1 = *(char *)(piVar5[1] + 0x11);
            piVar3 = (int *)piVar5[1];
            piVar6 = piVar5;
          }
        }
      }
    } while (piVar5 != *(int * PTR32 *)(iVar2 + 0x14));
  }
  return 0;
}

/* ref: FUN_00bba950 */
byte F_00bba950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbba950u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) != 0) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 0x14)));
    puVar2 = (undefined4 *)F_00bbaae0(&(*(undefined * PTR32 *)(gen_frame + 0x8)),*puVar1,puVar1,&(*(undefined4 *)&gen_args[1]));
    return (undefined4 *)*puVar2 != puVar1;
  }
  return 0;
}

/* ref: FUN_00bba990 */
uint F_00bba990(unsigned int gen_a0)
{
  GEN_ENTER(0xbba990u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bba9a0 */
unsigned int F_00bba9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbba9a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 1) {
    *puVar1 = *param_3;
  }
  return 0;
}

/* ref: FUN_00bba9c0 */
unsigned int F_00bba9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbba9c0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_1 != param_2) {
    piVar1 = param_1;
    do {
      if (*piVar1 == *param_3) {
        return 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00bba9e0 */
uint F_00bba9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbba9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bba9f0 */
uint F_00bba9f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbba9f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbaa00 */
unsigned int F_00bbaa00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbaa00u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_1 != param_2) {
    piVar1 = param_1;
    do {
      if (*piVar1 == *param_3) {
        return 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00bbaa20 */
uint F_00bbaa20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbaa20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: Client::System::Animation::AnimationTreeLeaf::vf4 */
uint F_00bbaa30(void)
{
  GEN_ENTER(0xbbaa30u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00bbaa40 */
uint F_00bbaa40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbaa40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00bbaab0((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00bbaa50 */
unsigned int F_00bbaa50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbaa50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 1) {
    *puVar1 = *param_3;
  }
  return 0;
}

/* ref: FUN_00bbaa70 */
unsigned int F_00bbaa70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbaa70u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_1 != param_2) {
    piVar1 = param_1;
    do {
      if (*piVar1 == *param_3) {
        return 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00bbaa90 */
unsigned int F_00bbaa90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbaa90u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_1 != param_2) {
    piVar1 = param_1;
    do {
      if (*piVar1 == *param_3) {
        return 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_2);
  }
  return 0;
}

/* ref: Client::System::Animation::AnimationTreeLeaf::vf0 */
uint F_00bbaab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbaab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bba380(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bbaae0 */
uint F_00bbaae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbbaae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  if (param_2 == param_3) {
    *param_1 = param_2;
    return (uint)param_1;
  }
  piVar4 = param_2;
  do {
    if (piVar4[3] == *param_4) break;
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
  } while (piVar4 != param_3);
  *param_1 = piVar4;
  return (uint)param_1;
}

/* ref: FUN_00bbab60 */
uint F_00bbab60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbbab60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00bbaae0(((undefined1 *)(gen_frame + 0x8)),param_2,param_3,param_4);
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00bbab90 */
uint F_00bbab90(unsigned int gen_a0)
{
  GEN_ENTER(0xbbab90u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_00c1e470(in_ecx);
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x11048c8));
  return (uint)in_ecx;
}

/* ref: Client::System::Animation::AnimationTreeEmpty::vf1 */
unsigned int F_00bbabc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbabc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::System::Animation::AnimationTreeEmpty::vf2 */
unsigned int F_00bbabd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbabd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Animation::AnimationTreeEmpty::vf3 */
unsigned int F_00bbabe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbabe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Animation::AnimationTreeEmpty::vf4 */
uint F_00bbabf0(void)
{
  GEN_ENTER(0xbbabf0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Client::System::Animation::AnimationTreeEmpty::vf0 */
uint F_00bbac00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbac00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x11048c8));
  F_00c1e490(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bbac40 */
byte F_00bbac40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbac40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (*(char *)(in_ecx + 0x10) == '\0') {
    return 0;
  }
  return *(int *)(in_ecx + 0xc) == param_2;
}

/* ref: FUN_00bbac60 */
unsigned int F_00bbac60(float gen_a0)
{
  GEN_ENTER(0xbbac60u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bbac80 */
uint F_00bbac80(unsigned int gen_a0)
{
  GEN_ENTER(0xbbac80u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10f1498));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0xffffffff;
  *(undefined2 *)(in_ecx + 4) = 0;
  *(undefined1 *)((int)in_ecx + 0x12) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00bbaca0 */
uint F_00bbaca0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbaca0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0xffffffff;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined2 *)(in_ecx + 0x10) = 0;
  *(undefined1 *)(in_ecx + 0x12) = 0;
  return 0;
}

/* ref: FUN_00bbacc0 */
uint F_00bbacc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbacc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    if (*(char *)((int)this + 0x11) != '\0') {
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 0xc) = 0xffffffff;
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined2 *)((int)this + 0x10) = 0;
      *(undefined1 *)((int)this + 0x12) = 0;
    }
    *(int *)((int)this + 4) = param_1;
    *(undefined2 *)((int)this + 0x11) = 1;
  }
  return 0;
}

/* ref: FUN_00bbad00 */
byte F_00bbad00(unsigned int gen_a0)
{
  GEN_ENTER(0xbbad00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(char *)((int)this + 0x12) == '\0') {
    if (*(char *)((int)this + 0x10) != '\0') {
      return 1;
    }
    if ((*(int *)((int)this + 4) != 0) &&
       (uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x4c))))(*(int * PTR32 *)((int)this + 4)),
       uVar1 != 0)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00bbad30 */
uint F_00bbad30(unsigned int gen_a0)
{
  GEN_ENTER(0xbbad30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(char *)((int)this + 0x12) == '\0') {
    if (*(char *)((int)this + 0x10) != '\0') {
      return *(uint *)((int)this + 0xc);
    }
    if (*(int *)((int)this + 4) != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x4c))))(*(int * PTR32 *)((int)this + 4));
      if (uVar1 != 0) {
        return (uint)*(ushort *)(uVar1 + 0x88);
      }
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00bbad60 */
byte F_00bbad60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbad60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (*(char *)((int)this + 0x12) == '\0') {
    if (*(char *)((int)this + 0x10) != '\0') {
      return *(uint *)((int)this + 0xc) == param_1;
    }
    if (*(int *)((int)this + 4) != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x4c))))(*(int * PTR32 *)((int)this + 4));
      if (uVar1 != 0) {
        return *(ushort *)(uVar1 + 0x88) == param_1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00bbadb0 */
byte F_00bbadb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbadb0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(undefined4 *)(in_ecx + 0xc) = param_2;
  *(undefined1 *)(in_ecx + 0x10) = 1;
  *(undefined2 *)(in_ecx + 0x11) = 1;
  return 1;
}

/* ref: FUN_00bbadd0 */
uint F_00bbadd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbadd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 != 0) {
    *(uint *)(in_ecx + 8) = param_2;
    *(undefined2 *)(in_ecx + 0x11) = 1;
  }
  return param_2;
}

/* ref: FUN_00bbadf0 */
byte F_00bbadf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbadf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0xc) = param_1;
  if ((param_1 < 0x158) && ((&REFG(undefined4, 0x14a31f0))[param_1] != 0)) {
    *(undefined1 *)((int)this + 0x10) = 1;
    *(undefined2 *)((int)this + 0x11) = 1;
    return 1;
  }
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x11) = 0x100;
  return (byte)param_1;
}

/* ref: FUN_00bbae30 */
uint F_00bbae30(unsigned int gen_a0)
{
  GEN_ENTER(0xbbae30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(char *)((int)this + 0x12) == '\0') {
    if (*(int *)((int)this + 4) != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4));
      return uVar1;
    }
    if (*(char *)((int)this + 0x10) == '\0') {
      return *(uint *)((int)this + 8);
    }
    if ((*(uint *)((int)this + 0xc) < 0x158) &&
       (((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[*(uint *)((int)this + 0xc)])) != (undefined *)0x0)) {
      uVar1 = F_00a5f290(((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[*(uint *)((int)this + 0xc)])));
      if (uVar1 != 0) {
        return *(uint *)(uVar1 + 0xec);
      }
    }
  }
  return 0;
}

/* ref: FUN_00bbaea0 */
uint F_00bbaea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbaea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  uint in_EAX = 0;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  if (((param_1 != (undefined *)0x0) && (*(char *)((int)this + 0x11) != '\0')) &&
     (*(char *)((int)param_1 + 0x11) != '\0')) {
    if (*(uint *)((int)this + 4) != 0) {
      if (*(char *)((int)param_1 + 0x12) == '\0') {
        in_EAX = *(uint *)((int)param_1 + 4);
      }
      else {
        in_EAX = 0;
      }
      if (*(uint *)((int)this + 4) == in_EAX) goto LAB_00bbaed2;
    }
    if (*(char *)((int)this + 0x10) != '\0') {
      bVar1 = F_00bbad00(param_1);
      if (bVar1 != 0) {
        uVar2 = F_00bbad30(param_1);
        bVar1 = F_00bbac40(this,uVar2);
        return CONCAT31(extraout_var,bVar1);
      }
    }
    uVar2 = F_00bbae30(this);
    in_EAX = 0;
    if (uVar2 != 0) {
      in_EAX = F_00bbae30(param_1);
      if (uVar2 == in_EAX) {
LAB_00bbaed2: ;
        return CONCAT31((int3)(in_EAX >> 8),1);
      }
    }
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00bbaf20 */
uint F_00bbaf20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbaf20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00bbaea0(this,param_1);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  *(undefined2 *)((int)this + 0x11) = 0x100;
  return CONCAT31((int3)(uVar1 >> 8),1);
}

/* ref: FUN_00bbaf50 */
uint F_00bbaf50(unsigned int gen_a0)
{
  GEN_ENTER(0xbbaf50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(char *)((int)this + 0x12) == '\0') {
    if (*(int *)((int)this + 4) != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
      return uVar1;
    }
    if ((*(char *)((int)this + 0x10) != '\0') && (*(uint *)((int)this + 0xc) < 0x158)) {
      return (&REFG(undefined4, 0x14a31f0))[*(uint *)((int)this + 0xc)];
    }
  }
  return 0;
}

/* ref: FUN_00bbaf90 */
uint F_00bbaf90(unsigned int gen_a0)
{
  GEN_ENTER(0xbbaf90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(char *)((int)this + 0x12) == '\0') {
    if (*(int *)((int)this + 4) != 0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x4c))))(*(int * PTR32 *)((int)this + 4));
      return uVar1;
    }
    if (((*(char *)((int)this + 0x10) != '\0') && (*(uint *)((int)this + 0xc) < 0x158)) &&
       (((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[*(uint *)((int)this + 0xc)])) != (undefined *)0x0)) {
      uVar1 = F_00a5f290(((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[*(uint *)((int)this + 0xc)])));
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_00bbafd0 */
uint F_00bbafd0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbafd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  if (*(char *)((int)this + 0x12) == '\0') {
    iVar1 = *(int *)((int)this + 4);
    if (iVar1 == 0) {
      if (*(char *)((int)this + 0x10) == '\0') {
        if (*(int *)((int)this + 8) != 0) {
          uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 8))))(*(int * PTR32 *)((int)this + 8));
          if (uVar3 == 3) {
            return *(uint *)((int)this + 8);
          }
        }
      }
      else if ((*(uint *)((int)this + 0xc) < 0x158) &&
              (((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[*(uint *)((int)this + 0xc)])) != (undefined *)0x0)) {
        uVar3 = F_00a5f500(((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[*(uint *)((int)this + 0xc)])));
        return uVar3;
      }
    }
    else if ((*(int *)(iVar1 + 0x6c) != 2) ||
            ((*(int *)(iVar1 + 0x88) != 8 && (*(int *)(iVar1 + 0x88) != 9)))) {
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x34))))(*(int * PTR32 *)((int)this + 4))));
      if (piVar2 != (int *)0x0) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
        if (uVar3 == 3) {
          return (uint)piVar2;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00bbb060 */
unsigned int F_00bbb060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined2 *)((int)this + 0x10) = 0;
    *(undefined1 *)((int)this + 0x12) = 0;
    *(undefined4 *)((int)this + 0xc) = 0xffffffff;
    return 0;
  }
  if (*(char *)(param_1 + 0x12) != '\0') goto LAB_00bbb149;
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    if (*(char *)((int)this + 0x11) != '\0') {
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 0xc) = 0xffffffff;
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined2 *)((int)this + 0x10) = 0;
      *(undefined1 *)((int)this + 0x12) = 0;
    }
    *(int *)((int)this + 4) = iVar1;
    *(undefined2 *)((int)this + 0x11) = 1;
  }
  if (*(char *)(param_1 + 0x12) != '\0') goto LAB_00bbb149;
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (*(int *)(param_1 + 4) == 0) goto LAB_00bbb149;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x4c))))(*(int * PTR32 *)(param_1 + 4));
    if (uVar2 == 0) goto LAB_00bbb149;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    if (*(int *)(param_1 + 4) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x44))))(*(int * PTR32 *)(param_1 + 4));
    }
    if (*(char *)(param_1 + 0x12) != '\0') goto LAB_00bbb11e;
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (*(int *)(param_1 + 4) != 0) {
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x4c))))(*(int * PTR32 *)(param_1 + 4));
        if (uVar2 != 0) {
          uVar2 = (uint)*(ushort *)(uVar2 + 0x88);
          goto LAB_00bbb121;
        }
      }
      goto LAB_00bbb11e;
    }
    uVar2 = *(uint *)(param_1 + 0xc);
  }
  else {
LAB_00bbb11e: ;
    uVar2 = 0xffffffff;
  }
LAB_00bbb121: ;
  *(uint *)((int)this + 0xc) = uVar2;
  if ((uVar2 < 0x158) && ((&REFG(undefined4, 0x14a31f0))[uVar2] != 0)) {
    *(undefined1 *)((int)this + 0x10) = 1;
    *(undefined2 *)((int)this + 0x11) = 1;
  }
  else {
    *(undefined1 *)((int)this + 0x10) = 0;
    *(undefined2 *)((int)this + 0x11) = 0x100;
  }
LAB_00bbb149: ;
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)((int)this + 8) = *(int *)(param_1 + 8);
    *(undefined2 *)((int)this + 0x11) = 1;
  }
  return 0;
}

/* ref: FUN_00bbb160 */
uint F_00bbb160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb160u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00bbb180 */
uint F_00bbb180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb180u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bbb1d0 */
uint F_00bbb1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb1d0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bbb220 */
uint F_00bbb220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb220u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bbb280 */
uint F_00bbb280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb280u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bbb300 */
uint F_00bbb300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb300u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,200);
  return (uint)uVar1;
}

/* ref: FUN_00bbb360 */
uint F_00bbb360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb360u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,200);
  return (uint)uVar1;
}

/* ref: FUN_00bbb3c0 */
uint F_00bbb3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,200);
  return (uint)uVar1;
}

/* ref: FUN_00bbb420 */
uint F_00bbb420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb420u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 5,200);
  return (uint)uVar1;
}

/* ref: FUN_00bbb440 */
uint F_00bbb440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00bbb460 */
uint F_00bbb460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00bbb480 */
uint F_00bbb480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb480u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,200);
  return uVar1;
}

/* ref: FUN_00bbb4c0 */
uint F_00bbb4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb4c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,200);
  return uVar1;
}

/* ref: FUN_00bbb500 */
uint F_00bbb500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb500u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,200);
  return uVar1;
}

/* ref: FUN_00bbb540 */
uint F_00bbb540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb540u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 << 5,param_2,200);
  return uVar1;
}

/* ref: FUN_00bbb5b0 */
uint F_00bbb5b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb5b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb5c0 */
uint F_00bbb5c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb5c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb5d0 */
uint F_00bbb5d0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb5d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb5e0 */
uint F_00bbb5e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb5e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb5f0 */
uint F_00bbb5f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb5f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb620 */
uint F_00bbb620(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb620u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb630 */
uint F_00bbb630(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb630u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb640 */
uint F_00bbb640(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb640u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb650 */
uint F_00bbb650(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb650u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb660 */
uint F_00bbb660(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb660u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb680 */
uint F_00bbb680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbb680u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00bbb6b0 */
uint F_00bbb6b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb6b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb6c0 */
uint F_00bbb6c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb6c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb6e0 */
uint F_00bbb6e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbb6e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00bbb750 */
uint F_00bbb750(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb750u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb760 */
uint F_00bbb760(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb760u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb7b0 */
uint F_00bbb7b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb7b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb7e0 */
uint F_00bbb7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb7e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb7f0 */
uint F_00bbb7f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbb7f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00bbb810 */
byte F_00bbb810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0xbbb810u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  bool bVar1;
  
  if (((((short)param_2 == *(short *)(param_1 + 0xc)) && (param_3 == *(int *)(param_1 + 0x20))) &&
      (bVar1 = GEN_ISNAN((float10)*param_4) || GEN_ISNAN((float10)*(float *)(param_1 + 0x10)),
      bVar1 != (bVar1 || (float10)*param_4 == (float10)*(float *)(param_1 + 0x10)))) &&
     (((bVar1 = GEN_ISNAN((float10)param_4[1]) || GEN_ISNAN((float10)*(float *)(param_1 + 0x14)),
       bVar1 != (bVar1 || (float10)param_4[1] == (float10)*(float *)(param_1 + 0x14)) &&
       (bVar1 = GEN_ISNAN((float10)param_4[2]) || GEN_ISNAN((float10)*(float *)(param_1 + 0x18)),
       bVar1 != (bVar1 || (float10)param_4[2] == (float10)*(float *)(param_1 + 0x18)))) &&
      (bVar1 = GEN_ISNAN((float10)param_5) || GEN_ISNAN((float10)*(float *)(param_1 + 0x40)),
      bVar1 != (bVar1 || (float10)param_5 == (float10)*(float *)(param_1 + 0x40)))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bbb880 */
byte F_00bbb880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbbb880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  bool bVar1;
  
  if (((((short)param_1 == *(short *)((int)this + 0xc)) && (param_2 == *(int *)((int)this + 0x20)))
      && (bVar1 = GEN_ISNAN((float10)*param_3) || GEN_ISNAN((float10)*(float *)((int)this + 0x10)),
         bVar1 != (bVar1 || (float10)*param_3 == (float10)*(float *)((int)this + 0x10)))) &&
     ((bVar1 = GEN_ISNAN((float10)param_3[1]) || GEN_ISNAN((float10)*(float *)((int)this + 0x14)),
      bVar1 != (bVar1 || (float10)param_3[1] == (float10)*(float *)((int)this + 0x14)) &&
      (bVar1 = GEN_ISNAN((float10)param_3[2]) || GEN_ISNAN((float10)*(float *)((int)this + 0x18)),
      bVar1 != (bVar1 || (float10)param_3[2] == (float10)*(float *)((int)this + 0x18)))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bbb8e0 */
byte F_00bbb8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xbbb8e0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  bool bVar1;
  
  if ((((param_2 == *(int *)(param_1 + 0xc)) && (param_3 == *(int *)(param_1 + 0x10))) ||
      ((param_2 == *(int *)(param_1 + 0x10) && (param_3 == *(int *)(param_1 + 0xc))))) &&
     ((bVar1 = GEN_ISNAN((float10)param_4) || GEN_ISNAN((float10)*(float *)(param_1 + 0x18)),
      bVar1 != (bVar1 || (float10)param_4 == (float10)*(float *)(param_1 + 0x18)) &&
      (bVar1 = GEN_ISNAN((float10)param_5) || GEN_ISNAN((float10)*(float *)(param_1 + 0x1c)),
      bVar1 != (bVar1 || (float10)param_5 == (float10)*(float *)(param_1 + 0x1c)))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00bbb940 */
uint F_00bbb940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(ushort *)((int)this + 0xb8) - 1;
  uVar1 = 0;
  if (0 < iVar2) {
    uVar3 = 0;
    do {
      if (*((short *)GEN_TOP((*(int *)((int)this + 0x14) + 2 + uVar3 * 2))) == (short)param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      uVar3 = uVar1 & 0xffff;
    } while ((int)uVar3 < iVar2);
  }
  return 0xffff;
}

/* ref: FUN_00bbb980 */
uint F_00bbb980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbb980u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(ushort *)(in_ecx + 0xb8) <= (ushort)param_2) {
    return 0;
  }
  return (uint)(ushort)param_2 * 0x60 + *(int *)(in_ecx + 0x18);
}

/* ref: FUN_00bbb9b0 */
uint F_00bbb9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbb9b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  float fVar1;
  float fVar2;
  undefined * pvVar3;
  undefined4 * puVar4;
  float * pfVar5;
  int iVar6;
  float fVar7;
  undefined4 * puVar8;
  float10 fVar9;
  
  (*(uint *)(gen_frame + 0x10c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x110);
  fVar7 = gen_bits2f((uint)(ushort)param_2);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  (*(float * PTR32 *)(gen_frame + 0x1c)) = param_1;
  if ((ushort)param_2 < *(ushort *)((int)this + 0xb8)) {
    (*(float *)(gen_frame + 0x3c)) = fVar7;
    if (fVar7 == gen_bits2f(*(ushort *)((int)this + 0xb8) - 1)) {
      puVar4 = (undefined4 *)
               F_00623320(*(undefined * PTR32 *)((int)this + 0x10),
                            (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x14) + (int)gen_fl2bits(fVar7) * 2))));
      puVar8 = ((undefined4 *)(gen_frame + 0x80));
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar4 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x40)),((undefined4 *)(gen_frame + 0x80)));
      pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x18));
      puVar8 = ((undefined4 *)(gen_frame + 0xc0));
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      pfVar5 = (float *)F_004ee9d0(&(*(float *)(gen_frame + 0x0)),(int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x90,((undefined4 *)(gen_frame + 0xc0)));
      (*(float *)(gen_frame + 0x20)) = *pfVar5;
      (*(float *)(gen_frame + 0x24)) = pfVar5[1];
      (*(float *)(gen_frame + 0x28)) = pfVar5[2];
      F_0046f390(&(*(float *)(gen_frame + 0x20)));
      fVar7 = *((float *)GEN_TOP(((int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) * 0xa0 + 0x8c + *(int *)((int)pvVar3 + 0x1c))));
      (*(float *)(gen_frame + 0x3c)) = fVar7;
      fVar9 = (float10)fVar7;
      (*(float *)(gen_frame + 0x0)) = (float)(fVar9 * (float10)(*(float *)(gen_frame + 0x20)));
      (*(float *)(gen_frame + 0x4)) = (float)((float10)(*(float *)(gen_frame + 0x24)) * fVar9);
      (*(float *)(gen_frame + 0x8)) = (float)(fVar9 * (float10)(*(float *)(gen_frame + 0x28)));
      fVar7 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xf0)) + (float10)(float)(fVar9 * (float10)(*(float *)(gen_frame + 0x20))))));
      (*(float *)(gen_frame + 0x20)) = fVar7;
      fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xf4)) + (float10)(float)((float10)(*(float *)(gen_frame + 0x24)) * fVar9))));
      (*(float *)(gen_frame + 0x24)) = fVar1;
      fVar2 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xf8)) + (float10)(float)(fVar9 * (float10)(*(float *)(gen_frame + 0x28))))));
      (*(float *)(gen_frame + 0x28)) = fVar2;
      *(*(float * PTR32 *)(gen_frame + 0x1c)) = fVar7;
      (*(float * PTR32 *)(gen_frame + 0x1c))[1] = fVar1;
      (*(float * PTR32 *)(gen_frame + 0x1c))[2] = fVar2;
      pfVar5 = (*(float * PTR32 *)(gen_frame + 0x1c));
      goto LAB_00bbbbaf;
    }
    puVar4 = (undefined4 *)
             F_00623320(*(undefined * PTR32 *)((int)this + 0x10),
                          (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x14) + 2 + (int)gen_fl2bits(fVar7) * 2))));
    puVar8 = ((undefined4 *)(gen_frame + 0x80));
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar4 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x40)),((undefined4 *)(gen_frame + 0x80)));
    puVar8 = ((undefined4 *)(gen_frame + 0xc0));
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar8 = puVar8 + 1;
    }
    *(*(float * PTR32 *)(gen_frame + 0x1c)) = (*(float *)(gen_frame + 0xf0));
    (*(float * PTR32 *)(gen_frame + 0x1c))[1] = (*(float *)(gen_frame + 0xf4));
    fVar7 = (*(float *)(gen_frame + 0xf8));
  }
  else {
    *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
    param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
    fVar7 = REFG(float, 0x1375ac8);
  }
  (*(float * PTR32 *)(gen_frame + 0x1c))[2] = fVar7;
  pfVar5 = (*(float * PTR32 *)(gen_frame + 0x1c));
LAB_00bbbbaf: ;
  (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar5;
  F_00c47745((*(uint *)(gen_frame + 0x10c)) ^ (uint)(uint)(gen_frame + 0x110));
  return (uint)pfVar5;
}

/* ref: FUN_00bbbbd0 */
uint F_00bbbbd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0xbbbbd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  *(undefined4 *)(param_1 + 4) = param_10;
  *(undefined4 *)(param_1 + 6) = param_11;
  *(undefined4 *)(param_1 + 8) = param_7;
  *(undefined4 *)(param_1 + 10) = param_8;
  *param_1 = (ushort)param_2;
  param_1[1] = (ushort)param_3;
  param_1[2] = (ushort)param_4;
  param_1[3] = (ushort)param_5;
  *(undefined4 *)(param_1 + 0xc) = param_9;
  *(float *)(param_1 + 0xe) = param_6;
  if ((ushort)param_3 < (ushort)param_2) {
    param_1[2] = (ushort)param_5;
    param_1[3] = (ushort)param_4;
    *param_1 = (ushort)param_3;
    param_1[1] = (ushort)param_2;
    return (uint)param_1;
  }
  if (((ushort)param_2 == (ushort)param_3) && ((ushort)param_5 < (ushort)param_4)) {
    param_1[3] = (ushort)param_4;
    param_1[2] = (ushort)param_5;
  }
  return (uint)param_1;
}

/* ref: FUN_00bbbce0 */
uint F_00bbbce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbbce0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00bbbd00 */
uint F_00bbbd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbbd00u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00bbbd10 */
uint F_00bbbd10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbbd10u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *in_ecx;
}

/* ref: FUN_00bbbd20 */
uint F_00bbbd20(float gen_a0, float gen_a1)
{
  GEN_ENTER(0xbbbd20u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  float * pfVar1;
  
  pfVar1 = &(*(float *)&gen_args[0]);
  if (!((float10)(*(float *)&gen_args[0]) < (float10)(*(float *)&gen_args[1]))) {
    pfVar1 = &(*(float *)&gen_args[1]);
  }
  return (uint)pfVar1;
}

/* ref: FUN_00bbbd40 */
uint F_00bbbd40(float gen_a0, float gen_a1)
{
  GEN_ENTER(0xbbbd40u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  float * pfVar1;
  
  pfVar1 = &(*(float *)&gen_args[0]);
  if (!((float10)(*(float *)&gen_args[1]) < (float10)(*(float *)&gen_args[0]))) {
    pfVar1 = &(*(float *)&gen_args[1]);
  }
  return (uint)pfVar1;
}

/* ref: FUN_00bbbde0 */
uint F_00bbbde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbbde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00bbbe00 */
uint F_00bbbe00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbbe00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00bbbe30 */
uint F_00bbbe30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbbe30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
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

/* ref: FUN_00bbbe70 */
uint F_00bbbe70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbbe70u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00bbbeb0 */
uint F_00bbbeb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbbeb0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00bbbef0 */
uint F_00bbbef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbbef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 5;
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

/* ref: FUN_00bbbf20 */
uint F_00bbbf20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbbf20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bbbf30 */
uint F_00bbbf30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbbf30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bbbf40 */
byte F_00bbbf40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbbf40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00bbbf60 */
byte F_00bbbf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbbf60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00bbbf80 */
uint F_00bbbf80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbbf80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bbbf90 */
byte F_00bbbf90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbbf90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00bbbfb0 */
uint F_00bbbfb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbbfb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bbbfc0 */
byte F_00bbbfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbbfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00bbbfe0 */
uint F_00bbbfe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbbfe0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_1;
  puVar3 = ((undefined4 *)(gen_frame + 0xc));
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_2;
  puVar3 = param_1;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = ((undefined4 *)(gen_frame + 0xc));
  puVar3 = param_2;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00bbc030 */
uint F_00bbc030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbc030u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00bbc060 */
uint F_00bbc060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbc060u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00bbc0c0 */
unsigned int F_00bbc0c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbc0c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00bbc0e0 */
uint F_00bbc0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbc0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00bbc100 */
uint F_00bbc100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbc100u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00bbc120 */
unsigned int F_00bbc120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbc120u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = param_2;
    puVar3 = param_1;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00bbc140 */
unsigned int F_00bbc140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbc140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: _Uninitialized_move<>_00bbc170 */
unsigned int F_00bbc170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbc170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar1 = param_1;
  puVar2 = param_3;
  while (puVar1 != param_2) {
    puVar5 = puVar1 + 8;
    puVar3 = puVar2 + 8;
    puVar6 = puVar1;
    puVar7 = puVar2;
    for (iVar4 = 8; puVar1 = puVar5, puVar2 = puVar3, iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00bbc1c0 */
unsigned int F_00bbc1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbc1c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00bbc1e0 */
uint F_00bbc1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbc1e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00bbc210 */
uint F_00bbc210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbc210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00bbc240 */
uint F_00bbc240(unsigned int gen_a0)
{
  GEN_ENTER(0xbbc240u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),param_1,0x10);
  return uVar1;
}

/* ref: FUN_00bbc260 */
uint F_00bbc260(unsigned int gen_a0)
{
  GEN_ENTER(0xbbc260u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),param_1,0x10);
  return uVar1;
}

/* ref: FUN_00bbc2d0 */
uint F_00bbc2d0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbc2d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2;
  uVar2 = uVar1 & 0xffff;
  if ((short)uVar1 != 0) {
    iVar3 = 0;
    do {
      F_00bfa090(*((undefined * PTR32 *)GEN_TOP((iVar3 + *(int *)((int)this + 0x74)))));
      iVar3 = iVar3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  uVar1 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(uVar1 + 0x10);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(uVar1 + 0x14);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(uVar1 + 0x18);
  return uVar1;
}

/* ref: FUN_00bbc320 */
uint F_00bbc320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbc320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  longlong lVar1;
  float fVar2;
  float * pfVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  undefined1 uVar7;
  int * piVar8;
  byte bVar9;
  double dVar10;
  undefined * pvVar11;
  float * PTR32 * ppfVar12;
  uint uVar13;
  uint uVar14;
  ushort * puVar15;
  float * pfVar16;
  int iVar17;
  bool bVar18;
  bool bVar19;
  float10 fVar20;
  float10 fVar21;
  
  pfVar16 = *(float * PTR32 *)(REFG(int, 0x137104c) + 0x1198);
  (*(float * PTR32 *)(gen_frame + 0xcc)) = pfVar16;
  iVar17 = *(int *)((int)this + 0x14);
  (*(undefined * PTR32 *)(gen_frame + 0xbc)) = this;
  (*(float * PTR32 *)(gen_frame + 0xa0)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1104968)));
  ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0xcc));
  if (!((double)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16))) < REFG(double, 0x1094800))) {
    ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0xa0));
  }
  pfVar16 = *ppfVar12;
  bVar18 = GEN_ISNAN(((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16)))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  bVar19 = bVar18 || ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16))) == *(float *)&REFG(undefined, 0x1088114);
  (*(float * PTR32 *)(gen_frame + 0xc0)) = pfVar16;
  if (bVar18 != bVar19) {
    return CONCAT22((short)((uint)((int)(uintptr_t)ppfVar12) >> 0x10),
                    CONCAT11(bVar19 << 6 | bVar18 << 2 | 2U |
                             !(*(float *)&REFG(undefined, 0x1088114) <= ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16)))),(char)ppfVar12));
  }
  (*(uint *)(gen_frame + 0xb0)) = param_1 + 0x50;
  cVar6 = *(char *)((int)this + 0xcc);
  (*(uint *)(gen_frame + 0xb4)) = *(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2 & 0xffff;
  if (cVar6 == '\0') {
    pfVar16 = (float *)(param_1 + 0x40);
  }
  else {
    pfVar16 = (float *)(iVar17 + 0x10);
  }
  fVar2 = *(float *)(param_1 + 0x94);
  (*(float *)(gen_frame + 0x9c)) = *(float *)(param_1 + 0x90);
  (*(float * PTR32 *)(gen_frame + 0xa0)) = pfVar16;
  (*(float * PTR32 *)(gen_frame + 0xc8)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1094778)));
  ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0xcc));
  pfVar3 = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 - (float10)fVar2))));
  (*(float * PTR32 *)(gen_frame + 0xcc)) = pfVar3;
  if (!((float10)(float)REFG(float, 0x1094778) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar3))))) {
    ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0xc8));
  }
  (*(float * PTR32 *)(gen_frame + 0x4c)) = *ppfVar12;
  if (cVar6 != '\0') {
    F_00bbc2d0(this);
    *(undefined1 *)((int)this + 0xcc) = 0;
  }
  fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x20) - (float10)*pfVar16)));
  (*(float *)(gen_frame + 0x80)) = fVar2;
  fVar4 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x24) - (float10)pfVar16[1])));
  (*(float *)(gen_frame + 0x84)) = fVar4;
  fVar5 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x28) - (float10)pfVar16[2])));
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x88)) + 0)) = fVar5;
  (*(float * PTR32 *)(gen_frame + 0xc8)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)(*(float *)(gen_frame + 0x9c)) / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xc0)))))))));
  fVar20 = (float10)(float)((float10)(*(float *)(gen_frame + 0x9c)) / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xc0))))));
  fVar2 = (float)(fVar20 * (float10)fVar2);
  (*(float *)(gen_frame + 0x80)) = fVar2;
  fVar4 = (float)((float10)fVar4 * fVar20);
  (*(float *)(gen_frame + 0x84)) = fVar4;
  fVar5 = (float)(fVar20 * (float10)fVar5);
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x88)) + 0)) = fVar5;
  (*(longlong *)(gen_frame + 0x88)) = CONCAT44((*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x88)) + 4)),(uint)gen_fl2bits(fVar5));
  (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x40) + (float10)fVar2)));
  (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x44) + (float10)fVar4)));
  (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x48) + (float10)fVar5)));
  F_004eebf0(&(*(float *)(gen_frame + 0x20)),(*(uint *)(gen_frame + 0xb0)));
  F_005fe2e0(((undefined1 *)(gen_frame + 0x10)),(uint)&(*(float *)(gen_frame + 0x20)));
  F_004ee9d0(((undefined1 *)(gen_frame + 0x0)),(int)this + 0x30,(*(uint *)(gen_frame + 0xb0)));
  uVar14 = *(int *)((int)this + 0x88) - *(int *)((int)this + 0x84) >> 2;
  (*(uint *)(gen_frame + 0x6c)) = uVar14 & 0xffff;
  if ((short)uVar14 != 0) {
    iVar17 = 0;
    (*(float * PTR32 *)(gen_frame + 0xcc)) = (float *)(uVar14 & 0xffff);
    do {
      piVar8 = *((int * PTR32 *)GEN_TOP((iVar17 + *(int *)((int)this + 0x84))));
      ((code *)*(gen_code32 *)(*piVar8 + 0x10))(piVar8);
      iVar17 = iVar17 + 4;
      pfVar16 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0xcc)) + -1);
      (*(float * PTR32 *)(gen_frame + 0xcc)) = pfVar16;
    } while (pfVar16 != (float *)0x0);
  }
  uVar14 = *(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2;
  if ((short)uVar14 != 0) {
    iVar17 = 0;
    (*(float * PTR32 *)(gen_frame + 0xcc)) = (float *)(uVar14 & 0xffff);
    do {
      F_00bfa370(*((undefined * PTR32 *)GEN_TOP((iVar17 + *(int *)((int)this + 0x74)))));
      iVar17 = iVar17 + 4;
      pfVar16 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0xcc)) + -1);
      (*(float * PTR32 *)(gen_frame + 0xcc)) = pfVar16;
    } while (pfVar16 != (float *)0x0);
  }
  pfVar16 = *(float * PTR32 *)((int)this + 0x5c);
  (*(float * PTR32 *)(gen_frame + 0xc8)) = pfVar16;
  (*(float * PTR32 *)(gen_frame + 0xac)) = (float *)0x0;
  fVar20 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16)));
  if (fVar20 < (float10)REFG(double, 0x1094800)) {
    *(float *)((int)this + 0x5c) = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xc0))))) + fVar20);
  }
  fVar20 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xc0)))));
  if (*(char *)((int)this + 0xca) == '\0') {
    if (*(char *)((int)this + 0xcb) == '\0') goto LAB_00bbc606;
    pfVar16 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)((int)this + 0x58) + fVar20))))));
    (*(float * PTR32 *)(gen_frame + 0xc0)) = pfVar16;
    *(float * PTR32 *)((int)this + 0x58) = pfVar16;
    fVar2 = *(float *)((int)this + 0x60);
    (*(float *)(gen_frame + 0xc4)) = fVar2;
    if ((float10)fVar2 < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16)))) {
      *(float *)((int)this + 0x58) = fVar2;
      (*(float * PTR32 *)(gen_frame + 0xac)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      *(undefined1 *)((int)this + 0xcb) = 0;
      *(undefined1 *)((int)this + 0xc4) = 0;
      goto LAB_00bbc606;
    }
    fVar21 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16))) / (float10)fVar2;
  }
  else {
    pfVar16 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)((int)this + 0x58) + fVar20))))));
    (*(float * PTR32 *)(gen_frame + 0xc0)) = pfVar16;
    *(float * PTR32 *)((int)this + 0x58) = pfVar16;
    fVar2 = *(float *)((int)this + 0x60);
    (*(float *)(gen_frame + 0xc4)) = fVar2;
    if ((float10)fVar2 < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16)))) {
      *(float *)((int)this + 0x58) = fVar2;
      (*(float * PTR32 *)(gen_frame + 0xac)) = (float *)0x0;
      *(undefined1 *)((int)this + 0xca) = 0;
      goto LAB_00bbc606;
    }
    fVar21 = (float10)1 - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16))) / (float10)fVar2;
  }
  (*(float * PTR32 *)(gen_frame + 0xac)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar21)));
  fVar21 = (float10)(float)fVar21;
  (*(float * PTR32 *)(gen_frame + 0xac)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((((float10)*(double *)&REFG(undefined, 0x10944e0) - (fVar21 + fVar21)) *
                             (fVar21 * fVar21)))))));
LAB_00bbc606: ;
  pfVar16 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar20 * (float10)*(float *)((int)this + 0x54) - (float10)REFG(double, 0x1088108)))))))
  ;
  (*(float * PTR32 *)(gen_frame + 0xc8)) = pfVar16;
  dVar10 = (double)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16)));
  fVar20 = F_00c4ed10((uint)(ulonglong)gen_d2bits(dVar10),
                        (int)((ulonglong)gen_d2bits(dVar10) >> 0x20));
  pfVar16 = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar20)));
  (*(float * PTR32 *)(gen_frame + 0xc8)) = pfVar16;
  (*(float * PTR32 *)(gen_frame + 0xcc)) = pfVar16;
  (*(float * PTR32 *)(gen_frame + 0xc8)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0xcc));
  if (!((float10)1 < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16))))) {
    ppfVar12 = &(*(float * PTR32 *)(gen_frame + 0xc8));
  }
  pfVar16 = *ppfVar12;
  (*(float * PTR32 *)(gen_frame + 0xc8)) = pfVar16;
  (*(float * PTR32 *)(gen_frame + 0xc0)) = (float *)0x0;
  fVar20 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16)));
  (*(float *)(gen_frame + 0x44)) = *(float *)((int)this + 0x50);
  (*(float *)(gen_frame + 0x40)) = *(float *)((int)this + 0x54);
  (*(float *)(gen_frame + 0x54)) = *(float *)((int)this + 100);
  (*(float *)(gen_frame + 0x48)) = *(float *)((int)this + 0x68);
  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xb8)) + 2)) = ((undefined2)0x27f);
  (*(uint *)(gen_frame + 0xb8)) = CONCAT22(((undefined2)0x27f),(undefined2)(*(uint *)(gen_frame + 0xb8)));
  fVar2 = (float)((float10)1 / fVar20);
  (*(float *)(gen_frame + 0x9c)) = fVar2;
  (*(float *)(gen_frame + 0xc4)) = fVar2;
  (*(float * PTR32 *)(gen_frame + 0xc8)) = (float *)(((undefined2)0x27f) | 0xc00);
  lVar1 = (longlong)TRUNC(fVar20);
  (*(longlong *)(gen_frame + 0x88)) = lVar1;
  lVar1 = (*(longlong *)(gen_frame + 0x88));
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x88)) + 0)) = gen_bits2f((uint)lVar1);
  pfVar16 = ((float *)GEN_TOP(((int)gen_fl2bits((float)(*(longlong *)(gen_frame + 0x88))) + *(int *)((int)this + 0x70))));
  if (pfVar16 != (float *)0x0) {
    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x88)) + 4)) = REFG(float, 0x1087f04);
    (*(longlong *)(gen_frame + 0x88)) = CONCAT44(REFG(float, 0x1087f04),(uint)gen_fl2bits((float)(*(longlong *)(gen_frame + 0x88))));
    (*(float * PTR32 *)(gen_frame + 0xc8)) = pfVar16;
    do {
      if ((short)(*(uint *)(gen_frame + 0xb4)) != 0) {
        uVar14 = (*(uint *)(gen_frame + 0xb4)) & 0xffff;
        iVar17 = 0;
        do {
          F_00bfa530(*((undefined4 *)GEN_TOP((iVar17 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x74)))),((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x20)),
                       ((undefined1 *)(gen_frame + 0x10)),(*(float *)(gen_frame + 0x44)),(*(float *)(gen_frame + 0x40)),(*(float *)(gen_frame + 0x54)),(*(float *)(gen_frame + 0xc4)),(*(float *)(gen_frame + 0x48)),((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x4c))))));
          iVar17 = iVar17 + 4;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      pvVar11 = (*(undefined * PTR32 *)(gen_frame + 0xbc));
      if (*(ushort *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x6c) != 0) {
        (*(uint *)(gen_frame + 0xb0)) = (uint)*(ushort *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x6c);
        do {
          if ((short)(*(uint *)(gen_frame + 0x6c)) != 0) {
            iVar17 = 0;
            (*(float * PTR32 *)(gen_frame + 0xcc)) = (float *)((*(uint *)(gen_frame + 0x6c)) & 0xffff);
            do {
              piVar8 = *((int * PTR32 *)GEN_TOP((iVar17 + *(int *)((int)pvVar11 + 0x84))));
              ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
              iVar17 = iVar17 + 4;
              pfVar16 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0xcc)) + -1);
              (*(float * PTR32 *)(gen_frame + 0xcc)) = pfVar16;
            } while (pfVar16 != (float *)0x0);
          }
          if ((short)(*(uint *)(gen_frame + 0xb4)) != 0) {
            iVar17 = 0;
            (*(float * PTR32 *)(gen_frame + 0xcc)) = (float *)((*(uint *)(gen_frame + 0xb4)) & 0xffff);
            do {
              F_00bfab80(*((undefined * PTR32 *)GEN_TOP((iVar17 + *(int *)((int)pvVar11 + 0x74)))));
              iVar17 = iVar17 + 4;
              pfVar16 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0xcc)) + -1);
              (*(float * PTR32 *)(gen_frame + 0xcc)) = pfVar16;
            } while (pfVar16 != (float *)0x0);
          }
          uVar14 = (*(uint *)(gen_frame + 0xb0)) - 1;
          (*(uint *)(gen_frame + 0xb0)) = uVar14;
        } while (uVar14 != 0);
      }
      if ((short)(*(uint *)(gen_frame + 0xb4)) != 0) {
        iVar17 = 0;
        (*(float * PTR32 *)(gen_frame + 0xcc)) = (float *)((*(uint *)(gen_frame + 0xb4)) & 0xffff);
        do {
          F_00bfaf20(*((undefined * PTR32 *)GEN_TOP((iVar17 + *(int *)((int)pvVar11 + 0x74)))));
          iVar17 = iVar17 + 4;
          pfVar16 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0xcc)) + -1);
          (*(float * PTR32 *)(gen_frame + 0xcc)) = pfVar16;
        } while (pfVar16 != (float *)0x0);
      }
      if (*(char *)((int)pvVar11 + 0xc6) != '\0') {
        (*(uint *)(gen_frame + 0x64)) = *(int *)((int)pvVar11 + 0xb8) - *(int *)((int)pvVar11 + 0xb4) >> 5 & 0xffff;
        (*(uint *)(gen_frame + 0x7c)) = *(int *)((int)pvVar11 + 0x98) - *(int *)((int)pvVar11 + 0x94) >> 3;
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x3c)) + 0)) = *(undefined1 *)((int)pvVar11 + 200);
        (*(undefined4 *)(gen_frame + 0x3c)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x3c)), 1, 3),*(undefined1 *)((int)pvVar11 + 200));
        (*(uint *)(gen_frame + 0x58)) = *(int *)((int)pvVar11 + 0xa8) - *(int *)((int)pvVar11 + 0xa4) >> 3;
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x50)) + 0)) = *(undefined1 *)((int)pvVar11 + 199);
        (*(undefined4 *)(gen_frame + 0x50)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x50)), 1, 3),*(undefined1 *)((int)pvVar11 + 199));
        if (*(ushort *)((int)pvVar11 + 0x6e) != 0) {
          (*(float *)(gen_frame + 0xa4)) = gen_bits2f((uint)*(ushort *)((int)pvVar11 + 0x6e));
          do {
            pvVar11 = (*(undefined * PTR32 *)(gen_frame + 0xbc));
            if ((short)(*(uint *)(gen_frame + 0xb4)) != 0) {
              iVar17 = 0;
              (*(float * PTR32 *)(gen_frame + 0xcc)) = (float *)((*(uint *)(gen_frame + 0xb4)) & 0xffff);
              do {
                F_00bfbbe0(*((undefined4 *)GEN_TOP((iVar17 + *(int *)((int)pvVar11 + 0x74)))),
                             (int)pvVar11 + 0x94,(*(undefined4 *)(gen_frame + 0x50)),(*(undefined4 *)(gen_frame + 0x3c)),GEN_TOF((*(float * PTR32 *)(gen_frame + 0xc0))),
                             (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc4))));
                iVar17 = iVar17 + 4;
                pfVar16 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0xcc)) + -1);
                (*(float * PTR32 *)(gen_frame + 0xcc)) = pfVar16;
              } while (pfVar16 != (float *)0x0);
            }
            if ((short)(*(uint *)(gen_frame + 0x64)) != 0) {
              (*(float * PTR32 *)(gen_frame + 0xcc)) = (float *)0x0;
              (*(uint *)(gen_frame + 0x5c)) = (*(uint *)(gen_frame + 0x64)) & 0xffff;
              do {
                puVar15 = ((ushort *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0xb4) + (int)(*(float * PTR32 *)(gen_frame + 0xcc)))));
                (*(uint *)(gen_frame + 0x68)) = *(uint *)(puVar15 + 4);
                (*(uint *)(gen_frame + 0x60)) = *(uint *)(puVar15 + 6);
                iVar17 = *((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x74) + (uint)*puVar15 * 4)));
                (*(undefined4 *)(gen_frame + 0x74)) = *(undefined4 *)(puVar15 + 0xe);
                if (puVar15[2] < *(ushort *)(iVar17 + 0xb8)) {
                  (*(int *)(gen_frame + 0x98)) = (uint)puVar15[2] * 0x60 + *(int *)(iVar17 + 0x18);
                }
                else {
                  (*(int *)(gen_frame + 0x98)) = 0;
                }
                iVar17 = *((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x74) + (uint)puVar15[1] * 4)));
                if (puVar15[3] < *(ushort *)(iVar17 + 0xb8)) {
                  (*(uint *)(gen_frame + 0xb0)) = (uint)puVar15[3] * 0x60 + *(int *)(iVar17 + 0x18);
                }
                else {
                  (*(uint *)(gen_frame + 0xb0)) = 0;
                }
                bVar18 = GEN_ISNAN(*(float *)((*(int *)(gen_frame + 0x98)) + 0x54)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
                (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x78)) + 0)) = 1;
                (*(int *)(gen_frame + 0x78)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x78)), 1, 3),1);
                if (bVar18 == (bVar18 || *(float *)((*(int *)(gen_frame + 0x98)) + 0x54) == *(float *)&REFG(undefined, 0x1088114))) {
                  (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x78)) + 0)) = 0;
                  (*(int *)(gen_frame + 0x78)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x78)), 1, 3) << 8;
                }
                (*(uint *)(gen_frame + 0x70)) = 0;
                (*(uint *)(gen_frame + 0xa8)) = 0;
                (*(uint *)(gen_frame + 0xb8)) = 1;
                if ((*(uint *)(gen_frame + 0x7c)) != 0) {
                  (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x7c));
                  do {
                    uVar14 = (*(uint *)(gen_frame + 0xb8));
                    if (((*(uint *)(gen_frame + 0x68)) & (*(uint *)(gen_frame + 0xb8))) != 0) {
                      piVar8 = *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x94) + (*(uint *)(gen_frame + 0xa8)) * 8)));
                      ((code *)*(gen_code32 *)(*piVar8 + 0x20))
                                (piVar8,(*(int *)(gen_frame + 0x98)),(*(uint *)(gen_frame + 0xb0)),(*(undefined4 *)(gen_frame + 0x74)),
                                 (uint)*((ushort *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x94) + (*(uint *)(gen_frame + 0xa8)) * 8 + 4))),
                                 (uint)(((*(uint *)(gen_frame + 0xb8)) & (*(uint *)(gen_frame + 0x60))) != 0),puVar15 + 8,(*(int *)(gen_frame + 0x78)));
                      uVar14 = (*(uint *)(gen_frame + 0xb8));
                    }
                    uVar13 = (*(uint *)(gen_frame + 0xa8)) + 1;
                    (*(uint *)(gen_frame + 0xb8)) = uVar14 << 1 | (uint)((int)uVar14 < 0);
                    (*(uint *)(gen_frame + 0xa8)) = uVar13;
                  } while (uVar13 < (*(uint *)(gen_frame + 0x7c)));
                }
                bVar9 = (byte)(*(uint *)(gen_frame + 0x70)) & 0x1f;
                (*(uint *)(gen_frame + 0xb8)) = 1 << bVar9 | 1U >> 0x20 - bVar9;
                (*(uint *)(gen_frame + 0xa8)) = 0;
                if ((*(uint *)(gen_frame + 0x58)) != 0) {
                  do {
                    if (((*(uint *)(gen_frame + 0x68)) & (*(uint *)(gen_frame + 0xb8))) != 0) {
                      piVar8 = *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0xa4) + (*(uint *)(gen_frame + 0xa8)) * 8)));
                      ((code *)*(gen_code32 *)(*piVar8 + 0x20))
                                (piVar8,(*(int *)(gen_frame + 0x98)),(*(uint *)(gen_frame + 0xb0)),(*(undefined4 *)(gen_frame + 0x74)),
                                 (uint)*((ushort *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0xa4) + (*(uint *)(gen_frame + 0xa8)) * 8 + 4))),
                                 (uint)(((*(uint *)(gen_frame + 0xb8)) & (*(uint *)(gen_frame + 0x60))) != 0),puVar15 + 8,(*(int *)(gen_frame + 0x78)));
                    }
                    uVar14 = (*(uint *)(gen_frame + 0xa8)) + 1;
                    (*(uint *)(gen_frame + 0xb8)) = (*(uint *)(gen_frame + 0xb8)) << 1 | (uint)((int)(*(uint *)(gen_frame + 0xb8)) < 0);
                    (*(uint *)(gen_frame + 0xa8)) = uVar14;
                  } while (uVar14 < (*(uint *)(gen_frame + 0x58)));
                }
                (*(float * PTR32 *)(gen_frame + 0xcc)) = (*(float * PTR32 *)(gen_frame + 0xcc)) + 8;
                uVar14 = (*(uint *)(gen_frame + 0x5c)) - 1;
                (*(uint *)(gen_frame + 0x5c)) = uVar14;
              } while (uVar14 != 0);
            }
            fVar2 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0xa4))) + -1);
            (*(float *)(gen_frame + 0xa4)) = fVar2;
          } while (fVar2 != 0.0);
        }
      }
      if ((short)(*(uint *)(gen_frame + 0xb4)) != 0) {
        iVar17 = 0;
        uVar14 = (*(uint *)(gen_frame + 0xb4)) & 0xffff;
        do {
          F_00bfdb00(*((undefined * PTR32 *)GEN_TOP((iVar17 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x74)))));
          iVar17 = iVar17 + 4;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      (*(float * PTR32 *)(gen_frame + 0xc0)) = ((float *)(uintptr_t)gen_fl2bits((float)((*(float *)(gen_frame + 0xc4)))));
      pfVar16 = &(*(float *)(gen_frame + 0xa4));
      (*(float *)(gen_frame + 0xa4)) = (float)((float10)(*(float *)(gen_frame + 0xc4)) + (float10)(*(float *)(gen_frame + 0x9c)));
      if (!((float10)(float)((float10)(*(float *)(gen_frame + 0xc4)) + (float10)(*(float *)(gen_frame + 0x9c))) < (float10)1)) {
        pfVar16 = (float *)((int)&(*(longlong *)(gen_frame + 0x88)) + 4);
      }
      pfVar3 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0xc8)) - 1);
      (*(float * PTR32 *)(gen_frame + 0xc8)) = pfVar3;
      (*(float *)(gen_frame + 0xc4)) = *pfVar16;
      lVar1 = (*(longlong *)(gen_frame + 0x88));
    } while (pfVar3 != (float *)0x0);
  }
  (*(longlong *)(gen_frame + 0x88)) = lVar1;
  uVar7 = *(undefined1 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0xc9);
  (*(undefined1 *)((char *)&(*(longlong *)(gen_frame + 0x88)) + 4)) = uVar7;
  gen_piece_set(&(*(longlong *)(gen_frame + 0x88)), 0, 5, (unsigned long long)(CONCAT14(uVar7,(uint)gen_fl2bits((float)(*(longlong *)(gen_frame + 0x88))))));
  if ((short)(*(uint *)(gen_frame + 0xb4)) != 0) {
    uVar14 = (*(uint *)(gen_frame + 0xb4)) & 0xffff;
    iVar17 = 0;
    do {
      F_00bfe990(*((undefined4 *)GEN_TOP((iVar17 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x74)))),(*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x88)) + 4)),
                   ((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xac))))));
      iVar17 = iVar17 + 4;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x20) = *(*(float * PTR32 *)(gen_frame + 0xa0));
  *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x24) = (*(float * PTR32 *)(gen_frame + 0xa0))[1];
  *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x28) = (*(float * PTR32 *)(gen_frame + 0xa0))[2];
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xbc)) + 0x70) = 0;
  return (uint)(*(undefined * PTR32 *)(gen_frame + 0xbc));
}

/* ref: FUN_00bbcb10 */
uint F_00bbcb10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbcb10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  int * piVar2;
  short sVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint local_10;
  
  F_00bbc2d0(this);
  uVar4 = *(int *)((int)this + 0x88) - *(int *)((int)this + 0x84) >> 2;
  sVar3 = (short)uVar4;
  if (sVar3 != 0) {
    iVar8 = 0;
    uVar6 = uVar4 & 0xffff;
    do {
      piVar2 = *((int * PTR32 *)GEN_TOP((iVar8 + *(int *)((int)this + 0x84))));
      ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
      iVar8 = iVar8 + 4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = *(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2;
  uVar7 = uVar6 & 0xffff;
  uVar1 = *(ushort *)((int)this + 0x6c);
  local_10 = (uint)uVar1;
  sVar5 = (short)uVar6;
  if (*(char *)((int)this + 0xcd) == '\0') {
    if (uVar1 != 0) {
      do {
        if (sVar3 != 0) {
          iVar8 = 0;
          uVar6 = uVar4 & 0xffff;
          do {
            piVar2 = *((int * PTR32 *)GEN_TOP((iVar8 + *(int *)((int)this + 0x84))));
            ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
            iVar8 = iVar8 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        if (sVar5 != 0) {
          iVar8 = 0;
          uVar6 = uVar7;
          do {
            F_00bfab80(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + iVar8))));
            iVar8 = iVar8 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        local_10 = local_10 - 1;
      } while (local_10 != 0);
    }
  }
  else if (uVar1 != 0) {
    do {
      if (sVar3 != 0) {
        iVar8 = 0;
        uVar6 = uVar4 & 0xffff;
        do {
          piVar2 = *((int * PTR32 *)GEN_TOP((iVar8 + *(int *)((int)this + 0x84))));
          ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2,(undefined4)gen_fl2bits((float)(float10)1));
          iVar8 = iVar8 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (sVar5 != 0) {
        iVar8 = 0;
        uVar6 = uVar7;
        do {
          F_00bfab80(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + iVar8))));
          iVar8 = iVar8 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      local_10 = local_10 - 1;
    } while (local_10 != 0);
  }
  if (sVar5 != 0) {
    iVar8 = 0;
    local_10 = uVar7;
    do {
      F_00bfdb00(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + iVar8))));
      iVar8 = iVar8 + 4;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
  }
  uVar4 = 0;
  if (sVar5 != 0) {
    iVar8 = 0;
    do {
      uVar4 = F_00bfe990(*((undefined4 *)GEN_TOP((iVar8 + *(int *)((int)this + 0x74)))),
                           (uint)*(byte *)((int)this + 0xc9),(float)(float10)0);
      iVar8 = iVar8 + 4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return uVar4;
}

/* ref: FUN_00bbcca0 */
uint F_00bbcca0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbcca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2;
  uVar2 = uVar1 & 0xffff;
  if ((short)uVar1 != 0) {
    iVar3 = 0;
    uVar1 = uVar2;
    do {
      uVar2 = F_00bfedc0(*((undefined * PTR32 *)GEN_TOP((iVar3 + *(int *)((int)this + 0x74)))));
      iVar3 = iVar3 + 4;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return uVar2;
}

/* ref: FUN_00bbcce0 */
uint F_00bbcce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbbcce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if ((param_1 != 0) &&
     ((param_3 & 0xffff) < (uint)(*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2))) {
    uVar1 = F_00bff380(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + (param_3 & 0xffff) * 4))),param_1,
                         param_2,*(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3,
                         param_4);
    return uVar1;
  }
  return 0xffffffff;
}

/* ref: FUN_00bbcd30 */
uint F_00bbcd30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xbbcd30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint param_5 = (uint)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint uVar1;
  
  if ((param_1 != 0) &&
     ((param_3 & 0xffff) < (uint)(*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2))) {
    uVar1 = F_00bff3f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + (param_3 & 0xffff) * 4))),param_1,
                         param_2,param_4,param_5 & 0xff,
                         (uint)(*(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3 != 0),
                         param_6);
    return uVar1;
  }
  return 0xffffffff;
}

/* ref: FUN_00bbcd90 */
byte F_00bbcd90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbbcd90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  if (param_1 != 0) {
    if ((param_2 & 0xffff) < (uint)(*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2)) {
      bVar1 = F_00bff330(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + (param_2 & 0xffff) * 4))),param_1,
                           param_3);
      return bVar1;
    }
  }
  return 0;
}

/* ref: FUN_00bbcdd0 */
unsigned int F_00bbcdd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbbcdd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if ((param_1 != 0) &&
     ((param_2 & 0xffff) < (uint)(*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2))) {
    F_00bfe7f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + (param_2 & 0xffff) * 4))),param_1,param_3);
  }
  return 0;
}

/* ref: FUN_00bbce10 */
uint F_00bbce10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbce10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  ushort uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  iVar2 = *(int *)((int)this + 0xb8) - *(int *)((int)this + 0xb4);
  puVar3 = (undefined4 *)(iVar2 >> 5);
  uVar1 = (ushort)puVar3;
  if (((ushort)param_1 < uVar1) &&
     (puVar3 = ((undefined4 *)GEN_TOP(CONCAT22((short)(iVar2 >> 0x15),(ushort)param_2))),
     (ushort)param_2 < uVar1)) {
    puVar3 = ((undefined4 *)GEN_TOP(((uint)(ushort)param_2 * 0x20 + *(int *)((int)this + 0xb4))));
    puVar4 = ((undefined4 *)GEN_TOP(((uint)(ushort)param_1 * 0x20 + *(int *)((int)this + 0xb4))));
    puVar5 = puVar4;
    puVar6 = ((undefined4 *)(gen_frame + 0xc));
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar5 = puVar3;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar5 = ((undefined4 *)(gen_frame + 0xc));
    puVar4 = puVar3;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return (uint)puVar3;
}

/* ref: FUN_00bbce80 */
unsigned int F_00bbce80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbbce80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if ((param_1 & 0xffff) < (uint)(*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2)) {
    iVar1 = *(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3;
    F_00bfbc40(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + (param_1 & 0xffff) * 4))),param_2,param_3,
                 iVar1 + param_2,iVar1 + param_3);
  }
  return 0;
}

/* ref: FUN_00bbced0 */
unsigned int F_00bbced0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbced0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint local_c;
  
  uVar5 = -1 << ((byte)param_1 & 0x1f);
  uVar2 = 1 << ((byte)param_1 & 0x1f);
  uVar3 = 0;
  local_c = 0;
  if (*(int *)((int)this + 0xb8) - *(int *)((int)this + 0xb4) >> 5 != 0) {
    do {
      iVar4 = uVar3 * 0x20;
      uVar3 = *((uint *)GEN_TOP((*(int *)((int)this + 0xb4) + 8 + iVar4)));
      *((uint *)GEN_TOP((*(int *)((int)this + 0xb4) + 8 + iVar4))) =
           (uVar3 & uVar5) * 2 | ~uVar5 & uVar3 | uVar2;
      puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0xb4) + 0xc + iVar4)));
      uVar3 = *puVar1;
      *puVar1 = (uVar3 & uVar5) * 2 | ~uVar5 & uVar3 | uVar2;
      local_c = local_c + 1;
      uVar3 = local_c & 0xffff;
    } while (uVar3 < (uint)(*(int *)((int)this + 0xb8) - *(int *)((int)this + 0xb4) >> 5));
  }
  return 0;
}

/* ref: FUN_00bbcf80 */
unsigned int F_00bbcf80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbcf80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint local_8;
  
  uVar4 = -1 << ((byte)param_1 & 0x1f);
  uVar2 = 0;
  local_8 = 0;
  if (*(int *)((int)this + 0xb8) - *(int *)((int)this + 0xb4) >> 5 != 0) {
    do {
      iVar3 = uVar2 * 0x20;
      uVar2 = *((uint *)GEN_TOP((*(int *)((int)this + 0xb4) + 8 + iVar3)));
      *((uint *)GEN_TOP((*(int *)((int)this + 0xb4) + 8 + iVar3))) =
           (uVar2 & uVar4) >> 1 | ~uVar4 & uVar2 | 0x80000000;
      puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0xb4) + 0xc + iVar3)));
      uVar2 = *puVar1;
      *puVar1 = (uVar2 & uVar4) >> 1 | ~uVar4 & uVar2 | 0x80000000;
      local_8 = local_8 + 1;
      uVar2 = local_8 & 0xffff;
    } while (uVar2 < (uint)(*(int *)((int)this + 0xb8) - *(int *)((int)this + 0xb4) >> 5));
  }
  return 0;
}

/* ref: FUN_00bbd030 */
unsigned int F_00bbd030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbd030u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint * puVar1;
  uint uVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  uint uVar7;
  uint local_14;
  
  puVar4 = &(*(int *)&gen_args[1]);
  if ((ushort)(*(undefined4 *)&gen_args[2]) <= (ushort)(*(int *)&gen_args[1])) {
    puVar4 = &(*(undefined4 *)&gen_args[2]);
  }
  puVar5 = &(*(int *)&gen_args[1]);
  if ((ushort)(*(int *)&gen_args[1]) <= (ushort)(*(undefined4 *)&gen_args[2])) {
    puVar5 = &(*(undefined4 *)&gen_args[2]);
  }
  uVar6 = 1 << ((byte)*(undefined2 *)puVar4 & 0x1f);
  uVar7 = 1 << ((byte)*(undefined2 *)puVar5 & 0x1f);
  local_14 = 0;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa4))) >> 3 != 0) {
    bVar3 = (byte)*(undefined2 *)puVar5 - (byte)*(undefined2 *)puVar4;
    (*(int *)&gen_args[1]) = 0;
    do {
      puVar1 = ((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 8 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4))))));
      uVar2 = *puVar1;
      *puVar1 = (uVar2 & uVar7) >> (bVar3 & 0x1f) | (uVar2 & uVar6) << (bVar3 & 0x1f) |
                uVar2 & ~uVar6 & ~uVar7;
      puVar1 = ((uint *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4))))));
      uVar2 = *puVar1;
      *puVar1 = (uVar2 & uVar7) >> (bVar3 & 0x1f) | (uVar2 & uVar6) << (bVar3 & 0x1f) |
                uVar2 & ~uVar6 & ~uVar7;
      local_14 = local_14 + 1;
      (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) + 0x20;
    } while (local_14 < (uint)(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa4))) >> 3));
  }
  return 0;
}

/* ref: FUN_00bbd140 */
byte F_00bbd140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbbd140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a3;
  int iVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  
  uVar3 = 0;
  uVar6 = *(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2;
  uVar2 = 0;
  if (uVar6 != 0) {
    do {
      iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x74) + uVar3 * 4)));
      iVar4 = *(ushort *)(iVar1 + 0xb8) - 1;
      uVar5 = 0;
      if (0 < iVar4) {
        uVar3 = 0;
        do {
          if (*((short *)GEN_TOP((*(int *)(iVar1 + 0x14) + 2 + uVar3 * 2))) == (short)param_1) {
            if (uVar5 != 0xffff) {
              *param_2 = uVar2;
              *param_3 = uVar5;
              return 1;
            }
            break;
          }
          uVar5 = uVar5 + 1;
          uVar3 = (uint)uVar5;
        } while ((int)uVar3 < iVar4);
      }
      uVar2 = uVar2 + 1;
      uVar3 = (uint)uVar2;
    } while (uVar3 < uVar6);
  }
  return 0;
}

/* ref: FUN_00bbd1e0 */
byte F_00bbd1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbbd1e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar1 = *(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3;
  uVar3 = 0;
  if (uVar1 != 0) {
    piVar2 = *(int * PTR32 *)((int)this + 0x94);
    do {
      if ((*piVar2 == param_1) && (*(ushort *)(piVar2 + 1) == param_2)) {
        *param_3 = uVar3;
        return 1;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 2;
    } while (uVar3 < uVar1);
  }
  return 0;
}

/* ref: FUN_00bbd240 */
byte F_00bbd240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbbd240u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint * param_4 = (uint *)(uintptr_t)gen_a4;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  uVar3 = 0;
  uVar2 = *(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3;
  if (uVar2 != 0) {
    piVar4 = *(int * PTR32 *)((int)this + 0x94);
    do {
      if ((*piVar4 == param_1) && (*(ushort *)(piVar4 + 1) == param_2)) {
        *param_4 = uVar3;
        return 1;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 < uVar2);
  }
  bVar1 = F_00bfb740(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + (param_3 & 0xffff) * 4))),param_1,
                       param_2,param_4);
  if (bVar1 != 0) {
    *param_4 = *param_4 + (*(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3);
    return 1;
  }
  return 0;
}

/* ref: FUN_00bbd2d0 */
byte F_00bbd2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbbd2d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3;
  uVar3 = 0;
  if (uVar1 != 0) {
    piVar2 = *(int * PTR32 *)((int)this + 0x94);
    do {
      if ((*piVar2 == param_1) && (*(ushort *)(piVar2 + 1) == param_2)) {
        *param_3 = uVar3;
        return 1;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 2;
    } while (uVar3 < uVar1);
  }
  uVar4 = 0;
  uVar3 = *(int *)((int)this + 0xa8) - *(int *)((int)this + 0xa4) >> 3;
  if (uVar3 != 0) {
    piVar2 = *(int * PTR32 *)((int)this + 0xa4);
    do {
      if ((*piVar2 == param_1) && (*(ushort *)(piVar2 + 1) == param_2)) {
        *param_3 = uVar1 + uVar4;
        return 1;
      }
      uVar4 = uVar4 + 1;
      piVar2 = piVar2 + 2;
    } while (uVar4 < uVar3);
  }
  return 0;
}

/* ref: FUN_00bbd360 */
byte F_00bbd360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xbbd360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  ushort * param_5 = (ushort *)(uintptr_t)gen_a5;
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ushort * puVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort local_8;
  
  local_8 = (ushort)param_1;
  uVar1 = (ushort)param_1;
  uVar7 = (ushort)param_2;
  if (((ushort)param_2 < (ushort)param_1) ||
     ((uVar6 = (ushort)param_4, uVar1 = (ushort)param_2, uVar2 = (ushort)param_3,
      (ushort)param_1 == (ushort)param_2 &&
      (uVar7 = (ushort)param_1, (ushort)param_4 < (ushort)param_3)))) {
    local_8 = uVar7;
    uVar6 = (ushort)param_3;
    uVar2 = (ushort)param_4;
  }
  uVar7 = 0;
  uVar5 = *(int *)((int)this + 0xb8) - *(int *)((int)this + 0xb4) >> 5;
  if (uVar5 != 0) {
    uVar3 = 0;
    do {
      puVar4 = ((ushort *)GEN_TOP((uVar3 * 0x20 + *(int *)((int)this + 0xb4))));
      if ((((*puVar4 == local_8) && (puVar4[2] == uVar2)) && (puVar4[1] == uVar1)) &&
         (puVar4[3] == uVar6)) {
        *param_5 = uVar7;
        return 1;
      }
      uVar7 = uVar7 + 1;
      uVar3 = (uint)uVar7;
    } while (uVar3 < uVar5);
  }
  return 0;
}

/* ref: FUN_00bbd420 */
byte F_00bbd420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xbbd420u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  ushort * param_7 = (ushort *)(uintptr_t)gen_a6;
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  
  if ((uint)(*(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x74) >> 2) <= (uint)(ushort)param_4) {
    return 0;
  }
  iVar5 = *((int *)GEN_TOP((*(int *)(param_1 + 0x74) + (uint)(ushort)param_4 * 4)));
  if (((ushort)param_5 < *(ushort *)(iVar5 + 0xb8)) &&
     (iVar5 = (uint)(ushort)param_5 * 0x60 + *(int *)(iVar5 + 0x18), iVar5 != 0)) {
    uVar6 = *(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84) >> 2;
    uVar7 = 0;
    if (uVar6 != 0) {
      iVar1 = *(int *)(param_1 + 0x84);
      uVar4 = 0;
      do {
        iVar2 = *(int *)(iVar1 + uVar4 * 4);
        if (*(int *)(iVar2 + 8) == 1) {
          bVar3 = F_00bbb810(iVar2,param_2,iVar5,param_3,param_6);
          if (bVar3 != 0) {
            *param_7 = uVar7;
            return 1;
          }
        }
        uVar7 = uVar7 + 1;
        uVar4 = (uint)uVar7;
      } while (uVar4 < uVar6);
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00bbd4d0 */
byte F_00bbd4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xbbd4d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  ushort * param_5 = (ushort *)(uintptr_t)gen_a5;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  bool bVar6;
  
  if ((uint)(*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2) <= (uint)(ushort)param_3)
  {
    return 0;
  }
  iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 0x74) + (uint)(ushort)param_3 * 4)));
  if (((ushort)param_4 < *(ushort *)(iVar4 + 0xb8)) &&
     (iVar4 = (uint)(ushort)param_4 * 0x60 + *(int *)(iVar4 + 0x18), iVar4 != 0)) {
    uVar3 = *(int *)((int)this + 0x88) - *(int *)((int)this + 0x84) >> 2;
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar2 = 0;
      do {
        iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x84) + uVar2 * 4)));
        if ((((*(int *)(iVar1 + 8) == 2) && ((short)param_1 == *(short *)(iVar1 + 0xc))) &&
            (iVar4 == *(int *)(iVar1 + 0x20))) &&
           (((bVar6 = GEN_ISNAN((float10)*param_2) || GEN_ISNAN((float10)*(float *)(iVar1 + 0x10)),
             bVar6 != (bVar6 || (float10)*param_2 == (float10)*(float *)(iVar1 + 0x10)) &&
             (bVar6 = GEN_ISNAN((float10)param_2[1]) || GEN_ISNAN((float10)*(float *)(iVar1 + 0x14)),
             bVar6 != (bVar6 || (float10)param_2[1] == (float10)*(float *)(iVar1 + 0x14)))) &&
            (bVar6 = GEN_ISNAN((float10)param_2[2]) || GEN_ISNAN((float10)*(float *)(iVar1 + 0x18)),
            bVar6 != (bVar6 || (float10)param_2[2] == (float10)*(float *)(iVar1 + 0x18)))))) {
          *param_5 = uVar5;
          return 1;
        }
        uVar5 = uVar5 + 1;
        uVar2 = (uint)uVar5;
      } while (uVar2 < uVar3);
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00bbd5b0 */
byte F_00bbd5b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, float gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xbbd5b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  ushort * param_8 = (ushort *)(uintptr_t)gen_a7;
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  
  uVar4 = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x74) >> 2;
  if ((uVar4 <= (ushort)param_2) || (uVar4 <= (ushort)param_3)) {
    return 0;
  }
  iVar6 = *((int *)GEN_TOP((*(int *)(param_1 + 0x74) + (uint)(ushort)param_2 * 4)));
  if (((ushort)param_4 < *(ushort *)(iVar6 + 0xb8)) &&
     (iVar6 = (uint)(ushort)param_4 * 0x60 + *(int *)(iVar6 + 0x18), iVar6 != 0)) {
    iVar7 = *((int *)GEN_TOP((*(int *)(param_1 + 0x74) + (uint)(ushort)param_3 * 4)));
    if (((ushort)param_5 < *(ushort *)(iVar7 + 0xb8)) &&
       (iVar7 = (uint)(ushort)param_5 * 0x60 + *(int *)(iVar7 + 0x18), iVar7 != 0)) {
      uVar8 = 0;
      uVar4 = *(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84) >> 2;
      if (uVar4 != 0) {
        iVar1 = *(int *)(param_1 + 0x84);
        uVar5 = 0;
        do {
          iVar2 = *(int *)(iVar1 + uVar5 * 4);
          if (*(int *)(iVar2 + 8) == 0) {
            bVar3 = F_00bbb8e0(iVar2,iVar6,iVar7,param_6,param_7);
            if (bVar3 != 0) {
              *param_8 = uVar8;
              return 1;
            }
          }
          uVar8 = uVar8 + 1;
          uVar5 = (uint)uVar8;
        } while (uVar5 < uVar4);
      }
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00bbd8e0 */
byte F_00bbd8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbd8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  uVar3 = 0;
  uVar2 = *(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3;
  if (uVar2 != 0) {
    piVar4 = *(int * PTR32 *)((int)this + 0x94);
    do {
      if (*piVar4 == param_1) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 < uVar2);
  }
  uVar3 = 0;
  uVar2 = *(int *)((int)this + 0xa8) - *(int *)((int)this + 0xa4) >> 3;
  if (uVar2 != 0) {
    piVar4 = *(int * PTR32 *)((int)this + 0xa4);
    do {
      if (*piVar4 == param_1) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 < uVar2);
  }
  if (*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2 != 0) {
    uVar2 = 0;
    uVar3 = 0;
    do {
      bVar1 = F_00bfb890(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + uVar2 * 4))),param_1);
      if (bVar1 != 0) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      uVar2 = uVar3 & 0xffff;
    } while (uVar2 < (uint)(*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2));
  }
  return 0;
}

/* ref: FUN_00bbd9a0 */
byte F_00bbd9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbd9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)((int)this + 0x14) = param_1;
  F_00bbc2d0(this);
  return 1;
}

/* ref: FUN_00bbdb70 */
unsigned int F_00bbdb70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbbdb70u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = (*(uint *)&gen_args[3]);
  uVar2 = (*(undefined4 *)&gen_args[2]);
  iVar1 = (*(uint *)&gen_args[1]);
  if (((*(uint *)&gen_args[1]) != 0) &&
     ((*(uint *)&gen_args[3]) = (*(uint *)&gen_args[3]) & 0xffff,
     (*(uint *)&gen_args[3]) < (uint)(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) >> 2))) {
    (*(uint *)&gen_args[1]) = 0xffffffff;
    bVar3 = F_00bbd240((*(undefined * PTR32 *)&gen_args[0]),iVar1,(*(undefined4 *)&gen_args[2]),uVar4,&(*(uint *)&gen_args[1]));
    if ((bVar3 != 0) &&
       (uVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x94))) >> 3, uVar4 <= (*(uint *)&gen_args[1]))) {
      F_00bfe8a0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) + (*(uint *)&gen_args[3]) * 4))),iVar1,uVar2,uVar4);
    }
  }
  return 0;
}

/* ref: FUN_00bbdbe0 */
uint F_00bbdbe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbdbe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar2 = *(int *)((int)this + 0xa8) - *(int *)((int)this + 0xa4) >> 3;
  uVar4 = 0;
  if (uVar2 != 0) {
    piVar3 = *(int * PTR32 *)((int)this + 0xa4);
    uVar4 = 0;
    while ((*piVar3 != param_1 || (*(ushort *)(piVar3 + 1) != param_2))) {
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 2;
      if (uVar2 <= uVar4) {
        return uVar2;
      }
    }
    uVar2 = (*(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3) + uVar4 & 0xffff;
    iVar1 = uVar2 * 8;
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar1 + *(int *)((int)this + 0xa4))));
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
      *((undefined4 *)GEN_TOP((iVar1 + *(int *)((int)this + 0xa4)))) = 0;
    }
    if (uVar4 < (*(int *)((int)this + 0xa8) - *(int *)((int)this + 0xa4) >> 3) - 1U) {
      do {
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa4) + uVar4 * 8))) =
             *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa4) + 8 + uVar4 * 8)));
        *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xa4) + uVar4 * 8 + 4))) =
             *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xa4) + 0xc + uVar4 * 8)));
        *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xa4) + uVar4 * 8 + 6))) =
             *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xa4) + 0xe + uVar4 * 8)));
        uVar4 = uVar4 + 1;
      } while (uVar4 < (*(int *)((int)this + 0xa8) - *(int *)((int)this + 0xa4) >> 3) - 1U);
    }
    F_00bbcf80(this,uVar2);
    uVar4 = *(uint *)((int)this + 0xa8);
    if (*(uint *)((int)this + 0xa4) != uVar4) {
      uVar4 = uVar4 - 8;
      *(uint *)((int)this + 0xa8) = uVar4;
    }
  }
  return uVar4;
}

/* ref: FUN_00bbdd00 */
unsigned int F_00bbdd00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbdd00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined2 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = (ushort)(*(int *)((int)this + 0xa8) - *(int *)((int)this + 0xa4) >> 3);
  if (((ushort)param_1 < uVar3) && ((ushort)param_2 < uVar3)) {
    iVar4 = (param_1 & 0xffff) * 8;
    iVar6 = *(int *)((int)this + 0xa4);
    uVar2 = *(undefined4 *)(iVar6 + iVar4);
    iVar5 = (param_2 & 0xffff) * 8;
    *(undefined4 *)(iVar6 + iVar4) = *(undefined4 *)(iVar5 + iVar6);
    *((undefined4 *)GEN_TOP((iVar5 + *(int *)((int)this + 0xa4)))) = uVar2;
    iVar6 = *(int *)((int)this + 0xa4);
    uVar1 = *(undefined2 *)(iVar6 + 4 + iVar4);
    *(undefined2 *)(iVar6 + 4 + iVar4) = *(undefined2 *)(iVar5 + 4 + iVar6);
    *((undefined2 *)GEN_TOP((iVar5 + 4 + *(int *)((int)this + 0xa4)))) = uVar1;
    iVar6 = *(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3;
    F_00bbd030(this,iVar6 + param_1,iVar6 + param_2);
  }
  return 0;
}

/* ref: FUN_00bbddb0 */
unsigned int F_00bbddb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbddb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint local_c;
  
  uVar5 = 0;
  if (*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2 != 0) {
    uVar2 = 0;
    do {
      F_00bf96f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + uVar2 * 4))),param_1);
      uVar5 = uVar5 + 1;
      uVar2 = uVar5 & 0xffff;
    } while (uVar2 < (uint)(*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2));
  }
  uVar4 = -1 << ((byte)param_1 & 0x1f);
  uVar5 = 1 << ((byte)param_1 & 0x1f);
  uVar2 = 0;
  local_c = 0;
  if (*(int *)((int)this + 0xb8) - *(int *)((int)this + 0xb4) >> 5 != 0) {
    do {
      iVar3 = uVar2 * 0x20;
      uVar2 = *((uint *)GEN_TOP((iVar3 + 8 + *(int *)((int)this + 0xb4))));
      *((uint *)GEN_TOP((iVar3 + 8 + *(int *)((int)this + 0xb4)))) =
           (uVar2 & uVar4) * 2 | ~uVar4 & uVar2 | uVar5;
      puVar1 = ((uint *)GEN_TOP((iVar3 + 0xc + *(int *)((int)this + 0xb4))));
      uVar2 = *puVar1;
      *puVar1 = (uVar2 & uVar4) * 2 | ~uVar4 & uVar2 | uVar5;
      local_c = local_c + 1;
      uVar2 = local_c & 0xffff;
    } while (uVar2 < (uint)(*(int *)((int)this + 0xb8) - *(int *)((int)this + 0xb4) >> 5));
  }
  return 0;
}

/* ref: FUN_00bbde90 */
unsigned int F_00bbde90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbde90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint local_8;
  
  uVar4 = 0;
  if (*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2 != 0) {
    uVar2 = 0;
    do {
      F_00bf97a0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + uVar2 * 4))),param_1);
      uVar4 = uVar4 + 1;
      uVar2 = uVar4 & 0xffff;
    } while (uVar2 < (uint)(*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2));
  }
  uVar4 = -1 << ((byte)param_1 & 0x1f);
  local_8 = 0;
  if (*(int *)((int)this + 0xb8) - *(int *)((int)this + 0xb4) >> 5 != 0) {
    uVar2 = 0;
    do {
      iVar3 = uVar2 * 0x20;
      uVar2 = *((uint *)GEN_TOP((iVar3 + 8 + *(int *)((int)this + 0xb4))));
      *((uint *)GEN_TOP((iVar3 + 8 + *(int *)((int)this + 0xb4)))) =
           (uVar2 & uVar4) >> 1 | ~uVar4 & uVar2 | 0x80000000;
      puVar1 = ((uint *)GEN_TOP((iVar3 + 0xc + *(int *)((int)this + 0xb4))));
      uVar2 = *puVar1;
      *puVar1 = (uVar2 & uVar4) >> 1 | ~uVar4 & uVar2 | 0x80000000;
      local_8 = local_8 + 1;
      uVar2 = local_8 & 0xffff;
    } while (uVar2 < (uint)(*(int *)((int)this + 0xb8) - *(int *)((int)this + 0xb4) >> 5));
  }
  return 0;
}

/* ref: FUN_00bbdf70 */
unsigned int F_00bbdf70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbdf70u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  byte bVar6;
  byte bVar7;
  uint * puVar8;
  uint uVar9;
  
  uVar9 = 0;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) >> 2 != 0) {
    uVar4 = 0;
    do {
      F_00bfb640(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) + uVar4 * 4))),(*(uint *)&gen_args[1]),(*(uint *)&gen_args[2]));
      uVar9 = uVar9 + 1;
      uVar4 = uVar9 & 0xffff;
    } while (uVar4 < (uint)(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) >> 2));
  }
  uVar9 = (*(uint *)&gen_args[2]);
  (*(uint *)(gen_frame + 0x18)) = (*(uint *)&gen_args[2]) & 0xffff;
  (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[1]) & 0xffff;
  puVar8 = &(*(uint *)&gen_args[2]);
  if ((ushort)uVar9 <= (ushort)(*(uint *)&gen_args[1])) {
    puVar8 = &(*(uint *)(gen_frame + 0x18));
  }
  puVar5 = &(*(uint *)&gen_args[2]);
  if ((ushort)(*(uint *)&gen_args[1]) <= (ushort)uVar9) {
    puVar5 = &(*(uint *)(gen_frame + 0x18));
  }
  bVar6 = (byte)(short)*puVar8;
  uVar9 = 1 << (bVar6 & 0x1f);
  bVar7 = (byte)(short)*puVar5;
  uVar4 = 1 << (bVar7 & 0x1f);
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8)));
  iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa4)));
  (*(uint *)(gen_frame + 0x18)) = uVar9;
  (*(uint *)(gen_frame + 0xc)) = 0;
  if (iVar1 - iVar2 >> 3 != 0) {
    bVar7 = bVar7 - bVar6;
    (*(uint *)&gen_args[2]) = 0;
    do {
      puVar8 = ((uint *)GEN_TOP(((*(uint *)&gen_args[2]) + 8 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4))))));
      uVar3 = *puVar8;
      *puVar8 = (uVar3 & uVar4) >> (bVar7 & 0x1f) | (uVar3 & uVar9) << (bVar7 & 0x1f) |
                uVar3 & ~uVar9 & ~uVar4;
      puVar8 = ((uint *)GEN_TOP(((*(uint *)&gen_args[2]) + 0xc + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb4))))));
      (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) + 0x20;
      uVar3 = *puVar8;
      *puVar8 = (uVar3 & uVar4) >> (bVar7 & 0x1f) | (uVar3 & uVar9) << (bVar7 & 0x1f) |
                uVar3 & ~uVar9 & ~uVar4;
      (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
    } while ((*(uint *)(gen_frame + 0xc)) < (uint)(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa4))) >> 3));
  }
  return 0;
}

/* ref: FUN_00bbe0d0 */
unsigned int F_00bbe0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbe0d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int * piVar2;
  byte bVar3;
  undefined * pvVar4;
  undefined * pvVar5;
  int * piVar6;
  uint uVar7;
  uint uVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (param_1 != 0) {
    pvVar4 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3)));
    pvVar5 = (undefined *)0x0;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0xffffffff;
    if (pvVar4 != (undefined *)0x0) {
      piVar2 = *(int * PTR32 *)((int)this + 0x94);
      piVar6 = piVar2;
      do {
        if ((*piVar6 == param_1) && (*(ushort *)(piVar6 + 1) == param_2)) {
          (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar5;
          piVar2 = (int *)piVar2[(int)((int)(uintptr_t)pvVar5) * 2];
          if (piVar2 != (int *)0x0) {
            ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
            *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x94) + (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x8))) * 8))) = 0;
          }
          pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          if ((*(undefined * PTR32 *)(gen_frame + 0x8)) < ((undefined *)GEN_TOP(((*(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3) - 1U
                                )))) {
            do {
              *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x94) + (int)((int)(uintptr_t)pvVar4) * 8))) =
                   *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x94) + 8 + (int)((int)(uintptr_t)pvVar4) * 8)));
              *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x94) + (int)((int)(uintptr_t)pvVar4) * 8 + 4))) =
                   *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x94) + 0xc + (int)((int)(uintptr_t)pvVar4) * 8)));
              *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x94) + (int)((int)(uintptr_t)pvVar4) * 8 + 6))) =
                   *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x94) + 0xe + (int)((int)(uintptr_t)pvVar4) * 8)));
              pvVar4 = (undefined *)((int)pvVar4 + 1);
            } while (pvVar4 < ((undefined *)GEN_TOP(((*(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3
                                       ) - 1U))));
          }
          F_00bbde90(this,(*(undefined * PTR32 *)(gen_frame + 0x8)));
          if (*(int *)((int)this + 0x94) == *(int *)((int)this + 0x98)) {
            return 0;
          }
          *(int *)((int)this + 0x98) = *(int *)((int)this + 0x98) + -8;
          return 0;
        }
        pvVar5 = (undefined *)((int)pvVar5 + 1);
        piVar6 = piVar6 + 2;
      } while (pvVar5 < pvVar4);
    }
    uVar8 = 0;
    if (*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2 != 0) {
      uVar7 = 0;
      do {
        bVar3 = F_00bbd240(this,param_1,param_2,uVar8,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
        if (bVar3 != 0) {
          F_00bfe8a0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + uVar7 * 4))),param_1,param_2,
                       *(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3);
        }
        uVar8 = uVar8 + 1;
        uVar7 = uVar8 & 0xffff;
      } while (uVar7 < (uint)(*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2));
    }
    uVar7 = 0;
    uVar8 = *(int *)((int)this + 0xa8) - *(int *)((int)this + 0xa4) >> 3;
    if (uVar8 != 0) {
      piVar2 = *(int * PTR32 *)((int)this + 0xa4);
      piVar6 = piVar2;
      while ((*piVar6 != param_1 || (*(ushort *)(piVar6 + 1) != param_2))) {
        uVar7 = uVar7 + 1;
        piVar6 = piVar6 + 2;
        if (uVar8 <= uVar7) {
          return 0;
        }
      }
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(((*(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3) + uVar7)));
      piVar2 = (int *)piVar2[uVar7 * 2];
      if (piVar2 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa4) + uVar7 * 8))) = 0;
      }
      if (uVar7 < (*(int *)((int)this + 0xa8) - *(int *)((int)this + 0xa4) >> 3) - 1U) {
        do {
          puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa4) + uVar7 * 8)));
          *puVar1 = puVar1[2];
          *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xa4) + uVar7 * 8 + 4))) =
               *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xa4) + 0xc + uVar7 * 8)));
          *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xa4) + uVar7 * 8 + 6))) =
               *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xa4) + 0xe + uVar7 * 8)));
          uVar7 = uVar7 + 1;
        } while (uVar7 < (*(int *)((int)this + 0xa8) - *(int *)((int)this + 0xa4) >> 3) - 1U);
      }
      F_00bbcf80(this,(*(undefined * PTR32 *)(gen_frame + 0x8)));
      if (*(int *)((int)this + 0xa4) != *(int *)((int)this + 0xa8)) {
        *(int *)((int)this + 0xa8) = *(int *)((int)this + 0xa8) + -8;
      }
    }
  }
  return 0;
}

/* ref: FUN_00bbe340 */
unsigned int F_00bbe340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbe340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = (ushort)(*(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3);
  if (((ushort)param_1 < uVar4) && ((ushort)param_2 < uVar4)) {
    iVar2 = *(int *)((int)this + 0x94);
    iVar5 = (param_1 & 0xffff) * 8;
    uVar3 = *(undefined4 *)(iVar2 + iVar5);
    iVar6 = (param_2 & 0xffff) * 8;
    *(undefined4 *)(iVar2 + iVar5) = *(undefined4 *)(iVar6 + iVar2);
    *((undefined4 *)GEN_TOP((iVar6 + *(int *)((int)this + 0x94)))) = uVar3;
    iVar2 = *(int *)((int)this + 0x94);
    uVar1 = *(undefined2 *)(iVar2 + 4 + iVar5);
    *(undefined2 *)(iVar2 + 4 + iVar5) = *(undefined2 *)(iVar6 + 4 + iVar2);
    *((undefined2 *)GEN_TOP((iVar6 + 4 + *(int *)((int)this + 0x94)))) = uVar1;
    F_00bbdf70(this,param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00bbe3e0 */
byte F_00bbe3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbe3e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  
  if ((uint)(*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2) <= (param_1 & 0xffff)) {
    return 0;
  }
  iVar3 = (param_1 & 0xffff) * 4;
  F_00bfbba0(*((undefined * PTR32 *)GEN_TOP((iVar3 + *(int *)((int)this + 0x74)))));
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x74) + iVar3))) != 0) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + iVar3)));
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
    *((undefined4 *)GEN_TOP((iVar3 + *(int *)((int)this + 0x74)))) = 0;
  }
  iVar3 = *(int *)((int)this + 0x74) + iVar3;
  iVar1 = iVar3 + 4;
  F_00c46e20(iVar3,iVar1,(*(int *)((int)this + 0x78) - iVar1 >> 2) * 4);
  *(int *)((int)this + 0x78) = *(int *)((int)this + 0x78) + -4;
  return 1;
}

/* ref: FUN_00bbe460 */
byte F_00bbe460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbe460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  
  if ((uint)(*(int *)((int)this + 0x88) - *(int *)((int)this + 0x84) >> 2) <= (param_1 & 0xffff)) {
    return 0;
  }
  iVar4 = (param_1 & 0xffff) * 4;
  piVar2 = *((int * PTR32 *)GEN_TOP((iVar4 + *(int *)((int)this + 0x84))));
  ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x84) + iVar4))) != 0) {
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x84) + iVar4)));
    if (puVar3 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
    }
    *((undefined4 *)GEN_TOP((iVar4 + *(int *)((int)this + 0x84)))) = 0;
  }
  iVar4 = *(int *)((int)this + 0x84) + iVar4;
  iVar1 = iVar4 + 4;
  F_00c46e20(iVar4,iVar1,(*(int *)((int)this + 0x88) - iVar1 >> 2) * 4);
  *(int *)((int)this + 0x88) = *(int *)((int)this + 0x88) + -4;
  return 1;
}

/* ref: FUN_00bbe500 */
unsigned int F_00bbe500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbe500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int * piVar7;
  
  if (param_1 != 0) {
    uVar4 = *(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3;
    (*(uint *)(gen_frame + 0xc)) = 0;
    (*(uint *)(gen_frame + 0x10)) = uVar4;
    if (uVar4 != 0) {
      do {
        piVar2 = *(int * PTR32 *)((int)this + 0x94);
        if (piVar2[(*(uint *)(gen_frame + 0xc)) * 2] == param_1) {
          uVar4 = (uint)*(ushort *)(piVar2 + (*(uint *)(gen_frame + 0xc)) * 2 + 1);
          uVar5 = *(int *)((int)this + 0x98) - (int)((int)(uintptr_t)piVar2) >> 3;
          uVar6 = 0;
          (*(uint *)(gen_frame + 0x18)) = 0xffffffff;
          piVar7 = piVar2;
          if (uVar5 != 0) {
LAB_00bbe568: ;
            if ((*piVar7 != param_1) || (*(ushort *)(piVar7 + 1) != uVar4)) goto LAB_00bbe57c;
            (*(uint *)(gen_frame + 0x18)) = uVar6;
            piVar2 = (int *)piVar2[uVar6 * 2];
            if (piVar2 != (int *)0x0) {
              ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
              *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x94) + (*(uint *)(gen_frame + 0x18)) * 8))) = 0;
            }
            uVar4 = (*(uint *)(gen_frame + 0x18));
            if ((*(uint *)(gen_frame + 0x18)) < (*(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3) - 1U) {
              do {
                puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x94) + uVar4 * 8)));
                *puVar1 = puVar1[2];
                *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x94) + uVar4 * 8 + 4))) =
                     *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x94) + 0xc + uVar4 * 8)));
                *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x94) + uVar4 * 8 + 6))) =
                     *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x94) + 0xe + uVar4 * 8)));
                uVar4 = uVar4 + 1;
              } while (uVar4 < (*(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3) - 1U);
            }
            F_00bbde90(this,(*(uint *)(gen_frame + 0x18)));
            if (*(int *)((int)this + 0x94) == *(int *)((int)this + 0x98)) goto LAB_00bbe79d;
            *(int *)((int)this + 0x98) = *(int *)((int)this + 0x98) + -8;
            uVar4 = (*(uint *)(gen_frame + 0x10)) - 1;
            (*(uint *)(gen_frame + 0x10)) = uVar4;
            goto LAB_00bbe7ad;
          }
LAB_00bbe584: ;
          uVar5 = 0;
          if (*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2 != 0) {
            uVar6 = 0;
            do {
              bVar3 = F_00bbd240(this,param_1,uVar4,uVar5,&(*(uint *)(gen_frame + 0x18)));
              if (bVar3 != 0) {
                F_00bfe8a0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + uVar6 * 4))),param_1,uVar4,
                             *(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3);
              }
              uVar5 = uVar5 + 1;
              uVar6 = uVar5 & 0xffff;
            } while (uVar6 < (uint)(*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2));
          }
          uVar6 = 0;
          uVar5 = *(int *)((int)this + 0xa8) - *(int *)((int)this + 0xa4) >> 3;
          if (uVar5 == 0) {
LAB_00bbe79d: ;
            uVar4 = (*(uint *)(gen_frame + 0x10)) - 1;
            (*(uint *)(gen_frame + 0x10)) = uVar4;
          }
          else {
            piVar2 = *(int * PTR32 *)((int)this + 0xa4);
            piVar7 = piVar2;
            do {
              if ((*piVar7 == param_1) && (*(ushort *)(piVar7 + 1) == uVar4)) {
                (*(uint *)(gen_frame + 0x18)) = (*(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3) + uVar6;
                piVar2 = (int *)piVar2[uVar6 * 2];
                if (piVar2 != (int *)0x0) {
                  ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
                  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa4) + uVar6 * 8))) = 0;
                }
                if (uVar6 < (*(int *)((int)this + 0xa8) - *(int *)((int)this + 0xa4) >> 3) - 1U) {
                  do {
                    puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa4) + uVar6 * 8)));
                    *puVar1 = puVar1[2];
                    *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xa4) + uVar6 * 8 + 4))) =
                         *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xa4) + 0xc + uVar6 * 8)));
                    *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xa4) + uVar6 * 8 + 6))) =
                         *((undefined2 *)GEN_TOP((*(int *)((int)this + 0xa4) + 0xe + uVar6 * 8)));
                    uVar6 = uVar6 + 1;
                  } while (uVar6 < (*(int *)((int)this + 0xa8) - *(int *)((int)this + 0xa4) >> 3) -
                                   1U);
                }
                F_00bbcf80(this,(*(uint *)(gen_frame + 0x18)));
                if (*(int *)((int)this + 0xa4) != *(int *)((int)this + 0xa8)) {
                  *(int *)((int)this + 0xa8) = *(int *)((int)this + 0xa8) + -8;
                }
                goto LAB_00bbe79d;
              }
              uVar6 = uVar6 + 1;
              piVar7 = piVar7 + 2;
            } while (uVar6 < uVar5);
            uVar4 = (*(uint *)(gen_frame + 0x10)) - 1;
            (*(uint *)(gen_frame + 0x10)) = uVar4;
          }
        }
        else {
          (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
        }
LAB_00bbe7ad: ;
      } while ((*(uint *)(gen_frame + 0xc)) < uVar4);
    }
  }
  return 0;
LAB_00bbe57c: ;
  uVar6 = uVar6 + 1;
  piVar7 = piVar7 + 2;
  if (uVar5 <= uVar6) goto LAB_00bbe584;
  goto LAB_00bbe568;
}

/* ref: FUN_00bbe7c0 */
uint F_00bbe7c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbe7c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1104970));
  iVar1 = *(int *)((int)this + 0xb4);
  if (iVar1 != 0) {
    F_00429760(iVar1,*(int *)((int)this + 0xbc) - iVar1 & 0xffffffe0,200);
  }
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  iVar1 = *(int *)((int)this + 0xa4);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0xac) - iVar1 >> 3) * 8,200);
  }
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  iVar1 = *(int *)((int)this + 0x94);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x9c) - iVar1 >> 3) * 8,200);
  }
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  iVar1 = *(int *)((int)this + 0x84);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x8c) - iVar1 >> 2) * 4,200);
  }
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  iVar1 = *(int *)((int)this + 0x74);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 0x7c) - iVar1 >> 2) * 4,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  return uVar2;
}

/* ref: Client::Graphics::Physics::BoneSimulator::vf1 */
uint F_00bbe8f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbe8f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (*(int *)(this + 0x88) - *(int *)(this + 0x84) >> 2 != 0) {
    uVar4 = 0;
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x84) + uVar4 * 4)));
      ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      if (*((int *)GEN_TOP((*(int *)(this + 0x84) + uVar4 * 4))) != 0) {
        puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(this + 0x84) + uVar4 * 4)));
        if (puVar2 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        }
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x84) + uVar4 * 4))) = 0;
      }
      uVar5 = uVar5 + 1;
      uVar4 = uVar5 & 0xffff;
    } while (uVar4 < (uint)(*(int *)(this + 0x88) - *(int *)(this + 0x84) >> 2));
  }
  iVar3 = *(int *)(this + 0x84);
  if (iVar3 != *(int *)(this + 0x88)) {
    F_00c46e20(iVar3,*(int *)(this + 0x88),0);
    *(int *)(this + 0x88) = iVar3;
  }
  uVar5 = 0;
  if (*(int *)(this + 0x78) - *(int *)(this + 0x74) >> 2 != 0) {
    uVar4 = 0;
    do {
      F_00bfbba0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x74) + uVar4 * 4))));
      if (*((int *)GEN_TOP((*(int *)(this + 0x74) + uVar4 * 4))) != 0) {
        puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(this + 0x74) + uVar4 * 4)));
        if (puVar2 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        }
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x74) + uVar4 * 4))) = 0;
      }
      uVar5 = uVar5 + 1;
      uVar4 = uVar5 & 0xffff;
    } while (uVar4 < (uint)(*(int *)(this + 0x78) - *(int *)(this + 0x74) >> 2));
  }
  iVar3 = *(int *)(this + 0x74);
  if (iVar3 != *(int *)(this + 0x78)) {
    F_00c46e20(iVar3,*(int *)(this + 0x78),0);
    *(int *)(this + 0x78) = iVar3;
  }
  uVar5 = 0;
  if (*(int *)(this + 0x98) - *(int *)(this + 0x94) >> 3 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x94) + uVar5 * 8)));
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x94) + uVar5 * 8))) = 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)(*(int *)(this + 0x98) - *(int *)(this + 0x94) >> 3));
  }
  if (*(int *)(this + 0x94) != *(int *)(this + 0x98)) {
    *(int *)(this + 0x98) = *(int *)(this + 0x94);
  }
  uVar5 = *(uint *)(this + 0xb4);
  if (uVar5 != *(uint *)(this + 0xb8)) {
    *(uint *)(this + 0xb8) = uVar5;
  }
  piVar1 = *(int * PTR32 *)(this + 0x14);
  if (piVar1 != (int *)0x0) {
    uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x14) = 0;
  }
  return uVar5;
}

/* ref: FUN_00bbeae0 */
unsigned int F_00bbeae0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbeae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x94) + uVar3 * 8)));
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x94) + uVar3 * 8))) = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(int *)((int)this + 0x94) != *(int *)((int)this + 0x98)) {
    *(int *)((int)this + 0x98) = *(int *)((int)this + 0x94);
  }
  uVar3 = 0;
  uVar2 = *(int *)((int)this + 0xa8) - *(int *)((int)this + 0xa4) >> 3;
  if (uVar2 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xa4) + uVar3 * 8)));
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa4) + uVar3 * 8))) = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(int *)((int)this + 0xa4) != *(int *)((int)this + 0xa8)) {
    *(int *)((int)this + 0xa8) = *(int *)((int)this + 0xa4);
  }
  uVar2 = 0;
  if (*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2 != 0) {
    uVar3 = 0;
    do {
      F_00bff0e0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x74) + uVar3 * 4))));
      uVar2 = uVar2 + 1;
      uVar3 = uVar2 & 0xffff;
    } while (uVar3 < (uint)(*(int *)((int)this + 0x78) - *(int *)((int)this + 0x74) >> 2));
  }
  return 0;
}

/* ref: FUN_00bbec00 */
uint F_00bbec00(unsigned int gen_a0)
{
  GEN_ENTER(0xbbec00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1104970));
  uVar1 = REFG(float, 0x110497c);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x20) = REFG(float, 0x1375ac0);
  *(undefined4 *)((int)this + 0x24) = REFG(float, 0x1375ac4);
  *(undefined4 *)((int)this + 0x28) = REFG(float, 0x1375ac8);
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x34) = uVar1;
  *(undefined4 *)((int)this + 0x40) = REFG(float, 0x1375ac0);
  *(undefined4 *)((int)this + 0x44) = REFG(float, 0x1375ac4);
  *(undefined4 *)((int)this + 0x48) = REFG(float, 0x1375ac8);
  *(undefined4 *)((int)this + 0x50) = REFG(float, 0x108bee8);
  uVar1 = REFG(float, 0x1104978);
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x54) = uVar1;
  *(undefined4 *)((int)this + 0x5c) = REFG(float, 0x1104968);
  *(undefined4 *)((int)this + 0x60) = REFG(float, 0x10adc54);
  *(undefined4 *)((int)this + 100) = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x68) = REFG(float, 0x10abe50);
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined2 *)((int)this + 0x6c) = 2;
  *(undefined2 *)((int)this + 0x6e) = 2;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0x1010100;
  *(undefined4 *)((int)this + 200) = 0x100;
  *(undefined2 *)((int)this + 0xcc) = 0x100;
  return (uint)this;
}

/* ref: FUN_00bbed50 */
uint F_00bbed50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0xbbed50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar1 = *(int *)(param_1 + 0x74);
    uVar4 = param_2 & 0xffff;
    uVar2 = *(int *)(param_1 + 0x78) - iVar1 >> 2;
    (*(uint *)(gen_frame + 0x4c)) = uVar4;
    if ((uVar4 < uVar2) && (uVar5 = param_3 & 0xffff, uVar5 < uVar2)) {
      iVar3 = *(int *)(iVar1 + uVar4 * 4);
      if (((ushort)param_4 < *(ushort *)(iVar3 + 0xb8)) &&
         (iVar3 = (param_4 & 0xffff) * 0x60 + *(int *)(iVar3 + 0x18), (*(int *)(gen_frame + 0x40)) = iVar3, iVar3 != 0))
      {
        uVar2 = F_00bbb980(*(undefined4 *)(iVar1 + uVar5 * 4),param_5);
        (*(uint *)(gen_frame + 0x44)) = uVar2;
        if (uVar2 != 0) {
          uVar2 = F_00bbbbd0(((undefined1 *)(gen_frame + 0x0)),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               param_9,param_10,param_11);
          F_00bc0590((undefined *)(param_1 + 0xb4),uVar2);
          F_00bbb9b0(*((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x74) + (*(uint *)(gen_frame + 0x4c)) * 4))),((undefined1 *)(gen_frame + 0x20)),param_4);
          F_00bbb9b0(*((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x74) + uVar5 * 4))),((undefined1 *)(gen_frame + 0x30)),param_5);
          F_00bfb8d0(*((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x74) + (*(uint *)(gen_frame + 0x4c)) * 4))),(*(uint *)(gen_frame + 0x44)),((undefined1 *)(gen_frame + 0x30)),param_4
                      );
          F_00bfb8d0(*((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x74) + uVar5 * 4))),(*(int *)(gen_frame + 0x40)),((undefined1 *)(gen_frame + 0x20)),param_5);
          return ((*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) & 0xffffffe0U) - 0x20) +
                 *(int *)(param_1 + 0xb4);
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00bbeeb0 */
uint F_00bbeeb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbbeeb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  iVar1 = *(int *)((int)this + 0x98);
  iVar2 = *(int *)((int)this + 0x94);
  (*(undefined2 *)(gen_frame + 0x8)) = (undefined2)param_2;
  (*(int * PTR32 *)(gen_frame + 0x4)) = param_1;
  (*(ushort *)(gen_frame + 0xa)) = (ushort)(iVar1 - iVar2 >> 3);
  F_00bc0510((undefined *)((int)this + 0x94),&(*(int * PTR32 *)(gen_frame + 0x4)));
  return (uint)(*(ushort *)(gen_frame + 0xa));
}

/* ref: FUN_00bbef10 */
uint F_00bbef10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbbef10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  (*(undefined2 *)(gen_frame + 0x8)) = (undefined2)param_2;
  (*(ushort *)(gen_frame + 0xa)) = (short)(*(int *)((int)this + 0x98) - *(int *)((int)this + 0x94) >> 3) +
            (short)(*(int *)((int)this + 0xa8) - *(int *)((int)this + 0xa4) >> 3);
  (*(int * PTR32 *)(gen_frame + 0x4)) = param_1;
  F_00bc0510((undefined *)((int)this + 0xa4),&(*(int * PTR32 *)(gen_frame + 0x4)));
  return (uint)(*(ushort *)(gen_frame + 0xa));
}

/* ref: FUN_00bbef80 */
uint F_00bbef80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xbbef80u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  ushort * puVar5;
  uint uVar6;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
    return 0xffffffff;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
  uVar3 = (ushort)(*(undefined4 *)&gen_args[3]);
  (*(int * PTR32 *)(gen_frame + 0x0)) = piVar1;
  piVar1 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x94)));
  (*(undefined2 *)(gen_frame + 0x4)) = (undefined2)(*(undefined4 *)&gen_args[2]);
  (*(ushort *)(gen_frame + 0x6)) = (ushort)(*(undefined4 *)&gen_args[3]);
  F_00bc0510(piVar1,&(*(int * PTR32 *)(gen_frame + 0x0)));
  iVar2 = *piVar1;
  uVar4 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98))) - iVar2 >> 3;
  (*(int * PTR32 *)&gen_args[1]) = (int *)(uVar4 - 1 & 0xffff);
  puVar5 = (ushort *)&(*(undefined4 *)&gen_args[3]);
  if ((ushort)(uVar4 - 1) <= uVar3) {
    puVar5 = (ushort *)&(*(int * PTR32 *)&gen_args[1]);
  }
  uVar6 = (uint)*puVar5;
  if (uVar6 != 0) {
    puVar5 = (ushort *)(iVar2 + -2 + uVar6 * 8);
    do {
      if (*puVar5 < uVar3) break;
      puVar5 = puVar5 + -4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  while (uVar4 = uVar4 - 1, uVar6 < uVar4) {
    *(undefined4 *)(*piVar1 + uVar4 * 8) = *(undefined4 *)(*piVar1 + -8 + uVar4 * 8);
    *(undefined2 *)(*piVar1 + uVar4 * 8 + 4) = *(undefined2 *)(*piVar1 + -4 + uVar4 * 8);
    *(undefined2 *)(*piVar1 + uVar4 * 8 + 6) = *(undefined2 *)(*piVar1 + -2 + uVar4 * 8);
  }
  *(int * PTR32 *)(*piVar1 + uVar6 * 8) = (*(int * PTR32 *)(gen_frame + 0x0));
  *(undefined2 *)(*piVar1 + 4 + uVar6 * 8) = (*(undefined2 *)(gen_frame + 0x4));
  *(ushort *)(*piVar1 + 6 + uVar6 * 8) = (*(ushort *)(gen_frame + 0x6));
  if ((char)(*(undefined4 *)&gen_args[4]) != '\0') {
    F_00bbddb0((*(undefined * PTR32 *)(gen_frame + 0x8)),uVar6);
  }
  return uVar6;
}

/* ref: FUN_00bbf070 */
uint F_00bbf070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xbbf070u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  uint uVar3;
  uint * puVar4;
  ushort * puVar5;
  uint uVar6;
  int iVar7;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
    return 0xffffffff;
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
  (*(int * PTR32 *)(gen_frame + 0xc)) = piVar1;
  (*(undefined2 *)(gen_frame + 0x12)) = (ushort)(*(uint *)&gen_args[3]);
  piVar1 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa4)));
  (*(undefined2 *)(gen_frame + 0x10)) = (undefined2)(*(uint *)&gen_args[2]);
  F_00bc0510(piVar1,&(*(int * PTR32 *)(gen_frame + 0xc)));
  iVar2 = *piVar1;
  iVar7 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x98))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x94))) >> 3;
  uVar3 = (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8))) - iVar2 >> 3) - 1;
  uVar6 = ((*(uint *)&gen_args[3]) & 0xffff) - iVar7;
  (*(uint *)(gen_frame + 0x18)) = uVar3;
  (*(uint *)&gen_args[2]) = uVar3;
  (*(int * PTR32 *)&gen_args[1]) = (int *)uVar6;
  puVar4 = (uint *)&(*(int * PTR32 *)&gen_args[1]);
  if (uVar3 <= uVar6) {
    puVar4 = &(*(uint *)&gen_args[2]);
  }
  uVar6 = *puVar4;
  if (uVar6 != 0) {
    puVar5 = (ushort *)(iVar2 + -2 + uVar6 * 8);
    do {
      if (*puVar5 < (ushort)(*(uint *)&gen_args[3])) break;
      puVar5 = puVar5 + -4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  for (; uVar6 < uVar3; uVar3 = uVar3 - 1) {
    *(undefined4 *)(*piVar1 + uVar3 * 8) = *(undefined4 *)(*piVar1 + -8 + uVar3 * 8);
    *(undefined2 *)(*piVar1 + uVar3 * 8 + 4) = *(undefined2 *)(*piVar1 + -4 + uVar3 * 8);
    *(undefined2 *)(*piVar1 + uVar3 * 8 + 6) = *(undefined2 *)(*piVar1 + -2 + uVar3 * 8);
    (*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 *)(gen_frame + 0x14));
  }
  *(int * PTR32 *)(*piVar1 + uVar6 * 8) = (*(int * PTR32 *)(gen_frame + 0xc));
  *(undefined2 *)(*piVar1 + 4 + uVar6 * 8) = (*(undefined2 *)(gen_frame + 0x10));
  uVar3 = iVar7 + uVar6;
  *(undefined2 *)(*piVar1 + 6 + uVar6 * 8) = (*(undefined2 *)(gen_frame + 0x12));
  if ((char)(*(undefined4 *)&gen_args[4]) != '\0') {
    F_00bbced0((*(undefined * PTR32 *)&gen_args[0]),uVar3);
  }
  return uVar3;
}

/* ref: FUN_00bbf180 */
uint F_00bbf180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbbf180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined * pvVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 0x14) == 0) {
    return 0;
  }
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                             (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),0xe0,0x10)));
  if (pvVar2 == (undefined *)0x0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = (undefined *)F_00bff170(pvVar2);
  }
  uVar1 = *(undefined4 *)((int)this + 0x14);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar2;
  F_00bfbd10(pvVar2,uVar1,param_1,param_2,param_3,param_4);
  F_00bc06d0((undefined *)((int)this + 0x74),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  return (uint)(*(undefined * PTR32 *)(gen_frame + 0x8));
}

/* ref: FUN_00bbf1f0 */
uint F_00bbf1f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0xbbf1f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  memcpy(&gen_args[5], &gen_a5, sizeof gen_a5);
  uint uVar1;
  int iVar2;
  
  if (*(int *)((*(int *)&gen_args[0]) + 0x14) != 0) {
    if (((*(uint *)&gen_args[3]) & 0xffff) < (uint)(*(int *)((*(int *)&gen_args[0]) + 0x78) - *(int *)((*(int *)&gen_args[0]) + 0x74) >> 2)) {
      iVar2 = *((int *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x74) + ((*(uint *)&gen_args[3]) & 0xffff) * 4)));
      if (((ushort)(*(uint *)&gen_args[4]) < *(ushort *)(iVar2 + 0xb8)) &&
         (iVar2 = ((*(uint *)&gen_args[4]) & 0xffff) * 0x60 + *(int *)(iVar2 + 0x18), iVar2 != 0)) {
        uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                          (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),0x50,0x10);
        if (uVar1 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = F_00c1e4d0(uVar1);
        }
        F_00c1e500(uVar1,*(undefined4 *)((*(int *)&gen_args[0]) + 0x14),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),iVar2,(*(float *)&gen_args[5]));
        (*(uint *)&gen_args[3]) = uVar1;
        F_00bc0740((undefined *)((*(int *)&gen_args[0]) + 0x84),&(*(uint *)&gen_args[3]));
        return uVar1;
      }
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00bbf2a0 */
uint F_00bbf2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbbf2a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint in_ecx;
  undefined * this_00;
  int iVar1;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) != 0) {
    if (((uint)(*(undefined * PTR32 *)&gen_args[3]) & 0xffff) <
        (uint)(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) >> 2)) {
      iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) + ((uint)(*(undefined * PTR32 *)&gen_args[3]) & 0xffff) * 4)));
      if (((ushort)(*(uint *)&gen_args[4]) < *(ushort *)(iVar1 + 0xb8)) &&
         (iVar1 = ((*(uint *)&gen_args[4]) & 0xffff) * 0x60 + *(int *)(iVar1 + 0x18), iVar1 != 0)) {
        *(undefined4 *)(iVar1 + 0x54) = 0;
        in_ecx = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                           (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),0x40,0x10);
        if (in_ecx == 0) {
          this_00 = (undefined *)0x0;
        }
        else {
          this_00 = (undefined *)F_00c1e730(in_ecx);
        }
        F_00c1e760(this_00,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),iVar1);
        (*(undefined * PTR32 *)&gen_args[3]) = this_00;
        F_00bc0740(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84))),&(*(undefined * PTR32 *)&gen_args[3]));
        return (uint)this_00;
      }
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00bbf360 */
uint F_00bbf360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0xbbf360u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined * this;
  int iVar4;
  float fVar5;
  
  iVar1 = *(int *)(param_1 + 0x14);
  (*(uint *)(gen_frame + 0x14)) = param_1;
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x74);
    uVar3 = *(int *)(param_1 + 0x78) - iVar1 >> 2;
    if (((param_2 & 0xffff) < uVar3) && ((param_3 & 0xffff) < uVar3)) {
      iVar4 = *((int *)GEN_TOP((iVar1 + (param_2 & 0xffff) * 4)));
      if (((ushort)param_4 < *(ushort *)(iVar4 + 0xb8)) &&
         (iVar4 = (uint)(ushort)param_4 * 0x60 + *(int *)(iVar4 + 0x18), iVar4 != 0)) {
        uVar3 = F_00bbb980(*((undefined4 *)GEN_TOP((iVar1 + (param_3 & 0xffff) * 4))),param_5);
        (*(uint *)(gen_frame + 0x18)) = uVar3;
        if (uVar3 != 0) {
          this = (undefined *)F_0046f4a0(((undefined1 *)(gen_frame + 0x0)),iVar4,uVar3);
          fVar5 = F_004bd280(this);
          (*(float *)(gen_frame + 0x1c)) = fVar5;
          uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                            (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),0x20,0x10);
          if (uVar3 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = F_00c1e910(uVar3);
          }
          uVar2 = (*(uint *)(gen_frame + 0x14));
          F_00c1e8a0(uVar3,*(undefined4 *)((*(uint *)(gen_frame + 0x14)) + 0x14),iVar4,(*(uint *)(gen_frame + 0x18)),(*(float *)(gen_frame + 0x1c)),param_6,
                       param_7);
          (*(uint *)(gen_frame + 0x14)) = uVar3;
          F_00bc0740((undefined *)(uVar2 + 0x84),&(*(uint *)(gen_frame + 0x14)));
          return uVar3;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00bbf4e0 */
uint F_00bbf4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf4e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * 4;
  return (uint)param_1;
}

/* ref: FUN_00bbf500 */
uint F_00bbf500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * 4;
  return (uint)param_1;
}

/* ref: FUN_00bbf530 */
uint F_00bbf530(unsigned int gen_a0)
{
  GEN_ENTER(0xbbf530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00bbf580 */
uint F_00bbf580(unsigned int gen_a0)
{
  GEN_ENTER(0xbbf580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00bbf5c0 */
uint F_00bbf5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf5c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bbf5d0 */
uint F_00bbf5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf5d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bbf5e0 */
byte F_00bbf5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbf5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00bbf600 */
byte F_00bbf600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbf600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00bbf620 */
uint F_00bbf620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bbf630 */
byte F_00bbf630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbf630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00bbf650 */
uint F_00bbf650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00bbf660 */
byte F_00bbf660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbf660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00bbf680 */
unsigned int F_00bbf680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00bbf6a0 */
unsigned int F_00bbf6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf6a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00bbf6c0 */
uint F_00bbf6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00bbf6e0 */
uint F_00bbf6e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf6e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00bbf700 */
uint F_00bbf700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00bbf720 */
uint F_00bbf720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00bbf740 */
unsigned int F_00bbf740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00bbf760 */
unsigned int F_00bbf760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: _Uninitialized_move<>_00bbf790 */
unsigned int F_00bbf790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar1 = param_1;
  puVar2 = param_3;
  while (puVar1 != param_2) {
    puVar5 = puVar1 + 8;
    puVar3 = puVar2 + 8;
    puVar6 = puVar1;
    puVar7 = puVar2;
    for (iVar4 = 8; puVar1 = puVar5, puVar2 = puVar3, iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00bbf7e0 */
unsigned int F_00bbf7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf7e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
    }
    puVar1 = puVar1 + 2;
  }
  return 0;
}

/* ref: FUN_00bbf810 */
unsigned int F_00bbf810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = param_3;
  for (puVar3 = param_1; puVar3 != param_2; puVar3 = puVar3 + 8) {
    if (puVar1 != (undefined4 *)0x0) {
      puVar4 = puVar3;
      puVar5 = puVar1;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    puVar1 = puVar1 + 8;
  }
  return 0;
}

/* ref: FUN_00bbf850 */
unsigned int F_00bbf850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00bbf880 */
unsigned int F_00bbf880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbf880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00bbf8b0 */
uint F_00bbf8b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbf8b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00bbf8f0 */
uint F_00bbf8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbf8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bbf900 */
uint F_00bbf900(unsigned int gen_a0)
{
  GEN_ENTER(0xbbf900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00bbf940 */
uint F_00bbf940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbf940u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bbf950 */
uint F_00bbf950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbf950u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bbf960 */
uint F_00bbf960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbf960u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00bbf970 */
uint F_00bbf970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbf970u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00bbf980 */
uint F_00bbf980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbf980u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bbf990 */
uint F_00bbf990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbbf990u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*(int *)((int)this + 4) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bbf9f0 */
uint F_00bbf9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbf9f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00bbfa00 */
uint F_00bbfa00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbfa00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bbfa10 */
uint F_00bbfa10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbbfa10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*(int *)((int)this + 4) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bbfa70 */
uint F_00bbfa70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbfa70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00bbfa80 */
uint F_00bbfa80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbfa80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00bbfa90 */
uint F_00bbfa90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbfa90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bbfab0 */
uint F_00bbfab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbbfab0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bbfad0 */
unsigned int F_00bbfad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbfad0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
      }
      puVar1 = puVar1 + 2;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00bbfb00 */
unsigned int F_00bbfb00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbfb00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 8;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00bbfb40 */
unsigned int F_00bbfb40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbfb40u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00bbfb70 */
unsigned int F_00bbfb70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbfb70u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00bbfbb0 */
uint F_00bbfbb0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbfbb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00bbfc00 */
uint F_00bbfc00(unsigned int gen_a0)
{
  GEN_ENTER(0xbbfc00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,200);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00bbfc40 */
uint F_00bbfc40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbfc40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  F_00c46e20(param_2,param_2 + 4,(*(int *)((int)this + 4) - (param_2 + 4) >> 2) * 4);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -4;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bbfc80 */
unsigned int F_00bbfc80(unsigned int gen_a0)
{
  GEN_ENTER(0xbbfc80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

/* ref: FUN_00bbfcb0 */
uint F_00bbfcb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbbfcb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  F_00c46e20(param_2,param_2 + 4,(*(int *)((int)this + 4) - (param_2 + 4) >> 2) * 4);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -4;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00bbfcf0 */
unsigned int F_00bbfcf0(unsigned int gen_a0)
{
  GEN_ENTER(0xbbfcf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return 0;
}

