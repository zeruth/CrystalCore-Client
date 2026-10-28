#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_01064820 */
GEN_FRAME uint F_01064820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1064820u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  uVar3 = uVar2;
  if (uVar2 + 4 <= param_2) {
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 8);
    *(undefined1 *)(((int)(uint)(param_1)) + 8) = *(undefined1 *)(((int)(uint)(param_1)) + 0xb);
    *(undefined1 *)(((int)(uint)(param_1)) + 0xb) = uVar1;
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 9);
    *(undefined1 *)(((int)(uint)(param_1)) + 9) = *(undefined1 *)(((int)(uint)(param_1)) + 10);
    *(undefined1 *)(((int)(uint)(param_1)) + 10) = uVar1;
    if (param_2 < uVar2 + 6) {
      return uVar2 + 4;
    }
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0xd);
    *(undefined1 *)(((int)(uint)(param_1)) + 0xd) = *(undefined1 *)(((int)(uint)(param_1)) + 0xc);
    uVar3 = uVar2 + 8;
    *(undefined1 *)(((int)(uint)(param_1)) + 0xc) = uVar1;
    if (uVar2 + 0xc <= param_2) {
      uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x13);
      *(undefined1 *)(((int)(uint)(param_1)) + 0x13) = *(undefined1 *)(((int)(uint)(param_1)) + 0x10);
      *(undefined1 *)(((int)(uint)(param_1)) + 0x10) = uVar1;
      uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x12);
      uVar3 = uVar2 + 0x10;
      *(undefined1 *)(((int)(uint)(param_1)) + 0x12) = *(undefined1 *)(((int)(uint)(param_1)) + 0x11);
      *(undefined1 *)(((int)(uint)(param_1)) + 0x11) = uVar1;
      if (uVar2 + 0x14 <= param_2) {
        uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x18);
        *(undefined1 *)(((int)(uint)(param_1)) + 0x18) = *(undefined1 *)(((int)(uint)(param_1)) + 0x1b);
        *(undefined1 *)(((int)(uint)(param_1)) + 0x1b) = uVar1;
        uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x19);
        *(undefined1 *)(((int)(uint)(param_1)) + 0x19) = *(undefined1 *)(((int)(uint)(param_1)) + 0x1a);
        *(undefined1 *)(((int)(uint)(param_1)) + 0x1a) = uVar1;
        return uVar2 + 0x14;
      }
      if (uVar3 < param_2) {
        uVar2 = F_0105dfc0(param_2 - uVar3,((int)(uint)(param_1)) + 0x18);
        uVar3 = uVar3 + uVar2;
      }
    }
  }
  return uVar3;
}

/* ref: FUN_010648f0 */
GEN_FRAME uint F_010648f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10648f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  uVar5 = uVar2;
  if (uVar2 + 4 <= param_2) {
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 8);
    *(undefined1 *)(((int)(uint)(param_1)) + 8) = *(undefined1 *)(((int)(uint)(param_1)) + 0xb);
    *(undefined1 *)(((int)(uint)(param_1)) + 0xb) = uVar1;
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 9);
    *(undefined1 *)(((int)(uint)(param_1)) + 9) = *(undefined1 *)(((int)(uint)(param_1)) + 10);
    *(undefined1 *)(((int)(uint)(param_1)) + 10) = uVar1;
    if (param_2 < uVar2 + 6) {
      return uVar2 + 4;
    }
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0xd);
    *(undefined1 *)(((int)(uint)(param_1)) + 0xd) = *(undefined1 *)(((int)(uint)(param_1)) + 0xc);
    uVar5 = uVar2 + 8;
    *(undefined1 *)(((int)(uint)(param_1)) + 0xc) = uVar1;
    if (uVar2 + 0xc <= param_2) {
      uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x13);
      *(undefined1 *)(((int)(uint)(param_1)) + 0x13) = *(undefined1 *)(((int)(uint)(param_1)) + 0x10);
      *(undefined1 *)(((int)(uint)(param_1)) + 0x10) = uVar1;
      uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x12);
      uVar5 = uVar2 + 0x10;
      *(undefined1 *)(((int)(uint)(param_1)) + 0x12) = *(undefined1 *)(((int)(uint)(param_1)) + 0x11);
      *(undefined1 *)(((int)(uint)(param_1)) + 0x11) = uVar1;
      if (uVar2 + 0x18 <= param_2) {
        iVar3 = 0;
        iVar4 = 2;
        do {
          uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x18 + iVar3);
          *(undefined1 *)(((int)(uint)(param_1)) + 0x18 + iVar3) = *(undefined1 *)(((int)(uint)(param_1)) + 0x1b + iVar3);
          *(undefined1 *)(((int)(uint)(param_1)) + 0x1b + iVar3) = uVar1;
          uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x19 + iVar3);
          *(undefined1 *)(((int)(uint)(param_1)) + 0x19 + iVar3) = *(undefined1 *)(((int)(uint)(param_1)) + 0x1a + iVar3);
          *(undefined1 *)(((int)(uint)(param_1)) + 0x1a + iVar3) = uVar1;
          iVar3 = iVar3 + 4;
          iVar4 = iVar4 - 1;
        } while (iVar4 != 0);
        return uVar5 + iVar3;
      }
      if (uVar5 < param_2) {
        uVar2 = F_0105dfc0(param_2 - uVar5,((int)(uint)(param_1)) + 0x18);
        uVar5 = uVar5 + uVar2;
      }
    }
  }
  return uVar5;
}

/* ref: FUN_010649d0 */
GEN_FRAME uint F_010649d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10649d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  uVar5 = uVar2;
  if (uVar2 + 4 <= param_2) {
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 8);
    *(undefined1 *)(((int)(uint)(param_1)) + 8) = *(undefined1 *)(((int)(uint)(param_1)) + 0xb);
    *(undefined1 *)(((int)(uint)(param_1)) + 0xb) = uVar1;
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 9);
    *(undefined1 *)(((int)(uint)(param_1)) + 9) = *(undefined1 *)(((int)(uint)(param_1)) + 10);
    *(undefined1 *)(((int)(uint)(param_1)) + 10) = uVar1;
    if (param_2 < uVar2 + 6) {
      return uVar2 + 4;
    }
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0xd);
    *(undefined1 *)(((int)(uint)(param_1)) + 0xd) = *(undefined1 *)(((int)(uint)(param_1)) + 0xc);
    uVar5 = uVar2 + 8;
    *(undefined1 *)(((int)(uint)(param_1)) + 0xc) = uVar1;
    if (uVar2 + 0xc <= param_2) {
      uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x13);
      *(undefined1 *)(((int)(uint)(param_1)) + 0x13) = *(undefined1 *)(((int)(uint)(param_1)) + 0x10);
      *(undefined1 *)(((int)(uint)(param_1)) + 0x10) = uVar1;
      uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x12);
      uVar5 = uVar2 + 0x10;
      *(undefined1 *)(((int)(uint)(param_1)) + 0x12) = *(undefined1 *)(((int)(uint)(param_1)) + 0x11);
      *(undefined1 *)(((int)(uint)(param_1)) + 0x11) = uVar1;
      if (uVar2 + 0x20 <= param_2) {
        iVar3 = 0;
        iVar4 = 4;
        do {
          uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x18 + iVar3);
          *(undefined1 *)(((int)(uint)(param_1)) + 0x18 + iVar3) = *(undefined1 *)(((int)(uint)(param_1)) + 0x1b + iVar3);
          *(undefined1 *)(((int)(uint)(param_1)) + 0x1b + iVar3) = uVar1;
          uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x19 + iVar3);
          *(undefined1 *)(((int)(uint)(param_1)) + 0x19 + iVar3) = *(undefined1 *)(((int)(uint)(param_1)) + 0x1a + iVar3);
          *(undefined1 *)(((int)(uint)(param_1)) + 0x1a + iVar3) = uVar1;
          iVar3 = iVar3 + 4;
          iVar4 = iVar4 - 1;
        } while (iVar4 != 0);
        return uVar5 + iVar3;
      }
      if (uVar5 < param_2) {
        uVar2 = F_0105dfc0(param_2 - uVar5,((int)(uint)(param_1)) + 0x18);
        uVar5 = uVar5 + uVar2;
      }
    }
  }
  return uVar5;
}

/* ref: FUN_01064ab0 */
GEN_FRAME uint F_01064ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1064ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  uVar5 = uVar2;
  if (uVar2 + 4 <= param_2) {
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 8);
    *(undefined1 *)(((int)(uint)(param_1)) + 8) = *(undefined1 *)(((int)(uint)(param_1)) + 0xb);
    *(undefined1 *)(((int)(uint)(param_1)) + 0xb) = uVar1;
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 9);
    *(undefined1 *)(((int)(uint)(param_1)) + 9) = *(undefined1 *)(((int)(uint)(param_1)) + 10);
    *(undefined1 *)(((int)(uint)(param_1)) + 10) = uVar1;
    if (param_2 < uVar2 + 6) {
      return uVar2 + 4;
    }
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0xd);
    *(undefined1 *)(((int)(uint)(param_1)) + 0xd) = *(undefined1 *)(((int)(uint)(param_1)) + 0xc);
    uVar5 = uVar2 + 8;
    *(undefined1 *)(((int)(uint)(param_1)) + 0xc) = uVar1;
    if (uVar2 + 0xc <= param_2) {
      uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x13);
      *(undefined1 *)(((int)(uint)(param_1)) + 0x13) = *(undefined1 *)(((int)(uint)(param_1)) + 0x10);
      *(undefined1 *)(((int)(uint)(param_1)) + 0x10) = uVar1;
      uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x12);
      uVar5 = uVar2 + 0x10;
      *(undefined1 *)(((int)(uint)(param_1)) + 0x12) = *(undefined1 *)(((int)(uint)(param_1)) + 0x11);
      *(undefined1 *)(((int)(uint)(param_1)) + 0x11) = uVar1;
      if (uVar2 + 0x30 <= param_2) {
        iVar3 = 0;
        iVar4 = 8;
        do {
          uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x18 + iVar3);
          *(undefined1 *)(((int)(uint)(param_1)) + 0x18 + iVar3) = *(undefined1 *)(((int)(uint)(param_1)) + 0x1b + iVar3);
          *(undefined1 *)(((int)(uint)(param_1)) + 0x1b + iVar3) = uVar1;
          uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x19 + iVar3);
          *(undefined1 *)(((int)(uint)(param_1)) + 0x19 + iVar3) = *(undefined1 *)(((int)(uint)(param_1)) + 0x1a + iVar3);
          *(undefined1 *)(((int)(uint)(param_1)) + 0x1a + iVar3) = uVar1;
          iVar3 = iVar3 + 4;
          iVar4 = iVar4 - 1;
        } while (iVar4 != 0);
        return uVar5 + iVar3;
      }
      if (uVar5 < param_2) {
        uVar2 = F_0105dfc0(param_2 - uVar5,((int)(uint)(param_1)) + 0x18);
        uVar5 = uVar5 + uVar2;
      }
    }
  }
  return uVar5;
}

/* ref: FUN_01064b90 */
GEN_FRAME uint F_01064b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1064b90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  uVar5 = uVar2;
  if (uVar2 + 4 <= param_2) {
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 8);
    *(undefined1 *)(((int)(uint)(param_1)) + 8) = *(undefined1 *)(((int)(uint)(param_1)) + 0xb);
    *(undefined1 *)(((int)(uint)(param_1)) + 0xb) = uVar1;
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 9);
    *(undefined1 *)(((int)(uint)(param_1)) + 9) = *(undefined1 *)(((int)(uint)(param_1)) + 10);
    *(undefined1 *)(((int)(uint)(param_1)) + 10) = uVar1;
    if (param_2 < uVar2 + 6) {
      return uVar2 + 4;
    }
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0xd);
    *(undefined1 *)(((int)(uint)(param_1)) + 0xd) = *(undefined1 *)(((int)(uint)(param_1)) + 0xc);
    uVar5 = uVar2 + 8;
    *(undefined1 *)(((int)(uint)(param_1)) + 0xc) = uVar1;
    if (uVar2 + 0xc <= param_2) {
      uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x13);
      *(undefined1 *)(((int)(uint)(param_1)) + 0x13) = *(undefined1 *)(((int)(uint)(param_1)) + 0x10);
      *(undefined1 *)(((int)(uint)(param_1)) + 0x10) = uVar1;
      uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x12);
      uVar5 = uVar2 + 0x10;
      *(undefined1 *)(((int)(uint)(param_1)) + 0x12) = *(undefined1 *)(((int)(uint)(param_1)) + 0x11);
      *(undefined1 *)(((int)(uint)(param_1)) + 0x11) = uVar1;
      if (uVar2 + 0x50 <= param_2) {
        iVar3 = 0;
        iVar4 = 0x10;
        do {
          uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x18 + iVar3);
          *(undefined1 *)(((int)(uint)(param_1)) + 0x18 + iVar3) = *(undefined1 *)(((int)(uint)(param_1)) + 0x1b + iVar3);
          *(undefined1 *)(((int)(uint)(param_1)) + 0x1b + iVar3) = uVar1;
          uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x19 + iVar3);
          *(undefined1 *)(((int)(uint)(param_1)) + 0x19 + iVar3) = *(undefined1 *)(((int)(uint)(param_1)) + 0x1a + iVar3);
          *(undefined1 *)(((int)(uint)(param_1)) + 0x1a + iVar3) = uVar1;
          iVar3 = iVar3 + 4;
          iVar4 = iVar4 - 1;
        } while (iVar4 != 0);
        return uVar5 + iVar3;
      }
      if (uVar5 < param_2) {
        uVar2 = F_0105dfc0(param_2 - uVar5,((int)(uint)(param_1)) + 0x18);
        uVar5 = uVar5 + uVar2;
      }
    }
  }
  return uVar5;
}

/* ref: FUN_01064c70 */
GEN_FRAME uint F_01064c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1064c70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  uVar5 = uVar2;
  if (uVar2 + 4 <= param_2) {
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 8);
    *(undefined1 *)(((int)(uint)(param_1)) + 8) = *(undefined1 *)(((int)(uint)(param_1)) + 0xb);
    *(undefined1 *)(((int)(uint)(param_1)) + 0xb) = uVar1;
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 9);
    *(undefined1 *)(((int)(uint)(param_1)) + 9) = *(undefined1 *)(((int)(uint)(param_1)) + 10);
    *(undefined1 *)(((int)(uint)(param_1)) + 10) = uVar1;
    if (param_2 < uVar2 + 6) {
      return uVar2 + 4;
    }
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0xd);
    *(undefined1 *)(((int)(uint)(param_1)) + 0xd) = *(undefined1 *)(((int)(uint)(param_1)) + 0xc);
    uVar5 = uVar2 + 8;
    *(undefined1 *)(((int)(uint)(param_1)) + 0xc) = uVar1;
    if (uVar2 + 0xc <= param_2) {
      uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x13);
      *(undefined1 *)(((int)(uint)(param_1)) + 0x13) = *(undefined1 *)(((int)(uint)(param_1)) + 0x10);
      *(undefined1 *)(((int)(uint)(param_1)) + 0x10) = uVar1;
      uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x12);
      uVar5 = uVar2 + 0x10;
      *(undefined1 *)(((int)(uint)(param_1)) + 0x12) = *(undefined1 *)(((int)(uint)(param_1)) + 0x11);
      *(undefined1 *)(((int)(uint)(param_1)) + 0x11) = uVar1;
      if (uVar2 + 0x90 <= param_2) {
        iVar3 = 0;
        iVar4 = 0x20;
        do {
          uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x18 + iVar3);
          *(undefined1 *)(((int)(uint)(param_1)) + 0x18 + iVar3) = *(undefined1 *)(((int)(uint)(param_1)) + 0x1b + iVar3);
          *(undefined1 *)(((int)(uint)(param_1)) + 0x1b + iVar3) = uVar1;
          uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x19 + iVar3);
          *(undefined1 *)(((int)(uint)(param_1)) + 0x19 + iVar3) = *(undefined1 *)(((int)(uint)(param_1)) + 0x1a + iVar3);
          *(undefined1 *)(((int)(uint)(param_1)) + 0x1a + iVar3) = uVar1;
          iVar3 = iVar3 + 4;
          iVar4 = iVar4 - 1;
        } while (iVar4 != 0);
        return uVar5 + iVar3;
      }
      if (uVar5 < param_2) {
        uVar2 = F_0105dfc0(param_2 - uVar5,((int)(uint)(param_1)) + 0x18);
        uVar5 = uVar5 + uVar2;
      }
    }
  }
  return uVar5;
}

/* ref: FUN_01064d60 */
GEN_FRAME uint F_01064d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1064d60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  uVar5 = uVar2;
  if (uVar2 + 4 <= param_2) {
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 8);
    *(undefined1 *)(((int)(uint)(param_1)) + 8) = *(undefined1 *)(((int)(uint)(param_1)) + 0xb);
    *(undefined1 *)(((int)(uint)(param_1)) + 0xb) = uVar1;
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 9);
    *(undefined1 *)(((int)(uint)(param_1)) + 9) = *(undefined1 *)(((int)(uint)(param_1)) + 10);
    *(undefined1 *)(((int)(uint)(param_1)) + 10) = uVar1;
    if (param_2 < uVar2 + 6) {
      return uVar2 + 4;
    }
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0xd);
    *(undefined1 *)(((int)(uint)(param_1)) + 0xd) = *(undefined1 *)(((int)(uint)(param_1)) + 0xc);
    uVar5 = uVar2 + 8;
    *(undefined1 *)(((int)(uint)(param_1)) + 0xc) = uVar1;
    if (uVar2 + 0xc <= param_2) {
      uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x13);
      *(undefined1 *)(((int)(uint)(param_1)) + 0x13) = *(undefined1 *)(((int)(uint)(param_1)) + 0x10);
      *(undefined1 *)(((int)(uint)(param_1)) + 0x10) = uVar1;
      uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x12);
      uVar5 = uVar2 + 0x10;
      *(undefined1 *)(((int)(uint)(param_1)) + 0x12) = *(undefined1 *)(((int)(uint)(param_1)) + 0x11);
      *(undefined1 *)(((int)(uint)(param_1)) + 0x11) = uVar1;
      if (uVar2 + 0x110 <= param_2) {
        iVar3 = 0;
        iVar4 = 0x40;
        do {
          uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x18 + iVar3);
          *(undefined1 *)(((int)(uint)(param_1)) + 0x18 + iVar3) = *(undefined1 *)(((int)(uint)(param_1)) + 0x1b + iVar3);
          *(undefined1 *)(((int)(uint)(param_1)) + 0x1b + iVar3) = uVar1;
          uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x19 + iVar3);
          *(undefined1 *)(((int)(uint)(param_1)) + 0x19 + iVar3) = *(undefined1 *)(((int)(uint)(param_1)) + 0x1a + iVar3);
          *(undefined1 *)(((int)(uint)(param_1)) + 0x1a + iVar3) = uVar1;
          iVar3 = iVar3 + 4;
          iVar4 = iVar4 - 1;
        } while (iVar4 != 0);
        return uVar5 + iVar3;
      }
      if (uVar5 < param_2) {
        uVar2 = F_0105dfc0(param_2 - uVar5,((int)(uint)(param_1)) + 0x18);
        uVar5 = uVar5 + uVar2;
      }
    }
  }
  return uVar5;
}

/* ref: FUN_01064e50 */
GEN_FRAME uint F_01064e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1064e50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  uVar5 = uVar2;
  if (uVar2 + 4 <= param_2) {
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 8);
    *(undefined1 *)(((int)(uint)(param_1)) + 8) = *(undefined1 *)(((int)(uint)(param_1)) + 0xb);
    *(undefined1 *)(((int)(uint)(param_1)) + 0xb) = uVar1;
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 9);
    *(undefined1 *)(((int)(uint)(param_1)) + 9) = *(undefined1 *)(((int)(uint)(param_1)) + 10);
    *(undefined1 *)(((int)(uint)(param_1)) + 10) = uVar1;
    if (param_2 < uVar2 + 6) {
      return uVar2 + 4;
    }
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0xd);
    *(undefined1 *)(((int)(uint)(param_1)) + 0xd) = *(undefined1 *)(((int)(uint)(param_1)) + 0xc);
    uVar5 = uVar2 + 8;
    *(undefined1 *)(((int)(uint)(param_1)) + 0xc) = uVar1;
    if (uVar2 + 0xc <= param_2) {
      uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x13);
      *(undefined1 *)(((int)(uint)(param_1)) + 0x13) = *(undefined1 *)(((int)(uint)(param_1)) + 0x10);
      *(undefined1 *)(((int)(uint)(param_1)) + 0x10) = uVar1;
      uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x12);
      uVar5 = uVar2 + 0x10;
      *(undefined1 *)(((int)(uint)(param_1)) + 0x12) = *(undefined1 *)(((int)(uint)(param_1)) + 0x11);
      *(undefined1 *)(((int)(uint)(param_1)) + 0x11) = uVar1;
      if (uVar2 + 0x210 <= param_2) {
        iVar3 = 0;
        iVar4 = 0x80;
        do {
          uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x18 + iVar3);
          *(undefined1 *)(((int)(uint)(param_1)) + 0x18 + iVar3) = *(undefined1 *)(((int)(uint)(param_1)) + 0x1b + iVar3);
          *(undefined1 *)(((int)(uint)(param_1)) + 0x1b + iVar3) = uVar1;
          uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x19 + iVar3);
          *(undefined1 *)(((int)(uint)(param_1)) + 0x19 + iVar3) = *(undefined1 *)(((int)(uint)(param_1)) + 0x1a + iVar3);
          *(undefined1 *)(((int)(uint)(param_1)) + 0x1a + iVar3) = uVar1;
          iVar3 = iVar3 + 4;
          iVar4 = iVar4 - 1;
        } while (iVar4 != 0);
        return uVar5 + iVar3;
      }
      if (uVar5 < param_2) {
        uVar2 = F_0105dfc0(param_2 - uVar5,((int)(uint)(param_1)) + 0x18);
        uVar5 = uVar5 + uVar2;
      }
    }
  }
  return uVar5;
}

/* ref: FUN_01064f40 */
GEN_FRAME uint F_01064f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1064f40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  uVar5 = uVar2;
  if (uVar2 + 4 <= param_2) {
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 8);
    *(undefined1 *)(((int)(uint)(param_1)) + 8) = *(undefined1 *)(((int)(uint)(param_1)) + 0xb);
    *(undefined1 *)(((int)(uint)(param_1)) + 0xb) = uVar1;
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 9);
    *(undefined1 *)(((int)(uint)(param_1)) + 9) = *(undefined1 *)(((int)(uint)(param_1)) + 10);
    *(undefined1 *)(((int)(uint)(param_1)) + 10) = uVar1;
    if (param_2 < uVar2 + 6) {
      return uVar2 + 4;
    }
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0xd);
    *(undefined1 *)(((int)(uint)(param_1)) + 0xd) = *(undefined1 *)(((int)(uint)(param_1)) + 0xc);
    uVar5 = uVar2 + 8;
    *(undefined1 *)(((int)(uint)(param_1)) + 0xc) = uVar1;
    if (uVar2 + 0xc <= param_2) {
      uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x13);
      *(undefined1 *)(((int)(uint)(param_1)) + 0x13) = *(undefined1 *)(((int)(uint)(param_1)) + 0x10);
      *(undefined1 *)(((int)(uint)(param_1)) + 0x10) = uVar1;
      uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x12);
      uVar5 = uVar2 + 0x10;
      *(undefined1 *)(((int)(uint)(param_1)) + 0x12) = *(undefined1 *)(((int)(uint)(param_1)) + 0x11);
      *(undefined1 *)(((int)(uint)(param_1)) + 0x11) = uVar1;
      if (uVar2 + 0x40c <= param_2) {
        iVar3 = 0;
        iVar4 = 0xff;
        do {
          uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x18 + iVar3);
          *(undefined1 *)(((int)(uint)(param_1)) + 0x18 + iVar3) = *(undefined1 *)(((int)(uint)(param_1)) + 0x1b + iVar3);
          *(undefined1 *)(((int)(uint)(param_1)) + 0x1b + iVar3) = uVar1;
          uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x19 + iVar3);
          *(undefined1 *)(((int)(uint)(param_1)) + 0x19 + iVar3) = *(undefined1 *)(((int)(uint)(param_1)) + 0x1a + iVar3);
          *(undefined1 *)(((int)(uint)(param_1)) + 0x1a + iVar3) = uVar1;
          iVar3 = iVar3 + 4;
          iVar4 = iVar4 - 1;
        } while (iVar4 != 0);
        return uVar5 + iVar3;
      }
      if (uVar5 < param_2) {
        uVar2 = F_0105dfc0(param_2 - uVar5,((int)(uint)(param_1)) + 0x18);
        uVar5 = uVar5 + uVar2;
      }
    }
  }
  return uVar5;
}

/* ref: FUN_01065030 */
GEN_FRAME uint F_01065030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065030u, gen_a0, gen_a1, 0u, 0u);
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
  return 0xc;
}

/* ref: FUN_010650c0 */
GEN_FRAME uint F_010650c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10650c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  uVar3 = uVar2;
  if (uVar2 + 4 <= param_2) {
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0xb);
    *(undefined1 *)(((int)(uint)(param_1)) + 0xb) = *(undefined1 *)(((int)(uint)(param_1)) + 8);
    *(undefined1 *)(((int)(uint)(param_1)) + 8) = uVar1;
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 10);
    *(undefined1 *)(((int)(uint)(param_1)) + 10) = *(undefined1 *)(((int)(uint)(param_1)) + 9);
    uVar3 = uVar2 + 0xc;
    *(undefined1 *)(((int)(uint)(param_1)) + 9) = uVar1;
    if (param_2 < uVar3) {
      return uVar2 + 8;
    }
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x10);
    *(undefined1 *)(((int)(uint)(param_1)) + 0x10) = *(undefined1 *)(((int)(uint)(param_1)) + 0x13);
    *(undefined1 *)(((int)(uint)(param_1)) + 0x13) = uVar1;
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x11);
    *(undefined1 *)(((int)(uint)(param_1)) + 0x11) = *(undefined1 *)(((int)(uint)(param_1)) + 0x12);
    *(undefined1 *)(((int)(uint)(param_1)) + 0x12) = uVar1;
  }
  return uVar3;
}

/* ref: FUN_01065130 */
GEN_FRAME uint F_01065130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065130u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_01065190 */
GEN_FRAME uint F_01065190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065190u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0xb < param_2) {
    uVar1 = param_1[8];
    param_1[8] = param_1[0xb];
    uVar2 = param_1[10];
    param_1[0xb] = uVar1;
    param_1[10] = param_1[9];
    param_1[9] = uVar2;
    return 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_01065220 */
GEN_FRAME uint F_01065220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065220u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0xf < param_2) {
    iVar5 = 2;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_010652d0 */
GEN_FRAME uint F_010652d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10652d0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x17 < param_2) {
    iVar5 = 4;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_01065380 */
GEN_FRAME uint F_01065380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065380u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x27 < param_2) {
    iVar5 = 8;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_01065430 */
GEN_FRAME uint F_01065430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065430u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x47 < param_2) {
    iVar5 = 0x10;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_010654e0 */
GEN_FRAME uint F_010654e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10654e0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x87 < param_2) {
    iVar5 = 0x20;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_01065590 */
GEN_FRAME uint F_01065590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065590u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x107 < param_2) {
    iVar5 = 0x40;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_01065640 */
GEN_FRAME uint F_01065640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065640u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x207 < param_2) {
    iVar5 = 0x80;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_010656f0 */
GEN_FRAME uint F_010656f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10656f0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x403 < param_2) {
    iVar5 = 0xff;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_010657a0 */
GEN_FRAME uint F_010657a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10657a0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0xb < param_2) {
    uVar1 = param_1[8];
    param_1[8] = param_1[0xb];
    uVar2 = param_1[10];
    param_1[0xb] = uVar1;
    param_1[10] = param_1[9];
    param_1[9] = uVar2;
    return 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_01065830 */
GEN_FRAME uint F_01065830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065830u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0xf < param_2) {
    iVar5 = 2;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_010658e0 */
GEN_FRAME uint F_010658e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10658e0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x17 < param_2) {
    iVar5 = 4;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_01065990 */
GEN_FRAME uint F_01065990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065990u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x27 < param_2) {
    iVar5 = 8;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_01065a40 */
GEN_FRAME uint F_01065a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065a40u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x47 < param_2) {
    iVar5 = 0x10;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_01065af0 */
GEN_FRAME uint F_01065af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065af0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x87 < param_2) {
    iVar5 = 0x20;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_01065ba0 */
GEN_FRAME uint F_01065ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x107 < param_2) {
    iVar5 = 0x40;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_01065c50 */
GEN_FRAME uint F_01065c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065c50u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x207 < param_2) {
    iVar5 = 0x80;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_01065d00 */
GEN_FRAME uint F_01065d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065d00u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x403 < param_2) {
    iVar5 = 0xff;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_01065db0 */
GEN_FRAME uint F_01065db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065db0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 * puVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar3 = 0;
  puVar2 = param_1;
  do {
    if (param_2 <= uVar4) {
      return uVar4;
    }
    uVar1 = *puVar2;
    *puVar2 = puVar2[1];
    puVar2[1] = uVar1;
    iVar3 = iVar3 + 1;
    uVar4 = uVar4 + 10;
    puVar2 = puVar2 + 10;
  } while (iVar3 < 0x1e);
  return uVar4;
}

/* ref: FUN_01065df0 */
GEN_FRAME uint F_01065df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065df0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = 4;
  if (0xd < param_2) {
    uVar1 = *(undefined1 *)(param_1 + 4);
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_1 + 5);
    *(undefined1 *)(param_1 + 5) = uVar1;
    return 0xe;
  }
  if (4 < param_2) {
    if (param_2 - 4 < 2) {
      return 4;
    }
    uVar1 = *(undefined1 *)(param_1 + 4);
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_1 + 5);
    *(undefined1 *)(param_1 + 5) = uVar1;
    uVar2 = (-(uint)(param_2 - 4 < 10) & 0xfffffffa) + 0xe;
  }
  return uVar2;
}

/* ref: FUN_01065e50 */
GEN_FRAME uint F_01065e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065e50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 200) & 0xffffff38) + 200;
}

/* ref: FUN_01065e70 */
GEN_FRAME uint F_01065e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065e70u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  return 4;
}

/* ref: FUN_01065ea0 */
GEN_FRAME uint F_01065ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065ea0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 * puVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar3 = 0;
  puVar2 = (undefined1 *)(param_1 + 7);
  do {
    if (param_2 <= uVar4) {
      return uVar4;
    }
    uVar1 = puVar2[-7];
    puVar2[-7] = puVar2[-6];
    puVar2[-6] = uVar1;
    uVar1 = puVar2[-3];
    puVar2[-3] = puVar2[-2];
    puVar2[-2] = uVar1;
    uVar1 = puVar2[-1];
    puVar2[-1] = *puVar2;
    *puVar2 = uVar1;
    iVar3 = iVar3 + 1;
    uVar4 = uVar4 + 9;
    puVar2 = puVar2 + 10;
  } while (iVar3 < 0x10);
  return uVar4;
}

/* ref: FUN_01065ef0 */
GEN_FRAME uint F_01065ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1065ef0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = 4;
  if (0xd < param_2) {
    uVar1 = *(undefined1 *)(param_1 + 4);
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_1 + 5);
    *(undefined1 *)(param_1 + 5) = uVar1;
    uVar1 = *(undefined1 *)(param_1 + 8);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_1 + 9);
    *(undefined1 *)(param_1 + 9) = uVar1;
    uVar1 = *(undefined1 *)(param_1 + 10);
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_1 + 0xb);
    *(undefined1 *)(param_1 + 0xb) = uVar1;
    return 0xd;
  }
  if (4 < param_2) {
    uVar2 = F_0105e470(param_1 + 4,param_2 - 4,param_3);
    uVar2 = uVar2 + 4;
  }
  return uVar2;
}

/* ref: FUN_01065f60 */
GEN_FRAME uint F_01065f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065f60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 200) & 0xffffff38) + 200;
}

/* ref: FUN_01065f80 */
GEN_FRAME uint F_01065f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065f80u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  return 3;
}

/* ref: FUN_01065fb0 */
GEN_FRAME uint F_01065fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1065fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  uVar2 = param_1[2];
  param_1[3] = uVar1;
  param_1[2] = param_1[1];
  param_1[1] = uVar2;
  uVar3 = 8;
  if (0xb < param_2) {
    uVar1 = param_1[8];
    param_1[8] = param_1[0xb];
    uVar2 = param_1[10];
    param_1[0xb] = uVar1;
    param_1[10] = param_1[9];
    param_1[9] = uVar2;
    return 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_01066020 */
GEN_FRAME uint F_01066020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066020u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  uVar2 = param_1[2];
  param_1[3] = uVar1;
  param_1[2] = param_1[1];
  param_1[1] = uVar2;
  uVar4 = 8;
  if (0xf < param_2) {
    iVar6 = 2;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 8];
      param_1[iVar5 + 8] = param_1[iVar5 + 0xb];
      param_1[iVar5 + 0xb] = uVar1;
      uVar1 = param_1[iVar5 + 9];
      param_1[iVar5 + 9] = param_1[iVar5 + 10];
      param_1[iVar5 + 10] = uVar1;
      iVar6 = iVar6 - 1;
      iVar3 = iVar5 + 4;
    } while (iVar6 != 0);
    return iVar5 + 0xc;
  }
  if (8 < param_2) {
    uVar4 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar4 = uVar4 + 8;
  }
  return uVar4;
}

/* ref: FUN_010660b0 */
GEN_FRAME uint F_010660b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10660b0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  uVar2 = param_1[2];
  param_1[3] = uVar1;
  param_1[2] = param_1[1];
  param_1[1] = uVar2;
  uVar4 = 8;
  if (0x17 < param_2) {
    iVar6 = 4;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 8];
      param_1[iVar5 + 8] = param_1[iVar5 + 0xb];
      param_1[iVar5 + 0xb] = uVar1;
      uVar1 = param_1[iVar5 + 9];
      param_1[iVar5 + 9] = param_1[iVar5 + 10];
      param_1[iVar5 + 10] = uVar1;
      iVar6 = iVar6 - 1;
      iVar3 = iVar5 + 4;
    } while (iVar6 != 0);
    return iVar5 + 0xc;
  }
  if (8 < param_2) {
    uVar4 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar4 = uVar4 + 8;
  }
  return uVar4;
}

/* ref: FUN_01066140 */
GEN_FRAME uint F_01066140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066140u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  uVar2 = param_1[2];
  param_1[3] = uVar1;
  param_1[2] = param_1[1];
  param_1[1] = uVar2;
  uVar4 = 8;
  if (0x27 < param_2) {
    iVar6 = 8;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 8];
      param_1[iVar5 + 8] = param_1[iVar5 + 0xb];
      param_1[iVar5 + 0xb] = uVar1;
      uVar1 = param_1[iVar5 + 9];
      param_1[iVar5 + 9] = param_1[iVar5 + 10];
      param_1[iVar5 + 10] = uVar1;
      iVar6 = iVar6 - 1;
      iVar3 = iVar5 + 4;
    } while (iVar6 != 0);
    return iVar5 + 0xc;
  }
  if (8 < param_2) {
    uVar4 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar4 = uVar4 + 8;
  }
  return uVar4;
}

/* ref: FUN_010661d0 */
GEN_FRAME uint F_010661d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10661d0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  uVar2 = param_1[2];
  param_1[3] = uVar1;
  param_1[2] = param_1[1];
  param_1[1] = uVar2;
  uVar4 = 8;
  if (0x47 < param_2) {
    iVar6 = 0x10;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 8];
      param_1[iVar5 + 8] = param_1[iVar5 + 0xb];
      param_1[iVar5 + 0xb] = uVar1;
      uVar1 = param_1[iVar5 + 9];
      param_1[iVar5 + 9] = param_1[iVar5 + 10];
      param_1[iVar5 + 10] = uVar1;
      iVar6 = iVar6 - 1;
      iVar3 = iVar5 + 4;
    } while (iVar6 != 0);
    return iVar5 + 0xc;
  }
  if (8 < param_2) {
    uVar4 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar4 = uVar4 + 8;
  }
  return uVar4;
}

/* ref: FUN_01066260 */
GEN_FRAME uint F_01066260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066260u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  uVar2 = param_1[2];
  param_1[3] = uVar1;
  param_1[2] = param_1[1];
  param_1[1] = uVar2;
  uVar4 = 8;
  if (0x87 < param_2) {
    iVar6 = 0x20;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 8];
      param_1[iVar5 + 8] = param_1[iVar5 + 0xb];
      param_1[iVar5 + 0xb] = uVar1;
      uVar1 = param_1[iVar5 + 9];
      param_1[iVar5 + 9] = param_1[iVar5 + 10];
      param_1[iVar5 + 10] = uVar1;
      iVar6 = iVar6 - 1;
      iVar3 = iVar5 + 4;
    } while (iVar6 != 0);
    return iVar5 + 0xc;
  }
  if (8 < param_2) {
    uVar4 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar4 = uVar4 + 8;
  }
  return uVar4;
}

/* ref: FUN_010662f0 */
GEN_FRAME unsigned int F_010662f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10662f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = 0;
  do {
    if (param_2 <= uVar1) {
      return 0;
    }
    iVar2 = iVar2 + 1;
    uVar1 = uVar1 + 2;
  } while (iVar2 < 5);
  return 0;
}

/* ref: FUN_01066310 */
GEN_FRAME uint F_01066310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066310u, gen_a0, gen_a1, 0u, 0u);
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
  return 5;
}

/* ref: FUN_01066340 */
GEN_FRAME uint F_01066340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066340u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x28) & 0xffffffd8) + 0x28;
}

/* ref: FUN_01066360 */
GEN_FRAME uint F_01066360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066360u, gen_a0, gen_a1, 0u, 0u);
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
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  return 8 - (param_2 < 8);
}

/* ref: FUN_010663b0 */
GEN_FRAME uint F_010663b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10663b0u, gen_a0, gen_a1, 0u, 0u);
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
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  return (-(uint)(param_2 < 0x27) & 0xffffffe0) + 0x27;
}

/* ref: FUN_01066410 */
GEN_FRAME uint F_01066410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066410u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x100) & 0xffffff00) + 0x100;
}

/* ref: FUN_01066430 */
GEN_FRAME uint F_01066430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066430u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_01066460 */
GEN_FRAME uint F_01066460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066460u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x100) & 0xffffff00) + 0x100;
}

/* ref: FUN_01066480 */
GEN_FRAME uint F_01066480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066480u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0xfd8) & 0xfffff028) + 0xfd8;
}

/* ref: FUN_010664a0 */
GEN_FRAME uint F_010664a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10664a0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  uVar3 = 4;
  if (7 < param_2) {
    uVar1 = param_1[4];
    param_1[4] = param_1[7];
    uVar2 = param_1[6];
    param_1[7] = uVar1;
    param_1[6] = param_1[5];
    param_1[5] = uVar2;
    return 8;
  }
  if (4 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_01066500 */
GEN_FRAME uint F_01066500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066500u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = param_1[1];
  param_1[1] = *param_1;
  *param_1 = uVar1;
  uVar3 = 4;
  if (0xb < param_2) {
    iVar5 = 2;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 4];
      param_1[iVar4 + 4] = param_1[iVar4 + 7];
      param_1[iVar4 + 7] = uVar1;
      uVar1 = param_1[iVar4 + 5];
      param_1[iVar4 + 5] = param_1[iVar4 + 6];
      param_1[iVar4 + 6] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 8;
  }
  if (4 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_01066580 */
GEN_FRAME uint F_01066580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066580u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = param_1[1];
  param_1[1] = *param_1;
  *param_1 = uVar1;
  uVar3 = 4;
  if (0x13 < param_2) {
    iVar5 = 4;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 4];
      param_1[iVar4 + 4] = param_1[iVar4 + 7];
      param_1[iVar4 + 7] = uVar1;
      uVar1 = param_1[iVar4 + 5];
      param_1[iVar4 + 5] = param_1[iVar4 + 6];
      param_1[iVar4 + 6] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 8;
  }
  if (4 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_01066600 */
GEN_FRAME uint F_01066600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066600u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = param_1[1];
  param_1[1] = *param_1;
  *param_1 = uVar1;
  uVar3 = 4;
  if (0x23 < param_2) {
    iVar5 = 8;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 4];
      param_1[iVar4 + 4] = param_1[iVar4 + 7];
      param_1[iVar4 + 7] = uVar1;
      uVar1 = param_1[iVar4 + 5];
      param_1[iVar4 + 5] = param_1[iVar4 + 6];
      param_1[iVar4 + 6] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 8;
  }
  if (4 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_01066680 */
GEN_FRAME uint F_01066680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066680u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = param_1[1];
  param_1[1] = *param_1;
  *param_1 = uVar1;
  uVar3 = 4;
  if (0x43 < param_2) {
    iVar5 = 0x10;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 4];
      param_1[iVar4 + 4] = param_1[iVar4 + 7];
      param_1[iVar4 + 7] = uVar1;
      uVar1 = param_1[iVar4 + 5];
      param_1[iVar4 + 5] = param_1[iVar4 + 6];
      param_1[iVar4 + 6] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 8;
  }
  if (4 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_01066700 */
GEN_FRAME uint F_01066700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066700u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = param_1[1];
  param_1[1] = *param_1;
  *param_1 = uVar1;
  uVar3 = 4;
  if (0x83 < param_2) {
    iVar5 = 0x20;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 4];
      param_1[iVar4 + 4] = param_1[iVar4 + 7];
      param_1[iVar4 + 7] = uVar1;
      uVar1 = param_1[iVar4 + 5];
      param_1[iVar4 + 5] = param_1[iVar4 + 6];
      param_1[iVar4 + 6] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 8;
  }
  if (4 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_01066780 */
GEN_FRAME uint F_01066780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066780u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
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
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = param_1[9];
  param_1[9] = param_1[8];
  param_1[8] = uVar1;
  uVar3 = 0xc;
  if (0x17 < param_2) {
    iVar5 = 3;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 0xc];
      param_1[iVar4 + 0xc] = param_1[iVar4 + 0xf];
      param_1[iVar4 + 0xf] = uVar1;
      uVar1 = param_1[iVar4 + 0xd];
      param_1[iVar4 + 0xd] = param_1[iVar4 + 0xe];
      param_1[iVar4 + 0xe] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0x10;
  }
  if (0xc < param_2) {
    uVar3 = F_0105dfc0(param_2 - 0xc,param_1 + 0xc);
    uVar3 = uVar3 + 0xc;
  }
  return uVar3;
}

/* ref: FUN_01066840 */
GEN_FRAME uint F_01066840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066840u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (0xf < param_2) {
    uVar1 = *param_1;
    *param_1 = param_1[3];
    param_1[3] = uVar1;
    uVar1 = param_1[1];
    param_1[1] = param_1[2];
    param_1[2] = uVar1;
    return 0x10;
  }
  if (param_2 != 0) {
    if (param_2 < 4) {
      return 0;
    }
    uVar1 = *param_1;
    *param_1 = param_1[3];
    param_1[3] = uVar1;
    uVar1 = param_1[1];
    param_1[1] = param_1[2];
    param_1[2] = uVar1;
    uVar2 = (-(uint)(param_2 < 0x10) & 0xfffffff6) + 0x10;
  }
  return uVar2;
}

/* ref: FUN_010668b0 */
GEN_FRAME uint F_010668b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10668b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_1 + 7);
  *(undefined1 *)(param_1 + 7) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)(param_1 + 10) = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = *(undefined1 *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_1 + 0xf);
  *(undefined1 *)(param_1 + 0xf) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_1 + 0xe);
  *(undefined1 *)(param_1 + 0xe) = uVar1;
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_1 + 0x13);
  *(undefined1 *)(param_1 + 0x13) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x11);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_1 + 0x12);
  *(undefined1 *)(param_1 + 0x12) = uVar1;
  return 0x14;
}

/* ref: FUN_01066960 */
GEN_FRAME uint F_01066960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066960u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  
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
  uVar2 = param_1[6];
  param_1[7] = uVar1;
  param_1[6] = param_1[5];
  param_1[5] = uVar2;
  uVar3 = 0xc;
  if (0xf < param_2) {
    uVar1 = param_1[0xc];
    param_1[0xc] = param_1[0xf];
    uVar2 = param_1[0xe];
    param_1[0xf] = uVar1;
    param_1[0xe] = param_1[0xd];
    param_1[0xd] = uVar2;
    return 0x10;
  }
  if (0xc < param_2) {
    uVar3 = F_0105dfc0(param_2 - 0xc,param_1 + 0xc);
    uVar3 = uVar3 + 0xc;
  }
  return uVar3;
}

/* ref: FUN_01066a00 */
GEN_FRAME uint F_01066a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066a00u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
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
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  uVar2 = param_1[6];
  param_1[7] = uVar1;
  param_1[6] = param_1[5];
  param_1[5] = uVar2;
  uVar4 = 0xc;
  if (0x13 < param_2) {
    iVar6 = 2;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 0xc];
      param_1[iVar5 + 0xc] = param_1[iVar5 + 0xf];
      param_1[iVar5 + 0xf] = uVar1;
      uVar1 = param_1[iVar5 + 0xd];
      param_1[iVar5 + 0xd] = param_1[iVar5 + 0xe];
      param_1[iVar5 + 0xe] = uVar1;
      iVar6 = iVar6 - 1;
      iVar3 = iVar5 + 4;
    } while (iVar6 != 0);
    return iVar5 + 0x10;
  }
  if (0xc < param_2) {
    uVar4 = F_0105dfc0(param_2 - 0xc,param_1 + 0xc);
    uVar4 = uVar4 + 0xc;
  }
  return uVar4;
}

/* ref: FUN_01066ab0 */
GEN_FRAME uint F_01066ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
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
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  uVar2 = param_1[6];
  param_1[7] = uVar1;
  param_1[6] = param_1[5];
  param_1[5] = uVar2;
  uVar4 = 0xc;
  if (0x1b < param_2) {
    iVar6 = 4;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 0xc];
      param_1[iVar5 + 0xc] = param_1[iVar5 + 0xf];
      param_1[iVar5 + 0xf] = uVar1;
      uVar1 = param_1[iVar5 + 0xd];
      param_1[iVar5 + 0xd] = param_1[iVar5 + 0xe];
      param_1[iVar5 + 0xe] = uVar1;
      iVar6 = iVar6 - 1;
      iVar3 = iVar5 + 4;
    } while (iVar6 != 0);
    return iVar5 + 0x10;
  }
  if (0xc < param_2) {
    uVar4 = F_0105dfc0(param_2 - 0xc,param_1 + 0xc);
    uVar4 = uVar4 + 0xc;
  }
  return uVar4;
}

/* ref: FUN_01066b60 */
GEN_FRAME uint F_01066b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066b60u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
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
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  uVar2 = param_1[6];
  param_1[7] = uVar1;
  param_1[6] = param_1[5];
  param_1[5] = uVar2;
  uVar4 = 0xc;
  if (0x2b < param_2) {
    iVar6 = 8;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 0xc];
      param_1[iVar5 + 0xc] = param_1[iVar5 + 0xf];
      param_1[iVar5 + 0xf] = uVar1;
      uVar1 = param_1[iVar5 + 0xd];
      param_1[iVar5 + 0xd] = param_1[iVar5 + 0xe];
      param_1[iVar5 + 0xe] = uVar1;
      iVar6 = iVar6 - 1;
      iVar3 = iVar5 + 4;
    } while (iVar6 != 0);
    return iVar5 + 0x10;
  }
  if (0xc < param_2) {
    uVar4 = F_0105dfc0(param_2 - 0xc,param_1 + 0xc);
    uVar4 = uVar4 + 0xc;
  }
  return uVar4;
}

/* ref: FUN_01066c10 */
GEN_FRAME uint F_01066c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066c10u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
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
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  uVar2 = param_1[6];
  param_1[7] = uVar1;
  param_1[6] = param_1[5];
  param_1[5] = uVar2;
  uVar4 = 0xc;
  if (0x4b < param_2) {
    iVar6 = 0x10;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 0xc];
      param_1[iVar5 + 0xc] = param_1[iVar5 + 0xf];
      param_1[iVar5 + 0xf] = uVar1;
      uVar1 = param_1[iVar5 + 0xd];
      param_1[iVar5 + 0xd] = param_1[iVar5 + 0xe];
      param_1[iVar5 + 0xe] = uVar1;
      iVar6 = iVar6 - 1;
      iVar3 = iVar5 + 4;
    } while (iVar6 != 0);
    return iVar5 + 0x10;
  }
  if (0xc < param_2) {
    uVar4 = F_0105dfc0(param_2 - 0xc,param_1 + 0xc);
    uVar4 = uVar4 + 0xc;
  }
  return uVar4;
}

/* ref: FUN_01066cc0 */
GEN_FRAME uint F_01066cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
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
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  uVar2 = param_1[6];
  param_1[7] = uVar1;
  param_1[6] = param_1[5];
  param_1[5] = uVar2;
  uVar4 = 0xc;
  if (0x8b < param_2) {
    iVar6 = 0x20;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 0xc];
      param_1[iVar5 + 0xc] = param_1[iVar5 + 0xf];
      param_1[iVar5 + 0xf] = uVar1;
      uVar1 = param_1[iVar5 + 0xd];
      param_1[iVar5 + 0xd] = param_1[iVar5 + 0xe];
      param_1[iVar5 + 0xe] = uVar1;
      iVar6 = iVar6 - 1;
      iVar3 = iVar5 + 4;
    } while (iVar6 != 0);
    return iVar5 + 0x10;
  }
  if (0xc < param_2) {
    uVar4 = F_0105dfc0(param_2 - 0xc,param_1 + 0xc);
    uVar4 = uVar4 + 0xc;
  }
  return uVar4;
}

/* ref: FUN_01066d80 */
GEN_FRAME uint F_01066d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066d80u, gen_a0, gen_a1, 0u, 0u);
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
  if (0xb < param_2) {
    uVar3 = F_0105df60(8,param_1 + 8);
    uVar4 = uVar3 + 8;
    if (uVar3 + 0xc <= param_2) {
      uVar1 = param_1[0x17];
      param_1[0x17] = param_1[0x14];
      param_1[0x14] = uVar1;
      uVar1 = param_1[0x16];
      param_1[0x16] = param_1[0x15];
      param_1[0x15] = uVar1;
      uVar4 = uVar3 + 0xc;
      if (uVar3 + 0x10 <= param_2) {
        uVar1 = param_1[0x1b];
        param_1[0x1b] = param_1[0x18];
        param_1[0x18] = uVar1;
        uVar1 = param_1[0x1a];
        param_1[0x1a] = param_1[0x19];
        param_1[0x19] = uVar1;
        uVar4 = uVar3 + 0x10;
        if (uVar3 + 0x14 <= param_2) {
          uVar1 = param_1[0x1f];
          param_1[0x1f] = param_1[0x1c];
          param_1[0x1c] = uVar1;
          uVar1 = param_1[0x1e];
          uVar4 = uVar3 + 0x18;
          param_1[0x1e] = param_1[0x1d];
          param_1[0x1d] = uVar1;
          if (uVar3 + 0x1c <= param_2) {
            uVar1 = param_1[0x24];
            param_1[0x24] = param_1[0x27];
            param_1[0x27] = uVar1;
            uVar1 = param_1[0x25];
            param_1[0x25] = param_1[0x26];
            param_1[0x26] = uVar1;
            return uVar3 + 0x1c;
          }
          if (uVar4 < param_2) {
            uVar3 = F_0105dfc0(param_2 - uVar4,param_1 + 0x24);
            uVar4 = uVar4 + uVar3;
          }
        }
      }
    }
    return uVar4;
  }
  return 4;
}

/* ref: FUN_01066e80 */
GEN_FRAME uint F_01066e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066e80u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar2 = param_1[3];
  param_1[3] = *param_1;
  uVar3 = param_1[1];
  *param_1 = uVar2;
  param_1[1] = param_1[2];
  param_1[2] = uVar3;
  if (0xb < param_2) {
    uVar4 = F_0105df60(8,param_1 + 8);
    uVar6 = uVar4 + 8;
    if (uVar4 + 0xc <= param_2) {
      uVar2 = param_1[0x17];
      param_1[0x17] = param_1[0x14];
      param_1[0x14] = uVar2;
      uVar2 = param_1[0x16];
      param_1[0x16] = param_1[0x15];
      param_1[0x15] = uVar2;
      uVar6 = uVar4 + 0xc;
      if (uVar4 + 0x10 <= param_2) {
        uVar2 = param_1[0x18];
        param_1[0x18] = param_1[0x1b];
        uVar3 = param_1[0x1a];
        param_1[0x1b] = uVar2;
        param_1[0x1a] = param_1[0x19];
        param_1[0x19] = uVar3;
        uVar1 = uVar4 + 0x14;
        uVar6 = uVar4 + 0x10;
        if (uVar1 <= param_2) {
          uVar2 = param_1[0x1c];
          param_1[0x1c] = param_1[0x1f];
          param_1[0x1f] = uVar2;
          uVar2 = param_1[0x1d];
          param_1[0x1d] = param_1[0x1e];
          param_1[0x1e] = uVar2;
          if (uVar4 + 0x1c <= param_2) {
            iVar5 = 0;
            iVar7 = 2;
            do {
              uVar2 = param_1[iVar5 + 0x20];
              param_1[iVar5 + 0x20] = param_1[iVar5 + 0x23];
              param_1[iVar5 + 0x23] = uVar2;
              uVar2 = param_1[iVar5 + 0x21];
              param_1[iVar5 + 0x21] = param_1[iVar5 + 0x22];
              param_1[iVar5 + 0x22] = uVar2;
              iVar5 = iVar5 + 4;
              iVar7 = iVar7 - 1;
            } while (iVar7 != 0);
            return uVar1 + iVar5;
          }
          uVar6 = uVar1;
          if (uVar1 < param_2) {
            uVar6 = F_0105dfc0(param_2 - uVar1,param_1 + 0x20);
            uVar6 = uVar1 + uVar6;
          }
        }
      }
    }
    return uVar6;
  }
  return 4;
}

/* ref: FUN_01066fa0 */
GEN_FRAME uint F_01066fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1066fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  if (0xb < param_2) {
    uVar3 = F_0105df60(8,param_1 + 8);
    uVar5 = uVar3 + 8;
    if (uVar3 + 0xc <= param_2) {
      uVar1 = param_1[0x17];
      param_1[0x17] = param_1[0x14];
      param_1[0x14] = uVar1;
      uVar1 = param_1[0x16];
      param_1[0x16] = param_1[0x15];
      param_1[0x15] = uVar1;
      uVar5 = uVar3 + 0xc;
      if (uVar3 + 0x10 <= param_2) {
        uVar1 = param_1[0x18];
        param_1[0x18] = param_1[0x1b];
        uVar2 = param_1[0x1a];
        param_1[0x1b] = uVar1;
        param_1[0x1a] = param_1[0x19];
        param_1[0x19] = uVar2;
        uVar5 = uVar3 + 0x10;
        if (uVar3 + 0x14 <= param_2) {
          uVar1 = param_1[0x1c];
          param_1[0x1c] = param_1[0x1f];
          uVar5 = uVar3 + 0x18;
          param_1[0x1f] = uVar1;
          uVar1 = param_1[0x1d];
          param_1[0x1d] = param_1[0x1e];
          param_1[0x1e] = uVar1;
          if (uVar3 + 0x28 <= param_2) {
            iVar4 = 0;
            iVar6 = 4;
            do {
              uVar1 = param_1[iVar4 + 0x24];
              param_1[iVar4 + 0x24] = param_1[iVar4 + 0x27];
              param_1[iVar4 + 0x27] = uVar1;
              uVar1 = param_1[iVar4 + 0x25];
              param_1[iVar4 + 0x25] = param_1[iVar4 + 0x26];
              param_1[iVar4 + 0x26] = uVar1;
              iVar4 = iVar4 + 4;
              iVar6 = iVar6 - 1;
            } while (iVar6 != 0);
            return uVar5 + iVar4;
          }
          if (uVar5 < param_2) {
            uVar3 = F_0105dfc0(param_2 - uVar5,param_1 + 0x24);
            uVar5 = uVar5 + uVar3;
          }
        }
      }
    }
    return uVar5;
  }
  return 4;
}

/* ref: FUN_010670c0 */
GEN_FRAME uint F_010670c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10670c0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  if (0xb < param_2) {
    uVar3 = F_0105df60(8,param_1 + 8);
    uVar5 = uVar3 + 8;
    if (uVar3 + 0xc <= param_2) {
      uVar1 = param_1[0x17];
      param_1[0x17] = param_1[0x14];
      param_1[0x14] = uVar1;
      uVar1 = param_1[0x16];
      param_1[0x16] = param_1[0x15];
      param_1[0x15] = uVar1;
      uVar5 = uVar3 + 0xc;
      if (uVar3 + 0x10 <= param_2) {
        uVar1 = param_1[0x18];
        param_1[0x18] = param_1[0x1b];
        uVar2 = param_1[0x1a];
        param_1[0x1b] = uVar1;
        param_1[0x1a] = param_1[0x19];
        param_1[0x19] = uVar2;
        uVar5 = uVar3 + 0x10;
        if (uVar3 + 0x14 <= param_2) {
          uVar1 = param_1[0x1c];
          param_1[0x1c] = param_1[0x1f];
          uVar5 = uVar3 + 0x18;
          param_1[0x1f] = uVar1;
          uVar1 = param_1[0x1d];
          param_1[0x1d] = param_1[0x1e];
          param_1[0x1e] = uVar1;
          if (uVar3 + 0x38 <= param_2) {
            iVar4 = 0;
            iVar6 = 8;
            do {
              uVar1 = param_1[iVar4 + 0x24];
              param_1[iVar4 + 0x24] = param_1[iVar4 + 0x27];
              param_1[iVar4 + 0x27] = uVar1;
              uVar1 = param_1[iVar4 + 0x25];
              param_1[iVar4 + 0x25] = param_1[iVar4 + 0x26];
              param_1[iVar4 + 0x26] = uVar1;
              iVar4 = iVar4 + 4;
              iVar6 = iVar6 - 1;
            } while (iVar6 != 0);
            return uVar5 + iVar4;
          }
          if (uVar5 < param_2) {
            uVar3 = F_0105dfc0(param_2 - uVar5,param_1 + 0x24);
            uVar5 = uVar5 + uVar3;
          }
        }
      }
    }
    return uVar5;
  }
  return 4;
}

/* ref: FUN_010671e0 */
GEN_FRAME uint F_010671e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10671e0u, gen_a0, gen_a1, 0u, 0u);
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
  if (param_2 < 0xc) {
    return 4;
  }
  uVar3 = F_0105df60(8,param_1 + 8);
  uVar4 = uVar3 + 8;
  if (uVar3 + 0xc <= param_2) {
    uVar1 = param_1[0x14];
    param_1[0x14] = param_1[0x17];
    uVar2 = param_1[0x16];
    param_1[0x17] = uVar1;
    param_1[0x16] = param_1[0x15];
    param_1[0x15] = uVar2;
    uVar4 = uVar3 + 0xd;
  }
  return uVar4;
}

/* ref: FUN_01067260 */
GEN_FRAME uint F_01067260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067260u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 4;
  if (param_2 < 0xc) {
    if (4 < param_2) {
      uVar4 = F_0105dfc0(param_2 - 4,param_1 + 4);
      goto LAB_010672b9;
    }
  }
  else {
    uVar4 = 0;
    iVar5 = 2;
    do {
      uVar1 = *(undefined1 *)(param_1 + 4 + uVar4);
      *(undefined1 *)(param_1 + 4 + uVar4) = *(undefined1 *)(param_1 + 7 + uVar4);
      *(undefined1 *)(param_1 + 7 + uVar4) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 5 + uVar4);
      *(undefined1 *)(param_1 + 5 + uVar4) = *(undefined1 *)(param_1 + 6 + uVar4);
      *(undefined1 *)(param_1 + 6 + uVar4) = uVar1;
      uVar4 = uVar4 + 4;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
LAB_010672b9: ;
    uVar4 = uVar4 + 4;
  }
  if (param_2 < uVar4 + 8) {
    if (param_2 <= uVar4) goto LAB_0106730f;
    uVar2 = F_0105dfc0(param_2 - uVar4,param_1 + 0xc);
  }
  else {
    uVar2 = 0;
    iVar5 = 2;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0xc + uVar2);
      *(undefined1 *)(param_1 + 0xc + uVar2) = *(undefined1 *)(param_1 + 0xf + uVar2);
      *(undefined1 *)(param_1 + 0xf + uVar2) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0xd + uVar2);
      *(undefined1 *)(param_1 + 0xd + uVar2) = *(undefined1 *)(param_1 + 0xe + uVar2);
      *(undefined1 *)(param_1 + 0xe + uVar2) = uVar1;
      uVar2 = uVar2 + 4;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  uVar4 = uVar4 + uVar2;
LAB_0106730f: ;
  if (uVar4 + 8 <= param_2) {
    iVar3 = 0;
    iVar5 = 2;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x14 + iVar3);
      *(undefined1 *)(param_1 + 0x14 + iVar3) = *(undefined1 *)(param_1 + 0x17 + iVar3);
      *(undefined1 *)(param_1 + 0x17 + iVar3) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x15 + iVar3);
      *(undefined1 *)(param_1 + 0x15 + iVar3) = *(undefined1 *)(param_1 + 0x16 + iVar3);
      *(undefined1 *)(param_1 + 0x16 + iVar3) = uVar1;
      iVar3 = iVar3 + 4;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
    return iVar3 + uVar4;
  }
  if (param_2 <= uVar4) {
    return uVar4;
  }
  uVar2 = F_0105dfc0(param_2 - uVar4,param_1 + 0x14);
  return uVar2 + uVar4;
}

/* ref: FUN_01067370 */
GEN_FRAME uint F_01067370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067370u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 4;
  if (param_2 < 0x14) {
    if (4 < param_2) {
      uVar2 = F_0105dfc0(param_2 - 4,param_1 + 4);
      goto LAB_010673c9;
    }
  }
  else {
    uVar2 = 0;
    do {
      uVar1 = *(undefined1 *)(param_1 + 4 + uVar2);
      *(undefined1 *)(param_1 + 4 + uVar2) = *(undefined1 *)(param_1 + 7 + uVar2);
      *(undefined1 *)(param_1 + 7 + uVar2) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 5 + uVar2);
      *(undefined1 *)(param_1 + 5 + uVar2) = *(undefined1 *)(param_1 + 6 + uVar2);
      *(undefined1 *)(param_1 + 6 + uVar2) = uVar1;
      uVar2 = uVar2 + 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
LAB_010673c9: ;
    uVar5 = uVar2 + 4;
  }
  if (param_2 < uVar5 + 0x10) {
    if (param_2 <= uVar5) goto LAB_0106741f;
    uVar2 = F_0105dfc0(param_2 - uVar5,param_1 + 0x14);
  }
  else {
    uVar2 = 0;
    iVar4 = 4;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x14 + uVar2);
      *(undefined1 *)(param_1 + 0x14 + uVar2) = *(undefined1 *)(param_1 + 0x17 + uVar2);
      *(undefined1 *)(param_1 + 0x17 + uVar2) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x15 + uVar2);
      *(undefined1 *)(param_1 + 0x15 + uVar2) = *(undefined1 *)(param_1 + 0x16 + uVar2);
      *(undefined1 *)(param_1 + 0x16 + uVar2) = uVar1;
      uVar2 = uVar2 + 4;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  uVar5 = uVar5 + uVar2;
LAB_0106741f: ;
  if (uVar5 + 0x10 <= param_2) {
    iVar3 = 0;
    iVar4 = 4;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x24 + iVar3);
      *(undefined1 *)(param_1 + 0x24 + iVar3) = *(undefined1 *)(param_1 + 0x27 + iVar3);
      *(undefined1 *)(param_1 + 0x27 + iVar3) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x25 + iVar3);
      *(undefined1 *)(param_1 + 0x25 + iVar3) = *(undefined1 *)(param_1 + 0x26 + iVar3);
      *(undefined1 *)(param_1 + 0x26 + iVar3) = uVar1;
      iVar3 = iVar3 + 4;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
    return iVar3 + uVar5;
  }
  if (param_2 <= uVar5) {
    return uVar5;
  }
  uVar2 = F_0105dfc0(param_2 - uVar5,param_1 + 0x24);
  return uVar2 + uVar5;
}

/* ref: FUN_01067480 */
GEN_FRAME uint F_01067480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067480u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 4;
  if (param_2 < 0x24) {
    if (4 < param_2) {
      uVar4 = F_0105dfc0(param_2 - 4,param_1 + 4);
      goto LAB_010674d9;
    }
  }
  else {
    uVar4 = 0;
    iVar5 = 8;
    do {
      uVar1 = *(undefined1 *)(param_1 + 4 + uVar4);
      *(undefined1 *)(param_1 + 4 + uVar4) = *(undefined1 *)(param_1 + 7 + uVar4);
      *(undefined1 *)(param_1 + 7 + uVar4) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 5 + uVar4);
      *(undefined1 *)(param_1 + 5 + uVar4) = *(undefined1 *)(param_1 + 6 + uVar4);
      *(undefined1 *)(param_1 + 6 + uVar4) = uVar1;
      uVar4 = uVar4 + 4;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
LAB_010674d9: ;
    uVar4 = uVar4 + 4;
  }
  if (param_2 < uVar4 + 0x20) {
    if (param_2 <= uVar4) goto LAB_0106752f;
    uVar2 = F_0105dfc0(param_2 - uVar4,param_1 + 0x24);
  }
  else {
    uVar2 = 0;
    iVar5 = 8;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x24 + uVar2);
      *(undefined1 *)(param_1 + 0x24 + uVar2) = *(undefined1 *)(param_1 + 0x27 + uVar2);
      *(undefined1 *)(param_1 + 0x27 + uVar2) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x25 + uVar2);
      *(undefined1 *)(param_1 + 0x25 + uVar2) = *(undefined1 *)(param_1 + 0x26 + uVar2);
      *(undefined1 *)(param_1 + 0x26 + uVar2) = uVar1;
      uVar2 = uVar2 + 4;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  uVar4 = uVar4 + uVar2;
LAB_0106752f: ;
  if (uVar4 + 0x20 <= param_2) {
    iVar3 = 0;
    iVar5 = 8;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x44 + iVar3);
      *(undefined1 *)(param_1 + 0x44 + iVar3) = *(undefined1 *)(param_1 + 0x47 + iVar3);
      *(undefined1 *)(param_1 + 0x47 + iVar3) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x45 + iVar3);
      *(undefined1 *)(param_1 + 0x45 + iVar3) = *(undefined1 *)(param_1 + 0x46 + iVar3);
      *(undefined1 *)(param_1 + 0x46 + iVar3) = uVar1;
      iVar3 = iVar3 + 4;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
    return iVar3 + uVar4;
  }
  if (param_2 <= uVar4) {
    return uVar4;
  }
  uVar2 = F_0105dfc0(param_2 - uVar4,param_1 + 0x44);
  return uVar2 + uVar4;
}

/* ref: FUN_01067590 */
GEN_FRAME uint F_01067590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067590u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 4;
  if (param_2 < 0x44) {
    if (4 < param_2) {
      uVar4 = F_0105dfc0(param_2 - 4,param_1 + 4);
      goto LAB_010675e9;
    }
  }
  else {
    uVar4 = 0;
    iVar5 = 0x10;
    do {
      uVar1 = *(undefined1 *)(param_1 + 4 + uVar4);
      *(undefined1 *)(param_1 + 4 + uVar4) = *(undefined1 *)(param_1 + 7 + uVar4);
      *(undefined1 *)(param_1 + 7 + uVar4) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 5 + uVar4);
      *(undefined1 *)(param_1 + 5 + uVar4) = *(undefined1 *)(param_1 + 6 + uVar4);
      *(undefined1 *)(param_1 + 6 + uVar4) = uVar1;
      uVar4 = uVar4 + 4;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
LAB_010675e9: ;
    uVar4 = uVar4 + 4;
  }
  if (param_2 < uVar4 + 0x40) {
    if (param_2 <= uVar4) goto LAB_0106763f;
    uVar2 = F_0105dfc0(param_2 - uVar4,param_1 + 0x44);
  }
  else {
    uVar2 = 0;
    iVar5 = 0x10;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x44 + uVar2);
      *(undefined1 *)(param_1 + 0x44 + uVar2) = *(undefined1 *)(param_1 + 0x47 + uVar2);
      *(undefined1 *)(param_1 + 0x47 + uVar2) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x45 + uVar2);
      *(undefined1 *)(param_1 + 0x45 + uVar2) = *(undefined1 *)(param_1 + 0x46 + uVar2);
      *(undefined1 *)(param_1 + 0x46 + uVar2) = uVar1;
      uVar2 = uVar2 + 4;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  uVar4 = uVar4 + uVar2;
LAB_0106763f: ;
  if (uVar4 + 0x40 <= param_2) {
    iVar3 = 0;
    iVar5 = 0x10;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x84 + iVar3);
      *(undefined1 *)(param_1 + 0x84 + iVar3) = *(undefined1 *)(param_1 + 0x87 + iVar3);
      *(undefined1 *)(param_1 + 0x87 + iVar3) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x85 + iVar3);
      *(undefined1 *)(param_1 + 0x85 + iVar3) = *(undefined1 *)(param_1 + 0x86 + iVar3);
      *(undefined1 *)(param_1 + 0x86 + iVar3) = uVar1;
      iVar3 = iVar3 + 4;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
    return iVar3 + uVar4;
  }
  if (param_2 <= uVar4) {
    return uVar4;
  }
  uVar2 = F_0105dfc0(param_2 - uVar4,param_1 + 0x84);
  return uVar2 + uVar4;
}

/* ref: FUN_010676c0 */
GEN_FRAME uint F_010676c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10676c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 4;
  if (param_2 < 0x84) {
    if (4 < param_2) {
      uVar4 = F_0105dfc0(param_2 - 4,param_1 + 4);
      goto LAB_01067719;
    }
  }
  else {
    uVar4 = 0;
    iVar5 = 0x20;
    do {
      uVar1 = *(undefined1 *)(param_1 + 4 + uVar4);
      *(undefined1 *)(param_1 + 4 + uVar4) = *(undefined1 *)(param_1 + 7 + uVar4);
      *(undefined1 *)(param_1 + 7 + uVar4) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 5 + uVar4);
      *(undefined1 *)(param_1 + 5 + uVar4) = *(undefined1 *)(param_1 + 6 + uVar4);
      *(undefined1 *)(param_1 + 6 + uVar4) = uVar1;
      uVar4 = uVar4 + 4;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
LAB_01067719: ;
    uVar4 = uVar4 + 4;
  }
  if (param_2 < uVar4 + 0x80) {
    if (param_2 <= uVar4) goto LAB_0106778a;
    uVar2 = F_0105dfc0(param_2 - uVar4,param_1 + 0x84);
  }
  else {
    uVar2 = 0;
    iVar5 = 0x20;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x84 + uVar2);
      *(undefined1 *)(param_1 + 0x84 + uVar2) = *(undefined1 *)(param_1 + 0x87 + uVar2);
      *(undefined1 *)(param_1 + 0x87 + uVar2) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x85 + uVar2);
      *(undefined1 *)(param_1 + 0x85 + uVar2) = *(undefined1 *)(param_1 + 0x86 + uVar2);
      *(undefined1 *)(param_1 + 0x86 + uVar2) = uVar1;
      uVar2 = uVar2 + 4;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  uVar4 = uVar4 + uVar2;
LAB_0106778a: ;
  if (uVar4 + 0x80 <= param_2) {
    iVar3 = 0;
    iVar5 = 0x20;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x104 + iVar3);
      *(undefined1 *)(param_1 + 0x104 + iVar3) = *(undefined1 *)(param_1 + 0x107 + iVar3);
      *(undefined1 *)(param_1 + 0x107 + iVar3) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x105 + iVar3);
      *(undefined1 *)(param_1 + 0x105 + iVar3) = *(undefined1 *)(param_1 + 0x106 + iVar3);
      *(undefined1 *)(param_1 + 0x106 + iVar3) = uVar1;
      iVar3 = iVar3 + 4;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
    return iVar3 + uVar4;
  }
  if (param_2 <= uVar4) {
    return uVar4;
  }
  uVar2 = F_0105dfc0(param_2 - uVar4,param_1 + 0x104);
  return uVar2 + uVar4;
}

/* ref: FUN_01067810 */
GEN_FRAME uint F_01067810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067810u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 4;
  if (param_2 < 0x104) {
    if (4 < param_2) {
      uVar4 = F_0105dfc0(param_2 - 4,param_1 + 4);
      goto LAB_01067869;
    }
  }
  else {
    uVar4 = 0;
    iVar5 = 0x40;
    do {
      uVar1 = *(undefined1 *)(param_1 + 4 + uVar4);
      *(undefined1 *)(param_1 + 4 + uVar4) = *(undefined1 *)(param_1 + 7 + uVar4);
      *(undefined1 *)(param_1 + 7 + uVar4) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 5 + uVar4);
      *(undefined1 *)(param_1 + 5 + uVar4) = *(undefined1 *)(param_1 + 6 + uVar4);
      *(undefined1 *)(param_1 + 6 + uVar4) = uVar1;
      uVar4 = uVar4 + 4;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
LAB_01067869: ;
    uVar4 = uVar4 + 4;
  }
  if (param_2 < uVar4 + 0x100) {
    if (param_2 <= uVar4) goto LAB_010678da;
    uVar2 = F_0105dfc0(param_2 - uVar4,param_1 + 0x104);
  }
  else {
    uVar2 = 0;
    iVar5 = 0x40;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x104 + uVar2);
      *(undefined1 *)(param_1 + 0x104 + uVar2) = *(undefined1 *)(param_1 + 0x107 + uVar2);
      *(undefined1 *)(param_1 + 0x107 + uVar2) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x105 + uVar2);
      *(undefined1 *)(param_1 + 0x105 + uVar2) = *(undefined1 *)(param_1 + 0x106 + uVar2);
      *(undefined1 *)(param_1 + 0x106 + uVar2) = uVar1;
      uVar2 = uVar2 + 4;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  uVar4 = uVar4 + uVar2;
LAB_010678da: ;
  if (uVar4 + 0x100 <= param_2) {
    iVar3 = 0;
    iVar5 = 0x40;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x204 + iVar3);
      *(undefined1 *)(param_1 + 0x204 + iVar3) = *(undefined1 *)(param_1 + 0x207 + iVar3);
      *(undefined1 *)(param_1 + 0x207 + iVar3) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x205 + iVar3);
      *(undefined1 *)(param_1 + 0x205 + iVar3) = *(undefined1 *)(param_1 + 0x206 + iVar3);
      *(undefined1 *)(param_1 + 0x206 + iVar3) = uVar1;
      iVar3 = iVar3 + 4;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
    return iVar3 + uVar4;
  }
  if (param_2 <= uVar4) {
    return uVar4;
  }
  uVar2 = F_0105dfc0(param_2 - uVar4,param_1 + 0x204);
  return uVar2 + uVar4;
}

/* ref: FUN_01067960 */
GEN_FRAME uint F_01067960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067960u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 4;
  if (param_2 < 0x204) {
    if (4 < param_2) {
      uVar4 = F_0105dfc0(param_2 - 4,param_1 + 4);
      goto LAB_010679b9;
    }
  }
  else {
    uVar4 = 0;
    iVar5 = 0x80;
    do {
      uVar1 = *(undefined1 *)(param_1 + 4 + uVar4);
      *(undefined1 *)(param_1 + 4 + uVar4) = *(undefined1 *)(param_1 + 7 + uVar4);
      *(undefined1 *)(param_1 + 7 + uVar4) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 5 + uVar4);
      *(undefined1 *)(param_1 + 5 + uVar4) = *(undefined1 *)(param_1 + 6 + uVar4);
      *(undefined1 *)(param_1 + 6 + uVar4) = uVar1;
      uVar4 = uVar4 + 4;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
LAB_010679b9: ;
    uVar4 = uVar4 + 4;
  }
  if (param_2 < uVar4 + 0x200) {
    if (param_2 <= uVar4) goto LAB_01067a2a;
    uVar2 = F_0105dfc0(param_2 - uVar4,param_1 + 0x204);
  }
  else {
    uVar2 = 0;
    iVar5 = 0x80;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x204 + uVar2);
      *(undefined1 *)(param_1 + 0x204 + uVar2) = *(undefined1 *)(param_1 + 0x207 + uVar2);
      *(undefined1 *)(param_1 + 0x207 + uVar2) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x205 + uVar2);
      *(undefined1 *)(param_1 + 0x205 + uVar2) = *(undefined1 *)(param_1 + 0x206 + uVar2);
      *(undefined1 *)(param_1 + 0x206 + uVar2) = uVar1;
      uVar2 = uVar2 + 4;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  uVar4 = uVar4 + uVar2;
LAB_01067a2a: ;
  if (uVar4 + 0x200 <= param_2) {
    iVar5 = 0;
    iVar3 = 0x80;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x404 + iVar5);
      *(undefined1 *)(param_1 + 0x404 + iVar5) = *(undefined1 *)(param_1 + 0x407 + iVar5);
      *(undefined1 *)(param_1 + 0x407 + iVar5) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x405 + iVar5);
      *(undefined1 *)(param_1 + 0x405 + iVar5) = *(undefined1 *)(param_1 + 0x406 + iVar5);
      *(undefined1 *)(param_1 + 0x406 + iVar5) = uVar1;
      iVar5 = iVar5 + 4;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
    return iVar5 + uVar4;
  }
  if (param_2 <= uVar4) {
    return uVar4;
  }
  uVar2 = F_0105dfc0(param_2 - uVar4,param_1 + 0x404);
  return uVar2 + uVar4;
}

/* ref: FUN_01067ab0 */
GEN_NOFRAME uint F_01067ab0(void)
{
  GEN_ENTER(0x1067ab0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_01067ac0 */
GEN_FRAME uint F_01067ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x20) & 0xffffffe0) + 0x20;
}

/* ref: FUN_01067ae0 */
GEN_FRAME uint F_01067ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  return 8;
}

/* ref: FUN_01067b30 */
GEN_FRAME uint F_01067b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067b30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1;
}

/* ref: FUN_01067b50 */
GEN_FRAME uint F_01067b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067b50u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  uVar3 = 4;
  if (7 < param_2) {
    uVar1 = param_1[4];
    param_1[4] = param_1[7];
    uVar2 = param_1[6];
    param_1[7] = uVar1;
    param_1[6] = param_1[5];
    param_1[5] = uVar2;
    return 8;
  }
  if (4 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_01067bb0 */
GEN_FRAME uint F_01067bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067bb0u, gen_a0, gen_a1, 0u, 0u);
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
  return 8;
}

/* ref: FUN_01067c10 */
GEN_FRAME uint F_01067c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067c10u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = param_1[1];
  param_1[1] = *param_1;
  *param_1 = uVar1;
  uVar3 = 4;
  if (0xb < param_2) {
    iVar5 = 2;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 4];
      param_1[iVar4 + 4] = param_1[iVar4 + 7];
      param_1[iVar4 + 7] = uVar1;
      uVar1 = param_1[iVar4 + 5];
      param_1[iVar4 + 5] = param_1[iVar4 + 6];
      param_1[iVar4 + 6] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 8;
  }
  if (4 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_01067c90 */
GEN_FRAME uint F_01067c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067c90u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = param_1[1];
  param_1[1] = *param_1;
  *param_1 = uVar1;
  uVar3 = 4;
  if (0x13 < param_2) {
    iVar5 = 4;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 4];
      param_1[iVar4 + 4] = param_1[iVar4 + 7];
      param_1[iVar4 + 7] = uVar1;
      uVar1 = param_1[iVar4 + 5];
      param_1[iVar4 + 5] = param_1[iVar4 + 6];
      param_1[iVar4 + 6] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 8;
  }
  if (4 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_01067d10 */
GEN_FRAME uint F_01067d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067d10u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = param_1[1];
  param_1[1] = *param_1;
  *param_1 = uVar1;
  uVar3 = 4;
  if (0x23 < param_2) {
    iVar5 = 8;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 4];
      param_1[iVar4 + 4] = param_1[iVar4 + 7];
      param_1[iVar4 + 7] = uVar1;
      uVar1 = param_1[iVar4 + 5];
      param_1[iVar4 + 5] = param_1[iVar4 + 6];
      param_1[iVar4 + 6] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 8;
  }
  if (4 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_01067d90 */
GEN_FRAME uint F_01067d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067d90u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = param_1[1];
  param_1[1] = *param_1;
  *param_1 = uVar1;
  uVar3 = 4;
  if (0x43 < param_2) {
    iVar5 = 0x10;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 4];
      param_1[iVar4 + 4] = param_1[iVar4 + 7];
      param_1[iVar4 + 7] = uVar1;
      uVar1 = param_1[iVar4 + 5];
      param_1[iVar4 + 5] = param_1[iVar4 + 6];
      param_1[iVar4 + 6] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 8;
  }
  if (4 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_01067e10 */
GEN_FRAME uint F_01067e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067e10u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = param_1[1];
  param_1[1] = *param_1;
  *param_1 = uVar1;
  uVar3 = 4;
  if (0x83 < param_2) {
    iVar5 = 0x20;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 4];
      param_1[iVar4 + 4] = param_1[iVar4 + 7];
      param_1[iVar4 + 7] = uVar1;
      uVar1 = param_1[iVar4 + 5];
      param_1[iVar4 + 5] = param_1[iVar4 + 6];
      param_1[iVar4 + 6] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 8;
  }
  if (4 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_01067e90 */
GEN_FRAME uint F_01067e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067e90u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 * puVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  if (0xb < param_2) {
    uVar3 = F_0105df60(8,param_1 + 8);
    uVar3 = uVar3 + 4;
    iVar5 = 0;
    puVar4 = param_1 + 0x10;
    do {
      if (param_2 <= uVar3) {
        return uVar3;
      }
      uVar1 = *puVar4;
      *puVar4 = puVar4[1];
      puVar4[1] = uVar1;
      iVar5 = iVar5 + 1;
      uVar3 = uVar3 + 10;
      puVar4 = puVar4 + 10;
    } while (iVar5 < 0x1e);
    return uVar3;
  }
  return 4;
}

/* ref: FUN_01067f10 */
GEN_FRAME uint F_01067f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067f10u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 * puVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  if (0xb < param_2) {
    uVar3 = F_0105df60(8,param_1 + 8);
    uVar3 = uVar3 + 4;
    iVar5 = 0;
    puVar4 = param_1 + 0x17;
    do {
      if (param_2 <= uVar3) {
        return uVar3;
      }
      uVar1 = puVar4[-7];
      puVar4[-7] = puVar4[-6];
      puVar4[-6] = uVar1;
      uVar1 = puVar4[-3];
      puVar4[-3] = puVar4[-2];
      puVar4[-2] = uVar1;
      uVar1 = puVar4[-1];
      puVar4[-1] = *puVar4;
      *puVar4 = uVar1;
      iVar5 = iVar5 + 1;
      uVar3 = uVar3 + 9;
      puVar4 = puVar4 + 10;
    } while (iVar5 < 0x10);
    return uVar3;
  }
  return 4;
}

/* ref: FUN_01067fa0 */
GEN_FRAME uint F_01067fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1067fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 0xc) {
    return 4;
  }
  uVar2 = F_0105df60(8,param_1 + 8);
  uVar3 = uVar2 + 4;
  if (uVar2 + 0x14 <= param_2) {
    uVar3 = uVar2 + 0x14;
  }
  return uVar3;
}

/* ref: FUN_01068000 */
GEN_FRAME uint F_01068000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068000u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  return 2;
}

/* ref: FUN_01068030 */
GEN_FRAME uint F_01068030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068030u, gen_a0, gen_a1, 0u, 0u);
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
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  return 6;
}

/* ref: FUN_01068080 */
GEN_FRAME uint F_01068080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068080u, gen_a0, gen_a1, 0u, 0u);
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
  return 5;
}

/* ref: FUN_010680b0 */
GEN_FRAME uint F_010680b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10680b0u, gen_a0, gen_a1, 0u, 0u);
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
  return (-(uint)(param_2 < 9) & 0xfffffffb) + 9;
}

/* ref: FUN_010680f0 */
GEN_FRAME uint F_010680f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10680f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_01068150 */
GEN_FRAME uint F_01068150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068150u, gen_a0, gen_a1, 0u, 0u);
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
  return 8;
}

/* ref: FUN_010681b0 */
GEN_FRAME uint F_010681b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10681b0u, gen_a0, gen_a1, 0u, 0u);
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
  if (param_2 < 0xc) {
    return 4;
  }
  uVar3 = F_0105df60(8,param_1 + 8);
  if (param_2 < uVar3 + 0xc) {
    return uVar3 + 4;
  }
  uVar4 = F_0105df60(8,param_1 + 0x10);
  return uVar4 + uVar3 + 4;
}

/* ref: FUN_01068220 */
GEN_NOFRAME uint F_01068220(void)
{
  GEN_ENTER(0x1068220u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_01068230 */
GEN_FRAME uint F_01068230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068230u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_01068260 */
GEN_FRAME uint F_01068260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068260u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = 4;
  if (0x43 < param_2) {
    iVar5 = 0x10;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = *(undefined1 *)(param_1 + 4 + iVar4);
      *(undefined1 *)(param_1 + 4 + iVar4) = *(undefined1 *)(param_1 + 7 + iVar4);
      *(undefined1 *)(param_1 + 7 + iVar4) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 5 + iVar4);
      *(undefined1 *)(param_1 + 5 + iVar4) = *(undefined1 *)(param_1 + 6 + iVar4);
      *(undefined1 *)(param_1 + 6 + iVar4) = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 8;
  }
  if (4 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_010682d0 */
GEN_FRAME uint F_010682d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10682d0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  return (-(uint)(param_2 < 0xf) & 0xfffffff3) + 0xf;
}

/* ref: FUN_01068300 */
GEN_FRAME uint F_01068300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068300u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
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
  uVar1 = param_1[0xb];
  param_1[0xb] = param_1[10];
  param_1[10] = uVar1;
  uVar3 = 0xc;
  if (0x17 < param_2) {
    iVar5 = 3;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 0xc];
      param_1[iVar4 + 0xc] = param_1[iVar4 + 0xf];
      param_1[iVar4 + 0xf] = uVar1;
      uVar1 = param_1[iVar4 + 0xd];
      param_1[iVar4 + 0xd] = param_1[iVar4 + 0xe];
      param_1[iVar4 + 0xe] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0x10;
  }
  if (0xc < param_2) {
    uVar3 = F_0105dfc0(param_2 - 0xc,param_1 + 0xc);
    uVar3 = uVar3 + 0xc;
  }
  return uVar3;
}

/* ref: FUN_010683e0 */
GEN_FRAME uint F_010683e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10683e0u, gen_a0, gen_a1, 0u, 0u);
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
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  if (param_2 < 0x18) {
    return 0x14;
  }
  uVar1 = param_1[0x14];
  param_1[0x14] = param_1[0x17];
  param_1[0x17] = uVar1;
  uVar1 = param_1[0x15];
  param_1[0x15] = param_1[0x16];
  param_1[0x16] = uVar1;
  return 0x18;
}

/* ref: FUN_010684e0 */
GEN_FRAME uint F_010684e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10684e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x20) & 0xffffffe0) + 0x20;
}

/* ref: FUN_01068500 */
GEN_FRAME uint F_01068500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068500u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 0x100) {
    return 0;
  }
  uVar3 = 0x100;
  if (0x109 < param_2) {
    iVar5 = 5;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = *(undefined1 *)(param_1 + 0x100 + iVar4);
      *(undefined1 *)(param_1 + 0x100 + iVar4) = *(undefined1 *)(param_1 + 0x101 + iVar4);
      *(undefined1 *)(param_1 + 0x101 + iVar4) = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 2;
    } while (iVar5 != 0);
    return iVar4 + 0x102;
  }
  if (0x100 < param_2) {
    uVar3 = F_0105e000(param_2 - 0x100,param_1 + 0x100);
    uVar3 = uVar3 + 0x100;
  }
  return uVar3;
}

/* ref: FUN_01068580 */
GEN_FRAME uint F_01068580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068580u, gen_a0, gen_a1, 0u, 0u);
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
  return 9;
}

/* ref: FUN_010685b0 */
GEN_FRAME uint F_010685b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10685b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  uVar3 = uVar2;
  if (uVar2 + 4 <= param_2) {
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0xb);
    *(undefined1 *)(((int)(uint)(param_1)) + 0xb) = *(undefined1 *)(((int)(uint)(param_1)) + 8);
    *(undefined1 *)(((int)(uint)(param_1)) + 8) = uVar1;
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 10);
    *(undefined1 *)(((int)(uint)(param_1)) + 10) = *(undefined1 *)(((int)(uint)(param_1)) + 9);
    *(undefined1 *)(((int)(uint)(param_1)) + 9) = uVar1;
    if (param_2 < uVar2 + 8) {
      return uVar2 + 4;
    }
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0xf);
    *(undefined1 *)(((int)(uint)(param_1)) + 0xf) = *(undefined1 *)(((int)(uint)(param_1)) + 0xc);
    *(undefined1 *)(((int)(uint)(param_1)) + 0xc) = uVar1;
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0xe);
    *(undefined1 *)(((int)(uint)(param_1)) + 0xe) = *(undefined1 *)(((int)(uint)(param_1)) + 0xd);
    *(undefined1 *)(((int)(uint)(param_1)) + 0xd) = uVar1;
    uVar3 = uVar2 + 8;
    if (uVar2 + 10 <= param_2) {
      uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0x11);
      *(undefined1 *)(((int)(uint)(param_1)) + 0x11) = *(undefined1 *)(((int)(uint)(param_1)) + 0x10);
      *(undefined1 *)(((int)(uint)(param_1)) + 0x10) = uVar1;
      uVar3 = uVar2 + 0xe;
      if ((uVar2 + 0x2e <= param_2) && (uVar3 = uVar2 + 0x35, param_2 < uVar2 + 0x35)) {
        uVar3 = uVar2 + 0x2e;
      }
    }
  }
  return uVar3;
}

/* ref: FUN_01068650 */
GEN_FRAME uint F_01068650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1068650u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (uVar2 + 8 <= param_2) {
    uVar3 = F_0105df60(8,param_1 + 8);
    uVar3 = uVar2 + uVar3;
    uVar2 = uVar3;
    if (uVar3 + 4 <= param_2) {
      uVar1 = *(undefined1 *)(param_1 + 0x13);
      *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x10) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x12);
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x11);
      *(undefined1 *)(param_1 + 0x11) = uVar1;
      uVar2 = uVar3 + 4;
      if (uVar3 + 6 <= param_2) {
        uVar1 = *(undefined1 *)(param_1 + 0x15);
        *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_1 + 0x14);
        *(undefined1 *)(param_1 + 0x14) = uVar1;
        uVar2 = uVar3 + 6;
        if (uVar3 + 8 <= param_2) {
          uVar1 = *(undefined1 *)(param_1 + 0x16);
          *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_1 + 0x17);
          *(undefined1 *)(param_1 + 0x17) = uVar1;
          iVar5 = 0;
          uVar2 = uVar3 + 0xc;
          iVar4 = param_1 + 0x20;
          do {
            if (param_2 <= uVar2) {
              return uVar2;
            }
            uVar3 = F_010685b0(iVar4,0x40,param_3);
            iVar5 = iVar5 + 1;
            uVar2 = uVar2 + uVar3;
            iVar4 = iVar4 + 0x40;
          } while (iVar5 < 8);
        }
      }
    }
  }
  return uVar2;
}

/* ref: FUN_01068710 */
GEN_FRAME uint F_01068710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1068710u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (uVar2 + 8 <= param_2) {
    uVar3 = F_0105df60(8,param_1 + 8);
    uVar3 = uVar2 + uVar3;
    uVar2 = uVar3;
    if (uVar3 + 4 <= param_2) {
      uVar1 = *(undefined1 *)(param_1 + 0x13);
      *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x10) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x12);
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x11);
      *(undefined1 *)(param_1 + 0x11) = uVar1;
      uVar2 = uVar3 + 4;
      if (uVar3 + 6 <= param_2) {
        uVar1 = *(undefined1 *)(param_1 + 0x15);
        *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_1 + 0x14);
        *(undefined1 *)(param_1 + 0x14) = uVar1;
        uVar2 = uVar3 + 6;
        if (uVar3 + 8 <= param_2) {
          uVar1 = *(undefined1 *)(param_1 + 0x16);
          *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_1 + 0x17);
          *(undefined1 *)(param_1 + 0x17) = uVar1;
          iVar5 = 0;
          uVar2 = uVar3 + 0xc;
          iVar4 = param_1 + 0x20;
          do {
            if (param_2 <= uVar2) {
              return uVar2;
            }
            uVar3 = F_010685b0(iVar4,0x40,param_3);
            iVar5 = iVar5 + 1;
            uVar2 = uVar2 + uVar3;
            iVar4 = iVar4 + 0x40;
          } while (iVar5 < 0x10);
        }
      }
    }
  }
  return uVar2;
}

/* ref: FUN_010687d0 */
GEN_FRAME uint F_010687d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10687d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 2) & 0xfffffffe) + 2;
}

/* ref: FUN_010687f0 */
GEN_FRAME uint F_010687f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10687f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 < 0x1c) {
    return 0;
  }
  if (param_2 < 0x2e) {
    return 0x1c;
  }
  if (param_2 < 0x38) {
    return 0x2e;
  }
  if (param_2 < 0x3e) {
    return 0x38;
  }
  return (-(uint)(param_2 < 0x40) & 0xfffffffe) + 0x40;
}

/* ref: FUN_01068830 */
GEN_FRAME uint F_01068830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068830u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 < 0x1c) {
    return 0;
  }
  if (param_2 < 0x2e) {
    return 0x1c;
  }
  if (param_2 < 0x38) {
    return 0x2e;
  }
  if (param_2 < 0x3e) {
    return 0x38;
  }
  return (-(uint)(param_2 < 0x40) & 0xfffffffe) + 0x40;
}

/* ref: FUN_01068870 */
GEN_FRAME uint F_01068870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068870u, gen_a0, gen_a1, 0u, 0u);
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
  return 0x10;
}

/* ref: FUN_01068920 */
GEN_FRAME uint F_01068920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068920u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x21) & 0xffffffe0) + 0x21;
}

/* ref: FUN_01068940 */
GEN_FRAME uint F_01068940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068940u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
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
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  uVar2 = param_1[6];
  param_1[7] = uVar1;
  param_1[6] = param_1[5];
  param_1[5] = uVar2;
  uVar4 = 8;
  if (0x1b < param_2) {
    iVar6 = 5;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 8];
      param_1[iVar5 + 8] = param_1[iVar5 + 0xb];
      param_1[iVar5 + 0xb] = uVar1;
      uVar1 = param_1[iVar5 + 9];
      param_1[iVar5 + 9] = param_1[iVar5 + 10];
      param_1[iVar5 + 10] = uVar1;
      iVar6 = iVar6 - 1;
      iVar3 = iVar5 + 4;
    } while (iVar6 != 0);
    return iVar5 + 0xc;
  }
  if (8 < param_2) {
    uVar4 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar4 = uVar4 + 8;
  }
  return uVar4;
}

/* ref: FUN_010689f0 */
GEN_NOFRAME uint F_010689f0(void)
{
  GEN_ENTER(0x10689f0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_01068a00 */
GEN_FRAME uint F_01068a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068a00u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  return 2;
}

/* ref: FUN_01068a30 */
GEN_FRAME uint F_01068a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068a30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 4) {
    return 2;
  }
  uVar1 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar1;
  if (param_2 < 8) {
    return 6;
  }
  uVar1 = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_1 + 7);
  *(undefined1 *)(param_1 + 7) = uVar1;
  if (param_2 < 10) {
    return 8;
  }
  uVar1 = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)(param_1 + 9) = uVar1;
  if (param_2 < 0xc) {
    return 10;
  }
  uVar1 = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = uVar1;
  if (param_2 < 0x10) {
    return 0xc;
  }
  uVar1 = *(undefined1 *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_1 + 0xf);
  *(undefined1 *)(param_1 + 0xf) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_1 + 0xe);
  *(undefined1 *)(param_1 + 0xe) = uVar1;
  return 0x10;
}

/* ref: FUN_01068af0 */
GEN_FRAME uint F_01068af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068af0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x1b) & 0xffffffe6) + 0x1b;
}

/* ref: FUN_01068b10 */
GEN_FRAME uint F_01068b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068b10u, gen_a0, gen_a1, 0u, 0u);
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
  return 8;
}

/* ref: FUN_01068b70 */
GEN_FRAME uint F_01068b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068b70u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 * puVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
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
  if (0xf < param_2) {
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
    iVar3 = 0;
    uVar4 = 0x14;
    puVar2 = param_1 + 0x19;
    do {
      if (param_2 <= uVar4) {
        return uVar4;
      }
      uVar1 = puVar2[-5];
      puVar2[-5] = puVar2[-2];
      puVar2[-2] = uVar1;
      uVar1 = puVar2[-4];
      puVar2[-4] = puVar2[-3];
      puVar2[-3] = uVar1;
      uVar1 = puVar2[-1];
      puVar2[-1] = puVar2[2];
      puVar2[2] = uVar1;
      uVar1 = *puVar2;
      *puVar2 = puVar2[1];
      puVar2[1] = uVar1;
      iVar3 = iVar3 + 1;
      uVar4 = uVar4 + 8;
      puVar2 = puVar2 + 8;
    } while (iVar3 < 4);
    return uVar4;
  }
  return 0xc;
}

/* ref: FUN_01068c80 */
GEN_FRAME uint F_01068c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1068c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  return param_3;
}

/* ref: FUN_01068c90 */
GEN_FRAME uint F_01068c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068c90u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_01068d20 */
GEN_FRAME uint F_01068d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068d20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_01068d30 */
GEN_FRAME uint F_01068d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1068d30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  uVar2 = param_1[2];
  param_1[3] = *param_1;
  param_1[2] = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar3 = 4;
  if (param_2 < 0x10) {
    if (param_2 < 5) goto LAB_01068dad;
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
  }
  else {
    uVar3 = 0;
    iVar4 = 3;
    do {
      uVar1 = param_1[uVar3 + 4];
      param_1[uVar3 + 4] = param_1[uVar3 + 7];
      param_1[uVar3 + 7] = uVar1;
      uVar1 = param_1[uVar3 + 5];
      param_1[uVar3 + 5] = param_1[uVar3 + 6];
      param_1[uVar3 + 6] = uVar1;
      uVar3 = uVar3 + 4;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  uVar3 = uVar3 + 4;
LAB_01068dad: ;
  if (uVar3 + 4 <= param_2) {
    uVar1 = param_1[0x10];
    param_1[0x10] = param_1[0x13];
    uVar2 = param_1[0x12];
    param_1[0x13] = uVar1;
    param_1[0x12] = param_1[0x11];
    param_1[0x11] = uVar2;
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_01068de0 */
GEN_FRAME uint F_01068de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1068de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
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
  uVar2 = 4;
  if (0x17 < param_2) {
    uVar2 = F_01068d30(param_1 + 4,0x14,param_3);
    return uVar2 + 4;
  }
  if (4 < param_2) {
    uVar2 = F_01068d30(param_1 + 4,param_2 - 4,param_3);
    uVar2 = uVar2 + 4;
  }
  return uVar2;
}

/* ref: FUN_01068e50 */
GEN_FRAME uint F_01068e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068e50u, gen_a0, gen_a1, 0u, 0u);
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
  if (7 < param_2) {
    uVar1 = param_1[7];
    uVar2 = param_1[6];
    param_1[7] = param_1[4];
    param_1[6] = param_1[5];
    param_1[4] = uVar1;
    param_1[5] = uVar2;
    uVar4 = 8;
    if (0xf < param_2) {
      uVar4 = F_0105df60(8,param_1 + 8);
      if (param_2 < uVar4 + 0x10) {
        return uVar4 + 8;
      }
      uVar5 = F_0105df60(8,param_1 + 0x10);
      uVar5 = uVar4 + 0xc + uVar5;
      uVar4 = uVar5;
      if (uVar5 + 4 <= param_2) {
        uVar1 = param_1[0x1f];
        param_1[0x1f] = param_1[0x1c];
        param_1[0x1c] = uVar1;
        uVar1 = param_1[0x1e];
        param_1[0x1e] = param_1[0x1d];
        param_1[0x1d] = uVar1;
        uVar4 = uVar5 + 4;
        if (uVar5 + 8 <= param_2) {
          uVar1 = param_1[0x23];
          param_1[0x23] = param_1[0x20];
          param_1[0x20] = uVar1;
          uVar1 = param_1[0x22];
          param_1[0x22] = param_1[0x21];
          uVar4 = uVar5 + 0xc;
          param_1[0x21] = uVar1;
          if (uVar5 + 0x10 <= param_2) {
            uVar1 = param_1[0x2b];
            param_1[0x2b] = param_1[0x28];
            param_1[0x28] = uVar1;
            uVar1 = param_1[0x2a];
            param_1[0x2a] = param_1[0x29];
            uVar4 = uVar5 + 0x30;
            param_1[0x29] = uVar1;
            uVar3 = uVar5 + 0x10;
            if ((param_2 < uVar4) || (uVar3 = uVar5 + 0x60, uVar5 + 0x60 <= param_2)) {
              uVar4 = uVar3;
            }
          }
        }
      }
    }
    return uVar4;
  }
  return 4;
}

/* ref: FUN_01068f60 */
GEN_FRAME uint F_01068f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1068f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  uVar2 = param_1[2];
  param_1[3] = *param_1;
  param_1[2] = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar3 = 4;
  if (param_2 < 0x18) {
    if (param_2 < 5) goto LAB_01068fb8;
    iVar5 = param_2 - 4;
  }
  else {
    iVar5 = 0x14;
  }
  uVar3 = F_01068d30(param_1 + 4,iVar5,param_3);
  uVar3 = uVar3 + 4;
LAB_01068fb8: ;
  uVar4 = uVar3;
  if (uVar3 + 2 <= param_2) {
    uVar1 = param_1[0x19];
    param_1[0x19] = param_1[0x18];
    param_1[0x18] = uVar1;
    uVar4 = uVar3 + 0x402;
    if (param_2 < uVar3 + 0x402) {
      uVar4 = uVar3 + 2;
    }
  }
  return uVar4;
}

/* ref: FUN_01068fe0 */
GEN_FRAME uint F_01068fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1068fe0u, gen_a0, gen_a1, 0u, 0u);
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
  return 8;
}

/* ref: FUN_01069040 */
GEN_FRAME uint F_01069040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069040u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x21) & 0xffffffe0) + 0x21;
}

/* ref: FUN_01069060 */
GEN_FRAME uint F_01069060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069060u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1 + 2;
}

/* ref: FUN_01069080 */
GEN_FRAME uint F_01069080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069080u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (uVar2 + 2 <= param_2) {
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 8);
    *(undefined1 *)(((int)(uint)(param_1)) + 8) = *(undefined1 *)(((int)(uint)(param_1)) + 9);
    *(undefined1 *)(((int)(uint)(param_1)) + 9) = uVar1;
    uVar2 = uVar2 + 5;
  }
  return uVar2;
}

/* ref: FUN_010690c0 */
GEN_FRAME uint F_010690c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10690c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  if (param_2 < uVar1 + 8) {
    return uVar1;
  }
  uVar2 = F_0105df60(8,((int)(uint)(param_1)) + 8);
  return uVar2 + 1 + uVar1;
}

/* ref: FUN_01069110 */
GEN_FRAME uint F_01069110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069110u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  if (param_2 < uVar1 + 8) {
    return uVar1;
  }
  uVar2 = F_0105df60(8,((int)(uint)(param_1)) + 8);
  uVar2 = uVar1 + 2 + uVar2;
  uVar1 = uVar2 + 0xc1;
  if (uVar1 <= param_2) {
    uVar2 = uVar1;
  }
  return uVar2;
}

/* ref: FUN_01069160 */
GEN_FRAME uint F_01069160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069160u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_01069190 */
GEN_FRAME uint F_01069190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069190u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_010691c0 */
GEN_FRAME uint F_010691c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10691c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1;
}

/* ref: FUN_010691e0 */
GEN_FRAME uint F_010691e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10691e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1;
}

/* ref: FUN_01069200 */
GEN_FRAME uint F_01069200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069200u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_01069230 */
GEN_FRAME uint F_01069230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069230u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_01069260 */
GEN_FRAME uint F_01069260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069260u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x20) & 0xffffffe0) + 0x20;
}

/* ref: FUN_01069280 */
GEN_FRAME uint F_01069280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069280u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x20) & 0xffffffe0) + 0x20;
}

/* ref: FUN_010692a0 */
GEN_FRAME uint F_010692a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10692a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x20) & 0xffffffe0) + 0x20;
}

/* ref: FUN_010692c0 */
GEN_FRAME uint F_010692c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10692c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  if (uVar1 + 0x20 <= param_2) {
    uVar1 = uVar1 + 0x20;
  }
  return uVar1;
}

/* ref: FUN_010692f0 */
GEN_NOFRAME uint F_010692f0(void)
{
  GEN_ENTER(0x10692f0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: FUN_01069300 */
GEN_FRAME uint F_01069300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069300u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  if (uVar1 + 0x20 <= param_2) {
    uVar1 = uVar1 + 0x20;
  }
  return uVar1;
}

/* ref: FUN_01069330 */
GEN_FRAME uint F_01069330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069330u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = param_2;
  if (param_2 < 8) {
    return 0;
  }
  uVar3 = F_0105df60(8,param_1);
  if (param_2 < uVar3 + 2) {
    return uVar3;
  }
  uVar1 = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_1 + 8);
  uVar4 = uVar3 + 4;
  *(undefined1 *)(param_1 + 8) = uVar1;
  if (param_2 < uVar4) {
    return uVar3 + 2;
  }
  uVar1 = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = uVar1;
  if (param_2 < uVar3 + 0xc) {
    return uVar4;
  }
  uVar3 = F_0105df60(8,param_1 + 0x10);
  uVar4 = uVar4 + uVar3;
  if (param_2 < uVar4 + 8) {
    return uVar4;
  }
  uVar3 = F_0105df60(8,param_1 + 0x18);
  uVar4 = uVar4 + uVar3;
  if (param_2 < uVar4 + 8) {
    return uVar4;
  }
  uVar3 = F_0105df60(8,param_1 + 0x20);
  uVar4 = uVar4 + uVar3;
  if (param_2 < uVar4 + 100) {
    if (param_2 <= uVar4) goto LAB_0106940c;
    uVar3 = F_0105e000(param_2 - uVar4,param_1 + 0x28);
  }
  else {
    uVar3 = 0;
    param_2 = 0x32;
    do {
      uVar1 = *(undefined1 *)(param_1 + 0x28 + uVar3);
      *(undefined1 *)(param_1 + 0x28 + uVar3) = *(undefined1 *)(param_1 + 0x29 + uVar3);
      *(undefined1 *)(param_1 + 0x29 + uVar3) = uVar1;
      uVar3 = uVar3 + 2;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  uVar4 = uVar4 + uVar3;
LAB_0106940c: ;
  if (uVar2 < uVar4 + 0x20) {
    return uVar4;
  }
  return uVar4 + 0x20;
}

/* ref: FUN_01069420 */
GEN_FRAME uint F_01069420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069420u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  if (uVar1 + 0x20 <= param_2) {
    uVar1 = uVar1 + 0x20;
  }
  return uVar1;
}

/* ref: FUN_01069450 */
GEN_FRAME uint F_01069450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069450u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1;
}

/* ref: FUN_01069470 */
GEN_FRAME uint F_01069470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069470u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1;
}

/* ref: FUN_01069490 */
GEN_FRAME uint F_01069490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069490u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  if (uVar1 + 8 <= param_2) {
    uVar2 = F_0105df60(8,((int)(uint)(param_1)) + 8);
    uVar1 = uVar1 + uVar2;
    if (uVar1 + 0x20 <= param_2) {
      return uVar1 + 0x20;
    }
  }
  return uVar1;
}

/* ref: FUN_010694e0 */
GEN_FRAME uint F_010694e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10694e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  if (uVar1 + 8 <= param_2) {
    uVar2 = F_0105df60(8,((int)(uint)(param_1)) + 8);
    uVar1 = uVar1 + uVar2;
    if (uVar1 + 0x20 <= param_2) {
      return uVar1 + 0x20;
    }
  }
  return uVar1;
}

/* ref: FUN_01069530 */
GEN_FRAME uint F_01069530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069530u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_01069560 */
GEN_FRAME uint F_01069560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069560u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  if (uVar1 + 8 <= param_2) {
    uVar2 = F_0105df60(8,((int)(uint)(param_1)) + 8);
    uVar1 = uVar1 + uVar2;
    if (uVar1 + 0x20 <= param_2) {
      return uVar1 + 0x20;
    }
  }
  return uVar1;
}

/* ref: FUN_010695b0 */
GEN_FRAME uint F_010695b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10695b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  if (uVar1 + 8 <= param_2) {
    uVar2 = F_0105df60(8,((int)(uint)(param_1)) + 8);
    uVar1 = uVar1 + uVar2;
    if (uVar1 + 0x20 <= param_2) {
      return uVar1 + 0x20;
    }
  }
  return uVar1;
}

/* ref: FUN_01069600 */
GEN_FRAME uint F_01069600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1;
}

/* ref: FUN_01069620 */
GEN_FRAME uint F_01069620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1069620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
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
  return 0xc;
}

/* ref: FUN_010696b0 */
GEN_FRAME uint F_010696b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x10696b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_2 < 0xc) {
    if (param_2 != 0) {
      uVar4 = F_01069620(param_1,param_2,param_3);
    }
  }
  else {
    uVar1 = param_1[3];
    param_1[3] = *param_1;
    uVar2 = param_1[1];
    *param_1 = uVar1;
    param_1[1] = param_1[2];
    param_1[2] = uVar2;
    uVar1 = param_1[7];
    param_1[7] = param_1[4];
    uVar2 = param_1[5];
    param_1[4] = uVar1;
    param_1[5] = param_1[6];
    param_1[6] = uVar2;
    uVar1 = param_1[8];
    param_1[8] = param_1[9];
    param_1[9] = uVar1;
    uVar1 = param_1[10];
    param_1[10] = param_1[0xb];
    param_1[0xb] = uVar1;
    uVar4 = 0xc;
  }
  if (param_2 < uVar4 + 0xc) {
    if (uVar4 < param_2) {
      uVar3 = F_01069620(param_1 + 0xc,param_2 - uVar4,param_3);
      uVar4 = uVar4 + uVar3;
    }
  }
  else {
    uVar1 = param_1[0xc];
    param_1[0xc] = param_1[0xf];
    param_1[0xf] = uVar1;
    uVar1 = param_1[0xd];
    param_1[0xd] = param_1[0xe];
    param_1[0xe] = uVar1;
    uVar1 = param_1[0x10];
    param_1[0x10] = param_1[0x13];
    param_1[0x13] = uVar1;
    uVar1 = param_1[0x11];
    param_1[0x11] = param_1[0x12];
    param_1[0x12] = uVar1;
    uVar1 = param_1[0x14];
    param_1[0x14] = param_1[0x15];
    param_1[0x15] = uVar1;
    uVar1 = param_1[0x16];
    param_1[0x16] = param_1[0x17];
    param_1[0x17] = uVar1;
    uVar4 = uVar4 + 0xc;
  }
  if (param_2 < uVar4 + 0xc) {
    if (uVar4 < param_2) {
      uVar3 = F_01069620(param_1 + 0x18,param_2 - uVar4,param_3);
      uVar4 = uVar4 + uVar3;
    }
  }
  else {
    uVar1 = param_1[0x18];
    param_1[0x18] = param_1[0x1b];
    param_1[0x1b] = uVar1;
    uVar1 = param_1[0x19];
    param_1[0x19] = param_1[0x1a];
    param_1[0x1a] = uVar1;
    uVar1 = param_1[0x1c];
    param_1[0x1c] = param_1[0x1f];
    param_1[0x1f] = uVar1;
    uVar1 = param_1[0x1d];
    param_1[0x1d] = param_1[0x1e];
    param_1[0x1e] = uVar1;
    uVar1 = param_1[0x20];
    param_1[0x20] = param_1[0x21];
    param_1[0x21] = uVar1;
    uVar1 = param_1[0x22];
    param_1[0x22] = param_1[0x23];
    param_1[0x23] = uVar1;
    uVar4 = uVar4 + 0xc;
  }
  if (param_2 < uVar4 + 0xc) {
    if (uVar4 < param_2) {
      uVar3 = F_01069620(param_1 + 0x24,param_2 - uVar4,param_3);
      uVar4 = uVar4 + uVar3;
    }
  }
  else {
    uVar1 = param_1[0x24];
    param_1[0x24] = param_1[0x27];
    param_1[0x27] = uVar1;
    uVar1 = param_1[0x25];
    param_1[0x25] = param_1[0x26];
    param_1[0x26] = uVar1;
    uVar1 = param_1[0x28];
    param_1[0x28] = param_1[0x2b];
    param_1[0x2b] = uVar1;
    uVar1 = param_1[0x29];
    param_1[0x29] = param_1[0x2a];
    param_1[0x2a] = uVar1;
    uVar1 = param_1[0x2c];
    param_1[0x2c] = param_1[0x2d];
    param_1[0x2d] = uVar1;
    uVar1 = param_1[0x2e];
    param_1[0x2e] = param_1[0x2f];
    param_1[0x2f] = uVar1;
    uVar4 = uVar4 + 0xc;
  }
  if (param_2 < uVar4 + 0xc) {
    if (uVar4 < param_2) {
      uVar3 = F_01069620(param_1 + 0x30,param_2 - uVar4,param_3);
      uVar4 = uVar4 + uVar3;
    }
  }
  else {
    uVar1 = param_1[0x30];
    param_1[0x30] = param_1[0x33];
    param_1[0x33] = uVar1;
    uVar1 = param_1[0x31];
    param_1[0x31] = param_1[0x32];
    param_1[0x32] = uVar1;
    uVar1 = param_1[0x34];
    param_1[0x34] = param_1[0x37];
    param_1[0x37] = uVar1;
    uVar1 = param_1[0x35];
    param_1[0x35] = param_1[0x36];
    param_1[0x36] = uVar1;
    uVar1 = param_1[0x38];
    param_1[0x38] = param_1[0x39];
    param_1[0x39] = uVar1;
    uVar1 = param_1[0x3a];
    param_1[0x3a] = param_1[0x3b];
    param_1[0x3b] = uVar1;
    uVar4 = uVar4 + 0xc;
  }
  if (uVar4 + 0xc <= param_2) {
    uVar1 = param_1[0x3c];
    param_1[0x3c] = param_1[0x3f];
    param_1[0x3f] = uVar1;
    uVar1 = param_1[0x3d];
    param_1[0x3d] = param_1[0x3e];
    param_1[0x3e] = uVar1;
    uVar1 = param_1[0x40];
    param_1[0x40] = param_1[0x43];
    param_1[0x43] = uVar1;
    uVar1 = param_1[0x41];
    param_1[0x41] = param_1[0x42];
    param_1[0x42] = uVar1;
    uVar1 = param_1[0x44];
    param_1[0x44] = param_1[0x45];
    param_1[0x45] = uVar1;
    uVar1 = param_1[0x46];
    param_1[0x46] = param_1[0x47];
    param_1[0x47] = uVar1;
    return uVar4 + 0xc;
  }
  if (uVar4 < param_2) {
    uVar3 = F_01069620(param_1 + 0x3c,param_2 - uVar4,param_3);
    return uVar3 + uVar4;
  }
  return uVar4;
}

/* ref: FUN_01069980 */
GEN_FRAME uint F_01069980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1069980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  if (param_2 < uVar1 + 0x48) {
    if (param_2 <= uVar1) goto LAB_010699cb;
    iVar3 = param_2 - uVar1;
  }
  else {
    iVar3 = 0x48;
  }
  uVar2 = F_010696b0(((int)(uint)(param_1)) + 8,iVar3,param_3);
  uVar1 = uVar1 + uVar2;
LAB_010699cb: ;
  if (uVar1 + 0x259 <= param_2) {
    uVar1 = uVar1 + 0x25a;
  }
  return uVar1;
}

/* ref: FUN_010699f0 */
GEN_FRAME uint F_010699f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x10699f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (uVar2 + 4 <= param_2) {
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 8);
    *(undefined1 *)(((int)(uint)(param_1)) + 8) = *(undefined1 *)(((int)(uint)(param_1)) + 0xb);
    *(undefined1 *)(((int)(uint)(param_1)) + 0xb) = uVar1;
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 9);
    *(undefined1 *)(((int)(uint)(param_1)) + 9) = *(undefined1 *)(((int)(uint)(param_1)) + 10);
    *(undefined1 *)(((int)(uint)(param_1)) + 10) = uVar1;
    uVar2 = uVar2 + 4;
  }
  return uVar2;
}

/* ref: FUN_01069a40 */
GEN_NOFRAME uint F_01069a40(void)
{
  GEN_ENTER(0x1069a40u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: FUN_01069a50 */
GEN_FRAME uint F_01069a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069a50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (uVar2 + 4 <= param_2) {
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 8);
    *(undefined1 *)(((int)(uint)(param_1)) + 8) = *(undefined1 *)(((int)(uint)(param_1)) + 0xb);
    *(undefined1 *)(((int)(uint)(param_1)) + 0xb) = uVar1;
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 9);
    *(undefined1 *)(((int)(uint)(param_1)) + 9) = *(undefined1 *)(((int)(uint)(param_1)) + 10);
    *(undefined1 *)(((int)(uint)(param_1)) + 10) = uVar1;
    uVar2 = uVar2 + 5;
  }
  return uVar2;
}

/* ref: FUN_01069aa0 */
GEN_FRAME uint F_01069aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1069aa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
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
  return 8;
}

/* ref: FUN_01069b00 */
GEN_FRAME uint F_01069b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1069b00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_2 < 8) {
    if (param_2 != 0) {
      uVar4 = F_01069aa0(param_1,param_2,param_3);
    }
  }
  else {
    uVar1 = param_1[3];
    param_1[3] = *param_1;
    uVar2 = param_1[1];
    *param_1 = uVar1;
    param_1[1] = param_1[2];
    param_1[2] = uVar2;
    uVar1 = param_1[7];
    param_1[7] = param_1[4];
    uVar2 = param_1[5];
    param_1[4] = uVar1;
    param_1[5] = param_1[6];
    param_1[6] = uVar2;
    uVar4 = 8;
  }
  if (param_2 < uVar4 + 8) {
    if (uVar4 < param_2) {
      uVar3 = F_01069aa0(param_1 + 8,param_2 - uVar4,param_3);
      uVar4 = uVar4 + uVar3;
    }
  }
  else {
    uVar1 = param_1[8];
    param_1[8] = param_1[0xb];
    param_1[0xb] = uVar1;
    uVar1 = param_1[9];
    param_1[9] = param_1[10];
    param_1[10] = uVar1;
    uVar1 = param_1[0xc];
    param_1[0xc] = param_1[0xf];
    param_1[0xf] = uVar1;
    uVar1 = param_1[0xd];
    param_1[0xd] = param_1[0xe];
    param_1[0xe] = uVar1;
    uVar4 = uVar4 + 8;
  }
  if (param_2 < uVar4 + 8) {
    if (uVar4 < param_2) {
      uVar3 = F_01069aa0(param_1 + 0x10,param_2 - uVar4,param_3);
      uVar4 = uVar4 + uVar3;
    }
  }
  else {
    uVar1 = param_1[0x10];
    param_1[0x10] = param_1[0x13];
    param_1[0x13] = uVar1;
    uVar1 = param_1[0x11];
    param_1[0x11] = param_1[0x12];
    param_1[0x12] = uVar1;
    uVar1 = param_1[0x14];
    param_1[0x14] = param_1[0x17];
    param_1[0x17] = uVar1;
    uVar1 = param_1[0x15];
    param_1[0x15] = param_1[0x16];
    param_1[0x16] = uVar1;
    uVar4 = uVar4 + 8;
  }
  if (param_2 < uVar4 + 8) {
    if (uVar4 < param_2) {
      uVar3 = F_01069aa0(param_1 + 0x18,param_2 - uVar4,param_3);
      uVar4 = uVar4 + uVar3;
    }
  }
  else {
    uVar1 = param_1[0x18];
    param_1[0x18] = param_1[0x1b];
    param_1[0x1b] = uVar1;
    uVar1 = param_1[0x19];
    param_1[0x19] = param_1[0x1a];
    param_1[0x1a] = uVar1;
    uVar1 = param_1[0x1c];
    param_1[0x1c] = param_1[0x1f];
    param_1[0x1f] = uVar1;
    uVar1 = param_1[0x1d];
    param_1[0x1d] = param_1[0x1e];
    param_1[0x1e] = uVar1;
    uVar4 = uVar4 + 8;
  }
  if (param_2 < uVar4 + 8) {
    if (uVar4 < param_2) {
      uVar3 = F_01069aa0(param_1 + 0x20,param_2 - uVar4,param_3);
      uVar4 = uVar4 + uVar3;
    }
  }
  else {
    uVar1 = param_1[0x20];
    param_1[0x20] = param_1[0x23];
    param_1[0x23] = uVar1;
    uVar1 = param_1[0x21];
    param_1[0x21] = param_1[0x22];
    param_1[0x22] = uVar1;
    uVar1 = param_1[0x24];
    param_1[0x24] = param_1[0x27];
    param_1[0x27] = uVar1;
    uVar1 = param_1[0x25];
    param_1[0x25] = param_1[0x26];
    param_1[0x26] = uVar1;
    uVar4 = uVar4 + 8;
  }
  if (uVar4 + 8 <= param_2) {
    uVar1 = param_1[0x28];
    param_1[0x28] = param_1[0x2b];
    param_1[0x2b] = uVar1;
    uVar1 = param_1[0x29];
    param_1[0x29] = param_1[0x2a];
    param_1[0x2a] = uVar1;
    uVar1 = param_1[0x2c];
    param_1[0x2c] = param_1[0x2f];
    param_1[0x2f] = uVar1;
    uVar1 = param_1[0x2d];
    param_1[0x2d] = param_1[0x2e];
    param_1[0x2e] = uVar1;
    return uVar4 + 8;
  }
  if (uVar4 < param_2) {
    uVar3 = F_01069aa0(param_1 + 0x28,param_2 - uVar4,param_3);
    return uVar3 + uVar4;
  }
  return uVar4;
}

/* ref: FUN_01069d30 */
GEN_FRAME uint F_01069d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x1069d30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar3 = F_0105df60(8,param_1);
  uVar1 = uVar3 + 4;
  if (uVar1 <= param_2) {
    uVar2 = *(undefined1 *)(((int)(uint)(param_1)) + 0xb);
    *(undefined1 *)(((int)(uint)(param_1)) + 0xb) = *(undefined1 *)(((int)(uint)(param_1)) + 8);
    *(undefined1 *)(((int)(uint)(param_1)) + 8) = uVar2;
    uVar2 = *(undefined1 *)(((int)(uint)(param_1)) + 10);
    *(undefined1 *)(((int)(uint)(param_1)) + 10) = *(undefined1 *)(((int)(uint)(param_1)) + 9);
    *(undefined1 *)(((int)(uint)(param_1)) + 9) = uVar2;
    if (uVar3 + 0x34 <= param_2) {
      uVar3 = F_01069b00(((int)(uint)(param_1)) + 0xc,0x30,param_3);
      return uVar1 + uVar3;
    }
    uVar3 = uVar1;
    if (uVar1 < param_2) {
      uVar3 = F_01069b00(((int)(uint)(param_1)) + 0xc,param_2 - uVar1,param_3);
      uVar3 = uVar1 + uVar3;
    }
  }
  return uVar3;
}

/* ref: FUN_01069db0 */
GEN_FRAME uint F_01069db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069db0u, gen_a0, gen_a1, 0u, 0u);
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
  return 6;
}

/* ref: FUN_01069de0 */
GEN_NOFRAME uint F_01069de0(void)
{
  GEN_ENTER(0x1069de0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: FUN_01069df0 */
GEN_FRAME uint F_01069df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069df0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_01069e20 */
GEN_FRAME uint F_01069e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069e20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (uVar2 + 8 <= param_2) {
    uVar3 = F_0105df60(8,param_1 + 8);
    uVar2 = uVar2 + uVar3;
    if (uVar2 + 4 <= param_2) {
      uVar1 = *(undefined1 *)(param_1 + 0x13);
      *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x10) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 0x12);
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x11);
      *(undefined1 *)(param_1 + 0x11) = uVar1;
      uVar3 = uVar2 + 4;
      if (uVar2 + 8 <= param_2) {
        uVar1 = *(undefined1 *)(param_1 + 0x17);
        *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_1 + 0x14);
        *(undefined1 *)(param_1 + 0x14) = uVar1;
        uVar1 = *(undefined1 *)(param_1 + 0x16);
        *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_1 + 0x15);
        *(undefined1 *)(param_1 + 0x15) = uVar1;
        uVar3 = uVar2 + 8;
        if (uVar2 + 0xc <= param_2) {
          uVar1 = *(undefined1 *)(param_1 + 0x1b);
          *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_1 + 0x18);
          *(undefined1 *)(param_1 + 0x18) = uVar1;
          uVar1 = *(undefined1 *)(param_1 + 0x1a);
          *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_1 + 0x19);
          uVar3 = uVar2 + 0x10;
          *(undefined1 *)(param_1 + 0x19) = uVar1;
          if (param_2 < uVar3) {
            return uVar2 + 0xc;
          }
          uVar1 = *(undefined1 *)(param_1 + 0x1f);
          *(undefined1 *)(param_1 + 0x1f) = *(undefined1 *)(param_1 + 0x1c);
          *(undefined1 *)(param_1 + 0x1c) = uVar1;
          uVar1 = *(undefined1 *)(param_1 + 0x1e);
          *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_1 + 0x1d);
          *(undefined1 *)(param_1 + 0x1d) = uVar1;
          if (uVar2 + 0x12 <= param_2) {
            uVar1 = *(undefined1 *)(param_1 + 0x21);
            *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_1 + 0x20);
            *(undefined1 *)(param_1 + 0x20) = uVar1;
            uVar3 = uVar2 + 0x14;
          }
        }
      }
      return uVar3;
    }
  }
  return uVar2;
}

/* ref: FUN_01069f10 */
GEN_FRAME uint F_01069f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069f10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1;
}

/* ref: FUN_01069f30 */
GEN_FRAME uint F_01069f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069f30u, gen_a0, gen_a1, 0u, 0u);
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
  return (-(uint)(param_2 < 0x83) & 0xffffff87) + 0x83;
}

/* ref: FUN_01069f70 */
GEN_FRAME uint F_01069f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069f70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1;
}

/* ref: FUN_01069f90 */
GEN_FRAME uint F_01069f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069f90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  if (uVar1 + 8 <= param_2) {
    uVar2 = F_0105df60(8,((int)(uint)(param_1)) + 8);
    uVar1 = uVar1 + uVar2;
    if (uVar1 + 0x20 <= param_2) {
      return uVar1 + 0x20;
    }
  }
  return uVar1;
}

/* ref: FUN_01069fe0 */
GEN_FRAME uint F_01069fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x1069fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  uVar2 = uVar1 + 1;
  if (uVar1 + 0x2f <= param_2) {
    uVar2 = uVar1 + 0x2f;
  }
  return uVar2;
}

/* ref: FUN_0106a010 */
GEN_FRAME uint F_0106a010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a010u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  if (param_2 < uVar1 + 8) {
    return uVar1;
  }
  uVar2 = F_0105df60(8,((int)(uint)(param_1)) + 8);
  return uVar2 + 1 + uVar1;
}

/* ref: FUN_0106a060 */
GEN_FRAME uint F_0106a060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a060u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  if (param_2 < uVar1 + 8) {
    return uVar1;
  }
  uVar2 = F_0105df60(8,((int)(uint)(param_1)) + 8);
  return uVar2 + 1 + uVar1;
}

/* ref: FUN_0106a0b0 */
GEN_FRAME uint F_0106a0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  if (param_2 < uVar1 + 8) {
    return uVar1;
  }
  uVar2 = F_0105df60(8,((int)(uint)(param_1)) + 8);
  uVar2 = uVar1 + 1 + uVar2;
  uVar1 = uVar2 + 0x2e;
  if (uVar1 <= param_2) {
    uVar2 = uVar1;
  }
  return uVar2;
}

/* ref: FUN_0106a100 */
GEN_FRAME uint F_0106a100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a100u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1 + 1;
}

/* ref: FUN_0106a120 */
GEN_FRAME uint F_0106a120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a120u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  if (uVar1 + 0x10 <= param_2) {
    uVar1 = uVar1 + 0x10;
  }
  return uVar1;
}

/* ref: FUN_0106a150 */
GEN_FRAME uint F_0106a150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a150u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  return 2;
}

/* ref: FUN_0106a180 */
GEN_FRAME uint F_0106a180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a180u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1;
}

/* ref: FUN_0106a1a0 */
GEN_FRAME uint F_0106a1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a1a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0106a1d0 */
GEN_FRAME uint F_0106a1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (uVar2 + 4 <= param_2) {
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 8);
    *(undefined1 *)(((int)(uint)(param_1)) + 8) = *(undefined1 *)(((int)(uint)(param_1)) + 0xb);
    *(undefined1 *)(((int)(uint)(param_1)) + 0xb) = uVar1;
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 9);
    *(undefined1 *)(((int)(uint)(param_1)) + 9) = *(undefined1 *)(((int)(uint)(param_1)) + 10);
    *(undefined1 *)(((int)(uint)(param_1)) + 10) = uVar1;
    uVar2 = uVar2 + 4;
  }
  return uVar2;
}

/* ref: FUN_0106a220 */
GEN_FRAME uint F_0106a220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a220u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0106a250 */
GEN_FRAME uint F_0106a250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a250u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0xc1) & 0xffffff3f) + 0xc1;
}

/* ref: FUN_0106a270 */
GEN_NOFRAME uint F_0106a270(void)
{
  GEN_ENTER(0x106a270u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_0106a280 */
GEN_NOFRAME uint F_0106a280(void)
{
  GEN_ENTER(0x106a280u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_0106a290 */
GEN_FRAME uint F_0106a290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a290u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  if (uVar1 + 8 <= param_2) {
    uVar2 = F_0105df60(8,((int)(uint)(param_1)) + 8);
    uVar1 = uVar1 + uVar2;
    if (uVar1 + 0x20 <= param_2) {
      return uVar1 + 0x20;
    }
  }
  return uVar1;
}

/* ref: FUN_0106a2e0 */
GEN_FRAME uint F_0106a2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a2e0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  return 3;
}

/* ref: FUN_0106a310 */
GEN_FRAME uint F_0106a310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a310u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0xc1) & 0xffffff3f) + 0xc1;
}

/* ref: FUN_0106a330 */
GEN_NOFRAME uint F_0106a330(void)
{
  GEN_ENTER(0x106a330u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_0106a340 */
GEN_FRAME uint F_0106a340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a340u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0106a370 */
GEN_FRAME uint F_0106a370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a370u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar1 = F_0105df60(8,param_1);
  return uVar1;
}

/* ref: FUN_0106a390 */
GEN_FRAME uint F_0106a390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a390u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0106a3c0 */
GEN_FRAME uint F_0106a3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a3c0u, gen_a0, gen_a1, 0u, 0u);
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
  return 6;
}

/* ref: FUN_0106a3f0 */
GEN_FRAME uint F_0106a3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a3f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0106a420 */
GEN_FRAME uint F_0106a420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a420u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar3 = F_0105df60(8,param_1);
  uVar4 = uVar3;
  if (uVar3 + 4 <= param_2) {
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 8);
    *(undefined1 *)(((int)(uint)(param_1)) + 8) = *(undefined1 *)(((int)(uint)(param_1)) + 0xb);
    uVar2 = *(undefined1 *)(((int)(uint)(param_1)) + 10);
    *(undefined1 *)(((int)(uint)(param_1)) + 0xb) = uVar1;
    *(undefined1 *)(((int)(uint)(param_1)) + 10) = *(undefined1 *)(((int)(uint)(param_1)) + 9);
    *(undefined1 *)(((int)(uint)(param_1)) + 9) = uVar2;
    uVar4 = uVar3 + 6;
    if (uVar3 + 0x26 <= param_2) {
      uVar4 = uVar3 + 0x26;
    }
  }
  return uVar4;
}

/* ref: FUN_0106a470 */
GEN_FRAME uint F_0106a470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a470u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 0x802) {
    return 2;
  }
  return (-(uint)(param_2 < 0xc02) & 0xfffffc00) + 0xc02;
}

/* ref: FUN_0106a4c0 */
GEN_FRAME uint F_0106a4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a4c0u, gen_a0, gen_a1, 0u, 0u);
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
  return 9;
}

/* ref: FUN_0106a520 */
GEN_FRAME uint F_0106a520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a520u, gen_a0, gen_a1, 0u, 0u);
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
  return 0x10;
}

/* ref: FUN_0106a5d0 */
GEN_FRAME uint F_0106a5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a5d0u, gen_a0, gen_a1, 0u, 0u);
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
  if (param_2 < 0x1c) {
    return 0x14;
  }
  uVar2 = F_0105df60(8,param_1 + 0x18);
  return uVar2 + 0x14;
}

/* ref: FUN_0106a6c0 */
GEN_FRAME uint F_0106a6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 7) & 0xfffffffa) + 7;
}

/* ref: FUN_0106a6e0 */
GEN_FRAME uint F_0106a6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a6e0u, gen_a0, gen_a1, 0u, 0u);
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
  return 0x10;
}

/* ref: FUN_0106a790 */
GEN_FRAME uint F_0106a790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a790u, gen_a0, gen_a1, 0u, 0u);
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
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  if (param_2 < 0x18) {
    return 0x14;
  }
  uVar1 = param_1[0x14];
  param_1[0x14] = param_1[0x17];
  param_1[0x17] = uVar1;
  uVar1 = param_1[0x15];
  param_1[0x15] = param_1[0x16];
  param_1[0x16] = uVar1;
  if (param_2 < 0x1c) {
    return 0x18;
  }
  uVar1 = param_1[0x18];
  param_1[0x18] = param_1[0x1b];
  param_1[0x1b] = uVar1;
  uVar1 = param_1[0x19];
  param_1[0x19] = param_1[0x1a];
  param_1[0x1a] = uVar1;
  if (param_2 < 0x20) {
    return 0x1c;
  }
  uVar1 = param_1[0x1c];
  param_1[0x1c] = param_1[0x1f];
  param_1[0x1f] = uVar1;
  uVar1 = param_1[0x1d];
  param_1[0x1d] = param_1[0x1e];
  param_1[0x1e] = uVar1;
  return 0x20;
}

/* ref: FUN_0106a8e0 */
GEN_FRAME uint F_0106a8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a8e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_1 + 7);
  *(undefined1 *)(param_1 + 7) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)(param_1 + 10) = uVar1;
  if (param_2 < 0xe) {
    return 0xc;
  }
  uVar1 = *(undefined1 *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)(param_1 + 0xd) = uVar1;
  if (param_2 < 0x10) {
    return 0xe;
  }
  uVar1 = *(undefined1 *)(param_1 + 0xe);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_1 + 0xf);
  *(undefined1 *)(param_1 + 0xf) = uVar1;
  if (param_2 < 0x18) {
    return 0x10;
  }
  uVar2 = F_0105df60(8,param_1 + 0x10);
  return uVar2 + 0x10;
}

/* ref: FUN_0106a990 */
GEN_FRAME uint F_0106a990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106a990u, gen_a0, gen_a1, 0u, 0u);
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
  if (param_2 < 0x1c) {
    return 0x14;
  }
  uVar2 = F_0105df60(8,param_1 + 0x18);
  return uVar2 + 0x14;
}

/* ref: FUN_0106aa80 */
GEN_FRAME uint F_0106aa80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106aa80u, gen_a0, gen_a1, 0u, 0u);
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
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  return (-(uint)(param_2 < 0x34) & 0xffffffe0) + 0x34;
}

/* ref: FUN_0106ab60 */
GEN_FRAME uint F_0106ab60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106ab60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_1 + 7);
  *(undefined1 *)(param_1 + 7) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar1;
  if (param_2 < 0xc) {
    return 8;
  }
  uVar1 = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)(param_1 + 10) = uVar1;
  if (param_2 < 0xe) {
    return 0xc;
  }
  uVar1 = *(undefined1 *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)(param_1 + 0xd) = uVar1;
  if (param_2 < 0x10) {
    return 0xe;
  }
  uVar1 = *(undefined1 *)(param_1 + 0xe);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_1 + 0xf);
  *(undefined1 *)(param_1 + 0xf) = uVar1;
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_1 + 0x13);
  *(undefined1 *)(param_1 + 0x13) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x11);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_1 + 0x12);
  *(undefined1 *)(param_1 + 0x12) = uVar1;
  if (param_2 < 0x18) {
    return 0x14;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x14);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_1 + 0x17);
  *(undefined1 *)(param_1 + 0x17) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x15);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_1 + 0x16);
  *(undefined1 *)(param_1 + 0x16) = uVar1;
  if (param_2 < 0x1c) {
    return 0x18;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_1 + 0x1b);
  *(undefined1 *)(param_1 + 0x1b) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x19);
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_1 + 0x1a);
  *(undefined1 *)(param_1 + 0x1a) = uVar1;
  return 0x1c;
}

/* ref: FUN_0106ac70 */
GEN_FRAME uint F_0106ac70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x106ac70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
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
  if (param_2 < 8) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  uVar2 = param_1[6];
  param_1[7] = uVar1;
  param_1[6] = param_1[5];
  param_1[5] = uVar2;
  uVar4 = 0xc;
  if (0x17 < param_2) {
    iVar6 = 3;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 0xc];
      param_1[iVar5 + 0xc] = param_1[iVar5 + 0xf];
      param_1[iVar5 + 0xf] = uVar1;
      uVar1 = param_1[iVar5 + 0xd];
      param_1[iVar5 + 0xd] = param_1[iVar5 + 0xe];
      param_1[iVar5 + 0xe] = uVar1;
      iVar6 = iVar6 - 1;
      iVar3 = iVar5 + 4;
    } while (iVar6 != 0);
    return iVar5 + 0x10;
  }
  if (0xc < param_2) {
    uVar4 = F_0105dfc0(param_2 - 0xc,param_1 + 0xc);
    uVar4 = uVar4 + 0xc;
  }
  return uVar4;
}

/* ref: FUN_0106ad20 */
GEN_FRAME uint F_0106ad20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x106ad20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = 0;
  if (0x17 < param_2) {
    uVar1 = *param_1;
    *param_1 = param_1[3];
    uVar2 = param_1[2];
    param_1[3] = uVar1;
    param_1[2] = param_1[1];
    param_1[1] = uVar2;
    uVar1 = param_1[7];
    param_1[7] = param_1[4];
    param_1[4] = uVar1;
    uVar1 = param_1[6];
    param_1[6] = param_1[5];
    param_1[5] = uVar1;
    iVar6 = 3;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      uVar1 = param_1[iVar5 + 0xc];
      param_1[iVar5 + 0xc] = param_1[iVar5 + 0xf];
      param_1[iVar5 + 0xf] = uVar1;
      uVar1 = param_1[iVar5 + 0xd];
      param_1[iVar5 + 0xd] = param_1[iVar5 + 0xe];
      param_1[iVar5 + 0xe] = uVar1;
      iVar6 = iVar6 - 1;
      iVar3 = iVar5 + 4;
    } while (iVar6 != 0);
    return iVar5 + 0x10;
  }
  if (param_2 != 0) {
    uVar4 = F_0106ac70(param_1,param_2,param_3);
  }
  return uVar4;
}

/* ref: FUN_0106adc0 */
GEN_FRAME uint F_0106adc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106adc0u, gen_a0, gen_a1, 0u, 0u);
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
  return 0x10;
}

/* ref: FUN_0106ae80 */
GEN_FRAME uint F_0106ae80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106ae80u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 4) {
    return 2;
  }
  uVar1 = param_1[3];
  param_1[3] = param_1[2];
  param_1[2] = uVar1;
  uVar3 = 4;
  if (0x17 < param_2) {
    iVar5 = 5;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 4];
      param_1[iVar4 + 4] = param_1[iVar4 + 7];
      param_1[iVar4 + 7] = uVar1;
      uVar1 = param_1[iVar4 + 5];
      param_1[iVar4 + 5] = param_1[iVar4 + 6];
      param_1[iVar4 + 6] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 8;
  }
  if (4 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_0106af20 */
GEN_FRAME uint F_0106af20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106af20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x1b) & 0xffffffe6) + 0x1b;
}

/* ref: FUN_0106af40 */
GEN_FRAME uint F_0106af40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106af40u, gen_a0, gen_a1, 0u, 0u);
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
  if (param_2 < 0x18) {
    return 0x14;
  }
  uVar1 = param_1[0x14];
  param_1[0x14] = param_1[0x17];
  param_1[0x17] = uVar1;
  uVar1 = param_1[0x15];
  param_1[0x15] = param_1[0x16];
  param_1[0x16] = uVar1;
  if (param_2 < 0x1c) {
    return 0x18;
  }
  uVar1 = param_1[0x18];
  param_1[0x18] = param_1[0x1b];
  param_1[0x1b] = uVar1;
  uVar1 = param_1[0x19];
  param_1[0x19] = param_1[0x1a];
  param_1[0x1a] = uVar1;
  if (param_2 < 0x20) {
    return 0x1c;
  }
  uVar1 = param_1[0x1c];
  param_1[0x1c] = param_1[0x1f];
  param_1[0x1f] = uVar1;
  uVar1 = param_1[0x1d];
  param_1[0x1d] = param_1[0x1e];
  param_1[0x1e] = uVar1;
  if (param_2 < 0x24) {
    return 0x20;
  }
  uVar1 = param_1[0x20];
  param_1[0x20] = param_1[0x23];
  param_1[0x23] = uVar1;
  uVar1 = param_1[0x21];
  param_1[0x21] = param_1[0x22];
  param_1[0x22] = uVar1;
  if (param_2 < 0x26) {
    return 0x24;
  }
  uVar1 = param_1[0x24];
  param_1[0x24] = param_1[0x25];
  param_1[0x25] = uVar1;
  if (param_2 < 0x2c) {
    return 0x28;
  }
  uVar1 = param_1[0x28];
  param_1[0x28] = param_1[0x2b];
  param_1[0x2b] = uVar1;
  uVar1 = param_1[0x29];
  param_1[0x29] = param_1[0x2a];
  param_1[0x2a] = uVar1;
  if (param_2 < 0x30) {
    return 0x2c;
  }
  uVar1 = param_1[0x2c];
  param_1[0x2c] = param_1[0x2f];
  param_1[0x2f] = uVar1;
  uVar1 = param_1[0x2d];
  param_1[0x2d] = param_1[0x2e];
  param_1[0x2e] = uVar1;
  return 0x30;
}

/* ref: FUN_0106b0e0 */
GEN_FRAME uint F_0106b0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = param_1[3];
  param_1[3] = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = param_1[2];
  param_1[2] = uVar2;
  uVar5 = 4;
  if (param_2 < 0x20) {
    if (param_2 < 5) goto LAB_0106b14a;
    uVar5 = F_0105e000(param_2 - 4,param_1 + 4);
  }
  else {
    uVar5 = 0;
    iVar6 = 0xe;
    do {
      uVar1 = param_1[uVar5 + 4];
      param_1[uVar5 + 4] = param_1[uVar5 + 5];
      param_1[uVar5 + 5] = uVar1;
      uVar5 = uVar5 + 2;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  uVar5 = uVar5 + 4;
LAB_0106b14a: ;
  if (param_2 < uVar5 + 0x1c) {
    if (uVar5 < param_2) {
      uVar4 = F_0105e000(param_2 - uVar5,param_1 + 0x20);
      uVar5 = uVar5 + uVar4;
    }
    return uVar5;
  }
  iVar3 = 0;
  iVar6 = 0xe;
  do {
    uVar1 = param_1[iVar3 + 0x20];
    param_1[iVar3 + 0x20] = param_1[iVar3 + 0x21];
    param_1[iVar3 + 0x21] = uVar1;
    iVar3 = iVar3 + 2;
    iVar6 = iVar6 - 1;
  } while (iVar6 != 0);
  return uVar5 + iVar3;
}

/* ref: FUN_0106b1a0 */
GEN_FRAME uint F_0106b1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b1a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0106b200 */
GEN_FRAME uint F_0106b200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b200u, gen_a0, gen_a1, 0u, 0u);
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
  return 5;
}

/* ref: FUN_0106b230 */
GEN_FRAME uint F_0106b230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b230u, gen_a0, gen_a1, 0u, 0u);
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
  return 9;
}

/* ref: FUN_0106b290 */
GEN_FRAME uint F_0106b290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b290u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0106b2c0 */
GEN_FRAME uint F_0106b2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (uVar2 + 4 <= param_2) {
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 8);
    *(undefined1 *)(((int)(uint)(param_1)) + 8) = *(undefined1 *)(((int)(uint)(param_1)) + 0xb);
    *(undefined1 *)(((int)(uint)(param_1)) + 0xb) = uVar1;
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 9);
    *(undefined1 *)(((int)(uint)(param_1)) + 9) = *(undefined1 *)(((int)(uint)(param_1)) + 10);
    *(undefined1 *)(((int)(uint)(param_1)) + 10) = uVar1;
    uVar2 = uVar2 + 4;
  }
  return uVar2;
}

/* ref: FUN_0106b310 */
GEN_FRAME uint F_0106b310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b310u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  
  if (param_2 < 8) {
    return 0;
  }
  uVar2 = F_0105df60(8,param_1);
  if (uVar2 + 4 <= param_2) {
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 8);
    *(undefined1 *)(((int)(uint)(param_1)) + 8) = *(undefined1 *)(((int)(uint)(param_1)) + 0xb);
    *(undefined1 *)(((int)(uint)(param_1)) + 0xb) = uVar1;
    uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 9);
    *(undefined1 *)(((int)(uint)(param_1)) + 9) = *(undefined1 *)(((int)(uint)(param_1)) + 10);
    *(undefined1 *)(((int)(uint)(param_1)) + 10) = uVar1;
    uVar2 = uVar2 + 5;
  }
  return uVar2;
}

/* ref: FUN_0106b360 */
GEN_FRAME uint F_0106b360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b360u, gen_a0, gen_a1, 0u, 0u);
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
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  return 0x14;
}

/* ref: FUN_0106b430 */
GEN_FRAME uint F_0106b430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b430u, gen_a0, gen_a1, 0u, 0u);
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
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  return 0x14;
}

/* ref: FUN_0106b500 */
GEN_FRAME uint F_0106b500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b500u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0106b530 */
GEN_FRAME uint F_0106b530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b530u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (7 < param_2) {
    uVar3 = F_0105df60(8,param_1);
    uVar4 = uVar3;
    if (uVar3 + 4 <= param_2) {
      uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0xb);
      *(undefined1 *)(((int)(uint)(param_1)) + 0xb) = *(undefined1 *)(((int)(uint)(param_1)) + 8);
      *(undefined1 *)(((int)(uint)(param_1)) + 8) = uVar1;
      uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 10);
      *(undefined1 *)(((int)(uint)(param_1)) + 10) = *(undefined1 *)(((int)(uint)(param_1)) + 9);
      *(undefined1 *)(((int)(uint)(param_1)) + 9) = uVar1;
      uVar4 = uVar3 + 4;
      if (uVar3 + 8 <= param_2) {
        uVar1 = *(undefined1 *)(((int)(uint)(param_1)) + 0xc);
        *(undefined1 *)(((int)(uint)(param_1)) + 0xc) = *(undefined1 *)(((int)(uint)(param_1)) + 0xf);
        uVar2 = *(undefined1 *)(((int)(uint)(param_1)) + 0xe);
        *(undefined1 *)(((int)(uint)(param_1)) + 0xf) = uVar1;
        *(undefined1 *)(((int)(uint)(param_1)) + 0xe) = *(undefined1 *)(((int)(uint)(param_1)) + 0xd);
        *(undefined1 *)(((int)(uint)(param_1)) + 0xd) = uVar2;
        uVar4 = uVar3 + 9;
      }
    }
    return uVar4;
  }
  return 0;
}

/* ref: FUN_0106b5a0 */
GEN_FRAME uint F_0106b5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0xb < param_2) {
    uVar1 = param_1[8];
    param_1[8] = param_1[0xb];
    uVar2 = param_1[10];
    param_1[0xb] = uVar1;
    param_1[10] = param_1[9];
    param_1[9] = uVar2;
    return 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106b630 */
GEN_FRAME uint F_0106b630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b630u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0xf < param_2) {
    iVar5 = 2;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106b6e0 */
GEN_FRAME uint F_0106b6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x17 < param_2) {
    iVar5 = 4;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106b790 */
GEN_FRAME uint F_0106b790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b790u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x27 < param_2) {
    iVar5 = 8;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106b840 */
GEN_FRAME uint F_0106b840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b840u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x47 < param_2) {
    iVar5 = 0x10;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106b8f0 */
GEN_FRAME uint F_0106b8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x87 < param_2) {
    iVar5 = 0x20;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106b9a0 */
GEN_FRAME uint F_0106b9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106b9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x107 < param_2) {
    iVar5 = 0x40;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106ba50 */
GEN_FRAME uint F_0106ba50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106ba50u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x207 < param_2) {
    iVar5 = 0x80;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106bb00 */
GEN_FRAME uint F_0106bb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106bb00u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x403 < param_2) {
    iVar5 = 0xff;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106bbb0 */
GEN_FRAME uint F_0106bbb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106bbb0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0xb < param_2) {
    uVar1 = param_1[8];
    param_1[8] = param_1[0xb];
    uVar2 = param_1[10];
    param_1[0xb] = uVar1;
    param_1[10] = param_1[9];
    param_1[9] = uVar2;
    return 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106bc40 */
GEN_FRAME uint F_0106bc40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106bc40u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0xf < param_2) {
    iVar5 = 2;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106bcf0 */
GEN_FRAME uint F_0106bcf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106bcf0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x17 < param_2) {
    iVar5 = 4;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106bda0 */
GEN_FRAME uint F_0106bda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106bda0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x27 < param_2) {
    iVar5 = 8;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106be50 */
GEN_FRAME uint F_0106be50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106be50u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x47 < param_2) {
    iVar5 = 0x10;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106bf00 */
GEN_FRAME uint F_0106bf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106bf00u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x87 < param_2) {
    iVar5 = 0x20;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106bfb0 */
GEN_FRAME uint F_0106bfb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106bfb0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x107 < param_2) {
    iVar5 = 0x40;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106c060 */
GEN_FRAME uint F_0106c060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c060u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x207 < param_2) {
    iVar5 = 0x80;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106c110 */
GEN_FRAME uint F_0106c110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c110u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[5];
  param_1[5] = param_1[4];
  param_1[4] = uVar1;
  uVar3 = 8;
  if (0x403 < param_2) {
    iVar5 = 0xff;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = param_1[iVar4 + 8];
      param_1[iVar4 + 8] = param_1[iVar4 + 0xb];
      param_1[iVar4 + 0xb] = uVar1;
      uVar1 = param_1[iVar4 + 9];
      param_1[iVar4 + 9] = param_1[iVar4 + 10];
      param_1[iVar4 + 10] = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 0xc;
  }
  if (8 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 8,param_1 + 8);
    uVar3 = uVar3 + 8;
  }
  return uVar3;
}

/* ref: FUN_0106c1c0 */
GEN_FRAME uint F_0106c1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c1c0u, gen_a0, gen_a1, 0u, 0u);
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
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  return 8 - (param_2 < 8);
}

/* ref: FUN_0106c210 */
GEN_FRAME uint F_0106c210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c210u, gen_a0, gen_a1, 0u, 0u);
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
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  return (-(uint)(param_2 < 0xf) & 0xfffffff8) + 0xf;
}

/* ref: FUN_0106c270 */
GEN_FRAME uint F_0106c270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c270u, gen_a0, gen_a1, 0u, 0u);
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
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  return (-(uint)(param_2 < 0x17) & 0xfffffff0) + 0x17;
}

/* ref: FUN_0106c2d0 */
GEN_FRAME uint F_0106c2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c2d0u, gen_a0, gen_a1, 0u, 0u);
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
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  return (-(uint)(param_2 < 0x27) & 0xffffffe0) + 0x27;
}

/* ref: FUN_0106c330 */
GEN_FRAME uint F_0106c330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c330u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 < 4) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  if (param_2 < 6) {
    return 4;
  }
  uVar1 = param_1[4];
  param_1[4] = param_1[5];
  param_1[5] = uVar1;
  if (param_2 < 0x10) {
    return 8;
  }
  uVar2 = F_0105df60(8,param_1 + 8);
  uVar3 = uVar2 + 8;
  if (uVar2 + 0x28 <= param_2) {
    uVar3 = uVar2 + 0x28;
  }
  return uVar3;
}

/* ref: FUN_0106c3a0 */
GEN_FRAME uint F_0106c3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c3a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0106c3d0 */
GEN_FRAME uint F_0106c3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
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
  if (param_2 < 0x14) {
    return 0x10;
  }
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  return 0x14;
}

/* ref: FUN_0106c4a0 */
GEN_FRAME uint F_0106c4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c4a0u, gen_a0, gen_a1, 0u, 0u);
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
  return 0x10;
}

/* ref: FUN_0106c550 */
GEN_FRAME uint F_0106c550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c550u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (-(uint)(param_2 < 0x800) & 0xfffff800) + 0x800;
}

/* ref: FUN_0106c570 */
GEN_FRAME uint F_0106c570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c570u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  return 4;
}

/* ref: FUN_0106c5a0 */
GEN_FRAME uint F_0106c5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  if (param_2 < 0xc) {
    return 4;
  }
  uVar2 = F_0105df60(8,param_1 + 8);
  return uVar2 + 4;
}

/* ref: FUN_0106c5e0 */
GEN_FRAME uint F_0106c5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c5e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  uint uVar2;
  
  if (param_2 < 4) {
    return 2;
  }
  uVar1 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar1;
  if (param_2 < 0xc) {
    return 4;
  }
  uVar2 = F_0105df60(8,param_1 + 8);
  return uVar2 + 4;
}

/* ref: FUN_0106c630 */
GEN_NOFRAME uint F_0106c630(void)
{
  GEN_ENTER(0x106c630u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_0106c640 */
GEN_FRAME uint F_0106c640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c640u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = 2;
  if (0xb < param_2) {
    iVar5 = 5;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = *(undefined1 *)(param_1 + 2 + iVar4);
      *(undefined1 *)(param_1 + 2 + iVar4) = *(undefined1 *)(param_1 + 3 + iVar4);
      *(undefined1 *)(param_1 + 3 + iVar4) = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 2;
    } while (iVar5 != 0);
    return iVar4 + 4;
  }
  if (2 < param_2) {
    iVar5 = 0;
    for (uVar3 = param_2 - 2 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar1 = *(undefined1 *)(param_1 + 2 + iVar5);
      *(undefined1 *)(param_1 + 2 + iVar5) = *(undefined1 *)(param_1 + 3 + iVar5);
      *(undefined1 *)(param_1 + 3 + iVar5) = uVar1;
      iVar5 = iVar5 + 2;
    }
    uVar3 = iVar5 + 2;
  }
  return uVar3;
}

/* ref: FUN_0106c6b0 */
GEN_FRAME uint F_0106c6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c6b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0106c6e0 */
GEN_FRAME uint F_0106c6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c6e0u, gen_a0, gen_a1, 0u, 0u);
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
  return 8;
}

/* ref: FUN_0106c740 */
GEN_NOFRAME uint F_0106c740(void)
{
  GEN_ENTER(0x106c740u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0106c750 */
GEN_FRAME uint F_0106c750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c750u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  
  if (param_2 < 2) {
    return 0;
  }
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  return 2;
}

/* ref: FUN_0106c780 */
GEN_NOFRAME uint F_0106c780(void)
{
  GEN_ENTER(0x106c780u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_0106c790 */
GEN_NOFRAME uint F_0106c790(void)
{
  GEN_ENTER(0x106c790u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_0106c7a0 */
GEN_FRAME uint F_0106c7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c7a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = 4;
  if (0x13 < param_2) {
    iVar5 = 4;
    iVar2 = 0;
    do {
      iVar4 = iVar2;
      uVar1 = *(undefined1 *)(param_1 + 4 + iVar4);
      *(undefined1 *)(param_1 + 4 + iVar4) = *(undefined1 *)(param_1 + 7 + iVar4);
      *(undefined1 *)(param_1 + 7 + iVar4) = uVar1;
      uVar1 = *(undefined1 *)(param_1 + 5 + iVar4);
      *(undefined1 *)(param_1 + 5 + iVar4) = *(undefined1 *)(param_1 + 6 + iVar4);
      *(undefined1 *)(param_1 + 6 + iVar4) = uVar1;
      iVar5 = iVar5 - 1;
      iVar2 = iVar4 + 4;
    } while (iVar5 != 0);
    return iVar4 + 8;
  }
  if (4 < param_2) {
    uVar3 = F_0105dfc0(param_2 - 4,param_1 + 4);
    uVar3 = uVar3 + 4;
  }
  return uVar3;
}

/* ref: FUN_0106c810 */
GEN_FRAME uint F_0106c810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c810u, gen_a0, gen_a1, 0u, 0u);
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
  return 8;
}

/* ref: FUN_0106c870 */
GEN_NOFRAME uint F_0106c870(void)
{
  GEN_ENTER(0x106c870u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_0106c880 */
GEN_NOFRAME uint F_0106c880(void)
{
  GEN_ENTER(0x106c880u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_0106c890 */
GEN_FRAME uint F_0106c890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106c890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  return param_3;
}

/* ref: FUN_0106c8a0 */
GEN_FRAME uint F_0106c8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x106c8a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0106c930 */
GEN_FRAME uint F_0106c930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x106c930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return param_2;
}

/* ref: RecvCallbackInterface_TZoneProtoUp_ZoneProtoChannel_Network_Application_TZoneProtoDown::vf0 */
GEN_FRAME uint GEN_THISCALL F_0106c970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x106c970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x12b5324));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0106c9b0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0106c9b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x106c9b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x12b5324));
  return;
}

/* ref: FUN_0106c9c0 */
GEN_NOFRAME uint GEN_THISCALL F_0106c9c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x106c9c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[249])REFP(0x12b5334));
  return (uint)in_ecx;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf0 */
GEN_FRAME uint GEN_THISCALL F_0106c9d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x106c9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x12b5324));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoDownCallbackInterface::vf1 */
GEN_FRAME uint GEN_THISCALL F_0106ca00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x106ca00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*(int *)(param_2 + 0xc) + 0x24)));
  if (*(ushort *)(uVar1 + 2) - 0x65 < 0x287) {
                    
                    
    switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x106e474) + *(ushort *)(uVar1 + 2) + 3))))) {
    case 0: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 8))(this GEN_EDX_FWD,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 1: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 2: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 3: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x14))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 4: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 5: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 6: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x20))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 7: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 8: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 9: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 10: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x30))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x34))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x40))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xf: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x44))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x10: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x11: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x4c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x12: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x50))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x13: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x54))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x14: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x58))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x15: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x16: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x60))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x17: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 100))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x18: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x68))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x19: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x6c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x1a: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x70))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x1b: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x74))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x1c: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x78))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x1d: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x7c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x1e: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x80))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x1f: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x84))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x20: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x88))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x21: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x8c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x22: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x90))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x23: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x94))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x24: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x98))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x25: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x9c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x26: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa0))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x27: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa4))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x28: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa8))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x29: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xac))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x2a: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xb0))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x2b: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xb4))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x2c: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xb8))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x2d: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xbc))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x2e: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc0))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x2f: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc4))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x30: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 200))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x31: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xcc))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x32: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xd0))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x33: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xd4))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x34: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xd8))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x35: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xdc))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x36: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xe0))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x37: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xe4))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x38: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xe8))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x39: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xec))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x3a: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xf0))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x3b: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xf4))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x3c: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xf8))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x3d: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xfc))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x3e: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x100))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x3f: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x104))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x40: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x108))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x41: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x42: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x110))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x43: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x114))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x44: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x118))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x45: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x11c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x46: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x120))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x47: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x124))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x48: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x128))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x49: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 300))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x4a: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x130))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x4b: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x134))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x4c: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x138))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x4d: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x13c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x4e: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x140))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x4f: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x144))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x50: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x148))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x51: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x14c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x52: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x150))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x53: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x154))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x54: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x158))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x55: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x15c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x56: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x160))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x57: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x164))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x58: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x168))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x59: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x16c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x5a: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x170))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x5b: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x174))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x5c: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x178))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x5d: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x17c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x5e: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x180))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x5f: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x184))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x60: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x188))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x61: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x18c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x62: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 400))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 99: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x194))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 100: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x198))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x65: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x19c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x66: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1a0))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x67: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1a4))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x68: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1a8))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x69: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1ac))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x6a: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1b0))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x6b: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1b4))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x6c: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1b8))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x6d: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1bc))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x6e: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1c0))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x6f: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1c4))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x70: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1c8))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x71: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1cc))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x72: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1d0))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x73: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1d4))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x74: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1d8))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x75: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1dc))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x76: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1e0))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x77: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1e4))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x78: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1e8))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x79: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1ec))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x7a: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1f0))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x7b: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 500))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x7c: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1f8))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x7d: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x1fc))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x7e: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x200))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x7f: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x204))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x80: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x208))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x81: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x20c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x82: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x210))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x83: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x214))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x84: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x218))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x85: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x21c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x86: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x220))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x87: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x224))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x88: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x228))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x89: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x22c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x8a: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x230))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x8b: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x234))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x8c: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x238))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x8d: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x23c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x8e: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x240))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x8f: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x244))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x90: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x248))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x91: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x24c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x92: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x250))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x93: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x254))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x94: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 600))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x95: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x25c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x96: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x260))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x97: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x264))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x98: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x268))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x99: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x26c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x9a: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x270))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x9b: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x274))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x9c: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x278))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x9d: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x27c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x9e: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x280))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0x9f: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x284))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa0: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x288))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa1: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x28c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa2: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x290))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa3: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x294))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa4: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x298))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa5: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x29c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa6: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2a0))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa7: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2a4))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa8: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2a8))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xa9: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2ac))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xaa: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2b0))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xab: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2b4))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xac: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2b8))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xad: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 700))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xae: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2c0))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xaf: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2c4))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb0: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2c8))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb1: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2cc))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb2: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2d0))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb3: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2d4))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb4: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2d8))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb5: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2dc))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb6: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2e0))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb7: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2e4))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb8: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2e8))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xb9: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2ec))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xba: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2f0))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xbb: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2f4))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xbc: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2f8))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xbd: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x2fc))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xbe: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x300))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xbf: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x304))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc0: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x308))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc1: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x30c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc2: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x310))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc3: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x314))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc4: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x318))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc5: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x31c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc6: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 800))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 199: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x324))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 200: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x328))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xc9: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x32c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xca: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x330))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xcb: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x334))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xcc: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x338))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xcd: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x33c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xce: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x340))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xcf: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x344))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd0: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x34c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd1: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x348))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd2: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x350))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd3: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x354))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd4: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x358))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd5: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x35c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd6: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x360))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd7: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x364))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd8: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x368))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xd9: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x36c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xda: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x370))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xdb: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x374))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xdc: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x378))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xdd: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x37c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xde: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x380))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xdf: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 900))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe0: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x388))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe1: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe2: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x390))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe3: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x394))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe4: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x398))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe5: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x39c))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe6: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3a0))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe7: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3a4))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe8: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3a8))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xe9: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3ac))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xea: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3b0))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xeb: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3b4))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xec: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3b8))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xed: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3bc))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xee: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3c0))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xef: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3c4))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xf0: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3c8))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xf1: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3cc))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xf2: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3d0))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xf3: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3d4))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xf4: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3d8))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xf5: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3dc))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
      return uVar1;
    case 0xf6: ;
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x3e0))(this GEN_EDX_ARG,param_1,param_2,uVar1 + 0x10);
    }
  }
  return uVar1;
}

/* ref: FUN_0106f8a0 */
GEN_FRAME uint GEN_THISCALL F_0106f8a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106f8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_01050d30(this GEN_EDX_FWD,param_2,param_3);
  *(undefined4 *)((int)this + 0x10) = param_1;
  return (uint)this;
}

/* ref: Application::Network::ZoneProtoChannel::ClientPacketBuilder::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_0106f8d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x106f8d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x20;
}

/* ref: Application::Network::ZoneProtoChannel::ClientPacketBuilder::vf3 */
GEN_FRAME uint GEN_THISCALL F_0106f8e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x106f8e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  F_0106c890((uint)*(ushort *)(param_1 + 2),param_1 + 0x10,param_2 - 0x10,0);
  uVar1 = F_0106c930(param_1,0x10,0);
  return uVar1;
}

/* ref: PacketDataBuilder_TZoneProtoUp_ZoneProtoChannel_Network_Application_IpcChannel::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0106f940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x106f940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: PacketDataBuilder_TZoneProtoUp_ZoneProtoChannel_Network_Application_IpcChannel::vf3 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0106f950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x106f950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: PacketBufferTmpl_TZoneProtoUp_ZoneProtoChannel_Network_Application_IpcChannel::vf0 */
GEN_FRAME uint GEN_THISCALL F_0106f960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x106f960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PacketDataBuilder_TZoneProtoUp_ZoneProtoChannel_Network_Application_IpcChannel::vf0 */
GEN_FRAME uint GEN_THISCALL F_0106f990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x106f990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x12b5724));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0106f9d0 */
GEN_NOFRAME uint GEN_THISCALL F_0106f9d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x106f9d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_01050b60(in_ecx + 2 GEN_EDX_FWD);
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  return (uint)in_ecx;
}

/* ref: Application::Network::ZoneProtoChannel::ClientPacketBuilder::vf2 */
GEN_FRAME uint GEN_THISCALL F_0106fa20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x106fa20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  __time64_t _Var1;
  
  *param_1 = *param_1 & 0xffffff14 | 0x14;
  *(undefined2 *)((int)param_1 + 2) = *(undefined2 *)(this + 0x30);
  *(undefined1 *)((int)param_1 + 1) = 0;
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  param_1[2] = (uint)_Var1;
  *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)(this + 0x34);
  return (uint)_Var1;
}

/* ref: FUN_0106fa60 */
GEN_NOFRAME uint GEN_THISCALL F_0106fa60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x106fa60u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x12b5724));
  F_01050b60(in_ecx + 4 GEN_EDX_FWD);
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[2] = (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  return (uint)in_ecx;
}

/* ref: FUN_0106fa90 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0106fa90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x106fa90u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x12b5724));
  in_ecx[2] = (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  F_01050b70();
  return;
}

/* ref: FUN_0106fab0 */
GEN_NOFRAME uint GEN_THISCALL F_0106fab0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x106fab0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x12b5724));
  F_01050b60(in_ecx + 4 GEN_EDX_FWD);
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[2] = (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x12b5738));
  return (uint)in_ecx;
}

/* ref: Application::Network::ZoneProtoChannel::ZoneProtoUpPacketBuilder::vf0 */
GEN_FRAME uint GEN_THISCALL F_0106fae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x106fae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x12b5724));
  *(undefined * PTR32 * PTR32 *)(this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0106fb20 */
GEN_FRAME uint GEN_THISCALL F_0106fb20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x106fb20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x12b5724));
  F_01050b60((int)this + 0x10 GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x12b574c));
  F_01050d30((undefined *)((int)this + 0x20) GEN_EDX_ARG,param_2,param_4);
  *(undefined4 *)((int)this + 0x30) = param_1;
  *(undefined2 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x28) = *param_3;
  *(undefined4 *)((int)this + 0x2c) = param_3[1];
  return (uint)this;
}

/* ref: Application::Network::ZoneProtoChannel::ClientPacketBuilder::vf0 */
GEN_FRAME uint GEN_THISCALL F_0106fb80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x106fb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x12b5724));
  *(undefined * PTR32 * PTR32 *)(this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0106fbc0 */
GEN_FRAME uint GEN_THISCALL F_0106fbc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fbc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[4])REFP(0x12b5724));
  F_01050b60((int)this + 0x10 GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) =
       (*(undefined * PTR32 (*)[1])REFP(0x12b571c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x12b574c));
  F_01050d30((undefined *)((int)this + 0x20) GEN_EDX_ARG,param_2,param_3);
  *(undefined4 *)((int)this + 0x30) = param_1;
  *(undefined2 *)((int)this + 0x34) = 0;
  return (uint)this;
}

/* ref: Unwind@0106fc20 */
GEN_NOFRAME uint F_0106fc20(unsigned int gen_a0)
{
  GEN_ENTER(0x106fc20u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c45be8((undefined *)(in_ebp - 0x10) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0106fc28 */
GEN_NOFRAME uint F_0106fc28(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fc28u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 - 0x14) ^ param_2 + 0xcU GEN_EDX_ARG);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f5cbc)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fc43 */
GEN_NOFRAME uint F_0106fc43(unsigned int gen_a0)
{
  GEN_ENTER(0x106fc43u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c45be8((undefined *)(in_ebp - 0x10) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0106fc4b */
GEN_NOFRAME uint F_0106fc4b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fc4bu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 - 0x14) ^ param_2 + 0xcU GEN_EDX_ARG);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f5ce8)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fc66 */
GEN_NOFRAME uint F_0106fc66(unsigned int gen_a0)
{
  GEN_ENTER(0x106fc66u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c45be8((undefined *)(in_ebp - 0x10) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0106fc6e */
GEN_NOFRAME uint F_0106fc6e(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fc6eu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 - 0x14) ^ param_2 + 0xcU GEN_EDX_ARG);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f5d14)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fc89 */
GEN_NOFRAME unsigned int F_0106fc89(unsigned int gen_a0)
{
  GEN_ENTER(0x106fc89u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00478e10(*(undefined4 *)(in_ebp - 0x10) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@0106fc91 */
GEN_NOFRAME uint F_0106fc91(unsigned int gen_a0)
{
  GEN_ENTER(0x106fc91u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00479860(((undefined *)GEN_TOP((*(int *)(in_ebp - 0x10) + 0x18))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0106fc9c */
GEN_NOFRAME uint F_0106fc9c(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fc9cu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 - 0x14) ^ param_2 + 0xcU GEN_EDX_ARG);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f5d48)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fcb7 */
GEN_NOFRAME uint F_0106fcb7(unsigned int gen_a0)
{
  GEN_ENTER(0x106fcb7u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c45be8((undefined *)(in_ebp - 0x10) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0106fcbf */
GEN_NOFRAME uint F_0106fcbf(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fcbfu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 - 0x14) ^ param_2 + 0xcU GEN_EDX_ARG);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f5d74)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_0106fcda */
GEN_NOFRAME uint F_0106fcda(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fcdau, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 - 0x14) ^ param_2 + 0xcU GEN_EDX_ARG);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f69e0)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fd00 */
GEN_NOFRAME unsigned int F_0106fd00(unsigned int gen_a0)
{
  GEN_ENTER(0x106fd00u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(*(undefined * PTR32 *)(in_ebp - 0x10) GEN_EDX_ARG);
  return;
}

/* ref: FUN_0106fd08 */
GEN_NOFRAME uint F_0106fd08(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fd08u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 - 0xc) ^ param_2 + 0xcU GEN_EDX_ARG);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6c0c)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fd30 */
GEN_NOFRAME unsigned int F_0106fd30(unsigned int gen_a0)
{
  GEN_ENTER(0x106fd30u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0((undefined *)(in_ebp - 0x14) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@0106fd38 */
GEN_NOFRAME unsigned int F_0106fd38(unsigned int gen_a0)
{
  GEN_ENTER(0x106fd38u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb20a0((undefined *)(in_ebp - 0x14) GEN_EDX_ARG);
  return;
}

/* ref: FUN_0106fd40 */
GEN_NOFRAME uint F_0106fd40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fd40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 - 0x14) ^ param_2 + 0xcU GEN_EDX_ARG);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6c40)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fd60 */
GEN_NOFRAME unsigned int F_0106fd60(unsigned int gen_a0)
{
  GEN_ENTER(0x106fd60u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0((undefined *)(in_ebp - 0x14) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@0106fd68 */
GEN_NOFRAME unsigned int F_0106fd68(unsigned int gen_a0)
{
  GEN_ENTER(0x106fd68u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb20a0((undefined *)(in_ebp - 0x14) GEN_EDX_ARG);
  return;
}

/* ref: FUN_0106fd70 */
GEN_NOFRAME uint F_0106fd70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fd70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 - 0x28) ^ param_2 + 0xcU GEN_EDX_ARG);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6c74)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fd90 */
GEN_NOFRAME unsigned int F_0106fd90(unsigned int gen_a0)
{
  GEN_ENTER(0x106fd90u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0((undefined *)(in_ebp - 0x14) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@0106fd98 */
GEN_NOFRAME unsigned int F_0106fd98(unsigned int gen_a0)
{
  GEN_ENTER(0x106fd98u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb20a0((undefined *)(in_ebp - 0x14) GEN_EDX_ARG);
  return;
}

/* ref: FUN_0106fda0 */
GEN_NOFRAME uint F_0106fda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 - 0x24) ^ param_2 + 0xcU GEN_EDX_ARG);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6ca8)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fdc0 */
GEN_NOFRAME unsigned int F_0106fdc0(unsigned int gen_a0)
{
  GEN_ENTER(0x106fdc0u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1870(*(undefined4 *)(in_ebp - 0x10) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@0106fdc8 */
GEN_NOFRAME unsigned int F_0106fdc8(unsigned int gen_a0)
{
  GEN_ENTER(0x106fdc8u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1a30(*(int *)(in_ebp - 0x10) + 4 GEN_EDX_ARG);
  return;
}

/* ref: Unwind@0106fdd3 */
GEN_NOFRAME unsigned int F_0106fdd3(unsigned int gen_a0)
{
  GEN_ENTER(0x106fdd3u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(((undefined *)GEN_TOP((*(int *)(in_ebp - 0x10) + 0x10))) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@0106fdde */
GEN_NOFRAME uint F_0106fdde(unsigned int gen_a0)
{
  GEN_ENTER(0x106fddeu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb3020(((undefined *)GEN_TOP((*(int *)(in_ebp - 0x10) + 0x20))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Unwind@0106fde9 */
GEN_NOFRAME uint F_0106fde9(unsigned int gen_a0)
{
  GEN_ENTER(0x106fde9u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb3070(((undefined *)GEN_TOP((*(int *)(in_ebp - 0x10) + 0x3c))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Unwind@0106fdf4 */
GEN_NOFRAME uint F_0106fdf4(unsigned int gen_a0)
{
  GEN_ENTER(0x106fdf4u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb30c0(((undefined *)GEN_TOP((*(int *)(in_ebp - 0x10) + 0x58))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Unwind@0106fdff */
GEN_NOFRAME uint F_0106fdff(unsigned int gen_a0)
{
  GEN_ENTER(0x106fdffu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb30d0(((undefined *)GEN_TOP((*(int *)(in_ebp - 0x10) + 0x3f0))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0106fe0d */
GEN_NOFRAME uint F_0106fe0d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fe0du, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 - 0xc) ^ param_2 + 0xcU GEN_EDX_ARG);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6ccc)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fe30 */
GEN_NOFRAME unsigned int F_0106fe30(unsigned int gen_a0)
{
  GEN_ENTER(0x106fe30u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0((undefined *)(in_ebp - 0x128) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@0106fe3b */
GEN_NOFRAME unsigned int F_0106fe3b(unsigned int gen_a0)
{
  GEN_ENTER(0x106fe3bu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb20a0((undefined *)(in_ebp - 0x128) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@0106fe46 */
GEN_NOFRAME uint F_0106fe46(unsigned int gen_a0)
{
  GEN_ENTER(0x106fe46u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb18e0(*(undefined4 *)(in_ebp - 0x140));
  return uVar1;
}

/* ref: FUN_0106fe54 */
GEN_NOFRAME uint F_0106fe54(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fe54u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 - 0x144) ^ param_2 + 0xcU GEN_EDX_ARG);
  F_00c47745(*(uint *)(param_2 - 4) ^ param_2 + 0xcU GEN_EDX_ARG);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6d40)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fe80 */
GEN_NOFRAME unsigned int F_0106fe80(unsigned int gen_a0)
{
  GEN_ENTER(0x106fe80u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1870(*(undefined4 *)(in_ebp - 0x10) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@0106fe88 */
GEN_NOFRAME unsigned int F_0106fe88(unsigned int gen_a0)
{
  GEN_ENTER(0x106fe88u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1a30(*(int *)(in_ebp - 0x10) + 4 GEN_EDX_ARG);
  return;
}

/* ref: Unwind@0106fe93 */
GEN_NOFRAME unsigned int F_0106fe93(unsigned int gen_a0)
{
  GEN_ENTER(0x106fe93u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(((undefined *)GEN_TOP((*(int *)(in_ebp - 0x10) + 0x10))) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@0106fe9e */
GEN_NOFRAME uint F_0106fe9e(unsigned int gen_a0)
{
  GEN_ENTER(0x106fe9eu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb3020(((undefined *)GEN_TOP((*(int *)(in_ebp - 0x10) + 0x20))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Unwind@0106fea9 */
GEN_NOFRAME uint F_0106fea9(unsigned int gen_a0)
{
  GEN_ENTER(0x106fea9u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb3070(((undefined *)GEN_TOP((*(int *)(in_ebp - 0x10) + 0x3c))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0106feb4 */
GEN_NOFRAME uint F_0106feb4(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106feb4u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 - 0x14) ^ param_2 + 0xcU GEN_EDX_ARG);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6d64)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fed0 */
GEN_NOFRAME uint F_0106fed0(unsigned int gen_a0)
{
  GEN_ENTER(0x106fed0u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb5b50((undefined *)(in_ebp - 0x1c) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Unwind@0106fed8 */
GEN_NOFRAME unsigned int F_0106fed8(unsigned int gen_a0)
{
  GEN_ENTER(0x106fed8u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  F_00cb5a10();
  return;
}

/* ref: FUN_0106fee0 */
GEN_NOFRAME uint F_0106fee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 - 0x28) ^ param_2 + 0xcU GEN_EDX_ARG);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6dc0)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106ff00 */
GEN_NOFRAME uint F_0106ff00(unsigned int gen_a0)
{
  GEN_ENTER(0x106ff00u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb18e0(*(undefined4 *)(in_ebp - 0x10));
  return uVar1;
}

/* ref: FUN_0106ff0b */
GEN_NOFRAME uint F_0106ff0b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106ff0bu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 - 0x14) ^ param_2 + 0xcU GEN_EDX_ARG);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6dec)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106ff30 */
GEN_NOFRAME unsigned int F_0106ff30(unsigned int gen_a0)
{
  GEN_ENTER(0x106ff30u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb4af0(((undefined *)GEN_TOP((*(int *)(in_ebp - 0x10) + 8))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_0106ff3b */
GEN_NOFRAME uint F_0106ff3b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106ff3bu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 - 0x14) ^ param_2 + 0xcU GEN_EDX_ARG);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6e18)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106ff60 */
GEN_NOFRAME uint F_0106ff60(unsigned int gen_a0)
{
  GEN_ENTER(0x106ff60u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb2a00(*(undefined * PTR32 *)(in_ebp - 0x10) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0106ff68 */
GEN_NOFRAME uint F_0106ff68(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106ff68u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 - 0xc) ^ param_2 + 0xcU GEN_EDX_ARG);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6e44)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106ff90 */
GEN_NOFRAME uint F_0106ff90(unsigned int gen_a0)
{
  GEN_ENTER(0x106ff90u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb2a00(*(undefined * PTR32 *)(in_ebp - 0x10) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0106ff98 */
GEN_NOFRAME uint F_0106ff98(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106ff98u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 - 0xc) ^ param_2 + 0xcU GEN_EDX_ARG);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6e70)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106ffc0 */
GEN_NOFRAME uint F_0106ffc0(unsigned int gen_a0)
{
  GEN_ENTER(0x106ffc0u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb2a00(*(undefined * PTR32 *)(in_ebp - 0x10) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0106ffc8 */
GEN_NOFRAME uint F_0106ffc8(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106ffc8u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 - 0xc) ^ param_2 + 0xcU GEN_EDX_ARG);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6e9c)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@0106fff0 */
GEN_NOFRAME uint F_0106fff0(unsigned int gen_a0)
{
  GEN_ENTER(0x106fff0u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb2a00(*(undefined * PTR32 *)(in_ebp - 0x10) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0106fff8 */
GEN_NOFRAME uint F_0106fff8(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x106fff8u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 - 0xc) ^ param_2 + 0xcU GEN_EDX_ARG);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6ec8)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070020 */
GEN_NOFRAME unsigned int F_01070020(unsigned int gen_a0)
{
  GEN_ENTER(0x1070020u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(*(undefined * PTR32 *)(in_ebp - 0x10) GEN_EDX_ARG);
  return;
}

/* ref: FUN_01070028 */
GEN_NOFRAME uint F_01070028(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1070028u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 - 0xc) ^ param_2 + 0xcU GEN_EDX_ARG);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6ef4)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070050 */
GEN_NOFRAME unsigned int F_01070050(unsigned int gen_a0)
{
  GEN_ENTER(0x1070050u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(*(undefined * PTR32 *)(in_ebp - 0x10) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@01070058 */
GEN_NOFRAME unsigned int F_01070058(unsigned int gen_a0)
{
  GEN_ENTER(0x1070058u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(((undefined *)GEN_TOP((*(int *)(in_ebp - 0x10) + 8))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_01070063 */
GEN_NOFRAME uint F_01070063(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1070063u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 - 0x10) ^ param_2 + 0xcU GEN_EDX_ARG);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6f28)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070080 */
GEN_NOFRAME unsigned int F_01070080(unsigned int gen_a0)
{
  GEN_ENTER(0x1070080u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb62e0(*(undefined4 *)(in_ebp - 0x10) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@01070088 */
GEN_NOFRAME uint F_01070088(unsigned int gen_a0)
{
  GEN_ENTER(0x1070088u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb5e70(*(undefined4 *)(in_ebp + 8));
  return uVar1;
}

/* ref: Unwind@010700b0 */
GEN_NOFRAME unsigned int F_010700b0(unsigned int gen_a0)
{
  GEN_ENTER(0x10700b0u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(*(undefined * PTR32 *)(in_ebp - 0x10) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@010700b8 */
GEN_NOFRAME unsigned int F_010700b8(unsigned int gen_a0)
{
  GEN_ENTER(0x10700b8u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(((undefined *)GEN_TOP((*(int *)(in_ebp - 0x10) + 8))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_010700c3 */
GEN_NOFRAME uint F_010700c3(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x10700c3u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 - 0x14) ^ param_2 + 0xcU GEN_EDX_ARG);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6f90)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@010700e0 */
GEN_NOFRAME unsigned int F_010700e0(unsigned int gen_a0)
{
  GEN_ENTER(0x10700e0u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(*(undefined * PTR32 *)(in_ebp - 0x10) GEN_EDX_ARG);
  return;
}

/* ref: FUN_010700e8 */
GEN_NOFRAME uint F_010700e8(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x10700e8u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 - 0xc) ^ param_2 + 0xcU GEN_EDX_ARG);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6fbc)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070110 */
GEN_NOFRAME unsigned int F_01070110(unsigned int gen_a0)
{
  GEN_ENTER(0x1070110u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0((undefined *)(in_ebp - 0x18) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@01070118 */
GEN_NOFRAME unsigned int F_01070118(unsigned int gen_a0)
{
  GEN_ENTER(0x1070118u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb20a0((undefined *)(in_ebp - 0x18) GEN_EDX_ARG);
  return;
}

/* ref: FUN_01070120 */
GEN_NOFRAME uint F_01070120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1070120u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 - 0x1c) ^ param_2 + 0xcU GEN_EDX_ARG);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f6ff0)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070140 */
GEN_NOFRAME uint F_01070140(unsigned int gen_a0)
{
  GEN_ENTER(0x1070140u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb18e0(*(undefined4 *)(in_ebp - 0x14));
  return uVar1;
}

/* ref: Unwind@0107014b */
GEN_NOFRAME unsigned int F_0107014b(unsigned int gen_a0)
{
  GEN_ENTER(0x107014bu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(*(undefined * PTR32 *)(in_ebp - 0x14) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@01070153 */
GEN_NOFRAME unsigned int F_01070153(unsigned int gen_a0)
{
  GEN_ENTER(0x1070153u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(((undefined *)GEN_TOP((*(int *)(in_ebp - 0x14) + 8))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_0107015e */
GEN_NOFRAME uint F_0107015e(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x107015eu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 - 0x18) ^ param_2 + 0xcU GEN_EDX_ARG);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f702c)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070180 */
GEN_NOFRAME unsigned int F_01070180(unsigned int gen_a0)
{
  GEN_ENTER(0x1070180u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb62e0(*(undefined4 *)(in_ebp - 0x10) GEN_EDX_ARG);
  return;
}

/* ref: FUN_01070188 */
GEN_NOFRAME uint F_01070188(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1070188u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 - 0xc) ^ param_2 + 0xcU GEN_EDX_ARG);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f7058)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@010701b0 */
GEN_NOFRAME unsigned int F_010701b0(unsigned int gen_a0)
{
  GEN_ENTER(0x10701b0u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb62e0(*(undefined4 *)(in_ebp - 0x10) GEN_EDX_ARG);
  return;
}

/* ref: FUN_010701b8 */
GEN_NOFRAME uint F_010701b8(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x10701b8u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 - 0xc) ^ param_2 + 0xcU GEN_EDX_ARG);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f7084)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@010701e0 */
GEN_NOFRAME unsigned int F_010701e0(unsigned int gen_a0)
{
  GEN_ENTER(0x10701e0u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(*(undefined * PTR32 *)(in_ebp - 0x14) GEN_EDX_ARG);
  return;
}

/* ref: FUN_010701e8 */
GEN_NOFRAME uint F_010701e8(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x10701e8u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 - 0x18) ^ param_2 + 0xcU GEN_EDX_ARG);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f70b0)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070210 */
GEN_NOFRAME uint F_01070210(unsigned int gen_a0)
{
  GEN_ENTER(0x1070210u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb5fd0(in_ebp - 0x140);
  return uVar1;
}

/* ref: Unwind@0107021b */
GEN_NOFRAME uint F_0107021b(unsigned int gen_a0)
{
  GEN_ENTER(0x107021bu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb5fd0(in_ebp - 0x248);
  return uVar1;
}

/* ref: Unwind@01070226 */
GEN_NOFRAME unsigned int F_01070226(unsigned int gen_a0)
{
  GEN_ENTER(0x1070226u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0((undefined *)(in_ebp - 0x18) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@0107022e */
GEN_NOFRAME unsigned int F_0107022e(unsigned int gen_a0)
{
  GEN_ENTER(0x107022eu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0((undefined *)(in_ebp - 0x20) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@01070236 */
GEN_NOFRAME unsigned int F_01070236(unsigned int gen_a0)
{
  GEN_ENTER(0x1070236u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0((undefined *)(in_ebp - 0x34) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@0107023e */
GEN_NOFRAME unsigned int F_0107023e(unsigned int gen_a0)
{
  GEN_ENTER(0x107023eu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0((undefined *)(in_ebp - 0x2c) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@01070246 */
GEN_NOFRAME uint F_01070246(unsigned int gen_a0)
{
  GEN_ENTER(0x1070246u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb6940((undefined *)(in_ebp - 0x34) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Unwind@0107024e */
GEN_NOFRAME uint F_0107024e(unsigned int gen_a0)
{
  GEN_ENTER(0x107024eu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb18e0(*(undefined4 *)(in_ebp - 0x38));
  return uVar1;
}

/* ref: Unwind@01070259 */
GEN_NOFRAME unsigned int F_01070259(unsigned int gen_a0)
{
  GEN_ENTER(0x1070259u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(*(undefined * PTR32 *)(in_ebp - 0x38) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@01070261 */
GEN_NOFRAME unsigned int F_01070261(unsigned int gen_a0)
{
  GEN_ENTER(0x1070261u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(((undefined *)GEN_TOP((*(int *)(in_ebp - 0x38) + 8))) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@0107026c */
GEN_NOFRAME unsigned int F_0107026c(unsigned int gen_a0)
{
  GEN_ENTER(0x107026cu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0((undefined *)(in_ebp - 0x34) GEN_EDX_ARG);
  return;
}

/* ref: FUN_01070274 */
GEN_NOFRAME uint F_01070274(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x1070274u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 - 0x24c) ^ param_2 + 0xcU GEN_EDX_ARG);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f70d4)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@010702a0 */
GEN_NOFRAME unsigned int F_010702a0(unsigned int gen_a0)
{
  GEN_ENTER(0x10702a0u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0((undefined *)(in_ebp - 0x14) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@010702a8 */
GEN_NOFRAME unsigned int F_010702a8(unsigned int gen_a0)
{
  GEN_ENTER(0x10702a8u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb20a0((undefined *)(in_ebp - 0x14) GEN_EDX_ARG);
  return;
}

/* ref: FUN_010702b0 */
GEN_NOFRAME uint F_010702b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x10702b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 - 0x10) ^ param_2 + 0xcU GEN_EDX_ARG);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f7160)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@010702d0 */
GEN_NOFRAME uint F_010702d0(unsigned int gen_a0)
{
  GEN_ENTER(0x10702d0u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb2a30(*(undefined * PTR32 *)(in_ebp - 0x10) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Unwind@010702d8 */
GEN_NOFRAME unsigned int F_010702d8(unsigned int gen_a0)
{
  GEN_ENTER(0x10702d8u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb5f00(*(int *)(in_ebp - 0x10) + 0xc GEN_EDX_ARG);
  return;
}

/* ref: Unwind@010702e3 */
GEN_NOFRAME unsigned int F_010702e3(unsigned int gen_a0)
{
  GEN_ENTER(0x10702e3u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb1fc0(((undefined *)GEN_TOP((*(int *)(in_ebp - 0x10) + 0x14))) GEN_EDX_ARG);
  return;
}

/* ref: Unwind@010702ee */
GEN_NOFRAME uint F_010702ee(unsigned int gen_a0)
{
  GEN_ENTER(0x10702eeu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb8370(((undefined *)GEN_TOP((*(int *)(in_ebp - 0x10) + 0x34))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Unwind@010702f9 */
GEN_NOFRAME uint F_010702f9(unsigned int gen_a0)
{
  GEN_ENTER(0x10702f9u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb7d90(((undefined *)GEN_TOP((*(int *)(in_ebp - 0x10) + 0x44))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Unwind@01070304 */
GEN_NOFRAME uint F_01070304(unsigned int gen_a0)
{
  GEN_ENTER(0x1070304u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cb69e0(((undefined *)GEN_TOP((*(int *)(in_ebp - 0x10) + 0x68))) GEN_EDX_ARG);
  return uVar1;
}

/* ref: Unwind@0107030f */
GEN_NOFRAME unsigned int F_0107030f(unsigned int gen_a0)
{
  GEN_ENTER(0x107030fu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb6a40(((undefined *)GEN_TOP((*(int *)(in_ebp - 0x10) + 0x84))) GEN_EDX_ARG);
  return;
}

/* ref: FUN_0107031d */
GEN_NOFRAME uint F_0107031d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x107031du, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00c47745(*(uint *)(param_2 - 0x14) ^ param_2 + 0xcU GEN_EDX_ARG);
  uVar1 = F_00c54e30(&(*(undefined (*)[36])REFP(0x12f7184)),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Unwind@01070340 */
GEN_NOFRAME unsigned int F_01070340(unsigned int gen_a0)
{
  GEN_ENTER(0x1070340u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  F_00cb62e0(*(undefined4 *)(in_ebp - 0x10) GEN_EDX_ARG);
  return;
}

