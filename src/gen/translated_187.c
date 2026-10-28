#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00e38f20 */
GEN_NOFRAME uint GEN_THISCALL F_00e38f20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe38f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    F_00e38c90(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00406ad0(piVar2);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x15);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00e38f70 */
GEN_FRAME uint GEN_THISCALL F_00e38f70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe38f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)((int)this + 4);
    puVar1[1] = *(undefined4 *)((int)this + 4);
    puVar1[2] = *(undefined4 *)((int)this + 4);
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != (undefined4 *)0x0) {
      puVar1[3] = *param_1;
      puVar1[4] = param_1[1];
    }
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e38fd0 */
GEN_FRAME uint GEN_THISCALL F_00e38fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe38fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) && (param_3 == *(int * PTR32 *)((int)this + 4))) {
    F_00e38f20(this GEN_EDX_FWD);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x15);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x15);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x15);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00e38a40(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00e39070 */
GEN_FRAME uint GEN_THISCALL F_00e39070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe39070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)((int)this + 4);
    puVar1[1] = *(undefined4 *)((int)this + 4);
    puVar1[2] = *(undefined4 *)((int)this + 4);
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != (undefined4 *)0x0) {
      puVar1[3] = *param_2;
      puVar1[4] = param_2[1];
    }
    F_00e38d00(this GEN_EDX_ARG,param_1,puVar1,0);
    return param_1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e390f0 */
GEN_FRAME uint GEN_THISCALL F_00e390f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe390f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00e38fd0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00e39110 */
GEN_FRAME unsigned int GEN_THISCALL F_00e39110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe39110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68));
  puVar1 = (undefined4 *)F_004069f0(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)((int)this + 0x10);
    puVar1[1] = *(undefined4 *)((int)this + 0x10);
    puVar1[2] = *(undefined4 *)((int)this + 0x10);
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != (undefined4 *)0x0) {
      puVar1[3] = param_1;
      puVar1[4] = param_2;
    }
    F_00e38d00((undefined *)((int)this + 0xc) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),puVar1,0);
    return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x68)));
  }
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG);
}

/* ref: FUN_00e39190 */
GEN_FRAME uint GEN_THISCALL F_00e39190(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe39190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00e38fd0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00e391c0 */
GEN_FRAME unsigned int GEN_THISCALL F_00e391c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe391c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  __time64_t _Var6;
  
  iVar2 = (int)(*(LPCRITICAL_SECTION *)&gen_args[2]);
  if (*(int *)((int)(*(LPCRITICAL_SECTION *)&gen_args[2]) + 4) != 0) {
    return;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) GEN_EDX_FWD,(*(undefined4 *)&gen_args[3]));
  if (uVar4 != 0) {
    *(uint *)(iVar2 + 4) = uVar4;
    if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))) != 0) && ((*(int *)&gen_args[4]) != 0)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))) GEN_EDX_ARG,uVar4,(*(int *)&gen_args[4]));
    }
    (*(LPCRITICAL_SECTION *)&gen_args[2]) = (LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x68);
    gen_imp_EnterCriticalSection((*(LPCRITICAL_SECTION *)&gen_args[2]));
    piVar5 = (int *)F_00c32fe0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[1]));
    if (*piVar5 != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)))) {
      F_00e38a40(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[3]),*piVar5);
      uVar1 = (*(undefined4 *)&gen_args[1]);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))) != 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))) GEN_EDX_ARG,uVar1);
      }
    }
    F_00e39110((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,*(undefined4 *)(iVar2 + 4),iVar2);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,*(undefined4 *)(iVar2 + 4));
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x10))))
                (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) GEN_EDX_ARG,*(undefined4 *)(iVar2 + 4));
    }
    if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))) == 0) ||
       (bVar3 = F_00e36eb0((undefined *)(iVar2 + 8) GEN_EDX_ARG,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))),
                             *(undefined4 *)(iVar2 + 4),(*(int *)&gen_args[4])), bVar3 == 0)) {
      F_00e36df0((undefined *)(iVar2 + 8) GEN_EDX_ARG,*(undefined4 *)(iVar2 + 4));
    }
    _Var6 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)(iVar2 + 0x40) = (int)_Var6;
    gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)&gen_args[2]));
    return;
  }
  return;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::AcceptConnectionId */
GEN_FRAME unsigned int GEN_THISCALL F_00e392e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe392e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  
  iVar3 = (*(int *)&gen_args[2]);
  if ((*(int *)((*(int *)&gen_args[2]) + 4) == 0) && (*(int *)((*(int *)&gen_args[3]) + 0x10) != 0)) {
    if ((*(int *)&gen_args[1]) != 0) {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((*(undefined * PTR32 *)&gen_args[0]) + 0x68));
      piVar4 = (int *)F_00c32fe0((*(undefined * PTR32 *)&gen_args[0]) + 0xc GEN_EDX_ARG,&(*(int *)&gen_args[2]),&(*(int *)&gen_args[1]));
      if (*piVar4 != *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x10)))) {
        F_00e38a40((*(undefined * PTR32 *)&gen_args[0]) + 0xc GEN_EDX_ARG,&(*(int *)&gen_args[2]),*piVar4);
        iVar2 = (*(int *)&gen_args[1]);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) GEN_EDX_ARG,(*(int *)&gen_args[1]));
        if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x80))) != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x80))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x80))) GEN_EDX_ARG,iVar2);
        }
      }
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((*(undefined * PTR32 *)&gen_args[0]) + 0x68));
    }
    uVar1 = *(undefined4 *)((*(int *)&gen_args[3]) + 0x10);
    *(undefined4 *)(iVar3 + 4) = uVar1;
    F_00e39110((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar1,iVar3);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,*(undefined4 *)(iVar3 + 4));
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) GEN_EDX_ARG,*(undefined4 *)(iVar3 + 4));
    }
  }
  return;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::DispatchSegment */
GEN_NOFRAME byte GEN_THISCALL F_00e393a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe393a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x300];
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x2ec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2f0);
  (*(uint *)(gen_frame + 0x10)) = param_1;
  ((undefined4 *)(gen_frame + 0x18))[0] = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined2 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  if (param_3[0xd] == 0) {
    (*(bool *)(gen_frame + 0x17)) = param_3[0xc] == 0;
    ((GEN_TCODE *)*(gen_code32 *)(*param_3 + 8))(param_3 GEN_EDX_FWD,this);
    if (((*(bool *)(gen_frame + 0x17)) != false) && (param_3[0xc] != 0)) {
      uVar1 = *(undefined4 *)(param_3[0xb] + 0xc);
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_3[0xb] + 8);
      (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
      F_00e29e50(this + 0x20 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)));
    }
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_3 + 0x14))(param_3 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar1 = *(undefined4 *)(param_3[0xb] + 0xc);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_3[0xb] + 8);
  (*(undefined4 *)(gen_frame + 0xc)) = uVar1;
  uVar3 = F_00e37c10(param_3 + 9 GEN_EDX_ARG,*(undefined4 *)(this + 8),((undefined4 *)(gen_frame + 0x18)),uVar3,(*(undefined4 *)(gen_frame + 0x4)),
                              *(undefined4 *)(this + 0x80));
  if (uVar3 == 0) {
    switch((unsigned int)(uintptr_t)((*(undefined2 *)(gen_frame + 0x2c)))) {
    case 1: ;
      F_00e391c0(this GEN_EDX_ARG,param_2,param_3,&(*(undefined4 *)(gen_frame + 0x20)),0);
      bVar2 = 1;
      break;
    case 2: ;
      F_00e392e0(this GEN_EDX_ARG,param_2,param_3,&(*(undefined4 *)(gen_frame + 0x20)));
      bVar2 = 1;
      break;
    default: ;
      bVar2 = 0;
      break;
    case 7: ;
      LOCK();
      param_3[0x12] = 1;
      UNLOCK();
      bVar2 = 1;
      break;
    case 8: ;
      goto switchD_00e394c6_caseD_8;
    case 9: ;
      (*(uint *)(gen_frame + 0x10)) = 0;
      if (*(int *)(this + 0x80) == 0) {
LAB_00e39522: ;
        F_00e29270(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2b0)));
      }
      else {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 8))))
                          (*(int * PTR32 *)(this + 0x80) GEN_EDX_ARG,param_2,&(*(undefined4 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x2b0)));
        (*(uint *)(gen_frame + 0x10)) = uVar3;
        if (uVar3 == 0) goto LAB_00e39522;
      }
      F_00e391c0(this GEN_EDX_ARG,param_2,param_3,((undefined1 *)(gen_frame + 0x2b0)),(*(uint *)(gen_frame + 0x10)));
      bVar2 = 1;
      break;
    case 10: ;
      if ((*(int *)(this + 0x80) == 0) ||
         (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 0x10))))
                            (*(int * PTR32 *)(this + 0x80) GEN_EDX_ARG,param_2,&(*(undefined4 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x2b0))),
         (char)uVar3 == '\0')) {
        F_00e29330(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x2b0)));
      }
      F_00e392e0(this GEN_EDX_ARG,param_2,param_3,((undefined1 *)(gen_frame + 0x2b0)));
      bVar2 = 1;
    }
  }
  else {
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    *(uint *)((*(uint *)(gen_frame + 0x10)) + 0xc) = uVar3;
    *(undefined4 *)((*(uint *)(gen_frame + 0x10)) + 0x10) = (*(undefined4 *)(gen_frame + 0x8));
    *(undefined4 *)((*(uint *)(gen_frame + 0x10)) + 0x14) = (*(undefined4 *)(gen_frame + 0xc));
switchD_00e394c6_caseD_8: ;
    bVar2 = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x2ec)) ^ (uint)(uint)(gen_frame + 0x2f0) GEN_EDX_ARG);
  return bVar2;
}

/* ref: FUN_00e39600 */
GEN_FRAME uint GEN_THISCALL F_00e39600(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe39600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00e38fd0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00e39630 */
GEN_FRAME uint GEN_THISCALL F_00e39630(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe39630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::vf1 */
GEN_FRAME byte GEN_THISCALL F_00e39690(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe39690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined4 uVar2;
  byte bVar3;
  __time64_t _Var4;
  ulonglong uVar5;
  
  if ((*(int *)(this + 0x118) == 0) || (*((int *)GEN_TOP((*(int *)(this + 0x118) + 4))) != 0))
  goto LAB_00e3975d;
  if (*(int *)(this + 0x138) != 0) {
    _Var4 = F_00c4b7c2((__time64_t *)0x0);
    if ((uint)((int)_Var4 - *(int *)(this + 0x120)) < *(uint *)(this + 0x138)) goto LAB_00e3975d;
  }
  piVar1 = *(int * PTR32 *)(this + 0x118);
  if (*(int *)(this + 0x80) == 0) {
LAB_00e396fd: ;
    bVar3 = F_00e37970(piVar1 + 2 GEN_EDX_ARG,0,3,0);
  }
  else {
    bVar3 = F_00e37aa0(piVar1 + 2 GEN_EDX_ARG,*(int *)(this + 0x80),0,3,0);
    if (bVar3 == 0) goto LAB_00e396fd;
  }
  if (piVar1[5] != 0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG,this);
  }
  if (bVar3 != 0) {
    _Var4 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)(this + 0x120) = (int)_Var4;
    uVar5 = F_00427d90();
    *(ulonglong *)(this + 0x128) = uVar5;
    uVar5 = F_00427e30();
    *(ulonglong *)(this + 0x130) = uVar5;
    *(undefined4 *)(this + 0x138) = 2;
  }
LAB_00e3975d: ;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x68));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x50));
  F_00e384e0(((undefined1 *)(gen_frame + 0x18)),**(undefined4 * PTR32 *)(this + 0x10),*(undefined4 * PTR32 *)(this + 0x10),this);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x50));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x68));
  if ((*(int *)(this + 0x118) != 0) && (*((int *)GEN_TOP((*(int *)(this + 0x118) + 4))) == 0)) {
    F_01050b60(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    uVar2 = *(undefined4 *)(this + 0x118);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac))
    ;
    (*(int *)(gen_frame + 0xc)) = 0;
    (*(undefined8 *)(gen_frame + 0x10)) = 0;
    bVar3 = F_00e393a0(this GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),0,uVar2);
    if ((bVar3 != 0) && ((*(int *)(gen_frame + 0xc)) != 0)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0xc)) + 8) + 0x10))))(*(int * PTR32 *)((*(int *)(gen_frame + 0xc)) + 8) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
      (*(int *)(gen_frame + 0xc)) = 0;
    }
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac))
    ;
    F_01050b70();
  }
  if ((*(int *)(this + 0x118) != 0) && (*(int *)(this + 0xbc) != 4)) {
    F_00bad720(((undefined *)GEN_TOP((*(int *)(this + 0x118) + 0x5c))) GEN_EDX_ARG);
  }
  return 1;
}

/* ref: FUN_00e39820 */
GEN_FRAME uint GEN_THISCALL F_00e39820(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe39820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x1157674));
  gen_imp_DeleteCriticalSection((int)this + 0x68);
  gen_imp_DeleteCriticalSection((int)this + 0x50);
  F_00e38fd0((undefined *)((int)this + 0xc) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x10),
               *(undefined4 * PTR32 *)((int)this + 0x10));
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 0x10));
  return uVar1;
}

/* ref: ConnectionManagerTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e39870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe39870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: ConnectionManagerTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e39880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe39880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: FUN_00e39890 */
GEN_FRAME uint GEN_THISCALL F_00e39890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe39890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x1157674));
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 0x10) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) = *(int *)((int)this + 0x10);
    *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(int *)((int)this + 0x10);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x15))) = 1;
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
    gen_imp_InitializeCriticalSection((int)this + 0x50);
    gen_imp_InitializeCriticalSection((int)this + 0x68);
    *(undefined4 *)((int)this + 0x80) = 0;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: ConnectionManagerTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e39940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe39940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x1157674));
  gen_imp_DeleteCriticalSection((int)this + 0x68);
  gen_imp_DeleteCriticalSection((int)this + 0x50);
  F_00e38fd0((undefined *)((int)this + 0xc) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x10),
               *(undefined4 * PTR32 *)((int)this + 0x10));
  F_00406ad0(*(undefined4 *)((int)this + 0x10));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e399a0 */
GEN_FRAME uint GEN_THISCALL F_00e399a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe399a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x118);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x1157688));
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,1);
  }
  *(undefined4 *)((int)this + 0x118) = 0;
  F_0042c880((undefined *)((int)this + 0xc0) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x88) =
       (*(undefined * PTR32 (*)[9])REFP(0x1157614));
  F_00406ad0(*(undefined4 *)((int)this + 0xb8));
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x88) =
       (*(undefined * PTR32 (*)[9])REFP(0x11575ec));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x1157674));
  gen_imp_DeleteCriticalSection((int)this + 0x68);
  gen_imp_DeleteCriticalSection((int)this + 0x50);
  F_00e38fd0((undefined *)((int)this + 0xc) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x10),
               *(undefined4 * PTR32 *)((int)this + 0x10));
  uVar2 = F_00406ad0(*(undefined4 *)((int)this + 0x10));
  return uVar2;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e39a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe39a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00e399a0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::LobbyProtoChannel::ServiceConsumerConnectionManager::ServiceConsumerConnectionManager */
GEN_FRAME uint GEN_THISCALL F_00e39a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe39a70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * this_00;
  undefined * this_01;
  uint uVar1;
  __time64_t _Var2;
  ulonglong uVar3;
  
  F_00e39890(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x1157688));
  *(undefined * PTR32 * PTR32 *)(this + 0x88) = (*(undefined * PTR32 (*)[9])REFP(0x1157614));
  *(undefined4 *)(this + 0xb8) = 0;
  F_00c48350(this + 0x8c,0,0x2c);
  *(undefined4 *)(this + 0x8c) = 0x12345678;
  this_00 = this + 0xc0;
  *(undefined4 *)(this + 0x94) = 1000;
  F_0042b630(this_00 GEN_EDX_ARG);
  if (this_00 != param_2) {
    F_0042ccf0(this_00 GEN_EDX_ARG,param_2);
    *(undefined2 *)(this + 0x114) = *(undefined2 *)(param_2 + 0x54);
  }
  *(undefined4 *)(this + 0x118) = 0;
  F_00a1af40(this + 0x120 GEN_EDX_ARG);
  *(undefined4 *)(this + 0x138) = 0;
  _Var2 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)(this + 0x120) = (int)_Var2;
  uVar3 = F_00427d90();
  *(ulonglong *)(this + 0x128) = uVar3;
  uVar3 = F_00427e30();
  *(ulonglong *)(this + 0x130) = uVar3;
  *(undefined4 *)(this + 0xbc) = 0;
  this_01 = (undefined *)F_00406b90(0x10f8,0,0);
  if (this_01 == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00e387f0(this_01 GEN_EDX_ARG,this + 0xc0,this);
  }
  *(undefined4 *)(this + 0x13c) = 0;
  *(uint *)(this + 0x118) = uVar1;
  *(undefined * PTR32 *)(this + 0x80) = this + 0x88;
  return (uint)this;
}

/* ref: FUN_00e39b80 */
GEN_FRAME uint GEN_THISCALL F_00e39b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe39b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = *param_1;
  uVar1 = param_1[1];
  *(uint *)((int)this + 0xc) = uVar1;
  return uVar1;
}

/* ref: FUN_00e39bb0 */
GEN_FRAME uint GEN_THISCALL F_00e39bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe39bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_01050d30(this GEN_EDX_FWD,param_2,param_3);
  *(undefined4 *)((int)this + 0x10) = param_1;
  return (uint)this;
}

/* ref: Application::Network::LobbyProtoChannel::ClientPacketBuilder::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e39be0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe39be0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x20;
}

/* ref: Application::Network::LobbyProtoChannel::ClientPacketBuilder::vf3 */
GEN_FRAME uint GEN_THISCALL F_00e39bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe39bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  F_00e3b780((uint)*(ushort *)(param_1 + 2),param_1 + 0x10,param_2 - 0x10,0);
  uVar1 = F_00e3b820(param_1,0x10,0);
  return uVar1;
}

/* ref: PacketDataBuilder_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e39c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe39c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: PacketDataBuilder_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e39c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe39c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: PacketBufferTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e39c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe39c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x115769c));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PacketDataBuilder_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e39ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe39ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x11576a4));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115769c));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e39ce0 */
GEN_NOFRAME uint GEN_THISCALL F_00e39ce0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe39ce0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_01050b60(in_ecx + 2 GEN_EDX_FWD);
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x115769c));
  return (uint)in_ecx;
}

/* ref: Application::Network::LobbyProtoChannel::ClientPacketBuilder::vf2 */
GEN_FRAME uint GEN_THISCALL F_00e39d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe39d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  __time64_t _Var1;
  
  *param_1 = *param_1 & 0xffffff14 | 0x14;
  *(undefined2 *)((int)param_1 + 2) = *(undefined2 *)(this + 0x30);
  *(undefined1 *)((int)param_1 + 1) = 0;
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  param_1[2] = (uint)_Var1;
  return (uint)_Var1;
}

/* ref: FUN_00e39d70 */
GEN_NOFRAME uint GEN_THISCALL F_00e39d70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe39d70u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x11576a4));
  F_01050b60(in_ecx + 4 GEN_EDX_FWD);
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[2] = (*(undefined * PTR32 (*)[1])REFP(0x115769c));
  return (uint)in_ecx;
}

/* ref: FUN_00e39da0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e39da0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe39da0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x11576a4));
  in_ecx[2] = (*(undefined * PTR32 (*)[1])REFP(0x115769c));
  F_01050b70();
  return;
}

/* ref: FUN_00e39dc0 */
GEN_NOFRAME uint GEN_THISCALL F_00e39dc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe39dc0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x11576a4));
  F_01050b60(in_ecx + 4 GEN_EDX_FWD);
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[2] = (*(undefined * PTR32 (*)[1])REFP(0x115769c));
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x11576b8));
  return (uint)in_ecx;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoUpPacketBuilder::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e39df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe39df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x11576a4));
  *(undefined * PTR32 * PTR32 *)(this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115769c));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e39e30 */
GEN_FRAME uint GEN_THISCALL F_00e39e30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe39e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x11576a4));
  F_01050b60((int)this + 0x10 GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115769c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x11576cc));
  F_01050d30((undefined *)((int)this + 0x20) GEN_EDX_ARG,param_2,param_4);
  *(undefined4 *)((int)this + 0x30) = param_1;
  *(undefined4 *)((int)this + 0x28) = *param_3;
  *(undefined4 *)((int)this + 0x2c) = param_3[1];
  return (uint)this;
}

/* ref: Application::Network::LobbyProtoChannel::ClientPacketBuilder::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e39e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe39e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x11576a4));
  *(undefined * PTR32 * PTR32 *)(this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115769c));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::LobbyProtoChannel::ClientPacketBuilder::ClientPacketBuilder */
GEN_FRAME uint GEN_THISCALL F_00e39ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe39ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x11576a4));
  F_01050b60(this + 0x10 GEN_EDX_FWD);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined * PTR32 * PTR32 *)(this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115769c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x11576cc));
  F_01050d30(this + 0x20 GEN_EDX_ARG,param_2,param_3);
  *(undefined4 *)(this + 0x30) = param_1;
  return (uint)this;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e39f20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe39f20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e39f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe39f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf4 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e39f40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe39f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf5 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e39f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe39f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf6 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e39f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe39f60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e39f70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe39f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf8 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e39f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe39f80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e39f90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe39f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf10 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e39fa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe39fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf11 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e39fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe39fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf12 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e39fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe39fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf13 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e39fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe39fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: FUN_00e39fe0 */
GEN_NOFRAME uint F_00e39fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe39fe0u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  int in_ecx = (int)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  for (uVar3 = in_eax >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar1 = *(undefined1 *)(in_ecx + uVar2);
    *(undefined1 *)(in_ecx + uVar2) = *(undefined1 *)(in_ecx + 7 + uVar2);
    *(undefined1 *)(in_ecx + 7 + uVar2) = uVar1;
    uVar1 = *(undefined1 *)(in_ecx + 1 + uVar2);
    *(undefined1 *)(in_ecx + 1 + uVar2) = *(undefined1 *)(in_ecx + 6 + uVar2);
    *(undefined1 *)(in_ecx + 6 + uVar2) = uVar1;
    uVar1 = *(undefined1 *)(in_ecx + 2 + uVar2);
    *(undefined1 *)(in_ecx + 2 + uVar2) = *(undefined1 *)(in_ecx + 5 + uVar2);
    *(undefined1 *)(in_ecx + 5 + uVar2) = uVar1;
    uVar1 = *(undefined1 *)(in_ecx + 3 + uVar2);
    *(undefined1 *)(in_ecx + 3 + uVar2) = *(undefined1 *)(in_ecx + 4 + uVar2);
    *(undefined1 *)(in_ecx + 4 + uVar2) = uVar1;
    uVar2 = uVar2 + 8;
  }
  return uVar2;
}

/* ref: FUN_00e3a0b0 */
GEN_FRAME uint F_00e3a0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3a0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_00e39fe0(8,param_1);
  uVar3 = uVar2 + 2;
  if (uVar2 + 4 <= param_2) {
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0xb);
    *(undefined1 *)(((int)(uint)(param_1)) + 0xb) = *(undefined1 *)(((int)(uint)(param_1)) + 10);
    *(undefined1 *)(((int)(uint)(param_1)) + 10) = uVar1;
    uVar3 = uVar2 + 0x44;
    if (param_2 < uVar2 + 0x44) {
      uVar3 = uVar2 + 4;
    }
  }
  return uVar3;
}

/* ref: FUN_00e3a100 */
GEN_FRAME uint F_00e3a100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3a100u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 4) {
    return 2;
  }
  uVar1 = param_1[2];
  param_1[2] = param_1[3];
  param_1[3] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  if (param_2 < 0x34) {
    return 0x14;
  }
  return (-(uint)(param_2 < 0x54) & 0xffffffe0) + 0x54;
}

/* ref: FUN_00e3a1d0 */
GEN_FRAME uint F_00e3a1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3a1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 6;
  }
  uVar1 = param_1[6];
  param_1[6] = param_1[7];
  param_1[7] = uVar1;
  return (-(uint)(param_2 < 0x28) & 0xffffffe0) + 0x28;
}

/* ref: FUN_00e3a230 */
GEN_FRAME uint F_00e3a230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3a230u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_00e39fe0(8,param_1);
  if (param_2 < uVar2 + 8) {
    return uVar2;
  }
  uVar3 = F_00e39fe0(8,param_1 + 8);
  uVar3 = uVar2 + 2 + uVar3;
  uVar2 = uVar3 + 2;
  if (param_2 < uVar2) {
    return uVar3;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x13);
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_1 + 0x12);
  *(undefined1 *)(param_1 + 0x12) = uVar1;
  if (uVar3 + 6 <= param_2) {
    uVar1 = *(undefined1 *)(param_1 + 0x17);
    *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_1 + 0x14);
    *(undefined1 *)(param_1 + 0x14) = uVar1;
    uVar1 = *(undefined1 *)(param_1 + 0x16);
    *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_1 + 0x15);
    uVar2 = uVar3 + 8;
    *(undefined1 *)(param_1 + 0x15) = uVar1;
    if (param_2 < uVar2) {
      return uVar3 + 6;
    }
    uVar1 = *(undefined1 *)(param_1 + 0x19);
    *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x18) = uVar1;
    if (uVar3 + 0x28 <= param_2) {
      uVar2 = uVar3 + 0x38;
      if (param_2 < uVar2) {
        return uVar3 + 0x28;
      }
      if (uVar3 + 0x438 <= param_2) {
        return uVar3 + 0x438;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00e3a2e0 */
GEN_FRAME uint F_00e3a2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3a2e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_00e39fe0(8,param_1);
  if (param_2 < uVar2 + 8) {
    return uVar2;
  }
  uVar3 = F_00e39fe0(8,param_1 + 8);
  uVar3 = uVar2 + 2 + uVar3;
  uVar2 = uVar3;
  if (uVar3 + 2 <= param_2) {
    uVar1 = *(undefined1 *)(param_1 + 0x13);
    *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_1 + 0x12);
    *(undefined1 *)(param_1 + 0x12) = uVar1;
    uVar2 = uVar3 + 2;
    if (uVar3 + 6 <= param_2) {
      uVar1 = *(undefined1 *)(param_1 + 0x17);
      *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_1 + 0x14);
      *(undefined1 *)(param_1 + 0x14) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x16);
      *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_1 + 0x15);
      uVar2 = uVar3 + 0x26;
      *(undefined1 *)(param_1 + 0x15) = uVar1;
      if (param_2 < uVar2) {
        return uVar3 + 6;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00e3a370 */
GEN_FRAME uint F_00e3a370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3a370u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 4;
}

/* ref: FUN_00e3a3a0 */
GEN_FRAME uint F_00e3a3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3a3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  if (param_2 < 0x12) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x11];
  param_1[0x11] = uVar1;
  if (param_2 < 0x14) {
    return 0x12;
  }
  uVar1 = param_1[0x12];
  param_1[0x12] = param_1[0x13];
  param_1[0x13] = uVar1;
  return (-(uint)(param_2 < 0x214) & 0xfffffe00) + 0x214;
}

/* ref: FUN_00e3a490 */
GEN_FRAME uint F_00e3a490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3a490u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 * puVar5;
  int iVar6;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (7 < param_2) {
    uVar1 = param_1[4];
    param_1[4] = param_1[7];
    param_1[7] = uVar1;
    uVar1 = param_1[5];
    param_1[5] = param_1[6];
    param_1[6] = uVar1;
    if (param_2 < 0x10) {
      return 0xc;
    }
    uVar1 = param_1[0xc];
    param_1[0xc] = param_1[0xf];
    param_1[0xf] = uVar1;
    uVar1 = param_1[0xd];
    param_1[0xd] = param_1[0xe];
    param_1[0xe] = uVar1;
    uVar4 = 0x10;
    iVar6 = 0;
    puVar5 = param_1 + 0x1a;
    do {
      if (param_2 <= uVar4) {
        return uVar4;
      }
      uVar2 = F_00e39fe0(8,puVar5 - 10);
      uVar3 = uVar2 + 2;
      if (uVar2 + 4 < 0x51) {
        uVar1 = puVar5[1];
        puVar5[1] = *puVar5;
        *puVar5 = uVar1;
        uVar3 = uVar2 + 0x44;
        if (0x50 < uVar2 + 0x44) {
          uVar3 = uVar2 + 4;
        }
      }
      iVar6 = iVar6 + 1;
      uVar4 = uVar4 + uVar3;
      puVar5 = puVar5 + 0x50;
    } while (iVar6 < 8);
    return uVar4;
  }
  return 4;
}

/* ref: FUN_00e3a560 */
GEN_FRAME uint F_00e3a560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3a560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 * puVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  if (0xf < param_2) {
    uVar1 = param_1[0xc];
    param_1[0xc] = param_1[0xf];
    param_1[0xf] = uVar1;
    uVar1 = param_1[0xd];
    param_1[0xd] = param_1[0xe];
    param_1[0xe] = uVar1;
    if (param_2 < 0x12) {
      return 0x10;
    }
    uVar1 = param_1[0x10];
    param_1[0x10] = param_1[0x11];
    param_1[0x11] = uVar1;
    if (0x13 < param_2) {
      uVar1 = param_1[0x12];
      param_1[0x12] = param_1[0x13];
      param_1[0x13] = uVar1;
      uVar3 = 0x14;
      iVar4 = 0;
      puVar5 = param_1 + 0x18;
      do {
        if (param_2 <= uVar3) {
          return uVar3;
        }
        uVar2 = F_00e3a230(puVar5,0x450,param_3);
        iVar4 = iVar4 + 1;
        uVar3 = uVar3 + uVar2;
        puVar5 = puVar5 + 0x450;
      } while (iVar4 < 2);
      return uVar3;
    }
    return 0x12;
  }
  return 0xc;
}

/* ref: FUN_00e3a660 */
GEN_FRAME uint F_00e3a660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3a660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 * puVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  if (0xf < param_2) {
    uVar1 = param_1[0xc];
    param_1[0xc] = param_1[0xf];
    param_1[0xf] = uVar1;
    uVar1 = param_1[0xd];
    param_1[0xd] = param_1[0xe];
    param_1[0xe] = uVar1;
    uVar3 = 0x10;
    iVar4 = 0;
    puVar5 = param_1 + 0x10;
    do {
      if (param_2 <= uVar3) {
        return uVar3;
      }
      uVar2 = F_00e3a230(puVar5,0x450,param_3);
      iVar4 = iVar4 + 1;
      uVar3 = uVar3 + uVar2;
      puVar5 = puVar5 + 0x450;
    } while (iVar4 < 2);
    return uVar3;
  }
  return 0xc;
}

/* ref: FUN_00e3a730 */
GEN_FRAME uint F_00e3a730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3a730u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[7];
  param_1[7] = param_1[4];
  uVar2 = param_1[5];
  param_1[4] = uVar1;
  param_1[5] = param_1[6];
  param_1[6] = uVar2;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[0xb];
  param_1[0xb] = param_1[8];
  uVar2 = param_1[9];
  param_1[8] = uVar1;
  param_1[9] = param_1[10];
  param_1[10] = uVar2;
  if (param_2 < 0x14) {
    return 0xc;
  }
  uVar3 = F_00e39fe0(8,param_1 + 0x10);
  uVar4 = uVar3 + 0xe;
  if (uVar3 + 0x10 <= param_2) {
    uVar1 = param_1[0x1b];
    param_1[0x1b] = param_1[0x1a];
    param_1[0x1a] = uVar1;
    uVar4 = uVar3 + 0x10;
    if (uVar3 + 0x50 <= param_2) {
      uVar4 = uVar3 + 0x52;
      if (param_2 < uVar4) {
        return uVar3 + 0x50;
      }
      uVar1 = param_1[0x5d];
      param_1[0x5d] = param_1[0x5c];
      param_1[0x5c] = uVar1;
      if (uVar3 + 0x54 <= param_2) {
        uVar1 = param_1[0x5f];
        param_1[0x5f] = param_1[0x5e];
        uVar4 = uVar3 + 0x74;
        param_1[0x5e] = uVar1;
        if (param_2 < uVar4) {
          return uVar3 + 0x54;
        }
        if (uVar3 + 0x94 <= param_2) {
          return uVar3 + 0x94;
        }
      }
    }
  }
  return uVar4;
}

/* ref: FUN_00e3a820 */
GEN_FRAME uint F_00e3a820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3a820u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  if (param_2 < 0x12) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x11];
  param_1[0x11] = uVar1;
  if (param_2 < 0x14) {
    return 0x12;
  }
  uVar1 = param_1[0x12];
  param_1[0x12] = param_1[0x13];
  param_1[0x13] = uVar1;
  if (param_2 < 0x16) {
    return 0x14;
  }
  uVar1 = param_1[0x14];
  param_1[0x14] = param_1[0x15];
  param_1[0x15] = uVar1;
  if (param_2 < 0x18) {
    return 0x16;
  }
  uVar1 = param_1[0x16];
  param_1[0x16] = param_1[0x17];
  param_1[0x17] = uVar1;
  if (param_2 < 0x1a) {
    return 0x18;
  }
  uVar1 = param_1[0x18];
  param_1[0x18] = param_1[0x19];
  param_1[0x19] = uVar1;
  if (param_2 < 0x1c) {
    return 0x1a;
  }
  uVar1 = param_1[0x1a];
  param_1[0x1a] = param_1[0x1b];
  param_1[0x1b] = uVar1;
  return 0x1c;
}

/* ref: FUN_00e3a970 */
GEN_FRAME uint F_00e3a970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3a970u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 * puVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xb) {
    return 9;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  if (0xc < param_2) {
    uVar1 = param_1[0xc];
    param_1[0xc] = param_1[0xd];
    param_1[0xd] = uVar1;
    if (param_2 < 0xf) {
      return 0xd;
    }
    uVar1 = param_1[0xe];
    param_1[0xe] = param_1[0xf];
    param_1[0xf] = uVar1;
    if (0x14 < param_2) {
      uVar1 = param_1[0x14];
      param_1[0x14] = param_1[0x17];
      param_1[0x17] = uVar1;
      uVar1 = param_1[0x15];
      param_1[0x15] = param_1[0x16];
      param_1[0x16] = uVar1;
      iVar3 = 0;
      uVar4 = 0x15;
      puVar2 = param_1 + 0x23;
      do {
        if (param_2 <= uVar4) {
          return uVar4;
        }
        uVar1 = puVar2[-0xb];
        puVar2[-0xb] = puVar2[-10];
        puVar2[-10] = uVar1;
        uVar1 = puVar2[-9];
        puVar2[-9] = puVar2[-8];
        puVar2[-8] = uVar1;
        uVar1 = puVar2[-3];
        puVar2[-3] = *puVar2;
        *puVar2 = uVar1;
        uVar1 = puVar2[-2];
        puVar2[-2] = puVar2[-1];
        puVar2[-1] = uVar1;
        uVar1 = puVar2[1];
        puVar2[1] = puVar2[4];
        puVar2[4] = uVar1;
        uVar1 = puVar2[2];
        puVar2[2] = puVar2[3];
        puVar2[3] = uVar1;
        uVar1 = puVar2[5];
        puVar2[5] = puVar2[8];
        puVar2[8] = uVar1;
        uVar1 = puVar2[6];
        puVar2[6] = puVar2[7];
        puVar2[7] = uVar1;
        iVar3 = iVar3 + 1;
        uVar4 = uVar4 + 0x54;
        puVar2 = puVar2 + 0x54;
      } while (iVar3 < 6);
      return uVar4;
    }
    return 0x11;
  }
  return 0xb;
}

/* ref: FUN_00e3aac0 */
GEN_FRAME uint F_00e3aac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3aac0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 * puVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  if (0xf < param_2) {
    uVar1 = param_1[0xc];
    param_1[0xc] = param_1[0xf];
    param_1[0xf] = uVar1;
    uVar1 = param_1[0xd];
    param_1[0xd] = param_1[0xe];
    param_1[0xe] = uVar1;
    iVar3 = 0;
    uVar4 = 0x10;
    puVar2 = param_1 + 0x13;
    do {
      if (param_2 <= uVar4) {
        return uVar4;
      }
      uVar1 = puVar2[-3];
      puVar2[-3] = *puVar2;
      *puVar2 = uVar1;
      uVar1 = puVar2[-2];
      puVar2[-2] = puVar2[-1];
      puVar2[-1] = uVar1;
      uVar1 = puVar2[3];
      puVar2[3] = puVar2[4];
      puVar2[4] = uVar1;
      iVar3 = iVar3 + 1;
      uVar4 = uVar4 + 0x28;
      puVar2 = puVar2 + 0x28;
    } while (iVar3 < 0xc);
    return uVar4;
  }
  return 0xc;
}

/* ref: FUN_00e3aba0 */
GEN_FRAME uint F_00e3aba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3aba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 * puVar4;
  int iVar5;
  
  uVar2 = param_2;
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xf];
  param_1[0xf] = uVar1;
  uVar1 = param_1[0xd];
  param_1[0xd] = param_1[0xe];
  param_1[0xe] = uVar1;
  if (param_2 < 0x12) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x11];
  param_1[0x11] = uVar1;
  if (param_2 < 0x14) {
    return 0x12;
  }
  uVar1 = param_1[0x12];
  param_1[0x12] = param_1[0x13];
  param_1[0x13] = uVar1;
  if (param_2 < 0x16) {
    return 0x14;
  }
  uVar1 = param_1[0x14];
  param_1[0x14] = param_1[0x15];
  param_1[0x15] = uVar1;
  if (0x17 < param_2) {
    uVar1 = param_1[0x16];
    param_1[0x16] = param_1[0x17];
    param_1[0x17] = uVar1;
    if (param_2 < 0x1a) {
      return 0x18;
    }
    uVar1 = param_1[0x18];
    param_1[0x18] = param_1[0x19];
    param_1[0x19] = uVar1;
    if (0x1b < param_2) {
      uVar1 = param_1[0x1a];
      param_1[0x1a] = param_1[0x1b];
      param_1[0x1b] = uVar1;
      param_2 = 0x1c;
      iVar5 = 0;
      puVar4 = param_1 + 0x20;
      do {
        if (uVar2 <= param_2) {
          return param_2;
        }
        uVar3 = F_00e3a2e0(puVar4,0x38,param_3);
        param_2 = param_2 + uVar3;
        iVar5 = iVar5 + 1;
        puVar4 = puVar4 + 0x38;
      } while (iVar5 < 9);
      return param_2;
    }
    return 0x1a;
  }
  return 0x16;
}

/* ref: FUN_00e3ad00 */
GEN_FRAME uint F_00e3ad00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3ad00u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 4;
}

/* ref: FUN_00e3ad30 */
GEN_FRAME uint F_00e3ad30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3ad30u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  if (param_2 < 0x2c) {
    return 0xc;
  }
  return (-(uint)(param_2 < 0x4c) & 0xffffffe0) + 0x4c;
}

/* ref: FUN_00e3add0 */
GEN_FRAME uint F_00e3add0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3add0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  return param_3;
}

/* ref: FUN_00e3ade0 */
GEN_FRAME uint F_00e3ade0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3ade0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  if (param_2 < 8) {
    return 6;
  }
  uVar1 = param_1[6];
  param_1[6] = param_1[7];
  param_1[7] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  return 0xc;
}

/* ref: FUN_00e3ae70 */
GEN_FRAME uint F_00e3ae70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3ae70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00e3ae80 */
GEN_FRAME uint F_00e3ae80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3ae80u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 4;
}

/* ref: FUN_00e3aeb0 */
GEN_FRAME uint F_00e3aeb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3aeb0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  if (param_2 < 0x4c) {
    return 0xc;
  }
  return (-(uint)(param_2 < 0xcc) & 0xffffff80) + 0xcc;
}

/* ref: FUN_00e3af60 */
GEN_FRAME uint F_00e3af60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3af60u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  if (param_2 < 0xe) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xd];
  param_1[0xd] = uVar1;
  if (param_2 < 0x10) {
    return 0xe;
  }
  uVar1 = param_1[0xe];
  param_1[0xe] = param_1[0xf];
  param_1[0xf] = uVar1;
  if (param_2 < 0x50) {
    return 0x10;
  }
  if (param_2 < 0xd0) {
    return 0x50;
  }
  return (-(uint)(param_2 < 0xf0) & 0xffffffe0) + 0xf0;
}

/* ref: FUN_00e3b050 */
GEN_FRAME uint F_00e3b050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3b050u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[9];
  param_1[9] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  if (param_2 < 0xe) {
    return 0xc;
  }
  uVar1 = param_1[0xc];
  param_1[0xc] = param_1[0xd];
  param_1[0xd] = uVar1;
  if (param_2 < 0x10) {
    return 0xe;
  }
  uVar1 = param_1[0xe];
  param_1[0xe] = param_1[0xf];
  param_1[0xf] = uVar1;
  if (param_2 < 400) {
    return 0x10;
  }
  if (param_2 < 0x210) {
    return 400;
  }
  return (-(uint)(param_2 < 0x230) & 0xffffffe0) + 0x230;
}

/* ref: FUN_00e3b140 */
GEN_FRAME uint F_00e3b140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3b140u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = param_1[10];
  param_1[10] = param_1[0xb];
  param_1[0xb] = uVar1;
  if (param_2 < 0x14) {
    return 0xc;
  }
  uVar2 = F_00e39fe0(8,param_1 + 0x10);
  return uVar2 + 0xc;
}

/* ref: FUN_00e3b1d0 */
GEN_FRAME uint F_00e3b1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3b1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[7];
  uVar2 = param_1[6];
  param_1[7] = param_1[4];
  param_1[6] = param_1[5];
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  uVar3 = 8;
  if (0xf < param_2) {
    uVar3 = F_00e39fe0(8,param_1 + 8);
    if (param_2 < uVar3 + 0x10) {
      return uVar3 + 8;
    }
    uVar4 = F_00e39fe0(8,param_1 + 0x10);
    uVar4 = uVar3 + 10 + uVar4;
    uVar3 = uVar4 + 2;
    if (param_2 < uVar3) {
      return uVar4;
    }
    uVar1 = param_1[0x1a];
    param_1[0x1a] = param_1[0x1b];
    param_1[0x1b] = uVar1;
  }
  return uVar3;
}

/* ref: FUN_00e3b280 */
GEN_FRAME uint F_00e3b280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3b280u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[7];
  uVar2 = param_1[6];
  param_1[7] = param_1[4];
  param_1[6] = param_1[5];
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  uVar3 = 8;
  if (0xf < param_2) {
    uVar3 = F_00e39fe0(8,param_1 + 8);
    if (param_2 < uVar3 + 0x10) {
      return uVar3 + 8;
    }
    uVar4 = F_00e39fe0(8,param_1 + 0x10);
    uVar4 = uVar3 + 10 + uVar4;
    uVar3 = uVar4;
    if (uVar4 + 2 <= param_2) {
      uVar1 = param_1[0x1b];
      param_1[0x1b] = param_1[0x1a];
      uVar3 = uVar4 + 0x22;
      param_1[0x1a] = uVar1;
      if (param_2 < uVar3) {
        return uVar4 + 2;
      }
      if (uVar4 + 0x1b2 <= param_2) {
        if (param_2 < uVar4 + 0x1ba) {
          return uVar4 + 0x1b2;
        }
        uVar5 = F_00e39fe0(8,param_1 + 0x1d0);
        uVar5 = uVar4 + 0x1b4 + uVar5;
        uVar3 = uVar5 + 2;
        if (param_2 < uVar3) {
          return uVar5;
        }
        uVar1 = param_1[0x1da];
        param_1[0x1da] = param_1[0x1db];
        param_1[0x1db] = uVar1;
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00e3b380 */
GEN_FRAME uint F_00e3b380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3b380u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[7];
  uVar2 = param_1[6];
  param_1[7] = param_1[4];
  param_1[6] = param_1[5];
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  uVar3 = 8;
  if (0xf < param_2) {
    uVar3 = F_00e39fe0(8,param_1 + 8);
    if (param_2 < uVar3 + 0x10) {
      return uVar3 + 8;
    }
    uVar4 = F_00e39fe0(8,param_1 + 0x10);
    uVar4 = uVar3 + 10 + uVar4;
    uVar3 = uVar4 + 2;
    if (param_2 < uVar3) {
      return uVar4;
    }
    uVar1 = param_1[0x1a];
    param_1[0x1a] = param_1[0x1b];
    param_1[0x1b] = uVar1;
    if (uVar4 + 0x22 <= param_2) {
      if (param_2 < uVar4 + 0x2a) {
        return uVar4 + 0x22;
      }
      uVar5 = F_00e39fe0(8,param_1 + 0x40);
      uVar5 = uVar4 + 0x24 + uVar5;
      uVar3 = uVar5 + 2;
      if (param_2 < uVar3) {
        return uVar5;
      }
      uVar1 = param_1[0x4a];
      param_1[0x4a] = param_1[0x4b];
      param_1[0x4b] = uVar1;
    }
  }
  return uVar3;
}

/* ref: FUN_00e3b460 */
GEN_FRAME uint F_00e3b460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3b460u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  if (7 < param_2) {
    uVar1 = param_1[7];
    uVar2 = param_1[6];
    param_1[7] = param_1[4];
    param_1[6] = param_1[5];
    param_1[4] = uVar1;
    param_1[5] = uVar2;
    uVar3 = 8;
    if (0xf < param_2) {
      uVar3 = F_00e39fe0(8,param_1 + 8);
      if (param_2 < uVar3 + 0x10) {
        return uVar3 + 8;
      }
      uVar4 = F_00e39fe0(8,param_1 + 0x10);
      uVar4 = uVar3 + 10 + uVar4;
      uVar3 = uVar4;
      if (uVar4 + 2 <= param_2) {
        uVar1 = param_1[0x1b];
        param_1[0x1b] = param_1[0x1a];
        param_1[0x1a] = uVar1;
        uVar3 = uVar4 + 0x22;
        if (param_2 < uVar4 + 0x22) {
          uVar3 = uVar4 + 2;
        }
      }
    }
    return uVar3;
  }
  return 4;
}

/* ref: FUN_00e3b510 */
GEN_FRAME uint F_00e3b510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3b510u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[7];
  uVar2 = param_1[6];
  param_1[7] = param_1[4];
  param_1[6] = param_1[5];
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  uVar4 = 8;
  if (0xf < param_2) {
    uVar3 = F_00e39fe0(8,param_1 + 8);
    uVar4 = uVar3 + 10;
    if (uVar3 + 0xc <= param_2) {
      uVar1 = param_1[0x13];
      param_1[0x13] = param_1[0x12];
      param_1[0x12] = uVar1;
      uVar4 = uVar3 + 0x2c;
      if (param_2 < uVar3 + 0x2c) {
        uVar4 = uVar3 + 0xc;
      }
    }
  }
  return uVar4;
}

/* ref: FUN_00e3b5a0 */
GEN_FRAME uint F_00e3b5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3b5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  int in_eax;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  if (param_2 < 0x10) {
    return 0xe;
  }
  uVar1 = param_1[0xf];
  param_1[0xf] = param_1[0xe];
  param_1[0xe] = uVar1;
  uVar2 = 0x10;
  if (param_2 < 0x50) {
    if (param_2 < 0x11) goto LAB_00e3b658;
    in_eax = param_2 - 0x10;
  }
  else {
    in_eax = 0x40;
  }
  uVar2 = F_00e39fe0(in_eax,param_1 + 0x10);
  uVar2 = uVar2 + 0x10;
LAB_00e3b658: ;
  if (uVar2 + 0x60 <= param_2) {
    uVar2 = uVar2 + 0x60;
  }
  return uVar2;
}

/* ref: FUN_00e3b670 */
GEN_FRAME uint F_00e3b670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3b670u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return 4;
}

/* ref: FUN_00e3b6a0 */
GEN_FRAME uint F_00e3b6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3b6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  return (-(uint)(param_2 < 0x28) & 0xffffffe0) + 0x28;
}

/* ref: FUN_00e3b700 */
GEN_FRAME uint F_00e3b700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3b700u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  if (param_2 < 0x28) {
    return 8;
  }
  if (param_2 < 0x68) {
    return 0x28;
  }
  return (-(uint)(param_2 < 0x88) & 0xffffffe0) + 0x88;
}

/* ref: FUN_00e3b780 */
GEN_FRAME uint F_00e3b780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe3b780u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  return param_3;
}

/* ref: FUN_00e3b790 */
GEN_FRAME uint F_00e3b790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3b790u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  if (param_2 < 8) {
    return 6;
  }
  uVar1 = param_1[6];
  param_1[6] = param_1[7];
  param_1[7] = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  return 0xc;
}

/* ref: FUN_00e3b820 */
GEN_FRAME uint F_00e3b820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3b820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return param_2;
}

/* ref: RecvCallbackInterface_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e3b860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3b860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x11576e0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e3b8a0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3b8a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3b8a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x11576e0));
  return;
}

/* ref: FUN_00e3b8b0 */
GEN_NOFRAME uint GEN_THISCALL F_00e3b8b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3b8b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[14])REFP(0x11576ec));
  return (uint)in_ecx;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e3b8c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3b8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x11576e0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::LobbyProtoChannel::LobbyProtoDownCallbackInterface::Dispatch */
GEN_FRAME uint GEN_THISCALL F_00e3b8f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3b8f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  ushort uVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP((*(int *)(param_2 + 0xc) + 0x24)));
  uVar1 = *(ushort *)(uVar2 + 2);
  if (uVar1 < 0x1f5) {
    if (uVar1 == 500) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x30))(this GEN_EDX_FWD,param_1,param_2,uVar2 + 0x10);
      return uVar2;
    }
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 1: ;
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 8))(this GEN_EDX_ARG,param_1,param_2,uVar2 + 0x10);
      return uVar2;
    case 2: ;
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_ARG,param_1,param_2,uVar2 + 0x10);
      return uVar2;
    case 0xc: ;
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG,param_1,param_2,uVar2 + 0x10);
      return uVar2;
    case 0xd: ;
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x14))(this GEN_EDX_ARG,param_1,param_2,uVar2 + 0x10);
      return uVar2;
    case 0xe: ;
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,param_1,param_2,uVar2 + 0x10);
      return uVar2;
    case 0xf: ;
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1c))(this GEN_EDX_ARG,param_1,param_2,uVar2 + 0x10);
      return uVar2;
    case 0x10: ;
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x20))(this GEN_EDX_ARG,param_1,param_2,uVar2 + 0x10);
      return uVar2;
    case 0x15: ;
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG,param_1,param_2,uVar2 + 0x10);
      return uVar2;
    case 0x16: ;
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_ARG,param_1,param_2,uVar2 + 0x10);
      return uVar2;
    case 0x17: ;
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2c))(this GEN_EDX_ARG,param_1,param_2,uVar2 + 0x10);
      return uVar2;
    }
  }
  else if (uVar1 == 0x1f5) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x34))(this GEN_EDX_ARG,param_1,param_2,uVar2 + 0x10);
  }
  return uVar2;
}

/* ref: FUN_00e3bac0 */
GEN_NOFRAME uint GEN_THISCALL F_00e3bac0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bac0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  if (*(int *)(in_ecx + 0x14) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x14) + 0x24)));
  }
  if (*(short *)(iVar1 + 2) == 5) {
    return iVar1 + 0x10;
  }
  return 0;
}

/* ref: FUN_00e3bae0 */
GEN_NOFRAME uint GEN_THISCALL F_00e3bae0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bae0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  if (*(int *)(in_ecx + 0x14) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x14) + 0x24)));
  }
  if (*(short *)(iVar1 + 2) == 6) {
    return iVar1 + 0x10;
  }
  return 0;
}

/* ref: FUN_00e3bb00 */
GEN_NOFRAME uint GEN_THISCALL F_00e3bb00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bb00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  if (*(int *)(in_ecx + 0x14) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x14) + 0x24)));
  }
  if (*(short *)(iVar1 + 2) == 3) {
    return iVar1 + 0x10;
  }
  return 0;
}

/* ref: FUN_00e3bb20 */
GEN_NOFRAME uint GEN_THISCALL F_00e3bb20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bb20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  if (*(int *)(in_ecx + 0x14) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x14) + 0x24)));
  }
  if (*(short *)(iVar1 + 2) == 4) {
    return iVar1 + 0x10;
  }
  return 0;
}

/* ref: FUN_00e3bb40 */
GEN_NOFRAME uint GEN_THISCALL F_00e3bb40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bb40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  if (*(int *)(in_ecx + 0x14) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x14) + 0x24)));
  }
  if (*(short *)(iVar1 + 2) == 0xb) {
    return iVar1 + 0x10;
  }
  return 0;
}

/* ref: FUN_00e3bc00 */
GEN_NOFRAME uint GEN_THISCALL F_00e3bc00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bc00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  if (*(int *)(in_ecx + 0x14) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x14) + 0x24)));
  }
  if (*(short *)(iVar1 + 2) == 0x1f5) {
    return iVar1 + 0x10;
  }
  return 0;
}

/* ref: FUN_00e3bc20 */
GEN_NOFRAME uint GEN_THISCALL F_00e3bc20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bc20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  if (*(int *)(in_ecx + 0x14) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x14) + 0x24)));
  }
  if (*(short *)(iVar1 + 2) == 0x1f6) {
    return iVar1 + 0x10;
  }
  return 0;
}

/* ref: FUN_00e3bc50 */
GEN_FRAME uint GEN_THISCALL F_00e3bc50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe3bc50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  
  **(undefined4 * PTR32 *)((int)this + 0x14) = param_1;
  **(int * PTR32 *)((int)this + 0x24) = param_2;
  piVar1 = *(int * PTR32 *)((int)this + 0x34);
  *piVar1 = param_3 - param_2;
  return (uint)piVar1;
}

/* ref: FUN_00e3bcb0 */
GEN_NOFRAME uint GEN_THISCALL F_00e3bcb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bcb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  F_0042b630((int)this + 8 GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 1000;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  F_00a1af40((undefined *)((int)this + 0x78) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e3bd20 */
GEN_NOFRAME uint GEN_THISCALL F_00e3bd20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bd20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x5c;
}

/* ref: FUN_00e3bd30 */
GEN_NOFRAME uint GEN_THISCALL F_00e3bd30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bd30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x60);
}

/* ref: FUN_00e3bd40 */
GEN_FRAME uint GEN_THISCALL F_00e3bd40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3bd40u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00e3bd60 */
GEN_NOFRAME uint GEN_THISCALL F_00e3bd60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bd60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(int *)(in_ecx + 0x14) + 1;
  *(uint *)(in_ecx + 0x14) = uVar1;
  return uVar1;
}

/* ref: FUN_00e3bd70 */
GEN_NOFRAME uint GEN_THISCALL F_00e3bd70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bd70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x14;
}

/* ref: FUN_00e3bd80 */
GEN_FRAME uint F_00e3bd80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3bd80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(param_1 + 0x60) = *param_2;
  return (uint)param_2;
}

/* ref: FUN_00e3bd90 */
GEN_NOFRAME uint GEN_THISCALL F_00e3bd90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bd90u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  F_0042b630(in_ecx + 3 GEN_EDX_FWD);
  *(undefined2 *)(in_ecx + 0x18) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00e3bdc0 */
GEN_NOFRAME uint GEN_THISCALL F_00e3bdc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bdc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: FUN_00e3bdd0 */
GEN_NOFRAME ushort GEN_THISCALL F_00e3bdd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bdd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 0x60);
}

/* ref: FUN_00e3bde0 */
GEN_FRAME uint GEN_THISCALL F_00e3bde0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3bde0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = in_ecx;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)in_ecx;
}

/* ref: FUN_00e3be40 */
GEN_NOFRAME uint GEN_THISCALL F_00e3be40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3be40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x460);
}

/* ref: FUN_00e3be50 */
GEN_NOFRAME byte GEN_THISCALL F_00e3be50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3be50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (*(byte *)(in_ecx + 0x11) & REFG(undefined1, 0x13598ec)) == 0;
}

/* ref: FUN_00e3be70 */
GEN_NOFRAME byte GEN_THISCALL F_00e3be70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3be70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (*(byte *)(in_ecx + 0x11) & REFG(undefined1, 0x13598f0)) != 0;
}

/* ref: FUN_00e3bef0 */
GEN_FRAME uint GEN_THISCALL F_00e3bef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3bef0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00e3bf00 */
GEN_NOFRAME uint GEN_THISCALL F_00e3bf00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bf00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 4;
}

/* ref: FUN_00e3bf40 */
GEN_FRAME uint GEN_THISCALL F_00e3bf40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3bf40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = in_ecx;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)in_ecx;
}

/* ref: FUN_00e3bf60 */
GEN_NOFRAME byte GEN_THISCALL F_00e3bf60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bf60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (*(byte *)(in_ecx + 4) & REFG(undefined1, 0x13598ee)) != 0;
}

/* ref: FUN_00e3bf80 */
GEN_NOFRAME byte GEN_THISCALL F_00e3bf80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bf80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (*(byte *)(in_ecx + 4) & REFG(undefined1, 0x13598ef)) != 0;
}

/* ref: FUN_00e3bfa0 */
GEN_NOFRAME byte GEN_THISCALL F_00e3bfa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bfa0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (*(byte *)(in_ecx + 4) & REFG(undefined1, 0x13598f2)) != 0;
}

/* ref: FUN_00e3bfc0 */
GEN_NOFRAME byte GEN_THISCALL F_00e3bfc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3bfc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 8);
}

/* ref: FUN_00e3bfd0 */
GEN_FRAME uint GEN_THISCALL F_00e3bfd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3bfd0u, gen_a0, gen_a1, 0u, 0u);
  undefined8 * in_ecx = (undefined8 *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  in_ecx[4] = param_2[4];
  return (uint)in_ecx;
}

/* ref: FUN_00e3c010 */
GEN_NOFRAME uint GEN_THISCALL F_00e3c010(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c010u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00e3c020 */
GEN_NOFRAME unsigned int F_00e3c020(void)
{
  GEN_ENTER(0xe3c020u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00e3c030 */
GEN_NOFRAME uint GEN_THISCALL F_00e3c030(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c030u, gen_a0, 0u, 0u, 0u);
  ushort * in_ecx = (ushort *)(uintptr_t)gen_a0;
  return (uint)*in_ecx;
}

/* ref: FUN_00e3c040 */
GEN_FRAME uint GEN_THISCALL F_00e3c040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3c040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00e3c050 */
GEN_NOFRAME uint GEN_THISCALL F_00e3c050(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c050u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(ushort *)(in_ecx + 2);
}

/* ref: FUN_00e3c060 */
GEN_FRAME uint GEN_THISCALL F_00e3c060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3c060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)((int)this + 2) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00e3c080 */
GEN_NOFRAME byte GEN_THISCALL F_00e3c080(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c080u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (byte)((uint)*(undefined4 *)(in_ecx + 4) >> 0x1f);
}

/* ref: FUN_00e3c090 */
GEN_FRAME uint GEN_THISCALL F_00e3c090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3c090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 4) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00e3c0b0 */
GEN_NOFRAME uint GEN_THISCALL F_00e3c0b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c0b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[39])REFP(0x1157734));
  return (uint)in_ecx;
}

/* ref: FUN_00e3c0c0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c0c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c0c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[39])REFP(0x1157734));
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf1 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c0d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3c0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c0e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3c0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c0f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3c0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf4 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3c100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf5 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3c110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf6 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3c120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3c130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf8 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3c140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3c150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf10 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe3c160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf11 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3c170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf12 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3c180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf14 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3c190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf15 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c1a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3c1a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf16 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c1b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe3c1b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf13 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c1c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xe3c1c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf17 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c1d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe3c1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf18 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c1e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3c1e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf19 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c1f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3c1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf20 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3c200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf21 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3c210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf22 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3c220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf23 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3c230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf24 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3c240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf25 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3c250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf26 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3c260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf27 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3c270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf28 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3c280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf29 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3c290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf30 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c2a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3c2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf31 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c2b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3c2b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf32 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c2c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3c2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf33 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c2d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3c2d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf34 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c2e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3c2e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf35 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c2f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe3c2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf36 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3c300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf37 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3c310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf38 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3c320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: FUN_00e3c330 */
GEN_NOFRAME uint GEN_THISCALL F_00e3c330(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = (int *)((int)this + 0x10);
  if (*(uint *)((int)this + 0x10) < (*(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2) - 1U) {
    *piVar1 = *(uint *)((int)this + 0x10) + 1;
    return (uint)piVar1;
  }
  *piVar1 = 0;
  return (uint)piVar1;
}

/* ref: FUN_00e3c350 */
GEN_NOFRAME uint GEN_THISCALL F_00e3c350(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if ((iVar1 != *(int *)((int)this + 4)) &&
     (((uint)(*(int *)((int)this + 4) - iVar1 >> 2) <= *(uint *)((int)this + 0x18) ||
      (*(char *)((int)this + 0x20) == '\0')))) {
    return *((uint *)GEN_TOP((iVar1 + *(int *)((int)this + 0x10) * 4)));
  }
  return 0;
}

/* ref: FUN_00e3c380 */
GEN_NOFRAME uint GEN_THISCALL F_00e3c380(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  piVar1 = *(int * PTR32 *)this;
  uVar2 = *(int *)((int)this + 4) - (int)((int)(uintptr_t)piVar1) >> 2;
  uVar3 = 0;
  piVar4 = piVar1;
  if (uVar2 != 0) {
    do {
      if ((((int *)*piVar4)[0x1b] == 0) && (*(int *)*piVar4 == 0)) {
        *(undefined4 *)(piVar1[uVar3] + 0x6c) = 1;
        return *(uint *)(*(int *)this + uVar3 * 4);
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar3 < uVar2);
  }
  return 0;
}

/* ref: FUN_00e3c3d0 */
GEN_FRAME uint GEN_THISCALL F_00e3c3d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c3d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  int * this_00;
  code * pcVar4;
  undefined4 uVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar2 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 <= *(uint *)((int)this + 0x18)) {
    return uVar2;
  }
  if (*(int *)((int)this + 0x1c) == 0) {
    pvVar3 = (undefined *)F_00406b90(0x78,0,0);
    if (pvVar3 == (undefined *)0x0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      pvVar3 = (undefined *)F_00bac2f0(pvVar3 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x24));
    }
    *(undefined * PTR32 *)((int)this + 0x1c) = pvVar3;
    (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3)) = 1;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(CONCAT13(1,GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x8)), 0, 3))));
    bVar1 = F_00babce0(pvVar3 GEN_EDX_ARG,(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      uVar5 = *((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 0x18) * 4)));
      pcVar4 = ((code *)REFP(0xe3bd80));
      uVar2 = F_0042a990(*((int *)GEN_TOP((*(int *)this + *(int *)((int)this + 0x18) * 4))) + 8 GEN_EDX_ARG);
      bVar1 = F_00baa680(*(undefined * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG,uVar2,pcVar4,uVar5);
      uVar2 = CONCAT31(extraout_var_00,bVar1);
      if (bVar1 != 0) goto LAB_00e3c453;
    }
    this_00 = *(int * PTR32 *)((int)this + 0x1c);
  }
  else {
LAB_00e3c453: ;
    uVar2 = F_00bada90(*(undefined * PTR32 *)((int)this + 0x1c) GEN_EDX_ARG);
    this_00 = *(int * PTR32 *)((int)this + 0x1c);
    if (*this_00 != 4) {
      return uVar2;
    }
  }
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  if (this_00 != (int *)0x0) {
    F_00bac3b0(this_00 GEN_EDX_ARG);
    uVar2 = F_00406ad0(this_00);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  return uVar2;
}

/* ref: FUN_00e3c4a0 */
GEN_FRAME uint GEN_THISCALL F_00e3c4a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3c4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 < *(int *)((int)this + 0x454) - *(int *)((int)this + 0x450) >> 2) {
    return *((uint *)GEN_TOP((*(int *)((int)this + 0x450) + param_1 * 4)));
  }
  return 0;
}

/* ref: FUN_00e3c4d0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c4d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c4d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0x20) != '\0') {
    F_00e3c3d0(this GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: FUN_00e3c4e0 */
GEN_NOFRAME uint GEN_THISCALL F_00e3c4e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c4e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  
  puVar1 = *(uint * PTR32 *)this;
  while( true ) {
    if (puVar1 == *(uint * PTR32 *)((int)this + 4)) {
      return 0;
    }
    if (((undefined4 *)*puVar1)[0x1b] == 2) break;
    puVar1 = puVar1 + 1;
  }
  *(undefined4 *)*puVar1 = 0;
  *(undefined4 *)(*puVar1 + 0x6c) = 1;
  return *puVar1;
}

/* ref: FUN_00e3c520 */
GEN_FRAME byte GEN_THISCALL F_00e3c520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3c520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  piVar2 = *(int * PTR32 *)this;
  if (piVar2 != piVar1) {
    do {
      if (*piVar2 == param_1) break;
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
    if (piVar2 != piVar1) {
      *(undefined4 *)(*piVar2 + 0x6c) = 2;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00e3c560 */
GEN_FRAME uint GEN_THISCALL F_00e3c560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3c560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(int *)((int)this + 0x24) = param_1;
  if (0 < param_1) {
    *(undefined1 *)((int)this + 0x20) = 1;
  }
  return (uint)this;
}

/* ref: FUN_00e3c590 */
GEN_NOFRAME uint GEN_THISCALL F_00e3c590(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)this;
  if (piVar2 != *(int * PTR32 *)((int)this + 4)) {
    do {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        F_0042c880((undefined *)(iVar1 + 8) GEN_EDX_FWD);
        F_00406ad0(iVar1);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int * PTR32 *)((int)this + 4));
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x1c);
  if (this_00 != (undefined *)0x0) {
    F_00bac3b0(this_00 GEN_EDX_ARG);
    F_00406ad0(this_00);
  }
  if (*(int *)this != 0) {
    F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00e3c600 */
GEN_NOFRAME uint GEN_THISCALL F_00e3c600(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint in_EAX = 0;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)this;
  if (piVar2 != *(int * PTR32 *)((int)this + 4)) {
    do {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        F_0042c880((undefined *)(iVar1 + 8) GEN_EDX_FWD);
        in_EAX = F_00406ad0(iVar1);
        *piVar2 = 0;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int * PTR32 *)((int)this + 4));
  }
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    in_EAX = F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  return in_EAX;
}

/* ref: FUN_00e3c670 */
GEN_NOFRAME uint GEN_THISCALL F_00e3c670(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)this;
  if (piVar2 != *(int * PTR32 *)((int)this + 4)) {
    do {
      if (*piVar2 != 0) {
        F_00406ad0(*piVar2);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int * PTR32 *)((int)this + 4));
  }
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00e3c6c0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c6c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c6c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)this;
  if (piVar2 != *(int * PTR32 *)((int)this + 4)) {
    do {
      if (*piVar2 != 0) {
        F_00406ad0(*piVar2);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != *(int * PTR32 *)((int)this + 4));
  }
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return;
}

/* ref: FUN_00e3c720 */
GEN_NOFRAME uint GEN_THISCALL F_00e3c720(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = *(int * PTR32 *)((int)this + 0x450);
  if (piVar3 != *(int * PTR32 *)((int)this + 0x454)) {
    do {
      if (*piVar3 != 0) {
        F_00406ad0(*piVar3);
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != *(int * PTR32 *)((int)this + 0x454));
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x460);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
  }
  uVar2 = 0;
  if (*(int *)((int)this + 0x450) != 0) {
    uVar2 = F_00406ad0(*(int *)((int)this + 0x450));
  }
  *(undefined4 *)((int)this + 0x450) = 0;
  *(undefined4 *)((int)this + 0x454) = 0;
  *(undefined4 *)((int)this + 0x458) = 0;
  return uVar2;
}

/* ref: FUN_00e3c7a0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c7a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c7a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  undefined4 * puVar2;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (puVar2 != *(undefined4 * PTR32 *)((int)this + 4)) {
    do {
      this_00 = (undefined *)*puVar2;
      if (this_00 != (undefined *)0x0) {
        F_00e3c720(this_00 GEN_EDX_FWD);
        F_00406ad0(this_00);
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined4 * PTR32 *)((int)this + 4));
  }
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return;
}

/* ref: FUN_00e3c800 */
GEN_NOFRAME uint GEN_THISCALL F_00e3c800(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c800u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00e3c810 */
GEN_NOFRAME uint GEN_THISCALL F_00e3c810(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar2 != *(undefined4 * PTR32 *)((int)this + 8)) {
    do {
      F_00406ad0(*puVar2);
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined4 * PTR32 *)((int)this + 8));
  }
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = F_00406ad0(*(int *)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar1;
}

/* ref: FUN_00e3c860 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3c860(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  *(undefined4 *)this = 0;
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != *(int *)((int)this + 8)) {
    F_00c46e20(iVar1,*(int *)((int)this + 8),0);
    *(int *)((int)this + 8) = iVar1;
  }
  return;
}

/* ref: FUN_00e3c8a0 */
GEN_FRAME unsigned int GEN_THISCALL F_00e3c8a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3c8a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint * this_00;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar4 = (*(undefined4 * PTR32 *)&gen_args[1]);
  if (*((char *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 4))) != '\0') {
    this_00 = ((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x450)));
    for (piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x450))); piVar1 != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x454)));
        piVar1 = piVar1 + 1) {
      if (*(char *)(*piVar1 + 0x10) == *((char *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 4)))) {
        puVar4 = (*(undefined4 * PTR32 *)&gen_args[1]);
        puVar2 = (undefined4 *)*piVar1;
        for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 - 1) {
          *puVar2 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar2 = puVar2 + 1;
        }
        return;
      }
    }
    puVar2 = (undefined4 *)F_00406b90(0x38,0,0);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar5 = puVar2;
      for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x454)));
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar2;
    if ((&(*(undefined4 * PTR32 *)&gen_args[1]) < puVar4) && (puVar5 = (undefined4 *)*this_00, puVar5 <= &(*(undefined4 * PTR32 *)&gen_args[1]))) {
      if (puVar4 == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x458)))) {
        F_00e3e470(this_00 GEN_EDX_ARG,1);
      }
      if (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x454))) != (undefined4 *)0x0) {
        **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x454))) =
             *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(undefined4 * PTR32 *)&gen_args[1]) - (int)((int)(uintptr_t)puVar5) >> 2) * 4)));
        *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x454))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x454))) + 4;
        return;
      }
    }
    else {
      if (puVar4 == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x458)))) {
        F_00e3e470(this_00 GEN_EDX_ARG,1);
      }
      if (*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x454))) != (undefined4 *)0x0) {
        **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x454))) = puVar2;
      }
    }
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x454))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x454))) + 4;
  }
  return;
}

/* ref: FUN_00e3c980 */
GEN_FRAME unsigned int GEN_THISCALL F_00e3c980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3c980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)param_1[1]) {
    do {
      iVar1 = *piVar2;
      if ((*(int *)(iVar1 + 8) == *(int *)((int)this + 8)) &&
         (*(int *)(iVar1 + 0xc) == *(int *)((int)this + 0xc))) {
        F_00e3c8a0(this GEN_EDX_FWD,iVar1);
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != (int *)param_1[1]);
  }
  return;
}

/* ref: FUN_00e3c9c0 */
GEN_NOFRAME uint GEN_THISCALL F_00e3c9c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3c9c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  if (puVar1 != *(undefined4 * PTR32 *)((int)this + 4)) {
    do {
      this_00 = (undefined *)*puVar1;
      if (this_00 != (undefined *)0x0) {
        F_00e3c720(this_00 GEN_EDX_FWD);
        F_00406ad0(this_00);
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 * PTR32 *)((int)this + 4));
  }
  if (*(int *)this != 0) {
    F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00e3ca10 */
GEN_FRAME uint GEN_THISCALL F_00e3ca10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3ca10u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint * this_00;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  
  puVar6 = (*(undefined4 * PTR32 *)&gen_args[1]);
  iVar5 = (*(undefined4 * PTR32 *)&gen_args[1])[3];
  if ((iVar5 != 0) || (puVar3 = (undefined4 *)0x0, (*(undefined4 * PTR32 *)&gen_args[1])[2] != 0)) {
    cVar1 = *((char *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 4)));
    puVar3 = ((undefined4 *)GEN_TOP(CONCAT31((int3)((uint)iVar5 >> 8),cVar1)));
    if (cVar1 != '\0') {
      this_00 = ((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      for (puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))); puVar3 != *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
          puVar3 = puVar3 + 1) {
        puVar4 = (undefined4 *)*puVar3;
        if ((((*(undefined4 * PTR32 *)&gen_args[1])[2] == puVar4[2]) && (iVar5 == puVar4[3])) && (cVar1 == *(char *)(puVar4 + 4)))
        {
          puVar6 = (*(undefined4 * PTR32 *)&gen_args[1]);
          for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 - 1) {
            *puVar4 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar4 = puVar4 + 1;
          }
          return (uint)puVar3;
        }
      }
      puVar4 = (undefined4 *)F_00406b90(0x38,0,0);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar3 = puVar4;
        for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 - 1) {
          *puVar3 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar3 = puVar3 + 1;
        }
      }
      puVar6 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
      (*(undefined4 * PTR32 *)&gen_args[1]) = puVar4;
      if ((&(*(undefined4 * PTR32 *)&gen_args[1]) < puVar6) && (puVar2 = (undefined4 *)*this_00, puVar2 <= &(*(undefined4 * PTR32 *)&gen_args[1]))) {
        if (puVar6 == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)))) {
          F_00e3e470(this_00 GEN_EDX_ARG,1);
        }
        puVar6 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
        puVar3 = (undefined4 *)0x0;
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(undefined4 * PTR32 *)&gen_args[1]) - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
          *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 4;
          return (uint)puVar6;
        }
      }
      else {
        if (puVar6 == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)))) {
          F_00e3e470(this_00 GEN_EDX_ARG,1);
        }
        puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = puVar4;
        }
      }
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 4;
    }
  }
  return (uint)puVar3;
}

/* ref: Global::CharaEntry */
GEN_FRAME uint GEN_THISCALL F_00e3cb10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3cb10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  char cVar1;
  undefined4 * PTR32 * PTR32 * pppuVar2;
  undefined4 * puVar3;
  char * pcVar4;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar5;
  int iVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  puVar3 = param_1;
  puVar7 = this;
  for (iVar6 = 0x114; iVar6 != 0; iVar6 = iVar6 - 1) {
    *puVar7 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar7 = puVar7 + 1;
  }
  (*(undefined4 *)(gen_frame + 0xb8)) = 0;
  *(undefined4 *)((int)this + 0x450) = 0;
  *(undefined4 *)((int)this + 0x454) = 0;
  *(undefined4 *)((int)this + 0x458) = 0;
  puVar3 = (undefined4 *)F_00406b90(0xe8,0,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    F_00f36280(puVar3 GEN_EDX_ARG);
    *puVar3 = (*(undefined * PTR32 (*)[27])REFP(0x110f694));
  }
  *(undefined4 * PTR32 *)((int)this + 0x460) = puVar3;
  F_00e82b60(((undefined1 *)(gen_frame + 0xa0)) GEN_EDX_ARG);
  pppuVar2 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0];
  (*(uint *)(gen_frame + 0xd0)) = 0xf;
  (*(undefined4 *)(gen_frame + 0xcc)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar2 & 0xffffff00);
  pcVar4 = (char *)((int)this + 0x4a);
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc)) GEN_EDX_ARG,(char *)((int)this + 0x4a),(int)pcVar4 - ((int)this + 0x4b));
  ((undefined * PTR32 *)(gen_frame + 0x0))[0] = &REFG(undefined, 0x1157820);
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x58))[0] = (*(undefined * PTR32 (*)[1])REFP(0x115772c));
  (*(undefined8 *)(gen_frame + 0x8)) = 0;
  F_00483f60(((undefined * PTR32 * PTR32 *)(gen_frame + 0x58)) GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x10)),0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)((undefined * PTR32 *)(gen_frame + 0x0)) + *(int *)(((undefined * PTR32 *)(gen_frame + 0x0))[0] + 4)))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157814));
  F_00479880(((undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x10))[0] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  ppppuVar5 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0];
  if ((*(uint *)(gen_frame + 0xd0)) < 0x10) {
    ppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc));
  }
  F_00e3da10(((undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,ppppuVar5,(*(undefined4 *)(gen_frame + 0xcc)),2);
  if (0xf < (*(uint *)(gen_frame + 0xd0))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xbc))[0]);
  }
  F_00ea9ac0(((undefined * PTR32 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0xa0)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x460) + 0x20))))(*(int * PTR32 *)((int)this + 0x460) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xa0)));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)((undefined * PTR32 *)(gen_frame + 0x0)) + *(int *)(((undefined * PTR32 *)(gen_frame + 0x0))[0] + 4)))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157814));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x10))[0] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  F_00e3ce60(((undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_00479ae0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)((undefined * PTR32 *)(gen_frame + 0x0)) + *(int *)(((undefined * PTR32 *)(gen_frame + 0x0))[0] + 4)))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115772c));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x58))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x58)));
  F_00e82b80(((undefined1 *)(gen_frame + 0xa0)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e3cce0 */
GEN_FRAME uint GEN_THISCALL F_00e3cce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3cce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  F_00e3e6e0((undefined *)((int)this + 4) GEN_EDX_FWD,param_1 + 1);
  return (uint)this;
}

/* ref: FUN_00e3cd00 */
GEN_FRAME uint GEN_THISCALL F_00e3cd00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3cd00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880((undefined *)((int)this + 8) GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e3cd30 */
GEN_FRAME uint GEN_THISCALL F_00e3cd30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3cd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00bac3b0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e3cd70 */
GEN_FRAME uint GEN_THISCALL F_00e3cd70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3cd70u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e3cd90 */
GEN_FRAME uint GEN_THISCALL F_00e3cd90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3cd90u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e3cdf0 */
GEN_FRAME uint GEN_THISCALL F_00e3cdf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3cdf0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00e3ce60 */
GEN_NOFRAME uint GEN_THISCALL F_00e3ce60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3ce60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  if ((*(byte *)((int)this + 0x40) & 1) != 0) {
    F_00406ad0(**(undefined4 * PTR32 *)((int)this + 0x10));
  }
  **(undefined4 * PTR32 *)((int)this + 0x10) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x20) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x30) = 0;
  **(undefined4 * PTR32 *)((int)this + 0x14) = 0;
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
  *puVar1 = 0;
  **(undefined4 * PTR32 *)((int)this + 0x34) = 0;
  *(uint *)((int)this + 0x40) = *(uint *)((int)this + 0x40) & 0xfffffffe;
  *(undefined4 *)((int)this + 0x3c) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00e3cec0 */
GEN_FRAME uint GEN_THISCALL F_00e3cec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3cec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e3cee0 */
GEN_FRAME uint GEN_STDCALL F_00e3cee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3cee0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e3cf20 */
GEN_FRAME uint GEN_STDCALL F_00e3cf20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3cf20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e3cf40 */
GEN_FRAME uint GEN_STDCALL F_00e3cf40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3cf40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e3cf60 */
GEN_FRAME uint GEN_STDCALL F_00e3cf60(unsigned int gen_a0)
{
  GEN_ENTER(0xe3cf60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (((byte)param_1 & 1) == 0) {
    uVar1 = 4;
  }
  if (((byte)param_1 & 2) == 0) {
    uVar1 = uVar1 | 2;
  }
  if (((byte)param_1 & 8) != 0) {
    uVar1 = uVar1 | 8;
  }
  if (((byte)param_1 & 4) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  return uVar1;
}

/* ref: FUN_00e3cfb0 */
GEN_FRAME uint F_00e3cfb0(unsigned int gen_a0)
{
  GEN_ENTER(0xe3cfb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e3cfc0 */
GEN_FRAME uint F_00e3cfc0(unsigned int gen_a0)
{
  GEN_ENTER(0xe3cfc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x40000000) && (uVar1 = F_004069f0(param_1 * 4), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e3d010 */
GEN_FRAME unsigned int F_00e3d010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3d010u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e3d030 */
GEN_FRAME uint F_00e3d030(unsigned int gen_a0)
{
  GEN_ENTER(0xe3d030u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e3d040 */
GEN_FRAME uint GEN_STDCALL F_00e3d040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3d040u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00e3d060 */
GEN_FRAME uint F_00e3d060(unsigned int gen_a0)
{
  GEN_ENTER(0xe3d060u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e3d070 */
GEN_FRAME uint F_00e3d070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3d070u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00e3d0a0 */
GEN_FRAME byte F_00e3d0a0(void)
{
  GEN_ENTER(0xe3d0a0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00e3d0b0 */
GEN_FRAME uint F_00e3d0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3d0b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00e3d0e0 */
GEN_FRAME byte F_00e3d0e0(void)
{
  GEN_ENTER(0xe3d0e0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00e3d0f0 */
GEN_FRAME uint F_00e3d0f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3d0f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00e3d120 */
GEN_FRAME byte F_00e3d120(void)
{
  GEN_ENTER(0xe3d120u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00e3d130 */
GEN_FRAME uint F_00e3d130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3d130u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00e3d190 */
GEN_FRAME uint F_00e3d190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3d190u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00e3d1b0 */
GEN_FRAME uint GEN_THISCALL F_00e3d1b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3d1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e3d1d0 */
GEN_FRAME byte F_00e3d1d0(void)
{
  GEN_ENTER(0xe3d1d0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00e3d1f0 */
GEN_FRAME uint F_00e3d1f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3d1f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00e3d240 */
GEN_FRAME uint GEN_THISCALL F_00e3d240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3d240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = (int *)((int)this - 0x10);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*(int *)(*piVar1 + 4) - 0x10 + (int)this))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115772c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(piVar1);
  }
  return (uint)piVar1;
}

/* ref: Application::Network::LobbyClient::LobbyRequestCallback::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e3d280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3d280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x1157734));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e3d2b0 */
GEN_FRAME uint GEN_THISCALL F_00e3d2b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3d2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00e3d2c0 */
GEN_FRAME uint GEN_THISCALL F_00e3d2c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3d2c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00e3d2f0 */
GEN_NOFRAME uint GEN_THISCALL F_00e3d2f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3d2f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  F_00e3ce60(this GEN_EDX_FWD);
  uVar1 = F_00479ae0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: basic_stringbuf_DU_char_traits_D_std_V::vf6 */
GEN_NOFRAME uint GEN_THISCALL F_00e3d310(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3d310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * pbVar1;
  byte * pbVar2;
  
  pbVar1 = ((byte *)GEN_TOP(**(int * PTR32 *)((int)this + 0x20)));
  if (pbVar1 == (byte *)0x0) {
    return 0xffffffff;
  }
  if (pbVar1 < pbVar1 + **(int * PTR32 *)((int)this + 0x30)) {
    return (uint)*pbVar1;
  }
  if ((((*(byte *)((int)this + 0x40) & 4) == 0) &&
      (pbVar2 = ((byte *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x24))), pbVar2 != (byte *)0x0)) &&
     ((pbVar1 < pbVar2 || (pbVar1 < *(byte * PTR32 *)((int)this + 0x3c))))) {
    if (*(byte * PTR32 *)((int)this + 0x3c) < pbVar2) {
      *(byte * PTR32 *)((int)this + 0x3c) = pbVar2;
    }
    **(int * PTR32 *)((int)this + 0x30) = *(int *)((int)this + 0x3c) - **(int * PTR32 *)((int)this + 0x20);
    return (uint)*((byte *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x20)));
  }
  return 0xffffffff;
}

/* ref: basic_stringbuf_DU_char_traits_D_std_V::vf10 */
GEN_FRAME uint GEN_THISCALL F_00e3d380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe3d380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar2 = **(uint * PTR32 *)((int)this + 0x24);
  if ((uVar2 != 0) && (*(uint *)((int)this + 0x3c) < uVar2)) {
    *(uint *)((int)this + 0x3c) = uVar2;
  }
  uVar2 = (*(uint *)&gen_a3);
  uVar6 = param_2;
  if ((((byte)param_5 & 1) == 0) || (iVar7 = **(int * PTR32 *)((int)this + 0x20), iVar7 == 0)) {
    if ((((byte)param_5 & 2) == 0) || (uVar3 = **(uint * PTR32 *)((int)this + 0x24), uVar3 == 0)) {
      if (param_2 == 0 && (*(uint *)&gen_a3) == 0) goto LAB_00e3d51d;
    }
    else {
      if (param_4 == 2) {
        uVar2 = *(int *)((int)this + 0x3c) - **(int * PTR32 *)((int)this + 0x10);
        uVar6 = param_2 + uVar2;
        uVar2 = (*(uint *)&gen_a3) + ((int)uVar2 >> 0x1f) + (uint)CARRY4(param_2,uVar2);
      }
      else if (param_4 == 1) {
        uVar2 = uVar3 - **(int * PTR32 *)((int)this + 0x10);
        uVar6 = param_2 + uVar2;
        uVar2 = (*(uint *)&gen_a3) + ((int)uVar2 >> 0x1f) + (uint)CARRY4(param_2,uVar2);
      }
      else if (param_4 != 0) {
        uVar2 = REFG(undefined4, 0x1118764);
        uVar6 = REFG(undefined4, 0x1118760);
      }
      if (-1 < (int)uVar2) {
        uVar4 = *(int *)((int)this + 0x3c) - **(int * PTR32 *)((int)this + 0x10);
        iVar7 = (int)uVar4 >> 0x1f;
        if (((int)uVar2 <= iVar7) && (((int)uVar2 < iVar7 || (uVar6 <= uVar4)))) {
          iVar7 = (**(int * PTR32 *)((int)this + 0x10) - uVar3) + uVar6;
          **(int * PTR32 *)((int)this + 0x34) = **(int * PTR32 *)((int)this + 0x34) - iVar7;
          **(int * PTR32 *)((int)this + 0x24) = **(int * PTR32 *)((int)this + 0x24) + iVar7;
          goto LAB_00e3d51d;
        }
      }
    }
  }
  else {
    if (param_4 == 2) {
      uVar2 = *(int *)((int)this + 0x3c) - **(int * PTR32 *)((int)this + 0x10);
      uVar6 = param_2 + uVar2;
      uVar2 = (*(uint *)&gen_a3) + ((int)uVar2 >> 0x1f) + (uint)CARRY4(param_2,uVar2);
    }
    else if (param_4 == 1) {
      if (((byte)param_5 & 2) == 0) {
        uVar2 = iVar7 - **(int * PTR32 *)((int)this + 0x10);
        uVar6 = param_2 + uVar2;
        uVar2 = (*(uint *)&gen_a3) + ((int)uVar2 >> 0x1f) + (uint)CARRY4(param_2,uVar2);
      }
      else {
LAB_00e3d3f1: ;
        uVar2 = REFG(undefined4, 0x1118764);
        uVar6 = REFG(undefined4, 0x1118760);
      }
    }
    else if (param_4 != 0) goto LAB_00e3d3f1;
    if (-1 < (int)uVar2) {
      uVar3 = *(int *)((int)this + 0x3c) - **(int * PTR32 *)((int)this + 0x10);
      iVar5 = (int)uVar3 >> 0x1f;
      if (((int)uVar2 <= iVar5) && (((int)uVar2 < iVar5 || (uVar6 <= uVar3)))) {
        iVar7 = (**(int * PTR32 *)((int)this + 0x10) - iVar7) + uVar6;
        **(int * PTR32 *)((int)this + 0x30) = **(int * PTR32 *)((int)this + 0x30) - iVar7;
        **(int * PTR32 *)((int)this + 0x20) = **(int * PTR32 *)((int)this + 0x20) + iVar7;
        if ((((byte)param_5 & 2) != 0) && (iVar7 = **(int * PTR32 *)((int)this + 0x24), iVar7 != 0)) {
          iVar5 = **(int * PTR32 *)((int)this + 0x34);
          iVar1 = **(int * PTR32 *)((int)this + 0x20);
          **(int * PTR32 *)((int)this + 0x24) = iVar1;
          **(int * PTR32 *)((int)this + 0x34) = (iVar5 + iVar7) - iVar1;
        }
        goto LAB_00e3d51d;
      }
    }
  }
  uVar2 = REFG(undefined4, 0x1118764);
  uVar6 = REFG(undefined4, 0x1118760);
LAB_00e3d51d: ;
  *param_1 = uVar6;
  param_1[1] = uVar2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return (uint)param_1;
}

/* ref: basic_stringbuf_DU_char_traits_D_std_V::vf11 */
GEN_FRAME uint GEN_THISCALL F_00e3d540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xe3d540u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  uint param_4 = (uint)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint param_8 = (uint)gen_a8;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar8 = param_4 + param_2;
  uVar7 = **(uint * PTR32 *)((int)this + 0x24);
  uVar6 = ((int)param_4 >> 0x1f) + param_3 + (uint)CARRY4(param_4,param_2);
  if ((uVar7 != 0) && (*(uint *)((int)this + 0x3c) < uVar7)) {
    *(uint *)((int)this + 0x3c) = uVar7;
  }
  if ((uVar8 != REFG(undefined4, 0x1118760)) || (uVar7 = uVar6, uVar9 = uVar8, uVar6 != REFG(undefined4, 0x1118764))) {
    uVar7 = REFG(undefined4, 0x1118764);
    uVar9 = REFG(undefined4, 0x1118760);
    if (((param_8 & 1) == 0) || (**(int * PTR32 *)((int)this + 0x20) == 0)) {
      if ((((param_8 & 2) != 0) && (uVar3 = **(uint * PTR32 *)((int)this + 0x24), uVar3 != 0)) &&
         (-1 < (int)uVar6)) {
        uVar4 = *(int *)((int)this + 0x3c) - **(int * PTR32 *)((int)this + 0x10);
        iVar5 = (int)uVar4 >> 0x1f;
        if (((int)uVar6 <= iVar5) && (((int)uVar6 < iVar5 || (uVar8 <= uVar4)))) {
          iVar5 = (**(int * PTR32 *)((int)this + 0x10) - uVar3) + uVar8;
          **(int * PTR32 *)((int)this + 0x34) = **(int * PTR32 *)((int)this + 0x34) - iVar5;
          **(int * PTR32 *)((int)this + 0x24) = **(int * PTR32 *)((int)this + 0x24) + iVar5;
          uVar7 = uVar6;
          uVar9 = uVar8;
        }
      }
    }
    else if (-1 < (int)uVar6) {
      uVar3 = *(int *)((int)this + 0x3c) - **(int * PTR32 *)((int)this + 0x10);
      iVar5 = (int)uVar3 >> 0x1f;
      if (((int)uVar6 <= iVar5) && (((int)uVar6 < iVar5 || (uVar8 <= uVar3)))) {
        iVar5 = (**(int * PTR32 *)((int)this + 0x10) - **(int * PTR32 *)((int)this + 0x20)) + uVar8;
        **(int * PTR32 *)((int)this + 0x30) = **(int * PTR32 *)((int)this + 0x30) - iVar5;
        **(int * PTR32 *)((int)this + 0x20) = **(int * PTR32 *)((int)this + 0x20) + iVar5;
        uVar7 = uVar6;
        uVar9 = uVar8;
        if (((param_8 & 2) != 0) && (iVar5 = **(int * PTR32 *)((int)this + 0x24), iVar5 != 0)) {
          iVar1 = **(int * PTR32 *)((int)this + 0x20);
          iVar2 = **(int * PTR32 *)((int)this + 0x34);
          **(int * PTR32 *)((int)this + 0x24) = iVar1;
          **(int * PTR32 *)((int)this + 0x34) = (iVar2 + iVar5) - iVar1;
        }
      }
    }
  }
  *param_1 = uVar9;
  param_1[1] = uVar7;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return (uint)param_1;
}

/* ref: basic_stringbuf_DU_char_traits_D_std_V::vf3 */
GEN_FRAME uint GEN_THISCALL F_00e3d660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3d660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int * piVar2;
  undefined1 * puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if ((*(byte *)((int)this + 0x40) & 8) != 0) {
    uVar7 = **(uint * PTR32 *)((int)this + 0x24);
    if ((uVar7 != 0) && (uVar4 = *(uint *)((int)this + 0x3c), uVar7 < uVar4)) {
      iVar1 = **(int * PTR32 *)((int)this + 0x34);
      **(uint * PTR32 *)((int)this + 0x24) = uVar4;
      **(int * PTR32 *)((int)this + 0x34) = (iVar1 + uVar7) - uVar4;
    }
  }
  if (param_1 == 0xffffffff) {
    return 0;
  }
  uVar7 = **(uint * PTR32 *)((int)this + 0x24);
  if ((uVar7 != 0) && (piVar2 = *(int * PTR32 *)((int)this + 0x34), uVar7 < *piVar2 + uVar7)) {
    *piVar2 = *piVar2 - 1;
    goto LAB_00e3d7ed;
  }
  if ((*(byte *)((int)this + 0x40) & 2) != 0) {
    return 0xffffffff;
  }
  if (uVar7 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(int * PTR32 *)((int)this + 0x34) - **(int * PTR32 *)((int)this + 0x10)) + uVar7;
  }
  uVar4 = uVar7 >> 1;
  if (uVar4 < 0x20) {
    uVar4 = 0x20;
  }
  else if (uVar4 == 0) {
    return 0xffffffff;
  }
  do {
    if (uVar7 <= 0x7fffffff - uVar4) break;
    uVar4 = uVar4 >> 1;
  } while (uVar4 != 0);
  if (uVar4 == 0) {
    return 0xffffffff;
  }
  iVar5 = uVar4 + uVar7;
  uVar4 = F_00a15a50(iVar5);
  iVar1 = **(int * PTR32 *)((int)this + 0x10);
  if ((uVar7 == 0) || (F_00c46aa0(uVar4,iVar1,uVar7), uVar7 == 0)) {
    *(uint *)((int)this + 0x3c) = uVar4;
    **(uint * PTR32 *)((int)this + 0x14) = uVar4;
    **(uint * PTR32 *)((int)this + 0x24) = uVar4;
    **(int * PTR32 *)((int)this + 0x34) = iVar5;
    if ((*(byte *)((int)this + 0x40) & 4) != 0) goto LAB_00e3d79d;
    **(uint * PTR32 *)((int)this + 0x10) = uVar4;
    **(uint * PTR32 *)((int)this + 0x20) = uVar4;
    **(undefined4 * PTR32 *)((int)this + 0x30) = 1;
  }
  else {
    *(int *)((int)this + 0x3c) = *(int *)((int)this + 0x3c) + (uVar4 - iVar1);
    iVar6 = **(int * PTR32 *)((int)this + 0x24);
    **(int * PTR32 *)((int)this + 0x14) = **(int * PTR32 *)((int)this + 0x14) + (uVar4 - iVar1);
    iVar6 = (iVar6 - iVar1) + uVar4;
    **(int * PTR32 *)((int)this + 0x24) = iVar6;
    **(int * PTR32 *)((int)this + 0x34) = (uVar4 - iVar6) + iVar5;
    if ((*(byte *)((int)this + 0x40) & 4) == 0) {
      iVar5 = **(int * PTR32 *)((int)this + 0x24);
      iVar6 = (**(int * PTR32 *)((int)this + 0x20) - iVar1) + uVar4;
      **(uint * PTR32 *)((int)this + 0x10) = uVar4;
      **(int * PTR32 *)((int)this + 0x20) = iVar6;
      **(int * PTR32 *)((int)this + 0x30) = (iVar5 - iVar6) + 1;
    }
    else {
LAB_00e3d79d: ;
      **(uint * PTR32 *)((int)this + 0x10) = uVar4;
      **(undefined4 * PTR32 *)((int)this + 0x20) = 0;
      **(uint * PTR32 *)((int)this + 0x30) = uVar4;
    }
  }
  if ((*(byte *)((int)this + 0x40) & 1) != 0) {
    F_00406ad0(iVar1);
  }
  *(uint *)((int)this + 0x40) = *(uint *)((int)this + 0x40) | 1;
  **(int * PTR32 *)((int)this + 0x34) = **(int * PTR32 *)((int)this + 0x34) - 1;
LAB_00e3d7ed: ;
  puVar3 = ((undefined1 *)GEN_TOP(**(int * PTR32 *)((int)this + 0x24)));
  **(int * PTR32 *)((int)this + 0x24) = (int)(puVar3 + 1);
  *puVar3 = (char)param_1;
  return param_1;
}

/* ref: basic_stringbuf_DU_char_traits_D_std_V::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e3d810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3d810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = **(uint * PTR32 *)((int)this + 0x20);
  if ((uVar1 != 0) && (**(uint * PTR32 *)((int)this + 0x10) < uVar1)) {
    if ((param_1 == 0xffffffff) ||
       (((char)param_1 == *(char *)(uVar1 - 1) || ((*(byte *)((int)this + 0x40) & 2) == 0)))) {
      **(int * PTR32 *)((int)this + 0x30) = **(int * PTR32 *)((int)this + 0x30) + 1;
      **(int * PTR32 *)((int)this + 0x20) = **(int * PTR32 *)((int)this + 0x20) - 1;
      if (param_1 != 0xffffffff) {
        *((char *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x20))) = (char)param_1;
        return param_1;
      }
      return 0;
    }
  }
  return 0xffffffff;
}

/* ref: basic_stringbuf_DU_char_traits_D_std_V::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e3d8a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3d8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  F_00e3ce60(this GEN_EDX_FWD);
  F_00479ae0(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e3d8f0 */
GEN_FRAME uint GEN_THISCALL F_00e3d8f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3d8f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e3d900 */
GEN_FRAME uint GEN_THISCALL F_00e3d900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3d900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e3d910 */
GEN_FRAME byte GEN_THISCALL F_00e3d910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3d910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00e3d930 */
GEN_FRAME uint GEN_THISCALL F_00e3d930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3d930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e3d940 */
GEN_FRAME uint GEN_STDCALL F_00e3d940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3d940u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e3d950 */
GEN_FRAME uint GEN_STDCALL F_00e3d950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3d950u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e3d960 */
GEN_FRAME uint GEN_STDCALL F_00e3d960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3d960u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e3d980 */
GEN_FRAME uint GEN_THISCALL F_00e3d980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3d980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
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

/* ref: FUN_00e3d9b0 */
GEN_FRAME uint GEN_STDCALL F_00e3d9b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe3d9b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x40000000) && (uVar1 = F_004069f0(param_1 * 4), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e3da00 */
GEN_FRAME uint GEN_STDCALL F_00e3da00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3da00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e3da10 */
GEN_FRAME uint GEN_THISCALL F_00e3da10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe3da10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int * piVar2;
  int * piVar3;
  
  piVar3 = (int *)0x0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(int * PTR32 *)((int)this + 0x40) = param_3;
  piVar1 = param_3;
  if ((param_2 != 0) && (piVar1 = (int *)((uint)param_3 & 6), (char)piVar1 != '\x06')) {
    if ((param_2 != 0) && (piVar3 = (int *)F_004069f0(param_2), piVar3 == (int *)0x0)) {
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    }
    F_00c46aa0(piVar3,param_1,param_2);
    piVar1 = (int *)((int)piVar3 + param_2);
    *(int * PTR32 *)((int)this + 0x3c) = piVar1;
    if ((*(byte *)((int)this + 0x40) & 4) == 0) {
      **(undefined4 * PTR32 *)((int)this + 0x10) = piVar3;
      **(undefined4 * PTR32 *)((int)this + 0x20) = piVar3;
      **(int * PTR32 *)((int)this + 0x30) = param_2;
    }
    if ((*(uint *)((int)this + 0x40) & 2) == 0) {
      piVar2 = piVar1;
      if ((*(uint *)((int)this + 0x40) & 0x10) == 0) {
        piVar2 = piVar3;
      }
      **(undefined4 * PTR32 *)((int)this + 0x14) = piVar3;
      **(undefined4 * PTR32 *)((int)this + 0x24) = piVar2;
      piVar1 = *(int * PTR32 *)((int)this + 0x34);
      *piVar1 = (int)piVar3 + (param_2 - (int)piVar2);
      if (**(int * PTR32 *)((int)this + 0x20) == 0) {
        **(undefined4 * PTR32 *)((int)this + 0x10) = piVar3;
        piVar1 = *(int * PTR32 *)((int)this + 0x20);
        *piVar1 = 0;
        **(undefined4 * PTR32 *)((int)this + 0x30) = piVar3;
      }
    }
    *(uint *)((int)this + 0x40) = *(uint *)((int)this + 0x40) | 1;
  }
  return (uint)piVar1;
}

/* ref: FUN_00e3daf0 */
GEN_FRAME uint F_00e3daf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3daf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00e3db10 */
GEN_FRAME uint F_00e3db10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3db10u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00e3db40 */
GEN_FRAME uint F_00e3db40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3db40u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00e3db70 */
GEN_FRAME uint F_00e3db70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3db70u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00e3dba0 */
GEN_FRAME uint F_00e3dba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3dba0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00e3dc00 */
GEN_FRAME uint GEN_STDCALL F_00e3dc00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3dc00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00e3dc20 */
GEN_FRAME uint F_00e3dc20(unsigned int gen_a0)
{
  GEN_ENTER(0xe3dc20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e3dc30 */
GEN_FRAME uint F_00e3dc30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3dc30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e3dc40 */
GEN_FRAME uint F_00e3dc40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3dc40u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00e3dc90 */
GEN_FRAME uint GEN_THISCALL F_00e3dc90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3dc90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00e3dca0 */
GEN_FRAME uint GEN_THISCALL F_00e3dca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3dca0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00e3dcc0 */
GEN_FRAME uint GEN_THISCALL F_00e3dcc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3dcc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00e3dcd0 */
GEN_FRAME uint GEN_THISCALL F_00e3dcd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3dcd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00e3dce0 */
GEN_FRAME uint GEN_THISCALL F_00e3dce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3dce0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00e3dcf0 */
GEN_FRAME uint GEN_THISCALL F_00e3dcf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3dcf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00e3dd40 */
GEN_FRAME byte GEN_THISCALL F_00e3dd40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3dd40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00e3dd60 */
GEN_FRAME byte GEN_THISCALL F_00e3dd60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3dd60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0x3fffffff < param_1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_004069f0(param_1 * 4);
    if (uVar1 == 0) {
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    }
  }
  *(uint *)this = uVar1;
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)((int)this + 8) = uVar1 + param_1 * 4;
  return 1;
}

/* ref: FUN_00e3ddf0 */
GEN_FRAME uint GEN_THISCALL F_00e3ddf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3ddf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  F_00479880(this GEN_EDX_FWD);
  uVar2 = 0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  if ((param_2 & 1) == 0) {
    uVar2 = 4;
  }
  if ((param_2 & 2) == 0) {
    uVar2 = uVar2 | 2;
  }
  if ((param_2 & 8) != 0) {
    uVar2 = uVar2 | 8;
  }
  if ((param_2 & 4) != 0) {
    uVar2 = uVar2 | 0x10;
  }
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  F_00e3da10(this GEN_EDX_ARG,puVar1,param_1[4],uVar2);
  return (uint)this;
}

/* ref: FUN_00e3de80 */
GEN_FRAME uint F_00e3de80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe3de80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  int * piVar1;
  
  piVar1 = param_2;
  if (param_2 != param_3) {
    do {
      if (*piVar1 == *param_4) break;
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_3);
  }
  *param_1 = piVar1;
  return (uint)param_1;
}

/* ref: FUN_00e3deb0 */
GEN_FRAME uint F_00e3deb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3deb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00e3ded0 */
GEN_FRAME uint GEN_STDCALL F_00e3ded0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3ded0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00e3df10 */
GEN_NOFRAME uint GEN_THISCALL F_00e3df10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3df10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * piVar1;
  uint extraout_EAX = 0;
  
  piVar1 = (undefined *)((int)this + 0x58);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((piVar1 + *(int *)(*(int *)this + 4) - 0x58))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157814));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) =
       (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  F_00e3ce60((undefined *)((int)this + 0x10) GEN_EDX_FWD);
  F_00479ae0((undefined *)((int)this + 0x10) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((piVar1 + *(int *)(*(int *)this + 4) - 0x58))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115772c));
  *(undefined * PTR32 * PTR32 *)piVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(piVar1);
  return extraout_EAX;
}

/* ref: FUN_00e3df60 */
GEN_FRAME uint GEN_THISCALL F_00e3df60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3df60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = (int *)((int)this - 0x58);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*(int *)(*piVar1 + 4) - 0x58 + (int)this))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157814));
  *(undefined * PTR32 * PTR32 *)((int)this - 0x48) =
       (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  F_00e3ce60((undefined *)((int)this - 0x48) GEN_EDX_FWD);
  F_00479ae0((undefined *)((int)this - 0x48) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this - 0x58) + 4))) - 0x58 + (int)this))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115772c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(piVar1);
  }
  return (uint)piVar1;
}

/* ref: FUN_00e3dfd0 */
GEN_FRAME uint GEN_THISCALL F_00e3dfd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe3dfd0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00e3e030 */
GEN_NOFRAME uint GEN_THISCALL F_00e3e030(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3e030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00e3e060 */
GEN_FRAME uint GEN_THISCALL F_00e3e060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe3e060u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00e3e0c0 */
GEN_NOFRAME uint GEN_THISCALL F_00e3e0c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3e0c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00e3e0f0 */
GEN_FRAME uint GEN_THISCALL F_00e3e0f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe3e0f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00e3e150 */
GEN_NOFRAME uint GEN_THISCALL F_00e3e150(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3e150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00e3e180 */
GEN_FRAME uint GEN_THISCALL F_00e3e180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe3e180u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00e3e1e0 */
GEN_NOFRAME uint GEN_THISCALL F_00e3e1e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3e1e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00e3e210 */
GEN_FRAME uint GEN_THISCALL F_00e3e210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3e210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x3fffffff < param_1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar3 = param_1;
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2) < param_1) {
    uVar4 = 0;
    if (param_1 != 0) {
      uVar4 = F_004069f0(param_1 * 4);
      if (uVar4 == 0) {
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
        F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      }
    }
    F_00c46e20(uVar4,*(int *)this,(*(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2) * 4);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00406ad0(iVar1);
    }
    uVar3 = uVar4 + param_1 * 4;
    *(uint *)this = uVar4;
    *(uint *)((int)this + 8) = uVar3;
    *(uint *)((int)this + 4) = uVar4 + (iVar2 - iVar1 >> 2) * 4;
  }
  return uVar3;
}

/* ref: FUN_00e3e2c0 */
GEN_FRAME unsigned int F_00e3e2c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3e2c0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e3e2f0 */
GEN_NOFRAME uint GEN_THISCALL F_00e3e2f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3e2f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00e3e320 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3e320(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3e320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return;
}

/* ref: FUN_00e3e350 */
GEN_NOFRAME uint GEN_THISCALL F_00e3e350(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3e350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00e3e380 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3e380(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3e380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return;
}

/* ref: FUN_00e3e3b0 */
GEN_NOFRAME uint GEN_THISCALL F_00e3e3b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3e3b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00e3e3e0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3e3e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3e3e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return;
}

/* ref: FUN_00e3e410 */
GEN_NOFRAME uint GEN_THISCALL F_00e3e410(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3e410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00e3e440 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3e440(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3e440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return;
}

/* ref: FUN_00e3e470 */
GEN_FRAME uint GEN_THISCALL F_00e3e470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3e470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (0x3fffffffU - param_1 < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (0x3fffffff - (uVar2 >> 1) < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00e3e210(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00e3e210(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00e3e4e0 */
GEN_FRAME unsigned int F_00e3e4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3e4e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e3e510 */
GEN_FRAME uint GEN_THISCALL F_00e3e510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe3e510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  if (param_3 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x1157818);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[1])REFP(0x1091064));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115772c));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  F_00483f60(((undefined *)GEN_TOP((*(int *)(*(int *)this + 4) + (int)this))) GEN_EDX_FWD,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00e3e560 */
GEN_FRAME uint GEN_THISCALL F_00e3e560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3e560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00e3c720(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e3e590 */
GEN_FRAME uint GEN_THISCALL F_00e3e590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3e590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00e3e470(this GEN_EDX_FWD,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00e3e470(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00e3e600 */
GEN_FRAME uint GEN_THISCALL F_00e3e600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe3e600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * this_00;
  uint uVar1;
  undefined4 * puVar2;
  
  if (param_3 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x1157820);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[1])REFP(0x1091064));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115772c));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  this_00 = (undefined4 *)((int)this + 0x10);
  F_00483f60(((undefined *)GEN_TOP((*(int *)(*(int *)this + 4) + (int)this))) GEN_EDX_FWD,this_00,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157814));
  F_00479880(this_00 GEN_EDX_ARG);
  *this_00 = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  uVar1 = 0;
  if ((param_2 & 2) == 0) {
    uVar1 = 2;
  }
  if ((param_2 & 8) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_2 & 4) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  puVar2 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar2 = (undefined4 *)*param_1;
  }
  F_00e3da10(this_00 GEN_EDX_ARG,puVar2,param_1[4],uVar1);
  return (uint)this;
}

/* ref: FUN_00e3e6b0 */
GEN_FRAME unsigned int GEN_STDCALL F_00e3e6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3e6b0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e3e6e0 */
GEN_FRAME uint GEN_THISCALL F_00e3e6e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3e6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  byte bVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  bVar2 = F_00e3dd60(this GEN_EDX_FWD,param_1[1] - *param_1 >> 2);
  if (bVar2 != 0) {
    puVar1 = (undefined4 *)param_1[1];
    puVar4 = *(undefined4 * PTR32 *)this;
    for (puVar3 = (undefined4 *)*param_1; puVar3 != puVar1; puVar3 = puVar3 + 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *puVar3;
      }
      puVar4 = puVar4 + 1;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar4;
  }
  return (uint)this;
}

/* ref: FUN_00e3e750 */
GEN_FRAME unsigned int GEN_THISCALL F_00e3e750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3e750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xc))(param_1 GEN_EDX_FWD,param_2);
    if (*(int *)((int)this + 0x350) != 0) {
      ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,param_2,*(int *)((int)this + 0x350));
    }
  }
  return;
}

/* ref: FUN_00e3e790 */
GEN_FRAME unsigned int GEN_THISCALL F_00e3e790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3e790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x4c))(param_1 GEN_EDX_FWD,*param_2);
    if (*(int *)((int)this + 0x350) != 0) {
      ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x50))(param_1 GEN_EDX_ARG,*param_2,*(int *)((int)this + 0x350));
    }
  }
  return;
}

/* ref: FUN_00e3e7d0 */
GEN_NOFRAME byte GEN_THISCALL F_00e3e7d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3e7d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 8) != 0;
}

/* ref: FUN_00e3e7e0 */
GEN_FRAME byte GEN_THISCALL F_00e3e7e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3e7e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  __time64_t _Var2;
  ulonglong uVar3;
  
  _Var2 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x28) = (int)_Var2;
  uVar3 = F_00427d90();
  *(ulonglong *)((int)this + 0x30) = uVar3;
  uVar3 = F_00427e30();
  *(ulonglong *)((int)this + 0x38) = uVar3;
  if (*(int *)((int)this + 8) == 0) {
    this_00 = (undefined *)F_00406b90(0xe0,0,0);
    if (this_00 == (undefined *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = F_00e47780(this_00 GEN_EDX_ARG,param_1);
    }
    *(uint *)((int)this + 8) = uVar1;
    *(undefined4 *)((int)this + 0x340) = param_2;
  }
  return *(int *)((int)this + 8) != 0;
}

/* ref: FUN_00e3e850 */
GEN_NOFRAME byte GEN_THISCALL F_00e3e850(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3e850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,1);
    *(undefined4 *)((int)this + 8) = 0;
  }
  return 1;
}

/* ref: FUN_00e3e870 */
GEN_NOFRAME byte GEN_THISCALL F_00e3e870(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3e870u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  if (*(int *)(in_ecx + 8) == 0) {
    return 0;
  }
  iVar1 = *((int *)GEN_TOP((*(int *)(in_ecx + 8) + 0xc0)));
  if (((iVar1 != 3) && (iVar1 != 4)) && (iVar1 != 5)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00e3e8c0 */
GEN_FRAME uint GEN_THISCALL F_00e3e8c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3e8c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  uVar4 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if ((uVar4 != 0) && (*(undefined4 *)(uVar4 + 0xc0) = 5, (*(int * PTR32 *)&gen_args[1]) != (int *)0x0)) {
    iVar2 = *(*(int * PTR32 *)&gen_args[1]);
    iVar1 = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1d0;
    (*(int * PTR32 *)&gen_args[1]) = (int *)(uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)));
    ((code *)*(gen_code32 *)(iVar2 + 0x1c))(piVar3,iVar1);
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x350))) != 0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x20))(piVar3 GEN_EDX_ARG,iVar1,*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x350))));
    }
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3 GEN_EDX_ARG,iVar1,&(*(int * PTR32 *)&gen_args[1]));
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x350))) != 0) {
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3 GEN_EDX_ARG,iVar1,&(*(int * PTR32 *)&gen_args[1]),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x350))));
    }
  }
  return uVar4;
}

/* ref: FUN_00e3e940 */
GEN_FRAME unsigned int GEN_THISCALL F_00e3e940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3e940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  
  if (((*(int *)((int)this + 8) != 0) && (param_1 != (int *)0x0)) &&
     (*(int *)((int)this + 0x350) != 0)) {
    iVar1 = (int)this + 0x1e0;
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x38))(param_1 GEN_EDX_FWD,iVar1);
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x3c))(param_1 GEN_EDX_ARG,iVar1,(int)this + 0x1f0);
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x40))
              (param_1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x20),iVar1,(int)this + 0x1f0,(int)this + 0x200);
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x34))
              (param_1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x20),iVar1,(int)this + 0x1f0,(int)this + 0x200,
               (int)this + 0x210,(int)this + 0x224);
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x44))
              (param_1 GEN_EDX_ARG,*(undefined4 *)((int)this + 0x20),iVar1,(int)this + 0x1f0,(int)this + 0x224,
               *(undefined4 *)((int)this + 0x350));
  }
  return;
}

/* ref: FUN_00e3ea00 */
GEN_FRAME unsigned int GEN_THISCALL F_00e3ea00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3ea00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if (((*(int *)((int)this + 8) != 0) && (param_1 != (int *)0x0)) &&
     (*(int *)((int)this + 0x350) != 0)) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x48))(param_1 GEN_EDX_FWD,(int)this + 0x1f0,*(int *)((int)this + 0x350));
  }
  return;
}

/* ref: FUN_00e3ea40 */
GEN_FRAME unsigned int GEN_THISCALL F_00e3ea40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3ea40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if ((*(int *)((int)this + 8) != 0) && (param_1 != (int *)0x0)) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x5c))(param_1 GEN_EDX_FWD,(int)this + 0x23c);
    if (*(int *)((int)this + 0x350) != 0) {
      ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x60))(param_1 GEN_EDX_ARG,(int)this + 0x23c,*(int *)((int)this + 0x350));
    }
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x54))(param_1 GEN_EDX_ARG,0);
    if (*(int *)((int)this + 0x350) != 0) {
      ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x58))(param_1 GEN_EDX_ARG,0,*(int *)((int)this + 0x350));
    }
  }
  return;
}

/* ref: FUN_00e3eab0 */
GEN_FRAME unsigned int GEN_THISCALL F_00e3eab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3eab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  if ((*(int *)((int)this + 8) != 0) && (param_2 != (int *)0x0)) {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 1: ;
      ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 100))(param_2 GEN_EDX_FWD,(int)this + 0x22c);
      if (*(int *)((int)this + 0x350) != 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x68))(param_2 GEN_EDX_ARG,(int)this + 0x22c,*(int *)((int)this + 0x350));
        return;
      }
      break;
    case 2: ;
      ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x6c))(param_2 GEN_EDX_ARG,(int)this + 0x22c);
      if (*(int *)((int)this + 0x350) != 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x70))(param_2 GEN_EDX_ARG,(int)this + 0x22c,*(int *)((int)this + 0x350));
        return;
      }
      break;
    case 3: ;
      ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x80))(param_2 GEN_EDX_ARG,(int)this + 0x22c);
      if (*(int *)((int)this + 0x350) != 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x84))(param_2 GEN_EDX_ARG,(int)this + 0x22c,*(int *)((int)this + 0x350));
        return;
      }
      break;
    case 4: ;
      ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x78))(param_2 GEN_EDX_ARG,(int)this + 0x22c);
      if (*(int *)((int)this + 0x350) != 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x7c))(param_2 GEN_EDX_ARG,(int)this + 0x22c,*(int *)((int)this + 0x350));
        return;
      }
      break;
    case 5: ;
      break;
    case 6: ;
      ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x88))(param_2 GEN_EDX_ARG,(int)this + 0x1e0,(int)this + 0x210);
      if (*(int *)((int)this + 0x350) != 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x8c))
                  (param_2 GEN_EDX_ARG,(int)this + 0x1e0,(int)this + 0x210,*(int *)((int)this + 0x350));
      }
      break;
    case 7: ;
      if (*(int *)((int)this + 0x350) != 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x74))(param_2 GEN_EDX_ARG,(int)this + 0x22c,*(int *)((int)this + 0x350));
        return;
      }
      break;
    default: ;
      goto switchD_00e3eada_default;
    }
  }
switchD_00e3eada_default: ;
  return;
}

/* ref: FUN_00e3ec70 */
GEN_FRAME uint F_00e3ec70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3ec70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  if ((*(int *)(param_2 + 0x10) != 3) && (*(int *)(param_2 + 0x10) != 5)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00e3ec90 */
GEN_FRAME uint GEN_THISCALL F_00e3ec90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe3ec90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00e3c0b0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined1 *)((int)this + 0x10) = (undefined1)param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[40])REFP(0x115785c))
  ;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined1 *)((int)this + 0x11) = 0;
  return (uint)this;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::OperationStep::vf3 */
GEN_FRAME uint GEN_THISCALL F_00e3ecd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3ecd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0xc))))(*(int * PTR32 *)(this + 8) GEN_EDX_FWD,param_1);
  uVar1 = 0;
  if (*(int *)(this + 0xc) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x10))))
                      (*(int * PTR32 *)(this + 8) GEN_EDX_ARG,param_1,*(int *)(this + 0xc));
  }
  return uVar1;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::OperationStep::vf1 */
GEN_FRAME uint GEN_THISCALL F_00e3ed00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3ed00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 4))))(*(int * PTR32 *)(this + 8) GEN_EDX_FWD,param_1);
  uVar1 = 0;
  if (*(int *)(this + 0xc) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 8))))
                      (*(int * PTR32 *)(this + 8) GEN_EDX_ARG,param_1,*(int *)(this + 0xc));
  }
  return uVar1;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::InitOperationStep::vf39 */
GEN_FRAME byte GEN_THISCALL F_00e3ed30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3ed30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  
  if (this[0x10] != (undefined1)0x0) {
    this[0x11] = (undefined1)0x1;
    bVar1 = F_00e3e7e0(param_1 GEN_EDX_FWD,this + 0x14,*(undefined4 *)(this + 8));
    return bVar1;
  }
  bVar1 = F_00e3e7e0(param_1 GEN_EDX_ARG,this + 0x14,this);
  return bVar1;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::InitOperationStep::vf5 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3ed70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3ed70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined1 *)(in_ecx + 0x11) = 1;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::LobbyLoginOperationStep::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3ed80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3ed80u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(undefined1 *)(in_ecx + 0x11) = 1;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::ServiceLoginOperationStep::vf14 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3ed90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3ed90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined1 *)(in_ecx + 0x11) = 1;
  return;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::GameLoginOperationStep::vf21 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3eda0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3eda0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined1 *)(in_ecx + 0x11) = 1;
  return;
}

/* ref: FUN_00e3edb0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e3edb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3edb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,1);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  return;
}

/* ref: FUN_00e3edd0 */
GEN_FRAME byte GEN_THISCALL F_00e3edd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3edd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0xc) == 0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD);
    *(uint *)((int)this + 0xc) = uVar1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00e3ee00 */
GEN_FRAME byte GEN_THISCALL F_00e3ee00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3ee00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,1);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
  *(uint *)((int)this + 0x10) = uVar2;
  return 1;
}

/* ref: FUN_00e3ee30 */
GEN_NOFRAME byte GEN_STDCALL F_00e3ee30(unsigned int gen_a0)
{
  GEN_ENTER(0xe3ee30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 1;
}

/* ref: FUN_00e3ee40 */
GEN_FRAME byte GEN_STDCALL F_00e3ee40(unsigned int gen_a0)
{
  GEN_ENTER(0xe3ee40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return ~*(byte *)(param_1 + 8) & 1;
}

/* ref: FUN_00e3ee60 */
GEN_FRAME uint F_00e3ee60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe3ee60u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  (*(uint *)(gen_frame + 0xb8)) = uVar1;
  if (param_1 != (int *)0x0) {
    F_00e3bd90(((undefined4 *)(gen_frame + 0x54)) GEN_EDX_ARG);
    (*(undefined4 *)(gen_frame + 0x5c)) = 6;
    ((undefined4 *)(gen_frame + 0x54))[0] = 0x7d2;
    F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,"TIMEOUT",REFG(undefined4, 0x108cc50));
    F_0042ccf0(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    (*(undefined2 *)(gen_frame + 0xb4)) = 0x32c9;
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xc))(param_1 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x54)));
    if (param_2 != 0) {
      ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x54)),param_2);
    }
    uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x60)) GEN_EDX_ARG);
    uVar1 = (uint)uVar2;
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00e3ef10 */
GEN_FRAME byte GEN_THISCALL F_00e3ef10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3ef10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  undefined * this_00;
  uint uVar2;
  __time64_t _Var3;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  _Var3 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x28) = (int)_Var3;
  uVar4 = F_00427d90();
  *(ulonglong *)((int)this + 0x30) = uVar4;
  uVar4 = F_00427e30();
  *(ulonglong *)((int)this + 0x38) = uVar4;
  F_00e37370(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  (*(undefined2 *)(gen_frame + 0x64)) = 0;
  F_00e36790((undefined *)((int)this + 0x54) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
  *(undefined1 *)((int)this + 0xac) = (undefined1)(*(undefined2 *)(gen_frame + 0x64));
  *(undefined1 *)((int)this + 0xad) = (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x64)) + 1));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  if (*(int *)((int)this + 8) == 0) {
    this_00 = (undefined *)F_00406b90(0xe0,0,0);
    if (this_00 == (undefined *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_00e47780(this_00 GEN_EDX_ARG,param_1);
    }
    *(uint *)((int)this + 8) = uVar2;
  }
  iVar1 = *(int *)((int)this + 8);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return iVar1 != 0;
}

/* ref: FUN_00e3efd0 */
GEN_FRAME byte GEN_THISCALL F_00e3efd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe3efd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  __time64_t _Var2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  _Var2 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 0x28) = (int)_Var2;
  uVar3 = F_00427d90();
  *(ulonglong *)((int)this + 0x30) = uVar3;
  uVar3 = F_00427e30();
  *(ulonglong *)((int)this + 0x38) = uVar3;
  F_00e37370(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1);
  (*(undefined1 *)(gen_frame + 0x65)) = (undefined1)param_3;
  (*(undefined1 *)(gen_frame + 0x64)) = (undefined1)param_2;
  F_00e36790((undefined *)((int)this + 0x54) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)));
  *(undefined1 *)((int)this + 0xad) = (*(undefined1 *)(gen_frame + 0x65));
  *(undefined1 *)((int)this + 0xac) = (*(undefined1 *)(gen_frame + 0x64));
  F_0042c880(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  bVar1 = F_00e3e7e0(this GEN_EDX_ARG,(undefined *)((int)this + 0x54),param_4);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_00e3f120 */
GEN_NOFRAME byte GEN_THISCALL F_00e3f120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3f120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  if ((*(byte *)(param_1 + 8) & 0xfe) == 0) {
    F_00e3c860((undefined *)((int)this + 0x210) GEN_EDX_FWD);
    F_00e3bef0((undefined *)((int)this + 0x210) GEN_EDX_ARG,(uint)*(ushort *)(param_1 + 0x10));
  }
  (*(byte *)(gen_frame + 0xf)) = 0;
  if (*(char *)(param_1 + 9) != '\0') {
    do {
      uVar3 = (uint)(*(byte *)(gen_frame + 0xf));
      iVar1 = param_1 + 0x20 + uVar3 * 0x38;
      if (*(int *)(param_1 + 0x28 + uVar3 * 0x38) != 0 ||
          *(int *)(param_1 + 0x2c + uVar3 * 0x38) != 0) {
        F_00e3bde0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,iVar1);
        F_00e3ca10((undefined *)((int)this + 0x210) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
        (*(int * PTR32 *)(gen_frame + 0x8)) = *(int * PTR32 *)((int)this + 0x1e0);
        uVar3 = *(int *)((int)this + 0x1e4) - (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x8))) >> 2;
        uVar4 = 0;
        if (uVar3 != 0) {
          do {
            if ((*(int *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8) == *(int *)(iVar1 + 8)) &&
               (*(int *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0xc) == *(int *)(iVar1 + 0xc))) {
              F_00e3bde0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,iVar1);
              F_00e3c8a0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x1e0) + uVar4 * 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
              break;
            }
            (*(int * PTR32 *)(gen_frame + 0x8)) = (*(int * PTR32 *)(gen_frame + 0x8)) + 1;
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar3);
        }
      }
      (*(byte *)(gen_frame + 0xf)) = (*(byte *)(gen_frame + 0xf)) + 1;
    } while ((*(byte *)(gen_frame + 0xf)) < *(byte *)(param_1 + 9));
  }
  bVar2 = *(byte *)(param_1 + 8);
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50) GEN_EDX_ARG);
  return ~bVar2 & 1;
}

/* ref: FUN_00e3f250 */
GEN_NOFRAME byte GEN_THISCALL F_00e3f250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3f250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x2e0];
  undefined4 * puVar1;
  code * pcVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x2cc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2d0);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x1157cc0));
  F_00e42cc0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_FWD,param_1);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
  }
  pcVar2 = (code *)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[1];
  *(undefined4 *)((int)this + 0x10) = 0;
  uVar3 = (*pcVar2)(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  *(uint *)((int)this + 0x10) = uVar3;
  F_00efc530(((undefined1 *)(gen_frame + 0x210)) GEN_EDX_ARG);
  F_00e5bc00(((undefined1 *)(gen_frame + 0x1e8)) GEN_EDX_ARG);
  F_00f36370(((undefined1 *)(gen_frame + 0x100)) GEN_EDX_ARG);
  F_00e75880(((undefined1 *)(gen_frame + 0xd0)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x7c)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x28)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x2cc)) ^ (uint)(uint)(gen_frame + 0x2d0) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00e3f320 */
GEN_FRAME byte GEN_THISCALL F_00e3f320(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe3f320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int * piVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 0x1b8) != 0) {
    piVar2 = (int *)F_00e45140(&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x1b4),
                                 *(undefined4 * PTR32 *)((int)this + 0x1b4),((code *)REFP(0xe3ec70)));
    iVar1 = *piVar2;
    if (iVar1 != *(int *)((int)this + 0x1b4)) {
      piVar2 = *(int * PTR32 *)(iVar1 + 0x10);
      if (piVar2 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2 GEN_EDX_ARG,1);
      }
      F_00e44700((undefined *)((int)this + 0x1b0) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),iVar1);
    }
    if (*(int *)((int)this + 0x1b8) != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00e3f390 */
GEN_FRAME byte GEN_THISCALL F_00e3f390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3f390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 * this_00;
  
  if ((*(int *)((int)this + 8) != 0) &&
     (((iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 0xc0))), iVar1 == 3 || (iVar1 == 4)) ||
      (iVar1 == 5)))) {
    bVar3 = F_00e3f320(this GEN_EDX_FWD);
    if (bVar3 == 0) {
      *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
      uVar2 = *(undefined4 *)((int)this + 0x18);
      this_00 = (undefined4 *)F_00406b90(0xe0,0,0);
      if (this_00 == (undefined4 *)0x0) {
        this_00 = (undefined4 *)0x0;
      }
      else {
        F_00e4f8f0(this_00 GEN_EDX_ARG,this,uVar2,param_2,*(undefined4 *)((int)this + 0x348));
        *this_00 = (*(undefined * PTR32 (*)[5])REFP(0x1157900));
        F_0042cbc0(this_00 + 0xe GEN_EDX_ARG,param_1);
        F_0042cbc0(this_00 + 0x23 GEN_EDX_ARG,param_1 + 0x54);
      }
      (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = this_00;
      F_00e45a40((undefined *)((int)this + 0x1b0) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x14)));
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00e3f450 */
GEN_FRAME byte GEN_THISCALL F_00e3f450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe3f450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined * pvVar6;
  uint uVar7;
  __time64_t _Var8;
  
  (*(uint *)(gen_frame + 0x168)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x16c);
  (*(uint *)(gen_frame + 0xbc)) = param_2;
  (*(undefined4 *)(gen_frame + 0xb4)) = param_3;
  _Var8 = F_00c4b7c2((__time64_t *)0x0);
  if ((900 < (uint)((int)_Var8 - *(int *)((int)this + 0x28))) &&
     (puVar1 = *(undefined4 * PTR32 *)((int)this + 8), puVar1 != (undefined4 *)0x0)) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 8) = 0;
  }
  F_0042cbc0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,param_2);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG,param_1);
  F_0042cbc0(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
  F_0042cbc0(((undefined1 *)(gen_frame + 0x114)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x5c)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_0042ccf0((undefined *)((int)this + 0xb0) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc0)));
  F_0042ccf0((undefined *)((int)this + 0x104) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x114)));
  F_0042c880(((undefined1 *)(gen_frame + 0x114)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0xc0)) GEN_EDX_ARG);
  iVar2 = *(int *)((int)this + 8);
  if (((iVar2 == 0) ||
      (((iVar3 = *(int *)(iVar2 + 0xc0), iVar3 != 3 && (iVar3 != 4)) && (iVar3 != 5)))) &&
     (*(int *)((int)this + 0x44) == *(int *)((int)this + 0x48))) {
    *(undefined4 *)((int)this + 0x40) = 0;
    pvVar6 = (undefined *)F_004069f0(0x70);
    if (pvVar6 == (undefined *)0x0) {
      (*(uint *)(gen_frame + 0xbc)) = 0;
    }
    else {
      uVar7 = F_00e42df0(pvVar6 GEN_EDX_ARG,(int)this + 0x54,(*(undefined4 *)(gen_frame + 0xb4)),0,*(undefined4 *)((int)this + 0x350));
      (*(uint *)(gen_frame + 0xbc)) = uVar7;
    }
    F_00e457a0((undefined *)((int)this + 0x44) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0xbc)));
    pvVar6 = (undefined *)F_004069f0(0xbc);
    if (pvVar6 == (undefined *)0x0) {
      (*(uint *)(gen_frame + 0xbc)) = 0;
    }
    else {
      uVar7 = F_00e42e60(pvVar6 GEN_EDX_ARG,(undefined *)((int)this + 0xb0),(*(undefined4 *)(gen_frame + 0xb4)),1,
                           *(undefined4 *)((int)this + 0x350));
      (*(uint *)(gen_frame + 0xbc)) = uVar7;
    }
    F_00e457a0((undefined *)((int)this + 0x44) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0xbc)));
    uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x44))) + 0x9c))))
                      (((int *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x44))) GEN_EDX_ARG,this);
    F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c) GEN_EDX_ARG);
    return (byte)uVar7;
  }
  if ((iVar2 != 0) &&
     (((iVar2 = *(int *)(iVar2 + 0xc0), iVar2 == 3 || (iVar2 == 4)) || (iVar2 == 5)))) {
    bVar5 = F_00e3f320(this GEN_EDX_ARG);
    if (bVar5 == 0) {
      *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
      uVar4 = *(undefined4 *)((int)this + 0x18);
      pvVar6 = (undefined *)F_00406b90(0xe0,0,0);
      if (pvVar6 == (undefined *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = F_00e41810(pvVar6 GEN_EDX_ARG,this,uVar4,(*(undefined4 *)(gen_frame + 0xb4)),*(undefined4 *)((int)this + 0x348),param_1,
                             (*(uint *)(gen_frame + 0xbc)));
      }
      (*(uint *)(gen_frame + 0xbc)) = uVar7;
      (*(undefined4 *)(gen_frame + 0xb8)) = uVar4;
      F_00e45a40((undefined *)((int)this + 0x1b0) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xb0)),&(*(undefined4 *)(gen_frame + 0xb8)));
      F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c) GEN_EDX_ARG);
      return 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x168)) ^ (uint)(uint)(gen_frame + 0x16c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00e3f6d0 */
GEN_FRAME byte GEN_THISCALL F_00e3f6d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3f6d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 * puVar4;
  
  if ((*(int *)((int)this + 8) != 0) &&
     (((iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 0xc0))), iVar1 == 3 || (iVar1 == 4)) ||
      (iVar1 == 5)))) {
    bVar3 = F_00e3f320(this GEN_EDX_FWD);
    if (bVar3 == 0) {
      *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
      puVar4 = *(undefined4 * PTR32 *)((int)this + 0x14);
      uVar2 = *(undefined4 *)((int)this + 0x18);
      if (puVar4 != (undefined4 *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)*puVar4)(puVar4 GEN_EDX_ARG,1);
      }
      *(undefined4 *)((int)this + 0x14) = 0;
      *(undefined4 *)((int)this + 0x14) = *param_1;
      puVar4 = (undefined4 *)F_00406b90(0x38,0,0);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        F_00e4f8f0(puVar4 GEN_EDX_ARG,this,uVar2,param_2,*(undefined4 *)((int)this + 0x348));
        *puVar4 = (*(undefined * PTR32 (*)[5])REFP(0x1157948));
      }
      (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar4;
      F_00e45a40((undefined *)((int)this + 0x1b0) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x14)));
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00e3f790 */
GEN_FRAME byte GEN_THISCALL F_00e3f790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3f790u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined * pvVar5;
  undefined4 * puVar6;
  __time64_t _Var7;
  
  _Var7 = F_00c4b7c2((__time64_t *)0x0);
  if ((900 < (uint)((int)_Var7 - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))))) &&
     (puVar6 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))), puVar6 != (undefined4 *)0x0)) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar6)(puVar6 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))) = uVar4;
  if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) &&
     (((iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0xc0))), iVar1 == 3 || (iVar1 == 4)) ||
      (iVar1 == 5)))) {
    bVar3 = F_00e3f6d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))),(*(undefined4 * PTR32 *)&gen_args[2]));
    return bVar3;
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48)))) {
    return 0;
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = 0;
  pvVar5 = (undefined *)F_004069f0(0x70);
  uVar2 = (*(undefined4 * PTR32 *)&gen_args[2]);
  if (pvVar5 == (undefined *)0x0) {
    (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
  }
  else {
    (*(int * PTR32 *)&gen_args[1]) = (int *)F_00e42df0(pvVar5 GEN_EDX_ARG,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54,(*(undefined4 * PTR32 *)&gen_args[2]),0,
                                  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x350))));
  }
  F_00e457a0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[1]));
  pvVar5 = (undefined *)F_004069f0(0xbc);
  if (pvVar5 == (undefined *)0x0) {
    (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
  }
  else {
    (*(int * PTR32 *)&gen_args[1]) = (int *)F_00e42e60(pvVar5 GEN_EDX_ARG,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb0,uVar2,0,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x350)))
                                 );
  }
  F_00e457a0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[1]));
  pvVar5 = (undefined *)F_004069f0(0x68);
  if (pvVar5 == (undefined *)0x0) {
    (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
  }
  else {
    (*(int * PTR32 *)&gen_args[1]) = (int *)F_00e42ee0(pvVar5 GEN_EDX_ARG,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x158,uVar2,0,
                                  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x350))));
  }
  F_00e457a0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[1]));
  puVar6 = (undefined4 *)F_004069f0(0x18);
  if (puVar6 == (undefined4 *)0x0) {
    (*(undefined4 * PTR32 *)&gen_args[2]) = (undefined4 *)0x0;
  }
  else {
    uVar2 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x350)));
    F_00e3c0b0(puVar6 GEN_EDX_ARG);
    puVar6[1] = 3;
    puVar6[2] = (*(undefined4 * PTR32 *)&gen_args[2]);
    puVar6[3] = uVar2;
    *(undefined2 *)(puVar6 + 4) = 1;
    *puVar6 = (*(undefined * PTR32 (*)[40])REFP(0x1157b74));
    puVar6[5] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a8)));
    (*(undefined4 * PTR32 *)&gen_args[2]) = puVar6;
  }
  F_00e457a0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2]));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))))) + 0x9c))))
                    (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))))) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[0]));
  return (byte)uVar4;
}

/* ref: FUN_00e3f950 */
GEN_FRAME byte GEN_THISCALL F_00e3f950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3f950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  undefined4 uVar1;
  byte bVar2;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  (*(undefined1 *)(gen_frame + 0x8)) = *param_1;
  (*(undefined2 *)(gen_frame + 0xa)) = *(undefined2 *)(param_1 + 2);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_1 + 0xc);
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_1 + 0x10);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[2])REFP(0x1157960));
  (*(undefined4 *)(gen_frame + 0x1c)) = uVar1;
  F_0042cbc0(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_FWD,param_1 + 0x18);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG,param_1 + 0x6c);
  bVar2 = F_00e3f790(this GEN_EDX_ARG,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),param_2);
  F_0042c880(((undefined1 *)(gen_frame + 0x74)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc) GEN_EDX_ARG);
  return bVar2;
}

/* ref: FUN_00e3fa10 */
GEN_FRAME byte GEN_THISCALL F_00e3fa10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe3fa10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 * this_00;
  
  if ((*(int *)((int)this + 8) != 0) &&
     (((iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 0xc0))), iVar1 == 3 || (iVar1 == 4)) ||
      (iVar1 == 5)))) {
    bVar3 = F_00e3f320(this GEN_EDX_FWD);
    if (bVar3 == 0) {
      *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
      uVar2 = *(undefined4 *)((int)this + 0x18);
      this_00 = (undefined4 *)F_00406b90(0x40,0,0);
      if (this_00 == (undefined4 *)0x0) {
        this_00 = (undefined4 *)0x0;
      }
      else {
        F_00e4f8f0(this_00 GEN_EDX_ARG,this,uVar2,param_2,*(undefined4 *)((int)this + 0x34c));
        *this_00 = (*(undefined * PTR32 (*)[5])REFP(0x1157930));
      }
      (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = this_00;
      F_00e45a40((undefined *)((int)this + 0x1b0) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x14)));
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00e3fab0 */
GEN_FRAME byte GEN_THISCALL F_00e3fab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3fab0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined * pvVar4;
  undefined4 * puVar5;
  uint uVar6;
  __time64_t _Var7;
  
  _Var7 = F_00c4b7c2((__time64_t *)0x0);
  if ((900 < (uint)((int)_Var7 - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))))) &&
     (puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))), puVar5 != (undefined4 *)0x0)) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar5)(puVar5 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1ac))) = (*(undefined4 * PTR32 *)&gen_args[1]);
  if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) &&
     (((iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0xc0))), iVar1 == 3 || (iVar1 == 4)) ||
      (iVar1 == 5)))) {
    bVar3 = F_00e3fa10((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1ac))),(*(undefined4 * PTR32 *)&gen_args[1]));
    return bVar3;
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48)))) {
    return 0;
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = 0;
  pvVar4 = (undefined *)F_004069f0(0x70);
  uVar2 = (*(undefined4 * PTR32 *)&gen_args[1]);
  if (pvVar4 == (undefined *)0x0) {
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  }
  else {
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)
              F_00e42df0(pvVar4 GEN_EDX_ARG,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54,(*(undefined4 * PTR32 *)&gen_args[1]),0,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x350))));
  }
  F_00e457a0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[1]));
  pvVar4 = (undefined *)F_004069f0(0xbc);
  if (pvVar4 == (undefined *)0x0) {
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  }
  else {
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)
              F_00e42e60(pvVar4 GEN_EDX_ARG,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb0,uVar2,0,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x350))));
  }
  F_00e457a0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[1]));
  pvVar4 = (undefined *)F_004069f0(0x68);
  if (pvVar4 == (undefined *)0x0) {
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  }
  else {
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)
              F_00e42ee0(pvVar4 GEN_EDX_ARG,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x158,uVar2,0,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x350))));
  }
  F_00e457a0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[1]));
  puVar5 = (undefined4 *)F_004069f0(0x18);
  if (puVar5 == (undefined4 *)0x0) {
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  }
  else {
    F_00e3c0b0(puVar5 GEN_EDX_ARG);
    puVar5[1] = 3;
    puVar5[2] = uVar2;
    puVar5[3] = 0;
    *(undefined2 *)(puVar5 + 4) = 1;
    *puVar5 = (*(undefined * PTR32 (*)[40])REFP(0x1157c1c));
    puVar5[5] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1ac)));
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar5;
  }
  F_00e457a0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[1]));
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))))) + 0x9c))))
                    (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))))) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[0]));
  return (byte)uVar6;
}

/* ref: Global::ReadServiceAccountList */
GEN_FRAME byte GEN_THISCALL F_00e3fc70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3fc70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * PTR32 * ppuVar1;
  undefined4 * PTR32 * ppuVar2;
  byte bVar3;
  undefined4 * puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  
  *(undefined1 *)((int)this + 0x1c) = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)((int)this + 0x1d) = *(undefined1 *)(param_1 + 0xb);
  if ((*(byte *)(param_1 + 8) & 0xfe) == 0) {
    F_00e3c6c0((undefined *)((int)this + 0x1d0) GEN_EDX_FWD);
  }
  (*(byte *)(gen_frame + 0xb)) = 0;
  if (*(char *)(param_1 + 9) != '\0') {
    do {
      puVar4 = (undefined4 *)F_004069f0(0x50);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar8 = (undefined4 *)(param_1 + 0x10 + (uint)(*(byte *)(gen_frame + 0xb)) * 0x50);
        puVar9 = puVar4;
        for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 - 1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
      }
      ppuVar1 = *(undefined4 * PTR32 * PTR32 *)((int)this + 0x1d4);
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar4;
      if ((&(*(undefined4 * PTR32 *)(gen_frame + 0x4)) < ppuVar1) &&
         (ppuVar2 = *(undefined4 * PTR32 * PTR32 *)((int)this + 0x1d0), ppuVar2 <= &(*(undefined4 * PTR32 *)(gen_frame + 0x4)))) {
        if (ppuVar1 == *(undefined4 * PTR32 * PTR32 *)((int)this + 0x1d8)) {
          uVar5 = (int)ppuVar1 - (int)((int)(uintptr_t)ppuVar2) >> 2;
          if (0x3ffffffe < uVar5) {
LAB_00e3fde0: ;
                    
            F_00c4579a("vector<T> too long");
          }
          uVar5 = uVar5 + 1;
          uVar7 = (int)*(undefined4 * PTR32 * PTR32 *)((int)this + 0x1d8) - (int)((int)(uintptr_t)ppuVar2) >> 2;
          if (uVar7 < uVar5) {
            if (0x3fffffff - (uVar7 >> 1) < uVar7) {
              uVar7 = 0;
            }
            else {
              uVar7 = uVar7 + (uVar7 >> 1);
            }
            if (uVar7 < uVar5) {
              uVar7 = uVar5;
            }
            F_00e44dd0((undefined *)((int)this + 0x1d0) GEN_EDX_ARG,uVar7);
          }
        }
        if (*(undefined4 * PTR32 *)((int)this + 0x1d4) != (undefined4 *)0x0) {
          **(undefined4 * PTR32 *)((int)this + 0x1d4) =
               *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1d0) + ((int)&(*(undefined4 * PTR32 *)(gen_frame + 0x4)) - (int)((int)(uintptr_t)ppuVar2) >> 2) * 4)));
        }
      }
      else {
        if (ppuVar1 == *(undefined4 * PTR32 * PTR32 *)((int)this + 0x1d8)) {
          uVar5 = (int)ppuVar1 - *(int *)((int)this + 0x1d0) >> 2;
          if (0x3ffffffe < uVar5) goto LAB_00e3fde0;
          uVar5 = uVar5 + 1;
          uVar7 = (int)*(undefined4 * PTR32 * PTR32 *)((int)this + 0x1d8) - *(int *)((int)this + 0x1d0) >> 2;
          if (uVar7 < uVar5) {
            if (0x3fffffff - (uVar7 >> 1) < uVar7) {
              uVar7 = 0;
            }
            else {
              uVar7 = uVar7 + (uVar7 >> 1);
            }
            if (uVar7 < uVar5) {
              uVar7 = uVar5;
            }
            F_00e44dd0((undefined *)((int)this + 0x1d0) GEN_EDX_ARG,uVar7);
          }
        }
        if (*(undefined4 * PTR32 *)((int)this + 0x1d4) != (undefined4 *)0x0) {
          **(undefined4 * PTR32 *)((int)this + 0x1d4) = puVar4;
        }
      }
      *(int *)((int)this + 0x1d4) = *(int *)((int)this + 0x1d4) + 4;
      bVar3 = (*(byte *)(gen_frame + 0xb)) + 1;
      (*(byte *)(gen_frame + 0xb)) = bVar3;
    } while (bVar3 < *(byte *)(param_1 + 9));
  }
  return 0;
}

/* ref: Global::ReadCharaList */
GEN_FRAME byte GEN_THISCALL F_00e3fdf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe3fdf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte * pbVar1;
  char cVar2;
  int * PTR32 * ppiVar3;
  int * PTR32 * ppiVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char * pcVar9;
  char * pcVar10;
  undefined * this_00;
  int * piVar11;
  byte bVar12;
  uint uVar13;
  char * pcVar14;
  char * pcVar15;
  
  F_00e3c040((undefined *)((int)this + 0x224) GEN_EDX_FWD,param_1 + 0x10);
  F_00e3c060((undefined *)((int)this + 0x224) GEN_EDX_ARG,param_1 + 0x12);
  F_00e3c090((undefined *)((int)this + 0x224) GEN_EDX_ARG,param_1 + 0xc);
  if ((*(byte *)(param_1 + 8) & 0xfe) == 0) {
    F_00e3c7a0((undefined *)((int)this + 0x1e0) GEN_EDX_ARG);
  }
  (*(byte *)(gen_frame + 0xb)) = 0;
  if (*(char *)(param_1 + 9) != '\0') {
    do {
      piVar11 = *(int * PTR32 *)((int)this + 0x1e0);
      iVar7 = (uint)(*(byte *)(gen_frame + 0xb)) * 0x450 + param_1;
      bVar12 = *(byte *)((uint)(*(byte *)(gen_frame + 0xb)) * 0x450 + 0x28 + param_1) & 0x3f;
      uVar8 = *(int *)((int)this + 0x1e4) - (int)((int)(uintptr_t)piVar11) >> 2;
      uVar13 = 0;
      (*(byte *)(gen_frame + 0xa)) = bVar12;
      if (uVar8 != 0) {
        (*(int * PTR32 *)(gen_frame + 0x4)) = piVar11;
LAB_00e3fe83: ;
        if (*(byte *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0x10) != bVar12) goto code_r0x00e3fe8d;
        iVar5 = piVar11[uVar13];
        pcVar9 = (char *)(iVar7 + 0x62);
        pcVar10 = pcVar9;
        do {
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        pcVar15 = (char *)(iVar5 + 0x49);
        do {
          pcVar14 = pcVar15 + 1;
          pcVar15 = pcVar15 + 1;
        } while (*pcVar14 != '\0');
        pcVar14 = pcVar9;
        for (uVar8 = (uint)((int)pcVar10 - (int)pcVar9) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar15 = *(undefined4 *)pcVar14;
          pcVar14 = pcVar14 + 4;
          pcVar15 = pcVar15 + 4;
        }
        for (uVar8 = (int)pcVar10 - (int)pcVar9 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar15 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          pcVar15 = pcVar15 + 1;
        }
        if (iVar5 == 0) goto LAB_00e3fece;
        goto LAB_00e4004d;
      }
LAB_00e3fece: ;
      this_00 = (undefined *)F_004069f0(0x468);
      if (this_00 == (undefined *)0x0) {
        piVar11 = (int *)0x0;
      }
      else {
        piVar11 = (int *)F_00e3cb10(this_00 GEN_EDX_ARG,iVar7 + 0x18);
      }
      ppiVar3 = *(int * PTR32 * PTR32 *)((int)this + 0x1e4);
      (*(int * PTR32 *)(gen_frame + 0x4)) = piVar11;
      if (&(*(int * PTR32 *)(gen_frame + 0x4)) < ppiVar3) {
        ppiVar4 = *(int * PTR32 * PTR32 *)((int)this + 0x1e0);
        if (&(*(int * PTR32 *)(gen_frame + 0x4)) < ppiVar4) goto LAB_00e3ff78;
        if (ppiVar3 == *(int * PTR32 * PTR32 *)((int)this + 0x1e8)) {
          uVar8 = (int)ppiVar3 - (int)((int)(uintptr_t)ppiVar4) >> 2;
          if (0x3ffffffe < uVar8) goto LAB_00e40071;
          uVar8 = uVar8 + 1;
          uVar13 = (int)*(int * PTR32 * PTR32 *)((int)this + 0x1e8) - (int)((int)(uintptr_t)ppiVar4) >> 2;
          if (uVar13 < uVar8) {
            if (0x3fffffff - (uVar13 >> 1) < uVar13) {
              uVar13 = 0;
            }
            else {
              uVar13 = uVar13 + (uVar13 >> 1);
            }
            if (uVar13 < uVar8) {
              uVar13 = uVar8;
            }
            F_00e44e80((undefined *)((int)this + 0x1e0) GEN_EDX_ARG,uVar13);
          }
        }
        if (*(undefined4 * PTR32 *)((int)this + 0x1e4) != (undefined4 *)0x0) {
          **(undefined4 * PTR32 *)((int)this + 0x1e4) =
               *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1e0) + ((int)&(*(int * PTR32 *)(gen_frame + 0x4)) - (int)((int)(uintptr_t)ppiVar4) >> 2) * 4)));
        }
      }
      else {
LAB_00e3ff78: ;
        if (ppiVar3 == *(int * PTR32 * PTR32 *)((int)this + 0x1e8)) {
          uVar8 = (int)ppiVar3 - *(int *)((int)this + 0x1e0) >> 2;
          if (0x3ffffffe < uVar8) {
LAB_00e40071: ;
                    
            F_00c4579a("vector<T> too long");
          }
          uVar8 = uVar8 + 1;
          uVar13 = (int)*(int * PTR32 * PTR32 *)((int)this + 0x1e8) - *(int *)((int)this + 0x1e0) >> 2;
          if (uVar13 < uVar8) {
            if (0x3fffffff - (uVar13 >> 1) < uVar13) {
              uVar13 = 0;
            }
            else {
              uVar13 = uVar13 + (uVar13 >> 1);
            }
            if (uVar13 < uVar8) {
              uVar13 = uVar8;
            }
            F_00e44e80((undefined *)((int)this + 0x1e0) GEN_EDX_ARG,uVar13);
          }
        }
        if (*(int * PTR32 *)((int)this + 0x1e4) != (int *)0x0) {
          **(int * PTR32 *)((int)this + 0x1e4) = (int)piVar11;
        }
      }
      *(int *)((int)this + 0x1e4) = *(int *)((int)this + 0x1e4) + 4;
      iVar5 = *(int *)((int)this + 0x1e0);
      iVar6 = *(int *)((int)this + 0x1e4);
      uVar8 = F_00e3bf00((int)this + 0x210 GEN_EDX_ARG);
      F_00e3c980(*((undefined * PTR32 *)GEN_TOP((iVar5 - 4 + (iVar6 - iVar5 >> 2) * 4))) GEN_EDX_ARG,uVar8);
      if ((*(byte *)(gen_frame + 0xa)) != *(byte *)(iVar7 + 0x28)) {
        iVar7 = *(int *)((int)this + 0x1e0);
        uVar8 = 0;
        if (*(int *)((int)this + 0x1e4) - iVar7 >> 2 != 0) {
          do {
            pbVar1 = ((byte *)GEN_TOP((*(int *)(iVar7 + uVar8 * 4) + 0x10)));
            *pbVar1 = *pbVar1 & 0x3f;
            iVar7 = *(int *)((int)this + 0x1e0);
            uVar8 = uVar8 + 1;
          } while (uVar8 < (uint)(*(int *)((int)this + 0x1e4) - iVar7 >> 2));
        }
      }
LAB_00e4004d: ;
      bVar12 = (*(byte *)(gen_frame + 0xb)) + 1;
      (*(byte *)(gen_frame + 0xb)) = bVar12;
    } while (bVar12 < *(byte *)(param_1 + 9));
  }
  return ~*(byte *)(param_1 + 8) & 1;
code_r0x00e3fe8d: ;
  (*(int * PTR32 *)(gen_frame + 0x4)) = (*(int * PTR32 *)(gen_frame + 0x4)) + 1;
  uVar13 = uVar13 + 1;
  if (uVar8 <= uVar13) goto LAB_00e3fece;
  goto LAB_00e3fe83;
}

/* ref: Global::ReadCharaMakeReply */
GEN_NOFRAME byte GEN_THISCALL F_00e40080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe40080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  uint * this_00;
  int * piVar1;
  uint * puVar2;
  uint * puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined * pvVar6;
  uint uVar7;
  int * piVar8;
  int iVar9;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  this_00 = (uint *)((int)this + 0x22c);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(int *)(gen_frame + 0x14)) = param_1;
  F_00e3c7a0(this_00 GEN_EDX_FWD);
  if (*(char *)(param_1 + 9) != '\0') {
    iVar9 = param_1;
    if ((*(short *)(param_1 + 10) != 2) && (*(short *)(param_1 + 10) == 3)) {
      piVar8 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x1e0);
      piVar1 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x1e4);
      if (piVar8 != piVar1) {
        iVar9 = *(int *)((*(int *)(gen_frame + 0x14)) + 0x10);
        uVar7 = *(uint *)((*(int *)(gen_frame + 0x14)) + 0x14);
        (*(uint *)(gen_frame + 0xc)) = uVar7;
        do {
          if ((iVar9 == *(int *)*piVar8) && (uVar7 == ((int *)*piVar8)[1])) {
            F_00c4d9ef(*piVar8 + 0x1a,0x20,(*(int *)(gen_frame + 0x14)) + 0x2a,0xffffffff);
            *(undefined1 *)(*piVar8 + 0x11) = *(undefined1 *)((*(int *)(gen_frame + 0x14)) + 0x21);
            break;
          }
          piVar8 = piVar8 + 1;
        } while (piVar8 != piVar1);
      }
      if (*this_00 == *(uint *)((int)this + 0x230)) {
        pvVar6 = (undefined *)F_004069f0(0x468);
        if (pvVar6 == (undefined *)0x0) {
          (*(uint *)(gen_frame + 0xc)) = 0;
        }
        else {
          uVar7 = F_00e3cb10(pvVar6 GEN_EDX_ARG,(*(int *)(gen_frame + 0x14)) + 0x10);
          (*(uint *)(gen_frame + 0xc)) = uVar7;
        }
        F_00e45730(this_00 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0xc)));
      }
      piVar8 = (int *)F_00e3bf00((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x210 GEN_EDX_ARG);
      piVar8 = (int *)*piVar8;
      uVar7 = F_00e3bf00((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x210 GEN_EDX_ARG);
      iVar9 = (*(int *)(gen_frame + 0x14));
      if (piVar8 != *(int * PTR32 *)(uVar7 + 4)) {
        do {
          iVar9 = *piVar8;
          if ((*(int *)((*(int *)(gen_frame + 0x14)) + 0x18) == *(int *)(iVar9 + 8)) &&
             (*(int *)((*(int *)(gen_frame + 0x14)) + 0x1c) == *(int *)(iVar9 + 0xc))) {
            F_00e3c8a0(*(undefined * PTR32 *)*this_00 GEN_EDX_ARG,iVar9);
          }
          piVar8 = piVar8 + 1;
          uVar7 = F_00e3bf00((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x210 GEN_EDX_ARG);
          iVar9 = (*(int *)(gen_frame + 0x14));
        } while (piVar8 != *(int * PTR32 *)(uVar7 + 4));
      }
    }
    if (*(short *)(iVar9 + 10) != 3) {
      pvVar6 = (undefined *)F_004069f0(0x468);
      if (pvVar6 == (undefined *)0x0) {
        (*(uint *)(gen_frame + 0xc)) = 0;
      }
      else {
        uVar7 = F_00e3cb10(pvVar6 GEN_EDX_ARG,iVar9 + 0x10);
        (*(uint *)(gen_frame + 0xc)) = uVar7;
      }
      puVar2 = *(uint * PTR32 *)((int)this + 0x230);
      if ((&(*(uint *)(gen_frame + 0xc)) < puVar2) && (puVar3 = (uint *)*this_00, puVar3 <= &(*(uint *)(gen_frame + 0xc)))) {
        if (puVar2 == *(uint * PTR32 *)((int)this + 0x234)) {
          F_00e453e0(this_00 GEN_EDX_ARG,1);
        }
        iVar9 = (*(int *)(gen_frame + 0x14));
        if (*(undefined4 * PTR32 *)((int)this + 0x230) != (undefined4 *)0x0) {
          **(undefined4 * PTR32 *)((int)this + 0x230) =
               *((undefined4 *)GEN_TOP((*this_00 + ((int)&(*(uint *)(gen_frame + 0xc)) - (int)((int)(uintptr_t)puVar3) >> 2) * 4)));
        }
      }
      else {
        if (puVar2 == *(uint * PTR32 *)((int)this + 0x234)) {
          F_00e453e0(this_00 GEN_EDX_ARG,1);
        }
        if (*(uint * PTR32 *)((int)this + 0x230) != (uint *)0x0) {
          **(uint * PTR32 *)((int)this + 0x230) = (*(uint *)(gen_frame + 0xc));
        }
      }
      *(int *)((int)this + 0x230) = *(int *)((int)this + 0x230) + 4;
      if (*(short *)(iVar9 + 10) == 2) {
        uVar4 = *(undefined4 *)(iVar9 + 0x18);
        uVar5 = *(undefined4 *)(iVar9 + 0x1c);
        (*(undefined4 *)(gen_frame + 0x64)) = 0;
        (*(undefined1 *)(gen_frame + 0x68)) = 0;
        (*(undefined8 *)(gen_frame + 0x50)) = 0;
        (*(undefined4 *)(gen_frame + 0x58)) = uVar4;
        (*(undefined4 *)(gen_frame + 0x5c)) = uVar5;
        (*(undefined4 *)(gen_frame + 0x60)) = 1;
        F_00e3bde0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x50)));
        F_00e3c8a0(*(undefined * PTR32 *)*this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x18)));
        F_00e3bde0(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x50)));
        F_00e3ca10((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x210) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x18)));
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00e40300 */
GEN_FRAME uint GEN_THISCALL F_00e40300(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe40300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  char cVar1;
  ushort uVar2;
  undefined * this_00;
  int * piVar3;
  undefined4 * puVar4;
  int * piVar5;
  byte bVar6;
  int iVar7;
  int * piVar8;
  uint uVar9;
  undefined3 extraout_var = 0;
  undefined4 * puVar10;
  undefined4 * PTR32 * ppuVar11;
  undefined3 extraout_var_00 = 0;
  int iVar12;
  undefined4 * puVar13;
  int * piVar14;
  ulonglong uVar15;
  __time64_t _Var16;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  piVar8 = *(int * PTR32 *)((int)this + 0x48);
  if (*(int * PTR32 *)((int)this + 0x44) == piVar8) goto LAB_00e403d8;
  iVar12 = *(int *)((int)this + 0x40);
  iVar7 = (int)piVar8 - (int)*(int * PTR32 *)((int)this + 0x44) >> 2;
  if (iVar12 < iVar7) {
    iVar7 = *(int *)((int)this + 0x44);
    piVar8 = *(int * PTR32 *)(iVar7 + iVar12 * 4);
    if (*(char *)((int)piVar8 + 0x11) == '\0') goto LAB_00e403d8;
    iVar12 = iVar12 + 1;
    *(int *)((int)this + 0x40) = iVar12;
    piVar8 = ((int *)GEN_TOP((*(int *)((int)this + 0x48) - iVar7 >> 2)));
    if (iVar12 < (int)piVar8) {
      piVar8 = *(int * PTR32 *)(iVar7 + iVar12 * 4);
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x9c))(piVar8 GEN_EDX_FWD,this)));
      goto LAB_00e403d8;
    }
    uVar9 = 0;
    if (piVar8 != (int *)0x0) {
      do {
        puVar13 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x44) + uVar9 * 4)));
        if (puVar13 != (undefined4 *)0x0) {
          piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*puVar13)(puVar13 GEN_EDX_ARG,1)));
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (uint)(*(int *)((int)this + 0x48) - *(int *)((int)this + 0x44) >> 2));
    }
  }
  else {
    piVar14 = (int *)0x0;
    piVar8 = (int *)0x0;
    if (iVar7 != 0) {
      do {
        puVar13 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x44) + (int)((int)(uintptr_t)piVar14) * 4)));
        if (puVar13 != (undefined4 *)0x0) {
          ((GEN_TCODE *)*(gen_code32 *)*puVar13)(puVar13 GEN_EDX_ARG,1);
        }
        piVar14 = (int *)((int)piVar14 + 1);
        piVar8 = ((int *)GEN_TOP((*(int *)((int)this + 0x48) - *(int *)((int)this + 0x44) >> 2)));
      } while (piVar14 < piVar8);
    }
  }
  iVar12 = *(int *)((int)this + 0x44);
  if (iVar12 != *(int *)((int)this + 0x48)) {
    piVar8 = (int *)F_00c46e20(iVar12,*(int *)((int)this + 0x48),0);
    *(int *)((int)this + 0x48) = iVar12;
  }
LAB_00e403d8: ;
  if (*(int *)((int)this + 8) != 0) {
    F_00e3f320(this GEN_EDX_ARG);
    uVar9 = F_00c33470(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG);
    if ((uVar9 != 0) &&
       (piVar8 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x1b4))), piVar8 != *(int * PTR32 *)((int)this + 0x1b4))) {
      do {
        F_00e4fd30((undefined *)piVar8[4] GEN_EDX_ARG,uVar9,(int)this + 0x1c0);
        if (*(char *)((int)piVar8 + 0x15) == '\0') {
          piVar14 = (int *)piVar8[2];
          if (*(char *)((int)piVar14 + 0x15) == '\0') {
            cVar1 = *(char *)(*piVar14 + 0x15);
            piVar8 = piVar14;
            piVar14 = (int *)*piVar14;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar14 + 0x15);
              piVar8 = piVar14;
              piVar14 = (int *)*piVar14;
            }
          }
          else {
            cVar1 = *(char *)(piVar8[1] + 0x15);
            piVar3 = (int *)piVar8[1];
            piVar14 = piVar8;
            while ((piVar8 = piVar3, cVar1 == '\0' && (piVar14 == (int *)piVar8[2]))) {
              cVar1 = *(char *)(piVar8[1] + 0x15);
              piVar3 = (int *)piVar8[1];
              piVar14 = piVar8;
            }
          }
        }
      } while (piVar8 != *(int * PTR32 *)((int)this + 0x1b4));
    }
    F_00e47910(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG);
    F_01050b60(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
    this_00 = *(undefined * PTR32 *)((int)this + 8);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac))
    ;
    (*(int *)(gen_frame + 0x18)) = 0;
    (*(undefined8 *)(gen_frame + 0x1c)) = 0;
    bVar6 = F_00e47880(this_00 GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
    piVar8 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar6)));
    if (bVar6 != 0) {
      if ((*(int *)(gen_frame + 0x18)) == 0) {
        (*(int *)(gen_frame + 0x28)) = 0;
      }
      else {
        (*(int *)(gen_frame + 0x28)) = *(int *)((*(int *)(gen_frame + 0x18)) + 0x24);
      }
      iVar12 = (*(int *)(gen_frame + 0x28));
      uVar2 = *(ushort *)((*(int *)(gen_frame + 0x28)) + 2);
      puVar13 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 0x1c4))[1]));
      cVar1 = *(char *)((int)puVar13 + 0x15);
      puVar4 = *(undefined4 * PTR32 *)((int)this + 0x1c4);
      while (cVar1 == '\0') {
        if ((int)puVar13[3] < (int)(uint)uVar2) {
          puVar10 = (undefined4 *)puVar13[2];
          puVar13 = puVar4;
        }
        else {
          puVar10 = (undefined4 *)*puVar13;
        }
        puVar4 = puVar13;
        puVar13 = puVar10;
        cVar1 = *(char *)((int)puVar10 + 0x15);
      }
      puVar13 = *(undefined4 * PTR32 *)((int)this + 0x1c4);
      (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar4;
      if ((puVar4 == puVar13) || ((int)(uint)uVar2 < (int)puVar4[3])) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = puVar13;
        ppuVar11 = &(*(undefined4 * PTR32 *)(gen_frame + 0x2c));
      }
      else {
        ppuVar11 = &(*(undefined4 * PTR32 *)(gen_frame + 0x24));
      }
      piVar8 = *ppuVar11;
      piVar14 = *(int * PTR32 *)((int)this + 0x1c4);
      if (piVar8 == piVar14) {
        piVar8 = (int *)*piVar14;
        if (piVar8 != piVar14) {
          do {
            bVar6 = F_00e4f950((undefined *)piVar8[4] GEN_EDX_ARG,(uint)*(ushort *)(iVar12 + 2),iVar12);
            if (bVar6 != 0) goto LAB_00e4050d;
            if (*(char *)((int)piVar8 + 0x15) == '\0') {
              piVar14 = (int *)piVar8[2];
              if (*(char *)((int)piVar14 + 0x15) == '\0') {
                cVar1 = *(char *)(*piVar14 + 0x15);
                piVar8 = piVar14;
                piVar14 = (int *)*piVar14;
                while (cVar1 == '\0') {
                  cVar1 = *(char *)(*piVar14 + 0x15);
                  piVar8 = piVar14;
                  piVar14 = (int *)*piVar14;
                }
              }
              else {
                cVar1 = *(char *)(piVar8[1] + 0x15);
                piVar3 = (int *)piVar8[1];
                piVar14 = piVar8;
                while ((piVar8 = piVar3, cVar1 == '\0' && (piVar14 == (int *)piVar8[2]))) {
                  cVar1 = *(char *)(piVar8[1] + 0x15);
                  piVar3 = (int *)piVar8[1];
                  piVar14 = piVar8;
                }
              }
            }
          } while (piVar8 != *(int * PTR32 *)((int)this + 0x1c4));
        }
      }
      else {
        F_00e4f9c0((undefined *)piVar8[4] GEN_EDX_ARG,(*(int *)(gen_frame + 0x28)));
LAB_00e4050d: ;
        if (*(int *)(piVar8[4] + 0x10) != 2) {
          F_00e44980((undefined *)((int)this + 0x1c0) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x2c)),piVar8);
        }
      }
      piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0x18)) + 8) + 0x10))))
                                (*(int * PTR32 *)((*(int *)(gen_frame + 0x18)) + 8) GEN_EDX_ARG,(*(int *)(gen_frame + 0x18)))));
      (*(int *)(gen_frame + 0x18)) = 0;
    }
    if (*(int *)((int)this + 0x1c8) != 0) {
      piVar8 = *(int * PTR32 *)((int)this + 0x1c4);
      piVar14 = (int *)*piVar8;
      if (piVar14 != piVar8) {
        do {
          bVar6 = F_00e4f9c0((undefined *)piVar14[4] GEN_EDX_ARG,0);
          piVar8 = ((int *)GEN_TOP(CONCAT31(extraout_var_00,bVar6)));
          if (*(int *)(piVar14[4] + 0x10) != 2) {
            piVar8 = (int *)F_00e44980((undefined *)((int)this + 0x1c0) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x2c)),piVar14);
            break;
          }
          if (*(char *)((int)piVar14 + 0x15) == '\0') {
            piVar3 = (int *)piVar14[2];
            if (*(char *)((int)piVar3 + 0x15) == '\0') {
              cVar1 = *(char *)(*piVar3 + 0x15);
              piVar8 = (int *)*piVar3;
              while (piVar14 = piVar3, cVar1 == '\0') {
                cVar1 = *(char *)(*piVar8 + 0x15);
                piVar3 = piVar8;
                piVar8 = (int *)*piVar8;
              }
            }
            else {
              cVar1 = *(char *)(piVar14[1] + 0x15);
              piVar5 = (int *)piVar14[1];
              piVar3 = piVar14;
              while ((piVar8 = piVar5, piVar14 = piVar8, cVar1 == '\0' &&
                     (piVar3 == (int *)piVar8[2]))) {
                cVar1 = *(char *)(piVar8[1] + 0x15);
                piVar5 = (int *)piVar8[1];
                piVar3 = piVar8;
              }
            }
          }
        } while (piVar14 != *(int * PTR32 *)((int)this + 0x1c4));
      }
    }
    uVar9 = 0;
    if (*(int *)((int)this + 0x340) != 0) {
      if ((*(int *)((int)this + 8) == 0) ||
         (((iVar12 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 0xc0))), iVar12 != 3 && (iVar12 != 4)) &&
          (iVar12 != 5)))) {
        _Var16 = F_00c4b7c2((__time64_t *)0x0);
        if ((uint)((int)_Var16 - *(int *)((int)this + 0x28)) < 0x1f) {
          piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x340) + 4))))
                                    (*(int * PTR32 *)((int)this + 0x340) GEN_EDX_ARG,0)));
        }
        else {
          F_00e3ee60(*(undefined4 *)((int)this + 0x340),*(undefined4 *)((int)this + 0x350));
          puVar13 = *(undefined4 * PTR32 *)((int)this + 8);
          if (puVar13 != (undefined4 *)0x0) {
            ((GEN_TCODE *)*(gen_code32 *)*puVar13)(puVar13 GEN_EDX_ARG,1);
            *(undefined4 *)((int)this + 8) = 0;
          }
          piVar8 = *(int * PTR32 *)((int)this + 0x48);
          if (*(int * PTR32 *)((int)this + 0x44) != piVar8) {
            piVar8 = ((int *)GEN_TOP(((int)piVar8 - (int)*(int * PTR32 *)((int)this + 0x44) >> 2)));
            if (piVar8 != (int *)0x0) {
              do {
                puVar13 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x44) + uVar9 * 4)));
                if (puVar13 != (undefined4 *)0x0) {
                  piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)*puVar13)(puVar13 GEN_EDX_ARG,1)));
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 < (uint)(*(int *)((int)this + 0x48) - *(int *)((int)this + 0x44) >> 2))
              ;
            }
            iVar12 = *(int *)((int)this + 0x44);
            if (iVar12 != *(int *)((int)this + 0x48)) {
              piVar8 = (int *)F_00c46e20(iVar12,*(int *)((int)this + 0x48),0);
              *(int *)((int)this + 0x48) = iVar12;
            }
          }
        }
      }
      else {
        F_0042b630(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG);
        piVar8 = *(int * PTR32 *)((int)this + 0x340);
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x30)));
        if (*(int *)((int)this + 0x350) != 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x340) + 0x18))))
                    (*(int * PTR32 *)((int)this + 0x340) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x30)),*(int *)((int)this + 0x350));
        }
        *(undefined4 *)((int)this + 0x340) = 0;
        uVar15 = F_0042c880(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG);
        piVar8 = (int *)uVar15;
      }
    }
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac))
    ;
    F_01050b70();
  }
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
  return (uint)piVar8;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::LobbyLoginOperationStep::vf39 */
GEN_FRAME byte GEN_THISCALL F_00e407a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe407a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  
  if (this[0x10] != (undefined1)0x0) {
    this[0x11] = (undefined1)0x1;
    bVar1 = F_00e3f390(param_1 GEN_EDX_FWD,this + 0x14,*(undefined4 *)(this + 8));
    return bVar1;
  }
  bVar1 = F_00e3f390(param_1 GEN_EDX_ARG,this + 0x14,this);
  return bVar1;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::GameLoginOperationStep::vf39 */
GEN_FRAME byte GEN_THISCALL F_00e407e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe407e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  
  if (this[0x10] != (undefined1)0x0) {
    this[0x11] = (undefined1)0x1;
    bVar1 = F_00e3f6d0(param_1 GEN_EDX_FWD,this + 0x14,*(undefined4 *)(this + 8));
    return bVar1;
  }
  bVar1 = F_00e3f6d0(param_1 GEN_EDX_ARG,this + 0x14,this);
  return bVar1;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::LobbyCharaOperationStep::vf39 */
GEN_FRAME byte GEN_THISCALL F_00e40820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe40820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  
  if (this[0x10] != (undefined1)0x0) {
    this[0x11] = (undefined1)0x1;
    bVar1 = F_00e3fa10(param_1 GEN_EDX_FWD,this + 0x14,*(undefined4 *)(this + 8));
    return bVar1;
  }
  bVar1 = F_00e3fa10(param_1 GEN_EDX_ARG,this + 0x14,this);
  return bVar1;
}

/* ref: FUN_00e40860 */
GEN_FRAME byte GEN_THISCALL F_00e40860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe40860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD,&REFG(undefined, 0x115783a),REFG(undefined4, 0x108cc50));
  bVar1 = F_00e3f450(this GEN_EDX_ARG,param_1,((undefined1 *)(gen_frame + 0x4)),param_2);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_00e408c0 */
GEN_FRAME byte GEN_THISCALL F_00e408c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe408c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined4 * puVar1;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  puVar1 = (undefined4 *)F_00e461a0(((undefined4 *)(gen_frame + 0x5c)),param_1 + 0x60,0x20);
  if (0xf < (uint)puVar1[5]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,puVar1,REFG(undefined4, 0x108cc50));
  F_0042ccf0((undefined *)((int)this + 0x23c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  if (0xf < (*(uint *)(gen_frame + 0x70))) {
    F_00406ad0(((undefined4 *)(gen_frame + 0x5c))[0]);
  }
  *(undefined2 *)((int)this + 0x290) = *(undefined2 *)(param_1 + 0x5e);
  *(undefined2 *)((int)this + 0x292) = 0;
  *(undefined4 *)((int)this + 0x294) = *(undefined4 *)(param_1 + 8);
  puVar1 = (undefined4 *)F_00e461a0(((undefined4 *)(gen_frame + 0x5c)),param_1 + 0x1c,0x40);
  if (0xf < (uint)puVar1[5]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,puVar1,REFG(undefined4, 0x108cc50));
  F_0042ccf0((undefined *)((int)this + 0x298) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  if (0xf < (*(uint *)(gen_frame + 0x70))) {
    F_00406ad0(((undefined4 *)(gen_frame + 0x5c))[0]);
  }
  puVar1 = (undefined4 *)F_00e461a0(((undefined4 *)(gen_frame + 0x5c)),param_1 + 0x80,0x20);
  if (0xf < (uint)puVar1[5]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,puVar1,REFG(undefined4, 0x108cc50));
  F_0042ccf0((undefined *)((int)this + 0x2ec) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  if (0xf < (*(uint *)(gen_frame + 0x70))) {
    F_00406ad0(((undefined4 *)(gen_frame + 0x5c))[0]);
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00e40a10 */
GEN_FRAME uint GEN_THISCALL F_00e40a10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe40a10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1157cdc));
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,1);
    *(undefined4 *)((int)this + 8) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x14);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  F_0042c880((undefined *)((int)this + 0x2ec) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x298) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x23c) GEN_EDX_ARG);
  F_00e3c9c0((undefined *)((int)this + 0x22c) GEN_EDX_ARG);
  F_00e3c020();
  F_00e3c810((undefined *)((int)this + 0x210) GEN_EDX_ARG);
  if (*(int *)((int)this + 0x200) != 0) {
    F_00406ad0(*(int *)((int)this + 0x200));
  }
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  if (*(int *)((int)this + 0x1f0) != 0) {
    F_00406ad0(*(int *)((int)this + 0x1f0));
  }
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x1f8) = 0;
  F_00e3c9c0((undefined *)((int)this + 0x1e0) GEN_EDX_ARG);
  F_00e3c670((undefined *)((int)this + 0x1d0) GEN_EDX_ARG);
  F_00e459a0((undefined *)((int)this + 0x1c0) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x1c4),
               *(undefined4 * PTR32 *)((int)this + 0x1c4));
  F_00406ad0(*(undefined4 *)((int)this + 0x1c4));
  F_00e45900((undefined *)((int)this + 0x1b0) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x1b4),
               *(undefined4 * PTR32 *)((int)this + 0x1b4));
  F_00406ad0(*(undefined4 *)((int)this + 0x1b4));
  F_0042c880((undefined *)((int)this + 0x104) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0xb0) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x54) GEN_EDX_ARG);
  uVar2 = 0;
  if (*(int *)((int)this + 0x44) != 0) {
    uVar2 = F_00406ad0(*(int *)((int)this + 0x44));
  }
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  return uVar2;
}

/* ref: FUN_00e40ba0 */
GEN_FRAME byte GEN_THISCALL F_00e40ba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe40ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  byte bVar1;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  F_0042cc20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,"DUMMY",REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,&REFG(undefined, 0x115783a),REFG(undefined4, 0x108cc50));
  bVar1 = F_00e3f450(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x54)),param_1);
  F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_00e40c30 */
GEN_FRAME byte GEN_THISCALL F_00e40c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe40c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  if (((*(int *)((int)this + 8) != 0) &&
      (((iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 0xc0))), iVar4 == 3 || (iVar4 == 4)) ||
       (iVar4 == 5)))) && (bVar1 = F_00e3f320(this GEN_EDX_FWD), bVar1 == 0)) {
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
    puVar7 = *(undefined4 * PTR32 *)((int)this + 0x18);
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar7;
    *(undefined4 *)((int)this + 0x20) = 0;
    F_00e46270((undefined *)((int)this + 0x1f0) GEN_EDX_ARG);
    iVar4 = *(int *)((int)this + 0x204);
    if (*(int *)((int)this + 0x200) != iVar4) {
      uVar2 = F_00e43be0(iVar4,iVar4,*(int *)((int)this + 0x200),param_2);
      *(uint *)((int)this + 0x204) = uVar2;
    }
    puVar3 = (undefined4 *)F_00406b90(0x88,0,0);
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      F_00e4f8f0(puVar3 GEN_EDX_ARG,this,puVar7,param_2,*(undefined4 *)((int)this + 0x34c));
      *puVar3 = (*(undefined * PTR32 (*)[5])REFP(0x1157918));
      puVar5 = param_1;
      puVar6 = puVar3 + 0xe;
      for (iVar4 = 0x14; puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x18)), puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x10)), iVar4 != 0; iVar4 = iVar4 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar3;
    (*(undefined4 *)(gen_frame + 0xc)) = puVar7;
    F_00e45a40((undefined *)((int)this + 0x1b0) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0xc)));
    return 1;
  }
  return 0;
}

/* ref: FUN_00e40d30 */
GEN_FRAME byte GEN_THISCALL F_00e40d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe40d30u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  __time64_t _Var9;
  
  _Var9 = F_00c4b7c2((__time64_t *)0x0);
  if ((900 < (uint)((int)_Var9 - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))))) &&
     (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))), puVar1 != (undefined4 *)0x0)) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  }
  puVar1 = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x158)));
  puVar7 = (*(undefined4 * PTR32 *)&gen_args[1]);
  puVar8 = puVar1;
  for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 - 1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  if ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) &&
     (((iVar6 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0xc0))), iVar6 == 3 || (iVar6 == 4)) ||
      (iVar6 == 5)))) {
    bVar3 = F_00e40c30((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,puVar1,(*(uint *)&gen_args[2]));
    return bVar3;
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48)))) {
    return 0;
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = 0;
  pvVar4 = (undefined *)F_004069f0(0x70);
  uVar2 = (*(uint *)&gen_args[2]);
  if (pvVar4 == (undefined *)0x0) {
    (*(uint *)&gen_args[2]) = 0;
  }
  else {
    (*(uint *)&gen_args[2]) = F_00e42df0(pvVar4 GEN_EDX_ARG,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54,(*(uint *)&gen_args[2]),0,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x350))));
  }
  F_00e457a0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) GEN_EDX_ARG,&(*(uint *)&gen_args[2]));
  pvVar4 = (undefined *)F_004069f0(0xbc);
  if (pvVar4 == (undefined *)0x0) {
    (*(uint *)&gen_args[2]) = 0;
  }
  else {
    (*(uint *)&gen_args[2]) = F_00e42e60(pvVar4 GEN_EDX_ARG,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb0,uVar2,0,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x350))));
  }
  F_00e457a0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) GEN_EDX_ARG,&(*(uint *)&gen_args[2]));
  pvVar4 = (undefined *)F_004069f0(0x68);
  if (pvVar4 == (undefined *)0x0) {
    (*(uint *)&gen_args[2]) = 0;
  }
  else {
    (*(uint *)&gen_args[2]) = F_00e42ee0(pvVar4 GEN_EDX_ARG,puVar1,uVar2,1,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x350))));
  }
  F_00e457a0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) GEN_EDX_ARG,&(*(uint *)&gen_args[2]));
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))))) + 0x9c))))
                    (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))))) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[0]));
  return (byte)uVar5;
}

/* ref: FUN_00e40eb0 */
GEN_FRAME uint GEN_THISCALL F_00e40eb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe40eb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1157cdc));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined2 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  F_00a1af40((undefined *)((int)this + 0x28) GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  F_00e37350((undefined *)((int)this + 0x54) GEN_EDX_ARG);
  *(undefined2 *)((int)this + 0xac) = 0;
  F_0042b630((int)this + 0xb0 GEN_EDX_ARG);
  F_0042b630((int)this + 0x104 GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 0x1b4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 0x1b4) + 4))) = *(int *)((int)this + 0x1b4);
    *((int *)GEN_TOP((*(int *)((int)this + 0x1b4) + 8))) = *(int *)((int)this + 0x1b4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x1b4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x1b4) + 0x15))) = 1;
    *(undefined4 *)((int)this + 0x1c8) = 0;
    uVar1 = F_004069f0(0x18);
    if (uVar1 != 0) {
      *(uint *)((int)this + 0x1c4) = uVar1;
      *(uint *)uVar1 = uVar1;
      *((int *)GEN_TOP((*(int *)((int)this + 0x1c4) + 4))) = *(int *)((int)this + 0x1c4);
      *((int *)GEN_TOP((*(int *)((int)this + 0x1c4) + 8))) = *(int *)((int)this + 0x1c4);
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x1c4) + 0x14))) = 1;
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x1c4) + 0x15))) = 1;
      *(undefined4 *)((int)this + 0x1d0) = 0;
      *(undefined4 *)((int)this + 0x1d4) = 0;
      *(undefined4 *)((int)this + 0x1d8) = 0;
      *(undefined4 *)((int)this + 0x1e0) = 0;
      *(undefined4 *)((int)this + 0x1e4) = 0;
      *(undefined4 *)((int)this + 0x1e8) = 0;
      *(undefined4 *)((int)this + 0x1f0) = 0;
      *(undefined4 *)((int)this + 500) = 0;
      *(undefined4 *)((int)this + 0x1f8) = 0;
      *(undefined4 *)((int)this + 0x200) = 0;
      *(undefined4 *)((int)this + 0x204) = 0;
      *(undefined4 *)((int)this + 0x208) = 0;
      F_00e3c800((int)this + 0x210 GEN_EDX_ARG);
      F_00e3c010((int)this + 0x224 GEN_EDX_ARG);
      *(undefined4 *)((int)this + 0x22c) = 0;
      *(undefined4 *)((int)this + 0x230) = 0;
      *(undefined4 *)((int)this + 0x234) = 0;
      F_0042b630((int)this + 0x23c GEN_EDX_ARG);
      F_0042b630((int)this + 0x298 GEN_EDX_ARG);
      F_0042b630((int)this + 0x2ec GEN_EDX_ARG);
      *(undefined4 *)((int)this + 0x344) = 0x1e;
      *(undefined4 *)((int)this + 0x348) = 0x1e;
      *(undefined4 *)((int)this + 0x34c) = 0x1e;
      *(undefined4 *)((int)this + 0x340) = 0;
      *(undefined4 *)((int)this + 0x350) = 0;
      return (uint)this;
    }
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::ServiceLoginOperationStep::vf39 */
GEN_FRAME byte GEN_THISCALL F_00e41080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe41080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  
  if (this[0x10] != (undefined1)0x0) {
    this[0x11] = (undefined1)0x1;
    bVar1 = F_00e40c30(param_1 GEN_EDX_FWD,this + 0x18,*(undefined4 *)(this + 8));
    return bVar1;
  }
  bVar1 = F_00e40c30(param_1 GEN_EDX_ARG,this + 0x18,this);
  return bVar1;
}

/* ref: Global::ReadServerList */
GEN_FRAME byte GEN_THISCALL F_00e410c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe410c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint * this_00;
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(short *)(param_1 + 10) == 0) {
    if (*(int *)((int)this + 0x1f0) != *(int *)((int)this + 500)) {
      *(int *)((int)this + 500) = *(int *)((int)this + 0x1f0);
    }
    *(undefined4 *)((int)this + 0x20) = 1;
  }
  uVar2 = 0;
  if (*(short *)(param_1 + 0xc) != 0) {
    this_00 = (uint *)((int)this + 0x1f0);
    do {
      iVar3 = *(int *)((int)this + 500) - *this_00;
      iVar5 = iVar3 >> 0x1f;
      iVar3 = iVar3 / 0x54 + iVar5;
      uVar6 = 0;
      if (iVar3 != iVar5) {
        uVar4 = 0;
        do {
          if (*(short *)(uVar4 * 0x54 + 2 + *this_00) ==
              *(short *)(param_1 + 0x1a + (uint)uVar2 * 0x54)) {
            if ((uVar6 & 0xffff) * 0x54 + *this_00 != 0) goto LAB_00e41201;
            break;
          }
          uVar6 = uVar6 + 1;
          uVar4 = uVar6 & 0xffff;
        } while (uVar4 < (uint)(iVar3 - iVar5));
      }
      F_00e3bf40(((undefined4 *)(gen_frame + 0x4)) GEN_EDX_FWD,param_1 + (uint)uVar2 * 0x54 + 0x18);
      puVar8 = *(undefined4 * PTR32 *)((int)this + 500);
      if ((((undefined4 *)(gen_frame + 0x4)) < puVar8) && (puVar7 = (undefined4 *)*this_00, puVar7 <= ((undefined4 *)(gen_frame + 0x4)))) {
        if (puVar8 == *(undefined4 * PTR32 *)((int)this + 0x1f8)) {
          F_00e46380(this_00 GEN_EDX_ARG,1);
        }
        puVar8 = *(undefined4 * PTR32 *)((int)this + 500);
        puVar7 = ((undefined4 *)GEN_TOP(((((int)((undefined4 *)(gen_frame + 0x4)) - (int)puVar7) / 0x54) * 0x54 + *this_00)));
        if (puVar8 != (undefined4 *)0x0) {
LAB_00e411f6: ;
          for (iVar5 = 0x15; iVar5 != 0; iVar5 = iVar5 - 1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
        }
      }
      else {
        if (puVar8 == *(undefined4 * PTR32 *)((int)this + 0x1f8)) {
          F_00e46380(this_00 GEN_EDX_ARG,1);
        }
        puVar8 = *(undefined4 * PTR32 *)((int)this + 500);
        if (puVar8 != (undefined4 *)0x0) {
          puVar7 = ((undefined4 *)(gen_frame + 0x4));
          goto LAB_00e411f6;
        }
      }
      *(int *)((int)this + 500) = *(int *)((int)this + 500) + 0x54;
LAB_00e41201: ;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(param_1 + 0xc));
  }
  bVar1 = *(byte *)(param_1 + 8);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return ~bVar1 & 1;
}

/* ref: FUN_00e41240 */
GEN_FRAME byte GEN_THISCALL F_00e41240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe41240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char * pcVar6;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  if ((*(byte *)(param_1 + 8) & 0xfe) == 0) {
    iVar2 = *(int *)((int)this + 0x204);
    if (*(int *)((int)this + 0x200) != iVar2) {
      uVar4 = F_00e43be0(iVar2,iVar2,*(int *)((int)this + 0x200),param_1);
      *(uint *)((int)this + 0x204) = uVar4;
    }
  }
  (*(byte *)(gen_frame + 0xf)) = 0;
  if (*(char *)(param_1 + 9) != '\0') {
    do {
      iVar5 = *(int *)((int)this + 0x204) - *(int *)((int)this + 0x200);
      iVar2 = param_1 + (uint)(*(byte *)(gen_frame + 0xf)) * 0x28;
      iVar3 = iVar5 >> 0x1f;
      iVar5 = iVar5 / 0x28 + iVar3;
      uVar4 = 0;
      if (iVar5 != iVar3) {
        pcVar6 = ((char *)GEN_TOP((*(int *)((int)this + 0x200) + 4)));
        do {
          if (*pcVar6 == *(char *)(iVar2 + 0x14)) {
            if (*(int *)((int)this + 0x200) + uVar4 * 0x28 != 0) goto LAB_00e41310;
            break;
          }
          uVar4 = uVar4 + 1;
          pcVar6 = pcVar6 + 0x28;
        } while (uVar4 < (uint)(iVar5 - iVar3));
      }
      F_00e3bfd0(((undefined1 *)(gen_frame + 0x10)) GEN_EDX_ARG,iVar2 + 0x10);
      F_00e46670((undefined *)((int)this + 0x200) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
LAB_00e41310: ;
      (*(byte *)(gen_frame + 0xf)) = (*(byte *)(gen_frame + 0xf)) + 1;
    } while ((*(byte *)(gen_frame + 0xf)) < *(byte *)(param_1 + 9));
  }
  bVar1 = *(byte *)(param_1 + 8);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return ~bVar1 & 1;
}

/* ref: FUN_00e41340 */
GEN_FRAME byte GEN_THISCALL F_00e41340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe41340u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx == param_2;
}

/* ref: FUN_00e41360 */
GEN_FRAME uint GEN_THISCALL F_00e41360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe41360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((param_2 == 0) || (param_2 == uVar1)) {
    *(undefined4 *)this = param_1;
  }
  return uVar1;
}

/* ref: FUN_00e41380 */
GEN_FRAME uint GEN_THISCALL F_00e41380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe41380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0xc0);
  *(undefined4 *)((int)this + 0xc0) = param_1;
  return uVar1;
}

/* ref: FUN_00e413a0 */
GEN_FRAME byte GEN_THISCALL F_00e413a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe413a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0xc0) == param_2;
}

/* ref: FUN_00e41460 */
GEN_FRAME uint GEN_THISCALL F_00e41460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe41460u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = in_ecx;
  for (iVar1 = 0x2c; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)in_ecx;
}

/* ref: FUN_00e41480 */
GEN_FRAME uint GEN_THISCALL F_00e41480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe41480u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1157840));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e414b0 */
GEN_FRAME uint GEN_THISCALL F_00e414b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe414b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00f41280(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x110f694));
  return (uint)this;
}

/* ref: FUN_00e414d0 */
GEN_FRAME uint GEN_THISCALL F_00e414d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe414d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00e5ecd0(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x10c4564));
  return (uint)this;
}

/* ref: FUN_00e414f0 */
GEN_FRAME uint GEN_THISCALL F_00e414f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe414f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00f01060(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[27])REFP(0x110f704));
  return (uint)this;
}

/* ref: Application::Network::LobbyClient::CharaMakeParam::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e41510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe41510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1157840));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e41540 */
GEN_FRAME uint GEN_THISCALL F_00e41540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe41540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)this = *param_1;
  *(undefined2 *)((int)this + 2) = *(undefined2 *)(param_1 + 2);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  F_0042cbc0((undefined *)((int)this + 0x18) GEN_EDX_FWD,param_1 + 0x18);
  F_0042cbc0((undefined *)((int)this + 0x6c) GEN_EDX_ARG,param_1 + 0x6c);
  return (uint)this;
}

/* ref: FUN_00e41590 */
GEN_FRAME uint GEN_THISCALL F_00e41590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe41590u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x115784c));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: Application::Network::LobbyClient::GameLoginParam::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e415c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe415c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x115784c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e41600 */
GEN_FRAME uint GEN_THISCALL F_00e41600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13, unsigned int gen_a14, unsigned int gen_a15, unsigned int gen_a16, unsigned int gen_a17, unsigned int gen_a18, unsigned int gen_a19, unsigned int gen_a20, unsigned int gen_a21, unsigned int gen_a22, unsigned int gen_a23, unsigned int gen_a24, unsigned int gen_a25, unsigned int gen_a26, unsigned int gen_a27, unsigned int gen_a28, unsigned int gen_a29, unsigned int gen_a30, unsigned int gen_a31, unsigned int gen_a32, unsigned int gen_a33, unsigned int gen_a34, unsigned int gen_a35, unsigned int gen_a36, unsigned int gen_a37, unsigned int gen_a38, unsigned int gen_a39, unsigned int gen_a40, unsigned int gen_a41, unsigned int gen_a42)
{
  GEN_ENTER(0xe41600u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[43];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  gen_args[9] = gen_a9;
  gen_args[10] = gen_a10;
  gen_args[11] = gen_a11;
  gen_args[12] = gen_a12;
  gen_args[13] = gen_a13;
  gen_args[14] = gen_a14;
  gen_args[15] = gen_a15;
  gen_args[16] = gen_a16;
  gen_args[17] = gen_a17;
  gen_args[18] = gen_a18;
  gen_args[19] = gen_a19;
  gen_args[20] = gen_a20;
  gen_args[21] = gen_a21;
  gen_args[22] = gen_a22;
  gen_args[23] = gen_a23;
  gen_args[24] = gen_a24;
  gen_args[25] = gen_a25;
  gen_args[26] = gen_a26;
  gen_args[27] = gen_a27;
  gen_args[28] = gen_a28;
  gen_args[29] = gen_a29;
  gen_args[30] = gen_a30;
  gen_args[31] = gen_a31;
  gen_args[32] = gen_a32;
  gen_args[33] = gen_a33;
  gen_args[34] = gen_a34;
  gen_args[35] = gen_a35;
  gen_args[36] = gen_a36;
  gen_args[37] = gen_a37;
  gen_args[38] = gen_a38;
  gen_args[39] = gen_a39;
  gen_args[40] = gen_a40;
  gen_args[41] = gen_a41;
  gen_args[42] = gen_a42;
  F_0042cbc0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[1]));
  F_0042cbc0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[22]));
  F_0042c880(&(*(undefined4 *)&gen_args[1]) GEN_EDX_ARG);
  F_0042c880(&(*(undefined4 *)&gen_args[22]) GEN_EDX_ARG);
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00e41640 */
GEN_NOFRAME uint GEN_THISCALL F_00e41640(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe41640u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x54 GEN_EDX_ARG);
  return in_ecx;
}

/* ref: FUN_00e41660 */
GEN_FRAME uint GEN_THISCALL F_00e41660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe41660u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = in_ecx;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)in_ecx;
}

/* ref: FUN_00e41690 */
GEN_FRAME uint GEN_THISCALL F_00e41690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe41690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD);
  *(uint *)this = uVar1;
  return (uint)this;
}

/* ref: FUN_00e416e0 */
GEN_FRAME uint GEN_THISCALL F_00e416e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe416e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_00e37370(this GEN_EDX_FWD,param_1);
  *(undefined1 *)((int)this + 0x58) = *(undefined1 *)(param_1 + 0x58);
  *(undefined1 *)((int)this + 0x59) = *(undefined1 *)(param_1 + 0x59);
  return (uint)this;
}

/* ref: FUN_00e41720 */
GEN_FRAME uint GEN_THISCALL F_00e41720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe41720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  F_0042cbc0((undefined *)((int)this + 0x54) GEN_EDX_ARG,param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00e41750 */
GEN_NOFRAME uint GEN_THISCALL F_00e41750(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe41750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x54) GEN_EDX_FWD);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00e41770 */
GEN_NOFRAME uint GEN_THISCALL F_00e41770(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe41770u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx GEN_EDX_FWD);
  F_0042b630(in_ecx + 0x5c GEN_EDX_ARG);
  F_0042b630(in_ecx + 0xb0 GEN_EDX_ARG);
  return in_ecx;
}

/* ref: FUN_00e41790 */
GEN_NOFRAME uint GEN_THISCALL F_00e41790(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe41790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0xb0) GEN_EDX_FWD);
  F_0042c880((undefined *)((int)this + 0x5c) GEN_EDX_ARG);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_00e417b0 */
GEN_FRAME uint GEN_THISCALL F_00e417b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe417b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_00e36790(this GEN_EDX_FWD,param_1);
  *(undefined1 *)((int)this + 0x58) = *(undefined1 *)(param_1 + 0x58);
  *(undefined1 *)((int)this + 0x59) = *(undefined1 *)(param_1 + 0x59);
  return (uint)this;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::OperationStep::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e417e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe417e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00e3c0c0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e41810 */
GEN_FRAME uint GEN_THISCALL F_00e41810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xe41810u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  F_00e4f8f0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1157900));
  F_0042cbc0((undefined *)((int)this + 0x38) GEN_EDX_ARG,param_5);
  F_0042cbc0((undefined *)((int)this + 0x8c) GEN_EDX_ARG,param_6);
  return (uint)this;
}

/* ref: FUN_00e41880 */
GEN_FRAME uint GEN_THISCALL F_00e41880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe41880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x10);
  if ((param_2 == 0) || (uVar1 == param_2)) {
    *(undefined4 *)((int)this + 0x10) = param_1;
  }
  return uVar1;
}

/* ref: FUN_00e418d0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e418d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe418d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1157900));
  F_0042c880((undefined *)((int)this + 0x8c) GEN_EDX_FWD);
  F_0042c880((undefined *)((int)this + 0x38) GEN_EDX_ARG);
  F_00e4f930(this GEN_EDX_ARG);
  return;
}

/* ref: Application::Network::LobbyClient::LobbyLoginOperation::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e41900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe41900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1157900));
  F_0042c880(this + 0x8c GEN_EDX_FWD);
  F_0042c880(this + 0x38 GEN_EDX_ARG);
  F_00e4f930(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e41940 */
GEN_FRAME uint GEN_THISCALL F_00e41940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe41940u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_00e4f8f0(this GEN_EDX_FWD,param_1,param_3,param_4,param_5);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1157918));
  puVar2 = param_2;
  puVar3 = (undefined4 *)((int)this + 0x38);
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: Application::Network::LobbyClient::ServiceLoginOperation::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e41990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe41990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1157918));
  F_00e4f930(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e419c0 */
GEN_FRAME uint GEN_THISCALL F_00e419c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe419c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00e4f8f0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1157930));
  return (uint)this;
}

/* ref: FUN_00e419f0 */
GEN_FRAME uint GEN_STDCALL F_00e419f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe419f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e41a00 */
GEN_FRAME uint F_00e41a00(unsigned int gen_a0)
{
  GEN_ENTER(0xe41a00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e41a10 */
GEN_FRAME uint F_00e41a10(unsigned int gen_a0)
{
  GEN_ENTER(0xe41a10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: Application::Network::LobbyClient::CharaMakeOperation::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e41a80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe41a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1157930));
  F_00e4f930(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e41ab0 */
GEN_FRAME uint GEN_THISCALL F_00e41ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe41ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00e4f8f0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1157948));
  return (uint)this;
}

/* ref: Application::Network::LobbyClient::GameLoginOperation::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e41b00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe41b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1157948));
  F_00e4f930(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e41b40 */
GEN_FRAME uint GEN_THISCALL F_00e41b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe41b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042ccf0(this GEN_EDX_FWD,param_1);
  F_0042ccf0((undefined *)((int)this + 0x54) GEN_EDX_ARG,param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00e41b70 */
GEN_NOFRAME uint GEN_THISCALL F_00e41b70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe41b70u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx + 4 GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_00e41ba0 */
GEN_FRAME uint GEN_THISCALL F_00e41ba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe41ba0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e41bd0 */
GEN_FRAME uint GEN_THISCALL F_00e41bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe41bd0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x54 + *in_ecx;
}

/* ref: FUN_00e41c00 */
GEN_FRAME uint GEN_THISCALL F_00e41c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe41c00u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x28;
}

/* ref: FUN_00e41c40 */
GEN_FRAME uint GEN_THISCALL F_00e41c40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe41c40u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e41ca0 */
GEN_FRAME uint GEN_THISCALL F_00e41ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe41ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x1157960));
  *(undefined1 *)((int)this + 8) = *param_1;
  *(undefined2 *)((int)this + 10) = *(undefined2 *)(param_1 + 2);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x14);
  F_0042cbc0((undefined *)((int)this + 0x20) GEN_EDX_FWD,param_1 + 0x18);
  F_0042cbc0((undefined *)((int)this + 0x74) GEN_EDX_ARG,param_1 + 0x6c);
  return (uint)this;
}

/* ref: GameLoginParamTmpl_UNormalPlayerCharacterParam__GameLoginParam_LobbyClient_Network_Application::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e41d00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe41d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_004069f0(200);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00e41ca0(this_00 GEN_EDX_ARG,(int)this + 8);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00e41d40 */
GEN_FRAME uint GEN_THISCALL F_00e41d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe41d40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  in_ecx[1] = 1;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x115796c));
  puVar2 = param_2;
  puVar3 = in_ecx + 2;
  for (iVar1 = 0x2c; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)in_ecx;
}

/* ref: CharaMakeParamTmpl_UUpdateRetainerSlotParam__CharaMakeParam_LobbyClient_Network_Application::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e41d70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe41d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar1 = (undefined4 *)F_004069f0(0xb8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 1;
    *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x115796c));
    puVar3 = (undefined4 *)((int)this + 8);
    puVar4 = puVar1 + 2;
    for (iVar2 = 0x2c; iVar2 != 0; iVar2 = iVar2 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    return (uint)puVar1;
  }
  return 0;
}

/* ref: CharaMakeParamTmpl_UUpdateRetainerSlotParam__CharaMakeParam_LobbyClient_Network_Application::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e41db0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe41db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1157840));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e41de0 */
GEN_FRAME uint GEN_THISCALL F_00e41de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe41de0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00e41e20 */
GEN_FRAME uint GEN_THISCALL F_00e41e20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe41e20u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00e41e60 */
GEN_FRAME uint GEN_THISCALL F_00e41e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe41e60u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

