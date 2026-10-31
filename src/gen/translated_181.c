#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: hkDataClassNative::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf7e00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00d92860(*(undefined4 *)(this + 0xc) GEN_EDX_FWD,param_1);
  F_00df7ce0(this,*(undefined4 *)(this + 0x10),uVar1,param_2);
  uVar1 = F_00d92bc0(*(undefined4 *)(this + 0xc) GEN_EDX_ARG,param_1);
  *((uint *)GEN_TOP((param_2 + 0xc))) = uVar1;
  return uVar1;
}

/* ref: hkDataClassNative::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf7e40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00d92800(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_FWD,param_1);
  F_00df7ce0(this,*(undefined4 *)(this + 0x10),uVar1,param_2);
  uVar1 = F_00d92ae0(*(undefined * PTR32 *)(this + 0xc) GEN_EDX_ARG,param_1);
  *((uint *)GEN_TOP((param_2 + 0xc))) = uVar1;
  return uVar1;
}

/* ref: hkDataClassNative::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf7e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint in_ecx;
  int * piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  in_ecx = *(uint *)(this + 0xc);
  iVar5 = param_1[1] * 0x10 + *param_1;
  piVar3 = param_1;
  if (in_ecx != 0) {
    do {
      uVar1 = F_00d92850(in_ecx GEN_EDX_FWD);
      iVar5 = iVar5 + uVar1 * -0x10;
      iVar4 = 0;
      iVar6 = iVar5;
      if (0 < (int)uVar1) {
        do {
          uVar2 = F_00d92860(in_ecx GEN_EDX_ARG,iVar4);
          F_00df7ce0(this,*(undefined4 *)(this + 0x10),uVar2,iVar6);
          uVar2 = F_00d92bc0(in_ecx GEN_EDX_ARG,iVar4);
          *((uint *)GEN_TOP((iVar6 + 0xc))) = uVar2;
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + 0x10;
        } while (iVar4 < (int)uVar1);
      }
      in_ecx = F_00d92620(in_ecx GEN_EDX_ARG);
    } while (in_ecx != 0);
    piVar3 = ((int *)GEN_TOP(0x0));
  }
  return (uint)piVar3;
}

/* ref: hkDataArrayNative::vf2 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00df7f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf7f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00dbbf10(*((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))),*(undefined4 *)(this + 0x30),
                     *(undefined4 *)(this + 0x1c),*(undefined4 *)(this + 0x24));
  return;
}

/* ref: hkDataArrayNative::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf7f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD);
  if (param_1 != uVar1) {
    uVar1 = F_00dbbf50(*((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))),
                                *(undefined4 *)(this + 0x30),*(undefined4 *)(this + 0x1c),
                                *(undefined4 *)(this + 0x24),param_1);
    *(uint *)(this + 0x10) = uVar1;
  }
  return uVar1;
}

/* ref: hkDataArrayNative::vf23 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf7f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = F_00dbb5f0(*(undefined4 *)(this + 0x1c),*(undefined4 *)(this + 0x24),
                       *((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 0xc))),
                       *((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 8))),
                       *(int *)(this + 0x18) * param_1 + *(int *)(this + 0x10));
  (*(ulonglong *)(gen_frame + 0x0)) = uVar2;
  if (((int)uVar2 != 0) && ((int)(uVar2 >> 0x20) != 0)) {
    uVar1 = F_00df6190(&(*(ulonglong *)(gen_frame + 0x0)),*(undefined4 *)(this + 0xc),0);
    return uVar1;
  }
  return 0;
}

/* ref: hkDataArrayNative::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df7fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf7fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int * piVar7;
  uint uVar8;
  LPVOID pvVar9;
  undefined4 * puVar10;
  uint uVar11;
  
  uVar8 = F_00d928d0(*(undefined * PTR32 *)(this + 0x24) GEN_EDX_FWD,param_1);
  uVar3 = *((ushort *)GEN_TOP((uVar8 + 0x12)));
  bVar1 = *((byte *)GEN_TOP((uVar8 + 0xc)));
  iVar4 = *(int *)(this + 0x10);
  pvVar9 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar10 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar9 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar9 + 0x2c))) GEN_EDX_ARG,0x34)));
  *(undefined2 *)(puVar10 + 1) = 0x34;
  bVar2 = *((byte *)GEN_TOP((uVar8 + 0xd)));
  uVar11 = F_00da5ff0(uVar8 GEN_EDX_ARG);
  uVar8 = F_00da5fd0(uVar8 GEN_EDX_ARG);
  uVar5 = *(undefined4 *)(this + 0x18);
  uVar6 = *(undefined4 *)(this + 0x14);
  piVar7 = *(int * PTR32 *)(this + 0xc);
  *((undefined2 *)GEN_TOP(((int)puVar10 + 6))) = 0;
  puVar10[2] = 0;
  puVar10[5] = uVar6;
  puVar10[6] = uVar5;
  puVar10[4] = (uint)uVar3 + iVar4;
  puVar10[7] = (uint)bVar1;
  puVar10[8] = (uint)bVar2;
  *puVar10 = (*(undefined * PTR32 (*)[39])REFP(0x114cc14));
  puVar10[3] = piVar7;
  puVar10[9] = uVar8;
  puVar10[0xb] = uVar11;
  puVar10[0xc] = 0;
  uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x60))))(piVar7 GEN_EDX_ARG,(uint)bVar1,(uint)bVar2,uVar8,uVar11);
  puVar10[10] = uVar8;
  return (uint)puVar10;
}

/* ref: hkDataArrayNative::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df80b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf80b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbada0(*(undefined4 *)(this + 0x1c),*(undefined4 *)(this + 0x2c),param_2,
                     *(int *)(this + 0x18) * param_1 + *(int *)(this + 0x10),0xffffffff);
  return uVar1;
}

/* ref: hkDataArrayNative::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df80e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf80e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbaaf0(*(undefined4 *)(this + 0x1c),
                              *(int *)(this + 0x18) * param_1 + *(int *)(this + 0x10),param_2);
  return uVar1;
}

/* ref: hkDataArrayNative::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df8110(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xdf8110u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dba870(*((undefined4 *)GEN_TOP((param_1 + 0x1c))),
                            *((int *)GEN_TOP((param_1 + 0x18))) * param_2 + *((int *)GEN_TOP((param_1 + 0x10))),
                            (uint)gen_fl2bits(param_3));
  return uVar1;
}

/* ref: hkDataArrayNative::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df8140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf8140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dba8a0(*(undefined4 *)(this + 0x1c),
                            *(int *)(this + 0x18) * param_1 + *(int *)(this + 0x10),param_2);
  return uVar1;
}

/* ref: hkDataArrayNative::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df8170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf8170u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dba9c0(*(undefined4 *)(this + 0x1c),
                     *(int *)(this + 0x18) * param_1 + *(int *)(this + 0x10),param_2,param_2 >> 0x1f
                    );
  return uVar1;
}

/* ref: hkDataArrayNative::vf22 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df81a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdf81a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00dba9c0(*(undefined4 *)(this + 0x1c),
                     *(int *)(this + 0x18) * param_1 + *(int *)(this + 0x10),param_2,param_3);
  return uVar1;
}

/* ref: hkDataObjectNative::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df81d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf81d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  int * piVar1;
  uint * puVar2;
  uint uVar3;
  undefined * this_00;
  ushort * puVar4;
  LPVOID pvVar5;
  undefined4 * puVar6;
  uint uVar7;
  uint uVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  F_0105a6b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*(undefined4 *)(this + 0xc),param_1);
  (*(uint * PTR32 *)(gen_frame + 0x8)) = ((uint *)GEN_TOP(0x0));
  switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP((param_1 + 0xc))))) {
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
  case 0x14: ;
  case 0x19: ;
  case 0x1e: ;
  case 0x20: ;
    uVar8 = F_0105a750(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x14)) = uVar8;
    uVar8 = F_0105a8f0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    uVar8 = F_00da5ff0(uVar8 GEN_EDX_ARG);
    uVar7 = (uint)*((byte *)GEN_TOP((param_1 + 0xc)));
    (*(uint *)(gen_frame + 0x10)) = uVar8;
    uVar8 = F_00da5fd0(param_1 GEN_EDX_ARG);
    if (uVar7 != 0x19) {
      uVar3 = F_00da5f30(uVar7);
      param_1 = (uint)*((short *)GEN_TOP((uVar3 + 8)));
      goto LAB_00df8339;
    }
    goto LAB_00df82cb;
  default: ;
    (*(uint *)(gen_frame + 0x14)) = 0;
    (*(uint *)(gen_frame + 0x10)) = 0;
    uVar8 = 0;
    break;
  case 0x16: ;
  case 0x1a: ;
    puVar2 = ((uint *)GEN_TOP(F_0105a750(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG)));
    uVar8 = *puVar2;
    uVar7 = puVar2[1];
    (*(uint * PTR32 *)(gen_frame + 0x8)) = puVar2;
    goto LAB_00df825f;
  case 0x1b: ;
    uVar8 = F_0105a750(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    (*(uint * PTR32 *)(gen_frame + 0x8)) = ((uint *)GEN_TOP((uVar8 + 4)));
    (*(uint *)(gen_frame + 0x14)) = *((uint *)GEN_TOP((uVar8 + 4)));
    (*(uint *)(gen_frame + 0x10)) = *((uint *)GEN_TOP((uVar8 + 8)));
    puVar2 = ((uint *)GEN_TOP(F_0105a750(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG)));
    uVar8 = *puVar2;
    if (uVar8 != 0) {
      param_1 = F_00d929c0(uVar8 GEN_EDX_ARG);
      uVar7 = 0x19;
      goto LAB_00df8339;
    }
    break;
  case 0x22: ;
    puVar4 = ((ushort *)GEN_TOP(F_0105a750(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG)));
    uVar7 = (uint)*puVar4;
    uVar8 = (uint)puVar4[1] + (int)puVar4;
LAB_00df825f: ;
    (*(uint *)(gen_frame + 0x14)) = uVar8;
    (*(uint *)(gen_frame + 0x10)) = uVar7;
    uVar8 = F_00da5fd0(param_1 GEN_EDX_ARG);
    uVar7 = (uint)*((byte *)GEN_TOP((param_1 + 0xd)));
    uVar3 = F_00da5f30(uVar7);
    param_1 = (uint)*((short *)GEN_TOP((uVar3 + 8)));
    if (uVar7 == 0) {
      pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar5 + 0x2c))) + 4))))
                                  (*((int * PTR32 *)GEN_TOP(((int)pvVar5 + 0x2c))) GEN_EDX_ARG,0x34)));
      *((undefined2 *)GEN_TOP(((int)this_00 + 4))) = 0x34;
      uVar8 = F_00df7270(this_00 GEN_EDX_ARG,*(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x14),0,0,0,0,0,0,0,0);
      return uVar8;
    }
    if (param_1 == 0xffffffff) {
LAB_00df82cb: ;
      param_1 = F_00d929c0(uVar8 GEN_EDX_ARG);
    }
    goto LAB_00df8339;
  }
  uVar7 = 0;
  param_1 = 0;
LAB_00df8339: ;
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar5 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar5 + 0x2c))) GEN_EDX_ARG,0x34)));
  *(undefined2 *)(puVar6 + 1) = 0x34;
  piVar1 = *(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x14);
  puVar6[4] = (*(uint *)(gen_frame + 0x14));
  puVar6[5] = (*(uint *)(gen_frame + 0x10));
  puVar6[6] = param_1;
  *((undefined2 *)GEN_TOP(((int)puVar6 + 6))) = 0;
  puVar6[2] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  *puVar6 = (*(undefined * PTR32 (*)[39])REFP(0x114cc14));
  puVar6[3] = piVar1;
  puVar6[7] = uVar7;
  puVar6[9] = uVar8;
  puVar6[0xc] = (*(uint * PTR32 *)(gen_frame + 0x8));
  uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x60))))(piVar1 GEN_EDX_ARG,uVar7,0,uVar8,0);
  puVar6[10] = uVar8;
  return (uint)puVar6;
}

/* ref: hkDataObjectNative::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df83f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf83f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  uint uVar2;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*(undefined4 *)(this + 0xc),param_1);
  bVar1 = *((byte *)GEN_TOP((param_1 + 0xc)));
  uVar2 = F_0105a750(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar2 = F_00dbb320((uint)bVar1,uVar2);
  return uVar2;
}

/* ref: hkDataObjectNative::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df8430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf8430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*(undefined4 *)(this + 0xc),param_1);
  bVar1 = *((byte *)GEN_TOP((param_1 + 0xd)));
  bVar2 = *((byte *)GEN_TOP((param_1 + 0xc)));
  uVar3 = F_0105a750(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar3 = F_00dba980((uint)bVar2,(uint)bVar1,uVar3);
  return uVar3;
}

/* ref: hkDataObjectNative::vf13 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df8470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf8470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*(undefined4 *)(this + 0xc),param_1);
  uVar4 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x14) + 0xc)));
  uVar5 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x14) + 8)));
  (*(uint *)(gen_frame + 0x10)) = (uint)*((byte *)GEN_TOP((param_1 + 0xc)));
  uVar1 = F_0105a740(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar2 = F_00da5fd0(param_1 GEN_EDX_ARG);
  uVar3 = F_00dbb5f0((*(uint *)(gen_frame + 0x10)),uVar2,uVar4,uVar5,uVar1);
  (*(ulonglong *)(gen_frame + 0x8)) = uVar3;
  if (((int)uVar3 != 0) && ((int)(uVar3 >> 0x20) != 0)) {
    uVar1 = F_00df6190(&(*(ulonglong *)(gen_frame + 0x8)),*(undefined4 *)(this + 0x14),0);
    return uVar1;
  }
  return 0;
}

/* ref: hkDataObjectNative::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df8500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf8500u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*(undefined4 *)(this + 0xc),param_1);
  bVar1 = *((byte *)GEN_TOP((param_1 + 0xc)));
  iVar4 = *(int *)(this + 0x14) + 0xb8;
  uVar2 = F_0105a750(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar3 = F_00da5ff0(param_1 GEN_EDX_ARG);
  uVar2 = F_00dbc000((uint)bVar1,uVar3,uVar2,iVar4);
  return uVar2;
}

/* ref: hkDataObjectNative::vf15 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00df8550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf8550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  uint uVar2;
  float10 fVar3;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*(undefined4 *)(this + 0xc),param_1);
  bVar1 = *((byte *)GEN_TOP((param_1 + 0xc)));
  uVar2 = F_0105a750(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  fVar3 = F_00dba840((uint)bVar1,uVar2);
  return (float)fVar3;
}

/* ref: hkDataObjectNative::vf21 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df8590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf8590u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  uint uVar2;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*(undefined4 *)(this + 0xc),param_1);
  bVar1 = *((byte *)GEN_TOP((param_1 + 0xc)));
  uVar2 = F_0105a750(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar2 = F_00dbaaf0((uint)bVar1,uVar2,param_2);
  return uVar2;
}

/* ref: hkDataObjectNative::vf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df85d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xdf85d0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  uint uVar2;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*((undefined4 *)GEN_TOP((param_1 + 0xc))),param_2);
  bVar1 = *((byte *)GEN_TOP((param_2 + 0xc)));
  uVar2 = F_0105a750(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar2 = F_00dba870((uint)bVar1,uVar2,(uint)gen_fl2bits(param_3));
  return uVar2;
}

/* ref: hkDataObjectNative::vf19 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df8610(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdf8610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*((undefined4 *)GEN_TOP((param_1 + 0xc))),param_2);
  bVar1 = *((byte *)GEN_TOP((param_2 + 0xc)));
  uVar3 = (int)(short)param_3 << 0x10;
  uVar2 = F_0105a750(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar2 = F_00dba870((uint)bVar1,uVar2,uVar3);
  return uVar2;
}

/* ref: hkDataObjectNative::vf18 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df8660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdf8660u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*(undefined4 *)(this + 0xc),param_1);
  bVar1 = *((byte *)GEN_TOP((param_1 + 0xc)));
  uVar2 = F_0105a750(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar3 = F_00da5ff0(param_1 GEN_EDX_ARG);
  uVar2 = F_00dbada0((uint)bVar1,uVar3,param_2,uVar2,param_3);
  return uVar2;
}

/* ref: hkDataObjectNative::vf16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df86b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdf86b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*(undefined4 *)(this + 0xc),param_1);
  bVar1 = *((byte *)GEN_TOP((param_1 + 0xd)));
  bVar2 = *((byte *)GEN_TOP((param_1 + 0xc)));
  uVar3 = F_0105a750(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar3 = F_00dbaaa0((uint)bVar2,(uint)bVar1,uVar3,param_2,param_3);
  return uVar3;
}

/* ref: hkDataObjectNative::vf17 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df8700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf8700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  F_0105a6b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*(undefined4 *)(this + 0xc),param_1);
  bVar1 = *((byte *)GEN_TOP((param_1 + 0xd)));
  bVar2 = *((byte *)GEN_TOP((param_1 + 0xc)));
  iVar4 = param_2 >> 0x1f;
  uVar3 = F_0105a750(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  uVar3 = F_00dbaaa0((uint)bVar2,(uint)bVar1,uVar3,param_2,iVar4);
  return uVar3;
}

/* ref: hkDataObjectNative::vf25 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df8750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf8750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00df7ce0(0,*(undefined4 *)(this + 0x14),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df8770 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df8770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf8770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: hkDataWorldNative::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df87b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf87b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return in_ecx + 0x30;
}

/* ref: FUN_00df87c0 */
GEN_LIB GEN_FRAME uint F_00df87c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdf87c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkDataWorldNative::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df87f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf87f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00df66f0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00df8860 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df8860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf8860u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_00df8880 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df8880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf8880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00dfbc00(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x114cdcc));
  F_00dfb5e0(this GEN_EDX_ARG,REFG(undefined * PTR32, 0x135485c));
  F_00dfb620(this GEN_EDX_ARG,&REFG(undefined, 0x15da330),REFG(undefined * PTR32, 0x13548cc));
  F_00dfb620(this GEN_EDX_ARG,&REFG(undefined, 0x15da2a0),REFG(undefined * PTR32, 0x13548cc));
  F_00dfb620(this GEN_EDX_ARG,&REFG(undefined, 0x15da300),REFG(undefined * PTR32, 0x13548cc));
  F_00dfb620(this GEN_EDX_ARG,&REFG(undefined, 0x15da2d0),REFG(undefined * PTR32, 0x13548cc));
  return (uint)this;
}

/* ref: FUN_00df8900 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df8900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf8900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x114cdcc));
  uVar1 = F_00dfb710(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: hkBinaryPackfileWriter::WriteClassName */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00df8910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf8910u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int * piVar1;
  int iVar2;
  undefined4 in_ecx;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  
  in_ecx = (*(uint *)&gen_args[1]);
  uVar4 = F_00d93010((*(uint *)&gen_args[1]) GEN_EDX_ARG,0);
  (*(uint *)(gen_frame + 0x8)) = uVar4;
  uVar5 = (*(uint *)(gen_frame + 0x8));
  if (*((char *)GEN_TOP(((*(int *)&gen_args[0]) + 0x4c))) != '\0') {
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 3)) = (undefined1)(uVar4 >> 0x18);
    (*(undefined1 *)((char *)&(*(uint *)&gen_args[1]) + 2)) = (undefined1)(uVar4 >> 0x10);
    (*(undefined1 *)((char *)&(*(uint *)&gen_args[1]) + 1)) = (undefined1)(uVar4 >> 8);
    uVar3 = (*(undefined1 *)((char *)&(*(uint *)&gen_args[1]) + 1));
    (*(undefined2 *)((char *)&(*(uint *)&gen_args[1]) + 0)) = CONCAT11((*(undefined1 *)((char *)&(*(uint *)&gen_args[1]) + 2)),(*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 3)));
    (*(uint *)&gen_args[1]) = CONCAT13((char)uVar4,CONCAT12(uVar3,(undefined2)(*(uint *)&gen_args[1])));
    uVar4 = (*(uint *)&gen_args[1]);
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 0x1c)));
  (*(uint *)(gen_frame + 0x0)) = uVar4;
  (*(undefined1 *)(gen_frame + 0x4)) = 9;
  (*(uint *)(gen_frame + 0x8)) = uVar5;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x0)),5);
  uVar5 = F_00d92610(in_ecx GEN_EDX_ARG);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 0x1c))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 0x1c))) GEN_EDX_ARG);
  F_00da3a20(((undefined *)GEN_TOP(((*(int *)&gen_args[0]) + 0x30))) GEN_EDX_ARG,uVar5,uVar4 - (*(int *)&gen_args[2]));
  iVar2 = **((int * PTR32 *)GEN_TOP(((*(int *)&gen_args[0]) + 0x1c)));
  F_00da0e60(uVar5);
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 0x10))))(*((undefined4 *)GEN_TOP(((*(int *)&gen_args[0]) + 0x1c))),uVar5);
  return uVar5;
}

/* ref: hkBinaryPackfileWriter::FillSectionHeaders */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df89b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf89b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  uint uVar2;
  undefined * phVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int * piVar7;
  
  iVar5 = param_1;
  iVar6 = *(int *)(this + 0x68);
  piVar7 = ((int *)GEN_TOP((param_1 + 4)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 0xc))) & 0x3fffffff;
  if ((int)uVar2 < iVar6) {
    iVar4 = uVar2 * 2;
    if (iVar4 <= iVar6) {
      iVar4 = iVar6;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar7,iVar4,0x30);
  }
  piVar1 = ((int *)GEN_TOP((param_1 + 8)));
  param_1 = iVar6 - *piVar1;
  iVar4 = *piVar1 * 0x30 + *piVar7;
  if (0 < param_1) {
    do {
      if (iVar4 != 0) {
        F_00da1030(iVar4,0,4);
      }
      iVar4 = iVar4 + 0x30;
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  *((int *)GEN_TOP((iVar5 + 8))) = iVar6;
  uVar2 = F_00df9bf0(piVar7);
  phVar3 = ((undefined *)GEN_TOP(F_00da1030(*piVar7,0xffffffff,uVar2)));
  iVar6 = 0;
  if (0 < *(int *)(this + 0x68)) {
    iVar5 = 0;
    do {
      F_00da0e40(*piVar7 + iVar5,*((undefined4 *)GEN_TOP((*(int *)(this + 100) + iVar6 * 4))),0x13);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x30;
      phVar3 = this;
    } while (iVar6 < *(int *)(this + 0x68));
  }
  return (uint)phVar3;
}

/* ref: hkBinaryPackfileWriter::WriteFileHeader */
GEN_LIB GEN_FRAME uint F_00df8a70(GEN_P(undefined4 * in_eax, unsigned int gen_a0), GEN_P(int * in_edi, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdf8a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int * in_edi = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_FRAME_DECL_TOP(0x78, 8, 4);
  undefined4 uVar1;
  code * pcVar2;
  uint uVar3;
  
  F_00da1030(&(*(undefined4 *)(gen_frame + 0x0)),0xffffffff,0x40);
  uVar1 = *in_eax;
  (*(undefined4 *)(gen_frame + 0x0)) = 0x57e0e057;
  (*(undefined4 *)(gen_frame + 0x4)) = 0x10c0c010;
  ((undefined1 *)(gen_frame + 0x28))[0] = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
  (*(undefined4 *)(gen_frame + 0xc)) = 9;
  F_00da1010(((undefined1 *)(gen_frame + 0x10)),in_eax + 1,4);
  (*(undefined4 *)(gen_frame + 0x14)) = param_4;
  F_00da1030(((undefined1 *)(gen_frame + 0x3c)),0xffffffff,4);
  if (in_eax[3] == 0) {
    F_00dfb200(((undefined1 *)(gen_frame + 0x28)),0x10);
  }
  else {
    F_00da0e40(((undefined1 *)(gen_frame + 0x28)),in_eax[3],0x10);
  }
  pcVar2 = *((gen_code32 *)GEN_TOP((*in_edi + 0xc)));
  (*(undefined4 *)(gen_frame + 0x48)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x60)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x6c)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*pcVar2)(in_edi,param_3,&(*(undefined4 *)(gen_frame + 0x0)),&REFG(undefined, 0x15e3704),&(*(undefined4 *)(gen_frame + 0x40)));
  uVar3 = F_00e1d4f0(&(*(undefined4 *)(gen_frame + 0x40)) GEN_EDX_ARG);
  return uVar3;
}

/* ref: hkBinaryPackfileWriter::WriteFixupsAndPatchHeaders */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df8b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf8b50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x90, 0, 4);
  int * piVar1;
  code * pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 * puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar4 = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x64)) = this;
  F_00da68d0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,*((undefined4 *)GEN_TOP((param_1 + 0x1c))),*((undefined1 *)GEN_TOP((param_1 + 0x4c))));
  (*(int *)(gen_frame + 0x60)) = 0;
  if (0 < *((int *)GEN_TOP((param_1 + 8)))) {
    (*(int *)(gen_frame + 0x6c)) = 0;
    (*(int *)(gen_frame + 0x68)) = 0;
    do {
      iVar9 = *((int *)GEN_TOP((iVar4 + 4))) + (*(int *)(gen_frame + 0x68));
      uVar7 = 0;
      piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x40))) + 0xc + (*(int *)(gen_frame + 0x6c)))));
      (*(int *)(gen_frame + 0x7c)) = 0;
      (*(uint *)(gen_frame + 0x80)) = 0;
      (*(int *)(gen_frame + 0x84)) = ((int)0x80000000);
      uVar5 = piVar1[1] * 3;
      (*(int *)(gen_frame + 0x5c)) = iVar9;
      if (0 < (int)uVar5) {
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x7c)),uVar5 & ((int)uVar5 < 0) - 1,4);
        uVar7 = (*(uint *)(gen_frame + 0x80));
      }
      iVar8 = uVar5 - uVar7;
      (*(int *)(gen_frame + 0x88)) = iVar8;
      puVar6 = ((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x7c)) + uVar7 * 4)));
      if (0 < iVar8) {
        for (; iVar9 = (*(int *)(gen_frame + 0x5c)), iVar8 != 0; iVar8 = iVar8 - 1) {
          *puVar6 = 0xffffffff;
          puVar6 = puVar6 + 1;
        }
      }
      (*(uint *)(gen_frame + 0x80)) = uVar5;
      (*(int *)(gen_frame + 0x88)) = 0;
      if (0 < piVar1[1]) {
        (*(undefined * PTR32 *)(gen_frame + 0x54)) = (*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x14;
        (*(int *)(gen_frame + 0x58)) = 0;
        param_1 = 0;
        do {
          uVar5 = F_00dbd970((*(undefined * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*piVar1 + 4 + param_1))),0xfffffffd);
          if ((-1 < (int)uVar5) && (-1 < *((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x10))) + uVar5 * 8))))) {
            *((int *)GEN_TOP(((*(int *)(gen_frame + 0x58)) + (*(int *)(gen_frame + 0x7c))))) = *((int *)GEN_TOP((*piVar1 + param_1))) - *((int *)GEN_TOP((iVar9 + 0x14)));
            *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x58)) + 4 + (*(int *)(gen_frame + 0x7c))))) =
                 *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x10))) + uVar5 * 8)));
            *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x58)) + 8 + (*(int *)(gen_frame + 0x7c))))) =
                 *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x10))) + 4 + uVar5 * 8)));
            (*(int *)(gen_frame + 0x58)) = (*(int *)(gen_frame + 0x58)) + 0xc;
            iVar9 = (*(int *)(gen_frame + 0x5c));
          }
          param_1 = param_1 + 0x10;
          iVar8 = (*(int *)(gen_frame + 0x88)) + 1;
          (*(int *)(gen_frame + 0x88)) = iVar8;
        } while (iVar8 < piVar1[1]);
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar4 + 0x1c))) + 0x1c))))
                (*((int * PTR32 *)GEN_TOP((iVar4 + 0x1c))) GEN_EDX_ARG,*((int *)GEN_TOP((iVar9 + 0x1c))) + *((int *)GEN_TOP((iVar9 + 0x14))),0);
      F_00da6db0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x7c)),(*(uint *)(gen_frame + 0x80)));
      (*(uint *)(gen_frame + 0x80)) = 0;
      if (-1 < (*(int *)(gen_frame + 0x84))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x7c)),(*(int *)(gen_frame + 0x84)) * 4);
      }
      iVar9 = *((int *)GEN_TOP((iVar4 + 4))) + (*(int *)(gen_frame + 0x68));
      piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x40))) + 0x18 + (*(int *)(gen_frame + 0x6c)))));
      (*(int *)(gen_frame + 0x7c)) = 0;
      (*(int *)(gen_frame + 0x70)) = 0;
      (*(uint *)(gen_frame + 0x74)) = 0;
      (*(int *)(gen_frame + 0x78)) = ((int)0x80000000);
      uVar5 = piVar1[1] * 3;
      (*(int *)(gen_frame + 0x84)) = 0x80000000;
      (*(int *)(gen_frame + 0x88)) = iVar9;
      if (0 < (int)uVar5) {
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x70)),((int)uVar5 < 0) - 1 & uVar5,4);
      }
      (*(uint *)(gen_frame + 0x74)) = uVar5;
      iVar8 = 0;
      if (0 < piVar1[1]) {
        iVar10 = 0;
        do {
          *((int *)GEN_TOP(((*(int *)(gen_frame + 0x70)) + iVar10))) = *((int *)GEN_TOP((*piVar1 + iVar8 * 8))) - *((int *)GEN_TOP(((*(int *)(gen_frame + 0x88)) + 0x14)));
          *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x70)) + 4 + iVar10))) = 0;
          uVar5 = F_00da4190(((undefined *)GEN_TOP((iVar4 + 0x30))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*piVar1 + 4 + iVar8 * 8))),
                             0xffffffff);
          *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x70)) + 8 + iVar10))) = uVar5;
          iVar8 = iVar8 + 1;
          iVar10 = iVar10 + 0xc;
          iVar9 = (*(int *)(gen_frame + 0x88));
        } while (iVar8 < piVar1[1]);
      }
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar4 + 0x1c))) + 0x1c))))
                (*((int * PTR32 *)GEN_TOP((iVar4 + 0x1c))) GEN_EDX_ARG,*((int *)GEN_TOP((iVar9 + 0x20))) + *((int *)GEN_TOP((iVar9 + 0x14))),0);
      F_00da6db0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x70)),(*(uint *)(gen_frame + 0x74)));
      (*(uint *)(gen_frame + 0x74)) = 0;
      if (-1 < (*(int *)(gen_frame + 0x78))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x70)),(*(int *)(gen_frame + 0x78)) * 4);
      }
      (*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) + 0x30;
      (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + 0x34;
      iVar9 = (*(int *)(gen_frame + 0x60)) + 1;
      (*(int *)(gen_frame + 0x70)) = 0;
      (*(int *)(gen_frame + 0x78)) = 0x80000000;
      (*(int *)(gen_frame + 0x60)) = iVar9;
      this = (*(undefined * PTR32 *)(gen_frame + 0x64));
    } while (iVar9 < *((int *)GEN_TOP((iVar4 + 8))));
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar4 + 0x1c))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((iVar4 + 0x1c))) GEN_EDX_ARG,param_2,0);
  param_1 = 0;
  if (0 < *((int *)GEN_TOP((iVar4 + 8)))) {
    iVar9 = 0;
    do {
      iVar8 = *((int *)GEN_TOP((iVar4 + 4)));
      (*(undefined4 *)(gen_frame + 0x18)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x24)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x30)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x3c)) = 0x80000000;
      pcVar2 = *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x20))) + 0xc)));
      uVar3 = *((undefined4 *)GEN_TOP((iVar4 + 0x1c)));
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0;
      (*(undefined4 *)(gen_frame + 0x34)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      (*pcVar2)(iVar4 + 0x20,uVar3,iVar8 + iVar9,&REFG(undefined, 0x15e36d4),&(*(undefined4 *)(gen_frame + 0x10)));
      F_00e1d4f0(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG);
      param_1 = param_1 + 1;
      iVar9 = iVar9 + 0x30;
      this = (*(undefined * PTR32 *)(gen_frame + 0x64));
    } while (param_1 < *((int *)GEN_TOP((iVar4 + 8))));
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar4 + 0x1c))) + 0x1c))))(*((int * PTR32 *)GEN_TOP((iVar4 + 0x1c))) GEN_EDX_ARG,0x18,0);
  puVar6 = ((undefined4 *)GEN_TOP(F_00e1d7a0(iVar4 + 0x20 GEN_EDX_ARG)));
  F_00da68d0(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar4 + 0x1c))),
               (char)((uint)*puVar6 >> 8) != (*(undefined1 *)((char *)&REFG(undefined4, 0x135491c) + 1)));
  F_00da6c50(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x10))) + *(int *)(this + 0x8c) * 8))));
  F_00da6c50(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar4 + 0x10))) + 4 + *(int *)(this + 0x8c) * 8))));
  uVar3 = *((undefined4 *)GEN_TOP((*(int *)(this + 8) + *(int *)(this + 0x90) * 0x18)));
  F_00da6c50(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG,0);
  uVar5 = F_00d92610(uVar3 GEN_EDX_ARG);
  uVar5 = F_00da4190(((undefined *)GEN_TOP((iVar4 + 0x30))) GEN_EDX_ARG,uVar5,0xffffffff);
  F_00da6c50(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG,uVar5);
  F_00da6900(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG);
  uVar5 = F_00da6900(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar5;
}

/* ref: hkBinaryPackfileWriter::PadToAlignment */
GEN_LIB GEN_FRAME uint F_00df8f30(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int * in_edi, unsigned int gen_a1))
{
  GEN_ENTER(0xdf8f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int * in_edi = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x34, 12, 4);
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_edi + 0x20))))(in_edi GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x2c)) = uVar1;
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000020;
  if (0x20 < in_eax) {
    iVar2 = 0x40;
    if (0x3f < in_eax) {
      iVar2 = in_eax;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),iVar2,1);
  }
  if (0 < in_eax - (*(int *)(gen_frame + 0x4))) {
    F_00c48350((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + (*(int *)(gen_frame + 0x4)),-1,in_eax - (*(int *)(gen_frame + 0x4)));
  }
  uVar3 = in_eax - 1U & (*(uint *)(gen_frame + 0x2c));
  (*(int *)(gen_frame + 0x4)) = in_eax;
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_edi + 0x10))))(in_edi GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x0)),in_eax - uVar3);
  }
  (*(int *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
  }
  return uVar1;
}

/* ref: hkBinaryPackfileWriter::WriteSections */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00df8ff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdf8ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x7c, 4, 4);
  undefined4 uVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  int * piVar7;
  undefined * this_00;
  int iVar8;
  int iVar9;
  undefined * phVar10;
  
  piVar3 = (*(int * PTR32 *)&gen_args[0]);
  iVar9 = (*(int * PTR32 *)&gen_args[0])[1];
  (*(undefined * PTR32 *)(gen_frame + 0x74)) = this;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[7])) + 0x20))))(((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[7])) GEN_EDX_FWD);
  *((uint *)GEN_TOP((iVar9 + 0x14))) = uVar4;
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((uint)(*(int * PTR32 *)&gen_args[0]) & 0xffffff00)));
  F_00da3de0(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[0]));
  ((undefined * PTR32 *)(gen_frame + 0x44))[0] = &REFG(undefined, 0x15da330);
  ((undefined * PTR32 *)(gen_frame + 0x44))[1] = &REFG(undefined, 0x15da2a0);
  ((undefined * PTR32 *)(gen_frame + 0x44))[2] = &REFG(undefined, 0x15da300);
  ((undefined * PTR32 *)(gen_frame + 0x44))[3] = &REFG(undefined, 0x15da2d0);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(0x0));
  do {
    uVar4 = F_00d92610(((undefined * PTR32 *)(gen_frame + 0x44))[(int)((int)(*(int * PTR32 *)&gen_args[0]))] GEN_EDX_ARG);
    F_00da3a20(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,uVar4,1);
    F_00df8910(piVar3,((undefined * PTR32 *)(gen_frame + 0x44))[(int)((int)(*(int * PTR32 *)&gen_args[0]))],*((undefined4 *)GEN_TOP((iVar9 + 0x14))));
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 1)));
  } while ((int)(*(int * PTR32 *)&gen_args[0]) < 4);
  (*(int *)(gen_frame + 0x64)) = 0;
  if (0 < *(int *)(this + 0xc)) {
    (*(uint *)(gen_frame + 0x70)) = 0;
    do {
      uVar4 = F_00d92610(*((undefined4 *)GEN_TOP((*(int *)(this + 8) + (*(uint *)(gen_frame + 0x70)) + 4))) GEN_EDX_ARG);
      uVar4 = F_00da3ae0(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,uVar4);
      F_00da3e40(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,(int)&(*(int * PTR32 *)&gen_args[0]) + 3,uVar4);
      if ((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 3)))) == '\0') {
        uVar4 = F_00d92610(*((undefined4 *)GEN_TOP((*(int *)(this + 8) + (*(uint *)(gen_frame + 0x70)) + 4))) GEN_EDX_ARG);
        F_00da3a20(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG,uVar4,1);
        F_00df8910(piVar3,*((undefined4 *)GEN_TOP((*(int *)(this + 8) + 4 + (*(uint *)(gen_frame + 0x70))))),
                       *((undefined4 *)GEN_TOP((iVar9 + 0x14))));
      }
      (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x70)) + 0x18;
      iVar5 = (*(int *)(gen_frame + 0x64)) + 1;
      (*(int *)(gen_frame + 0x64)) = iVar5;
    } while (iVar5 < *(int *)(this + 0xc));
  }
  F_00df8f30(0x10,piVar3[7]);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar3[7])) + 0x20))))(((int *)GEN_TOP(piVar3[7])) GEN_EDX_ARG);
  iVar5 = uVar4 - *((int *)GEN_TOP((iVar9 + 0x14)));
  *((int *)GEN_TOP((iVar9 + 0x18))) = iVar5;
  *((int *)GEN_TOP((iVar9 + 0x1c))) = iVar5;
  *((int *)GEN_TOP((iVar9 + 0x20))) = iVar5;
  *((int *)GEN_TOP((iVar9 + 0x24))) = iVar5;
  *((int *)GEN_TOP((iVar9 + 0x28))) = iVar5;
  *((int *)GEN_TOP((iVar9 + 0x2c))) = iVar5;
  F_00da3e20(((undefined1 *)(gen_frame + 0x34)) GEN_EDX_ARG);
  iVar9 = *(int *)((*(undefined * PTR32 *)(gen_frame + 0x74)) + 0xc);
  if ((int)(piVar3[6] & 0x3fffffffU) < iVar9) {
    iVar5 = (piVar3[6] & 0x3fffffffU) * 2;
    if (iVar5 <= iVar9) {
      iVar5 = iVar9;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar3 + 4,iVar5,8);
  }
  iVar5 = 0;
  if (iVar9 != piVar3[5] && -1 < iVar9 - piVar3[5]) {
    do {
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar9 - piVar3[5]);
  }
  piVar3[5] = iVar9;
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(piVar3[2]));
  if ((int)(piVar3[0x12] & 0x3fffffffU) < (int)(*(int * PTR32 *)&gen_args[0])) {
    iVar9 = (piVar3[0x12] & 0x3fffffffU) * 2;
    iVar5 = (int)(*(int * PTR32 *)&gen_args[0]);
    if ((int)(*(int * PTR32 *)&gen_args[0]) < iVar9) {
      iVar5 = iVar9;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar3 + 0x10,iVar5,0x34);
  }
  iVar9 = (piVar3[0x11] - (int)(*(int * PTR32 *)&gen_args[0])) - 1;
  if (-1 < iVar9) {
    this_00 = ((undefined *)GEN_TOP((iVar9 * 0x34 + (int)(*(int * PTR32 *)&gen_args[0]) * 0x34 + piVar3[0x10])));
    do {
      F_00e1d4f0(this_00 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x34)));
      iVar9 = iVar9 - 1;
    } while (-1 < iVar9);
  }
  iVar9 = (int)(*(int * PTR32 *)&gen_args[0]) - piVar3[0x11];
  if (0 < iVar9) {
    puVar6 = ((undefined4 *)GEN_TOP((piVar3[0x11] * 0x34 + piVar3[0x10] + 0x14)));
    do {
      if (puVar6 != ((undefined4 *)GEN_TOP(0x14))) {
        puVar6[-5] = 0;
        puVar6[-4] = 0;
        puVar6[-3] = 0x80000000;
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *puVar6 = 0x80000000;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0x80000000;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[6] = 0x80000000;
        puVar6[7] = 0;
      }
      puVar6 = puVar6 + 0xd;
      iVar9 = iVar9 - 1;
    } while (iVar9 != 0);
  }
  piVar3[0x11] = (int)(*(int * PTR32 *)&gen_args[0]);
  uVar4 = F_00dfb4e0((undefined *)(*(undefined * PTR32 *)(gen_frame + 0x74)) GEN_EDX_ARG,REFG(undefined * PTR32, 0x13548cc));
  (*(uint *)(gen_frame + 0x58)) = uVar4;
  (*(uint *)(gen_frame + 0x70)) = 1;
  if (1 < piVar3[2]) {
    (*(int *)(gen_frame + 0x6c)) = 0x34;
    (*(int *)(gen_frame + 0x64)) = 0x30;
    do {
      iVar8 = piVar3[1] + (*(int *)(gen_frame + 0x64));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar3[7])) + 0x20))))(((int *)GEN_TOP(piVar3[7])) GEN_EDX_ARG);
      *((uint *)GEN_TOP((iVar8 + 0x14))) = uVar4;
      iVar5 = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x14)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x20)) = 0x80000000;
      (*(uint *)(gen_frame + 0x2c)) = 0x80000000;
      iVar9 = *piVar3;
      (*(int *)(gen_frame + 0x0)) = 0;
      (*(int *)(gen_frame + 0x4)) = 0;
      (*(int *)(gen_frame + 0xc)) = 0;
      (*(uint *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(int *)(gen_frame + 0x1c)) = 0;
      (*(int *)(gen_frame + 0x24)) = 0;
      (*(uint *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      if ((*((char *)GEN_TOP((iVar9 + 8))) == '\0') && ((*(uint *)(gen_frame + 0x70)) == (*(uint *)(gen_frame + 0x58)))) {
        if (0 < *(int *)((*(undefined * PTR32 *)(gen_frame + 0x74)) + 0xc)) {
          iVar9 = 0;
          do {
            if (*((uint *)GEN_TOP((iVar9 + 0x10 + *(int *)((*(undefined * PTR32 *)(gen_frame + 0x74)) + 8)))) == (*(uint *)(gen_frame + 0x58))) {
              *((undefined4 *)GEN_TOP((piVar3[4] + iVar5 * 8))) = 0xffffffff;
              *((undefined4 *)GEN_TOP((piVar3[4] + 4 + iVar5 * 8))) = 0xffffffff;
            }
            iVar5 = iVar5 + 1;
            iVar9 = iVar9 + 0x18;
          } while (iVar5 < *(int *)((*(undefined * PTR32 *)(gen_frame + 0x74)) + 0xc));
        }
      }
      else {
        (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(0x0));
        if (0 < *(int *)((*(undefined * PTR32 *)(gen_frame + 0x74)) + 0xc)) {
          (*(int *)(gen_frame + 0x68)) = 0;
          do {
            piVar7 = ((int *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x74)) + 8) + (*(int *)(gen_frame + 0x68)))));
            (*(int * PTR32 *)(gen_frame + 0x5c)) = piVar7;
            if (piVar7[4] == (*(uint *)(gen_frame + 0x70))) {
              (*(uint *)(gen_frame + 0x60)) = piVar7[1];
              (*(undefined * PTR32 *)(gen_frame + 0x54)) = ((undefined *)GEN_TOP(*piVar7));
              iVar5 = (int)(*(int * PTR32 *)&gen_args[0]) * 8;
              *((uint *)GEN_TOP((iVar5 + piVar3[4]))) = (*(uint *)(gen_frame + 0x70));
              iVar9 = piVar3[4];
              uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar3[7])) + 0x20))))(((int *)GEN_TOP(piVar3[7])) GEN_EDX_ARG);
              *((uint *)GEN_TOP((iVar9 + iVar5 + 4))) = uVar4 - *((int *)GEN_TOP((iVar8 + 0x14)));
              if ((*(uint *)(gen_frame + 0x60)) == 0) {
                ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar3[7])) + 0x10))))(((int *)GEN_TOP(piVar3[7])) GEN_EDX_ARG,*(*(int * PTR32 *)(gen_frame + 0x5c)),(*(int * PTR32 *)(gen_frame + 0x5c))[5]);
              }
              else {
                ((code *)*((gen_code32 *)GEN_TOP((piVar3[8] + 0xc))))(piVar3 + 8,piVar3[7],(*(undefined * PTR32 *)(gen_frame + 0x54)),(*(uint *)(gen_frame + 0x60)),&(*(int *)(gen_frame + 0x0)));
              }
            }
            (*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) + 0x18;
            (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 1)));
          } while ((int)(*(int * PTR32 *)&gen_args[0]) < *(int *)((*(undefined * PTR32 *)(gen_frame + 0x74)) + 0xc));
        }
      }
      iVar9 = 0;
      if (0 < (*(int *)(gen_frame + 0x4))) {
        do {
          piVar7 = ((int *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + iVar9 * 8)));
          *piVar7 = *piVar7 - *((int *)GEN_TOP((iVar8 + 0x14)));
          piVar7 = ((int *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 4 + iVar9 * 8)));
          *piVar7 = *piVar7 - *((int *)GEN_TOP((iVar8 + 0x14)));
          iVar9 = iVar9 + 1;
        } while (iVar9 < (*(int *)(gen_frame + 0x4)));
      }
      (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((*(uint *)(gen_frame + 0x10)) - 1)));
      if (-1 < (int)(*(int * PTR32 *)&gen_args[0])) {
        (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)((*(undefined * PTR32 *)(gen_frame + 0x74)) + 0x20);
        iVar9 = (int)(*(int * PTR32 *)&gen_args[0]) * 0x10;
        do {
          uVar4 = F_00dbd970((*(undefined * PTR32 *)(gen_frame + 0x54)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + 4 + iVar9))),0);
          (*(uint *)(gen_frame + 0x60)) = uVar4;
          if (uVar4 != 0) {
            (*(int * PTR32 *)(gen_frame + 0x5c)) = ((int *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + iVar9)));
            if ((*(uint *)(gen_frame + 0x28)) == ((*(uint *)(gen_frame + 0x2c)) & 0x3fffffff)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x24)),8);
            }
            piVar7 = ((int *)GEN_TOP(((*(int *)(gen_frame + 0x24)) + (*(uint *)(gen_frame + 0x28)) * 8)));
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) + 1;
            *piVar7 = *(*(int * PTR32 *)(gen_frame + 0x5c)) - *((int *)GEN_TOP((iVar8 + 0x14)));
            piVar7[1] = (*(uint *)(gen_frame + 0x60));
            uVar4 = (*(uint *)(gen_frame + 0x10)) - 1;
            (*(uint *)(gen_frame + 0x10)) = uVar4;
            if (((int *)GEN_TOP(uVar4)) != (*(int * PTR32 *)&gen_args[0])) {
              puVar6 = ((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0xc)) + iVar9)));
              iVar5 = (uVar4 * 0x10 + (*(int *)(gen_frame + 0xc))) - (int)puVar6;
              (*(int * PTR32 *)(gen_frame + 0x5c)) = (int *)&REFG(undefined, 0x4);
              do {
                *puVar6 = *((undefined4 *)GEN_TOP((iVar5 + (int)puVar6)));
                puVar6 = puVar6 + 1;
                piVar7 = ((int *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x5c)) - 1)));
                (*(int * PTR32 *)(gen_frame + 0x5c)) = piVar7;
              } while (piVar7 != ((int *)GEN_TOP(0x0)));
            }
          }
          (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) - 1)));
          iVar9 = iVar9 - 0x10;
        } while (-1 < (int)(*(int * PTR32 *)&gen_args[0]));
      }
      F_00da68d0(((undefined * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,piVar3[7],(char)piVar3[0x13]);
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar3[7])) + 0x20))))(((int *)GEN_TOP(piVar3[7])) GEN_EDX_ARG);
      *((uint *)GEN_TOP((iVar8 + 0x18))) = uVar4 - *((int *)GEN_TOP((iVar8 + 0x14)));
      F_00da6970((undefined *)((undefined * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)),4,(*(int *)(gen_frame + 0x4)) * 2);
      F_00df8f30(0x10,piVar3[7]);
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar3[7])) + 0x20))))(((int *)GEN_TOP(piVar3[7])) GEN_EDX_ARG);
      *((uint *)GEN_TOP((iVar8 + 0x1c))) = uVar4 - *((int *)GEN_TOP((iVar8 + 0x14)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar3[7])) + 0x1c))))(((int *)GEN_TOP(piVar3[7])) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x10)) * 0xc,1);
      F_00df99d0(((undefined *)GEN_TOP(((*(int *)(gen_frame + 0x6c)) + 0xc + piVar3[0x10]))) GEN_EDX_ARG,&(*(int *)(gen_frame + 0xc)));
      F_00df8f30(0x10,piVar3[7]);
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar3[7])) + 0x20))))(((int *)GEN_TOP(piVar3[7])) GEN_EDX_ARG);
      *((uint *)GEN_TOP((iVar8 + 0x20))) = uVar4 - *((int *)GEN_TOP((iVar8 + 0x14)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar3[7])) + 0x1c))))(((int *)GEN_TOP(piVar3[7])) GEN_EDX_ARG,(*(int *)(gen_frame + 0x1c)) * 0xc,1);
      F_00df9a50(((undefined *)GEN_TOP(((*(int *)(gen_frame + 0x6c)) + 0x18 + piVar3[0x10]))) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x18)));
      F_00df8f30(0x10,piVar3[7]);
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar3[7])) + 0x20))))(((int *)GEN_TOP(piVar3[7])) GEN_EDX_ARG);
      *((uint *)GEN_TOP((iVar8 + 0x24))) = uVar4 - *((int *)GEN_TOP((iVar8 + 0x14)));
      iVar9 = 0;
      if (-1 < *(int *)((*(undefined * PTR32 *)(gen_frame + 0x74)) + 0x34)) {
        piVar7 = *(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x74)) + 0x2c);
        do {
          if (*piVar7 != -1) break;
          iVar9 = iVar9 + 1;
          piVar7 = piVar7 + 2;
        } while (iVar9 <= *(int *)((*(undefined * PTR32 *)(gen_frame + 0x74)) + 0x34));
      }
      (*(int *)(gen_frame + 0x68)) = iVar9;
      (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((uint)(*(int * PTR32 *)&gen_args[0]) & 0xffffff)));
      phVar10 = (*(undefined * PTR32 *)(gen_frame + 0x74));
      if (iVar9 <= *(int *)((*(undefined * PTR32 *)(gen_frame + 0x74)) + 0x34)) {
        do {
          uVar4 = F_00dbd970((undefined *)(phVar10 + 0x14) GEN_EDX_ARG,
                             *((undefined4 *)GEN_TOP((*(int *)(phVar10 + 0x2c) + (*(int *)(gen_frame + 0x68)) * 8))),0xffffffff);
          if ((-1 < (int)uVar4) &&
             (*((uint *)GEN_TOP((*(int *)(phVar10 + 8) + 0x10 + uVar4 * 0x18))) == (*(uint *)(gen_frame + 0x70)))) {
            uVar1 = *((undefined4 *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0x74)) + 0x2c) + 4 + (*(int *)(gen_frame + 0x68)) * 8)));
            uVar2 = *((undefined4 *)GEN_TOP((piVar3[4] + 4 + uVar4 * 8)));
            (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(CONCAT13(1,GEN_PIECE(&(*(int * PTR32 *)&gen_args[0]), 0, 3))));
            F_00da6c50((undefined *)((undefined * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,uVar2);
            uVar4 = F_00da0e60(uVar1);
            F_00da6ae0((undefined *)((undefined * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,uVar1,uVar4 + 1);
            F_00df8f30(4,piVar3[7]);
            phVar10 = (*(undefined * PTR32 *)(gen_frame + 0x74));
          }
          iVar9 = *(int *)(phVar10 + 0x34);
          iVar5 = (*(int *)(gen_frame + 0x68)) + 1;
          if (iVar5 <= iVar9) {
            piVar7 = ((int *)GEN_TOP((*(int *)(phVar10 + 0x2c) + iVar5 * 8)));
            do {
              if (*piVar7 != -1) break;
              iVar5 = iVar5 + 1;
              piVar7 = piVar7 + 2;
            } while (iVar5 <= iVar9);
          }
          (*(int *)(gen_frame + 0x68)) = iVar5;
        } while (iVar5 <= iVar9);
        if ((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 3)))) != '\0') {
          F_00da6c50((undefined *)((undefined * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,0xffffffff);
          F_00df8f30(0x10,piVar3[7]);
        }
      }
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar3[7])) + 0x20))))(((int *)GEN_TOP(piVar3[7])) GEN_EDX_ARG);
      iVar9 = *((int *)GEN_TOP((iVar8 + 0x14)));
      (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(0x0));
      *((uint *)GEN_TOP((iVar8 + 0x28))) = uVar4 - iVar9;
      if (0 < (int)(*(uint *)(gen_frame + 0x28))) {
        do {
          iVar9 = (*(int *)(gen_frame + 0x24)) + (int)(*(int * PTR32 *)&gen_args[0]) * 8;
          F_00da6c50((undefined *)((undefined * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x24)) + (int)(*(int * PTR32 *)&gen_args[0]) * 8))));
          uVar4 = F_00da0e60(*((undefined4 *)GEN_TOP((iVar9 + 4))));
          F_00da6ae0((undefined *)((undefined * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar9 + 4))),uVar4 + 1);
          F_00df8f30(4,piVar3[7]);
          (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 1)));
        } while ((int)(*(int * PTR32 *)&gen_args[0]) < (int)(*(uint *)(gen_frame + 0x28)));
      }
      if ((*(uint *)(gen_frame + 0x28)) != 0) {
        F_00da6c50((undefined *)((undefined * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG,0xffffffff);
        F_00df9ad0(((undefined *)GEN_TOP(((*(int *)(gen_frame + 0x6c)) + 0x24 + piVar3[0x10]))) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x24)));
        F_00df8f30(0x10,piVar3[7]);
      }
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(piVar3[7])) + 0x20))))(((int *)GEN_TOP(piVar3[7])) GEN_EDX_ARG);
      *((uint *)GEN_TOP((iVar8 + 0x2c))) = uVar4 - *((int *)GEN_TOP((iVar8 + 0x14)));
      F_00da6900(((undefined * PTR32 *)(gen_frame + 0x44)) GEN_EDX_ARG);
      F_00e1d4f0(&(*(int *)(gen_frame + 0x0)) GEN_EDX_ARG);
      (*(int *)(gen_frame + 0x64)) = (*(int *)(gen_frame + 0x64)) + 0x30;
      (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + 0x34;
      uVar4 = (*(uint *)(gen_frame + 0x70)) + 1;
      (*(uint *)(gen_frame + 0x70)) = uVar4;
    } while ((int)uVar4 < piVar3[2]);
  }
  return 0;
}

/* ref: hkBinaryPackfileWriter::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf9700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x64, 12, 4);
  char cVar1;
  int * piVar2;
  char * pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  pcVar3 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x18))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(int)&(*(int * PTR32 *)&gen_args[0]) + 3)));
  uVar6 = (*(undefined4 *)&gen_args[1]);
  if (*pcVar3 == '\0') {
    return 1;
  }
  F_00dfafb0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]));
  (*(undefined2 *)(gen_frame + 0x56)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (*(undefined * PTR32 (*)[9])REFP(0x114cdfc));
  (*(int * PTR32 *)(gen_frame + 0x58)) = piVar2;
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x20))))(piVar2 GEN_EDX_ARG);
  (*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50));
  (*(uint *)(gen_frame + 0x5c)) = uVar4;
  F_00df89b0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  F_00df8a70(uVar6,((undefined1 *)(gen_frame + 0x20)),(*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x8)));
  uVar4 = (*(code *)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50))[8])(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)));
  uVar6 = 1;
  uVar5 = F_00df9bf0(((undefined1 *)(gen_frame + 0x4)));
  (*(code *)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50))[7])(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)),uVar5,uVar6);
  F_00df8ff0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar5 = (*(code *)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50))[8])(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)));
  F_00df8b50(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar4);
  (*(code *)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50))[7])(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)),uVar5,0);
  (*(code *)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50))[5])(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)));
  pcVar3 = ((char *)GEN_TOP((*(code *)(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50))[3])(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)),(int)&(*(int * PTR32 *)&gen_args[0]) + 3)));
  cVar1 = *pcVar3;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  F_00dfb020(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)(cVar1 == '\0');
}

/* ref: FUN_00df9830 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf9830u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd970(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df9840 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdf9840u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00df9870 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf9870u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd970(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df9880 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf9880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this GEN_EDX_FWD,local_8);
  return (uint)this;
}

/* ref: FUN_00df98a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df98a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf98a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da3a20(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00df98b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df98b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf98b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00df98c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df98c0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf98c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 0x18;
}

/* ref: FUN_00df98f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df98f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf98f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00df9940 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9940(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf9940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00df99a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df99a0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf99a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00df99b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df99b0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf99b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx;
}

/* ref: hkArray::Swap */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df99d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf99d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00df9a30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9a30(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf9a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00df9a50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf9a50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00df9ab0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9ab0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf9ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00df9ad0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf9ad0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00df9b30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9b30(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf9b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x30 + *in_ecx;
}

/* ref: FUN_00df9ba0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9ba0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf9ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00df9be0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9be0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf9be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x34 + *in_ecx;
}

/* ref: hkBinaryPackfileWriter::GetSectionHeadersByteSize */
GEN_LIB GEN_FRAME uint F_00df9bf0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdf9bf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *((int *)GEN_TOP((param_1 + 4))) * 0x30;
}

/* ref: FUN_00df9c30 */
GEN_LIB GEN_FRAME unsigned int F_00df9c30(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdf9c30u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00df9c70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf9c70u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00df9cc0 */
GEN_LIB GEN_FRAME unsigned int F_00df9cc0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf9cc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 4;
  puVar1 = param_1;
  do {
    *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: Global::ConstructElements48 */
GEN_LIB GEN_FRAME uint F_00df9d50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdf9d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = param_2;
  iVar2 = param_1;
  uVar3 = param_2;
  if (0 < (int)param_2) {
    do {
      if (iVar2 != 0) {
        uVar1 = F_00da1030(iVar2,0,4);
      }
      iVar2 = iVar2 + 0x30;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return uVar1;
}

/* ref: hkMemoryAllocator::BufFreeArray8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf9da0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: hkMemoryAllocator::BufFreeArray16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf9dc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 << 4);
  return uVar1;
}

/* ref: hkMemoryAllocator::BufFreeArray8b */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf9de0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: hkMemoryAllocator::BufFreeArray8c */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf9e00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: hkMemoryAllocator::BufFreeArray48 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf9e40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0x30);
  return uVar1;
}

/* ref: hkMemoryAllocator::BufFreeArray8d */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf9e80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: hkMemoryAllocator::BufFreeArray52 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf9eb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0x34);
  return uVar1;
}

/* ref: FUN_00df9ed0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf9ed0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x114cdfc));
  *((int * PTR32 *)GEN_TOP(((int)this + 8))) = param_1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x20))))(param_1 GEN_EDX_FWD);
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar1;
  return (uint)this;
}

/* ref: hkSubStreamWriter::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf9f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0xc))))(*(int * PTR32 *)(this + 8) GEN_EDX_FWD,param_1);
  return param_1;
}

/* ref: hkSubStreamWriter::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xdf9f20u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x10))))
                    (*(int * PTR32 *)(this + 8) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: hkSubStreamWriter::vf5 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df9f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xdf9f30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x14))))
                    (*(int * PTR32 *)(this + 8) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: hkSubStreamWriter::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdf9f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x18))))(*(int * PTR32 *)(this + 8) GEN_EDX_FWD,param_1);
  return param_1;
}

/* ref: hkSubStreamWriter::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00df9f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdf9f60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x1c))))
                      (*(int * PTR32 *)(this + 8) GEN_EDX_ARG,*(int *)(this + 0xc) + param_1,0);
    return uVar1;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x1c))))(*(int * PTR32 *)(this + 8) GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: hkSubStreamWriter::vf8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00df9fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdf9fa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x20))))(*(int * PTR32 *)(this + 8) GEN_EDX_FWD);
  return uVar1 - *(int *)(this + 0xc);
}

/* ref: Global::FreeObject52 */
GEN_LIB GEN_FRAME unsigned int F_00df9fd0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdf9fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: hkMap::GetKey */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa000(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + param_2 * 8)));
}

/* ref: hkMap::GetValue */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa010(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + 4 + param_2 * 8)));
}

/* ref: hkMap::IsValid */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa020(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdfa020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = param_3 <= *((int *)GEN_TOP((in_ecx + 8)));
  return param_2;
}

/* ref: FUN_00dfa040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfa040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da3ae0(this GEN_EDX_FWD,param_2);
  F_00da3e40(this GEN_EDX_ARG,param_1,uVar1);
  return param_1;
}

/* ref: hkArray::PushBack8_00dfa160 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfa160u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: hkArray::RemoveAt16 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dfa1b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa1b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (*((int *)GEN_TOP(((int)this + 4))) != param_1) {
    puVar1 = ((undefined4 *)GEN_TOP((param_1 * 0x10 + *(int *)this)));
    iVar2 = (*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 0x10) - (int)puVar1;
    iVar3 = 4;
    do {
      *puVar1 = *((undefined4 *)GEN_TOP((iVar2 + (int)puVar1)));
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: hkArray::SetSize16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfa1f0u, gen_a0, gen_a1, gen_a2, 0u);
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
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return uVar2;
}

/* ref: hkArray::ExpandOne8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa250u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: hkArray::ClearAndDeallocate8_00dfa290 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkArray::ClearAndDeallocate16_00dfa2d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa2d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: hkArray::ClearAndDeallocate8b_00dfa310 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkArray::ClearAndDeallocate8c_00dfa350 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkArray::ClearAndDeallocate48 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkArray::Reserve48 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa3d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfa3d0u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,0x30);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: hkArray::ClearAndDeallocate8d_00dfa410 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkArray::Reserve8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfa450u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: hkArray::Reserve52 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfa490u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,0x34);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: Global::ScalarDeletingDestructor_00dfa4d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa4d0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa4d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00e1d4f0(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x34);
  }
  return (uint)param_1;
}

/* ref: Global::DeleteReferencedObject_00dfa510 */
GEN_LIB GEN_FRAME uint F_00dfa510(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdfa510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkSubStreamWriter::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa540(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa540u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dfa580 */
GEN_LIB GEN_FRAME uint F_00dfa580(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdfa580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkBinaryPackfileWriter::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa5b0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa5b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00df8900(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: hkMap::GetNext */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dfa610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa610u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: hkArray::PushBack8Heap */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa640u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: hkArray::SetSize16Heap */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa680u, gen_a0, gen_a1, 0u, 0u);
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
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar2;
}

/* ref: hkArray::ExpandOne8Heap */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfa6c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfa6c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: hkArray::SetSize48 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfa6f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,0x30);
  }
  uVar2 = param_2 - *((int *)GEN_TOP(((int)this + 4)));
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) * 0x30 + *(int *)this;
  uVar1 = uVar2;
  if (0 < (int)uVar2) {
    do {
      if (iVar3 != 0) {
        uVar2 = F_00da1030(iVar3,0,4);
      }
      iVar3 = iVar3 + 0x30;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return uVar2;
}

/* ref: hkArray::SetSize8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfa770u, gen_a0, gen_a1, gen_a2, 0u);
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
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return uVar2;
}

/* ref: hkArray::SetSizeFill4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dfa7b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdfa7b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,4);
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = *(int *)this;
  iVar4 = param_2 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *((undefined4 *)GEN_TOP((iVar1 + iVar3 * 4 + iVar5 * 4))) = *param_3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return 0;
}

/* ref: hkArray::ClearAndDeallocate8Heap */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfa810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfa810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkArray::ClearAndDeallocate16Heap */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfa850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfa850u, gen_a0, 0u, 0u, 0u);
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

/* ref: hkArray::ClearAndDeallocate8HeapB */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfa890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfa890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkArray::ClearAndDeallocate8HeapC */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfa8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfa8d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkArray::ClearAndDeallocate48Heap */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfa910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfa910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkArray::ClearAndDeallocate8_00dfa950 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfa950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfa950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::DestructElements52 */
GEN_LIB GEN_FRAME unsigned int F_00dfa990(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfa990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 - 1;
  if (-1 < iVar1) {
    this = ((undefined *)GEN_TOP((iVar1 * 0x34 + param_1)));
    do {
      F_00e1d4f0(this GEN_EDX_ARG);
      this = ((undefined *)GEN_TOP(((int)this - 0x34)));
      iVar1 = iVar1 - 1;
    } while (-1 < iVar1);
  }
  return;
}

/* ref: hkArray::Clear52 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfa9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfa9c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((iVar2 * 0x34 + uVar1)));
    do {
      uVar1 = F_00e1d4f0(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x34)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return uVar1;
}

/* ref: hkArray::PushBack8_00dfa9f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfa9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfa9f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: hkArray::SetSize48_00dfaa40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfaa40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfaa40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < param_1) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0x30);
  }
  uVar2 = param_1 - *((int *)GEN_TOP(((int)this + 4)));
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) * 0x30 + *(int *)this;
  uVar1 = uVar2;
  if (0 < (int)uVar2) {
    do {
      if (iVar3 != 0) {
        uVar2 = F_00da1030(iVar3,0,4);
      }
      iVar3 = iVar3 + 0x30;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar2;
}

/* ref: hkArray::SetSize8_00dfaac0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfaac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfaac0u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,8);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar2;
}

/* ref: hkArray::SetSizeFill4_00dfab00 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dfab00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfab00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,4);
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = *(int *)this;
  iVar4 = param_1 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *((undefined4 *)GEN_TOP((iVar1 + iVar3 * 4 + iVar5 * 4))) = *param_2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return 0;
}

/* ref: hkArray::ClearAndDeallocate8_00dfab60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfab60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfab60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkArray::ClearAndDeallocate16_00dfaba0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfaba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfaba0u, gen_a0, 0u, 0u, 0u);
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

/* ref: hkArray::ClearAndDeallocate8_00dfabe0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfabe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfabe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkArray::ClearAndDeallocate8_00dfac20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfac20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfac20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkArray::ClearAndDeallocate48_00dfac60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfac60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfac60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkArray::ClearAndDeallocate8_00dfaca0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfaca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfaca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkInplaceArray::hkInplaceArray_00dface0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dface0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdface0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(int *)this = (int)this + 0xc;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000020;
  return (uint)this;
}

/* ref: hkArray::ClearAndDeallocateWithAllocator52 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfad00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfad00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((iVar2 * 0x34 + *(int *)this)));
    do {
      F_00e1d4f0(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x34)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x34);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::ConstructElement52 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfad60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfad60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  return (uint)this;
}

/* ref: hkArray::ClearAndDeallocate1_00dfad90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfad90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfad90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkArray::ClearAndDeallocate52 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfadd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfadd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((iVar2 * 0x34 + *(int *)this)));
    do {
      F_00e1d4f0(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x34)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x34);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::ConstructElements52 */
GEN_LIB GEN_FRAME unsigned int F_00dfae30(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfae30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = ((undefined4 *)GEN_TOP((param_1 + 0x14)));
    iVar2 = param_2;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x14))) {
        puVar1[-5] = 0;
        puVar1[-4] = 0;
        puVar1[-3] = 0x80000000;
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0x80000000;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0x80000000;
        puVar1[7] = 0;
      }
      puVar1 = puVar1 + 0xd;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: hkArray::SetSizeWithAllocator52 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dfae90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfae90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * this_00;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,0x34);
  }
  iVar3 = (*((int *)GEN_TOP(((int)this + 4))) - param_2) - 1;
  if (-1 < iVar3) {
    this_00 = ((undefined *)GEN_TOP((iVar3 * 0x34 + param_2 * 0x34 + *(int *)this)));
    do {
      F_00e1d4f0(this_00 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x34)));
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  iVar3 = param_2 - *((int *)GEN_TOP(((int)this + 4)));
  if (0 < iVar3) {
    puVar2 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * 0x34 + *(int *)this + 0x14)));
    do {
      if (puVar2 != ((undefined4 *)GEN_TOP(0x14))) {
        puVar2[-5] = 0;
        puVar2[-4] = 0;
        puVar2[-3] = 0x80000000;
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0x80000000;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0x80000000;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0x80000000;
        puVar2[7] = 0;
      }
      puVar2 = puVar2 + 0xd;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return 0;
}

/* ref: hkArray::ClearAndDeallocate52_00dfaf50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfaf50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfaf50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((iVar2 * 0x34 + *(int *)this)));
    do {
      F_00e1d4f0(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x34)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x34);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfafb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfafb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfafb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = param_1;
  *(uint *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  F_00e1da60(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_FWD,param_1 + 4,0,2);
  param_1 = param_1 & 0xffffff00;
  F_00da3de0(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0x80000000;
  *((bool *)GEN_TOP(((int)this + 0x4c))) = (*(undefined1 *)((char *)&REFG(undefined4, 0x135491c) + 1)) != *((char *)GEN_TOP((uVar1 + 5)));
  return (uint)this;
}

/* ref: FUN_00dfb020 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfb020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfb020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x44))) - 1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((iVar2 * 0x34 + *((int *)GEN_TOP(((int)this + 0x40))))));
    do {
      F_00e1d4f0(this_00 GEN_EDX_FWD);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x34)));
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x48)));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x40))),(uVar1 & 0x3fffffff) * 0x34);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0x80000000;
  F_00da3e20(((undefined *)GEN_TOP(((int)this + 0x30))) GEN_EDX_ARG);
  F_00e1d740(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG);
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x18)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x10))),uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0x80000000;
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xc)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 4))),
                       (uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0x80000000;
  return uVar1;
}

/* ref: hkArray::SetSize52 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dfb0f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfb0f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * this_00;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < param_1) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0x34);
  }
  iVar3 = (*((int *)GEN_TOP(((int)this + 4))) - param_1) - 1;
  if (-1 < iVar3) {
    this_00 = ((undefined *)GEN_TOP((iVar3 * 0x34 + param_1 * 0x34 + *(int *)this)));
    do {
      F_00e1d4f0(this_00 GEN_EDX_ARG);
      this_00 = ((undefined *)GEN_TOP(((int)this_00 - 0x34)));
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  iVar3 = param_1 - *((int *)GEN_TOP(((int)this + 4)));
  if (0 < iVar3) {
    puVar2 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * 0x34 + *(int *)this + 0x14)));
    do {
      if (puVar2 != ((undefined4 *)GEN_TOP(0x14))) {
        puVar2[-5] = 0;
        puVar2[-4] = 0;
        puVar2[-3] = 0x80000000;
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0x80000000;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0x80000000;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0x80000000;
        puVar2[7] = 0;
      }
      puVar2 = puVar2 + 0xd;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return 0;
}

/* ref: FUN_00dfb1c0 */
GEN_LIB GEN_FRAME uint F_00dfb1c0(GEN_P(int * in_esi, unsigned int gen_a0), GEN_P(uint in_edi, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdfb1c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * in_esi = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint in_edi = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_FRAME_DECL(0x5, 11);
  char * pcVar1;
  uint uVar2;
  
  pcVar1 = ((char *)GEN_TOP(F_00d929e0(in_edi GEN_EDX_ARG,&(*(undefined1 *)(gen_frame + 0x0)))));
  if (*pcVar1 == '\0') {
    return in_edi;
  }
  if (in_esi != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_esi + 0x14))))(in_esi GEN_EDX_ARG,param_3);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00dfb200 */
GEN_LIB GEN_FRAME uint F_00dfb200(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfb200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da0ce0(param_1,param_2,&REFG(undefined, 0x113bdcc),((char *)REFP(0x113cdcc)));
  return uVar1;
}

/* ref: hkPackfileWriter::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfb220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdfb220u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)this;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x14))))(REFG(int * PTR32, 0x15e3738) GEN_EDX_FWD,param_3);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0xc))))(this,param_1,param_2,uVar2);
  return uVar2;
}

/* ref: hkPackfileWriter::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfb250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfb250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd970(this + 0x14 GEN_EDX_FWD,param_1,0xffffffff);
  if (-1 < (int)uVar1) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 8) + 0x10 + uVar1 * 0x18))) = 0xfffffffe;
  }
  F_00dbd8b0(this + 0x14 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1,0xfffffffe);
  uVar1 = F_00dbd8b0(this + 0x20 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: hkPackfileWriter::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfb2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfb2b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this + 0x2c GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dfb2d0 */
GEN_LIB GEN_FRAME uint F_00dfb2d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdfb2d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  undefined4 uVar1;
  uint uVar2;
  
  F_00e05630(((undefined1 *)(gen_frame + 0x20)) GEN_EDX_ARG);
  uVar1 = 0;
  if (param_4 == '\0') {
    uVar1 = 2;
  }
  F_00e1da60(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x20)),0,uVar1);
  F_0105aa30(((undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  F_00e1d840(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x10)),param_1,param_2,param_3);
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x10))[0] = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  uVar2 = F_00e1d740(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00dfb330 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfb330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfb330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x210, 0, 4);
  code * pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined * phVar5;
  char * pcVar6;
  
  pcVar6 = ((char *)REFP(0x113ba6c));
  uVar2 = F_00d92610(param_2 GEN_EDX_FWD);
  uVar2 = F_00da0d20(uVar2,pcVar6);
  if (uVar2 != 0) {
    pcVar6 = ((char *)REFP(0x113b968));
    uVar2 = F_00d92610(param_2 GEN_EDX_ARG);
    uVar2 = F_00da0d20(uVar2,pcVar6);
    if (uVar2 == 0) {
      uVar2 = F_00da4190(((undefined *)GEN_TOP(((int)this + 0x48))) GEN_EDX_ARG,*param_1,0);
      if (uVar2 != 0) {
        uVar3 = F_00dbd970(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,uVar2,0xffffffff);
        F_00dbd8b0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1,uVar3);
        F_00dbd8b0(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1,uVar2);
        return 0;
      }
      F_00da3a20(((undefined *)GEN_TOP(((int)this + 0x48))) GEN_EDX_ARG,*param_1,param_1);
    }
    return 1;
  }
  uVar2 = F_00d92610(param_1 GEN_EDX_ARG);
  uVar2 = F_00da4190(((undefined *)GEN_TOP(((int)this + 0x38))) GEN_EDX_ARG,uVar2,0);
  if (uVar2 != 0) {
    uVar3 = F_00d93010(uVar2 GEN_EDX_ARG,0);
    uVar4 = F_00d93010(param_1 GEN_EDX_ARG,0);
    if (uVar4 != uVar3) {
      F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
      pcVar6 = 
      ((char *)REFP(0x114ce80))
      ;
      uVar3 = F_00d92610(param_1 GEN_EDX_ARG);
      phVar5 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x114ce58)))));
      phVar5 = ((undefined *)GEN_TOP(F_00d9fe80(phVar5 GEN_EDX_ARG,uVar3)));
      F_00d9fe80(phVar5 GEN_EDX_ARG,pcVar6);
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                        (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,3,0x2518721c,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114ce38)),0xb8);
      if (uVar3 != 0) {
        pcVar1 = ((code *)GEN_TOP(swi(3)));
        uVar2 = (*pcVar1)();
        return uVar2;
      }
      F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
    }
    uVar3 = F_00dbd970(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,uVar2,0xffffffff);
    F_00dbd8b0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1,uVar3);
    F_00dbd8b0(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1,uVar2);
    return 0;
  }
  uVar2 = F_00d92610(param_1 GEN_EDX_ARG);
  F_00da3a20(((undefined *)GEN_TOP(((int)this + 0x38))) GEN_EDX_ARG,uVar2,param_1);
  return 1;
}

/* ref: hkPackfileWriter::SectionTagToIndex */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfb4e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdfb4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(uint *)&gen_args[0]);
  uVar2 = F_00da3eb0(this + 0x70 GEN_EDX_FWD,(*(uint *)&gen_args[0]),&(*(uint *)&gen_args[0]));
  if (uVar2 == 0) {
    return (*(uint *)&gen_args[0]);
  }
  uVar2 = F_00da1210(uVar1);
  uVar1 = *(uint *)(this + 0x68);
  F_00da3a20(this + 0x70 GEN_EDX_ARG,uVar2,uVar1);
  if (*(uint *)(this + 0x68) == (*(uint *)(this + 0x6c) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this + 100,4);
  }
  *((uint *)GEN_TOP((*(int *)(this + 100) + *(int *)(this + 0x68) * 4))) = uVar2;
  *(int *)(this + 0x68) = *(int *)(this + 0x68) + 1;
  return uVar1;
}

/* ref: hkPackfileWriter::FindSectionFor */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfb560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdfb560u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  uint in_ecx;
  
  uVar1 = F_00dbd970(this + 0x9c GEN_EDX_FWD,param_1,0xffffffff);
  if (uVar1 == 0xffffffff) {
    uVar1 = F_00d92610(param_2 GEN_EDX_ARG);
    uVar1 = F_00da4190(this + 0xa8 GEN_EDX_ARG,uVar1,0xffffffff);
    in_ecx = param_2;
    if (uVar1 == 0xffffffff) {
      while (in_ecx = F_00d92620(in_ecx GEN_EDX_ARG), in_ecx != 0) {
        uVar1 = F_00d92610(in_ecx GEN_EDX_ARG);
        uVar1 = F_00da4190(this + 0xa8 GEN_EDX_ARG,uVar1,0xffffffff);
        if (uVar1 != 0xffffffff) {
          return uVar1;
        }
      }
      uVar1 = F_00dfb4e0(this GEN_EDX_ARG,param_3);
    }
  }
  return uVar1;
}

/* ref: hkPackfileWriter::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfb5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfb5e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dfb4e0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: hkPackfileWriter::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfb5f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfb5f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dfb4e0(this GEN_EDX_FWD,param_2);
  uVar1 = F_00dbd8b0(this + 0x9c GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1,uVar1);
  return uVar1;
}

/* ref: hkPackfileWriter::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfb620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfb620u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00dfb4e0(this GEN_EDX_FWD,param_2);
  uVar2 = F_00d92610(param_1 GEN_EDX_ARG);
  uVar1 = F_00da3a20(this + 0xa8 GEN_EDX_ARG,uVar2,uVar1);
  return uVar1;
}

/* ref: hkPackfileWriter::AddPendingWrite */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00dfb650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xdfb650u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  undefined8 * puVar1;
  uint uVar2;
  
  uVar2 = F_00dfb560(this GEN_EDX_FWD,param_3,param_4,param_5);
  if (*(uint *)(this + 0xc) == (*(uint *)(this + 0x10) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this + 8,0x18);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)(this + 8) + *(int *)(this + 0xc) * 0x18)));
  if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
    *puVar1 = CONCAT44(param_2,param_1);
    puVar1[1] = CONCAT44(param_4,param_3);
    puVar1[2] = CONCAT44(0xffffffff,uVar2);
  }
  *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
  *(uint *)(this + 0x98) = *(int *)(this + 0x98) + (uint)(param_2 == &REFG(undefined, 0x15da330));
  *(uint *)(this + 0x94) = *(int *)(this + 0x94) + (uint)(param_2 != &REFG(undefined, 0x15da330));
  return param_2 == &REFG(undefined, 0x15da330);
}

/* ref: FUN_00dfb710 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfb710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfb710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  LPVOID pvVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x114cee8));
  if (0 < *((int *)GEN_TOP(((int)this + 0x68)))) {
    do {
      uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 100))) + iVar4 * 4)));
      pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      F_00d924b0(*((undefined4 *)GEN_TOP(((int)pvVar2 + 0x2c))),uVar1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *((int *)GEN_TOP(((int)this + 0x68))));
  }
  F_00dbdb20(((undefined *)GEN_TOP(((int)this + 0xc4))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  iVar4 = *((int *)GEN_TOP(((int)this + 0xc0)));
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  if (-1 < iVar4) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0xb8))),iVar4 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0x80000000;
  F_00da3e20(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_ARG);
  F_00dbdb20(((undefined *)GEN_TOP(((int)this + 0x9c))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x88)));
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  if ((uVar3 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x80))),uVar3 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0x80000000;
  F_00da3e20(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG);
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x6c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  if ((uVar3 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 100))),uVar3 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0x80000000;
  F_00dbdb20(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  F_00da3e20(((undefined *)GEN_TOP(((int)this + 0x48))) GEN_EDX_ARG);
  F_00da3e20(((undefined *)GEN_TOP(((int)this + 0x38))) GEN_EDX_ARG);
  F_00dbdb20(((undefined *)GEN_TOP(((int)this + 0x2c))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  F_00dbdb20(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  F_00dbdb20(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  uVar3 = *((uint *)GEN_TOP(((int)this + 0x10)));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (-1 < (int)uVar3) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 8))),
                       (uVar3 & 0x3fffffff) * 0x18);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar3;
}

/* ref: FUN_00dfb8f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfb8f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xdfb8f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[5];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  GEN_FRAME_DECL_TOP(0x254, 12, 4);
  int iVar1;
  undefined * this_00;
  int * piVar2;
  uint uVar3;
  int iVar4;
  undefined * phVar5;
  int iVar6;
  int iVar7;
  char * pcVar8;
  char * pcVar9;
  char * pcVar10;
  
  iVar4 = (*(int *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x24c)) = ((undefined *)GEN_TOP(((int)this + 0x14)));
  piVar2 = ((int *)GEN_TOP(F_00dbd930(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,(*(int *)&gen_args[0]))));
  iVar6 = (*(uint *)&gen_args[1]);
  if (*((int *)GEN_TOP(((int)this + 0x1c))) < (int)piVar2) {
    uVar3 = F_00dfb1c0((*(undefined4 *)&gen_args[2]),(*(uint *)&gen_args[1]),iVar4);
    iVar4 = (*(int *)&gen_args[0]);
    if (uVar3 == 0) {
      F_00da0a80(((undefined1 *)(gen_frame + 0x234)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
      pcVar10 = 
      ((char *)REFP(0x114cfc0))
      ;
      pcVar9 = ((char *)REFP(0x114cf88));
      pcVar8 = ((char *)REFP(0x114cf40));
      uVar3 = F_00d92610(iVar6 GEN_EDX_ARG);
      phVar5 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x234)) GEN_EDX_ARG,((char *)REFP(0x114cf14)))));
      phVar5 = ((undefined *)GEN_TOP(F_00d9fe80(phVar5 GEN_EDX_ARG,uVar3)));
      phVar5 = ((undefined *)GEN_TOP(F_00d9fe80(phVar5 GEN_EDX_ARG,pcVar8)));
      phVar5 = ((undefined *)GEN_TOP(F_00d9fe80(phVar5 GEN_EDX_ARG,pcVar9)));
      F_00d9fe80(phVar5 GEN_EDX_ARG,pcVar10);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xabbaabba,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114ce38)),0x127);
      F_00d9fda0(((undefined1 *)(gen_frame + 0x234)) GEN_EDX_ARG);
      iVar4 = (*(int *)&gen_args[0]);
      F_00dbd8b0((*(undefined * PTR32 *)(gen_frame + 0x24c)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),(*(int *)&gen_args[0]),0xffffffff);
      if (*((uint *)GEN_TOP(((int)this + 0x84))) == (*((uint *)GEN_TOP(((int)this + 0x88))) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0x80))),8);
      }
      piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x80))) + *((int *)GEN_TOP(((int)this + 0x84))) * 8)));
      *piVar2 = iVar4;
      piVar2[1] = iVar6;
      *((int *)GEN_TOP(((int)this + 0x84))) = *((int *)GEN_TOP(((int)this + 0x84))) + 1;
    }
    else {
      (*(uint *)(gen_frame + 0x248)) = uVar3;
      if ((*(int * PTR32 *)&gen_args[3]) != ((int *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[3]) + 0xc))))((*(int * PTR32 *)&gen_args[3]) GEN_EDX_ARG,&(*(int *)&gen_args[0]),&(*(uint *)(gen_frame + 0x248)));
      }
      if ((*(int *)&gen_args[0]) == 0) {
        uVar3 = F_00dbd8b0((*(undefined * PTR32 *)(gen_frame + 0x24c)) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),iVar4,0xffffffff);
        return uVar3;
      }
      uVar3 = F_00dfb330(this GEN_EDX_ARG,(*(int *)&gen_args[0]),(*(uint *)(gen_frame + 0x248)));
      this_00 = (*(undefined * PTR32 *)(gen_frame + 0x24c));
      piVar2 = ((int *)GEN_TOP(0x0));
      if ((uVar3 != 0) &&
         ((iVar4 == (*(int *)&gen_args[0]) ||
          (piVar2 = ((int *)GEN_TOP(F_00dbd930((*(undefined * PTR32 *)(gen_frame + 0x24c)) GEN_EDX_ARG,(*(int *)&gen_args[0])))),
          *((int *)GEN_TOP(((int)this_00 + 8))) < (int)piVar2)))) {
        F_00dbd8b0(this_00 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),iVar4,*((undefined4 *)GEN_TOP(((int)this + 0xc))));
        if ((*(int *)&gen_args[0]) != iVar4) {
          F_00dbd8b0(this_00 GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),(*(int *)&gen_args[0]),*((undefined4 *)GEN_TOP(((int)this + 0xc))));
          F_00dbd8b0(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),(*(int *)&gen_args[0]),iVar4);
        }
        F_00dfb650(this GEN_EDX_ARG,(*(int *)&gen_args[0]),(*(uint *)(gen_frame + 0x248)),iVar4,(*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[4]));
        F_00dfad60(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
        F_00dfb2d0((*(int *)&gen_args[0]),(*(uint *)(gen_frame + 0x248)),((undefined1 *)(gen_frame + 0x200)),*((undefined1 *)GEN_TOP(((int)this + 0xdd))));
        (*(int *)(gen_frame + 0x244)) = 0;
        if (0 < (*(int *)(gen_frame + 0x210))) {
          (*(uint *)&gen_args[1]) = 0;
          iVar4 = (*(int *)(gen_frame + 0x20c));
          do {
            iVar6 = *((int *)GEN_TOP(((*(uint *)&gen_args[1]) + 8 + iVar4)));
            iVar1 = *((int *)GEN_TOP(((*(uint *)&gen_args[1]) + 4 + iVar4)));
            (*(int *)(gen_frame + 0x240)) = iVar6;
            iVar7 = (*(uint *)&gen_args[1]);
            if ((iVar6 != 0) && (iVar1 != 0)) {
              if ((*((int *)GEN_TOP(((*(uint *)&gen_args[1]) + 0xc + iVar4))) != 0) &&
                 (uVar3 = F_00dbd930(((undefined *)GEN_TOP(((int)this + 0x9c))) GEN_EDX_ARG,iVar1),
                 *((int *)GEN_TOP(((int)this + 0xa4))) < (int)uVar3)) {
                uVar3 = F_00dfb4e0(this GEN_EDX_ARG,(*(undefined4 *)&gen_args[4]));
                uVar3 = F_00dbd970(((undefined *)GEN_TOP(((int)this + 0x9c))) GEN_EDX_ARG,(*(int *)&gen_args[0]),uVar3);
                F_00dbd8b0(((undefined *)GEN_TOP(((int)this + 0x9c))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),iVar1,uVar3);
              }
              iVar7 = (*(uint *)&gen_args[1]);
              F_00dfb8f0(this GEN_EDX_ARG,iVar1,(*(int *)(gen_frame + 0x240)),(*(undefined4 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
              iVar4 = (*(int *)(gen_frame + 0x20c));
              if (((*(int *)&gen_args[0]) != iVar1) &&
                 ((*(uint *)&gen_args[1]) = F_00dbd970((*(undefined * PTR32 *)(gen_frame + 0x24c)) GEN_EDX_ARG,iVar1,0xffffffff), iVar4 = (*(int *)(gen_frame + 0x20c)),
                 (*(uint *)&gen_args[1]) != 0xffffffff)) {
                F_00dfc750(((undefined *)GEN_TOP(((int)this + 0xb8))) GEN_EDX_ARG,(*(int *)&gen_args[0]),&(*(uint *)&gen_args[1]));
                iVar4 = (*(int *)(gen_frame + 0x20c));
              }
            }
            iVar6 = (*(int *)(gen_frame + 0x244)) + 1;
            (*(uint *)&gen_args[1]) = iVar7 + 0x10;
            (*(int *)(gen_frame + 0x244)) = iVar6;
          } while (iVar6 < (*(int *)(gen_frame + 0x210)));
        }
        F_00dfb8f0(this GEN_EDX_ARG,(*(uint *)(gen_frame + 0x248)),(uint)&REFG(undefined, 0x15da330),(*(undefined4 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[3]),REFG(undefined * PTR32, 0x13548cc));
        uVar3 = F_00e1d4f0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
        return uVar3;
      }
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_00dfbc00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfbc00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfbc00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;)
  uint uVar1;
  int local_8;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x114cee8));
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0xffffffff;
  uVar1 = (uint)((int)(uintptr_t)this) >> 8;
  local_8 = uVar1 << 8;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0xffffffff;
  F_00da3de0(((undefined *)GEN_TOP(((int)this + 0x38))) GEN_EDX_FWD,local_8);
  local_8 = uVar1 << 8;
  F_00da3de0(((undefined *)GEN_TOP(((int)this + 0x48))) GEN_EDX_ARG,local_8);
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0xffffffff;
  local_8 = uVar1 << 8;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0x80000000;
  F_00da3de0(((undefined *)GEN_TOP(((int)this + 0x70))) GEN_EDX_ARG,local_8);
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0x80000000;
  local_8 = uVar1 << 8;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0xffffffff;
  F_00da3de0(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_ARG,local_8);
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = 0xffffffff;
  *((undefined8 *)GEN_TOP(((int)this + 0xd4))) = *param_1;
  *((undefined8 *)GEN_TOP(((int)this + 0xdc))) = param_1[1];
  F_00dbd8b0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),&REFG(undefined, 0x15da300),0xffffffff);
  F_00dbd8b0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),&REFG(undefined, 0x15da2a0),0xffffffff);
  F_00dbd8b0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),&REFG(undefined, 0x15da330),0xffffffff);
  return (uint)this;
}

/* ref: hkPackfileWriter::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfbd80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdfbd80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  int * piVar1;
  char * pcVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = (*(int * PTR32 *)&gen_args[2]);
  if ((*(int * PTR32 *)&gen_args[2]) == ((int *)GEN_TOP(0x0))) {
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x14))))(REFG(int * PTR32, 0x15e3738) GEN_EDX_FWD)));
  }
  uVar3 = (*(uint *)&gen_args[1]);
  pcVar2 = ((char *)GEN_TOP(F_00d929e0((*(uint *)&gen_args[1]) GEN_EDX_ARG,(int)&(*(uint *)&gen_args[1]) + 3)));
  if (*pcVar2 != '\0') {
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]));
  }
  F_00dfb8f0(this GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),uVar3,(*(int * PTR32 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),REFG(undefined * PTR32, 0x13548c8));
  uVar4 = F_00dbd970(this + 0x14 GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),0xffffffff);
  *(uint *)(this + 0x8c) = uVar4;
  uVar3 = F_00dbd970(this + 0x14 GEN_EDX_ARG,uVar3,0xffffffff);
  *(uint *)(this + 0x90) = uVar3;
  return uVar3;
}

/* ref: FUN_00dfbe10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfbe10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfbe10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this GEN_EDX_FWD,local_8);
  return (uint)this;
}

/* ref: FUN_00dfbe30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfbe30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfbe30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da3a20(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dfbe40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfbe40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfbe40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da4190(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dfbe50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfbe50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfbe50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00da3eb0(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),&(*(undefined4 *)&gen_args[0]));
  if (uVar1 == 0) {
    *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined4 *)&gen_args[0]);
    return 0;
  }
  return 1;
}

/* ref: FUN_00dfbe80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfbe80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfbe80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd970(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dfbe90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfbe90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfbe90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da4190(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dfbea0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfbea0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfbea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: Global::FillElements8_00dfbf60 */
GEN_LIB GEN_FRAME unsigned int F_00dfbf60(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdfbf60u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: hkArray::GetElement8_00dfbf90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfbf90(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfbf90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00dfbfa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfbfa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfbfa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0x18);
  return uVar1;
}

/* ref: FUN_00dfbfc0 */
GEN_LIB GEN_FRAME uint F_00dfbfc0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfbfc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00dfbfd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfbfd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfbfd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00dfc010 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfc010u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00dfc120 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfc120u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dfc140 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfc140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dfc180 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfc180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: Global::PushBack8_00dfc1c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc1c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfc1c0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::FillConstruct24 */
GEN_LIB GEN_FRAME unsigned int F_00dfc200(GEN_P(undefined8 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined8 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdfc200u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;)
  undefined8 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
        puVar1[2] = param_3[2];
      }
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: Global::AppendUninit8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfc270u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dfc2d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfc2d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd930(this GEN_EDX_FWD,param_2);
  *((bool *)GEN_TOP(param_1)) = (int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)));
  return param_1;
}

/* ref: Global::PushBack8DefaultAlloc */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfc330u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dfc390 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfc390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbd930(this GEN_EDX_FWD,param_2);
  *((bool *)GEN_TOP(param_1)) = (int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)));
  return param_1;
}

/* ref: Global::PushBack24 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc3b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined8 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfc3b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;)
  undefined8 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x18);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 0x18)));
  if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: Global::Release24 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfc410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x18);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::Release8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfc460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::Release8B */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfc4a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::AppendUninit8DefaultAlloc */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfc4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfc4e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: Global::PushBack24DefaultAlloc */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfc510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;)
  undefined8 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0x18);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 0x18)));
  if (puVar1 != ((undefined8 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: Global::Release24DefaultAlloc */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfc570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfc570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x18);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::Release8DefaultAlloc */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfc5c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfc5c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::Release8DefaultAllocB */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfc600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfc600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::AllocSlot */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfc640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfc640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x18)));
  if (uVar1 != 0xffffffff) {
    *((undefined4 *)GEN_TOP(((int)this + 0x18))) = *((undefined4 *)GEN_TOP((*(int *)this + 4 + uVar1 * 8)));
    return uVar1;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  if (uVar1 == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return uVar1;
}

/* ref: FUN_00dfc680 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfc680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfc680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x18);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfc6d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfc6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfc6d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfc710 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfc710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfc710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfc750 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfc750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00dbd970(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_1,0xffffffff);
  uVar3 = F_00dfc640(this GEN_EDX_ARG);
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + uVar3 * 8)));
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  uVar2 = F_00dbd8b0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),param_1,uVar3);
  return uVar2;
}

/* ref: FUN_00dfc7a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfc7a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfc7a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00dbdb20(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
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

/* ref: FUN_00dfc800 */
GEN_LIB GEN_FRAME uint F_00dfc800(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdfc800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkPackfileWriter::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc850(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfc850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00dfb710(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00dfc890 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc890(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfc890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = *in_ecx == 6;
  return param_2;
}

/* ref: FUN_00dfc8b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc8b0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfc8b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = *in_ecx == 7;
  return param_2;
}

/* ref: FUN_00dfc8d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc8d0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfc8d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = *in_ecx == 4;
  return param_2;
}

/* ref: FUN_00dfc8f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc8f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfc8f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = *in_ecx == 5;
  return param_2;
}

/* ref: Global::NotEqualPair */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfc920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  if ((*(int *)this == *param_1) && (*((int *)GEN_TOP(((int)this + 4))) == param_1[1])) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00dfc950 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfc950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x10))))(*(int * PTR32 *)this GEN_EDX_FWD);
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00dfc990 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xdfc990u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x18))))
                    (*(int * PTR32 *)this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00dfc9a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xdfc9a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x1c))))
                    (*(int * PTR32 *)this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00dfc9b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc9b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xdfc9b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x20))))
                    (*(int * PTR32 *)this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00dfc9c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfc9c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x24))))(*(int * PTR32 *)this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: FUN_00dfc9e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfc9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfc9e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x38))))(*(int * PTR32 *)this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 4))),param_1)
  ;
  return uVar1;
}

/* ref: FUN_00dfca10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfca10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfca10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *param_1 = *(undefined4 *)this;
  param_1[1] = param_2;
  return (uint)param_1;
}

/* ref: FUN_00dfca60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfca60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfca60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 100))))(*(int * PTR32 *)this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 4))));
  *param_1 = uVar1;
  if (uVar1 != 0) {
    *((short *)GEN_TOP((uVar1 + 6))) = *((short *)GEN_TOP((uVar1 + 6))) + 1;
    *((int *)GEN_TOP((uVar1 + 8))) = *((int *)GEN_TOP((uVar1 + 8))) + 1;
  }
  return (uint)param_1;
}

/* ref: Global::GetDataTypeName */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfca90(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfca90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)(*in_ecx)) {
  case 1: ;
    return 0x1126468;
  case 2: ;
    return 0x114c8bc;
  case 3: ;
    return 0x114c8b4;
  case 4: ;
    return 0x112673c;
  case 5: ;
    return 0x11393bc;
  case 6: ;
    return 0x114c8a8;
  case 7: ;
    return 0x114c8b0;
  case 9: ;
    if (*((int *)GEN_TOP(in_ecx[1])) == 3) {
      uVar1 = F_00e19c70(in_ecx GEN_EDX_FWD);
      switch((unsigned int)(uintptr_t)(uVar1)) {
      case 4: ;
        return 0x114d040;
      case 8: ;
        return 0x114d038;
      case 0xc: ;
        return 0x114d030;
      case 0x10: ;
        return 0x114d028;
      }
    }
  }
  return 0;
}

/* ref: FUN_00dfcb50 */
GEN_LIB GEN_NOFRAME uint F_00dfcb50(GEN_P(undefined4 * in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xdfcb50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;)
  switch((unsigned int)(uintptr_t)(*in_eax)) {
  case 1: ;
    return 0x20;
  case 2: ;
    return 0x10;
  case 3: ;
  case 4: ;
    return 8;
  default: ;
    return 1;
  case 6: ;
    return 0xffffffff;
  }
}

/* ref: Global::IsDataMemberNonDefault */
GEN_LIB GEN_FRAME uint F_00dfcbb0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdfcbb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  bool bVar7;
  float10 extraout_ST0;
  longlong lVar8;
  
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 4))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG)));
  iVar6 = *piVar2;
  if (iVar6 == 8) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 100))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,param_1[1])));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) + 1;
      piVar2[2] = piVar2[2] + 1;
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
    *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) - 1;
    piVar1 = piVar2 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,1);
    }
    return uVar3;
  }
  if (iVar6 != 9) {
    switch((unsigned int)(uintptr_t)(iVar6)) {
    case 2: ;
    case 4: ;
      lVar8 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x54))))(((int *)GEN_TOP(*param_1)),param_1[1]);
      if (lVar8 != 0) {
        return 1;
      }
      break;
    case 3: ;
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x3c))))(((int *)GEN_TOP(*param_1)),param_1[1]);
      bVar7 = GEN_ISNAN(extraout_ST0) || GEN_ISNAN((float10)0);
      if (bVar7 == (bVar7 || extraout_ST0 == (float10)0)) {
        return 1;
      }
      break;
    case 5: ;
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x34))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,param_1[1]);
      return (uint)(uVar3 != 0);
    case 6: ;
    case 7: ;
      puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x5c))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,param_1[1])));
      if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar5 + 6))) = *((short *)GEN_TOP(((int)puVar5 + 6))) + 1;
        puVar5[2] = puVar5[2] + 1;
      }
      if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar5 + 6))) = *((short *)GEN_TOP(((int)puVar5 + 6))) - 1;
        piVar2 = puVar5 + 2;
        *piVar2 = *piVar2 - 1;
        if (*piVar2 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,1);
        }
      }
      return (uint)(puVar5 != ((undefined4 *)GEN_TOP(0x0)));
    }
    return 0;
  }
  if ((*((int *)GEN_TOP(piVar2[1])) == 3) &&
     ((((iVar6 = piVar2[2], iVar6 == 4 || (iVar6 == 8)) || (iVar6 == 0xc)) || (iVar6 == 0x10)))) {
    return 1;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 100))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,param_1[1])));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
  iVar6 = 0;
  if (0 < (int)uVar3) {
    do {
      (*(int * PTR32 *)(gen_frame + 0x0)) = piVar2;
      (*(int *)(gen_frame + 0x4)) = iVar6;
      uVar4 = F_00dfcbb0(&(*(int * PTR32 *)(gen_frame + 0x0)));
      if (uVar4 != 0) {
        *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) - 1;
        piVar1 = piVar2 + 2;
        *piVar1 = *piVar1 - 1;
        if (*piVar1 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,1);
        }
        return 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)uVar3);
  }
  *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) - 1;
  piVar1 = piVar2 + 2;
  *piVar1 = *piVar1 - 1;
  if (*piVar1 == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,1);
  }
  return 0;
}

/* ref: Global::IsDataArrayItemNonDefault */
GEN_LIB GEN_FRAME uint F_00dfcdb0(GEN_P(undefined4 * in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xdfcdb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  bool bVar7;
  float10 extraout_ST0;
  longlong lVar8;
  
  piVar2 = ((int *)GEN_TOP(F_00e1cd10(in_eax GEN_EDX_ARG)));
  iVar6 = *piVar2;
  if (iVar6 == 8) {
    piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*in_eax)) + 0x28))))(((int *)GEN_TOP(*in_eax)) GEN_EDX_ARG,in_eax[1])));
    if (piVar2 != ((int *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) + 1;
      piVar2[2] = piVar2[2] + 1;
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
    *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) - 1;
    piVar1 = piVar2 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,1);
    }
    return uVar3;
  }
  if (iVar6 != 9) {
    switch((unsigned int)(uintptr_t)(iVar6)) {
    case 2: ;
    case 4: ;
      lVar8 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*in_eax)) + 0x30))))(((int *)GEN_TOP(*in_eax)),in_eax[1]);
      if (lVar8 != 0) {
        return 1;
      }
      break;
    case 3: ;
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*in_eax)) + 0x3c))))(((int *)GEN_TOP(*in_eax)),in_eax[1]);
      bVar7 = GEN_ISNAN(extraout_ST0) || GEN_ISNAN((float10)0);
      if (bVar7 == (bVar7 || extraout_ST0 == (float10)0)) {
        return 1;
      }
      break;
    case 5: ;
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*in_eax)) + 0x2c))))(((int *)GEN_TOP(*in_eax)) GEN_EDX_ARG,in_eax[1]);
      return (uint)(uVar3 != 0);
    case 6: ;
    case 7: ;
      puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*in_eax)) + 0x34))))(((int *)GEN_TOP(*in_eax)) GEN_EDX_ARG,in_eax[1])));
      if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar5 + 6))) = *((short *)GEN_TOP(((int)puVar5 + 6))) + 1;
        puVar5[2] = puVar5[2] + 1;
      }
      if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar5 + 6))) = *((short *)GEN_TOP(((int)puVar5 + 6))) - 1;
        piVar2 = puVar5 + 2;
        *piVar2 = *piVar2 - 1;
        if (*piVar2 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar5)))(puVar5 GEN_EDX_ARG,1);
        }
      }
      return (uint)(puVar5 != ((undefined4 *)GEN_TOP(0x0)));
    }
    return 0;
  }
  if ((*((int *)GEN_TOP(piVar2[1])) == 3) &&
     ((((iVar6 = piVar2[2], iVar6 == 4 || (iVar6 == 8)) || (iVar6 == 0xc)) || (iVar6 == 0x10)))) {
    return 1;
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*in_eax)) + 0x28))))(((int *)GEN_TOP(*in_eax)) GEN_EDX_ARG,in_eax[1])));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
  iVar6 = 0;
  if (0 < (int)uVar3) {
    (*(int * PTR32 *)(gen_frame + 0x0)) = piVar2;
    do {
      (*(int *)(gen_frame + 0x4)) = iVar6;
      uVar4 = F_00dfcbb0(&(*(int * PTR32 *)(gen_frame + 0x0)));
      if (uVar4 != 0) {
        *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) - 1;
        piVar1 = piVar2 + 2;
        *piVar1 = *piVar1 - 1;
        if (*piVar1 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,1);
        }
        return 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)uVar3);
  }
  *((short *)GEN_TOP(((int)piVar2 + 6))) = *((short *)GEN_TOP(((int)piVar2 + 6))) - 1;
  piVar1 = piVar2 + 2;
  *piVar1 = *piVar1 - 1;
  if (*piVar1 == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar2)))(piVar2 GEN_EDX_ARG,1);
  }
  return 0;
}

/* ref: FUN_00dfcfa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfcfa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdfcfa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  GEN_FRAME_DECL_TOP(0x60, 0, 4);
  char cVar1;
  char * pcVar2;
  
  F_00e003a0(((byte *)(gen_frame + 0x0)) GEN_EDX_FWD,(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
  F_00dff330(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]));
  F_00dff070(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[1]));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x14))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  pcVar2 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xc))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[3]) + 3)));
  cVar1 = *pcVar2;
  F_00dffe80(((undefined1 *)(gen_frame + 0x14)) GEN_EDX_ARG);
  ((byte *)(gen_frame + 0x0))[4] = 0;
  ((byte *)(gen_frame + 0x0))[5] = 0;
  ((byte *)(gen_frame + 0x0))[6] = 0;
  ((byte *)(gen_frame + 0x0))[7] = 0;
  if (-1 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) & 0x3fffffff);
  }
  return (uint)(cVar1 == '\0');
}

/* ref: Global::PairHashMapHash */
GEN_LIB GEN_FRAME uint F_00dfd030(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return (*param_1 >> 4) * -0x61c8864f & param_2;
}

/* ref: Global::PairHashMapSetEmptyKey */
GEN_LIB GEN_FRAME uint F_00dfd050(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdfd050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  *param_1 = 0xffffffff;
  return (uint)param_1;
}

/* ref: Global::PairHashMapIsValidKey */
GEN_LIB GEN_FRAME byte F_00dfd060(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdfd060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  return *param_1 != -1;
}

/* ref: Global::PairHashMapKeysEqual */
GEN_LIB GEN_FRAME uint F_00dfd070(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00dfd0c0 */
GEN_LIB GEN_FRAME uint F_00dfd0c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd0c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dfd0d0 */
GEN_LIB GEN_FRAME uint F_00dfd0d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd0d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dfd100 */
GEN_LIB GEN_FRAME uint F_00dfd100(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dfd110 */
GEN_LIB GEN_FRAME uint F_00dfd110(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: Global::PairHashMapOwnsStorage */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd1a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd1a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = (*((uint *)GEN_TOP((in_ecx + 4))) & 0x80000000) == 0;
  return param_2;
}

/* ref: Global::IsPowerOfTwo_00dfd1c0 */
GEN_LIB GEN_FRAME uint F_00dfd1c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdfd1c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return (uint)((param_1 - 1 & param_1) == 0);
}

/* ref: Global::PairHashMapGetKey */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfd210u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 uVar1;
  
  uVar1 = *((undefined4 *)GEN_TOP((*(int *)this + 4 + param_2 * 0xc)));
  *param_1 = *((undefined4 *)GEN_TOP((*(int *)this + param_2 * 0xc)));
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: Global::PairHashMapGetValue */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd230(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + 8 + param_2 * 0xc)));
}

/* ref: Global::PairHashMapSetValue */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfd250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP((*(int *)this + 8 + param_1 * 0xc))) = param_2;
  return param_1 * 3;
}

/* ref: Global::PairHashMapGetNext */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dfd270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd270u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Global::PairHashMapIsValidIterator */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd2a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdfd2a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = param_3 <= *((int *)GEN_TOP((in_ecx + 8)));
  return param_2;
}

/* ref: Global::PairHashMapInsert */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xdfd2c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    F_00dfdf20(this GEN_EDX_FWD,param_1,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar3 = (param_2 >> 4) * -0x61c8864f & *((uint *)GEN_TOP(((int)this + 8)));
  iVar4 = uVar3 * 0xc;
  uVar2 = 1;
  if (*((int *)GEN_TOP((iVar1 + iVar4))) != -1) {
    do {
      if ((*((uint *)GEN_TOP((iVar1 + iVar4))) == param_2) && (*((int *)GEN_TOP((iVar1 + 4 + iVar4))) == param_3)) {
        uVar2 = 0;
        goto LAB_00dfd336;
      }
      uVar3 = uVar3 + 1 & *((uint *)GEN_TOP(((int)this + 8)));
      iVar4 = uVar3 * 0xc;
    } while (*((int *)GEN_TOP((iVar4 + iVar1))) != -1);
    uVar2 = 1;
  }
LAB_00dfd336: ;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + uVar2;
  iVar4 = uVar3 * 0xc;
  *((uint *)GEN_TOP((iVar1 + iVar4))) = param_2;
  *((int *)GEN_TOP((iVar1 + 4 + iVar4))) = param_3;
  *((undefined4 *)GEN_TOP((iVar4 + 8 + *(int *)this))) = param_4;
  return uVar2;
}

/* ref: Global::PairHashMapFindKey */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfd370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (0 < (int)uVar1) {
    iVar2 = *(int *)this;
    uVar4 = (param_1 >> 4) * -0x61c8864f & uVar1;
    iVar3 = *((int *)GEN_TOP((iVar2 + uVar4 * 0xc)));
    while (iVar3 != -1) {
      puVar5 = ((uint *)GEN_TOP((iVar2 + uVar4 * 0xc)));
      if ((*puVar5 == param_1) && (puVar5[1] == param_2)) {
        return uVar4;
      }
      uVar4 = uVar4 + 1 & uVar1;
      iVar3 = *((int *)GEN_TOP((iVar2 + uVar4 * 0xc)));
    }
  }
  return uVar1 + 1;
}

/* ref: Global::PairHashMapGetWithDefault */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd3d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdfd3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (0 < (int)uVar1) {
    iVar2 = *(int *)this;
    uVar4 = (param_1 >> 4) * -0x61c8864f & uVar1;
    iVar3 = *((int *)GEN_TOP((iVar2 + uVar4 * 0xc)));
    while (iVar3 != -1) {
      puVar5 = ((uint *)GEN_TOP((iVar2 + uVar4 * 0xc)));
      if ((*puVar5 == param_1) && (puVar5[1] == param_2)) {
        return *((uint *)GEN_TOP((iVar2 + 8 + uVar4 * 0xc)));
      }
      uVar4 = uVar4 + 1 & uVar1;
      iVar3 = *((int *)GEN_TOP((iVar2 + uVar4 * 0xc)));
    }
  }
  return param_3;
}

/* ref: Global::PairHashMapGet */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdfd430u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00dfd370(this GEN_EDX_FWD,param_1,param_2);
  if ((int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    *param_3 = *((undefined4 *)GEN_TOP((*(int *)this + 8 + uVar1 * 0xc)));
    return 0;
  }
  return 1;
}

/* ref: Global::PairHashMapRemoveAt */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dfd470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  *((undefined4 *)GEN_TOP((*(int *)this + param_1 * 0xc))) = 0xffffffff;
  uVar7 = *((uint *)GEN_TOP(((int)this + 8)));
  uVar5 = uVar7 + param_1 & uVar7;
  iVar1 = *((int *)GEN_TOP((*(int *)this + uVar5 * 0xc)));
  while (iVar1 != -1) {
    uVar5 = uVar5 + uVar7 & uVar7;
    iVar1 = *((int *)GEN_TOP((*(int *)this + uVar5 * 0xc)));
  }
  uVar6 = uVar5 + 1 & uVar7;
  uVar5 = param_1 + 1 & uVar7;
  iVar2 = uVar5 * 0xc;
  iVar1 = *((int *)GEN_TOP((*(int *)this + iVar2)));
  uVar4 = param_1;
  while (iVar1 != -1) {
    iVar1 = *(int *)this;
    uVar7 = (*((uint *)GEN_TOP((iVar1 + iVar2))) >> 4) * -0x61c8864f & uVar7;
    param_1 = uVar4;
    if ((((uVar5 < uVar6) || (uVar7 <= uVar4)) &&
        ((uVar4 <= uVar5 || ((uVar7 <= uVar4 && (uVar5 < uVar7)))))) &&
       ((uVar7 <= uVar4 || (uVar6 <= uVar7)))) {
      iVar3 = uVar4 * 0xc;
      *((undefined4 *)GEN_TOP((iVar3 + iVar1))) = *((undefined4 *)GEN_TOP((iVar1 + iVar2)));
      *((undefined4 *)GEN_TOP((iVar3 + 4 + iVar1))) = *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar2)));
      *((undefined4 *)GEN_TOP((iVar3 + 8 + *(int *)this))) = *((undefined4 *)GEN_TOP((*(int *)this + 8 + iVar2)));
      *((undefined4 *)GEN_TOP((iVar2 + *(int *)this))) = 0xffffffff;
      param_1 = uVar5;
    }
    uVar7 = *((uint *)GEN_TOP(((int)this + 8)));
    uVar5 = uVar5 + 1 & uVar7;
    iVar2 = uVar5 * 0xc;
    uVar4 = param_1;
    iVar1 = *((int *)GEN_TOP((iVar2 + *(int *)this)));
  }
  return 0;
}

/* ref: Global::PairHashMapIsOk */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd560u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Global::PairHashMapClear */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfd5c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfd5c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 8))) + 1;
  if (0 < iVar1) {
    in_EAX = 0;
    do {
      *((undefined4 *)GEN_TOP((in_EAX + *(int *)this))) = 0xffffffff;
      in_EAX = in_EAX + 0xc;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  *((uint *)GEN_TOP(((int)this + 4))) = *((uint *)GEN_TOP(((int)this + 4))) & 0x80000000;
  return in_EAX;
}

/* ref: Global::PairHashMapClearAndDeallocate */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd5f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd5f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dfd5c0(this GEN_EDX_FWD);
  if ((*((uint *)GEN_TOP(((int)this + 4))) & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))
                      (param_1 GEN_EDX_ARG,*(undefined4 *)this,(*((int *)GEN_TOP(((int)this + 8))) * 3 + 3) * 4);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xffffffff;
  return uVar1;
}

/* ref: Global::PairHashMapInitExternal */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdfd640u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  *(undefined4 *)this = param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = param_2 | 0x80000000;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 - 1U;
  return param_3 - 1U;
}

/* ref: Global::PairHashMapGetSizeInBytesFor */
GEN_LIB GEN_FRAME uint F_00dfd660(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdfd660u, gen_a0, 0u, 0u, 0u);
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

/* ref: Global::PairHashMapInitWithBuffer */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dfd680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfd680u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::PairHashMapSwap */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd6d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Global::GetElementPtr8_00dfd730 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd730(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: Global::GetElementPtr4_00dfd780 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd780(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: Global::GetElementPtr16_00dfd7d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd7d0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd7d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx;
}

/* ref: Global::ConstructPointerArray */
GEN_LIB GEN_FRAME unsigned int F_00dfd800(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: Global::ConstructZero16Array */
GEN_LIB GEN_FRAME unsigned int F_00dfd850(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = ((undefined4 *)GEN_TOP((param_1 + 8)));
    iVar2 = param_2;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x8))) {
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      puVar1 = puVar1 + 4;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00dfd880 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfd880u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00dfd8a0 */
GEN_LIB GEN_FRAME uint F_00dfd8a0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd8a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00dfd8b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd8b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfd8b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00dfd8d0 */
GEN_LIB GEN_FRAME uint F_00dfd8d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd8d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00dfd900 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfd900u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00dfd930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd930(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  if ((*in_ecx == 7) && (*((int *)GEN_TOP(in_ecx[1])) == 6)) {
    *param_2 = 1;
    return (uint)param_2;
  }
  *param_2 = 0;
  return (uint)param_2;
}

/* ref: Global::FreeThreadBlock4 */
GEN_LIB GEN_FRAME unsigned int F_00dfd960(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdfd960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: Global::RefIdEquals */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfd990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfd990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  
  piVar4 = *(int * PTR32 *)this;
  ((int *)(gen_frame + 0x8))[0] = 0;
  ((int *)(gen_frame + 0x8))[1] = 0;
  if (piVar4 == ((int *)GEN_TOP(0x0))) {
    piVar4 = ((int *)(gen_frame + 0x8));
  }
  else {
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)))));
  }
  piVar1 = ((int *)GEN_TOP(*param_1));
  iVar2 = piVar4[1];
  iVar3 = *piVar4;
  ((int *)(gen_frame + 0x8))[0] = 0;
  ((int *)(gen_frame + 0x8))[1] = 0;
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    piVar4 = ((int *)(gen_frame + 0x8));
  }
  else {
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  }
  if ((iVar3 == *piVar4) && (iVar2 == piVar4[1])) {
    return 1;
  }
  return 0;
}

/* ref: Global::RefIdNotEquals */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00dfda00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfda00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  int * piVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  
  piVar4 = *(int * PTR32 *)this;
  ((int *)(gen_frame + 0x10))[0] = 0;
  ((int *)(gen_frame + 0x10))[1] = 0;
  if (piVar4 == ((int *)GEN_TOP(0x0))) {
    piVar4 = ((int *)(gen_frame + 0x10));
  }
  else {
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x8)))));
  }
  piVar1 = ((int *)GEN_TOP(*param_1));
  iVar2 = piVar4[1];
  iVar3 = *piVar4;
  ((int *)(gen_frame + 0x10))[0] = 0;
  ((int *)(gen_frame + 0x10))[1] = 0;
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    piVar4 = ((int *)(gen_frame + 0x10));
  }
  else {
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  }
  if ((iVar3 == *piVar4) && (iVar2 == piVar4[1])) {
    return 0;
  }
  return 1;
}

/* ref: Global::FindObjectIndex */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfda90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfda90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP(*param_1));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  }
  else {
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)))));
  }
  uVar3 = F_00dfd3d0(this GEN_EDX_ARG,*puVar2,puVar2[1],0xffffffff);
  return uVar3;
}

/* ref: Global::CollectObjectReferences */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfdae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfdae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  undefined4 * puVar4;
  int * piVar5;
  int iVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x14))))(((int *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  (*(uint *)(gen_frame + 0x18)) = uVar3;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x18))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,uVar3);
  do {
    if (uVar3 == 0) {
      return 0;
    }
    piVar5 = ((int *)GEN_TOP(*param_1));
    pcVar2 = *((gen_code32 *)GEN_TOP((*piVar5 + 0x24)));
    (*pcVar2)(piVar5,&(*(int * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x18)));
    puVar4 = ((undefined4 *)GEN_TOP(F_00e1cd10(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG)));
    piVar5 = ((int *)GEN_TOP(F_00e19d40(puVar4 GEN_EDX_ARG)));
    if (*piVar5 == 6) {
      switch((unsigned int)(uintptr_t)(*puVar4)) {
      case 6: ;
        piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x34))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)))));
        (*(int * PTR32 *)(gen_frame + 0x14)) = piVar5;
        if (piVar5 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar5 + 6))) = *((short *)GEN_TOP(((int)piVar5 + 6))) + 1;
          piVar5[2] = piVar5[2] + 1;
        }
        F_00dfdae0(this GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x14)));
        piVar5 = (*(int * PTR32 *)(gen_frame + 0x14));
        break;
      case 7: ;
        piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x34))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)))));
        (*(int * PTR32 *)(gen_frame + 0x10)) = piVar5;
        if (piVar5 != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)piVar5 + 6))) = *((short *)GEN_TOP(((int)piVar5 + 6))) + 1;
          piVar5[2] = piVar5[2] + 1;
        }
        F_00dff330(this GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x10)));
        piVar5 = (*(int * PTR32 *)(gen_frame + 0x10));
        break;
      case 8: ;
      case 9: ;
        iVar6 = *((int *)GEN_TOP(puVar4[1]));
        if ((iVar6 == 7) && (*((int *)GEN_TOP((((int *)GEN_TOP(puVar4[1])))[1])) == 6)) {
          piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)))));
          if (piVar5 != ((int *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)piVar5 + 6))) = *((short *)GEN_TOP(((int)piVar5 + 6))) + 1;
            piVar5[2] = piVar5[2] + 1;
          }
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x14))))(piVar5 GEN_EDX_ARG);
          iVar6 = 0;
          if (0 < (int)uVar3) {
            do {
              puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x5c))))(piVar5 GEN_EDX_ARG,iVar6)));
              (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar4;
              if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
                *((short *)GEN_TOP(((int)puVar4 + 6))) = *((short *)GEN_TOP(((int)puVar4 + 6))) + 1;
                puVar4[2] = puVar4[2] + 1;
              }
              F_00dff330((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
              if ((*(undefined4 * PTR32 *)(gen_frame + 0xc)) != ((undefined4 *)GEN_TOP(0x0))) {
                *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 6))) - 1;
                piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 2;
                *piVar1 = *piVar1 - 1;
                if (*piVar1 == 0) {
                  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0xc)))))((*(undefined4 * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,1);
                }
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)uVar3);
          }
        }
        else {
          if (iVar6 != 6) goto switchD_00dfdb4d_default;
          piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)))));
          if (piVar5 != ((int *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)piVar5 + 6))) = *((short *)GEN_TOP(((int)piVar5 + 6))) + 1;
            piVar5[2] = piVar5[2] + 1;
          }
          uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x14))))(piVar5 GEN_EDX_ARG);
          iVar6 = 0;
          if (0 < (int)uVar3) {
            do {
              puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar5 + 0x5c))))(piVar5 GEN_EDX_ARG,iVar6)));
              (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar4;
              if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
                *((short *)GEN_TOP(((int)puVar4 + 6))) = *((short *)GEN_TOP(((int)puVar4 + 6))) + 1;
                puVar4[2] = puVar4[2] + 1;
              }
              F_00dfdae0((*(undefined * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
              if ((*(undefined4 * PTR32 *)(gen_frame + 0x8)) != ((undefined4 *)GEN_TOP(0x0))) {
                *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 6))) - 1;
                piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 2;
                *piVar1 = *piVar1 - 1;
                if (*piVar1 == 0) {
                  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x8)))))((*(undefined4 * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,1);
                }
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < (int)uVar3);
          }
        }
        *((short *)GEN_TOP(((int)piVar5 + 6))) = *((short *)GEN_TOP(((int)piVar5 + 6))) - 1;
        piVar1 = piVar5 + 2;
        *piVar1 = *piVar1 - 1;
        if (*piVar1 != 0) goto switchD_00dfdb4d_default;
        puVar4 = ((undefined4 *)GEN_TOP(*piVar5));
        goto LAB_00dfdd09;
      default: ;
        goto switchD_00dfdb4d_default;
      }
      if (piVar5 != ((int *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)piVar5 + 6))) = *((short *)GEN_TOP(((int)piVar5 + 6))) - 1;
        piVar1 = piVar5 + 2;
        *piVar1 = *piVar1 - 1;
        if (*piVar1 == 0) {
          puVar4 = ((undefined4 *)GEN_TOP(*piVar5));
LAB_00dfdd09: ;
          (*((code *)GEN_TOP(*puVar4)))(piVar5,1);
        }
      }
    }
switchD_00dfdb4d_default: ;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x1c))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x18)));
    (*(uint *)(gen_frame + 0x18)) = uVar3;
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x18))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,uVar3);
    this = (*(undefined * PTR32 *)(gen_frame + 0x1c));
  } while( true );
}

/* ref: Global::AllocFromThreadAllocator */
GEN_LIB GEN_FRAME uint F_00dfdd50(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdfdd50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: Global::FreeThreadBlock12 */
GEN_LIB GEN_FRAME unsigned int F_00dfdd70(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdfdd70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: Global::InsertDefaultAllocator */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfddc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdfddc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00dfd2c0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3);
  return uVar1;
}

/* ref: Global::AllocFromThreadAllocator2 */
GEN_LIB GEN_FRAME uint F_00dfdde0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdfdde0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: Global::FreeThreadBlock12b */
GEN_LIB GEN_FRAME unsigned int F_00dfde00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdfde00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: Global::Contains */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfde30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdfde30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00dfd370(this GEN_EDX_FWD,param_2,param_3);
  *((bool *)GEN_TOP(param_1)) = (int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)));
  return param_1;
}

/* ref: FUN_00dfdec0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfdec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfdec0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00dfd680(this GEN_EDX_FWD,param_1,param_2);
  return (uint)this;
}

/* ref: Global::Remove_00dfdee0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfdee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfdee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dfd370(this GEN_EDX_FWD,param_1,param_2);
  if ((int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    F_00dfd470(this GEN_EDX_ARG,uVar1);
    return 0;
  }
  return 1;
}

/* ref: Global::Rehash_00dfdf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfdf20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfdf20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int * piVar8;
  
  iVar7 = param_2;
  if (param_2 < 9) {
    iVar7 = 8;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  piVar2 = *(int * PTR32 *)this;
  iVar6 = *((int *)GEN_TOP(((int)this + 8))) + 1;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD,iVar7 * 0xc);
  if (uVar3 != 0) {
    *(uint *)this = uVar3;
    if (0 < iVar7) {
      iVar4 = 0;
      iVar5 = iVar7;
      do {
        *((undefined4 *)GEN_TOP((iVar4 + *(int *)this))) = 0xffffffff;
        iVar4 = iVar4 + 0xc;
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
    }
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((int *)GEN_TOP(((int)this + 8))) = iVar7 - 1;
    piVar8 = piVar2;
    param_2 = iVar6;
    if (0 < iVar6) {
      do {
        if (*piVar8 != -1) {
          F_00dfd2c0(this GEN_EDX_ARG,param_1,*piVar8,piVar8[1],piVar8[2]);
        }
        iVar7 = param_2 - 1;
        piVar8 = piVar8 + 3;
        param_2 = iVar7;
      } while (iVar7 != 0);
    }
    if ((uVar1 & 0x80000000) == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG,piVar2,iVar6 * 0xc);
    }
    return 0;
  }
  return 1;
}

/* ref: Global::PushBackNullPtr */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfdff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfdff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = 0;
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar2 + 1;
  return *(int *)this + iVar2 * 4;
}

/* ref: Global::FillConstruct8 */
GEN_LIB GEN_FRAME unsigned int F_00dfe040(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdfe040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: Global::FillConstruct4 */
GEN_LIB GEN_FRAME unsigned int F_00dfe070(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdfe070u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *param_3;
      }
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: Global::ClearArray16_00dfe0a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfe0a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfe0a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Global::Reserve16_00dfe0e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfe0e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfe0e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::ScalarDeletingDestructor_00dfe130 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfe130(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdfe130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,4);
  }
  return param_1;
}

/* ref: Global::PushBackByte_00dfe160 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfe160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfe160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  undefined1 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,1);
  }
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))))));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dfe1a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfe1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfe1a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00dfdec0(this GEN_EDX_FWD,param_1,param_2);
  return (uint)this;
}

/* ref: Global::PushBackNullPtrDefault */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfe1c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfe1c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = 0;
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar2 + 1;
  return *(int *)this + iVar2 * 4;
}

/* ref: Global::TryInsert */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfe200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xdfe200u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(uint * param_5 = (uint *)(uintptr_t)gen_a5;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    uVar1 = F_00dfdf20(this GEN_EDX_FWD,param_1,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
    *param_5 = uVar1;
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    *param_5 = 0;
  }
  uVar1 = F_00dfd2c0(this GEN_EDX_ARG,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Global::Insert_00dfe260 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dfe260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xdfe260u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00dfdf20(this GEN_EDX_FWD,param_1,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
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

/* ref: Global::Reserve_00dfe2e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfe2e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfe2e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = 8;
  if (8 < param_2 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_2 * 2);
  }
  uVar2 = F_00dfdf20(this GEN_EDX_FWD,param_1,iVar1);
  return uVar2;
}

/* ref: Global::PushBack8_00dfe310 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfe310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfe310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: Global::PushBack4_00dfe360 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfe360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfe360u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_2;
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: Global::Resize16 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dfe3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfe3a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,0x10);
  }
  iVar3 = param_2 - *((int *)GEN_TOP(((int)this + 4)));
  if (0 < iVar3) {
    puVar2 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * 0x10 + *(int *)this + 8)));
    do {
      if (puVar2 != ((undefined4 *)GEN_TOP(0x8))) {
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_2;
  return 0;
}

/* ref: Global::ClearArray16Default */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfe410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfe410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::ClearArray8_00dfe450 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfe450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfe450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::PushIndent */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfe4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfe4a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 * puVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = *((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 4)));
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < (int)uVar7) {
    uVar3 = uVar3 * 2;
    if ((int)uVar3 <= (int)uVar7) {
      uVar3 = uVar7;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,uVar3,1);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  iVar2 = *(int *)this;
  iVar4 = uVar7 - iVar1;
  iVar6 = 0;
  if (0 < iVar4) {
    do {
      *((undefined1 *)GEN_TOP((iVar6 + iVar2 + iVar1))) = *((undefined1 *)GEN_TOP(((int)this + 0x10)));
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  *((uint *)GEN_TOP(((int)this + 4))) = uVar7;
  if (uVar7 == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,1);
  }
  puVar5 = ((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + *(int *)this)));
  *puVar5 = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  return (uint)puVar5;
}

/* ref: Global::PopIndent */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfe520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfe520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  int iVar4;
  
  *((undefined1 *)GEN_TOP(((*((int *)GEN_TOP(((int)this + 4))) - *((int *)GEN_TOP(((int)this + 0xc)))) + *(int *)this))) = 0;
  iVar4 = *((int *)GEN_TOP(((int)this + 4))) - *((int *)GEN_TOP(((int)this + 0xc)));
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < iVar4) {
    iVar3 = uVar2 * 2;
    if ((int)(uVar2 * 2) <= iVar4) {
      iVar3 = iVar4;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar4;
  return uVar2;
}

/* ref: FUN_00dfe570 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfe570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfe570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  if (*((int *)GEN_TOP(((int)this + 0x18))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x18))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,&(*(int * PTR32 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[1]));
    ((int *)(gen_frame + 0x18))[0] = 0;
    ((int *)(gen_frame + 0x18))[1] = 0;
    if ((*(int * PTR32 *)&gen_args[1]) == ((int *)GEN_TOP(0x0))) {
      piVar5 = ((int *)(gen_frame + 0x18));
    }
    else {
      piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
    }
    iVar3 = *piVar5;
    piVar4 = ((int *)GEN_TOP(*piVar1));
    (*(int *)(gen_frame + 0x14)) = piVar5[1];
    ((int *)(gen_frame + 0x18))[0] = 0;
    ((int *)(gen_frame + 0x18))[1] = 0;
    if (piVar4 == ((int *)GEN_TOP(0x0))) {
      piVar5 = ((int *)(gen_frame + 0x18));
    }
    else {
      piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
    }
    if ((iVar3 != *piVar5) || ((*(int *)(gen_frame + 0x14)) != piVar5[1])) {
      piVar1 = ((int *)GEN_TOP(((int)this + 0x1c)));
      if (*((uint *)GEN_TOP(((int)this + 0x20))) == (*((uint *)GEN_TOP(((int)this + 0x24))) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,4);
      }
      puVar2 = ((undefined4 *)GEN_TOP((*piVar1 + *((int *)GEN_TOP(((int)this + 0x20))) * 4)));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar2 = 0;
      }
      piVar1 = ((int *)GEN_TOP((*piVar1 + *((int *)GEN_TOP(((int)this + 0x20))) * 4)));
      *((int *)GEN_TOP(((int)this + 0x20))) = *((int *)GEN_TOP(((int)this + 0x20))) + 1;
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) + 1;
        (*(int * PTR32 *)&gen_args[1])[2] = (*(int * PTR32 *)&gen_args[1])[2] + 1;
      }
      puVar2 = ((undefined4 *)GEN_TOP(*piVar1));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) - 1;
        piVar5 = puVar2 + 2;
        *piVar5 = *piVar5 - 1;
        if (*piVar5 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
        }
      }
      *piVar1 = (int)(*(int * PTR32 *)&gen_args[1]);
      *(*(int * PTR32 *)&gen_args[0]) = (int)(*(int * PTR32 *)&gen_args[1]);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) + 1;
        (*(int * PTR32 *)&gen_args[1])[2] = (*(int * PTR32 *)&gen_args[1])[2] + 1;
        if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) - 1;
          piVar1 = (*(int * PTR32 *)&gen_args[1]) + 2;
          *piVar1 = *piVar1 - 1;
          if (*piVar1 == 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,1);
          }
        }
      }
      return (uint)(*(int * PTR32 *)&gen_args[0]);
    }
    if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) - 1;
      piVar5 = (*(int * PTR32 *)&gen_args[1]) + 2;
      *piVar5 = *piVar5 - 1;
      if (*piVar5 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,1);
      }
    }
  }
  iVar3 = *piVar1;
  *(*(int * PTR32 *)&gen_args[0]) = iVar3;
  if (iVar3 != 0) {
    *((short *)GEN_TOP((iVar3 + 6))) = *((short *)GEN_TOP((iVar3 + 6))) + 1;
    *((int *)GEN_TOP((iVar3 + 8))) = *((int *)GEN_TOP((iVar3 + 8))) + 1;
  }
  return (uint)(*(int * PTR32 *)&gen_args[0]);
}

/* ref: Global::WriteXmlFields */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfe6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(char * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfe6e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  code * pcVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  char * pcVar7;
  int iVar8;
  undefined3 extraout_var = 0;
  int iVar9;
  
  uVar2 = param_2;
  (*(uint *)(gen_frame + 0x10)) = 0;
  F_00dfe4a0(this GEN_EDX_FWD);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x14))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x18))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,uVar4);
  do {
    if (uVar5 == 0) {
      *((undefined1 *)GEN_TOP(((*((int *)GEN_TOP(((int)this + 4))) - *((int *)GEN_TOP(((int)this + 0xc)))) + *(int *)this))) = 0;
      iVar9 = *((int *)GEN_TOP(((int)this + 4))) - *((int *)GEN_TOP(((int)this + 0xc)));
      uVar4 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
      if ((int)uVar4 < iVar9) {
        iVar8 = uVar4 * 2;
        if ((int)(uVar4 * 2) <= iVar9) {
          iVar8 = iVar9;
        }
        bVar3 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar8,1);
        uVar4 = CONCAT31(extraout_var,bVar3);
      }
      *((int *)GEN_TOP(((int)this + 4))) = iVar9;
      return uVar4;
    }
    piVar6 = ((int *)GEN_TOP(*param_1));
    pcVar1 = *((gen_code32 *)GEN_TOP((*piVar6 + 0x24)));
    (*pcVar1)(piVar6,&(*(int * PTR32 *)(gen_frame + 0x0)),uVar4);
    piVar6 = ((int *)GEN_TOP(F_00e1cd10(&(*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG)));
    uVar5 = F_00dfcdb0(&(*(int * PTR32 *)(gen_frame + 0x0)));
    if (uVar5 != 0) {
      iVar9 = *piVar6;
      if ((iVar9 == 8) ||
         ((iVar9 == 9 &&
          ((*((int *)GEN_TOP(piVar6[1])) != 3 ||
           ((((iVar8 = piVar6[2], iVar8 != 4 && (iVar8 != 8)) && (iVar8 != 0xc)) && (iVar8 != 0x10))
           )))))) {
        param_2 = ((char *)REFP(0x114c8ec));
        if (iVar9 == 9) {
          pcVar7 = ((char *)GEN_TOP(F_00e19c70(piVar6 GEN_EDX_ARG)));
        }
        else {
          (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) | 1;
          param_2 = ((char *)REFP(0x114c8dc));
          piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4)))));
          (*(int * PTR32 *)(gen_frame + 0x8)) = piVar6;
          if (piVar6 != ((int *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)piVar6 + 6))) = *((short *)GEN_TOP(((int)piVar6 + 6))) + 1;
            piVar6[2] = piVar6[2] + 1;
          }
          pcVar7 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x14))))(piVar6 GEN_EDX_ARG)));
        }
        (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar7;
        if ((((*(uint *)(gen_frame + 0x10)) & 1) != 0) && ((*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) & 0xfffffffe, (*(int * PTR32 *)(gen_frame + 0x8)) != ((int *)GEN_TOP(0x0)))) {
          *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x8)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x8)) + 6))) - 1;
          piVar6 = (*(int * PTR32 *)(gen_frame + 0x8)) + 2;
          *piVar6 = *piVar6 - 1;
          if (*piVar6 == 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x8)))))((*(int * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,1);
          }
        }
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x20))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,uVar4);
        F_00da00e0(uVar2,((char *)REFP(0x114d050)),*(undefined4 *)this,param_2,uVar5
                          ,(*(char * PTR32 *)(gen_frame + 0xc)));
        F_00dfffc0(this GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),uVar2);
        pcVar7 = param_2;
      }
      else {
        pcVar7 = ((char *)GEN_TOP(F_00dfca90(piVar6 GEN_EDX_ARG)));
        (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar7;
        if ((*piVar6 == 5) &&
           (uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x0)) + 0x2c))))((*(int * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x4))), uVar5 == 0)) {
          uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x20))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,uVar4);
          F_00da00e0(uVar2,((char *)REFP(0x114d080)),*(undefined4 *)this,uVar5);
          goto LAB_00dfe8b2;
        }
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x20))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,uVar4);
        F_00da00e0(uVar2,((char *)REFP(0x114d06c)),*(undefined4 *)this,(*(char * PTR32 *)(gen_frame + 0xc)),uVar5);
        F_00dfffc0(this GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)),uVar2);
        pcVar7 = (*(char * PTR32 *)(gen_frame + 0xc));
      }
      F_00da00e0(uVar2,((char *)REFP(0x114d048)),pcVar7);
    }
LAB_00dfe8b2: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x1c))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,uVar4);
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x18))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,uVar4);
  } while( true );
}

/* ref: Global::WriteXmlObject */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfe930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfe930u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  piVar3 = ((int *)GEN_TOP(*param_1));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  if (piVar3 == ((int *)GEN_TOP(0x0))) {
    puVar1 = &(*(undefined4 *)(gen_frame + 0x8));
  }
  else {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)))));
  }
  uVar2 = F_00dfd3d0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,*puVar1,puVar1[1],0xffffffff);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 8))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG)));
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 8))))(piVar3 GEN_EDX_ARG);
  F_00da00e0(param_2,((char *)REFP(0x114d0a8)),*(undefined4 *)this,uVar2,uVar4)
  ;
  F_00dfe6e0(this GEN_EDX_ARG,param_1,param_2);
  uVar2 = F_00da00e0(param_2,((char *)REFP(0x114d098)),*(undefined4 *)this);
  return uVar2;
}

/* ref: Global::TryInsertDefault */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfe9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xdfe9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00dfe200(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00dfe9f0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dfe9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdfe9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00dfe260(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3);
  return;
}

/* ref: FUN_00dfea10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfea10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfea10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dfe2e0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1);
  return uVar1;
}

/* ref: Global::ArrayPushBack8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfea30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfea30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: Global::ArrayPushBack4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfea80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfea80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = *param_1;
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: Global::ArraySetSize16 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dfeac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfeac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar1 < param_1) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,0x10);
  }
  iVar3 = param_1 - *((int *)GEN_TOP(((int)this + 4)));
  if (0 < iVar3) {
    puVar2 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * 0x10 + *(int *)this + 8)));
    do {
      if (puVar2 != ((undefined4 *)GEN_TOP(0x8))) {
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return 0;
}

/* ref: Global::ArrayClearAndDeallocate16_00dfeb30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfeb30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfeb30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 << 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::ArrayClearAndDeallocate8_00dfeb70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfeb70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfeb70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::IndentString */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfebc0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdfebc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = ((int)0x80000000);
  param_1[3] = param_2;
  *(undefined1 *)(param_1 + 4) = param_3;
  F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_1,1);
  *((undefined1 *)GEN_TOP((param_1[1] + *param_1))) = 0;
  param_1[1] = param_1[1];
  return (uint)param_1;
}

/* ref: Global::AddClassRecursive */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfec10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdfec10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  int * piVar5;
  int iVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 8))))(((int *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  uVar1 = F_00da4190(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,uVar1,0xffffffff);
  if (uVar1 == 0xffffffff) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x10))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG);
    if (uVar1 != 0) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x10))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG);
      (*(uint *)(gen_frame + 0x14)) = uVar1;
      F_00dfec10(this GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x14)));
    }
    (*(uint *)(gen_frame + 0x14)) = *((uint *)GEN_TOP(((int)this + 0x2c)));
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 8))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG);
    F_00da3a20(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,uVar1,(*(uint *)(gen_frame + 0x14)));
    if (*((uint *)GEN_TOP(((int)this + 0x2c))) == (*((uint *)GEN_TOP(((int)this + 0x30))) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0x28))),4);
    }
    puVar3 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x28))) + *((int *)GEN_TOP(((int)this + 0x2c))) * 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
    *((int *)GEN_TOP(((int)this + 0x2c))) = *((int *)GEN_TOP(((int)this + 0x2c))) + 1;
    piVar4 = ((int *)GEN_TOP(*param_1));
    (*(int *)(gen_frame + 0x0)) = 0;
    (*(uint *)(gen_frame + 0x4)) = 0;
    (*(uint *)(gen_frame + 0x8)) = 0x80000000;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG);
    if ((int)((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) < (int)uVar1) {
      uVar2 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
      if ((int)uVar2 <= (int)uVar1) {
        uVar2 = uVar1;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x0)),uVar2,0x10);
    }
    iVar6 = uVar1 - (*(uint *)(gen_frame + 0x4));
    if (0 < iVar6) {
      puVar3 = ((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x4)) * 0x10 + (*(int *)(gen_frame + 0x0)) + 8)));
      do {
        if (puVar3 != ((undefined4 *)GEN_TOP(0x8))) {
          puVar3[-2] = 0;
          puVar3[-1] = 0;
          *puVar3 = 0;
          puVar3[1] = 0;
        }
        puVar3 = puVar3 + 4;
        iVar6 = iVar6 - 1;
      } while (iVar6 != 0);
    }
    (*(uint *)(gen_frame + 0x4)) = uVar1;
    F_00e1ce00(param_1 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)));
    (*(int *)(gen_frame + 0x18)) = 0;
    if (0 < (int)(*(uint *)(gen_frame + 0x4))) {
      (*(uint *)(gen_frame + 0x14)) = 0;
      do {
        piVar4 = ((int *)GEN_TOP(F_00e19d40(*((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x14)) + 8 + (*(int *)(gen_frame + 0x0))))) GEN_EDX_ARG)));
        if (*piVar4 == 6) {
          piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 4))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG)));
          iVar6 = *piVar5;
          uVar1 = F_00e19c80(piVar4 GEN_EDX_ARG);
          uVar1 = ((code *)*((gen_code32 *)GEN_TOP((iVar6 + 0x24))))(piVar5,uVar1);
          (*(uint *)(gen_frame + 0x10)) = uVar1;
          F_00dfec10((*(undefined * PTR32 *)(gen_frame + 0xc)) GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x10)));
        }
        iVar6 = (*(int *)(gen_frame + 0x18)) + 1;
        (*(int *)(gen_frame + 0x18)) = iVar6;
        (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) + 0x10;
      } while (iVar6 < (int)(*(uint *)(gen_frame + 0x4)));
    }
    (*(uint *)(gen_frame + 0x4)) = 0;
    uVar1 = (*(uint *)(gen_frame + 0x8));
    if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) << 4);
    }
  }
  return uVar1;
}

/* ref: Global::WriteClassXml */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfede0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdfede0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  undefined4 * puVar5;
  int iVar6;
  int iVar7;
  
  (*(int * PTR32 *)(gen_frame + 0xc)) = this;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_FWD);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0xc))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 8))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG);
  F_00da00e0(param_2,((char *)REFP(0x114d138)),*(undefined4 *)this,uVar3,uVar2);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x10))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG);
  if (uVar2 != 0) {
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x10))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG)));
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 8))))(piVar4 GEN_EDX_ARG);
    F_00da00e0(param_2,((char *)REFP(0x114d128)),uVar2);
  }
  F_00da00e0(param_2,&REFG(undefined, 0x114d124));
  F_00dfe4a0(this GEN_EDX_ARG);
  piVar4 = ((int *)GEN_TOP(*param_1));
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 0x18))))(piVar4 GEN_EDX_ARG);
  if ((int)((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) < (int)uVar2) {
    uVar3 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
    if ((int)uVar3 <= (int)uVar2) {
      uVar3 = uVar2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x0)),uVar3,0x10);
  }
  iVar7 = uVar2 - (*(uint *)(gen_frame + 0x4));
  if (0 < iVar7) {
    puVar5 = ((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x4)) * 0x10 + (*(int *)(gen_frame + 0x0)) + 8)));
    do {
      if (puVar5 != ((undefined4 *)GEN_TOP(0x8))) {
        puVar5[-2] = 0;
        puVar5[-1] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
      }
      puVar5 = puVar5 + 4;
      iVar7 = iVar7 - 1;
    } while (iVar7 != 0);
  }
  (*(uint *)(gen_frame + 0x4)) = uVar2;
  F_00e1ce00(param_1 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)));
  (*(int *)(gen_frame + 0x10)) = 0;
  if (0 < (int)(*(uint *)(gen_frame + 0x4))) {
    (*(int *)(gen_frame + 0x18)) = 0;
    do {
      puVar5 = ((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + (*(int *)(gen_frame + 0x0)))));
      bVar1 = false;
      piVar4 = ((int *)GEN_TOP(puVar5[2]));
      (*(uint *)(gen_frame + 0x14)) = 0;
      if (*piVar4 == 8) {
        bVar1 = true;
LAB_00dfef4f: ;
        piVar4 = ((int *)GEN_TOP(piVar4[1]));
      }
      else if ((*piVar4 == 9) &&
              ((*((int *)GEN_TOP(piVar4[1])) != 3 ||
               ((((iVar7 = piVar4[2], iVar7 != 4 && (iVar7 != 8)) && (iVar7 != 0xc)) &&
                (iVar7 != 0x10)))))) {
        uVar2 = F_00e19c70(piVar4 GEN_EDX_ARG);
        (*(uint *)(gen_frame + 0x14)) = uVar2;
        goto LAB_00dfef4f;
      }
      iVar7 = *(int *)this;
      uVar2 = F_00dfca90(piVar4 GEN_EDX_ARG);
      F_00da00e0(param_2,((char *)REFP(0x114d104)),iVar7,*puVar5,uVar2);
      if (bVar1) {
        F_00da00e0(param_2,((char *)REFP(0x114d0f4)));
      }
      if ((*(uint *)(gen_frame + 0x14)) != 0) {
        F_00da00e0(param_2,((char *)REFP(0x114d0e8)),(*(uint *)(gen_frame + 0x14)));
      }
      piVar4 = ((int *)GEN_TOP(F_00e19d40(piVar4 GEN_EDX_ARG)));
      if (*piVar4 == 6) {
        uVar2 = F_00e19c80(piVar4 GEN_EDX_ARG);
        F_00da00e0(param_2,((char *)REFP(0x114d0dc)),uVar2);
      }
      F_00da00e0(param_2,&REFG(undefined, 0x114d0d8));
      (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 0x10;
      iVar7 = (*(int *)(gen_frame + 0x10)) + 1;
      (*(int *)(gen_frame + 0x10)) = iVar7;
      this = (*(int * PTR32 *)(gen_frame + 0xc));
    } while (iVar7 < (int)(*(uint *)(gen_frame + 0x4)));
  }
  *((undefined1 *)GEN_TOP(((*((int *)GEN_TOP(((int)this + 4))) - *((int *)GEN_TOP(((int)this + 0xc)))) + *(int *)this))) = 0;
  iVar7 = *((int *)GEN_TOP(((int)this + 4))) - *((int *)GEN_TOP(((int)this + 0xc)));
  if ((int)(*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff) < iVar7) {
    iVar6 = (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff) * 2;
    if (iVar6 <= iVar7) {
      iVar6 = iVar7;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar6,1);
  }
  iVar6 = *(int *)this;
  *((int *)GEN_TOP(((int)this + 4))) = iVar7;
  F_00da00e0(param_2,((char *)REFP(0x114d0cc)),iVar6);
  (*(uint *)(gen_frame + 0x4)) = 0;
  uVar2 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) << 4)
    ;
  }
  return uVar2;
}

/* ref: Global::WriteTagfileXml */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dff070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdff070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  F_00d9fd70(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,(*(int * PTR32 *)&gen_args[1]));
  F_00da00e0(((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114d184)));
  F_00da00e0(((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114d168)),1);
  F_00dfe4a0(this GEN_EDX_ARG);
  iVar6 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 0x40)))) {
    do {
      F_00dfede0(this GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x3c))) + iVar6 * 4,((undefined1 *)(gen_frame + 0x0)));
      iVar6 = iVar6 + 1;
    } while (iVar6 < *((int *)GEN_TOP(((int)this + 0x40))));
  }
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) + 8))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) GEN_EDX_ARG)));
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG)));
  (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar1;
  (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(0x1));
  if (1 < *((int *)GEN_TOP(((int)this + 0x24)))) {
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    do {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x1c)) + 0x28))))((*(int * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[1]),*((int *)GEN_TOP(((int)this + 0x20))) + (int)(*(undefined4 * PTR32 *)&gen_args[0]) * 8)
      ;
      if ((*(int * PTR32 *)&gen_args[1]) == ((int *)GEN_TOP(0x0))) {
        puVar2 = &(*(undefined4 *)(gen_frame + 0x14));
      }
      else {
        puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xc)))));
      }
      piVar1 = (*(int * PTR32 *)&gen_args[1]);
      uVar3 = F_00dfd3d0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,*puVar2,puVar2[1],0xffffffff);
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
      F_00da00e0(((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114d0a8)),*(undefined4 *)this,uVar3,
                        uVar4);
      F_00dfe6e0(this GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[1]),((undefined1 *)(gen_frame + 0x0)));
      F_00da00e0(((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114d098)),*(undefined4 *)this);
      if ((*(int * PTR32 *)&gen_args[1]) != ((int *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) - 1;
        piVar1 = (*(int * PTR32 *)&gen_args[1]) + 2;
        *piVar1 = *piVar1 - 1;
        if (*piVar1 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,1);
        }
      }
      (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + 1)));
    } while ((int)(*(undefined4 * PTR32 *)&gen_args[0]) < *((int *)GEN_TOP(((int)this + 0x24))));
  }
  *((undefined1 *)GEN_TOP(((*(int *)this - *((int *)GEN_TOP(((int)this + 0xc)))) + *((int *)GEN_TOP(((int)this + 4)))))) = 0;
  iVar6 = *((int *)GEN_TOP(((int)this + 4))) - *((int *)GEN_TOP(((int)this + 0xc)));
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < iVar6) {
    iVar5 = uVar3 * 2;
    if (iVar5 <= iVar6) {
      iVar5 = iVar6;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar5,1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar6;
  F_00da00e0(((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x114d158)));
  uVar3 = F_00d9fda0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar3;
}

/* ref: Global::CharArrayClearAndDeallocate */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dff230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdff230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::PointerMap */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dff270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdff270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xffffffff;
  if (param_1 != 0) {
    F_00dfe2e0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1);
  }
  return (uint)this;
}

/* ref: Global::ArrayClearAndDeallocate8b */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dff2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdff2b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::ArrayClearAndDeallocate4WithAllocator */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dff2f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdff2f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Global::AddObjectRecursive */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dff330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdff330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
  code * pcVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  
  piVar4 = ((int *)GEN_TOP(*param_1));
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    pcVar1 = *((gen_code32 *)GEN_TOP((*piVar4 + 4)));
    ((int *)(gen_frame + 0x10))[0] = 0;
    ((int *)(gen_frame + 0x10))[1] = 0;
    puVar2 = ((undefined4 *)GEN_TOP((*pcVar1)(piVar4,((int *)(gen_frame + 0x10)) + 2)));
    uVar3 = F_00dfd3d0(this GEN_EDX_FWD,*puVar2,puVar2[1],0xffffffff);
    if (uVar3 == 0xffffffff) {
      F_00dfe570(this GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x24)),param_1);
      if (*param_1 == 0) {
        if ((*(int * PTR32 *)(gen_frame + 0x24)) != ((int *)GEN_TOP(0x0))) {
          *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x24)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x24)) + 6))) - 1;
          piVar4 = (*(int * PTR32 *)(gen_frame + 0x24)) + 2;
          *piVar4 = *piVar4 - 1;
          if (*piVar4 == 0) {
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x24)))))((*(int * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,1);
            return;
          }
        }
      }
      else {
        uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x24)) + 8))))((*(int * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG);
        ((int *)(gen_frame + 0x10))[4] = uVar3;
        F_00dfec10(this GEN_EDX_ARG,((int *)(gen_frame + 0x10)) + 4);
        ((int *)(gen_frame + 0x10))[4] = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
        pcVar1 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x24)) + 4)));
        ((int *)(gen_frame + 0x10))[0] = 0;
        ((int *)(gen_frame + 0x10))[1] = 0;
        puVar2 = ((undefined4 *)GEN_TOP((*pcVar1)((*(int * PTR32 *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0x8)))));
        ((int *)(gen_frame + 0x10))[2] = *puVar2;
        ((int *)(gen_frame + 0x10))[3] = puVar2[1];
        if (*((uint *)GEN_TOP(((int)this + 0x10))) == (*((uint *)GEN_TOP(((int)this + 0x14))) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0xc))),8);
        }
        puVar2 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 0x10))) * 8)));
        if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
          *puVar2 = ((int *)(gen_frame + 0x10))[2];
          puVar2[1] = ((int *)(gen_frame + 0x10))[3];
        }
        *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
        piVar4 = ((int *)GEN_TOP(*param_1));
        ((int *)(gen_frame + 0x10))[2] = 0;
        ((int *)(gen_frame + 0x10))[3] = 0;
        if (piVar4 == ((int *)GEN_TOP(0x0))) {
          piVar4 = ((int *)(gen_frame + 0x10)) + 2;
        }
        else {
          piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
        }
        F_00dfd2c0(this GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),*piVar4,piVar4[1],((int *)(gen_frame + 0x10))[4]);
        piVar4 = ((int *)GEN_TOP(*param_1));
        ((int *)(gen_frame + 0x10))[0] = 0;
        ((int *)(gen_frame + 0x10))[1] = 0;
        if (piVar4 == ((int *)GEN_TOP(0x0))) {
          piVar4 = ((int *)(gen_frame + 0x10));
        }
        else {
          piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)))));
        }
        ((int *)(gen_frame + 0x10))[2] = *piVar4;
        ((int *)(gen_frame + 0x10))[3] = piVar4[1];
        pcVar1 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x24)) + 4)));
        ((int *)(gen_frame + 0x10))[0] = 0;
        ((int *)(gen_frame + 0x10))[1] = 0;
        piVar4 = ((int *)GEN_TOP((*pcVar1)((*(int * PTR32 *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0x0)))));
        if ((*piVar4 != ((int *)(gen_frame + 0x10))[2]) || (piVar4[1] != ((int *)(gen_frame + 0x10))[3])) {
          pcVar1 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)(gen_frame + 0x24)) + 4)));
          ((int *)(gen_frame + 0x10))[0] = 0;
          ((int *)(gen_frame + 0x10))[1] = 0;
          puVar2 = ((undefined4 *)GEN_TOP((*pcVar1)((*(int * PTR32 *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0x0)))));
          F_00dfd2c0(this GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),*puVar2,puVar2[1],((int *)(gen_frame + 0x10))[4]);
        }
        F_00dfdae0(this GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x24)));
        *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x24)) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)(gen_frame + 0x24)) + 6))) - 1;
        piVar4 = (*(int * PTR32 *)(gen_frame + 0x24)) + 2;
        *piVar4 = *piVar4 - 1;
        if (*piVar4 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)(gen_frame + 0x24)))))((*(int * PTR32 *)(gen_frame + 0x24)) GEN_EDX_ARG,1);
        }
      }
    }
  }
  return;
}

/* ref: Global::AddObject */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dff510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdff510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00dff330(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,param_1);
  return;
}

/* ref: Global::ArrayClearAndDeallocate4_00dff520 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dff520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdff520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  uVar1 = *(undefined4 *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),uVar1,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: Global::WriteFloatXml */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dff560(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdff560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_FRAME_DECL_TOP(0x11c, 4, 4);
  uint uVar1;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x8c)) = ((undefined1 *)(gen_frame + 0x98));
  (*(uint *)(gen_frame + 0x94)) = 0x80000080;
  (*(int *)(gen_frame + 0x90)) = 1;
  ((undefined1 *)(gen_frame + 0x98))[0] = 0;
  if (*((char *)GEN_TOP((param_1 + 0x58))) == '\0') {
    F_00e1ded0(GEN_ARGF(gen_bits2f(param_3)),&(*(undefined1 * PTR32 *)(gen_frame + 0x8c)));
  }
  else {
    F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x8c)),((char *)REFP(0x114d1bc)),param_3);
    if (*((char *)GEN_TOP((param_1 + 0x59))) != '\0') {
      (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
      (*(uint *)(gen_frame + 0x8)) = 0x80000080;
      (*(undefined4 *)(gen_frame + 0x4)) = 1;
      ((undefined1 *)(gen_frame + 0xc))[0] = 0;
      F_00e1ded0(GEN_ARGF(gen_bits2f(param_3)),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
      F_00da4bf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x8c)) GEN_EDX_ARG,((char *)REFP(0x114d1b4)),0xffffffff);
      F_00da4bf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x8c)) GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x0)),0xffffffff);
      F_00da4bf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x8c)) GEN_EDX_ARG,&REFG(undefined, 0x114d1ac),0xffffffff);
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
      }
    }
  }
  F_00da0140(param_2 GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x8c)),(*(int *)(gen_frame + 0x90)) - 1);
  (*(int *)(gen_frame + 0x90)) = 0;
  uVar1 = (*(uint *)(gen_frame + 0x94));
  if (-1 < (int)(*(uint *)(gen_frame + 0x94))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x8c)),(*(uint *)(gen_frame + 0x94)) & 0x3fffffff);
  }
  return uVar1;
}

/* ref: Global::WriteFloatArrayXml */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dff6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdff6d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_TOP(0x124, 12, 4);
  float fVar1;
  uint in_EAX = 0;
  int iVar2;
  
  iVar2 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x118)) = this;
  if (0 < param_3) {
    do {
      if (iVar2 != 0) {
        F_00da00e0(param_1,&REFG(undefined, 0x10919e8));
      }
      fVar1 = *((float *)GEN_TOP((param_2 + iVar2 * 4)));
      (*(float *)(gen_frame + 0x11c)) = fVar1;
      (*(undefined1 * PTR32 *)(gen_frame + 0x8c)) = ((undefined1 *)(gen_frame + 0x98));
      (*(uint *)(gen_frame + 0x94)) = 0x80000080;
      (*(int *)(gen_frame + 0x90)) = 1;
      ((undefined1 *)(gen_frame + 0x98))[0] = 0;
      if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x118)) + 0x58))) == '\0') {
        F_00e1ded0(fVar1,&(*(undefined1 * PTR32 *)(gen_frame + 0x8c)));
      }
      else {
        F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x8c)),((char *)REFP(0x114d1bc)),(undefined4)gen_fl2bits(fVar1));
        if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x118)) + 0x59))) != '\0') {
          (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
          (*(uint *)(gen_frame + 0x8)) = 0x80000080;
          (*(undefined4 *)(gen_frame + 0x4)) = 1;
          ((undefined1 *)(gen_frame + 0xc))[0] = 0;
          F_00e1ded0((*(float *)(gen_frame + 0x11c)),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
          F_00da4bf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x8c)) GEN_EDX_ARG,((char *)REFP(0x114d1b4)),0xffffffff);
          F_00da4bf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x8c)) GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x0)),0xffffffff);
          F_00da4bf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x8c)) GEN_EDX_ARG,&REFG(undefined, 0x114d1ac),0xffffffff);
          (*(undefined4 *)(gen_frame + 0x4)) = 0;
          if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
          }
        }
      }
      F_00da0140(param_1 GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x8c)),(*(int *)(gen_frame + 0x90)) - 1);
      (*(int *)(gen_frame + 0x90)) = 0;
      in_EAX = (*(uint *)(gen_frame + 0x94));
      if (-1 < (int)(*(uint *)(gen_frame + 0x94))) {
        in_EAX = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                           (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x8c)),(*(uint *)(gen_frame + 0x94)) & 0x3fffffff);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  return in_EAX;
}

/* ref: Global::ArrayClearAndDeallocate4b */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dff880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdff880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  uVar1 = *(undefined4 *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),uVar1,uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: Global::WriteArrayElementXml */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dff8c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdff8c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x98, 8, 4);
  int * piVar1;
  code * pcVar2;
  undefined * phVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  int * piVar7;
  undefined4 * puVar8;
  int iVar9;
  float10 extraout_ST0;
  undefined8 uVar10;
  
  puVar8 = (*(undefined4 * PTR32 *)&gen_args[0]);
  piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) + 4))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0]))) GEN_EDX_FWD)));
  switch((unsigned int)(uintptr_t)(*piVar4)) {
  case 2: ;
  case 4: ;
    uVar10 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar8)) + 0x54))))(((int *)GEN_TOP(*puVar8)),puVar8[1]);
    uVar5 = F_00da00e0((*(undefined * PTR32 *)&gen_args[1]),&REFG(undefined, 0x114d20c),(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
    return uVar5;
  case 3: ;
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar8)) + 0x3c))))(((int *)GEN_TOP(*puVar8)),puVar8[1]);
    uVar5 = F_00dff560(this GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[1]),(uint)gen_fl2bits((float)extraout_ST0));
    return uVar5;
  case 5: ;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar8)) + 0x34))))(((int *)GEN_TOP(*puVar8)) GEN_EDX_ARG,puVar8[1]);
    if (uVar5 == 0) {
      uVar5 = F_00da00e0((*(undefined * PTR32 *)&gen_args[1]),((char *)REFP(0x114d1e0)));
      return uVar5;
    }
    F_00da4df0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar5);
    F_00da51f0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1126170),((char *)REFP(0x114d1f8)),1);
    F_00da51f0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1126164),&REFG(undefined, 0x114d1f0),1);
    F_00da51f0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x112615c),&REFG(undefined, 0x114d1e8),1);
    F_00da0140((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x4)) - 1);
    uVar5 = F_00d877b0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return uVar5;
  case 6: ;
    puVar8 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar8)) + 0x5c))))(((int *)GEN_TOP(*puVar8)) GEN_EDX_ARG,puVar8[1])));
    phVar3 = (*(undefined * PTR32 *)&gen_args[1]);
    if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar8 + 6))) = *((short *)GEN_TOP(((int)puVar8 + 6))) + 1;
      puVar8[2] = puVar8[2] + 1;
    }
    (*(undefined4 * PTR32 *)&gen_args[0]) = puVar8;
    F_00dfe6e0(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[0]),(*(undefined * PTR32 *)&gen_args[1]));
    if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar8 + 6))) = *((short *)GEN_TOP(((int)puVar8 + 6))) - 1;
      piVar4 = puVar8 + 2;
      *piVar4 = *piVar4 - 1;
      if (*piVar4 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar8)))(puVar8 GEN_EDX_ARG,1);
      }
    }
    uVar5 = F_00da00e0(phVar3,(*(undefined * PTR32 (*)[1])REFP(0x114d200)),*(undefined4 *)this);
    return uVar5;
  case 7: ;
    puVar8 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar8)) + 0x5c))))(((int *)GEN_TOP(*puVar8)) GEN_EDX_ARG,puVar8[1])));
    if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar8 + 6))) = *((short *)GEN_TOP(((int)puVar8 + 6))) + 1;
      puVar8[2] = puVar8[2] + 1;
    }
    (*(undefined4 * PTR32 *)&gen_args[0]) = puVar8;
    uVar5 = F_00dfda90(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[0]));
    piVar4 = ((int *)GEN_TOP(F_00da00e0((*(undefined * PTR32 *)&gen_args[1]),((char *)REFP(0x114d204)),uVar5)));
    if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
      piVar4 = ((int *)GEN_TOP(0xffffffff));
      *((short *)GEN_TOP(((int)puVar8 + 6))) = *((short *)GEN_TOP(((int)puVar8 + 6))) - 1;
      piVar7 = puVar8 + 2;
      *piVar7 = *piVar7 - 1;
      if (*piVar7 == 0) {
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar8)))(puVar8 GEN_EDX_ARG,1);
        return uVar5;
      }
    }
    break;
  case 9: ;
    if (((*piVar4 == 9) && (*((int *)GEN_TOP(piVar4[1])) == 3)) &&
       ((iVar9 = piVar4[2], iVar9 == 4 || (((iVar9 == 8 || (iVar9 == 0xc)) || (iVar9 == 0x10)))))) {
      uVar5 = F_00e19c70(piVar4 GEN_EDX_ARG);
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar8)) + 0x2c))))(((int *)GEN_TOP(*puVar8)) GEN_EDX_ARG,puVar8[1]);
      uVar5 = F_00dff6d0(this GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[1]),uVar6,uVar5);
      return uVar5;
    }
  case 8: ;
    if (*((int *)GEN_TOP(piVar4[1])) == 6) {
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar8)) + 100))))(((int *)GEN_TOP(*puVar8)) GEN_EDX_ARG,puVar8[1])));
      if (piVar7 != ((int *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)piVar7 + 6))) = *((short *)GEN_TOP(((int)piVar7 + 6))) + 1;
        piVar7[2] = piVar7[2] + 1;
      }
      F_00dfe4a0(this GEN_EDX_ARG);
      pcVar2 = *((gen_code32 *)GEN_TOP((*piVar7 + 0x14)));
      (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(0x0));
      uVar5 = (*pcVar2)(piVar7);
      if (0 < (int)uVar5) {
        do {
          F_00da00e0((*(undefined * PTR32 *)&gen_args[1]),((char *)REFP(0x114d1d4)),*(undefined4 *)this);
          puVar8 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar7 + 0x5c))))(piVar7 GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]))));
          (*(undefined4 * PTR32 *)(gen_frame + 0x8c)) = puVar8;
          if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)puVar8 + 6))) = *((short *)GEN_TOP(((int)puVar8 + 6))) + 1;
            puVar8[2] = puVar8[2] + 1;
          }
          F_00dfe6e0(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x8c)),(*(undefined * PTR32 *)&gen_args[1]));
          if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)puVar8 + 6))) = *((short *)GEN_TOP(((int)puVar8 + 6))) - 1;
            piVar4 = puVar8 + 2;
            *piVar4 = *piVar4 - 1;
            if (*piVar4 == 0) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar8)))(puVar8 GEN_EDX_ARG,1);
            }
          }
          F_00da00e0((*(undefined * PTR32 *)&gen_args[1]),((char *)REFP(0x114d1c4)),*(undefined4 *)this);
          pcVar2 = *((gen_code32 *)GEN_TOP((*piVar7 + 0x14)));
          iVar9 = (int)(*(undefined4 * PTR32 *)&gen_args[0]) + 1;
          (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(iVar9));
          uVar5 = (*pcVar2)(piVar7);
        } while (iVar9 < (int)uVar5);
      }
      F_00dfe520(this GEN_EDX_ARG);
      F_00da00e0((*(undefined * PTR32 *)&gen_args[1]),(*(undefined * PTR32 (*)[1])REFP(0x114d200)),*(undefined4 *)this);
      piVar4 = ((int *)GEN_TOP(0xffffffff));
      *((short *)GEN_TOP(((int)piVar7 + 6))) = *((short *)GEN_TOP(((int)piVar7 + 6))) - 1;
      piVar1 = piVar7 + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar7)))(piVar7 GEN_EDX_ARG,1);
        return uVar5;
      }
    }
    else {
      F_00dfe4a0(this GEN_EDX_ARG);
      puVar8 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar8)) + 100))))(((int *)GEN_TOP(*puVar8)) GEN_EDX_ARG,puVar8[1])));
      phVar3 = (*(undefined * PTR32 *)&gen_args[1]);
      (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = puVar8;
      if (puVar8 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar8 + 6))) = *((short *)GEN_TOP(((int)puVar8 + 6))) + 1;
        puVar8[2] = puVar8[2] + 1;
      }
      F_00dffd50(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x90)),(*(undefined * PTR32 *)&gen_args[1]));
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x90)) != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x90)) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)(gen_frame + 0x90)) + 6))) - 1;
        piVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x90)) + 2;
        *piVar4 = *piVar4 - 1;
        if (*piVar4 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x90)))))((*(undefined4 * PTR32 *)(gen_frame + 0x90)) GEN_EDX_ARG,1);
        }
      }
      F_00dfe520(this GEN_EDX_ARG);
      piVar4 = ((int *)GEN_TOP(F_00da00e0(phVar3,(*(undefined * PTR32 (*)[1])REFP(0x114d200)),*(undefined4 *)this)));
    }
  }
  return (uint)piVar4;
}

/* ref: Global::ObjectTracker */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dffcb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdffcb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  *((uint *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0x80000000;
  param_1 = param_1 & 0xffffff00;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0x80000000;
  F_00da3de0(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_FWD,param_1);
  if (*((uint *)GEN_TOP(((int)this + 0x10))) == (*((uint *)GEN_TOP(((int)this + 0x14))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)this + 0xc))),8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + *((int *)GEN_TOP(((int)this + 0x10))) * 8)));
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  F_00dfd2c0(this GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac),0,0,0);
  return (uint)this;
}

/* ref: Global::WriteArrayXml */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dffd50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdffd50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x28, 8, 4);
  undefined4 * puVar1;
  int * in_eax;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char * pcVar5;
  
  puVar1 = param_1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = this;
  in_eax = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 4))))(((int *)GEN_TOP(*param_1)) GEN_EDX_FWD)));
  (*(int * PTR32 *)(gen_frame + 0x14)) = in_eax;
  uVar2 = F_00dfcb50(in_eax);
  (*(uint *)(gen_frame + 0x18)) = uVar2;
  (*(uint *)(gen_frame + 0x20)) = 1;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x14))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x10)) = uVar2;
  uVar3 = F_00dfca90(in_eax GEN_EDX_ARG);
  iVar4 = *in_eax;
  if (((iVar4 == 4) || (iVar4 == 3)) || (param_1 = ((undefined4 *)GEN_TOP(uVar3)), iVar4 == 2)) {
    param_1 = ((undefined4 *)GEN_TOP(0x0));
  }
  iVar4 = 0;
  if (0 < (int)uVar2) {
    do {
      uVar2 = (*(uint *)(gen_frame + 0x20)) - 1;
      (*(uint *)(gen_frame + 0x20)) = uVar2;
      if (uVar2 == 0) {
        F_00da00e0(param_2,(*(undefined * PTR32 (*)[1])REFP(0x114d200)),*(*(undefined4 * PTR32 *)(gen_frame + 0x1c)));
        (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x18));
      }
      if (param_1 == ((undefined4 *)GEN_TOP(0x0))) {
        (*(undefined4 *)(gen_frame + 0x0)) = *puVar1;
        (*(int *)(gen_frame + 0x4)) = iVar4;
        F_00dff8c0((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),param_2);
        pcVar5 = ((char *)REFP(0x10919e8));
LAB_00dffe57: ;
        uVar3 = F_00da00e0(param_2,pcVar5);
      }
      else {
        if ((*(*(int * PTR32 *)(gen_frame + 0x14)) == 5) &&
           (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar1)) + 0x34))))(((int *)GEN_TOP(*puVar1)) GEN_EDX_ARG,iVar4), uVar2 == 0)) {
          pcVar5 = ((char *)REFP(0x114d1e0));
          goto LAB_00dffe57;
        }
        F_00da00e0(param_2,&REFG(undefined, 0x114d214),param_1);
        (*(undefined4 *)(gen_frame + 0x8)) = *puVar1;
        (*(int *)(gen_frame + 0xc)) = iVar4;
        F_00dff8c0((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),param_2);
        uVar3 = F_00da00e0(param_2,((char *)REFP(0x114d048)),param_1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(*(uint *)(gen_frame + 0x10)));
  }
  return uVar3;
}

/* ref: Global::~ObjectTracker */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dffe80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdffe80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 * puVar6;
  uint uVar7;
  
  F_00da3e20(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_FWD);
  iVar3 = *((int *)GEN_TOP(((int)this + 0x30)));
  uVar4 = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  if (-1 < iVar3) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),uVar4,iVar3 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0x80000000;
  iVar3 = *((int *)GEN_TOP(((int)this + 0x20)));
  iVar5 = *((int *)GEN_TOP(((int)this + 0x1c)));
  while (iVar3 = iVar3 - 1, -1 < iVar3) {
    puVar6 = *((undefined4 * PTR32 *)GEN_TOP((iVar5 + iVar3 * 4)));
    if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
      sVar2 = *((short *)GEN_TOP(((int)puVar6 + 6)));
      *((short *)GEN_TOP(((int)puVar6 + 6))) = sVar2 - 1;
      piVar1 = puVar6 + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar6)))(puVar6 GEN_EDX_ARG,1);
      }
    }
  }
  uVar7 = *((uint *)GEN_TOP(((int)this + 0x24)));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  if ((uVar7 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x1c))),uVar7 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if ((*((uint *)GEN_TOP(((int)this + 0x14))) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0xc))),
               *((uint *)GEN_TOP(((int)this + 0x14))) * 8);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0x80000000;
  uVar7 = F_00dfd5f0(this GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516ac));
  return uVar7;
}

/* ref: Global::~XmlTagfileWriter */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dfff70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdfff70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00dffe80(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::WriteMemberXml */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dfffc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfffc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x94, 12, 4);
  int * piVar1;
  code * pcVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  undefined4 * puVar7;
  int iVar8;
  undefined * phVar9;
  float10 extraout_ST0;
  undefined8 uVar10;
  
  puVar7 = (*(undefined4 * PTR32 *)&gen_args[0]);
  piVar3 = ((int *)GEN_TOP(F_00e1cd10((*(undefined4 * PTR32 *)&gen_args[0]) GEN_EDX_FWD)));
  switch((unsigned int)(uintptr_t)(*piVar3)) {
  case 2: ;
  case 4: ;
    uVar10 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar7)) + 0x30))))(((int *)GEN_TOP(*puVar7)),puVar7[1]);
    uVar4 = F_00da00e0((*(undefined * PTR32 *)&gen_args[1]),&REFG(undefined, 0x114d20c),(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
    return uVar4;
  case 3: ;
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar7)) + 0x3c))))(((int *)GEN_TOP(*puVar7)),puVar7[1]);
    uVar4 = F_00dff560(this GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[1]),(uint)gen_fl2bits((float)extraout_ST0));
    return uVar4;
  case 5: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar7)) + 0x2c))))(((int *)GEN_TOP(*puVar7)) GEN_EDX_ARG,puVar7[1]);
    if (uVar4 == 0) {
      uVar4 = F_00da00e0((*(undefined * PTR32 *)&gen_args[1]),((char *)REFP(0x114d1e0)));
      return uVar4;
    }
    F_00da4df0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar4);
    F_00da51f0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1126170),((char *)REFP(0x114d1f8)),1);
    F_00da51f0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1126164),&REFG(undefined, 0x114d1f0),1);
    F_00da51f0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x112615c),&REFG(undefined, 0x114d1e8),1);
    F_00da0140((*(undefined * PTR32 *)&gen_args[1]) GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x4)) - 1);
    uVar4 = F_00d877b0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return uVar4;
  case 6: ;
    puVar7 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar7)) + 0x34))))(((int *)GEN_TOP(*puVar7)) GEN_EDX_ARG,puVar7[1])));
    phVar9 = (*(undefined * PTR32 *)&gen_args[1]);
    if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar7 + 6))) = *((short *)GEN_TOP(((int)puVar7 + 6))) + 1;
      puVar7[2] = puVar7[2] + 1;
    }
    (*(undefined4 * PTR32 *)&gen_args[0]) = puVar7;
    F_00dfe6e0(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[0]),(*(undefined * PTR32 *)&gen_args[1]));
    if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar7 + 6))) = *((short *)GEN_TOP(((int)puVar7 + 6))) - 1;
      piVar3 = puVar7 + 2;
      *piVar3 = *piVar3 - 1;
      if (*piVar3 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar7)))(puVar7 GEN_EDX_ARG,1);
      }
    }
    goto LAB_00e0035e;
  case 7: ;
    puVar7 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar7)) + 0x34))))(((int *)GEN_TOP(*puVar7)) GEN_EDX_ARG,puVar7[1])));
    if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar7 + 6))) = *((short *)GEN_TOP(((int)puVar7 + 6))) + 1;
      puVar7[2] = puVar7[2] + 1;
    }
    (*(undefined4 * PTR32 *)&gen_args[0]) = puVar7;
    uVar4 = F_00dfda90(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[0]));
    piVar3 = ((int *)GEN_TOP(F_00da00e0((*(undefined * PTR32 *)&gen_args[1]),((char *)REFP(0x114d204)),uVar4)));
    if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
      piVar3 = ((int *)GEN_TOP(0xffffffff));
      *((short *)GEN_TOP(((int)puVar7 + 6))) = *((short *)GEN_TOP(((int)puVar7 + 6))) - 1;
      piVar6 = puVar7 + 2;
      *piVar6 = *piVar6 - 1;
      if (*piVar6 == 0) {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar7)))(puVar7 GEN_EDX_ARG,1);
        return uVar4;
      }
    }
    break;
  case 9: ;
    if (((*piVar3 == 9) && (*((int *)GEN_TOP(piVar3[1])) == 3)) &&
       ((iVar8 = piVar3[2], iVar8 == 4 || (((iVar8 == 8 || (iVar8 == 0xc)) || (iVar8 == 0x10)))))) {
      uVar4 = F_00e19c70(piVar3 GEN_EDX_ARG);
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar7)) + 0x38))))(((int *)GEN_TOP(*puVar7)) GEN_EDX_ARG,puVar7[1],uVar4);
      uVar4 = F_00dff6d0(this GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[1]),uVar5,uVar4);
      return uVar4;
    }
  case 8: ;
    if (*((int *)GEN_TOP(piVar3[1])) == 6) {
      piVar6 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar7)) + 0x28))))(((int *)GEN_TOP(*puVar7)) GEN_EDX_ARG,puVar7[1])));
      if (piVar6 != ((int *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)piVar6 + 6))) = *((short *)GEN_TOP(((int)piVar6 + 6))) + 1;
        piVar6[2] = piVar6[2] + 1;
      }
      F_00dfe4a0(this GEN_EDX_ARG);
      pcVar2 = *((gen_code32 *)GEN_TOP((*piVar6 + 0x14)));
      (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(0x0));
      uVar4 = (*pcVar2)(piVar6);
      if (0 < (int)uVar4) {
        do {
          F_00da00e0((*(undefined * PTR32 *)&gen_args[1]),((char *)REFP(0x114d1d4)),*(undefined4 *)this);
          puVar7 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar6 + 0x5c))))(piVar6 GEN_EDX_ARG,(*(undefined4 * PTR32 *)&gen_args[0]))));
          (*(undefined4 * PTR32 *)(gen_frame + 0x8c)) = puVar7;
          if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)puVar7 + 6))) = *((short *)GEN_TOP(((int)puVar7 + 6))) + 1;
            puVar7[2] = puVar7[2] + 1;
          }
          F_00dfe6e0(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)(gen_frame + 0x8c)),(*(undefined * PTR32 *)&gen_args[1]));
          if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
            *((short *)GEN_TOP(((int)puVar7 + 6))) = *((short *)GEN_TOP(((int)puVar7 + 6))) - 1;
            piVar3 = puVar7 + 2;
            *piVar3 = *piVar3 - 1;
            if (*piVar3 == 0) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar7)))(puVar7 GEN_EDX_ARG,1);
            }
          }
          F_00da00e0((*(undefined * PTR32 *)&gen_args[1]),((char *)REFP(0x114d1c4)),*(undefined4 *)this);
          pcVar2 = *((gen_code32 *)GEN_TOP((*piVar6 + 0x14)));
          iVar8 = (int)(*(undefined4 * PTR32 *)&gen_args[0]) + 1;
          (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(iVar8));
          uVar4 = (*pcVar2)(piVar6);
        } while (iVar8 < (int)uVar4);
      }
      F_00dfe520(this GEN_EDX_ARG);
      F_00da00e0((*(undefined * PTR32 *)&gen_args[1]),(*(undefined * PTR32 (*)[1])REFP(0x114d200)),*(undefined4 *)this);
      piVar3 = ((int *)GEN_TOP(0xffffffff));
      *((short *)GEN_TOP(((int)piVar6 + 6))) = *((short *)GEN_TOP(((int)piVar6 + 6))) - 1;
      piVar1 = piVar6 + 2;
      *piVar1 = *piVar1 - 1;
      if (*piVar1 == 0) {
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar6)))(piVar6 GEN_EDX_ARG,1);
        return uVar4;
      }
    }
    else {
      F_00dfe4a0(this GEN_EDX_ARG);
      puVar7 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*puVar7)) + 0x28))))(((int *)GEN_TOP(*puVar7)) GEN_EDX_ARG,puVar7[1])));
      phVar9 = (*(undefined * PTR32 *)&gen_args[1]);
      if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar7 + 6))) = *((short *)GEN_TOP(((int)puVar7 + 6))) + 1;
        puVar7[2] = puVar7[2] + 1;
      }
      (*(undefined4 * PTR32 *)&gen_args[0]) = puVar7;
      F_00dffd50(this GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[0]),(*(undefined * PTR32 *)&gen_args[1]));
      if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) {
        *((short *)GEN_TOP(((int)puVar7 + 6))) = *((short *)GEN_TOP(((int)puVar7 + 6))) - 1;
        piVar3 = puVar7 + 2;
        *piVar3 = *piVar3 - 1;
        if (*piVar3 == 0) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar7)))(puVar7 GEN_EDX_ARG,1);
        }
      }
      F_00dfe520(this GEN_EDX_ARG);
LAB_00e0035e: ;
      piVar3 = ((int *)GEN_TOP(F_00da00e0(phVar9,(*(undefined * PTR32 (*)[1])REFP(0x114d200)),*(undefined4 *)this)));
    }
  }
  return (uint)piVar3;
}

/* ref: Global::XmlTagfileWriter */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e003a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe003a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 2;
  *((undefined1 *)GEN_TOP(((int)this + 0x10))) = 0x20;
  F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,1);
  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + *(int *)this))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  F_00dffcb0(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,param_1);
  *((undefined1 *)GEN_TOP(((int)this + 0x58))) = param_2[1];
  *((undefined1 *)GEN_TOP(((int)this + 0x59))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e00410 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00410(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe00410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = *in_ecx == 1;
  return param_2;
}

/* ref: FUN_00e00450 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xe00450u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x30))))
                    (*(int * PTR32 *)this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00e00460 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe00460u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0xc))))(*(int * PTR32 *)this GEN_EDX_FWD,param_1,param_2);
  return param_1;
}

/* ref: Global::HashPointerKey */
GEN_LIB GEN_FRAME uint F_00e00490(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe00490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return (*param_1 >> 4) * -0x61c8864f & param_2;
}

/* ref: Global::SetEmptyKey_00e004b0 */
GEN_LIB GEN_FRAME uint F_00e004b0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe004b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  *param_1 = 0xffffffff;
  return (uint)param_1;
}

/* ref: Global::IsValidKey */
GEN_LIB GEN_FRAME byte F_00e004c0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe004c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  return *param_1 != -1;
}

/* ref: Global::KeysEqual64 */
GEN_LIB GEN_FRAME uint F_00e004d0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe004d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

/* ref: Global::WriteZigZagVarInt64 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe00500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (((*(uint *)&gen_args[0]) == 0) && ((*(uint *)&gen_args[1]) == ((int)0x80000000))) {
    F_00da6940(this GEN_EDX_FWD,0x81);
    uVar2 = 0;
    uVar3 = 0x2000000;
  }
  else if (((int)(*(uint *)&gen_args[1]) < 1) && ((int)(*(uint *)&gen_args[1]) < 0)) {
    uVar3 = ((*(uint *)&gen_args[1]) + ((*(uint *)&gen_args[0]) != 0)) * -2 | -(*(uint *)&gen_args[0]) >> 0x1f;
    uVar2 = (*(uint *)&gen_args[0]) * -2 | 1;
  }
  else {
    uVar3 = (*(uint *)&gen_args[1]) << 1 | (*(uint *)&gen_args[0]) >> 0x1f;
    uVar2 = (*(uint *)&gen_args[0]) * 2;
  }
  bVar1 = (byte)uVar2;
  uVar2 = uVar2 >> 7 | uVar3 << 0x19;
  uVar3 = uVar3 >> 7;
  (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),bVar1) & 0xffffff7f;
  if (uVar2 != 0 || uVar3 != 0) {
    do {
      F_00da6940(this GEN_EDX_ARG,(uint)(bVar1 & 0x7f | 0x80));
      bVar1 = (byte)uVar2;
      uVar2 = uVar2 >> 7 | uVar3 << 0x19;
      uVar3 = uVar3 >> 7;
    } while (uVar2 != 0 || uVar3 != 0);
    (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),bVar1) & 0xffffff7f;
  }
  uVar2 = F_00da6940(this GEN_EDX_ARG,(*(uint *)&gen_args[1]));
  return uVar2;
}

/* ref: Global::WriteFloat32 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e005a0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xe005a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da6cd0(param_1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2));
  return uVar1;
}

/* ref: FUN_00e005c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e005c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe005c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da6e10(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e005d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e005d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe005d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  uVar1 = param_1[1];
  *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return uVar1;
}

/* ref: Global::IsClassType */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e005f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe005f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(F_00e19d40(param_1 GEN_EDX_ARG)));
  return (uint)(*piVar1 == 6);
}

/* ref: FUN_00e00640 */
GEN_LIB GEN_FRAME uint F_00e00640(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe00640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00e00650 */
GEN_LIB GEN_FRAME uint F_00e00650(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe00650u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00e00680 */
GEN_LIB GEN_FRAME uint F_00e00680(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe00680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00e00690 */
GEN_LIB GEN_FRAME uint F_00e00690(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe00690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: Global::HashTableOwnsBuffer */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00720(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe00720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_2)) = (*((uint *)GEN_TOP((in_ecx + 4))) & 0x80000000) == 0;
  return param_2;
}

/* ref: Global::IsPowerOfTwo_00e00740 */
GEN_LIB GEN_FRAME uint F_00e00740(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe00740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return (uint)((param_1 - 1 & param_1) == 0);
}

/* ref: FUN_00e00760 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe00760u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: Global::HashTableGetKey */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe00800u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 uVar1;
  
  uVar1 = *((undefined4 *)GEN_TOP((*(int *)this + 4 + param_2 * 0xc)));
  *param_1 = *((undefined4 *)GEN_TOP((*(int *)this + param_2 * 0xc)));
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: Global::HashTableGetValue */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00820(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe00820u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + 8 + param_2 * 0xc)));
}

/* ref: Global::HashTableSetValue */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe00840u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP((*(int *)this + 8 + param_1 * 0xc))) = param_2;
  return param_1 * 3;
}

/* ref: Global::HashTableNextOccupied */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e00860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe00860u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Global::HashTableIsIndexValid */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00890(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xe00890u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = param_3 <= *((int *)GEN_TOP((in_ecx + 8)));
  return param_2;
}

/* ref: Global::HashTableSet */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e008b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xe008b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    F_00e01480(this GEN_EDX_FWD,param_1,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar3 = (param_2 >> 4) * -0x61c8864f & *((uint *)GEN_TOP(((int)this + 8)));
  iVar4 = uVar3 * 0xc;
  uVar2 = 1;
  if (*((int *)GEN_TOP((iVar1 + iVar4))) != -1) {
    do {
      if ((*((uint *)GEN_TOP((iVar1 + iVar4))) == param_2) && (*((int *)GEN_TOP((iVar1 + 4 + iVar4))) == param_3)) {
        uVar2 = 0;
        goto LAB_00e00926;
      }
      uVar3 = uVar3 + 1 & *((uint *)GEN_TOP(((int)this + 8)));
      iVar4 = uVar3 * 0xc;
    } while (*((int *)GEN_TOP((iVar4 + iVar1))) != -1);
    uVar2 = 1;
  }
LAB_00e00926: ;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + uVar2;
  iVar4 = uVar3 * 0xc;
  *((uint *)GEN_TOP((iVar1 + iVar4))) = param_2;
  *((int *)GEN_TOP((iVar1 + 4 + iVar4))) = param_3;
  *((undefined4 *)GEN_TOP((iVar4 + 8 + *(int *)this))) = param_4;
  return uVar2;
}

/* ref: Global::HashTableFindIndex */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe00960u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (0 < (int)uVar1) {
    iVar2 = *(int *)this;
    uVar4 = (param_1 >> 4) * -0x61c8864f & uVar1;
    iVar3 = *((int *)GEN_TOP((iVar2 + uVar4 * 0xc)));
    while (iVar3 != -1) {
      puVar5 = ((uint *)GEN_TOP((iVar2 + uVar4 * 0xc)));
      if ((*puVar5 == param_1) && (puVar5[1] == param_2)) {
        return uVar4;
      }
      uVar4 = uVar4 + 1 & uVar1;
      iVar3 = *((int *)GEN_TOP((iVar2 + uVar4 * 0xc)));
    }
  }
  return uVar1 + 1;
}

/* ref: Global::HashTableGetOrDefault */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e009c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe009c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (0 < (int)uVar1) {
    iVar2 = *(int *)this;
    uVar4 = (param_1 >> 4) * -0x61c8864f & uVar1;
    iVar3 = *((int *)GEN_TOP((iVar2 + uVar4 * 0xc)));
    while (iVar3 != -1) {
      puVar5 = ((uint *)GEN_TOP((iVar2 + uVar4 * 0xc)));
      if ((*puVar5 == param_1) && (puVar5[1] == param_2)) {
        return *((uint *)GEN_TOP((iVar2 + 8 + uVar4 * 0xc)));
      }
      uVar4 = uVar4 + 1 & uVar1;
      iVar3 = *((int *)GEN_TOP((iVar2 + uVar4 * 0xc)));
    }
  }
  return param_3;
}

/* ref: Global::HashTableTryGet */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe00a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00e00960(this GEN_EDX_FWD,param_1,param_2);
  if ((int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    *param_3 = *((undefined4 *)GEN_TOP((*(int *)this + 8 + uVar1 * 0xc)));
    return 0;
  }
  return 1;
}

/* ref: Global::HashTableRemoveAt */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e00a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe00a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  *((undefined4 *)GEN_TOP((*(int *)this + param_1 * 0xc))) = 0xffffffff;
  uVar7 = *((uint *)GEN_TOP(((int)this + 8)));
  uVar5 = uVar7 + param_1 & uVar7;
  iVar1 = *((int *)GEN_TOP((*(int *)this + uVar5 * 0xc)));
  while (iVar1 != -1) {
    uVar5 = uVar5 + uVar7 & uVar7;
    iVar1 = *((int *)GEN_TOP((*(int *)this + uVar5 * 0xc)));
  }
  uVar6 = uVar5 + 1 & uVar7;
  uVar5 = param_1 + 1 & uVar7;
  iVar2 = uVar5 * 0xc;
  iVar1 = *((int *)GEN_TOP((*(int *)this + iVar2)));
  uVar4 = param_1;
  while (iVar1 != -1) {
    iVar1 = *(int *)this;
    uVar7 = (*((uint *)GEN_TOP((iVar1 + iVar2))) >> 4) * -0x61c8864f & uVar7;
    param_1 = uVar4;
    if ((((uVar5 < uVar6) || (uVar7 <= uVar4)) &&
        ((uVar4 <= uVar5 || ((uVar7 <= uVar4 && (uVar5 < uVar7)))))) &&
       ((uVar7 <= uVar4 || (uVar6 <= uVar7)))) {
      iVar3 = uVar4 * 0xc;
      *((undefined4 *)GEN_TOP((iVar3 + iVar1))) = *((undefined4 *)GEN_TOP((iVar1 + iVar2)));
      *((undefined4 *)GEN_TOP((iVar3 + 4 + iVar1))) = *((undefined4 *)GEN_TOP((iVar1 + 4 + iVar2)));
      *((undefined4 *)GEN_TOP((iVar3 + 8 + *(int *)this))) = *((undefined4 *)GEN_TOP((*(int *)this + 8 + iVar2)));
      *((undefined4 *)GEN_TOP((iVar2 + *(int *)this))) = 0xffffffff;
      param_1 = uVar5;
    }
    uVar7 = *((uint *)GEN_TOP(((int)this + 8)));
    uVar5 = uVar5 + 1 & uVar7;
    iVar2 = uVar5 * 0xc;
    uVar4 = param_1;
    iVar1 = *((int *)GEN_TOP((iVar2 + *(int *)this)));
  }
  return 0;
}

/* ref: Global::HashTableValidate */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe00b50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Global::HashTableClear */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e00bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe00bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 8))) + 1;
  if (0 < iVar1) {
    in_EAX = 0;
    do {
      *((undefined4 *)GEN_TOP((in_EAX + *(int *)this))) = 0xffffffff;
      in_EAX = in_EAX + 0xc;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  *((uint *)GEN_TOP(((int)this + 4))) = *((uint *)GEN_TOP(((int)this + 4))) & 0x80000000;
  return in_EAX;
}

/* ref: Global::HashTableFree */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe00be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00e00bb0(this GEN_EDX_FWD);
  if ((*((uint *)GEN_TOP(((int)this + 4))) & 0x80000000) == 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))
                      (param_1 GEN_EDX_ARG,*(undefined4 *)this,(*((int *)GEN_TOP(((int)this + 8))) * 3 + 3) * 4);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xffffffff;
  return uVar1;
}

/* ref: Global::HashTableInitExternal */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe00c30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  *(undefined4 *)this = param_1;
  *((uint *)GEN_TOP(((int)this + 4))) = param_2 | 0x80000000;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 - 1U;
  return param_3 - 1U;
}

/* ref: Global::HashTableCalcBufferSize */
GEN_LIB GEN_FRAME uint F_00e00c50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe00c50u, gen_a0, 0u, 0u, 0u);
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

/* ref: Global::HashTableInitWithBuffer */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e00c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe00c70u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::HashTableSwap */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe00cc0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Global::GetElementPtr4_00e00d20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00d20(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe00d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: Global::GetElementPtr16_00e00d70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00d70(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe00d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x10 + *in_ecx;
}

/* ref: Global::ValueToBool */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e00d90(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe00d90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  bool bVar5;
  float10 extraout_ST0;
  longlong lVar6;
  
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 4))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG)));
  switch((unsigned int)(uintptr_t)(*puVar2)) {
  case 2: ;
  case 4: ;
    lVar6 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x54))))(((int *)GEN_TOP(*param_1)),param_1[1]);
    if (lVar6 != 0) {
      return 1;
    }
    break;
  case 3: ;
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x3c))))(((int *)GEN_TOP(*param_1)),param_1[1]);
    bVar5 = GEN_ISNAN(extraout_ST0) || GEN_ISNAN((float10)0);
    if (bVar5 == (bVar5 || extraout_ST0 == (float10)0)) {
      return 1;
    }
    break;
  case 5: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x34))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,param_1[1]);
    return (uint)(uVar4 != 0);
  case 6: ;
  case 7: ;
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x5c))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,param_1[1])));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) + 1;
      puVar2[2] = puVar2[2] + 1;
    }
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) - 1;
      piVar3 = puVar2 + 2;
      *piVar3 = *piVar3 - 1;
      if (*piVar3 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      }
    }
    return (uint)(puVar2 != ((undefined4 *)GEN_TOP(0x0)));
  case 8: ;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 100))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,param_1[1])));
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) + 1;
      piVar3[2] = piVar3[2] + 1;
    }
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
    *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) - 1;
    piVar1 = piVar3 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar3)))(piVar3 GEN_EDX_ARG,1);
    }
    return (uint)(uVar4 != 0);
  case 9: ;
    return 1;
  }
  return 0;
}

/* ref: FUN_00e00f10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe00f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[4];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  GEN_FRAME_DECL_TOP(0x80, 0, 4);
  char cVar1;
  char * pcVar2;
  
  F_00e03cf0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,(*(int * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
  F_00e03fc0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x14))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
  pcVar2 = ((char *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xc))))((*(int * PTR32 *)&gen_args[1]) GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[3]) + 3)));
  cVar1 = *pcVar2;
  F_00e03e60(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return (uint)(cVar1 == '\0');
}

/* ref: FUN_00e00fb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe00fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3;
  return param_3;
}

/* ref: FUN_00e00fd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e00fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe00fd0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Global::AllocateArray12_00e01020 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe01020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: Global::AllocateArray4_00e01040 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe01040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: Global::AllocateArray16_00e01060 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe01060u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 << 4);
  return uVar1;
}

/* ref: Global::ThreadAllocate */
GEN_LIB GEN_FRAME uint F_00e010a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe010a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00e010c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e010c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe010c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(*param_1));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_FWD);
  uVar2 = F_00da4190(((undefined *)GEN_TOP(((int)this + 0x20))) GEN_EDX_ARG,uVar2,0xffffffff);
  return uVar2;
}

/* ref: FUN_00e01110 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01110(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe01110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2;
}

/* ref: FUN_00e01120 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe01120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP(*param_1));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  }
  else {
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)))));
  }
  uVar3 = F_00e009c0(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,*puVar2,puVar2[1],0xffffffff);
  uVar3 = F_00e03a70(this GEN_EDX_ARG,param_1,uVar3 * 0x10 + *((int *)GEN_TOP(((int)this + 0x4c))));
  return uVar3;
}

/* ref: FUN_00e01180 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe01180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  
  if ((*(int *)this != 0) && (piVar1 = ((int *)GEN_TOP(*param_2)), piVar1 != ((int *)GEN_TOP(0x0)))) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)))));
    uVar3 = F_00e009c0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,*puVar2,puVar2[1],0xffffffff);
    if (uVar3 != 0xffffffff) {
      iVar4 = **((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + uVar3 * 4)));
      goto LAB_00e011d3;
    }
  }
  iVar4 = *param_2;
LAB_00e011d3: ;
  *param_1 = iVar4;
  if (iVar4 != 0) {
    *((short *)GEN_TOP((iVar4 + 6))) = *((short *)GEN_TOP((iVar4 + 6))) + 1;
    *((int *)GEN_TOP((iVar4 + 8))) = *((int *)GEN_TOP((iVar4 + 8))) + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00e011f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e011f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe011f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: Global::ThreadAllocate2 */
GEN_LIB GEN_FRAME uint F_00e01210(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe01210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: Global::ThreadHeapFree12 */
GEN_LIB GEN_FRAME unsigned int F_00e01230(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe01230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: Global::MapInsertDefaultAlloc */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe01280u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00e008b0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3);
  return uVar1;
}

/* ref: Global::ThreadHeapAlloc */
GEN_LIB GEN_FRAME uint F_00e012a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe012a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: Global::ThreadHeapFree12B */
GEN_LIB GEN_FRAME unsigned int F_00e012c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe012c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: Global::MapFindIsValid */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e012f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe012f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00e00960(this GEN_EDX_FWD,param_2,param_3);
  *((bool *)GEN_TOP(param_1)) = (int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)));
  return param_1;
}

/* ref: Global::ArrayShrinkBy */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01390(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe01390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 4))) = *((int *)GEN_TOP((in_ecx + 4))) - param_2;
  return param_2;
}

/* ref: Global::ArrayReserve12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e013a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe013a0u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,0xc);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: Global::ArrayExpandOne12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e013e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe013e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,0xc);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 0xc;
}

/* ref: FUN_00e01420 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe01420u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00e00c70(this GEN_EDX_FWD,param_1,param_2);
  return (uint)this;
}

/* ref: Global::MapRemoveKey */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe01440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00e00960(this GEN_EDX_FWD,param_1,param_2);
  if ((int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    F_00e00a60(this GEN_EDX_ARG,uVar1);
    return 0;
  }
  return 1;
}

/* ref: Global::MapResizeTable */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe01480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int * piVar8;
  
  iVar7 = param_2;
  if (param_2 < 9) {
    iVar7 = 8;
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 4)));
  piVar2 = *(int * PTR32 *)this;
  iVar6 = *((int *)GEN_TOP(((int)this + 8))) + 1;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_FWD,iVar7 * 0xc);
  if (uVar3 != 0) {
    *(uint *)this = uVar3;
    if (0 < iVar7) {
      iVar4 = 0;
      iVar5 = iVar7;
      do {
        *((undefined4 *)GEN_TOP((iVar4 + *(int *)this))) = 0xffffffff;
        iVar4 = iVar4 + 0xc;
        iVar5 = iVar5 - 1;
      } while (iVar5 != 0);
    }
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((int *)GEN_TOP(((int)this + 8))) = iVar7 - 1;
    piVar8 = piVar2;
    param_2 = iVar6;
    if (0 < iVar6) {
      do {
        if (*piVar8 != -1) {
          F_00e008b0(this GEN_EDX_ARG,param_1,*piVar8,piVar8[1],piVar8[2]);
        }
        iVar7 = param_2 - 1;
        piVar8 = piVar8 + 3;
        param_2 = iVar7;
      } while (iVar7 != 0);
    }
    if ((uVar1 & 0x80000000) == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG,piVar2,iVar6 * 0xc);
    }
    return 0;
  }
  return 1;
}

/* ref: Global::ArrayExpandOne4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe01550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 4;
}

/* ref: Global::ArrayReserve16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe01590u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::ArrayExpandOne16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e015d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe015d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x10);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return iVar1 * 0x10 + *(int *)this;
}

/* ref: Global::Array16ConstructSized */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe01610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  
  iVar5 = (*(int *)&gen_args[0]);
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  if ((*(int *)&gen_args[0]) == 0) {
    uVar2 = 0;
  }
  else {
    (*(int *)&gen_args[0]) = (*(int *)&gen_args[0]) << 4;
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc)));
    uVar2 = (*pcVar1)(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)&gen_args[0]));
    iVar3 = (int)((*(int *)&gen_args[0]) + ((*(int *)&gen_args[0]) >> 0x1f & 0xfU)) >> 4;
    if (iVar3 != 0) goto LAB_00e01660;
  }
  iVar3 = ((int)0x80000000);
LAB_00e01660: ;
  *(uint *)this = uVar2;
  *((int *)GEN_TOP(((int)this + 4))) = iVar5;
  *((int *)GEN_TOP(((int)this + 8))) = iVar3;
  if (0 < iVar5) {
    puVar4 = ((undefined4 *)GEN_TOP((uVar2 + 8)));
    do {
      if (puVar4 != ((undefined4 *)GEN_TOP(0x8))) {
        puVar4[-2] = 0;
        puVar4[-1] = 0;
        *puVar4 = 0;
        puVar4[1] = 0;
      }
      puVar4 = puVar4 + 4;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  return (uint)this;
}

/* ref: FUN_00e016a0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00e016a0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xe016a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  int * piVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  bool bVar5;
  float10 extraout_ST0;
  longlong lVar6;
  
  puVar2 = ((undefined4 *)GEN_TOP(F_00e1cd10(param_1 GEN_EDX_ARG)));
  switch((unsigned int)(uintptr_t)(*puVar2)) {
  case 2: ;
  case 4: ;
    lVar6 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x30))))(((int *)GEN_TOP(*param_1)),param_1[1]);
    if (lVar6 != 0) {
      return 1;
    }
    break;
  case 3: ;
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x3c))))(((int *)GEN_TOP(*param_1)),param_1[1]);
    bVar5 = GEN_ISNAN(extraout_ST0) || GEN_ISNAN((float10)0);
    if (bVar5 == (bVar5 || extraout_ST0 == (float10)0)) {
      return 1;
    }
    break;
  case 5: ;
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x2c))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,param_1[1]);
    return (uint)(uVar4 != 0);
  case 6: ;
  case 7: ;
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x34))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,param_1[1])));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) + 1;
      puVar2[2] = puVar2[2] + 1;
    }
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)puVar2 + 6))) = *((short *)GEN_TOP(((int)puVar2 + 6))) - 1;
      piVar3 = puVar2 + 2;
      *piVar3 = *piVar3 - 1;
      if (*piVar3 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
      }
    }
    return (uint)(puVar2 != ((undefined4 *)GEN_TOP(0x0)));
  case 8: ;
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*param_1)) + 0x28))))(((int *)GEN_TOP(*param_1)) GEN_EDX_ARG,param_1[1])));
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
      *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) + 1;
      piVar3[2] = piVar3[2] + 1;
    }
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x14))))(piVar3 GEN_EDX_ARG);
    *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) - 1;
    piVar1 = piVar3 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar3)))(piVar3 GEN_EDX_ARG,1);
    }
    return (uint)(uVar4 != 0);
  case 9: ;
    return 1;
  }
  return 0;
}

/* ref: Global::ArrayClearAndDeallocate12_00e017e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e017e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe017e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::WritePooledString */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe01840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = F_00da6940(this GEN_EDX_FWD,3);
    return uVar1;
  }
  uVar1 = F_00da4190(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,param_1,0xffffffff);
  if (uVar1 == 0xffffffff) {
    uVar1 = F_00da0e60(param_1);
    F_00e00500(this GEN_EDX_ARG,uVar1,(int)uVar1 >> 0x1f);
    F_00da6ae0(this GEN_EDX_ARG,param_1,uVar1);
    uVar1 = F_00da3a20(((undefined *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,param_1,*((int *)GEN_TOP(((int)this + 0x14))) + 1);
    return uVar1;
  }
  uVar1 = F_00e00500(this GEN_EDX_ARG,-uVar1,(int)-uVar1 >> 0x1f);
  return uVar1;
}

/* ref: FUN_00e018c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e018c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe018c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  int iVar2;
  int * piVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  F_00e01180(((undefined *)GEN_TOP(((int)this + 0x58))) GEN_EDX_FWD,&(*(int * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[0]));
  piVar3 = (*(int * PTR32 *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  if ((*(int * PTR32 *)&gen_args[0]) == ((int *)GEN_TOP(0x0))) {
    puVar4 = &(*(undefined4 *)(gen_frame + 0x8));
  }
  else {
    puVar4 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 4))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)))));
  }
  uVar5 = F_00e009c0(((undefined *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG,*puVar4,puVar4[1],0xffffffff);
  iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x4c))) + 0xc + uVar5 * 0x10)));
  uVar5 = F_00e00500(this GEN_EDX_ARG,iVar2,iVar2 >> 0x1f);
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    *((short *)GEN_TOP(((int)piVar3 + 6))) = *((short *)GEN_TOP(((int)piVar3 + 6))) - 1;
    piVar1 = piVar3 + 2;
    *piVar1 = *piVar1 - 1;
    if (*piVar1 == 0) {
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*piVar3)))(piVar3 GEN_EDX_ARG,1);
    }
  }
  return uVar5;
}

/* ref: Global::ByteArrayReserve */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe01940u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,1);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: Global::ByteArraySetSizeFill */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e01980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe01980u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,1);
  }
  iVar3 = *((int *)GEN_TOP(((int)this + 4)));
  iVar1 = *(int *)this;
  iVar4 = param_1 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *((undefined1 *)GEN_TOP((iVar5 + iVar1 + iVar3))) = *param_2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return 0;
}

/* ref: Global::ByteArrayExpandBy */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e019e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe019e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e01a30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe01a30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00e01420(this GEN_EDX_FWD,param_1,param_2);
  return (uint)this;
}

/* ref: Global::ArrayExpandOne4Default */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e01a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe01a50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,4);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 4;
}

/* ref: Global::ArrayReserve16Default */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe01a80u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,0x10);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: Global::ArrayExpandOne16Default */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e01ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe01ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,0x10);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return iVar1 * 0x10 + *(int *)this;
}

/* ref: Global::ArrayReserve12Default */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe01af0u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,0xc);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: Global::ArrayExpandOne12Default */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e01b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe01b30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,0xc);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 0xc;
}

/* ref: Global::MapInsertChecked */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(uint * param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xe01b70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(uint * param_5 = (uint *)(uintptr_t)gen_a5;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    uVar1 = F_00e01480(this GEN_EDX_FWD,param_1,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
    *param_5 = uVar1;
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    *param_5 = 0;
  }
  uVar1 = F_00e008b0(this GEN_EDX_ARG,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Global::MapInsertIfAbsent */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e01bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xe01bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00e01480(this GEN_EDX_FWD,param_1,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
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

/* ref: Global::MapReserve */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe01c50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = 8;
  if (8 < param_2 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_2 * 2);
  }
  uVar2 = F_00e01480(this GEN_EDX_FWD,param_1,iVar1);
  return uVar2;
}

/* ref: Global::ArrayClearAndDeallocate12Default */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e01c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe01c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: Global::ArrayClearAndDeallocate4_00e01cc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe01cc0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Global::ArrayClearAndDeallocate16_00e01d00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e01d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe01d00u, gen_a0, gen_a1, 0u, 0u);
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

