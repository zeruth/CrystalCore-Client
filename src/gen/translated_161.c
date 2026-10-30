#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00cdc280 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cdc280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdc280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  short sVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  
  if (*((int *)GEN_TOP(((int)this + 0x5c))) == 5) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112d7c4)),&REFG(undefined1, 0x107fc63),((char *)REFP(0x112d7e0)),0xae4,
                    ((char *)REFP(0x112d858)));
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0x5c)));
  if ((((iVar2 != 0) && (iVar2 != 1)) && (iVar2 != 2)) && (iVar2 != 3)) {
    return 0;
  }
  if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcd7820));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112d7b0)),&REFG(undefined1, 0x107fc63),((char *)REFP(0x112d7e0)),0xaf2,
                    ((char *)REFP(0x112d858)));
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0x1c)));
  iVar4 = *((int *)GEN_TOP(((int)this + 0x24))) + iVar2;
  (*(undefined2 *)(gen_frame + 0x0)) = *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + iVar2)));
  sVar1 = *((short *)GEN_TOP((iVar4 + 2)));
  (*(short *)(gen_frame + 0x2)) = sVar1;
  if (-1 < sVar1) {
    *((int *)GEN_TOP(((int)this + 0x1c))) = iVar2 + 4;
    bVar3 = F_00cdba60(this GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x0)),0);
    return bVar3;
  }
  (*(int *)(gen_frame + 0x4)) = iVar4 + 4;
  *((int *)GEN_TOP(((int)this + 0x1c))) = iVar2 + (2 - sVar1) * 2;
  bVar3 = F_00cdba60(this GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x0)),0);
  return bVar3;
}

/* ref: FUN_00cdc390 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdc390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdc390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x1c)));
  fVar5 = *((float *)GEN_TOP((iVar1 + *((int *)GEN_TOP(((int)this + 0x24))))));
  *((int *)GEN_TOP(((int)this + 0x1c))) = iVar1 + 4;
  fVar4 = *((float *)GEN_TOP((iVar1 + 4 + *((int *)GEN_TOP(((int)this + 0x24))))));
  (*(float *)(gen_frame + 0x0)) = fVar4;
  *((int *)GEN_TOP(((int)this + 0x1c))) = iVar1 + 8;
  fVar3 = (float10)fVar4;
  if (!(fVar3 <= (float10)fVar5) != (GEN_ISNAN((float10)fVar5) || GEN_ISNAN(fVar3))) {
    fVar4 = F_00a4b7d0();
    F_00cccbd0((int)this + 0x60 GEN_EDX_ARG,
                 ((float)GEN_TOF(((float10)fVar4 * ((float10)(*(float *)(gen_frame + 0x0)) - (float10)fVar5) + (float10)fVar5))));
    fVar5 = F_00cd83d0(this GEN_EDX_ARG);
    if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x4c))))
                (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar5));
    }
    (*(float *)(gen_frame + 0x0)) = gen_bits2f((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0));
    uVar2 = F_00cbddc0((int)this + 0xc GEN_EDX_ARG,fVar5,(uint)&(*(float *)(gen_frame + 0x0)));
    return uVar2;
  }
  F_00cccbd0((int)this + 0x60 GEN_EDX_ARG,fVar5);
  fVar5 = F_00cd83d0(this GEN_EDX_ARG);
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x4c))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar5));
  }
  (*(float *)(gen_frame + 0x0)) = gen_bits2f((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0));
  uVar2 = F_00cbddc0((int)this + 0xc GEN_EDX_ARG,fVar5,(uint)&(*(float *)(gen_frame + 0x0)));
  return uVar2;
}

/* ref: FUN_00cdc4a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdc4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdc4a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  uint uVar1;
  float10 fVar2;
  float fVar3;
  
  (*(float *)(gen_frame + 0x4)) = *((float *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + *((int *)GEN_TOP(((int)this + 0x24))))));
  *((int *)GEN_TOP(((int)this + 0x1c))) = *((int *)GEN_TOP(((int)this + 0x1c))) + 4;
  fVar3 = F_00cccde0(((undefined *)GEN_TOP(((int)this + 0x60))) GEN_EDX_FWD);
  fVar2 = (float10)(*(float *)(gen_frame + 0x4));
  (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar3 + fVar2);
  fVar2 = GEN_X87((float10)(float)((float10)fVar3 + fVar2));
  if (!((float10)0 <= fVar2) == (GEN_ISNAN(fVar2) || GEN_ISNAN((float10)0))) {
    if (!(fVar2 <= (float10)1) == (GEN_ISNAN((float10)1) || GEN_ISNAN(fVar2))) goto LAB_00cdc4f9;
    fVar2 = GEN_X87(fVar2 - (float10)REFG(double, 0x1088130));
  }
  else {
    fVar2 = GEN_X87(fVar2 + (float10)REFG(double, 0x1088130));
  }
  (*(float *)(gen_frame + 0x4)) = (float)fVar2;
  fVar2 = (float10)(float)fVar2;
LAB_00cdc4f9: ;
  F_00cccbd0((int)this + 0x60 GEN_EDX_ARG,(float)fVar2);
  fVar3 = F_00cd83d0(this GEN_EDX_ARG);
  (*(float *)(gen_frame + 0x4)) = fVar3;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x4c))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar3));
  }
  (*(int *)(gen_frame + 0x0)) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
  uVar1 = F_00cbddc0((int)this + 0xc GEN_EDX_ARG,(*(float *)(gen_frame + 0x4)),(uint)&(*(int *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00cdc550 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdc550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xcdc550u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  F_00cd38f0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,1,param_6,(undefined1)param_7);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112d8dc));
  return (uint)this;
}

/* ref: FUN_00cdc590 */
GEN_LIB GEN_FRAME unsigned int F_00cdc590(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcdc590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00cdc5c0 */
GEN_LIB_GS GEN_FRAME uint F_00cdc5c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcdc5c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x808, 8, 4);
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x800)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x804));
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112d8bc)),param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112d89c)),param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x0)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return extraout_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::AtomosgearSound::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdc660(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcdc660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[109])REFP(0x112d8dc));
  F_00cd3df0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cdc690 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdc690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xcdc690u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  F_00cdd250(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112dadc));
  return (uint)this;
}

/* ref: FUN_00cdc6d0 */
GEN_LIB GEN_FRAME unsigned int F_00cdc6d0(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcdc6d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::OrderSound::vf107 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cdc700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdc700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined * pOVar8;
  int iVar9;
  undefined * pOVar10;
  undefined4 local_30;
  short local_28;
  short sStack_26;
  int local_1c;
  uint local_18;
  undefined * local_14;
  uint local_c;
  int local_8;
  
  piVar1 = *(int * PTR32 *)(this + 0xc);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x20))))(piVar1 GEN_EDX_FWD);
  if (uVar4 < 2) {
    local_18 = 0;
  }
  else {
    local_18 = (uint)*(ushort *)(this + 0x1c);
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x58))))(piVar1 GEN_EDX_ARG,local_18);
  if (this[0x13] == (undefined1)0x5) {
    uVar4 = (int)(uVar4 + 1) % (int)(uint)(byte)this[0x10];
    uVar5 = (uint)*(ushort *)(this + uVar4 * 8 + 0x398);
    *(uint *)(this + 0x344) = uVar5;
    uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x10))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,uVar5);
    F_00cd78c0(*(undefined * PTR32 *)(this + 0x2c0) GEN_EDX_ARG,uVar6,uVar5);
    if ((*(ushort *)(this + uVar4 * 8 + 0x39a) & 0x4000) == 0) {
      piVar2 = *(int * PTR32 *)(this + 0xc);
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x15c))))(this GEN_EDX_ARG,(uint)(byte)this[0x2b8]);
      uVar5 = uVar5 & 0xff;
      uVar6 = (uint)*(ushort *)(this + uVar4 * 8 + 0x39a);
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
      F_00cd7980(*(undefined * PTR32 *)(this + 0x2c0) GEN_EDX_ARG,uVar7,uVar6,uVar5);
    }
  }
  else {
    local_c = uVar4;
    if ((int)uVar4 < 0) {
      local_30 = 0xffff0000;
    }
    else {
      local_30 = *(undefined4 *)(this + uVar4 * 8 + 0x39c);
    }
    while ((-1 < (int)uVar4 || ((int)(local_c + 1) < (int)(uint)(byte)this[0x10]))) {
      local_c = (int)(local_c + 1) % (int)(uint)(byte)this[0x10];
      uVar5 = *(uint *)(this + local_c * 8 + 0x398);
      local_28 = (short)*(undefined4 *)(this + local_c * 8 + 0x39c);
      sStack_26 = (short)((uint)*(undefined4 *)(this + local_c * 8 + 0x39c) >> 0x10);
      if ((uVar4 == local_c) || (((short)((uint)local_30 >> 0x10) != sStack_26 && (local_28 == 0))))
      goto LAB_00cdc85f;
    }
    uVar5 = *(uint *)(this + 0x398);
    local_c = 0;
    sStack_26 = (short)((uint)*(undefined4 *)(this + 0x39c) >> 0x10);
LAB_00cdc85f: ;
    *(uint *)(this + 0x344) = uVar5 & 0xffff;
    local_8 = 0;
    if ((int)local_c < (int)(uint)(byte)this[0x10]) {
      pOVar10 = this + 0x2c0;
      pOVar8 = this + local_c * 8 + 0x398;
      local_14 = ((undefined *)GEN_TOP(local_c));
      do {
        if (sStack_26 != *(short *)(pOVar8 + 6)) break;
        uVar4 = *(uint *)pOVar8;
        uVar5 = uVar4 >> 0x10;
        uVar6 = uVar4 & 0xffff;
        sStack_26 = (short)(*(uint *)(pOVar8 + 4) >> 0x10);
        uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x10))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,uVar6);
        F_00cd78c0(*(undefined * PTR32 *)pOVar10 GEN_EDX_ARG,uVar7,uVar6);
        if ((uVar4 & 0x40000000) == 0) {
          piVar2 = *(int * PTR32 *)(this + 0xc);
          uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x15c))))(this GEN_EDX_ARG,(uint)(byte)this[0x2b8]);
          uVar4 = uVar4 & 0xff;
          uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
          F_00cd7980(*(undefined * PTR32 *)pOVar10 GEN_EDX_ARG,uVar6,uVar5,uVar4);
        }
        local_8 = local_8 + 1;
        local_14 = ((undefined *)GEN_TOP(((int)local_14 + 1)));
        pOVar10 = pOVar10 + 4;
        pOVar8 = pOVar8 + 8;
      } while ((int)local_14 < (int)(uint)(byte)this[0x10]);
    }
    sVar3 = -1;
    local_1c = 0;
    if (this[0x10] != (undefined1)0x0) {
      pOVar10 = this + 0x39e;
      do {
        uVar4 = *(uint *)(pOVar10 - 6);
        local_28 = (short)*(undefined4 *)(pOVar10 - 2);
        sStack_26 = (short)((uint)*(undefined4 *)(pOVar10 - 2) >> 0x10);
        if (((sStack_26 != sVar3) && (sVar3 = sStack_26, local_28 != 0)) &&
           (local_1c < (int)(uint)(byte)this[0x10])) {
          pOVar8 = this + local_8 * 4 + 0x2c0;
          iVar9 = local_1c;
          local_14 = pOVar10;
          do {
            if (sStack_26 != *(short *)local_14) break;
            uVar5 = uVar4 & 0xffff;
            uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x10))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,uVar5);
            F_00cd78c0(*(undefined * PTR32 *)pOVar8 GEN_EDX_ARG,uVar6,uVar5);
            if ((uVar4 & 0x40000000) == 0) {
              piVar2 = *(int * PTR32 *)(this + 0xc);
              uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x15c))))(this GEN_EDX_ARG,(uint)(byte)this[0x2b8]);
              uVar6 = uVar6 & 0xff;
              uVar5 = uVar4 >> 0x10;
              uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
              F_00cd7980(*(undefined * PTR32 *)pOVar8 GEN_EDX_ARG,uVar7,uVar5,uVar6);
            }
            local_8 = local_8 + 1;
            local_14 = local_14 + 8;
            iVar9 = iVar9 + 1;
            pOVar8 = pOVar8 + 4;
          } while (iVar9 < (int)(uint)(byte)this[0x10]);
        }
        local_1c = local_1c + 1;
        pOVar10 = pOVar10 + 8;
      } while (local_1c < (int)(uint)(byte)this[0x10]);
    }
    if (local_8 < *(int *)(this + 700)) {
      pOVar10 = this + local_8 * 4 + 0x2c0;
      iVar9 = local_8;
      do {
        F_00cd8a90(*(undefined * PTR32 *)pOVar10 GEN_EDX_ARG);
        *(undefined4 *)pOVar10 = 0;
        iVar9 = iVar9 + 1;
        pOVar10 = pOVar10 + 4;
      } while (iVar9 < *(int *)(this + 700));
    }
    *(int *)(this + 700) = local_8;
    uVar4 = local_c;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x5c))))(piVar1 GEN_EDX_ARG,local_18,uVar4);
  return 1;
}

/* ref: FUN_00cdca80 */
GEN_LIB_GS GEN_FRAME uint F_00cdca80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcdca80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x808, 8, 4);
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x800)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x804));
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112dabc)),param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112da9c)),param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x0)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return extraout_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RandomSound::vf53 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cdcb20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdcb20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x344)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::OrderSound::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdcb30(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcdcb30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[109])REFP(0x112dadc));
  F_00cdd3c0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cdcb60 */
GEN_LIB GEN_FRAME ushort F_00cdcb60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcdcb60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  ushort uVar1;
  
  uVar1 = F_00a4b890(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00cdcb70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdcb70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xcdcb70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  F_00cdd250(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112dcdc));
  puVar3 = ((undefined4 *)GEN_TOP(F_00ce9850(param_3,3)));
  uVar1 = *puVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x420))) = uVar1;
  uVar2 = puVar3[1];
  *((undefined4 *)GEN_TOP(((int)this + 0x428))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x424))) = uVar2;
  *((undefined1 *)GEN_TOP(((int)this + 0x42c))) = 0;
  return (uint)this;
}

/* ref: FUN_00cdcbe0 */
GEN_LIB GEN_FRAME unsigned int F_00cdcbe0(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcdcbe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00cdcc10 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cdcc10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcdcc10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int * piVar1;
  int * piVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint * puVar10;
  int iVar11;
  uint uVar12;
  undefined4 * puVar13;
  undefined4 uVar14;
  ushort uStack_16;
  uint local_c;
  int local_8;
  
  iVar11 = 0;
  uVar3 = F_00a4b890(0,100);
  *((undefined4 *)GEN_TOP(((int)this + 0x344))) = 0xffffffff;
  uVar4 = F_00d2e4f0();
  if ((char)param_1 == '\0') {
    local_8 = *((int *)GEN_TOP(((int)this + 700))) - 1;
  }
  else {
    local_8 = 0;
  }
  if (-1 < (int)uVar4) {
    if ((int)uVar4 < (int)(uint)*((byte *)GEN_TOP(((int)this + 0x10)))) {
      uVar4 = *((uint *)GEN_TOP(((int)this + uVar4 * 8 + 0x398)));
      uVar5 = uVar4 & 0xffff;
      uVar7 = uVar4 >> 0x10;
      *((uint *)GEN_TOP(((int)this + 0x344))) = uVar5;
      uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,uVar5);
      F_00cd78c0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x2c0))) GEN_EDX_ARG,uVar8,uVar5);
      if ((uVar4 & 0x40000000) == 0) {
        piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x15c))))(this GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)this + 0x2b8))));
        uVar4 = uVar4 & 0xff;
        uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
        F_00cd7980(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x2c0))) GEN_EDX_ARG,uVar5,uVar7,uVar4);
      }
    }
    return 1;
  }
  if (*((char *)GEN_TOP(((int)this + 0x10))) != '\0') {
    puVar10 = ((uint *)GEN_TOP(((int)this + 0x398)));
    do {
      local_c = 0;
      if (0 < iVar11) {
        local_c = puVar10[-1];
      }
      uVar4 = puVar10[1];
      uStack_16 = (ushort)(*puVar10 >> 0x10);
      if (uVar4 == REFG(undefined4, 0x112dea0)) break;
      if ((uVar4 != local_c) &&
         (((uint)(int)(short)uVar3 <= uVar4 || (*((char *)GEN_TOP(((int)this + 0x418))) != '\0')))) {
        piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
        *((uint *)GEN_TOP(((int)this + 0x344))) = *puVar10 & 0xffff;
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x20))))(piVar2 GEN_EDX_ARG);
        if (uVar4 < 2) {
          local_c = 0;
        }
        else {
          local_c = (uint)*((ushort *)GEN_TOP(((int)this + 0x1c)));
        }
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x58))))(piVar2 GEN_EDX_ARG,local_c);
        if (*((uint *)GEN_TOP(((int)this + 0x344))) == uVar4) {
          do {
            iVar11 = (iVar11 + 1) % (int)(uint)*((byte *)GEN_TOP(((int)this + 0x10)));
            iVar9 = 0;
            if (0 < iVar11) {
              iVar9 = *((int *)GEN_TOP(((int)this + iVar11 * 8 + 0x394)));
            }
            uVar4 = *((uint *)GEN_TOP(((int)this + iVar11 * 8 + 0x398)));
            uStack_16 = (ushort)(uVar4 >> 0x10);
          } while (*((int *)GEN_TOP(((int)this + iVar11 * 8 + 0x39c))) == iVar9);
          *((uint *)GEN_TOP(((int)this + 0x344))) = uVar4 & 0xffff;
        }
        uVar14 = *((undefined4 *)GEN_TOP(((int)this + 0x344)));
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,uVar14)
        ;
        F_00cd78c0(*((undefined * PTR32 *)GEN_TOP(((int)this + local_8 * 4 + 0x2c0))) GEN_EDX_ARG,uVar4,uVar14);
        if ((uStack_16 & 0x4000) == 0) {
          piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
          uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x15c))))(this GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)this + 0x2b8))));
          uVar4 = uVar4 & 0xff;
          uVar7 = (uint)uStack_16;
          uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
          F_00cd7980(*((undefined * PTR32 *)GEN_TOP(((int)this + local_8 * 4 + 0x2c0))) GEN_EDX_ARG,uVar5,uVar7,uVar4);
        }
        local_8 = local_8 + 1;
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x5c))))(piVar2 GEN_EDX_ARG,local_c,*((undefined4 *)GEN_TOP(((int)this + 0x344))));
        *((undefined1 *)GEN_TOP(((int)this + 0x42c))) = 0;
        break;
      }
      iVar11 = iVar11 + 1;
      puVar10 = puVar10 + 2;
    } while (iVar11 < (int)(uint)*((byte *)GEN_TOP(((int)this + 0x10))));
  }
  if ((char)param_1 != '\0') {
    local_c = 0;
    if (*((char *)GEN_TOP(((int)this + 0x10))) != '\0') {
      param_1 = ((undefined4 *)GEN_TOP(((int)this + local_8 * 4 + 0x2c0)));
      puVar10 = ((uint *)GEN_TOP(((int)this + 0x398)));
      uVar4 = 0;
      do {
        uVar7 = *puVar10;
        uVar5 = puVar10[1];
        uVar8 = uVar7 >> 0x10;
        if (uVar4 == uVar5) {
          uVar12 = uVar7 & 0xffff;
          uVar4 = uVar12;
          uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0xc))) + 0x10))))
                            (*((int * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,uVar12);
          F_00cd78c0(((undefined *)GEN_TOP(*param_1)) GEN_EDX_ARG,uVar6,uVar4);
          if ((uVar7 & 0x40000000) == 0) {
            piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
            uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x15c))))(this GEN_EDX_ARG,(uint)*((byte *)GEN_TOP(((int)this + 0x2b8))));
            uVar4 = uVar4 & 0xff;
            uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
            F_00cd7980(((undefined *)GEN_TOP(*param_1)) GEN_EDX_ARG,uVar7,uVar8,uVar4);
          }
          local_8 = local_8 + 1;
          param_1 = param_1 + 1;
          *((undefined1 *)GEN_TOP(((int)this + 0x42c))) = 0;
          if (*((int *)GEN_TOP(((int)this + 0x344))) < 0) {
            *((uint *)GEN_TOP(((int)this + 0x344))) = uVar12;
          }
        }
        local_c = local_c + 1;
        puVar10 = puVar10 + 2;
        uVar4 = uVar5;
      } while ((int)local_c < (int)(uint)*((byte *)GEN_TOP(((int)this + 0x10))));
    }
  }
  if (local_8 < *((int *)GEN_TOP(((int)this + 700)))) {
    puVar13 = ((undefined4 *)GEN_TOP(((int)this + local_8 * 4 + 0x2c0)));
    iVar11 = local_8;
    do {
      F_00cd8a90(((undefined *)GEN_TOP(*puVar13)) GEN_EDX_ARG);
      *puVar13 = 0;
      iVar11 = iVar11 + 1;
      puVar13 = puVar13 + 1;
    } while (iVar11 < *((int *)GEN_TOP(((int)this + 700))));
  }
  *((int *)GEN_TOP(((int)this + 700))) = local_8;
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CycleSound::vf78 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cdcf70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdcf70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00cd28c0(in_ecx GEN_EDX_FWD);
  if ((bVar1 != 0) && ((*((uint *)GEN_TOP((in_ecx + 0xf8))) >> 3 & 1) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CycleSound::vf104 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cdcfa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdcfa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*(int *)(this + 0x344) < 0) {
    this[0x42c] = (undefined1)0x1;
    return;
  }
  F_00cd1ff0((undefined *)this GEN_EDX_FWD);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CycleSound::vf9 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cdcfc0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcdcfc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  byte bVar1;
  undefined * pRVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  
  bVar1 = F_00cd50e0(param_1 GEN_EDX_FWD,param_2);
  if (bVar1 == 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0xf8) >> 3 & 1) != 0) {
    return bVar1;
  }
  (*(int *)(gen_frame + 0x8)) = *(int *)(param_1 + 700);
  if (0 < (*(int *)(gen_frame + 0x8))) {
    (*(undefined * PTR32 *)(gen_frame + 0xc)) = param_1 + 0x2c0;
    (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x8));
    do {
      iVar4 = 0;
      if (param_1[0x10] != (undefined1)0x0) {
        pRVar2 = param_1 + 0x398;
        uVar3 = 0;
        do {
          if ((uVar3 == *(uint *)(pRVar2 + 4)) &&
             ((*(uint *)pRVar2 & 0xffff) == *((uint *)GEN_TOP((*(int *)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x1b4))))) {
            (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) - 1;
            break;
          }
          uVar3 = *(uint *)(pRVar2 + 4);
          iVar4 = iVar4 + 1;
          pRVar2 = pRVar2 + 8;
        } while (iVar4 < (int)(uint)(byte)param_1[0x10]);
      }
      (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)(gen_frame + 0xc)) + 4;
      (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) - 1;
    } while ((*(int *)(gen_frame + 0x4)) != 0);
  }
  if (((int)(uint)*(ushort *)(param_1 + 0x424) <= (*(int *)(gen_frame + 0x8))) && (param_1[0x42c] == (undefined1)0x0))
  goto LAB_00cdd148;
  if (0 < (int)(*(int *)(param_1 + 0x428) - param_2)) {
    *(uint *)(param_1 + 0x428) = *(int *)(param_1 + 0x428) - param_2;
    goto LAB_00cdd148;
  }
  pRVar2 = param_1 + *(int *)(param_1 + 700) * 4 + 0x2c0;
  bVar1 = F_00cc2aa0(1,pRVar2,0);
  if (bVar1 == 0) {
    *(undefined4 *)(param_1 + 0x344) = 0xffffffff;
LAB_00cdd0f4: ;
    param_1[0x42c] = (undefined1)0x1;
  }
  else {
    F_00cd8640(*(undefined * PTR32 *)pRVar2 GEN_EDX_ARG,param_1,0);
    *(int *)(param_1 + 700) = *(int *)(param_1 + 700) + 1;
    param_1[0x42] = (undefined1)0x1;
    fVar5 = F_00cd2330(param_1 GEN_EDX_ARG);
    F_00cd8a30(*(undefined4 *)pRVar2 GEN_EDX_ARG,fVar5);
    F_00cdcc10(param_1 GEN_EDX_ARG,0);
    if (*(int *)(param_1 + 0x344) < 0) goto LAB_00cdd0f4;
    F_00cd8390(*(undefined * PTR32 *)pRVar2 GEN_EDX_ARG);
  }
  fVar5 = F_00a4b7d0();
  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x4)) + 0)) = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)(ushort)(*(int *)(gen_frame + 0x4)));
  (*(int *)(gen_frame + 0x0)) = (int)(longlong)
                  TRUNC((float10)((float)GEN_TOF(((float10)*(ushort *)(param_1 + 0x426) * (float10)fVar5))));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  *(int *)(param_1 + 0x428) = (*(int *)(gen_frame + 0x0)) + *(int *)(param_1 + 0x420);
LAB_00cdd148: ;
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)param_1 + 0x138))))(param_1 GEN_EDX_ARG);
  return (char)uVar3 == '\0';
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CycleSound::vf107 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cdd170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdd170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00cdcc10(this GEN_EDX_FWD,1);
  return bVar1;
}

/* ref: FUN_00cdd180 */
GEN_LIB_GS GEN_FRAME uint F_00cdd180(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcdd180u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x808, 8, 4);
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x800)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x804));
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112dcbc)),param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112dc9c)),param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x0)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return extraout_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CycleSound::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdd220(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcdd220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[109])REFP(0x112dcdc));
  F_00cdd3c0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cdd250 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdd250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xcdd250u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  uint uVar1;
  undefined4 * puVar2;
  undefined * this_00;
  undefined4 * puVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  float fVar7;
  
  F_00cd38f0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,0,param_6,(undefined1)param_7);
  iVar6 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112dee4));
  *((undefined1 *)GEN_TOP(((int)this + 0x418))) = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 700)))) {
    puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x2c0)));
    do {
      F_00cd8640(((undefined *)GEN_TOP(*puVar3)) GEN_EDX_ARG,this,iVar6);
      iVar6 = iVar6 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar6 < *((int *)GEN_TOP(((int)this + 700))));
  }
  uVar1 = F_00ce9920(param_3,0,3);
  cVar4 = *((char *)GEN_TOP(((int)this + 0x10)));
  puVar3 = ((undefined4 *)GEN_TOP((uVar1 + 0x10)));
  puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0x39c)));
  iVar6 = 4;
  do {
    if (cVar4 == '\0') {
      *puVar2 = 0xffffffff;
      cVar5 = cVar4;
LAB_00cdd324: ;
      puVar2[2] = 0xffffffff;
LAB_00cdd32b: ;
      puVar2[4] = 0xffffffff;
LAB_00cdd332: ;
      puVar2[6] = 0xffffffff;
      cVar4 = cVar5;
    }
    else {
      puVar2[-1] = puVar3[-4];
      *puVar2 = puVar3[-3];
      cVar5 = '\0';
      if (cVar4 == '\x01') goto LAB_00cdd324;
      puVar2[1] = puVar3[-2];
      puVar2[2] = puVar3[-1];
      cVar5 = '\0';
      if (cVar4 == '\x02') goto LAB_00cdd32b;
      puVar2[3] = *puVar3;
      puVar2[4] = puVar3[1];
      cVar5 = '\0';
      if (cVar4 == '\x03') goto LAB_00cdd332;
      puVar2[5] = puVar3[2];
      puVar2[6] = puVar3[3];
      cVar4 = cVar4 - 4;
    }
    puVar2 = puVar2 + 8;
    puVar3 = puVar3 + 8;
    iVar6 = iVar6 - 1;
    if (iVar6 == 0) {
      if (1 < *((uint *)GEN_TOP((param_2 + 0xc)))) {
        *((undefined4 *)GEN_TOP(((int)this + 0x100))) = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
        this_00 = ((undefined *)GEN_TOP(F_00d2ddd0(((undefined1 *)(gen_frame + 0x0)),(uint)*((byte *)GEN_TOP(((int)this + 0x11))))));
        fVar7 = F_00cbb330(this_00 GEN_EDX_ARG);
        F_00cd2680(this GEN_EDX_ARG,fVar7);
        F_00cbaf10(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        *((undefined1 *)GEN_TOP(((int)this + 0x128))) = 1;
        F_00cd2250(this GEN_EDX_ARG,(float)(float10)1,0);
      }
      return (uint)this;
    }
  } while( true );
}

/* ref: FUN_00cdd3a0 */
GEN_LIB GEN_FRAME unsigned int F_00cdd3a0(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcdd3a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00cdd3c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cdd3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdd3c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112dee4));
  uVar1 = F_00cd3df0(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RandomSound::vf107 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cdd3d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdd3d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  short sVar9;
  undefined * pRVar10;
  int iVar11;
  int iVar12;
  undefined * pRVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  undefined4 uVar17;
  ushort uStack_2a;
  short sStack_26;
  short local_20;
  short sStack_1e;
  int local_18;
  uint local_14;
  undefined * local_c;
  uint local_8;
  
  local_14 = 0;
  uVar3 = F_00a4b890(0,100);
  *(undefined4 *)(this + 0x344) = 0xffffffff;
  uVar5 = F_00d2e4f0();
  if ((int)uVar5 < 0) {
    if (this[0x13] != (undefined1)0x2) {
      uVar5 = 0;
      local_8 = 0;
      sStack_26 = -1;
      if (this[0x10] == (undefined1)0x0) {
LAB_00cdd73d: ;
        sVar9 = 0;
        sVar4 = -1;
        local_14 = 0;
        if (this[0x10] != (undefined1)0x0) {
          pRVar10 = this + 0x39e;
          do {
            uVar5 = *(uint *)(pRVar10 - 6);
            local_20 = (short)*(undefined4 *)(pRVar10 - 2);
            sStack_1e = (short)((uint)*(undefined4 *)(pRVar10 - 2) >> 0x10);
            if (((sStack_1e != sVar4) &&
                (bVar16 = sVar9 == local_20, sVar4 = sStack_1e, sVar9 = local_20, bVar16)) &&
               (local_18 = local_14, (int)local_14 < (int)(uint)(byte)this[0x10])) {
              pRVar13 = this + local_8 * 4 + 0x2c0;
              local_c = pRVar10;
              do {
                if (sStack_1e != *(short *)local_c) break;
                uVar15 = uVar5 & 0xffff;
                uVar6 = uVar15;
                uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x10))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,uVar15);
                F_00cd78c0(*(undefined * PTR32 *)pRVar13 GEN_EDX_ARG,uVar7,uVar6);
                if ((uVar5 & 0x40000000) == 0) {
                  piVar1 = *(int * PTR32 *)(this + 0xc);
                  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x15c))))(this GEN_EDX_ARG,(uint)(byte)this[0x2b8]);
                  uVar7 = uVar7 & 0xff;
                  uVar6 = uVar5 >> 0x10;
                  uVar8 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
                  F_00cd7980(*(undefined * PTR32 *)pRVar13 GEN_EDX_ARG,uVar8,uVar6,uVar7);
                }
                local_8 = local_8 + 1;
                pRVar13 = pRVar13 + 4;
                if (*(int *)(this + 0x344) < 0) {
                  *(uint *)(this + 0x344) = uVar15;
                }
                local_c = local_c + 8;
                local_18 = local_18 + 1;
              } while (local_18 < (int)(uint)(byte)this[0x10]);
            }
            local_14 = local_14 + 1;
            pRVar10 = pRVar10 + 8;
          } while ((int)local_14 < (int)(uint)(byte)this[0x10]);
        }
        if ((int)local_8 < *(int *)(this + 700)) {
          pRVar10 = this + local_8 * 4 + 0x2c0;
          uVar5 = local_8;
          do {
            F_00cd8a90(*(undefined * PTR32 *)pRVar10 GEN_EDX_ARG);
            *(undefined4 *)pRVar10 = 0;
            uVar5 = uVar5 + 1;
            pRVar10 = pRVar10 + 4;
          } while ((int)uVar5 < *(int *)(this + 700));
        }
        *(uint *)(this + 700) = local_8;
        return 1;
      }
      pRVar10 = this + 0x398;
LAB_00cdd580: ;
      local_20 = (short)*(uint *)(pRVar10 + 4);
      sStack_1e = (short)(*(uint *)(pRVar10 + 4) >> 0x10);
      if (sStack_1e != sStack_26) {
        uVar6 = (uint)local_20;
        if ((uVar6 != (int)(short)uVar5 && -1 < (int)(uVar6 - (int)(short)uVar5)) &&
           (((uint)(int)(short)uVar3 <= uVar6 || (this[0x418] != (undefined1)0x0)))) {
          piVar1 = *(int * PTR32 *)(this + 0xc);
          *(uint *)(this + 0x344) = *(uint *)pRVar10 & 0xffff;
          uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x20))))(piVar1 GEN_EDX_ARG);
          if (uVar5 < 2) {
            local_c = ((undefined *)GEN_TOP(0x0));
          }
          else {
            local_c = ((undefined *)GEN_TOP((uint)*(ushort *)(this + 0x1c)));
          }
          uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x58))))(piVar1 GEN_EDX_ARG,local_c);
          if (*(uint *)(this + 0x344) == uVar5) {
            iVar14 = 0;
            local_14 = 0;
            iVar11 = 0;
            if (this[0x10] != (undefined1)0x0) {
              do {
                if (*(ushort *)(this + iVar11 * 8 + 0x398) != uVar5) {
                  if (iVar11 == 0) {
                    iVar12 = (int)*(short *)(this + 0x39c);
                  }
                  else {
                    iVar12 = (int)*(short *)(this + iVar11 * 8 + 0x39c) -
                             (int)*(short *)(this + iVar11 * 8 + 0x394);
                  }
                  if (iVar14 < iVar12) {
                    iVar14 = iVar12;
                    local_14 = iVar11;
                  }
                }
                iVar11 = iVar11 + 1;
              } while (iVar11 < (int)(uint)(byte)this[0x10]);
            }
            sStack_1e = (short)((uint)*(undefined4 *)(this + local_14 * 8 + 0x39c) >> 0x10);
            *(uint *)(this + 0x344) = *(uint *)(this + local_14 * 8 + 0x398) & 0xffff;
          }
          if ((int)local_14 < (int)(uint)(byte)this[0x10]) {
            pRVar10 = this + 0x2c0;
            pRVar13 = this + local_14 * 8 + 0x398;
            do {
              if (sStack_1e != *(short *)(pRVar13 + 6)) break;
              uVar5 = *(uint *)pRVar13;
              uVar6 = uVar5 >> 0x10;
              uVar7 = uVar5 & 0xffff;
              sStack_1e = (short)(*(uint *)(pRVar13 + 4) >> 0x10);
              uVar15 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x10))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,uVar7);
              F_00cd78c0(*(undefined * PTR32 *)pRVar10 GEN_EDX_ARG,uVar15,uVar7);
              if ((uVar5 & 0x40000000) == 0) {
                piVar2 = *(int * PTR32 *)(this + 0xc);
                uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x15c))))(this GEN_EDX_ARG,(uint)(byte)this[0x2b8]);
                uVar5 = uVar5 & 0xff;
                uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
                F_00cd7980(*(undefined * PTR32 *)pRVar10 GEN_EDX_ARG,uVar7,uVar6,uVar5);
              }
              local_8 = local_8 + 1;
              local_14 = local_14 + 1;
              pRVar10 = pRVar10 + 4;
              pRVar13 = pRVar13 + 8;
            } while ((int)local_14 < (int)(uint)(byte)this[0x10]);
          }
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x5c))))(piVar1 GEN_EDX_ARG,local_c,*(undefined4 *)(this + 0x344));
          goto LAB_00cdd73d;
        }
        uVar5 = *(uint *)(pRVar10 + 4);
        sStack_26 = (short)(uVar5 >> 0x10);
      }
      local_14 = local_14 + 1;
      pRVar10 = pRVar10 + 8;
      if ((int)(uint)(byte)this[0x10] <= (int)local_14) goto LAB_00cdd73d;
      goto LAB_00cdd580;
    }
    if (this[0x10] != (undefined1)0x0) {
      pRVar10 = this + 0x398;
      iVar14 = 0;
      while( true ) {
        local_14 = 0;
        if (0 < iVar14) {
          local_14 = *(uint *)(pRVar10 - 4);
        }
        uVar5 = *(uint *)(pRVar10 + 4);
        uStack_2a = (ushort)(*(uint *)((int)(uintptr_t)pRVar10) >> 0x10);
        if (uVar5 == 0xffffffff) break;
        if ((uVar5 != local_14) &&
           (((uint)(int)(short)uVar3 <= uVar5 || (this[0x418] != (undefined1)0x0)))) {
          piVar1 = *(int * PTR32 *)(this + 0xc);
          *(uint *)(this + 0x344) = *(uint *)pRVar10 & 0xffff;
          uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x20))))(piVar1 GEN_EDX_ARG);
          if (uVar5 < 2) {
            local_8 = 0;
          }
          else {
            local_8 = (uint)*(ushort *)(this + 0x1c);
          }
          uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x58))))(piVar1 GEN_EDX_ARG,local_8);
          if (*(uint *)(this + 0x344) == uVar5) {
            do {
              iVar14 = (iVar14 + 1) % (int)(uint)(byte)this[0x10];
              iVar11 = 0;
              if (0 < iVar14) {
                iVar11 = *(int *)(this + iVar14 * 8 + 0x394);
              }
              uStack_2a = (ushort)(*(uint *)(this + iVar14 * 8 + 0x398) >> 0x10);
            } while (*(int *)(this + iVar14 * 8 + 0x39c) == iVar11);
            *(uint *)(this + 0x344) = *(uint *)(this + iVar14 * 8 + 0x398) & 0xffff;
          }
          uVar17 = *(undefined4 *)(this + 0x344);
          uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x10))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,uVar17);
          F_00cd78c0(*(undefined * PTR32 *)(this + 0x2c0) GEN_EDX_ARG,uVar5,uVar17);
          if ((uStack_2a & 0x4000) == 0) {
            piVar2 = *(int * PTR32 *)(this + 0xc);
            uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x15c))))(this GEN_EDX_ARG,(uint)(byte)this[0x2b8]);
            uVar5 = uVar5 & 0xff;
            uVar6 = (uint)uStack_2a;
            uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x14))))(piVar2 GEN_EDX_ARG);
            F_00cd7980(*(undefined * PTR32 *)(this + 0x2c0) GEN_EDX_ARG,uVar7,uVar6,uVar5);
          }
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x5c))))(piVar1 GEN_EDX_ARG,local_8,*(undefined4 *)(this + 0x344));
          return 1;
        }
        iVar14 = iVar14 + 1;
        pRVar10 = pRVar10 + 8;
        if ((int)(uint)(byte)this[0x10] <= iVar14) {
          return 1;
        }
      }
    }
  }
  else if ((int)uVar5 < (int)(uint)(byte)this[0x10]) {
    uVar5 = *(uint *)(this + uVar5 * 8 + 0x398);
    uVar7 = uVar5 & 0xffff;
    uVar6 = uVar5 >> 0x10;
    *(uint *)(this + 0x344) = uVar7;
    uVar15 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x10))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,uVar7);
    F_00cd78c0(*(undefined * PTR32 *)(this + 0x2c0) GEN_EDX_ARG,uVar15,uVar7);
    if ((uVar5 & 0x40000000) == 0) {
      piVar1 = *(int * PTR32 *)(this + 0xc);
      uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x15c))))(this GEN_EDX_ARG,(uint)(byte)this[0x2b8]);
      uVar5 = uVar5 & 0xff;
      uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
      F_00cd7980(*(undefined * PTR32 *)(this + 0x2c0) GEN_EDX_ARG,uVar7,uVar6,uVar5);
    }
  }
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RandomSound::vf104 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cdd930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdd930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*(int *)(this + 0x344) < 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,0);
    return uVar1;
  }
  uVar1 = F_00cd1ff0((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RandomSound::vf54 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdd950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdd950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  undefined * pRVar2;
  
  uVar1 = 0;
  if ((byte)this[0x10] != 0) {
    pRVar2 = this + 0x398;
    do {
      if ((*(uint *)pRVar2 & 0xffff) == *(uint *)(this + 0x344)) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      pRVar2 = pRVar2 + 8;
    } while ((int)uVar1 < (int)(uint)(byte)this[0x10]);
  }
  return 0xffffffff;
}

/* ref: FUN_00cdd9a0 */
GEN_LIB_GS GEN_FRAME uint F_00cdd9a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcdd9a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x808, 8, 4);
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x800)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x804));
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112dec4)),param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112dea4)),param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x0)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return extraout_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::RandomSound::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdda40(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcdda40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[109])REFP(0x112dee4));
  F_00cd3df0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cdda70 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cdda70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined1 param_7, unsigned int gen_a6), GEN_P(undefined1 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xcdda70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined1 param_7 = (undefined1)gen_a6;)
  GEN_PIN(undefined1 param_8 = (undefined1)gen_a7;)
  GEN_FRAME_DECL_GS(0x2c, 4, 4);
  float10 fVar1;
  undefined4 * puVar2;
  int iVar3;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x24)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x28));
  (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),param_7);
  F_00cd38f0(param_1 GEN_EDX_FWD,param_2,param_3,param_4,param_5,param_6,1,(*(undefined4 *)(gen_frame + 0x0)),param_8);
  iVar3 = 0;
  *param_1 = (*(undefined * PTR32 (*)[109])REFP(0x112e0e4));
  if (0 < (int)param_1[0xaf]) {
    puVar2 = param_1 + 0xb0;
    do {
      fVar1 = (float10)0;
      ((float *)(gen_frame + 0x4))[0] = (float)fVar1;
      ((float *)(gen_frame + 0x4))[1] = (float)fVar1;
      ((float *)(gen_frame + 0x4))[2] = (float)fVar1;
      ((float *)(gen_frame + 0x4))[3] = (float)fVar1;
      (*(float *)(gen_frame + 0x14)) = (float)fVar1;
      (*(float *)(gen_frame + 0x18)) = (float)fVar1;
      (*(float *)(gen_frame + 0x1c)) = (float)fVar1;
      (*(float *)(gen_frame + 0x20)) = (float)fVar1;
      if (iVar3 < 2) {
        ((float *)(gen_frame + 0x4))[(int)(iVar3)] = (float)(float10)1;
      }
      else {
        ((float *)(gen_frame + 0x4))[(int)(iVar3 + 2)] = (float)(float10)1;
      }
      F_00cd66f0(((undefined *)GEN_TOP(*puVar2)) GEN_EDX_ARG,((float *)(gen_frame + 0x4)));
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < (int)param_1[0xaf]);
  }
  return (uint)param_1;
}

/* ref: FUN_00cddb30 */
GEN_LIB GEN_FRAME unsigned int F_00cddb30(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcddb30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Surround4chSound::vf17 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cddb60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcddb60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Surround4chSound::vf21 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cddb70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcddb70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00cddb80 */
GEN_LIB_GS GEN_FRAME uint F_00cddb80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcddb80u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x808, 8, 4);
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x800)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x804));
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112e0c4)),param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112e0a4)),param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x0)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return extraout_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Surround4chSound::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cddc20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcddc20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[109])REFP(0x112e0e4));
  F_00cd3df0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cddc50 */
GEN_LIB GEN_FRAME unsigned int F_00cddc50(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcddc50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00cddc70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cddc70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xcddc70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[7];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  gen_args[6] = gen_a7;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  F_00cd38f0(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),1,(*(undefined4 *)&gen_args[5]),(*((undefined1 *)GEN_TOP(((char *)&(*(uint * PTR32 *)&gen_args[6]) + 0)))));
  iVar2 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112e344));
  *((undefined4 *)GEN_TOP(((int)this + 0x398))) = 0;
  uVar1 = F_00ce9920((*(undefined4 *)&gen_args[2]),0,3);
  (*(uint * PTR32 *)&gen_args[6]) = ((uint *)GEN_TOP(((int)this + 0x39c)));
  do {
    iVar3 = *((int *)GEN_TOP(((int)this + 700))) - iVar2;
    F_00cd8980(*((undefined4 *)GEN_TOP(((int)this + iVar3 * 4 + 700))) GEN_EDX_ARG,(float)(float10)1,0);
    *(*(uint * PTR32 *)&gen_args[6]) = (uint)*((ushort *)GEN_TOP(((uVar1 - 2) + iVar3 * 4)));
    iVar2 = iVar2 + 1;
    (*(uint * PTR32 *)&gen_args[6]) = (*(uint * PTR32 *)&gen_args[6]) + 1;
  } while (iVar2 < 2);
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::EngineSound::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cddd20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcddd20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x80))))(this GEN_EDX_FWD,(undefined4)gen_fl2bits((float)(float10)0),0);
  uVar1 = F_00cd4f90((undefined *)this GEN_EDX_ARG);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::EngineSound::vf32 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cddd40(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcddd40u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  float10 extraout_ST0;
  
  F_00cd2c40(param_1 GEN_EDX_FWD,param_2,param_3);
  iVar1 = *param_1;
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((param_1[0x23] + 0x10))))(param_1 + 0x23);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x1b0))))(param_1,(undefined4)gen_fl2bits((float)extraout_ST0));
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::EngineSound::vf108 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cddd80(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcddd80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  undefined4 in_ecx;
  float10 fVar1;
  float10 fVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  iVar6 = *((int *)GEN_TOP((param_1 + 700))) - 3;
  uVar3 = (uint)((float10)param_2 * (float10)iVar6);
  if (iVar6 <= (int)uVar3) {
    uVar3 = *((int *)GEN_TOP((param_1 + 700))) - 4;
  }
  fVar1 = (float10)1;
  uVar7 = 0;
  fVar8 = GEN_X87((float10)((float)GEN_TOF((fVar1 / ((float10)GEN_TOD((*((int *)GEN_TOP((param_1 + 700))) - 3)))))));
  fVar9 = GEN_X87((float10)((float)GEN_TOF((((float10)param_2 - fVar8 * (float10)(int)uVar3) / fVar8))));
  fVar10 = (float10)*(double *)&REFG(undefined, 0x112e508);
  fVar2 = (float10)*(double *)&REFG(undefined, 0x112e500);
  fVar8 = (float10)*(double *)&REFG(undefined, 0x112e4f8);
  uVar4 = uVar3;
  if (0 < *((int *)GEN_TOP((param_1 + 700))) - 2) {
    puVar5 = ((undefined4 *)GEN_TOP((param_1 + 0x2c0)));
    do {
      in_ecx = *puVar5;
      if (uVar7 == uVar3) {
        F_00cd6af0(in_ecx GEN_EDX_FWD,(float)(fVar1 - fVar9 * fVar9));
        F_00cd6b10(*puVar5 GEN_EDX_ARG,(float)(fVar10 * fVar9 + fVar1));
      }
      else if (uVar7 == uVar3 + 1) {
        F_00cd6af0(in_ecx GEN_EDX_ARG,((float)GEN_TOF((fVar1 - (fVar1 - fVar9) * (fVar1 - fVar9)))));
        F_00cd6b10(*puVar5 GEN_EDX_ARG,(float)(fVar9 * fVar2 + fVar8));
      }
      else {
        F_00cd6af0(in_ecx GEN_EDX_ARG,(float)(float10)0);
      }
      uVar7 = uVar7 + 1;
      uVar4 = *((int *)GEN_TOP((param_1 + 700))) - 2;
      puVar5 = puVar5 + 1;
    } while ((int)uVar7 < (int)uVar4);
  }
  return uVar4;
}

/* ref: FUN_00cddea0 */
GEN_LIB_GS GEN_FRAME uint F_00cddea0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcddea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x808, 8, 4);
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x800)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x804));
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112e320)),param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112e300)),param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x0)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return extraout_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::EngineSound::vf9 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cddf40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcddf40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  code * pcVar1;
  undefined * this_00;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  int local_8;
  
  if (((*(uint *)(this + 0xf8) >> 3 & 1) == 0) &&
     (*(int *)(this + 0x398) = *(int *)(this + 0x398) - param_1, *(int *)(this + 0x398) < 1)) {
    pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)(this + 0x8c) + 0x10)));
    *(undefined4 *)(this + 0x398) = 0;
    (*pcVar1)(this + 0x8c);
    local_8 = 0;
    do {
      this_00 = *((undefined * PTR32 *)GEN_TOP((this + (*(int *)(this + 700) - local_8) * 4 + 700)));
      iVar6 = (*(int *)(this + 700) - local_8) - 1;
      bVar2 = F_00cd65b0(this_00 GEN_EDX_FWD);
      if (bVar2 != 0) {
        F_00cd7a50(this_00 GEN_EDX_ARG);
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x10))))(*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,iVar6);
        if (uVar4 == 0) {
          if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
            REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcddea0));
          }
          ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112e2f0)),"",((char *)REFP(0x112e2e0)),0x95,
                          ((char *)REFP(0x112e2a4)));
        }
        F_00cd78c0(this_00 GEN_EDX_ARG,uVar4,iVar6);
        uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x14))))
                          (*(int * PTR32 *)(this + 0xc) GEN_EDX_ARG,*(undefined4 *)(this + local_8 * 4 + 0x39c));
        if (uVar4 != 0) {
          uVar5 = (uint)(byte)this[0x2b8];
          extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x15c))))(this);
          F_00cd7980(this_00 GEN_EDX_ARG,uVar4,uVar3 & 0xff,uVar5);
        }
        F_00cd8390(this_00 GEN_EDX_ARG); uVar3 = extraout_ST0;
        F_00cd6af0(this_00 GEN_EDX_ARG,(float)((float10)REFG(double, 0x1088108) +
                                    (float10)(float)extraout_ST0 * (float10)REFG(double, 0x1088108)));
        *(int *)(this + 0x398) =
             (short)(int)(((float10)1 - (float10)(float)extraout_ST0) *
                         (float10)*(double *)&REFG(undefined, 0x10e8718)) + 0x32;
        break;
      }
      local_8 = local_8 + 1;
    } while (local_8 < 2);
  }
  F_00cd50e0((undefined *)this GEN_EDX_ARG,param_1);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x8c) + 0xc))))(this + 0x8c GEN_EDX_ARG);
  if ((char)uVar4 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x8c) + 8))))(this + 0x8c GEN_EDX_ARG,param_1);
    iVar6 = *(int *)this;
    extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x8c) + 0x10))))(this + 0x8c);
    ((code *)*((gen_code32 *)GEN_TOP((iVar6 + 0x1b0))))(this,(undefined4)gen_fl2bits((float)extraout_ST0_00));
  }
  bVar2 = F_00cd28c0(this GEN_EDX_ARG);
  return bVar2 == 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::EngineSound::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cde120(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcde120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[109])REFP(0x112e344));
  F_00cd3df0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cde150 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cde150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xcde150u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  F_00cd38f0(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,(char)param_6,param_7,
               (undefined1)param_8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112e55c));
  if ((char)param_6 != '\0') {
    F_00cd77a0(*((undefined4 *)GEN_TOP(((int)this + 0x2c0))) GEN_EDX_ARG,REFG(float, 0x1090708),0);
    F_00cd77a0(*((undefined4 *)GEN_TOP(((int)this + 0x2c4))) GEN_EDX_ARG,(float)(float10)1,0);
  }
  return (uint)this;
}

/* ref: FUN_00cde1c0 */
GEN_LIB GEN_FRAME unsigned int F_00cde1c0(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcde1c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00cde200 */
GEN_LIB_GS GEN_FRAME uint F_00cde200(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcde200u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x808, 8, 4);
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x800)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x804));
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112e53c)),param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112e51c)),param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x0)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return extraout_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StereoSound::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cde2a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcde2a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[109])REFP(0x112e55c));
  F_00cd3df0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cde2d0 */
GEN_LIB GEN_FRAME unsigned int F_00cde2d0(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcde2d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00cde2f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cde2f0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcde2f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  return in_ecx;
}

/* ref: FUN_00cde300 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cde300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcde300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pvVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0xc)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112e83c));
  pvVar1 = ((undefined *)GEN_TOP(F_00ce1c70(piVar2 GEN_EDX_FWD)));
  if (pvVar1 == this) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x90))))(piVar2 GEN_EDX_ARG);
    F_00ce1e80(piVar2 GEN_EDX_ARG,this);
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x7c))))(piVar2 GEN_EDX_ARG)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
  }
  uVar3 = F_00cd3df0(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamSoundEx::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cde350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcde350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (this[0x398] != (undefined1)0x0) {
    if (this[0x13] == (undefined1)0xb) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x1a4))))(this GEN_EDX_FWD);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x80))))(this GEN_EDX_ARG,(undefined4)gen_fl2bits((float)(float10)0),0);
    }
    uVar1 = F_00cd4f90((undefined *)this GEN_EDX_ARG);
    return uVar1;
  }
  F_00cd4720(this GEN_EDX_ARG);
  return 8;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamSoundEx::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cde3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcde3a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cd45f0((undefined *)this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamSoundEx::vf32 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cde3b0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcde3b0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  float10 extraout_ST0;
  
  if (*((char *)GEN_TOP(((int)param_1 + 0x13))) == '\v') {
    F_00cd2c40(param_1 GEN_EDX_FWD,param_2,param_3);
    iVar1 = *param_1;
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((param_1[0x23] + 0x10))))(param_1 + 0x23);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x1b0))))(param_1,(undefined4)gen_fl2bits((float)extraout_ST0));
    return uVar2;
  }
  uVar2 = F_00cd4320(param_1 GEN_EDX_ARG,param_2,param_3);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamSoundEx::vf17 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cde410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcde410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (this[0x13] != (undefined1)0xb) {
    F_00cd23f0((undefined *)this GEN_EDX_FWD,param_1);
    return;
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamSoundEx::vf108 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cde430(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcde430u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc8, 8, 4);
  int * piVar1;
  undefined * this;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  bool bVar5;
  bool bVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  undefined4 uVar12;
  float * pfVar13;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc4);
  (*(uint *)(gen_frame + 0xc0)) = uVar2;
  if (*((char *)GEN_TOP((param_1 + 0x13))) != '\v') {
    uVar2 = F_00cd2c90(param_1 GEN_EDX_FWD,param_2);
    return uVar2;
  }
  iVar3 = 0;
  if (0 < *((int *)GEN_TOP((param_1 + 700)))) {
    puVar4 = ((undefined4 *)GEN_TOP((param_1 + 0x2c0)));
    do {
      fVar7 = (float10)param_2;
      if ((*((uint *)GEN_TOP((param_1 + 0x14))) & 0x5000) == 0) {
        if ((*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x2c0))) + 4))) == 0) ||
           (piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x2c0))) + 4))),
           uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xb0))))(piVar1 GEN_EDX_ARG), (char)uVar2 != '\x04')) {
          uVar2 = *((uint *)GEN_TOP((param_1 + 0x2c0)));
          if ((*((int *)GEN_TOP((uVar2 + 4))) == 0) ||
             (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((uVar2 + 4))) + 0xb0))))(*((int * PTR32 *)GEN_TOP((uVar2 + 4))) GEN_EDX_ARG),
             (char)uVar2 != '\x06')) goto LAB_00cde722;
          fVar7 = (float10)REFG(float, 0x1088068);
          fVar8 = (float10)param_2;
          if (!(fVar7 <= fVar8) == ((GEN_ISNAN(fVar8) || GEN_ISNAN(fVar7)) || fVar8 == fVar7)) {
            fVar11 = (float10)0;
          }
          else {
            fVar11 = GEN_X87((float10)1 - fVar8 * (float10)*(double *)&REFG(undefined, 0x1092098));
          }
          fVar10 = (float10)*(double *)&REFG(undefined, 0x1092098);
          if ((GEN_ISNAN(fVar8) || GEN_ISNAN(fVar7)) || fVar8 < fVar7 == (fVar8 == fVar7)) {
            fVar9 = GEN_X87((float10)1 - (fVar8 - (float10)REFG(double, 0x1088108)) * fVar10);
          }
          else {
            fVar9 = GEN_X87(fVar8 * fVar10);
          }
          if ((GEN_ISNAN(fVar8) || GEN_ISNAN(fVar7)) || fVar8 < fVar7 == (fVar8 == fVar7)) {
            fVar10 = GEN_X87((fVar8 - (float10)REFG(double, 0x1088108)) * fVar10);
          }
          else {
            fVar10 = (float10)0;
          }
          pfVar13 = &(*(float *)(gen_frame + 0x0));
          (*(float *)(gen_frame + 0x0)) = (float)fVar11;
          uVar12 = 6;
          fVar7 = (float10)0;
          (*(float *)(gen_frame + 0x4)) = (float)fVar7;
          (*(float *)(gen_frame + 0x8)) = (float)fVar9;
          (*(float *)(gen_frame + 0xc)) = (float)fVar7;
          (*(float *)(gen_frame + 0x10)) = (float)fVar10;
          (*(float *)(gen_frame + 0x2c)) = (float)fVar10;
          (*(float *)(gen_frame + 0x14)) = (float)fVar7;
          (*(float *)(gen_frame + 0x18)) = (float)fVar7;
          (*(float *)(gen_frame + 0x20)) = (float)fVar7;
          (*(float *)(gen_frame + 0x28)) = (float)fVar7;
          (*(float *)(gen_frame + 0x30)) = (float)fVar7;
          (*(float *)(gen_frame + 0x34)) = (float)fVar7;
          (*(float *)(gen_frame + 0x38)) = (float)fVar7;
          (*(float *)(gen_frame + 0x3c)) = (float)fVar7;
          (*(float *)(gen_frame + 0x40)) = (float)fVar7;
          (*(float *)(gen_frame + 0x44)) = (float)fVar7;
          (*(float *)(gen_frame + 0x48)) = (float)fVar7;
          (*(float *)(gen_frame + 0x4c)) = (float)fVar7;
          (*(float *)(gen_frame + 0x50)) = (float)fVar7;
          (*(float *)(gen_frame + 0x54)) = (float)fVar7;
          (*(float *)(gen_frame + 0x58)) = (float)fVar7;
          (*(float *)(gen_frame + 0x5c)) = (float)fVar7;
          (*(float *)(gen_frame + 0x60)) = (float)fVar7;
          (*(float *)(gen_frame + 0x64)) = (float)fVar7;
          (*(float *)(gen_frame + 0x68)) = (float)fVar7;
          (*(float *)(gen_frame + 0x6c)) = (float)fVar7;
          (*(float *)(gen_frame + 0x70)) = (float)fVar7;
          (*(float *)(gen_frame + 0x74)) = (float)fVar7;
          (*(float *)(gen_frame + 0x78)) = (float)fVar7;
          (*(float *)(gen_frame + 0x7c)) = (float)fVar7;
          (*(float *)(gen_frame + 0x80)) = (float)fVar7;
          (*(float *)(gen_frame + 0x84)) = (float)fVar7;
          (*(float *)(gen_frame + 0x88)) = (float)fVar7;
          (*(float *)(gen_frame + 0x8c)) = (float)fVar7;
          (*(float *)(gen_frame + 0x90)) = (float)fVar7;
          (*(float *)(gen_frame + 0x94)) = (float)fVar7;
          (*(float *)(gen_frame + 0x98)) = (float)fVar7;
          (*(float *)(gen_frame + 0x9c)) = (float)fVar7;
          (*(float *)(gen_frame + 0xa0)) = (float)fVar7;
          (*(float *)(gen_frame + 0xa4)) = (float)fVar7;
          (*(float *)(gen_frame + 0xa8)) = (float)fVar7;
          (*(float *)(gen_frame + 0xac)) = (float)fVar7;
          (*(float *)(gen_frame + 0xb0)) = (float)fVar7;
          (*(float *)(gen_frame + 0xb4)) = (float)fVar7;
          (*(float *)(gen_frame + 0xb8)) = (float)fVar7;
          (*(float *)(gen_frame + 0xbc)) = (float)fVar7;
          (*(float *)(gen_frame + 0x1c)) = (float)fVar11;
          (*(float *)(gen_frame + 0x24)) = (float)fVar9;
        }
        else {
          pfVar13 = &(*(float *)(gen_frame + 0x40));
          uVar12 = 4;
          (*(float *)(gen_frame + 0x40)) = (float)((float10)1 - (float10)param_2);
          fVar7 = (float10)0;
          (*(float *)(gen_frame + 0x44)) = (float)fVar7;
          (*(float *)(gen_frame + 0x4c)) = (float)fVar7;
          (*(float *)(gen_frame + 0x50)) = (float)fVar7;
          (*(float *)(gen_frame + 0x58)) = (float)fVar7;
          (*(float *)(gen_frame + 0x60)) = (float)fVar7;
          (*(float *)(gen_frame + 0x64)) = (float)fVar7;
          (*(float *)(gen_frame + 0x68)) = (float)fVar7;
          (*(float *)(gen_frame + 0x6c)) = (float)fVar7;
          (*(float *)(gen_frame + 0x70)) = (float)fVar7;
          (*(float *)(gen_frame + 0x74)) = (float)fVar7;
          (*(float *)(gen_frame + 0x78)) = (float)fVar7;
          (*(float *)(gen_frame + 0x7c)) = (float)fVar7;
          (*(float *)(gen_frame + 0x80)) = (float)fVar7;
          (*(float *)(gen_frame + 0x84)) = (float)fVar7;
          (*(float *)(gen_frame + 0x88)) = (float)fVar7;
          (*(float *)(gen_frame + 0x8c)) = (float)fVar7;
          (*(float *)(gen_frame + 0x90)) = (float)fVar7;
          (*(float *)(gen_frame + 0x94)) = (float)fVar7;
          (*(float *)(gen_frame + 0x98)) = (float)fVar7;
          (*(float *)(gen_frame + 0x9c)) = (float)fVar7;
          (*(float *)(gen_frame + 0xa0)) = (float)fVar7;
          (*(float *)(gen_frame + 0xa4)) = (float)fVar7;
          (*(float *)(gen_frame + 0xa8)) = (float)fVar7;
          (*(float *)(gen_frame + 0xac)) = (float)fVar7;
          (*(float *)(gen_frame + 0xb0)) = (float)fVar7;
          (*(float *)(gen_frame + 0xb4)) = (float)fVar7;
          (*(float *)(gen_frame + 0xb8)) = (float)fVar7;
          (*(float *)(gen_frame + 0xbc)) = (float)fVar7;
          (*(float *)(gen_frame + 0x48)) = param_2;
          (*(float *)(gen_frame + 0x5c)) = param_2;
          (*(float *)(gen_frame + 0x54)) = (float)((float10)1 - (float10)param_2);
        }
        this = ((undefined *)GEN_TOP(*puVar4));
        (*(float *)(gen_frame + 0x40)) = (*(float *)(gen_frame + 0x54));
        (*(float *)(gen_frame + 0x48)) = (*(float *)(gen_frame + 0x5c));
        uVar2 = F_00cd6720(this GEN_EDX_ARG,uVar12,pfVar13);
      }
      else {
        bVar5 = GEN_ISNAN((float10)0) || GEN_ISNAN(fVar7);
        if (bVar5 == (bVar5 || (float10)0 == fVar7)) {
          bVar5 = GEN_ISNAN((float10)1) || GEN_ISNAN(fVar7);
          if (bVar5 == (bVar5 || (float10)1 == fVar7)) {
            fVar8 = (float10)REFG(float, 0x10928e4);
            bVar5 = GEN_ISNAN(fVar8) || GEN_ISNAN(fVar7);
            bVar6 = bVar5 || fVar8 == fVar7;
            uVar2 = CONCAT22((short)(uVar2 >> 0x10),
                             (ushort)!(fVar7 <= fVar8) << 8 | (ushort)bVar5 << 10 |
                             (ushort)bVar6 << 0xe);
            if (bVar5 != bVar6) {
              uVar2 = F_00cd6e00(*puVar4 GEN_EDX_ARG,2);
            }
          }
          else {
            uVar2 = F_00cd6e00(*puVar4 GEN_EDX_ARG,1);
          }
        }
        else {
          uVar2 = F_00cd6e00(*puVar4 GEN_EDX_ARG,0);
        }
      }
LAB_00cde722: ;
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar3 < *((int *)GEN_TOP((param_1 + 700))));
  }
  return uVar2;
}

/* ref: FUN_00cde750 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cde750(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcde750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined1 *)GEN_TOP((in_ecx + 0x3a4))) = 1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamSoundEx::vf101 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cde760(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcde760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  int in_ecx_00;
  uint uVar1;
  
  in_ecx_00 = *((int *)GEN_TOP((in_ecx + 0xc)));
  if (in_ecx_00 == 0) {
    return 0;
  }
  uVar1 = F_00ce1bf0(in_ecx_00 GEN_EDX_FWD);
  *param_2 = uVar1;
  param_2[1] = *((uint *)GEN_TOP((in_ecx_00 + 0x9c)));
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamSoundEx::vf9 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cde790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcde790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0xa0, 0, 4);
  int * this_00;
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  ushort * puVar5;
  undefined * pvVar6;
  int iVar7;
  char * pcVar8;
  undefined * pSVar9;
  bool bVar10;
  float10 extraout_ST0;
  undefined8 uVar11;
  float fVar12;
  uint * puVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  
  ((uint *)(gen_frame + 0x88))[4] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  this_00 = *(int * PTR32 *)(this + 0xc);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xa0))))(this_00 GEN_EDX_FWD);
  if ((char)uVar2 == '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG,0);
  }
  if (((((*(uint *)(this + 0xf8) >> 3 & 1) == 0) && (this[0x398] == (undefined1)0x0)) &&
      (bVar1 = F_00ce1ec0(this_00 GEN_EDX_ARG,this), bVar1 != 0)) &&
     (((*(byte *)(this_00 + 0x35) & 2) != 0 && ((*(byte *)(this_00 + 0x12) & 2) != 0)))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xc))))(this_00 GEN_EDX_ARG,0);
    F_00cd1df0(this GEN_EDX_ARG,uVar2);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x18))))(this_00 GEN_EDX_ARG,0);
    if (uVar2 != 0) {
      bVar10 = GEN_ISNAN((float10)0) || GEN_ISNAN((float10)*((float *)GEN_TOP((uVar2 + 0x54))));
      this[0x1c5] = (undefined1)
                    (bVar10 == (bVar10 || (float10)0 == (float10)*((float *)GEN_TOP((uVar2 + 0x54)))));
    }
    if (this[0x3a5] == (undefined1)0x0) {
      puVar3 = ((undefined4 *)GEN_TOP(F_00ce9a60(*(undefined4 *)(this + 0xc),this + 0x10)));
      F_00ccb2c0(((char *)(gen_frame + 0xc)) GEN_EDX_ARG);
      if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
        pcVar8 = ((char *)(gen_frame + 0xc));
        for (iVar7 = 0x1f; iVar7 != 0; iVar7 = iVar7 - 1) {
          *(undefined4 *)pcVar8 = *puVar3;
          puVar3 = puVar3 + 1;
          pcVar8 = pcVar8 + 4;
        }
      }
      uVar2 = (*(uint *)(gen_frame + 0x10));
      bVar1 = (byte)((*(uint *)(gen_frame + 0x10)) >> 0x10);
      if (((*(uint *)(gen_frame + 0x10)) >> 0x10 & 4) == 0) {
        if (((*(uint *)(gen_frame + 0x10)) & 0x80000) != 0) {
          (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) = bVar1 | 2;
          iVar7 = *((int *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) * 1000;
          (*(int *)(gen_frame + 0x14)) = iVar7;
          iVar7 = iVar7 + 999;
          goto LAB_00cde8de;
        }
      }
      else {
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) = bVar1 | 2;
        iVar7 = (uint)*(ushort *)(this + 0x1c) + *((int *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) * 1000;
        (*(int *)(gen_frame + 0x14)) = iVar7;
LAB_00cde8de: ;
        (*(uint *)(gen_frame + 0x10)) = uVar2 | 0x20000;
        (*(int *)(gen_frame + 0x18)) = iVar7;
      }
      (*(uint *)(gen_frame + 0x0)) = 0;
      (*(char *)(gen_frame + 0xb)) = '\0';
      if (((*(undefined2 *)((char *)((char *)(gen_frame + 0xc)) + 2)) != 0) && (((char *)(gen_frame + 0xc))[0] != '\0')) {
        pSVar9 = this;
        uVar11 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x118))))(this,&(*(char *)(gen_frame + 0xb)));
        puVar13 = ((uint *)(gen_frame + 0x88));
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x19c))))(this GEN_EDX_ARG);
        (*(uint *)(gen_frame + 0x0)) = F_00cc1e50(((char *)(gen_frame + 0xc)),this + 0x10,uVar2,puVar13,(int)uVar11,
                                (int)((ulonglong)uVar11 >> 0x20),pSVar9);
        if (((*(uint *)(gen_frame + 0x0)) != 0) && (uVar2 = F_00cc65d0(((char *)(gen_frame + 0xc)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x0))), uVar2 != 0)) {
          iVar7 = 0;
          do {
            if (*((char *)GEN_TOP((iVar7 + uVar2))) == '\a') {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG,0);
              goto LAB_00cdec8b;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 1);
        }
      }
      bVar1 = F_00cbf6a0(this + 0x10);
      if (bVar1 == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG,0);
        goto LAB_00cdec8b;
      }
      piVar4 = ((int *)GEN_TOP(F_00cbf660((uint)(byte)this[0x11])));
      if (piVar4 != ((int *)GEN_TOP(0x0))) {
        uVar2 = F_00d2ccd0();
        uVar15 = *((undefined4 *)GEN_TOP((uVar2 + 4)));
        iVar7 = *piVar4;
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xd0))))(this GEN_EDX_ARG);
        uVar2 = F_00cbbd50(((uint *)(gen_frame + 0x88)) GEN_EDX_ARG,uVar2,uVar15);
        ((code *)*((gen_code32 *)GEN_TOP((iVar7 + 8))))(piVar4,uVar2);
        F_00cbbdb0(((uint *)(gen_frame + 0x88)) GEN_EDX_ARG);
      }
      F_00ce9cd0(((char *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x0)),this);
    }
    uVar15 = 3;
    this[0x3a5] = (undefined1)0x0;
    uVar14 = 0;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0xc))))(this_00 GEN_EDX_ARG,0);
    puVar5 = ((ushort *)GEN_TOP(F_00ce9920(uVar2,uVar14,uVar15)));
    *(uint *)(this + 0x344) = (uint)*puVar5;
    if ((1 < (uint)this_00[3]) &&
       (bVar10 = GEN_ISNAN((float10)1) || GEN_ISNAN((float10)*(float *)(this + 0x18)),
       bVar10 == (bVar10 || (float10)1 == (float10)*(float *)(this + 0x18)))) {
      iVar7 = *(int *)this;
      *(undefined4 *)(this + 0x100) = *(undefined4 *)(this + 0x18);
      pvVar6 = ((undefined *)GEN_TOP(F_00d2ddd0(((uint *)(gen_frame + 0x88)),(uint)(byte)this[0x11])));
      fVar12 = F_00cbb330(pvVar6 GEN_EDX_ARG);
      ((code *)*((gen_code32 *)GEN_TOP((iVar7 + 0x5c))))(this,(undefined4)gen_fl2bits(fVar12));
      F_00cbaf10(((uint *)(gen_frame + 0x88)) GEN_EDX_ARG);
      this[0x128] = (undefined1)0x1;
    }
    uVar15 = 0;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x10))))(this_00 GEN_EDX_ARG,0);
    F_00cd78c0(*(undefined * PTR32 *)(this + 0x2c0) GEN_EDX_ARG,uVar2,uVar15);
    F_00cd6e20(*(undefined * PTR32 *)(this + 0x2c0) GEN_EDX_ARG);
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x15c))))(this GEN_EDX_ARG);
    F_00cd8550(*(undefined * PTR32 *)(this + 0x2c0) GEN_EDX_ARG,0,uVar2 & 0xff);
    iVar7 = 1;
    if (1 < *(int *)(this + 700)) {
      pSVar9 = this + 0x2c4;
      do {
        F_00cd87f0(*(undefined * PTR32 *)pSVar9 GEN_EDX_ARG,0);
        iVar7 = iVar7 + 1;
        pSVar9 = pSVar9 + 4;
      } while (iVar7 < *(int *)(this + 700));
    }
    this[0x398] = (undefined1)0x1;
    if ((*(uint *)(this + 0xf8) >> 2 & 1) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG);
    }
  }
  if ((this[0x13] == (undefined1)0xb) &&
     (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x8c) + 0xc))))(this + 0x8c GEN_EDX_ARG), (char)uVar2 != '\0')) {
    iVar7 = *(int *)this;
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x8c) + 0x10))))(this + 0x8c);
    ((code *)*((gen_code32 *)GEN_TOP((iVar7 + 0x1b0))))(this,(undefined4)gen_fl2bits((float)extraout_ST0));
  }
  if (((this[0x3a4] != (undefined1)0x0) && (this[0x398] == (undefined1)0x1)) &&
     ((*(uint *)(this + 0xf8) >> 3 & 1) == 0)) {
    iVar7 = 0;
    if (this[0x3a5] == (undefined1)0x0) {
      ((uint *)(gen_frame + 0x88))[0] = 0;
      ((uint *)(gen_frame + 0x88))[1] = 0;
      ((uint *)(gen_frame + 0x88))[2] = 0;
      ((uint *)(gen_frame + 0x88))[3] = 0;
      bVar1 = F_00cc2aa0(4,((uint *)(gen_frame + 0x88)),0);
      if ((bVar1 == 1) && (0 < *(int *)(this + 700))) {
        pSVar9 = this + 0x2c0;
        do {
          pvVar6 = *(undefined * PTR32 *)pSVar9;
          if (pvVar6 != ((undefined *)GEN_TOP(0x0))) {
            *(undefined * PTR32 *)(pSVar9 + 0xdc) = pvVar6;
            F_00cd87f0(pvVar6 GEN_EDX_ARG,0);
          }
          pvVar6 = ((undefined *)GEN_TOP(((uint *)(gen_frame + 0x88))[(int)(iVar7)]));
          *(undefined * PTR32 *)pSVar9 = pvVar6;
          F_00cd8640(pvVar6 GEN_EDX_ARG,this,iVar7);
          iVar7 = iVar7 + 1;
          pSVar9 = pSVar9 + 4;
        } while (iVar7 < *(int *)(this + 700));
      }
      this[0x3a5] = (undefined1)0x1;
    }
    else if (this[0x3a5] == (undefined1)0x1) {
      (*(char *)(gen_frame + 0xb)) = '\x01';
      (*(int *)(gen_frame + 0x4)) = 0;
      if (0 < *(int *)(this + 700)) {
        pSVar9 = this + 0x39c;
        do {
          if (*(int *)pSVar9 != 0) {
            bVar1 = F_00cd65b0(*(int *)pSVar9 GEN_EDX_ARG);
            if (bVar1 == 0) {
              if (*(int *)pSVar9 != 0) {
                (*(char *)(gen_frame + 0xb)) = '\0';
              }
            }
            else {
              F_00cd8a90(*(undefined * PTR32 *)pSVar9 GEN_EDX_ARG);
              *(int *)pSVar9 = 0;
            }
          }
          (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
          pSVar9 = pSVar9 + 4;
        } while ((*(int *)(gen_frame + 0x4)) < *(int *)(this + 700));
        if ((*(char *)(gen_frame + 0xb)) == '\0') goto LAB_00cdec8b;
      }
      *(undefined2 *)(this + 0x3a4) = 0x200;
      this[0x398] = (undefined1)0x0;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*this_00 + 0x90))))(this_00 GEN_EDX_ARG);
    }
  }
LAB_00cdec8b: ;
  bVar1 = F_00cd50e0((undefined *)this GEN_EDX_ARG,param_1);
  return bVar1;
}

/* ref: FUN_00cdecb0 */
GEN_LIB_GS GEN_FRAME uint F_00cdecb0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcdecb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x808, 8, 4);
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x800)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x804));
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112e818)),param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112e7f8)),param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x0)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return extraout_EAX;
}

/* ref: FUN_00cded50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cded50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xcded50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  F_00cd38f0(this GEN_EDX_FWD,param_1,param_2,0,param_3,param_4,0,param_5,(undefined1)param_7);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[109])REFP(0x112e83c));
  *((undefined1 *)GEN_TOP(((int)this + 0x398))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x3a4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x39c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3a0))) = 0;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_2 + 4))))(param_2 GEN_EDX_ARG);
  if (uVar1 != 3) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcdecb0));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112e770)),"","StreamSoundEx.cpp",0x34,
                    "SQEX::CDev::Engine::Sd::Driver::StreamSoundEx::StreamSoundEx");
  }
  if (param_3 == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcdecb0));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112e7ec)),"","StreamSoundEx.cpp",0x35,
                    "SQEX::CDev::Engine::Sd::Driver::StreamSoundEx::StreamSoundEx");
  }
  iVar3 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 700)))) {
    puVar2 = ((undefined4 *)GEN_TOP(((int)this + 0x2c0)));
    do {
      F_00cd8640(((undefined *)GEN_TOP(*puVar2)) GEN_EDX_ARG,this,iVar3);
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < *((int *)GEN_TOP(((int)this + 700))));
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamSoundEx::vf84 */
GEN_LIB GEN_NOFRAME byte F_00cdee80(void)
{
  GEN_ENTER(0xcdee80u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamSoundEx::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdee90(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcdee90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  
  piVar2 = ((int *)GEN_TOP(param_1[3]));
  *param_1 = (*(undefined * PTR32 (*)[109])REFP(0x112e83c));
  puVar1 = ((undefined4 *)GEN_TOP(F_00ce1c70(piVar2 GEN_EDX_FWD)));
  if (puVar1 == param_1) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x90))))(piVar2 GEN_EDX_ARG);
    F_00ce1e80(piVar2 GEN_EDX_ARG,param_1);
  }
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x7c))))(piVar2 GEN_EDX_ARG)));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
  }
  F_00cd3df0(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cdef00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdef00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcdef00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,uVar1,((char *)REFP(0x112ea34)),0,0,0x10)
  ;
  uVar3 = F_00c46aa0(uVar2,param_1,uVar1);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar2;
  return (uint)uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf43 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cdef70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcdef70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf22 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdef80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcdef80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  F_00ce11f0(this GEN_EDX_FWD);
  uVar1 = *((uint *)GEN_TOP((*(int *)(this + 0xb0) + (param_1 & 0xffff) * 4)));
  F_00ce1230(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf23 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdefb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcdefb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  F_00ce11f0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP((*(int *)(this + 0xb0) + (param_1 & 0xffff) * 4))) = param_2;
  uVar1 = F_00ce1230(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cdefe0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdefe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x50))) - *((int *)GEN_TOP((in_ecx + 0x4c))) >> 2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdeff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcdeff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *(int *)(this + 0x50) - *(int *)(this + 0x4c) >> 2;
  if ((int)uVar1 <= (int)param_1) {
    return 0;
  }
  if (uVar1 <= param_1) {
                    
    F_00c457e7(((char *)REFP(0x1090aa4)));
  }
  return *((uint *)GEN_TOP((*(int *)(this + 0x4c) + param_1 * 4)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdf020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcdf020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *(int *)(this + 100) - *(int *)(this + 0x60) >> 2;
  if ((int)uVar1 <= (int)param_1) {
    return 0;
  }
  if (uVar1 <= param_1) {
                    
    F_00c457e7(((char *)REFP(0x1090aa4)));
  }
  return *((uint *)GEN_TOP((*(int *)(this + 0x60) + param_1 * 4)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdf050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcdf050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_1;
  if ((param_1 & 0x8000) == 0) {
    if ((param_1 & 0x4000) != 0) {
      uVar2 = 0;
    }
  }
  else {
    piVar1 = ((int *)GEN_TOP(F_00d2ccd0()));
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x8c))))(piVar1 GEN_EDX_ARG)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG,param_1 & 0xffff7fff);
      return uVar2;
    }
  }
  uVar3 = *(int *)(this + 0x78) - *(int *)(this + 0x74) >> 2;
  if ((int)uVar3 <= (int)uVar2) {
    return 0;
  }
  if (uVar3 <= uVar2) {
                    
    F_00c457e7(((char *)REFP(0x1090aa4)));
  }
  return *((uint *)GEN_TOP((*(int *)(this + 0x74) + uVar2 * 4)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdf0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcdf0d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *(int *)(this + 0x8c) - *(int *)(this + 0x88) >> 2;
  if ((int)uVar1 <= (int)param_1) {
    return 0;
  }
  if (uVar1 <= param_1) {
                    
    F_00c457e7(((char *)REFP(0x1090aa4)));
  }
  return *((uint *)GEN_TOP((*(int *)(this + 0x88) + param_1 * 4)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdf110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcdf110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = 0;
  F_00ce11f0(this GEN_EDX_FWD);
  puVar1 = *(uint * PTR32 *)(this + 0x4c);
  if (puVar1 != *(uint * PTR32 *)(this + 0x50)) {
    while ((uint)*((ushort *)GEN_TOP((*puVar1 + 0xc))) != param_1 % 1000) {
      puVar1 = puVar1 + 1;
      if (puVar1 == *(uint * PTR32 *)(this + 0x50)) {
        F_00ce1230(this GEN_EDX_ARG);
        return 0;
      }
    }
    uVar2 = *puVar1;
  }
  F_00ce1230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdf180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcdf180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = 0xffffffff;
  F_00ce11f0(this GEN_EDX_FWD);
  piVar2 = *(int * PTR32 *)(this + 0x4c);
  uVar1 = 0;
  if (piVar2 != *(int * PTR32 *)(this + 0x50)) {
    while (uVar3 = uVar1, (uint)*((ushort *)GEN_TOP((*piVar2 + 0xc))) != param_1 % 1000) {
      piVar2 = piVar2 + 1;
      uVar1 = uVar3 + 1;
      if (piVar2 == *(int * PTR32 *)(this + 0x50)) {
        F_00ce1230(this GEN_EDX_ARG);
        return 0xffffffff;
      }
    }
  }
  F_00ce1230(this GEN_EDX_ARG);
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdf1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcdf1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = 0;
  F_00ce11f0(this GEN_EDX_FWD);
  piVar1 = *(int * PTR32 *)(this + 0x4c);
  if (piVar1 != *(int * PTR32 *)(this + 0x50)) {
    while ((uint)*((ushort *)GEN_TOP((*piVar1 + 0xc))) != param_1 % 1000) {
      piVar1 = piVar1 + 1;
      iVar3 = iVar3 + 1;
      if (piVar1 == *(int * PTR32 *)(this + 0x50)) {
        F_00ce1230(this GEN_EDX_ARG);
        return 0;
      }
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG,iVar3);
  }
  F_00ce1230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf18 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cdf270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcdf270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  
  if ((uint)(*(int *)(this + 0x50) - *(int *)(this + 0x4c) >> 2) <= param_1) {
                    
    F_00c457e7(((char *)REFP(0x1090aa4)));
  }
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x4c) + param_1 * 4)));
  if (iVar1 != 0) {
    F_00406810(iVar1);
    if ((uint)(*(int *)(this + 0x50) - *(int *)(this + 0x4c) >> 2) <= param_1) {
                    
      F_00c457e7(((char *)REFP(0x1090aa4)));
    }
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x4c) + param_1 * 4))) = 0;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf19 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cdf2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcdf2d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  
  if ((uint)(*(int *)(this + 100) - *(int *)(this + 0x60) >> 2) <= param_1) {
                    
    F_00c457e7(((char *)REFP(0x1090aa4)));
  }
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x60) + param_1 * 4)));
  if (iVar1 != 0) {
    F_00406810(iVar1);
    if ((uint)(*(int *)(this + 100) - *(int *)(this + 0x60) >> 2) <= param_1) {
                    
      F_00c457e7(((char *)REFP(0x1090aa4)));
    }
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x60) + param_1 * 4))) = 0;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf20 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cdf330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcdf330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  
  if ((uint)(*(int *)(this + 0x78) - *(int *)(this + 0x74) >> 2) <= param_1) {
                    
    F_00c457e7(((char *)REFP(0x1090aa4)));
  }
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x74) + param_1 * 4)));
  if (iVar1 != 0) {
    F_00406810(iVar1);
    if ((uint)(*(int *)(this + 0x78) - *(int *)(this + 0x74) >> 2) <= param_1) {
                    
      F_00c457e7(((char *)REFP(0x1090aa4)));
    }
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x74) + param_1 * 4))) = 0;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf21 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cdf390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcdf390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  
  if ((uint)(*(int *)(this + 0x8c) - *(int *)(this + 0x88) >> 2) <= param_1) {
                    
    F_00c457e7(((char *)REFP(0x1090aa4)));
  }
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x88) + param_1 * 4)));
  if (iVar1 != 0) {
    F_00406810(iVar1);
    if ((uint)(*(int *)(this + 0x8c) - *(int *)(this + 0x88) >> 2) <= param_1) {
                    
      F_00c457e7(((char *)REFP(0x1090aa4)));
    }
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x88) + param_1 * 4))) = 0;
  }
  return 0;
}

/* ref: FUN_00cdf400 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdf400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcdf400u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 uVar1;
  uint uVar2;
  undefined * _Dst;
  
  F_00ce0f90(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x112eacc));
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,uVar1,"CDev.Engine.Sd.SoundDriver",0,0,0x10)
  ;
  F_00c46aa0(uVar2,param_1,uVar1);
  *((byte *)GEN_TOP(((int)this + 0x48))) = *((byte *)GEN_TOP(((int)this + 0x48))) | 4;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  _Dst = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                           (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,4000,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xb0))) = _Dst;
  F_00c48350(_Dst,0,4000);
  return (uint)this;
}

/* ref: FUN_00cdf510 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdf510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcdf510u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined * _Dst;
  
  F_00ce0ff0(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x112eacc));
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  _Dst = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                           (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,4000,((char *)REFP(0x112ea18)),0,0,0x10)));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0xb0))) = _Dst;
  F_00c48350(_Dst,0,4000);
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf13 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cdf5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcdf5d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00ce02d0(this + 0x4c,param_1,param_2,param_3);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf14 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cdf5f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcdf5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00ce02d0(this + 0x60,param_1,param_2,param_3);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf16 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cdf610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcdf610u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00ce02d0(this + 0x88,param_1,param_2,param_3);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf15 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cdf630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcdf630u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00ce02d0(this + 0x74,param_1,param_2,param_3);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf44 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cdf650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcdf650u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00ce02d0(this + 0x9c,param_1,param_2,param_3);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdf670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdf670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_8;
  
  iVar1 = *(int *)(this + 4);
  uVar3 = (uint)*((ushort *)GEN_TOP((iVar1 + 0xe)));
  uVar2 = F_00ce1300(this GEN_EDX_FWD);
  F_00ce0470(this GEN_EDX_ARG,this + 0x4c,(uint)*((ushort *)GEN_TOP((iVar1 + uVar3))),uVar2 + uVar3 + *(int *)(this + 4))
  ;
  F_00ce0470(this GEN_EDX_ARG,this + 0x60,(uint)*((ushort *)GEN_TOP((iVar1 + 2 + uVar3))),
               *((int *)GEN_TOP((iVar1 + 8 + uVar3))) + *(int *)(this + 4));
  F_00ce0470(this GEN_EDX_ARG,this + 0x74,(uint)*((ushort *)GEN_TOP((iVar1 + 4 + uVar3))),
               *((int *)GEN_TOP((iVar1 + 0xc + uVar3))) + *(int *)(this + 4));
  if (1 < *(uint *)(this + 0xc)) {
    F_00ce0470(this GEN_EDX_ARG,this + 0x88,(uint)*((ushort *)GEN_TOP((iVar1 + uVar3))),
                 *((int *)GEN_TOP((iVar1 + 0x10 + uVar3))) + *(int *)(this + 4));
  }
  *(uint *)(this + 0x10) = (uint)*((ushort *)GEN_TOP((iVar1 + 6 + uVar3)));
  *(undefined4 *)(this + 0x1c) = *((undefined4 *)GEN_TOP((iVar1 + 0x10)));
  uVar2 = F_00cc8520(this);
  local_8 = 0;
  if (*((short *)GEN_TOP((iVar1 + uVar3))) != 0) {
    do {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,local_8);
      *((undefined1 *)GEN_TOP((uVar2 + 0xf))) = 0xff;
      uVar2 = local_8 + 1;
      local_8 = uVar2;
    } while ((int)uVar2 < (int)(uint)*((ushort *)GEN_TOP((iVar1 + uVar3))));
  }
  return uVar2;
}

/* ref: FUN_00cdf740 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdf740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdf740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  int iVar1;
  int * piVar2;
  int * piVar3;
  
  if (*((int *)GEN_TOP(((int)this + 4))) == 0) {
    ((int *)(gen_frame + 0x4))[0] = (int)this + 0x4c;
    ((int *)(gen_frame + 0x4))[1] = (int)this + 0x60;
    ((int *)(gen_frame + 0x4))[2] = (int)this + 0x88;
    ((int *)(gen_frame + 0x4))[3] = (int)this + 0x9c;
    (*(int *)(gen_frame + 0x14)) = 0;
    do {
      piVar2 = ((int *)GEN_TOP(((int *)(gen_frame + 0x4))[(int)((*(int *)(gen_frame + 0x14)))]));
      piVar3 = ((int *)GEN_TOP(*piVar2));
      iVar1 = (*(int *)(gen_frame + 0x14));
      if (piVar3 != ((int *)GEN_TOP(piVar2[1]))) {
        do {
          if (*piVar3 != 0) {
            F_00406810(*piVar3);
          }
          piVar3 = piVar3 + 1;
          iVar1 = (*(int *)(gen_frame + 0x14));
        } while (piVar3 != ((int *)GEN_TOP(piVar2[1])));
      }
      (*(int *)(gen_frame + 0x14)) = iVar1 + 1;
    } while (iVar1 + 1 < 4);
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x74)));
    if (piVar2 != *((int * PTR32 *)GEN_TOP(((int)this + 0x78)))) {
      do {
        if (*piVar2 != 0) {
          F_00406810(*piVar2);
        }
        piVar2 = piVar2 + 1;
      } while (piVar2 != *((int * PTR32 *)GEN_TOP(((int)this + 0x78))));
    }
  }
  else {
    F_00406810(*((int *)GEN_TOP(((int)this + 4))));
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  }
  piVar2 = ((int *)GEN_TOP(((int)this + 0x4c)));
  if (&(*(int *)(gen_frame + 0x0)) != piVar2) {
    iVar1 = *piVar2;
    *piVar2 = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
    if (iVar1 != 0) {
      F_00406810(iVar1);
    }
  }
  piVar2 = ((int *)GEN_TOP(((int)this + 0x60)));
  if (&(*(int *)(gen_frame + 0x0)) != piVar2) {
    iVar1 = *piVar2;
    *piVar2 = 0;
    *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
    if (iVar1 != 0) {
      F_00406810(iVar1);
    }
  }
  piVar2 = ((int *)GEN_TOP(((int)this + 0x74)));
  if (&(*(int *)(gen_frame + 0x0)) != piVar2) {
    iVar1 = *piVar2;
    *piVar2 = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
    if (iVar1 != 0) {
      F_00406810(iVar1);
    }
  }
  piVar2 = ((int *)GEN_TOP(((int)this + 0x88)));
  if (&(*(int *)(gen_frame + 0x0)) != piVar2) {
    iVar1 = *piVar2;
    *piVar2 = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
    if (iVar1 != 0) {
      F_00406810(iVar1);
    }
  }
  piVar3 = ((int *)GEN_TOP(((int)this + 0x9c)));
  piVar2 = &(*(int *)(gen_frame + 0x0));
  if (piVar2 != piVar3) {
    iVar1 = *piVar3;
    *piVar3 = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
    piVar2 = ((int *)GEN_TOP(0x0));
    if (iVar1 != 0) {
      piVar2 = ((int *)GEN_TOP(F_00406810(iVar1)));
    }
  }
  return (uint)piVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdf890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcdf890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 uVar1;
  code * pcVar2;
  uint uVar3;
  
  F_00cc8590(this);
  F_00cdf740(this GEN_EDX_ARG);
  uVar1 = *((undefined4 *)GEN_TOP((param_1 + 0x10)));
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,uVar1,((char *)REFP(0x112ea34)),0,0,0x10)
  ;
  F_00c46aa0(uVar3,param_1,uVar1);
  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)this + 8)));
  *(uint *)(this + 4) = uVar3;
  uVar3 = (*pcVar2)(this);
  return uVar3;
}

/* ref: FUN_00cdf910 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cdf910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdf910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x112eacc));
  F_00cdf740(this GEN_EDX_FWD);
  if (*((int *)GEN_TOP(((int)this + 0xb0))) != 0) {
    F_00406810(*((int *)GEN_TOP(((int)this + 0xb0))));
  }
  if (*((int *)GEN_TOP(((int)this + 0x9c))) != 0) {
    F_00406810(*((int *)GEN_TOP(((int)this + 0x9c))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
  if (*((int *)GEN_TOP(((int)this + 0x88))) != 0) {
    F_00406810(*((int *)GEN_TOP(((int)this + 0x88))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  if (*((int *)GEN_TOP(((int)this + 0x74))) != 0) {
    F_00406810(*((int *)GEN_TOP(((int)this + 0x74))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  if (*((int *)GEN_TOP(((int)this + 0x60))) != 0) {
    F_00406810(*((int *)GEN_TOP(((int)this + 0x60))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 0x4c))) != 0) {
    uVar1 = F_00406810(*((int *)GEN_TOP(((int)this + 0x4c))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  F_00ce10b0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00cdfa20 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00cdfa20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcdfa20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00406810(param_1);
  }
  return uVar1;
}

/* ref: FUN_00cdfa40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdfa40(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcdfa40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cdfa70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdfa70(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcdfa70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cdfad0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00cdfad0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcdfad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                    (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,param_1 * 4,((char *)REFP(0x112eaa8)),0,0,0x10);
  return uVar1;
}

/* ref: FUN_00cdfb40 */
GEN_LIB GEN_FRAME uint F_00cdfb40(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcdfb40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00cdfb60 */
GEN_LIB GEN_FRAME uint F_00cdfb60(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcdfb60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00cdfb90 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00cdfb90(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcdfb90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00cdfbc0 */
GEN_LIB GEN_FRAME uint F_00cdfbc0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcdfbc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00cdfc10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdfc10(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcdfc10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cdfc20 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cdfc20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcdfc20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00cdfc70 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00cdfc70(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcdfc70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00cdfc90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdfc90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcdfc90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
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

/* ref: FUN_00cdfcc0 */
GEN_LIB GEN_FRAME uint F_00cdfcc0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcdfcc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00cdfcf0 */
GEN_LIB GEN_FRAME uint F_00cdfcf0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcdfcf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00cdfd10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdfd10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcdfd10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  if ((uint)(*((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2) <= param_1) {
                    
    F_00c457e7(((char *)REFP(0x1090aa4)));
  }
  return *(int *)this + param_1 * 4;
}

/* ref: FUN_00cdfd40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdfd40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcdfd40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  if ((uint)(*((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2) <= param_1) {
                    
    F_00c457e7(((char *)REFP(0x1090aa4)));
  }
  return *(int *)this + param_1 * 4;
}

/* ref: FUN_00cdfd80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdfd80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcdfd80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00cdfd90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdfd90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcdfd90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_00cdfda0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cdfda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcdfda0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00cdfde0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00cdfde0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcdfde0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00cdfdf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cdfdf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcdfdf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*((int *)GEN_TOP(((int)this + 4))) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00cdfe50 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00cdfe50(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcdfe50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = param_1[1] - *param_1 >> 2;
  if ((int)uVar1 <= (int)param_2) {
    return 0;
  }
  if (uVar1 <= param_2) {
                    
    F_00c457e7(((char *)REFP(0x1090aa4)));
  }
  return *((uint *)GEN_TOP((*param_1 + param_2 * 4)));
}

/* ref: FUN_00cdfe80 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00cdfe80(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcdfe80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  int iVar1;
  
  if ((uint)(param_1[1] - *param_1 >> 2) <= param_2) {
                    
    F_00c457e7(((char *)REFP(0x1090aa4)));
  }
  iVar1 = *((int *)GEN_TOP((*param_1 + param_2 * 4)));
  if (iVar1 != 0) {
    F_00406810(iVar1);
    if ((uint)(param_1[1] - *param_1 >> 2) <= param_2) {
                    
      F_00c457e7(((char *)REFP(0x1090aa4)));
    }
    *((undefined4 *)GEN_TOP((*param_1 + param_2 * 4))) = 0;
  }
  return 0;
}

/* ref: FUN_00cdfef0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cdfef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdfef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406810(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00cdff20 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cdff20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdff20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *((int *)GEN_TOP(((int)this + 4)))) {
    F_00c46e20(iVar1,*((int *)GEN_TOP(((int)this + 4))),0);
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  }
  return;
}

/* ref: FUN_00cdff50 */
GEN_LIB GEN_FRAME unsigned int F_00cdff50(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcdff50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_00cdff80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cdff80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdff80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406810(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00cdffb0 */
GEN_LIB GEN_FRAME unsigned int F_00cdffb0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcdffb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00cdffe0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cdffe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdffe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406810(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00ce0020 */
GEN_LIB GEN_FRAME unsigned int F_00ce0020(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce0020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf27 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce0050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce0050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf28 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce0060(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce0060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x18)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf32 */
GEN_LIB GEN_NOFRAME uint F_00ce0070(void)
{
  GEN_ENTER(0xce0070u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf33 */
GEN_LIB GEN_NOFRAME unsigned int F_00ce0080(void)
{
  GEN_ENTER(0xce0080u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf34 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00ce0090(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce0090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x48))) >> 1 & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf35 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce00a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce00a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf36 */
GEN_LIB GEN_NOFRAME unsigned int F_00ce00b0(void)
{
  GEN_ENTER(0xce00b0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf37 */
GEN_LIB GEN_NOFRAME unsigned int F_00ce00c0(void)
{
  GEN_ENTER(0xce00c0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf38 */
GEN_LIB GEN_NOFRAME uint F_00ce00d0(void)
{
  GEN_ENTER(0xce00d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf39 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce00e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce00e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf40 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00ce00f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce00f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x48))) >> 7;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf41 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce0100(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce0100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((byte *)GEN_TOP((in_ecx + 0x48))) = *((byte *)GEN_TOP((in_ecx + 0x48))) & 0x7f;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf42 */
GEN_LIB GEN_NOFRAME float F_00ce0110(void)
{
  GEN_ENTER(0xce0110u, 0u, 0u, 0u, 0u);
  return REFG(float, 0x1090708);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf1 */
GEN_LIB GEN_NOFRAME uint F_00ce0120(void)
{
  GEN_ENTER(0xce0120u, 0u, 0u, 0u, 0u);
  return 4;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce0130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce0130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: FUN_00ce0140 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00ce0140(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce0140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00ce0170 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce0170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce0170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  if (0x3fffffff < param_1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  if ((uint)(*((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2) < param_1) {
    puVar4 = ((undefined4 *)GEN_TOP(F_00cdfad0(param_1)));
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar6 = puVar4;
    for (puVar5 = *(undefined4 * PTR32 *)this; puVar5 != puVar1; puVar5 = puVar5 + 1) {
      if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
        *puVar6 = *puVar5;
      }
      puVar6 = puVar6 + 1;
    }
    iVar2 = *(int *)this;
    iVar3 = *((int *)GEN_TOP(((int)this + 4)));
    if (iVar2 != 0) {
      F_00406810(iVar2);
    }
    *(undefined4 * PTR32 *)this = puVar4;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar4 + param_1;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar4 + (iVar3 - iVar2 >> 2);
  }
  return param_1;
}

/* ref: FUN_00ce0200 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce0200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce0200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 4))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (0x3fffffffU - param_1 < uVar1) {
                    
    F_00c4579a(((char *)REFP(0x108497c)));
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (0x3fffffff - (uVar2 >> 1) < uVar2) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar2 + (uVar2 >> 1);
    }
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00ce0170(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00ce0260 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce0260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce0260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00ce0200(this GEN_EDX_FWD,1);
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))) {
      F_00ce0200(this GEN_EDX_ARG,1);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
      *puVar3 = *param_1;
    }
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00ce02d0 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00ce02d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce02d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  uVar4 = (*(undefined4 *)&gen_args[3]);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                    (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,(*(undefined4 *)&gen_args[3]),((char *)REFP(0x112ea50)),0,0,0x10);
  F_00c46aa0(uVar5,(*(int *)&gen_args[2]),uVar4);
  (*(int *)&gen_args[2]) = (int)((*(uint * PTR32 *)&gen_args[0])[1] - *(*(uint * PTR32 *)&gen_args[0])) >> 2;
  if ((*(int *)&gen_args[2]) <= (int)(*(uint *)&gen_args[1])) {
    (*(undefined4 *)&gen_args[3]) = 0;
    do {
      puVar1 = ((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[1]));
      if (&(*(undefined4 *)&gen_args[3]) < puVar1) {
        puVar2 = ((undefined4 *)GEN_TOP(*(*(uint * PTR32 *)&gen_args[0])));
        if (&(*(undefined4 *)&gen_args[3]) < puVar2) goto LAB_00ce03b4;
        if (puVar1 == ((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[2]))) {
          uVar6 = (int)puVar1 - (int)((int)(uintptr_t)puVar2) >> 2;
          if (0x3ffffffe < uVar6) goto LAB_00ce0431;
          uVar6 = uVar6 + 1;
          uVar7 = (int)(*(uint * PTR32 *)&gen_args[0])[2] - (int)((int)(uintptr_t)puVar2) >> 2;
          if (uVar7 < uVar6) {
            if (0x3fffffff - (uVar7 >> 1) < uVar7) {
              uVar7 = 0;
            }
            else {
              uVar7 = uVar7 + (uVar7 >> 1);
            }
            if (uVar7 < uVar6) {
              uVar7 = uVar6;
            }
            F_00ce0170((*(uint * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar7);
          }
        }
        if (((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[1])) != ((undefined4 *)GEN_TOP(0x0))) {
          *((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[1])) =
               *((undefined4 *)GEN_TOP((*(*(uint * PTR32 *)&gen_args[0]) + ((int)&(*(undefined4 *)&gen_args[3]) - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
        }
      }
      else {
LAB_00ce03b4: ;
        if (puVar1 == ((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[2]))) {
          uVar6 = (int)((int)puVar1 - *(*(uint * PTR32 *)&gen_args[0])) >> 2;
          if (0x3ffffffe < uVar6) {
LAB_00ce0431: ;
                    
            F_00c4579a(((char *)REFP(0x108497c)));
          }
          uVar6 = uVar6 + 1;
          uVar7 = (int)((int)(*(uint * PTR32 *)&gen_args[0])[2] - *(*(uint * PTR32 *)&gen_args[0])) >> 2;
          if (uVar7 < uVar6) {
            if (0x3fffffff - (uVar7 >> 1) < uVar7) {
              uVar7 = 0;
            }
            else {
              uVar7 = uVar7 + (uVar7 >> 1);
            }
            if (uVar7 < uVar6) {
              uVar7 = uVar6;
            }
            F_00ce0170((*(uint * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar7);
          }
        }
        if (((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[1])) != ((undefined4 *)GEN_TOP(0x0))) {
          *((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[1])) = 0;
        }
      }
      (*(uint * PTR32 *)&gen_args[0])[1] = (*(uint * PTR32 *)&gen_args[0])[1] + 4;
      (*(int *)&gen_args[2]) = (*(int *)&gen_args[2]) + 1;
    } while ((*(int *)&gen_args[2]) <= (int)(*(uint *)&gen_args[1]));
  }
  if ((uint)((int)((*(uint * PTR32 *)&gen_args[0])[1] - *(*(uint * PTR32 *)&gen_args[0])) >> 2) <= (*(uint *)&gen_args[1])) {
                    
    F_00c457e7(((char *)REFP(0x1090aa4)));
  }
  iVar3 = *((int *)GEN_TOP((*(*(uint * PTR32 *)&gen_args[0]) + (*(uint *)&gen_args[1]) * 4)));
  if (iVar3 != 0) {
    F_00406810(iVar3);
  }
  if ((*(uint *)&gen_args[1]) < (uint)((int)((*(uint * PTR32 *)&gen_args[0])[1] - *(*(uint * PTR32 *)&gen_args[0])) >> 2)) {
    *((uint *)GEN_TOP((*(*(uint * PTR32 *)&gen_args[0]) + (*(uint *)&gen_args[1]) * 4))) = uVar5;
    return 0;
  }
                    
  F_00c457e7(((char *)REFP(0x1090aa4)));
}

/* ref: FUN_00ce0470 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ce0470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce0470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[3];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar1 = (*(int *)&gen_args[1]);
  piVar4 = (*(int * PTR32 *)&gen_args[2]);
  do {
    if (iVar1 == 0) {
      return 0;
    }
    iVar7 = *piVar4 + *((int *)GEN_TOP(((int)this + 4)));
    piVar4 = piVar4 + 1;
    puVar2 = ((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[1]));
    (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(iVar7));
    if (&(*(int * PTR32 *)&gen_args[2]) < puVar2) {
      puVar3 = ((undefined4 *)GEN_TOP(*(*(uint * PTR32 *)&gen_args[0])));
      if (&(*(int * PTR32 *)&gen_args[2]) < puVar3) goto LAB_00ce0512;
      if (puVar2 == ((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[2]))) {
        uVar5 = (int)puVar2 - (int)((int)(uintptr_t)puVar3) >> 2;
        if (0x3ffffffe < uVar5) goto LAB_00ce0573;
        uVar5 = uVar5 + 1;
        uVar6 = (int)(*(uint * PTR32 *)&gen_args[0])[2] - (int)((int)(uintptr_t)puVar3) >> 2;
        if (uVar6 < uVar5) {
          if (0x3fffffff - (uVar6 >> 1) < uVar6) {
            uVar6 = 0;
          }
          else {
            uVar6 = uVar6 + (uVar6 >> 1);
          }
          if (uVar6 < uVar5) {
            uVar6 = uVar5;
          }
          F_00ce0170((*(uint * PTR32 *)&gen_args[0]) GEN_EDX_FWD,uVar6);
        }
      }
      if (((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[1])) != ((undefined4 *)GEN_TOP(0x0))) {
        *((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[1])) =
             *((undefined4 *)GEN_TOP((*(*(uint * PTR32 *)&gen_args[0]) + ((int)&(*(int * PTR32 *)&gen_args[2]) - (int)((int)(uintptr_t)puVar3) >> 2) * 4)));
      }
    }
    else {
LAB_00ce0512: ;
      if (puVar2 == ((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[2]))) {
        uVar5 = (int)((int)puVar2 - *(*(uint * PTR32 *)&gen_args[0])) >> 2;
        if (0x3ffffffe < uVar5) {
LAB_00ce0573: ;
                    
          F_00c4579a(((char *)REFP(0x108497c)));
        }
        uVar5 = uVar5 + 1;
        uVar6 = (int)((int)(*(uint * PTR32 *)&gen_args[0])[2] - *(*(uint * PTR32 *)&gen_args[0])) >> 2;
        if (uVar6 < uVar5) {
          if (0x3fffffff - (uVar6 >> 1) < uVar6) {
            uVar6 = 0;
          }
          else {
            uVar6 = uVar6 + (uVar6 >> 1);
          }
          if (uVar6 < uVar5) {
            uVar6 = uVar5;
          }
          F_00ce0170((*(uint * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar6);
        }
      }
      if (((int *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[1])) != ((int *)GEN_TOP(0x0))) {
        *((int *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[1])) = iVar7;
      }
    }
    (*(uint * PTR32 *)&gen_args[0])[1] = (*(uint * PTR32 *)&gen_args[0])[1] + 4;
    iVar1 = iVar1 - 1;
  } while( true );
}

/* ref: FUN_00ce0580 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ce0580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce0580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (this != param_1) {
    if (*(int *)this != 0) {
      F_00406810(*(int *)this);
    }
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *(undefined4 *)this = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

/* ref: FUN_00ce05d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce05d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce05d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (this != param_1) {
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *(undefined4 *)this = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00ce0610 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce0610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce0610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  if (this != param_1) {
    if (*(int *)this != 0) {
      F_00406810(*(int *)this);
    }
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    *(undefined4 *)this = *param_1;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00ce0660 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce0660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce0660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  if (this != param_1) {
    uVar1 = *(undefined4 *)this;
    *(undefined4 *)this = *param_1;
    *param_1 = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
    param_1[1] = uVar1;
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 8)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1[2];
    param_1[2] = uVar1;
  }
  return (uint)param_1;
}

/* ref: FUN_00ce06a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce06a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce06a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  int iVar1;
  undefined1 * puVar2;
  
  puVar2 = ((undefined1 *)(gen_frame + 0x0));
  if (puVar2 != this) {
    iVar1 = *(int *)this;
    *(undefined4 *)this = 0;
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
    puVar2 = ((undefined1 *)GEN_TOP(0x0));
    if (iVar1 != 0) {
      puVar2 = ((undefined1 *)GEN_TOP(F_00406810(iVar1)));
    }
  }
  return (uint)puVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce06d0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce06d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00cdf910(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ce0700 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce0700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xce0700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00ce0f90(this GEN_EDX_FWD,param_1,param_2);
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[46])REFP(0x112ebcc));
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x60))) = 0;
  return (uint)this;
}

/* ref: FUN_00ce0740 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce0740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xce0740u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00ce0ff0(this GEN_EDX_FWD,param_1,param_2);
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[46])REFP(0x112ebcc));
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x60))) = 0;
  return (uint)this;
}

/* ref: FUN_00ce0780 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce0780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce0780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00ce1050(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x60))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[46])REFP(0x112ebcc));
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  return (uint)this;
}

/* ref: FUN_00ce07c0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce07c0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce07c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[46])REFP(0x112ebcc));
  F_00ce10b0(in_ecx GEN_EDX_FWD);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf2 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce07d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce07d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 4);
  uVar2 = (uint)*((ushort *)GEN_TOP((iVar3 + 0xe)));
  *(undefined2 *)(this + 0x5c) = *((undefined2 *)GEN_TOP((iVar3 + uVar2)));
  *(undefined2 *)(this + 0x5e) = *((undefined2 *)GEN_TOP((iVar3 + 2 + uVar2)));
  *(undefined2 *)(this + 0x60) = *((undefined2 *)GEN_TOP((iVar3 + 4 + uVar2)));
  uVar1 = F_00ce1300(this GEN_EDX_FWD);
  *(uint *)(this + 0x4c) = uVar1 + uVar2;
  *(undefined4 *)(this + 0x50) = *((undefined4 *)GEN_TOP((iVar3 + 8 + uVar2)));
  *(undefined4 *)(this + 0x54) = *((undefined4 *)GEN_TOP((iVar3 + 0xc + uVar2)));
  *(undefined4 *)(this + 0x58) = *((undefined4 *)GEN_TOP((iVar3 + 0x10 + uVar2)));
  *(uint *)(this + 0x10) = (uint)*((ushort *)GEN_TOP((iVar3 + 6 + uVar2)));
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = *((undefined4 *)GEN_TOP((iVar3 + 0x10)));
  F_00cc8520(this);
  if ((((byte)this[0x48] & 8) == 0) && (iVar3 = 0, *(short *)(this + 0x5c) != 0)) {
    do {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,iVar3);
      *((undefined1 *)GEN_TOP((uVar1 + 0xf))) = 0xff;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(ushort *)(this + 0x5c));
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG,0);
  if ((*((byte *)GEN_TOP((uVar1 + 0x6c))) & 2) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,0);
    if (*((char *)GEN_TOP((uVar1 + 1))) == '\x05') {
      *((undefined1 *)GEN_TOP((uVar1 + 1))) = 0xe;
      return uVar1;
    }
    if (*((char *)GEN_TOP((uVar1 + 1))) == '\v') {
      *((undefined1 *)GEN_TOP((uVar1 + 1))) = 0xf;
    }
  }
  return uVar1;
}

/* ref: FUN_00ce08a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce08a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xce08a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + param_2 * 4 + param_1)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce08c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce08c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  byte bVar1;
  int iVar2;
  
  iVar2 = param_1;
  if ((int)(uint)*(ushort *)(this + 0x5c) <= param_1) {
    iVar2 = 0;
  }
  if (*(int *)(this + 0x18) != 0) {
    bVar1 = F_00ce12d0(this GEN_EDX_FWD);
    if (bVar1 == 0) {
      return iVar2 * 0x94 + *(int *)(this + 0x18);
    }
  }
  return *((int *)GEN_TOP((*(int *)(this + 0x4c) + iVar2 * 4 + *(int *)(this + 4)))) + *(int *)(this + 4);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce0910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce0910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  
  iVar1 = param_1;
  if ((int)(uint)*(ushort *)(this + 0x5e) <= param_1) {
    iVar1 = 0;
  }
  return *((int *)GEN_TOP((*(int *)(this + 0x50) + iVar1 * 4 + *(int *)(this + 4)))) + *(int *)(this + 4);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce0940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce0940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if ((param_1 & 0x8000) == 0) {
    if (((param_1 & 0x4000) != 0) &&
       (uVar2 = param_1 & 0xffffbfff, (int)(uint)*(ushort *)(this + 0x60) <= (int)uVar2)) {
      uVar2 = 0;
    }
  }
  else {
    piVar1 = ((int *)GEN_TOP(F_00d2ccd0()));
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x8c))))(piVar1 GEN_EDX_ARG)));
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG,param_1 & 0xffff7fff);
      return uVar2;
    }
  }
  if ((int)(uint)*(ushort *)(this + 0x60) <= (int)uVar2) {
    uVar2 = 0;
  }
  return *((int *)GEN_TOP((*(int *)(this + 0x54) + uVar2 * 4 + *(int *)(this + 4)))) + *(int *)(this + 4);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce09c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce09c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  
  iVar1 = param_1;
  if ((int)(uint)*(ushort *)(this + 0x5c) <= param_1) {
    iVar1 = 0;
  }
  if (*(int *)(this + 0x18) != 0) {
    return iVar1 * 0x94 + 0x10 + *(int *)(this + 0x18);
  }
  return *((int *)GEN_TOP((*(int *)(this + 0x58) + iVar1 * 4 + *(int *)(this + 4)))) + *(int *)(this + 4);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf7 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00ce0a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce0a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  byte * pbVar3;
  uint uVar4;
  ushort * puVar5;
  byte bVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float local_8;
  
  local_8 = (float)(float10)0;
  iVar2 = param_1;
  if ((int)(uint)*(ushort *)(this + 0x5c) <= param_1) {
    iVar2 = 0;
  }
  iVar1 = *(int *)(this + 0x18);
  if (iVar1 == 0) {
    pbVar3 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,iVar2)));
    if (pbVar3 != ((byte *)GEN_TOP(0x0))) {
      uVar4 = F_00ce9790(pbVar3,3);
      if (uVar4 != 0) {
        fVar7 = (float10)*((int *)GEN_TOP((uVar4 + 4)));
        if (*((int *)GEN_TOP((uVar4 + 4))) < 0) {
          fVar7 = GEN_X87(fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110));
        }
        return GEN_X87((float)(fVar7 * (float10)REFG(double, 0x1091858)));
      }
      bVar6 = 0;
      if (*pbVar3 != 0) {
        do {
          puVar5 = ((ushort *)GEN_TOP(F_00ce9920(pbVar3,bVar6,3)));
          if ((puVar5 != ((ushort *)GEN_TOP(0x0))) &&
             (uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG,(uint)*puVar5), uVar4 != 0)) {
            fVar7 = F_00cd69c0(uVar4);
            fVar8 = (float10)local_8;
            fVar9 = (float10)(float)fVar7;
            if (fVar8 <= fVar9 && ((!GEN_ISNAN(fVar9) && !GEN_ISNAN(fVar8)) && fVar9 != fVar8)) {
              local_8 = (float)fVar7;
            }
          }
          bVar6 = bVar6 + 1;
        } while (bVar6 < *pbVar3);
      }
    }
    return local_8;
  }
  fVar7 = (float10)*((int *)GEN_TOP((iVar2 * 0x94 + 0x90 + iVar1)));
  if (*((int *)GEN_TOP((iVar2 * 0x94 + 0x90 + iVar1))) < 0) {
    fVar7 = GEN_X87(fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110));
  }
  return GEN_X87((float)(fVar7 * (float10)REFG(double, 0x1091858)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf43 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce0b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce0b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce0b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce0b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort * puVar4;
  
  uVar3 = param_1 % 1000;
  param_1 = 0xffffffff;
  if (*(int *)(this + 0x18) == 0) {
    F_00ce11f0(this GEN_EDX_FWD);
    uVar1 = 0;
    if (*(short *)(this + 0x5c) != 0) {
      while (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,uVar1), param_1 = uVar1,
            *((ushort *)GEN_TOP((uVar2 + 0xc))) != uVar3) {
        uVar1 = uVar1 + 1;
        if ((int)(uint)*(ushort *)(this + 0x5c) <= (int)uVar1) {
          F_00ce1230(this GEN_EDX_ARG);
          return 0xffffffff;
        }
      }
    }
    F_00ce1230(this GEN_EDX_ARG);
    return param_1;
  }
  uVar1 = 0;
  if (*(ushort *)(this + 0x5c) != 0) {
    puVar4 = ((ushort *)GEN_TOP((*(int *)(this + 0x18) + 0xc)));
    do {
      if (*puVar4 == uVar3) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      puVar4 = puVar4 + 0x4a;
    } while ((int)uVar1 < (int)(uint)*(ushort *)(this + 0x5c));
  }
  return 0xffffffff;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce0bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce0bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = param_1 % 1000;
  uVar2 = *(uint *)(this + 0x18);
  iVar3 = 0;
  param_1 = 0;
  if (uVar2 == 0) {
    F_00ce11f0(this GEN_EDX_FWD);
    if (*(short *)(this + 0x5c) != 0) {
      while (param_1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,iVar3),
            *((ushort *)GEN_TOP((param_1 + 0xc))) != uVar1) {
        iVar3 = iVar3 + 1;
        if ((int)(uint)*(ushort *)(this + 0x5c) <= iVar3) {
          F_00ce1230(this GEN_EDX_ARG);
          return 0;
        }
      }
    }
    F_00ce1230(this GEN_EDX_ARG);
  }
  else {
    iVar3 = 0;
    if (*(ushort *)(this + 0x5c) != 0) {
      do {
        if (*((ushort *)GEN_TOP((uVar2 + 0xc))) == uVar1) {
          return uVar2;
        }
        iVar3 = iVar3 + 1;
        uVar2 = uVar2 + 0x94;
      } while (iVar3 < (int)(uint)*(ushort *)(this + 0x5c));
      return 0;
    }
  }
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce0c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce0c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort * puVar4;
  int iVar5;
  
  iVar5 = *(int *)(this + 0x18);
  iVar1 = 0;
  uVar3 = param_1 % 1000;
  param_1 = 0;
  if (iVar5 == 0) {
    F_00ce11f0(this GEN_EDX_FWD);
    iVar5 = 0;
    if (*(short *)(this + 0x5c) != 0) {
      while( true ) {
        uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,iVar5);
        if (*((ushort *)GEN_TOP((uVar2 + 0xc))) == uVar3) break;
        iVar5 = iVar5 + 1;
        if ((int)(uint)*(ushort *)(this + 0x5c) <= iVar5) {
          F_00ce1230(this GEN_EDX_ARG);
          return 0;
        }
      }
      param_1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG,iVar5);
    }
    F_00ce1230(this GEN_EDX_ARG);
  }
  else if (*(ushort *)(this + 0x5c) != 0) {
    puVar4 = ((ushort *)GEN_TOP((iVar5 + 0xc)));
    do {
      if (*puVar4 == uVar3) {
        return iVar1 * 0x94 + 0x10 + iVar5;
      }
      iVar1 = iVar1 + 1;
      puVar4 = puVar4 + 0x4a;
    } while (iVar1 < (int)(uint)*(ushort *)(this + 0x5c));
    return 0;
  }
  return param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf45 */
GEN_LIB GEN_FRAME ushort GEN_THISCALL F_00ce0d60(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce0d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *((ushort *)GEN_TOP((in_ecx + 0x5c))) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce0d70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce0d70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)*((ushort *)GEN_TOP((in_ecx + 0x5c)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf27 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce0d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce0d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  int local_c;
  
  *(undefined4 *)(this + 0x18) = 0;
  local_c = 0;
  if (*(short *)(this + 0x5c) == 0) {
    *(int *)(this + 0x18) = param_1;
    *(undefined4 *)(this + 4) = 0;
    return 0;
  }
  puVar5 = ((undefined4 *)GEN_TOP((param_1 + 0x90)));
  do {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,local_c)));
    puVar5[-0x24] = *puVar1;
    puVar5[-0x23] = puVar1[1];
    puVar5[-0x22] = puVar1[2];
    puVar5[-0x21] = puVar1[3];
    *((undefined1 *)GEN_TOP(((int)puVar5 - 0x81))) = 0xff;
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_ARG,local_c)));
    puVar6 = puVar5 - 0x20;
    for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar6 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar6 = puVar6 + 1;
    }
    uVar3 = F_00ce9790(puVar1,3);
    if (uVar3 == 0) {
      *puVar5 = 0;
    }
    else {
      *puVar5 = *((undefined4 *)GEN_TOP((uVar3 + 4)));
    }
    puVar5 = puVar5 + 0x25;
    local_c = local_c + 1;
  } while (local_c < (int)(uint)*(ushort *)(this + 0x5c));
  *(int *)(this + 0x18) = param_1;
  *(undefined4 *)(this + 4) = 0;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf12 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce0e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce0e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  F_00cc8590(this);
  *(undefined4 *)(this + 4) = param_1;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf22 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce0eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce0eb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  char cVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x18) != 0) {
    return (int)*((char *)GEN_TOP(((param_1 & 0xffff) * 0x94 + 0xf + *(int *)(this + 0x18))));
  }
  F_00ce11f0(this GEN_EDX_FWD);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,param_1 & 0xffff);
  cVar1 = *((char *)GEN_TOP((uVar2 + 0xf)));
  F_00ce1230(this GEN_EDX_ARG);
  return (int)cVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf23 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce0f00(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce0f00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  uint uVar1;
  
  uVar1 = param_1[6];
  if (uVar1 != 0) {
    *((undefined1 *)GEN_TOP(((param_2 & 0xffff) * 0x94 + 0xf + uVar1))) = param_3;
    return uVar1;
  }
  F_00ce11f0(param_1 GEN_EDX_FWD);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_ARG,param_2 & 0xffff);
  *((undefined1 *)GEN_TOP((uVar1 + 0xf))) = param_3;
  uVar1 = F_00ce1230(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf1 */
GEN_LIB GEN_NOFRAME uint F_00ce0f50(void)
{
  GEN_ENTER(0xce0f50u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce0f60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce0f60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[46])REFP(0x112ebcc));
  F_00ce10b0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ce0f90 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ce0f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xce0f90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x112ec94));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x48))) = 0x82;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  return 0;
}

/* ref: FUN_00ce0ff0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce0ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xce0ff0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x112ec94));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x48))) = 0x82;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  return (uint)this;
}

/* ref: FUN_00ce1050 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce1050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce1050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x112ec94));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 2;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x48))) = 0x82;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  return (uint)this;
}

/* ref: FUN_00ce10b0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce10b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce10b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[45])REFP(0x112ec94));
  return;
}

/* ref: FUN_00ce10c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce10c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce10c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD,param_1)));
  return *puVar1;
}

/* ref: FUN_00ce10e0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00ce10e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce10e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x14))))(this GEN_EDX_FWD,param_1);
  return *((int *)GEN_TOP((uVar1 + 0x14))) != 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf13 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce1100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xce1100u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf14 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce1110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xce1110u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf15 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce1120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xce1120u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf16 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce1130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xce1130u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf17 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce1140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xce1140u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf44 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce1150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xce1150u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf18 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce1160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce1160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf19 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce1170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce1170u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf20 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce1180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce1180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf21 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce1190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce1190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf29 */
GEN_LIB GEN_NOFRAME uint F_00ce11a0(void)
{
  GEN_ENTER(0xce11a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf30 */
GEN_LIB GEN_NOFRAME uint F_00ce11b0(void)
{
  GEN_ENTER(0xce11b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf31 */
GEN_LIB GEN_NOFRAME uint F_00ce11c0(void)
{
  GEN_ENTER(0xce11c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00ce11d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce11d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce11d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x48))) = *((byte *)GEN_TOP((in_ecx + 0x48))) | 0x40;
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00ce11f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce11f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce11f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if ((*((int *)GEN_TOP(((int)this + 0x18))) == 0) && ((*((byte *)GEN_TOP(((int)this + 0x48))) & 0x40) != 0)) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
    if (uVar1 != 0) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
      *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
      return uVar1;
    }
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    return 0;
  }
  return 0;
}

/* ref: FUN_00ce1230 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce1230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  uint uVar1;
  
  if ((*((int *)GEN_TOP(((int)this + 0x18))) == 0) && ((*((byte *)GEN_TOP(((int)this + 0x48))) & 0x40) != 0)) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00ce1250 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce1250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if ((*((byte *)GEN_TOP(((int)this + 0x48))) & 0x40) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
    if (uVar1 != 0) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
      if (uVar1 != 0) {
        *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
        return uVar1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00ce1280 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce1280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  uint uVar1;
  
  if ((*((byte *)GEN_TOP(((int)this + 0x48))) & 0x40) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x14))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00ce12a0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00ce12a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce12a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x18))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
    if (uVar1 == 0) {
      return 0;
    }
    *((uint *)GEN_TOP(((int)this + 4))) = uVar1;
  }
  return 1;
}

/* ref: FUN_00ce12d0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00ce12d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce12d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 0x18))) == 0) {
    return 1;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  if (uVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP(((int)this + 4))) == uVar1;
}

/* ref: FUN_00ce1300 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce1300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00ce94d0(*((undefined4 *)GEN_TOP(((int)this + 0xc))));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf24 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce1320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce1320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  if ((*(int *)(this + 0x18) == 0) && (((byte)this[0x48] & 0x40) != 0)) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x10))))(*(int * PTR32 *)(this + 8) GEN_EDX_FWD);
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 4))))(*(int * PTR32 *)(this + 8) GEN_EDX_ARG);
    }
    *(uint *)(this + 4) = uVar1;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,param_1);
  if (uVar1 != 0) {
    uVar2 = (uint)*((byte *)GEN_TOP((uVar1 + 1)));
  }
  if ((*(int *)(this + 0x18) == 0) && (((byte)this[0x48] & 0x40) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x14))))(*(int * PTR32 *)(this + 8) GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf25 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce1390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce1390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  if ((*(int *)(this + 0x18) == 0) && (((byte)this[0x48] & 0x40) != 0)) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x10))))(*(int * PTR32 *)(this + 8) GEN_EDX_FWD);
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 4))))(*(int * PTR32 *)(this + 8) GEN_EDX_ARG);
    }
    *(uint *)(this + 4) = uVar1;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,param_1);
  if (uVar1 != 0) {
    uVar2 = *(int *)(this + 0x10) * 1000 + (uint)*((ushort *)GEN_TOP((uVar1 + 0xc)));
  }
  if ((*(int *)(this + 0x18) == 0) && (((byte)this[0x48] & 0x40) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x14))))(*(int * PTR32 *)(this + 8) GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf26 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00ce1410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce1410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  byte bVar2;
  
  bVar2 = 0;
  if ((*(int *)(this + 0x18) == 0) && (((byte)this[0x48] & 0x40) != 0)) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x10))))(*(int * PTR32 *)(this + 8) GEN_EDX_FWD);
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 4))))(*(int * PTR32 *)(this + 8) GEN_EDX_ARG);
    }
    *(uint *)(this + 4) = uVar1;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_ARG,param_1);
  if (uVar1 != 0) {
    bVar2 = *((byte *)GEN_TOP((uVar1 + 4))) & 1;
  }
  if ((*(int *)(this + 0x18) == 0) && (((byte)this[0x48] & 0x40) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x14))))(*(int * PTR32 *)(this + 8) GEN_EDX_ARG);
  }
  return bVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf1 */
GEN_LIB GEN_NOFRAME uint F_00ce1480(void)
{
  GEN_ENTER(0xce1480u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce1490(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce1490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[45])REFP(0x112ec94));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ce14c0 */
GEN_LIB GEN_FRAME unsigned int F_00ce14c0(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce14c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf29 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce14e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce14e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x6c)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce14f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce14f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 100)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf11 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce1500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce1500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x18))))(this GEN_EDX_FWD,0);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf33 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce1510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x6c);
  if (*(uint *)(this + 0x70) <= uVar1) {
    if (*(uint *)(this + 0x70) != uVar1 / *(uint *)(this + 0xa4)) {
      *(uint *)(this + 0x70) = uVar1 / *(uint *)(this + 0xa4);
    }
    if (0xfff < (int)uVar1) {
      uVar1 = F_00ce3e30(*(undefined4 *)(this + 100),*(undefined4 *)(this + 0x68),0,0,0x1000,0,
                           *(undefined4 *)(this + 0x14),0);
      *(uint *)(this + 0xac) = uVar1;
      *(undefined4 *)(this + 0xb0) = 0;
      *(undefined4 *)(this + 0xb8) = 0;
    }
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf34 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00ce1570(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((byte *)GEN_TOP((in_ecx + 0x48))) >> 1 & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf35 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce1580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce1580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  *(uint *)(this + 0xbc) = param_1;
  uVar1 = param_1;
  if ((param_1 == 0) && (*(int *)(this + 0xc0) != 0)) {
    if (((byte)this[0x48] & 0x10) == 0) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x90))))(this GEN_EDX_FWD);
    }
    *(undefined4 *)(this + 0xc0) = 0;
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf37 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce15c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xce15c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)(this + 0xbc) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xbc) + 0x178))))
                      (*(int * PTR32 *)(this + 0xbc) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf38 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce15e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce15e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xa4)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf36 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce15f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce15f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cc7f20(*(undefined4 *)(this + 0x14));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf39 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce1600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce1600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cc78c0(param_1);
  return uVar1;
}

/* ref: FUN_00ce1620 */
GEN_LIB GEN_FRAME uint F_00ce1620(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce1620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  int iVar2;
  
  piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((*((ushort *)GEN_TOP((param_1 + 0xe))) + 0xc + param_1))) + param_1)));
  iVar2 = param_1 + *piVar1;
  *param_2 = iVar2;
  return *((int *)GEN_TOP((iVar2 + 0x18))) + 0x20 + *piVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf42 */
GEN_LIB GEN_NOFRAME float F_00ce1650(void)
{
  GEN_ENTER(0xce1650u, 0u, 0u, 0u, 0u);
  return REFG(float, 0x1090708);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce1660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce1660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if ((((byte)this[0x48] & 2) != 0) && (param_1 == 0)) {
    uVar1 = F_00ce08c0((undefined *)this GEN_EDX_FWD,0);
    return uVar1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce1680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce1680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if ((((byte)this[0x48] & 2) != 0) && (param_1 == 0)) {
    uVar1 = F_00ce0910((undefined *)this GEN_EDX_FWD,0);
    return uVar1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce16a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce16a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if ((((byte)this[0x48] & 2) != 0) && (param_1 == 0)) {
    uVar1 = F_00ce0940((undefined *)this GEN_EDX_FWD,0);
    return uVar1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce16c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce16c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if ((((byte)this[0x48] & 2) != 0) && (param_1 == 0)) {
    uVar1 = F_00ce09c0((undefined *)this GEN_EDX_FWD,0);
    return uVar1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf43 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce16e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce16e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf24 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce1700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce1700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if ((((byte)this[0x48] & 2) != 0) && (param_1 == 0)) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,0);
    return (uint)*((byte *)GEN_TOP((uVar1 + 1)));
  }
  return 0xffffffff;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf26 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce1730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce1730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint in_EAX = 0;
  uint uVar1;
  
  if ((((byte)this[0x48] & 2) != 0) && (param_1 == 0)) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,0);
    return *((uint *)GEN_TOP((uVar1 + 4))) & 1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00ce1760 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce1760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xce1760u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  F_00ce0780(this GEN_EDX_FWD,param_1);
  *((undefined4 *)GEN_TOP(((int)this + 100))) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[47])REFP(0x112ee54));
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = param_5;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
  *((undefined1 *)GEN_TOP(((int)this + 0xa0))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = param_6;
  *((byte *)GEN_TOP(((int)this + 0x48))) = *((byte *)GEN_TOP(((int)this + 0x48))) & 0xfd | 8;
  return (uint)this;
}

/* ref: FUN_00ce1810 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce1810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x88);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[47])REFP(0x112ee54));
  *((undefined1 *)GEN_TOP(((int)this + 0xa0))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  if (*((char *)GEN_TOP(((int)this + 0xa0))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  gen_imp_DeleteCriticalSection(lpCriticalSection);
  F_00ce07c0(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_00ce1860 */
GEN_LIB_GS GEN_FRAME uint F_00ce1860(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xce1860u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x808, 8, 4);
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x800)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x804));
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112ee30)),param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112ee10)),param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x0)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return extraout_EAX;
}

/* ref: FUN_00ce1900 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00ce1900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  ushort uVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  
  if (*((int *)GEN_TOP(((int)this + 0xac))) != 0) {
    bVar5 = F_00ce3430(*((int *)GEN_TOP(((int)this + 0xac))));
    if (bVar5 != 0) {
      piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x68)));
      if (*piVar2 == 0x42444553) {
        uVar1 = *((ushort *)GEN_TOP(((int)piVar2 + 0xe)));
        *((int *)GEN_TOP(((int)this + 0xc))) = piVar2[2];
        *((uint *)GEN_TOP(((int)this + 0x1c))) = piVar2[4] - (uint)*((ushort *)GEN_TOP((uVar1 + 0x1c + (int)piVar2)));
        if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
          REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xce1860));
        }
        ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x112edd8),&REFG(undefined, 0x112ed59),((char *)REFP(0x112edc8)),0x10f,
                        ((char *)REFP(0x112ed90)));
      }
      else {
        *((byte *)GEN_TOP(((int)this + 0x48))) = *((byte *)GEN_TOP(((int)this + 0x48))) & 0x7d | 2;
        F_00cc4e60(this,0);
      }
      *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
    }
  }
  if (*((int *)GEN_TOP(((int)this + 0xb0))) == 0) goto LAB_00ce1a2e;
  bVar5 = F_00ce3430(*((int *)GEN_TOP(((int)this + 0xb0))));
  if (bVar5 == 0) goto LAB_00ce1a2e;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x30))))(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x68))));
  iVar3 = *((int *)GEN_TOP(((int)this + 0x70)));
  iVar7 = *((int *)GEN_TOP(((int)this + 0x6c))) - iVar3;
  if (iVar7 == 0) {
LAB_00ce1a23: ;
    *((byte *)GEN_TOP(((int)this + 0x48))) = *((byte *)GEN_TOP(((int)this + 0x48))) | 2;
  }
  else {
    if (*((int *)GEN_TOP(((int)this + 0x1c))) <= *((int *)GEN_TOP(((int)this + 0x6c)))) {
      iVar7 = *((int *)GEN_TOP(((int)this + 0x1c))) - iVar3;
    }
    if (iVar7 < 1) goto LAB_00ce1a23;
    iVar4 = *((int *)GEN_TOP(((int)this + 0xa8)));
    if (iVar4 != 0) {
      iVar7 = (iVar7 / iVar4) * iVar4;
    }
    uVar6 = F_00ce3e30(*((undefined4 *)GEN_TOP(((int)this + 100))),*((int *)GEN_TOP(((int)this + 0x68))) + iVar3,iVar3,0
                         ,iVar7,iVar7 >> 0x1f,*((undefined4 *)GEN_TOP(((int)this + 0x14))),0);
    *((int *)GEN_TOP(((int)this + 0x70))) = *((int *)GEN_TOP(((int)this + 0x70))) + iVar7;
    *((uint *)GEN_TOP(((int)this + 0xb8))) = uVar6;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
LAB_00ce1a2e: ;
  bVar5 = 0;
  if (*((int *)GEN_TOP(((int)this + 0xb8))) != 0) {
    bVar5 = F_00ce3430(*((int *)GEN_TOP(((int)this + 0xb8))));
    if (bVar5 != 0) {
      *((byte *)GEN_TOP(((int)this + 0x48))) = *((byte *)GEN_TOP(((int)this + 0x48))) | 2;
      *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
    }
  }
  return bVar5;
}

/* ref: FUN_00ce1a60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce1a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1a60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  *((undefined1 *)GEN_TOP(((int)this + 0x28))) = 1;
  return (uint)this;
}

/* ref: FUN_00ce1a90 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce1a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1a90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined1 *)GEN_TOP(((int)this + 0x28))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (*((char *)GEN_TOP(((int)this + 0x28))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  }
  return 0;
}

/* ref: FUN_00ce1ac0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce1ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x10);
  *((undefined1 *)GEN_TOP(((int)this + 0x28))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (*((char *)GEN_TOP(((int)this + 0x28))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return (uint)(gen_imp_DeleteCriticalSection(lpCriticalSection));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf1 */
GEN_LIB GEN_NOFRAME uint F_00ce1b00(void)
{
  GEN_ENTER(0xce1b00u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf32 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce1b10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x70)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf46 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce1b20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1b20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x70)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce1b30(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce1b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x22);
  *param_1 = (*(undefined * PTR32 (*)[47])REFP(0x112ee54));
  *(undefined1 *)(param_1 + 0x28) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  if (*(char *)(param_1 + 0x28) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  gen_imp_DeleteCriticalSection(lpCriticalSection);
  F_00ce07c0(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ce1ba0 */
GEN_LIB GEN_FRAME unsigned int F_00ce1ba0(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce1ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00ce1bc0 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00ce1bc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return GEN_X87((float10)((float)GEN_TOF((((float10)GEN_TOD((*((int *)GEN_TOP((in_ecx + 0x84))) - *((int *)GEN_TOP((in_ecx + 0x88)))))) /
                         (float10)*((int *)GEN_TOP((in_ecx + 0x9c)))))));
}

/* ref: FUN_00ce1bf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce1bf0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1bf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x84))) - *((int *)GEN_TOP((in_ecx + 0x88)));
}

/* ref: FUN_00ce1c00 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce1c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  return *((int *)GEN_TOP(((int)this + 0x88))) % *((int *)GEN_TOP(((int)this + 0x9c))) + *((int *)GEN_TOP(((int)this + 0x78)));
}

/* ref: FUN_00ce1c20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce1c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x88)));
  iVar2 = *((int *)GEN_TOP(((int)this + 0xa0)));
  uVar3 = *((int *)GEN_TOP(((int)this + 0x84))) - iVar1;
  if ((-1 < iVar2) && (iVar2 < (int)(iVar1 + uVar3))) {
    uVar3 = iVar2 - iVar1;
  }
  iVar2 = *((int *)GEN_TOP(((int)this + 0x9c)));
  if (iVar2 < (int)(iVar1 % iVar2 + uVar3)) {
    return iVar2 - iVar1 % iVar2;
  }
  return uVar3;
}

/* ref: FUN_00ce1c70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce1c70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1c70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xdc)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce1c80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce1c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if ((*((int *)GEN_TOP((in_ecx + 0x98))) != 0) && (param_2 == 0)) {
    return *((int *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x98))) + 0x50))) + *((int *)GEN_TOP((in_ecx + 0x98)));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce1cb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce1cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  
  if ((*((int *)GEN_TOP((in_ecx + 0x98))) != 0) && (param_2 == 0)) {
    iVar1 = *((int *)GEN_TOP((in_ecx + 0x98)));
    return *((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x38))) + iVar1))) + iVar1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce1ce0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce1ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  
  if ((*((int *)GEN_TOP((in_ecx + 0x98))) != 0) && (param_2 == 0)) {
    iVar1 = *((int *)GEN_TOP((in_ecx + 0x98)));
    return *((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x3c))) + iVar1))) + iVar1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce1d10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce1d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  
  if ((*((int *)GEN_TOP((in_ecx + 0x98))) != 0) && (param_2 == 0)) {
    iVar1 = *((int *)GEN_TOP((in_ecx + 0x98)));
    return *((int *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x40))) + iVar1))) + iVar1;
  }
  return 0;
}

/* ref: FUN_00ce1d40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce1d40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce1d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if ((((*((byte *)GEN_TOP((in_ecx + 0xd4))) & 1) != 0) && (-1 < *((int *)GEN_TOP((in_ecx + 0xa0))))) &&
     (*((int *)GEN_TOP((in_ecx + 0xa0))) <= *((int *)GEN_TOP((in_ecx + 0x88))) + param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ce1d80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce1d80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce1d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if ((((*((byte *)GEN_TOP((in_ecx + 0xd4))) & 1) == 0) && (-1 < *((int *)GEN_TOP((in_ecx + 0xa0))))) &&
     (*((int *)GEN_TOP((in_ecx + 0xa0))) <= *((int *)GEN_TOP((in_ecx + 0x88))) + param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ce1dc0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00ce1dc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1dc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((((*((byte *)GEN_TOP((in_ecx + 0xd4))) & 1) != 0) && (-1 < *((int *)GEN_TOP((in_ecx + 0xa0))))) &&
     (*((int *)GEN_TOP((in_ecx + 0xa0))) <= *((int *)GEN_TOP((in_ecx + 0x88))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ce1df0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00ce1df0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1df0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  if ((((*((byte *)GEN_TOP((in_ecx + 0xd4))) & 1) == 0) && (-1 < *((int *)GEN_TOP((in_ecx + 0xa0))))) &&
     (*((int *)GEN_TOP((in_ecx + 0xa0))) <= *((int *)GEN_TOP((in_ecx + 0x88))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ce1e20 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00ce1e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = 1;
  if (((*((byte *)GEN_TOP(((int)this + 0xd4))) & 1) != 0) ||
     (*((int *)GEN_TOP(((int)this + 0x8c))) < *((int *)GEN_TOP(((int)this + 0x90))))) {
    bVar1 = 0;
  }
  return bVar1;
}

/* ref: FUN_00ce1e80 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00ce1e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce1e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (*((int *)GEN_TOP(((int)this + 0xdc))) == param_1) {
    *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 0;
    if ((*((byte *)GEN_TOP(((int)this + 0x48))) & 0x20) != 0) {
      *((byte *)GEN_TOP(((int)this + 0x48))) = *((byte *)GEN_TOP(((int)this + 0x48))) & 0xdf;
      F_00ce3950(*((undefined4 *)GEN_TOP(((int)this + 0x14))));
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00ce1ec0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00ce1ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce1ec0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (*((int *)GEN_TOP(((int)this + 0xdc))) == 0) {
    *((int *)GEN_TOP(((int)this + 0xdc))) = param_1;
    if ((*((byte *)GEN_TOP(((int)this + 0x48))) & 0x20) == 0) {
      *((byte *)GEN_TOP(((int)this + 0x48))) = *((byte *)GEN_TOP(((int)this + 0x48))) | 0x20;
      F_00ce3fa0(*((undefined4 *)GEN_TOP(((int)this + 0x14))),(int)this + 100);
    }
  }
  return param_1 == *((int *)GEN_TOP(((int)this + 0xdc)));
}

/* ref: FUN_00ce1f10 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ce1f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce1f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *((undefined1 *)GEN_TOP(((int)this + 0xf8))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xe0));
  *((int *)GEN_TOP(((int)this + 0x88))) = *((int *)GEN_TOP(((int)this + 0x88))) + param_1;
  if (*((char *)GEN_TOP(((int)this + 0xf8))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xe0));
  }
  return 0;
}

/* ref: FUN_00ce1f50 */
GEN_LIB GEN_NOFRAME int GEN_THISCALL F_00ce1f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  int extraout_EAX = 0;
  int iVar3;
  int extraout_EAX_00 = 0;
  
  *((undefined1 *)GEN_TOP(((int)this + 0xf8))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xe0));
  iVar3 = extraout_EAX;
  if ((((*((byte *)GEN_TOP(((int)this + 0xd4))) & 1) != 0) && (iVar3 = *((int *)GEN_TOP(((int)this + 0xa0))), -1 < iVar3))
     && (iVar1 = *((int *)GEN_TOP(((int)this + 0x88))), iVar3 <= iVar1)) {
    iVar2 = *((int *)GEN_TOP(((int)this + 0xd8)));
    iVar3 = iVar1 / iVar2;
    *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 0xffffffff;
    if (iVar1 % iVar2 != 0) {
      *((int *)GEN_TOP(((int)this + 0x88))) = (iVar2 - iVar1 % iVar2) + iVar1;
    }
  }
  if (*((char *)GEN_TOP(((int)this + 0xf8))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xe0));
    iVar3 = extraout_EAX_00;
  }
  return iVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::vf33 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce1fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1fc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 SVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  
  SVar1 = this[0x48];
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),SVar1);
  if (((byte)SVar1 & 0x20) == 0) {
    this[0x48] = (undefined1)((byte)SVar1 | 0x20);
    uVar2 = F_00ce3fa0(*(undefined4 *)(this + 0x14),this + 100);
  }
  return uVar2;
}

/* ref: FUN_00ce1fe0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce1fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce1fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint extraout_EAX = 0;
  uint uVar1;
  
  *((undefined1 *)GEN_TOP(((int)this + 0xf8))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xe0));
  *((uint *)GEN_TOP(((int)this + 0x80))) = param_1;
  uVar1 = param_1;
  if (*((char *)GEN_TOP(((int)this + 0xf8))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xe0));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ce2020 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce2020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xce2020u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00ce0780(this GEN_EDX_FWD,param_1);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 100))) =
       (*(undefined * PTR32 (*)[2])REFP(0x112f30c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[46])REFP(0x112f324));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 100))) = (*(undefined * PTR32 (*)[2])REFP(0x112f318));
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = param_2;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x6c))) =
       (*(undefined * PTR32 (*)[3])REFP(0x112a770));
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xb4));
  *((undefined1 *)GEN_TOP(((int)this + 0xcc))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = 1;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xe0));
  *((undefined1 *)GEN_TOP(((int)this + 0xf8))) = 1;
  *((byte *)GEN_TOP(((int)this + 0x48))) = *((byte *)GEN_TOP(((int)this + 0x48))) & 0xfd | 8;
  F_00ce0d60(this GEN_EDX_ARG,1);
  return (uint)this;
}

/* ref: FUN_00ce2110 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce2110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xce2110u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  F_00ce0780(this GEN_EDX_FWD,param_1);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 100))) =
       (*(undefined * PTR32 (*)[2])REFP(0x112f30c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[46])REFP(0x112f324));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 100))) = (*(undefined * PTR32 (*)[2])REFP(0x112f318));
  *((undefined4 *)GEN_TOP(((int)this + 0x68))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x6c))) =
       (*(undefined * PTR32 (*)[3])REFP(0x112a770));
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x74))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = param_5;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x88))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xb4));
  *((undefined1 *)GEN_TOP(((int)this + 0xcc))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0xd0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = 1;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xe0));
  *((undefined1 *)GEN_TOP(((int)this + 0xf8))) = 1;
  *((int *)GEN_TOP(((int)this + 0x68))) = (int)this + 0x6c;
  *((byte *)GEN_TOP(((int)this + 0x48))) = *((byte *)GEN_TOP(((int)this + 0x48))) & 0xfd | 8;
  F_00ce0d60(this GEN_EDX_ARG,1);
  return (uint)this;
}

/* ref: FUN_00ce2210 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce2210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce2210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[46])REFP(0x112f324));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 100))) = (*(undefined * PTR32 (*)[2])REFP(0x112f318));
  if ((*((byte *)GEN_TOP(((int)this + 0x48))) & 0x20) != 0) {
    *((byte *)GEN_TOP(((int)this + 0x48))) = *((byte *)GEN_TOP(((int)this + 0x48))) & 0xdf;
    F_00ce3950(*((undefined4 *)GEN_TOP(((int)this + 0x14))));
  }
  do {
    bVar1 = F_00ce3460(*((undefined4 *)GEN_TOP(((int)this + 0x14))));
  } while (bVar1 != 0);
  gen_imp_DeleteCriticalSection((int)this + 0xe0);
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xb4);
  *((undefined1 *)GEN_TOP(((int)this + 0xcc))) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xac))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  if (*((char *)GEN_TOP(((int)this + 0xcc))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  gen_imp_DeleteCriticalSection(lpCriticalSection);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x6c))) = (*(undefined * PTR32 (*)[3])REFP(0x109726c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 100))) =
       (*(undefined * PTR32 (*)[2])REFP(0x112f30c));
  F_00ce07c0(this GEN_EDX_ARG);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::vf36 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce22c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce22c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pSVar1;
  
  pSVar1 = this + 0xe0;
  this[0xf8] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(pSVar1);
  this[0xf8] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(pSVar1);
  *(undefined4 *)(this + 0x80) = 5;
  if (this[0xf8] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(pSVar1);
  }
  *(uint *)(this + 0xd4) = *(uint *)(this + 0xd4) & 0xfffffffd;
  if (this[0xf8] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(pSVar1);
  }
  return 0;
}

/* ref: FUN_00ce2310 */
GEN_LIB_GS GEN_FRAME uint F_00ce2310(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xce2310u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x808, 8, 4);
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x800)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x804));
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112f2dc)),param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112f2bc)),param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x0)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return extraout_EAX;
}

/* ref: FUN_00ce23b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce23b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce23b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x2c, 4);
  byte * pbVar1;
  undefined1 * puVar2;
  byte bVar3;
  int * extraout_EAX = 0;
  int * extraout_EAX_00 = 0;
  int * extraout_EAX_01 = 0;
  int * extraout_EAX_02 = 0;
  int * extraout_EAX_03 = 0;
  char * pcVar4;
  undefined3 uVar8;
  undefined3 extraout_var = 0;
  int iVar5;
  uint uVar6;
  int * extraout_EAX_04 = 0;
  int * piVar7;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int * piVar13;
  int * piVar14;
  
  piVar7 = *((int * PTR32 *)GEN_TOP(((int)this + 0x1c)));
  switch((unsigned int)(uintptr_t)(piVar7)) {
  case 0x0: ;
    iVar9 = *((int *)GEN_TOP(((int)this + 0x18)));
    if (0x4f < iVar9) {
      if (*((int *)GEN_TOP(((int)this + 0x28))) < 0x50) {
        piVar14 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
        piVar7 = ((int *)GEN_TOP(((int)piVar14 + *((int *)GEN_TOP(((int)this + 0x20))))));
        iVar11 = 0x50 - *((int *)GEN_TOP(((int)this + 0x20)));
        iVar12 = *((int *)GEN_TOP(((int)this + 0x28)));
        (*(int * PTR32 *)(gen_frame + 0x0)) = piVar7;
        (*(int *)(gen_frame + 0x4)) = iVar11;
        (*(int *)(gen_frame + 0x8)) = iVar12;
        (*(int *)(gen_frame + 0xc)) = 0;
        (*(int *)(gen_frame + 0x10)) = iVar9;
        if ((piVar7 < piVar14) || ((uint)((int)piVar14 + iVar9) < (uint)(iVar11 + (int)piVar7))) {
          F_00cc1d20(&(*(undefined1 *)(gen_frame + 0x27)) GEN_EDX_FWD,&REFG(undefined, 0x112efac),"[sd][driver][stream] stream read buffer overrun!!",
                       "StreamBankEx.cpp",0x1b8,
                       "SQEX::CDev::Engine::Sd::Driver::StreamBankEx::OnStreamReadThreadExecute");
        }
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 4))))
                                  (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)))));
        if (piVar7 == ((int *)GEN_TOP(0xffffffff))) {
          *((byte *)GEN_TOP(((int)this - 0x1c))) = *((byte *)GEN_TOP(((int)this - 0x1c))) & 0x7f;
          break;
        }
        piVar14 = piVar7;
        if (*((char *)GEN_TOP(((int)this + 0x94))) != '\0') {
          gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
          piVar14 = extraout_EAX;
        }
        *((int *)GEN_TOP(((int)this + 0x20))) = *((int *)GEN_TOP(((int)this + 0x20))) + (int)piVar7;
        *((int *)GEN_TOP(((int)this + 0x28))) = *((int *)GEN_TOP(((int)this + 0x28))) + (int)piVar7;
        piVar7 = piVar14;
        if (*((char *)GEN_TOP(((int)this + 0x94))) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
          piVar7 = extraout_EAX_00;
        }
        if (*((int *)GEN_TOP(((int)this + 0x28))) < 0x50) break;
      }
      piVar7 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
      if ((*piVar7 == 0x42444553) && (piVar7[1] == 0x46435353)) {
        *((int *)GEN_TOP(((int)this - 0x58))) = piVar7[2];
        *((int *)GEN_TOP(((int)this - 0x48))) = piVar7[4];
        if ((((short)piVar7[0xd] != 1) || ((short)piVar7[0xc] != 1)) ||
           (*((short *)GEN_TOP(((int)piVar7 + 0x32))) != 1)) {
          *((byte *)GEN_TOP(((int)this - 0x1c))) = *((byte *)GEN_TOP(((int)this - 0x1c))) & 0x7d | 2;
          return (uint)piVar7;
        }
        *((uint *)GEN_TOP(((int)this - 0x54))) = (uint)*((ushort *)GEN_TOP(((int)piVar7 + 0x36)));
        piVar7 = ((int *)GEN_TOP(F_00ce1fe0(((undefined *)GEN_TOP(((int)this - 100))) GEN_EDX_ARG,1)));
        break;
      }
    }
    *((byte *)GEN_TOP(((int)this - 0x1c))) = *((byte *)GEN_TOP(((int)this - 0x1c))) & 0x7d | 2;
    return (uint)piVar7;
  case 0x1: ;
    piVar7 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
    iVar9 = ((uint)*(ushort *)(piVar7 + 0xd) * 4 + 0xf & 0xfffffff0) + piVar7[0xf];
    if (*((int *)GEN_TOP(((int)this + 0x28))) < iVar9) {
      piVar14 = ((int *)GEN_TOP(((int)piVar7 + *((int *)GEN_TOP(((int)this + 0x20))))));
      iVar11 = iVar9 - *((int *)GEN_TOP(((int)this + 0x20)));
      (*(int *)(gen_frame + 0x8)) = *((int *)GEN_TOP(((int)this + 0x28)));
      iVar12 = *((int *)GEN_TOP(((int)this + 0x18)));
      (*(int * PTR32 *)(gen_frame + 0x0)) = piVar14;
      (*(int *)(gen_frame + 0x4)) = iVar11;
      (*(int *)(gen_frame + 0xc)) = 0;
      (*(int *)(gen_frame + 0x10)) = iVar12;
      if ((piVar14 < piVar7) || ((uint)((int)piVar7 + iVar12) < (uint)(iVar11 + (int)piVar14))) {
        F_00cc1d20(&(*(undefined1 *)(gen_frame + 0x27)) GEN_EDX_ARG,&REFG(undefined, 0x112f050),"[sd][driver][stream] stream read buffer overrun!!",
                     "StreamBankEx.cpp",0x1fc,
                     "SQEX::CDev::Engine::Sd::Driver::StreamBankEx::OnStreamReadThreadExecute");
      }
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 4))))
                                (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)))));
      (*(int * PTR32 *)(gen_frame + 0x18)) = piVar7;
      if (*((char *)GEN_TOP(((int)this + 0x94))) != '\0') {
        gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
      }
      *((int *)GEN_TOP(((int)this + 0x20))) = *((int *)GEN_TOP(((int)this + 0x20))) + (int)(*(int * PTR32 *)(gen_frame + 0x18));
      *((int *)GEN_TOP(((int)this + 0x28))) = *((int *)GEN_TOP(((int)this + 0x28))) + (int)(*(int * PTR32 *)(gen_frame + 0x18));
      piVar7 = (*(int * PTR32 *)(gen_frame + 0x18));
      if (*((char *)GEN_TOP(((int)this + 0x94))) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
        piVar7 = extraout_EAX_01;
      }
      if (*((int *)GEN_TOP(((int)this + 0x28))) < iVar9) break;
    }
    piVar7 = ((int *)GEN_TOP(F_00ce1fe0(((undefined *)GEN_TOP(((int)this - 100))) GEN_EDX_ARG,2)));
    break;
  case 0x2: ;
    piVar7 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
    iVar9 = *((int *)GEN_TOP(((int)this + 0x28)));
    (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar7 + 0xf;
    iVar12 = *((int *)GEN_TOP(((int)piVar7 + piVar7[0xf]))) + 0x20;
    if (iVar9 < iVar12) {
      iVar11 = *((int *)GEN_TOP(((int)this + 0x20)));
      piVar14 = ((int *)GEN_TOP(((int)piVar7 + iVar11)));
      (*(int * PTR32 *)(gen_frame + 0x0)) = piVar14;
      iVar11 = iVar12 - iVar11;
      (*(int *)(gen_frame + 0x4)) = iVar11;
      (*(int *)(gen_frame + 0x8)) = iVar9;
      (*(int *)(gen_frame + 0xc)) = 0;
      (*(int *)(gen_frame + 0x10)) = *((int *)GEN_TOP(((int)this + 0x18)));
      if ((piVar14 < piVar7) ||
         ((uint)((int)piVar7 + *((int *)GEN_TOP(((int)this + 0x18)))) < (uint)(iVar11 + (int)piVar14))) {
        F_00cc1d20(&(*(undefined1 *)(gen_frame + 0x27)) GEN_EDX_ARG,&REFG(undefined, 0x112f0e4),"[sd][driver][stream] stream read buffer overrun!!",
                     "StreamBankEx.cpp",0x223,
                     "SQEX::CDev::Engine::Sd::Driver::StreamBankEx::OnStreamReadThreadExecute");
      }
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 4))))
                                (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)))));
      (*(int * PTR32 *)(gen_frame + 0x18)) = piVar7;
      if (*((char *)GEN_TOP(((int)this + 0x94))) != '\0') {
        gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
      }
      *((int *)GEN_TOP(((int)this + 0x20))) = *((int *)GEN_TOP(((int)this + 0x20))) + (int)(*(int * PTR32 *)(gen_frame + 0x18));
      *((int *)GEN_TOP(((int)this + 0x28))) = *((int *)GEN_TOP(((int)this + 0x28))) + (int)(*(int * PTR32 *)(gen_frame + 0x18));
      piVar7 = (*(int * PTR32 *)(gen_frame + 0x18));
      if (*((char *)GEN_TOP(((int)this + 0x94))) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
        piVar7 = extraout_EAX_02;
      }
    }
    if (iVar12 <= *((int *)GEN_TOP(((int)this + 0x28)))) {
      piVar7 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
      iVar12 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)piVar7 + *(*(int * PTR32 *)(gen_frame + 0x1c))))) + 0x18 + (int)piVar7))) + iVar12;
      if (*((int *)GEN_TOP(((int)this + 0x28))) < iVar12) {
        piVar14 = ((int *)GEN_TOP(((int)piVar7 + *((int *)GEN_TOP(((int)this + 0x20))))));
        iVar11 = iVar12 - *((int *)GEN_TOP(((int)this + 0x20)));
        (*(int *)(gen_frame + 0x8)) = *((int *)GEN_TOP(((int)this + 0x28)));
        iVar9 = *((int *)GEN_TOP(((int)this + 0x18)));
        (*(int * PTR32 *)(gen_frame + 0x0)) = piVar14;
        (*(int *)(gen_frame + 0x4)) = iVar11;
        (*(int *)(gen_frame + 0xc)) = 0;
        (*(int *)(gen_frame + 0x10)) = iVar9;
        if ((piVar14 < piVar7) || ((uint)((int)piVar7 + iVar9) < (uint)(iVar11 + (int)piVar14))) {
          F_00cc1d20(&(*(undefined1 *)(gen_frame + 0x27)) GEN_EDX_ARG,&REFG(undefined, 0x112f178),"[sd][driver][stream] stream read buffer overrun!!",
                       "StreamBankEx.cpp",0x241,
                       "SQEX::CDev::Engine::Sd::Driver::StreamBankEx::OnStreamReadThreadExecute");
        }
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 4))))
                                  (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)))));
        (*(int * PTR32 *)(gen_frame + 0x18)) = piVar7;
        if (*((char *)GEN_TOP(((int)this + 0x94))) != '\0') {
          gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
        }
        *((int *)GEN_TOP(((int)this + 0x20))) = *((int *)GEN_TOP(((int)this + 0x20))) + (int)(*(int * PTR32 *)(gen_frame + 0x18));
        *((int *)GEN_TOP(((int)this + 0x28))) = *((int *)GEN_TOP(((int)this + 0x28))) + (int)(*(int * PTR32 *)(gen_frame + 0x18));
        piVar7 = (*(int * PTR32 *)(gen_frame + 0x18));
        if (*((char *)GEN_TOP(((int)this + 0x94))) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
          piVar7 = extraout_EAX_03;
        }
      }
      if (iVar12 <= *((int *)GEN_TOP(((int)this + 0x28)))) {
        piVar7 = ((int *)GEN_TOP(F_00ce1fe0(((undefined *)GEN_TOP(((int)this - 100))) GEN_EDX_ARG,3)));
      }
    }
    break;
  case 0x3: ;
    iVar9 = *((int *)GEN_TOP(((int)this + 0x14)));
    piVar7 = *((int * PTR32 *)GEN_TOP((iVar9 + *((int *)GEN_TOP((iVar9 + 0x3c))))));
    (*(int *)(gen_frame + 0x14)) = iVar9;
    piVar14 = ((int *)GEN_TOP((iVar9 + (int)piVar7)));
    iVar9 = *((int *)GEN_TOP((iVar9 + 0x18 + (int)piVar7))) + 0x20 + (int)piVar7;
    (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar7;
    (*(int *)(gen_frame + 0x20)) = iVar9;
    if ((uint)piVar14[4] < (uint)piVar14[5]) {
      *((uint *)GEN_TOP(((int)this + 0x70))) = *((uint *)GEN_TOP(((int)this + 0x70))) | 1;
    }
    *((int *)GEN_TOP(((int)this + 0x2c))) = iVar9 + *piVar14;
    *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 1;
    puVar2 = ((undefined1 *)GEN_TOP(piVar14[3]));
    if (puVar2 == ((undefined1 *)GEN_TOP(0xffffffff))) {
      return 0xffffffff;
    }
    if (puVar2 == &REFG(undefined, 0x6)) {
      *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 0x400;
      uVar6 = F_00ce93e0(piVar14);
      pcVar4 = ((char *)GEN_TOP((uVar6 + *((int *)GEN_TOP(((int)this + 0x14))) + (int)piVar7)));
      if (((*pcVar4 == '\x02') &&
          (bVar3 = pcVar4[1], iVar9 = *(int *)(pcVar4 + 0x10),
          *(int *)(pcVar4 + (uint)bVar3 + iVar9) != 0x5367674f)) &&
         (uVar6 = 0, *(int *)(pcVar4 + 0x14) != 0)) {
        do {
          pbVar1 = ((byte *)GEN_TOP((uVar6 + (int)(pcVar4 + (uint)bVar3 + iVar9))));
          *pbVar1 = *pbVar1 ^ pcVar4[2];
          uVar6 = uVar6 + 1;
          piVar7 = (*(int * PTR32 *)(gen_frame + 0x1c));
        } while (uVar6 < *(uint *)(pcVar4 + 0x14));
      }
      iVar9 = piVar14[1];
      *((int *)GEN_TOP(((int)this + 0x6c))) = iVar9 * 0x800;
      (*(int * PTR32 *)(gen_frame + 0x18)) = ((int *)GEN_TOP((iVar9 * 0x1800 + 0x56)));
      piVar13 = piVar7;
      if ((*((byte *)GEN_TOP(((int)this + 0x70))) & 1) != 0) {
        *((int *)GEN_TOP(((int)this + 0x30))) = (*(int *)(gen_frame + 0x20)) + piVar14[4];
        *((int *)GEN_TOP(((int)this + 0x2c))) = (*(int *)(gen_frame + 0x20)) + piVar14[5];
      }
    }
    else {
      if (puVar2 != ((undefined1 *)GEN_TOP(0xc))) {
        return (uint)puVar2;
      }
      uVar6 = F_00ce93e0(piVar14);
      iVar12 = uVar6 + *((int *)GEN_TOP(((int)this + 0x14)));
      *((uint *)GEN_TOP(((int)this + 0x74))) = (uint)*((ushort *)GEN_TOP((iVar12 + 0xc + (int)piVar7)));
      iVar9 = piVar14[1] * 0x800;
      *((int *)GEN_TOP(((int)this + 0x6c))) = iVar9;
      (*(int * PTR32 *)(gen_frame + 0x18)) = ((int *)GEN_TOP(iVar9));
      if (iVar9 % (int)(uint)*((ushort *)GEN_TOP(((int)piVar7 + iVar12 + 0xc))) != 0) {
        *((int *)GEN_TOP(((int)this + 0x6c))) =
             iVar9 - iVar9 % (int)(uint)*((ushort *)GEN_TOP(((int)piVar7 + iVar12 + 0xc)));
      }
      (*(int * PTR32 *)(gen_frame + 0x18)) = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x6c))) * 3 + 0x36)));
      piVar13 = (*(int * PTR32 *)(gen_frame + 0x1c));
      if ((*((byte *)GEN_TOP(((int)this + 0x70))) & 1) != 0) {
        *((uint *)GEN_TOP(((int)this + 0x30))) =
             (*(int *)(gen_frame + 0x20)) + ((uint)piVar14[4] / (uint)*((ushort *)GEN_TOP(((int)piVar7 + iVar12 + 0x12)))) *
                       (uint)*((ushort *)GEN_TOP(((int)piVar7 + iVar12 + 0xc)));
        *((uint *)GEN_TOP(((int)this + 0x2c))) =
             (*(int *)(gen_frame + 0x20)) + ((uint)piVar14[5] / (uint)*((ushort *)GEN_TOP(((int)piVar7 + iVar12 + 0x12)))) *
                       (uint)*((ushort *)GEN_TOP(((int)piVar7 + iVar12 + 0xc)));
      }
    }
    *((uint *)GEN_TOP(((int)this - 0x54))) = (uint)*((ushort *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + 0x36)));
    F_00cc8590((int)this - 100);
    F_00cc8520((int)this - 100);
    iVar9 = piVar14[6] + 0x20 + (int)piVar13;
    iVar12 = (*((int *)GEN_TOP(((int)this + 0x18))) - iVar9 & 0xfffffff0U) + *((int *)GEN_TOP(((int)this + 0x14)));
    *((int *)GEN_TOP(((int)this + 0x34))) = iVar12;
    F_00c46e20(iVar12,*((int *)GEN_TOP(((int)this + 0x14))),iVar9);
    piVar7 = (*(int * PTR32 *)(gen_frame + 0x18));
    uVar6 = *((uint *)GEN_TOP(((int)this + 0x74)));
    uVar10 = *((uint *)GEN_TOP(((int)this + 0x14))) % uVar6;
    if (uVar10 != 0) {
      *((uint *)GEN_TOP(((int)this + 0x14))) = (uVar6 - uVar10) + *((uint *)GEN_TOP(((int)this + 0x14)));
    }
    iVar9 = (*((int *)GEN_TOP(((int)this + 0x34))) - *((int *)GEN_TOP(((int)this + 0x14)))) - (int)(*(int * PTR32 *)(gen_frame + 0x18));
    iVar9 = iVar9 - iVar9 % (int)uVar6;
    *((int *)GEN_TOP(((int)this + 0x38))) = iVar9;
    if (iVar9 < 1) {
      F_00cc1d20(&(*(undefined1 *)(gen_frame + 0x27)) GEN_EDX_ARG,((char *)REFP(0x112f20c)),
                   ((char *)REFP(0x112f1d8)),"StreamBankEx.cpp",0x368,
                   "SQEX::CDev::Engine::Sd::Driver::StreamBankEx::OnStreamReadThreadExecute");
    }
    if (((*((byte *)GEN_TOP(((int)this + 0x70))) & 1) != 0) &&
       (iVar9 = *((int *)GEN_TOP(((int)this + 0x2c))) - *((int *)GEN_TOP(((int)this + 0x30))),
       iVar9 < *((int *)GEN_TOP(((int)this + 0x38))))) {
      *((int *)GEN_TOP(((int)this + 0x38))) = iVar9 - iVar9 % *((int *)GEN_TOP(((int)this + 0x74)));
    }
    if (0 < (int)piVar7) {
      F_00ce2b80(((undefined *)GEN_TOP(((int)this + 0x40))) GEN_EDX_ARG,piVar7,*((int *)GEN_TOP(((int)this + 0x34))) - (int)piVar7);
    }
    if (*((char *)GEN_TOP(((int)this + 0x94))) != '\0') {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
    }
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
    *((int *)GEN_TOP(((int)this + 0x28))) = (*(int *)(gen_frame + 0x20));
    if (*((char *)GEN_TOP(((int)this + 0x94))) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
    }
    *((uint *)GEN_TOP(((int)this + 0x70))) = *((uint *)GEN_TOP(((int)this + 0x70))) | 2;
    piVar7 = ((int *)GEN_TOP(F_00ce1fe0(((undefined *)GEN_TOP(((int)this - 100))) GEN_EDX_ARG,4)));
    *((byte *)GEN_TOP(((int)this - 0x1c))) = *((byte *)GEN_TOP(((int)this - 0x1c))) | 0x80;
    break;
  case 0x4: ;
    bVar3 = *((byte *)GEN_TOP(((int)this - 0x1c)));
    uVar8 = (undefined3)((uint)((int)(uintptr_t)piVar7) >> 8);
    if ((bVar3 & 2) == 0) {
      (*(int *)(gen_frame + 0xc)) = 0;
    }
    else {
      (*(int *)(gen_frame + 0xc)) = *((int *)GEN_TOP(((int)this + 0x20))) - *((int *)GEN_TOP(((int)this + 0x24)));
    }
    iVar9 = *((int *)GEN_TOP(((int)this + 0x24)));
    iVar12 = *((int *)GEN_TOP(((int)this + 0x38)));
    if (*((int *)GEN_TOP(((int)this + 0x20))) - iVar9 < iVar12) {
      bVar3 = F_00ce1e20(((undefined *)GEN_TOP(((int)this - 100))) GEN_EDX_ARG);
      if (bVar3 == 0) {
        iVar11 = *((int *)GEN_TOP(((int)this + 0x20))) % iVar12;
        iVar9 = iVar12 + (iVar9 - *((int *)GEN_TOP(((int)this + 0x20))));
        if (iVar12 < iVar11 + iVar9) {
          iVar9 = iVar12 - iVar11;
        }
        piVar14 = *((int * PTR32 *)GEN_TOP(((int)this + 0x14)));
        iVar5 = *((int *)GEN_TOP(((int)this + 0x2c)));
        piVar7 = ((int *)GEN_TOP((iVar11 + (int)piVar14)));
        (*(int * PTR32 *)(gen_frame + 0x0)) = piVar7;
        iVar5 = iVar5 - *((int *)GEN_TOP(((int)this + 0x28)));
        if (iVar5 < iVar9) {
          iVar9 = iVar5;
        }
        if ((piVar7 != ((int *)GEN_TOP(0x0))) && (0 < iVar9)) {
          (*(int *)(gen_frame + 0x4)) = iVar9;
          (*(int *)(gen_frame + 0x8)) = *((int *)GEN_TOP(((int)this + 0x28)));
          (*(int *)(gen_frame + 0x10)) = iVar12;
          if ((piVar7 < piVar14) || ((uint)(iVar12 + (int)piVar14) < (uint)((int)piVar7 + iVar9))) {
            F_00cc1d20(&(*(undefined1 *)(gen_frame + 0x27)) GEN_EDX_ARG,&REFG(undefined, 0x112f2b8),"[sd][driver][stream] stream read buffer overrun!!",
                         "StreamBankEx.cpp",0x3b1,
                         "SQEX::CDev::Engine::Sd::Driver::StreamBankEx::OnStreamReadThreadExecute");
          }
          uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x0)));
          if (*((char *)GEN_TOP(((int)this + 0x94))) != '\0') {
            gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
          }
          *((int *)GEN_TOP(((int)this + 0x28))) = *((int *)GEN_TOP(((int)this + 0x28))) + uVar6;
          *((int *)GEN_TOP(((int)this + 0x20))) = *((int *)GEN_TOP(((int)this + 0x20))) + uVar6;
          iVar9 = *((int *)GEN_TOP(((int)this + 0x20)));
          if ((*((int *)GEN_TOP(((int)this + 0x2c))) <= *((int *)GEN_TOP(((int)this + 0x28)))) &&
             (*((int *)GEN_TOP(((int)this + 0x3c))) = iVar9, (*((byte *)GEN_TOP(((int)this + 0x70))) & 1) != 0)) {
            iVar12 = iVar9 % *((int *)GEN_TOP(((int)this + 0x74)));
            if (iVar12 != 0) {
              *((int *)GEN_TOP(((int)this + 0x20))) = (iVar9 - iVar12) + *((int *)GEN_TOP(((int)this + 0x74)));
            }
            *((undefined4 *)GEN_TOP(((int)this + 0x28))) = *((undefined4 *)GEN_TOP(((int)this + 0x30)));
          }
          piVar7 = *((int * PTR32 *)GEN_TOP(((int)this + 0x38)));
          if (((int)piVar7 <= *((int *)GEN_TOP(((int)this + 0x20)))) &&
             ((int)piVar7 <= *((int *)GEN_TOP(((int)this + 0x24))))) {
            *((int *)GEN_TOP(((int)this + 0x3c))) = *((int *)GEN_TOP(((int)this + 0x3c))) - (int)piVar7;
            *((int *)GEN_TOP(((int)this + 0x20))) = *((int *)GEN_TOP(((int)this + 0x20))) - (int)piVar7;
            *((int *)GEN_TOP(((int)this + 0x24))) = *((int *)GEN_TOP(((int)this + 0x24))) - (int)piVar7;
          }
          if (*((char *)GEN_TOP(((int)this + 0x94))) != '\0') {
            gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
            piVar7 = extraout_EAX_04;
          }
        }
        break;
      }
      bVar3 = *((byte *)GEN_TOP(((int)this - 0x1c)));
      uVar8 = extraout_var;
    }
    piVar7 = ((int *)GEN_TOP((CONCAT31(uVar8,bVar3) | 2)));
    *((char *)GEN_TOP(((int)this - 0x1c))) = (char)piVar7;
    break;
  case 0x5: ;
    *((byte *)GEN_TOP(((int)this - 0x1c))) = *((byte *)GEN_TOP(((int)this - 0x1c))) & 0xfd;
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0xffffffff;
    *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x74))) = 1;
    piVar7 = ((int *)GEN_TOP(F_00ce1fe0(((undefined *)GEN_TOP(((int)this - 100))) GEN_EDX_ARG,0)));
  }
  if ((*((byte *)GEN_TOP(((int)this - 0x1c))) & 0x20) != 0) {
    piVar7 = ((int *)GEN_TOP(F_00ce3fa0(*((undefined4 *)GEN_TOP(((int)this - 0x50))),
                                 -(uint)(this != ((undefined *)GEN_TOP(0x64))) & (uint)this)));
  }
  return (uint)piVar7;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IStreamReadThreadEventReceiver::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce2b40(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce2b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x112f30c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ce2b80 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ce2b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xce2b80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined1 *)GEN_TOP(((int)this + 0x28))) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  *(undefined4 *)this = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_1;
  if (*((char *)GEN_TOP(((int)this + 0x28))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::vf1 */
GEN_LIB GEN_NOFRAME uint F_00ce2bc0(void)
{
  GEN_ENTER(0xce2bc0u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::vf29 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce2bd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce2bd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x7c)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::vf31 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce2be0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce2be0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x68)));
}

/* ref: FUN_00ce2bf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce2bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce2bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00ce2c00((int)this - 100 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce2c00(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce2c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00ce2210(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ce2c30 */
GEN_LIB GEN_FRAME unsigned int F_00ce2c30(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce2c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00ce2c50 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce2c50(GEN_P(uint * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce2c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *param_1;
  *((undefined2 *)GEN_TOP((uVar1 + 2))) = 0;
  *((uint *)GEN_TOP((uVar1 + 4))) = (param_1[1] - uVar1) - 0x10;
  *((undefined4 *)GEN_TOP((uVar1 + 8))) = 0;
  *((undefined4 *)GEN_TOP((uVar1 + 0xc))) = 0;
  return uVar1;
}

/* ref: FUN_00ce2c80 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00ce2c80(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce2c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  
  iVar1 = *((int *)GEN_TOP((param_2 + 8)));
  iVar2 = *((int *)GEN_TOP((param_2 + 0xc)));
  if (iVar1 == 0) {
    *param_1 = iVar2;
  }
  else {
    *((int *)GEN_TOP((iVar1 + 0xc))) = iVar2;
  }
  if (iVar2 != 0) {
    *((int *)GEN_TOP((iVar2 + 8))) = iVar1;
    return 0;
  }
  param_1[1] = iVar1;
  return 0;
}

/* ref: FUN_00ce2cb0 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00ce2cb0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce2cb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  *((int *)GEN_TOP((param_3 + 8))) = param_2;
  if (param_2 == 0) {
    iVar1 = *param_1;
    *param_1 = param_3;
  }
  else {
    iVar1 = *((int *)GEN_TOP((param_2 + 0xc)));
    *((int *)GEN_TOP((param_2 + 0xc))) = param_3;
  }
  *((int *)GEN_TOP((param_3 + 0xc))) = iVar1;
  if (iVar1 != 0) {
    *((int *)GEN_TOP((iVar1 + 8))) = param_3;
    return 0;
  }
  param_1[1] = param_3;
  return 0;
}

/* ref: FUN_00ce2d10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce2d10(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(char param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xce2d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(char param_5 = (char)gen_a4;)
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_c;
  
  local_c = param_2 - (uint)*((ushort *)GEN_TOP((param_2 + 2)));
  iVar4 = *((int *)GEN_TOP((param_2 + 4))) + 0x10 + param_2;
  iVar1 = param_3 + param_4;
  iVar3 = *((int *)GEN_TOP((param_2 + 8)));
  iVar2 = *((int *)GEN_TOP((param_2 + 0xc)));
  iVar5 = param_3 - 0x10;
  if (iVar3 == 0) {
    *param_1 = iVar2;
  }
  else {
    *((int *)GEN_TOP((iVar3 + 0xc))) = iVar2;
  }
  if (iVar2 == 0) {
    param_1[1] = iVar3;
  }
  else {
    *((int *)GEN_TOP((iVar2 + 8))) = iVar3;
  }
  if ((0x13 < (uint)(iVar5 - local_c)) && (param_5 == '\0')) {
    *((uint *)GEN_TOP((local_c + 4))) = (iVar5 - local_c) - 0x10;
    *((undefined2 *)GEN_TOP((local_c + 2))) = 0;
    *((undefined4 *)GEN_TOP((local_c + 0xc))) = 0;
    *((int *)GEN_TOP((local_c + 8))) = iVar3;
    if (iVar3 == 0) {
      iVar2 = *param_1;
      *param_1 = local_c;
    }
    else {
      iVar2 = *((int *)GEN_TOP((iVar3 + 0xc)));
      *((int *)GEN_TOP((iVar3 + 0xc))) = local_c;
    }
    *((int *)GEN_TOP((local_c + 0xc))) = iVar2;
    iVar3 = local_c;
    if (iVar2 == 0) {
      param_1[1] = local_c;
      local_c = iVar5;
    }
    else {
      *((int *)GEN_TOP((iVar2 + 8))) = local_c;
      local_c = iVar5;
    }
  }
  if ((0x13 < (uint)(iVar4 - iVar1)) && (param_5 != '\0')) {
    *((undefined2 *)GEN_TOP((iVar1 + 2))) = 0;
    *((uint *)GEN_TOP((iVar1 + 4))) = (iVar4 - iVar1) - 0x10;
    *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
    *((int *)GEN_TOP((iVar1 + 8))) = iVar3;
    if (iVar3 == 0) {
      iVar2 = *param_1;
      *param_1 = iVar1;
    }
    else {
      iVar2 = *((int *)GEN_TOP((iVar3 + 0xc)));
      *((int *)GEN_TOP((iVar3 + 0xc))) = iVar1;
    }
    *((int *)GEN_TOP((iVar1 + 0xc))) = iVar2;
    iVar4 = iVar1;
    if (iVar2 == 0) {
      param_1[1] = iVar1;
    }
    else {
      *((int *)GEN_TOP((iVar2 + 8))) = iVar1;
    }
  }
  *((undefined4 *)GEN_TOP((param_3 - 8))) = 0;
  *((int *)GEN_TOP((param_3 - 0xc))) = (iVar4 - iVar5) - 0x10;
  *((undefined4 *)GEN_TOP((param_3 - 4))) = 0;
  *((short *)GEN_TOP((param_3 - 0xe))) = (short)iVar5 - (short)local_c;
  iVar1 = param_1[3];
  *((int *)GEN_TOP((param_3 - 8))) = iVar1;
  if (iVar1 == 0) {
    iVar4 = param_1[2];
    param_1[2] = iVar5;
  }
  else {
    iVar4 = *((int *)GEN_TOP((iVar1 + 0xc)));
    *((int *)GEN_TOP((iVar1 + 0xc))) = iVar5;
  }
  *((int *)GEN_TOP((param_3 - 4))) = iVar4;
  if (iVar4 == 0) {
    param_1[3] = iVar5;
    return param_3;
  }
  *((int *)GEN_TOP((iVar4 + 8))) = iVar5;
  return param_3;
}

/* ref: FUN_00ce2e50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce2e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xce2e50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint local_c;
  int local_8;
  
  iVar3 = *(int *)this;
  uVar4 = 0xffffffff;
  local_8 = 0;
  local_c = 0;
  if (iVar3 != 0) {
    do {
      uVar1 = *((uint *)GEN_TOP((iVar3 + 4)));
      uVar2 = (param_2 - 1U) + iVar3 + 0x10 & ~(param_2 - 1U);
      if ((((uVar2 - (iVar3 + 0x10)) + param_1 <= uVar1) && (uVar1 < uVar4)) &&
         ((iVar5 = iVar3, local_c = uVar2, *((char *)GEN_TOP(((int)this + 0x10))) != '\0' ||
          (uVar4 = uVar1, local_8 = iVar3, uVar1 == param_1)))) break;
      iVar3 = *((int *)GEN_TOP((iVar3 + 0xc)));
      iVar5 = local_8;
    } while (iVar3 != 0);
    if (iVar5 != 0) {
      uVar4 = F_00ce2d10(this GEN_EDX_FWD,iVar5,local_c,param_1,1);
      return uVar4;
    }
  }
  return 0;
}

/* ref: FUN_00ce2ef0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce2ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xce2ef0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint local_c;
  int local_8;
  
  uVar6 = 0xffffffff;
  local_8 = 0;
  local_c = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    iVar3 = *((int *)GEN_TOP(((int)this + 4)));
    do {
      iVar5 = iVar3;
      uVar2 = *((uint *)GEN_TOP((iVar5 + 4)));
      uVar4 = (uVar2 - param_1) + iVar5 + 0x10 & ~(param_2 - 1U);
      if (((-1 < (int)(uVar4 - (iVar5 + 0x10))) && (uVar2 < uVar6)) &&
         ((local_c = uVar4, *((char *)GEN_TOP(((int)this + 0x10))) != '\0' ||
          (uVar6 = uVar2, local_8 = iVar5, uVar2 == param_1)))) break;
      piVar1 = ((int *)GEN_TOP((iVar5 + 8)));
      iVar5 = local_8;
      iVar3 = *piVar1;
    } while (*piVar1 != 0);
    if (iVar5 != 0) {
      uVar6 = F_00ce2d10(this GEN_EDX_FWD,iVar5,local_c,param_1,0);
      return uVar6;
    }
  }
  return 0;
}

/* ref: FUN_00ce2f80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce2f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce2f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = *param_1;
  uVar5 = param_1[1];
  uVar6 = 0;
  uVar3 = *(uint *)this;
  if (*(uint *)this != 0) {
    do {
      uVar4 = uVar3;
      if (uVar8 <= uVar4) {
        uVar7 = uVar6;
        if (uVar4 == uVar5) {
          iVar2 = *((int *)GEN_TOP((uVar4 + 8)));
          uVar5 = *((int *)GEN_TOP((uVar4 + 4))) + 0x10 + uVar4;
          iVar1 = *((int *)GEN_TOP((uVar4 + 0xc)));
          if (iVar2 == 0) {
            *(int *)this = iVar1;
          }
          else {
            *((int *)GEN_TOP((iVar2 + 0xc))) = iVar1;
          }
          if (iVar1 == 0) {
            *((int *)GEN_TOP(((int)this + 4))) = iVar2;
          }
          else {
            *((int *)GEN_TOP((iVar1 + 8))) = iVar2;
          }
        }
        break;
      }
      uVar3 = *((uint *)GEN_TOP((uVar4 + 0xc)));
      uVar6 = uVar4;
      uVar7 = uVar4;
    } while (*((uint *)GEN_TOP((uVar4 + 0xc))) != 0);
    uVar6 = uVar7;
    if ((uVar7 != 0) && (*((int *)GEN_TOP((uVar7 + 4))) + 0x10 + uVar7 == *param_1)) {
      uVar6 = *((uint *)GEN_TOP((uVar7 + 8)));
      iVar2 = *((int *)GEN_TOP((uVar7 + 0xc)));
      if (uVar6 == 0) {
        *(int *)this = iVar2;
      }
      else {
        *((int *)GEN_TOP((uVar6 + 0xc))) = iVar2;
      }
      uVar8 = uVar7;
      if (iVar2 == 0) {
        *((uint *)GEN_TOP(((int)this + 4))) = uVar6;
      }
      else {
        *((uint *)GEN_TOP((iVar2 + 8))) = uVar6;
      }
    }
  }
  *((undefined2 *)GEN_TOP((uVar8 + 2))) = 0;
  *((uint *)GEN_TOP((uVar8 + 4))) = (uVar5 - uVar8) - 0x10;
  *((undefined4 *)GEN_TOP((uVar8 + 0xc))) = 0;
  *((uint *)GEN_TOP((uVar8 + 8))) = uVar6;
  if (uVar6 == 0) {
    uVar5 = *(uint *)this;
    *(uint *)this = uVar8;
  }
  else {
    uVar5 = *((uint *)GEN_TOP((uVar6 + 0xc)));
    *((uint *)GEN_TOP((uVar6 + 0xc))) = uVar8;
  }
  *((uint *)GEN_TOP((uVar8 + 0xc))) = uVar5;
  if (uVar5 == 0) {
    *((uint *)GEN_TOP(((int)this + 4))) = uVar8;
    return 0;
  }
  *((uint *)GEN_TOP((uVar5 + 8))) = uVar8;
  return uVar5;
}

/* ref: FUN_00ce3060 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce3060(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xce3060u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = param_2 + 3U & 0xfffffffc;
  *((char *)GEN_TOP(((int)param_1 + 0x30))) = *((char *)GEN_TOP(((int)param_1 + 0x11)));
  if (*((char *)GEN_TOP(((int)param_1 + 0x11))) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x18));
  }
  if (*((char *)GEN_TOP(((int)param_1 + 0x30))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)param_1 + 0x18));
  }
  if (param_4 != '\0') {
    uVar1 = F_00ce2e50(param_1 GEN_EDX_ARG,uVar1,param_3);
    return uVar1;
  }
  uVar1 = F_00ce2ef0(param_1 GEN_EDX_ARG,uVar1,-param_3);
  return uVar1;
}

/* ref: FUN_00ce30d0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ce30d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce30d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    *((char *)GEN_TOP(((int)this + 0x30))) = *((char *)GEN_TOP(((int)this + 0x11)));
    if (*((char *)GEN_TOP(((int)this + 0x11))) != '\0') {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
    }
    if (*((char *)GEN_TOP(((int)this + 0x30))) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
    }
    iVar1 = *((int *)GEN_TOP((param_1 - 4)));
    iVar2 = *((int *)GEN_TOP((param_1 - 8)));
    (*(int *)(gen_frame + 0x0)) = (param_1 - 0x10) - (uint)*((ushort *)GEN_TOP((param_1 - 0xe)));
    (*(int *)(gen_frame + 0x4)) = *((int *)GEN_TOP((param_1 - 0xc))) + param_1;
    if (iVar2 == 0) {
      *((int *)GEN_TOP(((int)this + 8))) = iVar1;
    }
    else {
      *((int *)GEN_TOP((iVar2 + 0xc))) = iVar1;
    }
    if (iVar1 != 0) {
      *((int *)GEN_TOP((iVar1 + 8))) = iVar2;
      F_00ce2f80(this GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)));
      return;
    }
    *((int *)GEN_TOP(((int)this + 0xc))) = iVar2;
    F_00ce2f80(this GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)));
  }
  return;
}

/* ref: FUN_00ce3160 */
GEN_LIB_GS GEN_FRAME uint F_00ce3160(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xce3160u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x808, 8, 4);
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x800)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x804));
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112f44c)),param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112f42c)),param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x0)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return extraout_EAX;
}

/* ref: FUN_00ce3200 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce3200(GEN_P(uint * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3), GEN_P(char param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xce3200u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  GEN_PIN(char param_5 = (char)gen_a4;)
  uint uVar1;
  
  if (param_2 == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xce3160));
    }
    ((code *)REFG(gen_code32, 0x15d861c))((*(undefined * PTR32 (*)[1])REFP(0x112f428)),"",((char *)REFP(0x112f418)),0x14,
                    ((char *)REFP(0x112f3e8)));
  }
  *(undefined1 *)(param_1 + 4) = param_4;
  *((char *)GEN_TOP(((int)param_1 + 0x11))) = param_5;
  *(char *)(param_1 + 0xc) = param_5;
  if (param_5 != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  }
  if ((char)param_1[0xc] != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  }
  uVar1 = param_2 + 3U & 0xfffffffc;
  *((undefined2 *)GEN_TOP((uVar1 + 2))) = 0;
  *((uint *)GEN_TOP((uVar1 + 4))) = ((param_2 + param_3 & 0xfffffffcU) - uVar1) - 0x10;
  *((undefined4 *)GEN_TOP((uVar1 + 8))) = 0;
  *((undefined4 *)GEN_TOP((uVar1 + 0xc))) = 0;
  *param_1 = uVar1;
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  return uVar1;
}

/* ref: FUN_00ce32b0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce32b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce32b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00ce32c0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce32c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce32c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_1 - param_2;
}

/* ref: FUN_00ce32d0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce32d0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce32d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_1 - param_2;
}

/* ref: FUN_00ce32e0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce32e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce32e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_1 + (param_2 - 1U) & ~(param_2 - 1U);
}

/* ref: FUN_00ce3300 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce3300(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce3300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_1 + (param_2 - 1U) & ~(param_2 - 1U);
}

/* ref: FUN_00ce3320 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce3320(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce3320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return ~(param_2 - 1U) & param_1;
}

/* ref: FUN_00ce3330 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce3330(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce3330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return ~(param_2 - 1U) & param_1;
}

/* ref: FUN_00ce3340 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce3340(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce3340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x10;
}

/* ref: FUN_00ce3350 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce3350(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce3350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 - 0x10;
}

/* ref: FUN_00ce3360 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce3360(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce3360u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *((int *)GEN_TOP((param_1 + 4))) + 0x10 + param_1;
}

/* ref: FUN_00ce3380 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce3380(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce3380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  
  *param_1 = param_2 - (uint)*((ushort *)GEN_TOP((param_2 + 2)));
  uVar1 = *((int *)GEN_TOP((param_2 + 4))) + 0x10 + param_2;
  param_1[1] = uVar1;
  return uVar1;
}

/* ref: FUN_00ce33b0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce33b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce33b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 - param_1;
}

/* ref: FUN_00ce33c0 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00ce33c0(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce33c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  *((int *)GEN_TOP((param_2 + 8))) = iVar1;
  if (iVar1 == 0) {
    iVar2 = *param_1;
    *param_1 = param_2;
  }
  else {
    iVar2 = *((int *)GEN_TOP((iVar1 + 0xc)));
    *((int *)GEN_TOP((iVar1 + 0xc))) = param_2;
  }
  *((int *)GEN_TOP((param_2 + 0xc))) = iVar2;
  if (iVar2 != 0) {
    *((int *)GEN_TOP((iVar2 + 8))) = param_2;
    return 0;
  }
  param_1[1] = param_2;
  return 0;
}

/* ref: FUN_00ce3410 */
GEN_LIB GEN_FRAME unsigned int F_00ce3410(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce3410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00ce3430 */
GEN_LIB GEN_FRAME byte F_00ce3430(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce3430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  byte bVar1;
  int iVar2;
  
  bVar1 = 1;
  if (((param_1 != 0) &&
      (iVar2 = ((param_1 >> 0x18) - 1) * *((int *)GEN_TOP((REFG(int, 0x15d8c04) + 0x14))) +
               *((int *)GEN_TOP((REFG(int, 0x15d8c04) + 0x10))), iVar2 != 0)) && (*((uint *)GEN_TOP((iVar2 + 0x10))) == param_1))
  {
    bVar1 = 0;
  }
  return bVar1;
}

/* ref: FUN_00ce3460 */
GEN_LIB GEN_FRAME byte F_00ce3460(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce3460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int * piVar1;
  uint uVar2;
  bool bVar3;
  
  bVar3 = false;
  if (*((char *)GEN_TOP((REFG(int, 0x15d8c04) + 0x6c))) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
  }
  uVar2 = F_00d2ff90(REFG(int, 0x15d8c04) + 0x3c GEN_EDX_ARG,0);
  while( true ) {
    if (uVar2 == 0) {
      if ((*((int *)GEN_TOP((REFG(int, 0x15d8c04) + 0x50))) != 0) &&
         (*((int *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x15d8c04) + 0x50))) + 0x14))) == param_1)) {
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x15d8c04) + 0x50))) + 0xc))) == 1) {
          bVar3 = true;
        }
        else {
          piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x15d8c04) + 0x50))) + 0x30)));
          uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 8))))(piVar1 GEN_EDX_ARG);
          bVar3 = (char)uVar2 == '\0';
        }
      }
      if (*((char *)GEN_TOP((REFG(int, 0x15d8c04) + 0x6c))) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
      }
      return bVar3;
    }
    if (*((int *)GEN_TOP((uVar2 + 0x14))) == param_1) break;
    uVar2 = F_00d2ff90(REFG(int, 0x15d8c04) + 0x3c GEN_EDX_ARG,uVar2);
  }
  if (*((char *)GEN_TOP((REFG(int, 0x15d8c04) + 0x6c))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
  }
  return 1;
}

/* ref: FUN_00ce3530 */
GEN_LIB GEN_NOFRAME uint F_00ce3530(void)
{
  GEN_ENTER(0xce3530u, 0u, 0u, 0u, 0u);
  char * pcVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 * puVar2;
  uint uVar3;
  uint extraout_EAX = 0;
  undefined4 * puVar4;
  
  uVar3 = 0;
  if (REFG(undefined4 * PTR32, 0x15d8c04) != ((undefined4 *)GEN_TOP(0x0))) {
    if (*((char *)GEN_TOP((REFG(undefined4 * PTR32, 0x15d8c04) + 0x1b))) != '\0') {
      gen_imp_EnterCriticalSection(REFG(undefined4 * PTR32, 0x15d8c04) + 0x15);
    }
    *((undefined1 *)GEN_TOP((REFG(undefined4 * PTR32, 0x15d8c04) + 0x13))) = 1;
    puVar2 = REFG(undefined4 * PTR32, 0x15d8c04);
    puVar4 = REFG(undefined4 * PTR32, 0x15d8c04) + 0x1c;
    gen_imp_EnterCriticalSection(puVar4);
    if (0 < (int)puVar2[0x24]) {
      gen_imp_SetEvent((HANDLE)puVar2[0x23]);
      puVar2[0x25] = puVar2[0x24];
      puVar2[0x26] = puVar2[0x26] + 1;
    }
    gen_imp_LeaveCriticalSection(puVar4);
    if (*((char *)GEN_TOP((REFG(undefined4 * PTR32, 0x15d8c04) + 0x1b))) != '\0') {
      gen_imp_LeaveCriticalSection(REFG(undefined4 * PTR32, 0x15d8c04) + 0x15);
    }
    puVar2 = REFG(undefined4 * PTR32, 0x15d8c04);
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined4 * PTR32, 0x15d8c04)[0x28] + 4))))(REFG(undefined4 * PTR32, 0x15d8c04) + 0x28);
    F_004cf020(puVar2 + 0x28 GEN_EDX_ARG);
    puVar2[0x2e] = 0;
    puVar2 = REFG(undefined4 * PTR32, 0x15d8c04);
    pcVar1 = ((char *)GEN_TOP((REFG(undefined4 * PTR32, 0x15d8c04) + 7)));
    lpCriticalSection = (LPCRITICAL_SECTION)(REFG(undefined4 * PTR32, 0x15d8c04) + 8);
    *((char *)GEN_TOP((REFG(undefined4 * PTR32, 0x15d8c04) + 0xe))) = *pcVar1;
    if (*pcVar1 != '\0') {
      gen_imp_EnterCriticalSection(lpCriticalSection);
    }
    uVar3 = 0;
    if (puVar2[2] != 0) {
      uVar3 = F_00406810(puVar2[2]);
      puVar2[2] = 0;
    }
    puVar2[3] = 0;
    if (*(char *)(puVar2 + 0xe) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      uVar3 = extraout_EAX;
    }
    if (REFG(undefined4 * PTR32, 0x15d8c04) != ((undefined4 *)GEN_TOP(0x0))) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d8c04))))(REFG(undefined4 * PTR32, 0x15d8c04) GEN_EDX_ARG,1);
    }
    REFG(undefined4 * PTR32, 0x15d8c04) = ((undefined4 *)GEN_TOP(0x0));
  }
  return uVar3;
}

/* ref: FUN_00ce3620 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ce3620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce3620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL(0x30, 0);
  uint * puVar1;
  char * pcVar2;
  LPCRITICAL_SECTION p_Var3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 * puVar7;
  undefined * this_00;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int * piVar11;
  
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  do {
    while( true ) {
      if (*((char *)GEN_TOP((REFG(int, 0x15d8c04) + 0x6c))) != '\0') {
        gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
      }
      if (*((char *)GEN_TOP((REFG(int, 0x15d8c04) + 0x4c))) != '\0') {
        if (*((char *)GEN_TOP((REFG(int, 0x15d8c04) + 0x6c))) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
        }
        return 0;
      }
      puVar7 = ((undefined4 *)GEN_TOP(F_00d2ff90(REFG(int, 0x15d8c04) + 0x3c GEN_EDX_ARG,0)));
      if (puVar7 != ((undefined4 *)GEN_TOP(0x0))) break;
      F_00ce41b0(((undefined *)GEN_TOP((REFG(int, 0x15d8c04) + 0x70))) GEN_EDX_ARG);
LAB_00ce3915: ;
      if (*((char *)GEN_TOP((REFG(int, 0x15d8c04) + 0x6c))) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
      }
    }
    *((undefined4 * PTR32 *)GEN_TOP((REFG(int, 0x15d8c04) + 0x50))) = puVar7;
    F_00d2ff30(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x3c))) GEN_EDX_ARG,puVar7);
    if (*((char *)GEN_TOP((REFG(int, 0x15d8c04) + 0x6c))) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
    }
    if (puVar7[3] == 0) {
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x18)) + 0)) = 0;
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x18)) + 4)) = 0;
      lVar10 = 0;
      (*(longlong *)(gen_frame + 0x18)) = 0;
      (*(char *)(gen_frame + 0x2b)) = '\0';
      if (puVar7[6] == 0) {
        while( true ) {
          (*(longlong *)(gen_frame + 0x18)) = lVar10;
          lVar10 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(puVar7[0xc])) + 4))))
                             (((int *)GEN_TOP(puVar7[0xc])),puVar7[0xd],puVar7[10],puVar7[0xb],puVar7[8],
                              puVar7[9]);
          iVar9 = (int)((ulonglong)lVar10 >> 0x20);
          uVar8 = (uint)lVar10;
          (*(longlong *)(gen_frame + 0x18)) = lVar10 + (*(longlong *)(gen_frame + 0x18));
          if (puVar7[6] != 0) break;
          uVar5 = puVar7[8];
          if (*(longlong *)(puVar7 + 8) <= lVar10) break;
          if (lVar10 == -1) {
            this_00 = ((undefined *)GEN_TOP(F_00d2dd80(((undefined1 *)(gen_frame + 0xc)),puVar7[5])));
            F_00cbe9a0(this_00 GEN_EDX_ARG);
            F_00cbe3b0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG);
            uVar6 = puVar7[5];
            (*(int *)(gen_frame + 0x20)) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
            piVar11 = &(*(int *)(gen_frame + 0x20));
            uVar8 = F_00d2dd80(((undefined1 *)(gen_frame + 0x0)),uVar6);
            F_00cbec90(uVar8 GEN_EDX_ARG,(uint)piVar11);
            F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
            break;
          }
          puVar7[0xd] = puVar7[0xd] + uVar8;
          puVar1 = puVar7 + 10;
          uVar4 = *puVar1;
          *puVar1 = *puVar1 + uVar8;
          puVar7[0xb] = puVar7[0xb] + iVar9 + (uint)CARRY4(uVar4,uVar8);
          puVar7[0xf] = puVar7[0xf] + 1;
          puVar7[8] = uVar5 - uVar8;
          puVar7[9] = (puVar7[9] - iVar9) - (uint)(uVar5 < uVar8);
          if (9999 < (int)puVar7[0xf]) {
            F_00d2cca0();
            puVar7[0xf] = 0;
          }
          if (*((char *)GEN_TOP((REFG(int, 0x15d8c04) + 0x6c))) != '\0') {
            gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
          }
          if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x44))) != 0) {
            (*(char *)(gen_frame + 0x2b)) = '\x01';
            if (*((char *)GEN_TOP((REFG(int, 0x15d8c04) + 0x6c))) != '\0') {
              gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
            }
            break;
          }
          if (*((char *)GEN_TOP((REFG(int, 0x15d8c04) + 0x6c))) != '\0') {
            gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
          }
          F_004cee60(4);
          lVar10 = (*(longlong *)(gen_frame + 0x18));
          if (puVar7[6] != 0) break;
        }
      }
      if (((longlong *)GEN_TOP(puVar7[0x10])) != ((longlong *)GEN_TOP(0x0))) {
        *((longlong *)GEN_TOP(puVar7[0x10])) = (*(longlong *)(gen_frame + 0x18));
      }
      if (*((char *)GEN_TOP((REFG(int, 0x15d8c04) + 0x6c))) != '\0') {
        gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
      }
      *((undefined4 *)GEN_TOP((REFG(int, 0x15d8c04) + 0x50))) = 0;
      if ((*(char *)(gen_frame + 0x2b)) == '\0') {
        puVar7[4] = 0xffffffff;
        iVar9 = REFG(int, 0x15d8c04);
        pcVar2 = ((char *)GEN_TOP((REFG(int, 0x15d8c04) + 0x1c)));
        p_Var3 = (LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x20);
        *((char *)GEN_TOP((REFG(int, 0x15d8c04) + 0x38))) = *pcVar2;
        if (*pcVar2 != '\0') {
          gen_imp_EnterCriticalSection(p_Var3);
        }
        *puVar7 = *((undefined4 *)GEN_TOP((iVar9 + 0xc)));
        *((undefined4 * PTR32 *)GEN_TOP((iVar9 + 0xc))) = puVar7;
        if (*((char *)GEN_TOP((iVar9 + 0x38))) != '\0') {
          gen_imp_LeaveCriticalSection(p_Var3);
        }
      }
      else {
        F_00d2fe00(((undefined *)GEN_TOP((REFG(int, 0x15d8c04) + 0x3c))) GEN_EDX_ARG,puVar7);
      }
      goto LAB_00ce3915;
    }
    if (puVar7[3] == 1) {
      if (puVar7[6] == 0) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(puVar7[8])) + 4))))(((int *)GEN_TOP(puVar7[8])) GEN_EDX_ARG);
      }
      if (*((char *)GEN_TOP((REFG(int, 0x15d8c04) + 0x6c))) != '\0') {
        gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
      }
      *((undefined4 *)GEN_TOP((REFG(int, 0x15d8c04) + 0x50))) = 0;
      puVar7[4] = 0xffffffff;
      iVar9 = REFG(int, 0x15d8c04);
      pcVar2 = ((char *)GEN_TOP((REFG(int, 0x15d8c04) + 0x1c)));
      p_Var3 = (LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x20);
      *((char *)GEN_TOP((REFG(int, 0x15d8c04) + 0x38))) = *pcVar2;
      if (*pcVar2 != '\0') {
        gen_imp_EnterCriticalSection(p_Var3);
      }
      *puVar7 = *((undefined4 *)GEN_TOP((iVar9 + 0xc)));
      *((undefined4 * PTR32 *)GEN_TOP((iVar9 + 0xc))) = puVar7;
      if (*((char *)GEN_TOP((iVar9 + 0x38))) != '\0') {
        gen_imp_LeaveCriticalSection(p_Var3);
      }
      if (*((char *)GEN_TOP((REFG(int, 0x15d8c04) + 0x6c))) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
      }
      F_004cee60(1);
    }
  } while( true );
}

/* ref: FUN_00ce3950 */
GEN_LIB GEN_FRAME byte F_00ce3950(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce3950u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  char * pcVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  bool local_5;
  
  local_5 = true;
  if (*((char *)GEN_TOP((REFG(int, 0x15d8c04) + 0x6c))) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
  }
  puVar4 = ((undefined4 *)GEN_TOP(F_00d2ff90(REFG(int, 0x15d8c04) + 0x3c GEN_EDX_ARG,0)));
  while (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
    if (puVar4[5] == param_1) {
      puVar5 = ((undefined4 *)GEN_TOP(F_00d2ff30(((undefined *)GEN_TOP((REFG(int, 0x15d8c04) + 0x3c))) GEN_EDX_ARG,puVar4)));
      puVar4[4] = 0xffffffff;
      iVar3 = REFG(int, 0x15d8c04);
      pcVar1 = ((char *)GEN_TOP((REFG(int, 0x15d8c04) + 0x1c)));
      lpCriticalSection = (LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x20);
      *((char *)GEN_TOP((REFG(int, 0x15d8c04) + 0x38))) = *pcVar1;
      if (*pcVar1 != '\0') {
        gen_imp_EnterCriticalSection(lpCriticalSection);
      }
      *puVar4 = *((undefined4 *)GEN_TOP((iVar3 + 0xc)));
      *((undefined4 * PTR32 *)GEN_TOP((iVar3 + 0xc))) = puVar4;
      puVar4 = puVar5;
      if (*((char *)GEN_TOP((iVar3 + 0x38))) != '\0') {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
      }
    }
    else {
      puVar4 = ((undefined4 *)GEN_TOP(F_00d2ff90(((undefined *)GEN_TOP((REFG(int, 0x15d8c04) + 0x3c))) GEN_EDX_ARG,puVar4)));
    }
  }
  if ((*((int *)GEN_TOP((REFG(int, 0x15d8c04) + 0x50))) != 0) &&
     (*((int *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x15d8c04) + 0x50))) + 0x14))) == param_1)) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x15d8c04) + 0x50))) + 0x18))) = 1;
    if ((*((int *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x15d8c04) + 0x50))) + 0xc))) == 1) ||
       (*((int *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x15d8c04) + 0x50))) + 0xc))) != 0)) {
      local_5 = false;
    }
    else {
      piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x15d8c04) + 0x50))) + 0x30)));
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG);
      local_5 = (char)uVar6 != '\0';
    }
  }
  if (*((char *)GEN_TOP((REFG(int, 0x15d8c04) + 0x6c))) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
  }
  return local_5;
}

/* ref: FUN_00ce3a80 */
GEN_LIB GEN_FRAME unsigned int F_00ce3a80(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce3a80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  int iVar1;
  
  if (param_1 != 0) {
    if (*((char *)GEN_TOP((REFG(int, 0x15d8c04) + 0x6c))) != '\0') {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
    }
    iVar1 = ((param_1 >> 0x18) - 1) * *((int *)GEN_TOP((REFG(int, 0x15d8c04) + 0x14))) + *((int *)GEN_TOP((REFG(int, 0x15d8c04) + 0x10)));
    if ((iVar1 != 0) && (*((uint *)GEN_TOP((iVar1 + 0x10))) == param_1)) {
      *((undefined4 *)GEN_TOP((iVar1 + 0x18))) = 1;
      if (*((int *)GEN_TOP((REFG(int, 0x15d8c04) + 0x50))) != iVar1) {
        F_00d2ff30(((undefined *)GEN_TOP((REFG(int, 0x15d8c04) + 0x3c))) GEN_EDX_ARG,iVar1);
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0xffffffff;
        F_00cc6810(((undefined *)GEN_TOP((REFG(int, 0x15d8c04) + 8))) GEN_EDX_ARG,iVar1);
      }
    }
    if (*((char *)GEN_TOP((REFG(int, 0x15d8c04) + 0x6c))) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
    }
  }
  return;
}

/* ref: FUN_00ce3b10 */
GEN_LIB GEN_FRAME uint F_00ce3b10(GEN_P(char param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce3b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(char param_1 = (char)gen_a0;)
  char * pcVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar2;
  bool bVar3;
  undefined4 * puVar4;
  uint uVar5;
  int local_c;
  
  bVar3 = false;
  local_c = 0;
  if (*((char *)GEN_TOP((REFG(undefined4, 0x15d8c04) + 0x6c))) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(REFG(undefined4, 0x15d8c04) + 0x54));
  }
  puVar4 = ((undefined4 *)GEN_TOP(F_00d2ff90(REFG(undefined4, 0x15d8c04) + 0x3c GEN_EDX_ARG,0)));
  while (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
    F_00d2ff30(((undefined *)GEN_TOP((REFG(undefined4, 0x15d8c04) + 0x3c))) GEN_EDX_ARG,puVar4);
    puVar4[4] = 0xffffffff;
    uVar5 = REFG(undefined4, 0x15d8c04);
    pcVar1 = ((char *)GEN_TOP((REFG(undefined4, 0x15d8c04) + 0x1c)));
    lpCriticalSection = (LPCRITICAL_SECTION)(REFG(undefined4, 0x15d8c04) + 0x20);
    *((char *)GEN_TOP((REFG(undefined4, 0x15d8c04) + 0x38))) = *pcVar1;
    if (*pcVar1 != '\0') {
      gen_imp_EnterCriticalSection(lpCriticalSection);
    }
    *puVar4 = *((undefined4 *)GEN_TOP((uVar5 + 0xc)));
    *((undefined4 * PTR32 *)GEN_TOP((uVar5 + 0xc))) = puVar4;
    if (*((char *)GEN_TOP((uVar5 + 0x38))) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    puVar4 = ((undefined4 *)GEN_TOP(F_00d2ff90(REFG(undefined4, 0x15d8c04) + 0x3c GEN_EDX_ARG,0)));
  }
  if (*((int *)GEN_TOP((REFG(undefined4, 0x15d8c04) + 0x50))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((REFG(undefined4, 0x15d8c04) + 0x50))) + 0x18))) = 1;
    if (*((int *)GEN_TOP((*((int *)GEN_TOP((REFG(undefined4, 0x15d8c04) + 0x50))) + 0xc))) == 1) {
      local_c = *((int *)GEN_TOP((REFG(undefined4, 0x15d8c04) + 0x50)));
      bVar3 = true;
    }
    else if ((*((int *)GEN_TOP((*((int *)GEN_TOP((REFG(undefined4, 0x15d8c04) + 0x50))) + 0xc))) == 0) &&
            (piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((REFG(undefined4, 0x15d8c04) + 0x50))) + 0x30))),
            uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG), (char)uVar5 == '\0')) {
      local_c = *((int *)GEN_TOP((REFG(undefined4, 0x15d8c04) + 0x50)));
      bVar3 = true;
    }
  }
  if (*((char *)GEN_TOP((REFG(undefined4, 0x15d8c04) + 0x6c))) != '\0') {
    gen_imp_LeaveCriticalSection(REFG(undefined4, 0x15d8c04) + 0x54);
  }
  uVar5 = REFG(undefined4, 0x15d8c04);
  if ((bVar3) && (param_1 != '\0')) {
    while( true ) {
      if (*((char *)GEN_TOP((REFG(undefined4, 0x15d8c04) + 0x6c))) != '\0') {
        gen_imp_EnterCriticalSection(REFG(undefined4, 0x15d8c04) + 0x54);
      }
      if (*((int *)GEN_TOP((REFG(undefined4, 0x15d8c04) + 0x50))) != local_c) break;
      if (*((char *)GEN_TOP((REFG(undefined4, 0x15d8c04) + 0x6c))) != '\0') {
        gen_imp_LeaveCriticalSection(REFG(undefined4, 0x15d8c04) + 0x54);
      }
      F_004cee60(4);
    }
    uVar5 = REFG(undefined4, 0x15d8c04) + 0x54;
    if (*((char *)GEN_TOP((REFG(undefined4, 0x15d8c04) + 0x6c))) != '\0') {
      uVar5 = gen_imp_LeaveCriticalSection(uVar5);
    }
  }
  return uVar5;
}

/* ref: FUN_00ce3c90 */
GEN_LIB_GS GEN_FRAME uint F_00ce3c90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xce3c90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x808, 8, 4);
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x800)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x804));
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112f660)),param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112f640)),param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x0)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return extraout_EAX;
}

/* ref: FUN_00ce3d30 */
GEN_LIB GEN_FRAME unsigned int F_00ce3d30(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce3d30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int iVar1;
  uint uVar2;
  undefined * this;
  char * pcVar3;
  uint uVar4;
  
  if (REFG(undefined4, 0x15d8c04) == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
    }
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                             (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0xd0,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
    if (this == ((undefined *)GEN_TOP(0x0))) {
      REFG(undefined4, 0x15d8c04) = 0;
    }
    else {
      REFG(undefined4, 0x15d8c04) = F_00ce4370(this GEN_EDX_ARG);
    }
    (*(char * PTR32 *)(gen_frame + 0x0)) = "CDev.Engine.Sd.SoundDriver";
    (*(undefined4 *)(gen_frame + 0x4)) = 0x10;
    F_00cc6930(((undefined *)GEN_TOP((REFG(undefined4, 0x15d8c04) + 8))) GEN_EDX_ARG,0x48,0x14,&(*(char * PTR32 *)(gen_frame + 0x0)),8,1);
    F_00d2fdb0(REFG(undefined4, 0x15d8c04) + 0x3c GEN_EDX_ARG,0);
    *((undefined1 *)GEN_TOP((REFG(undefined4, 0x15d8c04) + 0x4c))) = 0;
    *((undefined4 *)GEN_TOP((REFG(undefined4, 0x15d8c04) + 0x50))) = 0;
    uVar2 = REFG(undefined4, 0x15d8c04);
    iVar1 = REFG(undefined4, 0x15d8c04) + 0xa0;
    *((gen_code32 *)GEN_TOP((REFG(undefined4, 0x15d8c04) + 0xc0))) = ((code *)REFP(0xce42b0));
    *((uint *)GEN_TOP((uVar2 + 0xc4))) = uVar2;
    *((gen_code32 *)GEN_TOP((uVar2 + 200))) = ((code *)REFP(0xce3620));
    *((undefined4 *)GEN_TOP((uVar2 + 0xcc))) = 0;
    pcVar3 = ((char *)GEN_TOP(*param_1));
    if (pcVar3 == ((char *)GEN_TOP(0x0))) {
      pcVar3 = ((char *)REFP(0x112f6a0));
    }
    uVar4 = F_004cf9e0(iVar1 GEN_EDX_ARG,0,param_1[2],param_1[1],pcVar3);
    *((uint *)GEN_TOP((uVar2 + 0xb8))) = uVar4;
  }
  return;
}

/* ref: FUN_00ce3e30 */
GEN_LIB GEN_FRAME uint F_00ce3e30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xce3e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  char * pcVar1;
  int iVar2;
  undefined4 * puVar3;
  LPCRITICAL_SECTION p_Var4;
  uint uVar5;
  
  if (*((char *)GEN_TOP((REFG(int, 0x15d8c04) + 0x6c))) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
  }
  iVar2 = REFG(int, 0x15d8c04);
  pcVar1 = ((char *)GEN_TOP((REFG(int, 0x15d8c04) + 0x1c)));
  p_Var4 = (LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x20);
  *((char *)GEN_TOP((REFG(int, 0x15d8c04) + 0x38))) = *pcVar1;
  if (*pcVar1 != '\0') {
    gen_imp_EnterCriticalSection(p_Var4);
  }
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP((iVar2 + 0xc)));
  if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
    if (*((char *)GEN_TOP((iVar2 + 0x38))) != '\0') {
      gen_imp_LeaveCriticalSection(p_Var4);
    }
    puVar3 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    *((undefined4 *)GEN_TOP((iVar2 + 0xc))) = *puVar3;
    if (*((char *)GEN_TOP((iVar2 + 0x38))) != '\0') {
      gen_imp_LeaveCriticalSection(p_Var4);
    }
    if (puVar3 != ((undefined4 *)GEN_TOP(0x0))) goto LAB_00ce3ed0;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xce3c90));
  }
  ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x112f534),"",((char *)REFP(0x112f51c)),0xee,
                  ((char *)REFP(0x112f4e0)));
LAB_00ce3ed0: ;
  puVar3[0xc] = param_1;
  puVar3[0xd] = param_2;
  puVar3[10] = param_3;
  puVar3[0xb] = param_4;
  puVar3[8] = param_5;
  puVar3[9] = param_6;
  puVar3[3] = 0;
  puVar3[5] = param_7;
  puVar3[6] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = param_8;
  REFG(undefined4, 0x15d8c08) = REFG(undefined4, 0x15d8c08) + 1;
  uVar5 = ((uint)((int)puVar3 - *((int *)GEN_TOP((REFG(int, 0x15d8c04) + 0x10)))) / *((uint *)GEN_TOP((REFG(int, 0x15d8c04) + 0x14))) + 1)
          * 0x1000000 ^ REFG(undefined4, 0x15d8c08) & 0xffffff;
  puVar3[4] = uVar5;
  F_00d2fe00(((undefined *)GEN_TOP((REFG(int, 0x15d8c04) + 0x3c))) GEN_EDX_ARG,puVar3);
  iVar2 = REFG(int, 0x15d8c04);
  p_Var4 = (LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x70);
  gen_imp_EnterCriticalSection(p_Var4);
  if (0 < *((int *)GEN_TOP((iVar2 + 0x90)))) {
    gen_imp_SetEvent(*((HANDLE *)GEN_TOP((iVar2 + 0x8c))));
    *((undefined4 *)GEN_TOP((iVar2 + 0x94))) = *((undefined4 *)GEN_TOP((iVar2 + 0x90)));
    *((int *)GEN_TOP((iVar2 + 0x98))) = *((int *)GEN_TOP((iVar2 + 0x98))) + 1;
  }
  gen_imp_LeaveCriticalSection(p_Var4);
  if (*((char *)GEN_TOP((REFG(int, 0x15d8c04) + 0x6c))) != '\0') {
    gen_imp_LeaveCriticalSection(REFG(int, 0x15d8c04) + 0x54);
  }
  return uVar5;
}

/* ref: FUN_00ce3fa0 */
GEN_LIB GEN_FRAME uint F_00ce3fa0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce3fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  char * pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  LPCRITICAL_SECTION p_Var6;
  
  if (*((char *)GEN_TOP((REFG(int, 0x15d8c04) + 0x6c))) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
  }
  iVar2 = REFG(int, 0x15d8c04);
  pcVar1 = ((char *)GEN_TOP((REFG(int, 0x15d8c04) + 0x1c)));
  p_Var6 = (LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x20);
  *((char *)GEN_TOP((REFG(int, 0x15d8c04) + 0x38))) = *pcVar1;
  if (*pcVar1 != '\0') {
    gen_imp_EnterCriticalSection(p_Var6);
  }
  puVar5 = *((undefined4 * PTR32 *)GEN_TOP((iVar2 + 0xc)));
  if (puVar5 == ((undefined4 *)GEN_TOP(0x0))) {
    if (*((char *)GEN_TOP((iVar2 + 0x38))) != '\0') {
      gen_imp_LeaveCriticalSection(p_Var6);
    }
    puVar5 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    *((undefined4 *)GEN_TOP((iVar2 + 0xc))) = *puVar5;
    if (*((char *)GEN_TOP((iVar2 + 0x38))) != '\0') {
      gen_imp_LeaveCriticalSection(p_Var6);
    }
    if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) goto LAB_00ce4040;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xce3c90));
  }
  ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x112f600),&REFG(undefined, 0x112f4ab),((char *)REFP(0x112f5e8)),0x114,
                  ((char *)REFP(0x112f5a8)));
LAB_00ce4040: ;
  REFG(undefined4, 0x15d8c08) = REFG(undefined4, 0x15d8c08) + 1;
  iVar2 = *((int *)GEN_TOP((REFG(int, 0x15d8c04) + 0x10)));
  uVar3 = *((uint *)GEN_TOP((REFG(int, 0x15d8c04) + 0x14)));
  uVar4 = REFG(undefined4, 0x15d8c08) & 0xffffff;
  puVar5[3] = 1;
  puVar5[8] = param_2;
  uVar4 = ((uint)((int)puVar5 - iVar2) / uVar3 + 1) * 0x1000000 ^ uVar4;
  puVar5[5] = param_1;
  puVar5[4] = uVar4;
  puVar5[6] = 0;
  F_00d2fe00(((undefined *)GEN_TOP((REFG(int, 0x15d8c04) + 0x3c))) GEN_EDX_ARG,puVar5);
  iVar2 = REFG(int, 0x15d8c04);
  p_Var6 = (LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x70);
  gen_imp_EnterCriticalSection(p_Var6);
  if (0 < *((int *)GEN_TOP((iVar2 + 0x90)))) {
    gen_imp_SetEvent(*((HANDLE *)GEN_TOP((iVar2 + 0x8c))));
    *((undefined4 *)GEN_TOP((iVar2 + 0x94))) = *((undefined4 *)GEN_TOP((iVar2 + 0x90)));
    *((int *)GEN_TOP((iVar2 + 0x98))) = *((int *)GEN_TOP((iVar2 + 0x98))) + 1;
  }
  gen_imp_LeaveCriticalSection(p_Var6);
  if (*((char *)GEN_TOP((REFG(int, 0x15d8c04) + 0x6c))) != '\0') {
    gen_imp_LeaveCriticalSection(REFG(int, 0x15d8c04) + 0x54);
  }
  return uVar4;
}

/* ref: FUN_00ce4100 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce4100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce4100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD);
  uVar1 = F_004cf020(this GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Common::Threading::Thread::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce4120(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce4120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[6])REFP(0x112f680));
  F_004cf880(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ce4150 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce4150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce4150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  HANDLE pvVar1;
  
  gen_imp_InitializeCriticalSection(this);
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,1,0,(LPCSTR)0x0);
  *((HANDLE *)GEN_TOP(((int)this + 0x1c))) = pvVar1;
  return (uint)this;
}

/* ref: FUN_00ce4190 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce4190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce4190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  gen_imp_CloseHandle(*((HANDLE *)GEN_TOP(((int)this + 0x1c))));
  return (uint)(gen_imp_DeleteCriticalSection(this));
}

/* ref: FUN_00ce41b0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ce41b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce41b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int iVar2;
  bool bVar3;
  
  gen_imp_EnterCriticalSection(this);
  *((int *)GEN_TOP(((int)this + 0x20))) = *((int *)GEN_TOP(((int)this + 0x20))) + 1;
  iVar2 = *((int *)GEN_TOP(((int)this + 0x28)));
  gen_imp_LeaveCriticalSection(this);
  gen_imp_LeaveCriticalSection(*((undefined4 *)GEN_TOP(((int)this + 0x18))));
  do {
    gen_imp_WaitForSingleObject(*((HANDLE *)GEN_TOP(((int)this + 0x1c))),0xffffffff);
    gen_imp_EnterCriticalSection(this);
    if ((*((int *)GEN_TOP(((int)this + 0x24))) < 1) || (*((int *)GEN_TOP(((int)this + 0x28))) == iVar2)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    gen_imp_LeaveCriticalSection(this);
  } while (!bVar3);
  gen_imp_EnterCriticalSection(*((undefined4 *)GEN_TOP(((int)this + 0x18))));
  gen_imp_EnterCriticalSection(this);
  *((int *)GEN_TOP(((int)this + 0x20))) = *((int *)GEN_TOP(((int)this + 0x20))) - 1;
  piVar1 = ((int *)GEN_TOP(((int)this + 0x24)));
  *piVar1 = *piVar1 - 1;
  iVar2 = *piVar1;
  gen_imp_LeaveCriticalSection(this);
  if (iVar2 == 0) {
    gen_imp_ResetEvent(*((HANDLE *)GEN_TOP(((int)this + 0x1c))));
  }
  return 0;
}

/* ref: FUN_00ce4250 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce4250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce4250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  gen_imp_EnterCriticalSection(this);
  if (0 < *((int *)GEN_TOP(((int)this + 0x20)))) {
    gen_imp_SetEvent(*((HANDLE *)GEN_TOP(((int)this + 0x1c))));
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = *((undefined4 *)GEN_TOP(((int)this + 0x20)));
    *((int *)GEN_TOP(((int)this + 0x28))) = *((int *)GEN_TOP(((int)this + 0x28))) + 1;
  }
  return (uint)(gen_imp_LeaveCriticalSection(this));
}

/* ref: FUN_00ce42b0 */
GEN_LIB GEN_FRAME uint F_00ce42b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5), GEN_P(undefined4 param_7, unsigned int gen_a6), GEN_P(undefined4 param_8, unsigned int gen_a7))
{
  GEN_ENTER(0xce42b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a7;)
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP(*param_2)))(param_2[1] + param_1,param_1,param_2,param_3,param_4,param_5,param_6,
                              param_7,param_8);
  return uVar1;
}

/* ref: FUN_00ce42d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce42d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce42d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_004cefe0(this GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x112f680));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Common::Threading::Thread::vf5 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce4300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce4300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined1 TVar1;
  
  TVar1 = this[0x14];
  while (TVar1 == (undefined1)0x0) {
    if (*(int *)(this + 0x24) != 0) {
      ((code *)*(gen_code32 *)(this + 0x20))(*(undefined4 *)(this + 0x24),this + 0x28);
    }
    TVar1 = this[0x14];
  }
  return 0;
}

/* ref: FUN_00ce4340 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce4340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xce4340u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0xce42b0));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_3;
  return (uint)this;
}

/* ref: FUN_00ce4370 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce4370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce4370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  HANDLE pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x112f69c));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x1c))) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  *((undefined1 *)GEN_TOP(((int)this + 0x38))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x54));
  *((undefined1 *)GEN_TOP(((int)this + 0x6c))) = 1;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x70));
  *((int *)GEN_TOP(((int)this + 0x88))) = (int)this + 0x54;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,1,0,(LPCSTR)0x0);
  *((HANDLE *)GEN_TOP(((int)this + 0x8c))) = pvVar1;
  F_004cefe0(((undefined *)GEN_TOP(((int)this + 0xa0))) GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa0))) = (*(undefined * PTR32 (*)[6])REFP(0x112f680));
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 200))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xcc))) = 0;
  return (uint)this;
}

/* ref: FUN_00ce4420 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce4420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce4420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  LPCRITICAL_SECTION lpCriticalSection;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x112f69c));
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = (*(undefined * PTR32 (*)[6])REFP(0x112f680));
  F_004cf880(((undefined4 *)GEN_TOP(((int)this + 0xa0))) GEN_EDX_FWD);
  gen_imp_CloseHandle(*((HANDLE *)GEN_TOP(((int)this + 0x8c))));
  gen_imp_DeleteCriticalSection((int)this + 0x70);
  gen_imp_DeleteCriticalSection((int)this + 0x54);
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x20);
  *((char *)GEN_TOP(((int)this + 0x38))) = *((char *)GEN_TOP(((int)this + 0x1c)));
  if (*((char *)GEN_TOP(((int)this + 0x1c))) != '\0') {
    gen_imp_EnterCriticalSection(lpCriticalSection);
  }
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    F_00406810(*((int *)GEN_TOP(((int)this + 8))));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (*((char *)GEN_TOP(((int)this + 0x38))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return (uint)(gen_imp_DeleteCriticalSection(lpCriticalSection));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamReadThread::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce44b0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce44b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00ce4420(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ce44e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce44e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(int * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xce44e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a4;)
  char * pcVar1;
  uint uVar2;
  
  *((gen_code32 *)GEN_TOP(((int)this + 0x20))) = ((code *)REFP(0xce42b0));
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = param_3;
  pcVar1 = ((char *)GEN_TOP(*param_4));
  if (pcVar1 == ((char *)GEN_TOP(0x0))) {
    pcVar1 = ((char *)REFP(0x112f6a0));
  }
  uVar2 = F_004cf9e0(this GEN_EDX_ARG,0,param_4[2],param_4[1],pcVar1);
  *((uint *)GEN_TOP(((int)this + 0x18))) = uVar2;
  return uVar2;
}

/* ref: FUN_00ce4530 */
GEN_LIB GEN_FRAME uint F_00ce4530(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce4530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                    (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,param_1,((char *)REFP(0x112f6b4)),0,0,0x10);
  return uVar1;
}

/* ref: FUN_00ce4580 */
GEN_LIB GEN_FRAME uint F_00ce4580(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce4580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00406810(param_1);
  }
  return uVar1;
}

/* ref: FUN_00ce45a0 */
GEN_LIB GEN_NOFRAME uint F_00ce45a0(void)
{
  GEN_ENTER(0xce45a0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00cef840(((code *)REFP(0xce4530)));
  uVar1 = F_00cef860(((code *)REFP(0xce4580)));
  return uVar1;
}

/* ref: FUN_00ce45c0 */
GEN_LIB GEN_NOFRAME unsigned int F_00ce45c0(void)
{
  GEN_ENTER(0xce45c0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00ce45d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce45d0(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce45d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *(byte *)(in_ecx + 1) = (byte)in_ecx[1] | 1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00ce45e0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce45e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xce45e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint _MaxCount;
  
  iVar2 = *((int *)GEN_TOP((param_1 + 0xc)));
  if (((int)param_3 < 0) || (bVar1 = *((byte *)GEN_TOP((param_1 + 4))), (bVar1 & 4) != 0)) {
    *((byte *)GEN_TOP((param_1 + 4))) = *((byte *)GEN_TOP((param_1 + 4))) | 4;
    return 0;
  }
  if ((bVar1 & 1) != 0) {
    *((byte *)GEN_TOP((param_1 + 4))) = bVar1 | 2;
    return 0;
  }
  uVar3 = *((int *)GEN_TOP((iVar2 + 0xc))) - *((int *)GEN_TOP((iVar2 + 0x14)));
  _MaxCount = param_3;
  if (uVar3 < param_3) {
    _MaxCount = uVar3;
  }
  if (_MaxCount == 0) {
    return 0;
  }
  F_00c4d027(param_2,param_3,((undefined *)GEN_TOP((*((int *)GEN_TOP((iVar2 + 4))) + *((int *)GEN_TOP((iVar2 + 0x14)))))),_MaxCount);
  *((int *)GEN_TOP((iVar2 + 0x14))) = *((int *)GEN_TOP((iVar2 + 0x14))) + _MaxCount;
  return _MaxCount;
}

/* ref: FUN_00ce4660 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce4660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce4660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined4 *)this = 0;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  REFG(char, 0x15d8c28) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c10));
  REFG(int, 0x15d8c0c) = REFG(int, 0x15d8c0c) + 1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  if (REFG(char, 0x15d8c28) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c10));
  }
  return (uint)this;
}

/* ref: FUN_00ce46b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce46b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce46b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d8c28) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c10));
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    uVar1 = F_00cf3530(*((int *)GEN_TOP(((int)this + 8))));
  }
  REFG(int, 0x15d8c0c) = REFG(int, 0x15d8c0c) - 1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (REFG(char, 0x15d8c28) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c10));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ce4700 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00ce4700(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce4700u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  GEN_FRAME_DECL_GS(0x430, 0, 4);
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  short * psVar9;
  short * psVar10;
  short * psVar11;
  undefined1 * puVar12;
  undefined * puVar13;
  undefined4 uVar14;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x428)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x42c));
  REFG(char, 0x15d8c28) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c10));
  param_2[5] = 0;
  if (param_3 == '\0') {
    param_2[4] = 0;
  }
  param_1[3] = (int)param_2;
  if (param_1[2] == 0) {
    uVar4 = F_00cf3470(param_1,((code *)REFP(0xce45e0)),param_2[6]);
    param_1[2] = uVar4;
    if ((uVar4 == 0) && (REFG(undefined * PTR32, 0x15d938c) != ((code *)GEN_TOP(0x0)))) {
      F_00c48350(((undefined1 *)(gen_frame + 0x28)),0,0x100);
      (*(undefined4 *)(gen_frame + 0x24)) = 3;
      uVar14 = REFG(undefined4, 0x15d8c0c);
      uVar4 = F_00cef8b0(REFG(undefined4, 0x15d8c0c));
      puVar12 = ((undefined1 *)(gen_frame + 0x28));
      puVar13 = &REFG(undefined, 0x112f6d0);
      F_00c4720f(puVar12,&REFG(undefined, 0x112f6d0),uVar4);
      ((code *)REFG(gen_code32, 0x15d938c))(&(*(undefined4 *)(gen_frame + 0x24)),puVar12,puVar13,uVar4,uVar14);
    }
    if (param_1[2] == 0) goto LAB_00ce47c2;
  }
  bVar1 = *(byte *)(param_1 + 1);
  while ((bVar1 & 4) == 0) {
    uVar4 = param_2[4];
    uVar5 = param_2[2];
    if ((uVar5 <= uVar4) ||
       (iVar2 = *param_2, iVar3 = param_1[2],
       uVar4 = F_00cf31e0(iVar3,iVar2 + uVar4,uVar5 - uVar4), (int)uVar4 < 1)) break;
    param_2[4] = param_2[4] + uVar4;
    bVar1 = *(byte *)(param_1 + 1);
  }
  if ((*(byte *)(param_1 + 1) & 4) != 0) {
LAB_00ce47c2: ;
    if (REFG(char, 0x15d8c28) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c10));
    }
    return 0xffffffff;
  }
  if ((*(byte *)(param_1 + 1) & 2) != 0) {
    *(undefined1 *)(param_1 + 1) = 0;
    F_00cef900(param_1[2]);
    uVar4 = F_00cef8d0(param_1[2],0);
    uVar5 = F_00cef8d0(param_1[2],1);
    uVar5 = ((int)uVar5 >> 3) * uVar4;
    if ((uint)param_2[4] < (uint)param_2[2]) {
      if ((*(byte *)(param_1 + 1) & 4) == 0) {
        do {
          uVar6 = param_2[4];
          if (((uint)param_2[2] <= uVar6) ||
             (uVar6 = F_00cf31e0(param_1[2],*param_2 + uVar6,param_2[2] - uVar6), (int)uVar6 < 1))
          break;
          if (((*(byte *)(param_1 + 1) & 1) == 0) && (0 < *param_1)) {
            uVar6 = (int)uVar6 / (int)uVar5;
            uVar8 = param_2[4];
            (*(uint *)(gen_frame + 0x1c)) = 0x40;
            uVar7 = uVar8 / uVar5;
            if ((int)uVar6 < (int)uVar7) {
              uVar7 = uVar6;
            }
            if ((int)uVar7 < 0x40) {
              (*(uint *)(gen_frame + 0x1c)) = uVar7;
            }
            iVar2 = *param_2;
            psVar10 = ((short *)GEN_TOP(((iVar2 - (*(uint *)(gen_frame + 0x1c)) * uVar5) + uVar8)));
            (*(int *)(gen_frame + 0x18)) = 0;
            if (0 < (int)(*(uint *)(gen_frame + 0x1c))) {
              psVar9 = psVar10;
              do {
                if (0 < (int)uVar4) {
                  psVar11 = psVar9;
                  (*(uint *)(gen_frame + 0xc)) = uVar4;
                  do {
                    *psVar11 = (short)(int)((float10)(int)*psVar11 *
                                            (float10)((float)GEN_TOF(((float10)1 -
                                                            (float10)(float)((float10)(*(int *)(gen_frame + 0x18)) /
                                                                            (float10)(int)(*(uint *)(gen_frame + 0x1c)))
                                                            ))) +
                                           (float10)(int)*((short *)GEN_TOP((((iVar2 + uVar8) - (int)psVar10)
                                                                   + (int)psVar11))) *
                                           (float10)(float)((float10)(*(int *)(gen_frame + 0x18)) /
                                                           (float10)(int)(*(uint *)(gen_frame + 0x1c))));
                    psVar11 = psVar11 + 1;
                    (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) - 1;
                  } while ((*(uint *)(gen_frame + 0xc)) != 0);
                }
                (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
                psVar9 = psVar9 + uVar4;
              } while ((*(int *)(gen_frame + 0x18)) < (int)(*(uint *)(gen_frame + 0x1c)));
            }
            uVar6 = (uVar6 - (*(uint *)(gen_frame + 0x1c))) * uVar5;
            if (0 < (int)uVar6) {
              F_01051df1(*param_2 + param_2[4],uVar6,(*(uint *)(gen_frame + 0x1c)) * uVar5 + *param_2 + param_2[4],uVar6
                        );
            }
            *param_1 = 0;
          }
          param_2[4] = param_2[4] + uVar6;
        } while ((*(byte *)(param_1 + 1) & 4) == 0);
        if ((*(byte *)(param_1 + 1) & 4) == 0) goto LAB_00ce4c0e;
      }
    }
    else {
      uVar6 = F_00cf31e0(param_1[2],((short *)(gen_frame + 0x128)),0x300);
      if ((*(byte *)(param_1 + 1) & 4) == 0) {
        if (0 < (int)uVar6) {
          uVar6 = (int)uVar6 / (int)uVar5;
          (*(uint *)(gen_frame + 0x1c)) = 0x40;
          uVar8 = (uint)param_2[4] / uVar5;
          if ((int)uVar6 < (int)uVar8) {
            if ((int)uVar6 < 0x40) {
              (*(uint *)(gen_frame + 0x1c)) = uVar6;
            }
          }
          else if ((int)uVar8 < 0x40) {
            (*(uint *)(gen_frame + 0x1c)) = uVar8;
          }
          psVar10 = ((short *)GEN_TOP(((param_2[4] - (*(uint *)(gen_frame + 0x1c)) * uVar5) + *param_2)));
          (*(int *)(gen_frame + 0x18)) = 0;
          if (0 < (int)(*(uint *)(gen_frame + 0x1c))) {
            psVar9 = psVar10;
            do {
              if (0 < (int)uVar4) {
                psVar11 = psVar9;
                (*(uint *)(gen_frame + 0x0)) = uVar4;
                do {
                  *psVar11 = (short)(int)((float10)(int)*psVar11 *
                                          (float10)((float)GEN_TOF(((float10)1 -
                                                          (float10)(float)((float10)(*(int *)(gen_frame + 0x18)) /
                                                                          (float10)(int)(*(uint *)(gen_frame + 0x1c))))))
                                         + (float10)(int)*((short *)GEN_TOP(((int)psVar11 +
                                                                   ((int)((short *)(gen_frame + 0x128)) - (int)psVar10))))
                                           * (float10)(float)((float10)(*(int *)(gen_frame + 0x18)) /
                                                             (float10)(int)(*(uint *)(gen_frame + 0x1c))));
                  psVar11 = psVar11 + 1;
                  (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) - 1;
                } while ((*(uint *)(gen_frame + 0x0)) != 0);
              }
              psVar9 = psVar9 + uVar4;
              (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
            } while ((*(int *)(gen_frame + 0x18)) < (int)(*(uint *)(gen_frame + 0x1c)));
          }
          *param_1 = 0;
        }
        goto LAB_00ce4c0e;
      }
    }
    if (REFG(char, 0x15d8c28) == '\0') {
      return 0xffffffff;
    }
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c10));
    return 0xffffffff;
  }
LAB_00ce4c0e: ;
  uVar5 = param_2[5];
  uVar4 = param_2[3];
  if (REFG(char, 0x15d8c28) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c10));
  }
  return (uint)(uVar5 < uVar4);
}

/* ref: FUN_00ce4c50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce4c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce4c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d8c28) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c10));
  uVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    uVar1 = F_00cf3530(*((int *)GEN_TOP(((int)this + 8))));
  }
  REFG(int, 0x15d8c0c) = REFG(int, 0x15d8c0c) - 1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (REFG(char, 0x15d8c28) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c10));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ce4ca0 */
GEN_LIB GEN_FRAME unsigned int F_00ce4ca0(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce4ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00ce4cd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce4cd0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xce4cd0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_3 & 3;
  iVar1 = (int)param_3 >> 2;
  if (uVar3 == 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x28))))(param_1 GEN_EDX_FWD,iVar1,(undefined4)gen_fl2bits(param_2),param_4);
  }
  else {
    if (uVar3 == 1) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x2c))))(param_1 GEN_EDX_ARG,iVar1,(undefined4)gen_fl2bits(param_2),param_4)
      ;
      return uVar3;
    }
    uVar2 = param_3;
    if (uVar3 == 2) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x30))))(param_1 GEN_EDX_ARG,iVar1,(undefined4)gen_fl2bits(param_2),param_4)
      ;
      return uVar3;
    }
  }
  return uVar2;
}

/* ref: FUN_00ce4d40 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ce4d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce4d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int local_8;
  
  iVar2 = 0;
  local_8 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 4)))) {
    do {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + *((int *)GEN_TOP(((int)this + 8)))))) + 0xc))))
                        (iVar2 + *((int *)GEN_TOP(((int)this + 8))));
      bVar3 = (char)uVar1 != '\0';
      if (bVar3) {
        ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar2))) + 8))))
                  (*((int *)GEN_TOP(((int)this + 8))) + iVar2,param_1);
      }
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar2))) + 0xc))))
                        (*((int *)GEN_TOP(((int)this + 0xc))) + iVar2);
      bVar4 = (char)uVar1 != '\0';
      if (bVar4) {
        ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar2))) + 8))))
                  (*((int *)GEN_TOP(((int)this + 0xc))) + iVar2,param_1);
      }
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + *((int *)GEN_TOP(((int)this + 0x10)))))) + 0xc))))
                        (iVar2 + *((int *)GEN_TOP(((int)this + 0x10))));
      if ((char)uVar1 == '\0') {
        if (bVar4 || bVar3) goto LAB_00ce4dcb;
      }
      else {
        ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + iVar2))) + 8))))
                  (*((int *)GEN_TOP(((int)this + 0x10))) + iVar2,param_1);
LAB_00ce4dcb: ;
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG,local_8);
      }
      local_8 = local_8 + 1;
      iVar2 = iVar2 + 0x24;
    } while (local_8 < *((int *)GEN_TOP(((int)this + 4))));
  }
  return;
}

/* ref: FUN_00ce4e00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce4e00(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xce4e00u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  float10 extraout_ST0;
  float10 fVar5;
  double dVar6;
  
  iVar1 = param_2 * 0x24;
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + iVar1))) + 0x10))))
                    (*((int *)GEN_TOP((param_1 + 0x10))) + iVar1); dVar6 = extraout_ST0;
  fVar5 = (float10)param_3;
  bVar3 = GEN_ISNAN(fVar5) || GEN_ISNAN(extraout_ST0);
  bVar4 = bVar3 || fVar5 == extraout_ST0;
  if (bVar3 != bVar4) {
    return CONCAT22((short)((ulonglong)gen_d2bits(dVar6) >> 0x10),
                    (ushort)!(extraout_ST0 <= fVar5) << 8 | (ushort)bVar3 << 10 |
                    (ushort)bVar4 << 0xe);
  }
  if (param_4 != 0) {
    uVar2 = F_00cccd90(*((int *)GEN_TOP((param_1 + 0x10))) + iVar1 GEN_EDX_FWD,param_3,param_4);
    return uVar2;
  }
  F_00cccbd0(*((int *)GEN_TOP((param_1 + 0x10))) + iVar1 GEN_EDX_ARG,param_3);
  return 0;
}

/* ref: FUN_00ce4e90 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ce4e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce4e90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  longlong lVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint * puVar6;
  int iVar7;
  
  *((uint *)GEN_TOP(((int)this + 4))) = param_1;
  if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
    if (param_1 == 0) {
      puVar2 = ((uint *)GEN_TOP(F_00406a50(4)));
    }
    else {
      uVar3 = -(uint)((int)((ulonglong)param_1 * 0x24 >> 0x20) != 0) |
              (uint)((ulonglong)param_1 * 0x24);
      puVar2 = ((uint *)GEN_TOP(F_00ce52b0(-(uint)(0xfffffffb < uVar3) | uVar3 + 4)));
    }
    if (puVar2 == ((uint *)GEN_TOP(0x0))) {
      puVar2 = ((uint *)GEN_TOP(0x0));
    }
    else {
      *puVar2 = param_1;
      puVar2 = puVar2 + 1;
      puVar6 = puVar2;
      uVar3 = param_1;
      while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
        F_00cccb10(puVar6 GEN_EDX_ARG,(float)(float10)0);
        puVar6 = puVar6 + 9;
      }
    }
    *((uint * PTR32 *)GEN_TOP(((int)this + 8))) = puVar2;
  }
  if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
    uVar3 = *((uint *)GEN_TOP(((int)this + 4)));
    if (uVar3 == 0) {
      puVar2 = ((uint *)GEN_TOP(F_00406a50(4)));
    }
    else {
      uVar4 = -(uint)((int)((ulonglong)uVar3 * 0x24 >> 0x20) != 0) | (uint)((ulonglong)uVar3 * 0x24)
      ;
      puVar2 = ((uint *)GEN_TOP(F_00ce52b0(-(uint)(0xfffffffb < uVar4) | uVar4 + 4)));
    }
    if (puVar2 == ((uint *)GEN_TOP(0x0))) {
      puVar2 = ((uint *)GEN_TOP(0x0));
    }
    else {
      *puVar2 = uVar3;
      puVar2 = puVar2 + 1;
      puVar6 = puVar2;
      while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
        F_00cccb10(puVar6 GEN_EDX_ARG,(float)(float10)0);
        puVar6 = puVar6 + 9;
      }
    }
    *((uint * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar2;
  }
  if (*((int *)GEN_TOP(((int)this + 0x10))) == 0) {
    uVar3 = *((uint *)GEN_TOP(((int)this + 4)));
    if (uVar3 == 0) {
      puVar2 = ((uint *)GEN_TOP(F_00406a50(4)));
    }
    else {
      uVar4 = -(uint)((int)((ulonglong)uVar3 * 0x24 >> 0x20) != 0) | (uint)((ulonglong)uVar3 * 0x24)
      ;
      puVar2 = ((uint *)GEN_TOP(F_00ce52b0(-(uint)(0xfffffffb < uVar4) | uVar4 + 4)));
    }
    if (puVar2 == ((uint *)GEN_TOP(0x0))) {
      puVar2 = ((uint *)GEN_TOP(0x0));
    }
    else {
      *puVar2 = uVar3;
      puVar2 = puVar2 + 1;
      puVar6 = puVar2;
      while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
        F_00cccb10(puVar6 GEN_EDX_ARG,(float)(float10)0);
        puVar6 = puVar6 + 9;
      }
    }
    *((uint * PTR32 *)GEN_TOP(((int)this + 0x10))) = puVar2;
  }
  if (*((int *)GEN_TOP(((int)this + 0x14))) == 0) {
    lVar1 = (ulonglong)*((uint *)GEN_TOP(((int)this + 4))) * 4;
    uVar3 = F_00406a50(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
    *((uint *)GEN_TOP(((int)this + 0x14))) = uVar3;
  }
  iVar5 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 4)))) {
    iVar7 = 0;
    do {
      ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + iVar7))) + 4))))
                (*((int *)GEN_TOP(((int)this + 8))) + iVar7,(unsigned int)gen_fl2bits((float)(REFG(float, 0x1094808))));
      ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + iVar7))) + 4))))
                (*((int *)GEN_TOP(((int)this + 0xc))) + iVar7,*(undefined4 *)&REFG(undefined, 0x112f71c));
      ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + iVar7))) + 4))))
                (*((int *)GEN_TOP(((int)this + 0x10))) + iVar7,(undefined4)gen_fl2bits((float)(float10)1));
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 0x24;
    } while (iVar5 < *((int *)GEN_TOP(((int)this + 4))));
  }
  return;
}

/* ref: FUN_00ce5070 */
GEN_LIB_GS GEN_FRAME uint F_00ce5070(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xce5070u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x808, 8, 4);
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x800)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x804));
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112f980)),param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112f960)),param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x0)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return extraout_EAX;
}

/* ref: FUN_00ce5110 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce5110(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xce5110u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  float fVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  float10 extraout_ST0;
  float10 fVar6;
  double dVar7;
  
  if ((!((float10)0 <= (float10)param_3)) || (!((float10)param_3 <= (float10)1))) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xce5070));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112f808))
                    ,&REFG(undefined, 0x112f7ca),((char *)REFP(0x112f7b8)),0x8e,
                    ((char *)REFP(0x112f77c)));
  }
  iVar2 = param_2 * 0x24;
  fVar1 = (float)((float10)param_3 * (float10)*(float *)&REFG(undefined, 0x134d324) +
                 (float10)*(double *)&REFG(undefined, 0x10928e8));
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 8))) + iVar2))) + 0x10))))
                    (*((int *)GEN_TOP((param_1 + 8))) + iVar2); dVar7 = extraout_ST0;
  fVar6 = (float10)fVar1;
  bVar4 = GEN_ISNAN(fVar6) || GEN_ISNAN(extraout_ST0);
  bVar5 = bVar4 || fVar6 == extraout_ST0;
  if (bVar4 == bVar5) {
    if (param_4 != 0) {
      uVar3 = F_00cccd90(*((int *)GEN_TOP((param_1 + 8))) + iVar2 GEN_EDX_ARG,fVar1,param_4);
      return uVar3;
    }
    F_00cccbd0(*((int *)GEN_TOP((param_1 + 8))) + iVar2 GEN_EDX_ARG,fVar1);
    return 0;
  }
  return CONCAT22((short)((ulonglong)gen_d2bits(dVar7) >> 0x10),
                  (ushort)!(extraout_ST0 <= fVar6) << 8 | (ushort)bVar4 << 10 | (ushort)bVar5 << 0xe
                 );
}

/* ref: FUN_00ce51f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce51f0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xce51f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  float10 extraout_ST0;
  float10 fVar5;
  double dVar6;
  
  if (!((float10)param_3 <= (float10)0) == (GEN_ISNAN((float10)0) || GEN_ISNAN((float10)param_3))) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xce5070));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x112f8f8))
                    ,&REFG(undefined, 0x112f7cb),((char *)REFP(0x112f8e4)),0xa0,
                    ((char *)REFP(0x112f7cc)));
  }
  iVar1 = param_2 * 0x24;
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xc))) + iVar1))) + 0x10))))
                    (*((int *)GEN_TOP((param_1 + 0xc))) + iVar1); dVar6 = extraout_ST0;
  fVar5 = (float10)param_3;
  bVar3 = GEN_ISNAN(fVar5) || GEN_ISNAN(extraout_ST0);
  bVar4 = bVar3 || fVar5 == extraout_ST0;
  if (bVar3 == bVar4) {
    if (param_4 != 0) {
      uVar2 = F_00cccd90(*((int *)GEN_TOP((param_1 + 0xc))) + iVar1 GEN_EDX_ARG,param_3,param_4);
      return uVar2;
    }
    F_00cccbd0(*((int *)GEN_TOP((param_1 + 0xc))) + iVar1 GEN_EDX_ARG,param_3);
    return 0;
  }
  return CONCAT22((short)((ulonglong)gen_d2bits(dVar6) >> 0x10),
                  (ushort)!(extraout_ST0 <= fVar5) << 8 | (ushort)bVar3 << 10 | (ushort)bVar4 << 0xe
                 );
}

/* ref: FUN_00ce52b0 */
GEN_LIB GEN_FRAME uint F_00ce52b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce52b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,param_1,((char *)REFP(0x112a0a8)),0,0,0x10);
  return uVar1;
}

/* ref: FUN_00ce5300 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce5300(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce5300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::DynamicValue::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce5330(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce5330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  int iVar2;
  int in_ecx;
  
  if ((param_2 & 2) != 0) {
    piVar1 = ((int *)GEN_TOP((param_1 - 4)));
    iVar2 = *piVar1;
    in_ecx = param_1 + iVar2 * 0x24;
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      in_ecx = in_ecx - 0x24;
      F_00cccb40(in_ecx GEN_EDX_FWD);
    }
    if (((param_2 & 1) != 0) && (piVar1 != ((int *)GEN_TOP(0x0)))) {
      F_00406810(piVar1);
    }
    return (uint)piVar1;
  }
  F_00cccb40(param_1 GEN_EDX_ARG);
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    F_00406810(param_1);
  }
  return param_1;
}

/* ref: FUN_00ce53a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce53a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce53a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00cf506d(this GEN_EDX_FWD,&REFG(undefined, 0x134d3a0));
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x28))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x112fa8c));
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOAudioBounce::vf8 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce53e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xce53e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(*param_3));
  *((undefined4 *)GEN_TOP((param_1 + 0x2a))) = *puVar1;
  *((undefined4 *)GEN_TOP((param_1 + 0x2e))) = puVar1[1];
  *((undefined4 *)GEN_TOP((param_1 + 0x32))) = puVar1[2];
  *((undefined4 *)GEN_TOP((param_1 + 0x36))) = puVar1[3];
  *((undefined2 *)GEN_TOP((param_1 + 0x3a))) = *(undefined2 *)(puVar1 + 4);
  puVar1 = ((undefined4 *)GEN_TOP(*param_5));
  *((undefined4 *)GEN_TOP((param_1 + 0x3c))) = *puVar1;
  *((undefined4 *)GEN_TOP((param_1 + 0x40))) = puVar1[1];
  *((undefined4 *)GEN_TOP((param_1 + 0x44))) = puVar1[2];
  *((undefined4 *)GEN_TOP((param_1 + 0x48))) = puVar1[3];
  *((undefined2 *)GEN_TOP((param_1 + 0x4c))) = *(undefined2 *)(puVar1 + 4);
  uVar2 = F_00cf4b89(param_1,param_2,param_3,param_4,param_5);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOAudioBounce::vf10 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce5450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xce5450u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined * pFVar1;
  int iVar2;
  undefined4 * puVar3;
  int iVar4;
  float * pfVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  iVar2 = (*(int *)&gen_args[0]);
  pfVar5 = ((float *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2])));
  F_00c46aa0(*(*(undefined4 * PTR32 *)&gen_args[4]),pfVar5,(uint)*((ushort *)GEN_TOP(((*(int *)&gen_args[0]) + 0x3e))) * (*(undefined4 * PTR32 *)&gen_args[2])[2] * 4);
  (*(undefined1 *)((char *)&(*(int *)&gen_args[0]) + 3)) = '\x01';
  if (((*(uint *)&gen_args[5]) == 0) || (*((int *)GEN_TOP((iVar2 + 0x24))) == 0)) goto LAB_00ce55c7;
  if ((*(undefined4 * PTR32 *)&gen_args[2])[1] != 1) {
    if (*((int *)GEN_TOP((iVar2 + 0x20))) < 1) goto LAB_00ce55c7;
    if ((*(undefined4 * PTR32 *)&gen_args[2])[1] != 1) {
      (*(uint *)&gen_args[5]) = 0;
      puVar3 = (*(undefined4 * PTR32 *)&gen_args[2]);
      if (0 < (int)(*(undefined4 * PTR32 *)&gen_args[2])[2]) {
        do {
          iVar4 = 0;
          if (*((short *)GEN_TOP((iVar2 + 0x3e))) != 0) {
            do {
              if (iVar4 < 2) {
                pFVar1 = *((undefined * PTR32 *)GEN_TOP((iVar2 + 0x24)));
                *((int *)GEN_TOP((iVar2 + 0x20))) = *((int *)GEN_TOP((iVar2 + 0x20))) + 1;
                (*(uint *)(gen_frame + 0x4)) = 0;
                F_00c4922b(&(*(uint *)(gen_frame + 0x4)),2,1,pFVar1);
              }
              iVar4 = iVar4 + 1;
              puVar3 = (*(undefined4 * PTR32 *)&gen_args[2]);
            } while (iVar4 < (int)(uint)*((ushort *)GEN_TOP((iVar2 + 0x3e))));
          }
          (*(uint *)&gen_args[5]) = (*(uint *)&gen_args[5]) + 1;
        } while ((int)(*(uint *)&gen_args[5]) < (int)puVar3[2]);
      }
      goto LAB_00ce55c7;
    }
  }
  (*(int *)(gen_frame + 0x0)) = 0;
  if (0 < (int)(*(undefined4 * PTR32 *)&gen_args[2])[2]) {
    fVar6 = (float10)REFG(float, 0x1090708);
    do {
      iVar4 = 0;
      if (*((short *)GEN_TOP((iVar2 + 0x3e))) != 0) {
        do {
          fVar8 = (float10)1;
          if (iVar4 < 2) {
            *((int *)GEN_TOP((iVar2 + 0x20))) = *((int *)GEN_TOP((iVar2 + 0x20))) + 1;
            (*(uint *)&gen_args[5]) = (uint)gen_fl2bits(*pfVar5);
            fVar7 = ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[5]))));
            if (!(fVar8 <= fVar7) || ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar8)) || fVar7 == fVar8)) {
              if (fVar7 <= fVar6 && ((!GEN_ISNAN(fVar6) && !GEN_ISNAN(fVar7)) && fVar6 != fVar7)) {
                (*(uint *)&gen_args[5]) = (uint)gen_fl2bits((float)fVar6);
              }
            }
            else {
              (*(uint *)&gen_args[5]) = (uint)gen_fl2bits((float)fVar8);
            }
            pFVar1 = *((undefined * PTR32 *)GEN_TOP((iVar2 + 0x24)));
            (*(uint *)(gen_frame + 0x4)) = (int)(((double)GEN_TOD(gen_bits2f((*(uint *)&gen_args[5])))) * *(double *)&REFG(undefined, 0x10920e0)) & 0xffff;
            F_00c4922b(&(*(uint *)(gen_frame + 0x4)),2,1,pFVar1);
            if ((short)(*(uint *)(gen_frame + 0x4)) != 0) {
              (*(undefined1 *)((char *)&(*(int *)&gen_args[0]) + 3)) = '\0';
            }
          }
          pfVar5 = pfVar5 + 1;
          fVar6 = (float10)REFG(float, 0x1090708);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)(uint)*((ushort *)GEN_TOP((iVar2 + 0x3e))));
      }
      iVar4 = (*(int *)(gen_frame + 0x0)) + 1;
      (*(int *)(gen_frame + 0x0)) = iVar4;
    } while (iVar4 < (int)(*(undefined4 * PTR32 *)&gen_args[2])[2]);
  }
LAB_00ce55c7: ;
  if ((*((char *)GEN_TOP((iVar2 + 0x29))) != '\0') ||
     ((*((char *)GEN_TOP((iVar2 + 0x28))) != '\0' && ((*(undefined1 *)((char *)&(*(int *)&gen_args[0]) + 3)) != '\0')))) {
    *((undefined2 *)GEN_TOP((iVar2 + 0x28))) = 0;
    if (*((undefined * PTR32 *)GEN_TOP((iVar2 + 0x24))) != ((undefined *)GEN_TOP(0x0))) {
      F_00c4bbff(*((undefined * PTR32 *)GEN_TOP((iVar2 + 0x24))),0,0);
      pFVar1 = *((undefined * PTR32 *)GEN_TOP((iVar2 + 0x24)));
      (*(int *)(gen_frame + 0x0)) = *((int *)GEN_TOP((iVar2 + 0x20))) * 2 + 0x24;
      (*(int *)&gen_args[0]) = 0;
      (*(uint *)&gen_args[5]) = 0;
      F_00c4922b(&REFG(undefined, 0x112fa68),1,4,pFVar1);
      F_00c4922b(&(*(int *)(gen_frame + 0x0)),4,1,*((undefined * PTR32 *)GEN_TOP((iVar2 + 0x24))));
      F_00c4922b(&REFG(undefined, 0x112fa70),1,4,*((undefined * PTR32 *)GEN_TOP((iVar2 + 0x24))));
      F_00c4922b(&REFG(undefined, 0x112fa78),1,4,*((undefined * PTR32 *)GEN_TOP((iVar2 + 0x24))));
      pFVar1 = *((undefined * PTR32 *)GEN_TOP((iVar2 + 0x24)));
      (*(int *)(gen_frame + 0x0)) = 0x10;
      F_00c4922b(&(*(int *)(gen_frame + 0x0)),4,1,pFVar1);
      pFVar1 = *((undefined * PTR32 *)GEN_TOP((iVar2 + 0x24)));
      (*(int *)&gen_args[0]) = 1;
      F_00c4922b(&(*(int *)&gen_args[0]),2,1,pFVar1);
      pFVar1 = *((undefined * PTR32 *)GEN_TOP((iVar2 + 0x24)));
      (*(int *)&gen_args[0]) = 2;
      F_00c4922b(&(*(int *)&gen_args[0]),2,1,pFVar1);
      pFVar1 = *((undefined * PTR32 *)GEN_TOP((iVar2 + 0x24)));
      (*(uint *)&gen_args[5]) = REFG(undefined4, 0x134c7e8);
      F_00c4922b(&(*(uint *)&gen_args[5]),4,1,pFVar1);
      pFVar1 = *((undefined * PTR32 *)GEN_TOP((iVar2 + 0x24)));
      (*(uint *)&gen_args[5]) = REFG(undefined4, 0x134c7e8) * 4;
      F_00c4922b(&(*(uint *)&gen_args[5]),4,1,pFVar1);
      (*(int *)&gen_args[0]) = 4;
      F_00c4922b(&(*(int *)&gen_args[0]),2,1,*((undefined * PTR32 *)GEN_TOP((iVar2 + 0x24))));
      pFVar1 = *((undefined * PTR32 *)GEN_TOP((iVar2 + 0x24)));
      (*(int *)&gen_args[0]) = 0x10;
      F_00c4922b(&(*(int *)&gen_args[0]),2,1,pFVar1);
      F_00c4922b(&REFG(undefined, 0x112fa80),1,4,*((undefined * PTR32 *)GEN_TOP((iVar2 + 0x24))));
      pFVar1 = *((undefined * PTR32 *)GEN_TOP((iVar2 + 0x24)));
      (*(uint *)&gen_args[5]) = *((int *)GEN_TOP((iVar2 + 0x20))) * 2;
      F_00c4922b(&(*(uint *)&gen_args[5]),4,1,pFVar1);
      F_00c49312(*((undefined * PTR32 *)GEN_TOP((iVar2 + 0x24))));
      *((undefined4 *)GEN_TOP((iVar2 + 0x20))) = 0;
      *((undefined4 *)GEN_TOP((iVar2 + 0x24))) = 0;
    }
  }
  (*(undefined4 * PTR32 *)&gen_args[4])[2] = (*(undefined4 * PTR32 *)&gen_args[2])[2];
  (*(undefined4 * PTR32 *)&gen_args[4])[1] = (*(undefined4 * PTR32 *)&gen_args[2])[1];
  return (uint)(*(undefined4 * PTR32 *)&gen_args[4]);
}

/* ref: FUN_00ce5770 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce5770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce5770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  undefined * pFVar1;
  uint uVar2;
  int iVar3;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x24))) != ((undefined *)GEN_TOP(0x0))) {
    F_00c49312(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x24))));
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  }
  pFVar1 = F_00c495d8(param_1,((char *)REFP(0x112f9e4)));
  *((undefined * PTR32 *)GEN_TOP(((int)this + 0x24))) = pFVar1;
  *((undefined2 *)GEN_TOP(((int)this + 0x28))) = 0;
  iVar3 = 0x2c;
  do {
    F_00c50a15(0x20,*((undefined * PTR32 *)GEN_TOP(((int)this + 0x24))));
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  uVar2 = F_00c50ee3(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x24))));
  return uVar2;
}

/* ref: FUN_00ce5800 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce5800(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce5800u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x112fac8));
  if (uVar1 != 0) {
    *param_3 = param_1;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
    return 0;
  }
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x112b570));
  if (uVar1 != 0) {
    *param_3 = param_1;
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 4))))(param_1 GEN_EDX_ARG);
    return 0;
  }
  *param_3 = 0;
  return 0x80004002;
}

/* ref: FUN_00ce5870 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00ce5870(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce5870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (uint)(gen_imp_InterlockedIncrement(((LONG *)GEN_TOP((param_1 + 0x1c)))));
}

/* ref: FUN_00ce5890 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce5890(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce5890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = gen_imp_InterlockedDecrement(param_1 + 7);
  if ((uVar1 == 0) && (param_1 != ((int *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x38))))(param_1 GEN_EDX_ARG,1);
  }
  return uVar1;
}

/* ref: FUN_00ce58c0 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00ce58c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce58c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  return 0;
}

/* ref: FUN_00ce58d0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_00ce58d0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce58d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  return;
}

/* ref: FUN_00ce58e0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce58e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce58e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00ce58f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce58f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce58f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOAudioBounce::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce5900(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce5900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[15])REFP(0x112fa8c));
  F_00cf3b1e(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ce5930 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce5930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce5930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00cf506d(this GEN_EDX_FWD,&REFG(undefined, 0x134d818));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x112fb9c));
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOStereoMixdown::vf8 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce5960(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xce5960u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(*param_3));
  *((undefined4 *)GEN_TOP((param_1 + 0x20))) = *puVar1;
  *((undefined4 *)GEN_TOP((param_1 + 0x24))) = puVar1[1];
  *((undefined4 *)GEN_TOP((param_1 + 0x28))) = puVar1[2];
  *((undefined4 *)GEN_TOP((param_1 + 0x2c))) = puVar1[3];
  *((undefined2 *)GEN_TOP((param_1 + 0x30))) = *(undefined2 *)(puVar1 + 4);
  puVar1 = ((undefined4 *)GEN_TOP(*param_5));
  *((undefined4 *)GEN_TOP((param_1 + 0x32))) = *puVar1;
  *((undefined4 *)GEN_TOP((param_1 + 0x36))) = puVar1[1];
  *((undefined4 *)GEN_TOP((param_1 + 0x3a))) = puVar1[2];
  *((undefined4 *)GEN_TOP((param_1 + 0x3e))) = puVar1[3];
  *((undefined2 *)GEN_TOP((param_1 + 0x42))) = *(undefined2 *)(puVar1 + 4);
  uVar2 = F_00cf4b89(param_1,param_2,param_3,param_4,param_5);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOStereoMixdown::vf10 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce59d0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(uint param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xce59d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(uint param_6 = (uint)gen_a5;)
  float * pfVar1;
  ushort uVar2;
  float * pfVar3;
  int iVar4;
  float * pfVar5;
  int iVar6;
  float * pfVar7;
  float * pfVar8;
  
  iVar6 = param_1;
  if (param_3[1] == 1) {
    if (param_6 == 0) {
      uVar2 = *((ushort *)GEN_TOP((param_1 + 0x34)));
      if (*((ushort *)GEN_TOP((param_1 + 0x22))) <= *((ushort *)GEN_TOP((param_1 + 0x34)))) {
        uVar2 = *((ushort *)GEN_TOP((param_1 + 0x22)));
      }
      iVar4 = *param_3;
      iVar6 = *param_5;
      param_6 = 0;
      if (param_3[2] != 0) {
        do {
          F_00c46aa0(iVar6,iVar4,(uint)uVar2 * 4);
          iVar6 = iVar6 + (uint)*((ushort *)GEN_TOP((param_1 + 0x34))) * 4;
          param_6 = param_6 + 1;
          iVar4 = iVar4 + (uint)*((ushort *)GEN_TOP((param_1 + 0x22))) * 4;
        } while (param_6 < (uint)param_3[2]);
      }
    }
    else {
      uVar2 = *((ushort *)GEN_TOP((param_1 + 0x34)));
      pfVar5 = ((float *)GEN_TOP(*param_5));
      pfVar8 = ((float *)GEN_TOP(*param_3));
      pfVar3 = pfVar5 + 1;
      param_1 = 0;
      if (uVar2 == 2) {
        if (param_3[2] != 0) {
          do {
            *pfVar5 = (float)(float10)0;
            *pfVar3 = (float)(float10)0;
            iVar4 = 0;
            pfVar7 = pfVar8;
            if (*((short *)GEN_TOP((iVar6 + 0x22))) != 0) {
              do {
                pfVar1 = (float *)(&REFG(float, 0x112fae4) + iVar4);
                iVar4 = iVar4 + 1;
                pfVar8 = pfVar7 + 1;
                *pfVar5 = (float)((float10)*pfVar1 * (float10)*pfVar7 + (float10)*pfVar5);
                *pfVar3 = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x112faf8) + iVar4 * 4) * (float10)*pfVar7
                                 + (float10)*pfVar3)));
                pfVar7 = pfVar8;
              } while (iVar4 < (int)(uint)*((ushort *)GEN_TOP((iVar6 + 0x22))));
            }
            param_1 = param_1 + 1;
            pfVar5 = pfVar5 + 2;
            pfVar3 = pfVar3 + 2;
          } while (param_1 < (uint)param_3[2]);
        }
      }
      else if (param_3[2] != 0) {
        do {
          *pfVar5 = (float)(float10)0;
          iVar4 = 0;
          *pfVar3 = (float)(float10)0;
          pfVar7 = pfVar8;
          if (*((short *)GEN_TOP((iVar6 + 0x22))) != 0) {
            do {
              pfVar1 = (float *)(&REFG(float, 0x112fae4) + iVar4);
              iVar4 = iVar4 + 1;
              pfVar8 = pfVar7 + 1;
              *pfVar5 = (float)((float10)*pfVar1 * (float10)*pfVar7 + (float10)*pfVar5);
              *pfVar3 = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x112faf8) + iVar4 * 4) * (float10)*pfVar7 +
                               (float10)*pfVar3)));
              pfVar7 = pfVar8;
            } while (iVar4 < (int)(uint)*((ushort *)GEN_TOP((iVar6 + 0x22))));
          }
          F_00c48350(pfVar5 + 2,0,(uint)uVar2 * 4 - 8);
          pfVar5 = pfVar5 + *((ushort *)GEN_TOP((iVar6 + 0x34)));
          param_1 = param_1 + 1;
          pfVar3 = pfVar5 + 1;
        } while (param_1 < (uint)param_3[2]);
      }
    }
  }
  param_5[2] = param_3[2];
  param_5[1] = param_3[1];
  return (uint)param_5;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOStereoMixdown::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce5b60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce5b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[15])REFP(0x112fb9c));
  F_00cf3b1e(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ce5b90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce5b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce5b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00cf506d(this GEN_EDX_FWD,&REFG(undefined, 0x134dc90));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x112fc74));
  return (uint)this;
}

/* ref: _AFX_RICHEDIT_STATE::~_AFX_RICHEDIT_STATE */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce5bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce5bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x112fc74));
  if (*(int *)(this + 0x48) != 0) {
    gen_imp_CoTaskMemFree(*(int *)(this + 0x48));
  }
  if (*(int *)(this + 0x4c) != 0) {
    gen_imp_CoTaskMemFree(*(int *)(this + 0x4c));
  }
  F_00cf3b1e(this GEN_EDX_ARG);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOPrologicIIz::vf8 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce5bf0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xce5bf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  undefined4 * puVar1;
  LPVOID pvVar2;
  uint uVar3;
  SIZE_T cb;
  
  puVar1 = ((undefined4 *)GEN_TOP(*param_3));
  *((undefined4 *)GEN_TOP((param_1 + 0x20))) = *puVar1;
  *((undefined4 *)GEN_TOP((param_1 + 0x24))) = puVar1[1];
  *((undefined4 *)GEN_TOP((param_1 + 0x28))) = puVar1[2];
  *((undefined4 *)GEN_TOP((param_1 + 0x2c))) = puVar1[3];
  *((undefined2 *)GEN_TOP((param_1 + 0x30))) = *(undefined2 *)(puVar1 + 4);
  puVar1 = ((undefined4 *)GEN_TOP(*param_5));
  *((undefined4 *)GEN_TOP((param_1 + 0x32))) = *puVar1;
  *((undefined4 *)GEN_TOP((param_1 + 0x36))) = puVar1[1];
  *((undefined4 *)GEN_TOP((param_1 + 0x3a))) = puVar1[2];
  *((undefined4 *)GEN_TOP((param_1 + 0x3e))) = puVar1[3];
  *((undefined2 *)GEN_TOP((param_1 + 0x42))) = *(undefined2 *)(puVar1 + 4);
  uVar3 = (uint)(*((int *)GEN_TOP((param_1 + 0x24))) * 10) / 1000;
  *((uint *)GEN_TOP((param_1 + 0x44))) = uVar3;
  if (uVar3 != 0) {
    cb = (*((ushort *)GEN_TOP((param_1 + 0x2e))) >> 3) * uVar3;
    pvVar2 = gen_imp_CoTaskMemAlloc(cb);
    *((LPVOID *)GEN_TOP((param_1 + 0x48))) = pvVar2;
    pvVar2 = gen_imp_CoTaskMemAlloc(cb);
    *((LPVOID *)GEN_TOP((param_1 + 0x4c))) = pvVar2;
    F_00c48350(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x48))),0,cb);
    F_00c48350(*((undefined * PTR32 *)GEN_TOP((param_1 + 0x4c))),0,cb);
  }
  uVar3 = F_00cf4b89(param_1,param_2,param_3,param_4,param_5);
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOPrologicIIz::vf10 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce5cb0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4), GEN_P(uint param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xce5cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  GEN_PIN(uint param_6 = (uint)gen_a5;)
  int * piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  uint local_14;
  
  piVar6 = param_3;
  if (param_3[1] == 1) {
    iVar3 = *param_3;
    iVar9 = *param_5;
    uVar7 = (uint)(*((ushort *)GEN_TOP((param_1 + 0x2e))) >> 3);
    iVar11 = uVar7 * 5;
    iVar4 = uVar7 * 6;
    iVar5 = uVar7 * 7;
    if (param_6 == 0) {
      piVar1 = param_3 + 2;
      param_3 = ((int *)GEN_TOP(0x0));
      if (*piVar1 != 0) {
        do {
          F_00c46aa0((uint)*((ushort *)GEN_TOP((param_1 + 0x3e))) * (int)param_3 + iVar9,
                     (uint)*((ushort *)GEN_TOP((param_1 + 0x2c))) * (int)param_3 + iVar3,
                     (uint)*((ushort *)GEN_TOP((param_1 + 0x3e))));
          param_3 = ((int *)GEN_TOP(((int)param_3 + 1)));
        } while (param_3 < (uint)piVar6[2]);
      }
    }
    else {
      uVar10 = *((uint *)GEN_TOP((param_1 + 0x44)));
      if (uVar10 == 0) {
        if (param_3[2] != 0) {
          iVar2 = iVar9 + uVar7 * 4;
          uVar7 = 0;
          do {
            iVar8 = *((ushort *)GEN_TOP((param_1 + 0x2c))) * uVar7;
            iVar12 = *((ushort *)GEN_TOP((param_1 + 0x3e))) * uVar7;
            F_00c46aa0(iVar12 + iVar9,iVar8 + iVar3,(uint)*((ushort *)GEN_TOP((param_1 + 0x3e))));
            fVar13 = (float10)*((float *)GEN_TOP((iVar4 + iVar3 + iVar8)));
            fVar14 = (float10)*(double *)&REFG(undefined, 0x112fcb8);
            fVar15 = (float10)*((float *)GEN_TOP((iVar5 + iVar3 + iVar8)));
            fVar16 = (float10)*(double *)&REFG(undefined, 0x112fcb0);
            *((float *)GEN_TOP((iVar2 + iVar12))) =
                 ((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar2 + iVar12))) + fVar13 * fVar14) + fVar15 * fVar16)));
            *((float *)GEN_TOP((iVar11 + iVar9 + iVar12))) =
                 ((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar11 + iVar9 + iVar12))) - fVar15 * fVar14) -
                        fVar13 * fVar16)));
            uVar7 = uVar7 + 1;
          } while (uVar7 < (uint)param_3[2]);
        }
      }
      else {
        param_6 = 0;
        if (uVar10 < (uint)param_3[2]) {
          if (uVar10 != 0) {
            do {
              iVar12 = *((ushort *)GEN_TOP((param_1 + 0x3e))) * param_6;
              F_00c46aa0(iVar12 + iVar9,*((ushort *)GEN_TOP((param_1 + 0x2c))) * param_6 + iVar3,
                         (uint)*((ushort *)GEN_TOP((param_1 + 0x3e))));
              iVar2 = param_6 * 4;
              param_6 = param_6 + 1;
              iVar8 = iVar9 + uVar7 * 4;
              fVar13 = (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x48))) + iVar2)));
              fVar14 = (float10)*(double *)&REFG(undefined, 0x112fcb8);
              fVar15 = (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x4c))) - 4 + param_6 * 4)));
              fVar16 = (float10)*(double *)&REFG(undefined, 0x112fcb0);
              *((float *)GEN_TOP((iVar8 + iVar12))) =
                   ((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar8 + iVar12))) + fVar13 * fVar14) + fVar15 * fVar16
                          )));
              *((float *)GEN_TOP((iVar11 + iVar9 + iVar12))) =
                   ((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar11 + iVar9 + iVar12))) - fVar15 * fVar14) -
                          fVar13 * fVar16)));
            } while (param_6 < *((uint *)GEN_TOP((param_1 + 0x44))));
          }
          local_14 = 0;
          if (param_3[2] != *((int *)GEN_TOP((param_1 + 0x44)))) {
            iVar2 = iVar9 + uVar7 * 4;
            do {
              iVar8 = local_14 + *((int *)GEN_TOP((param_1 + 0x44)));
              iVar12 = (uint)*((ushort *)GEN_TOP((param_1 + 0x3e))) * iVar8;
              F_00c46aa0(iVar12 + iVar9,(uint)*((ushort *)GEN_TOP((param_1 + 0x2c))) * iVar8 + iVar3,
                         (uint)*((ushort *)GEN_TOP((param_1 + 0x3e))));
              iVar8 = *((ushort *)GEN_TOP((param_1 + 0x2c))) * local_14;
              local_14 = local_14 + 1;
              fVar13 = (float10)*((float *)GEN_TOP((iVar4 + iVar3 + iVar8)));
              fVar14 = (float10)*(double *)&REFG(undefined, 0x112fcb8);
              fVar15 = (float10)*((float *)GEN_TOP((iVar5 + iVar3 + iVar8)));
              fVar16 = (float10)*(double *)&REFG(undefined, 0x112fcb0);
              *((float *)GEN_TOP((iVar2 + iVar12))) =
                   ((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar2 + iVar12))) + fVar13 * fVar14) + fVar15 * fVar16
                          )));
              *((float *)GEN_TOP((iVar11 + iVar9 + iVar12))) =
                   ((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar11 + iVar9 + iVar12))) - fVar15 * fVar14) -
                          fVar13 * fVar16)));
            } while (local_14 < (uint)(param_3[2] - *((int *)GEN_TOP((param_1 + 0x44)))));
          }
          uVar7 = *((uint *)GEN_TOP((param_1 + 0x44)));
          uVar10 = 0;
          if (uVar7 != 0) {
            do {
              iVar9 = uVar10 - uVar7;
              uVar10 = uVar10 + 1;
              iVar9 = (iVar9 + param_3[2]) * (uint)*((ushort *)GEN_TOP((param_1 + 0x2c)));
              *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x48))) - 4 + uVar10 * 4))) =
                   *((undefined4 *)GEN_TOP((iVar4 + iVar3 + iVar9)));
              *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x4c))) - 4 + uVar10 * 4))) =
                   *((undefined4 *)GEN_TOP((iVar5 + iVar3 + iVar9)));
              uVar7 = *((uint *)GEN_TOP((param_1 + 0x44)));
            } while (uVar10 < uVar7);
          }
        }
        else {
          if (param_3[2] != 0) {
            do {
              iVar12 = *((ushort *)GEN_TOP((param_1 + 0x3e))) * param_6;
              F_00c46aa0(iVar12 + iVar9,*((ushort *)GEN_TOP((param_1 + 0x2c))) * param_6 + iVar3,
                         (uint)*((ushort *)GEN_TOP((param_1 + 0x3e))));
              iVar2 = param_6 * 4;
              param_6 = param_6 + 1;
              iVar8 = iVar9 + uVar7 * 4;
              fVar13 = (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x48))) + iVar2)));
              fVar14 = (float10)*(double *)&REFG(undefined, 0x112fcb8);
              fVar15 = (float10)*((float *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x4c))) - 4 + param_6 * 4)));
              fVar16 = (float10)*(double *)&REFG(undefined, 0x112fcb0);
              *((float *)GEN_TOP((iVar8 + iVar12))) =
                   ((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar8 + iVar12))) + fVar13 * fVar14) + fVar15 * fVar16
                          )));
              *((float *)GEN_TOP((iVar11 + iVar9 + iVar12))) =
                   ((float)GEN_TOF((((float10)*((float *)GEN_TOP((iVar11 + iVar9 + iVar12))) - fVar15 * fVar14) -
                          fVar13 * fVar16)));
            } while (param_6 < (uint)param_3[2]);
          }
          iVar11 = *((int *)GEN_TOP((param_1 + 0x44))) * uVar7;
          iVar9 = iVar11 - param_3[2] * uVar7;
          F_01051df1(*((int *)GEN_TOP((param_1 + 0x48))),iVar11,*((int *)GEN_TOP((param_1 + 0x48))) - 4 + param_3[2] * 4,
                     iVar9);
          F_01051df1(*((int *)GEN_TOP((param_1 + 0x4c))),iVar11,*((int *)GEN_TOP((param_1 + 0x4c))) - 4 + param_3[2] * 4,
                     iVar9);
          uVar7 = param_3[2];
          param_3 = ((int *)GEN_TOP(0x0));
          if (uVar7 != 0) {
            do {
              iVar11 = (uint)*((ushort *)GEN_TOP((param_1 + 0x2c))) * (int)param_3;
              iVar9 = (*((int *)GEN_TOP((param_1 + 0x44))) - uVar7) + (int)param_3;
              *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x48))) + iVar9 * 4))) =
                   *((undefined4 *)GEN_TOP((iVar4 + iVar3 + iVar11)));
              *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x4c))) + iVar9 * 4))) =
                   *((undefined4 *)GEN_TOP((iVar5 + iVar3 + iVar11)));
              uVar7 = piVar6[2];
              param_3 = ((int *)GEN_TOP(((int)param_3 + 1)));
            } while (param_3 < uVar7);
          }
        }
      }
    }
  }
  param_5[2] = piVar6[2];
  param_5[1] = piVar6[1];
  return (uint)param_5;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOPrologicIIz::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce6130(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce6130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[15])REFP(0x112fc74));
  if (param_1[0x12] != 0) {
    gen_imp_CoTaskMemFree(param_1[0x12]);
  }
  if (param_1[0x13] != 0) {
    gen_imp_CoTaskMemFree(param_1[0x13]);
  }
  F_00cf3b1e(param_1 GEN_EDX_ARG);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce6180(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce6180u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  
  if (param_3 != 0) {
    *((int *)GEN_TOP((param_1 + 4))) = param_3;
    uVar1 = F_00cccd90(param_1 + 8 GEN_EDX_FWD,param_2,param_3);
    return uVar1;
  }
  *((undefined4 *)GEN_TOP((param_1 + 4))) = 0;
  F_00cccbd0(param_1 + 8 GEN_EDX_ARG,param_2);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf11 */
GEN_LIB GEN_NOFRAME float10 GEN_THISCALL F_00ce61c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce61c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x34)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf10 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ce61d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xce61d0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  *((float *)GEN_TOP((in_ecx + 0x2c))) = param_2;
  *((float *)GEN_TOP((in_ecx + 0x30))) = param_3;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf20 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00ce61f0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce61f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  float fVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  float10 extraout_ST0;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar1 = *((float *)GEN_TOP((param_1 + 0x34)));
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    iVar3 = *((int *)GEN_TOP((param_1 + 4))) - param_2;
    *((int *)GEN_TOP((param_1 + 4))) = iVar3;
    if (iVar3 < 0) {
      *((undefined4 *)GEN_TOP((param_1 + 4))) = 0;
    }
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 8))) + 8))))(param_1 + 8,param_2);
  }
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 8))) + 0x10))))(param_1 + 8);
  fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x2c))) * (float10)*((float *)GEN_TOP((param_1 + 0x30))) +
                 (float10)((float)GEN_TOF((((float10)1 - (float10)*((float *)GEN_TOP((param_1 + 0x30)))) *
                                 (float10)(float)extraout_ST0))))));
  fVar5 = GEN_X87((float10)((float)GEN_TOF(((float10)fVar2 - (float10)*((float *)GEN_TOP((param_1 + 0x34)))))));
  fVar7 = (float10)0;
  if ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar5)) == ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar5)) || fVar7 == fVar5)) {
    fVar6 = GEN_X87((float10)(float)((float10)(int)param_2 / (float10)*(double *)&REFG(undefined, 0x112fcd0)));
    if (!(fVar5 <= fVar7) || ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar5)) || fVar7 == fVar5)) {
      if (!(fVar5 <= fVar6) != (GEN_ISNAN(fVar6) || GEN_ISNAN(fVar5))) {
        *((float *)GEN_TOP((param_1 + 0x34))) = ((float)GEN_TOF((fVar6 + (float10)*((float *)GEN_TOP((param_1 + 0x34))))));
        goto LAB_00ce62be;
      }
    }
    else {
      fVar7 = -fVar6;
      if (fVar5 <= fVar7 && ((!GEN_ISNAN(fVar7) && !GEN_ISNAN(fVar5)) && fVar7 != fVar5)) {
        *((float *)GEN_TOP((param_1 + 0x34))) = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 0x34))) - fVar6)));
        goto LAB_00ce62be;
      }
    }
    *((float *)GEN_TOP((param_1 + 0x34))) = fVar2;
  }
LAB_00ce62be: ;
  bVar4 = GEN_ISNAN((float10)*((float *)GEN_TOP((param_1 + 0x34)))) || GEN_ISNAN((float10)fVar1);
  if (bVar4 != (bVar4 || (float10)*((float *)GEN_TOP((param_1 + 0x34))) == (float10)fVar1)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ce62e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce62e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce62e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[21])REFP(0x112b5b4));
  in_ecx[1] = 0;
  F_00cccb10(in_ecx + 2 GEN_EDX_FWD,(float)(float10)1);
  in_ecx[0xb] = (undefined4)gen_fl2bits((float)(float10)1);
  in_ecx[0xc] = (undefined4)gen_fl2bits((float)(float10)0);
  in_ecx[0xd] = (undefined4)gen_fl2bits((float)(float10)1);
  return (uint)in_ecx;
}

/* ref: FUN_00ce6310 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce6310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce6310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00cf53e0(this GEN_EDX_FWD,&REFG(undefined, 0x134e150),(int)this + 0xe4,0x14,0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x112fd7c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) = (*(undefined * PTR32 (*)[5])REFP(0x112fd64));
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOIIRFilter::vf8 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce6360(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xce6360u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(*param_3));
  *((undefined4 *)GEN_TOP((param_1 + 0xc0))) = *puVar1;
  *((undefined4 *)GEN_TOP((param_1 + 0xc4))) = puVar1[1];
  *((undefined4 *)GEN_TOP((param_1 + 200))) = puVar1[2];
  *((undefined4 *)GEN_TOP((param_1 + 0xcc))) = puVar1[3];
  *((undefined2 *)GEN_TOP((param_1 + 0xd0))) = *(undefined2 *)(puVar1 + 4);
  puVar1 = ((undefined4 *)GEN_TOP(*param_5));
  *((undefined4 *)GEN_TOP((param_1 + 0xd2))) = *puVar1;
  *((undefined4 *)GEN_TOP((param_1 + 0xd6))) = puVar1[1];
  *((undefined4 *)GEN_TOP((param_1 + 0xda))) = puVar1[2];
  *((undefined4 *)GEN_TOP((param_1 + 0xde))) = puVar1[3];
  *((undefined2 *)GEN_TOP((param_1 + 0xe2))) = *(undefined2 *)(puVar1 + 4);
  uVar2 = F_00cf4b89(param_1,param_2,param_3,param_4,param_5);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOIIRFilter::vf10 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00ce63f0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4), GEN_P(int param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xce63f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(int param_6 = (int)gen_a5;)
  float * pfVar1;
  float * pfVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float * pfVar6;
  float * pfVar7;
  float * pfVar8;
  float * pfVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  
  if (param_3[1] != 1) {
    param_5[1] = 0;
    return;
  }
  if (param_6 == 0) {
    F_00c46aa0(*param_5,*param_3,(uint)*((ushort *)GEN_TOP(((int)param_1 + 0xde))) * param_3[2]);
    param_5[2] = param_3[2];
    param_5[1] = param_3[1];
    return;
  }
  pfVar7 = ((float *)GEN_TOP(*param_5));
  pfVar9 = ((float *)GEN_TOP(*param_3));
  uVar5 = (uint)*((ushort *)GEN_TOP(((int)param_1 + 0xc2)));
  pfVar1 = ((float *)GEN_TOP(F_00cf3d40(param_1 GEN_EDX_ARG)));
  param_6 = param_3[2];
  if (0 < param_6) {
    fVar10 = (float10)*pfVar1;
    fVar11 = (float10)pfVar1[1];
    fVar12 = (float10)pfVar1[2];
    fVar13 = (float10)pfVar1[3];
    fVar14 = (float10)pfVar1[4];
    do {
      pfVar1 = ((float *)GEN_TOP(((int)param_1 + 0x40)));
      iVar4 = 0;
      if (3 < uVar5) {
        iVar3 = (uVar5 - 4 >> 2) + 1;
        iVar4 = iVar3 * 4;
        pfVar2 = pfVar1;
        pfVar6 = pfVar7;
        pfVar8 = pfVar9;
        do {
          *pfVar6 = ((float)GEN_TOF(((float10)pfVar2[3] * fVar14 +
                           ((float10)pfVar2[2] * fVar13 +
                           (fVar12 * (float10)pfVar2[1] +
                           ((float10)*pfVar8 * fVar10 + (float10)*pfVar2 * fVar11))))));
          pfVar2[3] = pfVar2[2];
          pfVar2[2] = *pfVar6;
          pfVar2[1] = *pfVar2;
          *pfVar2 = *pfVar8;
          pfVar6[1] = ((float)GEN_TOF(((float10)pfVar2[7] * fVar14 +
                             ((float10)pfVar2[6] * fVar13 +
                             ((float10)pfVar2[5] * fVar12 +
                             (fVar11 * (float10)pfVar2[4] + (float10)pfVar8[1] * fVar10))))));
          pfVar2[7] = pfVar2[6];
          pfVar2[6] = pfVar6[1];
          pfVar2[5] = pfVar2[4];
          pfVar2[4] = pfVar8[1];
          pfVar6[2] = ((float)GEN_TOF((fVar14 * (float10)pfVar2[0xb] +
                             ((float10)pfVar2[10] * fVar13 +
                             (fVar12 * (float10)pfVar2[9] +
                             ((float10)pfVar2[8] * fVar11 + (float10)pfVar8[2] * fVar10))))));
          pfVar2[0xb] = pfVar2[10];
          pfVar2[10] = pfVar6[2];
          pfVar2[9] = pfVar2[8];
          pfVar2[8] = pfVar8[2];
          pfVar7 = pfVar6 + 4;
          pfVar9 = pfVar8 + 4;
          pfVar1 = pfVar2 + 0x10;
          iVar3 = iVar3 - 1;
          pfVar6[3] = ((float)GEN_TOF(((float10)pfVar2[0xf] * fVar14 +
                             ((float10)pfVar2[0xe] * fVar13 +
                             ((float10)pfVar2[0xd] * fVar12 +
                             ((float10)pfVar2[0xc] * fVar11 + (float10)pfVar8[3] * fVar10))))));
          pfVar2[0xf] = pfVar2[0xe];
          pfVar2[0xe] = pfVar6[3];
          pfVar2[0xd] = pfVar2[0xc];
          pfVar2[0xc] = pfVar8[3];
          pfVar2 = pfVar1;
          pfVar6 = pfVar7;
          pfVar8 = pfVar9;
        } while (iVar3 != 0);
      }
      if (iVar4 < (int)uVar5) {
        iVar4 = uVar5 - iVar4;
        pfVar1 = pfVar1 + 2;
        pfVar2 = pfVar7;
        pfVar6 = pfVar9;
        do {
          pfVar7 = pfVar2 + 1;
          pfVar9 = pfVar6 + 1;
          iVar4 = iVar4 - 1;
          *pfVar2 = ((float)GEN_TOF((fVar14 * (float10)pfVar1[1] +
                           ((float10)*pfVar1 * fVar13 +
                           ((float10)pfVar1[-1] * fVar12 +
                           ((float10)*pfVar6 * fVar10 + (float10)pfVar1[-2] * fVar11))))));
          pfVar1[1] = *pfVar1;
          *pfVar1 = *pfVar2;
          pfVar1[-1] = pfVar1[-2];
          pfVar1[-2] = *pfVar6;
          pfVar1 = pfVar1 + 4;
          pfVar2 = pfVar7;
          pfVar6 = pfVar9;
        } while (iVar4 != 0);
      }
      param_6 = param_6 - 1;
    } while (param_6 != 0);
  }
  F_00cf3d90(param_1 GEN_EDX_ARG);
  param_5[2] = param_3[2];
  param_5[1] = param_3[1];
  return;
}

/* ref: FUN_00ce6650 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce6650(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce6650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  float10 fVar1;
  
  fVar1 = (float10)0;
  *((float *)GEN_TOP((in_ecx + 0x40))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x44))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x48))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x4c))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x50))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x54))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x58))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x5c))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x60))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 100))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x68))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x6c))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x70))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x74))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x78))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x7c))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x80))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x84))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x88))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x8c))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x90))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x94))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x98))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0x9c))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0xa0))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0xa4))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0xa8))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0xac))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0xb0))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0xb4))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0xb8))) = (float)fVar1;
  *((float *)GEN_TOP((in_ecx + 0xbc))) = (float)fVar1;
  return;
}

/* ref: FUN_00ce66f0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce66f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce66f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x112fdbc));
  if (uVar1 != 0) {
    if (param_1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_1 + 0x20;
    }
    *param_3 = iVar2;
    gen_imp_InterlockedIncrement(((LONG *)GEN_TOP((param_1 + 0x1c))));
    return 0;
  }
  uVar1 = F_00ce5800(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ce6750 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00ce6750(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce6750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (uint)(gen_imp_InterlockedIncrement(((LONG *)GEN_TOP((param_1 + 0x1c)))));
}

/* ref: FUN_00ce6770 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce6770(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce6770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = gen_imp_InterlockedDecrement(param_1 + 7);
  if ((uVar1 == 0) && (param_1 != ((int *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x38))))(param_1 GEN_EDX_ARG,1);
  }
  return uVar1;
}

/* ref: FUN_00ce67a0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce67a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xce67a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00ce67b0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_STDCALL F_00ce67b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce67b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  F_00ce6750(param_1 - 0x20);
  return;
}

/* ref: FUN_00ce67c0 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00ce67c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce67c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00ce66f0(param_1 - 0x20,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ce67d0 */
GEN_LIB GEN_NOFRAME uint GEN_STDCALL F_00ce67d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xce67d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00ce6770(param_1 - 0x20);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOIIRFilter::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce67e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce67e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[16])REFP(0x112fd7c));
  param_1[8] = (*(undefined * PTR32 (*)[5])REFP(0x112fd64));
  F_00cf3c40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00ce6810 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce6810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce6810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00cca0a0(this GEN_EDX_FWD,REFG(undefined4, 0x112a808),param_1);
  *((undefined4 *)GEN_TOP(((int)this + 0xe8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xec))) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x112fe18));
  return (uint)this;
}

/* ref: FUN_00ce6850 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce6850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce6850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x112fe18));
  uVar1 = F_00cc9f30(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::MasterBus::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce6860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce6860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  int iVar2;
  float10 extraout_ST0;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 0xc))))(this + 0x10 GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 8))))(this + 0x10 GEN_EDX_ARG,param_1);
    iVar2 = 0;
    if (0 < *(int *)(this + 0xec)) {
      do {
        extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 0x10))))(this + 0x10);
        uVar1 = F_00cc93f0(*((undefined4 *)GEN_TOP((*(int *)(this + 0xe8) + iVar2 * 4))) GEN_EDX_ARG,(float)extraout_ST0)
        ;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(this + 0xec));
    }
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::MasterBus::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce68c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce68c0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  int iVar2;
  float10 extraout_ST0;
  
  if (param_3 == 0) {
    F_00cccbd0(param_1 + 0x10 GEN_EDX_FWD,param_2);
    iVar2 = 0;
    uVar1 = 0;
    if (0 < *((int *)GEN_TOP((param_1 + 0xec)))) {
      do {
        extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 0x10))))(param_1 + 0x10);
        uVar1 = F_00cc93f0(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0xe8))) + iVar2 * 4))) GEN_EDX_ARG,
                             (float)extraout_ST0);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *((int *)GEN_TOP((param_1 + 0xec))));
    }
    return uVar1;
  }
  uVar1 = F_00cccd90(param_1 + 0x10 GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::MasterBus::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ce6930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce6930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0xec)) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xe8) + iVar2 * 4)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD,param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0xec));
  }
  this[0xe4] = (undefined1)0x0;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::MasterBus::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ce6970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xce6970u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0xec)) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xe8) + iVar2 * 4)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_FWD,param_1,param_2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0xec));
  }
  this[0xe4] = (undefined1)0x1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::MasterBus::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00ce69c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce69c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0xec)) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xe8) + iVar2 * 4)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_FWD,param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0xec));
  }
  this[0xe4] = (undefined1)0x0;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::MasterBus::vf2 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ce6a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce6a00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::MasterBus::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce6a10(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce6a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[8])REFP(0x112fe18));
  F_00cc9f30(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularPitchShiftBase::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce6a40(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xce6a40u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  code * pcVar2;
  
  if (param_3 == 0) {
    pcVar2 = *((gen_code32 *)GEN_TOP((*param_1 + 0x28)));
  }
  else {
    if (param_3 != 1) goto LAB_00ce6a6c;
    pcVar2 = *((gen_code32 *)GEN_TOP((*param_1 + 0x2c)));
  }
  (*pcVar2)(param_1,(undefined4)gen_fl2bits(param_2),param_4);
LAB_00ce6a6c: ;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x24))))(param_1 GEN_EDX_FWD);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularPitchShiftBase::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce6a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce6a80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  bool bVar2;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 0xc))))(this + 4 GEN_EDX_FWD);
  bVar2 = (char)uVar1 != '\0';
  if (bVar2) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 8))))(this + 4 GEN_EDX_ARG,param_1);
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x28) + 0xc))))(this + 0x28 GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x28) + 8))))(this + 0x28 GEN_EDX_ARG,param_1);
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG);
    return uVar1;
  }
  if (bVar2) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularPitchShiftBase::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce6af0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce6af0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  
  if (param_3 != 0) {
    uVar1 = F_00cccd90(param_1 + 4 GEN_EDX_FWD,param_2,param_3);
    return uVar1;
  }
  F_00cccbd0(param_1 + 4 GEN_EDX_ARG,param_2);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularPitchShiftBase::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce6b20(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce6b20u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  float10 fVar2;
  
  fVar2 = GEN_X87((float10)param_2 / (float10)*((float *)GEN_TOP((param_1 + 0x4c))));
  if (param_3 != 0) {
    uVar1 = F_00cccd90(param_1 + 0x28 GEN_EDX_FWD,(float)fVar2,param_3);
    return uVar1;
  }
  F_00cccbd0(param_1 + 0x28 GEN_EDX_ARG,(float)fVar2);
  return 0;
}

/* ref: FUN_00ce6b60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce6b60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce6b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[12])REFP(0x112c074));
  F_00cccb10(param_1 + 1 GEN_EDX_FWD,(float)(float10)1);
  F_00cccb10(param_1 + 10 GEN_EDX_ARG,*(float *)&REFG(undefined, 0x112fe48));
  param_1[0x13] = *(undefined4 *)&REFG(undefined, 0x112fe44);
  if (param_2 != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((param_1[1] + 4))))(param_1 + 1,*((undefined4 *)GEN_TOP((param_2 + 0x10))));
    ((code *)*((gen_code32 *)GEN_TOP((param_1[10] + 4))))
              (param_1 + 10,
               (undefined4)
               gen_fl2bits(((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_2 + 0x14))) /
                                  ((float10)GEN_TOD(gen_bits2f(param_1[0x13]))))))));
  }
  return (uint)param_1;
}

/* ref: FUN_00ce6be0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ce6be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xce6be0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00cf53e0(this GEN_EDX_FWD,&REFG(undefined, 0x134e5e0),(int)this + 100,8,0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x112ff04));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x20))) = (*(undefined * PTR32 (*)[5])REFP(0x112feec));
  F_00c48350(((undefined *)GEN_TOP(((int)this + 0x7c))),0,0x70800);
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOGranularPitchShift::vf8 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00ce6c40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int * param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xce6c40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int * param_5 = (int *)(uintptr_t)gen_a4;)
  undefined2 uVar1;
  undefined4 * puVar2;
  float10 fVar3;
  uint uVar4;
  
  fVar3 = (float10)0;
  puVar2 = ((undefined4 *)GEN_TOP(*param_3));
  *((undefined4 *)GEN_TOP((param_1 + 0x40))) = *puVar2;
  *((undefined4 *)GEN_TOP((param_1 + 0x44))) = puVar2[1];
  *((undefined4 *)GEN_TOP((param_1 + 0x48))) = puVar2[2];
  *((undefined4 *)GEN_TOP((param_1 + 0x4c))) = puVar2[3];
  *((undefined2 *)GEN_TOP((param_1 + 0x50))) = *(undefined2 *)(puVar2 + 4);
  puVar2 = ((undefined4 *)GEN_TOP(*param_5));
  *((undefined4 *)GEN_TOP((param_1 + 0x52))) = *puVar2;
  *((undefined4 *)GEN_TOP((param_1 + 0x56))) = puVar2[1];
  *((undefined4 *)GEN_TOP((param_1 + 0x5a))) = puVar2[2];
  *((undefined4 *)GEN_TOP((param_1 + 0x5e))) = puVar2[3];
  uVar1 = *(undefined2 *)(puVar2 + 4);
  *((float *)GEN_TOP((param_1 + 0x70880))) = (float)fVar3;
  *((float *)GEN_TOP((param_1 + 0x70888))) = (float)fVar3;
  *((undefined2 *)GEN_TOP((param_1 + 0x62))) = uVar1;
  *((float *)GEN_TOP((param_1 + 0x70884))) = (float)fVar3;
  *((float *)GEN_TOP((param_1 + 0x70890))) = (float)fVar3;
  *((float *)GEN_TOP((param_1 + 0x7088c))) = (float)fVar3;
  *((undefined4 *)GEN_TOP((param_1 + 0x7087c))) = 0;
  uVar4 = F_00cf4b89(param_1,param_2,param_3,param_4,param_5);
  return uVar4;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOGranularPitchShift::vf10 */
GEN_LIB GEN_FRAME unsigned int GEN_STDCALL F_00ce6cd0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 * param_5, unsigned int gen_a4), GEN_P(float * param_6, unsigned int gen_a5))
{
  GEN_ENTER(0xce6cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_PIN(float * param_6 = (float *)(uintptr_t)gen_a5;)
  GEN_FRAME_DECL_TOP(0x4c, 4, 4);
  float * pfVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  uint in_ecx;
  float * pfVar5;
  int iVar6;
  float * pfVar7;
  int iVar8;
  float * pfVar9;
  float * pfVar10;
  undefined4 * puVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  
  in_ecx = param_1;
  if (param_3[1] != 1) {
    param_5[1] = 0;
    return;
  }
  if (param_6 == ((float *)GEN_TOP(0x0))) {
    F_00c46aa0(*param_5,*param_3,(uint)*((ushort *)GEN_TOP((param_1 + 0x5e))) * param_3[2]);
    param_5[2] = param_3[2];
    param_5[1] = param_3[1];
    return;
  }
  param_6 = ((float *)GEN_TOP(*param_5));
  puVar11 = ((undefined4 *)GEN_TOP(*param_3));
  (*(int *)(gen_frame + 0x1c)) = param_3[2];
  (*(uint *)(gen_frame + 0x40)) = (uint)*((ushort *)GEN_TOP((param_1 + 0x54)));
  pfVar5 = ((float *)GEN_TOP(F_00cf3d40(((undefined *)GEN_TOP(param_1)) GEN_EDX_ARG)));
  (*(float *)(gen_frame + 0x28)) = pfVar5[1];
  (*(float *)(gen_frame + 0x2c)) = (float)((float10)1 / (float10)pfVar5[1]);
  (*(float *)(gen_frame + 0x30)) = *pfVar5;
  if (0 < (*(int *)(gen_frame + 0x1c))) {
    do {
      fVar15 = (float10)REFG(float, 0x1094808);
      fVar13 = (float10)1;
      fVar17 = (float10)(*(float *)(gen_frame + 0x30));
      fVar16 = (float10)1;
      fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x70880))) + (float10)(*(float *)(gen_frame + 0x28)))));
      fVar12 = (float10)fVar2;
      *((float *)GEN_TOP((in_ecx + 0x70880))) = fVar2;
      if (fVar16 <= fVar12 && ((!GEN_ISNAN(fVar12) && !GEN_ISNAN(fVar16)) && fVar12 != fVar16)) {
        *((float *)GEN_TOP((in_ecx + 0x70880))) = (float)(fVar12 - fVar13);
      }
      fVar12 = (float10)*((float *)GEN_TOP((in_ecx + 0x70880)));
      if (!(fVar12 <= fVar15) || ((GEN_ISNAN(fVar15) || GEN_ISNAN(fVar12)) || fVar15 == fVar12)) {
        if (*((char *)GEN_TOP((in_ecx + 0x70894))) == '\0') goto LAB_00ce6daf;
      }
      else {
        *((undefined2 *)GEN_TOP((in_ecx + 0x70894))) = 0;
LAB_00ce6daf: ;
        if (!((float10)*((float *)GEN_TOP((in_ecx + 0x70880))) <= fVar15) !=
            (GEN_ISNAN(fVar15) || GEN_ISNAN((float10)*((float *)GEN_TOP((in_ecx + 0x70880)))))) {
          if ((GEN_ISNAN(fVar17) || GEN_ISNAN(fVar16)) || fVar17 < fVar16 == (fVar17 == fVar16)) {
            *((undefined1 *)GEN_TOP((in_ecx + 0x70894))) = 1;
            *((float *)GEN_TOP((in_ecx + 0x7088c))) = (float)(fVar13 - fVar17);
            *((float *)GEN_TOP((in_ecx + 0x70884))) =
                 ((float)GEN_TOF((-(float10)(float)(fVar13 - fVar17) * (float10)(*(float *)(gen_frame + 0x2c)))));
          }
          else {
            *((undefined1 *)GEN_TOP((in_ecx + 0x70894))) = 1;
            *((float *)GEN_TOP((in_ecx + 0x70884))) = (float)(float10)0;
            *((float *)GEN_TOP((in_ecx + 0x7088c))) = (float)(fVar13 - fVar17);
          }
        }
      }
      if ((*((char *)GEN_TOP((in_ecx + 0x70895))) == '\0') &&
         (!((float10)*((float *)GEN_TOP((in_ecx + 0x70880))) <= (float10)REFG(float, 0x1088138)) !=
          (GEN_ISNAN((float10)REFG(float, 0x1088138)) || GEN_ISNAN((float10)*((float *)GEN_TOP((in_ecx + 0x70880))))))) {
        if (fVar17 <= fVar16) {
          *((undefined1 *)GEN_TOP((in_ecx + 0x70895))) = 1;
          *((float *)GEN_TOP((in_ecx + 0x70888))) = (float)(float10)0;
          *((float *)GEN_TOP((in_ecx + 0x70890))) = (float)(fVar13 - fVar17);
        }
        else {
          *((undefined1 *)GEN_TOP((in_ecx + 0x70895))) = 1;
          *((float *)GEN_TOP((in_ecx + 0x70890))) = (float)(fVar13 - fVar17);
          *((float *)GEN_TOP((in_ecx + 0x70888))) =
               ((float)GEN_TOF((-(float10)(float)(fVar13 - fVar17) * (float10)(*(float *)(gen_frame + 0x2c)))));
        }
      }
      fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x70884))) + (float10)*((float *)GEN_TOP((in_ecx + 0x7088c))))))
      ;
      *((float *)GEN_TOP((in_ecx + 0x70884))) = fVar2;
      *((float *)GEN_TOP((in_ecx + 0x70888))) =
           ((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x70890))) + (float10)*((float *)GEN_TOP((in_ecx + 0x70888))))));
      dVar4 = (double)fVar2;
      fVar12 = F_00c51c40((uint)(ulonglong)gen_d2bits(dVar4),
                            (int)((ulonglong)gen_d2bits(dVar4) >> 0x20),&(*(double *)(gen_frame + 0x8)));
      (*(float * PTR32 *)(gen_frame + 0x44)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar12)));
      (*(int *)(gen_frame + 0x34)) = *((int *)GEN_TOP((in_ecx + 0x7087c))) + (int)(*(double *)(gen_frame + 0x8)) * -8;
      if ((*(int *)(gen_frame + 0x34)) < 0) {
        (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) + 0x1c200;
      }
      (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x34)) - 8;
      if ((*(int *)(gen_frame + 0x34)) - 8 < 0) {
        (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x34)) + 0x1c1f8;
      }
      fVar12 = F_00c51c40((uint)(ulonglong)gen_d2bits((double)*((float *)GEN_TOP((in_ecx + 0x70888)))),
                            (int)((ulonglong)gen_d2bits((double)*((float *)GEN_TOP((in_ecx + 0x70888)))) >>
                                 0x20),&(*(double *)(gen_frame + 0x0)));
      (*(float *)(gen_frame + 0x18)) = (float)fVar12;
      iVar8 = *((int *)GEN_TOP((in_ecx + 0x7087c))) + (int)(*(double *)(gen_frame + 0x0)) * -8;
      (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x20)) + 4)) = iVar8;
      if (iVar8 < 0) {
        iVar8 = iVar8 + 0x1c200;
        (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x20)) + 4)) = iVar8;
      }
      (*(double *)(gen_frame + 0x20)) = gen_bits2d(CONCAT44(iVar8,(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x20)) + 0))));
      (*(float * PTR32 *)(gen_frame + 0x3c)) = ((float *)GEN_TOP((iVar8 - 8)));
      if (iVar8 - 8 < 0) {
        (*(float * PTR32 *)(gen_frame + 0x3c)) = ((float *)GEN_TOP((iVar8 + 0x1c1f8)));
      }
      fVar16 = ((float10)GEN_TOD(fsin(
                             (float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((in_ecx + 0x70880))) *
                                             (float10)*(double *)&REFG(undefined, 0x112ff48)))))));
      iVar6 = 0;
      fVar15 = (float10)1;
      fVar17 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x44)))));
      fVar12 = (float10)(float)fVar12;
      fVar16 = GEN_X87((float10)((float)GEN_TOF((((float10)(float)fVar16 + fVar15) * (float10)REFG(double, 0x1088108)))));
      if (3 < (int)(*(uint *)(gen_frame + 0x40))) {
        fVar13 = GEN_X87(fVar15 - fVar17);
        param_1 = in_ecx + 0x80 + iVar8 * 4;
        fVar14 = GEN_X87(fVar15 - fVar16);
        (*(float * PTR32 *)(gen_frame + 0x44)) = ((float *)GEN_TOP((in_ecx + 0x80 + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x3c))) * 4)));
        dVar4 = GEN_X87((double)(fVar15 - fVar12));
        (*(double *)(gen_frame + 0x10)) = dVar4;
        pfVar5 = ((float *)GEN_TOP((in_ecx + 0x80 + (*(int *)(gen_frame + 0x34)) * 4)));
        pfVar7 = ((float *)GEN_TOP((in_ecx + 0x80 + (*(int *)(gen_frame + 0x38)) * 4)));
        do {
          *((undefined4 *)GEN_TOP((in_ecx + 0x7c + (*((int *)GEN_TOP((in_ecx + 0x7087c))) + iVar6) * 4))) = *puVar11;
          fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 - 4))) * (float10)dVar4 +
                         (float10)(*(float * PTR32 *)(gen_frame + 0x44))[-1] * fVar12)));
          (*(float *)(gen_frame + 0x18)) = fVar2;
          fVar3 = (float)((float10)pfVar5[-1] * fVar13 + (float10)pfVar7[-1] * fVar17);
          (*(float *)(gen_frame + 0x18)) = fVar3;
          *param_6 = (float)((float10)fVar3 * fVar14 + (float10)fVar2 * fVar16);
          *((undefined4 *)GEN_TOP((in_ecx + 0x80 + (*((int *)GEN_TOP((in_ecx + 0x7087c))) + iVar6) * 4))) = puVar11[1];
          fVar2 = (float)((float10)*((float *)GEN_TOP(param_1)) * (float10)dVar4 + fVar12 * (float10)*(*(float * PTR32 *)(gen_frame + 0x44)));
          (*(float *)(gen_frame + 0x18)) = fVar2;
          fVar3 = (float)((float10)*pfVar5 * fVar13 + fVar17 * (float10)*pfVar7);
          (*(float *)(gen_frame + 0x18)) = fVar3;
          param_6[1] = (float)((float10)fVar3 * fVar14 + (float10)fVar2 * fVar16);
          *((undefined4 *)GEN_TOP((in_ecx + 0x84 + (*((int *)GEN_TOP((in_ecx + 0x7087c))) + iVar6) * 4))) = puVar11[2];
          fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((param_1 + 4))) * (float10)dVar4 +
                         (float10)(*(float * PTR32 *)(gen_frame + 0x44))[1] * fVar12)));
          (*(float *)(gen_frame + 0x18)) = fVar2;
          fVar3 = (float)((float10)pfVar5[1] * fVar13 + (float10)pfVar7[1] * fVar17);
          (*(float *)(gen_frame + 0x18)) = fVar3;
          param_6[2] = (float)((float10)fVar3 * fVar14 + (float10)fVar2 * fVar16);
          *((undefined4 *)GEN_TOP((in_ecx + 0x88 + (*((int *)GEN_TOP((in_ecx + 0x7087c))) + iVar6) * 4))) = puVar11[3];
          pfVar10 = (*(float * PTR32 *)(gen_frame + 0x44)) + 2;
          pfVar1 = ((float *)GEN_TOP((param_1 + 8)));
          param_1 = param_1 + 0x10;
          (*(float * PTR32 *)(gen_frame + 0x44)) = (*(float * PTR32 *)(gen_frame + 0x44)) + 4;
          pfVar9 = param_6 + 4;
          iVar6 = iVar6 + 4;
          puVar11 = puVar11 + 4;
          fVar2 = (float)((float10)*pfVar1 * (float10)dVar4 + (float10)*pfVar10 * fVar12);
          (*(float *)(gen_frame + 0x18)) = fVar2;
          fVar3 = (float)((float10)pfVar5[2] * fVar13 + (float10)pfVar7[2] * fVar17);
          (*(float *)(gen_frame + 0x18)) = fVar3;
          param_6[3] = (float)((float10)fVar3 * fVar14 + (float10)fVar2 * fVar16);
          pfVar5 = pfVar5 + 4;
          pfVar7 = pfVar7 + 4;
          param_6 = pfVar9;
        } while (iVar6 < (int)((*(uint *)(gen_frame + 0x40)) - 3));
      }
      fVar15 = (float10)1;
      if (iVar6 < (int)(*(uint *)(gen_frame + 0x40))) {
        (*(float * PTR32 *)(gen_frame + 0x3c)) = ((float *)GEN_TOP((in_ecx + 0x7c + (iVar6 + (int)(*(float * PTR32 *)(gen_frame + 0x3c))) * 4)));
        (*(double *)(gen_frame + 0x20)) = GEN_X87((double)(fVar15 - fVar16));
        (*(double *)(gen_frame + 0x10)) = GEN_X87((double)(fVar15 - fVar12));
        pfVar5 = ((float *)GEN_TOP((in_ecx + 0x7c + ((*(int *)(gen_frame + 0x34)) + iVar6) * 4)));
        pfVar7 = ((float *)GEN_TOP((in_ecx + 0x7c + (iVar6 + (*(int *)(gen_frame + 0x38))) * 4)));
        param_1 = in_ecx + 0x7c + (iVar6 + iVar8) * 4;
        do {
          *((undefined4 *)GEN_TOP((in_ecx + 0x7c + (*((int *)GEN_TOP((in_ecx + 0x7087c))) + iVar6) * 4))) = *puVar11;
          fVar2 = *(*(float * PTR32 *)(gen_frame + 0x3c));
          (*(float * PTR32 *)(gen_frame + 0x3c)) = (*(float * PTR32 *)(gen_frame + 0x3c)) + 1;
          pfVar10 = param_6 + 1;
          iVar6 = iVar6 + 1;
          puVar11 = puVar11 + 1;
          fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(param_1)) * (float10)(double)(fVar15 - fVar12) +
                         (float10)fVar2 * fVar12)));
          (*(float *)(gen_frame + 0x18)) = fVar2;
          fVar3 = ((float)GEN_TOF(((float10)*pfVar5 * (fVar15 - fVar17) + (float10)*pfVar7 * fVar17)));
          (*(float *)(gen_frame + 0x18)) = fVar3;
          *param_6 = ((float)GEN_TOF(((float10)fVar3 * (float10)(double)(fVar15 - fVar16) +
                            (float10)fVar2 * fVar16)));
          pfVar5 = pfVar5 + 1;
          pfVar7 = pfVar7 + 1;
          param_1 = param_1 + 4;
          param_6 = pfVar10;
        } while (iVar6 < (int)(*(uint *)(gen_frame + 0x40)));
      }
      *((int *)GEN_TOP((in_ecx + 0x7087c))) = *((int *)GEN_TOP((in_ecx + 0x7087c))) + 8;
      if (*((int *)GEN_TOP((in_ecx + 0x7087c))) == 0x1c200) {
        *((undefined4 *)GEN_TOP((in_ecx + 0x7087c))) = 0;
      }
      iVar8 = (*(int *)(gen_frame + 0x1c)) - 1;
      (*(int *)(gen_frame + 0x1c)) = iVar8;
    } while (iVar8 != 0);
  }
  F_00cf3d90(in_ecx GEN_EDX_ARG);
  param_5[2] = param_3[2];
  param_5[1] = param_3[1];
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOGranularPitchShift::vf14 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce7270(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xce7270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[16])REFP(0x112ff04));
  param_1[8] = (*(undefined * PTR32 (*)[5])REFP(0x112feec));
  F_00cf3c40(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularSynthesizerBase::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce72a0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xce72a0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  
  if (param_3 == 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x28))))(param_1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2),param_4);
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x24))))(param_1 GEN_EDX_ARG);
    return uVar1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x2c))))(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_4);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x24))))(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularSynthesizerBase::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce72f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xce72f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  bool bVar2;
  float10 extraout_ST0;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 0xc))))(this + 4 GEN_EDX_FWD);
  bVar2 = (char)uVar1 != '\0';
  if (bVar2) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 8))))(this + 4 GEN_EDX_ARG,param_1);
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 0x10))))(this + 4);
    F_00cc2690((float)extraout_ST0);
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x28) + 0xc))))(this + 0x28 GEN_EDX_ARG);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x28) + 8))))(this + 0x28 GEN_EDX_ARG,param_1);
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG);
    return uVar1;
  }
  if (bVar2) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x24))))(this GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularSynthesizerBase::vf10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce7380(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce7380u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int * in_ecx;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  float10 extraout_ST0;
  float10 fVar5;
  float10 extraout_ST0_00;
  double dVar6;
  
  fVar5 = (float10)1;
  fVar4 = (float10)param_2;
  if (!(fVar5 <= fVar4) || ((GEN_ISNAN(fVar4) || GEN_ISNAN(fVar5)) || fVar4 == fVar5)) {
    fVar5 = (float10)0;
    if (fVar4 <= fVar5 && ((!GEN_ISNAN(fVar5) && !GEN_ISNAN(fVar4)) && fVar5 != fVar4)) {
      param_2 = (float)fVar5;
    }
  }
  else {
    param_2 = (float)fVar5;
  }
  in_ecx = ((int *)GEN_TOP((param_1 + 4)));
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 0x10))))(in_ecx); dVar6 = extraout_ST0;
  fVar5 = (float10)param_2;
  bVar2 = GEN_ISNAN(fVar5) || GEN_ISNAN(extraout_ST0);
  bVar3 = bVar2 || fVar5 == extraout_ST0;
  if (bVar2 != bVar3) {
    return CONCAT22((short)((ulonglong)gen_d2bits(dVar6) >> 0x10),
                    (ushort)!(extraout_ST0 <= fVar5) << 8 | (ushort)bVar2 << 10 |
                    (ushort)bVar3 << 0xe);
  }
  if (param_3 == 0) {
    F_00cccbd0(in_ecx GEN_EDX_FWD,param_2);
    extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*in_ecx + 0x10))))(in_ecx);
    uVar1 = F_00cc2690((float)extraout_ST0_00);
    return uVar1;
  }
  uVar1 = F_00cccd90(in_ecx GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularSynthesizerBase::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00ce7410(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xce7410u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int in_ecx;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 extraout_ST0;
  float10 fVar4;
  double dVar5;
  
  in_ecx = param_1 + 0x28;
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x28))) + 0x10))))(in_ecx); dVar5 = extraout_ST0;
  fVar4 = (float10)param_2;
  bVar2 = GEN_ISNAN(fVar4) || GEN_ISNAN(extraout_ST0);
  bVar3 = bVar2 || fVar4 == extraout_ST0;
  if (bVar2 != bVar3) {
    return CONCAT22((short)((ulonglong)gen_d2bits(dVar5) >> 0x10),
                    (ushort)!(extraout_ST0 <= fVar4) << 8 | (ushort)bVar2 << 10 |
                    (ushort)bVar3 << 0xe);
  }
  if (param_3 != 0) {
    uVar1 = F_00cccd90(in_ecx GEN_EDX_FWD,param_2,param_3);
    return uVar1;
  }
  F_00cccbd0(in_ecx GEN_EDX_ARG,param_2);
  return 0;
}

