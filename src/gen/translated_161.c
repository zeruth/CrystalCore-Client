#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf11 */
GEN_FRAME uint GEN_THISCALL F_00cdf1f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcdf1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = 0;
  F_00ce11f0(this GEN_EDX_FWD);
  piVar1 = *(int * PTR32 *)(this + 0x4c);
  if (piVar1 != *(int * PTR32 *)(this + 0x50)) {
    while ((uint)*(ushort *)(*piVar1 + 0xc) != param_1 % 1000) {
      piVar1 = piVar1 + 1;
      iVar3 = iVar3 + 1;
      if (piVar1 == *(int * PTR32 *)(this + 0x50)) {
        F_00ce1230(this GEN_EDX_ARG);
        return 0;
      }
    }
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,iVar3);
  }
  F_00ce1230(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf18 */
GEN_FRAME unsigned int GEN_THISCALL F_00cdf270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcdf270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  if ((uint)(*(int *)(this + 0x50) - *(int *)(this + 0x4c) >> 2) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x4c) + param_1 * 4)));
  if (iVar1 != 0) {
    F_00406810(iVar1);
    if ((uint)(*(int *)(this + 0x50) - *(int *)(this + 0x4c) >> 2) <= param_1) {
                    
      F_00c457e7("invalid vector<T> subscript");
    }
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x4c) + param_1 * 4))) = 0;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf19 */
GEN_FRAME unsigned int GEN_THISCALL F_00cdf2d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcdf2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  if ((uint)(*(int *)(this + 100) - *(int *)(this + 0x60) >> 2) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x60) + param_1 * 4)));
  if (iVar1 != 0) {
    F_00406810(iVar1);
    if ((uint)(*(int *)(this + 100) - *(int *)(this + 0x60) >> 2) <= param_1) {
                    
      F_00c457e7("invalid vector<T> subscript");
    }
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x60) + param_1 * 4))) = 0;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf20 */
GEN_FRAME unsigned int GEN_THISCALL F_00cdf330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcdf330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  if ((uint)(*(int *)(this + 0x78) - *(int *)(this + 0x74) >> 2) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x74) + param_1 * 4)));
  if (iVar1 != 0) {
    F_00406810(iVar1);
    if ((uint)(*(int *)(this + 0x78) - *(int *)(this + 0x74) >> 2) <= param_1) {
                    
      F_00c457e7("invalid vector<T> subscript");
    }
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x74) + param_1 * 4))) = 0;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf21 */
GEN_FRAME unsigned int GEN_THISCALL F_00cdf390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcdf390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  if ((uint)(*(int *)(this + 0x8c) - *(int *)(this + 0x88) >> 2) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x88) + param_1 * 4)));
  if (iVar1 != 0) {
    F_00406810(iVar1);
    if ((uint)(*(int *)(this + 0x8c) - *(int *)(this + 0x88) >> 2) <= param_1) {
                    
      F_00c457e7("invalid vector<T> subscript");
    }
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x88) + param_1 * 4))) = 0;
  }
  return 0;
}

/* ref: FUN_00cdf400 */
GEN_FRAME uint GEN_THISCALL F_00cdf400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcdf400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  undefined * _Dst;
  
  F_00ce0f90(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x112eacc));
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,uVar1,"CDev.Engine.Sd.SoundDriver",0,0,0x10)
  ;
  F_00c46aa0(uVar2,param_1,uVar1);
  *(byte *)((int)this + 0x48) = *(byte *)((int)this + 0x48) | 4;
  *(uint *)((int)this + 4) = uVar2;
  *(undefined4 *)((int)this + 0x10) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  _Dst = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                           (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,4000,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
  *(undefined * PTR32 *)((int)this + 0xb0) = _Dst;
  F_00c48350(_Dst,0,4000);
  return (uint)this;
}

/* ref: FUN_00cdf510 */
GEN_FRAME uint GEN_THISCALL F_00cdf510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcdf510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * _Dst;
  
  F_00ce0ff0(this GEN_EDX_FWD,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x112eacc));
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  _Dst = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                           (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,4000,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
  *(undefined * PTR32 *)((int)this + 0xb0) = _Dst;
  F_00c48350(_Dst,0,4000);
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf13 */
GEN_FRAME unsigned int GEN_THISCALL F_00cdf5d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcdf5d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00ce02d0(this + 0x4c,param_1,param_2,param_3);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf14 */
GEN_FRAME unsigned int GEN_THISCALL F_00cdf5f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcdf5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00ce02d0(this + 0x60,param_1,param_2,param_3);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf16 */
GEN_FRAME unsigned int GEN_THISCALL F_00cdf610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcdf610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00ce02d0(this + 0x88,param_1,param_2,param_3);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf15 */
GEN_FRAME unsigned int GEN_THISCALL F_00cdf630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcdf630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00ce02d0(this + 0x74,param_1,param_2,param_3);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf44 */
GEN_FRAME unsigned int GEN_THISCALL F_00cdf650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcdf650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00ce02d0(this + 0x9c,param_1,param_2,param_3);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf2 */
GEN_FRAME uint GEN_THISCALL F_00cdf670(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdf670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_8;
  
  iVar1 = *(int *)(this + 4);
  uVar3 = (uint)*(ushort *)(iVar1 + 0xe);
  uVar2 = F_00ce1300(this GEN_EDX_FWD);
  F_00ce0470(this GEN_EDX_ARG,this + 0x4c,(uint)*(ushort *)(iVar1 + uVar3),uVar2 + uVar3 + *(int *)(this + 4))
  ;
  F_00ce0470(this GEN_EDX_ARG,this + 0x60,(uint)*(ushort *)(iVar1 + 2 + uVar3),
               *(int *)(iVar1 + 8 + uVar3) + *(int *)(this + 4));
  F_00ce0470(this GEN_EDX_ARG,this + 0x74,(uint)*(ushort *)(iVar1 + 4 + uVar3),
               *(int *)(iVar1 + 0xc + uVar3) + *(int *)(this + 4));
  if (1 < *(uint *)(this + 0xc)) {
    F_00ce0470(this GEN_EDX_ARG,this + 0x88,(uint)*(ushort *)(iVar1 + uVar3),
                 *(int *)(iVar1 + 0x10 + uVar3) + *(int *)(this + 4));
  }
  *(uint *)(this + 0x10) = (uint)*(ushort *)(iVar1 + 6 + uVar3);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(iVar1 + 0x10);
  uVar2 = F_00cc8520(this);
  local_8 = 0;
  if (*(short *)(iVar1 + uVar3) != 0) {
    do {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_ARG,local_8);
      *(undefined1 *)(uVar2 + 0xf) = 0xff;
      uVar2 = local_8 + 1;
      local_8 = uVar2;
    } while ((int)uVar2 < (int)(uint)*(ushort *)(iVar1 + uVar3));
  }
  return uVar2;
}

/* ref: FUN_00cdf740 */
GEN_FRAME uint GEN_THISCALL F_00cdf740(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdf740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int * piVar2;
  int * piVar3;
  
  if (*(int *)((int)this + 4) == 0) {
    ((int *)(gen_frame + 0x8))[0] = (int)this + 0x4c;
    ((int *)(gen_frame + 0x8))[1] = (int)this + 0x60;
    ((int *)(gen_frame + 0x8))[2] = (int)this + 0x88;
    ((int *)(gen_frame + 0x8))[3] = (int)this + 0x9c;
    (*(int *)(gen_frame + 0x18)) = 0;
    do {
      piVar2 = (int *)((int *)(gen_frame + 0x8))[(int)((*(int *)(gen_frame + 0x18)))];
      piVar3 = (int *)*piVar2;
      iVar1 = (*(int *)(gen_frame + 0x18));
      if (piVar3 != (int *)piVar2[1]) {
        do {
          if (*piVar3 != 0) {
            F_00406810(*piVar3);
          }
          piVar3 = piVar3 + 1;
          iVar1 = (*(int *)(gen_frame + 0x18));
        } while (piVar3 != (int *)piVar2[1]);
      }
      (*(int *)(gen_frame + 0x18)) = iVar1 + 1;
    } while (iVar1 + 1 < 4);
    piVar2 = *(int * PTR32 *)((int)this + 0x74);
    if (piVar2 != *(int * PTR32 *)((int)this + 0x78)) {
      do {
        if (*piVar2 != 0) {
          F_00406810(*piVar2);
        }
        piVar2 = piVar2 + 1;
      } while (piVar2 != *(int * PTR32 *)((int)this + 0x78));
    }
  }
  else {
    F_00406810(*(int *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  piVar2 = (int *)((int)this + 0x4c);
  if (&(*(int *)(gen_frame + 0x4)) != piVar2) {
    iVar1 = *piVar2;
    *piVar2 = 0;
    *(undefined4 *)((int)this + 0x50) = 0;
    *(undefined4 *)((int)this + 0x54) = 0;
    if (iVar1 != 0) {
      F_00406810(iVar1);
    }
  }
  piVar2 = (int *)((int)this + 0x60);
  if (&(*(int *)(gen_frame + 0x4)) != piVar2) {
    iVar1 = *piVar2;
    *piVar2 = 0;
    *(undefined4 *)((int)this + 100) = 0;
    *(undefined4 *)((int)this + 0x68) = 0;
    if (iVar1 != 0) {
      F_00406810(iVar1);
    }
  }
  piVar2 = (int *)((int)this + 0x74);
  if (&(*(int *)(gen_frame + 0x4)) != piVar2) {
    iVar1 = *piVar2;
    *piVar2 = 0;
    *(undefined4 *)((int)this + 0x78) = 0;
    *(undefined4 *)((int)this + 0x7c) = 0;
    if (iVar1 != 0) {
      F_00406810(iVar1);
    }
  }
  piVar2 = (int *)((int)this + 0x88);
  if (&(*(int *)(gen_frame + 0x4)) != piVar2) {
    iVar1 = *piVar2;
    *piVar2 = 0;
    *(undefined4 *)((int)this + 0x8c) = 0;
    *(undefined4 *)((int)this + 0x90) = 0;
    if (iVar1 != 0) {
      F_00406810(iVar1);
    }
  }
  piVar3 = (int *)((int)this + 0x9c);
  piVar2 = &(*(int *)(gen_frame + 0x4));
  if (piVar2 != piVar3) {
    iVar1 = *piVar3;
    *piVar3 = 0;
    *(undefined4 *)((int)this + 0xa0) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    piVar2 = (int *)0x0;
    if (iVar1 != 0) {
      piVar2 = (int *)F_00406810(iVar1);
    }
  }
  return (uint)piVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf12 */
GEN_FRAME uint GEN_THISCALL F_00cdf890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcdf890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 uVar1;
  code * pcVar2;
  uint uVar3;
  
  F_00cc8590(this);
  F_00cdf740(this GEN_EDX_ARG);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,uVar1,"CDev.Engine.Sd.SoundDriver",0,0,0x10)
  ;
  F_00c46aa0(uVar3,param_1,uVar1);
  pcVar2 = *(gen_code32 *)(*(int *)this + 8);
  *(uint *)(this + 4) = uVar3;
  uVar3 = (*pcVar2)(this);
  return uVar3;
}

/* ref: FUN_00cdf910 */
GEN_NOFRAME uint GEN_THISCALL F_00cdf910(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdf910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x112eacc));
  F_00cdf740(this GEN_EDX_FWD);
  if (*(int *)((int)this + 0xb0) != 0) {
    F_00406810(*(int *)((int)this + 0xb0));
  }
  if (*(int *)((int)this + 0x9c) != 0) {
    F_00406810(*(int *)((int)this + 0x9c));
  }
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  if (*(int *)((int)this + 0x88) != 0) {
    F_00406810(*(int *)((int)this + 0x88));
  }
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  if (*(int *)((int)this + 0x74) != 0) {
    F_00406810(*(int *)((int)this + 0x74));
  }
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  if (*(int *)((int)this + 0x60) != 0) {
    F_00406810(*(int *)((int)this + 0x60));
  }
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  uVar1 = 0;
  if (*(int *)((int)this + 0x4c) != 0) {
    uVar1 = F_00406810(*(int *)((int)this + 0x4c));
  }
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  F_00ce10b0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00cdfa20 */
GEN_FRAME uint GEN_STDCALL F_00cdfa20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfa20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00406810(param_1);
  }
  return uVar1;
}

/* ref: FUN_00cdfa40 */
GEN_FRAME uint GEN_THISCALL F_00cdfa40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcdfa40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cdfa70 */
GEN_FRAME uint GEN_THISCALL F_00cdfa70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfa70u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cdfad0 */
GEN_FRAME uint GEN_STDCALL F_00cdfad0(unsigned int gen_a0)
{
  GEN_ENTER(0xcdfad0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                    (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,param_1 * 4,"CDev.Engine.Sd.Allocator",0,0,0x10);
  return uVar1;
}

/* ref: FUN_00cdfb40 */
GEN_FRAME uint F_00cdfb40(unsigned int gen_a0)
{
  GEN_ENTER(0xcdfb40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00cdfb60 */
GEN_FRAME uint F_00cdfb60(unsigned int gen_a0)
{
  GEN_ENTER(0xcdfb60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00cdfb90 */
GEN_FRAME uint GEN_STDCALL F_00cdfb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfb90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00cdfbc0 */
GEN_FRAME uint F_00cdfbc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcdfbc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00cdfc10 */
GEN_FRAME uint GEN_THISCALL F_00cdfc10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcdfc10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cdfc20 */
GEN_FRAME byte GEN_THISCALL F_00cdfc20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfc20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00cdfc70 */
GEN_FRAME uint GEN_STDCALL F_00cdfc70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfc70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00cdfc90 */
GEN_FRAME uint GEN_THISCALL F_00cdfc90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfc90u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00cdfcc0 */
GEN_FRAME uint F_00cdfcc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfcc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00cdfcf0 */
GEN_FRAME uint F_00cdfcf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcdfcf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00cdfd10 */
GEN_FRAME uint GEN_THISCALL F_00cdfd10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfd10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((uint)(*(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return *(int *)this + param_1 * 4;
}

/* ref: FUN_00cdfd40 */
GEN_FRAME uint GEN_THISCALL F_00cdfd40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfd40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((uint)(*(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return *(int *)this + param_1 * 4;
}

/* ref: FUN_00cdfd80 */
GEN_FRAME uint GEN_THISCALL F_00cdfd80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfd80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00cdfd90 */
GEN_FRAME uint GEN_THISCALL F_00cdfd90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfd90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00cdfda0 */
GEN_FRAME byte GEN_THISCALL F_00cdfda0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00cdfde0 */
GEN_FRAME uint GEN_STDCALL F_00cdfde0(unsigned int gen_a0)
{
  GEN_ENTER(0xcdfde0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00cdfdf0 */
GEN_FRAME uint GEN_THISCALL F_00cdfdf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcdfdf0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00cdfe50 */
GEN_FRAME uint GEN_STDCALL F_00cdfe50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfe50u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1[1] - *param_1 >> 2;
  if ((int)uVar1 <= (int)param_2) {
    return 0;
  }
  if (uVar1 <= param_2) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return *(uint *)(*param_1 + param_2 * 4);
}

/* ref: FUN_00cdfe80 */
GEN_FRAME unsigned int GEN_STDCALL F_00cdfe80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcdfe80u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  
  if ((uint)(param_1[1] - *param_1 >> 2) <= param_2) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  iVar1 = *(int *)(*param_1 + param_2 * 4);
  if (iVar1 != 0) {
    F_00406810(iVar1);
    if ((uint)(param_1[1] - *param_1 >> 2) <= param_2) {
                    
      F_00c457e7("invalid vector<T> subscript");
    }
    *(undefined4 *)(*param_1 + param_2 * 4) = 0;
  }
  return 0;
}

/* ref: FUN_00cdfef0 */
GEN_NOFRAME uint GEN_THISCALL F_00cdfef0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdfef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406810(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00cdff20 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00cdff20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdff20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return;
}

/* ref: FUN_00cdff50 */
GEN_FRAME unsigned int F_00cdff50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcdff50u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00cdff80 */
GEN_NOFRAME uint GEN_THISCALL F_00cdff80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdff80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406810(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00cdffb0 */
GEN_FRAME unsigned int F_00cdffb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcdffb0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00cdffe0 */
GEN_NOFRAME uint GEN_THISCALL F_00cdffe0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcdffe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406810(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00ce0020 */
GEN_FRAME unsigned int F_00ce0020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce0020u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf27 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce0050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce0050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf28 */
GEN_NOFRAME uint GEN_THISCALL F_00ce0060(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce0060u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf32 */
GEN_NOFRAME uint F_00ce0070(void)
{
  GEN_ENTER(0xce0070u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf33 */
GEN_NOFRAME unsigned int F_00ce0080(void)
{
  GEN_ENTER(0xce0080u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf34 */
GEN_NOFRAME byte GEN_THISCALL F_00ce0090(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce0090u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x48) >> 1 & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf35 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce00a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce00a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf36 */
GEN_NOFRAME unsigned int F_00ce00b0(void)
{
  GEN_ENTER(0xce00b0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf37 */
GEN_NOFRAME unsigned int F_00ce00c0(void)
{
  GEN_ENTER(0xce00c0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf38 */
GEN_NOFRAME uint F_00ce00d0(void)
{
  GEN_ENTER(0xce00d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf39 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce00e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce00e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf40 */
GEN_NOFRAME byte GEN_THISCALL F_00ce00f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce00f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x48) >> 7;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf41 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce0100(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce0100u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(byte *)(in_ecx + 0x48) = *(byte *)(in_ecx + 0x48) & 0x7f;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf42 */
GEN_NOFRAME float F_00ce0110(void)
{
  GEN_ENTER(0xce0110u, 0u, 0u, 0u, 0u);
  return REFG(float, 0x1090708);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf1 */
GEN_NOFRAME uint F_00ce0120(void)
{
  GEN_ENTER(0xce0120u, 0u, 0u, 0u, 0u);
  return 4;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce0130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce0130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: FUN_00ce0140 */
GEN_FRAME unsigned int GEN_STDCALL F_00ce0140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce0140u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00ce0170 */
GEN_FRAME uint GEN_THISCALL F_00ce0170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce0170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  if (0x3fffffff < param_1) {
                    
    F_00c4579a("vector<T> too long");
  }
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2) < param_1) {
    puVar4 = (undefined4 *)F_00cdfad0(param_1);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar4;
    for (puVar5 = *(undefined4 * PTR32 *)this; puVar5 != puVar1; puVar5 = puVar5 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar5;
      }
      puVar6 = puVar6 + 1;
    }
    iVar2 = *(int *)this;
    iVar3 = *(int *)((int)this + 4);
    if (iVar2 != 0) {
      F_00406810(iVar2);
    }
    *(undefined4 * PTR32 *)this = puVar4;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar4 + param_1;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar4 + (iVar3 - iVar2 >> 2);
  }
  return param_1;
}

/* ref: FUN_00ce0200 */
GEN_FRAME uint GEN_THISCALL F_00ce0200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce0200u, gen_a0, gen_a1, 0u, 0u);
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
GEN_FRAME uint GEN_THISCALL F_00ce0260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce0260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00ce0200(this GEN_EDX_FWD,1);
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
      F_00ce0200(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00ce02d0 */
GEN_FRAME unsigned int GEN_STDCALL F_00ce02d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar4 = (*(undefined4 *)&gen_args[3]);
  uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                    (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,(*(undefined4 *)&gen_args[3]),"CDev.Engine.Sd.SoundDriver",0,0,0x10);
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
        if (((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[1])) != (undefined4 *)0x0) {
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
                    
            F_00c4579a("vector<T> too long");
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
        if (((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[1])) != (undefined4 *)0x0) {
          *((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[0])[1])) = 0;
        }
      }
      (*(uint * PTR32 *)&gen_args[0])[1] = (*(uint * PTR32 *)&gen_args[0])[1] + 4;
      (*(int *)&gen_args[2]) = (*(int *)&gen_args[2]) + 1;
    } while ((*(int *)&gen_args[2]) <= (int)(*(uint *)&gen_args[1]));
  }
  if ((uint)((int)((*(uint * PTR32 *)&gen_args[0])[1] - *(*(uint * PTR32 *)&gen_args[0])) >> 2) <= (*(uint *)&gen_args[1])) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  iVar3 = *((int *)GEN_TOP((*(*(uint * PTR32 *)&gen_args[0]) + (*(uint *)&gen_args[1]) * 4)));
  if (iVar3 != 0) {
    F_00406810(iVar3);
  }
  if ((*(uint *)&gen_args[1]) < (uint)((int)((*(uint * PTR32 *)&gen_args[0])[1] - *(*(uint * PTR32 *)&gen_args[0])) >> 2)) {
    *((uint *)GEN_TOP((*(*(uint * PTR32 *)&gen_args[0]) + (*(uint *)&gen_args[1]) * 4))) = uVar5;
    return 0;
  }
                    
  F_00c457e7("invalid vector<T> subscript");
}

/* ref: FUN_00ce0470 */
GEN_FRAME unsigned int GEN_THISCALL F_00ce0470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce0470u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar1 = (*(int *)&gen_args[2]);
  piVar4 = (*(int * PTR32 *)&gen_args[3]);
  do {
    if (iVar1 == 0) {
      return 0;
    }
    iVar7 = *piVar4 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    piVar4 = piVar4 + 1;
    puVar2 = ((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[1]));
    (*(int * PTR32 *)&gen_args[3]) = (int *)iVar7;
    if (&(*(int * PTR32 *)&gen_args[3]) < puVar2) {
      puVar3 = ((undefined4 *)GEN_TOP(*(*(uint * PTR32 *)&gen_args[1])));
      if (&(*(int * PTR32 *)&gen_args[3]) < puVar3) goto LAB_00ce0512;
      if (puVar2 == ((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[2]))) {
        uVar5 = (int)puVar2 - (int)((int)(uintptr_t)puVar3) >> 2;
        if (0x3ffffffe < uVar5) goto LAB_00ce0573;
        uVar5 = uVar5 + 1;
        uVar6 = (int)(*(uint * PTR32 *)&gen_args[1])[2] - (int)((int)(uintptr_t)puVar3) >> 2;
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
          F_00ce0170((*(uint * PTR32 *)&gen_args[1]) GEN_EDX_FWD,uVar6);
        }
      }
      if (((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[1])) != (undefined4 *)0x0) {
        *((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[1])) =
             *((undefined4 *)GEN_TOP((*(*(uint * PTR32 *)&gen_args[1]) + ((int)&(*(int * PTR32 *)&gen_args[3]) - (int)((int)(uintptr_t)puVar3) >> 2) * 4)));
      }
    }
    else {
LAB_00ce0512: ;
      if (puVar2 == ((undefined4 *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[2]))) {
        uVar5 = (int)((int)puVar2 - *(*(uint * PTR32 *)&gen_args[1])) >> 2;
        if (0x3ffffffe < uVar5) {
LAB_00ce0573: ;
                    
          F_00c4579a("vector<T> too long");
        }
        uVar5 = uVar5 + 1;
        uVar6 = (int)((int)(*(uint * PTR32 *)&gen_args[1])[2] - *(*(uint * PTR32 *)&gen_args[1])) >> 2;
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
          F_00ce0170((*(uint * PTR32 *)&gen_args[1]) GEN_EDX_ARG,uVar6);
        }
      }
      if (((int *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[1])) != (int *)0x0) {
        *((int *)GEN_TOP((*(uint * PTR32 *)&gen_args[1])[1])) = iVar7;
      }
    }
    (*(uint * PTR32 *)&gen_args[1])[1] = (*(uint * PTR32 *)&gen_args[1])[1] + 4;
    iVar1 = iVar1 - 1;
  } while( true );
}

/* ref: FUN_00ce0580 */
GEN_FRAME unsigned int GEN_THISCALL F_00ce0580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce0580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (this != param_1) {
    if (*(int *)this != 0) {
      F_00406810(*(int *)this);
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

/* ref: FUN_00ce05d0 */
GEN_FRAME uint GEN_THISCALL F_00ce05d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce05d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (this != param_1) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00ce0610 */
GEN_FRAME uint GEN_THISCALL F_00ce0610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce0610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (this != param_1) {
    if (*(int *)this != 0) {
      F_00406810(*(int *)this);
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00ce0660 */
GEN_FRAME uint GEN_THISCALL F_00ce0660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce0660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  if (this != param_1) {
    uVar1 = *(undefined4 *)this;
    *(undefined4 *)this = *param_1;
    *param_1 = uVar1;
    uVar1 = *(undefined4 *)((int)this + 4);
    *(undefined4 *)((int)this + 4) = param_1[1];
    param_1[1] = uVar1;
    uVar1 = *(undefined4 *)((int)this + 8);
    *(undefined4 *)((int)this + 8) = param_1[2];
    param_1[2] = uVar1;
  }
  return (uint)param_1;
}

/* ref: FUN_00ce06a0 */
GEN_FRAME uint GEN_THISCALL F_00ce06a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce06a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined1 * puVar2;
  
  puVar2 = ((undefined1 *)(gen_frame + 0x8));
  if (puVar2 != this) {
    iVar1 = *(int *)this;
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    puVar2 = (undefined1 *)0x0;
    if (iVar1 != 0) {
      puVar2 = (undefined1 *)F_00406810(iVar1);
    }
  }
  return (uint)puVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ToolBank::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ce06d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce06d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cdf910(this GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00ce0700 */
GEN_FRAME uint GEN_THISCALL F_00ce0700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce0700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00ce0f90(this GEN_EDX_FWD,param_1,param_2);
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[46])REFP(0x112ebcc));
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  return (uint)this;
}

/* ref: FUN_00ce0740 */
GEN_FRAME uint GEN_THISCALL F_00ce0740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce0740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00ce0ff0(this GEN_EDX_FWD,param_1,param_2);
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[46])REFP(0x112ebcc));
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  return (uint)this;
}

/* ref: FUN_00ce0780 */
GEN_FRAME uint GEN_THISCALL F_00ce0780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce0780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ce1050(this GEN_EDX_FWD,param_1);
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined2 *)((int)this + 0x60) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[46])REFP(0x112ebcc));
  *(undefined4 *)((int)this + 0x5c) = 0;
  return (uint)this;
}

/* ref: FUN_00ce07c0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce07c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce07c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[46])REFP(0x112ebcc));
  F_00ce10b0(in_ecx GEN_EDX_FWD);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00ce07d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce07d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 4);
  uVar2 = (uint)*(ushort *)(iVar3 + 0xe);
  *(undefined2 *)(this + 0x5c) = *(undefined2 *)(iVar3 + uVar2);
  *(undefined2 *)(this + 0x5e) = *(undefined2 *)(iVar3 + 2 + uVar2);
  *(undefined2 *)(this + 0x60) = *(undefined2 *)(iVar3 + 4 + uVar2);
  uVar1 = F_00ce1300(this GEN_EDX_FWD);
  *(uint *)(this + 0x4c) = uVar1 + uVar2;
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(iVar3 + 8 + uVar2);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(iVar3 + 0xc + uVar2);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(iVar3 + 0x10 + uVar2);
  *(uint *)(this + 0x10) = (uint)*(ushort *)(iVar3 + 6 + uVar2);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(iVar3 + 0x10);
  F_00cc8520(this);
  if ((((byte)this[0x48] & 8) == 0) && (iVar3 = 0, *(short *)(this + 0x5c) != 0)) {
    do {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_ARG,iVar3);
      *(undefined1 *)(uVar1 + 0xf) = 0xff;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(ushort *)(this + 0x5c));
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,0);
  if ((*(byte *)(uVar1 + 0x6c) & 2) != 0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_ARG,0);
    if (*(char *)(uVar1 + 1) == '\x05') {
      *(undefined1 *)(uVar1 + 1) = 0xe;
      return uVar1;
    }
    if (*(char *)(uVar1 + 1) == '\v') {
      *(undefined1 *)(uVar1 + 1) = 0xf;
    }
  }
  return uVar1;
}

/* ref: FUN_00ce08a0 */
GEN_FRAME uint GEN_THISCALL F_00ce08a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce08a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  return *((uint *)GEN_TOP((*(int *)((int)this + 4) + param_2 * 4 + param_1)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf3 */
GEN_FRAME uint GEN_THISCALL F_00ce08c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce08c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
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
GEN_FRAME uint GEN_THISCALL F_00ce0910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce0910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = param_1;
  if ((int)(uint)*(ushort *)(this + 0x5e) <= param_1) {
    iVar1 = 0;
  }
  return *((int *)GEN_TOP((*(int *)(this + 0x50) + iVar1 * 4 + *(int *)(this + 4)))) + *(int *)(this + 4);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf5 */
GEN_FRAME uint GEN_THISCALL F_00ce0940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce0940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
    piVar1 = (int *)F_00d2ccd0();
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x8c))(piVar1 GEN_EDX_ARG)));
    if (piVar1 != (int *)0x0) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_ARG,param_1 & 0xffff7fff);
      return uVar2;
    }
  }
  if ((int)(uint)*(ushort *)(this + 0x60) <= (int)uVar2) {
    uVar2 = 0;
  }
  return *((int *)GEN_TOP((*(int *)(this + 0x54) + uVar2 * 4 + *(int *)(this + 4)))) + *(int *)(this + 4);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf6 */
GEN_FRAME uint GEN_THISCALL F_00ce09c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce09c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
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
GEN_FRAME float GEN_THISCALL F_00ce0a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce0a00u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  byte * pbVar3;
  ushort * puVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float local_8;
  
  local_8 = (float)(float10)0;
  uVar2 = (*(uint *)&gen_args[1]);
  if ((int)(uint)*((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) <= (int)(*(uint *)&gen_args[1])) {
    uVar2 = 0;
  }
  iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
  if (iVar1 == 0) {
    pbVar3 = ((byte *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,uVar2)));
    if (pbVar3 != (byte *)0x0) {
      uVar2 = F_00ce9790(pbVar3,3);
      if (uVar2 != 0) {
        fVar6 = (float10)*(int *)(uVar2 + 4);
        if (*(int *)(uVar2 + 4) < 0) {
          fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        return (float)(fVar6 * (float10)REFG(double, 0x1091858));
      }
      bVar5 = 0;
      (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) & 0xffffff00;
      if (*pbVar3 != 0) {
        do {
          puVar4 = (ushort *)F_00ce9920(pbVar3,(*(uint *)&gen_args[1]),3);
          if ((puVar4 != (ushort *)0x0) &&
             (uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(uint)*puVar4), uVar2 != 0)) {
            fVar6 = F_00cd69c0(uVar2);
            fVar7 = (float10)local_8;
            fVar8 = (float10)(float)fVar6;
            if (fVar7 <= fVar8 && ((!GEN_ISNAN(fVar8) && !GEN_ISNAN(fVar7)) && fVar8 != fVar7)) {
              local_8 = (float)fVar6;
            }
          }
          bVar5 = bVar5 + 1;
          (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),bVar5);
        } while (bVar5 < *pbVar3);
      }
    }
    return local_8;
  }
  fVar6 = (float10)*(int *)(uVar2 * 0x94 + 0x90 + iVar1);
  if (*(int *)(uVar2 * 0x94 + 0x90 + iVar1) < 0) {
    fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  return (float)(fVar6 * (float10)REFG(double, 0x1091858));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf43 */
GEN_NOFRAME uint GEN_THISCALL F_00ce0b10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce0b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf9 */
GEN_FRAME uint GEN_THISCALL F_00ce0b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce0b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
      while (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_ARG,uVar1), param_1 = uVar1,
            *(ushort *)(uVar2 + 0xc) != uVar3) {
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
GEN_FRAME uint GEN_THISCALL F_00ce0bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce0bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
      while (param_1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_ARG,iVar3),
            *(ushort *)(param_1 + 0xc) != uVar1) {
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
        if (*(ushort *)(uVar2 + 0xc) == uVar1) {
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
GEN_FRAME uint GEN_THISCALL F_00ce0c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce0c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_ARG,iVar5);
        if (*(ushort *)(uVar2 + 0xc) == uVar3) break;
        iVar5 = iVar5 + 1;
        if ((int)(uint)*(ushort *)(this + 0x5c) <= iVar5) {
          F_00ce1230(this GEN_EDX_ARG);
          return 0;
        }
      }
      param_1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,iVar5);
    }
    F_00ce1230(this GEN_EDX_ARG);
  }
  else if (*(ushort *)(this + 0x5c) != 0) {
    puVar4 = (ushort *)(iVar5 + 0xc);
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
GEN_FRAME ushort GEN_THISCALL F_00ce0d60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce0d60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x5c) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf8 */
GEN_NOFRAME uint GEN_THISCALL F_00ce0d70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce0d70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(ushort *)(in_ecx + 0x5c);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf27 */
GEN_FRAME uint GEN_THISCALL F_00ce0d80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce0d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
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
  puVar5 = (undefined4 *)(param_1 + 0x90);
  do {
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,local_c)));
    puVar5[-0x24] = *puVar1;
    puVar5[-0x23] = puVar1[1];
    puVar5[-0x22] = puVar1[2];
    puVar5[-0x21] = puVar1[3];
    *(undefined1 *)((int)puVar5 - 0x81) = 0xff;
    puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,local_c)));
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
      *puVar5 = *(undefined4 *)(uVar3 + 4);
    }
    puVar5 = puVar5 + 0x25;
    local_c = local_c + 1;
  } while (local_c < (int)(uint)*(ushort *)(this + 0x5c));
  *(int *)(this + 0x18) = param_1;
  *(undefined4 *)(this + 4) = 0;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf12 */
GEN_FRAME uint GEN_THISCALL F_00ce0e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce0e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_00cc8590(this);
  *(undefined4 *)(this + 4) = param_1;
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 8))(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf22 */
GEN_FRAME uint GEN_THISCALL F_00ce0eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce0eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  char cVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x18) != 0) {
    return (int)*((char *)GEN_TOP(((param_1 & 0xffff) * 0x94 + 0xf + *(int *)(this + 0x18))));
  }
  F_00ce11f0(this GEN_EDX_FWD);
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_ARG,param_1 & 0xffff);
  cVar1 = *(char *)(uVar2 + 0xf);
  F_00ce1230(this GEN_EDX_ARG);
  return (int)cVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf23 */
GEN_FRAME uint GEN_THISCALL F_00ce0f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce0f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x18);
  if (uVar1 != 0) {
    *((undefined1 *)GEN_TOP(((param_1 & 0xffff) * 0x94 + 0xf + uVar1))) = (undefined1)param_2;
    return uVar1;
  }
  F_00ce11f0(this GEN_EDX_FWD);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_ARG,param_1 & 0xffff);
  *(undefined1 *)(uVar1 + 0xf) = (undefined1)param_2;
  uVar1 = F_00ce1230(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf1 */
GEN_NOFRAME uint F_00ce0f50(void)
{
  GEN_ENTER(0xce0f50u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ActualBank::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ce0f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce0f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[46])REFP(0x112ebcc));
  F_00ce10b0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00ce0f90 */
GEN_FRAME unsigned int GEN_THISCALL F_00ce0f90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce0f90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(int *)((int)this + 4) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x112ec94));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined4 *)((int)this + 0x10) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined1 *)((int)this + 0x48) = 0x82;
  *(undefined4 *)((int)this + 0x18) = 0;
  return 0;
}

/* ref: FUN_00ce0ff0 */
GEN_FRAME uint GEN_THISCALL F_00ce0ff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce0ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x112ec94));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined1 *)((int)this + 0x48) = 0x82;
  *(undefined4 *)((int)this + 0x18) = 0;
  return (uint)this;
}

/* ref: FUN_00ce1050 */
GEN_FRAME uint GEN_THISCALL F_00ce1050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce1050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x112ec94));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 2;
  *(undefined4 *)((int)this + 0x10) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined1 *)((int)this + 0x48) = 0x82;
  *(undefined4 *)((int)this + 0x18) = 0;
  return (uint)this;
}

/* ref: FUN_00ce10b0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce10b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce10b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[45])REFP(0x112ec94));
  return;
}

/* ref: FUN_00ce10c0 */
GEN_FRAME uint GEN_THISCALL F_00ce10c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce10c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x14))(this GEN_EDX_FWD,param_1)));
  return *puVar1;
}

/* ref: FUN_00ce10e0 */
GEN_FRAME byte GEN_THISCALL F_00ce10e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce10e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x14))(this GEN_EDX_FWD,param_1);
  return *(int *)(uVar1 + 0x14) != 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf13 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce1100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce1100u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf14 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce1110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce1110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf15 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce1120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce1120u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf16 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce1130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce1130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf17 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce1140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xce1140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf44 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce1150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce1150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf18 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce1160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce1160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf19 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce1170(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce1170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf20 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce1180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce1180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf21 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce1190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce1190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf29 */
GEN_NOFRAME uint F_00ce11a0(void)
{
  GEN_ENTER(0xce11a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf30 */
GEN_NOFRAME uint F_00ce11b0(void)
{
  GEN_ENTER(0xce11b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf31 */
GEN_NOFRAME uint F_00ce11c0(void)
{
  GEN_ENTER(0xce11c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00ce11d0 */
GEN_FRAME uint GEN_THISCALL F_00ce11d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce11d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(byte *)(in_ecx + 0x48) = *(byte *)(in_ecx + 0x48) | 0x40;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00ce11f0 */
GEN_NOFRAME uint GEN_THISCALL F_00ce11f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce11f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(int *)((int)this + 0x18) == 0) && ((*(byte *)((int)this + 0x48) & 0x40) != 0)) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x10))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_FWD);
    if (uVar1 != 0) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 4))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG);
      *(uint *)((int)this + 4) = uVar1;
      return uVar1;
    }
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  return 0;
}

/* ref: FUN_00ce1230 */
GEN_NOFRAME uint GEN_THISCALL F_00ce1230(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  
  if ((*(int *)((int)this + 0x18) == 0) && ((*(byte *)((int)this + 0x48) & 0x40) != 0)) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x14))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_FWD);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00ce1250 */
GEN_NOFRAME uint GEN_THISCALL F_00ce1250(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(byte *)((int)this + 0x48) & 0x40) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x10))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_FWD);
    if (uVar1 != 0) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 4))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_ARG);
      if (uVar1 != 0) {
        *(uint *)((int)this + 4) = uVar1;
        return uVar1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00ce1280 */
GEN_NOFRAME uint GEN_THISCALL F_00ce1280(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  
  if ((*(byte *)((int)this + 0x48) & 0x40) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x14))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_FWD);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00ce12a0 */
GEN_NOFRAME byte GEN_THISCALL F_00ce12a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce12a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x18) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 4))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_FWD);
    if (uVar1 == 0) {
      return 0;
    }
    *(uint *)((int)this + 4) = uVar1;
  }
  return 1;
}

/* ref: FUN_00ce12d0 */
GEN_NOFRAME byte GEN_THISCALL F_00ce12d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce12d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x18) == 0) {
    return 1;
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 4))))(*(int * PTR32 *)((int)this + 8) GEN_EDX_FWD);
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)((int)this + 4) == uVar1;
}

/* ref: FUN_00ce1300 */
GEN_NOFRAME uint GEN_THISCALL F_00ce1300(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ce94d0(*(undefined4 *)((int)this + 0xc));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf24 */
GEN_FRAME uint GEN_THISCALL F_00ce1320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce1320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
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
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_ARG,param_1);
  if (uVar1 != 0) {
    uVar2 = (uint)*(byte *)(uVar1 + 1);
  }
  if ((*(int *)(this + 0x18) == 0) && (((byte)this[0x48] & 0x40) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x14))))(*(int * PTR32 *)(this + 8) GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf25 */
GEN_FRAME uint GEN_THISCALL F_00ce1390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce1390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
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
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_ARG,param_1);
  if (uVar1 != 0) {
    uVar2 = *(int *)(this + 0x10) * 1000 + (uint)*(ushort *)(uVar1 + 0xc);
  }
  if ((*(int *)(this + 0x18) == 0) && (((byte)this[0x48] & 0x40) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x14))))(*(int * PTR32 *)(this + 8) GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf26 */
GEN_FRAME byte GEN_THISCALL F_00ce1410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce1410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
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
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_ARG,param_1);
  if (uVar1 != 0) {
    bVar2 = *(byte *)(uVar1 + 4) & 1;
  }
  if ((*(int *)(this + 0x18) == 0) && (((byte)this[0x48] & 0x40) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x14))))(*(int * PTR32 *)(this + 8) GEN_EDX_ARG);
  }
  return bVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf1 */
GEN_NOFRAME uint F_00ce1480(void)
{
  GEN_ENTER(0xce1480u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bank::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ce1490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce1490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x112ec94));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00ce14c0 */
GEN_FRAME unsigned int F_00ce14c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce14c0u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf29 */
GEN_NOFRAME uint GEN_THISCALL F_00ce14e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce14e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x6c);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf30 */
GEN_NOFRAME uint GEN_THISCALL F_00ce14f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce14f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 100);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_00ce1500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce1500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_FWD,0);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf33 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce1510(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00ce1570(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1570u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x48) >> 1 & 1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf35 */
GEN_FRAME uint GEN_THISCALL F_00ce1580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce1580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(uint *)(this + 0xbc) = param_1;
  uVar1 = param_1;
  if ((param_1 == 0) && (*(int *)(this + 0xc0) != 0)) {
    if (((byte)this[0x48] & 0x10) == 0) {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x90))(this GEN_EDX_FWD);
    }
    *(undefined4 *)(this + 0xc0) = 0;
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf37 */
GEN_NOFRAME uint GEN_THISCALL F_00ce15c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xce15c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0xbc) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xbc) + 0x178))))
                      (*(int * PTR32 *)(this + 0xbc) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf38 */
GEN_NOFRAME uint GEN_THISCALL F_00ce15e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce15e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xa4);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf36 */
GEN_NOFRAME uint GEN_THISCALL F_00ce15f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce15f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cc7f20(*(undefined4 *)(this + 0x14));
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf39 */
GEN_FRAME uint GEN_THISCALL F_00ce1600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce1600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc78c0(param_1);
  return uVar1;
}

/* ref: FUN_00ce1620 */
GEN_FRAME uint F_00ce1620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce1620u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int iVar2;
  
  piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((*(ushort *)(param_1 + 0xe) + 0xc + param_1))) + param_1)));
  iVar2 = param_1 + *piVar1;
  *param_2 = iVar2;
  return *(int *)(iVar2 + 0x18) + 0x20 + *piVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf42 */
GEN_NOFRAME float F_00ce1650(void)
{
  GEN_ENTER(0xce1650u, 0u, 0u, 0u, 0u);
  return REFG(float, 0x1090708);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf3 */
GEN_FRAME uint GEN_THISCALL F_00ce1660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce1660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((((byte)this[0x48] & 2) != 0) && ((*(int *)&gen_a1) == 0)) {
    uVar1 = F_00ce08c0((undefined *)this GEN_EDX_FWD,0);
    return uVar1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf4 */
GEN_FRAME uint GEN_THISCALL F_00ce1680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce1680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((((byte)this[0x48] & 2) != 0) && ((*(int *)&gen_a1) == 0)) {
    uVar1 = F_00ce0910((undefined *)this GEN_EDX_FWD,0);
    return uVar1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf5 */
GEN_FRAME uint GEN_THISCALL F_00ce16a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce16a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((((byte)this[0x48] & 2) != 0) && ((*(int *)&gen_a1) == 0)) {
    uVar1 = F_00ce0940((undefined *)this GEN_EDX_FWD,0);
    return uVar1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf6 */
GEN_FRAME uint GEN_THISCALL F_00ce16c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce16c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((((byte)this[0x48] & 2) != 0) && ((*(int *)&gen_a1) == 0)) {
    uVar1 = F_00ce09c0((undefined *)this GEN_EDX_FWD,0);
    return uVar1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf43 */
GEN_NOFRAME uint GEN_THISCALL F_00ce16e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce16e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf24 */
GEN_FRAME uint GEN_THISCALL F_00ce1700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce1700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((((byte)this[0x48] & 2) != 0) && ((*(int *)&gen_a1) == 0)) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,0);
    return (uint)*(byte *)(uVar1 + 1);
  }
  return 0xffffffff;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf26 */
GEN_FRAME uint GEN_THISCALL F_00ce1730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce1730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  
  if ((((byte)this[0x48] & 2) != 0) && ((*(int *)&gen_a1) == 0)) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_FWD,0);
    return *(uint *)(uVar1 + 4) & 1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00ce1760 */
GEN_FRAME uint GEN_THISCALL F_00ce1760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xce1760u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  F_00ce0780(this GEN_EDX_FWD,param_1);
  *(undefined4 *)((int)this + 100) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[47])REFP(0x112ee54));
  *(undefined4 *)((int)this + 0x68) = param_3;
  *(undefined4 *)((int)this + 0x6c) = param_4;
  *(undefined4 *)((int)this + 0x70) = param_5;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x88));
  *(undefined1 *)((int)this + 0xa0) = 1;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xc4) = param_4;
  *(undefined4 *)((int)this + 0xa4) = param_6;
  *(byte *)((int)this + 0x48) = *(byte *)((int)this + 0x48) & 0xfd | 8;
  return (uint)this;
}

/* ref: FUN_00ce1810 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce1810(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x88);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[47])REFP(0x112ee54));
  *(undefined1 *)((int)this + 0xa0) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  if (*(char *)((int)this + 0xa0) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  gen_imp_DeleteCriticalSection(lpCriticalSection);
  F_00ce07c0(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_00ce1860 */
GEN_FRAME uint F_00ce1860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xce1860u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c) GEN_EDX_ARG);
  return extraout_EAX;
}

/* ref: FUN_00ce1900 */
GEN_NOFRAME byte GEN_THISCALL F_00ce1900(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  
  if (*(int *)((int)this + 0xac) != 0) {
    bVar5 = F_00ce3430(*(int *)((int)this + 0xac));
    if (bVar5 != 0) {
      piVar2 = *(int * PTR32 *)((int)this + 0x68);
      if (*piVar2 == 0x42444553) {
        uVar1 = *(ushort *)((int)piVar2 + 0xe);
        *(int *)((int)this + 0xc) = piVar2[2];
        *(uint *)((int)this + 0x1c) = piVar2[4] - (uint)*(ushort *)(uVar1 + 0x1c + (int)piVar2);
        if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
          REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xce1860));
        }
        ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x112edd8),&REFG(undefined, 0x112ed59),"StreamBank.cpp",0x10f,
                        "SQEX::CDev::Engine::Sd::Driver::StreamBank::StandbyData");
      }
      else {
        *(byte *)((int)this + 0x48) = *(byte *)((int)this + 0x48) & 0x7d | 2;
        F_00cc4e60(this,0);
      }
      *(undefined4 *)((int)this + 0xac) = 0;
    }
  }
  if (*(int *)((int)this + 0xb0) == 0) goto LAB_00ce1a2e;
  bVar5 = F_00ce3430(*(int *)((int)this + 0xb0));
  if (bVar5 == 0) goto LAB_00ce1a2e;
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x30))(this GEN_EDX_ARG,*(undefined4 *)((int)this + 0x68));
  iVar3 = *(int *)((int)this + 0x70);
  iVar7 = *(int *)((int)this + 0x6c) - iVar3;
  if (iVar7 == 0) {
LAB_00ce1a23: ;
    *(byte *)((int)this + 0x48) = *(byte *)((int)this + 0x48) | 2;
  }
  else {
    if (*(int *)((int)this + 0x1c) <= *(int *)((int)this + 0x6c)) {
      iVar7 = *(int *)((int)this + 0x1c) - iVar3;
    }
    if (iVar7 < 1) goto LAB_00ce1a23;
    iVar4 = *(int *)((int)this + 0xa8);
    if (iVar4 != 0) {
      iVar7 = (iVar7 / iVar4) * iVar4;
    }
    uVar6 = F_00ce3e30(*(undefined4 *)((int)this + 100),*(int *)((int)this + 0x68) + iVar3,iVar3,0
                         ,iVar7,iVar7 >> 0x1f,*(undefined4 *)((int)this + 0x14),0);
    *(int *)((int)this + 0x70) = *(int *)((int)this + 0x70) + iVar7;
    *(uint *)((int)this + 0xb8) = uVar6;
  }
  *(undefined4 *)((int)this + 0xb0) = 0;
LAB_00ce1a2e: ;
  bVar5 = 0;
  if (*(int *)((int)this + 0xb8) != 0) {
    bVar5 = F_00ce3430(*(int *)((int)this + 0xb8));
    if (bVar5 != 0) {
      *(byte *)((int)this + 0x48) = *(byte *)((int)this + 0x48) | 2;
      *(undefined4 *)((int)this + 0xb8) = 0;
    }
  }
  return bVar5;
}

/* ref: FUN_00ce1a60 */
GEN_NOFRAME uint GEN_THISCALL F_00ce1a60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  *(undefined1 *)((int)this + 0x28) = 1;
  return (uint)this;
}

/* ref: FUN_00ce1a90 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce1a90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined1 *)((int)this + 0x28) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (*(char *)((int)this + 0x28) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  }
  return 0;
}

/* ref: FUN_00ce1ac0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce1ac0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x10);
  *(undefined1 *)((int)this + 0x28) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (*(char *)((int)this + 0x28) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return (uint)(gen_imp_DeleteCriticalSection(lpCriticalSection));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf1 */
GEN_NOFRAME uint F_00ce1b00(void)
{
  GEN_ENTER(0xce1b00u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf32 */
GEN_NOFRAME uint GEN_THISCALL F_00ce1b10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1b10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x70);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf46 */
GEN_NOFRAME uint GEN_THISCALL F_00ce1b20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1b20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x70);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBank::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ce1b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce1b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x88);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[47])REFP(0x112ee54));
  this[0xa0] = (undefined1)0x1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  if (this[0xa0] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  gen_imp_DeleteCriticalSection(lpCriticalSection);
  F_00ce07c0(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00ce1ba0 */
GEN_FRAME unsigned int F_00ce1ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce1ba0u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00ce1bc0 */
GEN_FRAME float10 GEN_THISCALL F_00ce1bc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1bc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)((float)GEN_TOF((((float10)GEN_TOD((*(int *)(in_ecx + 0x84) - *(int *)(in_ecx + 0x88)))) /
                         (float10)*(int *)(in_ecx + 0x9c))));
}

/* ref: FUN_00ce1bf0 */
GEN_NOFRAME uint GEN_THISCALL F_00ce1bf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1bf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x84) - *(int *)(in_ecx + 0x88);
}

/* ref: FUN_00ce1c00 */
GEN_NOFRAME uint GEN_THISCALL F_00ce1c00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return *(int *)((int)this + 0x88) % *(int *)((int)this + 0x9c) + *(int *)((int)this + 0x78);
}

/* ref: FUN_00ce1c20 */
GEN_NOFRAME uint GEN_THISCALL F_00ce1c20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0x88);
  iVar2 = *(int *)((int)this + 0xa0);
  uVar3 = *(int *)((int)this + 0x84) - iVar1;
  if ((-1 < iVar2) && (iVar2 < (int)(iVar1 + uVar3))) {
    uVar3 = iVar2 - iVar1;
  }
  iVar2 = *(int *)((int)this + 0x9c);
  if (iVar2 < (int)(iVar1 % iVar2 + uVar3)) {
    return iVar2 - iVar1 % iVar2;
  }
  return uVar3;
}

/* ref: FUN_00ce1c70 */
GEN_NOFRAME uint GEN_THISCALL F_00ce1c70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1c70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xdc);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::vf3 */
GEN_FRAME uint GEN_THISCALL F_00ce1c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce1c80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(int *)(in_ecx + 0x98) != 0) && ((*(int *)&gen_a1) == 0)) {
    return *((int *)GEN_TOP((*(int *)(in_ecx + 0x98) + 0x50))) + *(int *)(in_ecx + 0x98);
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::vf4 */
GEN_FRAME uint GEN_THISCALL F_00ce1cb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce1cb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  if ((*(int *)(in_ecx + 0x98) != 0) && ((*(int *)&gen_a1) == 0)) {
    iVar1 = *(int *)(in_ecx + 0x98);
    return *((int *)GEN_TOP((*(int *)(iVar1 + 0x38) + iVar1))) + iVar1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::vf5 */
GEN_FRAME uint GEN_THISCALL F_00ce1ce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce1ce0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  if ((*(int *)(in_ecx + 0x98) != 0) && ((*(int *)&gen_a1) == 0)) {
    iVar1 = *(int *)(in_ecx + 0x98);
    return *((int *)GEN_TOP((*(int *)(iVar1 + 0x3c) + iVar1))) + iVar1;
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::vf6 */
GEN_FRAME uint GEN_THISCALL F_00ce1d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce1d10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  if ((*(int *)(in_ecx + 0x98) != 0) && ((*(int *)&gen_a1) == 0)) {
    iVar1 = *(int *)(in_ecx + 0x98);
    return *((int *)GEN_TOP((*(int *)(iVar1 + 0x40) + iVar1))) + iVar1;
  }
  return 0;
}

/* ref: FUN_00ce1d40 */
GEN_FRAME uint GEN_THISCALL F_00ce1d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce1d40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if ((((*(byte *)(in_ecx + 0xd4) & 1) != 0) && (-1 < *(int *)(in_ecx + 0xa0))) &&
     (*(int *)(in_ecx + 0xa0) <= *(int *)(in_ecx + 0x88) + param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ce1d80 */
GEN_FRAME uint GEN_THISCALL F_00ce1d80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce1d80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if ((((*(byte *)(in_ecx + 0xd4) & 1) == 0) && (-1 < *(int *)(in_ecx + 0xa0))) &&
     (*(int *)(in_ecx + 0xa0) <= *(int *)(in_ecx + 0x88) + param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ce1dc0 */
GEN_NOFRAME byte GEN_THISCALL F_00ce1dc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1dc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((((*(byte *)(in_ecx + 0xd4) & 1) != 0) && (-1 < *(int *)(in_ecx + 0xa0))) &&
     (*(int *)(in_ecx + 0xa0) <= *(int *)(in_ecx + 0x88))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ce1df0 */
GEN_NOFRAME byte GEN_THISCALL F_00ce1df0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1df0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((((*(byte *)(in_ecx + 0xd4) & 1) == 0) && (-1 < *(int *)(in_ecx + 0xa0))) &&
     (*(int *)(in_ecx + 0xa0) <= *(int *)(in_ecx + 0x88))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ce1e20 */
GEN_NOFRAME byte GEN_THISCALL F_00ce1e20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = 1;
  if (((*(byte *)((int)this + 0xd4) & 1) != 0) ||
     (*(int *)((int)this + 0x8c) < *(int *)((int)this + 0x90))) {
    bVar1 = 0;
  }
  return bVar1;
}

/* ref: FUN_00ce1e80 */
GEN_FRAME byte GEN_THISCALL F_00ce1e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce1e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(int *)((int)this + 0xdc) == param_1) {
    *(undefined4 *)((int)this + 0xdc) = 0;
    if ((*(byte *)((int)this + 0x48) & 0x20) != 0) {
      *(byte *)((int)this + 0x48) = *(byte *)((int)this + 0x48) & 0xdf;
      F_00ce3950(*(undefined4 *)((int)this + 0x14));
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00ce1ec0 */
GEN_FRAME byte GEN_THISCALL F_00ce1ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce1ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(int *)((int)this + 0xdc) == 0) {
    *(int *)((int)this + 0xdc) = param_1;
    if ((*(byte *)((int)this + 0x48) & 0x20) == 0) {
      *(byte *)((int)this + 0x48) = *(byte *)((int)this + 0x48) | 0x20;
      F_00ce3fa0(*(undefined4 *)((int)this + 0x14),(int)this + 100);
    }
  }
  return param_1 == *(int *)((int)this + 0xdc);
}

/* ref: FUN_00ce1f10 */
GEN_FRAME unsigned int GEN_THISCALL F_00ce1f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce1f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined1 *)((int)this + 0xf8) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xe0));
  *(int *)((int)this + 0x88) = *(int *)((int)this + 0x88) + param_1;
  if (*(char *)((int)this + 0xf8) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xe0));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::vf33 */
GEN_NOFRAME uint GEN_THISCALL F_00ce1fc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce1fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME uint GEN_THISCALL F_00ce1fe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce1fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint extraout_EAX = 0;
  uint uVar1;
  
  *(undefined1 *)((int)this + 0xf8) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xe0));
  *(uint *)((int)this + 0x80) = param_1;
  uVar1 = param_1;
  if (*(char *)((int)this + 0xf8) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xe0));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ce2020 */
GEN_FRAME uint GEN_THISCALL F_00ce2020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xce2020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00ce0780(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)((int)this + 100) =
       (*(undefined * PTR32 (*)[2])REFP(0x112f30c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[46])REFP(0x112f324));
  *(undefined * PTR32 * PTR32 *)((int)this + 100) = (*(undefined * PTR32 (*)[2])REFP(0x112f318));
  *(undefined4 *)((int)this + 0x68) = param_2;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6c) =
       (*(undefined * PTR32 (*)[3])REFP(0x112a770));
  *(undefined4 *)((int)this + 0x74) = param_3;
  *(undefined4 *)((int)this + 0x78) = param_3;
  *(undefined4 *)((int)this + 0x7c) = param_4;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0xffffffff;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xb4));
  *(undefined1 *)((int)this + 0xcc) = 1;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xd8) = 1;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xe0));
  *(undefined1 *)((int)this + 0xf8) = 1;
  *(byte *)((int)this + 0x48) = *(byte *)((int)this + 0x48) & 0xfd | 8;
  F_00ce0d60(this GEN_EDX_ARG,1);
  return (uint)this;
}

/* ref: FUN_00ce2110 */
GEN_FRAME uint GEN_THISCALL F_00ce2110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xce2110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_00ce0780(this GEN_EDX_FWD,param_1);
  *(undefined * PTR32 * PTR32 *)((int)this + 100) =
       (*(undefined * PTR32 (*)[2])REFP(0x112f30c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[46])REFP(0x112f324));
  *(undefined * PTR32 * PTR32 *)((int)this + 100) = (*(undefined * PTR32 (*)[2])REFP(0x112f318));
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6c) =
       (*(undefined * PTR32 (*)[3])REFP(0x112a770));
  *(undefined4 *)((int)this + 0x70) = param_3;
  *(undefined4 *)((int)this + 0x74) = param_4;
  *(undefined4 *)((int)this + 0x78) = param_4;
  *(undefined4 *)((int)this + 0x7c) = param_5;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0xffffffff;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xb4));
  *(undefined1 *)((int)this + 0xcc) = 1;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xd8) = 1;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xe0));
  *(undefined1 *)((int)this + 0xf8) = 1;
  *(int *)((int)this + 0x68) = (int)this + 0x6c;
  *(byte *)((int)this + 0x48) = *(byte *)((int)this + 0x48) & 0xfd | 8;
  F_00ce0d60(this GEN_EDX_ARG,1);
  return (uint)this;
}

/* ref: FUN_00ce2210 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce2210(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce2210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[46])REFP(0x112f324));
  *(undefined * PTR32 * PTR32 *)((int)this + 100) = (*(undefined * PTR32 (*)[2])REFP(0x112f318));
  if ((*(byte *)((int)this + 0x48) & 0x20) != 0) {
    *(byte *)((int)this + 0x48) = *(byte *)((int)this + 0x48) & 0xdf;
    F_00ce3950(*(undefined4 *)((int)this + 0x14));
  }
  do {
    bVar1 = F_00ce3460(*(undefined4 *)((int)this + 0x14));
  } while (bVar1 != 0);
  gen_imp_DeleteCriticalSection((int)this + 0xe0);
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xb4);
  *(undefined1 *)((int)this + 0xcc) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  if (*(char *)((int)this + 0xcc) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  gen_imp_DeleteCriticalSection(lpCriticalSection);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x6c) = (*(undefined * PTR32 (*)[3])REFP(0x109726c));
  *(undefined * PTR32 * PTR32 *)((int)this + 100) =
       (*(undefined * PTR32 (*)[2])REFP(0x112f30c));
  F_00ce07c0(this GEN_EDX_ARG);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::vf36 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce22c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce22c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME uint F_00ce2310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xce2310u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c) GEN_EDX_ARG);
  return extraout_EAX;
}

/* ref: FUN_00ce23b0 */
GEN_FRAME uint GEN_THISCALL F_00ce23b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce23b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
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
  
  piVar7 = *(int * PTR32 *)((int)this + 0x1c);
  switch((unsigned int)(uintptr_t)(piVar7)) {
  case (int *)0x0: ;
    iVar9 = *(int *)((int)this + 0x18);
    if (0x4f < iVar9) {
      if (*(int *)((int)this + 0x28) < 0x50) {
        piVar14 = *(int * PTR32 *)((int)this + 0x14);
        piVar7 = ((int *)GEN_TOP(((int)piVar14 + *(int *)((int)this + 0x20))));
        iVar11 = 0x50 - *(int *)((int)this + 0x20);
        iVar12 = *(int *)((int)this + 0x28);
        (*(int * PTR32 *)(gen_frame + 0x4)) = piVar7;
        (*(int *)(gen_frame + 0x8)) = iVar11;
        (*(int *)(gen_frame + 0xc)) = iVar12;
        (*(int *)(gen_frame + 0x10)) = 0;
        (*(int *)(gen_frame + 0x14)) = iVar9;
        if ((piVar7 < piVar14) || ((uint)((int)piVar14 + iVar9) < (uint)(iVar11 + (int)piVar7))) {
          F_00cc1d20(&(*(undefined1 *)(gen_frame + 0x2b)) GEN_EDX_FWD,&REFG(undefined, 0x112efac),"[sd][driver][stream] stream read buffer overrun!!",
                       "StreamBankEx.cpp",0x1b8,
                       "SQEX::CDev::Engine::Sd::Driver::StreamBankEx::OnStreamReadThreadExecute");
        }
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))
                                  (*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x4)))));
        if (piVar7 == (int *)0xffffffff) {
          *(byte *)((int)this - 0x1c) = *(byte *)((int)this - 0x1c) & 0x7f;
          break;
        }
        piVar14 = piVar7;
        if (*(char *)((int)this + 0x94) != '\0') {
          gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
          piVar14 = extraout_EAX;
        }
        *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + (int)piVar7;
        *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + (int)piVar7;
        piVar7 = piVar14;
        if (*(char *)((int)this + 0x94) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
          piVar7 = extraout_EAX_00;
        }
        if (*(int *)((int)this + 0x28) < 0x50) break;
      }
      piVar7 = *(int * PTR32 *)((int)this + 0x14);
      if ((*piVar7 == 0x42444553) && (piVar7[1] == 0x46435353)) {
        *(int *)((int)this - 0x58) = piVar7[2];
        *(int *)((int)this - 0x48) = piVar7[4];
        if ((((short)piVar7[0xd] != 1) || ((short)piVar7[0xc] != 1)) ||
           (*(short *)((int)piVar7 + 0x32) != 1)) {
          *(byte *)((int)this - 0x1c) = *(byte *)((int)this - 0x1c) & 0x7d | 2;
          return (uint)piVar7;
        }
        *(uint *)((int)this - 0x54) = (uint)*(ushort *)((int)piVar7 + 0x36);
        piVar7 = (int *)F_00ce1fe0((undefined *)((int)this - 100) GEN_EDX_ARG,1);
        break;
      }
    }
    *(byte *)((int)this - 0x1c) = *(byte *)((int)this - 0x1c) & 0x7d | 2;
    return (uint)piVar7;
  case (int *)0x1: ;
    piVar7 = *(int * PTR32 *)((int)this + 0x14);
    iVar9 = ((uint)*(ushort *)(piVar7 + 0xd) * 4 + 0xf & 0xfffffff0) + piVar7[0xf];
    if (*(int *)((int)this + 0x28) < iVar9) {
      piVar14 = ((int *)GEN_TOP(((int)piVar7 + *(int *)((int)this + 0x20))));
      iVar11 = iVar9 - *(int *)((int)this + 0x20);
      (*(int *)(gen_frame + 0xc)) = *(int *)((int)this + 0x28);
      iVar12 = *(int *)((int)this + 0x18);
      (*(int * PTR32 *)(gen_frame + 0x4)) = piVar14;
      (*(int *)(gen_frame + 0x8)) = iVar11;
      (*(int *)(gen_frame + 0x10)) = 0;
      (*(int *)(gen_frame + 0x14)) = iVar12;
      if ((piVar14 < piVar7) || ((uint)((int)piVar7 + iVar12) < (uint)(iVar11 + (int)piVar14))) {
        F_00cc1d20(&(*(undefined1 *)(gen_frame + 0x2b)) GEN_EDX_ARG,&REFG(undefined, 0x112f050),"[sd][driver][stream] stream read buffer overrun!!",
                     "StreamBankEx.cpp",0x1fc,
                     "SQEX::CDev::Engine::Sd::Driver::StreamBankEx::OnStreamReadThreadExecute");
      }
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))
                                (*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x4)))));
      (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar7;
      if (*(char *)((int)this + 0x94) != '\0') {
        gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
      }
      *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + (int)(*(int * PTR32 *)(gen_frame + 0x1c));
      *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + (int)(*(int * PTR32 *)(gen_frame + 0x1c));
      piVar7 = (*(int * PTR32 *)(gen_frame + 0x1c));
      if (*(char *)((int)this + 0x94) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
        piVar7 = extraout_EAX_01;
      }
      if (*(int *)((int)this + 0x28) < iVar9) break;
    }
    piVar7 = (int *)F_00ce1fe0((undefined *)((int)this - 100) GEN_EDX_ARG,2);
    break;
  case (int *)0x2: ;
    piVar7 = *(int * PTR32 *)((int)this + 0x14);
    iVar9 = *(int *)((int)this + 0x28);
    (*(int * PTR32 *)(gen_frame + 0x20)) = piVar7 + 0xf;
    iVar12 = *(int *)((int)piVar7 + piVar7[0xf]) + 0x20;
    if (iVar9 < iVar12) {
      iVar11 = *(int *)((int)this + 0x20);
      piVar14 = (int *)((int)piVar7 + iVar11);
      (*(int * PTR32 *)(gen_frame + 0x4)) = piVar14;
      iVar11 = iVar12 - iVar11;
      (*(int *)(gen_frame + 0x8)) = iVar11;
      (*(int *)(gen_frame + 0xc)) = iVar9;
      (*(int *)(gen_frame + 0x10)) = 0;
      (*(int *)(gen_frame + 0x14)) = *(int *)((int)this + 0x18);
      if ((piVar14 < piVar7) ||
         ((uint)((int)piVar7 + *(int *)((int)this + 0x18)) < (uint)(iVar11 + (int)piVar14))) {
        F_00cc1d20(&(*(undefined1 *)(gen_frame + 0x2b)) GEN_EDX_ARG,&REFG(undefined, 0x112f0e4),"[sd][driver][stream] stream read buffer overrun!!",
                     "StreamBankEx.cpp",0x223,
                     "SQEX::CDev::Engine::Sd::Driver::StreamBankEx::OnStreamReadThreadExecute");
      }
      piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))
                                (*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x4)))));
      (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar7;
      if (*(char *)((int)this + 0x94) != '\0') {
        gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
      }
      *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + (int)(*(int * PTR32 *)(gen_frame + 0x1c));
      *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + (int)(*(int * PTR32 *)(gen_frame + 0x1c));
      piVar7 = (*(int * PTR32 *)(gen_frame + 0x1c));
      if (*(char *)((int)this + 0x94) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
        piVar7 = extraout_EAX_02;
      }
    }
    if (iVar12 <= *(int *)((int)this + 0x28)) {
      piVar7 = *(int * PTR32 *)((int)this + 0x14);
      iVar12 = *((int *)GEN_TOP((*(int *)((int)piVar7 + *(*(int * PTR32 *)(gen_frame + 0x20))) + 0x18 + (int)piVar7))) + iVar12;
      if (*(int *)((int)this + 0x28) < iVar12) {
        piVar14 = ((int *)GEN_TOP(((int)piVar7 + *(int *)((int)this + 0x20))));
        iVar11 = iVar12 - *(int *)((int)this + 0x20);
        (*(int *)(gen_frame + 0xc)) = *(int *)((int)this + 0x28);
        iVar9 = *(int *)((int)this + 0x18);
        (*(int * PTR32 *)(gen_frame + 0x4)) = piVar14;
        (*(int *)(gen_frame + 0x8)) = iVar11;
        (*(int *)(gen_frame + 0x10)) = 0;
        (*(int *)(gen_frame + 0x14)) = iVar9;
        if ((piVar14 < piVar7) || ((uint)((int)piVar7 + iVar9) < (uint)(iVar11 + (int)piVar14))) {
          F_00cc1d20(&(*(undefined1 *)(gen_frame + 0x2b)) GEN_EDX_ARG,&REFG(undefined, 0x112f178),"[sd][driver][stream] stream read buffer overrun!!",
                       "StreamBankEx.cpp",0x241,
                       "SQEX::CDev::Engine::Sd::Driver::StreamBankEx::OnStreamReadThreadExecute");
        }
        piVar7 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))
                                  (*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x4)))));
        (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar7;
        if (*(char *)((int)this + 0x94) != '\0') {
          gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
        }
        *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + (int)(*(int * PTR32 *)(gen_frame + 0x1c));
        *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + (int)(*(int * PTR32 *)(gen_frame + 0x1c));
        piVar7 = (*(int * PTR32 *)(gen_frame + 0x1c));
        if (*(char *)((int)this + 0x94) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
          piVar7 = extraout_EAX_03;
        }
      }
      if (iVar12 <= *(int *)((int)this + 0x28)) {
        piVar7 = (int *)F_00ce1fe0((undefined *)((int)this - 100) GEN_EDX_ARG,3);
      }
    }
    break;
  case (int *)0x3: ;
    iVar9 = *(int *)((int)this + 0x14);
    piVar7 = *((int * PTR32 *)GEN_TOP((iVar9 + *(int *)(iVar9 + 0x3c))));
    (*(int *)(gen_frame + 0x18)) = iVar9;
    piVar14 = (int *)(iVar9 + (int)piVar7);
    iVar9 = *(int *)(iVar9 + 0x18 + (int)piVar7) + 0x20 + (int)piVar7;
    (*(int * PTR32 *)(gen_frame + 0x20)) = piVar7;
    (*(int *)(gen_frame + 0x24)) = iVar9;
    if ((uint)piVar14[4] < (uint)piVar14[5]) {
      *(uint *)((int)this + 0x70) = *(uint *)((int)this + 0x70) | 1;
    }
    *(int *)((int)this + 0x2c) = iVar9 + *piVar14;
    *(undefined4 *)((int)this + 0x74) = 1;
    puVar2 = (undefined1 *)piVar14[3];
    if (puVar2 == (undefined1 *)0xffffffff) {
      return 0xffffffff;
    }
    if (puVar2 == &REFG(undefined, 0x6)) {
      *(undefined4 *)((int)this + 0x74) = 0x400;
      uVar6 = F_00ce93e0(piVar14);
      pcVar4 = ((char *)GEN_TOP((uVar6 + *(int *)((int)this + 0x14) + (int)piVar7)));
      if (((*pcVar4 == '\x02') &&
          (bVar3 = pcVar4[1], iVar9 = *(int *)(pcVar4 + 0x10),
          *(int *)(pcVar4 + (uint)bVar3 + iVar9) != 0x5367674f)) &&
         (uVar6 = 0, *(int *)(pcVar4 + 0x14) != 0)) {
        do {
          pbVar1 = ((byte *)GEN_TOP((uVar6 + (int)(pcVar4 + (uint)bVar3 + iVar9))));
          *pbVar1 = *pbVar1 ^ pcVar4[2];
          uVar6 = uVar6 + 1;
          piVar7 = (*(int * PTR32 *)(gen_frame + 0x20));
        } while (uVar6 < *(uint *)(pcVar4 + 0x14));
      }
      iVar9 = piVar14[1];
      *(int *)((int)this + 0x6c) = iVar9 * 0x800;
      (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)(iVar9 * 0x1800 + 0x56);
      piVar13 = piVar7;
      if ((*(byte *)((int)this + 0x70) & 1) != 0) {
        *(int *)((int)this + 0x30) = (*(int *)(gen_frame + 0x24)) + piVar14[4];
        *(int *)((int)this + 0x2c) = (*(int *)(gen_frame + 0x24)) + piVar14[5];
      }
    }
    else {
      if (puVar2 != (undefined1 *)0xc) {
        return (uint)puVar2;
      }
      uVar6 = F_00ce93e0(piVar14);
      iVar12 = uVar6 + *(int *)((int)this + 0x14);
      *(uint *)((int)this + 0x74) = (uint)*(ushort *)(iVar12 + 0xc + (int)piVar7);
      iVar9 = piVar14[1] * 0x800;
      *(int *)((int)this + 0x6c) = iVar9;
      (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)iVar9;
      if (iVar9 % (int)(uint)*(ushort *)((int)piVar7 + iVar12 + 0xc) != 0) {
        *(int *)((int)this + 0x6c) =
             iVar9 - iVar9 % (int)(uint)*(ushort *)((int)piVar7 + iVar12 + 0xc);
      }
      (*(int * PTR32 *)(gen_frame + 0x1c)) = ((int *)GEN_TOP((*(int *)((int)this + 0x6c) * 3 + 0x36)));
      piVar13 = (*(int * PTR32 *)(gen_frame + 0x20));
      if ((*(byte *)((int)this + 0x70) & 1) != 0) {
        *(uint *)((int)this + 0x30) =
             (*(int *)(gen_frame + 0x24)) + ((uint)piVar14[4] / (uint)*(ushort *)((int)piVar7 + iVar12 + 0x12)) *
                       (uint)*(ushort *)((int)piVar7 + iVar12 + 0xc);
        *(uint *)((int)this + 0x2c) =
             (*(int *)(gen_frame + 0x24)) + ((uint)piVar14[5] / (uint)*(ushort *)((int)piVar7 + iVar12 + 0x12)) *
                       (uint)*(ushort *)((int)piVar7 + iVar12 + 0xc);
      }
    }
    *(uint *)((int)this - 0x54) = (uint)*(ushort *)((*(int *)(gen_frame + 0x18)) + 0x36);
    F_00cc8590((int)this - 100);
    F_00cc8520((int)this - 100);
    iVar9 = piVar14[6] + 0x20 + (int)piVar13;
    iVar12 = (*(int *)((int)this + 0x18) - iVar9 & 0xfffffff0U) + *(int *)((int)this + 0x14);
    *(int *)((int)this + 0x34) = iVar12;
    F_00c46e20(iVar12,*(int *)((int)this + 0x14),iVar9);
    piVar7 = (*(int * PTR32 *)(gen_frame + 0x1c));
    uVar6 = *(uint *)((int)this + 0x74);
    uVar10 = *(uint *)((int)this + 0x14) % uVar6;
    if (uVar10 != 0) {
      *(uint *)((int)this + 0x14) = (uVar6 - uVar10) + *(uint *)((int)this + 0x14);
    }
    iVar9 = (*(int *)((int)this + 0x34) - *(int *)((int)this + 0x14)) - (int)(*(int * PTR32 *)(gen_frame + 0x1c));
    iVar9 = iVar9 - iVar9 % (int)uVar6;
    *(int *)((int)this + 0x38) = iVar9;
    if (iVar9 < 1) {
      F_00cc1d20(&(*(undefined1 *)(gen_frame + 0x2b)) GEN_EDX_ARG,"bufferStreamAreaSize_ > 0",
                   "[sd][driver][streaming] too small stream buffer!!!","StreamBankEx.cpp",0x368,
                   "SQEX::CDev::Engine::Sd::Driver::StreamBankEx::OnStreamReadThreadExecute");
    }
    if (((*(byte *)((int)this + 0x70) & 1) != 0) &&
       (iVar9 = *(int *)((int)this + 0x2c) - *(int *)((int)this + 0x30),
       iVar9 < *(int *)((int)this + 0x38))) {
      *(int *)((int)this + 0x38) = iVar9 - iVar9 % *(int *)((int)this + 0x74);
    }
    if (0 < (int)piVar7) {
      F_00ce2b80((undefined *)((int)this + 0x40) GEN_EDX_ARG,piVar7,*(int *)((int)this + 0x34) - (int)piVar7);
    }
    if (*(char *)((int)this + 0x94) != '\0') {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
    }
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined4 *)((int)this + 0x24) = 0;
    *(int *)((int)this + 0x28) = (*(int *)(gen_frame + 0x24));
    if (*(char *)((int)this + 0x94) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
    }
    *(uint *)((int)this + 0x70) = *(uint *)((int)this + 0x70) | 2;
    piVar7 = (int *)F_00ce1fe0((undefined *)((int)this - 100) GEN_EDX_ARG,4);
    *(byte *)((int)this - 0x1c) = *(byte *)((int)this - 0x1c) | 0x80;
    break;
  case (int *)0x4: ;
    bVar3 = *(byte *)((int)this - 0x1c);
    uVar8 = (undefined3)((uint)((int)(uintptr_t)piVar7) >> 8);
    if ((bVar3 & 2) == 0) {
      (*(int *)(gen_frame + 0x10)) = 0;
    }
    else {
      (*(int *)(gen_frame + 0x10)) = *(int *)((int)this + 0x20) - *(int *)((int)this + 0x24);
    }
    iVar9 = *(int *)((int)this + 0x24);
    iVar12 = *(int *)((int)this + 0x38);
    if (*(int *)((int)this + 0x20) - iVar9 < iVar12) {
      bVar3 = F_00ce1e20((undefined *)((int)this - 100) GEN_EDX_ARG);
      if (bVar3 == 0) {
        iVar11 = *(int *)((int)this + 0x20) % iVar12;
        iVar9 = iVar12 + (iVar9 - *(int *)((int)this + 0x20));
        if (iVar12 < iVar11 + iVar9) {
          iVar9 = iVar12 - iVar11;
        }
        piVar14 = *(int * PTR32 *)((int)this + 0x14);
        iVar5 = *(int *)((int)this + 0x2c);
        piVar7 = (int *)(iVar11 + (int)piVar14);
        (*(int * PTR32 *)(gen_frame + 0x4)) = piVar7;
        iVar5 = iVar5 - *(int *)((int)this + 0x28);
        if (iVar5 < iVar9) {
          iVar9 = iVar5;
        }
        if ((piVar7 != (int *)0x0) && (0 < iVar9)) {
          (*(int *)(gen_frame + 0x8)) = iVar9;
          (*(int *)(gen_frame + 0xc)) = *(int *)((int)this + 0x28);
          (*(int *)(gen_frame + 0x14)) = iVar12;
          if ((piVar7 < piVar14) || ((uint)(iVar12 + (int)piVar14) < (uint)((int)piVar7 + iVar9))) {
            F_00cc1d20(&(*(undefined1 *)(gen_frame + 0x2b)) GEN_EDX_ARG,&REFG(undefined, 0x112f2b8),"[sd][driver][stream] stream read buffer overrun!!",
                         "StreamBankEx.cpp",0x3b1,
                         "SQEX::CDev::Engine::Sd::Driver::StreamBankEx::OnStreamReadThreadExecute");
          }
          uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))(*(int * PTR32 *)((int)this + 4) GEN_EDX_ARG,&(*(int * PTR32 *)(gen_frame + 0x4)));
          if (*(char *)((int)this + 0x94) != '\0') {
            gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
          }
          *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + uVar6;
          *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + uVar6;
          iVar9 = *(int *)((int)this + 0x20);
          if ((*(int *)((int)this + 0x2c) <= *(int *)((int)this + 0x28)) &&
             (*(int *)((int)this + 0x3c) = iVar9, (*(byte *)((int)this + 0x70) & 1) != 0)) {
            iVar12 = iVar9 % *(int *)((int)this + 0x74);
            if (iVar12 != 0) {
              *(int *)((int)this + 0x20) = (iVar9 - iVar12) + *(int *)((int)this + 0x74);
            }
            *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)this + 0x30);
          }
          piVar7 = *(int * PTR32 *)((int)this + 0x38);
          if (((int)piVar7 <= *(int *)((int)this + 0x20)) &&
             ((int)piVar7 <= *(int *)((int)this + 0x24))) {
            *(int *)((int)this + 0x3c) = *(int *)((int)this + 0x3c) - (int)piVar7;
            *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) - (int)piVar7;
            *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) - (int)piVar7;
          }
          if (*(char *)((int)this + 0x94) != '\0') {
            gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x7c));
            piVar7 = extraout_EAX_04;
          }
        }
        break;
      }
      bVar3 = *(byte *)((int)this - 0x1c);
      uVar8 = extraout_var;
    }
    piVar7 = ((int *)GEN_TOP((CONCAT31(uVar8,bVar3) | 2)));
    *(char *)((int)this - 0x1c) = (char)piVar7;
    break;
  case (int *)0x5: ;
    *(byte *)((int)this - 0x1c) = *(byte *)((int)this - 0x1c) & 0xfd;
    *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 0x10);
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x30) = 0;
    *(undefined4 *)((int)this + 0x34) = 0;
    *(undefined4 *)((int)this + 0x38) = 0;
    *(undefined4 *)((int)this + 0x3c) = 0xffffffff;
    *(undefined4 *)((int)this + 0x6c) = 0;
    *(undefined4 *)((int)this + 0x70) = 0;
    *(undefined4 *)((int)this + 0x74) = 1;
    piVar7 = (int *)F_00ce1fe0((undefined *)((int)this - 100) GEN_EDX_ARG,0);
  }
  if ((*(byte *)((int)this - 0x1c) & 0x20) != 0) {
    piVar7 = (int *)F_00ce3fa0(*(undefined4 *)((int)this - 0x50),
                                 -(uint)(this != (undefined *)0x64) & (uint)this);
  }
  return (uint)piVar7;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IStreamReadThreadEventReceiver::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ce2b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce2b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x112f30c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ce2b80 */
GEN_FRAME unsigned int GEN_THISCALL F_00ce2b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce2b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined1 *)((int)this + 0x28) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_1;
  if (*(char *)((int)this + 0x28) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::vf1 */
GEN_NOFRAME uint F_00ce2bc0(void)
{
  GEN_ENTER(0xce2bc0u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::vf29 */
GEN_NOFRAME uint GEN_THISCALL F_00ce2bd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce2bd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x7c);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::vf31 */
GEN_NOFRAME uint GEN_THISCALL F_00ce2be0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce2be0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x68);
}

/* ref: FUN_00ce2bf0 */
GEN_NOFRAME uint GEN_THISCALL F_00ce2bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce2bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ce2c00((undefined *)((int)this - 100) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ce2c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce2c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00ce2210(this GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00ce2c30 */
GEN_FRAME unsigned int F_00ce2c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce2c30u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00ce2c50 */
GEN_FRAME uint GEN_STDCALL F_00ce2c50(unsigned int gen_a0)
{
  GEN_ENTER(0xce2c50u, gen_a0, 0u, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *param_1;
  *(undefined2 *)(uVar1 + 2) = 0;
  *(uint *)(uVar1 + 4) = (param_1[1] - uVar1) - 0x10;
  *(undefined4 *)(uVar1 + 8) = 0;
  *(undefined4 *)(uVar1 + 0xc) = 0;
  return uVar1;
}

/* ref: FUN_00ce2c80 */
GEN_FRAME unsigned int GEN_STDCALL F_00ce2c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce2c80u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0xc);
  if (iVar1 == 0) {
    *param_1 = iVar2;
  }
  else {
    *(int *)(iVar1 + 0xc) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 8) = iVar1;
    return 0;
  }
  param_1[1] = iVar1;
  return 0;
}

/* ref: FUN_00ce2cb0 */
GEN_FRAME unsigned int GEN_STDCALL F_00ce2cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce2cb0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  *(int *)(param_3 + 8) = param_2;
  if (param_2 == 0) {
    iVar1 = *param_1;
    *param_1 = param_3;
  }
  else {
    iVar1 = *(int *)(param_2 + 0xc);
    *(int *)(param_2 + 0xc) = param_3;
  }
  *(int *)(param_3 + 0xc) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 8) = param_3;
    return 0;
  }
  param_1[1] = param_3;
  return 0;
}

/* ref: FUN_00ce2d10 */
GEN_FRAME uint GEN_THISCALL F_00ce2d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xce2d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_c;
  
  local_c = param_1 - (uint)*(ushort *)(param_1 + 2);
  iVar4 = *(int *)(param_1 + 4) + 0x10 + param_1;
  iVar1 = param_2 + param_3;
  iVar3 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  iVar5 = param_2 - 0x10;
  if (iVar3 == 0) {
    *(int *)this = iVar2;
  }
  else {
    *(int *)(iVar3 + 0xc) = iVar2;
  }
  if (iVar2 == 0) {
    *(int *)((int)this + 4) = iVar3;
  }
  else {
    *(int *)(iVar2 + 8) = iVar3;
  }
  if ((0x13 < (uint)(iVar5 - local_c)) && ((char)param_4 == '\0')) {
    *(uint *)(local_c + 4) = (iVar5 - local_c) - 0x10;
    *(undefined2 *)(local_c + 2) = 0;
    *(undefined4 *)(local_c + 0xc) = 0;
    *(int *)(local_c + 8) = iVar3;
    if (iVar3 == 0) {
      iVar2 = *(int *)this;
      *(int *)this = local_c;
    }
    else {
      iVar2 = *(int *)(iVar3 + 0xc);
      *(int *)(iVar3 + 0xc) = local_c;
    }
    *(int *)(local_c + 0xc) = iVar2;
    iVar3 = local_c;
    if (iVar2 == 0) {
      *(int *)((int)this + 4) = local_c;
      local_c = iVar5;
    }
    else {
      *(int *)(iVar2 + 8) = local_c;
      local_c = iVar5;
    }
  }
  if ((0x13 < (uint)(iVar4 - iVar1)) && ((char)param_4 != '\0')) {
    *(undefined2 *)(iVar1 + 2) = 0;
    *(uint *)(iVar1 + 4) = (iVar4 - iVar1) - 0x10;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 8) = iVar3;
    if (iVar3 == 0) {
      iVar2 = *(int *)this;
      *(int *)this = iVar1;
    }
    else {
      iVar2 = *(int *)(iVar3 + 0xc);
      *(int *)(iVar3 + 0xc) = iVar1;
    }
    *(int *)(iVar1 + 0xc) = iVar2;
    iVar4 = iVar1;
    if (iVar2 == 0) {
      *(int *)((int)this + 4) = iVar1;
    }
    else {
      *(int *)(iVar2 + 8) = iVar1;
    }
  }
  *(undefined4 *)(param_2 - 8) = 0;
  *(int *)(param_2 - 0xc) = (iVar4 - iVar5) - 0x10;
  *(undefined4 *)(param_2 - 4) = 0;
  *(short *)(param_2 - 0xe) = (short)iVar5 - (short)local_c;
  iVar1 = *(int *)((int)this + 0xc);
  *(int *)(param_2 - 8) = iVar1;
  if (iVar1 == 0) {
    iVar4 = *(int *)((int)this + 8);
    *(int *)((int)this + 8) = iVar5;
  }
  else {
    iVar4 = *(int *)(iVar1 + 0xc);
    *(int *)(iVar1 + 0xc) = iVar5;
  }
  *(int *)(param_2 - 4) = iVar4;
  if (iVar4 == 0) {
    *(int *)((int)this + 0xc) = iVar5;
    return param_2;
  }
  *(int *)(iVar4 + 8) = iVar5;
  return param_2;
}

/* ref: FUN_00ce2e50 */
GEN_FRAME uint GEN_THISCALL F_00ce2e50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce2e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
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
      uVar1 = *(uint *)(iVar3 + 4);
      uVar2 = (param_2 - 1U) + iVar3 + 0x10 & ~(param_2 - 1U);
      if ((((uVar2 - (iVar3 + 0x10)) + param_1 <= uVar1) && (uVar1 < uVar4)) &&
         ((iVar5 = iVar3, local_c = uVar2, *(char *)((int)this + 0x10) != '\0' ||
          (uVar4 = uVar1, local_8 = iVar3, uVar1 == param_1)))) break;
      iVar3 = *(int *)(iVar3 + 0xc);
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
GEN_FRAME uint GEN_THISCALL F_00ce2ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce2ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
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
  if (*(int *)((int)this + 4) != 0) {
    iVar3 = *(int *)((int)this + 4);
    do {
      iVar5 = iVar3;
      uVar2 = *(uint *)(iVar5 + 4);
      uVar4 = (uVar2 - param_1) + iVar5 + 0x10 & ~(param_2 - 1U);
      if (((-1 < (int)(uVar4 - (iVar5 + 0x10))) && (uVar2 < uVar6)) &&
         ((local_c = uVar4, *(char *)((int)this + 0x10) != '\0' ||
          (uVar6 = uVar2, local_8 = iVar5, uVar2 == param_1)))) break;
      piVar1 = (int *)(iVar5 + 8);
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
GEN_FRAME uint GEN_THISCALL F_00ce2f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce2f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
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
          iVar2 = *(int *)(uVar4 + 8);
          uVar5 = *(int *)(uVar4 + 4) + 0x10 + uVar4;
          iVar1 = *(int *)(uVar4 + 0xc);
          if (iVar2 == 0) {
            *(int *)this = iVar1;
          }
          else {
            *(int *)(iVar2 + 0xc) = iVar1;
          }
          if (iVar1 == 0) {
            *(int *)((int)this + 4) = iVar2;
          }
          else {
            *(int *)(iVar1 + 8) = iVar2;
          }
        }
        break;
      }
      uVar3 = *(uint *)(uVar4 + 0xc);
      uVar6 = uVar4;
      uVar7 = uVar4;
    } while (*(uint *)(uVar4 + 0xc) != 0);
    uVar6 = uVar7;
    if ((uVar7 != 0) && (*(int *)(uVar7 + 4) + 0x10 + uVar7 == *param_1)) {
      uVar6 = *(uint *)(uVar7 + 8);
      iVar2 = *(int *)(uVar7 + 0xc);
      if (uVar6 == 0) {
        *(int *)this = iVar2;
      }
      else {
        *(int *)(uVar6 + 0xc) = iVar2;
      }
      uVar8 = uVar7;
      if (iVar2 == 0) {
        *(uint *)((int)this + 4) = uVar6;
      }
      else {
        *(uint *)(iVar2 + 8) = uVar6;
      }
    }
  }
  *(undefined2 *)(uVar8 + 2) = 0;
  *(uint *)(uVar8 + 4) = (uVar5 - uVar8) - 0x10;
  *(undefined4 *)(uVar8 + 0xc) = 0;
  *(uint *)(uVar8 + 8) = uVar6;
  if (uVar6 == 0) {
    uVar5 = *(uint *)this;
    *(uint *)this = uVar8;
  }
  else {
    uVar5 = *(uint *)(uVar6 + 0xc);
    *(uint *)(uVar6 + 0xc) = uVar8;
  }
  *(uint *)(uVar8 + 0xc) = uVar5;
  if (uVar5 == 0) {
    *(uint *)((int)this + 4) = uVar8;
    return 0;
  }
  *(uint *)(uVar5 + 8) = uVar8;
  return uVar5;
}

/* ref: FUN_00ce3060 */
GEN_FRAME uint GEN_THISCALL F_00ce3060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce3060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = param_1 + 3U & 0xfffffffc;
  *(char *)((int)this + 0x30) = *(char *)((int)this + 0x11);
  if (*(char *)((int)this + 0x11) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  }
  if (*(char *)((int)this + 0x30) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  }
  if ((char)param_3 != '\0') {
    uVar1 = F_00ce2e50(this GEN_EDX_ARG,uVar1,param_2);
    return uVar1;
  }
  uVar1 = F_00ce2ef0(this GEN_EDX_ARG,uVar1,-param_2);
  return uVar1;
}

/* ref: FUN_00ce30d0 */
GEN_FRAME unsigned int GEN_THISCALL F_00ce30d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce30d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    *(char *)((int)this + 0x30) = *(char *)((int)this + 0x11);
    if (*(char *)((int)this + 0x11) != '\0') {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
    }
    if (*(char *)((int)this + 0x30) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
    }
    iVar1 = *(int *)(param_1 - 4);
    iVar2 = *(int *)(param_1 - 8);
    (*(int *)(gen_frame + 0x4)) = (param_1 - 0x10) - (uint)*(ushort *)(param_1 - 0xe);
    (*(int *)(gen_frame + 0x8)) = *(int *)(param_1 - 0xc) + param_1;
    if (iVar2 == 0) {
      *(int *)((int)this + 8) = iVar1;
    }
    else {
      *(int *)(iVar2 + 0xc) = iVar1;
    }
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = iVar2;
      F_00ce2f80(this GEN_EDX_ARG,&(*(int *)(gen_frame + 0x4)));
      return;
    }
    *(int *)((int)this + 0xc) = iVar2;
    F_00ce2f80(this GEN_EDX_ARG,&(*(int *)(gen_frame + 0x4)));
  }
  return;
}

/* ref: FUN_00ce3160 */
GEN_FRAME uint F_00ce3160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xce3160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c) GEN_EDX_ARG);
  return extraout_EAX;
}

/* ref: FUN_00ce3200 */
GEN_FRAME uint GEN_THISCALL F_00ce3200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xce3200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if (param_1 == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xce3160));
    }
    ((code *)REFG(gen_code32, 0x15d861c))((*(undefined * PTR32 (*)[1])REFP(0x112f428)),"","..\\SdHeap.cpp",0x14,
                    "SQEX::CDev::Engine::Sd::SdHeap::CreateSdHeap");
  }
  *(undefined1 *)((int)this + 0x10) = (undefined1)param_3;
  *(char *)((int)this + 0x11) = (char)param_4;
  *(char *)((int)this + 0x30) = (char)param_4;
  if ((char)param_4 != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  }
  if (*(char *)((int)this + 0x30) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  }
  uVar1 = param_1 + 3U & 0xfffffffc;
  *(undefined2 *)(uVar1 + 2) = 0;
  *(uint *)(uVar1 + 4) = ((param_1 + param_2 & 0xfffffffcU) - uVar1) - 0x10;
  *(undefined4 *)(uVar1 + 8) = 0;
  *(undefined4 *)(uVar1 + 0xc) = 0;
  *(uint *)this = uVar1;
  *(uint *)((int)this + 4) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar1;
}

/* ref: FUN_00ce32b0 */
GEN_FRAME uint GEN_STDCALL F_00ce32b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce32b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00ce32c0 */
GEN_FRAME uint GEN_STDCALL F_00ce32c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce32c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 - param_2;
}

/* ref: FUN_00ce32d0 */
GEN_FRAME uint GEN_STDCALL F_00ce32d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce32d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 - param_2;
}

/* ref: FUN_00ce32e0 */
GEN_FRAME uint GEN_STDCALL F_00ce32e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce32e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 + (param_2 - 1U) & ~(param_2 - 1U);
}

/* ref: FUN_00ce3300 */
GEN_FRAME uint GEN_STDCALL F_00ce3300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce3300u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 + (param_2 - 1U) & ~(param_2 - 1U);
}

/* ref: FUN_00ce3320 */
GEN_FRAME uint GEN_STDCALL F_00ce3320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce3320u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return ~((*(int *)&gen_args[1]) - 1U) & (*(uint *)&gen_args[0]);
}

/* ref: FUN_00ce3330 */
GEN_FRAME uint GEN_STDCALL F_00ce3330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce3330u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return ~((*(int *)&gen_args[1]) - 1U) & (*(uint *)&gen_args[0]);
}

/* ref: FUN_00ce3340 */
GEN_FRAME uint GEN_STDCALL F_00ce3340(unsigned int gen_a0)
{
  GEN_ENTER(0xce3340u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00ce3350 */
GEN_FRAME uint GEN_STDCALL F_00ce3350(unsigned int gen_a0)
{
  GEN_ENTER(0xce3350u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 - 0x10;
}

/* ref: FUN_00ce3360 */
GEN_FRAME uint GEN_STDCALL F_00ce3360(unsigned int gen_a0)
{
  GEN_ENTER(0xce3360u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(int *)(param_1 + 4) + 0x10 + param_1;
}

/* ref: FUN_00ce3380 */
GEN_FRAME uint GEN_STDCALL F_00ce3380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce3380u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  *param_1 = param_2 - (uint)*(ushort *)(param_2 + 2);
  uVar1 = *(int *)(param_2 + 4) + 0x10 + param_2;
  param_1[1] = uVar1;
  return uVar1;
}

/* ref: FUN_00ce33b0 */
GEN_FRAME uint GEN_STDCALL F_00ce33b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce33b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 - param_1;
}

/* ref: FUN_00ce33c0 */
GEN_FRAME unsigned int GEN_STDCALL F_00ce33c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce33c0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  *(int *)(param_2 + 8) = iVar1;
  if (iVar1 == 0) {
    iVar2 = *param_1;
    *param_1 = param_2;
  }
  else {
    iVar2 = *(int *)(iVar1 + 0xc);
    *(int *)(iVar1 + 0xc) = param_2;
  }
  *(int *)(param_2 + 0xc) = iVar2;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 8) = param_2;
    return 0;
  }
  param_1[1] = param_2;
  return 0;
}

/* ref: FUN_00ce3410 */
GEN_FRAME unsigned int F_00ce3410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce3410u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00ce3430 */
GEN_FRAME byte F_00ce3430(unsigned int gen_a0)
{
  GEN_ENTER(0xce3430u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  int iVar2;
  
  bVar1 = 1;
  if (((param_1 != 0) &&
      (iVar2 = ((param_1 >> 0x18) - 1) * *(int *)(REFG(int, 0x15d8c04) + 0x14) +
               *(int *)(REFG(int, 0x15d8c04) + 0x10), iVar2 != 0)) && (*(uint *)(iVar2 + 0x10) == param_1))
  {
    bVar1 = 0;
  }
  return bVar1;
}

/* ref: FUN_00ce3460 */
GEN_FRAME byte F_00ce3460(unsigned int gen_a0)
{
  GEN_ENTER(0xce3460u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  bool bVar3;
  
  bVar3 = false;
  if (*(char *)(REFG(int, 0x15d8c04) + 0x6c) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
  }
  uVar2 = F_00d2ff90(REFG(int, 0x15d8c04) + 0x3c GEN_EDX_ARG,0);
  while( true ) {
    if (uVar2 == 0) {
      if ((*(int *)(REFG(int, 0x15d8c04) + 0x50) != 0) &&
         (*((int *)GEN_TOP((*(int *)(REFG(int, 0x15d8c04) + 0x50) + 0x14))) == param_1)) {
        if (*((int *)GEN_TOP((*(int *)(REFG(int, 0x15d8c04) + 0x50) + 0xc))) == 1) {
          bVar3 = true;
        }
        else {
          piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(REFG(int, 0x15d8c04) + 0x50) + 0x30)));
          uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
          bVar3 = (char)uVar2 == '\0';
        }
      }
      if (*(char *)(REFG(int, 0x15d8c04) + 0x6c) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
      }
      return bVar3;
    }
    if (*(int *)(uVar2 + 0x14) == param_1) break;
    uVar2 = F_00d2ff90(REFG(int, 0x15d8c04) + 0x3c GEN_EDX_ARG,uVar2);
  }
  if (*(char *)(REFG(int, 0x15d8c04) + 0x6c) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
  }
  return 1;
}

/* ref: FUN_00ce3530 */
GEN_NOFRAME uint F_00ce3530(void)
{
  GEN_ENTER(0xce3530u, 0u, 0u, 0u, 0u);
  char * pcVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 * puVar2;
  uint uVar3;
  uint extraout_EAX = 0;
  undefined4 * puVar4;
  
  uVar3 = 0;
  if (REFG(undefined4 * PTR32, 0x15d8c04) != (undefined4 *)0x0) {
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
    if (REFG(undefined4 * PTR32, 0x15d8c04) != (undefined4 *)0x0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d8c04))))(REFG(undefined4 * PTR32, 0x15d8c04) GEN_EDX_ARG,1);
    }
    REFG(undefined4 * PTR32, 0x15d8c04) = (undefined4 *)0x0;
  }
  return uVar3;
}

/* ref: FUN_00ce3620 */
GEN_FRAME unsigned int GEN_THISCALL F_00ce3620(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce3620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
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
      if (*(char *)(REFG(int, 0x15d8c04) + 0x6c) != '\0') {
        gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
      }
      if (*(char *)(REFG(int, 0x15d8c04) + 0x4c) != '\0') {
        if (*(char *)(REFG(int, 0x15d8c04) + 0x6c) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
        }
        return 0;
      }
      puVar7 = (undefined4 *)F_00d2ff90(REFG(int, 0x15d8c04) + 0x3c GEN_EDX_ARG,0);
      if (puVar7 != (undefined4 *)0x0) break;
      F_00ce41b0((undefined *)(REFG(int, 0x15d8c04) + 0x70) GEN_EDX_ARG);
LAB_00ce3915: ;
      if (*(char *)(REFG(int, 0x15d8c04) + 0x6c) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
      }
    }
    *(undefined4 * PTR32 *)(REFG(int, 0x15d8c04) + 0x50) = puVar7;
    F_00d2ff30((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x3c) GEN_EDX_ARG,puVar7);
    if (*(char *)(REFG(int, 0x15d8c04) + 0x6c) != '\0') {
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
          lVar10 = ((gen_lcode *)*(gen_code32 *)(*(int *)puVar7[0xc] + 4))
                             ((int *)puVar7[0xc],puVar7[0xd],puVar7[10],puVar7[0xb],puVar7[8],
                              puVar7[9]);
          iVar9 = (int)((ulonglong)lVar10 >> 0x20);
          uVar8 = (uint)lVar10;
          (*(longlong *)(gen_frame + 0x18)) = lVar10 + (*(longlong *)(gen_frame + 0x18));
          if (puVar7[6] != 0) break;
          uVar5 = puVar7[8];
          if (*(longlong *)(puVar7 + 8) <= lVar10) break;
          if (lVar10 == -1) {
            this_00 = (undefined *)F_00d2dd80(((undefined1 *)(gen_frame + 0xc)),puVar7[5]);
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
          if (*(char *)(REFG(int, 0x15d8c04) + 0x6c) != '\0') {
            gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
          }
          if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x44) != 0) {
            (*(char *)(gen_frame + 0x2b)) = '\x01';
            if (*(char *)(REFG(int, 0x15d8c04) + 0x6c) != '\0') {
              gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
            }
            break;
          }
          if (*(char *)(REFG(int, 0x15d8c04) + 0x6c) != '\0') {
            gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
          }
          F_004cee60(4);
          lVar10 = (*(longlong *)(gen_frame + 0x18));
          if (puVar7[6] != 0) break;
        }
      }
      if ((longlong *)puVar7[0x10] != (longlong *)0x0) {
        *(longlong *)puVar7[0x10] = (*(longlong *)(gen_frame + 0x18));
      }
      if (*(char *)(REFG(int, 0x15d8c04) + 0x6c) != '\0') {
        gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
      }
      *(undefined4 *)(REFG(int, 0x15d8c04) + 0x50) = 0;
      if ((*(char *)(gen_frame + 0x2b)) == '\0') {
        puVar7[4] = 0xffffffff;
        iVar9 = REFG(int, 0x15d8c04);
        pcVar2 = (char *)(REFG(int, 0x15d8c04) + 0x1c);
        p_Var3 = (LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x20);
        *(char *)(REFG(int, 0x15d8c04) + 0x38) = *pcVar2;
        if (*pcVar2 != '\0') {
          gen_imp_EnterCriticalSection(p_Var3);
        }
        *puVar7 = *(undefined4 *)(iVar9 + 0xc);
        *(undefined4 * PTR32 *)(iVar9 + 0xc) = puVar7;
        if (*(char *)(iVar9 + 0x38) != '\0') {
          gen_imp_LeaveCriticalSection(p_Var3);
        }
      }
      else {
        F_00d2fe00((undefined *)(REFG(int, 0x15d8c04) + 0x3c) GEN_EDX_ARG,puVar7);
      }
      goto LAB_00ce3915;
    }
    if (puVar7[3] == 1) {
      if (puVar7[6] == 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)puVar7[8] + 4))((int *)puVar7[8] GEN_EDX_ARG);
      }
      if (*(char *)(REFG(int, 0x15d8c04) + 0x6c) != '\0') {
        gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
      }
      *(undefined4 *)(REFG(int, 0x15d8c04) + 0x50) = 0;
      puVar7[4] = 0xffffffff;
      iVar9 = REFG(int, 0x15d8c04);
      pcVar2 = (char *)(REFG(int, 0x15d8c04) + 0x1c);
      p_Var3 = (LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x20);
      *(char *)(REFG(int, 0x15d8c04) + 0x38) = *pcVar2;
      if (*pcVar2 != '\0') {
        gen_imp_EnterCriticalSection(p_Var3);
      }
      *puVar7 = *(undefined4 *)(iVar9 + 0xc);
      *(undefined4 * PTR32 *)(iVar9 + 0xc) = puVar7;
      if (*(char *)(iVar9 + 0x38) != '\0') {
        gen_imp_LeaveCriticalSection(p_Var3);
      }
      if (*(char *)(REFG(int, 0x15d8c04) + 0x6c) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
      }
      F_004cee60(1);
    }
  } while( true );
}

/* ref: FUN_00ce3950 */
GEN_FRAME byte F_00ce3950(unsigned int gen_a0)
{
  GEN_ENTER(0xce3950u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  char * pcVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  bool local_5;
  
  local_5 = true;
  if (*(char *)(REFG(int, 0x15d8c04) + 0x6c) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
  }
  puVar4 = (undefined4 *)F_00d2ff90(REFG(int, 0x15d8c04) + 0x3c GEN_EDX_ARG,0);
  while (puVar4 != (undefined4 *)0x0) {
    if (puVar4[5] == param_1) {
      puVar5 = (undefined4 *)F_00d2ff30((undefined *)(REFG(int, 0x15d8c04) + 0x3c) GEN_EDX_ARG,puVar4);
      puVar4[4] = 0xffffffff;
      iVar3 = REFG(int, 0x15d8c04);
      pcVar1 = (char *)(REFG(int, 0x15d8c04) + 0x1c);
      lpCriticalSection = (LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x20);
      *(char *)(REFG(int, 0x15d8c04) + 0x38) = *pcVar1;
      if (*pcVar1 != '\0') {
        gen_imp_EnterCriticalSection(lpCriticalSection);
      }
      *puVar4 = *(undefined4 *)(iVar3 + 0xc);
      *(undefined4 * PTR32 *)(iVar3 + 0xc) = puVar4;
      puVar4 = puVar5;
      if (*(char *)(iVar3 + 0x38) != '\0') {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
      }
    }
    else {
      puVar4 = (undefined4 *)F_00d2ff90((undefined *)(REFG(int, 0x15d8c04) + 0x3c) GEN_EDX_ARG,puVar4);
    }
  }
  if ((*(int *)(REFG(int, 0x15d8c04) + 0x50) != 0) &&
     (*((int *)GEN_TOP((*(int *)(REFG(int, 0x15d8c04) + 0x50) + 0x14))) == param_1)) {
    *((undefined4 *)GEN_TOP((*(int *)(REFG(int, 0x15d8c04) + 0x50) + 0x18))) = 1;
    if ((*((int *)GEN_TOP((*(int *)(REFG(int, 0x15d8c04) + 0x50) + 0xc))) == 1) ||
       (*((int *)GEN_TOP((*(int *)(REFG(int, 0x15d8c04) + 0x50) + 0xc))) != 0)) {
      local_5 = false;
    }
    else {
      piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(REFG(int, 0x15d8c04) + 0x50) + 0x30)));
      uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG);
      local_5 = (char)uVar6 != '\0';
    }
  }
  if (*(char *)(REFG(int, 0x15d8c04) + 0x6c) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
  }
  return local_5;
}

/* ref: FUN_00ce3a80 */
GEN_FRAME unsigned int F_00ce3a80(unsigned int gen_a0)
{
  GEN_ENTER(0xce3a80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int iVar1;
  
  if (param_1 != 0) {
    if (*(char *)(REFG(int, 0x15d8c04) + 0x6c) != '\0') {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
    }
    iVar1 = ((param_1 >> 0x18) - 1) * *(int *)(REFG(int, 0x15d8c04) + 0x14) + *(int *)(REFG(int, 0x15d8c04) + 0x10);
    if ((iVar1 != 0) && (*(uint *)(iVar1 + 0x10) == param_1)) {
      *(undefined4 *)(iVar1 + 0x18) = 1;
      if (*(int *)(REFG(int, 0x15d8c04) + 0x50) != iVar1) {
        F_00d2ff30((undefined *)(REFG(int, 0x15d8c04) + 0x3c) GEN_EDX_ARG,iVar1);
        *(undefined4 *)(iVar1 + 0x10) = 0xffffffff;
        F_00cc6810((undefined *)(REFG(int, 0x15d8c04) + 8) GEN_EDX_ARG,iVar1);
      }
    }
    if (*(char *)(REFG(int, 0x15d8c04) + 0x6c) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
    }
  }
  return;
}

/* ref: FUN_00ce3b10 */
GEN_FRAME uint F_00ce3b10(unsigned int gen_a0)
{
  GEN_ENTER(0xce3b10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  char * pcVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar2;
  bool bVar3;
  undefined4 * puVar4;
  uint uVar5;
  int local_c;
  
  bVar3 = false;
  local_c = 0;
  if (*(char *)(REFG(undefined4, 0x15d8c04) + 0x6c) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(REFG(undefined4, 0x15d8c04) + 0x54));
  }
  puVar4 = (undefined4 *)F_00d2ff90(REFG(undefined4, 0x15d8c04) + 0x3c GEN_EDX_ARG,0);
  while (puVar4 != (undefined4 *)0x0) {
    F_00d2ff30((undefined *)(REFG(undefined4, 0x15d8c04) + 0x3c) GEN_EDX_ARG,puVar4);
    puVar4[4] = 0xffffffff;
    uVar5 = REFG(undefined4, 0x15d8c04);
    pcVar1 = (char *)(REFG(undefined4, 0x15d8c04) + 0x1c);
    lpCriticalSection = (LPCRITICAL_SECTION)(REFG(undefined4, 0x15d8c04) + 0x20);
    *(char *)(REFG(undefined4, 0x15d8c04) + 0x38) = *pcVar1;
    if (*pcVar1 != '\0') {
      gen_imp_EnterCriticalSection(lpCriticalSection);
    }
    *puVar4 = *(undefined4 *)(uVar5 + 0xc);
    *(undefined4 * PTR32 *)(uVar5 + 0xc) = puVar4;
    if (*(char *)(uVar5 + 0x38) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    puVar4 = (undefined4 *)F_00d2ff90(REFG(undefined4, 0x15d8c04) + 0x3c GEN_EDX_ARG,0);
  }
  if (*(int *)(REFG(undefined4, 0x15d8c04) + 0x50) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(REFG(undefined4, 0x15d8c04) + 0x50) + 0x18))) = 1;
    if (*((int *)GEN_TOP((*(int *)(REFG(undefined4, 0x15d8c04) + 0x50) + 0xc))) == 1) {
      local_c = *(int *)(REFG(undefined4, 0x15d8c04) + 0x50);
      bVar3 = true;
    }
    else if ((*((int *)GEN_TOP((*(int *)(REFG(undefined4, 0x15d8c04) + 0x50) + 0xc))) == 0) &&
            (piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)(REFG(undefined4, 0x15d8c04) + 0x50) + 0x30))),
            uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG), (char)uVar5 == '\0')) {
      local_c = *(int *)(REFG(undefined4, 0x15d8c04) + 0x50);
      bVar3 = true;
    }
  }
  if (*(char *)(REFG(undefined4, 0x15d8c04) + 0x6c) != '\0') {
    gen_imp_LeaveCriticalSection(REFG(undefined4, 0x15d8c04) + 0x54);
  }
  uVar5 = REFG(undefined4, 0x15d8c04);
  if ((bVar3) && ((char)param_1 != '\0')) {
    while( true ) {
      if (*(char *)(REFG(undefined4, 0x15d8c04) + 0x6c) != '\0') {
        gen_imp_EnterCriticalSection(REFG(undefined4, 0x15d8c04) + 0x54);
      }
      if (*(int *)(REFG(undefined4, 0x15d8c04) + 0x50) != local_c) break;
      if (*(char *)(REFG(undefined4, 0x15d8c04) + 0x6c) != '\0') {
        gen_imp_LeaveCriticalSection(REFG(undefined4, 0x15d8c04) + 0x54);
      }
      F_004cee60(4);
    }
    uVar5 = REFG(undefined4, 0x15d8c04) + 0x54;
    if (*(char *)(REFG(undefined4, 0x15d8c04) + 0x6c) != '\0') {
      uVar5 = gen_imp_LeaveCriticalSection(uVar5);
    }
  }
  return uVar5;
}

/* ref: FUN_00ce3c90 */
GEN_FRAME uint F_00ce3c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xce3c90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c) GEN_EDX_ARG);
  return extraout_EAX;
}

/* ref: FUN_00ce3d30 */
GEN_FRAME unsigned int F_00ce3d30(unsigned int gen_a0)
{
  GEN_ENTER(0xce3d30u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined * pvVar2;
  char * pcVar3;
  uint uVar4;
  
  if (REFG(undefined4, 0x15d8c04) == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    pvVar2 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0xd0,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
    if (pvVar2 == (undefined *)0x0) {
      REFG(undefined4, 0x15d8c04) = 0;
    }
    else {
      REFG(undefined4, 0x15d8c04) = F_00ce4370(pvVar2 GEN_EDX_ARG);
    }
    (*(char * PTR32 *)(gen_frame + 0x4)) = "CDev.Engine.Sd.SoundDriver";
    (*(undefined4 *)(gen_frame + 0x8)) = 0x10;
    F_00cc6930((undefined *)(REFG(undefined4, 0x15d8c04) + 8) GEN_EDX_ARG,0x48,0x14,&(*(char * PTR32 *)(gen_frame + 0x4)),8,1);
    F_00d2fdb0(REFG(undefined4, 0x15d8c04) + 0x3c GEN_EDX_ARG,0);
    *(undefined1 *)(REFG(undefined4, 0x15d8c04) + 0x4c) = 0;
    *(undefined4 *)(REFG(undefined4, 0x15d8c04) + 0x50) = 0;
    uVar1 = REFG(undefined4, 0x15d8c04);
    pvVar2 = (undefined *)(REFG(undefined4, 0x15d8c04) + 0xa0);
    *(gen_code32 *)(REFG(undefined4, 0x15d8c04) + 0xc0) = ((code *)REFP(0xce42b0));
    *(uint *)(uVar1 + 0xc4) = uVar1;
    *(gen_code32 *)(uVar1 + 200) = ((code *)REFP(0xce3620));
    *(undefined4 *)(uVar1 + 0xcc) = 0;
    pcVar3 = (char *)*param_1;
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "sound";
    }
    uVar4 = F_004cf9e0(pvVar2 GEN_EDX_ARG,0,param_1[2],param_1[1],pcVar3);
    *(uint *)(uVar1 + 0xb8) = uVar4;
  }
  return;
}

/* ref: FUN_00ce3e30 */
GEN_FRAME uint F_00ce3e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xce3e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  char * pcVar1;
  int iVar2;
  undefined4 * puVar3;
  LPCRITICAL_SECTION p_Var4;
  uint uVar5;
  
  if (*(char *)(REFG(int, 0x15d8c04) + 0x6c) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
  }
  iVar2 = REFG(int, 0x15d8c04);
  pcVar1 = (char *)(REFG(int, 0x15d8c04) + 0x1c);
  p_Var4 = (LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x20);
  *(char *)(REFG(int, 0x15d8c04) + 0x38) = *pcVar1;
  if (*pcVar1 != '\0') {
    gen_imp_EnterCriticalSection(p_Var4);
  }
  puVar3 = *(undefined4 * PTR32 *)(iVar2 + 0xc);
  if (puVar3 == (undefined4 *)0x0) {
    if (*(char *)(iVar2 + 0x38) != '\0') {
      gen_imp_LeaveCriticalSection(p_Var4);
    }
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *(undefined4 *)(iVar2 + 0xc) = *puVar3;
    if (*(char *)(iVar2 + 0x38) != '\0') {
      gen_imp_LeaveCriticalSection(p_Var4);
    }
    if (puVar3 != (undefined4 *)0x0) goto LAB_00ce3ed0;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xce3c90));
  }
  ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x112f534),"","StreamReadThread.cpp",0xee,
                  "SQEX::CDev::Engine::Sd::Driver::StreamReadThread::AddQueue");
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
  uVar5 = ((uint)((int)puVar3 - *(int *)(REFG(int, 0x15d8c04) + 0x10)) / *(uint *)(REFG(int, 0x15d8c04) + 0x14) + 1)
          * 0x1000000 ^ REFG(undefined4, 0x15d8c08) & 0xffffff;
  puVar3[4] = uVar5;
  F_00d2fe00((undefined *)(REFG(int, 0x15d8c04) + 0x3c) GEN_EDX_ARG,puVar3);
  iVar2 = REFG(int, 0x15d8c04);
  p_Var4 = (LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x70);
  gen_imp_EnterCriticalSection(p_Var4);
  if (0 < *(int *)(iVar2 + 0x90)) {
    gen_imp_SetEvent(*(HANDLE *)(iVar2 + 0x8c));
    *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(iVar2 + 0x90);
    *(int *)(iVar2 + 0x98) = *(int *)(iVar2 + 0x98) + 1;
  }
  gen_imp_LeaveCriticalSection(p_Var4);
  if (*(char *)(REFG(int, 0x15d8c04) + 0x6c) != '\0') {
    gen_imp_LeaveCriticalSection(REFG(int, 0x15d8c04) + 0x54);
  }
  return uVar5;
}

/* ref: FUN_00ce3fa0 */
GEN_FRAME uint F_00ce3fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce3fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  char * pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  LPCRITICAL_SECTION p_Var6;
  
  if (*(char *)(REFG(int, 0x15d8c04) + 0x6c) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x54));
  }
  iVar2 = REFG(int, 0x15d8c04);
  pcVar1 = (char *)(REFG(int, 0x15d8c04) + 0x1c);
  p_Var6 = (LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x20);
  *(char *)(REFG(int, 0x15d8c04) + 0x38) = *pcVar1;
  if (*pcVar1 != '\0') {
    gen_imp_EnterCriticalSection(p_Var6);
  }
  puVar5 = *(undefined4 * PTR32 *)(iVar2 + 0xc);
  if (puVar5 == (undefined4 *)0x0) {
    if (*(char *)(iVar2 + 0x38) != '\0') {
      gen_imp_LeaveCriticalSection(p_Var6);
    }
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *(undefined4 *)(iVar2 + 0xc) = *puVar5;
    if (*(char *)(iVar2 + 0x38) != '\0') {
      gen_imp_LeaveCriticalSection(p_Var6);
    }
    if (puVar5 != (undefined4 *)0x0) goto LAB_00ce4040;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xce3c90));
  }
  ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x112f600),&REFG(undefined, 0x112f4ab),"StreamReadThread.cpp",0x114,
                  "SQEX::CDev::Engine::Sd::Driver::StreamReadThread::AddQueueEx");
LAB_00ce4040: ;
  REFG(undefined4, 0x15d8c08) = REFG(undefined4, 0x15d8c08) + 1;
  iVar2 = *(int *)(REFG(int, 0x15d8c04) + 0x10);
  uVar3 = *(uint *)(REFG(int, 0x15d8c04) + 0x14);
  uVar4 = REFG(undefined4, 0x15d8c08) & 0xffffff;
  puVar5[3] = 1;
  puVar5[8] = param_2;
  uVar4 = ((uint)((int)puVar5 - iVar2) / uVar3 + 1) * 0x1000000 ^ uVar4;
  puVar5[5] = param_1;
  puVar5[4] = uVar4;
  puVar5[6] = 0;
  F_00d2fe00((undefined *)(REFG(int, 0x15d8c04) + 0x3c) GEN_EDX_ARG,puVar5);
  iVar2 = REFG(int, 0x15d8c04);
  p_Var6 = (LPCRITICAL_SECTION)(REFG(int, 0x15d8c04) + 0x70);
  gen_imp_EnterCriticalSection(p_Var6);
  if (0 < *(int *)(iVar2 + 0x90)) {
    gen_imp_SetEvent(*(HANDLE *)(iVar2 + 0x8c));
    *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(iVar2 + 0x90);
    *(int *)(iVar2 + 0x98) = *(int *)(iVar2 + 0x98) + 1;
  }
  gen_imp_LeaveCriticalSection(p_Var6);
  if (*(char *)(REFG(int, 0x15d8c04) + 0x6c) != '\0') {
    gen_imp_LeaveCriticalSection(REFG(int, 0x15d8c04) + 0x54);
  }
  return uVar4;
}

/* ref: FUN_00ce4100 */
GEN_NOFRAME uint GEN_THISCALL F_00ce4100(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce4100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_FWD);
  uVar1 = F_004cf020(this GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x18) = 0;
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Common::Threading::Thread::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ce4120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce4120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x112f680));
  F_004cf880(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ce4150 */
GEN_FRAME uint GEN_THISCALL F_00ce4150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce4150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  HANDLE pvVar1;
  
  gen_imp_InitializeCriticalSection(this);
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,1,0,(LPCSTR)0x0);
  *(HANDLE *)((int)this + 0x1c) = pvVar1;
  return (uint)this;
}

/* ref: FUN_00ce4190 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce4190(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce4190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_CloseHandle(*(HANDLE *)((int)this + 0x1c));
  return (uint)(gen_imp_DeleteCriticalSection(this));
}

/* ref: FUN_00ce41b0 */
GEN_FRAME unsigned int GEN_THISCALL F_00ce41b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce41b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  bool bVar3;
  
  gen_imp_EnterCriticalSection(this);
  *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + 1;
  iVar2 = *(int *)((int)this + 0x28);
  gen_imp_LeaveCriticalSection(this);
  gen_imp_LeaveCriticalSection(*(undefined4 *)((int)this + 0x18));
  do {
    gen_imp_WaitForSingleObject(*(HANDLE *)((int)this + 0x1c),0xffffffff);
    gen_imp_EnterCriticalSection(this);
    if ((*(int *)((int)this + 0x24) < 1) || (*(int *)((int)this + 0x28) == iVar2)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    gen_imp_LeaveCriticalSection(this);
  } while (!bVar3);
  gen_imp_EnterCriticalSection(*(undefined4 *)((int)this + 0x18));
  gen_imp_EnterCriticalSection(this);
  *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) - 1;
  piVar1 = (int *)((int)this + 0x24);
  *piVar1 = *piVar1 - 1;
  iVar2 = *piVar1;
  gen_imp_LeaveCriticalSection(this);
  if (iVar2 == 0) {
    gen_imp_ResetEvent(*(HANDLE *)((int)this + 0x1c));
  }
  return 0;
}

/* ref: FUN_00ce4250 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce4250(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce4250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_EnterCriticalSection(this);
  if (0 < *(int *)((int)this + 0x20)) {
    gen_imp_SetEvent(*(HANDLE *)((int)this + 0x1c));
    *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0x20);
    *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + 1;
  }
  return (uint)(gen_imp_LeaveCriticalSection(this));
}

/* ref: FUN_00ce42b0 */
GEN_FRAME uint F_00ce42b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xce42b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_2[1] + param_1,param_1,param_2,param_3,param_4,param_5,param_6,
                              param_7,param_8);
  return uVar1;
}

/* ref: FUN_00ce42d0 */
GEN_NOFRAME uint GEN_THISCALL F_00ce42d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce42d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_004cefe0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x112f680));
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Common::Threading::Thread::vf5 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce4300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce4300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
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
GEN_FRAME uint GEN_THISCALL F_00ce4340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce4340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0xce42b0));
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  return (uint)this;
}

/* ref: FUN_00ce4370 */
GEN_NOFRAME uint GEN_THISCALL F_00ce4370(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce4370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HANDLE pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x112f69c));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  *(undefined1 *)((int)this + 0x38) = 1;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined1 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x54));
  *(undefined1 *)((int)this + 0x6c) = 1;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x70));
  *(int *)((int)this + 0x88) = (int)this + 0x54;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,1,0,(LPCSTR)0x0);
  *(HANDLE *)((int)this + 0x8c) = pvVar1;
  F_004cefe0((undefined *)((int)this + 0xa0) GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) = (*(undefined * PTR32 (*)[6])REFP(0x112f680));
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  return (uint)this;
}

/* ref: FUN_00ce4420 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce4420(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce4420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x112f69c));
  *(undefined4 *)((int)this + 0xa0) = (*(undefined * PTR32 (*)[6])REFP(0x112f680));
  F_004cf880((undefined4 *)((int)this + 0xa0) GEN_EDX_FWD);
  gen_imp_CloseHandle(*(HANDLE *)((int)this + 0x8c));
  gen_imp_DeleteCriticalSection((int)this + 0x70);
  gen_imp_DeleteCriticalSection((int)this + 0x54);
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x20);
  *(char *)((int)this + 0x38) = *(char *)((int)this + 0x1c);
  if (*(char *)((int)this + 0x1c) != '\0') {
    gen_imp_EnterCriticalSection(lpCriticalSection);
  }
  if (*(int *)((int)this + 8) != 0) {
    F_00406810(*(int *)((int)this + 8));
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  if (*(char *)((int)this + 0x38) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return (uint)(gen_imp_DeleteCriticalSection(lpCriticalSection));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamReadThread::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ce44b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce44b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00ce4420(this GEN_EDX_FWD);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00ce44e0 */
GEN_FRAME uint GEN_THISCALL F_00ce44e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xce44e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char * pcVar1;
  uint uVar2;
  
  *(gen_code32 *)((int)this + 0x20) = ((code *)REFP(0xce42b0));
  *(undefined4 *)((int)this + 0x24) = param_1;
  *(undefined4 *)((int)this + 0x28) = param_2;
  *(undefined4 *)((int)this + 0x2c) = param_3;
  pcVar1 = (char *)*param_4;
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "sound";
  }
  uVar2 = F_004cf9e0(this GEN_EDX_ARG,0,param_4[2],param_4[1],pcVar1);
  *(uint *)((int)this + 0x18) = uVar2;
  return uVar2;
}

/* ref: FUN_00ce4530 */
GEN_FRAME uint F_00ce4530(unsigned int gen_a0)
{
  GEN_ENTER(0xce4530u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                    (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,param_1,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
  return uVar1;
}

/* ref: FUN_00ce4580 */
GEN_FRAME uint F_00ce4580(unsigned int gen_a0)
{
  GEN_ENTER(0xce4580u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00406810(param_1);
  }
  return uVar1;
}

/* ref: FUN_00ce45a0 */
GEN_NOFRAME uint F_00ce45a0(void)
{
  GEN_ENTER(0xce45a0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00cef840(((code *)REFP(0xce4530)));
  uVar1 = F_00cef860(((code *)REFP(0xce4580)));
  return uVar1;
}

/* ref: FUN_00ce45c0 */
GEN_NOFRAME unsigned int F_00ce45c0(void)
{
  GEN_ENTER(0xce45c0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00ce45d0 */
GEN_FRAME uint GEN_THISCALL F_00ce45d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce45d0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(byte *)(in_ecx + 1) = (byte)in_ecx[1] | 1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00ce45e0 */
GEN_FRAME uint GEN_STDCALL F_00ce45e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce45e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint _MaxCount;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (((int)param_3 < 0) || (bVar1 = *(byte *)(param_1 + 4), (bVar1 & 4) != 0)) {
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 4;
    return 0;
  }
  if ((bVar1 & 1) != 0) {
    *(byte *)(param_1 + 4) = bVar1 | 2;
    return 0;
  }
  uVar3 = *(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 0x14);
  _MaxCount = param_3;
  if (uVar3 < param_3) {
    _MaxCount = uVar3;
  }
  if (_MaxCount == 0) {
    return 0;
  }
  F_00c4d027(param_2,param_3,((undefined *)GEN_TOP((*(int *)(iVar2 + 4) + *(int *)(iVar2 + 0x14)))),_MaxCount);
  *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + _MaxCount;
  return _MaxCount;
}

/* ref: FUN_00ce4660 */
GEN_NOFRAME uint GEN_THISCALL F_00ce4660(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce4660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined1 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  REFG(char, 0x15d8c28) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c10));
  REFG(int, 0x15d8c0c) = REFG(int, 0x15d8c0c) + 1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (REFG(char, 0x15d8c28) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c10));
  }
  return (uint)this;
}

/* ref: FUN_00ce46b0 */
GEN_NOFRAME uint GEN_THISCALL F_00ce46b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce46b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d8c28) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c10));
  uVar1 = 0;
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = F_00cf3530(*(int *)((int)this + 8));
  }
  REFG(int, 0x15d8c0c) = REFG(int, 0x15d8c0c) - 1;
  *(undefined4 *)((int)this + 8) = 0;
  if (REFG(char, 0x15d8c28) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c10));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ce4700 */
GEN_FRAME uint GEN_THISCALL F_00ce4700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce4700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x430];
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  short * psVar8;
  short * psVar9;
  short * psVar10;
  undefined1 * puVar11;
  undefined * puVar12;
  undefined4 uVar13;
  
  (*(uint *)(gen_frame + 0x428)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x42c);
  REFG(char, 0x15d8c28) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c10));
  param_1[5] = 0;
  if ((char)param_2 == '\0') {
    param_1[4] = 0;
  }
  *(int * PTR32 *)((int)this + 0xc) = param_1;
  if (*(int *)((int)this + 8) == 0) {
    uVar3 = F_00cf3470(this,((code *)REFP(0xce45e0)),param_1[6]);
    *(uint *)((int)this + 8) = uVar3;
    if ((uVar3 == 0) && (REFG(undefined * PTR32, 0x15d938c) != (code *)0x0)) {
      F_00c48350(((undefined1 *)(gen_frame + 0x28)),0,0x100);
      (*(undefined4 *)(gen_frame + 0x24)) = 3;
      uVar13 = REFG(undefined4, 0x15d8c0c);
      uVar3 = F_00cef8b0(REFG(undefined4, 0x15d8c0c));
      puVar11 = ((undefined1 *)(gen_frame + 0x28));
      puVar12 = &REFG(undefined, 0x112f6d0);
      F_00c4720f(puVar11,&REFG(undefined, 0x112f6d0),uVar3);
      ((code *)REFG(gen_code32, 0x15d938c))(&(*(undefined4 *)(gen_frame + 0x24)),puVar11,puVar12,uVar3,uVar13);
    }
    if (*(int *)((int)this + 8) != 0) goto LAB_00ce47eb;
  }
  else {
LAB_00ce47eb: ;
    bVar1 = *(byte *)((int)this + 4);
    while ((bVar1 & 4) == 0) {
      uVar3 = param_1[4];
      if (((uint)param_1[2] <= uVar3) ||
         (uVar3 = F_00cf31e0(*(undefined4 *)((int)this + 8),*param_1 + uVar3,param_1[2] - uVar3),
         (int)uVar3 < 1)) break;
      param_1[4] = param_1[4] + uVar3;
      bVar1 = *(byte *)((int)this + 4);
    }
    if ((*(byte *)((int)this + 4) & 4) == 0) {
      if ((*(byte *)((int)this + 4) & 2) == 0) {
LAB_00ce4c0e: ;
        uVar4 = param_1[5];
        uVar3 = param_1[3];
        if (REFG(char, 0x15d8c28) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c10));
        }
        F_00c47745((*(uint *)(gen_frame + 0x428)) ^ (uint)(uint)(gen_frame + 0x42c) GEN_EDX_ARG);
        return (uint)(uVar4 < uVar3);
      }
      *(undefined1 *)((int)this + 4) = 0;
      F_00cef900(*(undefined4 *)((int)this + 8));
      uVar3 = F_00cef8d0(*(undefined4 *)((int)this + 8),0);
      uVar4 = F_00cef8d0(*(undefined4 *)((int)this + 8),1);
      uVar4 = ((int)uVar4 >> 3) * uVar3;
      if ((uint)param_1[4] < (uint)param_1[2]) {
        if ((*(byte *)((int)this + 4) & 4) == 0) {
          do {
            uVar5 = param_1[4];
            if (((uint)param_1[2] <= uVar5) ||
               (uVar5 = F_00cf31e0(*(undefined4 *)((int)this + 8),*param_1 + uVar5,
                                     param_1[2] - uVar5), (int)uVar5 < 1)) break;
            if (((*(byte *)((int)this + 4) & 1) == 0) && (0 < *(int *)this)) {
              uVar5 = (int)uVar5 / (int)uVar4;
              uVar7 = param_1[4];
              (*(uint *)(gen_frame + 0x1c)) = 0x40;
              uVar6 = uVar7 / uVar4;
              if ((int)uVar5 < (int)uVar6) {
                uVar6 = uVar5;
              }
              if ((int)uVar6 < 0x40) {
                (*(uint *)(gen_frame + 0x1c)) = uVar6;
              }
              iVar2 = *param_1;
              psVar9 = ((short *)GEN_TOP(((iVar2 - (*(uint *)(gen_frame + 0x1c)) * uVar4) + uVar7)));
              (*(int *)(gen_frame + 0x18)) = 0;
              if (0 < (int)(*(uint *)(gen_frame + 0x1c))) {
                psVar8 = psVar9;
                do {
                  if (0 < (int)uVar3) {
                    psVar10 = psVar8;
                    (*(uint *)(gen_frame + 0xc)) = uVar3;
                    do {
                      *psVar10 = (short)(int)((float10)(int)*psVar10 *
                                              (float10)((float)GEN_TOF(((float10)1 -
                                                              (float10)(float)((float10)(*(int *)(gen_frame + 0x18)) /
                                                                              (float10)(int)
                                                  (*(uint *)(gen_frame + 0x1c)))))) +
                                             (float10)(int)*((short *)GEN_TOP((((iVar2 + uVar7) - (int)psVar9
                                                                      ) + (int)psVar10))) *
                                             (float10)(float)((float10)(*(int *)(gen_frame + 0x18)) /
                                                             (float10)(int)(*(uint *)(gen_frame + 0x1c))));
                      psVar10 = psVar10 + 1;
                      (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) - 1;
                    } while ((*(uint *)(gen_frame + 0xc)) != 0);
                  }
                  (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
                  psVar8 = psVar8 + uVar3;
                } while ((*(int *)(gen_frame + 0x18)) < (int)(*(uint *)(gen_frame + 0x1c)));
              }
              uVar5 = (uVar5 - (*(uint *)(gen_frame + 0x1c))) * uVar4;
              if (0 < (int)uVar5) {
                F_01051df1(*param_1 + param_1[4],uVar5,(*(uint *)(gen_frame + 0x1c)) * uVar4 + *param_1 + param_1[4],
                           uVar5);
              }
              *(undefined4 *)this = 0;
            }
            param_1[4] = param_1[4] + uVar5;
          } while ((*(byte *)((int)this + 4) & 4) == 0);
          if ((*(byte *)((int)this + 4) & 4) == 0) goto LAB_00ce4c0e;
        }
      }
      else {
        uVar5 = F_00cf31e0(*(undefined4 *)((int)this + 8),((short *)(gen_frame + 0x128)),0x300);
        if ((*(byte *)((int)this + 4) & 4) == 0) {
          if (0 < (int)uVar5) {
            uVar5 = (int)uVar5 / (int)uVar4;
            (*(uint *)(gen_frame + 0x1c)) = 0x40;
            uVar7 = (uint)param_1[4] / uVar4;
            if ((int)uVar5 < (int)uVar7) {
              if ((int)uVar5 < 0x40) {
                (*(uint *)(gen_frame + 0x1c)) = uVar5;
              }
            }
            else if ((int)uVar7 < 0x40) {
              (*(uint *)(gen_frame + 0x1c)) = uVar7;
            }
            psVar9 = ((short *)GEN_TOP(((param_1[4] - (*(uint *)(gen_frame + 0x1c)) * uVar4) + *param_1)));
            (*(int *)(gen_frame + 0x18)) = 0;
            if (0 < (int)(*(uint *)(gen_frame + 0x1c))) {
              psVar8 = psVar9;
              do {
                if (0 < (int)uVar3) {
                  psVar10 = psVar8;
                  (*(uint *)(gen_frame + 0x0)) = uVar3;
                  do {
                    *psVar10 = (short)(int)((float10)(int)*psVar10 *
                                            (float10)((float)GEN_TOF(((float10)1 -
                                                            (float10)(float)((float10)(*(int *)(gen_frame + 0x18)) /
                                                                            (float10)(int)(*(uint *)(gen_frame + 0x1c)))
                                                            ))) +
                                           (float10)(int)*((short *)GEN_TOP(((int)psVar10 +
                                                                   ((int)((short *)(gen_frame + 0x128)) - (int)psVar9)))) *
                                           (float10)(float)((float10)(*(int *)(gen_frame + 0x18)) /
                                                           (float10)(int)(*(uint *)(gen_frame + 0x1c))));
                    psVar10 = psVar10 + 1;
                    (*(uint *)(gen_frame + 0x0)) = (*(uint *)(gen_frame + 0x0)) - 1;
                  } while ((*(uint *)(gen_frame + 0x0)) != 0);
                }
                psVar8 = psVar8 + uVar3;
                (*(int *)(gen_frame + 0x18)) = (*(int *)(gen_frame + 0x18)) + 1;
              } while ((*(int *)(gen_frame + 0x18)) < (int)(*(uint *)(gen_frame + 0x1c)));
            }
            *(undefined4 *)this = 0;
          }
          goto LAB_00ce4c0e;
        }
      }
      if (REFG(char, 0x15d8c28) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c10));
        F_00c47745((*(uint *)(gen_frame + 0x428)) ^ (uint)(uint)(gen_frame + 0x42c) GEN_EDX_ARG);
        return 0xffffffff;
      }
      goto LAB_00ce47d5;
    }
  }
  if (REFG(char, 0x15d8c28) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c10));
  }
LAB_00ce47d5: ;
  F_00c47745((*(uint *)(gen_frame + 0x428)) ^ (uint)(uint)(gen_frame + 0x42c) GEN_EDX_ARG);
  return 0xffffffff;
}

/* ref: FUN_00ce4c50 */
GEN_NOFRAME uint GEN_THISCALL F_00ce4c50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce4c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d8c28) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c10));
  uVar1 = 0;
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = F_00cf3530(*(int *)((int)this + 8));
  }
  REFG(int, 0x15d8c0c) = REFG(int, 0x15d8c0c) - 1;
  *(undefined4 *)((int)this + 8) = 0;
  if (REFG(char, 0x15d8c28) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c10));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00ce4ca0 */
GEN_FRAME unsigned int F_00ce4ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce4ca0u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00ce4cd0 */
GEN_FRAME uint GEN_THISCALL F_00ce4cd0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce4cd0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_3 & 3;
  iVar1 = (int)param_3 >> 2;
  if (uVar3 == 0) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x28))(param_1 GEN_EDX_FWD,iVar1,(undefined4)gen_fl2bits(param_2),param_4);
  }
  else {
    if (uVar3 == 1) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x2c))(param_1 GEN_EDX_ARG,iVar1,(undefined4)gen_fl2bits(param_2),param_4)
      ;
      return uVar3;
    }
    uVar2 = param_3;
    if (uVar3 == 2) {
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x30))(param_1 GEN_EDX_ARG,iVar1,(undefined4)gen_fl2bits(param_2),param_4)
      ;
      return uVar3;
    }
  }
  return uVar2;
}

/* ref: FUN_00ce4d40 */
GEN_FRAME unsigned int GEN_THISCALL F_00ce4d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce4d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int local_8;
  
  iVar2 = 0;
  local_8 = 0;
  if (0 < *(int *)((int)this + 4)) {
    do {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + *(int *)((int)this + 8)))) + 0xc))))
                        (iVar2 + *(int *)((int)this + 8));
      bVar3 = (char)uVar1 != '\0';
      if (bVar3) {
        ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 8) + iVar2))) + 8))))
                  (*(int *)((int)this + 8) + iVar2,param_1);
      }
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + iVar2))) + 0xc))))
                        (*(int *)((int)this + 0xc) + iVar2);
      bVar4 = (char)uVar1 != '\0';
      if (bVar4) {
        ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + iVar2))) + 8))))
                  (*(int *)((int)this + 0xc) + iVar2,param_1);
      }
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((iVar2 + *(int *)((int)this + 0x10)))) + 0xc))))
                        (iVar2 + *(int *)((int)this + 0x10));
      if ((char)uVar1 == '\0') {
        if (bVar4 || bVar3) goto LAB_00ce4dcb;
      }
      else {
        ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + iVar2))) + 8))))
                  (*(int *)((int)this + 0x10) + iVar2,param_1);
LAB_00ce4dcb: ;
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG,local_8);
      }
      local_8 = local_8 + 1;
      iVar2 = iVar2 + 0x24;
    } while (local_8 < *(int *)((int)this + 4));
  }
  return;
}

/* ref: FUN_00ce4e00 */
GEN_FRAME uint GEN_THISCALL F_00ce4e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce4e00u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  int param_4 = (int)gen_a3;
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  float10 extraout_ST0;
  float10 fVar5;
  double dVar6;
  
  iVar1 = param_2 * 0x24;
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x10) + iVar1))) + 0x10))))
                    (*(int *)(param_1 + 0x10) + iVar1); dVar6 = extraout_ST0;
  fVar5 = (float10)param_3;
  bVar3 = GEN_ISNAN(fVar5) || GEN_ISNAN(extraout_ST0);
  bVar4 = bVar3 || fVar5 == extraout_ST0;
  if (bVar3 != bVar4) {
    return CONCAT22((short)((ulonglong)gen_d2bits(dVar6) >> 0x10),
                    (ushort)!(extraout_ST0 <= fVar5) << 8 | (ushort)bVar3 << 10 |
                    (ushort)bVar4 << 0xe);
  }
  if (param_4 != 0) {
    uVar2 = F_00cccd90(*(int *)(param_1 + 0x10) + iVar1 GEN_EDX_FWD,param_3,param_4);
    return uVar2;
  }
  F_00cccbd0(*(int *)(param_1 + 0x10) + iVar1 GEN_EDX_ARG,param_3);
  return 0;
}

/* ref: FUN_00ce4e90 */
GEN_FRAME unsigned int GEN_THISCALL F_00ce4e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce4e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  longlong lVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint * puVar6;
  int iVar7;
  
  *(uint *)((int)this + 4) = param_1;
  if (*(int *)((int)this + 8) == 0) {
    if (param_1 == 0) {
      puVar2 = (uint *)F_00406a50(4);
    }
    else {
      uVar3 = -(uint)((int)((ulonglong)param_1 * 0x24 >> 0x20) != 0) |
              (uint)((ulonglong)param_1 * 0x24);
      puVar2 = (uint *)F_00ce52b0(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
    }
    if (puVar2 == (uint *)0x0) {
      puVar2 = (uint *)0x0;
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
    *(uint * PTR32 *)((int)this + 8) = puVar2;
  }
  if (*(int *)((int)this + 0xc) == 0) {
    uVar3 = *(uint *)((int)this + 4);
    if (uVar3 == 0) {
      puVar2 = (uint *)F_00406a50(4);
    }
    else {
      uVar4 = -(uint)((int)((ulonglong)uVar3 * 0x24 >> 0x20) != 0) | (uint)((ulonglong)uVar3 * 0x24)
      ;
      puVar2 = (uint *)F_00ce52b0(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
    }
    if (puVar2 == (uint *)0x0) {
      puVar2 = (uint *)0x0;
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
    *(uint * PTR32 *)((int)this + 0xc) = puVar2;
  }
  if (*(int *)((int)this + 0x10) == 0) {
    uVar3 = *(uint *)((int)this + 4);
    if (uVar3 == 0) {
      puVar2 = (uint *)F_00406a50(4);
    }
    else {
      uVar4 = -(uint)((int)((ulonglong)uVar3 * 0x24 >> 0x20) != 0) | (uint)((ulonglong)uVar3 * 0x24)
      ;
      puVar2 = (uint *)F_00ce52b0(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
    }
    if (puVar2 == (uint *)0x0) {
      puVar2 = (uint *)0x0;
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
    *(uint * PTR32 *)((int)this + 0x10) = puVar2;
  }
  if (*(int *)((int)this + 0x14) == 0) {
    lVar1 = (ulonglong)*(uint *)((int)this + 4) * 4;
    uVar3 = F_00406a50(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
    *(uint *)((int)this + 0x14) = uVar3;
  }
  iVar5 = 0;
  if (0 < *(int *)((int)this + 4)) {
    iVar7 = 0;
    do {
      ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 8) + iVar7))) + 4))))
                (*(int *)((int)this + 8) + iVar7,REFG(float, 0x1094808));
      ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + iVar7))) + 4))))
                (*(int *)((int)this + 0xc) + iVar7,*(undefined4 *)&REFG(undefined, 0x112f71c));
      ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + iVar7))) + 4))))
                (*(int *)((int)this + 0x10) + iVar7,(undefined4)gen_fl2bits((float)(float10)1));
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 0x24;
    } while (iVar5 < *(int *)((int)this + 4));
  }
  return;
}

/* ref: FUN_00ce5070 */
GEN_FRAME uint F_00ce5070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xce5070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c) GEN_EDX_ARG);
  return extraout_EAX;
}

/* ref: FUN_00ce5110 */
GEN_FRAME uint GEN_THISCALL F_00ce5110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce5110u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  int param_4 = (int)gen_a3;
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
    ((code *)REFG(gen_code32, 0x15d861c))("(value >= 0.0f) && (value <= 1.0f) && \"[sd][Driver][XA2][Filter] Error: Filter frequency must be in between 0.0 and 1.0 inclusive!\""
                    ,&REFG(undefined, 0x112f7ca),"EqualizerBase.cpp",0x8e,
                    "SQEX::CDev::Engine::Sd::Driver::EqualizerBase::SetFrequency");
  }
  iVar2 = param_2 * 0x24;
  fVar1 = (float)((float10)param_3 * (float10)*(float *)&REFG(undefined, 0x134d324) +
                 (float10)*(double *)&REFG(undefined, 0x10928e8));
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 8) + iVar2))) + 0x10))))
                    (*(int *)(param_1 + 8) + iVar2); dVar7 = extraout_ST0;
  fVar6 = (float10)fVar1;
  bVar4 = GEN_ISNAN(fVar6) || GEN_ISNAN(extraout_ST0);
  bVar5 = bVar4 || fVar6 == extraout_ST0;
  if (bVar4 == bVar5) {
    if (param_4 != 0) {
      uVar3 = F_00cccd90(*(int *)(param_1 + 8) + iVar2 GEN_EDX_ARG,fVar1,param_4);
      return uVar3;
    }
    F_00cccbd0(*(int *)(param_1 + 8) + iVar2 GEN_EDX_ARG,fVar1);
    return 0;
  }
  return CONCAT22((short)((ulonglong)gen_d2bits(dVar7) >> 0x10),
                  (ushort)!(extraout_ST0 <= fVar6) << 8 | (ushort)bVar4 << 10 | (ushort)bVar5 << 0xe
                 );
}

/* ref: FUN_00ce51f0 */
GEN_FRAME uint GEN_THISCALL F_00ce51f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce51f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  int param_4 = (int)gen_a3;
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
    ((code *)REFG(gen_code32, 0x15d861c))("(value > 0.0f) && \"[sd][Driver][XA2][Filter] Error: The inverse of Q value must be greater than 0.0f!\""
                    ,&REFG(undefined, 0x112f7cb),"EqualizerBase.cpp",0xa0,
                    "SQEX::CDev::Engine::Sd::Driver::EqualizerBase::SetQValue");
  }
  iVar1 = param_2 * 0x24;
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0xc) + iVar1))) + 0x10))))
                    (*(int *)(param_1 + 0xc) + iVar1); dVar6 = extraout_ST0;
  fVar5 = (float10)param_3;
  bVar3 = GEN_ISNAN(fVar5) || GEN_ISNAN(extraout_ST0);
  bVar4 = bVar3 || fVar5 == extraout_ST0;
  if (bVar3 == bVar4) {
    if (param_4 != 0) {
      uVar2 = F_00cccd90(*(int *)(param_1 + 0xc) + iVar1 GEN_EDX_ARG,param_3,param_4);
      return uVar2;
    }
    F_00cccbd0(*(int *)(param_1 + 0xc) + iVar1 GEN_EDX_ARG,param_3);
    return 0;
  }
  return CONCAT22((short)((ulonglong)gen_d2bits(dVar6) >> 0x10),
                  (ushort)!(extraout_ST0 <= fVar5) << 8 | (ushort)bVar3 << 10 | (ushort)bVar4 << 0xe
                 );
}

/* ref: FUN_00ce52b0 */
GEN_FRAME uint F_00ce52b0(unsigned int gen_a0)
{
  GEN_ENTER(0xce52b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,param_1,"CDev.Engine.Sd",0,0,0x10);
  return uVar1;
}

/* ref: FUN_00ce5300 */
GEN_FRAME uint GEN_THISCALL F_00ce5300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce5300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::DynamicValue::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ce5330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce5330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pDVar1;
  int iVar2;
  undefined * in_ecx;
  
  if ((param_1 & 2) != 0) {
    pDVar1 = this - 4;
    iVar2 = *(int *)pDVar1;
    in_ecx = this + iVar2 * 0x24;
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      in_ecx = in_ecx - 0x24;
      F_00cccb40(in_ecx GEN_EDX_FWD);
    }
    if (((param_1 & 1) != 0) && (pDVar1 != (undefined *)0x0)) {
      F_00406810(pDVar1);
    }
    return (uint)pDVar1;
  }
  F_00cccb40(this GEN_EDX_ARG);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00ce53a0 */
GEN_NOFRAME uint GEN_THISCALL F_00ce53a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce53a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00cf506d(this GEN_EDX_FWD,&REFG(undefined, 0x134d3a0));
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x112fa8c));
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOAudioBounce::vf8 */
GEN_FRAME uint GEN_STDCALL F_00ce53e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xce53e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)*param_3;
  *(undefined4 *)(param_1 + 0x2a) = *puVar1;
  *(undefined4 *)(param_1 + 0x2e) = puVar1[1];
  *(undefined4 *)(param_1 + 0x32) = puVar1[2];
  *(undefined4 *)(param_1 + 0x36) = puVar1[3];
  *(undefined2 *)(param_1 + 0x3a) = *(undefined2 *)(puVar1 + 4);
  puVar1 = (undefined4 *)*param_5;
  *(undefined4 *)(param_1 + 0x3c) = *puVar1;
  *(undefined4 *)(param_1 + 0x40) = puVar1[1];
  *(undefined4 *)(param_1 + 0x44) = puVar1[2];
  *(undefined4 *)(param_1 + 0x48) = puVar1[3];
  *(undefined2 *)(param_1 + 0x4c) = *(undefined2 *)(puVar1 + 4);
  uVar2 = F_00cf4b89(param_1,param_2,param_3,param_4,param_5);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOAudioBounce::vf10 */
GEN_FRAME uint GEN_STDCALL F_00ce5450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xce5450u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x10];
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
  F_00c46aa0(*(*(undefined4 * PTR32 *)&gen_args[4]),pfVar5,(uint)*(ushort *)((*(int *)&gen_args[0]) + 0x3e) * (*(undefined4 * PTR32 *)&gen_args[2])[2] * 4);
  (*(undefined1 *)((char *)&(*(int *)&gen_args[0]) + 3)) = '\x01';
  if (((*(uint *)&gen_args[5]) == 0) || (*(int *)(iVar2 + 0x24) == 0)) goto LAB_00ce55c7;
  if ((*(undefined4 * PTR32 *)&gen_args[2])[1] != 1) {
    if (*(int *)(iVar2 + 0x20) < 1) goto LAB_00ce55c7;
    if ((*(undefined4 * PTR32 *)&gen_args[2])[1] != 1) {
      (*(uint *)&gen_args[5]) = 0;
      puVar3 = (*(undefined4 * PTR32 *)&gen_args[2]);
      if (0 < (int)(*(undefined4 * PTR32 *)&gen_args[2])[2]) {
        do {
          iVar4 = 0;
          if (*(short *)(iVar2 + 0x3e) != 0) {
            do {
              if (iVar4 < 2) {
                pFVar1 = *(undefined * PTR32 *)(iVar2 + 0x24);
                *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 1;
                (*(uint *)(gen_frame + 0x8)) = 0;
                F_00c4922b(&(*(uint *)(gen_frame + 0x8)),2,1,pFVar1);
              }
              iVar4 = iVar4 + 1;
              puVar3 = (*(undefined4 * PTR32 *)&gen_args[2]);
            } while (iVar4 < (int)(uint)*(ushort *)(iVar2 + 0x3e));
          }
          (*(uint *)&gen_args[5]) = (*(uint *)&gen_args[5]) + 1;
        } while ((int)(*(uint *)&gen_args[5]) < (int)puVar3[2]);
      }
      goto LAB_00ce55c7;
    }
  }
  (*(int *)(gen_frame + 0x4)) = 0;
  if (0 < (int)(*(undefined4 * PTR32 *)&gen_args[2])[2]) {
    fVar6 = (float10)REFG(float, 0x1090708);
    do {
      iVar4 = 0;
      if (*(short *)(iVar2 + 0x3e) != 0) {
        do {
          fVar8 = (float10)1;
          if (iVar4 < 2) {
            *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 1;
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
            pFVar1 = *(undefined * PTR32 *)(iVar2 + 0x24);
            (*(uint *)(gen_frame + 0x8)) = (int)(((double)GEN_TOD(gen_bits2f((*(uint *)&gen_args[5])))) * *(double *)&REFG(undefined, 0x10920e0)) & 0xffff;
            F_00c4922b(&(*(uint *)(gen_frame + 0x8)),2,1,pFVar1);
            if ((short)(*(uint *)(gen_frame + 0x8)) != 0) {
              (*(undefined1 *)((char *)&(*(int *)&gen_args[0]) + 3)) = '\0';
            }
          }
          pfVar5 = pfVar5 + 1;
          fVar6 = (float10)REFG(float, 0x1090708);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)(uint)*(ushort *)(iVar2 + 0x3e));
      }
      iVar4 = (*(int *)(gen_frame + 0x4)) + 1;
      (*(int *)(gen_frame + 0x4)) = iVar4;
    } while (iVar4 < (int)(*(undefined4 * PTR32 *)&gen_args[2])[2]);
  }
LAB_00ce55c7: ;
  if ((*(char *)(iVar2 + 0x29) != '\0') ||
     ((*(char *)(iVar2 + 0x28) != '\0' && ((*(undefined1 *)((char *)&(*(int *)&gen_args[0]) + 3)) != '\0')))) {
    *(undefined2 *)(iVar2 + 0x28) = 0;
    if (*(undefined * PTR32 *)(iVar2 + 0x24) != (undefined *)0x0) {
      F_00c4bbff(*(undefined * PTR32 *)(iVar2 + 0x24),0,0);
      pFVar1 = *(undefined * PTR32 *)(iVar2 + 0x24);
      (*(int *)(gen_frame + 0x4)) = *(int *)(iVar2 + 0x20) * 2 + 0x24;
      (*(int *)&gen_args[0]) = 0;
      (*(uint *)&gen_args[5]) = 0;
      F_00c4922b(&REFG(undefined, 0x112fa68),1,4,pFVar1);
      F_00c4922b(&(*(int *)(gen_frame + 0x4)),4,1,*(undefined * PTR32 *)(iVar2 + 0x24));
      F_00c4922b(&REFG(undefined, 0x112fa70),1,4,*(undefined * PTR32 *)(iVar2 + 0x24));
      F_00c4922b(&REFG(undefined, 0x112fa78),1,4,*(undefined * PTR32 *)(iVar2 + 0x24));
      pFVar1 = *(undefined * PTR32 *)(iVar2 + 0x24);
      (*(int *)(gen_frame + 0x4)) = 0x10;
      F_00c4922b(&(*(int *)(gen_frame + 0x4)),4,1,pFVar1);
      pFVar1 = *(undefined * PTR32 *)(iVar2 + 0x24);
      (*(int *)&gen_args[0]) = 1;
      F_00c4922b(&(*(int *)&gen_args[0]),2,1,pFVar1);
      pFVar1 = *(undefined * PTR32 *)(iVar2 + 0x24);
      (*(int *)&gen_args[0]) = 2;
      F_00c4922b(&(*(int *)&gen_args[0]),2,1,pFVar1);
      pFVar1 = *(undefined * PTR32 *)(iVar2 + 0x24);
      (*(uint *)&gen_args[5]) = REFG(undefined4, 0x134c7e8);
      F_00c4922b(&(*(uint *)&gen_args[5]),4,1,pFVar1);
      (*(uint *)&gen_args[5]) = REFG(undefined4, 0x134c7e8) * 4;
      F_00c4922b(&(*(uint *)&gen_args[5]),4,1,*(undefined * PTR32 *)(iVar2 + 0x24));
      (*(int *)&gen_args[0]) = 4;
      F_00c4922b(&(*(int *)&gen_args[0]),2,1,*(undefined * PTR32 *)(iVar2 + 0x24));
      pFVar1 = *(undefined * PTR32 *)(iVar2 + 0x24);
      (*(int *)&gen_args[0]) = 0x10;
      F_00c4922b(&(*(int *)&gen_args[0]),2,1,pFVar1);
      F_00c4922b(&REFG(undefined, 0x112fa80),1,4,*(undefined * PTR32 *)(iVar2 + 0x24));
      (*(uint *)&gen_args[5]) = *(int *)(iVar2 + 0x20) * 2;
      F_00c4922b(&(*(uint *)&gen_args[5]),4,1,*(undefined * PTR32 *)(iVar2 + 0x24));
      F_00c49312(*(undefined * PTR32 *)(iVar2 + 0x24));
      *(undefined4 *)(iVar2 + 0x20) = 0;
      *(undefined4 *)(iVar2 + 0x24) = 0;
    }
  }
  (*(undefined4 * PTR32 *)&gen_args[4])[2] = (*(undefined4 * PTR32 *)&gen_args[2])[2];
  (*(undefined4 * PTR32 *)&gen_args[4])[1] = (*(undefined4 * PTR32 *)&gen_args[2])[1];
  return (uint)(*(undefined4 * PTR32 *)&gen_args[4]);
}

/* ref: FUN_00ce5770 */
GEN_FRAME uint GEN_THISCALL F_00ce5770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce5770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  undefined * pFVar1;
  uint uVar2;
  int iVar3;
  
  if (*(undefined * PTR32 *)((int)this + 0x24) != (undefined *)0x0) {
    F_00c49312(*(undefined * PTR32 *)((int)this + 0x24));
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  pFVar1 = F_00c495d8(param_1,"wb+");
  *(undefined * PTR32 *)((int)this + 0x24) = pFVar1;
  *(undefined2 *)((int)this + 0x28) = 0;
  iVar3 = 0x2c;
  do {
    F_00c50a15(0x20,*(undefined * PTR32 *)((int)this + 0x24));
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  uVar2 = F_00c50ee3(*(undefined * PTR32 *)((int)this + 0x24));
  return uVar2;
}

/* ref: FUN_00ce5800 */
GEN_FRAME uint GEN_STDCALL F_00ce5800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce5800u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x112fac8));
  if (uVar1 != 0) {
    *param_3 = param_1;
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
    return 0;
  }
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x112b570));
  if (uVar1 != 0) {
    *param_3 = param_1;
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
    return 0;
  }
  *param_3 = 0;
  return 0x80004002;
}

/* ref: FUN_00ce5870 */
GEN_FRAME unsigned int GEN_STDCALL F_00ce5870(unsigned int gen_a0)
{
  GEN_ENTER(0xce5870u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)(gen_imp_InterlockedIncrement((LONG *)(param_1 + 0x1c)));
}

/* ref: FUN_00ce5890 */
GEN_FRAME uint GEN_STDCALL F_00ce5890(unsigned int gen_a0)
{
  GEN_ENTER(0xce5890u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = gen_imp_InterlockedDecrement(param_1 + 7);
  if ((uVar1 == 0) && (param_1 != (int *)0x0)) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x38))(param_1 GEN_EDX_ARG,1);
  }
  return uVar1;
}

/* ref: FUN_00ce58c0 */
GEN_NOFRAME uint GEN_STDCALL F_00ce58c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce58c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00ce58d0 */
GEN_NOFRAME unsigned int GEN_STDCALL F_00ce58d0(unsigned int gen_a0)
{
  GEN_ENTER(0xce58d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return;
}

/* ref: FUN_00ce58e0 */
GEN_FRAME uint GEN_STDCALL F_00ce58e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce58e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ce58f0 */
GEN_FRAME uint GEN_STDCALL F_00ce58f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce58f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOAudioBounce::vf14 */
GEN_FRAME uint GEN_THISCALL F_00ce5900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce5900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x112fa8c));
  F_00cf3b1e(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00ce5930 */
GEN_NOFRAME uint GEN_THISCALL F_00ce5930(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce5930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00cf506d(this GEN_EDX_FWD,&REFG(undefined, 0x134d818));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x112fb9c));
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOStereoMixdown::vf8 */
GEN_FRAME uint GEN_STDCALL F_00ce5960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xce5960u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)*param_3;
  *(undefined4 *)(param_1 + 0x20) = *puVar1;
  *(undefined4 *)(param_1 + 0x24) = puVar1[1];
  *(undefined4 *)(param_1 + 0x28) = puVar1[2];
  *(undefined4 *)(param_1 + 0x2c) = puVar1[3];
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(puVar1 + 4);
  puVar1 = (undefined4 *)*param_5;
  *(undefined4 *)(param_1 + 0x32) = *puVar1;
  *(undefined4 *)(param_1 + 0x36) = puVar1[1];
  *(undefined4 *)(param_1 + 0x3a) = puVar1[2];
  *(undefined4 *)(param_1 + 0x3e) = puVar1[3];
  *(undefined2 *)(param_1 + 0x42) = *(undefined2 *)(puVar1 + 4);
  uVar2 = F_00cf4b89(param_1,param_2,param_3,param_4,param_5);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOStereoMixdown::vf10 */
GEN_FRAME uint GEN_STDCALL F_00ce59d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xce59d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  uint param_6 = (uint)gen_a5;
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
      uVar2 = *(ushort *)(param_1 + 0x34);
      if (*(ushort *)(param_1 + 0x22) <= *(ushort *)(param_1 + 0x34)) {
        uVar2 = *(ushort *)(param_1 + 0x22);
      }
      iVar4 = *param_3;
      iVar6 = *param_5;
      param_6 = 0;
      if (param_3[2] != 0) {
        do {
          F_00c46aa0(iVar6,iVar4,(uint)uVar2 * 4);
          iVar6 = iVar6 + (uint)*(ushort *)(param_1 + 0x34) * 4;
          param_6 = param_6 + 1;
          iVar4 = iVar4 + (uint)*(ushort *)(param_1 + 0x22) * 4;
        } while (param_6 < (uint)param_3[2]);
      }
    }
    else {
      uVar2 = *(ushort *)(param_1 + 0x34);
      pfVar5 = (float *)*param_5;
      pfVar8 = (float *)*param_3;
      pfVar3 = pfVar5 + 1;
      param_1 = 0;
      if (uVar2 == 2) {
        if (param_3[2] != 0) {
          do {
            *pfVar5 = (float)(float10)0;
            *pfVar3 = (float)(float10)0;
            iVar4 = 0;
            pfVar7 = pfVar8;
            if (*(short *)(iVar6 + 0x22) != 0) {
              do {
                pfVar1 = (float *)(&REFG(float, 0x112fae4) + iVar4);
                iVar4 = iVar4 + 1;
                pfVar8 = pfVar7 + 1;
                *pfVar5 = (float)((float10)*pfVar1 * (float10)*pfVar7 + (float10)*pfVar5);
                *pfVar3 = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x112faf8) + iVar4 * 4) * (float10)*pfVar7
                                 + (float10)*pfVar3)));
                pfVar7 = pfVar8;
              } while (iVar4 < (int)(uint)*(ushort *)(iVar6 + 0x22));
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
          if (*(short *)(iVar6 + 0x22) != 0) {
            do {
              pfVar1 = (float *)(&REFG(float, 0x112fae4) + iVar4);
              iVar4 = iVar4 + 1;
              pfVar8 = pfVar7 + 1;
              *pfVar5 = (float)((float10)*pfVar1 * (float10)*pfVar7 + (float10)*pfVar5);
              *pfVar3 = ((float)GEN_TOF(((float10)*(float *)(&REFG(undefined, 0x112faf8) + iVar4 * 4) * (float10)*pfVar7 +
                               (float10)*pfVar3)));
              pfVar7 = pfVar8;
            } while (iVar4 < (int)(uint)*(ushort *)(iVar6 + 0x22));
          }
          F_00c48350(pfVar5 + 2,0,(uint)uVar2 * 4 - 8);
          pfVar5 = pfVar5 + *(ushort *)(iVar6 + 0x34);
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
GEN_FRAME uint GEN_THISCALL F_00ce5b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce5b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x112fb9c));
  F_00cf3b1e(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00ce5b90 */
GEN_NOFRAME uint GEN_THISCALL F_00ce5b90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce5b90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00cf506d(this GEN_EDX_FWD,&REFG(undefined, 0x134dc90));
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x112fc74));
  return (uint)this;
}

/* ref: _AFX_RICHEDIT_STATE::~_AFX_RICHEDIT_STATE */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce5bc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce5bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME uint GEN_STDCALL F_00ce5bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xce5bf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 * puVar1;
  LPVOID pvVar2;
  uint uVar3;
  SIZE_T cb;
  
  puVar1 = (undefined4 *)*param_3;
  *(undefined4 *)(param_1 + 0x20) = *puVar1;
  *(undefined4 *)(param_1 + 0x24) = puVar1[1];
  *(undefined4 *)(param_1 + 0x28) = puVar1[2];
  *(undefined4 *)(param_1 + 0x2c) = puVar1[3];
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(puVar1 + 4);
  puVar1 = (undefined4 *)*param_5;
  *(undefined4 *)(param_1 + 0x32) = *puVar1;
  *(undefined4 *)(param_1 + 0x36) = puVar1[1];
  *(undefined4 *)(param_1 + 0x3a) = puVar1[2];
  *(undefined4 *)(param_1 + 0x3e) = puVar1[3];
  *(undefined2 *)(param_1 + 0x42) = *(undefined2 *)(puVar1 + 4);
  uVar3 = (uint)(*(int *)(param_1 + 0x24) * 10) / 1000;
  *(uint *)(param_1 + 0x44) = uVar3;
  if (uVar3 != 0) {
    cb = (*(ushort *)(param_1 + 0x2e) >> 3) * uVar3;
    pvVar2 = gen_imp_CoTaskMemAlloc(cb);
    *(LPVOID *)(param_1 + 0x48) = pvVar2;
    pvVar2 = gen_imp_CoTaskMemAlloc(cb);
    *(LPVOID *)(param_1 + 0x4c) = pvVar2;
    F_00c48350(*(undefined * PTR32 *)(param_1 + 0x48),0,cb);
    F_00c48350(*(undefined * PTR32 *)(param_1 + 0x4c),0,cb);
  }
  uVar3 = F_00cf4b89(param_1,param_2,param_3,param_4,param_5);
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOPrologicIIz::vf10 */
GEN_FRAME uint GEN_STDCALL F_00ce5cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xce5cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  uint param_6 = (uint)gen_a5;
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
    uVar7 = (uint)(*(ushort *)(param_1 + 0x2e) >> 3);
    iVar11 = uVar7 * 5;
    iVar4 = uVar7 * 6;
    iVar5 = uVar7 * 7;
    if (param_6 == 0) {
      piVar1 = param_3 + 2;
      param_3 = (int *)0x0;
      if (*piVar1 != 0) {
        do {
          F_00c46aa0((uint)*(ushort *)(param_1 + 0x3e) * (int)param_3 + iVar9,
                     (uint)*(ushort *)(param_1 + 0x2c) * (int)param_3 + iVar3,
                     (uint)*(ushort *)(param_1 + 0x3e));
          param_3 = (int *)((int)param_3 + 1);
        } while (param_3 < (uint)piVar6[2]);
      }
    }
    else {
      uVar10 = *(uint *)(param_1 + 0x44);
      if (uVar10 == 0) {
        if (param_3[2] != 0) {
          iVar2 = iVar9 + uVar7 * 4;
          uVar7 = 0;
          do {
            iVar8 = *(ushort *)(param_1 + 0x2c) * uVar7;
            iVar12 = *(ushort *)(param_1 + 0x3e) * uVar7;
            F_00c46aa0(iVar12 + iVar9,iVar8 + iVar3,(uint)*(ushort *)(param_1 + 0x3e));
            fVar13 = (float10)*(float *)(iVar4 + iVar3 + iVar8);
            fVar14 = (float10)*(double *)&REFG(undefined, 0x112fcb8);
            fVar15 = (float10)*(float *)(iVar5 + iVar3 + iVar8);
            fVar16 = (float10)*(double *)&REFG(undefined, 0x112fcb0);
            *(float *)(iVar2 + iVar12) =
                 ((float)GEN_TOF((((float10)*(float *)(iVar2 + iVar12) + fVar13 * fVar14) + fVar15 * fVar16)));
            *(float *)(iVar11 + iVar9 + iVar12) =
                 ((float)GEN_TOF((((float10)*(float *)(iVar11 + iVar9 + iVar12) - fVar15 * fVar14) -
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
              iVar12 = *(ushort *)(param_1 + 0x3e) * param_6;
              F_00c46aa0(iVar12 + iVar9,*(ushort *)(param_1 + 0x2c) * param_6 + iVar3,
                         (uint)*(ushort *)(param_1 + 0x3e));
              iVar2 = param_6 * 4;
              param_6 = param_6 + 1;
              iVar8 = iVar9 + uVar7 * 4;
              fVar13 = (float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x48) + iVar2)));
              fVar14 = (float10)*(double *)&REFG(undefined, 0x112fcb8);
              fVar15 = (float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x4c) - 4 + param_6 * 4)));
              fVar16 = (float10)*(double *)&REFG(undefined, 0x112fcb0);
              *(float *)(iVar8 + iVar12) =
                   ((float)GEN_TOF((((float10)*(float *)(iVar8 + iVar12) + fVar13 * fVar14) + fVar15 * fVar16
                          )));
              *(float *)(iVar11 + iVar9 + iVar12) =
                   ((float)GEN_TOF((((float10)*(float *)(iVar11 + iVar9 + iVar12) - fVar15 * fVar14) -
                          fVar13 * fVar16)));
            } while (param_6 < *(uint *)(param_1 + 0x44));
          }
          local_14 = 0;
          if (param_3[2] != *(int *)(param_1 + 0x44)) {
            iVar2 = iVar9 + uVar7 * 4;
            do {
              iVar8 = local_14 + *(int *)(param_1 + 0x44);
              iVar12 = (uint)*(ushort *)(param_1 + 0x3e) * iVar8;
              F_00c46aa0(iVar12 + iVar9,(uint)*(ushort *)(param_1 + 0x2c) * iVar8 + iVar3,
                         (uint)*(ushort *)(param_1 + 0x3e));
              iVar8 = *(ushort *)(param_1 + 0x2c) * local_14;
              local_14 = local_14 + 1;
              fVar13 = (float10)*(float *)(iVar4 + iVar3 + iVar8);
              fVar14 = (float10)*(double *)&REFG(undefined, 0x112fcb8);
              fVar15 = (float10)*(float *)(iVar5 + iVar3 + iVar8);
              fVar16 = (float10)*(double *)&REFG(undefined, 0x112fcb0);
              *(float *)(iVar2 + iVar12) =
                   ((float)GEN_TOF((((float10)*(float *)(iVar2 + iVar12) + fVar13 * fVar14) + fVar15 * fVar16
                          )));
              *(float *)(iVar11 + iVar9 + iVar12) =
                   ((float)GEN_TOF((((float10)*(float *)(iVar11 + iVar9 + iVar12) - fVar15 * fVar14) -
                          fVar13 * fVar16)));
            } while (local_14 < (uint)(param_3[2] - *(int *)(param_1 + 0x44)));
          }
          uVar7 = *(uint *)(param_1 + 0x44);
          uVar10 = 0;
          if (uVar7 != 0) {
            do {
              iVar9 = uVar10 - uVar7;
              uVar10 = uVar10 + 1;
              iVar9 = (iVar9 + param_3[2]) * (uint)*(ushort *)(param_1 + 0x2c);
              *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x48) - 4 + uVar10 * 4))) =
                   *(undefined4 *)(iVar4 + iVar3 + iVar9);
              *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x4c) - 4 + uVar10 * 4))) =
                   *(undefined4 *)(iVar5 + iVar3 + iVar9);
              uVar7 = *(uint *)(param_1 + 0x44);
            } while (uVar10 < uVar7);
          }
        }
        else {
          if (param_3[2] != 0) {
            do {
              iVar12 = *(ushort *)(param_1 + 0x3e) * param_6;
              F_00c46aa0(iVar12 + iVar9,*(ushort *)(param_1 + 0x2c) * param_6 + iVar3,
                         (uint)*(ushort *)(param_1 + 0x3e));
              iVar2 = param_6 * 4;
              param_6 = param_6 + 1;
              iVar8 = iVar9 + uVar7 * 4;
              fVar13 = (float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x48) + iVar2)));
              fVar14 = (float10)*(double *)&REFG(undefined, 0x112fcb8);
              fVar15 = (float10)*((float *)GEN_TOP((*(int *)(param_1 + 0x4c) - 4 + param_6 * 4)));
              fVar16 = (float10)*(double *)&REFG(undefined, 0x112fcb0);
              *(float *)(iVar8 + iVar12) =
                   ((float)GEN_TOF((((float10)*(float *)(iVar8 + iVar12) + fVar13 * fVar14) + fVar15 * fVar16
                          )));
              *(float *)(iVar11 + iVar9 + iVar12) =
                   ((float)GEN_TOF((((float10)*(float *)(iVar11 + iVar9 + iVar12) - fVar15 * fVar14) -
                          fVar13 * fVar16)));
            } while (param_6 < (uint)param_3[2]);
          }
          iVar11 = *(int *)(param_1 + 0x44) * uVar7;
          iVar9 = iVar11 - param_3[2] * uVar7;
          F_01051df1(*(int *)(param_1 + 0x48),iVar11,*(int *)(param_1 + 0x48) - 4 + param_3[2] * 4,
                     iVar9);
          F_01051df1(*(int *)(param_1 + 0x4c),iVar11,*(int *)(param_1 + 0x4c) - 4 + param_3[2] * 4,
                     iVar9);
          uVar7 = param_3[2];
          param_3 = (int *)0x0;
          if (uVar7 != 0) {
            do {
              iVar11 = (uint)*(ushort *)(param_1 + 0x2c) * (int)param_3;
              iVar9 = (*(int *)(param_1 + 0x44) - uVar7) + (int)param_3;
              *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x48) + iVar9 * 4))) =
                   *(undefined4 *)(iVar4 + iVar3 + iVar11);
              *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x4c) + iVar9 * 4))) =
                   *(undefined4 *)(iVar5 + iVar3 + iVar11);
              uVar7 = piVar6[2];
              param_3 = (int *)((int)param_3 + 1);
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
GEN_FRAME uint GEN_THISCALL F_00ce6130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce6130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x112fc74));
  if (*(int *)(this + 0x48) != 0) {
    gen_imp_CoTaskMemFree(*(int *)(this + 0x48));
  }
  if (*(int *)(this + 0x4c) != 0) {
    gen_imp_CoTaskMemFree(*(int *)(this + 0x4c));
  }
  F_00cf3b1e(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf9 */
GEN_FRAME uint GEN_THISCALL F_00ce6180(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce6180u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  if (param_3 != 0) {
    *(int *)(param_1 + 4) = param_3;
    uVar1 = F_00cccd90(param_1 + 8 GEN_EDX_FWD,param_2,param_3);
    return uVar1;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  F_00cccbd0(param_1 + 8 GEN_EDX_ARG,param_2);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf11 */
GEN_NOFRAME float10 GEN_THISCALL F_00ce61c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce61c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x34);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf10 */
GEN_FRAME unsigned int GEN_THISCALL F_00ce61d0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xce61d0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0x2c) = param_2;
  *(float *)(in_ecx + 0x30) = param_3;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Reverb::vf20 */
GEN_FRAME byte GEN_THISCALL F_00ce61f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce61f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  float10 extraout_ST0;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar1 = *(float *)(param_1 + 0x34);
  if (*(int *)(param_1 + 4) != 0) {
    iVar3 = *(int *)(param_1 + 4) - param_2;
    *(int *)(param_1 + 4) = iVar3;
    if (iVar3 < 0) {
      *(undefined4 *)(param_1 + 4) = 0;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 8) + 8))))(param_1 + 8 GEN_EDX_FWD,param_2);
  }
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 8) + 0x10))))(param_1 + 8);
  fVar2 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x2c) * (float10)*(float *)(param_1 + 0x30) +
                 (float10)((float)GEN_TOF((((float10)1 - (float10)*(float *)(param_1 + 0x30)) *
                                 (float10)(float)extraout_ST0))))));
  fVar5 = (float10)((float)GEN_TOF(((float10)fVar2 - (float10)*(float *)(param_1 + 0x34))));
  fVar7 = (float10)0;
  if ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar5)) == ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar5)) || fVar7 == fVar5)) {
    fVar6 = (float10)(float)((float10)(int)param_2 / (float10)*(double *)&REFG(undefined, 0x112fcd0));
    if (!(fVar5 <= fVar7) || ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar5)) || fVar7 == fVar5)) {
      if (!(fVar5 <= fVar6) != (GEN_ISNAN(fVar6) || GEN_ISNAN(fVar5))) {
        *(float *)(param_1 + 0x34) = ((float)GEN_TOF((fVar6 + (float10)*(float *)(param_1 + 0x34))));
        goto LAB_00ce62be;
      }
    }
    else {
      fVar7 = -fVar6;
      if (fVar5 <= fVar7 && ((!GEN_ISNAN(fVar7) && !GEN_ISNAN(fVar5)) && fVar7 != fVar5)) {
        *(float *)(param_1 + 0x34) = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x34) - fVar6)));
        goto LAB_00ce62be;
      }
    }
    *(float *)(param_1 + 0x34) = fVar2;
  }
LAB_00ce62be: ;
  bVar4 = GEN_ISNAN((float10)*(float *)(param_1 + 0x34)) || GEN_ISNAN((float10)fVar1);
  if (bVar4 != (bVar4 || (float10)*(float *)(param_1 + 0x34) == (float10)fVar1)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ce62e0 */
GEN_NOFRAME uint GEN_THISCALL F_00ce62e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce62e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[21])REFP(0x112b5b4));
  in_ecx[1] = 0;
  F_00cccb10(in_ecx + 2 GEN_EDX_FWD,(float)(float10)1);
  in_ecx[0xb] = (undefined4)gen_fl2bits((float)(float10)1);
  in_ecx[0xc] = (undefined4)gen_fl2bits((float)(float10)0);
  in_ecx[0xd] = (undefined4)gen_fl2bits((float)(float10)1);
  return (uint)in_ecx;
}

/* ref: FUN_00ce6310 */
GEN_NOFRAME uint GEN_THISCALL F_00ce6310(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce6310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00cf53e0(this GEN_EDX_FWD,&REFG(undefined, 0x134e150),(int)this + 0xe4,0x14,0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x112fd7c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[5])REFP(0x112fd64));
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOIIRFilter::vf8 */
GEN_FRAME uint GEN_STDCALL F_00ce6360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xce6360u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)*param_3;
  *(undefined4 *)(param_1 + 0xc0) = *puVar1;
  *(undefined4 *)(param_1 + 0xc4) = puVar1[1];
  *(undefined4 *)(param_1 + 200) = puVar1[2];
  *(undefined4 *)(param_1 + 0xcc) = puVar1[3];
  *(undefined2 *)(param_1 + 0xd0) = *(undefined2 *)(puVar1 + 4);
  puVar1 = (undefined4 *)*param_5;
  *(undefined4 *)(param_1 + 0xd2) = *puVar1;
  *(undefined4 *)(param_1 + 0xd6) = puVar1[1];
  *(undefined4 *)(param_1 + 0xda) = puVar1[2];
  *(undefined4 *)(param_1 + 0xde) = puVar1[3];
  *(undefined2 *)(param_1 + 0xe2) = *(undefined2 *)(puVar1 + 4);
  uVar2 = F_00cf4b89(param_1,param_2,param_3,param_4,param_5);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOIIRFilter::vf10 */
GEN_FRAME unsigned int GEN_STDCALL F_00ce63f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xce63f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
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
    F_00c46aa0(*param_5,*param_3,(uint)*(ushort *)((int)param_1 + 0xde) * param_3[2]);
    param_5[2] = param_3[2];
    param_5[1] = param_3[1];
    return;
  }
  pfVar7 = (float *)*param_5;
  pfVar9 = (float *)*param_3;
  uVar5 = (uint)*(ushort *)((int)param_1 + 0xc2);
  pfVar1 = (float *)F_00cf3d40(param_1 GEN_EDX_ARG);
  param_6 = param_3[2];
  if (0 < param_6) {
    fVar10 = (float10)*pfVar1;
    fVar11 = (float10)pfVar1[1];
    fVar12 = (float10)pfVar1[2];
    fVar13 = (float10)pfVar1[3];
    fVar14 = (float10)pfVar1[4];
    do {
      pfVar1 = (float *)((int)param_1 + 0x40);
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce6650(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce6650u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float10 fVar1;
  
  fVar1 = (float10)0;
  *(float *)(in_ecx + 0x40) = (float)fVar1;
  *(float *)(in_ecx + 0x44) = (float)fVar1;
  *(float *)(in_ecx + 0x48) = (float)fVar1;
  *(float *)(in_ecx + 0x4c) = (float)fVar1;
  *(float *)(in_ecx + 0x50) = (float)fVar1;
  *(float *)(in_ecx + 0x54) = (float)fVar1;
  *(float *)(in_ecx + 0x58) = (float)fVar1;
  *(float *)(in_ecx + 0x5c) = (float)fVar1;
  *(float *)(in_ecx + 0x60) = (float)fVar1;
  *(float *)(in_ecx + 100) = (float)fVar1;
  *(float *)(in_ecx + 0x68) = (float)fVar1;
  *(float *)(in_ecx + 0x6c) = (float)fVar1;
  *(float *)(in_ecx + 0x70) = (float)fVar1;
  *(float *)(in_ecx + 0x74) = (float)fVar1;
  *(float *)(in_ecx + 0x78) = (float)fVar1;
  *(float *)(in_ecx + 0x7c) = (float)fVar1;
  *(float *)(in_ecx + 0x80) = (float)fVar1;
  *(float *)(in_ecx + 0x84) = (float)fVar1;
  *(float *)(in_ecx + 0x88) = (float)fVar1;
  *(float *)(in_ecx + 0x8c) = (float)fVar1;
  *(float *)(in_ecx + 0x90) = (float)fVar1;
  *(float *)(in_ecx + 0x94) = (float)fVar1;
  *(float *)(in_ecx + 0x98) = (float)fVar1;
  *(float *)(in_ecx + 0x9c) = (float)fVar1;
  *(float *)(in_ecx + 0xa0) = (float)fVar1;
  *(float *)(in_ecx + 0xa4) = (float)fVar1;
  *(float *)(in_ecx + 0xa8) = (float)fVar1;
  *(float *)(in_ecx + 0xac) = (float)fVar1;
  *(float *)(in_ecx + 0xb0) = (float)fVar1;
  *(float *)(in_ecx + 0xb4) = (float)fVar1;
  *(float *)(in_ecx + 0xb8) = (float)fVar1;
  *(float *)(in_ecx + 0xbc) = (float)fVar1;
  return;
}

/* ref: FUN_00ce66f0 */
GEN_FRAME uint GEN_STDCALL F_00ce66f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce66f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
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
    gen_imp_InterlockedIncrement((LONG *)(param_1 + 0x1c));
    return 0;
  }
  uVar1 = F_00ce5800(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ce6750 */
GEN_FRAME unsigned int GEN_STDCALL F_00ce6750(unsigned int gen_a0)
{
  GEN_ENTER(0xce6750u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)(gen_imp_InterlockedIncrement((LONG *)(param_1 + 0x1c)));
}

/* ref: FUN_00ce6770 */
GEN_FRAME uint GEN_STDCALL F_00ce6770(unsigned int gen_a0)
{
  GEN_ENTER(0xce6770u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = gen_imp_InterlockedDecrement(param_1 + 7);
  if ((uVar1 == 0) && (param_1 != (int *)0x0)) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x38))(param_1 GEN_EDX_ARG,1);
  }
  return uVar1;
}

/* ref: FUN_00ce67a0 */
GEN_NOFRAME unsigned int GEN_STDCALL F_00ce67a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce67a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return;
}

/* ref: FUN_00ce67b0 */
GEN_NOFRAME unsigned int GEN_STDCALL F_00ce67b0(unsigned int gen_a0)
{
  GEN_ENTER(0xce67b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  F_00ce6750(param_1 - 0x20);
  return;
}

/* ref: FUN_00ce67c0 */
GEN_NOFRAME uint GEN_STDCALL F_00ce67c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce67c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00ce66f0(param_1 - 0x20,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ce67d0 */
GEN_NOFRAME uint GEN_STDCALL F_00ce67d0(unsigned int gen_a0)
{
  GEN_ENTER(0xce67d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ce6770(param_1 - 0x20);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOIIRFilter::vf14 */
GEN_FRAME uint GEN_THISCALL F_00ce67e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce67e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x112fd7c));
  *(undefined * PTR32 * PTR32 *)(this + 0x20) = (*(undefined * PTR32 (*)[5])REFP(0x112fd64));
  F_00cf3c40(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00ce6810 */
GEN_FRAME uint GEN_THISCALL F_00ce6810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce6810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00cca0a0(this GEN_EDX_FWD,REFG(undefined4, 0x112a808),param_1);
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x112fe18));
  return (uint)this;
}

/* ref: FUN_00ce6850 */
GEN_NOFRAME uint GEN_THISCALL F_00ce6850(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce6850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x112fe18));
  uVar1 = F_00cc9f30(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::MasterBus::vf1 */
GEN_FRAME uint GEN_THISCALL F_00ce6860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce6860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
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
GEN_FRAME uint GEN_THISCALL F_00ce68c0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce68c0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  float10 extraout_ST0;
  
  if (param_3 == 0) {
    F_00cccbd0(param_1 + 0x10 GEN_EDX_FWD,param_2);
    iVar2 = 0;
    uVar1 = 0;
    if (0 < *(int *)(param_1 + 0xec)) {
      do {
        extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x10))))(param_1 + 0x10);
        uVar1 = F_00cc93f0(*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xe8) + iVar2 * 4))) GEN_EDX_ARG,
                             (float)extraout_ST0);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0xec));
    }
    return uVar1;
  }
  uVar1 = F_00cccd90(param_1 + 0x10 GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::MasterBus::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_00ce6930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce6930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0xec)) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xe8) + iVar2 * 4)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_FWD,param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0xec));
  }
  this[0xe4] = (undefined1)0x0;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::MasterBus::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00ce6970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce6970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0xec)) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xe8) + iVar2 * 4)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_FWD,param_1,param_2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0xec));
  }
  this[0xe4] = (undefined1)0x1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::MasterBus::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00ce69c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce69c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0xec)) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0xe8) + iVar2 * 4)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_FWD,param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0xec));
  }
  this[0xe4] = (undefined1)0x0;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::MasterBus::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce6a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce6a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::MasterBus::vf0 */
GEN_FRAME uint GEN_THISCALL F_00ce6a10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce6a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x112fe18));
  F_00cc9f30(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularPitchShiftBase::vf3 */
GEN_FRAME uint GEN_THISCALL F_00ce6a40(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce6a40u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  code * pcVar2;
  
  if (param_3 == 0) {
    pcVar2 = *(gen_code32 *)(*param_1 + 0x28);
  }
  else {
    if (param_3 != 1) goto LAB_00ce6a6c;
    pcVar2 = *(gen_code32 *)(*param_1 + 0x2c);
  }
  (*pcVar2)(param_1,(undefined4)gen_fl2bits(param_2),param_4);
LAB_00ce6a6c: ;
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x24))(param_1 GEN_EDX_FWD);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularPitchShiftBase::vf4 */
GEN_FRAME uint GEN_THISCALL F_00ce6a80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce6a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
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
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG);
    return uVar1;
  }
  if (bVar2) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularPitchShiftBase::vf10 */
GEN_FRAME uint GEN_THISCALL F_00ce6af0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce6af0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  if (param_3 != 0) {
    uVar1 = F_00cccd90(param_1 + 4 GEN_EDX_FWD,param_2,param_3);
    return uVar1;
  }
  F_00cccbd0(param_1 + 4 GEN_EDX_ARG,param_2);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularPitchShiftBase::vf11 */
GEN_FRAME uint GEN_THISCALL F_00ce6b20(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce6b20u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  float10 fVar2;
  
  fVar2 = (float10)param_2 / (float10)*(float *)(param_1 + 0x4c);
  if (param_3 != 0) {
    uVar1 = F_00cccd90(param_1 + 0x28 GEN_EDX_FWD,(float)fVar2,param_3);
    return uVar1;
  }
  F_00cccbd0(param_1 + 0x28 GEN_EDX_ARG,(float)fVar2);
  return 0;
}

/* ref: FUN_00ce6b60 */
GEN_FRAME uint GEN_THISCALL F_00ce6b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce6b60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *param_1 = (*(undefined * PTR32 (*)[12])REFP(0x112c074));
  F_00cccb10(param_1 + 1 GEN_EDX_FWD,(float)(float10)1);
  F_00cccb10(param_1 + 10 GEN_EDX_ARG,*(float *)&REFG(undefined, 0x112fe48));
  param_1[0x13] = *(undefined4 *)&REFG(undefined, 0x112fe44);
  if (param_2 != 0) {
    ((code *)*(gen_code32 *)(param_1[1] + 4))(param_1 + 1,*(undefined4 *)(param_2 + 0x10));
    ((code *)*(gen_code32 *)(param_1[10] + 4))
              (param_1 + 10,
               (undefined4)
               gen_fl2bits(((float)GEN_TOF(((float10)*(float *)(param_2 + 0x14) /
                                  ((float10)GEN_TOD(gen_bits2f(param_1[0x13]))))))));
  }
  return (uint)param_1;
}

/* ref: FUN_00ce6be0 */
GEN_NOFRAME uint GEN_THISCALL F_00ce6be0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce6be0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00cf53e0(this GEN_EDX_FWD,&REFG(undefined, 0x134e5e0),(int)this + 100,8,0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x112ff04));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[5])REFP(0x112feec));
  F_00c48350((undefined *)((int)this + 0x7c),0,0x70800);
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOGranularPitchShift::vf8 */
GEN_FRAME uint GEN_STDCALL F_00ce6c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xce6c40u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined2 uVar1;
  undefined4 * puVar2;
  float10 fVar3;
  uint uVar4;
  
  fVar3 = (float10)0;
  puVar2 = (undefined4 *)*param_3;
  *(undefined4 *)(param_1 + 0x40) = *puVar2;
  *(undefined4 *)(param_1 + 0x44) = puVar2[1];
  *(undefined4 *)(param_1 + 0x48) = puVar2[2];
  *(undefined4 *)(param_1 + 0x4c) = puVar2[3];
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(puVar2 + 4);
  puVar2 = (undefined4 *)*param_5;
  *(undefined4 *)(param_1 + 0x52) = *puVar2;
  *(undefined4 *)(param_1 + 0x56) = puVar2[1];
  *(undefined4 *)(param_1 + 0x5a) = puVar2[2];
  *(undefined4 *)(param_1 + 0x5e) = puVar2[3];
  uVar1 = *(undefined2 *)(puVar2 + 4);
  *(float *)(param_1 + 0x70880) = (float)fVar3;
  *(float *)(param_1 + 0x70888) = (float)fVar3;
  *(undefined2 *)(param_1 + 0x62) = uVar1;
  *(float *)(param_1 + 0x70884) = (float)fVar3;
  *(float *)(param_1 + 0x70890) = (float)fVar3;
  *(float *)(param_1 + 0x7088c) = (float)fVar3;
  *(undefined4 *)(param_1 + 0x7087c) = 0;
  uVar4 = F_00cf4b89(param_1,param_2,param_3,param_4,param_5);
  return uVar4;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOGranularPitchShift::vf10 */
GEN_FRAME unsigned int GEN_STDCALL F_00ce6cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xce6cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x50];
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
  if (param_6 == (float *)0x0) {
    F_00c46aa0(*param_5,*param_3,(uint)*(ushort *)(param_1 + 0x5e) * param_3[2]);
    param_5[2] = param_3[2];
    param_5[1] = param_3[1];
    return;
  }
  param_6 = (float *)*param_5;
  puVar11 = (undefined4 *)*param_3;
  (*(int *)(gen_frame + 0x20)) = param_3[2];
  (*(uint *)(gen_frame + 0x44)) = (uint)*(ushort *)(param_1 + 0x54);
  pfVar5 = (float *)F_00cf3d40((undefined *)param_1 GEN_EDX_ARG);
  (*(float *)(gen_frame + 0x2c)) = pfVar5[1];
  (*(float *)(gen_frame + 0x30)) = (float)((float10)1 / (float10)pfVar5[1]);
  (*(float *)(gen_frame + 0x34)) = *pfVar5;
  if (0 < (*(int *)(gen_frame + 0x20))) {
    do {
      fVar15 = (float10)REFG(float, 0x1094808);
      fVar13 = (float10)1;
      fVar17 = (float10)(*(float *)(gen_frame + 0x34));
      fVar16 = (float10)1;
      fVar2 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x70880) + (float10)(*(float *)(gen_frame + 0x2c)))));
      fVar12 = (float10)fVar2;
      *(float *)(in_ecx + 0x70880) = fVar2;
      if (fVar16 <= fVar12 && ((!GEN_ISNAN(fVar12) && !GEN_ISNAN(fVar16)) && fVar12 != fVar16)) {
        *(float *)(in_ecx + 0x70880) = (float)(fVar12 - fVar13);
      }
      fVar12 = (float10)*(float *)(in_ecx + 0x70880);
      if (!(fVar12 <= fVar15) || ((GEN_ISNAN(fVar15) || GEN_ISNAN(fVar12)) || fVar15 == fVar12)) {
        if (*(char *)(in_ecx + 0x70894) == '\0') goto LAB_00ce6daf;
      }
      else {
        *(undefined2 *)(in_ecx + 0x70894) = 0;
LAB_00ce6daf: ;
        if (!((float10)*(float *)(in_ecx + 0x70880) <= fVar15) !=
            (GEN_ISNAN(fVar15) || GEN_ISNAN((float10)*(float *)(in_ecx + 0x70880)))) {
          if ((GEN_ISNAN(fVar17) || GEN_ISNAN(fVar16)) || fVar17 < fVar16 == (fVar17 == fVar16)) {
            *(undefined1 *)(in_ecx + 0x70894) = 1;
            *(float *)(in_ecx + 0x7088c) = (float)(fVar13 - fVar17);
            *(float *)(in_ecx + 0x70884) =
                 ((float)GEN_TOF((-(float10)(float)(fVar13 - fVar17) * (float10)(*(float *)(gen_frame + 0x30)))));
          }
          else {
            *(undefined1 *)(in_ecx + 0x70894) = 1;
            *(float *)(in_ecx + 0x70884) = (float)(float10)0;
            *(float *)(in_ecx + 0x7088c) = (float)(fVar13 - fVar17);
          }
        }
      }
      if ((*(char *)(in_ecx + 0x70895) == '\0') &&
         (!((float10)*(float *)(in_ecx + 0x70880) <= (float10)REFG(float, 0x1088138)) !=
          (GEN_ISNAN((float10)REFG(float, 0x1088138)) || GEN_ISNAN((float10)*(float *)(in_ecx + 0x70880))))) {
        if (fVar17 <= fVar16) {
          *(undefined1 *)(in_ecx + 0x70895) = 1;
          *(float *)(in_ecx + 0x70888) = (float)(float10)0;
          *(float *)(in_ecx + 0x70890) = (float)(fVar13 - fVar17);
        }
        else {
          *(undefined1 *)(in_ecx + 0x70895) = 1;
          *(float *)(in_ecx + 0x70890) = (float)(fVar13 - fVar17);
          *(float *)(in_ecx + 0x70888) =
               ((float)GEN_TOF((-(float10)(float)(fVar13 - fVar17) * (float10)(*(float *)(gen_frame + 0x30)))));
        }
      }
      fVar2 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x70884) + (float10)*(float *)(in_ecx + 0x7088c))))
      ;
      *(float *)(in_ecx + 0x70884) = fVar2;
      *(float *)(in_ecx + 0x70888) =
           ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x70890) + (float10)*(float *)(in_ecx + 0x70888))));
      dVar4 = (double)fVar2;
      fVar12 = F_00c51c40((uint)(ulonglong)gen_d2bits(dVar4),
                            (int)((ulonglong)gen_d2bits(dVar4) >> 0x20),&(*(double *)(gen_frame + 0xc)));
      (*(float * PTR32 *)(gen_frame + 0x48)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar12)));
      (*(int *)(gen_frame + 0x38)) = *(int *)(in_ecx + 0x7087c) + (int)(*(double *)(gen_frame + 0xc)) * -8;
      if ((*(int *)(gen_frame + 0x38)) < 0) {
        (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) + 0x1c200;
      }
      (*(int *)(gen_frame + 0x3c)) = (*(int *)(gen_frame + 0x38)) - 8;
      if ((*(int *)(gen_frame + 0x38)) - 8 < 0) {
        (*(int *)(gen_frame + 0x3c)) = (*(int *)(gen_frame + 0x38)) + 0x1c1f8;
      }
      fVar12 = F_00c51c40((uint)(ulonglong)gen_d2bits((double)*(float *)(in_ecx + 0x70888)),
                            (int)((ulonglong)gen_d2bits((double)*(float *)(in_ecx + 0x70888)) >>
                                 0x20),&(*(double *)(gen_frame + 0x4)));
      (*(float *)(gen_frame + 0x1c)) = (float)fVar12;
      iVar8 = *(int *)(in_ecx + 0x7087c) + (int)(*(double *)(gen_frame + 0x4)) * -8;
      (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x24)) + 4)) = iVar8;
      if (iVar8 < 0) {
        iVar8 = iVar8 + 0x1c200;
        (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x24)) + 4)) = iVar8;
      }
      (*(double *)(gen_frame + 0x24)) = gen_bits2d(CONCAT44(iVar8,(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x24)) + 0))));
      (*(float * PTR32 *)(gen_frame + 0x40)) = (float *)(iVar8 - 8);
      if (iVar8 - 8 < 0) {
        (*(float * PTR32 *)(gen_frame + 0x40)) = (float *)(iVar8 + 0x1c1f8);
      }
      fVar16 = ((float10)GEN_TOD(fsin(
                             (float10)((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x70880) *
                                             (float10)*(double *)&REFG(undefined, 0x112ff48)))))));
      iVar6 = 0;
      fVar15 = (float10)1;
      fVar17 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x48)))));
      fVar12 = (float10)(float)fVar12;
      fVar16 = (float10)((float)GEN_TOF((((float10)(float)fVar16 + fVar15) * (float10)REFG(double, 0x1088108))));
      if (3 < (int)(*(uint *)(gen_frame + 0x44))) {
        fVar13 = fVar15 - fVar17;
        param_1 = in_ecx + 0x80 + iVar8 * 4;
        fVar14 = fVar15 - fVar16;
        (*(float * PTR32 *)(gen_frame + 0x48)) = (float *)(in_ecx + 0x80 + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x40))) * 4);
        dVar4 = (double)(fVar15 - fVar12);
        (*(double *)(gen_frame + 0x14)) = dVar4;
        pfVar5 = (float *)(in_ecx + 0x80 + (*(int *)(gen_frame + 0x38)) * 4);
        pfVar7 = (float *)(in_ecx + 0x80 + (*(int *)(gen_frame + 0x3c)) * 4);
        do {
          *((undefined4 *)GEN_TOP((in_ecx + 0x7c + (*(int *)(in_ecx + 0x7087c) + iVar6) * 4))) = *puVar11;
          fVar2 = ((float)GEN_TOF(((float10)*(float *)(param_1 - 4) * (float10)dVar4 +
                         (float10)(*(float * PTR32 *)(gen_frame + 0x48))[-1] * fVar12)));
          (*(float *)(gen_frame + 0x1c)) = fVar2;
          fVar3 = (float)((float10)pfVar5[-1] * fVar13 + (float10)pfVar7[-1] * fVar17);
          (*(float *)(gen_frame + 0x1c)) = fVar3;
          *param_6 = (float)((float10)fVar3 * fVar14 + (float10)fVar2 * fVar16);
          *((undefined4 *)GEN_TOP((in_ecx + 0x80 + (*(int *)(in_ecx + 0x7087c) + iVar6) * 4))) = puVar11[1];
          fVar2 = (float)((float10)*(float *)param_1 * (float10)dVar4 + fVar12 * (float10)*(*(float * PTR32 *)(gen_frame + 0x48)));
          (*(float *)(gen_frame + 0x1c)) = fVar2;
          fVar3 = (float)((float10)*pfVar5 * fVar13 + fVar17 * (float10)*pfVar7);
          (*(float *)(gen_frame + 0x1c)) = fVar3;
          param_6[1] = (float)((float10)fVar3 * fVar14 + (float10)fVar2 * fVar16);
          *((undefined4 *)GEN_TOP((in_ecx + 0x84 + (*(int *)(in_ecx + 0x7087c) + iVar6) * 4))) = puVar11[2];
          fVar2 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 4) * (float10)dVar4 +
                         (float10)(*(float * PTR32 *)(gen_frame + 0x48))[1] * fVar12)));
          (*(float *)(gen_frame + 0x1c)) = fVar2;
          fVar3 = (float)((float10)pfVar5[1] * fVar13 + (float10)pfVar7[1] * fVar17);
          (*(float *)(gen_frame + 0x1c)) = fVar3;
          param_6[2] = (float)((float10)fVar3 * fVar14 + (float10)fVar2 * fVar16);
          *((undefined4 *)GEN_TOP((in_ecx + 0x88 + (*(int *)(in_ecx + 0x7087c) + iVar6) * 4))) = puVar11[3];
          pfVar10 = (*(float * PTR32 *)(gen_frame + 0x48)) + 2;
          pfVar1 = (float *)(param_1 + 8);
          param_1 = param_1 + 0x10;
          (*(float * PTR32 *)(gen_frame + 0x48)) = (*(float * PTR32 *)(gen_frame + 0x48)) + 4;
          pfVar9 = param_6 + 4;
          iVar6 = iVar6 + 4;
          puVar11 = puVar11 + 4;
          fVar2 = (float)((float10)*pfVar1 * (float10)dVar4 + (float10)*pfVar10 * fVar12);
          (*(float *)(gen_frame + 0x1c)) = fVar2;
          fVar3 = (float)((float10)pfVar5[2] * fVar13 + (float10)pfVar7[2] * fVar17);
          (*(float *)(gen_frame + 0x1c)) = fVar3;
          param_6[3] = (float)((float10)fVar3 * fVar14 + (float10)fVar2 * fVar16);
          pfVar5 = pfVar5 + 4;
          pfVar7 = pfVar7 + 4;
          param_6 = pfVar9;
        } while (iVar6 < (int)((*(uint *)(gen_frame + 0x44)) - 3));
      }
      fVar15 = (float10)1;
      if (iVar6 < (int)(*(uint *)(gen_frame + 0x44))) {
        (*(float * PTR32 *)(gen_frame + 0x40)) = ((float *)GEN_TOP((in_ecx + 0x7c + (iVar6 + (int)(*(float * PTR32 *)(gen_frame + 0x40))) * 4)));
        (*(double *)(gen_frame + 0x24)) = (double)(fVar15 - fVar16);
        (*(double *)(gen_frame + 0x14)) = (double)(fVar15 - fVar12);
        pfVar5 = ((float *)GEN_TOP((in_ecx + 0x7c + ((*(int *)(gen_frame + 0x38)) + iVar6) * 4)));
        pfVar7 = ((float *)GEN_TOP((in_ecx + 0x7c + (iVar6 + (*(int *)(gen_frame + 0x3c))) * 4)));
        param_1 = in_ecx + 0x7c + (iVar6 + iVar8) * 4;
        do {
          *((undefined4 *)GEN_TOP((in_ecx + 0x7c + (*(int *)(in_ecx + 0x7087c) + iVar6) * 4))) = *puVar11;
          fVar2 = *(*(float * PTR32 *)(gen_frame + 0x40));
          (*(float * PTR32 *)(gen_frame + 0x40)) = (*(float * PTR32 *)(gen_frame + 0x40)) + 1;
          pfVar10 = param_6 + 1;
          iVar6 = iVar6 + 1;
          puVar11 = puVar11 + 1;
          fVar2 = ((float)GEN_TOF(((float10)*(float *)param_1 * (float10)(double)(fVar15 - fVar12) +
                         (float10)fVar2 * fVar12)));
          (*(float *)(gen_frame + 0x1c)) = fVar2;
          fVar3 = ((float)GEN_TOF(((float10)*pfVar5 * (fVar15 - fVar17) + (float10)*pfVar7 * fVar17)));
          (*(float *)(gen_frame + 0x1c)) = fVar3;
          *param_6 = ((float)GEN_TOF(((float10)fVar3 * (float10)(double)(fVar15 - fVar16) +
                            (float10)fVar2 * fVar16)));
          pfVar5 = pfVar5 + 1;
          pfVar7 = pfVar7 + 1;
          param_1 = param_1 + 4;
          param_6 = pfVar10;
        } while (iVar6 < (int)(*(uint *)(gen_frame + 0x44)));
      }
      *(int *)(in_ecx + 0x7087c) = *(int *)(in_ecx + 0x7087c) + 8;
      if (*(int *)(in_ecx + 0x7087c) == 0x1c200) {
        *(undefined4 *)(in_ecx + 0x7087c) = 0;
      }
      iVar8 = (*(int *)(gen_frame + 0x20)) - 1;
      (*(int *)(gen_frame + 0x20)) = iVar8;
    } while (iVar8 != 0);
  }
  F_00cf3d90(in_ecx GEN_EDX_ARG);
  param_5[2] = param_3[2];
  param_5[1] = param_3[1];
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOGranularPitchShift::vf14 */
GEN_FRAME uint GEN_THISCALL F_00ce7270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce7270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x112ff04));
  *(undefined * PTR32 * PTR32 *)(this + 0x20) = (*(undefined * PTR32 (*)[5])REFP(0x112feec));
  F_00cf3c40(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularSynthesizerBase::vf3 */
GEN_FRAME uint GEN_THISCALL F_00ce72a0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce72a0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  if (param_3 == 0) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x28))(param_1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2),param_4);
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x24))(param_1 GEN_EDX_ARG);
    return uVar1;
  }
  ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x2c))(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_4);
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x24))(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularSynthesizerBase::vf4 */
GEN_FRAME uint GEN_THISCALL F_00ce72f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce72f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
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
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG);
    return uVar1;
  }
  if (bVar2) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularSynthesizerBase::vf10 */
GEN_FRAME uint GEN_THISCALL F_00ce7380(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce7380u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
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
  in_ecx = (int *)(param_1 + 4);
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))))(in_ecx); dVar6 = extraout_ST0;
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
    extraout_ST0_00 = ((gen_fcode *)*(gen_code32 *)(*in_ecx + 0x10))(in_ecx);
    uVar1 = F_00cc2690((float)extraout_ST0_00);
    return uVar1;
  }
  uVar1 = F_00cccd90(in_ecx GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::GranularSynthesizerBase::vf11 */
GEN_FRAME uint GEN_THISCALL F_00ce7410(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce7410u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  int in_ecx;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 extraout_ST0;
  float10 fVar4;
  double dVar5;
  
  in_ecx = param_1 + 0x28;
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x28) + 0x10))))(in_ecx); dVar5 = extraout_ST0;
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

/* ref: FUN_00ce7460 */
GEN_NOFRAME uint GEN_THISCALL F_00ce7460(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce7460u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x112c104));
  F_00cccb10(in_ecx + 1 GEN_EDX_FWD,(float)(float10)1);
  F_00cccb10(in_ecx + 10 GEN_EDX_ARG,(float)(float10)1);
  return (uint)in_ecx;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOGranularSynthesizer::vf8 */
GEN_FRAME uint GEN_STDCALL F_00ce7490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xce7490u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)*param_3;
  *(undefined4 *)(param_1 + 0x20) = *puVar1;
  *(undefined4 *)(param_1 + 0x24) = puVar1[1];
  *(undefined4 *)(param_1 + 0x28) = puVar1[2];
  *(undefined4 *)(param_1 + 0x2c) = puVar1[3];
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(puVar1 + 4);
  puVar1 = (undefined4 *)*param_5;
  *(undefined4 *)(param_1 + 0x32) = *puVar1;
  *(undefined4 *)(param_1 + 0x36) = puVar1[1];
  *(undefined4 *)(param_1 + 0x3a) = puVar1[2];
  *(undefined4 *)(param_1 + 0x3e) = puVar1[3];
  *(undefined2 *)(param_1 + 0x42) = *(undefined2 *)(puVar1 + 4);
  uVar2 = F_00cf4b89(param_1,param_2,param_3,param_4,param_5);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOGranularSynthesizer::vf10 */
GEN_FRAME unsigned int GEN_STDCALL F_00ce7500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xce7500u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_6 == 0) {
    if (param_3[1] == 1) {
      iVar1 = *param_5;
      iVar2 = *param_3;
      uVar3 = 0;
      if (param_3[2] != 0) {
        do {
          F_00c46aa0(*(ushort *)(param_1 + 0x3e) * uVar3 + iVar1,
                     *(ushort *)(param_1 + 0x2c) * uVar3 + iVar2,(uint)*(ushort *)(param_1 + 0x3e));
          uVar3 = uVar3 + 1;
        } while (uVar3 < (uint)param_3[2]);
      }
      param_5[2] = param_3[2];
      param_5[1] = param_3[1];
    }
    return;
  }
  iVar1 = *param_5;
  if (param_3[1] == 1) {
    F_00ce79c0(param_1 + 0x48,*param_3,(uint)*(ushort *)(param_1 + 0x34),
                 (uint)*(ushort *)(param_3 + 2));
  }
  else if ((*(short *)(param_1 + 0x44) == 0) && (*(char *)(param_1 + 0x4e) == '\0')) {
    F_00ce7a80(param_1 + 0x48,(uint)*(ushort *)(param_1 + 0x34),(uint)*(ushort *)(param_5 + 2));
  }
  if (*(ushort *)(param_1 + 0x5c) <= *(ushort *)(param_1 + 0x68)) {
    do {
      if (0x2000 < (uint)*(ushort *)(param_1 + 0x74) + (uint)*(ushort *)(param_1 + 0x5c)) break;
      F_00ce7be0(param_1 + 0x48,(uint)*(ushort *)(param_1 + 0x34));
    } while (*(ushort *)(param_1 + 0x5c) <= *(ushort *)(param_1 + 0x68));
  }
  if ((uint)*(ushort *)(param_1 + 0x74) < (uint)param_5[2]) {
    param_5[1] = 0;
  }
  else {
    F_00ce7b10(param_1 + 0x48,iVar1,(uint)*(ushort *)(param_1 + 0x34),
                 (uint)*(ushort *)(param_5 + 2));
    param_5[1] = 1;
  }
  if ((*(short *)(param_1 + 0x4a) != *(short *)(param_1 + 0x4c)) &&
     (0xfff < *(ushort *)(param_1 + 0x68))) {
    *(undefined1 *)(param_1 + 0x4e) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0x4e) = 0;
  return;
}

/* ref: FUN_00ce7660 */
GEN_FRAME uint GEN_THISCALL F_00ce7660(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xce7660u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined2 local_8;
  
  local_8 = (undefined2)(int)TRUNC((float10)*(ushort *)(param_1 + 0x48) * (float10)param_2);
  *(undefined2 *)(param_1 + 0x4a) = local_8;
  return gen_x87_cw | 0xc00;
}

/* ref: FUN_00ce76a0 */
GEN_FRAME uint GEN_THISCALL F_00ce76a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce76a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(ushort *)(in_ecx + 0x4a);
}

/* ref: FUN_00ce76c0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce76c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce76c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(short *)(in_ecx + 0x44) = *(short *)(in_ecx + 0x44) + 1;
  return;
}

/* ref: FUN_00ce76d0 */
GEN_NOFRAME uint GEN_THISCALL F_00ce76d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce76d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(short *)(in_ecx + 0x44) = *(short *)(in_ecx + 0x44) - 1;
  return 0xffff;
}

/* ref: FUN_00ce76e0 */
GEN_NOFRAME byte GEN_THISCALL F_00ce76e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce76e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(char *)(in_ecx + 0x4e) != '\0') {
    *(undefined1 *)(in_ecx + 0x4f) = 0;
    return 0;
  }
  *(undefined1 *)(in_ecx + 0x4f) = 1;
  return 1;
}

/* ref: FUN_00ce7700 */
GEN_FRAME unsigned int GEN_THISCALL F_00ce7700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce7700u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint uVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  *(undefined2 *)(param_1 + 1) = (undefined2)param_2;
  uVar1 = param_2 & 0xffff;
  *(undefined2 *)((int)param_1 + 6) = (undefined2)param_3;
  fVar4 = (float10)*(double *)&REFG(undefined, 0x1080228);
  iVar3 = 0;
  *(undefined2 *)(param_1 + 2) = (undefined2)param_4;
  param_2 = 0;
  if (uVar1 != 0) {
    do {
      fVar5 = ((float10)GEN_TOD(fcos(
                            (float10)((float)GEN_TOF(((float10)(int)param_2 *
                                            (float10)(float)(fVar4 / (float10)uVar1)))))));
      param_2 = param_2 + 1;
      iVar3 = iVar3 + 1;
      *(float *)(*param_1 - 4 + iVar3 * 4) =
           (float)((float10)REFG(double, 0x1088108) - (float10)(float)fVar5 * (float10)REFG(double, 0x1088108));
    } while ((int)param_2 < (int)(uint)*(ushort *)(param_1 + 1));
  }
  iVar2 = *(ushort *)(param_1 + 2) - 1;
  if (-1 < iVar2) {
    iVar3 = iVar3 * 4;
    do {
      fVar5 = ((float10)GEN_TOD(fcos(
                            (float10)((float)GEN_TOF(((float10)iVar2 *
                                            (float10)((float)GEN_TOF((fVar4 / (float10)(param_4 & 0xffff))))))))));
      iVar2 = iVar2 - 1;
      *(float *)(iVar3 + *param_1) =
           (float)((float10)REFG(double, 0x1088108) - (float10)(float)fVar5 * (float10)REFG(double, 0x1088108));
      iVar3 = iVar3 + 4;
    } while (-1 < iVar2);
  }
  return 0;
}

/* ref: FUN_00ce77e0 */
GEN_NOFRAME uint GEN_THISCALL F_00ce77e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce77e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * _Dst;
  
  *(undefined2 *)this = 0x960;
  *(undefined4 *)((int)this + 2) = 0x9600960;
  *(undefined2 *)((int)this + 6) = 0x100;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x1e00,"CDev.Engine.Sd",0,0,0x10);
  *(uint *)((int)this + 8) = uVar1;
  F_00ce7700((int)this + 8 GEN_EDX_ARG,0x3c0,0x5a0,0x3c0);
  *(undefined2 *)((int)this + 0x14) = 0xd20;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x40000,"CDev.Engine.Sd",0,0,0x10);
  *(uint *)((int)this + 0x18) = uVar1;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 0x20) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  _Dst = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x40000,"CDev.Engine.Sd",0,0,0x10)));
  *(undefined * PTR32 *)((int)this + 0x24) = _Dst;
  F_00c48350(_Dst,0,0x40000);
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  return (uint)this;
}

/* ref: FUN_00ce7900 */
GEN_NOFRAME uint GEN_THISCALL F_00ce7900(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce7900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x18) != 0) {
    F_00406810(*(int *)((int)this + 0x18));
  }
  uVar1 = 0;
  if (*(int *)((int)this + 0x24) != 0) {
    uVar1 = F_00406810(*(int *)((int)this + 0x24));
  }
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = F_00406810(*(int *)((int)this + 8));
  }
  return uVar1;
}

/* ref: FUN_00ce7940 */
GEN_NOFRAME uint GEN_THISCALL F_00ce7940(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce7940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00cf506d(this GEN_EDX_FWD,&REFG(undefined, 0x134ea68));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x113003c));
  *(undefined2 *)((int)this + 0x44) = 0;
  F_00ce77e0((undefined *)((int)this + 0x48) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00ce7970 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce7970(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce7970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x113003c));
  if (*(int *)((int)this + 0x60) != 0) {
    F_00406810(*(int *)((int)this + 0x60));
  }
  if (*(int *)((int)this + 0x6c) != 0) {
    F_00406810(*(int *)((int)this + 0x6c));
  }
  if (*(int *)((int)this + 0x50) != 0) {
    F_00406810(*(int *)((int)this + 0x50));
  }
  F_00cf3b1e(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_00ce79c0 */
GEN_FRAME uint F_00ce79c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce79c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  iVar2 = (*(int *)&gen_args[0]);
  iVar1 = *(int *)((*(int *)&gen_args[0]) + 0x18) + (uint)*(ushort *)((*(int *)&gen_args[0]) + 0x1e) * (*(int *)&gen_args[2]) * 4;
  *(short *)((*(int *)&gen_args[0]) + 0x20) = *(short *)((*(int *)&gen_args[0]) + 0x20) + (short)(*(uint *)&gen_args[3]);
  iVar4 = *(ushort *)((*(int *)&gen_args[0]) + 0x1e) + (*(uint *)&gen_args[3]);
  uVar3 = (ushort)iVar4;
  *(ushort *)((*(int *)&gen_args[0]) + 0x1e) = uVar3;
  if (uVar3 < 0x2000) {
    uVar7 = F_00c46aa0(iVar1,(*(int *)&gen_args[1]),((*(uint *)&gen_args[3]) & 0xffff) * (*(int *)&gen_args[2]) * 4);
    return (uint)uVar7;
  }
  uVar5 = iVar4 - 0x2000;
  uVar6 = uVar5 & 0xffff;
  iVar4 = ((*(uint *)&gen_args[3]) & 0xffff) - uVar6;
  F_00c46aa0(iVar1,(*(int *)&gen_args[1]),iVar4 * (*(int *)&gen_args[2]) * 4);
  uVar7 = F_00c46aa0(*(undefined4 *)((*(int *)&gen_args[0]) + 0x18),(*(int *)&gen_args[1]) + iVar4 * (*(int *)&gen_args[2]) * 4,
                     uVar6 * (*(int *)&gen_args[2]) * 4);
  (*(undefined2 *)((char *)&(*(int *)&gen_args[0]) + 0)) = (undefined2)uVar5;
  *(undefined2 *)(iVar2 + 0x1e) = (undefined2)(*(int *)&gen_args[0]);
  return (uint)uVar7;
}

/* ref: FUN_00ce7a80 */
GEN_FRAME uint F_00ce7a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce7a80u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  undefined * pvVar5;
  uint uVar6;
  uint uVar7;
  
  iVar2 = (*(int *)&gen_args[0]);
  pvVar5 = ((undefined *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x18) + (uint)*(ushort *)((*(int *)&gen_args[0]) + 0x1e) * (*(int *)&gen_args[1]) * 4)));
  *(short *)((*(int *)&gen_args[0]) + 0x20) = *(short *)((*(int *)&gen_args[0]) + 0x20) + (short)(*(uint *)&gen_args[2]);
  iVar4 = *(ushort *)((*(int *)&gen_args[0]) + 0x1e) + (*(uint *)&gen_args[2]);
  iVar1 = (*(int *)&gen_args[1]) * 4;
  uVar3 = (ushort)iVar4;
  *(ushort *)((*(int *)&gen_args[0]) + 0x1e) = uVar3;
  if (uVar3 < 0x2000) {
    pvVar5 = F_00c48350(pvVar5,0,((*(uint *)&gen_args[2]) & 0xffff) * iVar1);
    return (uint)pvVar5;
  }
  uVar6 = iVar4 - 0x2000;
  uVar7 = uVar6 & 0xffff;
  F_00c48350(pvVar5,0,(((*(uint *)&gen_args[2]) & 0xffff) - uVar7) * iVar1);
  pvVar5 = F_00c48350(*(undefined * PTR32 *)((*(int *)&gen_args[0]) + 0x18),0,uVar7 * iVar1);
  (*(undefined2 *)((char *)&(*(int *)&gen_args[0]) + 0)) = (undefined2)uVar6;
  *(undefined2 *)(iVar2 + 0x1e) = (undefined2)(*(int *)&gen_args[0]);
  return CONCAT22((short)((uint)((int)(uintptr_t)pvVar5) >> 0x10),(undefined2)(*(int *)&gen_args[0]));
}

/* ref: FUN_00ce7b10 */
GEN_FRAME uint F_00ce7b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce7b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  ushort uVar1;
  int iVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  gen_size32 sVar6;
  
  pvVar3 = ((undefined *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x24) + (uint)*(ushort *)((*(int *)&gen_args[0]) + 0x28) * (*(int *)&gen_args[2]) * 4)));
  *(short *)((*(int *)&gen_args[0]) + 0x2c) = *(short *)((*(int *)&gen_args[0]) + 0x2c) - (short)(*(uint *)&gen_args[3]);
  iVar2 = *(ushort *)((*(int *)&gen_args[0]) + 0x28) + (*(uint *)&gen_args[3]);
  uVar1 = (ushort)iVar2;
  *(ushort *)((*(int *)&gen_args[0]) + 0x28) = uVar1;
  if (uVar1 < 0x2000) {
    sVar6 = ((*(uint *)&gen_args[3]) & 0xffff) * (*(int *)&gen_args[2]) * 4;
    F_00c46aa0((*(int *)&gen_args[1]),pvVar3,sVar6);
    pvVar3 = F_00c48350(pvVar3,0,sVar6);
    return (uint)pvVar3;
  }
  uVar4 = iVar2 - 0x2000;
  uVar5 = uVar4 & 0xffff;
  iVar2 = ((*(uint *)&gen_args[3]) & 0xffff) - uVar5;
  sVar6 = iVar2 * (*(int *)&gen_args[2]) * 4;
  F_00c46aa0((*(int *)&gen_args[1]),pvVar3,sVar6);
  F_00c48350(pvVar3,0,sVar6);
  sVar6 = uVar5 * (*(int *)&gen_args[2]) * 4;
  F_00c46aa0((*(int *)&gen_args[1]) + iVar2 * (*(int *)&gen_args[2]) * 4,*(undefined4 *)((*(int *)&gen_args[0]) + 0x24),sVar6)
  ;
  pvVar3 = F_00c48350(*(undefined * PTR32 *)((*(int *)&gen_args[0]) + 0x24),0,sVar6);
  (*(undefined2 *)((char *)&(*(uint *)&gen_args[3]) + 0)) = (undefined2)uVar4;
  *(undefined2 *)((*(int *)&gen_args[0]) + 0x28) = (undefined2)(*(uint *)&gen_args[3]);
  return (uint)pvVar3;
}

/* ref: FUN_00ce7be0 */
GEN_FRAME uint F_00ce7be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce7be0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float fVar1;
  uint uVar2;
  float * pfVar3;
  float * pfVar4;
  uint uVar5;
  float * pfVar6;
  float * pfVar7;
  float * pfVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  short sVar12;
  short sVar13;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0xe);
  uVar5 = (uint)*(ushort *)(param_1 + 0x10);
  pfVar4 = ((float *)GEN_TOP((*(int *)(param_1 + 0x24) + (uint)*(ushort *)(param_1 + 0x2a) * param_2 * 4)));
  pfVar8 = *(float * PTR32 *)(param_1 + 8);
  pfVar7 = ((float *)GEN_TOP((*(int *)(param_1 + 0x18) + (uint)*(ushort *)(param_1 + 0x1c) * param_2 * 4)));
  sVar12 = *(short *)(param_1 + 0x1c);
  sVar13 = *(short *)(param_1 + 0x2a);
  for (uVar9 = (uint)*(ushort *)(param_1 + 0xc); uVar9 != 0; uVar9 = uVar9 - 1) {
    iVar10 = 0;
    if (3 < param_2) {
      iVar11 = (param_2 - 4U >> 2) + 1;
      iVar10 = iVar11 * 4;
      pfVar3 = pfVar4;
      pfVar6 = pfVar7;
      do {
        pfVar4 = pfVar3 + 4;
        pfVar7 = pfVar6 + 4;
        iVar11 = iVar11 - 1;
        *pfVar3 = (float)((float10)*pfVar8 * (float10)*pfVar6 + (float10)*pfVar3);
        pfVar3[1] = (float)((float10)pfVar6[1] * (float10)*pfVar8 + (float10)pfVar3[1]);
        pfVar3[2] = (float)((float10)pfVar6[2] * (float10)*pfVar8 + (float10)pfVar3[2]);
        pfVar3[3] = (float)((float10)pfVar6[3] * (float10)*pfVar8 + (float10)pfVar3[3]);
        pfVar3 = pfVar4;
        pfVar6 = pfVar7;
      } while (iVar11 != 0);
    }
    if (iVar10 < param_2) {
      iVar10 = param_2 - iVar10;
      pfVar3 = pfVar4;
      do {
        pfVar4 = pfVar3 + 1;
        fVar1 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        iVar10 = iVar10 - 1;
        *pfVar3 = (float)((float10)*pfVar8 * (float10)fVar1 + (float10)*pfVar3);
        pfVar3 = pfVar4;
      } while (iVar10 != 0);
    }
    sVar12 = sVar12 + 1;
    pfVar8 = pfVar8 + 1;
    if (sVar12 == 0x2000) {
      pfVar7 = *(float * PTR32 *)(param_1 + 0x18);
      sVar12 = 0;
    }
    sVar13 = sVar13 + 1;
    if (sVar13 == 0x2000) {
      pfVar4 = *(float * PTR32 *)(param_1 + 0x24);
      sVar13 = 0;
    }
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    iVar10 = 0;
    if (3 < param_2) {
      iVar11 = (param_2 - 4U >> 2) + 1;
      iVar10 = iVar11 * 4;
      pfVar3 = pfVar4;
      pfVar6 = pfVar7;
      do {
        pfVar4 = pfVar3 + 4;
        pfVar7 = pfVar6 + 4;
        iVar11 = iVar11 - 1;
        *pfVar3 = (float)((float10)*pfVar3 + (float10)*pfVar6);
        pfVar3[1] = (float)((float10)pfVar6[1] + (float10)pfVar3[1]);
        pfVar3[2] = (float)((float10)pfVar6[2] + (float10)pfVar3[2]);
        pfVar3[3] = (float)((float10)pfVar6[3] + (float10)pfVar3[3]);
        pfVar3 = pfVar4;
        pfVar6 = pfVar7;
      } while (iVar11 != 0);
    }
    if (iVar10 < param_2) {
      iVar10 = param_2 - iVar10;
      pfVar3 = pfVar4;
      do {
        pfVar4 = pfVar3 + 1;
        fVar1 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        iVar10 = iVar10 - 1;
        *pfVar3 = (float)((float10)*pfVar3 + (float10)fVar1);
        pfVar3 = pfVar4;
      } while (iVar10 != 0);
    }
    sVar12 = sVar12 + 1;
    if (sVar12 == 0x2000) {
      pfVar7 = *(float * PTR32 *)(param_1 + 0x18);
      sVar12 = 0;
    }
    sVar13 = sVar13 + 1;
    if (sVar13 == 0x2000) {
      pfVar4 = *(float * PTR32 *)(param_1 + 0x24);
      sVar13 = 0;
    }
  }
  for (; uVar5 != 0; uVar5 = uVar5 - 1) {
    iVar10 = 0;
    if (3 < param_2) {
      iVar11 = (param_2 - 4U >> 2) + 1;
      iVar10 = iVar11 * 4;
      pfVar3 = pfVar4;
      pfVar6 = pfVar7;
      do {
        pfVar4 = pfVar3 + 4;
        pfVar7 = pfVar6 + 4;
        iVar11 = iVar11 - 1;
        *pfVar3 = (float)((float10)*pfVar8 * (float10)*pfVar6 + (float10)*pfVar3);
        pfVar3[1] = (float)((float10)pfVar6[1] * (float10)*pfVar8 + (float10)pfVar3[1]);
        pfVar3[2] = (float)((float10)pfVar6[2] * (float10)*pfVar8 + (float10)pfVar3[2]);
        pfVar3[3] = (float)((float10)pfVar6[3] * (float10)*pfVar8 + (float10)pfVar3[3]);
        pfVar3 = pfVar4;
        pfVar6 = pfVar7;
      } while (iVar11 != 0);
    }
    if (iVar10 < param_2) {
      iVar10 = param_2 - iVar10;
      pfVar3 = pfVar4;
      do {
        pfVar4 = pfVar3 + 1;
        fVar1 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        iVar10 = iVar10 - 1;
        *pfVar3 = (float)((float10)*pfVar8 * (float10)fVar1 + (float10)*pfVar3);
        pfVar3 = pfVar4;
      } while (iVar10 != 0);
    }
    sVar12 = sVar12 + 1;
    pfVar8 = pfVar8 + 1;
    if (sVar12 == 0x2000) {
      pfVar7 = *(float * PTR32 *)(param_1 + 0x18);
      sVar12 = 0;
    }
    sVar13 = sVar13 + 1;
    if (sVar13 == 0x2000) {
      pfVar4 = *(float * PTR32 *)(param_1 + 0x24);
      sVar13 = 0;
    }
  }
  *(short *)(param_1 + 0x2a) = *(short *)(param_1 + 0x2a) + *(short *)(param_1 + 4);
  *(short *)(param_1 + 0x2c) = *(short *)(param_1 + 0x2c) + *(short *)(param_1 + 4);
  *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + *(short *)(param_1 + 2);
  *(short *)(param_1 + 0x20) = *(short *)(param_1 + 0x20) - *(short *)(param_1 + 2);
  if (0x1fff < *(ushort *)(param_1 + 0x2a)) {
    *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) + 0xe000;
  }
  if (0x1fff < *(ushort *)(param_1 + 0x1c)) {
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) + 0xe000;
  }
  return 0x2000;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOGranularSynthesizer::vf14 */
GEN_FRAME uint GEN_THISCALL F_00ce7ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce7ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x113003c));
  if (*(int *)(this + 0x60) != 0) {
    F_00406810(*(int *)(this + 0x60));
  }
  if (*(int *)(this + 0x6c) != 0) {
    F_00406810(*(int *)(this + 0x6c));
  }
  if (*(int *)(this + 0x50) != 0) {
    F_00406810(*(int *)(this + 0x50));
  }
  F_00cf3b1e(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CompressorBase::vf3 */
GEN_FRAME uint GEN_THISCALL F_00ce7f00(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce7f00u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  code * pcVar2;
  
  switch((unsigned int)(uintptr_t)(param_3)) {
  case 0: ;
    pcVar2 = *(gen_code32 *)(*param_1 + 0x28);
    break;
  case 1: ;
    pcVar2 = *(gen_code32 *)(*param_1 + 0x30);
    break;
  case 2: ;
    pcVar2 = *(gen_code32 *)(*param_1 + 0x34);
    break;
  case 3: ;
    pcVar2 = *(gen_code32 *)(*param_1 + 0x3c);
    break;
  case 4: ;
    pcVar2 = *(gen_code32 *)(*param_1 + 0x40);
    break;
  default: ;
    goto switchD_00ce7f0e_default;
  }
  (*pcVar2)(param_1,(undefined4)gen_fl2bits(param_2),param_4);
switchD_00ce7f0e_default: ;
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x24))(param_1 GEN_EDX_FWD);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CompressorBase::vf4 */
GEN_FRAME uint GEN_THISCALL F_00ce7f70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce7f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pCVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  pCVar1 = this + 4;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 0xc))))(pCVar1);
  bVar3 = (char)uVar2 != '\0';
  if (bVar3) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)pCVar1 + 8))(pCVar1 GEN_EDX_ARG,param_1);
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x28) + 0xc))))(this + 0x28 GEN_EDX_ARG);
  bVar4 = (char)uVar2 != '\0';
  if (bVar4) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x28) + 8))))(this + 0x28 GEN_EDX_ARG,param_1);
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x4c) + 0xc))))(this + 0x4c GEN_EDX_ARG);
  bVar5 = (char)uVar2 != '\0';
  if (bVar5) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x4c) + 8))))(this + 0x4c GEN_EDX_ARG,param_1);
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x70) + 0xc))))(this + 0x70 GEN_EDX_ARG);
  bVar6 = (char)uVar2 != '\0';
  if (bVar6) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x70) + 8))))(this + 0x70 GEN_EDX_ARG,param_1);
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x94) + 0xc))))(this + 0x94 GEN_EDX_ARG);
  if ((char)uVar2 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x94) + 8))))(this + 0x94 GEN_EDX_ARG,param_1);
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG);
    return uVar2;
  }
  if (bVar6 || (bVar5 || (bVar4 || bVar3))) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG);
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CompressorBase::vf10 */
GEN_FRAME uint GEN_THISCALL F_00ce8050(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce8050u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  int in_ecx;
  float fVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  float10 extraout_ST0;
  float10 fVar5;
  double dVar6;
  
  in_ecx = param_1 + 4;
  fVar1 = ((float)GEN_TOF((((float10)1 - (float10)param_2) * (float10)*(double *)&REFG(undefined, 0x1130088))));
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))))(in_ecx); dVar6 = extraout_ST0;
  fVar5 = (float10)fVar1;
  bVar3 = GEN_ISNAN(fVar5) || GEN_ISNAN(extraout_ST0);
  bVar4 = bVar3 || fVar5 == extraout_ST0;
  if (bVar3 != bVar4) {
    return CONCAT22((short)((ulonglong)gen_d2bits(dVar6) >> 0x10),
                    (ushort)!(extraout_ST0 <= fVar5) << 8 | (ushort)bVar3 << 10 |
                    (ushort)bVar4 << 0xe);
  }
  if (param_3 != 0) {
    uVar2 = F_00cccd90(in_ecx GEN_EDX_FWD,fVar1,param_3);
    return uVar2;
  }
  F_00cccbd0(in_ecx GEN_EDX_ARG,fVar1);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CompressorBase::vf11 */
GEN_FRAME uint GEN_THISCALL F_00ce80b0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce80b0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  int in_ecx;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 extraout_ST0;
  float10 fVar4;
  double dVar5;
  
  in_ecx = param_1 + 4;
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 4) + 0x10))))(in_ecx); dVar5 = extraout_ST0;
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

/* ref: SQEX::CDev::Engine::Sd::Driver::CompressorBase::vf12 */
GEN_FRAME uint GEN_THISCALL F_00ce8100(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce8100u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  int in_ecx;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 extraout_ST0;
  float10 fVar4;
  double dVar5;
  
  in_ecx = param_1 + 0x28;
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x28) + 0x10))))(in_ecx); dVar5 = extraout_ST0;
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

/* ref: SQEX::CDev::Engine::Sd::Driver::CompressorBase::vf13 */
GEN_FRAME uint GEN_THISCALL F_00ce8150(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce8150u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  int in_ecx;
  float fVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  float10 extraout_ST0;
  float10 fVar5;
  double dVar6;
  
  in_ecx = param_1 + 0x4c;
  fVar1 = (float)((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x10943d8) -
                 (float10)*(double *)&REFG(undefined, 0x1094568));
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x4c) + 0x10))))(in_ecx); dVar6 = extraout_ST0;
  fVar5 = (float10)fVar1;
  bVar3 = GEN_ISNAN(fVar5) || GEN_ISNAN(extraout_ST0);
  bVar4 = bVar3 || fVar5 == extraout_ST0;
  if (bVar3 != bVar4) {
    return CONCAT22((short)((ulonglong)gen_d2bits(dVar6) >> 0x10),
                    (ushort)!(extraout_ST0 <= fVar5) << 8 | (ushort)bVar3 << 10 |
                    (ushort)bVar4 << 0xe);
  }
  if (param_3 != 0) {
    uVar2 = F_00cccd90(in_ecx GEN_EDX_FWD,fVar1,param_3);
    return uVar2;
  }
  F_00cccbd0(in_ecx GEN_EDX_ARG,fVar1);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CompressorBase::vf14 */
GEN_FRAME uint GEN_THISCALL F_00ce81c0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce81c0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  int in_ecx;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 extraout_ST0;
  float10 fVar4;
  double dVar5;
  
  in_ecx = param_1 + 0x4c;
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x4c) + 0x10))))(in_ecx); dVar5 = extraout_ST0;
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

/* ref: SQEX::CDev::Engine::Sd::Driver::CompressorBase::vf15 */
GEN_FRAME uint GEN_THISCALL F_00ce8210(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce8210u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  float fVar1;
  uint uVar3;
  int in_ecx;
  bool bVar4;
  bool bVar5;
  float10 fVar6;
  float10 extraout_ST0;
  float10 fVar7;
  double dVar8;
  
  fVar7 = (float10)0;
  fVar6 = (float10)param_2;
  if (!(fVar7 <= fVar6) == ((GEN_ISNAN(fVar6) || GEN_ISNAN(fVar7)) || fVar6 == fVar7)) {
    fVar7 = ((float10)GEN_TOD(GEN_X87MATH( (float10)((float)GEN_TOF(((float10)*(double *)&REFG(undefined, 0x10944c0) / (fVar6 * (float10)*(float *)(param_1 + 0xb8))))),1)));
    fVar7 = (float10)(float)fVar7;
  }
  fVar1 = (float)fVar7;
  in_ecx = param_1 + 0x70;
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x70) + 0x10))))(in_ecx); dVar8 = extraout_ST0;
  fVar7 = (float10)fVar1;
  bVar4 = GEN_ISNAN(fVar7) || GEN_ISNAN(extraout_ST0);
  bVar5 = bVar4 || fVar7 == extraout_ST0;
  if (bVar4 != bVar5) {
    return CONCAT22((short)((ulonglong)gen_d2bits(dVar8) >> 0x10),
                    (ushort)!(extraout_ST0 <= fVar7) << 8 | (ushort)bVar4 << 10 |
                    (ushort)bVar5 << 0xe);
  }
  if (param_3 == 0) {
    F_00cccbd0(in_ecx GEN_EDX_FWD,fVar1);
    return 0;
  }
  uVar3 = F_00cccd90(in_ecx GEN_EDX_ARG,fVar1,param_3);
  return uVar3;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::CompressorBase::vf16 */
GEN_FRAME uint GEN_THISCALL F_00ce82a0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce82a0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  float fVar1;
  uint uVar3;
  int in_ecx;
  bool bVar4;
  bool bVar5;
  float10 fVar6;
  float10 extraout_ST0;
  float10 fVar7;
  double dVar8;
  
  fVar7 = (float10)0;
  fVar6 = (float10)param_2;
  if (!(fVar7 <= fVar6) == ((GEN_ISNAN(fVar6) || GEN_ISNAN(fVar7)) || fVar6 == fVar7)) {
    fVar7 = ((float10)GEN_TOD(GEN_X87MATH( (float10)((float)GEN_TOF(((float10)REFG(double, 0x1094890) / (fVar6 * (float10)*(float *)(param_1 + 0xb8))))),1)));
    fVar7 = (float10)(float)fVar7;
  }
  fVar1 = (float)fVar7;
  in_ecx = param_1 + 0x94;
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x94) + 0x10))))(in_ecx); dVar8 = extraout_ST0;
  fVar7 = (float10)fVar1;
  bVar4 = GEN_ISNAN(fVar7) || GEN_ISNAN(extraout_ST0);
  bVar5 = bVar4 || fVar7 == extraout_ST0;
  if (bVar4 != bVar5) {
    return CONCAT22((short)((ulonglong)gen_d2bits(dVar8) >> 0x10),
                    (ushort)!(extraout_ST0 <= fVar7) << 8 | (ushort)bVar4 << 10 |
                    (ushort)bVar5 << 0xe);
  }
  if (param_3 == 0) {
    F_00cccbd0(in_ecx GEN_EDX_FWD,fVar1);
    return 0;
  }
  uVar3 = F_00cccd90(in_ecx GEN_EDX_ARG,fVar1,param_3);
  return uVar3;
}

/* ref: FUN_00ce8330 */
GEN_FRAME uint GEN_THISCALL F_00ce8330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce8330u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  bool bVar3;
  float10 extraout_ST0;
  float10 fVar4;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 fVar5;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  
  fVar1 = REFG(float, 0x10adba0);
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x112c1c4));
  F_00cccb10(param_1 + 1 GEN_EDX_FWD,fVar1);
  F_00cccb10(param_1 + 10 GEN_EDX_ARG,(float)(float10)0);
  F_00cccb10(param_1 + 0x13 GEN_EDX_ARG,(float)(float10)0);
  F_00cccb10(param_1 + 0x1c GEN_EDX_ARG,(float)(float10)0);
  F_00cccb10(param_1 + 0x25 GEN_EDX_ARG,(float)(float10)0);
  param_1[0x2e] = (undefined4)gen_fl2bits((float)(float10)1);
  if (param_2 != 0) {
    fVar1 = *(float *)(param_2 + 0x10);
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(param_1[1] + 0x10))(param_1 + 1);
    fVar4 = (float10)fVar1;
    bVar3 = GEN_ISNAN(fVar4) || GEN_ISNAN(extraout_ST0);
    if (bVar3 == (bVar3 || fVar4 == extraout_ST0)) {
      F_00cccbd0(param_1 + 1 GEN_EDX_ARG,fVar1);
    }
    fVar1 = *(float *)(param_2 + 0x14);
    extraout_ST0_00 = ((gen_fcode *)*(gen_code32 *)(param_1[10] + 0x10))(param_1 + 10);
    fVar4 = (float10)fVar1;
    bVar3 = GEN_ISNAN(fVar4) || GEN_ISNAN(extraout_ST0_00);
    if (bVar3 == (bVar3 || fVar4 == extraout_ST0_00)) {
      F_00cccbd0(param_1 + 10 GEN_EDX_ARG,fVar1);
    }
    fVar1 = *(float *)(param_2 + 0x18);
    extraout_ST0_01 = ((gen_fcode *)*(gen_code32 *)(param_1[0x13] + 0x10))(param_1 + 0x13);
    fVar4 = (float10)fVar1;
    bVar3 = GEN_ISNAN(fVar4) || GEN_ISNAN(extraout_ST0_01);
    if (bVar3 == (bVar3 || fVar4 == extraout_ST0_01)) {
      F_00cccbd0(param_1 + 0x13 GEN_EDX_ARG,fVar1);
    }
    fVar4 = (float10)0;
    fVar5 = (float10)*(float *)(param_2 + 0x1c);
    if (!(fVar4 <= fVar5) == ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4)) || fVar5 == fVar4)) {
      fVar4 = ((float10)GEN_TOD(GEN_X87MATH( (float10)((float)GEN_TOF(((float10)*(double *)&REFG(undefined, 0x10944c0) / (fVar5 * ((float10)GEN_TOD(gen_bits2f(param_1[0x2e]))))))),1)));
      fVar4 = (float10)(float)fVar4;
    }
    extraout_ST0_02 = ((gen_fcode *)*(gen_code32 *)(param_1[0x1c] + 0x10))(param_1 + 0x1c);
    fVar5 = (float10)(float)fVar4;
    bVar3 = GEN_ISNAN(fVar5) || GEN_ISNAN(extraout_ST0_02);
    if (bVar3 == (bVar3 || fVar5 == extraout_ST0_02)) {
      F_00cccbd0(param_1 + 0x1c GEN_EDX_ARG,(float)fVar4);
    }
    fVar4 = (float10)0;
    fVar5 = (float10)*(float *)(param_2 + 0x20);
    if (!(fVar4 <= fVar5) == ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4)) || fVar5 == fVar4)) {
      fVar4 = ((float10)GEN_TOD(GEN_X87MATH( (float10)((float)GEN_TOF(((float10)REFG(double, 0x1094890) / (fVar5 * ((float10)GEN_TOD(gen_bits2f(param_1[0x2e]))))))),1)));
      fVar4 = (float10)(float)fVar4;
    }
    extraout_ST0_03 = ((gen_fcode *)*(gen_code32 *)(param_1[0x25] + 0x10))(param_1 + 0x25);
    fVar5 = (float10)(float)fVar4;
    bVar3 = GEN_ISNAN(fVar5) || GEN_ISNAN(extraout_ST0_03);
    if (bVar3 == (bVar3 || fVar5 == extraout_ST0_03)) {
      F_00cccbd0(param_1 + 0x25 GEN_EDX_ARG,(float)fVar4);
      return (uint)param_1;
    }
  }
  return (uint)param_1;
}

/* ref: FUN_00ce8520 */
GEN_NOFRAME uint GEN_THISCALL F_00ce8520(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce8520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 * puVar2;
  
  F_00cf53e0(this GEN_EDX_FWD,&REFG(undefined, 0x134eee0),(int)this + 100,0x14,0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x1130144));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[5])REFP(0x1130128));
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x20,"CDev.Engine.Sd",0,0,0x10)));
  uVar1 = *(undefined4 *)&REFG(undefined, 0x113009c);
  *(undefined4 * PTR32 *)((int)this + 0xa0) = puVar2;
  *puVar2 = uVar1;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa0) + 4))) = uVar1;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa0) + 8))) = uVar1;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa0) + 0xc))) = uVar1;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa0) + 0x10))) = uVar1;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa0) + 0x14))) = uVar1;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa0) + 0x18))) = uVar1;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa0) + 0x1c))) = uVar1;
  return (uint)this;
}

/* ref: FUN_00ce85d0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00ce85d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce85d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x1130144));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[5])REFP(0x1130128));
  if (*(int *)((int)this + 0xa0) != 0) {
    F_00406810(*(int *)((int)this + 0xa0));
  }
  F_00cf3c40(this GEN_EDX_ARG);
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOCompressor::vf8 */
GEN_FRAME uint GEN_STDCALL F_00ce8600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xce8600u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)*param_3;
  *(undefined4 *)(param_1 + 0x40) = *puVar1;
  *(undefined4 *)(param_1 + 0x44) = puVar1[1];
  *(undefined4 *)(param_1 + 0x48) = puVar1[2];
  *(undefined4 *)(param_1 + 0x4c) = puVar1[3];
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(puVar1 + 4);
  puVar1 = (undefined4 *)*param_5;
  *(undefined4 *)(param_1 + 0x52) = *puVar1;
  *(undefined4 *)(param_1 + 0x56) = puVar1[1];
  *(undefined4 *)(param_1 + 0x5a) = puVar1[2];
  *(undefined4 *)(param_1 + 0x5e) = puVar1[3];
  *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(puVar1 + 4);
  uVar2 = F_00cf4b89(param_1,param_2,param_3,param_4,param_5);
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOCompressor::vf10 */
GEN_FRAME unsigned int GEN_STDCALL F_00ce8670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xce8670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  uint param_6 = (uint)gen_a5;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar8;
  float * pfVar9;
  float * pfVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  int local_18;
  float local_c;
  int local_8;
  
  if (param_3[1] != 1) {
    param_5[1] = 0;
    return;
  }
  local_8 = *param_3;
  if (param_6 == 0) {
    F_00c46aa0(*param_5,local_8,(uint)*(ushort *)((int)param_1 + 0x5e) * param_3[2]);
    param_5[2] = param_3[2];
    param_5[1] = param_3[1];
    return;
  }
  local_18 = param_3[2];
  uVar11 = (uint)*(ushort *)((int)param_1 + 0x54);
  iVar13 = *param_5;
  pfVar9 = (float *)F_00cf3d40(param_1 GEN_EDX_ARG);
  fVar1 = pfVar9[2];
  fVar2 = pfVar9[1];
  fVar3 = *pfVar9;
  fVar4 = pfVar9[3];
  fVar5 = pfVar9[4];
  if (0 < local_18) {
    do {
      fVar14 = (float10)*(double *)&REFG(undefined, 0x1130198);
      iVar12 = 0;
      local_c = (float)(float10)0;
      if (uVar11 != 0) {
        dVar8 = (double)fVar2 - REFG(double, 0x1088130);
        do {
          fVar14 = ((float10)GEN_TOD(GEN_X87MATH( (float10)((float)GEN_TOF((fVar14 + (float10)((float)GEN_TOF(ABS((float10)*(float *)(local_8 + iVar12 * 4))))))),2)));
          param_6 = (uint)gen_fl2bits(((float)GEN_TOF(((float10)(float)((float10)(float)fVar14 *
                                                              (float10)*(double *)&REFG(undefined, 0x1130188)) -
                                             (float10)fVar3))));
          fVar15 = (float10)0;
          fVar14 = ((float10)GEN_TOD(gen_bits2f(param_6)));
          if (fVar14 <= fVar15 && ((!GEN_ISNAN(fVar15) && !GEN_ISNAN(fVar14)) && fVar15 != fVar14)) {
            param_6 = (uint)gen_fl2bits((float)fVar15);
          }
          fVar14 = (float10)*(double *)&REFG(undefined, 0x1130198);
          fVar15 = (float10)(float)(((float10)GEN_TOD(gen_bits2f(param_6))) + fVar14);
          fVar16 = (float10)*((float *)GEN_TOP((*(int *)((int)param_1 + 0xa0) + iVar12 * 4)));
          if (!(fVar15 <= fVar16) == (GEN_ISNAN(fVar16) || GEN_ISNAN(fVar15))) {
            pfVar9 = ((float *)GEN_TOP((*(int *)((int)param_1 + 0xa0) + iVar12 * 4)));
            fVar16 = ((float10)*((float *)GEN_TOP((*(int *)((int)param_1 + 0xa0) + iVar12 * 4))) - fVar15) *
                     (float10)fVar5;
          }
          else {
            pfVar9 = ((float *)GEN_TOP((*(int *)((int)param_1 + 0xa0) + iVar12 * 4)));
            fVar16 = ((float10)*((float *)GEN_TOP((*(int *)((int)param_1 + 0xa0) + iVar12 * 4))) - fVar15) *
                     (float10)fVar4;
          }
          *pfVar9 = (float)(fVar16 + fVar15);
          fVar6 = ((float)GEN_TOF((((float10)*((float *)GEN_TOP((*(int *)((int)param_1 + 0xa0) + iVar12 * 4))) - fVar14)
                         * (float10)dVar8)));
          if (iVar12 == 3) {
            fVar14 = ((float10)GEN_TOD(GEN_X87MATH( (float10)((float)GEN_TOF(((float10)(float)((float10)fVar6 + (float10)fVar1) * (float10)*(double *)&REFG(undefined, 0x1130190)))),1)));
            *(float *)(iVar13 + 0xc) =
                 ((float)GEN_TOF(((float10)(float)fVar14 * (float10)*(float *)(local_8 + 0xc))));
            fVar14 = (float10)*(double *)&REFG(undefined, 0x1130198);
          }
          else if (!((float10)local_c <= (float10)fVar6) !=
                   (GEN_ISNAN((float10)fVar6) || GEN_ISNAN((float10)local_c))) {
            local_c = fVar6;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < (int)uVar11);
      }
      fVar14 = ((float10)GEN_TOD(GEN_X87MATH( (float10)((float)GEN_TOF(((float10)(float)((float10)local_c + (float10)fVar1) * (float10)*(double *)&REFG(undefined, 0x1130190)))),1)));
      iVar12 = 0;
      fVar14 = (float10)(float)fVar14;
      if (3 < uVar11) {
        pfVar9 = (float *)(iVar13 + 4);
        pfVar10 = (float *)(local_8 + 0xc);
        do {
          if (iVar12 != 3) {
            pfVar9[-1] = (float)((float10)pfVar10[-3] * fVar14);
          }
          if (iVar12 != 2) {
            *pfVar9 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((local_8 - iVar13) + (int)pfVar9))) * fVar14)));
          }
          if (iVar12 != 1) {
            pfVar9[1] = (float)((float10)pfVar10[-1] * fVar14);
          }
          if (iVar12 != 0) {
            pfVar9[2] = (float)((float10)*pfVar10 * fVar14);
          }
          iVar12 = iVar12 + 4;
          pfVar9 = pfVar9 + 4;
          pfVar10 = pfVar10 + 4;
        } while (iVar12 < (int)(uVar11 - 3));
      }
      if (iVar12 < (int)uVar11) {
        pfVar9 = (float *)(iVar13 + iVar12 * 4);
        do {
          if (iVar12 != 3) {
            *pfVar9 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((local_8 - iVar13) + (int)pfVar9))) * fVar14)));
          }
          iVar12 = iVar12 + 1;
          pfVar9 = pfVar9 + 1;
        } while (iVar12 < (int)uVar11);
      }
      local_8 = local_8 + uVar11 * 4;
      iVar13 = iVar13 + uVar11 * 4;
      local_18 = local_18 - 1;
    } while (local_18 != 0);
  }
  F_00cf3d90(param_1 GEN_EDX_ARG);
  param_5[2] = param_3[2];
  param_5[1] = param_3[1];
  return;
}

/* ref: FUN_00ce8930 */
GEN_FRAME float10 GEN_STDCALL F_00ce8930(float gen_a0)
{
  GEN_ENTER(0xce8930u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar2;
  
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)param_1,2)));
  return (float10)(float)((float10)(float)fVar2 * (float10)*(double *)&REFG(undefined, 0x1130188));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOCompressor::vf14 */
GEN_FRAME uint GEN_THISCALL F_00ce8990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce8990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x1130144));
  *(undefined * PTR32 * PTR32 *)(this + 0x20) = (*(undefined * PTR32 (*)[5])REFP(0x1130128));
  if (*(int *)(this + 0xa0) != 0) {
    F_00406810(*(int *)(this + 0xa0));
  }
  F_00cf3c40(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StringendoEffectBase::vf3 */
GEN_FRAME unsigned int GEN_THISCALL F_00ce89e0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xce89e0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  if (param_3 == 0) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x28))(param_1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2),param_4);
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x24))(param_1 GEN_EDX_ARG);
  }
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StringendoEffectBase::vf4 */
GEN_FRAME uint GEN_THISCALL F_00ce8a10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce8a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 0xc))))(this + 4 GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 4) + 8))))(this + 4 GEN_EDX_ARG,param_1);
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG);
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StringendoEffectBase::vf10 */
GEN_FRAME uint GEN_THISCALL F_00ce8a50(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce8a50u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  if (param_3 != 0) {
    uVar1 = F_00cccd90(param_1 + 4 GEN_EDX_FWD,param_2,param_3);
    return uVar1;
  }
  F_00cccbd0(param_1 + 4 GEN_EDX_ARG,param_2);
  return 0;
}

/* ref: FUN_00ce8a80 */
GEN_NOFRAME uint GEN_THISCALL F_00ce8a80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce8a80u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[11])REFP(0x112c27c));
  F_00cccb10(in_ecx + 1 GEN_EDX_FWD,(float)(float10)1);
  return (uint)in_ecx;
}

/* ref: FUN_00ce8aa0 */
GEN_NOFRAME uint GEN_THISCALL F_00ce8aa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce8aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00cf53e0(this GEN_EDX_FWD,&REFG(undefined, 0x134f368),(int)this + 100,4,0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x1130264));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[5])REFP(0x113024c));
  F_00c48350((undefined *)((int)this + 0x70),0,0x20000);
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOStringendoEffect::vf8 */
GEN_FRAME uint GEN_STDCALL F_00ce8b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xce8b00u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined2 uVar1;
  undefined4 * puVar2;
  float10 fVar3;
  uint uVar4;
  
  fVar3 = (float10)0;
  puVar2 = (undefined4 *)*param_3;
  *(undefined4 *)(param_1 + 0x40) = *puVar2;
  *(undefined4 *)(param_1 + 0x44) = puVar2[1];
  *(undefined4 *)(param_1 + 0x48) = puVar2[2];
  *(undefined4 *)(param_1 + 0x4c) = puVar2[3];
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(puVar2 + 4);
  puVar2 = (undefined4 *)*param_5;
  *(undefined4 *)(param_1 + 0x52) = *puVar2;
  *(undefined4 *)(param_1 + 0x56) = puVar2[1];
  *(undefined4 *)(param_1 + 0x5a) = puVar2[2];
  *(undefined4 *)(param_1 + 0x5e) = puVar2[3];
  uVar1 = *(undefined2 *)(puVar2 + 4);
  *(float *)(param_1 + 0x20074) = (float)fVar3;
  *(float *)(param_1 + 0x2007c) = (float)fVar3;
  *(undefined2 *)(param_1 + 0x62) = uVar1;
  *(float *)(param_1 + 0x20078) = (float)fVar3;
  *(undefined4 *)(param_1 + 0x20070) = 0;
  uVar4 = F_00cf4b89(param_1,param_2,param_3,param_4,param_5);
  return uVar4;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOStringendoEffect::vf10 */
GEN_FRAME uint GEN_STDCALL F_00ce8b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xce8b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  uint param_6 = (uint)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  uint uVar6;
  float * pfVar7;
  float * pfVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  float * pfVar12;
  float * pfVar13;
  int iVar14;
  undefined4 * puVar15;
  bool bVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  
  uVar10 = param_1;
  if (param_3[1] != 1) {
    param_3 = (undefined4 *)param_3[2];
    fVar17 = (float10)0;
    *(float *)(param_1 + 0x20074) = (float)fVar17;
    uVar10 = (uint)*(ushort *)(param_1 + 0x54);
    if (0 < (int)param_3) {
      do {
        iVar9 = 0;
        if (3 < uVar10) {
          do {
            *((float *)GEN_TOP((param_1 + 0x70 + (*(int *)(param_1 + 0x20070) + iVar9) * 4))) = (float)fVar17;
            *((float *)GEN_TOP((param_1 + 0x74 + (*(int *)(param_1 + 0x20070) + iVar9) * 4))) = (float)fVar17;
            *((float *)GEN_TOP((param_1 + 0x78 + (*(int *)(param_1 + 0x20070) + iVar9) * 4))) = (float)fVar17;
            iVar14 = *(int *)(param_1 + 0x20070) + iVar9;
            iVar9 = iVar9 + 4;
            *(float *)(param_1 + 0x7c + iVar14 * 4) = (float)fVar17;
          } while (iVar9 < (int)(uVar10 - 3));
        }
        for (; iVar9 < (int)uVar10; iVar9 = iVar9 + 1) {
          *((float *)GEN_TOP((param_1 + 0x70 + (*(int *)(param_1 + 0x20070) + iVar9) * 4))) = (float)fVar17;
        }
        *(int *)(param_1 + 0x20070) = *(int *)(param_1 + 0x20070) + 8;
        if (*(int *)(param_1 + 0x20070) == 0x8000) {
          *(undefined4 *)(param_1 + 0x20070) = 0;
        }
        param_3 = (undefined4 *)((int)param_3 - 1);
      } while (param_3 != (undefined4 *)0x0);
    }
    param_5[1] = 0;
    return (uint)param_5;
  }
  pfVar8 = (float *)F_00cf3d40((undefined *)param_1 GEN_EDX_ARG);
  pfVar13 = (float *)*param_5;
  puVar15 = (undefined4 *)*param_3;
  if (param_6 != 0) {
    fVar17 = (float10)*pfVar8;
    bVar16 = GEN_ISNAN((float10)1) || GEN_ISNAN(fVar17);
    if (bVar16 != (bVar16 || (float10)1 == fVar17)) {
      fVar18 = (float10)REFG(float, 0x10920a4);
      fVar21 = (float10)*(float *)(param_1 + 0x20074);
      if (fVar21 <= fVar18 && ((!GEN_ISNAN(fVar18) && !GEN_ISNAN(fVar21)) && fVar18 != fVar21))
      goto LAB_00ce90ed;
    }
    (*(uint *)(gen_frame + 0x34)) = (uint)*(ushort *)(param_1 + 0x54);
    (*(float *)(gen_frame + 0x20)) = (float)((float10)1 - fVar17);
    if (0 < (int)param_3[2]) {
      (*(int *)(gen_frame + 0x1c)) = param_3[2];
      do {
        fVar21 = (float10)REFG(float, 0x1094808);
        fVar3 = ((float)GEN_TOF(((float10)*(float *)(uVar10 + 0x20074) + (float10)*(double *)&REFG(undefined, 0x11302a8))));
        fVar17 = (float10)fVar3;
        *(float *)(uVar10 + 0x20074) = fVar3;
        if (!(fVar17 <= (float10)1) != (GEN_ISNAN((float10)1) || GEN_ISNAN(fVar17))) {
          *(float *)(uVar10 + 0x20074) = (float)(fVar17 - (float10)REFG(double, 0x1088130));
        }
        fVar17 = (float10)*(float *)(uVar10 + 0x20074);
        if (!(fVar17 <= fVar21) || ((GEN_ISNAN(fVar21) || GEN_ISNAN(fVar17)) || fVar21 == fVar17)) {
          if (*(char *)(uVar10 + 0x20080) == '\0') goto LAB_00ce8c83;
        }
        else {
          *(undefined2 *)(uVar10 + 0x20080) = 0;
LAB_00ce8c83: ;
          if (!((float10)*(float *)(uVar10 + 0x20074) <= fVar21) !=
              (GEN_ISNAN(fVar21) || GEN_ISNAN((float10)*(float *)(uVar10 + 0x20074)))) {
            *(float *)(uVar10 + 0x20078) = (float)(float10)0;
            *(undefined1 *)(uVar10 + 0x20080) = 1;
          }
        }
        if ((*(char *)(uVar10 + 0x20081) == '\0') &&
           (!((float10)*(float *)(uVar10 + 0x20074) <= (float10)REFG(float, 0x1088138)) !=
            (GEN_ISNAN((float10)REFG(float, 0x1088138)) || GEN_ISNAN((float10)*(float *)(uVar10 + 0x20074))))) {
          *(float *)(uVar10 + 0x2007c) = (float)(float10)0;
          *(undefined1 *)(uVar10 + 0x20081) = 1;
        }
        fVar3 = ((float)GEN_TOF(((float10)*(float *)(uVar10 + 0x20078) + (float10)(*(float *)(gen_frame + 0x20)))));
        *(float *)(uVar10 + 0x20078) = fVar3;
        *(float *)(uVar10 + 0x2007c) =
             ((float)GEN_TOF(((float10)*(float *)(uVar10 + 0x2007c) + (float10)(*(float *)(gen_frame + 0x20)))));
        dVar5 = (double)fVar3;
        fVar17 = F_00c51c40((uint)(ulonglong)gen_d2bits(dVar5),
                              (int)((ulonglong)gen_d2bits(dVar5) >> 0x20),&(*(double *)(gen_frame + 0x8)));
        (*(int *)(gen_frame + 0x2c)) = *(int *)(uVar10 + 0x20070) + (int)(*(double *)(gen_frame + 0x8)) * -8;
        if ((*(int *)(gen_frame + 0x2c)) < 0) {
          (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) + 0x8000;
        }
        (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x2c)) - 8;
        if ((*(int *)(gen_frame + 0x2c)) - 8 < 0) {
          (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x2c)) + 0x7ff8;
        }
        fVar21 = F_00c51c40((uint)(ulonglong)gen_d2bits((double)*(float *)(uVar10 + 0x2007c)),
                              (int)((ulonglong)gen_d2bits((double)*(float *)(uVar10 + 0x2007c)) >>
                                   0x20),&(*(double *)(gen_frame + 0x0)));
        (*(float * PTR32 *)(gen_frame + 0x38)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar21)));
        (*(int *)(gen_frame + 0x24)) = *(int *)(uVar10 + 0x20070) + (int)(*(double *)(gen_frame + 0x0)) * -8;
        if ((*(int *)(gen_frame + 0x24)) < 0) {
          (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 0x8000;
        }
        (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)((*(int *)(gen_frame + 0x24)) - 8);
        if ((*(int *)(gen_frame + 0x24)) - 8 < 0) {
          (*(float * PTR32 *)(gen_frame + 0x28)) = (float *)((*(int *)(gen_frame + 0x24)) + 0x7ff8);
        }
        fVar19 = (float10)((float)GEN_TOF(((float10)*(float *)(uVar10 + 0x20074) -
                                 (float10)*(double *)&REFG(undefined, 0x1094878))));
        fVar18 = (float10)1;
        fVar3 = ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar18 - (float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF((fVar18 - 
                                                  (float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF((fVar18 - (
                                                  float10)((float)GEN_TOF(ABS((float10)(float)(fVar19 + 
                                                  fVar19))))))))))))))))))))));
        (*(float *)(gen_frame + 0x18)) = fVar3;
        fVar19 = (float10)((float)GEN_TOF(((float10)*(float *)(uVar10 + 0x20074) +
                                 (float10)*(double *)&REFG(undefined, 0x1094878))));
        fVar18 = (float10)1;
        iVar9 = 0;
        fVar17 = (float10)(float)fVar17;
        fVar21 = (float10)(float)fVar21;
        fVar20 = (float10)fVar3;
        fVar18 = (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar18 - (float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF((fVar18 - (float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF((
                                                  fVar18 - (float10)((float)GEN_TOF(ABS((float10)(float)(
                                                  fVar19 + fVar19))))))))))))))))))))));
        if (3 < (int)(*(uint *)(gen_frame + 0x34))) {
          param_6 = uVar10 + 0x74 + (*(int *)(gen_frame + 0x30)) * 4;
          fVar19 = (float10)1 - fVar21;
          param_1 = uVar10 + 0x74 + (*(int *)(gen_frame + 0x2c)) * 4;
          (*(float * PTR32 *)(gen_frame + 0x38)) = (float *)(uVar10 + 0x74 + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x28))) * 4);
          dVar5 = (double)((float10)1 - fVar17);
          (*(double *)(gen_frame + 0x10)) = dVar5;
          pfVar8 = (float *)(uVar10 + 0x74 + (*(int *)(gen_frame + 0x24)) * 4);
          pfVar12 = pfVar13;
          do {
            pfVar7 = (*(float * PTR32 *)(gen_frame + 0x38));
            *((undefined4 *)GEN_TOP((uVar10 + 0x70 + (*(int *)(uVar10 + 0x20070) + iVar9) * 4))) = *puVar15;
            fVar3 = ((float)GEN_TOF(((float10)*(float *)(param_1 - 4) * (float10)dVar5 +
                           (float10)*(float *)(param_6 - 4) * fVar17)));
            (*(float *)(gen_frame + 0x18)) = fVar3;
            fVar4 = (float)((float10)pfVar8[-1] * fVar19 + (float10)(*(float * PTR32 *)(gen_frame + 0x38))[-1] * fVar21);
            (*(float *)(gen_frame + 0x18)) = fVar4;
            *pfVar12 = (float)((float10)fVar4 * fVar20 + (float10)fVar3 * fVar18);
            *((undefined4 *)GEN_TOP((uVar10 + 0x74 + (*(int *)(uVar10 + 0x20070) + iVar9) * 4))) = puVar15[1];
            fVar3 = (float)((float10)*(float *)param_1 * (float10)dVar5 +
                           (float10)*(float *)param_6 * fVar17);
            (*(float *)(gen_frame + 0x18)) = fVar3;
            fVar4 = (float)((float10)*pfVar8 * fVar19 + (float10)*(*(float * PTR32 *)(gen_frame + 0x38)) * fVar21);
            (*(float *)(gen_frame + 0x18)) = fVar4;
            pfVar12[1] = (float)((float10)fVar4 * fVar20 + (float10)fVar3 * fVar18);
            *((undefined4 *)GEN_TOP((uVar10 + 0x78 + (*(int *)(uVar10 + 0x20070) + iVar9) * 4))) = puVar15[2];
            fVar3 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 4) * (float10)dVar5 +
                           (float10)*(float *)(param_6 + 4) * fVar17)));
            (*(float *)(gen_frame + 0x18)) = fVar3;
            fVar4 = (float)((float10)pfVar8[1] * fVar19 + (float10)(*(float * PTR32 *)(gen_frame + 0x38))[1] * fVar21);
            (*(float *)(gen_frame + 0x18)) = fVar4;
            pfVar12[2] = (float)((float10)fVar4 * fVar20 + (float10)fVar3 * fVar18);
            *((undefined4 *)GEN_TOP((uVar10 + 0x7c + (*(int *)(uVar10 + 0x20070) + iVar9) * 4))) = puVar15[3];
            pfVar1 = (float *)(param_6 + 8);
            pfVar2 = (float *)(param_1 + 8);
            param_1 = param_1 + 0x10;
            param_6 = param_6 + 0x10;
            (*(float * PTR32 *)(gen_frame + 0x38)) = (*(float * PTR32 *)(gen_frame + 0x38)) + 4;
            iVar9 = iVar9 + 4;
            pfVar13 = pfVar12 + 4;
            fVar3 = (float)((float10)*pfVar2 * (float10)dVar5 + (float10)*pfVar1 * fVar17);
            (*(float *)(gen_frame + 0x18)) = fVar3;
            puVar15 = puVar15 + 4;
            fVar4 = (float)((float10)pfVar8[2] * fVar19 + (float10)pfVar7[2] * fVar21);
            (*(float *)(gen_frame + 0x18)) = fVar4;
            pfVar12[3] = (float)((float10)fVar4 * fVar20 + (float10)fVar3 * fVar18);
            pfVar8 = pfVar8 + 4;
            pfVar12 = pfVar13;
          } while (iVar9 < (int)((*(uint *)(gen_frame + 0x34)) - 3));
        }
        if (iVar9 < (int)(*(uint *)(gen_frame + 0x34))) {
          param_1 = uVar10 + 0x70 + (iVar9 + (*(int *)(gen_frame + 0x2c))) * 4;
          dVar5 = (double)((float10)1 - fVar17);
          (*(double *)(gen_frame + 0x10)) = dVar5;
          (*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)GEN_TOP((uVar10 + 0x70 + (iVar9 + (int)(*(float * PTR32 *)(gen_frame + 0x28))) * 4)));
          pfVar8 = ((float *)GEN_TOP((uVar10 + 0x70 + (iVar9 + (*(int *)(gen_frame + 0x24))) * 4)));
          pfVar12 = pfVar13;
          param_6 = uVar10 + 0x70 + (iVar9 + (*(int *)(gen_frame + 0x30))) * 4;
          do {
            pfVar1 = (*(float * PTR32 *)(gen_frame + 0x28));
            *((undefined4 *)GEN_TOP((uVar10 + 0x70 + (*(int *)(uVar10 + 0x20070) + iVar9) * 4))) = *puVar15;
            fVar3 = *(float *)param_1;
            param_1 = param_1 + 4;
            iVar9 = iVar9 + 1;
            pfVar13 = pfVar12 + 1;
            puVar15 = puVar15 + 1;
            fVar3 = (float)((float10)fVar3 * (float10)dVar5 + fVar17 * (float10)*(float *)param_6);
            (*(float *)(gen_frame + 0x18)) = fVar3;
            (*(float * PTR32 *)(gen_frame + 0x28)) = (*(float * PTR32 *)(gen_frame + 0x28)) + 1;
            fVar4 = ((float)GEN_TOF(((float10)*pfVar8 * ((float10)1 - fVar21) + fVar21 * (float10)*pfVar1)));
            (*(float *)(gen_frame + 0x18)) = fVar4;
            *pfVar12 = (float)((float10)fVar4 * fVar20 + (float10)fVar3 * fVar18);
            pfVar8 = pfVar8 + 1;
            pfVar12 = pfVar13;
            param_6 = param_6 + 4;
          } while (iVar9 < (int)(*(uint *)(gen_frame + 0x34)));
        }
        *(int *)(uVar10 + 0x20070) = *(int *)(uVar10 + 0x20070) + 8;
        if (*(int *)(uVar10 + 0x20070) == 0x8000) {
          *(undefined4 *)(uVar10 + 0x20070) = 0;
        }
        iVar9 = (*(int *)(gen_frame + 0x1c)) - 1;
        (*(int *)(gen_frame + 0x1c)) = iVar9;
      } while (iVar9 != 0);
    }
    param_5[2] = param_3[2];
    param_5[1] = param_3[1];
    uVar10 = F_00cf3d90(uVar10 GEN_EDX_ARG);
    return uVar10;
  }
LAB_00ce90ed: ;
  F_00c46aa0(pfVar13,puVar15,(uint)*(ushort *)(param_1 + 0x5e) * param_3[2]);
  uVar6 = param_3[2];
  uVar11 = (uint)*(ushort *)(param_1 + 0x54);
  *(float *)(param_1 + 0x20074) = (float)(float10)0;
  param_1 = uVar6;
  if (0 < (int)uVar6) {
    do {
      iVar9 = 0;
      if (3 < uVar11) {
        do {
          *((undefined4 *)GEN_TOP((uVar10 + 0x70 + (*(int *)(uVar10 + 0x20070) + iVar9) * 4))) = *puVar15;
          *((undefined4 *)GEN_TOP((uVar10 + 0x74 + (*(int *)(uVar10 + 0x20070) + iVar9) * 4))) = puVar15[1];
          *((undefined4 *)GEN_TOP((uVar10 + 0x78 + (*(int *)(uVar10 + 0x20070) + iVar9) * 4))) = puVar15[2];
          iVar14 = *(int *)(uVar10 + 0x20070) + iVar9;
          iVar9 = iVar9 + 4;
          *(undefined4 *)(uVar10 + 0x7c + iVar14 * 4) = puVar15[3];
          puVar15 = puVar15 + 4;
        } while (iVar9 < (int)(uVar11 - 3));
      }
      for (; iVar9 < (int)uVar11; iVar9 = iVar9 + 1) {
        *((undefined4 *)GEN_TOP((uVar10 + 0x70 + (*(int *)(uVar10 + 0x20070) + iVar9) * 4))) = *puVar15;
        puVar15 = puVar15 + 1;
      }
      *(int *)(uVar10 + 0x20070) = *(int *)(uVar10 + 0x20070) + 8;
      if (*(int *)(uVar10 + 0x20070) == 0x8000) {
        *(undefined4 *)(uVar10 + 0x20070) = 0;
      }
      uVar6 = param_1 - 1;
      param_1 = uVar6;
    } while (uVar6 != 0);
  }
  param_5[2] = param_3[2];
  param_5[1] = param_3[1];
  uVar10 = F_00cf3d90(uVar10 GEN_EDX_ARG);
  return uVar10;
}

/* ref: FUN_00ce9280 */
GEN_FRAME float10 GEN_STDCALL F_00ce9280(float gen_a0)
{
  GEN_ENTER(0xce9280u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = (float10)1;
  return (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar1 - (float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF((fVar1 - 
                                                  (float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF((fVar1 - (
                                                  float10)((float)GEN_TOF(ABS((float10)(float)((float10)
                                                  param_1 + (float10)param_1))))))))))))))))))))));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::XA2::XAPOStringendoEffect::vf14 */
GEN_FRAME uint GEN_THISCALL F_00ce92e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce92e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x1130264));
  *(undefined * PTR32 * PTR32 *)(this + 0x20) = (*(undefined * PTR32 (*)[5])REFP(0x113024c));
  F_00cf3c40(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00ce9310 */
GEN_FRAME unsigned int F_00ce9310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce9310u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00ce9330 */
GEN_FRAME byte F_00ce9330(unsigned int gen_a0)
{
  GEN_ENTER(0xce9330u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (byte)((uint)*(undefined4 *)(param_1 + 4) >> 8) & 1;
}

/* ref: FUN_00ce9350 */
GEN_FRAME byte F_00ce9350(unsigned int gen_a0)
{
  GEN_ENTER(0xce9350u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (byte)(*(uint *)(param_1 + 4) >> 10) & 1;
}

/* ref: FUN_00ce9370 */
GEN_FRAME uint F_00ce9370(unsigned int gen_a0)
{
  GEN_ENTER(0xce9370u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 0) {
    return 0;
  }
  return *(uint *)(param_1 + 4) >> 0xb & 1;
}

/* ref: FUN_00ce9390 */
GEN_FRAME byte F_00ce9390(unsigned int gen_a0)
{
  GEN_ENTER(0xce9390u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (byte)(*(uint *)(param_1 + 4) >> 0xf) & 1;
}

/* ref: FUN_00ce93b0 */
GEN_FRAME uint F_00ce93b0(unsigned int gen_a0)
{
  GEN_ENTER(0xce93b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(param_1 + 4) >> 0xd & 1;
}

/* ref: FUN_00ce93d0 */
GEN_NOFRAME uint GEN_THISCALL F_00ce93d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xce93d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (*(int *)this + (uint)*(byte *)((int)this + 4) * -0x10) - 0x10;
}

/* ref: FUN_00ce93e0 */
GEN_FRAME uint F_00ce93e0(unsigned int gen_a0)
{
  GEN_ENTER(0xce93e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
    return *(int *)(param_1 + 0x24) + 0x20;
  }
  return 0x20;
}

/* ref: FUN_00ce9400 */
GEN_FRAME uint F_00ce9400(unsigned int gen_a0)
{
  GEN_ENTER(0xce9400u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
    return param_1 + 0x20;
  }
  return 0;
}

/* ref: FUN_00ce9420 */
GEN_FRAME uint F_00ce9420(unsigned int gen_a0)
{
  GEN_ENTER(0xce9420u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)*(byte *)(param_1 + 0x1f);
}

/* ref: FUN_00ce9430 */
GEN_FRAME uint F_00ce9430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xce9430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c) GEN_EDX_ARG);
  return extraout_EAX;
}

/* ref: FUN_00ce94d0 */
GEN_FRAME uint F_00ce94d0(unsigned int gen_a0)
{
  GEN_ENTER(0xce94d0u, gen_a0, 0u, 0u, 0u);
  if ((*(uint *)&gen_a0) == 1) {
    return 0x10;
  }
  if ((1 < (*(uint *)&gen_a0)) && ((*(uint *)&gen_a0) < 4)) {
    return 0x20;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xce9430));
  }
  ((code *)REFG(gen_code32, 0x15d861c))("false","[sd][Driver] Error: SCD Version","SSCF.cpp",0x20,
                  "SQEX::CDev::Engine::Sd::Driver::ScdHeader::GetScdHeaderSize");
  return 0;
}

/* ref: FUN_00ce9530 */
GEN_FRAME uint F_00ce9530(unsigned int gen_a0)
{
  GEN_ENTER(0xce9530u, gen_a0, 0u, 0u, 0u);
  if ((*(uint *)&gen_a0) == 1) {
    return 8;
  }
  if ((1 < (*(uint *)&gen_a0)) && ((*(uint *)&gen_a0) < 4)) {
    return 0x10;
  }
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xce9430));
  }
  ((code *)REFG(gen_code32, 0x15d861c))("false","[sd][Driver] Error: SCD Version","SSCF.cpp",0x3f,
                  "SQEX::CDev::Engine::Sd::Driver::SoundBasicDesc::GetSoundBasicDescSize");
  return 0;
}

/* ref: FUN_00ce9590 */
GEN_FRAME uint F_00ce9590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce9590u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((*(uint *)(param_1 + 4) >> 8 & 1) != 0) {
    uVar1 = F_00ce9530(param_2);
    return uVar1 + param_1;
  }
  return 0;
}

/* ref: FUN_00ce95c0 */
GEN_FRAME uint F_00ce95c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce95c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((*(uint *)(param_1 + 4) >> 8 & 1) != 0) {
    uVar1 = F_00ce9530(param_2);
    if (uVar1 + param_1 != 0) {
      return uVar1 + param_1 + 0x10;
    }
  }
  return 0;
}

/* ref: FUN_00ce95f0 */
GEN_FRAME uint F_00ce95f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce95f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if ((*(uint *)(param_1 + 4) >> 10 & 1) != 0) {
    uVar1 = F_00ce9530(param_2);
    if ((*(uint *)(param_1 + 4) >> 8 & 1) != 0) {
      uVar2 = F_00ce9530(param_2);
      if ((int *)(uVar2 + param_1) != (int *)0x0) {
        uVar1 = uVar1 + *(int *)(uVar2 + param_1);
      }
    }
    return uVar1 + param_1;
  }
  return 0;
}

/* ref: FUN_00ce9640 */
GEN_FRAME uint F_00ce9640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce9640u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = param_1;
  if ((param_1 != 0) && ((*(uint *)(param_1 + 4) >> 0xb & 1) != 0)) {
    uVar2 = F_00ce9530(param_2);
    if ((*(uint *)(param_1 + 4) >> 8 & 1) != 0) {
      uVar3 = F_00ce9530(param_2);
      if ((int *)(uVar3 + param_1) != (int *)0x0) {
        uVar2 = uVar2 + *(int *)(uVar3 + param_1);
      }
    }
    param_1 = uVar2;
    if ((*(uint *)(iVar1 + 4) >> 10 & 1) != 0) {
      uVar2 = F_00ce9530(param_2);
      if ((*(uint *)(iVar1 + 4) >> 8 & 1) != 0) {
        uVar3 = F_00ce9530(param_2);
        if ((int *)(uVar3 + iVar1) != (int *)0x0) {
          uVar2 = uVar2 + *(int *)(uVar3 + iVar1);
        }
      }
      if ((byte *)(uVar2 + iVar1) != (byte *)0x0) {
        param_1 = param_1 + *(byte *)(uVar2 + iVar1);
      }
    }
    return param_1 + iVar1;
  }
  return 0;
}

/* ref: FUN_00ce96e0 */
GEN_FRAME uint F_00ce96e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce96e0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = param_1;
  if ((*(uint *)(param_1 + 4) >> 0xf & 1) != 0) {
    uVar2 = F_00ce9530(param_2);
    if ((*(uint *)(param_1 + 4) >> 8 & 1) != 0) {
      uVar3 = F_00ce9530(param_2);
      if ((int *)(uVar3 + param_1) != (int *)0x0) {
        uVar2 = uVar2 + *(int *)(uVar3 + param_1);
      }
    }
    param_1 = uVar2;
    uVar2 = param_1;
    if ((*(uint *)(iVar1 + 4) >> 10 & 1) != 0) {
      uVar3 = F_00ce9530(param_2);
      if ((*(uint *)(iVar1 + 4) >> 8 & 1) != 0) {
        uVar4 = F_00ce9530(param_2);
        if ((int *)(uVar4 + iVar1) != (int *)0x0) {
          uVar3 = uVar3 + *(int *)(uVar4 + iVar1);
        }
      }
      if ((byte *)(uVar3 + iVar1) != (byte *)0x0) {
        uVar2 = param_1 + *(byte *)(uVar3 + iVar1);
      }
    }
    uVar3 = F_00ce9640(iVar1,param_2);
    if (uVar3 != 0) {
      uVar2 = uVar2 + *(byte *)(uVar3 + 1);
    }
    return uVar2 + iVar1;
  }
  return 0;
}

/* ref: FUN_00ce9790 */
GEN_FRAME uint F_00ce9790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce9790u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = param_1;
  if ((*(uint *)(param_1 + 4) >> 0xd & 1) != 0) {
    uVar2 = F_00ce9530(param_2);
    if ((*(uint *)(param_1 + 4) >> 8 & 1) != 0) {
      uVar3 = F_00ce9530(param_2);
      if ((int *)(uVar3 + param_1) != (int *)0x0) {
        uVar2 = uVar2 + *(int *)(uVar3 + param_1);
      }
    }
    param_1 = uVar2;
    uVar2 = param_1;
    if ((*(uint *)(iVar1 + 4) >> 10 & 1) != 0) {
      uVar3 = F_00ce9530(param_2);
      if ((*(uint *)(iVar1 + 4) >> 8 & 1) != 0) {
        uVar4 = F_00ce9530(param_2);
        if ((int *)(uVar4 + iVar1) != (int *)0x0) {
          uVar3 = uVar3 + *(int *)(uVar4 + iVar1);
        }
      }
      if ((byte *)(uVar3 + iVar1) != (byte *)0x0) {
        uVar2 = param_1 + *(byte *)(uVar3 + iVar1);
      }
    }
    uVar3 = F_00ce9640(iVar1,param_2);
    if (uVar3 != 0) {
      uVar2 = uVar2 + *(byte *)(uVar3 + 1);
    }
    uVar3 = F_00ce96e0(iVar1,param_2);
    if (uVar3 != 0) {
      uVar2 = uVar2 + *(ushort *)(uVar3 + 2);
    }
    return uVar2 + iVar1;
  }
  return 0;
}

/* ref: FUN_00ce9850 */
GEN_FRAME uint F_00ce9850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce9850u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte * pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  pbVar1 = param_1;
  if (param_1[3] == 4) {
    uVar2 = F_00ce9530(param_2);
    iVar4 = uVar2 + (uint)*param_1 * 8;
    if ((*(uint *)(param_1 + 4) >> 8 & 1) != 0) {
      uVar2 = F_00ce9530(param_2);
      if (param_1 + uVar2 != (byte *)0x0) {
        iVar4 = iVar4 + *(int *)(param_1 + uVar2);
      }
    }
    param_1 = (byte *)iVar4;
    iVar4 = (int)param_1;
    if ((*(uint *)(pbVar1 + 4) >> 10 & 1) != 0) {
      uVar2 = F_00ce9530(param_2);
      if ((*(uint *)(pbVar1 + 4) >> 8 & 1) != 0) {
        uVar3 = F_00ce9530(param_2);
        if (pbVar1 + uVar3 != (byte *)0x0) {
          uVar2 = uVar2 + *(int *)(pbVar1 + uVar3);
        }
      }
      if (pbVar1 + uVar2 != (byte *)0x0) {
        iVar4 = (int)param_1 + (uint)pbVar1[uVar2];
      }
    }
    uVar2 = F_00ce9640(pbVar1,param_2);
    if (uVar2 != 0) {
      iVar4 = iVar4 + (uint)*(byte *)(uVar2 + 1);
    }
    uVar2 = F_00ce96e0(pbVar1,param_2);
    if (uVar2 != 0) {
      iVar4 = iVar4 + (uint)*(ushort *)(uVar2 + 2);
    }
    uVar2 = F_00ce9790(pbVar1,param_2);
    if (uVar2 != 0) {
      iVar4 = iVar4 + (uint)*(ushort *)(uVar2 + 2);
    }
    return (uint)(pbVar1 + iVar4);
  }
  return 0;
}

/* ref: FUN_00ce9920 */
GEN_FRAME uint F_00ce9920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce9920u, gen_a0, gen_a1, gen_a2, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte * pbVar4;
  
  if ((*param_1 == 0) || (*param_1 <= (byte)param_2)) {
    return 0;
  }
  uVar2 = F_00ce9530(param_3);
  if ((*(uint *)(param_1 + 4) >> 8 & 1) != 0) {
    uVar3 = F_00ce9530(param_3);
    if (param_1 + uVar3 != (byte *)0x0) {
      uVar2 = uVar2 + *(int *)(param_1 + uVar3);
    }
  }
  pbVar4 = (byte *)F_00ce95f0(param_1,param_3);
  if (pbVar4 != (byte *)0x0) {
    uVar2 = uVar2 + *pbVar4;
  }
  uVar3 = F_00ce9640(param_1,param_3);
  if (uVar3 != 0) {
    uVar2 = uVar2 + *(byte *)(uVar3 + 1);
  }
  uVar3 = F_00ce96e0(param_1,param_3);
  if (uVar3 != 0) {
    uVar2 = uVar2 + *(ushort *)(uVar3 + 2);
  }
  uVar3 = F_00ce9790(param_1,param_3);
  if (uVar3 != 0) {
    uVar2 = uVar2 + *(ushort *)(uVar3 + 2);
  }
  bVar1 = param_1[3];
  if (((bVar1 != 2) && (bVar1 != 4)) && (bVar1 != 0xc)) {
    return (uint)(param_1 + (uint)(byte)param_2 * 4 + uVar2);
  }
  return (uint)(param_1 + (uint)(byte)param_2 * 8 + uVar2);
}

/* ref: FUN_00ce9a00 */
GEN_FRAME unsigned int GEN_THISCALL F_00ce9a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xce9a00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(uint *)(in_ecx + 0x14) = *(uint *)(in_ecx + 0x14) | 8;
    return;
  }
  *(uint *)(in_ecx + 0x14) = *(uint *)(in_ecx + 0x14) & 0xfffffff7;
  return;
}

/* ref: FUN_00ce9a20 */
GEN_FRAME uint GEN_THISCALL F_00ce9a20(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce9a20u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  *(float *)(in_ecx + 0x15c) = param_2;
  *(uint *)(in_ecx + 0x160) = param_3;
  return param_3;
}

/* ref: FUN_00ce9a40 */
GEN_FRAME uint GEN_THISCALL F_00ce9a40(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce9a40u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cccd90(param_1 + 0x58 GEN_EDX_FWD,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00ce9a60 */
GEN_FRAME uint F_00ce9a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce9a60u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  if ((2 < (uint)param_1[3]) && ((*(byte *)(param_2 + 4) & 0x80) == 0)) {
    if ((*(byte *)(param_1 + 0x12) & 8) == 0) {
      iVar2 = param_1[1];
    }
    else {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
      if (uVar1 != 3) {
        return 0;
      }
      if ((*(byte *)(param_1 + 0x35) & 2) == 0) {
        return 0;
      }
      if ((*(byte *)(param_1 + 0x12) & 2) == 0) {
        return 0;
      }
      iVar2 = param_1[0x26];
    }
    if (iVar2 != 0) {
      return *((int *)GEN_TOP((*((int *)GEN_TOP((*(ushort *)(iVar2 + 0xe) + 0x18 + iVar2))) +
                      (uint)*(ushort *)(param_2 + 6) * 4 + iVar2))) + iVar2;
    }
  }
  return 0;
}

/* ref: FUN_00ce9ad0 */
GEN_FRAME byte F_00ce9ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce9ad0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  if ((param_1 & 0xf0) < 0x51) {
                    
    switch((unsigned int)(uintptr_t)((&REFG(byte, 0xce9b5c))[(int)(param_1 & 0xf0)])) {
    case 0: ;
      return param_3 <= param_2;
    case 1: ;
      return param_3 < param_2;
    case 2: ;
      return param_2 < param_3;
    case 3: ;
      return param_2 <= param_3;
    case 4: ;
      return param_2 == param_3;
    case 5: ;
      return param_2 != param_3;
    }
  }
  return 0;
}

/* ref: FUN_00ce9bb0 */
GEN_FRAME byte F_00ce9bb0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xce9bb0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  bool bVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (0x50 < (param_1 & 0xf0)) {
switchD_00ce9bcb_default: ;
    return 0;
  }
                    
  switch((unsigned int)(uintptr_t)((&REFG(byte, 0xce9c74))[(int)(param_1 & 0xf0)])) {
  case 0: ;
    fVar2 = (float10)param_2;
    fVar3 = (float10)param_3;
    if (!(fVar2 <= fVar3) != ((GEN_ISNAN(fVar3) || GEN_ISNAN(fVar2)) || fVar3 == fVar2)) {
      return 1;
    }
    break;
  case 1: ;
    if (!((float10)param_2 <= (float10)param_3) != (GEN_ISNAN((float10)param_3) || GEN_ISNAN((float10)param_2)))
    {
      return 1;
    }
    break;
  case 2: ;
    fVar2 = (float10)param_2;
    fVar3 = (float10)param_3;
    if (fVar2 <= fVar3 && ((!GEN_ISNAN(fVar3) && !GEN_ISNAN(fVar2)) && fVar3 != fVar2)) {
      return 1;
    }
    break;
  case 3: ;
    if ((float10)param_2 <= (float10)param_3) {
      return 1;
    }
    break;
  case 4: ;
    bVar1 = GEN_ISNAN((float10)param_3) || GEN_ISNAN((float10)param_2);
    if (bVar1 != (bVar1 || (float10)param_3 == (float10)param_2)) {
      return 1;
    }
    break;
  case 5: ;
    bVar1 = GEN_ISNAN((float10)param_3) || GEN_ISNAN((float10)param_2);
    if (bVar1 == (bVar1 || (float10)param_3 == (float10)param_2)) {
      return 1;
    }
    break;
  case 6: ;
    goto switchD_00ce9bcb_default;
  }
  return 0;
}

/* ref: FUN_00ce9cd0 */
GEN_FRAME uint F_00ce9cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xce9cd0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_3 = (int *)(uintptr_t)gen_a2;
  float10 fVar1;
  uint uVar2;
  uint uVar3;
  undefined1 * puVar4;
  
  puVar4 = (undefined1 *)(*(uint *)&gen_a1);
  if (((*(uint *)&gen_a1) != 0) && ((*(int *)&gen_a0) != 0)) {
    if ((param_3 != (int *)0x0) && ((*(uint *)&gen_a1) - 1 < 5)) {
      if ((*(uint *)&gen_a1) == 1) {
        puVar4 = (undefined1 *)((*(int *)&gen_a0) + 0x10);
      }
      else {
        puVar4 = (undefined1 *)((*(int *)&gen_a0) - 8 + (*(uint *)&gen_a1) * 0x18);
      }
      if (puVar4 != (undefined1 *)0x0) {
        switch((unsigned int)(uintptr_t)(*puVar4)) {
        case 1: ;
          uVar2 = *(uint *)(puVar4 + 4);
          param_3[0x57] = (int)gen_fl2bits((float)(float10)1);
          param_3[0x58] = uVar2;
          return uVar2;
        case 2: ;
          uVar2 = F_00cc6660(param_3 GEN_EDX_ARG,*(undefined4 *)(puVar4 + 4));
          return uVar2;
        case 3: ;
          uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_3 + 0x54))(param_3 GEN_EDX_ARG,*(undefined4 *)(puVar4 + 4),0);
          param_3[5] = param_3[5] | 8;
          return uVar2;
        case 5: ;
          uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_3 + 0x54))(param_3 GEN_EDX_ARG,*(undefined4 *)(puVar4 + 4),0);
          return uVar2;
        case 10: ;
          uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_3 + 0x40))(param_3 GEN_EDX_ARG,*(undefined4 *)(puVar4 + 4),0);
          return uVar2;
        case 0xc: ;
          uVar2 = *(uint *)(puVar4 + 4);
          fVar1 = (float10)*(double *)&REFG(undefined, 0x10928e8);
          uVar3 = F_00cbf660(uVar2 >> 7 & 0x7f);
          puVar4 = (undefined1 *)0x0;
          if (uVar3 != 0) {
            puVar4 = (undefined1 *)
                     F_00cccd90(uVar3 + 0x58 GEN_EDX_ARG,((float)GEN_TOF(((float10)(uVar2 & 0x7f) * fVar1))),uVar2 >> 0xe
                                 );
          }
        }
      }
    }
  }
  return (uint)puVar4;
}

/* ref: FUN_00ce9e10 */
GEN_FRAME unsigned int F_00ce9e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xce9e10u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00ce9e30 */
GEN_FRAME uint F_00ce9e30(unsigned int gen_a0)
{
  GEN_ENTER(0xce9e30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  char cVar1;
  char * pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char * pcVar7;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_00c4720f(((char *)(gen_frame + 0x8)),"[Voice]\n");
  pcVar2 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x8));
  pcVar2 = (char *)(param_1 - 1);
  do {
    pcVar7 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (*pcVar7 != '\0');
  pcVar7 = ((char *)(gen_frame + 0x8));
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar2 = pcVar2 + 1;
  }
  (*(int *)(gen_frame + 0x4)) = 0;
  F_00c4720f(((char *)(gen_frame + 0x8)),"UseVoice = ");
  pcVar2 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x8));
  pcVar2 = (char *)(param_1 - 1);
  do {
    pcVar7 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (*pcVar7 != '\0');
  pcVar7 = ((char *)(gen_frame + 0x8));
  for (uVar5 = uVar3 >> 2; iVar4 = REFG(int, 0x15d8c2c), uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar2 = pcVar2 + 4;
  }
  iVar6 = 0;
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar2 = pcVar2 + 1;
  }
  if (0 < iVar4) {
    (*(int *)(gen_frame + 0x0)) = 0;
    do {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x0)) + REFG(int, 0x15d8c34)) + 0x98))))
                        ((int *)((*(int *)(gen_frame + 0x0)) + REFG(int, 0x15d8c34)) GEN_EDX_ARG);
      if ((char)uVar3 == '\0') {
        F_00c4720f(((char *)(gen_frame + 0x8)),&REFG(undefined, 0x11304ec),iVar6);
        pcVar2 = ((char *)(gen_frame + 0x8));
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x8));
        pcVar2 = (char *)(param_1 - 1);
        do {
          pcVar7 = pcVar2 + 1;
          pcVar2 = pcVar2 + 1;
        } while (*pcVar7 != '\0');
        pcVar7 = ((char *)(gen_frame + 0x8));
        for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar2 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar2 = pcVar2 + 4;
        }
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar2 = pcVar2 + 1;
        }
      }
      iVar6 = iVar6 + 1;
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 0x250;
      iVar4 = REFG(int, 0x15d8c2c);
    } while (iVar6 < REFG(int, 0x15d8c2c));
  }
  F_00c4720f(((char *)(gen_frame + 0x8)),"\nVoiceCount = %d/%d\n",(*(int *)(gen_frame + 0x4)),iVar4);
  pcVar2 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)((char *)(gen_frame + 0x8));
  pcVar2 = (char *)(param_1 - 1);
  do {
    pcVar7 = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (*pcVar7 != '\0');
  pcVar7 = ((char *)(gen_frame + 0x8));
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar5 = uVar3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar2 = pcVar2 + 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00ce9fe0 */
GEN_NOFRAME uint F_00ce9fe0(void)
{
  GEN_ENTER(0xce9fe0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  uint extraout_EAX = 0;
  
  REFG(undefined4, 0x15d8c2c) = 0;
  if (REFG(undefined4 * PTR32, 0x15d8c34) != (undefined4 *)0x0) {
    if (REFG(undefined4 * PTR32, 0x15d8c34)[-1] == 0) {
      F_00406b30(REFG(undefined4 * PTR32, 0x15d8c34) - 1);
    }
    else {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d8c34))))(REFG(undefined4 * PTR32, 0x15d8c34) GEN_EDX_ARG,3);
    }
  }
  if (REFG(int, 0x15d8c38) != 0) {
    F_00406810(REFG(int, 0x15d8c38));
  }
  REFG(char, 0x15d8ca0) = REFG(char, 0x15d8c84);
  if (REFG(char, 0x15d8c84) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c88));
  }
  uVar1 = 0;
  if (REFG(int, 0x15d8c70) != 0) {
    uVar1 = F_00406810(REFG(int, 0x15d8c70));
    REFG(int, 0x15d8c70) = 0;
  }
  REFG(undefined4, 0x15d8c74) = 0;
  if (REFG(char, 0x15d8ca0) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c88));
    uVar1 = extraout_EAX;
  }
  REFG(int, 0x15d8c38) = 0;
  REFG(undefined4 * PTR32, 0x15d8c34) = (undefined4 *)0x0;
  return uVar1;
}

/* ref: FUN_00cea080 */
GEN_NOFRAME uint F_00cea080(void)
{
  GEN_ENTER(0xcea080u, 0u, 0u, 0u, 0u);
  int * piVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  
  REFG(char, 0x15d8cf0) = '\x01';
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8cd8));
  puVar3 = REFG(undefined4 * PTR32, 0x15d8c44);
  if (REFG(int, 0x15d8c30) < REFG(int, 0x15d8c2c)) {
    piVar1 = *(int * PTR32 *)(REFG(int, 0x15d8c38) + REFG(int, 0x15d8c30) * 4);
    *(undefined4 *)(REFG(int, 0x15d8c38) + REFG(int, 0x15d8c30) * 4) = 0;
    REFG(int, 0x15d8c30) = REFG(int, 0x15d8c30) + 1;
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xa0))(piVar1 GEN_EDX_ARG);
    if (REFG(char, 0x15d8cf0) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8cd8));
    }
    return (uint)piVar1;
  }
  if (REFG(undefined4 * PTR32, 0x15d8c44) != (undefined4 *)&REFG(undefined, 0x15d8ca4)) {
    piVar1 = ((int *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d8c44)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x40))(piVar1 GEN_EDX_ARG);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xa0))(piVar1 GEN_EDX_ARG);
    uVar2 = puVar3[1];
    *(undefined4 *)(puVar3[2] + 4) = uVar2;
    *(undefined4 *)(puVar3[1] + 8) = puVar3[2];
    REFG(char, 0x15d8ca0) = REFG(char, 0x15d8c84);
    if (REFG(char, 0x15d8c84) != '\0') {
      gen_imp_EnterCriticalSection(uVar2,&REFG(undefined, 0x15d8c88));
    }
    *puVar3 = REFG(undefined4 * PTR32, 0x15d8c74);
    REFG(undefined4 * PTR32, 0x15d8c74) = puVar3;
    if (REFG(char, 0x15d8ca0) != '\0') {
      gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8c88));
    }
    if (REFG(char, 0x15d8cf0) != '\0') {
      gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8cd8));
    }
    return (uint)piVar1;
  }
  if (REFG(char, 0x15d8cf0) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8cd8));
  }
  return 0;
}

/* ref: FUN_00cea180 */
GEN_FRAME uint F_00cea180(unsigned int gen_a0)
{
  GEN_ENTER(0xcea180u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 * in_ecx;
  uint extraout_EAX = 0;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint extraout_EAX_00 = 0;
  
  REFG(char, 0x15d8cf0) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8cd8));
  uVar1 = extraout_EAX;
  if (param_1 != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x90))(param_1 GEN_EDX_ARG);
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x98))(param_1 GEN_EDX_ARG);
    if (((char)uVar2 == '\0') &&
       (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x9c))(param_1 GEN_EDX_ARG), (char)uVar2 == '\0')) {
      puVar3 = (undefined4 *)F_00cc67c0(&REFG(undefined4, 0x15d8c70) GEN_EDX_ARG);
      *puVar3 = param_1;
      in_ecx = puVar3 + 3;
      puVar3[1] = REFG(undefined4 * PTR32, 0x15d8ca8);
      puVar3[2] = &REFG(undefined, 0x15d8ca4);
      if (in_ecx != (undefined4 *)0x0) {
        F_00cccb10(in_ecx GEN_EDX_ARG,(float)(float10)1);
      }
      uVar1 = F_00cccd90(in_ecx GEN_EDX_ARG,(float)(float10)0,uVar1);
      REFG(undefined4 * PTR32, 0x15d8ca8)[2] = puVar3;
      REFG(undefined4 * PTR32, 0x15d8ca8) = puVar3;
    }
    else {
      ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x40))(param_1 GEN_EDX_ARG);
      ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xa0))(param_1 GEN_EDX_ARG);
      uVar1 = REFG(undefined4, 0x15d8c30) - 1;
      REFG(undefined4, 0x15d8c30) = uVar1;
      *(int * PTR32 *)(REFG(int, 0x15d8c38) + uVar1 * 4) = param_1;
    }
  }
  if (REFG(char, 0x15d8cf0) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8cd8));
    uVar1 = extraout_EAX_00;
  }
  return uVar1;
}

