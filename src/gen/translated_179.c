#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Global::AttributeListLookup */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de5840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde5840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00de5700(this GEN_EDX_FWD,param_1);
  if (uVar1 != 0xffffffff) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4 + uVar1 * 8))) & 0xfffffffe;
  }
  return 0;
}

/* ref: Global::AttributeListSet */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de5870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde5870u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  int iVar5;
  undefined * pvVar6;
  
  uVar1 = F_00de5700(this GEN_EDX_FWD,param_1);
  if (param_2 == 0) {
    if (uVar1 == 0xffffffff) {
      return 1;
    }
    pvVar6 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + uVar1 * 8)));
    F_00d91510(((undefined *)GEN_TOP(((int)pvVar6 + 4))) GEN_EDX_ARG);
    F_00d91510(pvVar6 GEN_EDX_ARG);
    uVar2 = *((int *)GEN_TOP(((int)this + 0xc))) - 1;
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar2;
    if (uVar2 != uVar1) {
      puVar3 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + uVar1 * 8)));
      iVar4 = (*((int *)GEN_TOP(((int)this + 8))) + uVar2 * 8) - (int)puVar3;
      iVar5 = 2;
      do {
        *puVar3 = *((undefined4 *)GEN_TOP((iVar4 + (int)puVar3)));
        puVar3 = puVar3 + 1;
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
      return 0;
    }
  }
  else {
    if (uVar1 != 0xffffffff) {
      F_00d91520(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4 + uVar1 * 8))) GEN_EDX_ARG,param_2);
      return 0;
    }
    F_00d91340(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    F_00d91340(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    F_00d91520(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
    F_00d91520(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,param_2);
    if (*((uint *)GEN_TOP(((int)this + 0xc))) == (*((uint *)GEN_TOP(((int)this + 0x10))) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 8))),8);
    }
    pvVar6 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + *((int *)GEN_TOP(((int)this + 0xc))) * 8)));
    if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
      F_00d914e0(pvVar6 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      F_00d914e0(((undefined *)GEN_TOP(((int)pvVar6 + 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
    }
    *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) + 1;
    F_00d91510(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    F_00d91510(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  }
  return 0;
}

/* ref: Global::AttributeListClear */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de59a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde59a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((uVar1 + iVar2 * 8)));
    do {
      F_00d91510(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_FWD);
      uVar1 = F_00d91510(this_00 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  return uVar1;
}

/* ref: FUN_00de59e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de59e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde59e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL(0x338, 8);
  char cVar1;
  code * pcVar2;
  uint uVar3;
  int * piVar4;
  undefined * phVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 * puVar11;
  undefined * puVar12;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x200)) = ((undefined1 *)(gen_frame + 0x20c));
  (*(uint *)(gen_frame + 0x208)) = 0x80000080;
  (*(uint *)(gen_frame + 0x294)) = 0x80000080;
  (*(undefined * PTR32 *)(gen_frame + 0x328)) = this;
  iVar10 = 0;
  (*(undefined4 *)(gen_frame + 0x204)) = 1;
  ((undefined1 *)(gen_frame + 0x20c))[0] = 0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x28c)) = ((undefined1 *)(gen_frame + 0x298));
  (*(undefined4 *)(gen_frame + 0x290)) = 1;
  ((undefined1 *)(gen_frame + 0x298))[0] = 0;
  uVar3 = F_00da0e60(param_1);
  (*(uint *)(gen_frame + 0x324)) = uVar3;
  iVar8 = 0;
  do {
    iVar7 = 4;
    if (iVar10 < (int)(*(uint *)(gen_frame + 0x324))) {
      cVar1 = *((char *)GEN_TOP((iVar10 + param_1)));
      if (cVar1 < '!') {
        iVar7 = 0;
      }
      if (cVar1 == '\"') {
        iVar7 = 1;
      }
      else if (cVar1 == '=') {
        iVar7 = 2;
      }
      else if (cVar1 == ';') {
        iVar7 = 3;
      }
    }
    else {
      iVar7 = 5;
    }
    iVar6 = 6;
    iVar9 = 9;
    piVar4 = &REFG(undefined4, 0x114b5d4);
    do {
      if ((piVar4[-1] == iVar8) && (*piVar4 == iVar7)) {
        iVar9 = piVar4[1];
        iVar6 = piVar4[2];
      }
      if ((piVar4[3] == iVar8) && (piVar4[4] == iVar7)) {
        iVar9 = piVar4[5];
        iVar6 = piVar4[6];
      }
      if ((piVar4[7] == iVar8) && (piVar4[8] == iVar7)) {
        iVar9 = piVar4[9];
        iVar6 = piVar4[10];
      }
      if ((piVar4[0xb] == iVar8) && (piVar4[0xc] == iVar7)) {
        iVar9 = piVar4[0xd];
        iVar6 = piVar4[0xe];
      }
      piVar4 = piVar4 + 0x10;
    } while ((int)piVar4 < 0x114b7d4);
    switch((unsigned int)(uintptr_t)(iVar6)) {
    case 0: ;
      break;
    case 1: ;
      (*(undefined1 *)(gen_frame + 0x32c)) = *((undefined1 *)GEN_TOP((iVar10 + param_1)));
      (*(undefined1 *)(gen_frame + 0x32d)) = 0;
      F_00da4d70(&(*(undefined1 * PTR32 *)(gen_frame + 0x200)) GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0x32c)));
      break;
    case 2: ;
      (*(undefined1 *)(gen_frame + 0x330)) = *((undefined1 *)GEN_TOP((iVar10 + param_1)));
      (*(undefined1 *)(gen_frame + 0x331)) = 0;
      F_00da4d70(&(*(undefined1 * PTR32 *)(gen_frame + 0x28c)) GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0x330)));
      break;
    case 3: ;
      puVar11 = (*(undefined1 * PTR32 *)(gen_frame + 0x28c));
      goto LAB_00de5b4e;
    case 4: ;
      puVar11 = ((undefined1 *)GEN_TOP(0x0));
LAB_00de5b4e: ;
      F_00de5870((*(undefined * PTR32 *)(gen_frame + 0x328)) GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x200)),puVar11);
      uVar3 = F_00da46f0(&(*(undefined1 * PTR32 *)(gen_frame + 0x28c)) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63));
      F_00da4cf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x200)) GEN_EDX_ARG,uVar3);
      break;
    case 5: ;
      goto switchD_00de5af2_caseD_5;
    case 6: ;
      F_00da0a80(((undefined1 *)(gen_frame + 0x318)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
      puVar12 = &REFG(undefined, 0x11264a4);
      phVar5 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x318)) GEN_EDX_ARG,((char *)REFP(0x114b5ac)))))
      ;
      phVar5 = ((undefined *)GEN_TOP(F_00d9fe80(phVar5 GEN_EDX_ARG,param_1)));
      F_00d9fe80(phVar5 GEN_EDX_ARG,puVar12);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xabba7881,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114b58c)),0x134);
      F_00d9fda0(((undefined1 *)(gen_frame + 0x318)) GEN_EDX_ARG);
      (*(undefined4 *)(gen_frame + 0x290)) = 0;
      goto joined_r0x00de5cf7;
    default: ;
      F_00da0a80(((undefined1 *)(gen_frame + 0x318)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
      puVar12 = &REFG(undefined, 0x11264a4);
      phVar5 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x318)) GEN_EDX_ARG,((char *)REFP(0x114b54c)))));
      phVar5 = ((undefined *)GEN_TOP(F_00d9fe80(phVar5 GEN_EDX_ARG,param_1)));
      F_00d9fe80(phVar5 GEN_EDX_ARG,puVar12);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xabba0032,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114b58c)),0x140);
      F_00d9fda0(((undefined1 *)(gen_frame + 0x318)) GEN_EDX_ARG);
      (*(undefined4 *)(gen_frame + 0x290)) = 0;
joined_r0x00de5cf7: ;
      (*(undefined4 *)(gen_frame + 0x290)) = 0;
      if (-1 < (int)(*(uint *)(gen_frame + 0x294))) {
        (*(undefined4 *)(gen_frame + 0x290)) = 0;
        pcVar2 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10)));
        (*pcVar2)(&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x28c)),(*(uint *)(gen_frame + 0x294)) & 0x3fffffff);
      }
      (*(undefined4 *)(gen_frame + 0x204)) = 0;
      (*(uint *)(gen_frame + 0x294)) = 0x80000000;
      (*(undefined1 * PTR32 *)(gen_frame + 0x28c)) = ((undefined1 *)GEN_TOP(0x0));
      if (-1 < (int)(*(uint *)(gen_frame + 0x208))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x200)),(*(uint *)(gen_frame + 0x208)) & 0x3fffffff);
      }
      return 1;
    }
    iVar10 = iVar10 + 1;
switchD_00de5af2_caseD_5: ;
    iVar8 = iVar9;
    if (iVar9 == 8) {
      (*(undefined4 *)(gen_frame + 0x290)) = 0;
      if (-1 < (int)(*(uint *)(gen_frame + 0x294))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x28c)),(*(uint *)(gen_frame + 0x294)) & 0x3fffffff);
      }
      (*(undefined1 * PTR32 *)(gen_frame + 0x28c)) = ((undefined1 *)GEN_TOP(0x0));
      (*(uint *)(gen_frame + 0x294)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x204)) = 0;
      if (-1 < (int)(*(uint *)(gen_frame + 0x208))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x200)),(*(uint *)(gen_frame + 0x208)) & 0x3fffffff);
      }
      return 0;
    }
  } while( true );
}

/* ref: FUN_00de5db0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de5db0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde5db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114b7d4));
  return (uint)in_ecx;
}

/* ref: Global::StringPairArrayAt */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de5e00(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde5e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: Global::StringPairArrayAtConst */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de5e10(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde5e10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: Global::StringPairCopy */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de5e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde5e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_00d914e0(this GEN_EDX_FWD,param_1);
  F_00d914e0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1 + 4);
  return (uint)this;
}

/* ref: Global::AllocatorFreePairs */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de5e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde5e70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00de5e90 */
GEN_LIB GEN_FRAME uint F_00de5e90(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde5e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: Global::StringPairConstructFill */
GEN_LIB GEN_FRAME unsigned int F_00de5ed0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xde5ed0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined * this;
  int iVar1;
  
  this = param_1;
  iVar1 = param_2;
  if (0 < param_2) {
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_00d914e0(this GEN_EDX_ARG,param_3);
        F_00d914e0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_3 + 4);
      }
      this = ((undefined *)GEN_TOP(((int)this + 8)));
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return;
}

/* ref: Global::StringPairArrayPushBackAlloc */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de5f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde5f10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined * this_00;
  uint uVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  uVar1 = *(uint *)this;
  this_00 = ((undefined *)GEN_TOP((uVar1 + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00d914e0(this_00 GEN_EDX_ARG,param_2);
    uVar1 = F_00d914e0(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_ARG,param_2 + 4);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return uVar1;
}

/* ref: Global::StringPairArrayPushBack */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de5f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde5f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if (*((uint *)GEN_TOP(((int)this + 4))) == uVar1) {
    uVar1 = F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  this_00 = ((undefined *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00d914e0(this_00 GEN_EDX_ARG,param_1);
    uVar1 = F_00d914e0(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_ARG,param_1 + 4);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return uVar1;
}

/* ref: Global::StringPairDestroyRange */
GEN_LIB GEN_FRAME unsigned int F_00de5fd0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde5fd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  if (-1 < iVar1) {
    this = ((undefined *)GEN_TOP((param_1 + iVar1 * 8)));
    do {
      F_00d91510(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
      F_00d91510(this GEN_EDX_ARG);
      this = ((undefined *)GEN_TOP(((int)this - 8)));
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: Global::StringPairArrayClear */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de6000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde6000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((uVar1 + iVar2 * 8)));
    do {
      F_00d91510(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_FWD);
      uVar1 = F_00d91510(this_00 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return uVar1;
}

/* ref: Global::StringPairArrayRemoveAtSwap */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00de6030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde6030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP((*(int *)this + param_1 * 8)));
  F_00d91510(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_FWD);
  F_00d91510(this_00 GEN_EDX_ARG);
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (*((int *)GEN_TOP(((int)this + 4))) != param_1) {
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + param_1 * 8)));
    iVar2 = (*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8) - (int)puVar1;
    iVar3 = 2;
    do {
      *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + (int)puVar1)));
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: Global::StringPairArrayFreeAlloc */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de6090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde6090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + iVar2 * 8)));
    do {
      F_00d91510(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_FWD);
      F_00d91510(this_00 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::StringPairArrayFree */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de6100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde6100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + iVar2 * 8)));
    do {
      F_00d91510(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_FWD);
      F_00d91510(this_00 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::StringPairArrayFree2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de6170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde6170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)this + iVar2 * 8)));
    do {
      F_00d91510(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_FWD);
      F_00d91510(this_00 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00de61e0 */
GEN_LIB GEN_FRAME uint F_00de61e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde61e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00de6210 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de6210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde6210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0xc))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar2 * 8)));
    do {
      F_00d91510(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_FWD);
      F_00d91510(this_00 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 8))),uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkxEnvironment::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de6280(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde6280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00de6210(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00de62c0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00de62c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde62c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_01059680(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1,param_2);
  return;
}

/* ref: FUN_00de62d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de62d0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde62d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_00d91340(in_ecx GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP((in_ecx + 4))) = 0;
  return in_ecx;
}

/* ref: FUN_00de62f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de62f0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde62f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  F_00d91350(in_ecx GEN_EDX_FWD,param_2);
  return in_ecx;
}

/* ref: Global::Array64At */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de6330(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde6330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x40 + *in_ecx;
}

/* ref: Global::PtrArrayAt_00de6450 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de6450(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde6450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: Global::ArrayInitExternal */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de6470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xde6470u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: Global::AllocatorFreePtrs */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de64a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde64a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de64d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de64d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde64d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00de4dc0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00de64e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de64e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde64e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if ((param_1 != 0) && (*((int *)GEN_TOP(((int)this + 0x14))) != 0)) {
    uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 0x14)));
    if ((uVar1 & 0xfffffffe) != 0) {
      uVar1 = F_00da0d70(uVar1 & 0xfffffffe,param_1);
      if (uVar1 == 0) {
        return *((uint *)GEN_TOP(((int)this + 0x14)));
      }
    }
    uVar1 = F_00de4d50(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00de6760 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de6760(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde6760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *((undefined2 *)GEN_TOP(((int)in_ecx + 6))) = 1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114ab70));
  F_00d91340(in_ecx + 2 GEN_EDX_FWD);
  F_00d91340(in_ecx + 3 GEN_EDX_ARG);
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0x80000000;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0x80000000;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xe] = 0x80000000;
  in_ecx[0xf] = 0;
  in_ecx[0x10] = 0;
  in_ecx[0x11] = 0x80000000;
  in_ecx[0x12] = 0;
  in_ecx[0x13] = 0;
  in_ecx[0x14] = 0x80000000;
  in_ecx[0x15] = 0;
  in_ecx[0x16] = 0;
  in_ecx[0x17] = 0x80000000;
  in_ecx[0x18] = 0;
  in_ecx[0x19] = 0;
  in_ecx[0x1a] = 0x80000000;
  in_ecx[0x1b] = 0;
  in_ecx[0x1c] = 0;
  in_ecx[0x1d] = 0x80000000;
  *(undefined8 *)(in_ecx + 0x20) = GEN_FLT_TO(*(undefined8 *)(in_ecx + 0x20), REFG(float, 0x1138c70));
  *(undefined8 *)(in_ecx + 0x22) = REFG(undefined8, 0x1138c78);
  *(undefined8 *)(in_ecx + 0x24) = GEN_FLT_TO(*(undefined8 *)(in_ecx + 0x24), REFG(float, 0x1138c80));
  *(undefined8 *)(in_ecx + 0x26) = REFG(undefined8, 0x1138c88);
  *(undefined8 *)(in_ecx + 0x28) = GEN_FLT_TO(*(undefined8 *)(in_ecx + 0x28), REFG(float, 0x1138c90));
  *(undefined8 *)(in_ecx + 0x2a) = REFG(undefined8, 0x1138c98);
  return (uint)in_ecx;
}

/* ref: FUN_00de6840 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de6840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde6840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * phVar2;
  uint uVar3;
  int iVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114ab70));
  iVar4 = *((int *)GEN_TOP(((int)this + 0x70))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x6c)));
  while (-1 < iVar4) {
    phVar2 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar4 * 4)));
    if (phVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(phVar2 GEN_EDX_FWD);
    }
    iVar4 = iVar4 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar4 * 4))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x74)));
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x6c))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0x80000000;
  iVar4 = *((int *)GEN_TOP(((int)this + 100))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x60)));
  while (-1 < iVar4) {
    phVar2 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar4 * 4)));
    if (phVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(phVar2 GEN_EDX_ARG);
    }
    iVar4 = iVar4 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar4 * 4))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x68)));
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x60))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0x80000000;
  iVar4 = *((int *)GEN_TOP(((int)this + 0x58))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x54)));
  while (-1 < iVar4) {
    phVar2 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar4 * 4)));
    if (phVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(phVar2 GEN_EDX_ARG);
    }
    iVar4 = iVar4 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar4 * 4))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x5c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x54))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0x80000000;
  iVar4 = *((int *)GEN_TOP(((int)this + 0x4c))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x48)));
  while (-1 < iVar4) {
    phVar2 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar4 * 4)));
    if (phVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(phVar2 GEN_EDX_ARG);
    }
    iVar4 = iVar4 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar4 * 4))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x50)));
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x48))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0x80000000;
  iVar4 = *((int *)GEN_TOP(((int)this + 0x40))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x3c)));
  while (-1 < iVar4) {
    phVar2 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar4 * 4)));
    if (phVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(phVar2 GEN_EDX_ARG);
    }
    iVar4 = iVar4 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar4 * 4))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x44)));
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x3c))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0x80000000;
  iVar4 = *((int *)GEN_TOP(((int)this + 0x34))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x30)));
  while (-1 < iVar4) {
    phVar2 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar4 * 4)));
    if (phVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(phVar2 GEN_EDX_ARG);
    }
    iVar4 = iVar4 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar4 * 4))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x38)));
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x30))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0x80000000;
  iVar4 = *((int *)GEN_TOP(((int)this + 0x28))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x24)));
  while (-1 < iVar4) {
    phVar2 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar4 * 4)));
    if (phVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(phVar2 GEN_EDX_ARG);
    }
    iVar4 = iVar4 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar4 * 4))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x2c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x24))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0x80000000;
  iVar4 = *((int *)GEN_TOP(((int)this + 0x1c))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x18)));
  while (-1 < iVar4) {
    phVar2 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar4 * 4)));
    if (phVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(phVar2 GEN_EDX_ARG);
    }
    iVar4 = iVar4 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar4 * 4))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x20)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x18))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0x80000000;
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  F_00d91510(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
  uVar3 = F_00d91510(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar3;
}

/* ref: Global::ArrayInitExternal2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de6c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xde6c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: Global::PtrArrayFreeAlloc */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de6dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde6dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::PtrArrayFree */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de6e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde6e00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::PtrArrayFree2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de6e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde6e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::InlineArrayInit */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de6e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde6e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(int *)this = (int)this + 0xc;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000020;
  return (uint)this;
}

/* ref: Global::PtrArrayFree3 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de6ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde6ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::PtrArrayAt2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de6f10(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde6f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: Global::PtrArrayAt3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de6f20(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde6f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: Global::PtrArrayIndexOf */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de6f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xde6f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = param_3;
  if (param_3 < 0) {
    iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  }
  if ((int)param_2 < iVar3) {
    piVar2 = ((int *)GEN_TOP((*(int *)this + param_2 * 4)));
    uVar1 = param_2;
    do {
      if (*piVar2 == *param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while ((int)uVar1 < iVar3);
  }
  return 0xffffffff;
}

/* ref: Global::FillDwords_00de7000 */
GEN_LIB GEN_FRAME unsigned int F_00de7000(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xde7000u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: Global::FreeArray_00de7040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de7040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde7040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: Global::FreeArray_00de7070 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de7070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde7070u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: Global::ReleaseRef_00de7090 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00de7090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde7090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: Global::ReleaseRef_00de70b0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00de70b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde70b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: Global::PushBack_00de7110 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de7110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde7110u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_2;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: Global::ReplaceRange */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de7150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xde7150u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  undefined8 * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 * puVar5;
  int iVar6;
  
  iVar4 = *((int *)GEN_TOP(((int)this + 4)));
  iVar6 = (iVar4 - param_3) + param_5;
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < iVar6) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar6) {
      iVar3 = iVar6;
    }
    F_00d95690(param_1,this,iVar3,0x10);
  }
  puVar1 = ((undefined8 *)GEN_TOP(F_00da38f0((param_2 + param_5) * 0x10 + *(int *)this,
                              (param_3 + param_2) * 0x10 + *(int *)this,
                              ((iVar4 - param_2) - param_3) * 0x10)));
  puVar5 = ((undefined8 *)GEN_TOP((param_2 * 0x10 + *(int *)this)));
  if (0 < param_5) {
    iVar3 = param_4 - (int)puVar5;
    puVar1 = puVar5;
    iVar4 = param_5;
    do {
      *puVar1 = *((undefined8 *)GEN_TOP((iVar3 + (int)puVar1)));
      puVar1[1] = *((undefined8 *)GEN_TOP((iVar3 + 8 + (int)puVar1)));
      puVar1 = puVar1 + 2;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar6;
  return (uint)puVar1;
}

/* ref: Global::FreeSmall */
GEN_LIB GEN_FRAME unsigned int F_00de7200(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde7200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: Global::FreeSmall_00de7230 */
GEN_LIB GEN_FRAME unsigned int F_00de7230(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde7230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: Global::ForEachChild */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00de7260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde7260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  iVar1 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0xc)))) {
    do {
      F_00de9210(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar1 * 4))) GEN_EDX_FWD,param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *((int *)GEN_TOP(((int)this + 0xc))));
  }
  return;
}

/* ref: Global::RemoveAt */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00de7290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde7290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  undefined * phVar3;
  int iVar4;
  
  if ((-1 < param_1) && (param_1 < *((int *)GEN_TOP(((int)this + 0x18))))) {
    iVar2 = *((int *)GEN_TOP(((int)this + 0x14)));
    iVar1 = param_1 * 4;
    phVar3 = *((undefined * PTR32 *)GEN_TOP((iVar2 + iVar1)));
    if (phVar3 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(phVar3 GEN_EDX_FWD);
    }
    *((undefined4 *)GEN_TOP((iVar2 + iVar1))) = 0;
    *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) - 1;
    if (*((int *)GEN_TOP(((int)this + 0x18))) != param_1) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + iVar1))) =
           *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + *((int *)GEN_TOP(((int)this + 0x18))) * 4)));
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0xc)));
    while (iVar1 = iVar1 - 1, -1 < iVar1) {
      iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar1 * 4)));
      iVar4 = *((int *)GEN_TOP((iVar2 + 0x1c)));
      phVar3 = *((undefined * PTR32 *)GEN_TOP((iVar4 + param_1 * 4)));
      if (phVar3 != ((undefined *)GEN_TOP(0x0))) {
        F_00d91a80(phVar3 GEN_EDX_ARG);
      }
      *((undefined4 *)GEN_TOP((iVar4 + param_1 * 4))) = 0;
      *((int *)GEN_TOP((iVar2 + 0x20))) = *((int *)GEN_TOP((iVar2 + 0x20))) - 1;
      if (*((int *)GEN_TOP((iVar2 + 0x20))) != param_1) {
        *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x1c))) + param_1 * 4))) =
             *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 0x1c))) + *((int *)GEN_TOP((iVar2 + 0x20))) * 4)));
      }
    }
  }
  return;
}

/* ref: FUN_00de7350 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00de7350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde7350u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  (*(uint *)(gen_frame + 0x1c)) = 0xffffffff;
  (*(int *)(gen_frame + 0x20)) = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0xc)))) {
    do {
      iVar4 = *((int *)GEN_TOP(((int)param_1 + 4)));
      if (param_2 != ((int *)GEN_TOP(0x0))) {
        iVar5 = *((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8))) + (*(int *)(gen_frame + 0x20)) * 4))) + 0x18)));
        uVar1 = param_2[1];
        uVar2 = 0;
        if (0 < (int)uVar1) {
          piVar6 = ((int *)GEN_TOP(*param_2));
          do {
            if (*piVar6 == iVar5) {
              (*(uint *)(gen_frame + 0x1c)) = uVar2;
              if (uVar2 != 0xffffffff) goto LAB_00de73e3;
              break;
            }
            uVar2 = uVar2 + 1;
            piVar6 = piVar6 + 1;
          } while ((int)uVar2 < (int)uVar1);
        }
        (*(uint *)(gen_frame + 0x1c)) = uVar1;
        if (uVar1 == (param_2[2] & 0x3fffffffU)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,4);
        }
        *((int *)GEN_TOP((*param_2 + param_2[1] * 4))) = iVar5;
        param_2[1] = param_2[1] + 1;
      }
LAB_00de73e3: ;
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(int *)(gen_frame + 0xc)) = 0;
      (*(int *)(gen_frame + 0x10)) = 0;
      (*(uint *)(gen_frame + 0x8)) = 0x80000000;
      (*(uint *)(gen_frame + 0x14)) = 0x80000000;
      F_00de92f0(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 8))) + (*(int *)(gen_frame + 0x20)) * 4))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x1c)));
      iVar5 = 0;
      if (0 < (*(int *)(gen_frame + 0x10))) {
        iVar3 = 0;
        do {
          *((int *)GEN_TOP((iVar3 + (*(int *)(gen_frame + 0xc))))) = *((int *)GEN_TOP((iVar3 + (*(int *)(gen_frame + 0xc))))) + iVar4;
          piVar6 = ((int *)GEN_TOP((iVar3 + 4 + (*(int *)(gen_frame + 0xc)))));
          *piVar6 = *piVar6 + iVar4;
          piVar6 = ((int *)GEN_TOP((iVar3 + 8 + (*(int *)(gen_frame + 0xc)))));
          *piVar6 = *piVar6 + iVar4;
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + 0x10;
        } while (iVar5 < (*(int *)(gen_frame + 0x10)));
      }
      F_00de7780(param_1 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),iVar4,(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
      F_00de7600(((undefined *)GEN_TOP(((int)param_1 + 0xc))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),
                          *((undefined4 *)GEN_TOP(((int)param_1 + 0x10))),(*(int *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x10)));
      (*(int *)(gen_frame + 0x10)) = 0;
      if (((*(uint *)(gen_frame + 0x14)) & 0x80000000) == 0) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) << 4);
      }
      (*(int *)(gen_frame + 0xc)) = 0;
      (*(uint *)(gen_frame + 0x14)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (((*(uint *)(gen_frame + 0x8)) & 0x80000000) == 0) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) << 4);
      }
      iVar4 = (*(int *)(gen_frame + 0x20)) + 1;
      (*(int *)(gen_frame + 0x20)) = iVar4;
    } while (iVar4 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0xc))));
  }
  return;
}

/* ref: FUN_00de74e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de74e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde74e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114b7e4));
  return (uint)in_ecx;
}

/* ref: FUN_00de74f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de74f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde74f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * phVar2;
  uint uVar3;
  int iVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114b7e4));
  iVar4 = *((int *)GEN_TOP(((int)this + 0x18))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x14)));
  while (-1 < iVar4) {
    phVar2 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar4 * 4)));
    if (phVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(phVar2 GEN_EDX_FWD);
    }
    iVar4 = iVar4 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar4 * 4))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x1c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x14))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0x80000000;
  iVar4 = *((int *)GEN_TOP(((int)this + 0xc))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  while (-1 < iVar4) {
    phVar2 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar4 * 4)));
    if (phVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(phVar2 GEN_EDX_ARG);
    }
    iVar4 = iVar4 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar4 * 4))) = 0;
  }
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (-1 < (int)uVar3) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 8))),uVar3 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar3;
}

/* ref: Global::PushBack_00de75c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de75c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde75c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: Global::InsertRange */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de7600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xde7600u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00de7150(this GEN_EDX_FWD,param_1,param_2,0,param_3,param_4);
  return uVar1;
}

/* ref: Global::ReplaceRange_00de7620 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00de7620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xde7620u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 * puVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = *((int *)GEN_TOP(((int)this + 4)));
  iVar9 = (iVar8 - param_3) + param_5;
  uVar6 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar6 < iVar9) {
    iVar5 = uVar6 * 2;
    if (iVar5 <= iVar9) {
      iVar5 = iVar9;
    }
    F_00d95690(param_1,this,iVar5,0x10);
  }
  F_00da38f0((param_2 + param_5) * 0x10 + *(int *)this,
                     (param_2 + param_3) * 0x10 + *(int *)this,((iVar8 - param_2) - param_3) * 0x10)
  ;
  puVar7 = ((undefined4 *)GEN_TOP((param_2 * 0x10 + *(int *)this)));
  if (0 < param_5) {
    iVar5 = param_4 - (int)puVar7;
    iVar8 = param_5;
    do {
      puVar1 = ((undefined4 *)GEN_TOP((iVar5 + (int)puVar7)));
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar7 = *puVar1;
      puVar7[1] = uVar2;
      puVar7[2] = uVar3;
      puVar7[3] = uVar4;
      puVar7 = puVar7 + 4;
      iVar8 = iVar8 - 1;
    } while (iVar8 != 0);
    *((int *)GEN_TOP(((int)this + 4))) = iVar9;
    return 0;
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar9;
  return 0;
}

/* ref: Global::ScalarDeletingDestructor_00de76e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de76e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde76e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return (uint)param_1;
}

/* ref: Global::ScalarDeletingDestructor_00de7720 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de7720(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde7720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return (uint)param_1;
}

/* ref: Global::InsertRange_00de7760 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de7760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xde7760u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00de7600(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3);
  return uVar1;
}

/* ref: Global::InsertRange_00de7780 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00de7780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xde7780u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00de7620(this GEN_EDX_FWD,param_1,param_2,0,param_3,param_4);
  return;
}

/* ref: Global::SwapRemoveAt */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de77a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde77a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  undefined * this_00;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)this;
  iVar2 = param_1 * 4;
  this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar2)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(this_00 GEN_EDX_FWD);
  }
  *((undefined4 *)GEN_TOP((iVar1 + iVar2))) = 0;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  uVar3 = *((uint *)GEN_TOP(((int)this + 4)));
  if (uVar3 != param_1) {
    uVar3 = *((uint *)GEN_TOP((*(int *)this + uVar3 * 4)));
    *((uint *)GEN_TOP((*(int *)this + iVar2))) = uVar3;
  }
  return uVar3;
}

/* ref: Global::ReleaseRange */
GEN_LIB GEN_FRAME unsigned int F_00de77e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde77e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *((undefined * PTR32 *)GEN_TOP((param_1 + iVar1 * 4)));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *((undefined4 *)GEN_TOP((param_1 + 4 + iVar1 * 4))) = 0;
  }
  return;
}

/* ref: Global::ReleaseRange_00de7850 */
GEN_LIB GEN_FRAME unsigned int F_00de7850(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde7850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *((undefined * PTR32 *)GEN_TOP((param_1 + iVar1 * 4)));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *((undefined4 *)GEN_TOP((param_1 + 4 + iVar1 * 4))) = 0;
  }
  return;
}

/* ref: Global::InsertRange_00de7880 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00de7880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xde7880u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00de7780(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3);
  return;
}

/* ref: Global::SwapRemoveAt_00de78a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de78a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde78a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  undefined * this_00;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)this;
  iVar2 = param_1 * 4;
  this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar2)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(this_00 GEN_EDX_FWD);
  }
  *((undefined4 *)GEN_TOP((iVar1 + iVar2))) = 0;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  uVar3 = *((uint *)GEN_TOP(((int)this + 4)));
  if (uVar3 != param_1) {
    uVar3 = *((uint *)GEN_TOP((*(int *)this + uVar3 * 4)));
    *((uint *)GEN_TOP((*(int *)this + iVar2))) = uVar3;
  }
  return uVar3;
}

/* ref: Global::Clear_00de78e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de78e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde78e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: Global::Clear_00de79b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de79b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde79b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: Global::Clear_00de7a20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de7a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde7a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: Global::Clear_00de7a90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de7a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde7a90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: Global::Clear_00de7b00 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de7b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde7b00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: Global::Clear_00de7b70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de7b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde7b70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: Global::FreeSizedBlock_00de7be0 */
GEN_LIB GEN_FRAME uint F_00de7be0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde7be0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkxMesh::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de7c10(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde7c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00de74f0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00de7ca0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de7ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde7ca0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00de7cc0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00de7cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde7cc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00de7d10 */
GEN_LIB GEN_FRAME unsigned int F_00de7d10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde7d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00de7d40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de7d40(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde7d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return (uint)param_1;
}

/* ref: FUN_00de7d80 */
GEN_LIB GEN_FRAME unsigned int F_00de7d80(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde7d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  while (-1 < iVar1) {
    this = *((undefined * PTR32 *)GEN_TOP((param_1 + iVar1 * 4)));
    if (this != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this GEN_EDX_ARG);
    }
    iVar1 = iVar1 - 1;
    *((undefined4 *)GEN_TOP((param_1 + 4 + iVar1 * 4))) = 0;
  }
  return;
}

/* ref: FUN_00de7df0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de7df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde7df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de7e60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de7e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde7e60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de7ed0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de7ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde7ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00de7f70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de7f70(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde7f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114b7f4));
  return (uint)in_ecx;
}

/* ref: FUN_00de7f80 */
GEN_LIB GEN_FRAME uint F_00de7f80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde7f80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00de7fc0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de7fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde7fc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0xc))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  while (-1 < iVar3) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar3 * 4)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar3 * 4))) = 0;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 8))),uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: hkxMaterialShaderSet::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de8030(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde8030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00de7fc0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00de8080 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de8080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde8080u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00d91520(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00de8090 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de8090(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde8090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *((undefined2 *)GEN_TOP(((int)in_ecx + 6))) = 1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114b804));
  F_00d91340(in_ecx + 5 GEN_EDX_FWD);
  return (uint)in_ecx;
}

/* ref: FUN_00de80b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de80b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde80b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114b804));
  F_00d91350(in_ecx + 5 GEN_EDX_FWD,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00de80d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de80d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde80d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00d91510(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00de80f0 */
GEN_LIB GEN_FRAME uint F_00de80f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xde80f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkAlignSceneToNodeOptions::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de8120(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde8120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d91510(param_1 + 5 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: Global::At_00de8170 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de8170(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde8170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx;
}

/* ref: Global::At_00de8180 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de8180(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde8180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: Global::DestructRange */
GEN_LIB GEN_FRAME unsigned int F_00de81b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde81b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int in_ecx;
  int iVar1;
  
  in_ecx = param_1;
  iVar1 = param_2;
  if (0 < param_2) {
    do {
      if (in_ecx != 0) {
        F_00de62d0(in_ecx GEN_EDX_ARG);
      }
      in_ecx = in_ecx + 8;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return;
}

/* ref: Global::FindIndex_00de81e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de81e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde81e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 8)))) {
    do {
      uVar1 = F_00da0d70(*((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + uVar2 * 8))) & 0xfffffffe,param_1);
      if (uVar1 == 0) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < *((int *)GEN_TOP(((int)this + 8))));
  }
  return 0xffffffff;
}

/* ref: Global::Find_00de8230 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de8230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde8230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  undefined * phVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)GEN_TOP(0x0));
  uVar5 = F_00de81e0(this GEN_EDX_FWD,(*(undefined * PTR32 *)&gen_args[1]));
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  if ((int)uVar5 < 0) {
    bVar4 = true;
    bVar3 = false;
    puVar6 = ((undefined4 *)GEN_TOP(F_01059650(&(*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)))));
  }
  else {
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    phVar2 = *((undefined * PTR32 *)GEN_TOP((iVar1 + 4 + uVar5 * 8)));
    bVar4 = false;
    bVar3 = true;
    if (phVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d919e0(phVar2 GEN_EDX_ARG);
    }
    (*(undefined * PTR32 *)&gen_args[1]) = *((undefined * PTR32 *)GEN_TOP((iVar1 + 4 + uVar5 * 8)));
    puVar6 = &(*(undefined * PTR32 *)&gen_args[1]);
  }
  phVar2 = (*(undefined * PTR32 *)&gen_args[1]);
  if (((undefined *)GEN_TOP(*puVar6)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(((undefined *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar6;
  if ((bVar3) && (phVar2 != ((undefined *)GEN_TOP(0x0)))) {
    F_00d91a80(phVar2 GEN_EDX_ARG);
  }
  if ((bVar4) && ((*(undefined * PTR32 *)(gen_frame + 0x8)) != ((undefined *)GEN_TOP(0x0)))) {
    F_00d91a80((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  }
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00de82d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de82d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xde82d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  undefined * phVar1;
  int in_ecx;
  uint uVar2;
  uint uVar3;
  
  F_00de8230(this GEN_EDX_FWD,&(*(undefined * PTR32 *)&gen_args[0]),(*(undefined * PTR32 *)&gen_args[0]));
  in_ecx = (*(int *)&gen_args[1]);
  if ((*(undefined * PTR32 *)&gen_args[0]) == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  if ((*(int *)&gen_args[1]) != 0) {
    uVar2 = F_010596b0(&(*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    uVar2 = F_00d92610(uVar2 GEN_EDX_ARG);
    uVar3 = F_00d92610(in_ecx GEN_EDX_ARG);
    uVar2 = F_00da0d70(uVar3,uVar2);
    if (uVar2 != 0) {
      if ((*(undefined * PTR32 *)&gen_args[0]) == ((undefined *)GEN_TOP(0x0))) {
        return 0;
      }
      F_00d91a80((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
      return 0;
    }
  }
  phVar1 = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(undefined * PTR32 *)&gen_args[0]) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  }
  return (uint)phVar1;
}

/* ref: FUN_00de8340 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de8340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde8340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00de82d0(this GEN_EDX_FWD,param_1,&REFG(undefined, 0x15e2ef4));
  return uVar1;
}

/* ref: FUN_00de8360 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de8360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde8360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00de82d0(this GEN_EDX_FWD,param_1,&REFG(undefined, 0x15e2eac));
  return uVar1;
}

/* ref: FUN_00de8380 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de8380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde8380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00de82d0(this GEN_EDX_FWD,param_1,&REFG(undefined, 0x15e2bc4));
  return uVar1;
}

/* ref: FUN_00de83a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de83a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde83a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00de82d0(this GEN_EDX_FWD,param_1,&REFG(undefined, 0x15e2e64));
  return uVar1;
}

/* ref: FUN_00de83c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de83c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde83c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00de82d0(this GEN_EDX_FWD,param_1,&REFG(undefined, 0x15e3494));
  return uVar1;
}

/* ref: FUN_00de83e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de83e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde83e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00de82d0(this GEN_EDX_FWD,param_1,&REFG(undefined, 0x15e33bc));
  return uVar1;
}

/* ref: FUN_00de8400 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de8400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde8400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00de82d0(this GEN_EDX_FWD,param_1,&REFG(undefined, 0x15e3404));
  return uVar1;
}

/* ref: FUN_00de8420 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de8420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde8420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00de82d0(this GEN_EDX_FWD,param_1,&REFG(undefined, 0x15e344c));
  return uVar1;
}

/* ref: FUN_00de8440 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de8440(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined1 * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xde8440u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined1 * param_4 = (undefined1 *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x210, 0, 4);
  uint uVar1;
  undefined * phVar2;
  char * pcVar3;
  char * pcVar4;
  
  uVar1 = F_00de8340(param_1 GEN_EDX_FWD,param_2);
  if (uVar1 != 0) {
    *param_4 = **((undefined1 * PTR32 *)GEN_TOP((uVar1 + 8)));
    return 0;
  }
  uVar1 = F_00de8360(param_1 GEN_EDX_ARG,param_2);
  if (uVar1 != 0) {
    *param_4 = **((int * PTR32 *)GEN_TOP((uVar1 + 8))) != 0;
    return 0;
  }
  if (param_3 != '\0') {
    F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
    pcVar4 = ((char *)REFP(0x114b854));
    pcVar3 = ((char *)REFP(0x114b844));
    phVar2 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x114b834)))));
    phVar2 = ((undefined *)GEN_TOP(F_00d9fe80(phVar2 GEN_EDX_ARG,param_2)));
    phVar2 = ((undefined *)GEN_TOP(F_00d9fe80(phVar2 GEN_EDX_ARG,pcVar3)));
    phVar2 = ((undefined *)GEN_TOP(F_00da0420(phVar2 GEN_EDX_ARG,param_1)));
    F_00d9fe80(phVar2 GEN_EDX_ARG,pcVar4);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xabbaab81,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114b810)),0x2f);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
  }
  return 1;
}

/* ref: FUN_00de8520 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de8520(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(uint * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xde8520u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(uint * param_4 = (uint *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x210, 0, 4);
  uint uVar1;
  undefined * phVar2;
  char * pcVar3;
  char * pcVar4;
  
  uVar1 = F_00de8360(param_1 GEN_EDX_FWD,param_2);
  if (uVar1 == 0) {
    uVar1 = F_00de8340(param_1 GEN_EDX_ARG,param_2);
    if (uVar1 != 0) {
      *param_4 = (uint)(**((char * PTR32 *)GEN_TOP((uVar1 + 8))) != '\0');
      return 0;
    }
    uVar1 = F_00de8380(param_1 GEN_EDX_ARG,param_2);
    if (uVar1 == 0) {
      if (param_3 != '\0') {
        F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
        pcVar4 = ((char *)REFP(0x114b854));
        pcVar3 = ((char *)REFP(0x114b844));
        phVar2 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x114b868)))));
        phVar2 = ((undefined *)GEN_TOP(F_00d9fe80(phVar2 GEN_EDX_ARG,param_2)));
        phVar2 = ((undefined *)GEN_TOP(F_00d9fe80(phVar2 GEN_EDX_ARG,pcVar3)));
        phVar2 = ((undefined *)GEN_TOP(F_00da0420(phVar2 GEN_EDX_ARG,param_1)));
        F_00d9fe80(phVar2 GEN_EDX_ARG,pcVar4);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                  (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xabbaab81,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114b810)),0x57);
        F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
      }
      return 1;
    }
  }
  *param_4 = **((uint * PTR32 *)GEN_TOP((uVar1 + 8)));
  return 0;
}

/* ref: FUN_00de8610 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de8610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xde8610u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00de8520(this GEN_EDX_FWD,param_1,(undefined1)param_2,param_3);
  return uVar1;
}

/* ref: FUN_00de8620 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de8620(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(uint * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xde8620u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(uint * param_4 = (uint *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x210, 0, 4);
  uint uVar1;
  undefined * phVar2;
  char * pcVar3;
  char * pcVar4;
  
  uVar1 = F_00de83a0(param_1 GEN_EDX_FWD,param_2);
  if (uVar1 != 0) {
    *param_4 = **((uint * PTR32 *)GEN_TOP((uVar1 + 8))) & 0xfffffffe;
    return 0;
  }
  uVar1 = F_00de8380(param_1 GEN_EDX_ARG,param_2);
  if (uVar1 != 0) {
    F_00de97f0(*((undefined * PTR32 *)GEN_TOP((uVar1 + 0x20))) GEN_EDX_ARG,**((undefined4 * PTR32 *)GEN_TOP((uVar1 + 8))),param_4);
    return 0;
  }
  if (param_3 != '\0') {
    F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
    pcVar4 = ((char *)REFP(0x114b854));
    pcVar3 = ((char *)REFP(0x114b844));
    phVar2 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x114b87c)))));
    phVar2 = ((undefined *)GEN_TOP(F_00d9fe80(phVar2 GEN_EDX_ARG,param_2)));
    phVar2 = ((undefined *)GEN_TOP(F_00d9fe80(phVar2 GEN_EDX_ARG,pcVar3)));
    phVar2 = ((undefined *)GEN_TOP(F_00da0420(phVar2 GEN_EDX_ARG,param_1)));
    F_00d9fe80(phVar2 GEN_EDX_ARG,pcVar4);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xabbaab81,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114b810)),0x7d);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
  }
  return 1;
}

/* ref: FUN_00de8700 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de8700(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xde8700u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x210, 0, 4);
  uint uVar1;
  undefined * phVar2;
  char * pcVar3;
  char * pcVar4;
  
  uVar1 = F_00de83c0(param_1 GEN_EDX_FWD,param_2);
  if (uVar1 != 0) {
    *param_4 = **((undefined4 * PTR32 *)GEN_TOP((uVar1 + 8)));
    return 0;
  }
  if (param_3 != '\0') {
    F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
    pcVar4 = ((char *)REFP(0x114b854));
    pcVar3 = ((char *)REFP(0x114b844));
    phVar2 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x114b890)))));
    phVar2 = ((undefined *)GEN_TOP(F_00d9fe80(phVar2 GEN_EDX_ARG,param_2)));
    phVar2 = ((undefined *)GEN_TOP(F_00d9fe80(phVar2 GEN_EDX_ARG,pcVar3)));
    phVar2 = ((undefined *)GEN_TOP(F_00da0420(phVar2 GEN_EDX_ARG,param_1)));
    F_00d9fe80(phVar2 GEN_EDX_ARG,pcVar4);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xabbaab81,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114b810)),0x8e);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
  }
  return 1;
}

/* ref: FUN_00de87c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de87c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xde87c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x210, 0, 4);
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined * phVar6;
  char * pcVar7;
  char * pcVar8;
  
  uVar5 = F_00de83e0(param_1 GEN_EDX_FWD,param_2);
  if (uVar5 != 0) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((uVar5 + 8)));
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    uVar4 = puVar1[3];
    *param_4 = *puVar1;
    param_4[1] = uVar2;
    param_4[2] = uVar3;
    param_4[3] = uVar4;
    return 0;
  }
  if (param_3 != '\0') {
    F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
    pcVar8 = ((char *)REFP(0x114b854));
    pcVar7 = ((char *)REFP(0x114b844));
    phVar6 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x114b890)))));
    phVar6 = ((undefined *)GEN_TOP(F_00d9fe80(phVar6 GEN_EDX_ARG,param_2)));
    phVar6 = ((undefined *)GEN_TOP(F_00d9fe80(phVar6 GEN_EDX_ARG,pcVar7)));
    phVar6 = ((undefined *)GEN_TOP(F_00da0420(phVar6 GEN_EDX_ARG,param_1)));
    F_00d9fe80(phVar6 GEN_EDX_ARG,pcVar8);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xabbaab81,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114b810)),0x9f);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
  }
  return 1;
}

/* ref: FUN_00de8880 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de8880(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xde8880u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x210, 0, 4);
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined * phVar6;
  char * pcVar7;
  char * pcVar8;
  
  uVar5 = F_00de8400(param_1 GEN_EDX_FWD,param_2);
  if (uVar5 != 0) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((uVar5 + 8)));
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    uVar4 = puVar1[3];
    *param_4 = *puVar1;
    param_4[1] = uVar2;
    param_4[2] = uVar3;
    param_4[3] = uVar4;
    return 0;
  }
  if (param_3 != '\0') {
    F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
    pcVar8 = ((char *)REFP(0x114b854));
    pcVar7 = ((char *)REFP(0x114b844));
    phVar6 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x114b8a4)))));
    phVar6 = ((undefined *)GEN_TOP(F_00d9fe80(phVar6 GEN_EDX_ARG,param_2)));
    phVar6 = ((undefined *)GEN_TOP(F_00d9fe80(phVar6 GEN_EDX_ARG,pcVar7)));
    phVar6 = ((undefined *)GEN_TOP(F_00da0420(phVar6 GEN_EDX_ARG,param_1)));
    F_00d9fe80(phVar6 GEN_EDX_ARG,pcVar8);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xabbaab81,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114b810)),0xb0);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
  }
  return 1;
}

/* ref: FUN_00de8940 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de8940(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xde8940u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x210, 0, 4);
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined * phVar6;
  char * pcVar7;
  char * pcVar8;
  
  uVar5 = F_00de8420(param_1 GEN_EDX_FWD,param_2);
  if (uVar5 != 0) {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((uVar5 + 8)));
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    uVar4 = puVar1[3];
    *param_4 = *puVar1;
    param_4[1] = uVar2;
    param_4[2] = uVar3;
    param_4[3] = uVar4;
    uVar2 = puVar1[5];
    uVar3 = puVar1[6];
    uVar4 = puVar1[7];
    param_4[4] = puVar1[4];
    param_4[5] = uVar2;
    param_4[6] = uVar3;
    param_4[7] = uVar4;
    uVar2 = puVar1[9];
    uVar3 = puVar1[10];
    uVar4 = puVar1[0xb];
    param_4[8] = puVar1[8];
    param_4[9] = uVar2;
    param_4[10] = uVar3;
    param_4[0xb] = uVar4;
    uVar2 = puVar1[0xd];
    uVar3 = puVar1[0xe];
    uVar4 = puVar1[0xf];
    param_4[0xc] = puVar1[0xc];
    param_4[0xd] = uVar2;
    param_4[0xe] = uVar3;
    param_4[0xf] = uVar4;
    return 0;
  }
  if (param_3 != '\0') {
    F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
    pcVar8 = ((char *)REFP(0x114b854));
    pcVar7 = ((char *)REFP(0x114b844));
    phVar6 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x114b8bc)))));
    phVar6 = ((undefined *)GEN_TOP(F_00d9fe80(phVar6 GEN_EDX_ARG,param_2)));
    phVar6 = ((undefined *)GEN_TOP(F_00d9fe80(phVar6 GEN_EDX_ARG,pcVar7)));
    phVar6 = ((undefined *)GEN_TOP(F_00da0420(phVar6 GEN_EDX_ARG,param_1)));
    F_00d9fe80(phVar6 GEN_EDX_ARG,pcVar8);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xabbaab81,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114b810)),0xc1);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
  }
  return 1;
}

/* ref: Global::Assign_00de8a20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de8a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde8a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * this_00;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  
  F_00d91540(this GEN_EDX_FWD,param_1);
  this_00 = ((int *)GEN_TOP(((int)this + 4)));
  iVar3 = *((int *)GEN_TOP(((int)this + 8))) - 1;
  if (-1 < iVar3) {
    puVar2 = ((undefined4 *)GEN_TOP((*this_00 + 4 + iVar3 * 8)));
    do {
      if (((undefined *)GEN_TOP(*puVar2)) != ((undefined *)GEN_TOP(0x0))) {
        F_00d91a80(((undefined *)GEN_TOP(*puVar2)) GEN_EDX_ARG);
      }
      *puVar2 = 0;
      F_00d91510(puVar2 - 1 GEN_EDX_ARG);
      puVar2 = puVar2 - 2;
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  iVar1 = -*((int *)GEN_TOP(((int)this + 8)));
  iVar3 = *this_00 + *((int *)GEN_TOP(((int)this + 8))) * 8;
  if (0 < iVar1) {
    do {
      if (iVar3 != 0) {
        F_00de62d0(iVar3 GEN_EDX_ARG);
      }
      iVar3 = iVar3 + 8;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (*((int *)GEN_TOP((param_1 + 8))) != 0) {
    F_00de8e10(this_00 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),0,*((undefined4 *)GEN_TOP((param_1 + 4))),
                        *((int *)GEN_TOP((param_1 + 8))));
  }
  return (uint)this;
}

/* ref: Global::ReserveWithAllocator */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de8af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde8af0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,8);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: Global::CopyRefPair */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de8b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde8b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_00d914e0(this GEN_EDX_FWD,param_1);
  if (*((undefined * PTR32 *)GEN_TOP((param_1 + 4))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(*((undefined * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  return (uint)this;
}

/* ref: Global::UninitializedCopyRefPairs */
GEN_LIB GEN_FRAME unsigned int F_00de8b60(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xde8b60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined * this;
  
  if (0 < param_2) {
    puVar2 = ((undefined4 *)GEN_TOP((param_3 + 4)));
    iVar1 = param_2;
    this = param_1;
    do {
      if (this != ((undefined *)GEN_TOP(0x0))) {
        F_00d914e0(this GEN_EDX_ARG,puVar2 - 1);
        if (((undefined *)GEN_TOP(*puVar2)) != ((undefined *)GEN_TOP(0x0))) {
          F_00d919e0(((undefined *)GEN_TOP(*puVar2)) GEN_EDX_ARG);
        }
        *((undefined4 *)GEN_TOP((((int)param_1 - param_3) + (int)puVar2))) = *puVar2;
      }
      this = ((undefined *)GEN_TOP(((int)this + 8)));
      puVar2 = puVar2 + 2;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return;
}

/* ref: Global::ResizeWithAllocator */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de8bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde8bb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,8);
  }
  iVar3 = (*((int *)GEN_TOP(((int)this + 4))) - param_2) - 1;
  if (-1 < iVar3) {
    puVar4 = ((undefined4 *)GEN_TOP((*(int *)this + param_2 * 8 + 4 + iVar3 * 8)));
    do {
      if (((undefined *)GEN_TOP(*puVar4)) != ((undefined *)GEN_TOP(0x0))) {
        F_00d91a80(((undefined *)GEN_TOP(*puVar4)) GEN_EDX_ARG);
      }
      *puVar4 = 0;
      F_00d91510(puVar4 - 1 GEN_EDX_ARG);
      puVar4 = puVar4 - 2;
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  uVar2 = param_2 - *((int *)GEN_TOP(((int)this + 4)));
  iVar3 = *(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8;
  uVar1 = uVar2;
  if (0 < (int)uVar2) {
    do {
      if (iVar3 != 0) {
        uVar2 = F_00de62d0(iVar3 GEN_EDX_ARG);
      }
      iVar3 = iVar3 + 8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return uVar2;
}

/* ref: Global::ReplaceRange_00de8c50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de8c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(int param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xde8c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(int param_5 = (int)gen_a5;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  uVar3 = (iVar2 - param_3) + param_5;
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < (int)uVar3) {
    uVar1 = uVar1 * 2;
    if ((int)uVar1 <= (int)uVar3) {
      uVar1 = uVar3;
    }
    F_00d95690(param_1,this,uVar1,8);
  }
  iVar5 = param_3 - 1;
  if (-1 < iVar5) {
    puVar4 = ((undefined4 *)GEN_TOP((*(int *)this + param_2 * 8 + 4 + iVar5 * 8)));
    do {
      if (((undefined *)GEN_TOP(*puVar4)) != ((undefined *)GEN_TOP(0x0))) {
        F_00d91a80(((undefined *)GEN_TOP(*puVar4)) GEN_EDX_ARG);
      }
      *puVar4 = 0;
      F_00d91510(puVar4 - 1 GEN_EDX_ARG);
      puVar4 = puVar4 - 2;
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
  }
  F_00da38f0(*(int *)this + (param_2 + param_5) * 8,*(int *)this + (param_2 + param_3) * 8,
                     ((iVar2 - param_2) - param_3) * 8);
  this_00 = ((undefined *)GEN_TOP((*(int *)this + param_2 * 8)));
  if (param_5 < 1) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar3;
    return (uint)this_00;
  }
  iVar2 = (int)this_00 - param_4;
  puVar4 = ((undefined4 *)GEN_TOP((param_4 + 4)));
  param_3 = param_5;
  do {
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d914e0(this_00 GEN_EDX_ARG,puVar4 - 1);
      if (((undefined *)GEN_TOP(*puVar4)) != ((undefined *)GEN_TOP(0x0))) {
        F_00d919e0(((undefined *)GEN_TOP(*puVar4)) GEN_EDX_ARG);
      }
      *((undefined4 *)GEN_TOP((iVar2 + (int)puVar4))) = *puVar4;
    }
    this_00 = ((undefined *)GEN_TOP(((int)this_00 + 8)));
    puVar4 = puVar4 + 2;
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar3;
  return uVar3;
}

/* ref: Global::Resize_00de8d70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de8d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde8d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < param_1) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,8);
  }
  iVar3 = (*((int *)GEN_TOP(((int)this + 4))) - param_1) - 1;
  if (-1 < iVar3) {
    puVar4 = ((undefined4 *)GEN_TOP((*(int *)this + param_1 * 8 + 4 + iVar3 * 8)));
    do {
      if (((undefined *)GEN_TOP(*puVar4)) != ((undefined *)GEN_TOP(0x0))) {
        F_00d91a80(((undefined *)GEN_TOP(*puVar4)) GEN_EDX_ARG);
      }
      *puVar4 = 0;
      F_00d91510(puVar4 - 1 GEN_EDX_ARG);
      puVar4 = puVar4 - 2;
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  uVar2 = param_1 - *((int *)GEN_TOP(((int)this + 4)));
  iVar3 = *(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8;
  uVar1 = uVar2;
  if (0 < (int)uVar2) {
    do {
      if (iVar3 != 0) {
        uVar2 = F_00de62d0(iVar3 GEN_EDX_ARG);
      }
      iVar3 = iVar3 + 8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar2;
}

/* ref: Global::InsertWithAllocator */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de8e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xde8e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00de8c50(this GEN_EDX_FWD,param_1,param_2,0,param_3,param_4);
  return uVar1;
}

/* ref: Global::Insert_00de8e30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de8e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xde8e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00de8e10(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3);
  return uVar1;
}

/* ref: Global::AssignRefPtr_00de8e90 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00de8e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde8e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_ARG);
    *(undefined4 *)this = *param_1;
    return;
  }
  *(undefined4 *)this = *param_1;
  return;
}

/* ref: Global::GetElementPtr4_00de8ef0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de8ef0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde8ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: Global::GetElementPtr4_00de8f00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de8f00(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde8f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: Global::AssignRefPtr_00de8f30 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00de8f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde8f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_ARG);
    *(undefined4 *)this = *param_1;
    return;
  }
  *(undefined4 *)this = *param_1;
  return;
}

/* ref: Global::GetElementPtr4_00de8f90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de8f90(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde8f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: Global::Fill16 */
GEN_LIB GEN_FRAME unsigned int F_00de8fc0(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined8 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xde8fc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;)
  undefined8 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      *puVar1 = *param_3;
      puVar1[1] = param_3[1];
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00de9000 */
GEN_LIB GEN_FRAME uint F_00de9000(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde9000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: Global::RefPtrCopy */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde9010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00de9040 */
GEN_LIB GEN_FRAME uint F_00de9040(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde9040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: Global::PushBack16WithAllocator */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de90a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined8 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde90a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;)
  undefined8 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x10);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * 0x10 + *(int *)this)));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: Global::UninitializedFillRefPtr */
GEN_LIB GEN_FRAME unsigned int F_00de9100(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xde9100u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = param_2;
  puVar2 = param_1;
  if (0 < param_2) {
    do {
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        if (((undefined *)GEN_TOP(*param_3)) != ((undefined *)GEN_TOP(0x0))) {
          F_00d919e0(((undefined *)GEN_TOP(*param_3)) GEN_EDX_ARG);
        }
        *puVar2 = *param_3;
      }
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: Global::UninitializedFillRefPtr_00de9140 */
GEN_LIB GEN_FRAME unsigned int F_00de9140(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xde9140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = param_2;
  puVar2 = param_1;
  if (0 < param_2) {
    do {
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        if (((undefined *)GEN_TOP(*param_3)) != ((undefined *)GEN_TOP(0x0))) {
          F_00d919e0(((undefined *)GEN_TOP(*param_3)) GEN_EDX_ARG);
        }
        *puVar2 = *param_3;
      }
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: Global::GetTotalTriangleCount */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de9180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde9180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x10)))) {
    do {
      uVar1 = F_00de9890(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar3 * 4))) GEN_EDX_FWD);
      iVar3 = iVar3 + 1;
      uVar2 = uVar2 + uVar1;
    } while (iVar3 < *((int *)GEN_TOP(((int)this + 0x10))));
  }
  return uVar2;
}

/* ref: Global::GetTriangle */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00de91b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xde91b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  undefined * this_00;
  uint uVar1;
  int iVar2;
  uint local_8;
  
  iVar2 = 0;
  local_8 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x10)))) {
    while( true ) {
      this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar2 * 4)));
      uVar1 = F_00de9890(this_00 GEN_EDX_FWD);
      if (param_1 < uVar1 + local_8) break;
      iVar2 = iVar2 + 1;
      local_8 = uVar1 + local_8;
      if (*((int *)GEN_TOP(((int)this + 0x10))) <= iVar2) {
        return;
      }
    }
    F_00de98c0(this_00 GEN_EDX_ARG,param_1 - local_8,param_2,param_3,param_4);
  }
  return;
}

/* ref: FUN_00de9210 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00de9210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde9210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined * this_00;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 * puVar8;
  int iVar9;
  int iVar10;
  short * psVar11;
  int iVar12;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 8)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    iVar12 = 0;
    iVar7 = 0;
    if (0 < *((int *)GEN_TOP(((int)this_00 + 0x60)))) {
      psVar11 = ((short *)GEN_TOP((*((int *)GEN_TOP(((int)this_00 + 0x5c))) + 6)));
      do {
        if (*psVar11 == 1) {
          if (iVar12 == 0) {
            iVar7 = iVar7 * 0x10 + *((int *)GEN_TOP(((int)this_00 + 0x5c)));
            goto LAB_00de924d;
          }
          iVar12 = iVar12 + 1;
        }
        iVar7 = iVar7 + 1;
        psVar11 = psVar11 + 8;
      } while (iVar7 < *((int *)GEN_TOP(((int)this_00 + 0x60))));
    }
    iVar7 = 0;
LAB_00de924d: ;
    iVar12 = *((int *)GEN_TOP(((int)this_00 + 0x44)));
    if ((iVar7 != 0) && (0 < iVar12)) {
      puVar8 = ((undefined4 *)GEN_TOP(F_00de3890(this_00 GEN_EDX_FWD,iVar7)));
      iVar2 = *((int *)GEN_TOP((iVar7 + 8)));
      iVar10 = param_1[1];
      iVar7 = iVar10 + iVar12;
      if ((int)(param_1[2] & 0x3fffffffU) < iVar7) {
        iVar9 = (param_1[2] & 0x3fffffffU) * 2;
        if (iVar9 <= iVar7) {
          iVar9 = iVar7;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_1,iVar9,0x10);
      }
      param_1[1] = iVar7;
      if (0 < iVar12) {
        iVar10 = iVar10 << 4;
        do {
          uVar3 = *puVar8;
          uVar4 = puVar8[1];
          uVar5 = puVar8[2];
          uVar6 = puVar8[3];
          puVar8 = ((undefined4 *)GEN_TOP(((int)puVar8 + iVar2)));
          puVar1 = ((undefined4 *)GEN_TOP((*param_1 + iVar10)));
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          puVar1[2] = uVar5;
          puVar1[3] = uVar6;
          iVar10 = iVar10 + 0x10;
          iVar12 = iVar12 - 1;
        } while (iVar12 != 0);
      }
    }
  }
  return;
}

/* ref: FUN_00de92f0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00de92f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde92f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x230, 0);
  int iVar1;
  ushort * puVar2;
  uint * puVar3;
  uint uVar4;
  undefined8 * puVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  
  (*(undefined * PTR32 *)(gen_frame + 0x210)) = this;
  F_00de9210(this GEN_EDX_FWD,param_1);
  (*(int *)(gen_frame + 0x214)) = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x10)))) {
    do {
      iVar6 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + (*(int *)(gen_frame + 0x214)) * 4)));
      uVar7 = *((uint *)GEN_TOP((iVar6 + 0x1c))) | *((uint *)GEN_TOP((iVar6 + 0x10)));
      cVar8 = 0 < (int)*((uint *)GEN_TOP((iVar6 + 0x10)));
      iVar9 = 0;
      (*(uint *)(gen_frame + 0x20c)) = uVar7;
      (*(bool *)(gen_frame + 0x22b)) = (bool)cVar8;
      if (0 < (int)uVar7) {
        do {
          (*(undefined4 *)(gen_frame + 0x224)) = param_2;
          if (*((char *)GEN_TOP((iVar6 + 8))) == '\x01') {
            if (cVar8 == '\0') {
              iVar1 = *((int *)GEN_TOP((iVar6 + 0x18)));
              (*(uint *)(gen_frame + 0x218)) = *((uint *)GEN_TOP((iVar1 + iVar9 * 4)));
              uVar4 = *((uint *)GEN_TOP((iVar1 + 8 + iVar9 * 4)));
              (*(uint *)(gen_frame + 0x21c)) = *((uint *)GEN_TOP((iVar1 + 4 + iVar9 * 4)));
            }
            else {
              iVar1 = *((int *)GEN_TOP((iVar6 + 0xc)));
              (*(uint *)(gen_frame + 0x218)) = (uint)*((ushort *)GEN_TOP((iVar1 + iVar9 * 2)));
              uVar4 = (uint)*((ushort *)GEN_TOP((iVar1 + 4 + iVar9 * 2)));
              (*(uint *)(gen_frame + 0x21c)) = (uint)*((ushort *)GEN_TOP((iVar1 + 2 + iVar9 * 2)));
            }
            iVar9 = iVar9 + 3;
LAB_00de940b: ;
            (*(uint *)(gen_frame + 0x220)) = uVar4;
            if (*((uint *)GEN_TOP((param_1 + 0x10))) == (*((uint *)GEN_TOP((param_1 + 0x14))) & 0x3fffffff)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP((param_1 + 0xc))),0x10);
              uVar7 = (*(uint *)(gen_frame + 0x20c));
              cVar8 = (*(bool *)(gen_frame + 0x22b));
            }
            puVar5 = ((undefined8 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) * 0x10 + *((int *)GEN_TOP((param_1 + 0xc))))));
            *puVar5 = CONCAT44((*(uint *)(gen_frame + 0x21c)),(*(uint *)(gen_frame + 0x218)));
            puVar5[1] = CONCAT44((*(undefined4 *)(gen_frame + 0x224)),(*(uint *)(gen_frame + 0x220)));
            *((int *)GEN_TOP((param_1 + 0x10))) = *((int *)GEN_TOP((param_1 + 0x10))) + 1;
            this = (*(undefined * PTR32 *)(gen_frame + 0x210));
          }
          else {
            if (*((char *)GEN_TOP((iVar6 + 8))) != '\x02') {
              F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
              F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x114b8e8)));
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                        (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xabbaa883,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114b8d0)),0x96);
              F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
              break;
            }
            if (1 < iVar9) {
              if (iVar9 == 2) {
                if (cVar8 == '\0') {
                  puVar3 = *((uint * PTR32 *)GEN_TOP((iVar6 + 0x18)));
                  (*(uint *)(gen_frame + 0x218)) = *puVar3;
                  uVar4 = puVar3[2];
                  (*(uint *)(gen_frame + 0x21c)) = puVar3[1];
                  iVar9 = 3;
                }
                else {
                  puVar2 = *((ushort * PTR32 *)GEN_TOP((iVar6 + 0xc)));
                  (*(uint *)(gen_frame + 0x218)) = (uint)*puVar2;
                  uVar4 = (uint)puVar2[2];
                  (*(uint *)(gen_frame + 0x21c)) = (uint)puVar2[1];
                  iVar9 = 3;
                }
              }
              else {
                iVar1 = *((int *)GEN_TOP((param_1 + 0xc))) - 0x10 + *((int *)GEN_TOP((param_1 + 0x10))) * 0x10;
                (*(uint *)(gen_frame + 0x218)) = *((uint *)GEN_TOP((iVar1 + 8)));
                (*(uint *)(gen_frame + 0x21c)) = *((uint *)GEN_TOP((iVar1 + 4)));
                if (cVar8 == '\0') {
                  uVar4 = *((uint *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 0x18))) + iVar9 * 4)));
                  iVar9 = iVar9 + 1;
                }
                else {
                  uVar4 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 0xc))) + iVar9 * 2)));
                  iVar9 = iVar9 + 1;
                }
              }
              goto LAB_00de940b;
            }
            iVar9 = iVar9 + 1;
          }
        } while (iVar9 < (int)uVar7);
      }
      iVar6 = (*(int *)(gen_frame + 0x214)) + 1;
      (*(int *)(gen_frame + 0x214)) = iVar6;
    } while (iVar6 < *((int *)GEN_TOP(((int)this + 0x10))));
  }
  return;
}

/* ref: FUN_00de94d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de94d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde94d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined * phVar5;
  int iVar6;
  int local_c;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114ad4c));
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  piVar1 = ((int *)GEN_TOP(((int)this + 0xc)));
  *piVar1 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  piVar2 = ((int *)GEN_TOP(((int)this + 0x1c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0x80000000;
  *piVar2 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  local_c = 0;
  if (0 < *((int *)GEN_TOP((param_1 + 0x10)))) {
    do {
      puVar3 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xc))) + local_c * 4)));
      if (*((uint *)GEN_TOP(((int)this + 0x10))) == (*((uint *)GEN_TOP(((int)this + 0x14))) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,4);
      }
      puVar4 = ((undefined4 *)GEN_TOP((*piVar1 + *((int *)GEN_TOP(((int)this + 0x10))) * 4)));
      if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
        phVar5 = ((undefined *)GEN_TOP(*puVar3));
        if (phVar5 != ((undefined *)GEN_TOP(0x0))) {
          F_00d919e0(phVar5 GEN_EDX_ARG);
        }
        *puVar4 = *puVar3;
      }
      *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
      local_c = local_c + 1;
    } while (local_c < *((int *)GEN_TOP((param_1 + 0x10))));
  }
  iVar6 = 0;
  if (0 < *((int *)GEN_TOP((param_1 + 0x20)))) {
    do {
      puVar3 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x1c))) + iVar6 * 4)));
      if (*((uint *)GEN_TOP(((int)this + 0x20))) == (*((uint *)GEN_TOP(((int)this + 0x24))) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar2,4);
      }
      puVar4 = ((undefined4 *)GEN_TOP((*piVar2 + *((int *)GEN_TOP(((int)this + 0x20))) * 4)));
      if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
        phVar5 = ((undefined *)GEN_TOP(*puVar3));
        if (phVar5 != ((undefined *)GEN_TOP(0x0))) {
          F_00d919e0(phVar5 GEN_EDX_ARG);
        }
        *puVar4 = *puVar3;
      }
      *((int *)GEN_TOP(((int)this + 0x20))) = *((int *)GEN_TOP(((int)this + 0x20))) + 1;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *((int *)GEN_TOP((param_1 + 0x20))));
  }
  if (*((undefined * PTR32 *)GEN_TOP((param_1 + 0x18))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x18))) GEN_EDX_ARG);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = *((undefined4 *)GEN_TOP((param_1 + 0x18)));
  if (*((undefined * PTR32 *)GEN_TOP((param_1 + 8))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(*((undefined * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  return (uint)this;
}

/* ref: Global::PushBack16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde9640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;)
  undefined8 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0x10);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * 0x10 + *(int *)this)));
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: Global::PushBackRefPtrWithAllocator */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde9690u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  uint uVar2;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  uVar2 = *(uint *)this;
  puVar1 = ((undefined4 *)GEN_TOP((uVar2 + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    if (((undefined *)GEN_TOP(*param_2)) != ((undefined *)GEN_TOP(0x0))) {
      uVar2 = F_00d919e0(((undefined *)GEN_TOP(*param_2)) GEN_EDX_ARG);
    }
    *puVar1 = *param_2;
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return uVar2;
}

/* ref: Global::PushBackRefPtrWithAllocator_00de96e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de96e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde96e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  uint uVar2;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  uVar2 = *(uint *)this;
  puVar1 = ((undefined4 *)GEN_TOP((uVar2 + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    if (((undefined *)GEN_TOP(*param_2)) != ((undefined *)GEN_TOP(0x0))) {
      uVar2 = F_00d919e0(((undefined *)GEN_TOP(*param_2)) GEN_EDX_ARG);
    }
    *puVar1 = *param_2;
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return uVar2;
}

/* ref: Global::PushBackRefPtr */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde9730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if (*((uint *)GEN_TOP(((int)this + 4))) == uVar2) {
    uVar2 = F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((uint *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  if (puVar1 != ((uint *)GEN_TOP(0x0))) {
    if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
      F_00d919e0(((undefined *)GEN_TOP(*param_1)) GEN_EDX_ARG);
    }
    uVar2 = *param_1;
    *puVar1 = uVar2;
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return uVar2;
}

/* ref: Global::PushBackRefPtr_00de9780 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde9780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if (*((uint *)GEN_TOP(((int)this + 4))) == uVar2) {
    uVar2 = F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((uint *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  if (puVar1 != ((uint *)GEN_TOP(0x0))) {
    if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
      F_00d919e0(((undefined *)GEN_TOP(*param_1)) GEN_EDX_ARG);
    }
    uVar2 = *param_1;
    *puVar1 = uVar2;
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return uVar2;
}

/* ref: Global::GetElementPtr8_00de97d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de97d0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde97d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: Global::FindValueByKey */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de97f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde97f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0xc)))) {
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 8)));
    do {
      if (*piVar2 == param_1) {
        *param_2 = (*((int * PTR32 *)GEN_TOP(((int)this + 8))))[iVar1 * 2 + 1] & 0xfffffffe;
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 < *((int *)GEN_TOP(((int)this + 0xc))));
  }
  return 1;
}

/* ref: Global::FindKeyByValue */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde9840u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0xc)))) {
    do {
      uVar1 = F_00da0d70(param_1,*((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4 + iVar2 * 8))) & 0xfffffffe);
      if (uVar1 == 0) {
        *param_2 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar2 * 8)));
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 0xc))));
  }
  return 1;
}

/* ref: Global::GetTriangleCount */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de9890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde9890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  if (iVar1 == 0) {
    iVar1 = *((int *)GEN_TOP(((int)this + 0x1c)));
  }
  if (*((char *)GEN_TOP(((int)this + 8))) != '\x01') {
    return 0;
  }
  return iVar1 / 3;
}

/* ref: Global::GetTriangleIndices */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00de98c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3), GEN_P(uint * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xde98c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  GEN_PIN(uint * param_4 = (uint *)(uintptr_t)gen_a4;)
  int iVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x10))) == 0) {
    if (*((int *)GEN_TOP(((int)this + 0x1c))) != 0) {
      if (*((char *)GEN_TOP(((int)this + 8))) == '\x01') {
        iVar1 = param_1 * 0xc;
        *param_2 = *((uint *)GEN_TOP((iVar1 + *((int *)GEN_TOP(((int)this + 0x18))))));
        *param_3 = *((uint *)GEN_TOP((iVar1 + 4 + *((int *)GEN_TOP(((int)this + 0x18))))));
        *param_4 = *((uint *)GEN_TOP((iVar1 + 8 + *((int *)GEN_TOP(((int)this + 0x18))))));
        return 1;
      }
      if (*((char *)GEN_TOP(((int)this + 8))) == '\x02') {
        *param_2 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + param_1 * 4)));
        *param_3 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 4 + param_1 * 4)));
        *param_4 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 8 + param_1 * 4)));
        return 1;
      }
    }
  }
  else {
    if (*((char *)GEN_TOP(((int)this + 8))) == '\x01') {
      iVar1 = param_1 * 6;
      *param_2 = (uint)*((ushort *)GEN_TOP((iVar1 + *((int *)GEN_TOP(((int)this + 0xc))))));
      *param_3 = (uint)*((ushort *)GEN_TOP((iVar1 + 2 + *((int *)GEN_TOP(((int)this + 0xc))))));
      *param_4 = (uint)*((ushort *)GEN_TOP((iVar1 + 4 + *((int *)GEN_TOP(((int)this + 0xc))))));
      return 1;
    }
    if (*((char *)GEN_TOP(((int)this + 8))) == '\x02') {
      *param_2 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + param_1 * 2)));
      *param_3 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 2 + param_1 * 2)));
      *param_4 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 4 + param_1 * 2)));
      return 1;
    }
  }
  *param_2 = 0xffffffff;
  *param_3 = 0xffffffff;
  *param_4 = 0xffffffff;
  return 0;
}

/* ref: FUN_00de99f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de99f0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde99f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP((in_ecx + 8))) = param_2;
  return in_ecx;
}

/* ref: hkLoader::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde9a00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,&REFG(undefined, 0x15e36a4),param_2);
  return uVar1;
}

/* ref: hkLoader::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde9a20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,param_1,&REFG(undefined, 0x15e36a4),param_2);
  return uVar1;
}

/* ref: hkLoader::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xde9a40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  char * pcVar1;
  uint uVar2;
  
  F_01059c30(((byte *)(gen_frame + 0x0)) GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]));
  pcVar1 = ((char *)GEN_TOP(F_01059720(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[0]) + 3)));
  if (*pcVar1 != '\0') {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
    F_01059700(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return uVar2;
  }
  F_01059700(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 0;
}

/* ref: hkLoader::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde9aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0xc))))(REFG(int * PTR32, 0x15e3738) GEN_EDX_FWD);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20))))(this GEN_EDX_ARG,param_1,uVar1);
  return uVar1;
}

/* ref: hkLoader::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde9ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0xc))))(REFG(int * PTR32, 0x15e3738) GEN_EDX_FWD);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1c))))(this GEN_EDX_ARG,param_1,uVar1);
  return uVar1;
}

/* ref: hkLoader::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde9b00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0xc))))(REFG(int * PTR32, 0x15e3738) GEN_EDX_FWD);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG,param_1,param_2,uVar1);
  return uVar1;
}

/* ref: hkLoader::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde9b30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0xc))))(REFG(int * PTR32, 0x15e3738) GEN_EDX_FWD);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,param_1,param_2,uVar1);
  return uVar1;
}

/* ref: hkLoader::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xde9b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined * phVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  undefined * phVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  F_00d91340(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD);
  piVar3 = ((int *)GEN_TOP(F_00deb6b0(param_1,&(*(undefined4 *)(gen_frame + 0x0)),0,0,param_3)));
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    F_00d91510(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    return 0;
  }
  iVar2 = *piVar3;
  uVar4 = F_00d92610(param_2 GEN_EDX_ARG);
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 0x18))))(piVar3,uVar4,param_3);
  phVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if (uVar4 != 0) {
    phVar5 = (*(undefined * PTR32 *)(gen_frame + 0x8)) + 8;
    if (*(uint *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0xc) == (*(uint *)((*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),phVar5,4);
    }
    *((int * PTR32 *)GEN_TOP((*(int *)phVar5 + *(int *)(phVar1 + 0xc) * 4))) = piVar3;
    phVar1 = phVar1 + 0xc;
    *(int *)phVar1 = *(int *)phVar1 + 1;
  }
  F_00d91510(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00de9c20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de9c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde9c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1099dcc));
  if (0 < *((int *)GEN_TOP(((int)this + 0xc)))) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar3 * 4)));
      if (*((short *)GEN_TOP(((int)piVar1 + 6))) == 1) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *((int *)GEN_TOP(((int)this + 0xc))));
  }
  iVar3 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0xc)))) {
    do {
      F_00d91a80(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar3 * 4))) GEN_EDX_ARG);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *((int *)GEN_TOP(((int)this + 0xc))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x10)));
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 8))),uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: FUN_00de9cf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9cf0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde9cf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00de9d00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9d00(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde9d00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: hkArray::GetElementPtr_00de9d10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9d10(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde9d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: hkArray::Reserve_00de9d30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde9d30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: Global::FillElements_00de9d70 */
GEN_LIB GEN_FRAME unsigned int F_00de9d70(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xde9d70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00de9db0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de9db0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde9db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  F_00d91340(in_ecx + 1 GEN_EDX_FWD);
  return (uint)in_ecx;
}

/* ref: FUN_00de9dd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9dd0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde9dd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  return (uint)in_ecx;
}

/* ref: hkArray::PushBack_00de9df0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde9df0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_2;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: hkArray::SetSize_00de9e30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde9e30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return uVar2;
}

/* ref: hkArray::PushBackDefault */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde9e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: hkArray::SetSizeDefault */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xde9eb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar2;
}

/* ref: hkRootLevelContainer::NamedVariant::Set */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xde9ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  F_00d91520(this GEN_EDX_FWD,param_1);
  F_01059680(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,param_2,param_3);
  uVar1 = F_010596b0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  if (uVar1 != 0) {
    uVar1 = F_010596b0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    uVar1 = F_00d92610(uVar1 GEN_EDX_ARG);
    uVar1 = F_00d91520(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,uVar1);
    return uVar1;
  }
  uVar1 = F_00d91520(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: Global::GetNamedVariantPtr */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9f70(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xde9f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00de9fb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00de9fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xde9fb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: hkRootLevelContainer::NamedVariant::GetTypeName */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00de9fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xde9fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_010596b0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  if (uVar1 != 0) {
    uVar1 = F_010596b0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    uVar1 = F_00d92610(uVar1 GEN_EDX_ARG);
    return uVar1;
  }
  return *((uint *)GEN_TOP(((int)this + 4))) & 0xfffffffe;
}

/* ref: hkRootLevelContainer::FindObjectByType */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dea020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdea020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined * this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  do {
    if ((param_2 == 0) || (*((int *)GEN_TOP(((int)this + 4))) <= iVar3)) break;
    iVar1 = *(int *)this + iVar4;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0xc;
  } while (*((int *)GEN_TOP((iVar1 + 8))) != param_2);
  if (iVar3 < *((int *)GEN_TOP(((int)this + 4)))) {
    iVar4 = iVar3 * 0xc;
    param_2 = iVar3;
    do {
      iVar3 = *(int *)this;
      this_00 = ((undefined *)GEN_TOP((iVar3 + 8 + iVar4)));
      uVar2 = F_010596b0(this_00 GEN_EDX_FWD);
      if (uVar2 == 0) {
        uVar2 = *((uint *)GEN_TOP((iVar3 + 4 + iVar4))) & 0xfffffffe;
      }
      else {
        uVar2 = F_010596b0(this_00 GEN_EDX_ARG);
        uVar2 = F_00d92610(uVar2 GEN_EDX_ARG);
      }
      if (uVar2 != 0) {
        iVar3 = *(int *)this;
        uVar2 = F_010596b0(((undefined *)GEN_TOP((iVar3 + 8 + iVar4))) GEN_EDX_ARG);
        if (uVar2 == 0) {
          uVar2 = *((uint *)GEN_TOP((iVar3 + 4 + iVar4))) & 0xfffffffe;
        }
        else {
          uVar2 = F_010596b0(((undefined *)GEN_TOP((iVar3 + 8 + iVar4))) GEN_EDX_ARG);
          uVar2 = F_00d92610(uVar2 GEN_EDX_ARG);
        }
        uVar2 = F_00da0d20(param_1,uVar2);
        if (uVar2 == 0) {
          return *((uint *)GEN_TOP((*(int *)this + 8 + param_2 * 0xc)));
        }
      }
      param_2 = param_2 + 1;
      iVar4 = iVar4 + 0xc;
    } while (param_2 < *((int *)GEN_TOP(((int)this + 4))));
  }
  return 0;
}

/* ref: hkRootLevelContainer::FindObjectByName */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dea100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdea100u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  do {
    if ((param_2 == 0) || (*((int *)GEN_TOP(((int)this + 4))) <= iVar3)) break;
    iVar1 = *(int *)this + iVar4;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0xc;
  } while (*((int *)GEN_TOP((iVar1 + 8))) != param_2);
  if (iVar3 < *((int *)GEN_TOP(((int)this + 4)))) {
    iVar4 = iVar3 * 0xc;
    do {
      if ((*((uint *)GEN_TOP((iVar4 + *(int *)this))) & 0xfffffffe) != 0) {
        uVar2 = F_00da0d20(param_1,*((uint *)GEN_TOP((iVar4 + *(int *)this))) & 0xfffffffe);
        if (uVar2 == 0) {
          return *((uint *)GEN_TOP((*(int *)this + 8 + iVar3 * 0xc)));
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar3 < *((int *)GEN_TOP(((int)this + 4))));
  }
  return 0;
}

/* ref: hkRootLevelContainer::NamedVariant::NamedVariant */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dea180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdea180u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  F_00d91340(this GEN_EDX_FWD);
  F_00d91340((int)this + 4 GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  F_00d91520(this GEN_EDX_ARG,param_1);
  F_01059680(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,param_2,param_3);
  uVar1 = F_010596b0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  if (uVar1 != 0) {
    uVar1 = F_010596b0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
    uVar1 = F_00d92610(uVar1 GEN_EDX_ARG);
    F_00d91520(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,uVar1);
    return (uint)this;
  }
  F_00d91520(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0);
  return (uint)this;
}

/* ref: hkRootLevelContainer::NamedVariant::NamedVariantFromVariant */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dea200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdea200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  undefined4 * this_00;
  undefined * phVar1;
  uint uVar2;
  
  F_00d91340(this GEN_EDX_FWD);
  F_00d91340((int)this + 4 GEN_EDX_ARG);
  this_00 = ((undefined4 *)GEN_TOP(((int)this + 8)));
  *this_00 = 0;
  F_00d91520(this GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[0]));
  F_01059650(&(*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
  phVar1 = (*(undefined * PTR32 *)&gen_args[0]);
  if ((undefined * PTR32 *)this_00 != &(*(undefined * PTR32 *)&gen_args[0])) {
    if ((*(undefined * PTR32 *)&gen_args[0]) != ((undefined *)GEN_TOP(0x0))) {
      F_00d919e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    }
    if (((undefined *)GEN_TOP(*this_00)) != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(((undefined *)GEN_TOP(*this_00)) GEN_EDX_ARG);
    }
    *this_00 = phVar1;
  }
  if ((*(undefined * PTR32 *)&gen_args[0]) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  }
  uVar2 = F_010596b0(this_00 GEN_EDX_ARG);
  if (uVar2 != 0) {
    uVar2 = F_010596b0(this_00 GEN_EDX_ARG);
    uVar2 = F_00d92610(uVar2 GEN_EDX_ARG);
    F_00d91520(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,uVar2);
    return (uint)this;
  }
  F_00d91520(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0);
  return (uint)this;
}

/* ref: FUN_00dea2b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dea2b0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdea2b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  F_00d91350(in_ecx GEN_EDX_FWD,param_2);
  F_00d91350(in_ecx + 4 GEN_EDX_ARG,param_2);
  return in_ecx;
}

/* ref: FUN_00dea2e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dea2e0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdea2e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return in_ecx;
}

/* ref: hkRootLevelContainer::NamedVariant::~NamedVariant */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dea300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdea300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  F_00d91510(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
  uVar1 = F_00d91510(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Global::DeleteNamedVariant */
GEN_LIB GEN_FRAME unsigned int F_00dea330(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdea330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: hkRootLevelContainer::NamedVariant::SetFromVariant */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dea360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdea360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  undefined4 * this_00;
  undefined * phVar1;
  uint uVar2;
  
  F_00d91520(this GEN_EDX_FWD,(*(undefined * PTR32 *)&gen_args[0]));
  F_01059650(&(*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
  phVar1 = (*(undefined * PTR32 *)&gen_args[0]);
  this_00 = ((undefined4 *)GEN_TOP(((int)this + 8)));
  if ((undefined * PTR32 *)this_00 != &(*(undefined * PTR32 *)&gen_args[0])) {
    if ((*(undefined * PTR32 *)&gen_args[0]) != ((undefined *)GEN_TOP(0x0))) {
      F_00d919e0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    }
    if (((undefined *)GEN_TOP(*this_00)) != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(((undefined *)GEN_TOP(*this_00)) GEN_EDX_ARG);
    }
    *this_00 = phVar1;
  }
  if ((*(undefined * PTR32 *)&gen_args[0]) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  }
  uVar2 = F_010596b0(this_00 GEN_EDX_ARG);
  if (uVar2 != 0) {
    uVar2 = F_010596b0(this_00 GEN_EDX_ARG);
    uVar2 = F_00d92610(uVar2 GEN_EDX_ARG);
    uVar2 = F_00d91520(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,uVar2);
    return uVar2;
  }
  uVar2 = F_00d91520(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,0);
  return uVar2;
}

/* ref: hkRootLevelContainer::NamedVariant::ScalarDeletingDestructor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dea3f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdea3f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)param_1 + 8))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)param_1 + 8))) GEN_EDX_FWD);
  }
  *((undefined4 *)GEN_TOP(((int)param_1 + 8))) = 0;
  F_00d91510(((undefined *)GEN_TOP(((int)param_1 + 4))) GEN_EDX_ARG);
  F_00d91510(param_1 GEN_EDX_ARG);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return (uint)param_1;
}

/* ref: Global::DestructNamedVariants */
GEN_LIB GEN_FRAME unsigned int F_00dea450(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdea450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = param_2 - 1;
  if (-1 < iVar2) {
    puVar1 = ((undefined4 *)GEN_TOP((param_1 + 8 + iVar2 * 0xc)));
    do {
      if (((undefined *)GEN_TOP(*puVar1)) != ((undefined *)GEN_TOP(0x0))) {
        F_00d91a80(((undefined *)GEN_TOP(*puVar1)) GEN_EDX_ARG);
      }
      *puVar1 = 0;
      F_00d91510(puVar1 - 1 GEN_EDX_ARG);
      F_00d91510(puVar1 - 2 GEN_EDX_ARG);
      puVar1 = puVar1 - 3;
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  return;
}

/* ref: hkArray::ClearAndDeallocate_00dea4e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dea4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdea4e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar3) {
    puVar2 = ((undefined4 *)GEN_TOP((*(int *)this + 8 + iVar3 * 0xc)));
    do {
      if (((undefined *)GEN_TOP(*puVar2)) != ((undefined *)GEN_TOP(0x0))) {
        F_00d91a80(((undefined *)GEN_TOP(*puVar2)) GEN_EDX_FWD);
      }
      *puVar2 = 0;
      F_00d91510(puVar2 - 1 GEN_EDX_ARG);
      F_00d91510(puVar2 - 2 GEN_EDX_ARG);
      puVar2 = puVar2 - 3;
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dea660 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dea660(GEN_P(undefined1 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdea660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00dea670 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dea670(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdea670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  *((undefined1 *)GEN_TOP((in_ecx + 1))) = param_2;
  return in_ecx;
}

/* ref: FUN_00dea690 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dea690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdea690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00da3e20(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: Global::ByteSwap32_00dea6c0 */
GEN_LIB GEN_FRAME uint F_00dea6c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdea6c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = param_1;
  uVar1 = param_1 >> 0x18;
  uVar2 = param_1 >> 0x10;
  param_1 = CONCAT13((char)uVar3,
                     CONCAT12((char)((uint)uVar3 >> 8),CONCAT11((char)uVar2,(char)uVar1)));
  return param_1;
}

/* ref: Global::IsBinaryTagfileHeader */
GEN_LIB GEN_FRAME uint F_00dea6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdea6f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  
  iVar1 = (*(int *)&gen_args[1]);
  if (((*(int *)&gen_args[1]) == -0x354ff2e2) && ((*(int *)&gen_args[2]) == -0x2fee0532)) {
LAB_00dea750: ;
    *(*(undefined1 * PTR32 *)&gen_args[0]) = 1;
    return (uint)(*(undefined1 * PTR32 *)&gen_args[0]);
  }
  (*(undefined2 *)((char *)&(*(int *)&gen_args[1]) + 0)) = CONCAT11((char)((uint)(*(int *)&gen_args[1]) >> 0x10),(char)((uint)(*(int *)&gen_args[1]) >> 0x18));
  gen_piece_set(&(*(int *)&gen_args[1]), 0, 3, (unsigned long long)(CONCAT12((char)((uint)iVar1 >> 8),(undefined2)(*(int *)&gen_args[1]))));
  (*(int *)&gen_args[1]) = CONCAT13((char)iVar1,(undefined3)(*(int *)&gen_args[1]));
  if ((*(int *)&gen_args[1]) == -0x354ff2e2) {
    (*(undefined2 *)((char *)&(*(int *)&gen_args[1]) + 0)) = CONCAT11((char)((uint)(*(int *)&gen_args[2]) >> 0x10),(char)((uint)(*(int *)&gen_args[2]) >> 0x18));
    gen_piece_set(&(*(int *)&gen_args[1]), 0, 3, (unsigned long long)(CONCAT12((char)((uint)(*(int *)&gen_args[2]) >> 8),(undefined2)(*(int *)&gen_args[1]))));
    (*(int *)&gen_args[1]) = CONCAT13((char)(*(int *)&gen_args[2]),(undefined3)(*(int *)&gen_args[1]));
    if ((*(int *)&gen_args[1]) == -0x2fee0532) goto LAB_00dea750;
  }
  *(*(undefined1 * PTR32 *)&gen_args[0]) = 0;
  return (uint)(*(undefined1 * PTR32 *)&gen_args[0]);
}

/* ref: Global::SkipSpaces */
GEN_LIB GEN_NOFRAME uint F_00dea860(GEN_P(char * in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xdea860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char * in_eax = (char *)(uintptr_t)gen_a0;)
  char * pcVar1;
  char cVar2;
  
  cVar2 = *in_eax;
  while ((cVar2 != '\0' && (cVar2 == ' '))) {
    pcVar1 = in_eax + 1;
    in_eax = in_eax + 1;
    cVar2 = *pcVar1;
  }
  return (uint)in_eax;
}

/* ref: Global::ExtractXmlAttribute */
GEN_LIB GEN_FRAME uint F_00dea880(GEN_P(undefined4 in_eax, unsigned int gen_a0), GEN_P(undefined4 in_edi, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdea880u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_eax = (undefined4)gen_a0;)
  GEN_PIN(undefined4 in_edi = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  uint uVar1;
  uint uVar2;
  char * pcVar3;
  
  uVar1 = F_00da0ee0(in_eax,in_edi);
  if (uVar1 != 0) {
    uVar2 = F_00da0e60(in_edi);
    pcVar3 = ((char *)GEN_TOP(F_00dea860(uVar2 + uVar1)));
    if (*pcVar3 == '=') {
      pcVar3 = ((char *)GEN_TOP(F_00dea860(pcVar3 + 1)));
      if (*pcVar3 == '\"') {
        pcVar3 = pcVar3 + 1;
        uVar1 = F_00da0ef0(pcVar3,0x22);
        if (uVar1 != 0) {
          F_00d91560(param_3 GEN_EDX_ARG,pcVar3,uVar1 - (int)pcVar3);
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: Global::CheckClassSignatures */
GEN_LIB GEN_FRAME uint F_00dea8e0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdea8e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = param_2 + 0x40;
  if (0 < *((int *)GEN_TOP((param_2 + 0x14)))) {
    do {
      uVar1 = F_00da0d20(iVar5,REFG(undefined * PTR32, 0x135485c));
      if (uVar1 == 0) {
        iVar4 = 0;
        if (*((int *)GEN_TOP((iVar5 + 0x18))) != 6 && -1 < *((int *)GEN_TOP((iVar5 + 0x18))) - 6) goto LAB_00dea933;
        goto LAB_00dea983;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x30;
    } while (iVar4 < *((int *)GEN_TOP((param_2 + 0x14))));
  }
LAB_00dea910: ;
  *param_1 = 0;
  return (uint)param_1;
  while( true ) {
    if (((*((char *)GEN_TOP((iVar2 + 4))) != '\t') ||
        (uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_3 + 0x10))))(param_3 GEN_EDX_ARG,iVar2 + 5), uVar3 == 0)) ||
       (uVar3 = F_00d93010(uVar3 GEN_EDX_ARG,0), uVar1 != uVar3)) goto LAB_00dea910;
    uVar1 = F_00da0e60(iVar2 + 5);
    iVar4 = iVar4 + 6 + uVar1;
    if (*((int *)GEN_TOP((iVar5 + 0x18))) - 6 <= iVar4) break;
LAB_00dea933: ;
    iVar2 = *((int *)GEN_TOP((iVar5 + 0x14))) + iVar4;
    uVar1 = *((uint *)GEN_TOP((iVar2 + param_2)));
    iVar2 = iVar2 + param_2;
    if (*((char *)GEN_TOP((iVar2 + 5))) == -1) break;
  }
LAB_00dea983: ;
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00dea990 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dea990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdea990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x10))))(REFG(int * PTR32, 0x15e3738) GEN_EDX_FWD);
    return uVar1;
  }
  return *((uint *)GEN_TOP(((int)this + 4)));
}

/* ref: FUN_00dea9b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dea9b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdea9b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 8))) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0xc))))(REFG(int * PTR32, 0x15e3738) GEN_EDX_FWD);
    return uVar1;
  }
  return *((uint *)GEN_TOP(((int)this + 8)));
}

/* ref: FUN_00dea9d0 */
GEN_LIB GEN_FRAME uint F_00dea9d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined8 * param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(byte param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xdea9d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined8 * param_4 = (undefined8 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(byte param_6 = (byte)gen_a5;)
  GEN_FRAME_DECL_TOP(0x310, 0, 4);
  undefined8 uVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    return 1;
  }
  (*(undefined8 *)(gen_frame + 0x2f4)) = *param_4;
  uVar1 = param_4[1];
  (*(undefined8 *)(gen_frame + 0x2fc)) = uVar1;
  if ((param_6 & 2) != 0) {
    gen_piece_set(&(*(undefined8 *)(gen_frame + 0x2fc)), 2, 6, (unsigned long long)((undefined6)((ulonglong)uVar1 >> 0x10)));
    (*(undefined1 *)((char *)&(*(undefined8 *)(gen_frame + 0x2fc)) + 1)) = 1;
    (*(undefined2 *)((char *)&(*(undefined8 *)(gen_frame + 0x2fc)) + 0)) = CONCAT11(1,(char)uVar1);
  }
  if ((param_6 & 1) == 0) {
    F_00df8880(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x2f4)));
    F_00dfb220(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,param_1,param_2,param_5);
    uVar2 = F_00df9700((undefined *)((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,param_3,&(*(undefined8 *)(gen_frame + 0x2f4)));
    F_00df8900(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
    return uVar2;
  }
  (*(undefined4 *)(gen_frame + 0x304)) = 0;
  F_00d91340(&(*(uint *)(gen_frame + 0x308)) GEN_EDX_ARG);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3754) + 0xc))))
                    (REFG(int * PTR32, 0x15e3754) GEN_EDX_ARG,param_1,param_2,param_3,&(*(undefined8 *)(gen_frame + 0x2f4)),param_5,&(*(undefined4 *)(gen_frame + 0x304)));
  if (uVar2 == 1) {
    F_00da0a80(((undefined1 *)(gen_frame + 0x2e8)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
    F_00d9fe80(((undefined1 *)(gen_frame + 0x2e8)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x308)) & 0xfffffffe);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0x1d25e54f,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114ba48)),0x23a);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x2e8)) GEN_EDX_ARG);
  }
  F_00d91510(&(*(uint *)(gen_frame + 0x308)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00deab00 */
GEN_LIB GEN_FRAME uint F_00deab00(GEN_P(int in_ecx, unsigned int gen_a0), GEN_P(undefined4 in_edx, unsigned int gen_a1), GEN_P(undefined4 in_esi, unsigned int gen_a2), GEN_P(uint * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdeab00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 in_edx = (undefined4)gen_a1;)
  GEN_PIN(undefined4 in_esi = (undefined4)gen_a2;)
  GEN_PIN(uint * param_4 = (uint *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x10, 0);
  uint uVar1;
  
  if (in_ecx == 0) {
    return 1;
  }
  (*(undefined1 *)(gen_frame + 0xa)) = 0;
  uVar1 = *param_4;
  (*(undefined2 *)(gen_frame + 0x8)) = 0x100;
  if ((uVar1 & 8) == 0) {
    (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x8)) + 0)) = 1;
    (*(undefined2 *)(gen_frame + 0x8)) = 0x101;
  }
  if ((uVar1 & 0x10) == 0) {
    (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x8)) + 1)) = 1;
    (*(undefined2 *)(gen_frame + 0x8)) = CONCAT11(1,(undefined1)(*(undefined2 *)(gen_frame + 0x8)));
  }
  (*(undefined2 *)(gen_frame + 0x6)) = 1;
  if ((uVar1 & 1) != 0) {
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x114ba68));
    uVar1 = F_00dfcfa0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,in_esi,in_ecx,in_edx,&(*(undefined2 *)(gen_frame + 0x8)));
    return uVar1;
  }
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x114ba7c));
  uVar1 = F_00e00f10(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,in_esi,in_ecx,in_edx,&(*(undefined2 *)(gen_frame + 0x8)));
  return uVar1;
}

/* ref: FUN_00deab70 */
GEN_LIB GEN_FRAME uint F_00deab70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdeab70u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  GEN_FRAME_DECL_TOP(0xdc, 4, 4);
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  F_00df6600(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(byte)((*(uint *)&gen_args[4]) >> 1) & 1);
  F_00df64e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x10))))(REFG(int * PTR32, 0x15e3738) GEN_EDX_ARG);
  (*(undefined4 * PTR32 *)(gen_frame + 0xcc)) = (*(undefined4 * PTR32 *)&gen_args[3]);
  puVar3 = &(*(uint *)&gen_args[4]);
  (*(uint *)(gen_frame + 0xd4)) = uVar2;
  (*(undefined2 *)(gen_frame + 0xca)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) = (*(undefined * PTR32 (*)[4])REFP(0x114ba38));
  (*(undefined * PTR32 *)(gen_frame + 0xd0)) = ((undefined1 *)(gen_frame + 0x0));
  uVar2 = F_00df6480(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[3]));
  uVar2 = F_00deab00((*(undefined4 *)&gen_args[2]),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),uVar2,puVar3);
  if ((*(undefined4 * PTR32 *)&gen_args[3]) != ((undefined4 *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[3]) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[3]) + 6))) - 1;
    piVar1 = (*(undefined4 * PTR32 *)&gen_args[3]) + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))))((*(undefined4 * PTR32 *)&gen_args[3]) GEN_EDX_ARG,1);
    }
  }
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  F_00df66f0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00deac30 */
GEN_LIB GEN_FRAME uint F_00deac30(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xdeac30u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00deab00(param_2,0,param_1,((undefined *)&gen_args[2]));
  return uVar1;
}

/* ref: FUN_00deac50 */
GEN_LIB GEN_FRAME uint F_00deac50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdeac50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00deac30(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00deac70 */
GEN_LIB GEN_FRAME uint F_00deac70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdeac70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00deab70(param_1,param_2,param_3,0,param_4);
  return uVar1;
}

/* ref: Global::LoadBinaryPackfile */
GEN_LIB GEN_FRAME uint F_00deac90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xdeac90u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  GEN_FRAME_DECL(0x30, 0);
  code * pcVar1;
  uint uVar2;
  int * piVar3;
  char * pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = 0;
  iVar5 = *(*(int * PTR32 *)&gen_args[1]);
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0x80000000;
  if (iVar5 == 2) {
    uVar2 = F_00da1040((*(int * PTR32 *)&gen_args[1]) + 3,&REFG(undefined4, 0x135491c),4);
    if (uVar2 != 0) {
      if ((*(undefined4 * PTR32 *)&gen_args[2]) != ((undefined4 *)GEN_TOP(0x0))) {
        *(*(undefined4 * PTR32 *)&gen_args[2]) = 3;
        F_00d91520((*(undefined4 * PTR32 *)&gen_args[2]) + 1 GEN_EDX_ARG,((char *)REFP(0x114ba8c)));
      }
      (*(int *)(gen_frame + 0x10)) = 0;
joined_r0x00deaf07: ;
      if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
        (*(int *)(gen_frame + 0x10)) = 0;
        pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10)));
        (*pcVar1)(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) & 0x3fffffff);
      }
      return 0;
    }
    uVar2 = F_00e05450();
    uVar2 = F_00dec1f0((*(int * PTR32 *)&gen_args[1]) + 2 GEN_EDX_ARG,uVar2);
    if (uVar2 != 0) {
      iVar5 = (*(int *)(gen_frame + 0x10)) + 0x40;
      if ((int)((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) < iVar5) {
        iVar6 = ((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) * 2;
        if (iVar5 < iVar6) {
          iVar5 = iVar6;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0xc)),iVar5,1);
      }
      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 0x40;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)),0x40);
      iVar5 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 0x14)));
      iVar9 = iVar5 * 0x30;
      iVar6 = (*(int *)(gen_frame + 0x10)) + iVar9;
      (*(int *)(gen_frame + 0x18)) = 0;
      if ((int)((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) < iVar6) {
        iVar7 = ((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) * 2;
        if (iVar6 < iVar7) {
          iVar6 = iVar7;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0xc)),iVar6,1);
      }
      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + iVar9;
      (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0xc)) + 0x40;
      (*(int *)(gen_frame + 0x24)) = 0;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)) + 0x40,iVar9);
      iVar6 = 0;
      if (1 < iVar5) {
        piVar3 = ((int *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + 0x5c)));
        iVar7 = (iVar5 - 2U >> 1) + 1;
        iVar6 = iVar7 * 2;
        (*(int *)(gen_frame + 0x1c)) = iVar6;
        do {
          iVar8 = iVar8 + piVar3[-0xc];
          (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + *piVar3;
          piVar3 = piVar3 + 0x18;
          iVar7 = iVar7 - 1;
        } while (iVar7 != 0);
      }
      iVar7 = (*(int *)(gen_frame + 0x18));
      if (iVar6 < iVar5) {
        iVar7 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x20)) + 0x2c + iVar6 * 0x30)));
      }
      iVar7 = iVar7 + iVar8 + (*(int *)(gen_frame + 0x24));
      if ((int)((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) < (*(int *)(gen_frame + 0x10)) + iVar7) {
        F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x10)) + iVar7,1);
      }
      iVar5 = (*(int *)(gen_frame + 0x10)) + iVar7;
      if ((int)((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) < iVar5) {
        iVar8 = ((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) * 2;
        if (iVar5 < iVar8) {
          iVar5 = iVar8;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0xc)),iVar5,1);
      }
      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + iVar7;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)) + 0x40 + iVar9,iVar7);
      iVar5 = (*(int *)(gen_frame + 0xc));
      uVar2 = F_00dea990(&(*(uint *)&gen_args[4]) GEN_EDX_ARG);
      pcVar4 = ((char *)GEN_TOP(F_00dea8e0(&(*(undefined1 *)(gen_frame + 0x2b)),iVar5,uVar2)));
      if (*pcVar4 != '\0') {
        uVar2 = F_00e04c50((*(int *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x10)),(*(undefined4 *)&gen_args[3]));
        (*(int *)(gen_frame + 0x10)) = 0;
        if ((int)(*(uint *)(gen_frame + 0x14)) < 0) {
          return uVar2;
        }
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) & 0x3fffffff);
        return uVar2;
      }
      if (((*(uint *)&gen_args[4]) & 1) != 0) {
        if ((*(undefined4 * PTR32 *)&gen_args[2]) != ((undefined4 *)GEN_TOP(0x0))) {
          *(*(undefined4 * PTR32 *)&gen_args[2]) = 4;
          F_00d91520((*(undefined4 * PTR32 *)&gen_args[2]) + 1 GEN_EDX_ARG,((char *)REFP(0x114baa8)));
        }
        (*(int *)(gen_frame + 0x10)) = 0;
        goto joined_r0x00deaf07;
      }
    }
    if ((*(int *)(gen_frame + 0x10)) != 0) {
      F_01059e00(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x10)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3754) + 0x14))))(REFG(int * PTR32, 0x15e3754) GEN_EDX_ARG,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)),(*(int * PTR32 *)&gen_args[1]),(*(undefined4 * PTR32 *)&gen_args[2]));
      F_01059700(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG);
      goto LAB_00deaf68;
    }
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3754) + 0x14))))(REFG(int * PTR32, 0x15e3754) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[1]),(*(undefined4 * PTR32 *)&gen_args[2]));
LAB_00deaf68: ;
  (*(int *)(gen_frame + 0x10)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) & 0x3fffffff)
    ;
  }
  return uVar2;
}

/* ref: FUN_00deafa0 */
GEN_LIB GEN_FRAME uint F_00deafa0(GEN_P(uint * in_eax, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xdeafa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * in_eax = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  GEN_FRAME_DECL_TOP(0xec, 4, 4);
  int * piVar1;
  code * pcVar2;
  undefined * this;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0xe4));
  (*(undefined1 *)((char *)&(*(undefined4 * PTR32 *)(gen_frame + 0xe4)) + 0)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0xe4)) = ((undefined4 *)GEN_TOP(((uint)puVar5 & 0xffffff00)));
  (*(undefined2 *)(gen_frame + 0xca)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) = (*(undefined * PTR32 (*)[8])REFP(0x114ba00));
  F_00da3de0(((undefined1 *)(gen_frame + 0xcc)) GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0xe4)));
  (*(undefined4 *)(gen_frame + 0xdc)) = 0;
  (*(undefined4 *)(gen_frame + 0xe0)) = 1;
  F_00dec3b0((undefined *)&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) GEN_EDX_ARG,param_5);
  this = ((undefined *)GEN_TOP(F_00deac90(param_2,param_3,param_4,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),param_6,param_7,param_8)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    F_00df6600(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
    F_00df62e0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,in_eax);
    pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x1c)));
    (*(undefined4 * PTR32 *)(gen_frame + 0xe4)) = ((undefined4 *)GEN_TOP(*in_eax));
    uVar3 = (*pcVar2)(this);
    uVar3 = (*((code *)GEN_TOP((*(undefined4 * PTR32 *)(gen_frame + 0xe4))[4])))(in_eax,uVar3);
    if (uVar3 != 0) {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG,0,param_5);
      puVar5 = ((undefined4 *)GEN_TOP(F_00df6340(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4,uVar3)));
      (*(undefined4 * PTR32 *)(gen_frame + 0xe4)) = puVar5;
      if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar5 + 6))) = *((short *)GEN_TOP(((int)puVar5 + 6))) + 1;
        puVar5[2] = puVar5[2] + 1;
      }
      uVar3 = F_00e063f0(&(*(undefined4 * PTR32 *)(gen_frame + 0xe4)),in_eax,param_5,1);
      if ((*(undefined4 * PTR32 *)(gen_frame + 0xe4)) != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xe4)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xe4)) + 6))) - 1;
        piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0xe4)) + 2;
        *piVar1 = *piVar1 - 1;
        if (*piVar1 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0xe4)))))((*(undefined4 * PTR32 *)(gen_frame + 0xe4)) GEN_EDX_ARG,1);
        }
      }
      F_00df66f0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      F_00d91a80(this GEN_EDX_ARG);
      F_00da3e20(((undefined1 *)(gen_frame + 0xcc)) GEN_EDX_ARG);
      return uVar3;
    }
    F_00df66f0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    F_00d91a80(this GEN_EDX_ARG);
  }
  F_00da3e20(((undefined1 *)(gen_frame + 0xcc)) GEN_EDX_ARG);
  return 0;
}

/* ref: Global::DetectFormat */
GEN_LIB GEN_FRAME uint F_00deb100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdeb100u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  GEN_FRAME_DECL_TOP(0x158, 8, 4);
  undefined4 * puVar1;
  uint uVar2;
  char * pcVar3;
  undefined4 * this;
  
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[1]);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
  (*(undefined4 * PTR32 *)&gen_args[1])[1] = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x150)) = (*(undefined4 * PTR32 *)&gen_args[1]) + 2;
  F_00d91520((*(undefined4 * PTR32 *)&gen_args[1]) + 2 GEN_EDX_ARG,0);
  (*(undefined4 * PTR32 *)(gen_frame + 0x14c)) = puVar1 + 3;
  F_00da3720(puVar1 + 3,0,4);
  F_00c48350(&(*(int *)(gen_frame + 0xcc)),0,0x80);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x1c))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0x80);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(int *)(gen_frame + 0xcc)),0x80);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x20))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  F_00da1030(&(*(undefined4 *)(gen_frame + 0x8c)),0xffffffff,0x40);
  (*(undefined4 *)(gen_frame + 0x8c)) = 0x57e0e057;
  (*(undefined4 *)(gen_frame + 0x90)) = 0x10c0c010;
  (*(undefined1 *)(gen_frame + 0xb4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc4)) = 0;
  if ((7 < (int)uVar2) &&
     (pcVar3 = ((char *)GEN_TOP(F_00dea6f0((int)&(*(undefined4 * PTR32 *)&gen_args[1]) + 3,(*(int *)(gen_frame + 0xcc)),(*(int *)(gen_frame + 0xd0))))), *pcVar3 != '\0'))
  {
    *puVar1 = 4;
    return (uint)pcVar3;
  }
  if (((0x3f < (int)uVar2) && ((*(int *)(gen_frame + 0xcc)) == 0x57e0e057)) && ((*(int *)(gen_frame + 0xd0)) == 0x10c0c010)) {
    *puVar1 = 2;
    F_00d91520((*(undefined4 * PTR32 *)(gen_frame + 0x150)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xf4)));
    puVar1[1] = (*(undefined4 *)(gen_frame + 0xd8));
    uVar2 = F_00da3710((*(undefined4 * PTR32 *)(gen_frame + 0x14c)),((undefined1 *)(gen_frame + 0xdc)),4);
    return uVar2;
  }
  uVar2 = F_00da0ee0(&(*(int *)(gen_frame + 0xcc)),((char *)REFP(0x114bb38)));
  if ((uVar2 == 0) && (uVar2 = F_00da0ee0(&(*(int *)(gen_frame + 0xcc)),((char *)REFP(0x114bb28))), uVar2 == 0)) {
    uVar2 = F_00da0ee0(&(*(int *)(gen_frame + 0xcc)),((char *)REFP(0x114bb1c)));
    if ((uVar2 == 0) && (uVar2 = F_00da0ee0(&(*(int *)(gen_frame + 0xcc)),((char *)REFP(0x114bb10))), uVar2 == 0)) {
      return 0;
    }
    *puVar1 = 5;
    return uVar2;
  }
  *puVar1 = 3;
  uVar2 = F_00da0ee0(&(*(int *)(gen_frame + 0xcc)),((char *)REFP(0x114bb04)));
  F_00da4df0(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar2);
  F_00d91340(&(*(undefined4 * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  uVar2 = F_00dea880((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)),((char *)REFP(0x114baf4)),&(*(undefined4 * PTR32 *)&gen_args[1]));
  if (uVar2 == 0) {
LAB_00deb338: ;
    pcVar3 = ((char *)REFP(0x114bacc));
    this = (*(undefined4 * PTR32 *)(gen_frame + 0x150));
  }
  else {
    uVar2 = F_00da0e80((uint)(*(undefined4 * PTR32 *)&gen_args[1]) & 0xfffffffe,0);
    this = (*(undefined4 * PTR32 *)(gen_frame + 0x150));
    puVar1[1] = uVar2;
    if (uVar2 == 1) goto LAB_00deb338;
    if (((int)uVar2 < 2) || (9 < (int)uVar2)) {
      pcVar3 = ((char *)REFP(0x10805ec));
    }
    else {
      uVar2 = F_00dea880((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)),((char *)REFP(0x114bae4)),(*(undefined4 * PTR32 *)(gen_frame + 0x150)));
      if (uVar2 != 0) goto LAB_00deb345;
      pcVar3 = ((char *)REFP(0x114bad8));
    }
  }
  F_00d91520(this GEN_EDX_ARG,pcVar3);
LAB_00deb345: ;
  F_00d91510(&(*(undefined4 * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  ((byte *)(gen_frame + 0x0))[4] = 0;
  ((byte *)(gen_frame + 0x0))[5] = 0;
  ((byte *)(gen_frame + 0x0))[6] = 0;
  ((byte *)(gen_frame + 0x0))[7] = 0;
  uVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
  if (-1 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) & 0x3fffffff);
  }
  return uVar2;
}

/* ref: hkSerializeUtil::ApplyPatchesToWorld */
GEN_LIB GEN_FRAME uint F_00deb390(GEN_P(int * in_eax, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdeb390u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * in_eax = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x9c, 4, 4);
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  
  F_00dede30(param_3 GEN_EDX_ARG);
  pcVar1 = *((gen_code32 *)GEN_TOP((*in_eax + 0x20)));
  iVar6 = 0;
  (*(int *)(gen_frame + 0x8c)) = 0;
  (*(int *)(gen_frame + 0x90)) = 0;
  (*(int *)(gen_frame + 0x94)) = ((int)0x80000000);
  (*pcVar1)(in_eax,&(*(int *)(gen_frame + 0x8c)));
  if (0 < (*(int *)(gen_frame + 0x90))) {
    do {
      piVar2 = *((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x8c)) + iVar6 * 4)));
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
      piVar2 = *((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x8c)) + iVar6 * 4)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0xc))))(piVar2 GEN_EDX_ARG);
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_4 + 0x10))))(param_4 GEN_EDX_ARG,uVar3);
      if ((uVar5 == 0) || (uVar5 = F_00d92a10(uVar5 GEN_EDX_ARG), uVar5 != uVar4)) {
        uVar7 = F_00ded530(param_3 GEN_EDX_ARG,uVar3,uVar4);
        uVar5 = F_00dbddc0(param_3 + 0x18 GEN_EDX_ARG,(int)uVar7,(int)(uVar7 >> 0x20),0xffffffff,0);
        if (uVar5 == 0xffffffff) {
          (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
          (*(uint *)(gen_frame + 0x8)) = 0x80000080;
          (*(undefined4 *)(gen_frame + 0x4)) = 1;
          ((undefined1 *)(gen_frame + 0xc))[0] = 0;
          F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),((char *)REFP(0x114bb48)),uVar3
                              ,uVar4,
                              ((char *)REFP(0x114b918))
                             );
          *param_2 = 4;
          F_00d91520(param_2 + 1 GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
          (*(undefined4 *)(gen_frame + 0x4)) = 0;
          if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
          }
          (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)GEN_TOP(0x0));
          (*(uint *)(gen_frame + 0x8)) = 0x80000000;
          (*(int *)(gen_frame + 0x90)) = 0;
          if (-1 < (*(int *)(gen_frame + 0x94))) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x8c)),(*(int *)(gen_frame + 0x94)) * 4);
          }
          return 0;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (*(int *)(gen_frame + 0x90)));
  }
  (*(int *)(gen_frame + 0x90)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x94))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x8c)),(*(int *)(gen_frame + 0x94)) * 4);
  }
  return 1;
}

/* ref: hkSerializeUtil::ReadTagfileAndPatch */
GEN_LIB GEN_FRAME uint F_00deb530(GEN_P(undefined4 in_esi, unsigned int gen_a0), GEN_P(undefined4 * in_edi, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdeb530u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 in_esi = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * in_edi = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  int * piVar1;
  uint uVar2;
  
  F_00e09800(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
  F_00e09820(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x14)),param_3,in_esi);
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x14)) != ((undefined4 *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x14)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x14)) + 6))) - 1;
    piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x14)) + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x14)))))((*(undefined4 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,1);
    }
  }
  if ((in_edi != ((undefined4 *)GEN_TOP(0x0))) &&
     (uVar2 = F_00deb390(in_esi,in_edi,REFG(undefined4, 0x15e3734),param_4), uVar2 == 0)) {
    return 1;
  }
  F_00ded380(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,param_4);
  uVar2 = F_00def500(REFG(undefined4, 0x15e3734) GEN_EDX_ARG,in_esi,((byte *)(gen_frame + 0x0)));
  if (uVar2 != 0) {
    if (in_edi != ((undefined4 *)GEN_TOP(0x0))) {
      *in_edi = 4;
      F_00d91520(in_edi + 1 GEN_EDX_ARG,
                 ((char *)REFP(0x114b918))
                );
    }
    if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) != 0) {
      F_00d91a80(((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)))) GEN_EDX_ARG);
    }
    return 1;
  }
  if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) != 0) {
    F_00d91a80(((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)))) GEN_EDX_ARG);
  }
  return 0;
}

/* ref: FUN_00deb5f0 */
GEN_LIB GEN_FRAME uint F_00deb5f0(GEN_P(undefined4 in_ecx, unsigned int gen_a0), GEN_P(undefined4 in_esi, unsigned int gen_a1), GEN_P(undefined4 * in_edi, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdeb5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(undefined4 in_esi = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * in_edi = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  int * piVar1;
  uint uVar2;
  
  (*(undefined2 *)(gen_frame + 0x12)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[4])REFP(0x114ba24));
  F_00df4940((undefined *)&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x14)),in_ecx,in_esi);
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x14)) != ((undefined4 *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x14)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x14)) + 6))) - 1;
    piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x14)) + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x14)))))((*(undefined4 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,1);
    }
  }
  if ((in_edi != ((undefined4 *)GEN_TOP(0x0))) &&
     (uVar2 = F_00deb390(in_esi,in_edi,REFG(undefined4, 0x15e3734),param_4), uVar2 == 0))
  {
    return 1;
  }
  F_00ded380(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,param_4);
  uVar2 = F_00def500(REFG(undefined4, 0x15e3734) GEN_EDX_ARG,in_esi,((byte *)(gen_frame + 0x0)));
  if (uVar2 != 0) {
    if (in_edi != ((undefined4 *)GEN_TOP(0x0))) {
      *in_edi = 4;
      F_00d91520(in_edi + 1 GEN_EDX_ARG,
                 ((char *)REFP(0x114b918))
                );
    }
    if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) != 0) {
      F_00d91a80(((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)))) GEN_EDX_ARG);
    }
    return 1;
  }
  if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) != 0) {
    F_00d91a80(((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)))) GEN_EDX_ARG);
  }
  return 0;
}

/* ref: hkSerializeUtil::LoadFromStream */
GEN_LIB GEN_FRAME uint F_00deb6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdeb6b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  GEN_FRAME_DECL_TOP(0xbc, 4, 4);
  int * piVar1;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  uint uVar5;
  undefined * phVar6;
  LPVOID pvVar7;
  undefined4 uVar8;
  
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
    if ((*(undefined4 * PTR32 *)&gen_args[1]) != ((undefined4 *)GEN_TOP(0x0))) {
      *(*(undefined4 * PTR32 *)&gen_args[1]) = 1;
      F_00d91520((*(undefined4 * PTR32 *)&gen_args[1]) + 1 GEN_EDX_ARG,((char *)REFP(0x114bbb4)));
      return 0;
    }
  }
  else {
    pcVar3 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xc))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(int)&(*(int * PTR32 *)&gen_args[0]) + 3)));
    if (*pcVar3 != '\0') {
      uVar4 = F_00dea990(&(*(uint *)&gen_args[2]) GEN_EDX_ARG);
      (*(uint *)(gen_frame + 0xb0)) = uVar4;
      uVar5 = F_00dea9b0(&(*(uint *)&gen_args[2]) GEN_EDX_ARG);
      F_00d91340(((undefined1 *)(gen_frame + 0xa4)) GEN_EDX_ARG);
      F_00deb100(piVar1,((undefined4 *)(gen_frame + 0x9c)));
      switch((unsigned int)(uintptr_t)(((undefined4 *)(gen_frame + 0x9c))[0])) {
      case 2: ;
      case 3: ;
        uVar4 = F_00deac90(piVar1,((undefined4 *)(gen_frame + 0x9c)),(*(undefined4 * PTR32 *)&gen_args[1]),uVar5,(*(uint *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
        F_00d91510(((undefined1 *)(gen_frame + 0xa4)) GEN_EDX_ARG);
        return uVar4;
      case 4: ;
        phVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        uVar2 = *(uint *)(phVar6 + 0xc);
        uVar5 = uVar2 + 0x4000;
        if ((*(int *)(phVar6 + 8) < 0x4000) || (*(uint *)(phVar6 + 0x10) < uVar5)) {
          (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(F_00d94390(phVar6 GEN_EDX_ARG,0x4000)));
        }
        else {
          *(uint *)(phVar6 + 0xc) = uVar5;
          (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(uVar2));
        }
        pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        (*(uint *)(gen_frame + 0xb4)) = 0;
        F_00e0ecc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)pvVar7 + 0x2c))));
        uVar4 = F_00deb530(((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)&gen_args[1]),piVar1,uVar4);
        if ((uVar4 == 0) || (uVar4 = (*(uint *)(gen_frame + 0xb4)), ((*(uint *)&gen_args[2]) & 2) != 0)) {
          uVar8 = 1;
          uVar4 = (*(uint *)(gen_frame + 0xb0));
          uVar5 = F_00e0d5f0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x98)));
          uVar4 = F_00e06430(uVar5,uVar4,uVar8);
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x98)) != ((undefined4 *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x98)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x98)) + 6))) - 1;
            piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x98)) + 2;
            *piVar1 = *piVar1 - 1;
            if (*piVar1 == 0) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x98)))))((*(undefined4 * PTR32 *)(gen_frame + 0x98)) GEN_EDX_ARG,1);
            }
          }
        }
        F_00e0ed30(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        break;
      case 5: ;
        phVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        uVar2 = *(uint *)(phVar6 + 0xc);
        uVar5 = uVar2 + 0x4000;
        if ((*(int *)(phVar6 + 8) < 0x4000) || (*(uint *)(phVar6 + 0x10) < uVar5)) {
          (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(F_00d94390(phVar6 GEN_EDX_ARG,0x4000)));
        }
        else {
          *(uint *)(phVar6 + 0xc) = uVar5;
          (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(uVar2));
        }
        pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        (*(uint *)(gen_frame + 0xb4)) = 0;
        F_00e0ecc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)pvVar7 + 0x2c))));
        uVar4 = F_00deb5f0(piVar1,((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)&gen_args[1]),uVar4);
        if ((uVar4 == 0) || (uVar4 = (*(uint *)(gen_frame + 0xb4)), ((*(uint *)&gen_args[2]) & 2) != 0)) {
          uVar8 = 1;
          uVar4 = (*(uint *)(gen_frame + 0xb0));
          uVar5 = F_00e0d5f0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0xac)));
          uVar4 = F_00e06430(uVar5,uVar4,uVar8);
          if ((*(undefined4 * PTR32 *)(gen_frame + 0xac)) != ((undefined4 *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xac)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xac)) + 6))) - 1;
            piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0xac)) + 2;
            *piVar1 = *piVar1 - 1;
            if (*piVar1 == 0) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0xac)))))((*(undefined4 * PTR32 *)(gen_frame + 0xac)) GEN_EDX_ARG,1);
              F_00e0ed30(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
              break;
            }
          }
        }
        F_00e0ed30(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        break;
      default: ;
        if ((*(undefined4 * PTR32 *)&gen_args[1]) != ((undefined4 *)GEN_TOP(0x0))) {
          *(*(undefined4 * PTR32 *)&gen_args[1]) = 2;
          F_00d91520((*(undefined4 * PTR32 *)&gen_args[1]) + 1 GEN_EDX_ARG,((char *)REFP(0x114bb7c)));
        }
        F_00d91510(((undefined1 *)(gen_frame + 0xa4)) GEN_EDX_ARG);
        return 0;
      }
      phVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      if (((0x3fff < *(int *)(phVar6 + 8)) && ((int)(*(int * PTR32 *)&gen_args[0]) + 0x4000U == *(int *)(phVar6 + 0xc))) &&
         (((int *)GEN_TOP(*(uint *)(phVar6 + 0x14))) != (*(int * PTR32 *)&gen_args[0]))) {
        *(int * PTR32 *)(phVar6 + 0xc) = (*(int * PTR32 *)&gen_args[0]);
        F_00d91510(((undefined1 *)(gen_frame + 0xa4)) GEN_EDX_ARG);
        return uVar4;
      }
      F_00d945c0(phVar6 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[0]),0x4000);
      F_00d91510(((undefined1 *)(gen_frame + 0xa4)) GEN_EDX_ARG);
      return uVar4;
    }
    if ((*(undefined4 * PTR32 *)&gen_args[1]) != ((undefined4 *)GEN_TOP(0x0))) {
      *(*(undefined4 * PTR32 *)&gen_args[1]) = 1;
      F_00d91520((*(undefined4 * PTR32 *)&gen_args[1]) + 1 GEN_EDX_ARG,((char *)REFP(0x114bba0)));
      return 0;
    }
  }
  return 0;
}

/* ref: hkSerializeUtil::LoadFromFile */
GEN_LIB GEN_FRAME uint F_00deb9e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xdeb9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  
  uVar1 = F_01059c30(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
  uVar1 = F_00deb6b0(*((undefined4 *)GEN_TOP((uVar1 + 8))),param_2,param_3,param_4,param_5);
  F_01059700(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: hkSerializeUtil::LoadFromBuffer */
GEN_LIB GEN_FRAME uint F_00deba30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xdeba30u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  GEN_FRAME_DECL_TOP(0x50, 0, 4);
  int iVar1;
  int * piVar2;
  uint uVar3;
  char * pcVar4;
  
  F_00da1030(&(*(undefined4 *)(gen_frame + 0x0)),0xffffffff,0x40);
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x0)) = 0x57e0e057;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x10c0c010;
  (*(undefined1 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  if ((iVar1 == 0x57e0e057) && ((*(int * PTR32 *)&gen_args[0])[1] == 0x10c0c010)) {
    uVar3 = F_00da1040((*(int * PTR32 *)&gen_args[0]) + 4,&REFG(undefined4, 0x135491c),4);
    if (uVar3 == 0) {
      uVar3 = F_00e05450();
      uVar3 = F_00da0d20(piVar2 + 10,uVar3);
      if (uVar3 == 0) {
        uVar3 = F_00dea990(&(*(undefined4 *)&gen_args[3]) GEN_EDX_ARG);
        pcVar4 = ((char *)GEN_TOP(F_00dea8e0((int)&(*(int * PTR32 *)&gen_args[0]) + 3,piVar2,uVar3)));
        if (*pcVar4 != '\0') {
          uVar3 = F_00e04c50(piVar2,(*(undefined4 *)&gen_args[1]),0);
          return uVar3;
        }
      }
    }
  }
  uVar3 = F_01059e00(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG,piVar2,(*(undefined4 *)&gen_args[1]));
  uVar3 = F_00deb6b0(*((undefined4 *)GEN_TOP((uVar3 + 8))),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]));
  F_01059700(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG);
  return uVar3;
}

/* ref: hkSerializeUtil::LoadOnHeapFromStream */
GEN_LIB GEN_FRAME uint F_00debb10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdebb10u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  GEN_FRAME_DECL(0xbc, 4);
  int * piVar1;
  char * pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
    if ((*(undefined4 * PTR32 *)&gen_args[1]) == ((undefined4 *)GEN_TOP(0x0))) {
      return 0;
    }
    *(*(undefined4 * PTR32 *)&gen_args[1]) = 1;
    F_00d91520((*(undefined4 * PTR32 *)&gen_args[1]) + 1 GEN_EDX_ARG,((char *)REFP(0x114bbb4)));
    return 0;
  }
  pcVar2 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xc))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0xb7)))));
  if (*pcVar2 == '\0') {
    if ((*(undefined4 * PTR32 *)&gen_args[1]) == ((undefined4 *)GEN_TOP(0x0))) {
      return 0;
    }
    *(*(undefined4 * PTR32 *)&gen_args[1]) = 1;
    F_00d91520((*(undefined4 * PTR32 *)&gen_args[1]) + 1 GEN_EDX_ARG,((char *)REFP(0x114bba0)));
    return 0;
  }
  uVar3 = F_00dea990(&(*(uint *)&gen_args[2]) GEN_EDX_ARG);
  uVar4 = F_00dea9b0(&(*(uint *)&gen_args[2]) GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0xa0)) = uVar4;
  F_00d91340(((undefined1 *)(gen_frame + 0xac)) GEN_EDX_ARG);
  F_00deb100((*(int * PTR32 *)&gen_args[0]),((undefined4 *)(gen_frame + 0xa4)));
  switch((unsigned int)(uintptr_t)(((undefined4 *)(gen_frame + 0xa4))[0])) {
  case 2: ;
    pcVar2 = ((char *)GEN_TOP(F_00dec240(((undefined1 *)(gen_frame + 0xb0)) GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0xb7)),&REFG(undefined4, 0x135491c))));
    if ((*pcVar2 != '\0') &&
       (uVar5 = F_00dec1f0(((undefined1 *)(gen_frame + 0xac)) GEN_EDX_ARG,((char *)REFP(0x113cdcc))), uVar5 != 0)) {
      uVar3 = F_00deafa0(uVar3,(*(int * PTR32 *)&gen_args[0]),((undefined4 *)(gen_frame + 0xa4)),(*(undefined4 * PTR32 *)&gen_args[1]),uVar4,(*(uint *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
      F_00d91510(((undefined1 *)(gen_frame + 0xac)) GEN_EDX_ARG);
      return uVar3;
    }
    if (((*(uint *)&gen_args[2]) & 1) == 0) goto switchD_00debbbe_caseD_3;
    if ((*(undefined4 * PTR32 *)&gen_args[1]) == ((undefined4 *)GEN_TOP(0x0))) goto LAB_00debd86;
    *(*(undefined4 * PTR32 *)&gen_args[1]) = 4;
    pcVar2 = ((char *)REFP(0x114bbd0));
    break;
  case 3: ;
switchD_00debbbe_caseD_3: ;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3754) + 0x18))))(REFG(int * PTR32, 0x15e3754) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[0]),((undefined4 *)(gen_frame + 0xa4)),(*(undefined4 * PTR32 *)&gen_args[1]));
    F_00d91510(((undefined1 *)(gen_frame + 0xac)) GEN_EDX_ARG);
    return uVar3;
  case 4: ;
    F_00e0ec50(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar4 = F_00deb530(((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[0]),uVar3);
    if (uVar4 != 0) {
LAB_00debce9: ;
      F_00e0ed30(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      F_00d91510(((undefined1 *)(gen_frame + 0xac)) GEN_EDX_ARG);
      return 0;
    }
    uVar6 = 1;
    uVar4 = (*(uint *)(gen_frame + 0xa0));
    uVar5 = F_00e0d5f0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x9c)));
    uVar3 = F_00e063f0(uVar5,uVar3,uVar4,uVar6);
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x9c)) != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c)) + 6))) - 1;
      piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x9c)) + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x9c)))))((*(undefined4 * PTR32 *)(gen_frame + 0x9c)) GEN_EDX_ARG,1);
      }
    }
    goto LAB_00debccd;
  case 5: ;
    F_00e0ec50(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar4 = F_00deb5f0((*(int * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x0)),(*(undefined4 * PTR32 *)&gen_args[1]),uVar3);
    if (uVar4 != 0) goto LAB_00debce9;
    uVar6 = 1;
    uVar4 = (*(uint *)(gen_frame + 0xa0));
    uVar5 = F_00e0d5f0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x98)));
    uVar3 = F_00e063f0(uVar5,uVar3,uVar4,uVar6);
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x98)) != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x98)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x98)) + 6))) - 1;
      piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x98)) + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x98)))))((*(undefined4 * PTR32 *)(gen_frame + 0x98)) GEN_EDX_ARG,1);
      }
    }
LAB_00debccd: ;
    F_00e0ed30(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    F_00d91510(((undefined1 *)(gen_frame + 0xac)) GEN_EDX_ARG);
    return uVar3;
  default: ;
    if ((*(undefined4 * PTR32 *)&gen_args[1]) == ((undefined4 *)GEN_TOP(0x0))) goto LAB_00debd86;
    *(*(undefined4 * PTR32 *)&gen_args[1]) = 2;
    pcVar2 = ((char *)REFP(0x114bb7c));
  }
  F_00d91520((*(undefined4 * PTR32 *)&gen_args[1]) + 1 GEN_EDX_ARG,pcVar2);
LAB_00debd86: ;
  F_00d91510(((undefined1 *)(gen_frame + 0xac)) GEN_EDX_ARG);
  return 0;
}

/* ref: hkSerializeUtil::LoadOnHeapFromFile */
GEN_LIB GEN_FRAME uint F_00debdb0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xdebdb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  
  uVar1 = F_01059c30(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
  uVar1 = F_00debb10(*((undefined4 *)GEN_TOP((uVar1 + 8))),param_2,param_3,param_4,param_5);
  F_01059700(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: hkSerializeUtil::LoadOnHeapFromBuffer */
GEN_LIB GEN_FRAME uint F_00debe00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xdebe00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  
  uVar1 = F_01059e00(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,param_2);
  uVar1 = F_00debb10(*((undefined4 *)GEN_TOP((uVar1 + 8))),param_3,param_4,param_5,param_6);
  F_01059700(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: hkSerializeUtil::IsLoadable */
GEN_LIB GEN_FRAME uint F_00debe50(unsigned int gen_a0)
{
  GEN_ENTER(0xdebe50u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  char * pcVar2;
  int * piVar3;
  uint uVar4;
  
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  pcVar2 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xc))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(int)&(*(int * PTR32 *)&gen_args[0]) + 3)));
  if (*pcVar2 == '\0') {
    return 0;
  }
  piVar3 = ((int *)GEN_TOP(F_00e17100(&(*(int * PTR32 *)&gen_args[0]),piVar1)));
  if (1 < *piVar3) {
    return 1;
  }
  F_00d91340(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_00deb100(piVar1,((int *)(gen_frame + 0x0)));
  if ((((int *)(gen_frame + 0x0))[0] == 2) && (uVar4 = F_00da1040(((undefined1 *)(gen_frame + 0xc)),&REFG(undefined4, 0x135491c),4), uVar4 == 0)) {
    uVar4 = F_00e05450();
    uVar4 = F_00dec1f0(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG,uVar4);
    if (uVar4 != 0) goto LAB_00debece;
  }
  else if (((int *)(gen_frame + 0x0))[0] != 3) goto LAB_00debefb;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3754) + 0x10))))(REFG(int * PTR32, 0x15e3754) GEN_EDX_ARG,((int *)(gen_frame + 0x0)));
  if (uVar4 != 0) {
LAB_00debece: ;
    F_00d91510(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
    return 1;
  }
LAB_00debefb: ;
  F_00d91510(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return 0;
}

/* ref: hkSerializeUtil::DetectFormat */
GEN_LIB GEN_FRAME uint F_00debf10(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdebf10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  
  F_00d91340(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_00deb100(param_2,((undefined4 *)(gen_frame + 0x0)));
  *param_1 = ((undefined4 *)(gen_frame + 0x0))[0];
  F_00d91510(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_00debf60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00debf60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdebf60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this GEN_EDX_FWD,local_8);
  return (uint)this;
}

/* ref: FUN_00debf80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00debf80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdebf80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da3a20(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00debfa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00debfa0(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdebfa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da3990(in_ecx GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: FUN_00debfb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00debfb0(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdebfb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da39b0(in_ecx GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: FUN_00debfc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00debfc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdebfc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da39f0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00debfd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00debfd0(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdebfd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00da3e40(in_ecx GEN_EDX_FWD,param_2,param_3);
  return param_2;
}

/* ref: FUN_00debff0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00debff0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdebff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00dec000 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec000(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdec000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return *in_ecx & param_2;
}

/* ref: FUN_00dec010 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec010(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdec010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return *in_ecx & param_2;
}

/* ref: FUN_00dec020 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec020(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdec020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return *in_ecx & param_2;
}

/* ref: FUN_00dec030 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00dec030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdec030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  return (*(uint *)this & param_1) == param_1;
}

/* ref: FUN_00dec050 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec050(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdec050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00dec060 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec060(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdec060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = *in_ecx == param_3;
  return param_2;
}

/* ref: FUN_00dec090 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdec090u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00dbddc0(this GEN_EDX_FWD,param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FUN_00dec0c0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00dec0c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdec0c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00dec110 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec110(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdec110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00dec140 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00dec140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdec140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00dec170 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dec170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdec170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    if (this_00 != param_1) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    *(undefined * PTR32 *)this = param_1;
    return;
  }
  *(undefined * PTR32 *)this = param_1;
  return;
}

/* ref: FUN_00dec1c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec1c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdec1c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: hkStringPtr::StringPtrEquals */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdec1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if ((*(uint *)this & 0xfffffffe) == 0) {
    return (uint)(param_1 == 0);
  }
  if (param_1 != 0) {
    uVar1 = F_00da0d20(*(uint *)this & 0xfffffffe,param_1);
    return (uint)(uVar1 == 0);
  }
  return 0;
}

/* ref: FUN_00dec240 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(char * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdec240u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a2;)
  if ((((*(char *)this == *param_2) && (*((char *)GEN_TOP(((int)this + 1))) == param_2[1])) &&
      (*((char *)GEN_TOP(((int)this + 2))) == param_2[2])) && (*((char *)GEN_TOP(((int)this + 3))) == param_2[3])) {
    *param_1 = 1;
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00dec290 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdec290u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x114ba00));
  F_00da3de0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,local_8);
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  return (uint)this;
}

/* ref: FUN_00dec2e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec2e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdec2e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da4190(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dec2f0 */
GEN_LIB GEN_FRAME uint F_00dec2f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdec2f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkTypeInfoRegistry::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdec320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da3a20(this + 8 GEN_EDX_FWD,*param_1,param_1);
  return uVar1;
}

/* ref: hkTypeInfoRegistry::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdec340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(F_00da4190(this + 8 GEN_EDX_FWD,param_2,0)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00dc25d0(this_00 GEN_EDX_ARG,param_1,*(undefined4 *)(this + 0x18));
    return (uint)this_00;
  }
  return 0;
}

/* ref: hkTypeInfoRegistry::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdec380u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(F_00da4190(this + 8 GEN_EDX_FWD,param_2,0)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00dc2610(this_00 GEN_EDX_ARG,param_1);
  }
  return (uint)this_00;
}

/* ref: hkTypeInfoRegistry::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec3b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdec3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((*(int *)&gen_args[0]) + 8)));
  uVar1 = F_00da3970(this_00 GEN_EDX_FWD);
  uVar2 = F_00da3e40(this_00 GEN_EDX_ARG,(int)&(*(int *)&gen_args[0]) + 3,uVar1);
  if ((*(undefined1 *)((char *)&(*(int *)&gen_args[0]) + 3)) != '\0') {
    do {
      uVar2 = F_00da39b0(this_00 GEN_EDX_ARG,uVar1);
      uVar3 = F_00da3990(this_00 GEN_EDX_ARG,uVar1);
      F_00da3a20(this + 8 GEN_EDX_ARG,uVar3,uVar2);
      uVar1 = F_00da39f0(this_00 GEN_EDX_ARG,uVar1);
      uVar2 = F_00da3e40(this_00 GEN_EDX_ARG,(int)&(*(int *)&gen_args[0]) + 3,uVar1);
    } while ((*(undefined1 *)((char *)&(*(int *)&gen_args[0]) + 3)) != '\0');
  }
  return uVar2;
}

/* ref: hkTypeInfoRegistry::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdec430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da4190(this + 8 GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: hkTypeInfoRegistry::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec450(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdec450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00da3e20(param_1 + 2 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: hkSerializeUtil::ErrorDetails::SetResult */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdec490u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  *(undefined4 *)this = param_1;
  uVar1 = F_00d91520(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: hkReferencedObject::DeleteReferencedObject_00dec4b0 */
GEN_LIB GEN_FRAME uint F_00dec4b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdec4b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00dec4e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdec4e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbddc0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,param_1,param_2,0xffffffff,0);
  return uVar1;
}

/* ref: FUN_00dec510 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00dec510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdec510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return;
}

/* ref: FUN_00dec550 */
GEN_LIB GEN_FRAME uint F_00dec550(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdec550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkXmlTagfileReader::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec580(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdec580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00dec5c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec5c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdec5c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00dec600 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdec600u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x114ba38));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_3;
  return (uint)this;
}

/* ref: FUN_00dec640 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdec640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = *param_1;
  *(int *)this = iVar1;
  if (iVar1 != 0) {
    *((short *)GEN_TOP((iVar1 + 6))) = *((short *)GEN_TOP((iVar1 + 6))) + 1;
    *((int *)GEN_TOP((iVar1 + 8))) = *((int *)GEN_TOP((iVar1 + 8))) + 1;
  }
  return (uint)this;
}

/* ref: FUN_00dec660 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdec660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  piVar1 = *(int * PTR32 *)this;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    puVar3 = &(*(undefined4 *)(gen_frame + 0x8));
  }
  else {
    puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)))));
  }
  uVar2 = *puVar3;
  param_1[1] = puVar3[1];
  *param_1 = uVar2;
  return (uint)param_1;
}

/* ref: FUN_00dec6a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec6a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdec6a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = F_00df6340(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_2,param_3);
    *param_1 = uVar1;
    if (uVar1 != 0) {
      *((short *)GEN_TOP((uVar1 + 6))) = *((short *)GEN_TOP((uVar1 + 6))) + 1;
      *((int *)GEN_TOP((uVar1 + 8))) = *((int *)GEN_TOP((uVar1 + 8))) + 1;
    }
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00dec6e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdec6e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    piVar3 = ((int *)GEN_TOP(*param_2));
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG);
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,uVar4);
      piVar3 = ((int *)GEN_TOP(*param_2));
      ((int *)(gen_frame + 0x8))[0] = 0;
      ((int *)(gen_frame + 0x8))[1] = 0;
      if (piVar3 == ((int *)GEN_TOP(0x0))) {
        piVar3 = ((int *)(gen_frame + 0x8));
      }
      else {
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
      }
      iVar1 = *piVar3;
      uVar2 = piVar3[1];
      (*(int *)(gen_frame + 0x14)) = iVar1;
      if (uVar2 != 0) {
        uVar4 = uVar2;
      }
      ((int *)(gen_frame + 0x8))[2] = uVar4;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x14)),((int *)(gen_frame + 0x8)) + 2)
      ;
      if (((*(int *)(gen_frame + 0x14)) != iVar1) || (((int *)(gen_frame + 0x8))[2] != uVar4)) {
        if ((*(int *)(gen_frame + 0x14)) == 0) {
          *param_1 = 0;
        }
        else {
          uVar4 = F_00df6340(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,(*(int *)(gen_frame + 0x14)),((int *)(gen_frame + 0x8))[2]);
          *param_1 = uVar4;
          if (uVar4 != 0) {
            *((short *)GEN_TOP((uVar4 + 6))) = *((short *)GEN_TOP((uVar4 + 6))) + 1;
            *((int *)GEN_TOP((uVar4 + 8))) = *((int *)GEN_TOP((uVar4 + 8))) + 1;
            return (uint)param_1;
          }
        }
        return (uint)param_1;
      }
    }
  }
  uVar4 = *param_2;
  *param_1 = uVar4;
  if (uVar4 != 0) {
    *((short *)GEN_TOP((uVar4 + 6))) = *((short *)GEN_TOP((uVar4 + 6))) + 1;
    *((int *)GEN_TOP((uVar4 + 8))) = *((int *)GEN_TOP((uVar4 + 8))) + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00dec800 */
GEN_LIB GEN_FRAME uint F_00dec800(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdec800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00dec860 */
GEN_LIB GEN_FRAME uint F_00dec860(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdec860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkXmlTagfileWriter::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec8a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdec8a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: hkBinaryTagfileWriter::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec8e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdec8e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00dec960 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdec960u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff) < param_2) {
    bVar1 = F_00d95690(param_1,this,param_2,1);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dec990 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dec990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdec990u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = iVar2 + param_2;
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(param_1,this,iVar4,1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + param_2;
  return *(int *)this + iVar2;
}

/* ref: FUN_00deca00 */
GEN_LIB GEN_FRAME uint F_00deca00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdeca00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  undefined * this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)(this + 0xc);
  uVar3 = param_1 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)(this + 8)) && (uVar2 <= *(uint *)(this + 0x10))) {
    *(uint *)(this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this GEN_EDX_ARG,uVar3);
  return uVar2;
}

/* ref: FUN_00deca40 */
GEN_LIB GEN_FRAME uint F_00deca40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdeca40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)(this + 8)) && (uVar1 + param_1 == *(int *)(this + 0xc))) &&
     (*(int *)(this + 0x14) != param_1)) {
    *(int *)(this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this GEN_EDX_ARG,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00decaa0 */
GEN_LIB GEN_FRAME uint F_00decaa0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdecaa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00decad0 */
GEN_LIB GEN_FRAME uint F_00decad0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdecad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00decb00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00decb00(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdecb00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00decb40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00decb40(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdecb40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00decb80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00decb80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdecb80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00decbc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00decbc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdecbc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff) < param_1) {
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,param_1,1);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00decbf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00decbf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdecbf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = iVar2 + param_1;
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar4,1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  return *(int *)this + iVar2;
}

/* ref: hkLocalBuffer::LocalBufferAlloc */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00decc40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdecc40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar1 = *(int *)(this_00 + 0xc);
  uVar3 = param_1 + 0x7fU & 0xffffff80;
  uVar2 = iVar1 + uVar3;
  if (((int)uVar3 <= *(int *)(this_00 + 8)) && (uVar2 <= *(uint *)(this_00 + 0x10))) {
    *(uint *)(this_00 + 0xc) = uVar2;
    *(int *)this = iVar1;
    *((int *)GEN_TOP(((int)this + 4))) = param_1;
    return (uint)this;
  }
  uVar2 = F_00d94390(this_00 GEN_EDX_ARG,uVar3);
  *(uint *)this = uVar2;
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return (uint)this;
}

/* ref: hkArray::ClearAndDeallocate_00deccf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00deccf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdeccf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkArray::ClearAndDeallocateHeap */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00decd30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdecd30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkArray::ClearAndDeallocateHeap2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00decd70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdecd70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00decdb0 */
GEN_LIB GEN_FRAME uint F_00decdb0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdecdb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00decdc0 */
GEN_LIB GEN_FRAME uint F_00decdc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdecdc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00decdd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00decdd0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdecdd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  F_00d91350(in_ecx GEN_EDX_FWD,param_2);
  F_00d91350(in_ecx + 4 GEN_EDX_ARG,param_2);
  return in_ecx;
}

/* ref: FUN_00dece00 */
GEN_LIB GEN_FRAME uint F_00dece00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdece00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dece50 */
GEN_LIB GEN_FRAME unsigned int F_00dece50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdece50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != 0) {
    F_00d91350(param_1 GEN_EDX_ARG,param_2);
    F_00d91350(param_1 + 4 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: Global::FinishLoadedObject_00dece90 */
GEN_LIB GEN_FRAME unsigned int F_00dece90(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdece90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != 0) {
    F_00e17fb0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: Global::CleanupLoadedObject_00deceb0 */
GEN_LIB GEN_FRAME uint F_00deceb0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdeceb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: Global::GetVtable_00decec0 */
GEN_LIB GEN_NOFRAME uint F_00decec0(void)
{
  GEN_ENTER(0xdecec0u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x30, 0);
  
  F_00e17fb0(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: Global::FinishLoadedObject2 */
GEN_LIB GEN_FRAME unsigned int F_00decf00(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdecf00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00e18210(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: Global::CleanupLoadedObject2_00decf20 */
GEN_LIB GEN_FRAME uint F_00decf20(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdecf20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: Global::GetVtable2 */
GEN_LIB GEN_NOFRAME uint F_00decf30(void)
{
  GEN_ENTER(0xdecf30u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL(0x40, 0);
  
  F_00e18210(((uint *)(gen_frame + 0x0)) GEN_EDX_ARG,0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00decf60 */
GEN_LIB GEN_FRAME uint F_00decf60(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdecf60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00d91510(((undefined *)GEN_TOP(((int)param_1 + 4))) GEN_EDX_ARG);
  uVar1 = F_00d91510(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00decf80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00decf80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdecf80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00d91510(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  uVar1 = F_00d91510(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: Global::DeleteStringPair */
GEN_LIB GEN_FRAME unsigned int F_00decfa0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdecfa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: Global::ScalarDeletingDestructor_00decfd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00decfd0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdecfd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d91510(((undefined *)GEN_TOP(((int)param_1 + 4))) GEN_EDX_FWD);
  F_00d91510(param_1 GEN_EDX_ARG);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,8);
  }
  return (uint)param_1;
}

/* ref: FUN_00ded010 */
GEN_LIB GEN_FRAME uint F_00ded010(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xded010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00ded020 */
GEN_LIB GEN_FRAME uint F_00ded020(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xded020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00ded040 */
GEN_LIB GEN_FRAME unsigned int F_00ded040(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xded040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != 0) {
    F_00dea2b0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00ded070 */
GEN_LIB GEN_FRAME unsigned int F_00ded070(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xded070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != 0) {
    F_00dea2e0(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00ded090 */
GEN_LIB GEN_FRAME uint F_00ded090(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xded090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)param_1 + 8))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)param_1 + 8))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)param_1 + 8))) = 0;
  F_00d91510(((undefined *)GEN_TOP(((int)param_1 + 4))) GEN_EDX_ARG);
  uVar1 = F_00d91510(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00ded0c0 */
GEN_LIB GEN_FRAME uint F_00ded0c0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xded0c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00ded180(param_1 GEN_EDX_ARG,0);
  return uVar1;
}

/* ref: FUN_00ded0d0 */
GEN_LIB GEN_FRAME unsigned int F_00ded0d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xded0d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: Global::ScalarDeletingDestructor_00ded180 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ded180(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xded180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  undefined4 * puVar3;
  int iVar4;
  
  iVar4 = param_1[1] - 1;
  if (-1 < iVar4) {
    puVar3 = ((undefined4 *)GEN_TOP((*param_1 + 8 + iVar4 * 0xc)));
    do {
      if (((undefined *)GEN_TOP(*puVar3)) != ((undefined *)GEN_TOP(0x0))) {
        F_00d91a80(((undefined *)GEN_TOP(*puVar3)) GEN_EDX_FWD);
      }
      *puVar3 = 0;
      F_00d91510(puVar3 - 1 GEN_EDX_ARG);
      F_00d91510(puVar3 - 2 GEN_EDX_ARG);
      puVar3 = puVar3 - 3;
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0xc);
  }
  *param_1 = 0;
  param_1[2] = ((int)0x80000000);
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return (uint)param_1;
}

/* ref: FUN_00ded240 */
GEN_LIB GEN_NOFRAME unsigned int F_00ded240(void)
{
  GEN_ENTER(0xded240u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00ded260 */
GEN_LIB GEN_NOFRAME unsigned int F_00ded260(void)
{
  GEN_ENTER(0xded260u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: hkDataWorldDict::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ded2a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xded2a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x10;
}

/* ref: FUN_00ded2f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ded2f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xded2f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00ded310 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ded310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xded310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00ded2f0(param_1,param_2);
  return uVar1;
}

/* ref: hkVersionPatchManager::IsValidPatch */
GEN_LIB GEN_FRAME uint F_00ded330(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xded330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  if (param_1[2] == -1) {
    if (((*param_1 != 0) || (param_1[3] == -1)) || (param_1[1] == 0)) {
      return 0;
    }
  }
  else if (param_1[3] == -1) {
    if (*param_1 == 0) {
      return 0;
    }
    if (param_1[1] != 0) {
      return 0;
    }
  }
  else if (*param_1 == 0) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ded380 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ded380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xded380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  undefined * this_00;
  
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x114c26c));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  this_00 = param_1;
  if (param_1 == ((undefined *)GEN_TOP(0x0))) {
    this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x10))))(REFG(int * PTR32, 0x15e3738) GEN_EDX_FWD)));
    if (this_00 == ((undefined *)GEN_TOP(0x0))) goto LAB_00ded3be;
  }
  F_00d919e0(this_00 GEN_EDX_ARG);
LAB_00ded3be: ;
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  }
  *((undefined * PTR32 *)GEN_TOP(((int)this + 8))) = this_00;
  return (uint)this;
}

/* ref: hkDefaultClassWrapper::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ded3e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xded3e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  undefined * this_00;
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  
  uVar1 = (*(undefined4 *)&gen_args[1]);
  this_00 = (*(undefined * PTR32 *)&gen_args[0]);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]));
  if (uVar2 == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x10))))(*(int * PTR32 *)(this + 8) GEN_EDX_ARG,uVar1);
    if (uVar2 != 0) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this_00 + 0x18))))(this_00 GEN_EDX_ARG,&(*(undefined * PTR32 *)&gen_args[0]))));
      if (*piVar3 == 1) {
        uVar2 = F_00e0e830(this_00 GEN_EDX_ARG,uVar2);
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: hkVersionPatchManager::UidFromClassVersion::GetName */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ded440(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xded440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x10))) + param_2 * 4)));
}

/* ref: hkVersionPatchManager::UidFromClassVersion::CacheName */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ded450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xded450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = F_00da4190(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_FWD,param_1,0);
    if (uVar1 == 0) {
      uVar1 = F_00da1210(param_1);
      F_00da3a20(((undefined *)GEN_TOP(((int)this + 0x1c))) GEN_EDX_ARG,uVar1,uVar1);
    }
    return uVar1;
  }
  return 0;
}

/* ref: hkVersionPatchManager::GetClassName */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ded4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xded4a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00ded440(*(undefined4 *)(this + 8) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: hkVersionPatchManager::UidFromClassVersion::GetUid */
GEN_LIB GEN_FRAME ulonglong GEN_THISCALL F_00ded4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xded4c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00ded450(this GEN_EDX_FWD,param_1);
  uVar2 = F_00da3e60(this GEN_EDX_ARG,uVar1,*((undefined4 *)GEN_TOP(((int)this + 0x14))));
  if (uVar2 == *((uint *)GEN_TOP(((int)this + 0x14)))) {
    if (*((uint *)GEN_TOP(((int)this + 0x14))) == (*((uint *)GEN_TOP(((int)this + 0x18))) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0x10))),4);
    }
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + *((int *)GEN_TOP(((int)this + 0x14))) * 4))) = uVar1;
    *((int *)GEN_TOP(((int)this + 0x14))) = *((int *)GEN_TOP(((int)this + 0x14))) + 1;
  }
  return CONCAT44(param_2,uVar2);
}

/* ref: hkVersionPatchManager::GetUid */
GEN_LIB GEN_FRAME ulonglong GEN_THISCALL F_00ded530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xded530u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  ulonglong uVar1;
  
  uVar1 = F_00ded4c0(*(undefined * PTR32 *)(this + 8) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: hkVersionPatchManager::FindLastPatchIndexForUid */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ded540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xded540u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = F_00dbddc0(this + 0x18 GEN_EDX_FWD,param_1,param_2,0xffffffff,0);
  while( true ) {
    if (uVar2 == 0xffffffff) {
      return 0xffffffff;
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + uVar2 * 4)));
    if ((puVar1[3] == -1) ||
       (((param_3 == 0 && (puVar1[1] != 0)) &&
        (uVar3 = F_00da0d20(*puVar1,puVar1[1]), uVar3 != 0)))) break;
    uVar4 = F_00ded4c0(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,puVar1[1],puVar1[3]);
    uVar2 = F_00dbddc0(this + 0x18 GEN_EDX_ARG,(int)uVar4,(int)(uVar4 >> 0x20),0xffffffff,0);
  }
  return uVar2;
}

/* ref: Global::HasDependencyPath */
GEN_LIB GEN_FRAME uint F_00ded5d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xded5d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a3;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00dbd930(param_4 GEN_EDX_ARG,param_2);
  if (*((int *)GEN_TOP(((int)param_4 + 8))) < (int)uVar2) {
    F_00dbd8b0(param_4 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_2,0);
    for (uVar2 = F_00df03e0(param_3 GEN_EDX_ARG,param_2); uVar2 != 0xffffffff;
        uVar2 = *((uint *)GEN_TOP((*param_3 + 4 + uVar2 * 8)))) {
      iVar1 = *((int *)GEN_TOP((*param_3 + uVar2 * 8)));
      if ((param_1 == iVar1) ||
         (uVar3 = F_00ded5d0(param_1,iVar1,param_3,param_4), uVar3 != 0)) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00ded650 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ded650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xded650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00ded330(param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    if (*((uint *)GEN_TOP(((int)this + 0x10))) == (*((uint *)GEN_TOP(((int)this + 0x14))) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0xc))),4);
    }
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 0x10))) * 4))) = param_1;
    *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
    uVar2 = F_00dbdfc0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: Global::ClearAndDeallocate_00ded6b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ded6b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xded6b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x5, 11);
  undefined * this_00;
  int iVar1;
  uint uVar2;
  uint uVar3;
  LPVOID pvVar4;
  
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x1c)));
  uVar2 = F_00da3970(this_00 GEN_EDX_FWD);
  F_00da3e40(this_00 GEN_EDX_ARG,&(*(char *)(gen_frame + 0x0)),uVar2);
  while ((*(char *)(gen_frame + 0x0)) != '\0') {
    uVar3 = F_00da39b0(this_00 GEN_EDX_ARG,uVar2);
    pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    F_00d924b0(*((undefined4 *)GEN_TOP(((int)pvVar4 + 0x2c))),uVar3);
    uVar2 = F_00da39f0(this_00 GEN_EDX_ARG,uVar2);
    F_00da3e40(this_00 GEN_EDX_ARG,&(*(char *)(gen_frame + 0x0)),uVar2);
  }
  F_00da3e20(this_00 GEN_EDX_ARG);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x18)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x10))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  uVar2 = F_00da3e20(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00ded770 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ded770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xded770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  LPVOID pvVar1;
  uint uVar2;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 8)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114c280));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00ded6b0(this_00 GEN_EDX_FWD);
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,this_00,0x2c);
  }
  F_00dbdff0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd6b0();
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x14)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0xc))),uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: hkVersionPatchManager::DoApplyPatches */
GEN_LIB GEN_FRAME uint F_00ded800(GEN_P(int * in_esi, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xded800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_esi = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x58, 8, 4);
  int * piVar1;
  code * pcVar2;
  code * pcVar3;
  undefined4 * puVar4;
  uint uVar5;
  undefined * this;
  int iVar6;
  int * piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  (*(int *)(gen_frame + 0x48)) = 0;
  if (0 < param_2[1]) {
    do {
      piVar7 = *((int * PTR32 *)GEN_TOP((*param_2 + (*(int *)(gen_frame + 0x48)) * 4)));
      (*(int * PTR32 *)(gen_frame + 0x38)) = piVar7;
      if (*piVar7 == 0) {
        (*(int *)(gen_frame + 0x4c)) = piVar7[1];
      }
      else {
        (*(int *)(gen_frame + 0x4c)) = *piVar7;
      }
      if (piVar7[2] == -1) {
        (*(int *)(gen_frame + 0x4)) = piVar7[3];
        iVar6 = *in_esi;
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x4c));
        (*(undefined4 *)(gen_frame + 0xc)) = 0;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(uint *)(gen_frame + 0x14)) = 0x80000000;
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        uVar5 = ((code *)*((gen_code32 *)GEN_TOP((iVar6 + 0x24))))(in_esi,(*(int *)(gen_frame + 0x4c)));
        if (uVar5 != 0) {
          (*(undefined4 *)(gen_frame + 0x10)) = 0;
          if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0xc)),((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) * 0xc);
          }
          return 1;
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_esi + 0xc))))(in_esi GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)));
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                    (&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0xc)),((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) * 0xc);
        }
      }
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_esi + 0x24))))(in_esi GEN_EDX_ARG,(*(int *)(gen_frame + 0x4c)));
      (*(uint *)(gen_frame + 0x50)) = uVar5;
      if (((*piVar7 != 0) && (piVar7[1] != 0)) &&
         (uVar5 = F_00da0d20(*piVar7,piVar7[1]), uVar5 != 0)) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_esi + 0x30))))(in_esi GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x50)),piVar7[1]);
        (*(int *)(gen_frame + 0x4c)) = piVar7[1];
      }
      (*(int *)(gen_frame + 0x3c)) = 0;
      if (0 < piVar7[5]) {
        do {
          iVar8 = 0;
          iVar6 = piVar7[4] + (*(int *)(gen_frame + 0x3c)) * 8;
          switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((piVar7[4] + (*(int *)(gen_frame + 0x3c)) * 8))))) {
          case 1: ;
            puVar4 = *((undefined4 * PTR32 *)GEN_TOP((iVar6 + 4)));
            uVar11 = puVar4[3];
            uVar10 = puVar4[2];
            uVar9 = puVar4[1];
            this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_esi + 0x2c))))(in_esi GEN_EDX_ARG)));
            uVar5 = F_00e1aa20(this GEN_EDX_ARG,uVar9,uVar10,uVar11);
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_esi + 0x40))))(in_esi GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x50)),*puVar4,uVar5,puVar4[4]);
            break;
          case 2: ;
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_esi + 0x4c))))(in_esi GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x50)),**((undefined4 * PTR32 *)GEN_TOP((iVar6 + 4))));
            break;
          case 3: ;
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_esi + 0x48))))
                      (in_esi GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x50)),**((undefined4 * PTR32 *)GEN_TOP((iVar6 + 4))),(*((undefined4 * PTR32 *)GEN_TOP((iVar6 + 4))))[1]
                      );
            break;
          case 4: ;
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_esi + 0x44))))
                      (in_esi GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x50)),**((undefined4 * PTR32 *)GEN_TOP((iVar6 + 4))),(*((undefined4 * PTR32 *)GEN_TOP((iVar6 + 4))))[1]
                      );
            break;
          case 5: ;
            pcVar3 = *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 4))) + 4)));
            pcVar2 = *((gen_code32 *)GEN_TOP((*in_esi + 0x50)));
            (*(int *)(gen_frame + 0x24)) = 0;
            (*(int *)(gen_frame + 0x28)) = 0;
            (*(int *)(gen_frame + 0x2c)) = ((int)0x80000000);
            (*pcVar2)(in_esi,(*(int *)(gen_frame + 0x4c)),&(*(int *)(gen_frame + 0x24)));
            if (0 < (*(int *)(gen_frame + 0x28))) {
              iVar6 = 0;
              do {
                puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x24)) + iVar6 * 4)));
                (*(undefined4 * PTR32 *)(gen_frame + 0x44)) = puVar4;
                if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
                  *((short *)GEN_TOP(((int)puVar4 + 6))) = *((short *)GEN_TOP(((int)puVar4 + 6))) + 1;
                  puVar4[2] = puVar4[2] + 1;
                }
                (*pcVar3)(&(*(undefined4 * PTR32 *)(gen_frame + 0x44)));
                if ((*(undefined4 * PTR32 *)(gen_frame + 0x44)) != ((undefined4 *)GEN_TOP(0x0))) {
                  *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x44)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x44)) + 6))) - 1;
                  piVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x44)) + 2;
                  *piVar7 = *piVar7 - 1;
                  if (*piVar7 == 0) {
                    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x44)))))((*(undefined4 * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,1);
                  }
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < (*(int *)(gen_frame + 0x28)));
            }
            (*(int *)(gen_frame + 0x28)) = 0;
            if (-1 < (*(int *)(gen_frame + 0x2c))) {
              ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x24)),(*(int *)(gen_frame + 0x2c)) * 4);
            }
            (*(int *)(gen_frame + 0x24)) = 0;
            (*(int *)(gen_frame + 0x2c)) = 0x80000000;
            piVar7 = (*(int * PTR32 *)(gen_frame + 0x38));
            break;
          case 6: ;
            uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_esi + 0x24))))(in_esi GEN_EDX_ARG,**((undefined4 * PTR32 *)GEN_TOP((iVar6 + 4))));
            (*(uint *)(gen_frame + 0x30)) = uVar5;
            pcVar3 = *((gen_code32 *)GEN_TOP((*in_esi + 0x54)));
            (*(int *)(gen_frame + 0x18)) = 0;
            (*(int *)(gen_frame + 0x1c)) = 0;
            (*(int *)(gen_frame + 0x20)) = ((int)0x80000000);
            (*pcVar3)(in_esi,(*(int *)(gen_frame + 0x4c)),&(*(int *)(gen_frame + 0x18)));
            if (0 < (*(int *)(gen_frame + 0x1c))) {
              do {
                puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + iVar8 * 4)));
                (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = puVar4;
                if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
                  *((short *)GEN_TOP(((int)puVar4 + 6))) = *((short *)GEN_TOP(((int)puVar4 + 6))) + 1;
                  puVar4[2] = puVar4[2] + 1;
                }
                ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_esi + 0x58))))(in_esi GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x40)),&(*(uint *)(gen_frame + 0x30)));
                if ((*(undefined4 * PTR32 *)(gen_frame + 0x40)) != ((undefined4 *)GEN_TOP(0x0))) {
                  *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x40)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x40)) + 6))) - 1;
                  piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x40)) + 2;
                  *piVar1 = *piVar1 - 1;
                  if (*piVar1 == 0) {
                    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x40)))))((*(undefined4 * PTR32 *)(gen_frame + 0x40)) GEN_EDX_ARG,1);
                  }
                }
                iVar8 = iVar8 + 1;
              } while (iVar8 < (*(int *)(gen_frame + 0x1c)));
            }
            (*(int *)(gen_frame + 0x1c)) = 0;
            if (-1 < (*(int *)(gen_frame + 0x20))) {
              ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x18)),(*(int *)(gen_frame + 0x20)) * 4);
            }
            (*(int *)(gen_frame + 0x18)) = 0;
            (*(int *)(gen_frame + 0x20)) = 0x80000000;
            break;
          case 8: ;
            iVar6 = *((int *)GEN_TOP((*((int *)GEN_TOP((iVar6 + 4))) + 4)));
            if (iVar6 == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_esi + 0x24))))(in_esi GEN_EDX_ARG,iVar6);
            }
            pcVar3 = *((gen_code32 *)GEN_TOP((*in_esi + 0x3c)));
            (*(uint *)(gen_frame + 0x34)) = uVar5;
            (*pcVar3)(in_esi,&(*(uint *)(gen_frame + 0x50)),&(*(uint *)(gen_frame + 0x34)));
          }
          iVar6 = (*(int *)(gen_frame + 0x3c)) + 1;
          (*(int *)(gen_frame + 0x3c)) = iVar6;
        } while (iVar6 < piVar7[5]);
      }
      iVar6 = piVar7[3];
      if (iVar6 == -1) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_esi + 0x34))))(in_esi GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x50)));
      }
      else if ((piVar7[2] != -1) && (piVar7[2] != iVar6)) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_esi + 0x38))))(in_esi GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x50)),iVar6);
      }
      iVar6 = (*(int *)(gen_frame + 0x48)) + 1;
      (*(int *)(gen_frame + 0x48)) = iVar6;
    } while (iVar6 < param_2[1]);
  }
  return 0;
}

/* ref: Global::TopologicalVisit */
GEN_LIB GEN_FRAME uint F_00dedc00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xdedc00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*((int *)GEN_TOP((*param_2 + param_1 * 4))) == -1) {
    *((undefined4 *)GEN_TOP((*param_2 + param_1 * 4))) = 0xfffffffe;
    if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_5,4);
    }
    *((int *)GEN_TOP((*param_5 + param_5[1] * 4))) = param_1;
    param_5[1] = param_5[1] + 1;
    for (uVar3 = F_00df03e0(param_3 GEN_EDX_ARG,param_1); uVar3 != 0xffffffff;
        uVar3 = *((uint *)GEN_TOP((*param_3 + 4 + uVar3 * 8)))) {
      iVar1 = *((int *)GEN_TOP((*param_3 + uVar3 * 8)));
      iVar2 = *((int *)GEN_TOP((*param_2 + iVar1 * 4)));
      if (iVar2 == -2) {
        if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_5,4);
        }
        *((int *)GEN_TOP((*param_5 + param_5[1] * 4))) = iVar1;
        param_5[1] = param_5[1];
      }
      else if (iVar2 == -1) {
        param_4 = F_00dedc00(iVar1,param_2,param_3,param_4,param_5,param_6);
      }
    }
    param_5[1] = param_5[1] - 1;
    *((uint *)GEN_TOP((*param_2 + param_1 * 4))) = param_4;
    return param_4 + 1;
  }
  return param_4;
}

/* ref: FUN_00dedcf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dedcf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdedcf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  LPVOID pvVar1;
  undefined * this_00;
  int local_8;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114c280));
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0xffffffff;
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))
                              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x2c)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    local_8 = ((uint)((int)(uintptr_t)this) >> 8) << 8;
    F_00da3de0(this_00 GEN_EDX_ARG,local_8);
    local_8 = ((uint)((int)(uintptr_t)this) >> 8) << 8;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x14))) = 0;
    *((undefined4 *)GEN_TOP(((int)this_00 + 0x18))) = 0x80000000;
    F_00da3de0(((undefined *)GEN_TOP(((int)this_00 + 0x1c))) GEN_EDX_ARG,local_8);
    *((undefined * PTR32 *)GEN_TOP(((int)this + 8))) = this_00;
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return (uint)this;
}

/* ref: Global::Reset_00dedd90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dedd90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdedd90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  LPVOID pvVar1;
  undefined * pvVar2;
  uint uVar3;
  int local_8;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  F_00dbdfc0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD);
  pvVar2 = *((undefined * PTR32 *)GEN_TOP(((int)this + 8)));
  if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
    F_00ded6b0(pvVar2 GEN_EDX_ARG);
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,pvVar2,0x2c);
  }
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))
                             (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x2c)));
  if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
    local_8 = ((uint)((int)(uintptr_t)this) >> 8) << 8;
    F_00da3de0(pvVar2 GEN_EDX_ARG,local_8);
    local_8 = ((uint)((int)(uintptr_t)this) >> 8) << 8;
    *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x14))) = 0;
    *((undefined4 *)GEN_TOP(((int)pvVar2 + 0x18))) = 0x80000000;
    uVar3 = F_00da3de0(((undefined *)GEN_TOP(((int)pvVar2 + 0x1c))) GEN_EDX_ARG,local_8);
    *((undefined * PTR32 *)GEN_TOP(((int)this + 8))) = pvVar2;
    return uVar3;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return 0;
}

/* ref: hkVersionPatchManager::RecomputePatchDependencies */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dede30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdede30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xdc, 4, 4);
  int iVar1;
  undefined * pvVar2;
  uint * puVar3;
  int iVar4;
  undefined * this_00;
  uint uVar5;
  undefined4 uVar6;
  undefined * phVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  int * piVar13;
  undefined4 * puVar14;
  ulonglong uVar15;
  
  pvVar2 = *(undefined * PTR32 *)(this + 8);
  (*(undefined * PTR32 *)(gen_frame + 0xd4)) = this;
  (*(undefined4 *)(gen_frame + 0x98)) = 0;
  (*(undefined4 *)(gen_frame + 0x9c)) = 0;
  (*(int *)(gen_frame + 0xa0)) = -1;
  (*(int *)(gen_frame + 0xa4)) = 0;
  (*(undefined4 *)(gen_frame + 0xa8)) = 0;
  (*(uint *)(gen_frame + 0xac)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0xb0)) = 0;
  (*(undefined4 *)(gen_frame + 0xb4)) = 0;
  (*(undefined4 *)(gen_frame + 0xb8)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0xbc)) = 0xffffffff;
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = pvVar2;
  (*(int *)(gen_frame + 0x7c)) = 0;
  (*(undefined4 *)(gen_frame + 0x80)) = 0;
  (*(uint *)(gen_frame + 0x84)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  (*(undefined4 *)(gen_frame + 0x8c)) = 0;
  (*(undefined4 *)(gen_frame + 0x90)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x94)) = 0xffffffff;
  F_00dbdfc0(this + 0x18 GEN_EDX_FWD);
  (*(uint *)(gen_frame + 0xd0)) = 0;
  if (0 < *(int *)(this + 0x10)) {
    do {
      phVar7 = (*(undefined * PTR32 *)(gen_frame + 0xd4));
      piVar13 = *((int * PTR32 *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0xd4)) + 0xc) + (*(uint *)(gen_frame + 0xd0)) * 4)));
      uVar5 = F_00ded330(piVar13);
      if (uVar5 == 0) {
        F_00dbdb20(&(*(undefined4 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
        F_00dbd5e0();
        (*(undefined4 *)(gen_frame + 0x80)) = 0;
        if (((*(uint *)(gen_frame + 0x84)) & 0x80000000) != 0) goto LAB_00dee0f1;
        goto LAB_00dee0e1;
      }
      if (piVar13[2] == -1) {
        uVar15 = F_00ded4c0(*(undefined * PTR32 *)(phVar7 + 8) GEN_EDX_ARG,piVar13[1],piVar13[3]);
        uVar6 = (undefined4)(uVar15 >> 0x20);
        uVar5 = F_00dbdd70(&(*(undefined4 *)(gen_frame + 0x98)) GEN_EDX_ARG,(int)uVar15,uVar6);
        if ((int)uVar5 <= (*(int *)(gen_frame + 0xa0))) goto LAB_00dee15d;
        F_00dbdcd0(&(*(undefined4 *)(gen_frame + 0x98)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),(int)uVar15,uVar6,(*(uint *)(gen_frame + 0xd0)),0);
      }
      else {
        uVar15 = F_00ded4c0(*(undefined * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0xd4)) + 8) GEN_EDX_ARG,*piVar13,piVar13[2]);
        uVar6 = (undefined4)(uVar15 >> 0x20);
        uVar5 = F_00dbdd70((*(undefined * PTR32 *)(gen_frame + 0xd4)) + 0x18 GEN_EDX_ARG,(int)uVar15,uVar6);
        if ((int)uVar5 <= *(int *)((*(undefined * PTR32 *)(gen_frame + 0xd4)) + 0x20)) {
LAB_00dee15d: ;
          F_00df14a0(&(*(int *)(gen_frame + 0x7c)) GEN_EDX_ARG);
          F_00df1440(&(*(int *)(gen_frame + 0xa4)) GEN_EDX_ARG);
          goto LAB_00dee13c;
        }
        F_00dbdcd0((*(undefined * PTR32 *)(gen_frame + 0xd4)) + 0x18 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),(int)uVar15,uVar6,(*(uint *)(gen_frame + 0xd0)),0);
        if ((piVar13[3] == -1) ||
           ((piVar13[1] != 0 && (uVar5 = F_00da0d20(*piVar13,piVar13[1]), uVar5 != 0)))) {
          F_00df12c0(&(*(int *)(gen_frame + 0x7c)) GEN_EDX_ARG,*piVar13,&(*(uint *)(gen_frame + 0xd0)));
        }
      }
      if (piVar13[3] != -1) {
        iVar11 = piVar13[1];
        if (iVar11 == 0) {
          iVar11 = *piVar13;
        }
        uVar15 = F_00ded4c0((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,iVar11,piVar13[3]);
        F_00df1220(&(*(int *)(gen_frame + 0xa4)) GEN_EDX_ARG,(int)uVar15,(int)(uVar15 >> 0x20),&(*(uint *)(gen_frame + 0xd0)));
      }
      uVar5 = (*(uint *)(gen_frame + 0xd0)) + 1;
      (*(uint *)(gen_frame + 0xd0)) = uVar5;
      this = (*(undefined * PTR32 *)(gen_frame + 0xd4));
    } while ((int)uVar5 < *(int *)((*(undefined * PTR32 *)(gen_frame + 0xd4)) + 0x10));
  }
  uVar5 = (*(uint *)(gen_frame + 0x2c));
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x2c)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x2c)) = uVar5 & 0xffffff00;
  F_00da3de0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x2c)));
  (*(int *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(uint *)(gen_frame + 0x3c)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0xffffffff;
  (*(int *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(uint *)(gen_frame + 0x5c)) = 0x80000000;
  (*(int *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(int *)(gen_frame + 0x68)) = -1;
  (*(undefined4 *)(gen_frame + 0x6c)) = 0xffffffff;
  (*(int *)(gen_frame + 0x30)) = 0;
  if (0 < *(int *)(this + 0x10)) {
    do {
      puVar3 = *((uint * PTR32 *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0xd4)) + 0xc) + (*(int *)(gen_frame + 0x30)) * 4)));
      uVar5 = puVar3[2];
      (*(uint *)(gen_frame + 0x2c)) = *puVar3;
      if (uVar5 == 0xffffffff) {
        (*(uint *)(gen_frame + 0x2c)) = puVar3[1];
        uVar5 = puVar3[3];
        if (((*(uint *)(gen_frame + 0x2c)) == 0) || (uVar5 == 0xffffffff)) {
          F_00dbdb20(&(*(int *)(gen_frame + 0x60)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
          F_00dbd5e0();
          (*(undefined4 *)(gen_frame + 0x58)) = 0;
          if (((*(uint *)(gen_frame + 0x5c)) & 0x80000000) == 0) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x54)),(*(uint *)(gen_frame + 0x5c)) * 8);
          }
          (*(int *)(gen_frame + 0x54)) = 0;
          (*(uint *)(gen_frame + 0x5c)) = 0x80000000;
          F_00dbdb20(&(*(undefined4 *)(gen_frame + 0x40)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
          F_00dbd5e0();
          (*(undefined4 *)(gen_frame + 0x38)) = 0;
          if (((*(uint *)(gen_frame + 0x3c)) & 0x80000000) != 0) goto LAB_00dee82a;
          goto LAB_00dee81a;
        }
      }
      uVar15 = F_00ded4c0((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x2c)),uVar5);
      uVar12 = (undefined4)(uVar15 >> 0x20);
      uVar6 = (undefined4)uVar15;
      (*(ulonglong *)(gen_frame + 0x14)) = uVar15;
      if (puVar3[2] == 0xffffffff) {
        uVar5 = F_00dbddc0(&(*(undefined4 *)(gen_frame + 0x98)) GEN_EDX_ARG,uVar6,uVar12,0xffffffff,0);
        (*(uint *)(gen_frame + 0xd0)) = uVar5;
      }
      else {
        uVar5 = F_00dbddc0((*(undefined * PTR32 *)(gen_frame + 0xd4)) + 0x18 GEN_EDX_ARG,uVar6,uVar12,0xffffffff,0);
        (*(uint *)(gen_frame + 0xd0)) = uVar5;
        uVar5 = F_00defa30(&(*(int *)(gen_frame + 0xa4)) GEN_EDX_ARG,uVar6,uVar12);
        uVar8 = (*(uint *)(gen_frame + 0xd0));
        for (; uVar5 != 0xffffffff; uVar5 = *((uint *)GEN_TOP(((*(int *)(gen_frame + 0xa4)) + 4 + uVar5 * 8)))) {
          (*(undefined * PTR32 *)(gen_frame + 0xcc)) = *((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xa4)) + uVar5 * 8)));
          F_00df1190(&(*(int *)(gen_frame + 0x34)) GEN_EDX_ARG,uVar8,&(*(undefined * PTR32 *)(gen_frame + 0xcc)));
        }
      }
      uVar5 = puVar3[5];
      (*(undefined * PTR32 *)(gen_frame + 0xcc)) = ((undefined *)GEN_TOP(0x0));
      if (0 < (int)uVar5) {
        do {
          if (*((int *)GEN_TOP((puVar3[4] + (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0xcc))) * 8))) == 7) {
            puVar14 = *((undefined4 * PTR32 *)GEN_TOP((puVar3[4] + (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0xcc))) * 8 + 4)));
            uVar15 = F_00ded4c0((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,*puVar14,puVar14[1]);
            uVar6 = (undefined4)(uVar15 >> 0x20);
            uVar5 = F_00dbddc0((*(undefined * PTR32 *)(gen_frame + 0xd4)) + 0x18 GEN_EDX_ARG,(int)uVar15,uVar6,0xffffffff,0);
            if (uVar5 != 0xffffffff) {
              F_00df1190(&(*(int *)(gen_frame + 0x34)) GEN_EDX_ARG,uVar5,&(*(uint *)(gen_frame + 0xd0)));
            }
            uVar5 = F_00defa30(&(*(int *)(gen_frame + 0xa4)) GEN_EDX_ARG,(int)uVar15,uVar6);
            uVar8 = (*(uint *)(gen_frame + 0xd0));
            for (; uVar5 != 0xffffffff; uVar5 = *((uint *)GEN_TOP(((*(int *)(gen_frame + 0xa4)) + 4 + uVar5 * 8)))) {
              (*(uint *)(gen_frame + 0x50)) = *((uint *)GEN_TOP(((*(int *)(gen_frame + 0xa4)) + uVar5 * 8)));
              F_00df1190(&(*(int *)(gen_frame + 0x34)) GEN_EDX_ARG,uVar8,&(*(uint *)(gen_frame + 0x50)));
            }
          }
          phVar7 = (*(undefined * PTR32 *)(gen_frame + 0xcc)) + 1;
          (*(undefined * PTR32 *)(gen_frame + 0xcc)) = phVar7;
        } while ((int)phVar7 < (int)puVar3[5]);
      }
      uVar5 = (*(uint *)(gen_frame + 0x2c));
      if (((puVar3[2] == 0xffffffff) &&
          (uVar8 = F_00df0400(&(*(int *)(gen_frame + 0x7c)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x2c))), uVar8 != 0xffffffff)) &&
         (uVar8 = F_00df0400(&(*(int *)(gen_frame + 0x7c)) GEN_EDX_ARG,uVar5), uVar8 != 0xffffffff)) {
        uVar9 = F_00ded540((*(undefined * PTR32 *)(gen_frame + 0xd4)) GEN_EDX_ARG,(undefined4)(*(ulonglong *)(gen_frame + 0x14)),(*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 4)),0);
        if (uVar9 == 0xffffffff) {
          uVar10 = F_00da4190(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar5,0xffffffff);
          if (uVar10 != 0xffffffff) {
            F_00dbdb20(&(*(int *)(gen_frame + 0x60)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
            F_00dbd5e0();
            goto LAB_00dee895;
          }
          F_00da3a20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar5,(*(int *)(gen_frame + 0x30)));
          piVar13 = &(*(int *)(gen_frame + 0x34));
          iVar11 = (*(int *)(gen_frame + 0x7c));
        }
        else {
          piVar13 = &(*(int *)(gen_frame + 0x54));
          iVar11 = (*(int *)(gen_frame + 0x7c));
        }
        do {
          uVar5 = *((uint *)GEN_TOP((iVar11 + uVar8 * 8)));
          (*(uint *)(gen_frame + 0x50)) = uVar5;
          if (uVar9 != uVar5) {
            F_00df1190(piVar13 GEN_EDX_ARG,(*(uint *)(gen_frame + 0xd0)),&(*(uint *)(gen_frame + 0x50)));
            iVar11 = (*(int *)(gen_frame + 0x7c));
          }
          uVar8 = *((uint *)GEN_TOP((iVar11 + 4 + uVar8 * 8)));
        } while (uVar8 != 0xffffffff);
      }
      iVar11 = (*(int *)(gen_frame + 0x30)) + 1;
      (*(int *)(gen_frame + 0x30)) = iVar11;
    } while (iVar11 < *(int *)((*(undefined * PTR32 *)(gen_frame + 0xd4)) + 0x10));
  }
  iVar11 = 0;
  if (-1 < (*(int *)(gen_frame + 0x68))) {
    do {
      if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x60)) + iVar11 * 8))) != -1) break;
      iVar11 = iVar11 + 1;
    } while (iVar11 <= (*(int *)(gen_frame + 0x68)));
  }
  if (iVar11 <= (*(int *)(gen_frame + 0x68))) {
    do {
      uVar6 = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x60)) + iVar11 * 8)));
      for (uVar5 = F_00df03e0(&(*(int *)(gen_frame + 0x54)) GEN_EDX_ARG,uVar6); uVar5 != 0xffffffff;
          uVar5 = *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x54)) + 4 + uVar5 * 8)))) {
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 0)) = 0;
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 4)) = 0xffffffff;
        (*(ulonglong *)(gen_frame + 0x14)) = 0xffffffff00000000;
        uVar8 = *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x54)) + uVar5 * 8)));
        (*(uint *)(gen_frame + 0x50)) = uVar8;
        uVar8 = F_00ded5d0(uVar6,uVar8,&(*(int *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x10)));
        if (uVar8 == 0) {
          F_00df1190(&(*(int *)(gen_frame + 0x34)) GEN_EDX_ARG,uVar6,&(*(uint *)(gen_frame + 0x50)));
        }
        F_00dbdb20(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
        F_00dbd5e0();
      }
      do {
        iVar11 = iVar11 + 1;
        if ((*(int *)(gen_frame + 0x68)) < iVar11) break;
      } while (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x60)) + iVar11 * 8))) == -1);
    } while (iVar11 <= (*(int *)(gen_frame + 0x68)));
  }
  phVar7 = (*(undefined * PTR32 *)(gen_frame + 0xd4));
  (*(int *)(gen_frame + 0xc0)) = 0;
  (*(uint *)(gen_frame + 0xc4)) = 0;
  (*(uint *)(gen_frame + 0xc8)) = 0x80000000;
  (*(undefined * PTR32 *)(gen_frame + 0xcc)) = (*(undefined * PTR32 *)(gen_frame + 0xd4)) + 0xc;
  F_00def930(&(*(int *)(gen_frame + 0xc0)) GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0xd4)) + 0xc);
  uVar5 = (*(uint *)(gen_frame + 0xc4));
  uVar8 = 0;
  (*(uint *)(gen_frame + 0x78)) = 0x80000000;
  (*(int *)(gen_frame + 0x70)) = 0;
  (*(uint *)(gen_frame + 0x74)) = 0;
  if (0 < (int)(*(uint *)(gen_frame + 0xc4))) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x70)),((int)(*(uint *)(gen_frame + 0xc4)) < 0) - 1 & (*(uint *)(gen_frame + 0xc4)),4);
    uVar8 = (*(uint *)(gen_frame + 0x74));
  }
  iVar11 = uVar5 - uVar8;
  puVar14 = ((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x70)) + uVar8 * 4)));
  if (0 < iVar11) {
    for (; iVar11 != 0; iVar11 = iVar11 - 1) {
      *puVar14 = 0xffffffff;
      puVar14 = puVar14 + 1;
    }
  }
  uVar8 = 0;
  (*(uint *)(gen_frame + 0x74)) = uVar5;
  iVar11 = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(uint *)(gen_frame + 0x28)) = 0x80000000;
  if (0 < (int)(*(uint *)(gen_frame + 0xc4))) {
    do {
      uVar8 = F_00dedc00(iVar11,&(*(int *)(gen_frame + 0x70)),&(*(int *)(gen_frame + 0x34)),uVar8,&(*(undefined4 *)(gen_frame + 0x20)),&(*(int *)(gen_frame + 0xc0)));
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)(*(uint *)(gen_frame + 0xc4)));
  }
  this_00 = (*(undefined * PTR32 *)(gen_frame + 0xcc));
  uVar5 = (*(uint *)(gen_frame + 0xc4));
  if ((int)(*(uint *)((*(undefined * PTR32 *)(gen_frame + 0xcc)) + 8) & 0x3fffffff) < (int)(*(uint *)(gen_frame + 0xc4))) {
    uVar8 = (*(uint *)((*(undefined * PTR32 *)(gen_frame + 0xcc)) + 8) & 0x3fffffff) * 2;
    uVar9 = (*(uint *)(gen_frame + 0xc4));
    if ((int)(*(uint *)(gen_frame + 0xc4)) < (int)uVar8) {
      uVar9 = uVar8;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(*(undefined * PTR32 *)(gen_frame + 0xcc)),uVar9,4);
  }
  iVar11 = 0;
  *(uint *)(this_00 + 4) = uVar5;
  if (0 < (int)(*(uint *)(gen_frame + 0xc4))) {
    do {
      iVar4 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x70)) + iVar11 * 4)));
      if (iVar4 < 0) {
        F_00def930(this_00 GEN_EDX_ARG,&(*(int *)(gen_frame + 0xc0)));
        (*(undefined4 *)(gen_frame + 0x24)) = 0;
        if (((*(uint *)(gen_frame + 0x28)) & 0x80000000) == 0) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x20)),(*(uint *)(gen_frame + 0x28)) * 4);
        }
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(uint *)(gen_frame + 0x28)) = 0x80000000;
        (*(uint *)(gen_frame + 0x74)) = 0;
        if (((*(uint *)(gen_frame + 0x78)) & 0x80000000) == 0) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x70)),(*(uint *)(gen_frame + 0x78)) * 4);
        }
        (*(int *)(gen_frame + 0x70)) = 0;
        (*(uint *)(gen_frame + 0x78)) = 0x80000000;
        (*(uint *)(gen_frame + 0xc4)) = 0;
        if (((*(uint *)(gen_frame + 0xc8)) & 0x80000000) == 0) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0xc0)),(*(uint *)(gen_frame + 0xc8)) * 4);
        }
        (*(int *)(gen_frame + 0xc0)) = 0;
        (*(uint *)(gen_frame + 0xc8)) = 0x80000000;
        F_00dbdb20(&(*(int *)(gen_frame + 0x60)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
        F_00dbd5e0();
LAB_00dee895: ;
        (*(undefined4 *)(gen_frame + 0x58)) = 0;
        if (((*(uint *)(gen_frame + 0x5c)) & 0x80000000) == 0) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x54)),(*(uint *)(gen_frame + 0x5c)) * 8);
        }
        (*(int *)(gen_frame + 0x54)) = 0;
        (*(uint *)(gen_frame + 0x5c)) = 0x80000000;
        F_00dbdb20(&(*(undefined4 *)(gen_frame + 0x40)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
        F_00dbd5e0();
        (*(undefined4 *)(gen_frame + 0x38)) = 0;
        if (((*(uint *)(gen_frame + 0x3c)) & 0x80000000) == 0) {
LAB_00dee81a: ;
          (*(undefined4 *)(gen_frame + 0x38)) = 0;
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x34)),(*(uint *)(gen_frame + 0x3c)) * 8);
        }
LAB_00dee82a: ;
        (*(int *)(gen_frame + 0x34)) = 0;
        (*(uint *)(gen_frame + 0x3c)) = 0x80000000;
        F_00da3e20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        F_00dbdb20(&(*(undefined4 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
        F_00dbd5e0();
        (*(undefined4 *)(gen_frame + 0x80)) = 0;
        if (((*(uint *)(gen_frame + 0x84)) & 0x80000000) == 0) {
LAB_00dee0e1: ;
          (*(undefined4 *)(gen_frame + 0x80)) = 0;
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x7c)),(*(uint *)(gen_frame + 0x84)) * 8);
        }
LAB_00dee0f1: ;
        (*(int *)(gen_frame + 0x7c)) = 0;
        (*(uint *)(gen_frame + 0x84)) = 0x80000000;
        F_00dbdff0(&(*(undefined4 *)(gen_frame + 0xb0)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
        F_00dbd6b0();
        (*(undefined4 *)(gen_frame + 0xa8)) = 0;
        if (((*(uint *)(gen_frame + 0xac)) & 0x80000000) == 0) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0xa4)),(*(uint *)(gen_frame + 0xac)) * 8);
        }
        (*(int *)(gen_frame + 0xa4)) = 0;
        (*(uint *)(gen_frame + 0xac)) = 0x80000000;
LAB_00dee13c: ;
        F_00dbdff0(&(*(undefined4 *)(gen_frame + 0x98)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
        F_00dbd6b0();
        return 1;
      }
      iVar1 = iVar11 * 4;
      iVar11 = iVar11 + 1;
      *((undefined4 *)GEN_TOP((*(int *)this_00 + iVar4 * 4))) = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0xc0)) + iVar1)));
      phVar7 = (*(undefined * PTR32 *)(gen_frame + 0xd4));
    } while (iVar11 < (int)(*(uint *)(gen_frame + 0xc4)));
  }
  F_00dbdfc0(phVar7 + 0x18 GEN_EDX_ARG);
  iVar11 = 0;
  if (0 < *(int *)(phVar7 + 0x10)) {
    do {
      piVar13 = *((int * PTR32 *)GEN_TOP((*(int *)this_00 + iVar11 * 4)));
      iVar4 = *piVar13;
      if (iVar4 != 0) {
        uVar15 = F_00ded4c0(*(undefined * PTR32 *)(phVar7 + 8) GEN_EDX_ARG,iVar4,piVar13[2]);
        F_00dbdcd0(phVar7 + 0x18 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),(int)uVar15,(int)(uVar15 >> 0x20),
                            iVar11,0);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(phVar7 + 0x10));
  }
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x28))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x20)),(*(uint *)(gen_frame + 0x28)) * 4);
  }
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(uint *)(gen_frame + 0x74)) = 0;
  (*(uint *)(gen_frame + 0x28)) = 0x80000000;
  if (-1 < (int)(*(uint *)(gen_frame + 0x78))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x70)),(*(uint *)(gen_frame + 0x78)) * 4);
  }
  (*(int *)(gen_frame + 0x70)) = 0;
  (*(uint *)(gen_frame + 0xc4)) = 0;
  (*(uint *)(gen_frame + 0x78)) = 0x80000000;
  if (-1 < (int)(*(uint *)(gen_frame + 0xc8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0xc0)),(*(uint *)(gen_frame + 0xc8)) * 4);
  }
  (*(int *)(gen_frame + 0xc0)) = 0;
  (*(uint *)(gen_frame + 0xc8)) = 0x80000000;
  F_00dbdb20(&(*(int *)(gen_frame + 0x60)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  if (((*(uint *)(gen_frame + 0x5c)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x54)),(*(uint *)(gen_frame + 0x5c)) * 8);
  }
  (*(int *)(gen_frame + 0x54)) = 0;
  (*(uint *)(gen_frame + 0x5c)) = 0x80000000;
  F_00dbdb20(&(*(undefined4 *)(gen_frame + 0x40)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  if (((*(uint *)(gen_frame + 0x3c)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x34)),(*(uint *)(gen_frame + 0x3c)) * 8);
  }
  (*(int *)(gen_frame + 0x34)) = 0;
  (*(uint *)(gen_frame + 0x3c)) = 0x80000000;
  F_00da3e20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00dbdb20(&(*(undefined4 *)(gen_frame + 0x88)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  (*(undefined4 *)(gen_frame + 0x80)) = 0;
  if (((*(uint *)(gen_frame + 0x84)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x7c)),(*(uint *)(gen_frame + 0x84)) * 8);
  }
  (*(int *)(gen_frame + 0x7c)) = 0;
  (*(uint *)(gen_frame + 0x84)) = 0x80000000;
  F_00dbdff0(&(*(undefined4 *)(gen_frame + 0xb0)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd6b0();
  (*(undefined4 *)(gen_frame + 0xa8)) = 0;
  if (((*(uint *)(gen_frame + 0xac)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0xa4)),(*(uint *)(gen_frame + 0xac)) * 8);
  }
  (*(int *)(gen_frame + 0xa4)) = 0;
  (*(uint *)(gen_frame + 0xac)) = 0x80000000;
  F_00dbdff0(&(*(undefined4 *)(gen_frame + 0x98)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd6b0();
  return 0;
}

/* ref: FUN_00dee9e0 */
GEN_LIB GEN_FRAME uint F_00dee9e0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3), GEN_P(undefined * param_5, unsigned int gen_a4), GEN_P(undefined * param_6, unsigned int gen_a5), GEN_P(undefined * param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xdee9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined * param_5 = (undefined *)(uintptr_t)gen_a4;)
  GEN_PIN(undefined * param_6 = (undefined *)(uintptr_t)gen_a5;)
  GEN_PIN(undefined * param_7 = (undefined *)(uintptr_t)gen_a6;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar9 = F_00ded530(param_5 GEN_EDX_ARG,param_2,param_3);
  iVar7 = (int)(uVar9 >> 0x20);
  iVar3 = (int)uVar9;
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_4 + 0x24))))(param_4 GEN_EDX_ARG,param_2)));
  uVar8 = 0xffffffff;
  if ((piVar4 == ((int *)GEN_TOP(0x0))) || (uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0xc))))(piVar4 GEN_EDX_ARG), uVar5 != param_3)) {
    uVar8 = F_00dbddc0(param_6 GEN_EDX_ARG,iVar3,iVar7,0xffffffff,0);
  }
  piVar4 = ((int *)GEN_TOP(F_00dbddc0(param_7 GEN_EDX_ARG,iVar3,iVar7,0,0)));
  (*(int * PTR32 *)(gen_frame + 0x10)) = piVar4;
  if ((uVar8 == 0xffffffff) || (piVar4 == ((int *)GEN_TOP(0x1)))) {
    uVar8 = F_00dbddc0(param_5 + 0x18 GEN_EDX_ARG,iVar3,iVar7,0xffffffff,0);
  }
  (*(ulonglong *)(gen_frame + 0x0)) = uVar9;
  (*(uint *)(gen_frame + 0x8)) = uVar8;
  piVar4 = (*(int * PTR32 *)(gen_frame + 0x10));
  if ((*(int * PTR32 *)(gen_frame + 0x10)) != ((int *)GEN_TOP(0x2))) {
    iVar6 = 0;
    if (0 < (int)param_1[1]) {
      piVar4 = ((int *)GEN_TOP(*param_1));
      do {
        if ((iVar3 == *piVar4) && (iVar7 == piVar4[1])) goto LAB_00deea9f;
        iVar6 = iVar6 + 1;
        piVar4 = piVar4 + 4;
      } while (iVar6 < (int)param_1[1]);
    }
    piVar4 = ((int *)GEN_TOP(F_00df1630(param_1 GEN_EDX_ARG,&(*(ulonglong *)(gen_frame + 0x0)))));
  }
LAB_00deea9f: ;
  if (-1 < (int)uVar8) {
    iVar3 = *((int *)GEN_TOP((*(int *)(param_5 + 0xc) + uVar8 * 4)));
    iVar7 = *((int *)GEN_TOP((iVar3 + 0x14)));
    while (iVar7 = iVar7 - 1, -1 < iVar7) {
      iVar6 = *((int *)GEN_TOP((iVar3 + 0x10)));
      piVar4 = ((int *)GEN_TOP((iVar6 + iVar7 * 8)));
      if (*((int *)GEN_TOP((iVar6 + iVar7 * 8))) == 7) {
        uVar1 = (((undefined4 *)GEN_TOP(piVar4[1])))[1];
        uVar2 = *((undefined4 *)GEN_TOP(piVar4[1]));
        piVar4 = ((int *)GEN_TOP(F_00dee9e0(param_1,uVar2,uVar1,param_4,param_5,param_6,param_7)));
      }
    }
  }
  return (uint)piVar4;
}

/* ref: FUN_00deeaf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00deeaf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdeeaf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x314, 12, 4);
  undefined8 uVar1;
  undefined8 uVar2;
  code * pcVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined * phVar12;
  int * piVar13;
  undefined8 * puVar14;
  undefined8 * puVar15;
  undefined * phVar16;
  undefined * phVar17;
  ulonglong uVar18;
  char * pcVar19;
  char * pcVar20;
  char * pcVar21;
  undefined4 uVar22;
  char * pcVar23;
  undefined4 uVar24;
  uint * puVar25;
  
  (*(undefined * PTR32 *)(gen_frame + 0x30c)) = this;
  pcVar3 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x20)));
  (*(int *)(gen_frame + 0x2e8)) = 0;
  (*(int *)(gen_frame + 0x2ec)) = 0;
  (*(uint *)(gen_frame + 0x2f0)) = 0x80000000;
  (*pcVar3)((*(int * PTR32 *)&gen_args[0]),&(*(int *)(gen_frame + 0x2e8)));
  (*(int *)(gen_frame + 0x300)) = 0;
  (*(int *)(gen_frame + 0x304)) = 0;
  (*(uint *)(gen_frame + 0x308)) = 0x80000000;
  if (0 < (*(int *)(gen_frame + 0x2ec))) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x300)),(*(int *)(gen_frame + 0x2ec)),8);
  }
  (*(int *)(gen_frame + 0x2e4)) = 0;
  if (0 < (*(int *)(gen_frame + 0x2ec))) {
    do {
      piVar13 = *((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x2e8)) + (*(int *)(gen_frame + 0x2e4)) * 4)));
      uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar13 + 0xc))))(piVar13 GEN_EDX_ARG);
      if ((int)uVar8 < 0) {
        F_00da0a80(&(*(undefined8 * PTR32 *)(gen_frame + 0x2f4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
        F_00d9fe80((undefined *)&(*(undefined8 * PTR32 *)(gen_frame + 0x2f4)) GEN_EDX_ARG,
                   ((char *)REFP(0x114c400))
                  );
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                          (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,3,0x54d3b666,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114c3d8)),
                           0x2ec);
        if (uVar8 != 0) {
          pcVar3 = ((code *)GEN_TOP(swi(3)));
          uVar8 = (*pcVar3)();
          return uVar8;
        }
        F_00d9fda0(&(*(undefined8 * PTR32 *)(gen_frame + 0x2f4)) GEN_EDX_ARG);
      }
      else {
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar13 + 8))))(piVar13 GEN_EDX_ARG);
        uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar13 + 0xc))))(piVar13 GEN_EDX_ARG);
        puVar25 = ((uint *)GEN_TOP(((*(int *)(gen_frame + 0x300)) + (*(int *)(gen_frame + 0x304)) * 8)));
        if (puVar25 != ((uint *)GEN_TOP(0x0))) {
          *puVar25 = uVar8;
          puVar25[1] = uVar9;
        }
        (*(int *)(gen_frame + 0x304)) = (*(int *)(gen_frame + 0x304)) + 1;
      }
      iVar10 = (*(int *)(gen_frame + 0x2e4)) + 1;
      (*(int *)(gen_frame + 0x2e4)) = iVar10;
    } while (iVar10 < (*(int *)(gen_frame + 0x2ec)));
  }
  F_00e0ec50(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
  iVar10 = 0;
  (*(undefined4 *)(gen_frame + 0x2bc)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c0)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c4)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x2d8)) = 0;
  (*(undefined4 *)(gen_frame + 0x2dc)) = 0;
  (*(int *)(gen_frame + 0x2e0)) = -1;
  phVar16 = (*(undefined * PTR32 *)(gen_frame + 0x30c));
  if (0 < *(int *)((*(undefined * PTR32 *)(gen_frame + 0x30c)) + 0x10)) {
    do {
      iVar4 = *((int *)GEN_TOP((*(int *)(phVar16 + 0xc) + iVar10 * 4)));
      uVar8 = F_00ded330(iVar4);
      if (uVar8 == 0) {
        F_00dbdff0(&(*(undefined4 *)(gen_frame + 0x2d8)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
        F_00dbd6b0();
        F_00dbdff0(&(*(undefined4 *)(gen_frame + 0x2bc)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
        F_00dbd6b0();
        F_00e0ed30(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
        (*(int *)(gen_frame + 0x304)) = 0;
        if (-1 < (int)(*(uint *)(gen_frame + 0x308))) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x300)),(*(uint *)(gen_frame + 0x308)) * 8);
        }
        (*(int *)(gen_frame + 0x300)) = 0;
        (*(uint *)(gen_frame + 0x308)) = 0x80000000;
        (*(int *)(gen_frame + 0x2ec)) = 0;
        if ((int)(*(uint *)(gen_frame + 0x2f0)) < 0) {
          return 1;
        }
        goto LAB_00deedbe;
      }
      if (*((int *)GEN_TOP((iVar4 + 8))) == -1) {
        uVar18 = F_00ded4c0(*(undefined * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x30c)) + 8) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar4 + 4))),
                            *((undefined4 *)GEN_TOP((iVar4 + 0xc))));
        uVar22 = (undefined4)(uVar18 >> 0x20);
        uVar8 = F_00dbdd70(&(*(undefined4 *)(gen_frame + 0x2d8)) GEN_EDX_ARG,(int)uVar18,uVar22);
        if ((int)uVar8 <= (*(int *)(gen_frame + 0x2e0))) {
          F_00dbdff0(&(*(undefined4 *)(gen_frame + 0x2d8)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
          F_00dbd6b0();
          F_00dbdff0(&(*(undefined4 *)(gen_frame + 0x2bc)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
          F_00dbd6b0();
          F_00e0ed30(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
          (*(int *)(gen_frame + 0x304)) = 0;
          if (-1 < (int)(*(uint *)(gen_frame + 0x308))) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x300)),(*(uint *)(gen_frame + 0x308)) * 8);
          }
          (*(int *)(gen_frame + 0x300)) = 0;
          (*(uint *)(gen_frame + 0x308)) = 0x80000000;
          (*(int *)(gen_frame + 0x2ec)) = 0;
          if ((int)(*(uint *)(gen_frame + 0x2f0)) < 0) {
            return 1;
          }
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x2e8)),(*(uint *)(gen_frame + 0x2f0)) * 4);
          return 1;
        }
        F_00dbdcd0(&(*(undefined4 *)(gen_frame + 0x2d8)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),(int)uVar18,uVar22,iVar10,0);
        phVar16 = (*(undefined * PTR32 *)(gen_frame + 0x30c));
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(phVar16 + 0x10));
  }
  phVar16 = (*(undefined * PTR32 *)(gen_frame + 0x30c));
  iVar10 = 0;
  (*(int * PTR32 *)&gen_args[2])[1] = 0;
  (*(undefined8 * PTR32 *)(gen_frame + 0x2f4)) = ((undefined8 *)GEN_TOP(0x0));
  (*(int *)(gen_frame + 0x2f8)) = 0;
  (*(uint *)(gen_frame + 0x2fc)) = 0x80000000;
  if (0 < (*(int *)(gen_frame + 0x304))) {
    do {
      F_00dee9e0(&(*(undefined8 * PTR32 *)(gen_frame + 0x2f4)),*((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x300)) + iVar10 * 8))),
                   *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x300)) + 4 + iVar10 * 8))),(*(int * PTR32 *)&gen_args[0]),phVar16,&(*(undefined4 *)(gen_frame + 0x2d8)),&(*(undefined4 *)(gen_frame + 0x2bc)));
      iVar10 = iVar10 + 1;
      iVar4 = (*(int *)(gen_frame + 0x2f8));
    } while (iVar10 < (*(int *)(gen_frame + 0x304)));
    while (iVar4 != 0) {
      uVar1 = *(*(undefined8 * PTR32 *)(gen_frame + 0x2f4));
      (*(undefined8 *)(gen_frame + 0x2c8)) = uVar1;
      uVar1 = (*(undefined8 *)(gen_frame + 0x2c8));
      uVar2 = (*(undefined8 * PTR32 *)(gen_frame + 0x2f4))[1];
      (*(int *)(gen_frame + 0x2f8)) = iVar4 - 1;
      iVar10 = (iVar4 - 1) * 0x10;
      (*(undefined8 *)(gen_frame + 0x2d0)) = uVar2;
      uVar2 = (*(undefined8 *)(gen_frame + 0x2d0));
      puVar14 = (*(undefined8 * PTR32 *)(gen_frame + 0x2f4)) + 2;
      if (0 < iVar10) {
        iVar10 = (iVar10 - 1U >> 3) + 1;
        puVar15 = (*(undefined8 * PTR32 *)(gen_frame + 0x2f4));
        do {
          *(undefined4 *)puVar15 = *(undefined4 *)puVar14;
          *((undefined4 *)GEN_TOP(((int)puVar15 + 4))) = *((undefined4 *)GEN_TOP(((int)puVar14 + 4)));
          puVar14 = puVar14 + 1;
          puVar15 = puVar15 + 1;
          iVar10 = iVar10 - 1;
        } while (iVar10 != 0);
      }
      (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x2d0)) + 0)) = (int)uVar2;
      iVar10 = (int)(*(undefined8 *)(gen_frame + 0x2d0));
      if (((int)(*(undefined8 *)(gen_frame + 0x2d0)) == -1) ||
         (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x30c)) + 0xc) + (int)(*(undefined8 *)(gen_frame + 0x2d0)) * 4))) + 8))) != -1)) {
        uVar22 = 2;
      }
      else {
        uVar22 = 1;
      }
      (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x2c8)) + 4)) = (undefined4)((ulonglong)uVar1 >> 0x20);
      uVar6 = (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x2c8)) + 4));
      (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x2c8)) + 0)) = (undefined4)uVar1;
      uVar24 = (undefined4)(*(undefined8 *)(gen_frame + 0x2c8));
      (*(undefined8 *)(gen_frame + 0x2c8)) = uVar1;
      (*(undefined8 *)(gen_frame + 0x2d0)) = uVar2;
      F_00dbdcd0(&(*(undefined4 *)(gen_frame + 0x2bc)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),uVar24,uVar6,uVar22,0);
      if (iVar10 < 0) {
        uVar8 = F_00ded4a0((*(undefined * PTR32 *)(gen_frame + 0x30c)) GEN_EDX_ARG,uVar24,uVar6);
        uVar9 = F_00ded310((*(undefined * PTR32 *)(gen_frame + 0x30c)) GEN_EDX_ARG,uVar24,uVar6);
        iVar4 = (*(int *)(gen_frame + 0x2f8));
        if (uVar9 != 0xffffffff) {
          piVar13 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xc))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x200)),uVar8)));
          if (piVar13 == ((int *)GEN_TOP(0x0))) {
            F_00da0a80(((undefined *)GEN_TOP(((int)&(*(undefined8 *)(gen_frame + 0x2c8)) + 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
            pcVar19 = 
            ((char *)REFP(0x114c318))
            ;
            phVar12 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined *)GEN_TOP(((int)&(*(undefined8 *)(gen_frame + 0x2c8)) + 4))) GEN_EDX_ARG,((char *)REFP(0x114c310)))));
            phVar12 = ((undefined *)GEN_TOP(F_00d9fe80(phVar12 GEN_EDX_ARG,uVar8)));
            F_00d9fe80(phVar12 GEN_EDX_ARG,pcVar19);
            uVar24 = 0x338;
            uVar22 = 0x3f79ddb0;
            goto LAB_00def012;
          }
          uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar13 + 0xc))))(piVar13 GEN_EDX_ARG);
          iVar4 = (*(int *)(gen_frame + 0x2f8));
          if (uVar11 != uVar9) {
            F_00da0a80(((undefined *)GEN_TOP(((int)&(*(undefined8 *)(gen_frame + 0x2c8)) + 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
            uVar11 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar13 + 0xc))))(piVar13 GEN_EDX_ARG);
            pcVar23 = ((char *)REFP(0x114c2d0));
            pcVar21 = ((char *)REFP(0x114c2b4));
            pcVar20 = ((char *)REFP(0x114c2ac));
            pcVar19 = ((char *)REFP(0x114c2a0));
            phVar12 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined *)GEN_TOP(((int)&(*(undefined8 *)(gen_frame + 0x2c8)) + 4))) GEN_EDX_ARG,((char *)REFP(0x114c28c)))));
            phVar12 = ((undefined *)GEN_TOP(F_00d9fe80(phVar12 GEN_EDX_ARG,uVar8)));
            phVar12 = ((undefined *)GEN_TOP(F_00d9fe80(phVar12 GEN_EDX_ARG,pcVar19)));
            phVar12 = ((undefined *)GEN_TOP(F_00d9ff40(phVar12 GEN_EDX_ARG,uVar9)));
            phVar12 = ((undefined *)GEN_TOP(F_00d9fe80(phVar12 GEN_EDX_ARG,pcVar20)));
            phVar12 = ((undefined *)GEN_TOP(F_00d9ff40(phVar12 GEN_EDX_ARG,uVar11)));
            phVar12 = ((undefined *)GEN_TOP(F_00d9fe80(phVar12 GEN_EDX_ARG,pcVar21)));
            F_00d9fe80(phVar12 GEN_EDX_ARG,pcVar23);
            uVar24 = 0x33f;
            uVar22 = 0x3f79ddb1;
LAB_00def012: ;
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                      (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,uVar22,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114c3d8)),uVar24);
            F_00d9fda0(((undefined *)GEN_TOP(((int)&(*(undefined8 *)(gen_frame + 0x2c8)) + 4))) GEN_EDX_ARG);
            (*(int *)(gen_frame + 0x2f8)) = 0;
            if (((*(uint *)(gen_frame + 0x2fc)) & 0x80000000) == 0) {
              ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516ac),(*(undefined8 * PTR32 *)(gen_frame + 0x2f4)),(*(uint *)(gen_frame + 0x2fc)) << 4);
            }
            (*(undefined8 * PTR32 *)(gen_frame + 0x2f4)) = ((undefined8 *)GEN_TOP(0x0));
            (*(uint *)(gen_frame + 0x2fc)) = 0x80000000;
            F_00dbdff0(&(*(undefined4 *)(gen_frame + 0x2d8)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
            F_00dbd6b0();
            F_00dbdff0(&(*(undefined4 *)(gen_frame + 0x2bc)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
            F_00dbd6b0();
            F_00e0ed30(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
            (*(int *)(gen_frame + 0x304)) = 0;
            if (((*(uint *)(gen_frame + 0x308)) & 0x80000000) == 0) {
              ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x300)),(*(uint *)(gen_frame + 0x308)) * 8)
              ;
            }
            (*(int *)(gen_frame + 0x300)) = 0;
            (*(uint *)(gen_frame + 0x308)) = 0x80000000;
            (*(int *)(gen_frame + 0x2ec)) = 0;
            if (((*(uint *)(gen_frame + 0x2f0)) & 0x80000000) == 0) {
LAB_00deedbe: ;
              (*(uint *)(gen_frame + 0x308)) = 0x80000000;
              (*(int *)(gen_frame + 0x300)) = 0;
              (*(int *)(gen_frame + 0x2ec)) = 0;
              ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x2e8)),(*(uint *)(gen_frame + 0x2f0)) * 4);
            }
            return 1;
          }
        }
      }
      else {
        uVar22 = *((undefined4 *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x30c)) + 0xc) + iVar10 * 4)));
        if ((*(int * PTR32 *)&gen_args[2])[1] == ((*(int * PTR32 *)&gen_args[2])[2] & 0x3fffffffU)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(*(int * PTR32 *)&gen_args[2]),4);
        }
        *((undefined4 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + (*(int * PTR32 *)&gen_args[2])[1] * 4))) = uVar22;
        (*(int * PTR32 *)&gen_args[2])[1] = (*(int * PTR32 *)&gen_args[2])[1] + 1;
        piVar13 = *((int * PTR32 *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x30c)) + 0xc) + iVar10 * 4)));
        iVar10 = piVar13[1];
        if (iVar10 == 0) {
          iVar10 = *piVar13;
        }
        F_00dee9e0(&(*(undefined8 * PTR32 *)(gen_frame + 0x2f4)),iVar10,piVar13[3],(*(int * PTR32 *)&gen_args[0]),(*(undefined * PTR32 *)(gen_frame + 0x30c)),&(*(undefined4 *)(gen_frame + 0x2d8)),&(*(undefined4 *)(gen_frame + 0x2bc)));
        iVar4 = (*(int *)(gen_frame + 0x2f8));
      }
    }
  }
  (*(int *)(gen_frame + 0x2f8)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x2fc))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined8 * PTR32 *)(gen_frame + 0x2f4)),(*(uint *)(gen_frame + 0x2fc)) << 4);
  }
  (*(int *)(gen_frame + 0x2e4)) = (*(int * PTR32 *)&gen_args[2])[1] - 1;
  while (-1 < (*(int *)(gen_frame + 0x2e4))) {
    piVar13 = *((int * PTR32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + (*(int *)(gen_frame + 0x2e4)) * 4)));
    phVar16 = ((undefined *)GEN_TOP(piVar13[1]));
    phVar17 = ((undefined *)GEN_TOP(*piVar13));
    (*(undefined * PTR32 *)(gen_frame + 0x298)) = phVar17;
    if (phVar16 == ((undefined *)GEN_TOP(0x0))) {
      (*(undefined * PTR32 *)(gen_frame + 0x30c)) = phVar17;
    }
    else {
      (*(undefined * PTR32 *)(gen_frame + 0x30c)) = phVar16;
      phVar17 = phVar16;
    }
    (*(undefined * PTR32 *)(gen_frame + 0x30c)) = phVar17;
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(F_00e0d6a0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,phVar17)));
    if ((*(int * PTR32 *)&gen_args[1]) == ((int *)GEN_TOP(0x0))) {
      iVar10 = piVar13[2];
      (*(undefined4 *)(gen_frame + 0x2ac)) = 0;
      (*(undefined4 *)(gen_frame + 0x2b0)) = 0;
      (*(uint *)(gen_frame + 0x2b4)) = 0x80000000;
      (*(undefined * PTR32 *)(gen_frame + 0x2a0)) = phVar17;
      (*(int *)(gen_frame + 0x2a4)) = iVar10;
      (*(undefined4 *)(gen_frame + 0x2a8)) = 0;
      (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(F_00e0e650(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x2a0)))));
      (*(undefined4 *)(gen_frame + 0x2b0)) = 0;
      if (-1 < (int)(*(uint *)(gen_frame + 0x2b4))) {
        pcVar3 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10)));
        (*pcVar3)(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x2ac)),((*(uint *)(gen_frame + 0x2b4)) & 0x3fffffff) * 0xc);
      }
    }
    iVar10 = piVar13[5];
    while (iVar10 = iVar10 - 1, -1 < iVar10) {
      iVar4 = piVar13[4] + iVar10 * 8;
      switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((piVar13[4] + iVar10 * 8))))) {
      case 1: ;
        uVar22 = **((undefined4 * PTR32 *)GEN_TOP((iVar4 + 4)));
        F_00e0da90(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[1]),uVar22);
        break;
      case 2: ;
        puVar5 = *((undefined4 * PTR32 *)GEN_TOP((iVar4 + 4)));
        uVar22 = puVar5[3];
        uVar24 = puVar5[2];
        uVar6 = puVar5[1];
        uVar8 = F_00e1aa20(((undefined1 *)(gen_frame + 0x210)) GEN_EDX_ARG,uVar6,uVar24,uVar22);
        F_00e0d7d0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[1]),*puVar5,uVar8,0);
        break;
      case 3: ;
        uVar22 = **((undefined4 * PTR32 *)GEN_TOP((iVar4 + 4)));
        uVar24 = (*((undefined4 * PTR32 *)GEN_TOP((iVar4 + 4))))[1];
        F_00e0d8a0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[1]),uVar24,uVar22);
        break;
      case 7: ;
        uVar22 = **((undefined4 * PTR32 *)GEN_TOP((iVar4 + 4)));
        F_00e0d6a0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,uVar22);
        break;
      case 8: ;
        iVar4 = **((int * PTR32 *)GEN_TOP((iVar4 + 4)));
        if (iVar4 == 0) {
          puVar25 = &(*(uint *)(gen_frame + 0x2b8));
          (*(uint *)(gen_frame + 0x2b8)) = 0;
        }
        else {
          uVar8 = F_00e0d6a0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,iVar4);
          puVar25 = &(*(uint *)(gen_frame + 0x29c));
          (*(uint *)(gen_frame + 0x29c)) = uVar8;
        }
        F_00e0eb40(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[1]),puVar25);
      }
    }
    if (piVar13[2] == -1) {
      F_00e0eae0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[1]));
    }
    else {
      if ((*(undefined * PTR32 *)(gen_frame + 0x30c)) != (*(undefined * PTR32 *)(gen_frame + 0x298))) {
        F_00e0d750(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[1]),(*(undefined * PTR32 *)(gen_frame + 0x298)));
      }
      F_00e0d650(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[1]),piVar13[2]);
    }
    (*(int *)(gen_frame + 0x2e4)) = (*(int *)(gen_frame + 0x2e4)) - 1;
  }
  (*(undefined8 * PTR32 *)(gen_frame + 0x2f4)) = ((undefined8 *)GEN_TOP(0x0));
  (*(int *)(gen_frame + 0x2f8)) = 0;
  (*(uint *)(gen_frame + 0x2fc)) = ((int)0x80000000);
  F_00e0d7c0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,&(*(undefined8 * PTR32 *)(gen_frame + 0x2f4)));
  (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(((uint)(*(int * PTR32 *)&gen_args[2]) & 0xffffff00)));
  F_00da3de0(&(*(undefined8 *)(gen_frame + 0x2c8)) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[2]));
  (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(((uint)(*(int * PTR32 *)&gen_args[2]) & 0xffffff00)));
  F_00da3de0(&(*(undefined4 *)(gen_frame + 0x2a8)) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[2]));
  iVar10 = 0;
  if (0 < (*(int *)(gen_frame + 0x2f8))) {
    do {
      piVar13 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined8 * PTR32 *)(gen_frame + 0x2f4)) + iVar10 * 4)));
      uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar13 + 8))))(piVar13 GEN_EDX_ARG);
      F_00da3a20(&(*(undefined8 *)(gen_frame + 0x2c8)) GEN_EDX_ARG,uVar8,piVar13);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (*(int *)(gen_frame + 0x2f8)));
  }
  iVar10 = 0;
  if (0 < (*(int *)(gen_frame + 0x2ec))) {
    do {
      piVar13 = *((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x2e8)) + iVar10 * 4)));
      uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar13 + 8))))(piVar13 GEN_EDX_ARG);
      uVar8 = F_00da4190(&(*(undefined8 *)(gen_frame + 0x2c8)) GEN_EDX_ARG,uVar8,0);
      if (uVar8 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar13 + 0xc))))(piVar13 GEN_EDX_ARG);
      }
      else {
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar13 + 8))))(piVar13 GEN_EDX_ARG);
        F_00da3f00(&(*(undefined8 *)(gen_frame + 0x2c8)) GEN_EDX_ARG,uVar8);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < (*(int *)(gen_frame + 0x2ec)));
  }
  uVar8 = F_00da3970(&(*(undefined8 *)(gen_frame + 0x2c8)) GEN_EDX_ARG);
  F_00da3e40(&(*(undefined8 *)(gen_frame + 0x2c8)) GEN_EDX_ARG,(int)&(*(int * PTR32 *)&gen_args[2]) + 3,uVar8);
  cVar7 = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[2]) + 3))));
  while (cVar7 != '\0') {
    piVar13 = ((int *)GEN_TOP(F_00da39b0(&(*(undefined8 *)(gen_frame + 0x2c8)) GEN_EDX_ARG,uVar8)));
    iVar10 = *(*(int * PTR32 *)&gen_args[0]);
    uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar13 + 8))))(piVar13 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x200)));
    ((code *)*((gen_code32 *)GEN_TOP((iVar10 + 0x5c))))((*(int * PTR32 *)&gen_args[0]),uVar9);
    uVar8 = F_00da39f0(&(*(undefined8 *)(gen_frame + 0x2c8)) GEN_EDX_ARG,uVar8);
    F_00da3e40(&(*(undefined8 *)(gen_frame + 0x2c8)) GEN_EDX_ARG,(int)&(*(int * PTR32 *)&gen_args[2]) + 3,uVar8);
    cVar7 = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[2]) + 3))));
  }
  F_00da3e20(&(*(undefined4 *)(gen_frame + 0x2a8)) GEN_EDX_ARG);
  F_00da3e20(&(*(undefined8 *)(gen_frame + 0x2c8)) GEN_EDX_ARG);
  (*(int *)(gen_frame + 0x2f8)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x2fc))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(undefined8 * PTR32 *)(gen_frame + 0x2f4)),(*(uint *)(gen_frame + 0x2fc)) * 4);
  }
  F_00dbdff0(&(*(undefined4 *)(gen_frame + 0x2d8)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd6b0();
  F_00dbdff0(&(*(undefined4 *)(gen_frame + 0x2bc)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd6b0();
  F_00e0ed30(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
  (*(int *)(gen_frame + 0x304)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x308))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x300)),(*(uint *)(gen_frame + 0x308)) * 8);
  }
  (*(int *)(gen_frame + 0x300)) = 0;
  (*(uint *)(gen_frame + 0x308)) = 0x80000000;
  (*(int *)(gen_frame + 0x2ec)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x2f0))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x2e8)),(*(uint *)(gen_frame + 0x2f0)) * 4);
  }
  return 0;
}

/* ref: hkVersionPatchManager::ApplyPatches */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(byte * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdef500u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  uint uVar1;
  byte * pbVar2;
  
  F_00ded380(((byte *)(gen_frame + 0x0)) GEN_EDX_FWD,0);
  pbVar2 = param_2;
  if (param_2 == ((byte *)GEN_TOP(0x0))) {
    pbVar2 = ((byte *)(gen_frame + 0x0));
  }
  if (((*(uint *)(this + 0x1c) & 0x7fffffff) == 0) && (*(int *)(this + 0x10) != 0)) {
    uVar1 = F_00dede30(this GEN_EDX_ARG);
    if (uVar1 == 1) {
      if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) != 0) {
        F_00d91a80(((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)))) GEN_EDX_ARG);
      }
      return 1;
    }
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = ((int)0x80000000);
  uVar1 = F_00deeaf0(this GEN_EDX_ARG,param_1,pbVar2,&(*(undefined4 *)(gen_frame + 0xc)));
  if (uVar1 == 0) {
    uVar1 = F_00ded800(param_1,&(*(undefined4 *)(gen_frame + 0xc)));
  }
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x14))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x14)) * 4);
  }
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0x80000000;
  if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) != 0) {
    F_00d91a80(((undefined *)GEN_TOP((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)))) GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: hkVersionPatchManager::ApplyPatchesDebug */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdef5d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  if (((*(uint *)(this + 0x1c) & 0x7fffffff) == 0) && (*(int *)(this + 0x10) != 0)) {
    uVar1 = F_00dede30(this GEN_EDX_FWD);
    if (uVar1 == 1) {
      return 1;
    }
  }
  uVar1 = F_00ded800(param_1,this + 0xc);
  return uVar1;
}

/* ref: Global::CreateVersionPatchManager */
GEN_LIB GEN_NOFRAME uint F_00def610(void)
{
  GEN_ENTER(0xdef610u, 0u, 0u, 0u, 0u);
  LPVOID pvVar1;
  undefined * this;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))
                           (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x24)));
  *((undefined2 *)GEN_TOP(((int)this + 4))) = 0x24;
  uVar2 = F_00dedcf0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00def640 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00def640(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xdef640u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  return *((int *)GEN_TOP((in_ecx + 8))) < param_4;
}

/* ref: FUN_00def660 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def660(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xdef660u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  if ((*in_ecx == param_2) && (in_ecx[1] == param_3)) {
    return 1;
  }
  return 0;
}

/* ref: Global::IteratorEquals_00def6c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def6c0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdef6c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = *in_ecx == param_3;
  return param_2;
}

/* ref: FUN_00def6e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdef6e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this GEN_EDX_FWD,local_8);
  return (uint)this;
}

/* ref: FUN_00def700 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdef700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da3a20(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00def710 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdef710u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da3e60(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00def720 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdef720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da4190(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00def730 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdef730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this GEN_EDX_FWD,local_8);
  return (uint)this;
}

/* ref: FUN_00def750 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdef750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da3a20(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00def760 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdef760u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da4190(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00def780 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def780(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdef780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da39b0(in_ecx GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: FUN_00def790 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdef790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da39f0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00def7a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def7a0(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdef7a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00da3e40(in_ecx GEN_EDX_FWD,param_2,param_3);
  return param_2;
}

/* ref: FUN_00def7c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def7c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdef7c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this GEN_EDX_FWD,local_8);
  return (uint)this;
}

/* ref: FUN_00def7e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdef7e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da3a20(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00def7f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def7f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdef7f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da4190(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00def800 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdef800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da3f00(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00def820 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def820(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdef820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da39b0(in_ecx GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: FUN_00def830 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdef830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da39f0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00def840 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def840(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdef840u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00da3e40(in_ecx GEN_EDX_FWD,param_2,param_3);
  return param_2;
}

/* ref: Global::GetElementPtr4_00def8c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def8c0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdef8c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: Global::GetElementPtr4_2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def910(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdef910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: Global::GetElementPtr4_3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def920(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdef920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: Global::Swap12_00def930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdef930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *param_1;
  *param_1 = uVar1;
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  param_1[1] = uVar1;
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: Global::ResetRefPtr */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00def970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdef970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_ARG);
  }
  *(undefined * PTR32 *)this = param_1;
  return;
}

/* ref: Global::GetElementPtr8_00def9e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00def9e0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdef9e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: Global::GetElementPtr8_2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defa20(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdefa20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00defa30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defa30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdefa30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbddc0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_1,param_2,0xffffffff,0);
  return uVar1;
}

/* ref: Global::GetElementPtr8_3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defa80(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdefa80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: Global::GetElementPtr16_00defac0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defac0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdefac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx;
}

/* ref: Global::GetElementPtr16_2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defad0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdefad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx;
}

/* ref: Global::GetElementPtr8_4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defb20(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdefb20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00defb40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defb40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdefb40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd970(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: Global::GrowCapacity4_00defb60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defb60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdefb60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: Global::FillDwords_00defbb0 */
GEN_LIB GEN_FRAME unsigned int F_00defbb0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdefbb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: Global::GetElementPtr8_5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defbf0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdefbf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: Global::GetElementPtr8_6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defc00(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdefc00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: Global::GetElementPtr8_7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defc10(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdefc10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: Global::CopyElements8 */
GEN_LIB GEN_FRAME unsigned int F_00defc40(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdefc40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_3) {
    iVar2 = (param_3 - 1U >> 3) + 1;
    puVar1 = param_1;
    do {
      *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
      puVar1[1] = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + 4 + (int)puVar1)));
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: Global::AllocateArray12_00defca0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdefca0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: Global::AllocateArray4_00defcd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defcd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdefcd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: Global::AllocateArray4_2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defcf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdefcf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: hkMemoryAllocator::BufFreeElems8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defd30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdefd30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: hkMemoryAllocator::BufFreeElems8b */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defd70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdefd70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: hkMemoryAllocator::BufFreeElems8c */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defdb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdefdb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: hkMemoryAllocator::BufFreeElems16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defde0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdefde0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00defe00 */
GEN_LIB GEN_FRAME uint F_00defe00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdefe00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: hkMemoryAllocator::BufFreeElems8d */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defe10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdefe10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00defe30 */
GEN_LIB GEN_FRAME uint F_00defe30(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdefe30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: hkArrayBase::Reserve16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdefec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x10);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: Global::ConstructWithCopy16 */
GEN_LIB GEN_FRAME unsigned int F_00deff00(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdeff00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined8 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = param_1;
    iVar2 = param_2;
    do {
      if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined8 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar1)));
        puVar1[1] = *((undefined8 *)GEN_TOP(((param_3 - (int)param_1) + 8 + (int)puVar1)));
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: Global::AllocReferencedObject */
GEN_LIB GEN_FRAME uint F_00deff50(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdeff50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: Global::FreeReferencedObject_00deff80 */
GEN_LIB GEN_FRAME uint F_00deff80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdeff80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00deffb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00deffb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdeffb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0xc))) + param_2 * 4)));
}

/* ref: FUN_00deffc0 */
GEN_LIB GEN_FRAME uint F_00deffc0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdeffc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00defff0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00defff0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdefff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: Global::TlsHeapAlloc */
GEN_LIB GEN_FRAME uint F_00df0030(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdf0030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: Global::FreeObject2C */
GEN_LIB GEN_FRAME unsigned int F_00df0050(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdf0050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00df00e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df00e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdf00e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00dbdcd0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: hkArrayBase::GetElementPtr8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0130(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf0130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: hkArrayBase::GetElementSecond8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0140(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf0140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + 4 + param_2 * 8)));
}

/* ref: hkArrayBase::GetElementFirst8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0150(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf0150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + param_2 * 8)));
}

/* ref: FUN_00df0160 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0160(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdf0160u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = param_3 <= *((int *)GEN_TOP((in_ecx + 8)));
  return param_2;
}

/* ref: hkArrayBase::GetElementPtr8b */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0180(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf0180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: hkArrayBase::GetElementSecond8b */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0190(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf0190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + 4 + param_2 * 8)));
}

/* ref: hkArrayBase::GetElementPtr8c */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df01a0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf01a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: hkArrayBase::GetElementSecond8c */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df01b0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf01b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + 4 + param_2 * 8)));
}

/* ref: hkArrayBase::ContainsKey16 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00df01e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf01e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 4)))) {
    piVar1 = *(int * PTR32 *)this;
    do {
      if ((*param_1 == *piVar1) && (param_1[1] == piVar1[1])) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 4;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 4))));
  }
  return 0;
}

/* ref: hkArrayBase::PushBack4_00df0300 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df0300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf0300u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_2;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

