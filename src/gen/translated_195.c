#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
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
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
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
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x1b4) + *(int *)(this + 0x1b8) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
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
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
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
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x514) + *(int *)(this + 0x518) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x514) + *(int *)(this + 0x518) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
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
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
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
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x514) + *(int *)(this + 0x518) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
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
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
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
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x844) + *(int *)(this + 0x848) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x844) + *(int *)(this + 0x848) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
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
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
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
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x844) + *(int *)(this + 0x848) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
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
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
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
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
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
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
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
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
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
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
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
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
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
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
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
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
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
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
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
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
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
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
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
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
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
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
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
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
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
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
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
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
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
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
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
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
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
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
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
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x2d4) + *(int *)(this + 0x2d8) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
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
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
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
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
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
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
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
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
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
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
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
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
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
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
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
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
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
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
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
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x244) + *(int *)(this + 0x248) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x244) + *(int *)(this + 0x248) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
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
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
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
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x244) + *(int *)(this + 0x248) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
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
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
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
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x274) + *(int *)(this + 0x278) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x274) + *(int *)(this + 0x278) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
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
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
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
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x274) + *(int *)(this + 0x278) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
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
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
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
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x244) + *(int *)(this + 0x248) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x244) + *(int *)(this + 0x248) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
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
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
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
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x244) + *(int *)(this + 0x248) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
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
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
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
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
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
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
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
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
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
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
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
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x3f4) + *(int *)(this + 0x3f8) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x3f4) + *(int *)(this + 0x3f8) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
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
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
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
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x3f4) + *(int *)(this + 0x3f8) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
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
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
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
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x4b4) + *(int *)(this + 0x4b8) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x4b4) + *(int *)(this + 0x4b8) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
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
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
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
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x4b4) + *(int *)(this + 0x4b8) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
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
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
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
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x294) + *(int *)(this + 0x298) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x294) + *(int *)(this + 0x298) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
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
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
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
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
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
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x294) + *(int *)(this + 0x298) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e995a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe995a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x294);
  if (iVar1 != iVar1 + *(int *)(this + 0x298) * 0x14) {
    do {
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x294) + *(int *)(this + 0x298) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsStorage::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e995e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe995e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x294);
  if (iVar2 != iVar2 + *(int *)(this + 0x298) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x298) * 0x14;
    do {
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e99620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe99620u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e996a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe996a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e99730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe99730u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e99830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe99830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e99890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe99890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e99900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe99900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbHousePartsItem::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e99940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe99940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x214);
  if (iVar2 != iVar2 + *(int *)(this + 0x218) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x218) * 0x14;
    do {
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e99980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe99980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x524);
  if (iVar3 != iVar3 + *(int *)(this + 0x528) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x524) + *(int *)(this + 0x528) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e99a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe99a00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x524);
  if (iVar3 != iVar3 + *(int *)(this + 0x528) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x524) + *(int *)(this + 0x528) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e99a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe99a90u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  iVar8 = *(int *)(this + 0x524);
  if (iVar8 != iVar8 + *(int *)(this + 0x528) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e99b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe99b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x524);
  if (iVar1 != iVar1 + *(int *)(this + 0x528) * 0x14) {
    do {
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x524) + *(int *)(this + 0x528) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e99bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe99bf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x524);
  if (iVar3 != iVar3 + *(int *)(this + 0x528) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x524) + *(int *)(this + 0x528) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e99c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe99c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x524);
  if (iVar1 != iVar1 + *(int *)(this + 0x528) * 0x14) {
    do {
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x524) + *(int *)(this + 0x528) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoLinkshell::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e99ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe99ca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x524);
  if (iVar2 != iVar2 + *(int *)(this + 0x528) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x528) * 0x14;
    do {
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e99ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe99ce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0xb24);
  if (iVar3 != iVar3 + *(int *)(this + 0xb28) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0xb24) + *(int *)(this + 0xb28) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e99d60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe99d60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0xb24);
  if (iVar3 != iVar3 + *(int *)(this + 0xb28) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0xb24) + *(int *)(this + 0xb28) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e99df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe99df0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  iVar8 = *(int *)(this + 0xb24);
  if (iVar8 != iVar8 + *(int *)(this + 0xb28) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e99ef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe99ef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0xb24);
  if (iVar1 != iVar1 + *(int *)(this + 0xb28) * 0x14) {
    do {
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0xb24) + *(int *)(this + 0xb28) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e99f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe99f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0xb24);
  if (iVar3 != iVar3 + *(int *)(this + 0xb28) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0xb24) + *(int *)(this + 0xb28) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e99fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe99fc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0xb24);
  if (iVar1 != iVar1 + *(int *)(this + 0xb28) * 0x14) {
    do {
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0xb24) + *(int *)(this + 0xb28) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFreeCompany::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e9a000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9a000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0xb24);
  if (iVar2 != iVar2 + *(int *)(this + 0xb28) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0xb28) * 0x14;
    do {
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9a040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9a040u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x494);
  if (iVar3 != iVar3 + *(int *)(this + 0x498) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x494) + *(int *)(this + 0x498) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9a0c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe9a0c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x494);
  if (iVar3 != iVar3 + *(int *)(this + 0x498) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x494) + *(int *)(this + 0x498) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9a150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe9a150u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  iVar8 = *(int *)(this + 0x494);
  if (iVar8 != iVar8 + *(int *)(this + 0x498) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9a250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9a250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x494);
  if (iVar1 != iVar1 + *(int *)(this + 0x498) * 0x14) {
    do {
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x494) + *(int *)(this + 0x498) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9a2b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9a2b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x494);
  if (iVar3 != iVar3 + *(int *)(this + 0x498) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x494) + *(int *)(this + 0x498) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9a320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9a320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x494);
  if (iVar1 != iVar1 + *(int *)(this + 0x498) * 0x14) {
    do {
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x494) + *(int *)(this + 0x498) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcMember::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e9a360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9a360u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x494);
  if (iVar2 != iVar2 + *(int *)(this + 0x498) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x498) * 0x14;
    do {
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9a3a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9a3a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9a420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe9a420u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9a4b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe9a4b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9a5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9a5b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9a610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9a610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9a680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9a680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcHierarchy::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e9a6c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9a6c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x194);
  if (iVar2 != iVar2 + *(int *)(this + 0x198) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x198) * 0x14;
    do {
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9a700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9a700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x224);
  if (iVar3 != iVar3 + *(int *)(this + 0x228) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x224) + *(int *)(this + 0x228) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9a780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe9a780u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x224);
  if (iVar3 != iVar3 + *(int *)(this + 0x228) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x224) + *(int *)(this + 0x228) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9a810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe9a810u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9a910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9a910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x224);
  if (iVar1 != iVar1 + *(int *)(this + 0x228) * 0x14) {
    do {
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x224) + *(int *)(this + 0x228) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9a970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9a970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x224);
  if (iVar3 != iVar3 + *(int *)(this + 0x228) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x224) + *(int *)(this + 0x228) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9a9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9a9e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x224);
  if (iVar1 != iVar1 + *(int *)(this + 0x228) * 0x14) {
    do {
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x224) + *(int *)(this + 0x228) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcActivity::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e9aa20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9aa20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x224);
  if (iVar2 != iVar2 + *(int *)(this + 0x228) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x228) * 0x14;
    do {
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9aa60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9aa60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9aae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe9aae0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9ab70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe9ab70u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9ac70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9ac70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9acd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9acd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9ad40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9ad40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemGil::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e9ad80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9ad80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x214);
  if (iVar2 != iVar2 + *(int *)(this + 0x218) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x218) * 0x14;
    do {
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9adc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9adc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9ae40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe9ae40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9aed0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe9aed0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9afd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9afd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9b030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9b030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x214);
  if (iVar3 != iVar3 + *(int *)(this + 0x218) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9b0a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9b0a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x214);
  if (iVar1 != iVar1 + *(int *)(this + 0x218) * 0x14) {
    do {
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x214) + *(int *)(this + 0x218) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbInfoFcChestItemCrystal::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e9b0e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9b0e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x214);
  if (iVar2 != iVar2 + *(int *)(this + 0x218) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x218) * 0x14;
    do {
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9b120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9b120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x914);
  if (iVar3 != iVar3 + *(int *)(this + 0x918) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x914) + *(int *)(this + 0x918) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9b1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe9b1a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x914);
  if (iVar3 != iVar3 + *(int *)(this + 0x918) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x914) + *(int *)(this + 0x918) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9b230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe9b230u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  iVar8 = *(int *)(this + 0x914);
  if (iVar8 != iVar8 + *(int *)(this + 0x918) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9b330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9b330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x914);
  if (iVar1 != iVar1 + *(int *)(this + 0x918) * 0x14) {
    do {
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x914) + *(int *)(this + 0x918) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9b390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9b390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x914);
  if (iVar3 != iVar3 + *(int *)(this + 0x918) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x914) + *(int *)(this + 0x918) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9b400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9b400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x914);
  if (iVar1 != iVar1 + *(int *)(this + 0x918) * 0x14) {
    do {
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x914) + *(int *)(this + 0x918) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbItemSearch::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e9b440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9b440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x914);
  if (iVar2 != iVar2 + *(int *)(this + 0x918) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x918) * 0x14;
    do {
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9b480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9b480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x224);
  if (iVar3 != iVar3 + *(int *)(this + 0x228) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x224) + *(int *)(this + 0x228) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9b500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe9b500u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x224);
  if (iVar3 != iVar3 + *(int *)(this + 0x228) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x224) + *(int *)(this + 0x228) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9b590(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe9b590u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9b690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9b690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x224);
  if (iVar1 != iVar1 + *(int *)(this + 0x228) * 0x14) {
    do {
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x224) + *(int *)(this + 0x228) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9b6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9b6f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x224);
  if (iVar3 != iVar3 + *(int *)(this + 0x228) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x224) + *(int *)(this + 0x228) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9b760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9b760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x224);
  if (iVar1 != iVar1 + *(int *)(this + 0x228) * 0x14) {
    do {
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x224) + *(int *)(this + 0x228) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayer::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e9b7a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9b7a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x224);
  if (iVar2 != iVar2 + *(int *)(this + 0x228) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x228) * 0x14;
    do {
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9b7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9b7e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x134);
  if (iVar3 != iVar3 + *(int *)(this + 0x138) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9b860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe9b860u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x134);
  if (iVar3 != iVar3 + *(int *)(this + 0x138) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9b8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe9b8f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9b9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9b9f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x134);
  if (iVar1 != iVar1 + *(int *)(this + 0x138) * 0x14) {
    do {
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9ba50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9ba50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x134);
  if (iVar3 != iVar3 + *(int *)(this + 0x138) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9bac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9bac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x134);
  if (iVar1 != iVar1 + *(int *)(this + 0x138) * 0x14) {
    do {
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyPlayerItem::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e9bb00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9bb00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x134);
  if (iVar2 != iVar2 + *(int *)(this + 0x138) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x138) * 0x14;
    do {
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9bb40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9bb40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9bbc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe9bbc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9bc50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe9bc50u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9bd50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9bd50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9bdb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9bdb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9be20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9be20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainer::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e9be60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9be60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x194);
  if (iVar2 != iVar2 + *(int *)(this + 0x198) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x198) * 0x14;
    do {
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9bea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9bea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9bf20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe9bf20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9bfb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe9bfb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9c0b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9c0b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9c110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9c110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9c180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9c180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbLegacyRetainerItem::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e9c1c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9c1c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x194);
  if (iVar2 != iVar2 + *(int *)(this + 0x198) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x198) * 0x14;
    do {
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9c200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9c200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0xc44);
  if (iVar3 != iVar3 + *(int *)(this + 0xc48) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0xc44) + *(int *)(this + 0xc48) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9c280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe9c280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0xc44);
  if (iVar3 != iVar3 + *(int *)(this + 0xc48) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0xc44) + *(int *)(this + 0xc48) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9c310(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe9c310u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  iVar8 = *(int *)(this + 0xc44);
  if (iVar8 != iVar8 + *(int *)(this + 0xc48) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9c410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9c410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0xc44);
  if (iVar1 != iVar1 + *(int *)(this + 0xc48) * 0x14) {
    do {
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0xc44) + *(int *)(this + 0xc48) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9c470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9c470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0xc44);
  if (iVar3 != iVar3 + *(int *)(this + 0xc48) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0xc44) + *(int *)(this + 0xc48) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9c4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9c4e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0xc44);
  if (iVar1 != iVar1 + *(int *)(this + 0xc48) * 0x14) {
    do {
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0xc44) + *(int *)(this + 0xc48) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketHistory::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e9c520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9c520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0xc44);
  if (iVar2 != iVar2 + *(int *)(this + 0xc48) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0xc48) * 0x14;
    do {
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9c560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9c560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x374);
  if (iVar3 != iVar3 + *(int *)(this + 0x378) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x374) + *(int *)(this + 0x378) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9c5e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe9c5e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x374);
  if (iVar3 != iVar3 + *(int *)(this + 0x378) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x374) + *(int *)(this + 0x378) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9c670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe9c670u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  iVar8 = *(int *)(this + 0x374);
  if (iVar8 != iVar8 + *(int *)(this + 0x378) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9c770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9c770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x374);
  if (iVar1 != iVar1 + *(int *)(this + 0x378) * 0x14) {
    do {
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x374) + *(int *)(this + 0x378) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9c7d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9c7d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x374);
  if (iVar3 != iVar3 + *(int *)(this + 0x378) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x374) + *(int *)(this + 0x378) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9c840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9c840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x374);
  if (iVar1 != iVar1 + *(int *)(this + 0x378) * 0x14) {
    do {
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x374) + *(int *)(this + 0x378) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbMarketRetainer::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e9c880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9c880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x374);
  if (iVar2 != iVar2 + *(int *)(this + 0x378) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x378) * 0x14;
    do {
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9c8c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9c8c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x3a4);
  if (iVar3 != iVar3 + *(int *)(this + 0x3a8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x3a4) + *(int *)(this + 0x3a8) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9c940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe9c940u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x3a4);
  if (iVar3 != iVar3 + *(int *)(this + 0x3a8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x3a4) + *(int *)(this + 0x3a8) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9c9d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe9c9d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  iVar8 = *(int *)(this + 0x3a4);
  if (iVar8 != iVar8 + *(int *)(this + 0x3a8) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9cad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9cad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x3a4);
  if (iVar1 != iVar1 + *(int *)(this + 0x3a8) * 0x14) {
    do {
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x3a4) + *(int *)(this + 0x3a8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9cb30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9cb30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x3a4);
  if (iVar3 != iVar3 + *(int *)(this + 0x3a8) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x3a4) + *(int *)(this + 0x3a8) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9cba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9cba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x3a4);
  if (iVar1 != iVar1 + *(int *)(this + 0x3a8) * 0x14) {
    do {
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x3a4) + *(int *)(this + 0x3a8) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbOdin::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e9cbe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9cbe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x3a4);
  if (iVar2 != iVar2 + *(int *)(this + 0x3a8) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x3a8) * 0x14;
    do {
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9cc20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9cc20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9cca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe9cca0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9cd30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe9cd30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9ce30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9ce30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9ce90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9ce90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9cf00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9cf00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbRevision::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e9cf40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9cf40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x194);
  if (iVar2 != iVar2 + *(int *)(this + 0x198) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x198) * 0x14;
    do {
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9cf80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9cf80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9d000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe9d000u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9d090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe9d090u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9d190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9d190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9d1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9d1f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9d260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9d260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbTerritory::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e9d2a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9d2a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x194);
  if (iVar2 != iVar2 + *(int *)(this + 0x198) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x198) * 0x14;
    do {
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9d2e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9d2e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9d360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe9d360u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9d3f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe9d3f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9d4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9d4f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9d550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9d550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9d5c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9d5c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbStore_DbUniqueIdData::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e9d600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9d600u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x194);
  if (iVar2 != iVar2 + *(int *)(this + 0x198) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x198) * 0x14;
    do {
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9d660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9d660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9d6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe9d6e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9d770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe9d770u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9d870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9d870u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9d8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9d8d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x194);
  if (iVar3 != iVar3 + *(int *)(this + 0x198) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9d940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9d940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x194);
  if (iVar1 != iVar1 + *(int *)(this + 0x198) * 0x14) {
    do {
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x194) + *(int *)(this + 0x198) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbDefault_def_false::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e9d980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9d980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x194);
  if (iVar2 != iVar2 + *(int *)(this + 0x198) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x198) * 0x14;
    do {
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9d9d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9d9d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0xc54);
  if (iVar3 != iVar3 + *(int *)(this + 0xc58) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0xc54) + *(int *)(this + 0xc58) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9da50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe9da50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0xc54);
  if (iVar3 != iVar3 + *(int *)(this + 0xc58) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0xc54) + *(int *)(this + 0xc58) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9dae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe9dae0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  iVar8 = *(int *)(this + 0xc54);
  if (iVar8 != iVar8 + *(int *)(this + 0xc58) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9dbe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9dbe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0xc54);
  if (iVar1 != iVar1 + *(int *)(this + 0xc58) * 0x14) {
    do {
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0xc54) + *(int *)(this + 0xc58) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9dc40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9dc40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0xc54);
  if (iVar3 != iVar3 + *(int *)(this + 0xc58) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0xc54) + *(int *)(this + 0xc58) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9dcb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9dcb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0xc54);
  if (iVar1 != iVar1 + *(int *)(this + 0xc58) * 0x14) {
    do {
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0xc54) + *(int *)(this + 0xc58) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassNoArray::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e9dcf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9dcf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0xc54);
  if (iVar2 != iVar2 + *(int *)(this + 0xc58) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0xc58) * 0x14;
    do {
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9dd30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9dd30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x1e74);
  if (iVar3 != iVar3 + *(int *)(this + 0x1e78) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x1e74) + *(int *)(this + 0x1e78) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9ddb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe9ddb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x1e74);
  if (iVar3 != iVar3 + *(int *)(this + 0x1e78) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x1e74) + *(int *)(this + 0x1e78) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9de40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe9de40u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  iVar8 = *(int *)(this + 0x1e74);
  if (iVar8 != iVar8 + *(int *)(this + 0x1e78) * 0x14) {
    iVar6 = 0;
    while( true ) {
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9df40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9df40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x1e74);
  if (iVar1 != iVar1 + *(int *)(this + 0x1e78) * 0x14) {
    do {
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x1e74) + *(int *)(this + 0x1e78) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9dfa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9dfa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x1e74);
  if (iVar3 != iVar3 + *(int *)(this + 0x1e78) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x1e74) + *(int *)(this + 0x1e78) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9e010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9e010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x1e74);
  if (iVar1 != iVar1 + *(int *)(this + 0x1e78) * 0x14) {
    do {
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x1e74) + *(int *)(this + 0x1e78) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpand::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e9e050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9e050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x1e74);
  if (iVar2 != iVar2 + *(int *)(this + 0x1e78) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x1e78) * 0x14;
    do {
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9e090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9e090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x134);
  if (iVar3 != iVar3 + *(int *)(this + 0x138) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0x10))) = 0;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray::vf5 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9e110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe9e110u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x134);
  if (iVar3 != iVar3 + *(int *)(this + 0x138) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if ((uVar2 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar3 + 0x10))) & 7) != 2)) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14) {
        return 0;
      }
    }
    *((uint *)GEN_TOP((iVar3 + 0x10))) = (param_2 & 0xffff) * 8 | 1;
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0xffffffff;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9e1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xe9e1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar8 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar8 + 4))) GEN_EDX_FWD)));
      uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0xc))))(piVar3 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar8 + 8))));
      if ((uVar4 == param_1) && (((byte)*((undefined4 *)GEN_TOP((iVar8 + 0x10))) & 7) == 2)) break;
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
        *((uint *)GEN_TOP((iVar1 + 0x10))) =
             (iVar5 * 0x20 + param_2) * 8 & 0x1fff8U | *((uint *)GEN_TOP((iVar1 + 0x10))) & 0x80000007 |
             uVar4 & 0x7ffe0000;
        bVar2 = (byte)iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 + 0x20000;
        *((uint *)GEN_TOP((iVar8 + 0xc))) = *((uint *)GEN_TOP((iVar8 + 0xc))) | 1 << GEN_SHC(bVar2, bVar2);
      } while (iVar7 <= param_3);
    }
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray::vf7 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9e2a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9e2a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x134);
  if (iVar1 != iVar1 + *(int *)(this + 0x138) * 0x14) {
    do {
      if (((byte)*((undefined4 *)GEN_TOP((iVar1 + 0x10))) & 7) != 2) {
        *((undefined4 *)GEN_TOP((iVar1 + 0x10))) = 0;
        *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0xffffffff;
      }
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00e9e300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9e300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x134);
  if (iVar3 != iVar3 + *(int *)(this + 0x138) * 0x14) {
    while( true ) {
      piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((iVar3 + 4))) + 4))))(*((int * PTR32 *)GEN_TOP((iVar3 + 4))) GEN_EDX_FWD)));
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + 8))));
      if (uVar2 == param_1) break;
      iVar3 = iVar3 + 0x14;
      if (iVar3 == *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((iVar3 + 0xc))) = 0;
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray::vf9 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9e370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9e370u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *(int *)(this + 0x134);
  if (iVar1 != iVar1 + *(int *)(this + 0x138) * 0x14) {
    do {
      *((undefined4 *)GEN_TOP((iVar1 + 0xc))) = 0;
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(this + 0x134) + *(int *)(this + 0x138) * 0x14);
  }
  return 0;
}

/* ref: Application::Network::WorkDefinitions::Tag_DbInnerClass_InnerClassExpandNoArray::vf10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00e9e3b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9e3b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x134);
  if (iVar2 != iVar2 + *(int *)(this + 0x138) * 0x14) {
    iVar1 = iVar2 + *(int *)(this + 0x138) * 0x14;
    do {
      if (*((int *)GEN_TOP((iVar2 + 0xc))) != 0) {
        return 1;
      }
      iVar2 = iVar2 + 0x14;
    } while (iVar2 != iVar1);
  }
  return 0;
}

/* ref: FUN_00e9e3f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e9e3f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe9e3f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  
  iVar1 = **((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if ((uint)(((*((int * PTR32 *)GEN_TOP(((int)this + 0x10))))[1] - iVar1) / 0x18) <= param_1) {
                    
    F_00c457e7(((char *)REFP(0x1090aa4)));
  }
  return iVar1 + param_1 * 0x18;
}

/* ref: FUN_00e9e450 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e9e450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xe9e450u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  
  if (*((int *)GEN_TOP(((int)this + 8))) == 0) {
    *((undefined4 *)GEN_TOP(((int)this + 8))) = 6;
    puVar2 = ((undefined4 *)GEN_TOP(F_004069f0(0x10)));
    if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar2 = ((undefined4 *)GEN_TOP(0x0));
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
    }
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10))) = puVar2;
  }
  else if (*((int *)GEN_TOP(((int)this + 8))) != 6) {
    return (uint)this;
  }
  iVar1 = **((int * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if ((uint)(((*((int * PTR32 *)GEN_TOP(((int)this + 0x10))))[1] - iVar1) / 0x18) <= param_1) {
                    
    F_00c457e7(((char *)REFP(0x1090aa4)));
  }
  return iVar1 + param_1 * 0x18;
}

/* ref: FUN_00e9e4d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e9e4d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe9e4d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  F_00ebc440(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&(*(int *)&gen_args[0]),(*(int *)&gen_args[0]));
  if ((*(int *)&gen_args[0]) == *((int *)GEN_TOP(((int)this + 8)))) {
    return (*(uint *)&gen_args[1]);
  }
  return (*(int *)&gen_args[0]) + 0x60;
}

/* ref: FUN_00e9e500 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00e9e500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe9e500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  piVar2 = ((int *)GEN_TOP(F_00ebc440(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[0]))));
  return *piVar2 != iVar1;
}

/* ref: FUN_00e9e530 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9e530(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9e530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 2;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1c))) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 3;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x24))) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 4;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2c))) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 5;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x34))) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 6;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 7;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x40))) = (*(undefined * PTR32 (*)[9])REFP(0x11599bc));
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 8;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x50))) = (*(undefined * PTR32 (*)[9])REFP(0x11599e4));
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 9;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x5c))) = (*(undefined * PTR32 (*)[9])REFP(0x1159a0c))
  ;
  *((undefined1 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 10;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x68))) = (*(undefined * PTR32 (*)[9])REFP(0x115d4d4));
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0xf;
  *((undefined1 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0xb;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x8c))) =
       (*(undefined * PTR32 (*)[9])REFP(0x115d4fc));
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xb0))) = 0;
  return (uint)this;
}

/* ref: FUN_00e9e610 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9e610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9e610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x8c))) =
       (*(undefined * PTR32 (*)[9])REFP(0x115d4fc));
  if (0xf < *((uint *)GEN_TOP(((int)this + 0xa8)))) {
    F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0x94))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0xa8))) = 0xf;
  *((undefined4 *)GEN_TOP(((int)this + 0xa4))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x94))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x8c))) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x68))) = (*(undefined * PTR32 (*)[9])REFP(0x115d4d4));
  if (0xf < *((uint *)GEN_TOP(((int)this + 0x84)))) {
    F_00406ad0(*((undefined4 *)GEN_TOP(((int)this + 0x70))));
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x84))) = 0xf;
  *((undefined1 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x68))) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x5c))) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x50))) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x40))) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x34))) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2c))) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x24))) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1c))) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[9])REFP(0x1159994));
  return;
}

/* ref: FUN_00e9e6b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e9e6b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe9e6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  F_00ebfd90(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,&(*(int *)&gen_args[0]),(*(int *)&gen_args[0]));
  if ((*(int *)&gen_args[0]) == *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4)))) {
    return 0x135eba0;
  }
  return (*(int *)&gen_args[0]) + 0x68;
}

/* ref: FUN_00e9e6f0 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00e9e6f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xe9e6f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x60, 0, 4);
  undefined1 * puVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c));
  F_0042cbc0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_FWD,&REFG(undefined * PTR32, 0x12fd328));
  F_00ebc440(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)),param_1);
  puVar1 = ((undefined1 *)(gen_frame + 0x4));
  if ((*(int *)(gen_frame + 0x0)) != *((int *)GEN_TOP(((int)this + 8)))) {
    puVar1 = ((undefined1 *)GEN_TOP(((*(int *)(gen_frame + 0x0)) + 0x60)));
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return (uint)puVar1;
}

/* ref: FUN_00e9e750 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00e9e750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe9e750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  
  F_00ebfd90(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_FWD,&(*(uint *)&gen_args[0]),(*(uint *)&gen_args[0]));
  uVar1 = (*(uint *)&gen_args[0]);
  if ((*(uint *)&gen_args[0]) != *((uint *)GEN_TOP(((int)*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) + 4)))) {
    uVar1 = F_00ec46d0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,&(*(uint *)&gen_args[0]),(*(uint *)&gen_args[0]));
  }
  return uVar1;
}

/* ref: FUN_00e9e780 */
GEN_LIB GEN_FRAME byte GEN_STDCALL F_00e9e780(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xe9e780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  if ((*((byte *)GEN_TOP((*((int *)GEN_TOP((*param_1 + 4))) + 0xc + (int)param_1))) & 6) != 0) {
    return 0;
  }
  uVar1 = F_00ec0810(param_1 GEN_EDX_ARG);
  if (uVar1 != 0xffffffff) {
    *param_2 = (char)uVar1;
  }
  return 1;
}

/* ref: FUN_00e9e7b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9e7b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9e7b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115d994));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 1;
  uVar1 = F_00eba620(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,1,0);
  *((uint *)GEN_TOP(((int)this + 0x78))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec4de0(((undefined *)GEN_TOP(((int)this + 0x84))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9e800 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9e800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9e800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115d994));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1a0))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x84))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(((undefined *)GEN_TOP(((int)this + 0x88))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00e9e850 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9e850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9e850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115d9c4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 1;
  uVar1 = F_00eba620(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,1,0);
  *((uint *)GEN_TOP(((int)this + 0x78))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec50e0(((undefined *)GEN_TOP(((int)this + 0x84))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9e8a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9e8a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9e8a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115d9c4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x140))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x84))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d534));
  F_00ebc7d0(((undefined *)GEN_TOP(((int)this + 0x88))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00e9e8f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9e8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9e8f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115d9f4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 1;
  uVar1 = F_00eba620(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,1,0);
  *((uint *)GEN_TOP(((int)this + 0x78))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec50e0(((undefined *)GEN_TOP(((int)this + 0x84))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9e940 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9e940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9e940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115d9f4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x140))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x84))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d534));
  F_00ebc7d0(((undefined *)GEN_TOP(((int)this + 0x88))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00e9e990 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9e990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9e990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115da24));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 1;
  uVar1 = F_00eba620(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,1,0);
  *((uint *)GEN_TOP(((int)this + 0x78))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec50e0(((undefined *)GEN_TOP(((int)this + 0x84))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9e9e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9e9e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9e9e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115da24));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x140))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x84))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d534));
  F_00ebc7d0(((undefined *)GEN_TOP(((int)this + 0x88))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00e9ea30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9ea30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9ea30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115da54));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 1;
  uVar1 = F_00eba620(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,1,0);
  *((uint *)GEN_TOP(((int)this + 0x78))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec53a0(((undefined *)GEN_TOP(((int)this + 0x84))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9ea80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9ea80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9ea80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115da54));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x230))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x84))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d53c));
  F_00ebc860(((undefined *)GEN_TOP(((int)this + 0x88))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00e9ead0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9ead0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9ead0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115da84));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 1;
  uVar1 = F_00eba620(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,1,0);
  *((uint *)GEN_TOP(((int)this + 0x78))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec5660(((undefined *)GEN_TOP(((int)this + 0x84))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9eb20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9eb20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9eb20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115da84));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x170))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x84))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d544));
  F_00ebc8f0(((undefined *)GEN_TOP(((int)this + 0x88))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00e9eb70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9eb70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9eb70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115dab4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 1;
  uVar1 = F_00eba620(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,1,0);
  *((uint *)GEN_TOP(((int)this + 0x78))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec5660(((undefined *)GEN_TOP(((int)this + 0x84))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9ebc0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9ebc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9ebc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115dab4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x170))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x84))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d544));
  F_00ebc8f0(((undefined *)GEN_TOP(((int)this + 0x88))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00e9ec10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9ec10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9ec10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115dae4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 1;
  uVar1 = F_00eba620(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,1,0);
  *((uint *)GEN_TOP(((int)this + 0x78))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec4de0(((undefined *)GEN_TOP(((int)this + 0x84))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9ec60 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9ec60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9ec60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115dae4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1a0))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x84))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(((undefined *)GEN_TOP(((int)this + 0x88))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00e9ecb0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9ecb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9ecb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115db14));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 1;
  uVar1 = F_00eba620(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,1,0);
  *((uint *)GEN_TOP(((int)this + 0x78))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec5920(((undefined *)GEN_TOP(((int)this + 0x84))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9ed00 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9ed00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9ed00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115db14));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x290))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x84))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d54c));
  F_00ebc980(((undefined *)GEN_TOP(((int)this + 0x88))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00e9ed50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9ed50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9ed50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115db44));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 1;
  uVar1 = F_00eba620(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,1,0);
  *((uint *)GEN_TOP(((int)this + 0x78))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec4de0(((undefined *)GEN_TOP(((int)this + 0x84))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9eda0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9eda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9eda0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115db44));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1a0))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x84))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(((undefined *)GEN_TOP(((int)this + 0x88))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00e9edf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9edf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9edf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115db74));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 1;
  uVar1 = F_00eba620(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,1,0);
  *((uint *)GEN_TOP(((int)this + 0x78))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec5be0(((undefined *)GEN_TOP(((int)this + 0x84))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9ee40 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9ee40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9ee40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115db74));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2c0))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x84))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10(((undefined *)GEN_TOP(((int)this + 0x88))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00e9ee90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9ee90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9ee90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dba4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 1;
  uVar1 = F_00eba620(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,1,0);
  *((uint *)GEN_TOP(((int)this + 0x78))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec4de0(((undefined *)GEN_TOP(((int)this + 0x84))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9eee0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9eee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9eee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dba4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1a0))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x84))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(((undefined *)GEN_TOP(((int)this + 0x88))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00e9ef30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9ef30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9ef30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dbd4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d728));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d1d4));
  F_00eb3900(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0xb8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xbc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc0))) = 3;
  uVar1 = F_00ebaa70(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,3,0);
  *((uint *)GEN_TOP(((int)this + 0xb8))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d55c));
  F_00ec61a0(((undefined *)GEN_TOP(((int)this + 0xc4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9ef90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9ef90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9ef90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dbd4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2a0))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d564));
  F_00ebcb00(((undefined *)GEN_TOP(((int)this + 200))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d728));
  uVar1 = F_00ebfee0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00e9efe0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9efe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9efe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dc04));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 1;
  uVar1 = F_00eba620(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,1,0);
  *((uint *)GEN_TOP(((int)this + 0x78))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec4de0(((undefined *)GEN_TOP(((int)this + 0x84))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9f030 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9f030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9f030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dc04));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1a0))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x84))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(((undefined *)GEN_TOP(((int)this + 0x88))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00e9f080 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9f080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9f080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dc34));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 1;
  uVar1 = F_00eba620(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,1,0);
  *((uint *)GEN_TOP(((int)this + 0x78))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec6460(((undefined *)GEN_TOP(((int)this + 0x84))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9f0d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9f0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9f0d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dc34));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x200))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x84))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(((undefined *)GEN_TOP(((int)this + 0x88))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00e9f120 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9f120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9f120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dc64));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d770));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d234));
  F_00eb3e40(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0xd8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xdc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xe0))) = 4;
  uVar1 = F_00ebac50(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,4,0);
  *((uint *)GEN_TOP(((int)this + 0xd8))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d574));
  F_00ec6a20(((undefined *)GEN_TOP(((int)this + 0xe4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9f180 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9f180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9f180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dc64));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa70))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xe4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d57c));
  F_00ebcc80(((undefined *)GEN_TOP(((int)this + 0xe8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d770));
  F_00ebff60(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00e9f1d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9f1d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9f1d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dc94));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec61a0(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9f230 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9f230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9f230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dc94));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x280))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d564));
  F_00ebcb00(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00e9f280 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9f280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9f280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115dcc4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6fe0(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9f2e0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9f2e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9f2e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115dcc4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x400))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d58c));
  F_00ebcd70(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00e9f330 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9f330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9f330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115dcf4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec5be0(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9f390 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9f390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9f390u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115dcf4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2e0))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00e9f3e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9f3e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9f3e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dd24));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec72a0(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9f440 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9f440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9f440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dd24));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x670))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d594));
  F_00ebce00(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00e9f490 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9f490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9f490u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dd54));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec7560(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9f4f0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9f4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9f4f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dd54));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x25c0))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d59c));
  F_00ebce90(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00e9f540 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9f540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9f540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dd84));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec4de0(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9f5a0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9f5a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9f5a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dd84));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1c0))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00e9f5f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9f5f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9f5f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115ddb4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec4de0(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9f650 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9f650(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9f650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115ddb4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1c0))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00e9f6a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9f6a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9f6a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dde4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec4de0(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9f700 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9f700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9f700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dde4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1c0))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00e9f750 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9f750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9f750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115de14));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec4de0(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9f7b0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9f7b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9f7b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115de14));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1c0))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00e9f800 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9f800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9f800u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115de44))
  ;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec7820(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9f860 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9f860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9f860u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115de44))
  ;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x340))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5a4));
  F_00ebcf20(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00e9f8b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9f8b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9f8b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115de74));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec7ae0(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9f910 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9f910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9f910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115de74));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x4c0))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5ac));
  F_00ebcfb0(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00e9f960 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9f960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9f960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dea4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9f9c0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9f9c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9f9c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dea4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x220))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00e9fa10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9fa10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9fa10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115ded4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9fa70 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9fa70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9fa70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115ded4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x220))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00e9fac0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9fac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9fac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115df04));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9fb20 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9fb20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9fb20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115df04));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x220))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00e9fb70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9fb70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9fb70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115df34));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9fbd0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9fbd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9fbd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115df34));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x220))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00e9fc20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9fc20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9fc20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115df64));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9fc80 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9fc80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9fc80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115df64));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x220))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00e9fcd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9fcd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9fcd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115df94));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9fd30 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9fd30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9fd30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115df94));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x220))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00e9fd80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9fd80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9fd80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115dfc4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9fde0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9fde0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9fde0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115dfc4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x220))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00e9fe30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9fe30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9fe30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dff4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9fe90 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9fe90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9fe90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115dff4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x220))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00e9fee0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9fee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9fee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e024));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9ff40 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9ff40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9ff40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e024));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x220))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00e9ff90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00e9ff90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9ff90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e054));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00e9fff0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00e9fff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xe9fff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e054));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x220))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00ea0040 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ea0040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea0040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e084));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00ea00a0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ea00a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea00a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e084));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x220))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00ea00f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ea00f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea00f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e0b4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec5be0(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00ea0150 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ea0150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea0150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e0b4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2e0))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00ea01a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ea01a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea01a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e0e4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec7da0(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00ea0200 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ea0200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea0200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e0e4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x460))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5b4));
  F_00ebd040(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00ea0250 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ea0250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea0250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e114));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec8060(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00ea02b0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ea02b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea02b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e114));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x3a0))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5bc));
  F_00ebd0d0(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00ea0300 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ea0300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea0300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e144));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec4de0(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00ea0360 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ea0360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea0360u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e144));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1c0))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00ea03b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ea03b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea03b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e174));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec8320(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00ea0410 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ea0410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea0410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e174));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x520))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5c4));
  F_00ebd160(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00ea0460 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ea0460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea0460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e1a4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec85e0(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00ea04c0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ea04c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea04c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e1a4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x850))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d5cc));
  F_00ebd1f0(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00ea0510 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ea0510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea0510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e1d4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec5be0(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00ea0570 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ea0570(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea0570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e1d4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2e0))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00ea05c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ea05c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea05c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e204));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00ea0620 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ea0620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea0620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e204));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x220))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00ea0670 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ea0670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea0670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e234));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec5be0(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00ea06d0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ea06d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea06d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e234));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2e0))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00ea0720 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ea0720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea0720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e264));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00ea0780 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ea0780(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea0780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e264));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x220))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00ea07d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ea07d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea07d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e294));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec5be0(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00ea0830 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ea0830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea0830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e294));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x2e0))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d554));
  F_00ebca10(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00ea0880 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ea0880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea0880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e2c4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00ea08e0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ea08e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea08e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e2c4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x220))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00ea0930 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ea0930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea0930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e2f4))
  ;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6460(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00ea0990 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ea0990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea0990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e2f4))
  ;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x220))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d56c));
  F_00ebcb90(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00ea09e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ea09e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea09e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e324));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec53a0(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00ea0a40 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ea0a40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea0a40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e324));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x250))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d53c));
  F_00ebc860(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00ea0a90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ea0a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea0a90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e354));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec61a0(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00ea0af0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ea0af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea0af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e354));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x280))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d564));
  F_00ebcb00(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00ea0b40 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ea0b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea0b40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e384));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec53a0(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00ea0ba0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ea0ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea0ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[11])REFP(0x115e384));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x250))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d53c));
  F_00ebc860(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

/* ref: FUN_00ea0bf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ea0bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea0bf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e3b4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  F_00eba5b0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x78))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x80))) = 1;
  uVar1 = F_00eba620(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,1,0);
  *((uint *)GEN_TOP(((int)this + 0x78))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d524));
  F_00ec4de0(((undefined *)GEN_TOP(((int)this + 0x84))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00ea0c40 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ea0c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea0c40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e3b4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x1a0))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x84))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d52c));
  F_00ebc740(((undefined *)GEN_TOP(((int)this + 0x88))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d680));
  uVar1 = F_00ebfe20(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return uVar1;
}

/* ref: FUN_00ea0c90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00ea0c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea0c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e3e4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) =
       (*(undefined * PTR32 (*)[7])REFP(0x115d274));
  F_00eb41c0(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD);
  *((undefined4 *)GEN_TOP(((int)this + 0x98))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x9c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xa0))) = 2;
  uVar1 = F_00ebad90(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,2,0);
  *((uint *)GEN_TOP(((int)this + 0x98))) = uVar1;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d584));
  F_00ec6fe0(((undefined *)GEN_TOP(((int)this + 0xa4))) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00ea0cf0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00ea0cf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xea0cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x115e3e4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x400))) =
       (*(undefined * PTR32 (*)[3])REFP(0x1159910));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xa4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x115d58c));
  F_00ebcd70(((undefined *)GEN_TOP(((int)this + 0xa8))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) = (*(undefined * PTR32 (*)[5])REFP(0x115d7a0));
  F_00ebffd0(((undefined *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 4))) =
       (*(undefined * PTR32 (*)[5])REFP(0x1159920));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1159964));
  return;
}

