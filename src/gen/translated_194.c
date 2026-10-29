#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Application::Network::WorkDefinitions::Tag_Sync_Parameter::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8d2a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8d2a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_Parameter::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e8d310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8d310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_Parameter::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e8d350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8d350u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x194);
  if (iVar2 != iVar2 + *(int *)(this + 0x198) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x198) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_StartTown::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8d3b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8d3b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x134);
  if (iVar3 != iVar3 + *(int *)(this + 0x138) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_StartTown::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8d430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8d430u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x134);
  if (iVar3 != iVar3 + *(int *)(this + 0x138) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_StartTown::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8d4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe8d4c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x134);
  if (iVar8 != iVar8 + *(int *)(this + 0x138) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x134) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_StartTown::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e8d5c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8d5c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x134);
  if (iVar1 != iVar1 + *(int *)(this + 0x138) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_StartTown::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8d620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8d620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x134);
  if (iVar3 != iVar3 + *(int *)(this + 0x138) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_StartTown::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e8d690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8d690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x134);
  if (iVar1 != iVar1 + *(int *)(this + 0x138) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_StartTown::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e8d6d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8d6d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x134);
  if (iVar2 != iVar2 + *(int *)(this + 0x138) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x138) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringChainLevel::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8d730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8d730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x134);
  if (iVar3 != iVar3 + *(int *)(this + 0x138) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringChainLevel::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8d7b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8d7b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x134);
  if (iVar3 != iVar3 + *(int *)(this + 0x138) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringChainLevel::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8d840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe8d840u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x134);
  if (iVar8 != iVar8 + *(int *)(this + 0x138) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x134) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringChainLevel::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e8d940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8d940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x134);
  if (iVar1 != iVar1 + *(int *)(this + 0x138) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringChainLevel::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8d9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8d9a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x134);
  if (iVar3 != iVar3 + *(int *)(this + 0x138) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringChainLevel::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e8da10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8da10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x134);
  if (iVar1 != iVar1 + *(int *)(this + 0x138) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringChainLevel::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e8da50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8da50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x134);
  if (iVar2 != iVar2 + *(int *)(this + 0x138) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x138) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringMap::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8dab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8dab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x134);
  if (iVar3 != iVar3 + *(int *)(this + 0x138) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringMap::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8db30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8db30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x134);
  if (iVar3 != iVar3 + *(int *)(this + 0x138) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringMap::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8dbc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe8dbc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x134);
  if (iVar8 != iVar8 + *(int *)(this + 0x138) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x134) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringMap::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e8dcc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8dcc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x134);
  if (iVar1 != iVar1 + *(int *)(this + 0x138) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringMap::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8dd20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8dd20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x134);
  if (iVar3 != iVar3 + *(int *)(this + 0x138) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringMap::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e8dd90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8dd90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x134);
  if (iVar1 != iVar1 + *(int *)(this + 0x138) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringMap::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e8ddd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8ddd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x134);
  if (iVar2 != iVar2 + *(int *)(this + 0x138) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x138) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringPopPattern::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8de30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8de30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x224);
  if (iVar3 != iVar3 + *(int *)(this + 0x228) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x224) + *(int *)(this + 0x228) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringPopPattern::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8deb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8deb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x224);
  if (iVar3 != iVar3 + *(int *)(this + 0x228) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x224) + *(int *)(this + 0x228) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringPopPattern::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8df40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe8df40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x224);
  if (iVar8 != iVar8 + *(int *)(this + 0x228) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x224) + *(int *)(this + 0x228) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x224) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringPopPattern::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e8e040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8e040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x224);
  if (iVar1 != iVar1 + *(int *)(this + 0x228) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x224) + *(int *)(this + 0x228) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringPopPattern::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8e0a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8e0a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x224);
  if (iVar3 != iVar3 + *(int *)(this + 0x228) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x224) + *(int *)(this + 0x228) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringPopPattern::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e8e110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8e110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x224);
  if (iVar1 != iVar1 + *(int *)(this + 0x228) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x224) + *(int *)(this + 0x228) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringPopPattern::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e8e150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8e150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x224);
  if (iVar2 != iVar2 + *(int *)(this + 0x228) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x228) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringDivisionOpenFlags::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8e1b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8e1b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x164);
  if (iVar3 != iVar3 + *(int *)(this + 0x168) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x164) + *(int *)(this + 0x168) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringDivisionOpenFlags::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8e230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8e230u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x164);
  if (iVar3 != iVar3 + *(int *)(this + 0x168) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x164) + *(int *)(this + 0x168) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringDivisionOpenFlags::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8e2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe8e2c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x164);
  if (iVar8 != iVar8 + *(int *)(this + 0x168) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x164) + *(int *)(this + 0x168) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x164) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringDivisionOpenFlags::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e8e3c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8e3c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x164);
  if (iVar1 != iVar1 + *(int *)(this + 0x168) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x164) + *(int *)(this + 0x168) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringDivisionOpenFlags::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8e420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8e420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x164);
  if (iVar3 != iVar3 + *(int *)(this + 0x168) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x164) + *(int *)(this + 0x168) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringDivisionOpenFlags::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e8e490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8e490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x164);
  if (iVar1 != iVar1 + *(int *)(this + 0x168) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x164) + *(int *)(this + 0x168) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringDivisionOpenFlags::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e8e4d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8e4d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x164);
  if (iVar2 != iVar2 + *(int *)(this + 0x168) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x168) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringItemGetFlags::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8e530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8e530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x164);
  if (iVar3 != iVar3 + *(int *)(this + 0x168) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x164) + *(int *)(this + 0x168) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringItemGetFlags::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8e5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8e5b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x164);
  if (iVar3 != iVar3 + *(int *)(this + 0x168) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x164) + *(int *)(this + 0x168) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringItemGetFlags::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8e640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe8e640u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x164);
  if (iVar8 != iVar8 + *(int *)(this + 0x168) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x164) + *(int *)(this + 0x168) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x164) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringItemGetFlags::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e8e740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8e740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x164);
  if (iVar1 != iVar1 + *(int *)(this + 0x168) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x164) + *(int *)(this + 0x168) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringItemGetFlags::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8e7a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8e7a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x164);
  if (iVar3 != iVar3 + *(int *)(this + 0x168) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x164) + *(int *)(this + 0x168) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringItemGetFlags::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e8e810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8e810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x164);
  if (iVar1 != iVar1 + *(int *)(this + 0x168) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x164) + *(int *)(this + 0x168) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GatheringItemGetFlags::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e8e850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8e850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x164);
  if (iVar2 != iVar2 + *(int *)(this + 0x168) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x168) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeDivisionOpenFlags::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8e8b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8e8b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeDivisionOpenFlags::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8e930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8e930u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeDivisionOpenFlags::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8e9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe8e9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x194);
  if (iVar8 != iVar8 + *(int *)(this + 0x198) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x194) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeDivisionOpenFlags::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e8eac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8eac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeDivisionOpenFlags::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8eb20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8eb20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeDivisionOpenFlags::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e8eb90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8eb90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeDivisionOpenFlags::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e8ebd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8ebd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x194);
  if (iVar2 != iVar2 + *(int *)(this + 0x198) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x198) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeCreateFlags::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8ec30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8ec30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x284);
  if (iVar3 != iVar3 + *(int *)(this + 0x288) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x284) + *(int *)(this + 0x288) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeCreateFlags::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8ecb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8ecb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x284);
  if (iVar3 != iVar3 + *(int *)(this + 0x288) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x284) + *(int *)(this + 0x288) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeCreateFlags::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8ed40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe8ed40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x284);
  if (iVar8 != iVar8 + *(int *)(this + 0x288) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x284) + *(int *)(this + 0x288) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x284) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeCreateFlags::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e8ee40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8ee40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x284);
  if (iVar1 != iVar1 + *(int *)(this + 0x288) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x284) + *(int *)(this + 0x288) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeCreateFlags::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8eea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8eea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x284);
  if (iVar3 != iVar3 + *(int *)(this + 0x288) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x284) + *(int *)(this + 0x288) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeCreateFlags::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e8ef10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8ef10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x284);
  if (iVar1 != iVar1 + *(int *)(this + 0x288) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x284) + *(int *)(this + 0x288) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_RecipeCreateFlags::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e8ef50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8ef50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x284);
  if (iVar2 != iVar2 + *(int *)(this + 0x288) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x288) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_JournalConfig::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8efb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8efb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_JournalConfig::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8f030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8f030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_JournalConfig::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8f0c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe8f0c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x194);
  if (iVar8 != iVar8 + *(int *)(this + 0x198) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x194) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_JournalConfig::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e8f1c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8f1c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_JournalConfig::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8f220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8f220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_JournalConfig::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e8f290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8f290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_JournalConfig::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e8f2d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8f2d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x194);
  if (iVar2 != iVar2 + *(int *)(this + 0x198) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x198) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_LeveProperty::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8f330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8f330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x2b4);
  if (iVar3 != iVar3 + *(int *)(this + 0x2b8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x2b4) + *(int *)(this + 0x2b8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_LeveProperty::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8f3b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8f3b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x2b4);
  if (iVar3 != iVar3 + *(int *)(this + 0x2b8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x2b4) + *(int *)(this + 0x2b8) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_LeveProperty::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8f440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe8f440u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x2b4);
  if (iVar8 != iVar8 + *(int *)(this + 0x2b8) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x2b4) + *(int *)(this + 0x2b8) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x2b4) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_LeveProperty::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e8f540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8f540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x2b4);
  if (iVar1 != iVar1 + *(int *)(this + 0x2b8) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x2b4) + *(int *)(this + 0x2b8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_LeveProperty::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8f5a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8f5a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x2b4);
  if (iVar3 != iVar3 + *(int *)(this + 0x2b8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x2b4) + *(int *)(this + 0x2b8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_LeveProperty::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e8f610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8f610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x2b4);
  if (iVar1 != iVar1 + *(int *)(this + 0x2b8) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x2b4) + *(int *)(this + 0x2b8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_LeveProperty::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e8f650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8f650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x2b4);
  if (iVar2 != iVar2 + *(int *)(this + 0x2b8) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x2b8) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GrandCompany::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8f6b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8f6b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GrandCompany::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8f730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8f730u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GrandCompany::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8f7c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe8f7c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x194);
  if (iVar8 != iVar8 + *(int *)(this + 0x198) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x194) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GrandCompany::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e8f8c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8f8c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GrandCompany::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8f920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8f920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GrandCompany::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e8f990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8f990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_GrandCompany::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e8f9d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8f9d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x194);
  if (iVar2 != iVar2 + *(int *)(this + 0x198) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x198) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_HpParams::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8fa30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8fa30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x294);
  if (iVar3 != iVar3 + *(int *)(this + 0x298) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x294) + *(int *)(this + 0x298) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_HpParams::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8fab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8fab0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x294);
  if (iVar3 != iVar3 + *(int *)(this + 0x298) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x294) + *(int *)(this + 0x298) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_HpParams::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8fb40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe8fb40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x294);
  if (iVar8 != iVar8 + *(int *)(this + 0x298) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x294) + *(int *)(this + 0x298) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x294) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_HpParams::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e8fc40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8fc40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x294);
  if (iVar1 != iVar1 + *(int *)(this + 0x298) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x294) + *(int *)(this + 0x298) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_HpParams::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8fca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8fca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x294);
  if (iVar3 != iVar3 + *(int *)(this + 0x298) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x294) + *(int *)(this + 0x298) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_HpParams::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e8fd10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8fd10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x294);
  if (iVar1 != iVar1 + *(int *)(this + 0x298) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x294) + *(int *)(this + 0x298) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_HpParams::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e8fd50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8fd50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x294);
  if (iVar2 != iVar2 + *(int *)(this + 0x298) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x298) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_MpParams::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8fdb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe8fdb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_MpParams::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8fe30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe8fe30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_MpParams::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e8fec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe8fec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x194);
  if (iVar8 != iVar8 + *(int *)(this + 0x198) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x194) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_MpParams::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e8ffc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8ffc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_MpParams::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e90020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe90020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_MpParams::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e90090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_MpParams::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e900d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe900d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x194);
  if (iVar2 != iVar2 + *(int *)(this + 0x198) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x198) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_TpParams::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e90130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe90130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 500);
  if (iVar3 != iVar3 + *(int *)(this + 0x1f8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 500) + *(int *)(this + 0x1f8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_TpParams::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e901b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe901b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 500);
  if (iVar3 != iVar3 + *(int *)(this + 0x1f8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 500) + *(int *)(this + 0x1f8) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_TpParams::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e90240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe90240u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 500);
  if (iVar8 != iVar8 + *(int *)(this + 0x1f8) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 500) + *(int *)(this + 0x1f8) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 500) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_TpParams::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e90340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 500);
  if (iVar1 != iVar1 + *(int *)(this + 0x1f8) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 500) + *(int *)(this + 0x1f8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_TpParams::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e903a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe903a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 500);
  if (iVar3 != iVar3 + *(int *)(this + 0x1f8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 500) + *(int *)(this + 0x1f8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_TpParams::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e90410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 500);
  if (iVar1 != iVar1 + *(int *)(this + 0x1f8) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 500) + *(int *)(this + 0x1f8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_Sync_TpParams::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e90450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90450u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 500);
  if (iVar2 != iVar2 + *(int *)(this + 0x1f8) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x1f8) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e90500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe90500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0xa64);
  if (iVar3 != iVar3 + *(int *)(this + 0xa68) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0xa64) + *(int *)(this + 0xa68) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e90580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe90580u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0xa64);
  if (iVar3 != iVar3 + *(int *)(this + 0xa68) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0xa64) + *(int *)(this + 0xa68) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e90610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe90610u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0xa64);
  if (iVar8 != iVar8 + *(int *)(this + 0xa68) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0xa64) + *(int *)(this + 0xa68) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0xa64) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e90710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0xa64);
  if (iVar1 != iVar1 + *(int *)(this + 0xa68) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0xa64) + *(int *)(this + 0xa68) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e90770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe90770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0xa64);
  if (iVar3 != iVar3 + *(int *)(this + 0xa68) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0xa64) + *(int *)(this + 0xa68) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e907e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe907e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0xa64);
  if (iVar1 != iVar1 + *(int *)(this + 0xa68) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0xa64) + *(int *)(this + 0xa68) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbChara::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e90820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0xa64);
  if (iVar2 != iVar2 + *(int *)(this + 0xa68) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0xa68) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e90860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe90860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x274);
  if (iVar3 != iVar3 + *(int *)(this + 0x278) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x274) + *(int *)(this + 0x278) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e908e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe908e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x274);
  if (iVar3 != iVar3 + *(int *)(this + 0x278) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x274) + *(int *)(this + 0x278) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e90970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe90970u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x274);
  if (iVar8 != iVar8 + *(int *)(this + 0x278) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x274) + *(int *)(this + 0x278) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x274) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e90a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x274);
  if (iVar1 != iVar1 + *(int *)(this + 0x278) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x274) + *(int *)(this + 0x278) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e90ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe90ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x274);
  if (iVar3 != iVar3 + *(int *)(this + 0x278) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x274) + *(int *)(this + 0x278) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e90b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90b40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x274);
  if (iVar1 != iVar1 + *(int *)(this + 0x278) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x274) + *(int *)(this + 0x278) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaStatus::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e90b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90b80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x274);
  if (iVar2 != iVar2 + *(int *)(this + 0x278) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x278) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e90bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe90bc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x3f4);
  if (iVar3 != iVar3 + *(int *)(this + 0x3f8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x3f4) + *(int *)(this + 0x3f8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e90c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe90c40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x3f4);
  if (iVar3 != iVar3 + *(int *)(this + 0x3f8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x3f4) + *(int *)(this + 0x3f8) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e90cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe90cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x3f4);
  if (iVar8 != iVar8 + *(int *)(this + 0x3f8) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x3f4) + *(int *)(this + 0x3f8) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x3f4) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e90dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90dd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x3f4);
  if (iVar1 != iVar1 + *(int *)(this + 0x3f8) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x3f4) + *(int *)(this + 0x3f8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e90e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe90e30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x3f4);
  if (iVar3 != iVar3 + *(int *)(this + 0x3f8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x3f4) + *(int *)(this + 0x3f8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e90ea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90ea0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x3f4);
  if (iVar1 != iVar1 + *(int *)(this + 0x3f8) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x3f4) + *(int *)(this + 0x3f8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaAchievement::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e90ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x3f4);
  if (iVar2 != iVar2 + *(int *)(this + 0x3f8) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x3f8) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCountFreq::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e90f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe90f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x2d4);
  if (iVar3 != iVar3 + *(int *)(this + 0x2d8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCountFreq::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e90fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe90fa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x2d4);
  if (iVar3 != iVar3 + *(int *)(this + 0x2d8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCountFreq::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e91030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe91030u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x2d4);
  if (iVar8 != iVar8 + *(int *)(this + 0x2d8) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x2d4) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCountFreq::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e91130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe91130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x2d4);
  if (iVar1 != iVar1 + *(int *)(this + 0x2d8) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCountFreq::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e91190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe91190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x2d4);
  if (iVar3 != iVar3 + *(int *)(this + 0x2d8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCountFreq::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e91200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe91200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x2d4);
  if (iVar1 != iVar1 + *(int *)(this + 0x2d8) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCountFreq::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e91240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe91240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x2d4);
  if (iVar2 != iVar2 + *(int *)(this + 0x2d8) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x2d8) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCount::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e91280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe91280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x664);
  if (iVar3 != iVar3 + *(int *)(this + 0x668) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x664) + *(int *)(this + 0x668) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCount::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e91300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe91300u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x664);
  if (iVar3 != iVar3 + *(int *)(this + 0x668) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x664) + *(int *)(this + 0x668) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCount::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e91390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe91390u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x664);
  if (iVar8 != iVar8 + *(int *)(this + 0x668) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x664) + *(int *)(this + 0x668) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x664) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCount::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e91490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe91490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x664);
  if (iVar1 != iVar1 + *(int *)(this + 0x668) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x664) + *(int *)(this + 0x668) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCount::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e914f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe914f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x664);
  if (iVar3 != iVar3 + *(int *)(this + 0x668) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x664) + *(int *)(this + 0x668) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCount::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e91560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe91560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x664);
  if (iVar1 != iVar1 + *(int *)(this + 0x668) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x664) + *(int *)(this + 0x668) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaCount::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e915a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe915a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x664);
  if (iVar2 != iVar2 + *(int *)(this + 0x668) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x668) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPc::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e915e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe915e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x25b4);
  if (iVar3 != iVar3 + *(int *)(this + 0x25b8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x25b4) + *(int *)(this + 0x25b8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPc::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e91660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe91660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x25b4);
  if (iVar3 != iVar3 + *(int *)(this + 0x25b8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x25b4) + *(int *)(this + 0x25b8) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPc::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e916f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe916f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x25b4);
  if (iVar8 != iVar8 + *(int *)(this + 0x25b8) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x25b4) + *(int *)(this + 0x25b8) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x25b4) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPc::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e917f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe917f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x25b4);
  if (iVar1 != iVar1 + *(int *)(this + 0x25b8) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x25b4) + *(int *)(this + 0x25b8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPc::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e91850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe91850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x25b4);
  if (iVar3 != iVar3 + *(int *)(this + 0x25b8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x25b4) + *(int *)(this + 0x25b8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPc::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e918c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe918c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x25b4);
  if (iVar1 != iVar1 + *(int *)(this + 0x25b8) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x25b4) + *(int *)(this + 0x25b8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPc::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e91900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe91900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x25b4);
  if (iVar2 != iVar2 + *(int *)(this + 0x25b8) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x25b8) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClass::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e91940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe91940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x1b4);
  if (iVar3 != iVar3 + *(int *)(this + 0x1b8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x1b4) + *(int *)(this + 0x1b8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClass::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e919c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe919c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x1b4);
  if (iVar3 != iVar3 + *(int *)(this + 0x1b8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x1b4) + *(int *)(this + 0x1b8) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClass::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e91a50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe91a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x1b4);
  if (iVar8 != iVar8 + *(int *)(this + 0x1b8) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x1b4) + *(int *)(this + 0x1b8) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x1b4) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClass::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e91b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe91b50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x1b4);
  if (iVar1 != iVar1 + *(int *)(this + 0x1b8) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x1b4) + *(int *)(this + 0x1b8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClass::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e91bb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe91bb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x1b4);
  if (iVar3 != iVar3 + *(int *)(this + 0x1b8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x1b4) + *(int *)(this + 0x1b8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClass::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e91c20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe91c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x1b4);
  if (iVar1 != iVar1 + *(int *)(this + 0x1b8) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x1b4) + *(int *)(this + 0x1b8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClass::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e91c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe91c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x1b4);
  if (iVar2 != iVar2 + *(int *)(this + 0x1b8) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x1b8) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClassJob::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e91ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe91ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x1b4);
  if (iVar3 != iVar3 + *(int *)(this + 0x1b8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x1b4) + *(int *)(this + 0x1b8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClassJob::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e91d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe91d20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x1b4);
  if (iVar3 != iVar3 + *(int *)(this + 0x1b8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x1b4) + *(int *)(this + 0x1b8) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClassJob::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e91db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe91db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x1b4);
  if (iVar8 != iVar8 + *(int *)(this + 0x1b8) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x1b4) + *(int *)(this + 0x1b8) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x1b4) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClassJob::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e91eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe91eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x1b4);
  if (iVar1 != iVar1 + *(int *)(this + 0x1b8) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x1b4) + *(int *)(this + 0x1b8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClassJob::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e91f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe91f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x1b4);
  if (iVar3 != iVar3 + *(int *)(this + 0x1b8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x1b4) + *(int *)(this + 0x1b8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClassJob::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e91f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe91f80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x1b4);
  if (iVar1 != iVar1 + *(int *)(this + 0x1b8) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x1b4) + *(int *)(this + 0x1b8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPcClassJob::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e91fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe91fc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x1b4);
  if (iVar2 != iVar2 + *(int *)(this + 0x1b8) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x1b8) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaQuest::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e92000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe92000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x1b4);
  if (iVar3 != iVar3 + *(int *)(this + 0x1b8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x1b4) + *(int *)(this + 0x1b8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaQuest::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e92080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe92080u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x1b4);
  if (iVar3 != iVar3 + *(int *)(this + 0x1b8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x1b4) + *(int *)(this + 0x1b8) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaQuest::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e92110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe92110u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x1b4);
  if (iVar8 != iVar8 + *(int *)(this + 0x1b8) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x1b4) + *(int *)(this + 0x1b8) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x1b4) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaQuest::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e92210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe92210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x1b4);
  if (iVar1 != iVar1 + *(int *)(this + 0x1b8) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x1b4) + *(int *)(this + 0x1b8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaQuest::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e92270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe92270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x1b4);
  if (iVar3 != iVar3 + *(int *)(this + 0x1b8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x1b4) + *(int *)(this + 0x1b8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaQuest::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e922e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe922e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x1b4);
  if (iVar1 != iVar1 + *(int *)(this + 0x1b8) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x1b4) + *(int *)(this + 0x1b8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaQuest::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e92320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe92320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x1b4);
  if (iVar2 != iVar2 + *(int *)(this + 0x1b8) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x1b8) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPvP::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e92360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe92360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x1b4);
  if (iVar3 != iVar3 + *(int *)(this + 0x1b8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x1b4) + *(int *)(this + 0x1b8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPvP::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e923e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe923e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x1b4);
  if (iVar3 != iVar3 + *(int *)(this + 0x1b8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x1b4) + *(int *)(this + 0x1b8) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPvP::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e92470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe92470u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x1b4);
  if (iVar8 != iVar8 + *(int *)(this + 0x1b8) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x1b4) + *(int *)(this + 0x1b8) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x1b4) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPvP::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e92570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe92570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x1b4);
  if (iVar1 != iVar1 + *(int *)(this + 0x1b8) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x1b4) + *(int *)(this + 0x1b8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPvP::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e925d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe925d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x1b4);
  if (iVar3 != iVar3 + *(int *)(this + 0x1b8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x1b4) + *(int *)(this + 0x1b8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPvP::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e92640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe92640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x1b4);
  if (iVar1 != iVar1 + *(int *)(this + 0x1b8) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x1b4) + *(int *)(this + 0x1b8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaPvP::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e92680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe92680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x1b4);
  if (iVar2 != iVar2 + *(int *)(this + 0x1b8) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x1b8) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaRetainer::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e926c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe926c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x334);
  if (iVar3 != iVar3 + *(int *)(this + 0x338) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x334) + *(int *)(this + 0x338) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaRetainer::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e92740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe92740u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x334);
  if (iVar3 != iVar3 + *(int *)(this + 0x338) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x334) + *(int *)(this + 0x338) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaRetainer::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e927d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe927d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x334);
  if (iVar8 != iVar8 + *(int *)(this + 0x338) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x334) + *(int *)(this + 0x338) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x334) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaRetainer::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e928d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe928d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x334);
  if (iVar1 != iVar1 + *(int *)(this + 0x338) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x334) + *(int *)(this + 0x338) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaRetainer::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e92930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe92930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x334);
  if (iVar3 != iVar3 + *(int *)(this + 0x338) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x334) + *(int *)(this + 0x338) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaRetainer::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e929a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe929a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x334);
  if (iVar1 != iVar1 + *(int *)(this + 0x338) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x334) + *(int *)(this + 0x338) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaRetainer::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e929e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe929e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x334);
  if (iVar2 != iVar2 + *(int *)(this + 0x338) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x338) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItem::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e92a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe92a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x4b4);
  if (iVar3 != iVar3 + *(int *)(this + 0x4b8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x4b4) + *(int *)(this + 0x4b8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItem::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e92aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe92aa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x4b4);
  if (iVar3 != iVar3 + *(int *)(this + 0x4b8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x4b4) + *(int *)(this + 0x4b8) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItem::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e92b30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe92b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x4b4);
  if (iVar8 != iVar8 + *(int *)(this + 0x4b8) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x4b4) + *(int *)(this + 0x4b8) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x4b4) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItem::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e92c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe92c30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x4b4);
  if (iVar1 != iVar1 + *(int *)(this + 0x4b8) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x4b4) + *(int *)(this + 0x4b8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItem::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e92c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe92c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x4b4);
  if (iVar3 != iVar3 + *(int *)(this + 0x4b8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x4b4) + *(int *)(this + 0x4b8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItem::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e92d00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe92d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x4b4);
  if (iVar1 != iVar1 + *(int *)(this + 0x4b8) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x4b4) + *(int *)(this + 0x4b8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItem::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e92d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe92d40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x4b4);
  if (iVar2 != iVar2 + *(int *)(this + 0x4b8) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x4b8) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbGilItem::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e92d80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe92d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbGilItem::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e92e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe92e00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbGilItem::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e92e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe92e90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x214);
  if (iVar8 != iVar8 + *(int *)(this + 0x218) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x214) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbGilItem::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e92f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe92f90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbGilItem::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e92ff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe92ff0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbGilItem::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e93060(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe93060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbGilItem::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e930a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe930a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x214);
  if (iVar2 != iVar2 + *(int *)(this + 0x218) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x218) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemBaggage::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e930e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe930e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemBaggage::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e93160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe93160u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemBaggage::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e931f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe931f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x214);
  if (iVar8 != iVar8 + *(int *)(this + 0x218) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x214) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemBaggage::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e932f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe932f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemBaggage::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e93350(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe93350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemBaggage::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e933c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe933c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemBaggage::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e93400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe93400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x214);
  if (iVar2 != iVar2 + *(int *)(this + 0x218) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x218) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMannequin::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e93440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe93440u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMannequin::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e934c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe934c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMannequin::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e93550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe93550u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x214);
  if (iVar8 != iVar8 + *(int *)(this + 0x218) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x214) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMannequin::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e93650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe93650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMannequin::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e936b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe936b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMannequin::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e93720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe93720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMannequin::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e93760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe93760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x214);
  if (iVar2 != iVar2 + *(int *)(this + 0x218) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x218) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryGear::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e937a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe937a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryGear::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e93820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe93820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryGear::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e938b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe938b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x214);
  if (iVar8 != iVar8 + *(int *)(this + 0x218) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x214) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryGear::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e939b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe939b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryGear::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e93a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe93a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryGear::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e93a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe93a80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryGear::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e93ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe93ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x214);
  if (iVar2 != iVar2 + *(int *)(this + 0x218) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x218) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryRing::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e93b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe93b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryRing::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e93b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe93b80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryRing::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e93c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe93c10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x214);
  if (iVar8 != iVar8 + *(int *)(this + 0x218) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x214) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryRing::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e93d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe93d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryRing::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e93d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe93d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryRing::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e93de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe93de0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryRing::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e93e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe93e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x214);
  if (iVar2 != iVar2 + *(int *)(this + 0x218) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x218) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryJobStone::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e93e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe93e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryJobStone::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e93ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe93ee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryJobStone::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e93f70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe93f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x214);
  if (iVar8 != iVar8 + *(int *)(this + 0x218) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x214) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryJobStone::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e94070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe94070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryJobStone::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e940d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe940d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryJobStone::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e94140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe94140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryJobStone::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e94180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe94180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x214);
  if (iVar2 != iVar2 + *(int *)(this + 0x218) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x218) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryMainArm::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e941c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe941c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryMainArm::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e94240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe94240u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryMainArm::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e942d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe942d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x214);
  if (iVar8 != iVar8 + *(int *)(this + 0x218) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x214) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryMainArm::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e943d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe943d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryMainArm::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e94430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe94430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryMainArm::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e944a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe944a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemArmoryMainArm::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e944e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe944e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x214);
  if (iVar2 != iVar2 + *(int *)(this + 0x218) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x218) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemGil::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e94520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe94520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemGil::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e945a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe945a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemGil::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e94630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe94630u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x214);
  if (iVar8 != iVar8 + *(int *)(this + 0x218) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x214) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemGil::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e94730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe94730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemGil::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e94790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe94790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemGil::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e94800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe94800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemGil::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e94840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe94840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x214);
  if (iVar2 != iVar2 + *(int *)(this + 0x218) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x218) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCrystal::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e94880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe94880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCrystal::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e94900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe94900u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCrystal::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e94990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe94990u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x214);
  if (iVar8 != iVar8 + *(int *)(this + 0x218) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x214) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCrystal::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e94a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe94a90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCrystal::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e94af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe94af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCrystal::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e94b60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe94b60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCrystal::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e94ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe94ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x214);
  if (iVar2 != iVar2 + *(int *)(this + 0x218) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x218) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemTrade::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e94be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe94be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemTrade::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e94c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe94c60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemTrade::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e94cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe94cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x214);
  if (iVar8 != iVar8 + *(int *)(this + 0x218) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x214) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemTrade::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e94df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe94df0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemTrade::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e94e50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe94e50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemTrade::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e94ec0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe94ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemTrade::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e94f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe94f00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x214);
  if (iVar2 != iVar2 + *(int *)(this + 0x218) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x218) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemDelivery::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e94f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe94f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemDelivery::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e94fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe94fc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemDelivery::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e95050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe95050u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x214);
  if (iVar8 != iVar8 + *(int *)(this + 0x218) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x214) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemDelivery::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e95150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe95150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemDelivery::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e951b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe951b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemDelivery::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e95220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe95220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemDelivery::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e95260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe95260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x214);
  if (iVar2 != iVar2 + *(int *)(this + 0x218) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x218) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoBlacklist::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e952a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe952a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x2d4);
  if (iVar3 != iVar3 + *(int *)(this + 0x2d8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoBlacklist::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e95320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe95320u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x2d4);
  if (iVar3 != iVar3 + *(int *)(this + 0x2d8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoBlacklist::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e953b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe953b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x2d4);
  if (iVar8 != iVar8 + *(int *)(this + 0x2d8) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x2d4) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoBlacklist::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e954b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe954b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x2d4);
  if (iVar1 != iVar1 + *(int *)(this + 0x2d8) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoBlacklist::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e95510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe95510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x2d4);
  if (iVar3 != iVar3 + *(int *)(this + 0x2d8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoBlacklist::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e95580(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe95580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x2d4);
  if (iVar1 != iVar1 + *(int *)(this + 0x2d8) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoBlacklist::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e955c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe955c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x2d4);
  if (iVar2 != iVar2 + *(int *)(this + 0x2d8) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x2d8) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFriendlist::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e95600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe95600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x454);
  if (iVar3 != iVar3 + *(int *)(this + 0x458) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x454) + *(int *)(this + 0x458) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFriendlist::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e95680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe95680u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x454);
  if (iVar3 != iVar3 + *(int *)(this + 0x458) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x454) + *(int *)(this + 0x458) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFriendlist::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e95710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe95710u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x454);
  if (iVar8 != iVar8 + *(int *)(this + 0x458) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x454) + *(int *)(this + 0x458) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x454) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFriendlist::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e95810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe95810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x454);
  if (iVar1 != iVar1 + *(int *)(this + 0x458) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x454) + *(int *)(this + 0x458) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFriendlist::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e95870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe95870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x454);
  if (iVar3 != iVar3 + *(int *)(this + 0x458) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x454) + *(int *)(this + 0x458) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFriendlist::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e958e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe958e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x454);
  if (iVar1 != iVar1 + *(int *)(this + 0x458) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x454) + *(int *)(this + 0x458) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFriendlist::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e95920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe95920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x454);
  if (iVar2 != iVar2 + *(int *)(this + 0x458) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x458) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoProfile::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e95960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe95960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x394);
  if (iVar3 != iVar3 + *(int *)(this + 0x398) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x394) + *(int *)(this + 0x398) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoProfile::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e959e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe959e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x394);
  if (iVar3 != iVar3 + *(int *)(this + 0x398) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x394) + *(int *)(this + 0x398) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoProfile::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e95a70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe95a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x394);
  if (iVar8 != iVar8 + *(int *)(this + 0x398) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x394) + *(int *)(this + 0x398) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x394) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoProfile::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e95b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe95b70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x394);
  if (iVar1 != iVar1 + *(int *)(this + 0x398) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x394) + *(int *)(this + 0x398) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoProfile::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e95bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe95bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x394);
  if (iVar3 != iVar3 + *(int *)(this + 0x398) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x394) + *(int *)(this + 0x398) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoProfile::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e95c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe95c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x394);
  if (iVar1 != iVar1 + *(int *)(this + 0x398) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x394) + *(int *)(this + 0x398) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoProfile::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e95c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe95c80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x394);
  if (iVar2 != iVar2 + *(int *)(this + 0x398) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x398) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLinkshellList::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e95cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe95cc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x1b4);
  if (iVar3 != iVar3 + *(int *)(this + 0x1b8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x1b4) + *(int *)(this + 0x1b8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLinkshellList::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e95d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe95d40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x1b4);
  if (iVar3 != iVar3 + *(int *)(this + 0x1b8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x1b4) + *(int *)(this + 0x1b8) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLinkshellList::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e95dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe95dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x1b4);
  if (iVar8 != iVar8 + *(int *)(this + 0x1b8) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x1b4) + *(int *)(this + 0x1b8) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x1b4) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLinkshellList::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e95ed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe95ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x1b4);
  if (iVar1 != iVar1 + *(int *)(this + 0x1b8) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x1b4) + *(int *)(this + 0x1b8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLinkshellList::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e95f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe95f30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x1b4);
  if (iVar3 != iVar3 + *(int *)(this + 0x1b8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x1b4) + *(int *)(this + 0x1b8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLinkshellList::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e95fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe95fa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x1b4);
  if (iVar1 != iVar1 + *(int *)(this + 0x1b8) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x1b4) + *(int *)(this + 0x1b8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLinkshellList::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e95fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe95fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x1b4);
  if (iVar2 != iVar2 + *(int *)(this + 0x1b8) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x1b8) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterBox::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e96020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe96020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x514);
  if (iVar3 != iVar3 + *(int *)(this + 0x518) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x514) + *(int *)(this + 0x518) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterBox::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e960a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe960a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x514);
  if (iVar3 != iVar3 + *(int *)(this + 0x518) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x514) + *(int *)(this + 0x518) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterBox::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e96130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe96130u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x514);
  if (iVar8 != iVar8 + *(int *)(this + 0x518) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x514) + *(int *)(this + 0x518) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x514) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterBox::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e96230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe96230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x514);
  if (iVar1 != iVar1 + *(int *)(this + 0x518) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x514) + *(int *)(this + 0x518) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterBox::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e96290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe96290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x514);
  if (iVar3 != iVar3 + *(int *)(this + 0x518) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x514) + *(int *)(this + 0x518) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterBox::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e96300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe96300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x514);
  if (iVar1 != iVar1 + *(int *)(this + 0x518) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x514) + *(int *)(this + 0x518) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterBox::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e96340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe96340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x514);
  if (iVar2 != iVar2 + *(int *)(this + 0x518) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x518) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterMessage::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e96380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe96380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x844);
  if (iVar3 != iVar3 + *(int *)(this + 0x848) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x844) + *(int *)(this + 0x848) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterMessage::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e96400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe96400u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x844);
  if (iVar3 != iVar3 + *(int *)(this + 0x848) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x844) + *(int *)(this + 0x848) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterMessage::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e96490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe96490u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x844);
  if (iVar8 != iVar8 + *(int *)(this + 0x848) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x844) + *(int *)(this + 0x848) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x844) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterMessage::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e96590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe96590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x844);
  if (iVar1 != iVar1 + *(int *)(this + 0x848) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x844) + *(int *)(this + 0x848) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterMessage::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e965f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe965f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x844);
  if (iVar3 != iVar3 + *(int *)(this + 0x848) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x844) + *(int *)(this + 0x848) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterMessage::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e96660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe96660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x844);
  if (iVar1 != iVar1 + *(int *)(this + 0x848) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x844) + *(int *)(this + 0x848) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoLetterMessage::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e966a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe966a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x844);
  if (iVar2 != iVar2 + *(int *)(this + 0x848) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x848) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMarket::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e966e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe966e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x2d4);
  if (iVar3 != iVar3 + *(int *)(this + 0x2d8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMarket::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e96760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe96760u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x2d4);
  if (iVar3 != iVar3 + *(int *)(this + 0x2d8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMarket::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e967f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe967f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x2d4);
  if (iVar8 != iVar8 + *(int *)(this + 0x2d8) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x2d4) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMarket::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e968f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe968f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x2d4);
  if (iVar1 != iVar1 + *(int *)(this + 0x2d8) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMarket::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e96950(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe96950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x2d4);
  if (iVar3 != iVar3 + *(int *)(this + 0x2d8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMarket::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e969c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe969c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x2d4);
  if (iVar1 != iVar1 + *(int *)(this + 0x2d8) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemMarket::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e96a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe96a00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x2d4);
  if (iVar2 != iVar2 + *(int *)(this + 0x2d8) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x2d8) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCarry::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e96a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe96a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCarry::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e96ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe96ac0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCarry::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e96b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe96b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x214);
  if (iVar8 != iVar8 + *(int *)(this + 0x218) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x214) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCarry::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e96c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe96c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCarry::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e96cb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe96cb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCarry::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e96d20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe96d20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaItemCarry::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e96d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe96d60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x214);
  if (iVar2 != iVar2 + *(int *)(this + 0x218) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x218) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFcData::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e96da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe96da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x2d4);
  if (iVar3 != iVar3 + *(int *)(this + 0x2d8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFcData::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e96e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe96e20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x2d4);
  if (iVar3 != iVar3 + *(int *)(this + 0x2d8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFcData::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e96eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe96eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x2d4);
  if (iVar8 != iVar8 + *(int *)(this + 0x2d8) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x2d4) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFcData::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e96fb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe96fb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x2d4);
  if (iVar1 != iVar1 + *(int *)(this + 0x2d8) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFcData::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e97010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe97010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x2d4);
  if (iVar3 != iVar3 + *(int *)(this + 0x2d8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFcData::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e97080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe97080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x2d4);
  if (iVar1 != iVar1 + *(int *)(this + 0x2d8) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaInfoFcData::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e970c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe970c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x2d4);
  if (iVar2 != iVar2 + *(int *)(this + 0x2d8) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x2d8) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaServerData::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e97100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe97100u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaServerData::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e97180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe97180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaServerData::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e97210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe97210u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x214);
  if (iVar8 != iVar8 + *(int *)(this + 0x218) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x214) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaServerData::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e97310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe97310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaServerData::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e97370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe97370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaServerData::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e973e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe973e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaServerData::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e97420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe97420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x214);
  if (iVar2 != iVar2 + *(int *)(this + 0x218) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x218) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaGiftLetterHistory::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e97460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe97460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x2d4);
  if (iVar3 != iVar3 + *(int *)(this + 0x2d8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaGiftLetterHistory::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e974e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe974e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x2d4);
  if (iVar3 != iVar3 + *(int *)(this + 0x2d8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaGiftLetterHistory::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e97570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe97570u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x2d4);
  if (iVar8 != iVar8 + *(int *)(this + 0x2d8) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x2d4) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaGiftLetterHistory::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e97670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe97670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x2d4);
  if (iVar1 != iVar1 + *(int *)(this + 0x2d8) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaGiftLetterHistory::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e976d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe976d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x2d4);
  if (iVar3 != iVar3 + *(int *)(this + 0x2d8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaGiftLetterHistory::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e97740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe97740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x2d4);
  if (iVar1 != iVar1 + *(int *)(this + 0x2d8) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbCharaGiftLetterHistory::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e97780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe97780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x2d4);
  if (iVar2 != iVar2 + *(int *)(this + 0x2d8) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x2d8) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcItem::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e977c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe977c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcItem::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e97840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe97840u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcItem::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e978d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe978d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x214);
  if (iVar8 != iVar8 + *(int *)(this + 0x218) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x214) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcItem::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e979d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe979d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcItem::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e97a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe97a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcItem::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e97aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe97aa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcItem::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e97ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe97ae0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x214);
  if (iVar2 != iVar2 + *(int *)(this + 0x218) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x218) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcGilItem::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e97b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe97b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcGilItem::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e97ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe97ba0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcGilItem::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e97c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe97c30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x214);
  if (iVar8 != iVar8 + *(int *)(this + 0x218) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x214) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcGilItem::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e97d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe97d30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcGilItem::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e97d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe97d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcGilItem::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e97e00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe97e00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcGilItem::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e97e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe97e40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x214);
  if (iVar2 != iVar2 + *(int *)(this + 0x218) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x218) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemBox::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e97e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe97e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x244);
  if (iVar3 != iVar3 + *(int *)(this + 0x248) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x244) + *(int *)(this + 0x248) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemBox::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e97f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe97f00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x244);
  if (iVar3 != iVar3 + *(int *)(this + 0x248) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x244) + *(int *)(this + 0x248) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemBox::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e97f90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe97f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x244);
  if (iVar8 != iVar8 + *(int *)(this + 0x248) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x244) + *(int *)(this + 0x248) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x244) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemBox::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e98090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe98090u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x244);
  if (iVar1 != iVar1 + *(int *)(this + 0x248) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x244) + *(int *)(this + 0x248) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemBox::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e980f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe980f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x244);
  if (iVar3 != iVar3 + *(int *)(this + 0x248) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x244) + *(int *)(this + 0x248) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemBox::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e98160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe98160u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x244);
  if (iVar1 != iVar1 + *(int *)(this + 0x248) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x244) + *(int *)(this + 0x248) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemBox::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e981a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe981a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x244);
  if (iVar2 != iVar2 + *(int *)(this + 0x248) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x248) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemProperty::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e981e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe981e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x274);
  if (iVar3 != iVar3 + *(int *)(this + 0x278) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x274) + *(int *)(this + 0x278) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemProperty::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e98260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe98260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x274);
  if (iVar3 != iVar3 + *(int *)(this + 0x278) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x274) + *(int *)(this + 0x278) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemProperty::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e982f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe982f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x274);
  if (iVar8 != iVar8 + *(int *)(this + 0x278) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x274) + *(int *)(this + 0x278) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x274) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemProperty::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e983f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe983f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x274);
  if (iVar1 != iVar1 + *(int *)(this + 0x278) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x274) + *(int *)(this + 0x278) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemProperty::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e98450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe98450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x274);
  if (iVar3 != iVar3 + *(int *)(this + 0x278) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x274) + *(int *)(this + 0x278) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemProperty::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e984c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe984c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x274);
  if (iVar1 != iVar1 + *(int *)(this + 0x278) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x274) + *(int *)(this + 0x278) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemProperty::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e98500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe98500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x274);
  if (iVar2 != iVar2 + *(int *)(this + 0x278) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x278) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemLog::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e98540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe98540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x244);
  if (iVar3 != iVar3 + *(int *)(this + 0x248) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x244) + *(int *)(this + 0x248) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemLog::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e985c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe985c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x244);
  if (iVar3 != iVar3 + *(int *)(this + 0x248) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x244) + *(int *)(this + 0x248) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemLog::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e98650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe98650u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x244);
  if (iVar8 != iVar8 + *(int *)(this + 0x248) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x244) + *(int *)(this + 0x248) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x244) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemLog::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e98750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe98750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x244);
  if (iVar1 != iVar1 + *(int *)(this + 0x248) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x244) + *(int *)(this + 0x248) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemLog::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e987b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe987b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x244);
  if (iVar3 != iVar3 + *(int *)(this + 0x248) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x244) + *(int *)(this + 0x248) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemLog::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e98820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe98820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x244);
  if (iVar1 != iVar1 + *(int *)(this + 0x248) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x244) + *(int *)(this + 0x248) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemLog::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e98860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe98860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x244);
  if (iVar2 != iVar2 + *(int *)(this + 0x248) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x248) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLandSet::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e988a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe988a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLandSet::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e98920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe98920u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLandSet::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e989b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe989b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x194);
  if (iVar8 != iVar8 + *(int *)(this + 0x198) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x194) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLandSet::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e98ab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe98ab0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLandSet::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e98b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe98b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLandSet::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e98b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe98b80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLandSet::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e98bc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe98bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x194);
  if (iVar2 != iVar2 + *(int *)(this + 0x198) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x198) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLand::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e98c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe98c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x3f4);
  if (iVar3 != iVar3 + *(int *)(this + 0x3f8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x3f4) + *(int *)(this + 0x3f8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLand::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e98c80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe98c80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x3f4);
  if (iVar3 != iVar3 + *(int *)(this + 0x3f8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x3f4) + *(int *)(this + 0x3f8) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLand::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e98d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe98d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x3f4);
  if (iVar8 != iVar8 + *(int *)(this + 0x3f8) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x3f4) + *(int *)(this + 0x3f8) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x3f4) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLand::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e98e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe98e10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x3f4);
  if (iVar1 != iVar1 + *(int *)(this + 0x3f8) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x3f4) + *(int *)(this + 0x3f8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLand::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e98e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe98e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x3f4);
  if (iVar3 != iVar3 + *(int *)(this + 0x3f8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x3f4) + *(int *)(this + 0x3f8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLand::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e98ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe98ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x3f4);
  if (iVar1 != iVar1 + *(int *)(this + 0x3f8) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x3f4) + *(int *)(this + 0x3f8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLand::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e98f20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe98f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x3f4);
  if (iVar2 != iVar2 + *(int *)(this + 0x3f8) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x3f8) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHouse::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e98f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe98f60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x4b4);
  if (iVar3 != iVar3 + *(int *)(this + 0x4b8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x4b4) + *(int *)(this + 0x4b8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHouse::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e98fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe98fe0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x4b4);
  if (iVar3 != iVar3 + *(int *)(this + 0x4b8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x4b4) + *(int *)(this + 0x4b8) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHouse::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e99070(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe99070u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x4b4);
  if (iVar8 != iVar8 + *(int *)(this + 0x4b8) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x4b4) + *(int *)(this + 0x4b8) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x4b4) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHouse::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e99170(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe99170u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x4b4);
  if (iVar1 != iVar1 + *(int *)(this + 0x4b8) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x4b4) + *(int *)(this + 0x4b8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHouse::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e991d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe991d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x4b4);
  if (iVar3 != iVar3 + *(int *)(this + 0x4b8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x4b4) + *(int *)(this + 0x4b8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHouse::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e99240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe99240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x4b4);
  if (iVar1 != iVar1 + *(int *)(this + 0x4b8) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x4b4) + *(int *)(this + 0x4b8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHouse::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e99280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe99280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x4b4);
  if (iVar2 != iVar2 + *(int *)(this + 0x4b8) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x4b8) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e992c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe992c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x294);
  if (iVar3 != iVar3 + *(int *)(this + 0x298) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x294) + *(int *)(this + 0x298) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e99340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe99340u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x294);
  if (iVar3 != iVar3 + *(int *)(this + 0x298) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x294) + *(int *)(this + 0x298) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e993d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe993d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x294);
  if (iVar8 != iVar8 + *(int *)(this + 0x298) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x294) + *(int *)(this + 0x298) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x294) + (iVar6 + iVar5) * 0x14;
        *(uint *)(iVar1 + 0x10) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *(uint *)(iVar1 + 0x10) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 1 << (bVar2 & 0x1f);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e994d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe994d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x294);
  if (iVar1 != iVar1 + *(int *)(this + 0x298) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x294) + *(int *)(this + 0x298) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e99530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe99530u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x294);
  if (iVar3 != iVar3 + *(int *)(this + 0x298) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x294) + *(int *)(this + 0x298) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

