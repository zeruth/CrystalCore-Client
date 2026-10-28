#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Application::Network::WorkDefinitions::Tag_Sync_LeveProperty::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_00e8f440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe8f440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8f540(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8f540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e8f5a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8f5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8f610(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8f610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e8f650(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8f650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e8f6b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8f6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e8f730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8f730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e8f7c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe8f7c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8f8c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8f8c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e8f920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8f920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8f990(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8f990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e8f9d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8f9d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e8fa30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8fa30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e8fab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8fab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e8fb40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe8fb40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8fc40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8fc40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e8fca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8fca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8fd10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8fd10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e8fd50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8fd50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e8fdb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe8fdb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e8fe30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe8fe30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e8fec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe8fec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e8ffc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe8ffc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e90020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe90020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e90090(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e900d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe900d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e90130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe90130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e901b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe901b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e90240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe90240u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e90340(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e903a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe903a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e90410(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e90450(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e90500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe90500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e90580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe90580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e90610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe90610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e90710(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e90770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe90770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e907e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe907e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e90820(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e90860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe90860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e908e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe908e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e90970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe90970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e90a70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e90ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe90ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e90b40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90b40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e90b80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e90bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe90bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e90c40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe90c40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e90cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe90cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e90dd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e90e30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe90e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e90ea0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e90ee0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe90ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e90f20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe90f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e90fa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe90fa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e91030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe91030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e91130(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe91130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e91190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe91190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e91200(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe91200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e91240(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe91240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e91280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe91280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e91300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe91300u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e91390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe91390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e91490(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe91490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e914f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe914f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e91560(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe91560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e915a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe915a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e915e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe915e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e91660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe91660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e916f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe916f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e917f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe917f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e91850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe91850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e918c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe918c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e91900(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe91900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e91940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe91940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e919c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe919c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e91a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe91a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e91b50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe91b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e91bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe91bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e91c20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe91c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e91c60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe91c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e91ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe91ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e91d20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe91d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e91db0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe91db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e91eb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe91eb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e91f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe91f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e91f80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe91f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e91fc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe91fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e92000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe92000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e92080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe92080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e92110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe92110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e92210(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe92210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e92270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe92270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e922e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe922e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e92320(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe92320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e92360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe92360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e923e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe923e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e92470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe92470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e92570(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe92570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e925d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe925d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e92640(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe92640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e92680(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe92680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e926c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe926c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e92740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe92740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e927d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe927d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e928d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe928d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e92930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe92930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e929a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe929a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e929e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe929e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e92a20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe92a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e92aa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe92aa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e92b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe92b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e92c30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe92c30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e92c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe92c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e92d00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe92d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e92d40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe92d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e92d80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe92d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e92e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe92e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e92e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe92e90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e92f90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe92f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e92ff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe92ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e93060(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe93060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e930a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe930a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e930e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe930e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e93160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe93160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e931f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe931f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e932f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe932f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e93350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe93350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e933c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe933c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e93400(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe93400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e93440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe93440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e934c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe934c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e93550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe93550u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e93650(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe93650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e936b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe936b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e93720(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe93720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e93760(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe93760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e937a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe937a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e93820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe93820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e938b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe938b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e939b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe939b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e93a10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe93a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e93a80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe93a80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e93ac0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe93ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e93b00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe93b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e93b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe93b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e93c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe93c10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e93d10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe93d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e93d70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe93d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e93de0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe93de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e93e20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe93e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e93e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe93e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e93ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe93ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e93f70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe93f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e94070(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe94070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e940d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe940d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e94140(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe94140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e94180(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe94180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e941c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe941c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e94240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe94240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e942d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe942d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e943d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe943d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e94430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe94430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e944a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe944a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e944e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe944e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e94520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe94520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e945a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe945a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e94630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe94630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e94730(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe94730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e94790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe94790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e94800(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe94800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e94840(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe94840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e94880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe94880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e94900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe94900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e94990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe94990u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e94a90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe94a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e94af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe94af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e94b60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe94b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e94ba0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe94ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e94be0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe94be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e94c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe94c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e94cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe94cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e94df0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe94df0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e94e50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe94e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e94ec0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe94ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e94f00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe94f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e94f40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe94f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e94fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe94fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e95050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe95050u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e95150(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe95150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e951b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe951b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e95220(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe95220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e95260(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe95260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e952a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe952a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e95320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe95320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e953b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe953b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e954b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe954b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e95510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe95510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e95580(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe95580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e955c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe955c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e95600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe95600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e95680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe95680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e95710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe95710u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e95810(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe95810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e95870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe95870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e958e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe958e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e95920(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe95920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e95960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe95960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e959e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe959e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e95a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe95a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e95b70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe95b70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e95bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe95bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e95c40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe95c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e95c80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe95c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e95cc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe95cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e95d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe95d40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e95dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe95dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e95ed0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe95ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e95f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe95f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e95fa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe95fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e95fe0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe95fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e96020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe96020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e960a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe960a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e96130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe96130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e96230(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe96230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e96290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe96290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e96300(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe96300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e96340(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe96340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e96380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe96380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e96400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe96400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e96490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe96490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e96590(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe96590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e965f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe965f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e96660(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe96660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e966a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe966a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e966e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe966e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e96760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe96760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e967f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe967f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e968f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe968f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e96950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe96950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e969c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe969c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e96a00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe96a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e96a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe96a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e96ac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe96ac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e96b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe96b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e96c50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe96c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e96cb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe96cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e96d20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe96d20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e96d60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe96d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e96da0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe96da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e96e20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe96e20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e96eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe96eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e96fb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe96fb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e97010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe97010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e97080(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe97080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e970c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe970c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e97100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe97100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e97180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe97180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e97210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe97210u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e97310(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe97310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e97370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe97370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e973e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe973e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e97420(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe97420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e97460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe97460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e974e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe974e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e97570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe97570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e97670(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe97670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e976d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe976d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e97740(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe97740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e97780(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe97780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e977c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe977c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e97840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe97840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e978d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe978d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e979d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe979d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e97a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe97a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e97aa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe97aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e97ae0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe97ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e97b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe97b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e97ba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe97ba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e97c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe97c30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e97d30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe97d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e97d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe97d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e97e00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe97e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e97e40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe97e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e97e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe97e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e97f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe97f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e97f90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe97f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e98090(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe98090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e980f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe980f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e98160(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe98160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e981a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe981a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e981e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe981e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e98260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe98260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e982f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe982f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e983f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe983f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e98450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe98450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e984c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe984c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e98500(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe98500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e98540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe98540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e985c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe985c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e98650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe98650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e98750(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe98750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e987b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe987b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e98820(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe98820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e98860(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe98860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e988a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe988a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e98920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe98920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e989b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe989b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e98ab0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe98ab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e98b10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe98b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e98b80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe98b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e98bc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe98bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e98c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe98c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e98c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe98c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e98d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe98d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e98e10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe98e10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e98e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe98e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e98ee0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe98ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e98f20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe98f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e98f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe98f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e98fe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe98fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e99070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe99070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e99170(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe99170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e991d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe991d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e99240(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe99240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_NOFRAME byte GEN_THISCALL F_00e99280(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe99280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e992c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe992c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e99340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe99340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e993d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe993d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00e994d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe994d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
GEN_FRAME unsigned int GEN_THISCALL F_00e99530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe99530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e995a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe995a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage::vf10 */
GEN_NOFRAME byte GEN_THISCALL F_00e995e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe995e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00e99620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe99620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00e996a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe996a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_00e99730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe99730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e99830(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe99830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem::vf8 */
GEN_FRAME unsigned int GEN_THISCALL F_00e99890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe99890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e99900(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe99900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem::vf10 */
GEN_NOFRAME byte GEN_THISCALL F_00e99940(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe99940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00e99980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe99980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x524);
  if (iVar3 != iVar3 + *(int *)(this + 0x528) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x524) + *(int *)(this + 0x528) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00e99a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe99a00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x524);
  if (iVar3 != iVar3 + *(int *)(this + 0x528) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x524) + *(int *)(this + 0x528) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_00e99a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe99a90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x524);
  if (iVar8 != iVar8 + *(int *)(this + 0x528) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x524) + *(int *)(this + 0x528) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x524) + (iVar6 + iVar5) * 0x14;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e99b90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe99b90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x524);
  if (iVar1 != iVar1 + *(int *)(this + 0x528) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x524) + *(int *)(this + 0x528) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell::vf8 */
GEN_FRAME unsigned int GEN_THISCALL F_00e99bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe99bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x524);
  if (iVar3 != iVar3 + *(int *)(this + 0x528) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x524) + *(int *)(this + 0x528) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e99c60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe99c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x524);
  if (iVar1 != iVar1 + *(int *)(this + 0x528) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x524) + *(int *)(this + 0x528) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell::vf10 */
GEN_NOFRAME byte GEN_THISCALL F_00e99ca0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe99ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x524);
  if (iVar2 != iVar2 + *(int *)(this + 0x528) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x528) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00e99ce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe99ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0xb24);
  if (iVar3 != iVar3 + *(int *)(this + 0xb28) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0xb24) + *(int *)(this + 0xb28) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00e99d60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe99d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0xb24);
  if (iVar3 != iVar3 + *(int *)(this + 0xb28) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0xb24) + *(int *)(this + 0xb28) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_00e99df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe99df0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0xb24);
  if (iVar8 != iVar8 + *(int *)(this + 0xb28) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0xb24) + *(int *)(this + 0xb28) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0xb24) + (iVar6 + iVar5) * 0x14;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e99ef0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe99ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0xb24);
  if (iVar1 != iVar1 + *(int *)(this + 0xb28) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0xb24) + *(int *)(this + 0xb28) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany::vf8 */
GEN_FRAME unsigned int GEN_THISCALL F_00e99f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe99f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0xb24);
  if (iVar3 != iVar3 + *(int *)(this + 0xb28) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0xb24) + *(int *)(this + 0xb28) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e99fc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe99fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0xb24);
  if (iVar1 != iVar1 + *(int *)(this + 0xb28) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0xb24) + *(int *)(this + 0xb28) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany::vf10 */
GEN_NOFRAME byte GEN_THISCALL F_00e9a000(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9a000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0xb24);
  if (iVar2 != iVar2 + *(int *)(this + 0xb28) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0xb28) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00e9a040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe9a040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x494);
  if (iVar3 != iVar3 + *(int *)(this + 0x498) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x494) + *(int *)(this + 0x498) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00e9a0c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe9a0c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x494);
  if (iVar3 != iVar3 + *(int *)(this + 0x498) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x494) + *(int *)(this + 0x498) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_00e9a150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe9a150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x494);
  if (iVar8 != iVar8 + *(int *)(this + 0x498) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x494) + *(int *)(this + 0x498) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x494) + (iVar6 + iVar5) * 0x14;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e9a250(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9a250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x494);
  if (iVar1 != iVar1 + *(int *)(this + 0x498) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x494) + *(int *)(this + 0x498) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember::vf8 */
GEN_FRAME unsigned int GEN_THISCALL F_00e9a2b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe9a2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x494);
  if (iVar3 != iVar3 + *(int *)(this + 0x498) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x494) + *(int *)(this + 0x498) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e9a320(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9a320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x494);
  if (iVar1 != iVar1 + *(int *)(this + 0x498) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x494) + *(int *)(this + 0x498) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember::vf10 */
GEN_NOFRAME byte GEN_THISCALL F_00e9a360(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9a360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x494);
  if (iVar2 != iVar2 + *(int *)(this + 0x498) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x498) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00e9a3a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe9a3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00e9a420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe9a420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_00e9a4b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe9a4b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e9a5b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9a5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy::vf8 */
GEN_FRAME unsigned int GEN_THISCALL F_00e9a610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe9a610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e9a680(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9a680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy::vf10 */
GEN_NOFRAME byte GEN_THISCALL F_00e9a6c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9a6c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00e9a700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe9a700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00e9a780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe9a780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_00e9a810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe9a810u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e9a910(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9a910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity::vf8 */
GEN_FRAME unsigned int GEN_THISCALL F_00e9a970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe9a970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e9a9e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9a9e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity::vf10 */
GEN_NOFRAME byte GEN_THISCALL F_00e9aa20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9aa20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00e9aa60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe9aa60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00e9aae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe9aae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_00e9ab70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe9ab70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e9ac70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9ac70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil::vf8 */
GEN_FRAME unsigned int GEN_THISCALL F_00e9acd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe9acd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e9ad40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9ad40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil::vf10 */
GEN_NOFRAME byte GEN_THISCALL F_00e9ad80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9ad80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00e9adc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe9adc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00e9ae40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe9ae40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_00e9aed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe9aed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e9afd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9afd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal::vf8 */
GEN_FRAME unsigned int GEN_THISCALL F_00e9b030(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe9b030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e9b0a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9b0a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal::vf10 */
GEN_NOFRAME byte GEN_THISCALL F_00e9b0e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9b0e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00e9b120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe9b120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x914);
  if (iVar3 != iVar3 + *(int *)(this + 0x918) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x914) + *(int *)(this + 0x918) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00e9b1a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe9b1a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x914);
  if (iVar3 != iVar3 + *(int *)(this + 0x918) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x914) + *(int *)(this + 0x918) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_00e9b230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe9b230u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(this + 0x914);
  if (iVar8 != iVar8 + *(int *)(this + 0x918) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3 GEN_EDX_ARG,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x914) + *(int *)(this + 0x918) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x914) + (iVar6 + iVar5) * 0x14;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e9b330(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9b330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x914);
  if (iVar1 != iVar1 + *(int *)(this + 0x918) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x914) + *(int *)(this + 0x918) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch::vf8 */
GEN_FRAME unsigned int GEN_THISCALL F_00e9b390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe9b390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x914);
  if (iVar3 != iVar3 + *(int *)(this + 0x918) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x914) + *(int *)(this + 0x918) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e9b400(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9b400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x914);
  if (iVar1 != iVar1 + *(int *)(this + 0x918) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x914) + *(int *)(this + 0x918) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch::vf10 */
GEN_NOFRAME byte GEN_THISCALL F_00e9b440(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9b440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x914);
  if (iVar2 != iVar2 + *(int *)(this + 0x918) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x918) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00e9b480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe9b480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer::vf5 */
GEN_FRAME unsigned int GEN_THISCALL F_00e9b500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe9b500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer::vf4 */
GEN_FRAME unsigned int GEN_THISCALL F_00e9b590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe9b590u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
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

