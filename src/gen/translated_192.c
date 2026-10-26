#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch::vf7 */
unsigned int F_00e9b330(unsigned int gen_a0)
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
unsigned int F_00e9b390(unsigned int gen_a0, unsigned int gen_a1)
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
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
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
unsigned int F_00e9b400(unsigned int gen_a0)
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
byte F_00e9b440(unsigned int gen_a0)
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
unsigned int F_00e9b480(unsigned int gen_a0, unsigned int gen_a1)
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
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
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
unsigned int F_00e9b500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
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
unsigned int F_00e9b590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4))));
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(iVar8 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer::vf7 */
unsigned int F_00e9b690(unsigned int gen_a0)
{
  GEN_ENTER(0xe9b690u, gen_a0, 0u, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer::vf8 */
unsigned int F_00e9b6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe9b6f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x224);
  if (iVar3 != iVar3 + *(int *)(this + 0x228) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer::vf9 */
unsigned int F_00e9b760(unsigned int gen_a0)
{
  GEN_ENTER(0xe9b760u, gen_a0, 0u, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer::vf10 */
byte F_00e9b7a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9b7a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem::vf6 */
unsigned int F_00e9b7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe9b7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x134);
  if (iVar3 != iVar3 + *(int *)(this + 0x138) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem::vf5 */
unsigned int F_00e9b860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe9b860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x134);
  if (iVar3 != iVar3 + *(int *)(this + 0x138) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem::vf4 */
unsigned int F_00e9b8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe9b8f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  iVar8 = *(int *)(this + 0x134);
  if (iVar8 != iVar8 + *(int *)(this + 0x138) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4))));
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(iVar8 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem::vf7 */
unsigned int F_00e9b9f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9b9f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem::vf8 */
unsigned int F_00e9ba50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe9ba50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x134);
  if (iVar3 != iVar3 + *(int *)(this + 0x138) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem::vf9 */
unsigned int F_00e9bac0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9bac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem::vf10 */
byte F_00e9bb00(unsigned int gen_a0)
{
  GEN_ENTER(0xe9bb00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer::vf6 */
unsigned int F_00e9bb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe9bb40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer::vf5 */
unsigned int F_00e9bbc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe9bbc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer::vf4 */
unsigned int F_00e9bc50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe9bc50u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4))));
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(iVar8 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer::vf7 */
unsigned int F_00e9bd50(unsigned int gen_a0)
{
  GEN_ENTER(0xe9bd50u, gen_a0, 0u, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer::vf8 */
unsigned int F_00e9bdb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe9bdb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer::vf9 */
unsigned int F_00e9be20(unsigned int gen_a0)
{
  GEN_ENTER(0xe9be20u, gen_a0, 0u, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer::vf10 */
byte F_00e9be60(unsigned int gen_a0)
{
  GEN_ENTER(0xe9be60u, gen_a0, 0u, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem::vf6 */
unsigned int F_00e9bea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe9bea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem::vf5 */
unsigned int F_00e9bf20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe9bf20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem::vf4 */
unsigned int F_00e9bfb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe9bfb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4))));
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(iVar8 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem::vf7 */
unsigned int F_00e9c0b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9c0b0u, gen_a0, 0u, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem::vf8 */
unsigned int F_00e9c110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe9c110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem::vf9 */
unsigned int F_00e9c180(unsigned int gen_a0)
{
  GEN_ENTER(0xe9c180u, gen_a0, 0u, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem::vf10 */
byte F_00e9c1c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9c1c0u, gen_a0, 0u, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory::vf6 */
unsigned int F_00e9c200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe9c200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0xc44);
  if (iVar3 != iVar3 + *(int *)(this + 0xc48) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0xc44) + *(int *)(this + 0xc48) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory::vf5 */
unsigned int F_00e9c280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe9c280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0xc44);
  if (iVar3 != iVar3 + *(int *)(this + 0xc48) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0xc44) + *(int *)(this + 0xc48) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory::vf4 */
unsigned int F_00e9c310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe9c310u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  iVar8 = *(int *)(this + 0xc44);
  if (iVar8 != iVar8 + *(int *)(this + 0xc48) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4))));
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0xc44) + *(int *)(this + 0xc48) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0xc44) + (iVar6 + iVar5) * 0x14;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory::vf7 */
unsigned int F_00e9c410(unsigned int gen_a0)
{
  GEN_ENTER(0xe9c410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0xc44);
  if (iVar1 != iVar1 + *(int *)(this + 0xc48) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0xc44) + *(int *)(this + 0xc48) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory::vf8 */
unsigned int F_00e9c470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe9c470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0xc44);
  if (iVar3 != iVar3 + *(int *)(this + 0xc48) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0xc44) + *(int *)(this + 0xc48) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory::vf9 */
unsigned int F_00e9c4e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9c4e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0xc44);
  if (iVar1 != iVar1 + *(int *)(this + 0xc48) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0xc44) + *(int *)(this + 0xc48) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory::vf10 */
byte F_00e9c520(unsigned int gen_a0)
{
  GEN_ENTER(0xe9c520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0xc44);
  if (iVar2 != iVar2 + *(int *)(this + 0xc48) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0xc48) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer::vf6 */
unsigned int F_00e9c560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe9c560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x374);
  if (iVar3 != iVar3 + *(int *)(this + 0x378) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x374) + *(int *)(this + 0x378) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer::vf5 */
unsigned int F_00e9c5e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe9c5e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x374);
  if (iVar3 != iVar3 + *(int *)(this + 0x378) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x374) + *(int *)(this + 0x378) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer::vf4 */
unsigned int F_00e9c670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe9c670u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  iVar8 = *(int *)(this + 0x374);
  if (iVar8 != iVar8 + *(int *)(this + 0x378) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4))));
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x374) + *(int *)(this + 0x378) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x374) + (iVar6 + iVar5) * 0x14;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer::vf7 */
unsigned int F_00e9c770(unsigned int gen_a0)
{
  GEN_ENTER(0xe9c770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x374);
  if (iVar1 != iVar1 + *(int *)(this + 0x378) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x374) + *(int *)(this + 0x378) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer::vf8 */
unsigned int F_00e9c7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe9c7d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x374);
  if (iVar3 != iVar3 + *(int *)(this + 0x378) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x374) + *(int *)(this + 0x378) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer::vf9 */
unsigned int F_00e9c840(unsigned int gen_a0)
{
  GEN_ENTER(0xe9c840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x374);
  if (iVar1 != iVar1 + *(int *)(this + 0x378) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x374) + *(int *)(this + 0x378) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer::vf10 */
byte F_00e9c880(unsigned int gen_a0)
{
  GEN_ENTER(0xe9c880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x374);
  if (iVar2 != iVar2 + *(int *)(this + 0x378) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x378) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin::vf6 */
unsigned int F_00e9c8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe9c8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x3a4);
  if (iVar3 != iVar3 + *(int *)(this + 0x3a8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x3a4) + *(int *)(this + 0x3a8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin::vf5 */
unsigned int F_00e9c940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe9c940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x3a4);
  if (iVar3 != iVar3 + *(int *)(this + 0x3a8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x3a4) + *(int *)(this + 0x3a8) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin::vf4 */
unsigned int F_00e9c9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe9c9d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  iVar8 = *(int *)(this + 0x3a4);
  if (iVar8 != iVar8 + *(int *)(this + 0x3a8) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4))));
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x3a4) + *(int *)(this + 0x3a8) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x3a4) + (iVar6 + iVar5) * 0x14;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin::vf7 */
unsigned int F_00e9cad0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9cad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x3a4);
  if (iVar1 != iVar1 + *(int *)(this + 0x3a8) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x3a4) + *(int *)(this + 0x3a8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin::vf8 */
unsigned int F_00e9cb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe9cb30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x3a4);
  if (iVar3 != iVar3 + *(int *)(this + 0x3a8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x3a4) + *(int *)(this + 0x3a8) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin::vf9 */
unsigned int F_00e9cba0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9cba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x3a4);
  if (iVar1 != iVar1 + *(int *)(this + 0x3a8) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x3a4) + *(int *)(this + 0x3a8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin::vf10 */
byte F_00e9cbe0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9cbe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x3a4);
  if (iVar2 != iVar2 + *(int *)(this + 0x3a8) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x3a8) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision::vf6 */
unsigned int F_00e9cc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe9cc20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision::vf5 */
unsigned int F_00e9cca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe9cca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision::vf4 */
unsigned int F_00e9cd30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe9cd30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4))));
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(iVar8 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision::vf7 */
unsigned int F_00e9ce30(unsigned int gen_a0)
{
  GEN_ENTER(0xe9ce30u, gen_a0, 0u, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision::vf8 */
unsigned int F_00e9ce90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe9ce90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision::vf9 */
unsigned int F_00e9cf00(unsigned int gen_a0)
{
  GEN_ENTER(0xe9cf00u, gen_a0, 0u, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision::vf10 */
byte F_00e9cf40(unsigned int gen_a0)
{
  GEN_ENTER(0xe9cf40u, gen_a0, 0u, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory::vf6 */
unsigned int F_00e9cf80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe9cf80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory::vf5 */
unsigned int F_00e9d000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe9d000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory::vf4 */
unsigned int F_00e9d090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe9d090u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4))));
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(iVar8 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory::vf7 */
unsigned int F_00e9d190(unsigned int gen_a0)
{
  GEN_ENTER(0xe9d190u, gen_a0, 0u, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory::vf8 */
unsigned int F_00e9d1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe9d1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory::vf9 */
unsigned int F_00e9d260(unsigned int gen_a0)
{
  GEN_ENTER(0xe9d260u, gen_a0, 0u, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory::vf10 */
byte F_00e9d2a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9d2a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData::vf6 */
unsigned int F_00e9d2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe9d2e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData::vf5 */
unsigned int F_00e9d360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe9d360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData::vf4 */
unsigned int F_00e9d3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe9d3f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4))));
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(iVar8 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData::vf7 */
unsigned int F_00e9d4f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9d4f0u, gen_a0, 0u, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData::vf8 */
unsigned int F_00e9d550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe9d550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData::vf9 */
unsigned int F_00e9d5c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9d5c0u, gen_a0, 0u, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData::vf10 */
byte F_00e9d600(unsigned int gen_a0)
{
  GEN_ENTER(0xe9d600u, gen_a0, 0u, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false::vf6 */
unsigned int F_00e9d660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe9d660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false::vf5 */
unsigned int F_00e9d6e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe9d6e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false::vf4 */
unsigned int F_00e9d770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe9d770u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4))));
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(iVar8 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false::vf7 */
unsigned int F_00e9d870(unsigned int gen_a0)
{
  GEN_ENTER(0xe9d870u, gen_a0, 0u, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false::vf8 */
unsigned int F_00e9d8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe9d8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false::vf9 */
unsigned int F_00e9d940(unsigned int gen_a0)
{
  GEN_ENTER(0xe9d940u, gen_a0, 0u, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false::vf10 */
byte F_00e9d980(unsigned int gen_a0)
{
  GEN_ENTER(0xe9d980u, gen_a0, 0u, 0u, 0u);
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

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray::vf6 */
unsigned int F_00e9d9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe9d9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0xc54);
  if (iVar3 != iVar3 + *(int *)(this + 0xc58) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0xc54) + *(int *)(this + 0xc58) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray::vf5 */
unsigned int F_00e9da50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe9da50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0xc54);
  if (iVar3 != iVar3 + *(int *)(this + 0xc58) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0xc54) + *(int *)(this + 0xc58) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray::vf4 */
unsigned int F_00e9dae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe9dae0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  iVar8 = *(int *)(this + 0xc54);
  if (iVar8 != iVar8 + *(int *)(this + 0xc58) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4))));
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0xc54) + *(int *)(this + 0xc58) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0xc54) + (iVar6 + iVar5) * 0x14;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray::vf7 */
unsigned int F_00e9dbe0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9dbe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0xc54);
  if (iVar1 != iVar1 + *(int *)(this + 0xc58) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0xc54) + *(int *)(this + 0xc58) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray::vf8 */
unsigned int F_00e9dc40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe9dc40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0xc54);
  if (iVar3 != iVar3 + *(int *)(this + 0xc58) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0xc54) + *(int *)(this + 0xc58) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray::vf9 */
unsigned int F_00e9dcb0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9dcb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0xc54);
  if (iVar1 != iVar1 + *(int *)(this + 0xc58) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0xc54) + *(int *)(this + 0xc58) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray::vf10 */
byte F_00e9dcf0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9dcf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0xc54);
  if (iVar2 != iVar2 + *(int *)(this + 0xc58) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0xc58) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand::vf6 */
unsigned int F_00e9dd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe9dd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x1e74);
  if (iVar3 != iVar3 + *(int *)(this + 0x1e78) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x1e74) + *(int *)(this + 0x1e78) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand::vf5 */
unsigned int F_00e9ddb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe9ddb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x1e74);
  if (iVar3 != iVar3 + *(int *)(this + 0x1e78) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
      if ((uVar2 == param_1) && (((byte)*(undefined4 *)(iVar3 + 0x10) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x1e74) + *(int *)(this + 0x1e78) * 0x14) {
        return 0;
      }
    }
    *(uint *)(iVar3 + 0x10) = (param_2 & 0xffff) * 8 | 1;
    *(undefined4 *)(iVar3 + 0xc) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand::vf4 */
unsigned int F_00e9de40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe9de40u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  iVar8 = *(int *)(this + 0x1e74);
  if (iVar8 != iVar8 + *(int *)(this + 0x1e78) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4))));
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(iVar8 + 8));
      if ((uVar4 == param_1) && (((byte)*(undefined4 *)(iVar8 + 0x10) & 7) == 2)) break;
      iVar8 = iVar8 + 0x14;
      iVar6 = iVar6 + 1;
      if (iVar8 == *(int *)(this + 0x1e74) + *(int *)(this + 0x1e78) * 0x14) {
        return 0;
      }
    }
    if (param_2 <= param_3) {
      uVar4 = param_2 << 0x12;
      iVar7 = param_2;
      do {
        iVar5 = (int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5;
        iVar1 = *(int *)(this + 0x1e74) + (iVar6 + iVar5) * 0x14;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand::vf7 */
unsigned int F_00e9df40(unsigned int gen_a0)
{
  GEN_ENTER(0xe9df40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x1e74);
  if (iVar1 != iVar1 + *(int *)(this + 0x1e78) * 0x14) {
    do {
      if (((byte)*(undefined4 *)(iVar1 + 0x10) & 7) != 2) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x1e74) + *(int *)(this + 0x1e78) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand::vf8 */
unsigned int F_00e9dfa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe9dfa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x1e74);
  if (iVar3 != iVar3 + *(int *)(this + 0x1e78) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x1e74) + *(int *)(this + 0x1e78) * 0x14) {
        return 0;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand::vf9 */
unsigned int F_00e9e010(unsigned int gen_a0)
{
  GEN_ENTER(0xe9e010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0x1e74);
  if (iVar1 != iVar1 + *(int *)(this + 0x1e78) * 0x14) {
    do {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x1e74) + *(int *)(this + 0x1e78) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand::vf10 */
byte F_00e9e050(unsigned int gen_a0)
{
  GEN_ENTER(0xe9e050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x1e74);
  if (iVar2 != iVar2 + *(int *)(this + 0x1e78) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x1e78) * 0x14;
    do {
      if (*(int *)(iVar2 + 0xc) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray::vf6 */
unsigned int F_00e9e090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe9e090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x134);
  if (iVar3 != iVar3 + *(int *)(this + 0x138) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray::vf5 */
unsigned int F_00e9e110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe9e110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x134);
  if (iVar3 != iVar3 + *(int *)(this + 0x138) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray::vf4 */
unsigned int F_00e9e1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe9e1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  iVar8 = *(int *)(this + 0x134);
  if (iVar8 != iVar8 + *(int *)(this + 0x138) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar8 + 4) + 4))))(*(int * PTR32 *)(iVar8 + 4))));
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(iVar8 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray::vf7 */
unsigned int F_00e9e2a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9e2a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray::vf8 */
unsigned int F_00e9e300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe9e300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x134);
  if (iVar3 != iVar3 + *(int *)(this + 0x138) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar3 + 4) + 4))))(*(int * PTR32 *)(iVar3 + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(iVar3 + 8));
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

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray::vf9 */
unsigned int F_00e9e370(unsigned int gen_a0)
{
  GEN_ENTER(0xe9e370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray::vf10 */
byte F_00e9e3b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9e3b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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

/* ref: FUN_00e9e3f0 */
uint F_00e9e3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe9e3f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  
  iVar1 = **(int * PTR32 *)((int)this + 0x10);
  if ((uint)(((*(int * PTR32 *)((int)this + 0x10))[1] - iVar1) / 0x18) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return iVar1 + param_1 * 0x18;
}

/* ref: FUN_00e9e450 */
uint F_00e9e450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe9e450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  
  if (*(int *)((int)this + 8) == 0) {
    *(undefined4 *)((int)this + 8) = 6;
    puVar2 = (undefined4 *)F_004069f0(0x10);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
    }
    *(undefined4 * PTR32 *)((int)this + 0x10) = puVar2;
  }
  else if (*(int *)((int)this + 8) != 6) {
    return (uint)this;
  }
  iVar1 = **(int * PTR32 *)((int)this + 0x10);
  if ((uint)(((*(int * PTR32 *)((int)this + 0x10))[1] - iVar1) / 0x18) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  return iVar1 + param_1 * 0x18;
}

/* ref: FUN_00e9e4d0 */
uint F_00e9e4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe9e4d0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  F_00ebc440(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(int *)&gen_args[1]),(*(int *)&gen_args[1]));
  if ((*(int *)&gen_args[1]) == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
    return (*(uint *)&gen_args[2]);
  }
  return (*(int *)&gen_args[1]) + 0x60;
}

/* ref: FUN_00e9e500 */
byte F_00e9e500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe9e500u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  piVar2 = (int *)F_00ebc440(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[1]));
  return *piVar2 != iVar1;
}

/* ref: FUN_00e9e530 */
uint F_00e9e530(unsigned int gen_a0)
{
  GEN_ENTER(0xe9e530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *(undefined4 *)((int)this + 0x10) = 1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *(undefined4 *)((int)this + 0x18) = 2;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *(undefined4 *)((int)this + 0x20) = 3;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x24) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *(undefined4 *)((int)this + 0x28) = 4;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *(undefined4 *)((int)this + 0x30) = 5;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x34) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *(undefined4 *)((int)this + 0x38) = 6;
  *(undefined4 *)((int)this + 0x44) = 7;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[9])REFP(0x11599bc));
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x54) = 8;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x50) = (*(undefined * PTR32 (*)[9])REFP(0x11599e4));
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x60) = 9;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x5c) = (*(undefined * PTR32 (*)[9])REFP(0x1159a0c))
  ;
  *(undefined1 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x6c) = 10;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[9])REFP(0x115d4d4));
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0xf;
  *(undefined1 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x90) = 0xb;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8c) =
       (*(undefined * PTR32 (*)[9])REFP(0x115d4fc));
  *(undefined4 *)((int)this + 0xa8) = 0xf;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined1 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  return (uint)this;
}

/* ref: FUN_00e9e610 */
unsigned int F_00e9e610(unsigned int gen_a0)
{
  GEN_ENTER(0xe9e610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8c) =
       (*(undefined * PTR32 (*)[9])REFP(0x115d4fc));
  if (0xf < *(uint *)((int)this + 0xa8)) {
    F_00406ad0(*(undefined4 *)((int)this + 0x94));
  }
  *(undefined4 *)((int)this + 0xa8) = 0xf;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined1 *)((int)this + 0x94) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8c) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[9])REFP(0x115d4d4));
  if (0xf < *(uint *)((int)this + 0x84)) {
    F_00406ad0(*(undefined4 *)((int)this + 0x70));
  }
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0xf;
  *(undefined1 *)((int)this + 0x70) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x5c) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x50) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x34) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x24) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  return 0;
}

/* ref: FUN_00e9e6b0 */
uint F_00e9e6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe9e6b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_00ebfd90(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),&(*(int *)&gen_args[1]),(*(int *)&gen_args[1]));
  if ((*(int *)&gen_args[1]) == *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 4)))) {
    return 0x135eba0;
  }
  return (*(int *)&gen_args[1]) + 0x68;
}

/* ref: FUN_00e9e6f0 */
uint F_00e9e6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe9e6f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined1 * puVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined * PTR32, 0x12fd328));
  F_00ebc440((undefined *)((int)this + 4),&(*(int *)(gen_frame + 0x0)),param_1);
  puVar1 = ((undefined1 *)(gen_frame + 0x4));
  if ((*(int *)(gen_frame + 0x0)) != *(int *)((int)this + 8)) {
    puVar1 = (undefined1 *)((*(int *)(gen_frame + 0x0)) + 0x60);
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)puVar1;
}

/* ref: FUN_00e9e750 */
uint F_00e9e750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe9e750u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  F_00ebfd90(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),&(*(uint *)&gen_args[1]),(*(uint *)&gen_args[1]));
  uVar1 = (*(uint *)&gen_args[1]);
  if ((*(uint *)&gen_args[1]) != *((uint *)GEN_TOP(((int)*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 4)))) {
    uVar1 = F_00ec46d0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),&(*(uint *)&gen_args[1]),(*(uint *)&gen_args[1]));
  }
  return uVar1;
}

/* ref: FUN_00e9e780 */
byte F_00e9e780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe9e780u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if ((*((byte *)GEN_TOP((*(int *)(*param_1 + 4) + 0xc + (int)param_1))) & 6) != 0) {
    return 0;
  }
  uVar1 = F_00ec0810(param_1);
  if (uVar1 != 0xffffffff) {
    *param_2 = (char)uVar1;
  }
  return 1;
}

/* ref: FUN_00e9e7b0 */
uint F_00e9e7b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9e7b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115d994));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec4de0((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00e9e800 */
uint F_00e9e800(unsigned int gen_a0)
{
  GEN_ENTER(0xe9e800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115d994));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00e9e850 */
uint F_00e9e850(unsigned int gen_a0)
{
  GEN_ENTER(0xe9e850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115d9c4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec50e0((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00e9e8a0 */
uint F_00e9e8a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9e8a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115d9c4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x140) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d534));
  F_00ebc7d0((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00e9e8f0 */
uint F_00e9e8f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9e8f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115d9f4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec50e0((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00e9e940 */
uint F_00e9e940(unsigned int gen_a0)
{
  GEN_ENTER(0xe9e940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115d9f4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x140) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d534));
  F_00ebc7d0((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00e9e990 */
uint F_00e9e990(unsigned int gen_a0)
{
  GEN_ENTER(0xe9e990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115da24));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec50e0((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00e9e9e0 */
uint F_00e9e9e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9e9e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115da24));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x140) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d534));
  F_00ebc7d0((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00e9ea30 */
uint F_00e9ea30(unsigned int gen_a0)
{
  GEN_ENTER(0xe9ea30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115da54));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec53a0((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00e9ea80 */
uint F_00e9ea80(unsigned int gen_a0)
{
  GEN_ENTER(0xe9ea80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115da54));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x230) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d53c));
  F_00ebc860((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00e9ead0 */
uint F_00e9ead0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9ead0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115da84));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec5660((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00e9eb20 */
uint F_00e9eb20(unsigned int gen_a0)
{
  GEN_ENTER(0xe9eb20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115da84));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x170) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d544));
  F_00ebc8f0((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00e9eb70 */
uint F_00e9eb70(unsigned int gen_a0)
{
  GEN_ENTER(0xe9eb70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115dab4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec5660((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00e9ebc0 */
uint F_00e9ebc0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9ebc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115dab4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x170) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d544));
  F_00ebc8f0((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00e9ec10 */
uint F_00e9ec10(unsigned int gen_a0)
{
  GEN_ENTER(0xe9ec10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115dae4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec4de0((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00e9ec60 */
uint F_00e9ec60(unsigned int gen_a0)
{
  GEN_ENTER(0xe9ec60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115dae4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00e9ecb0 */
uint F_00e9ecb0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9ecb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115db14));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec5920((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00e9ed00 */
uint F_00e9ed00(unsigned int gen_a0)
{
  GEN_ENTER(0xe9ed00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115db14));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x290) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d54c));
  F_00ebc980((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00e9ed50 */
uint F_00e9ed50(unsigned int gen_a0)
{
  GEN_ENTER(0xe9ed50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115db44));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec4de0((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00e9eda0 */
uint F_00e9eda0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9eda0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115db44));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00e9edf0 */
uint F_00e9edf0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9edf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115db74));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec5be0((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00e9ee40 */
uint F_00e9ee40(unsigned int gen_a0)
{
  GEN_ENTER(0xe9ee40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115db74));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c0) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00e9ee90 */
uint F_00e9ee90(unsigned int gen_a0)
{
  GEN_ENTER(0xe9ee90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dba4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec4de0((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00e9eee0 */
uint F_00e9eee0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9eee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dba4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00e9ef30 */
uint F_00e9ef30(unsigned int gen_a0)
{
  GEN_ENTER(0xe9ef30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dbd4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d728));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1d4));
  F_00eb3900((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 3;
  uVar1 = F_00ebaa70((undefined *)((int)this + 0xc),3,0);
  *(uint *)((int)this + 0xb8) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d55c));
  F_00ec61a0((undefined *)((int)this + 0xc4));
  return (uint)this;
}

/* ref: FUN_00e9ef90 */
uint F_00e9ef90(unsigned int gen_a0)
{
  GEN_ENTER(0xe9ef90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dbd4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2a0) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d564));
  F_00ebcb00((undefined *)((int)this + 200));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d728));
  uVar1 = F_00ebfee0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00e9efe0 */
uint F_00e9efe0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9efe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dc04));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec4de0((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00e9f030 */
uint F_00e9f030(unsigned int gen_a0)
{
  GEN_ENTER(0xe9f030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dc04));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00e9f080 */
uint F_00e9f080(unsigned int gen_a0)
{
  GEN_ENTER(0xe9f080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dc34));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec6460((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00e9f0d0 */
uint F_00e9f0d0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9f0d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dc34));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x200) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00e9f120 */
uint F_00e9f120(unsigned int gen_a0)
{
  GEN_ENTER(0xe9f120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dc64));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d770));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d234));
  F_00eb3e40((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 4;
  uVar1 = F_00ebac50((undefined *)((int)this + 0xc),4,0);
  *(uint *)((int)this + 0xd8) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d574));
  F_00ec6a20((undefined *)((int)this + 0xe4));
  return (uint)this;
}

/* ref: FUN_00e9f180 */
unsigned int F_00e9f180(unsigned int gen_a0)
{
  GEN_ENTER(0xe9f180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dc64));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa70) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d57c));
  F_00ebcc80((undefined *)((int)this + 0xe8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d770));
  F_00ebff60((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00e9f1d0 */
uint F_00e9f1d0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9f1d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dc94));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec61a0((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00e9f230 */
unsigned int F_00e9f230(unsigned int gen_a0)
{
  GEN_ENTER(0xe9f230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dc94));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x280) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d564));
  F_00ebcb00((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00e9f280 */
uint F_00e9f280(unsigned int gen_a0)
{
  GEN_ENTER(0xe9f280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115dcc4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6fe0((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00e9f2e0 */
unsigned int F_00e9f2e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9f2e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115dcc4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x400) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d58c));
  F_00ebcd70((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00e9f330 */
uint F_00e9f330(unsigned int gen_a0)
{
  GEN_ENTER(0xe9f330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115dcf4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec5be0((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00e9f390 */
unsigned int F_00e9f390(unsigned int gen_a0)
{
  GEN_ENTER(0xe9f390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115dcf4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2e0) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00e9f3e0 */
uint F_00e9f3e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9f3e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dd24));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec72a0((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00e9f440 */
unsigned int F_00e9f440(unsigned int gen_a0)
{
  GEN_ENTER(0xe9f440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dd24));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x670) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d594));
  F_00ebce00((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00e9f490 */
uint F_00e9f490(unsigned int gen_a0)
{
  GEN_ENTER(0xe9f490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dd54));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec7560((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00e9f4f0 */
unsigned int F_00e9f4f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9f4f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dd54));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x25c0) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d59c));
  F_00ebce90((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00e9f540 */
uint F_00e9f540(unsigned int gen_a0)
{
  GEN_ENTER(0xe9f540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dd84));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec4de0((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00e9f5a0 */
unsigned int F_00e9f5a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9f5a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dd84));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c0) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00e9f5f0 */
uint F_00e9f5f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9f5f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115ddb4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec4de0((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00e9f650 */
unsigned int F_00e9f650(unsigned int gen_a0)
{
  GEN_ENTER(0xe9f650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115ddb4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c0) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00e9f6a0 */
uint F_00e9f6a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9f6a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dde4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec4de0((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00e9f700 */
unsigned int F_00e9f700(unsigned int gen_a0)
{
  GEN_ENTER(0xe9f700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dde4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c0) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00e9f750 */
uint F_00e9f750(unsigned int gen_a0)
{
  GEN_ENTER(0xe9f750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115de14));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec4de0((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00e9f7b0 */
unsigned int F_00e9f7b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9f7b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115de14));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c0) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00e9f800 */
uint F_00e9f800(unsigned int gen_a0)
{
  GEN_ENTER(0xe9f800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115de44))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec7820((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00e9f860 */
unsigned int F_00e9f860(unsigned int gen_a0)
{
  GEN_ENTER(0xe9f860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115de44))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x340) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5a4));
  F_00ebcf20((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00e9f8b0 */
uint F_00e9f8b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9f8b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115de74));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec7ae0((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00e9f910 */
unsigned int F_00e9f910(unsigned int gen_a0)
{
  GEN_ENTER(0xe9f910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115de74));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4c0) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5ac));
  F_00ebcfb0((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00e9f960 */
uint F_00e9f960(unsigned int gen_a0)
{
  GEN_ENTER(0xe9f960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dea4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00e9f9c0 */
unsigned int F_00e9f9c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9f9c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dea4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x220) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00e9fa10 */
uint F_00e9fa10(unsigned int gen_a0)
{
  GEN_ENTER(0xe9fa10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115ded4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00e9fa70 */
unsigned int F_00e9fa70(unsigned int gen_a0)
{
  GEN_ENTER(0xe9fa70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115ded4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x220) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00e9fac0 */
uint F_00e9fac0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9fac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115df04));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00e9fb20 */
unsigned int F_00e9fb20(unsigned int gen_a0)
{
  GEN_ENTER(0xe9fb20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115df04));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x220) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00e9fb70 */
uint F_00e9fb70(unsigned int gen_a0)
{
  GEN_ENTER(0xe9fb70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115df34));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00e9fbd0 */
unsigned int F_00e9fbd0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9fbd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115df34));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x220) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00e9fc20 */
uint F_00e9fc20(unsigned int gen_a0)
{
  GEN_ENTER(0xe9fc20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115df64));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00e9fc80 */
unsigned int F_00e9fc80(unsigned int gen_a0)
{
  GEN_ENTER(0xe9fc80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115df64));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x220) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00e9fcd0 */
uint F_00e9fcd0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9fcd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115df94));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00e9fd30 */
unsigned int F_00e9fd30(unsigned int gen_a0)
{
  GEN_ENTER(0xe9fd30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115df94));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x220) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00e9fd80 */
uint F_00e9fd80(unsigned int gen_a0)
{
  GEN_ENTER(0xe9fd80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115dfc4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00e9fde0 */
unsigned int F_00e9fde0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9fde0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115dfc4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x220) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00e9fe30 */
uint F_00e9fe30(unsigned int gen_a0)
{
  GEN_ENTER(0xe9fe30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dff4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00e9fe90 */
unsigned int F_00e9fe90(unsigned int gen_a0)
{
  GEN_ENTER(0xe9fe90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dff4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x220) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00e9fee0 */
uint F_00e9fee0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9fee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e024));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00e9ff40 */
unsigned int F_00e9ff40(unsigned int gen_a0)
{
  GEN_ENTER(0xe9ff40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e024));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x220) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00e9ff90 */
uint F_00e9ff90(unsigned int gen_a0)
{
  GEN_ENTER(0xe9ff90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e054));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00e9fff0 */
unsigned int F_00e9fff0(unsigned int gen_a0)
{
  GEN_ENTER(0xe9fff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e054));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x220) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00ea0040 */
uint F_00ea0040(unsigned int gen_a0)
{
  GEN_ENTER(0xea0040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e084));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00ea00a0 */
unsigned int F_00ea00a0(unsigned int gen_a0)
{
  GEN_ENTER(0xea00a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e084));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x220) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00ea00f0 */
uint F_00ea00f0(unsigned int gen_a0)
{
  GEN_ENTER(0xea00f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e0b4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec5be0((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00ea0150 */
unsigned int F_00ea0150(unsigned int gen_a0)
{
  GEN_ENTER(0xea0150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e0b4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2e0) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00ea01a0 */
uint F_00ea01a0(unsigned int gen_a0)
{
  GEN_ENTER(0xea01a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e0e4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec7da0((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00ea0200 */
unsigned int F_00ea0200(unsigned int gen_a0)
{
  GEN_ENTER(0xea0200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e0e4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x460) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5b4));
  F_00ebd040((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00ea0250 */
uint F_00ea0250(unsigned int gen_a0)
{
  GEN_ENTER(0xea0250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e114));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec8060((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00ea02b0 */
unsigned int F_00ea02b0(unsigned int gen_a0)
{
  GEN_ENTER(0xea02b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e114));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3a0) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5bc));
  F_00ebd0d0((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00ea0300 */
uint F_00ea0300(unsigned int gen_a0)
{
  GEN_ENTER(0xea0300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e144));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec4de0((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00ea0360 */
unsigned int F_00ea0360(unsigned int gen_a0)
{
  GEN_ENTER(0xea0360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e144));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c0) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00ea03b0 */
uint F_00ea03b0(unsigned int gen_a0)
{
  GEN_ENTER(0xea03b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e174));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec8320((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00ea0410 */
unsigned int F_00ea0410(unsigned int gen_a0)
{
  GEN_ENTER(0xea0410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e174));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x520) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5c4));
  F_00ebd160((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00ea0460 */
uint F_00ea0460(unsigned int gen_a0)
{
  GEN_ENTER(0xea0460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e1a4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec85e0((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00ea04c0 */
unsigned int F_00ea04c0(unsigned int gen_a0)
{
  GEN_ENTER(0xea04c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e1a4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x850) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5cc));
  F_00ebd1f0((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00ea0510 */
uint F_00ea0510(unsigned int gen_a0)
{
  GEN_ENTER(0xea0510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e1d4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec5be0((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00ea0570 */
unsigned int F_00ea0570(unsigned int gen_a0)
{
  GEN_ENTER(0xea0570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e1d4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2e0) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00ea05c0 */
uint F_00ea05c0(unsigned int gen_a0)
{
  GEN_ENTER(0xea05c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e204));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00ea0620 */
unsigned int F_00ea0620(unsigned int gen_a0)
{
  GEN_ENTER(0xea0620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e204));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x220) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00ea0670 */
uint F_00ea0670(unsigned int gen_a0)
{
  GEN_ENTER(0xea0670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e234));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec5be0((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00ea06d0 */
unsigned int F_00ea06d0(unsigned int gen_a0)
{
  GEN_ENTER(0xea06d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e234));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2e0) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00ea0720 */
uint F_00ea0720(unsigned int gen_a0)
{
  GEN_ENTER(0xea0720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e264));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00ea0780 */
unsigned int F_00ea0780(unsigned int gen_a0)
{
  GEN_ENTER(0xea0780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e264));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x220) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00ea07d0 */
uint F_00ea07d0(unsigned int gen_a0)
{
  GEN_ENTER(0xea07d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e294));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec5be0((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00ea0830 */
unsigned int F_00ea0830(unsigned int gen_a0)
{
  GEN_ENTER(0xea0830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e294));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2e0) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00ea0880 */
uint F_00ea0880(unsigned int gen_a0)
{
  GEN_ENTER(0xea0880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e2c4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00ea08e0 */
unsigned int F_00ea08e0(unsigned int gen_a0)
{
  GEN_ENTER(0xea08e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e2c4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x220) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00ea0930 */
uint F_00ea0930(unsigned int gen_a0)
{
  GEN_ENTER(0xea0930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e2f4))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00ea0990 */
unsigned int F_00ea0990(unsigned int gen_a0)
{
  GEN_ENTER(0xea0990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e2f4))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x220) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00ea09e0 */
uint F_00ea09e0(unsigned int gen_a0)
{
  GEN_ENTER(0xea09e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e324));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec53a0((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00ea0a40 */
unsigned int F_00ea0a40(unsigned int gen_a0)
{
  GEN_ENTER(0xea0a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e324));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x250) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d53c));
  F_00ebc860((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00ea0a90 */
uint F_00ea0a90(unsigned int gen_a0)
{
  GEN_ENTER(0xea0a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e354));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec61a0((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00ea0af0 */
unsigned int F_00ea0af0(unsigned int gen_a0)
{
  GEN_ENTER(0xea0af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e354));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x280) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d564));
  F_00ebcb00((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00ea0b40 */
uint F_00ea0b40(unsigned int gen_a0)
{
  GEN_ENTER(0xea0b40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e384));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec53a0((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00ea0ba0 */
unsigned int F_00ea0ba0(unsigned int gen_a0)
{
  GEN_ENTER(0xea0ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e384));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x250) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d53c));
  F_00ebc860((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00ea0bf0 */
uint F_00ea0bf0(unsigned int gen_a0)
{
  GEN_ENTER(0xea0bf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e3b4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec4de0((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00ea0c40 */
uint F_00ea0c40(unsigned int gen_a0)
{
  GEN_ENTER(0xea0c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e3b4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00ea0c90 */
uint F_00ea0c90(unsigned int gen_a0)
{
  GEN_ENTER(0xea0c90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e3e4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6fe0((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00ea0cf0 */
unsigned int F_00ea0cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xea0cf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e3e4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x400) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d58c));
  F_00ebcd70((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00ea0d40 */
uint F_00ea0d40(unsigned int gen_a0)
{
  GEN_ENTER(0xea0d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e414));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec7ae0((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00ea0da0 */
unsigned int F_00ea0da0(unsigned int gen_a0)
{
  GEN_ENTER(0xea0da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e414));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4c0) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5ac));
  F_00ebcfb0((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00ea0df0 */
uint F_00ea0df0(unsigned int gen_a0)
{
  GEN_ENTER(0xea0df0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e444));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d728));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1d4));
  F_00eb3900((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 3;
  uVar1 = F_00ebaa70((undefined *)((int)this + 0xc),3,0);
  *(uint *)((int)this + 0xb8) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d55c));
  F_00ec61a0((undefined *)((int)this + 0xc4));
  return (uint)this;
}

/* ref: FUN_00ea0e50 */
uint F_00ea0e50(unsigned int gen_a0)
{
  GEN_ENTER(0xea0e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e444));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2a0) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d564));
  F_00ebcb00((undefined *)((int)this + 200));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d728));
  uVar1 = F_00ebfee0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00ea0ea0 */
uint F_00ea0ea0(unsigned int gen_a0)
{
  GEN_ENTER(0xea0ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e474));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00ea0f00 */
unsigned int F_00ea0f00(unsigned int gen_a0)
{
  GEN_ENTER(0xea0f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e474));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x220) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00ea0f50 */
uint F_00ea0f50(unsigned int gen_a0)
{
  GEN_ENTER(0xea0f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e4a4))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec88a0((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00ea0fa0 */
uint F_00ea0fa0(unsigned int gen_a0)
{
  GEN_ENTER(0xea0fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e4a4))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x530) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5d4));
  F_00ebd280((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00ea0ff0 */
uint F_00ea0ff0(unsigned int gen_a0)
{
  GEN_ENTER(0xea0ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e4d4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec8b60((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00ea1040 */
uint F_00ea1040(unsigned int gen_a0)
{
  GEN_ENTER(0xea1040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e4d4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb30) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5dc));
  F_00ebd310((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00ea1090 */
uint F_00ea1090(unsigned int gen_a0)
{
  GEN_ENTER(0xea1090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e504));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec7ae0((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00ea10e0 */
uint F_00ea10e0(unsigned int gen_a0)
{
  GEN_ENTER(0xea10e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e504));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4a0) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5ac));
  F_00ebcfb0((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00ea1130 */
uint F_00ea1130(unsigned int gen_a0)
{
  GEN_ENTER(0xea1130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e534));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec4de0((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00ea1180 */
uint F_00ea1180(unsigned int gen_a0)
{
  GEN_ENTER(0xea1180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e534));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00ea11d0 */
uint F_00ea11d0(unsigned int gen_a0)
{
  GEN_ENTER(0xea11d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e564));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec53a0((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00ea1220 */
uint F_00ea1220(unsigned int gen_a0)
{
  GEN_ENTER(0xea1220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e564));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x230) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d53c));
  F_00ebc860((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00ea1270 */
uint F_00ea1270(unsigned int gen_a0)
{
  GEN_ENTER(0xea1270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e594));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00ea12d0 */
unsigned int F_00ea12d0(unsigned int gen_a0)
{
  GEN_ENTER(0xea12d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e594));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x220) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00ea1320 */
uint F_00ea1320(unsigned int gen_a0)
{
  GEN_ENTER(0xea1320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e5c4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 2;
  uVar1 = F_00ebad90((undefined *)((int)this + 0xc),2,0);
  *(uint *)((int)this + 0x98) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460((undefined *)((int)this + 0xa4));
  return (uint)this;
}

/* ref: FUN_00ea1380 */
unsigned int F_00ea1380(unsigned int gen_a0)
{
  GEN_ENTER(0xea1380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e5c4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x220) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90((undefined *)((int)this + 0xa8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00ea13d0 */
uint F_00ea13d0(unsigned int gen_a0)
{
  GEN_ENTER(0xea13d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e5f4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec8e20((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00ea1420 */
uint F_00ea1420(unsigned int gen_a0)
{
  GEN_ENTER(0xea1420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e5f4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x920) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5e4));
  F_00ebd3a0((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00ea1470 */
uint F_00ea1470(unsigned int gen_a0)
{
  GEN_ENTER(0xea1470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e624));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec53a0((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00ea14c0 */
uint F_00ea14c0(unsigned int gen_a0)
{
  GEN_ENTER(0xea14c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e624));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x230) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d53c));
  F_00ebc860((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00ea1510 */
uint F_00ea1510(unsigned int gen_a0)
{
  GEN_ENTER(0xea1510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e654));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec50e0((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00ea1560 */
uint F_00ea1560(unsigned int gen_a0)
{
  GEN_ENTER(0xea1560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e654));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x140) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d534));
  F_00ebc7d0((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00ea15b0 */
uint F_00ea15b0(unsigned int gen_a0)
{
  GEN_ENTER(0xea15b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e684));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec4de0((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00ea1600 */
uint F_00ea1600(unsigned int gen_a0)
{
  GEN_ENTER(0xea1600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e684));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00ea1650 */
uint F_00ea1650(unsigned int gen_a0)
{
  GEN_ENTER(0xea1650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e6b4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec4de0((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00ea16a0 */
uint F_00ea16a0(unsigned int gen_a0)
{
  GEN_ENTER(0xea16a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e6b4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00ea16f0 */
uint F_00ea16f0(unsigned int gen_a0)
{
  GEN_ENTER(0xea16f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e6e4))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec90e0((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00ea1740 */
uint F_00ea1740(unsigned int gen_a0)
{
  GEN_ENTER(0xea1740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e6e4))
  ;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc50) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5ec));
  F_00ebd430((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00ea1790 */
uint F_00ea1790(unsigned int gen_a0)
{
  GEN_ENTER(0xea1790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e714));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec8060((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00ea17e0 */
uint F_00ea17e0(unsigned int gen_a0)
{
  GEN_ENTER(0xea17e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e714));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x380) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5bc));
  F_00ebd0d0((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00ea1830 */
uint F_00ea1830(unsigned int gen_a0)
{
  GEN_ENTER(0xea1830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e744));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec93a0((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00ea1880 */
uint F_00ea1880(unsigned int gen_a0)
{
  GEN_ENTER(0xea1880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e744));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3b0) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5f4));
  F_00ebd4c0((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00ea18d0 */
uint F_00ea18d0(unsigned int gen_a0)
{
  GEN_ENTER(0xea18d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e774));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec4de0((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00ea1920 */
uint F_00ea1920(unsigned int gen_a0)
{
  GEN_ENTER(0xea1920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e774));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00ea1970 */
uint F_00ea1970(unsigned int gen_a0)
{
  GEN_ENTER(0xea1970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e7a4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec4de0((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00ea19c0 */
uint F_00ea19c0(unsigned int gen_a0)
{
  GEN_ENTER(0xea19c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e7a4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00ea1a10 */
uint F_00ea1a10(unsigned int gen_a0)
{
  GEN_ENTER(0xea1a10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e7d4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec4de0((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00ea1a60 */
uint F_00ea1a60(unsigned int gen_a0)
{
  GEN_ENTER(0xea1a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e7d4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00ea1ab0 */
uint F_00ea1ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xea1ab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e804));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec4de0((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00ea1b00 */
uint F_00ea1b00(unsigned int gen_a0)
{
  GEN_ENTER(0xea1b00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e804));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00ea1b50 */
uint F_00ea1b50(unsigned int gen_a0)
{
  GEN_ENTER(0xea1b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e834));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d908));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d454));
  F_00eb5c00((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0;
  *(undefined4 *)((int)this + 0x2a0) = 0x12;
  uVar1 = F_00ebb6f0((undefined *)((int)this + 0xc),0x12,0);
  *(uint *)((int)this + 0x298) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5fc));
  F_00ec9960((undefined *)((int)this + 0x2a4));
  return (uint)this;
}

/* ref: FUN_00ea1bb0 */
unsigned int F_00ea1bb0(unsigned int gen_a0)
{
  GEN_ENTER(0xea1bb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e834));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc60) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2a4) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d604));
  F_00ebd5b0((undefined *)((int)this + 0x2a8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d908));
  F_00ec0110((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00ea1c00 */
uint F_00ea1c00(unsigned int gen_a0)
{
  GEN_ENTER(0xea1c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e864));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d938));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d494));
  F_00eb5f90((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x4f8) = 0;
  *(undefined4 *)((int)this + 0x4fc) = 0;
  *(undefined4 *)((int)this + 0x500) = 0x25;
  uVar1 = F_00ebb830((undefined *)((int)this + 0xc),0x25,0);
  *(uint *)((int)this + 0x4f8) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d60c));
  F_00ec9f20((undefined *)((int)this + 0x504));
  return (uint)this;
}

/* ref: FUN_00ea1c60 */
unsigned int F_00ea1c60(unsigned int gen_a0)
{
  GEN_ENTER(0xea1c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e864));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1e80) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x504) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d614));
  F_00ebd6a0((undefined *)((int)this + 0x508));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d938));
  F_00ec0180((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return 0;
}

/* ref: FUN_00ea1cb0 */
uint F_00ea1cb0(unsigned int gen_a0)
{
  GEN_ENTER(0xea1cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e894));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 1;
  uVar1 = F_00eba620((undefined *)((int)this + 0xc),1,0);
  *(uint *)((int)this + 0x78) = uVar1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec50e0((undefined *)((int)this + 0x84));
  return (uint)this;
}

/* ref: FUN_00ea1d00 */
uint F_00ea1d00(unsigned int gen_a0)
{
  GEN_ENTER(0xea1d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e894));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x140) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x84) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d534));
  F_00ebc7d0((undefined *)((int)this + 0x88));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00ea1d50 */
uint F_00ea1d50(unsigned int gen_a0)
{
  GEN_ENTER(0xea1d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  float fVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char * pcVar7;
  char * pcVar8;
  
  uVar6 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  (*(uint *)(gen_frame + 0xc8)) = uVar6;
  iVar4 = *(int *)((int)this + 8);
  if (iVar4 == 1) {
    uVar5 = *(uint *)((int)this + 0x10);
    F_00c47745(uVar6 ^ (uint)(uint)(gen_frame + 0xcc));
    return uVar5;
  }
  if (iVar4 != 2) {
    if (iVar4 != 3) {
      pcVar7 = (char *)F_0042a990(*(undefined4 *)((int)this + 0x10));
      uVar6 = ((uint *)(gen_frame + 0xac))[0];
      (*(uint *)(gen_frame + 0xc0)) = 0xf;
      (*(undefined4 *)(gen_frame + 0xbc)) = 0;
      (*(undefined1 *)((char *)&((uint *)(gen_frame + 0xac))[0] + 0)) = 0;
      ((uint *)(gen_frame + 0xac))[0] = uVar6 & 0xffffff00;
      pcVar8 = pcVar7;
      do {
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      F_00bb56c0(((uint *)(gen_frame + 0xac)),pcVar7,(int)pcVar8 - (int)(pcVar7 + 1));
      F_00e3e600(((int *)(gen_frame + 0x8)),((uint *)(gen_frame + 0xac)),1,1);
      if (0xf < (*(uint *)(gen_frame + 0xc0))) {
        F_00406ad0(((uint *)(gen_frame + 0xac))[0]);
      }
      F_00ebf460(((int *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0xa8)));
      *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)((int *)(gen_frame + 0x8)) + *(int *)(((int *)(gen_frame + 0x8))[0] + 4)))) =
           (*(undefined * PTR32 (*)[1])REFP(0x1157814));
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x18))[0] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4))
      ;
      F_00e3ce60(((undefined * PTR32 * PTR32 *)(gen_frame + 0x18)));
      F_00479ae0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x18)));
      *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)((int *)(gen_frame + 0x8)) + *(int *)(((int *)(gen_frame + 0x8))[0] + 4)))) =
           (*(undefined * PTR32 (*)[1])REFP(0x115772c));
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x60))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
      F_00c46453((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x60)));
      F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
      return (*(uint *)(gen_frame + 0xa8));
    }
    bVar3 = *(byte *)((int)this + 0x10);
    F_00c47745(uVar6 ^ (uint)(uint)(gen_frame + 0xcc));
    return (uint)bVar3;
  }
  fVar1 = *(float *)((int)this + 0x10);
  F_00c47745(uVar6 ^ (uint)(uint)(gen_frame + 0xcc));
  return (int)fVar1;
}

/* ref: FUN_00ea1e90 */
uint F_00ea1e90(unsigned int gen_a0)
{
  GEN_ENTER(0xea1e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  float fVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char * pcVar7;
  char * pcVar8;
  
  uVar6 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  (*(uint *)(gen_frame + 0xc8)) = uVar6;
  iVar4 = *(int *)((int)this + 8);
  if (iVar4 == 1) {
    uVar5 = *(uint *)((int)this + 0x10);
    F_00c47745(uVar6 ^ (uint)(uint)(gen_frame + 0xcc));
    return uVar5;
  }
  if (iVar4 != 2) {
    if (iVar4 != 3) {
      pcVar7 = (char *)F_0042a990(*(undefined4 *)((int)this + 0x10));
      uVar6 = ((uint *)(gen_frame + 0xac))[0];
      (*(uint *)(gen_frame + 0xc0)) = 0xf;
      (*(undefined4 *)(gen_frame + 0xbc)) = 0;
      (*(undefined1 *)((char *)&((uint *)(gen_frame + 0xac))[0] + 0)) = 0;
      ((uint *)(gen_frame + 0xac))[0] = uVar6 & 0xffffff00;
      pcVar8 = pcVar7;
      do {
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      F_00bb56c0(((uint *)(gen_frame + 0xac)),pcVar7,(int)pcVar8 - (int)(pcVar7 + 1));
      F_00e3e600(((int *)(gen_frame + 0x4)),((uint *)(gen_frame + 0xac)),1,1);
      if (0xf < (*(uint *)(gen_frame + 0xc0))) {
        F_00406ad0(((uint *)(gen_frame + 0xac))[0]);
      }
      F_00ebf780(((int *)(gen_frame + 0x4)),((uint *)(gen_frame + 0xa4)));
      *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)((int *)(gen_frame + 0x4)) + *(int *)(((int *)(gen_frame + 0x4))[0] + 4)))) =
           (*(undefined * PTR32 (*)[1])REFP(0x1157814));
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x14))[0] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4))
      ;
      F_00e3ce60(((undefined * PTR32 * PTR32 *)(gen_frame + 0x14)));
      F_00479ae0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x14)));
      *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)((int *)(gen_frame + 0x4)) + *(int *)(((int *)(gen_frame + 0x4))[0] + 4)))) =
           (*(undefined * PTR32 (*)[1])REFP(0x115772c));
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x5c))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
      F_00c46453((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x5c)));
      F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
      return ((uint *)(gen_frame + 0xa4))[0];
    }
    bVar3 = *(byte *)((int)this + 0x10);
    F_00c47745(uVar6 ^ (uint)(uint)(gen_frame + 0xcc));
    return (uint)bVar3;
  }
  fVar1 = *(float *)((int)this + 0x10);
  F_00c47745(uVar6 ^ (uint)(uint)(gen_frame + 0xcc));
  return (uint)(longlong)fVar1;
}

/* ref: FUN_00ea1fe0 */
uint F_00ea1fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xea1fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  char cVar1;
  int iVar2;
  uint uVar3;
  char * pcVar4;
  uint extraout_EAX = 0;
  char * pcVar5;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  (*(uint *)(gen_frame + 0xc8)) = uVar3;
  iVar2 = *(int *)((int)this + 8);
  if (iVar2 == 1) {
    F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0xcc));
    return 0;
  }
  if (iVar2 != 2) {
    if (iVar2 != 3) {
      pcVar4 = (char *)F_0042a990(*(undefined4 *)((int)this + 0x10));
      uVar3 = ((uint *)(gen_frame + 0xac))[0];
      (*(uint *)(gen_frame + 0xc0)) = 0xf;
      (*(undefined4 *)(gen_frame + 0xbc)) = 0;
      (*(undefined1 *)((char *)&((uint *)(gen_frame + 0xac))[0] + 0)) = 0;
      ((uint *)(gen_frame + 0xac))[0] = uVar3 & 0xffffff00;
      pcVar5 = pcVar4;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      F_00bb56c0(((uint *)(gen_frame + 0xac)),pcVar4,(int)pcVar5 - (int)(pcVar4 + 1));
      F_00e3e600(((int *)(gen_frame + 0x4)),((uint *)(gen_frame + 0xac)),1,1);
      if (0xf < (*(uint *)(gen_frame + 0xc0))) {
        F_00406ad0(((uint *)(gen_frame + 0xac))[0]);
      }
      F_00ebf900(((int *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0xa4)));
      (*(uint *)(gen_frame + 0xa8)) = (*(undefined4 *)(gen_frame + 0xa4));
      *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)((int *)(gen_frame + 0x4)) + *(int *)(((int *)(gen_frame + 0x4))[0] + 4)))) =
           (*(undefined * PTR32 (*)[1])REFP(0x1157814));
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x14))[0] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4))
      ;
      F_00e3ce60(((undefined * PTR32 * PTR32 *)(gen_frame + 0x14)));
      F_00479ae0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x14)));
      *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)((int *)(gen_frame + 0x4)) + *(int *)(((int *)(gen_frame + 0x4))[0] + 4)))) =
           (*(undefined * PTR32 (*)[1])REFP(0x115772c));
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x5c))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
      F_00c46453((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x5c)));
      F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
      return extraout_EAX;
    }
    (*(uint *)(gen_frame + 0xa8)) = (uint)*(byte *)((int)this + 0x10);
    F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0xcc));
    return 0;
  }
  F_00c47745(uVar3 ^ (uint)(uint)(gen_frame + 0xcc));
  return 0;
}

/* ref: FUN_00ea2130 */
uint F_00ea2130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xea2130u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  char cVar1;
  undefined4 * PTR32 * PTR32 * pppuVar2;
  undefined2 * puVar3;
  char * pcVar4;
  uint uVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar6;
  undefined4 extraout_EAX = 0;
  uint uVar7;
  int iVar8;
  undefined4 * puVar9;
  
  (*(uint *)(gen_frame + 0xe8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xec);
  iVar8 = 0;
  (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0xc0))))) = (int)param_2;
  (*(undefined4 *)(gen_frame + 0xac)) = 0;
  puVar3 = param_2;
  do {
    if ((*((byte *)GEN_TOP((*(int *)(*param_1 + 4) + 0xc + (int)param_1))) & 6) != 0) {
      F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
      return (uint)puVar3 & 0xffffff00;
    }
    puVar3 = (undefined2 *)F_00ec0810(param_1);
    pppuVar2 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc4))[0];
    if (puVar3 != (undefined2 *)0xffffffff) {
      ((char *)(gen_frame + 0xe0))[(int)(iVar8)] = (char)puVar3;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 4);
  pcVar4 = ((char *)(gen_frame + 0xe0));
  (*(undefined1 *)(gen_frame + 0xe4)) = 0;
  (*(uint *)(gen_frame + 0xd8)) = 0xf;
  (*(undefined4 *)(gen_frame + 0xd4)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc4))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc4))[0] = (undefined4 * PTR32 * PTR32 *)((uint)pppuVar2 & 0xffffff00);
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_00bb56c0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc4)),((char *)(gen_frame + 0xe0)),(int)pcVar4 - (int)(((char *)(gen_frame + 0xe0)) + 1));
  ((undefined * PTR32 *)(gen_frame + 0xc))[0] = &REFG(undefined, 0x1157820);
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x64))[0] = (*(undefined * PTR32 (*)[1])REFP(0x115772c));
  (*(undefined8 *)(gen_frame + 0x14)) = 0;
  F_004797a0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x64)));
  (*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x9c)) = &(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1c));
  (*(undefined4 *)(gen_frame + 0xa0)) = 0;
  uVar5 = F_00481650(((undefined * PTR32 * PTR32 *)(gen_frame + 0x64)),0x20);
  (*(undefined1 *)(gen_frame + 0xa4)) = (char)uVar5;
  if ((*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x9c)) == (undefined * PTR32 * PTR32 *)0x0) {
    uVar5 = (*(uint *)(gen_frame + 0x70)) & 0x17 | 4;
    uVar7 = (*(uint *)(gen_frame + 0x74)) & uVar5;
    (*(uint *)(gen_frame + 0x70)) = uVar5;
    if (uVar7 != 0) {
      if ((uVar7 & 4) == 0) {
        if ((uVar7 & 2) == 0) {
          uVar5 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0xb4)) = "ios_base::eofbit set";
        }
        else {
          uVar5 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0xb4)) = "ios_base::failbit set";
        }
      }
      else {
        uVar5 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0xb4)) = "ios_base::badbit set";
      }
      (*(undefined4 *)(gen_frame + 0xb8)) = 1;
      (*(uint *)(gen_frame + 0xbc)) = uVar5;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xb0)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xb0)));
    }
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)((undefined * PTR32 *)(gen_frame + 0xc)) + *(int *)(((undefined * PTR32 *)(gen_frame + 0xc))[0] + 4)))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157814));
  F_00479880(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  ppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc4))[0];
  if ((*(uint *)(gen_frame + 0xd8)) < 0x10) {
    ppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc4));
  }
  F_00e3da10(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),ppppuVar6,(*(undefined4 *)(gen_frame + 0xd4)),2);
  if (0xf < (*(uint *)(gen_frame + 0xd8))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc4))[0]);
  }
  *((uint *)GEN_TOP(((int)((uint *)(gen_frame + 0x20)) + *(int *)(((undefined * PTR32 *)(gen_frame + 0xc))[0] + 4)))) =
       *((uint *)GEN_TOP(((int)((uint *)(gen_frame + 0x20)) + *(int *)(((undefined * PTR32 *)(gen_frame + 0xc))[0] + 4)))) & 0xfffff9ff | 0x800;
  F_00ebf460(((undefined * PTR32 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0xac)));
  *(undefined2 *)(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0xc0))))) = (undefined2)(*(undefined4 *)(gen_frame + 0xac));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)((undefined * PTR32 *)(gen_frame + 0xc)) + *(int *)(((undefined * PTR32 *)(gen_frame + 0xc))[0] + 4)))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157814));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  if (((*(uint *)(gen_frame + 0x5c)) & 1) != 0) {
    F_00406ad0(*(*(undefined4 * PTR32 *)(gen_frame + 0x2c)));
  }
  *(*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = 0;
  *(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = 0;
  *(*(undefined4 * PTR32 *)(gen_frame + 0x4c)) = 0;
  *(*(undefined4 * PTR32 *)(gen_frame + 0x30)) = 0;
  *(*(undefined4 * PTR32 *)(gen_frame + 0x40)) = 0;
  *(*(undefined4 * PTR32 *)(gen_frame + 0x50)) = 0;
  (*(uint *)(gen_frame + 0x5c)) = (*(uint *)(gen_frame + 0x5c)) & 0xfffffffe;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 (*)[15])REFP(0x10910fc));
  if ((*(uint * PTR32 *)(gen_frame + 0x54)) != (uint *)0x0) {
    uVar5 = *(*(uint * PTR32 *)(gen_frame + 0x54));
    if (uVar5 != 0) {
      F_00c45bc0(&(*(undefined4 *)(gen_frame + 0xc0)),0);
      iVar8 = *(int *)(uVar5 + 4);
      if ((iVar8 != 0) && (iVar8 != -1)) {
        *(int *)(uVar5 + 4) = iVar8 + -1;
      }
      iVar8 = *(int *)(uVar5 + 4);
      F_00c45be8(&(*(undefined4 *)(gen_frame + 0xc0)));
      puVar9 = ((undefined4 *)GEN_TOP((~-(uint)(iVar8 != 0) & uVar5)));
      if (puVar9 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar9)(puVar9,1);
      }
    }
    F_00406ad0((*(uint * PTR32 *)(gen_frame + 0x54)));
  }
  F_00c465bd(((uint *)(gen_frame + 0x20)));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)((undefined * PTR32 *)(gen_frame + 0xc)) + *(int *)(((undefined * PTR32 *)(gen_frame + 0xc))[0] + 4)))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115772c));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x64))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x64)));
  F_00c47745((*(uint *)(gen_frame + 0xe8)) ^ (uint)(uint)(gen_frame + 0xec));
  return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
}

/* ref: FUN_00ea2680 */
uint F_00ea2680(unsigned int gen_a0)
{
  GEN_ENTER(0xea2680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115e8d8));
  F_00ecd8c0((undefined *)((int)this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 8));
  return uVar1;
}

/* ref: FUN_00ea26c0 */
uint F_00ea26c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xea26c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00ed0400((undefined *)((int)this + 4),param_1);
  uVar1 = F_0042ccf0(this_00,param_2);
  return uVar1;
}

/* ref: FUN_00ea26e0 */
uint F_00ea26e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xea26e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined1 uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042b630(((char * PTR32 *)(gen_frame + 0x4)));
  uVar1 = (undefined1)(*(undefined4 *)(gen_frame + 0x0));
  while( true ) {
    uVar2 = F_00ec0810(param_1);
    if (uVar2 != 0xffffffff) {
      uVar1 = (undefined1)uVar2;
      (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),uVar1);
    }
    uVar2 = *((uint *)GEN_TOP((*(int *)(*param_1 + 4) + 0xc + (int)param_1)));
    if ((uVar2 & 1) != 0) break;
    if ((uVar2 & 6) != 0) goto LAB_00ea2757;
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0: ;
    case 9: ;
    case 10: ;
    case 0xd: ;
    case 0x20: ;
    case 0x22: ;
    case 0x2c: ;
    case 0x3a: ;
    case 0x5b: ;
    case 0x5d: ;
    case 0x7b: ;
    case 0x7d: ;
      F_00ebfb80(param_1,(*(undefined4 *)(gen_frame + 0x0)));
LAB_00ea2783: ;
      uVar2 = F_00ea2440(this,((char * PTR32 *)(gen_frame + 0x4)));
      uVar3 = F_0042c880(((char * PTR32 *)(gen_frame + 0x4)));
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return CONCAT31((int3)(uVar3 >> 8),(char)uVar2);
    default: ;
      F_0042dc00(((char * PTR32 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)));
    }
  }
  if (*((char * PTR32 *)(gen_frame + 0x4))[0] == '\0') {
LAB_00ea2757: ;
    uVar3 = F_0042c880(((char * PTR32 *)(gen_frame + 0x4)));
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return (uint)(uint3)(uVar3 >> 8) << 8;
  }
  goto LAB_00ea2783;
}

/* ref: FUN_00ea2840 */
uint F_00ea2840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xea2840u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined4 * PTR32 * PTR32 * PTR32 * ppppuVar1;
  char cVar2;
  uint uVar3;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * pppppuVar4;
  int iVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * pppppuVar6;
  undefined4 uVar7;
  uint * this_00;
  
  ppppuVar1 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0];
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(int * PTR32 *)(gen_frame + 0x10)) = this;
  (*(uint * PTR32 *)(gen_frame + 0xc)) = param_1;
  (*(uint *)(gen_frame + 0x80)) = 0xf;
  (*(int *)(gen_frame + 0x7c)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0] = (undefined4 * PTR32 * PTR32 * PTR32 *)((uint)ppppuVar1 & 0xffffff00);
  uVar7 = (*(undefined4 *)(gen_frame + 0x14));
  this_00 = param_1;
  cVar2 = (char)(*(undefined4 *)(gen_frame + 0x14));
LAB_00ea2880: ;
  uVar3 = *this_00;
  if ((*((byte *)GEN_TOP((*(int *)(uVar3 + 4) + 0xc + (int)this_00))) & 6) != 0) {
switchD_00ea29be_caseD_23: ;
    if (0xf < (*(uint *)(gen_frame + 0x80))) {
      uVar3 = F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0]);
    }
LAB_00ea2af6: ;
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return uVar3 & 0xffffff00;
  }
  uVar3 = F_00ec0810(this_00);
  if (uVar3 != 0xffffffff) {
    cVar2 = (char)uVar3;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x14)) + 0)) = cVar2;
    (*(undefined4 *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x14)), 1, 3),cVar2);
    uVar7 = (*(undefined4 *)(gen_frame + 0x14));
  }
  pppppuVar6 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0];
  switch((unsigned int)(uintptr_t)(cVar2)) {
  case '\"': ;
    if (cVar2 == (char)param_2) {
LAB_00ea2b66: ;
      *(*(int * PTR32 *)(gen_frame + 0x10)) = (int)((*(int * PTR32 *)(gen_frame + 0x10)) + 0x1a);
LAB_00ea2b6e: ;
      uVar3 = ((code *)*(gen_code32 *)(*(int *)*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x10))((int *)*(*(int * PTR32 *)(gen_frame + 0x10)),((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c)));
      if (0xf < (*(uint *)(gen_frame + 0x80))) {
        uVar3 = F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0]);
      }
      F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
    pppppuVar4 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0];
    if ((*(uint *)(gen_frame + 0x80)) < 0x10) {
      pppppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c));
    }
    iVar5 = (int)pppppuVar4 + (*(int *)(gen_frame + 0x7c));
    if ((*(uint *)(gen_frame + 0x80)) < 0x10) {
      pppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c));
    }
    if (iVar5 == 0) {
      F_00ebe720(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c)),0,1,uVar7);
      this_00 = (*(uint * PTR32 *)(gen_frame + 0xc));
      goto LAB_00ea2880;
    }
    break;
  default: ;
    pppppuVar4 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0];
    if ((*(uint *)(gen_frame + 0x80)) < 0x10) {
      pppppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c));
    }
    iVar5 = (int)pppppuVar4 + (*(int *)(gen_frame + 0x7c));
    if ((*(uint *)(gen_frame + 0x80)) < 0x10) {
      pppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c));
    }
    if (iVar5 == 0) {
      F_00ebe720(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c)),0,1,uVar7);
      this_00 = (*(uint * PTR32 *)(gen_frame + 0xc));
      goto LAB_00ea2880;
    }
    break;
  case '\'': ;
    if (cVar2 == (char)param_2) goto LAB_00ea2b66;
    pppppuVar4 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0];
    if ((*(uint *)(gen_frame + 0x80)) < 0x10) {
      pppppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c));
    }
    iVar5 = (int)pppppuVar4 + (*(int *)(gen_frame + 0x7c));
    if ((*(uint *)(gen_frame + 0x80)) < 0x10) {
      pppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c));
    }
    if (iVar5 == 0) {
      F_00ebe720(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c)),0,1,uVar7);
      this_00 = (*(uint * PTR32 *)(gen_frame + 0xc));
      goto LAB_00ea2880;
    }
    break;
  case '>': ;
    if (cVar2 == (char)param_2) {
      *(*(int * PTR32 *)(gen_frame + 0x10)) = (int)((*(int * PTR32 *)(gen_frame + 0x10)) + 0x23);
      goto LAB_00ea2b6e;
    }
    pppppuVar4 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0];
    if ((*(uint *)(gen_frame + 0x80)) < 0x10) {
      pppppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c));
    }
    iVar5 = (int)pppppuVar4 + (*(int *)(gen_frame + 0x7c));
    if ((*(uint *)(gen_frame + 0x80)) < 0x10) {
      pppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c));
    }
    if (iVar5 == 0) {
      F_00ebe720(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c)),0,1,uVar7);
      this_00 = (*(uint * PTR32 *)(gen_frame + 0xc));
      goto LAB_00ea2880;
    }
    break;
  case '\\': ;
    uVar3 = *this_00;
    if ((*((byte *)GEN_TOP((*(int *)(uVar3 + 4) + 0xc + (int)this_00))) & 6) != 0) {
      if (0xf < (*(uint *)(gen_frame + 0x80))) {
        uVar3 = F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0]);
        F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
        return uVar3 & 0xffffff00;
      }
      goto LAB_00ea2af6;
    }
    uVar3 = F_00ec0810(this_00);
    if (uVar3 != 0xffffffff) {
      cVar2 = (char)uVar3;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x14)) + 0)) = cVar2;
      (*(undefined4 *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x14)), 1, 3),cVar2);
      uVar7 = (*(undefined4 *)(gen_frame + 0x14));
    }
    uVar3 = (int)cVar2 - 0x22;
    switch((unsigned int)(uintptr_t)(cVar2)) {
    case '\"': ;
      F_00eccdb0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c)),0x22);
      break;
    default: ;
      goto switchD_00ea29be_caseD_23;
    case '/': ;
      F_00eccdb0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c)),0x2f);
      break;
    case '\\': ;
      F_00eccdb0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c)),0x5c);
      break;
    case 'b': ;
      F_00eccdb0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c)),8);
      break;
    case 'f': ;
      F_00eccdb0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c)),0xc);
      break;
    case 'n': ;
      F_00eccdb0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c)),10);
      break;
    case 'r': ;
      F_00eccdb0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c)),0xd);
      break;
    case 't': ;
      F_00eccdb0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c)),9);
      break;
    case 'u': ;
      uVar3 = F_00ea2130(this_00,((undefined2 *)(gen_frame + 0x8)));
      if ((char)uVar3 != '\0') goto code_r0x00ea2a55;
      if (0xf < (*(uint *)(gen_frame + 0x80))) {
        uVar3 = F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c))[0]);
        F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
        return uVar3 & 0xffffff00;
      }
      goto LAB_00ea2af6;
    }
    goto LAB_00ea2880;
  }
  F_00ebe720(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c)),iVar5 - (int)pppppuVar6,1,uVar7);
  this_00 = (*(uint * PTR32 *)(gen_frame + 0xc));
  goto LAB_00ea2880;
code_r0x00ea2a55: ;
  (*(undefined2 *)(gen_frame + 0x4)) = ((undefined2 *)(gen_frame + 0x8))[0];
  (*(undefined2 *)(gen_frame + 0x6)) = 0;
  F_0042e170(((undefined1 *)(gen_frame + 0x18)),&(*(undefined2 *)(gen_frame + 0x4)));
  uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x18)));
  F_00e69680(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x6c)),uVar3);
  F_0042c880(((undefined1 *)(gen_frame + 0x18)));
  goto LAB_00ea2880;
}

/* ref: FUN_00ea2c70 */
uint F_00ea2c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xea2c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * pppppppuVar1;
  
  (*(uint *)(gen_frame + 0xb8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  (*(undefined4 *)(gen_frame + 0x98)) = 0;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = &REFG(undefined * PTR32, 0x1157cd0);
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x50))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  F_00483f60(((undefined * PTR32 * PTR32 *)(gen_frame + 0x50)),((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) + 1,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0][1] + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
  F_00479880(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) + 1);
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[1] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 4;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 8))) {
  case 1: ;
    F_00ebf0f0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),*(undefined4 *)((int)this + 0x10),*(undefined4 *)((int)this + 0x14));
    break;
  case 2: ;
    F_00ebf2a0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),*(float *)((int)this + 0x10));
    break;
  case 3: ;
    F_00ebed90(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),(uint)*(byte *)((int)this + 0x10));
    break;
  case 4: ;
  case 7: ;
    F_0042cbc0(param_1,*(undefined4 *)((int)this + 0x10));
    F_00e44680(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
    goto LAB_00ea2dae;
  }
  F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) + 1,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x9c)));
  pppppppuVar1 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x9c))[0];
  if ((*(uint *)(gen_frame + 0xb0)) < 0x10) {
    pppppppuVar1 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x9c));
  }
  F_0042cc20(param_1,pppppppuVar1,REFG(undefined4, 0x108cc50));
  if (0xf < (*(uint *)(gen_frame + 0xb0))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x9c))[0]);
  }
  pppppppuVar1 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x9c))[0];
  (*(uint *)(gen_frame + 0xb0)) = 0xf;
  (*(undefined4 *)(gen_frame + 0xac)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x9c))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x9c))[0] = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)((uint)pppppppuVar1 & 0xffffff00);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0][1] + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[1] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  F_00e3ce60(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) + 1);
  F_00479ae0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) + 1);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0][1] + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x50))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x50)));
LAB_00ea2dae: ;
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return (uint)param_1;
}

/* ref: FUN_00ea2e30 */
uint F_00ea2e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xea2e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  char cVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * pppppppuVar6;
  undefined * pvVar7;
  int * piVar8;
  int * piVar9;
  undefined4 * puVar10;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  piVar8 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 4)));
  piVar9 = (int *)*piVar8;
  (*(undefined * PTR32 *)(gen_frame + 0xa4)) = this;
  (*(int *)(gen_frame + 0xb4)) = param_1;
  (*(uint *)(gen_frame + 0xb0)) = 0;
  if (piVar9 != piVar8) {
    do {
      iVar3 = (*(int *)(gen_frame + 0xb4));
      (*(uint *)(gen_frame + 0xb0)) = (*(uint *)(gen_frame + 0xb0)) | 1;
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = &REFG(undefined * PTR32, 0x1157cd0);
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x5c))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109105c));
      F_004797a0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x5c)));
      (*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x94)) = ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) + 1;
      (*(undefined4 *)(gen_frame + 0x98)) = 0;
      uVar5 = F_00481650(((undefined * PTR32 * PTR32 *)(gen_frame + 0x5c)),0x20);
      (*(undefined1 *)(gen_frame + 0x9c)) = (char)uVar5;
      if ((*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x94)) == (undefined * PTR32 * PTR32 *)0x0) {
        uVar5 = (*(uint *)(gen_frame + 0x68)) & 0x17 | 4;
        (*(uint *)(gen_frame + 0x68)) = uVar5;
        if ((uVar5 & (*(uint *)(gen_frame + 0x6c))) != 0) {
          if (((*(uint *)(gen_frame + 0x6c)) & uVar5 & 4) == 0) {
            if (((*(uint *)(gen_frame + 0x6c)) & uVar5 & 2) == 0) {
              uVar5 = F_00c46280();
              (*(char * PTR32 *)(gen_frame + 0x1fc)) = "ios_base::eofbit set";
            }
            else {
              uVar5 = F_00c46280();
              (*(char * PTR32 *)(gen_frame + 0x1fc)) = "ios_base::failbit set";
            }
          }
          else {
            uVar5 = F_00c46280();
            (*(char * PTR32 *)(gen_frame + 0x1fc)) = "ios_base::badbit set";
          }
          (*(uint *)(gen_frame + 0x200)) = 1;
          (*(uint *)(gen_frame + 0x204)) = uVar5;
          (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1f8)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
          F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1f8)));
        }
      }
      *(undefined * PTR32 * PTR32 *)((int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0][1]) =
           (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
      F_00479880(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) + 1);
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[1] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
      (*(undefined4 *)(gen_frame + 0x4c)) = 0;
      (*(uint *)(gen_frame + 0x50)) = 4;
      switch((unsigned int)(uintptr_t)(piVar9[0x1c])) {
      case 1: ;
        iVar3 = piVar9[0x1e];
        if (iVar3 >> 0x1f == piVar9[0x1f]) {
          F_00ebef40(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),iVar3);
        }
        else {
          F_00ebf0f0(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),iVar3,piVar9[0x1f]);
        }
        F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) + 1,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1ec)));
        pppppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1ec))[0];
        if ((*(uint *)(gen_frame + 0x200)) < 0x10) {
          pppppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1ec));
        }
        F_0042cc20(((undefined1 *)(gen_frame + 0x160)),pppppppuVar6,REFG(undefined4, 0x108cc50));
        pvVar7 = (undefined *)F_00ed0400((undefined *)((*(int *)(gen_frame + 0xb4)) + 4),piVar9 + 4);
        F_0042ccf0(pvVar7,((undefined1 *)(gen_frame + 0x160)));
        F_0042c880(((undefined1 *)(gen_frame + 0x160)));
        if (0xf < (*(uint *)(gen_frame + 0x200))) {
          F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1ec))[0]);
        }
        break;
      case 2: ;
        F_00ebf2a0(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),GEN_TOF(gen_bits2f(piVar9[0x1e])));
        F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) + 1,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1d0)));
        pppppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1d0))[0];
        if ((*(uint *)(gen_frame + 0x1e4)) < 0x10) {
          pppppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1d0));
        }
        F_0042cc20(((undefined1 *)(gen_frame + 0xb8)),pppppppuVar6,REFG(undefined4, 0x108cc50));
        pvVar7 = (undefined *)F_00ed0400((undefined *)(iVar3 + 4),piVar9 + 4);
        F_0042ccf0(pvVar7,((undefined1 *)(gen_frame + 0xb8)));
        F_0042c880(((undefined1 *)(gen_frame + 0xb8)));
        if (0xf < (*(uint *)(gen_frame + 0x1e4))) {
          F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1d0))[0]);
        }
        break;
      case 3: ;
        F_00ebed90(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),(uint)*(byte *)(piVar9 + 0x1e));
        F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) + 1,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1b4)));
        pppppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1b4))[0];
        if ((*(uint *)(gen_frame + 0x1c8)) < 0x10) {
          pppppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1b4));
        }
        F_0042cc20(((undefined1 *)(gen_frame + 0x10c)),pppppppuVar6,REFG(undefined4, 0x108cc50));
        pvVar7 = (undefined *)F_00ed0400((undefined *)(iVar3 + 4),piVar9 + 4);
        F_0042ccf0(pvVar7,((undefined1 *)(gen_frame + 0x10c)));
        F_0042c880(((undefined1 *)(gen_frame + 0x10c)));
        if (0xf < (*(uint *)(gen_frame + 0x1c8))) {
          F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1b4))[0]);
        }
        break;
      case 4: ;
        iVar2 = piVar9[0x1e];
        pvVar7 = (undefined *)F_00ed0400((undefined *)(iVar3 + 4),piVar9 + 4);
        F_0042ccf0(pvVar7,iVar2);
      }
      *(undefined * PTR32 * PTR32 *)((int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0][1]) =
           (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[1] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
      if (((*(uint *)(gen_frame + 0x50)) & 1) != 0) {
        F_00406ad0(*(*(undefined4 * PTR32 *)(gen_frame + 0x20)));
      }
      *(*(undefined4 * PTR32 *)(gen_frame + 0x20)) = 0;
      *(*(undefined4 * PTR32 *)(gen_frame + 0x30)) = 0;
      *(*(undefined4 * PTR32 *)(gen_frame + 0x40)) = 0;
      *(*(undefined4 * PTR32 *)(gen_frame + 0x24)) = 0;
      *(*(undefined4 * PTR32 *)(gen_frame + 0x34)) = 0;
      *(*(undefined4 * PTR32 *)(gen_frame + 0x44)) = 0;
      (*(uint *)(gen_frame + 0x50)) = (*(uint *)(gen_frame + 0x50)) & 0xfffffffe;
      (*(undefined4 *)(gen_frame + 0x4c)) = 0;
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[1] = (*(undefined * PTR32 (*)[15])REFP(0x10910fc));
      (*(uint * PTR32 *)(gen_frame + 0xac)) = (*(uint * PTR32 *)(gen_frame + 0x48));
      if ((*(uint * PTR32 *)(gen_frame + 0x48)) != (uint *)0x0) {
        uVar5 = *(*(uint * PTR32 *)(gen_frame + 0x48));
        if (uVar5 != 0) {
          F_00c45bc0(&(*(undefined4 *)(gen_frame + 0xa8)),0);
          iVar3 = *(int *)(uVar5 + 4);
          if ((iVar3 != 0) && (iVar3 != -1)) {
            *(int *)(uVar5 + 4) = iVar3 + -1;
          }
          iVar3 = *(int *)(uVar5 + 4);
          F_00c45be8(&(*(undefined4 *)(gen_frame + 0xa8)));
          puVar10 = ((undefined4 *)GEN_TOP((~-(uint)(iVar3 != 0) & uVar5)));
          if (puVar10 != (undefined4 *)0x0) {
            ((code *)*(gen_code32 *)*puVar10)(puVar10,1);
          }
        }
        F_00406ad0((*(uint * PTR32 *)(gen_frame + 0xac)));
      }
      F_00c465bd(((undefined1 *)(gen_frame + 0x14)));
      *(undefined * PTR32 * PTR32 *)((int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0][1]) =
           (*(undefined * PTR32 (*)[1])REFP(0x109105c));
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x5c))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
      F_00c46453((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x5c)));
      if (*(char *)((int)piVar9 + 0x81) == '\0') {
        piVar8 = (int *)piVar9[2];
        if (*(char *)((int)piVar8 + 0x81) == '\0') {
          cVar1 = *(char *)(*piVar8 + 0x81);
          piVar9 = piVar8;
          piVar8 = (int *)*piVar8;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar8 + 0x81);
            piVar9 = piVar8;
            piVar8 = (int *)*piVar8;
          }
        }
        else {
          cVar1 = *(char *)(piVar9[1] + 0x81);
          piVar4 = (int *)piVar9[1];
          piVar8 = piVar9;
          while ((piVar9 = piVar4, cVar1 == '\0' && (piVar8 == (int *)piVar9[2]))) {
            cVar1 = *(char *)(piVar9[1] + 0x81);
            piVar4 = (int *)piVar9[1];
            piVar8 = piVar9;
          }
        }
      }
      piVar8 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xa4)) + 0x10);
    } while (piVar9 != (int *)piVar8[1]);
  }
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
  return (uint)piVar8;
}

/* ref: FUN_00ea3320 */
uint F_00ea3320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xea3320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x470];
  int iVar1;
  int iVar2;
  uint * puVar3;
  uint uVar4;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * pppppppuVar5;
  undefined * pvVar6;
  int * piVar7;
  undefined4 * puVar8;
  int * piVar9;
  bool bVar10;
  
  (*(uint *)(gen_frame + 0x468)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x46c);
  (*(int *)(gen_frame + 0x144)) = param_1;
  piVar7 = *(int * PTR32 *)((int)this + 0x10);
  piVar9 = (int *)*piVar7;
  (*(undefined * PTR32 *)(gen_frame + 0x130)) = this;
  (*(uint *)(gen_frame + 0x140)) = 0;
  (*(undefined8 *)(gen_frame + 0x150)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x13c)) = piVar9;
  if (piVar9 != (int *)piVar7[1]) {
    do {
      (*(uint *)(gen_frame + 0x140)) = (*(uint *)(gen_frame + 0x140)) | 1;
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = &REFG(undefined * PTR32, 0x1157cd0);
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x50))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109105c));
      (*(int * PTR32 *)(gen_frame + 0x13c)) = piVar9;
      F_004797a0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x50)));
      (*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x88)) = ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) + 1;
      (*(undefined4 *)(gen_frame + 0x8c)) = 0;
      uVar4 = F_00481650(((undefined * PTR32 * PTR32 *)(gen_frame + 0x50)),0x20);
      (*(undefined1 *)(gen_frame + 0x90)) = (char)uVar4;
      if ((*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x88)) == (undefined * PTR32 * PTR32 *)0x0) {
        uVar4 = (*(uint *)(gen_frame + 0x5c)) & 0x17 | 4;
        (*(uint *)(gen_frame + 0x5c)) = uVar4;
        if ((uVar4 & (*(uint *)(gen_frame + 0x60))) != 0) {
          uVar4 = (*(uint *)(gen_frame + 0x60)) & uVar4;
          goto joined_r0x00ea3ac9;
        }
      }
      *(undefined * PTR32 * PTR32 *)((int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0][1]) =
           (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
      F_00479880(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) + 1);
      (*(uint *)(gen_frame + 0x140)) = (*(uint *)(gen_frame + 0x140)) | 4;
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[1] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      (*(uint *)(gen_frame + 0x44)) = 4;
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x98))[0] = &REFG(undefined * PTR32, 0x1157cd0);
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0xe8))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109105c));
      F_004797a0(((undefined * PTR32 * PTR32 *)(gen_frame + 0xe8)));
      (*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x120)) = ((undefined * PTR32 * PTR32 *)(gen_frame + 0x98)) + 1;
      (*(undefined4 *)(gen_frame + 0x124)) = 0;
      uVar4 = F_00481650(((undefined * PTR32 * PTR32 *)(gen_frame + 0xe8)),0x20);
      (*(undefined1 *)(gen_frame + 0x128)) = (char)uVar4;
      if ((*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x120)) == (undefined * PTR32 * PTR32 *)0x0) {
        uVar4 = (*(uint *)(gen_frame + 0xf4)) & 0x17 | 4;
        (*(uint *)(gen_frame + 0xf4)) = uVar4;
        if ((uVar4 & (*(uint *)(gen_frame + 0xf8))) != 0) {
          uVar4 = (*(uint *)(gen_frame + 0xf8)) & uVar4;
joined_r0x00ea3ac9: ;
          if ((uVar4 & 4) == 0) {
            if ((uVar4 & 2) == 0) {
              uVar4 = F_00c46280();
              (*(char * PTR32 *)(gen_frame + 0x14c)) = "ios_base::eofbit set";
            }
            else {
              uVar4 = F_00c46280();
              (*(char * PTR32 *)(gen_frame + 0x14c)) = "ios_base::failbit set";
            }
          }
          else {
            uVar4 = F_00c46280();
            (*(char * PTR32 *)(gen_frame + 0x14c)) = "ios_base::badbit set";
          }
          (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x150)) + 0)) = 1;
          (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x150)) + 4)) = uVar4;
          (*(undefined8 *)(gen_frame + 0x150)) = CONCAT44(uVar4,1);
          (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x148)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
          F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x148)));
        }
      }
      *(undefined * PTR32 * PTR32 *)((int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x98)) + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x98))[0][1]) =
           (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
      F_00479880(((undefined * PTR32 * PTR32 *)(gen_frame + 0x98)) + 1);
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x98))[1] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
      (*(undefined4 *)(gen_frame + 0xd8)) = 0;
      (*(uint *)(gen_frame + 0xdc)) = 4;
      F_00ebf0f0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),(uint)(*(undefined8 *)(gen_frame + 0x150)),(*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x150)) + 4)));
      switch((unsigned int)(uintptr_t)(piVar9[2])) {
      case 1: ;
        iVar1 = piVar9[4];
        if (iVar1 >> 0x1f == piVar9[5]) {
          F_00ebef40(((undefined * PTR32 * PTR32 *)(gen_frame + 0x98)),iVar1);
        }
        else {
          F_00ebf0f0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x98)),iVar1,piVar9[5]);
        }
        F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0x98)) + 1,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3a4)));
        pppppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3a4))[0];
        if ((*(uint *)(gen_frame + 0x3b8)) < 0x10) {
          pppppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3a4));
        }
        F_0042cc20(((undefined1 *)(gen_frame + 0x2a8)),pppppppuVar5,REFG(undefined4, 0x108cc50));
        F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) + 1,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44c)));
        pppppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44c))[0];
        if ((*(uint *)(gen_frame + 0x460)) < 0x10) {
          pppppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44c));
        }
        F_0042cc20(((undefined1 *)(gen_frame + 0x2fc)),pppppppuVar5,REFG(undefined4, 0x108cc50));
        pvVar6 = (undefined *)F_00ed0400((undefined *)((*(int *)(gen_frame + 0x144)) + 4),((undefined1 *)(gen_frame + 0x2fc)));
        F_0042ccf0(pvVar6,((undefined1 *)(gen_frame + 0x2a8)));
        F_0042c880(((undefined1 *)(gen_frame + 0x2fc)));
        if (0xf < (*(uint *)(gen_frame + 0x460))) {
          F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44c))[0]);
        }
        pppppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44c))[0];
        (*(uint *)(gen_frame + 0x460)) = 0xf;
        (*(undefined4 *)(gen_frame + 0x45c)) = 0;
        (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44c))[0] + 0)) = 0;
        ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x44c))[0] = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)((uint)pppppppuVar5 & 0xffffff00);
        F_0042c880(((undefined1 *)(gen_frame + 0x2a8)));
        pppppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3a4))[0];
        uVar4 = (*(uint *)(gen_frame + 0x3b8));
        break;
      case 2: ;
        F_00ebf2a0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x98)),GEN_TOF(gen_bits2f(piVar9[4])));
        F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0x98)) + 1,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3f8)));
        pppppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3f8))[0];
        if ((*(uint *)(gen_frame + 0x40c)) < 0x10) {
          pppppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3f8));
        }
        F_0042cc20(((undefined1 *)(gen_frame + 0x1ac)),pppppppuVar5,REFG(undefined4, 0x108cc50));
        F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) + 1,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x414)));
        pppppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x414))[0];
        if ((*(uint *)(gen_frame + 0x428)) < 0x10) {
          pppppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x414));
        }
        F_0042cc20(((undefined1 *)(gen_frame + 0x254)),pppppppuVar5,REFG(undefined4, 0x108cc50));
        pvVar6 = (undefined *)F_00ed0400((undefined *)((*(int *)(gen_frame + 0x144)) + 4),((undefined1 *)(gen_frame + 0x254)));
        F_0042ccf0(pvVar6,((undefined1 *)(gen_frame + 0x1ac)));
        F_0042c880(((undefined1 *)(gen_frame + 0x254)));
        if (0xf < (*(uint *)(gen_frame + 0x428))) {
          F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x414))[0]);
        }
        pppppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x414))[0];
        (*(uint *)(gen_frame + 0x428)) = 0xf;
        (*(undefined4 *)(gen_frame + 0x424)) = 0;
        (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x414))[0] + 0)) = 0;
        ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x414))[0] = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)((uint)pppppppuVar5 & 0xffffff00);
        F_0042c880(((undefined1 *)(gen_frame + 0x1ac)));
        pppppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3f8))[0];
        uVar4 = (*(uint *)(gen_frame + 0x40c));
        break;
      case 3: ;
        F_00ebed90(((undefined * PTR32 * PTR32 *)(gen_frame + 0x98)),(uint)*(byte *)(piVar9 + 4));
        F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0x98)) + 1,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c0)));
        pppppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c0))[0];
        if ((*(uint *)(gen_frame + 0x3d4)) < 0x10) {
          pppppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c0));
        }
        F_0042cc20(((undefined1 *)(gen_frame + 0x200)),pppppppuVar5,REFG(undefined4, 0x108cc50));
        F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) + 1,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x430)));
        pppppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x430))[0];
        if ((*(uint *)(gen_frame + 0x444)) < 0x10) {
          pppppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x430));
        }
        F_0042cc20(((undefined1 *)(gen_frame + 0x158)),pppppppuVar5,REFG(undefined4, 0x108cc50));
        pvVar6 = (undefined *)F_00ed0400((undefined *)((*(int *)(gen_frame + 0x144)) + 4),((undefined1 *)(gen_frame + 0x158)));
        F_0042ccf0(pvVar6,((undefined1 *)(gen_frame + 0x200)));
        F_0042c880(((undefined1 *)(gen_frame + 0x158)));
        if (0xf < (*(uint *)(gen_frame + 0x444))) {
          F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x430))[0]);
        }
        pppppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x430))[0];
        (*(uint *)(gen_frame + 0x444)) = 0xf;
        (*(undefined4 *)(gen_frame + 0x440)) = 0;
        (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x430))[0] + 0)) = 0;
        ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x430))[0] = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)((uint)pppppppuVar5 & 0xffffff00);
        F_0042c880(((undefined1 *)(gen_frame + 0x200)));
        pppppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3c0))[0];
        uVar4 = (*(uint *)(gen_frame + 0x3d4));
        break;
      case 4: ;
        F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) + 1,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3dc)));
        pppppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3dc))[0];
        if ((*(uint *)(gen_frame + 0x3f0)) < 0x10) {
          pppppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3dc));
        }
        F_0042cc20(((undefined1 *)(gen_frame + 0x350)),pppppppuVar5,REFG(undefined4, 0x108cc50));
        iVar1 = piVar9[4];
        pvVar6 = (undefined *)F_00ed0400((undefined *)((*(int *)(gen_frame + 0x144)) + 4),((undefined1 *)(gen_frame + 0x350)));
        F_0042ccf0(pvVar6,iVar1);
        F_0042c880(((undefined1 *)(gen_frame + 0x350)));
        pppppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x3dc))[0];
        uVar4 = (*(uint *)(gen_frame + 0x3f0));
        break;
      default: ;
        goto switchD_00ea34f3_default;
      }
      if (0xf < uVar4) {
        F_00406ad0(pppppppuVar5);
      }
switchD_00ea34f3_default: ;
      bVar10 = 0xfffffffe < (uint)(*(undefined8 *)(gen_frame + 0x150));
      iVar1 = (uint)(*(undefined8 *)(gen_frame + 0x150)) + 1;
      (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x150)) + 0)) = iVar1;
      iVar2 = (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x150)) + 4)) + bVar10;
      (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x150)) + 4)) = iVar2;
      (*(undefined8 *)(gen_frame + 0x150)) = CONCAT44(iVar2,iVar1);
      *(undefined * PTR32 * PTR32 *)((int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x98)) + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x98))[0][1]) =
           (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x98))[1] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
      if (((*(uint *)(gen_frame + 0xdc)) & 1) != 0) {
        F_00406ad0(*(*(undefined4 * PTR32 *)(gen_frame + 0xac)));
      }
      puVar3 = (*(uint * PTR32 *)(gen_frame + 0xd4));
      *(*(undefined4 * PTR32 *)(gen_frame + 0xac)) = 0;
      *(*(undefined4 * PTR32 *)(gen_frame + 0xbc)) = 0;
      *(*(undefined4 * PTR32 *)(gen_frame + 0xcc)) = 0;
      *(*(undefined4 * PTR32 *)(gen_frame + 0xb0)) = 0;
      *(*(undefined4 * PTR32 *)(gen_frame + 0xc0)) = 0;
      *(*(undefined4 * PTR32 *)(gen_frame + 0xd0)) = 0;
      (*(uint *)(gen_frame + 0xdc)) = (*(uint *)(gen_frame + 0xdc)) & 0xfffffffe;
      (*(undefined4 *)(gen_frame + 0xd8)) = 0;
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x98))[1] = (*(undefined * PTR32 (*)[15])REFP(0x10910fc));
      if ((*(uint * PTR32 *)(gen_frame + 0xd4)) != (uint *)0x0) {
        uVar4 = *(*(uint * PTR32 *)(gen_frame + 0xd4));
        if (uVar4 != 0) {
          F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x134)),0);
          iVar1 = *(int *)(uVar4 + 4);
          if ((iVar1 != 0) && (iVar1 != -1)) {
            *(int *)(uVar4 + 4) = iVar1 + -1;
          }
          iVar1 = *(int *)(uVar4 + 4);
          F_00c45be8(&(*(undefined4 *)(gen_frame + 0x134)));
          puVar8 = ((undefined4 *)GEN_TOP((~-(uint)(iVar1 != 0) & uVar4)));
          if (puVar8 != (undefined4 *)0x0) {
            ((code *)*(gen_code32 *)*puVar8)(puVar8,1);
          }
        }
        F_00406ad0(puVar3);
      }
      F_00c465bd(((undefined1 *)(gen_frame + 0xa0)));
      *(undefined * PTR32 * PTR32 *)((int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x98)) + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x98))[0][1]) =
           (*(undefined * PTR32 (*)[1])REFP(0x109105c));
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0xe8))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
      F_00c46453((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0xe8)));
      *(undefined * PTR32 * PTR32 *)((int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0][1]) =
           (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[1] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
      if (((*(uint *)(gen_frame + 0x44)) & 1) != 0) {
        F_00406ad0(*(*(undefined4 * PTR32 *)(gen_frame + 0x14)));
      }
      puVar3 = (*(uint * PTR32 *)(gen_frame + 0x3c));
      *(*(undefined4 * PTR32 *)(gen_frame + 0x14)) = 0;
      *(*(undefined4 * PTR32 *)(gen_frame + 0x24)) = 0;
      *(*(undefined4 * PTR32 *)(gen_frame + 0x34)) = 0;
      *(*(undefined4 * PTR32 *)(gen_frame + 0x18)) = 0;
      *(*(undefined4 * PTR32 *)(gen_frame + 0x28)) = 0;
      *(*(undefined4 * PTR32 *)(gen_frame + 0x38)) = 0;
      (*(uint *)(gen_frame + 0x44)) = (*(uint *)(gen_frame + 0x44)) & 0xfffffffe;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[1] = (*(undefined * PTR32 (*)[15])REFP(0x10910fc));
      if ((*(uint * PTR32 *)(gen_frame + 0x3c)) != (uint *)0x0) {
        uVar4 = *(*(uint * PTR32 *)(gen_frame + 0x3c));
        if (uVar4 != 0) {
          F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x138)),0);
          iVar1 = *(int *)(uVar4 + 4);
          if ((iVar1 != 0) && (iVar1 != -1)) {
            *(int *)(uVar4 + 4) = iVar1 + -1;
          }
          iVar1 = *(int *)(uVar4 + 4);
          F_00c45be8(&(*(undefined4 *)(gen_frame + 0x138)));
          puVar8 = ((undefined4 *)GEN_TOP((~-(uint)(iVar1 != 0) & uVar4)));
          if (puVar8 != (undefined4 *)0x0) {
            ((code *)*(gen_code32 *)*puVar8)(puVar8,1);
          }
        }
        F_00406ad0(puVar3);
      }
      F_00c465bd(((undefined1 *)(gen_frame + 0x8)));
      *(undefined * PTR32 * PTR32 *)((int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0][1]) =
           (*(undefined * PTR32 (*)[1])REFP(0x109105c));
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x50))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
      F_00c46453((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x50)));
      piVar7 = (*(int * PTR32 *)(gen_frame + 0x13c)) + 6;
      (*(int * PTR32 *)(gen_frame + 0x13c)) = piVar7;
      piVar9 = piVar7;
    } while (piVar7 != *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x130)) + 0x10) + 4))));
  }
  F_00c47745((*(uint *)(gen_frame + 0x468)) ^ (uint)(uint)(gen_frame + 0x46c));
  return (uint)piVar7;
}

/* ref: FUN_00ea3b60 */
uint F_00ea3b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xea3b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x190];
  int iVar1;
  ushort * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * pppppppuVar2;
  undefined4 * puVar3;
  int * this;
  int * piVar4;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * pppppppuVar5;
  uint uVar6;
  ushort * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * pppppppuVar7;
  ulonglong uVar8;
  
  pppppppuVar7 = ((ushort * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x16c))[0];
  (*(uint *)(gen_frame + 0x188)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18c);
  (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x148))))) = (int)param_2;
  (*(ushort * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x14c)) = (ushort * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)0x0;
  (*(uint *)(gen_frame + 0x180)) = 7;
  (*(int *)(gen_frame + 0x17c)) = 0;
  (*(undefined2 *)((char *)&((ushort * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x16c))[0] + 0)) = 0;
  ((ushort * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x16c))[0] = (ushort * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)((uint)pppppppuVar7 & 0xffff0000);
  F_0042eae0(param_1,((ushort * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x16c)));
  if ((*(uint *)&REFG(undefined, 0x15e3a28) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15e3a28) = *(uint *)&REFG(undefined, 0x15e3a28) | 1;
    (*(undefined2 *)((char *)&REFG(undefined4, 0x15e3a0c) + 0)) = 0;
    REFG(undefined4, 0x15e3a20) = 7;
    *(undefined4 *)&REFG(undefined, 0x15e3a1c) = 0;
    F_00ebe820(&REFG(undefined4, 0x15e3a0c),&REFG(undefined, 0x115e91c),2);
    F_00c47de6(((code *)REFP(0x107d530)));
  }
  if ((*(uint *)&REFG(undefined, 0x15e3a28) & 2) == 0) {
    *(uint *)&REFG(undefined, 0x15e3a28) = *(uint *)&REFG(undefined, 0x15e3a28) | 2;
    REFG(undefined4, 0x15e3a04) = 7;
    *(undefined4 *)&REFG(undefined, 0x15e3a00) = 0;
    (*(undefined2 *)((char *)&REFG(undefined4, 0x15e39f0) + 0)) = 0;
    F_00ebe820(&REFG(undefined4, 0x15e39f0),(*(undefined * PTR32 (*)[1])REFP(0x115e914)),2);
    F_00c47de6(((code *)REFP(0x107d4f0)));
  }
  if ((*(uint *)&REFG(undefined, 0x15e3a28) & 4) == 0) {
    *(uint *)&REFG(undefined, 0x15e3a28) = *(uint *)&REFG(undefined, 0x15e3a28) | 4;
    REFG(undefined4, 0x15e39e8) = 7;
    *(undefined4 *)&REFG(undefined, 0x15e39e4) = 0;
    (*(undefined2 *)((char *)&REFG(undefined4, 0x15e39d4) + 0)) = 0;
    F_00ebe820(&REFG(undefined4, 0x15e39d4),&REFG(undefined, 0x115e90c),2);
    F_00c47de6(((code *)REFP(0x107d4b0)));
  }
  if ((*(uint *)&REFG(undefined, 0x15e3a28) & 8) == 0) {
    *(uint *)&REFG(undefined, 0x15e3a28) = *(uint *)&REFG(undefined, 0x15e3a28) | 8;
    (*(undefined2 *)((char *)&REFG(undefined4, 0x15e39b8) + 0)) = 0;
    REFG(undefined4, 0x15e39cc) = 7;
    *(undefined4 *)&REFG(undefined, 0x15e39c8) = 0;
    F_00ebe820(&REFG(undefined4, 0x15e39b8),(*(undefined * PTR32 (*)[1])REFP(0x115e904)),2);
    F_00c47de6(((code *)REFP(0x107d470)));
  }
  if ((*(uint *)&REFG(undefined, 0x15e3a28) & 0x10) == 0) {
    *(uint *)&REFG(undefined, 0x15e3a28) = *(uint *)&REFG(undefined, 0x15e3a28) | 0x10;
    REFG(undefined4, 0x15e39b0) = 7;
    *(undefined4 *)&REFG(undefined, 0x15e39ac) = 0;
    (*(undefined2 *)((char *)&REFG(undefined4, 0x15e399c) + 0)) = 0;
    F_00ebe820(&REFG(undefined4, 0x15e399c),(*(undefined * PTR32 (*)[1])REFP(0x115e8fc)),2);
    F_00c47de6(((code *)REFP(0x107d430)));
  }
  if ((*(uint *)&REFG(undefined, 0x15e3a28) & 0x20) == 0) {
    *(uint *)&REFG(undefined, 0x15e3a28) = *(uint *)&REFG(undefined, 0x15e3a28) | 0x20;
    REFG(undefined4, 0x15e3994) = 7;
    *(undefined4 *)&REFG(undefined, 0x15e3990) = 0;
    (*(undefined2 *)((char *)&REFG(undefined4, 0x15e3980) + 0)) = 0;
    F_00ebe820(&REFG(undefined4, 0x15e3980),(*(undefined * PTR32 (*)[1])REFP(0x115e8f4)),2);
    F_00c47de6(((code *)REFP(0x107d3f0)));
  }
  if ((*(uint *)&REFG(undefined, 0x15e3a28) & 0x40) == 0) {
    *(uint *)&REFG(undefined, 0x15e3a28) = *(uint *)&REFG(undefined, 0x15e3a28) | 0x40;
    (*(undefined2 *)((char *)&REFG(undefined4, 0x15e3964) + 0)) = 0;
    REFG(undefined4, 0x15e3978) = 7;
    *(undefined4 *)&REFG(undefined, 0x15e3974) = 0;
    F_00ebe820(&REFG(undefined4, 0x15e3964),(*(undefined * PTR32 (*)[1])REFP(0x115e8ec)),2);
    F_00c47de6(((code *)REFP(0x107d3b0)));
  }
  if ((*(uint *)&REFG(undefined, 0x15e3a28) & 0x80) == 0) {
    *(uint *)&REFG(undefined, 0x15e3a28) = *(uint *)&REFG(undefined, 0x15e3a28) | 0x80;
    REFG(undefined4, 0x15e395c) = 7;
    *(undefined4 *)&REFG(undefined, 0x15e3958) = 0;
    (*(undefined2 *)((char *)&REFG(undefined4, 0x15e3948) + 0)) = 0;
    F_00ebe820(&REFG(undefined4, 0x15e3948),(*(undefined * PTR32 (*)[1])REFP(0x115e8e4)),2);
    F_00c47de6(((code *)REFP(0x107d370)));
  }
  if ((*(uint *)&REFG(undefined, 0x15e3a28) & 0x100) == 0) {
    *(uint *)&REFG(undefined, 0x15e3a28) = *(uint *)&REFG(undefined, 0x15e3a28) | 0x100;
    REFG(undefined4, 0x15e3940) = 7;
    *(undefined4 *)&REFG(undefined, 0x15e393c) = 0;
    (*(undefined2 *)((char *)&REFG(undefined4, 0x15e392c) + 0)) = 0;
    F_00ebe820(&REFG(undefined4, 0x15e392c),(*(undefined * PTR32 (*)[1])REFP(0x115e8dc)),2);
    F_00c47de6(((code *)REFP(0x107d330)));
  }
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0xb0))[0] = (undefined * PTR32 *)&REFG(undefined, 0x115d664);
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x100))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1159a60));
  F_00ebd750(((undefined * PTR32 * PTR32 *)(gen_frame + 0x100)),((undefined * PTR32 * PTR32 *)(gen_frame + 0xb0)) + 1,0);
  *(undefined * PTR32 * PTR32 *)((int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xb0)) + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xb0))[0][1]) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d0ec));
  F_00eb2150(((undefined * PTR32 * PTR32 *)(gen_frame + 0xb0)) + 1);
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0xb0))[1] = (*(undefined * PTR32 (*)[15])REFP(0x115cfd4));
  (*(undefined4 *)(gen_frame + 0xf0)) = 0;
  (*(uint *)(gen_frame + 0xf4)) = 4;
  pppppppuVar7 = ((ushort * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x16c))[0];
  if ((*(uint *)(gen_frame + 0x180)) < 8) {
    pppppppuVar7 = (ushort * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)((ushort * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x16c));
  }
LAB_00ea3e75: ;
  (*(ushort * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x14c)) = pppppppuVar7;
  pppppppuVar2 = ((ushort * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x16c))[0];
  if ((*(uint *)(gen_frame + 0x180)) < 8) {
    pppppppuVar2 = (ushort * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)((ushort * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x16c));
  }
  if (pppppppuVar7 == (ushort * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)((int)pppppppuVar2 + (*(int *)(gen_frame + 0x17c)) * 2)) {
    F_00ed0700(((undefined * PTR32 * PTR32 *)(gen_frame + 0xb0)) + 1,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x150)));
    pppppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x150))[0];
    if ((*(uint *)(gen_frame + 0x164)) < 8) {
      pppppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x150));
    }
    F_0042cef0((undefined *)(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x148))))),pppppppuVar5);
    if (7 < (*(uint *)(gen_frame + 0x164))) {
      F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x150))[0]);
    }
    *(undefined * PTR32 * PTR32 *)((int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xb0)) + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xb0))[0][1]) =
         (*(undefined * PTR32 (*)[1])REFP(0x115d0ec));
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0xb0))[1] = (*(undefined * PTR32 (*)[15])REFP(0x115cfd4));
    if (((*(uint *)(gen_frame + 0xf4)) & 1) != 0) {
      F_00406ad0(*(*(undefined4 * PTR32 *)(gen_frame + 0xc4)));
    }
    *(*(undefined4 * PTR32 *)(gen_frame + 0xc4)) = 0;
    *(*(undefined4 * PTR32 *)(gen_frame + 0xd4)) = 0;
    *(*(undefined4 * PTR32 *)(gen_frame + 0xe4)) = 0;
    *(*(undefined4 * PTR32 *)(gen_frame + 0xc8)) = 0;
    *(*(undefined4 * PTR32 *)(gen_frame + 0xd8)) = 0;
    *(*(undefined4 * PTR32 *)(gen_frame + 0xe8)) = 0;
    (*(uint *)(gen_frame + 0xf4)) = (*(uint *)(gen_frame + 0xf4)) & 0xfffffffe;
    (*(undefined4 *)(gen_frame + 0xf0)) = 0;
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0xb0))[1] = (*(undefined * PTR32 (*)[15])REFP(0x115caf4));
    if ((*(uint * PTR32 *)(gen_frame + 0xec)) != (uint *)0x0) {
      uVar6 = *(*(uint * PTR32 *)(gen_frame + 0xec));
      if (uVar6 != 0) {
        F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x148)),0);
        iVar1 = *(int *)(uVar6 + 4);
        if ((iVar1 != 0) && (iVar1 != -1)) {
          *(int *)(uVar6 + 4) = iVar1 + -1;
        }
        iVar1 = *(int *)(uVar6 + 4);
        F_00c45be8(&(*(undefined4 *)(gen_frame + 0x148)));
        puVar3 = ((undefined4 *)GEN_TOP((~-(uint)(iVar1 != 0) & uVar6)));
        if (puVar3 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
        }
      }
      F_00406ad0((*(uint * PTR32 *)(gen_frame + 0xec)));
    }
    F_00c465bd(((undefined1 *)(gen_frame + 0xb8)));
    *(undefined * PTR32 * PTR32 *)((int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xb0)) + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xb0))[0][1]) =
         (*(undefined * PTR32 (*)[1])REFP(0x1159a60));
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x100))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
    F_00c46453((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x100)));
    uVar6 = (*(uint *)(gen_frame + 0x180));
    if (7 < (*(uint *)(gen_frame + 0x180))) {
      uVar8 = F_00429760(((ushort * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x16c))[0],(*(uint *)(gen_frame + 0x180)) * 2 + 2,0x3d);
      uVar6 = (uint)uVar8;
    }
    F_00c47745((*(uint *)(gen_frame + 0x188)) ^ (uint)(uint)(gen_frame + 0x18c));
    return uVar6;
  }
  uVar6 = (uint)*(ushort *)pppppppuVar7;
  if (uVar6 == 0x22) {
    puVar3 = &REFG(undefined4, 0x15e3a0c);
  }
  else {
    if (uVar6 == 0x2f) {
      puVar3 = &REFG(undefined4, 0x15e39d4);
      goto LAB_00ea4055;
    }
    if (uVar6 == 0x5c) {
      puVar3 = &REFG(undefined4, 0x15e39f0);
      goto LAB_00ea4055;
    }
    if ((ushort)(*(ushort *)pppppppuVar7 - 0x20) < 0x60) {
      F_00ec3b80(((undefined * PTR32 * PTR32 *)(gen_frame + 0xb0)),uVar6);
      pppppppuVar7 = (ushort * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)((int)pppppppuVar7 + 2);
      goto LAB_00ea3e75;
    }
    switch((unsigned int)(uintptr_t)(uVar6)) {
    case 8: ;
      puVar3 = &REFG(undefined4, 0x15e39b8);
      break;
    case 9: ;
      puVar3 = &REFG(undefined4, 0x15e3948);
      break;
    case 10: ;
      puVar3 = &REFG(undefined4, 0x15e3980);
      break;
    default: ;
      if ((char)param_3 == '\0') {
        F_00ec49d0(((undefined1 *)(gen_frame + 0x8)),2,1);
        puVar3 = (undefined4 *)F_01051bd4(((undefined1 *)(gen_frame + 0xa0)),4,0);
        this = (int *)F_00ec2e60(((undefined1 *)(gen_frame + 0x8)),&REFG(undefined4, 0x15e392c));
        piVar4 = this;
        if (this != (int *)0x0) {
          piVar4 = ((int *)GEN_TOP((*(int *)(*this + 4) + (int)this)));
        }
        (*(code *)*puVar3)(piVar4,puVar3[2],puVar3[3]);
        *((undefined2 *)GEN_TOP((*(int *)(*this + 4) + 0x40 + (int)this))) = 0x30;
        *((uint *)GEN_TOP((*(int *)(*this + 4) + 0x14 + (int)this))) =
             *((uint *)GEN_TOP((*(int *)(*this + 4) + 0x14 + (int)this))) & 0xfffff9ff | 0x800;
        F_00ebebe0(this,uVar6,0);
        F_00ed0700(((undefined1 *)(gen_frame + 0xc)),((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x150)));
        F_00ec2e60(((undefined * PTR32 * PTR32 *)(gen_frame + 0xb0)),((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x150)));
        if (7 < (*(uint *)(gen_frame + 0x164))) {
          F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x150))[0]);
        }
        pppppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x150))[0];
        (*(undefined2 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x150))[0] + 0)) = 0;
        ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x150))[0] = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)((uint)pppppppuVar5 & 0xffff0000);
        (*(uint *)(gen_frame + 0x164)) = 7;
        (*(undefined4 *)(gen_frame + 0x160)) = 0;
        F_00ebbee0(((undefined1 *)(gen_frame + 0x8)));
        pppppppuVar7 = (ushort * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)((int)(*(ushort * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x14c)) + 2);
      }
      else {
        F_00ec3b80(((undefined * PTR32 * PTR32 *)(gen_frame + 0xb0)),uVar6);
        pppppppuVar7 = (ushort * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)((int)pppppppuVar7 + 2);
      }
      goto LAB_00ea3e75;
    case 0xc: ;
      puVar3 = &REFG(undefined4, 0x15e399c);
      break;
    case 0xd: ;
      puVar3 = &REFG(undefined4, 0x15e3964);
    }
  }
LAB_00ea4055: ;
  F_00ec2e60(((undefined * PTR32 * PTR32 *)(gen_frame + 0xb0)),puVar3);
  pppppppuVar7 = (ushort * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)((int)pppppppuVar7 + 2);
  goto LAB_00ea3e75;
}

/* ref: FUN_00ea41f0 */
uint F_00ea41f0(unsigned int gen_a0)
{
  GEN_ENTER(0xea41f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_004069f0(0xb8);
  if (uVar1 != 0) {
    *(uint *)((int)this + 8) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(int *)((int)this + 8);
    *((int *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(int *)((int)this + 8);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0xb4))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0xb5))) = 1;
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x115e8d8));
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00ea4260 */
uint F_00ea4260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xea4260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * pppppppuVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  (*(int *)(gen_frame + 0xa4)) = 0;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = &REFG(undefined * PTR32, 0x1157cd0);
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x5c))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  F_00483f60(((undefined * PTR32 * PTR32 *)(gen_frame + 0x5c)),((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) + 1,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0][1] + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
  F_00479880(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) + 1);
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[1] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 4;
  F_00ebef40(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),param_1);
  F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) + 1,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xfc)));
  pppppppuVar1 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xfc))[0];
  if ((*(uint *)(gen_frame + 0x110)) < 0x10) {
    pppppppuVar1 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xfc));
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0xa8)),pppppppuVar1,REFG(undefined4, 0x108cc50));
  F_00ebc440((undefined *)((int)this + 4),&(*(int *)(gen_frame + 0xa4)),((undefined1 *)(gen_frame + 0xa8)));
  uVar2 = param_2;
  if ((*(int *)(gen_frame + 0xa4)) != *(int *)((int)this + 8)) {
    uVar2 = (*(int *)(gen_frame + 0xa4)) + 0x60;
  }
  F_0042c880(((undefined1 *)(gen_frame + 0xa8)));
  if (0xf < (*(uint *)(gen_frame + 0x110))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xfc))[0]);
  }
  pppppppuVar1 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xfc))[0];
  (*(uint *)(gen_frame + 0x110)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x10c)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xfc))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xfc))[0] = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)((uint)pppppppuVar1 & 0xffffff00);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0][1] + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[1] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  F_00e3ce60(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) + 1);
  F_00479ae0(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) + 1);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0][1] + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x5c))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x5c)));
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
  return uVar2;
}

/* ref: FUN_00ea43d0 */
uint F_00ea43d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xea43d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * pppppppuVar1;
  undefined * this_00;
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  (*(undefined4 *)(gen_frame + 0xa4)) = 0;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = &REFG(undefined * PTR32, 0x1157cd0);
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x5c))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  F_00483f60(((undefined * PTR32 * PTR32 *)(gen_frame + 0x5c)),((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) + 1,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0][1] + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
  F_00479880(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) + 1);
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[1] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 4;
  F_00ebef40(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),param_1);
  F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) + 1,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xfc)));
  pppppppuVar1 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xfc))[0];
  if ((*(uint *)(gen_frame + 0x110)) < 0x10) {
    pppppppuVar1 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xfc));
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0xa8)),pppppppuVar1,REFG(undefined4, 0x108cc50));
  this_00 = (undefined *)F_00ed0400((undefined *)((int)this + 4),((undefined1 *)(gen_frame + 0xa8)));
  F_0042ccf0(this_00,param_2);
  F_0042c880(((undefined1 *)(gen_frame + 0xa8)));
  if (0xf < (*(uint *)(gen_frame + 0x110))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xfc))[0]);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP((((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0][1] + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[1] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  F_00e3ce60(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) + 1);
  F_00479ae0(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) + 1);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0][1] + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x5c))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x5c)));
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
  return extraout_EAX;
}

/* ref: FUN_00ea4540 */
uint F_00ea4540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xea4540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  int iVar1;
  int iVar2;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * pppppppuVar3;
  int * piVar4;
  undefined4 extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  (*(undefined4 *)(gen_frame + 0xa4)) = 0;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = &REFG(undefined * PTR32, 0x1157cd0);
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x5c))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  F_00483f60(((undefined * PTR32 * PTR32 *)(gen_frame + 0x5c)),((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) + 1,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0][1] + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
  F_00479880(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) + 1);
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[1] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 4;
  F_00ebef40(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),param_1);
  F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) + 1,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xfc)));
  pppppppuVar3 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xfc))[0];
  if ((*(uint *)(gen_frame + 0x110)) < 0x10) {
    pppppppuVar3 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xfc));
  }
  F_0042cc20(((undefined1 *)(gen_frame + 0xa8)),pppppppuVar3,REFG(undefined4, 0x108cc50));
  iVar1 = *(int *)((int)this + 8);
  piVar4 = (int *)F_00ebc440((undefined *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0xa4)),((undefined1 *)(gen_frame + 0xa8)));
  iVar2 = *piVar4;
  F_0042c880(((undefined1 *)(gen_frame + 0xa8)));
  if (0xf < (*(uint *)(gen_frame + 0x110))) {
    F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xfc))[0]);
  }
  pppppppuVar3 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xfc))[0];
  (*(uint *)(gen_frame + 0x110)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x10c)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xfc))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xfc))[0] = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)((uint)pppppppuVar3 & 0xffffff00);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0][1] + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[1] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  F_00e3ce60(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) + 1);
  F_00479ae0(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) + 1);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0][1] + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x5c))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x5c)));
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
  return CONCAT31((int3)((uint)extraout_EAX >> 8),iVar2 != iVar1);
}

/* ref: FUN_00ea46c0 */
uint F_00ea46c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xea46c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * this_00;
  char cVar1;
  uint uVar2;
  int3 iVar3;
  
  this_00 = (*(int * PTR32 *)&gen_args[1]);
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  cVar1 = (char)(*(int * PTR32 *)&gen_args[1]);
switchD_00ea4706_caseD_9: ;
  uVar2 = F_00ec0810((*(int * PTR32 *)&gen_args[1]));
  if (uVar2 != 0xffffffff) {
    cVar1 = (char)uVar2;
  }
  uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))) + 0xc + (int)(*(int * PTR32 *)&gen_args[1]))));
  if (((uVar2 & 1) != 0) || ((uVar2 & 6) != 0)) goto switchD_00ea4706_caseD_0;
  uVar2 = (uint)cVar1;
  if (0x7d < uVar2) goto switchD_00ea4706_caseD_1;
  iVar3 = (int3)(cVar1 >> 7);
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
switchD_00ea4706_caseD_0: ;
    return uVar2 & 0xffffff00;
  default: ;
switchD_00ea4706_caseD_1: ;
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 1, 3),cVar1)));
    F_00ebfb80(this_00,(*(int * PTR32 *)&gen_args[1]));
    uVar2 = F_00ea26e0((*(undefined * PTR32 *)&gen_args[0]),this_00);
    return uVar2;
  case 9: ;
  case 10: ;
  case 0xd: ;
  case 0x20: ;
    goto switchD_00ea4706_caseD_9;
  case 0x22: ;
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 1, 3),cVar1)));
    uVar2 = F_00ea2840((*(undefined * PTR32 *)&gen_args[0]),this_00,(*(int * PTR32 *)&gen_args[1]));
    return uVar2;
  case 0x27: ;
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 1, 3),cVar1)));
    uVar2 = F_00ea2840((*(undefined * PTR32 *)&gen_args[0]),this_00,(*(int * PTR32 *)&gen_args[1]));
    return uVar2;
  case 0x2c: ;
    *(int *)(*(undefined * PTR32 *)&gen_args[0]) = (int)(*(undefined * PTR32 *)&gen_args[0]) + 4;
    return CONCAT31((int3)((uint)((int)(*(undefined * PTR32 *)&gen_args[0]) + 4) >> 8),1);
  case 0x3a: ;
    *(int *)(*(undefined * PTR32 *)&gen_args[0]) = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc;
    return CONCAT31(iVar3,1);
  case 0x3c: ;
    uVar2 = F_00ea2840((*(undefined * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[1]),0x3e);
    return uVar2;
  case 0x5b: ;
    *(int *)(*(undefined * PTR32 *)&gen_args[0]) = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24;
    return CONCAT31(iVar3,1);
  case 0x5d: ;
    *(int *)(*(undefined * PTR32 *)&gen_args[0]) = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c;
    return CONCAT31(iVar3,1);
  case 0x7b: ;
    *(int *)(*(undefined * PTR32 *)&gen_args[0]) = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14;
    return CONCAT31(iVar3,1);
  case 0x7d: ;
    *(int *)(*(undefined * PTR32 *)&gen_args[0]) = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c;
    return CONCAT31((int3)((uint)((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c) >> 8),1);
  }
}

/* ref: FUN_00ea4d70 */
uint F_00ea4d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xea4d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  int iVar1;
  uint uVar2;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * pppppppuVar3;
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  uVar2 = *(uint *)((int)param_1 + 8);
  (*(undefined4 *)(gen_frame + 0xa4)) = 0;
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
    goto switchD_00ea4d9a_caseD_0;
  default: ;
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = &REFG(undefined * PTR32, 0x1157cd0);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x5c))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109105c));
    F_00483f60(((undefined * PTR32 * PTR32 *)(gen_frame + 0x5c)),((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) + 1,0);
    *((undefined * PTR32 * PTR32 *)GEN_TOP((((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0][1] + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))))) =
         (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
    F_00479880(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) + 1);
    iVar1 = *(int *)((int)param_1 + 8);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[1] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
    (*(undefined4 *)(gen_frame + 0x4c)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 4;
    if (iVar1 == 1) {
      F_00ebef40(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),*(undefined4 *)((int)param_1 + 0x10));
    }
    else if (iVar1 == 2) {
      F_00ebf2a0(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),*(float *)((int)param_1 + 0x10));
    }
    else if (iVar1 == 3) {
      F_00ebed90(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),(uint)*(byte *)((int)param_1 + 0x10));
    }
    F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) + 1,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xfc)));
    pppppppuVar3 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xfc))[0];
    if ((*(uint *)(gen_frame + 0x110)) < 0x10) {
      pppppppuVar3 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xfc));
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0xa8)),pppppppuVar3,REFG(undefined4, 0x108cc50));
    F_00ea43d0(param_2,0,((undefined1 *)(gen_frame + 0xa8)));
    F_0042c880(((undefined1 *)(gen_frame + 0xa8)));
    if (0xf < (*(uint *)(gen_frame + 0x110))) {
      F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xfc))[0]);
    }
    *((undefined * PTR32 * PTR32 *)GEN_TOP((((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0][1] + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))))) =
         (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[1] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
    F_00e3ce60(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) + 1);
    F_00479ae0(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) + 1);
    *((undefined * PTR32 * PTR32 *)GEN_TOP((((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0][1] + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))))) =
         (*(undefined * PTR32 (*)[1])REFP(0x109105c));
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x5c))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
    F_00c46453((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x5c)));
    uVar2 = extraout_EAX;
switchD_00ea4d9a_caseD_0: ;
    F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
    return uVar2;
  case 4: ;
    uVar2 = F_00ea43d0(param_2,0,*(undefined4 *)((int)param_1 + 0x10));
    F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
    return uVar2;
  case 5: ;
    uVar2 = F_00ea2e30(param_1,param_2);
    F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
    return uVar2;
  case 6: ;
    uVar2 = F_00ea3320(param_1,param_2);
    F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
    return uVar2;
  }
}

/* ref: FUN_00ea4f80 */
uint F_00ea4f80(void)
{
  GEN_ENTER(0xea4f80u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  uint uVar2;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * pppppuVar3;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  (*(uint *)(gen_frame + 0x108)) = uVar2;
  (*(undefined4 *)(gen_frame + 0xb0)) = 0;
  if (REFG(int, 0x15e389c) == 0) {
    ((undefined * PTR32 *)(gen_frame + 0x8))[0] = &REFG(undefined, 0x115d674);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x18))[0] = (undefined * PTR32 *)&REFG(undefined, 0x115d66c);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x68))[0] = (*(undefined * PTR32 (*)[1])REFP(0x115772c));
    (*(undefined8 *)(gen_frame + 0x10)) = 0;
    F_00483f60(((undefined * PTR32 * PTR32 *)(gen_frame + 0x68)),((undefined * PTR32 * PTR32 *)(gen_frame + 0x18)) + 2,0);
    *(undefined * PTR32 * PTR32 *)((int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x18)) + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x18))[0][1]) =
         (*(undefined * PTR32 (*)[1])REFP(0x109105c));
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)((undefined * PTR32 *)(gen_frame + 0x8)) + *(int *)(((undefined * PTR32 *)(gen_frame + 0x8))[0] + 4)))) =
         (*(undefined * PTR32 (*)[1])REFP(0x1159a68));
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)((undefined * PTR32 *)(gen_frame + 0x8)) + *(int *)(((undefined * PTR32 *)(gen_frame + 0x8))[0] + 4)))) =
         (*(undefined * PTR32 (*)[1])REFP(0x115d014));
    F_00479880(((undefined * PTR32 * PTR32 *)(gen_frame + 0x18)) + 2);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x18))[2] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
    (*(undefined4 *)(gen_frame + 0x5c)) = 0;
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x18)),REFG(undefined * PTR32, 0x1369298));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x18)),REFG(undefined * PTR32, 0x1369294));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x18)),REFG(undefined * PTR32, 0x1369290));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x18)),REFG(undefined * PTR32, 0x136928c));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x18)),REFG(undefined * PTR32, 0x1369288));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x18)),REFG(undefined * PTR32, 0x1369284));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x18)),REFG(undefined * PTR32, 0x1369280));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x18)),REFG(undefined * PTR32, 0x136927c));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x18)),REFG(undefined * PTR32, 0x1369278));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x18)),REFG(undefined * PTR32, 0x1369274));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x18)),REFG(undefined * PTR32, 0x1369270));
    F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0x18)) + 2,((uint *)(gen_frame + 0xd0)));
    uVar2 = F_00406a50((*(int *)(gen_frame + 0xe0)) + 1);
    if (0xf < (*(uint *)(gen_frame + 0xe4))) {
      F_00406ad0(((uint *)(gen_frame + 0xd0))[0]);
    }
    uVar1 = ((uint *)(gen_frame + 0xd0))[0];
    (*(uint *)(gen_frame + 0xe4)) = 0xf;
    (*(int *)(gen_frame + 0xe0)) = 0;
    (*(undefined1 *)((char *)&((uint *)(gen_frame + 0xd0))[0] + 0)) = 0;
    ((uint *)(gen_frame + 0xd0))[0] = uVar1 & 0xffffff00;
    F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0x18)) + 2,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb4)));
    pppppuVar3 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb4))[0];
    if ((*(uint *)(gen_frame + 0xc8)) < 0x10) {
      pppppuVar3 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb4));
    }
    F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0x18)) + 2,((uint *)(gen_frame + 0xec)));
    F_00c4d9ef(uVar2,(*(int *)(gen_frame + 0xfc)) + 1,pppppuVar3,0xffffffff);
    if (0xf < (*(uint *)(gen_frame + 0x100))) {
      F_00406ad0(((uint *)(gen_frame + 0xec))[0]);
    }
    uVar1 = ((uint *)(gen_frame + 0xec))[0];
    (*(uint *)(gen_frame + 0x100)) = 0xf;
    (*(int *)(gen_frame + 0xfc)) = 0;
    (*(undefined1 *)((char *)&((uint *)(gen_frame + 0xec))[0] + 0)) = 0;
    ((uint *)(gen_frame + 0xec))[0] = uVar1 & 0xffffff00;
    if (0xf < (*(uint *)(gen_frame + 0xc8))) {
      F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb4))[0]);
    }
    if (REFG(undefined4, 0x15e3bc8) != (undefined *)0x0) {
      F_00fb9cd0(REFG(undefined4, 0x15e3bc8),uVar2,&REFG(int, 0x15e389c));
    }
    F_00406b30(uVar2);
    uVar2 = F_00eb6ea0(((undefined * PTR32 *)(gen_frame + 0x8)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar2;
}

/* ref: FUN_00ea5200 */
uint F_00ea5200(void)
{
  GEN_ENTER(0xea5200u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  uint uVar2;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * pppppuVar3;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  (*(uint *)(gen_frame + 0x108)) = uVar2;
  ((byte *)(gen_frame + 0x8))[0] = 0;
  ((byte *)(gen_frame + 0x8))[1] = 0;
  ((byte *)(gen_frame + 0x8))[2] = 0;
  ((byte *)(gen_frame + 0x8))[3] = 0;
  if (REFG(int, 0x15e38a0) == 0) {
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) = &REFG(undefined, 0x115d674);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c))[0] = (undefined * PTR32 *)&REFG(undefined, 0x115d66c);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x6c))[0] = (*(undefined * PTR32 (*)[1])REFP(0x115772c));
    ((byte *)(gen_frame + 0x8))[0xc] = 0;
    ((byte *)(gen_frame + 0x8))[0xd] = 0;
    ((byte *)(gen_frame + 0x8))[0xe] = 0;
    ((byte *)(gen_frame + 0x8))[0xf] = 0;
    ((byte *)(gen_frame + 0x8))[0x10] = 0;
    ((byte *)(gen_frame + 0x8))[0x11] = 0;
    ((byte *)(gen_frame + 0x8))[0x12] = 0;
    ((byte *)(gen_frame + 0x8))[0x13] = 0;
    F_00483f60(((undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)),((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)) + 2,0);
    *(undefined * PTR32 * PTR32 *)((int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)) + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c))[0][1]) =
         (*(undefined * PTR32 (*)[1])REFP(0x109105c));
    *((undefined * PTR32 * PTR32 *)GEN_TOP((((byte *)(gen_frame + 0x8)) + *((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) + 4))) + 4))) =
         (*(undefined * PTR32 (*)[1])REFP(0x1159a68));
    *((undefined * PTR32 * PTR32 *)GEN_TOP((((byte *)(gen_frame + 0x8)) + *((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) + 4))) + 4))) =
         (*(undefined * PTR32 (*)[1])REFP(0x115d014));
    F_00479880(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)) + 2);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c))[2] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    (*(undefined4 *)(gen_frame + 0x64)) = 0;
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369378));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369374));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369370));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x136936c));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369368));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369364));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369360));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x136935c));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369358));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369354));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369350));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x136934c));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369348));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369344));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369340));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x136933c));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369338));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369334));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369330));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x136932c));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369328));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369324));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369320));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x136931c));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369318));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369314));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369310));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x136930c));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369308));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369304));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369300));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13692fc));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13692f8));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13692f4));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13692f0));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13692ec));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13692e8));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13692e4));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13692e0));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13692dc));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13692d8));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13692d4));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13692d0));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13692cc));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13692c8));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13692c4));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13692c0));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13692bc));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13692b8));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13692b4));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13692b0));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13692ac));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13692a8));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13692a4));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13692a0));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x136929c));
    F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)) + 2,((uint *)(gen_frame + 0xd0)));
    uVar2 = F_00406a50((*(int *)(gen_frame + 0xe0)) + 1);
    if (0xf < (*(uint *)(gen_frame + 0xe4))) {
      F_00406ad0(((uint *)(gen_frame + 0xd0))[0]);
    }
    uVar1 = ((uint *)(gen_frame + 0xd0))[0];
    (*(uint *)(gen_frame + 0xe4)) = 0xf;
    (*(int *)(gen_frame + 0xe0)) = 0;
    (*(undefined1 *)((char *)&((uint *)(gen_frame + 0xd0))[0] + 0)) = 0;
    ((uint *)(gen_frame + 0xd0))[0] = uVar1 & 0xffffff00;
    F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)) + 2,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb4)));
    pppppuVar3 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb4))[0];
    if ((*(uint *)(gen_frame + 0xc8)) < 0x10) {
      pppppuVar3 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb4));
    }
    F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)) + 2,((uint *)(gen_frame + 0xec)));
    F_00c4d9ef(uVar2,(*(int *)(gen_frame + 0xfc)) + 1,pppppuVar3,0xffffffff);
    if (0xf < (*(uint *)(gen_frame + 0x100))) {
      F_00406ad0(((uint *)(gen_frame + 0xec))[0]);
    }
    uVar1 = ((uint *)(gen_frame + 0xec))[0];
    (*(uint *)(gen_frame + 0x100)) = 0xf;
    (*(int *)(gen_frame + 0xfc)) = 0;
    (*(undefined1 *)((char *)&((uint *)(gen_frame + 0xec))[0] + 0)) = 0;
    ((uint *)(gen_frame + 0xec))[0] = uVar1 & 0xffffff00;
    if (0xf < (*(uint *)(gen_frame + 0xc8))) {
      F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb4))[0]);
    }
    if (REFG(undefined4, 0x15e3bc8) != (undefined *)0x0) {
      F_00fb9cd0(REFG(undefined4, 0x15e3bc8),uVar2,&REFG(int, 0x15e38a0));
    }
    F_00406b30(uVar2);
    uVar2 = F_00eb6ea0(((byte *)(gen_frame + 0x8)) + 4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar2;
}

/* ref: FUN_00ea57e0 */
uint F_00ea57e0(void)
{
  GEN_ENTER(0xea57e0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  uint uVar2;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * pppppuVar3;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  (*(uint *)(gen_frame + 0x108)) = uVar2;
  ((byte *)(gen_frame + 0x8))[0] = 0;
  ((byte *)(gen_frame + 0x8))[1] = 0;
  ((byte *)(gen_frame + 0x8))[2] = 0;
  ((byte *)(gen_frame + 0x8))[3] = 0;
  if (REFG(int, 0x15e38a8) == 0) {
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) = &REFG(undefined, 0x115d674);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c))[0] = (undefined * PTR32 *)&REFG(undefined, 0x115d66c);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x6c))[0] = (*(undefined * PTR32 (*)[1])REFP(0x115772c));
    ((byte *)(gen_frame + 0x8))[0xc] = 0;
    ((byte *)(gen_frame + 0x8))[0xd] = 0;
    ((byte *)(gen_frame + 0x8))[0xe] = 0;
    ((byte *)(gen_frame + 0x8))[0xf] = 0;
    ((byte *)(gen_frame + 0x8))[0x10] = 0;
    ((byte *)(gen_frame + 0x8))[0x11] = 0;
    ((byte *)(gen_frame + 0x8))[0x12] = 0;
    ((byte *)(gen_frame + 0x8))[0x13] = 0;
    F_00483f60(((undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)),((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)) + 2,0);
    *(undefined * PTR32 * PTR32 *)((int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)) + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c))[0][1]) =
         (*(undefined * PTR32 (*)[1])REFP(0x109105c));
    *((undefined * PTR32 * PTR32 *)GEN_TOP((((byte *)(gen_frame + 0x8)) + *((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) + 4))) + 4))) =
         (*(undefined * PTR32 (*)[1])REFP(0x1159a68));
    *((undefined * PTR32 * PTR32 *)GEN_TOP((((byte *)(gen_frame + 0x8)) + *((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) + 4))) + 4))) =
         (*(undefined * PTR32 (*)[1])REFP(0x115d014));
    F_00479880(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)) + 2);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c))[2] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    (*(undefined4 *)(gen_frame + 0x64)) = 0;
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13693f8));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13693f4));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13693f0));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13693ec));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13693e8));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13693e4));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13693e0));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13693dc));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13693d8));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13693d4));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13693d0));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13693cc));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13693c8));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13693c4));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13693c0));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13693bc));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13693b8));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13693b4));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13693b0));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13693ac));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13693a8));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13693a4));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13693a0));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x136939c));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369398));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369394));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369390));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x136938c));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369388));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369384));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369380));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x136937c));
    F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)) + 2,((uint *)(gen_frame + 0xd0)));
    uVar2 = F_00406a50((*(int *)(gen_frame + 0xe0)) + 1);
    if (0xf < (*(uint *)(gen_frame + 0xe4))) {
      F_00406ad0(((uint *)(gen_frame + 0xd0))[0]);
    }
    uVar1 = ((uint *)(gen_frame + 0xd0))[0];
    (*(uint *)(gen_frame + 0xe4)) = 0xf;
    (*(int *)(gen_frame + 0xe0)) = 0;
    (*(undefined1 *)((char *)&((uint *)(gen_frame + 0xd0))[0] + 0)) = 0;
    ((uint *)(gen_frame + 0xd0))[0] = uVar1 & 0xffffff00;
    F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)) + 2,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb4)));
    pppppuVar3 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb4))[0];
    if ((*(uint *)(gen_frame + 0xc8)) < 0x10) {
      pppppuVar3 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb4));
    }
    F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)) + 2,((uint *)(gen_frame + 0xec)));
    F_00c4d9ef(uVar2,(*(int *)(gen_frame + 0xfc)) + 1,pppppuVar3,0xffffffff);
    if (0xf < (*(uint *)(gen_frame + 0x100))) {
      F_00406ad0(((uint *)(gen_frame + 0xec))[0]);
    }
    uVar1 = ((uint *)(gen_frame + 0xec))[0];
    (*(uint *)(gen_frame + 0x100)) = 0xf;
    (*(int *)(gen_frame + 0xfc)) = 0;
    (*(undefined1 *)((char *)&((uint *)(gen_frame + 0xec))[0] + 0)) = 0;
    ((uint *)(gen_frame + 0xec))[0] = uVar1 & 0xffffff00;
    if (0xf < (*(uint *)(gen_frame + 0xc8))) {
      F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb4))[0]);
    }
    if (REFG(undefined4, 0x15e3bc8) != (undefined *)0x0) {
      F_00fb9cd0(REFG(undefined4, 0x15e3bc8),uVar2,&REFG(int, 0x15e38a8));
    }
    F_00406b30(uVar2);
    uVar2 = F_00eb6ea0(((byte *)(gen_frame + 0x8)) + 4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar2;
}

/* ref: FUN_00ea5bf0 */
uint F_00ea5bf0(void)
{
  GEN_ENTER(0xea5bf0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  uint uVar2;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * pppppuVar3;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  (*(uint *)(gen_frame + 0x108)) = uVar2;
  (*(undefined4 *)(gen_frame + 0xb0)) = 0;
  if (REFG(int, 0x15e38ac) == 0) {
    ((undefined * PTR32 *)(gen_frame + 0x8))[0] = &REFG(undefined, 0x115d674);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x18))[0] = (undefined * PTR32 *)&REFG(undefined, 0x115d66c);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x68))[0] = (*(undefined * PTR32 (*)[1])REFP(0x115772c));
    (*(undefined8 *)(gen_frame + 0x10)) = 0;
    F_00483f60(((undefined * PTR32 * PTR32 *)(gen_frame + 0x68)),((undefined * PTR32 * PTR32 *)(gen_frame + 0x18)) + 2,0);
    *(undefined * PTR32 * PTR32 *)((int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x18)) + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x18))[0][1]) =
         (*(undefined * PTR32 (*)[1])REFP(0x109105c));
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)((undefined * PTR32 *)(gen_frame + 0x8)) + *(int *)(((undefined * PTR32 *)(gen_frame + 0x8))[0] + 4)))) =
         (*(undefined * PTR32 (*)[1])REFP(0x1159a68));
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)((undefined * PTR32 *)(gen_frame + 0x8)) + *(int *)(((undefined * PTR32 *)(gen_frame + 0x8))[0] + 4)))) =
         (*(undefined * PTR32 (*)[1])REFP(0x115d014));
    F_00479880(((undefined * PTR32 * PTR32 *)(gen_frame + 0x18)) + 2);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x18))[2] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
    (*(undefined4 *)(gen_frame + 0x5c)) = 0;
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x18)),REFG(undefined * PTR32, 0x1369404));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x18)),REFG(undefined * PTR32, 0x1369400));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x18)),REFG(undefined * PTR32, 0x13693fc));
    F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0x18)) + 2,((uint *)(gen_frame + 0xd0)));
    uVar2 = F_00406a50((*(int *)(gen_frame + 0xe0)) + 1);
    if (0xf < (*(uint *)(gen_frame + 0xe4))) {
      F_00406ad0(((uint *)(gen_frame + 0xd0))[0]);
    }
    uVar1 = ((uint *)(gen_frame + 0xd0))[0];
    (*(uint *)(gen_frame + 0xe4)) = 0xf;
    (*(int *)(gen_frame + 0xe0)) = 0;
    (*(undefined1 *)((char *)&((uint *)(gen_frame + 0xd0))[0] + 0)) = 0;
    ((uint *)(gen_frame + 0xd0))[0] = uVar1 & 0xffffff00;
    F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0x18)) + 2,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb4)));
    pppppuVar3 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb4))[0];
    if ((*(uint *)(gen_frame + 0xc8)) < 0x10) {
      pppppuVar3 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb4));
    }
    F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0x18)) + 2,((uint *)(gen_frame + 0xec)));
    F_00c4d9ef(uVar2,(*(int *)(gen_frame + 0xfc)) + 1,pppppuVar3,0xffffffff);
    if (0xf < (*(uint *)(gen_frame + 0x100))) {
      F_00406ad0(((uint *)(gen_frame + 0xec))[0]);
    }
    uVar1 = ((uint *)(gen_frame + 0xec))[0];
    (*(uint *)(gen_frame + 0x100)) = 0xf;
    (*(int *)(gen_frame + 0xfc)) = 0;
    (*(undefined1 *)((char *)&((uint *)(gen_frame + 0xec))[0] + 0)) = 0;
    ((uint *)(gen_frame + 0xec))[0] = uVar1 & 0xffffff00;
    if (0xf < (*(uint *)(gen_frame + 0xc8))) {
      F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb4))[0]);
    }
    if (REFG(undefined4, 0x15e3bc8) != (undefined *)0x0) {
      F_00fb9cd0(REFG(undefined4, 0x15e3bc8),uVar2,&REFG(int, 0x15e38ac));
    }
    F_00406b30(uVar2);
    uVar2 = F_00eb6ea0(((undefined * PTR32 *)(gen_frame + 0x8)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar2;
}

/* ref: FUN_00ea5de0 */
uint F_00ea5de0(void)
{
  GEN_ENTER(0xea5de0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  uint uVar2;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * pppppuVar3;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  (*(uint *)(gen_frame + 0x108)) = uVar2;
  ((byte *)(gen_frame + 0x8))[0] = 0;
  ((byte *)(gen_frame + 0x8))[1] = 0;
  ((byte *)(gen_frame + 0x8))[2] = 0;
  ((byte *)(gen_frame + 0x8))[3] = 0;
  if (REFG(int, 0x15e38b4) == 0) {
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) = &REFG(undefined, 0x115d674);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c))[0] = (undefined * PTR32 *)&REFG(undefined, 0x115d66c);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x6c))[0] = (*(undefined * PTR32 (*)[1])REFP(0x115772c));
    ((byte *)(gen_frame + 0x8))[0xc] = 0;
    ((byte *)(gen_frame + 0x8))[0xd] = 0;
    ((byte *)(gen_frame + 0x8))[0xe] = 0;
    ((byte *)(gen_frame + 0x8))[0xf] = 0;
    ((byte *)(gen_frame + 0x8))[0x10] = 0;
    ((byte *)(gen_frame + 0x8))[0x11] = 0;
    ((byte *)(gen_frame + 0x8))[0x12] = 0;
    ((byte *)(gen_frame + 0x8))[0x13] = 0;
    F_00483f60(((undefined * PTR32 * PTR32 *)(gen_frame + 0x6c)),((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)) + 2,0);
    *(undefined * PTR32 * PTR32 *)((int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)) + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c))[0][1]) =
         (*(undefined * PTR32 (*)[1])REFP(0x109105c));
    *((undefined * PTR32 * PTR32 *)GEN_TOP((((byte *)(gen_frame + 0x8)) + *((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) + 4))) + 4))) =
         (*(undefined * PTR32 (*)[1])REFP(0x1159a68));
    *((undefined * PTR32 * PTR32 *)GEN_TOP((((byte *)(gen_frame + 0x8)) + *((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) + 4))) + 4))) =
         (*(undefined * PTR32 (*)[1])REFP(0x115d014));
    F_00479880(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)) + 2);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c))[2] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    (*(undefined4 *)(gen_frame + 0x64)) = 0;
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369518));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369514));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369510));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x136950c));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369508));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369504));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369500));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13694fc));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13694f8));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13694f4));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13694f0));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13694ec));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13694e8));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13694e4));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13694e0));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13694dc));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13694d8));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13694d4));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13694d0));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13694cc));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13694c8));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13694c4));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13694c0));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13694bc));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13694b8));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13694b4));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13694b0));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13694ac));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13694a8));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13694a4));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x13694a0));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x136949c));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369498));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369494));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369490));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x136948c));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369488));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369484));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369480));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x136947c));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369478));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369474));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369470));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x136946c));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369468));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369464));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369460));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x136945c));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369458));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369454));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369450));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x136944c));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369448));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369444));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369440));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x136943c));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369438));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369434));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369430));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x136942c));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369428));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369424));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369420));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x136941c));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369418));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369414));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369410));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x136940c));
    F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),REFG(undefined * PTR32, 0x1369408));
    F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)) + 2,((uint *)(gen_frame + 0xd0)));
    uVar2 = F_00406a50((*(int *)(gen_frame + 0xe0)) + 1);
    if (0xf < (*(uint *)(gen_frame + 0xe4))) {
      F_00406ad0(((uint *)(gen_frame + 0xd0))[0]);
    }
    uVar1 = ((uint *)(gen_frame + 0xd0))[0];
    (*(uint *)(gen_frame + 0xe4)) = 0xf;
    (*(int *)(gen_frame + 0xe0)) = 0;
    (*(undefined1 *)((char *)&((uint *)(gen_frame + 0xd0))[0] + 0)) = 0;
    ((uint *)(gen_frame + 0xd0))[0] = uVar1 & 0xffffff00;
    F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)) + 2,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb4)));
    pppppuVar3 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb4))[0];
    if ((*(uint *)(gen_frame + 0xc8)) < 0x10) {
      pppppuVar3 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb4));
    }
    F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)) + 2,((uint *)(gen_frame + 0xec)));
    F_00c4d9ef(uVar2,(*(int *)(gen_frame + 0xfc)) + 1,pppppuVar3,0xffffffff);
    if (0xf < (*(uint *)(gen_frame + 0x100))) {
      F_00406ad0(((uint *)(gen_frame + 0xec))[0]);
    }
    uVar1 = ((uint *)(gen_frame + 0xec))[0];
    (*(uint *)(gen_frame + 0x100)) = 0xf;
    (*(int *)(gen_frame + 0xfc)) = 0;
    (*(undefined1 *)((char *)&((uint *)(gen_frame + 0xec))[0] + 0)) = 0;
    ((uint *)(gen_frame + 0xec))[0] = uVar1 & 0xffffff00;
    if (0xf < (*(uint *)(gen_frame + 0xc8))) {
      F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xb4))[0]);
    }
    if (REFG(undefined4, 0x15e3bc8) != (undefined *)0x0) {
      F_00fb9cd0(REFG(undefined4, 0x15e3bc8),uVar2,&REFG(int, 0x15e38b4));
    }
    F_00406b30(uVar2);
    uVar2 = F_00eb6ea0(((byte *)(gen_frame + 0x8)) + 4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar2;
}

/* ref: FUN_00ea6520 */
uint F_00ea6520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xea6520u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * piVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(uint *)(gen_frame + 0x68)) = uVar2;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(param_2 + 8))) {
  case 0: ;
    F_00a17dc0(param_1,&REFG(undefined, 0x114c8d4));
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return (uint)param_1;
  case 1: ;
    F_00ebf0f0(param_1,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return (uint)param_1;
  case 2: ;
    F_00ebf2a0(param_1,*(float *)(param_2 + 0x10));
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return (uint)param_1;
  case 3: ;
    if (*(char *)(param_2 + 0x10) == '\0') {
      F_00a17dc0(param_1,"false");
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return (uint)param_1;
    }
    F_00a17dc0(param_1,&REFG(undefined1, 0x113bf28));
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return (uint)param_1;
  case 4: ;
    F_0042b630(((undefined1 *)(gen_frame + 0x14)));
    F_00ea3b60(*(undefined4 *)(param_2 + 0x10),((undefined1 *)(gen_frame + 0x14)),param_3);
    F_00ec3cc0(param_1,0x22);
    uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x14)));
    F_00a17dc0(param_1,uVar2);
    F_00ec3cc0(param_1,0x22);
    F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return (uint)param_1;
  case 5: ;
    F_00ec3cc0(param_1,0x7b);
    piVar4 = *((int * PTR32 *)GEN_TOP((*(int *)(param_2 + 0x10) + 4)));
    piVar1 = (int *)*piVar4;
    piVar3 = ((int *)GEN_TOP((*(int *)(param_2 + 0x10) + 4)));
    (*(int *)(gen_frame + 0x0)) = (int)piVar1;
    if (piVar1 != piVar4) {
      while( true ) {
        iVar6 = (*(int *)(gen_frame + 0x0));
        if ((*(int *)(gen_frame + 0x0)) != *(int *)*piVar3) {
          F_00ec3cc0(param_1,0x2c);
        }
        F_0042b630(((undefined1 *)(gen_frame + 0x14)));
        F_00ea3b60(iVar6 + 0x10,((undefined1 *)(gen_frame + 0x14)),param_3);
        F_00ec3cc0(param_1,0x22);
        uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x14)));
        F_00a17dc0(param_1,uVar2);
        F_00ec3cc0(param_1,0x22);
        F_00ec3cc0(param_1,0x3a);
        F_00ea6520(param_1,iVar6 + 0x68,param_3);
        if ((*((byte *)GEN_TOP((*(int *)(*param_1 + 4) + 0xc + (int)param_1))) & 6) != 0) break;
        F_0042c880(((undefined1 *)(gen_frame + 0x14)));
        F_00eacb60(&(*(int *)(gen_frame + 0x0)));
        piVar3 = ((int *)GEN_TOP((*(int *)(param_2 + 0x10) + 4)));
        if ((*(int *)(gen_frame + 0x0)) == *piVar3) {
          F_00ec3cc0(param_1,0x7d);
          F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
          return (uint)param_1;
        }
      }
      F_0042c880(((undefined1 *)(gen_frame + 0x14)));
    }
    F_00ec3cc0(param_1,0x7d);
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return (uint)param_1;
  case 6: ;
    break;
  case 7: ;
    F_00ec3cc0(param_1,0x3c);
    uVar2 = F_0042a990(*(undefined4 *)(param_2 + 0x10));
    F_00a17dc0(param_1,uVar2);
    F_00ec3cc0(param_1,0x3e);
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return (uint)param_1;
  case 8: ;
    F_00ea6520(param_1,*(undefined4 *)(param_2 + 0x10),param_3);
    F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
    return (uint)param_1;
  default: ;
    iVar6 = *(int *)(*param_1 + 4);
    uVar5 = (uint)(*(int *)(iVar6 + 0x38 + (int)param_1) == 0) * 4 + 2;
    *(uint *)(iVar6 + 0xc + (int)param_1) = uVar5;
    uVar5 = *(uint *)(iVar6 + 0x10 + (int)param_1) & uVar5;
    if (uVar5 != 0) {
      if ((uVar5 & 4) == 0) {
        if ((uVar5 & 2) == 0) {
          uVar2 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x8)) = "ios_base::eofbit set";
        }
        else {
          uVar2 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x8)) = "ios_base::failbit set";
        }
      }
      else {
        uVar2 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x8)) = "ios_base::badbit set";
      }
      (*(undefined4 *)(gen_frame + 0xc)) = 1;
      (*(uint *)(gen_frame + 0x10)) = uVar2;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
    }
    F_00c47745(uVar2 ^ (uint)(uint)(gen_frame + 0x6c));
    return (uint)param_1;
  }
  F_00ec3cc0(param_1,0x5b);
  piVar4 = *(int * PTR32 *)(param_2 + 0x10);
  iVar6 = *piVar4;
  if (iVar6 != piVar4[1]) {
    do {
      if (iVar6 != *piVar4) {
        F_00ec3cc0(param_1,0x2c);
      }
      F_00ea6520(param_1,iVar6,param_3);
      if ((*((byte *)GEN_TOP((*(int *)(*param_1 + 4) + 0xc + (int)param_1))) & 6) != 0) break;
      piVar4 = *(int * PTR32 *)(param_2 + 0x10);
      iVar6 = iVar6 + 0x18;
    } while (iVar6 != piVar4[1]);
  }
  F_00ec3cc0(param_1,0x5d);
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)param_1;
}

/* ref: FUN_00ea68b0 */
uint F_00ea68b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xea68b0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined * pvVar5;
  uint uVar6;
  int * piVar7;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * pppppppuVar8;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * pppppppuVar9;
  undefined4 * puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 * puVar13;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  (*(int * PTR32 *)(gen_frame + 0xbc)) = param_1;
  (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x15c))))) = 0;
  if (-1 < param_3) {
    F_00ec3cc0(param_1,0x4c);
    F_00ebef40(param_1,param_3);
  }
  iVar11 = *(int *)(param_2 + 8);
  if (iVar11 == 5) {
    F_00ec3cc0(param_1,0x41);
    F_00ebea30(param_1,*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x10) + 8))));
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4))[0] = &REFG(undefined * PTR32, 0x1157cd0);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x114))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109105c));
    F_00483f60(((undefined * PTR32 * PTR32 *)(gen_frame + 0x114)),((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) + 1,0);
    *(undefined * PTR32 * PTR32 *)((int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4))[0][1]) =
         (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
    F_00479880(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) + 1);
    pppppppuVar9 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1d0))[0];
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4))[1] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
    (*(undefined4 *)(gen_frame + 0x104)) = 0;
    (*(uint *)(gen_frame + 0x108)) = 4;
    (*(uint *)(gen_frame + 0x1e4)) = 0xf;
    (*(uint *)(gen_frame + 0x1e0)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1d0))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1d0))[0] = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)((uint)pppppppuVar9 & 0xffffff00);
    piVar7 = *((int * PTR32 *)GEN_TOP((*(int *)(param_2 + 0x10) + 4)));
    (*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x15c))))) = (int)piVar7;
    (*(int * PTR32 *)(gen_frame + 0xc0)) = (int *)*piVar7;
    if ((int *)*piVar7 != piVar7) {
      do {
        piVar7 = (*(int * PTR32 *)(gen_frame + 0xc0));
        F_0042b630(((undefined1 *)(gen_frame + 0x160)));
        F_00ea3b60(piVar7 + 4,((undefined1 *)(gen_frame + 0x160)),0);
        bVar3 = F_0042b660(((undefined1 *)(gen_frame + 0x160)),piVar7 + 4);
        if (bVar3 == 0) {
          uVar12 = 0x45;
        }
        else {
          uVar12 = 0x4b;
        }
        F_00ec3cc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),uVar12);
        uVar4 = F_0042a970(((undefined1 *)(gen_frame + 0x160)));
        F_00ebea30(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),uVar4);
        F_00ec3cc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),0x3a);
        uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x160)));
        F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),uVar4);
        F_0042c880(((undefined1 *)(gen_frame + 0x160)));
        switch((unsigned int)(uintptr_t)(piVar7[0x1c])) {
        case 0: ;
          uVar12 = 0x4e;
          goto LAB_00ea6cd2;
        case 1: ;
          F_00ec3cc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),0x49);
          F_00ebf0f0(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),piVar7[0x1e],piVar7[0x1f]);
          break;
        case 2: ;
          F_00ec3cc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),0x44);
          F_00ebf2a0(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),GEN_TOF(gen_bits2f(piVar7[0x1e])));
          break;
        case 3: ;
          if ((char)piVar7[0x1e] == '\0') {
            uVar12 = 0x46;
          }
          else {
            uVar12 = 0x54;
          }
LAB_00ea6cd2: ;
          F_00ec3cc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),uVar12);
          break;
        case 4: ;
          F_00e45810(((undefined1 *)(gen_frame + 0x24)),2,1);
          if (**(char * PTR32 *)piVar7[0x1e] == '\0') {
            F_00ec3cc0(((undefined1 *)(gen_frame + 0x24)),0x5a);
          }
          else {
            uVar4 = F_0042a970((undefined4 *)piVar7[0x1e]);
            if (uVar4 == 1) {
              F_00ec3cc0(((undefined1 *)(gen_frame + 0x24)),0x4f);
              uVar4 = F_0042a990(piVar7[0x1e]);
              F_00a17dc0(((undefined1 *)(gen_frame + 0x24)),uVar4);
            }
            else {
              F_0042b630(((undefined1 *)(gen_frame + 0x160)));
              F_00ea3b60(piVar7[0x1e],((undefined1 *)(gen_frame + 0x160)),0);
              bVar3 = F_0042b660(((undefined1 *)(gen_frame + 0x160)),piVar7[0x1e]);
              if (bVar3 == 0) {
                uVar12 = 0x45;
              }
              else {
                uVar12 = 0x53;
              }
              F_00ec3cc0(((undefined1 *)(gen_frame + 0x24)),uVar12);
              uVar4 = F_0042a970(((undefined1 *)(gen_frame + 0x160)));
              F_00ebea30(((undefined1 *)(gen_frame + 0x24)),uVar4);
              F_00ec3cc0(((undefined1 *)(gen_frame + 0x24)),0x3a);
              uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x160)));
              F_00a17dc0(((undefined1 *)(gen_frame + 0x24)),uVar4);
              F_0042c880(((undefined1 *)(gen_frame + 0x160)));
            }
          }
          puVar13 = &(*(undefined8 *)(gen_frame + 0x1f0));
          (*(undefined8 *)(gen_frame + 0x1f0)) = 0;
          (*(undefined8 *)(gen_frame + 0x1f8)) = 0;
          (*(uint *)(gen_frame + 0x200)) = 0;
          pvVar5 = (undefined *)F_00eb0cd0(((undefined1 *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0xc)));
          bVar3 = F_00eb0d30(pvVar5,puVar13);
          if (bVar3 != 0) {
            F_00e46800(((undefined1 *)(gen_frame + 0x28)),&(*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1ec)));
            uVar4 = (*(uint *)(gen_frame + 0x1e0));
            pppppppuVar9 = (*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1ec));
            if ((*(uint *)(gen_frame + 0x200)) < 0x10) {
              pppppppuVar9 = &(*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1ec));
            }
            uVar2 = (uint)(*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x1f8)) + 4));
            uVar6 = (*(uint *)(gen_frame + 0x1e0));
            if ((*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x1f8)) + 4)) <= (*(uint *)(gen_frame + 0x1e0))) {
              uVar6 = (uint)(*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x1f8)) + 4));
            }
            pppppppuVar8 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1d0))[0];
            if ((*(uint *)(gen_frame + 0x1e4)) < 0x10) {
              pppppppuVar8 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1d0));
            }
            uVar6 = F_0040d320(pppppppuVar8,pppppppuVar9,uVar6);
            if (((uVar6 == 0) && (uVar2 <= uVar4)) && (uVar4 == uVar2)) {
              F_00ec3cc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),0x52);
            }
            else {
              F_00ec2c30(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),&(*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1ec)));
            }
            F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1d0)),&(*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1ec)),0,0xffffffff);
            F_00a16de0(&(*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1ec)));
          }
          F_00e44680(((undefined1 *)(gen_frame + 0x24)));
          break;
        case 5: ;
          F_00ea68b0((int *)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),(int)(piVar7 + 0x1a),0xffffffff);
          break;
        case 6: ;
          F_00ea68b0((int *)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),(int)(piVar7 + 0x1a),0xffffffff);
          break;
        case 7: ;
          uVar4 = F_0042a990(piVar7[0x1e]);
          F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),uVar4);
          break;
        case 8: ;
          F_00ea68b0((int *)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),piVar7[0x1e],0xffffffff);
          break;
        default: ;
          iVar11 = *(int *)(*param_1 + 4);
          uVar4 = (uint)(*(int *)(iVar11 + 0x38 + (int)param_1) == 0) * 4 + 2;
          *(uint *)(iVar11 + 0xc + (int)param_1) = uVar4;
          uVar4 = *(uint *)(iVar11 + 0x10 + (int)param_1) & uVar4;
          if (uVar4 != 0) {
joined_r0x00ea74d9: ;
            if ((uVar4 & 4) == 0) {
              if ((uVar4 & 2) == 0) {
                uVar4 = F_00c46280();
                (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x1f8)) + 4)) = "ios_base::eofbit set";
                (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x1f8)) + 4)) = "ios_base::eofbit set";
              }
              else {
                uVar4 = F_00c46280();
                (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x1f8)) + 4)) = "ios_base::failbit set";
                (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x1f8)) + 4)) = "ios_base::failbit set";
              }
            }
            else {
              uVar4 = F_00c46280();
              (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x1f8)) + 4)) = "ios_base::badbit set";
              (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x1f8)) + 4)) = "ios_base::badbit set";
            }
            (*(uint *)(gen_frame + 0x200)) = 1;
            (*(uint *)(gen_frame + 0x204)) = uVar4;
            (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x1f8)) + 0)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
            (*(undefined8 *)(gen_frame + 0x1f8)) = CONCAT44((*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x1f8)) + 4)),(*(undefined * PTR32 (*)[3])REFP(0x10910a4)));
                    
            F_0046e060(&(*(undefined8 *)(gen_frame + 0x1f8)));
          }
          if (0xf < (*(uint *)(gen_frame + 0x1e4))) {
            F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1d0))[0]);
          }
          pppppppuVar9 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1d0))[0];
          (*(uint *)(gen_frame + 0x1e4)) = 0xf;
          (*(uint *)(gen_frame + 0x1e0)) = 0;
          (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1d0))[0] + 0)) = 0;
          ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1d0))[0] = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)((uint)pppppppuVar9 & 0xffffff00);
          *(undefined * PTR32 * PTR32 *)((int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4))[0][1]) =
               (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
          ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4))[1] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
          if (((*(uint *)(gen_frame + 0x108)) & 1) != 0) {
            F_00406ad0(*(*(undefined4 * PTR32 *)(gen_frame + 0xd8)));
          }
          *(*(undefined4 * PTR32 *)(gen_frame + 0xd8)) = 0;
          *(*(undefined4 * PTR32 *)(gen_frame + 0xe8)) = 0;
          *(*(undefined4 * PTR32 *)(gen_frame + 0xf8)) = 0;
          *(*(undefined4 * PTR32 *)(gen_frame + 0xdc)) = 0;
          *(*(undefined4 * PTR32 *)(gen_frame + 0xec)) = 0;
          *(*(undefined4 * PTR32 *)(gen_frame + 0xfc)) = 0;
          (*(uint *)(gen_frame + 0x108)) = (*(uint *)(gen_frame + 0x108)) & 0xfffffffe;
          (*(undefined4 *)(gen_frame + 0x104)) = 0;
          F_00479ae0(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) + 1);
          *(undefined * PTR32 * PTR32 *)((int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4))[0][1]) =
               (*(undefined * PTR32 (*)[1])REFP(0x109105c));
LAB_00ea6f5d: ;
          ((undefined * PTR32 * PTR32 *)(gen_frame + 0x114))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
          F_00c46453((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x114)));
          F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
          return (uint)param_1;
        }
        F_00eacb60(&(*(int * PTR32 *)(gen_frame + 0xc0)));
      } while ((*(int * PTR32 *)(gen_frame + 0xc0)) != (int *)(*(int *)((char *)&((*(undefined4 *)(gen_frame + 0x15c))))));
    }
    F_00ec3cc0(param_1,0x3a);
    F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) + 1,((uint *)(gen_frame + 0x1b4)));
    F_00ebea30(param_1,(*(undefined4 *)(gen_frame + 0x1c4)));
    F_00ec2c30(param_1,((uint *)(gen_frame + 0x1b4)));
    if (0xf < (*(uint *)(gen_frame + 0x1c8))) {
      F_00406ad0(((uint *)(gen_frame + 0x1b4))[0]);
    }
    uVar4 = ((uint *)(gen_frame + 0x1b4))[0];
    (*(uint *)(gen_frame + 0x1c8)) = 0xf;
    (*(undefined4 *)(gen_frame + 0x1c4)) = 0;
    (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x1b4))[0] + 0)) = 0;
    ((uint *)(gen_frame + 0x1b4))[0] = uVar4 & 0xffffff00;
    if (0xf < (*(uint *)(gen_frame + 0x1e4))) {
      F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1d0))[0]);
    }
    pppppppuVar9 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1d0))[0];
    (*(uint *)(gen_frame + 0x1e4)) = 0xf;
    (*(uint *)(gen_frame + 0x1e0)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1d0))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1d0))[0] = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)((uint)pppppppuVar9 & 0xffffff00);
    *(undefined * PTR32 * PTR32 *)((int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4))[0][1]) =
         (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4))[1] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
    if (((*(uint *)(gen_frame + 0x108)) & 1) != 0) {
      F_00406ad0(*(*(undefined4 * PTR32 *)(gen_frame + 0xd8)));
    }
    *(*(undefined4 * PTR32 *)(gen_frame + 0xd8)) = 0;
    *(*(undefined4 * PTR32 *)(gen_frame + 0xe8)) = 0;
    *(*(undefined4 * PTR32 *)(gen_frame + 0xf8)) = 0;
    *(*(undefined4 * PTR32 *)(gen_frame + 0xdc)) = 0;
    *(*(undefined4 * PTR32 *)(gen_frame + 0xec)) = 0;
    *(*(undefined4 * PTR32 *)(gen_frame + 0xfc)) = 0;
    (*(uint *)(gen_frame + 0x108)) = (*(uint *)(gen_frame + 0x108)) & 0xfffffffe;
    (*(undefined4 *)(gen_frame + 0x104)) = 0;
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4))[1] = (*(undefined * PTR32 (*)[15])REFP(0x10910fc));
    if ((*(uint * PTR32 *)(gen_frame + 0x100)) != (uint *)0x0) {
      uVar4 = *(*(uint * PTR32 *)(gen_frame + 0x100));
      if (uVar4 != 0) {
        F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x15c)),0);
        iVar11 = *(int *)(uVar4 + 4);
        if ((iVar11 != 0) && (iVar11 != -1)) {
          *(int *)(uVar4 + 4) = iVar11 + -1;
        }
        iVar11 = *(int *)(uVar4 + 4);
        F_00c45be8(&(*(undefined4 *)(gen_frame + 0x15c)));
        puVar10 = ((undefined4 *)GEN_TOP((~-(uint)(iVar11 != 0) & uVar4)));
        if (puVar10 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar10)(puVar10,1);
        }
      }
      F_00406ad0((*(uint * PTR32 *)(gen_frame + 0x100)));
    }
    F_00c465bd(((undefined1 *)(gen_frame + 0xcc)));
    *(undefined * PTR32 * PTR32 *)((int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4))[0][1]) =
         (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  }
  else {
    if (iVar11 != 6) {
      if (iVar11 == 7) {
        uVar4 = F_0042a990(*(undefined4 *)(param_2 + 0x10));
        F_00a17dc0(param_1,uVar4);
        F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
        return (uint)param_1;
      }
      F_00479e00(*(int *)(*param_1 + 4) + (int)param_1,2,0);
      F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
      return (uint)param_1;
    }
    F_00ec3cc0(param_1,0x56);
    F_00ebea30(param_1,((*(int * PTR32 *)(param_2 + 0x10))[1] - **(int * PTR32 *)(param_2 + 0x10)) / 0x18);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4))[0] = &REFG(undefined * PTR32, 0x1157cd0);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x114))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109105c));
    F_00483f60(((undefined * PTR32 * PTR32 *)(gen_frame + 0x114)),((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) + 1,0);
    *(undefined * PTR32 * PTR32 *)((int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4))[0][1]) =
         (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
    F_00479880(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) + 1);
    pppppppuVar9 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1d0))[0];
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4))[1] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
    (*(undefined4 *)(gen_frame + 0x104)) = 0;
    (*(uint *)(gen_frame + 0x108)) = 4;
    (*(uint *)(gen_frame + 0x1e4)) = 0xf;
    (*(uint *)(gen_frame + 0x1e0)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1d0))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1d0))[0] = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)((uint)pppppppuVar9 & 0xffffff00);
    iVar1 = (*(int * PTR32 *)(param_2 + 0x10))[1];
    for (iVar11 = **(int * PTR32 *)(param_2 + 0x10); iVar11 != iVar1; iVar11 = iVar11 + 0x18) {
      switch((unsigned int)(uintptr_t)(*(undefined4 *)(iVar11 + 8))) {
      case 0: ;
        uVar12 = 0x4e;
        goto LAB_00ea72fc;
      case 1: ;
        F_00ec3cc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),0x49);
        F_00ebf0f0(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),*(undefined4 *)(iVar11 + 0x10),*(undefined4 *)(iVar11 + 0x14));
        break;
      case 2: ;
        F_00ec3cc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),0x44);
        F_00ebf2a0(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),*(float *)(iVar11 + 0x10));
        break;
      case 3: ;
        if (*(char *)(iVar11 + 0x10) == '\0') {
          uVar12 = 0x46;
        }
        else {
          uVar12 = 0x54;
        }
LAB_00ea72fc: ;
        F_00ec3cc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),uVar12);
        break;
      case 4: ;
        F_00e45810(((undefined1 *)(gen_frame + 0x24)),2,1);
        if (*((char *)GEN_TOP(**(undefined4 * PTR32 *)(iVar11 + 0x10))) == '\0') {
          F_00ec3cc0(((undefined1 *)(gen_frame + 0x24)),0x5a);
        }
        else {
          uVar4 = F_0042a970(*(undefined4 * PTR32 *)(iVar11 + 0x10));
          if (uVar4 == 1) {
            F_00ec3cc0(((undefined1 *)(gen_frame + 0x24)),0x4f);
            uVar4 = F_0042a990(*(undefined4 *)(iVar11 + 0x10));
            F_00a17dc0(((undefined1 *)(gen_frame + 0x24)),uVar4);
          }
          else {
            F_0042b630(((undefined1 *)(gen_frame + 0x160)));
            F_00ea3b60(*(undefined4 *)(iVar11 + 0x10),((undefined1 *)(gen_frame + 0x160)),0);
            bVar3 = F_0042b660(((undefined1 *)(gen_frame + 0x160)),*(undefined4 *)(iVar11 + 0x10));
            if (bVar3 == 0) {
              uVar12 = 0x45;
            }
            else {
              uVar12 = 0x53;
            }
            F_00ec3cc0(((undefined1 *)(gen_frame + 0x24)),uVar12);
            uVar4 = F_0042a970(((undefined1 *)(gen_frame + 0x160)));
            F_00ebea30(((undefined1 *)(gen_frame + 0x24)),uVar4);
            F_00ec3cc0(((undefined1 *)(gen_frame + 0x24)),0x3a);
            uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x160)));
            F_00a17dc0(((undefined1 *)(gen_frame + 0x24)),uVar4);
            F_0042c880(((undefined1 *)(gen_frame + 0x160)));
          }
        }
        puVar13 = &(*(undefined8 *)(gen_frame + 0x1f0));
        (*(undefined8 *)(gen_frame + 0x1f0)) = 0;
        (*(undefined8 *)(gen_frame + 0x1f8)) = 0;
        (*(uint *)(gen_frame + 0x200)) = 0;
        pvVar5 = (undefined *)F_00eb0cd0(((undefined1 *)(gen_frame + 0x24)),((undefined1 *)(gen_frame + 0xc)));
        bVar3 = F_00eb0d30(pvVar5,puVar13);
        if (bVar3 != 0) {
          F_00e46800(((undefined1 *)(gen_frame + 0x28)),&(*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1ec)));
          bVar3 = F_00ebbb60(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1d0)),&(*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1ec)));
          if (bVar3 == 0) {
            F_00ec2c30(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),&(*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1ec)));
          }
          else {
            F_00ec3cc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),0x52);
          }
          F_00bb4bd0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1d0)),&(*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1ec)),0,0xffffffff);
          F_00a16de0(&(*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1ec)));
        }
        F_00e44680(((undefined1 *)(gen_frame + 0x24)));
        break;
      case 5: ;
        F_00ea68b0((int *)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),iVar11,0xffffffff);
        break;
      case 6: ;
        F_00ea68b0((int *)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),iVar11,0xffffffff);
        break;
      case 7: ;
        uVar4 = F_0042a990(*(undefined4 *)(iVar11 + 0x10));
        F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),uVar4);
        break;
      case 8: ;
        F_00ea68b0((int *)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)),*(undefined4 *)(iVar11 + 0x10),0xffffffff);
        break;
      default: ;
        iVar11 = *(int *)(*param_1 + 4);
        uVar4 = (uint)(*(int *)(iVar11 + 0x38 + (int)param_1) == 0) * 4 + 2;
        *(uint *)(iVar11 + 0xc + (int)param_1) = uVar4;
        uVar4 = *(uint *)(iVar11 + 0x10 + (int)param_1) & uVar4;
        if (uVar4 != 0) goto joined_r0x00ea74d9;
        if (0xf < (*(uint *)(gen_frame + 0x1e4))) {
          F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1d0))[0]);
        }
        pppppppuVar9 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1d0))[0];
        (*(uint *)(gen_frame + 0x1e4)) = 0xf;
        (*(uint *)(gen_frame + 0x1e0)) = 0;
        (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1d0))[0] + 0)) = 0;
        ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1d0))[0] = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)((uint)pppppppuVar9 & 0xffffff00);
        *(undefined * PTR32 * PTR32 *)((int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4))[0][1]) =
             (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
        ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4))[1] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
        F_00e3ce60(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) + 1);
        F_00479ae0(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) + 1);
        *(undefined * PTR32 * PTR32 *)((int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4))[0][1]) =
             (*(undefined * PTR32 (*)[1])REFP(0x109105c));
        goto LAB_00ea6f5d;
      }
    }
    F_00ec3cc0(param_1,0x3a);
    F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) + 1,((uint *)(gen_frame + 0x1b4)));
    F_00ebea30(param_1,(*(undefined4 *)(gen_frame + 0x1c4)));
    F_00ec2c30(param_1,((uint *)(gen_frame + 0x1b4)));
    if (0xf < (*(uint *)(gen_frame + 0x1c8))) {
      F_00406ad0(((uint *)(gen_frame + 0x1b4))[0]);
    }
    uVar4 = ((uint *)(gen_frame + 0x1b4))[0];
    (*(uint *)(gen_frame + 0x1c8)) = 0xf;
    (*(undefined4 *)(gen_frame + 0x1c4)) = 0;
    (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x1b4))[0] + 0)) = 0;
    ((uint *)(gen_frame + 0x1b4))[0] = uVar4 & 0xffffff00;
    if (0xf < (*(uint *)(gen_frame + 0x1e4))) {
      F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1d0))[0]);
    }
    pppppppuVar9 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1d0))[0];
    (*(uint *)(gen_frame + 0x1e4)) = 0xf;
    (*(uint *)(gen_frame + 0x1e0)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1d0))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1d0))[0] = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)((uint)pppppppuVar9 & 0xffffff00);
    *(undefined * PTR32 * PTR32 *)((int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4))[0][1]) =
         (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4))[1] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
    if (((*(uint *)(gen_frame + 0x108)) & 1) != 0) {
      F_00406ad0(*(*(undefined4 * PTR32 *)(gen_frame + 0xd8)));
    }
    *(*(undefined4 * PTR32 *)(gen_frame + 0xd8)) = 0;
    *(*(undefined4 * PTR32 *)(gen_frame + 0xe8)) = 0;
    *(*(undefined4 * PTR32 *)(gen_frame + 0xf8)) = 0;
    *(*(undefined4 * PTR32 *)(gen_frame + 0xdc)) = 0;
    *(*(undefined4 * PTR32 *)(gen_frame + 0xec)) = 0;
    *(*(undefined4 * PTR32 *)(gen_frame + 0xfc)) = 0;
    (*(uint *)(gen_frame + 0x108)) = (*(uint *)(gen_frame + 0x108)) & 0xfffffffe;
    (*(undefined4 *)(gen_frame + 0x104)) = 0;
    F_00479ae0(((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) + 1);
    *(undefined * PTR32 * PTR32 *)((int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4)) + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0xc4))[0][1]) =
         (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  }
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x114))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x114)));
  piVar7 = (*(int * PTR32 *)(gen_frame + 0xbc));
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
  return (uint)piVar7;
}

/* ref: FUN_00ea7580 */
uint F_00ea7580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xea7580u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined * param_5 = (undefined *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x2c0];
  int * piVar1;
  int iVar2;
  int * piVar3;
  undefined * pvVar4;
  uint uVar5;
  uint uVar6;
  int * piVar7;
  ulonglong uVar8;
  undefined * puVar9;
  char * pcVar10;
  
  (*(uint *)(gen_frame + 0x2b8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2bc);
  piVar7 = param_1;
  if ((char)param_6 != '\0') {
    piVar7 = param_2;
  }
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(param_3 + 8))) {
  case 1: ;
    if ((char)param_6 == '\0') {
      pcVar10 = "<part name=\"";
    }
    else {
      pcVar10 = "<xsd:element name=\"";
    }
    F_00a17dc0(piVar7,pcVar10);
    pcVar10 = "\" type=\"xsd:int\"";
    break;
  case 2: ;
    if ((char)param_6 == '\0') {
      F_00a17dc0(piVar7,"<part name=\"");
      pcVar10 = "\" type=\"xsd:float\"";
    }
    else {
      F_00a17dc0(piVar7,"<xsd:element name=\"");
      pcVar10 = "\" type=\"xsd:float\"";
    }
    break;
  case 3: ;
    if ((char)param_6 == '\0') {
      F_00a17dc0(piVar7,"<part name=\"");
      pcVar10 = "\" type=\"xsd:boolean\"";
    }
    else {
      F_00a17dc0(piVar7,"<xsd:element name=\"");
      pcVar10 = "\" type=\"xsd:boolean\"";
    }
    break;
  case 4: ;
    if ((char)param_6 == '\0') {
      F_00a17dc0(piVar7,"<part name=\"");
      pcVar10 = "\" type=\"xsd:string\"";
    }
    else {
      F_00a17dc0(piVar7,"<xsd:element name=\"");
      pcVar10 = "\" type=\"xsd:string\"";
    }
    break;
  case 5: ;
    if ((char)param_6 == '\0') {
      pcVar10 = "<message name=\"";
    }
    else {
      pcVar10 = "<xsd:complexType name=\"";
    }
    F_00a17dc0(piVar7,pcVar10);
    puVar9 = &REFG(undefined, 0x12a8c0c);
    uVar6 = F_0042a990(param_5);
    uVar6 = F_00a17dc0(piVar7,uVar6);
    pvVar4 = (undefined *)F_00a17dc0(uVar6,puVar9);
    F_00ec3cc0(pvVar4,10);
    F_00a16e10(pvVar4);
    if ((char)param_6 != '\0') {
      pvVar4 = (undefined *)F_00a17dc0(piVar7,"<xsd:sequence>");
      F_00ec3cc0(pvVar4,10);
      F_00a16e10(pvVar4);
    }
    piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)(param_3 + 0x10) + 4)));
    piVar1 = (int *)*piVar3;
    (*(int *)(gen_frame + 0x14)) = (int)piVar1;
    if (piVar1 != piVar3) {
      do {
        iVar2 = (*(int *)(gen_frame + 0x14));
        F_0042b630(((undefined1 *)(gen_frame + 0x264)));
        F_00ea3b60(iVar2 + 0x10,((undefined1 *)(gen_frame + 0x264)),param_4);
        F_00ea7580(param_1,param_2,iVar2 + 0x68,param_4,((undefined1 *)(gen_frame + 0x264)),param_6,param_7);
        if ((*((byte *)GEN_TOP((*(int *)(*piVar7 + 4) + 0xc + (int)piVar7))) & 6) != 0) {
          F_0042c880(((undefined1 *)(gen_frame + 0x264)));
          break;
        }
        F_0042c880(((undefined1 *)(gen_frame + 0x264)));
        F_00eacb60(&(*(int *)(gen_frame + 0x14)));
      } while ((*(int *)(gen_frame + 0x14)) != *((int *)GEN_TOP((*(int *)(param_3 + 0x10) + 4))));
    }
    if ((char)param_6 == '\0') {
      pvVar4 = (undefined *)F_00a17dc0(piVar7,"</message>");
    }
    else {
      pvVar4 = (undefined *)F_00a17dc0(piVar7,"</xsd:sequence>");
      F_00ec3cc0(pvVar4,10);
      F_00a16e10(pvVar4);
      pvVar4 = (undefined *)F_00a17dc0(piVar7,"</xsd:complexType>");
    }
    goto LAB_00ea7614;
  case 6: ;
    piVar3 = *(int * PTR32 *)(param_3 + 0x10);
    iVar2 = *piVar3;
    (*(int *)(gen_frame + 0x14)) = iVar2;
    if (iVar2 != piVar3[1]) {
      if (*(int *)(iVar2 + 8) == 5) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x1bc)),&REFG(undefined, 0x12a8bc4),REFG(undefined4, 0x108cc50));
        uVar6 = F_0042cd30(param_5,((undefined1 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x1bc)));
        F_0042cbc0(((undefined1 *)(gen_frame + 0x210)),uVar6);
        F_0042c880(((undefined1 *)(gen_frame + 0x18)));
        F_0042c880(((undefined1 *)(gen_frame + 0x1bc)));
        F_00ea7580(param_1,param_2,(*(int *)(gen_frame + 0x14)),param_4,((undefined1 *)(gen_frame + 0x210)),1,1);
        F_00a17dc0(param_2,"<xsd:complexType name=\"");
        puVar9 = &REFG(undefined, 0x12a8c0c);
        uVar6 = F_0042a990(param_5);
        uVar6 = F_00a17dc0(param_2,uVar6);
        pvVar4 = (undefined *)F_00a17dc0(uVar6,puVar9);
        F_00ec3cc0(pvVar4,10);
        F_00a16e10(pvVar4);
        pvVar4 = (undefined *)F_00a17dc0(param_2,"<xsd:sequence>");
        F_00ec3cc0(pvVar4,10);
        F_00a16e10(pvVar4);
        F_00a17dc0(param_2,"<xsd:element name=\"vector\"");
        puVar9 = &REFG(undefined, 0x114b548);
        uVar6 = F_0042a990(((undefined1 *)(gen_frame + 0x210)));
        uVar5 = F_00a17dc0(param_2," type=\"");
        uVar6 = F_00a17dc0(uVar5,uVar6);
        F_00a17dc0(uVar6,puVar9);
        F_00a17dc0(param_2," minOccurs=\"0\"");
        pvVar4 = (undefined *)F_00a17dc0(param_2,&REFG(undefined, 0x12a8c78));
        F_00ec3cc0(pvVar4,10);
        F_00a16e10(pvVar4);
        pvVar4 = (undefined *)F_00a17dc0(param_2,"</xsd:sequence>");
        F_00ec3cc0(pvVar4,10);
        F_00a16e10(pvVar4);
        pvVar4 = (undefined *)F_00a17dc0(param_2,"</xsd:complexType>");
        F_00ec3cc0(pvVar4,10);
        F_00a16e10(pvVar4);
        F_0042c880(((undefined1 *)(gen_frame + 0x210)));
      }
      if ((char)param_6 == '\0') {
        pcVar10 = "<part name=\"";
      }
      else {
        pcVar10 = "<xsd:element name=\"";
      }
      F_00a17dc0(piVar7,pcVar10);
      F_0042b630(((undefined1 *)(gen_frame + 0x264)));
      switch((unsigned int)(uintptr_t)(*(undefined4 *)((*(int *)(gen_frame + 0x14)) + 8))) {
      case 1: ;
        F_0042cc20(((undefined1 *)(gen_frame + 0x168)),"xsd:int",REFG(undefined4, 0x108cc50));
        F_0042ccf0(((undefined1 *)(gen_frame + 0x264)),((undefined1 *)(gen_frame + 0x168)));
        F_0042c880(((undefined1 *)(gen_frame + 0x168)));
        break;
      case 2: ;
        F_0042cc20(((undefined1 *)(gen_frame + 0x114)),"xsd:float",REFG(undefined4, 0x108cc50));
        F_0042ccf0(((undefined1 *)(gen_frame + 0x264)),((undefined1 *)(gen_frame + 0x114)));
        F_0042c880(((undefined1 *)(gen_frame + 0x114)));
        break;
      case 3: ;
        F_0042cc20(((undefined1 *)(gen_frame + 0x6c)),"xsd:boolean",REFG(undefined4, 0x108cc50));
        F_0042ccf0(((undefined1 *)(gen_frame + 0x264)),((undefined1 *)(gen_frame + 0x6c)));
        F_0042c880(((undefined1 *)(gen_frame + 0x6c)));
        break;
      case 4: ;
        F_0042cc20(((undefined1 *)(gen_frame + 0xc0)),"xsd:string",REFG(undefined4, 0x108cc50));
        F_0042ccf0(((undefined1 *)(gen_frame + 0x264)),((undefined1 *)(gen_frame + 0xc0)));
        F_0042c880(((undefined1 *)(gen_frame + 0xc0)));
        break;
      case 5: ;
        F_0042ccf0(((undefined1 *)(gen_frame + 0x264)),param_5);
      }
      puVar9 = &REFG(undefined, 0x114b548);
      uVar6 = F_0042a990(((undefined1 *)(gen_frame + 0x264)));
      pcVar10 = "\" type=\"";
      uVar5 = F_0042a990(param_5);
      uVar5 = F_00a17dc0(piVar7,uVar5);
      uVar5 = F_00a17dc0(uVar5,pcVar10);
      uVar6 = F_00a17dc0(uVar5,uVar6);
      F_00a17dc0(uVar6,puVar9);
      if ((char)param_7 != '\0') {
        F_00a17dc0(piVar7," minOccurs=\"0\"");
      }
      pvVar4 = (undefined *)F_00a17dc0(piVar7,&REFG(undefined, 0x12a8c78));
      F_00ec3cc0(pvVar4,10);
      F_00a16e10(pvVar4);
      uVar8 = F_0042c880(((undefined1 *)(gen_frame + 0x264)));
      F_00c47745((*(uint *)(gen_frame + 0x2b8)) ^ (uint)(uint)(gen_frame + 0x2bc));
      return (uint)uVar8;
    }
    goto LAB_00ea7626;
  default: ;
    iVar2 = *(int *)(*piVar7 + 4);
    uVar6 = (uint)(*(int *)(iVar2 + 0x38 + (int)piVar7) == 0) * 4 + 2;
    *(uint *)(iVar2 + 0xc + (int)piVar7) = uVar6;
    uVar6 = *(uint *)(iVar2 + 0x10 + (int)piVar7) & uVar6;
    piVar3 = (int *)0x0;
    if (uVar6 != 0) {
      if ((uVar6 & 4) == 0) {
        if ((uVar6 & 2) == 0) {
          uVar6 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x8)) = "ios_base::eofbit set";
        }
        else {
          uVar6 = F_00c46280();
          (*(char * PTR32 *)(gen_frame + 0x8)) = "ios_base::failbit set";
        }
      }
      else {
        uVar6 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x8)) = "ios_base::badbit set";
      }
      (*(undefined4 *)(gen_frame + 0xc)) = 1;
      (*(uint *)(gen_frame + 0x10)) = uVar6;
      (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
      F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
    }
    goto LAB_00ea7626;
  }
  uVar6 = F_0042a990(param_5);
  uVar6 = F_00a17dc0(piVar7,uVar6);
  F_00a17dc0(uVar6,pcVar10);
  pvVar4 = (undefined *)F_00a17dc0(piVar7,&REFG(undefined, 0x12a8c78));
LAB_00ea7614: ;
  F_00ec3cc0(pvVar4,10);
  piVar3 = (int *)F_00a16e10(pvVar4);
LAB_00ea7626: ;
  F_00c47745((*(uint *)(gen_frame + 0x2b8)) ^ (uint)(uint)(gen_frame + 0x2bc));
  return (uint)piVar3;
}

/* ref: FUN_00ea7c20 */
uint F_00ea7c20(unsigned int gen_a0)
{
  GEN_ENTER(0xea7c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar2 = *(int *)((int)this + 8) - 4;
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
  case 3: ;
    pvVar1 = *(undefined * PTR32 *)((int)this + 0x10);
    if (pvVar1 != (undefined *)0x0) {
      F_0042c880(pvVar1);
      uVar2 = F_00406ad0(pvVar1);
      *(undefined4 *)((int)this + 8) = 0;
      return uVar2;
    }
    break;
  case 1: ;
    pvVar1 = *(undefined * PTR32 *)((int)this + 0x10);
    if (pvVar1 != (undefined *)0x0) {
      F_00ecd990(pvVar1,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)pvVar1 + 4),
                   *(undefined4 * PTR32 *)((int)pvVar1 + 4));
      F_00406ad0(*(undefined4 *)((int)pvVar1 + 4));
      uVar2 = F_00406ad0(pvVar1);
      *(undefined4 *)((int)this + 8) = 0;
      return uVar2;
    }
    break;
  case 2: ;
    if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
      uVar2 = F_00ecdf30(*(undefined * PTR32 *)((int)this + 0x10),1);
    }
  }
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00ea7cd0 */
uint F_00ea7cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xea7cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined * PTR32, 0x12fd328));
  uVar1 = F_00ea4260(this,param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_00ea7d20 */
uint F_00ea7d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xea7d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint in_ecx;
  undefined * this_00;
  undefined4 * puVar2;
  
  if (this == param_1) {
    return (uint)this;
  }
  if (*(int *)((int)this + 8) == *(int *)((int)param_1 + 8)) goto switchD_00ea7d51_default;
  F_00ea7c20(this);
  uVar1 = *(undefined4 *)((int)param_1 + 8);
  *(undefined4 *)((int)this + 8) = uVar1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 4: ;
  case 7: ;
    in_ecx = F_004069f0(0x54);
    if (in_ecx == 0) {
      *(undefined4 *)((int)this + 0x10) = 0;
    }
    else {
      F_0042b630(in_ecx);
      *(uint *)((int)this + 0x10) = in_ecx;
    }
    goto switchD_00ea7d51_default;
  case 5: ;
    this_00 = (undefined *)F_004069f0(0x10);
    if (this_00 == (undefined *)0x0) {
LAB_00ea7db9: ;
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)F_00ed08c0(this_00);
    }
    break;
  case 6: ;
    puVar2 = (undefined4 *)F_004069f0(0x10);
    if (puVar2 == (undefined4 *)0x0) goto LAB_00ea7db9;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    break;
  default: ;
    goto switchD_00ea7d51_default;
  }
  *(undefined4 * PTR32 *)((int)this + 0x10) = puVar2;
switchD_00ea7d51_default: ;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 8))) {
  case 1: ;
    *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)param_1 + 0x10);
    *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)param_1 + 0x14);
    return (uint)this;
  case 2: ;
    *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)param_1 + 0x10);
    return (uint)this;
  case 3: ;
    *(undefined1 *)((int)this + 0x10) = *(undefined1 *)((int)param_1 + 0x10);
    return (uint)this;
  case 4: ;
  case 7: ;
    F_0042ccf0(*(undefined * PTR32 *)((int)this + 0x10),*(undefined4 *)((int)param_1 + 0x10));
    return (uint)this;
  case 5: ;
    F_00ed0530(*(undefined * PTR32 *)((int)this + 0x10),*(undefined4 *)((int)param_1 + 0x10));
    return (uint)this;
  case 6: ;
    F_00ed0590(*(undefined * PTR32 *)((int)this + 0x10),*(undefined4 *)((int)param_1 + 0x10));
  }
  return (uint)this;
}

/* ref: FUN_00ea7e70 */
uint F_00ea7e70(unsigned int gen_a0)
{
  GEN_ENTER(0xea7e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00ea7c20(this);
  return (uint)this;
}

/* ref: FUN_00ea7e80 */
uint F_00ea7e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xea7e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(int *)((int)this + 8) != 1) {
    F_00ea7c20(this);
    *(undefined4 *)((int)this + 8) = 1;
  }
  *(int *)((int)this + 0x10) = param_1;
  *(int *)((int)this + 0x14) = param_1 >> 0x1f;
  return (uint)this;
}

/* ref: FUN_00ea7eb0 */
uint F_00ea7eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xea7eb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(int *)((int)this + 8) != 1) {
    F_00ea7c20(this);
    *(undefined4 *)((int)this + 8) = 1;
  }
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x14) = param_2;
  return (uint)this;
}

/* ref: FUN_00ea7ee0 */
uint F_00ea7ee0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xea7ee0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)((int)param_1 + 8) != 2) {
    F_00ea7c20(param_1);
    *(undefined4 *)((int)param_1 + 8) = 2;
  }
  *(float *)((int)param_1 + 0x10) = param_2;
  return (uint)param_1;
}

/* ref: FUN_00ea7f10 */
uint F_00ea7f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xea7f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(int *)((int)this + 8) != 3) {
    F_00ea7c20(this);
    *(undefined1 *)((int)this + 0x10) = (undefined1)param_1;
    *(undefined4 *)((int)this + 8) = 3;
    return (uint)this;
  }
  *(undefined1 *)((int)this + 0x10) = (undefined1)param_1;
  return (uint)this;
}

/* ref: FUN_00ea7f50 */
uint F_00ea7f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xea7f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  
  if (*(int *)((int)this + 8) == 4) {
    F_0042ccf0(*(undefined * PTR32 *)((int)this + 0x10),param_1);
    return (uint)this;
  }
  F_00ea7c20(this);
  *(undefined4 *)((int)this + 8) = 4;
  this_00 = (undefined *)F_004069f0(0x54);
  if (this_00 != (undefined *)0x0) {
    F_0042cbc0(this_00,param_1);
    *(undefined * PTR32 *)((int)this + 0x10) = this_00;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  return (uint)this;
}

/* ref: FUN_00ea7fb0 */
uint F_00ea7fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xea7fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(int *)((int)this + 8) == 4) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),param_1,REFG(undefined4, 0x108cc50));
    F_0042ccf0(*(undefined * PTR32 *)((int)this + 0x10),((undefined1 *)(gen_frame + 0x4)));
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  }
  else {
    F_00ea7c20(this);
    *(undefined4 *)((int)this + 8) = 4;
    this_00 = (undefined *)F_004069f0(0x54);
    if (this_00 == (undefined *)0x0) {
      this_00 = (undefined *)0x0;
    }
    else {
      F_0042cc20(this_00,param_1,REFG(undefined4, 0x108cc50));
    }
    *(undefined * PTR32 *)((int)this + 0x10) = this_00;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)this;
}

/* ref: FUN_00ea8040 */
uint F_00ea8040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xea8040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  
  if (*(int *)((int)this + 8) == 7) {
    F_0042ccf0(*(undefined * PTR32 *)((int)this + 0x10),param_1);
    return (uint)this;
  }
  F_00ea7c20(this);
  *(undefined4 *)((int)this + 8) = 7;
  this_00 = (undefined *)F_004069f0(0x54);
  if (this_00 != (undefined *)0x0) {
    F_0042cbc0(this_00,param_1);
    *(undefined * PTR32 *)((int)this + 0x10) = this_00;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  return (uint)this;
}

/* ref: FUN_00ea80a0 */
uint F_00ea80a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xea80a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(int *)((int)this + 8) == 7) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4)),param_1,REFG(undefined4, 0x108cc50));
    F_0042ccf0(*(undefined * PTR32 *)((int)this + 0x10),((undefined1 *)(gen_frame + 0x4)));
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  }
  else {
    F_00ea7c20(this);
    *(undefined4 *)((int)this + 8) = 7;
    this_00 = (undefined *)F_004069f0(0x54);
    if (this_00 == (undefined *)0x0) {
      this_00 = (undefined *)0x0;
    }
    else {
      F_0042cc20(this_00,param_1,REFG(undefined4, 0x108cc50));
    }
    *(undefined * PTR32 *)((int)this + 0x10) = this_00;
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)this;
}

/* ref: FUN_00ea8130 */
uint F_00ea8130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xea8130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(int *)((int)this + 8) == 8) {
    *(undefined4 *)((int)this + 0x10) = param_1;
    return (uint)this;
  }
  F_00ea7c20(this);
  *(undefined4 *)((int)this + 8) = 8;
  *(undefined4 *)((int)this + 0x10) = param_1;
  return (uint)this;
}

/* ref: FUN_00ea8170 */
uint F_00ea8170(unsigned int gen_a0)
{
  GEN_ENTER(0xea8170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 8) != 0) {
    F_00ea7c20(this);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  return (uint)this;
}

/* ref: FUN_00ea8190 */
uint F_00ea8190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xea8190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  F_00ea7c20(param_1);
  uVar1 = *(uint *)((int)this + 8);
  *(uint *)((int)param_1 + 8) = uVar1;
  *(undefined4 *)((int)param_1 + 0x10) = *(undefined4 *)((int)this + 0x10);
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00ea81c0 */
uint F_00ea81c0(unsigned int gen_a0)
{
  GEN_ENTER(0xea81c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 8) != 5) {
    F_00ea7c20(this);
    *(undefined4 *)((int)this + 8) = 5;
    pvVar1 = (undefined *)F_004069f0(0x10);
    if (pvVar1 == (undefined *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_00ed08c0(pvVar1);
    }
    *(uint *)((int)this + 0x10) = uVar2;
  }
  pvVar1 = *(undefined * PTR32 *)((int)this + 0x10);
  F_00eca9b0(pvVar1,*((undefined4 *)GEN_TOP((*(int *)((int)pvVar1 + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)pvVar1 + 4) + 4))) = *(int *)((int)pvVar1 + 4);
  *(undefined4 *)*(undefined4 *)((int)pvVar1 + 4) = *(undefined4 *)((int)pvVar1 + 4);
  *((int *)GEN_TOP((*(int *)((int)pvVar1 + 4) + 8))) = *(int *)((int)pvVar1 + 4);
  *(undefined4 *)((int)pvVar1 + 8) = 0;
  return (uint)this;
}

/* ref: FUN_00ea8220 */
uint F_00ea8220(unsigned int gen_a0)
{
  GEN_ENTER(0xea8220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 8) != 6) {
    F_00ea7c20(this);
    *(undefined4 *)((int)this + 8) = 6;
    puVar1 = (undefined4 *)F_004069f0(0x10);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    *(undefined4 * PTR32 *)((int)this + 0x10) = puVar1;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x10);
  F_00ecd540(puVar1,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*puVar1,puVar1[1]);
  return (uint)this;
}

/* ref: FUN_00ea8280 */
uint F_00ea8280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xea8280u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ea6520(param_1,param_2,0);
  return uVar1;
}

/* ref: FUN_00ea82a0 */
byte F_00ea82a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xea82a0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined * pvVar1;
  byte bVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  pvVar1 = (*(undefined * PTR32 *)&gen_args[2]);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 8))) != 6) {
    F_00ea7c20((*(undefined * PTR32 *)&gen_args[2]));
    *(undefined4 *)((int)pvVar1 + 8) = 6;
    puVar3 = (undefined4 *)F_004069f0(0x10);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
    }
    *(undefined4 * PTR32 *)((int)pvVar1 + 0x10) = puVar3;
  }
  puVar3 = *(undefined4 * PTR32 *)((int)pvVar1 + 0x10);
  F_00ecd540(puVar3,&(*(undefined * PTR32 *)&gen_args[2]),*puVar3,puVar3[1]);
  if (((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) == 4) &&
      (uVar4 = F_00ea46c0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1])), (char)uVar4 != '\0')) &&
     ((*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) == 5 ||
      ((bVar2 = F_00ea9940((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),pvVar1), bVar2 != 0 && (*((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) == 5)))
      ))) {
    uVar4 = F_00ea46c0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
    return (char)uVar4 != '\0';
  }
  return 0;
}

/* ref: FUN_00ea8350 */
uint F_00ea8350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xea8350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  F_00ea7d20(this,param_1);
  return (uint)this;
}

/* ref: FUN_00ea8380 */
uint F_00ea8380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xea8380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if (*(int *)((int)this + 8) == 0) {
    *(undefined4 *)((int)this + 8) = 5;
    this_00 = (undefined *)F_004069f0(0x10);
    if (this_00 != (undefined *)0x0) {
      uVar1 = F_00ed08c0(this_00);
      *(uint *)((int)this + 0x10) = uVar1;
      uVar1 = F_00ed1020(*(undefined * PTR32 *)((int)this + 0x10),param_1);
      return uVar1;
    }
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  else if (*(int *)((int)this + 8) != 5) {
    return (uint)this;
  }
  uVar1 = F_00ed1020(*(undefined * PTR32 *)((int)this + 0x10),param_1);
  return uVar1;
}

/* ref: FUN_00ea83e0 */
uint F_00ea83e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xea83e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  if (*(int *)((int)this + 8) != 6) {
    F_00ea7c20(this);
    *(undefined4 *)((int)this + 8) = 6;
    puVar1 = (undefined4 *)F_004069f0(0x10);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    *(undefined4 * PTR32 *)((int)this + 0x10) = puVar1;
  }
  F_00ed1140(*(undefined * PTR32 *)((int)this + 0x10),param_1);
  return (uint)this;
}

/* ref: FUN_00ea8430 */
uint F_00ea8430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xea8430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ed11f0(*(undefined * PTR32 *)((int)this + 0x10),param_1);
  return (uint)this;
}

/* ref: FUN_00ea8450 */
uint F_00ea8450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xea8450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  undefined * this_00;
  int * piVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  F_00ea81c0(this);
  piVar6 = *(int * PTR32 *)(param_1 + 8);
  piVar7 = (int *)*piVar6;
  if (piVar7 != piVar6) {
    do {
      if (*(int *)((int)this + 8) == 0) {
        *(undefined4 *)((int)this + 8) = 5;
        uVar4 = F_004069f0(0x10);
        if (uVar4 == 0) {
          uVar4 = 0;
        }
        else {
          *(undefined4 *)(uVar4 + 8) = 0;
          uVar5 = F_004069f0(0x88);
          if (uVar5 == 0) {
            (*(undefined4 *)(gen_frame + 0x10)) = 0;
            (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
            F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
          }
          *(uint *)(uVar4 + 4) = uVar5;
          *(uint *)uVar5 = uVar5;
          *((int *)GEN_TOP((*(int *)(uVar4 + 4) + 4))) = *(int *)(uVar4 + 4);
          *((int *)GEN_TOP((*(int *)(uVar4 + 4) + 8))) = *(int *)(uVar4 + 4);
          *((undefined1 *)GEN_TOP((*(int *)(uVar4 + 4) + 0x80))) = 1;
          *((undefined1 *)GEN_TOP((*(int *)(uVar4 + 4) + 0x81))) = 1;
        }
        *(uint *)((int)this + 0x10) = uVar4;
LAB_00ea84e7: ;
        this = (undefined *)F_00ed1020(*(undefined * PTR32 *)((int)this + 0x10),piVar7 + 3);
      }
      else if (*(int *)((int)this + 8) == 5) goto LAB_00ea84e7;
      (*(int * PTR32 *)(gen_frame + 0x14)) = piVar7 + 0x18;
      if (*(int *)((int)this + 8) == 4) {
        piVar6 = (int *)F_0042ccf0(*(undefined * PTR32 *)((int)this + 0x10),piVar7 + 0x18);
      }
      else {
        F_00ea7c20(this);
        *(undefined4 *)((int)this + 8) = 4;
        this_00 = (undefined *)F_004069f0(0x54);
        if (this_00 == (undefined *)0x0) {
          this_00 = (undefined *)0x0;
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = (int *)F_0042cbc0(this_00,(*(int * PTR32 *)(gen_frame + 0x14)));
        }
        *(undefined * PTR32 *)((int)this + 0x10) = this_00;
      }
      if (*(char *)((int)piVar7 + 0xb5) == '\0') {
        piVar6 = (int *)piVar7[2];
        if (*(char *)((int)piVar6 + 0xb5) == '\0') {
          cVar1 = *(char *)(*piVar6 + 0xb5);
          piVar7 = piVar6;
          piVar6 = (int *)*piVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar6 + 0xb5);
            piVar7 = piVar6;
            piVar6 = (int *)*piVar6;
          }
        }
        else {
          cVar1 = *(char *)(piVar7[1] + 0xb5);
          piVar3 = (int *)piVar7[1];
          piVar2 = piVar7;
          while ((piVar6 = piVar3, piVar7 = piVar6, cVar1 == '\0' && (piVar2 == (int *)piVar6[2])))
          {
            cVar1 = *(char *)(piVar6[1] + 0xb5);
            piVar3 = (int *)piVar6[1];
            piVar2 = piVar6;
          }
        }
      }
      this = (*(undefined * PTR32 *)(gen_frame + 0x18));
    } while (piVar7 != *(int * PTR32 *)(param_1 + 8));
  }
  return (uint)piVar6;
}

/* ref: FUN_00ea8a10 */
uint F_00ea8a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xea8a10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined * pvVar4;
  ulonglong uVar5;
  undefined * PTR32 * PTR32 * this_00;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  piVar1 = *(int * PTR32 *)this;
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = param_2;
  pvVar4 = param_2;
  if (piVar1[1] == 10) {
    puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1)));
    if (0xf < (uint)puVar2[5]) {
      puVar2 = (undefined4 *)*puVar2;
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x24)),puVar2,REFG(undefined4, 0x108cc50));
    uVar3 = F_00ea46c0(this,param_1);
    if (((char)uVar3 != '\0') && (*(int *)(*(int *)this + 4) == 1)) {
      uVar3 = F_00ea46c0(this,param_1);
      if ((char)uVar3 != '\0') {
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        ((undefined * PTR32 * PTR32 *)(gen_frame + 0x8))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
        uVar3 = F_00ea96e0(this,param_1,((undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
        this_00 = ((undefined * PTR32 * PTR32 *)(gen_frame + 0x8));
        if ((char)uVar3 != '\0') {
          pvVar4 = (undefined *)F_00ea8380((*(undefined * PTR32 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x24)));
          F_00ea7d20(pvVar4,this_00);
          ((undefined * PTR32 * PTR32 *)(gen_frame + 0x8))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
          F_00ea7c20(((undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
          uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x24)));
          F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
          return CONCAT31((int3)(uVar5 >> 8),1);
        }
        ((undefined * PTR32 * PTR32 *)(gen_frame + 0x8))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
        F_00ea7c20(this_00);
      }
    }
    uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x24)));
    pvVar4 = (undefined *)uVar5;
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return (uint)pvVar4 & 0xffffff00;
}

/* ref: FUN_00ea8b00 */
uint F_00ea8b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xea8b00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x670];
  undefined4 uVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * pppppuVar4;
  undefined * pvVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  
  (*(uint *)(gen_frame + 0x668)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x66c);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = param_2;
  (*(uint *)(gen_frame + 0x24)) = 0;
  uVar2 = F_00ec0810(param_1);
  if (uVar2 != 0xffffffff) {
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x38)) + 0)) = (char)uVar2;
    (*(undefined4 *)(gen_frame + 0x38)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x38)), 1, 3),(char)uVar2);
  }
  if ((char)(*(undefined4 *)(gen_frame + 0x38)) == 'L') {
    F_00ebf460(param_1,&(*(int *)(gen_frame + 0x30)));
    if ((param_3 == -1) && (param_4 == 0)) {
      param_3 = (*(int *)(gen_frame + 0x30));
    }
    uVar2 = F_00ec0810(param_1);
    if (uVar2 != 0xffffffff) {
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x38)) + 0)) = (char)uVar2;
      (*(undefined4 *)(gen_frame + 0x38)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x38)), 1, 3),(char)uVar2);
    }
  }
  (*(int *)(gen_frame + 0x2c)) = 0;
  F_00ebf460(param_1,&(*(int *)(gen_frame + 0x2c)));
  ((undefined1 *)(gen_frame + 0x268))[0] = 0;
  F_00c48350(((undefined1 *)(gen_frame + 0x268)) + 1,0,0x3ff);
  uVar2 = F_00ec0810(param_1);
  if (uVar2 != 0xffffffff) {
    (*(char *)(gen_frame + 0x53)) = (char)uVar2;
  }
  F_00ebf460(param_1,&(*(int *)(gen_frame + 0x44)));
  if ((param_3 < 0) || (param_4 < param_3)) {
    F_00ea7c20(param_2);
    iVar6 = (*(int *)(gen_frame + 0x2c));
    if ((char)(*(undefined4 *)(gen_frame + 0x38)) == 'A') {
      F_00ea81c0(param_2);
    }
    else if ((*(int *)(gen_frame + 0x2c)) == 0) {
      F_00ea8220(param_2);
    }
    else {
      F_00ea83e0(param_2,(*(int *)(gen_frame + 0x2c)),(*(int *)(gen_frame + 0x2c)) >> 0x1f);
    }
    F_0042b630(((undefined1 *)(gen_frame + 0x1f8)));
    (*(int *)(gen_frame + 0x44)) = 0;
    pvVar3 = param_2;
    if (0 < iVar6) {
      do {
        if ((char)(*(undefined4 *)(gen_frame + 0x38)) == 'A') {
          uVar2 = F_00ec0810(param_1);
          if (uVar2 != 0xffffffff) {
            (*(char *)(gen_frame + 0x53)) = (char)uVar2;
          }
          (*(int *)(gen_frame + 0x34)) = 0;
          F_00ebf600(param_1,&(*(int *)(gen_frame + 0x34)));
          if ((*(char *)(gen_frame + 0x53)) == 'K') {
            uVar2 = F_00ec0810(param_1);
            if (uVar2 != 0xffffffff) {
              (*(char *)(gen_frame + 0x53)) = (char)uVar2;
            }
            F_00ebfa80(param_1,((undefined1 *)(gen_frame + 0x268)),(*(int *)(gen_frame + 0x34)),0);
            ((undefined1 *)(gen_frame + 0x268))[(int)((*(int *)(gen_frame + 0x34)))] = 0;
            F_0042cc20(((undefined1 *)(gen_frame + 0xa8)),((undefined1 *)(gen_frame + 0x268)),REFG(undefined4, 0x108cc50));
            if (*(int *)((int)pvVar3 + 8) == 0) {
              *(undefined4 *)((int)pvVar3 + 8) = 5;
              pvVar5 = (undefined *)F_004069f0(0x10);
              if (pvVar5 == (undefined *)0x0) {
                uVar2 = 0;
              }
              else {
                uVar2 = F_00ed08c0(pvVar5);
              }
              *(uint *)((int)pvVar3 + 0x10) = uVar2;
            }
            else if (*(int *)((int)pvVar3 + 8) != 5) {
              F_0042c880(((undefined1 *)(gen_frame + 0xa8)));
              pvVar5 = pvVar3;
              goto LAB_00ea8fca;
            }
            pvVar5 = (undefined *)F_00ed1020(*(undefined * PTR32 *)((int)pvVar3 + 0x10),((undefined1 *)(gen_frame + 0xa8)));
            F_0042c880(((undefined1 *)(gen_frame + 0xa8)));
          }
          else {
            if ((*(char *)(gen_frame + 0x53)) != 'E') goto switchD_00ea8ff6_caseD_42;
            uVar2 = F_00ec0810(param_1);
            if (uVar2 != 0xffffffff) {
              (*(char *)(gen_frame + 0x53)) = (char)uVar2;
            }
            F_00ebfa80(param_1,((undefined1 *)(gen_frame + 0x268)),(*(int *)(gen_frame + 0x34)),0);
            ((undefined1 *)(gen_frame + 0x268))[(int)((*(int *)(gen_frame + 0x34)))] = 0;
            F_00ea4890(((char * PTR32 *)(gen_frame + 0xfc)),((undefined1 *)(gen_frame + 0x268)),(*(int *)(gen_frame + 0x34)));
            if (*((char * PTR32 *)(gen_frame + 0xfc))[0] == '\0') {
              F_0042c880(((char * PTR32 *)(gen_frame + 0xfc)));
              goto switchD_00ea8ff6_caseD_42;
            }
            pvVar5 = (undefined *)F_00ea8380(pvVar3,((char * PTR32 *)(gen_frame + 0xfc)));
            F_0042c880(((char * PTR32 *)(gen_frame + 0xfc)));
          }
        }
        else {
          pvVar5 = (undefined *)F_00e9e450(pvVar3,(*(int *)(gen_frame + 0x44)),(*(int *)(gen_frame + 0x44)) >> 0x1f);
        }
LAB_00ea8fca: ;
        uVar2 = F_00ec0810(param_1);
        if (uVar2 != 0xffffffff) {
          (*(char *)(gen_frame + 0x53)) = (char)uVar2;
        }
        switch((unsigned int)(uintptr_t)((*(char *)(gen_frame + 0x53)))) {
        case 'A': ;
          F_00ebfc90(param_1);
          goto LAB_00ea9406;
        default: ;
          goto switchD_00ea8ff6_caseD_42;
        case 'D': ;
          (*(int *)(gen_frame + 0x30)) = 0;
          F_00ebf900(param_1,&(*(int *)(gen_frame + 0x30)));
          (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x30));
          if (*(int *)((int)pvVar5 + 8) != 2) {
            F_00ea7c20(pvVar5);
            *(undefined4 *)((int)pvVar5 + 8) = 2;
          }
          *(int *)((int)pvVar5 + 0x10) = (*(int *)(gen_frame + 0x1c));
          break;
        case 'E': ;
          (*(int *)(gen_frame + 0x4c)) = 0;
          F_00ebf600(param_1,&(*(int *)(gen_frame + 0x4c)));
          uVar2 = F_00ec0810(param_1);
          if (uVar2 != 0xffffffff) {
            (*(char *)(gen_frame + 0x53)) = (char)uVar2;
          }
          uVar2 = (*(int *)(gen_frame + 0x4c)) + 1;
          if (uVar2 < 0x400) {
            F_00ebfa80(param_1,((undefined1 *)(gen_frame + 0x268)),(*(int *)(gen_frame + 0x4c)),0);
            ((undefined1 *)(gen_frame + 0x268))[(int)((*(int *)(gen_frame + 0x4c)))] = 0;
            uVar2 = F_00ea4890(((undefined1 *)(gen_frame + 0x54)),((undefined1 *)(gen_frame + 0x268)),(*(int *)(gen_frame + 0x4c)));
            F_00ea7f50(pvVar5,uVar2);
            F_0042c880(((undefined1 *)(gen_frame + 0x54)));
            F_0042ccf0(((undefined1 *)(gen_frame + 0x1f8)),*(undefined4 *)((int)pvVar5 + 0x10));
            pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x28));
          }
          else {
            pvVar3 = (undefined *)0x0;
            (*(undefined * PTR32 *)(gen_frame + 0x258)) = (undefined *)0x0;
            (*(uint *)(gen_frame + 0x25c)) = 0;
            (*(uint *)(gen_frame + 0x260)) = 0;
            if (uVar2 != 0) {
              if ((uVar2 != 0) && (pvVar3 = (undefined *)F_004069f0(uVar2), pvVar3 == (undefined *)0x0)) {
LAB_00ea947b: ;
                (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x3c)) + 4)) = 0;
                (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x3c)) + 0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                (*(undefined8 *)(gen_frame + 0x3c)) = 0x1090534;
                    
                F_0046e060(&(*(undefined8 *)(gen_frame + 0x3c)));
              }
              (*(undefined * PTR32 *)(gen_frame + 0x258)) = pvVar3;
              (*(uint *)(gen_frame + 0x24)) = (int)pvVar3 + uVar2;
              (*(uint *)(gen_frame + 0x260)) = (int)pvVar3 + uVar2;
              if (uVar2 != 0) {
                F_00c48350(pvVar3,0,uVar2);
              }
              (*(uint *)(gen_frame + 0x25c)) = (*(uint *)(gen_frame + 0x24));
            }
            pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x258));
            F_00ebfa80(param_1,(*(undefined * PTR32 *)(gen_frame + 0x258)),(*(int *)(gen_frame + 0x4c)),0);
            uVar2 = F_00ea4890(&(*(undefined4 *)(gen_frame + 0x1a4)),pvVar3,(*(int *)(gen_frame + 0x4c)));
            F_00ea7f50(pvVar5,uVar2);
            F_0042c880(&(*(undefined4 *)(gen_frame + 0x1a4)));
            F_00c2e6f0(&(*(undefined * PTR32 *)(gen_frame + 0x258)));
            F_0042ccf0(((undefined1 *)(gen_frame + 0x1f8)),*(undefined4 *)((int)pvVar5 + 0x10));
            pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x28));
          }
          break;
        case 'F': ;
          if (*(int *)((int)pvVar5 + 8) != 3) {
            F_00ea7c20(pvVar5);
            *(undefined4 *)((int)pvVar5 + 8) = 3;
          }
          *(undefined1 *)((int)pvVar5 + 0x10) = 0;
          break;
        case 'I': ;
          (*(undefined8 *)(gen_frame + 0x3c)) = 0;
          F_00ebf780(param_1,&(*(undefined8 *)(gen_frame + 0x3c)));
          uVar1 = (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x3c)) + 4));
          uVar9 = (undefined * PTR32 *)(*(undefined8 *)(gen_frame + 0x3c));
          if (*(int *)((int)pvVar5 + 8) != 1) {
            F_00ea7c20(pvVar5);
            *(undefined4 *)((int)pvVar5 + 8) = 1;
          }
          *(undefined4 *)((int)pvVar5 + 0x10) = uVar9;
          *(undefined4 *)((int)pvVar5 + 0x14) = uVar1;
          pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x28));
          break;
        case 'N': ;
          break;
        case 'O': ;
          F_00ec39e0(param_1,&(*(undefined1 *)(gen_frame + 0x4b)));
          ((undefined1 *)(gen_frame + 0x268))[0] = (*(undefined1 *)(gen_frame + 0x4b));
          ((undefined1 *)(gen_frame + 0x268))[1] = 0;
          F_00ea7fb0(pvVar5,((undefined1 *)(gen_frame + 0x268)));
          F_0042ccf0(((undefined1 *)(gen_frame + 0x1f8)),*(undefined4 *)((int)pvVar5 + 0x10));
          break;
        case 'R': ;
          F_00ea7f50(pvVar5,((undefined1 *)(gen_frame + 0x1f8)));
          break;
        case 'S': ;
          (*(int *)(gen_frame + 0x4c)) = 0;
          F_00ebf600(param_1,&(*(int *)(gen_frame + 0x4c)));
          uVar2 = F_00ec0810(param_1);
          if (uVar2 != 0xffffffff) {
            (*(char *)(gen_frame + 0x53)) = (char)uVar2;
          }
          uVar2 = (*(int *)(gen_frame + 0x4c)) + 1;
          if (uVar2 < 0x400) {
            F_00ebfa80(param_1,((undefined1 *)(gen_frame + 0x268)),(*(int *)(gen_frame + 0x4c)),0);
            ((undefined1 *)(gen_frame + 0x268))[(int)((*(int *)(gen_frame + 0x4c)))] = 0;
            F_00ea7fb0(pvVar5,((undefined1 *)(gen_frame + 0x268)));
            F_0042ccf0(((undefined1 *)(gen_frame + 0x1f8)),*(undefined4 *)((int)pvVar5 + 0x10));
            pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x28));
          }
          else {
            pvVar3 = (undefined *)0x0;
            (*(undefined * PTR32 *)(gen_frame + 0xc)) = (undefined *)0x0;
            (*(uint *)(gen_frame + 0x10)) = 0;
            (*(uint *)(gen_frame + 0x14)) = 0;
            if (uVar2 != 0) {
              if ((uVar2 != 0) && (pvVar3 = (undefined *)F_004069f0(uVar2), pvVar3 == (undefined *)0x0))
              goto LAB_00ea947b;
              (*(undefined * PTR32 *)(gen_frame + 0xc)) = pvVar3;
              (*(uint *)(gen_frame + 0x24)) = (int)pvVar3 + uVar2;
              (*(uint *)(gen_frame + 0x14)) = (int)pvVar3 + uVar2;
              if (uVar2 != 0) {
                F_00c48350(pvVar3,0,uVar2);
              }
              (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x24));
            }
            pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0xc));
            F_00ebfa80(param_1,(*(undefined * PTR32 *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x4c)),0);
            F_00ea7fb0(pvVar5,pvVar3);
            F_00c2e6f0(&(*(undefined * PTR32 *)(gen_frame + 0xc)));
            F_0042ccf0(((undefined1 *)(gen_frame + 0x1f8)),*(undefined4 *)((int)pvVar5 + 0x10));
            pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x28));
          }
          break;
        case 'T': ;
          if (*(int *)((int)pvVar5 + 8) != 3) {
            F_00ea7c20(pvVar5);
            *(undefined4 *)((int)pvVar5 + 8) = 3;
          }
          *(undefined1 *)((int)pvVar5 + 0x10) = 1;
          break;
        case 'V': ;
          F_00ebfc90(param_1);
LAB_00ea9406: ;
          uVar2 = F_00ea8b00((*(undefined * PTR32 *)(gen_frame + 0x20)),param_1,pvVar5,param_3,param_4 + 1);
          if ((char)uVar2 == '\0') {
switchD_00ea8ff6_caseD_42: ;
            uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x1f8)));
            F_00c47745((*(uint *)(gen_frame + 0x668)) ^ (uint)(uint)(gen_frame + 0x66c));
            return (uint)(uint3)(uVar7 >> 8) << 8;
          }
          break;
        case 'Z': ;
          F_00ea7fb0(pvVar5,&REFG(undefined1, 0x107fc63));
          F_0042ccf0(((undefined1 *)(gen_frame + 0x1f8)),*(undefined4 *)((int)pvVar5 + 0x10));
        }
        iVar6 = (*(int *)(gen_frame + 0x44)) + 1;
        (*(int *)(gen_frame + 0x44)) = iVar6;
      } while (iVar6 < (*(int *)(gen_frame + 0x2c)));
    }
    uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x1f8)));
    uVar2 = (uint)uVar7;
  }
  else {
    ((undefined * PTR32 *)(gen_frame + 0x150))[0] = &REFG(undefined, 0x115d674);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x160))[0] = (undefined * PTR32 *)&REFG(undefined, 0x115d66c);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x1b0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x115772c));
    (*(undefined8 *)(gen_frame + 0x158)) = 0;
    F_00483f60(((undefined * PTR32 * PTR32 *)(gen_frame + 0x1b0)),((undefined * PTR32 * PTR32 *)(gen_frame + 0x160)) + 2,0);
    *(undefined * PTR32 * PTR32 *)((int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x160)) + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x160))[0][1]) =
         (*(undefined * PTR32 (*)[1])REFP(0x109105c));
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)((undefined * PTR32 *)(gen_frame + 0x150)) + *(int *)(((undefined * PTR32 *)(gen_frame + 0x150))[0] + 4)))) =
         (*(undefined * PTR32 (*)[1])REFP(0x1159a68));
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)((undefined * PTR32 *)(gen_frame + 0x150)) + *(int *)(((undefined * PTR32 *)(gen_frame + 0x150))[0] + 4)))) =
         (*(undefined * PTR32 (*)[1])REFP(0x115d014));
    F_00479880(((undefined * PTR32 * PTR32 *)(gen_frame + 0x160)) + 2);
    iVar6 = (*(int *)(gen_frame + 0x44));
    uVar9 = 0x3a;
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x160))[2] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
    (*(undefined4 *)(gen_frame + 0x1a4)) = 0;
    (*(undefined4 *)(gen_frame + 0x1a8)) = 0;
    iVar8 = (*(int *)(gen_frame + 0x2c));
    iVar10 = (*(int *)(gen_frame + 0x44));
    pvVar3 = (undefined *)F_00ec3090(((undefined * PTR32 * PTR32 *)(gen_frame + 0x160)),(*(undefined4 *)(gen_frame + 0x38)));
    uVar2 = F_00ebef40(pvVar3,iVar8);
    pvVar3 = (undefined *)F_00ec3090(uVar2,uVar9);
    F_00ebef40(pvVar3,iVar10);
    uVar2 = iVar6 + 1;
    if (uVar2 < 0x400) {
      F_00ebfa80(param_1,((undefined1 *)(gen_frame + 0x268)),iVar6,iVar6 >> 0x1f);
      ((undefined1 *)(gen_frame + 0x268))[(int)(iVar6)] = 0;
      F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x160)),((undefined1 *)(gen_frame + 0x268)));
    }
    else {
      pvVar3 = (undefined *)0x0;
      if (uVar2 != 0) {
        pvVar3 = (undefined *)0x0;
        if ((uVar2 != 0) && (pvVar3 = (undefined *)F_004069f0(uVar2), pvVar3 == (undefined *)0x0)) {
          (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x3c)) + 4)) = 0;
          (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x3c)) + 0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
          (*(undefined8 *)(gen_frame + 0x3c)) = 0x1090534;
                    
          F_0046e060(&(*(undefined8 *)(gen_frame + 0x3c)));
        }
        if (uVar2 != 0) {
          F_00c48350(pvVar3,0,uVar2);
        }
      }
      F_00ebfa80(param_1,pvVar3,(*(int *)(gen_frame + 0x44)),(*(int *)(gen_frame + 0x44)) >> 0x1f);
      F_00a17dc0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x160)),pvVar3);
      if (pvVar3 != (undefined *)0x0) {
        F_00406ad0(pvVar3);
      }
    }
    F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0x160)) + 2,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24c)));
    pppppuVar4 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24c))[0];
    if ((*(uint *)(gen_frame + 0x260)) < 0x10) {
      pppppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24c));
    }
    F_00ea80a0((*(undefined * PTR32 *)(gen_frame + 0x28)),pppppuVar4);
    if (0xf < (*(uint *)(gen_frame + 0x260))) {
      F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x24c))[0]);
    }
    uVar2 = F_00eb6ea0(((undefined * PTR32 *)(gen_frame + 0x150)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x668)) ^ (uint)(uint)(gen_frame + 0x66c));
  return CONCAT31((int3)(uVar2 >> 8),1);
}

/* ref: FUN_00ea94f0 */
uint F_00ea94f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xea94f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  undefined4 * puVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar1 = *(uint *)((int)param_2 + 0xc);
  if ((int)uVar1 < 1) {
    if (*(int *)((int)param_1 + 8) != 0) {
      uVar1 = F_00ea7c20(param_1);
      *(undefined4 *)((int)param_1 + 8) = 0;
    }
    *(undefined4 *)((int)param_1 + 0x10) = 0;
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return uVar1;
  }
  if (uVar1 == 1) {
    uVar1 = F_00ea7f50(param_1,**(int * PTR32 *)((int)param_2 + 8) + 0x60);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return uVar1;
  }
  F_0042cbc0(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined * PTR32, 0x12fd328));
  puVar2 = (undefined4 *)F_00ea4260(param_2,0,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  if (*(char *)*puVar2 == '\0') {
    uVar1 = F_00ea8450(param_1,param_2);
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return uVar1;
  }
  uVar1 = F_00ea85d0(param_1,param_2);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_00ea95c0 */
uint F_00ea95c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xea95c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  F_00ea94f0(this,param_1);
  return (uint)this;
}

/* ref: FUN_00ea95f0 */
byte F_00ea95f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xea95f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  uint uVar2;
  
  uVar2 = F_00ea8a10(this,param_1,param_2);
  cVar1 = (char)uVar2;
  while( true ) {
    if (cVar1 == '\0') {
      return 0;
    }
    if (*(int *)(*(int *)this + 4) != 0) {
      return 1;
    }
    uVar2 = F_00ea46c0(this,param_1);
    if ((char)uVar2 == '\0') {
      return 0;
    }
    if (*(int *)(*(int *)this + 4) == 3) break;
    uVar2 = F_00ea8a10(this,param_1,param_2);
    cVar1 = (char)uVar2;
  }
  return 1;
}

/* ref: FUN_00ea9650 */
byte F_00ea9650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xea9650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  byte bVar1;
  uint uVar2;
  
  F_00ea81c0(param_2);
  if (*(int *)(*(int *)this + 4) != 2) {
    return 0;
  }
  uVar2 = F_00ea46c0(this,param_1);
  if ((char)uVar2 != '\0') {
    if (*(int *)(*(int *)this + 4) == 3) {
      uVar2 = F_00ea46c0(this,param_1);
      return (char)uVar2 != '\0';
    }
    bVar1 = F_00ea95f0(this,param_1,param_2);
    if ((bVar1 != 0) && (*(int *)(*(int *)this + 4) == 3)) {
      uVar2 = F_00ea46c0(this,param_1);
      if ((char)uVar2 == '\0') {
        return *(int *)((int)this + 0xb0) == 0;
      }
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00ea9940 */
byte F_00ea9940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xea9940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint * this_00;
  undefined * PTR32 * PTR32 * pppuVar1;
  undefined * PTR32 * PTR32 * pppuVar2;
  undefined4 * puVar3;
  char cVar4;
  uint uVar5;
  
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[2] = (undefined * PTR32 *)0x0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(int * PTR32 *)(gen_frame + 0x18)) = this;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  uVar5 = F_00ea96e0(this,param_1,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  cVar4 = (char)uVar5;
  while (cVar4 != '\0') {
    this_00 = *(uint * PTR32 *)(param_2 + 0x10);
    pppuVar1 = (undefined * PTR32 * PTR32 *)this_00[1];
    if (((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) < pppuVar1) {
      pppuVar2 = (undefined * PTR32 * PTR32 *)*this_00;
      if (((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) < pppuVar2) goto LAB_00ea99dc;
      if (pppuVar1 == (undefined * PTR32 * PTR32 *)this_00[2]) {
        F_00ed0f60(this_00,1);
      }
      uVar5 = *this_00;
      puVar3 = (undefined4 *)this_00[1];
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
        puVar3[2] = 0;
        puVar3[4] = 0;
        F_00ea7d20(puVar3,uVar5 + (((int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) - (int)pppuVar2) / 0x18) * 0x18);
      }
      this_00[1] = this_00[1] + 0x18;
      this = (*(int * PTR32 *)(gen_frame + 0x18));
    }
    else {
LAB_00ea99dc: ;
      if (pppuVar1 == (undefined * PTR32 * PTR32 *)this_00[2]) {
        F_00ed0f60(this_00,1);
      }
      puVar3 = (undefined4 *)this_00[1];
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
        puVar3[2] = 0;
        puVar3[4] = 0;
        F_00ea7d20(puVar3,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      }
      this_00[1] = this_00[1] + 0x18;
    }
    if (*(int *)(*(int *)this + 4) != 0) {
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
LAB_00ea9a7e: ;
      ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
      F_00ea7c20(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
      return 1;
    }
    uVar5 = F_00ea46c0(this,param_1);
    if ((char)uVar5 == '\0') break;
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    if (*(int *)(*(int *)this + 4) == 5) goto LAB_00ea9a7e;
    F_00ea7c20(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[2] = (undefined * PTR32 *)0x0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    uVar5 = F_00ea96e0(this,param_1,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
    cVar4 = (char)uVar5;
  }
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1159a34));
  F_00ea7c20(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  return 0;
}

/* ref: FUN_00ea9a90 */
uint F_00ea9a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xea9a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  uVar2 = F_00ea46c0(this,param_1);
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  bVar1 = F_00ea9650(this,param_1,param_2);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00ea9ac0 */
uint F_00ea9ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xea9ac0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  int iVar1;
  byte bVar2;
  undefined * this;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  F_00ea7c20(param_2);
  this = (undefined *)F_00e9e530(((undefined1 *)(gen_frame + 0x10)));
  uVar3 = F_00ea46c0(this,param_1);
  if ((char)uVar3 == '\0') {
    bVar2 = 0;
  }
  else {
    bVar2 = F_00ea9650(this,param_1,param_2);
  }
  F_00e9e610(((undefined1 *)(gen_frame + 0x10)));
  if (bVar2 == 0) {
    iVar1 = *(int *)(*param_1 + 4);
    uVar3 = (uint)(*(int *)(iVar1 + 0x38 + (int)param_1) == 0) * 4 + 2;
    *(uint *)(iVar1 + 0xc + (int)param_1) = uVar3;
    uVar3 = *(uint *)(iVar1 + 0x10 + (int)param_1) & uVar3;
    if (uVar3 == 0) goto LAB_00ea9bce;
    if ((uVar3 & 4) == 0) {
      if ((uVar3 & 2) != 0) {
        uVar3 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::failbit set";
        goto LAB_00ea9b5d;
      }
      goto LAB_00ea9b99;
    }
  }
  else {
    iVar1 = *(int *)(*param_1 + 4);
    uVar3 = (-(uint)(*(int *)(iVar1 + 0x38 + (int)param_1) != 0) & 0xfffffffc) + 4 & 0x17;
    *(uint *)(iVar1 + 0xc + (int)param_1) = uVar3;
    uVar3 = *(uint *)(iVar1 + 0x10 + (int)param_1) & uVar3;
    if (uVar3 == 0) {
LAB_00ea9bce: ;
      F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
      return (uint)param_1;
    }
    if ((uVar3 & 4) == 0) {
LAB_00ea9b99: ;
      uVar3 = F_00c46280();
      (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::eofbit set";
      goto LAB_00ea9b5d;
    }
  }
  uVar3 = F_00c46280();
  (*(char * PTR32 *)(gen_frame + 0x4)) = "ios_base::badbit set";
LAB_00ea9b5d: ;
  (*(undefined4 *)(gen_frame + 0x8)) = 1;
  (*(uint *)(gen_frame + 0xc)) = uVar3;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
}

/* ref: FUN_00ea9c10 */
uint F_00ea9c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xea9c10u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined * pvVar4;
  int * piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  F_00ea7c20(param_2);
  uVar3 = F_00ec0810(param_1);
  bVar2 = (byte)uVar3;
  if (uVar3 == 0xffffffff) {
    bVar2 = (*(byte *)(gen_frame + 0x1f));
  }
  F_00ebfc90(param_1);
  (*(byte *)(gen_frame + 0x1f)) = 0;
  if ((bVar2 == 'A') || (bVar2 == 'L')) {
    uVar7 = 0;
    uVar6 = 0xffffffff;
    (*(byte *)(gen_frame + 0x1f)) = 1;
    piVar5 = param_1;
    pvVar4 = (undefined *)F_00e9e530(((undefined1 *)(gen_frame + 0x20)));
    uVar3 = F_00ea8b00(pvVar4,piVar5,param_2,uVar6,uVar7);
    bVar2 = (byte)uVar3;
  }
  else {
    pvVar4 = (undefined *)F_00e9e530(((undefined1 *)(gen_frame + 0x20)));
    uVar3 = F_00ea46c0(pvVar4,param_1);
    if ((char)uVar3 == '\0') {
      bVar2 = 0;
    }
    else {
      bVar2 = F_00ea9650(pvVar4,param_1,param_2);
    }
  }
  F_00e9e610(((undefined1 *)(gen_frame + 0x20)));
  if (bVar2 == 0) {
    iVar1 = *(int *)(*param_1 + 4);
    uVar3 = (uint)(*(int *)(iVar1 + 0x38 + (int)param_1) == 0) * 4 + 2;
    *(uint *)(iVar1 + 0xc + (int)param_1) = uVar3;
    uVar3 = *(uint *)(iVar1 + 0x10 + (int)param_1) & uVar3;
    if (uVar3 == 0) goto LAB_00ea9d6b;
    if ((uVar3 & 4) == 0) {
      if ((uVar3 & 2) != 0) {
        uVar3 = F_00c46280();
        (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::failbit set";
        goto LAB_00ea9cfa;
      }
      goto LAB_00ea9d36;
    }
  }
  else {
    iVar1 = *(int *)(*param_1 + 4);
    uVar3 = (-(uint)(*(int *)(iVar1 + 0x38 + (int)param_1) != 0) & 0xfffffffc) + 4 & 0x17;
    *(uint *)(iVar1 + 0xc + (int)param_1) = uVar3;
    uVar3 = *(uint *)(iVar1 + 0x10 + (int)param_1) & uVar3;
    if (uVar3 == 0) {
LAB_00ea9d6b: ;
      uVar3 = (uint)(*(byte *)(gen_frame + 0x1f));
      F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
      return uVar3;
    }
    if ((uVar3 & 4) == 0) {
LAB_00ea9d36: ;
      uVar3 = F_00c46280();
      (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::eofbit set";
      goto LAB_00ea9cfa;
    }
  }
  uVar3 = F_00c46280();
  (*(char * PTR32 *)(gen_frame + 0x10)) = "ios_base::badbit set";
LAB_00ea9cfa: ;
  (*(undefined4 *)(gen_frame + 0x14)) = 1;
  (*(uint *)(gen_frame + 0x18)) = uVar3;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[3])REFP(0x10910a4));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
}

/* ref: FUN_00ea9db0 */
uint F_00ea9db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xea9db0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00ea9ac0(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ea9dc0 */
unsigned int F_00ea9dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xea9dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return 0;
}

/* ref: FUN_00ea9df0 */
unsigned int F_00ea9df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xea9df0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint param_5 = (uint)gen_a5;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(uint *)((int)this + 0x10) = ((param_5 & 0x3fff) << 0xe | param_4 & 0x3fff) * 8 | param_3 & 7;
  return 0;
}

/* ref: FUN_00ea9e60 */
uint F_00ea9e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xea9e60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return 0;
}

/* ref: FUN_00ea9e80 */
uint F_00ea9e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xea9e80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  uVar1 = (uint)(ushort)param_4 * 8 | param_3 & 7;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(uint *)((int)this + 0x10) = uVar1;
  return uVar1;
}

/* ref: FUN_00ea9ef0 */
uint F_00ea9ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xea9ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)((int)this + 4) != 0) {
    if (*(int *)((int)this + 8) == -1) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))(*(int * PTR32 *)((int)this + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))
                        (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar2;
    }
    uVar2 = *(uint *)((int)this + 0x10) & 7;
    if (uVar2 == 0) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))(*(int * PTR32 *)((int)this + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1,*(undefined4 *)((int)this + 8));
      return uVar2;
    }
    if (uVar2 == 1) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))(*(int * PTR32 *)((int)this + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x34))
                        (piVar1,*(undefined4 *)((int)this + 8),
                         (uint)(*(byte *)((int)this + 0x10) & 7),
                         *(uint *)((int)this + 0x10) >> 3 & 0xfffffff);
      return uVar2;
    }
    if (uVar2 == 2) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))(*(int * PTR32 *)((int)this + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x30))
                        (piVar1,*(undefined4 *)((int)this + 8),
                         (uint)(*(byte *)((int)this + 0x10) & 7),
                         *(uint *)((int)this + 0x10) >> 3 & 0x3fff,
                         *(uint *)((int)this + 0x10) >> 0x11 & 0x3fff,(int)this + 0xc);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00ea9fc0 */
uint F_00ea9fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xea9fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)((int)this + 4) == 0) {
    return 0;
  }
  if (*(int *)((int)this + 8) == -1) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)((int)this + 4),param_1);
    return uVar2;
  }
  uVar2 = *(uint *)((int)this + 0x10) & 7;
  if (uVar2 == 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))
                      (piVar1,*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 8),param_1)
    ;
    return uVar2;
  }
  if (uVar2 == 1) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))
                      (piVar1,*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 8),
                       (uint)(*(byte *)((int)this + 0x10) & 7),
                       *(uint *)((int)this + 0x10) >> 3 & 0xfffffff,param_1);
    return uVar2;
  }
  iVar3 = param_1;
  if (uVar2 == 2) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x40))
                      (piVar1,*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 8),
                       (uint)(*(byte *)((int)this + 0x10) & 7),
                       *(uint *)((int)this + 0x10) >> 3 & 0x3fff,
                       *(uint *)((int)this + 0x10) >> 0x11 & 0x3fff,(int)this + 0xc,param_1);
    iVar3 = uVar2 + param_1;
  }
  return iVar3 - param_1;
}

/* ref: Application::Network::WorkDefinitions::SetParameterInfo::vf0 */
uint F_00eaa0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeaa0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1159908));
  if (((*(uint *)(this + 0x10) & 0x80000000) != 0) &&
     (puVar1 = *(undefined4 * PTR32 *)(this + 4), puVar1 != (undefined4 *)0x0)) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::SetParameterInfoContainerInterface::vf0 */
uint F_00eaa120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeaa120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::RelatedBasesInterfce::vf0 */
uint F_00eaa160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeaa160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::Tag_TypeInfoInterface::vf0 */
uint F_00eaa1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeaa1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::WorkDefinitions::TagBase::vf5 */
unsigned int F_00eaa1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeaa1e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::TagBase::vf4 */
unsigned int F_00eaa1f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xeaa1f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Application::Network::WorkDefinitions::TagBase::vf0 */
uint F_00eaa200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeaa200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eaa230 */
uint F_00eaa230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeaa230u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: Component::ServerFramework::JsonParser::TokenBase::vf1 */
unsigned int F_00eaa260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeaa260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Component::ServerFramework::JsonParser::TokenBase::vf2 */
unsigned int F_00eaa270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeaa270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Component::ServerFramework::JsonParser::TokenBase::vf3 */
unsigned int F_00eaa280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeaa280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Component::ServerFramework::JsonParser::TokenBase::vf4 */
unsigned int F_00eaa290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeaa290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Component::ServerFramework::JsonParser::TokenBase::vf5 */
uint F_00eaa2a0(void)
{
  GEN_ENTER(0xeaa2a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::ServerFramework::JsonParser::TokenBase::vf6 */
unsigned int F_00eaa2b0(void)
{
  GEN_ENTER(0xeaa2b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::ServerFramework::JsonParser::TokenBase::vf7 */
byte F_00eaa2c0(void)
{
  GEN_ENTER(0xeaa2c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::ServerFramework::JsonParser::IntToken::vf1 */
uint F_00eaa310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeaa310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)(this + 8) = param_1;
  *(undefined4 *)(this + 0xc) = param_2;
  return param_1;
}

/* ref: Component::ServerFramework::JsonParser::IntToken::vf5 */
uint F_00eaa330(unsigned int gen_a0)
{
  GEN_ENTER(0xeaa330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return *(uint *)(this + 8);
}

/* ref: Component::ServerFramework::JsonParser::FloatToken::vf2 */
unsigned int F_00eaa370(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xeaa370u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 8) = param_2;
  return 0;
}

/* ref: Component::ServerFramework::JsonParser::FloatToken::vf6 */
unsigned int F_00eaa390(unsigned int gen_a0)
{
  GEN_ENTER(0xeaa390u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Component::ServerFramework::JsonParser::BooleanToken::vf3 */
byte F_00eaa3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeaa3d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 8) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Component::ServerFramework::JsonParser::BooleanToken::vf7 */
byte F_00eaa3e0(unsigned int gen_a0)
{
  GEN_ENTER(0xeaa3e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 8);
}

/* ref: Component::ServerFramework::JsonParser::TokenBase::vf0 */
uint F_00eaa400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeaa400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::ServerFramework::JsonParser::IntToken::vf0 */
uint F_00eaa430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeaa430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::ServerFramework::JsonParser::FloatToken::vf0 */
uint F_00eaa460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeaa460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::ServerFramework::JsonParser::BooleanToken::vf0 */
uint F_00eaa490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeaa490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eaa4c0 */
ushort F_00eaa4c0(unsigned int gen_a0)
{
  GEN_ENTER(0xeaa4c0u, gen_a0, 0u, 0u, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  return *param_1;
}

/* ref: FUN_00eaa4d0 */
byte F_00eaa4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeaa4d0u, gen_a0, gen_a1, 0u, 0u);
  short * param_1 = (short *)(uintptr_t)gen_a0;
  short * param_2 = (short *)(uintptr_t)gen_a1;
  return *param_1 == *param_2;
}

/* ref: std::_Locinfo::_Getcoll */
uint F_00eaa590(unsigned int gen_a0)
{
  GEN_ENTER(0xeaa590u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined8 _Var1;
  
  _Var1 = F_01051073();
  *(undefined8 *)param_1 = _Var1;
  return (uint)param_1;
}

/* ref: FUN_00eaa5e0 */
byte F_00eaa5e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeaa5e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return (*((ushort *)GEN_TOP((*(int *)((int)this + 0x10) + (uint)(byte)param_2 * 2))) & (ushort)param_1) != 0;
}

/* ref: FUN_00eaa610 */
uint F_00eaa610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xeaa610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00eaa620 */
uint F_00eaa620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeaa620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * p_Var1;
  undefined8 _Var2;
  
  p_Var1 = F_00c45a9d(((undefined *)(gen_frame + 0xc)));
  *(undefined8 *)((int)this + 8) = *(undefined8 *)p_Var1;
  *(undefined8 *)((int)this + 0x10) = *(undefined8 *)&(*(int *)(((char *)(p_Var1) + 8)));
  _Var2 = F_01051073();
  *(undefined *)((int)this + 0x18) = _Var2;
  return (*(uint *)((char *)&(_Var2)));
}

/* ref: FUN_00eaa670 */
unsigned int F_00eaa670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xeaa670u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = ~(*(uint *)&gen_args[2]) & *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) | (*(uint *)&gen_args[1]) & (*(uint *)&gen_args[2]) & 0xffff;
  return 0;
}

/* ref: FUN_00eaa6a0 */
uint F_00eaa6a0(unsigned int gen_a0)
{
  GEN_ENTER(0xeaa6a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffff9ff | 0x800;
  return param_1;
}

/* ref: FUN_00eaa6d0 */
uint F_00eaa6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeaa6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_0042e170(this,param_1);
  return (uint)this;
}

/* ref: FUN_00eaa9e0 */
uint F_00eaa9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeaa9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  *(int * PTR32 *)this = param_1;
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x38 + (int)param_1)));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  return (uint)this;
}

/* ref: FUN_00eaaa70 */
ulonglong F_00eaaa70(unsigned int gen_a0)
{
  GEN_ENTER(0xeaaa70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (**(int * PTR32 *)((int)this + 0x24) != 0) {
    return (ulonglong)**(int * PTR32 *)((int)this + 0x34);
  }
  return 0;
}

/* ref: FUN_00eaaa90 */
uint F_00eaaa90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xeaaa90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  if (param_3 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x10912b0);
    *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[1])REFP(0x1091064));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  if ((char)param_2 != '\0') {
    F_00c463fe(((undefined *)GEN_TOP((*(int *)(*(int *)this + 4) + (int)this))));
  }
  return (uint)this;
}

/* ref: FUN_00eaaae0 */
uint F_00eaaae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeaaae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  *(int * PTR32 *)this = param_1;
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(*param_1 + 4) + 0x38 + (int)param_1)));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  return (uint)this;
}

/* ref: FUN_00eaab30 */
uint F_00eaab30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeaab30u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00eaab50 */
uint F_00eaab50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, double gen_a6)
{
  GEN_ENTER(0xeaab50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  double param_7 = (double)gen_a6;
  ((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1,param_2,param_3,param_4,param_5,param_6);
  return param_2;
}

/* ref: FUN_00eaab90 */
uint F_00eaab90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeaab90u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = 0;
  *(undefined4 *)(in_ecx + 4) = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00eaabc0 */
uint F_00eaabc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xeaabc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return param_1;
}

/* ref: FUN_00eaabf0 */
uint F_00eaabf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeaabf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined8 _Var1;
  
  _Var1 = F_01051073();
  *(undefined *)((int)this + 8) = _Var1;
  return (*(uint *)((char *)&(_Var1)));
}

/* ref: FUN_00eaad40 */
uint F_00eaad40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeaad40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0xc))))((int)this + 4)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 4;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x1a8) + 0xc))))((int)this + 0x1a8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x1a8;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x2ec) + 0xc))))((int)this + 0x2ec)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x2ec;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x430) + 0xc))))((int)this + 0x430)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x430;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x574) + 0xc))))((int)this + 0x574)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x574;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x7a8) + 0xc))))((int)this + 0x7a8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x7a8;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x91c) + 0xc))))((int)this + 0x91c)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x91c;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xa90) + 0xc))))((int)this + 0xa90)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0xa90;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xc34) + 0xc))))((int)this + 0xc34)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0xc34;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xec8) + 0xc))))((int)this + 0xec8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0xec8;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x106c) + 0xc))))((int)this + 0x106c)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x106c;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x1330) + 0xc))))((int)this + 0x1330)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x1330;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x14d4) + 0xc))))((int)this + 0x14d4)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x14d4;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x1778) + 0xc))))((int)this + 0x1778)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x1778;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x191c) + 0xc))))((int)this + 0x191cU)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  return ~-(uint)(uVar2 != *param_1) & (int)this + 0x191cU;
}

/* ref: FUN_00eaafd0 */
uint F_00eaafd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xeaafd0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0xc))))((int)this + 4)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))
                    (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: FUN_00eab000 */
uint F_00eab000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeab000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0xc))))((int)this + 4)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 4;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xa78) + 0xc))))((int)this + 0xa78)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0xa78;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xcfc) + 0xc))))((int)this + 0xcfc)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0xcfc;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x1100) + 0xc))))((int)this + 0x1100)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x1100;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x13e4) + 0xc))))((int)this + 0x13e4)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x13e4;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x1a58) + 0xc))))((int)this + 0x1a58)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x1a58;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x401c) + 0xc))))((int)this + 0x401c)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x401c;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x41e0) + 0xc))))((int)this + 0x41e0)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x41e0;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x43a4) + 0xc))))((int)this + 0x43a4)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x43a4;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x4568) + 0xc))))((int)this + 0x4568)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x4568;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x472c) + 0xc))))((int)this + 0x472c)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x472c;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x4a70) + 0xc))))((int)this + 0x4a70)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x4a70;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x4f34) + 0xc))))((int)this + 0x4f34)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x4f34;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x5158) + 0xc))))((int)this + 0x5158)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x5158;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x537c) + 0xc))))((int)this + 0x537c)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x537c;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x55a0) + 0xc))))((int)this + 0x55a0)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x55a0;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x57c4) + 0xc))))((int)this + 0x57c4)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x57c4;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x59e8) + 0xc))))((int)this + 0x59e8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x59e8;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x5c0c) + 0xc))))((int)this + 0x5c0c)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x5c0c;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x5e30) + 0xc))))((int)this + 0x5e30)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x5e30;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x6054) + 0xc))))((int)this + 0x6054)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x6054;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x6278) + 0xc))))((int)this + 0x6278)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x6278;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x649c) + 0xc))))((int)this + 0x649c)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x649c;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x66c0) + 0xc))))((int)this + 0x66c0)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x66c0;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x69a4) + 0xc))))((int)this + 0x69a4)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x69a4;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x6e08) + 0xc))))((int)this + 0x6e08)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x6e08;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x71ac) + 0xc))))((int)this + 0x71ac)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x71ac;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x7370) + 0xc))))((int)this + 0x7370)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x7370;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x7894) + 0xc))))((int)this + 0x7894)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x7894;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 33000) + 0xc))))((int)this + 33000)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 33000;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x83cc) + 0xc))))((int)this + 0x83cc)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x83cc;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x85f0) + 0xc))))((int)this + 0x85f0)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x85f0;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x88d4) + 0xc))))((int)this + 0x88d4)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x88d4;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x8af8) + 0xc))))((int)this + 0x8af8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x8af8;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x8ddc) + 0xc))))((int)this + 0x8ddc)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x8ddc;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x9000) + 0xc))))((int)this + 0x9000)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x9000;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x9224) + 0xc))))((int)this + 0x9224)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x9224;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x9478) + 0xc))))((int)this + 0x9478)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x9478;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x96fc) + 0xc))))((int)this + 0x96fc)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x96fc;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x9950) + 0xc))))((int)this + 0x9950)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x9950;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x9af4) + 0xc))))((int)this + 0x9af4)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x9af4;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x9ef8) + 0xc))))((int)this + 0x9ef8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0x9ef8;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xa3bc) + 0xc))))((int)this + 0xa3bc)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0xa3bc;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xa660) + 0xc))))((int)this + 0xa660)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0xa660;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xa884) + 0xc))))((int)this + 0xa884)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0xa884;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xadb8) + 0xc))))((int)this + 0xadb8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0xadb8;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xb8ec) + 0xc))))((int)this + 0xb8ec)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0xb8ec;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xbd90) + 0xc))))((int)this + 0xbd90)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0xbd90;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xbf34) + 0xc))))((int)this + 0xbf34)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0xbf34;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xc168) + 0xc))))((int)this + 0xc168)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0xc168;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xc38c) + 0xc))))((int)this + 0xc38c)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0xc38c;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xc5b0) + 0xc))))((int)this + 0xc5b0)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0xc5b0;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xced4) + 0xc))))((int)this + 0xced4)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0xced4;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xd108) + 0xc))))((int)this + 0xd108)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0xd108;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xd24c) + 0xc))))((int)this + 0xd24c)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0xd24c;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xd3f0) + 0xc))))((int)this + 0xd3f0)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0xd3f0;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xd594) + 0xc))))((int)this + 0xd594)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0xd594;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xe1e8) + 0xc))))((int)this + 0xe1e8)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0xe1e8;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xe56c) + 0xc))))((int)this + 0xe56c)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0xe56c;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xe920) + 0xc))))((int)this + 0xe920)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0xe920;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xeac4) + 0xc))))((int)this + 0xeac4)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0xeac4;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xec68) + 0xc))))((int)this + 0xec68U)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  return ~-(uint)(uVar2 != *param_1) & (int)this + 0xec68U;
}

/* ref: FUN_00eaba70 */
uint F_00eaba70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xeaba70u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0xc))))((int)this + 4)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))
                    (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: FUN_00eabbc0 */
uint F_00eabbc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeabbc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0xc))))((int)this + 4U)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  return ~-(uint)(uVar2 != *param_1) & (int)this + 4U;
}

/* ref: FUN_00eabbf0 */
uint F_00eabbf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xeabbf0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0xc))))((int)this + 4)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))
                    (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: FUN_00eabc20 */
uint F_00eabc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeabc20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0xc))))((int)this + 4)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 4;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xc68) + 0xc))))((int)this + 0xc68)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  if (uVar2 == *param_1) {
    return (int)this + 0xc68;
  }
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x2aec) + 0xc))))((int)this + 0x2aecU)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  return ~-(uint)(uVar2 != *param_1) & (int)this + 0x2aecU;
}

/* ref: FUN_00eabcb0 */
uint F_00eabcb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xeabcb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0xc))))((int)this + 4)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))
                    (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: FUN_00eabd10 */
uint F_00eabd10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeabd10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eabd50 */
uint F_00eabd50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeabd50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eabd90 */
uint F_00eabd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeabd90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x1159938));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00eabdc0 */
uint F_00eabdc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeabdc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * param_1 = (code *)(uintptr_t)gen_a1;
  if (this == (undefined *)0x0) {
    (*param_1)(0);
    return 0;
  }
  (*param_1)(*(int *)(*(int *)this + 4) + (int)this);
  return (uint)this;
}

/* ref: FUN_00eabdf0 */
uint F_00eabdf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeabdf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * param_1 = (code *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = (*param_1)(this);
  return uVar1;
}

/* ref: FUN_00eabe00 */
uint F_00eabe00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeabe00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * param_1 = (code *)(uintptr_t)gen_a1;
  if (this == (undefined *)0x0) {
    (*param_1)(0);
    return 0;
  }
  (*param_1)(*(int *)(*(int *)this + 4) + (int)this);
  return (uint)this;
}

/* ref: FUN_00eabe40 */
byte F_00eabe40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeabe40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00eabe60 */
byte F_00eabe60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xeabe60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

