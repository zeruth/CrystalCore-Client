#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: hkMemoryResourceContainer::vf12 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e17240(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe17240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x20)));
}

/* ref: hkContainerResourceMap::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e17250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe17250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  int * piVar1;
  uint uVar2;
  
  if (param_2 != ((uint *)GEN_TOP(0x0))) {
    *param_2 = 0;
  }
  piVar1 = ((int *)GEN_TOP(F_00da4190(this + 4 GEN_EDX_FWD,param_1,0)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  if (param_2 != ((uint *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG);
    *param_2 = uVar2;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG);
  return uVar2;
}

/* ref: hkMemoryResourceContainer::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e172a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe172a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  do {
    if ((param_2 == 0) || (*(int *)(this + 0x20) <= iVar3)) break;
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + 1;
  } while (*((int *)GEN_TOP((*(int *)(this + 0x1c) + iVar1))) != param_2);
  if (iVar3 < *(int *)(this + 0x20)) {
    do {
      uVar2 = *((uint *)GEN_TOP((*(int *)(this + 0x1c) + iVar3 * 4)));
      if ((param_1 == 0) ||
         (uVar4 = F_00da0d20(param_1,*((uint *)GEN_TOP((uVar2 + 8))) & 0xfffffffe), uVar4 == 0)) {
        return uVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(this + 0x20));
  }
  return 0;
}

/* ref: hkMemoryResourceHandle::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e17310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe17310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * phVar1;
  int in_ecx;
  undefined * this_00;
  uint uVar2;
  
  phVar1 = this + 0x10;
  if (*(uint *)(this + 0x14) == (*(uint *)(this + 0x18) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),phVar1,8);
  }
  in_ecx = *(int *)phVar1 + *(int *)(this + 0x14) * 8;
  if (in_ecx != 0) {
    F_00d91340(in_ecx GEN_EDX_ARG);
    F_00d91340(in_ecx + 4 GEN_EDX_ARG);
  }
  this_00 = ((undefined *)GEN_TOP((*(int *)phVar1 + *(int *)(this + 0x14) * 8)));
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  F_00d91520(this_00 GEN_EDX_ARG,param_1);
  uVar2 = F_00d91520(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_ARG,param_2);
  return uVar2;
}

/* ref: hkMemoryResourceHandle::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e17380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe17380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x434, 12, 4);
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  uint * puVar4;
  undefined * pvVar5;
  uint uVar6;
  int iVar7;
  uint * puVar8;
  undefined1 * puVar9;
  
  param_1[1] = 0;
  iVar7 = *(int *)(this + 0x14);
  uVar2 = param_1[2] & 0x3fffffff;
  (*(undefined * PTR32 *)(gen_frame + 0x428)) = this;
  if ((int)uVar2 < iVar7) {
    iVar3 = uVar2 * 2;
    if ((int)(uVar2 * 2) <= iVar7) {
      iVar3 = iVar7;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_1,iVar3,0x10);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  (*(uint *)(gen_frame + 0x42c)) = 0;
  if (0 < *(int *)(this + 0x14)) {
    do {
      puVar4 = ((uint *)GEN_TOP((param_1[1] * 0x10 + *param_1)));
      param_1[1] = param_1[1] + 1;
      (*(uint * PTR32 *)(gen_frame + 0x420)) = puVar4;
      uVar2 = *((uint *)GEN_TOP((*(int *)(this + 0x10) + (*(uint *)(gen_frame + 0x42c)) * 8))) & 0xfffffffe;
      (*(int *)(gen_frame + 0x424)) = *(int *)(this + 8);
      pvVar5 = ((undefined *)GEN_TOP(F_010596b0(this + 8 GEN_EDX_ARG)));
      uVar6 = F_00da0ef0(uVar2,0x2e);
      while (uVar6 != 0) {
        iVar7 = uVar6 - uVar2;
        F_00da1010(((undefined1 *)(gen_frame + 0x200)),uVar2,iVar7);
        ((undefined1 *)(gen_frame + 0x200))[(int)(iVar7)] = 0;
        uVar2 = uVar2 + 1 + iVar7;
        uVar6 = F_00d928d0(pvVar5 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x200)));
        if (uVar6 == 0) goto LAB_00e17512;
        if (*((char *)GEN_TOP((uVar6 + 0xc))) != '\x19') {
          F_00da0a80(((undefined1 *)(gen_frame + 0x408)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
          puVar9 = ((undefined1 *)(gen_frame + 0x200));
          pvVar5 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x408)) GEN_EDX_ARG,((char *)REFP(0x114e4c4)))));
          F_00d9fe80(pvVar5 GEN_EDX_ARG,puVar9);
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                    (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xf032edfe,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114e49c)),
                     0x80);
          F_00d9fda0(((undefined1 *)(gen_frame + 0x408)) GEN_EDX_ARG);
          goto LAB_00e17512;
        }
        pvVar5 = ((undefined *)GEN_TOP(F_00da5fd0(uVar6 GEN_EDX_ARG)));
        (*(int *)(gen_frame + 0x424)) = (*(int *)(gen_frame + 0x424)) + (uint)*((ushort *)GEN_TOP((uVar6 + 0x12)));
        uVar6 = F_00da0ef0(uVar2,0x2e);
        puVar4 = (*(uint * PTR32 *)(gen_frame + 0x420));
      }
      uVar6 = F_00d928d0(pvVar5 GEN_EDX_ARG,uVar2);
      if (uVar6 == 0) {
LAB_00e17512: ;
        param_1[1] = param_1[1] - 1;
        F_00da0a80(((undefined1 *)(gen_frame + 0x414)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
        pvVar5 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x414)) GEN_EDX_ARG,((char *)REFP(0x114e484)))));
        F_00d9fe80(pvVar5 GEN_EDX_ARG,uVar2);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                  (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xf032edf1,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114e49c)),0x92
                  );
        F_00d9fda0(((undefined1 *)(gen_frame + 0x414)) GEN_EDX_ARG);
      }
      else {
        *puVar4 = uVar2;
        puVar8 = ((uint *)GEN_TOP(F_0105a6b0(((undefined1 *)(gen_frame + 0x400)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x424)),uVar6)));
        puVar4[2] = *puVar8;
        puVar4[3] = puVar8[1];
        puVar4[1] = *((uint *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x428)) + 0x10) + 4 + (*(uint *)(gen_frame + 0x42c)) * 8))) & 0xfffffffe;
      }
      uVar2 = (*(uint *)(gen_frame + 0x42c)) + 1;
      (*(uint *)(gen_frame + 0x42c)) = uVar2;
      this = (*(undefined * PTR32 *)(gen_frame + 0x428));
    } while ((int)uVar2 < *(int *)((*(undefined * PTR32 *)(gen_frame + 0x428)) + 0x14));
  }
  return uVar2;
}

/* ref: FUN_00e17590 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e17590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe17590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined * this_00;
  uint uVar1;
  
  for (this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_FWD,0,0))); this_00 != ((undefined *)GEN_TOP(0x0));
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_ARG,0,this_00)))) {
    F_00e17590(this_00 GEN_EDX_ARG,param_1);
  }
  for (uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20))))(this GEN_EDX_ARG,0,0,0); uVar1 != 0;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20))))(this GEN_EDX_ARG,0,0,uVar1)) {
    if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_1,4);
    }
    *((uint *)GEN_TOP((*param_1 + param_1[1] * 4))) = uVar1;
    param_1[1] = param_1[1] + 1;
  }
  return 0;
}

/* ref: FUN_00e17630 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e17630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe17630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  undefined * this_00;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_1,4);
  }
  *((undefined * PTR32 *)GEN_TOP((*param_1 + param_1[1] * 4))) = this;
  param_1[1] = param_1[1] + 1;
  for (this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_ARG,0,0))); this_00 != ((undefined *)GEN_TOP(0x0));
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_ARG,0,this_00)))) {
    F_00e17630(this_00 GEN_EDX_ARG,param_1);
  }
  return 0;
}

/* ref: hkMemoryResourceHandle::vf12 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e176a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe176a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)(this + 0x10);
  iVar2 = *(int *)(this + 0x14) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((uVar1 + iVar2 * 8)));
    do {
      F_00d91510(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_FWD);
      uVar1 = F_00d91510(this_00 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)(this + 0x14) = 0;
  return uVar1;
}

/* ref: hkMemoryResourceHandle::vf10 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e176e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe176e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined * this_00;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(this + 0x14)) {
    while (uVar1 = F_00da0d20(*((uint *)GEN_TOP((*(int *)(this + 0x10) + iVar4 * 8))) & 0xfffffffe,param_1),
          uVar1 != 0) {
      iVar4 = iVar4 + 1;
      if (*(int *)(this + 0x14) <= iVar4) {
        return;
      }
    }
    this_00 = ((undefined *)GEN_TOP((*(int *)(this + 0x10) + iVar4 * 8)));
    F_00d91510(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_ARG);
    F_00d91510(this_00 GEN_EDX_ARG);
    iVar2 = *(int *)(this + 0x14) - 1;
    *(int *)(this + 0x14) = iVar2;
    if (iVar2 != iVar4) {
      puVar3 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + iVar4 * 8)));
      iVar4 = (*(int *)(this + 0x10) + iVar2 * 8) - (int)puVar3;
      iVar2 = 2;
      do {
        *puVar3 = *((undefined4 *)GEN_TOP((iVar4 + (int)puVar3)));
        puVar3 = puVar3 + 1;
        iVar2 = iVar2 - 1;
      } while (iVar2 != 0);
    }
  }
  return;
}

/* ref: hkMemoryResourceHandle::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e17770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe17770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x234, 12, 4);
  code * pcVar1;
  undefined * phVar2;
  uint uVar3;
  undefined4 * in_ecx;
  undefined * pvVar4;
  char * pcVar5;
  uint uVar6;
  uint * puVar7;
  int iVar8;
  undefined * puVar9;
  
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x2c)));
  (*(undefined * PTR32 *)(gen_frame + 0x20c)) = this;
  (*(int *)(gen_frame + 0x220)) = 0;
  (*(int *)(gen_frame + 0x224)) = 0;
  (*(uint *)(gen_frame + 0x228)) = 0x80000000;
  (*pcVar1)(this,&(*(int *)(gen_frame + 0x220)));
  iVar8 = (*(int *)(gen_frame + 0x224)) - 1;
  (*(int *)(gen_frame + 0x214)) = iVar8;
  if (-1 < iVar8) {
    (*(int *)(gen_frame + 0x218)) = iVar8 * 0x10;
    do {
      iVar8 = (*(int *)(gen_frame + 0x218)) + (*(int *)(gen_frame + 0x220));
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_1)))(param_1 GEN_EDX_FWD,*((undefined4 *)GEN_TOP((iVar8 + 4))),&(*(undefined * PTR32 *)(gen_frame + 0x22c)));
      (*(uint *)(gen_frame + 0x210)) = uVar3;
      if (uVar3 != 0) {
        iVar8 = iVar8 + 8;
        in_ecx = ((undefined4 *)GEN_TOP(F_0105a8f0(iVar8 GEN_EDX_ARG)));
        pvVar4 = ((undefined *)GEN_TOP(F_00da5fd0(in_ecx GEN_EDX_ARG)));
        pcVar5 = ((char *)GEN_TOP(F_00d92650(pvVar4 GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0x21f)),(*(undefined * PTR32 *)(gen_frame + 0x22c)))));
        phVar2 = (*(undefined * PTR32 *)(gen_frame + 0x20c));
        if ((*pcVar5 == '\0') && ((*(undefined * PTR32 *)(gen_frame + 0x22c)) != pvVar4)) {
          F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
          uVar3 = F_00d92610(pvVar4 GEN_EDX_ARG);
          puVar9 = &REFG(undefined, 0x114e50c);
          uVar6 = F_00d92610((*(undefined * PTR32 *)(gen_frame + 0x22c)) GEN_EDX_ARG);
          pvVar4 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x114e4e4)))));
          pvVar4 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar4 GEN_EDX_ARG,uVar6)));
          pvVar4 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar4 GEN_EDX_ARG,puVar9)));
          F_00d9fe80(pvVar4 GEN_EDX_ARG,uVar3);
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                    (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xf034ed21,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114e49c)),
                     0xb2);
          F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
        }
        else {
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)(gen_frame + 0x20c)) + 0x18))))((*(undefined * PTR32 *)(gen_frame + 0x20c)) GEN_EDX_ARG);
          if ((*(uint *)(gen_frame + 0x210)) == uVar3) {
            (*(int *)(gen_frame + 0x224)) = 0;
            uVar3 = (*(uint *)(gen_frame + 0x228));
            goto joined_r0x00e17901;
          }
          puVar7 = ((uint *)GEN_TOP(F_0105a760(iVar8 GEN_EDX_ARG,0)));
          *puVar7 = (*(uint *)(gen_frame + 0x210));
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)phVar2 + 0x28))))(phVar2 GEN_EDX_ARG,*in_ecx);
        }
      }
      iVar8 = (*(int *)(gen_frame + 0x214)) - 1;
      (*(int *)(gen_frame + 0x218)) = (*(int *)(gen_frame + 0x218)) - 0x10;
      (*(int *)(gen_frame + 0x214)) = iVar8;
    } while (-1 < iVar8);
  }
  (*(int *)(gen_frame + 0x224)) = 0;
  uVar3 = (*(uint *)(gen_frame + 0x228));
joined_r0x00e17901: ;
  if (-1 < (int)uVar3) {
    (*(int *)(gen_frame + 0x224)) = 0;
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10)));
    (*(uint *)(gen_frame + 0x228)) = uVar3;
    uVar3 = (*pcVar1)(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x220)),uVar3 << 4);
  }
  return uVar3;
}

/* ref: hkMemoryResourceContainer::vf15 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e17920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe17920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  F_00e17590(this GEN_EDX_FWD,&(*(int *)(gen_frame + 0x0)));
  iVar3 = 0;
  if (0 < (*(int *)(gen_frame + 0x4))) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + iVar3 * 4)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x34))))(piVar1 GEN_EDX_ARG,param_1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (*(int *)(gen_frame + 0x4)));
  }
  (*(int *)(gen_frame + 0x4)) = 0;
  uVar2 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
  }
  return uVar2;
}

/* ref: hkMemoryResourceContainer::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e179a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe179a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x2a0, 0, 4);
  int iVar1;
  int * piVar2;
  code * pcVar3;
  int iVar4;
  uint uVar5;
  undefined * pvVar6;
  char * pcVar7;
  uint uVar8;
  undefined * puVar9;
  
  iVar4 = 0;
  do {
    if (((*(int *)&gen_args[2]) == 0) || (*(int *)(this + 0x14) <= iVar4)) break;
    iVar1 = iVar4 * 4;
    iVar4 = iVar4 + 1;
  } while (*((int *)GEN_TOP((*(int *)(this + 0x10) + iVar1))) != (*(int *)&gen_args[2]));
  (*(int *)(gen_frame + 0x298)) = iVar4;
  if (iVar4 < *(int *)(this + 0x14)) {
    do {
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x10) + iVar4 * 4)));
      (*(int *)(gen_frame + 0x298)) = iVar4;
      if ((*(int *)&gen_args[0]) == 0) {
LAB_00e17a81: ;
        if ((((*(undefined * PTR32 *)&gen_args[1]) == ((undefined *)GEN_TOP(0x0))) ||
            (pvVar6 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_FWD))), (*(undefined * PTR32 *)&gen_args[1]) == pvVar6)) ||
           (pcVar7 = ((char *)GEN_TOP(F_00d92650((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,(int)&(*(int *)&gen_args[2]) + 3,pvVar6))), *pcVar7 != '\0')) {
          return (uint)piVar2;
        }
        iVar4 = (*(int *)(gen_frame + 0x298));
        if ((*(int *)&gen_args[0]) != 0) {
          F_00da0a80(((undefined1 *)(gen_frame + 0x28c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
          uVar5 = F_00d92610(pvVar6 GEN_EDX_ARG);
          puVar9 = &REFG(undefined, 0x114e50c);
          uVar8 = F_00d92610((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
          pvVar6 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x28c)) GEN_EDX_ARG,((char *)REFP(0x114e4e4)))));
          pvVar6 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar6 GEN_EDX_ARG,uVar8)));
          pvVar6 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar6 GEN_EDX_ARG,puVar9)));
          F_00d9fe80(pvVar6 GEN_EDX_ARG,uVar5);
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                    (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xf034ed22,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114e49c)),
                     0x138);
          F_00d9fda0(((undefined1 *)(gen_frame + 0x28c)) GEN_EDX_ARG);
          return 0;
        }
      }
      else {
        pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x10)));
        (*(undefined1 * PTR32 *)(gen_frame + 0x200)) = ((undefined1 *)(gen_frame + 0x20c));
        (*(uint *)(gen_frame + 0x208)) = 0x80000080;
        (*(undefined4 *)(gen_frame + 0x204)) = 1;
        ((undefined1 *)(gen_frame + 0x20c))[0] = 0;
        uVar5 = (*pcVar3)(piVar2,&(*(undefined1 * PTR32 *)(gen_frame + 0x200)));
        uVar5 = F_00da0d20((*(int *)&gen_args[0]),uVar5);
        (*(undefined4 *)(gen_frame + 0x204)) = 0;
        if (uVar5 == 0) {
          if (-1 < (int)(*(uint *)(gen_frame + 0x208))) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x200)),(*(uint *)(gen_frame + 0x208)) & 0x3fffffff);
          }
          goto LAB_00e17a81;
        }
        if (-1 < (int)(*(uint *)(gen_frame + 0x208))) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                    (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x200)),(*(uint *)(gen_frame + 0x208)) & 0x3fffffff);
        }
      }
      iVar4 = iVar4 + 1;
      (*(int *)(gen_frame + 0x298)) = iVar4;
    } while (iVar4 < *(int *)(this + 0x14));
  }
  return 0;
}

/* ref: hkMemoryResourceContainer::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e17b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe17b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  int * piVar7;
  
  pvVar2 = param_1;
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  uVar4 = 0;
  if (0 < *(int *)(this + 0x14)) {
    piVar7 = *(int * PTR32 *)(this + 0x10);
    do {
      uVar3 = uVar4;
      if (((undefined *)GEN_TOP(*piVar7)) == param_1) goto LAB_00e17ba8;
      uVar4 = uVar4 + 1;
      piVar7 = piVar7 + 1;
    } while ((int)uVar4 < *(int *)(this + 0x14));
  }
  param_1 = ((undefined *)GEN_TOP(0xffffffff));
  uVar3 = (uint)param_1;
LAB_00e17ba8: ;
  param_1 = ((undefined *)GEN_TOP(uVar3));
  if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
    uVar4 = F_00d91a80(pvVar2 GEN_EDX_ARG);
  }
  if (-1 < (int)param_1) {
    iVar5 = (int)((int)(uintptr_t)param_1) * 4;
    iVar1 = *(int *)(this + 0x10);
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar5)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(pvVar2 GEN_EDX_ARG);
    }
    *((undefined4 *)GEN_TOP((iVar1 + iVar5))) = 0;
    *(int *)(this + 0x14) = *(int *)(this + 0x14) - 1;
    uVar4 = (*(int *)(this + 0x14) - (int)param_1) * 4;
    puVar6 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + iVar5)));
    if (0 < (int)uVar4) {
      iVar5 = (uVar4 - 1 >> 2) + 1;
      do {
        *puVar6 = puVar6[1];
        puVar6 = puVar6 + 1;
        iVar5 = iVar5 - 1;
        uVar4 = 0;
      } while (iVar5 != 0);
    }
  }
  return uVar4;
}

/* ref: hkMemoryResourceContainer::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e17c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe17c10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  uVar3 = 0;
  if (0 < *(int *)(this + 0x20)) {
    piVar4 = *(int * PTR32 *)(this + 0x1c);
    do {
      uVar5 = uVar3;
      if (((undefined *)GEN_TOP(*piVar4)) == param_1) goto LAB_00e17c41;
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while ((int)uVar3 < *(int *)(this + 0x20));
  }
  uVar5 = 0xffffffff;
LAB_00e17c41: ;
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    uVar3 = F_00d91a80(param_1 GEN_EDX_ARG);
  }
  if (-1 < (int)uVar5) {
    iVar2 = *(int *)(this + 0x1c);
    iVar1 = uVar5 * 4;
    this_00 = *((undefined * PTR32 *)GEN_TOP((iVar2 + iVar1)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(this_00 GEN_EDX_ARG);
    }
    *((undefined4 *)GEN_TOP((iVar2 + iVar1))) = 0;
    uVar3 = *(int *)(this + 0x20) - 1;
    *(uint *)(this + 0x20) = uVar3;
    if (uVar3 != uVar5) {
      uVar3 = *((uint *)GEN_TOP((*(int *)(this + 0x1c) + uVar3 * 4)));
      *((uint *)GEN_TOP((*(int *)(this + 0x1c) + iVar1))) = uVar3;
    }
  }
  return uVar3;
}

/* ref: hkMemoryResourceContainer::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e17ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe17ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x218, 8, 4);
  int iVar1;
  undefined * phVar2;
  int * piVar3;
  int iVar4;
  undefined * pvVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined * phVar8;
  char * pcVar9;
  char * pcVar10;
  
  for (phVar2 = param_1; phVar2 != ((undefined *)GEN_TOP(0x0));
      phVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)phVar2 + 0x24))))(phVar2 GEN_EDX_FWD)))) {
    if (phVar2 == this) {
      F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
      pcVar10 = ((char *)REFP(0x114e52c));
      phVar8 = param_1 + 8;
      pcVar9 = ((char *)REFP(0x114e524));
      phVar2 = this + 8;
      pvVar5 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x114e514)))));
      pvVar5 = ((undefined *)GEN_TOP(F_00da0420(pvVar5 GEN_EDX_ARG,phVar2)));
      pvVar5 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar5 GEN_EDX_ARG,pcVar9)));
      pvVar5 = ((undefined *)GEN_TOP(F_00da0420(pvVar5 GEN_EDX_ARG,phVar8)));
      F_00d9fe80(pvVar5 GEN_EDX_ARG,pcVar10);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xabba4554,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114e49c)),0x198)
      ;
      F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
      return 1;
    }
  }
  F_00d919e0(this GEN_EDX_ARG);
  if (this != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(this GEN_EDX_ARG);
  }
  iVar4 = *((int *)GEN_TOP((*(int *)(this + 0xc) + 0x20)));
  iVar6 = 0;
  if (0 < iVar4) {
    piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x1c)));
    do {
      if (((undefined *)GEN_TOP(*piVar3)) == this) {
        (*(int *)(gen_frame + 0x210)) = iVar6;
        goto LAB_00e17d07;
      }
      iVar6 = iVar6 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar6 < iVar4);
  }
  (*(int *)(gen_frame + 0x210)) = -1;
LAB_00e17d07: ;
  F_00d91a80(this GEN_EDX_ARG);
  iVar4 = *(int *)(this + 0xc);
  iVar6 = *((int *)GEN_TOP((iVar4 + 0x1c)));
  iVar1 = (*(int *)(gen_frame + 0x210)) * 4;
  pvVar5 = *((undefined * PTR32 *)GEN_TOP((iVar6 + iVar1)));
  (*(int *)(gen_frame + 0x20c)) = iVar1;
  if (pvVar5 != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(pvVar5 GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP((iVar6 + iVar1))) = 0;
  *((int *)GEN_TOP((iVar4 + 0x20))) = *((int *)GEN_TOP((iVar4 + 0x20))) - 1;
  iVar6 = (*((int *)GEN_TOP((iVar4 + 0x20))) - (*(int *)(gen_frame + 0x210))) * 4;
  puVar7 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x1c))) + (*(int *)(gen_frame + 0x20c)))));
  if (0 < iVar6) {
    iVar4 = (iVar6 - 1U >> 2) + 1;
    do {
      *puVar7 = puVar7[1];
      puVar7 = puVar7 + 1;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  F_00d919e0(this GEN_EDX_ARG);
  if (*(uint *)(param_1 + 0x20) == (*(uint *)(param_1 + 0x24) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_1 + 0x1c,4);
  }
  puVar7 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x20) * 4)));
  if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
    F_00d919e0(this GEN_EDX_ARG);
    *puVar7 = this;
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  F_00d91a80(this GEN_EDX_ARG);
  *(undefined * PTR32 *)(this + 0xc) = param_1;
  F_00d91a80(this GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00e17e60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e17e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe17e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0xa4, 12, 4);
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (*(uint *)(gen_frame + 0x8c));
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8c)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x8c)) = uVar2 & 0xffffff00;
  this_00 = ((undefined *)GEN_TOP(((int)this + 4)));
  (*(undefined * PTR32 *)(gen_frame + 0x90)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x114e560));
  F_00da3de0(this_00 GEN_EDX_FWD,(*(uint *)(gen_frame + 0x8c)));
  iVar3 = 0;
  (*(int *)(gen_frame + 0x94)) = 0;
  (*(int *)(gen_frame + 0x98)) = 0;
  (*(int *)(gen_frame + 0x9c)) = ((int)0x80000000);
  F_00e17590(param_1 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x94)));
  if (0 < (*(int *)(gen_frame + 0x98))) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x94)) + iVar3 * 4)));
      (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
      (*(uint *)(gen_frame + 0x8)) = 0x80000080;
      (*(undefined4 *)(gen_frame + 0x4)) = 1;
      ((undefined1 *)(gen_frame + 0xc))[0] = 0;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
      F_00da3a20(this_00 GEN_EDX_ARG,uVar2,piVar1);
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
      }
      iVar3 = iVar3 + 1;
      this = (*(undefined * PTR32 *)(gen_frame + 0x90));
    } while (iVar3 < (*(int *)(gen_frame + 0x98)));
  }
  (*(int *)(gen_frame + 0x98)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x9c))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x94)),(*(int *)(gen_frame + 0x9c)) * 4);
  }
  return (uint)this;
}

/* ref: FUN_00e17f70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e17f70(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe17f70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *((undefined2 *)GEN_TOP(((int)in_ecx + 6))) = 1;
  *in_ecx = (*(undefined * PTR32 (*)[14])REFP(0x114e56c));
  in_ecx[2] = 0;
  F_00d91340(in_ecx + 3 GEN_EDX_FWD);
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0x80000000;
  return (uint)in_ecx;
}

/* ref: FUN_00e17fb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e17fb0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe17fb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[14])REFP(0x114e56c));
  F_00d91350(in_ecx + 3 GEN_EDX_FWD,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00e17fd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e17fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe17fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[14])REFP(0x114e56c));
  iVar2 = *((int *)GEN_TOP(((int)this + 0x14))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + iVar2 * 8)));
    do {
      F_00d91510(((undefined *)GEN_TOP(((int)this_00 + 4))) GEN_EDX_FWD);
      F_00d91510(this_00 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 8)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0x18)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  if (-1 < iVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x10))),iVar2 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  uVar1 = F_00d91510(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00e18060 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe18060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x90, 0, 4);
  code * pcVar1;
  undefined * this_00;
  uint uVar2;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_FWD)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00e18060(this_00 GEN_EDX_ARG,param_1);
  }
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0x10)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(uint *)(gen_frame + 0x8)) = 0x80000080;
  (*(undefined4 *)(gen_frame + 0x4)) = 1;
  ((undefined1 *)(gen_frame + 0xc))[0] = 0;
  uVar2 = (*pcVar1)(this,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
  F_00da4d70(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1080808));
  F_00da4d70(param_1 GEN_EDX_ARG,uVar2);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  uVar2 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
  }
  return uVar2;
}

/* ref: hkMemoryResourceContainer::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe18110u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined4 * puVar1;
  LPVOID pvVar2;
  uint in_ecx;
  int * this_00;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  in_ecx = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,0x1c);
  *((undefined2 *)GEN_TOP((in_ecx + 4))) = 0x1c;
  this_00 = ((int *)GEN_TOP(F_00e17f70(in_ecx GEN_EDX_ARG)));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x14))))(this_00 GEN_EDX_ARG,param_1);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x20))))(this_00 GEN_EDX_ARG,param_2,param_3);
  F_00d919e0(this_00 GEN_EDX_ARG);
  if (*(uint *)(this + 0x14) == (*(uint *)(this + 0x18) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this + 0x10,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + *(int *)(this + 0x14) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    F_00d919e0(this_00 GEN_EDX_ARG);
    *puVar1 = this_00;
  }
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  F_00d91a80(this_00 GEN_EDX_ARG);
  F_00d91a80(this_00 GEN_EDX_ARG);
  return (uint)this_00;
}

/* ref: FUN_00e181c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e181c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe181c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x114e5ac));
  F_00d91480(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0x80000000;
  return (uint)this;
}

/* ref: FUN_00e18210 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe18210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x114e5ac));
  F_00d91350((int)this + 8 GEN_EDX_FWD,param_1);
  if ((param_1 != 0) && (iVar2 = 0, 0 < *((int *)GEN_TOP(((int)this + 0x20))))) {
    do {
      iVar1 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + iVar1))) + 0xc))) = this;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 0x20))));
  }
  return (uint)this;
}

/* ref: FUN_00e18250 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e18250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe18250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x114e5ac));
  iVar4 = *((int *)GEN_TOP(((int)this + 0x20))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x1c)));
  while (-1 < iVar4) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar4 * 4)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(pvVar2 GEN_EDX_FWD);
    }
    iVar4 = iVar4 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar4 * 4))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x24)));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x1c))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0x80000000;
  iVar4 = *((int *)GEN_TOP(((int)this + 0x14))) - 1;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  while (-1 < iVar4) {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((iVar1 + iVar4 * 4)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(pvVar2 GEN_EDX_ARG);
    }
    iVar4 = iVar4 - 1;
    *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar4 * 4))) = 0;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x18)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x10))),iVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  uVar3 = F_00d91510(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar3;
}

/* ref: hkMemoryResourceContainer::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe18330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  undefined * pvVar2;
  LPVOID pvVar3;
  
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x34))))(this GEN_EDX_FWD,param_1,0)));
  if (pvVar2 == ((undefined *)GEN_TOP(0x0))) {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) + 4))))
                               (*((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) GEN_EDX_ARG,0x28)));
    *((undefined2 *)GEN_TOP(((int)pvVar2 + 4))) = 0x28;
    pvVar2 = ((undefined *)GEN_TOP(F_00e181c0(pvVar2 GEN_EDX_ARG,param_1)));
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d919e0(pvVar2 GEN_EDX_ARG);
    }
    if (*(uint *)(this + 0x20) == (*(uint *)(this + 0x24) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this + 0x1c,4);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x1c) + *(int *)(this + 0x20) * 4)));
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
        F_00d919e0(pvVar2 GEN_EDX_ARG);
      }
      *puVar1 = pvVar2;
    }
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    if (pvVar2 != ((undefined *)GEN_TOP(0x0))) {
      F_00d91a80(pvVar2 GEN_EDX_ARG);
    }
    *((undefined * PTR32 *)GEN_TOP(((int)pvVar2 + 0xc))) = this;
    F_00d91a80(pvVar2 GEN_EDX_ARG);
  }
  return (uint)pvVar2;
}

/* ref: FUN_00e18400 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe18400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this GEN_EDX_FWD,local_8);
  return (uint)this;
}

/* ref: FUN_00e18420 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe18420u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da3a20(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e18430 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe18430u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da4190(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e184a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e184a0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe184a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e184f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e184f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe184f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e18540 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18540(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe18540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e18550 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18550(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe18550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e185a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e185a0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe185a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00e185f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e185f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe185f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e18610 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe18610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00e18630 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e18630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe18630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00e18660 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe18660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00e18680 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e18680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe18680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(undefined * PTR32 *)this != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00e186b0 */
GEN_LIB GEN_FRAME unsigned int F_00e186b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe186b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int in_ecx;
  int iVar1;
  
  in_ecx = param_1;
  iVar1 = param_2;
  if (0 < param_2) {
    do {
      if (in_ecx != 0) {
        F_00d91340(in_ecx GEN_EDX_ARG);
        F_00d91340(in_ecx + 4 GEN_EDX_ARG);
      }
      in_ecx = in_ecx + 8;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return;
}

/* ref: FUN_00e18760 */
GEN_LIB GEN_FRAME unsigned int F_00e18760(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe18760u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e187a0 */
GEN_LIB GEN_FRAME unsigned int F_00e187a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe187a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e187d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e187d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe187d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00e187f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e187f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe187f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e18810 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe18810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00e18840 */
GEN_LIB GEN_FRAME uint F_00e18840(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe18840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00e18850 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe18850u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e18870 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe18870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (((undefined *)GEN_TOP(*param_1)) != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(((undefined *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00e188a0 */
GEN_LIB GEN_FRAME uint F_00e188a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe188a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00e188b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e188b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe188b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00e188d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e188d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe188d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: hkMemoryResourceHandle::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e18950(void)
{
  GEN_ENTER(0xe18950u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkMemoryResourceContainer::vf3 */
GEN_LIB GEN_NOFRAME uint F_00e189b0(void)
{
  GEN_ENTER(0xe189b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00e189e0 */
GEN_LIB GEN_FRAME unsigned int F_00e189e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe189e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: hkResourceMap::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18a10(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe18a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x114e3e0));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return (uint)param_1;
}

/* ref: FUN_00e18a50 */
GEN_LIB GEN_FRAME uint F_00e18a50(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe18a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00e18a80 */
GEN_LIB GEN_FRAME uint F_00e18a80(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe18a80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00e18b80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe18b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  iVar1 = *(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8;
  if (iVar1 != 0) {
    F_00d91340(iVar1 GEN_EDX_ARG);
    F_00d91340(iVar1 + 4 GEN_EDX_ARG);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00e18be0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18be0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe18be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 4))) = *((int *)GEN_TOP((in_ecx + 4))) - param_2;
  return param_2;
}

/* ref: FUN_00e18bf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe18bf0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e18c30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe18c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = param_1 + iVar1;
  return iVar1 * 0x10 + *(int *)this;
}

/* ref: FUN_00e18c50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe18c50u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e18c90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe18c90u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e18cf0 */
GEN_LIB GEN_FRAME unsigned int F_00e18cf0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe18cf0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e18d30 */
GEN_LIB GEN_FRAME unsigned int F_00e18d30(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe18d30u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e18d70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe18d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e18db0 */
GEN_LIB GEN_FRAME unsigned int F_00e18db0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe18db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00e18de0 */
GEN_LIB GEN_FRAME unsigned int F_00e18de0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe18de0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return;
}

/* ref: FUN_00e18e20 */
GEN_LIB GEN_FRAME uint F_00e18e20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe18e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00e18e50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18e50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe18e50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e18e90 */
GEN_LIB GEN_FRAME uint F_00e18e90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe18e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00e18ec0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18ec0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe18ec0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e18f00 */
GEN_LIB GEN_FRAME uint F_00e18f00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe18f00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00e18f30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18f30(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe18f30u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e18f70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e18f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe18f70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  iVar1 = *(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8;
  if (iVar1 != 0) {
    F_00d91340(iVar1 GEN_EDX_ARG);
    F_00d91340(iVar1 + 4 GEN_EDX_ARG);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00e18fc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e18fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe18fc0u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0x10);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e19000 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe19000u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e19040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe19040u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e19080 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe19080u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00e190c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e190c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe190c0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e19110 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe19110u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00e19150 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe19150u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e191a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e191a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe191a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e191e0 */
GEN_LIB GEN_FRAME unsigned int F_00e191e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe191e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e19210 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe19210u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e19250 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19250(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe19250u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e19290 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19290(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe19290u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e192d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e192d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe192d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e19320 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe19320u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e19370 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e19370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe19370u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e193a0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e193a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe193a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e19400 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e19400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe19400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e19440 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e19440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe19440u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e19480 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe19480u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e194f0 */
GEN_LIB GEN_FRAME unsigned int F_00e194f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe194f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e19520 */
GEN_LIB GEN_FRAME unsigned int F_00e19520(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe19520u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e195d0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e195d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe195d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * this_00;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  
  iVar2 = *(int *)this;
  iVar1 = param_1 * 4;
  this_00 = *((undefined * PTR32 *)GEN_TOP((iVar2 + iVar1)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(this_00 GEN_EDX_FWD);
  }
  *((undefined4 *)GEN_TOP((iVar2 + iVar1))) = 0;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar2 = (*((int *)GEN_TOP(((int)this + 4))) - param_1) * 4;
  puVar3 = ((undefined4 *)GEN_TOP((*(int *)this + iVar1)));
  if (0 < iVar2) {
    iVar2 = (iVar2 - 1U >> 2) + 1;
    do {
      *puVar3 = puVar3[1];
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e19630 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe19630u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e19670 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e19670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe19670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * this_00;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  
  iVar2 = *(int *)this;
  iVar1 = param_1 * 4;
  this_00 = *((undefined * PTR32 *)GEN_TOP((iVar2 + iVar1)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(this_00 GEN_EDX_FWD);
  }
  *((undefined4 *)GEN_TOP((iVar2 + iVar1))) = 0;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar2 = (*((int *)GEN_TOP(((int)this + 4))) - param_1) * 4;
  puVar3 = ((undefined4 *)GEN_TOP((*(int *)this + iVar1)));
  if (0 < iVar2) {
    iVar2 = (iVar2 - 1U >> 2) + 1;
    do {
      *puVar3 = puVar3[1];
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e196d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e196d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe196d0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e19710 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e19710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe19710u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e19780 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe19780u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e197f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e197f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe197f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e19860 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e19860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe19860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00da3e20(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x114e3e0));
  return uVar1;
}

/* ref: FUN_00e19880 */
GEN_LIB GEN_FRAME unsigned int F_00e19880(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe19880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x14);
  }
  return;
}

/* ref: hkContainerResourceMap::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e198b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe198b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00da3e20(param_1 + 1 GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x114e3e0));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x14);
  }
  return (uint)param_1;
}

/* ref: FUN_00e198f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e198f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe198f0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e19960 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e19960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe19960u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e199d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e199d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe199d0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e19a40 */
GEN_LIB GEN_FRAME uint F_00e19a40(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe19a40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00e19a70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e19a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe19a70u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e19ae0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e19ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe19ae0u, gen_a0, 0u, 0u, 0u);
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

/* ref: hkMemoryResourceHandle::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19b50(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe19b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00e17fd0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: hkMemoryResourceContainer::vf9 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e19b90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe19b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xc)));
}

/* ref: FUN_00e19ba0 */
GEN_LIB GEN_FRAME uint F_00e19ba0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe19ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkMemoryResourceContainer::vf7 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e19bd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe19bd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x14)));
}

/* ref: hkMemoryResourceContainer::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19be0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe19be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00e18250(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00e19c20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e19c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe19c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00dc17f0(this GEN_EDX_FWD);
  uVar1 = F_00dc1690(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00e19c30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19c30(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe19c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = *in_ecx != 0;
  return param_2;
}

/* ref: FUN_00e19c70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e19c70(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe19c70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  if (*in_ecx == 9) {
    return in_ecx[2];
  }
  return 0xffffffff;
}

/* ref: FUN_00e19c80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e19c80(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe19c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  if (*in_ecx == 6) {
    return in_ecx[2];
  }
  return 0;
}

/* ref: FUN_00e19c90 */
GEN_LIB GEN_FRAME uint F_00e19c90(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe19c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = 0;
  piVar3 = param_1;
  do {
    iVar1 = *piVar3;
    uVar2 = (uVar2 << 1 | (uint)((int)uVar2 < 0)) ^ iVar1 * -0x61c8864f;
    if (iVar1 == 6) {
      uVar2 = uVar2 ^ (uint)piVar3;
    }
    else if (iVar1 == 9) {
      uVar2 = uVar2 ^ piVar3[2];
    }
    piVar3 = ((int *)GEN_TOP(piVar3[1]));
  } while (piVar3 != ((int *)GEN_TOP(0x0)));
  return uVar2;
}

/* ref: FUN_00e19cd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e19cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe19cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00e19c90(this);
  if (uVar1 == 0xffffffff) {
    uVar1 = 0x7af1f32a;
  }
  return uVar1;
}

/* ref: FUN_00e19cf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe19cf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if ((iVar1 != *param_2) || (*((int *)GEN_TOP(((int)this + 4))) != param_2[1])) {
    *param_1 = 0;
    return (uint)param_1;
  }
  if ((iVar1 != 6) && (iVar1 != 9)) {
    *param_1 = 1;
    return (uint)param_1;
  }
  *param_1 = *((int *)GEN_TOP(((int)this + 8))) == param_2[2];
  return (uint)param_1;
}

/* ref: FUN_00e19d40 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e19d40(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe19d40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP((in_ecx + 4)));
  while (uVar1 = uVar2, uVar1 != 0) {
    in_ecx = uVar1;
    uVar2 = *((uint *)GEN_TOP((uVar1 + 4)));
  }
  return in_ecx;
}

/* ref: FUN_00e19d60 */
GEN_LIB GEN_FRAME unsigned int F_00e19d60(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe19d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  undefined4 * in_ecx;
  uint uVar1;
  undefined * pvVar2;
  undefined4 in_ecx_00;
  undefined4 uVar3;
  char * pcVar4;
  
  in_ecx = param_1;
  do {
    if (in_ecx == ((undefined4 *)GEN_TOP(0x0))) {
      return;
    }
    pvVar2 = param_2;
    switch((unsigned int)(uintptr_t)(*in_ecx)) {
    case 0: ;
      pcVar4 = &REFG(undefined, 0x11261a0);
      break;
    case 1: ;
      pcVar4 = &REFG(undefined, 0x1126468);
      break;
    case 2: ;
      pcVar4 = &REFG(undefined, 0x114c8bc);
      break;
    case 3: ;
      pcVar4 = &REFG(undefined, 0x114c8b4);
      break;
    case 4: ;
      pcVar4 = ((char *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x112673c))));
      break;
    case 5: ;
      pcVar4 = ((char *)REFP(0x114e608));
      break;
    case 6: ;
      uVar1 = F_00e19c80(in_ecx GEN_EDX_ARG);
      if (uVar1 == 0) {
        pcVar4 = ((char *)REFP(0x114e5ec));
      }
      else {
        pcVar4 = ((char *)GEN_TOP(F_00e19c80(in_ecx_00 GEN_EDX_ARG)));
        pvVar2 = ((undefined *)GEN_TOP(F_00d9fe80(param_2 GEN_EDX_ARG,((char *)REFP(0x1126550)))));
      }
      break;
    case 7: ;
      pcVar4 = &REFG(undefined, 0x111869c);
      break;
    case 8: ;
      pcVar4 = &REFG(undefined, 0x1126194);
      break;
    case 9: ;
      uVar3 = in_ecx[2];
      pcVar4 = &REFG(undefined, 0x1092088);
      pvVar2 = ((undefined *)GEN_TOP(F_00d9fe80(param_2 GEN_EDX_ARG,&REFG(undefined, 0x1092090))));
      pvVar2 = ((undefined *)GEN_TOP(F_00d9ff40(pvVar2 GEN_EDX_ARG,uVar3)));
      break;
    default: ;
      goto switchD_00e19d7e_default;
    }
    F_00d9fe80(pvVar2 GEN_EDX_ARG,pcVar4);
switchD_00e19d7e_default: ;
    in_ecx = ((undefined4 *)GEN_TOP(in_ecx[1]));
  } while( true );
}

/* ref: FUN_00e19e60 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e19e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe19e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00e19d60(this,param_1);
  return;
}

/* ref: FUN_00e19e80 */
GEN_LIB GEN_FRAME uint F_00e19e80(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe19e80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * in_ecx;
  int * in_ecx_00;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  in_ecx = param_2;
  in_ecx_00 = param_3;
  do {
    piVar2 = in_ecx_00;
    if ((in_ecx == ((int *)GEN_TOP(0x0))) || (piVar2 = in_ecx, in_ecx_00 == ((int *)GEN_TOP(0x0)))) {
      if (piVar2 == ((int *)GEN_TOP(0x0))) {
        *param_1 = 1;
        return (uint)param_1;
      }
      *param_1 = 0;
      return (uint)param_1;
    }
    iVar1 = *in_ecx;
    if (iVar1 != *in_ecx_00) goto LAB_00e19ef7;
    if (iVar1 == 6) {
      uVar3 = F_00e19c80(in_ecx GEN_EDX_ARG);
      uVar4 = F_00e19c80(in_ecx_00 GEN_EDX_ARG);
      if ((uVar3 == 0) || (uVar4 == 0)) {
        *param_1 = 1;
        return (uint)param_1;
      }
      uVar3 = F_00da0d20(uVar3,uVar4);
      bVar5 = uVar3 == 0;
LAB_00e19edc: ;
      if (!bVar5) {
LAB_00e19ef7: ;
        *param_1 = 0;
        return (uint)param_1;
      }
    }
    else if (iVar1 == 9) {
      uVar3 = F_00e19c70(in_ecx GEN_EDX_ARG);
      uVar4 = F_00e19c70(in_ecx_00 GEN_EDX_ARG);
      bVar5 = uVar3 == uVar4;
      goto LAB_00e19edc;
    }
    in_ecx = ((int *)GEN_TOP(in_ecx[1]));
    in_ecx_00 = ((int *)GEN_TOP(in_ecx_00[1]));
  } while( true );
}

/* ref: FUN_00e19f20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e19f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe19f20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 == this) {
    *param_1 = 1;
    return (uint)param_1;
  }
  F_00e19e80(param_1,this,param_2);
  return (uint)param_1;
}

/* ref: FUN_00e19f50 */
GEN_LIB GEN_FRAME uint F_00e19f50(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe19f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  char * pcVar2;
  
  if (((param_2 != ((char *)GEN_TOP(0x0))) && (cVar1 = *param_2, cVar1 != '\0')) &&
     ((('`' < cVar1 && (cVar1 < '{')) || ((('@' < cVar1 && (cVar1 < '[')) || (cVar1 == '_')))))) {
    cVar1 = param_2[1];
    pcVar2 = param_2;
    while( true ) {
      if (cVar1 == '\0') {
        *param_1 = 1;
        return (uint)param_1;
      }
      if (((((cVar1 < 'a') || ('z' < cVar1)) && ((cVar1 < 'A' || ('Z' < cVar1)))) &&
          ((cVar1 < '0' || ('9' < cVar1)))) && ((cVar1 != ':' && (cVar1 != '_')))) break;
      cVar1 = pcVar2[2];
      pcVar2 = pcVar2 + 1;
    }
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00e19fc0 */
GEN_LIB GEN_FRAME unsigned int F_00e19fc0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe19fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  undefined4 * in_ecx;
  uint uVar1;
  undefined * pvVar2;
  undefined * puVar3;
  
  in_ecx = param_1;
  do {
    if (in_ecx == ((undefined4 *)GEN_TOP(0x0))) {
      return;
    }
    pvVar2 = param_2;
    switch((unsigned int)(uintptr_t)(*in_ecx)) {
    case 0: ;
      puVar3 = &REFG(undefined, 0x11261a0);
      break;
    case 1: ;
      puVar3 = &REFG(undefined, 0x1145964);
      break;
    case 2: ;
      puVar3 = &REFG(undefined, 0x113a370);
      break;
    case 3: ;
      puVar3 = &REFG(undefined, 0x11187b8);
      break;
    case 4: ;
      puVar3 = &REFG(undefined, 0x114e614);
      break;
    case 5: ;
      puVar3 = &REFG(undefined, 0x114e610);
      break;
    case 6: ;
      puVar3 = &REFG(undefined, 0x1118a38);
      uVar1 = F_00e19c80(in_ecx GEN_EDX_ARG);
      pvVar2 = ((undefined *)GEN_TOP(F_00d9fe80(param_2 GEN_EDX_ARG,&REFG(undefined, 0x11186a8))));
      pvVar2 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar2 GEN_EDX_ARG,uVar1)));
      break;
    case 7: ;
      puVar3 = &REFG(undefined, 0x111869c);
      break;
    case 8: ;
      puVar3 = &REFG(undefined, 0x1126194);
      break;
    case 9: ;
      puVar3 = &REFG(undefined, 0x1092088);
      uVar1 = F_00e19c70(in_ecx GEN_EDX_ARG);
      pvVar2 = ((undefined *)GEN_TOP(F_00d9fe80(param_2 GEN_EDX_ARG,&REFG(undefined, 0x1092090))));
      pvVar2 = ((undefined *)GEN_TOP(F_00d9ff40(pvVar2 GEN_EDX_ARG,uVar1)));
      break;
    default: ;
      goto switchD_00e19fde_default;
    }
    F_00d9fe80(pvVar2 GEN_EDX_ARG,puVar3);
switchD_00e19fde_default: ;
    in_ecx = ((undefined4 *)GEN_TOP(in_ecx[1]));
  } while( true );
}

/* ref: FUN_00e1a0b0 */
GEN_LIB GEN_FRAME uint F_00e1a0b0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1a0b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *param_2 = 0;
  switch((unsigned int)(uintptr_t)(*param_1)) {
  case 2: ;
    return 1;
  case 3: ;
    return 3;
  case 4: ;
    return 2;
  case 5: ;
    return 10;
  case 6: ;
    uVar1 = F_00e19c80(param_1 GEN_EDX_ARG);
    *param_2 = uVar1;
    return 9;
  case 7: ;
    if (*((int *)GEN_TOP(param_1[1])) == 6) {
      uVar1 = F_00e19c80(((int *)GEN_TOP(param_1[1])) GEN_EDX_ARG);
      *param_2 = uVar1;
      return 8;
    }
    break;
  case 9: ;
    if (*((int *)GEN_TOP(param_1[1])) == 3) {
      uVar1 = F_00e19c70(param_1 GEN_EDX_ARG);
      switch((unsigned int)(uintptr_t)(uVar1)) {
      case 4: ;
        return 4;
      case 8: ;
        return 5;
      case 0xc: ;
        return 6;
      case 0x10: ;
        return 7;
      }
    }
  }
  return 0;
}

/* ref: FUN_00e1a1a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1a1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1a1a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da4190(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: FUN_00e1a1c0 */
GEN_LIB GEN_FRAME uint F_00e1a1c0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe1a1c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  int iVar1;
  uint uVar2;
  
  *param_2 = 0;
  *param_3 = 0;
  if (*param_1 == 8) {
    uVar2 = F_00e1a0b0(param_1[1],param_2);
    return uVar2 | 0x10;
  }
  if ((*param_1 == 9) && ((*((int *)GEN_TOP(param_1[1])) != 3 || ((((iVar1 = param_1[2], iVar1 != 4 && (iVar1 != 8)) && (iVar1 != 0xc)) && (iVar1 != 0x10)))))) {
    uVar2 = F_00e19c70(param_1 GEN_EDX_ARG);
    *param_3 = uVar2;
    uVar2 = F_00e1a0b0(*((undefined4 *)GEN_TOP((((int)(uint)(param_1)) + 4))),param_2);
    return uVar2 | 0x20;
  }
  uVar2 = F_00e1a0b0(param_1,param_2);
  return uVar2;
}

/* ref: FUN_00e1a240 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1a240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1a240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL(0x5, 11);
  undefined4 * this_00;
  uint uVar1;
  uint uVar2;
  undefined * this_01;
  undefined4 * puVar3;
  
  this_00 = ((undefined4 *)GEN_TOP(F_00e1a1a0(this GEN_EDX_FWD,param_1)));
  if (this_00 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x50)));
    this_00 = ((undefined4 *)GEN_TOP(*puVar3));
    if (this_00 == ((undefined4 *)GEN_TOP(0x0))) {
      this_00 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x70)));
      if (this_00 < *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x74)))) {
        *((int *)GEN_TOP(((int)this + 0x84))) = *((int *)GEN_TOP(((int)this + 0x84))) - 1;
        *((int *)GEN_TOP(((int)this + 0x70))) = *((int *)GEN_TOP(((int)this + 0x54))) + (int)this_00;
      }
      else {
        this_00 = ((undefined4 *)GEN_TOP(F_00dc1990(puVar3 GEN_EDX_ARG)));
      }
    }
    else {
      *((int *)GEN_TOP(((int)this + 0x84))) = *((int *)GEN_TOP(((int)this + 0x84))) - 1;
      *puVar3 = *this_00;
    }
    this_01 = ((undefined *)GEN_TOP(((int)this + 0x34)));
    *this_00 = 6;
    this_00[1] = 0;
    uVar1 = F_00da3ae0(this_01 GEN_EDX_ARG,param_1);
    F_00da3e40(this_01 GEN_EDX_ARG,&(*(char *)(gen_frame + 0x0)),uVar1);
    if ((*(char *)(gen_frame + 0x0)) == '\0') {
      uVar2 = F_00da0f10(param_1,&REFG(undefined * PTR32, 0x13516ac));
      F_00da3a20(this_01 GEN_EDX_ARG,uVar2,this_00);
    }
    else {
      uVar2 = F_00da3990(this_01 GEN_EDX_ARG,uVar1);
      F_00da39d0(this_01 GEN_EDX_ARG,uVar1,this_00);
    }
    this_00[2] = uVar2;
    puVar3 = this_00;
    uVar1 = F_00e19cd0(this_00 GEN_EDX_ARG);
    F_0105bcf0(((undefined *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG,uVar1,puVar3);
  }
  return (uint)this_00;
}

/* ref: FUN_00e1a310 */
GEN_LIB GEN_FRAME unsigned int F_00e1a310(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1a310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  
  param_2[1] = 0;
  for (iVar1 = param_1; iVar1 != 0; iVar1 = *((int *)GEN_TOP((iVar1 + 4)))) {
    if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,4);
    }
    *((int *)GEN_TOP((*param_2 + param_2[1] * 4))) = iVar1;
    param_2[1] = param_2[1] + 1;
  }
  return;
}

/* ref: FUN_00e1a370 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1a370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1a370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114e61c));
  F_00dc14d0(((undefined *)GEN_TOP(((int)this + 0x50))) GEN_EDX_FWD);
  F_0105bc30(((undefined *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG);
  F_00e1b470(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG);
  uVar1 = F_00da3e20(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00e1a3b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1a3b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1a3b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x5, 11);
  int * this_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char * pcVar7;
  undefined8 * puVar8;
  uint * puVar9;
  
  uVar5 = F_00e19cd0(param_1 GEN_EDX_FWD);
  this_00 = ((int *)GEN_TOP(((int)this + 0x44)));
  uVar6 = F_0105bd60(this_00 GEN_EDX_ARG,uVar5);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x4c)));
  if (iVar1 < (int)uVar6) {
LAB_00e1a438: ;
    puVar8 = *((undefined8 * PTR32 *)GEN_TOP(((int)this + 0x50)));
    if (puVar8 == ((undefined8 *)GEN_TOP(0x0))) {
      puVar8 = *((undefined8 * PTR32 *)GEN_TOP(((int)this + 0x70)));
      if (puVar8 < *((undefined8 * PTR32 *)GEN_TOP(((int)this + 0x74)))) {
        *((int *)GEN_TOP(((int)this + 0x84))) = *((int *)GEN_TOP(((int)this + 0x84))) - 1;
        *((int *)GEN_TOP(((int)this + 0x70))) = *((int *)GEN_TOP(((int)this + 0x54))) + (int)puVar8;
      }
      else {
        puVar8 = ((undefined8 *)GEN_TOP(F_00dc1990(((undefined4 *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG)));
      }
    }
    else {
      *((int *)GEN_TOP(((int)this + 0x84))) = *((int *)GEN_TOP(((int)this + 0x84))) - 1;
      *((undefined4 *)GEN_TOP(((int)this + 0x50))) = *(undefined4 *)puVar8;
    }
    *puVar8 = *param_1;
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(param_1 + 1);
    F_0105bcf0(this_00 GEN_EDX_ARG,uVar5,puVar8);
    return (uint)puVar8;
  }
  iVar2 = *this_00;
LAB_00e1a3e5: ;
  uVar3 = *((uint *)GEN_TOP((iVar2 + 4 + uVar6 * 8)));
  pcVar7 = ((char *)GEN_TOP(F_00e19cf0(param_1 GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0x0)),uVar3)));
  if (*pcVar7 != '\0') {
    return uVar3;
  }
  uVar6 = uVar6 + 1;
  iVar4 = *((int *)GEN_TOP(((int)this + 0x4c)));
  do {
    if ((int)uVar6 <= iVar4) {
      puVar9 = ((uint *)GEN_TOP((iVar2 + uVar6 * 8)));
      do {
        if (*puVar9 == 0xffffffff) {
          uVar6 = iVar4 + 1;
LAB_00e1a42b: ;
          if (iVar1 < (int)uVar6) goto LAB_00e1a438;
          goto LAB_00e1a3e5;
        }
        if (*puVar9 == uVar5) goto LAB_00e1a42b;
        uVar6 = uVar6 + 1;
        puVar9 = puVar9 + 2;
      } while ((int)uVar6 <= iVar4);
    }
    uVar6 = 0;
  } while( true );
}

/* ref: FUN_00e1a4a0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e1a4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1a4a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 in_ecx;
  int * piVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  
  piVar2 = param_2;
  iVar3 = 0;
  param_2[1] = 0;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x4c)));
  if (-1 < iVar1) {
    piVar5 = *((int * PTR32 *)GEN_TOP(((int)this + 0x44)));
    do {
      if (*piVar5 != -1) break;
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 2;
    } while (iVar3 <= iVar1);
  }
  param_2 = ((int *)GEN_TOP(iVar3));
  if (iVar3 <= iVar1) {
    do {
      in_ecx = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x44))) + 4 + (int)((int)(uintptr_t)param_2) * 8)));
      uVar4 = F_00e19d40(in_ecx GEN_EDX_FWD);
      if (uVar4 == param_1) {
        if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar2,4);
        }
        *((undefined4 *)GEN_TOP((*piVar2 + piVar2[1] * 4))) = in_ecx;
        piVar2[1] = piVar2[1] + 1;
      }
      iVar1 = *((int *)GEN_TOP(((int)this + 0x4c)));
      iVar3 = (int)param_2 + 1;
      if (iVar3 <= iVar1) {
        piVar5 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x44))) + iVar3 * 8)));
        do {
          if (*piVar5 != -1) break;
          iVar3 = iVar3 + 1;
          piVar5 = piVar5 + 2;
        } while (iVar3 <= iVar1);
      }
      param_2 = ((int *)GEN_TOP(iVar3));
    } while (iVar3 <= iVar1);
  }
  return 0;
}

/* ref: FUN_00e1a550 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1a550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1a550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined * this_00;
  
  uVar1 = (*(undefined4 *)&gen_args[0]);
  uVar3 = F_00e1a1a0(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]));
  uVar2 = (*(undefined4 *)&gen_args[1]);
  uVar4 = uVar3;
  if ((uVar3 != 0) && (uVar4 = F_00e1a1a0(this GEN_EDX_ARG,(*(undefined4 *)&gen_args[1])), uVar4 == 0)) {
    this_00 = ((undefined *)GEN_TOP(((int)this + 0x34)));
    F_00e1b630(this_00 GEN_EDX_ARG,uVar1);
    uVar4 = F_00da3ae0(this_00 GEN_EDX_ARG,uVar2);
    F_00da3e40(this_00 GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[0]) + 3,uVar4);
    if ((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[0]) + 3)) == '\0') {
      uVar4 = F_00da0f10(uVar2,&REFG(undefined * PTR32, 0x13516ac));
      F_00da3a20(this_00 GEN_EDX_ARG,uVar4,uVar3);
      *((uint *)GEN_TOP((uVar3 + 8))) = uVar4;
      return uVar3;
    }
    uVar5 = F_00da3990(this_00 GEN_EDX_ARG,uVar4);
    F_00da39d0(this_00 GEN_EDX_ARG,uVar4,uVar3);
    *((uint *)GEN_TOP((uVar3 + 8))) = uVar5;
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00e1a5f0 */
GEN_LIB GEN_FRAME unsigned int F_00e1a5f0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xe1a5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  if ((param_3 != '\0') && (*param_1 == 0)) {
    if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_5,4);
    }
    *((int * PTR32 *)GEN_TOP((*param_5 + param_5[1] * 4))) = param_1;
    param_5[1] = param_5[1] + 1;
  }
  return;
}

/* ref: FUN_00e1a640 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1a640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1a640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 7;
  (*(undefined4 *)(gen_frame + 0x4)) = param_1;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00e1a3b0(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00e1a670 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1a670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1a670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 8;
  (*(undefined4 *)(gen_frame + 0x4)) = param_1;
  uVar1 = F_00e1a3b0(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00e1a6a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1a6a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1a6a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = param_1;
  (*(undefined4 *)(gen_frame + 0x0)) = 9;
  (*(undefined4 *)(gen_frame + 0x8)) = param_2;
  uVar1 = F_00e1a3b0(this GEN_EDX_FWD,&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00e1a6d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1a6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1a6d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  piVar3 = param_1;
  if (param_1[1] != param_2) {
    iVar1 = *param_1;
    if (iVar1 != 7) {
      if (iVar1 == 8) {
        uVar2 = F_00e1a670(this GEN_EDX_FWD,param_2);
        return uVar2;
      }
      if (iVar1 != 9) {
        return 0;
      }
      uVar2 = F_00e19c70(param_1 GEN_EDX_ARG);
      uVar2 = F_00e1a6a0(this GEN_EDX_ARG,param_2,uVar2);
      return uVar2;
    }
    piVar3 = ((int *)GEN_TOP(F_00e1a640(this GEN_EDX_ARG,param_2)));
  }
  return (uint)piVar3;
}

/* ref: FUN_00e1a730 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1a730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1a730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + param_1 * 4 + 0xc)));
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = F_00e1a670(this GEN_EDX_FWD,iVar1);
  return uVar2;
}

/* ref: FUN_00e1a750 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1a750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1a750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00e1a240(this GEN_EDX_FWD,param_1);
  uVar1 = F_00e1a640(this GEN_EDX_ARG,uVar1);
  return uVar1;
}

/* ref: FUN_00e1a770 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1a770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1a770u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar3 = F_00e19cd0(param_2 GEN_EDX_FWD);
  uVar4 = F_0105bd60(((int *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG,uVar3);
  if (*((int *)GEN_TOP(((int)this + 0x4c))) < (int)uVar4) {
LAB_00e1a7d6: ;
    *param_1 = 0;
    return (uint)param_1;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x44)));
LAB_00e1a7a0: ;
  if (*((undefined * PTR32 *)GEN_TOP((iVar1 + 4 + uVar4 * 8))) == param_2) {
    *param_1 = 1;
    return (uint)param_1;
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0x4c)));
  uVar4 = uVar4 + 1;
  do {
    if ((int)uVar4 <= iVar2) {
      puVar5 = ((uint *)GEN_TOP((iVar1 + uVar4 * 8)));
      do {
        if (*puVar5 == 0xffffffff) {
          uVar4 = iVar2 + 1;
LAB_00e1a7d1: ;
          if (*((int *)GEN_TOP(((int)this + 0x4c))) < (int)uVar4) goto LAB_00e1a7d6;
          goto LAB_00e1a7a0;
        }
        if (*puVar5 == uVar3) goto LAB_00e1a7d1;
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 2;
      } while ((int)uVar4 <= iVar2);
    }
    uVar4 = 0;
  } while( true );
}

/* ref: FUN_00e1a800 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1a800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1a800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x90, 0, 4);
  char * pcVar1;
  char * pcVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  char * pcVar6;
  int iVar7;
  
  switch((unsigned int)(uintptr_t)(*param_1)) {
  case 0x21: ;
    return *((uint *)GEN_TOP(((int)this + 0xc)));
  case 0x2a: ;
    uVar4 = F_00e1a800(this GEN_EDX_FWD,param_1 + 1);
    uVar4 = F_00e1a640(this GEN_EDX_ARG,uVar4);
    return uVar4;
  case 0x43: ;
    pcVar1 = param_1 + 1;
    for (pcVar6 = pcVar1;
        ((((cVar3 = *pcVar6, '`' < cVar3 && (cVar3 < '{')) || (('@' < cVar3 && (cVar3 < '[')))) ||
         (('/' < cVar3 && (cVar3 < ':')))) || ((cVar3 == '_' || (cVar3 == ':'))));
        pcVar6 = pcVar6 + 1) {
    }
    iVar7 = (int)pcVar6 - (int)pcVar1;
    if (((0 < iVar7) && (iVar7 < 0x80)) && (*pcVar6 == ';')) {
      F_00da0e40(((undefined1 *)(gen_frame + 0x0)),pcVar1,iVar7);
      ((undefined1 *)(gen_frame + 0x0))[(int)(iVar7)] = 0;
      uVar4 = F_00e1a240(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      return uVar4;
    }
    break;
  case 0x5b: ;
    uVar4 = F_00e1a800(this GEN_EDX_ARG,param_1 + 2);
    uVar4 = F_00e1a670(this GEN_EDX_ARG,uVar4);
    return uVar4;
  case 0x62: ;
    return *((uint *)GEN_TOP(((int)this + 0x14)));
  case 0x69: ;
    return *((uint *)GEN_TOP(((int)this + 0x1c)));
  case 0x72: ;
    return *((uint *)GEN_TOP(((int)this + 0x18)));
  case 0x73: ;
    return *((uint *)GEN_TOP(((int)this + 0x20)));
  case 0x76: ;
    return *((uint *)GEN_TOP(((int)this + 0x10)));
  case 0x7b: ;
    pcVar1 = param_1 + 1;
    cVar3 = *pcVar1;
    pcVar6 = pcVar1;
    while (('/' < cVar3 && (cVar3 < ':'))) {
      pcVar2 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
      cVar3 = *pcVar2;
    }
    iVar7 = (int)pcVar6 - (int)pcVar1;
    if (((0 < iVar7) && (iVar7 < 10)) && (*pcVar6 == '}')) {
      F_00da0e40(((undefined1 *)(gen_frame + 0x80)),pcVar1,iVar7);
      ((undefined1 *)(gen_frame + 0x80))[(int)(iVar7)] = 0;
      uVar4 = F_00da0e80(((undefined1 *)(gen_frame + 0x80)),0);
      uVar5 = F_00e1a800(this GEN_EDX_ARG,pcVar6 + 1);
      uVar4 = F_00e1a6a0(this GEN_EDX_ARG,uVar5,uVar4);
      return uVar4;
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00e1aa20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1aa20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe1aa20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)(param_1 & 0xf)) {
  case 0: ;
    uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
    break;
  case 1: ;
    uVar1 = *((uint *)GEN_TOP(((int)this + 0x14)));
    break;
  case 2: ;
    uVar1 = *((uint *)GEN_TOP(((int)this + 0x1c)));
    break;
  case 3: ;
    uVar1 = *((uint *)GEN_TOP(((int)this + 0x18)));
    break;
  case 4: ;
    uVar1 = F_00e1a6a0(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0x18))),4);
    break;
  case 5: ;
    uVar1 = F_00e1a6a0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x18))),8);
    break;
  case 6: ;
    uVar1 = F_00e1a6a0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x18))),0xc);
    break;
  case 7: ;
    uVar1 = F_00e1a6a0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x18))),0x10);
    break;
  case 8: ;
    if (param_2 == 0) {
      uVar1 = F_00e1a640(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 8))));
    }
    else {
      uVar1 = F_00e1a240(this GEN_EDX_ARG,param_2);
      uVar1 = F_00e1a640(this GEN_EDX_ARG,uVar1);
    }
    break;
  case 9: ;
    if (param_2 == 0) {
      uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
    }
    else {
      uVar1 = F_00e1a240(this GEN_EDX_ARG,param_2);
    }
    break;
  case 10: ;
    uVar1 = *((uint *)GEN_TOP(((int)this + 0x20)));
    break;
  default: ;
    goto switchD_00e1aa38_default;
  }
  if (uVar1 != 0) {
    if ((param_1 & 0x10) == 0) {
      if ((param_1 & 0x20) != 0) {
        uVar1 = F_00e1a6a0(this GEN_EDX_ARG,uVar1,param_3);
      }
      return uVar1;
    }
    uVar1 = F_00e1a670(this GEN_EDX_ARG,uVar1);
    return uVar1;
  }
switchD_00e1aa38_default: ;
  return 0;
}

/* ref: FUN_00e1ab30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1ab30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1ab30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0x80000000;
  F_00da04b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,&(*(int *)(gen_frame + 0xc)));
  F_00e19e60(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  if ((*(uint *)(gen_frame + 0x10)) == ((*(uint *)(gen_frame + 0x14)) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0xc)),1);
  }
  *((undefined1 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + (*(uint *)(gen_frame + 0x10))))) = 0;
  (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
  F_00d91480(param_1 GEN_EDX_ARG,(*(int *)(gen_frame + 0xc)));
  F_00d9fda0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x10)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) & 0x3fffffff);
  }
  return (uint)param_1;
}

/* ref: FUN_00e1abe0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1abe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1abe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  
  ((int *)(gen_frame + 0x0))[1] = 0;
  ((int *)(gen_frame + 0x0))[2] = 0;
  ((int *)(gen_frame + 0x0))[0] = param_1;
  uVar1 = F_00e1a3b0(this GEN_EDX_FWD,((int *)(gen_frame + 0x0)));
  *((uint *)GEN_TOP(((int)this + param_1 * 4 + 0xc))) = uVar1;
  return uVar1;
}

/* ref: FUN_00e1ac10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1ac10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe1ac10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  undefined * this_00;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 extraout_ECX = 0;
  int iVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  (*(uint *)&gen_args[0]) = F_00e19c80((*(uint *)&gen_args[0]) GEN_EDX_FWD);
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0x80000000;
  F_00e1a4a0(this GEN_EDX_ARG,extraout_ECX,&(*(int *)(gen_frame + 0xc)));
  uVar2 = (*(uint *)(gen_frame + 0x10));
  (*(int *)(gen_frame + 0x8)) = ((int)0x80000000);
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  if (0 < (int)(*(uint *)(gen_frame + 0x10))) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x10)) & ((int)(*(uint *)(gen_frame + 0x10)) < 0) - 1,4);
  }
  (*(uint *)(gen_frame + 0x4)) = uVar2;
  iVar4 = 0;
  if (0 < (int)(*(uint *)(gen_frame + 0x10))) {
    do {
      uVar2 = F_00e19cd0(*((undefined * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + iVar4 * 4))) GEN_EDX_ARG);
      *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + iVar4 * 4))) = uVar2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(*(uint *)(gen_frame + 0x10)));
  }
  iVar4 = 0;
  if (0 < (int)(*(uint *)(gen_frame + 0x10))) {
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + iVar4 * 4)));
      F_0105cc90(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x44))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + iVar4 * 4))),puVar1);
      iVar4 = iVar4 + 1;
      *puVar1 = 0;
      puVar1[1] = 0;
      this = (*(undefined * PTR32 *)(gen_frame + 0x18));
    } while (iVar4 < (int)(*(uint *)(gen_frame + 0x10)));
  }
  this_00 = ((undefined *)GEN_TOP(((int)this + 0x34)));
  uVar2 = F_00da3ae0(this_00 GEN_EDX_ARG,(*(uint *)&gen_args[0]));
  F_00da3e40(this_00 GEN_EDX_ARG,(int)&(*(uint *)&gen_args[0]) + 3,uVar2);
  if ((*(undefined1 *)((char *)&(*(uint *)&gen_args[0]) + 3)) != '\0') {
    uVar3 = F_00da3990(this_00 GEN_EDX_ARG,uVar2);
    F_00da0f40(uVar3,&REFG(undefined * PTR32, 0x13516ac));
    F_00da3b70(this_00 GEN_EDX_ARG,uVar2);
  }
  (*(uint *)(gen_frame + 0x4)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x8)) * 4);
  }
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0x80000000;
  uVar2 = (*(uint *)(gen_frame + 0x14));
  if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) * 4);
  }
  return uVar2;
}

/* ref: FUN_00e1ad70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1ad70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1ad70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined4 * this_00;
  undefined4 * puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  this_00 = ((undefined4 *)GEN_TOP(((int)this + 0x50)));
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  F_00dc18d0(this_00 GEN_EDX_FWD,((code *)REFP(0xe1a5f0)),0,&(*(int *)(gen_frame + 0x0)));
  iVar3 = 0;
  if (0 < (*(int *)(gen_frame + 0x4))) {
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + iVar3 * 4)));
      uVar2 = *this_00;
      *((int *)GEN_TOP(((int)this + 0x84))) = *((int *)GEN_TOP(((int)this + 0x84))) + 1;
      *puVar1 = uVar2;
      iVar3 = iVar3 + 1;
      *this_00 = puVar1;
    } while (iVar3 < (*(int *)(gen_frame + 0x4)));
  }
  F_00dc17f0(this_00 GEN_EDX_ARG);
  F_00dc1690(this_00 GEN_EDX_ARG);
  (*(int *)(gen_frame + 0x4)) = 0;
  uVar4 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
  }
  return uVar4;
}

/* ref: FUN_00e1ae10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1ae10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1ae10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * this_00;
  uint uVar1;
  undefined4 * puVar2;
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114e61c));
  F_00da3de0(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_FWD,local_8);
  F_0105cae0(((undefined *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG);
  F_00dc1c00(((undefined *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG,0xc,4,0x800,0,0);
  F_00da1030((int)this + 0xc,0,0x28);
  F_00e1abe0(this GEN_EDX_ARG,1);
  F_00e1abe0(this GEN_EDX_ARG,4);
  F_00e1abe0(this GEN_EDX_ARG,3);
  F_00e1abe0(this GEN_EDX_ARG,5);
  F_00e1abe0(this GEN_EDX_ARG,2);
  this_00 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x50)));
  if (this_00 == ((undefined4 *)GEN_TOP(0x0))) {
    this_00 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x70)));
    if (this_00 < *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x74)))) {
      *((int *)GEN_TOP(((int)this + 0x84))) = *((int *)GEN_TOP(((int)this + 0x84))) - 1;
      *((int *)GEN_TOP(((int)this + 0x70))) = *((int *)GEN_TOP(((int)this + 0x54))) + (int)this_00;
    }
    else {
      this_00 = ((undefined4 *)GEN_TOP(F_00dc1990(((undefined *)GEN_TOP(((int)this + 0x50))) GEN_EDX_ARG)));
    }
  }
  else {
    *((int *)GEN_TOP(((int)this + 0x84))) = *((int *)GEN_TOP(((int)this + 0x84))) - 1;
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = *this_00;
  }
  *this_00 = 6;
  this_00[1] = 0;
  this_00[2] = 0;
  puVar2 = this_00;
  uVar1 = F_00e19cd0(this_00 GEN_EDX_ARG);
  F_0105bcf0(((undefined *)GEN_TOP(((int)this + 0x44))) GEN_EDX_ARG,uVar1,puVar2);
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = this_00;
  return (uint)this;
}

/* ref: FUN_00e1af00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1af00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1af00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_FRAME_DECL_TOP(0x50, 0, 4);
  undefined4 uVar1;
  code * pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000010;
  uVar5 = param_1;
  do {
    if ((*(uint *)(gen_frame + 0x4)) == ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),4);
    }
    uVar6 = (*(uint *)(gen_frame + 0x4));
    *(uint *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + (*(uint *)(gen_frame + 0x4)) * 4) = uVar5;
    uVar3 = (*(uint *)(gen_frame + 0x4)) + 1;
    (*(uint *)(gen_frame + 0x4)) = uVar3;
    uVar5 = *((uint *)GEN_TOP((uVar5 + 4)));
  } while (uVar5 != 0);
  uVar4 = param_2;
  if (*(uint *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + uVar3 * 4 - 4) != param_2) {
    for (; -1 < (int)uVar6; uVar6 = uVar6 - 1) {
      uVar1 = *(undefined4 *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + uVar6 * 4);
      uVar4 = F_00e1a6d0(this GEN_EDX_ARG,uVar1,uVar4);
    }
    (*(uint *)(gen_frame + 0x4)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
      pcVar2 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10)));
      (*pcVar2)(&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
    }
    return uVar4;
  }
  (*(uint *)(gen_frame + 0x4)) = uVar5;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
  }
  return param_1;
}

/* ref: FUN_00e1aff0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1aff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe1aff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x50, 0, 4);
  undefined4 uVar1;
  code * pcVar2;
  char * pcVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = (*(uint *)&gen_args[0]);
  pcVar3 = ((char *)GEN_TOP(F_00e1a770(this GEN_EDX_FWD,(int)&(*(uint *)&gen_args[0]) + 3,(*(uint *)&gen_args[0]))));
  if (*pcVar3 != '\0') {
    return uVar4;
  }
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(int *)(gen_frame + 0x8)) = -0x7ffffff0;
  F_00e1a310(uVar4,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
  iVar5 = **(int * PTR32 *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + (*(int *)(gen_frame + 0x4)) * 4 - 4);
  if (iVar5 == 6) {
    uVar4 = F_00e19c80(*(int * PTR32 *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + (*(int *)(gen_frame + 0x4)) * 4 - 4) GEN_EDX_ARG);
    uVar4 = F_00e1a240(this GEN_EDX_ARG,uVar4);
  }
  else {
    uVar4 = *((uint *)GEN_TOP(((int)this + iVar5 * 4 + 0xc)));
  }
  if (uVar4 == 0) {
    (*(int *)(gen_frame + 0x4)) = 0;
    if (-1 < (*(int *)(gen_frame + 0x8))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x8)) * 4);
    }
    return 0;
  }
  for (iVar5 = (*(int *)(gen_frame + 0x4)) - 2; -1 < iVar5; iVar5 = iVar5 - 1) {
    uVar1 = *(undefined4 *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + iVar5 * 4);
    uVar4 = F_00e1a6d0(this GEN_EDX_ARG,uVar1,uVar4);
  }
  (*(int *)(gen_frame + 0x4)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x8))) {
    pcVar2 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10)));
    (*pcVar2)(&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x8)) * 4);
  }
  return uVar4;
}

/* ref: FUN_00e1b110 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1b110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this GEN_EDX_FWD,local_8);
  return (uint)this;
}

/* ref: FUN_00e1b130 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1b130u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da4190(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e1b140 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1b140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1b140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_0105cae0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e1b150 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e1b150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1b150u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_0105bcf0(this GEN_EDX_FWD,param_1,param_2);
  return;
}

/* ref: FUN_00e1b160 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_0105bd60(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00e1b170 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1b170u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_0105cc90(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e1b180 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1b180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da3a20(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e1b190 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da3ae0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00e1b1a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b1a0(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b1a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da3990(in_ecx GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: FUN_00e1b1b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b1b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1b1b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da39d0(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e1b1c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b1c0(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe1b1c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  F_00da3e40(in_ecx GEN_EDX_FWD,param_2,param_3);
  return param_2;
}

/* ref: FUN_00e1b1e0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e1b1e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b1e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00da3b70(this GEN_EDX_FWD,param_1);
  return;
}

/* ref: FUN_00e1b200 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da39f0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00e1b220 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b220(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + 4 + param_2 * 8)));
}

/* ref: FUN_00e1b230 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b230(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe1b230u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = param_3 <= *((int *)GEN_TOP((in_ecx + 8)));
  return param_2;
}

/* ref: FUN_00e1b280 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b280(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e1b2b0 */
GEN_LIB GEN_FRAME byte F_00e1b2b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1b2b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 != -1;
}

/* ref: FUN_00e1b2c0 */
GEN_LIB GEN_FRAME byte F_00e1b2c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b2c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_1 == param_2;
}

/* ref: FUN_00e1b2d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe1b2d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00e1b310 */
GEN_LIB GEN_FRAME unsigned int F_00e1b310(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe1b310u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e1b340 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1b340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e1b360 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1b360u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this GEN_EDX_FWD,local_8);
  return (uint)this;
}

/* ref: FUN_00e1b380 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1b380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (*(undefined4 *)&gen_args[0]);
  uVar2 = F_00da3ae0(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]));
  F_00da3e40(this GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[0]) + 3,uVar2);
  if ((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[0]) + 3)) == '\0') {
    uVar2 = F_00da0f10(uVar1,&REFG(undefined * PTR32, 0x13516ac));
    F_00da3a20(this GEN_EDX_ARG,uVar2,(*(undefined4 *)&gen_args[1]));
    return uVar2;
  }
  uVar3 = F_00da3990(this GEN_EDX_ARG,uVar2);
  F_00da39d0(this GEN_EDX_ARG,uVar2,(*(undefined4 *)&gen_args[1]));
  return uVar3;
}

/* ref: FUN_00e1b3f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b3f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b3f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + 4 + param_2 * 8)));
}

/* ref: FUN_00e1b400 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b400(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe1b400u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = param_3 <= *((int *)GEN_TOP((in_ecx + 8)));
  return param_2;
}

/* ref: FUN_00e1b440 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e1b440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da3990(this GEN_EDX_FWD,param_1);
  F_00da0f40(uVar1,&REFG(undefined * PTR32, 0x13516ac));
  F_00da3b70(this GEN_EDX_ARG,param_1);
  return;
}

/* ref: FUN_00e1b470 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e1b470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1b470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar2 = F_00da3970(this GEN_EDX_FWD);
  F_00da3e40(this GEN_EDX_ARG,(int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3,uVar2);
  cVar1 = (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3));
  while (cVar1 != '\0') {
    uVar3 = F_00da3990(this GEN_EDX_ARG,uVar2);
    F_00da0f40(uVar3,&REFG(undefined * PTR32, 0x13516ac));
    uVar2 = F_00da39f0(this GEN_EDX_ARG,uVar2);
    F_00da3e40(this GEN_EDX_ARG,(int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3,uVar2);
    cVar1 = (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3));
  }
  F_00da3cd0(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_00e1b4f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1b4f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  uVar2 = param_1 + 1;
  do {
    if ((int)uVar2 <= iVar1) {
      piVar3 = ((int *)GEN_TOP((*(int *)this + uVar2 * 8)));
      do {
        if (*piVar3 == -1) {
          return iVar1 + 1;
        }
        if (*piVar3 == param_2) {
          return uVar2;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 2;
      } while ((int)uVar2 <= iVar1);
    }
    uVar2 = 0;
  } while( true );
}

/* ref: FUN_00e1b540 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e1b540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    piVar2 = ((int *)GEN_TOP((*(int *)this + iVar1 * 8)));
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 <= *((int *)GEN_TOP(((int)this + 8))));
  }
  return 0;
}

/* ref: FUN_00e1b580 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1b580u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e1b5c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b5c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe1b5c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00e1b5e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b5e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e1b620 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1b620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1b620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00e1b470(this GEN_EDX_FWD);
  uVar1 = F_00da3e20(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00e1b630 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00da3ae0(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]));
  F_00da3e40(this GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[0]) + 3,uVar1);
  if ((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[0]) + 3)) != '\0') {
    uVar2 = F_00da3990(this GEN_EDX_ARG,uVar1);
    F_00da0f40(uVar2,&REFG(undefined * PTR32, 0x13516ac));
    F_00da3b70(this GEN_EDX_ARG,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_00e1b6b0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e1b6b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b6b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    piVar2 = ((int *)GEN_TOP((*(int *)this + iVar1 * 8)));
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 <= *((int *)GEN_TOP(((int)this + 8))));
  }
  return 0;
}

/* ref: FUN_00e1b6e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1b6e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  uVar2 = param_1 + 1;
  do {
    if ((int)uVar2 <= iVar1) {
      piVar3 = ((int *)GEN_TOP((*(int *)this + uVar2 * 8)));
      do {
        if (*piVar3 == -1) {
          return iVar1 + 1;
        }
        if (*piVar3 == param_2) {
          return uVar2;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 2;
      } while ((int)uVar2 <= iVar1);
    }
    uVar2 = 0;
  } while( true );
}

/* ref: FUN_00e1b730 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b730u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e1b770 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1b770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1b770u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e1b7b0 */
GEN_LIB GEN_FRAME uint F_00e1b7b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1b7b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00e1b7e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1b7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1b7e0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e1b820 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(int *)this = (int)this + 0xc;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000010;
  return (uint)this;
}

/* ref: hkTypeManager::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b840(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00e1a370(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00e1b880 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1b880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1b880u, gen_a0, 0u, 0u, 0u);
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

/* ref: hkStaticClassNameRegistry::vf3 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1b8c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1b8c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 8)));
}

/* ref: FUN_00e1b8d0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e1b8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1b8d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((int *)GEN_TOP(((int)this + 0x14))) == 0) {
    F_00e05570(*((undefined4 *)GEN_TOP(((int)this + 0xc))),*((undefined4 *)GEN_TOP(((int)this + 0x10))));
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 1;
  }
  return;
}

/* ref: FUN_00e1b900 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe1b900u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x114e62c));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_3;
  return (uint)this;
}

/* ref: hkStaticClassNameRegistry::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  F_00e1b8d0(this GEN_EDX_FWD);
  piVar1 = *(int * PTR32 *)(this + 0xc);
  iVar4 = 0;
  if (*piVar1 != 0) {
    iVar3 = 0;
    do {
      uVar2 = F_00d92610(*((undefined4 *)GEN_TOP(((int)piVar1 + iVar3))) GEN_EDX_ARG);
      uVar2 = F_00da0d20(param_1,uVar2);
      piVar1 = *(int * PTR32 *)(this + 0xc);
      if (uVar2 == 0) {
        return piVar1[iVar4];
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar4 * 4;
    } while (piVar1[iVar4] != 0);
  }
  return 0;
}

/* ref: FUN_00e1b9a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1b9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe1b9a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x114e62c));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_3;
  return (uint)this;
}

/* ref: hkStaticClassNameRegistry::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e1b9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1b9e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  
  F_00e1b8d0(this GEN_EDX_FWD);
  piVar4 = *(int * PTR32 *)(this + 0xc);
  iVar5 = 0;
  iVar1 = *piVar4;
  while (iVar1 != 0) {
    piVar4 = piVar4 + 1;
    iVar5 = iVar5 + 1;
    iVar1 = *piVar4;
  }
  iVar2 = param_1[1];
  iVar1 = iVar2 + iVar5;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_1,iVar3,4);
  }
  param_1[1] = param_1[1] + iVar5;
  iVar1 = *param_1;
  piVar4 = *(int * PTR32 *)(this + 0xc);
  iVar5 = 0;
  if (*piVar4 != 0) {
    iVar3 = 0;
    do {
      *((int *)GEN_TOP((iVar3 + iVar1 + iVar2 * 4))) = *piVar4;
      iVar5 = iVar5 + 1;
      iVar3 = iVar5 * 4;
      piVar4 = ((int *)GEN_TOP((*(int *)(this + 0xc) + iVar3)));
    } while (*piVar4 != 0);
  }
  return 0;
}

/* ref: FUN_00e1ba70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1ba70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1ba70u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e1bab0 */
GEN_LIB GEN_FRAME uint F_00e1bab0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1bab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkStaticClassNameRegistry::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1bae0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1bae0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e1bb20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1bb20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1bb20u, gen_a0, gen_a1, gen_a2, 0u);
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
    F_00d95690(param_1,this,iVar4,4);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + param_2;
  return *(int *)this + iVar2 * 4;
}

/* ref: FUN_00e1bb70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1bb70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1bb70u, gen_a0, gen_a1, 0u, 0u);
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
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar4,4);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  return *(int *)this + iVar2 * 4;
}

/* ref: FUN_00e1bbf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1bbf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1bbf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  if (param_1 <= (int)((*((int *)GEN_TOP(((int)this + 0x18))) - uVar1) + *((int *)GEN_TOP(((int)this + 0x14))))) {
    uVar1 = uVar1 + param_1;
    *((uint *)GEN_TOP(((int)this + 0x10))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00e1bc10 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e1bc10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1bc10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char * pcVar1;
  
  for (pcVar1 = ((char *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 0x14))))));
      pcVar1 < *((char * PTR32 *)GEN_TOP(((int)this + 0x10))); pcVar1 = pcVar1 + 1) {
    if ((*pcVar1 == '\r') || (*pcVar1 == '\n')) {
      *((int *)GEN_TOP(((int)this + 0x24))) = *((int *)GEN_TOP(((int)this + 0x24))) + 1;
      *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
    }
  }
  *((int *)GEN_TOP(((int)this + 0xc))) = (int)*((char * PTR32 *)GEN_TOP(((int)this + 0x10))) - *((int *)GEN_TOP(((int)this + 0x14)));
  return 0;
}

/* ref: FUN_00e1bc60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1bc60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1bc60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP((in_ecx + 0x14))) + *((int *)GEN_TOP((in_ecx + 0xc))) + param_2;
  *((uint *)GEN_TOP((in_ecx + 0x10))) = uVar1;
  return uVar1;
}

/* ref: FUN_00e1bc80 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e1bc80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1bc80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0xc)));
  *((int *)GEN_TOP(((int)this + 8))) = iVar1;
  if (0x400 < iVar1) {
    F_00da1020(*((int *)GEN_TOP(((int)this + 0x14))),iVar1 + *((int *)GEN_TOP(((int)this + 0x14))),
                 *((int *)GEN_TOP(((int)this + 0x18))) - iVar1);
    iVar1 = *((int *)GEN_TOP(((int)this + 0x18))) - *((int *)GEN_TOP(((int)this + 8)));
    *((int *)GEN_TOP(((int)this + 0x18))) = iVar1;
    *((undefined1 *)GEN_TOP((iVar1 + *((int *)GEN_TOP(((int)this + 0x14)))))) = 0;
    *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) - *((int *)GEN_TOP(((int)this + 8)));
    *((int *)GEN_TOP(((int)this + 0xc))) = *((int *)GEN_TOP(((int)this + 0xc))) - *((int *)GEN_TOP(((int)this + 8)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  return;
}

/* ref: FUN_00e1bcd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1bcd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1bcd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114e648));
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x14)));
  *puVar1 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0x80000000;
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x20))) = param_1;
  F_00d919e0(param_1 GEN_EDX_FWD);
  if ((*((uint *)GEN_TOP(((int)this + 0x1c))) & 0x3fffffff) == 0) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),puVar1,1,1);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 1;
  *((undefined1 *)GEN_TOP(*puVar1)) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *puVar1;
  return (uint)this;
}

/* ref: FUN_00e1bd60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1bd60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1bd60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  uint uVar1;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x20)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114e648));
  F_00d91a80(this_00 GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x1c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x14))),uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00e1bdb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1bdb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1bdb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if (param_1 < 0x100) {
    param_1 = 0x100;
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 0x14)));
  iVar4 = *((int *)GEN_TOP(((int)this + 0x18)));
  iVar5 = *((int *)GEN_TOP(((int)this + 0x18)));
  piVar1 = ((int *)GEN_TOP(((int)this + 0x14)));
  iVar2 = iVar4 + param_1 + 1;
  uVar6 = *((uint *)GEN_TOP(((int)this + 0x1c))) & 0x3fffffff;
  if ((int)uVar6 < iVar2) {
    iVar7 = uVar6 * 2;
    if (iVar7 <= iVar2) {
      iVar7 = iVar2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar1,iVar7,1);
  }
  *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) + param_1 + 1;
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x20))) + 0x10))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG,*piVar1 + iVar4,param_1);
  *((undefined1 *)GEN_TOP((*piVar1 + uVar6 + iVar5))) = 0;
  *((uint *)GEN_TOP(((int)this + 0x18))) = uVar6 + iVar5;
  if (*piVar1 != iVar3) {
    *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + (*piVar1 - iVar3);
  }
  return (uVar6 + iVar5) - iVar5;
}

/* ref: FUN_00e1be60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1be60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe1be60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 0x10)));
  iVar1 = (*((int *)GEN_TOP(((int)this + 0x18))) - iVar3) + *((int *)GEN_TOP(((int)this + 0x14)));
  if (iVar1 < param_3) {
    F_00e1bdb0(this GEN_EDX_FWD,param_3 - iVar1);
    iVar3 = *((int *)GEN_TOP(((int)this + 0x10)));
    if ((*((int *)GEN_TOP(((int)this + 0x18))) - iVar3) + *((int *)GEN_TOP(((int)this + 0x14))) < param_3) {
      *param_1 = 0;
      return (uint)param_1;
    }
  }
  uVar2 = F_00da0d60(iVar3,param_2,param_3);
  *param_1 = uVar2 == 0;
  return (uint)param_1;
}

/* ref: FUN_00e1bec0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1bec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1bec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da0e60(param_2);
  F_00e1be60(this GEN_EDX_ARG,param_1,param_2,uVar1);
  return param_1;
}

/* ref: FUN_00e1bef0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1bef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1bef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  undefined4 uVar1;
  uint uVar2;
  char * pcVar3;
  
  uVar1 = (*(undefined4 *)&gen_args[1]);
  uVar2 = F_00da0e60((*(undefined4 *)&gen_args[1]));
  pcVar3 = ((char *)GEN_TOP(F_00e1be60(this GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[1]) + 3,uVar1,uVar2)));
  if (*pcVar3 != '\0') {
    if ((int)uVar2 <=
        (*((int *)GEN_TOP(((int)this + 0x18))) - *((int *)GEN_TOP(((int)this + 0x10)))) + *((int *)GEN_TOP(((int)this + 0x14)))) {
      *((uint *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + uVar2;
    }
    *(*(undefined1 * PTR32 *)&gen_args[0]) = 1;
    return (uint)(*(undefined1 * PTR32 *)&gen_args[0]);
  }
  *(*(undefined1 * PTR32 *)&gen_args[0]) = 0;
  return (uint)(*(undefined1 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00e1bf50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1bf50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1bf50u, gen_a0, gen_a1, 0u, 0u);
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
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar4,1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + param_1;
  return *(int *)this + iVar2;
}

/* ref: FUN_00e1bfa0 */
GEN_LIB GEN_FRAME uint F_00e1bfa0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1bfa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00e1bfd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1bfd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1bfd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = (*((int *)GEN_TOP(((int)this + 0x18))) - *((int *)GEN_TOP(((int)this + 0x10)))) + *((int *)GEN_TOP(((int)this + 0x14)));
  if ((int)uVar1 < param_1) {
    F_00e1bdb0(this GEN_EDX_FWD,param_1 - uVar1);
    uVar1 = (*((int *)GEN_TOP(((int)this + 0x18))) - *((int *)GEN_TOP(((int)this + 0x10)))) + *((int *)GEN_TOP(((int)this + 0x14)));
  }
  return uVar1;
}

/* ref: hkParserBuffer::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1c000(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1c000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00e1bd60(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00e1c040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1c040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1c040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_00e1c060 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1c060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1c060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  uVar1 = param_1[1];
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  return uVar1;
}

/* ref: FUN_00e1c0c0 */
GEN_LIB GEN_FRAME uint F_00e1c0c0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1c0c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  *((bool *)GEN_TOP(param_1)) = (byte)(param_2 - 0x30U) < 10;
  return param_1;
}

/* ref: FUN_00e1c0f0 */
GEN_LIB GEN_FRAME uint F_00e1c0f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(ulonglong * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1c0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(ulonglong * param_2 = (ulonglong *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  char cVar1;
  char * pcVar2;
  char * pcVar3;
  char * pcVar4;
  ulonglong uVar5;
  
  pcVar2 = ((char *)GEN_TOP(*param_1));
  pcVar3 = ((char *)GEN_TOP(param_1[1]));
  if (pcVar3 != pcVar2 && -1 < (int)pcVar3 - (int)pcVar2) {
    pcVar4 = pcVar2;
    if (*pcVar2 == '-') {
      pcVar4 = pcVar2 + 1;
    }
    if (pcVar4 < pcVar3) {
      cVar1 = *pcVar4;
      while ((byte)(cVar1 - 0x30U) < 10) {
        pcVar4 = pcVar4 + 1;
        if (pcVar3 <= pcVar4) {
          F_00da0e40(((undefined1 *)(gen_frame + 0x0)),pcVar2,(int)pcVar3 - (int)pcVar2);
          ((undefined1 *)(gen_frame + 0x0))[(int)((int)pcVar3 - (int)pcVar2)] = 0;
          uVar5 = F_00da0ea0(((undefined1 *)(gen_frame + 0x0)),0);
          *param_2 = uVar5;
          return 0;
        }
        cVar1 = *pcVar4;
      }
    }
  }
  return 1;
}

/* ref: FUN_00e1c170 */
GEN_LIB GEN_FRAME uint F_00e1c170(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1c170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  char cVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  pcVar2 = *((char * PTR32 *)GEN_TOP(param_1));
  iVar3 = *((int *)GEN_TOP((param_1 + 4))) - (int)pcVar2;
  if ((0 < iVar3) && (iVar3 < 0x21)) {
    if (*pcVar2 != 'x') {
      uVar5 = F_00e1df40(param_1,param_2);
      return uVar5;
    }
    if (iVar3 == 9) {
      uVar5 = 0;
      iVar3 = 0;
      do {
        cVar1 = pcVar2[iVar3 + 1];
        if ((byte)(cVar1 - 0x30U) < 10) {
          uVar4 = (int)cVar1 - 0x30;
        }
        else if ((byte)(cVar1 + 0xbfU) < 6) {
          uVar4 = (int)cVar1 - 0x37;
        }
        else {
          if (5 < (byte)(cVar1 + 0x9fU)) {
            return 1;
          }
          uVar4 = (int)cVar1 - 0x57;
        }
        iVar3 = iVar3 + 1;
        uVar5 = uVar5 << 4 | uVar4;
      } while (iVar3 < 8);
      *param_2 = uVar5;
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00e1c210 */
GEN_LIB GEN_FRAME uint F_00e1c210(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1c210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  char * pcVar1;
  
  pcVar1 = ((char *)GEN_TOP(*param_2));
  while( true ) {
    if (((char *)GEN_TOP(param_2[1])) <= pcVar1) {
      *param_1 = 0;
      return (uint)param_1;
    }
    if (*pcVar1 == '&') break;
    pcVar1 = pcVar1 + 1;
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00e1c240 */
GEN_LIB GEN_FRAME uint F_00e1c240(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1c240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x16, 10, 4);
  char * pcVar1;
  char * pcVar2;
  char * pcVar3;
  uint uVar4;
  int iVar5;
  
  F_00da4850(param_2 GEN_EDX_ARG);
  pcVar1 = ((char *)GEN_TOP(param_1[1]));
  pcVar3 = ((char *)GEN_TOP(*param_1));
joined_r0x00e1c25e: ;
  do {
    while( true ) {
      if (pcVar1 <= pcVar3) {
        return 0;
      }
      pcVar2 = pcVar3;
      if (*pcVar3 == '&') break;
      do {
        pcVar2 = pcVar2 + 1;
        if (pcVar1 <= pcVar2) break;
      } while (*pcVar2 != '&');
      F_00da4bf0(param_2 GEN_EDX_ARG,pcVar3,(int)pcVar2 - (int)pcVar3);
      pcVar3 = pcVar2;
    }
    iVar5 = (int)pcVar1 - (int)pcVar3;
    if ((iVar5 < 5) || (uVar4 = F_00da0d60(pcVar3 + 1,&REFG(undefined, 0x114e66c),4), uVar4 != 0)) {
      if (3 < iVar5) {
        uVar4 = F_00da0d60(pcVar3 + 1,&REFG(undefined, 0x114e668),3);
        if (uVar4 == 0) {
          F_00da4bf0(param_2 GEN_EDX_ARG,&REFG(undefined, 0x1126164),1);
          pcVar3 = pcVar3 + 4;
          goto joined_r0x00e1c25e;
        }
        uVar4 = F_00da0d60(pcVar3 + 1,&REFG(undefined, 0x114e664),3);
        if (uVar4 == 0) {
          F_00da4bf0(param_2 GEN_EDX_ARG,&REFG(undefined, 0x112615c),1);
          pcVar3 = pcVar3 + 4;
          goto joined_r0x00e1c25e;
        }
      }
      if (5 < iVar5) {
        uVar4 = F_00da0d60(pcVar3 + 1,((char *)REFP(0x114e65c)),5);
        if (uVar4 == 0) {
          F_00da4bf0(param_2 GEN_EDX_ARG,&REFG(undefined, 0x114b548),1);
          pcVar3 = pcVar3 + 6;
          goto joined_r0x00e1c25e;
        }
        uVar4 = F_00da0d60(pcVar3 + 1,((char *)REFP(0x114e654)),5);
        if (uVar4 == 0) {
          F_00da4bf0(param_2 GEN_EDX_ARG,&REFG(undefined, 0x11264a4),1);
          pcVar3 = pcVar3 + 6;
          goto joined_r0x00e1c25e;
        }
      }
      if (((pcVar3[1] != '#') || (9 < (byte)(pcVar3[2] - 0x30U))) ||
         (pcVar2 = pcVar3 + 2, iVar5 < 4)) {
        return 1;
      }
      while( true ) {
        if (pcVar1 <= pcVar2) {
          return 1;
        }
        if (9 < (byte)(*pcVar2 - 0x30U)) break;
        pcVar2 = pcVar2 + 1;
      }
      if (pcVar1 <= pcVar2) {
        return 1;
      }
      if (*pcVar2 != ';') {
        return 1;
      }
      iVar5 = (int)pcVar2 - (int)pcVar3;
      if (0x10 < iVar5) {
        return 1;
      }
      F_00da0e40(&(*(undefined1 *)(gen_frame + 0x2)),pcVar3 + 2,iVar5 - 2);
      ((gen_frame + 0x0))[iVar5] = 0;
      uVar4 = F_00da0e80(&(*(undefined1 *)(gen_frame + 0x2)),0);
      if (0xff < uVar4) {
        return 1;
      }
      (*(undefined1 *)(gen_frame + 0x2)) = (char)uVar4;
      (*(undefined1 *)(gen_frame + 0x3)) = 0;
      F_00da4bf0(param_2 GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0x2)),0xffffffff);
      pcVar3 = pcVar2 + 1;
      goto joined_r0x00e1c25e;
    }
    F_00da4bf0(param_2 GEN_EDX_ARG,&REFG(undefined, 0x1126170),1);
    pcVar3 = pcVar3 + 5;
  } while( true );
}

/* ref: FUN_00e1c430 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1c430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1c430u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = F_00da4190(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1,0xffffffff);
  if ((int)uVar3 < 0) {
    return 1;
  }
  piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x68))) + uVar3 * 8)));
  iVar4 = *((int *)GEN_TOP(((int)this + 0x4c))) + *((int *)GEN_TOP(((int)this + 0x40)));
  iVar2 = piVar1[1];
  *param_2 = *piVar1 + iVar4;
  param_2[1] = iVar2 + iVar4;
  return 0;
}

/* ref: FUN_00e1c480 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1c480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1c480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int iVar2;
  
  if (0 < *((int *)GEN_TOP(((int)this + 0x6c)))) {
    iVar2 = *((int *)GEN_TOP(((int)this + 0x4c))) + *((int *)GEN_TOP(((int)this + 0x40)));
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x68)));
    *param_1 = *piVar1 + iVar2;
    param_1[1] = piVar1[1] + iVar2;
    return (uint)param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00e1c4c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1c4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1c4c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x48)));
  *param_1 = *((int *)GEN_TOP(((int)this + 0x4c))) + *((int *)GEN_TOP(((int)this + 0x44)));
  param_1[1] = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00e1c4e0 */
GEN_LIB GEN_FRAME uint F_00e1c4e0(GEN_P(undefined * in_esi, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1c4e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * in_esi = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 uVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  undefined4 uVar5;
  undefined * puVar6;
  
  uVar2 = F_00e1c480(in_esi GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar2 = F_0105a4c0(param_2,uVar2);
  iVar4 = 0;
  if (0 < *((int *)GEN_TOP(((int)in_esi + 0x1c)))) {
    do {
      uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)in_esi + 0x18))) + iVar4 * 4)));
      puVar6 = &REFG(undefined, 0x1118a3c);
      uVar5 = uVar1;
      pvVar3 = ((undefined *)GEN_TOP(F_00d9fe80(param_2 GEN_EDX_ARG,&REFG(undefined, 0x10919e8))));
      pvVar3 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar3 GEN_EDX_ARG,uVar5)));
      F_00d9fe80(pvVar3 GEN_EDX_ARG,puVar6);
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      F_00e1c430(in_esi GEN_EDX_ARG,uVar1,&(*(undefined4 *)(gen_frame + 0x0)));
      uVar2 = F_0105a4c0(param_2,&(*(undefined4 *)(gen_frame + 0x0)));
      iVar4 = iVar4 + 1;
    } while (iVar4 < *((int *)GEN_TOP(((int)in_esi + 0x1c))));
  }
  return uVar2;
}

/* ref: FUN_00e1c560 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1c560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1c560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  
  (*(char * PTR32 *)(gen_frame + 0x8)) = ((char *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0xc)) = ((char *)GEN_TOP(0x0));
  uVar1 = F_00e1c430(this GEN_EDX_FWD,param_1,&(*(char * PTR32 *)(gen_frame + 0x8)));
  if (((uVar1 == 0) && (*(*(char * PTR32 *)(gen_frame + 0x8)) == '\"')) && (*((char *)GEN_TOP(((int)(*(char * PTR32 *)(gen_frame + 0xc)) - 1))) == '\"')) {
    (*(char * PTR32 *)(gen_frame + 0x8)) = (*(char * PTR32 *)(gen_frame + 0x8)) + 1;
    (*(char * PTR32 *)(gen_frame + 0xc)) = ((char *)GEN_TOP(((int)(*(char * PTR32 *)(gen_frame + 0xc)) - 1)));
    (*(undefined8 *)(gen_frame + 0x0)) = 0;
    uVar1 = F_00e1c0f0(&(*(char * PTR32 *)(gen_frame + 0x8)),&(*(undefined8 *)(gen_frame + 0x0)));
    *param_2 = (undefined4)(*(undefined8 *)(gen_frame + 0x0));
    return uVar1;
  }
  return 1;
}

/* ref: FUN_00e1c5d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1c5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1c5d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  uVar1 = F_00e1c430(this GEN_EDX_FWD,param_2,((undefined1 *)(gen_frame + 0x0)));
  *((bool *)GEN_TOP(param_1)) = uVar1 == 0;
  return param_1;
}

/* ref: FUN_00e1c600 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1c600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1c600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  
  (*(char * PTR32 *)(gen_frame + 0x0)) = ((char *)GEN_TOP(0x0));
  (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP(0x0));
  uVar1 = F_00e1c430(this GEN_EDX_FWD,param_1,&(*(char * PTR32 *)(gen_frame + 0x0)));
  if (((uVar1 == 0) && (*(*(char * PTR32 *)(gen_frame + 0x0)) == '\"')) && (*((char *)GEN_TOP(((int)(*(char * PTR32 *)(gen_frame + 0x4)) - 1))) == '\"')) {
    (*(char * PTR32 *)(gen_frame + 0x0)) = (*(char * PTR32 *)(gen_frame + 0x0)) + 1;
    (*(char * PTR32 *)(gen_frame + 0x4)) = ((char *)GEN_TOP(((int)(*(char * PTR32 *)(gen_frame + 0x4)) - 1)));
    uVar1 = F_00e1c170((uint)&(*(char * PTR32 *)(gen_frame + 0x0)),param_2);
    return uVar1;
  }
  return 1;
}

/* ref: FUN_00e1c660 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1c660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1c660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  uint uVar2;
  
  if (*((uint *)GEN_TOP(((int)this + 0x6c))) == (*((uint *)GEN_TOP(((int)this + 0x70))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0x68))),8);
  }
  piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x68))) + *((int *)GEN_TOP(((int)this + 0x6c))) * 8)));
  *((int *)GEN_TOP(((int)this + 0x6c))) = *((int *)GEN_TOP(((int)this + 0x6c))) + 1;
  *piVar1 = *((int *)GEN_TOP(((int)this + 0x44))) - *((int *)GEN_TOP(((int)this + 0x40)));
  uVar2 = (*((int *)GEN_TOP(((int)this + 0x48))) - *((int *)GEN_TOP(((int)this + 0x4c)))) - *((int *)GEN_TOP(((int)this + 0x40)));
  piVar1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00e1c6b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1c6b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1c6b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114e678));
  F_00da3de0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,local_8);
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0x80000000;
  F_00e25550(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 6;
  return (uint)this;
}

/* ref: FUN_00e1c720 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1c720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1c720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  int iVar5;
  int iVar6;
  int iVar7;
  uint local_8;
  
  F_00da3cd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  iVar7 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  if (1 < *((int *)GEN_TOP(((int)this + 0x6c)))) {
    piVar3 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x68))) + 8)));
    iVar6 = (*((int *)GEN_TOP(((int)this + 0x6c))) - 2U >> 1) + 1;
    do {
      piVar1 = piVar3 + 1;
      iVar5 = *piVar3;
      piVar3 = piVar3 + 4;
      iVar6 = iVar6 - 1;
      iVar7 = iVar7 + 1 + (*piVar1 - iVar5);
    } while (iVar6 != 0);
  }
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x2c))) & 0x3fffffff;
  if ((int)uVar4 < iVar7) {
    iVar6 = uVar4 * 2;
    if ((int)(uVar4 * 2) <= iVar7) {
      iVar6 = iVar7;
    }
    bVar2 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0x24))),iVar6,1);
    uVar4 = CONCAT31(extraout_var,bVar2);
  }
  *((int *)GEN_TOP(((int)this + 0x28))) = iVar7;
  iVar7 = *((int *)GEN_TOP(((int)this + 0x24)));
  local_8 = 1;
  if (1 < *((int *)GEN_TOP(((int)this + 0x6c)))) {
    do {
      piVar3 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x68))) + local_8 * 8)));
      iVar6 = *piVar3;
      iVar5 = piVar3[1] - iVar6;
      F_00da0e40(iVar7,*((int *)GEN_TOP(((int)this + 0x4c))) + iVar6 + *((int *)GEN_TOP(((int)this + 0x40))),iVar5);
      *((undefined1 *)GEN_TOP((iVar5 + iVar7))) = 0;
      if (*((uint *)GEN_TOP(((int)this + 0x1c))) == (*((uint *)GEN_TOP(((int)this + 0x20))) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0x18))),4);
      }
      *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + *((int *)GEN_TOP(((int)this + 0x1c))) * 4))) = iVar7;
      *((int *)GEN_TOP(((int)this + 0x1c))) = *((int *)GEN_TOP(((int)this + 0x1c))) + 1;
      F_00da3a20(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,iVar7,local_8 + 1);
      uVar4 = local_8 + 2;
      iVar7 = iVar5 + 1 + iVar7;
      local_8 = uVar4;
    } while ((int)uVar4 < *((int *)GEN_TOP(((int)this + 0x6c))));
  }
  return uVar4;
}

/* ref: FUN_00e1c830 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1c830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1c830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  bool bVar2;
  
  uVar1 = F_00e25a70(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_FWD);
  if (uVar1 == 0xb) {
    uVar1 = F_00e25a70(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG);
    if (uVar1 == 8) {
      F_00e1c660(this GEN_EDX_ARG);
      uVar1 = F_00e25a70(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG);
      return (-(uint)(uVar1 != 6) & 3) + 3;
    }
  }
  else {
    bVar2 = uVar1 == 8;
    while (bVar2) {
      F_00e1c660(this GEN_EDX_ARG);
      uVar1 = F_00e25a70(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG);
      if (uVar1 == 6) {
        F_00e1c720(this GEN_EDX_ARG);
        return 1;
      }
      if (uVar1 != 8) {
        if (uVar1 != 0xb) {
          return 6;
        }
        uVar1 = F_00e25a70(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG);
        F_00e1c720(this GEN_EDX_ARG);
        return (uint)(uVar1 != 6) * 4 + 2;
      }
      F_00e1c660(this GEN_EDX_ARG);
      uVar1 = F_00e25a70(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG);
      if (uVar1 != 9) {
        return 6;
      }
      uVar1 = F_00e25a70(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG);
      bVar2 = uVar1 == 10;
    }
  }
  return 6;
}

/* ref: FUN_00e1c8f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1c8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1c8f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00e25a70(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_FWD);
  if (uVar1 == 8) {
    while( true ) {
      F_00e1c660(this GEN_EDX_ARG);
      uVar1 = F_00e25a70(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG);
      if (uVar1 == 7) {
        F_00e1c720(this GEN_EDX_ARG);
        return 0;
      }
      if (uVar1 != 8) break;
      F_00e1c660(this GEN_EDX_ARG);
      uVar1 = F_00e25a70(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG);
      if (uVar1 != 9) {
        return 6;
      }
      uVar1 = F_00e25a70(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG);
      if (uVar1 != 10) {
        return 6;
      }
    }
  }
  return 6;
}

/* ref: FUN_00e1c950 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1c950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1c950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  F_00da3cd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  F_00e1bc80(((undefined *)GEN_TOP(((int)this + 0x38))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  uVar1 = F_00e25a70(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG);
  while (uVar1 < 6) {
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0: ;
      uVar1 = F_00e1c830(this GEN_EDX_ARG);
      return uVar1;
    case 1: ;
      uVar1 = F_00e1c8f0(this GEN_EDX_ARG);
      return uVar1;
    case 2: ;
      return 4;
    case 3: ;
      return 5;
    case 4: ;
      uVar1 = F_00e25a70(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG);
      break;
    case 5: ;
      return 7;
    }
  }
  return 6;
}

/* ref: FUN_00e1c9e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1c9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1c9e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00e1c950(this GEN_EDX_FWD);
  *((uint *)GEN_TOP(((int)this + 0x74))) = uVar1;
  return uVar1;
}

/* ref: FUN_00e1c9f0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e1c9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1c9f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  uint uVar2;
  undefined * this_00;
  undefined * puVar3;
  
  do {
    uVar1 = F_00e1c9e0(this GEN_EDX_FWD);
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0: ;
      F_00d9fe80(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114e68c));
      F_00e1c4e0(this,param_1);
      F_00d9fe80(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114e688));
      break;
    case 1: ;
    case 2: ;
      F_00d9fe80(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1126164));
      F_00e1c4e0(this,param_1);
      if (uVar1 == 2) {
        F_00d9fe80(param_1 GEN_EDX_ARG,&REFG(undefined, 0x1080808));
      }
      F_00d9fe80(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114d124));
      break;
    case 3: ;
      puVar3 = &REFG(undefined, 0x114d124);
      uVar1 = F_00e1c480(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
      uVar2 = F_00d9fe80(param_1 GEN_EDX_ARG,&REFG(undefined, 0x114e684));
      this_00 = ((undefined *)GEN_TOP(F_0105a4c0(uVar2,uVar1)));
      F_00d9fe80(this_00 GEN_EDX_ARG,puVar3);
      break;
    case 4: ;
    case 5: ;
      uVar1 = F_00e1c4c0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      F_0105a4c0(param_1,uVar1);
      break;
    case 6: ;
    case 7: ;
      return 0;
    }
  } while( true );
}

/* ref: FUN_00e1caf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1caf0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1caf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e1cb20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1cb20(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1cb20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e1cb30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1cb30(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1cb30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e1cb80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1cb80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe1cb80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x14))) + *((int *)GEN_TOP(((int)this + 8)));
  *param_1 = iVar1 + param_2;
  param_1[1] = iVar1 + param_3;
  return (uint)param_1;
}

/* ref: FUN_00e1cba0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1cba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1cba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x18)));
  *param_1 = *((int *)GEN_TOP(((int)this + 0x1c))) + *((int *)GEN_TOP(((int)this + 0x14)));
  param_1[1] = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00e1cbd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1cbd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe1cbd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x1c))) + *((int *)GEN_TOP(((int)this + 0x10)));
  *param_1 = iVar1 + param_2;
  param_1[1] = iVar1 + param_3;
  return (uint)param_1;
}

/* ref: FUN_00e1cc10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1cc10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1cc10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00e1cc50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1cc50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1cc50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00e1cc80 */
GEN_LIB GEN_FRAME uint F_00e1cc80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1cc80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkXmlStreamParser::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1ccb0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1ccb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00df5bb0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00e1ccf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1ccf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1ccf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(uint *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return param_1;
}

/* ref: FUN_00e1cd10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1cd10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1cd10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 100))))(*(int * PTR32 *)this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 4))),&(*(undefined4 *)(gen_frame + 0x0)));
  return (*(uint *)(gen_frame + 0x8));
}

/* ref: hkDataWorldNative::vf12 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e1cd40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1cd40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: hkDataWorldNative::vf13 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e1cd50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1cd50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: hkDataWorldNative::vf14 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e1cd60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1cd60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: hkDataWorldNative::vf15 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e1cd70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1cd70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: hkDataWorldNative::vf18 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e1cd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe1cd80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: hkDataWorldNative::vf19 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e1cd90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1cd90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: hkDataWorldNative::vf20 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e1cda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1cda0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: hkDataWorldNative::vf21 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e1cdb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1cdb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: hkDataWorldNative::vf22 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e1cdc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1cdc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: hkDataWorldNative::vf17 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e1cdd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe1cdd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: hkDataWorldNative::vf23 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1cde0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1cde0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 0;
}

/* ref: hkDataWorldNative::vf16 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e1cdf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xe1cdf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return;
}

/* ref: FUN_00e1ce00 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e1ce00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1ce00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x18))))(*(int * PTR32 *)this GEN_EDX_FWD);
  iVar2 = 0;
  if (0 < (int)uVar1) {
    iVar3 = 0;
    do {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x1c))))(*(int * PTR32 *)this GEN_EDX_ARG,iVar2,*param_1 + iVar3);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar2 < (int)uVar1);
  }
  return 0;
}

/* ref: FUN_00e1ce50 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e1ce50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1ce50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  uint uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  uint * puVar6;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = this;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 8))))(*(int * PTR32 *)this GEN_EDX_FWD);
  *param_1 = uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0xc))))(*(int * PTR32 *)this GEN_EDX_ARG);
  param_1[1] = uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x10))))(*(int * PTR32 *)this GEN_EDX_ARG);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x10))))(*(int * PTR32 *)this GEN_EDX_ARG)));
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
  }
  param_1[2] = uVar1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x18))))(*(int * PTR32 *)this GEN_EDX_ARG);
  puVar6 = param_1 + 3;
  if ((int)(param_1[5] & 0x3fffffff) < (int)uVar1) {
    uVar3 = (param_1[5] & 0x3fffffff) * 2;
    if ((int)uVar3 <= (int)uVar1) {
      uVar3 = uVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),puVar6,uVar3,0xc);
  }
  iVar4 = 0;
  if (uVar1 != param_1[4] && -1 < (int)(uVar1 - param_1[4])) {
    do {
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uVar1 - param_1[4]));
  }
  iVar4 = 0;
  param_1[4] = uVar1;
  if (0 < (int)uVar1) {
    param_1 = ((uint *)GEN_TOP(0x0));
    do {
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x10)))) + 0x1c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x10)))) GEN_EDX_ARG,iVar4,&(*(undefined4 *)(gen_frame + 0x0)));
      puVar5 = ((undefined4 *)GEN_TOP((*puVar6 + (int)param_1)));
      param_1 = ((uint *)GEN_TOP(((int)param_1 + 0xc)));
      iVar4 = iVar4 + 1;
      *puVar5 = (*(undefined4 *)(gen_frame + 0x0));
      puVar5[1] = (*(undefined4 *)(gen_frame + 0x8));
    } while (iVar4 < (int)uVar1);
  }
  return 0;
}

/* ref: FUN_00e1cf50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1cf50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe1cf50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_FRAME_DECL_TOP(0x90, 0, 4);
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2c))))(this GEN_EDX_FWD)));
  if (param_4 == 0) {
    uVar2 = F_00e1a800(this_00 GEN_EDX_ARG,param_3);
    uVar1 = uVar2;
  }
  else {
    (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
    (*(uint *)(gen_frame + 0x8)) = 0x80000080;
    (*(undefined4 *)(gen_frame + 0x4)) = 1;
    ((undefined1 *)(gen_frame + 0xc))[0] = 0;
    F_00da4bf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_3,0xffffffff);
    F_00da4bf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x11186a8),0xffffffff);
    F_00da4bf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_4,0xffffffff);
    F_00da4bf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1118a38),0xffffffff);
    uVar1 = F_00e1a800(this_00 GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    uVar2 = (*(uint *)(gen_frame + 0x8));
    if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
    }
    (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)GEN_TOP(0x0));
    (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  }
  if (uVar1 != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x40))))(this GEN_EDX_ARG,param_1,param_2,uVar1,param_5);
  }
  return uVar2;
}

/* ref: FUN_00e1d060 */
GEN_LIB GEN_FRAME uint F_00e1d060(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe1d060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int * piVar1;
  undefined4 * in_ecx;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  float10 extraout_ST0;
  
  in_ecx = ((undefined4 *)GEN_TOP(F_00e1cd10(param_3 GEN_EDX_ARG)));
  switch((unsigned int)(uintptr_t)(*in_ecx)) {
  case 2: ;
  case 4: ;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_3)) + 0x30))))(((int *)GEN_TOP(*param_3)) GEN_EDX_ARG,param_3[1]);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x44))))(param_1 GEN_EDX_ARG,param_2,uVar3);
    return uVar3;
  case 3: ;
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_3)) + 0x3c))))(((int *)GEN_TOP(*param_3)),param_3[1]);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x50))))
                      (param_1 GEN_EDX_ARG,param_2,(undefined4)gen_fl2bits((float)extraout_ST0));
    return uVar3;
  case 5: ;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_3)) + 0x2c))))(((int *)GEN_TOP(*param_3)) GEN_EDX_ARG,param_3[1]);
    in_ecx = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x54))))(param_1 GEN_EDX_ARG,param_2,uVar3)));
    break;
  case 6: ;
  case 7: ;
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_3)) + 0x34))))(((int *)GEN_TOP(*param_3)) GEN_EDX_ARG,param_3[1])));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) + 1;
      puVar2[2] = puVar2[2] + 1;
    }
    in_ecx = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x5c))))(param_1 GEN_EDX_ARG,param_2,puVar2)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      in_ecx = ((undefined4 *)GEN_TOP(0xffffffff));
      *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) - 1;
      piVar1 = puVar2 + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
        return uVar3;
      }
    }
    break;
  case 8: ;
    break;
  case 9: ;
    if (*((int *)GEN_TOP(in_ecx[1])) == 3) {
      uVar3 = F_00e19c70(in_ecx GEN_EDX_ARG);
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_3)) + 0x38))))(((int *)GEN_TOP(*param_3)) GEN_EDX_ARG,param_3[1],uVar3);
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x48))))(param_1 GEN_EDX_ARG,param_2,uVar4,uVar3);
      return uVar3;
    }
    break;
  default: ;
    goto switchD_00e1d07e_default;
  }
switchD_00e1d07e_default: ;
  return (uint)in_ecx;
}

/* ref: FUN_00e1d1b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1d1b0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe1d1b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  float10 extraout_ST0;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD)));
  if ((*piVar1 == 9) && (*((int *)GEN_TOP(piVar1[1])) != 3)) {
switchD_00e1d1e9_caseD_8: ;
    puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(param_3)) + 0x28))))(*((int * PTR32 *)GEN_TOP(param_3)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_3 + 4))))));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar3 + 6))) = *((short *)GEN_TOP(((int)puVar3 + 6))) + 1;
      puVar3[2] = puVar3[2] + 1;
    }
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x68))))(param_1 GEN_EDX_ARG,param_2,puVar3)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      piVar2 = ((int *)GEN_TOP(0xffffffff));
      *((short *)GEN_TOP(((int)puVar3 + 6))) = *((short *)GEN_TOP(((int)puVar3 + 6))) - 1;
      piVar1 = puVar3 + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
        return uVar4;
      }
    }
  }
  else {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG)));
    piVar2 = ((int *)GEN_TOP((*piVar2 - 2)));
    switch((unsigned int)(uintptr_t)(piVar2)) {
    case 0x0: ;
    case 0x2: ;
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(param_3)) + 0x30))))(*((int * PTR32 *)GEN_TOP(param_3)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_3 + 4))))
      ;
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x50))))(param_1 GEN_EDX_ARG,param_2,uVar4);
      return uVar4;
    case 0x1: ;
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(param_3)) + 0x3c))))(*((int * PTR32 *)GEN_TOP(param_3)),*((undefined4 *)GEN_TOP((param_3 + 4))));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x40))))
                        (param_1 GEN_EDX_ARG,param_2,(undefined4)gen_fl2bits((float)extraout_ST0));
      return uVar4;
    case 0x3: ;
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(param_3)) + 0x2c))))(*((int * PTR32 *)GEN_TOP(param_3)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_3 + 4))))
      ;
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x38))))(param_1 GEN_EDX_ARG,param_2,uVar4);
      return uVar4;
    case 0x4: ;
    case 0x5: ;
      puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(param_3)) + 0x34))))
                         (*((int * PTR32 *)GEN_TOP(param_3)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_3 + 4))))));
      if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar3 + 6))) = *((short *)GEN_TOP(((int)puVar3 + 6))) + 1;
        puVar3[2] = puVar3[2] + 1;
      }
      piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x60))))(param_1 GEN_EDX_ARG,param_2,puVar3)));
      if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
        piVar2 = ((int *)GEN_TOP(0xffffffff));
        *((short *)GEN_TOP(((int)puVar3 + 6))) = *((short *)GEN_TOP(((int)puVar3 + 6))) - 1;
        piVar1 = puVar3 + 2;
        *piVar1 = *piVar1 - 1;
        if (*piVar1 == 0) {
          uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1);
          return uVar4;
        }
      }
      break;
    case 0x6: ;
      goto switchD_00e1d1e9_caseD_8;
    case 0x7: ;
      piVar2 = ((int *)GEN_TOP(piVar1[1]));
      if (*piVar2 == 3) {
        uVar4 = F_00e19c70(piVar1 GEN_EDX_ARG);
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(param_3)) + 0x38))))
                          (*((int * PTR32 *)GEN_TOP(param_3)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_3 + 4))),uVar4);
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x30))))(param_1 GEN_EDX_ARG,param_2,uVar4)));
      }
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_00e1d370 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1d370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1d370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_00e1d390 */
GEN_LIB GEN_FRAME unsigned int F_00e1d390(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe1d390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
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

/* ref: FUN_00e1d3c0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e1d3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1d3c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 4)))) {
    do {
      iVar1 = iVar2 * 8;
      iVar3 = iVar2 * 8;
      iVar2 = iVar2 + 1;
      *((int *)GEN_TOP((param_1 + *((int *)GEN_TOP((*(int *)this + iVar3)))))) =
           *((int *)GEN_TOP((*(int *)this + 4 + iVar1))) + param_1;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 4))));
  }
  iVar2 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x10)))) {
    iVar3 = 0;
    do {
      iVar2 = iVar2 + 1;
      *((undefined4 *)GEN_TOP((param_1 + *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar3)))))) =
           *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 4 + iVar3)));
      iVar3 = iVar3 + 0x10;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 0x10))));
  }
  return 0;
}

/* ref: FUN_00e1d410 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1d410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1d410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  undefined * pvVar4;
  uint uVar5;
  uint uVar6;
  uint local_8;
  
  if (*((int *)GEN_TOP(((int)this + 0x30))) == 0) {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) + 4))))
                               (*((int * PTR32 *)GEN_TOP(((int)pvVar3 + 0x2c))) GEN_EDX_ARG,0x10)));
    if (pvVar4 == ((undefined *)GEN_TOP(0x0))) {
      pvVar4 = ((undefined *)GEN_TOP(0x0));
    }
    else {
      local_8 = local_8 & 0xffffff00;
      F_00da3de0(pvVar4 GEN_EDX_ARG,local_8);
    }
    *((undefined * PTR32 *)GEN_TOP(((int)this + 0x30))) = pvVar4;
  }
  uVar2 = (*(undefined4 *)&gen_args[1]);
  pvVar4 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x30)));
  uVar5 = F_00da3ae0(pvVar4 GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
  F_00da3e40(pvVar4 GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[1]) + 3,uVar5);
  if ((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 3)) == '\0') {
    uVar6 = F_00da0f10(uVar2,&REFG(undefined * PTR32, 0x13516ac));
    F_00da3a20(pvVar4 GEN_EDX_ARG,uVar6,0);
  }
  else {
    uVar6 = F_00da3990(pvVar4 GEN_EDX_ARG,uVar5);
    F_00da39d0(pvVar4 GEN_EDX_ARG,uVar5,0);
  }
  if (*((uint *)GEN_TOP(((int)this + 0x28))) == (*((uint *)GEN_TOP(((int)this + 0x2c))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0x24))),8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + *((int *)GEN_TOP(((int)this + 0x28))) * 8)));
  *puVar1 = (*(undefined4 *)&gen_args[0]);
  puVar1[1] = uVar6;
  *((int *)GEN_TOP(((int)this + 0x28))) = *((int *)GEN_TOP(((int)this + 0x28))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e1d4f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1d4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1d4f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  LPVOID pvVar1;
  uint uVar2;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 0x30)));
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    F_00df5070(this_00 GEN_EDX_FWD);
    F_00da3e20(this_00 GEN_EDX_ARG);
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,this_00,0x10);
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x2c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x24))),uVar2 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0x80000000;
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x20)));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x18))),uVar2 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0x80000000;
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x14)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0xc))),uVar2 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00e1d5f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1d5f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1d5f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e1d630 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1d630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1d630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e1d670 */
GEN_LIB GEN_FRAME uint F_00e1d670(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1d670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00e1d690 */
GEN_LIB GEN_FRAME unsigned int F_00e1d690(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1d690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return;
}

/* ref: FUN_00e1d6c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1d6c0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1d6c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00df5070(param_1 GEN_EDX_FWD);
  F_00da3e20(param_1 GEN_EDX_ARG);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00e1d740 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1d740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1d740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x114e6ac));
  uVar1 = F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkPlatformObjectWriter::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1d770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe1d770u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,param_2,param_3);
  return (uint)(uVar1 != param_3);
}

/* ref: FUN_00e1d7a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1d7a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1d7a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 8))) + 0xc;
}

/* ref: FUN_00e1d7b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1d7b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1d7b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(uint *)&gen_args[0]);
  uVar1 = F_00dbd9c0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,(*(uint *)&gen_args[0]),&(*(uint *)&gen_args[0]));
  if (uVar1 == 0) {
    return (*(uint *)&gen_args[0]);
  }
  uVar2 = F_00e25db0(uVar2,&REFG(undefined, 0x15da330),((undefined *)GEN_TOP(((int)this + 8))),0,0,0);
  if (*((uint *)GEN_TOP(((int)this + 0x24))) == (*((uint *)GEN_TOP(((int)this + 0x28))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0x20))),4);
  }
  *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + *((int *)GEN_TOP(((int)this + 0x24))) * 4))) = uVar2;
  *((int *)GEN_TOP(((int)this + 0x24))) = *((int *)GEN_TOP(((int)this + 0x24))) + 1;
  F_00e05b60((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,uVar2,(int)this + 0x14,1);
  return uVar2;
}

/* ref: hkPlatformObjectWriter::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1d840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe1d840u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  GEN_FRAME_DECL_TOP(0x50, 0, 4);
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  undefined * phVar3;
  char * pcVar4;
  undefined4 uVar5;
  
  this_00 = *(undefined * PTR32 *)(this + 0xc);
  if (this_00 == ((undefined *)GEN_TOP(0x0))) {
    (*(uint *)(gen_frame + 0x48)) = (*(uint *)&gen_args[2]);
  }
  else {
    uVar2 = F_00e1d7a0(this GEN_EDX_FWD);
    uVar2 = F_00e1d7b0(this_00 GEN_EDX_ARG,(*(uint *)&gen_args[2]),uVar2);
    (*(uint *)(gen_frame + 0x48)) = uVar2;
  }
  F_0105aa30(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG);
  phVar3 = (*(undefined * PTR32 *)&gen_args[0]);
  if (*(int *)(this + 0xc) != 0) {
    pcVar4 = ((char *)REFP(0x113ba6c));
    uVar2 = F_00d92610((*(uint *)(gen_frame + 0x48)) GEN_EDX_ARG);
    uVar2 = F_00da0d20(uVar2,pcVar4);
    if (uVar2 == 0) {
      uVar2 = F_00e1d7a0(this GEN_EDX_ARG);
      uVar2 = F_00e1d7b0(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_ARG,&REFG(undefined, 0x15da330),uVar2);
      (*(uint *)(gen_frame + 0x48)) = uVar2;
      uVar2 = F_00e1d7a0(this GEN_EDX_ARG);
      uVar2 = F_00e1d7b0(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),uVar2);
      (*(uint *)(gen_frame + 0x44)) = uVar2;
      uVar5 = 0;
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
      F_0105a9d0(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,uVar2,uVar5);
      piVar1 = *(int * PTR32 *)(this + 8);
      (*(undefined4 *)(gen_frame + 0x8)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x14)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x20)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x44)),(*(uint *)&gen_args[2]),(*(undefined * PTR32 *)&gen_args[0]),(*(uint *)(gen_frame + 0x48)),&(*(undefined4 *)(gen_frame + 0x0)));
      phVar3 = ((undefined1 *)(gen_frame + 0x34));
      F_00e1d4f0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0xc))))
            (*(int * PTR32 *)(this + 8) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(*(uint *)&gen_args[2]),phVar3,(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)&gen_args[3]));
  pcVar4 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)phVar3 + 0xc))))(phVar3 GEN_EDX_ARG,(int)&(*(uint *)&gen_args[2]) + 3)));
  return (uint)(*pcVar4 == '\0');
}

/* ref: FUN_00e1d980 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1d980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1d980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114e6c4));
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0x80000000;
  return (uint)this;
}

/* ref: FUN_00e1d9c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1d9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1d9c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114e6c4));
  if (0 < *((int *)GEN_TOP(((int)this + 0x24)))) {
    do {
      F_00e25d30(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x20))) + iVar2 * 4))));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 0x24))));
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0x28)));
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  if (-1 < iVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x20))),iVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0x80000000;
  F_00dbdb20(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  uVar1 = F_00dbdb20(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00e1da60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1da60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe1da60u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  LPVOID pvVar1;
  undefined * pvVar2;
  uint uVar3;
  char * pcVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x114e6ac));
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))
                             (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x18)));
  *((undefined2 *)GEN_TOP(((int)pvVar2 + 4))) = 0x18;
  F_00e05640(&(*(undefined * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined4, 0x135491c));
  uVar3 = F_00e26520(pvVar2 GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x0)),param_1,param_3);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar3;
  pcVar4 = ((char *)GEN_TOP(F_00e1d7a0(this GEN_EDX_ARG)));
  if ((((*pcVar4 == (char)REFG(undefined4, 0x135491c)) && (pcVar4[1] == (char)((uint)REFG(undefined4, 0x135491c) >> 8))) &&
      (pcVar4[2] == (*(undefined1 *)((char *)&REFG(undefined4, 0x135491c) + 2)))) && (pcVar4[3] == (*(undefined1 *)((char *)&REFG(undefined4, 0x135491c) + 3)))) {
    *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
    return (uint)this;
  }
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_2 GEN_EDX_ARG);
    *((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) = param_2;
    return (uint)this;
  }
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))
                             (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x2c)));
  *((undefined2 *)GEN_TOP(((int)pvVar2 + 4))) = 0x2c;
  uVar3 = F_00e1d980(pvVar2 GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar3;
  return (uint)this;
}

/* ref: FUN_00e1db50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1db50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1db50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd9c0(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),&(*(undefined4 *)&gen_args[0]));
  if (uVar1 == 0) {
    *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined4 *)&gen_args[0]);
    return 0;
  }
  return 1;
}

/* ref: FUN_00e1dba0 */
GEN_LIB GEN_FRAME uint F_00e1dba0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1dba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00e1dbd0 */
GEN_LIB GEN_FRAME uint F_00e1dbd0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1dbd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00e1dc00 */
GEN_LIB GEN_FRAME uint F_00e1dc00(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1dc00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00e1dc30 */
GEN_LIB GEN_FRAME uint F_00e1dc30(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1dc30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkPlatformObjectWriter::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1dc80(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1dc80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00e1d740(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00e1dcc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1dcc0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1dcc0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e1dd20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1dd20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1dd20u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e1dd60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1dd60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1dd60u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e1dda0 */
GEN_LIB GEN_FRAME uint F_00e1dda0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1dda0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkPlatformObjectWriter::Cache::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1ddd0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1ddd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00e1d9c0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00e1de10 */
GEN_LIB GEN_FRAME float F_00e1de10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1de10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return gen_bits2f((&REFG(float, 0x114e724))[(int)(param_1)]);
}

/* ref: FUN_00e1de20 */
GEN_LIB GEN_FRAME uint F_00e1de20(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1de20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  if ((param_1 & 0x7f800000) != 0x7f800000) {
    return 5;
  }
  if (param_1 == 0x7f800000) {
    return 1;
  }
  if (param_1 == 0xff800000) {
    return 0;
  }
  if (param_1 == 0xffc00000) {
    return 4;
  }
  return ~(param_1 >> 0x1f) & 1 | 2;
}

/* ref: FUN_00e1de80 */
GEN_LIB GEN_FRAME uint F_00e1de80(GEN_P(float param_1, float gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1de80u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00e1de20((undefined4)gen_fl2bits(param_1));
  if (uVar1 == 5) {
    uVar1 = F_00da4890(param_2,&REFG(undefined, 0x114e73c),(int)(ulonglong)gen_d2bits((double)param_1),
                         (int)((ulonglong)gen_d2bits((double)param_1) >> 0x20));
    return uVar1;
  }
  uVar1 = F_00da46f0(param_2 GEN_EDX_ARG,(&REFG(undefined * PTR32, 0x114e70c))[(int)(uVar1)]);
  return uVar1;
}

/* ref: FUN_00e1ded0 */
GEN_LIB GEN_FRAME uint F_00e1ded0(GEN_P(float param_1, float gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1ded0u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00e1de20((undefined4)gen_fl2bits(param_1));
  if (uVar1 == 5) {
    F_00da4890(param_2,&REFG(undefined, 0x114e73c),(int)(ulonglong)gen_d2bits((double)param_1),
                 (int)((ulonglong)gen_d2bits((double)param_1) >> 0x20));
    uVar1 = F_00da4230(param_2 GEN_EDX_ARG,0x2e,0,0x7fffffff);
    if (uVar1 == 0xffffffff) {
      uVar1 = F_00da4d70(param_2 GEN_EDX_ARG,&REFG(undefined, 0x114e740));
    }
    return uVar1;
  }
  uVar1 = F_00da46f0(param_2 GEN_EDX_ARG,(&REFG(undefined * PTR32, 0x114e70c))[(int)(uVar1)]);
  return uVar1;
}

/* ref: FUN_00e1df40 */
GEN_LIB GEN_FRAME uint F_00e1df40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1df40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  GEN_FRAME_DECL_TOP(0x48, 8, 4);
  char * pcVar1;
  char * pcVar2;
  undefined4 * this;
  char * pcVar3;
  int iVar4;
  float fVar5;
  
  this = (*(undefined4 * PTR32 *)&gen_args[0]);
  pcVar3 = ((char *)GEN_TOP((*(undefined4 * PTR32 *)&gen_args[0])[1]));
  pcVar1 = ((char *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0])));
  pcVar2 = pcVar1;
  if (0x40 < (int)pcVar3 - (int)pcVar1) {
    return 1;
  }
  while( true ) {
    if (pcVar3 <= pcVar2) {
      F_00da0e40(((undefined1 *)(gen_frame + 0x0)),pcVar1,(int)pcVar3 - (int)pcVar1);
      ((undefined1 *)(gen_frame + 0x0))[(int)((int)pcVar3 - (int)pcVar1)] = 0;
      fVar5 = F_00da0ec0(((undefined1 *)(gen_frame + 0x0)));
      *(*(float * PTR32 *)&gen_args[1]) = fVar5;
      return 0;
    }
    if (*pcVar2 == '#') break;
    pcVar2 = pcVar2 + 1;
  }
  iVar4 = 0;
  do {
    pcVar3 = ((char *)GEN_TOP(F_0105a5b0(this GEN_EDX_ARG,(int)&(*(undefined4 * PTR32 *)&gen_args[0]) + 3,(&REFG(undefined * PTR32, 0x114e70c))[(int)(iVar4)])));
    if (*pcVar3 != '\0') {
      *(*(float * PTR32 *)&gen_args[1]) = gen_bits2f((&REFG(float, 0x114e724))[(int)(iVar4)]);
      return 0;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  return 1;
}

/* ref: FUN_00e1dff0 */
GEN_LIB GEN_FRAME uint F_00e1dff0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xe1dff0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00e1de20((undefined4)gen_fl2bits(param_2));
  uVar2 = F_00e1de20((undefined4)gen_fl2bits(param_3));
  if (uVar1 != uVar2) {
    *param_1 = 0;
    return (uint)param_1;
  }
  if ((uVar1 == 5) &&
     ((GEN_ISNAN(param_2) || GEN_ISNAN(param_3)) == ((GEN_ISNAN(param_2) || GEN_ISNAN(param_3)) || param_2 == param_3))) {
    *param_1 = 0;
    return (uint)param_1;
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00e1e050 */
GEN_LIB GEN_FRAME uint F_00e1e050(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1e050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = ((char *)GEN_TOP((param_1 + *param_2)));
  uVar3 = 0;
  cVar1 = *pcVar2;
  while (cVar1 != '\0') {
    uVar3 = uVar3 + 1;
    cVar1 = pcVar2[uVar3];
  }
  do {
    uVar3 = uVar3 + 1;
  } while ((uVar3 & 3) != 0);
  *param_2 = *param_2 + uVar3;
  return (uint)pcVar2;
}

/* ref: FUN_00e1e080 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1e080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1e080u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *((uint *)GEN_TOP(((int)this + 0x24)));
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x28)));
  iVar1 = uVar5 + param_1;
  (*(int *)(gen_frame + 0x0)) = 0;
  if (uVar3 != uVar5 && -1 < (int)(uVar3 - uVar5)) {
    do {
      uVar3 = F_00e1e1c0(iVar1,&(*(int *)(gen_frame + 0x0)));
      if (uVar3 == 0xffffffff) {
        return 0xffffffff;
      }
      uVar4 = F_00e1e050(iVar1,&(*(int *)(gen_frame + 0x0)));
      if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,8);
      }
      puVar2 = ((uint *)GEN_TOP((*param_2 + param_2[1] * 8)));
      uVar5 = param_2[1] + 1;
      param_2[1] = uVar5;
      *puVar2 = uVar4;
      puVar2[1] = uVar3 + param_1;
    } while ((*(int *)(gen_frame + 0x0)) < *((int *)GEN_TOP(((int)this + 0x28))) - *((int *)GEN_TOP(((int)this + 0x24))));
  }
  return uVar5;
}

/* ref: FUN_00e1e120 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1e120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1e120u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *((uint *)GEN_TOP(((int)this + 0x28)));
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x2c)));
  iVar1 = uVar5 + param_1;
  (*(int *)(gen_frame + 0x0)) = 0;
  if (uVar3 != uVar5 && -1 < (int)(uVar3 - uVar5)) {
    do {
      uVar3 = F_00e1e1c0(iVar1,&(*(int *)(gen_frame + 0x0)));
      if (uVar3 == 0xffffffff) {
        return 0xffffffff;
      }
      uVar4 = F_00e1e050(iVar1,&(*(int *)(gen_frame + 0x0)));
      if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,8);
      }
      puVar2 = ((uint *)GEN_TOP((*param_2 + param_2[1] * 8)));
      uVar5 = param_2[1] + 1;
      param_2[1] = uVar5;
      *puVar2 = uVar4;
      puVar2[1] = uVar3 + param_1;
    } while ((*(int *)(gen_frame + 0x0)) < *((int *)GEN_TOP(((int)this + 0x2c))) - *((int *)GEN_TOP(((int)this + 0x28))));
  }
  return uVar5;
}

/* ref: FUN_00e1e1c0 */
GEN_LIB GEN_FRAME uint F_00e1e1c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1e1c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  return *((uint *)GEN_TOP((iVar1 + param_1)));
}

/* ref: FUN_00e1e220 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1e220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1e220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00e1e260 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1e260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1e260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00e1e2a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1e2a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1e2a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00e1e2d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1e2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1e2d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00e1e300 */
GEN_LIB GEN_FRAME uint F_00e1e300(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1e300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00e1e310 */
GEN_LIB GEN_FRAME uint F_00e1e310(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1e310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00e1e380 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1e380(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1e380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = (*((uint *)GEN_TOP((in_ecx + 4))) & 0x80000000) == 0;
  return param_2;
}

/* ref: FUN_00e1e3a0 */
GEN_LIB GEN_FRAME uint F_00e1e3a0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1e3a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return (uint)((param_1 - 1 & param_1) == 0);
}

/* ref: FUN_00e1e3c0 */
GEN_LIB GEN_FRAME uint F_00e1e3c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1e3c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00e1e3d0 */
GEN_LIB GEN_FRAME uint F_00e1e3d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1e3d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00e1e400 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1e400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1e400u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * puVar4;
  float10 extraout_ST0;
  
  puVar4 = (*(undefined4 * PTR32 *)&gen_args[2]);
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 4))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP((*piVar1 - 2)));
  switch((unsigned int)(uintptr_t)(piVar2)) {
  case 0x0: ;
  case 0x2: ;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar4)) + 0x4c))))(((int *)GEN_TOP(*puVar4)) GEN_EDX_ARG,puVar4[1]);
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x50))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),uVar3);
    return uVar3;
  case 0x1: ;
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar4)) + 0x3c))))(((int *)GEN_TOP(*puVar4)),puVar4[1]);
    (*(float *)(gen_frame + 0x4)) = (float)extraout_ST0;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x40))))
                      ((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(undefined4)gen_fl2bits((float)extraout_ST0));
    return uVar3;
  case 0x3: ;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar4)) + 0x34))))(((int *)GEN_TOP(*puVar4)) GEN_EDX_ARG,puVar4[1]);
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x38))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),uVar3)));
    break;
  case 0x4: ;
  case 0x5: ;
    (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar4)) + 0x5c))))(((int *)GEN_TOP(*puVar4)) GEN_EDX_ARG,puVar4[1])));
    if ((*(undefined4 * PTR32 *)&gen_args[2]) != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[2]) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[2]) + 6))) + 1;
      (*(undefined4 * PTR32 *)&gen_args[2])[2] = (*(undefined4 * PTR32 *)&gen_args[2])[2] + 1;
    }
    puVar4 = ((undefined4 *)GEN_TOP(F_00e1f5c0(this GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 * PTR32 *)&gen_args[2]))));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x60))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),*puVar4);
    piVar2 = (*(int * PTR32 *)(gen_frame + 0x0));
    if ((*(int * PTR32 *)(gen_frame + 0x0)) != ((int *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x0)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x0)) + 6))) - 1;
      piVar1 = (*(int * PTR32 *)(gen_frame + 0x0)) + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x0)))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1)));
      }
    }
    if ((*(undefined4 * PTR32 *)&gen_args[2]) != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[2]) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[2]) + 6))) - 1;
      piVar1 = (*(undefined4 * PTR32 *)&gen_args[2]) + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))))((*(undefined4 * PTR32 *)&gen_args[2]) GEN_EDX_ARG,1);
        return uVar3;
      }
    }
    break;
  case 0x7: ;
    piVar2 = ((int *)GEN_TOP(piVar1[1]));
    if (*piVar2 == 3) {
      F_00e19c70(piVar1 GEN_EDX_ARG);
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar4)) + 0x2c))))(((int *)GEN_TOP(*puVar4)) GEN_EDX_ARG,puVar4[1]);
      F_00e19c70(piVar1 GEN_EDX_ARG);
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x30))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),uVar3);
      return uVar3;
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_00e1e5c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1e5c0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1e5c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0x18;
}

/* ref: FUN_00e1e610 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1e610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1e610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 uVar1;
  
  uVar1 = *((undefined4 *)GEN_TOP((*(int *)this + 4 + param_2 * 0xc)));
  *param_1 = *((undefined4 *)GEN_TOP((*(int *)this + param_2 * 0xc)));
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00e1e630 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1e630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1e630u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP((*(int *)this + 8 + param_1 * 0xc))) = param_2;
  return param_1 * 3;
}

/* ref: FUN_00e1e650 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e1e650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1e650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    piVar2 = ((int *)GEN_TOP((*(int *)this + iVar1 * 0xc)));
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (iVar1 <= *((int *)GEN_TOP(((int)this + 8))));
  }
  return 0;
}

/* ref: FUN_00e1e680 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1e680(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe1e680u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = param_3 <= *((int *)GEN_TOP((in_ecx + 8)));
  return param_2;
}

/* ref: FUN_00e1e6a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1e6a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe1e6a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00e07250(this GEN_EDX_FWD,param_1,param_2);
  if ((int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    *param_3 = *((undefined4 *)GEN_TOP((*(int *)this + 8 + uVar1 * 0xc)));
    return 0;
  }
  return 1;
}

/* ref: FUN_00e1e6f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1e6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1e6f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  int local_8;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (-1 < (int)uVar1) {
    puVar2 = *(uint * PTR32 *)this;
    local_8 = uVar1 + 1;
    puVar5 = puVar2;
    do {
      uVar3 = *puVar5;
      if (uVar3 != 0xffffffff) {
        uVar4 = (uVar3 >> 4) * -0x61c8864f;
        while( true ) {
          uVar4 = uVar4 & uVar1;
          if ((puVar2[uVar4 * 3] == uVar3) && (puVar2[uVar4 * 3 + 1] == puVar5[1])) break;
          uVar4 = uVar4 + 1;
        }
      }
      puVar5 = puVar5 + 3;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00e1e750 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1e750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe1e750u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  *(undefined4 *)this = param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = param_2 | 0x80000000;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 - 1U;
  return param_3 - 1U;
}

/* ref: FUN_00e1e770 */
GEN_LIB GEN_FRAME uint F_00e1e770(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1e770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  
  iVar1 = 8;
  if (8 < param_1 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 2);
  }
  return iVar1 * 0xc;
}

/* ref: FUN_00e1e790 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e1e790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1e790u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 / 0xc;
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0x80000000;
  *((uint *)GEN_TOP(((int)this + 8))) = uVar2 - 1;
  if (uVar2 != 0) {
    iVar1 = 0;
    do {
      *((undefined4 *)GEN_TOP((iVar1 + *(int *)this))) = 0xffffffff;
      iVar1 = iVar1 + 0xc;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e1e7e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1e7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1e7e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *param_1;
  uVar2 = *((undefined4 *)GEN_TOP(((int)this + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  uVar3 = *((undefined4 *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00e1e830 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1e830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1e830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x34, 12, 4);
  int * piVar1;
  code * pcVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  int * piVar7;
  uint uVar8;
  undefined4 * puVar9;
  int iVar10;
  float10 extraout_ST0;
  
  piVar7 = (*(int * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = param_1;
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) + 4))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) GEN_EDX_FWD)));
  uVar5 = (*(uint *)&gen_args[2]);
  uVar4 = *piVar3 - 2;
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 0: ;
  case 2: ;
    iVar10 = 0;
    if (0 < (int)(*(uint *)&gen_args[2])) {
      do {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x4c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) GEN_EDX_ARG,iVar10);
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar7)) + 0x50))))(((int *)GEN_TOP(*piVar7)) GEN_EDX_ARG,iVar10,uVar4);
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)uVar5);
      return uVar4;
    }
    break;
  case 1: ;
    iVar10 = 0;
    if (0 < (int)(*(uint *)&gen_args[2])) {
      do {
        extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x3c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))),iVar10);
        (*(uint *)&gen_args[2]) = (uint)gen_fl2bits((float)extraout_ST0);
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar7)) + 0x40))))(((int *)GEN_TOP(*piVar7)) GEN_EDX_ARG,iVar10,(*(uint *)&gen_args[2]));
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)uVar5);
      return uVar4;
    }
    break;
  case 3: ;
    iVar10 = 0;
    if (0 < (int)(*(uint *)&gen_args[2])) {
      do {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x34))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) GEN_EDX_ARG,iVar10);
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar7)) + 0x38))))(((int *)GEN_TOP(*piVar7)) GEN_EDX_ARG,iVar10,uVar4);
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)uVar5);
    }
    break;
  case 4: ;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar7)) + 0x10))))(((int *)GEN_TOP(*piVar7)) GEN_EDX_ARG,(*(uint *)&gen_args[2]));
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x18))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) GEN_EDX_ARG)));
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x24))))(piVar7 GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x0)) = 0;
    (*(uint *)(gen_frame + 0x4)) = 0;
    (*(uint *)(gen_frame + 0x8)) = 0x80000000;
    if (uVar5 == 0) {
      uVar4 = 0;
LAB_00e1eba5: ;
      uVar8 = 0x80000000;
    }
    else {
      (*(uint *)(gen_frame + 0x20)) = uVar5 << 4;
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(uint *)(gen_frame + 0x20)));
      uVar8 = (int)((*(uint *)(gen_frame + 0x20)) + ((int)(*(uint *)(gen_frame + 0x20)) >> 0x1f & 0xfU)) >> 4;
      if (uVar8 == 0) goto LAB_00e1eba5;
    }
    (*(uint *)(gen_frame + 0x0)) = uVar4;
    (*(uint *)(gen_frame + 0x4)) = uVar5;
    (*(uint *)(gen_frame + 0x8)) = uVar8;
    if (0 < (int)uVar5) {
      puVar6 = ((undefined4 *)GEN_TOP((uVar4 + 8)));
      uVar4 = uVar5;
      do {
        if (puVar6 != ((undefined4 *)GEN_TOP(0x8))) {
          puVar6[-2] = 0;
          puVar6[-1] = 0;
          *puVar6 = 0;
          puVar6[1] = 0;
        }
        puVar6 = puVar6 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x30))))(piVar7 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)));
    if (0 < (int)uVar5) {
      (*(uint *)(gen_frame + 0x20)) = 0;
      (*(uint *)(gen_frame + 0x18)) = uVar5;
      do {
        puVar6 = ((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x20)) + (*(uint *)(gen_frame + 0x0)))));
        iVar10 = *((int *)GEN_TOP(puVar6[2]));
        if ((iVar10 == 8) || ((iVar10 == 9 && (*((int *)GEN_TOP((((int *)GEN_TOP(puVar6[2])))[1])) != 3)))) {
          piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) + 0x28))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) GEN_EDX_ARG,*puVar6)));
          (*(int * PTR32 *)(gen_frame + 0x24)) = piVar7;
          if (piVar7 != ((int *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)piVar7 + 6))) = *((short *)GEN_TOP(((int)piVar7 + 6))) + 1;
            piVar7[2] = piVar7[2] + 1;
          }
          piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x28))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) GEN_EDX_ARG,*puVar6)));
          (*(int * PTR32 *)(gen_frame + 0x28)) = piVar7;
          if (piVar7 != ((int *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)piVar7 + 6))) = *((short *)GEN_TOP(((int)piVar7 + 6))) + 1;
            piVar7[2] = piVar7[2] + 1;
          }
          uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x14))))(piVar7 GEN_EDX_ARG);
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x24)) + 0x10))))((*(int * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,uVar5);
          uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x14))))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG);
          F_00e1e830((*(undefined * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG,(int *)&(*(int * PTR32 *)(gen_frame + 0x24)),&(*(int * PTR32 *)(gen_frame + 0x28)),uVar5);
          if ((*(int * PTR32 *)(gen_frame + 0x28)) != ((int *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 6))) - 1;
            piVar7 = (*(int * PTR32 *)(gen_frame + 0x28)) + 2;
            *piVar7 = *piVar7 - 1;
            if (*piVar7 == 0) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x28)))))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,1);
            }
          }
          if ((*(int * PTR32 *)(gen_frame + 0x24)) != ((int *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x24)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x24)) + 6))) - 1;
            piVar7 = (*(int * PTR32 *)(gen_frame + 0x24)) + 2;
            *piVar7 = *piVar7 - 1;
            if (*piVar7 == 0) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x24)))))((*(int * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,1);
            }
          }
        }
        else if (iVar10 != 1) {
          puVar9 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) + 0x28))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) GEN_EDX_ARG,*puVar6)));
          if (puVar9 != ((undefined4 *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)puVar9 + 6))) = *((short *)GEN_TOP(((int)puVar9 + 6))) + 1;
            puVar9[2] = puVar9[2] + 1;
          }
          puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x28))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) GEN_EDX_ARG,*puVar6)));
          if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)puVar6 + 6))) = *((short *)GEN_TOP(((int)puVar6 + 6))) + 1;
            puVar6[2] = puVar6[2] + 1;
          }
          iVar10 = 0;
          if (0 < (int)(*(uint *)&gen_args[2])) {
            (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar6;
            do {
              (*(int *)(gen_frame + 0x10)) = iVar10;
              F_00e1e400((*(undefined * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG,puVar9,iVar10,&(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
              iVar10 = iVar10 + 1;
            } while (iVar10 < (int)(*(uint *)&gen_args[2]));
          }
          if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)puVar6 + 6))) = *((short *)GEN_TOP(((int)puVar6 + 6))) - 1;
            piVar7 = puVar6 + 2;
            *piVar7 = *piVar7 - 1;
            if (*piVar7 == 0) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar6)))(puVar6 GEN_EDX_ARG,1);
            }
          }
          if (puVar9 != ((undefined4 *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)puVar9 + 6))) = *((short *)GEN_TOP(((int)puVar9 + 6))) - 1;
            piVar7 = puVar9 + 2;
            *piVar7 = *piVar7 - 1;
            if (*piVar7 == 0) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar9)))(puVar9 GEN_EDX_ARG,1);
            }
          }
        }
        (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) + 0x10;
        uVar5 = (*(uint *)(gen_frame + 0x18)) - 1;
        (*(uint *)(gen_frame + 0x18)) = uVar5;
      } while (uVar5 != 0);
    }
    (*(uint *)(gen_frame + 0x4)) = 0;
    uVar4 = (*(uint *)(gen_frame + 0x8));
    if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) << 4);
      return uVar5;
    }
    break;
  case 5: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar7)) + 0x10))))(((int *)GEN_TOP(*piVar7)) GEN_EDX_ARG,(*(uint *)&gen_args[2]));
    iVar10 = 0;
    if (0 < (int)uVar5) {
      do {
        puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x5c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) GEN_EDX_ARG,iVar10)));
        (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar6;
        if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)puVar6 + 6))) = *((short *)GEN_TOP(((int)puVar6 + 6))) + 1;
          puVar6[2] = puVar6[2] + 1;
        }
        piVar3 = ((int *)GEN_TOP(*piVar7));
        puVar6 = ((undefined4 *)GEN_TOP(F_00e1f5c0((*(undefined * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x14)),&(*(undefined4 * PTR32 *)(gen_frame + 0x1c)))));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x60))))(piVar3 GEN_EDX_ARG,iVar10,*puVar6);
        puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x14));
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x14)) != ((undefined4 *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x14)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x14)) + 6))) - 1;
          piVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x14)) + 2;
          *piVar3 = *piVar3 - 1;
          if (*piVar3 == 0) {
            puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x14)))))((*(undefined4 * PTR32 *)(gen_frame + 0x14)) GEN_EDX_ARG,1)));
          }
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != ((undefined4 *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x1c)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x1c)) + 6))) - 1;
          piVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) + 2;
          *piVar3 = *piVar3 - 1;
          if (*piVar3 == 0) {
            puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x1c)))))((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,1)));
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)(*(uint *)&gen_args[2]));
      return (uint)puVar6;
    }
    break;
  case 6: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar7)) + 0x10))))(((int *)GEN_TOP(*piVar7)) GEN_EDX_ARG,(*(uint *)&gen_args[2]));
    iVar10 = 0;
    if (0 < (int)uVar5) {
      do {
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar7)) + 100))))(((int *)GEN_TOP(*piVar7)) GEN_EDX_ARG,iVar10)));
        (*(int * PTR32 *)(gen_frame + 0x28)) = piVar3;
        if (piVar3 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) + 1;
          piVar3[2] = piVar3[2] + 1;
        }
        (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 100))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) GEN_EDX_ARG,iVar10)));
        if ((*(int * PTR32 *)&gen_args[0]) != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 6))) + 1;
          (*(int * PTR32 *)&gen_args[0])[2] = (*(int * PTR32 *)&gen_args[0])[2] + 1;
        }
        pcVar2 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x14)));
        uVar5 = (*pcVar2)((*(int * PTR32 *)&gen_args[0]));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x10))))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,uVar5);
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x14))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
        F_00e1e830((*(undefined * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG,(int *)&(*(int * PTR32 *)(gen_frame + 0x28)),&(*(int * PTR32 *)&gen_args[0]),uVar5);
        piVar3 = (*(int * PTR32 *)&gen_args[0]);
        if ((*(int * PTR32 *)&gen_args[0]) != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 6))) - 1;
          piVar1 = (*(int * PTR32 *)&gen_args[0]) + 2;
          *piVar1 = *piVar1 - 1;
          if (*piVar1 == 0) {
            piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,1)));
          }
        }
        if ((*(int * PTR32 *)(gen_frame + 0x28)) != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 6))) - 1;
          piVar1 = (*(int * PTR32 *)(gen_frame + 0x28)) + 2;
          *piVar1 = *piVar1 - 1;
          if (*piVar1 == 0) {
            piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x28)))))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,1)));
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < (int)(*(uint *)&gen_args[2]));
      return (uint)piVar3;
    }
    break;
  case 7: ;
    uVar4 = F_00e19c70(piVar3 GEN_EDX_ARG);
    uVar5 = (*(uint *)&gen_args[2]);
    iVar10 = *((int *)GEN_TOP(piVar3[1]));
    (*(uint *)(gen_frame + 0x20)) = uVar4;
    if (iVar10 == 3) {
      iVar10 = 0;
      if (0 < (int)(*(uint *)&gen_args[2])) {
        do {
          uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x2c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) GEN_EDX_ARG,iVar10);
          uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar7)) + 0x30))))(((int *)GEN_TOP(*piVar7)) GEN_EDX_ARG,iVar10,uVar4);
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)uVar5);
        return uVar4;
      }
    }
    else {
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar7)) + 0x10))))(((int *)GEN_TOP(*piVar7)) GEN_EDX_ARG,(*(uint *)&gen_args[2]));
      iVar10 = 0;
      if (0 < (int)uVar5) {
        do {
          piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 100))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) GEN_EDX_ARG,iVar10)));
          (*(int * PTR32 *)(gen_frame + 0x24)) = piVar3;
          if (piVar3 != ((int *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) + 1;
            piVar3[2] = piVar3[2] + 1;
          }
          (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar7)) + 100))))(((int *)GEN_TOP(*piVar7)) GEN_EDX_ARG,iVar10)));
          if ((*(int * PTR32 *)&gen_args[0]) != ((int *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 6))) + 1;
            (*(int * PTR32 *)&gen_args[0])[2] = (*(int * PTR32 *)&gen_args[0])[2] + 1;
          }
          pcVar2 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10)));
          (*pcVar2)((*(int * PTR32 *)&gen_args[0]),(*(uint *)(gen_frame + 0x20)));
          F_00e1e830((*(undefined * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG,(int *)&(*(int * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x20)));
          piVar3 = (*(int * PTR32 *)&gen_args[0]);
          if ((*(int * PTR32 *)&gen_args[0]) != ((int *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 6))) - 1;
            piVar1 = (*(int * PTR32 *)&gen_args[0]) + 2;
            *piVar1 = *piVar1 - 1;
            if (*piVar1 == 0) {
              piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,1)));
            }
          }
          if ((*(int * PTR32 *)(gen_frame + 0x24)) != ((int *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x24)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x24)) + 6))) - 1;
            piVar1 = (*(int * PTR32 *)(gen_frame + 0x24)) + 2;
            *piVar1 = *piVar1 - 1;
            if (*piVar1 == 0) {
              piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x24)))))((*(int * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,1)));
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)(*(uint *)&gen_args[2]));
        return (uint)piVar3;
      }
    }
  }
  return uVar4;
}

/* ref: FUN_00e1ee40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1ee40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1ee40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  int iVar2;
  undefined4 uVar3;
  code * pcVar4;
  undefined4 * puVar5;
  int * piVar6;
  int * piVar7;
  uint uVar8;
  
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[2]);
  iVar2 = *((int *)GEN_TOP((*(undefined4 * PTR32 *)&gen_args[2])[2]));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  if ((iVar2 == 9) && (*((int *)GEN_TOP((((int *)GEN_TOP((*(undefined4 * PTR32 *)&gen_args[2])[2])))[1])) != 3)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))) + 0xc))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))) GEN_EDX_FWD,&(*(int * PTR32 *)(gen_frame + 0x0)),*(*(undefined4 * PTR32 *)&gen_args[2]));
    piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)))));
    if (piVar6 != ((int *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)piVar6 + 6))) = *((short *)GEN_TOP(((int)piVar6 + 6))) + 1;
      piVar6[2] = piVar6[2] + 1;
    }
    uVar3 = *puVar5;
    piVar7 = ((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0])));
    pcVar4 = *((gen_code32 *)GEN_TOP((*piVar7 + 0xc)));
    (*(int * PTR32 *)&gen_args[1]) = piVar6;
    (*pcVar4)(piVar7,&(*(int * PTR32 *)(gen_frame + 0x0)),uVar3);
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)))));
    if (piVar7 != ((int *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)piVar7 + 6))) = *((short *)GEN_TOP(((int)piVar7 + 6))) + 1;
      piVar7[2] = piVar7[2] + 1;
    }
    uVar3 = puVar5[2];
    (*(int * PTR32 *)&gen_args[0]) = piVar7;
    uVar8 = F_00e19c70(uVar3 GEN_EDX_ARG);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x10))))(piVar7 GEN_EDX_ARG,uVar8);
    uVar8 = F_00e19c70(puVar5[2] GEN_EDX_ARG);
    uVar8 = F_00e1e830((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]),uVar8);
    *((short *)GEN_TOP(((int)piVar7 + 6))) = *((short *)GEN_TOP(((int)piVar7 + 6))) - 1;
    piVar1 = piVar7 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar7)))(piVar7 GEN_EDX_ARG,1);
    }
    if (piVar6 == ((int *)GEN_TOP(0x0))) {
      return uVar8;
    }
  }
  else {
    if (iVar2 != 8) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) + 0xc))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0]))) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),*(*(undefined4 * PTR32 *)&gen_args[2]));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))) + 0xc))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)),*puVar5);
      uVar8 = F_00e1ff00(this GEN_EDX_ARG,(*(int * PTR32 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)),(uint)((undefined1 *)(gen_frame + 0x8)));
      return uVar8;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))) + 0xc))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),*(*(undefined4 * PTR32 *)&gen_args[2]));
    piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)))));
    if (piVar6 != ((int *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)piVar6 + 6))) = *((short *)GEN_TOP(((int)piVar6 + 6))) + 1;
      piVar6[2] = piVar6[2] + 1;
    }
    uVar3 = *puVar5;
    piVar7 = ((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[0])));
    pcVar4 = *((gen_code32 *)GEN_TOP((*piVar7 + 0xc)));
    (*(int * PTR32 *)&gen_args[1]) = piVar6;
    (*pcVar4)(piVar7,&(*(int * PTR32 *)(gen_frame + 0x0)),uVar3);
    piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)))));
    if (piVar7 != ((int *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)piVar7 + 6))) = *((short *)GEN_TOP(((int)piVar7 + 6))) + 1;
      piVar7[2] = piVar7[2] + 1;
    }
    pcVar4 = *((gen_code32 *)GEN_TOP((*piVar6 + 0x14)));
    (*(int * PTR32 *)&gen_args[0]) = piVar7;
    uVar8 = (*pcVar4)(piVar6);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x10))))(piVar7 GEN_EDX_ARG,uVar8);
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x14))))(piVar6 GEN_EDX_ARG);
    uVar8 = F_00e1e830((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]),uVar8);
    *((short *)GEN_TOP(((int)piVar7 + 6))) = *((short *)GEN_TOP(((int)piVar7 + 6))) - 1;
    piVar1 = piVar7 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar7)))(piVar7 GEN_EDX_ARG,1);
    }
  }
  *((short *)GEN_TOP(((int)piVar6 + 6))) = *((short *)GEN_TOP(((int)piVar6 + 6))) - 1;
  piVar7 = piVar6 + 2;
  *piVar7 = *piVar7 - 1;
  if (*piVar7 != 0) {
    return uVar8;
  }
  uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar6)))(piVar6 GEN_EDX_ARG,1);
  return uVar8;
}

/* ref: FUN_00e1f040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1f040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1f040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0xffffffff;
  return (uint)this;
}

/* ref: FUN_00e1f070 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1f070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1f070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x38, 8, 4);
  undefined8 * puVar1;
  code * pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  int iVar7;
  undefined * this_00;
  int * in_ecx;
  undefined4 * puVar8;
  uint * puVar9;
  undefined4 uVar10;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = this;
  (*(uint *)(gen_frame + 0x30)) = 0;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x24))))(*(int * PTR32 *)this GEN_EDX_FWD,param_1);
  if (uVar4 == 0) {
    (*(int *)(gen_frame + 0x18)) = 0;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    (*(uint *)(gen_frame + 0x20)) = 0x80000000;
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x18)),10,0x18);
    uVar4 = param_1;
    while ((uVar4 != 0 &&
           (piVar6 = *(int * PTR32 *)this, pcVar2 = *((gen_code32 *)GEN_TOP((*piVar6 + 0x24))),
           uVar5 = (*pcVar2)(piVar6,uVar4), uVar5 == 0))) {
      piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x24))))
                                (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,uVar4)));
      (*(int * PTR32 *)(gen_frame + 0x28)) = piVar6;
      if ((*(uint *)(gen_frame + 0x1c)) == ((*(uint *)(gen_frame + 0x20)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x18)),0x18);
      }
      iVar7 = (*(int *)(gen_frame + 0x18)) + (*(uint *)(gen_frame + 0x1c)) * 0x18;
      if (iVar7 != 0) {
        *((undefined4 *)GEN_TOP((iVar7 + 0xc))) = 0;
        *((undefined4 *)GEN_TOP((iVar7 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar7 + 0x14))) = 0x80000000;
      }
      iVar7 = (*(uint *)(gen_frame + 0x1c)) * 0x18;
      (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) + 1;
      F_00e1ce50(&(*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x18)) + iVar7);
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x10))))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG);
      if (uVar4 == 0) {
        uVar4 = 0;
      }
      else {
        (*(uint *)(gen_frame + 0x30)) = (*(uint *)(gen_frame + 0x30)) | 1;
        piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x10))))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG)));
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 8))))(piVar6 GEN_EDX_ARG);
      }
      if (((*(uint *)(gen_frame + 0x30)) & 1) != 0) {
        (*(uint *)(gen_frame + 0x30)) = (*(uint *)(gen_frame + 0x30)) & 0xfffffffe;
      }
    }
    iVar7 = (*(uint *)(gen_frame + 0x1c)) - 1;
    (*(int *)(gen_frame + 0x24)) = iVar7;
    if (-1 < iVar7) {
      (*(int * PTR32 *)(gen_frame + 0x28)) = ((int *)GEN_TOP((iVar7 * 0x18)));
      do {
        iVar7 = 0;
        puVar8 = ((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + (int)(*(int * PTR32 *)(gen_frame + 0x28)))));
        (*(int *)(gen_frame + 0xc)) = 0;
        (*(uint *)(gen_frame + 0x10)) = 0;
        (*(uint *)(gen_frame + 0x14)) = 0x80000000;
        (*(undefined4 *)(gen_frame + 0x0)) = *puVar8;
        (*(undefined4 *)(gen_frame + 0x4)) = puVar8[1];
        (*(undefined4 *)(gen_frame + 0x8)) = puVar8[2];
        uVar4 = puVar8[4];
        if (0 < (int)uVar4) {
          F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0xc)),((int)uVar4 < 0) - 1 & uVar4,0xc);
        }
        (*(uint *)(gen_frame + 0x10)) = uVar4;
        if (0 < (int)uVar4) {
          (*(uint *)(gen_frame + 0x30)) = uVar4;
          do {
            iVar3 = puVar8[3];
            puVar1 = ((undefined8 *)GEN_TOP((iVar7 + (*(int *)(gen_frame + 0xc)))));
            *puVar1 = *((undefined8 *)GEN_TOP((iVar3 + iVar7)));
            *(undefined4 *)(puVar1 + 1) = *((undefined4 *)GEN_TOP((iVar3 + 8 + iVar7)));
            uVar10 = *((undefined4 *)GEN_TOP((iVar3 + 4 + iVar7)));
            this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x2c)))) + 0x2c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x2c)))) GEN_EDX_ARG)));
            uVar5 = F_00e1aff0(this_00 GEN_EDX_ARG,uVar10);
            iVar7 = iVar7 + 0xc;
            uVar4 = (*(uint *)(gen_frame + 0x30)) - 1;
            (*(uint *)(gen_frame + 0x30)) = uVar4;
            *((uint *)GEN_TOP(((int)puVar1 + 4))) = uVar5;
          } while (uVar4 != 0);
        }
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x2c)))) + 0xc))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x2c)))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)));
        (*(uint *)(gen_frame + 0x10)) = 0;
        if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                    (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0xc)),((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) * 0xc);
        }
        (*(int * PTR32 *)(gen_frame + 0x28)) = (*(int * PTR32 *)(gen_frame + 0x28)) - 6;
        iVar7 = (*(int *)(gen_frame + 0x24)) - 1;
        (*(int *)(gen_frame + 0x24)) = iVar7;
        this = (*(undefined4 * PTR32 *)(gen_frame + 0x2c));
      } while (-1 < iVar7);
    }
    piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x24))))
                              (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1)));
    iVar7 = 0;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x24))))(piVar6 GEN_EDX_ARG);
    if (0 < (int)uVar4) {
      do {
        pcVar2 = *((gen_code32 *)GEN_TOP((*piVar6 + 0x28)));
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(int *)(gen_frame + 0xc)) = 0;
        (*(uint *)(gen_frame + 0x10)) = 0;
        (*(uint *)(gen_frame + 0x14)) = 0;
        (*pcVar2)(piVar6,iVar7,&(*(undefined4 *)(gen_frame + 0x8)));
        in_ecx = ((int *)GEN_TOP(F_00e19d40((*(uint *)(gen_frame + 0x10)) GEN_EDX_ARG)));
        if (*in_ecx == 6) {
          uVar4 = F_00e19c80(in_ecx GEN_EDX_ARG);
          F_00e1f070((*(undefined4 * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG,uVar4);
        }
        iVar7 = iVar7 + 1;
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x24))))(piVar6 GEN_EDX_ARG);
      } while (iVar7 < (int)uVar4);
    }
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x2c)))) + 0x24))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x2c)))) GEN_EDX_ARG,param_1);
    iVar7 = (*(uint *)(gen_frame + 0x1c)) - 1;
    if (-1 < iVar7) {
      puVar9 = ((uint *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + 0x14 + iVar7 * 0x18)));
      do {
        uVar5 = *puVar9;
        puVar9[-1] = 0;
        if (-1 < (int)uVar5) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                    (&REFG(undefined * PTR32, 0x13516ac),puVar9[-2],(uVar5 & 0x3fffffff) * 0xc);
        }
        puVar9[-2] = 0;
        *puVar9 = 0x80000000;
        iVar7 = iVar7 - 1;
        puVar9 = puVar9 - 6;
      } while (-1 < iVar7);
    }
    (*(uint *)(gen_frame + 0x1c)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x20))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x18)),((*(uint *)(gen_frame + 0x20)) & 0x3fffffff) * 0x18);
    }
  }
  return uVar4;
}

/* ref: FUN_00e1f390 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1f390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe1f390u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * in_ecx;
  int iVar4;
  int iVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_2)) + 0x24))))(((int *)GEN_TOP(*param_2)) GEN_EDX_FWD);
  if ((int)(param_1[2] & 0x3fffffffU) < (int)uVar1) {
    uVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if ((int)uVar3 <= (int)uVar1) {
      uVar3 = uVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),param_1,uVar3,0x10);
  }
  iVar4 = uVar1 - param_1[1];
  if (0 < iVar4) {
    puVar2 = ((undefined4 *)GEN_TOP((param_1[1] * 0x10 + *param_1 + 8)));
    do {
      if (puVar2 != ((undefined4 *)GEN_TOP(0x8))) {
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar2 + 4;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  param_1[1] = uVar1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_2)) + 0x30))))(((int *)GEN_TOP(*param_2)) GEN_EDX_ARG,param_1);
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_3)) + 0x24))))(((int *)GEN_TOP(*param_3)) GEN_EDX_ARG);
  if ((int)((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) < (int)uVar1) {
    uVar3 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
    if ((int)uVar3 <= (int)uVar1) {
      uVar3 = uVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x0)),uVar3,0x10);
  }
  iVar4 = uVar1 - (*(uint *)(gen_frame + 0x4));
  iVar5 = 0;
  if (0 < iVar4) {
    puVar2 = ((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x4)) * 0x10 + (*(int *)(gen_frame + 0x0)) + 8)));
    do {
      if (puVar2 != ((undefined4 *)GEN_TOP(0x8))) {
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar2 + 4;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  (*(uint *)(gen_frame + 0x4)) = uVar1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_3)) + 0x30))))(((int *)GEN_TOP(*param_3)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)));
  iVar4 = 0;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_3)) + 0x24))))(((int *)GEN_TOP(*param_3)) GEN_EDX_ARG);
  if (0 < (int)uVar1) {
    do {
      in_ecx = ((int *)GEN_TOP(F_00e19d40(*((undefined4 *)GEN_TOP((iVar5 + 8 + (*(int *)(gen_frame + 0x0))))) GEN_EDX_ARG)));
      if (*in_ecx == 6) {
        uVar1 = F_00e19c80(in_ecx GEN_EDX_ARG);
        F_00e1f070((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,uVar1);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x10;
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_3)) + 0x24))))(((int *)GEN_TOP(*param_3)) GEN_EDX_ARG);
    } while (iVar4 < (int)uVar1);
  }
  (*(uint *)(gen_frame + 0x4)) = 0;
  uVar1 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) << 4);
  }
  return uVar1;
}

/* ref: FUN_00e1f510 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1f510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1f510u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 8))))(((int *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  piVar1 = ((int *)GEN_TOP(*param_2));
  iVar3 = 0;
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  iVar4 = *piVar1;
  (*(uint *)(gen_frame + 0xc)) = uVar2;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((iVar4 + 8))))(piVar1);
  (*(uint *)(gen_frame + 0x10)) = uVar2;
  F_00e1f390(this GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0xc)),&(*(uint *)(gen_frame + 0x10)));
  if (0 < (*(int *)(gen_frame + 0x4))) {
    iVar4 = 0;
    do {
      F_00e1ee40(this GEN_EDX_ARG,param_1,param_2,iVar4 + (*(int *)(gen_frame + 0x0)));
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < (*(int *)(gen_frame + 0x4)));
  }
  (*(int *)(gen_frame + 0x4)) = 0;
  uVar2 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) << 4)
    ;
  }
  return uVar2;
}

/* ref: FUN_00e1f5c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1f5c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1f5c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x30, 0, 4);
  int * piVar1;
  code * pcVar2;
  undefined4 uVar3;
  int * piVar4;
  undefined4 * puVar5;
  uint uVar6;
  int * piVar7;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  piVar7 = ((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1])));
  if (piVar7 == ((int *)GEN_TOP(0x0))) {
    *(*(undefined4 * PTR32 *)&gen_args[0]) = 0;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  pcVar2 = *((gen_code32 *)GEN_TOP((*piVar7 + 4)));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  puVar5 = ((undefined4 *)GEN_TOP((*pcVar2)(piVar7,&(*(undefined4 *)(gen_frame + 0x20)))));
  uVar6 = F_00e06a20(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,*puVar5,puVar5[1],((undefined1 *)(gen_frame + 0x10)));
  if (uVar6 == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x28))))(*(int * PTR32 *)this GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x10)));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
  }
  piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar1)) + 8))))(((int *)GEN_TOP(*piVar1)) GEN_EDX_ARG)));
  uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 8))))(piVar7 GEN_EDX_ARG);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(F_00e1f070(this GEN_EDX_ARG,uVar6)));
  piVar7 = *(int * PTR32 *)this;
  pcVar2 = *((gen_code32 *)GEN_TOP((*piVar7 + 0x10)));
  piVar7 = ((int *)GEN_TOP((*pcVar2)(piVar7,&(*(int * PTR32 *)&gen_args[1]),0)));
  (*(int * PTR32 *)(gen_frame + 0x28)) = piVar7;
  if (piVar7 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar7 + 6))) = *((short *)GEN_TOP(((int)piVar7 + 6))) + 1;
    piVar7[2] = piVar7[2] + 1;
  }
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  if (piVar7 == ((int *)GEN_TOP(0x0))) {
    puVar5 = &(*(undefined4 *)(gen_frame + 0x18));
  }
  else {
    puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 4))))(piVar7 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
  }
  uVar3 = puVar5[1];
  (*(undefined4 *)(gen_frame + 0x20)) = *puVar5;
  piVar4 = ((int *)GEN_TOP(*piVar1));
  (*(undefined4 *)(gen_frame + 0x24)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  if (piVar4 == ((int *)GEN_TOP(0x0))) {
    puVar5 = &(*(undefined4 *)(gen_frame + 0x18));
  }
  else {
    puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  }
  F_00e068a0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),*puVar5,puVar5[1],(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)));
  F_00e1f510(this GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x28)),piVar1);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = piVar7;
  if (piVar7 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar7 + 6))) = *((short *)GEN_TOP(((int)piVar7 + 6))) + 1;
    piVar7[2] = piVar7[2] + 1;
    *((short *)GEN_TOP(((int)piVar7 + 6))) = *((short *)GEN_TOP(((int)piVar7 + 6))) - 1;
    piVar1 = piVar7 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar7)))(piVar7 GEN_EDX_ARG,1);
    }
  }
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00e1f710 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1f710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1f710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)));
  F_00e1f5c0(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),uVar2);
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != ((undefined4 *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 6))) - 1;
    piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x4)))))((*(undefined4 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,1);
    }
  }
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x0)) != ((undefined4 *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0)) + 6))) - 1;
    piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x0)) + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x0)))))((*(undefined4 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1);
    }
  }
  return 0;
}

/* ref: FUN_00e1f770 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1f770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1f770u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0x18);
  return uVar1;
}

/* ref: FUN_00e1f790 */
GEN_LIB GEN_FRAME unsigned int F_00e1f790(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1f790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x18);
  }
  return;
}

/* ref: FUN_00e1f7e0 */
GEN_LIB GEN_FRAME uint F_00e1f7e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1f7e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00e1f800 */
GEN_LIB GEN_FRAME unsigned int F_00e1f800(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1f800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00e1f830 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1f830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe1f830u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00e07250(this GEN_EDX_FWD,param_2,param_3);
  *((bool *)GEN_TOP(param_1)) = (int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)));
  return param_1;
}

/* ref: FUN_00e1f860 */
GEN_LIB GEN_FRAME uint F_00e1f860(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1f860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00e1f880 */
GEN_LIB GEN_FRAME unsigned int F_00e1f880(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe1f880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00e1f8c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1f8c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1f8c0u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,0x18);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e1f900 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1f900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1f900u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00e1e790(this GEN_EDX_FWD,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00e1f920 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1f920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1f920u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00e07250(this GEN_EDX_FWD,param_1,param_2);
  if ((int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    F_00e07310(this GEN_EDX_ARG,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_00e1f960 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1f960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1f960u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,0x18);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e1f9a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1f9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe1f9a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00e1f900(this GEN_EDX_FWD,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00e1f9c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1f9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe1f9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(uint * param_5 = (uint *)(uintptr_t)gen_a5;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    uVar1 = F_00e07420(this GEN_EDX_FWD,param_1,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
    *param_5 = uVar1;
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    *param_5 = 0;
  }
  uVar1 = F_00e071a0(this GEN_EDX_ARG,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00e1fa20 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e1fa20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xe1fa20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    F_00e07420(this GEN_EDX_FWD,param_1,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
  }
  iVar2 = *(int *)this;
  uVar4 = (param_2 >> 4) * -0x61c8864f;
  while( true ) {
    uVar4 = uVar4 & *((uint *)GEN_TOP(((int)this + 8)));
    piVar1 = ((int *)GEN_TOP((iVar2 + uVar4 * 0xc)));
    if ((*((uint *)GEN_TOP((iVar2 + uVar4 * 0xc))) == param_2) && (piVar1[1] == param_3)) break;
    if (*piVar1 == -1) {
      iVar3 = uVar4 * 0xc;
      *((uint *)GEN_TOP((iVar2 + iVar3))) = param_2;
      *((int *)GEN_TOP((iVar2 + 4 + iVar3))) = param_3;
      *((undefined4 *)GEN_TOP((iVar3 + 8 + *(int *)this))) = param_4;
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
      return 0;
    }
    uVar4 = uVar4 + 1;
  }
  return 0;
}

/* ref: FUN_00e1faa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1faa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xe1faa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00e1f9c0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00e1fad0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e1fad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe1fad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00e1fa20(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3);
  return;
}

/* ref: FUN_00e1faf0 */
GEN_LIB GEN_FRAME unsigned int F_00e1faf0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1faf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = ((undefined4 *)GEN_TOP((param_1 + 0x14)));
    iVar2 = param_2;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x14))) {
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
      }
      puVar1 = puVar1 + 6;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00e1fb20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1fb20(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1fb20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = *((uint *)GEN_TOP((param_1 + 0x14)));
  *((undefined4 *)GEN_TOP((param_1 + 0x10))) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP((param_1 + 0xc))),(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP((param_1 + 0xc))) = 0;
  *((undefined4 *)GEN_TOP((param_1 + 0x14))) = 0x80000000;
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x18);
  }
  return param_1;
}

/* ref: FUN_00e1fb90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1fb90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1fb90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x18);
  }
  iVar1 = *(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 0x18;
  if (iVar1 != 0) {
    *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
    *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar1 + 0x14))) = 0x80000000;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 0x18;
}

/* ref: FUN_00e1fbf0 */
GEN_LIB GEN_FRAME unsigned int F_00e1fbf0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe1fbf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = param_2 - 1;
  if (-1 < iVar3) {
    puVar2 = ((uint *)GEN_TOP((param_1 + 0x14 + iVar3 * 0x18)));
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar2[-2],(uVar1 & 0x3fffffff) * 0xc);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      iVar3 = iVar3 - 1;
      puVar2 = puVar2 - 6;
    } while (-1 < iVar3);
  }
  return;
}

/* ref: FUN_00e1fc50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e1fc50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1fc50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,0x18);
  }
  iVar1 = *(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 0x18;
  if (iVar1 != 0) {
    *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
    *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar1 + 0x14))) = 0x80000000;
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 0x18;
}

/* ref: FUN_00e1fca0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e1fca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe1fca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar3) {
    puVar2 = ((uint *)GEN_TOP((*(int *)this + 0x14 + iVar3 * 0x18)));
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar2[-2],(uVar1 & 0x3fffffff) * 0xc);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      iVar3 = iVar3 - 1;
      puVar2 = puVar2 - 6;
    } while (-1 < iVar3);
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    return 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return 0;
}

/* ref: FUN_00e1fd20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1fd20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe1fd20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar3) {
    puVar2 = ((uint *)GEN_TOP((*(int *)this + 0x14 + iVar3 * 0x18)));
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar2[-2],(uVar1 & 0x3fffffff) * 0xc);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      puVar2 = puVar2 - 6;
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x18);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e1ff00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e1ff00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1ff00u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  code * pcVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  float10 extraout_ST0;
  
  uVar5 = (*(uint *)&gen_args[2]);
  (*(int * PTR32 *)(gen_frame + 0x0)) = param_1;
  piVar2 = ((int *)GEN_TOP(F_00e1cd10(((undefined *)GEN_TOP((*(uint *)&gen_args[2]))) GEN_EDX_FWD)));
  piVar3 = ((int *)GEN_TOP((*piVar2 - 2)));
  switch((unsigned int)(uintptr_t)(piVar3)) {
  case 0x0: ;
  case 0x2: ;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(uVar5)) + 0x30))))(*((int * PTR32 *)GEN_TOP(uVar5)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar5 + 4))));
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x44))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),uVar5);
    return uVar5;
  case 0x1: ;
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(uVar5)) + 0x3c))))(*((int * PTR32 *)GEN_TOP(uVar5)),*((undefined4 *)GEN_TOP((uVar5 + 4))));
    (*(uint *)&gen_args[2]) = (uint)gen_fl2bits((float)extraout_ST0);
    pcVar1 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x50)));
    uVar5 = (*pcVar1)((*(int * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(uint *)&gen_args[2]));
    return uVar5;
  case 0x3: ;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(uVar5)) + 0x2c))))(*((int * PTR32 *)GEN_TOP(uVar5)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar5 + 4))));
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x54))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),uVar5)));
    break;
  case 0x4: ;
  case 0x5: ;
    puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(uVar5)) + 0x34))))(*((int * PTR32 *)GEN_TOP(uVar5)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar5 + 4))))));
    if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar6 + 6))) = *((short *)GEN_TOP(((int)puVar6 + 6))) + 1;
      puVar6[2] = puVar6[2] + 1;
    }
    (*(uint *)&gen_args[2]) = (uint)puVar6;
    puVar7 = ((undefined4 *)GEN_TOP(F_00e1f5c0(param_1 GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(uint *)&gen_args[2]))));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x5c))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),*puVar7);
    piVar3 = (*(int * PTR32 *)(gen_frame + 0x0));
    if ((*(int * PTR32 *)(gen_frame + 0x0)) != ((int *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x0)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x0)) + 6))) - 1;
      piVar2 = (*(int * PTR32 *)(gen_frame + 0x0)) + 2;
      *piVar2 = *piVar2 - 1;
      if (*piVar2 == 0) {
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x0)))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,1)));
      }
    }
    if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar6 + 6))) = *((short *)GEN_TOP(((int)puVar6 + 6))) - 1;
      piVar2 = puVar6 + 2;
      *piVar2 = *piVar2 - 1;
      if (*piVar2 == 0) {
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar6)))(puVar6 GEN_EDX_ARG,1);
        return uVar5;
      }
    }
    break;
  case 0x7: ;
    piVar3 = ((int *)GEN_TOP(piVar2[1]));
    if (*piVar3 == 3) {
      uVar4 = F_00e19c70(piVar2 GEN_EDX_ARG);
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(uVar5)) + 0x38))))(*((int * PTR32 *)GEN_TOP(uVar5)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((uVar5 + 4))),uVar4)
      ;
      uVar4 = F_00e19c70(piVar2 GEN_EDX_ARG);
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x48))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),uVar5,uVar4);
      return uVar5;
    }
  }
  return (uint)piVar3;
}

/* ref: FUN_00e200c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e200c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe200c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 100))))(*(int * PTR32 *)this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 4))),param_1);
  return uVar1;
}

/* ref: FUN_00e200e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e200e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe200e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(uint *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return param_1;
}

/* ref: FUN_00e20100 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e20100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe20100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 8))))(((int *)GEN_TOP(*param_1)) GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x10))))(*(int * PTR32 *)this GEN_EDX_ARG,uVar2);
  return uVar2;
}

/* ref: FUN_00e20130 */
GEN_LIB GEN_NOFRAME uint F_00e20130(GEN_P(int in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xe20130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  if ((0 < in_eax) && ((in_eax < 0x13 || (in_eax == 0x1e)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00e20150 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e20150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe20150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char * pcVar5;
  undefined4 * puVar6;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  if (*(*(int * PTR32 *)&gen_args[1]) == 0) {
    return 0;
  }
  this_00 = ((undefined *)GEN_TOP(F_00da5fd0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD)));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*piVar1)) + 8))))(((int *)GEN_TOP(*piVar1)) GEN_EDX_ARG)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x10))))(*(int * PTR32 *)this GEN_EDX_ARG,uVar2);
  }
  if (this_00 != ((undefined *)GEN_TOP(0x0))) {
    if (uVar3 == 0) {
      return 0;
    }
    uVar4 = F_00d92610(this_00 GEN_EDX_ARG);
    uVar2 = F_00da0d20(uVar4,uVar2);
    if (uVar2 != 0) {
      pcVar5 = ((char *)GEN_TOP(F_00d92650(this_00 GEN_EDX_ARG,(int)&(*(int * PTR32 *)&gen_args[1]) + 3,uVar3)));
      if (*pcVar5 != '\0') {
        return uVar3;
      }
      puVar6 = ((undefined4 *)GEN_TOP(F_00da6010((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,((char *)REFP(0x114c978)))));
      if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
        this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x10))))(*(int * PTR32 *)this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(*puVar6)))))
        ;
        pcVar5 = ((char *)GEN_TOP(F_00d92650(this_00 GEN_EDX_ARG,(int)&(*(undefined * PTR32 *)&gen_args[0]) + 3,uVar3)));
        if (*pcVar5 != '\0') {
          return uVar3;
        }
      }
    }
    return (uint)this_00;
  }
  return uVar3;
}

/* ref: FUN_00e20230 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e20230(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xe20230u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  if ((*((char *)GEN_TOP(((int)param_2 + 0xc))) != '\x18') && (*((char *)GEN_TOP(((int)param_2 + 0xc))) != '\x1f')) {
    return 1;
  }
  if (*((int *)GEN_TOP(((int)param_2 + 8))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_3)) + 0x30))))(((int *)GEN_TOP(*param_3)) GEN_EDX_ARG,param_3[1]);
    F_00da6250(param_2 GEN_EDX_ARG,param_1,uVar1);
  }
  return 0;
}

/* ref: FUN_00e20280 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e20280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe20280u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint * puVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  LPVOID pvVar6;
  
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_2)) + 8))))(((int *)GEN_TOP(*param_2)) GEN_EDX_FWD);
  if (uVar2 != 0) {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_2)) + 8))))(((int *)GEN_TOP(*param_2)) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG);
    if (uVar2 != 0) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_2)) + 8))))(((int *)GEN_TOP(*param_2)) GEN_EDX_ARG)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG);
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x10))))(*(int * PTR32 *)this GEN_EDX_ARG,uVar2);
      if (uVar2 != 0) {
        piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_2)) + 8))))(((int *)GEN_TOP(*param_2)) GEN_EDX_ARG)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG);
        F_00d92a10(uVar2 GEN_EDX_ARG);
        uVar4 = F_00d929c0(uVar2 GEN_EDX_ARG);
        uVar5 = F_00e062e0(uVar2,param_2);
        uVar4 = uVar4 + uVar5;
        pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar6 + 0x2c))) + 4))))
                          (*((int * PTR32 *)GEN_TOP(((int)pvVar6 + 0x2c))) GEN_EDX_ARG,uVar4);
        if (*((uint *)GEN_TOP((param_3 + 0x10))) == (*((uint *)GEN_TOP((param_3 + 0x14))) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516a4),((int *)GEN_TOP((param_3 + 0xc))),8);
        }
        puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP((param_3 + 0xc))) + *((int *)GEN_TOP((param_3 + 0x10))) * 8)));
        *((int *)GEN_TOP((param_3 + 0x10))) = *((int *)GEN_TOP((param_3 + 0x10))) + 1;
        *puVar1 = uVar5;
        puVar1[1] = uVar4;
        F_00da1030(uVar5,0,uVar4);
        param_1[1] = uVar2;
        *param_1 = uVar5;
        return (uint)param_1;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00e203a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e203a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe203a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  GEN_FRAME_DECL_TOP(0x60, 0, 4);
  float * pfVar1;
  byte bVar2;
  code * pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined * pvVar7;
  uint uVar8;
  uint uVar9;
  LPVOID pvVar10;
  float fVar11;
  undefined4 * puVar12;
  undefined4 * puVar13;
  int iVar14;
  int * piVar15;
  undefined4 * puVar16;
  int iVar17;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  undefined8 uVar18;
  
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  puVar16 = ((undefined4 *)GEN_TOP(0xffffffff));
  uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x14))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) GEN_EDX_FWD);
  if (uVar8 == 0) {
    return 0;
  }
  bVar2 = *((byte *)GEN_TOP(((*(int *)&gen_args[1]) + 0xd)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = ((undefined4 *)GEN_TOP((uint)bVar2));
  uVar8 = F_00da5f30(((undefined4 *)GEN_TOP((uint)bVar2)));
  if (((*((short *)GEN_TOP((uVar8 + 8))) < 1) || (uVar9 = F_00e20130((*(undefined4 * PTR32 *)(gen_frame + 0x3c))), uVar9 == 0)) ||
     (uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x20))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0))), uVar9 != 0)) {
    (*(uint *)(gen_frame + 0x54)) = 0;
    (*(uint *)(gen_frame + 0x44)) = (ushort)~*((ushort *)GEN_TOP(((*(int *)&gen_args[1]) + 0x10))) >> 9 & 1;
    puVar12 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x14))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) GEN_EDX_ARG)));
    switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP(((*(int *)&gen_args[1]) + 0xd))))) {
    case 0: ;
      goto switchD_00e2051b_caseD_0;
    case 1: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *((int * PTR32 *)GEN_TOP(((int)pvVar10 + 0x2c)));
      pcVar3 = *((gen_code32 *)GEN_TOP((*piVar15 + 0xc)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar12;
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = (*(undefined4 * PTR32 *)(gen_frame + 0x3c));
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x1));
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        do {
          uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x4c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x44)));
          *((bool *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + (*(uint *)(gen_frame + 0x44))))) = uVar8 != 0;
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 2: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *((int * PTR32 *)GEN_TOP(((int)pvVar10 + 0x2c)));
      pcVar3 = *((gen_code32 *)GEN_TOP((*piVar15 + 0xc)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar12;
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = (*(undefined4 * PTR32 *)(gen_frame + 0x3c));
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x1));
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        do {
          uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x4c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x44)));
          *((char *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + (*(uint *)(gen_frame + 0x44))))) = (char)uVar8;
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 3: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *((int * PTR32 *)GEN_TOP(((int)pvVar10 + 0x2c)));
      pcVar3 = *((gen_code32 *)GEN_TOP((*piVar15 + 0xc)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar12;
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = (*(undefined4 * PTR32 *)(gen_frame + 0x3c));
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x1));
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        do {
          uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x4c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x44)));
          *((char *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + (*(uint *)(gen_frame + 0x44))))) = (char)uVar8;
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 4: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *((int * PTR32 *)GEN_TOP(((int)pvVar10 + 0x2c)));
      pcVar3 = *((gen_code32 *)GEN_TOP((*piVar15 + 0xc)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar12;
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = (*(undefined4 * PTR32 *)(gen_frame + 0x3c));
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x1));
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        do {
          uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x4c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x44)));
          *((char *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + (*(uint *)(gen_frame + 0x44))))) = (char)uVar8;
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 5: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *((int * PTR32 *)GEN_TOP(((int)pvVar10 + 0x2c)));
      pcVar3 = *((gen_code32 *)GEN_TOP((*piVar15 + 0xc)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = ((undefined4 *)GEN_TOP(((int)((int)(uintptr_t)puVar12) * 2)));
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = ((undefined4 *)GEN_TOP(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) / 2)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x2));
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        do {
          uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x4c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x44)));
          *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + (*(uint *)(gen_frame + 0x44)) * 2))) = (short)uVar8;
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 6: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *((int * PTR32 *)GEN_TOP(((int)pvVar10 + 0x2c)));
      pcVar3 = *((gen_code32 *)GEN_TOP((*piVar15 + 0xc)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = ((undefined4 *)GEN_TOP(((int)((int)(uintptr_t)puVar12) * 2)));
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = ((undefined4 *)GEN_TOP(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) / 2)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x2));
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        do {
          uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x4c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x44)));
          *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + (*(uint *)(gen_frame + 0x44)) * 2))) = (short)uVar8;
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 7: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *((int * PTR32 *)GEN_TOP(((int)pvVar10 + 0x2c)));
      pcVar3 = *((gen_code32 *)GEN_TOP((*piVar15 + 0xc)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = ((undefined4 *)GEN_TOP(((int)((int)(uintptr_t)puVar12) * 4)));
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = ((undefined4 *)GEN_TOP(((int)(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 0x1f & 3U) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 2)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x4));
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        do {
          uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x4c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x44)));
          (*(undefined4 * PTR32 *)(gen_frame + 0x34))[(*(uint *)(gen_frame + 0x44))] = uVar8;
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 8: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *((int * PTR32 *)GEN_TOP(((int)pvVar10 + 0x2c)));
      pcVar3 = *((gen_code32 *)GEN_TOP((*piVar15 + 0xc)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = ((undefined4 *)GEN_TOP(((int)((int)(uintptr_t)puVar12) * 4)));
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = ((undefined4 *)GEN_TOP(((int)(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 0x1f & 3U) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 2)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x4));
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        do {
          uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x4c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x44)));
          (*(undefined4 * PTR32 *)(gen_frame + 0x34))[(*(uint *)(gen_frame + 0x44))] = uVar8;
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 9: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *((int * PTR32 *)GEN_TOP(((int)pvVar10 + 0x2c)));
      pcVar3 = *((gen_code32 *)GEN_TOP((*piVar15 + 0xc)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = ((undefined4 *)GEN_TOP(((int)((int)(uintptr_t)puVar12) * 8)));
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = ((undefined4 *)GEN_TOP(((int)(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 0x1f & 7U) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 3)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = puVar16;
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x8));
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = ((undefined4 *)GEN_TOP(0x0));
      if (0 < (int)puVar12) {
        iVar14 = 0;
        do {
          uVar18 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x54))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))),iVar14);
          (*(undefined4 * PTR32 *)(gen_frame + 0x40))[iVar14 * 2] = (int)uVar18;
          (*(undefined4 * PTR32 *)(gen_frame + 0x40))[iVar14 * 2 + 1] = (int)((ulonglong)uVar18 >> 0x20);
          iVar14 = iVar14 + 1;
          puVar16 = (*(undefined4 * PTR32 *)(gen_frame + 0x30));
        } while (iVar14 < (int)puVar12);
      }
      break;
    case 10: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *((int * PTR32 *)GEN_TOP(((int)pvVar10 + 0x2c)));
      pcVar3 = *((gen_code32 *)GEN_TOP((*piVar15 + 0xc)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = ((undefined4 *)GEN_TOP(((int)((int)(uintptr_t)puVar12) * 8)));
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = ((undefined4 *)GEN_TOP(((int)(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 0x1f & 7U) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 3)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = puVar16;
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x8));
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = ((undefined4 *)GEN_TOP(0x0));
      if (0 < (int)puVar12) {
        iVar14 = 0;
        do {
          uVar18 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x54))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))),iVar14);
          (*(undefined4 * PTR32 *)(gen_frame + 0x40))[iVar14 * 2] = (int)uVar18;
          (*(undefined4 * PTR32 *)(gen_frame + 0x40))[iVar14 * 2 + 1] = (int)((ulonglong)uVar18 >> 0x20);
          iVar14 = iVar14 + 1;
          puVar16 = (*(undefined4 * PTR32 *)(gen_frame + 0x30));
        } while (iVar14 < (int)puVar12);
      }
      break;
    case 0xb: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *((int * PTR32 *)GEN_TOP(((int)pvVar10 + 0x2c)));
      pcVar3 = *((gen_code32 *)GEN_TOP((*piVar15 + 0xc)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = ((undefined4 *)GEN_TOP(((int)((int)(uintptr_t)puVar12) * 4)));
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = ((undefined4 *)GEN_TOP(((int)(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 0x1f & 3U) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 2)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x4));
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        do {
          extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x3c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))),(*(uint *)(gen_frame + 0x44)));
          (*(undefined4 * PTR32 *)(gen_frame + 0x34))[(*(uint *)(gen_frame + 0x44))] = (undefined4)gen_fl2bits((float)extraout_ST0);
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 0xc: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *((int * PTR32 *)GEN_TOP(((int)pvVar10 + 0x2c)));
      pcVar3 = *((gen_code32 *)GEN_TOP((*piVar15 + 0xc)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = ((undefined4 *)GEN_TOP(((int)((int)(uintptr_t)puVar12) << 4)));
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = ((undefined4 *)GEN_TOP(((int)(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 0x1f & 0xfU) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 4)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x10));
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13;
        do {
          puVar13 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x2c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x44)))));
          uVar4 = puVar13[1];
          uVar5 = puVar13[2];
          uVar6 = puVar13[3];
          *(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = *puVar13;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[1] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[2] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[3] = uVar6;
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) + 4;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 0xd: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *((int * PTR32 *)GEN_TOP(((int)pvVar10 + 0x2c)));
      pcVar3 = *((gen_code32 *)GEN_TOP((*piVar15 + 0xc)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = ((undefined4 *)GEN_TOP(((int)((int)(uintptr_t)puVar12) << 4)));
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = ((undefined4 *)GEN_TOP(((int)(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 0x1f & 0xfU) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 4)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x10));
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13;
        do {
          puVar13 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x2c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x44)))));
          uVar4 = puVar13[1];
          uVar5 = puVar13[2];
          uVar6 = puVar13[3];
          *(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = *puVar13;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[1] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[2] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[3] = uVar6;
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) + 4;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 0xe: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *((int * PTR32 *)GEN_TOP(((int)pvVar10 + 0x2c)));
      pcVar3 = *((gen_code32 *)GEN_TOP((*piVar15 + 0xc)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = ((undefined4 *)GEN_TOP(((int)((int)(uintptr_t)puVar12) * 0x30)));
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = ((undefined4 *)GEN_TOP(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) / 0x30)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x30));
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13 + 8;
        do {
          puVar13 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x2c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x44)))));
          uVar4 = puVar13[1];
          uVar5 = puVar13[2];
          uVar6 = puVar13[3];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-8] = *puVar13;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-7] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-6] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-5] = uVar6;
          uVar4 = puVar13[5];
          uVar5 = puVar13[6];
          uVar6 = puVar13[7];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-4] = puVar13[4];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-3] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-2] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-1] = uVar6;
          uVar4 = puVar13[9];
          uVar5 = puVar13[10];
          uVar6 = puVar13[0xb];
          *(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13[8];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[1] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[2] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[3] = uVar6;
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) + 0xc;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 0xf: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *((int * PTR32 *)GEN_TOP(((int)pvVar10 + 0x2c)));
      pcVar3 = *((gen_code32 *)GEN_TOP((*piVar15 + 0xc)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = ((undefined4 *)GEN_TOP(((int)((int)(uintptr_t)puVar12) * 0x30)));
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = ((undefined4 *)GEN_TOP(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) / 0x30)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x30));
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13 + 8;
        do {
          puVar13 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x2c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x44)))));
          uVar4 = puVar13[1];
          uVar5 = puVar13[2];
          uVar6 = puVar13[3];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-8] = *puVar13;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-7] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-6] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-5] = uVar6;
          uVar4 = puVar13[5];
          uVar5 = puVar13[6];
          uVar6 = puVar13[7];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-4] = puVar13[4];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-3] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-2] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-1] = uVar6;
          uVar4 = puVar13[9];
          uVar5 = puVar13[10];
          uVar6 = puVar13[0xb];
          *(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13[8];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[1] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[2] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[3] = uVar6;
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) + 0xc;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 0x10: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *((int * PTR32 *)GEN_TOP(((int)pvVar10 + 0x2c)));
      pcVar3 = *((gen_code32 *)GEN_TOP((*piVar15 + 0xc)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = ((undefined4 *)GEN_TOP(((int)((int)(uintptr_t)puVar12) * 0x30)));
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = ((undefined4 *)GEN_TOP(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) / 0x30)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x30));
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13 + 8;
        do {
          puVar13 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x2c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x44)))));
          uVar4 = puVar13[1];
          uVar5 = puVar13[2];
          uVar6 = puVar13[3];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-8] = *puVar13;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-7] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-6] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-5] = uVar6;
          uVar4 = puVar13[5];
          uVar5 = puVar13[6];
          uVar6 = puVar13[7];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-4] = puVar13[4];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-3] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-2] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-1] = uVar6;
          uVar4 = puVar13[9];
          uVar5 = puVar13[10];
          uVar6 = puVar13[0xb];
          *(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13[8];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[1] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[2] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[3] = uVar6;
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) + 0xc;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 0x11: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *((int * PTR32 *)GEN_TOP(((int)pvVar10 + 0x2c)));
      pcVar3 = *((gen_code32 *)GEN_TOP((*piVar15 + 0xc)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = ((undefined4 *)GEN_TOP(((int)((int)(uintptr_t)puVar12) << 6)));
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = ((undefined4 *)GEN_TOP(((int)(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 0x1f & 0x3fU) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 6)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x40));
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13 + 8;
        do {
          puVar13 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x2c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x44)))));
          uVar4 = puVar13[1];
          uVar5 = puVar13[2];
          uVar6 = puVar13[3];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-8] = *puVar13;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-7] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-6] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-5] = uVar6;
          uVar4 = puVar13[5];
          uVar5 = puVar13[6];
          uVar6 = puVar13[7];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-4] = puVar13[4];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-3] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-2] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-1] = uVar6;
          uVar4 = puVar13[9];
          uVar5 = puVar13[10];
          uVar6 = puVar13[0xb];
          *(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13[8];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[1] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[2] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[3] = uVar6;
          uVar4 = puVar13[0xd];
          uVar5 = puVar13[0xe];
          uVar6 = puVar13[0xf];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[4] = puVar13[0xc];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[5] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[6] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[7] = uVar6;
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) + 0x10;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 0x12: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *((int * PTR32 *)GEN_TOP(((int)pvVar10 + 0x2c)));
      pcVar3 = *((gen_code32 *)GEN_TOP((*piVar15 + 0xc)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = ((undefined4 *)GEN_TOP(((int)((int)(uintptr_t)puVar12) << 6)));
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = ((undefined4 *)GEN_TOP(((int)(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 0x1f & 0x3fU) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 6)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x40));
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13 + 8;
        do {
          puVar13 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x2c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x44)))));
          uVar4 = puVar13[1];
          uVar5 = puVar13[2];
          uVar6 = puVar13[3];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-8] = *puVar13;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-7] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-6] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-5] = uVar6;
          uVar4 = puVar13[5];
          uVar5 = puVar13[6];
          uVar6 = puVar13[7];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-4] = puVar13[4];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-3] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-2] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[-1] = uVar6;
          uVar4 = puVar13[9];
          uVar5 = puVar13[10];
          uVar6 = puVar13[0xb];
          *(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13[8];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[1] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[2] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[3] = uVar6;
          uVar4 = puVar13[0xd];
          uVar5 = puVar13[0xe];
          uVar6 = puVar13[0xf];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[4] = puVar13[0xc];
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[5] = uVar4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[6] = uVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c))[7] = uVar6;
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) + 0x10;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    default: ;
      return 1;
    case 0x14: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *((int * PTR32 *)GEN_TOP(((int)pvVar10 + 0x2c)));
      pcVar3 = *((gen_code32 *)GEN_TOP((*piVar15 + 0xc)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = ((undefined4 *)GEN_TOP(((int)((int)(uintptr_t)puVar12) * 4)));
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x34)))));
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13;
      puVar16 = ((undefined4 *)GEN_TOP(((int)(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x34))) >> 0x1f & 3U) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x34))) >> 2)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x4));
      F_00da1030(puVar13,0,(int)((int)(uintptr_t)puVar12) * 4);
      (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = ((undefined4 *)GEN_TOP(0x0));
      if (0 < (int)puVar12) {
        do {
          puVar13 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x5c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x40)))));
          (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = puVar13;
          if (puVar13 != ((undefined4 *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)puVar13 + 6))) = *((short *)GEN_TOP(((int)puVar13 + 6))) + 1;
            puVar13[2] = puVar13[2] + 1;
          }
          F_00e23570((*(undefined * PTR32 *)&gen_args[3]) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x50)),(*(undefined4 * PTR32 *)(gen_frame + 0x3c)),(*(uint *)(gen_frame + 0x44)));
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x50)) != ((undefined4 *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x50)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x50)) + 6))) - 1;
            piVar15 = (*(undefined4 * PTR32 *)(gen_frame + 0x50)) + 2;
            *piVar15 = *piVar15 - 1;
            if (*piVar15 == 0) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x50)))))((*(undefined4 * PTR32 *)(gen_frame + 0x50)) GEN_EDX_ARG,1);
            }
          }
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) + 1;
          puVar13 = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x40)) + 1)));
          (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = puVar13;
        } while ((int)puVar13 < (int)puVar12);
      }
      break;
    case 0x19: ;
      puVar13 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x5c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) GEN_EDX_ARG,0)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar13;
      if (puVar13 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar13 + 6))) = *((short *)GEN_TOP(((int)puVar13 + 6))) + 1;
        puVar13[2] = puVar13[2] + 1;
      }
      puVar13 = ((undefined4 *)GEN_TOP(F_00e20150((*(undefined * PTR32 *)(gen_frame + 0x48)) GEN_EDX_ARG,(*(int *)&gen_args[1]),&(*(undefined4 * PTR32 *)(gen_frame + 0x58)))));
      (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = puVar13;
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x58)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x58)) + 6))) - 1;
        piVar15 = (*(undefined4 * PTR32 *)(gen_frame + 0x58)) + 2;
        *piVar15 = *piVar15 - 1;
        if (*piVar15 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x58)))))((*(undefined4 * PTR32 *)(gen_frame + 0x58)) GEN_EDX_ARG,1);
        }
      }
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x50)) == ((undefined4 *)GEN_TOP(0x0))) goto switchD_00e2051b_caseD_0;
      uVar8 = F_00d929c0((*(undefined4 * PTR32 *)(gen_frame + 0x50)) GEN_EDX_ARG);
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *((int * PTR32 *)GEN_TOP(((int)pvVar10 + 0x2c)));
      pcVar3 = *((gen_code32 *)GEN_TOP((*piVar15 + 0xc)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = ((undefined4 *)GEN_TOP((uVar8 * (int)puVar12)));
      puVar16 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar16;
      uVar8 = F_00d929c0((*(undefined4 * PTR32 *)(gen_frame + 0x50)) GEN_EDX_ARG);
      puVar16 = ((undefined4 *)GEN_TOP(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) / (int)uVar8)));
      puVar13 = ((undefined4 *)GEN_TOP(F_00d929c0((*(undefined4 * PTR32 *)(gen_frame + 0x50)) GEN_EDX_ARG)));
      piVar15 = ((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2])));
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar13;
      puVar13 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar15 + 0x14))))(piVar15 GEN_EDX_ARG)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar13;
      uVar8 = F_00d929c0((*(undefined4 * PTR32 *)(gen_frame + 0x50)) GEN_EDX_ARG);
      F_00da1030((*(undefined4 * PTR32 *)(gen_frame + 0x28)),0,uVar8 * (int)(*(undefined4 * PTR32 *)(gen_frame + 0x34)));
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        do {
          if ((*(uint *)(gen_frame + 0x54)) != 0) break;
          uVar8 = F_00d929c0((*(undefined4 * PTR32 *)(gen_frame + 0x50)) GEN_EDX_ARG);
          piVar15 = ((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2])));
          (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = ((undefined4 *)GEN_TOP((uVar8 * (*(uint *)(gen_frame + 0x44)) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x28)))));
          puVar13 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar15 + 0x5c))))(piVar15 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x44)))));
          (*(undefined4 * PTR32 *)(gen_frame + 0x38)) = puVar13;
          if (puVar13 != ((undefined4 *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)puVar13 + 6))) = *((short *)GEN_TOP(((int)puVar13 + 6))) + 1;
            puVar13[2] = puVar13[2] + 1;
          }
          uVar8 = F_00e22120((*(undefined * PTR32 *)(gen_frame + 0x48)) GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x34)),&(*(undefined4 * PTR32 *)(gen_frame + 0x38)),(*(undefined * PTR32 *)&gen_args[3]));
          (*(uint *)(gen_frame + 0x54)) = uVar8;
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x38)) != ((undefined4 *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x38)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x38)) + 6))) - 1;
            piVar15 = (*(undefined4 * PTR32 *)(gen_frame + 0x38)) + 2;
            *piVar15 = *piVar15 - 1;
            if (*piVar15 == 0) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x38)))))((*(undefined4 * PTR32 *)(gen_frame + 0x38)) GEN_EDX_ARG,1);
            }
          }
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
        } while ((int)uVar8 < (int)puVar12);
      }
      if ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x58)) < 1) goto switchD_00e2051b_caseD_0;
      break;
    case 0x1c: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *((int * PTR32 *)GEN_TOP(((int)pvVar10 + 0x2c)));
      pcVar3 = *((gen_code32 *)GEN_TOP((*piVar15 + 0xc)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = ((undefined4 *)GEN_TOP(((int)((int)(uintptr_t)puVar12) * 8)));
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x34)))));
      (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = puVar13;
      puVar16 = ((undefined4 *)GEN_TOP(((int)(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x34))) >> 0x1f & 7U) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x34))) >> 3)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x8));
      F_00da1030(puVar13,0,(int)((int)(uintptr_t)puVar12) * 8);
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = ((undefined4 *)GEN_TOP(0x0));
      if (0 < (int)puVar12) {
        do {
          puVar13 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x5c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
          (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = puVar13;
          if (puVar13 != ((undefined4 *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)puVar13 + 6))) = *((short *)GEN_TOP(((int)puVar13 + 6))) + 1;
            puVar13[2] = puVar13[2] + 1;
          }
          F_00e23600((*(undefined * PTR32 *)&gen_args[3]) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x50)),(*(undefined4 * PTR32 *)(gen_frame + 0x40)),(*(uint *)(gen_frame + 0x44)));
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x50)) != ((undefined4 *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x50)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x50)) + 6))) - 1;
            piVar15 = (*(undefined4 * PTR32 *)(gen_frame + 0x50)) + 2;
            *piVar15 = *piVar15 - 1;
            if (*piVar15 == 0) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x50)))))((*(undefined4 * PTR32 *)(gen_frame + 0x50)) GEN_EDX_ARG,1);
            }
          }
          (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = (*(undefined4 * PTR32 *)(gen_frame + 0x40)) + 2;
          puVar13 = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) + 1)));
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13;
        } while ((int)puVar13 < (int)puVar12);
      }
      break;
    case 0x1d: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *((int * PTR32 *)GEN_TOP(((int)pvVar10 + 0x2c)));
      pcVar3 = *((gen_code32 *)GEN_TOP((*piVar15 + 0xc)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = ((undefined4 *)GEN_TOP(((int)((int)(uintptr_t)puVar12) * 4)));
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x34)))));
      puVar16 = ((undefined4 *)GEN_TOP(((int)(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x34))) >> 0x1f & 3U) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x34))) >> 2)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x4));
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = ((undefined4 *)GEN_TOP(0x0));
      if (0 < (int)puVar12) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = puVar13;
        do {
          if ((*(uint *)(gen_frame + 0x54)) != 0) break;
          (*(undefined4 *)(gen_frame + 0x4c)) = *(*(undefined4 * PTR32 *)&gen_args[2]);
          (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = (*(undefined4 * PTR32 *)(gen_frame + 0x3c));
          uVar8 = F_00e23690((*(undefined * PTR32 *)(gen_frame + 0x48)) GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x40)),(uint)*((byte *)GEN_TOP(((*(int *)&gen_args[1]) + 0xd))),(uint)&(*(undefined4 *)(gen_frame + 0x4c)),0,
                               (*(uint *)(gen_frame + 0x44)),(*(undefined * PTR32 *)&gen_args[3]));
          (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = (*(undefined4 * PTR32 *)(gen_frame + 0x40)) + 1;
          (*(uint *)(gen_frame + 0x54)) = uVar8;
          puVar13 = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) + 1)));
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13;
        } while ((int)puVar13 < (int)puVar12);
      }
      break;
    case 0x1e: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *((int * PTR32 *)GEN_TOP(((int)pvVar10 + 0x2c)));
      pcVar3 = *((gen_code32 *)GEN_TOP((*piVar15 + 0xc)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = ((undefined4 *)GEN_TOP(((int)((int)(uintptr_t)puVar12) * 4)));
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = ((undefined4 *)GEN_TOP(((int)(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 0x1f & 3U) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) >> 2)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x4));
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        do {
          uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x54))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x44)));
          (*(undefined4 * PTR32 *)(gen_frame + 0x34))[(*(uint *)(gen_frame + 0x44))] = uVar8;
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 0x20: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *((int * PTR32 *)GEN_TOP(((int)pvVar10 + 0x2c)));
      pcVar3 = *((gen_code32 *)GEN_TOP((*piVar15 + 0xc)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = ((undefined4 *)GEN_TOP(((int)((int)(uintptr_t)puVar12) * 2)));
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))));
      puVar16 = ((undefined4 *)GEN_TOP(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x3c))) / 2)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x2));
      (*(uint *)(gen_frame + 0x44)) = 0;
      if (0 < (int)puVar12) {
        do {
          extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x3c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))),(*(uint *)(gen_frame + 0x44)));
          (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)extraout_ST0_00)));
          *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x40)) + (*(uint *)(gen_frame + 0x44)) * 2))) =
               (short)((uint)gen_fl2bits((float)extraout_ST0_00) >> 0x10);
          uVar8 = (*(uint *)(gen_frame + 0x44)) + 1;
          (*(uint *)(gen_frame + 0x44)) = uVar8;
        } while ((int)uVar8 < (int)puVar12);
      }
      break;
    case 0x21: ;
      pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      piVar15 = *((int * PTR32 *)GEN_TOP(((int)pvVar10 + 0x2c)));
      pcVar3 = *((gen_code32 *)GEN_TOP((*piVar15 + 0xc)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = ((undefined4 *)GEN_TOP(((int)((int)(uintptr_t)puVar12) * 4)));
      puVar13 = ((undefined4 *)GEN_TOP((*pcVar3)(piVar15,&(*(undefined4 * PTR32 *)(gen_frame + 0x34)))));
      puVar16 = ((undefined4 *)GEN_TOP(((int)(((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x34))) >> 0x1f & 3U) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x34))) >> 2)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x4));
      (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = ((undefined4 *)GEN_TOP(0x0));
      if (0 < (int)puVar12) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = puVar13;
        do {
          if ((*(uint *)(gen_frame + 0x54)) != 0) break;
          (*(undefined4 *)(gen_frame + 0x4c)) = *(*(undefined4 * PTR32 *)&gen_args[2]);
          (*(undefined4 * PTR32 *)(gen_frame + 0x50)) = (*(undefined4 * PTR32 *)(gen_frame + 0x3c));
          uVar8 = F_00e23690((*(undefined * PTR32 *)(gen_frame + 0x48)) GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x40)),(uint)*((byte *)GEN_TOP(((*(int *)&gen_args[1]) + 0xd))),(uint)&(*(undefined4 *)(gen_frame + 0x4c)),0,
                               (*(uint *)(gen_frame + 0x44)),(*(undefined * PTR32 *)&gen_args[3]));
          (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = (*(undefined4 * PTR32 *)(gen_frame + 0x40)) + 1;
          (*(uint *)(gen_frame + 0x54)) = uVar8;
          puVar13 = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) + 1)));
          (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13;
        } while ((int)puVar13 < (int)puVar12);
      }
    }
    pvVar7 = (*(undefined * PTR32 *)&gen_args[3]);
    (*(float * PTR32 *)&gen_args[0])[1] = ((float)gen_bits2f((unsigned int)(uintptr_t)(puVar12)));
    (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(((int)((int)(uintptr_t)puVar12) * (int)(*(undefined4 * PTR32 *)(gen_frame + 0x58)))));
    piVar15 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[3]) + 0xc)));
    *(*(float * PTR32 *)&gen_args[0]) = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x28)))));
    if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[3]) + 0x10))) == (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[3]) + 0x14))) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516a4),piVar15,8);
    }
    iVar14 = *((int *)GEN_TOP(((int)pvVar7 + 0x10)));
    pfVar1 = ((float *)GEN_TOP((*piVar15 + iVar14 * 8)));
    *((int *)GEN_TOP(((int)pvVar7 + 0x10))) = iVar14 + 1;
    *pfVar1 = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x28)))));
    pfVar1[1] = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)&gen_args[2]))));
switchD_00e2051b_caseD_0: ;
    if (*((char *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) == '\x16') {
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x48)) + 4))) == 0) {
        puVar16 = ((undefined4 *)GEN_TOP(((uint)puVar16 | 0x80000000)));
      }
      (*(float * PTR32 *)&gen_args[0])[2] = ((float)gen_bits2f((unsigned int)(uintptr_t)(puVar16)));
    }
    return (*(uint *)(gen_frame + 0x54));
  }
  iVar17 = (int)*((short *)GEN_TOP((uVar8 + 8)));
  (*(float *)(gen_frame + 0x2c)) = (*(float *)(gen_frame + 0xc));
  iVar14 = (int)gen_fl2bits((*(float *)(gen_frame + 0xc))) * iVar17;
  (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(iVar14));
  pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  fVar11 = gen_bits2f(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar10 + 0x2c))) + 0xc))))
                                (*((int * PTR32 *)GEN_TOP(((int)pvVar10 + 0x2c))) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[2])));
  (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(fVar11)));
  (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0xc));
  (*(int *)(gen_frame + 0x24)) = iVar17;
  (*(undefined4 *)(gen_frame + 0x18)) = 1;
  (*(float *)(gen_frame + 0x1c)) = fVar11;
  (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[2]) / iVar17)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = (*(undefined4 * PTR32 *)(gen_frame + 0x3c));
  switch((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x3c)))) {
  case 0xc: ;
  case 0xd: ;
    (*(undefined4 *)(gen_frame + 0x18)) = 4;
    break;
  case 0xe: ;
  case 0xf: ;
  case 0x10: ;
    (*(undefined4 *)(gen_frame + 0x18)) = 0xc;
    break;
  case 0x11: ;
  case 0x12: ;
    (*(undefined4 *)(gen_frame + 0x18)) = 0x10;
    break;
  default: ;
    goto switchD_00e20467_default;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = ((undefined4 *)GEN_TOP(0xb));
switchD_00e20467_default: ;
  F_00dbc0e0(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 * PTR32 *)(gen_frame + 0x14)));
  if (0 < iVar17) {
    *(*(float * PTR32 *)&gen_args[0]) = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x28)))));
    (*(float * PTR32 *)&gen_args[0])[1] = (*(float *)(gen_frame + 0x2c));
    F_00e23500((*(undefined * PTR32 *)&gen_args[3]) GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x28)),iVar14);
  }
  if (*((char *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) == '\x16') {
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x48)) + 4))) == 0) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = ((undefined4 *)GEN_TOP(((uint)(*(undefined4 * PTR32 *)(gen_frame + 0x30)) | 0x80000000)));
    }
    (*(float * PTR32 *)&gen_args[0])[2] = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x30)))));
  }
  return 0;
}

/* ref: FUN_00e21460 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e21460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xe21460u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[6];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  int iVar1;
  int * piVar2;
  code * pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 * puVar6;
  int * piVar7;
  uint uVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined4 uVar11;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  undefined8 uVar12;
  
  puVar6 = (*(undefined4 * PTR32 *)&gen_args[2]);
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = param_1;
  (*(uint *)(gen_frame + 0x18)) = 0;
  uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x14))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) GEN_EDX_FWD);
  piVar7 = (*(int * PTR32 *)&gen_args[4]);
  if (uVar8 == 0) {
    *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(uint *)(gen_frame + 0x18));
    return 0;
  }
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x10)) = (ushort)~*((ushort *)GEN_TOP(((*(uint *)&gen_args[1]) + 0x10))) >> 9 & 1;
  switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP(((*(uint *)&gen_args[1]) + 0xd))))) {
  case 0: ;
    goto switchD_00e214b9_caseD_0;
  case 1: ;
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
    piVar2 = ((int *)GEN_TOP(*puVar6));
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x14)));
    (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(0x1));
    (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(0x0));
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      do {
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x4c))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[3]));
        *((bool *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[3]) + *piVar7))) = uVar8 != 0;
        (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[3]) + 1)));
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
      } while ((int)(*(undefined * PTR32 *)&gen_args[3]) < (int)uVar8);
    }
    break;
  case 2: ;
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
    piVar2 = ((int *)GEN_TOP(*puVar6));
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x14)));
    (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(0x1));
    (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(0x0));
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      do {
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x4c))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[3]));
        *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[3]) + *piVar7))) = (char)uVar8;
        (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[3]) + 1)));
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
      } while ((int)(*(undefined * PTR32 *)&gen_args[3]) < (int)uVar8);
    }
    break;
  case 3: ;
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
    piVar2 = ((int *)GEN_TOP(*puVar6));
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x14)));
    (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(0x1));
    (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(0x0));
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      do {
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x4c))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[3]));
        *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[3]) + *piVar7))) = (char)uVar8;
        (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[3]) + 1)));
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
      } while ((int)(*(undefined * PTR32 *)&gen_args[3]) < (int)uVar8);
    }
    break;
  case 4: ;
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
    piVar2 = ((int *)GEN_TOP(*puVar6));
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x14)));
    (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(0x1));
    (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(0x0));
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      do {
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x4c))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[3]));
        *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[3]) + *piVar7))) = (char)uVar8;
        (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[3]) + 1)));
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
      } while ((int)(*(undefined * PTR32 *)&gen_args[3]) < (int)uVar8);
    }
    break;
  case 5: ;
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
    piVar2 = ((int *)GEN_TOP(*puVar6));
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x14)));
    (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(0x2));
    (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(0x0));
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      do {
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x4c))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[3]));
        *((short *)GEN_TOP((*piVar7 + (int)(*(undefined * PTR32 *)&gen_args[3]) * 2))) = (short)uVar8;
        (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[3]) + 1)));
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
      } while ((int)(*(undefined * PTR32 *)&gen_args[3]) < (int)uVar8);
    }
    break;
  case 6: ;
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
    piVar2 = ((int *)GEN_TOP(*puVar6));
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x14)));
    (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(0x2));
    (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(0x0));
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      do {
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x4c))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[3]));
        *((short *)GEN_TOP((*piVar7 + (int)(*(undefined * PTR32 *)&gen_args[3]) * 2))) = (short)uVar8;
        (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[3]) + 1)));
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
      } while ((int)(*(undefined * PTR32 *)&gen_args[3]) < (int)uVar8);
    }
    break;
  case 7: ;
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
    piVar2 = ((int *)GEN_TOP(*puVar6));
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x14)));
    (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(0x4));
    (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(0x0));
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      do {
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x4c))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[3]));
        *((uint *)GEN_TOP((*piVar7 + (int)(*(undefined * PTR32 *)&gen_args[3]) * 4))) = uVar8;
        (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[3]) + 1)));
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
      } while ((int)(*(undefined * PTR32 *)&gen_args[3]) < (int)uVar8);
    }
    break;
  case 8: ;
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
    piVar2 = ((int *)GEN_TOP(*puVar6));
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x14)));
    (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(0x4));
    (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(0x0));
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      do {
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x4c))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[3]));
        *((uint *)GEN_TOP((*piVar7 + (int)(*(undefined * PTR32 *)&gen_args[3]) * 4))) = uVar8;
        (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[3]) + 1)));
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
      } while ((int)(*(undefined * PTR32 *)&gen_args[3]) < (int)uVar8);
    }
    break;
  case 9: ;
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
    piVar2 = ((int *)GEN_TOP(*puVar6));
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x14)));
    (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(0x8));
    (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(0x0));
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      do {
        uVar12 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x54))))(((int *)GEN_TOP(*puVar6)),(*(undefined * PTR32 *)&gen_args[3]));
        uVar11 = (undefined4)((ulonglong)uVar12 >> 0x20);
        iVar1 = *piVar7;
        (*(int *)(gen_frame + 0x4)) = uVar11;
        *((int *)GEN_TOP((iVar1 + (int)(*(undefined * PTR32 *)&gen_args[3]) * 8))) = (int)uVar12;
        *((undefined4 *)GEN_TOP((iVar1 + 4 + (int)(*(undefined * PTR32 *)&gen_args[3]) * 8))) = uVar11;
        (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[3]) + 1)));
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
      } while ((int)(*(undefined * PTR32 *)&gen_args[3]) < (int)uVar8);
    }
    break;
  case 10: ;
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
    piVar2 = ((int *)GEN_TOP(*puVar6));
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x14)));
    (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(0x8));
    (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(0x0));
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      do {
        uVar12 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x54))))(((int *)GEN_TOP(*puVar6)),(*(undefined * PTR32 *)&gen_args[3]));
        uVar11 = (undefined4)((ulonglong)uVar12 >> 0x20);
        iVar1 = *piVar7;
        (*(int *)(gen_frame + 0x4)) = uVar11;
        *((int *)GEN_TOP((iVar1 + (int)(*(undefined * PTR32 *)&gen_args[3]) * 8))) = (int)uVar12;
        *((undefined4 *)GEN_TOP((iVar1 + 4 + (int)(*(undefined * PTR32 *)&gen_args[3]) * 8))) = uVar11;
        (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[3]) + 1)));
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
      } while ((int)(*(undefined * PTR32 *)&gen_args[3]) < (int)uVar8);
    }
    break;
  case 0xb: ;
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
    piVar2 = ((int *)GEN_TOP(*puVar6));
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x14)));
    (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(0x4));
    (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(0x0));
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      do {
        extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x3c))))(((int *)GEN_TOP(*puVar6)),(*(undefined * PTR32 *)&gen_args[3]));
        *((float *)GEN_TOP((*piVar7 + (int)(*(undefined * PTR32 *)&gen_args[3]) * 4))) = (float)extraout_ST0;
        (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[3]) + 1)));
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
      } while ((int)(*(undefined * PTR32 *)&gen_args[3]) < (int)uVar8);
    }
    break;
  case 0xc: ;
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
    piVar2 = ((int *)GEN_TOP(*puVar6));
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x14)));
    (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(0x10));
    (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(0x0));
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      (*(uint *)&gen_args[1]) = 0;
      do {
        puVar10 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x2c))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[3]))));
        uVar11 = puVar10[1];
        uVar4 = puVar10[2];
        uVar5 = puVar10[3];
        (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[3]) + 1)));
        puVar9 = ((undefined4 *)GEN_TOP((*piVar7 + (*(uint *)&gen_args[1]))));
        *puVar9 = *puVar10;
        puVar9[1] = uVar11;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        piVar2 = ((int *)GEN_TOP(*puVar6));
        (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) + 0x10;
        pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x14)));
        uVar8 = (*pcVar3)(piVar2);
      } while ((int)(*(undefined * PTR32 *)&gen_args[3]) < (int)uVar8);
    }
    break;
  case 0xd: ;
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
    piVar2 = ((int *)GEN_TOP(*puVar6));
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x14)));
    (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(0x10));
    (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(0x0));
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      (*(uint *)&gen_args[1]) = 0;
      do {
        puVar10 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x2c))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[3]))));
        uVar11 = puVar10[1];
        uVar4 = puVar10[2];
        uVar5 = puVar10[3];
        (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[3]) + 1)));
        puVar9 = ((undefined4 *)GEN_TOP((*piVar7 + (*(uint *)&gen_args[1]))));
        *puVar9 = *puVar10;
        puVar9[1] = uVar11;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        piVar2 = ((int *)GEN_TOP(*puVar6));
        (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) + 0x10;
        pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x14)));
        uVar8 = (*pcVar3)(piVar2);
      } while ((int)(*(undefined * PTR32 *)&gen_args[3]) < (int)uVar8);
    }
    break;
  case 0xe: ;
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
    piVar2 = ((int *)GEN_TOP(*puVar6));
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x14)));
    (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(0x30));
    (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(0x0));
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      (*(uint *)&gen_args[1]) = 0;
      do {
        puVar10 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x2c))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[3]))));
        iVar1 = *piVar7;
        uVar11 = puVar10[1];
        uVar4 = puVar10[2];
        uVar5 = puVar10[3];
        (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[3]) + 1)));
        puVar9 = ((undefined4 *)GEN_TOP((iVar1 + (*(uint *)&gen_args[1]))));
        *puVar9 = *puVar10;
        puVar9[1] = uVar11;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        uVar11 = puVar10[5];
        uVar4 = puVar10[6];
        uVar5 = puVar10[7];
        puVar9 = ((undefined4 *)GEN_TOP((iVar1 + 0x10 + (*(uint *)&gen_args[1]))));
        *puVar9 = puVar10[4];
        puVar9[1] = uVar11;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        uVar11 = puVar10[9];
        uVar4 = puVar10[10];
        uVar5 = puVar10[0xb];
        puVar9 = ((undefined4 *)GEN_TOP((iVar1 + 0x20 + (*(uint *)&gen_args[1]))));
        *puVar9 = puVar10[8];
        puVar9[1] = uVar11;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        piVar2 = ((int *)GEN_TOP(*puVar6));
        (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) + 0x30;
        pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x14)));
        uVar8 = (*pcVar3)(piVar2);
      } while ((int)(*(undefined * PTR32 *)&gen_args[3]) < (int)uVar8);
    }
    break;
  case 0xf: ;
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
    piVar2 = ((int *)GEN_TOP(*puVar6));
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x14)));
    (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(0x30));
    (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(0x0));
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      (*(uint *)&gen_args[1]) = 0;
      do {
        puVar10 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x2c))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[3]))));
        iVar1 = *piVar7;
        uVar11 = puVar10[1];
        uVar4 = puVar10[2];
        uVar5 = puVar10[3];
        (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[3]) + 1)));
        puVar9 = ((undefined4 *)GEN_TOP((iVar1 + (*(uint *)&gen_args[1]))));
        *puVar9 = *puVar10;
        puVar9[1] = uVar11;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        uVar11 = puVar10[5];
        uVar4 = puVar10[6];
        uVar5 = puVar10[7];
        puVar9 = ((undefined4 *)GEN_TOP((iVar1 + 0x10 + (*(uint *)&gen_args[1]))));
        *puVar9 = puVar10[4];
        puVar9[1] = uVar11;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        uVar11 = puVar10[9];
        uVar4 = puVar10[10];
        uVar5 = puVar10[0xb];
        puVar9 = ((undefined4 *)GEN_TOP((iVar1 + 0x20 + (*(uint *)&gen_args[1]))));
        *puVar9 = puVar10[8];
        puVar9[1] = uVar11;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        piVar2 = ((int *)GEN_TOP(*puVar6));
        (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) + 0x30;
        pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x14)));
        uVar8 = (*pcVar3)(piVar2);
      } while ((int)(*(undefined * PTR32 *)&gen_args[3]) < (int)uVar8);
    }
    break;
  case 0x10: ;
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
    piVar2 = ((int *)GEN_TOP(*puVar6));
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x14)));
    (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(0x30));
    (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(0x0));
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      (*(uint *)&gen_args[1]) = 0;
      do {
        puVar10 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x2c))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[3]))));
        iVar1 = *piVar7;
        uVar11 = puVar10[1];
        uVar4 = puVar10[2];
        uVar5 = puVar10[3];
        (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[3]) + 1)));
        puVar9 = ((undefined4 *)GEN_TOP((iVar1 + (*(uint *)&gen_args[1]))));
        *puVar9 = *puVar10;
        puVar9[1] = uVar11;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        uVar11 = puVar10[5];
        uVar4 = puVar10[6];
        uVar5 = puVar10[7];
        puVar9 = ((undefined4 *)GEN_TOP((iVar1 + 0x10 + (*(uint *)&gen_args[1]))));
        *puVar9 = puVar10[4];
        puVar9[1] = uVar11;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        uVar11 = puVar10[9];
        uVar4 = puVar10[10];
        uVar5 = puVar10[0xb];
        puVar9 = ((undefined4 *)GEN_TOP((iVar1 + 0x20 + (*(uint *)&gen_args[1]))));
        *puVar9 = puVar10[8];
        puVar9[1] = uVar11;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        piVar2 = ((int *)GEN_TOP(*puVar6));
        (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) + 0x30;
        pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x14)));
        uVar8 = (*pcVar3)(piVar2);
      } while ((int)(*(undefined * PTR32 *)&gen_args[3]) < (int)uVar8);
    }
    break;
  case 0x11: ;
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
    piVar2 = ((int *)GEN_TOP(*puVar6));
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x14)));
    (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(0x40));
    (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(0x0));
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      (*(uint *)&gen_args[1]) = 0;
      do {
        puVar9 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x2c))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[3]))));
        uVar11 = puVar9[1];
        uVar4 = puVar9[2];
        uVar5 = puVar9[3];
        (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[3]) + 1)));
        puVar10 = ((undefined4 *)GEN_TOP((*piVar7 + (*(uint *)&gen_args[1]))));
        *puVar10 = *puVar9;
        puVar10[1] = uVar11;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        uVar11 = puVar9[5];
        uVar4 = puVar9[6];
        uVar5 = puVar9[7];
        puVar10[4] = puVar9[4];
        puVar10[5] = uVar11;
        puVar10[6] = uVar4;
        puVar10[7] = uVar5;
        uVar11 = puVar9[9];
        uVar4 = puVar9[10];
        uVar5 = puVar9[0xb];
        puVar10[8] = puVar9[8];
        puVar10[9] = uVar11;
        puVar10[10] = uVar4;
        puVar10[0xb] = uVar5;
        uVar11 = puVar9[0xd];
        uVar4 = puVar9[0xe];
        uVar5 = puVar9[0xf];
        puVar10[0xc] = puVar9[0xc];
        puVar10[0xd] = uVar11;
        puVar10[0xe] = uVar4;
        puVar10[0xf] = uVar5;
        piVar2 = ((int *)GEN_TOP(*puVar6));
        (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) + 0x40;
        pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x14)));
        uVar8 = (*pcVar3)(piVar2);
      } while ((int)(*(undefined * PTR32 *)&gen_args[3]) < (int)uVar8);
    }
    break;
  case 0x12: ;
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
    piVar2 = ((int *)GEN_TOP(*puVar6));
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x14)));
    (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(0x40));
    (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(0x0));
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      (*(uint *)&gen_args[1]) = 0;
      do {
        puVar9 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x2c))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[3]))));
        uVar11 = puVar9[1];
        uVar4 = puVar9[2];
        uVar5 = puVar9[3];
        (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[3]) + 1)));
        puVar10 = ((undefined4 *)GEN_TOP((*piVar7 + (*(uint *)&gen_args[1]))));
        *puVar10 = *puVar9;
        puVar10[1] = uVar11;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        uVar11 = puVar9[5];
        uVar4 = puVar9[6];
        uVar5 = puVar9[7];
        puVar10[4] = puVar9[4];
        puVar10[5] = uVar11;
        puVar10[6] = uVar4;
        puVar10[7] = uVar5;
        uVar11 = puVar9[9];
        uVar4 = puVar9[10];
        uVar5 = puVar9[0xb];
        puVar10[8] = puVar9[8];
        puVar10[9] = uVar11;
        puVar10[10] = uVar4;
        puVar10[0xb] = uVar5;
        uVar11 = puVar9[0xd];
        uVar4 = puVar9[0xe];
        uVar5 = puVar9[0xf];
        puVar10[0xc] = puVar9[0xc];
        puVar10[0xd] = uVar11;
        puVar10[0xe] = uVar4;
        puVar10[0xf] = uVar5;
        piVar2 = ((int *)GEN_TOP(*puVar6));
        (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) + 0x40;
        pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x14)));
        uVar8 = (*pcVar3)(piVar2);
      } while ((int)(*(undefined * PTR32 *)&gen_args[3]) < (int)uVar8);
    }
    break;
  default: ;
    return 1;
  case 0x14: ;
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
    iVar1 = *piVar7;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(0x4));
    F_00da1030(iVar1,0,(uVar8 & 0xffff) * 4);
    (*(int * PTR32 *)&gen_args[4]) = ((int *)GEN_TOP(0x0));
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
    if (0 < (int)uVar8) {
      do {
        (*(uint *)&gen_args[1]) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x5c))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[4]));
        if ((*(uint *)&gen_args[1]) != 0) {
          *((short *)GEN_TOP(((*(uint *)&gen_args[1]) + 6))) = *((short *)GEN_TOP(((*(uint *)&gen_args[1]) + 6))) + 1;
          *((int *)GEN_TOP(((*(uint *)&gen_args[1]) + 8))) = *((int *)GEN_TOP(((*(uint *)&gen_args[1]) + 8))) + 1;
        }
        iVar1 = *piVar7;
        F_00e23570((*(undefined * PTR32 *)&gen_args[3]) GEN_EDX_ARG,&(*(uint *)&gen_args[1]),iVar1 + (int)(*(int * PTR32 *)&gen_args[4]) * 4,(*(uint *)(gen_frame + 0x10)));
        if ((*(uint *)&gen_args[1]) != 0) {
          *((short *)GEN_TOP(((*(uint *)&gen_args[1]) + 6))) = *((short *)GEN_TOP(((*(uint *)&gen_args[1]) + 6))) - 1;
          piVar2 = ((int *)GEN_TOP(((*(uint *)&gen_args[1]) + 8)));
          *piVar2 = *piVar2 - 1;
          if (*piVar2 == 0) {
            (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(uint *)&gen_args[1]))))))((*(uint *)&gen_args[1]),1);
          }
        }
        (*(int * PTR32 *)&gen_args[4]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[4]) + 1)));
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
      } while ((int)(*(int * PTR32 *)&gen_args[4]) < (int)uVar8);
    }
    break;
  case 0x19: ;
    (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x5c))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG,0)));
    if ((*(undefined4 * PTR32 *)&gen_args[2]) != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[2]) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[2]) + 6))) + 1;
      (*(undefined4 * PTR32 *)&gen_args[2])[2] = (*(undefined4 * PTR32 *)&gen_args[2])[2] + 1;
    }
    (*(uint *)&gen_args[1]) = F_00e20150((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,(*(uint *)&gen_args[1]),&(*(undefined4 * PTR32 *)&gen_args[2]));
    if ((*(undefined4 * PTR32 *)&gen_args[2]) != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[2]) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[2]) + 6))) - 1;
      piVar2 = (*(undefined4 * PTR32 *)&gen_args[2]) + 2;
      *piVar2 = *piVar2 - 1;
      if (*piVar2 == 0) {
        pcVar3 = *((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2])));
        (*pcVar3)((*(undefined4 * PTR32 *)&gen_args[2]),1);
      }
    }
    if ((*(uint *)&gen_args[1]) == 0) {
      return (*(uint *)(gen_frame + 0x14));
    }
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(F_00d929c0((*(uint *)&gen_args[1]) GEN_EDX_ARG)));
    piVar2 = ((int *)GEN_TOP(*puVar6));
    pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x14)));
    (*(int * PTR32 *)&gen_args[4]) = ((int *)GEN_TOP((*pcVar3)(piVar2)));
    uVar8 = F_00d929c0((*(uint *)&gen_args[1]) GEN_EDX_ARG);
    F_00da1030(*piVar7,0,uVar8 * (int)(*(int * PTR32 *)&gen_args[4]));
    (*(int * PTR32 *)&gen_args[4]) = ((int *)GEN_TOP(0x0));
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
    if (0 < (int)uVar8) {
      do {
        if ((*(uint *)(gen_frame + 0x14)) != 0) break;
        uVar8 = F_00d929c0((*(uint *)&gen_args[1]) GEN_EDX_ARG);
        (*(uint *)(gen_frame + 0x10)) = *piVar7 + uVar8 * (int)(*(int * PTR32 *)&gen_args[4]);
        puVar9 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x5c))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[4]))));
        (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar9;
        if (puVar9 != ((undefined4 *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)puVar9 + 6))) = *((short *)GEN_TOP(((int)puVar9 + 6))) + 1;
          puVar9[2] = puVar9[2] + 1;
        }
        uVar8 = F_00e22120((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x10)),&(*(undefined4 * PTR32 *)(gen_frame + 0x8)),(*(undefined * PTR32 *)&gen_args[3]));
        (*(uint *)(gen_frame + 0x14)) = uVar8;
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x8)) != ((undefined4 *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 6))) - 1;
          piVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 2;
          *piVar2 = *piVar2 - 1;
          if (*piVar2 == 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x8)))))((*(undefined4 * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,1);
          }
        }
        (*(int * PTR32 *)&gen_args[4]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[4]) + 1)));
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
      } while ((int)(*(int * PTR32 *)&gen_args[4]) < (int)uVar8);
    }
    if ((int)(*(undefined4 * PTR32 *)&gen_args[2]) < 1) {
      return (*(uint *)(gen_frame + 0x14));
    }
    break;
  case 0x1c: ;
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
    iVar1 = *piVar7;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(0x8));
    F_00da1030(iVar1,0,(uVar8 & 0xffff) * 8);
    (*(int * PTR32 *)&gen_args[4]) = ((int *)GEN_TOP(0x0));
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
    if (0 < (int)uVar8) {
      do {
        (*(uint *)&gen_args[1]) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x5c))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[4]));
        if ((*(uint *)&gen_args[1]) != 0) {
          *((short *)GEN_TOP(((*(uint *)&gen_args[1]) + 6))) = *((short *)GEN_TOP(((*(uint *)&gen_args[1]) + 6))) + 1;
          *((int *)GEN_TOP(((*(uint *)&gen_args[1]) + 8))) = *((int *)GEN_TOP(((*(uint *)&gen_args[1]) + 8))) + 1;
        }
        iVar1 = *piVar7;
        F_00e23600((*(undefined * PTR32 *)&gen_args[3]) GEN_EDX_ARG,&(*(uint *)&gen_args[1]),iVar1 + (int)(*(int * PTR32 *)&gen_args[4]) * 8,(*(uint *)(gen_frame + 0x10)));
        if ((*(uint *)&gen_args[1]) != 0) {
          *((short *)GEN_TOP(((*(uint *)&gen_args[1]) + 6))) = *((short *)GEN_TOP(((*(uint *)&gen_args[1]) + 6))) - 1;
          piVar2 = ((int *)GEN_TOP(((*(uint *)&gen_args[1]) + 8)));
          *piVar2 = *piVar2 - 1;
          if (*piVar2 == 0) {
            (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(uint *)&gen_args[1]))))))((*(uint *)&gen_args[1]),1);
          }
        }
        (*(int * PTR32 *)&gen_args[4]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[4]) + 1)));
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
      } while ((int)(*(int * PTR32 *)&gen_args[4]) < (int)uVar8);
    }
    break;
  case 0x1d: ;
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
    piVar2 = ((int *)GEN_TOP(*puVar6));
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x14)));
    (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(0x4));
    (*(int * PTR32 *)&gen_args[4]) = ((int *)GEN_TOP(0x0));
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      do {
        if ((*(uint *)(gen_frame + 0x14)) != 0) break;
        (*(undefined4 *)(gen_frame + 0x0)) = *puVar6;
        (*(int *)(gen_frame + 0x4)) = (int)(*(int * PTR32 *)&gen_args[4]);
        uVar8 = F_00e23690((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,*piVar7 + (int)(*(int * PTR32 *)&gen_args[4]) * 4,(uint)*((byte *)GEN_TOP(((*(uint *)&gen_args[1]) + 0xd))),
                             (uint)&(*(undefined4 *)(gen_frame + 0x0)),0,(*(uint *)(gen_frame + 0x10)),(*(undefined * PTR32 *)&gen_args[3]));
        (*(int * PTR32 *)&gen_args[4]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[4]) + 1)));
        (*(uint *)(gen_frame + 0x14)) = uVar8;
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
      } while ((int)(*(int * PTR32 *)&gen_args[4]) < (int)uVar8);
    }
    break;
  case 0x1e: ;
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
    piVar2 = ((int *)GEN_TOP(*puVar6));
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x14)));
    (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(0x4));
    (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(0x0));
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      do {
        uVar12 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x54))))(((int *)GEN_TOP(*puVar6)),(*(undefined * PTR32 *)&gen_args[3]));
        (*(int *)(gen_frame + 0x4)) = (int)((ulonglong)uVar12 >> 0x20);
        *((int *)GEN_TOP((*piVar7 + (int)(*(undefined * PTR32 *)&gen_args[3]) * 4))) = (int)uVar12;
        (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[3]) + 1)));
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
      } while ((int)(*(undefined * PTR32 *)&gen_args[3]) < (int)uVar8);
    }
    break;
  case 0x20: ;
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
    piVar2 = ((int *)GEN_TOP(*puVar6));
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x14)));
    (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(0x2));
    (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(0x0));
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      do {
        extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x3c))))(((int *)GEN_TOP(*puVar6)),(*(undefined * PTR32 *)&gen_args[3]));
        (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)extraout_ST0_00);
        *((short *)GEN_TOP((*piVar7 + (int)(*(undefined * PTR32 *)&gen_args[3]) * 2))) = (short)((*(uint *)&gen_args[1]) >> 0x10);
        piVar2 = ((int *)GEN_TOP(*puVar6));
        (*(undefined * PTR32 *)&gen_args[3]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[3]) + 1)));
        pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x14)));
        uVar8 = (*pcVar3)(piVar2);
      } while ((int)(*(undefined * PTR32 *)&gen_args[3]) < (int)uVar8);
    }
    break;
  case 0x21: ;
    uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
    piVar2 = ((int *)GEN_TOP(*puVar6));
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = (short)uVar8;
    (*(uint *)(gen_frame + 0x18)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)),(short)uVar8);
    pcVar3 = *((gen_code32 *)GEN_TOP((*piVar2 + 0x14)));
    (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(0x4));
    (*(int * PTR32 *)&gen_args[4]) = ((int *)GEN_TOP(0x0));
    uVar8 = (*pcVar3)(piVar2);
    if (0 < (int)uVar8) {
      do {
        if ((*(uint *)(gen_frame + 0x14)) != 0) break;
        (*(undefined4 *)(gen_frame + 0x0)) = *puVar6;
        (*(int *)(gen_frame + 0x4)) = (int)(*(int * PTR32 *)&gen_args[4]);
        uVar8 = F_00e23690((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,*piVar7 + (int)(*(int * PTR32 *)&gen_args[4]) * 4,(uint)*((byte *)GEN_TOP(((*(uint *)&gen_args[1]) + 0xd))),
                             (uint)&(*(undefined4 *)(gen_frame + 0x0)),0,(*(uint *)(gen_frame + 0x10)),(*(undefined * PTR32 *)&gen_args[3]));
        (*(int * PTR32 *)&gen_args[4]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[4]) + 1)));
        (*(uint *)(gen_frame + 0x14)) = uVar8;
        uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar6)) + 0x14))))(((int *)GEN_TOP(*puVar6)) GEN_EDX_ARG);
      } while ((int)(*(int * PTR32 *)&gen_args[4]) < (int)uVar8);
    }
  }
  *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + 2))) = (short)*piVar7 - (short)(*(undefined4 * PTR32 *)&gen_args[0]);
  *piVar7 = *piVar7 + (((*(uint *)(gen_frame + 0x18)) & 0xffff) * (int)(*(undefined4 * PTR32 *)&gen_args[2]) + 0xf & 0xfffffff0);
  *(undefined2 *)(*(undefined4 * PTR32 *)&gen_args[0]) = (undefined2)(*(uint *)(gen_frame + 0x18));
switchD_00e214b9_caseD_0: ;
  return (*(uint *)(gen_frame + 0x14));
}

/* ref: FUN_00e22120 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e22120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe22120u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_TOP(0x60, 0, 4);
  int * piVar1;
  uint * puVar2;
  code * pcVar3;
  undefined * pvVar4;
  uint uVar5;
  uint uVar6;
  undefined4 * puVar7;
  uint * puVar8;
  int * piVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  LPVOID pvVar12;
  uint * puVar13;
  int iVar14;
  int iVar15;
  
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = this;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = ((undefined4 *)GEN_TOP(0x0));
  uVar5 = F_00e20100(this GEN_EDX_FWD,param_2);
  (*(uint *)(gen_frame + 0x38)) = uVar5;
  uVar6 = F_00d929c0(uVar5 GEN_EDX_ARG);
  (*(int *)(gen_frame + 0x30)) = (uVar6 + 0xf & 0xfffffff0) + param_1;
  do {
    if (uVar5 == 0) {
      return (uint)(*(undefined4 * PTR32 *)(gen_frame + 0x58));
    }
    (*(int *)(gen_frame + 0x48)) = 0;
    uVar6 = F_00d92850(uVar5 GEN_EDX_ARG);
    if (0 < (int)uVar6) {
      do {
        puVar7 = ((undefined4 *)GEN_TOP(F_00d92860(uVar5 GEN_EDX_ARG,(*(int *)(gen_frame + 0x48)))));
        puVar13 = ((uint *)GEN_TOP(((uint)*((ushort *)GEN_TOP(((int)puVar7 + 0x12))) + param_1)));
        (*(uint *)(gen_frame + 0x4c)) = (uint)*(byte *)(puVar7 + 3);
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_2)) + 0xc))))(((int *)GEN_TOP(*param_2)) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x28)),*puVar7);
        if (((*(int * PTR32 *)(gen_frame + 0x28)) == ((int *)GEN_TOP(0x0))) ||
           (uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x68))))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x2c))), uVar6 == 0)) {
          (*(undefined4 *)(gen_frame + 0x0)) = 0;
          (*(undefined4 *)(gen_frame + 0x4)) = 0;
          (*(undefined4 *)(gen_frame + 0x8)) = 0;
          (*(int *)(gen_frame + 0xc)) = 0;
          if ((*(int * PTR32 *)(gen_frame + 0x28)) != ((int *)GEN_TOP(0x0))) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x28)) + 100))))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x2c)),&(*(undefined4 *)(gen_frame + 0x0)));
          }
          if (*(char *)(puVar7 + 3) == '\x16') {
            puVar13[2] = 0x80000000;
          }
          uVar6 = F_00d92ab0(uVar5 GEN_EDX_ARG,(*(int *)(gen_frame + 0x48)));
          if ((uVar6 == 0) ||
             (uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_2)) + 0x6c))))(((int *)GEN_TOP(*param_2)) GEN_EDX_ARG), uVar6 == 0)) {
            if ((((*(int * PTR32 *)(gen_frame + 0x28)) != ((int *)GEN_TOP(0x0))) && ((*(int *)(gen_frame + 0xc)) != 0)) ||
               (((*(uint *)(gen_frame + 0x4c)) == 0x19 && ((*(ushort *)(puVar7 + 4) & 0x400) == 0)))) goto LAB_00e22255;
          }
          else {
            uVar6 = F_00da6030(puVar7 GEN_EDX_ARG);
            uVar5 = F_00d92bc0(uVar5 GEN_EDX_ARG,(*(int *)(gen_frame + 0x48)));
            F_00da1010(puVar13,uVar5,uVar6);
          }
          goto LAB_00e22812;
        }
LAB_00e22255: ;
        uVar5 = F_00da5ff0(puVar7 GEN_EDX_ARG);
        if (uVar5 == 0) {
          uVar5 = 1;
          puVar8 = ((uint *)GEN_TOP(F_00da6030(puVar7 GEN_EDX_ARG)));
        }
        else {
          uVar5 = F_00da5ff0(puVar7 GEN_EDX_ARG);
          uVar6 = F_00da6030(puVar7 GEN_EDX_ARG);
          puVar8 = ((uint *)GEN_TOP(((int)uVar6 / (int)uVar5)));
        }
        (*(uint * PTR32 *)(gen_frame + 0x40)) = puVar8;
        uVar6 = (ushort)~*(ushort *)(puVar7 + 4) >> 9 & 1;
        (*(uint *)(gen_frame + 0x50)) = uVar6;
        switch((unsigned int)(uintptr_t)((*(uint *)(gen_frame + 0x4c)))) {
        case 1: ;
        case 2: ;
        case 3: ;
        case 4: ;
        case 5: ;
        case 6: ;
        case 7: ;
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
        case 0x19: ;
        case 0x1c: ;
        case 0x1d: ;
        case 0x1e: ;
        case 0x20: ;
        case 0x21: ;
          if (uVar5 == 1) {
            iVar14 = param_3;
            uVar5 = F_00da5fd0(puVar7 GEN_EDX_ARG);
            puVar7 = ((undefined4 *)GEN_TOP(F_00e23ad0((*(undefined * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,puVar13,(*(uint *)(gen_frame + 0x4c)),(uint)&(*(int * PTR32 *)(gen_frame + 0x28)),uVar5,uVar6,iVar14)));
            (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar7;
          }
          else {
            piVar9 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x2c)))));
            if (piVar9 != ((int *)GEN_TOP(0x0))) {
              *((short *)GEN_TOP(((int)piVar9 + 6))) = *((short *)GEN_TOP(((int)piVar9 + 6))) + 1;
              piVar9[2] = piVar9[2] + 1;
            }
            (*(uint *)(gen_frame + 0x44)) = 0;
            uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar9 + 0x14))))(piVar9 GEN_EDX_ARG);
            if (0 < (int)uVar5) {
              do {
                if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) break;
                (*(int * PTR32 *)(gen_frame + 0x20)) = piVar9;
                (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x44));
                uVar5 = (*(uint *)(gen_frame + 0x50));
                iVar14 = param_3;
                uVar6 = F_00da5fd0(puVar7 GEN_EDX_ARG);
                puVar10 = ((undefined4 *)GEN_TOP(F_00e23690((*(undefined * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,puVar13,(*(uint *)(gen_frame + 0x4c)),(uint)&(*(int * PTR32 *)(gen_frame + 0x20)),uVar6,uVar5,iVar14)));
                iVar14 = *piVar9;
                (*(uint *)(gen_frame + 0x44)) = (*(uint *)(gen_frame + 0x44)) + 1;
                puVar13 = ((uint *)GEN_TOP(((int)puVar13 + (int)(*(uint * PTR32 *)(gen_frame + 0x40)))));
                (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar10;
                uVar5 = ((code *)*((gen_code32 *)GEN_TOP((iVar14 + 0x14))))(piVar9);
              } while ((int)(*(uint *)(gen_frame + 0x44)) < (int)uVar5);
            }
            *((short *)GEN_TOP(((int)piVar9 + 6))) = *((short *)GEN_TOP(((int)piVar9 + 6))) - 1;
            piVar1 = piVar9 + 2;
            *piVar1 = *piVar1 - 1;
            if (*piVar1 == 0) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar9)))(piVar9 GEN_EDX_ARG,1);
            }
          }
          break;
        default: ;
          goto switchD_00e222a6_caseD_13;
        case 0x14: ;
          if (*((char *)GEN_TOP(((int)puVar7 + 0xd))) == '\x02') {
            if (uVar5 == 1) {
              puVar7 = ((undefined4 *)GEN_TOP(F_00e23ad0((*(undefined * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,puVar13,0x1d,(uint)&(*(int * PTR32 *)(gen_frame + 0x28)),0,uVar6,param_3)));
              (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar7;
            }
            else {
              puVar8 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x2c)))));
              if (puVar8 != ((uint *)GEN_TOP(0x0))) {
                *((short *)GEN_TOP(((int)puVar8 + 6))) = *((short *)GEN_TOP(((int)puVar8 + 6))) + 1;
                puVar8[2] = puVar8[2] + 1;
              }
              iVar14 = 0;
              uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*puVar8 + 0x14))))(puVar8 GEN_EDX_ARG);
              if (0 < (int)uVar5) {
                do {
                  if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) break;
                  (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar8;
                  (*(int *)(gen_frame + 0x1c)) = iVar14;
                  puVar7 = ((undefined4 *)GEN_TOP(F_00e23690((*(undefined * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,puVar13,0x1d,(uint)&(*(uint * PTR32 *)(gen_frame + 0x18)),0,(*(uint *)(gen_frame + 0x50)),param_3)));
                  puVar13 = ((uint *)GEN_TOP(((int)puVar13 + (int)(*(uint * PTR32 *)(gen_frame + 0x40)))));
                  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar7;
                  iVar14 = iVar14 + 1;
                  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*puVar8 + 0x14))))(puVar8 GEN_EDX_ARG);
                } while (iVar14 < (int)uVar5);
              }
              *((short *)GEN_TOP(((int)puVar8 + 6))) = *((short *)GEN_TOP(((int)puVar8 + 6))) - 1;
              puVar13 = puVar8 + 2;
              *puVar13 = *puVar13 - 1;
              if (*puVar13 == 0) {
                puVar7 = ((undefined4 *)GEN_TOP(*puVar8));
                goto LAB_00e22806;
              }
            }
            break;
          }
          if (*((char *)GEN_TOP(((int)puVar7 + 0xd))) != '\x19') break;
          if (uVar5 == 1) {
            puVar8 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x34))))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x2c)))));
            pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x54));
            (*(uint * PTR32 *)(gen_frame + 0x3c)) = puVar8;
            if (puVar8 != ((uint *)GEN_TOP(0x0))) {
              *((short *)GEN_TOP(((int)puVar8 + 6))) = *((short *)GEN_TOP(((int)puVar8 + 6))) + 1;
              puVar8[2] = puVar8[2] + 1;
            }
            uVar5 = (*(uint *)(gen_frame + 0x50));
            iVar14 = param_3;
            uVar6 = F_00e20150((*(undefined * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,puVar7,&(*(uint * PTR32 *)(gen_frame + 0x3c)));
            puVar7 = ((undefined4 *)GEN_TOP(F_00e23ad0(pvVar4 GEN_EDX_ARG,puVar13,(*(uint *)(gen_frame + 0x4c)),(uint)&(*(int * PTR32 *)(gen_frame + 0x28)),uVar6,uVar5,iVar14)));
            (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar7;
            if (puVar8 != ((uint *)GEN_TOP(0x0))) {
              *((short *)GEN_TOP(((int)puVar8 + 6))) = *((short *)GEN_TOP(((int)puVar8 + 6))) - 1;
              puVar13 = puVar8 + 2;
              *puVar13 = *puVar13 - 1;
              if (*puVar13 == 0) {
                puVar7 = ((undefined4 *)GEN_TOP(*puVar8));
                goto LAB_00e22806;
              }
            }
            break;
          }
          puVar8 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x2c)))));
          if (puVar8 != ((uint *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)puVar8 + 6))) = *((short *)GEN_TOP(((int)puVar8 + 6))) + 1;
            puVar8[2] = puVar8[2] + 1;
          }
          (*(uint *)(gen_frame + 0x44)) = 0;
          uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*puVar8 + 0x14))))(puVar8 GEN_EDX_ARG);
          if (0 < (int)uVar5) {
            (*(uint * PTR32 *)(gen_frame + 0x3c)) = puVar13;
            do {
              if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) break;
              puVar10 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*puVar8 + 0x5c))))(puVar8 GEN_EDX_ARG,(*(uint *)(gen_frame + 0x44)))));
              (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar10;
              if (puVar10 != ((undefined4 *)GEN_TOP(0x0))) {
                *((short *)GEN_TOP(((int)puVar10 + 6))) = *((short *)GEN_TOP(((int)puVar10 + 6))) + 1;
                puVar10[2] = puVar10[2] + 1;
              }
              (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x44));
              (*(uint * PTR32 *)(gen_frame + 0x10)) = puVar8;
              uVar5 = (*(uint *)(gen_frame + 0x50));
              iVar14 = param_3;
              uVar6 = F_00e20150((*(undefined * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,puVar7,&(*(undefined4 * PTR32 *)(gen_frame + 0x58)));
              puVar11 = ((undefined4 *)GEN_TOP(F_00e23690((*(undefined * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,(*(uint * PTR32 *)(gen_frame + 0x3c)),(*(uint *)(gen_frame + 0x4c)),(uint)&(*(uint * PTR32 *)(gen_frame + 0x10)),uVar6,uVar5,iVar14)));
              (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar11;
              if (puVar10 != ((undefined4 *)GEN_TOP(0x0))) {
                *((short *)GEN_TOP(((int)puVar10 + 6))) = *((short *)GEN_TOP(((int)puVar10 + 6))) - 1;
                piVar9 = puVar10 + 2;
                *piVar9 = *piVar9 - 1;
                if (*piVar9 == 0) {
                  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar10)))(puVar10 GEN_EDX_ARG,1);
                }
              }
              uVar5 = *puVar8;
              (*(uint * PTR32 *)(gen_frame + 0x3c)) = ((uint *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0x3c)) + (int)(*(uint * PTR32 *)(gen_frame + 0x40)))));
              uVar6 = (*(uint *)(gen_frame + 0x44)) + 1;
              (*(uint *)(gen_frame + 0x44)) = uVar6;
              uVar5 = ((code *)*((gen_code32 *)GEN_TOP((uVar5 + 0x14))))(puVar8);
            } while ((int)uVar6 < (int)uVar5);
          }
          goto LAB_00e223dc;
        case 0x16: ;
        case 0x1a: ;
          if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x54)) + 4))) != 0) {
            if (*(char *)(puVar7 + 3) == '\x1a') {
              return 1;
            }
            if (*((char *)GEN_TOP(((int)puVar7 + 0xd))) == '\x1c') {
              return 1;
            }
            if (*((char *)GEN_TOP(((int)puVar7 + 0xd))) == '\x1d') {
              return 1;
            }
          }
          puVar8 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x2c)))));
          (*(uint * PTR32 *)(gen_frame + 0x3c)) = puVar8;
          if (puVar8 != ((uint *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)puVar8 + 6))) = *((short *)GEN_TOP(((int)puVar8 + 6))) + 1;
            puVar8[2] = puVar8[2] + 1;
          }
          puVar7 = ((undefined4 *)GEN_TOP(F_00e203a0((*(undefined * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,puVar13,puVar7,&(*(uint * PTR32 *)(gen_frame + 0x3c)),param_3)));
          goto LAB_00e223d1;
        case 0x18: ;
        case 0x1f: ;
          puVar7 = ((undefined4 *)GEN_TOP(F_00e20230(puVar13,puVar7,&(*(int * PTR32 *)(gen_frame + 0x28)),(*(uint *)(gen_frame + 0x38)))));
          (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar7;
          break;
        case 0x1b: ;
          if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x54)) + 4))) != 0) {
            return 1;
          }
          puVar8 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x2c)))));
          (*(uint * PTR32 *)(gen_frame + 0x40)) = puVar8;
          if (puVar8 != ((uint *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)puVar8 + 6))) = *((short *)GEN_TOP(((int)puVar8 + 6))) + 1;
            puVar8[2] = puVar8[2] + 1;
          }
          puVar8 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*puVar8 + 0x5c))))(puVar8 GEN_EDX_ARG,0)));
          (*(uint * PTR32 *)(gen_frame + 0x3c)) = puVar8;
          if (puVar8 != ((uint *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)puVar8 + 6))) = *((short *)GEN_TOP(((int)puVar8 + 6))) + 1;
            puVar8[2] = puVar8[2] + 1;
          }
          uVar5 = F_00e20150((*(undefined * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,puVar7,&(*(uint * PTR32 *)(gen_frame + 0x3c)));
          *puVar13 = uVar5;
          if (puVar8 != ((uint *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)puVar8 + 6))) = *((short *)GEN_TOP(((int)puVar8 + 6))) - 1;
            puVar2 = puVar8 + 2;
            *puVar2 = *puVar2 - 1;
            if (*puVar2 == 0) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar8)))(puVar8 GEN_EDX_ARG,1);
            }
          }
          uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(uint * PTR32 *)(gen_frame + 0x40)) + 0x14))))((*(uint * PTR32 *)(gen_frame + 0x40)) GEN_EDX_ARG);
          puVar13[2] = uVar5;
          uVar6 = F_00d929c0(*puVar13 GEN_EDX_ARG);
          uVar5 = puVar13[2];
          (*(uint *)(gen_frame + 0x44)) = uVar6;
          pvVar12 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
          piVar9 = *((int * PTR32 *)GEN_TOP(((int)pvVar12 + 0x2c)));
          pcVar3 = *((gen_code32 *)GEN_TOP((*piVar9 + 0xc)));
          (*(uint * PTR32 *)(gen_frame + 0x3c)) = ((uint *)GEN_TOP((uVar5 * uVar6)));
          uVar5 = (*pcVar3)(piVar9,&(*(uint * PTR32 *)(gen_frame + 0x3c)));
          puVar13[1] = uVar5;
          F_00da1030(uVar5,0,(*(uint * PTR32 *)(gen_frame + 0x3c)));
          uVar5 = *((uint *)GEN_TOP((param_3 + 0x14)));
          iVar14 = puVar13[2] * (*(uint *)(gen_frame + 0x44));
          (*(uint * PTR32 *)(gen_frame + 0x3c)) = ((uint *)GEN_TOP(puVar13[1]));
          if (*((uint *)GEN_TOP((param_3 + 0x10))) == (uVar5 & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516a4),((int *)GEN_TOP((param_3 + 0xc))),8);
          }
          piVar9 = ((int *)GEN_TOP((*((int *)GEN_TOP((param_3 + 0xc))) + *((int *)GEN_TOP((param_3 + 0x10))) * 8)));
          *((int *)GEN_TOP((param_3 + 0x10))) = *((int *)GEN_TOP((param_3 + 0x10))) + 1;
          iVar15 = 0;
          *piVar9 = (int)(*(uint * PTR32 *)(gen_frame + 0x3c));
          piVar9[1] = iVar14;
          if (0 < (int)puVar13[2]) {
            iVar14 = 0;
            do {
              if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != ((undefined4 *)GEN_TOP(0x0))) break;
              puVar7 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(uint * PTR32 *)(gen_frame + 0x40)) + 0x5c))))((*(uint * PTR32 *)(gen_frame + 0x40)) GEN_EDX_ARG,iVar15)));
              (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar7;
              if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
                *((short *)GEN_TOP(((int)puVar7 + 6))) = *((short *)GEN_TOP(((int)puVar7 + 6))) + 1;
                puVar7[2] = puVar7[2] + 1;
              }
              puVar7 = ((undefined4 *)GEN_TOP(F_00e22120((*(undefined * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,puVar13[1] + iVar14,&(*(undefined4 * PTR32 *)(gen_frame + 0x34)),param_3)));
              (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar7;
              if ((*(undefined4 * PTR32 *)(gen_frame + 0x34)) != ((undefined4 *)GEN_TOP(0x0))) {
                *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + 6))) - 1;
                piVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0x34)) + 2;
                *piVar9 = *piVar9 - 1;
                if (*piVar9 == 0) {
                  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x34)))))((*(undefined4 * PTR32 *)(gen_frame + 0x34)) GEN_EDX_ARG,1);
                }
              }
              iVar14 = iVar14 + (*(uint *)(gen_frame + 0x44));
              iVar15 = iVar15 + 1;
            } while (iVar15 < (int)puVar13[2]);
          }
          *((short *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0x40)) + 6))) = *((short *)GEN_TOP(((int)(*(uint * PTR32 *)(gen_frame + 0x40)) + 6))) - 1;
          puVar13 = (*(uint * PTR32 *)(gen_frame + 0x40)) + 2;
          *puVar13 = *puVar13 - 1;
          if (*puVar13 == 0) {
            puVar7 = ((undefined4 *)GEN_TOP(*(*(uint * PTR32 *)(gen_frame + 0x40))));
            puVar8 = (*(uint * PTR32 *)(gen_frame + 0x40));
LAB_00e22806: ;
            (*((code *)GEN_TOP(*puVar7)))(puVar8,1);
          }
          break;
        case 0x22: ;
          if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x54)) + 4))) != 0) {
            if (*(char *)(puVar7 + 3) == '\x1a') {
              return 1;
            }
            if (*((char *)GEN_TOP(((int)puVar7 + 0xd))) == '\x1c') {
              return 1;
            }
            if (*((char *)GEN_TOP(((int)puVar7 + 0xd))) == '\x1d') {
              return 1;
            }
          }
          puVar8 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x2c)))));
          (*(uint * PTR32 *)(gen_frame + 0x3c)) = puVar8;
          if (puVar8 != ((uint *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)puVar8 + 6))) = *((short *)GEN_TOP(((int)puVar8 + 6))) + 1;
            puVar8[2] = puVar8[2] + 1;
          }
          puVar7 = ((undefined4 *)GEN_TOP(F_00e21460((*(undefined * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,puVar13,(uint)puVar7,&(*(uint * PTR32 *)(gen_frame + 0x3c)),param_3,&(*(int *)(gen_frame + 0x30)),param_1)));
LAB_00e223d1: ;
          (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar7;
          if (puVar8 != ((uint *)GEN_TOP(0x0))) {
LAB_00e223dc: ;
            *((short *)GEN_TOP(((int)puVar8 + 6))) = *((short *)GEN_TOP(((int)puVar8 + 6))) - 1;
            puVar13 = puVar8 + 2;
            *puVar13 = *puVar13 - 1;
            if (*puVar13 == 0) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar8)))(puVar8 GEN_EDX_ARG,1);
            }
          }
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) == ((undefined4 *)GEN_TOP(0x1))) {
switchD_00e222a6_caseD_13: ;
          return 1;
        }
LAB_00e22812: ;
        uVar5 = (*(uint *)(gen_frame + 0x38));
        iVar14 = (*(int *)(gen_frame + 0x48)) + 1;
        (*(int *)(gen_frame + 0x48)) = iVar14;
        uVar6 = F_00d92850((*(uint *)(gen_frame + 0x38)) GEN_EDX_ARG);
      } while (iVar14 < (int)uVar6);
    }
    uVar5 = F_00d92620(uVar5 GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x38)) = uVar5;
  } while( true );
}

/* ref: FUN_00e228b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e228b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xe228b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00e228c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e228c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe228c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0])));
  uVar3 = (*pcVar1)(this,&(*(undefined4 * PTR32 *)&gen_args[0]));
  *puVar2 = (*(undefined4 * PTR32 *)&gen_args[0]);
  return uVar3;
}

/* ref: FUN_00e228f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e228f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe228f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 2)));
  uVar3 = (*pcVar1)(this,&(*(int * PTR32 *)&gen_args[0]));
  *piVar2 = (int)(*(int * PTR32 *)&gen_args[0]) / 2;
  return uVar3;
}

/* ref: FUN_00e22920 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e22920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe22920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 4)));
  uVar3 = (*pcVar1)(this,&(*(int * PTR32 *)&gen_args[0]));
  *piVar2 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
  return uVar3;
}

/* ref: FUN_00e22960 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e22960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe22960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 8)));
  uVar3 = (*pcVar1)(this,&(*(int * PTR32 *)&gen_args[0]));
  *piVar2 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 7U)) >> 3;
  return uVar3;
}

/* ref: FUN_00e229a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e229a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe229a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 8)));
  uVar3 = (*pcVar1)(this,&(*(int * PTR32 *)&gen_args[0]));
  *piVar2 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 7U)) >> 3;
  return uVar3;
}

/* ref: FUN_00e229e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e229e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe229e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 4)));
  uVar3 = (*pcVar1)(this,&(*(int * PTR32 *)&gen_args[0]));
  *piVar2 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
  return uVar3;
}

/* ref: FUN_00e22a20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e22a20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe22a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 2)));
  uVar3 = (*pcVar1)(this,&(*(int * PTR32 *)&gen_args[0]));
  *piVar2 = (int)(*(int * PTR32 *)&gen_args[0]) / 2;
  return uVar3;
}

/* ref: FUN_00e22a50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e22a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe22a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) << 4)));
  uVar3 = (*pcVar1)(this,&(*(int * PTR32 *)&gen_args[0]));
  *piVar2 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 0xfU)) >> 4;
  return uVar3;
}

/* ref: FUN_00e22a90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e22a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe22a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 0x30)));
  uVar3 = (*pcVar1)(this,&(*(int * PTR32 *)&gen_args[0]));
  *piVar2 = (int)(*(int * PTR32 *)&gen_args[0]) / 0x30;
  return uVar3;
}

/* ref: FUN_00e22ad0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e22ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe22ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 0x30)));
  uVar3 = (*pcVar1)(this,&(*(int * PTR32 *)&gen_args[0]));
  *piVar2 = (int)(*(int * PTR32 *)&gen_args[0]) / 0x30;
  return uVar3;
}

/* ref: FUN_00e22b10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e22b10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe22b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) << 6)));
  uVar3 = (*pcVar1)(this,&(*(int * PTR32 *)&gen_args[0]));
  *piVar2 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 0x3fU)) >> 6;
  return uVar3;
}

/* ref: FUN_00e22b50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e22b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe22b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) << 6)));
  uVar3 = (*pcVar1)(this,&(*(int * PTR32 *)&gen_args[0]));
  *piVar2 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 0x3fU)) >> 6;
  return uVar3;
}

/* ref: FUN_00e22b90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e22b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe22b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 4)));
  uVar3 = (*pcVar1)(this,&(*(int * PTR32 *)&gen_args[0]));
  *piVar2 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
  return uVar3;
}

/* ref: FUN_00e22bd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e22bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe22bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 8)));
  uVar3 = (*pcVar1)(this,&(*(int * PTR32 *)&gen_args[0]));
  *piVar2 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 7U)) >> 3;
  return uVar3;
}

/* ref: FUN_00e22c10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e22c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe22c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 4)));
  uVar3 = (*pcVar1)(this,&(*(int * PTR32 *)&gen_args[0]));
  *piVar2 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
  return uVar3;
}

/* ref: FUN_00e22c50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e22c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe22c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)this + 0xc)));
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 4)));
  uVar3 = (*pcVar1)(this,&(*(int * PTR32 *)&gen_args[0]));
  *piVar2 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
  return uVar3;
}

/* ref: FUN_00e22ca0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e22ca0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe22ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = *((int *)GEN_TOP((in_ecx + 8))) != 0;
  return param_2;
}

/* ref: FUN_00e22e00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e22e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe22e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00e22e40 */
GEN_LIB GEN_FRAME uint F_00e22e40(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe22e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00e22e60 */
GEN_LIB GEN_FRAME uint F_00e22e60(unsigned int gen_a0)
{
  GEN_ENTER(0xe22e60u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  code * pcVar2;
  undefined4 * puVar3;
  LPVOID pvVar4;
  uint uVar5;
  
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar3 = (*(undefined4 * PTR32 *)&gen_args[0]);
  (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0])));
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x2c)));
  pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0xc)));
  uVar5 = (*pcVar2)(piVar1,&(*(undefined4 * PTR32 *)&gen_args[0]));
  *puVar3 = (*(undefined4 * PTR32 *)&gen_args[0]);
  return uVar5;
}

/* ref: FUN_00e22e90 */
GEN_LIB GEN_FRAME uint F_00e22e90(unsigned int gen_a0)
{
  GEN_ENTER(0xe22e90u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  code * pcVar2;
  undefined4 * puVar3;
  LPVOID pvVar4;
  uint uVar5;
  
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar3 = (*(undefined4 * PTR32 *)&gen_args[0]);
  (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0])));
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x2c)));
  pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0xc)));
  uVar5 = (*pcVar2)(piVar1,&(*(undefined4 * PTR32 *)&gen_args[0]));
  *puVar3 = (*(undefined4 * PTR32 *)&gen_args[0]);
  return uVar5;
}

